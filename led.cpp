// #include <WS28XX/ws28xxstripe.h>
#include <WS28XX/ws2812oversmi.h>
#include <circle/logger.h>
#include <circle/util.h>
#include <circle/timer.h>
#include <assert.h>
#include "strings.h"

#include "led.h"
#include "buttons.h"
#include "dsp.h"
#include "midi.h"
#include "mono_mode.h"
#include "preset_store.h"

extern bool poly_mod_active;

// CWS28XXStripe led_strip(SK6812, NUM_LED, 4000000, 0);
static CWS2812OverSMI *led_strip = nullptr;

static struct Pixel Red = {
    .red = 1, 
    .green = 0,
    .blue = 0
};
static struct Pixel Green = {
    .red = 0, 
    .green = 1,
    .blue = 0
};
static struct Pixel Blue = {
    .red = 0, 
    .green = 0,
    .blue = 1
};
static struct Pixel On = {
    .red = 4, 
    .green = 3,
    .blue = 1
};
static struct Pixel Off = {
    .red = 0, 
    .green = 0,
    .blue = 0
};
static struct Pixel LightBlue = {
    .red = 0,
    .green = 1,
    .blue = 1
};
static struct Pixel LightPink = {
    .red = 2,
    .green = 1,
    .blue = 1
};
static struct Pixel LightGreen = {
    .red = 1,
    .green = 2,
    .blue = 0
};
static struct Pixel LightRed = {
    .red = 2,
    .green = 0,
    .blue = 0
};

static float led_bar[11] = {0};
static int led_bar_signed_int_value = 0;
static int led_bar_cc_num = -1;

static struct Pixel matrix[4][5] = {0};
static void set_led(unsigned int idx, struct Pixel pixel);
static struct Pixel pixel_fade(float val);
static const unsigned BankLedMap[PRESET_BANKS] = {
    16, 15, 14, 13, 12,
    18, 19, 20, 21, 22,
    27, 26, 25, 24, 23,
    28, 29, 30
};
static const unsigned SlotLedMap[PRESET_SLOTS] = {
    41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31
};

#define SPLASH_INTERVAL_US 100000ULL
static u64 splash_last_update_us = 0;
static u32 splash_rng = 1;
static boolean splash_running = FALSE;

static u32 splash_rand(void)
{
    splash_rng = splash_rng * 1664525U + 1013904223U;
    return splash_rng;
}

static void splash_tick(void)
{
    if (!splash_running || led_strip == nullptr)
    {
        return;
    }

    u64 now_us = CTimer::GetClockTicks64();
    if (now_us - splash_last_update_us < SPLASH_INTERVAL_US)
    {
        return;
    }
    splash_last_update_us = now_us;

    for (unsigned i = 0; i < NUM_LED; i++)
    {
        set_led(i, Off);
    }

    unsigned led = (unsigned) (splash_rand() % NUM_LED);
    set_led(led, On);
    led_strip->Update();
}

