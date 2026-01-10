#include <WS28XX/ws28xxstripe.h>
#include <circle/logger.h>
#include <circle/util.h>
#include <circle/timer.h>
#include "strings.h"

#include "led.h"
#include "dsp.h"

CWS28XXStripe led_strip(SK6812, NUM_LED, 4000000, 0);

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

static float led_bar[11] = {0};
static float *led_bar_val_p = nullptr;
static float led_bar_min = 0;
static float led_bar_max = 0;

static struct Pixel matrix[4][5] = {0};

void set_led_bar(float *val, float min, float max){
    led_bar_val_p = val;
    led_bar_min = min;
    led_bar_max = max;
}

void update_led_bar(void){
    if(led_bar_val_p == nullptr){
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

void set_matrix(int row, int column, struct Pixel pixel){
    matrix[row][column] = pixel;
}

static void set_led(unsigned int idx, struct Pixel pixel){
    led_strip.SetLED(idx, pixel.red, pixel.green, pixel.blue);
}

static void tint_led_yellow(struct Pixel *pixel){
    pixel->red++;
    pixel->green++;
}

static struct Pixel pixel_fade(float val){
    struct Pixel pixel = {
        .red = (u8)(10.0 * val),
        .green = (u8)(150.0 * val),
        .blue = (u8)(50.0 * val)
    };
    return pixel;
}

void render_leds(void){

    set_led(0, *(Sels[3].p[0]) ? Red : Off);        // SYNC

    set_led(1, *(Sels[9].p[0]) == 1 ? Green : Off); // OSC 1 SQR
    set_led(2, *(Sels[9].p[0]) == 0 ? Green : Off); // OSC 1 SAW

    set_led(3, *(Sels[27].p[0]) == 0 ? Green : Off); // OSC 2 SAW
    set_led(4, *(Sels[27].p[0]) == 1 ? Green : Off); // OSC 2 SQR
    set_led(5, *(Sels[27].p[0]) == 2 ? Green : Off); // OSC 2 TRI

    set_led(6, *(Sels[23].p[0]) == 0 ? Green : Off); // LFO SAW
    set_led(7, *(Sels[23].p[0]) == 1 ? Green : Off); // LFO SQR
    set_led(8, *(Sels[23].p[0]) == 2 ? Green : Off); // LFO TRI

    float lfo = *(Signals[0].lfo);
    // sum all the envelopes
    float env = 0;
    for(int i=0; i<NUM_DSP; i++){
        for(int j=0; j<NUM_VOICES; j++){
            env += *(Signals[i].env[j]);
        }
    }

    // modulation signals
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

    set_matrix(2, 0, pixel_fade(0 * (*(CCs[36].p[0])))); // NSE->OS1
    set_matrix(2, 1, pixel_fade(0 * (*(CCs[37].p[0])))); // NSE->PW1
    set_matrix(2, 2, pixel_fade(0 * (*(CCs[38].p[0])))); // NSE->VCF
    set_matrix(2, 3, pixel_fade(0 * (*(CCs[39].p[0])))); // NSE->OS2
    set_matrix(2, 4, pixel_fade(0 * (*(CCs[40].p[0])))); // NSE->PW2

    set_matrix(3, 0, pixel_fade(0 * (*(CCs[41].p[0])))); // OS2->OS1
    set_matrix(3, 1, pixel_fade(0 * (*(CCs[42].p[0])))); // OS2->PW1
    set_matrix(3, 2, pixel_fade(0 * (*(CCs[43].p[0])))); // OS2->VCF

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

    // apply the matrix buffer
    set_led(9,  matrix[0][4]); // LFO->PW2
    set_led(10, matrix[0][3]); // LFO->OS2
    set_led(11, matrix[0][2]); // LFO->VCF
    set_led(12, matrix[0][1]); // LFO->PW1
    set_led(13, matrix[0][0]); // LFO->OS1
    set_led(14, matrix[1][0]); // ENV->OS1
    set_led(15, matrix[1][1]); // ENV->PW1
    set_led(16, matrix[1][2]); // ENV->VCF
    set_led(17, matrix[1][3]); // ENV->OS2
    set_led(18, matrix[1][4]); // ENV->PW2
    set_led(19, matrix[2][4]); // NSE->PW2
    set_led(20, matrix[2][3]); // NSE->OS2
    set_led(21, matrix[2][2]); // NSE->VCF
    set_led(22, matrix[2][1]); // NSE->PW1
    set_led(23, matrix[2][0]); // NSE->OS1
    set_led(24, matrix[3][0]); // OS2->OS1
    set_led(25, matrix[3][1]); // OS2->PW1
    set_led(26, matrix[3][2]); // OS2->VCF

    update_led_bar();
    set_led(27, led_bar[10] == 0 ? Off : led_bar[10] == 1 ? On : pixel_fade(led_bar[10])); // 10
    set_led(28, led_bar[9] == 0 ? Off : led_bar[9] == 1 ? On : pixel_fade(led_bar[9])); // 9
    set_led(29, led_bar[8] == 0 ? Off : led_bar[8] == 1 ? On : pixel_fade(led_bar[8])); // 8
    set_led(30, led_bar[7] == 0 ? Off : led_bar[7] == 1 ? On : pixel_fade(led_bar[7])); // 7
    set_led(31, led_bar[6] == 0 ? Off : led_bar[6] == 1 ? On : pixel_fade(led_bar[6])); // 6
    set_led(32, led_bar[5] == 0 ? Off : led_bar[5] == 1 ? On : pixel_fade(led_bar[5])); // 5
    set_led(33, led_bar[4] == 0 ? Off : led_bar[4] == 1 ? On : pixel_fade(led_bar[4])); // 4
    set_led(34, led_bar[3] == 0 ? Off : led_bar[3] == 1 ? On : pixel_fade(led_bar[3])); // 3
    set_led(35, led_bar[2] == 0 ? Off : led_bar[2] == 1 ? On : pixel_fade(led_bar[2])); // 2
    set_led(36, led_bar[1] == 0 ? Off : led_bar[1] == 1 ? On : pixel_fade(led_bar[1])); // 1
    set_led(37, led_bar[0] == 0 ? Off : led_bar[0] == 1 ? On : pixel_fade(led_bar[0])); // 0

    led_strip.Update();
}

void led_init(void){
    led_strip.Initialize();
    for(int i=0; i<NUM_LED; i++){
        set_led(i, Off);
    }
    led_strip.Update();
}
