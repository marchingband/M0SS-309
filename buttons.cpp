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
#include "midi_config.h"
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
static bool reset_hold_active = false;
static bool reset_hold_factory = false;
static u64 reset_hold_started_us = 0;
static int reset_request = RESET_REQUEST_NONE;
static int preset_nav_encoder_delta = 0;
static bool preset_nav_last_bank = false;

static const u64 ResetHoldDurationUs = 2000000ULL;

bool midi_channel_adjust_held(void)
{
    return alt_held() && button_pushes[BUTTON_NUM_MIDI_CHANNEL] != 0;
}

bool pitch_bend_up_adjust_held(void)
{
    return alt_held() && button_pushes[BUTTON_NUM_MATRIX_COLUMN_3] != 0;
}

bool pitch_bend_down_adjust_held(void)
{
    return alt_held() && button_pushes[BUTTON_NUM_MATRIX_COLUMN_4] != 0;
}

bool chorus_mode_display_held(void)
{
    return alt_held() && button_pushes[BUTTON_NUM_CHORUS_MODE] != 0;
}

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

int get_reset_request(void)
{
    return reset_request;
}

static bool reset_base_chord_held(void)
{
    return button_pushes[BUTTON_NUM_ALT] != 0 &&
        button_pushes[BUTTON_NUM_OSC2_MIX] != 0 &&
        button_pushes[BUTTON_NUM_OSC1_MIX] != 0;
}

static void cancel_reset_hold(void)
{
    reset_hold_active = false;
    reset_hold_factory = false;
    reset_hold_started_us = 0;
    led_set_reset_feedback(false, false);
}

static bool service_reset_chord(u64 now_us)
{
    if (reset_request != RESET_REQUEST_NONE) {
        return true;
    }

    bool base_held = reset_base_chord_held();
    bool encoder_held = button_pushes[BUTTON_NUM_ENCODER] != 0;

    if (!reset_hold_active) {
        if (!base_held) {
            return false;
        }

        reset_hold_active = true;
        reset_hold_factory = encoder_held;
        reset_hold_started_us = now_us;
        led_set_reset_feedback(true, reset_hold_factory);
        CLogger::Get ()->Write (FromButtons, LogNotice, "reset hold started factory=%u", reset_hold_factory ? 1U : 0U);
        return true;
    }

    if (!base_held || (reset_hold_factory && !encoder_held)) {
        CLogger::Get ()->Write (FromButtons, LogNotice, "reset hold cancelled");
        cancel_reset_hold();
        return false;
    }

    if (!reset_hold_factory && encoder_held) {
        reset_hold_factory = true;
        led_set_reset_feedback(true, true);
        CLogger::Get ()->Write (FromButtons, LogNotice, "reset hold upgraded to factory");
    }

    if (now_us - reset_hold_started_us < ResetHoldDurationUs) {
        return true;
    }

    reset_request = reset_hold_factory ? RESET_REQUEST_FACTORY : RESET_REQUEST_NORMAL;
    led_set_reset_feedback(true, reset_hold_factory);
    CLogger::Get ()->Write (FromButtons, LogNotice, "reset requested factory=%u", reset_hold_factory ? 1U : 0U);
    return true;
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

void set_param_selected(int button, bool is_cc){
    param_selected.button = button;
    param_selected.alt = alt_held();
    param_selected.cc = is_cc;
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
        if (vals[i] != 0) {
            *(vals[i]) = val;
        }
    }
}

static bool reset_param_selected(void)
{
    if(param_selected.button == -1){
        return false;
    }

    if(param_selected.alt){
        struct Alt *alt = &Alts[param_selected.button];
        if(alt->p[0] != 0){
            set_param_vals(alt->p, alt->init);
            return true;
        }
        return false;
    }

    if(param_selected.cc) {
        struct CC *cc = &CCs[param_selected.button];
        if(cc->p[0] != 0){
            if (param_selected.button == CC_NUM_PB_UP) {
                midi_set_pitch_bend_up((int) roundf(cc->init));
            } else if (param_selected.button == CC_NUM_PB_DOWN) {
                midi_set_pitch_bend_down((int) roundf(cc->init));
            } else {
                set_param_vals(cc->p, cc->init);
            }
            return true;
        }
        return false;
    }

    struct Mod *mod = &Mods[param_selected.button];
    if(mod->p[0] != 0){
        set_param_vals(mod->p, mod->init);
        return true;
    }

    return false;
}

