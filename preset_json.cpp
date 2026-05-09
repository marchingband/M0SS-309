#include "preset_json.h"
#include "strings.h"

#include <stdarg.h>
#include <string.h>

static boolean append_text(char *buf, size_t size, size_t *offset, const char *fmt, ...)
{
    if (*offset >= size) {
        return FALSE;
    }

    va_list args;
    va_start(args, fmt);
    int written = vsnprintf(buf + *offset, size - *offset, fmt, args);
    va_end(args);

    if (written < 0) {
        return FALSE;
    }

    size_t count = (size_t) written;
    if (*offset + count >= size) {
        return FALSE;
    }

    *offset += count;
    return TRUE;
}

static boolean append_literal(char *buf, size_t size, size_t *offset, const char *text)
{
    size_t len = strlen(text);
    if (*offset + len >= size) {
        return FALSE;
    }

    memcpy(buf + *offset, text, len);
    *offset += len;
    buf[*offset] = '\0';
    return TRUE;
}

static void format_float_value(char *buf, size_t size, float value)
{
    if (size == 0) {
        return;
    }

    if (value != value) {
        snprintf(buf, size, "0");
        return;
    }

    bool negative = value < 0.0f;
    float magnitude = negative ? -value : value;
    long scaled = (long) (magnitude * 1000000.0f + 0.5f);
    long whole = scaled / 1000000L;
    long fraction = scaled % 1000000L;

    if (fraction == 0) {
        if (negative) {
            snprintf(buf, size, "-%d", (int) whole);
        } else {
            snprintf(buf, size, "%d", (int) whole);
        }
        return;
    }

    char fraction_buf[16];
    snprintf(fraction_buf, sizeof(fraction_buf), "%06d", (int) fraction);

    int trim = (int) strlen(fraction_buf);
    while (trim > 0 && fraction_buf[trim - 1] == '0') {
        trim--;
    }
    fraction_buf[trim] = '\0';

    if (negative) {
        snprintf(buf, size, "-%d.%s", (int) whole, fraction_buf);
    } else {
        snprintf(buf, size, "%d.%s", (int) whole, fraction_buf);
    }
}

static boolean append_float_value(char *buf, size_t size, size_t *offset, float value)
{
    char value_buf[32];
    format_float_value(value_buf, sizeof(value_buf), value);
    return append_literal(buf, size, offset, value_buf);
}

static const char *find_json_key(const char *buf, const char *key)
{
    char pattern[64];
    int written = snprintf(pattern, sizeof(pattern), "\"%s\"", key);
    if (written <= 0 || (size_t) written >= sizeof(pattern)) {
        return 0;
    }

    return strstr(buf, pattern);
}

static boolean parse_float_token(const char *text, char **endptr, float *out)
{
    const char *cursor = text;
    while (*cursor == ' ' || *cursor == '\n' || *cursor == '\r' || *cursor == '\t') {
        cursor++;
    }

    float sign = 1.0f;
    if (*cursor == '-') {
        sign = -1.0f;
        cursor++;
    } else if (*cursor == '+') {
        cursor++;
    }

    long whole = 0;
    bool has_digits = false;
    while (*cursor >= '0' && *cursor <= '9') {
        whole = (whole * 10) + (*cursor - '0');
        cursor++;
        has_digits = true;
    }

    float fraction = 0.0f;
    float fraction_scale = 0.1f;
    if (*cursor == '.') {
        cursor++;
        while (*cursor >= '0' && *cursor <= '9') {
            fraction += fraction_scale * (float) (*cursor - '0');
            fraction_scale *= 0.1f;
            cursor++;
            has_digits = true;
        }
    }

    if (!has_digits) {
        return FALSE;
    }

    float value = sign * ((float) whole + fraction);

    if (*cursor == 'e' || *cursor == 'E') {
        cursor++;
        char *exp_end = 0;
        long exponent = strtol(cursor, &exp_end);
        if (exp_end == cursor) {
            return FALSE;
        }

        float scale = 1.0f;
        long steps = exponent < 0 ? -exponent : exponent;
        for (long i = 0; i < steps; i++) {
            scale *= 10.0f;
        }

        value = exponent < 0 ? value / scale : value * scale;
        cursor = exp_end;
    }

    *out = value;
    *endptr = const_cast<char *>(cursor);
    return TRUE;
}

