
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

static const char FromMidi[] = "Midi";

// extern float *notes_1[NUM_VOICES];
// extern float *gates_1[NUM_VOICES];
// extern float *notes_2[NUM_VOICES];
// extern float *gates_2[NUM_VOICES];
// extern float *notes_3[NUM_VOICES];
// extern float *gates_3[NUM_VOICES];

void handle_note_on(u8 note){
    for(u8 dsp=0; dsp<NUM_DSP; dsp++)
    {
        for(u8 voice=0; voice<NUM_VOICES; voice++){
            if(*(Signals[dsp].gate[voice]) == 0){
                *(Signals[dsp].gate[voice]) = 1;
                *(Signals[dsp].pitch[voice]) = note;
                return;
            }
        }
    }
}

void handle_note_off(u8 note){
    for(u8 dsp=0; dsp<NUM_DSP; dsp++)
    {
        for(u8 voice=0; voice<NUM_VOICES; voice++){
            if(*(Signals[dsp].pitch[voice]) == note){
                *(Signals[dsp].gate[voice]) = 0;
                return;
            }
        }
    }
}

void handle_midi_byte(u8 byte)
{
    if(parse(byte))
    {
        u8 *msg = getMidiMsg();
        u8 len = getMidiMsgLen();
        // CLogger::Get ()->Write (FromAudio, LogNotice, "got midi message len %d", len);
        u8 code = (msg[0] >> 4) & 0b00001111;
        switch(code){
            case MIDI_NOTE_ON: {
                uint8_t note = msg[1] & 0b01111111;
                CLogger::Get ()->Write (FromMidi, LogNotice, "note on %d", note);
                handle_note_on(note);
                break;
            }
            case MIDI_NOTE_OFF: {
                uint8_t note = msg[1] & 0b01111111;
                CLogger::Get ()->Write (FromMidi, LogNotice, "note off %d", note);
                handle_note_off(note);
                break;
            }
            default: break;
        }
    }
}
