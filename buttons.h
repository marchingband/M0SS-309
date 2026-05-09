#ifndef BUTTONS_H
#define BUTTONS_H

#define NUM_BUTTONS (24 + 6) // 24 in the mux, 6 direct to GPIO
#define DEBOUNCE_TIME 5 // 50 ms (tick perios is 10ms)

#define BUTTON_NUM_ALT 17
#define BUTTON_NUM_ENCODER 29

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
#define BUTTON_NUM_LEARN 5

#define UI_MODE_PLAY 0
#define UI_MODE_LEARN 1
#define UI_MODE_SAVE 2
#define UI_MODE_LOAD 3

#include <circle/timer.h>

extern int matrix_row_selected;
extern int matrix_column_selected;
extern int ui_mode;

struct Param {
    int button;
    bool alt;
    bool cc;
};

void scan_buttons(CTimer *timer);
void process_buttons(CTimer *timer);
void handle_encoder(bool up, u64 now);
bool alt_held(void);
int get_matrix_cc_for_button(int num);

#endif
