#include <circle/logger.h>
#include <circle/util.h>
#include <circle/timer.h>
#include "strings.h"

#include "dsp_glue.h"
#include "dsp.h"
#include "M0SS-309.h"
#include "audio.h"
#include "buttons.h"
#include "logging.h"

static const char FromDSP[] = "DSP";

mydsp *dsp1 = NULL;
mydsp *dsp2 = NULL;
mydsp *dsp3 = NULL;

float **buffers_1;
float **buffers_2;
float **buffers_3;

static int cur_core_init = 0;

struct CC CCs[NUM_CC] = {0};
struct Mod Mods[NUM_BUTTONS] = {0};
struct Alt Alts[NUM_BUTTONS] = {0};
struct Sel Sels[NUM_BUTTONS] = {0};
struct AltSel AltSels[NUM_BUTTONS] = {0};
struct Asb Asbs[NUM_BUTTONS] = {0};
struct Sigs Signals[NUM_DSP] = {0};

// Optional DSP benchmark logging (disabled by default).
#if APP_ENABLE_BENCH_LOGS
struct DSPBenchStats {
    boolean seen;
    u32 min_pct_x100;
    u32 max_pct_x100;
    u32 min_us;
    u32 max_us;
};

static struct DSPBenchStats s_DSPBench[NUM_DSP] = {0};

static u32 calc_block_capacity_pct_x100(u32 elapsed_us)
{
    // Each DSP core renders CHUNK_SIZE/2 samples per audio callback.
    // Capacity is the real-time budget for this block at SAMPLE_RATE.
    const u64 frames = (u64) (CHUNK_SIZE / 2);
    const u64 den = frames * 1000000ULL;
    const u64 num = (u64) elapsed_us * (u64) SAMPLE_RATE * 10000ULL; // percent with 2 decimals
    return (u32) ((num + den / 2ULL) / den); // rounded
}

static void benchmark_dsp_core(unsigned core_index, u32 elapsed_us)
{
    if (core_index >= NUM_DSP) {
        return;
    }

    u32 pct_x100 = calc_block_capacity_pct_x100(elapsed_us);
    struct DSPBenchStats *stats = &s_DSPBench[core_index];
    boolean min_changed = FALSE;
    boolean max_changed = FALSE;

    if (!stats->seen) {
        stats->seen = TRUE;
        stats->min_pct_x100 = pct_x100;
        stats->max_pct_x100 = pct_x100;
        stats->min_us = elapsed_us;
        stats->max_us = elapsed_us;
        min_changed = TRUE;
        max_changed = TRUE;
    } else {
        if (pct_x100 < stats->min_pct_x100) {
            stats->min_pct_x100 = pct_x100;
            stats->min_us = elapsed_us;
            min_changed = TRUE;
        }
        if (pct_x100 > stats->max_pct_x100) {
            stats->max_pct_x100 = pct_x100;
            stats->max_us = elapsed_us;
            max_changed = TRUE;
        }
    }

    if (min_changed || max_changed) {
        CLogger::Get ()->Write (
            FromDSP,
            LogNotice,
            "core %u DSP load min %u.%02u%% (%u us) max %u.%02u%% (%u us)%s%s",
            core_index + 1,
            stats->min_pct_x100 / 100U,
            stats->min_pct_x100 % 100U,
            stats->min_us,
            stats->max_pct_x100 / 100U,
            stats->max_pct_x100 % 100U,
            stats->max_us,
            min_changed ? " [new min]" : "",
            max_changed ? " [new max]" : ""
        );
    }
}
#endif

