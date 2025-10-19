/* ------------------------------------------------------------
name: "M0SS-309_test"
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
static float mydsp_faustpower4_f(float value) {
	return value * value * value * value;
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
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	int iRec5[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider4;
	float fRec6[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fButton0;
	int iRec9[2];
	int iRec7[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	int iVec1[2];
	float fRec10[2];
	float fRec8[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	float fConst2;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	float fRec11[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[8192];
	float fConst3;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec12[2];
	float fVec4[2];
	float fVec5[4096];
	float fConst4;
	float fConst5;
	float fRec13[2];
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	FAUSTFLOAT fHslider24;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	FAUSTFLOAT fHslider27;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	float fRec14[2];
	float fVec6[2];
	float fVec7[8192];
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	FAUSTFLOAT fHslider34;
	FAUSTFLOAT fHslider35;
	float fRec15[2];
	float fVec8[2];
	float fVec9[4096];
	float fConst6;
	float fRec16[3];
	float fRec18[2];
	float fVec10[2];
	float fConst7;
	float fVec11[2];
	float fRec20[2];
	float fRec19[2];
	float fConst8;
	FAUSTFLOAT fHslider36;
	FAUSTFLOAT fHslider37;
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	int iRec21[2];
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	FAUSTFLOAT fHslider41;
	float fRec23[2];
	float fRec22[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fButton1;
	int iRec29[2];
	int iVec12[2];
	float fRec31[2];
	float fRec30[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec32[2];
	float fVec13[2];
	float fVec14[8192];
	float fRec33[2];
	float fVec15[2];
	float fVec16[4096];
	float fRec34[2];
	float fRec35[2];
	float fVec17[2];
	float fVec18[8192];
	float fRec36[2];
	float fVec19[2];
	float fVec20[4096];
	float fRec37[3];
	float fRec39[2];
	float fVec21[2];
	float fVec22[2];
	float fRec41[2];
	float fRec40[2];
	float fRec24[2];
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	int iRec42[2];
	float fRec44[2];
	float fRec43[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fButton2;
	int iRec50[2];
	int iVec23[2];
	float fRec52[2];
	float fRec51[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider43;
	float fRec53[2];
	float fVec24[2];
	float fVec25[8192];
	float fRec54[2];
	float fVec26[2];
	float fVec27[4096];
	float fRec55[2];
	float fRec56[2];
	float fVec28[2];
	float fVec29[8192];
	float fRec57[2];
	float fVec30[2];
	float fVec31[4096];
	float fRec58[3];
	float fRec60[2];
	float fVec32[2];
	float fVec33[2];
	float fRec62[2];
	float fRec61[2];
	float fRec45[2];
	float fRec46[2];
	float fRec47[2];
	float fRec48[2];
	int iRec63[2];
	float fRec65[2];
	float fRec64[2];
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
	m->declare(m->metaInterface, "filename", "M0SS-309_test.dsp");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/pole:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/pole:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/pole:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/version", "1.3.0");
	m->declare(m->metaInterface, "interpolators.lib/name", "Faust Interpolator Library");
	m->declare(m->metaInterface, "interpolators.lib/remap:author", "David Braun");
	m->declare(m->metaInterface, "interpolators.lib/version", "1.3.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.7.0");
	m->declare(m->metaInterface, "name", "M0SS-309_test");
	m->declare(m->metaInterface, "noises.lib/name", "Faust Noise Generator Library");
	m->declare(m->metaInterface, "noises.lib/version", "1.4.0");
	m->declare(m->metaInterface, "oscillators.lib/hsp_phasor:author", "Christophe Lebreton, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/lf_triangle:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/saw1:author", "Bart Brouns");
	m->declare(m->metaInterface, "oscillators.lib/saw1:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/sawN:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawN:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/version", "1.4.0");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "1.5.0");
	m->declare(m->metaInterface, "vaeffects.lib/moogLadder:author", "Dario Sanfilippo");
	m->declare(m->metaInterface, "vaeffects.lib/moogLadder:license", "MIT-style STK-4.3 license");
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.8f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider12 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider22 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider23 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider24 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider25 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider26 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
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
			dsp->iRec5[l1] = 0;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec6[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->iRec9[l3] = 0;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->iRec7[l4] = 0;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->iVec1[l5] = 0;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec10[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec8[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec11[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fVec2[l9] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 8192; l10 = l10 + 1) {
			dsp->fVec3[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec12[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fVec4[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 4096; l13 = l13 + 1) {
			dsp->fVec5[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec13[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec14[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fVec6[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 8192; l17 = l17 + 1) {
			dsp->fVec7[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec15[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fVec8[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 4096; l20 = l20 + 1) {
			dsp->fVec9[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 3; l21 = l21 + 1) {
			dsp->fRec16[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec18[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fVec10[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fVec11[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec20[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec19[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec0[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec1[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec2[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec3[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->iRec21[l31] = 0;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec23[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec22[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->iRec29[l34] = 0;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->iVec12[l35] = 0;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec31[l36] = 0.0f;
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
			dsp->fRec32[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fVec13[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 8192; l40 = l40 + 1) {
			dsp->fVec14[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec33[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fVec15[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 4096; l43 = l43 + 1) {
			dsp->fVec16[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec34[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec35[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fVec17[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 8192; l47 = l47 + 1) {
			dsp->fVec18[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec36[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fVec19[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 4096; l50 = l50 + 1) {
			dsp->fVec20[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 3; l51 = l51 + 1) {
			dsp->fRec37[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec39[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fVec21[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fVec22[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec41[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec40[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec24[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec25[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec26[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec27[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->iRec42[l61] = 0;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec44[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec43[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->iRec50[l64] = 0;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->iVec23[l65] = 0;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec52[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec51[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec53[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fVec24[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 8192; l70 = l70 + 1) {
			dsp->fVec25[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec54[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fVec26[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 4096; l73 = l73 + 1) {
			dsp->fVec27[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec55[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec56[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fVec28[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 8192; l77 = l77 + 1) {
			dsp->fVec29[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec57[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fVec30[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 4096; l80 = l80 + 1) {
			dsp->fVec31[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 3; l81 = l81 + 1) {
			dsp->fRec58[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec60[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fVec32[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fVec33[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec62[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec61[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec45[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec46[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec47[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec48[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->iRec63[l91] = 0;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec65[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec64[l93] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 1.0f / dsp->fConst0;
	dsp->fConst2 = 0.25f * dsp->fConst0;
	dsp->fConst3 = 0.0022727272f * dsp->fConst0;
	dsp->fConst4 = 1.76e+03f / dsp->fConst0;
	dsp->fConst5 = 0.5f * dsp->fConst0;
	dsp->fConst6 = 4.4e+02f / dsp->fConst0;
	dsp->fConst7 = 0.0005681818f * dsp->fConst0;
	dsp->fConst8 = 5.165289e-06f * dsp->fConst0;
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
	ui_interface->openVerticalBox(ui_interface->uiInterface, "M0SS-309_test");
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider12, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider43, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "alt", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider21, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "alt-sel", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider31, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "alt-sel", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider24, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider16, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "sel", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)1e+02f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "sel", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider11, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)(dsp->fHslider0);
	float fSlow1 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider1));
	float fSlow2 = mydsp_faustpower2_f((float)(dsp->fHslider2));
	float fSlow3 = (float)(dsp->fHslider3);
	int iSlow4 = fSlow3 >= 2.0f;
	int iSlow5 = fSlow3 >= 1.0f;
	float fSlow6 = dsp->fConst1 * (float)(dsp->fHslider4);
	float fSlow7 = mydsp_faustpower2_f((float)(dsp->fHslider5));
	float fSlow8 = (float)(dsp->fButton0);
	int iSlow9 = fSlow8 > 0.0f;
	float fSlow10 = (float)(dsp->fHslider6);
	float fSlow11 = (fSlow10 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider8)) + 0.001f));
	float fSlow13 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider9)) + 0.001f));
	int iSlow14 = fSlow8 == 0.0f;
	int iSlow15 = iSlow14 > 0;
	float fSlow16 = mydsp_faustpower2_f((float)(dsp->fHslider10));
	float fSlow17 = (float)(dsp->fHslider11);
	int iSlow18 = fSlow17 >= 2.0f;
	int iSlow19 = fSlow17 >= 1.0f;
	float fSlow20 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider12) + -69.0f));
	float fSlow21 = 4.4e+02f * fSlow20;
	float fSlow22 = mydsp_faustpower2_f((float)(dsp->fHslider13));
	float fSlow23 = mydsp_faustpower2_f((float)(dsp->fHslider14));
	float fSlow24 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider15));
	float fSlow25 = dsp->fConst3 / fSlow20;
	float fSlow26 = (float)(dsp->fHslider16);
	float fSlow27 = mydsp_faustpower2_f((float)(dsp->fHslider17));
	float fSlow28 = mydsp_faustpower2_f((float)(dsp->fHslider18));
	float fSlow29 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider19));
	float fSlow30 = dsp->fConst4 * fSlow20;
	float fSlow31 = (float)(dsp->fHslider20);
	float fSlow32 = (float)(dsp->fHslider21);
	int iSlow33 = (int)((float)(dsp->fHslider22));
	float fSlow34 = (float)(dsp->fHslider23);
	int iSlow35 = fSlow34 >= 1.0f;
	int iSlow36 = (float)(dsp->fHslider24) >= 1.0f;
	float fSlow37 = powf(2.0f, 0.00083333335f * ((float)(dsp->fHslider25) + (float)(dsp->fHslider26)));
	float fSlow38 = 2e+01f * fSlow37;
	float fSlow39 = ((iSlow36) ? 4.4e+02f * fSlow37 * fSlow20 : fSlow38);
	float fSlow40 = mydsp_faustpower2_f((float)(dsp->fHslider27));
	float fSlow41 = mydsp_faustpower2_f((float)(dsp->fHslider28));
	float fSlow42 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider29));
	float fSlow43 = mydsp_faustpower2_f((float)(dsp->fHslider30));
	float fSlow44 = (float)(dsp->fHslider31);
	float fSlow45 = mydsp_faustpower2_f((float)(dsp->fHslider32));
	float fSlow46 = mydsp_faustpower2_f((float)(dsp->fHslider33));
	float fSlow47 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider34));
	float fSlow48 = mydsp_faustpower2_f((float)(dsp->fHslider35));
	int iSlow49 = (int)(fSlow34);
	float fSlow50 = dsp->fConst6 * fSlow20;
	float fSlow51 = dsp->fConst7 / fSlow20;
	float fSlow52 = 0.0022727272f / fSlow20;
	float fSlow53 = dsp->fConst0 / fSlow20;
	float fSlow54 = dsp->fConst8 / fSlow20;
	float fSlow55 = 4.656613e-10f * (float)(dsp->fHslider36);
	float fSlow56 = 0.16465649f * ((float)(dsp->fHslider37) + -0.707f);
	float fSlow57 = (float)(dsp->fHslider38);
	float fSlow58 = (fSlow57 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow59 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow60 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider41)) + 0.001f));
	float fSlow61 = (float)(dsp->fButton1);
	int iSlow62 = fSlow61 > 0.0f;
	int iSlow63 = fSlow61 == 0.0f;
	int iSlow64 = iSlow63 > 0;
	float fSlow65 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow66 = 4.4e+02f * fSlow65;
	float fSlow67 = dsp->fConst3 / fSlow65;
	float fSlow68 = dsp->fConst4 * fSlow65;
	float fSlow69 = ((iSlow36) ? 4.4e+02f * fSlow37 * fSlow65 : fSlow38);
	float fSlow70 = dsp->fConst6 * fSlow65;
	float fSlow71 = dsp->fConst7 / fSlow65;
	float fSlow72 = 0.0022727272f / fSlow65;
	float fSlow73 = dsp->fConst0 / fSlow65;
	float fSlow74 = dsp->fConst8 / fSlow65;
	float fSlow75 = (float)(dsp->fButton2);
	int iSlow76 = fSlow75 > 0.0f;
	int iSlow77 = fSlow75 == 0.0f;
	int iSlow78 = iSlow77 > 0;
	float fSlow79 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider43) + -69.0f));
	float fSlow80 = 4.4e+02f * fSlow79;
	float fSlow81 = dsp->fConst3 / fSlow79;
	float fSlow82 = dsp->fConst4 * fSlow79;
	float fSlow83 = ((iSlow36) ? 4.4e+02f * fSlow79 * fSlow37 : fSlow38);
	float fSlow84 = dsp->fConst6 * fSlow79;
	float fSlow85 = dsp->fConst7 / fSlow79;
	float fSlow86 = 0.0022727272f / fSlow79;
	float fSlow87 = dsp->fConst0 / fSlow79;
	float fSlow88 = dsp->fConst8 / fSlow79;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->iRec5[0] = 1103515245 * dsp->iRec5[1] + 12345;
			float fTemp0 = (float)(dsp->iRec5[0]);
			float fTemp1 = fSlow1 * fTemp0;
			int iTemp2 = 1 - dsp->iVec0[1];
			float fTemp3 = ((iTemp2) ? 0.0f : fSlow6 + dsp->fRec6[1]);
			dsp->fRec6[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = 2.0f * dsp->fRec6[0] + -1.0f;
			float fTemp5 = ((iSlow4) ? 2.0f * (1.0f - fabsf(fTemp4)) + -1.0f : ((iSlow5) ? 2.0f * (float)(dsp->fRec6[0] <= 0.5f) + -1.0f : fTemp4));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp5);
			float fTemp6 = fTemp5;
			float fTemp7 = fSlow2 * fTemp6;
			int iTemp8 = dsp->iRec7[1] == 0;
			int iTemp9 = dsp->iRec7[1] == 1;
			dsp->iRec9[0] = dsp->iRec9[1] + 1;
			int iTemp10 = (dsp->iRec9[0] + -1) == 0;
			float fTemp11 = ((iTemp10) ? 0.0f : dsp->fRec8[1]);
			dsp->iRec7[0] = ((iSlow9) ? ((iTemp8) ? 1 : ((iTemp9) ? ((fTemp11 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp12 = ((dsp->iRec7[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec1[0] = iSlow14;
			int iTemp13 = (dsp->iVec1[1] <= 0) & iSlow15;
			float fTemp14 = (float)(1 - iTemp13);
			float fTemp15 = (float)(iTemp13);
			dsp->fRec10[0] = dsp->fRec10[1] * fTemp14 + ((iTemp10) ? 1.0f : fTemp11) * fTemp15;
			float fTemp16 = ((iTemp8) ? dsp->fRec10[0] : 1.0f);
			float fTemp17 = ((fTemp12 == fTemp16) ? 0.5f : (fTemp11 - fTemp12) / (fTemp16 - fTemp12));
			dsp->fRec8[0] = fmaxf(fTemp12, fminf(1.0f, fTemp11 + 0.25f * (((iTemp8) ? -(fSlow13 * dsp->fRec10[0]) : ((iTemp9) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp17 + -1.0f) + (1.0f - fTemp17)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec8[0]);
			float fTemp18 = dsp->fRec8[0];
			float fTemp19 = (float)(dsp->iVec0[1]);
			float fTemp20 = fSlow22 * fTemp6;
			float fTemp21 = fSlow24 * fTemp0;
			float fTemp22 = powf(2.0f, 5.3333335f * (fTemp20 + fSlow23 * fTemp18 + fTemp21));
			float fTemp23 = fSlow21 * fTemp22;
			float fTemp24 = fmaxf(2e+01f, fabsf(fTemp23));
			float fTemp25 = ((iTemp2) ? 0.0f : dsp->fRec11[1] + dsp->fConst1 * fTemp24);
			dsp->fRec11[0] = fTemp25 - floorf(fTemp25);
			float fTemp26 = mydsp_faustpower2_f(2.0f * dsp->fRec11[0] + -1.0f);
			dsp->fVec2[0] = fTemp26;
			dsp->fVec3[dsp->IOTA0 & 8191] = fTemp19 * (fTemp26 - dsp->fVec2[1]) / fTemp24;
			float fTemp27 = fSlow27 * fTemp6;
			float fTemp28 = fSlow29 * fTemp0;
			float fTemp29 = fSlow26 + fTemp27 + fSlow28 * fTemp18 + fTemp28;
			float fTemp30 = fmaxf(fTemp23, 23.44895f);
			float fTemp31 = fmaxf(2e+01f, fabsf(fTemp30));
			float fTemp32 = ((iTemp2) ? 0.0f : dsp->fRec12[1] + dsp->fConst1 * fTemp31);
			dsp->fRec12[0] = fTemp32 - floorf(fTemp32);
			float fTemp33 = mydsp_faustpower2_f(2.0f * dsp->fRec12[0] + -1.0f);
			dsp->fVec4[0] = fTemp33;
			float fTemp34 = fTemp19 * (fTemp33 - dsp->fVec4[1]) / fTemp31;
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp34;
			float fTemp35 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp29 / fTemp30)));
			int iTemp36 = (int)(fTemp35);
			float fTemp37 = floorf(fTemp35);
			float fTemp38 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp30));
			int iTemp39 = (int)(fTemp38);
			float fTemp40 = floorf(fTemp38);
			dsp->fRec13[0] = 0.999f * dsp->fRec13[1] + dsp->fConst2 * (fTemp34 - dsp->fVec5[(dsp->IOTA0 - iTemp39) & 4095] * (fTemp40 + (1.0f - fTemp38)) - (fTemp38 - fTemp40) * dsp->fVec5[(dsp->IOTA0 - (iTemp39 + 1)) & 4095]);
			float fTemp41 = ((iSlow18) ? fSlow30 * dsp->fRec13[0] * fTemp22 : ((iSlow19) ? dsp->fConst2 * (fTemp34 - dsp->fVec5[(dsp->IOTA0 - iTemp36) & 4095] * (fTemp37 + (1.0f - fTemp35)) - (fTemp35 - fTemp37) * dsp->fVec5[(dsp->IOTA0 - (iTemp36 + 1)) & 4095]) : dsp->fConst2 * dsp->fVec3[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow25 * (fTemp29 / fTemp22) + 0.5f)))) & 8191]));
			float fTemp42 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp1 + fTemp7 + fSlow7 * fTemp18 + fSlow16 * fTemp41)), 1.0f));
			float fTemp43 = fSlow40 * fTemp6;
			float fTemp44 = fSlow42 * fTemp0;
			float fTemp45 = powf(2.0f, 5.3333335f * (fTemp43 + fSlow41 * fTemp18 + fTemp44 + fSlow43 * fTemp41));
			float fTemp46 = fSlow39 * fTemp45;
			float fTemp47 = fmaxf(2e+01f, fabsf(fTemp46));
			float fTemp48 = ((iTemp2) ? 0.0f : dsp->fRec14[1] + dsp->fConst1 * fTemp47);
			dsp->fRec14[0] = fTemp48 - floorf(fTemp48);
			float fTemp49 = mydsp_faustpower2_f(2.0f * dsp->fRec14[0] + -1.0f);
			dsp->fVec6[0] = fTemp49;
			dsp->fVec7[dsp->IOTA0 & 8191] = fTemp19 * (fTemp49 - dsp->fVec6[1]) / fTemp47;
			float fTemp50 = fSlow45 * fTemp6;
			float fTemp51 = fSlow47 * fTemp0;
			float fTemp52 = fSlow44 + fTemp50 + fSlow46 * fTemp18 + fTemp51 + fSlow48 * fTemp41;
			float fTemp53 = dsp->fConst0 * (fTemp52 / fTemp46);
			float fTemp54 = fmaxf(fTemp46, 23.44895f);
			float fTemp55 = fmaxf(2e+01f, fabsf(fTemp54));
			float fTemp56 = ((iTemp2) ? 0.0f : dsp->fRec15[1] + dsp->fConst1 * fTemp55);
			dsp->fRec15[0] = fTemp56 - floorf(fTemp56);
			float fTemp57 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec8[0] = fTemp57;
			float fTemp58 = fTemp19 * (fTemp57 - dsp->fVec8[1]) / fTemp55;
			dsp->fVec9[dsp->IOTA0 & 4095] = fTemp58;
			float fTemp59 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp52 / fTemp54)));
			int iTemp60 = (int)(fTemp59);
			float fTemp61 = floorf(fTemp59);
			float fTemp62 = fSlow50 * fTemp22;
			dsp->fRec16[0] = fmodf(dsp->fRec16[1] + fTemp62, 1.0f);
			int iTemp63 = dsp->fRec16[1] < dsp->fRec16[2];
			int iRec17 = iTemp63;
			float fTemp64 = dsp->fConst1 * fTemp46;
			dsp->fRec18[0] = ((iTemp63) ? 0.0f : fmodf(dsp->fRec18[1] + fTemp64, 1.0f));
			float fTemp65 = mydsp_faustpower2_f(2.0f * dsp->fRec18[0] + -1.0f);
			dsp->fVec10[0] = fTemp65;
			float fTemp66 = mydsp_faustpower2_f(2.0f * dsp->fRec16[0] + -1.0f);
			dsp->fVec11[0] = fTemp66;
			float fTemp67 = ((iTemp2) ? 0.0f : fTemp62 + dsp->fRec20[1]);
			dsp->fRec20[0] = fTemp67 - floorf(fTemp67);
			float fTemp68 = dsp->fRec20[0] / fTemp22;
			float fTemp69 = fSlow25 * fTemp68;
			int iTemp70 = fTemp69 < 1.0f;
			float fTemp71 = ((iTemp2 | iTemp70) ? fSlow52 * (dsp->fRec20[0] * fSlow39 * fTemp45 * (float)(iTemp70) / fTemp22) : fTemp64 + dsp->fRec19[1]);
			dsp->fRec19[0] = fTemp71 - floorf(fTemp71);
			float fTemp72 = dsp->fConst0 * (dsp->fRec19[0] / fTemp46);
			float fTemp73 = dsp->fConst0 / fTemp46;
			float fTemp74 = fTemp73 + -1.0f;
			int iTemp75 = (fTemp72 < 1.0f) + 2 * (fTemp72 > fTemp74);
			float fTemp76 = dsp->fRec19[0] + -1.0f;
			int iTemp77 = iTemp70 + 2 * (fTemp69 > (fSlow25 / fTemp22 + -1.0f));
			float fTemp78 = 1.0f - dsp->fRec20[0];
			float fTemp79 = fmodf(fTemp73 + fmodf(-(dsp->fConst0 * ((fTemp52 - dsp->fRec19[0]) / fTemp46)), fTemp73), fTemp73);
			int iTemp80 = (fTemp79 < 1.0f) + 2 * (fTemp79 > fTemp74);
			float fTemp81 = fTemp79 - fTemp73;
			float fTemp82 = fSlow55 * fTemp0;
			float fTemp83 = fTemp42 + 1.0f;
			float fTemp84 = fTemp42 * ((fSlow31 * fTemp41 + fSlow32 * ((iSlow33) ? ((iSlow49) ? ((iTemp75 == 0) ? 0.0f : ((iTemp75 == 1) ? dsp->fConst0 * (dsp->fRec19[0] * (2.0f - fTemp72) / fTemp46) + -1.0f : dsp->fConst0 * (fTemp76 * (dsp->fConst0 * (fTemp76 / fTemp46) + 2.0f) / fTemp46) + 1.0f)) + (float)(((fTemp72 < fTemp53) ? -1 : 1)) + ((fTemp72 >= fTemp53) ? ((iTemp77 == 0) ? 0.0f : ((iTemp77 == 1) ? fSlow53 * (dsp->fRec20[0] * (0.0045454544f - fSlow54 * fTemp68) / fTemp22) + -1.0f : fSlow53 * (fTemp78 * (fSlow54 * (fTemp78 / fTemp22) + -0.0045454544f) / fTemp22) + 1.0f)) : 0.0f) - ((iTemp80 == 0) ? 0.0f : ((iTemp80 == 1) ? fTemp79 * (2.0f - fTemp79) + -1.0f : fTemp81 * (fTemp81 + 2.0f) + 1.0f)) : ((iRec17) ? fSlow51 * ((fTemp66 - dsp->fVec11[1]) / fTemp22) : dsp->fConst2 * ((fTemp65 - dsp->fVec10[1]) / fTemp46))) : ((iSlow35) ? -(dsp->fConst2 * (dsp->fVec9[(dsp->IOTA0 - iTemp60) & 4095] * (fTemp61 + (1.0f - fTemp59)) - fTemp58 + (fTemp59 - fTemp61) * dsp->fVec9[(dsp->IOTA0 - (iTemp60 + 1)) & 4095])) : dsp->fConst2 * dsp->fVec7[(dsp->IOTA0 - max(0, min(8191, (int)(fTemp53 + 0.5f)))) & 8191])) + fTemp82 - fSlow56 * (1.0f - fTemp42 / fTemp83) * (dsp->fRec3[1] + fTemp42 * (dsp->fRec2[1] + fTemp42 * (dsp->fRec1[1] + fTemp42 * dsp->fRec0[1] / fTemp83) / fTemp83) / fTemp83)) / (fSlow56 * (mydsp_faustpower4_f(fTemp42) / mydsp_faustpower4_f(fTemp83)) + 1.0f) - dsp->fRec0[1]) / fTemp83;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp84;
			float fTemp85 = fTemp42 * (dsp->fRec0[1] + fTemp84 - dsp->fRec1[1]) / fTemp83;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp85;
			float fTemp86 = fTemp42 * (dsp->fRec1[1] + fTemp85 - dsp->fRec2[1]) / fTemp83;
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * fTemp86;
			float fTemp87 = fTemp42 * (dsp->fRec2[1] + fTemp86 - dsp->fRec3[1]) / fTemp83;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp87;
			float fRec4 = dsp->fRec3[1] + fTemp87;
			int iTemp88 = dsp->iRec21[1] == 0;
			int iTemp89 = dsp->iRec21[1] == 1;
			float fTemp90 = ((iTemp10) ? 0.0f : dsp->fRec22[1]);
			dsp->iRec21[0] = ((iSlow9) ? ((iTemp88) ? 1 : ((iTemp89) ? ((fTemp90 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp91 = ((dsp->iRec21[1] == 2) ? fSlow57 : 0.0f);
			dsp->fRec23[0] = fTemp14 * dsp->fRec23[1] + fTemp15 * ((iTemp10) ? 1.0f : fTemp90);
			float fTemp92 = ((iTemp88) ? dsp->fRec23[0] : 1.0f);
			float fTemp93 = ((fTemp91 == fTemp92) ? 0.5f : (fTemp90 - fTemp91) / (fTemp92 - fTemp91));
			dsp->fRec22[0] = fmaxf(fTemp91, fminf(1.0f, fTemp90 + 0.25f * (((iTemp88) ? -(fSlow60 * dsp->fRec23[0]) : ((iTemp89) ? fSlow59 : fSlow58)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp93 + -1.0f) + (1.0f - fTemp93)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec22[0]);
			int iTemp94 = dsp->iRec29[1] == 0;
			int iTemp95 = dsp->iRec29[1] == 1;
			float fTemp96 = ((iTemp10) ? 0.0f : dsp->fRec30[1]);
			dsp->iRec29[0] = ((iSlow62) ? ((iTemp94) ? 1 : ((iTemp95) ? ((fTemp96 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp97 = ((dsp->iRec29[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec12[0] = iSlow63;
			int iTemp98 = (dsp->iVec12[1] <= 0) & iSlow64;
			float fTemp99 = (float)(1 - iTemp98);
			float fTemp100 = (float)(iTemp98);
			dsp->fRec31[0] = dsp->fRec31[1] * fTemp99 + ((iTemp10) ? 1.0f : fTemp96) * fTemp100;
			float fTemp101 = ((iTemp94) ? dsp->fRec31[0] : 1.0f);
			float fTemp102 = ((fTemp97 == fTemp101) ? 0.5f : (fTemp96 - fTemp97) / (fTemp101 - fTemp97));
			dsp->fRec30[0] = fmaxf(fTemp97, fminf(1.0f, fTemp96 + 0.25f * (((iTemp94) ? -(fSlow13 * dsp->fRec31[0]) : ((iTemp95) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp102 + -1.0f) + (1.0f - fTemp102)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec30[0]);
			float fTemp103 = dsp->fRec30[0];
			float fTemp104 = powf(2.0f, 5.3333335f * (fTemp21 + fTemp20 + fSlow23 * fTemp103));
			float fTemp105 = fSlow66 * fTemp104;
			float fTemp106 = fmaxf(2e+01f, fabsf(fTemp105));
			float fTemp107 = ((iTemp2) ? 0.0f : dsp->fRec32[1] + dsp->fConst1 * fTemp106);
			dsp->fRec32[0] = fTemp107 - floorf(fTemp107);
			float fTemp108 = mydsp_faustpower2_f(2.0f * dsp->fRec32[0] + -1.0f);
			dsp->fVec13[0] = fTemp108;
			dsp->fVec14[dsp->IOTA0 & 8191] = fTemp19 * (fTemp108 - dsp->fVec13[1]) / fTemp106;
			float fTemp109 = fTemp27 + fTemp28;
			float fTemp110 = fSlow26 + fSlow28 * fTemp103 + fTemp109;
			float fTemp111 = fmaxf(fTemp105, 23.44895f);
			float fTemp112 = fmaxf(2e+01f, fabsf(fTemp111));
			float fTemp113 = ((iTemp2) ? 0.0f : dsp->fRec33[1] + dsp->fConst1 * fTemp112);
			dsp->fRec33[0] = fTemp113 - floorf(fTemp113);
			float fTemp114 = mydsp_faustpower2_f(2.0f * dsp->fRec33[0] + -1.0f);
			dsp->fVec15[0] = fTemp114;
			float fTemp115 = fTemp19 * (fTemp114 - dsp->fVec15[1]) / fTemp112;
			dsp->fVec16[dsp->IOTA0 & 4095] = fTemp115;
			float fTemp116 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp110 / fTemp111)));
			int iTemp117 = (int)(fTemp116);
			float fTemp118 = floorf(fTemp116);
			float fTemp119 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp111));
			int iTemp120 = (int)(fTemp119);
			float fTemp121 = floorf(fTemp119);
			dsp->fRec34[0] = 0.999f * dsp->fRec34[1] + dsp->fConst2 * (fTemp115 - dsp->fVec16[(dsp->IOTA0 - iTemp120) & 4095] * (fTemp121 + (1.0f - fTemp119)) - (fTemp119 - fTemp121) * dsp->fVec16[(dsp->IOTA0 - (iTemp120 + 1)) & 4095]);
			float fTemp122 = ((iSlow18) ? fSlow68 * dsp->fRec34[0] * fTemp104 : ((iSlow19) ? dsp->fConst2 * (fTemp115 - dsp->fVec16[(dsp->IOTA0 - iTemp117) & 4095] * (fTemp118 + (1.0f - fTemp116)) - (fTemp116 - fTemp118) * dsp->fVec16[(dsp->IOTA0 - (iTemp117 + 1)) & 4095]) : dsp->fConst2 * dsp->fVec14[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow67 * (fTemp110 / fTemp104) + 0.5f)))) & 8191]));
			float fTemp123 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp1 + fTemp7 + fSlow7 * fTemp103 + fSlow16 * fTemp122)), 1.0f));
			float fTemp124 = powf(2.0f, 5.3333335f * (fTemp44 + fTemp43 + fSlow41 * fTemp103 + fSlow43 * fTemp122));
			float fTemp125 = fSlow69 * fTemp124;
			float fTemp126 = fmaxf(2e+01f, fabsf(fTemp125));
			float fTemp127 = ((iTemp2) ? 0.0f : dsp->fRec35[1] + dsp->fConst1 * fTemp126);
			dsp->fRec35[0] = fTemp127 - floorf(fTemp127);
			float fTemp128 = mydsp_faustpower2_f(2.0f * dsp->fRec35[0] + -1.0f);
			dsp->fVec17[0] = fTemp128;
			dsp->fVec18[dsp->IOTA0 & 8191] = fTemp19 * (fTemp128 - dsp->fVec17[1]) / fTemp126;
			float fTemp129 = fSlow44 + fSlow46 * fTemp103 + fTemp50 + fTemp51 + fSlow48 * fTemp122;
			float fTemp130 = dsp->fConst0 * (fTemp129 / fTemp125);
			float fTemp131 = fmaxf(fTemp125, 23.44895f);
			float fTemp132 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp129 / fTemp131)));
			float fTemp133 = floorf(fTemp132);
			float fTemp134 = fmaxf(2e+01f, fabsf(fTemp131));
			float fTemp135 = ((iTemp2) ? 0.0f : dsp->fRec36[1] + dsp->fConst1 * fTemp134);
			dsp->fRec36[0] = fTemp135 - floorf(fTemp135);
			float fTemp136 = mydsp_faustpower2_f(2.0f * dsp->fRec36[0] + -1.0f);
			dsp->fVec19[0] = fTemp136;
			float fTemp137 = fTemp19 * (fTemp136 - dsp->fVec19[1]) / fTemp134;
			dsp->fVec20[dsp->IOTA0 & 4095] = fTemp137;
			int iTemp138 = (int)(fTemp132);
			float fTemp139 = fSlow70 * fTemp104;
			dsp->fRec37[0] = fmodf(dsp->fRec37[1] + fTemp139, 1.0f);
			int iTemp140 = dsp->fRec37[1] < dsp->fRec37[2];
			int iRec38 = iTemp140;
			float fTemp141 = dsp->fConst1 * fTemp125;
			dsp->fRec39[0] = ((iTemp140) ? 0.0f : fmodf(dsp->fRec39[1] + fTemp141, 1.0f));
			float fTemp142 = mydsp_faustpower2_f(2.0f * dsp->fRec39[0] + -1.0f);
			dsp->fVec21[0] = fTemp142;
			float fTemp143 = mydsp_faustpower2_f(2.0f * dsp->fRec37[0] + -1.0f);
			dsp->fVec22[0] = fTemp143;
			float fTemp144 = ((iTemp2) ? 0.0f : fTemp139 + dsp->fRec41[1]);
			dsp->fRec41[0] = fTemp144 - floorf(fTemp144);
			float fTemp145 = dsp->fRec41[0] / fTemp104;
			float fTemp146 = fSlow67 * fTemp145;
			int iTemp147 = fTemp146 < 1.0f;
			float fTemp148 = ((iTemp2 | iTemp147) ? fSlow72 * (dsp->fRec41[0] * fSlow69 * fTemp124 * (float)(iTemp147) / fTemp104) : fTemp141 + dsp->fRec40[1]);
			dsp->fRec40[0] = fTemp148 - floorf(fTemp148);
			float fTemp149 = dsp->fConst0 * (dsp->fRec40[0] / fTemp125);
			float fTemp150 = dsp->fConst0 / fTemp125;
			float fTemp151 = fTemp150 + -1.0f;
			int iTemp152 = (fTemp149 < 1.0f) + 2 * (fTemp149 > fTemp151);
			float fTemp153 = 1.0f - dsp->fRec40[0];
			int iTemp154 = iTemp147 + 2 * (fTemp146 > (fSlow67 / fTemp104 + -1.0f));
			float fTemp155 = 1.0f - dsp->fRec41[0];
			float fTemp156 = fmodf(fTemp150 + fmodf(-(dsp->fConst0 * ((fTemp129 - dsp->fRec40[0]) / fTemp125)), fTemp150), fTemp150);
			int iTemp157 = (fTemp156 < 1.0f) + 2 * (fTemp156 > fTemp151);
			float fTemp158 = fTemp156 - fTemp150;
			float fTemp159 = fTemp123 + 1.0f;
			float fTemp160 = fTemp123 * ((fSlow31 * fTemp122 + fTemp82 + fSlow32 * ((iSlow33) ? ((iSlow49) ? (float)(((fTemp149 < fTemp130) ? -1 : 1)) + ((iTemp152 == 0) ? 0.0f : ((iTemp152 == 1) ? dsp->fConst0 * (dsp->fRec40[0] * (2.0f - fTemp149) / fTemp125) + -1.0f : dsp->fConst0 * (fTemp153 * (dsp->fConst0 * (fTemp153 / fTemp125) + -2.0f) / fTemp125) + 1.0f)) + ((fTemp149 >= fTemp130) ? ((iTemp154 == 0) ? 0.0f : ((iTemp154 == 1) ? fSlow73 * (dsp->fRec41[0] * (0.0045454544f - fSlow74 * fTemp145) / fTemp104) + -1.0f : fSlow73 * (fTemp155 * (fSlow74 * (fTemp155 / fTemp104) + -0.0045454544f) / fTemp104) + 1.0f)) : 0.0f) - ((iTemp157 == 0) ? 0.0f : ((iTemp157 == 1) ? fTemp156 * (2.0f - fTemp156) + -1.0f : fTemp158 * (fTemp158 + 2.0f) + 1.0f)) : ((iRec38) ? fSlow71 * ((fTemp143 - dsp->fVec22[1]) / fTemp104) : dsp->fConst2 * ((fTemp142 - dsp->fVec21[1]) / fTemp125))) : ((iSlow35) ? -(dsp->fConst2 * ((fTemp132 - fTemp133) * dsp->fVec20[(dsp->IOTA0 - (iTemp138 + 1)) & 4095] - (fTemp137 - dsp->fVec20[(dsp->IOTA0 - iTemp138) & 4095] * (fTemp133 + (1.0f - fTemp132))))) : dsp->fConst2 * dsp->fVec18[(dsp->IOTA0 - max(0, min(8191, (int)(fTemp130 + 0.5f)))) & 8191])) - fSlow56 * (1.0f - fTemp123 / fTemp159) * (dsp->fRec27[1] + fTemp123 * (dsp->fRec26[1] + fTemp123 * (dsp->fRec25[1] + fTemp123 * dsp->fRec24[1] / fTemp159) / fTemp159) / fTemp159)) / (fSlow56 * (mydsp_faustpower4_f(fTemp123) / mydsp_faustpower4_f(fTemp159)) + 1.0f) - dsp->fRec24[1]) / fTemp159;
			dsp->fRec24[0] = dsp->fRec24[1] + 2.0f * fTemp160;
			float fTemp161 = fTemp123 * (dsp->fRec24[1] + fTemp160 - dsp->fRec25[1]) / fTemp159;
			dsp->fRec25[0] = dsp->fRec25[1] + 2.0f * fTemp161;
			float fTemp162 = fTemp123 * (dsp->fRec25[1] + fTemp161 - dsp->fRec26[1]) / fTemp159;
			dsp->fRec26[0] = dsp->fRec26[1] + 2.0f * fTemp162;
			float fTemp163 = fTemp123 * (dsp->fRec26[1] + fTemp162 - dsp->fRec27[1]) / fTemp159;
			dsp->fRec27[0] = dsp->fRec27[1] + 2.0f * fTemp163;
			float fRec28 = dsp->fRec27[1] + fTemp163;
			int iTemp164 = dsp->iRec42[1] == 0;
			int iTemp165 = dsp->iRec42[1] == 1;
			float fTemp166 = ((iTemp10) ? 0.0f : dsp->fRec43[1]);
			dsp->iRec42[0] = ((iSlow62) ? ((iTemp164) ? 1 : ((iTemp165) ? ((fTemp166 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp167 = ((dsp->iRec42[1] == 2) ? fSlow57 : 0.0f);
			dsp->fRec44[0] = fTemp99 * dsp->fRec44[1] + fTemp100 * ((iTemp10) ? 1.0f : fTemp166);
			float fTemp168 = ((iTemp164) ? dsp->fRec44[0] : 1.0f);
			float fTemp169 = ((fTemp167 == fTemp168) ? 0.5f : (fTemp166 - fTemp167) / (fTemp168 - fTemp167));
			dsp->fRec43[0] = fmaxf(fTemp167, fminf(1.0f, fTemp166 + 0.25f * (((iTemp164) ? -(fSlow60 * dsp->fRec44[0]) : ((iTemp165) ? fSlow59 : fSlow58)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp169 + -1.0f) + (1.0f - fTemp169)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec43[0]);
			int iTemp170 = dsp->iRec50[1] == 0;
			int iTemp171 = dsp->iRec50[1] == 1;
			float fTemp172 = ((iTemp10) ? 0.0f : dsp->fRec51[1]);
			dsp->iRec50[0] = ((iSlow76) ? ((iTemp170) ? 1 : ((iTemp171) ? ((fTemp172 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp173 = ((dsp->iRec50[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec23[0] = iSlow77;
			int iTemp174 = (dsp->iVec23[1] <= 0) & iSlow78;
			float fTemp175 = (float)(1 - iTemp174);
			float fTemp176 = (float)(iTemp174);
			dsp->fRec52[0] = dsp->fRec52[1] * fTemp175 + ((iTemp10) ? 1.0f : fTemp172) * fTemp176;
			float fTemp177 = ((iTemp170) ? dsp->fRec52[0] : 1.0f);
			float fTemp178 = ((fTemp173 == fTemp177) ? 0.5f : (fTemp172 - fTemp173) / (fTemp177 - fTemp173));
			dsp->fRec51[0] = fmaxf(fTemp173, fminf(1.0f, fTemp172 + 0.25f * (((iTemp170) ? -(fSlow13 * dsp->fRec52[0]) : ((iTemp171) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp178 + -1.0f) + (1.0f - fTemp178)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec51[0]);
			float fTemp179 = dsp->fRec51[0];
			float fTemp180 = powf(2.0f, 5.3333335f * (fTemp21 + fTemp20 + fSlow23 * fTemp179));
			float fTemp181 = fSlow80 * fTemp180;
			float fTemp182 = fmaxf(2e+01f, fabsf(fTemp181));
			float fTemp183 = ((iTemp2) ? 0.0f : dsp->fRec53[1] + dsp->fConst1 * fTemp182);
			dsp->fRec53[0] = fTemp183 - floorf(fTemp183);
			float fTemp184 = mydsp_faustpower2_f(2.0f * dsp->fRec53[0] + -1.0f);
			dsp->fVec24[0] = fTemp184;
			dsp->fVec25[dsp->IOTA0 & 8191] = fTemp19 * (fTemp184 - dsp->fVec24[1]) / fTemp182;
			float fTemp185 = fSlow26 + fTemp109 + fSlow28 * fTemp179;
			float fTemp186 = fmaxf(fTemp181, 23.44895f);
			float fTemp187 = fmaxf(2e+01f, fabsf(fTemp186));
			float fTemp188 = ((iTemp2) ? 0.0f : dsp->fRec54[1] + dsp->fConst1 * fTemp187);
			dsp->fRec54[0] = fTemp188 - floorf(fTemp188);
			float fTemp189 = mydsp_faustpower2_f(2.0f * dsp->fRec54[0] + -1.0f);
			dsp->fVec26[0] = fTemp189;
			float fTemp190 = fTemp19 * (fTemp189 - dsp->fVec26[1]) / fTemp187;
			dsp->fVec27[dsp->IOTA0 & 4095] = fTemp190;
			float fTemp191 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp185 / fTemp186)));
			int iTemp192 = (int)(fTemp191);
			float fTemp193 = floorf(fTemp191);
			float fTemp194 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp186));
			int iTemp195 = (int)(fTemp194);
			float fTemp196 = floorf(fTemp194);
			dsp->fRec55[0] = 0.999f * dsp->fRec55[1] - dsp->fConst2 * (dsp->fVec27[(dsp->IOTA0 - iTemp195) & 4095] * (fTemp196 + (1.0f - fTemp194)) - fTemp190 + (fTemp194 - fTemp196) * dsp->fVec27[(dsp->IOTA0 - (iTemp195 + 1)) & 4095]);
			float fTemp197 = ((iSlow18) ? fSlow82 * dsp->fRec55[0] * fTemp180 : ((iSlow19) ? dsp->fConst2 * (fTemp190 - dsp->fVec27[(dsp->IOTA0 - iTemp192) & 4095] * (fTemp193 + (1.0f - fTemp191)) - (fTemp191 - fTemp193) * dsp->fVec27[(dsp->IOTA0 - (iTemp192 + 1)) & 4095]) : dsp->fConst2 * dsp->fVec25[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow81 * (fTemp185 / fTemp180) + 0.5f)))) & 8191]));
			float fTemp198 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fSlow7 * fTemp179 + fTemp7 + fTemp1 + fSlow16 * fTemp197)), 1.0f));
			float fTemp199 = powf(2.0f, 5.3333335f * (fTemp44 + fTemp43 + fSlow41 * fTemp179 + fSlow43 * fTemp197));
			float fTemp200 = fSlow83 * fTemp199;
			float fTemp201 = fmaxf(2e+01f, fabsf(fTemp200));
			float fTemp202 = ((iTemp2) ? 0.0f : dsp->fRec56[1] + dsp->fConst1 * fTemp201);
			dsp->fRec56[0] = fTemp202 - floorf(fTemp202);
			float fTemp203 = mydsp_faustpower2_f(2.0f * dsp->fRec56[0] + -1.0f);
			dsp->fVec28[0] = fTemp203;
			dsp->fVec29[dsp->IOTA0 & 8191] = fTemp19 * (fTemp203 - dsp->fVec28[1]) / fTemp201;
			float fTemp204 = fSlow44 + fTemp51 + fTemp50 + fSlow46 * fTemp179 + fSlow48 * fTemp197;
			float fTemp205 = dsp->fConst0 * (fTemp204 / fTemp200);
			float fTemp206 = fmaxf(fTemp200, 23.44895f);
			float fTemp207 = fmaxf(2e+01f, fabsf(fTemp206));
			float fTemp208 = ((iTemp2) ? 0.0f : dsp->fRec57[1] + dsp->fConst1 * fTemp207);
			dsp->fRec57[0] = fTemp208 - floorf(fTemp208);
			float fTemp209 = mydsp_faustpower2_f(2.0f * dsp->fRec57[0] + -1.0f);
			dsp->fVec30[0] = fTemp209;
			float fTemp210 = fTemp19 * (fTemp209 - dsp->fVec30[1]) / fTemp207;
			dsp->fVec31[dsp->IOTA0 & 4095] = fTemp210;
			float fTemp211 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp204 / fTemp206)));
			int iTemp212 = (int)(fTemp211);
			float fTemp213 = floorf(fTemp211);
			float fTemp214 = fSlow84 * fTemp180;
			dsp->fRec58[0] = fmodf(dsp->fRec58[1] + fTemp214, 1.0f);
			int iTemp215 = dsp->fRec58[1] < dsp->fRec58[2];
			int iRec59 = iTemp215;
			float fTemp216 = dsp->fConst1 * fTemp200;
			dsp->fRec60[0] = ((iTemp215) ? 0.0f : fmodf(dsp->fRec60[1] + fTemp216, 1.0f));
			float fTemp217 = mydsp_faustpower2_f(2.0f * dsp->fRec60[0] + -1.0f);
			dsp->fVec32[0] = fTemp217;
			float fTemp218 = mydsp_faustpower2_f(2.0f * dsp->fRec58[0] + -1.0f);
			dsp->fVec33[0] = fTemp218;
			float fTemp219 = ((iTemp2) ? 0.0f : fTemp214 + dsp->fRec62[1]);
			dsp->fRec62[0] = fTemp219 - floorf(fTemp219);
			float fTemp220 = dsp->fRec62[0] / fTemp180;
			float fTemp221 = fSlow81 * fTemp220;
			int iTemp222 = fTemp221 < 1.0f;
			float fTemp223 = ((iTemp2 | iTemp222) ? fSlow86 * (dsp->fRec62[0] * fSlow83 * fTemp199 * (float)(iTemp222) / fTemp180) : fTemp216 + dsp->fRec61[1]);
			dsp->fRec61[0] = fTemp223 - floorf(fTemp223);
			float fTemp224 = dsp->fConst0 * (dsp->fRec61[0] / fTemp200);
			float fTemp225 = dsp->fConst0 / fTemp200;
			float fTemp226 = fTemp225 + -1.0f;
			int iTemp227 = (fTemp224 < 1.0f) + 2 * (fTemp224 > fTemp226);
			float fTemp228 = 1.0f - dsp->fRec61[0];
			int iTemp229 = iTemp222 + 2 * (fTemp221 > (fSlow81 / fTemp180 + -1.0f));
			float fTemp230 = 1.0f - dsp->fRec62[0];
			float fTemp231 = fmodf(fTemp225 + fmodf(-(dsp->fConst0 * ((fTemp204 - dsp->fRec61[0]) / fTemp200)), fTemp225), fTemp225);
			int iTemp232 = (fTemp231 < 1.0f) + 2 * (fTemp231 > fTemp226);
			float fTemp233 = fTemp231 - fTemp225;
			float fTemp234 = fTemp198 + 1.0f;
			float fTemp235 = fTemp198 * ((fSlow32 * ((iSlow33) ? ((iSlow49) ? (float)(((fTemp224 < fTemp205) ? -1 : 1)) + ((iTemp227 == 0) ? 0.0f : ((iTemp227 == 1) ? dsp->fConst0 * (dsp->fRec61[0] * (2.0f - fTemp224) / fTemp200) + -1.0f : dsp->fConst0 * (fTemp228 * (dsp->fConst0 * (fTemp228 / fTemp200) + -2.0f) / fTemp200) + 1.0f)) + ((fTemp224 >= fTemp205) ? ((iTemp229 == 0) ? 0.0f : ((iTemp229 == 1) ? fSlow87 * (dsp->fRec62[0] * (0.0045454544f - fSlow88 * fTemp220) / fTemp180) + -1.0f : fSlow87 * (fTemp230 * (fSlow88 * (fTemp230 / fTemp180) + -0.0045454544f) / fTemp180) + 1.0f)) : 0.0f) - ((iTemp232 == 0) ? 0.0f : ((iTemp232 == 1) ? fTemp231 * (2.0f - fTemp231) + -1.0f : fTemp233 * (fTemp233 + 2.0f) + 1.0f)) : ((iRec59) ? fSlow85 * ((fTemp218 - dsp->fVec33[1]) / fTemp180) : dsp->fConst2 * ((fTemp217 - dsp->fVec32[1]) / fTemp200))) : ((iSlow35) ? dsp->fConst2 * (fTemp210 - dsp->fVec31[(dsp->IOTA0 - iTemp212) & 4095] * (fTemp213 + (1.0f - fTemp211)) - (fTemp211 - fTemp213) * dsp->fVec31[(dsp->IOTA0 - (iTemp212 + 1)) & 4095]) : dsp->fConst2 * dsp->fVec29[(dsp->IOTA0 - max(0, min(8191, (int)(fTemp205 + 0.5f)))) & 8191])) + fTemp82 + fSlow31 * fTemp197 - fSlow56 * (1.0f - fTemp198 / fTemp234) * (dsp->fRec48[1] + fTemp198 * (dsp->fRec47[1] + fTemp198 * (dsp->fRec46[1] + fTemp198 * dsp->fRec45[1] / fTemp234) / fTemp234) / fTemp234)) / (fSlow56 * (mydsp_faustpower4_f(fTemp198) / mydsp_faustpower4_f(fTemp234)) + 1.0f) - dsp->fRec45[1]) / fTemp234;
			dsp->fRec45[0] = dsp->fRec45[1] + 2.0f * fTemp235;
			float fTemp236 = fTemp198 * (dsp->fRec45[1] + fTemp235 - dsp->fRec46[1]) / fTemp234;
			dsp->fRec46[0] = dsp->fRec46[1] + 2.0f * fTemp236;
			float fTemp237 = fTemp198 * (dsp->fRec46[1] + fTemp236 - dsp->fRec47[1]) / fTemp234;
			dsp->fRec47[0] = dsp->fRec47[1] + 2.0f * fTemp237;
			float fTemp238 = fTemp198 * (dsp->fRec47[1] + fTemp237 - dsp->fRec48[1]) / fTemp234;
			dsp->fRec48[0] = dsp->fRec48[1] + 2.0f * fTemp238;
			float fRec49 = dsp->fRec48[1] + fTemp238;
			int iTemp239 = dsp->iRec63[1] == 0;
			int iTemp240 = dsp->iRec63[1] == 1;
			float fTemp241 = ((iTemp10) ? 0.0f : dsp->fRec64[1]);
			dsp->iRec63[0] = ((iSlow76) ? ((iTemp239) ? 1 : ((iTemp240) ? ((fTemp241 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp242 = ((dsp->iRec63[1] == 2) ? fSlow57 : 0.0f);
			dsp->fRec65[0] = fTemp175 * dsp->fRec65[1] + fTemp176 * ((iTemp10) ? 1.0f : fTemp241);
			float fTemp243 = ((iTemp239) ? dsp->fRec65[0] : 1.0f);
			float fTemp244 = ((fTemp242 == fTemp243) ? 0.5f : (fTemp241 - fTemp242) / (fTemp243 - fTemp242));
			dsp->fRec64[0] = fmaxf(fTemp242, fminf(1.0f, fTemp241 + 0.25f * (((iTemp239) ? -(fSlow60 * dsp->fRec65[0]) : ((iTemp240) ? fSlow59 : fSlow58)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp244 + -1.0f) + (1.0f - fTemp244)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec64[0]);
			float fTemp245 = 0.4f * (fRec4 * dsp->fRec22[0] + fRec28 * dsp->fRec43[0] + fRec49 * dsp->fRec64[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp245);
			output1[i0] = (FAUSTFLOAT)(fTemp245);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->iRec9[1] = dsp->iRec9[0];
			dsp->iRec7[1] = dsp->iRec7[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec16[2] = dsp->fRec16[1];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec21[1] = dsp->iRec21[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->iRec29[1] = dsp->iRec29[0];
			dsp->iVec12[1] = dsp->iVec12[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fRec37[2] = dsp->fRec37[1];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->iRec42[1] = dsp->iRec42[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->iRec50[1] = dsp->iRec50[0];
			dsp->iVec23[1] = dsp->iVec23[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec58[2] = dsp->fRec58[1];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->iRec63[1] = dsp->iRec63[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec64[1] = dsp->fRec64[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
