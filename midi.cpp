
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
#include "mono_mode.h"

#define MONO_STACK_SIZE (NUM_DSP * NUM_VOICES)
#define VOICE_NOTE_NONE 0xFF
#define VOICE_IDLE_ENV_THRESHOLD 0.0001f

static const char FromMidi[] = "Midi";

struct PendingSteal {
    boolean active;
    boolean cancelled;
    uint8_t note;
};

static uint8_t s_MonoStack[MONO_STACK_SIZE];
static uint8_t s_VoiceNote[NUM_DSP][NUM_VOICES];
static u32 s_VoiceAge[NUM_DSP][NUM_VOICES];
static PendingSteal s_PendingSteal[NUM_DSP][NUM_VOICES];
static u32 s_NextVoiceAge = 1;
static int s_MonoHead = 0;  // oldest note
static int s_MonoTail = 0;  // next free slot
static int s_MonoCount = 0;
u8 midi_channel = 0;
u8 midi_pitch_bend_up = 2;
u8 midi_pitch_bend_down = 2;
u8 cc_map[NUM_CC_MAP] = {0};
int mode_learn_current_cc = 0;
int learn_mode_state = LEARN_MODE_READY;

static void set_param_vals(float *(&vals)[NUM_DSP], float val)
{
    for (int i = 0; i < NUM_DSP; i++) {
        if (vals[i] != 0) {
            *(vals[i]) = val;
        }
    }
}

static int clamp_pitch_bend_range(int semitones)
{
    if (semitones < 0) {
        return 0;
    }
    if (semitones > 12) {
        return 12;
    }
    return semitones;
}

static void set_global_cc_value(int cc_num, float val)
{
    if (cc_num <= 0 || cc_num >= NUM_CC) {
        return;
    }

    set_param_vals(CCs[cc_num].p, val);
}

void midi_set_pitch_bend_up(int semitones)
{
    midi_pitch_bend_up = (u8) clamp_pitch_bend_range(semitones);
    set_global_cc_value(CC_NUM_PB_UP, (float) midi_pitch_bend_up);
}

void midi_set_pitch_bend_down(int semitones)
{
    midi_pitch_bend_down = (u8) clamp_pitch_bend_range(semitones);
    set_global_cc_value(CC_NUM_PB_DOWN, (float) midi_pitch_bend_down);
}

void midi_apply_global_config(void)
{
    midi_set_pitch_bend_up(midi_pitch_bend_up);
    midi_set_pitch_bend_down(midi_pitch_bend_down);
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

    float val = 0.0f;
    if (cc->min < 0.0f && cc->max > 0.0f) {
        if (midi_val == 64) {
            val = 0.0f;
        } else if (midi_val < 64) {
            float negative_val = midi_val == 0 ? 1.0f : (float) midi_val;
            val = cc->min * ((64.0f - negative_val) / 63.0f);
        } else {
            val = cc->max * (((float) midi_val - 64.0f) / 63.0f);
        }

        if (cc->step > 0.0f) {
            float whole_steps = roundf((val - cc->min) / cc->step);
            val = cc->min + cc->step * whole_steps;
        }
    } else {
        float position = (float) midi_val / 127.0f;
        if (cc->step > 0.0f) {
            float steps = ((cc->max - cc->min) / cc->step) * position;
            float whole_steps = roundf(steps);
            val = (cc->step * whole_steps) + cc->min;
        } else {
            val = cc->min + (cc->max - cc->min) * position;
        }
    }

    if (val < cc->min) {
        val = cc->min;
    } else if (val > cc->max) {
        val = cc->max;
    }

    if (internal_cc == CC_NUM_PB_UP) {
        midi_set_pitch_bend_up((int) roundf(val));
        return;
    }
    if (internal_cc == CC_NUM_PB_DOWN) {
        midi_set_pitch_bend_down((int) roundf(val));
        return;
    }
    set_param_vals(cc->p, val);
}

static void clear_mono_stack(void)
{
    s_MonoHead = 0;
    s_MonoTail = 0;
    s_MonoCount = 0;
}

