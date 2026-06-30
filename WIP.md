TODO:
- improve colors
- more reverb controls? difuse?
- - adding size causes crashes?

LAST : 
- poly mod
- MIDI LEARN
- LOAD/SAVE
- reverb controls
- transpose (trps)
- reverb controls
- MONO mode
- hard sync fm
- hi-lo and KT
- midi channel
- MIDI out
- glide
- display chorus mode
- stuck notes

WIP :
- json file format
- optimize oscillator code, hopefully free up processor during FM

NEXT :
- mod matrix lights

PITCH BEND PLAN:
- Add DSP signal pointers for `pitch-bend`, `pbend-up`, and `pbend-dn` so MIDI and global config code can update the generated DSP controls directly.
- In `handle_midi_byte`, handle `MIDI_PITCH_BEND` by combining the 7-bit LSB/MSB into a 0..16383 value and writing it to every DSP `pitch-bend` pointer.
- Treat `pbend-up` and `pbend-dn` as global settings: default 2, clamp/display 0..12 in the UI, and save/load them alongside `midi_channel` in `m0ss-config.txt`.
- Reuse the MIDI channel UI pattern: ALT+mod matrix OS2 adjusts pitch-bend up, ALT+mod matrix PW2 adjusts pitch-bend down, encoder changes mark MIDI config dirty, and `led.cpp` shows the integer value with the signed-int/number display path.
