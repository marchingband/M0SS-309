#ifndef VOICE_MANAGER_H
#define VOICE_MANAGER_H

#include <circle/multicore.h>
#include <circle/memory.h>
#include <circle/types.h>

class CVoiceManager: public CMultiCoreSupport
{
    public:
        CVoiceManager(CMemorySystem *pMemorySystem);
        ~CVoiceManager(void);
        void Run (unsigned nCore);
};


#endif