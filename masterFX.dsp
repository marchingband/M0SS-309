import("stdfaust.lib");
import("delay.lib");
import("cchorus.lib");
import("reverb.lib");

delay_time = hslider("delay-time[alt-sel:5]",2^10,2^10,2^13,0.001);
delay_fb = hslider("delay-fb[alt-sel:20]",0,0,1,0.001);
chorus_mode = hslider("chorus-mode[alt-sel:11]", 0, 0, 2, 2); // 1 and 4 are broken
reverb_feedback = hslider("reverb-feedback[alt-sel:2]", 0, 0, 1, 0.001);

// process = cchorus.cchorus(chorus_mode);
// process = delay.delay(delay_time, delay_fb);
// process = reverb.reverb(reverb_feedback);
process = cchorus.cchorus(chorus_mode) : delay.delay(delay_time, delay_fb) : reverb.reverb(reverb_feedback);