void extract(const char *name, float *p, float init, float min, float max, float step){
    // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "extract %s", name);
    const char *pitch_prefix = "freq_";
    size_t pitch_prefix_len = strlen(pitch_prefix);

    const char *gate_prefix = "gate_";
    size_t gate_prefix_len = strlen(gate_prefix);

    if (strncmp(name, pitch_prefix, pitch_prefix_len) == 0) // its a pitch
    {
        const char *number_part = name + pitch_prefix_len;
        char *endptr;
        int value = (int)strtol(number_part, &endptr);
        if (*endptr == '\0') {
            Signals[cur_core_init].pitch[value] = p;
            CLogger::Get ()->Write (FromDSP, LogDebug, "parsed pointer to pitch %d in dsp %d", value, cur_core_init);
        } else {
            CLogger::Get ()->Write (FromDSP, LogDebug, "Invalid number format after 'freq_'");
        }    
    }

    if (strncmp(name, gate_prefix, gate_prefix_len) == 0) // its a pitch
    {
        const char *number_part = name + gate_prefix_len;
        char *endptr;
        int value = (int)strtol(number_part, &endptr);
        if (*endptr == '\0') {
                Signals[cur_core_init].gate[value] = p;
                CLogger::Get ()->Write (FromDSP, LogDebug, "parsed pointer to gate %d in dsp %d", value, cur_core_init);
        } else {
            // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "Invalid number format after 'gate_'");
        }    
    }

    bool found = false;
    for(int i=0; i<NUM_CC; i++)
    {
        struct CC *cc = &CCs[i];
        if(cc->p[cur_core_init] == p){
            cc->min = min;
            cc->max = max;
            cc->init = init;
            cc->step = step;
            float steps = (max - min) / step;
            float per = steps / 128.0;
            cc->mul = per;
            strcpy(cc->name, name);
            found = true;
        }
    }

    for(int i=0; i<NUM_BUTTONS; i++)
    {
        struct Mod *mod = &Mods[i];
        if(mod->p[cur_core_init] == p){
            mod->min = min;
            mod->max = max;
            mod->init = init;
            mod->step = step;
            float steps = (max - min) / step;
            float per = steps / 128.0;
            mod->mul = per;
            strcpy(mod->name, name);
            found = true;
        }
    }

    for(int i=0; i<NUM_BUTTONS; i++)
    {
        struct Alt *alt = &Alts[i];
        if(alt->p[cur_core_init] == p){
            alt->min = min;
            alt->max = max;
            alt->init = init;
            alt->step = step;
            float steps = (max - min) / step;
            float per = steps / 128.0;
            alt->mul = per;
            strcpy(alt->name, name);
            found = true;
        }
    }

    for(int i=0; i<NUM_BUTTONS; i++)
    {
        struct Sel *sel = &Sels[i];
        if(sel->p[cur_core_init] == p){
            sel->min = min;
            sel->max = max;
            sel->init = init;
            strcpy(sel->name, name);
            found = true;
        }
    }

    for(int i=0; i<NUM_BUTTONS; i++)
    {
        struct AltSel *alt_sel = &AltSels[i];
        if(alt_sel->p[cur_core_init] == p){
            alt_sel->min = min;
            alt_sel->max = max;
            alt_sel->init = init;
            strcpy(alt_sel->name, name);
            found = true;
        }
    }

    for(int i=0; i<NUM_BUTTONS; i++)
    {
        struct Asb *asb = &Asbs[i];
        if(asb->p[cur_core_init] == p){
            asb->min = min;
            asb->max = max;
            asb->init = init;
            asb->step = step;
            float steps = (max - min) / step;
            float per = steps / 128.0;
            asb->mul = per;
            strcpy(asb->name, name);
            found = true;
        }
    }
    
    if(!found){
        CLogger::Get ()->Write (FromDSP, LogDebug, "failed to find pointer for %s\n", name);
    }
};