void handle_encoder(bool up, u64 now){
    if (service_reset_chord(now)) {
        return;
    }

    if (ui_mode == UI_MODE_SAVE || ui_mode == UI_MODE_LOAD) {
        bool bank_nav = alt_held();
        if (bank_nav != preset_nav_last_bank) {
            preset_nav_encoder_delta = 0;
            preset_nav_last_bank = bank_nav;
        }

        preset_nav_encoder_delta += up ? 1 : -1;
        if (preset_nav_encoder_delta < 2 && preset_nav_encoder_delta > -2) {
            return;
        }

        int delta = preset_nav_encoder_delta > 0 ? 1 : -1;
        preset_nav_encoder_delta -= delta * 2;

        if (bank_nav) {
            alt_consumed = true;
            preset_move_bank_cursor(delta);
        } else {
            preset_move_slot_cursor(delta);
        }
        return;
    }

    if (midi_channel_adjust_held()) {
        if(up){
            midi_channel += midi_channel < 16;
        } else {
            midi_channel -= midi_channel > 0;
        }
        midi_config_mark_dirty(now);
        return;
    }

    if (pitch_bend_up_adjust_held()) {
        midi_set_pitch_bend_up((int) midi_pitch_bend_up + (up ? 1 : -1));
        midi_config_mark_dirty(now);
        return;
    }

    if (pitch_bend_down_adjust_held()) {
        midi_set_pitch_bend_down((int) midi_pitch_bend_down + (up ? 1 : -1));
        midi_config_mark_dirty(now);
        return;
    }

    // CLogger::Get ()->Write (FromButtons, LogDebug, "handle_encoder %s", up ? "up" : "down");
    u64 passed = now - last_encoder_click;
    last_encoder_click = now;
    // int click_multiplier = passed > 100000 ? 1 : passed > 50000 ? 4 : passed > 10000 ? 10 : 30;
    int click_multiplier = passed > 100000 ? 10 : passed > 50000 ? 100 : passed > 10000 ? 500 : 2000;
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
        }
    }
}

static void matrix_pick(int num){
    struct CC cc = CCs[num];
    if(cc.p[0] !=0){
        set_param_selected(num, true);
    }
}

static bool handle_matrix_press(int num){
    bool matrix_button = true;

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
            matrix_button = false;
            break;
    }

    if (!matrix_button) {
        return false;
    }

    if(matrix_column_selected != -1){
        int param = poly_mod_active ?
            pmod_param_matrix[matrix_row_selected][matrix_column_selected] :
            param_matrix[matrix_row_selected][matrix_column_selected];
        if(param != -1){
            matrix_pick(param);
        }
    }

    return true;
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
                if(num == BUTTON_NUM_MIDI_CHANNEL){
                    return;
                }
                if(num == BUTTON_NUM_MATRIX_COLUMN_3 || num == BUTTON_NUM_MATRIX_COLUMN_4){
                    return;
                }
                if(alt->p[0] != 0){ // there is a mod for that button
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
    u64 reset_now_us = timer->GetClockTicks64();
    bool reset_consuming = service_reset_chord(reset_now_us);

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
                        if (midi_channel_adjust_held()) {
                            alt_consumed = true;
                        }
                    } else if (alt_held()) {
                        alt_consumed = true;
                    }

                    reset_now_us = timer->GetClockTicks64();
                    reset_consuming = service_reset_chord(reset_now_us);
                    if (reset_consuming) {
                        continue;
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
                        } else if (alt_held()) {
                            bool ok = reset_param_selected();
                            CLogger::Get ()->Write (FromButtons, ok ? LogNotice : LogWarning, "reset current parameter result=%u button=%d alt=%u cc=%u", ok ? 1U : 0U, param_selected.button, param_selected.alt ? 1U : 0U, param_selected.cc ? 1U : 0U);
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
                    reset_now_us = timer->GetClockTicks64();
                    reset_consuming = service_reset_chord(reset_now_us);
                    if (reset_consuming) {
                        continue;
                    }

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
