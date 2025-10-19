
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

#define STACK_SIZE (NUM_DSP * NUM_VOICES)

static const char FromMidi[] = "Midi";

static uint8_t stack[STACK_SIZE];
static int head = 0;  // oldest note
static int tail = 0;  // next free slot
static int stack_cnt = 0;

static void remove_note_from_stack(uint8_t note) {
    if (stack_cnt == 0)
        return;

    int idx = head;
    int removed = 0;

    for (int i = 0; i < stack_cnt; i++) {
        if (stack[idx] == note) {
            // skip this note, effectively removing it
            removed++;
        } else if (removed > 0) {
            // shift note back by 'removed' slots
            int target = (idx - removed + STACK_SIZE) % STACK_SIZE;
            stack[target] = stack[idx];
        }
        idx = (idx + 1) % STACK_SIZE;
    }

    stack_cnt -= removed;
    tail = (head + stack_cnt) % STACK_SIZE;
}

// push a note, ensuring no duplicates
void push_note(uint8_t note) {
    remove_note_from_stack(note);

    stack[tail] = note;
    tail = (tail + 1) % STACK_SIZE;

    if (stack_cnt < STACK_SIZE) {
        stack_cnt++;
    } else {
        // buffer full, move head forward (overwrite oldest note)
        head = (head + 1) % STACK_SIZE;
    }
}

bool steal_note(uint8_t *out) {
    if (stack_cnt == 0){
        return false;
    }
    *out = stack[head];
    head = (head + 1) % STACK_SIZE;
    stack_cnt--;
    return true;
}

void handle_note_on(u8 note){

    // check for retrigger
    for(u8 dsp=0; dsp<NUM_DSP; dsp++)
    {
        for(u8 voice=0; voice<NUM_VOICES; voice++){
            if(*(Signals[dsp].pitch[voice]) == note){
                // retriger it
                push_note(note);
                *(Signals[dsp].gate[voice]) = 1;
                return;
            }
        }
    }

    // allocate to any free voice
    for(u8 dsp=0; dsp<NUM_DSP; dsp++){
        for(u8 voice=0; voice<NUM_VOICES; voice++){
            if(*(Signals[dsp].gate[voice]) == 0){
                // also check that the amp envelope is done
                if(*(Signals[dsp].env_amp[voice]) == 0){
                    push_note(note);
                    *(Signals[dsp].gate[voice]) = 1;
                    *(Signals[dsp].pitch[voice]) = note;
                    // CLogger::Get ()->Write (FromMidi, LogNotice, "alocate to dsp %d, voice %d", dsp, voice);
                    return;
                }
            }
        }
    }
    
    // steal a voice
    u8 stolen = 0xFF;
    bool done = false;
    for(int i=0; i<stack_cnt; i++){
        steal_note(&stolen); // pop the oldest one in the ring buffer
        for(u8 dsp=0; dsp<NUM_DSP; dsp++){
            for(u8 voice=0; voice<NUM_VOICES; voice++){
                if(*(Signals[dsp].pitch[voice]) == stolen){
                    CLogger::Get ()->Write (FromMidi, LogNotice, "stole note %d", stolen);
                    *(Signals[dsp].env_amp[voice]) = 0; // reset the env
                    *(Signals[dsp].pitch[voice]) = note; // the new note
                    *(Signals[dsp].gate[voice]) = 1; // turn it on
                    push_note(note);
                    return;
                }
            }
        }
        CLogger::Get ()->Write (FromMidi, LogNotice, "failed to steal %d", stolen);
    }
    CLogger::Get ()->Write (FromMidi, LogNotice, "failed to steal any notes");
}

void handle_note_off(u8 note){
    for(u8 dsp=0; dsp<NUM_DSP; dsp++)
    {
        for(u8 voice=0; voice<NUM_VOICES; voice++){
            if(*(Signals[dsp].pitch[voice]) == note){
                // remove_note(note);
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
