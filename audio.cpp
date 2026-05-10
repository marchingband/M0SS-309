#include <circle/timer.h>
#include <circle/synchronize.h>
#include <circle/memory.h>
#include <circle/logger.h>
#include <assert.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <circle/logger.h>
#include <circle/util.h>
#include <math.h>

#include "audio.h"
#include "buttons.h"
#include "strings.h"
#include "dsp.h"
#include "midiXparser.h"
#include "led.h"
#include "masterFX.h"
#include "dsp_glue.h"
#include "logging.h"

#define NUM_FRAMES (CHUNK_SIZE / 2)

static const char FromAudio[] = "audio";
#if APP_ENABLE_RUNTIME_DEBUG_LOGS
static const u64 CoreWaitLateThresholdUs = 4000ULL;
static const u64 CoreWaitReportPeriodUs = 1000000ULL;
static boolean s_NonFiniteLogged = FALSE;
static u64 s_CoreWaitReportStartUs = 0;
static u64 s_CoreWaitMaxUs = 0;
static unsigned s_CoreWaitLateEvents = 0;
static unsigned s_CoreWaitLateCore1 = 0;
static unsigned s_CoreWaitLateCore2 = 0;
static unsigned s_CoreWaitLateCore3 = 0;
#endif

extern volatile boolean core_1_run;
extern volatile boolean core_2_run;
extern volatile boolean core_3_run;
extern float **buffers_1;
extern float **buffers_2;
extern float **buffers_3;

MasterFX *dsp0 = NULL;

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
    dsp0 = newMasterFX();
    initMasterFX(dsp0, 48000);
    buildUserInterfaceMasterFX(dsp0, &ui_glue);
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

#if APP_ENABLE_RUNTIME_DEBUG_LOGS
static void log_non_finite_sample(const char *stage, unsigned source, unsigned channel, unsigned frame, float value)
{
    if (s_NonFiniteLogged) {
        return;
    }

    const char *kind = "non-finite";
    if (isnan(value)) {
        kind = "NaN";
    } else if (isinf(value)) {
        kind = value > 0.0f ? "+Inf" : "-Inf";
    }

    CLogger::Get ()->Write (
        FromAudio,
        LogNotice,
        "%s %s src=%u ch=%u frame=%u",
        stage,
        kind,
        source,
        channel,
        frame
    );
    s_NonFiniteLogged = TRUE;
}

static void scan_buffer_non_finite(const char *stage, unsigned source, float **buffers, unsigned channels, unsigned frames)
{
    if (s_NonFiniteLogged || buffers == 0) {
        return;
    }

    for (unsigned ch = 0; ch < channels; ch++) {
        if (buffers[ch] == 0) {
            continue;
        }
        for (unsigned frame = 0; frame < frames; frame++) {
            float value = buffers[ch][frame];
            if (!isfinite(value)) {
                log_non_finite_sample(stage, source, ch, frame, value);
                return;
            }
        }
    }
}
#endif

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
    
#if APP_ENABLE_RUNTIME_DEBUG_LOGS
    // wait until they are done
    u64 wait_start_us = CTimer::GetClockTicks64();
    boolean late_wait = FALSE;
    unsigned late_core_mask = 0;
#endif
    while (core_1_run || core_2_run || core_3_run)
    {
#if APP_ENABLE_RUNTIME_DEBUG_LOGS
        u64 waited_us = CTimer::GetClockTicks64() - wait_start_us;
        if (!late_wait && waited_us >= CoreWaitLateThresholdUs)
        {
            late_wait = TRUE;
            if (core_1_run) late_core_mask |= 1U;
            if (core_2_run) late_core_mask |= 2U;
            if (core_3_run) late_core_mask |= 4U;
        }
#endif
        encoder->Update();
    }

#if APP_ENABLE_RUNTIME_DEBUG_LOGS
    u64 total_wait_us = CTimer::GetClockTicks64() - wait_start_us;
    if (total_wait_us > s_CoreWaitMaxUs) {
        s_CoreWaitMaxUs = total_wait_us;
    }
    if (late_wait) {
        s_CoreWaitLateEvents++;
        if (late_core_mask & 1U) s_CoreWaitLateCore1++;
        if (late_core_mask & 2U) s_CoreWaitLateCore2++;
        if (late_core_mask & 4U) s_CoreWaitLateCore3++;
    }

    if (s_CoreWaitReportStartUs == 0) {
        s_CoreWaitReportStartUs = wait_start_us;
    } else if ((wait_start_us - s_CoreWaitReportStartUs) >= CoreWaitReportPeriodUs) {
        if (s_CoreWaitLateEvents > 0 || s_CoreWaitMaxUs > 0) {
            CLogger::Get ()->Write (
                FromAudio,
                LogNotice,
                "wait stats max=%u late=%u c1=%u c2=%u c3=%u",
                (unsigned) s_CoreWaitMaxUs,
                s_CoreWaitLateEvents,
                s_CoreWaitLateCore1,
                s_CoreWaitLateCore2,
                s_CoreWaitLateCore3
            );
        }
        s_CoreWaitReportStartUs = wait_start_us;
        s_CoreWaitMaxUs = 0;
        s_CoreWaitLateEvents = 0;
        s_CoreWaitLateCore1 = 0;
        s_CoreWaitLateCore2 = 0;
        s_CoreWaitLateCore3 = 0;
    }
#endif

#if APP_ENABLE_RUNTIME_DEBUG_LOGS
    scan_buffer_non_finite("core", 1, buffers_1, 2, NUM_FRAMES);
    scan_buffer_non_finite("core", 2, buffers_2, 2, NUM_FRAMES);
    scan_buffer_non_finite("core", 3, buffers_3, 2, NUM_FRAMES);
#endif

    // CLogger::Get ()->Write (FromAudio, LogDebug, "All cores done");

    // sum the buffers
    for(unsigned i=0; i<NUM_FRAMES; i++)
    {
        inBuffers[0][i] = buffers_1[0][i] + buffers_2[0][i] + buffers_3[0][i];
        inBuffers[1][i] = buffers_1[1][i] + buffers_2[1][i] + buffers_3[1][i];
    }

#if APP_ENABLE_RUNTIME_DEBUG_LOGS
    scan_buffer_non_finite("mix", 0, inBuffers, 2, NUM_FRAMES);
#endif


    computeMasterFX(dsp0, NUM_FRAMES, inBuffers, outBuffers);

#if APP_ENABLE_RUNTIME_DEBUG_LOGS
    scan_buffer_non_finite("fx", 0, outBuffers, 2, NUM_FRAMES);
#endif

    for(int i=0; i<NUM_FRAMES; i++){
        s32 left = ftos24(outBuffers[0][i]);
        s32 right = ftos24(outBuffers[1][i]);
        pBuffer[i * 2] = left;
        pBuffer[i * 2 + 1] = right;
    }

    // CLogger::Get ()->Write (FromAudio, LogDebug, "Wrote %d bytes, min %d, max %d", nChunkSize, min ,max);

    return nChunkSize;
}
