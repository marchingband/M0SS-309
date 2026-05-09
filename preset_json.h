#ifndef PRESET_JSON_H
#define PRESET_JSON_H

#include <circle/util.h>
#include <stddef.h>

struct PresetPatchField {
    const char *key;
    unsigned field_id;
};

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
);

boolean preset_json_read(
    const char *buf,
    const struct PresetPatchField *fields,
    unsigned field_count,
    float *patch_values,
    u8 *cc_map,
    unsigned cc_map_count
);

#endif
