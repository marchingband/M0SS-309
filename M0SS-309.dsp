import("stdfaust.lib");
import("variable_osc.lib");

clamp(low, high, x) = min(max( low, x), high);
log3(n) = n * n * n;
C4 = 261; // middle C hz

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
pMatrixGlfo(x) = hgroup("[9]p lfo matrix", x);
pMatrixGenv(x) = hgroup("[10]p env matrix", x);
pMatrixGnse(x) = hgroup("[11]p nse matrix", x);
pMatrixGos2(x) = hgroup("[12]p os2 matrix", x);

// env_amp
a = envG(hslider("[0][mod:6][midi:1]a", 0.001, 0.001, 1,  0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));
d = envG(hslider("[1][mod:18][midi:2]d",  0.001, 0.001, 1,  0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));
s = envG(hslider("[2][mod:0][midi:3]s", 1,     0,     1,  0.0001));
r = envG(hslider("[3][mod:26][midi:4]r", 0.001, 0.001, 1,  0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));

// env
a_f = filEnvG(hslider("[0][mod:3][midi:5]a",  0.001, 0.001, 1,       0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));
d_f = filEnvG(hslider("[1][mod:15][midi:6]d", 0.001, 0.001, 1,       0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));
s_f = filEnvG(hslider("[2][mod:27][midi:7]s", 1,     0,     1,       0.0001));
r_f = filEnvG(hslider("[3][mod:21][midi:8]r",  0.001, 0.001, 1,       0.0001) : log3 : it.remap(0.0, 1.0, 0.001, 20.0));

// filter
ctf     = filG(hslider("ctf[mod:11][midi:9]", 1,     0,     1,   0.001)) : si.smoo;
res     = filG(hslider("res[mod:5][midi:10]", 0.707, 0.707, 9.9, 0.001)) : si.smoo;

// OSC
os1_waveform = osc1G(hslider("waveform[sel:28][midi:11]", 0, 0, 1, 1));
os1_pw  = osc1G(hslider("pw[alt:28][midi:12]", 0.5, 0.1, 0.5, 0.001)) : si.smoo;
sync = osc1G(hslider("sync[sel:2][midi:13]", 0, 0, 1, 1));

os2_waveform = osc2G(hslider("waveform[sel:8][midi:14]", 0, 0, 2, 1));
os2_pw = osc2G(hslider("pw[alt:8][midi:15]",    0.5,  0.1, 0.5,   0.001)) : si.smoo;

tune = osc2G(hslider("tune[mod:14][midi:16]", 0, -24, 24, 1));
dtn = osc2G(hslider("fine[alt:14][midi:17]", 0, 0, 100, 0.001)) : si.smoo;
range = osc2G(hslider("hi-lo[sel:20][midi:18]", 1, 0, 1, 1));
key_track = osc2G(hslider("kt[alt-sel:20][midi:19]", 1, 0, 1, 1));

//mixer
os1_vol  = mixerG(hslider("osc1[mod:1][midi:20]",      1, 0, 1, 0.001)) : si.smoo;
os2_vol  = mixerG(hslider("osc2[mod:19][midi:21]",       0, 0, 1, 0.001)) : si.smoo;
noise_vol  = mixerG(hslider("noise[alt:19][midi:22]",    0, 0, 1, 0.001)) : si.smoo;

//lfo
lfo_waveform = lfoG(hslider("waveform[sel:4][midi:23]", 2, 0, 2, 1));
lfo_rate = lfoG(hslider("rate[mod:16][midi:24]", 0.5, 0.1, 10, 0.001)) : si.smoo;

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