static boolean parse_float_value_if_present(const char *buf, const char *key, float *out)
{
    const char *loc = find_json_key(buf, key);
    if (loc == 0) {
        return TRUE;
    }

    const char *colon = strchr(loc, ':');
    if (colon == 0) {
        return FALSE;
    }

    char *endptr = 0;
    if (!parse_float_token(colon + 1, &endptr, out)) {
        return FALSE;
    }
    return TRUE;
}

static boolean parse_cc_map(const char *buf, u8 *cc_map, unsigned cc_map_count)
{
    const char *loc = find_json_key(buf, "cc_map");
    if (loc == 0) {
        return FALSE;
    }

    const char *array = strchr(loc, '[');
    if (array == 0) {
        return FALSE;
    }

    const char *cursor = array + 1;
    for (unsigned i = 0; i < cc_map_count; i++) {
        while (*cursor == ' ' || *cursor == '\n' || *cursor == '\r' || *cursor == '\t') {
            cursor++;
        }

        char *endptr = 0;
        long value = strtol(cursor, &endptr);
        if (endptr == cursor || value < 0 || value > 255) {
            return FALSE;
        }

        cc_map[i] = (u8) value;
        cursor = endptr;

        while (*cursor == ' ' || *cursor == '\n' || *cursor == '\r' || *cursor == '\t') {
            cursor++;
        }

        if (i + 1 < cc_map_count) {
            if (*cursor != ',') {
                return FALSE;
            }
            cursor++;
        }
    }

    while (*cursor == ' ' || *cursor == '\n' || *cursor == '\r' || *cursor == '\t') {
        cursor++;
    }

    return *cursor == ']';
}

boolean preset_json_write(
    char *buf,
    size_t size,
    int bank,
    int slot,
    const struct PresetPatchField *fields,
    unsigned field_count,
    const float *patch_values,
    const u8 *cc_map,
    unsigned cc_map_count
)
{
    size_t offset = 0;

    if (!append_text(buf, size, &offset, "{\n")) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "  \"schema_version\": 1,\n")) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "  \"bank\": %d,\n", bank)) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "  \"slot\": %d,\n", slot)) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "  \"patch\": {\n")) {
        return FALSE;
    }

    for (unsigned i = 0; i < field_count; i++) {
        if (!append_text(buf, size, &offset, "    \"%s\": ", fields[i].key)) {
            return FALSE;
        }
        if (!append_float_value(buf, size, &offset, patch_values[i])) {
            return FALSE;
        }
        if (!append_text(buf, size, &offset, "%s\n", i + 1 < field_count ? "," : "")) {
            return FALSE;
        }
    }

    if (!append_text(buf, size, &offset, "  },\n")) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "  \"cc_map\": [")) {
        return FALSE;
    }

    for (unsigned i = 0; i < cc_map_count; i++) {
        if (!append_text(
                buf,
                size,
                &offset,
                "%s%u",
                i == 0 ? "" : ", ",
                (unsigned) cc_map[i])) {
            return FALSE;
        }
    }

    if (!append_text(buf, size, &offset, "]\n")) {
        return FALSE;
    }
    if (!append_text(buf, size, &offset, "}\n")) {
        return FALSE;
    }

    return TRUE;
}

boolean preset_json_read(
    const char *buf,
    const struct PresetPatchField *fields,
    unsigned field_count,
    float *patch_values,
    u8 *cc_map,
    unsigned cc_map_count
)
{
    for (unsigned i = 0; i < field_count; i++) {
        if (!parse_float_value_if_present(buf, fields[i].key, &patch_values[i])) {
            return FALSE;
        }
    }

    if (!parse_cc_map(buf, cc_map, cc_map_count)) {
        return FALSE;
    }

    return TRUE;
}
