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

static float mydsp_faustpower3_f(float value) {
	return value * value * value;
}
static float mydsp_faustpower2_f(float value) {
	return value * value;
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
	int iRec17[2];
	float fConst5;
	FAUSTFLOAT fButton1;
	float fVec1[2];
	float fRec16[2];
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	int iRec18[2];
	float fConst6;
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider18;
	float fRec19[2];
	FAUSTFLOAT fHslider19;
	float fRec20[2];
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	float fRec33[2];
	FAUSTFLOAT fHslider24;
	float fRec34[2];
	FAUSTFLOAT fHslider25;
	float fRec35[2];
	FAUSTFLOAT fHslider26;
	float fRec36[2];
	FAUSTFLOAT fHslider27;
	float fRec37[2];
	FAUSTFLOAT fHslider28;
	float fRec38[2];
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
	FAUSTFLOAT fHslider34;
	float fRec44[2];
	FAUSTFLOAT fHslider35;
	float fRec45[2];
	FAUSTFLOAT fHslider36;
	float fRec46[2];
	FAUSTFLOAT fHslider37;
	float fRec47[2];
	float fConst7;
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	float fRec48[2];
	FAUSTFLOAT fHslider40;
	float fRec49[2];
	FAUSTFLOAT fHslider41;
	float fRec50[2];
	FAUSTFLOAT fHslider42;
	float fRec51[2];
	FAUSTFLOAT fHslider43;
	float fRec52[2];
	FAUSTFLOAT fHslider44;
	float fRec53[2];
	FAUSTFLOAT fHslider45;
	float fRec54[2];
	FAUSTFLOAT fHslider46;
	float fConst8;
	FAUSTFLOAT fHslider47;
	FAUSTFLOAT fHslider48;
	float fRec55[2];
	FAUSTFLOAT fHslider49;
	float fRec56[2];
	FAUSTFLOAT fHslider50;
	float fRec57[2];
	FAUSTFLOAT fHslider51;
	float fRec58[2];
	FAUSTFLOAT fHslider52;
	float fRec59[2];
	FAUSTFLOAT fHslider53;
	float fRec60[2];
	FAUSTFLOAT fHslider54;
	float fRec61[2];
	FAUSTFLOAT fHslider55;
	float fRec62[2];
	FAUSTFLOAT fHslider56;
	float fRec63[2];
	float fRec25[2];
	float fRec26[2];
	float fRec27[2];
	float fRec28[2];
	int iRec29[2];
	int iRec30[2];
	float fConst9;
	float fConst10;
	float fRec31[2];
	float fRec32[2];
	float fRec22[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider57;
	float fRec64[2];
	FAUSTFLOAT fHslider58;
	float fRec65[2];
	FAUSTFLOAT fHslider59;
	float fRec66[2];
	FAUSTFLOAT fHslider60;
	float fRec67[2];
	FAUSTFLOAT fHslider61;
	float fRec68[2];
	FAUSTFLOAT fHslider62;
	float fRec69[2];
	float fRec1[2];
	float fRec2[2];
	float fRec3[2];
	FAUSTFLOAT fHslider63;
	FAUSTFLOAT fHslider64;
	FAUSTFLOAT fHslider65;
	FAUSTFLOAT fHslider66;
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider67;
	float fRec74[2];
	FAUSTFLOAT fButton2;
	int iRec76[2];
	FAUSTFLOAT fButton3;
	float fVec2[2];
	float fRec75[2];
	int iRec77[2];
	FAUSTFLOAT fVbargraph4;
	float fRec82[2];
	float fRec83[2];
	float fRec84[2];
	float fRec85[2];
	int iRec86[2];
	int iRec87[2];
	float fRec88[2];
	float fRec89[2];
	float fRec79[2];
	FAUSTFLOAT fVbargraph5;
	float fRec71[2];
	float fRec72[2];
	float fRec73[2];
	FAUSTFLOAT fVbargraph6;
	FAUSTFLOAT fHslider68;
	float fRec94[2];
	FAUSTFLOAT fButton4;
	int iRec96[2];
	FAUSTFLOAT fButton5;
	float fVec3[2];
	float fRec95[2];
	int iRec97[2];
	FAUSTFLOAT fVbargraph7;
	float fRec102[2];
	float fRec103[2];
	float fRec104[2];
	float fRec105[2];
	int iRec106[2];
	int iRec107[2];
	float fRec108[2];
	float fRec109[2];
	float fRec99[2];
	FAUSTFLOAT fVbargraph8;
	float fRec91[2];
	float fRec92[2];
	float fRec93[2];
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
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
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
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fButton3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider68 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton4 = (FAUSTFLOAT)(0.0f);
	dsp->fButton5 = (FAUSTFLOAT)(0.0f);
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
			dsp->iRec17[l13] = 0;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fVec1[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec16[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->iRec18[l16] = 0;
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
			dsp->fRec20[l18] = 0.0f;
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
			dsp->fRec63[l49] = 0.0f;
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
			dsp->fRec28[l53] = 0.0f;
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
			dsp->iRec30[l55] = 0;
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
			dsp->fRec32[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec22[l58] = 0.0f;
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
			dsp->fRec69[l64] = 0.0f;
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
			dsp->fRec3[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec74[l68] = 0.0f;
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
			dsp->fVec2[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec75[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->iRec77[l72] = 0;
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
			dsp->fRec84[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec85[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->iRec86[l77] = 0;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->iRec87[l78] = 0;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec88[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec89[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec79[l81] = 0.0f;
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
			dsp->fRec72[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec73[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec94[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->iRec96[l86] = 0;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fVec3[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec95[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->iRec97[l89] = 0;
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
			dsp->fRec103[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec104[l92] = 0.0f;
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
			dsp->iRec106[l94] = 0;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->iRec107[l95] = 0;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec108[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec109[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec99[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fRec91[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec92[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec93[l101] = 0.0f;
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
	dsp->fConst5 = fmaxf(1.0f, 0.003f * dsp->fConst0);
	dsp->fConst6 = 1.0f / dsp->fConst5;
	dsp->fConst7 = 2.0f / dsp->fConst0;
	dsp->fConst8 = 0.5f * mydsp_faustpower2_f(dsp->fConst0);
	dsp->fConst9 = 0.375f * dsp->fConst0;
	dsp->fConst10 = 0.0625f * mydsp_faustpower3_f(dsp->fConst0);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider9, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "59");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.os1", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider56, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider58, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider39, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider55, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider57, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "46");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.vcf", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton3);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton5);
	ui_interface->addButton(ui_interface->uiInterface, "kill_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "kill_1", &dsp->fButton2);
	ui_interface->addButton(ui_interface->uiInterface, "kill_2", &dsp->fButton4);
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
	int iSlow17 = (float)(dsp->fButton0) > 0.0f;
	float fSlow18 = (float)(dsp->fButton1);
	float fSlow19 = (float)(dsp->fHslider15);
	float fSlow20 = (1.0f - fSlow19) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider16)) + 0.001f));
	float fSlow21 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider17)) + 0.001f));
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
	int iSlow83 = (float)(dsp->fButton2) > 0.0f;
	float fSlow84 = (float)(dsp->fButton3);
	float fSlow85 = (float)(dsp->fHslider68);
	int iSlow86 = (float)(dsp->fButton4) > 0.0f;
	float fSlow87 = (float)(dsp->fButton5);
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
			float fTemp5 = 1.1175871e-06f * fTemp4 * (dsp->fRec9[0] * fabsf(dsp->fRec9[0]) + dsp->fRec10[0] * dsp->fRec11[0] * fabsf(dsp->fRec11[0]));
			dsp->fRec13[0] = fSlow12 + dsp->fConst3 * dsp->fRec13[1];
			float fTemp6 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec12[1] + dsp->fConst4 * dsp->fRec13[0]);
			dsp->fRec12[0] = fTemp6 - floorf(fTemp6);
			float fTemp7 = 2.0f * dsp->fRec12[0] + -1.0f;
			float fTemp8 = ((iSlow10) ? 2.0f * (1.0f - fabsf(fTemp7)) + -1.0f : ((iSlow11) ? 2.0f * (float)(dsp->fRec12[0] <= 0.5f) + -1.0f : fTemp7));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp8);
			float fTemp9 = fTemp8;
			dsp->fRec14[0] = fSlow13 + dsp->fConst3 * dsp->fRec14[1];
			dsp->fRec15[0] = fSlow14 + dsp->fConst3 * dsp->fRec15[1];
			float fTemp10 = fTemp9 * (dsp->fRec14[0] * fabsf(dsp->fRec14[0]) + dsp->fRec10[0] * dsp->fRec15[0] * fabsf(dsp->fRec15[0]));
			dsp->iRec17[0] = iSlow17 * (dsp->iRec17[1] + 1);
			float fTemp11 = (float)(dsp->iRec17[0]);
			int iTemp12 = (iSlow17 * (fTemp11 >= dsp->fConst5)) <= 0;
			float fTemp13 = (float)(iTemp12);
			float fTemp14 = fSlow18 * fTemp13;
			dsp->fVec1[0] = fTemp14;
			dsp->fRec16[0] = fTemp13 * (fTemp14 + dsp->fRec16[1]) * (float)(dsp->fVec1[1] >= fTemp14);
			dsp->iRec18[0] = iTemp12 * (fTemp14 == 0.0f) * (dsp->iRec18[1] + 1);
			float fTemp15 = (float)(dsp->iRec18[0]);
			float fTemp16 = ((iSlow17) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp11) : 1.0f);
			float fTemp17 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec16[0], fmaxf(fSlow20 * (fSlow15 - dsp->fRec16[0]) + 1.0f, fSlow19)) * (1.0f - fSlow21 * fTemp15)) * fTemp16;
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp17);
			float fTemp18 = fTemp17;
			dsp->fRec19[0] = fSlow22 + dsp->fConst3 * dsp->fRec19[1];
			dsp->fRec20[0] = fSlow23 + dsp->fConst3 * dsp->fRec20[1];
			float fTemp19 = dsp->fRec19[0] * fabsf(dsp->fRec19[0]) + dsp->fRec10[0] * dsp->fRec20[0] * fabsf(dsp->fRec20[0]);
			dsp->fRec33[0] = fSlow27 + dsp->fConst3 * dsp->fRec33[1];
			float fTemp20 = powf(2.0f, 0.00083333335f * (fSlow26 + dsp->fRec33[0]));
			float fTemp21 = fTemp20 * (4.4e+02f * powf(2.0f, 0.083333336f * fTemp3) + 261.0f);
			dsp->fRec34[0] = fSlow28 + dsp->fConst3 * dsp->fRec34[1];
			dsp->fRec35[0] = fSlow29 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp22 = 2.4e+03f * fTemp9 * (dsp->fRec34[0] * fabsf(dsp->fRec34[0]) + dsp->fRec10[0] * dsp->fRec35[0] * fabsf(dsp->fRec35[0]));
			dsp->fRec36[0] = fSlow30 + dsp->fConst3 * dsp->fRec36[1];
			dsp->fRec37[0] = fSlow31 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp23 = dsp->fRec36[0] * fabsf(dsp->fRec36[0]) + dsp->fRec10[0] * dsp->fRec37[0] * fabsf(dsp->fRec37[0]);
			dsp->fRec38[0] = fSlow32 + dsp->fConst3 * dsp->fRec38[1];
			dsp->fRec39[0] = fSlow33 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp24 = 5.5879354e-07f * fTemp4 * (dsp->fRec38[0] * fabsf(dsp->fRec38[0]) + dsp->fRec10[0] * dsp->fRec39[0] * fabsf(dsp->fRec39[0]));
			float fTemp25 = ((iSlow25) ? dsp->fRec5[0] * fTemp20 : fTemp21) * powf(2.0f, 0.00083333335f * (fTemp22 + 1.2e+03f * fTemp18 * fTemp23 + fTemp24));
			float fTemp26 = ((iSlow24) ? fTemp25 : 0.015625f * fTemp25);
			dsp->fRec40[0] = fSlow34 + dsp->fConst3 * dsp->fRec40[1];
			dsp->fRec41[0] = fSlow35 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp27 = 2.4e+03f * (dsp->fRec40[0] * fabsf(dsp->fRec40[0]) + dsp->fRec41[0] * fabsf(dsp->fRec41[0]) * dsp->fRec10[0]) * fTemp9;
			dsp->fRec42[0] = fSlow36 + dsp->fConst3 * dsp->fRec42[1];
			dsp->fRec43[0] = fSlow37 + dsp->fConst3 * dsp->fRec43[1];
			float fTemp28 = dsp->fRec42[0] * fabsf(dsp->fRec42[0]) + dsp->fRec10[0] * dsp->fRec43[0] * fabsf(dsp->fRec43[0]);
			dsp->fRec44[0] = fSlow38 + dsp->fConst3 * dsp->fRec44[1];
			dsp->fRec45[0] = fSlow39 + dsp->fConst3 * dsp->fRec45[1];
			float fTemp29 = 5.5879354e-07f * fTemp4 * (dsp->fRec44[0] * fabsf(dsp->fRec44[0]) + dsp->fRec10[0] * dsp->fRec45[0] * fabsf(dsp->fRec45[0]));
			dsp->fRec46[0] = fSlow40 + dsp->fConst3 * dsp->fRec46[1];
			dsp->fRec47[0] = fSlow41 + dsp->fConst3 * dsp->fRec47[1];
			float fTemp30 = dsp->fRec46[0] * fabsf(dsp->fRec46[0]) + dsp->fRec10[0] * dsp->fRec47[0] * fabsf(dsp->fRec47[0]);
			float fTemp31 = fmaxf(0.0f, dsp->fRec5[0] * powf(2.0f, 0.00083333335f * (fTemp27 + 1.2e+03f * fTemp18 * fTemp28 + fTemp29)) + fTemp26 * dsp->fRec22[1] * fTemp30);
			float fTemp32 = dsp->fConst4 * fTemp31;
			float fTemp33 = dsp->fRec28[1] + fTemp32;
			float fTemp34 = fmodf(fTemp33, 1.0f);
			float fTemp35 = fTemp34 / fTemp31;
			float fTemp36 = dsp->fConst0 * fTemp35;
			float fTemp37 = 1.0f - fTemp36;
			float fTemp38 = dsp->fRec27[1] + dsp->fConst4 * fTemp26 * fTemp37;
			int iTemp39 = dsp->iRec29[1] == 0;
			float fTemp40 = dsp->fConst4 * fTemp26;
			float fTemp41 = dsp->fConst7 * fTemp26;
			dsp->fRec48[0] = fSlow45 + dsp->fConst3 * dsp->fRec48[1];
			dsp->fRec49[0] = fSlow46 + dsp->fConst3 * dsp->fRec49[1];
			float fTemp42 = 4.656613e-10f * fTemp4 * (dsp->fRec48[0] * fabsf(dsp->fRec48[0]) + dsp->fRec10[0] * dsp->fRec49[0] * fabsf(dsp->fRec49[0]));
			dsp->fRec50[0] = fSlow47 + dsp->fConst3 * dsp->fRec50[1];
			dsp->fRec51[0] = fSlow48 + dsp->fConst3 * dsp->fRec51[1];
			float fTemp43 = dsp->fRec50[0] * fabsf(dsp->fRec50[0]) + dsp->fRec10[0] * dsp->fRec51[0] * fabsf(dsp->fRec51[0]);
			dsp->fRec52[0] = fSlow49 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow50 + dsp->fConst3 * dsp->fRec53[1];
			dsp->fRec54[0] = fSlow51 + dsp->fConst3 * dsp->fRec54[1];
			float fTemp44 = fTemp9 * (dsp->fRec53[0] * fabsf(dsp->fRec53[0]) + dsp->fRec10[0] * dsp->fRec54[0] * fabsf(dsp->fRec54[0]));
			float fTemp45 = dsp->fRec52[0] + fTemp44;
			float fTemp46 = ((fTemp40 >= 0.25f) ? 0.5f : fmaxf(fTemp41, fminf(1.0f - fTemp41, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp42 + fTemp18 * fTemp43 + fTemp45 : 1.0f)))));
			int iTemp47 = fTemp33 >= 1.0f;
			int iTemp48 = (fSlow52 + (float)(iTemp47)) == 2.0f;
			int iTemp49 = ((((fTemp38 >= 1.0f) + ((iTemp39 + (fTemp38 >= fTemp46)) == 2)) > 0) + (iTemp48 == 0)) > 0;
			float fTemp50 = dsp->fRec27[1] + fTemp40;
			float fTemp51 = fmodf(fTemp50, 1.0f);
			int iTemp52 = fTemp51 >= fTemp46;
			float fTemp53 = fTemp51 - fTemp46;
			float fTemp54 = fTemp40 + dsp->fRec25[1] - fTemp46;
			float fTemp55 = 1.0f - fTemp46;
			float fTemp56 = fTemp26 * fSlow55 * (1.0f / fTemp55 + 1.0f / fTemp46);
			float fTemp57 = fTemp53 / fTemp54;
			float fTemp58 = 1.0f - fTemp57;
			int iTemp59 = fTemp50 >= 1.0f;
			float fTemp60 = fTemp51 / fTemp26;
			float fTemp61 = dsp->fConst0 * fTemp60;
			float fTemp62 = 1.0f - fTemp61;
			float fTemp63 = mydsp_faustpower2_f(fTemp34);
			float fTemp64 = fmodf(fTemp38, 1.0f);
			int iTemp65 = fTemp64 < fTemp46;
			float fTemp66 = fTemp64 + 2.0f * (((iTemp65) ? 0.0f : 1.0f) - fTemp64) * fSlow54 + (((iTemp65) ? fTemp64 / fTemp46 : 1.0f - (fTemp64 - fTemp46) / fTemp55) - fTemp64) * fSlow55;
			float fTemp67 = mydsp_faustpower2_f(fTemp31);
			float fRec23 = dsp->fRec31[1] + ((iTemp49) ? ((dsp->iRec29[1]) ? ((iTemp59) ? dsp->fConst4 * fTemp56 * (fTemp62 * (0.375f * fTemp62 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp62)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp51) * fSlow56 / mydsp_faustpower2_f(fTemp26)) : 0.0f) : ((iTemp52) ? fSlow54 * mydsp_faustpower2_f(fTemp53) / mydsp_faustpower2_f(fTemp54) - dsp->fConst4 * fTemp56 * (fTemp58 * (0.375f * fTemp58 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp58)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp48) ? dsp->fConst8 * (fTemp63 * fTemp66 / fTemp67) : 0.0f);
			float fTemp68 = dsp->fConst7 * fTemp31;
			dsp->fRec55[0] = fSlow58 + dsp->fConst3 * dsp->fRec55[1];
			dsp->fRec56[0] = fSlow59 + dsp->fConst3 * dsp->fRec56[1];
			float fTemp69 = 4.656613e-10f * fTemp4 * (dsp->fRec55[0] * fabsf(dsp->fRec55[0]) + dsp->fRec10[0] * dsp->fRec56[0] * fabsf(dsp->fRec56[0]));
			dsp->fRec57[0] = fSlow60 + dsp->fConst3 * dsp->fRec57[1];
			dsp->fRec58[0] = fSlow61 + dsp->fConst3 * dsp->fRec58[1];
			float fTemp70 = dsp->fRec57[0] * fabsf(dsp->fRec57[0]) + dsp->fRec10[0] * dsp->fRec58[0] * fabsf(dsp->fRec58[0]);
			dsp->fRec59[0] = fSlow62 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow63 + dsp->fConst3 * dsp->fRec60[1];
			dsp->fRec61[0] = fSlow64 + dsp->fConst3 * dsp->fRec61[1];
			float fTemp71 = dsp->fRec59[0] + fTemp9 * (dsp->fRec60[0] * fabsf(dsp->fRec60[0]) + dsp->fRec10[0] * dsp->fRec61[0] * fabsf(dsp->fRec61[0]));
			dsp->fRec62[0] = fSlow65 + dsp->fConst3 * dsp->fRec62[1];
			dsp->fRec63[0] = fSlow66 + dsp->fConst3 * dsp->fRec63[1];
			float fTemp72 = dsp->fRec62[0] * fabsf(dsp->fRec62[0]) + dsp->fRec10[0] * dsp->fRec63[0] * fabsf(dsp->fRec63[0]);
			float fTemp73 = ((fTemp32 >= 0.25f) ? 0.5f : fmaxf(fTemp68, fminf(1.0f - fTemp68, ((iSlow57) ? fTemp69 + fTemp18 * fTemp70 + fTemp71 : 1.0f) + dsp->fRec22[1] * fTemp72)));
			int iTemp74 = fTemp34 >= fTemp73;
			float fTemp75 = fTemp34 - fTemp73;
			float fTemp76 = fTemp32 + dsp->fRec26[1] - fTemp73;
			float fTemp77 = 1.0f - fTemp73;
			float fTemp78 = fTemp31 * (1.0f / fTemp73 + 1.0f / fTemp77) * fSlow69;
			float fTemp79 = fTemp75 / fTemp76;
			float fTemp80 = 1.0f - fTemp79;
			float fRec24 = dsp->fRec32[1] + ((dsp->iRec30[1]) ? ((iTemp47) ? dsp->fConst4 * fTemp78 * (fTemp37 * (0.375f * fTemp37 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp37)) + 0.1875f) - dsp->fConst8 * (fTemp63 * fSlow70 / fTemp67) : 0.0f) : ((iTemp74) ? fSlow68 * mydsp_faustpower2_f(fTemp75) / mydsp_faustpower2_f(fTemp76) - dsp->fConst4 * fTemp78 * (fTemp80 * (0.375f * fTemp80 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp80)) + 0.1875f) : 0.0f));
			dsp->fRec25[0] = fTemp46;
			dsp->fRec26[0] = fTemp73;
			float fTemp81 = ((iTemp48) ? fTemp26 * fTemp34 / fTemp31 : fTemp51);
			dsp->fRec27[0] = fTemp81;
			dsp->fRec28[0] = fTemp34;
			dsp->iRec29[0] = (((iTemp48 + ((dsp->iRec29[1] + iTemp59) == 2) + ((iTemp39 + (fTemp51 < fTemp46)) == 2)) > 0) ? 0 : 1);
			int iTemp82 = fTemp34 < fTemp73;
			dsp->iRec30[0] = (((((iTemp47 + dsp->iRec30[1]) == 2) + (((dsp->iRec30[1] == 0) + iTemp82) == 2)) > 0) ? 0 : 1);
			int iTemp83 = fTemp81 < fTemp46;
			float fTemp84 = fTemp36 - 1.0f;
			dsp->fRec31[0] = fTemp81 + 2.0f * fSlow54 * (((iTemp83) ? 0.0f : 1.0f) - fTemp81) + fSlow55 * (((iTemp83) ? fTemp81 / fTemp46 : 1.0f - (fTemp81 - fTemp46) / fTemp55) - fTemp81) + ((iTemp49) ? ((dsp->iRec29[1]) ? ((iTemp59) ? dsp->fConst4 * fTemp56 * (dsp->fConst0 * (fTemp51 * (dsp->fConst9 * fTemp60 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp51) / mydsp_faustpower3_f(fTemp26))) / fTemp26) + 0.1875f) - 0.5f * fTemp62 * fSlow56 * (fTemp61 - 1.0f) : 0.0f) : ((iTemp52) ? fSlow54 * fTemp58 * (fTemp57 - 1.0f) - dsp->fConst4 * fTemp56 * (fTemp53 * (0.375f * fTemp57 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp53) / mydsp_faustpower3_f(fTemp54))) / fTemp54 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp48) ? 0.5f * fTemp37 * fTemp66 * fTemp84 : 0.0f);
			dsp->fRec32[0] = fTemp34 + 2.0f * fSlow68 * (((iTemp82) ? 0.0f : 1.0f) - fTemp34) + fSlow69 * (((iTemp82) ? fTemp34 / fTemp73 : 1.0f - fTemp75 / fTemp77) - fTemp34) + ((dsp->iRec30[1]) ? ((iTemp47) ? dsp->fConst4 * fTemp78 * (dsp->fConst0 * (fTemp34 * (dsp->fConst9 * fTemp35 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp34) / mydsp_faustpower3_f(fTemp31))) / fTemp31) + 0.1875f) - 0.5f * fTemp37 * fSlow70 * fTemp84 : 0.0f) : ((iTemp74) ? fSlow68 * fTemp80 * (fTemp79 - 1.0f) - dsp->fConst4 * fTemp78 * (fTemp75 * (0.375f * fTemp79 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp75) / mydsp_faustpower3_f(fTemp76))) / fTemp76 + 0.1875f) : 0.0f));
			float fRec21 = 2.0f * fRec24 + -1.0f;
			dsp->fRec22[0] = 2.0f * fRec23 + -1.0f;
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec22[0]);
			float fTemp85 = dsp->fRec22[0];
			dsp->fRec64[0] = fSlow71 + dsp->fConst3 * dsp->fRec64[1];
			dsp->fRec65[0] = fSlow72 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp86 = dsp->fRec64[0] * fabsf(dsp->fRec64[0]) + dsp->fRec10[0] * dsp->fRec65[0] * fabsf(dsp->fRec65[0]);
			float fTemp87 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec5[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp18 * fTemp19 + fTemp85 * fTemp86)))), 1.0f) + 1.0f));
			dsp->fRec66[0] = fSlow73 + dsp->fConst3 * dsp->fRec66[1];
			dsp->fRec67[0] = fSlow74 + dsp->fConst3 * dsp->fRec67[1];
			dsp->fRec68[0] = fSlow75 + dsp->fConst3 * dsp->fRec68[1];
			float fTemp88 = 4.656613e-10f * dsp->fRec68[0] * fTemp4;
			float fTemp89 = (0.5f * (fRec21 * dsp->fRec66[0] + fTemp85 * dsp->fRec67[0] + fTemp88) - dsp->fRec3[1]) * fTemp87;
			dsp->fRec69[0] = fSlow76 + dsp->fConst3 * dsp->fRec69[1];
			float fTemp90 = dsp->fRec69[0] + -0.707f;
			float fTemp91 = fTemp87 + 1.0f;
			float fTemp92 = 1.0f - fTemp87 / fTemp91;
			float fTemp93 = fTemp87 * ((dsp->fRec3[1] + (fTemp89 + 0.21521576f * dsp->fRec1[1] * fTemp90 * fTemp92 - dsp->fRec2[1]) / fTemp91) / (1.0f - 0.21521576f * (fTemp87 * fTemp90 * fTemp92 / fTemp91)) - dsp->fRec1[1]) / fTemp91;
			float fTemp94 = dsp->fRec1[1] + fTemp93;
			float fRec0 = fTemp94;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * fTemp93;
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp87 * (0.21521576f * fTemp90 * fTemp94 - dsp->fRec2[1]) / fTemp91);
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * (fTemp89 / fTemp91);
			float fTemp95 = fTemp16 * fmaxf(0.0f, fminf(fSlow78 * dsp->fRec16[0], fmaxf(fSlow80 * (fSlow77 - dsp->fRec16[0]) + 1.0f, fSlow79)) * (1.0f - fSlow81 * fTemp15));
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp95);
			dsp->fRec74[0] = 4.4e+02f * fTemp2 * powf(2.0f, 0.083333336f * (fSlow82 + fTemp3)) + fTemp1 * dsp->fRec74[1];
			dsp->iRec76[0] = iSlow83 * (dsp->iRec76[1] + 1);
			float fTemp96 = (float)(dsp->iRec76[0]);
			int iTemp97 = (iSlow83 * (fTemp96 >= dsp->fConst5)) <= 0;
			float fTemp98 = (float)(iTemp97);
			float fTemp99 = fSlow84 * fTemp98;
			dsp->fVec2[0] = fTemp99;
			dsp->fRec75[0] = fTemp98 * (fTemp99 + dsp->fRec75[1]) * (float)(dsp->fVec2[1] >= fTemp99);
			dsp->iRec77[0] = iTemp97 * (fTemp99 == 0.0f) * (dsp->iRec77[1] + 1);
			float fTemp100 = (float)(dsp->iRec77[0]);
			float fTemp101 = ((iSlow83) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp96) : 1.0f);
			float fTemp102 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec75[0], fmaxf(1.0f - fSlow20 * (dsp->fRec75[0] - fSlow15), fSlow19)) * (1.0f - fSlow21 * fTemp100)) * fTemp101;
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp102);
			float fTemp103 = fTemp102;
			float fTemp104 = ((iSlow25) ? dsp->fRec74[0] * fTemp20 : fTemp21) * powf(2.0f, 0.00083333335f * (fTemp24 + fTemp22 + 1.2e+03f * fTemp23 * fTemp103));
			float fTemp105 = ((iSlow24) ? fTemp104 : 0.015625f * fTemp104);
			float fTemp106 = fmaxf(0.0f, dsp->fRec74[0] * powf(2.0f, 0.00083333335f * (fTemp29 + fTemp27 + 1.2e+03f * fTemp28 * fTemp103)) + fTemp30 * fTemp105 * dsp->fRec79[1]);
			float fTemp107 = dsp->fConst4 * fTemp106;
			float fTemp108 = dsp->fRec85[1] + fTemp107;
			float fTemp109 = fmodf(fTemp108, 1.0f);
			float fTemp110 = fTemp109 / fTemp106;
			float fTemp111 = dsp->fConst0 * fTemp110;
			float fTemp112 = 1.0f - fTemp111;
			float fTemp113 = dsp->fRec84[1] + dsp->fConst4 * fTemp105 * fTemp112;
			int iTemp114 = dsp->iRec86[1] == 0;
			float fTemp115 = dsp->fConst4 * fTemp105;
			float fTemp116 = dsp->fConst7 * fTemp105;
			float fTemp117 = ((fTemp115 >= 0.25f) ? 0.5f : fmaxf(fTemp116, fminf(1.0f - fTemp116, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp42 + fTemp44 + dsp->fRec52[0] + fTemp43 * fTemp103 : 1.0f)))));
			int iTemp118 = fTemp108 >= 1.0f;
			int iTemp119 = (fSlow52 + (float)(iTemp118)) == 2.0f;
			int iTemp120 = ((((fTemp113 >= 1.0f) + ((iTemp114 + (fTemp113 >= fTemp117)) == 2)) > 0) + (iTemp119 == 0)) > 0;
			float fTemp121 = dsp->fRec84[1] + fTemp115;
			float fTemp122 = fmodf(fTemp121, 1.0f);
			int iTemp123 = fTemp122 >= fTemp117;
			float fTemp124 = fTemp122 - fTemp117;
			float fTemp125 = fTemp115 + dsp->fRec82[1] - fTemp117;
			float fTemp126 = 1.0f - fTemp117;
			float fTemp127 = fSlow55 * fTemp105 * (1.0f / fTemp126 + 1.0f / fTemp117);
			float fTemp128 = fTemp124 / fTemp125;
			float fTemp129 = 1.0f - fTemp128;
			int iTemp130 = fTemp121 >= 1.0f;
			float fTemp131 = fTemp122 / fTemp105;
			float fTemp132 = dsp->fConst0 * fTemp131;
			float fTemp133 = 1.0f - fTemp132;
			float fTemp134 = mydsp_faustpower2_f(fTemp109);
			float fTemp135 = fmodf(fTemp113, 1.0f);
			int iTemp136 = fTemp135 < fTemp117;
			float fTemp137 = fTemp135 + 2.0f * fSlow54 * (((iTemp136) ? 0.0f : 1.0f) - fTemp135) + fSlow55 * (((iTemp136) ? fTemp135 / fTemp117 : 1.0f - (fTemp135 - fTemp117) / fTemp126) - fTemp135);
			float fTemp138 = mydsp_faustpower2_f(fTemp106);
			float fRec80 = dsp->fRec88[1] + ((iTemp120) ? ((dsp->iRec86[1]) ? ((iTemp130) ? dsp->fConst4 * fTemp127 * (fTemp133 * (0.375f * fTemp133 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp133)) + 0.1875f) - dsp->fConst8 * (fSlow56 * mydsp_faustpower2_f(fTemp122) / mydsp_faustpower2_f(fTemp105)) : 0.0f) : ((iTemp123) ? fSlow54 * mydsp_faustpower2_f(fTemp124) / mydsp_faustpower2_f(fTemp125) - dsp->fConst4 * fTemp127 * (fTemp129 * (0.375f * fTemp129 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp129)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp119) ? dsp->fConst8 * (fTemp134 * fTemp137 / fTemp138) : 0.0f);
			float fTemp139 = dsp->fConst7 * fTemp106;
			float fTemp140 = fTemp69 + fTemp71;
			float fTemp141 = ((fTemp107 >= 0.25f) ? 0.5f : fmaxf(fTemp139, fminf(1.0f - fTemp139, ((iSlow57) ? fTemp70 * fTemp103 + fTemp140 : 1.0f) + fTemp72 * dsp->fRec79[1])));
			int iTemp142 = fTemp109 >= fTemp141;
			float fTemp143 = fTemp109 - fTemp141;
			float fTemp144 = fTemp107 + dsp->fRec83[1] - fTemp141;
			float fTemp145 = 1.0f - fTemp141;
			float fTemp146 = fSlow69 * fTemp106 * (1.0f / fTemp141 + 1.0f / fTemp145);
			float fTemp147 = fTemp143 / fTemp144;
			float fTemp148 = 1.0f - fTemp147;
			float fRec81 = dsp->fRec89[1] + ((dsp->iRec87[1]) ? ((iTemp118) ? dsp->fConst4 * fTemp146 * (fTemp112 * (0.375f * fTemp112 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp112)) + 0.1875f) - dsp->fConst8 * (fSlow70 * fTemp134 / fTemp138) : 0.0f) : ((iTemp142) ? fSlow68 * mydsp_faustpower2_f(fTemp143) / mydsp_faustpower2_f(fTemp144) - dsp->fConst4 * fTemp146 * (fTemp148 * (0.375f * fTemp148 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp148)) + 0.1875f) : 0.0f));
			dsp->fRec82[0] = fTemp117;
			dsp->fRec83[0] = fTemp141;
			float fTemp149 = ((iTemp119) ? fTemp105 * fTemp109 / fTemp106 : fTemp122);
			dsp->fRec84[0] = fTemp149;
			dsp->fRec85[0] = fTemp109;
			dsp->iRec86[0] = (((iTemp119 + ((dsp->iRec86[1] + iTemp130) == 2) + ((iTemp114 + (fTemp122 < fTemp117)) == 2)) > 0) ? 0 : 1);
			int iTemp150 = fTemp109 < fTemp141;
			dsp->iRec87[0] = (((((iTemp118 + dsp->iRec87[1]) == 2) + (((dsp->iRec87[1] == 0) + iTemp150) == 2)) > 0) ? 0 : 1);
			int iTemp151 = fTemp149 < fTemp117;
			float fTemp152 = fTemp111 - 1.0f;
			dsp->fRec88[0] = fTemp149 + 2.0f * fSlow54 * (((iTemp151) ? 0.0f : 1.0f) - fTemp149) + fSlow55 * (((iTemp151) ? fTemp149 / fTemp117 : 1.0f - (fTemp149 - fTemp117) / fTemp126) - fTemp149) + ((iTemp120) ? ((dsp->iRec86[1]) ? ((iTemp130) ? dsp->fConst4 * fTemp127 * (dsp->fConst0 * (fTemp122 * (dsp->fConst9 * fTemp131 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp122) / mydsp_faustpower3_f(fTemp105))) / fTemp105) + 0.1875f) - 0.5f * fSlow56 * fTemp133 * (fTemp132 - 1.0f) : 0.0f) : ((iTemp123) ? fSlow54 * fTemp129 * (fTemp128 - 1.0f) - dsp->fConst4 * fTemp127 * (fTemp124 * (0.375f * fTemp128 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp124) / mydsp_faustpower3_f(fTemp125))) / fTemp125 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp119) ? 0.5f * fTemp112 * fTemp137 * fTemp152 : 0.0f);
			dsp->fRec89[0] = fTemp109 + 2.0f * fSlow68 * (((iTemp150) ? 0.0f : 1.0f) - fTemp109) + fSlow69 * (((iTemp150) ? fTemp109 / fTemp141 : 1.0f - fTemp143 / fTemp145) - fTemp109) + ((dsp->iRec87[1]) ? ((iTemp118) ? dsp->fConst4 * fTemp146 * (dsp->fConst0 * (fTemp109 * (dsp->fConst9 * fTemp110 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp109) / mydsp_faustpower3_f(fTemp106))) / fTemp106) + 0.1875f) - 0.5f * fSlow70 * fTemp112 * fTemp152 : 0.0f) : ((iTemp142) ? fSlow68 * fTemp148 * (fTemp147 - 1.0f) - dsp->fConst4 * fTemp146 * (fTemp143 * (0.375f * fTemp147 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp143) / mydsp_faustpower3_f(fTemp144))) / fTemp144 + 0.1875f) : 0.0f));
			float fRec78 = 2.0f * fRec81 + -1.0f;
			dsp->fRec79[0] = 2.0f * fRec80 + -1.0f;
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec79[0]);
			float fTemp153 = dsp->fRec79[0];
			float fTemp154 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec74[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp19 * fTemp103 + fTemp153 * fTemp86)))), 1.0f) + 1.0f));
			float fTemp155 = (0.5f * (dsp->fRec67[0] * fTemp153 + fTemp88 + dsp->fRec66[0] * fRec78) - dsp->fRec73[1]) * fTemp154;
			float fTemp156 = fTemp154 + 1.0f;
			float fTemp157 = 1.0f - fTemp154 / fTemp156;
			float fTemp158 = fTemp154 * ((dsp->fRec73[1] + (fTemp155 + 0.21521576f * fTemp90 * dsp->fRec71[1] * fTemp157 - dsp->fRec72[1]) / fTemp156) / (1.0f - 0.21521576f * (fTemp90 * fTemp154 * fTemp157 / fTemp156)) - dsp->fRec71[1]) / fTemp156;
			float fTemp159 = dsp->fRec71[1] + fTemp158;
			float fRec70 = fTemp159;
			dsp->fRec71[0] = dsp->fRec71[1] + 2.0f * fTemp158;
			dsp->fRec72[0] = dsp->fRec72[1] + 2.0f * (fTemp154 * (0.21521576f * fTemp90 * fTemp159 - dsp->fRec72[1]) / fTemp156);
			dsp->fRec73[0] = dsp->fRec73[1] + 2.0f * (fTemp155 / fTemp156);
			float fTemp160 = fTemp101 * fmaxf(0.0f, fminf(fSlow78 * dsp->fRec75[0], fmaxf(fSlow80 * (fSlow77 - dsp->fRec75[0]) + 1.0f, fSlow79)) * (1.0f - fSlow81 * fTemp100));
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp160);
			dsp->fRec94[0] = 4.4e+02f * fTemp2 * powf(2.0f, 0.083333336f * (fSlow85 + fTemp3)) + fTemp1 * dsp->fRec94[1];
			dsp->iRec96[0] = iSlow86 * (dsp->iRec96[1] + 1);
			float fTemp161 = (float)(dsp->iRec96[0]);
			int iTemp162 = (iSlow86 * (fTemp161 >= dsp->fConst5)) <= 0;
			float fTemp163 = (float)(iTemp162);
			float fTemp164 = fSlow87 * fTemp163;
			dsp->fVec3[0] = fTemp164;
			dsp->fRec95[0] = fTemp163 * (fTemp164 + dsp->fRec95[1]) * (float)(dsp->fVec3[1] >= fTemp164);
			dsp->iRec97[0] = iTemp162 * (fTemp164 == 0.0f) * (dsp->iRec97[1] + 1);
			float fTemp165 = (float)(dsp->iRec97[0]);
			float fTemp166 = ((iSlow86) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp161) : 1.0f);
			float fTemp167 = fmaxf(0.0f, fminf(fSlow16 * dsp->fRec95[0], fmaxf(fSlow20 * (fSlow15 - dsp->fRec95[0]) + 1.0f, fSlow19)) * (1.0f - fSlow21 * fTemp165)) * fTemp166;
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp167);
			float fTemp168 = fTemp167;
			float fTemp169 = ((iSlow25) ? dsp->fRec94[0] * fTemp20 : fTemp21) * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp23 * fTemp168 + fTemp22 + fTemp24));
			float fTemp170 = ((iSlow24) ? fTemp169 : 0.015625f * fTemp169);
			float fTemp171 = fmaxf(0.0f, dsp->fRec94[0] * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp28 * fTemp168 + fTemp27 + fTemp29)) + fTemp30 * fTemp170 * dsp->fRec99[1]);
			float fTemp172 = dsp->fConst4 * fTemp171;
			float fTemp173 = dsp->fRec105[1] + fTemp172;
			float fTemp174 = fmodf(fTemp173, 1.0f);
			float fTemp175 = fTemp174 / fTemp171;
			float fTemp176 = dsp->fConst0 * fTemp175;
			float fTemp177 = 1.0f - fTemp176;
			float fTemp178 = dsp->fRec104[1] + dsp->fConst4 * fTemp170 * fTemp177;
			int iTemp179 = dsp->iRec106[1] == 0;
			float fTemp180 = dsp->fConst4 * fTemp170;
			float fTemp181 = dsp->fConst7 * fTemp170;
			float fTemp182 = ((fTemp180 >= 0.25f) ? 0.5f : fmaxf(fTemp181, fminf(1.0f - fTemp181, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp43 * fTemp168 + fTemp42 + fTemp45 : 1.0f)))));
			int iTemp183 = fTemp173 >= 1.0f;
			int iTemp184 = (fSlow52 + (float)(iTemp183)) == 2.0f;
			int iTemp185 = ((((fTemp178 >= 1.0f) + ((iTemp179 + (fTemp178 >= fTemp182)) == 2)) > 0) + (iTemp184 == 0)) > 0;
			float fTemp186 = dsp->fRec104[1] + fTemp180;
			float fTemp187 = fmodf(fTemp186, 1.0f);
			int iTemp188 = fTemp187 >= fTemp182;
			float fTemp189 = fTemp187 - fTemp182;
			float fTemp190 = fTemp180 + dsp->fRec102[1] - fTemp182;
			float fTemp191 = 1.0f - fTemp182;
			float fTemp192 = fSlow55 * fTemp170 * (1.0f / fTemp191 + 1.0f / fTemp182);
			float fTemp193 = fTemp189 / fTemp190;
			float fTemp194 = 1.0f - fTemp193;
			int iTemp195 = fTemp186 >= 1.0f;
			float fTemp196 = fTemp187 / fTemp170;
			float fTemp197 = dsp->fConst0 * fTemp196;
			float fTemp198 = 1.0f - fTemp197;
			float fTemp199 = mydsp_faustpower2_f(fTemp174);
			float fTemp200 = fmodf(fTemp178, 1.0f);
			int iTemp201 = fTemp200 < fTemp182;
			float fTemp202 = fTemp200 + 2.0f * fSlow54 * (((iTemp201) ? 0.0f : 1.0f) - fTemp200) + fSlow55 * (((iTemp201) ? fTemp200 / fTemp182 : 1.0f - (fTemp200 - fTemp182) / fTemp191) - fTemp200);
			float fTemp203 = mydsp_faustpower2_f(fTemp171);
			float fRec100 = dsp->fRec108[1] + ((iTemp185) ? ((dsp->iRec106[1]) ? ((iTemp195) ? dsp->fConst4 * fTemp192 * (fTemp198 * (0.375f * fTemp198 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp198)) + 0.1875f) - dsp->fConst8 * (fSlow56 * mydsp_faustpower2_f(fTemp187) / mydsp_faustpower2_f(fTemp170)) : 0.0f) : ((iTemp188) ? fSlow54 * mydsp_faustpower2_f(fTemp189) / mydsp_faustpower2_f(fTemp190) - dsp->fConst4 * fTemp192 * (fTemp194 * (0.375f * fTemp194 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp194)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp184) ? dsp->fConst8 * (fTemp199 * fTemp202 / fTemp203) : 0.0f);
			float fTemp204 = dsp->fConst7 * fTemp171;
			float fTemp205 = ((fTemp172 >= 0.25f) ? 0.5f : fmaxf(fTemp204, fminf(1.0f - fTemp204, ((iSlow57) ? fTemp140 + fTemp70 * fTemp168 : 1.0f) + fTemp72 * dsp->fRec99[1])));
			int iTemp206 = fTemp174 >= fTemp205;
			float fTemp207 = fTemp174 - fTemp205;
			float fTemp208 = fTemp172 + dsp->fRec103[1] - fTemp205;
			float fTemp209 = 1.0f - fTemp205;
			float fTemp210 = fSlow69 * fTemp171 * (1.0f / fTemp205 + 1.0f / fTemp209);
			float fTemp211 = fTemp207 / fTemp208;
			float fTemp212 = 1.0f - fTemp211;
			float fRec101 = dsp->fRec109[1] + ((dsp->iRec107[1]) ? ((iTemp183) ? dsp->fConst4 * fTemp210 * (fTemp177 * (0.375f * fTemp177 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp177)) + 0.1875f) - dsp->fConst8 * (fSlow70 * fTemp199 / fTemp203) : 0.0f) : ((iTemp206) ? fSlow68 * mydsp_faustpower2_f(fTemp207) / mydsp_faustpower2_f(fTemp208) - dsp->fConst4 * fTemp210 * (fTemp212 * (0.375f * fTemp212 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp212)) + 0.1875f) : 0.0f));
			dsp->fRec102[0] = fTemp182;
			dsp->fRec103[0] = fTemp205;
			float fTemp213 = ((iTemp184) ? fTemp170 * fTemp174 / fTemp171 : fTemp187);
			dsp->fRec104[0] = fTemp213;
			dsp->fRec105[0] = fTemp174;
			dsp->iRec106[0] = (((iTemp184 + ((dsp->iRec106[1] + iTemp195) == 2) + ((iTemp179 + (fTemp187 < fTemp182)) == 2)) > 0) ? 0 : 1);
			int iTemp214 = fTemp174 < fTemp205;
			dsp->iRec107[0] = (((((iTemp183 + dsp->iRec107[1]) == 2) + (((dsp->iRec107[1] == 0) + iTemp214) == 2)) > 0) ? 0 : 1);
			int iTemp215 = fTemp213 < fTemp182;
			float fTemp216 = fTemp176 - 1.0f;
			dsp->fRec108[0] = fTemp213 + 2.0f * fSlow54 * (((iTemp215) ? 0.0f : 1.0f) - fTemp213) + fSlow55 * (((iTemp215) ? fTemp213 / fTemp182 : 1.0f - (fTemp213 - fTemp182) / fTemp191) - fTemp213) + ((iTemp185) ? ((dsp->iRec106[1]) ? ((iTemp195) ? dsp->fConst4 * fTemp192 * (dsp->fConst0 * (fTemp187 * (dsp->fConst9 * fTemp196 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp187) / mydsp_faustpower3_f(fTemp170))) / fTemp170) + 0.1875f) - 0.5f * fSlow56 * fTemp198 * (fTemp197 - 1.0f) : 0.0f) : ((iTemp188) ? fSlow54 * fTemp194 * (fTemp193 - 1.0f) - dsp->fConst4 * fTemp192 * (fTemp189 * (0.375f * fTemp193 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp189) / mydsp_faustpower3_f(fTemp190))) / fTemp190 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp184) ? 0.5f * fTemp177 * fTemp202 * fTemp216 : 0.0f);
			dsp->fRec109[0] = fTemp174 + 2.0f * fSlow68 * (((iTemp214) ? 0.0f : 1.0f) - fTemp174) + fSlow69 * (((iTemp214) ? fTemp174 / fTemp205 : 1.0f - fTemp207 / fTemp209) - fTemp174) + ((dsp->iRec107[1]) ? ((iTemp183) ? dsp->fConst4 * fTemp210 * (dsp->fConst0 * (fTemp174 * (dsp->fConst9 * fTemp175 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp174) / mydsp_faustpower3_f(fTemp171))) / fTemp171) + 0.1875f) - 0.5f * fSlow70 * fTemp177 * fTemp216 : 0.0f) : ((iTemp206) ? fSlow68 * fTemp212 * (fTemp211 - 1.0f) - dsp->fConst4 * fTemp210 * (fTemp207 * (0.375f * fTemp211 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp207) / mydsp_faustpower3_f(fTemp208))) / fTemp208 + 0.1875f) : 0.0f));
			float fRec98 = 2.0f * fRec101 + -1.0f;
			dsp->fRec99[0] = 2.0f * fRec100 + -1.0f;
			dsp->fVbargraph8 = (FAUSTFLOAT)(dsp->fRec99[0]);
			float fTemp217 = dsp->fRec99[0];
			float fTemp218 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec94[0])) * powf(2.0f, 0.00083333335f * (fTemp5 + 9.6e+03f * (fTemp10 + fTemp19 * fTemp168 + fTemp217 * fTemp86)))), 1.0f) + 1.0f));
			float fTemp219 = (0.5f * (dsp->fRec67[0] * fTemp217 + fTemp88 + dsp->fRec66[0] * fRec98) - dsp->fRec93[1]) * fTemp218;
			float fTemp220 = fTemp218 + 1.0f;
			float fTemp221 = 1.0f - fTemp218 / fTemp220;
			float fTemp222 = fTemp218 * ((dsp->fRec93[1] + (fTemp219 + 0.21521576f * fTemp90 * dsp->fRec91[1] * fTemp221 - dsp->fRec92[1]) / fTemp220) / (1.0f - 0.21521576f * (fTemp90 * fTemp218 * fTemp221 / fTemp220)) - dsp->fRec91[1]) / fTemp220;
			float fTemp223 = dsp->fRec91[1] + fTemp222;
			float fRec90 = fTemp223;
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * fTemp222;
			dsp->fRec92[0] = dsp->fRec92[1] + 2.0f * (fTemp218 * (0.21521576f * fTemp90 * fTemp223 - dsp->fRec92[1]) / fTemp220);
			dsp->fRec93[0] = dsp->fRec93[1] + 2.0f * (fTemp219 / fTemp220);
			float fTemp224 = fTemp166 * fmaxf(0.0f, fminf(fSlow78 * dsp->fRec95[0], fmaxf(fSlow80 * (fSlow77 - dsp->fRec95[0]) + 1.0f, fSlow79)) * (1.0f - fSlow81 * fTemp165));
			dsp->fVbargraph9 = (FAUSTFLOAT)(fTemp224);
			float fTemp225 = 0.33f * (fRec0 * fTemp95 + fRec70 * fTemp160 + fRec90 * fTemp224);
			output0[i0] = (FAUSTFLOAT)(fTemp225);
			output1[i0] = (FAUSTFLOAT)(fTemp225);
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
			dsp->iRec17[1] = dsp->iRec17[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->iRec18[1] = dsp->iRec18[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec20[1] = dsp->fRec20[0];
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
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->iRec29[1] = dsp->iRec29[0];
			dsp->iRec30[1] = dsp->iRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->iRec76[1] = dsp->iRec76[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->iRec77[1] = dsp->iRec77[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->iRec86[1] = dsp->iRec86[0];
			dsp->iRec87[1] = dsp->iRec87[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->iRec96[1] = dsp->iRec96[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->iRec97[1] = dsp->iRec97[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->iRec106[1] = dsp->iRec106[0];
			dsp->iRec107[1] = dsp->iRec107[0];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec93[1] = dsp->fRec93[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
