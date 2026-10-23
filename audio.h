#ifndef AUDIO_H
#define AUDIO_H

// #include <circle/sound/pwmsoundbasedevice.h>
#include <circle/sound/i2ssoundbasedevice.h>
#include <sensor/ky040.h>

#define MIDI_NOTE_OFF 8
#define MIDI_NOTE_ON 9
#define MIDI_PITCH_BEND 0xE
#define MIDI_PROGRAM_CHANGE 12
#define MIDI_CC 11
#define MIDI_CC_VOLUME 7
#define MIDI_CC_PAN 10
#define MIDI_CC_EXP 11
#define MIDI_CC_SUSTAIN 64
#define MIDI_CC_RELEASE 72
#define MIDI_CC_MUTE 120
#define MIDI_CC_RESET 121

// #define SAMPLE_RATE	48000
#define SAMPLE_RATE	44100
#define CHUNK_SIZE	512
// #define CHUNK_SIZE	1024
// #define CHUNK_SIZE	1024 * 2
// #define CHUNK_SIZE 1024 * 4

class CPDI2S : public CI2SSoundBaseDevice
{
public:
    CPDI2S(CInterruptSystem *pInterrupt, CKY040 *m_RotaryEncoder);
    ~CPDI2S(void);
    unsigned GetChunk (u32 *pBuffer, unsigned nChunkSize);
};

#endif
