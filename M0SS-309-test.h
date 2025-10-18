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
	float fRec14[3];
	float fConst5;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	FAUSTFLOAT fHslider27;
	FAUSTFLOAT fHslider28;
	float fRec16[2];
	float fConst6;
	float fVec6[2];
	float fVec7[2];
	float fConst7;
	float fRec18[2];
	float fRec17[2];
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	float fConst8;
	FAUSTFLOAT fHslider34;
	FAUSTFLOAT fHslider35;
	FAUSTFLOAT fHslider36;
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	int iRec19[2];
	FAUSTFLOAT fHslider37;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	float fRec21[2];
	float fRec20[2];
	FAUSTFLOAT fButton1;
	int iRec27[2];
	int iVec8[2];
	float fRec29[2];
	float fRec28[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider41;
	float fRec30[2];
	float fVec9[2];
	float fVec10[4096];
	float fRec31[2];
	float fVec11[2];
	float fVec12[8192];
	float fRec32[2];
	float fRec33[3];
	float fRec35[2];
	float fVec13[2];
	float fVec14[2];
	float fRec37[2];
	float fRec36[2];
	float fRec22[2];
	float fRec23[2];
	float fRec24[2];
	float fRec25[2];
	int iRec38[2];
	float fRec40[2];
	float fRec39[2];
	FAUSTFLOAT fButton2;
	int iRec46[2];
	int iVec15[2];
	float fRec48[2];
	float fRec47[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec49[2];
	float fVec16[2];
	float fVec17[4096];
	float fRec50[2];
	float fVec18[2];
	float fVec19[8192];
	float fRec51[2];
	float fRec52[3];
	float fRec54[2];
	float fVec20[2];
	float fVec21[2];
	float fRec56[2];
	float fRec55[2];
	float fRec41[2];
	float fRec42[2];
	float fRec43[2];
	float fRec44[2];
	int iRec57[2];
	float fRec59[2];
	float fRec58[2];
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
	dsp->fHslider39 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.001f);
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
		for (l15 = 0; l15 < 3; l15 = l15 + 1) {
			dsp->fRec14[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec16[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fVec6[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fVec7[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec18[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec17[l20] = 0.0f;
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
			dsp->iRec19[l25] = 0;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec21[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec20[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->iRec27[l28] = 0;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->iVec8[l29] = 0;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec29[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec28[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec30[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fVec9[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 4096; l34 = l34 + 1) {
			dsp->fVec10[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec31[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fVec11[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 8192; l37 = l37 + 1) {
			dsp->fVec12[l37] = 0.0f;
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
		for (l39 = 0; l39 < 3; l39 = l39 + 1) {
			dsp->fRec33[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec35[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fVec13[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fVec14[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec37[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec36[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec22[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec23[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec24[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec25[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->iRec38[l49] = 0;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec40[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec39[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->iRec46[l52] = 0;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->iVec15[l53] = 0;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec48[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec47[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec49[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fVec16[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 4096; l58 = l58 + 1) {
			dsp->fVec17[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec50[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fVec18[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 8192; l61 = l61 + 1) {
			dsp->fVec19[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec51[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 3; l63 = l63 + 1) {
			dsp->fRec52[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec54[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fVec20[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fVec21[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec56[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec55[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec41[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec42[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec43[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec44[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->iRec57[l73] = 0;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec59[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec58[l75] = 0.0f;
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
	dsp->fConst5 = 4.4e+02f / dsp->fConst0;
	dsp->fConst6 = 0.0005681818f * dsp->fConst0;
	dsp->fConst7 = 0.0022727272f * dsp->fConst0;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "mod", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider39, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "mod", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider38, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider37, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "mod", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider40, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
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
	int iSlow33 = (((float)(dsp->fHslider24) == 0.0f) ? 1 : 0);
	float fSlow34 = dsp->fConst5 * fSlow23;
	float fSlow35 = (float)(dsp->fHslider25);
	float fSlow36 = (float)(dsp->fHslider26);
	float fSlow37 = 4.656613e-10f * (float)(dsp->fHslider27);
	float fSlow38 = (float)(dsp->fHslider28);
	float fSlow39 = dsp->fConst6 / fSlow23;
	float fSlow40 = dsp->fConst7 / fSlow23;
	float fSlow41 = 4.4e+02f * fSlow23;
	float fSlow42 = (float)(dsp->fHslider29);
	float fSlow43 = (float)(dsp->fHslider30);
	float fSlow44 = (float)(dsp->fHslider31);
	float fSlow45 = 4.656613e-10f * (float)(dsp->fHslider32);
	float fSlow46 = (float)(dsp->fHslider33);
	float fSlow47 = dsp->fConst0 / fSlow23;
	float fSlow48 = dsp->fConst8 / fSlow23;
	float fSlow49 = (float)(dsp->fHslider34);
	float fSlow50 = 4.656613e-10f * (float)(dsp->fHslider35);
	float fSlow51 = 0.16465649f * ((float)(dsp->fHslider36) + -0.707f);
	float fSlow52 = (float)(dsp->fHslider37);
	float fSlow53 = (fSlow52 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider38)) + 0.001f));
	float fSlow54 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow55 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow56 = (float)(dsp->fButton1);
	int iSlow57 = fSlow56 > 0.0f;
	int iSlow58 = fSlow56 == 0.0f;
	int iSlow59 = iSlow58 > 0;
	float fSlow60 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider41) + -69.0f));
	float fSlow61 = ((iSlow20) ? 4.4e+02f * fSlow21 * fSlow60 : fSlow22);
	float fSlow62 = dsp->fConst5 * fSlow60;
	float fSlow63 = dsp->fConst6 / fSlow60;
	float fSlow64 = dsp->fConst7 / fSlow60;
	float fSlow65 = 4.4e+02f * fSlow60;
	float fSlow66 = dsp->fConst0 / fSlow60;
	float fSlow67 = dsp->fConst8 / fSlow60;
	float fSlow68 = (float)(dsp->fButton2);
	int iSlow69 = fSlow68 > 0.0f;
	int iSlow70 = fSlow68 == 0.0f;
	int iSlow71 = iSlow70 > 0;
	float fSlow72 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow73 = ((iSlow20) ? 4.4e+02f * fSlow21 * fSlow72 : fSlow22);
	float fSlow74 = dsp->fConst5 * fSlow72;
	float fSlow75 = dsp->fConst6 / fSlow72;
	float fSlow76 = dsp->fConst7 / fSlow72;
	float fSlow77 = 4.4e+02f * fSlow72;
	float fSlow78 = dsp->fConst0 / fSlow72;
	float fSlow79 = dsp->fConst8 / fSlow72;
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
			float fTemp43 = dsp->fConst1 * fTemp23;
			dsp->fRec14[0] = fmodf(fTemp43 + dsp->fRec14[1], 1.0f);
			int iTemp44 = dsp->fRec14[1] < dsp->fRec14[2];
			int iRec15 = iTemp44;
			float fTemp45 = fSlow35 * fTemp4;
			float fTemp46 = fSlow37 * fTemp17;
			float fTemp47 = powf(2.0f, 10.666667f * (fTemp45 + fSlow36 * fTemp16 + fTemp46 + fSlow38 * fTemp41));
			float fTemp48 = fSlow34 * fTemp47;
			dsp->fRec16[0] = ((iTemp44) ? 0.0f : fmodf(dsp->fRec16[1] + fTemp48, 1.0f));
			float fTemp49 = mydsp_faustpower2_f(2.0f * dsp->fRec16[0] + -1.0f);
			dsp->fVec6[0] = fTemp49;
			float fTemp50 = mydsp_faustpower2_f(2.0f * dsp->fRec14[0] + -1.0f);
			dsp->fVec7[0] = fTemp50;
			float fTemp51 = ((iTemp0) ? 0.0f : fTemp43 + dsp->fRec18[1]);
			dsp->fRec18[0] = fTemp51 - floorf(fTemp51);
			float fTemp52 = dsp->fConst0 * (dsp->fRec18[0] / fTemp23);
			int iTemp53 = fTemp52 < 1.0f;
			float fTemp54 = ((iTemp0 | iTemp53) ? fSlow41 * (dsp->fRec18[0] * fTemp47 * (float)(iTemp53) / fTemp23) : fTemp48 + dsp->fRec17[1]);
			dsp->fRec17[0] = fTemp54 - floorf(fTemp54);
			float fTemp55 = dsp->fRec17[0] / fTemp47;
			float fTemp56 = fSlow40 * fTemp55;
			float fTemp57 = fSlow43 * fTemp4;
			float fTemp58 = fSlow45 * fTemp17;
			float fTemp59 = fSlow42 + fTemp57 + fSlow44 * fTemp16 + fTemp58 + fSlow46 * fTemp41;
			float fTemp60 = fSlow40 * (fTemp59 / fTemp47);
			float fTemp61 = fSlow40 / fTemp47;
			float fTemp62 = fTemp61 + -1.0f;
			int iTemp63 = (fTemp56 < 1.0f) + 2 * (fTemp56 > fTemp62);
			float fTemp64 = 1.0f - dsp->fRec17[0];
			int iTemp65 = iTemp53 + 2 * (fTemp52 > (dsp->fConst0 / fTemp23 + -1.0f));
			float fTemp66 = 1.0f - dsp->fRec18[0];
			float fTemp67 = fmodf(fTemp61 + fmodf(fSlow40 * ((dsp->fRec17[0] - fTemp59) / fTemp47), fTemp61), fTemp61);
			int iTemp68 = (fTemp67 < 1.0f) + 2 * (fTemp67 > fTemp62);
			float fTemp69 = fTemp67 - fTemp61;
			float fTemp70 = fSlow50 * fTemp17;
			float fTemp71 = fTemp42 + 1.0f;
			float fTemp72 = fTemp42 * ((fSlow32 * ((iSlow33) ? (float)(((fTemp56 < fTemp60) ? -1 : 1)) + ((iTemp63 == 0) ? 0.0f : ((iTemp63 == 1) ? fSlow47 * (dsp->fRec17[0] * (0.0045454544f - fSlow48 * fTemp55) / fTemp47) + -1.0f : fSlow47 * (fTemp64 * (fSlow48 * (fTemp64 / fTemp47) + -0.0045454544f) / fTemp47) + 1.0f)) + ((fTemp56 >= fTemp60) ? ((iTemp65 == 0) ? 0.0f : ((iTemp65 == 1) ? dsp->fConst0 * (dsp->fRec18[0] * (2.0f - fTemp52) / fTemp23) + -1.0f : dsp->fConst0 * (fTemp66 * (dsp->fConst0 * (fTemp66 / fTemp23) + -2.0f) / fTemp23) + 1.0f)) : 0.0f) - ((iTemp68 == 0) ? 0.0f : ((iTemp68 == 1) ? fTemp67 * (2.0f - fTemp67) + -1.0f : fTemp69 * (fTemp69 + 2.0f) + 1.0f)) : ((iRec15) ? dsp->fConst2 * ((fTemp50 - dsp->fVec7[1]) / fTemp23) : fSlow39 * ((fTemp49 - dsp->fVec6[1]) / fTemp47))) + fSlow49 * fTemp41 + fTemp70 - fSlow51 * (1.0f - fTemp42 / fTemp71) * (dsp->fRec3[1] + fTemp42 * (dsp->fRec2[1] + fTemp42 * (dsp->fRec1[1] + fTemp42 * dsp->fRec0[1] / fTemp71) / fTemp71) / fTemp71)) / (fSlow51 * (mydsp_faustpower4_f(fTemp42) / mydsp_faustpower4_f(fTemp71)) + 1.0f) - dsp->fRec0[1]) / fTemp71;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp72;
			float fTemp73 = fTemp42 * (dsp->fRec0[1] + fTemp72 - dsp->fRec1[1]) / fTemp71;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp73;
			float fTemp74 = fTemp42 * (dsp->fRec1[1] + fTemp73 - dsp->fRec2[1]) / fTemp71;
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * fTemp74;
			float fTemp75 = fTemp42 * (dsp->fRec2[1] + fTemp74 - dsp->fRec3[1]) / fTemp71;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp75;
			float fRec4 = dsp->fRec3[1] + fTemp75;
			int iTemp76 = dsp->iRec19[1] == 0;
			int iTemp77 = dsp->iRec19[1] == 1;
			float fTemp78 = ((iTemp8) ? 0.0f : dsp->fRec20[1]);
			dsp->iRec19[0] = ((iSlow8) ? ((iTemp76) ? 1 : ((iTemp77) ? ((fTemp78 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp79 = ((dsp->iRec19[1] == 2) ? fSlow52 : 0.0f);
			dsp->fRec21[0] = fTemp12 * dsp->fRec21[1] + fTemp13 * ((iTemp8) ? 1.0f : fTemp78);
			float fTemp80 = ((iTemp76) ? dsp->fRec21[0] : 1.0f);
			float fTemp81 = ((fTemp79 == fTemp80) ? 0.5f : (fTemp78 - fTemp79) / (fTemp80 - fTemp79));
			dsp->fRec20[0] = fmaxf(fTemp79, fminf(1.0f, fTemp78 + 0.25f * (((iTemp76) ? -(fSlow55 * dsp->fRec21[0]) : ((iTemp77) ? fSlow54 : fSlow53)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp81 + -1.0f) + (1.0f - fTemp81)))));
			int iTemp82 = dsp->iRec27[1] == 0;
			int iTemp83 = dsp->iRec27[1] == 1;
			float fTemp84 = ((iTemp8) ? 0.0f : dsp->fRec28[1]);
			dsp->iRec27[0] = ((iSlow57) ? ((iTemp82) ? 1 : ((iTemp83) ? ((fTemp84 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp85 = ((dsp->iRec27[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec8[0] = iSlow58;
			int iTemp86 = (dsp->iVec8[1] <= 0) & iSlow59;
			float fTemp87 = (float)(1 - iTemp86);
			float fTemp88 = (float)(iTemp86);
			dsp->fRec29[0] = dsp->fRec29[1] * fTemp87 + ((iTemp8) ? 1.0f : fTemp84) * fTemp88;
			float fTemp89 = ((iTemp82) ? dsp->fRec29[0] : 1.0f);
			float fTemp90 = ((fTemp85 == fTemp89) ? 0.5f : (fTemp84 - fTemp85) / (fTemp89 - fTemp85));
			dsp->fRec28[0] = fmaxf(fTemp85, fminf(1.0f, fTemp84 + 0.25f * (((iTemp82) ? -(fSlow12 * dsp->fRec29[0]) : ((iTemp83) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp90 + -1.0f) + (1.0f - fTemp90)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec28[0]);
			float fTemp91 = dsp->fRec28[0];
			float fTemp92 = fTemp5 + fTemp18;
			float fTemp93 = fTemp20 + fTemp21;
			float fTemp94 = powf(2.0f, 10.666667f * (fSlow26 * fTemp91 + fTemp93));
			float fTemp95 = fSlow61 * fTemp94;
			float fTemp96 = fmaxf(fTemp95, 23.44895f);
			float fTemp97 = fmaxf(2e+01f, fabsf(fTemp96));
			float fTemp98 = ((iTemp0) ? 0.0f : dsp->fRec30[1] + dsp->fConst1 * fTemp97);
			dsp->fRec30[0] = fTemp98 - floorf(fTemp98);
			float fTemp99 = mydsp_faustpower2_f(2.0f * dsp->fRec30[0] + -1.0f);
			dsp->fVec9[0] = fTemp99;
			float fTemp100 = fTemp19 * (fTemp99 - dsp->fVec9[1]) / fTemp97;
			dsp->fVec10[dsp->IOTA0 & 4095] = fTemp100;
			float fTemp101 = fTemp29 + fTemp30;
			float fTemp102 = fSlow28 + fSlow30 * fTemp91 + fTemp101;
			float fTemp103 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp102 / fTemp96)));
			int iTemp104 = (int)(fTemp103);
			float fTemp105 = floorf(fTemp103);
			float fTemp106 = fmaxf(2e+01f, fabsf(fTemp95));
			float fTemp107 = ((iTemp0) ? 0.0f : dsp->fRec31[1] + dsp->fConst1 * fTemp106);
			dsp->fRec31[0] = fTemp107 - floorf(fTemp107);
			float fTemp108 = mydsp_faustpower2_f(2.0f * dsp->fRec31[0] + -1.0f);
			dsp->fVec11[0] = fTemp108;
			dsp->fVec12[dsp->IOTA0 & 8191] = fTemp19 * (fTemp108 - dsp->fVec11[1]) / fTemp106;
			float fTemp109 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst4 / fTemp96));
			int iTemp110 = (int)(fTemp109);
			float fTemp111 = floorf(fTemp109);
			dsp->fRec32[0] = 0.999f * dsp->fRec32[1] + dsp->fConst2 * (fTemp100 - dsp->fVec10[(dsp->IOTA0 - iTemp110) & 4095] * (fTemp111 + (1.0f - fTemp109)) - (fTemp109 - fTemp111) * dsp->fVec10[(dsp->IOTA0 - (iTemp110 + 1)) & 4095]);
			float fTemp112 = ((iSlow18) ? dsp->fConst3 * dsp->fRec32[0] * fSlow61 * fTemp94 : ((iSlow19) ? dsp->fConst2 * dsp->fVec12[(dsp->IOTA0 - max(0, min(8191, (int)(dsp->fConst0 * (fTemp102 / fTemp95) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp100 - dsp->fVec10[(dsp->IOTA0 - iTemp104) & 4095] * (fTemp105 + (1.0f - fTemp103)) - (fTemp103 - fTemp105) * dsp->fVec10[(dsp->IOTA0 - (iTemp104 + 1)) & 4095])));
			float fTemp113 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fSlow6 * fTemp91 + fTemp92 + fSlow16 * fTemp112)), 1.0f));
			float fTemp114 = dsp->fConst1 * fTemp95;
			dsp->fRec33[0] = fmodf(fTemp114 + dsp->fRec33[1], 1.0f);
			int iTemp115 = dsp->fRec33[1] < dsp->fRec33[2];
			int iRec34 = iTemp115;
			float fTemp116 = fTemp45 + fTemp46;
			float fTemp117 = powf(2.0f, 10.666667f * (fSlow36 * fTemp91 + fTemp116 + fSlow38 * fTemp112));
			float fTemp118 = fSlow62 * fTemp117;
			dsp->fRec35[0] = ((iTemp115) ? 0.0f : fmodf(dsp->fRec35[1] + fTemp118, 1.0f));
			float fTemp119 = mydsp_faustpower2_f(2.0f * dsp->fRec35[0] + -1.0f);
			dsp->fVec13[0] = fTemp119;
			float fTemp120 = mydsp_faustpower2_f(2.0f * dsp->fRec33[0] + -1.0f);
			dsp->fVec14[0] = fTemp120;
			float fTemp121 = ((iTemp0) ? 0.0f : fTemp114 + dsp->fRec37[1]);
			dsp->fRec37[0] = fTemp121 - floorf(fTemp121);
			float fTemp122 = dsp->fConst0 * (dsp->fRec37[0] / fTemp95);
			int iTemp123 = fTemp122 < 1.0f;
			float fTemp124 = ((iTemp0 | iTemp123) ? fSlow65 * (dsp->fRec37[0] * fTemp117 * (float)(iTemp123) / fTemp95) : fTemp118 + dsp->fRec36[1]);
			dsp->fRec36[0] = fTemp124 - floorf(fTemp124);
			float fTemp125 = dsp->fRec36[0] / fTemp117;
			float fTemp126 = fSlow64 * fTemp125;
			float fTemp127 = fTemp57 + fTemp58;
			float fTemp128 = fSlow42 + fSlow44 * fTemp91 + fTemp127 + fSlow46 * fTemp112;
			float fTemp129 = fSlow64 * (fTemp128 / fTemp117);
			float fTemp130 = fSlow64 / fTemp117;
			float fTemp131 = fTemp130 + -1.0f;
			int iTemp132 = (fTemp126 < 1.0f) + 2 * (fTemp126 > fTemp131);
			float fTemp133 = 1.0f - dsp->fRec36[0];
			int iTemp134 = iTemp123 + 2 * (fTemp122 > (dsp->fConst0 / fTemp95 + -1.0f));
			float fTemp135 = 1.0f - dsp->fRec37[0];
			float fTemp136 = fmodf(fTemp130 + fmodf(fSlow64 * ((dsp->fRec36[0] - fTemp128) / fTemp117), fTemp130), fTemp130);
			int iTemp137 = (fTemp136 < 1.0f) + 2 * (fTemp136 > fTemp131);
			float fTemp138 = fTemp136 - fTemp130;
			float fTemp139 = fTemp113 + 1.0f;
			float fTemp140 = fTemp113 * ((fSlow49 * fTemp112 + fTemp70 + fSlow32 * ((iSlow33) ? (float)(((fTemp126 < fTemp129) ? -1 : 1)) + ((iTemp132 == 0) ? 0.0f : ((iTemp132 == 1) ? fSlow66 * (dsp->fRec36[0] * (0.0045454544f - fSlow67 * fTemp125) / fTemp117) + -1.0f : fSlow66 * (fTemp133 * (fSlow67 * (fTemp133 / fTemp117) + -0.0045454544f) / fTemp117) + 1.0f)) + ((fTemp126 >= fTemp129) ? ((iTemp134 == 0) ? 0.0f : ((iTemp134 == 1) ? dsp->fConst0 * (dsp->fRec37[0] * (2.0f - fTemp122) / fTemp95) + -1.0f : dsp->fConst0 * (fTemp135 * (dsp->fConst0 * (fTemp135 / fTemp95) + -2.0f) / fTemp95) + 1.0f)) : 0.0f) - ((iTemp137 == 0) ? 0.0f : ((iTemp137 == 1) ? fTemp136 * (2.0f - fTemp136) + -1.0f : fTemp138 * (fTemp138 + 2.0f) + 1.0f)) : ((iRec34) ? dsp->fConst2 * ((fTemp120 - dsp->fVec14[1]) / fTemp95) : fSlow63 * ((fTemp119 - dsp->fVec13[1]) / fTemp117))) - fSlow51 * (1.0f - fTemp113 / fTemp139) * (dsp->fRec25[1] + fTemp113 * (dsp->fRec24[1] + fTemp113 * (dsp->fRec23[1] + fTemp113 * dsp->fRec22[1] / fTemp139) / fTemp139) / fTemp139)) / (fSlow51 * (mydsp_faustpower4_f(fTemp113) / mydsp_faustpower4_f(fTemp139)) + 1.0f) - dsp->fRec22[1]) / fTemp139;
			dsp->fRec22[0] = dsp->fRec22[1] + 2.0f * fTemp140;
			float fTemp141 = fTemp113 * (dsp->fRec22[1] + fTemp140 - dsp->fRec23[1]) / fTemp139;
			dsp->fRec23[0] = dsp->fRec23[1] + 2.0f * fTemp141;
			float fTemp142 = fTemp113 * (dsp->fRec23[1] + fTemp141 - dsp->fRec24[1]) / fTemp139;
			dsp->fRec24[0] = dsp->fRec24[1] + 2.0f * fTemp142;
			float fTemp143 = fTemp113 * (dsp->fRec24[1] + fTemp142 - dsp->fRec25[1]) / fTemp139;
			dsp->fRec25[0] = dsp->fRec25[1] + 2.0f * fTemp143;
			float fRec26 = dsp->fRec25[1] + fTemp143;
			int iTemp144 = dsp->iRec38[1] == 0;
			int iTemp145 = dsp->iRec38[1] == 1;
			float fTemp146 = ((iTemp8) ? 0.0f : dsp->fRec39[1]);
			dsp->iRec38[0] = ((iSlow57) ? ((iTemp144) ? 1 : ((iTemp145) ? ((fTemp146 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp147 = ((dsp->iRec38[1] == 2) ? fSlow52 : 0.0f);
			dsp->fRec40[0] = fTemp87 * dsp->fRec40[1] + fTemp88 * ((iTemp8) ? 1.0f : fTemp146);
			float fTemp148 = ((iTemp144) ? dsp->fRec40[0] : 1.0f);
			float fTemp149 = ((fTemp147 == fTemp148) ? 0.5f : (fTemp146 - fTemp147) / (fTemp148 - fTemp147));
			dsp->fRec39[0] = fmaxf(fTemp147, fminf(1.0f, fTemp146 + 0.25f * (((iTemp144) ? -(fSlow55 * dsp->fRec40[0]) : ((iTemp145) ? fSlow54 : fSlow53)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp149 + -1.0f) + (1.0f - fTemp149)))));
			int iTemp150 = dsp->iRec46[1] == 0;
			int iTemp151 = dsp->iRec46[1] == 1;
			float fTemp152 = ((iTemp8) ? 0.0f : dsp->fRec47[1]);
			dsp->iRec46[0] = ((iSlow69) ? ((iTemp150) ? 1 : ((iTemp151) ? ((fTemp152 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp153 = ((dsp->iRec46[1] == 2) ? fSlow9 : 0.0f);
			dsp->iVec15[0] = iSlow70;
			int iTemp154 = (dsp->iVec15[1] <= 0) & iSlow71;
			float fTemp155 = (float)(1 - iTemp154);
			float fTemp156 = (float)(iTemp154);
			dsp->fRec48[0] = dsp->fRec48[1] * fTemp155 + ((iTemp8) ? 1.0f : fTemp152) * fTemp156;
			float fTemp157 = ((iTemp150) ? dsp->fRec48[0] : 1.0f);
			float fTemp158 = ((fTemp153 == fTemp157) ? 0.5f : (fTemp152 - fTemp153) / (fTemp157 - fTemp153));
			dsp->fRec47[0] = fmaxf(fTemp153, fminf(1.0f, fTemp152 + 0.25f * (((iTemp150) ? -(fSlow12 * dsp->fRec48[0]) : ((iTemp151) ? fSlow11 : fSlow10)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp158 + -1.0f) + (1.0f - fTemp158)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec47[0]);
			float fTemp159 = dsp->fRec47[0];
			float fTemp160 = powf(2.0f, 10.666667f * (fTemp93 + fSlow26 * fTemp159));
			float fTemp161 = fSlow73 * fTemp160;
			float fTemp162 = fmaxf(fTemp161, 23.44895f);
			float fTemp163 = fmaxf(2e+01f, fabsf(fTemp162));
			float fTemp164 = ((iTemp0) ? 0.0f : dsp->fRec49[1] + dsp->fConst1 * fTemp163);
			dsp->fRec49[0] = fTemp164 - floorf(fTemp164);
			float fTemp165 = mydsp_faustpower2_f(2.0f * dsp->fRec49[0] + -1.0f);
			dsp->fVec16[0] = fTemp165;
			float fTemp166 = fTemp19 * (fTemp165 - dsp->fVec16[1]) / fTemp163;
			dsp->fVec17[dsp->IOTA0 & 4095] = fTemp166;
			float fTemp167 = fSlow28 + fTemp101 + fSlow30 * fTemp159;
			float fTemp168 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst0 * (fTemp167 / fTemp162)));
			int iTemp169 = (int)(fTemp168);
			float fTemp170 = floorf(fTemp168);
			float fTemp171 = fmaxf(2e+01f, fabsf(fTemp161));
			float fTemp172 = ((iTemp0) ? 0.0f : dsp->fRec50[1] + dsp->fConst1 * fTemp171);
			dsp->fRec50[0] = fTemp172 - floorf(fTemp172);
			float fTemp173 = mydsp_faustpower2_f(2.0f * dsp->fRec50[0] + -1.0f);
			dsp->fVec18[0] = fTemp173;
			dsp->fVec19[dsp->IOTA0 & 8191] = fTemp19 * (fTemp173 - dsp->fVec18[1]) / fTemp171;
			float fTemp174 = fmaxf(0.0f, fminf(2047.0f, dsp->fConst4 / fTemp162));
			int iTemp175 = (int)(fTemp174);
			float fTemp176 = floorf(fTemp174);
			dsp->fRec51[0] = 0.999f * dsp->fRec51[1] + dsp->fConst2 * (fTemp166 - dsp->fVec17[(dsp->IOTA0 - iTemp175) & 4095] * (fTemp176 + (1.0f - fTemp174)) - (fTemp174 - fTemp176) * dsp->fVec17[(dsp->IOTA0 - (iTemp175 + 1)) & 4095]);
			float fTemp177 = ((iSlow18) ? dsp->fConst3 * dsp->fRec51[0] * fSlow73 * fTemp160 : ((iSlow19) ? dsp->fConst2 * dsp->fVec19[(dsp->IOTA0 - max(0, min(8191, (int)(dsp->fConst0 * (fTemp167 / fTemp161) + 0.5f)))) & 8191] : dsp->fConst2 * (fTemp166 - dsp->fVec17[(dsp->IOTA0 - iTemp169) & 4095] * (fTemp170 + (1.0f - fTemp168)) - (fTemp168 - fTemp170) * dsp->fVec17[(dsp->IOTA0 - (iTemp169 + 1)) & 4095])));
			float fTemp178 = tanf(1.5707964f * fminf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow0 + fTemp92 + fSlow6 * fTemp159 + fSlow16 * fTemp177)), 1.0f));
			float fTemp179 = dsp->fConst1 * fTemp161;
			dsp->fRec52[0] = fmodf(fTemp179 + dsp->fRec52[1], 1.0f);
			int iTemp180 = dsp->fRec52[1] < dsp->fRec52[2];
			int iRec53 = iTemp180;
			float fTemp181 = powf(2.0f, 10.666667f * (fTemp116 + fSlow36 * fTemp159 + fSlow38 * fTemp177));
			float fTemp182 = fSlow74 * fTemp181;
			dsp->fRec54[0] = ((iTemp180) ? 0.0f : fmodf(dsp->fRec54[1] + fTemp182, 1.0f));
			float fTemp183 = mydsp_faustpower2_f(2.0f * dsp->fRec54[0] + -1.0f);
			dsp->fVec20[0] = fTemp183;
			float fTemp184 = mydsp_faustpower2_f(2.0f * dsp->fRec52[0] + -1.0f);
			dsp->fVec21[0] = fTemp184;
			float fTemp185 = ((iTemp0) ? 0.0f : fTemp179 + dsp->fRec56[1]);
			dsp->fRec56[0] = fTemp185 - floorf(fTemp185);
			float fTemp186 = dsp->fConst0 * (dsp->fRec56[0] / fTemp161);
			int iTemp187 = fTemp186 < 1.0f;
			float fTemp188 = ((iTemp0 | iTemp187) ? fSlow77 * (dsp->fRec56[0] * fTemp181 * (float)(iTemp187) / fTemp161) : fTemp182 + dsp->fRec55[1]);
			dsp->fRec55[0] = fTemp188 - floorf(fTemp188);
			float fTemp189 = dsp->fRec55[0] / fTemp181;
			float fTemp190 = fSlow76 * fTemp189;
			float fTemp191 = fSlow42 + fTemp127 + fSlow44 * fTemp159 + fSlow46 * fTemp177;
			float fTemp192 = fSlow76 * (fTemp191 / fTemp181);
			float fTemp193 = fSlow76 / fTemp181;
			float fTemp194 = fTemp193 + -1.0f;
			int iTemp195 = (fTemp190 < 1.0f) + 2 * (fTemp190 > fTemp194);
			float fTemp196 = 1.0f - dsp->fRec55[0];
			int iTemp197 = iTemp187 + 2 * (fTemp186 > (dsp->fConst0 / fTemp161 + -1.0f));
			float fTemp198 = 1.0f - dsp->fRec56[0];
			float fTemp199 = fmodf(fTemp193 + fmodf(fSlow76 * ((dsp->fRec55[0] - fTemp191) / fTemp181), fTemp193), fTemp193);
			int iTemp200 = (fTemp199 < 1.0f) + 2 * (fTemp199 > fTemp194);
			float fTemp201 = fTemp199 - fTemp193;
			float fTemp202 = fTemp178 + 1.0f;
			float fTemp203 = fTemp178 * ((fSlow49 * fTemp177 + fTemp70 + fSlow32 * ((iSlow33) ? (float)(((fTemp190 < fTemp192) ? -1 : 1)) + ((iTemp195 == 0) ? 0.0f : ((iTemp195 == 1) ? fSlow78 * (dsp->fRec55[0] * (0.0045454544f - fSlow79 * fTemp189) / fTemp181) + -1.0f : fSlow78 * (fTemp196 * (fSlow79 * (fTemp196 / fTemp181) + -0.0045454544f) / fTemp181) + 1.0f)) + ((fTemp190 >= fTemp192) ? ((iTemp197 == 0) ? 0.0f : ((iTemp197 == 1) ? dsp->fConst0 * (dsp->fRec56[0] * (2.0f - fTemp186) / fTemp161) + -1.0f : dsp->fConst0 * (fTemp198 * (dsp->fConst0 * (fTemp198 / fTemp161) + -2.0f) / fTemp161) + 1.0f)) : 0.0f) - ((iTemp200 == 0) ? 0.0f : ((iTemp200 == 1) ? fTemp199 * (2.0f - fTemp199) + -1.0f : fTemp201 * (fTemp201 + 2.0f) + 1.0f)) : ((iRec53) ? dsp->fConst2 * ((fTemp184 - dsp->fVec21[1]) / fTemp161) : fSlow75 * ((fTemp183 - dsp->fVec20[1]) / fTemp181))) - fSlow51 * (1.0f - fTemp178 / fTemp202) * (dsp->fRec44[1] + fTemp178 * (dsp->fRec43[1] + fTemp178 * (dsp->fRec42[1] + fTemp178 * dsp->fRec41[1] / fTemp202) / fTemp202) / fTemp202)) / (fSlow51 * (mydsp_faustpower4_f(fTemp178) / mydsp_faustpower4_f(fTemp202)) + 1.0f) - dsp->fRec41[1]) / fTemp202;
			dsp->fRec41[0] = dsp->fRec41[1] + 2.0f * fTemp203;
			float fTemp204 = fTemp178 * (dsp->fRec41[1] + fTemp203 - dsp->fRec42[1]) / fTemp202;
			dsp->fRec42[0] = dsp->fRec42[1] + 2.0f * fTemp204;
			float fTemp205 = fTemp178 * (dsp->fRec42[1] + fTemp204 - dsp->fRec43[1]) / fTemp202;
			dsp->fRec43[0] = dsp->fRec43[1] + 2.0f * fTemp205;
			float fTemp206 = fTemp178 * (dsp->fRec43[1] + fTemp205 - dsp->fRec44[1]) / fTemp202;
			dsp->fRec44[0] = dsp->fRec44[1] + 2.0f * fTemp206;
			float fRec45 = dsp->fRec44[1] + fTemp206;
			int iTemp207 = dsp->iRec57[1] == 0;
			int iTemp208 = dsp->iRec57[1] == 1;
			float fTemp209 = ((iTemp8) ? 0.0f : dsp->fRec58[1]);
			dsp->iRec57[0] = ((iSlow69) ? ((iTemp207) ? 1 : ((iTemp208) ? ((fTemp209 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp210 = ((dsp->iRec57[1] == 2) ? fSlow52 : 0.0f);
			dsp->fRec59[0] = fTemp155 * dsp->fRec59[1] + fTemp156 * ((iTemp8) ? 1.0f : fTemp209);
			float fTemp211 = ((iTemp207) ? dsp->fRec59[0] : 1.0f);
			float fTemp212 = ((fTemp210 == fTemp211) ? 0.5f : (fTemp209 - fTemp210) / (fTemp211 - fTemp210));
			dsp->fRec58[0] = fmaxf(fTemp210, fminf(1.0f, fTemp209 + 0.25f * (((iTemp207) ? -(fSlow55 * dsp->fRec59[0]) : ((iTemp208) ? fSlow54 : fSlow53)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp212 + -1.0f) + (1.0f - fTemp212)))));
			float fTemp213 = 0.2f * (fRec4 * dsp->fRec20[0] + fRec26 * dsp->fRec39[0] + fRec45 * dsp->fRec58[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp213);
			output1[i0] = (FAUSTFLOAT)(fTemp213);
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
			dsp->fRec14[2] = dsp->fRec14[1];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec19[1] = dsp->iRec19[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->iRec27[1] = dsp->iRec27[0];
			dsp->iVec8[1] = dsp->iVec8[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec33[2] = dsp->fRec33[1];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fVec13[1] = dsp->fVec13[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->iRec38[1] = dsp->iRec38[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->iRec46[1] = dsp->iRec46[0];
			dsp->iVec15[1] = dsp->iVec15[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec52[2] = dsp->fRec52[1];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->iRec57[1] = dsp->iRec57[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec58[1] = dsp->fRec58[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