//poly mod matrix
p_lfo_os1 = pMatrixGlfo(hslider("p.lfo.os1[style:knob][midi:44]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_lfo_pw1 = pMatrixGlfo(hslider("p.lfo.pw1[style:knob][midi:45]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_lfo_vcf = pMatrixGlfo(hslider("p.lfo.vcf[style:knob][midi:46]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_lfo_os2 = pMatrixGlfo(hslider("p.lfo.os2[style:knob][midi:47]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_lfo_pw2 = pMatrixGlfo(hslider("p.lfo.pw2[style:knob][midi:48]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_env_os1 = pMatrixGenv(hslider("p.env.os1[style:knob][midi:49]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_env_pw1 = pMatrixGenv(hslider("p.env.pw1[style:knob][midi:50]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_env_vcf = pMatrixGenv(hslider("p.env.vcf[style:knob][midi:51]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_env_os2 = pMatrixGenv(hslider("p.env.os2[style:knob][midi:52]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_env_pw2 = pMatrixGenv(hslider("p.env.pw2[style:knob][midi:53]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_nse_os1 = pMatrixGnse(hslider("p.nse.os1[style:knob][midi:54]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_nse_pw1 = pMatrixGnse(hslider("p.nse.pw1[style:knob][midi:55]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_nse_vcf = pMatrixGnse(hslider("p.nse.vcf[style:knob][midi:56]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_nse_os2 = pMatrixGnse(hslider("p.nse.os2[style:knob][midi:57]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_nse_pw2 = pMatrixGnse(hslider("p.nse.pw2[style:knob][midi:58]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_os2_os1 = pMatrixGos2(hslider("p.os2.os1[style:knob][midi:59]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_os2_pw1 = pMatrixGos2(hslider("p.os2.pw1[style:knob][midi:60]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
p_os2_vcf = pMatrixGos2(hslider("p.os2.vcf[style:knob][midi:61]", 0, 0, 1, 0.001)) : si.smoo : ba.lin2LogGain;
poly_mod = hslider("poly.mod[style:knob][midi:62]", 0, 0, 1, 0.001) : si.smoo;

transpose = hslider("transpose[style:knob][alt:16][midi:63]", 0, -11, 11, 1) : si.smoo;

pitch_bend = hslider("pitch-bend[pitch-bend]", 8192, 0, 16383, 1); // 14bit
pitch_bend_up   = hslider("pbend-up[midi:65]", 2, 1, 12, 1);                                // lfo.osc button
pitch_bend_down = hslider("pbend-dn[midi:66]", 2, 1, 12, 1);                                // lfo.vcf button
pitch_bend_float = (pitch_bend - 8192.0) / 8191.0 : clamp(-1.0, 1.0) ;
pitch_bend_ratio = ba.if(pitch_bend_float > 0.0, pitch_bend_float * pitch_bend_up, pitch_bend_float * pitch_bend_down) : ba.semi2ratio;

glide = hslider("glide[style:knob][alt:10][midi:64]", 0.001, 0, 0.999, 0.001) : si.smoo;

// FX start at [midi:69]

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

    env_amp = en.adsr(a,d,s,r,gate) <: attach(vbargraph("[env_amp_%x][hidden:1]", 0 , 1));
    env     = en.adsr(a_f,d_f,s_f,r_f,gate) <: attach(vbargraph("[env_%x][hidden:1]", 0 , 1));
    // env_amp = en.adsr_bias(a,d,s,r,0.5,0.5,0.5,1,gate) <: attach(vbargraph("[env_amp_%x][hidden:1]", 0 , 1));
    // env     = en.adsr_bias(a_f,d_f,s_f,r_f,0.5,0.5,0.5,1,gate) <: attach(vbargraph("[env_%x][hidden:1]", 0 , 1));

    // sum mod matrix and poly mod matrix
    _lfo_os1 = lfo_os1 + (p_lfo_os1 * poly_mod);
    _lfo_pw1 = lfo_pw1 + (p_lfo_pw1 * poly_mod);
    _lfo_vcf = lfo_vcf + (p_lfo_vcf * poly_mod);
    _lfo_os2 = lfo_os2 + (p_lfo_os2 * poly_mod);
    _lfo_pw2 = lfo_pw2 + (p_lfo_pw2 * poly_mod);

    _env_os1 = env_os1 + (p_env_os1 * poly_mod);
    _env_pw1 = env_pw1 + (p_env_pw1 * poly_mod);
    _env_vcf = env_vcf + (p_env_vcf * poly_mod);
    _env_os2 = env_os2 + (p_env_os2 * poly_mod);
    _env_pw2 = env_pw2 + (p_env_pw2 * poly_mod);

    _nse_os1 = nse_os1 + (p_nse_os1 * poly_mod);
    _nse_pw1 = nse_pw1 + (p_nse_pw1 * poly_mod);
    _nse_vcf = nse_vcf + (p_nse_vcf * poly_mod);
    _nse_os2 = nse_os2 + (p_nse_os2 * poly_mod);
    _nse_pw2 = nse_pw2 + (p_nse_pw2 * poly_mod);

    _os2_pw1 = os2_pw1 + (p_os2_pw1 * poly_mod);
    _os2_vcf = os2_vcf + (p_os2_vcf * poly_mod);
    _os2_os1 = os2_os1 + (p_os2_os1 * poly_mod);

    os1_mod = (lfo * _lfo_os1 * LFO_PCH_RC) +    (env * _env_os1 * ENV_PCH_RC) +  (noise * _nse_os1 * NSE_PCH_RC);     // os2_os1 is in the oscillator lib
    pw1_mod = (lfo * _lfo_pw1 * PW_RC) +         (env * _env_pw1 * PW_RC) +       (noise * _nse_pw1 * PW_RC);          // os2_pw1 is in the oscillator lib
    vcf_mod = (lfo * _lfo_vcf * LFO_CTF_RC) +    (env * _env_vcf * ENV_CTF_RC) +  (noise * _nse_vcf * NSE_CTF_RC) +    (os2 * _os2_vcf * OSC_CTF_RC);
    os2_mod = (lfo * _lfo_os2 * LFO_PCH_RC) +    (env * _env_os2 * ENV_PCH_RC) +  (noise * _nse_os2 * NSE_PCH_RC);
    pw2_mod = (lfo * _lfo_pw2 * PW_RC) +         (env * _env_pw2 * PW_RC) +       (noise * _nse_pw2 * PW_RC);

    freq = hslider("freq_%x", 40, 0, 127, 1) + transpose : ba.midikey2hz : *(pitch_bend_ratio) : si.smooth(ba.tau2pole(glide));
    os1_pitch_base = freq * ba.cent2ratio(os1_mod);
    
    os2_pitch_ratio = ba.cent2ratio((tune * 100) + dtn); // tune and detune ratio
    os2_pitch_tracked = freq * os2_pitch_ratio;
    transpose_hz = transpose : ba.midikey2hz;
    os2_pitch_untracked = os2_pitch_ratio * (C4 + transpose_hz);
    // os2_pitch = os2_pitch_untracked, os2_pitch_tracked : ba.selectn(2, key_track) : *(ba.cent2ratio(os2_mod));
    os2_pitch_hi = os2_pitch_untracked, os2_pitch_tracked : ba.selectn(2, key_track) : *(ba.cent2ratio(os2_mod));
    os2_pitch_lo = os2_pitch_hi * 2^(-6);
    os2_pitch = os2_pitch_lo, os2_pitch_hi : ba.selectn(2, range);
    
    os1_pw_post = os1_pw + pw1_mod;
    os2_pw_post = os2_pw + pw2_mod;

    keytrack_ratio = freq / 440.0;
    delta = log10(keytrack_ratio) / 3.0;
    ctf_tracked = ctf + delta;
    vcf_cutoff = ctf_tracked * 2^(vcf_mod / 1200) : clamp(0,1);
    vcf = ve.korg35LPF(vcf_cutoff, res);

    pw_vosc_1 = 1, os1_pw_post : ba.selectn(2, os1_waveform);
    pw_vosc_2 = 1, os2_pw_post, 0.5 : ba.selectn(3, os2_waveform);
    ws_vosc_1 = 0, 1 : ba.selectn(2, os1_waveform);
    ws_vosc_2 = 0, 1, 0 : ba.selectn(3, os2_waveform);

    fb(pri,sec) = m_freq, s_freq, m_pw, s_pw, m_ws, s_ws, sync, fm, pw_fm
    with {
        m_freq = max(0, os1_pitch_base + (s_freq * sec * fm));
        s_freq = os2_pitch;
        m_pw = pw_vosc_1 + (pw_fm * sec);
        s_pw = pw_vosc_2;
        m_ws = ws_vosc_1;
        s_ws = ws_vosc_2;
        fm = _os2_os1;
        pw_fm = _os2_pw1;
    };
    osc_pair = variable_osc.hs_fm_osc_pair_fb ~ fb;
    // osc_pair = variable_osc.hs_fm_osc_pair(os1_pitch_base, os2_pitch, pw_vosc_1, pw_vosc_2, ws_vosc_1, ws_vosc_2, sync, _os2_os1, _os2_pw1);
    os1 = osc_pair : (_,!);
    os2 = osc_pair : (!,_) <: attach(vbargraph("[osc_2_%x][hidden:1]", -1 , 1));

    audio = os1 * os1_vol, os2 * os2_vol, noise * noise_vol :> *(0.5);
    out = audio : vcf : *(env_amp);
};

process = par(x, 3, voice(x)) :> *(0.12) <:_,_;