comment out PCM stuff in lib/sound/i2ssoundbasedevice.cpp  
change gain in lib/sound/wm8960soundcontroller.cpp  
`../../makeall`  
cp `/boot/*` to SD, rename `config32.txt` to `config.txt`
  
`faust -lang c -o M0SS-309.h M0SS-309.dsp`  
add `#include "dsp.h"`
  
`make`  
cp `kernel.elf` to SD

