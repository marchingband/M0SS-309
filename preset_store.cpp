#include "preset_store.h"

#include <circle/logger.h>
#include <circle/timer.h>
#include <assert.h>
#include <string.h>

#include "dsp.h"
#include "buttons.h"
#include "midi.h"
#include "audio.h"
#include "mono_mode.h"
#include "preset_json.h"
#include "strings.h"

static const char FromPresetStore[] = "PresetStore";
static const char PresetDir[] = PRESET_DRIVE "/presets";
static const u64 CursorBlinkIntervalUs = 250000ULL;
static const unsigned JsonBufferSize = 16384;
static const int DefaultPresetBank = 0;
static const int DefaultPresetSlot = PRESET_SLOTS - 1;

enum PresetFieldId {
    PRESET_FIELD_MONO_MODE = 1000
};

bool preset_store_ready = false;
bool preset_exists[PRESET_BANKS][PRESET_SLOTS] = {0};
int preset_mode_bank = 0;
int preset_mode_slot_cursor = 0;
int current_preset_bank = -1;
int current_preset_slot = -1;

static FATFS *s_FileSystem = 0;

static const struct PresetPatchField s_PatchFields[] = {
    {"env_amp_a", 1},
    {"env_amp_d", 2},
    {"env_amp_s", 3},
    {"env_amp_r", 4},
    {"env_a", 5},
    {"env_d", 6},
    {"env_s", 7},
    {"env_r", 8},
    {"filter_ctf", 9},
    {"filter_res", 10},
    {"osc1_waveform", 11},
    {"osc1_pw", 12},
    {"osc1_sync", 13},
    {"osc2_waveform", 14},
    {"osc2_pw", 15},
    {"osc2_tune", 16},
    {"osc2_fine", 17},
    {"osc2_hi_lo", 18},
    {"osc2_key_track", 19},
    {"osc1_mix", 20},
    {"osc2_mix", 21},
    {"noise_mix", 22},
    {"lfo_waveform", 23},
    {"lfo_rate", 24},
    {"mod_matrix_lfo_os1", 26},
    {"mod_matrix_lfo_pw1", 27},
    {"mod_matrix_lfo_vcf", 28},
    {"mod_matrix_lfo_os2", 29},
    {"mod_matrix_lfo_pw2", 30},
    {"mod_matrix_env_os1", 31},
    {"mod_matrix_env_pw1", 32},
    {"mod_matrix_env_vcf", 33},
    {"mod_matrix_env_os2", 34},
    {"mod_matrix_env_pw2", 35},
    {"mod_matrix_nse_os1", 36},
    {"mod_matrix_nse_pw1", 37},
    {"mod_matrix_nse_vcf", 38},
    {"mod_matrix_nse_os2", 39},
    {"mod_matrix_nse_pw2", 40},
    {"mod_matrix_os2_os1", 41},
    {"mod_matrix_os2_pw1", 42},
    {"mod_matrix_os2_vcf", 43},
    {"poly_mod_matrix_lfo_os1", 44},
    {"poly_mod_matrix_lfo_pw1", 45},
    {"poly_mod_matrix_lfo_vcf", 46},
    {"poly_mod_matrix_lfo_os2", 47},
    {"poly_mod_matrix_lfo_pw2", 48},
    {"poly_mod_matrix_env_os1", 49},
    {"poly_mod_matrix_env_pw1", 50},
    {"poly_mod_matrix_env_vcf", 51},
    {"poly_mod_matrix_env_os2", 52},
    {"poly_mod_matrix_env_pw2", 53},
    {"poly_mod_matrix_nse_os1", 54},
    {"poly_mod_matrix_nse_pw1", 55},
    {"poly_mod_matrix_nse_vcf", 56},
    {"poly_mod_matrix_nse_os2", 57},
    {"poly_mod_matrix_nse_pw2", 58},
    {"poly_mod_matrix_os2_os1", 59},
    {"poly_mod_matrix_os2_pw1", 60},
    {"poly_mod_matrix_os2_vcf", 61},
    {"poly_mod", 62},
    {"transpose", 63},
    {"mono_mode", PRESET_FIELD_MONO_MODE},
    {"fx_chorus_mode", 70},
    {"fx_delay_time", 71},
    {"fx_delay_fb", 72},
    {"fx_delay_mix", 73},
    {"fx_reverb_time", 74},
    {"fx_reverb_feedback", 75},
    {"fx_reverb_mix", 76},
    {"fx_volume", 77},
};
static char s_JsonBuffer[JsonBufferSize];
static float s_PatchValues[sizeof(s_PatchFields) / sizeof(s_PatchFields[0])];
static u8 s_LoadedCCMap[NUM_CC_MAP];

