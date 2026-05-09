#include "mono_mode.h"

#include "dsp.h"

bool mono_mode = false;

static const float MonoDetuneLUT[NUM_DSP * NUM_VOICES] = {
    -0.035f, -0.022f, -0.010f,
     0.000f,  0.012f,  0.021f,
     0.030f, -0.015f,  0.006f
};

float mono_detune_for_voice(unsigned index)
{
    if (index >= NUM_DSP * NUM_VOICES) {
        return 0.0f;
    }

    return MonoDetuneLUT[index];
}
