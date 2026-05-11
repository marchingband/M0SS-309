#include "midi_config.h"

#include <circle/logger.h>
#include <string.h>

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

static bool parse_midi_channel_line(const char *buffer, u8 *out_channel)
{
    if (buffer == 0 || out_channel == 0) {
        return false;
    }

    static const char Prefix[] = "midi_channel=";
    size_t prefix_len = sizeof(Prefix) - 1;
    const char *line = strstr(buffer, Prefix);
    if (line == 0) {
        return false;
    }

    line += prefix_len;
    char *end = 0;
    long parsed = strtol(line, &end);
    if (end == line || parsed < 0 || parsed > 16) {
        return false;
    }

    *out_channel = (u8) parsed;
    return true;
}

static bool write_config_file(void)
{
    char buffer[32];
    static const char Prefix[] = "midi_channel=";
    memcpy(buffer, Prefix, sizeof(Prefix) - 1);
    unsigned len = sizeof(Prefix) - 1;
    u8 channel = midi_channel;
    if (channel >= 10) {
        buffer[len++] = (char) ('0' + (channel / 10));
    }
    buffer[len++] = (char) ('0' + (channel % 10));
    buffer[len++] = '\n';
    buffer[len] = '\0';

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

    CLogger::Get()->Write(FromMidiConfig, LogNotice, "saved channel=%u", (unsigned) midi_channel);
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

    char buffer[64];
    UINT read = 0;
    result = f_read(&file, buffer, sizeof(buffer) - 1, &read);
    f_close(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "read failed (%u)", (unsigned) result);
        return;
    }

    buffer[read] = '\0';

    u8 channel = 0;
    if (!parse_midi_channel_line(buffer, &channel)) {
        CLogger::Get()->Write(FromMidiConfig, LogWarning, "invalid config, defaulting to omni");
        return;
    }

    midi_channel = channel;
    CLogger::Get()->Write(FromMidiConfig, LogNotice, "loaded channel=%u", (unsigned) channel);
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
