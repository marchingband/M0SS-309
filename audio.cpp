#include <circle/timer.h>
#include <circle/synchronize.h>
#include <circle/memory.h>
#include <circle/logger.h>
#include <assert.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <circle/logger.h>
#include <circle/util.h>

#include "audio.h"
#include "strings.h"
#include "dsp.h"
#include "midiXparser.h"
#include "led.h"

static const char FromAudio[] = "audio";

extern volatile boolean core_1_run;
extern volatile boolean core_2_run;
extern volatile boolean core_3_run;
extern float **buffers_1;
extern float **buffers_2;
extern float **buffers_3;

float **outBuffers = nullptr;
static CKY040 *encoder = nullptr;

CPDI2S::CPDI2S(CInterruptSystem *pInterrupt, CKY040 *m_RotaryEncoder)
:   CI2SSoundBaseDevice (pInterrupt, SAMPLE_RATE, CHUNK_SIZE, false)
// :   CPWMSoundBaseDevice (pInterrupt, 44100, CHUNK_SIZE)
{
    encoder = m_RotaryEncoder;
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
    // CLogger::Get ()->Write (FromAudio, LogDebug, "Get Chunk");
    int min = GetRangeMin();
    int max = GetRangeMax();
    int dc = max / 2;
    // float scale = 0.1;
    float scale = 0.9;

    // CLogger::Get ()->Write (FromAudio, LogDebug, "min: %d max: %d", min, max);
    
    int numFrames = CHUNK_SIZE / 2;
    
    if(outBuffers == nullptr){
        outBuffers = new float*[2];
        for (int i = 0; i < 2; ++i) {
            outBuffers[i] = new float[numFrames];
        }
        CLogger::Get ()->Write (FromAudio, LogDebug, "Allocated buffers");
        // dsp = newmydsp();
        // initmydsp(dsp, 48000);
        // buildUserInterfacemydsp(dsp, &ui_glue);
    }

    // computemydsp(dsp, numFrames, NULL, outBuffers);
    
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
    for(unsigned i=0; i<numFrames; i++)
    {
        outBuffers[0][i] = buffers_1[0][i] + buffers_2[0][i] + buffers_3[0][i];
        outBuffers[1][i] = buffers_1[1][i] + buffers_2[1][i] + buffers_3[1][i];
    }

    for(int i=0; i<numFrames; i++){
        s32 left = ftos24(outBuffers[0][i]);
        s32 right = ftos24(outBuffers[1][i]);
        // s32 left = tos24((outBuffers[0][i] * scale * dc) + dc);
        // s32 right = tos24((outBuffers[1][i] * scale * dc) + dc);
        pBuffer[i * 2] = left;
        pBuffer[i * 2 + 1] = right;
    }
    // CLogger::Get ()->Write (FromAudio, LogDebug, "Wrote %d bytes, min %d, max %d", nChunkSize, min ,max);

    return nChunkSize;
}