void declare(UIGlue *uiInterface, float *p, const char* key, const char* val){

    const char *env_prefix = "env_";
    size_t env_prefix_len = strlen(env_prefix);
    if (strncmp(key, env_prefix, env_prefix_len) == 0) // its an env
    {
        const char *number_part = key + env_prefix_len;
        char *endptr;
        int value = (int)strtol(number_part, &endptr);
        if (*endptr == '\0') {
            Signals[cur_core_init].env[value] = p;
            CLogger::Get ()->Write (FromDSP, LogDebug, "parsed pointer to env %d in dsp %d", value, cur_core_init);
        } else {
            // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "Invalid number format after 'gate_'");
        }    
    } 

    const char *env_amp_prefix = "env_amp_";
    size_t env_amp_prefix_len = strlen(env_amp_prefix);
    if (strncmp(key, env_amp_prefix, env_amp_prefix_len) == 0) // its an env
    {
        const char *number_part = key + env_amp_prefix_len;
        char *endptr;
        int value = (int)strtol(number_part, &endptr);
        if (*endptr == '\0') {
            Signals[cur_core_init].env_amp[value] = p;
            CLogger::Get ()->Write (FromDSP, LogDebug, "parsed pointer to env_amp %d in dsp %d", value, cur_core_init);
        } else {
            // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "Invalid number format after 'gate_'");
        }    
    } 
        
    if(strcmp(key, "lfo") == 0){ // its the lfo
        Signals[cur_core_init].lfo = p;
        CLogger::Get ()->Write (FromDSP, LogDebug, "parsed pointer to lfo in dsp %d", cur_core_init);
    }

    if(strcmp("midi", key) == 0) // its a cc
    {
        // CLogger::Get ()->Write (FromDSP, LogDebug, "got midi %s:%s voice:%d", key, val, cur_core_init);
        long num = strtol(val, NULL);

        struct CC *cc = &CCs[num];
        cc->p[cur_core_init] = p;
    }
    if(strcmp("mod", key) == 0) // its a cc
    {
        // CLogger::Get ()->Write (FromDSP, LogDebug, "got mod %s:%s voice:%d", key, val, cur_core_init);
        long num = strtol(val, NULL);

        struct Mod *mod = &Mods[num];
        mod->p[cur_core_init] = p;
    }
    if(strcmp("alt", key) == 0) // its a cc
    {
        long num = strtol(val, NULL);

        struct Alt *alt = &Alts[num];
        alt->p[cur_core_init] = p;
    }
    if(strcmp("sel", key) == 0) // its a selection toggle
    {
        // CLogger::Get ()->Write (FromDSP, LogDebug, "got sel %s:%s voice:%d", key, val, cur_core_init);
        long num = strtol(val, NULL);

        struct Sel *sel = &Sels[num];
        sel->p[cur_core_init] = p;
    }
    if(strcmp("alt-sel", key) == 0) // its a selection toggle with alt held
    {
        // CLogger::Get ()->Write (FromDSP, LogDebug, "got alt-sel %s:%s voice:%d", key, val, cur_core_init);
        long num = strtol(val, NULL);

        struct AltSel *alt_sel = &AltSels[num];
        alt_sel->p[cur_core_init] = p;
        // printf("got alt_sel\n\r\r");
    }
    if(strcmp("asb", key) == 0) // its a modifuer with alt held
    {
        // CLogger::Get ()->Write (FromDSP, LogDebug, "got asb %s:%s voice:%d", key, val, cur_core_init);
        long num = strtol(val, NULL);

        struct Asb *asb = &Asbs[num];
        asb->p[cur_core_init] = p;
    }
    // if(strcmp("pitch", key) == 0) // its the pitch
    // {
    //     // printf("got pitch pointer\n\r\r");
    //     Signals.pitch = p;
    // }
    // if(strcmp("gate", key) == 0) // its the gate
    // {
    //     // printf("got gate pointer\n\r\r");
    //     Signals.gate = p;
    //     *Signals.gate = 0;
    // }
    // if(strcmp("vca", key) == 0) // its the gate
    // {
    //     // printf("got vca pointer\n\r\r");
    //     Signals.vca = p;
    // }
    // if(strcmp("pitch-bend", key) == 0) // its the pitch bend
    // {
    //     // printf("got pitch bend pointer\n\r\r");
    //     Signals.pitch_bend = p;
    // }
    // if(strcmp("fine-tune", key) == 0) // its the fine tuning
    // {
    //     // printf("got fine-tune pointer\n\r\r");
    //     Signals.fine_tune = p;
    // }
    // if(strcmp("transpose", key) == 0) // its the transpose
    // {
    //     // printf("got transpose pointer\n\r\r");
    //     Signals.transpose = p;
    // }
    // if(strcmp("lfo", key) == 0) // its the lfo
    // {
    //     // printf("got lfo pointer\n\r\r");
    //     Signals.lfo = p;
    // }
    // if(strcmp("env", key) == 0) // its the env
    // {
    //     // printf("got env pointer\n\r\r");
    //     Signals.env = p;
    // }
};

