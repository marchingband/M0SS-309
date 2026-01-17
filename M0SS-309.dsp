import("stdfaust.lib");
import("variable_osc.lib");

lfo_dest_pitch = 0;
lfo_dest_cutoff = 1;
lfo_dest_pw = 2;

clamp(low, high, x) = min(max( low, x), high);

envG(x) = hgroup("[0]env_amp",x);
filEnvG(x) = hgroup("[1]env",x); 
filG(x) = hgroup("[2]filter",x); 
lfoG(x) = hgroup("[2]lfo",x); 
osc1G(x) = hgroup("osc1",x); 
osc2G(x) = hgroup("osc2",x); 
gateG(x) = hgroup("notes",x);
mixerG(x) = hgroup("mixer",x);
matrixGlfo(x) = hgroup("[5]lfo matrix", x);
matrixGenv(x) = hgroup("[6]env matrix", x);
matrixGnse(x) = hgroup("[7]nse matrix", x);
matrixGos2(x) = hgroup("[8]os2 matrix", x);

// env_amp
a = envG(hslider("[0][mod:20][midi:1]a", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));
d = envG(hslider("[1][mod:2][midi:2]d", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));
s = envG(hslider("[2][mod:26][midi:3]s", 1, 0, 1, 0.0001));
r = envG(hslider("[3][mod:22][midi:4]r", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));

// env
a_f     = filEnvG(hslider("[0][mod:5][midi:5]a", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));
d_f     = filEnvG(hslider("[1][mod:11][midi:6]d", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));
s_f     = filEnvG(hslider("[2][mod:14][midi:7]s", 1, 0, 1, 0.0001));
r_f     = filEnvG(hslider("[3][mod:8][midi:8]r", 0.001, 0.001, 1,  0.0001) : ba.lin2LogGain : it.remap(0.0, 1.0, 0.001, 20.0));

// filter
ctf     = filG(hslider("ctf[mod:18][midi:9]", 0.8, 0, 1, 0.001)) : si.smoo;
res     = filG(hslider("res[mod:6][midi:10]", 10,0.707, 25, 0.001)) : si.smoo;

// OSC
os1_waveform = osc1G(hslider("waveform[sel:9][midi:11]", 0, 0, 1, 0));
os1_pw  = osc1G(hslider("pw[alt:9][midi:12]", 0.5, 0.1, 0.5, 0.001)) : si.smoo;
sync = osc1G(hslider("sync[sel:3][midi:13]", 0, 0, 1, 1));

os2_waveform = osc2G(hslider("waveform[sel:27][midi:14]", 0, 0, 2, 0));
os2_pw = osc2G(hslider("pw[alt:27][midi:15]",    0.5,  0.1, 0.5,   0.001)) : si.smoo;

tune = osc2G(hslider("tune[mod:15][midi:16]", 0, 0, 10000, 100));
dtn = osc2G(hslider("fine[alt:15][midi:17]", 0, 0, 100, 1)) : si.smoo;
range = osc2G(hslider("hi-lo[sel:21][midi:18]", 0, 0, 1, 1));
key_track = osc2G(hslider("kt[alt-sel:21][midi:19]", 1, 0, 1, 1));

//mixer
os1_vol  = mixerG(hslider("osc1[mod:19][midi:20]",      1,  0, 1,   0.001)) : si.smoo;
os2_vol  = mixerG(hslider("osc2[mod:1][midi:21]",       0,  0, 1,   0.001)) : si.smoo;
noise_vol  = mixerG(hslider("noise[alt:1][midi:22]",    0,  0, 1,   0.001)) : si.smoo;

//lfo
lfo_waveform = lfoG(hslider("waveform[sel:23][midi:23]", 2, 0, 2, 1));
lfo_rate = lfoG(hslider("rate[mod:17][midi:24]", 0.5, 0.1, 10, 0.001)) : si.smoo;
lfo_initial = lfoG(hslider("init[alt:17][midi:25]", 0, 0, 1, 0.001));

lfo_saw = os.lf_saw(lfo_rate);
lfo_sqr = os.lf_squarewave(lfo_rate);
lfo_tri = os.lf_triangle(lfo_rate);
lfo = lfo_saw, lfo_sqr, lfo_tri : ba.selectn(3, lfo_waveform) <: attach(vbargraph("lfo[lfo][hidden:1]", -1 , 1));

