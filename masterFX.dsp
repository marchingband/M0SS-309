import("stdfaust.lib");
import("delay.lib");
import("cchorus.lib");
import("reverb.lib");

delay_time = hslider("delay-time[alt:5]",2^10,2^10,2^13,0.001);
delay_fb = hslider("delay-fb[alt:20]",0,0,1,0.001);
chorus_mode = hslider("chorus-mode[alt-sel:11]", 0, 0, 3, 1); // 1 and 4 are broken
reverb_feedback = hslider("reverb-feedback[alt:2]", 0, 0, 1, 0.001);
delay_mix = hslider("delay-mix[alt:8]", 0, 0, 0.5, 0.001);
reverb_mix = hslider("reverb-mix[alt:22]", 0, 0, 1, 0.001);

reverb_mixed(l,r) = reverb.reverb(reverb_feedback,l,r):_*reverb_mix+l*(1-reverb_mix),_*reverb_mix+r*(1-reverb_mix);
delay_mixed(l,r) = delay.delay(delay_time, delay_fb,l,r):_*delay_mix+l*(1-delay_mix),_*delay_mix+r*(1-delay_mix);

// process = cchorus.cchorus(chorus_mode);
// process = delay.delay(delay_time, delay_fb);
// process = reverb.reverb(reverb_feedback);
process = cchorus.cchorus(chorus_mode) : delay_mixed : reverb_mixed;