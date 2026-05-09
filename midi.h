#ifndef MIDI_H
#define MIDI_H

#include <circle/util.h>

#define MIDI_NOTE_OFF 8
#define MIDI_NOTE_ON 9
#define MIDI_AFTERTOUCH 0xD
#define MIDI_PITCH_BEND 0xE
#define MIDI_PROGRAM_CHANGE 12
#define MIDI_CC 11
#define MIDI_CC_VOLUME 7
#define MIDI_CC_PAN 10
#define MIDI_CC_EXP 11
#define MIDI_CC_SUSTAIN 64
#define MIDI_CC_RELEASE 72
#define MIDI_CC_MUTE 120
#define MIDI_CC_RESET 121

#define NUM_CC_MAP (128 + 1 + 1)
#define CC_MAP_VELOCITY_IDX 128
#define CC_MAP_AFTERTOUCH_IDX 129

#define LEARN_MODE_READY 0
#define LEARN_MODE_SELECTED 1
#define LEARN_MODE_LEARNED 2

#define CC_NUM_TUNE 16
#define CC_NUM_POLYMOD 62
#define CC_NUM_TRANSPOSE 63

extern u8 cc_map[NUM_CC_MAP];
extern int mode_learn_current_cc;
extern int learn_mode_state;

void handle_note_on(u8 note);
void handle_note_off(u8 note);
void handle_midi_byte(u8 byte);
void midi_set_mono_mode(bool enabled);
void midi_select_learn_target(int button, bool alt);

#endif