//matrix
lfo_os1 = matrixGlfo(hslider("lfo.os1[style:knob][midi:26]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
lfo_pw1 = matrixGlfo(hslider("lfo.pw1[style:knob][midi:27]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
lfo_vcf = matrixGlfo(hslider("lfo.vcf[style:knob][midi:28]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
lfo_os2 = matrixGlfo(hslider("lfo.os2[style:knob][midi:29]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
lfo_pw2 = matrixGlfo(hslider("lfo.pw2[style:knob][midi:30]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
env_os1 = matrixGenv(hslider("env.os1[style:knob][midi:31]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
env_pw1 = matrixGenv(hslider("env.pw1[style:knob][midi:32]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
env_vcf = matrixGenv(hslider("env.vcf[style:knob][midi:33]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
env_os2 = matrixGenv(hslider("env.os2[style:knob][midi:34]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
env_pw2 = matrixGenv(hslider("env.pw2[style:knob][midi:35]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
nse_os1 = matrixGnse(hslider("nse.os1[style:knob][midi:36]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
nse_pw1 = matrixGnse(hslider("nse.pw1[style:knob][midi:37]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
nse_vcf = matrixGnse(hslider("nse.vcf[style:knob][midi:38]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
nse_os2 = matrixGnse(hslider("nse.os2[style:knob][midi:39]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
nse_pw2 = matrixGnse(hslider("nse.pw2[style:knob][midi:40]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
os2_os1 = matrixGos2(hslider("os2.os1[style:knob][midi:41]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
os2_pw1 = matrixGos2(hslider("os2.pw1[style:knob][midi:42]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
os2_vcf = matrixGos2(hslider("os2.vcf[style:knob][midi:43]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;

// mod path ranges in cents
LFO_PCH_RC = 2400;
LFO_CTF_RC = 9600;
ENV_PCH_RC = 1200;
ENV_CTF_RC = 9600;
NSE_PCH_RC = 1200;
NSE_CTF_RC = 2400;
OSC_PCH_RC = 4800;
OSC_CTF_RC = 9600;
PW_RC = 1;


voice(x) = out
with {
    noise   = no.noise;
    gate    = gateG(button("gate_%x"));

    env_amp = en.adsr_bias(a,d,s,r,0.5,0.5,0.5,1,gate) <: attach(vbargraph("[env_amp_%x][hidden:1]", 0 , 1));
    env     = en.adsr_bias(a_f,d_f,s_f,r_f,0.5,0.5,0.5,1,gate) <: attach(vbargraph("[env_%x][hidden:1]", 0 , 1));

    os1_mod = (lfo * lfo_os1 * LFO_PCH_RC) +    (env * env_os1 * ENV_PCH_RC) +  (noise * nse_os1 * NSE_PCH_RC) +    (os2 * os2_os1 * OSC_PCH_RC);
    pw1_mod = (lfo * lfo_pw1 * PW_RC) +         (env * env_pw1 * PW_RC) +       (noise * nse_pw1 * PW_RC) +         (os2 * os2_pw1 * PW_RC);
    vcf_mod = (lfo * lfo_vcf * LFO_CTF_RC) +    (env * env_vcf * ENV_CTF_RC) +  (noise * nse_vcf * NSE_CTF_RC) +    (os2 * os2_vcf * OSC_CTF_RC);
    os2_mod = (lfo * lfo_os2 * LFO_PCH_RC) +    (env * env_os2 * ENV_PCH_RC) +  (noise * nse_os2 * NSE_PCH_RC);
    pw2_mod = (lfo * lfo_pw2 * PW_RC) +         (env * env_pw2 * PW_RC) +       (noise * nse_pw2 * PW_RC);

    freq = hslider("freq_%x", 40, 0, 127, 1) : ba.midikey2hz;
    os2_pitch = freq * ba.cent2ratio(os2_mod);
    
    os1_pitch_ratio = ba.cent2ratio(tune + dtn);
    os1_pitch_tracked =  freq * os1_pitch_ratio;
    os1_pitch = os1_pitch_ratio * 20, os1_pitch_tracked : ba.selectn(2, key_track) : *(ba.cent2ratio(os1_mod));
    // os1_pitch = os1_pitch_ratio * 20, os1_pitch_tracked : ba.selectn(2, key_track) : *(ba.cent2ratio(os1_mod * 12800)); // TODO: 8 octaves

    os1_pw_post = os1_pw + pw1_mod;
    os2_pw_post = os2_pw + pw2_mod;

    // vcf_cutoff = ctf + vcf_mod : ba.lin2LogGain : clamp(0,1);
    // vcf_cutoff = ctf + vcf_mod : clamp(0,1);
    vcf_cutoff = ctf * 2^(vcf_mod / 1200) : clamp(0,1);
    // vcf = ve.moogLadder(vcf_cutoff, res);
    vcf = ve.oberheimLPF(vcf_cutoff, res);

    pw_vosc_1 = os1_pw_post, 1 : ba.selectn(2, os1_waveform);
    pw_vosc_2 = os2_pw_post, 1, 0.5 : ba.selectn(3, os2_waveform);
    ws_vosc_1 = 1, 0 : ba.selectn(2, os1_waveform);
    ws_vosc_2 = 1, 0, 0 : ba.selectn(3, os2_waveform);

    os1 = variable_osc.hard_sync_variable_slave(os2_pitch, os1_pitch, pw_vosc_1, ws_vosc_1, sync);
    os2 = variable_osc.hard_sync_variable_master(os2_pitch, pw_vosc_2, ws_vosc_2);

    audio = os1 * os1_vol + os2 * os2_vol + noise * noise_vol;
    out = audio : vcf : _ * env_amp;
};

process = par(x, 3, voice(x)) :> *(0.2) <:_,_;