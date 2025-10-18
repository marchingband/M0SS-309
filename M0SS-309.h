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
	float fRec11[2];
	float fVec2[2];
	int IOTA0;
	float fVec3[4096];
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec12[2];
	float fVec4[2];
	float fVec5[8192];
	float fConst3;
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
	float fRec14[2];
	float fVec6[2];
	float fVec7[4096];
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	FAUSTFLOAT fHslider34;
	float fRec15[2];
	float fVec8[2];
	float fVec9[8192];
	float fRec17[2];
	float fConst6;
	float fRec18[3];
	float fVec10[2];
	float fConst7;
	float fVec11[2];
	float fRec20[2];
	float fRec19[2];
	float fConst8;
	FAUSTFLOAT fHslider35;
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
	FAUSTFLOAT fButton1;
	int iRec29[2];
	int iVec12[2];
	float fRec31[2];
	float fRec30[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider42;
	float fRec32[2];
	float fVec13[2];
	float fVec14[4096];
	float fRec33[2];
	float fVec15[2];
	float fVec16[8192];
	float fRec34[2];
	float fRec35[2];
	float fVec17[2];
	float fVec18[4096];
	float fRec36[2];
	float fVec19[2];
	float fVec20[8192];
	float fRec38[2];
	float fRec39[3];
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
	dsp->fHslider2 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider20 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider22 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider23 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider24 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider25 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider26 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec17[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 3; l22 = l22 + 1) {
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
		for (l40 = 0; l40 < 4096; l40 = l40 + 1) {
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
		for (l43 = 0; l43 < 8192; l43 = l43 + 1) {
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
		for (l47 = 0; l47 < 4096; l47 = l47 + 1) {
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
		for (l50 = 0; l50 < 8192; l50 = l50 + 1) {
			dsp->fVec20[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec38[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 3; l52 = l52 + 1) {
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "mod", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider3, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "sel", "23");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider2, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "env_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph0", &dsp->fVbargraph1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "env_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph1", &dsp->fVbargraph2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider12, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
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
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "alt-sel", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider30, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "alt-sel", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider23, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider16, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "sel", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)1e+02f);
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
	float fSlow10 = (fSlow9 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider6)) + 0.001f));
	float fSlow11 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider8)) + 0.001f));
	int iSlow13 = fSlow7 == 0.0f;
	int iSlow14 = iSlow13 > 0;
	float fSlow15 = 4.656613e-10f * (float)(dsp->fHslider9);
	float fSlow16 = (float)(dsp->fHslider10);
	float fSlow17 = (float)(dsp->fHslider11);
	int iSlow18 = fSlow17 >= 2.0f;
	int iSlow19 = fSlow17 >= 1.0f;
	float fSlow20 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider12) + -69.0f));
	float fSlow21 = 4.4e+02f * fSlow20;
	float fSlow22 = (float)(dsp->fHslider13);
	float fSlow23 = (float)(dsp->fHslider14);
	float fSlow24 = 4.656613e-10f * (float)(dsp->fHslider15);
	float fSlow25 = (float)(dsp->fHslider16);
	float fSlow26 = (float)(dsp->fHslider17);
	float fSlow27 = (float)(dsp->fHslider18);
	float fSlow28 = 4.656613e-10f * (float)(dsp->fHslider19);
	float fSlow29 = dsp->fConst3 / fSlow20;
	float fSlow30 = dsp->fConst4 * fSlow20;
	float fSlow31 = (float)(dsp->fHslider20);
	int iSlow32 = (int)((float)(dsp->fHslider21));
	float fSlow33 = (float)(dsp->fHslider22);
	int iSlow34 = fSlow33 >= 1.0f;
	int iSlow35 = (float)(dsp->fHslider23) >= 1.0f;
	float fSlow36 = powf(2.0f, 0.00083333335f * ((float)(dsp->fHslider24) + (float)(dsp->fHslider25)));
	float fSlow37 = 2e+01f * fSlow36;
	float fSlow38 = ((iSlow35) ? 4.4e+02f * fSlow36 * fSlow20 : fSlow37);
	float fSlow39 = (float)(dsp->fHslider26);
	float fSlow40 = (float)(dsp->fHslider27);
	float fSlow41 = 4.656613e-10f * (float)(dsp->fHslider28);
	float fSlow42 = (float)(dsp->fHslider29);
	float fSlow43 = (float)(dsp->fHslider30);
	float fSlow44 = (float)(dsp->fHslider31);
	float fSlow45 = (float)(dsp->fHslider32);
	float fSlow46 = 4.656613e-10f * (float)(dsp->fHslider33);
	float fSlow47 = (float)(dsp->fHslider34);
	int iSlow48 = ((fSlow33 == 0.0f) ? 1 : 0);
	float fSlow49 = dsp->fConst6 * fSlow20;
	float fSlow50 = dsp->fConst7 / fSlow20;
	float fSlow51 = 0.0022727272f / fSlow20;
	float fSlow52 = dsp->fConst0 / fSlow20;
	float fSlow53 = dsp->fConst8 / fSlow20;
	float fSlow54 = (float)(dsp->fHslider35);
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
	float fSlow69 = ((iSlow35) ? 4.4e+02f * fSlow65 * fSlow36 : fSlow37);
	float fSlow70 = dsp->fConst6 * fSlow65;
	float fSlow71 = dsp->fConst7 / fSlow65;
	float fSlow72 = 0.0022727272f / fSlow65;
	float fSlow73 = dsp->fConst0 / fSlow65;
	float fSlow74 = dsp->fConst8 / fSlow65;
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
			float fTemp20 = fSlow22 * fTemp4;
			float fTemp21 = fSlow24 * fTemp17;
			float fTemp22 = powf(2.0f, 10.666667f * (fTemp20 + fSlow23 * fTemp16 + fTemp21));
			float fTemp23 = fSlow21 * fTemp22;
			float fTemp24 = fmaxf(fTemp23, 23.44895f);
			float fTemp25 = fmaxf(2e+01f, fabsf(fTemp24));
			float fTemp26 = ((iTemp0) ? 0.0f : dsp->fRec11[1] + dsp->fConst1 * fTemp25);
			dsp->fRec11[0] = fTemp26 - floorf(fTemp26);
			float fTemp27 = mydsp_faustpower2_f(2.0f * dsp->fRec11[0] + -1.0f);
			dsp->fVec2[0] = fTemp27;
			float fTemp28 = fTemp19 * (fTemp27 - dsp->fVec2[1]) / fTemp25;
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp28;
			float fTemp29 = fSlow26 * fTemp4;
			float fTemp30 = fSlow28 * fTemp17;
			float fTemp31 = fSlow25 + fTemp29 + fSlow27 * fTemp16 + fTemp30;
			float fTemp32 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp31 / fTemp24)));
			int iTemp33 = (int)(fTemp32);
			float fTemp34 = floorf(fTemp32);
			float fTemp35 = fmaxf(2e+01f, fabsf(fTemp23));
			float fTemp36 = ((iTemp0) ? 0.0f : dsp->fRec12[1] + dsp->fConst1 * fTemp35);
			dsp->fRec12[0] = fTemp36 - floorf(fTemp36);
			float fTemp37 = mydsp_faustpower2_f(2.0f * dsp->fRec12[0] + -1.0f);
			dsp->fVec4[0] = fTemp37;
			dsp->fVec5[dsp->IOTA0 & 8191] = fTemp19 * (fTemp37 - dsp->fVec4[1]) / fTemp35;
			float fTemp38 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp24));
			int iTemp39 = (int)(fTemp38);
			float fTemp40 = floorf(fTemp38);
			dsp->fRec13[0] = 0.999f * dsp->fRec13[1] + dsp->fConst2 * (fTemp28 - dsp->fVec3[(dsp->IOTA0 - iTemp39) & 4095] * (fTemp40 + (1.0f - fTemp38)) - (fTemp38 - fTemp40) * dsp->fVec3[(dsp->IOTA0 - (iTemp39 + 1)) & 4095]);
			float fTemp41 = ((iSlow18) ? fSlow30 * dsp->fRec13[0] * fTemp22 : ((iSlow19) ? dsp->fConst2 * dsp->fVec5[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow29 * (fTemp31 / fTemp22) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp28 - dsp->fVec3[(dsp->IOTA0 - iTemp33) & 4095] * (fTemp34 + (1.0f - fTemp32)) - (fTemp32 - fTemp34) * dsp->fVec3[(dsp->IOTA0 - (iTemp33 + 1)) & 4095])));
			float fTemp42 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp5 + fSlow6 * fTemp16 + fTemp18 + fSlow16 * fTemp41)), 1.0f));
			float fTemp43 = fSlow39 * fTemp4;
			float fTemp44 = fSlow41 * fTemp17;
			float fTemp45 = powf(2.0f, 10.666667f * (fTemp43 + fSlow40 * fTemp16 + fTemp44 + fSlow42 * fTemp41));
			float fTemp46 = fSlow38 * fTemp45;
			float fTemp47 = fmaxf(fTemp46, 23.44895f);
			float fTemp48 = fmaxf(2e+01f, fabsf(fTemp47));
			float fTemp49 = ((iTemp0) ? 0.0f : dsp->fRec14[1] + dsp->fConst1 * fTemp48);
			dsp->fRec14[0] = fTemp49 - floorf(fTemp49);
			float fTemp50 = mydsp_faustpower2_f(2.0f * dsp->fRec14[0] + -1.0f);
			dsp->fVec6[0] = fTemp50;
			float fTemp51 = fTemp19 * (fTemp50 - dsp->fVec6[1]) / fTemp48;
			dsp->fVec7[dsp->IOTA0 & 4095] = fTemp51;
			float fTemp52 = fSlow44 * fTemp4;
			float fTemp53 = fSlow46 * fTemp17;
			float fTemp54 = fSlow43 + fTemp52 + fSlow45 * fTemp16 + fTemp53 + fSlow47 * fTemp41;
			float fTemp55 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp54 / fTemp47)));
			int iTemp56 = (int)(fTemp55);
			float fTemp57 = floorf(fTemp55);
			float fTemp58 = fmaxf(2e+01f, fabsf(fTemp46));
			float fTemp59 = ((iTemp0) ? 0.0f : dsp->fRec15[1] + dsp->fConst1 * fTemp58);
			dsp->fRec15[0] = fTemp59 - floorf(fTemp59);
			float fTemp60 = mydsp_faustpower2_f(2.0f * dsp->fRec15[0] + -1.0f);
			dsp->fVec8[0] = fTemp60;
			dsp->fVec9[dsp->IOTA0 & 8191] = fTemp19 * (fTemp60 - dsp->fVec8[1]) / fTemp58;
			float fTemp61 = dsp->fConst0 * (fTemp54 / fTemp46);
			int iTemp62 = dsp->fRec18[1] < dsp->fRec18[2];
			int iRec16 = iTemp62;
			float fTemp63 = dsp->fConst1 * fTemp46;
			dsp->fRec17[0] = ((iTemp62) ? 0.0f : fmodf(dsp->fRec17[1] + fTemp63, 1.0f));
			float fTemp64 = fSlow49 * fTemp22;
			dsp->fRec18[0] = fmodf(dsp->fRec18[1] + fTemp64, 1.0f);
			float fTemp65 = mydsp_faustpower2_f(2.0f * dsp->fRec17[0] + -1.0f);
			dsp->fVec10[0] = fTemp65;
			float fTemp66 = mydsp_faustpower2_f(2.0f * dsp->fRec18[0] + -1.0f);
			dsp->fVec11[0] = fTemp66;
			float fTemp67 = ((iTemp0) ? 0.0f : fTemp64 + dsp->fRec20[1]);
			dsp->fRec20[0] = fTemp67 - floorf(fTemp67);
			float fTemp68 = dsp->fRec20[0] / fTemp22;
			float fTemp69 = fSlow29 * fTemp68;
			int iTemp70 = fTemp69 < 1.0f;
			float fTemp71 = ((iTemp0 | iTemp70) ? fSlow51 * (dsp->fRec20[0] * fSlow38 * fTemp45 * (float)(iTemp70) / fTemp22) : fTemp63 + dsp->fRec19[1]);
			dsp->fRec19[0] = fTemp71 - floorf(fTemp71);
			float fTemp72 = dsp->fConst0 * (dsp->fRec19[0] / fTemp46);
			float fTemp73 = dsp->fConst0 / fTemp46;
			float fTemp74 = fTemp73 + -1.0f;
			int iTemp75 = (fTemp72 < 1.0f) + 2 * (fTemp72 > fTemp74);
			float fTemp76 = 1.0f - dsp->fRec19[0];
			int iTemp77 = iTemp70 + 2 * (fTemp69 > (fSlow29 / fTemp22 + -1.0f));
			float fTemp78 = 1.0f - dsp->fRec20[0];
			float fTemp79 = fmodf(fTemp73 + fmodf(-(dsp->fConst0 * ((fTemp54 - dsp->fRec19[0]) / fTemp46)), fTemp73), fTemp73);
			int iTemp80 = (fTemp79 < 1.0f) + 2 * (fTemp79 > fTemp74);
			float fTemp81 = fTemp79 - fTemp73;
			float fTemp82 = fSlow55 * fTemp17;
			float fTemp83 = fTemp42 + 1.0f;
			float fTemp84 = fTemp42 * ((fSlow31 * ((iSlow32) ? ((iSlow48) ? ((iTemp75 == 0) ? 0.0f : ((iTemp75 == 1) ? dsp->fConst0 * (dsp->fRec19[0] * (2.0f - fTemp72) / fTemp46) + -1.0f : dsp->fConst0 * (fTemp76 * (dsp->fConst0 * (fTemp76 / fTemp46) + -2.0f) / fTemp46) + 1.0f)) + (float)(((fTemp72 < fTemp61) ? -1 : 1)) + ((fTemp72 >= fTemp61) ? ((iTemp77 == 0) ? 0.0f : ((iTemp77 == 1) ? fSlow52 * (dsp->fRec20[0] * (0.0045454544f - fSlow53 * fTemp68) / fTemp22) + -1.0f : fSlow52 * (fTemp78 * (fSlow53 * (fTemp78 / fTemp22) + -0.0045454544f) / fTemp22) + 1.0f)) : 0.0f) - ((iTemp80 == 0) ? 0.0f : ((iTemp80 == 1) ? fTemp79 * (2.0f - fTemp79) + -1.0f : fTemp81 * (fTemp81 + 2.0f) + 1.0f)) : ((iRec16) ? fSlow50 * ((fTemp66 - dsp->fVec11[1]) / fTemp22) : dsp->fConst2 * ((fTemp65 - dsp->fVec10[1]) / fTemp46))) : ((iSlow34) ? dsp->fConst2 * dsp->fVec9[(dsp->IOTA0 - max(0, min(8191, (int)(fTemp61 + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp51 - dsp->fVec7[(dsp->IOTA0 - iTemp56) & 4095] * (fTemp57 + (1.0f - fTemp55)) - (fTemp55 - fTemp57) * dsp->fVec7[(dsp->IOTA0 - (iTemp56 + 1)) & 4095]))) + fSlow54 * fTemp41 + fTemp82 - fSlow56 * (1.0f - fTemp42 / fTemp83) * (dsp->fRec3[1] + fTemp42 * (dsp->fRec2[1] + fTemp42 * (dsp->fRec1[1] + fTemp42 * dsp->fRec0[1] / fTemp83) / fTemp83) / fTemp83)) / (fSlow56 * (mydsp_faustpower4_f(fTemp42) / mydsp_faustpower4_f(fTemp83)) + 1.0f) - dsp->fRec0[1]) / fTemp83;
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
			float fTemp90 = ((iTemp8) ? 0.0f : dsp->fRec22[1]);
			dsp->iRec21[0] = ((iSlow8) ? ((iTemp88) ? 1 : ((iTemp89) ? ((fTemp90 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp91 = ((dsp->iRec21[1] == 2) ? fSlow57 : 0.0f);
			dsp->fRec23[0] = fTemp12 * dsp->fRec23[1] + fTemp13 * ((iTemp8) ? 1.0f : fTemp90);
			float fTemp92 = ((iTemp88) ? dsp->fRec23[0] : 1.0f);
			float fTemp93 = ((fTemp91 == fTemp92) ? 0.5f : (fTemp90 - fTemp91) / (fTemp92 - fTemp91));
			dsp->fRec22[0] = fmaxf(fTemp91, fminf(1.0f, fTemp90 + 0.25f * (((iTemp88) ? -(fSlow60 * dsp->fRec23[0]) : ((iTemp89) ? fSlow59 : fSlow58)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp93 + -1.0f) + (1.0f - fTemp93)))));
			int iTemp94 = dsp->iRec29[1] == 0;
			int iTemp95 = dsp->iRec29[1] == 1;
			float fTemp96 = ((iTemp8) ? 0.0f : dsp->fRec30[1]);
			dsp->iRec29[0] = ((iSlow62) ? ((iTemp94) ? 1 : ((iTemp95) ? ((fTemp96 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp97 = ((dsp->iRec29[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec12[0] = iSlow63;
			int iTemp98 = (dsp->iVec12[1] <= 0) & iSlow64;
			float fTemp99 = (float)(1 - iTemp98);
			float fTemp100 = (float)(iTemp98);
			dsp->fRec31[0] = dsp->fRec31[1] * fTemp99 + ((iTemp8) ? 1.0f : fTemp96) * fTemp100;
			float fTemp101 = ((iTemp94) ? dsp->fRec31[0] : 1.0f);
			float fTemp102 = ((fTemp97 == fTemp101) ? 0.5f : (fTemp96 - fTemp97) / (fTemp101 - fTemp97));
			dsp->fRec30[0] = fmaxf(fTemp97, fminf(1.0f, fTemp96 + 0.25f * (((iTemp94) ? -(fSlow12 * dsp->fRec31[0]) : ((iTemp95) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp102 + -1.0f) + (1.0f - fTemp102)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec30[0]);
			float fTemp103 = dsp->fRec30[0];
			float fTemp104 = powf(2.0f, 10.666667f * (fSlow23 * fTemp103 + fTemp20 + fTemp21));
			float fTemp105 = fSlow66 * fTemp104;
			float fTemp106 = fmaxf(fTemp105, 23.44895f);
			float fTemp107 = fmaxf(2e+01f, fabsf(fTemp106));
			float fTemp108 = ((iTemp0) ? 0.0f : dsp->fRec32[1] + dsp->fConst1 * fTemp107);
			dsp->fRec32[0] = fTemp108 - floorf(fTemp108);
			float fTemp109 = mydsp_faustpower2_f(2.0f * dsp->fRec32[0] + -1.0f);
			dsp->fVec13[0] = fTemp109;
			float fTemp110 = fTemp19 * (fTemp109 - dsp->fVec13[1]) / fTemp107;
			dsp->fVec14[dsp->IOTA0 & 4095] = fTemp110;
			float fTemp111 = fSlow25 + fTemp30 + fTemp29 + fSlow27 * fTemp103;
			float fTemp112 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp111 / fTemp106)));
			int iTemp113 = (int)(fTemp112);
			float fTemp114 = floorf(fTemp112);
			float fTemp115 = fmaxf(2e+01f, fabsf(fTemp105));
			float fTemp116 = ((iTemp0) ? 0.0f : dsp->fRec33[1] + dsp->fConst1 * fTemp115);
			dsp->fRec33[0] = fTemp116 - floorf(fTemp116);
			float fTemp117 = mydsp_faustpower2_f(2.0f * dsp->fRec33[0] + -1.0f);
			dsp->fVec15[0] = fTemp117;
			dsp->fVec16[dsp->IOTA0 & 8191] = fTemp19 * (fTemp117 - dsp->fVec15[1]) / fTemp115;
			float fTemp118 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst5 / fTemp106));
			int iTemp119 = (int)(fTemp118);
			float fTemp120 = floorf(fTemp118);
			dsp->fRec34[0] = 0.999f * dsp->fRec34[1] - dsp->fConst2 * (dsp->fVec14[(dsp->IOTA0 - iTemp119) & 4095] * (fTemp120 + (1.0f - fTemp118)) - fTemp110 + (fTemp118 - fTemp120) * dsp->fVec14[(dsp->IOTA0 - (iTemp119 + 1)) & 4095]);
			float fTemp121 = ((iSlow18) ? fSlow68 * dsp->fRec34[0] * fTemp104 : ((iSlow19) ? dsp->fConst2 * dsp->fVec16[(dsp->IOTA0 - max(0, min(8191, (int)(fSlow67 * (fTemp111 / fTemp104) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp110 - dsp->fVec14[(dsp->IOTA0 - iTemp113) & 4095] * (fTemp114 + (1.0f - fTemp112)) - (fTemp112 - fTemp114) * dsp->fVec14[(dsp->IOTA0 - (iTemp113 + 1)) & 4095])));
			float fTemp122 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fSlow6 * fTemp103 + fTemp18 + fTemp5 + fSlow16 * fTemp121)), 1.0f));
			float fTemp123 = powf(2.0f, 10.666667f * (fTemp44 + fTemp43 + fSlow40 * fTemp103 + fSlow42 * fTemp121));
			float fTemp124 = fSlow69 * fTemp123;
			float fTemp125 = fmaxf(fTemp124, 23.44895f);
			float fTemp126 = fmaxf(2e+01f, fabsf(fTemp125));
			float fTemp127 = ((iTemp0) ? 0.0f : dsp->fRec35[1] + dsp->fConst1 * fTemp126);
			dsp->fRec35[0] = fTemp127 - floorf(fTemp127);
			float fTemp128 = mydsp_faustpower2_f(2.0f * dsp->fRec35[0] + -1.0f);
			dsp->fVec17[0] = fTemp128;
			float fTemp129 = fTemp19 * (fTemp128 - dsp->fVec17[1]) / fTemp126;
			dsp->fVec18[dsp->IOTA0 & 4095] = fTemp129;
			float fTemp130 = fSlow43 + fSlow45 * fTemp103 + fTemp52 + fTemp53 + fSlow47 * fTemp121;
			float fTemp131 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp130 / fTemp125)));
			int iTemp132 = (int)(fTemp131);
			float fTemp133 = floorf(fTemp131);
			float fTemp134 = fmaxf(2e+01f, fabsf(fTemp124));
			float fTemp135 = ((iTemp0) ? 0.0f : dsp->fRec36[1] + dsp->fConst1 * fTemp134);
			dsp->fRec36[0] = fTemp135 - floorf(fTemp135);
			float fTemp136 = mydsp_faustpower2_f(2.0f * dsp->fRec36[0] + -1.0f);
			dsp->fVec19[0] = fTemp136;
			dsp->fVec20[dsp->IOTA0 & 8191] = fTemp19 * (fTemp136 - dsp->fVec19[1]) / fTemp134;
			float fTemp137 = dsp->fConst0 * (fTemp130 / fTemp124);
			int iTemp138 = dsp->fRec39[1] < dsp->fRec39[2];
			int iRec37 = iTemp138;
			float fTemp139 = dsp->fConst1 * fTemp124;
			dsp->fRec38[0] = ((iTemp138) ? 0.0f : fmodf(dsp->fRec38[1] + fTemp139, 1.0f));
			float fTemp140 = fSlow70 * fTemp104;
			dsp->fRec39[0] = fmodf(dsp->fRec39[1] + fTemp140, 1.0f);
			float fTemp141 = mydsp_faustpower2_f(2.0f * dsp->fRec38[0] + -1.0f);
			dsp->fVec21[0] = fTemp141;
			float fTemp142 = mydsp_faustpower2_f(2.0f * dsp->fRec39[0] + -1.0f);
			dsp->fVec22[0] = fTemp142;
			float fTemp143 = ((iTemp0) ? 0.0f : fTemp140 + dsp->fRec41[1]);
			dsp->fRec41[0] = fTemp143 - floorf(fTemp143);
			float fTemp144 = dsp->fRec41[0] / fTemp104;
			float fTemp145 = fSlow67 * fTemp144;
			int iTemp146 = fTemp145 < 1.0f;
			float fTemp147 = ((iTemp0 | iTemp146) ? fSlow72 * (dsp->fRec41[0] * fSlow69 * fTemp123 * (float)(iTemp146) / fTemp104) : fTemp139 + dsp->fRec40[1]);
			dsp->fRec40[0] = fTemp147 - floorf(fTemp147);
			float fTemp148 = dsp->fConst0 * (dsp->fRec40[0] / fTemp124);
			float fTemp149 = dsp->fConst0 / fTemp124;
			float fTemp150 = fTemp149 + -1.0f;
			int iTemp151 = (fTemp148 < 1.0f) + 2 * (fTemp148 > fTemp150);
			float fTemp152 = 1.0f - dsp->fRec40[0];
			int iTemp153 = iTemp146 + 2 * (fTemp145 > (fSlow67 / fTemp104 + -1.0f));
			float fTemp154 = 1.0f - dsp->fRec41[0];
			float fTemp155 = fmodf(fTemp149 + fmodf(-(dsp->fConst0 * ((fTemp130 - dsp->fRec40[0]) / fTemp124)), fTemp149), fTemp149);
			int iTemp156 = (fTemp155 < 1.0f) + 2 * (fTemp155 > fTemp150);
			float fTemp157 = fTemp155 - fTemp149;
			float fTemp158 = fTemp122 + 1.0f;
			float fTemp159 = fTemp122 * ((fSlow54 * fTemp121 + fTemp82 + fSlow31 * ((iSlow32) ? ((iSlow48) ? (float)(((fTemp148 < fTemp137) ? -1 : 1)) + ((iTemp151 == 0) ? 0.0f : ((iTemp151 == 1) ? dsp->fConst0 * (dsp->fRec40[0] * (2.0f - fTemp148) / fTemp124) + -1.0f : dsp->fConst0 * (fTemp152 * (dsp->fConst0 * (fTemp152 / fTemp124) + -2.0f) / fTemp124) + 1.0f)) + ((fTemp148 >= fTemp137) ? ((iTemp153 == 0) ? 0.0f : ((iTemp153 == 1) ? fSlow73 * (dsp->fRec41[0] * (0.0045454544f - fSlow74 * fTemp144) / fTemp104) + -1.0f : fSlow73 * (fTemp154 * (fSlow74 * (fTemp154 / fTemp104) + -0.0045454544f) / fTemp104) + 1.0f)) : 0.0f) - ((iTemp156 == 0) ? 0.0f : ((iTemp156 == 1) ? fTemp155 * (2.0f - fTemp155) + -1.0f : fTemp157 * (fTemp157 + 2.0f) + 1.0f)) : ((iRec37) ? fSlow71 * ((fTemp142 - dsp->fVec22[1]) / fTemp104) : dsp->fConst2 * ((fTemp141 - dsp->fVec21[1]) / fTemp124))) : ((iSlow34) ? dsp->fConst2 * dsp->fVec20[(dsp->IOTA0 - max(0, min(8191, (int)(fTemp137 + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp129 - dsp->fVec18[(dsp->IOTA0 - iTemp132) & 4095] * (fTemp133 + (1.0f - fTemp131)) - (fTemp131 - fTemp133) * dsp->fVec18[(dsp->IOTA0 - (iTemp132 + 1)) & 4095]))) - fSlow56 * (1.0f - fTemp122 / fTemp158) * (dsp->fRec27[1] + fTemp122 * (dsp->fRec26[1] + fTemp122 * (dsp->fRec25[1] + fTemp122 * dsp->fRec24[1] / fTemp158) / fTemp158) / fTemp158)) / (fSlow56 * (mydsp_faustpower4_f(fTemp122) / mydsp_faustpower4_f(fTemp158)) + 1.0f) - dsp->fRec24[1]) / fTemp158;
			dsp->fRec24[0] = dsp->fRec24[1] + 2.0f * fTemp159;
			float fTemp160 = fTemp122 * (dsp->fRec24[1] + fTemp159 - dsp->fRec25[1]) / fTemp158;
			dsp->fRec25[0] = dsp->fRec25[1] + 2.0f * fTemp160;
			float fTemp161 = fTemp122 * (dsp->fRec25[1] + fTemp160 - dsp->fRec26[1]) / fTemp158;
			dsp->fRec26[0] = dsp->fRec26[1] + 2.0f * fTemp161;
			float fTemp162 = fTemp122 * (dsp->fRec26[1] + fTemp161 - dsp->fRec27[1]) / fTemp158;
			dsp->fRec27[0] = dsp->fRec27[1] + 2.0f * fTemp162;
			float fRec28 = dsp->fRec27[1] + fTemp162;
			int iTemp163 = dsp->iRec42[1] == 0;
			int iTemp164 = dsp->iRec42[1] == 1;
			float fTemp165 = ((iTemp8) ? 0.0f : dsp->fRec43[1]);
			dsp->iRec42[0] = ((iSlow62) ? ((iTemp163) ? 1 : ((iTemp164) ? ((fTemp165 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp166 = ((dsp->iRec42[1] == 2) ? fSlow57 : 0.0f);
			dsp->fRec44[0] = fTemp99 * dsp->fRec44[1] + fTemp100 * ((iTemp8) ? 1.0f : fTemp165);
			float fTemp167 = ((iTemp163) ? dsp->fRec44[0] : 1.0f);
			float fTemp168 = ((fTemp166 == fTemp167) ? 0.5f : (fTemp165 - fTemp166) / (fTemp167 - fTemp166));
			dsp->fRec43[0] = fmaxf(fTemp166, fminf(1.0f, fTemp165 + 0.25f * (((iTemp163) ? -(fSlow60 * dsp->fRec44[0]) : ((iTemp164) ? fSlow59 : fSlow58)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp168 + -1.0f) + (1.0f - fTemp168)))));
			float fTemp169 = 0.2f * (fRec4 * dsp->fRec22[0] + fRec28 * dsp->fRec43[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp169);
			output1[i0] = (FAUSTFLOAT)(fTemp169);
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
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[2] = dsp->fRec18[1];
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
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[2] = dsp->fRec39[1];
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
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
