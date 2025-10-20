#ifndef BUTTONS_H
#define BUTTONS_H

#define NUM_BUTTONS (24 + 6) // 24 in the mux, 5 direct to GPIO
#define DEBOUNCE_TIME 5 // 50 ms (tick perios is 10ms)

#define BUTTON_NUM_ALT 0
#define BUTTON_NUM_ENCODER 29

#define BUTTON_NUM_CHORUS 22

#define BUTTON_NUM_MATRIX_ROW_0 12
#define BUTTON_NUM_MATRIX_ROW_1 25
#define BUTTON_NUM_MATRIX_ROW_2 24
#define BUTTON_NUM_MATRIX_ROW_3 28

#define BUTTON_NUM_MATRIX_COLUMN_0 16
#define BUTTON_NUM_MATRIX_COLUMN_1 4
#define BUTTON_NUM_MATRIX_COLUMN_2 10
#define BUTTON_NUM_MATRIX_COLUMN_3 13
#define BUTTON_NUM_MATRIX_COLUMN_4 7

#include <circle/timer.h>

extern int matrix_row_selected;
extern int matrix_column_selected;

struct Param {
    int button;
    bool alt;
    bool cc;
};

void scan_buttons(CTimer *timer);
void process_buttons(CTimer *timer);
void handle_encoder(bool up, u64 now);

#endif