static bool uses_signed_int_led_bar(int cc_num)
{
    switch (cc_num) {
    case CC_NUM_TUNE:
    case CC_NUM_TRANSPOSE:
    case CC_NUM_PB_UP:
    case CC_NUM_PB_DOWN:
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

static bool get_led_bar_source(float **val_p, float *min, float *max, int *cc_num)
{
    if (midi_channel_adjust_held()) {
        led_bar_signed_int_value = (int) midi_channel;
        led_bar_cc_num = -1;
        return false;
    }

    if (pitch_bend_up_adjust_held()) {
        led_bar_signed_int_value = (int) midi_pitch_bend_up;
        led_bar_cc_num = -1;
        return false;
    }

    if (pitch_bend_down_adjust_held()) {
        led_bar_signed_int_value = (int) midi_pitch_bend_down;
        led_bar_cc_num = -1;
        return false;
    }

    if (chorus_mode_display_held()) {
        struct AltSel *alt_sel = &AltSels[BUTTON_NUM_CHORUS_MODE];
        if (alt_sel->p[0] != 0) {
            led_bar_signed_int_value = (int) (*(alt_sel->p[0]));
            led_bar_cc_num = -1;
            return false;
        }
    }

    if (param_selected.button == -1) {
        return false;
    }

    if (param_selected.cc) {
        struct CC *cc = &CCs[param_selected.button];
        if (cc->p[0] == 0) {
            return false;
        }
        *val_p = cc->p[0];
        *min = cc->min;
        *max = cc->max;
        *cc_num = param_selected.button;
        return true;
    }

    if (param_selected.alt) {
        struct Alt *alt = &Alts[param_selected.button];
        if (alt->p[0] == 0) {
            return false;
        }
        *val_p = alt->p[0];
        *min = alt->min;
        *max = alt->max;
        *cc_num = get_cc_num_from_pointer(alt->p[0]);
        return true;
    }

    struct Mod *mod = &Mods[param_selected.button];
    if (mod->p[0] == 0) {
        return false;
    }
    *val_p = mod->p[0];
    *min = mod->min;
    *max = mod->max;
    *cc_num = get_cc_num_from_pointer(mod->p[0]);
    return true;
}

void update_led_bar(void){
    float *led_bar_val_p = 0;
    float led_bar_min = 0;
    float led_bar_max = 0;
    led_bar_cc_num = -1;

    if (!get_led_bar_source(&led_bar_val_p, &led_bar_min, &led_bar_max, &led_bar_cc_num)) {
        return;
    }

    if (uses_signed_int_led_bar(led_bar_cc_num)) {
        led_bar_signed_int_value = (int) (*led_bar_val_p);
        return;
    }

    float val = *led_bar_val_p;
    float max = led_bar_max;

    val -= led_bar_min;
    max -= led_bar_min;
    float out = val / max * 10;
    for(int i=0; i<11; i++){
        if(out > (i + 1)){
            led_bar[i] = 1;
        } else if(out < i) {
            led_bar[i] = 0;
        } else {
            led_bar[i] = out - i; // just the fractional part
        }
    }
}

static void render_linear_led_bar(void)
{
    set_led(31, led_bar[10] == 0 ? Off : led_bar[10] == 1 ? On : pixel_fade(led_bar[10])); // 10
    set_led(32, led_bar[9] == 0 ? Off : led_bar[9] == 1 ? On : pixel_fade(led_bar[9])); // 9
    set_led(33, led_bar[8] == 0 ? Off : led_bar[8] == 1 ? On : pixel_fade(led_bar[8])); // 8
    set_led(34, led_bar[7] == 0 ? Off : led_bar[7] == 1 ? On : pixel_fade(led_bar[7])); // 7
    set_led(35, led_bar[6] == 0 ? Off : led_bar[6] == 1 ? On : pixel_fade(led_bar[6])); // 6
    set_led(36, led_bar[5] == 0 ? Off : led_bar[5] == 1 ? On : pixel_fade(led_bar[5])); // 5
    set_led(37, led_bar[4] == 0 ? Off : led_bar[4] == 1 ? On : pixel_fade(led_bar[4])); // 4
    set_led(38, led_bar[3] == 0 ? Off : led_bar[3] == 1 ? On : pixel_fade(led_bar[3])); // 3
    set_led(39, led_bar[2] == 0 ? Off : led_bar[2] == 1 ? On : pixel_fade(led_bar[2])); // 2
    set_led(40, led_bar[1] == 0 ? Off : led_bar[1] == 1 ? On : pixel_fade(led_bar[1])); // 1
    set_led(41, led_bar[0] == 0 ? Off : led_bar[0] == 1 ? On : pixel_fade(led_bar[0])); // 0
}

static void render_signed_int_led_bar(void)
{
    for (int i = 31; i <= 41; i++) {
        set_led(i, Off);
    }

    set_led(41, On); // zero marker

    int magnitude = led_bar_signed_int_value < 0 ? -led_bar_signed_int_value : led_bar_signed_int_value;
    if (magnitude == 0) {
        return;
    }

    struct Pixel sign_pixel = led_bar_signed_int_value > 0 ? Green : Red;
    struct Pixel light_sign_pixel = led_bar_signed_int_value > 0 ? LightGreen : LightRed;

    int light_count = magnitude < 10 ? magnitude : 10;
    int sign_count = magnitude > 10 ? (magnitude - 10 < 10 ? magnitude - 10 : 10) : 0;
    int blue_count = magnitude > 20 ? (magnitude - 20 < 9 ? magnitude - 20 : 9) : 0;

    for (int led = 1; led <= 10; led++) {
        struct Pixel pixel = Off;

        if (led <= light_count) {
            pixel = light_sign_pixel;
        }
        if (led <= sign_count) {
            pixel = sign_pixel;
        }
        if (led <= blue_count) {
            pixel = Blue;
        }

        if (pixel.red != 0 || pixel.green != 0 || pixel.blue != 0) {
            set_led(41 - led, pixel);
        }
    }
}

void set_matrix(int row, int column, struct Pixel pixel){
    matrix[row][column] = pixel;
}

static void set_led(unsigned int idx, struct Pixel pixel){
    // led_strip.SetLED(idx, pixel.red, pixel.green, pixel.blue);
    assert(led_strip != nullptr);
    led_strip->SetLED(2, idx, pixel.red, pixel.green, pixel.blue);
}

static void tint_led_yellow(struct Pixel *pixel){
    pixel->red++;
    pixel->green++;
}

static struct Pixel pixel_fade(float val){
    float clamped = val < 0.0 ? 0.0 : val > 1.0 ? 1.0 : val;
    struct Pixel pixel = {
        .red = (u8)(10.0 * clamped),
        .green = (u8)(150.0 * clamped),
        .blue = (u8)(50.0 * clamped)
    };
    return pixel;
}

static void render_preset_browser(void)
{
    for (unsigned i = 0; i < NUM_LED; i++) {
        set_led(i, Off);
    }

    for (int bank = 0; bank < PRESET_BANKS; bank++) {
        set_led(BankLedMap[bank], bank == preset_mode_bank ? On : Off);
    }

    for (int slot = 0; slot < PRESET_SLOTS; slot++) {
        bool exists = preset_exists[preset_mode_bank][slot];
        struct Pixel pixel = exists ? LightPink : LightGreen;
        if (ui_mode == UI_MODE_LOAD && !exists) {
            pixel = Off;
        } else {
            if (preset_mode_bank == current_preset_bank && slot == current_preset_slot) {
                pixel = LightBlue;
            }
            if (slot == preset_mode_slot_cursor && preset_is_cursor_visible()) {
                pixel = Red;
            }
        }
        set_led(SlotLedMap[slot], pixel);
    }

    assert(led_strip != nullptr);
    led_strip->Update();
}

void render_leds(void){
    if (ui_mode == UI_MODE_LEARN) {
        struct Pixel learn_pixel = LightPink;
        if (learn_mode_state == LEARN_MODE_SELECTED) {
            learn_pixel = LightGreen;
        } else if (learn_mode_state == LEARN_MODE_LEARNED) {
            learn_pixel = LightBlue;
        }

        for (unsigned i = 0; i < NUM_LED; i++) {
            set_led(i, learn_pixel);
        }

        assert(led_strip != nullptr);
        led_strip->Update();
        return;
    }

    if (ui_mode == UI_MODE_SAVE || ui_mode == UI_MODE_LOAD) {
        render_preset_browser();
        return;
    }

    set_led(0, *(Sels[8].p[0]) == 2 ? Green : Off); // OSC 2 TRI
    set_led(1, *(Sels[8].p[0]) == 1 ? Green : Off); // OSC 2 SQR
    set_led(2, *(Sels[8].p[0]) == 0 ? Green : Off); // OSC 2 SAW
    
    set_led(3, *(Sels[20].p[0]) ? Red : Off);        // HI-LO
    set_led(4, *(AltSels[20].p[0]) ? Red : Off);     // KT
    set_led(5, mono_mode ? Red : Off);              // MONO
    set_led(6, *(Sels[2].p[0]) ? Red : Off);         // SYNC

    set_led(7, *(Sels[28].p[0]) == 0 ? Green : Off); // OSC 1 SAW
    set_led(8, *(Sels[28].p[0]) == 1 ? Green : Off); // OSC 1 SQR

    set_led(9,  *(Sels[4].p[0]) == 0 ? Green : Off); // LFO SAW
    set_led(10, *(Sels[4].p[0]) == 1 ? Green : Off); // LFO SQR
    set_led(11, *(Sels[4].p[0]) == 2 ? Green : Off); // LFO TRI

    float lfo = *(Signals[0].lfo);
    // sum all the envelopes
    float env = 0;
    for(int i=0; i<NUM_DSP; i++){
        for(int j=0; j<NUM_VOICES; j++){
            env += *(Signals[i].env[j]);
        }
    }

    float osc_2_range = *(Sels[20].p[0]);
    float osc_2 = 0.0;
    if(osc_2_range == 0){
        // LFO mode, get the value
        float osc_2_raw = *(Signals[0].osc_2[0]);
        osc_2 = f_min(1.0, f_max(0.0,(osc_2_raw + 1) / 2));
    } else {
        osc_2 = 1;
    }

    if(!poly_mod_active){
        // mod matrix signals
        set_matrix(0, 0, pixel_fade(lfo * (*(CCs[26].p[0])))); // LFO->OS1
        set_matrix(0, 1, pixel_fade(lfo * (*(CCs[27].p[0])))); // LFO->PW1
        set_matrix(0, 2, pixel_fade(lfo * (*(CCs[28].p[0])))); // LFO->VCF
        set_matrix(0, 3, pixel_fade(lfo * (*(CCs[29].p[0])))); // LFO->OS2
        set_matrix(0, 4, pixel_fade(lfo * (*(CCs[30].p[0])))); // LFO->PW2
        
        set_matrix(1, 0, pixel_fade(env * (*(CCs[31].p[0])))); // ENV->OS1 
        set_matrix(1, 1, pixel_fade(env * (*(CCs[32].p[0])))); // ENV->PW1 
        set_matrix(1, 2, pixel_fade(env * (*(CCs[33].p[0])))); // ENV->VCF 
        set_matrix(1, 3, pixel_fade(env * (*(CCs[34].p[0])))); // ENV->OS2 
        set_matrix(1, 4, pixel_fade(env * (*(CCs[35].p[0])))); // ENV->PW2 
        
        set_matrix(2, 0, pixel_fade(*(CCs[36].p[0]))); // NSE->OS1
        set_matrix(2, 1, pixel_fade(*(CCs[37].p[0]))); // NSE->PW1
        set_matrix(2, 2, pixel_fade(*(CCs[38].p[0]))); // NSE->VCF
        set_matrix(2, 3, pixel_fade(*(CCs[39].p[0]))); // NSE->OS2
        set_matrix(2, 4, pixel_fade(*(CCs[40].p[0]))); // NSE->PW2
        
        set_matrix(3, 0, pixel_fade(osc_2 * (*(CCs[41].p[0])))); // OS2->OS1
        set_matrix(3, 1, pixel_fade(osc_2 * (*(CCs[42].p[0])))); // OS2->PW1
        set_matrix(3, 2, pixel_fade(osc_2 * (*(CCs[43].p[0])))); // OS2->VCF
    } else {
        // poly mod matrix signals
        float p_mod = *(CCs[62].p[0]);
        set_matrix(0, 0, pixel_fade(p_mod * lfo * (*(CCs[44].p[0])))); // LFO->OS1
        set_matrix(0, 1, pixel_fade(p_mod * lfo * (*(CCs[45].p[0])))); // LFO->PW1
        set_matrix(0, 2, pixel_fade(p_mod * lfo * (*(CCs[46].p[0])))); // LFO->VCF
        set_matrix(0, 3, pixel_fade(p_mod * lfo * (*(CCs[47].p[0])))); // LFO->OS2
        set_matrix(0, 4, pixel_fade(p_mod * lfo * (*(CCs[48].p[0])))); // LFO->PW2
    
        set_matrix(1, 0, pixel_fade(p_mod * env * (*(CCs[49].p[0])))); // ENV->OS1 
        set_matrix(1, 1, pixel_fade(p_mod * env * (*(CCs[50].p[0])))); // ENV->PW1 
        set_matrix(1, 2, pixel_fade(p_mod * env * (*(CCs[51].p[0])))); // ENV->VCF 
        set_matrix(1, 3, pixel_fade(p_mod * env * (*(CCs[52].p[0])))); // ENV->OS2 
        set_matrix(1, 4, pixel_fade(p_mod * env * (*(CCs[53].p[0])))); // ENV->PW2 
    
        set_matrix(2, 0, pixel_fade(p_mod * (*(CCs[54].p[0])))); // NSE->OS1
        set_matrix(2, 1, pixel_fade(p_mod * (*(CCs[55].p[0])))); // NSE->PW1
        set_matrix(2, 2, pixel_fade(p_mod * (*(CCs[56].p[0])))); // NSE->VCF
        set_matrix(2, 3, pixel_fade(p_mod * (*(CCs[57].p[0])))); // NSE->OS2
        set_matrix(2, 4, pixel_fade(p_mod * (*(CCs[58].p[0])))); // NSE->PW2
    
        set_matrix(3, 0, pixel_fade(p_mod * osc_2 * (*(CCs[59].p[0])))); // OS2->OS1
        set_matrix(3, 1, pixel_fade(p_mod * osc_2 * (*(CCs[60].p[0])))); // OS2->PW1
        set_matrix(3, 2, pixel_fade(p_mod * osc_2 * (*(CCs[61].p[0])))); // OS2->VCF
    }

    // tint the active row
    if(matrix_row_selected != -1){
        for(int i=0; i<5; i++){
            tint_led_yellow(&matrix[matrix_row_selected][i]);
        }
    }

    // tint the active column
    if(matrix_column_selected != -1){
        for(int i=0; i<4; i++){
            tint_led_yellow(&matrix[i][matrix_column_selected]);
        }
    }

    // P.MOD
    set_led(17, poly_mod_active ? On : Off); // LFO->OS1

    // apply the matrix buffer
    set_led(12, matrix[0][4]); // LFO->PW2
    set_led(13, matrix[0][3]); // LFO->OS2
    set_led(14, matrix[0][2]); // LFO->VCF
    set_led(15, matrix[0][1]); // LFO->PW1
    set_led(16, matrix[0][0]); // LFO->OS1
    set_led(18, matrix[1][0]); // ENV->OS1
    set_led(19, matrix[1][1]); // ENV->PW1
    set_led(20, matrix[1][2]); // ENV->VCF
    set_led(21, matrix[1][3]); // ENV->OS2
    set_led(22, matrix[1][4]); // ENV->PW2
    set_led(23, matrix[2][4]); // NSE->PW2
    set_led(24, matrix[2][3]); // NSE->OS2
    set_led(25, matrix[2][2]); // NSE->VCF
    set_led(26, matrix[2][1]); // NSE->PW1
    set_led(27, matrix[2][0]); // NSE->OS1
    set_led(28, matrix[3][0]); // OS2->OS1
    set_led(29, matrix[3][1]); // OS2->PW1
    set_led(30, matrix[3][2]); // OS2->VCF

    update_led_bar();
    if (midi_channel_adjust_held() ||
        pitch_bend_up_adjust_held() ||
        pitch_bend_down_adjust_held() ||
        chorus_mode_display_held() ||
        uses_signed_int_led_bar(led_bar_cc_num)) {
        render_signed_int_led_bar();
    } else {
        render_linear_led_bar();
    }

    assert(led_strip != nullptr);
    led_strip->Update();
}

void start_splash(){
    CTimer::Get()->RegisterPeriodicHandler(splash_tick);
    splash_running = TRUE;
    splash_last_update_us = CTimer::GetClockTicks64();
    splash_rng = splash_last_update_us;
}

void led_init(void){
    if (led_strip == nullptr) {
        led_strip = new CWS2812OverSMI(1 << 2, NUM_LED);
        assert(led_strip != nullptr);
    }
    for (unsigned i = 0; i < NUM_LED; i++)
    {
        set_led(i, Off);
    }
    led_strip->Update();
    start_splash();
}

void stopSplash(void)
{
    splash_running = FALSE;
}
