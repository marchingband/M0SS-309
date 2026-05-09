import("stdfaust.lib");
import("delay.lib");
import("cchorus.lib");
import("reverb.lib");

chorus_mode = hslider("chorus-mode[alt-sel:26]", 0, 0, 3, 1); // 1 and 4 are broken

delay_time = hslider("delay-time[alt:3]",2^10,2^10,2^16,0.001) : si.smoo;
delay_fb = hslider("delay-fb[alt:15]",0,0,1,0.001) : si.smoo;
delay_mix = hslider("delay-mix[alt:27]", 0, 0, 0.5, 0.001) : si.smoo;

reverb_time = hslider("reverb-time[alt:6]", 0.2, 0.1, 1, 0.001) : si.smoo;
reverb_feedback = hslider("reverb-feedback[alt:18]", 0, 0, 1, 0.001) : si.smoo;
reverb_mix = hslider("reverb-mix[alt:0]", 0, 0, 1, 0.001) : si.smoo;

master_volume = hslider("volume[alt:1]", 1, 0, 2, 0.001) : si.smoo;

reverb_mixed(l,r) = reverb.reverb(reverb_feedback,reverb_time,l,r):_*reverb_mix+l*(1-reverb_mix),_*reverb_mix+r*(1-reverb_mix);
delay_mixed(l,r) = delay.delay(delay_time, delay_fb,l,r):_*delay_mix+l*(1-delay_mix),_*delay_mix+r*(1-delay_mix);

// process = cchorus.cchorus(chorus_mode);
// process = delay.delay(delay_time, delay_fb);
// process = reverb.reverb(reverb_feedback);
process = cchorus.cchorus(chorus_mode) : delay_mixed : reverb_mixed : *(master_volume), *(master_volume);