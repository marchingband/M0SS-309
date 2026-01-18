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
	float fRec3[2];
	FAUSTFLOAT fHslider1;
	float fRec4[2];
	int iRec5[2];
	FAUSTFLOAT fHslider2;
	float fRec6[2];
	FAUSTFLOAT fHslider3;
	float fConst4;
	FAUSTFLOAT fHslider4;
	float fRec8[2];
	float fRec7[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fButton0;
	int iRec11[2];
	int iRec9[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	int iVec1[2];
	float fRec12[2];
	float fRec10[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider9;
	float fRec13[2];
	FAUSTFLOAT fHslider10;
	float fRec14[2];
	float fConst5;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	float fRec20[2];
	FAUSTFLOAT fHslider13;
	float fRec21[2];
	FAUSTFLOAT fHslider14;
	float fRec22[2];
	float fConst6;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	float fRec23[2];
	FAUSTFLOAT fHslider17;
	float fRec24[2];
	FAUSTFLOAT fHslider18;
	float fRec25[2];
	FAUSTFLOAT fHslider19;
	float fRec26[2];
	float fRec15[2];
	float fRec16[2];
	float fConst7;
	float fConst9;
	float fConst10;
	float fRec17[2];
	float fConst12;
	int iRec19[2];
	FAUSTFLOAT fHslider20;
	float fRec27[2];
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	float fRec34[2];
	FAUSTFLOAT fHslider24;
	float fRec35[2];
	FAUSTFLOAT fHslider25;
	float fRec36[2];
	FAUSTFLOAT fHslider26;
	float fRec37[2];
	FAUSTFLOAT fHslider27;
	float fRec38[2];
	float fConst13;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	float fRec39[2];
	FAUSTFLOAT fHslider30;
	float fRec40[2];
	FAUSTFLOAT fHslider31;
	float fRec41[2];
	FAUSTFLOAT fHslider32;
	float fRec42[2];
	FAUSTFLOAT fHslider33;
	float fRec43[2];
	float fRec28[2];
	FAUSTFLOAT fHslider34;
	float fRec29[2];
	float fRec30[2];
	float fConst14;
	float fConst15;
	float fRec31[2];
	float fConst16;
	int iRec33[2];
	FAUSTFLOAT fHslider35;
	float fRec44[2];
	FAUSTFLOAT fHslider36;
	float fRec45[2];
	FAUSTFLOAT fHslider37;
	float fRec46[2];
	float fRec0[2];
	float fRec1[2];
	int iRec47[2];
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	FAUSTFLOAT fHslider41;
	float fRec49[2];
	float fRec48[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fButton1;
	int iRec53[2];
	int iVec2[2];
	float fRec55[2];
	float fRec54[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec56[2];
	float fRec57[2];
	float fRec58[2];
	int iRec60[2];
	float fRec61[2];
	float fRec62[2];
	float fRec63[2];
	float fRec64[2];
	int iRec66[2];
	float fRec50[2];
	float fRec51[2];
	int iRec67[2];
	float fRec69[2];
	float fRec68[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fButton2;
	int iRec73[2];
	int iVec3[2];
	float fRec75[2];
	float fRec74[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider43;
	float fRec76[2];
	float fRec77[2];
	float fRec78[2];
	int iRec80[2];
	float fRec81[2];
	float fRec82[2];
	float fRec83[2];
	float fRec84[2];
	int iRec86[2];
	float fRec70[2];
	float fRec71[2];
	int iRec87[2];
	float fRec89[2];
	float fRec88[2];
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
	m->declare(m->metaInterface, "misceffects.lib/cubicnl:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "misceffects.lib/cubicnl:license", "STK-4.3");
	m->declare(m->metaInterface, "misceffects.lib/name", "Misc Effects Library");
	m->declare(m->metaInterface, "misceffects.lib/version", "2.4.0");
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
	m->declare(m->metaInterface, "vaeffects.lib/name", "Faust Virtual Analog Filter Effect Library");
	m->declare(m->metaInterface, "vaeffects.lib/oberheim:author", "Eric Tarr");
	m->declare(m->metaInterface, "vaeffects.lib/oberheim:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "vaeffects.lib/oberheimLPF:author", "Eric Tarr");
	m->declare(m->metaInterface, "vaeffects.lib/oberheimLPF:license", "MIT-style STK-4.3 license");
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.8f);
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
	dsp->fHslider37 = (FAUSTFLOAT)(1e+01f);
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
			dsp->fRec3[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec4[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->iRec5[l3] = 0;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec6[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec8[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec7[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->iRec11[l7] = 0;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->iRec9[l8] = 0;
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
			dsp->fRec12[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec10[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec13[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec14[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec20[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec21[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec22[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec23[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec24[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec25[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec26[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec15[l21] = 0.0f;
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
			dsp->iRec19[l24] = 0;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec27[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec34[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec35[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec36[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec37[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec38[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec39[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec40[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec41[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec42[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec43[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec28[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec29[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec30[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec31[l39] = 0.0f;
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
			dsp->fRec44[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec45[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec46[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec0[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec1[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->iRec47[l46] = 0;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec49[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec48[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->iRec53[l49] = 0;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->iVec2[l50] = 0;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec55[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec54[l52] = 0.0f;
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
			dsp->fRec57[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec58[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->iRec60[l56] = 0;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec61[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec62[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec63[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec64[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->iRec66[l61] = 0;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec50[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec51[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->iRec67[l64] = 0;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec69[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec68[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->iRec73[l67] = 0;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->iVec3[l68] = 0;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec75[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec74[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec76[l71] = 0.0f;
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
			dsp->fRec78[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->iRec80[l74] = 0;
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
			dsp->fRec82[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec83[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec84[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->iRec86[l79] = 0;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec70[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec71[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->iRec87[l82] = 0;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec89[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec88[l84] = 0.0f;
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider0, (FAUSTFLOAT)0.8f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider37, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)25.0f, (FAUSTFLOAT)0.001f);
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
	float fSlow10 = (fSlow9 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider6)) + 0.001f));
	float fSlow11 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider8)) + 0.001f));
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
	float fSlow64 = (fSlow63 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow65 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow66 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider41)) + 0.001f));
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
			dsp->fRec3[0] = fSlow0 + dsp->fConst3 * dsp->fRec3[1];
			dsp->fRec4[0] = fSlow1 + dsp->fConst3 * dsp->fRec4[1];
			dsp->iRec5[0] = 1103515245 * dsp->iRec5[1] + 12345;
			float fTemp0 = (float)(dsp->iRec5[0]);
			float fTemp1 = 1.1175871e-06f * mydsp_faustpower2_f(dsp->fRec4[0]) * fTemp0;
			dsp->fRec6[0] = fSlow2 + dsp->fConst3 * dsp->fRec6[1];
			dsp->fRec8[0] = fSlow6 + dsp->fConst3 * dsp->fRec8[1];
			float fTemp2 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec7[1] + dsp->fConst4 * dsp->fRec8[0]);
			dsp->fRec7[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = 2.0f * dsp->fRec7[0] + -1.0f;
			float fTemp4 = ((iSlow4) ? 2.0f * (1.0f - fabsf(fTemp3)) + -1.0f : ((iSlow5) ? 2.0f * (float)(dsp->fRec7[0] <= 0.5f) + -1.0f : fTemp3));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = mydsp_faustpower2_f(dsp->fRec6[0]) * fTemp5;
			int iTemp7 = dsp->iRec9[1] == 0;
			int iTemp8 = dsp->iRec9[1] == 1;
			dsp->iRec11[0] = dsp->iRec11[1] + 1;
			int iTemp9 = (dsp->iRec11[0] + -1) == 0;
			float fTemp10 = ((iTemp9) ? 0.0f : dsp->fRec10[1]);
			dsp->iRec9[0] = ((iSlow8) ? ((iTemp7) ? 1 : ((iTemp8) ? ((fTemp10 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp11 = ((dsp->iRec9[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec1[0] = iSlow13;
			int iTemp12 = (dsp->iVec1[1] <= 0) & iSlow14;
			float fTemp13 = (float)(1 - iTemp12);
			float fTemp14 = (float)(iTemp12);
			dsp->fRec12[0] = dsp->fRec12[1] * fTemp13 + ((iTemp9) ? 1.0f : fTemp10) * fTemp14;
			float fTemp15 = ((iTemp7) ? dsp->fRec12[0] : 1.0f);
			float fTemp16 = ((fTemp11 == fTemp15) ? 0.5f : (fTemp10 - fTemp11) / (fTemp15 - fTemp11));
			dsp->fRec10[0] = fmaxf(fTemp11, fminf(1.0f, fTemp10 + 0.25f * (((iTemp7) ? -(fSlow12 * dsp->fRec12[0]) : ((iTemp8) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp16 + -1.0f) + (1.0f - fTemp16)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec10[0]);
			float fTemp17 = dsp->fRec10[0];
			dsp->fRec13[0] = fSlow15 + dsp->fConst3 * dsp->fRec13[1];
			float fTemp18 = mydsp_faustpower2_f(dsp->fRec13[0]);
			dsp->fRec14[0] = fSlow16 + dsp->fConst3 * dsp->fRec14[1];
			float fTemp19 = mydsp_faustpower2_f(dsp->fRec14[0]);
			dsp->fRec20[0] = fSlow19 + dsp->fConst3 * dsp->fRec20[1];
			float fTemp20 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec20[0]) * fTemp5;
			dsp->fRec21[0] = fSlow20 + dsp->fConst3 * dsp->fRec21[1];
			float fTemp21 = mydsp_faustpower2_f(dsp->fRec21[0]);
			dsp->fRec22[0] = fSlow21 + dsp->fConst3 * dsp->fRec22[1];
			float fTemp22 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec22[0]) * fTemp0;
			float fTemp23 = powf(2.0f, 0.00083333335f * (fTemp20 + 1.2e+03f * fTemp17 * fTemp21 + fTemp22));
			float fTemp24 = fSlow18 * fTemp23;
			float fTemp25 = fSlow22 * fTemp23;
			dsp->fRec23[0] = fSlow26 + dsp->fConst3 * dsp->fRec23[1];
			float fTemp26 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec23[0]) * fTemp0;
			dsp->fRec24[0] = fSlow27 + dsp->fConst3 * dsp->fRec24[1];
			float fTemp27 = mydsp_faustpower2_f(dsp->fRec24[0]);
			dsp->fRec25[0] = fSlow28 + dsp->fConst3 * dsp->fRec25[1];
			dsp->fRec26[0] = fSlow29 + dsp->fConst3 * dsp->fRec26[1];
			float fTemp28 = dsp->fRec25[0] + mydsp_faustpower2_f(dsp->fRec26[0]) * fTemp5;
			float fTemp29 = ((fTemp24 >= 0.25f) ? 0.5f : fmaxf(fTemp25, fminf(1.0f - fTemp25, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp26 + fTemp17 * fTemp27 + fTemp28 : 1.0f)))));
			dsp->fRec15[0] = fTemp29;
			float fTemp30 = fTemp24 + dsp->fRec16[1];
			float fTemp31 = fmodf(fTemp30, 1.0f);
			dsp->fRec16[0] = fTemp31;
			int iTemp32 = fTemp31 < fTemp29;
			float fTemp33 = fTemp31 - fTemp29;
			float fTemp34 = 1.0f - fTemp29;
			int iTemp35 = fTemp31 >= fTemp29;
			float fTemp36 = fTemp24 + dsp->fRec15[1] - fTemp29;
			float fTemp37 = fTemp33 / fTemp36;
			float fTemp38 = 1.0f - fTemp37;
			float fTemp39 = fTemp23 * fSlow32 * (1.0f / fTemp34 + 1.0f / fTemp29);
			int iTemp40 = fTemp30 >= 1.0f;
			float fTemp41 = fTemp31 / fTemp23;
			float fTemp42 = fSlow37 * fTemp41;
			float fTemp43 = 1.0f - fTemp42;
			dsp->fRec17[0] = fTemp31 + 2.0f * (((iTemp32) ? 0.0f : 1.0f) - fTemp31) * fSlow31 + (((iTemp32) ? fTemp31 / fTemp29 : 1.0f - fTemp33 / fTemp34) - fTemp31) * fSlow32 + ((dsp->iRec19[1]) ? ((iTemp40) ? fSlow18 * fTemp39 * (fSlow33 * (fTemp31 * (fSlow34 * fTemp41 + -0.0011363636f - fSlow35 * (mydsp_faustpower3_f(fTemp31) / mydsp_faustpower3_f(fTemp23))) / fTemp23) + 0.1875f) - 0.5f * fSlow36 * fTemp43 * (fTemp42 - 1.0f) : 0.0f) : ((iTemp35) ? fSlow31 * fTemp38 * (fTemp37 - 1.0f) - fSlow18 * fTemp39 * (fTemp33 * (0.375f * fTemp37 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp33) / mydsp_faustpower3_f(fTemp36))) / fTemp36 + 0.1875f) : 0.0f));
			float fTemp44 = mydsp_faustpower2_f(fTemp23);
			float fRec18 = dsp->fRec17[1] + ((dsp->iRec19[1]) ? ((iTemp40) ? fSlow18 * fTemp39 * (fTemp43 * (0.375f * fTemp43 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp43)) + 0.1875f) - fSlow38 * (mydsp_faustpower2_f(fTemp31) * fSlow36 / fTemp44) : 0.0f) : ((iTemp35) ? fSlow31 * mydsp_faustpower2_f(fTemp33) / mydsp_faustpower2_f(fTemp36) - fSlow18 * fTemp39 * (fTemp38 * (0.375f * fTemp38 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp38)) + 0.1875f) : 0.0f));
			dsp->iRec19[0] = (((((dsp->iRec19[1] + iTemp40) == 2) + ((iTemp32 + (dsp->iRec19[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp45 = 2.0f * fRec18 + -1.0f;
			float fTemp46 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec3[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp17 * fTemp18 + fTemp19 * fTemp45)))), 1.0f) + 1.0f));
			dsp->fRec27[0] = fSlow39 + dsp->fConst3 * dsp->fRec27[1];
			dsp->fRec34[0] = fSlow42 + dsp->fConst3 * dsp->fRec34[1];
			float fTemp47 = powf(2.0f, 0.00083333335f * (fSlow41 + dsp->fRec34[0]));
			float fTemp48 = 2e+01f * fTemp47;
			float fTemp49 = ((iSlow40) ? fSlow43 * fTemp47 : fTemp48);
			dsp->fRec35[0] = fSlow44 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp50 = 2.4e+03f * mydsp_faustpower2_f(dsp->fRec35[0]) * fTemp5;
			dsp->fRec36[0] = fSlow45 + dsp->fConst3 * dsp->fRec36[1];
			float fTemp51 = mydsp_faustpower2_f(dsp->fRec36[0]);
			dsp->fRec37[0] = fSlow46 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp52 = 5.5879354e-07f * mydsp_faustpower2_f(dsp->fRec37[0]) * fTemp0;
			dsp->fRec38[0] = fSlow47 + dsp->fConst3 * dsp->fRec38[1];
			float fTemp53 = mydsp_faustpower2_f(dsp->fRec38[0]);
			float fTemp54 = powf(2.0f, 0.00083333335f * (fTemp50 + 1.2e+03f * fTemp17 * fTemp51 + fTemp52 + 4.8e+03f * fTemp53 * fTemp45));
			float fTemp55 = fTemp49 * fTemp54;
			float fTemp56 = dsp->fConst4 * fTemp55;
			float fTemp57 = dsp->fConst13 * fTemp55;
			dsp->fRec39[0] = fSlow49 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp58 = mydsp_faustpower2_f(dsp->fRec39[0]);
			dsp->fRec40[0] = fSlow50 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp59 = 4.656613e-10f * mydsp_faustpower2_f(dsp->fRec40[0]) * fTemp0;
			dsp->fRec41[0] = fSlow51 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp60 = mydsp_faustpower2_f(dsp->fRec41[0]);
			dsp->fRec42[0] = fSlow52 + dsp->fConst3 * dsp->fRec42[1];
			dsp->fRec43[0] = fSlow53 + dsp->fConst3 * dsp->fRec43[1];
			float fTemp61 = dsp->fRec42[0] + mydsp_faustpower2_f(dsp->fRec43[0]) * fTemp5;
			float fTemp62 = ((fTemp56 >= 0.25f) ? 0.5f : fmaxf(fTemp57, fminf(1.0f - fTemp57, ((iSlow48) ? fTemp58 * fTemp45 + fTemp59 + fTemp17 * fTemp60 + fTemp61 : 1.0f))));
			dsp->fRec28[0] = fTemp62;
			float fTemp63 = fTemp24 + dsp->fRec30[1];
			int iTemp64 = (fSlow54 + (float)(fTemp63 >= 1.0f)) == 2.0f;
			float fTemp65 = fTemp56 + dsp->fRec29[1];
			float fTemp66 = fmodf(fTemp65, 1.0f);
			float fTemp67 = fmodf(fTemp63, 1.0f);
			float fTemp68 = ((iTemp64) ? fSlow55 * (fTemp55 * fTemp67 / fTemp23) : fTemp66);
			dsp->fRec29[0] = fTemp68;
			dsp->fRec30[0] = fTemp67;
			int iTemp69 = fTemp68 < fTemp62;
			float fTemp70 = 1.0f - fTemp62;
			float fTemp71 = fSlow37 * (fTemp67 / fTemp23);
			float fTemp72 = 1.0f - fTemp71;
			float fTemp73 = dsp->fRec29[1] + dsp->fConst4 * fTemp55 * fTemp72;
			int iTemp74 = dsp->iRec33[1] == 0;
			int iTemp75 = ((((fTemp73 >= 1.0f) + ((iTemp74 + (fTemp73 >= fTemp62)) == 2)) > 0) + (iTemp64 == 0)) > 0;
			int iTemp76 = fTemp66 >= fTemp62;
			float fTemp77 = fTemp66 - fTemp62;
			float fTemp78 = fTemp56 + dsp->fRec28[1] - fTemp62;
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
			dsp->fRec31[0] = fTemp68 + 2.0f * (((iTemp69) ? 0.0f : 1.0f) - fTemp68) * fSlow57 + (((iTemp69) ? fTemp68 / fTemp62 : 1.0f - (fTemp68 - fTemp62) / fTemp70) - fTemp68) * fSlow58 + ((iTemp75) ? ((dsp->iRec33[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (dsp->fConst0 * (fTemp66 * (dsp->fConst14 * fTemp83 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp66) / (mydsp_faustpower3_f(fTemp49) * mydsp_faustpower3_f(fTemp54)))) / fTemp55) + 0.1875f) - 0.5f * fSlow59 * fTemp85 * (fTemp84 - 1.0f) : 0.0f) : ((iTemp76) ? fSlow57 * fTemp80 * (fTemp79 - 1.0f) - dsp->fConst4 * fTemp81 * (fTemp77 * (0.375f * fTemp79 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp77) / mydsp_faustpower3_f(fTemp78))) / fTemp78 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? 0.5f * fTemp72 * fTemp88 * (fTemp71 - 1.0f) : 0.0f);
			float fRec32 = dsp->fRec31[1] + ((iTemp75) ? ((dsp->iRec33[1]) ? ((iTemp82) ? dsp->fConst4 * fTemp81 * (fTemp85 * (0.375f * fTemp85 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp85)) + 0.1875f) - dsp->fConst16 * (mydsp_faustpower2_f(fTemp66) * fSlow59 / (mydsp_faustpower2_f(fTemp49) * mydsp_faustpower2_f(fTemp54))) : 0.0f) : ((iTemp76) ? fSlow57 * mydsp_faustpower2_f(fTemp77) / mydsp_faustpower2_f(fTemp78) - dsp->fConst4 * fTemp81 * (fTemp80 * (0.375f * fTemp80 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp80)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp64) ? fSlow38 * (mydsp_faustpower2_f(fTemp67) * fTemp88 / fTemp44) : 0.0f);
			dsp->iRec33[0] = (((iTemp64 + ((dsp->iRec33[1] + iTemp82) == 2) + ((iTemp74 + (fTemp66 < fTemp62)) == 2)) > 0) ? 0 : 1);
			dsp->fRec44[0] = fSlow60 + dsp->fConst3 * dsp->fRec44[1];
			dsp->fRec45[0] = fSlow61 + dsp->fConst3 * dsp->fRec45[1];
			float fTemp89 = 4.656613e-10f * dsp->fRec45[0] * fTemp0;
			dsp->fRec46[0] = fSlow62 + dsp->fConst3 * dsp->fRec46[1];
			float fTemp90 = 1.0f / dsp->fRec46[0];
			float fTemp91 = fTemp90 + fTemp46;
			float fTemp92 = 0.5f * (dsp->fRec27[0] * (2.0f * fRec32 + -1.0f) + dsp->fRec44[0] * fTemp45 + fTemp89) - (dsp->fRec0[1] + dsp->fRec1[1] * fTemp91);
			float fTemp93 = fTemp46 * fTemp91 + 1.0f;
			float fTemp94 = fTemp46 * fTemp92 / fTemp93;
			float fTemp95 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec1[1] + fTemp94));
			float fTemp96 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp95);
			float fTemp97 = fTemp46 * fTemp95 * fTemp96;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp97;
			float fTemp98 = fTemp95 * fTemp96;
			dsp->fRec1[0] = fTemp94 + fTemp98;
			float fRec2 = dsp->fRec0[1] + fTemp97;
			int iTemp99 = dsp->iRec47[1] == 0;
			int iTemp100 = dsp->iRec47[1] == 1;
			float fTemp101 = ((iTemp9) ? 0.0f : dsp->fRec48[1]);
			dsp->iRec47[0] = ((iSlow8) ? ((iTemp99) ? 1 : ((iTemp100) ? ((fTemp101 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp102 = ((dsp->iRec47[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec49[0] = fTemp13 * dsp->fRec49[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp101);
			float fTemp103 = ((iTemp99) ? dsp->fRec49[0] : 1.0f);
			float fTemp104 = ((fTemp102 == fTemp103) ? 0.5f : (fTemp101 - fTemp102) / (fTemp103 - fTemp102));
			dsp->fRec48[0] = fmaxf(fTemp102, fminf(1.0f, fTemp101 + 0.25f * (((iTemp99) ? -(fSlow66 * dsp->fRec49[0]) : ((iTemp100) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp104 + -1.0f) + (1.0f - fTemp104)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec48[0]);
			int iTemp105 = dsp->iRec53[1] == 0;
			int iTemp106 = dsp->iRec53[1] == 1;
			float fTemp107 = ((iTemp9) ? 0.0f : dsp->fRec54[1]);
			dsp->iRec53[0] = ((iSlow68) ? ((iTemp105) ? 1 : ((iTemp106) ? ((fTemp107 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp108 = ((dsp->iRec53[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec2[0] = iSlow69;
			int iTemp109 = (dsp->iVec2[1] <= 0) & iSlow70;
			float fTemp110 = (float)(1 - iTemp109);
			float fTemp111 = (float)(iTemp109);
			dsp->fRec55[0] = dsp->fRec55[1] * fTemp110 + ((iTemp9) ? 1.0f : fTemp107) * fTemp111;
			float fTemp112 = ((iTemp105) ? dsp->fRec55[0] : 1.0f);
			float fTemp113 = ((fTemp108 == fTemp112) ? 0.5f : (fTemp107 - fTemp108) / (fTemp112 - fTemp108));
			dsp->fRec54[0] = fmaxf(fTemp108, fminf(1.0f, fTemp107 + 0.25f * (((iTemp105) ? -(fSlow12 * dsp->fRec55[0]) : ((iTemp106) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp113 + -1.0f) + (1.0f - fTemp113)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec54[0]);
			float fTemp114 = dsp->fRec54[0];
			float fTemp115 = fTemp20 + fTemp22;
			float fTemp116 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp21 * fTemp114 + fTemp115));
			float fTemp117 = fSlow72 * fTemp116;
			float fTemp118 = fSlow73 * fTemp116;
			float fTemp119 = fTemp26 + fTemp28;
			float fTemp120 = ((fTemp117 >= 0.25f) ? 0.5f : fmaxf(fTemp118, fminf(1.0f - fTemp118, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp27 * fTemp114 + fTemp119 : 1.0f)))));
			dsp->fRec56[0] = fTemp120;
			float fTemp121 = fTemp117 + dsp->fRec57[1];
			float fTemp122 = fmodf(fTemp121, 1.0f);
			dsp->fRec57[0] = fTemp122;
			int iTemp123 = fTemp122 < fTemp120;
			float fTemp124 = fTemp122 - fTemp120;
			float fTemp125 = 1.0f - fTemp120;
			int iTemp126 = fTemp122 >= fTemp120;
			float fTemp127 = fTemp117 + dsp->fRec56[1] - fTemp120;
			float fTemp128 = fTemp124 / fTemp127;
			float fTemp129 = 1.0f - fTemp128;
			float fTemp130 = fSlow32 * fTemp116 * (1.0f / fTemp125 + 1.0f / fTemp120);
			int iTemp131 = fTemp121 >= 1.0f;
			float fTemp132 = fTemp122 / fTemp116;
			float fTemp133 = fSlow77 * fTemp132;
			float fTemp134 = 1.0f - fTemp133;
			dsp->fRec58[0] = fTemp122 + 2.0f * fSlow31 * (((iTemp123) ? 0.0f : 1.0f) - fTemp122) + fSlow32 * (((iTemp123) ? fTemp122 / fTemp120 : 1.0f - fTemp124 / fTemp125) - fTemp122) + ((dsp->iRec60[1]) ? ((iTemp131) ? fSlow72 * fTemp130 * (fSlow74 * (fTemp122 * (fSlow75 * fTemp132 + -0.0011363636f - fSlow76 * (mydsp_faustpower3_f(fTemp122) / mydsp_faustpower3_f(fTemp116))) / fTemp116) + 0.1875f) - 0.5f * fSlow36 * fTemp134 * (fTemp133 - 1.0f) : 0.0f) : ((iTemp126) ? fSlow31 * fTemp129 * (fTemp128 - 1.0f) - fSlow72 * fTemp130 * (fTemp124 * (0.375f * fTemp128 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp124) / mydsp_faustpower3_f(fTemp127))) / fTemp127 + 0.1875f) : 0.0f));
			float fTemp135 = mydsp_faustpower2_f(fTemp116);
			float fRec59 = dsp->fRec58[1] + ((dsp->iRec60[1]) ? ((iTemp131) ? fSlow72 * fTemp130 * (fTemp134 * (0.375f * fTemp134 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp134)) + 0.1875f) - fSlow78 * (fSlow36 * mydsp_faustpower2_f(fTemp122) / fTemp135) : 0.0f) : ((iTemp126) ? fSlow31 * mydsp_faustpower2_f(fTemp124) / mydsp_faustpower2_f(fTemp127) - fSlow72 * fTemp130 * (fTemp129 * (0.375f * fTemp129 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp129)) + 0.1875f) : 0.0f));
			dsp->iRec60[0] = (((((dsp->iRec60[1] + iTemp131) == 2) + ((iTemp123 + (dsp->iRec60[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp136 = 2.0f * fRec59 + -1.0f;
			float fTemp137 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec3[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp114 + fTemp19 * fTemp136)))), 1.0f) + 1.0f));
			float fTemp138 = ((iSlow40) ? fSlow79 * fTemp47 : fTemp48);
			float fTemp139 = fTemp50 + fTemp52;
			float fTemp140 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp51 * fTemp114 + fTemp139 + 4.8e+03f * fTemp53 * fTemp136));
			float fTemp141 = fTemp138 * fTemp140;
			float fTemp142 = dsp->fConst4 * fTemp141;
			float fTemp143 = dsp->fConst13 * fTemp141;
			float fTemp144 = fTemp59 + fTemp61;
			float fTemp145 = ((fTemp142 >= 0.25f) ? 0.5f : fmaxf(fTemp143, fminf(1.0f - fTemp143, ((iSlow48) ? fTemp58 * fTemp136 + fTemp60 * fTemp114 + fTemp144 : 1.0f))));
			dsp->fRec61[0] = fTemp145;
			float fTemp146 = fTemp117 + dsp->fRec63[1];
			int iTemp147 = (fSlow54 + (float)(fTemp146 >= 1.0f)) == 2.0f;
			float fTemp148 = fTemp142 + dsp->fRec62[1];
			float fTemp149 = fmodf(fTemp148, 1.0f);
			float fTemp150 = fmodf(fTemp146, 1.0f);
			float fTemp151 = ((iTemp147) ? fSlow80 * (fTemp141 * fTemp150 / fTemp116) : fTemp149);
			dsp->fRec62[0] = fTemp151;
			dsp->fRec63[0] = fTemp150;
			int iTemp152 = fTemp151 < fTemp145;
			float fTemp153 = 1.0f - fTemp145;
			float fTemp154 = fSlow77 * (fTemp150 / fTemp116);
			float fTemp155 = 1.0f - fTemp154;
			float fTemp156 = dsp->fRec62[1] + dsp->fConst4 * fTemp141 * fTemp155;
			int iTemp157 = dsp->iRec66[1] == 0;
			int iTemp158 = ((((fTemp156 >= 1.0f) + ((iTemp157 + (fTemp156 >= fTemp145)) == 2)) > 0) + (iTemp147 == 0)) > 0;
			int iTemp159 = fTemp149 >= fTemp145;
			float fTemp160 = fTemp149 - fTemp145;
			float fTemp161 = fTemp142 + dsp->fRec61[1] - fTemp145;
			float fTemp162 = fTemp160 / fTemp161;
			float fTemp163 = 1.0f - fTemp162;
			float fTemp164 = fSlow58 * fTemp138 * fTemp140 * (1.0f / fTemp153 + 1.0f / fTemp145);
			int iTemp165 = fTemp148 >= 1.0f;
			float fTemp166 = fTemp149 / fTemp141;
			float fTemp167 = dsp->fConst0 * fTemp166;
			float fTemp168 = 1.0f - fTemp167;
			float fTemp169 = fmodf(fTemp156, 1.0f);
			int iTemp170 = fTemp169 < fTemp145;
			float fTemp171 = fTemp169 + 2.0f * fSlow57 * (((iTemp170) ? 0.0f : 1.0f) - fTemp169) + fSlow58 * (((iTemp170) ? fTemp169 / fTemp145 : 1.0f - (fTemp169 - fTemp145) / fTemp153) - fTemp169);
			dsp->fRec64[0] = fTemp151 + 2.0f * fSlow57 * (((iTemp152) ? 0.0f : 1.0f) - fTemp151) + fSlow58 * (((iTemp152) ? fTemp151 / fTemp145 : 1.0f - (fTemp151 - fTemp145) / fTemp153) - fTemp151) + ((iTemp158) ? ((dsp->iRec66[1]) ? ((iTemp165) ? dsp->fConst4 * fTemp164 * (dsp->fConst0 * (fTemp149 * (dsp->fConst14 * fTemp166 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp149) / (mydsp_faustpower3_f(fTemp138) * mydsp_faustpower3_f(fTemp140)))) / fTemp141) + 0.1875f) - 0.5f * fSlow59 * fTemp168 * (fTemp167 - 1.0f) : 0.0f) : ((iTemp159) ? fSlow57 * fTemp163 * (fTemp162 - 1.0f) - dsp->fConst4 * fTemp164 * (fTemp160 * (0.375f * fTemp162 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp160) / mydsp_faustpower3_f(fTemp161))) / fTemp161 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp147) ? 0.5f * fTemp155 * fTemp171 * (fTemp154 - 1.0f) : 0.0f);
			float fRec65 = dsp->fRec64[1] + ((iTemp158) ? ((dsp->iRec66[1]) ? ((iTemp165) ? dsp->fConst4 * fTemp164 * (fTemp168 * (0.375f * fTemp168 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp168)) + 0.1875f) - dsp->fConst16 * (fSlow59 * mydsp_faustpower2_f(fTemp149) / (mydsp_faustpower2_f(fTemp138) * mydsp_faustpower2_f(fTemp140))) : 0.0f) : ((iTemp159) ? fSlow57 * mydsp_faustpower2_f(fTemp160) / mydsp_faustpower2_f(fTemp161) - dsp->fConst4 * fTemp164 * (fTemp163 * (0.375f * fTemp163 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp163)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp147) ? fSlow78 * (mydsp_faustpower2_f(fTemp150) * fTemp171 / fTemp135) : 0.0f);
			dsp->iRec66[0] = (((iTemp147 + ((dsp->iRec66[1] + iTemp165) == 2) + ((iTemp157 + (fTemp149 < fTemp145)) == 2)) > 0) ? 0 : 1);
			float fTemp172 = fTemp90 + fTemp137;
			float fTemp173 = 0.5f * (dsp->fRec44[0] * fTemp136 + fTemp89 + dsp->fRec27[0] * (2.0f * fRec65 + -1.0f)) - (dsp->fRec50[1] + dsp->fRec51[1] * fTemp172);
			float fTemp174 = fTemp137 * fTemp172 + 1.0f;
			float fTemp175 = fTemp137 * fTemp173 / fTemp174;
			float fTemp176 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec51[1] + fTemp175));
			float fTemp177 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp176);
			float fTemp178 = fTemp137 * fTemp176 * fTemp177;
			dsp->fRec50[0] = dsp->fRec50[1] + 2.0f * fTemp178;
			float fTemp179 = fTemp176 * fTemp177;
			dsp->fRec51[0] = fTemp175 + fTemp179;
			float fRec52 = dsp->fRec50[1] + fTemp178;
			int iTemp180 = dsp->iRec67[1] == 0;
			int iTemp181 = dsp->iRec67[1] == 1;
			float fTemp182 = ((iTemp9) ? 0.0f : dsp->fRec68[1]);
			dsp->iRec67[0] = ((iSlow68) ? ((iTemp180) ? 1 : ((iTemp181) ? ((fTemp182 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp183 = ((dsp->iRec67[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec69[0] = fTemp110 * dsp->fRec69[1] + fTemp111 * ((iTemp9) ? 1.0f : fTemp182);
			float fTemp184 = ((iTemp180) ? dsp->fRec69[0] : 1.0f);
			float fTemp185 = ((fTemp183 == fTemp184) ? 0.5f : (fTemp182 - fTemp183) / (fTemp184 - fTemp183));
			dsp->fRec68[0] = fmaxf(fTemp183, fminf(1.0f, fTemp182 + 0.25f * (((iTemp180) ? -(fSlow66 * dsp->fRec69[0]) : ((iTemp181) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp185 + -1.0f) + (1.0f - fTemp185)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec68[0]);
			int iTemp186 = dsp->iRec73[1] == 0;
			int iTemp187 = dsp->iRec73[1] == 1;
			float fTemp188 = ((iTemp9) ? 0.0f : dsp->fRec74[1]);
			dsp->iRec73[0] = ((iSlow82) ? ((iTemp186) ? 1 : ((iTemp187) ? ((fTemp188 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp189 = ((dsp->iRec73[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec3[0] = iSlow83;
			int iTemp190 = (dsp->iVec3[1] <= 0) & iSlow84;
			float fTemp191 = (float)(1 - iTemp190);
			float fTemp192 = (float)(iTemp190);
			dsp->fRec75[0] = dsp->fRec75[1] * fTemp191 + ((iTemp9) ? 1.0f : fTemp188) * fTemp192;
			float fTemp193 = ((iTemp186) ? dsp->fRec75[0] : 1.0f);
			float fTemp194 = ((fTemp189 == fTemp193) ? 0.5f : (fTemp188 - fTemp189) / (fTemp193 - fTemp189));
			dsp->fRec74[0] = fmaxf(fTemp189, fminf(1.0f, fTemp188 + 0.25f * (((iTemp186) ? -(fSlow12 * dsp->fRec75[0]) : ((iTemp187) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp194 + -1.0f) + (1.0f - fTemp194)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec74[0]);
			float fTemp195 = dsp->fRec74[0];
			float fTemp196 = powf(2.0f, 0.00083333335f * (fTemp115 + 1.2e+03f * fTemp21 * fTemp195));
			float fTemp197 = fSlow86 * fTemp196;
			float fTemp198 = fSlow87 * fTemp196;
			float fTemp199 = ((fTemp197 >= 0.25f) ? 0.5f : fmaxf(fTemp198, fminf(1.0f - fTemp198, ((iSlow24) ? 0.5f : ((iSlow25) ? fTemp119 + fTemp27 * fTemp195 : 1.0f)))));
			dsp->fRec76[0] = fTemp199;
			float fTemp200 = fTemp197 + dsp->fRec77[1];
			float fTemp201 = fmodf(fTemp200, 1.0f);
			dsp->fRec77[0] = fTemp201;
			int iTemp202 = fTemp201 < fTemp199;
			float fTemp203 = fTemp201 - fTemp199;
			float fTemp204 = 1.0f - fTemp199;
			int iTemp205 = fTemp201 >= fTemp199;
			float fTemp206 = fTemp197 + dsp->fRec76[1] - fTemp199;
			float fTemp207 = fTemp203 / fTemp206;
			float fTemp208 = 1.0f - fTemp207;
			float fTemp209 = fSlow32 * fTemp196 * (1.0f / fTemp204 + 1.0f / fTemp199);
			int iTemp210 = fTemp200 >= 1.0f;
			float fTemp211 = fTemp201 / fTemp196;
			float fTemp212 = fSlow91 * fTemp211;
			float fTemp213 = 1.0f - fTemp212;
			dsp->fRec78[0] = fTemp201 + 2.0f * fSlow31 * (((iTemp202) ? 0.0f : 1.0f) - fTemp201) + fSlow32 * (((iTemp202) ? fTemp201 / fTemp199 : 1.0f - fTemp203 / fTemp204) - fTemp201) + ((dsp->iRec80[1]) ? ((iTemp210) ? fSlow86 * fTemp209 * (fSlow88 * (fTemp201 * (fSlow89 * fTemp211 + -0.0011363636f - fSlow90 * (mydsp_faustpower3_f(fTemp201) / mydsp_faustpower3_f(fTemp196))) / fTemp196) + 0.1875f) - 0.5f * fSlow36 * fTemp213 * (fTemp212 - 1.0f) : 0.0f) : ((iTemp205) ? fSlow31 * fTemp208 * (fTemp207 - 1.0f) - fSlow86 * fTemp209 * (fTemp203 * (0.375f * fTemp207 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp203) / mydsp_faustpower3_f(fTemp206))) / fTemp206 + 0.1875f) : 0.0f));
			float fTemp214 = mydsp_faustpower2_f(fTemp196);
			float fRec79 = dsp->fRec78[1] + ((dsp->iRec80[1]) ? ((iTemp210) ? fSlow86 * fTemp209 * (fTemp213 * (0.375f * fTemp213 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp213)) + 0.1875f) - fSlow92 * (fSlow36 * mydsp_faustpower2_f(fTemp201) / fTemp214) : 0.0f) : ((iTemp205) ? fSlow31 * mydsp_faustpower2_f(fTemp203) / mydsp_faustpower2_f(fTemp206) - fSlow86 * fTemp209 * (fTemp208 * (0.375f * fTemp208 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp208)) + 0.1875f) : 0.0f));
			dsp->iRec80[0] = (((((dsp->iRec80[1] + iTemp210) == 2) + ((iTemp202 + (dsp->iRec80[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp215 = 2.0f * fRec79 + -1.0f;
			float fTemp216 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, dsp->fRec3[0] * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp18 * fTemp195 + fTemp19 * fTemp215)))), 1.0f) + 1.0f));
			float fTemp217 = ((iSlow40) ? fSlow93 * fTemp47 : fTemp48);
			float fTemp218 = powf(2.0f, 0.00083333335f * (fTemp139 + 1.2e+03f * fTemp51 * fTemp195 + 4.8e+03f * fTemp53 * fTemp215));
			float fTemp219 = fTemp217 * fTemp218;
			float fTemp220 = dsp->fConst4 * fTemp219;
			float fTemp221 = dsp->fConst13 * fTemp219;
			float fTemp222 = ((fTemp220 >= 0.25f) ? 0.5f : fmaxf(fTemp221, fminf(1.0f - fTemp221, ((iSlow48) ? fTemp58 * fTemp215 + fTemp144 + fTemp60 * fTemp195 : 1.0f))));
			dsp->fRec81[0] = fTemp222;
			float fTemp223 = fTemp197 + dsp->fRec83[1];
			int iTemp224 = (fSlow54 + (float)(fTemp223 >= 1.0f)) == 2.0f;
			float fTemp225 = fTemp220 + dsp->fRec82[1];
			float fTemp226 = fmodf(fTemp225, 1.0f);
			float fTemp227 = fmodf(fTemp223, 1.0f);
			float fTemp228 = ((iTemp224) ? fSlow94 * (fTemp219 * fTemp227 / fTemp196) : fTemp226);
			dsp->fRec82[0] = fTemp228;
			dsp->fRec83[0] = fTemp227;
			int iTemp229 = fTemp228 < fTemp222;
			float fTemp230 = 1.0f - fTemp222;
			float fTemp231 = fSlow91 * (fTemp227 / fTemp196);
			float fTemp232 = 1.0f - fTemp231;
			float fTemp233 = dsp->fRec82[1] + dsp->fConst4 * fTemp219 * fTemp232;
			int iTemp234 = dsp->iRec86[1] == 0;
			int iTemp235 = ((((fTemp233 >= 1.0f) + ((iTemp234 + (fTemp233 >= fTemp222)) == 2)) > 0) + (iTemp224 == 0)) > 0;
			int iTemp236 = fTemp226 >= fTemp222;
			float fTemp237 = fTemp226 - fTemp222;
			float fTemp238 = fTemp220 + dsp->fRec81[1] - fTemp222;
			float fTemp239 = fTemp237 / fTemp238;
			float fTemp240 = 1.0f - fTemp239;
			float fTemp241 = fSlow58 * fTemp217 * fTemp218 * (1.0f / fTemp230 + 1.0f / fTemp222);
			int iTemp242 = fTemp225 >= 1.0f;
			float fTemp243 = fTemp226 / fTemp219;
			float fTemp244 = dsp->fConst0 * fTemp243;
			float fTemp245 = 1.0f - fTemp244;
			float fTemp246 = fmodf(fTemp233, 1.0f);
			int iTemp247 = fTemp246 < fTemp222;
			float fTemp248 = fTemp246 + 2.0f * fSlow57 * (((iTemp247) ? 0.0f : 1.0f) - fTemp246) + fSlow58 * (((iTemp247) ? fTemp246 / fTemp222 : 1.0f - (fTemp246 - fTemp222) / fTemp230) - fTemp246);
			dsp->fRec84[0] = fTemp228 + 2.0f * fSlow57 * (((iTemp229) ? 0.0f : 1.0f) - fTemp228) + fSlow58 * (((iTemp229) ? fTemp228 / fTemp222 : 1.0f - (fTemp228 - fTemp222) / fTemp230) - fTemp228) + ((iTemp235) ? ((dsp->iRec86[1]) ? ((iTemp242) ? dsp->fConst4 * fTemp241 * (dsp->fConst0 * (fTemp226 * (dsp->fConst14 * fTemp243 + -0.5f - dsp->fConst15 * (mydsp_faustpower3_f(fTemp226) / (mydsp_faustpower3_f(fTemp217) * mydsp_faustpower3_f(fTemp218)))) / fTemp219) + 0.1875f) - 0.5f * fSlow59 * fTemp245 * (fTemp244 - 1.0f) : 0.0f) : ((iTemp236) ? fSlow57 * fTemp240 * (fTemp239 - 1.0f) - dsp->fConst4 * fTemp241 * (fTemp237 * (0.375f * fTemp239 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp237) / mydsp_faustpower3_f(fTemp238))) / fTemp238 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp224) ? 0.5f * fTemp232 * fTemp248 * (fTemp231 - 1.0f) : 0.0f);
			float fRec85 = dsp->fRec84[1] + ((iTemp235) ? ((dsp->iRec86[1]) ? ((iTemp242) ? dsp->fConst4 * fTemp241 * (fTemp245 * (0.375f * fTemp245 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp245)) + 0.1875f) - dsp->fConst16 * (fSlow59 * mydsp_faustpower2_f(fTemp226) / (mydsp_faustpower2_f(fTemp217) * mydsp_faustpower2_f(fTemp218))) : 0.0f) : ((iTemp236) ? fSlow57 * mydsp_faustpower2_f(fTemp237) / mydsp_faustpower2_f(fTemp238) - dsp->fConst4 * fTemp241 * (fTemp240 * (0.375f * fTemp240 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp240)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp224) ? fSlow92 * (mydsp_faustpower2_f(fTemp227) * fTemp248 / fTemp214) : 0.0f);
			dsp->iRec86[0] = (((iTemp224 + ((dsp->iRec86[1] + iTemp242) == 2) + ((iTemp234 + (fTemp226 < fTemp222)) == 2)) > 0) ? 0 : 1);
			float fTemp249 = fTemp90 + fTemp216;
			float fTemp250 = 0.5f * (dsp->fRec44[0] * fTemp215 + fTemp89 + dsp->fRec27[0] * (2.0f * fRec85 + -1.0f)) - (dsp->fRec70[1] + dsp->fRec71[1] * fTemp249);
			float fTemp251 = fTemp216 * fTemp249 + 1.0f;
			float fTemp252 = fTemp216 * fTemp250 / fTemp251;
			float fTemp253 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec71[1] + fTemp252));
			float fTemp254 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp253);
			float fTemp255 = fTemp216 * fTemp253 * fTemp254;
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * fTemp255;
			float fTemp256 = fTemp253 * fTemp254;
			dsp->fRec71[0] = fTemp252 + fTemp256;
			float fRec72 = dsp->fRec70[1] + fTemp255;
			int iTemp257 = dsp->iRec87[1] == 0;
			int iTemp258 = dsp->iRec87[1] == 1;
			float fTemp259 = ((iTemp9) ? 0.0f : dsp->fRec88[1]);
			dsp->iRec87[0] = ((iSlow82) ? ((iTemp257) ? 1 : ((iTemp258) ? ((fTemp259 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp260 = ((dsp->iRec87[1] == 2) ? fSlow63 : 0.0f);
			dsp->fRec89[0] = fTemp191 * dsp->fRec89[1] + fTemp192 * ((iTemp9) ? 1.0f : fTemp259);
			float fTemp261 = ((iTemp257) ? dsp->fRec89[0] : 1.0f);
			float fTemp262 = ((fTemp260 == fTemp261) ? 0.5f : (fTemp259 - fTemp260) / (fTemp261 - fTemp260));
			dsp->fRec88[0] = fmaxf(fTemp260, fminf(1.0f, fTemp259 + 0.25f * (((iTemp257) ? -(fSlow66 * dsp->fRec89[0]) : ((iTemp258) ? fSlow65 : fSlow64)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp262 + -1.0f) + (1.0f - fTemp262)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec88[0]);
			float fTemp263 = 0.12f * (fRec2 * dsp->fRec48[0] + fRec52 * dsp->fRec68[0] + fRec72 * dsp->fRec88[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp263);
			output1[i0] = (FAUSTFLOAT)(fTemp263);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec11[1] = dsp->iRec11[0];
			dsp->iRec9[1] = dsp->iRec9[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->iRec19[1] = dsp->iRec19[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->iRec33[1] = dsp->iRec33[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec47[1] = dsp->iRec47[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->iRec53[1] = dsp->iRec53[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->iRec60[1] = dsp->iRec60[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->iRec66[1] = dsp->iRec66[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->iRec67[1] = dsp->iRec67[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->iRec73[1] = dsp->iRec73[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->iRec80[1] = dsp->iRec80[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->iRec86[1] = dsp->iRec86[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->iRec87[1] = dsp->iRec87[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec88[1] = dsp->fRec88[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
