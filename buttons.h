#ifndef BUTTONS_H
#define BUTTONS_H

#define NUM_BUTTONS (24 + 6) // 24 in the mux, 6 direct to GPIO
#define DEBOUNCE_TIME 5 // 50 ms (tick perios is 10ms)

#define BUTTON_NUM_ALT 17
#define BUTTON_NUM_ENCODER 29
#define BUTTON_NUM_OSC1_MIX 1
#define BUTTON_NUM_OSC2_MIX 19

#define BUTTON_NUM_MATRIX_ROW_0 23
#define BUTTON_NUM_MATRIX_ROW_1 10
#define BUTTON_NUM_MATRIX_ROW_2 12
#define BUTTON_NUM_MATRIX_ROW_3 24

#define BUTTON_NUM_MATRIX_COLUMN_0 22
#define BUTTON_NUM_MATRIX_COLUMN_1 13
#define BUTTON_NUM_MATRIX_COLUMN_2 7
#define BUTTON_NUM_MATRIX_COLUMN_3 9
#define BUTTON_NUM_MATRIX_COLUMN_4 25

#define BUTTON_NUM_POLY_MOD 23
#define BUTTON_NUM_MONO 2
#define BUTTON_NUM_LEARN 5
#define BUTTON_NUM_MIDI_CHANNEL 11
#define BUTTON_NUM_CHORUS_MODE 26
#define BUTTON_NUM_SAVE 12
#define BUTTON_NUM_LOAD 24

#define UI_MODE_PLAY 0
#define UI_MODE_LEARN 1
#define UI_MODE_SAVE 2
#define UI_MODE_LOAD 3

#define RESET_REQUEST_NONE 0
#define RESET_REQUEST_NORMAL 1
#define RESET_REQUEST_FACTORY 2

#include <circle/timer.h>

extern int matrix_row_selected;
extern int matrix_column_selected;
extern int ui_mode;

struct Param {
    int button;
    bool alt;
    bool cc;
};

extern struct Param param_selected;

void scan_buttons(CTimer *timer);
void process_buttons(CTimer *timer);
void handle_encoder(bool up, u64 now);
int get_reset_request(void);
bool alt_held(void);
int get_matrix_cc_for_button(int num);
bool midi_channel_adjust_held(void);
bool pitch_bend_up_adjust_held(void);
bool pitch_bend_down_adjust_held(void);
bool chorus_mode_display_held(void);
void set_param_selected(int button, bool is_cc);

#endif
