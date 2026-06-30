#include "midi_config.h"

#include <circle/logger.h>
#include <string.h>
#include <stdlib.h>

#include "midi.h"
#include "preset_store.h"
#include "strings.h"

static const char FromMidiConfig[] = "MidiConfig";
static const char ConfigPath[] = PRESET_DRIVE "/m0ss-config.txt";
static const u64 WriteDebounceUs = 500000ULL;

static FATFS *s_FileSystem = 0;
static bool s_Ready = false;
static bool s_Dirty = false;
static u64 s_LastChangeUs = 0;

static bool parse_u8_line(const char *buffer, const char *prefix, long min_value, long max_value, bool required, u8 *out_value)
{
    if (buffer == 0 || prefix == 0 || out_value == 0) {
        return false;
    }

    size_t prefix_len = strlen(prefix);
    const char *line = strstr(buffer, prefix);
    if (line == 0) {
        return !required;
    }

    line += prefix_len;
    char *end = 0;
    long parsed = strtol(line, &end);
    if (end == line || parsed < min_value || parsed > max_value) {
        return false;
    }

    *out_value = (u8) parsed;
    return true;
}

static bool write_config_file(void)
{
    char buffer[96];
    int formatted = snprintf(
        buffer,
        sizeof(buffer),
        "midi_channel=%u\npitch_bend_up=%u\npitch_bend_down=%u\n",
        (unsigned) midi_channel,
        (unsigned) midi_pitch_bend_up,
        (unsigned) midi_pitch_bend_down);
    if (formatted <= 0 || (size_t) formatted >= sizeof(buffer)) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "format failed");
        return false;
    }
    unsigned len = (unsigned) formatted;

    FIL file;
    UINT written = 0;
    FRESULT result = f_open(&file, ConfigPath, FA_WRITE | FA_CREATE_ALWAYS);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "open failed (%u)", (unsigned) result);
        return false;
    }

    result = f_write(&file, buffer, len, &written);
    if (result != FR_OK || written != len) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "write failed result=%u written=%u expected=%u", (unsigned) result, written, (unsigned) len);
        f_close(&file);
        return false;
    }

    result = f_sync(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "sync failed (%u)", (unsigned) result);
        f_close(&file);
        return false;
    }

    result = f_close(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "close failed (%u)", (unsigned) result);
        return false;
    }

    CLogger::Get()->Write(
        FromMidiConfig,
        LogNotice,
        "saved channel=%u pb_up=%u pb_down=%u",
        (unsigned) midi_channel,
        (unsigned) midi_pitch_bend_up,
        (unsigned) midi_pitch_bend_down);
    return true;
}

void midi_config_init(FATFS *file_system)
{
    s_FileSystem = file_system;
    s_Ready = (s_FileSystem != 0);
    s_Dirty = false;
    s_LastChangeUs = 0;

    if (!s_Ready) {
        return;
    }

    FIL file;
    FRESULT result = f_open(&file, ConfigPath, FA_READ);
    if (result == FR_NO_FILE) {
        CLogger::Get()->Write(FromMidiConfig, LogNotice, "no config file, defaulting to omni");
        return;
    }
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "open failed (%u)", (unsigned) result);
        return;
    }

    char buffer[128];
    UINT read = 0;
    result = f_read(&file, buffer, sizeof(buffer) - 1, &read);
    f_close(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "read failed (%u)", (unsigned) result);
        return;
    }

    buffer[read] = '\0';

    u8 channel = 0;
    u8 pitch_bend_up = midi_pitch_bend_up;
    u8 pitch_bend_down = midi_pitch_bend_down;
    if (!parse_u8_line(buffer, "midi_channel=", 0, 16, true, &channel) ||
        !parse_u8_line(buffer, "pitch_bend_up=", 0, 12, false, &pitch_bend_up) ||
        !parse_u8_line(buffer, "pitch_bend_down=", 0, 12, false, &pitch_bend_down)) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "invalid config, defaulting to omni");
        return;
    }

    midi_channel = channel;
    midi_set_pitch_bend_up(pitch_bend_up);
    midi_set_pitch_bend_down(pitch_bend_down);
    CLogger::Get()->Write(
        FromMidiConfig,
        LogNotice,
        "loaded channel=%u pb_up=%u pb_down=%u",
        (unsigned) channel,
        (unsigned) midi_pitch_bend_up,
        (unsigned) midi_pitch_bend_down);
}

void midi_config_service(u64 now_us)
{
    if (!s_Ready || !s_Dirty) {
        return;
    }

    if (now_us - s_LastChangeUs < WriteDebounceUs) {
        return;
    }

    if (write_config_file()) {
        s_Dirty = false;
    }
}

void midi_config_mark_dirty(u64 now_us)
{
    if (!s_Ready) {
        return;
    }

    s_Dirty = true;
    s_LastChangeUs = now_us;
}