static void clear_voice_state(void)
{
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            s_VoiceNote[dsp][voice] = VOICE_NOTE_NONE;
            s_VoiceAge[dsp][voice] = 0;
            s_PendingSteal[dsp][voice].active = FALSE;
            s_PendingSteal[dsp][voice].cancelled = FALSE;
            s_PendingSteal[dsp][voice].note = VOICE_NOTE_NONE;
        }
    }
}

static void release_all_voices(void)
{
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            if (Signals[dsp].gate[voice] != 0) {
                *(Signals[dsp].gate[voice]) = 0;
            }
            if (Signals[dsp].kill[voice] != 0) {
                *(Signals[dsp].kill[voice]) = 0;
            }
        }
    }
    clear_voice_state();
}

static void preload_mono_pitches(uint8_t note)
{
    unsigned index = 0;
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            if (Signals[dsp].pitch[voice] != 0) {
                *(Signals[dsp].pitch[voice]) = (float) note + mono_detune_for_voice(index);
            }
            index++;
        }
    }
}

static bool peek_newest_note(uint8_t *out)
{
    if (s_MonoCount == 0 || out == 0) {
        return false;
    }

    int newest = (s_MonoTail - 1 + MONO_STACK_SIZE) % MONO_STACK_SIZE;
    *out = s_MonoStack[newest];
    return true;
}

static bool voice_is_active(u8 dsp, u8 voice)
{
    return Signals[dsp].gate[voice] != 0 && *(Signals[dsp].gate[voice]) != 0;
}

static bool voice_has_pending_steal(u8 dsp, u8 voice)
{
    return s_PendingSteal[dsp][voice].active;
}

static bool voice_is_silent(u8 dsp, u8 voice)
{
    if (Signals[dsp].env_amp[voice] == 0) {
        return true;
    }

    return *(Signals[dsp].env_amp[voice]) <= VOICE_IDLE_ENV_THRESHOLD;
}

static bool voice_is_available(u8 dsp, u8 voice)
{
    if (voice_has_pending_steal(dsp, voice)) {
        return false;
    }
    if (Signals[dsp].gate[voice] == 0) {
        return false;
    }
    if (*(Signals[dsp].gate[voice]) != 0) {
        return false;
    }

    return voice_is_silent(dsp, voice);
}

static bool find_active_voice_for_note(uint8_t note, u8 *dsp_out, u8 *voice_out)
{
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            if (s_VoiceNote[dsp][voice] == note && voice_is_active(dsp, voice)) {
                if (dsp_out != 0) {
                    *dsp_out = dsp;
                }
                if (voice_out != 0) {
                    *voice_out = voice;
                }
                return true;
            }
        }
    }

    return false;
}

static void assign_poly_voice(u8 dsp, u8 voice, u8 note)
{
    s_VoiceNote[dsp][voice] = note;
    s_VoiceAge[dsp][voice] = s_NextVoiceAge++;
    if (Signals[dsp].pitch[voice] != 0) {
        *(Signals[dsp].pitch[voice]) = note;
    }
    if (Signals[dsp].kill[voice] != 0) {
        *(Signals[dsp].kill[voice]) = 0;
    }
    if (Signals[dsp].gate[voice] != 0) {
        *(Signals[dsp].gate[voice]) = 1;
    }
}

static void release_poly_voice(u8 dsp, u8 voice)
{
    s_VoiceNote[dsp][voice] = VOICE_NOTE_NONE;
    if (Signals[dsp].gate[voice] != 0) {
        *(Signals[dsp].gate[voice]) = 0;
    }
}

static void assign_mono_note(uint8_t note)
{
    preload_mono_pitches(note);

    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            if (Signals[dsp].gate[voice] != 0) {
                *(Signals[dsp].gate[voice]) = 1;
            }
        }
    }
}

void midi_set_mono_mode(bool enabled)
{
    mono_mode = enabled;
    clear_mono_stack();
    release_all_voices();
    if (enabled) {
        preload_mono_pitches(60);
    }
}

