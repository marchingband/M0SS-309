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

void handle_note_on(u8 note);
void handle_note_off(u8 note);
void handle_midi_byte(u8 byte);
void midi_enter_learn_mode(void);
void midi_exit_learn_mode(void);
void midi_select_learn_target(int button, bool alt);
int get_mode_learn_current_cc(void);
int get_learn_mode_state(void);
u8 *get_cc_map(void);

#endif
