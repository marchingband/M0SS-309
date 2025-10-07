#include <circle/multicore.h>
#include <circle/memory.h>
#include <circle/types.h>
#include <circle/logger.h>
#include <circle/util.h>

// #include "dsp_glue.h"
#include "dsp.h"
#include "voiceManager.h"
// #include "M0SS-309.h"
// #include "audio.h"
// #include "strings.h"

static const char FromVoiceManager[] = "voice manager";

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
    while(1){
        switch(nCore){
            case 1:
                while(core_1_run == false){}
                // CLogger::Get ()->Write (FromVoiceManager, LogDebug, "Core 1 start");
                compute_dsp_1();
                core_1_run = false;
                continue;
            case 2:
                while(core_2_run == false){}
                compute_dsp_2();
                core_2_run = false;
                continue;
            case 3:
                while(core_3_run == false){}
                compute_dsp_3();
                core_3_run = false;
                continue;
            default: break;
        }
    }
}