static bool write_preset_file(int bank, int slot);

static bool bank_has_saved_slot(int bank)
{
    if (bank < 0 || bank >= PRESET_BANKS) {
        return false;
    }

    for (int slot = 0; slot < PRESET_SLOTS; slot++) {
        if (preset_exists[bank][slot]) {
            return true;
        }
    }

    return false;
}

static int find_first_saved_slot_in_bank(int bank)
{
    if (bank < 0 || bank >= PRESET_BANKS) {
        return -1;
    }

    for (int slot = 0; slot < PRESET_SLOTS; slot++) {
        if (preset_exists[bank][slot]) {
            return slot;
        }
    }

    return -1;
}

static void get_preset_path(int bank, int slot, char *path, size_t path_size)
{
    snprintf(path, path_size, PRESET_DRIVE "/presets/bank-%02d-slot-%02d.json", bank, slot);
}

static void set_param_vals(float *(&vals)[NUM_DSP], float val)
{
    for (int i = 0; i < NUM_DSP; i++) {
        if (vals[i] != 0) {
            *(vals[i]) = val;
        }
    }
}

static float clampf(float min_value, float max_value, float value)
{
    if (value < min_value) {
        return min_value;
    }
    if (value > max_value) {
        return max_value;
    }
    return value;
}

static void snapshot_patch_values(float *patch_values, unsigned field_count)
{
    for (unsigned i = 0; i < field_count; i++) {
        unsigned field_id = s_PatchFields[i].field_id;
        if (field_id > 0 && field_id < NUM_CC) {
            patch_values[i] = CCs[field_id].p[0] != 0 ? *(CCs[field_id].p[0]) : 0.0f;
            continue;
        }

        switch (field_id) {
        case PRESET_FIELD_MONO_MODE:
            patch_values[i] = mono_mode ? 1.0f : 0.0f;
            break;
        default:
            patch_values[i] = 0.0f;
            break;
        }
    }
}

static void apply_patch_values(const float *patch_values, unsigned field_count)
{
    for (unsigned i = 0; i < field_count; i++) {
        unsigned field_id = s_PatchFields[i].field_id;
        if (field_id > 0 && field_id < NUM_CC) {
            struct CC *cc = &CCs[field_id];
            if (cc->p[0] == 0) {
                continue;
            }

            float clamped = clampf(cc->min, cc->max, patch_values[i]);
            set_param_vals(cc->p, clamped);
            continue;
        }

        switch (field_id) {
        case PRESET_FIELD_MONO_MODE:
            midi_set_mono_mode(patch_values[i] >= 0.5f);
            break;
        default:
            break;
        }
    }
}

static void ensure_preset_dir(void)
{
    if (!preset_store_ready) {
        return;
    }

    DIR dir;
    FRESULT result = f_opendir(&dir, PresetDir);
    if (result == FR_OK) {
        f_closedir(&dir);
        return;
    }

    if (result == FR_NO_PATH) {
        result = f_mkdir(PresetDir);
        if (result != FR_OK) {
            CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to create preset dir (%u)", (unsigned) result);
        }
        return;
    }

    CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to access preset dir (%u)", (unsigned) result);
}

static bool parse_preset_filename(const char *filename, int *bank, int *slot)
{
    if (filename == 0 || bank == 0 || slot == 0) {
        return false;
    }

    static const char Prefix[] = "bank-";
    static const char Middle[] = "-slot-";
    static const char Suffix[] = ".json";

    const size_t prefix_len = sizeof(Prefix) - 1;
    const size_t middle_len = sizeof(Middle) - 1;

    if (strncmp(filename, Prefix, prefix_len) != 0) {
        return false;
    }

    char *end = 0;
    int parsed_bank = strtol(filename + prefix_len, &end);
    if (end == 0 || strncmp(end, Middle, middle_len) != 0) {
        return false;
    }

    int parsed_slot = strtol(end + middle_len, &end);
    if (end == 0 || strcmp(end, Suffix) != 0) {
        return false;
    }

    if (parsed_bank < 0 || parsed_bank >= PRESET_BANKS || parsed_slot < 0 || parsed_slot >= PRESET_SLOTS) {
        return false;
    }

    *bank = parsed_bank;
    *slot = parsed_slot;
    return true;
}

