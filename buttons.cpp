#include <circle/logger.h>
#include <circle/util.h>
#include "strings.h"
#include <circle/timer.h>
#include <math.h>

#include "dsp.h"
#include "led.h"
#include "audio.h"
#include "buttons.h"
#include "midi.h"
#include "mono_mode.h"
#include "preset_store.h"

static const char FromButtons[] = "buttons";

CGPIOPin mux_a0(2, GPIOModeOutput);
CGPIOPin mux_a1(3, GPIOModeOutput);
CGPIOPin mux_a2(4, GPIOModeOutput);
CGPIOPin mux_1(5, GPIOModeInput);
CGPIOPin mux_2(6, GPIOModeInput);
CGPIOPin mux_3(12, GPIOModeInput);
CGPIOPin button1(17, GPIOModeInputPullUp);
CGPIOPin button2(20, GPIOModeInputPullUp);
CGPIOPin button3(25, GPIOModeInputPullUp);
CGPIOPin button4(26, GPIOModeInputPullUp);
CGPIOPin button5(27, GPIOModeInputPullUp);
CGPIOPin button6(24, GPIOModeInputPullUp);

u8 button_pushes[NUM_BUTTONS]               = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
u8 button_state[NUM_BUTTONS]                = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
unsigned int button_time[NUM_BUTTONS]       = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

u64 last_encoder_click = 0;

const u8 mux_code[8][3] = {
    {0,0,0},
    {0,0,1},
    {0,1,0},
    {0,1,1},
    {1,0,0},
    {1,0,1},
    {1,1,0},
    {1,1,1}
};

struct Param param_selected = {
    .button = -1,
    .alt = false,
    .cc = false
};

bool poly_mod_active = false;
int ui_mode = UI_MODE_PLAY;
static bool alt_consumed = false;

const int param_matrix[4][5] = {
    {26,27,28,29,30},
    {31,32,33,34,35},
    {36,37,38,39,40},
    {41,42,43,-1,-1}
};

const int pmod_param_matrix[4][5] = {
    {44,45,46,47,48},
    {49,50,51,52,53},
    {54,55,56,57,58},
    {59,60,61,-1,-1}
};

int matrix_row_selected = 0;
int matrix_column_selected = -1;

bool alt_held(void){
    return button_state[BUTTON_NUM_ALT] == 0;
}

