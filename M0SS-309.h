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
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	float fConst2;
	FAUSTFLOAT fHslider2;
	float fConst3;
	float fRec4[2];
	int iRec5[2];
	FAUSTFLOAT fHslider3;
	float fRec6[2];
	FAUSTFLOAT fHslider4;
	float fRec7[2];
	FAUSTFLOAT fHslider5;
	float fRec8[2];
	FAUSTFLOAT fHslider6;
	float fConst4;
	FAUSTFLOAT fHslider7;
	float fRec10[2];
	float fRec9[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider8;
	float fRec11[2];
	FAUSTFLOAT fHslider9;
	float fRec12[2];
	FAUSTFLOAT fButton0;
	int iRec15[2];
	int iRec13[2];
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	int iVec1[2];
	float fRec16[2];
	float fRec14[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider14;
	float fRec17[2];
	FAUSTFLOAT fHslider15;
	float fRec18[2];
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	float fRec29[2];
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
	float fConst5;
	FAUSTFLOAT fHslider33;
	FAUSTFLOAT fHslider34;
	float fRec44[2];
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
	float fConst6;
	float fRec19[2];
	FAUSTFLOAT fHslider42;
	FAUSTFLOAT fHslider43;
	float fRec51[2];
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
	float fRec21[2];
	float fRec22[2];
	float fRec23[2];
	float fRec24[2];
	int iRec25[2];
	int iRec26[2];
	float fConst7;
	float fConst8;
	float fRec27[2];
	float fRec28[2];
	FAUSTFLOAT fHslider52;
	float fRec60[2];
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
	float fRec0[2];
	float fRec1[2];
	float fRec2[2];
	int iRec66[2];
	FAUSTFLOAT fHslider58;
	FAUSTFLOAT fHslider59;
	FAUSTFLOAT fHslider60;
	FAUSTFLOAT fHslider61;
	float fRec68[2];
	float fRec67[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider62;
	FAUSTFLOAT fButton1;
	int iRec73[2];
	int iVec2[2];
	float fRec75[2];
	float fRec74[2];
	FAUSTFLOAT fVbargraph3;
	float fRec76[2];
	float fRec78[2];
	float fRec79[2];
	float fRec80[2];
	float fRec81[2];
	int iRec82[2];
	int iRec83[2];
	float fRec84[2];
	float fRec85[2];
	float fRec69[2];
	float fRec70[2];
	float fRec71[2];
	int iRec86[2];
	float fRec88[2];
	float fRec87[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider63;
	FAUSTFLOAT fButton2;
	int iRec93[2];
	int iVec3[2];
	float fRec95[2];
	float fRec94[2];
	FAUSTFLOAT fVbargraph5;
	float fRec96[2];
	float fRec98[2];
	float fRec99[2];
	float fRec100[2];
	float fRec101[2];
	int iRec102[2];
	int iRec103[2];
	float fRec104[2];
	float fRec105[2];
	float fRec89[2];
	float fRec90[2];
	float fRec91[2];
	int iRec106[2];
	float fRec108[2];
	float fRec107[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider2 = (FAUSTFLOAT)(1.0f);
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
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider38 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider44 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider45 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider46 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider47 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider48 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider49 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider50 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider51 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider52 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider53 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider54 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider55 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider56 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider57 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider58 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider59 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider60 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider61 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider62 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider63 = (FAUSTFLOAT)(4e+01f);
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
			dsp->iRec5[l2] = 0;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec6[l3] = 0.0f;
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
			dsp->fRec10[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec9[l7] = 0.0f;
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
			dsp->fRec12[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->iRec15[l10] = 0;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->iRec13[l11] = 0;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->iVec1[l12] = 0;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec16[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec14[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec17[l15] = 0.0f;
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
			dsp->fRec29[l17] = 0.0f;
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
			dsp->fRec19[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec51[l40] = 0.0f;
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
			dsp->fRec21[l49] = 0.0f;
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
			dsp->iRec25[l53] = 0;
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
			dsp->fRec27[l55] = 0.0f;
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
			dsp->fRec60[l57] = 0.0f;
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
			dsp->fRec0[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec1[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec2[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->iRec66[l66] = 0;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec68[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec67[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->iRec73[l69] = 0;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->iVec2[l70] = 0;
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
			dsp->fRec74[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec76[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec78[l74] = 0.0f;
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
			dsp->iRec82[l78] = 0;
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
			dsp->fRec84[l80] = 0.0f;
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
			dsp->fRec69[l82] = 0.0f;
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
			dsp->iRec86[l85] = 0;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec88[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec87[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->iRec93[l88] = 0;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->iVec3[l89] = 0;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec95[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec94[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec96[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec98[l93] = 0.0f;
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
			dsp->iRec102[l97] = 0;
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
			dsp->fRec104[l99] = 0.0f;
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
			dsp->fRec89[l101] = 0.0f;
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
			dsp->iRec106[l104] = 0;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec108[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 2; l106 = l106 + 1) {
			dsp->fRec107[l106] = 0.0f;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider60, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider59, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "mod", "0");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider58, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider61, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider61, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "10", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "49");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider46, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider35, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "59");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.os1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider2, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider57, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider39, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider43, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider52, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider62, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider63, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider56, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider54, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider55, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "alt", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider47, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "sel", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "sel", "28");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "alt", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "alt-sel", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider16, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "alt", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider38, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-24.0f, (FAUSTFLOAT)24.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "sel", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "62");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "poly.mod", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "alt", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "63");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "transpose", &dsp->fHslider0, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-11.0f, (FAUSTFLOAT)11.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)(dsp->fHslider0);
	float fSlow1 = powf(2.0f, 0.083333336f * (fSlow0 + (float)(dsp->fHslider1) + -69.0f));
	float fSlow2 = 0.33333334f * log10f(fSlow1);
	float fSlow3 = dsp->fConst2 * (float)(dsp->fHslider2);
	float fSlow4 = dsp->fConst2 * (float)(dsp->fHslider3);
	float fSlow5 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow6 = dsp->fConst2 * (float)(dsp->fHslider5);
	float fSlow7 = (float)(dsp->fHslider6);
	int iSlow8 = fSlow7 >= 2.0f;
	int iSlow9 = fSlow7 >= 1.0f;
	float fSlow10 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow11 = dsp->fConst2 * (float)(dsp->fHslider8);
	float fSlow12 = dsp->fConst2 * (float)(dsp->fHslider9);
	float fSlow13 = (float)(dsp->fButton0);
	int iSlow14 = fSlow13 > 0.0f;
	float fSlow15 = (float)(dsp->fHslider10);
	float fSlow16 = (fSlow15 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider11)) + 0.001f));
	float fSlow17 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider12)) + 0.001f));
	float fSlow18 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider13)) + 0.001f));
	int iSlow19 = fSlow13 == 0.0f;
	int iSlow20 = iSlow19 > 0;
	float fSlow21 = dsp->fConst2 * (float)(dsp->fHslider14);
	float fSlow22 = dsp->fConst2 * (float)(dsp->fHslider15);
	int iSlow23 = (float)(dsp->fHslider16) >= 1.0f;
	float fSlow24 = fSlow0 + 261.0f;
	float fSlow25 = 1e+02f * (float)(dsp->fHslider17);
	float fSlow26 = dsp->fConst2 * (float)(dsp->fHslider18);
	float fSlow27 = 4.4e+02f * fSlow1;
	float fSlow28 = dsp->fConst2 * (float)(dsp->fHslider19);
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider20);
	float fSlow30 = dsp->fConst2 * (float)(dsp->fHslider21);
	float fSlow31 = dsp->fConst2 * (float)(dsp->fHslider22);
	float fSlow32 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow33 = dsp->fConst2 * (float)(dsp->fHslider24);
	float fSlow34 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow35 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow36 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider28);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow42 = (float)(dsp->fHslider33);
	int iSlow43 = fSlow42 >= 2.0f;
	int iSlow44 = fSlow42 >= 1.0f;
	float fSlow45 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider38);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow52 = (float)(dsp->fHslider41);
	float fSlow53 = (float)(((iSlow43) ? 0 : ((iSlow44) ? 1 : 0)));
	float fSlow54 = fmaxf(fSlow53 + -0.5f, 0.0f);
	float fSlow55 = fmaxf(1.0f - 2.0f * fSlow53, 0.0f);
	float fSlow56 = 1.0f - fSlow55;
	int iSlow57 = (float)(dsp->fHslider42) >= 1.0f;
	float fSlow58 = dsp->fConst2 * (float)(dsp->fHslider43);
	float fSlow59 = dsp->fConst2 * (float)(dsp->fHslider44);
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider46);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider47);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow65 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow66 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow67 = (float)(((iSlow57) ? 1 : 0));
	float fSlow68 = fmaxf(fSlow67 + -0.5f, 0.0f);
	float fSlow69 = fmaxf(1.0f - 2.0f * fSlow67, 0.0f);
	float fSlow70 = 1.0f - fSlow69;
	float fSlow71 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow72 = dsp->fConst2 * (float)(dsp->fHslider53);
	float fSlow73 = dsp->fConst2 * (float)(dsp->fHslider54);
	float fSlow74 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow75 = dsp->fConst2 * (float)(dsp->fHslider56);
	float fSlow76 = dsp->fConst2 * (float)(dsp->fHslider57);
	float fSlow77 = (float)(dsp->fHslider58);
	float fSlow78 = (fSlow77 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider59)) + 0.001f));
	float fSlow79 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider60)) + 0.001f));
	float fSlow80 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider61)) + 0.001f));
	float fSlow81 = powf(2.0f, 0.083333336f * (fSlow0 + (float)(dsp->fHslider62) + -69.0f));
	float fSlow82 = 0.33333334f * log10f(fSlow81);
	float fSlow83 = (float)(dsp->fButton1);
	int iSlow84 = fSlow83 > 0.0f;
	int iSlow85 = fSlow83 == 0.0f;
	int iSlow86 = iSlow85 > 0;
	float fSlow87 = 4.4e+02f * fSlow81;
	float fSlow88 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider63) + fSlow0 + -69.0f));
	float fSlow89 = 0.33333334f * log10f(fSlow88);
	float fSlow90 = (float)(dsp->fButton2);
	int iSlow91 = fSlow90 > 0.0f;
	int iSlow92 = fSlow90 == 0.0f;
	int iSlow93 = iSlow92 > 0;
	float fSlow94 = 4.4e+02f * fSlow88;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow3 + dsp->fConst3 * dsp->fRec4[1];
			dsp->iRec5[0] = 1103515245 * dsp->iRec5[1] + 12345;
			float fTemp0 = (float)(dsp->iRec5[0]);
			dsp->fRec6[0] = fSlow4 + dsp->fConst3 * dsp->fRec6[1];
			dsp->fRec7[0] = fSlow5 + dsp->fConst3 * dsp->fRec7[1];
			dsp->fRec8[0] = fSlow6 + dsp->fConst3 * dsp->fRec8[1];
			float fTemp1 = 1.1175871e-06f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec6[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec8[0]));
			dsp->fRec10[0] = fSlow10 + dsp->fConst3 * dsp->fRec10[1];
			float fTemp2 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec9[1] + dsp->fConst4 * dsp->fRec10[0]);
			dsp->fRec9[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = 2.0f * dsp->fRec9[0] + -1.0f;
			float fTemp4 = ((iSlow8) ? 2.0f * (1.0f - fabsf(fTemp3)) + -1.0f : ((iSlow9) ? 2.0f * (float)(dsp->fRec9[0] <= 0.5f) + -1.0f : fTemp3));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = fTemp4;
			dsp->fRec11[0] = fSlow11 + dsp->fConst3 * dsp->fRec11[1];
			dsp->fRec12[0] = fSlow12 + dsp->fConst3 * dsp->fRec12[1];
			float fTemp6 = fTemp5 * (mydsp_faustpower2_f(dsp->fRec11[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec12[0]));
			int iTemp7 = dsp->iRec13[1] == 0;
			int iTemp8 = dsp->iRec13[1] == 1;
			dsp->iRec15[0] = dsp->iRec15[1] + 1;
			int iTemp9 = (dsp->iRec15[0] + -1) == 0;
			float fTemp10 = ((iTemp9) ? 0.0f : dsp->fRec14[1]);
			dsp->iRec13[0] = ((iSlow14) ? ((iTemp7) ? 1 : ((iTemp8) ? ((fTemp10 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp11 = ((dsp->iRec13[1] == 2) ? fSlow15 : 0.0f);
			dsp->iVec1[0] = iSlow19;
			int iTemp12 = (dsp->iVec1[1] <= 0) & iSlow20;
			float fTemp13 = (float)(1 - iTemp12);
			float fTemp14 = (float)(iTemp12);
			dsp->fRec16[0] = dsp->fRec16[1] * fTemp13 + ((iTemp9) ? 1.0f : fTemp10) * fTemp14;
			float fTemp15 = ((iTemp7) ? dsp->fRec16[0] : 1.0f);
			float fTemp16 = ((fTemp11 == fTemp15) ? 0.5f : (fTemp10 - fTemp11) / (fTemp15 - fTemp11));
			dsp->fRec14[0] = fmaxf(fTemp11, fminf(1.0f, fTemp10 + 0.25f * (((iTemp7) ? -(fSlow18 * dsp->fRec16[0]) : ((iTemp8) ? fSlow17 : fSlow16)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp16 + -1.0f) + (1.0f - fTemp16)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec14[0]);
			float fTemp17 = dsp->fRec14[0];
			dsp->fRec17[0] = fSlow21 + dsp->fConst3 * dsp->fRec17[1];
			dsp->fRec18[0] = fSlow22 + dsp->fConst3 * dsp->fRec18[1];
			float fTemp18 = mydsp_faustpower2_f(dsp->fRec17[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec18[0]);
			dsp->fRec29[0] = fSlow26 + dsp->fConst3 * dsp->fRec29[1];
			float fTemp19 = powf(2.0f, 0.00083333335f * (fSlow25 + dsp->fRec29[0]));
			float fTemp20 = fSlow24 * fTemp19;
			float fTemp21 = ((iSlow23) ? fSlow27 * fTemp19 : fTemp20);
			dsp->fRec30[0] = fSlow28 + dsp->fConst3 * dsp->fRec30[1];
			dsp->fRec31[0] = fSlow29 + dsp->fConst3 * dsp->fRec31[1];
			float fTemp22 = 2.4e+03f * fTemp5 * (mydsp_faustpower2_f(dsp->fRec30[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec31[0]));
			dsp->fRec32[0] = fSlow30 + dsp->fConst3 * dsp->fRec32[1];
			dsp->fRec33[0] = fSlow31 + dsp->fConst3 * dsp->fRec33[1];
			float fTemp23 = mydsp_faustpower2_f(dsp->fRec32[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec33[0]);
			dsp->fRec34[0] = fSlow32 + dsp->fConst3 * dsp->fRec34[1];
			dsp->fRec35[0] = fSlow33 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp24 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec34[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec35[0]));
			float fTemp25 = powf(2.0f, 0.00083333335f * (fTemp22 + 1.2e+03f * fTemp17 * fTemp23 + fTemp24));
			float fTemp26 = fTemp21 * fTemp25;
			dsp->fRec36[0] = fSlow34 + dsp->fConst3 * dsp->fRec36[1];
			dsp->fRec37[0] = fSlow35 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp27 = 2.4e+03f * fTemp5 * (mydsp_faustpower2_f(dsp->fRec36[0]) + mydsp_faustpower2_f(dsp->fRec37[0]) * dsp->fRec7[0]);
			dsp->fRec38[0] = fSlow36 + dsp->fConst3 * dsp->fRec38[1];
			dsp->fRec39[0] = fSlow37 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp28 = mydsp_faustpower2_f(dsp->fRec38[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec39[0]);
			dsp->fRec40[0] = fSlow38 + dsp->fConst3 * dsp->fRec40[1];
			dsp->fRec41[0] = fSlow39 + dsp->fConst3 * dsp->fRec41[1];
			float fTemp29 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec40[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec41[0]));
			dsp->fRec42[0] = fSlow40 + dsp->fConst3 * dsp->fRec42[1];
			dsp->fRec43[0] = fSlow41 + dsp->fConst3 * dsp->fRec43[1];
			float fTemp30 = mydsp_faustpower2_f(dsp->fRec42[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec43[0]);
			float fTemp31 = fmaxf(0.0f, fSlow27 * powf(2.0f, 0.00083333335f * (fTemp27 + 1.2e+03f * fTemp17 * fTemp28 + fTemp29)) + fTemp26 * dsp->fRec19[1] * fTemp30);
			float fTemp32 = dsp->fConst4 * fTemp31;
			float fTemp33 = dsp->fRec24[1] + fTemp32;
			float fTemp34 = fmodf(fTemp33, 1.0f);
			float fTemp35 = fTemp34 / fTemp31;
			float fTemp36 = dsp->fConst0 * fTemp35;
			float fTemp37 = 1.0f - fTemp36;
			float fTemp38 = dsp->fRec23[1] + dsp->fConst4 * fTemp26 * fTemp37;
			int iTemp39 = dsp->iRec25[1] == 0;
			float fTemp40 = dsp->fConst4 * fTemp26;
			float fTemp41 = dsp->fConst5 * fTemp26;
			dsp->fRec44[0] = fSlow45 + dsp->fConst3 * dsp->fRec44[1];
			dsp->fRec45[0] = fSlow46 + dsp->fConst3 * dsp->fRec45[1];
			float fTemp42 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec44[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec45[0]));
			dsp->fRec46[0] = fSlow47 + dsp->fConst3 * dsp->fRec46[1];
			dsp->fRec47[0] = fSlow48 + dsp->fConst3 * dsp->fRec47[1];
			float fTemp43 = mydsp_faustpower2_f(dsp->fRec46[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec47[0]);
			dsp->fRec48[0] = fSlow49 + dsp->fConst3 * dsp->fRec48[1];
			dsp->fRec49[0] = fSlow50 + dsp->fConst3 * dsp->fRec49[1];
			dsp->fRec50[0] = fSlow51 + dsp->fConst3 * dsp->fRec50[1];
			float fTemp44 = dsp->fRec48[0] + fTemp5 * (mydsp_faustpower2_f(dsp->fRec49[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec50[0]));
			float fTemp45 = ((fTemp40 >= 0.25f) ? 0.5f : fmaxf(fTemp41, fminf(1.0f - fTemp41, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp42 + fTemp17 * fTemp43 + fTemp44 : 1.0f)))));
			int iTemp46 = fTemp33 >= 1.0f;
			int iTemp47 = (fSlow52 + (float)(iTemp46)) == 2.0f;
			int iTemp48 = ((((fTemp38 >= 1.0f) + ((iTemp39 + (fTemp38 >= fTemp45)) == 2)) > 0) + (iTemp47 == 0)) > 0;
			float fTemp49 = dsp->fRec23[1] + fTemp40;
			float fTemp50 = fmodf(fTemp49, 1.0f);
			int iTemp51 = fTemp50 >= fTemp45;
			float fTemp52 = fTemp50 - fTemp45;
			float fTemp53 = fTemp40 + dsp->fRec21[1] - fTemp45;
			float fTemp54 = 1.0f - fTemp45;
			float fTemp55 = fTemp26 * fSlow55 * (1.0f / fTemp54 + 1.0f / fTemp45);
			float fTemp56 = fTemp52 / fTemp53;
			float fTemp57 = 1.0f - fTemp56;
			int iTemp58 = fTemp49 >= 1.0f;
			float fTemp59 = fTemp50 / fTemp26;
			float fTemp60 = dsp->fConst0 * fTemp59;
			float fTemp61 = 1.0f - fTemp60;
			float fTemp62 = mydsp_faustpower2_f(fTemp34);
			float fTemp63 = fmodf(fTemp38, 1.0f);
			int iTemp64 = fTemp63 < fTemp45;
			float fTemp65 = fTemp63 + 2.0f * (((iTemp64) ? 0.0f : 1.0f) - fTemp63) * fSlow54 + (((iTemp64) ? fTemp63 / fTemp45 : 1.0f - (fTemp63 - fTemp45) / fTemp54) - fTemp63) * fSlow55;
			float fTemp66 = mydsp_faustpower2_f(fTemp31);
			dsp->fRec19[0] = dsp->fRec27[1] + ((iTemp48) ? ((dsp->iRec25[1]) ? ((iTemp58) ? dsp->fConst4 * fTemp55 * (fTemp61 * (0.375f * fTemp61 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp61)) + 0.1875f) - dsp->fConst6 * (mydsp_faustpower2_f(fTemp50) * fSlow56 / (mydsp_faustpower2_f(fTemp21) * mydsp_faustpower2_f(fTemp25))) : 0.0f) : ((iTemp51) ? fSlow54 * mydsp_faustpower2_f(fTemp52) / mydsp_faustpower2_f(fTemp53) - dsp->fConst4 * fTemp55 * (fTemp57 * (0.375f * fTemp57 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp57)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp47) ? dsp->fConst6 * (fTemp62 * fTemp65 / fTemp66) : 0.0f);
			float fTemp67 = dsp->fConst5 * fTemp31;
			dsp->fRec51[0] = fSlow58 + dsp->fConst3 * dsp->fRec51[1];
			dsp->fRec52[0] = fSlow59 + dsp->fConst3 * dsp->fRec52[1];
			float fTemp68 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec51[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec52[0]));
			dsp->fRec53[0] = fSlow60 + dsp->fConst3 * dsp->fRec53[1];
			dsp->fRec54[0] = fSlow61 + dsp->fConst3 * dsp->fRec54[1];
			float fTemp69 = mydsp_faustpower2_f(dsp->fRec53[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec54[0]);
			dsp->fRec55[0] = fSlow62 + dsp->fConst3 * dsp->fRec55[1];
			dsp->fRec56[0] = fSlow63 + dsp->fConst3 * dsp->fRec56[1];
			dsp->fRec57[0] = fSlow64 + dsp->fConst3 * dsp->fRec57[1];
			float fTemp70 = dsp->fRec55[0] + fTemp5 * (mydsp_faustpower2_f(dsp->fRec56[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec57[0]));
			dsp->fRec58[0] = fSlow65 + dsp->fConst3 * dsp->fRec58[1];
			dsp->fRec59[0] = fSlow66 + dsp->fConst3 * dsp->fRec59[1];
			float fTemp71 = mydsp_faustpower2_f(dsp->fRec58[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec59[0]);
			float fTemp72 = ((fTemp32 >= 0.25f) ? 0.5f : fmaxf(fTemp67, fminf(1.0f - fTemp67, ((iSlow57) ? fTemp68 + fTemp17 * fTemp69 + fTemp70 : 1.0f) + dsp->fRec19[1] * fTemp71)));
			int iTemp73 = fTemp34 >= fTemp72;
			float fTemp74 = fTemp34 - fTemp72;
			float fTemp75 = fTemp32 + dsp->fRec22[1] - fTemp72;
			float fTemp76 = 1.0f - fTemp72;
			float fTemp77 = fTemp31 * (1.0f / fTemp72 + 1.0f / fTemp76) * fSlow69;
			float fTemp78 = fTemp74 / fTemp75;
			float fTemp79 = 1.0f - fTemp78;
			float fRec20 = dsp->fRec28[1] + ((dsp->iRec26[1]) ? ((iTemp46) ? dsp->fConst4 * fTemp77 * (fTemp37 * (0.375f * fTemp37 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp37)) + 0.1875f) - dsp->fConst6 * (fTemp62 * fSlow70 / fTemp66) : 0.0f) : ((iTemp73) ? fSlow68 * mydsp_faustpower2_f(fTemp74) / mydsp_faustpower2_f(fTemp75) - dsp->fConst4 * fTemp77 * (fTemp79 * (0.375f * fTemp79 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp79)) + 0.1875f) : 0.0f));
			dsp->fRec21[0] = fTemp45;
			dsp->fRec22[0] = fTemp72;
			float fTemp80 = ((iTemp47) ? fTemp26 * fTemp34 / fTemp31 : fTemp50);
			dsp->fRec23[0] = fTemp80;
			dsp->fRec24[0] = fTemp34;
			dsp->iRec25[0] = (((iTemp47 + ((dsp->iRec25[1] + iTemp58) == 2) + ((iTemp39 + (fTemp50 < fTemp45)) == 2)) > 0) ? 0 : 1);
			int iTemp81 = fTemp34 < fTemp72;
			dsp->iRec26[0] = (((((iTemp46 + dsp->iRec26[1]) == 2) + (((dsp->iRec26[1] == 0) + iTemp81) == 2)) > 0) ? 0 : 1);
			int iTemp82 = fTemp80 < fTemp45;
			float fTemp83 = fTemp36 - 1.0f;
			dsp->fRec27[0] = fTemp80 + 2.0f * fSlow54 * (((iTemp82) ? 0.0f : 1.0f) - fTemp80) + fSlow55 * (((iTemp82) ? fTemp80 / fTemp45 : 1.0f - (fTemp80 - fTemp45) / fTemp54) - fTemp80) + ((iTemp48) ? ((dsp->iRec25[1]) ? ((iTemp58) ? dsp->fConst4 * fTemp55 * (dsp->fConst0 * (fTemp50 * (dsp->fConst7 * fTemp59 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp50) / (mydsp_faustpower3_f(fTemp21) * mydsp_faustpower3_f(fTemp25)))) / fTemp26) + 0.1875f) - 0.5f * fTemp61 * fSlow56 * (fTemp60 - 1.0f) : 0.0f) : ((iTemp51) ? fSlow54 * fTemp57 * (fTemp56 - 1.0f) - dsp->fConst4 * fTemp55 * (fTemp52 * (0.375f * fTemp56 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp52) / mydsp_faustpower3_f(fTemp53))) / fTemp53 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp47) ? 0.5f * fTemp37 * fTemp65 * fTemp83 : 0.0f);
			dsp->fRec28[0] = fTemp34 + 2.0f * fSlow68 * (((iTemp81) ? 0.0f : 1.0f) - fTemp34) + fSlow69 * (((iTemp81) ? fTemp34 / fTemp72 : 1.0f - fTemp74 / fTemp76) - fTemp34) + ((dsp->iRec26[1]) ? ((iTemp46) ? dsp->fConst4 * fTemp77 * (dsp->fConst0 * (fTemp34 * (dsp->fConst7 * fTemp35 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp34) / mydsp_faustpower3_f(fTemp31))) / fTemp31) + 0.1875f) - 0.5f * fTemp37 * fSlow70 * fTemp83 : 0.0f) : ((iTemp73) ? fSlow68 * fTemp79 * (fTemp78 - 1.0f) - dsp->fConst4 * fTemp77 * (fTemp74 * (0.375f * fTemp78 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp74) / mydsp_faustpower3_f(fTemp75))) / fTemp75 + 0.1875f) : 0.0f));
			float fTemp84 = 2.0f * dsp->fRec19[0] + -1.0f;
			dsp->fRec60[0] = fSlow71 + dsp->fConst3 * dsp->fRec60[1];
			dsp->fRec61[0] = fSlow72 + dsp->fConst3 * dsp->fRec61[1];
			float fTemp85 = mydsp_faustpower2_f(dsp->fRec60[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec61[0]);
			float fTemp86 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow2 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp17 * fTemp18 + fTemp84 * fTemp85)))), 1.0f) + 1.0f));
			dsp->fRec62[0] = fSlow73 + dsp->fConst3 * dsp->fRec62[1];
			dsp->fRec63[0] = fSlow74 + dsp->fConst3 * dsp->fRec63[1];
			dsp->fRec64[0] = fSlow75 + dsp->fConst3 * dsp->fRec64[1];
			float fTemp87 = 4.656613e-10f * dsp->fRec64[0] * fTemp0;
			float fTemp88 = (0.5f * (dsp->fRec62[0] * (2.0f * fRec20 + -1.0f) + dsp->fRec63[0] * fTemp84 + fTemp87) - dsp->fRec2[1]) * fTemp86;
			dsp->fRec65[0] = fSlow76 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp89 = dsp->fRec65[0] + -0.707f;
			float fTemp90 = fTemp86 + 1.0f;
			float fTemp91 = 1.0f - fTemp86 / fTemp90;
			float fTemp92 = fTemp86 * ((dsp->fRec2[1] + (fTemp88 + 0.21521576f * dsp->fRec0[1] * fTemp89 * fTemp91 - dsp->fRec1[1]) / fTemp90) / (1.0f - 0.21521576f * (fTemp86 * fTemp89 * fTemp91 / fTemp90)) - dsp->fRec0[1]) / fTemp90;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp92;
			float fTemp93 = dsp->fRec0[1] + fTemp92;
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp86 * (0.21521576f * fTemp89 * fTemp93 - dsp->fRec1[1]) / fTemp90);
			dsp->fRec2[0] = dsp->fRec2[1] + 2.0f * (fTemp88 / fTemp90);
			float fRec3 = fTemp93;
			int iTemp94 = dsp->iRec66[1] == 0;
			int iTemp95 = dsp->iRec66[1] == 1;
			float fTemp96 = ((iTemp9) ? 0.0f : dsp->fRec67[1]);
			dsp->iRec66[0] = ((iSlow14) ? ((iTemp94) ? 1 : ((iTemp95) ? ((fTemp96 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp97 = ((dsp->iRec66[1] == 2) ? fSlow77 : 0.0f);
			dsp->fRec68[0] = fTemp13 * dsp->fRec68[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp96);
			float fTemp98 = ((iTemp94) ? dsp->fRec68[0] : 1.0f);
			float fTemp99 = ((fTemp97 == fTemp98) ? 0.5f : (fTemp96 - fTemp97) / (fTemp98 - fTemp97));
			dsp->fRec67[0] = fmaxf(fTemp97, fminf(1.0f, fTemp96 + 0.25f * (((iTemp94) ? -(fSlow80 * dsp->fRec68[0]) : ((iTemp95) ? fSlow79 : fSlow78)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp99 + -1.0f) + (1.0f - fTemp99)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec67[0]);
			int iTemp100 = dsp->iRec73[1] == 0;
			int iTemp101 = dsp->iRec73[1] == 1;
			float fTemp102 = ((iTemp9) ? 0.0f : dsp->fRec74[1]);
			dsp->iRec73[0] = ((iSlow84) ? ((iTemp100) ? 1 : ((iTemp101) ? ((fTemp102 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp103 = ((dsp->iRec73[1] == 2) ? fSlow15 : 0.0f);
			dsp->iVec2[0] = iSlow85;
			int iTemp104 = (dsp->iVec2[1] <= 0) & iSlow86;
			float fTemp105 = (float)(1 - iTemp104);
			float fTemp106 = (float)(iTemp104);
			dsp->fRec75[0] = dsp->fRec75[1] * fTemp105 + ((iTemp9) ? 1.0f : fTemp102) * fTemp106;
			float fTemp107 = ((iTemp100) ? dsp->fRec75[0] : 1.0f);
			float fTemp108 = ((fTemp103 == fTemp107) ? 0.5f : (fTemp102 - fTemp103) / (fTemp107 - fTemp103));
			dsp->fRec74[0] = fmaxf(fTemp103, fminf(1.0f, fTemp102 + 0.25f * (((iTemp100) ? -(fSlow18 * dsp->fRec75[0]) : ((iTemp101) ? fSlow17 : fSlow16)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp108 + -1.0f) + (1.0f - fTemp108)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec74[0]);
			float fTemp109 = dsp->fRec74[0];
			float fTemp110 = ((iSlow23) ? fSlow87 * fTemp19 : fTemp20);
			float fTemp111 = fTemp22 + fTemp24;
			float fTemp112 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp109 * fTemp23 + fTemp111));
			float fTemp113 = fTemp110 * fTemp112;
			float fTemp114 = fTemp27 + fTemp29;
			float fTemp115 = fmaxf(0.0f, fSlow87 * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp109 * fTemp28 + fTemp114)) + fTemp30 * fTemp110 * fTemp112 * dsp->fRec76[1]);
			float fTemp116 = dsp->fConst4 * fTemp115;
			float fTemp117 = dsp->fRec81[1] + fTemp116;
			float fTemp118 = fmodf(fTemp117, 1.0f);
			float fTemp119 = fTemp118 / fTemp115;
			float fTemp120 = dsp->fConst0 * fTemp119;
			float fTemp121 = 1.0f - fTemp120;
			float fTemp122 = dsp->fRec80[1] + dsp->fConst4 * fTemp113 * fTemp121;
			int iTemp123 = dsp->iRec82[1] == 0;
			float fTemp124 = dsp->fConst4 * fTemp113;
			float fTemp125 = dsp->fConst5 * fTemp113;
			float fTemp126 = fTemp42 + fTemp44;
			float fTemp127 = ((fTemp124 >= 0.25f) ? 0.5f : fmaxf(fTemp125, fminf(1.0f - fTemp125, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp109 * fTemp43 + fTemp126 : 1.0f)))));
			int iTemp128 = fTemp117 >= 1.0f;
			int iTemp129 = (fSlow52 + (float)(iTemp128)) == 2.0f;
			int iTemp130 = ((((fTemp122 >= 1.0f) + ((iTemp123 + (fTemp122 >= fTemp127)) == 2)) > 0) + (iTemp129 == 0)) > 0;
			float fTemp131 = dsp->fRec80[1] + fTemp124;
			float fTemp132 = fmodf(fTemp131, 1.0f);
			int iTemp133 = fTemp132 >= fTemp127;
			float fTemp134 = fTemp132 - fTemp127;
			float fTemp135 = fTemp124 + dsp->fRec78[1] - fTemp127;
			float fTemp136 = 1.0f - fTemp127;
			float fTemp137 = fSlow55 * fTemp110 * fTemp112 * (1.0f / fTemp136 + 1.0f / fTemp127);
			float fTemp138 = fTemp134 / fTemp135;
			float fTemp139 = 1.0f - fTemp138;
			int iTemp140 = fTemp131 >= 1.0f;
			float fTemp141 = fTemp132 / fTemp113;
			float fTemp142 = dsp->fConst0 * fTemp141;
			float fTemp143 = 1.0f - fTemp142;
			float fTemp144 = mydsp_faustpower2_f(fTemp118);
			float fTemp145 = fmodf(fTemp122, 1.0f);
			int iTemp146 = fTemp145 < fTemp127;
			float fTemp147 = fTemp145 + 2.0f * fSlow54 * (((iTemp146) ? 0.0f : 1.0f) - fTemp145) + fSlow55 * (((iTemp146) ? fTemp145 / fTemp127 : 1.0f - (fTemp145 - fTemp127) / fTemp136) - fTemp145);
			float fTemp148 = mydsp_faustpower2_f(fTemp115);
			dsp->fRec76[0] = dsp->fRec84[1] + ((iTemp130) ? ((dsp->iRec82[1]) ? ((iTemp140) ? dsp->fConst4 * fTemp137 * (fTemp143 * (0.375f * fTemp143 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp143)) + 0.1875f) - dsp->fConst6 * (fSlow56 * mydsp_faustpower2_f(fTemp132) / (mydsp_faustpower2_f(fTemp110) * mydsp_faustpower2_f(fTemp112))) : 0.0f) : ((iTemp133) ? fSlow54 * mydsp_faustpower2_f(fTemp134) / mydsp_faustpower2_f(fTemp135) - dsp->fConst4 * fTemp137 * (fTemp139 * (0.375f * fTemp139 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp139)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp129) ? dsp->fConst6 * (fTemp144 * fTemp147 / fTemp148) : 0.0f);
			float fTemp149 = dsp->fConst5 * fTemp115;
			float fTemp150 = fTemp68 + fTemp70;
			float fTemp151 = ((fTemp116 >= 0.25f) ? 0.5f : fmaxf(fTemp149, fminf(1.0f - fTemp149, ((iSlow57) ? fTemp109 * fTemp69 + fTemp150 : 1.0f) + fTemp71 * dsp->fRec76[1])));
			int iTemp152 = fTemp118 >= fTemp151;
			float fTemp153 = fTemp118 - fTemp151;
			float fTemp154 = fTemp116 + dsp->fRec79[1] - fTemp151;
			float fTemp155 = 1.0f - fTemp151;
			float fTemp156 = fSlow69 * fTemp115 * (1.0f / fTemp151 + 1.0f / fTemp155);
			float fTemp157 = fTemp153 / fTemp154;
			float fTemp158 = 1.0f - fTemp157;
			float fRec77 = dsp->fRec85[1] + ((dsp->iRec83[1]) ? ((iTemp128) ? dsp->fConst4 * fTemp156 * (fTemp121 * (0.375f * fTemp121 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp121)) + 0.1875f) - dsp->fConst6 * (fSlow70 * fTemp144 / fTemp148) : 0.0f) : ((iTemp152) ? fSlow68 * mydsp_faustpower2_f(fTemp153) / mydsp_faustpower2_f(fTemp154) - dsp->fConst4 * fTemp156 * (fTemp158 * (0.375f * fTemp158 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp158)) + 0.1875f) : 0.0f));
			dsp->fRec78[0] = fTemp127;
			dsp->fRec79[0] = fTemp151;
			float fTemp159 = ((iTemp129) ? fTemp113 * fTemp118 / fTemp115 : fTemp132);
			dsp->fRec80[0] = fTemp159;
			dsp->fRec81[0] = fTemp118;
			dsp->iRec82[0] = (((iTemp129 + ((dsp->iRec82[1] + iTemp140) == 2) + ((iTemp123 + (fTemp132 < fTemp127)) == 2)) > 0) ? 0 : 1);
			int iTemp160 = fTemp118 < fTemp151;
			dsp->iRec83[0] = (((((iTemp128 + dsp->iRec83[1]) == 2) + (((dsp->iRec83[1] == 0) + iTemp160) == 2)) > 0) ? 0 : 1);
			int iTemp161 = fTemp159 < fTemp127;
			float fTemp162 = fTemp120 - 1.0f;
			dsp->fRec84[0] = fTemp159 + 2.0f * fSlow54 * (((iTemp161) ? 0.0f : 1.0f) - fTemp159) + fSlow55 * (((iTemp161) ? fTemp159 / fTemp127 : 1.0f - (fTemp159 - fTemp127) / fTemp136) - fTemp159) + ((iTemp130) ? ((dsp->iRec82[1]) ? ((iTemp140) ? dsp->fConst4 * fTemp137 * (dsp->fConst0 * (fTemp132 * (dsp->fConst7 * fTemp141 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp132) / (mydsp_faustpower3_f(fTemp110) * mydsp_faustpower3_f(fTemp112)))) / fTemp113) + 0.1875f) - 0.5f * fSlow56 * fTemp143 * (fTemp142 - 1.0f) : 0.0f) : ((iTemp133) ? fSlow54 * fTemp139 * (fTemp138 - 1.0f) - dsp->fConst4 * fTemp137 * (fTemp134 * (0.375f * fTemp138 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp134) / mydsp_faustpower3_f(fTemp135))) / fTemp135 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp129) ? 0.5f * fTemp121 * fTemp147 * fTemp162 : 0.0f);
			dsp->fRec85[0] = fTemp118 + 2.0f * fSlow68 * (((iTemp160) ? 0.0f : 1.0f) - fTemp118) + fSlow69 * (((iTemp160) ? fTemp118 / fTemp151 : 1.0f - fTemp153 / fTemp155) - fTemp118) + ((dsp->iRec83[1]) ? ((iTemp128) ? dsp->fConst4 * fTemp156 * (dsp->fConst0 * (fTemp118 * (dsp->fConst7 * fTemp119 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp118) / mydsp_faustpower3_f(fTemp115))) / fTemp115) + 0.1875f) - 0.5f * fSlow70 * fTemp121 * fTemp162 : 0.0f) : ((iTemp152) ? fSlow68 * fTemp158 * (fTemp157 - 1.0f) - dsp->fConst4 * fTemp156 * (fTemp153 * (0.375f * fTemp157 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp153) / mydsp_faustpower3_f(fTemp154))) / fTemp154 + 0.1875f) : 0.0f));
			float fTemp163 = 2.0f * dsp->fRec76[0] + -1.0f;
			float fTemp164 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow82 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp109 * fTemp18 + fTemp85 * fTemp163)))), 1.0f) + 1.0f));
			float fTemp165 = (0.5f * (dsp->fRec63[0] * fTemp163 + fTemp87 + dsp->fRec62[0] * (2.0f * fRec77 + -1.0f)) - dsp->fRec71[1]) * fTemp164;
			float fTemp166 = fTemp164 + 1.0f;
			float fTemp167 = 1.0f - fTemp164 / fTemp166;
			float fTemp168 = fTemp164 * ((dsp->fRec71[1] + (fTemp165 + 0.21521576f * fTemp89 * dsp->fRec69[1] * fTemp167 - dsp->fRec70[1]) / fTemp166) / (1.0f - 0.21521576f * (fTemp89 * fTemp164 * fTemp167 / fTemp166)) - dsp->fRec69[1]) / fTemp166;
			dsp->fRec69[0] = dsp->fRec69[1] + 2.0f * fTemp168;
			float fTemp169 = dsp->fRec69[1] + fTemp168;
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * (fTemp164 * (0.21521576f * fTemp89 * fTemp169 - dsp->fRec70[1]) / fTemp166);
			dsp->fRec71[0] = dsp->fRec71[1] + 2.0f * (fTemp165 / fTemp166);
			float fRec72 = fTemp169;
			int iTemp170 = dsp->iRec86[1] == 0;
			int iTemp171 = dsp->iRec86[1] == 1;
			float fTemp172 = ((iTemp9) ? 0.0f : dsp->fRec87[1]);
			dsp->iRec86[0] = ((iSlow84) ? ((iTemp170) ? 1 : ((iTemp171) ? ((fTemp172 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp173 = ((dsp->iRec86[1] == 2) ? fSlow77 : 0.0f);
			dsp->fRec88[0] = fTemp105 * dsp->fRec88[1] + fTemp106 * ((iTemp9) ? 1.0f : fTemp172);
			float fTemp174 = ((iTemp170) ? dsp->fRec88[0] : 1.0f);
			float fTemp175 = ((fTemp173 == fTemp174) ? 0.5f : (fTemp172 - fTemp173) / (fTemp174 - fTemp173));
			dsp->fRec87[0] = fmaxf(fTemp173, fminf(1.0f, fTemp172 + 0.25f * (((iTemp170) ? -(fSlow80 * dsp->fRec88[0]) : ((iTemp171) ? fSlow79 : fSlow78)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp175 + -1.0f) + (1.0f - fTemp175)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec87[0]);
			int iTemp176 = dsp->iRec93[1] == 0;
			int iTemp177 = dsp->iRec93[1] == 1;
			float fTemp178 = ((iTemp9) ? 0.0f : dsp->fRec94[1]);
			dsp->iRec93[0] = ((iSlow91) ? ((iTemp176) ? 1 : ((iTemp177) ? ((fTemp178 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp179 = ((dsp->iRec93[1] == 2) ? fSlow15 : 0.0f);
			dsp->iVec3[0] = iSlow92;
			int iTemp180 = (dsp->iVec3[1] <= 0) & iSlow93;
			float fTemp181 = (float)(1 - iTemp180);
			float fTemp182 = (float)(iTemp180);
			dsp->fRec95[0] = dsp->fRec95[1] * fTemp181 + ((iTemp9) ? 1.0f : fTemp178) * fTemp182;
			float fTemp183 = ((iTemp176) ? dsp->fRec95[0] : 1.0f);
			float fTemp184 = ((fTemp179 == fTemp183) ? 0.5f : (fTemp178 - fTemp179) / (fTemp183 - fTemp179));
			dsp->fRec94[0] = fmaxf(fTemp179, fminf(1.0f, fTemp178 + 0.25f * (((iTemp176) ? -(fSlow18 * dsp->fRec95[0]) : ((iTemp177) ? fSlow17 : fSlow16)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp184 + -1.0f) + (1.0f - fTemp184)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec94[0]);
			float fTemp185 = dsp->fRec94[0];
			float fTemp186 = ((iSlow23) ? fSlow94 * fTemp19 : fTemp20);
			float fTemp187 = powf(2.0f, 0.00083333335f * (fTemp111 + 1.2e+03f * fTemp185 * fTemp23));
			float fTemp188 = fTemp186 * fTemp187;
			float fTemp189 = fmaxf(0.0f, fSlow94 * powf(2.0f, 0.00083333335f * (fTemp114 + 1.2e+03f * fTemp185 * fTemp28)) + fTemp30 * fTemp186 * fTemp187 * dsp->fRec96[1]);
			float fTemp190 = dsp->fConst4 * fTemp189;
			float fTemp191 = dsp->fRec101[1] + fTemp190;
			float fTemp192 = fmodf(fTemp191, 1.0f);
			float fTemp193 = fTemp192 / fTemp189;
			float fTemp194 = dsp->fConst0 * fTemp193;
			float fTemp195 = 1.0f - fTemp194;
			float fTemp196 = dsp->fRec100[1] + dsp->fConst4 * fTemp188 * fTemp195;
			int iTemp197 = dsp->iRec102[1] == 0;
			float fTemp198 = dsp->fConst4 * fTemp188;
			float fTemp199 = dsp->fConst5 * fTemp188;
			float fTemp200 = ((fTemp198 >= 0.25f) ? 0.5f : fmaxf(fTemp199, fminf(1.0f - fTemp199, ((iSlow43) ? 0.5f : ((iSlow44) ? fTemp126 + fTemp185 * fTemp43 : 1.0f)))));
			int iTemp201 = fTemp191 >= 1.0f;
			int iTemp202 = (fSlow52 + (float)(iTemp201)) == 2.0f;
			int iTemp203 = ((((fTemp196 >= 1.0f) + ((iTemp197 + (fTemp196 >= fTemp200)) == 2)) > 0) + (iTemp202 == 0)) > 0;
			float fTemp204 = dsp->fRec100[1] + fTemp198;
			float fTemp205 = fmodf(fTemp204, 1.0f);
			int iTemp206 = fTemp205 >= fTemp200;
			float fTemp207 = fTemp205 - fTemp200;
			float fTemp208 = fTemp198 + dsp->fRec98[1] - fTemp200;
			float fTemp209 = 1.0f - fTemp200;
			float fTemp210 = fSlow55 * fTemp186 * fTemp187 * (1.0f / fTemp209 + 1.0f / fTemp200);
			float fTemp211 = fTemp207 / fTemp208;
			float fTemp212 = 1.0f - fTemp211;
			int iTemp213 = fTemp204 >= 1.0f;
			float fTemp214 = fTemp205 / fTemp188;
			float fTemp215 = dsp->fConst0 * fTemp214;
			float fTemp216 = 1.0f - fTemp215;
			float fTemp217 = mydsp_faustpower2_f(fTemp192);
			float fTemp218 = fmodf(fTemp196, 1.0f);
			int iTemp219 = fTemp218 < fTemp200;
			float fTemp220 = fTemp218 + 2.0f * fSlow54 * (((iTemp219) ? 0.0f : 1.0f) - fTemp218) + fSlow55 * (((iTemp219) ? fTemp218 / fTemp200 : 1.0f - (fTemp218 - fTemp200) / fTemp209) - fTemp218);
			float fTemp221 = mydsp_faustpower2_f(fTemp189);
			dsp->fRec96[0] = dsp->fRec104[1] + ((iTemp203) ? ((dsp->iRec102[1]) ? ((iTemp213) ? dsp->fConst4 * fTemp210 * (fTemp216 * (0.375f * fTemp216 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp216)) + 0.1875f) - dsp->fConst6 * (fSlow56 * mydsp_faustpower2_f(fTemp205) / (mydsp_faustpower2_f(fTemp186) * mydsp_faustpower2_f(fTemp187))) : 0.0f) : ((iTemp206) ? fSlow54 * mydsp_faustpower2_f(fTemp207) / mydsp_faustpower2_f(fTemp208) - dsp->fConst4 * fTemp210 * (fTemp212 * (0.375f * fTemp212 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp212)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp202) ? dsp->fConst6 * (fTemp217 * fTemp220 / fTemp221) : 0.0f);
			float fTemp222 = dsp->fConst5 * fTemp189;
			float fTemp223 = ((fTemp190 >= 0.25f) ? 0.5f : fmaxf(fTemp222, fminf(1.0f - fTemp222, ((iSlow57) ? fTemp150 + fTemp185 * fTemp69 : 1.0f) + fTemp71 * dsp->fRec96[1])));
			int iTemp224 = fTemp192 >= fTemp223;
			float fTemp225 = fTemp192 - fTemp223;
			float fTemp226 = fTemp190 + dsp->fRec99[1] - fTemp223;
			float fTemp227 = 1.0f - fTemp223;
			float fTemp228 = fSlow69 * fTemp189 * (1.0f / fTemp223 + 1.0f / fTemp227);
			float fTemp229 = fTemp225 / fTemp226;
			float fTemp230 = 1.0f - fTemp229;
			float fRec97 = dsp->fRec105[1] + ((dsp->iRec103[1]) ? ((iTemp201) ? dsp->fConst4 * fTemp228 * (fTemp195 * (0.375f * fTemp195 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp195)) + 0.1875f) - dsp->fConst6 * (fSlow70 * fTemp217 / fTemp221) : 0.0f) : ((iTemp224) ? fSlow68 * mydsp_faustpower2_f(fTemp225) / mydsp_faustpower2_f(fTemp226) - dsp->fConst4 * fTemp228 * (fTemp230 * (0.375f * fTemp230 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp230)) + 0.1875f) : 0.0f));
			dsp->fRec98[0] = fTemp200;
			dsp->fRec99[0] = fTemp223;
			float fTemp231 = ((iTemp202) ? fTemp188 * fTemp192 / fTemp189 : fTemp205);
			dsp->fRec100[0] = fTemp231;
			dsp->fRec101[0] = fTemp192;
			dsp->iRec102[0] = (((iTemp202 + ((dsp->iRec102[1] + iTemp213) == 2) + ((iTemp197 + (fTemp205 < fTemp200)) == 2)) > 0) ? 0 : 1);
			int iTemp232 = fTemp192 < fTemp223;
			dsp->iRec103[0] = (((((iTemp201 + dsp->iRec103[1]) == 2) + (((dsp->iRec103[1] == 0) + iTemp232) == 2)) > 0) ? 0 : 1);
			int iTemp233 = fTemp231 < fTemp200;
			float fTemp234 = fTemp194 - 1.0f;
			dsp->fRec104[0] = fTemp231 + 2.0f * fSlow54 * (((iTemp233) ? 0.0f : 1.0f) - fTemp231) + fSlow55 * (((iTemp233) ? fTemp231 / fTemp200 : 1.0f - (fTemp231 - fTemp200) / fTemp209) - fTemp231) + ((iTemp203) ? ((dsp->iRec102[1]) ? ((iTemp213) ? dsp->fConst4 * fTemp210 * (dsp->fConst0 * (fTemp205 * (dsp->fConst7 * fTemp214 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp205) / (mydsp_faustpower3_f(fTemp186) * mydsp_faustpower3_f(fTemp187)))) / fTemp188) + 0.1875f) - 0.5f * fSlow56 * fTemp216 * (fTemp215 - 1.0f) : 0.0f) : ((iTemp206) ? fSlow54 * fTemp212 * (fTemp211 - 1.0f) - dsp->fConst4 * fTemp210 * (fTemp207 * (0.375f * fTemp211 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp207) / mydsp_faustpower3_f(fTemp208))) / fTemp208 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp202) ? 0.5f * fTemp195 * fTemp220 * fTemp234 : 0.0f);
			dsp->fRec105[0] = fTemp192 + 2.0f * fSlow68 * (((iTemp232) ? 0.0f : 1.0f) - fTemp192) + fSlow69 * (((iTemp232) ? fTemp192 / fTemp223 : 1.0f - fTemp225 / fTemp227) - fTemp192) + ((dsp->iRec103[1]) ? ((iTemp201) ? dsp->fConst4 * fTemp228 * (dsp->fConst0 * (fTemp192 * (dsp->fConst7 * fTemp193 + -0.5f - dsp->fConst8 * (mydsp_faustpower3_f(fTemp192) / mydsp_faustpower3_f(fTemp189))) / fTemp189) + 0.1875f) - 0.5f * fSlow70 * fTemp195 * fTemp234 : 0.0f) : ((iTemp224) ? fSlow68 * fTemp230 * (fTemp229 - 1.0f) - dsp->fConst4 * fTemp228 * (fTemp225 * (0.375f * fTemp229 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp225) / mydsp_faustpower3_f(fTemp226))) / fTemp226 + 0.1875f) : 0.0f));
			float fTemp235 = 2.0f * dsp->fRec96[0] + -1.0f;
			float fTemp236 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow89 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp185 * fTemp18 + fTemp85 * fTemp235)))), 1.0f) + 1.0f));
			float fTemp237 = (0.5f * (dsp->fRec63[0] * fTemp235 + fTemp87 + dsp->fRec62[0] * (2.0f * fRec97 + -1.0f)) - dsp->fRec91[1]) * fTemp236;
			float fTemp238 = fTemp236 + 1.0f;
			float fTemp239 = 1.0f - fTemp236 / fTemp238;
			float fTemp240 = fTemp236 * ((dsp->fRec91[1] + (fTemp237 + 0.21521576f * fTemp89 * dsp->fRec89[1] * fTemp239 - dsp->fRec90[1]) / fTemp238) / (1.0f - 0.21521576f * (fTemp89 * fTemp236 * fTemp239 / fTemp238)) - dsp->fRec89[1]) / fTemp238;
			dsp->fRec89[0] = dsp->fRec89[1] + 2.0f * fTemp240;
			float fTemp241 = dsp->fRec89[1] + fTemp240;
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * (fTemp236 * (0.21521576f * fTemp89 * fTemp241 - dsp->fRec90[1]) / fTemp238);
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * (fTemp237 / fTemp238);
			float fRec92 = fTemp241;
			int iTemp242 = dsp->iRec106[1] == 0;
			int iTemp243 = dsp->iRec106[1] == 1;
			float fTemp244 = ((iTemp9) ? 0.0f : dsp->fRec107[1]);
			dsp->iRec106[0] = ((iSlow91) ? ((iTemp242) ? 1 : ((iTemp243) ? ((fTemp244 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp245 = ((dsp->iRec106[1] == 2) ? fSlow77 : 0.0f);
			dsp->fRec108[0] = fTemp181 * dsp->fRec108[1] + fTemp182 * ((iTemp9) ? 1.0f : fTemp244);
			float fTemp246 = ((iTemp242) ? dsp->fRec108[0] : 1.0f);
			float fTemp247 = ((fTemp245 == fTemp246) ? 0.5f : (fTemp244 - fTemp245) / (fTemp246 - fTemp245));
			dsp->fRec107[0] = fmaxf(fTemp245, fminf(1.0f, fTemp244 + 0.25f * (((iTemp242) ? -(fSlow80 * dsp->fRec108[0]) : ((iTemp243) ? fSlow79 : fSlow78)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp247 + -1.0f) + (1.0f - fTemp247)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec107[0]);
			float fTemp248 = 0.12f * (fRec3 * dsp->fRec67[0] + fRec72 * dsp->fRec87[0] + fRec92 * dsp->fRec107[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp248);
			output1[i0] = (FAUSTFLOAT)(fTemp248);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->iRec15[1] = dsp->iRec15[0];
			dsp->iRec13[1] = dsp->iRec13[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec29[1] = dsp->fRec29[0];
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
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->iRec25[1] = dsp->iRec25[0];
			dsp->iRec26[1] = dsp->iRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->iRec66[1] = dsp->iRec66[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->iRec73[1] = dsp->iRec73[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->iRec82[1] = dsp->iRec82[0];
			dsp->iRec83[1] = dsp->iRec83[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->iRec86[1] = dsp->iRec86[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->iRec93[1] = dsp->iRec93[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->iRec102[1] = dsp->iRec102[0];
			dsp->iRec103[1] = dsp->iRec103[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->iRec106[1] = dsp->iRec106[0];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fRec107[1] = dsp->fRec107[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
