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
	FAUSTFLOAT fHslider2;
	float fRec5[2];
	int iRec6[2];
	FAUSTFLOAT fHslider3;
	float fRec7[2];
	FAUSTFLOAT fHslider4;
	float fRec8[2];
	FAUSTFLOAT fHslider5;
	float fRec9[2];
	FAUSTFLOAT fHslider6;
	float fConst4;
	FAUSTFLOAT fHslider7;
	float fRec11[2];
	float fRec10[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider8;
	float fRec12[2];
	FAUSTFLOAT fHslider9;
	float fRec13[2];
	FAUSTFLOAT fButton0;
	int iRec16[2];
	int iRec14[2];
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	int iVec1[2];
	float fRec17[2];
	float fRec15[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider14;
	float fRec18[2];
	FAUSTFLOAT fHslider15;
	float fRec19[2];
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec30[2];
	FAUSTFLOAT fHslider20;
	float fRec31[2];
	FAUSTFLOAT fHslider21;
	float fRec32[2];
	FAUSTFLOAT fHslider22;
	float fRec33[2];
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
	FAUSTFLOAT fHslider28;
	float fRec39[2];
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
	float fConst5;
	FAUSTFLOAT fHslider34;
	FAUSTFLOAT fHslider35;
	float fRec45[2];
	FAUSTFLOAT fHslider36;
	float fRec46[2];
	FAUSTFLOAT fHslider37;
	float fRec47[2];
	FAUSTFLOAT fHslider38;
	float fRec48[2];
	FAUSTFLOAT fHslider39;
	float fRec49[2];
	FAUSTFLOAT fHslider40;
	float fRec50[2];
	FAUSTFLOAT fHslider41;
	float fRec51[2];
	FAUSTFLOAT fHslider42;
	float fConst6;
	float fRec20[2];
	FAUSTFLOAT fHslider43;
	FAUSTFLOAT fHslider44;
	float fRec52[2];
	FAUSTFLOAT fHslider45;
	float fRec53[2];
	FAUSTFLOAT fHslider46;
	float fRec54[2];
	FAUSTFLOAT fHslider47;
	float fRec55[2];
	FAUSTFLOAT fHslider48;
	float fRec56[2];
	FAUSTFLOAT fHslider49;
	float fRec57[2];
	FAUSTFLOAT fHslider50;
	float fRec58[2];
	FAUSTFLOAT fHslider51;
	float fRec59[2];
	FAUSTFLOAT fHslider52;
	float fRec60[2];
	float fRec22[2];
	float fRec23[2];
	float fRec24[2];
	float fRec25[2];
	int iRec26[2];
	int iRec27[2];
	float fConst7;
	float fConst8;
	float fRec28[2];
	float fRec29[2];
	FAUSTFLOAT fHslider53;
	float fRec61[2];
	FAUSTFLOAT fHslider54;
	float fRec62[2];
	FAUSTFLOAT fHslider55;
	float fRec63[2];
	FAUSTFLOAT fHslider56;
	float fRec64[2];
	FAUSTFLOAT fHslider57;
	float fRec65[2];
	FAUSTFLOAT fHslider58;
	float fRec66[2];
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	int iRec67[2];
	FAUSTFLOAT fHslider59;
	FAUSTFLOAT fHslider60;
	FAUSTFLOAT fHslider61;
	FAUSTFLOAT fHslider62;
	float fRec69[2];
	float fRec68[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider63;
	FAUSTFLOAT fButton1;
	int iRec74[2];
	int iVec2[2];
	float fRec76[2];
	float fRec75[2];
	FAUSTFLOAT fVbargraph3;
	float fRec77[2];
	float fRec79[2];
	float fRec80[2];
	float fRec81[2];
	float fRec82[2];
	int iRec83[2];
	int iRec84[2];
	float fRec85[2];
	float fRec86[2];
	float fRec70[2];
	float fRec71[2];
	float fRec72[2];
	int iRec87[2];
	float fRec89[2];
	float fRec88[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider64;
	FAUSTFLOAT fButton2;
	int iRec94[2];
	int iVec3[2];
	float fRec96[2];
	float fRec95[2];
	FAUSTFLOAT fVbargraph5;
	float fRec97[2];
	float fRec99[2];
	float fRec100[2];
	float fRec101[2];
	float fRec102[2];
	int iRec103[2];
	int iRec104[2];
	float fRec105[2];
	float fRec106[2];
	float fRec90[2];
	float fRec91[2];
	float fRec92[2];
	int iRec107[2];
	float fRec109[2];
	float fRec108[2];
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
	dsp->fHslider1 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider17 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider19 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider20 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider21 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider37 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider38 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider44 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider45 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider46 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider47 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider48 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider49 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider50 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider51 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider52 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider53 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider54 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider55 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider56 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider57 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider58 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider59 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider60 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider61 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider62 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider63 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider64 = (FAUSTFLOAT)(4e+01f);
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
			dsp->fRec8[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec9[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec11[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec10[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec12[l9] = 0.0f;
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
			dsp->iRec16[l11] = 0;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->iRec14[l12] = 0;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->iVec1[l13] = 0;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec17[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec15[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec18[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec19[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec30[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec31[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec32[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec33[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec34[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec35[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec36[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec37[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec38[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec39[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec40[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec41[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec42[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec43[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec44[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec45[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec46[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec47[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec48[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec49[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec50[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec51[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec20[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec52[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec53[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec54[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec55[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec56[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec57[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec58[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec59[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec60[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec22[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec23[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec24[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec25[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->iRec26[l54] = 0;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->iRec27[l55] = 0;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec28[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec29[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec61[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec62[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec63[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec64[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec65[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec66[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec0[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec1[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec2[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->iRec67[l67] = 0;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec69[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec68[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->iRec74[l70] = 0;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->iVec2[l71] = 0;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec76[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec75[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec77[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec79[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec80[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec81[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec82[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->iRec83[l79] = 0;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->iRec84[l80] = 0;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec85[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec86[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec70[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec71[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec72[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->iRec87[l86] = 0;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec89[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec88[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->iRec94[l89] = 0;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->iVec3[l90] = 0;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec96[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec95[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec97[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec99[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec100[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec101[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec102[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->iRec103[l98] = 0;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->iRec104[l99] = 0;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec105[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec106[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec90[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fRec91[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec92[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->iRec107[l105] = 0;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 2; l106 = l106 + 1) {
			dsp->fRec109[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec108[l107] = 0.0f;
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
	dsp->fConst6 = 0.5f * mydsp_faustpower2_f(dsp->fConst0);
	dsp->fConst7 = 0.375f * dsp->fConst0;
	dsp->fConst8 = 0.0625f * mydsp_faustpower3_f(dsp->fConst0);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider61, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider60, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "0");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider59, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider62, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "10", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "49");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider47, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider38, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "59");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.os1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider52, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "mod", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider12, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider11, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "mod", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider10, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "mod", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider13, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider0, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider58, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "mod", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider7, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "sel", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider6, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider46, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "46");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider1, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider63, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider64, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider57, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider55, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider56, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "alt", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider48, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "sel", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "sel", "28");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider43, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "alt", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "18");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "sel", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "hi-lo", &dsp->fHslider16, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "alt-sel", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider17, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "alt", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider39, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-24.0f, (FAUSTFLOAT)24.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "sel", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "62");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "poly.mod", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "alt", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "63");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "transpose", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-11.0f, (FAUSTFLOAT)11.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst2 * (float)(dsp->fHslider0);
	float fSlow1 = (float)(dsp->fHslider1);
	float fSlow2 = dsp->fConst2 * (float)(dsp->fHslider2);
	float fSlow3 = dsp->fConst2 * (float)(dsp->fHslider3);
	float fSlow4 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow5 = dsp->fConst2 * (float)(dsp->fHslider5);
	float fSlow6 = (float)(dsp->fHslider6);
	int iSlow7 = fSlow6 >= 2.0f;
	int iSlow8 = fSlow6 >= 1.0f;
	float fSlow9 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow10 = dsp->fConst2 * (float)(dsp->fHslider8);
	float fSlow11 = dsp->fConst2 * (float)(dsp->fHslider9);
	float fSlow12 = (float)(dsp->fButton0);
	int iSlow13 = fSlow12 > 0.0f;
	float fSlow14 = (float)(dsp->fHslider10);
	float fSlow15 = (fSlow14 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider11)) + 0.001f));
	float fSlow16 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider12)) + 0.001f));
	float fSlow17 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider13)) + 0.001f));
	int iSlow18 = fSlow12 == 0.0f;
	int iSlow19 = iSlow18 > 0;
	float fSlow20 = dsp->fConst2 * (float)(dsp->fHslider14);
	float fSlow21 = dsp->fConst2 * (float)(dsp->fHslider15);
	int iSlow22 = (float)(dsp->fHslider16) >= 1.0f;
	int iSlow23 = (float)(dsp->fHslider17) >= 1.0f;
	float fSlow24 = 1e+02f * (float)(dsp->fHslider18);
	float fSlow25 = dsp->fConst2 * (float)(dsp->fHslider19);
	float fSlow26 = dsp->fConst2 * (float)(dsp->fHslider20);
	float fSlow27 = dsp->fConst2 * (float)(dsp->fHslider21);
	float fSlow28 = dsp->fConst2 * (float)(dsp->fHslider22);
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow30 = dsp->fConst2 * (float)(dsp->fHslider24);
	float fSlow31 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow32 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow33 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow34 = dsp->fConst2 * (float)(dsp->fHslider28);
	float fSlow35 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow36 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow40 = (float)(dsp->fHslider34);
	int iSlow41 = fSlow40 >= 2.0f;
	int iSlow42 = fSlow40 >= 1.0f;
	float fSlow43 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow44 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow45 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider38);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider41);
	float fSlow50 = (float)(dsp->fHslider42);
	float fSlow51 = (float)(((iSlow41) ? 0 : ((iSlow42) ? 1 : 0)));
	float fSlow52 = fmaxf(fSlow51 + -0.5f, 0.0f);
	float fSlow53 = fmaxf(1.0f - 2.0f * fSlow51, 0.0f);
	float fSlow54 = 1.0f - fSlow53;
	int iSlow55 = (float)(dsp->fHslider43) >= 1.0f;
	float fSlow56 = dsp->fConst2 * (float)(dsp->fHslider44);
	float fSlow57 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow58 = dsp->fConst2 * (float)(dsp->fHslider46);
	float fSlow59 = dsp->fConst2 * (float)(dsp->fHslider47);
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow65 = (float)(((iSlow55) ? 1 : 0));
	float fSlow66 = fmaxf(fSlow65 + -0.5f, 0.0f);
	float fSlow67 = fmaxf(1.0f - 2.0f * fSlow65, 0.0f);
	float fSlow68 = 1.0f - fSlow67;
	float fSlow69 = dsp->fConst2 * (float)(dsp->fHslider53);
	float fSlow70 = dsp->fConst2 * (float)(dsp->fHslider54);
	float fSlow71 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow72 = dsp->fConst2 * (float)(dsp->fHslider56);
	float fSlow73 = dsp->fConst2 * (float)(dsp->fHslider57);
	float fSlow74 = dsp->fConst2 * (float)(dsp->fHslider58);
	float fSlow75 = (float)(dsp->fHslider59);
	float fSlow76 = (fSlow75 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider60)) + 0.001f));
	float fSlow77 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider61)) + 0.001f));
	float fSlow78 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider62)) + 0.001f));
	float fSlow79 = (float)(dsp->fHslider63);
	float fSlow80 = (float)(dsp->fButton1);
	int iSlow81 = fSlow80 > 0.0f;
	int iSlow82 = fSlow80 == 0.0f;
	int iSlow83 = iSlow82 > 0;
	float fSlow84 = (float)(dsp->fHslider64);
	float fSlow85 = (float)(dsp->fButton2);
	int iSlow86 = fSlow85 > 0.0f;
	int iSlow87 = fSlow85 == 0.0f;
	int iSlow88 = iSlow87 > 0;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow0 + dsp->fConst3 * dsp->fRec4[1];
			dsp->fRec5[0] = fSlow2 + dsp->fConst3 * dsp->fRec5[1];
			float fTemp0 = dsp->fRec5[0] + -69.0f;
			float fTemp1 = powf(2.0f, 0.083333336f * (fSlow1 + fTemp0));
			dsp->iRec6[0] = 1103515245 * dsp->iRec6[1] + 12345;
			float fTemp2 = (float)(dsp->iRec6[0]);
			dsp->fRec7[0] = fSlow3 + dsp->fConst3 * dsp->fRec7[1];
			dsp->fRec8[0] = fSlow4 + dsp->fConst3 * dsp->fRec8[1];
			dsp->fRec9[0] = fSlow5 + dsp->fConst3 * dsp->fRec9[1];
			float fTemp3 = 1.1175871e-06f * fTemp2 * (mydsp_faustpower2_f(dsp->fRec7[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec9[0]));
			dsp->fRec11[0] = fSlow9 + dsp->fConst3 * dsp->fRec11[1];
			float fTemp4 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec10[1] + dsp->fConst4 * dsp->fRec11[0]);
			dsp->fRec10[0] = fTemp4 - floorf(fTemp4);
			float fTemp5 = 2.0f * dsp->fRec10[0] + -1.0f;
			float fTemp6 = ((iSlow7) ? 2.0f * (1.0f - fabsf(fTemp5)) + -1.0f : ((iSlow8) ? 2.0f * (float)(dsp->fRec10[0] <= 0.5f) + -1.0f : fTemp5));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp6);
			float fTemp7 = fTemp6;
			dsp->fRec12[0] = fSlow10 + dsp->fConst3 * dsp->fRec12[1];
			dsp->fRec13[0] = fSlow11 + dsp->fConst3 * dsp->fRec13[1];
			float fTemp8 = fTemp7 * (mydsp_faustpower2_f(dsp->fRec12[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec13[0]));
			int iTemp9 = dsp->iRec14[1] == 0;
			int iTemp10 = dsp->iRec14[1] == 1;
			dsp->iRec16[0] = dsp->iRec16[1] + 1;
			int iTemp11 = (dsp->iRec16[0] + -1) == 0;
			float fTemp12 = ((iTemp11) ? 0.0f : dsp->fRec15[1]);
			dsp->iRec14[0] = ((iSlow13) ? ((iTemp9) ? 1 : ((iTemp10) ? ((fTemp12 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp13 = ((dsp->iRec14[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec1[0] = iSlow18;
			int iTemp14 = (dsp->iVec1[1] <= 0) & iSlow19;
			float fTemp15 = (float)(1 - iTemp14);
			float fTemp16 = (float)(iTemp14);
			dsp->fRec17[0] = dsp->fRec17[1] * fTemp15 + ((iTemp11) ? 1.0f : fTemp12) * fTemp16;
			float fTemp17 = ((iTemp9) ? dsp->fRec17[0] : 1.0f);
			float fTemp18 = ((fTemp13 == fTemp17) ? 0.5f : (fTemp12 - fTemp13) / (fTemp17 - fTemp13));
			dsp->fRec15[0] = fmaxf(fTemp13, fminf(1.0f, fTemp12 + 0.25f * (((iTemp9) ? -(fSlow17 * dsp->fRec17[0]) : ((iTemp10) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp18 + -1.0f) + (1.0f - fTemp18)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec15[0]);
			float fTemp19 = dsp->fRec15[0];
			dsp->fRec18[0] = fSlow20 + dsp->fConst3 * dsp->fRec18[1];
			dsp->fRec19[0] = fSlow21 + dsp->fConst3 * dsp->fRec19[1];
			float fTemp20 = mydsp_faustpower2_f(dsp->fRec18[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec19[0]);
			dsp->fRec30[0] = fSlow25 + dsp->fConst3 * dsp->fRec30[1];
			float fTemp21 = powf(2.0f, 0.00083333335f * (fSlow24 + dsp->fRec30[0]));
			float fTemp22 = fTemp21 * (dsp->fRec5[0] + 261.0f);
			dsp->fRec31[0] = fSlow26 + dsp->fConst3 * dsp->fRec31[1];
			dsp->fRec32[0] = fSlow27 + dsp->fConst3 * dsp->fRec32[1];
			float fTemp23 = 2.4e+03f * fTemp7 * (mydsp_faustpower2_f(dsp->fRec31[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec32[0]));
			dsp->fRec33[0] = fSlow28 + dsp->fConst3 * dsp->fRec33[1];
			dsp->fRec34[0] = fSlow29 + dsp->fConst3 * dsp->fRec34[1];
			float fTemp24 = mydsp_faustpower2_f(dsp->fRec33[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec34[0]);
			dsp->fRec35[0] = fSlow30 + dsp->fConst3 * dsp->fRec35[1];
			dsp->fRec36[0] = fSlow31 + dsp->fConst3 * dsp->fRec36[1];
			float fTemp25 = 5.5879354e-07f * fTemp2 * (mydsp_faustpower2_f(dsp->fRec35[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec36[0]));
			float fTemp26 = ((iSlow23) ? 4.4e+02f * fTemp1 * fTemp21 : fTemp22) * powf(2.0f, 0.00083333335f * (fTemp23 + 1.2e+03f * fTemp19 * fTemp24 + fTemp25));
			float fTemp27 = ((iSlow22) ? fTemp26 : 0.0009765625f * fTemp26);
			dsp->fRec37[0] = fSlow32 + dsp->fConst3 * dsp->fRec37[1];
			dsp->fRec38[0] = fSlow33 + dsp->fConst3 * dsp->fRec38[1];
			float fTemp28 = 2.4e+03f * fTemp7 * (mydsp_faustpower2_f(dsp->fRec37[0]) + mydsp_faustpower2_f(dsp->fRec38[0]) * dsp->fRec8[0]);
			dsp->fRec39[0] = fSlow34 + dsp->fConst3 * dsp->fRec39[1];
			dsp->fRec40[0] = fSlow35 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp29 = mydsp_faustpower2_f(dsp->fRec39[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec40[0]);
			dsp->fRec41[0] = fSlow36 + dsp->fConst3 * dsp->fRec41[1];
			dsp->fRec42[0] = fSlow37 + dsp->fConst3 * dsp->fRec42[1];
			float fTemp30 = 5.5879354e-07f * fTemp2 * (mydsp_faustpower2_f(dsp->fRec41[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec42[0]));
			dsp->fRec43[0] = fSlow38 + dsp->fConst3 * dsp->fRec43[1];
			dsp->fRec44[0] = fSlow39 + dsp->fConst3 * dsp->fRec44[1];
			float fTemp31 = mydsp_faustpower2_f(dsp->fRec43[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec44[0]);
			float fTemp32 = fmaxf(0.0f, 4.4e+02f * fTemp1 * powf(2.0f, 0.00083333335f * (fTemp28 + 1.2e+03f * fTemp19 * fTemp29 + fTemp30)) + fTemp27 * dsp->fRec20[1] * fTemp31);
			float fTemp33 = dsp->fConst4 * fTemp32;
			float fTemp34 = dsp->fRec25[1] + fTemp33;
			float fTemp35 = fmodf(fTemp34, 1.0f);
			float fTemp36 = fTemp35 / fTemp32;
			float fTemp37 = dsp->fConst0 * fTemp36;
			float fTemp38 = 1.0f - fTemp37;
			float fTemp39 = dsp->fRec24[1] + dsp->fConst4 * fTemp27 * fTemp38;
			int iTemp40 = dsp->iRec26[1] == 0;
			float fTemp41 = dsp->fConst4 * fTemp27;
			float fTemp42 = dsp->fConst5 * fTemp27;
			dsp->fRec45[0] = fSlow43 + dsp->fConst3 * dsp->fRec45[1];
			dsp->fRec46[0] = fSlow44 + dsp->fConst3 * dsp->fRec46[1];
			float fTemp43 = 4.656613e-10f * fTemp2 * (mydsp_faustpower2_f(dsp->fRec45[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec46[0]));
			dsp->fRec47[0] = fSlow45 + dsp->fConst3 * dsp->fRec47[1];
			dsp->fRec48[0] = fSlow46 + dsp->fConst3 * dsp->fRec48[1];
			float fTemp44 = mydsp_faustpower2_f(dsp->fRec47[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec48[0]);
			dsp->fRec49[0] = fSlow47 + dsp->fConst3 * dsp->fRec49[1];
			dsp->fRec50[0] = fSlow48 + dsp->fConst3 * dsp->fRec50[1];
			dsp->fRec51[0] = fSlow49 + dsp->fConst3 * dsp->fRec51[1];
			float fTemp45 = dsp->fRec49[0] + fTemp7 * (mydsp_faustpower2_f(dsp->fRec50[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec51[0]));
			float fTemp46 = ((fTemp41 >= 0.25f) ? 0.5f : fmaxf(fTemp42, fminf(1.0f - fTemp42, ((iSlow41) ? 0.5f : ((iSlow42) ? fTemp43 + fTemp19 * fTemp44 + fTemp45 : 1.0f)))));
			int iTemp47 = fTemp34 >= 1.0f;
			int iTemp48 = (fSlow50 + (float)(iTemp47)) == 2.0f;
			int iTemp49 = ((((fTemp39 >= 1.0f) + ((iTemp40 + (fTemp39 >= fTemp46)) == 2)) > 0) + (iTemp48 == 0)) > 0;
			float fTemp50 = dsp->fRec24[1] + fTemp41;
			float fTemp51 = fmodf(fTemp50, 1.0f);
			int iTemp52 = fTemp51 >= fTemp46;
			float fTemp53 = fTemp51 - fTemp46;
			float fTemp54 = fTemp41 + dsp->fRec22[1] - fTemp46;
			float fTemp55 = 1.0f - fTemp46;
			float fTemp56 = fTemp27 * fSlow53 * (1.0f / fTemp55 + 1.0f / fTemp46);
			float fTemp57 = fTemp53 / fTemp54;
			float fTemp58 = 1.0f - fTemp57;
			int iTemp59 = fTemp50 >= 1.0f;
			float fTemp60 = fTemp51 / fTemp27;
			float fTemp61 = dsp->fConst0 * fTemp60;
			float fTemp62 = 1.0f - fTemp61;
			float fTemp63 = mydsp_faustpower2_f(fTemp35);
			float fTemp64 = fmodf(fTemp39, 1.0f);
			int iTemp65 = fTemp64 < fTemp46;
			float fTemp66 = fTemp64 + 2.0f * (((iTemp65) ? 0.0f : 1.0f) - fTemp64) * fSlow52 + (((iTemp65) ? fTemp64 / fTemp46 : 1.0f - (fTemp64 - fTemp46) / fTemp55) - fTemp64) * fSlow53;
			float fTemp67 = mydsp_faustpower2_f(fTemp32);
			dsp->fRec20[0] = dsp->fRec28[1] + ((iTemp49) ? ((dsp->iRec26[1]) ? ((iTemp59) ? dsp->fConst4 * fTemp56 * (fTemp62 * (0.375f * fTemp62 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp62)) + 0.1875f) - dsp->fConst6 * (mydsp_faustpower2_f(fTemp51) * fSlow54 / mydsp_faustpower2_f(fTemp27)) : 0.0f) : ((iTemp52) ? fSlow52 * mydsp_faustpower2_f(fTemp53) / mydsp_faustpower2_f(fTemp54) - dsp->fConst4 * fTemp56 * (fTemp58 * (0.375f * fTemp58 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp58)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp48) ? dsp->fConst6 * (fTemp63 * fTemp66 / fTemp67) : 0.0f);
			float fTemp68 = dsp->fConst5 * fTemp32;
			dsp->fRec52[0] = fSlow56 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow57 + dsp->fConst3 * dsp->fRec53[1];
			float fTemp69 = 4.656613e-10f * fTemp2 * (mydsp_faustpower2_f(dsp->fRec52[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec53[0]));
			dsp->fRec54[0] = fSlow58 + dsp->fConst3 * dsp->fRec54[1];
			dsp->fRec55[0] = fSlow59 + dsp->fConst3 * dsp->fRec55[1];
			float fTemp70 = mydsp_faustpower2_f(dsp->fRec54[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec55[0]);
			dsp->fRec56[0] = fSlow60 + dsp->fConst3 * dsp->fRec56[1];
			dsp->fRec57[0] = fSlow61 + dsp->fConst3 * dsp->fRec57[1];
			dsp->fRec58[0] = fSlow62 + dsp->fConst3 * dsp->fRec58[1];
			float fTemp71 = dsp->fRec56[0] + fTemp7 * (mydsp_faustpower2_f(dsp->fRec57[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec58[0]));
			dsp->fRec59[0] = fSlow63 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow64 + dsp->fConst3 * dsp->fRec60[1];
			float fTemp72 = mydsp_faustpower2_f(dsp->fRec59[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec60[0]);
			float fTemp73 = ((fTemp33 >= 0.25f) ? 0.5f : fmaxf(fTemp68, fminf(1.0f - fTemp68, ((iSlow55) ? fTemp69 + fTemp19 * fTemp70 + fTemp71 : 1.0f) + dsp->fRec20[1] * fTemp72)));
			int iTemp74 = fTemp35 >= fTemp73;
			float fTemp75 = fTemp35 - fTemp73;
			float fTemp76 = fTemp33 + dsp->fRec23[1] - fTemp73;
			float fTemp77 = 1.0f - fTemp73;
			float fTemp78 = fTemp32 * (1.0f / fTemp73 + 1.0f / fTemp77) * fSlow67;
			float fTemp79 = fTemp75 / fTemp76;
			float fTemp80 = 1.0f - fTemp79;
			float fRec21 = dsp->fRec29[1] + ((dsp->iRec27[1]) ? ((iTemp47) ? dsp->fConst4 * fTemp78 * (fTemp38 * (0.375f * fTemp38 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp38)) + 0.1875f) - dsp->fConst6 * (fTemp63 * fSlow68 / fTemp67) : 0.0f) : ((iTemp74) ? fSlow66 * mydsp_faustpower2_f(fTemp75) / mydsp_faustpower2_f(fTemp76) - dsp->fConst4 * fTemp78 * (fTemp80 * (0.375f * fTemp80 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp80)) + 0.1875f) : 0.0f));
			dsp->fRec22[0] = fTemp46;
			dsp->fRec23[0] = fTemp73;
			float fTemp81 = ((iTemp48) ? fTemp27 * fTemp35 / fTemp32 : fTemp51);
			dsp->fRec24[0] = fTemp81;
			dsp->fRec25[0] = fTemp35;
			dsp->iRec26[0] = (((iTemp48 + ((dsp->iRec26[1] + iTemp59) == 2) + ((iTemp40 + (fTemp51 < fTemp46)) == 2)) > 0) ? 0 : 1);
			int iTemp82 = fTemp35 < fTemp73;
			dsp->iRec27[0] = (((((iTemp47 + dsp->iRec27[1]) == 2) + (((dsp->iRec27[1] == 0) + iTemp82) == 2)) > 0) ? 0 : 1);
			int iTemp83 = fTemp81 < fTemp46;
			float fTemp84 = fTemp37 - 1.0f;
			dsp->fRec28[0] = fTemp81 + 2.0f * fSlow52 * (((iTemp83) ? 0.0f : 1.0f) - fTemp81) + fSlow53 * (((iTemp83) ? fTemp81 / fTemp46 : 1.0f - (fTemp81 - fTemp46) / fTemp55) - fTemp81) + ((iTemp49) ? ((dsp->iRec26[1]) ? ((iTemp59) ? dsp->fConst4 * fTemp56 * (dsp->fConst0 * (fTemp51 * (dsp->fConst7 * fTemp60 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp51) / mydsp_faustpower3_f(fTemp27))) / fTemp27) + 0.1875f) - 0.5f * fTemp62 * fSlow54 * (fTemp61 - 1.0f) : 0.0f) : ((iTemp52) ? fSlow52 * fTemp58 * (fTemp57 - 1.0f) - dsp->fConst4 * fTemp56 * (fTemp53 * (0.375f * fTemp57 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp53) / mydsp_faustpower3_f(fTemp54))) / fTemp54 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp48) ? 0.5f * fTemp38 * fTemp66 * fTemp84 : 0.0f);
			dsp->fRec29[0] = fTemp35 + 2.0f * fSlow66 * (((iTemp82) ? 0.0f : 1.0f) - fTemp35) + fSlow67 * (((iTemp82) ? fTemp35 / fTemp73 : 1.0f - fTemp75 / fTemp77) - fTemp35) + ((dsp->iRec27[1]) ? ((iTemp47) ? dsp->fConst4 * fTemp78 * (dsp->fConst0 * (fTemp35 * (dsp->fConst7 * fTemp36 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp35) / mydsp_faustpower3_f(fTemp32))) / fTemp32) + 0.1875f) - 0.5f * fTemp38 * fSlow68 * fTemp84 : 0.0f) : ((iTemp74) ? fSlow66 * fTemp80 * (fTemp79 - 1.0f) - dsp->fConst4 * fTemp78 * (fTemp75 * (0.375f * fTemp79 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp75) / mydsp_faustpower3_f(fTemp76))) / fTemp76 + 0.1875f) : 0.0f));
			float fTemp85 = 2.0f * dsp->fRec20[0] + -1.0f;
			dsp->fRec61[0] = fSlow69 + dsp->fConst3 * dsp->fRec61[1];
			dsp->fRec62[0] = fSlow70 + dsp->fConst3 * dsp->fRec62[1];
			float fTemp86 = mydsp_faustpower2_f(dsp->fRec61[0]) + dsp->fRec8[0] * mydsp_faustpower2_f(dsp->fRec62[0]);
			float fTemp87 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(fTemp1)) * powf(2.0f, 0.00083333335f * (fTemp3 + 9.6e+03f * (fTemp8 + fTemp19 * fTemp20 + fTemp85 * fTemp86)))), 1.0f) + 1.0f));
			dsp->fRec63[0] = fSlow71 + dsp->fConst3 * dsp->fRec63[1];
			dsp->fRec64[0] = fSlow72 + dsp->fConst3 * dsp->fRec64[1];
			dsp->fRec65[0] = fSlow73 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp88 = 4.656613e-10f * dsp->fRec65[0] * fTemp2;
			float fTemp89 = (0.5f * (dsp->fRec63[0] * (2.0f * fRec21 + -1.0f) + dsp->fRec64[0] * fTemp85 + fTemp88) - dsp->fRec2[1]) * fTemp87;
			dsp->fRec66[0] = fSlow74 + dsp->fConst3 * dsp->fRec66[1];
			float fTemp90 = dsp->fRec66[0] + -0.707f;
			float fTemp91 = fTemp87 + 1.0f;
			float fTemp92 = 1.0f - fTemp87 / fTemp91;
			float fTemp93 = fTemp87 * ((dsp->fRec2[1] + (fTemp89 + 0.21521576f * dsp->fRec0[1] * fTemp90 * fTemp92 - dsp->fRec1[1]) / fTemp91) / (1.0f - 0.21521576f * (fTemp87 * fTemp90 * fTemp92 / fTemp91)) - dsp->fRec0[1]) / fTemp91;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp93;
			float fTemp94 = dsp->fRec0[1] + fTemp93;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp87 * (0.21521576f * fTemp90 * fTemp94 - dsp->fRec1[1]) / fTemp91);
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp89 / fTemp91);
			float fRec3 = fTemp94;
			int iTemp95 = dsp->iRec67[1] == 0;
			int iTemp96 = dsp->iRec67[1] == 1;
			float fTemp97 = ((iTemp11) ? 0.0f : dsp->fRec68[1]);
			dsp->iRec67[0] = ((iSlow13) ? ((iTemp95) ? 1 : ((iTemp96) ? ((fTemp97 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp98 = ((dsp->iRec67[1] == 2) ? fSlow75 : 0.0f);
			dsp->fRec69[0] = fTemp15 * dsp->fRec69[1] + fTemp16 * ((iTemp11) ? 1.0f : fTemp97);
			float fTemp99 = ((iTemp95) ? dsp->fRec69[0] : 1.0f);
			float fTemp100 = ((fTemp98 == fTemp99) ? 0.5f : (fTemp97 - fTemp98) / (fTemp99 - fTemp98));
			dsp->fRec68[0] = fmaxf(fTemp98, fminf(1.0f, fTemp97 + 0.25f * (((iTemp95) ? -(fSlow78 * dsp->fRec69[0]) : ((iTemp96) ? fSlow77 : fSlow76)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp100 + -1.0f) + (1.0f - fTemp100)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec68[0]);
			float fTemp101 = powf(2.0f, 0.083333336f * (fSlow79 + fTemp0));
			int iTemp102 = dsp->iRec74[1] == 0;
			int iTemp103 = dsp->iRec74[1] == 1;
			float fTemp104 = ((iTemp11) ? 0.0f : dsp->fRec75[1]);
			dsp->iRec74[0] = ((iSlow81) ? ((iTemp102) ? 1 : ((iTemp103) ? ((fTemp104 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp105 = ((dsp->iRec74[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec2[0] = iSlow82;
			int iTemp106 = (dsp->iVec2[1] <= 0) & iSlow83;
			float fTemp107 = (float)(1 - iTemp106);
			float fTemp108 = (float)(iTemp106);
			dsp->fRec76[0] = dsp->fRec76[1] * fTemp107 + ((iTemp11) ? 1.0f : fTemp104) * fTemp108;
			float fTemp109 = ((iTemp102) ? dsp->fRec76[0] : 1.0f);
			float fTemp110 = ((fTemp105 == fTemp109) ? 0.5f : (fTemp104 - fTemp105) / (fTemp109 - fTemp105));
			dsp->fRec75[0] = fmaxf(fTemp105, fminf(1.0f, fTemp104 + 0.25f * (((iTemp102) ? -(fSlow17 * dsp->fRec76[0]) : ((iTemp103) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp110 + -1.0f) + (1.0f - fTemp110)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec75[0]);
			float fTemp111 = dsp->fRec75[0];
			float fTemp112 = fTemp23 + fTemp25;
			float fTemp113 = ((iSlow23) ? 4.4e+02f * fTemp21 * fTemp101 : fTemp22) * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp111 * fTemp24 + fTemp112));
			float fTemp114 = ((iSlow22) ? fTemp113 : 0.0009765625f * fTemp113);
			float fTemp115 = fTemp28 + fTemp30;
			float fTemp116 = fmaxf(0.0f, 4.4e+02f * fTemp101 * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp111 * fTemp29 + fTemp115)) + fTemp31 * fTemp114 * dsp->fRec77[1]);
			float fTemp117 = dsp->fConst4 * fTemp116;
			float fTemp118 = dsp->fRec82[1] + fTemp117;
			float fTemp119 = fmodf(fTemp118, 1.0f);
			float fTemp120 = fTemp119 / fTemp116;
			float fTemp121 = dsp->fConst0 * fTemp120;
			float fTemp122 = 1.0f - fTemp121;
			float fTemp123 = dsp->fRec81[1] + dsp->fConst4 * fTemp114 * fTemp122;
			int iTemp124 = dsp->iRec83[1] == 0;
			float fTemp125 = dsp->fConst4 * fTemp114;
			float fTemp126 = dsp->fConst5 * fTemp114;
			float fTemp127 = fTemp43 + fTemp45;
			float fTemp128 = ((fTemp125 >= 0.25f) ? 0.5f : fmaxf(fTemp126, fminf(1.0f - fTemp126, ((iSlow41) ? 0.5f : ((iSlow42) ? fTemp111 * fTemp44 + fTemp127 : 1.0f)))));
			int iTemp129 = fTemp118 >= 1.0f;
			int iTemp130 = (fSlow50 + (float)(iTemp129)) == 2.0f;
			int iTemp131 = ((((fTemp123 >= 1.0f) + ((iTemp124 + (fTemp123 >= fTemp128)) == 2)) > 0) + (iTemp130 == 0)) > 0;
			float fTemp132 = dsp->fRec81[1] + fTemp125;
			float fTemp133 = fmodf(fTemp132, 1.0f);
			int iTemp134 = fTemp133 >= fTemp128;
			float fTemp135 = fTemp133 - fTemp128;
			float fTemp136 = fTemp125 + dsp->fRec79[1] - fTemp128;
			float fTemp137 = 1.0f - fTemp128;
			float fTemp138 = fSlow53 * fTemp114 * (1.0f / fTemp137 + 1.0f / fTemp128);
			float fTemp139 = fTemp135 / fTemp136;
			float fTemp140 = 1.0f - fTemp139;
			int iTemp141 = fTemp132 >= 1.0f;
			float fTemp142 = fTemp133 / fTemp114;
			float fTemp143 = dsp->fConst0 * fTemp142;
			float fTemp144 = 1.0f - fTemp143;
			float fTemp145 = mydsp_faustpower2_f(fTemp119);
			float fTemp146 = fmodf(fTemp123, 1.0f);
			int iTemp147 = fTemp146 < fTemp128;
			float fTemp148 = fTemp146 + 2.0f * fSlow52 * (((iTemp147) ? 0.0f : 1.0f) - fTemp146) + fSlow53 * (((iTemp147) ? fTemp146 / fTemp128 : 1.0f - (fTemp146 - fTemp128) / fTemp137) - fTemp146);
			float fTemp149 = mydsp_faustpower2_f(fTemp116);
			dsp->fRec77[0] = dsp->fRec85[1] + ((iTemp131) ? ((dsp->iRec83[1]) ? ((iTemp141) ? dsp->fConst4 * fTemp138 * (fTemp144 * (0.375f * fTemp144 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp144)) + 0.1875f) - dsp->fConst6 * (fSlow54 * mydsp_faustpower2_f(fTemp133) / mydsp_faustpower2_f(fTemp114)) : 0.0f) : ((iTemp134) ? fSlow52 * mydsp_faustpower2_f(fTemp135) / mydsp_faustpower2_f(fTemp136) - dsp->fConst4 * fTemp138 * (fTemp140 * (0.375f * fTemp140 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp140)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp130) ? dsp->fConst6 * (fTemp145 * fTemp148 / fTemp149) : 0.0f);
			float fTemp150 = dsp->fConst5 * fTemp116;
			float fTemp151 = fTemp69 + fTemp71;
			float fTemp152 = ((fTemp117 >= 0.25f) ? 0.5f : fmaxf(fTemp150, fminf(1.0f - fTemp150, ((iSlow55) ? fTemp111 * fTemp70 + fTemp151 : 1.0f) + fTemp72 * dsp->fRec77[1])));
			int iTemp153 = fTemp119 >= fTemp152;
			float fTemp154 = fTemp119 - fTemp152;
			float fTemp155 = fTemp117 + dsp->fRec80[1] - fTemp152;
			float fTemp156 = 1.0f - fTemp152;
			float fTemp157 = fSlow67 * fTemp116 * (1.0f / fTemp152 + 1.0f / fTemp156);
			float fTemp158 = fTemp154 / fTemp155;
			float fTemp159 = 1.0f - fTemp158;
			float fRec78 = dsp->fRec86[1] + ((dsp->iRec84[1]) ? ((iTemp129) ? dsp->fConst4 * fTemp157 * (fTemp122 * (0.375f * fTemp122 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp122)) + 0.1875f) - dsp->fConst6 * (fSlow68 * fTemp145 / fTemp149) : 0.0f) : ((iTemp153) ? fSlow66 * mydsp_faustpower2_f(fTemp154) / mydsp_faustpower2_f(fTemp155) - dsp->fConst4 * fTemp157 * (fTemp159 * (0.375f * fTemp159 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp159)) + 0.1875f) : 0.0f));
			dsp->fRec79[0] = fTemp128;
			dsp->fRec80[0] = fTemp152;
			float fTemp160 = ((iTemp130) ? fTemp114 * fTemp119 / fTemp116 : fTemp133);
			dsp->fRec81[0] = fTemp160;
			dsp->fRec82[0] = fTemp119;
			dsp->iRec83[0] = (((iTemp130 + ((dsp->iRec83[1] + iTemp141) == 2) + ((iTemp124 + (fTemp133 < fTemp128)) == 2)) > 0) ? 0 : 1);
			int iTemp161 = fTemp119 < fTemp152;
			dsp->iRec84[0] = (((((iTemp129 + dsp->iRec84[1]) == 2) + (((dsp->iRec84[1] == 0) + iTemp161) == 2)) > 0) ? 0 : 1);
			int iTemp162 = fTemp160 < fTemp128;
			float fTemp163 = fTemp121 - 1.0f;
			dsp->fRec85[0] = fTemp160 + 2.0f * fSlow52 * (((iTemp162) ? 0.0f : 1.0f) - fTemp160) + fSlow53 * (((iTemp162) ? fTemp160 / fTemp128 : 1.0f - (fTemp160 - fTemp128) / fTemp137) - fTemp160) + ((iTemp131) ? ((dsp->iRec83[1]) ? ((iTemp141) ? dsp->fConst4 * fTemp138 * (dsp->fConst0 * (fTemp133 * (dsp->fConst7 * fTemp142 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp133) / mydsp_faustpower3_f(fTemp114))) / fTemp114) + 0.1875f) - 0.5f * fSlow54 * fTemp144 * (fTemp143 - 1.0f) : 0.0f) : ((iTemp134) ? fSlow52 * fTemp140 * (fTemp139 - 1.0f) - dsp->fConst4 * fTemp138 * (fTemp135 * (0.375f * fTemp139 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp135) / mydsp_faustpower3_f(fTemp136))) / fTemp136 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp130) ? 0.5f * fTemp122 * fTemp148 * fTemp163 : 0.0f);
			dsp->fRec86[0] = fTemp119 + 2.0f * fSlow66 * (((iTemp161) ? 0.0f : 1.0f) - fTemp119) + fSlow67 * (((iTemp161) ? fTemp119 / fTemp152 : 1.0f - fTemp154 / fTemp156) - fTemp119) + ((dsp->iRec84[1]) ? ((iTemp129) ? dsp->fConst4 * fTemp157 * (dsp->fConst0 * (fTemp119 * (dsp->fConst7 * fTemp120 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp119) / mydsp_faustpower3_f(fTemp116))) / fTemp116) + 0.1875f) - 0.5f * fSlow68 * fTemp122 * fTemp163 : 0.0f) : ((iTemp153) ? fSlow66 * fTemp159 * (fTemp158 - 1.0f) - dsp->fConst4 * fTemp157 * (fTemp154 * (0.375f * fTemp158 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp154) / mydsp_faustpower3_f(fTemp155))) / fTemp155 + 0.1875f) : 0.0f));
			float fTemp164 = 2.0f * dsp->fRec77[0] + -1.0f;
			float fTemp165 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(fTemp101)) * powf(2.0f, 0.00083333335f * (fTemp3 + 9.6e+03f * (fTemp8 + fTemp111 * fTemp20 + fTemp86 * fTemp164)))), 1.0f) + 1.0f));
			float fTemp166 = (0.5f * (dsp->fRec64[0] * fTemp164 + fTemp88 + dsp->fRec63[0] * (2.0f * fRec78 + -1.0f)) - dsp->fRec72[1]) * fTemp165;
			float fTemp167 = fTemp165 + 1.0f;
			float fTemp168 = 1.0f - fTemp165 / fTemp167;
			float fTemp169 = fTemp165 * ((dsp->fRec72[1] + (fTemp166 + 0.21521576f * fTemp90 * dsp->fRec70[1] * fTemp168 - dsp->fRec71[1]) / fTemp167) / (1.0f - 0.21521576f * (fTemp90 * fTemp165 * fTemp168 / fTemp167)) - dsp->fRec70[1]) / fTemp167;
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * fTemp169;
			float fTemp170 = dsp->fRec70[1] + fTemp169;
			dsp->fRec71[0] = dsp->fRec71[1] + 2.0f * (fTemp165 * (0.21521576f * fTemp90 * fTemp170 - dsp->fRec71[1]) / fTemp167);
			dsp->fRec72[0] = dsp->fRec72[1] + 2.0f * (fTemp166 / fTemp167);
			float fRec73 = fTemp170;
			int iTemp171 = dsp->iRec87[1] == 0;
			int iTemp172 = dsp->iRec87[1] == 1;
			float fTemp173 = ((iTemp11) ? 0.0f : dsp->fRec88[1]);
			dsp->iRec87[0] = ((iSlow81) ? ((iTemp171) ? 1 : ((iTemp172) ? ((fTemp173 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp174 = ((dsp->iRec87[1] == 2) ? fSlow75 : 0.0f);
			dsp->fRec89[0] = fTemp107 * dsp->fRec89[1] + fTemp108 * ((iTemp11) ? 1.0f : fTemp173);
			float fTemp175 = ((iTemp171) ? dsp->fRec89[0] : 1.0f);
			float fTemp176 = ((fTemp174 == fTemp175) ? 0.5f : (fTemp173 - fTemp174) / (fTemp175 - fTemp174));
			dsp->fRec88[0] = fmaxf(fTemp174, fminf(1.0f, fTemp173 + 0.25f * (((iTemp171) ? -(fSlow78 * dsp->fRec89[0]) : ((iTemp172) ? fSlow77 : fSlow76)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp176 + -1.0f) + (1.0f - fTemp176)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec88[0]);
			float fTemp177 = powf(2.0f, 0.083333336f * (fSlow84 + fTemp0));
			int iTemp178 = dsp->iRec94[1] == 0;
			int iTemp179 = dsp->iRec94[1] == 1;
			float fTemp180 = ((iTemp11) ? 0.0f : dsp->fRec95[1]);
			dsp->iRec94[0] = ((iSlow86) ? ((iTemp178) ? 1 : ((iTemp179) ? ((fTemp180 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp181 = ((dsp->iRec94[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec3[0] = iSlow87;
			int iTemp182 = (dsp->iVec3[1] <= 0) & iSlow88;
			float fTemp183 = (float)(1 - iTemp182);
			float fTemp184 = (float)(iTemp182);
			dsp->fRec96[0] = dsp->fRec96[1] * fTemp183 + ((iTemp11) ? 1.0f : fTemp180) * fTemp184;
			float fTemp185 = ((iTemp178) ? dsp->fRec96[0] : 1.0f);
			float fTemp186 = ((fTemp181 == fTemp185) ? 0.5f : (fTemp180 - fTemp181) / (fTemp185 - fTemp181));
			dsp->fRec95[0] = fmaxf(fTemp181, fminf(1.0f, fTemp180 + 0.25f * (((iTemp178) ? -(fSlow17 * dsp->fRec96[0]) : ((iTemp179) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp186 + -1.0f) + (1.0f - fTemp186)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec95[0]);
			float fTemp187 = dsp->fRec95[0];
			float fTemp188 = ((iSlow23) ? 4.4e+02f * fTemp21 * fTemp177 : fTemp22) * powf(2.0f, 0.00083333335f * (fTemp112 + 1.2e+03f * fTemp187 * fTemp24));
			float fTemp189 = ((iSlow22) ? fTemp188 : 0.0009765625f * fTemp188);
			float fTemp190 = fmaxf(0.0f, 4.4e+02f * fTemp177 * powf(2.0f, 0.00083333335f * (fTemp115 + 1.2e+03f * fTemp187 * fTemp29)) + fTemp31 * fTemp189 * dsp->fRec97[1]);
			float fTemp191 = dsp->fConst4 * fTemp190;
			float fTemp192 = dsp->fRec102[1] + fTemp191;
			float fTemp193 = fmodf(fTemp192, 1.0f);
			float fTemp194 = fTemp193 / fTemp190;
			float fTemp195 = dsp->fConst0 * fTemp194;
			float fTemp196 = 1.0f - fTemp195;
			float fTemp197 = dsp->fRec101[1] + dsp->fConst4 * fTemp189 * fTemp196;
			int iTemp198 = dsp->iRec103[1] == 0;
			float fTemp199 = dsp->fConst4 * fTemp189;
			float fTemp200 = dsp->fConst5 * fTemp189;
			float fTemp201 = ((fTemp199 >= 0.25f) ? 0.5f : fmaxf(fTemp200, fminf(1.0f - fTemp200, ((iSlow41) ? 0.5f : ((iSlow42) ? fTemp127 + fTemp187 * fTemp44 : 1.0f)))));
			int iTemp202 = fTemp192 >= 1.0f;
			int iTemp203 = (fSlow50 + (float)(iTemp202)) == 2.0f;
			int iTemp204 = ((((fTemp197 >= 1.0f) + ((iTemp198 + (fTemp197 >= fTemp201)) == 2)) > 0) + (iTemp203 == 0)) > 0;
			float fTemp205 = dsp->fRec101[1] + fTemp199;
			float fTemp206 = fmodf(fTemp205, 1.0f);
			int iTemp207 = fTemp206 >= fTemp201;
			float fTemp208 = fTemp206 - fTemp201;
			float fTemp209 = fTemp199 + dsp->fRec99[1] - fTemp201;
			float fTemp210 = 1.0f - fTemp201;
			float fTemp211 = fSlow53 * fTemp189 * (1.0f / fTemp210 + 1.0f / fTemp201);
			float fTemp212 = fTemp208 / fTemp209;
			float fTemp213 = 1.0f - fTemp212;
			int iTemp214 = fTemp205 >= 1.0f;
			float fTemp215 = fTemp206 / fTemp189;
			float fTemp216 = dsp->fConst0 * fTemp215;
			float fTemp217 = 1.0f - fTemp216;
			float fTemp218 = mydsp_faustpower2_f(fTemp193);
			float fTemp219 = fmodf(fTemp197, 1.0f);
			int iTemp220 = fTemp219 < fTemp201;
			float fTemp221 = fTemp219 + 2.0f * fSlow52 * (((iTemp220) ? 0.0f : 1.0f) - fTemp219) + fSlow53 * (((iTemp220) ? fTemp219 / fTemp201 : 1.0f - (fTemp219 - fTemp201) / fTemp210) - fTemp219);
			float fTemp222 = mydsp_faustpower2_f(fTemp190);
			dsp->fRec97[0] = dsp->fRec105[1] + ((iTemp204) ? ((dsp->iRec103[1]) ? ((iTemp214) ? dsp->fConst4 * fTemp211 * (fTemp217 * (0.375f * fTemp217 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp217)) + 0.1875f) - dsp->fConst6 * (fSlow54 * mydsp_faustpower2_f(fTemp206) / mydsp_faustpower2_f(fTemp189)) : 0.0f) : ((iTemp207) ? fSlow52 * mydsp_faustpower2_f(fTemp208) / mydsp_faustpower2_f(fTemp209) - dsp->fConst4 * fTemp211 * (fTemp213 * (0.375f * fTemp213 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp213)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp203) ? dsp->fConst6 * (fTemp218 * fTemp221 / fTemp222) : 0.0f);
			float fTemp223 = dsp->fConst5 * fTemp190;
			float fTemp224 = ((fTemp191 >= 0.25f) ? 0.5f : fmaxf(fTemp223, fminf(1.0f - fTemp223, ((iSlow55) ? fTemp151 + fTemp187 * fTemp70 : 1.0f) + fTemp72 * dsp->fRec97[1])));
			int iTemp225 = fTemp193 >= fTemp224;
			float fTemp226 = fTemp193 - fTemp224;
			float fTemp227 = fTemp191 + dsp->fRec100[1] - fTemp224;
			float fTemp228 = 1.0f - fTemp224;
			float fTemp229 = fSlow67 * fTemp190 * (1.0f / fTemp224 + 1.0f / fTemp228);
			float fTemp230 = fTemp226 / fTemp227;
			float fTemp231 = 1.0f - fTemp230;
			float fRec98 = dsp->fRec106[1] + ((dsp->iRec104[1]) ? ((iTemp202) ? dsp->fConst4 * fTemp229 * (fTemp196 * (0.375f * fTemp196 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp196)) + 0.1875f) - dsp->fConst6 * (fSlow68 * fTemp218 / fTemp222) : 0.0f) : ((iTemp225) ? fSlow66 * mydsp_faustpower2_f(fTemp226) / mydsp_faustpower2_f(fTemp227) - dsp->fConst4 * fTemp229 * (fTemp231 * (0.375f * fTemp231 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp231)) + 0.1875f) : 0.0f));
			dsp->fRec99[0] = fTemp201;
			dsp->fRec100[0] = fTemp224;
			float fTemp232 = ((iTemp203) ? fTemp189 * fTemp193 / fTemp190 : fTemp206);
			dsp->fRec101[0] = fTemp232;
			dsp->fRec102[0] = fTemp193;
			dsp->iRec103[0] = (((iTemp203 + ((dsp->iRec103[1] + iTemp214) == 2) + ((iTemp198 + (fTemp206 < fTemp201)) == 2)) > 0) ? 0 : 1);
			int iTemp233 = fTemp193 < fTemp224;
			dsp->iRec104[0] = (((((iTemp202 + dsp->iRec104[1]) == 2) + (((dsp->iRec104[1] == 0) + iTemp233) == 2)) > 0) ? 0 : 1);
			int iTemp234 = fTemp232 < fTemp201;
			float fTemp235 = fTemp195 - 1.0f;
			dsp->fRec105[0] = fTemp232 + 2.0f * fSlow52 * (((iTemp234) ? 0.0f : 1.0f) - fTemp232) + fSlow53 * (((iTemp234) ? fTemp232 / fTemp201 : 1.0f - (fTemp232 - fTemp201) / fTemp210) - fTemp232) + ((iTemp204) ? ((dsp->iRec103[1]) ? ((iTemp214) ? dsp->fConst4 * fTemp211 * (dsp->fConst0 * (fTemp206 * (dsp->fConst7 * fTemp215 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp206) / mydsp_faustpower3_f(fTemp189))) / fTemp189) + 0.1875f) - 0.5f * fSlow54 * fTemp217 * (fTemp216 - 1.0f) : 0.0f) : ((iTemp207) ? fSlow52 * fTemp213 * (fTemp212 - 1.0f) - dsp->fConst4 * fTemp211 * (fTemp208 * (0.375f * fTemp212 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp208) / mydsp_faustpower3_f(fTemp209))) / fTemp209 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp203) ? 0.5f * fTemp196 * fTemp221 * fTemp235 : 0.0f);
			dsp->fRec106[0] = fTemp193 + 2.0f * fSlow66 * (((iTemp233) ? 0.0f : 1.0f) - fTemp193) + fSlow67 * (((iTemp233) ? fTemp193 / fTemp224 : 1.0f - fTemp226 / fTemp228) - fTemp193) + ((dsp->iRec104[1]) ? ((iTemp202) ? dsp->fConst4 * fTemp229 * (dsp->fConst0 * (fTemp193 * (dsp->fConst7 * fTemp194 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp193) / mydsp_faustpower3_f(fTemp190))) / fTemp190) + 0.1875f) - 0.5f * fSlow68 * fTemp196 * fTemp235 : 0.0f) : ((iTemp225) ? fSlow66 * fTemp231 * (fTemp230 - 1.0f) - dsp->fConst4 * fTemp229 * (fTemp226 * (0.375f * fTemp230 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp226) / mydsp_faustpower3_f(fTemp227))) / fTemp227 + 0.1875f) : 0.0f));
			float fTemp236 = 2.0f * dsp->fRec97[0] + -1.0f;
			float fTemp237 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(fTemp177)) * powf(2.0f, 0.00083333335f * (fTemp3 + 9.6e+03f * (fTemp8 + fTemp187 * fTemp20 + fTemp86 * fTemp236)))), 1.0f) + 1.0f));
			float fTemp238 = (0.5f * (dsp->fRec64[0] * fTemp236 + fTemp88 + dsp->fRec63[0] * (2.0f * fRec98 + -1.0f)) - dsp->fRec92[1]) * fTemp237;
			float fTemp239 = fTemp237 + 1.0f;
			float fTemp240 = 1.0f - fTemp237 / fTemp239;
			float fTemp241 = fTemp237 * ((dsp->fRec92[1] + (fTemp238 + 0.21521576f * fTemp90 * dsp->fRec90[1] * fTemp240 - dsp->fRec91[1]) / fTemp239) / (1.0f - 0.21521576f * (fTemp90 * fTemp237 * fTemp240 / fTemp239)) - dsp->fRec90[1]) / fTemp239;
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * fTemp241;
			float fTemp242 = dsp->fRec90[1] + fTemp241;
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * (fTemp237 * (0.21521576f * fTemp90 * fTemp242 - dsp->fRec91[1]) / fTemp239);
			dsp->fRec92[0] = dsp->fRec92[1] + 2.0f * (fTemp238 / fTemp239);
			float fRec93 = fTemp242;
			int iTemp243 = dsp->iRec107[1] == 0;
			int iTemp244 = dsp->iRec107[1] == 1;
			float fTemp245 = ((iTemp11) ? 0.0f : dsp->fRec108[1]);
			dsp->iRec107[0] = ((iSlow86) ? ((iTemp243) ? 1 : ((iTemp244) ? ((fTemp245 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp246 = ((dsp->iRec107[1] == 2) ? fSlow75 : 0.0f);
			dsp->fRec109[0] = fTemp183 * dsp->fRec109[1] + fTemp184 * ((iTemp11) ? 1.0f : fTemp245);
			float fTemp247 = ((iTemp243) ? dsp->fRec109[0] : 1.0f);
			float fTemp248 = ((fTemp246 == fTemp247) ? 0.5f : (fTemp245 - fTemp246) / (fTemp247 - fTemp246));
			dsp->fRec108[0] = fmaxf(fTemp246, fminf(1.0f, fTemp245 + 0.25f * (((iTemp243) ? -(fSlow78 * dsp->fRec109[0]) : ((iTemp244) ? fSlow77 : fSlow76)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp248 + -1.0f) + (1.0f - fTemp248)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec108[0]);
			float fTemp249 = 0.12f * (fRec3 * dsp->fRec68[0] + fRec73 * dsp->fRec88[0] + fRec93 * dsp->fRec108[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp249);
			output1[i0] = (FAUSTFLOAT)(fTemp249);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec6[1] = dsp->iRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->iRec16[1] = dsp->iRec16[0];
			dsp->iRec14[1] = dsp->iRec14[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec33[1] = dsp->fRec33[0];
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
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->iRec26[1] = dsp->iRec26[0];
			dsp->iRec27[1] = dsp->iRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->iRec67[1] = dsp->iRec67[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->iRec74[1] = dsp->iRec74[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->iRec83[1] = dsp->iRec83[0];
			dsp->iRec84[1] = dsp->iRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->iRec87[1] = dsp->iRec87[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->iRec94[1] = dsp->iRec94[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->iRec103[1] = dsp->iRec103[0];
			dsp->iRec104[1] = dsp->iRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->iRec107[1] = dsp->iRec107[0];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec108[1] = dsp->fRec108[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
