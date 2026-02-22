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
	float fConst2;
	FAUSTFLOAT fHslider0;
	float fConst3;
	float fRec4[2];
	FAUSTFLOAT fHslider1;
	float fRec5[2];
	int iRec6[2];
	FAUSTFLOAT fHslider2;
	float fRec7[2];
	FAUSTFLOAT fHslider3;
	float fConst4;
	FAUSTFLOAT fHslider4;
	float fRec9[2];
	float fRec8[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fButton0;
	int iRec12[2];
	int iRec10[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	int iVec1[2];
	float fRec13[2];
	float fRec11[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider9;
	float fRec14[2];
	FAUSTFLOAT fHslider10;
	float fRec15[2];
	float fConst5;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	float fRec21[2];
	FAUSTFLOAT fHslider13;
	float fRec22[2];
	FAUSTFLOAT fHslider14;
	float fRec23[2];
	float fConst6;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	float fRec24[2];
	FAUSTFLOAT fHslider17;
	float fRec25[2];
	FAUSTFLOAT fHslider18;
	float fRec26[2];
	FAUSTFLOAT fHslider19;
	float fRec27[2];
	float fRec16[2];
	float fRec17[2];
	float fConst7;
	float fConst9;
	float fConst10;
	float fRec18[2];
	int iRec19[2];
	float fConst12;
	FAUSTFLOAT fHslider20;
	float fRec28[2];
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	float fRec35[2];
	FAUSTFLOAT fHslider24;
	float fRec36[2];
	FAUSTFLOAT fHslider25;
	float fRec37[2];
	FAUSTFLOAT fHslider26;
	float fRec38[2];
	FAUSTFLOAT fHslider27;
	float fRec39[2];
	float fConst13;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	float fRec40[2];
	FAUSTFLOAT fHslider30;
	float fRec41[2];
	FAUSTFLOAT fHslider31;
	float fRec42[2];
	FAUSTFLOAT fHslider32;
	float fRec43[2];
	FAUSTFLOAT fHslider33;
	float fRec44[2];
	float fRec29[2];
	FAUSTFLOAT fHslider34;
	float fRec30[2];
	float fRec31[2];
	float fConst14;
	float fConst15;
	float fRec32[2];
	int iRec33[2];
	float fConst16;
	FAUSTFLOAT fHslider35;
	float fRec45[2];
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
	FAUSTFLOAT fButton1;
	int iRec55[2];
	int iVec2[2];
	float fRec57[2];
	float fRec56[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec58[2];
	float fRec59[2];
	float fRec60[2];
	int iRec61[2];
	float fRec63[2];
	float fRec64[2];
	float fRec65[2];
	float fRec66[2];
	int iRec67[2];
	float fRec52[2];
	float fRec53[2];
	float fRec54[2];
	int iRec69[2];
	float fRec71[2];
	float fRec70[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fButton2;
	int iRec76[2];
	int iVec3[2];
	float fRec78[2];
	float fRec77[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider43;
	float fRec79[2];
	float fRec80[2];
	float fRec81[2];
	int iRec82[2];
	float fRec84[2];
	float fRec85[2];
	float fRec86[2];
	float fRec87[2];
	int iRec88[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.5f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider22 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider23 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider24 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider25 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider26 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider37 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider38 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.001f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(4e+01f);
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
			dsp->fRec16[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec17[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec18[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->iRec19[l24] = 0;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec28[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec35[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec36[l27] = 0.0f;
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
			dsp->fRec29[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec30[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec31[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec32[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->iRec33[l40] = 0;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec45[l41] = 0.0f;
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
			dsp->iRec61[l57] = 0;
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
			dsp->iRec67[l62] = 0;
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
			dsp->iRec82[l76] = 0;
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
			dsp->iRec88[l81] = 0;
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
	dsp->fConst5 = 4.4e+02f / dsp->fConst0;
	dsp->fConst6 = 8.8e+02f / dsp->fConst0;
	dsp->fConst7 = 1.9369834e-06f * dsp->fConst0;
	float fConst8 = mydsp_faustpower3_f(dsp->fConst0);
	dsp->fConst9 = 1.6675133e-12f * fConst8;
	dsp->fConst10 = 0.0022727272f * dsp->fConst0;
	float fConst11 = mydsp_faustpower2_f(dsp->fConst0);
	dsp->fConst12 = 2.5826446e-06f * fConst11;
	dsp->fConst13 = 2.0f / dsp->fConst0;
	dsp->fConst14 = 0.375f * dsp->fConst0;
	dsp->fConst15 = 0.0625f * fConst8;
	dsp->fConst16 = 0.5f * fConst11;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider7, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider6, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider5, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "mod", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider8, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider0, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider37, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "mod", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider4, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "sel", "23");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider3, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider16, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider11, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider43, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "alt", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider20, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "alt", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider32, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "sel", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "alt-sel", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider21, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider18, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)1e+02f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "sel", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst2 * (float)(dsp->fHslider0);
	float fSlow1 = dsp->fConst2 * (float)(dsp->fHslider1);
	float fSlow2 = dsp->fConst2 * (float)(dsp->fHslider2);
	float fSlow3 = (float)(dsp->fHslider3);
	int iSlow4 = fSlow3 >= 2.0f;
	int iSlow5 = fSlow3 >= 1.0f;
	float fSlow6 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow7 = (float)(dsp->fButton0);
	int iSlow8 = fSlow7 > 0.0f;
	float fSlow9 = (float)(dsp->fHslider5);
	float fSlow10 = (fSlow9 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider6)) + 0.001f));
	float fSlow11 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider8)) + 0.001f));
	int iSlow13 = fSlow7 == 0.0f;
	int iSlow14 = iSlow13 > 0;
	float fSlow15 = dsp->fConst2 * (float)(dsp->fHslider9);
	float fSlow16 = dsp->fConst2 * (float)(dsp->fHslider10);
	float fSlow17 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider11) + -69.0f));
	float fSlow18 = dsp->fConst5 * fSlow17;
	float fSlow19 = dsp->fConst2 * (float)(dsp->fHslider12);
	float fSlow20 = dsp->fConst2 * (float)(dsp->fHslider13);
	float fSlow21 = dsp->fConst2 * (float)(dsp->fHslider14);
	float fSlow22 = dsp->fConst6 * fSlow17;
	float fSlow23 = (float)(dsp->fHslider15);
	int iSlow24 = fSlow23 >= 2.0f;
	int iSlow25 = fSlow23 >= 1.0f;
	float fSlow26 = dsp->fConst2 * (float)(dsp->fHslider16);
	float fSlow27 = dsp->fConst2 * (float)(dsp->fHslider17);
	float fSlow28 = dsp->fConst2 * (float)(dsp->fHslider18);
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider19);
	float fSlow30 = (float)(((iSlow24) ? 0 : ((iSlow25) ? 1 : 0)));
	float fSlow31 = fmaxf(fSlow30 + -0.5f, 0.0f);
	float fSlow32 = fmaxf(1.0f - 2.0f * fSlow30, 0.0f);
	float fSlow33 = dsp->fConst0 / fSlow17;
	float fSlow34 = dsp->fConst7 / fSlow17;
	float fSlow35 = dsp->fConst9 / mydsp_faustpower3_f(fSlow17);
	float fSlow36 = 1.0f - fSlow32;
	float fSlow37 = dsp->fConst10 / fSlow17;
	float fSlow38 = dsp->fConst12 / mydsp_faustpower2_f(fSlow17);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider20);
	int iSlow40 = (float)(dsp->fHslider21) >= 1.0f;
	float fSlow41 = (float)(dsp->fHslider22);
	float fSlow42 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow43 = 4.4e+02f * fSlow17;
	float fSlow44 = dsp->fConst2 * (float)(dsp->fHslider24);
	float fSlow45 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider27);
	int iSlow48 = (float)(dsp->fHslider28) >= 1.0f;
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow52 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow53 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow54 = (float)(dsp->fHslider34);
	float fSlow55 = 0.0022727272f / fSlow17;
	float fSlow56 = (float)(((iSlow48) ? 1 : 0));
	float fSlow57 = fmaxf(fSlow56 + -0.5f, 0.0f);
	float fSlow58 = fmaxf(1.0f - 2.0f * fSlow56, 0.0f);
	float fSlow59 = 1.0f - fSlow58;
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow63 = (float)(dsp->fHslider38);
	float fSlow64 = (fSlow63 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow65 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow66 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider41)) + 0.001f));
	float fSlow67 = (float)(dsp->fButton1);
	int iSlow68 = fSlow67 > 0.0f;
	int iSlow69 = fSlow67 == 0.0f;
	int iSlow70 = iSlow69 > 0;
	float fSlow71 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow72 = dsp->fConst5 * fSlow71;
	float fSlow73 = dsp->fConst6 * fSlow71;
	float fSlow74 = dsp->fConst0 / fSlow71;
	float fSlow75 = dsp->fConst7 / fSlow71;
	float fSlow76 = dsp->fConst9 / mydsp_faustpower3_f(fSlow71);
	float fSlow77 = dsp->fConst10 / fSlow71;
	float fSlow78 = dsp->fConst12 / mydsp_faustpower2_f(fSlow71);
	float fSlow79 = 4.4e+02f * fSlow71;
	float fSlow80 = 0.0022727272f / fSlow71;
	float fSlow81 = (float)(dsp->fButton2);
	int iSlow82 = fSlow81 > 0.0f;
	int iSlow83 = fSlow81 == 0.0f;
	int iSlow84 = iSlow83 > 0;
	float fSlow85 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider43) + -69.0f));
	float fSlow86 = dsp->fConst5 * fSlow85;
	float fSlow87 = dsp->fConst6 * fSlow85;
	float fSlow88 = dsp->fConst0 / fSlow85;
	float fSlow89 = dsp->fConst7 / fSlow85;
	float fSlow90 = dsp->fConst9 / mydsp_faustpower3_f(fSlow85);
	float fSlow91 = dsp->fConst10 / fSlow85;
	float fSlow92 = dsp->fConst12 / mydsp_faustpower2_f(fSlow85);
	float fSlow93 = 4.4e+02f * fSlow85;
	float fSlow94 = 0.0022727272f / fSlow85;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow0 + dsp->fConst3 * dsp->fRec4[1];
			dsp->fRec5[0] = fSlow1 + dsp->fConst3 * dsp->fRec5[1];
			dsp->iRec6[0] = 1103515245 * dsp->iRec6[1] + 12345;
			float fTemp0 = (float)(dsp->iRec6[0]);
			float fTemp1 = 1.1175871e-06f * mydsp_faustpower2_f(dsp->fRec5[0]) * fTemp0;
			dsp->fRec7[0] = fSlow2 + dsp->fConst3 * dsp->fRec7[1];
			dsp->fRec9[0] = fSlow6 + dsp->fConst3 * dsp->fRec9[1];
			float fTemp2 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec8[1] + dsp->fConst4 * dsp->fRec9[0]);
			dsp->fRec8[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = 2.0f * dsp->fRec8[0] + -1.0f;
			float fTemp4 = ((iSlow4) ? 2.0f * (1.0f - fabsf(fTemp3)) + -1.0f : ((iSlow5) ? 2.0f * (float)(dsp->fRec8[0] <= 0.5f) + -1.0f : fTemp3));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = mydsp_faustpower2_f(dsp->fRec7[0]) * fTemp5;
			int iTemp7 = dsp->iRec10[1] == 0;
			int iTemp8 = dsp->iRec10[1] == 1;
			dsp->iRec12[0] = dsp->iRec12[1] + 1;
			int iTemp9 = (dsp->iRec12[0] + -1) == 0;
			float fTemp10 = ((iTemp9) ? 0.0f : dsp->fRec11[1]);
			dsp->iRec10[0] = ((iSlow8) ? ((iTemp7) ? 1 : ((iTemp8) ? ((fTemp10 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp11 = ((dsp->iRec10[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec1[0] = iSlow13;
			int iTemp12 = (dsp->iVec1[1] <= 0) & iSlow14;
			float fTemp13 = (float)(1 - iTemp12);
			float fTemp14 = (float)(iTemp12);
			dsp->fRec13[0] = dsp->fRec13[1] * fTemp13 + ((iTemp9) ? 1.0f : fTemp10) * fTemp14;
			float fTemp15 = ((iTemp7) ? dsp->fRec13[0] : 1.0f);
			float fTemp16 = ((fTemp11 == fTemp15) ? 0.5f : (fTemp10 - fTemp11) / (fTemp15 - fTemp11));
			dsp->fRec11[0] = fmaxf(fTemp11, fminf(1.0f, fTemp10 + 0.25f * (((iTemp7) ? -(fSlow12 * dsp->fRec13[0]) : ((iTemp8) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp16 + -1.0f) + (1.0f - fTemp16)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec11[0]);
			float fTemp17 = dsp->fRec11[0];
			dsp->fRec14[0] = fSlow15 + dsp->fConst3 * dsp->fRec14[1];
			float fTemp18 = mydsp_faustpower2_f(dsp->fRec14[0]);
			dsp->fRec15[0] = fSlow16 + dsp->fConst3 * dsp->fRec15[1];
			float fTemp19 = mydsp_faustpower2_f(dsp->fRec15[0]);
			dsp->fRec21[0] = fSlow19 + dsp->fConst3 * dsp->fRec21[1];
			float fTemp20 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec21[0]) * fTemp5;
			dsp->fRec22[0] = fSlow20 + dsp->fConst3 * dsp->fRec22[1];
			float fTemp21 = mydsp_faustpower2_f(dsp->fRec22[0]);
			dsp->fRec23[0] = fSlow21 + dsp->fConst3 * dsp->fRec23[1];
			float fTemp22 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec23[0]) * fTemp0;
			float fTemp23 = powf(2.0f, 0.00083333335f * (fTemp20 + 1.2e+03f * fTemp17 * fTemp21 + fTemp22));
			float fTemp24 = fSlow18 * fTemp23;
			float fTemp25 = fSlow22 * fTemp23;
			dsp->fRec24[0] = fSlow26 + dsp->fConst3 * dsp->fRec24[1];
			float fTemp26 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec24[0]) * fTemp0;
			dsp->fRec25[0] = fSlow27 + dsp->fConst3 * dsp->fRec25[1];
			float fTemp27 = mydsp_faustpower2_f(dsp->fRec25[0]);
			dsp->fRec26[0] = fSlow28 + dsp->fConst3 * dsp->fRec26[1];
			dsp->fRec27[0] = fSlow29 + dsp->fConst3 * dsp->fRec27[1];
			float fTemp28 = dsp->fRec26[0] + mydsp_faustpower2_f(dsp->fRec27[0]) * fTemp5;
			float fTemp29 = ((fTemp24 >= 0.25f) ? 0.5f : fmaxf(fTemp25, fminf(1.0f - fTemp25, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp26 + fTemp17 * fTemp27 + fTemp28 : 1.0f)))));
			dsp->fRec16[0] = fTemp29;
			float fTemp30 = fTemp24 + dsp->fRec17[1];
			float fTemp31 = fmodf(fTemp30, 1.0f);
			dsp->fRec17[0] = fTemp31;
			int iTemp32 = fTemp31 < fTemp29;
			float fTemp33 = fTemp31 - fTemp29;
			float fTemp34 = 1.0f - fTemp29;
			int iTemp35 = fTemp31 >= fTemp29;
			float fTemp36 = fTemp24 + dsp->fRec16[1] - fTemp29;
			float fTemp37 = fTemp33 / fTemp36;
			float fTemp38 = 1.0f - fTemp37;
			float fTemp39 = fTemp23 * fSlow32 * (1.0f / fTemp34 + 1.0f / fTemp29);
			int iTemp40 = fTemp30 >= 1.0f;
			float fTemp41 = fTemp31 / fTemp23;
			float fTemp42 = fSlow37 * fTemp41;
			float fTemp43 = 1.0f - fTemp42;
			dsp->fRec18[0] = fTemp31 + 2.0f * (((iTemp32) ? 0.0f : 1.0f) - fTemp31) * fSlow31 + (((iTemp32) ? fTemp31 / fTemp29 : 1.0f - fTemp33 / fTemp34) - fTemp31) * fSlow32 + ((dsp->iRec19[1]) ? ((iTemp40) ? fSlow18 * fTemp39 * (fSlow33 * (fTemp31 * (fSlow34 * fTemp41 + -0.0011363636f - fSlow35 * (mydsp_faustpower3_f(fTemp31) / mydsp_faustpower3_f(fTemp23))) / fTemp23) + 0.1875f) - 0.5f * fSlow36 * fTemp43 * (fTemp42 - 1.0f) : 0.0f) : ((iTemp35) ? fSlow31 * fTemp38 * (fTemp37 - 1.0f) - fSlow18 * fTemp39 * (fTemp33 * (0.375f * fTemp37 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp33) / mydsp_faustpower3_f(fTemp36))) / fTemp36 + 0.1875f) : 0.0f));
			dsp->iRec19[0] = (((((dsp->iRec19[1] + iTemp40) == 2) + ((iTemp32 + (dsp->iRec19[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp44 = mydsp_faustpower2_f(fTemp23);
			float fRec20 = dsp->fRec18[1] + ((dsp->iRec19[1]) ? ((iTemp40) ? fSlow18 * fTemp39 * (fTemp43 * (0.375f * fTemp43 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp43)) + 0.1875f) - fSlow38 * (mydsp_faustpower2_f(fTemp31) * fSlow36 / fTemp44) : 0.0f) : ((iTemp35) ? fSlow31 * mydsp_faustpower2_f(fTemp33) / mydsp_faustpower2_f(fTemp36) - fSlow18 * fTemp39 * (fTemp38 * (0.375f * fTemp38 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp38)) + 0.1875f) : 0.0f));
			float fTemp45 = 2.0f * fRec20 + -1.0f;
			float fTemp46 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec4[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp17 * fTemp18 + fTemp19 * fTemp45)))), 1.0f) + 1.0f));
			dsp->fRec28[0] = fSlow39 + dsp->fConst3 * dsp->fRec28[1];
			dsp->fRec35[0] = fSlow42 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp47 = powf(2.0f, 0.00083333335f * (fSlow41 + dsp->fRec35[0]));
			float fTemp48 = 2e+01f * fTemp47;
			float fTemp49 = ((iSlow40) ? fSlow43 * fTemp47 : fTemp48);
			dsp->fRec36[0] = fSlow44 + dsp->fConst3 * dsp->fRec36[1];
			float fTemp50 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec36[0]) * fTemp5;
			dsp->fRec37[0] = fSlow45 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp51 = mydsp_faustpower2_f(dsp->fRec37[0]);
			dsp->fRec38[0] = fSlow46 + dsp->fConst3 * dsp->fRec38[1];
			float fTemp52 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec38[0]) * fTemp0;
			dsp->fRec39[0] = fSlow47 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp53 = mydsp_faustpower2_f(dsp->fRec39[0]);
			float fTemp54 = powf(2.0f, 0.00083333335f * (fTemp50 + 1.2e+03f * fTemp17 * fTemp51 + fTemp52 + 4.8e+03f * fTemp53 * fTemp45));
			float fTemp55 = fTemp49 * fTemp54;
			float fTemp56 = dsp->fConst4 * fTemp55;
			float fTemp57 = dsp->fConst13 * fTemp55;
			dsp->fRec40[0] = fSlow49 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp58 = mydsp_faustpower2_f(dsp->fRec40[0]);
			dsp->fRec41[0] = fSlow50 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp59 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec41[0]) * fTemp0;
			dsp->fRec42[0] = fSlow51 + dsp->fConst3 * dsp->fRec42[1];
			float fTemp60 = mydsp_faustpower2_f(dsp->fRec42[0]);
			dsp->fRec43[0] = fSlow52 + dsp->fConst3 * dsp->fRec43[1];
			dsp->fRec44[0] = fSlow53 + dsp->fConst3 * dsp->fRec44[1];
			float fTemp61 = dsp->fRec43[0] + mydsp_faustpower2_f(dsp->fRec44[0]) * fTemp5;
			float fTemp62 = ((fTemp56 >= 0.25f) ? 0.5f : fmaxf(fTemp57, fminf(1.0f - fTemp57, ((iSlow48) ? fTemp58 * fTemp45 + fTemp59 + fTemp17 * fTemp60 + fTemp61 : 1.0f))));
			dsp->fRec29[0] = fTemp62;
			float fTemp63 = fTemp24 + dsp->fRec31[1];
			int iTemp64 = (fSlow54 + (float)(fTemp63 >= 1.0f)) == 2.0f;
			float fTemp65 = fTemp56 + dsp->fRec30[1];
			float fTemp66 = fmodf(fTemp65, 1.0f);
			float fTemp67 = fmodf(fTemp63, 1.0f);
			float fTemp68 = ((iTemp64) ? fSlow55 * (fTemp55 * fTemp67 / fTemp23) : fTemp66);
			dsp->fRec30[0] = fTemp68;
			dsp->fRec31[0] = fTemp67;
			int iTemp69 = fTemp68 < fTemp62;
			float fTemp70 = 1.0f - fTemp62;
			float fTemp71 = fSlow37 * (fTemp67 / fTemp23);
			float fTemp72 = 1.0f - fTemp71;
			float fTemp73 = dsp->fRec30[1] + dsp->fConst4 * fTemp55 * fTemp72;
			int iTemp74 = dsp->iRec33[1] == 0;
			int iTemp75 = ((((fTemp73 >= 1.0f) + ((iTemp74 + (fTemp73 >= fTemp62)) == 2)) > 0) + (iTemp64 == 0)) > 0;
			int iTemp76 = fTemp66 >= fTemp62;
			float fTemp77 = fTemp66 - fTemp62;
			float fTemp78 = fTemp56 + dsp->fRec29[1] - fTemp62;
			float fTemp79 = fTemp77 / fTemp78;
			float fTemp80 = 1.0f - fTemp79;
			float fTemp81 = fTemp55 * fSlow58 * (1.0f / fTemp70 + 1.0f / fTemp62);
			int iTemp82 = fTemp65 >= 1.0f;
			float fTemp83 = fTemp66 / fTemp55;
			float fTemp84 = dsp->fConst0 * fTemp83;
			float fTemp85 = 1.0f - fTemp84;
			float fTemp86 = fmodf(fTemp73, 1.0f);
			int iTemp87 = fTemp86 < fTemp62;
			float fTemp88 = fTemp86 + 2.0f * fSlow57 * (((iTemp87) ? 0.0f : 1.0f) - fTemp86) + fSlow58 * (((iTemp87) ? fTemp86 / fTemp62 : 1.0f - (fTemp86 - fTemp62) / fTemp70) - fTemp86);
			dsp->fRec32[0] = fTemp68 + 2.0f * (((iTemp69) ? 0.0f : 1.0f) - fTemp68) * fSlow57 + (((iTemp69) ? fTemp68 / fTemp62 : 1.0f - (fTemp68 - fTemp62) / fTemp70) - fTemp68) * fSlow58 + ((iTemp75) ? ((dsp->iRec33[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (dsp->fConst0 * (fTemp66 * (dsp->fConst14 * fTemp83 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp66) / (mydsp_faustpower3_f(fTemp49) * mydsp_faustpower3_f(fTemp54)))) / fTemp55) + 0.1875f) - 0.5f * fSlow59 * fTemp85 * (fTemp84 - 1.0f) : 0.0f) : ((iTemp76) ? fSlow57 * fTemp80 * (fTemp79 - 1.0f) - dsp->fConst4 * fTemp81 * (fTemp77 * (0.375f * fTemp79 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp77) / mydsp_faustpower3_f(fTemp78))) / fTemp78 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? 0.5f * fTemp72 * fTemp88 * (fTemp71 - 1.0f) : 0.0f);
			dsp->iRec33[0] = (((iTemp64 + ((dsp->iRec33[1] + iTemp82) == 2) + ((iTemp74 + (fTemp66 < fTemp62)) == 2)) > 0) ? 0 : 1);
			float fRec34 = dsp->fRec32[1] + ((iTemp75) ? ((dsp->iRec33[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (fTemp85 * (0.375f * fTemp85 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp85)) + 0.1875f) - dsp->fConst16 * (mydsp_faustpower2_f(fTemp66) * fSlow59 / (mydsp_faustpower2_f(fTemp49) * mydsp_faustpower2_f(fTemp54))) : 0.0f) : ((iTemp76) ? fSlow57 * mydsp_faustpower2_f(fTemp77) / mydsp_faustpower2_f(fTemp78) - dsp->fConst4 * fTemp81 * (fTemp80 * (0.375f * fTemp80 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp80)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? fSlow38 * (mydsp_faustpower2_f(fTemp67) * fTemp88 / fTemp44) : 0.0f);
			dsp->fRec45[0] = fSlow60 + dsp->fConst3 * dsp->fRec45[1];
			dsp->fRec46[0] = fSlow61 + dsp->fConst3 * dsp->fRec46[1];
			float fTemp89 = 4.656613e-10f * dsp->fRec46[0] * fTemp0;
			float fTemp90 = (0.5f * (dsp->fRec28[0] * (2.0f * fRec34 + -1.0f) + dsp->fRec45[0] * fTemp45 + fTemp89) - dsp->fRec2[1]) * fTemp46;
			dsp->fRec47[0] = fSlow62 + dsp->fConst3 * dsp->fRec47[1];
			float fTemp91 = dsp->fRec47[0] + -0.707f;
			float fTemp92 = fTemp46 + 1.0f;
			float fTemp93 = 1.0f - fTemp46 / fTemp92;
			float fTemp94 = fTemp46 * ((dsp->fRec2[1] + (fTemp90 + 0.21521576f * dsp->fRec3[1] * fTemp91 * fTemp93 - dsp->fRec1[1]) / fTemp92) / (1.0f - 0.21521576f * (fTemp46 * fTemp91 * fTemp93 / fTemp92)) - dsp->fRec3[1]) / fTemp92;
			float fTemp95 = dsp->fRec3[1] + fTemp94;
			float fRec0 = fTemp95;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp46 * (0.21521576f * fTemp91 * fTemp95 - dsp->fRec1[1]) / fTemp92);
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp90 / fTemp92);
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp94;
			int iTemp96 = dsp->iRec48[1] == 0;
			int iTemp97 = dsp->iRec48[1] == 1;
			float fTemp98 = ((iTemp9) ? 0.0f : dsp->fRec49[1]);
			dsp->iRec48[0] = ((iSlow8) ? ((iTemp96) ? 1 : ((iTemp97) ? ((fTemp98 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp99 = ((dsp->iRec48[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec50[0] = fTemp13 * dsp->fRec50[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp98);
			float fTemp100 = ((iTemp96) ? dsp->fRec50[0] : 1.0f);
			float fTemp101 = ((fTemp99 == fTemp100) ? 0.5f : (fTemp98 - fTemp99) / (fTemp100 - fTemp99));
			dsp->fRec49[0] = fmaxf(fTemp99, fminf(1.0f, fTemp98 + 0.25f * (((iTemp96) ? -(fSlow66 * dsp->fRec50[0]) : ((iTemp97) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp101 + -1.0f) + (1.0f - fTemp101)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec49[0]);
			int iTemp102 = dsp->iRec55[1] == 0;
			int iTemp103 = dsp->iRec55[1] == 1;
			float fTemp104 = ((iTemp9) ? 0.0f : dsp->fRec56[1]);
			dsp->iRec55[0] = ((iSlow68) ? ((iTemp102) ? 1 : ((iTemp103) ? ((fTemp104 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp105 = ((dsp->iRec55[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec2[0] = iSlow69;
			int iTemp106 = (dsp->iVec2[1] <= 0) & iSlow70;
			float fTemp107 = (float)(1 - iTemp106);
			float fTemp108 = (float)(iTemp106);
			dsp->fRec57[0] = dsp->fRec57[1] * fTemp107 + ((iTemp9) ? 1.0f : fTemp104) * fTemp108;
			float fTemp109 = ((iTemp102) ? dsp->fRec57[0] : 1.0f);
			float fTemp110 = ((fTemp105 == fTemp109) ? 0.5f : (fTemp104 - fTemp105) / (fTemp109 - fTemp105));
			dsp->fRec56[0] = fmaxf(fTemp105, fminf(1.0f, fTemp104 + 0.25f * (((iTemp102) ? -(fSlow12 * dsp->fRec57[0]) : ((iTemp103) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp110 + -1.0f) + (1.0f - fTemp110)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec56[0]);
			float fTemp111 = dsp->fRec56[0];
			float fTemp112 = fTemp20 + fTemp22;
			float fTemp113 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp21 * fTemp111 + fTemp112));
			float fTemp114 = fSlow72 * fTemp113;
			float fTemp115 = fSlow73 * fTemp113;
			float fTemp116 = fTemp26 + fTemp28;
			float fTemp117 = ((fTemp114 >= 0.25f) ? 0.5f : fmaxf(fTemp115, fminf(1.0f - fTemp115, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp27 * fTemp111 + fTemp116 : 1.0f)))));
			dsp->fRec58[0] = fTemp117;
			float fTemp118 = fTemp114 + dsp->fRec59[1];
			float fTemp119 = fmodf(fTemp118, 1.0f);
			dsp->fRec59[0] = fTemp119;
			int iTemp120 = fTemp119 < fTemp117;
			float fTemp121 = fTemp119 - fTemp117;
			float fTemp122 = 1.0f - fTemp117;
			int iTemp123 = fTemp119 >= fTemp117;
			float fTemp124 = fTemp114 + dsp->fRec58[1] - fTemp117;
			float fTemp125 = fTemp121 / fTemp124;
			float fTemp126 = 1.0f - fTemp125;
			float fTemp127 = fSlow32 * fTemp113 * (1.0f / fTemp122 + 1.0f / fTemp117);
			int iTemp128 = fTemp118 >= 1.0f;
			float fTemp129 = fTemp119 / fTemp113;
			float fTemp130 = fSlow77 * fTemp129;
			float fTemp131 = 1.0f - fTemp130;
			dsp->fRec60[0] = fTemp119 + 2.0f * fSlow31 * (((iTemp120) ? 0.0f : 1.0f) - fTemp119) + fSlow32 * (((iTemp120) ? fTemp119 / fTemp117 : 1.0f - fTemp121 / fTemp122) - fTemp119) + ((dsp->iRec61[1]) ? ((iTemp128) ? fSlow72 * fTemp127 * (fSlow74 * (fTemp119 * (fSlow75 * fTemp129 + -0.0011363636f - fSlow76 * (mydsp_faustpower3_f(fTemp119) / mydsp_faustpower3_f(fTemp113))) / fTemp113) + 0.1875f) - 0.5f * fSlow36 * fTemp131 * (fTemp130 - 1.0f) : 0.0f) : ((iTemp123) ? fSlow31 * fTemp126 * (fTemp125 - 1.0f) - fSlow72 * fTemp127 * (fTemp121 * (0.375f * fTemp125 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp121) / mydsp_faustpower3_f(fTemp124))) / fTemp124 + 0.1875f) : 0.0f));
			dsp->iRec61[0] = (((((dsp->iRec61[1] + iTemp128) == 2) + ((iTemp120 + (dsp->iRec61[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp132 = mydsp_faustpower2_f(fTemp113);
			float fRec62 = dsp->fRec60[1] + ((dsp->iRec61[1]) ? ((iTemp128) ? fSlow72 * fTemp127 * (fTemp131 * (0.375f * fTemp131 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp131)) + 0.1875f) - fSlow78 * (fSlow36 * mydsp_faustpower2_f(fTemp119) / fTemp132) : 0.0f) : ((iTemp123) ? fSlow31 * mydsp_faustpower2_f(fTemp121) / mydsp_faustpower2_f(fTemp124) - fSlow72 * fTemp127 * (fTemp126 * (0.375f * fTemp126 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp126)) + 0.1875f) : 0.0f));
			float fTemp133 = 2.0f * fRec62 + -1.0f;
			float fTemp134 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec4[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp111 + fTemp19 * fTemp133)))), 1.0f) + 1.0f));
			float fTemp135 = ((iSlow40) ? fSlow79 * fTemp47 : fTemp48);
			float fTemp136 = fTemp50 + fTemp52;
			float fTemp137 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp51 * fTemp111 + fTemp136 + 4.8e+03f * fTemp53 * fTemp133));
			float fTemp138 = fTemp135 * fTemp137;
			float fTemp139 = dsp->fConst4 * fTemp138;
			float fTemp140 = dsp->fConst13 * fTemp138;
			float fTemp141 = fTemp59 + fTemp61;
			float fTemp142 = ((fTemp139 >= 0.25f) ? 0.5f : fmaxf(fTemp140, fminf(1.0f - fTemp140, ((iSlow48) ? fTemp58 * fTemp133 + fTemp60 * fTemp111 + fTemp141 : 1.0f))));
			dsp->fRec63[0] = fTemp142;
			float fTemp143 = fTemp114 + dsp->fRec65[1];
			int iTemp144 = (fSlow54 + (float)(fTemp143 >= 1.0f)) == 2.0f;
			float fTemp145 = fTemp139 + dsp->fRec64[1];
			float fTemp146 = fmodf(fTemp145, 1.0f);
			float fTemp147 = fmodf(fTemp143, 1.0f);
			float fTemp148 = ((iTemp144) ? fSlow80 * (fTemp138 * fTemp147 / fTemp113) : fTemp146);
			dsp->fRec64[0] = fTemp148;
			dsp->fRec65[0] = fTemp147;
			int iTemp149 = fTemp148 < fTemp142;
			float fTemp150 = 1.0f - fTemp142;
			float fTemp151 = fSlow77 * (fTemp147 / fTemp113);
			float fTemp152 = 1.0f - fTemp151;
			float fTemp153 = dsp->fRec64[1] + dsp->fConst4 * fTemp138 * fTemp152;
			int iTemp154 = dsp->iRec67[1] == 0;
			int iTemp155 = ((((fTemp153 >= 1.0f) + ((iTemp154 + (fTemp153 >= fTemp142)) == 2)) > 0) + (iTemp144 == 0)) > 0;
			int iTemp156 = fTemp146 >= fTemp142;
			float fTemp157 = fTemp146 - fTemp142;
			float fTemp158 = fTemp139 + dsp->fRec63[1] - fTemp142;
			float fTemp159 = fTemp157 / fTemp158;
			float fTemp160 = 1.0f - fTemp159;
			float fTemp161 = fSlow58 * fTemp135 * fTemp137 * (1.0f / fTemp150 + 1.0f / fTemp142);
			int iTemp162 = fTemp145 >= 1.0f;
			float fTemp163 = fTemp146 / fTemp138;
			float fTemp164 = dsp->fConst0 * fTemp163;
			float fTemp165 = 1.0f - fTemp164;
			float fTemp166 = fmodf(fTemp153, 1.0f);
			int iTemp167 = fTemp166 < fTemp142;
			float fTemp168 = fTemp166 + 2.0f * fSlow57 * (((iTemp167) ? 0.0f : 1.0f) - fTemp166) + fSlow58 * (((iTemp167) ? fTemp166 / fTemp142 : 1.0f - (fTemp166 - fTemp142) / fTemp150) - fTemp166);
			dsp->fRec66[0] = fTemp148 + 2.0f * fSlow57 * (((iTemp149) ? 0.0f : 1.0f) - fTemp148) + fSlow58 * (((iTemp149) ? fTemp148 / fTemp142 : 1.0f - (fTemp148 - fTemp142) / fTemp150) - fTemp148) + ((iTemp155) ? ((dsp->iRec67[1]) ? ((iTemp162) ? dsp->fConst4 * fTemp161 * (dsp->fConst0 * (fTemp146 * (dsp->fConst14 * fTemp163 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp146) / (mydsp_faustpower3_f(fTemp135) * mydsp_faustpower3_f(fTemp137)))) / fTemp138) + 0.1875f) - 0.5f * fSlow59 * fTemp165 * (fTemp164 - 1.0f) : 0.0f) : ((iTemp156) ? fSlow57 * fTemp160 * (fTemp159 - 1.0f) - dsp->fConst4 * fTemp161 * (fTemp157 * (0.375f * fTemp159 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp157) / mydsp_faustpower3_f(fTemp158))) / fTemp158 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp144) ? 0.5f * fTemp152 * fTemp168 * (fTemp151 - 1.0f) : 0.0f);
			dsp->iRec67[0] = (((iTemp144 + ((dsp->iRec67[1] + iTemp162) == 2) + ((iTemp154 + (fTemp146 < fTemp142)) == 2)) > 0) ? 0 : 1);
			float fRec68 = dsp->fRec66[1] + ((iTemp155) ? ((dsp->iRec67[1]) ? ((iTemp162) ? dsp->fConst4 * fTemp161 * (fTemp165 * (0.375f * fTemp165 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp165)) + 0.1875f) - dsp->fConst16 * (fSlow59 * mydsp_faustpower2_f(fTemp146) / (mydsp_faustpower2_f(fTemp135) * mydsp_faustpower2_f(fTemp137))) : 0.0f) : ((iTemp156) ? fSlow57 * mydsp_faustpower2_f(fTemp157) / mydsp_faustpower2_f(fTemp158) - dsp->fConst4 * fTemp161 * (fTemp160 * (0.375f * fTemp160 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp160)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp144) ? fSlow78 * (mydsp_faustpower2_f(fTemp147) * fTemp168 / fTemp132) : 0.0f);
			float fTemp169 = (0.5f * (fTemp89 + dsp->fRec28[0] * (2.0f * fRec68 + -1.0f) + dsp->fRec45[0] * fTemp133) - dsp->fRec53[1]) * fTemp134;
			float fTemp170 = fTemp134 + 1.0f;
			float fTemp171 = fTemp134 / fTemp170;
			float fTemp172 = fTemp134 * ((dsp->fRec53[1] + (fTemp169 - 0.21521576f * fTemp91 * dsp->fRec54[1] * (fTemp171 + -1.0f) - dsp->fRec52[1]) / fTemp170) / (1.0f - 0.21521576f * (fTemp91 * fTemp134 * (1.0f - fTemp171) / fTemp170)) - dsp->fRec54[1]) / fTemp170;
			float fTemp173 = dsp->fRec54[1] + fTemp172;
			float fRec51 = fTemp173;
			dsp->fRec52[0] = dsp->fRec52[1] + 2.0f * (fTemp134 * (0.21521576f * fTemp91 * fTemp173 - dsp->fRec52[1]) / fTemp170);
			dsp->fRec53[0] = dsp->fRec53[1] + 2.0f * (fTemp169 / fTemp170);
			dsp->fRec54[0] = dsp->fRec54[1] + 2.0f * fTemp172;
			int iTemp174 = dsp->iRec69[1] == 0;
			int iTemp175 = dsp->iRec69[1] == 1;
			float fTemp176 = ((iTemp9) ? 0.0f : dsp->fRec70[1]);
			dsp->iRec69[0] = ((iSlow68) ? ((iTemp174) ? 1 : ((iTemp175) ? ((fTemp176 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp177 = ((dsp->iRec69[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec71[0] = fTemp107 * dsp->fRec71[1] + fTemp108 * ((iTemp9) ? 1.0f : fTemp176);
			float fTemp178 = ((iTemp174) ? dsp->fRec71[0] : 1.0f);
			float fTemp179 = ((fTemp177 == fTemp178) ? 0.5f : (fTemp176 - fTemp177) / (fTemp178 - fTemp177));
			dsp->fRec70[0] = fmaxf(fTemp177, fminf(1.0f, fTemp176 + 0.25f * (((iTemp174) ? -(fSlow66 * dsp->fRec71[0]) : ((iTemp175) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp179 + -1.0f) + (1.0f - fTemp179)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec70[0]);
			int iTemp180 = dsp->iRec76[1] == 0;
			int iTemp181 = dsp->iRec76[1] == 1;
			float fTemp182 = ((iTemp9) ? 0.0f : dsp->fRec77[1]);
			dsp->iRec76[0] = ((iSlow82) ? ((iTemp180) ? 1 : ((iTemp181) ? ((fTemp182 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp183 = ((dsp->iRec76[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec3[0] = iSlow83;
			int iTemp184 = (dsp->iVec3[1] <= 0) & iSlow84;
			float fTemp185 = (float)(1 - iTemp184);
			float fTemp186 = (float)(iTemp184);
			dsp->fRec78[0] = dsp->fRec78[1] * fTemp185 + ((iTemp9) ? 1.0f : fTemp182) * fTemp186;
			float fTemp187 = ((iTemp180) ? dsp->fRec78[0] : 1.0f);
			float fTemp188 = ((fTemp183 == fTemp187) ? 0.5f : (fTemp182 - fTemp183) / (fTemp187 - fTemp183));
			dsp->fRec77[0] = fmaxf(fTemp183, fminf(1.0f, fTemp182 + 0.25f * (((iTemp180) ? -(fSlow12 * dsp->fRec78[0]) : ((iTemp181) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp188 + -1.0f) + (1.0f - fTemp188)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec77[0]);
			float fTemp189 = dsp->fRec77[0];
			float fTemp190 = powf(2.0f, 0.00083333335f * (fTemp112 + 1.2e+03f * fTemp21 * fTemp189));
			float fTemp191 = fSlow86 * fTemp190;
			float fTemp192 = fSlow87 * fTemp190;
			float fTemp193 = ((fTemp191 >= 0.25f) ? 0.5f : fmaxf(fTemp192, fminf(1.0f - fTemp192, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp116 + fTemp27 * fTemp189 : 1.0f)))));
			dsp->fRec79[0] = fTemp193;
			float fTemp194 = fTemp191 + dsp->fRec80[1];
			float fTemp195 = fmodf(fTemp194, 1.0f);
			dsp->fRec80[0] = fTemp195;
			int iTemp196 = fTemp195 < fTemp193;
			float fTemp197 = fTemp195 - fTemp193;
			float fTemp198 = 1.0f - fTemp193;
			int iTemp199 = fTemp195 >= fTemp193;
			float fTemp200 = fTemp191 + dsp->fRec79[1] - fTemp193;
			float fTemp201 = fTemp197 / fTemp200;
			float fTemp202 = 1.0f - fTemp201;
			float fTemp203 = fSlow32 * fTemp190 * (1.0f / fTemp198 + 1.0f / fTemp193);
			int iTemp204 = fTemp194 >= 1.0f;
			float fTemp205 = fTemp195 / fTemp190;
			float fTemp206 = fSlow91 * fTemp205;
			float fTemp207 = 1.0f - fTemp206;
			dsp->fRec81[0] = fTemp195 + 2.0f * fSlow31 * (((iTemp196) ? 0.0f : 1.0f) - fTemp195) + fSlow32 * (((iTemp196) ? fTemp195 / fTemp193 : 1.0f - fTemp197 / fTemp198) - fTemp195) + ((dsp->iRec82[1]) ? ((iTemp204) ? fSlow86 * fTemp203 * (fSlow88 * (fTemp195 * (fSlow89 * fTemp205 + -0.0011363636f - fSlow90 * (mydsp_faustpower3_f(fTemp195) / mydsp_faustpower3_f(fTemp190))) / fTemp190) + 0.1875f) - 0.5f * fSlow36 * fTemp207 * (fTemp206 - 1.0f) : 0.0f) : ((iTemp199) ? fSlow31 * fTemp202 * (fTemp201 - 1.0f) - fSlow86 * fTemp203 * (fTemp197 * (0.375f * fTemp201 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp197) / mydsp_faustpower3_f(fTemp200))) / fTemp200 + 0.1875f) : 0.0f));
			dsp->iRec82[0] = (((((dsp->iRec82[1] + iTemp204) == 2) + ((iTemp196 + (dsp->iRec82[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp208 = mydsp_faustpower2_f(fTemp190);
			float fRec83 = dsp->fRec81[1] + ((dsp->iRec82[1]) ? ((iTemp204) ? fSlow86 * fTemp203 * (fTemp207 * (0.375f * fTemp207 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp207)) + 0.1875f) - fSlow92 * (fSlow36 * mydsp_faustpower2_f(fTemp195) / fTemp208) : 0.0f) : ((iTemp199) ? fSlow31 * mydsp_faustpower2_f(fTemp197) / mydsp_faustpower2_f(fTemp200) - fSlow86 * fTemp203 * (fTemp202 * (0.375f * fTemp202 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp202)) + 0.1875f) : 0.0f));
			float fTemp209 = 2.0f * fRec83 + -1.0f;
			float fTemp210 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec4[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp189 + fTemp19 * fTemp209)))), 1.0f) + 1.0f));
			float fTemp211 = ((iSlow40) ? fSlow93 * fTemp47 : fTemp48);
			float fTemp212 = powf(2.0f, 0.00083333335f * (fTemp136 + 1.2e+03f * fTemp51 * fTemp189 + 4.8e+03f * fTemp53 * fTemp209));
			float fTemp213 = fTemp211 * fTemp212;
			float fTemp214 = dsp->fConst4 * fTemp213;
			float fTemp215 = dsp->fConst13 * fTemp213;
			float fTemp216 = ((fTemp214 >= 0.25f) ? 0.5f : fmaxf(fTemp215, fminf(1.0f - fTemp215, ((iSlow48) ? fTemp58 * fTemp209 + fTemp141 + fTemp60 * fTemp189 : 1.0f))));
			dsp->fRec84[0] = fTemp216;
			float fTemp217 = fTemp191 + dsp->fRec86[1];
			int iTemp218 = (fSlow54 + (float)(fTemp217 >= 1.0f)) == 2.0f;
			float fTemp219 = fTemp214 + dsp->fRec85[1];
			float fTemp220 = fmodf(fTemp219, 1.0f);
			float fTemp221 = fmodf(fTemp217, 1.0f);
			float fTemp222 = ((iTemp218) ? fSlow94 * (fTemp213 * fTemp221 / fTemp190) : fTemp220);
			dsp->fRec85[0] = fTemp222;
			dsp->fRec86[0] = fTemp221;
			int iTemp223 = fTemp222 < fTemp216;
			float fTemp224 = 1.0f - fTemp216;
			float fTemp225 = fSlow91 * (fTemp221 / fTemp190);
			float fTemp226 = 1.0f - fTemp225;
			float fTemp227 = dsp->fRec85[1] + dsp->fConst4 * fTemp213 * fTemp226;
			int iTemp228 = dsp->iRec88[1] == 0;
			int iTemp229 = ((((fTemp227 >= 1.0f) + ((iTemp228 + (fTemp227 >= fTemp216)) == 2)) > 0) + (iTemp218 == 0)) > 0;
			int iTemp230 = fTemp220 >= fTemp216;
			float fTemp231 = fTemp220 - fTemp216;
			float fTemp232 = fTemp214 + dsp->fRec84[1] - fTemp216;
			float fTemp233 = fTemp231 / fTemp232;
			float fTemp234 = 1.0f - fTemp233;
			float fTemp235 = fSlow58 * fTemp211 * fTemp212 * (1.0f / fTemp224 + 1.0f / fTemp216);
			int iTemp236 = fTemp219 >= 1.0f;
			float fTemp237 = fTemp220 / fTemp213;
			float fTemp238 = dsp->fConst0 * fTemp237;
			float fTemp239 = 1.0f - fTemp238;
			float fTemp240 = fmodf(fTemp227, 1.0f);
			int iTemp241 = fTemp240 < fTemp216;
			float fTemp242 = fTemp240 + 2.0f * fSlow57 * (((iTemp241) ? 0.0f : 1.0f) - fTemp240) + fSlow58 * (((iTemp241) ? fTemp240 / fTemp216 : 1.0f - (fTemp240 - fTemp216) / fTemp224) - fTemp240);
			dsp->fRec87[0] = fTemp222 + 2.0f * fSlow57 * (((iTemp223) ? 0.0f : 1.0f) - fTemp222) + fSlow58 * (((iTemp223) ? fTemp222 / fTemp216 : 1.0f - (fTemp222 - fTemp216) / fTemp224) - fTemp222) + ((iTemp229) ? ((dsp->iRec88[1]) ? ((iTemp236) ? dsp->fConst4 * fTemp235 * (dsp->fConst0 * (fTemp220 * (dsp->fConst14 * fTemp237 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp220) / (mydsp_faustpower3_f(fTemp211) * mydsp_faustpower3_f(fTemp212)))) / fTemp213) + 0.1875f) - 0.5f * fSlow59 * fTemp239 * (fTemp238 - 1.0f) : 0.0f) : ((iTemp230) ? fSlow57 * fTemp234 * (fTemp233 - 1.0f) - dsp->fConst4 * fTemp235 * (fTemp231 * (0.375f * fTemp233 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp231) / mydsp_faustpower3_f(fTemp232))) / fTemp232 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp218) ? 0.5f * fTemp226 * fTemp242 * (fTemp225 - 1.0f) : 0.0f);
			dsp->iRec88[0] = (((iTemp218 + ((dsp->iRec88[1] + iTemp236) == 2) + ((iTemp228 + (fTemp220 < fTemp216)) == 2)) > 0) ? 0 : 1);
			float fRec89 = dsp->fRec87[1] + ((iTemp229) ? ((dsp->iRec88[1]) ? ((iTemp236) ? dsp->fConst4 * fTemp235 * (fTemp239 * (0.375f * fTemp239 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp239)) + 0.1875f) - dsp->fConst16 * (fSlow59 * mydsp_faustpower2_f(fTemp220) / (mydsp_faustpower2_f(fTemp211) * mydsp_faustpower2_f(fTemp212))) : 0.0f) : ((iTemp230) ? fSlow57 * mydsp_faustpower2_f(fTemp231) / mydsp_faustpower2_f(fTemp232) - dsp->fConst4 * fTemp235 * (fTemp234 * (0.375f * fTemp234 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp234)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp218) ? fSlow92 * (mydsp_faustpower2_f(fTemp221) * fTemp242 / fTemp208) : 0.0f);
			float fTemp243 = (0.5f * (dsp->fRec45[0] * fTemp209 + fTemp89 + dsp->fRec28[0] * (2.0f * fRec89 + -1.0f)) - dsp->fRec74[1]) * fTemp210;
			float fTemp244 = fTemp210 + 1.0f;
			float fTemp245 = 1.0f - fTemp210 / fTemp244;
			float fTemp246 = fTemp210 * ((dsp->fRec74[1] + (fTemp243 + 0.21521576f * fTemp91 * dsp->fRec75[1] * fTemp245 - dsp->fRec73[1]) / fTemp244) / (1.0f - 0.21521576f * (fTemp91 * fTemp210 * fTemp245 / fTemp244)) - dsp->fRec75[1]) / fTemp244;
			float fTemp247 = dsp->fRec75[1] + fTemp246;
			float fRec72 = fTemp247;
			dsp->fRec73[0] = dsp->fRec73[1] + 2.0f * (fTemp210 * (0.21521576f * fTemp91 * fTemp247 - dsp->fRec73[1]) / fTemp244);
			dsp->fRec74[0] = dsp->fRec74[1] + 2.0f * (fTemp243 / fTemp244);
			dsp->fRec75[0] = dsp->fRec75[1] + 2.0f * fTemp246;
			int iTemp248 = dsp->iRec90[1] == 0;
			int iTemp249 = dsp->iRec90[1] == 1;
			float fTemp250 = ((iTemp9) ? 0.0f : dsp->fRec91[1]);
			dsp->iRec90[0] = ((iSlow82) ? ((iTemp248) ? 1 : ((iTemp249) ? ((fTemp250 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp251 = ((dsp->iRec90[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec92[0] = fTemp185 * dsp->fRec92[1] + fTemp186 * ((iTemp9) ? 1.0f : fTemp250);
			float fTemp252 = ((iTemp248) ? dsp->fRec92[0] : 1.0f);
			float fTemp253 = ((fTemp251 == fTemp252) ? 0.5f : (fTemp250 - fTemp251) / (fTemp252 - fTemp251));
			dsp->fRec91[0] = fmaxf(fTemp251, fminf(1.0f, fTemp250 + 0.25f * (((iTemp248) ? -(fSlow66 * dsp->fRec92[0]) : ((iTemp249) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp253 + -1.0f) + (1.0f - fTemp253)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec91[0]);
			float fTemp254 = 0.12f * (fRec0 * dsp->fRec49[0] + fRec51 * dsp->fRec70[0] + fRec72 * dsp->fRec91[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp254);
			output1[i0] = (FAUSTFLOAT)(fTemp254);
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
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->iRec19[1] = dsp->iRec19[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->iRec33[1] = dsp->iRec33[0];
			dsp->fRec45[1] = dsp->fRec45[0];
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
			dsp->iRec61[1] = dsp->iRec61[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->iRec67[1] = dsp->iRec67[0];
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
			dsp->iRec82[1] = dsp->iRec82[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->iRec88[1] = dsp->iRec88[0];
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
