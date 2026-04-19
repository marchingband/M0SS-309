#include <circle/multicore.h>
#include <circle/memory.h>
#include <circle/types.h>
#include <circle/logger.h>
#include <circle/util.h>
#include <circle/timer.h>

#include "dsp.h"
#include "voiceManager.h"
#include "logging.h"

static const char FromVoiceManager[] = "voice manager";

#if APP_ENABLE_BENCH_LOGS
#define CORE_USAGE_REPORT_INTERVAL_US 1000000ULL

struct CoreUsageStats
{
	boolean initialized;
	u64 window_start_us;
	u64 window_run_us;
	u64 window_idle_us;
	boolean seen_extrema;
	u32 min_run_pct_x100;
	u32 max_run_pct_x100;
};

static struct CoreUsageStats s_CoreUsage[NUM_DSP] = {0};

static u32 pct_x100(u64 part, u64 total)
{
	if (total == 0)
	{
		return 0;
	}

	u64 scaled = part * 10000ULL;
	return (u32) ((scaled + total / 2ULL) / total);
}

static void report_core_usage(unsigned core_index, u64 now_us)
{
	if (core_index >= NUM_DSP)
	{
		return;
	}

	struct CoreUsageStats *stats = &s_CoreUsage[core_index];
	if (!stats->initialized)
	{
		stats->initialized = TRUE;
		stats->window_start_us = now_us;
		return;
	}

	u64 window_elapsed_us = now_us - stats->window_start_us;
	if (window_elapsed_us < CORE_USAGE_REPORT_INTERVAL_US)
	{
		return;
	}

	u64 total_us = stats->window_run_us + stats->window_idle_us;
	u32 run_pct_x100 = pct_x100(stats->window_run_us, total_us);
	u32 idle_pct_x100 = 10000U - run_pct_x100;

	boolean new_min = FALSE;
	boolean new_max = FALSE;

	if (!stats->seen_extrema)
	{
		stats->seen_extrema = TRUE;
		stats->min_run_pct_x100 = run_pct_x100;
		stats->max_run_pct_x100 = run_pct_x100;
		new_min = TRUE;
		new_max = TRUE;
	}
	else
	{
		if (run_pct_x100 < stats->min_run_pct_x100)
		{
			stats->min_run_pct_x100 = run_pct_x100;
			new_min = TRUE;
		}
		if (run_pct_x100 > stats->max_run_pct_x100)
		{
			stats->max_run_pct_x100 = run_pct_x100;
			new_max = TRUE;
		}
	}

	CLogger::Get ()->Write (
		FromVoiceManager,
		LogNotice,
		"core %u run %u.%02u%% idle %u.%02u%% (window %u ms) min_run %u.%02u%% max_run %u.%02u%%%s%s",
		core_index + 1,
		run_pct_x100 / 100U,
		run_pct_x100 % 100U,
		idle_pct_x100 / 100U,
		idle_pct_x100 % 100U,
		(unsigned) (window_elapsed_us / 1000ULL),
		stats->min_run_pct_x100 / 100U,
		stats->min_run_pct_x100 % 100U,
		stats->max_run_pct_x100 / 100U,
		stats->max_run_pct_x100 % 100U,
		new_min ? " [new min]" : "",
		new_max ? " [new max]" : ""
	);

	stats->window_start_us = now_us;
	stats->window_run_us = 0;
	stats->window_idle_us = 0;
}
#endif

volatile boolean core_1_run;
volatile boolean core_2_run;
volatile boolean core_3_run;

CVoiceManager::CVoiceManager(CMemorySystem *pMemorySystem)
	: CMultiCoreSupport (pMemorySystem)
{
}

CVoiceManager::~CVoiceManager (void)
{
}

void CVoiceManager::Run (unsigned nCore)
{
#if APP_ENABLE_BENCH_LOGS
	unsigned core_index = nCore > 0 ? nCore - 1 : 0;
#endif

    while(1){
        switch(nCore){
            case 1:
            {
#if APP_ENABLE_BENCH_LOGS
                u64 idle_start_us = CTimer::GetClockTicks64();
                while(core_1_run == false){}
                u64 run_start_us = CTimer::GetClockTicks64();
                // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "Core 1 start");
                compute_dsp_1();
                u64 run_end_us = CTimer::GetClockTicks64();
                s_CoreUsage[core_index].window_idle_us += run_start_us - idle_start_us;
                s_CoreUsage[core_index].window_run_us += run_end_us - run_start_us;
                report_core_usage(core_index, run_end_us);
                core_1_run = false;
                continue;
#else
                while(core_1_run == false){}
                compute_dsp_1();
                core_1_run = false;
                continue;
#endif
            }
            case 2:
            {
#if APP_ENABLE_BENCH_LOGS
                u64 idle_start_us = CTimer::GetClockTicks64();
                while(core_2_run == false){}
                u64 run_start_us = CTimer::GetClockTicks64();
                compute_dsp_2();
                u64 run_end_us = CTimer::GetClockTicks64();
                s_CoreUsage[core_index].window_idle_us += run_start_us - idle_start_us;
                s_CoreUsage[core_index].window_run_us += run_end_us - run_start_us;
                report_core_usage(core_index, run_end_us);
                core_2_run = false;
                continue;
#else
                while(core_2_run == false){}
                compute_dsp_2();
                core_2_run = false;
                continue;
#endif
            }
            case 3:
            {
#if APP_ENABLE_BENCH_LOGS
                u64 idle_start_us = CTimer::GetClockTicks64();
                while(core_3_run == false){}
                u64 run_start_us = CTimer::GetClockTicks64();
                compute_dsp_3();
                u64 run_end_us = CTimer::GetClockTicks64();
                s_CoreUsage[core_index].window_idle_us += run_start_us - idle_start_us;
                s_CoreUsage[core_index].window_run_us += run_end_us - run_start_us;
                report_core_usage(core_index, run_end_us);
                core_3_run = false;
                continue;
#else
                while(core_3_run == false){}
                compute_dsp_3();
                core_3_run = false;
                continue;
#endif
            }
            default: break;
        }
    }
}