static void scan_preset_exists(void)
{
    memset(preset_exists, 0, sizeof(preset_exists));

    if (!preset_store_ready) {
        return;
    }

    DIR dir;
    FILINFO file_info;
    FRESULT result = f_findfirst(&dir, &file_info, PresetDir, "*");
    if (result != FR_OK) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to scan preset dir (%u)", (unsigned) result);
        return;
    }

    while (result == FR_OK && file_info.fname[0] != '\0') {
        if ((file_info.fattrib & AM_DIR) == 0) {
            int bank = -1;
            int slot = -1;
            if (parse_preset_filename(file_info.fname, &bank, &slot)) {
                preset_exists[bank][slot] = true;
            }
        }

        result = f_findnext(&dir, &file_info);
    }

    f_closedir(&dir);
}

void preset_store_init(FATFS *file_system)
{
    s_FileSystem = file_system;
    preset_store_ready = (s_FileSystem != 0);
    CLogger::Get()->Write(FromPresetStore, LogNotice, "init ready=%u", preset_store_ready ? 1U : 0U);
    ensure_preset_dir();
    scan_preset_exists();
}

void preset_store_finalize_boot_defaults(void)
{
    if (!preset_store_ready) {
        return;
    }

    if (!preset_exists[DefaultPresetBank][DefaultPresetSlot]) {
        if (!write_preset_file(DefaultPresetBank, DefaultPresetSlot)) {
            CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to seed default preset");
            return;
        }
    }

    current_preset_bank = DefaultPresetBank;
    current_preset_slot = DefaultPresetSlot;
    preset_mode_bank = DefaultPresetBank;
    preset_mode_slot_cursor = DefaultPresetSlot;
}

void preset_move_slot_cursor(int delta)
{
    if (ui_mode == UI_MODE_LOAD) {
        if (!bank_has_saved_slot(preset_mode_bank)) {
            return;
        }

        int next = preset_mode_slot_cursor;
        while (true) {
            int candidate = next + delta;
            if (candidate < 0 || candidate >= PRESET_SLOTS) {
                return;
            }
            next = candidate;
            if (preset_exists[preset_mode_bank][next]) {
                preset_mode_slot_cursor = next;
                return;
            }
        }
    }

    int next = preset_mode_slot_cursor + delta;
    if (next < 0) {
        next = 0;
    } else if (next >= PRESET_SLOTS) {
        next = PRESET_SLOTS - 1;
    }
    preset_mode_slot_cursor = next;
}

void preset_move_bank_cursor(int delta)
{
    if (ui_mode == UI_MODE_LOAD) {
        int next = preset_mode_bank;
        while (true) {
            int candidate = next + delta;
            if (candidate < 0 || candidate >= PRESET_BANKS) {
                return;
            }
            next = candidate;
            if (bank_has_saved_slot(next)) {
                preset_mode_bank = next;
                preset_mode_slot_cursor = find_first_saved_slot_in_bank(next);
                return;
            }
        }
    }

    int next = preset_mode_bank + delta;
    if (next < 0) {
        next = 0;
    } else if (next >= PRESET_BANKS) {
        next = PRESET_BANKS - 1;
    }
    preset_mode_bank = next;
}