// void declare(struct UIGlue *uiInterface, float *p, const char* key, const char* val){};
void openVerticalBox(struct UIGlue *uiInterface, char* key){};
void openHorizontalBox(struct UIGlue *uiInterface, char* key){};
void closeBox(struct UIGlue *uiInterface){};
void addVerticalBargraph(struct UIGlue *uiInterface, const char *name, float *p, float f1, float f2){};
void addButton(struct UIGlue *uiInterface, const char *name, float *p){extract(name, p, 0, 0, 0, 0);};
void addVerticalSlider(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};
void addHorizontalSlider(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};
void addNumEntry(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step){extract(name, p, init, min, max, step);};

UIGlue ui_glue = {
    NULL,
    openVerticalBox,
    openHorizontalBox,
    closeBox,
    declare,
    addVerticalSlider,
    addHorizontalSlider,
    addNumEntry,
    addVerticalBargraph,
    addButton
};

void compute_dsp_1(void){
#if APP_ENABLE_BENCH_LOGS
    u64 start_us = CTimer::GetClockTicks64();
    computemydsp(dsp1, CHUNK_SIZE / 2, NULL, buffers_1);
    u64 elapsed_us_64 = CTimer::GetClockTicks64() - start_us;
    u32 elapsed_us = elapsed_us_64 > 0xFFFFFFFFULL ? 0xFFFFFFFFU : (u32) elapsed_us_64;
    benchmark_dsp_core(0, elapsed_us);
#else
    computemydsp(dsp1, CHUNK_SIZE / 2, NULL, buffers_1);
#endif
}

void compute_dsp_2(void){
#if APP_ENABLE_BENCH_LOGS
    u64 start_us = CTimer::GetClockTicks64();
    computemydsp(dsp2, CHUNK_SIZE / 2, NULL, buffers_2);
    u64 elapsed_us_64 = CTimer::GetClockTicks64() - start_us;
    u32 elapsed_us = elapsed_us_64 > 0xFFFFFFFFULL ? 0xFFFFFFFFU : (u32) elapsed_us_64;
    benchmark_dsp_core(1, elapsed_us);
#else
    computemydsp(dsp2, CHUNK_SIZE / 2, NULL, buffers_2);
#endif
}

void compute_dsp_3(void){
#if APP_ENABLE_BENCH_LOGS
    u64 start_us = CTimer::GetClockTicks64();
    computemydsp(dsp3, CHUNK_SIZE / 2, NULL, buffers_3);
    u64 elapsed_us_64 = CTimer::GetClockTicks64() - start_us;
    u32 elapsed_us = elapsed_us_64 > 0xFFFFFFFFULL ? 0xFFFFFFFFU : (u32) elapsed_us_64;
    benchmark_dsp_core(2, elapsed_us);
#else
    computemydsp(dsp3, CHUNK_SIZE / 2, NULL, buffers_3);
#endif
}

void dsp_init(CTimer *timer){
    CLogger::Get ()->Write (FromDSP, LogDebug, "dsp_init");

    dsp1 = newmydsp();
    dsp2 = newmydsp();
    dsp3 = newmydsp();

    initmydsp(dsp1, SAMPLE_RATE);
    initmydsp(dsp2, SAMPLE_RATE);
    initmydsp(dsp3, SAMPLE_RATE);

    cur_core_init = 0;
    buildUserInterfacemydsp(dsp1, &ui_glue);
    timer->MsDelay(100);
    cur_core_init = 1;
    buildUserInterfacemydsp(dsp2, &ui_glue);
    timer->MsDelay(100);
    cur_core_init = 2;
    buildUserInterfacemydsp(dsp3, &ui_glue);
    timer->MsDelay(100);

    buffers_1 = new float*[2];
    buffers_1[0] = new float[CHUNK_SIZE / 2];
    buffers_1[1] = new float[CHUNK_SIZE / 2];

    buffers_2 = new float*[2];
    buffers_2[0] = new float[CHUNK_SIZE / 2];
    buffers_2[1] = new float[CHUNK_SIZE / 2];

    buffers_3 = new float*[2];
    buffers_3[0] = new float[CHUNK_SIZE / 2];
    buffers_3[1] = new float[CHUNK_SIZE / 2];
}
