/* ------------------------------------------------------------
name: "M0SS-309"
Code generated with Faust 2.68.6 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#include <math.h>
#include <stdint.h>
#include <stdlib.h>

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	int iVec0[2];
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	FAUSTFLOAT fHslider1;
	float fConst3;
	float fRec4[2];
	FAUSTFLOAT fHslider2;
	float fRec5[2];
	int iRec6[2];
	FAUSTFLOAT fHslider3;
	float fRec7[2];
	FAUSTFLOAT fHslider4;
	float fConst4;
	FAUSTFLOAT fHslider5;
	float fRec9[2];
	float fRec8[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fButton0;
	int iRec12[2];
	int iRec10[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	int iVec1[2];
	float fRec13[2];
	float fRec11[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider10;
	float fRec14[2];
	FAUSTFLOAT fHslider11;
	float fRec15[2];
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	float fRec21[2];
	FAUSTFLOAT fHslider15;
	float fRec22[2];
	FAUSTFLOAT fHslider16;
	float fRec23[2];
	FAUSTFLOAT fHslider17;
	float fRec24[2];
	float fConst5;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec25[2];
	FAUSTFLOAT fHslider20;
	float fRec26[2];
	FAUSTFLOAT fHslider21;
	float fRec27[2];
	FAUSTFLOAT fHslider22;
	float fRec28[2];
	float fRec16[2];
	float fRec17[2];
	float fConst6;
	float fConst7;
	float fRec18[2];
	float fConst8;
	int iRec20[2];
	FAUSTFLOAT fHslider23;
	float fRec29[2];
	FAUSTFLOAT fHslider24;
	float fRec30[2];
	FAUSTFLOAT fHslider25;
	float fRec37[2];
	FAUSTFLOAT fHslider26;
	float fRec38[2];
	FAUSTFLOAT fHslider27;
	float fRec39[2];
	FAUSTFLOAT fHslider28;
	float fRec40[2];
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	float fRec41[2];
	FAUSTFLOAT fHslider31;
	float fRec42[2];
	FAUSTFLOAT fHslider32;
	float fRec43[2];
	FAUSTFLOAT fHslider33;
	float fRec44[2];
	FAUSTFLOAT fHslider34;
	float fRec45[2];
	float fRec31[2];
	FAUSTFLOAT fHslider35;
	float fRec32[2];
	float fRec33[2];
	float fRec34[2];
	int iRec36[2];
	FAUSTFLOAT fHslider36;
	float fRec46[2];
	FAUSTFLOAT fHslider37;
	float fRec47[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	int iRec48[2];
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	FAUSTFLOAT fHslider41;
	float fRec50[2];
	float fRec49[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider42;
	FAUSTFLOAT fButton1;
	int iRec55[2];
	int iVec2[2];
	float fRec57[2];
	float fRec56[2];
	FAUSTFLOAT fVbargraph3;
	float fRec58[2];
	float fRec59[2];
	float fRec60[2];
	int iRec62[2];
	float fRec63[2];
	float fRec64[2];
	float fRec65[2];
	float fRec66[2];
	int iRec68[2];
	float fRec52[2];
	float fRec53[2];
	float fRec54[2];
	int iRec69[2];
	float fRec71[2];
	float fRec70[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider43;
	FAUSTFLOAT fButton2;
	int iRec76[2];
	int iVec3[2];
	float fRec78[2];
	float fRec77[2];
	FAUSTFLOAT fVbargraph5;
	float fRec79[2];
	float fRec80[2];
	float fRec81[2];
	int iRec83[2];
	float fRec84[2];
	float fRec85[2];
	float fRec86[2];
	float fRec87[2];
	int iRec89[2];
	float fRec73[2];
	float fRec74[2];
	float fRec75[2];
	int iRec90[2];
	float fRec92[2];
	float fRec91[2];
	FAUSTFLOAT fVbargraph6;
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "aanl.lib/name", "Faust Antialiased Nonlinearities");
	m->declare(m->metaInterface, "aanl.lib/version", "1.3.0");
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "envelopes.lib/adsr_bias:author", "Andrew John March and David Braun");
	m->declare(m->metaInterface, "envelopes.lib/adsr_bias:licence", "STK-4.3");
	m->declare(m->metaInterface, "envelopes.lib/author", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "envelopes.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "envelopes.lib/name", "Faust Envelope Library");
	m->declare(m->metaInterface, "envelopes.lib/version", "1.3.0");
	m->declare(m->metaInterface, "filename", "M0SS-309.dsp");
	m->declare(m->metaInterface, "interpolators.lib/name", "Faust Interpolator Library");
	m->declare(m->metaInterface, "interpolators.lib/remap:author", "David Braun");
	m->declare(m->metaInterface, "interpolators.lib/version", "1.3.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.7.0");
	m->declare(m->metaInterface, "name", "M0SS-309");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "1.4.0");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/saw1:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/saw1:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/version", "1.4.0");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "1.5.0");
	m->declare(m->metaInterface, "vaeffects.lib/korg35LPF:author", "Eric Tarr");
	m->declare(m->metaInterface, "vaeffects.lib/korg35LPF:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "vaeffects.lib/name", "Faust Virtual Analog Filter Effect Library");
	m->declare(m->metaInterface, "vaeffects.lib/version", "1.2.0");
}

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 2;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider1 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.5f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider12 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider22 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider23 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider24 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider25 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider26 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider37 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider38 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider42 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->iVec0[l0] = 0;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec4[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec5[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->iRec6[l3] = 0;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec7[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec9[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec8[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->iRec12[l7] = 0;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->iRec10[l8] = 0;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->iVec1[l9] = 0;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec13[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec11[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec14[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec15[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec21[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec22[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec23[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec24[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec25[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec26[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec27[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec28[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec16[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec17[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec18[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->iRec20[l25] = 0;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec29[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec30[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec37[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec38[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec39[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec40[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec41[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec42[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec43[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec44[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec45[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec31[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec32[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec33[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec34[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->iRec36[l41] = 0;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec46[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec47[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec1[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec2[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec3[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->iRec48[l47] = 0;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec50[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec49[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->iRec55[l50] = 0;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->iVec2[l51] = 0;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec57[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec56[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec58[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec59[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec60[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->iRec62[l57] = 0;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec63[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec64[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec65[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec66[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->iRec68[l62] = 0;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec52[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec53[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec54[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->iRec69[l66] = 0;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec71[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec70[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->iRec76[l69] = 0;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->iVec3[l70] = 0;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec78[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec77[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec79[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec80[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec81[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->iRec83[l76] = 0;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec84[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec85[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec86[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec87[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->iRec89[l81] = 0;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec73[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec74[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec75[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->iRec90[l85] = 0;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec92[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec91[l87] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 6.2831855f / dsp->fConst0;
	dsp->fConst2 = 44.1f / dsp->fConst0;
	dsp->fConst3 = 1.0f - dsp->fConst2;
	dsp->fConst4 = 1.0f / dsp->fConst0;
	dsp->fConst5 = 2.0f / dsp->fConst0;
	dsp->fConst6 = 0.375f * dsp->fConst0;
	dsp->fConst7 = 0.0625f * mydsp_faustpower3_f(dsp->fConst0);
	dsp->fConst8 = 0.5f * mydsp_faustpower2_f(dsp->fConst0);
}

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "M0SS-309");
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env_amp");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "mod", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider40, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "mod", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider39, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider38, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "mod", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider41, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider8, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider7, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider6, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "mod", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider9, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider1, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider37, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "mod", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider5, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "sel", "23");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider4, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider16, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider11, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "env_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph0", &dsp->fVbargraph1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "env_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph1", &dsp->fVbargraph3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph5, "env_2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph5, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph2", &dsp->fVbargraph5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "env_amp_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph3", &dsp->fVbargraph2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph4, "env_amp_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph4, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph4", &dsp->fVbargraph4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph6, "env_amp_2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph6, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph5", &dsp->fVbargraph6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider0, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider43, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "alt", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider24, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "alt", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider33, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "sel", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "alt-sel", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider12, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider21, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-6.4e+03f, (FAUSTFLOAT)6.4e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "sel", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider0) + -69.0f));
	float fSlow1 = 0.33333334f * log10f(fSlow0);
	float fSlow2 = dsp->fConst2 * (float)(dsp->fHslider1);
	float fSlow3 = dsp->fConst2 * (float)(dsp->fHslider2);
	float fSlow4 = dsp->fConst2 * (float)(dsp->fHslider3);
	float fSlow5 = (float)(dsp->fHslider4);
	int iSlow6 = fSlow5 >= 2.0f;
	int iSlow7 = fSlow5 >= 1.0f;
	float fSlow8 = dsp->fConst2 * (float)(dsp->fHslider5);
	float fSlow9 = (float)(dsp->fButton0);
	int iSlow10 = fSlow9 > 0.0f;
	float fSlow11 = (float)(dsp->fHslider6);
	float fSlow12 = (fSlow11 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow13 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider8)) + 0.001f));
	float fSlow14 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider9)) + 0.001f));
	int iSlow15 = fSlow9 == 0.0f;
	int iSlow16 = iSlow15 > 0;
	float fSlow17 = dsp->fConst2 * (float)(dsp->fHslider10);
	float fSlow18 = dsp->fConst2 * (float)(dsp->fHslider11);
	int iSlow19 = (float)(dsp->fHslider12) >= 1.0f;
	float fSlow20 = fminf(fmaxf(-2.4e+03f, (float)(dsp->fHslider13)), 2.4e+03f);
	float fSlow21 = dsp->fConst2 * (float)(dsp->fHslider14);
	float fSlow22 = 4.4e+02f * fSlow0;
	float fSlow23 = dsp->fConst2 * (float)(dsp->fHslider15);
	float fSlow24 = dsp->fConst2 * (float)(dsp->fHslider16);
	float fSlow25 = dsp->fConst2 * (float)(dsp->fHslider17);
	float fSlow26 = (float)(dsp->fHslider18);
	int iSlow27 = fSlow26 >= 2.0f;
	int iSlow28 = fSlow26 >= 1.0f;
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider19);
	float fSlow30 = dsp->fConst2 * (float)(dsp->fHslider20);
	float fSlow31 = dsp->fConst2 * (float)(dsp->fHslider21);
	float fSlow32 = dsp->fConst2 * (float)(dsp->fHslider22);
	float fSlow33 = (float)(((iSlow27) ? 0 : ((iSlow28) ? 1 : 0)));
	float fSlow34 = fmaxf(fSlow33 + -0.5f, 0.0f);
	float fSlow35 = fmaxf(1.0f - 2.0f * fSlow33, 0.0f);
	float fSlow36 = 1.0f - fSlow35;
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider24);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow42 = dsp->fConst2 * (float)(dsp->fHslider28);
	int iSlow43 = (float)(dsp->fHslider29) >= 1.0f;
	float fSlow44 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow45 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow49 = (float)(dsp->fHslider35);
	float fSlow50 = (float)(((iSlow43) ? 1 : 0));
	float fSlow51 = fmaxf(fSlow50 + -0.5f, 0.0f);
	float fSlow52 = fmaxf(1.0f - 2.0f * fSlow50, 0.0f);
	float fSlow53 = 1.0f - fSlow52;
	float fSlow54 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow55 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow56 = (float)(dsp->fHslider38);
	float fSlow57 = (fSlow56 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow58 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow59 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider41)) + 0.001f));
	float fSlow60 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow61 = 0.33333334f * log10f(fSlow60);
	float fSlow62 = (float)(dsp->fButton1);
	int iSlow63 = fSlow62 > 0.0f;
	int iSlow64 = fSlow62 == 0.0f;
	int iSlow65 = iSlow64 > 0;
	float fSlow66 = 4.4e+02f * fSlow60;
	float fSlow67 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider43) + -69.0f));
	float fSlow68 = 0.33333334f * log10f(fSlow67);
	float fSlow69 = (float)(dsp->fButton2);
	int iSlow70 = fSlow69 > 0.0f;
	int iSlow71 = fSlow69 == 0.0f;
	int iSlow72 = iSlow71 > 0;
	float fSlow73 = 4.4e+02f * fSlow67;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow2 + dsp->fConst3 * dsp->fRec4[1];
			dsp->fRec5[0] = fSlow3 + dsp->fConst3 * dsp->fRec5[1];
			dsp->iRec6[0] = 1103515245 * dsp->iRec6[1] + 12345;
			float fTemp0 = (float)(dsp->iRec6[0]);
			float fTemp1 = 1.1175871e-06f * mydsp_faustpower2_f(dsp->fRec5[0]) * fTemp0;
			dsp->fRec7[0] = fSlow4 + dsp->fConst3 * dsp->fRec7[1];
			dsp->fRec9[0] = fSlow8 + dsp->fConst3 * dsp->fRec9[1];
			float fTemp2 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec8[1] + dsp->fConst4 * dsp->fRec9[0]);
			dsp->fRec8[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = 2.0f * dsp->fRec8[0] + -1.0f;
			float fTemp4 = ((iSlow6) ? 2.0f * (1.0f - fabsf(fTemp3)) + -1.0f : ((iSlow7) ? 2.0f * (float)(dsp->fRec8[0] <= 0.5f) + -1.0f : fTemp3));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = mydsp_faustpower2_f(dsp->fRec7[0]) * fTemp5;
			int iTemp7 = dsp->iRec10[1] == 0;
			int iTemp8 = dsp->iRec10[1] == 1;
			dsp->iRec12[0] = dsp->iRec12[1] + 1;
			int iTemp9 = (dsp->iRec12[0] + -1) == 0;
			float fTemp10 = ((iTemp9) ? 0.0f : dsp->fRec11[1]);
			dsp->iRec10[0] = ((iSlow10) ? ((iTemp7) ? 1 : ((iTemp8) ? ((fTemp10 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp11 = ((dsp->iRec10[1] == 2) ? fSlow11 : 0.0f);
			dsp->iVec1[0] = iSlow15;
			int iTemp12 = (dsp->iVec1[1] <= 0) & iSlow16;
			float fTemp13 = (float)(1 - iTemp12);
			float fTemp14 = (float)(iTemp12);
			dsp->fRec13[0] = dsp->fRec13[1] * fTemp13 + ((iTemp9) ? 1.0f : fTemp10) * fTemp14;
			float fTemp15 = ((iTemp7) ? dsp->fRec13[0] : 1.0f);
			float fTemp16 = ((fTemp11 == fTemp15) ? 0.5f : (fTemp10 - fTemp11) / (fTemp15 - fTemp11));
			dsp->fRec11[0] = fmaxf(fTemp11, fminf(1.0f, fTemp10 + 0.25f * (((iTemp7) ? -(fSlow14 * dsp->fRec13[0]) : ((iTemp8) ? fSlow13 : fSlow12)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp16 + -1.0f) + (1.0f - fTemp16)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec11[0]);
			float fTemp17 = dsp->fRec11[0];
			dsp->fRec14[0] = fSlow17 + dsp->fConst3 * dsp->fRec14[1];
			float fTemp18 = mydsp_faustpower2_f(dsp->fRec14[0]);
			dsp->fRec15[0] = fSlow18 + dsp->fConst3 * dsp->fRec15[1];
			float fTemp19 = mydsp_faustpower2_f(dsp->fRec15[0]);
			dsp->fRec21[0] = fSlow21 + dsp->fConst3 * dsp->fRec21[1];
			float fTemp20 = powf(2.0f, 0.00083333335f * (fSlow20 + dsp->fRec21[0]));
			float fTemp21 = 261.0f * fTemp20;
			float fTemp22 = ((iSlow19) ? fSlow22 * fTemp20 : fTemp21);
			dsp->fRec22[0] = fSlow23 + dsp->fConst3 * dsp->fRec22[1];
			float fTemp23 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec22[0]) * fTemp5;
			dsp->fRec23[0] = fSlow24 + dsp->fConst3 * dsp->fRec23[1];
			float fTemp24 = mydsp_faustpower2_f(dsp->fRec23[0]);
			dsp->fRec24[0] = fSlow25 + dsp->fConst3 * dsp->fRec24[1];
			float fTemp25 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec24[0]) * fTemp0;
			float fTemp26 = powf(2.0f, 0.00083333335f * (fTemp23 + 1.2e+03f * fTemp17 * fTemp24 + fTemp25));
			float fTemp27 = fTemp22 * fTemp26;
			float fTemp28 = dsp->fConst4 * fTemp27;
			float fTemp29 = dsp->fConst5 * fTemp27;
			dsp->fRec25[0] = fSlow29 + dsp->fConst3 * dsp->fRec25[1];
			float fTemp30 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec25[0]) * fTemp0;
			dsp->fRec26[0] = fSlow30 + dsp->fConst3 * dsp->fRec26[1];
			float fTemp31 = mydsp_faustpower2_f(dsp->fRec26[0]);
			dsp->fRec27[0] = fSlow31 + dsp->fConst3 * dsp->fRec27[1];
			dsp->fRec28[0] = fSlow32 + dsp->fConst3 * dsp->fRec28[1];
			float fTemp32 = mydsp_faustpower2_f(dsp->fRec28[0]) * fTemp5;
			float fTemp33 = ((fTemp28 >= 0.25f) ? 0.5f : fmaxf(fTemp29, fminf(1.0f - fTemp29, ((iSlow27) ? 0.5f : ((iSlow28) ? fTemp30 + fTemp17 * fTemp31 + dsp->fRec27[0] + fTemp32 : 1.0f)))));
			dsp->fRec16[0] = fTemp33;
			float fTemp34 = fTemp28 + dsp->fRec17[1];
			float fTemp35 = fmodf(fTemp34, 1.0f);
			dsp->fRec17[0] = fTemp35;
			int iTemp36 = fTemp35 < fTemp33;
			float fTemp37 = fTemp35 - fTemp33;
			float fTemp38 = 1.0f - fTemp33;
			int iTemp39 = fTemp35 >= fTemp33;
			float fTemp40 = fTemp28 + dsp->fRec16[1] - fTemp33;
			float fTemp41 = fTemp37 / fTemp40;
			float fTemp42 = 1.0f - fTemp41;
			float fTemp43 = fTemp27 * fSlow35 * (1.0f / fTemp38 + 1.0f / fTemp33);
			int iTemp44 = fTemp34 >= 1.0f;
			float fTemp45 = fTemp35 / fTemp27;
			float fTemp46 = dsp->fConst0 * fTemp45;
			float fTemp47 = 1.0f - fTemp46;
			dsp->fRec18[0] = fTemp35 + 2.0f * (((iTemp36) ? 0.0f : 1.0f) - fTemp35) * fSlow34 + (((iTemp36) ? fTemp35 / fTemp33 : 1.0f - fTemp37 / fTemp38) - fTemp35) * fSlow35 + ((dsp->iRec20[1]) ? ((iTemp44) ? dsp->fConst4 * fTemp43 * (dsp->fConst0 * (fTemp35 * (dsp->fConst6 * fTemp45 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp35) / (mydsp_faustpower3_f(fTemp22) * mydsp_faustpower3_f(fTemp26)))) / fTemp27) + 0.1875f) - 0.5f * fSlow36 * fTemp47 * (fTemp46 - 1.0f) : 0.0f) : ((iTemp39) ? fSlow34 * fTemp42 * (fTemp41 - 1.0f) - dsp->fConst4 * fTemp43 * (fTemp37 * (0.375f * fTemp41 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp37) / mydsp_faustpower3_f(fTemp40))) / fTemp40 + 0.1875f) : 0.0f));
			float fTemp48 = mydsp_faustpower2_f(fTemp22) * mydsp_faustpower2_f(fTemp26);
			float fRec19 = dsp->fRec18[1] + ((dsp->iRec20[1]) ? ((iTemp44) ? dsp->fConst4 * fTemp43 * (fTemp47 * (0.375f * fTemp47 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp47)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp35) * fSlow36 / fTemp48) : 0.0f) : ((iTemp39) ? fSlow34 * mydsp_faustpower2_f(fTemp37) / mydsp_faustpower2_f(fTemp40) - dsp->fConst4 * fTemp43 * (fTemp42 * (0.375f * fTemp42 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp42)) + 0.1875f) : 0.0f));
			dsp->iRec20[0] = (((((dsp->iRec20[1] + iTemp44) == 2) + ((iTemp36 + (dsp->iRec20[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp49 = 2.0f * fRec19 + -1.0f;
			float fTemp50 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow1 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp17 * fTemp18 + fTemp19 * fTemp49)))), 1.0f) + 1.0f));
			dsp->fRec29[0] = fSlow37 + dsp->fConst3 * dsp->fRec29[1];
			dsp->fRec30[0] = fSlow38 + dsp->fConst3 * dsp->fRec30[1];
			dsp->fRec37[0] = fSlow39 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp51 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec37[0]) * fTemp5;
			dsp->fRec38[0] = fSlow40 + dsp->fConst3 * dsp->fRec38[1];
			float fTemp52 = mydsp_faustpower2_f(dsp->fRec38[0]);
			dsp->fRec39[0] = fSlow41 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp53 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec39[0]) * fTemp0;
			dsp->fRec40[0] = fSlow42 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp54 = mydsp_faustpower2_f(dsp->fRec40[0]);
			float fTemp55 = fmaxf(0.0f, fSlow22 * powf(2.0f, 0.00083333335f * (fTemp51 + 1.2e+03f * fTemp17 * fTemp52 + fTemp53)) + fTemp54 * fTemp22 * fTemp26 * fTemp49);
			float fTemp56 = dsp->fConst4 * fTemp55;
			float fTemp57 = dsp->fConst5 * fTemp55;
			dsp->fRec41[0] = fSlow44 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp58 = mydsp_faustpower2_f(dsp->fRec41[0]);
			dsp->fRec42[0] = fSlow45 + dsp->fConst3 * dsp->fRec42[1];
			float fTemp59 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec42[0]) * fTemp0;
			dsp->fRec43[0] = fSlow46 + dsp->fConst3 * dsp->fRec43[1];
			float fTemp60 = mydsp_faustpower2_f(dsp->fRec43[0]);
			dsp->fRec44[0] = fSlow47 + dsp->fConst3 * dsp->fRec44[1];
			dsp->fRec45[0] = fSlow48 + dsp->fConst3 * dsp->fRec45[1];
			float fTemp61 = mydsp_faustpower2_f(dsp->fRec45[0]) * fTemp5;
			float fTemp62 = ((fTemp56 >= 0.25f) ? 0.5f : fmaxf(fTemp57, fminf(1.0f - fTemp57, ((iSlow43) ? fTemp58 * fTemp49 + fTemp59 + fTemp17 * fTemp60 + dsp->fRec44[0] + fTemp61 : 1.0f))));
			dsp->fRec31[0] = fTemp62;
			float fTemp63 = fTemp28 + dsp->fRec33[1];
			int iTemp64 = (fSlow49 + (float)(fTemp63 >= 1.0f)) == 2.0f;
			float fTemp65 = fTemp56 + dsp->fRec32[1];
			float fTemp66 = fmodf(fTemp65, 1.0f);
			float fTemp67 = fmodf(fTemp63, 1.0f);
			float fTemp68 = ((iTemp64) ? fTemp55 * fTemp67 / fTemp27 : fTemp66);
			dsp->fRec32[0] = fTemp68;
			dsp->fRec33[0] = fTemp67;
			int iTemp69 = fTemp68 < fTemp62;
			float fTemp70 = 1.0f - fTemp62;
			float fTemp71 = dsp->fConst0 * (fTemp67 / fTemp27);
			float fTemp72 = 1.0f - fTemp71;
			float fTemp73 = dsp->fRec32[1] + dsp->fConst4 * fTemp55 * fTemp72;
			int iTemp74 = dsp->iRec36[1] == 0;
			int iTemp75 = ((((fTemp73 >= 1.0f) + ((iTemp74 + (fTemp73 >= fTemp62)) == 2)) > 0) + (iTemp64 == 0)) > 0;
			int iTemp76 = fTemp66 >= fTemp62;
			float fTemp77 = fTemp66 - fTemp62;
			float fTemp78 = fTemp56 + dsp->fRec31[1] - fTemp62;
			float fTemp79 = fTemp77 / fTemp78;
			float fTemp80 = 1.0f - fTemp79;
			float fTemp81 = fTemp55 * fSlow52 * (1.0f / fTemp70 + 1.0f / fTemp62);
			int iTemp82 = fTemp65 >= 1.0f;
			float fTemp83 = fTemp66 / fTemp55;
			float fTemp84 = dsp->fConst0 * fTemp83;
			float fTemp85 = 1.0f - fTemp84;
			float fTemp86 = fmodf(fTemp73, 1.0f);
			int iTemp87 = fTemp86 < fTemp62;
			float fTemp88 = fTemp86 + 2.0f * fSlow51 * (((iTemp87) ? 0.0f : 1.0f) - fTemp86) + fSlow52 * (((iTemp87) ? fTemp86 / fTemp62 : 1.0f - (fTemp86 - fTemp62) / fTemp70) - fTemp86);
			dsp->fRec34[0] = fTemp68 + 2.0f * (((iTemp69) ? 0.0f : 1.0f) - fTemp68) * fSlow51 + (((iTemp69) ? fTemp68 / fTemp62 : 1.0f - (fTemp68 - fTemp62) / fTemp70) - fTemp68) * fSlow52 + ((iTemp75) ? ((dsp->iRec36[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (dsp->fConst0 * (fTemp66 * (dsp->fConst6 * fTemp83 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp66) / mydsp_faustpower3_f(fTemp55))) / fTemp55) + 0.1875f) - 0.5f * fSlow53 * fTemp85 * (fTemp84 - 1.0f) : 0.0f) : ((iTemp76) ? fSlow51 * fTemp80 * (fTemp79 - 1.0f) - dsp->fConst4 * fTemp81 * (fTemp77 * (0.375f * fTemp79 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp77) / mydsp_faustpower3_f(fTemp78))) / fTemp78 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? 0.5f * fTemp72 * fTemp88 * (fTemp71 - 1.0f) : 0.0f);
			float fRec35 = dsp->fRec34[1] + ((iTemp75) ? ((dsp->iRec36[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (fTemp85 * (0.375f * fTemp85 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp85)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp66) * fSlow53 / mydsp_faustpower2_f(fTemp55)) : 0.0f) : ((iTemp76) ? fSlow51 * mydsp_faustpower2_f(fTemp77) / mydsp_faustpower2_f(fTemp78) - dsp->fConst4 * fTemp81 * (fTemp80 * (0.375f * fTemp80 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp80)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp67) * fTemp88 / fTemp48) : 0.0f);
			dsp->iRec36[0] = (((iTemp64 + ((dsp->iRec36[1] + iTemp82) == 2) + ((iTemp74 + (fTemp66 < fTemp62)) == 2)) > 0) ? 0 : 1);
			dsp->fRec46[0] = fSlow54 + dsp->fConst3 * dsp->fRec46[1];
			float fTemp89 = 4.656613e-10f * dsp->fRec46[0] * fTemp0;
			float fTemp90 = (0.5f * (dsp->fRec29[0] * fTemp49 + dsp->fRec30[0] * (2.0f * fRec35 + -1.0f) + fTemp89) - dsp->fRec2[1]) * fTemp50;
			dsp->fRec47[0] = fSlow55 + dsp->fConst3 * dsp->fRec47[1];
			float fTemp91 = dsp->fRec47[0] + -0.707f;
			float fTemp92 = fTemp50 + 1.0f;
			float fTemp93 = 1.0f - fTemp50 / fTemp92;
			float fTemp94 = fTemp50 * ((dsp->fRec2[1] + (fTemp90 + 0.21521576f * dsp->fRec3[1] * fTemp91 * fTemp93 - dsp->fRec1[1]) / fTemp92) / (1.0f - 0.21521576f * (fTemp50 * fTemp91 * fTemp93 / fTemp92)) - dsp->fRec3[1]) / fTemp92;
			float fTemp95 = dsp->fRec3[1] + fTemp94;
			float fRec0 = fTemp95;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp50 * (0.21521576f * fTemp91 * fTemp95 - dsp->fRec1[1]) / fTemp92);
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp90 / fTemp92);
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp94;
			int iTemp96 = dsp->iRec48[1] == 0;
			int iTemp97 = dsp->iRec48[1] == 1;
			float fTemp98 = ((iTemp9) ? 0.0f : dsp->fRec49[1]);
			dsp->iRec48[0] = ((iSlow10) ? ((iTemp96) ? 1 : ((iTemp97) ? ((fTemp98 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp99 = ((dsp->iRec48[1] == 2) ? fSlow56 : 0.0f);
			dsp->fRec50[0] = fTemp13 * dsp->fRec50[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp98);
			float fTemp100 = ((iTemp96) ? dsp->fRec50[0] : 1.0f);
			float fTemp101 = ((fTemp99 == fTemp100) ? 0.5f : (fTemp98 - fTemp99) / (fTemp100 - fTemp99));
			dsp->fRec49[0] = fmaxf(fTemp99, fminf(1.0f, fTemp98 + 0.25f * (((iTemp96) ? -(fSlow59 * dsp->fRec50[0]) : ((iTemp97) ? fSlow58 : fSlow57)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp101 + -1.0f) + (1.0f - fTemp101)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec49[0]);
			int iTemp102 = dsp->iRec55[1] == 0;
			int iTemp103 = dsp->iRec55[1] == 1;
			float fTemp104 = ((iTemp9) ? 0.0f : dsp->fRec56[1]);
			dsp->iRec55[0] = ((iSlow63) ? ((iTemp102) ? 1 : ((iTemp103) ? ((fTemp104 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp105 = ((dsp->iRec55[1] == 2) ? fSlow11 : 0.0f);
			dsp->iVec2[0] = iSlow64;
			int iTemp106 = (dsp->iVec2[1] <= 0) & iSlow65;
			float fTemp107 = (float)(1 - iTemp106);
			float fTemp108 = (float)(iTemp106);
			dsp->fRec57[0] = dsp->fRec57[1] * fTemp107 + ((iTemp9) ? 1.0f : fTemp104) * fTemp108;
			float fTemp109 = ((iTemp102) ? dsp->fRec57[0] : 1.0f);
			float fTemp110 = ((fTemp105 == fTemp109) ? 0.5f : (fTemp104 - fTemp105) / (fTemp109 - fTemp105));
			dsp->fRec56[0] = fmaxf(fTemp105, fminf(1.0f, fTemp104 + 0.25f * (((iTemp102) ? -(fSlow14 * dsp->fRec57[0]) : ((iTemp103) ? fSlow13 : fSlow12)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp110 + -1.0f) + (1.0f - fTemp110)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec56[0]);
			float fTemp111 = dsp->fRec56[0];
			float fTemp112 = ((iSlow19) ? fSlow66 * fTemp20 : fTemp21);
			float fTemp113 = powf(2.0f, 0.00083333335f * (fTemp25 + fTemp23 + 1.2e+03f * fTemp24 * fTemp111));
			float fTemp114 = fTemp112 * fTemp113;
			float fTemp115 = dsp->fConst4 * fTemp114;
			float fTemp116 = dsp->fConst5 * fTemp114;
			float fTemp117 = ((fTemp115 >= 0.25f) ? 0.5f : fmaxf(fTemp116, fminf(1.0f - fTemp116, ((iSlow27) ? 0.5f : ((iSlow28) ? fTemp30 + fTemp32 + dsp->fRec27[0] + fTemp31 * fTemp111 : 1.0f)))));
			dsp->fRec58[0] = fTemp117;
			float fTemp118 = fTemp115 + dsp->fRec59[1];
			float fTemp119 = fmodf(fTemp118, 1.0f);
			dsp->fRec59[0] = fTemp119;
			int iTemp120 = fTemp119 < fTemp117;
			float fTemp121 = fTemp119 - fTemp117;
			float fTemp122 = 1.0f - fTemp117;
			int iTemp123 = fTemp119 >= fTemp117;
			float fTemp124 = fTemp115 + dsp->fRec58[1] - fTemp117;
			float fTemp125 = fTemp121 / fTemp124;
			float fTemp126 = 1.0f - fTemp125;
			float fTemp127 = fSlow35 * fTemp112 * fTemp113 * (1.0f / fTemp122 + 1.0f / fTemp117);
			int iTemp128 = fTemp118 >= 1.0f;
			float fTemp129 = fTemp119 / fTemp114;
			float fTemp130 = dsp->fConst0 * fTemp129;
			float fTemp131 = 1.0f - fTemp130;
			dsp->fRec60[0] = fTemp119 + 2.0f * fSlow34 * (((iTemp120) ? 0.0f : 1.0f) - fTemp119) + fSlow35 * (((iTemp120) ? fTemp119 / fTemp117 : 1.0f - fTemp121 / fTemp122) - fTemp119) + ((dsp->iRec62[1]) ? ((iTemp128) ? dsp->fConst4 * fTemp127 * (dsp->fConst0 * (fTemp119 * (dsp->fConst6 * fTemp129 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp119) / (mydsp_faustpower3_f(fTemp112) * mydsp_faustpower3_f(fTemp113)))) / fTemp114) + 0.1875f) - 0.5f * fSlow36 * fTemp131 * (fTemp130 - 1.0f) : 0.0f) : ((iTemp123) ? fSlow34 * fTemp126 * (fTemp125 - 1.0f) - dsp->fConst4 * fTemp127 * (fTemp121 * (0.375f * fTemp125 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp121) / mydsp_faustpower3_f(fTemp124))) / fTemp124 + 0.1875f) : 0.0f));
			float fTemp132 = mydsp_faustpower2_f(fTemp112) * mydsp_faustpower2_f(fTemp113);
			float fRec61 = dsp->fRec60[1] + ((dsp->iRec62[1]) ? ((iTemp128) ? dsp->fConst4 * fTemp127 * (fTemp131 * (0.375f * fTemp131 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp131)) + 0.1875f) - dsp->fConst8 * (fSlow36 * mydsp_faustpower2_f(fTemp119) / fTemp132) : 0.0f) : ((iTemp123) ? fSlow34 * mydsp_faustpower2_f(fTemp121) / mydsp_faustpower2_f(fTemp124) - dsp->fConst4 * fTemp127 * (fTemp126 * (0.375f * fTemp126 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp126)) + 0.1875f) : 0.0f));
			dsp->iRec62[0] = (((((dsp->iRec62[1] + iTemp128) == 2) + ((iTemp120 + (dsp->iRec62[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp133 = 2.0f * fRec61 + -1.0f;
			float fTemp134 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow61 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp111 + fTemp19 * fTemp133)))), 1.0f) + 1.0f));
			float fTemp135 = fmaxf(0.0f, fSlow66 * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp52 * fTemp111 + fTemp51 + fTemp53)) + fTemp54 * fTemp112 * fTemp113 * fTemp133);
			float fTemp136 = dsp->fConst4 * fTemp135;
			float fTemp137 = dsp->fConst5 * fTemp135;
			float fTemp138 = ((fTemp136 >= 0.25f) ? 0.5f : fmaxf(fTemp137, fminf(1.0f - fTemp137, ((iSlow43) ? fTemp59 + fTemp61 + fTemp58 * fTemp133 + dsp->fRec44[0] + fTemp60 * fTemp111 : 1.0f))));
			dsp->fRec63[0] = fTemp138;
			float fTemp139 = fTemp115 + dsp->fRec65[1];
			int iTemp140 = (fSlow49 + (float)(fTemp139 >= 1.0f)) == 2.0f;
			float fTemp141 = fTemp136 + dsp->fRec64[1];
			float fTemp142 = fmodf(fTemp141, 1.0f);
			float fTemp143 = fmodf(fTemp139, 1.0f);
			float fTemp144 = ((iTemp140) ? fTemp135 * fTemp143 / fTemp114 : fTemp142);
			dsp->fRec64[0] = fTemp144;
			dsp->fRec65[0] = fTemp143;
			int iTemp145 = fTemp144 < fTemp138;
			float fTemp146 = 1.0f - fTemp138;
			float fTemp147 = dsp->fConst0 * (fTemp143 / fTemp114);
			float fTemp148 = 1.0f - fTemp147;
			float fTemp149 = dsp->fRec64[1] + dsp->fConst4 * fTemp135 * fTemp148;
			int iTemp150 = dsp->iRec68[1] == 0;
			int iTemp151 = ((((fTemp149 >= 1.0f) + ((iTemp150 + (fTemp149 >= fTemp138)) == 2)) > 0) + (iTemp140 == 0)) > 0;
			int iTemp152 = fTemp142 >= fTemp138;
			float fTemp153 = fTemp142 - fTemp138;
			float fTemp154 = fTemp136 + dsp->fRec63[1] - fTemp138;
			float fTemp155 = fTemp153 / fTemp154;
			float fTemp156 = 1.0f - fTemp155;
			float fTemp157 = fSlow52 * fTemp135 * (1.0f / fTemp146 + 1.0f / fTemp138);
			int iTemp158 = fTemp141 >= 1.0f;
			float fTemp159 = fTemp142 / fTemp135;
			float fTemp160 = dsp->fConst0 * fTemp159;
			float fTemp161 = 1.0f - fTemp160;
			float fTemp162 = fmodf(fTemp149, 1.0f);
			int iTemp163 = fTemp162 < fTemp138;
			float fTemp164 = fTemp162 + 2.0f * fSlow51 * (((iTemp163) ? 0.0f : 1.0f) - fTemp162) + fSlow52 * (((iTemp163) ? fTemp162 / fTemp138 : 1.0f - (fTemp162 - fTemp138) / fTemp146) - fTemp162);
			dsp->fRec66[0] = fTemp144 + 2.0f * fSlow51 * (((iTemp145) ? 0.0f : 1.0f) - fTemp144) + fSlow52 * (((iTemp145) ? fTemp144 / fTemp138 : 1.0f - (fTemp144 - fTemp138) / fTemp146) - fTemp144) + ((iTemp151) ? ((dsp->iRec68[1]) ? ((iTemp158) ? dsp->fConst4 * fTemp157 * (dsp->fConst0 * (fTemp142 * (dsp->fConst6 * fTemp159 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp142) / mydsp_faustpower3_f(fTemp135))) / fTemp135) + 0.1875f) - 0.5f * fSlow53 * fTemp161 * (fTemp160 - 1.0f) : 0.0f) : ((iTemp152) ? fSlow51 * fTemp156 * (fTemp155 - 1.0f) - dsp->fConst4 * fTemp157 * (fTemp153 * (0.375f * fTemp155 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp153) / mydsp_faustpower3_f(fTemp154))) / fTemp154 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp140) ? 0.5f * fTemp148 * fTemp164 * (fTemp147 - 1.0f) : 0.0f);
			float fRec67 = dsp->fRec66[1] + ((iTemp151) ? ((dsp->iRec68[1]) ? ((iTemp158) ? dsp->fConst4 * fTemp157 * (fTemp161 * (0.375f * fTemp161 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp161)) + 0.1875f) - dsp->fConst8 * (fSlow53 * mydsp_faustpower2_f(fTemp142) / mydsp_faustpower2_f(fTemp135)) : 0.0f) : ((iTemp152) ? fSlow51 * mydsp_faustpower2_f(fTemp153) / mydsp_faustpower2_f(fTemp154) - dsp->fConst4 * fTemp157 * (fTemp156 * (0.375f * fTemp156 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp156)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp140) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp143) * fTemp164 / fTemp132) : 0.0f);
			dsp->iRec68[0] = (((iTemp140 + ((dsp->iRec68[1] + iTemp158) == 2) + ((iTemp150 + (fTemp142 < fTemp138)) == 2)) > 0) ? 0 : 1);
			float fTemp165 = (0.5f * (dsp->fRec29[0] * fTemp133 + fTemp89 + dsp->fRec30[0] * (2.0f * fRec67 + -1.0f)) - dsp->fRec53[1]) * fTemp134;
			float fTemp166 = fTemp134 + 1.0f;
			float fTemp167 = 1.0f - fTemp134 / fTemp166;
			float fTemp168 = fTemp134 * ((dsp->fRec53[1] + (fTemp165 + 0.21521576f * fTemp91 * dsp->fRec54[1] * fTemp167 - dsp->fRec52[1]) / fTemp166) / (1.0f - 0.21521576f * (fTemp91 * fTemp134 * fTemp167 / fTemp166)) - dsp->fRec54[1]) / fTemp166;
			float fTemp169 = dsp->fRec54[1] + fTemp168;
			float fRec51 = fTemp169;
			dsp->fRec52[0] = dsp->fRec52[1] + 2.0f * (fTemp134 * (0.21521576f * fTemp91 * fTemp169 - dsp->fRec52[1]) / fTemp166);
			dsp->fRec53[0] = dsp->fRec53[1] + 2.0f * (fTemp165 / fTemp166);
			dsp->fRec54[0] = dsp->fRec54[1] + 2.0f * fTemp168;
			int iTemp170 = dsp->iRec69[1] == 0;
			int iTemp171 = dsp->iRec69[1] == 1;
			float fTemp172 = ((iTemp9) ? 0.0f : dsp->fRec70[1]);
			dsp->iRec69[0] = ((iSlow63) ? ((iTemp170) ? 1 : ((iTemp171) ? ((fTemp172 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp173 = ((dsp->iRec69[1] == 2) ? fSlow56 : 0.0f);
			dsp->fRec71[0] = fTemp107 * dsp->fRec71[1] + fTemp108 * ((iTemp9) ? 1.0f : fTemp172);
			float fTemp174 = ((iTemp170) ? dsp->fRec71[0] : 1.0f);
			float fTemp175 = ((fTemp173 == fTemp174) ? 0.5f : (fTemp172 - fTemp173) / (fTemp174 - fTemp173));
			dsp->fRec70[0] = fmaxf(fTemp173, fminf(1.0f, fTemp172 + 0.25f * (((iTemp170) ? -(fSlow59 * dsp->fRec71[0]) : ((iTemp171) ? fSlow58 : fSlow57)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp175 + -1.0f) + (1.0f - fTemp175)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec70[0]);
			int iTemp176 = dsp->iRec76[1] == 0;
			int iTemp177 = dsp->iRec76[1] == 1;
			float fTemp178 = ((iTemp9) ? 0.0f : dsp->fRec77[1]);
			dsp->iRec76[0] = ((iSlow70) ? ((iTemp176) ? 1 : ((iTemp177) ? ((fTemp178 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp179 = ((dsp->iRec76[1] == 2) ? fSlow11 : 0.0f);
			dsp->iVec3[0] = iSlow71;
			int iTemp180 = (dsp->iVec3[1] <= 0) & iSlow72;
			float fTemp181 = (float)(1 - iTemp180);
			float fTemp182 = (float)(iTemp180);
			dsp->fRec78[0] = dsp->fRec78[1] * fTemp181 + ((iTemp9) ? 1.0f : fTemp178) * fTemp182;
			float fTemp183 = ((iTemp176) ? dsp->fRec78[0] : 1.0f);
			float fTemp184 = ((fTemp179 == fTemp183) ? 0.5f : (fTemp178 - fTemp179) / (fTemp183 - fTemp179));
			dsp->fRec77[0] = fmaxf(fTemp179, fminf(1.0f, fTemp178 + 0.25f * (((iTemp176) ? -(fSlow14 * dsp->fRec78[0]) : ((iTemp177) ? fSlow13 : fSlow12)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp184 + -1.0f) + (1.0f - fTemp184)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec77[0]);
			float fTemp185 = dsp->fRec77[0];
			float fTemp186 = ((iSlow19) ? fSlow73 * fTemp20 : fTemp21);
			float fTemp187 = powf(2.0f, 0.00083333335f * (fTemp25 + fTemp23 + 1.2e+03f * fTemp24 * fTemp185));
			float fTemp188 = fTemp186 * fTemp187;
			float fTemp189 = dsp->fConst4 * fTemp188;
			float fTemp190 = dsp->fConst5 * fTemp188;
			float fTemp191 = ((fTemp189 >= 0.25f) ? 0.5f : fmaxf(fTemp190, fminf(1.0f - fTemp190, ((iSlow27) ? 0.5f : ((iSlow28) ? fTemp30 + fTemp32 + dsp->fRec27[0] + fTemp31 * fTemp185 : 1.0f)))));
			dsp->fRec79[0] = fTemp191;
			float fTemp192 = fTemp189 + dsp->fRec80[1];
			float fTemp193 = fmodf(fTemp192, 1.0f);
			dsp->fRec80[0] = fTemp193;
			int iTemp194 = fTemp193 < fTemp191;
			float fTemp195 = fTemp193 - fTemp191;
			float fTemp196 = 1.0f - fTemp191;
			int iTemp197 = fTemp193 >= fTemp191;
			float fTemp198 = fTemp189 + dsp->fRec79[1] - fTemp191;
			float fTemp199 = fTemp195 / fTemp198;
			float fTemp200 = 1.0f - fTemp199;
			float fTemp201 = fSlow35 * fTemp186 * fTemp187 * (1.0f / fTemp196 + 1.0f / fTemp191);
			int iTemp202 = fTemp192 >= 1.0f;
			float fTemp203 = fTemp193 / fTemp188;
			float fTemp204 = dsp->fConst0 * fTemp203;
			float fTemp205 = 1.0f - fTemp204;
			dsp->fRec81[0] = fTemp193 + 2.0f * fSlow34 * (((iTemp194) ? 0.0f : 1.0f) - fTemp193) + fSlow35 * (((iTemp194) ? fTemp193 / fTemp191 : 1.0f - fTemp195 / fTemp196) - fTemp193) + ((dsp->iRec83[1]) ? ((iTemp202) ? dsp->fConst4 * fTemp201 * (dsp->fConst0 * (fTemp193 * (dsp->fConst6 * fTemp203 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp193) / (mydsp_faustpower3_f(fTemp186) * mydsp_faustpower3_f(fTemp187)))) / fTemp188) + 0.1875f) - 0.5f * fSlow36 * fTemp205 * (fTemp204 - 1.0f) : 0.0f) : ((iTemp197) ? fSlow34 * fTemp200 * (fTemp199 - 1.0f) - dsp->fConst4 * fTemp201 * (fTemp195 * (0.375f * fTemp199 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp195) / mydsp_faustpower3_f(fTemp198))) / fTemp198 + 0.1875f) : 0.0f));
			float fTemp206 = mydsp_faustpower2_f(fTemp186) * mydsp_faustpower2_f(fTemp187);
			float fRec82 = dsp->fRec81[1] + ((dsp->iRec83[1]) ? ((iTemp202) ? dsp->fConst4 * fTemp201 * (fTemp205 * (0.375f * fTemp205 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp205)) + 0.1875f) - dsp->fConst8 * (fSlow36 * mydsp_faustpower2_f(fTemp193) / fTemp206) : 0.0f) : ((iTemp197) ? fSlow34 * mydsp_faustpower2_f(fTemp195) / mydsp_faustpower2_f(fTemp198) - dsp->fConst4 * fTemp201 * (fTemp200 * (0.375f * fTemp200 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp200)) + 0.1875f) : 0.0f));
			dsp->iRec83[0] = (((((dsp->iRec83[1] + iTemp202) == 2) + ((iTemp194 + (dsp->iRec83[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp207 = 2.0f * fRec82 + -1.0f;
			float fTemp208 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow68 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp185 + fTemp19 * fTemp207)))), 1.0f) + 1.0f));
			float fTemp209 = fmaxf(0.0f, fSlow73 * powf(2.0f, 0.00083333335f * (fTemp53 + fTemp51 + 1.2e+03f * fTemp52 * fTemp185)) + fTemp54 * fTemp186 * fTemp187 * fTemp207);
			float fTemp210 = dsp->fConst4 * fTemp209;
			float fTemp211 = dsp->fConst5 * fTemp209;
			float fTemp212 = ((fTemp210 >= 0.25f) ? 0.5f : fmaxf(fTemp211, fminf(1.0f - fTemp211, ((iSlow43) ? fTemp59 + fTemp61 + fTemp58 * fTemp207 + dsp->fRec44[0] + fTemp60 * fTemp185 : 1.0f))));
			dsp->fRec84[0] = fTemp212;
			float fTemp213 = fTemp189 + dsp->fRec86[1];
			int iTemp214 = (fSlow49 + (float)(fTemp213 >= 1.0f)) == 2.0f;
			float fTemp215 = fTemp210 + dsp->fRec85[1];
			float fTemp216 = fmodf(fTemp215, 1.0f);
			float fTemp217 = fmodf(fTemp213, 1.0f);
			float fTemp218 = ((iTemp214) ? fTemp209 * fTemp217 / fTemp188 : fTemp216);
			dsp->fRec85[0] = fTemp218;
			dsp->fRec86[0] = fTemp217;
			int iTemp219 = fTemp218 < fTemp212;
			float fTemp220 = 1.0f - fTemp212;
			float fTemp221 = dsp->fConst0 * (fTemp217 / fTemp188);
			float fTemp222 = 1.0f - fTemp221;
			float fTemp223 = dsp->fRec85[1] + dsp->fConst4 * fTemp209 * fTemp222;
			int iTemp224 = dsp->iRec89[1] == 0;
			int iTemp225 = ((((fTemp223 >= 1.0f) + ((iTemp224 + (fTemp223 >= fTemp212)) == 2)) > 0) + (iTemp214 == 0)) > 0;
			int iTemp226 = fTemp216 >= fTemp212;
			float fTemp227 = fTemp216 - fTemp212;
			float fTemp228 = fTemp210 + dsp->fRec84[1] - fTemp212;
			float fTemp229 = fTemp227 / fTemp228;
			float fTemp230 = 1.0f - fTemp229;
			float fTemp231 = fSlow52 * fTemp209 * (1.0f / fTemp220 + 1.0f / fTemp212);
			int iTemp232 = fTemp215 >= 1.0f;
			float fTemp233 = fTemp216 / fTemp209;
			float fTemp234 = dsp->fConst0 * fTemp233;
			float fTemp235 = 1.0f - fTemp234;
			float fTemp236 = fmodf(fTemp223, 1.0f);
			int iTemp237 = fTemp236 < fTemp212;
			float fTemp238 = fTemp236 + 2.0f * fSlow51 * (((iTemp237) ? 0.0f : 1.0f) - fTemp236) + fSlow52 * (((iTemp237) ? fTemp236 / fTemp212 : 1.0f - (fTemp236 - fTemp212) / fTemp220) - fTemp236);
			dsp->fRec87[0] = fTemp218 + 2.0f * fSlow51 * (((iTemp219) ? 0.0f : 1.0f) - fTemp218) + fSlow52 * (((iTemp219) ? fTemp218 / fTemp212 : 1.0f - (fTemp218 - fTemp212) / fTemp220) - fTemp218) + ((iTemp225) ? ((dsp->iRec89[1]) ? ((iTemp232) ? dsp->fConst4 * fTemp231 * (dsp->fConst0 * (fTemp216 * (dsp->fConst6 * fTemp233 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp216) / mydsp_faustpower3_f(fTemp209))) / fTemp209) + 0.1875f) - 0.5f * fSlow53 * fTemp235 * (fTemp234 - 1.0f) : 0.0f) : ((iTemp226) ? fSlow51 * fTemp230 * (fTemp229 - 1.0f) - dsp->fConst4 * fTemp231 * (fTemp227 * (0.375f * fTemp229 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp227) / mydsp_faustpower3_f(fTemp228))) / fTemp228 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp214) ? 0.5f * fTemp222 * fTemp238 * (fTemp221 - 1.0f) : 0.0f);
			float fRec88 = dsp->fRec87[1] + ((iTemp225) ? ((dsp->iRec89[1]) ? ((iTemp232) ? dsp->fConst4 * fTemp231 * (fTemp235 * (0.375f * fTemp235 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp235)) + 0.1875f) - dsp->fConst8 * (fSlow53 * mydsp_faustpower2_f(fTemp216) / mydsp_faustpower2_f(fTemp209)) : 0.0f) : ((iTemp226) ? fSlow51 * mydsp_faustpower2_f(fTemp227) / mydsp_faustpower2_f(fTemp228) - dsp->fConst4 * fTemp231 * (fTemp230 * (0.375f * fTemp230 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp230)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp214) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp217) * fTemp238 / fTemp206) : 0.0f);
			dsp->iRec89[0] = (((iTemp214 + ((dsp->iRec89[1] + iTemp232) == 2) + ((iTemp224 + (fTemp216 < fTemp212)) == 2)) > 0) ? 0 : 1);
			float fTemp239 = (0.5f * (dsp->fRec29[0] * fTemp207 + fTemp89 + dsp->fRec30[0] * (2.0f * fRec88 + -1.0f)) - dsp->fRec74[1]) * fTemp208;
			float fTemp240 = fTemp208 + 1.0f;
			float fTemp241 = fTemp208 / fTemp240;
			float fTemp242 = fTemp208 * ((dsp->fRec74[1] + (fTemp239 - 0.21521576f * fTemp91 * dsp->fRec75[1] * (fTemp241 + -1.0f) - dsp->fRec73[1]) / fTemp240) / (1.0f - 0.21521576f * (fTemp91 * fTemp208 * (1.0f - fTemp241) / fTemp240)) - dsp->fRec75[1]) / fTemp240;
			float fTemp243 = dsp->fRec75[1] + fTemp242;
			float fRec72 = fTemp243;
			dsp->fRec73[0] = dsp->fRec73[1] + 2.0f * (fTemp208 * (0.21521576f * fTemp91 * fTemp243 - dsp->fRec73[1]) / fTemp240);
			dsp->fRec74[0] = dsp->fRec74[1] + 2.0f * (fTemp239 / fTemp240);
			dsp->fRec75[0] = dsp->fRec75[1] + 2.0f * fTemp242;
			int iTemp244 = dsp->iRec90[1] == 0;
			int iTemp245 = dsp->iRec90[1] == 1;
			float fTemp246 = ((iTemp9) ? 0.0f : dsp->fRec91[1]);
			dsp->iRec90[0] = ((iSlow70) ? ((iTemp244) ? 1 : ((iTemp245) ? ((fTemp246 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp247 = ((dsp->iRec90[1] == 2) ? fSlow56 : 0.0f);
			dsp->fRec92[0] = fTemp181 * dsp->fRec92[1] + fTemp182 * ((iTemp9) ? 1.0f : fTemp246);
			float fTemp248 = ((iTemp244) ? dsp->fRec92[0] : 1.0f);
			float fTemp249 = ((fTemp247 == fTemp248) ? 0.5f : (fTemp246 - fTemp247) / (fTemp248 - fTemp247));
			dsp->fRec91[0] = fmaxf(fTemp247, fminf(1.0f, fTemp246 + 0.25f * (((iTemp244) ? -(fSlow59 * dsp->fRec92[0]) : ((iTemp245) ? fSlow58 : fSlow57)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp249 + -1.0f) + (1.0f - fTemp249)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec91[0]);
			float fTemp250 = 0.12f * (fRec0 * dsp->fRec49[0] + fRec51 * dsp->fRec70[0] + fRec72 * dsp->fRec91[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp250);
			output1[i0] = (FAUSTFLOAT)(fTemp250);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec6[1] = dsp->iRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->iRec12[1] = dsp->iRec12[0];
			dsp->iRec10[1] = dsp->iRec10[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->iRec20[1] = dsp->iRec20[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->iRec36[1] = dsp->iRec36[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec48[1] = dsp->iRec48[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->iRec55[1] = dsp->iRec55[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->iRec62[1] = dsp->iRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->iRec68[1] = dsp->iRec68[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->iRec69[1] = dsp->iRec69[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->iRec76[1] = dsp->iRec76[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->iRec83[1] = dsp->iRec83[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->iRec89[1] = dsp->iRec89[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->iRec90[1] = dsp->iRec90[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec91[1] = dsp->fRec91[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
