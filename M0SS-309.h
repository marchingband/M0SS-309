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
	FAUSTFLOAT fHslider3;
	FAUSTFLOAT fHslider4;
	float fRec6[2];
	float fConst4;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	float fRec7[2];
	float fRec5[2];
	int iRec8[2];
	FAUSTFLOAT fHslider7;
	float fRec9[2];
	FAUSTFLOAT fHslider8;
	float fRec10[2];
	FAUSTFLOAT fHslider9;
	float fRec11[2];
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	float fRec13[2];
	float fRec12[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider12;
	float fRec14[2];
	FAUSTFLOAT fHslider13;
	float fRec15[2];
	FAUSTFLOAT fHslider14;
	FAUSTFLOAT fButton0;
	float fVec1[2];
	float fRec16[2];
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	int iRec17[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider18;
	float fRec18[2];
	FAUSTFLOAT fHslider19;
	float fRec19[2];
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	float fRec32[2];
	FAUSTFLOAT fHslider24;
	float fRec33[2];
	FAUSTFLOAT fHslider25;
	float fRec34[2];
	FAUSTFLOAT fHslider26;
	float fRec35[2];
	FAUSTFLOAT fHslider27;
	float fRec36[2];
	FAUSTFLOAT fHslider28;
	float fRec37[2];
	FAUSTFLOAT fHslider29;
	float fRec38[2];
	FAUSTFLOAT fHslider30;
	float fRec39[2];
	FAUSTFLOAT fHslider31;
	float fRec40[2];
	FAUSTFLOAT fHslider32;
	float fRec41[2];
	FAUSTFLOAT fHslider33;
	float fRec42[2];
	FAUSTFLOAT fHslider34;
	float fRec43[2];
	FAUSTFLOAT fHslider35;
	float fRec44[2];
	FAUSTFLOAT fHslider36;
	float fRec45[2];
	FAUSTFLOAT fHslider37;
	float fRec46[2];
	float fConst5;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	float fRec47[2];
	FAUSTFLOAT fHslider40;
	float fRec48[2];
	FAUSTFLOAT fHslider41;
	float fRec49[2];
	FAUSTFLOAT fHslider42;
	float fRec50[2];
	FAUSTFLOAT fHslider43;
	float fRec51[2];
	FAUSTFLOAT fHslider44;
	float fRec52[2];
	FAUSTFLOAT fHslider45;
	float fRec53[2];
	FAUSTFLOAT fHslider46;
	float fConst6;
	FAUSTFLOAT fHslider47;
	FAUSTFLOAT fHslider48;
	float fRec54[2];
	FAUSTFLOAT fHslider49;
	float fRec55[2];
	FAUSTFLOAT fHslider50;
	float fRec56[2];
	FAUSTFLOAT fHslider51;
	float fRec57[2];
	FAUSTFLOAT fHslider52;
	float fRec58[2];
	FAUSTFLOAT fHslider53;
	float fRec59[2];
	FAUSTFLOAT fHslider54;
	float fRec60[2];
	FAUSTFLOAT fHslider55;
	float fRec61[2];
	FAUSTFLOAT fHslider56;
	float fRec62[2];
	float fRec24[2];
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	int iRec28[2];
	int iRec29[2];
	float fConst7;
	float fConst8;
	float fRec30[2];
	float fRec31[2];
	float fRec21[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider57;
	float fRec63[2];
	FAUSTFLOAT fHslider58;
	float fRec64[2];
	FAUSTFLOAT fHslider59;
	float fRec65[2];
	FAUSTFLOAT fHslider60;
	float fRec66[2];
	FAUSTFLOAT fHslider61;
	float fRec67[2];
	FAUSTFLOAT fHslider62;
	float fRec68[2];
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	FAUSTFLOAT fHslider63;
	FAUSTFLOAT fHslider64;
	FAUSTFLOAT fHslider65;
	FAUSTFLOAT fHslider66;
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider67;
	float fRec73[2];
	FAUSTFLOAT fButton1;
	float fVec2[2];
	float fRec74[2];
	int iRec75[2];
	FAUSTFLOAT fVbargraph4;
	float fRec80[2];
	float fRec81[2];
	float fRec82[2];
	float fRec83[2];
	int iRec84[2];
	int iRec85[2];
	float fRec86[2];
	float fRec87[2];
	float fRec77[2];
	FAUSTFLOAT fVbargraph5;
	float fRec69[2];
	float fRec70[2];
	float fRec71[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fHslider68;
	float fRec92[2];
	FAUSTFLOAT fButton2;
	float fVec3[2];
	float fRec93[2];
	int iRec94[2];
	FAUSTFLOAT fVbargraph7;
	float fRec99[2];
	float fRec100[2];
	float fRec101[2];
	float fRec102[2];
	int iRec103[2];
	int iRec104[2];
	float fRec105[2];
	float fRec106[2];
	float fRec96[2];
	FAUSTFLOAT fVbargraph8;
	float fRec88[2];
	float fRec89[2];
	float fRec90[2];
	FAUSTFLOAT fVbargraph9;
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "envelopes.lib/adsr:author", "Yann Orlarey and Andrey Bundin");
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
	dsp->fHslider1 = (FAUSTFLOAT)(8192.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider5 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.001f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider18 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider37 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider38 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider44 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider45 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider46 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider47 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider48 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider49 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider50 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider51 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider52 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider53 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider54 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider55 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider56 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider57 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider58 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider59 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider60 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider61 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider62 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider63 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider64 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider65 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider66 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider67 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider68 = (FAUSTFLOAT)(4e+01f);
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
			dsp->fRec6[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec7[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec5[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->iRec8[l5] = 0;
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
			dsp->fRec10[l7] = 0.0f;
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
			dsp->fRec13[l9] = 0.0f;
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
			dsp->fRec14[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec15[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fVec1[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec16[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->iRec17[l15] = 0;
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
			dsp->fRec32[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec33[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec34[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec35[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec36[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec37[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec38[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec39[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec40[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec41[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec42[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec43[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec44[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec45[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec46[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec47[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec48[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec49[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec50[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec51[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec52[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec53[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec54[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec55[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec56[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec57[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec58[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec59[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec60[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec61[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec62[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec24[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec25[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec26[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec27[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->iRec28[l53] = 0;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->iRec29[l54] = 0;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec30[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec31[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec21[l57] = 0.0f;
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
			dsp->fRec67[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec68[l63] = 0.0f;
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
			dsp->fRec73[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fVec2[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec74[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->iRec75[l70] = 0;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec80[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec81[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec82[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec83[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->iRec84[l75] = 0;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->iRec85[l76] = 0;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec86[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec87[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec77[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec69[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec70[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec71[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec92[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fVec3[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec93[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->iRec94[l86] = 0;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec99[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec100[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec101[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec102[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->iRec103[l91] = 0;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->iRec104[l92] = 0;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec105[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec106[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec96[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec88[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec89[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec90[l98] = 0.0f;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider63, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider63, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider63, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider63, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider65, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider65, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider65, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider65, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider64, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider64, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider64, "mod", "0");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider64, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider66, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider66, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider66, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider66, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "10", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "49");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "59");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.os1", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider56, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider58, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "mod", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider14, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider16, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "mod", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider15, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "mod", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider17, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider0, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider62, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "mod", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider11, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "sel", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider10, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider39, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider55, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider57, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "46");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.vcf", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "env_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph1, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph0", &dsp->fVbargraph1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph4, "env_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph4, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph1", &dsp->fVbargraph4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph7, "env_2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph7, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph2", &dsp->fVbargraph7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "env_amp_0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph3, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph3", &dsp->fVbargraph3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph6, "env_amp_1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph6, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph4", &dsp->fVbargraph6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph9, "env_amp_2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph9, "hidden", "1");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph5", &dsp->fVbargraph9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph2, "osc_2_0", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph6", &dsp->fVbargraph2, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph5, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph5, "osc_2_1", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph7", &dsp->fVbargraph5, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph8, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph8, "osc_2_2", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "vbargraph8", &dsp->fVbargraph8, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider5, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider67, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider68, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "alt", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "64");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "glide", &dsp->fHslider4, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.999f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider61, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider59, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider60, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "alt", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider52, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "sel", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider46, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "sel", "28");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider47, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "alt", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "18");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "sel", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "hi-lo", &dsp->fHslider20, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "alt-sel", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider21, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "alt", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider43, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-24.0f, (FAUSTFLOAT)24.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "sel", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider38, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "66");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pbend-dn", &dsp->fHslider2, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)12.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "65");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pbend-up", &dsp->fHslider3, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)12.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "pitch-bend", "");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pitch-bend", &dsp->fHslider1, (FAUSTFLOAT)8192.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)16383.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "62");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "poly.mod", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "alt", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "63");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "transpose", &dsp->fHslider6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-11.0f, (FAUSTFLOAT)11.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst2 * (float)(dsp->fHslider0);
	float fSlow1 = fminf(fmaxf(-1.0f, 0.00012208521f * ((float)(dsp->fHslider1) + -8192.0f)), 1.0f);
	float fSlow2 = powf(2.0f, 0.083333336f * ((fSlow1 > 0.0f) ? fSlow1 * (float)(dsp->fHslider3) : fSlow1 * (float)(dsp->fHslider2)));
	float fSlow3 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow4 = (float)(dsp->fHslider5);
	float fSlow5 = dsp->fConst2 * (float)(dsp->fHslider6);
	float fSlow6 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow7 = dsp->fConst2 * (float)(dsp->fHslider8);
	float fSlow8 = dsp->fConst2 * (float)(dsp->fHslider9);
	float fSlow9 = (float)(dsp->fHslider10);
	int iSlow10 = fSlow9 >= 2.0f;
	int iSlow11 = fSlow9 >= 1.0f;
	float fSlow12 = dsp->fConst2 * (float)(dsp->fHslider11);
	float fSlow13 = dsp->fConst2 * (float)(dsp->fHslider12);
	float fSlow14 = dsp->fConst2 * (float)(dsp->fHslider13);
	float fSlow15 = fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider14)) + 0.001f));
	float fSlow16 = 1.0f / fSlow15;
	float fSlow17 = (float)(dsp->fButton0);
	float fSlow18 = (float)(dsp->fHslider15);
	float fSlow19 = (1.0f - fSlow18) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider16)) + 0.001f));
	float fSlow20 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider17)) + 0.001f));
	int iSlow21 = fSlow17 == 0.0f;
	float fSlow22 = dsp->fConst2 * (float)(dsp->fHslider18);
	float fSlow23 = dsp->fConst2 * (float)(dsp->fHslider19);
	int iSlow24 = (float)(dsp->fHslider20) >= 1.0f;
	int iSlow25 = (float)(dsp->fHslider21) >= 1.0f;
	float fSlow26 = 1e+02f * (float)(dsp->fHslider22);
	float fSlow27 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow28 = dsp->fConst2 * (float)(dsp->fHslider24);
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow30 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow31 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow32 = dsp->fConst2 * (float)(dsp->fHslider28);
	float fSlow33 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow34 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow35 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow36 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow42 = (float)(dsp->fHslider38);
	int iSlow43 = fSlow42 >= 2.0f;
	int iSlow44 = fSlow42 >= 1.0f;
	float fSlow45 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider41);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider42);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider43);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider44);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow52 = (float)(dsp->fHslider46);
	float fSlow53 = (float)(((iSlow43) ? 0 : ((iSlow44) ? 1 : 0)));
	float fSlow54 = fmaxf(fSlow53 + -0.5f, 0.0f);
	float fSlow55 = fmaxf(1.0f - 2.0f * fSlow53, 0.0f);
	float fSlow56 = 1.0f - fSlow55;
	int iSlow57 = (float)(dsp->fHslider47) >= 1.0f;
	float fSlow58 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow59 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider53);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider54);
	float fSlow65 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow66 = dsp->fConst2 * (float)(dsp->fHslider56);
	float fSlow67 = (float)(((iSlow57) ? 1 : 0));
	float fSlow68 = fmaxf(fSlow67 + -0.5f, 0.0f);
	float fSlow69 = fmaxf(1.0f - 2.0f * fSlow67, 0.0f);
	float fSlow70 = 1.0f - fSlow69;
	float fSlow71 = dsp->fConst2 * (float)(dsp->fHslider57);
	float fSlow72 = dsp->fConst2 * (float)(dsp->fHslider58);
	float fSlow73 = dsp->fConst2 * (float)(dsp->fHslider59);
	float fSlow74 = dsp->fConst2 * (float)(dsp->fHslider60);
	float fSlow75 = dsp->fConst2 * (float)(dsp->fHslider61);
	float fSlow76 = dsp->fConst2 * (float)(dsp->fHslider62);
	float fSlow77 = fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider63)) + 0.001f));
	float fSlow78 = 1.0f / fSlow77;
	float fSlow79 = (float)(dsp->fHslider64);
	float fSlow80 = (1.0f - fSlow79) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider65)) + 0.001f));
	float fSlow81 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider66)) + 0.001f));
	float fSlow82 = (float)(dsp->fHslider67);
	float fSlow83 = (float)(dsp->fButton1);
	int iSlow84 = fSlow83 == 0.0f;
	float fSlow85 = (float)(dsp->fHslider68);
	float fSlow86 = (float)(dsp->fButton2);
	int iSlow87 = fSlow86 == 0.0f;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow0 + dsp->fConst3 * dsp->fRec4[1];
			dsp->fRec6[0] = fSlow3 + dsp->fConst3 * dsp->fRec6[1];
			int iTemp0 = fabsf(dsp->fRec6[0]) < 1.1920929e-07f;
			float fTemp1 = ((iTemp0) ? 0.0f : expf(-(dsp->fConst4 / ((iTemp0) ? 1.0f : dsp->fRec6[0]))));
			float fTemp2 = fSlow2 * (1.0f - fTemp1);
			dsp->fRec7[0] = fSlow5 + dsp->fConst3 * dsp->fRec7[1];
			float fTemp3 = dsp->fRec7[0] + -69.0f;
			dsp->fRec5[0] = 4.4e+02f * fTemp2 * powf(2.0f, 0.083333336f * (fSlow4 + fTemp3)) + fTemp1 * dsp->fRec5[1];
			dsp->iRec8[0] = 1103515245 * dsp->iRec8[1] + 12345;
			float fTemp4 = (float)(dsp->iRec8[0]);
			dsp->fRec9[0] = fSlow6 + dsp->fConst3 * dsp->fRec9[1];
			dsp->fRec10[0] = fSlow7 + dsp->fConst3 * dsp->fRec10[1];
			dsp->fRec11[0] = fSlow8 + dsp->fConst3 * dsp->fRec11[1];
			float fTemp5 = 1.1175871e-06f * fTemp4 * (mydsp_faustpower2_f(dsp->fRec9[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec11[0]));
			dsp->fRec13[0] = fSlow12 + dsp->fConst3 * dsp->fRec13[1];
			float fTemp6 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec12[1] + dsp->fConst4 * dsp->fRec13[0]);
			dsp->fRec12[0] = fTemp6 - floorf(fTemp6);
			float fTemp7 = 2.0f * dsp->fRec12[0] + -1.0f;
			float fTemp8 = ((iSlow10) ? 2.0f * (1.0f - fabsf(fTemp7)) + -1.0f : ((iSlow11) ? 2.0f * (float)(dsp->fRec12[0] <= 0.5f) + -1.0f : fTemp7));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp8);
			float fTemp9 = fTemp8;
			dsp->fRec14[0] = fSlow13 + dsp->fConst3 * dsp->fRec14[1];
			dsp->fRec15[0] = fSlow14 + dsp->fConst3 * dsp->fRec15[1];
			float fTemp10 = fTemp9 * (mydsp_faustpower2_f(dsp->fRec14[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec15[0]));
			dsp->fVec1[0] = fSlow17;
			dsp->fRec16[0] = fSlow17 + dsp->fRec16[1] * (float)(dsp->fVec1[1] >= fSlow17);
			dsp->iRec17[0] = iSlow21 * (dsp->iRec17[1] + 1);
			float fTemp11 = (float)(dsp->iRec17[0]);
			float fTemp12 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec16[0], fmaxf(fSlow19 * (fSlow15 - dsp->fRec16[0]) + 1.0f, fSlow18)) * (1.0f - fSlow20 * fTemp11));
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp12);
			float fTemp13 = fTemp12;
			dsp->fRec18[0] = fSlow22 + dsp->fConst3 * dsp->fRec18[1];
			dsp->fRec19[0] = fSlow23 + dsp->fConst3 * dsp->fRec19[1];
			float fTemp14 = mydsp_faustpower2_f(dsp->fRec18[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec19[0]);
			dsp->fRec32[0] = fSlow27 + dsp->fConst3 * dsp->fRec32[1];
			float fTemp15 = powf(2.0f, 0.00083333335f * (fSlow26 + dsp->fRec32[0]));
			float fTemp16 = fTemp15 * (4.4e+02f * powf(2.0f, 0.083333336f * fTemp3) + 261.0f);
			dsp->fRec33[0] = fSlow28 + dsp->fConst3 * dsp->fRec33[1];
			dsp->fRec34[0] = fSlow29 + dsp->fConst3 * dsp->fRec34[1];
			float fTemp17 = 2.4e+03f * fTemp9 * (mydsp_faustpower2_f(dsp->fRec33[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec34[0]));
			dsp->fRec35[0] = fSlow30 + dsp->fConst3 * dsp->fRec35[1];
			dsp->fRec36[0] = fSlow31 + dsp->fConst3 * dsp->fRec36[1];
			float fTemp18 = mydsp_faustpower2_f(dsp->fRec35[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec36[0]);
			dsp->fRec37[0] = fSlow32 + dsp->fConst3 * dsp->fRec37[1];
			dsp->fRec38[0] = fSlow33 + dsp->fConst3 * dsp->fRec38[1];
			float fTemp19 = 5.5879354e-07f * fTemp4 * (mydsp_faustpower2_f(dsp->fRec37[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec38[0]));
			float fTemp20 = ((iSlow25) ? dsp->fRec5[0] * fTemp15 : fTemp16) * powf(2.0f, 0.00083333335f * (fTemp17 + 1.2e+03f * fTemp13 * fTemp18 + fTemp19));
			float fTemp21 = ((iSlow24) ? fTemp20 : 0.015625f * fTemp20);
			dsp->fRec39[0] = fSlow34 + dsp->fConst3 * dsp->fRec39[1];
			dsp->fRec40[0] = fSlow35 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp22 = 2.4e+03f * fTemp9 * (mydsp_faustpower2_f(dsp->fRec39[0]) + mydsp_faustpower2_f(dsp->fRec40[0]) * dsp->fRec10[0]);
			dsp->fRec41[0] = fSlow36 + dsp->fConst3 * dsp->fRec41[1];
			dsp->fRec42[0] = fSlow37 + dsp->fConst3 * dsp->fRec42[1];
			float fTemp23 = mydsp_faustpower2_f(dsp->fRec41[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec42[0]);
			dsp->fRec43[0] = fSlow38 + dsp->fConst3 * dsp->fRec43[1];
			dsp->fRec44[0] = fSlow39 + dsp->fConst3 * dsp->fRec44[1];
			float fTemp24 = 5.5879354e-07f * fTemp4 * (mydsp_faustpower2_f(dsp->fRec43[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec44[0]));
			dsp->fRec45[0] = fSlow40 + dsp->fConst3 * dsp->fRec45[1];
			dsp->fRec46[0] = fSlow41 + dsp->fConst3 * dsp->fRec46[1];
			float fTemp25 = mydsp_faustpower2_f(dsp->fRec45[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec46[0]);
			float fTemp26 = fmaxf(0.0f, dsp->fRec5[0] * powf(2.0f, 0.00083333335f * (fTemp22 + 1.2e+03f * fTemp13 * fTemp23 + fTemp24)) + fTemp21 * dsp->fRec21[1] * fTemp25);
			float fTemp27 = dsp->fConst4 * fTemp26;
			float fTemp28 = dsp->fRec27[1] + fTemp27;
			float fTemp29 = fmodf(fTemp28, 1.0f);
			float fTemp30 = fTemp29 / fTemp26;
			float fTemp31 = dsp->fConst0 * fTemp30;
			float fTemp32 = 1.0f - fTemp31;
			float fTemp33 = dsp->fRec26[1] + dsp->fConst4 * fTemp21 * fTemp32;
			int iTemp34 = dsp->iRec28[1] == 0;
			float fTemp35 = dsp->fConst4 * fTemp21;
			float fTemp36 = dsp->fConst5 * fTemp21;
			dsp->fRec47[0] = fSlow45 + dsp->fConst3 * dsp->fRec47[1];
			dsp->fRec48[0] = fSlow46 + dsp->fConst3 * dsp->fRec48[1];
			float fTemp37 = 4.656613e-10f * fTemp4 * (mydsp_faustpower2_f(dsp->fRec47[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec48[0]));
			dsp->fRec49[0] = fSlow47 + dsp->fConst3 * dsp->fRec49[1];
			dsp->fRec50[0] = fSlow48 + dsp->fConst3 * dsp->fRec50[1];
			float fTemp38 = mydsp_faustpower2_f(dsp->fRec49[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec50[0]);
			dsp->fRec51[0] = fSlow49 + dsp->fConst3 * dsp->fRec51[1];
			dsp->fRec52[0] = fSlow50 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow51 + dsp->fConst3 * dsp->fRec53[1];
			float fTemp39 = fTemp9 * (mydsp_faustpower2_f(dsp->fRec52[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec53[0]));
			float fTemp40 = dsp->fRec51[0] + fTemp39;
			float fTemp41 = ((fTemp35 >= 0.25f) ? 0.5f : fmaxf(fTemp36, fminf(1.0f - fTemp36, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp37 + fTemp13 * fTemp38 + fTemp40 : 1.0f)))));
			int iTemp42 = fTemp28 >= 1.0f;
			int iTemp43 = (fSlow52 + (float)(iTemp42)) == 2.0f;
			int iTemp44 = ((((fTemp33 >= 1.0f) + ((iTemp34 + (fTemp33 >= fTemp41)) == 2)) > 0) + (iTemp43 == 0)) > 0;
			float fTemp45 = dsp->fRec26[1] + fTemp35;
			float fTemp46 = fmodf(fTemp45, 1.0f);
			int iTemp47 = fTemp46 >= fTemp41;
			float fTemp48 = fTemp46 - fTemp41;
			float fTemp49 = fTemp35 + dsp->fRec24[1] - fTemp41;
			float fTemp50 = 1.0f - fTemp41;
			float fTemp51 = fTemp21 * fSlow55 * (1.0f / fTemp50 + 1.0f / fTemp41);
			float fTemp52 = fTemp48 / fTemp49;
			float fTemp53 = 1.0f - fTemp52;
			int iTemp54 = fTemp45 >= 1.0f;
			float fTemp55 = fTemp46 / fTemp21;
			float fTemp56 = dsp->fConst0 * fTemp55;
			float fTemp57 = 1.0f - fTemp56;
			float fTemp58 = mydsp_faustpower2_f(fTemp29);
			float fTemp59 = fmodf(fTemp33, 1.0f);
			int iTemp60 = fTemp59 < fTemp41;
			float fTemp61 = fTemp59 + 2.0f * (((iTemp60) ? 0.0f : 1.0f) - fTemp59) * fSlow54 + (((iTemp60) ? fTemp59 / fTemp41 : 1.0f - (fTemp59 - fTemp41) / fTemp50) - fTemp59) * fSlow55;
			float fTemp62 = mydsp_faustpower2_f(fTemp26);
			float fRec22 = dsp->fRec30[1] + ((iTemp44) ? ((dsp->iRec28[1]) ? ((iTemp54) ? dsp->fConst4 * fTemp51 * (fTemp57 * (0.375f * fTemp57 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp57)) + 0.1875f) - dsp->fConst6 * (mydsp_faustpower2_f(fTemp46) * fSlow56 / mydsp_faustpower2_f(fTemp21)) : 0.0f) : ((iTemp47) ? fSlow54 * mydsp_faustpower2_f(fTemp48) / mydsp_faustpower2_f(fTemp49) - dsp->fConst4 * fTemp51 * (fTemp53 * (0.375f * fTemp53 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp53)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp43) ? dsp->fConst6 * (fTemp58 * fTemp61 / fTemp62) : 0.0f);
			float fTemp63 = dsp->fConst5 * fTemp26;
			dsp->fRec54[0] = fSlow58 + dsp->fConst3 * dsp->fRec54[1];
			dsp->fRec55[0] = fSlow59 + dsp->fConst3 * dsp->fRec55[1];
			float fTemp64 = 4.656613e-10f * fTemp4 * (mydsp_faustpower2_f(dsp->fRec54[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec55[0]));
			dsp->fRec56[0] = fSlow60 + dsp->fConst3 * dsp->fRec56[1];
			dsp->fRec57[0] = fSlow61 + dsp->fConst3 * dsp->fRec57[1];
			float fTemp65 = mydsp_faustpower2_f(dsp->fRec56[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec57[0]);
			dsp->fRec58[0] = fSlow62 + dsp->fConst3 * dsp->fRec58[1];
			dsp->fRec59[0] = fSlow63 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow64 + dsp->fConst3 * dsp->fRec60[1];
			float fTemp66 = fTemp9 * (mydsp_faustpower2_f(dsp->fRec59[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec60[0]));
			float fTemp67 = dsp->fRec58[0] + fTemp66;
			dsp->fRec61[0] = fSlow65 + dsp->fConst3 * dsp->fRec61[1];
			dsp->fRec62[0] = fSlow66 + dsp->fConst3 * dsp->fRec62[1];
			float fTemp68 = mydsp_faustpower2_f(dsp->fRec61[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec62[0]);
			float fTemp69 = ((fTemp27 >= 0.25f) ? 0.5f : fmaxf(fTemp63, fminf(1.0f - fTemp63, ((iSlow57) ? fTemp64 + fTemp13 * fTemp65 + fTemp67 : 1.0f) + dsp->fRec21[1] * fTemp68)));
			int iTemp70 = fTemp29 >= fTemp69;
			float fTemp71 = fTemp29 - fTemp69;
			float fTemp72 = fTemp27 + dsp->fRec25[1] - fTemp69;
			float fTemp73 = 1.0f - fTemp69;
			float fTemp74 = fTemp26 * (1.0f / fTemp69 + 1.0f / fTemp73) * fSlow69;
			float fTemp75 = fTemp71 / fTemp72;
			float fTemp76 = 1.0f - fTemp75;
			float fRec23 = dsp->fRec31[1] + ((dsp->iRec29[1]) ? ((iTemp42) ? dsp->fConst4 * fTemp74 * (fTemp32 * (0.375f * fTemp32 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp32)) + 0.1875f) - dsp->fConst6 * (fTemp58 * fSlow70 / fTemp62) : 0.0f) : ((iTemp70) ? fSlow68 * mydsp_faustpower2_f(fTemp71) / mydsp_faustpower2_f(fTemp72) - dsp->fConst4 * fTemp74 * (fTemp76 * (0.375f * fTemp76 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp76)) + 0.1875f) : 0.0f));
			dsp->fRec24[0] = fTemp41;
			dsp->fRec25[0] = fTemp69;
			float fTemp77 = ((iTemp43) ? fTemp21 * fTemp29 / fTemp26 : fTemp46);
			dsp->fRec26[0] = fTemp77;
			dsp->fRec27[0] = fTemp29;
			dsp->iRec28[0] = (((iTemp43 + ((dsp->iRec28[1] + iTemp54) == 2) + ((iTemp34 + (fTemp46 < fTemp41)) == 2)) > 0) ? 0 : 1);
			int iTemp78 = fTemp29 < fTemp69;
			dsp->iRec29[0] = (((((iTemp42 + dsp->iRec29[1]) == 2) + (((dsp->iRec29[1] == 0) + iTemp78) == 2)) > 0) ? 0 : 1);
			int iTemp79 = fTemp77 < fTemp41;
			float fTemp80 = fTemp31 - 1.0f;
			dsp->fRec30[0] = fTemp77 + 2.0f * fSlow54 * (((iTemp79) ? 0.0f : 1.0f) - fTemp77) + fSlow55 * (((iTemp79) ? fTemp77 / fTemp41 : 1.0f - (fTemp77 - fTemp41) / fTemp50) - fTemp77) + ((iTemp44) ? ((dsp->iRec28[1]) ? ((iTemp54) ? dsp->fConst4 * fTemp51 * (dsp->fConst0 * (fTemp46 * (dsp->fConst7 * fTemp55 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp46) / mydsp_faustpower3_f(fTemp21))) / fTemp21) + 0.1875f) - 0.5f * fTemp57 * fSlow56 * (fTemp56 - 1.0f) : 0.0f) : ((iTemp47) ? fSlow54 * fTemp53 * (fTemp52 - 1.0f) - dsp->fConst4 * fTemp51 * (fTemp48 * (0.375f * fTemp52 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp48) / mydsp_faustpower3_f(fTemp49))) / fTemp49 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp43) ? 0.5f * fTemp32 * fTemp61 * fTemp80 : 0.0f);
			dsp->fRec31[0] = fTemp29 + 2.0f * fSlow68 * (((iTemp78) ? 0.0f : 1.0f) - fTemp29) + fSlow69 * (((iTemp78) ? fTemp29 / fTemp69 : 1.0f - fTemp71 / fTemp73) - fTemp29) + ((dsp->iRec29[1]) ? ((iTemp42) ? dsp->fConst4 * fTemp74 * (dsp->fConst0 * (fTemp29 * (dsp->fConst7 * fTemp30 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp29) / mydsp_faustpower3_f(fTemp26))) / fTemp26) + 0.1875f) - 0.5f * fTemp32 * fSlow70 * fTemp80 : 0.0f) : ((iTemp70) ? fSlow68 * fTemp76 * (fTemp75 - 1.0f) - dsp->fConst4 * fTemp74 * (fTemp71 * (0.375f * fTemp75 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp71) / mydsp_faustpower3_f(fTemp72))) / fTemp72 + 0.1875f) : 0.0f));
			float fRec20 = 2.0f * fRec23 + -1.0f;
			dsp->fRec21[0] = 2.0f * fRec22 + -1.0f;
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec21[0]);
			float fTemp81 = dsp->fRec21[0];
			dsp->fRec63[0] = fSlow71 + dsp->fConst3 * dsp->fRec63[1];
			dsp->fRec64[0] = fSlow72 + dsp->fConst3 * dsp->fRec64[1];
			float fTemp82 = mydsp_faustpower2_f(dsp->fRec63[0]) + dsp->fRec10[0] * mydsp_faustpower2_f(dsp->fRec64[0]);
			float fTemp83 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec5[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp13 * fTemp14 + fTemp81 * fTemp82)))), 1.0f) + 1.0f));
			dsp->fRec65[0] = fSlow73 + dsp->fConst3 * dsp->fRec65[1];
			dsp->fRec66[0] = fSlow74 + dsp->fConst3 * dsp->fRec66[1];
			dsp->fRec67[0] = fSlow75 + dsp->fConst3 * dsp->fRec67[1];
			float fTemp84 = 4.656613e-10f * dsp->fRec67[0] * fTemp4;
			float fTemp85 = (0.5f * (fRec20 * dsp->fRec65[0] + fTemp81 * dsp->fRec66[0] + fTemp84) - dsp->fRec2[1]) * fTemp83;
			dsp->fRec68[0] = fSlow76 + dsp->fConst3 * dsp->fRec68[1];
			float fTemp86 = dsp->fRec68[0] + -0.707f;
			float fTemp87 = fTemp83 + 1.0f;
			float fTemp88 = 1.0f - fTemp83 / fTemp87;
			float fTemp89 = fTemp83 * ((dsp->fRec2[1] + (fTemp85 + 0.21521576f * dsp->fRec0[1] * fTemp86 * fTemp88 - dsp->fRec1[1]) / fTemp87) / (1.0f - 0.21521576f * (fTemp83 * fTemp86 * fTemp88 / fTemp87)) - dsp->fRec0[1]) / fTemp87;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp89;
			float fTemp90 = dsp->fRec0[1] + fTemp89;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp83 * (0.21521576f * fTemp86 * fTemp90 - dsp->fRec1[1]) / fTemp87);
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp85 / fTemp87);
			float fRec3 = fTemp90;
			float fTemp91 = fmaxf(0.0f, fminf(fSlow78 * dsp->fRec16[0], fmaxf(fSlow80 * (fSlow77 - dsp->fRec16[0]) + 1.0f, fSlow79)) * (1.0f - fSlow81 * fTemp11));
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp91);
			dsp->fRec73[0] = 4.4e+02f * fTemp2 * powf(2.0f, 0.083333336f * (fSlow82 + fTemp3)) + fTemp1 * dsp->fRec73[1];
			dsp->fVec2[0] = fSlow83;
			dsp->fRec74[0] = fSlow83 + dsp->fRec74[1] * (float)(dsp->fVec2[1] >= fSlow83);
			dsp->iRec75[0] = iSlow84 * (dsp->iRec75[1] + 1);
			float fTemp92 = (float)(dsp->iRec75[0]);
			float fTemp93 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec74[0], fmaxf(fSlow19 * (fSlow15 - dsp->fRec74[0]) + 1.0f, fSlow18)) * (1.0f - fSlow20 * fTemp92));
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp93);
			float fTemp94 = fTemp93;
			float fTemp95 = ((iSlow25) ? dsp->fRec73[0] * fTemp15 : fTemp16) * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp18 * fTemp94 + fTemp17 + fTemp19));
			float fTemp96 = ((iSlow24) ? fTemp95 : 0.015625f * fTemp95);
			float fTemp97 = fmaxf(0.0f, dsp->fRec73[0] * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp23 * fTemp94 + fTemp22 + fTemp24)) + fTemp25 * fTemp96 * dsp->fRec77[1]);
			float fTemp98 = dsp->fConst4 * fTemp97;
			float fTemp99 = dsp->fRec83[1] + fTemp98;
			float fTemp100 = fmodf(fTemp99, 1.0f);
			float fTemp101 = fTemp100 / fTemp97;
			float fTemp102 = dsp->fConst0 * fTemp101;
			float fTemp103 = 1.0f - fTemp102;
			float fTemp104 = dsp->fRec82[1] + dsp->fConst4 * fTemp96 * fTemp103;
			int iTemp105 = dsp->iRec84[1] == 0;
			float fTemp106 = dsp->fConst4 * fTemp96;
			float fTemp107 = dsp->fConst5 * fTemp96;
			float fTemp108 = ((fTemp106 >= 0.25f) ? 0.5f : fmaxf(fTemp107, fminf(1.0f - fTemp107, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp38 * fTemp94 + fTemp37 + fTemp40 : 1.0f)))));
			int iTemp109 = fTemp99 >= 1.0f;
			int iTemp110 = (fSlow52 + (float)(iTemp109)) == 2.0f;
			int iTemp111 = ((((fTemp104 >= 1.0f) + ((iTemp105 + (fTemp104 >= fTemp108)) == 2)) > 0) + (iTemp110 == 0)) > 0;
			float fTemp112 = dsp->fRec82[1] + fTemp106;
			float fTemp113 = fmodf(fTemp112, 1.0f);
			int iTemp114 = fTemp113 >= fTemp108;
			float fTemp115 = fTemp113 - fTemp108;
			float fTemp116 = fTemp106 + dsp->fRec80[1] - fTemp108;
			float fTemp117 = 1.0f - fTemp108;
			float fTemp118 = fSlow55 * fTemp96 * (1.0f / fTemp117 + 1.0f / fTemp108);
			float fTemp119 = fTemp115 / fTemp116;
			float fTemp120 = 1.0f - fTemp119;
			int iTemp121 = fTemp112 >= 1.0f;
			float fTemp122 = fTemp113 / fTemp96;
			float fTemp123 = dsp->fConst0 * fTemp122;
			float fTemp124 = 1.0f - fTemp123;
			float fTemp125 = mydsp_faustpower2_f(fTemp100);
			float fTemp126 = fmodf(fTemp104, 1.0f);
			int iTemp127 = fTemp126 < fTemp108;
			float fTemp128 = fTemp126 + 2.0f * fSlow54 * (((iTemp127) ? 0.0f : 1.0f) - fTemp126) + fSlow55 * (((iTemp127) ? fTemp126 / fTemp108 : 1.0f - (fTemp126 - fTemp108) / fTemp117) - fTemp126);
			float fTemp129 = mydsp_faustpower2_f(fTemp97);
			float fRec78 = dsp->fRec86[1] + ((iTemp111) ? ((dsp->iRec84[1]) ? ((iTemp121) ? dsp->fConst4 * fTemp118 * (fTemp124 * (0.375f * fTemp124 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp124)) + 0.1875f) - dsp->fConst6 * (fSlow56 * mydsp_faustpower2_f(fTemp113) / mydsp_faustpower2_f(fTemp96)) : 0.0f) : ((iTemp114) ? fSlow54 * mydsp_faustpower2_f(fTemp115) / mydsp_faustpower2_f(fTemp116) - dsp->fConst4 * fTemp118 * (fTemp120 * (0.375f * fTemp120 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp120)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp110) ? dsp->fConst6 * (fTemp125 * fTemp128 / fTemp129) : 0.0f);
			float fTemp130 = dsp->fConst5 * fTemp97;
			float fTemp131 = ((fTemp98 >= 0.25f) ? 0.5f : fmaxf(fTemp130, fminf(1.0f - fTemp130, ((iSlow57) ? fTemp65 * fTemp94 + fTemp64 + fTemp67 : 1.0f) + fTemp68 * dsp->fRec77[1])));
			int iTemp132 = fTemp100 >= fTemp131;
			float fTemp133 = fTemp100 - fTemp131;
			float fTemp134 = fTemp98 + dsp->fRec81[1] - fTemp131;
			float fTemp135 = 1.0f - fTemp131;
			float fTemp136 = fSlow69 * fTemp97 * (1.0f / fTemp131 + 1.0f / fTemp135);
			float fTemp137 = fTemp133 / fTemp134;
			float fTemp138 = 1.0f - fTemp137;
			float fRec79 = dsp->fRec87[1] + ((dsp->iRec85[1]) ? ((iTemp109) ? dsp->fConst4 * fTemp136 * (fTemp103 * (0.375f * fTemp103 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp103)) + 0.1875f) - dsp->fConst6 * (fSlow70 * fTemp125 / fTemp129) : 0.0f) : ((iTemp132) ? fSlow68 * mydsp_faustpower2_f(fTemp133) / mydsp_faustpower2_f(fTemp134) - dsp->fConst4 * fTemp136 * (fTemp138 * (0.375f * fTemp138 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp138)) + 0.1875f) : 0.0f));
			dsp->fRec80[0] = fTemp108;
			dsp->fRec81[0] = fTemp131;
			float fTemp139 = ((iTemp110) ? fTemp96 * fTemp100 / fTemp97 : fTemp113);
			dsp->fRec82[0] = fTemp139;
			dsp->fRec83[0] = fTemp100;
			dsp->iRec84[0] = (((iTemp110 + ((dsp->iRec84[1] + iTemp121) == 2) + ((iTemp105 + (fTemp113 < fTemp108)) == 2)) > 0) ? 0 : 1);
			int iTemp140 = fTemp100 < fTemp131;
			dsp->iRec85[0] = (((((iTemp109 + dsp->iRec85[1]) == 2) + (((dsp->iRec85[1] == 0) + iTemp140) == 2)) > 0) ? 0 : 1);
			int iTemp141 = fTemp139 < fTemp108;
			float fTemp142 = fTemp102 - 1.0f;
			dsp->fRec86[0] = fTemp139 + 2.0f * fSlow54 * (((iTemp141) ? 0.0f : 1.0f) - fTemp139) + fSlow55 * (((iTemp141) ? fTemp139 / fTemp108 : 1.0f - (fTemp139 - fTemp108) / fTemp117) - fTemp139) + ((iTemp111) ? ((dsp->iRec84[1]) ? ((iTemp121) ? dsp->fConst4 * fTemp118 * (dsp->fConst0 * (fTemp113 * (dsp->fConst7 * fTemp122 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp113) / mydsp_faustpower3_f(fTemp96))) / fTemp96) + 0.1875f) - 0.5f * fSlow56 * fTemp124 * (fTemp123 - 1.0f) : 0.0f) : ((iTemp114) ? fSlow54 * fTemp120 * (fTemp119 - 1.0f) - dsp->fConst4 * fTemp118 * (fTemp115 * (0.375f * fTemp119 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp115) / mydsp_faustpower3_f(fTemp116))) / fTemp116 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp110) ? 0.5f * fTemp103 * fTemp128 * fTemp142 : 0.0f);
			dsp->fRec87[0] = fSlow69 * (((iTemp140) ? fTemp100 / fTemp131 : 1.0f - fTemp133 / fTemp135) - fTemp100) + 2.0f * fSlow68 * (((iTemp140) ? 0.0f : 1.0f) - fTemp100) + fTemp100 + ((dsp->iRec85[1]) ? ((iTemp109) ? dsp->fConst4 * fTemp136 * (dsp->fConst0 * (fTemp100 * (dsp->fConst7 * fTemp101 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp100) / mydsp_faustpower3_f(fTemp97))) / fTemp97) + 0.1875f) - 0.5f * fSlow70 * fTemp103 * fTemp142 : 0.0f) : ((iTemp132) ? fSlow68 * fTemp138 * (fTemp137 - 1.0f) - dsp->fConst4 * fTemp136 * (fTemp133 * (0.375f * fTemp137 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp133) / mydsp_faustpower3_f(fTemp134))) / fTemp134 + 0.1875f) : 0.0f));
			float fRec76 = 2.0f * fRec79 + -1.0f;
			dsp->fRec77[0] = 2.0f * fRec78 + -1.0f;
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec77[0]);
			float fTemp143 = dsp->fRec77[0];
			float fTemp144 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec73[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp14 * fTemp94 + fTemp143 * fTemp82)))), 1.0f) + 1.0f));
			float fTemp145 = (0.5f * (fTemp84 + dsp->fRec65[0] * fRec76 + dsp->fRec66[0] * fTemp143) - dsp->fRec71[1]) * fTemp144;
			float fTemp146 = fTemp144 + 1.0f;
			float fTemp147 = fTemp144 / fTemp146;
			float fTemp148 = fTemp144 * ((dsp->fRec71[1] + (fTemp145 + 0.21521576f * fTemp86 * dsp->fRec69[1] * (1.0f - fTemp147) - dsp->fRec70[1]) / fTemp146) / (0.21521576f * (fTemp86 * fTemp144 * (fTemp147 + -1.0f) / fTemp146) + 1.0f) - dsp->fRec69[1]) / fTemp146;
			dsp->fRec69[0] = dsp->fRec69[1] + 2.0f * fTemp148;
			float fTemp149 = dsp->fRec69[1] + fTemp148;
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * (fTemp144 * (0.21521576f * fTemp86 * fTemp149 - dsp->fRec70[1]) / fTemp146);
			dsp->fRec71[0] = dsp->fRec71[1] + 2.0f * (fTemp145 / fTemp146);
			float fRec72 = fTemp149;
			float fTemp150 = fmaxf(0.0f, fminf(fSlow78 * dsp->fRec74[0], fmaxf(1.0f - fSlow80 * (dsp->fRec74[0] - fSlow77), fSlow79)) * (1.0f - fSlow81 * fTemp92));
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp150);
			dsp->fRec92[0] = 4.4e+02f * fTemp2 * powf(2.0f, 0.083333336f * (fSlow85 + fTemp3)) + fTemp1 * dsp->fRec92[1];
			dsp->fVec3[0] = fSlow86;
			dsp->fRec93[0] = fSlow86 + dsp->fRec93[1] * (float)(dsp->fVec3[1] >= fSlow86);
			dsp->iRec94[0] = iSlow87 * (dsp->iRec94[1] + 1);
			float fTemp151 = (float)(dsp->iRec94[0]);
			float fTemp152 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec93[0], fmaxf(1.0f - fSlow19 * (dsp->fRec93[0] - fSlow15), fSlow18)) * (1.0f - fSlow20 * fTemp151));
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp152);
			float fTemp153 = fTemp152;
			float fTemp154 = ((iSlow25) ? dsp->fRec92[0] * fTemp15 : fTemp16) * powf(2.0f, 0.00083333335f * (fTemp19 + fTemp17 + 1.2e+03f * fTemp18 * fTemp153));
			float fTemp155 = ((iSlow24) ? fTemp154 : 0.015625f * fTemp154);
			float fTemp156 = fmaxf(0.0f, dsp->fRec92[0] * powf(2.0f, 0.00083333335f * (fTemp24 + fTemp22 + 1.2e+03f * fTemp23 * fTemp153)) + fTemp25 * fTemp155 * dsp->fRec96[1]);
			float fTemp157 = dsp->fConst4 * fTemp156;
			float fTemp158 = dsp->fRec102[1] + fTemp157;
			float fTemp159 = fmodf(fTemp158, 1.0f);
			float fTemp160 = fTemp159 / fTemp156;
			float fTemp161 = dsp->fConst0 * fTemp160;
			float fTemp162 = 1.0f - fTemp161;
			float fTemp163 = dsp->fRec101[1] + dsp->fConst4 * fTemp155 * fTemp162;
			int iTemp164 = dsp->iRec103[1] == 0;
			float fTemp165 = dsp->fConst4 * fTemp155;
			float fTemp166 = dsp->fConst5 * fTemp155;
			float fTemp167 = ((fTemp165 >= 0.25f) ? 0.5f : fmaxf(fTemp166, fminf(1.0f - fTemp166, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp37 + fTemp39 + dsp->fRec51[0] + fTemp38 * fTemp153 : 1.0f)))));
			int iTemp168 = fTemp158 >= 1.0f;
			int iTemp169 = (fSlow52 + (float)(iTemp168)) == 2.0f;
			int iTemp170 = ((((fTemp163 >= 1.0f) + ((iTemp164 + (fTemp163 >= fTemp167)) == 2)) > 0) + (iTemp169 == 0)) > 0;
			float fTemp171 = dsp->fRec101[1] + fTemp165;
			float fTemp172 = fmodf(fTemp171, 1.0f);
			int iTemp173 = fTemp172 >= fTemp167;
			float fTemp174 = fTemp172 - fTemp167;
			float fTemp175 = fTemp165 + dsp->fRec99[1] - fTemp167;
			float fTemp176 = 1.0f - fTemp167;
			float fTemp177 = fSlow55 * fTemp155 * (1.0f / fTemp176 + 1.0f / fTemp167);
			float fTemp178 = fTemp174 / fTemp175;
			float fTemp179 = 1.0f - fTemp178;
			int iTemp180 = fTemp171 >= 1.0f;
			float fTemp181 = fTemp172 / fTemp155;
			float fTemp182 = dsp->fConst0 * fTemp181;
			float fTemp183 = 1.0f - fTemp182;
			float fTemp184 = mydsp_faustpower2_f(fTemp159);
			float fTemp185 = fmodf(fTemp163, 1.0f);
			int iTemp186 = fTemp185 < fTemp167;
			float fTemp187 = fTemp185 + 2.0f * fSlow54 * (((iTemp186) ? 0.0f : 1.0f) - fTemp185) + fSlow55 * (((iTemp186) ? fTemp185 / fTemp167 : 1.0f - (fTemp185 - fTemp167) / fTemp176) - fTemp185);
			float fTemp188 = mydsp_faustpower2_f(fTemp156);
			float fRec97 = dsp->fRec105[1] + ((iTemp170) ? ((dsp->iRec103[1]) ? ((iTemp180) ? dsp->fConst4 * fTemp177 * (fTemp183 * (0.375f * fTemp183 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp183)) + 0.1875f) - dsp->fConst6 * (fSlow56 * mydsp_faustpower2_f(fTemp172) / mydsp_faustpower2_f(fTemp155)) : 0.0f) : ((iTemp173) ? fSlow54 * mydsp_faustpower2_f(fTemp174) / mydsp_faustpower2_f(fTemp175) - dsp->fConst4 * fTemp177 * (fTemp179 * (0.375f * fTemp179 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp179)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp169) ? dsp->fConst6 * (fTemp184 * fTemp187 / fTemp188) : 0.0f);
			float fTemp189 = dsp->fConst5 * fTemp156;
			float fTemp190 = ((fTemp157 >= 0.25f) ? 0.5f : fmaxf(fTemp189, fminf(1.0f - fTemp189, ((iSlow57) ? fTemp64 + fTemp66 + dsp->fRec58[0] + fTemp65 * fTemp153 : 1.0f) + fTemp68 * dsp->fRec96[1])));
			int iTemp191 = fTemp159 >= fTemp190;
			float fTemp192 = fTemp159 - fTemp190;
			float fTemp193 = fTemp157 + dsp->fRec100[1] - fTemp190;
			float fTemp194 = 1.0f - fTemp190;
			float fTemp195 = fSlow69 * fTemp156 * (1.0f / fTemp190 + 1.0f / fTemp194);
			float fTemp196 = fTemp192 / fTemp193;
			float fTemp197 = 1.0f - fTemp196;
			float fRec98 = dsp->fRec106[1] + ((dsp->iRec104[1]) ? ((iTemp168) ? dsp->fConst4 * fTemp195 * (fTemp162 * (0.375f * fTemp162 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp162)) + 0.1875f) - dsp->fConst6 * (fSlow70 * fTemp184 / fTemp188) : 0.0f) : ((iTemp191) ? fSlow68 * mydsp_faustpower2_f(fTemp192) / mydsp_faustpower2_f(fTemp193) - dsp->fConst4 * fTemp195 * (fTemp197 * (0.375f * fTemp197 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp197)) + 0.1875f) : 0.0f));
			dsp->fRec99[0] = fTemp167;
			dsp->fRec100[0] = fTemp190;
			float fTemp198 = ((iTemp169) ? fTemp155 * fTemp159 / fTemp156 : fTemp172);
			dsp->fRec101[0] = fTemp198;
			dsp->fRec102[0] = fTemp159;
			dsp->iRec103[0] = (((iTemp169 + ((dsp->iRec103[1] + iTemp180) == 2) + ((iTemp164 + (fTemp172 < fTemp167)) == 2)) > 0) ? 0 : 1);
			int iTemp199 = fTemp159 < fTemp190;
			dsp->iRec104[0] = (((((iTemp168 + dsp->iRec104[1]) == 2) + (((dsp->iRec104[1] == 0) + iTemp199) == 2)) > 0) ? 0 : 1);
			int iTemp200 = fTemp198 < fTemp167;
			float fTemp201 = fTemp161 - 1.0f;
			dsp->fRec105[0] = fTemp198 + 2.0f * fSlow54 * (((iTemp200) ? 0.0f : 1.0f) - fTemp198) + fSlow55 * (((iTemp200) ? fTemp198 / fTemp167 : 1.0f - (fTemp198 - fTemp167) / fTemp176) - fTemp198) + ((iTemp170) ? ((dsp->iRec103[1]) ? ((iTemp180) ? dsp->fConst4 * fTemp177 * (dsp->fConst0 * (fTemp172 * (dsp->fConst7 * fTemp181 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp172) / mydsp_faustpower3_f(fTemp155))) / fTemp155) + 0.1875f) - 0.5f * fSlow56 * fTemp183 * (fTemp182 - 1.0f) : 0.0f) : ((iTemp173) ? fSlow54 * fTemp179 * (fTemp178 - 1.0f) - dsp->fConst4 * fTemp177 * (fTemp174 * (0.375f * fTemp178 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp174) / mydsp_faustpower3_f(fTemp175))) / fTemp175 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp169) ? 0.5f * fTemp162 * fTemp187 * fTemp201 : 0.0f);
			dsp->fRec106[0] = fTemp159 + 2.0f * fSlow68 * (((iTemp199) ? 0.0f : 1.0f) - fTemp159) + fSlow69 * (((iTemp199) ? fTemp159 / fTemp190 : 1.0f - fTemp192 / fTemp194) - fTemp159) + ((dsp->iRec104[1]) ? ((iTemp168) ? dsp->fConst4 * fTemp195 * (dsp->fConst0 * (fTemp159 * (dsp->fConst7 * fTemp160 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp159) / mydsp_faustpower3_f(fTemp156))) / fTemp156) + 0.1875f) - 0.5f * fSlow70 * fTemp162 * fTemp201 : 0.0f) : ((iTemp191) ? fSlow68 * fTemp197 * (fTemp196 - 1.0f) - dsp->fConst4 * fTemp195 * (fTemp192 * (0.375f * fTemp196 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp192) / mydsp_faustpower3_f(fTemp193))) / fTemp193 + 0.1875f) : 0.0f));
			float fRec95 = 2.0f * fRec98 + -1.0f;
			dsp->fRec96[0] = 2.0f * fRec97 + -1.0f;
			dsp->fVbargraph8 = (FAUSTFLOAT)(dsp->fRec96[0]);
			float fTemp202 = dsp->fRec96[0];
			float fTemp203 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec92[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp14 * fTemp153 + fTemp202 * fTemp82)))), 1.0f) + 1.0f));
			float fTemp204 = (0.5f * (fTemp84 + dsp->fRec65[0] * fRec95 + dsp->fRec66[0] * fTemp202) - dsp->fRec90[1]) * fTemp203;
			float fTemp205 = fTemp203 + 1.0f;
			float fTemp206 = fTemp203 / fTemp205;
			float fTemp207 = fTemp203 * ((dsp->fRec90[1] + (fTemp204 - 0.21521576f * fTemp86 * dsp->fRec88[1] * (fTemp206 + -1.0f) - dsp->fRec89[1]) / fTemp205) / (1.0f - 0.21521576f * (fTemp86 * fTemp203 * (1.0f - fTemp206) / fTemp205)) - dsp->fRec88[1]) / fTemp205;
			dsp->fRec88[0] = dsp->fRec88[1] + 2.0f * fTemp207;
			float fTemp208 = dsp->fRec88[1] + fTemp207;
			dsp->fRec89[0] = dsp->fRec89[1] + 2.0f * (fTemp203 * (0.21521576f * fTemp86 * fTemp208 - dsp->fRec89[1]) / fTemp205);
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * (fTemp204 / fTemp205);
			float fRec91 = fTemp208;
			float fTemp209 = fmaxf(0.0f, fminf(fSlow78 * dsp->fRec93[0], fmaxf(1.0f - fSlow80 * (dsp->fRec93[0] - fSlow77), fSlow79)) * (1.0f - fSlow81 * fTemp151));
			dsp->fVbargraph9 = (FAUSTFLOAT)(fTemp209);
			float fTemp210 = 0.12f * (fRec3 * fTemp91 + fRec72 * fTemp150 + fRec91 * fTemp209);
			output0[i0] = (FAUSTFLOAT)(fTemp210);
			output1[i0] = (FAUSTFLOAT)(fTemp210);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->iRec8[1] = dsp->iRec8[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->iRec17[1] = dsp->iRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
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
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->iRec28[1] = dsp->iRec28[0];
			dsp->iRec29[1] = dsp->iRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->iRec75[1] = dsp->iRec75[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->iRec84[1] = dsp->iRec84[0];
			dsp->iRec85[1] = dsp->iRec85[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->iRec94[1] = dsp->iRec94[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->iRec103[1] = dsp->iRec103[0];
			dsp->iRec104[1] = dsp->iRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec90[1] = dsp->fRec90[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
