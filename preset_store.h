#ifndef PRESET_STORE_H
#define PRESET_STORE_H

#include <circle/util.h>
#include <fatfs/ff.h>

#define PRESET_DRIVE "SD:"
#define PRESET_BANKS 18
#define PRESET_SLOTS 11

extern bool preset_store_ready;
extern bool preset_exists[PRESET_BANKS][PRESET_SLOTS];
extern int preset_mode_bank;
extern int preset_mode_slot_cursor;
extern int current_preset_bank;
extern int current_preset_slot;

void preset_store_init(FATFS *file_system);
void preset_store_finalize_boot_defaults(void);
void preset_move_slot_cursor(int delta);
void preset_move_bank_cursor(int delta);
bool preset_save_current_cursor(void);
bool preset_load_current_cursor(void);
bool preset_is_cursor_visible(void);

#endif