void midi_select_learn_target(int button, bool alt)
{
    int cc_num = -1;

    if (alt && button == BUTTON_NUM_POLY_MOD) {
        // In learn mode ALT+23 should target the polymod param, not the P.MOD toggle.
        cc_num = CC_NUM_POLYMOD;
    } else {
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
    }

    if (cc_num > 0 && cc_num < NUM_CC) {
        mode_learn_current_cc = cc_num;
        learn_mode_state = LEARN_MODE_SELECTED;
    }
}

static void mono_remove_note(uint8_t note)
{
    if (s_MonoCount == 0) {
        return;
    }

    int remove_offset = -1;
    for (int i = s_MonoCount - 1; i >= 0; i--) {
        int idx = (s_MonoHead + i) % MONO_STACK_SIZE;
        if (s_MonoStack[idx] == note) {
            remove_offset = i;
            break;
        }
    }

    if (remove_offset < 0) {
        return;
    }

    for (int i = remove_offset; i < s_MonoCount - 1; i++) {
        int src = (s_MonoHead + i + 1) % MONO_STACK_SIZE;
        int dst = (s_MonoHead + i) % MONO_STACK_SIZE;
        s_MonoStack[dst] = s_MonoStack[src];
    }

    s_MonoCount--;
    s_MonoTail = (s_MonoHead + s_MonoCount) % MONO_STACK_SIZE;
}

static void mono_push_note(uint8_t note) {
    s_MonoStack[s_MonoTail] = note;
    s_MonoTail = (s_MonoTail + 1) % MONO_STACK_SIZE;

    if (s_MonoCount < MONO_STACK_SIZE) {
        s_MonoCount++;
    } else {
        // buffer full, move head forward (overwrite oldest note)
        s_MonoHead = (s_MonoHead + 1) % MONO_STACK_SIZE;
    }
}

static bool find_oldest_voice(bool prefer_released, u8 *dsp_out, u8 *voice_out)
{
    bool found = false;
    u32 best_age = 0;

    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            if (voice_is_available(dsp, voice)) {
                continue;
            }
            if (voice_has_pending_steal(dsp, voice)) {
                continue;
            }

            bool released = !voice_is_active(dsp, voice);
            if (released != prefer_released) {
                continue;
            }
            if (s_VoiceAge[dsp][voice] == 0) {
                continue;
            }

            if (!found || s_VoiceAge[dsp][voice] < best_age) {
                found = true;
                best_age = s_VoiceAge[dsp][voice];
                if (dsp_out != 0) {
                    *dsp_out = dsp;
                }
                if (voice_out != 0) {
                    *voice_out = voice;
                }
            }
        }
    }

    return found;
}

static void start_voice_steal(u8 dsp, u8 voice, u8 note)
{
    CLogger::Get ()->Write (FromMidi, LogNotice, "stole voice dsp=%u voice=%u note=%u", dsp, voice, s_VoiceNote[dsp][voice]);

    s_VoiceNote[dsp][voice] = VOICE_NOTE_NONE;
    s_VoiceAge[dsp][voice] = s_NextVoiceAge++;
    s_PendingSteal[dsp][voice].active = TRUE;
    s_PendingSteal[dsp][voice].cancelled = FALSE;
    s_PendingSteal[dsp][voice].note = note;

    if (Signals[dsp].kill[voice] != 0) {
        *(Signals[dsp].kill[voice]) = 1;
        return;
    }

    assign_poly_voice(dsp, voice, note);
    s_PendingSteal[dsp][voice].active = FALSE;
}

void midi_service_steals(void)
{
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        for (u8 voice = 0; voice < NUM_VOICES; voice++) {
            PendingSteal *pending = &s_PendingSteal[dsp][voice];
            if (!pending->active || !voice_is_silent(dsp, voice)) {
                continue;
            }

            if (pending->cancelled) {
                if (Signals[dsp].gate[voice] != 0) {
                    *(Signals[dsp].gate[voice]) = 0;
                }
                if (Signals[dsp].kill[voice] != 0) {
                    *(Signals[dsp].kill[voice]) = 0;
                }
                pending->active = FALSE;
                pending->cancelled = FALSE;
                pending->note = VOICE_NOTE_NONE;
                continue;
            }

            uint8_t note = pending->note;
            pending->active = FALSE;
            pending->cancelled = FALSE;
            pending->note = VOICE_NOTE_NONE;
            assign_poly_voice(dsp, voice, note);
        }
    }
}

