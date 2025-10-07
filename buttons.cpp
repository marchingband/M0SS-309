#include <circle/logger.h>
#include <circle/util.h>
#include "strings.h"
#include <circle/timer.h>

#include "dsp.h"
#include "led.h"
#include "audio.h"
#include "buttons.h"

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

int matrix_row_selected = 0;

bool alt_held(){
    return button_state[BUTTON_NUM_ALT] == 0;
}

void set_param_vals(float *(&vals)[NUM_DSP], float val){
    for(int i=0; i<NUM_DSP; i++){
        *(vals[i]) = val;
    }
}

void handle_encoder(bool up){
    CLogger::Get ()->Write (FromButtons, LogDebug, "handle_encoder %s", up ? "up" : "down");
    if(param_selected.button == -1){
        return;
    }
    if(param_selected.alt){
        struct Alt *alt = &Alts[param_selected.button];
        if(alt->p[0] != 0){
            float cur = *(alt->p[0]);
            float step = alt->step * alt->mul;
            float next = up ? cur + step : cur - step;
            float clamped = next > alt->max ? alt->max : next < alt->min ? alt->min : next;
            set_param_vals(alt->p, clamped);
            set_led_bar(alt->p[0], alt->min, alt->max);
        }
    } else if(param_selected.cc) {
        struct CC *cc = &CCs[param_selected.button];
        if(cc->p[0] != 0){
            float cur = *(cc->p[0]);
            float step = cc->step * cc->mul;
            float next = up ? cur + step : cur - step;
            float clamped = next > cc->max ? cc->max : next < cc->min ? cc->min : next;
            set_param_vals(cc->p, clamped);
            set_led_bar(cc->p[0], cc->min, cc->max);
        }
    } else {
        struct Mod *mod = &Mods[param_selected.button];
        if(mod->p[0] != 0){
            float cur = *(mod->p[0]);
            float step = mod->step * mod->mul;
            float next = up ? cur + step : cur - step;
            float clamped = next > mod->max ? mod->max : next < mod->min ? mod->min : next;
            set_param_vals(mod->p, clamped);
            set_led_bar(mod->p[0], mod->min, mod->max);
        }
    }
}

static void matrix_pick(int num){
    struct CC cc = CCs[num];
    if(cc.p[0] !=0){
        set_led_bar(cc.p[0], cc.min, cc.max);
        param_selected.alt=false;
        param_selected.button = num;
        param_selected.cc = true;
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
            switch(matrix_row_selected){
                case 0:
                    matrix_pick(25);
                    break;
                case 1:
                    matrix_pick(30);
                    break;
                case 2:
                    matrix_pick(35);
                    break;
                case 3:
                    matrix_pick(40);
                    break;
                default:break;
            }
            break;
        case BUTTON_NUM_MATRIX_COLUMN_1:
            switch(matrix_row_selected){
                case 0:
                    matrix_pick(26);
                    break;
                case 1:
                    matrix_pick(31);
                    break;
                case 2:
                    matrix_pick(36);
                    break;
                case 3:
                    matrix_pick(41);
                    break;
                default:break;
            }
            break;
        case BUTTON_NUM_MATRIX_COLUMN_2:
            switch(matrix_row_selected){
                case 0:
                    matrix_pick(27);
                    break;
                case 1:
                    matrix_pick(32);
                    break;
                case 2:
                    matrix_pick(37);
                    break;
                case 3:
                    matrix_pick(42);
                    break;
                default:break;
            }
            break;
        case BUTTON_NUM_MATRIX_COLUMN_3:
            switch(matrix_row_selected){
                case 0:
                    matrix_pick(28);
                    break;
                case 1:
                    matrix_pick(33);
                    break;
                case 2:
                    matrix_pick(38);
                    break;
                default:break;
                }
            break;
        case BUTTON_NUM_MATRIX_COLUMN_4:
            switch(matrix_row_selected){
                case 0:
                    matrix_pick(29);
                    break;
                case 1:
                    matrix_pick(34);
                    break;
                case 2:
                    matrix_pick(39);
                    break;
                default:break;
            }
            break;
        default:break;
    }
}

void handle_button_press(int num){
    CLogger::Get ()->Write (FromButtons, LogDebug, "handle_button_press %d", num);
    handle_matrix_press(num);
    struct Mod *mod = &Mods[num];
    struct Alt *alt = &Alts[num];
    struct Sel *sel = &Sels[num];
    struct AltSel *alt_sel = &AltSels[num];
    if(alt_held()){
        if(alt->p[0] != 0){ // there is a mod for that button
            set_led_bar(alt->p[0], alt->min, alt->max);
            param_selected.button = num;
            param_selected.alt = alt_held();        
            param_selected.cc = false;        
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
        if(mod->p[0] != 0){ // there is a mod for that button press
            set_led_bar(mod->p[0], mod->min, mod->max);
            param_selected.button = num;
            param_selected.alt = alt_held();
            param_selected.cc = false;
        } else if(sel->p[0] != 0){ // there is a sel for that button press
            float cur = *sel->p[0];
            if(cur < sel->max){
                set_param_vals(sel->p, cur + 1);
            } else {
                set_param_vals(sel->p, sel->min);
            }
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
                    if(i == BUTTON_NUM_ENCODER){
                        CLogger::Get ()->Write (FromButtons, LogDebug, "encoder pushed");
                        *(Signals[0].gate[0]) = 1;
                    } else {
                        CLogger::Get ()->Write (FromButtons, LogDebug, "button %d pushed", i);
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
                        CLogger::Get ()->Write (FromButtons, LogDebug, "encoder released");
                        *(Signals[0].gate[0]) = 0;
                    } else {
                        CLogger::Get ()->Write (FromButtons, LogDebug, "button %d released", i);
                    }

                }
            }
        }
    }
}

void scan_buttons(CTimer *timer){
    // CLogger::Get ()->Write (FromButtons, LogDebug, "scan_buttons");
    
    for(u8 i=0; i<8; i++) // 8 pins per mux
    {
        // set the mux bits
        mux_a0.Write(mux_code[i][0]);
        mux_a1.Write(mux_code[i][1]);
        mux_a2.Write(mux_code[i][2]);
        
        timer->usDelay(5); // let it settle
        
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