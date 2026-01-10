#include <circle/timer.h>
#include <circle/synchronize.h>
#include <circle/memory.h>
#include <circle/logger.h>
#include <assert.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <circle/logger.h>
#include <circle/util.h>

#include "audio.h"
#include "buttons.h"
#include "strings.h"
#include "dsp.h"
#include "midiXparser.h"
#include "led.h"
#include "cchorus.h"
#include "dsp_glue.h"
#include "dsp.h"

#define NUM_FRAMES (CHUNK_SIZE / 2)

static const char FromAudio[] = "audio";

extern volatile boolean core_1_run;
extern volatile boolean core_2_run;
extern volatile boolean core_3_run;
extern float **buffers_1;
extern float **buffers_2;
extern float **buffers_3;

extern bool chorus_on;

mychorus *dsp0 = NULL;

float **inBuffers = nullptr;
float **outBuffers = nullptr;
static CKY040 *encoder = nullptr;

CPDI2S::CPDI2S(CInterruptSystem *pInterrupt, CKY040 *m_RotaryEncoder)
:   CI2SSoundBaseDevice (pInterrupt, SAMPLE_RATE, CHUNK_SIZE, false)
{
    encoder = m_RotaryEncoder;
    if(outBuffers == nullptr){
        outBuffers = new float*[2];
        for (int i = 0; i < 2; ++i) {
            outBuffers[i] = new float[NUM_FRAMES];
        }
        CLogger::Get ()->Write (FromAudio, LogDebug, "Allocated outBuffers");
    }
    if(inBuffers == nullptr){
        inBuffers = new float*[2];
        for (int i = 0; i < 2; ++i) {
            inBuffers[i] = new float[NUM_FRAMES];
        }
        CLogger::Get ()->Write (FromAudio, LogDebug, "Allocated inBuffers");
    }
    dsp0 = newmychorus();
    initmychorus(dsp0, 48000);
    buildUserInterfacemychorus(dsp0, &ui_glue);
}

CPDI2S::~CPDI2S(void)
{
}

u32 tos24(s32 in){
    bool neg = in < 0;
    in &= 0x7FFFFF;
    if(neg){
        in |= 0x800000;
    }
    return in;
}

u32 ftos24(float in){
    float scaled = in * 8388608.0f; // 2^23
    int32_t q23 = (int32_t)scaled;

    // 2. Saturate
    if (q23 >  0x7FFFFF) q23 =  0x7FFFFF;
    if (q23 < -0x7FFFFF) q23 = -0x7FFFFF;

    bool neg = q23 < 0;
    q23 &= 0x7FFFFF;
    if(neg){
        q23 |= 0x800000;
    }
    return (uint32_t)q23;
}

unsigned CPDI2S::GetChunk (u32 *pBuffer, unsigned nChunkSize)
{
    // int min = GetRangeMin();
    // int max = GetRangeMax();
    // CLogger::Get ()->Write (FromAudio, LogDebug, "min: %d max: %d", min, max);
        
    // CLogger::Get ()->Write (FromAudio, LogDebug, "Triggering cores to run");
    // tell the cores to execute a loop
    core_1_run = true;
    core_2_run = true;
    core_3_run = true;

    render_leds();
    
    // wait until they are done
    while (core_1_run || core_2_run || core_3_run)
    {
        encoder->Update();
    }

    // CLogger::Get ()->Write (FromAudio, LogDebug, "All cores done");

    // sum the buffers
    for(unsigned i=0; i<NUM_FRAMES; i++)
    {
        inBuffers[0][i] = buffers_1[0][i] + buffers_2[0][i] + buffers_3[0][i];
        inBuffers[1][i] = buffers_1[1][i] + buffers_2[1][i] + buffers_3[1][i];
    }

    // if(chorus_on){
        computemychorus(dsp0, NUM_FRAMES, inBuffers, outBuffers);
    
        for(int i=0; i<NUM_FRAMES; i++){
            s32 left = ftos24(outBuffers[0][i]);
            s32 right = ftos24(outBuffers[1][i]);
            pBuffer[i * 2] = left;
            pBuffer[i * 2 + 1] = right;
        }
    // } else {
    //     for(int i=0; i<NUM_FRAMES; i++){
    //         s32 left = ftos24(inBuffers[0][i]);
    //         s32 right = ftos24(inBuffers[1][i]);
    //         pBuffer[i * 2] = left;
    //         pBuffer[i * 2 + 1] = right;
    //     }
    // }

    // CLogger::Get ()->Write (FromAudio, LogDebug, "Wrote %d bytes, min %d, max %d", nChunkSize, min ,max);

    return nChunkSize;
}
