#ifndef DSP_H
#define DSP_H

#include <circle/timer.h>
#include "buttons.h"

#define NUM_VOICES 3
#define NUM_DSP 3
#define NUM_CC 44 // must be the highest CC value + 1, CC's are 1 indexed. This represents the [midi:n] from the .dsp file

struct CC {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    float step;
    float mul;
    char name[20];
};

struct Mod {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    float step;
    float mul;
    char name[20];
};

struct Alt {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    float step;
    float mul;
    char name[20];
};

struct Sel {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    char name[20];
};

struct AltSel {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    char name[20];
};
struct Asb {
    float *p[NUM_DSP];
    float min;
    float max;
    float init;
    float step;
    float mul;
    char name[20];
};

struct Sigs {
    float *pitch[NUM_VOICES];
    float *gate[NUM_VOICES];
    float *lfo;
    float *env[NUM_VOICES];
    // float *pitch_bend;
    // float *vca;
    // float *fine_tune;
    // float *transpose;
};

extern struct CC CCs[NUM_CC];
extern struct Mod Mods[NUM_BUTTONS];
extern struct Alt Alts[NUM_BUTTONS];
extern struct Sel Sels[NUM_BUTTONS];
extern struct AltSel AltSels[NUM_BUTTONS];
extern struct Asb Asbs[NUM_BUTTONS];
extern struct Sigs Signals[NUM_DSP];


void dsp_init(CTimer *timer);
void compute_dsp_1(void);
void compute_dsp_2(void);
void compute_dsp_3(void);


#endif