#ifndef MIDI_CONFIG_H
#define MIDI_CONFIG_H

#include <circle/types.h>
#include <fatfs/ff.h>

void midi_config_init(FATFS *file_system);
void midi_config_service(u64 now_us);
void midi_config_mark_dirty(u64 now_us);

#endif