static bool handle_mode_switch_chord(int num)
{
    if (!alt_held()) {
        return false;
    }

    switch (num) {
    case BUTTON_NUM_SAVE:
        ui_mode = UI_MODE_SAVE;
        CLogger::Get ()->Write (FromButtons, LogNotice, "entered SAVE mode bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
        return true;
    case BUTTON_NUM_LOAD:
        preset_mode_bank = current_preset_bank;
        preset_mode_slot_cursor = current_preset_slot;
        ui_mode = UI_MODE_LOAD;
        CLogger::Get ()->Write (FromButtons, LogNotice, "entered LOAD mode bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
        return true;
    case BUTTON_NUM_LEARN:
        mode_learn_current_cc = 0;
        learn_mode_state = LEARN_MODE_READY;
        ui_mode = UI_MODE_LEARN;
        return true;
    default:
        return false;
    }
}

static int get_cc_num_from_pointer(float *p)
{
    if (p == 0) {
        return -1;
    }

    for (int i = 0; i < NUM_CC; i++) {
        if (CCs[i].p[0] == p) {
            return i;
        }
    }

    return -1;
}

void set_param_selected(int button, bool is_cc){
    param_selected.button = button;
    param_selected.alt = alt_held();
    param_selected.cc = is_cc;
}

static void set_param_led_bar(float *p, float min, float max, int cc_num)
{
    set_led_bar_cc(p, min, max, cc_num);
}

static void set_param_led_bar_for_pointer(float *p, float min, float max)
{
    set_param_led_bar(p, min, max, get_cc_num_from_pointer(p));
}

static float get_encoder_step(float step, float mul, int click_multiplier)
{
    if (step == 1.0f) {
        return 1.0f;
    }

    return step * mul * click_multiplier;
}

void set_param_vals(float *(&vals)[NUM_DSP], float val){
    for(int i=0; i<NUM_DSP; i++){
        *(vals[i]) = val;
    }
}

void handle_encoder(bool up, u64 now){
    if (ui_mode == UI_MODE_SAVE || ui_mode == UI_MODE_LOAD) {
        if (alt_held()) {
            alt_consumed = true;
            preset_move_bank_cursor(up ? 1 : -1);
        } else {
            preset_move_slot_cursor(up ? 1 : -1);
        }
        return;
    }

    // CLogger::Get ()->Write (FromButtons, LogDebug, "handle_encoder %s", up ? "up" : "down");
    u64 passed = now - last_encoder_click;
    last_encoder_click = now;
    int click_multiplier = passed > 100000 ? 1 : passed > 50000 ? 4 : passed > 10000 ? 10 : 30;
    if(param_selected.button == -1){
        return;
    }
    if(param_selected.alt){
        struct Alt *alt = &Alts[param_selected.button];
        if(alt->p[0] != 0){
            float cur = *(alt->p[0]);
            float step = get_encoder_step(alt->step, alt->mul, click_multiplier);
            if (alt->step == 1.0f) {
                cur = roundf(cur);
            }
            float next = up ? cur + step : cur - step;
            float clamped = next > alt->max ? alt->max : next < alt->min ? alt->min : next;
            set_param_vals(alt->p, clamped);
            set_param_led_bar_for_pointer(alt->p[0], alt->min, alt->max);
        }
    } else if(param_selected.cc) {
        struct CC *cc = &CCs[param_selected.button];
        if(cc->p[0] != 0){
            float cur = *(cc->p[0]);
            float step = get_encoder_step(cc->step, cc->mul, click_multiplier);
            if (cc->step == 1.0f) {
                cur = roundf(cur);
            }
            float next = up ? cur + step : cur - step;
            float clamped = next > cc->max ? cc->max : next < cc->min ? cc->min : next;
            set_param_vals(cc->p, clamped);
            set_param_led_bar(cc->p[0], cc->min, cc->max, param_selected.button);
        }
    } else {
        struct Mod *mod = &Mods[param_selected.button];
        if(mod->p[0] != 0){
            float cur = *(mod->p[0]);
            float step = get_encoder_step(mod->step, mod->mul, click_multiplier);
            if (mod->step == 1.0f) {
                cur = roundf(cur);
            }
            float next = up ? cur + step : cur - step;
            float clamped = next > mod->max ? mod->max : next < mod->min ? mod->min : next;
            set_param_vals(mod->p, clamped);
            set_param_led_bar_for_pointer(mod->p[0], mod->min, mod->max);
        }
    }
}

static void matrix_pick(int num){
    struct CC cc = CCs[num];
    if(cc.p[0] !=0){
        set_param_led_bar(cc.p[0], cc.min, cc.max, num);
        set_param_selected(num, true);
    }
}

void handle_matrix_press(int num){
    switch(num){
        case BUTTON_NUM_MATRIX_ROW_0:
            matrix_row_selected = 0;
            break;
        case BUTTON_NUM_MATRIX_ROW_1:
            matrix_row_selected = 1;
            break;
        case BUTTON_NUM_MATRIX_ROW_2:
            matrix_row_selected = 2;
            break;
        case BUTTON_NUM_MATRIX_ROW_3:
            matrix_row_selected = 3;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_0:
            matrix_column_selected = 0;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_1:
            matrix_column_selected = 1;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_2:
            matrix_column_selected = 2;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_3:
            matrix_column_selected = 3;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_4:
            matrix_column_selected = 4;
            break;
        default:break;
    }
    if(matrix_column_selected != -1){
        int param = poly_mod_active ?
            pmod_param_matrix[matrix_row_selected][matrix_column_selected] :
            param_matrix[matrix_row_selected][matrix_column_selected];
        if(param != -1){
            matrix_pick(param);
        }
    }
}

int get_matrix_cc_for_button(int num)
{
    switch(num){
        case BUTTON_NUM_MATRIX_ROW_0:
            matrix_row_selected = 0;
            break;
        case BUTTON_NUM_MATRIX_ROW_1:
            matrix_row_selected = 1;
            break;
        case BUTTON_NUM_MATRIX_ROW_2:
            matrix_row_selected = 2;
            break;
        case BUTTON_NUM_MATRIX_ROW_3:
            matrix_row_selected = 3;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_0:
            matrix_column_selected = 0;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_1:
            matrix_column_selected = 1;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_2:
            matrix_column_selected = 2;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_3:
            matrix_column_selected = 3;
            break;
        case BUTTON_NUM_MATRIX_COLUMN_4:
            matrix_column_selected = 4;
            break;
        default:
            return -1;
    }

    if(matrix_column_selected == -1){
        return -1;
    }

    return poly_mod_active ?
        pmod_param_matrix[matrix_row_selected][matrix_column_selected] :
        param_matrix[matrix_row_selected][matrix_column_selected];
}

void handle_button_press(int num){
    CLogger::Get ()->Write (FromButtons, LogDebug, "handle_button_press %d", num);
    if(num == BUTTON_NUM_ALT) {
        if(ui_mode == UI_MODE_LEARN || ui_mode == UI_MODE_SAVE || ui_mode == UI_MODE_LOAD) {
            ui_mode = UI_MODE_PLAY;
        }
        return;
    }

    if (handle_mode_switch_chord(num)) {
        return;
    }

    switch(ui_mode){
        case UI_MODE_PLAY: {
            struct Mod *mod = &Mods[num];
            struct Alt *alt = &Alts[num];
            struct Sel *sel = &Sels[num];
            struct AltSel *alt_sel = &AltSels[num];
            if(alt_held()){
                if(num == BUTTON_NUM_POLY_MOD){
                    poly_mod_active = !poly_mod_active;
                    return;
                }
                if(num == BUTTON_NUM_MONO){
                    midi_set_mono_mode(!mono_mode);
                    return;
                }
                if(alt->p[0] != 0){ // there is a mod for that button
                    set_param_led_bar_for_pointer(alt->p[0], alt->min, alt->max);
                    set_param_selected(num, false);   
                } else if(alt_sel->p[0] != 0){ // there is an alt-sel for that button
                    float cur = *alt_sel->p[0];
                    if(cur < alt_sel->max)
                    {
                        set_param_vals(alt_sel->p, cur + 1);
                    }
                    else
                    {
                        set_param_vals(alt_sel->p, alt_sel->min);
                    }
                }
            } else {
                handle_matrix_press(num);
                if(mod->p[0] != 0){ // there is a mod for that button press
                    set_param_led_bar_for_pointer(mod->p[0], mod->min, mod->max);
                    set_param_selected(num, false);
                } else if(sel->p[0] != 0){ // there is a sel for that button press
                    float cur = *sel->p[0];
                    if(cur < sel->max){
                        set_param_vals(sel->p, cur + 1);
                    } else {
                        set_param_vals(sel->p, sel->min);
                    }
                }
            }
            break;
        }
        case UI_MODE_LEARN: {
            midi_select_learn_target(num, alt_held());
            break;
        }
        case UI_MODE_LOAD: {
            break;
        }
        case UI_MODE_SAVE: {
            break;
        }
    }
}

void process_buttons(CTimer *timer){
    for (int i =0; i< NUM_BUTTONS; i++)
    {
        bool state = button_state[i];
        unsigned int now = timer->GetTicks();
        if(button_pushes[i] == 0) // was not pushed
        {
            if(state == 0) // maybe pushed ( 0 is low so maybe pressed )
            {
                if( (now - button_time[i]) > DEBOUNCE_TIME ) // confirm pressed
                {
                    button_pushes[i] = 1;
                    button_state[i] = 0;
                    button_time[i] = now;
                    if(i == BUTTON_NUM_ALT){
                        alt_consumed = false;
                    } else if (alt_held()) {
                        alt_consumed = true;
                    }

                    if(i == BUTTON_NUM_ENCODER){
                        if (ui_mode == UI_MODE_SAVE) {
                            CLogger::Get ()->Write (FromButtons, LogNotice, "encoder press in SAVE mode bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
                            bool ok = preset_save_current_cursor();
                            CLogger::Get ()->Write (FromButtons, ok ? LogNotice : LogWarning, "SAVE result=%u bank=%d slot=%d", ok ? 1U : 0U, preset_mode_bank, preset_mode_slot_cursor);
                            if (ok) {
                                ui_mode = UI_MODE_PLAY;
                            }
                        } else if (ui_mode == UI_MODE_LOAD) {
                            CLogger::Get ()->Write (FromButtons, LogNotice, "encoder press in LOAD mode bank=%d slot=%d", preset_mode_bank, preset_mode_slot_cursor);
                            bool ok = preset_load_current_cursor();
                            CLogger::Get ()->Write (FromButtons, ok ? LogNotice : LogWarning, "LOAD result=%u bank=%d slot=%d", ok ? 1U : 0U, preset_mode_bank, preset_mode_slot_cursor);
                            if (ok) {
                                ui_mode = UI_MODE_PLAY;
                            }
                        } else {
                            *(Signals[0].gate[0]) = 1;
                        }
                    } else if(i != BUTTON_NUM_ALT) {
                        // CLogger::Get ()->Write (FromButtons, LogDebug, "button %d pushed", i);
                        handle_button_press(i);
                    }
                }
            }
        }
        
        // check for releases
        else if(button_pushes[i] == 1) // was pushed
        {
            if(state == 1) // maybe released ( 1 is high so released)
            {
                unsigned int now = timer->GetTicks();
                if( (now - button_time[i]) > DEBOUNCE_TIME ) // confirm released
                {
                    button_pushes[i] = 0;
                    button_state[i] = 1;
                    button_time[i] = now;
                    if(i == BUTTON_NUM_ENCODER){
                        if (ui_mode != UI_MODE_SAVE && ui_mode != UI_MODE_LOAD) {
                            *(Signals[0].gate[0]) = 0;
                        }
                    } else if (i == BUTTON_NUM_ALT) {
                        if (!alt_consumed) {
                            handle_button_press(i);
                        }
                    } else {
                        // CLogger::Get ()->Write (FromButtons, LogDebug, "button %d released", i);
                    }

                }
            }
        }
    }
}

void scan_buttons(CTimer *timer){
    for(u8 i=0; i<8; i++) // 8 pins per mux
    {
        // set the mux bits
        mux_a0.Write(mux_code[i][0]);
        mux_a1.Write(mux_code[i][1]);
        mux_a2.Write(mux_code[i][2]);
        
        timer->usDelay(10); // let it settle
        // timer->usDelay(5); // let it settle
        
        // read the pins
        button_state[i * 3 + 0] = mux_1.Read();
        button_state[i * 3 + 1] = mux_2.Read();
        button_state[i * 3 + 2] = mux_3.Read();
    }
    button_state[24] = button1.Read();
    button_state[25] = button2.Read();
    button_state[26] = button3.Read();
    button_state[27] = button4.Read();
    button_state[28] = button5.Read();
    button_state[29] = button6.Read();
}
