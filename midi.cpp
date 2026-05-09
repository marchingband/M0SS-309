
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
#include "strings.h"
#include "dsp.h"
#include "buttons.h"
#include "midi.h"
#include "midiXparser.h"

#define STACK_SIZE (NUM_DSP * NUM_VOICES)

static const char FromMidi[] = "Midi";

static uint8_t stack[STACK_SIZE];
static int head = 0;  // oldest note
static int tail = 0;  // next free slot
static int stack_cnt = 0;
static u8 cc_map[NUM_CC_MAP] = {0};
static int mode_learn_current_cc = 0;
static int learn_mode_state = LEARN_MODE_READY;

static void set_param_vals(float *(&vals)[NUM_DSP], float val)
{
    for (int i = 0; i < NUM_DSP; i++) {
        if (vals[i] != 0) {
            *(vals[i]) = val;
        }
    }
}

static int get_cc_from_pointer(float *p)
{
    if (p == 0) {
        return -1;
    }

    for (int i = 0; i < NUM_CC; i++) {
        if (CCs[i].p[0] == p) {
            return i;
        }
    }

    return -1;
}

static int get_cc_for_button(int num, bool alt)
{
    float *p = 0;
    if (alt) {
        struct Alt alt_target = Alts[num];
        struct AltSel alt_sel_target = AltSels[num];
        struct Asb asb_target = Asbs[num];
        if (alt_target.p[0] != 0) {
            p = alt_target.p[0];
        } else if (alt_sel_target.p[0] != 0) {
            p = alt_sel_target.p[0];
        } else if (asb_target.p[0] != 0) {
            p = asb_target.p[0];
        }
    } else {
        struct Mod mod_target = Mods[num];
        struct Sel sel_target = Sels[num];
        if (mod_target.p[0] != 0) {
            p = mod_target.p[0];
        } else if (sel_target.p[0] != 0) {
            p = sel_target.p[0];
        }
    }

    return get_cc_from_pointer(p);
}

static void apply_mapped_cc(int internal_cc, u8 midi_val)
{
    if (internal_cc <= 0 || internal_cc >= NUM_CC) {
        return;
    }

    struct CC *cc = &CCs[internal_cc];
    if (cc->p[0] == 0) {
        return;
    }

    float steps = cc->mul * (float) midi_val;
    float whole_steps = roundf(steps);
    float val = (cc->step * whole_steps) + cc->min;
    set_param_vals(cc->p, val);
}

void midi_enter_learn_mode(void)
{
    mode_learn_current_cc = 0;
    learn_mode_state = LEARN_MODE_READY;
}

void midi_exit_learn_mode(void)
{
    mode_learn_current_cc = 0;
    learn_mode_state = LEARN_MODE_READY;
}

void midi_select_learn_target(int button, bool alt)
{
    int cc_num = -1;

    switch (button) {
    case BUTTON_NUM_MATRIX_ROW_0:
    case BUTTON_NUM_MATRIX_ROW_1:
    case BUTTON_NUM_MATRIX_ROW_2:
    case BUTTON_NUM_MATRIX_ROW_3:
    case BUTTON_NUM_MATRIX_COLUMN_0:
    case BUTTON_NUM_MATRIX_COLUMN_1:
    case BUTTON_NUM_MATRIX_COLUMN_2:
    case BUTTON_NUM_MATRIX_COLUMN_3:
    case BUTTON_NUM_MATRIX_COLUMN_4:
        cc_num = get_matrix_cc_for_button(button);
        break;
    default:
        cc_num = get_cc_for_button(button, alt);
        break;
    }

    if (cc_num > 0 && cc_num < NUM_CC) {
        mode_learn_current_cc = cc_num;
        learn_mode_state = LEARN_MODE_SELECTED;
    }
}

int get_mode_learn_current_cc(void)
{
    return mode_learn_current_cc;
}

int get_learn_mode_state(void)
{
    return learn_mode_state;
}

u8 *get_cc_map(void)
{
    return &cc_map[0];
}

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

static void handle_channel_aftertouch(u8 value)
{
    if (get_ui_mode() == UI_MODE_LEARN) {
        if (mode_learn_current_cc > 0) {
            cc_map[CC_MAP_AFTERTOUCH_IDX] = (u8) mode_learn_current_cc;
            learn_mode_state = LEARN_MODE_LEARNED;
        }
        return;
    }

    apply_mapped_cc(cc_map[CC_MAP_AFTERTOUCH_IDX], value);
}

void handle_midi_byte(u8 byte)
{
    if(parse(byte))
    {
        u8 *msg = getMidiMsg();
        u8 len = getMidiMsgLen();
        // CLogger::Get ()->Write (FromAudio, LogNotice, "got midi message len %d", len);
        u8 code = (msg[0] >> 4) & 0b00001111;
        if(code == MIDI_NOTE_ON && len > 2)
        {
            uint8_t velocity = msg[2] & 0b01111111;
            if(velocity == 0){
                code = MIDI_NOTE_OFF;
            }
        }
        switch(code){
            case MIDI_NOTE_ON: {
                uint8_t note = msg[1] & 0b01111111;
                uint8_t velocity = msg[2] & 0b01111111;
                CLogger::Get ()->Write (FromMidi, LogNotice, "note on %d", note);
                if(get_ui_mode() == UI_MODE_LEARN){
                    if(mode_learn_current_cc > 0){
                        cc_map[CC_MAP_VELOCITY_IDX] = (u8) mode_learn_current_cc;
                        learn_mode_state = LEARN_MODE_LEARNED;
                    }
                    break;
                }
                handle_note_on(note);
                apply_mapped_cc(cc_map[CC_MAP_VELOCITY_IDX], velocity);
                break;
            }
            case MIDI_NOTE_OFF: {
                uint8_t note = msg[1] & 0b01111111;
                CLogger::Get ()->Write (FromMidi, LogNotice, "note off %d", note);
                handle_note_off(note);
                break;
            }
            case MIDI_CC: {
                uint8_t cc_num_in = msg[1] & 0b01111111;
                uint8_t cc_val = msg[2] & 0b01111111;
                if (cc_num_in == 0) {
                    break;
                }
                if(get_ui_mode() == UI_MODE_LEARN){
                    if(mode_learn_current_cc > 0){
                        cc_map[cc_num_in - 1] = (u8) mode_learn_current_cc;
                        learn_mode_state = LEARN_MODE_LEARNED;
                    }
                    break;
                }
                apply_mapped_cc(cc_map[cc_num_in - 1], cc_val);
                break;
            }
            case MIDI_AFTERTOUCH: {
                if (len > 1) {
                    handle_channel_aftertouch(msg[1] & 0b01111111);
                }
                break;
            }
            default: break;
        }
    }
}
