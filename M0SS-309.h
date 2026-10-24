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

typedef struct {
	int iRec6[2];
} mydspSIG0;

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)calloc(1, sizeof(mydspSIG0)); }
static void deletemydspSIG0(mydspSIG0* dsp) { free(dsp); }

int getNumInputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 1;
}

static void instanceInitmydspSIG0(mydspSIG0* dsp, int sample_rate) {
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->iRec6[l2] = 0;
		}
	}
}

static void fillmydspSIG0(mydspSIG0* dsp, int count, float* table) {
	/* C99 loop */
	{
		int i1;
		for (i1 = 0; i1 < count; i1 = i1 + 1) {
			dsp->iRec6[0] = dsp->iRec6[1] + 1;
			table[i1] = powf(2.0f, fminf(127.0f, (float)(dsp->iRec6[0] + -1) + -126.0f));
			dsp->iRec6[1] = dsp->iRec6[0];
		}
	}
}

static float ftbl0mydspSIG0[256];
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
	float fRec0[2];
	float fRec1[2];
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
	float fRec70[2];
	float fRec71[2];
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
	float fRec90[2];
	float fRec91[2];
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
	mydspSIG0* sig0 = newmydspSIG0();
	instanceInitmydspSIG0(sig0, sample_rate);
	fillmydspSIG0(sig0, 256, ftbl0mydspSIG0);
	deletemydspSIG0(sig0);
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
	dsp->fHslider59 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider60 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider61 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider62 = (FAUSTFLOAT)(0.0f);
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
			dsp->fRec0[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec1[l66] = 0.0f;
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
			dsp->fRec70[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec71[l83] = 0.0f;
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
			dsp->fRec90[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec91[l100] = 0.0f;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider59, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider62, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider62, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider61, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	float fSlow2 = (float)(dsp->fHslider4);
	int iSlow3 = fabsf(fSlow2) < 1.1920929e-07f;
	float fSlow4 = ((iSlow3) ? 0.0f : expf(-(dsp->fConst4 / ((iSlow3) ? 1.0f : fSlow2))));
	float fSlow5 = powf(2.0f, 0.083333336f * ((fSlow1 > 0.0f) ? fSlow1 * (float)(dsp->fHslider3) : fSlow1 * (float)(dsp->fHslider2))) * (1.0f - fSlow4);
	float fSlow6 = (float)(dsp->fHslider5);
	float fSlow7 = dsp->fConst2 * (float)(dsp->fHslider6);
	float fSlow8 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow9 = dsp->fConst2 * (float)(dsp->fHslider8);
	float fSlow10 = dsp->fConst2 * (float)(dsp->fHslider9);
	float fSlow11 = (float)(dsp->fHslider10);
	int iSlow12 = fSlow11 >= 2.0f;
	int iSlow13 = fSlow11 >= 1.0f;
	float fSlow14 = dsp->fConst2 * (float)(dsp->fHslider11);
	float fSlow15 = dsp->fConst2 * (float)(dsp->fHslider12);
	float fSlow16 = dsp->fConst2 * (float)(dsp->fHslider13);
	float fSlow17 = fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider14)) + 0.001f));
	float fSlow18 = 1.0f / fSlow17;
	int iSlow19 = (float)(dsp->fButton0) > 0.0f;
	float fSlow20 = (float)(dsp->fButton1);
	float fSlow21 = (float)(dsp->fHslider15);
	float fSlow22 = (1.0f - fSlow21) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider16)) + 0.001f));
	float fSlow23 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider17)) + 0.001f));
	float fSlow24 = dsp->fConst2 * (float)(dsp->fHslider18);
	float fSlow25 = dsp->fConst2 * (float)(dsp->fHslider19);
	int iSlow26 = (float)(dsp->fHslider20) >= 1.0f;
	int iSlow27 = (float)(dsp->fHslider21) >= 1.0f;
	float fSlow28 = 1e+02f * (float)(dsp->fHslider22);
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
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow42 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow43 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow44 = (float)(dsp->fHslider38);
	int iSlow45 = fSlow44 >= 2.0f;
	int iSlow46 = fSlow44 >= 1.0f;
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider41);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider42);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider43);
	float fSlow52 = dsp->fConst2 * (float)(dsp->fHslider44);
	float fSlow53 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow54 = (float)(dsp->fHslider46);
	float fSlow55 = (float)(((iSlow45) ? 0 : ((iSlow46) ? 1 : 0)));
	float fSlow56 = fmaxf(fSlow55 + -0.5f, 0.0f);
	float fSlow57 = fmaxf(1.0f - 2.0f * fSlow55, 0.0f);
	float fSlow58 = 1.0f - fSlow57;
	int iSlow59 = (float)(dsp->fHslider47) >= 1.0f;
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow65 = dsp->fConst2 * (float)(dsp->fHslider53);
	float fSlow66 = dsp->fConst2 * (float)(dsp->fHslider54);
	float fSlow67 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow68 = dsp->fConst2 * (float)(dsp->fHslider56);
	float fSlow69 = (float)(((iSlow59) ? 1 : 0));
	float fSlow70 = fmaxf(fSlow69 + -0.5f, 0.0f);
	float fSlow71 = fmaxf(1.0f - 2.0f * fSlow69, 0.0f);
	float fSlow72 = 1.0f - fSlow71;
	float fSlow73 = dsp->fConst2 * (float)(dsp->fHslider57);
	float fSlow74 = dsp->fConst2 * (float)(dsp->fHslider58);
	float fSlow75 = dsp->fConst2 * (float)(dsp->fHslider59);
	float fSlow76 = dsp->fConst2 * (float)(dsp->fHslider60);
	float fSlow77 = dsp->fConst2 * (float)(dsp->fHslider61);
	float fSlow78 = dsp->fConst2 * (float)(dsp->fHslider62);
	float fSlow79 = fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider63)) + 0.001f));
	float fSlow80 = 1.0f / fSlow79;
	float fSlow81 = (float)(dsp->fHslider64);
	float fSlow82 = (1.0f - fSlow81) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider65)) + 0.001f));
	float fSlow83 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider66)) + 0.001f));
	float fSlow84 = (float)(dsp->fHslider67);
	int iSlow85 = (float)(dsp->fButton2) > 0.0f;
	float fSlow86 = (float)(dsp->fButton3);
	float fSlow87 = (float)(dsp->fHslider68);
	int iSlow88 = (float)(dsp->fButton4) > 0.0f;
	float fSlow89 = (float)(dsp->fButton5);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow0 + dsp->fConst3 * dsp->fRec4[1];
			dsp->fRec7[0] = fSlow7 + dsp->fConst3 * dsp->fRec7[1];
			float fTemp0 = dsp->fRec7[0] + -69.0f;
			float fTemp1 = 0.083333336f * (fSlow6 + fTemp0);
			float fTemp2 = ((fTemp1 >= -126.0f) ? ((fTemp1 <= 127.0f) ? fTemp1 : 127.0f) : -126.0f);
			int iTemp3 = (int)(fTemp2 + ((fTemp2 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp4 = fTemp2 - (float)(iTemp3);
			dsp->fRec5[0] = 4.4e+02f * fSlow5 * ftbl0mydspSIG0[(iTemp3 + 126) & 255] * (fTemp4 * (fTemp4 * (fTemp4 * (fTemp4 * (fTemp4 * (0.0001540353f * fTemp4 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fSlow4 * dsp->fRec5[1];
			dsp->iRec8[0] = 1103515245 * dsp->iRec8[1] + 12345;
			float fTemp5 = (float)(dsp->iRec8[0]);
			dsp->fRec9[0] = fSlow8 + dsp->fConst3 * dsp->fRec9[1];
			dsp->fRec10[0] = fSlow9 + dsp->fConst3 * dsp->fRec10[1];
			dsp->fRec11[0] = fSlow10 + dsp->fConst3 * dsp->fRec11[1];
			float fTemp6 = 1.1175871e-06f * fTemp5 * (dsp->fRec9[0] * fabsf(dsp->fRec9[0]) + dsp->fRec10[0] * dsp->fRec11[0] * fabsf(dsp->fRec11[0]));
			dsp->fRec13[0] = fSlow14 + dsp->fConst3 * dsp->fRec13[1];
			float fTemp7 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec12[1] + dsp->fConst4 * dsp->fRec13[0]);
			dsp->fRec12[0] = fTemp7 - floorf(fTemp7);
			float fTemp8 = 2.0f * dsp->fRec12[0] + -1.0f;
			float fTemp9 = ((iSlow12) ? 2.0f * (1.0f - fabsf(fTemp8)) + -1.0f : ((iSlow13) ? 2.0f * (float)(dsp->fRec12[0] <= 0.5f) + -1.0f : fTemp8));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp9);
			float fTemp10 = fTemp9;
			dsp->fRec14[0] = fSlow15 + dsp->fConst3 * dsp->fRec14[1];
			dsp->fRec15[0] = fSlow16 + dsp->fConst3 * dsp->fRec15[1];
			float fTemp11 = fTemp10 * (dsp->fRec14[0] * fabsf(dsp->fRec14[0]) + dsp->fRec10[0] * dsp->fRec15[0] * fabsf(dsp->fRec15[0]));
			dsp->iRec17[0] = iSlow19 * (dsp->iRec17[1] + 1);
			float fTemp12 = (float)(dsp->iRec17[0]);
			int iTemp13 = (iSlow19 * (fTemp12 >= dsp->fConst5)) <= 0;
			float fTemp14 = (float)(iTemp13);
			float fTemp15 = fSlow20 * fTemp14;
			dsp->fVec1[0] = fTemp15;
			dsp->fRec16[0] = fTemp14 * (fTemp15 + dsp->fRec16[1]) * (float)(dsp->fVec1[1] >= fTemp15);
			dsp->iRec18[0] = iTemp13 * (fTemp15 == 0.0f) * (dsp->iRec18[1] + 1);
			float fTemp16 = (float)(dsp->iRec18[0]);
			float fTemp17 = ((iSlow19) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp12) : 1.0f);
			float fTemp18 = fmaxf(0.0f, fminf(fSlow18 * dsp->fRec16[0], fmaxf(fSlow22 * (fSlow17 - dsp->fRec16[0]) + 1.0f, fSlow21)) * (1.0f - fSlow23 * fTemp16)) * fTemp17;
			dsp->fVbargraph1 = (FAUSTFLOAT)(fTemp18);
			float fTemp19 = fTemp18;
			dsp->fRec19[0] = fSlow24 + dsp->fConst3 * dsp->fRec19[1];
			dsp->fRec20[0] = fSlow25 + dsp->fConst3 * dsp->fRec20[1];
			float fTemp20 = dsp->fRec19[0] * fabsf(dsp->fRec19[0]) + dsp->fRec10[0] * dsp->fRec20[0] * fabsf(dsp->fRec20[0]);
			dsp->fRec33[0] = fSlow29 + dsp->fConst3 * dsp->fRec33[1];
			float fTemp21 = 0.00083333335f * (fSlow28 + dsp->fRec33[0]);
			float fTemp22 = ((fTemp21 >= -126.0f) ? ((fTemp21 <= 127.0f) ? fTemp21 : 127.0f) : -126.0f);
			int iTemp23 = (int)(fTemp22 + ((fTemp22 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp24 = ftbl0mydspSIG0[(iTemp23 + 126) & 255];
			float fTemp25 = fTemp22 - (float)(iTemp23);
			float fTemp26 = fTemp25 * (fTemp25 * (fTemp25 * (fTemp25 * (fTemp25 * (0.0001540353f * fTemp25 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f;
			float fTemp27 = 0.083333336f * fTemp0;
			float fTemp28 = ((fTemp27 >= -126.0f) ? ((fTemp27 <= 127.0f) ? fTemp27 : 127.0f) : -126.0f);
			int iTemp29 = (int)(fTemp28 + ((fTemp28 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp30 = fTemp28 - (float)(iTemp29);
			float fTemp31 = fTemp24 * fTemp26 * (4.4e+02f * ftbl0mydspSIG0[(iTemp29 + 126) & 255] * (fTemp30 * (fTemp30 * (fTemp30 * (fTemp30 * (fTemp30 * (0.0001540353f * fTemp30 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + 261.0f);
			dsp->fRec34[0] = fSlow30 + dsp->fConst3 * dsp->fRec34[1];
			dsp->fRec35[0] = fSlow31 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp32 = 2.4e+03f * fTemp10 * (dsp->fRec34[0] * fabsf(dsp->fRec34[0]) + dsp->fRec10[0] * dsp->fRec35[0] * fabsf(dsp->fRec35[0]));
			dsp->fRec36[0] = fSlow32 + dsp->fConst3 * dsp->fRec36[1];
			dsp->fRec37[0] = fSlow33 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp33 = dsp->fRec36[0] * fabsf(dsp->fRec36[0]) + dsp->fRec10[0] * dsp->fRec37[0] * fabsf(dsp->fRec37[0]);
			dsp->fRec38[0] = fSlow34 + dsp->fConst3 * dsp->fRec38[1];
			dsp->fRec39[0] = fSlow35 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp34 = 5.5879354e-07f * fTemp5 * (dsp->fRec38[0] * fabsf(dsp->fRec38[0]) + dsp->fRec10[0] * dsp->fRec39[0] * fabsf(dsp->fRec39[0]));
			float fTemp35 = 0.00083333335f * (fTemp32 + 1.2e+03f * fTemp19 * fTemp33 + fTemp34);
			float fTemp36 = ((fTemp35 >= -126.0f) ? ((fTemp35 <= 127.0f) ? fTemp35 : 127.0f) : -126.0f);
			int iTemp37 = (int)(fTemp36 + ((fTemp36 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp38 = fTemp36 - (float)(iTemp37);
			float fTemp39 = ((iSlow27) ? dsp->fRec5[0] * fTemp24 * fTemp26 : fTemp31) * ftbl0mydspSIG0[(iTemp37 + 126) & 255] * (fTemp38 * (fTemp38 * (fTemp38 * (fTemp38 * (fTemp38 * (0.0001540353f * fTemp38 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f);
			float fTemp40 = ((iSlow26) ? fTemp39 : 0.015625f * fTemp39);
			dsp->fRec40[0] = fSlow36 + dsp->fConst3 * dsp->fRec40[1];
			dsp->fRec41[0] = fSlow37 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp41 = 2.4e+03f * (dsp->fRec40[0] * fabsf(dsp->fRec40[0]) + dsp->fRec41[0] * fabsf(dsp->fRec41[0]) * dsp->fRec10[0]) * fTemp10;
			dsp->fRec42[0] = fSlow38 + dsp->fConst3 * dsp->fRec42[1];
			dsp->fRec43[0] = fSlow39 + dsp->fConst3 * dsp->fRec43[1];
			float fTemp42 = dsp->fRec42[0] * fabsf(dsp->fRec42[0]) + dsp->fRec10[0] * dsp->fRec43[0] * fabsf(dsp->fRec43[0]);
			dsp->fRec44[0] = fSlow40 + dsp->fConst3 * dsp->fRec44[1];
			dsp->fRec45[0] = fSlow41 + dsp->fConst3 * dsp->fRec45[1];
			float fTemp43 = 5.5879354e-07f * fTemp5 * (dsp->fRec44[0] * fabsf(dsp->fRec44[0]) + dsp->fRec10[0] * dsp->fRec45[0] * fabsf(dsp->fRec45[0]));
			float fTemp44 = 0.00083333335f * (fTemp41 + 1.2e+03f * fTemp19 * fTemp42 + fTemp43);
			float fTemp45 = ((fTemp44 >= -126.0f) ? ((fTemp44 <= 127.0f) ? fTemp44 : 127.0f) : -126.0f);
			int iTemp46 = (int)(fTemp45 + ((fTemp45 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp47 = fTemp45 - (float)(iTemp46);
			dsp->fRec46[0] = fSlow42 + dsp->fConst3 * dsp->fRec46[1];
			dsp->fRec47[0] = fSlow43 + dsp->fConst3 * dsp->fRec47[1];
			float fTemp48 = dsp->fRec46[0] * fabsf(dsp->fRec46[0]) + dsp->fRec10[0] * dsp->fRec47[0] * fabsf(dsp->fRec47[0]);
			float fTemp49 = fmaxf(0.0f, dsp->fRec5[0] * ftbl0mydspSIG0[(iTemp46 + 126) & 255] * (fTemp47 * (fTemp47 * (fTemp47 * (fTemp47 * (fTemp47 * (0.0001540353f * fTemp47 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fTemp40 * dsp->fRec22[1] * fTemp48);
			float fTemp50 = dsp->fConst4 * fTemp49;
			float fTemp51 = dsp->fRec28[1] + fTemp50;
			float fTemp52 = fmodf(fTemp51, 1.0f);
			float fTemp53 = fTemp52 / fTemp49;
			float fTemp54 = dsp->fConst0 * fTemp53;
			float fTemp55 = 1.0f - fTemp54;
			float fTemp56 = dsp->fRec27[1] + dsp->fConst4 * fTemp40 * fTemp55;
			int iTemp57 = dsp->iRec29[1] == 0;
			float fTemp58 = dsp->fConst4 * fTemp40;
			float fTemp59 = dsp->fConst7 * fTemp40;
			dsp->fRec48[0] = fSlow47 + dsp->fConst3 * dsp->fRec48[1];
			dsp->fRec49[0] = fSlow48 + dsp->fConst3 * dsp->fRec49[1];
			float fTemp60 = 4.656613e-10f * fTemp5 * (dsp->fRec48[0] * fabsf(dsp->fRec48[0]) + dsp->fRec10[0] * dsp->fRec49[0] * fabsf(dsp->fRec49[0]));
			dsp->fRec50[0] = fSlow49 + dsp->fConst3 * dsp->fRec50[1];
			dsp->fRec51[0] = fSlow50 + dsp->fConst3 * dsp->fRec51[1];
			float fTemp61 = dsp->fRec50[0] * fabsf(dsp->fRec50[0]) + dsp->fRec10[0] * dsp->fRec51[0] * fabsf(dsp->fRec51[0]);
			dsp->fRec52[0] = fSlow51 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow52 + dsp->fConst3 * dsp->fRec53[1];
			dsp->fRec54[0] = fSlow53 + dsp->fConst3 * dsp->fRec54[1];
			float fTemp62 = dsp->fRec52[0] + fTemp10 * (dsp->fRec53[0] * fabsf(dsp->fRec53[0]) + dsp->fRec10[0] * dsp->fRec54[0] * fabsf(dsp->fRec54[0]));
			float fTemp63 = ((fTemp58 >= 0.25f) ? 0.5f : fmaxf(fTemp59, fminf(1.0f - fTemp59, ((iSlow45) ? 0.5f : ((iSlow46) ? fTemp60 + fTemp19 * fTemp61 + fTemp62 : 1.0f)))));
			int iTemp64 = fTemp51 >= 1.0f;
			int iTemp65 = (fSlow54 + (float)(iTemp64)) == 2.0f;
			int iTemp66 = ((((fTemp56 >= 1.0f) + ((iTemp57 + (fTemp56 >= fTemp63)) == 2)) > 0) + (iTemp65 == 0)) > 0;
			float fTemp67 = dsp->fRec27[1] + fTemp58;
			float fTemp68 = fmodf(fTemp67, 1.0f);
			int iTemp69 = fTemp68 >= fTemp63;
			float fTemp70 = fTemp68 - fTemp63;
			float fTemp71 = fTemp58 + dsp->fRec25[1] - fTemp63;
			float fTemp72 = 1.0f - fTemp63;
			float fTemp73 = fTemp40 * fSlow57 * (1.0f / fTemp72 + 1.0f / fTemp63);
			float fTemp74 = fTemp70 / fTemp71;
			float fTemp75 = 1.0f - fTemp74;
			int iTemp76 = fTemp67 >= 1.0f;
			float fTemp77 = fTemp68 / fTemp40;
			float fTemp78 = dsp->fConst0 * fTemp77;
			float fTemp79 = 1.0f - fTemp78;
			float fTemp80 = mydsp_faustpower2_f(fTemp52);
			float fTemp81 = fmodf(fTemp56, 1.0f);
			int iTemp82 = fTemp81 < fTemp63;
			float fTemp83 = fTemp81 + 2.0f * (((iTemp82) ? 0.0f : 1.0f) - fTemp81) * fSlow56 + (((iTemp82) ? fTemp81 / fTemp63 : 1.0f - (fTemp81 - fTemp63) / fTemp72) - fTemp81) * fSlow57;
			float fTemp84 = mydsp_faustpower2_f(fTemp49);
			float fRec23 = dsp->fRec31[1] + ((iTemp66) ? ((dsp->iRec29[1]) ? ((iTemp76) ? dsp->fConst4 * fTemp73 * (fTemp79 * (0.375f * fTemp79 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp79)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp68) * fSlow58 / mydsp_faustpower2_f(fTemp40)) : 0.0f) : ((iTemp69) ? fSlow56 * mydsp_faustpower2_f(fTemp70) / mydsp_faustpower2_f(fTemp71) - dsp->fConst4 * fTemp73 * (fTemp75 * (0.375f * fTemp75 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp75)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp65) ? dsp->fConst8 * (fTemp80 * fTemp83 / fTemp84) : 0.0f);
			float fTemp85 = dsp->fConst7 * fTemp49;
			dsp->fRec55[0] = fSlow60 + dsp->fConst3 * dsp->fRec55[1];
			dsp->fRec56[0] = fSlow61 + dsp->fConst3 * dsp->fRec56[1];
			float fTemp86 = fTemp10 * (dsp->fRec55[0] * fabsf(dsp->fRec55[0]) + dsp->fRec10[0] * dsp->fRec56[0] * fabsf(dsp->fRec56[0]));
			dsp->fRec57[0] = fSlow62 + dsp->fConst3 * dsp->fRec57[1];
			dsp->fRec58[0] = fSlow63 + dsp->fConst3 * dsp->fRec58[1];
			float fTemp87 = 4.656613e-10f * fTemp5 * (dsp->fRec57[0] * fabsf(dsp->fRec57[0]) + dsp->fRec10[0] * dsp->fRec58[0] * fabsf(dsp->fRec58[0]));
			dsp->fRec59[0] = fSlow64 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow65 + dsp->fConst3 * dsp->fRec60[1];
			dsp->fRec61[0] = fSlow66 + dsp->fConst3 * dsp->fRec61[1];
			float fTemp88 = dsp->fRec60[0] * fabsf(dsp->fRec60[0]) + dsp->fRec10[0] * dsp->fRec61[0] * fabsf(dsp->fRec61[0]);
			dsp->fRec62[0] = fSlow67 + dsp->fConst3 * dsp->fRec62[1];
			dsp->fRec63[0] = fSlow68 + dsp->fConst3 * dsp->fRec63[1];
			float fTemp89 = dsp->fRec62[0] * fabsf(dsp->fRec62[0]) + dsp->fRec10[0] * dsp->fRec63[0] * fabsf(dsp->fRec63[0]);
			float fTemp90 = ((fTemp50 >= 0.25f) ? 0.5f : fmaxf(fTemp85, fminf(1.0f - fTemp85, ((iSlow59) ? fTemp86 + fTemp87 + dsp->fRec59[0] + fTemp19 * fTemp88 : 1.0f) + dsp->fRec22[1] * fTemp89)));
			int iTemp91 = fTemp52 >= fTemp90;
			float fTemp92 = fTemp52 - fTemp90;
			float fTemp93 = fTemp50 + dsp->fRec26[1] - fTemp90;
			float fTemp94 = 1.0f - fTemp90;
			float fTemp95 = fTemp49 * (1.0f / fTemp90 + 1.0f / fTemp94) * fSlow71;
			float fTemp96 = fTemp92 / fTemp93;
			float fTemp97 = 1.0f - fTemp96;
			float fRec24 = dsp->fRec32[1] + ((dsp->iRec30[1]) ? ((iTemp64) ? dsp->fConst4 * fTemp95 * (fTemp55 * (0.375f * fTemp55 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp55)) + 0.1875f) - dsp->fConst8 * (fTemp80 * fSlow72 / fTemp84) : 0.0f) : ((iTemp91) ? fSlow70 * mydsp_faustpower2_f(fTemp92) / mydsp_faustpower2_f(fTemp93) - dsp->fConst4 * fTemp95 * (fTemp97 * (0.375f * fTemp97 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp97)) + 0.1875f) : 0.0f));
			dsp->fRec25[0] = fTemp63;
			dsp->fRec26[0] = fTemp90;
			float fTemp98 = ((iTemp65) ? fTemp40 * fTemp52 / fTemp49 : fTemp68);
			dsp->fRec27[0] = fTemp98;
			dsp->fRec28[0] = fTemp52;
			dsp->iRec29[0] = (((iTemp65 + ((dsp->iRec29[1] + iTemp76) == 2) + ((iTemp57 + (fTemp68 < fTemp63)) == 2)) > 0) ? 0 : 1);
			int iTemp99 = fTemp52 < fTemp90;
			dsp->iRec30[0] = (((((iTemp64 + dsp->iRec30[1]) == 2) + (((dsp->iRec30[1] == 0) + iTemp99) == 2)) > 0) ? 0 : 1);
			int iTemp100 = fTemp98 < fTemp63;
			float fTemp101 = fTemp54 - 1.0f;
			dsp->fRec31[0] = fTemp98 + 2.0f * fSlow56 * (((iTemp100) ? 0.0f : 1.0f) - fTemp98) + fSlow57 * (((iTemp100) ? fTemp98 / fTemp63 : 1.0f - (fTemp98 - fTemp63) / fTemp72) - fTemp98) + ((iTemp66) ? ((dsp->iRec29[1]) ? ((iTemp76) ? dsp->fConst4 * fTemp73 * (dsp->fConst0 * (fTemp68 * (dsp->fConst9 * fTemp77 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp68) / mydsp_faustpower3_f(fTemp40))) / fTemp40) + 0.1875f) - 0.5f * fTemp79 * fSlow58 * (fTemp78 - 1.0f) : 0.0f) : ((iTemp69) ? fSlow56 * fTemp75 * (fTemp74 - 1.0f) - dsp->fConst4 * fTemp73 * (fTemp70 * (0.375f * fTemp74 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp70) / mydsp_faustpower3_f(fTemp71))) / fTemp71 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp65) ? 0.5f * fTemp55 * fTemp83 * fTemp101 : 0.0f);
			dsp->fRec32[0] = fTemp52 + 2.0f * fSlow70 * (((iTemp99) ? 0.0f : 1.0f) - fTemp52) + fSlow71 * (((iTemp99) ? fTemp52 / fTemp90 : 1.0f - fTemp92 / fTemp94) - fTemp52) + ((dsp->iRec30[1]) ? ((iTemp64) ? dsp->fConst4 * fTemp95 * (dsp->fConst0 * (fTemp52 * (dsp->fConst9 * fTemp53 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp52) / mydsp_faustpower3_f(fTemp49))) / fTemp49) + 0.1875f) - 0.5f * fTemp55 * fSlow72 * fTemp101 : 0.0f) : ((iTemp91) ? fSlow70 * fTemp97 * (fTemp96 - 1.0f) - dsp->fConst4 * fTemp95 * (fTemp92 * (0.375f * fTemp96 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp92) / mydsp_faustpower3_f(fTemp93))) / fTemp93 + 0.1875f) : 0.0f));
			float fRec21 = 2.0f * fRec24 + -1.0f;
			dsp->fRec22[0] = 2.0f * fRec23 + -1.0f;
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec22[0]);
			float fTemp102 = dsp->fRec22[0];
			dsp->fRec64[0] = fSlow73 + dsp->fConst3 * dsp->fRec64[1];
			dsp->fRec65[0] = fSlow74 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp103 = dsp->fRec64[0] * fabsf(dsp->fRec64[0]) + dsp->fRec10[0] * dsp->fRec65[0] * fabsf(dsp->fRec65[0]);
			float fTemp104 = 0.00083333335f * (fTemp6 + 9.6e+03f * (fTemp11 + fTemp19 * fTemp20 + fTemp102 * fTemp103));
			float fTemp105 = ((fTemp104 >= -126.0f) ? ((fTemp104 <= 127.0f) ? fTemp104 : 127.0f) : -126.0f);
			int iTemp106 = (int)(fTemp105 + ((fTemp105 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp107 = fTemp105 - (float)(iTemp106);
			float fTemp108 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec5[0])) * ftbl0mydspSIG0[(iTemp106 + 126) & 255] * (fTemp107 * (fTemp107 * (fTemp107 * (fTemp107 * (fTemp107 * (0.0001540353f * fTemp107 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f)), 1.0f) + 1.0f));
			dsp->fRec66[0] = fSlow75 + dsp->fConst3 * dsp->fRec66[1];
			float fTemp109 = dsp->fRec66[0] + -0.707f;
			dsp->fRec67[0] = fSlow76 + dsp->fConst3 * dsp->fRec67[1];
			dsp->fRec68[0] = fSlow77 + dsp->fConst3 * dsp->fRec68[1];
			dsp->fRec69[0] = fSlow78 + dsp->fConst3 * dsp->fRec69[1];
			float fTemp110 = 4.656613e-10f * dsp->fRec69[0] * fTemp5;
			float fTemp111 = (0.5f * (fTemp102 * dsp->fRec67[0] + fRec21 * dsp->fRec68[0] + fTemp110) - dsp->fRec1[1]) * fTemp108;
			float fTemp112 = fTemp108 + 1.0f;
			float fTemp113 = fTemp108 / fTemp112;
			float fTemp114 = fTemp108 * ((dsp->fRec1[1] - (dsp->fRec0[1] - (fTemp111 + 0.21521576f * dsp->fRec3[1] * fTemp109 * (1.0f - fTemp113))) / fTemp112) / (0.21521576f * (fTemp108 * fTemp109 * (fTemp113 + -1.0f) / fTemp112) + 1.0f) - dsp->fRec3[1]) / fTemp112;
			float fTemp115 = dsp->fRec3[1] + fTemp114;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * (fTemp108 * (0.21521576f * fTemp109 * fTemp115 - dsp->fRec0[1]) / fTemp112);
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp111 / fTemp112);
			float fRec2 = fTemp115;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp114;
			float fTemp116 = fTemp17 * fmaxf(0.0f, fminf(fSlow80 * dsp->fRec16[0], fmaxf(fSlow82 * (fSlow79 - dsp->fRec16[0]) + 1.0f, fSlow81)) * (1.0f - fSlow83 * fTemp16));
			dsp->fVbargraph3 = (FAUSTFLOAT)(fTemp116);
			float fTemp117 = 0.083333336f * (fSlow84 + fTemp0);
			float fTemp118 = ((fTemp117 >= -126.0f) ? ((fTemp117 <= 127.0f) ? fTemp117 : 127.0f) : -126.0f);
			int iTemp119 = (int)(fTemp118 + ((fTemp118 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp120 = fTemp118 - (float)(iTemp119);
			dsp->fRec74[0] = 4.4e+02f * fSlow5 * ftbl0mydspSIG0[(iTemp119 + 126) & 255] * (fTemp120 * (fTemp120 * (fTemp120 * (fTemp120 * (fTemp120 * (0.0001540353f * fTemp120 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fSlow4 * dsp->fRec74[1];
			dsp->iRec76[0] = iSlow85 * (dsp->iRec76[1] + 1);
			float fTemp121 = (float)(dsp->iRec76[0]);
			int iTemp122 = (iSlow85 * (fTemp121 >= dsp->fConst5)) <= 0;
			float fTemp123 = (float)(iTemp122);
			float fTemp124 = fSlow86 * fTemp123;
			dsp->fVec2[0] = fTemp124;
			dsp->fRec75[0] = fTemp123 * (fTemp124 + dsp->fRec75[1]) * (float)(dsp->fVec2[1] >= fTemp124);
			dsp->iRec77[0] = iTemp122 * (fTemp124 == 0.0f) * (dsp->iRec77[1] + 1);
			float fTemp125 = (float)(dsp->iRec77[0]);
			float fTemp126 = ((iSlow85) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp121) : 1.0f);
			float fTemp127 = fmaxf(0.0f, fminf(fSlow18 * dsp->fRec75[0], fmaxf(fSlow22 * (fSlow17 - dsp->fRec75[0]) + 1.0f, fSlow21)) * (1.0f - fSlow23 * fTemp125)) * fTemp126;
			dsp->fVbargraph4 = (FAUSTFLOAT)(fTemp127);
			float fTemp128 = fTemp127;
			float fTemp129 = 0.00083333335f * (1.2e+03f * fTemp33 * fTemp128 + fTemp32 + fTemp34);
			float fTemp130 = ((fTemp129 >= -126.0f) ? ((fTemp129 <= 127.0f) ? fTemp129 : 127.0f) : -126.0f);
			int iTemp131 = (int)(fTemp130 + ((fTemp130 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp132 = fTemp130 - (float)(iTemp131);
			float fTemp133 = ((iSlow27) ? dsp->fRec74[0] * fTemp24 * fTemp26 : fTemp31) * ftbl0mydspSIG0[(iTemp131 + 126) & 255] * (fTemp132 * (fTemp132 * (fTemp132 * (fTemp132 * (fTemp132 * (0.0001540353f * fTemp132 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f);
			float fTemp134 = ((iSlow26) ? fTemp133 : 0.015625f * fTemp133);
			float fTemp135 = 0.00083333335f * (fTemp43 + fTemp41 + 1.2e+03f * fTemp42 * fTemp128);
			float fTemp136 = ((fTemp135 >= -126.0f) ? ((fTemp135 <= 127.0f) ? fTemp135 : 127.0f) : -126.0f);
			int iTemp137 = (int)(fTemp136 + ((fTemp136 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp138 = fTemp136 - (float)(iTemp137);
			float fTemp139 = fmaxf(0.0f, dsp->fRec74[0] * ftbl0mydspSIG0[(iTemp137 + 126) & 255] * (fTemp138 * (fTemp138 * (fTemp138 * (fTemp138 * (fTemp138 * (0.0001540353f * fTemp138 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fTemp48 * fTemp134 * dsp->fRec79[1]);
			float fTemp140 = dsp->fConst4 * fTemp139;
			float fTemp141 = dsp->fRec85[1] + fTemp140;
			float fTemp142 = fmodf(fTemp141, 1.0f);
			float fTemp143 = fTemp142 / fTemp139;
			float fTemp144 = dsp->fConst0 * fTemp143;
			float fTemp145 = 1.0f - fTemp144;
			float fTemp146 = dsp->fRec84[1] + dsp->fConst4 * fTemp134 * fTemp145;
			int iTemp147 = dsp->iRec86[1] == 0;
			float fTemp148 = dsp->fConst4 * fTemp134;
			float fTemp149 = dsp->fConst7 * fTemp134;
			float fTemp150 = ((fTemp148 >= 0.25f) ? 0.5f : fmaxf(fTemp149, fminf(1.0f - fTemp149, ((iSlow45) ? 0.5f : ((iSlow46) ? fTemp61 * fTemp128 + fTemp60 + fTemp62 : 1.0f)))));
			int iTemp151 = fTemp141 >= 1.0f;
			int iTemp152 = (fSlow54 + (float)(iTemp151)) == 2.0f;
			int iTemp153 = ((((fTemp146 >= 1.0f) + ((iTemp147 + (fTemp146 >= fTemp150)) == 2)) > 0) + (iTemp152 == 0)) > 0;
			float fTemp154 = dsp->fRec84[1] + fTemp148;
			float fTemp155 = fmodf(fTemp154, 1.0f);
			int iTemp156 = fTemp155 >= fTemp150;
			float fTemp157 = fTemp155 - fTemp150;
			float fTemp158 = fTemp148 + dsp->fRec82[1] - fTemp150;
			float fTemp159 = 1.0f - fTemp150;
			float fTemp160 = fSlow57 * fTemp134 * (1.0f / fTemp159 + 1.0f / fTemp150);
			float fTemp161 = fTemp157 / fTemp158;
			float fTemp162 = 1.0f - fTemp161;
			int iTemp163 = fTemp154 >= 1.0f;
			float fTemp164 = fTemp155 / fTemp134;
			float fTemp165 = dsp->fConst0 * fTemp164;
			float fTemp166 = 1.0f - fTemp165;
			float fTemp167 = mydsp_faustpower2_f(fTemp142);
			float fTemp168 = fmodf(fTemp146, 1.0f);
			int iTemp169 = fTemp168 < fTemp150;
			float fTemp170 = 2.0f * fSlow56 * (((iTemp169) ? 0.0f : 1.0f) - fTemp168) + fTemp168 + fSlow57 * (((iTemp169) ? fTemp168 / fTemp150 : 1.0f - (fTemp168 - fTemp150) / fTemp159) - fTemp168);
			float fTemp171 = mydsp_faustpower2_f(fTemp139);
			float fRec80 = dsp->fRec88[1] + ((iTemp153) ? ((dsp->iRec86[1]) ? ((iTemp163) ? dsp->fConst4 * fTemp160 * (fTemp166 * (0.375f * fTemp166 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp166)) + 0.1875f) - dsp->fConst8 * (fSlow58 * mydsp_faustpower2_f(fTemp155) / mydsp_faustpower2_f(fTemp134)) : 0.0f) : ((iTemp156) ? fSlow56 * mydsp_faustpower2_f(fTemp157) / mydsp_faustpower2_f(fTemp158) - dsp->fConst4 * fTemp160 * (fTemp162 * (0.375f * fTemp162 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp162)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp152) ? dsp->fConst8 * (fTemp167 * fTemp170 / fTemp171) : 0.0f);
			float fTemp172 = dsp->fConst7 * fTemp139;
			float fTemp173 = ((fTemp140 >= 0.25f) ? 0.5f : fmaxf(fTemp172, fminf(1.0f - fTemp172, ((iSlow59) ? fTemp86 + fTemp87 + dsp->fRec59[0] + fTemp88 * fTemp128 : 1.0f) + fTemp89 * dsp->fRec79[1])));
			int iTemp174 = fTemp142 >= fTemp173;
			float fTemp175 = fTemp142 - fTemp173;
			float fTemp176 = fTemp140 + dsp->fRec83[1] - fTemp173;
			float fTemp177 = 1.0f - fTemp173;
			float fTemp178 = fSlow71 * fTemp139 * (1.0f / fTemp173 + 1.0f / fTemp177);
			float fTemp179 = fTemp175 / fTemp176;
			float fTemp180 = 1.0f - fTemp179;
			float fRec81 = dsp->fRec89[1] + ((dsp->iRec87[1]) ? ((iTemp151) ? dsp->fConst4 * fTemp178 * (fTemp145 * (0.375f * fTemp145 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp145)) + 0.1875f) - dsp->fConst8 * (fSlow72 * fTemp167 / fTemp171) : 0.0f) : ((iTemp174) ? fSlow70 * mydsp_faustpower2_f(fTemp175) / mydsp_faustpower2_f(fTemp176) - dsp->fConst4 * fTemp178 * (fTemp180 * (0.375f * fTemp180 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp180)) + 0.1875f) : 0.0f));
			dsp->fRec82[0] = fTemp150;
			dsp->fRec83[0] = fTemp173;
			float fTemp181 = ((iTemp152) ? fTemp134 * fTemp142 / fTemp139 : fTemp155);
			dsp->fRec84[0] = fTemp181;
			dsp->fRec85[0] = fTemp142;
			dsp->iRec86[0] = (((iTemp152 + ((dsp->iRec86[1] + iTemp163) == 2) + ((iTemp147 + (fTemp155 < fTemp150)) == 2)) > 0) ? 0 : 1);
			int iTemp182 = fTemp142 < fTemp173;
			dsp->iRec87[0] = (((((iTemp151 + dsp->iRec87[1]) == 2) + (((dsp->iRec87[1] == 0) + iTemp182) == 2)) > 0) ? 0 : 1);
			int iTemp183 = fTemp181 < fTemp150;
			float fTemp184 = fTemp144 - 1.0f;
			dsp->fRec88[0] = fSlow57 * (((iTemp183) ? fTemp181 / fTemp150 : 1.0f - (fTemp181 - fTemp150) / fTemp159) - fTemp181) + 2.0f * fSlow56 * (((iTemp183) ? 0.0f : 1.0f) - fTemp181) + fTemp181 + ((iTemp153) ? ((dsp->iRec86[1]) ? ((iTemp163) ? dsp->fConst4 * fTemp160 * (dsp->fConst0 * (fTemp155 * (dsp->fConst9 * fTemp164 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp155) / mydsp_faustpower3_f(fTemp134))) / fTemp134) + 0.1875f) - 0.5f * fSlow58 * fTemp166 * (fTemp165 - 1.0f) : 0.0f) : ((iTemp156) ? fSlow56 * fTemp162 * (fTemp161 - 1.0f) - dsp->fConst4 * fTemp160 * (fTemp157 * (0.375f * fTemp161 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp157) / mydsp_faustpower3_f(fTemp158))) / fTemp158 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp152) ? 0.5f * fTemp145 * fTemp170 * fTemp184 : 0.0f);
			dsp->fRec89[0] = fTemp142 + 2.0f * fSlow70 * (((iTemp182) ? 0.0f : 1.0f) - fTemp142) + fSlow71 * (((iTemp182) ? fTemp142 / fTemp173 : 1.0f - fTemp175 / fTemp177) - fTemp142) + ((dsp->iRec87[1]) ? ((iTemp151) ? dsp->fConst4 * fTemp178 * (dsp->fConst0 * (fTemp142 * (dsp->fConst9 * fTemp143 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp142) / mydsp_faustpower3_f(fTemp139))) / fTemp139) + 0.1875f) - 0.5f * fSlow72 * fTemp145 * fTemp184 : 0.0f) : ((iTemp174) ? fSlow70 * fTemp180 * (fTemp179 - 1.0f) - dsp->fConst4 * fTemp178 * (fTemp175 * (0.375f * fTemp179 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp175) / mydsp_faustpower3_f(fTemp176))) / fTemp176 + 0.1875f) : 0.0f));
			float fRec78 = 2.0f * fRec81 + -1.0f;
			dsp->fRec79[0] = 2.0f * fRec80 + -1.0f;
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec79[0]);
			float fTemp185 = dsp->fRec79[0];
			float fTemp186 = 0.00083333335f * (fTemp6 + 9.6e+03f * (fTemp11 + fTemp20 * fTemp128 + fTemp185 * fTemp103));
			float fTemp187 = ((fTemp186 >= -126.0f) ? ((fTemp186 <= 127.0f) ? fTemp186 : 127.0f) : -126.0f);
			int iTemp188 = (int)(fTemp187 + ((fTemp187 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp189 = fTemp187 - (float)(iTemp188);
			float fTemp190 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec74[0])) * ftbl0mydspSIG0[(iTemp188 + 126) & 255] * (fTemp189 * (fTemp189 * (fTemp189 * (fTemp189 * (fTemp189 * (0.0001540353f * fTemp189 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f)), 1.0f) + 1.0f));
			float fTemp191 = (0.5f * (dsp->fRec67[0] * fTemp185 + fTemp110 + dsp->fRec68[0] * fRec78) - dsp->fRec71[1]) * fTemp190;
			float fTemp192 = fTemp190 + 1.0f;
			float fTemp193 = fTemp190 / fTemp192;
			float fTemp194 = fTemp190 * ((dsp->fRec71[1] + (fTemp191 + 0.21521576f * fTemp109 * dsp->fRec73[1] * (1.0f - fTemp193) - dsp->fRec70[1]) / fTemp192) / (0.21521576f * (fTemp109 * fTemp190 * (fTemp193 + -1.0f) / fTemp192) + 1.0f) - dsp->fRec73[1]) / fTemp192;
			float fTemp195 = dsp->fRec73[1] + fTemp194;
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * (fTemp190 * (0.21521576f * fTemp109 * fTemp195 - dsp->fRec70[1]) / fTemp192);
			dsp->fRec71[0] = dsp->fRec71[1] + 2.0f * (fTemp191 / fTemp192);
			float fRec72 = fTemp195;
			dsp->fRec73[0] = dsp->fRec73[1] + 2.0f * fTemp194;
			float fTemp196 = fTemp126 * fmaxf(0.0f, fminf(fSlow80 * dsp->fRec75[0], fmaxf(1.0f - fSlow82 * (dsp->fRec75[0] - fSlow79), fSlow81)) * (1.0f - fSlow83 * fTemp125));
			dsp->fVbargraph6 = (FAUSTFLOAT)(fTemp196);
			float fTemp197 = 0.083333336f * (fSlow87 + fTemp0);
			float fTemp198 = ((fTemp197 >= -126.0f) ? ((fTemp197 <= 127.0f) ? fTemp197 : 127.0f) : -126.0f);
			int iTemp199 = (int)(fTemp198 + ((fTemp198 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp200 = fTemp198 - (float)(iTemp199);
			dsp->fRec94[0] = 4.4e+02f * fSlow5 * ftbl0mydspSIG0[(iTemp199 + 126) & 255] * (fTemp200 * (fTemp200 * (fTemp200 * (fTemp200 * (fTemp200 * (0.0001540353f * fTemp200 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fSlow4 * dsp->fRec94[1];
			dsp->iRec96[0] = iSlow88 * (dsp->iRec96[1] + 1);
			float fTemp201 = (float)(dsp->iRec96[0]);
			int iTemp202 = (iSlow88 * (fTemp201 >= dsp->fConst5)) <= 0;
			float fTemp203 = (float)(iTemp202);
			float fTemp204 = fSlow89 * fTemp203;
			dsp->fVec3[0] = fTemp204;
			dsp->fRec95[0] = fTemp203 * (fTemp204 + dsp->fRec95[1]) * (float)(dsp->fVec3[1] >= fTemp204);
			dsp->iRec97[0] = iTemp202 * (fTemp204 == 0.0f) * (dsp->iRec97[1] + 1);
			float fTemp205 = (float)(dsp->iRec97[0]);
			float fTemp206 = ((iSlow88) ? fmaxf(0.0f, 1.0f - dsp->fConst6 * fTemp201) : 1.0f);
			float fTemp207 = fmaxf(0.0f, fminf(fSlow18 * dsp->fRec95[0], fmaxf(fSlow22 * (fSlow17 - dsp->fRec95[0]) + 1.0f, fSlow21)) * (1.0f - fSlow23 * fTemp205)) * fTemp206;
			dsp->fVbargraph7 = (FAUSTFLOAT)(fTemp207);
			float fTemp208 = fTemp207;
			float fTemp209 = 0.00083333335f * (fTemp34 + fTemp32 + 1.2e+03f * fTemp33 * fTemp208);
			float fTemp210 = ((fTemp209 >= -126.0f) ? ((fTemp209 <= 127.0f) ? fTemp209 : 127.0f) : -126.0f);
			int iTemp211 = (int)(fTemp210 + ((fTemp210 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp212 = fTemp210 - (float)(iTemp211);
			float fTemp213 = ((iSlow27) ? dsp->fRec94[0] * fTemp24 * fTemp26 : fTemp31) * ftbl0mydspSIG0[(iTemp211 + 126) & 255] * (fTemp212 * (fTemp212 * (fTemp212 * (fTemp212 * (fTemp212 * (0.0001540353f * fTemp212 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f);
			float fTemp214 = ((iSlow26) ? fTemp213 : 0.015625f * fTemp213);
			float fTemp215 = 0.00083333335f * (fTemp43 + fTemp41 + 1.2e+03f * fTemp42 * fTemp208);
			float fTemp216 = ((fTemp215 >= -126.0f) ? ((fTemp215 <= 127.0f) ? fTemp215 : 127.0f) : -126.0f);
			int iTemp217 = (int)(fTemp216 + ((fTemp216 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp218 = fTemp216 - (float)(iTemp217);
			float fTemp219 = fmaxf(0.0f, dsp->fRec94[0] * ftbl0mydspSIG0[(iTemp217 + 126) & 255] * (fTemp218 * (fTemp218 * (fTemp218 * (fTemp218 * (fTemp218 * (0.0001540353f * fTemp218 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f) + fTemp48 * fTemp214 * dsp->fRec99[1]);
			float fTemp220 = dsp->fConst4 * fTemp219;
			float fTemp221 = dsp->fRec105[1] + fTemp220;
			float fTemp222 = fmodf(fTemp221, 1.0f);
			float fTemp223 = fTemp222 / fTemp219;
			float fTemp224 = dsp->fConst0 * fTemp223;
			float fTemp225 = 1.0f - fTemp224;
			float fTemp226 = dsp->fRec104[1] + dsp->fConst4 * fTemp214 * fTemp225;
			int iTemp227 = dsp->iRec106[1] == 0;
			float fTemp228 = dsp->fConst4 * fTemp214;
			float fTemp229 = dsp->fConst7 * fTemp214;
			float fTemp230 = ((fTemp228 >= 0.25f) ? 0.5f : fmaxf(fTemp229, fminf(1.0f - fTemp229, ((iSlow45) ? 0.5f : ((iSlow46) ? fTemp60 + fTemp62 + fTemp61 * fTemp208 : 1.0f)))));
			int iTemp231 = fTemp221 >= 1.0f;
			int iTemp232 = (fSlow54 + (float)(iTemp231)) == 2.0f;
			int iTemp233 = ((((fTemp226 >= 1.0f) + ((iTemp227 + (fTemp226 >= fTemp230)) == 2)) > 0) + (iTemp232 == 0)) > 0;
			float fTemp234 = dsp->fRec104[1] + fTemp228;
			float fTemp235 = fmodf(fTemp234, 1.0f);
			int iTemp236 = fTemp235 >= fTemp230;
			float fTemp237 = fTemp235 - fTemp230;
			float fTemp238 = fTemp228 + dsp->fRec102[1] - fTemp230;
			float fTemp239 = 1.0f - fTemp230;
			float fTemp240 = fSlow57 * fTemp214 * (1.0f / fTemp239 + 1.0f / fTemp230);
			float fTemp241 = fTemp237 / fTemp238;
			float fTemp242 = 1.0f - fTemp241;
			int iTemp243 = fTemp234 >= 1.0f;
			float fTemp244 = fTemp235 / fTemp214;
			float fTemp245 = dsp->fConst0 * fTemp244;
			float fTemp246 = 1.0f - fTemp245;
			float fTemp247 = mydsp_faustpower2_f(fTemp222);
			float fTemp248 = fmodf(fTemp226, 1.0f);
			int iTemp249 = fTemp248 < fTemp230;
			float fTemp250 = fTemp248 + 2.0f * fSlow56 * (((iTemp249) ? 0.0f : 1.0f) - fTemp248) + fSlow57 * (((iTemp249) ? fTemp248 / fTemp230 : 1.0f - (fTemp248 - fTemp230) / fTemp239) - fTemp248);
			float fTemp251 = mydsp_faustpower2_f(fTemp219);
			float fRec100 = dsp->fRec108[1] + ((iTemp233) ? ((dsp->iRec106[1]) ? ((iTemp243) ? dsp->fConst4 * fTemp240 * (fTemp246 * (0.375f * fTemp246 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp246)) + 0.1875f) - dsp->fConst8 * (fSlow58 * mydsp_faustpower2_f(fTemp235) / mydsp_faustpower2_f(fTemp214)) : 0.0f) : ((iTemp236) ? fSlow56 * mydsp_faustpower2_f(fTemp237) / mydsp_faustpower2_f(fTemp238) - dsp->fConst4 * fTemp240 * (fTemp242 * (0.375f * fTemp242 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp242)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp232) ? dsp->fConst8 * (fTemp247 * fTemp250 / fTemp251) : 0.0f);
			float fTemp252 = dsp->fConst7 * fTemp219;
			float fTemp253 = ((fTemp220 >= 0.25f) ? 0.5f : fmaxf(fTemp252, fminf(1.0f - fTemp252, ((iSlow59) ? fTemp88 * fTemp208 + fTemp86 + dsp->fRec59[0] + fTemp87 : 1.0f) + fTemp89 * dsp->fRec99[1])));
			int iTemp254 = fTemp222 >= fTemp253;
			float fTemp255 = fTemp222 - fTemp253;
			float fTemp256 = fTemp220 + dsp->fRec103[1] - fTemp253;
			float fTemp257 = 1.0f - fTemp253;
			float fTemp258 = fSlow71 * fTemp219 * (1.0f / fTemp253 + 1.0f / fTemp257);
			float fTemp259 = fTemp255 / fTemp256;
			float fTemp260 = 1.0f - fTemp259;
			float fRec101 = dsp->fRec109[1] + ((dsp->iRec107[1]) ? ((iTemp231) ? dsp->fConst4 * fTemp258 * (fTemp225 * (0.375f * fTemp225 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp225)) + 0.1875f) - dsp->fConst8 * (fSlow72 * fTemp247 / fTemp251) : 0.0f) : ((iTemp254) ? fSlow70 * mydsp_faustpower2_f(fTemp255) / mydsp_faustpower2_f(fTemp256) - dsp->fConst4 * fTemp258 * (fTemp260 * (0.375f * fTemp260 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp260)) + 0.1875f) : 0.0f));
			dsp->fRec102[0] = fTemp230;
			dsp->fRec103[0] = fTemp253;
			float fTemp261 = ((iTemp232) ? fTemp214 * fTemp222 / fTemp219 : fTemp235);
			dsp->fRec104[0] = fTemp261;
			dsp->fRec105[0] = fTemp222;
			dsp->iRec106[0] = (((iTemp232 + ((dsp->iRec106[1] + iTemp243) == 2) + ((iTemp227 + (fTemp235 < fTemp230)) == 2)) > 0) ? 0 : 1);
			int iTemp262 = fTemp222 < fTemp253;
			dsp->iRec107[0] = (((((iTemp231 + dsp->iRec107[1]) == 2) + (((dsp->iRec107[1] == 0) + iTemp262) == 2)) > 0) ? 0 : 1);
			int iTemp263 = fTemp261 < fTemp230;
			float fTemp264 = fTemp224 - 1.0f;
			dsp->fRec108[0] = fTemp261 + 2.0f * fSlow56 * (((iTemp263) ? 0.0f : 1.0f) - fTemp261) + fSlow57 * (((iTemp263) ? fTemp261 / fTemp230 : 1.0f - (fTemp261 - fTemp230) / fTemp239) - fTemp261) + ((iTemp233) ? ((dsp->iRec106[1]) ? ((iTemp243) ? dsp->fConst4 * fTemp240 * (dsp->fConst0 * (fTemp235 * (dsp->fConst9 * fTemp244 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp235) / mydsp_faustpower3_f(fTemp214))) / fTemp214) + 0.1875f) - 0.5f * fSlow58 * fTemp246 * (fTemp245 - 1.0f) : 0.0f) : ((iTemp236) ? fSlow56 * fTemp242 * (fTemp241 - 1.0f) - dsp->fConst4 * fTemp240 * (fTemp237 * (0.375f * fTemp241 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp237) / mydsp_faustpower3_f(fTemp238))) / fTemp238 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp232) ? 0.5f * fTemp225 * fTemp250 * fTemp264 : 0.0f);
			dsp->fRec109[0] = fTemp222 + 2.0f * fSlow70 * (((iTemp262) ? 0.0f : 1.0f) - fTemp222) + fSlow71 * (((iTemp262) ? fTemp222 / fTemp253 : 1.0f - fTemp255 / fTemp257) - fTemp222) + ((dsp->iRec107[1]) ? ((iTemp231) ? dsp->fConst4 * fTemp258 * (dsp->fConst0 * (fTemp222 * (dsp->fConst9 * fTemp223 + -0.5f - dsp->fConst10 * (mydsp_faustpower3_f(fTemp222) / mydsp_faustpower3_f(fTemp219))) / fTemp219) + 0.1875f) - 0.5f * fSlow72 * fTemp225 * fTemp264 : 0.0f) : ((iTemp254) ? fSlow70 * fTemp260 * (fTemp259 - 1.0f) - dsp->fConst4 * fTemp258 * (fTemp255 * (0.375f * fTemp259 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp255) / mydsp_faustpower3_f(fTemp256))) / fTemp256 + 0.1875f) : 0.0f));
			float fRec98 = 2.0f * fRec101 + -1.0f;
			dsp->fRec99[0] = 2.0f * fRec100 + -1.0f;
			dsp->fVbargraph8 = (FAUSTFLOAT)(dsp->fRec99[0]);
			float fTemp265 = dsp->fRec99[0];
			float fTemp266 = 0.00083333335f * (fTemp6 + 9.6e+03f * (fTemp11 + fTemp20 * fTemp208 + fTemp265 * fTemp103));
			float fTemp267 = ((fTemp266 >= -126.0f) ? ((fTemp266 <= 127.0f) ? fTemp266 : 127.0f) : -126.0f);
			int iTemp268 = (int)(fTemp267 + ((fTemp267 >= 0.0f) ? 0.5f : -0.5f));
			float fTemp269 = fTemp267 - (float)(iTemp268);
			float fTemp270 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (dsp->fRec4[0] + 0.33333334f * log10f(0.0022727272f * dsp->fRec94[0])) * ftbl0mydspSIG0[(iTemp268 + 126) & 255] * (fTemp269 * (fTemp269 * (fTemp269 * (fTemp269 * (fTemp269 * (0.0001540353f * fTemp269 + 0.0013333558f) + 0.009618129f) + 0.05550411f) + 0.2402265f) + 0.6931472f) + 1.0f)), 1.0f) + 1.0f));
			float fTemp271 = (0.5f * (dsp->fRec67[0] * fTemp265 + fTemp110 + dsp->fRec68[0] * fRec98) - dsp->fRec91[1]) * fTemp270;
			float fTemp272 = fTemp270 + 1.0f;
			float fTemp273 = 1.0f - fTemp270 / fTemp272;
			float fTemp274 = fTemp270 * ((dsp->fRec91[1] + (fTemp271 + 0.21521576f * fTemp109 * dsp->fRec93[1] * fTemp273 - dsp->fRec90[1]) / fTemp272) / (1.0f - 0.21521576f * (fTemp109 * fTemp270 * fTemp273 / fTemp272)) - dsp->fRec93[1]) / fTemp272;
			float fTemp275 = dsp->fRec93[1] + fTemp274;
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * (fTemp270 * (0.21521576f * fTemp109 * fTemp275 - dsp->fRec90[1]) / fTemp272);
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * (fTemp271 / fTemp272);
			float fRec92 = fTemp275;
			dsp->fRec93[0] = dsp->fRec93[1] + 2.0f * fTemp274;
			float fTemp276 = fTemp206 * fmaxf(0.0f, fminf(fSlow80 * dsp->fRec95[0], fmaxf(fSlow82 * (fSlow79 - dsp->fRec95[0]) + 1.0f, fSlow81)) * (1.0f - fSlow83 * fTemp205));
			dsp->fVbargraph9 = (FAUSTFLOAT)(fTemp276);
			float fTemp277 = 0.33f * (fRec2 * fTemp116 + fRec72 * fTemp196 + fRec92 * fTemp276);
			output0[i0] = (FAUSTFLOAT)(fTemp277);
			output1[i0] = (FAUSTFLOAT)(fTemp277);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
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
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
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
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
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
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec93[1] = dsp->fRec93[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