static bool write_preset_file(int bank, int slot)
{
    CLogger::Get()->Write(FromPresetStore, LogNotice, "save request bank=%d slot=%d ready=%u", bank, slot, preset_store_ready ? 1U : 0U);
    snapshot_patch_values(s_PatchValues, sizeof(s_PatchFields) / sizeof(s_PatchFields[0]));

    if (!preset_json_write(
            s_JsonBuffer,
            sizeof(s_JsonBuffer),
            bank,
            slot,
            s_PatchFields,
            sizeof(s_PatchFields) / sizeof(s_PatchFields[0]),
            s_PatchValues,
            cc_map,
            NUM_CC_MAP)) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to build preset json");
        return false;
    }

    char path[64];
    get_preset_path(bank, slot, path, sizeof(path));
    CLogger::Get()->Write(FromPresetStore, LogNotice, "writing preset path=%s", path);

    FIL file;
    UINT written = 0;
    FRESULT result = f_open(&file, path, FA_WRITE | FA_CREATE_ALWAYS);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to open preset for write (%u)", (unsigned) result);
        return false;
    }

    size_t len = strlen(s_JsonBuffer);
    result = f_write(&file, s_JsonBuffer, (UINT) len, &written);
    if (result != FR_OK || written != len) {
        CLogger::Get()->Write(
            FromPresetStore,
            LogWarning,
            "failed to write preset result=%u written=%u expected=%u",
            (unsigned) result,
            written,
            (unsigned) len);
        f_close(&file);
        return false;
    }

    result = f_sync(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to sync preset (%u)", (unsigned) result);
        f_close(&file);
        return false;
    }

    result = f_close(&file);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to close preset after write (%u)", (unsigned) result);
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to write preset (%u)", (unsigned) result);
        return false;
    }

    preset_exists[bank][slot] = true;
    current_preset_bank = bank;
    current_preset_slot = slot;
    CLogger::Get()->Write(FromPresetStore, LogNotice, "save complete bank=%d slot=%d bytes=%u", bank, slot, written);
    return true;
}

static bool read_preset_file(int bank, int slot)
{
    CLogger::Get()->Write(FromPresetStore, LogNotice, "load request bank=%d slot=%d ready=%u exists=%u", bank, slot, preset_store_ready ? 1U : 0U, preset_exists[bank][slot] ? 1U : 0U);
    if (!preset_exists[bank][slot]) {
        return false;
    }

    char path[64];
    get_preset_path(bank, slot, path, sizeof(path));

    FIL file;
    FRESULT result = f_open(&file, path, FA_READ);
    if (result != FR_OK) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to open preset for read (%u)", (unsigned) result);
        return false;
    }

    FSIZE_t size = f_size(&file);
    if (size == 0 || size >= JsonBufferSize) {
        f_close(&file);
        CLogger::Get()->Write(FromPresetStore, LogWarning, "preset file size invalid");
        return false;
    }

    UINT read = 0;
    result = f_read(&file, s_JsonBuffer, (UINT) size, &read);
    f_close(&file);

    if (result != FR_OK || read != size) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to read preset (%u)", (unsigned) result);
        return false;
    }

    s_JsonBuffer[read] = '\0';
    snapshot_patch_values(s_PatchValues, sizeof(s_PatchFields) / sizeof(s_PatchFields[0]));
    if (!preset_json_read(
            s_JsonBuffer,
            s_PatchFields,
            sizeof(s_PatchFields) / sizeof(s_PatchFields[0]),
            s_PatchValues,
            s_LoadedCCMap,
            NUM_CC_MAP)) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "failed to parse preset json");
        return false;
    }

    apply_patch_values(s_PatchValues, sizeof(s_PatchFields) / sizeof(s_PatchFields[0]));
    memcpy(cc_map, s_LoadedCCMap, sizeof(cc_map));
    current_preset_bank = bank;
    current_preset_slot = slot;
    CLogger::Get()->Write(FromPresetStore, LogNotice, "load complete bank=%d slot=%d", bank, slot);
    return true;
}

bool preset_save_current_cursor(void)
{
    if (!preset_store_ready) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "save ignored: store not ready");
        return false;
    }
    bool ok = write_preset_file(preset_mode_bank, preset_mode_slot_cursor);
    if (!ok) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "save failed bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
    }
    return ok;
}

bool preset_load_current_cursor(void)
{
    if (!preset_store_ready) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "load ignored: store not ready");
        return false;
    }
    bool ok = read_preset_file(preset_mode_bank, preset_mode_slot_cursor);
    if (!ok) {
        CLogger::Get()->Write(FromPresetStore, LogWarning, "load failed bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
    }
    return ok;
}

bool preset_is_cursor_visible(void)
{
    u64 phase = CTimer::GetClockTicks64() / CursorBlinkIntervalUs;
    return (phase & 1ULL) == 0;
}