void handle_note_on(u8 note){
    if (mono_mode) {
        mono_push_note(note);
        assign_mono_note(note);
        return;
    }

    u8 dsp = 0;
    u8 voice = 0;
    if (find_active_voice_for_note(note, &dsp, &voice)) {
        s_VoiceAge[dsp][voice] = s_NextVoiceAge++;
        if (Signals[dsp].gate[voice] != 0) {
            *(Signals[dsp].gate[voice]) = 1;
        }
        return;
    }

    // allocate to any free voice
    for(dsp=0; dsp<NUM_DSP; dsp++){
        for(voice=0; voice<NUM_VOICES; voice++){
            if(voice_is_available(dsp, voice)){
                assign_poly_voice(dsp, voice, note);
                return;
            }
        }
    }
    
    // steal the oldest released voice first, otherwise the oldest active voice
    if (!find_oldest_voice(true, &dsp, &voice) &&
        !find_oldest_voice(false, &dsp, &voice)) {
        CLogger::Get ()->Write (FromMidi, LogNotice, "failed to find any voice to steal");
        return;
    }

    start_voice_steal(dsp, voice, note);
}

void handle_note_off(u8 note){
    if (mono_mode) {
        mono_remove_note(note);
        uint8_t latest = 0;
        if (peek_newest_note(&latest)) {
            assign_mono_note(latest);
        } else {
            release_all_voices();
        }
        return;
    }

    u8 dsp = 0;
    u8 voice = 0;
    if (find_active_voice_for_note(note, &dsp, &voice)) {
        release_poly_voice(dsp, voice);
        return;
    }

    for (dsp = 0; dsp < NUM_DSP; dsp++) {
        for (voice = 0; voice < NUM_VOICES; voice++) {
            if (s_PendingSteal[dsp][voice].active &&
                s_PendingSteal[dsp][voice].note == note) {
                s_PendingSteal[dsp][voice].cancelled = TRUE;
            }
        }
    }
}

static void handle_channel_aftertouch(u8 value)
{
    if (ui_mode == UI_MODE_LEARN) {
        if (mode_learn_current_cc > 0) {
            cc_map[CC_MAP_AFTERTOUCH_IDX] = (u8) mode_learn_current_cc;
            learn_mode_state = LEARN_MODE_LEARNED;
        }
        return;
    }

    apply_mapped_cc(cc_map[CC_MAP_AFTERTOUCH_IDX], value);
}

static void handle_pitch_bend(u8 lsb, u8 msb)
{
    u16 value = (u16) ((msb & 0b01111111) << 7) | (u16) (lsb & 0b01111111);
    for (u8 dsp = 0; dsp < NUM_DSP; dsp++) {
        if (Signals[dsp].pitch_bend != 0) {
            *(Signals[dsp].pitch_bend) = (float) value;
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
        u8 channel = (msg[0] & 0x0F) + 1;
        u8 code = (msg[0] >> 4) & 0b00001111;
        if (midi_channel != 0 && channel != midi_channel) {
            return;
        }
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
				if(ui_mode == UI_MODE_LEARN){
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
				handle_note_off(note);
				break;
			}
            case MIDI_CC: {
                uint8_t cc_num_in = msg[1] & 0b01111111;
                uint8_t cc_val = msg[2] & 0b01111111;
                if (cc_num_in == 0) {
                    break;
                }
                if(ui_mode == UI_MODE_LEARN){
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
            case MIDI_PITCH_BEND: {
                if (len > 2) {
                    handle_pitch_bend(msg[1], msg[2]);
                }
                break;
            }
            default: break;
        }
    }
}
