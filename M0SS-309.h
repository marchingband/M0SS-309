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
	FAUSTFLOAT fHslider2;
	int fSampleRate;
	float fConst0;
	float fConst1;
	FAUSTFLOAT fHslider3;
	float fRec5[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fButton0;
	int iRec8[2];
	int iRec6[2];
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	int iVec1[2];
	float fRec9[2];
	float fRec7[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider9;
	int iRec10[2];
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	float fConst2;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	float fRec11[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[4096];
	FAUSTFLOAT fHslider19;
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	float fRec12[2];
	float fVec4[2];
	float fVec5[8192];
	float fConst3;
	float fConst4;
	float fRec13[2];
	FAUSTFLOAT fHslider23;
	FAUSTFLOAT fHslider24;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	FAUSTFLOAT fHslider27;
	FAUSTFLOAT fHslider28;
	float fRec14[2];
	float fVec6[2];
	float fVec7[4096];
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	float fRec15[2];
	float fVec8[2];
	float fVec9[8192];
	float fConst5;
	FAUSTFLOAT fHslider34;
	FAUSTFLOAT fHslider35;
	FAUSTFLOAT fHslider36;
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	int iRec16[2];
	FAUSTFLOAT fHslider37;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fButton1;
	int iRec24[2];
	int iVec10[2];
	float fRec26[2];
	float fRec25[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider41;
	float fRec27[2];
	float fVec11[2];
	float fVec12[4096];
	float fRec28[2];
	float fVec13[2];
	float fVec14[8192];
	float fRec29[2];
	float fRec30[2];
	float fVec15[2];
	float fVec16[4096];
	float fRec31[2];
	float fVec17[2];
	float fVec18[8192];
	float fRec19[2];
	float fRec20[2];
	float fRec21[2];
	float fRec22[2];
	int iRec32[2];
	float fRec34[2];
	float fRec33[2];
	FAUSTFLOAT fButton2;
	int iRec40[2];
	int iVec19[2];
	float fRec42[2];
	float fRec41[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec43[2];
	float fVec20[2];
	float fVec21[4096];
	float fRec44[2];
	float fVec22[2];
	float fVec23[8192];
	float fRec45[2];
	float fRec46[2];
	float fVec24[2];
	float fVec25[4096];
	float fRec47[2];
	float fVec26[2];
	float fVec27[8192];
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	float fRec38[2];
	int iRec48[2];
	float fRec50[2];
	float fRec49[2];
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
	dsp->fHslider2 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(3.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider12 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider22 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider23 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider24 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider25 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider26 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(1e+01f);
	dsp->fHslider37 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider38 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.02f);
	dsp->fHslider40 = (FAUSTFLOAT)(6.0f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider41 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(4e+01f);
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
			dsp->fRec5[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->iRec8[l2] = 0;
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
			dsp->iVec1[l4] = 0;
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
			dsp->fRec7[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->iRec10[l7] = 0;
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
		for (l10 = 0; l10 < 4096; l10 = l10 + 1) {
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
		for (l13 = 0; l13 < 8192; l13 = l13 + 1) {
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
		for (l17 = 0; l17 < 4096; l17 = l17 + 1) {
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
		for (l20 = 0; l20 < 8192; l20 = l20 + 1) {
			dsp->fVec9[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec0[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec1[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec2[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec3[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->iRec16[l25] = 0;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec18[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec17[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->iRec24[l28] = 0;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->iVec10[l29] = 0;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec26[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec25[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec27[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fVec11[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 4096; l34 = l34 + 1) {
			dsp->fVec12[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec28[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fVec13[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 8192; l37 = l37 + 1) {
			dsp->fVec14[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec29[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec30[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fVec15[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 4096; l41 = l41 + 1) {
			dsp->fVec16[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec31[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fVec17[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 8192; l44 = l44 + 1) {
			dsp->fVec18[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec19[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec20[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec21[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec22[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->iRec32[l49] = 0;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec34[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec33[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->iRec40[l52] = 0;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->iVec19[l53] = 0;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec42[l54] = 0.0f;
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
			dsp->fRec43[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fVec20[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 4096; l58 = l58 + 1) {
			dsp->fVec21[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec44[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fVec22[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 8192; l61 = l61 + 1) {
			dsp->fVec23[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec45[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec46[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fVec24[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 4096; l65 = l65 + 1) {
			dsp->fVec25[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec47[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fVec26[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 8192; l68 = l68 + 1) {
			dsp->fVec27[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec35[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec36[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec37[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec38[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->iRec48[l73] = 0;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec50[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec49[l75] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 1.0f / dsp->fConst0;
	dsp->fConst2 = 0.25f * dsp->fConst0;
	dsp->fConst3 = 4.0f / dsp->fConst0;
	dsp->fConst4 = 0.5f * dsp->fConst0;
	dsp->fConst5 = 0.0022727272f * dsp->fConst0;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "mod", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider39, (FAUSTFLOAT)0.02f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "mod", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider38, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider37, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "mod", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider40, (FAUSTFLOAT)6.0f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider7, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider6, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider5, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "mod", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider8, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)2e+01f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider0, (FAUSTFLOAT)0.8f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider36, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)25.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "22");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "mod", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider3, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "sel", "23");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider2, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "25");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider16, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "env_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph0", &dsp->fVbargraph1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "env_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph1", &dsp->fVbargraph2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "env_2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph2", &dsp->fVbargraph3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider15, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider41, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "alt", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider23, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "alt-sel", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider29, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "alt", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider12, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider19, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)1e+02f);
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
	float fSlow1 = (float)(dsp->fHslider1);
	float fSlow2 = (float)(dsp->fHslider2);
	int iSlow3 = fSlow2 >= 2.0f;
	int iSlow4 = fSlow2 >= 1.0f;
	float fSlow5 = dsp->fConst1 * (float)(dsp->fHslider3);
	float fSlow6 = (float)(dsp->fHslider4);
	float fSlow7 = (float)(dsp->fButton0);
	int iSlow8 = fSlow7 > 0.0f;
	float fSlow9 = (float)(dsp->fHslider5);
	float fSlow10 = (fSlow9 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider6));
	float fSlow11 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider7));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider8));
	int iSlow13 = fSlow7 == 0.0f;
	int iSlow14 = iSlow13 > 0;
	float fSlow15 = 4.656613e-10f * (float)(dsp->fHslider9);
	float fSlow16 = (float)(dsp->fHslider10);
	float fSlow17 = (float)(dsp->fHslider11);
	int iSlow18 = fSlow17 >= 2.0f;
	int iSlow19 = fSlow17 >= 1.0f;
	int iSlow20 = (float)(dsp->fHslider12) >= 1.0f;
	float fSlow21 = powf(2.0f, 0.00083333335f * ((float)(dsp->fHslider13) + (float)(dsp->fHslider14)));
	float fSlow22 = 2e+01f * fSlow21;
	float fSlow23 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider15) + -69.0f));
	float fSlow24 = ((iSlow20) ? 4.4e+02f * fSlow21 * fSlow23 : fSlow22);
	float fSlow25 = (float)(dsp->fHslider16);
	float fSlow26 = (float)(dsp->fHslider17);
	float fSlow27 = 4.656613e-10f * (float)(dsp->fHslider18);
	float fSlow28 = (float)(dsp->fHslider19);
	float fSlow29 = (float)(dsp->fHslider20);
	float fSlow30 = (float)(dsp->fHslider21);
	float fSlow31 = 4.656613e-10f * (float)(dsp->fHslider22);
	float fSlow32 = (float)(dsp->fHslider23);
	int iSlow33 = (float)(dsp->fHslider24) >= 1.0f;
	float fSlow34 = 4.4e+02f * fSlow23;
	float fSlow35 = (float)(dsp->fHslider25);
	float fSlow36 = (float)(dsp->fHslider26);
	float fSlow37 = 4.656613e-10f * (float)(dsp->fHslider27);
	float fSlow38 = (float)(dsp->fHslider28);
	float fSlow39 = (float)(dsp->fHslider29);
	float fSlow40 = (float)(dsp->fHslider30);
	float fSlow41 = (float)(dsp->fHslider31);
	float fSlow42 = 4.656613e-10f * (float)(dsp->fHslider32);
	float fSlow43 = (float)(dsp->fHslider33);
	float fSlow44 = dsp->fConst5 / fSlow23;
	float fSlow45 = (float)(dsp->fHslider34);
	float fSlow46 = 4.656613e-10f * (float)(dsp->fHslider35);
	float fSlow47 = 0.16465649f * ((float)(dsp->fHslider36) + -0.707f);
	float fSlow48 = (float)(dsp->fHslider37);
	float fSlow49 = (fSlow48 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider38));
	float fSlow50 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider39));
	float fSlow51 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (float)(dsp->fHslider40));
	float fSlow52 = (float)(dsp->fButton1);
	int iSlow53 = fSlow52 > 0.0f;
	int iSlow54 = fSlow52 == 0.0f;
	int iSlow55 = iSlow54 > 0;
	float fSlow56 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider41) + -69.0f));
	float fSlow57 = ((iSlow20) ? 4.4e+02f * fSlow21 * fSlow56 : fSlow22);
	float fSlow58 = 4.4e+02f * fSlow56;
	float fSlow59 = dsp->fConst5 / fSlow56;
	float fSlow60 = (float)(dsp->fButton2);
	int iSlow61 = fSlow60 > 0.0f;
	int iSlow62 = fSlow60 == 0.0f;
	int iSlow63 = iSlow62 > 0;
	float fSlow64 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow65 = ((iSlow20) ? 4.4e+02f * fSlow21 * fSlow64 : fSlow22);
	float fSlow66 = 4.4e+02f * fSlow64;
	float fSlow67 = dsp->fConst5 / fSlow64;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			int iTemp0 = 1 - dsp->iVec0[1];
			float fTemp1 = ((iTemp0) ? 0.0f : fSlow5 + dsp->fRec5[1]);
			dsp->fRec5[0] = fTemp1 - floorf(fTemp1);
			float fTemp2 = 2.0f * dsp->fRec5[0] + -1.0f;
			float fTemp3 = ((iSlow3) ? 2.0f * (1.0f - fabsf(fTemp2)) + -1.0f : ((iSlow4) ? 2.0f * (float)(dsp->fRec5[0] <= 0.5f) + -1.0f : fTemp2));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp3);
			float fTemp4 = fTemp3;
			float fTemp5 = fSlow1 * fTemp4;
			int iTemp6 = dsp->iRec6[1] == 0;
			int iTemp7 = dsp->iRec6[1] == 1;
			dsp->iRec8[0] = dsp->iRec8[1] + 1;
			int iTemp8 = (dsp->iRec8[0] + -1) == 0;
			float fTemp9 = ((iTemp8) ? 0.0f : dsp->fRec7[1]);
			dsp->iRec6[0] = ((iSlow8) ? ((iTemp6) ? 1 : ((iTemp7) ? ((fTemp9 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp10 = ((dsp->iRec6[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec1[0] = iSlow13;
			int iTemp11 = (dsp->iVec1[1] <= 0) & iSlow14;
			float fTemp12 = (float)(1 - iTemp11);
			float fTemp13 = (float)(iTemp11);
			dsp->fRec9[0] = dsp->fRec9[1] * fTemp12 + ((iTemp8) ? 1.0f : fTemp9) * fTemp13;
			float fTemp14 = ((iTemp6) ? dsp->fRec9[0] : 1.0f);
			float fTemp15 = ((fTemp10 == fTemp14) ? 0.5f : (fTemp9 - fTemp10) / (fTemp14 - fTemp10));
			dsp->fRec7[0] = fmaxf(fTemp10, fminf(1.0f, fTemp9 + 0.25f * (((iTemp6) ? -(fSlow12 * dsp->fRec9[0]) : ((iTemp7) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp15 + -1.0f) + (1.0f - fTemp15)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec7[0]);
			float fTemp16 = dsp->fRec7[0];
			dsp->iRec10[0] = 1103515245 * dsp->iRec10[1] + 12345;
			float fTemp17 = (float)(dsp->iRec10[0]);
			float fTemp18 = fSlow15 * fTemp17;
			float fTemp19 = (float)(dsp->iVec0[1]);
			float fTemp20 = fSlow25 * fTemp4;
			float fTemp21 = fSlow27 * fTemp17;
			float fTemp22 = powf(2.0f, 10.666667f * (fTemp20 + fSlow26 * fTemp16 + fTemp21));
			float fTemp23 = fSlow24 * fTemp22;
			float fTemp24 = fmaxf(fTemp23, 23.44895f);
			float fTemp25 = fmaxf(2e+01f, fabsf(fTemp24));
			float fTemp26 = ((iTemp0) ? 0.0f : dsp->fRec11[1] + dsp->fConst1 * fTemp25);
			dsp->fRec11[0] = fTemp26 - floorf(fTemp26);
			float fTemp27 = mydsp_faustpower2_f(2.0f * dsp->fRec11[0] + -1.0f);
			dsp->fVec2[0] = fTemp27;
			float fTemp28 = fTemp19 * (fTemp27 - dsp->fVec2[1]) / fTemp25;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp28;
			float fTemp29 = fSlow29 * fTemp4;
			float fTemp30 = fSlow31 * fTemp17;
			float fTemp31 = fSlow28 + fTemp29 + fSlow30 * fTemp16 + fTemp30;
			float fTemp32 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp31 / fTemp24)));
			int iTemp33 = (int)(fTemp32);
			float fTemp34 = floorf(fTemp32);
			float fTemp35 = fmaxf(2e+01f, fabsf(fTemp23));
			float fTemp36 = ((iTemp0) ? 0.0f : dsp->fRec12[1] + dsp->fConst1 * fTemp35);
			dsp->fRec12[0] = fTemp36 - floorf(fTemp36);
			float fTemp37 = mydsp_faustpower2_f(2.0f * dsp->fRec12[0] + -1.0f);
			dsp->fVec4[0] = fTemp37;
			dsp->fVec5[dsp->IOTA0 & 8191] = fTemp19 * (fTemp37 - dsp->fVec4[1]) / fTemp35;
			float fTemp38 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst4 / fTemp24));
			int iTemp39 = (int)(fTemp38);
			float fTemp40 = floorf(fTemp38);
			dsp->fRec13[0] = 0.999f * dsp->fRec13[1] + dsp->fConst2 * (fTemp28 - dsp->fVec3[(dsp->IOTA0 - iTemp39) & 4095] * (fTemp40 + (1.0f - fTemp38)) - (fTemp38 - fTemp40) * dsp->fVec3[(dsp->IOTA0 - (iTemp39 + 1)) & 4095]);
			float fTemp41 = ((iSlow18) ? dsp->fConst3 * dsp->fRec13[0] * fSlow24 * fTemp22 : ((iSlow19) ? dsp->fConst2 * dsp->fVec5[(dsp->IOTA0 - max(0, min(8191, (int)(dsp->fConst0 * (fTemp31 / fTemp23) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp28 - dsp->fVec3[(dsp->IOTA0 - iTemp33) & 4095] * (fTemp34 + (1.0f - fTemp32)) - (fTemp32 - fTemp34) * dsp->fVec3[(dsp->IOTA0 - (iTemp33 + 1)) & 4095])));
			float fTemp42 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp5 + fSlow6 * fTemp16 + fTemp18 + fSlow16 * fTemp41)), 1.0f));
			float fTemp43 = fSlow35 * fTemp4;
			float fTemp44 = fSlow37 * fTemp17;
			float fTemp45 = powf(2.0f, 10.666667f * (fTemp43 + fSlow36 * fTemp16 + fTemp44 + fSlow38 * fTemp41));
			float fTemp46 = fSlow34 * fTemp45;
			float fTemp47 = fmaxf(fTemp46, 23.44895f);
			float fTemp48 = fmaxf(2e+01f, fabsf(fTemp47));
			float fTemp49 = ((iTemp0) ? 0.0f : dsp->fRec14[1] + dsp->fConst1 * fTemp48);
			dsp->fRec14[0] = fTemp49 - floorf(fTemp49);
			float fTemp50 = mydsp_faustpower2_f(2.0f * dsp->fRec14[0] + -1.0f);
			dsp->fVec6[0] = fTemp50;
			float fTemp51 = fTemp19 * (fTemp50 - dsp->fVec6[1]) / fTemp48;
			dsp->fVec7[dsp->IOTA0 & 4095] = fTemp51;
			float fTemp52 = fSlow40 * fTemp4;
			float fTemp53 = fSlow42 * fTemp17;
			float fTemp54 = fSlow39 + fTemp52 + fSlow41 * fTemp16 + fTemp53 + fSlow43 * fTemp41;
			float fTemp55 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp54 / fTemp47)));
			int iTemp56 = (int)(fTemp55);
			float fTemp57 = floorf(fTemp55);
			float fTemp58 = fmaxf(2e+01f, fabsf(fTemp46));
			float fTemp59 = ((iTemp0) ? 0.0f : dsp->fRec15[1] + dsp->fConst1 * fTemp58);
			dsp->fRec15[0] = fTemp59 - floorf(fTemp59);
			float fTemp60 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec8[0] = fTemp60;
			dsp->fVec9[dsp->IOTA0 & 8191] = fTemp19 * (fTemp60 - dsp->fVec8[1]) / fTemp58;
			float fTemp61 = fSlow46 * fTemp17;
			float fTemp62 = fTemp42 + 1.0f;
			float fTemp63 = fTemp42 * ((fSlow32 * ((iSlow33) ? dsp->fConst2 * dsp->fVec9[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow44 * (fTemp54 / fTemp45) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp51 - dsp->fVec7[(dsp->IOTA0 - iTemp56) & 4095] * (fTemp57 + (1.0f - fTemp55)) - (fTemp55 - fTemp57) * dsp->fVec7[(dsp->IOTA0 - (iTemp56 + 1)) & 4095])) + fSlow45 * fTemp41 + fTemp61 - fSlow47 * (1.0f - fTemp42 / fTemp62) * (dsp->fRec3[1] + fTemp42 * (dsp->fRec2[1] + fTemp42 * (dsp->fRec1[1] + fTemp42 * dsp->fRec0[1] / fTemp62) / fTemp62) / fTemp62)) / (fSlow47 * (mydsp_faustpower4_f(fTemp42) / mydsp_faustpower4_f(fTemp62)) + 1.0f) - dsp->fRec0[1]) / fTemp62;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp63;
			float fTemp64 = fTemp42 * (dsp->fRec0[1] + fTemp63 - dsp->fRec1[1]) / fTemp62;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp64;
			float fTemp65 = fTemp42 * (dsp->fRec1[1] + fTemp64 - dsp->fRec2[1]) / fTemp62;
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * fTemp65;
			float fTemp66 = fTemp42 * (dsp->fRec2[1] + fTemp65 - dsp->fRec3[1]) / fTemp62;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp66;
			float fRec4 = dsp->fRec3[1] + fTemp66;
			int iTemp67 = dsp->iRec16[1] == 0;
			int iTemp68 = dsp->iRec16[1] == 1;
			float fTemp69 = ((iTemp8) ? 0.0f : dsp->fRec17[1]);
			dsp->iRec16[0] = ((iSlow8) ? ((iTemp67) ? 1 : ((iTemp68) ? ((fTemp69 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp70 = ((dsp->iRec16[1] == 2) ? fSlow48 : 0.0f);
			dsp->fRec18[0] = fTemp12 * dsp->fRec18[1] + fTemp13 * ((iTemp8) ? 1.0f : fTemp69);
			float fTemp71 = ((iTemp67) ? dsp->fRec18[0] : 1.0f);
			float fTemp72 = ((fTemp70 == fTemp71) ? 0.5f : (fTemp69 - fTemp70) / (fTemp71 - fTemp70));
			dsp->fRec17[0] = fmaxf(fTemp70, fminf(1.0f, fTemp69 + 0.25f * (((iTemp67) ? -(fSlow51 * dsp->fRec18[0]) : ((iTemp68) ? fSlow50 : fSlow49)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp72 + -1.0f) + (1.0f - fTemp72)))));
			int iTemp73 = dsp->iRec24[1] == 0;
			int iTemp74 = dsp->iRec24[1] == 1;
			float fTemp75 = ((iTemp8) ? 0.0f : dsp->fRec25[1]);
			dsp->iRec24[0] = ((iSlow53) ? ((iTemp73) ? 1 : ((iTemp74) ? ((fTemp75 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp76 = ((dsp->iRec24[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec10[0] = iSlow54;
			int iTemp77 = (dsp->iVec10[1] <= 0) & iSlow55;
			float fTemp78 = (float)(1 - iTemp77);
			float fTemp79 = (float)(iTemp77);
			dsp->fRec26[0] = dsp->fRec26[1] * fTemp78 + ((iTemp8) ? 1.0f : fTemp75) * fTemp79;
			float fTemp80 = ((iTemp73) ? dsp->fRec26[0] : 1.0f);
			float fTemp81 = ((fTemp76 == fTemp80) ? 0.5f : (fTemp75 - fTemp76) / (fTemp80 - fTemp76));
			dsp->fRec25[0] = fmaxf(fTemp76, fminf(1.0f, fTemp75 + 0.25f * (((iTemp73) ? -(fSlow12 * dsp->fRec26[0]) : ((iTemp74) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp81 + -1.0f) + (1.0f - fTemp81)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec25[0]);
			float fTemp82 = dsp->fRec25[0];
			float fTemp83 = fTemp5 + fTemp18;
			float fTemp84 = fTemp20 + fTemp21;
			float fTemp85 = powf(2.0f, 10.666667f * (fSlow26 * fTemp82 + fTemp84));
			float fTemp86 = fSlow57 * fTemp85;
			float fTemp87 = fmaxf(fTemp86, 23.44895f);
			float fTemp88 = fmaxf(2e+01f, fabsf(fTemp87));
			float fTemp89 = ((iTemp0) ? 0.0f : dsp->fRec27[1] + dsp->fConst1 * fTemp88);
			dsp->fRec27[0] = fTemp89 - floorf(fTemp89);
			float fTemp90 = mydsp_faustpower2_f(2.0f * dsp->fRec27[0] + -1.0f);
			dsp->fVec11[0] = fTemp90;
			float fTemp91 = fTemp19 * (fTemp90 - dsp->fVec11[1]) / fTemp88;
			dsp->fVec12[dsp->IOTA0 & 4095] = fTemp91;
			float fTemp92 = fTemp29 + fTemp30;
			float fTemp93 = fSlow28 + fSlow30 * fTemp82 + fTemp92;
			float fTemp94 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp93 / fTemp87)));
			int iTemp95 = (int)(fTemp94);
			float fTemp96 = floorf(fTemp94);
			float fTemp97 = fmaxf(2e+01f, fabsf(fTemp86));
			float fTemp98 = ((iTemp0) ? 0.0f : dsp->fRec28[1] + dsp->fConst1 * fTemp97);
			dsp->fRec28[0] = fTemp98 - floorf(fTemp98);
			float fTemp99 = mydsp_faustpower2_f(2.0f * dsp->fRec28[0] + -1.0f);
			dsp->fVec13[0] = fTemp99;
			dsp->fVec14[dsp->IOTA0 & 8191] = fTemp19 * (fTemp99 - dsp->fVec13[1]) / fTemp97;
			float fTemp100 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst4 / fTemp87));
			int iTemp101 = (int)(fTemp100);
			float fTemp102 = floorf(fTemp100);
			dsp->fRec29[0] = 0.999f * dsp->fRec29[1] + dsp->fConst2 * (fTemp91 - dsp->fVec12[(dsp->IOTA0 - iTemp101) & 4095] * (fTemp102 + (1.0f - fTemp100)) - (fTemp100 - fTemp102) * dsp->fVec12[(dsp->IOTA0 - (iTemp101 + 1)) & 4095]);
			float fTemp103 = ((iSlow18) ? dsp->fConst3 * dsp->fRec29[0] * fSlow57 * fTemp85 : ((iSlow19) ? dsp->fConst2 * dsp->fVec14[(dsp->IOTA0 - max(0, min(8191, (int)(dsp->fConst0 * (fTemp93 / fTemp86) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp91 - dsp->fVec12[(dsp->IOTA0 - iTemp95) & 4095] * (fTemp96 + (1.0f - fTemp94)) - (fTemp94 - fTemp96) * dsp->fVec12[(dsp->IOTA0 - (iTemp95 + 1)) & 4095])));
			float fTemp104 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fSlow6 * fTemp82 + fTemp83 + fSlow16 * fTemp103)), 1.0f));
			float fTemp105 = fTemp43 + fTemp44;
			float fTemp106 = powf(2.0f, 10.666667f * (fSlow36 * fTemp82 + fTemp105 + fSlow38 * fTemp103));
			float fTemp107 = fSlow58 * fTemp106;
			float fTemp108 = fmaxf(fTemp107, 23.44895f);
			float fTemp109 = fmaxf(2e+01f, fabsf(fTemp108));
			float fTemp110 = ((iTemp0) ? 0.0f : dsp->fRec30[1] + dsp->fConst1 * fTemp109);
			dsp->fRec30[0] = fTemp110 - floorf(fTemp110);
			float fTemp111 = mydsp_faustpower2_f(2.0f * dsp->fRec30[0] + -1.0f);
			dsp->fVec15[0] = fTemp111;
			float fTemp112 = fTemp19 * (fTemp111 - dsp->fVec15[1]) / fTemp109;
			dsp->fVec16[dsp->IOTA0 & 4095] = fTemp112;
			float fTemp113 = fTemp52 + fTemp53;
			float fTemp114 = fSlow39 + fSlow41 * fTemp82 + fTemp113 + fSlow43 * fTemp103;
			float fTemp115 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp114 / fTemp108)));
			int iTemp116 = (int)(fTemp115);
			float fTemp117 = floorf(fTemp115);
			float fTemp118 = fmaxf(2e+01f, fabsf(fTemp107));
			float fTemp119 = ((iTemp0) ? 0.0f : dsp->fRec31[1] + dsp->fConst1 * fTemp118);
			dsp->fRec31[0] = fTemp119 - floorf(fTemp119);
			float fTemp120 = mydsp_faustpower2_f(2.0f * dsp->fRec31[0] + -1.0f);
			dsp->fVec17[0] = fTemp120;
			dsp->fVec18[dsp->IOTA0 & 8191] = fTemp19 * (fTemp120 - dsp->fVec17[1]) / fTemp118;
			float fTemp121 = fTemp104 + 1.0f;
			float fTemp122 = fTemp104 * ((fSlow45 * fTemp103 + fTemp61 + fSlow32 * ((iSlow33) ? dsp->fConst2 * dsp->fVec18[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow59 * (fTemp114 / fTemp106) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp112 - dsp->fVec16[(dsp->IOTA0 - iTemp116) & 4095] * (fTemp117 + (1.0f - fTemp115)) - (fTemp115 - fTemp117) * dsp->fVec16[(dsp->IOTA0 - (iTemp116 + 1)) & 4095])) - fSlow47 * (1.0f - fTemp104 / fTemp121) * (dsp->fRec22[1] + fTemp104 * (dsp->fRec21[1] + fTemp104 * (dsp->fRec20[1] + fTemp104 * dsp->fRec19[1] / fTemp121) / fTemp121) / fTemp121)) / (fSlow47 * (mydsp_faustpower4_f(fTemp104) / mydsp_faustpower4_f(fTemp121)) + 1.0f) - dsp->fRec19[1]) / fTemp121;
			dsp->fRec19[0] = dsp->fRec19[1] + 2.0f * fTemp122;
			float fTemp123 = fTemp104 * (dsp->fRec19[1] + fTemp122 - dsp->fRec20[1]) / fTemp121;
			dsp->fRec20[0] = dsp->fRec20[1] + 2.0f * fTemp123;
			float fTemp124 = fTemp104 * (dsp->fRec20[1] + fTemp123 - dsp->fRec21[1]) / fTemp121;
			dsp->fRec21[0] = dsp->fRec21[1] + 2.0f * fTemp124;
			float fTemp125 = fTemp104 * (dsp->fRec21[1] + fTemp124 - dsp->fRec22[1]) / fTemp121;
			dsp->fRec22[0] = dsp->fRec22[1] + 2.0f * fTemp125;
			float fRec23 = dsp->fRec22[1] + fTemp125;
			int iTemp126 = dsp->iRec32[1] == 0;
			int iTemp127 = dsp->iRec32[1] == 1;
			float fTemp128 = ((iTemp8) ? 0.0f : dsp->fRec33[1]);
			dsp->iRec32[0] = ((iSlow53) ? ((iTemp126) ? 1 : ((iTemp127) ? ((fTemp128 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp129 = ((dsp->iRec32[1] == 2) ? fSlow48 : 0.0f);
			dsp->fRec34[0] = fTemp78 * dsp->fRec34[1] + fTemp79 * ((iTemp8) ? 1.0f : fTemp128);
			float fTemp130 = ((iTemp126) ? dsp->fRec34[0] : 1.0f);
			float fTemp131 = ((fTemp129 == fTemp130) ? 0.5f : (fTemp128 - fTemp129) / (fTemp130 - fTemp129));
			dsp->fRec33[0] = fmaxf(fTemp129, fminf(1.0f, fTemp128 + 0.25f * (((iTemp126) ? -(fSlow51 * dsp->fRec34[0]) : ((iTemp127) ? fSlow50 : fSlow49)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp131 + -1.0f) + (1.0f - fTemp131)))));
			int iTemp132 = dsp->iRec40[1] == 0;
			int iTemp133 = dsp->iRec40[1] == 1;
			float fTemp134 = ((iTemp8) ? 0.0f : dsp->fRec41[1]);
			dsp->iRec40[0] = ((iSlow61) ? ((iTemp132) ? 1 : ((iTemp133) ? ((fTemp134 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp135 = ((dsp->iRec40[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec19[0] = iSlow62;
			int iTemp136 = (dsp->iVec19[1] <= 0) & iSlow63;
			float fTemp137 = (float)(1 - iTemp136);
			float fTemp138 = (float)(iTemp136);
			dsp->fRec42[0] = dsp->fRec42[1] * fTemp137 + ((iTemp8) ? 1.0f : fTemp134) * fTemp138;
			float fTemp139 = ((iTemp132) ? dsp->fRec42[0] : 1.0f);
			float fTemp140 = ((fTemp135 == fTemp139) ? 0.5f : (fTemp134 - fTemp135) / (fTemp139 - fTemp135));
			dsp->fRec41[0] = fmaxf(fTemp135, fminf(1.0f, fTemp134 + 0.25f * (((iTemp132) ? -(fSlow12 * dsp->fRec42[0]) : ((iTemp133) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp140 + -1.0f) + (1.0f - fTemp140)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec41[0]);
			float fTemp141 = dsp->fRec41[0];
			float fTemp142 = powf(2.0f, 10.666667f * (fTemp84 + fSlow26 * fTemp141));
			float fTemp143 = fSlow65 * fTemp142;
			float fTemp144 = fmaxf(fTemp143, 23.44895f);
			float fTemp145 = fmaxf(2e+01f, fabsf(fTemp144));
			float fTemp146 = ((iTemp0) ? 0.0f : dsp->fRec43[1] + dsp->fConst1 * fTemp145);
			dsp->fRec43[0] = fTemp146 - floorf(fTemp146);
			float fTemp147 = mydsp_faustpower2_f(2.0f * dsp->fRec43[0] + -1.0f);
			dsp->fVec20[0] = fTemp147;
			float fTemp148 = fTemp19 * (fTemp147 - dsp->fVec20[1]) / fTemp145;
			dsp->fVec21[dsp->IOTA0 & 4095] = fTemp148;
			float fTemp149 = fSlow28 + fTemp92 + fSlow30 * fTemp141;
			float fTemp150 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp149 / fTemp144)));
			int iTemp151 = (int)(fTemp150);
			float fTemp152 = floorf(fTemp150);
			float fTemp153 = fmaxf(2e+01f, fabsf(fTemp143));
			float fTemp154 = ((iTemp0) ? 0.0f : dsp->fRec44[1] + dsp->fConst1 * fTemp153);
			dsp->fRec44[0] = fTemp154 - floorf(fTemp154);
			float fTemp155 = mydsp_faustpower2_f(2.0f * dsp->fRec44[0] + -1.0f);
			dsp->fVec22[0] = fTemp155;
			dsp->fVec23[dsp->IOTA0 & 8191] = fTemp19 * (fTemp155 - dsp->fVec22[1]) / fTemp153;
			float fTemp156 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst4 / fTemp144));
			int iTemp157 = (int)(fTemp156);
			float fTemp158 = floorf(fTemp156);
			dsp->fRec45[0] = 0.999f * dsp->fRec45[1] + dsp->fConst2 * (fTemp148 - dsp->fVec21[(dsp->IOTA0 - iTemp157) & 4095] * (fTemp158 + (1.0f - fTemp156)) - (fTemp156 - fTemp158) * dsp->fVec21[(dsp->IOTA0 - (iTemp157 + 1)) & 4095]);
			float fTemp159 = ((iSlow18) ? dsp->fConst3 * dsp->fRec45[0] * fSlow65 * fTemp142 : ((iSlow19) ? dsp->fConst2 * dsp->fVec23[(dsp->IOTA0 - max(0, min(8191, (int)(dsp->fConst0 * (fTemp149 / fTemp143) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp148 - dsp->fVec21[(dsp->IOTA0 - iTemp151) & 4095] * (fTemp152 + (1.0f - fTemp150)) - (fTemp150 - fTemp152) * dsp->fVec21[(dsp->IOTA0 - (iTemp151 + 1)) & 4095])));
			float fTemp160 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp83 + fSlow6 * fTemp141 + fSlow16 * fTemp159)), 1.0f));
			float fTemp161 = powf(2.0f, 10.666667f * (fTemp105 + fSlow36 * fTemp141 + fSlow38 * fTemp159));
			float fTemp162 = fSlow66 * fTemp161;
			float fTemp163 = fmaxf(fTemp162, 23.44895f);
			float fTemp164 = fmaxf(2e+01f, fabsf(fTemp163));
			float fTemp165 = ((iTemp0) ? 0.0f : dsp->fRec46[1] + dsp->fConst1 * fTemp164);
			dsp->fRec46[0] = fTemp165 - floorf(fTemp165);
			float fTemp166 = mydsp_faustpower2_f(2.0f * dsp->fRec46[0] + -1.0f);
			dsp->fVec24[0] = fTemp166;
			float fTemp167 = fTemp19 * (fTemp166 - dsp->fVec24[1]) / fTemp164;
			dsp->fVec25[dsp->IOTA0 & 4095] = fTemp167;
			float fTemp168 = fSlow39 + fTemp113 + fSlow41 * fTemp141 + fSlow43 * fTemp159;
			float fTemp169 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp168 / fTemp163)));
			int iTemp170 = (int)(fTemp169);
			float fTemp171 = floorf(fTemp169);
			float fTemp172 = fmaxf(2e+01f, fabsf(fTemp162));
			float fTemp173 = ((iTemp0) ? 0.0f : dsp->fRec47[1] + dsp->fConst1 * fTemp172);
			dsp->fRec47[0] = fTemp173 - floorf(fTemp173);
			float fTemp174 = mydsp_faustpower2_f(2.0f * dsp->fRec47[0] + -1.0f);
			dsp->fVec26[0] = fTemp174;
			dsp->fVec27[dsp->IOTA0 & 8191] = fTemp19 * (fTemp174 - dsp->fVec26[1]) / fTemp172;
			float fTemp175 = fTemp160 + 1.0f;
			float fTemp176 = fTemp160 * ((fSlow45 * fTemp159 + fTemp61 + fSlow32 * ((iSlow33) ? dsp->fConst2 * dsp->fVec27[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow67 * (fTemp168 / fTemp161) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp167 - dsp->fVec25[(dsp->IOTA0 - iTemp170) & 4095] * (fTemp171 + (1.0f - fTemp169)) - (fTemp169 - fTemp171) * dsp->fVec25[(dsp->IOTA0 - (iTemp170 + 1)) & 4095])) - fSlow47 * (1.0f - fTemp160 / fTemp175) * (dsp->fRec38[1] + fTemp160 * (dsp->fRec37[1] + fTemp160 * (dsp->fRec36[1] + fTemp160 * dsp->fRec35[1] / fTemp175) / fTemp175) / fTemp175)) / (fSlow47 * (mydsp_faustpower4_f(fTemp160) / mydsp_faustpower4_f(fTemp175)) + 1.0f) - dsp->fRec35[1]) / fTemp175;
			dsp->fRec35[0] = dsp->fRec35[1] + 2.0f * fTemp176;
			float fTemp177 = fTemp160 * (dsp->fRec35[1] + fTemp176 - dsp->fRec36[1]) / fTemp175;
			dsp->fRec36[0] = dsp->fRec36[1] + 2.0f * fTemp177;
			float fTemp178 = fTemp160 * (dsp->fRec36[1] + fTemp177 - dsp->fRec37[1]) / fTemp175;
			dsp->fRec37[0] = dsp->fRec37[1] + 2.0f * fTemp178;
			float fTemp179 = fTemp160 * (dsp->fRec37[1] + fTemp178 - dsp->fRec38[1]) / fTemp175;
			dsp->fRec38[0] = dsp->fRec38[1] + 2.0f * fTemp179;
			float fRec39 = dsp->fRec38[1] + fTemp179;
			int iTemp180 = dsp->iRec48[1] == 0;
			int iTemp181 = dsp->iRec48[1] == 1;
			float fTemp182 = ((iTemp8) ? 0.0f : dsp->fRec49[1]);
			dsp->iRec48[0] = ((iSlow61) ? ((iTemp180) ? 1 : ((iTemp181) ? ((fTemp182 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp183 = ((dsp->iRec48[1] == 2) ? fSlow48 : 0.0f);
			dsp->fRec50[0] = fTemp137 * dsp->fRec50[1] + fTemp138 * ((iTemp8) ? 1.0f : fTemp182);
			float fTemp184 = ((iTemp180) ? dsp->fRec50[0] : 1.0f);
			float fTemp185 = ((fTemp183 == fTemp184) ? 0.5f : (fTemp182 - fTemp183) / (fTemp184 - fTemp183));
			dsp->fRec49[0] = fmaxf(fTemp183, fminf(1.0f, fTemp182 + 0.25f * (((iTemp180) ? -(fSlow51 * dsp->fRec50[0]) : ((iTemp181) ? fSlow50 : fSlow49)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp185 + -1.0f) + (1.0f - fTemp185)))));
			float fTemp186 = 0.2f * (fRec4 * dsp->fRec17[0] + fRec23 * dsp->fRec33[0] + fRec39 * dsp->fRec49[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp186);
			output1[i0] = (FAUSTFLOAT)(fTemp186);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->iRec6[1] = dsp->iRec6[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->iRec10[1] = dsp->iRec10[0];
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
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec16[1] = dsp->iRec16[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->iRec24[1] = dsp->iRec24[0];
			dsp->iVec10[1] = dsp->iVec10[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->iRec32[1] = dsp->iRec32[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->iRec40[1] = dsp->iRec40[0];
			dsp->iVec19[1] = dsp->iVec19[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->iRec48[1] = dsp->iRec48[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec49[1] = dsp->fRec49[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
