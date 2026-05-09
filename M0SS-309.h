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
	float fConst2;
	FAUSTFLOAT fHslider1;
	float fConst3;
	float fRec4[2];
	int iRec5[2];
	FAUSTFLOAT fHslider2;
	float fRec6[2];
	FAUSTFLOAT fHslider3;
	float fRec7[2];
	FAUSTFLOAT fHslider4;
	float fRec8[2];
	FAUSTFLOAT fHslider5;
	float fConst4;
	FAUSTFLOAT fHslider6;
	float fRec10[2];
	float fRec9[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider7;
	float fRec11[2];
	FAUSTFLOAT fHslider8;
	float fRec12[2];
	FAUSTFLOAT fButton0;
	int iRec15[2];
	int iRec13[2];
	FAUSTFLOAT fHslider9;
	FAUSTFLOAT fHslider10;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	int iVec1[2];
	float fRec16[2];
	float fRec14[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider13;
	float fRec17[2];
	FAUSTFLOAT fHslider14;
	float fRec18[2];
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	float fRec24[2];
	FAUSTFLOAT fHslider18;
	float fRec25[2];
	FAUSTFLOAT fHslider19;
	float fRec26[2];
	FAUSTFLOAT fHslider20;
	float fRec27[2];
	FAUSTFLOAT fHslider21;
	float fRec28[2];
	FAUSTFLOAT fHslider22;
	float fRec29[2];
	FAUSTFLOAT fHslider23;
	float fRec30[2];
	float fConst5;
	FAUSTFLOAT fHslider24;
	FAUSTFLOAT fHslider25;
	float fRec31[2];
	FAUSTFLOAT fHslider26;
	float fRec32[2];
	FAUSTFLOAT fHslider27;
	float fRec33[2];
	FAUSTFLOAT fHslider28;
	float fRec34[2];
	FAUSTFLOAT fHslider29;
	float fRec35[2];
	FAUSTFLOAT fHslider30;
	float fRec36[2];
	FAUSTFLOAT fHslider31;
	float fRec37[2];
	float fRec19[2];
	float fRec20[2];
	float fConst6;
	float fConst7;
	float fRec21[2];
	float fConst8;
	int iRec23[2];
	FAUSTFLOAT fHslider32;
	float fRec38[2];
	FAUSTFLOAT fHslider33;
	float fRec39[2];
	FAUSTFLOAT fHslider34;
	float fRec40[2];
	FAUSTFLOAT fHslider35;
	float fRec41[2];
	FAUSTFLOAT fHslider36;
	float fRec48[2];
	FAUSTFLOAT fHslider37;
	float fRec49[2];
	FAUSTFLOAT fHslider38;
	float fRec50[2];
	FAUSTFLOAT fHslider39;
	float fRec51[2];
	FAUSTFLOAT fHslider40;
	float fRec52[2];
	FAUSTFLOAT fHslider41;
	float fRec53[2];
	FAUSTFLOAT fHslider42;
	float fRec54[2];
	FAUSTFLOAT fHslider43;
	FAUSTFLOAT fHslider44;
	float fRec55[2];
	FAUSTFLOAT fHslider45;
	float fRec56[2];
	FAUSTFLOAT fHslider46;
	float fRec57[2];
	FAUSTFLOAT fHslider47;
	float fRec58[2];
	FAUSTFLOAT fHslider48;
	float fRec59[2];
	FAUSTFLOAT fHslider49;
	float fRec60[2];
	FAUSTFLOAT fHslider50;
	float fRec61[2];
	FAUSTFLOAT fHslider51;
	float fRec62[2];
	FAUSTFLOAT fHslider52;
	float fRec63[2];
	float fRec42[2];
	FAUSTFLOAT fHslider53;
	float fRec43[2];
	float fRec44[2];
	float fRec45[2];
	int iRec47[2];
	FAUSTFLOAT fHslider54;
	float fRec64[2];
	FAUSTFLOAT fHslider55;
	float fRec65[2];
	float fRec0[2];
	float fRec1[2];
	float fRec3[2];
	int iRec66[2];
	FAUSTFLOAT fHslider56;
	FAUSTFLOAT fHslider57;
	FAUSTFLOAT fHslider58;
	FAUSTFLOAT fHslider59;
	float fRec68[2];
	float fRec67[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider60;
	FAUSTFLOAT fButton1;
	int iRec73[2];
	int iVec2[2];
	float fRec75[2];
	float fRec74[2];
	FAUSTFLOAT fVbargraph3;
	float fRec76[2];
	float fRec77[2];
	float fRec78[2];
	int iRec80[2];
	float fRec81[2];
	float fRec82[2];
	float fRec83[2];
	float fRec84[2];
	int iRec86[2];
	float fRec69[2];
	float fRec70[2];
	float fRec72[2];
	int iRec87[2];
	float fRec89[2];
	float fRec88[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fHslider61;
	FAUSTFLOAT fButton2;
	int iRec94[2];
	int iVec3[2];
	float fRec96[2];
	float fRec95[2];
	FAUSTFLOAT fVbargraph5;
	float fRec97[2];
	float fRec98[2];
	float fRec99[2];
	int iRec101[2];
	float fRec102[2];
	float fRec103[2];
	float fRec104[2];
	float fRec105[2];
	int iRec107[2];
	float fRec90[2];
	float fRec91[2];
	float fRec93[2];
	int iRec108[2];
	float fRec110[2];
	float fRec109[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider1 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider9 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider11 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider29 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider35 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider36 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider37 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider38 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider39 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider40 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider41 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider42 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider44 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider45 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider46 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider47 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider48 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider49 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider50 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider51 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider52 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider53 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider54 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider55 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider56 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider57 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider58 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider59 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider60 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider61 = (FAUSTFLOAT)(4e+01f);
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
			dsp->fRec24[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec25[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec26[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec27[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec28[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec29[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec30[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec31[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec32[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec33[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec34[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec35[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec36[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec37[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec19[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec20[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec21[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->iRec23[l34] = 0;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec38[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec39[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec40[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec41[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec48[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec49[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec50[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec51[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec52[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec53[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec54[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec55[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec56[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec57[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec58[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec59[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec60[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec61[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec62[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec63[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec42[l55] = 0.0f;
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
			dsp->fRec44[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec45[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->iRec47[l59] = 0;
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
			dsp->fRec65[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec0[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec1[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec3[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->iRec66[l65] = 0;
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
			dsp->fRec67[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->iRec73[l68] = 0;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->iVec2[l69] = 0;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec75[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec74[l71] = 0.0f;
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
			dsp->fRec77[l73] = 0.0f;
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
			dsp->iRec80[l75] = 0;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec81[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec82[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec83[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec84[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->iRec86[l80] = 0;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec69[l81] = 0.0f;
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
			dsp->fRec72[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->iRec87[l84] = 0;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec89[l85] = 0.0f;
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
			dsp->iRec94[l87] = 0;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->iVec3[l88] = 0;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec96[l89] = 0.0f;
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
			dsp->fRec97[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec98[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec99[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->iRec101[l94] = 0;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec102[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec103[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec104[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec105[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->iRec107[l99] = 0;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec90[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec91[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec93[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->iRec108[l103] = 0;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec110[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec109[l105] = 0.0f;
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
	dsp->fConst6 = 0.375f * dsp->fConst0;
	dsp->fConst7 = 0.0625f * mydsp_faustpower3_f(dsp->fConst0);
	dsp->fConst8 = 0.5f * mydsp_faustpower2_f(dsp->fConst0);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider58, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider57, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "mod", "0");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider56, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider59, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "10", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "49");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider39, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider47, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider11, "mod", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider11, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider10, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "mod", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider9, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "mod", "21");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider12, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "filter");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "ctf", &dsp->fHslider1, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider34, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "mod", "16");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider6, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "sel", "4");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider5, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider36, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider51, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider38, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider46, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider52, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "46");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.vcf", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider0, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider60, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider61, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider55, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider55, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider35, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "mod", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc2", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "notes");
	ui_interface->addButton(ui_interface->uiInterface, "gate_0", &dsp->fButton0);
	ui_interface->addButton(ui_interface->uiInterface, "gate_1", &dsp->fButton1);
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "alt", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider50, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "sel", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "sel", "28");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider43, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "alt", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "alt-sel", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider15, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "alt", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider29, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider16, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-6.4e+03f, (FAUSTFLOAT)6.4e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "sel", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "62");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "poly.mod", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider0) + -69.0f));
	float fSlow1 = 0.33333334f * log10f(fSlow0);
	float fSlow2 = dsp->fConst2 * (float)(dsp->fHslider1);
	float fSlow3 = dsp->fConst2 * (float)(dsp->fHslider2);
	float fSlow4 = dsp->fConst2 * (float)(dsp->fHslider3);
	float fSlow5 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow6 = (float)(dsp->fHslider5);
	int iSlow7 = fSlow6 >= 2.0f;
	int iSlow8 = fSlow6 >= 1.0f;
	float fSlow9 = dsp->fConst2 * (float)(dsp->fHslider6);
	float fSlow10 = dsp->fConst2 * (float)(dsp->fHslider7);
	float fSlow11 = dsp->fConst2 * (float)(dsp->fHslider8);
	float fSlow12 = (float)(dsp->fButton0);
	int iSlow13 = fSlow12 > 0.0f;
	float fSlow14 = (float)(dsp->fHslider9);
	float fSlow15 = (fSlow14 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider10)) + 0.001f));
	float fSlow16 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider11)) + 0.001f));
	float fSlow17 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider12)) + 0.001f));
	int iSlow18 = fSlow12 == 0.0f;
	int iSlow19 = iSlow18 > 0;
	float fSlow20 = dsp->fConst2 * (float)(dsp->fHslider13);
	float fSlow21 = dsp->fConst2 * (float)(dsp->fHslider14);
	int iSlow22 = (float)(dsp->fHslider15) >= 1.0f;
	float fSlow23 = fminf(fmaxf(-2.4e+03f, (float)(dsp->fHslider16)), 2.4e+03f);
	float fSlow24 = dsp->fConst2 * (float)(dsp->fHslider17);
	float fSlow25 = 4.4e+02f * fSlow0;
	float fSlow26 = dsp->fConst2 * (float)(dsp->fHslider18);
	float fSlow27 = dsp->fConst2 * (float)(dsp->fHslider19);
	float fSlow28 = dsp->fConst2 * (float)(dsp->fHslider20);
	float fSlow29 = dsp->fConst2 * (float)(dsp->fHslider21);
	float fSlow30 = dsp->fConst2 * (float)(dsp->fHslider22);
	float fSlow31 = dsp->fConst2 * (float)(dsp->fHslider23);
	float fSlow32 = (float)(dsp->fHslider24);
	int iSlow33 = fSlow32 >= 2.0f;
	int iSlow34 = fSlow32 >= 1.0f;
	float fSlow35 = dsp->fConst2 * (float)(dsp->fHslider25);
	float fSlow36 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider28);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow42 = (float)(((iSlow33) ? 0 : ((iSlow34) ? 1 : 0)));
	float fSlow43 = fmaxf(fSlow42 + -0.5f, 0.0f);
	float fSlow44 = fmaxf(1.0f - 2.0f * fSlow42, 0.0f);
	float fSlow45 = 1.0f - fSlow44;
	float fSlow46 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow47 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow52 = dsp->fConst2 * (float)(dsp->fHslider38);
	float fSlow53 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow54 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow55 = dsp->fConst2 * (float)(dsp->fHslider41);
	float fSlow56 = dsp->fConst2 * (float)(dsp->fHslider42);
	int iSlow57 = (float)(dsp->fHslider43) >= 1.0f;
	float fSlow58 = dsp->fConst2 * (float)(dsp->fHslider44);
	float fSlow59 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider46);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider47);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow65 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow66 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow67 = (float)(dsp->fHslider53);
	float fSlow68 = (float)(((iSlow57) ? 1 : 0));
	float fSlow69 = fmaxf(fSlow68 + -0.5f, 0.0f);
	float fSlow70 = fmaxf(1.0f - 2.0f * fSlow68, 0.0f);
	float fSlow71 = 1.0f - fSlow70;
	float fSlow72 = dsp->fConst2 * (float)(dsp->fHslider54);
	float fSlow73 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow74 = (float)(dsp->fHslider56);
	float fSlow75 = (fSlow74 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider57)) + 0.001f));
	float fSlow76 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider58)) + 0.001f));
	float fSlow77 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider59)) + 0.001f));
	float fSlow78 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider60) + -69.0f));
	float fSlow79 = 0.33333334f * log10f(fSlow78);
	float fSlow80 = (float)(dsp->fButton1);
	int iSlow81 = fSlow80 > 0.0f;
	int iSlow82 = fSlow80 == 0.0f;
	int iSlow83 = iSlow82 > 0;
	float fSlow84 = 4.4e+02f * fSlow78;
	float fSlow85 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider61) + -69.0f));
	float fSlow86 = 0.33333334f * log10f(fSlow85);
	float fSlow87 = (float)(dsp->fButton2);
	int iSlow88 = fSlow87 > 0.0f;
	int iSlow89 = fSlow87 == 0.0f;
	int iSlow90 = iSlow89 > 0;
	float fSlow91 = 4.4e+02f * fSlow85;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec4[0] = fSlow2 + dsp->fConst3 * dsp->fRec4[1];
			dsp->iRec5[0] = 1103515245 * dsp->iRec5[1] + 12345;
			float fTemp0 = (float)(dsp->iRec5[0]);
			dsp->fRec6[0] = fSlow3 + dsp->fConst3 * dsp->fRec6[1];
			dsp->fRec7[0] = fSlow4 + dsp->fConst3 * dsp->fRec7[1];
			float fTemp1 = mydsp_faustpower2_f(dsp->fRec7[0]);
			dsp->fRec8[0] = fSlow5 + dsp->fConst3 * dsp->fRec8[1];
			float fTemp2 = 1.1175871e-06f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec6[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec8[0]));
			dsp->fRec10[0] = fSlow9 + dsp->fConst3 * dsp->fRec10[1];
			float fTemp3 = ((1 - dsp->iVec0[1]) ? 0.0f : dsp->fRec9[1] + dsp->fConst4 * dsp->fRec10[0]);
			dsp->fRec9[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = 2.0f * dsp->fRec9[0] + -1.0f;
			float fTemp5 = ((iSlow7) ? 2.0f * (1.0f - fabsf(fTemp4)) + -1.0f : ((iSlow8) ? 2.0f * (float)(dsp->fRec9[0] <= 0.5f) + -1.0f : fTemp4));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp5);
			float fTemp6 = fTemp5;
			dsp->fRec11[0] = fSlow10 + dsp->fConst3 * dsp->fRec11[1];
			dsp->fRec12[0] = fSlow11 + dsp->fConst3 * dsp->fRec12[1];
			float fTemp7 = fTemp6 * (mydsp_faustpower2_f(dsp->fRec11[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec12[0]));
			int iTemp8 = dsp->iRec13[1] == 0;
			int iTemp9 = dsp->iRec13[1] == 1;
			dsp->iRec15[0] = dsp->iRec15[1] + 1;
			int iTemp10 = (dsp->iRec15[0] + -1) == 0;
			float fTemp11 = ((iTemp10) ? 0.0f : dsp->fRec14[1]);
			dsp->iRec13[0] = ((iSlow13) ? ((iTemp8) ? 1 : ((iTemp9) ? ((fTemp11 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp12 = ((dsp->iRec13[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec1[0] = iSlow18;
			int iTemp13 = (dsp->iVec1[1] <= 0) & iSlow19;
			float fTemp14 = (float)(1 - iTemp13);
			float fTemp15 = (float)(iTemp13);
			dsp->fRec16[0] = dsp->fRec16[1] * fTemp14 + ((iTemp10) ? 1.0f : fTemp11) * fTemp15;
			float fTemp16 = ((iTemp8) ? dsp->fRec16[0] : 1.0f);
			float fTemp17 = ((fTemp12 == fTemp16) ? 0.5f : (fTemp11 - fTemp12) / (fTemp16 - fTemp12));
			dsp->fRec14[0] = fmaxf(fTemp12, fminf(1.0f, fTemp11 + 0.25f * (((iTemp8) ? -(fSlow17 * dsp->fRec16[0]) : ((iTemp9) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp17 + -1.0f) + (1.0f - fTemp17)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec14[0]);
			float fTemp18 = dsp->fRec14[0];
			dsp->fRec17[0] = fSlow20 + dsp->fConst3 * dsp->fRec17[1];
			dsp->fRec18[0] = fSlow21 + dsp->fConst3 * dsp->fRec18[1];
			float fTemp19 = mydsp_faustpower2_f(dsp->fRec17[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec18[0]);
			dsp->fRec24[0] = fSlow24 + dsp->fConst3 * dsp->fRec24[1];
			float fTemp20 = powf(2.0f, 0.00083333335f * (fSlow23 + dsp->fRec24[0]));
			float fTemp21 = 261.0f * fTemp20;
			float fTemp22 = ((iSlow22) ? fSlow25 * fTemp20 : fTemp21);
			dsp->fRec25[0] = fSlow26 + dsp->fConst3 * dsp->fRec25[1];
			dsp->fRec26[0] = fSlow27 + dsp->fConst3 * dsp->fRec26[1];
			float fTemp23 = 2.4e+03f * fTemp6 * (mydsp_faustpower2_f(dsp->fRec25[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec26[0]));
			dsp->fRec27[0] = fSlow28 + dsp->fConst3 * dsp->fRec27[1];
			dsp->fRec28[0] = fSlow29 + dsp->fConst3 * dsp->fRec28[1];
			float fTemp24 = mydsp_faustpower2_f(dsp->fRec27[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec28[0]);
			dsp->fRec29[0] = fSlow30 + dsp->fConst3 * dsp->fRec29[1];
			dsp->fRec30[0] = fSlow31 + dsp->fConst3 * dsp->fRec30[1];
			float fTemp25 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec29[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec30[0]));
			float fTemp26 = powf(2.0f, 0.00083333335f * (fTemp23 + 1.2e+03f * fTemp18 * fTemp24 + fTemp25));
			float fTemp27 = fTemp22 * fTemp26;
			float fTemp28 = dsp->fConst4 * fTemp27;
			float fTemp29 = dsp->fConst5 * fTemp27;
			dsp->fRec31[0] = fSlow35 + dsp->fConst3 * dsp->fRec31[1];
			dsp->fRec32[0] = fSlow36 + dsp->fConst3 * dsp->fRec32[1];
			float fTemp30 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec31[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec32[0]));
			dsp->fRec33[0] = fSlow37 + dsp->fConst3 * dsp->fRec33[1];
			dsp->fRec34[0] = fSlow38 + dsp->fConst3 * dsp->fRec34[1];
			float fTemp31 = mydsp_faustpower2_f(dsp->fRec33[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec34[0]);
			dsp->fRec35[0] = fSlow39 + dsp->fConst3 * dsp->fRec35[1];
			dsp->fRec36[0] = fSlow40 + dsp->fConst3 * dsp->fRec36[1];
			dsp->fRec37[0] = fSlow41 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp32 = dsp->fRec35[0] + fTemp6 * (mydsp_faustpower2_f(dsp->fRec36[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec37[0]));
			float fTemp33 = ((fTemp28 >= 0.25f) ? 0.5f : fmaxf(fTemp29, fminf(1.0f - fTemp29, ((iSlow33) ? 0.5f : ((iSlow34) ? fTemp30 + fTemp18 * fTemp31 + fTemp32 : 1.0f)))));
			dsp->fRec19[0] = fTemp33;
			float fTemp34 = fTemp28 + dsp->fRec20[1];
			float fTemp35 = fmodf(fTemp34, 1.0f);
			dsp->fRec20[0] = fTemp35;
			int iTemp36 = fTemp35 < fTemp33;
			float fTemp37 = fTemp35 - fTemp33;
			float fTemp38 = 1.0f - fTemp33;
			int iTemp39 = fTemp35 >= fTemp33;
			float fTemp40 = fTemp28 + dsp->fRec19[1] - fTemp33;
			float fTemp41 = fTemp37 / fTemp40;
			float fTemp42 = 1.0f - fTemp41;
			float fTemp43 = fTemp27 * fSlow44 * (1.0f / fTemp38 + 1.0f / fTemp33);
			int iTemp44 = fTemp34 >= 1.0f;
			float fTemp45 = fTemp35 / fTemp27;
			float fTemp46 = dsp->fConst0 * fTemp45;
			float fTemp47 = 1.0f - fTemp46;
			dsp->fRec21[0] = fTemp35 + 2.0f * (((iTemp36) ? 0.0f : 1.0f) - fTemp35) * fSlow43 + (((iTemp36) ? fTemp35 / fTemp33 : 1.0f - fTemp37 / fTemp38) - fTemp35) * fSlow44 + ((dsp->iRec23[1]) ? ((iTemp44) ? dsp->fConst4 * fTemp43 * (dsp->fConst0 * (fTemp35 * (dsp->fConst6 * fTemp45 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp35) / (mydsp_faustpower3_f(fTemp22) * mydsp_faustpower3_f(fTemp26)))) / fTemp27) + 0.1875f) - 0.5f * fSlow45 * fTemp47 * (fTemp46 - 1.0f) : 0.0f) : ((iTemp39) ? fSlow43 * fTemp42 * (fTemp41 - 1.0f) - dsp->fConst4 * fTemp43 * (fTemp37 * (0.375f * fTemp41 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp37) / mydsp_faustpower3_f(fTemp40))) / fTemp40 + 0.1875f) : 0.0f));
			float fTemp48 = mydsp_faustpower2_f(fTemp22) * mydsp_faustpower2_f(fTemp26);
			float fRec22 = dsp->fRec21[1] + ((dsp->iRec23[1]) ? ((iTemp44) ? dsp->fConst4 * fTemp43 * (fTemp47 * (0.375f * fTemp47 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp47)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp35) * fSlow45 / fTemp48) : 0.0f) : ((iTemp39) ? fSlow43 * mydsp_faustpower2_f(fTemp37) / mydsp_faustpower2_f(fTemp40) - dsp->fConst4 * fTemp43 * (fTemp42 * (0.375f * fTemp42 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp42)) + 0.1875f) : 0.0f));
			dsp->iRec23[0] = (((((dsp->iRec23[1] + iTemp44) == 2) + ((iTemp36 + (dsp->iRec23[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp49 = 2.0f * fRec22 + -1.0f;
			dsp->fRec38[0] = fSlow46 + dsp->fConst3 * dsp->fRec38[1];
			dsp->fRec39[0] = fSlow47 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp50 = mydsp_faustpower2_f(dsp->fRec38[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec39[0]);
			float fTemp51 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow1 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp2 + 9.6e+03f * (fTemp7 + fTemp18 * fTemp19 + fTemp49 * fTemp50)))), 1.0f) + 1.0f));
			dsp->fRec40[0] = fSlow48 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp52 = dsp->fRec40[0] + -0.707f;
			dsp->fRec41[0] = fSlow49 + dsp->fConst3 * dsp->fRec41[1];
			dsp->fRec48[0] = fSlow50 + dsp->fConst3 * dsp->fRec48[1];
			dsp->fRec49[0] = fSlow51 + dsp->fConst3 * dsp->fRec49[1];
			float fTemp53 = 2.4e+03f * fTemp6 * (mydsp_faustpower2_f(dsp->fRec48[0]) + mydsp_faustpower2_f(dsp->fRec49[0]) * fTemp1);
			dsp->fRec50[0] = fSlow52 + dsp->fConst3 * dsp->fRec50[1];
			dsp->fRec51[0] = fSlow53 + dsp->fConst3 * dsp->fRec51[1];
			float fTemp54 = mydsp_faustpower2_f(dsp->fRec50[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec51[0]);
			dsp->fRec52[0] = fSlow54 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow55 + dsp->fConst3 * dsp->fRec53[1];
			float fTemp55 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec52[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec53[0]));
			dsp->fRec54[0] = fSlow56 + dsp->fConst3 * dsp->fRec54[1];
			float fTemp56 = mydsp_faustpower2_f(dsp->fRec54[0]);
			float fTemp57 = fmaxf(0.0f, fSlow25 * powf(2.0f, 0.00083333335f * (fTemp53 + 1.2e+03f * fTemp18 * fTemp54 + fTemp55)) + fTemp56 * fTemp22 * fTemp26 * fTemp49);
			float fTemp58 = dsp->fConst4 * fTemp57;
			float fTemp59 = dsp->fConst5 * fTemp57;
			dsp->fRec55[0] = fSlow58 + dsp->fConst3 * dsp->fRec55[1];
			dsp->fRec56[0] = fSlow59 + dsp->fConst3 * dsp->fRec56[1];
			float fTemp60 = mydsp_faustpower2_f(dsp->fRec55[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec56[0]);
			dsp->fRec57[0] = fSlow60 + dsp->fConst3 * dsp->fRec57[1];
			dsp->fRec58[0] = fSlow61 + dsp->fConst3 * dsp->fRec58[1];
			float fTemp61 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec57[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec58[0]));
			dsp->fRec59[0] = fSlow62 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow63 + dsp->fConst3 * dsp->fRec60[1];
			float fTemp62 = mydsp_faustpower2_f(dsp->fRec59[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec60[0]);
			dsp->fRec61[0] = fSlow64 + dsp->fConst3 * dsp->fRec61[1];
			dsp->fRec62[0] = fSlow65 + dsp->fConst3 * dsp->fRec62[1];
			dsp->fRec63[0] = fSlow66 + dsp->fConst3 * dsp->fRec63[1];
			float fTemp63 = dsp->fRec61[0] + fTemp6 * (mydsp_faustpower2_f(dsp->fRec62[0]) + fTemp1 * mydsp_faustpower2_f(dsp->fRec63[0]));
			float fTemp64 = ((fTemp58 >= 0.25f) ? 0.5f : fmaxf(fTemp59, fminf(1.0f - fTemp59, ((iSlow57) ? fTemp49 * fTemp60 + fTemp61 + fTemp18 * fTemp62 + fTemp63 : 1.0f))));
			dsp->fRec42[0] = fTemp64;
			float fTemp65 = fTemp28 + dsp->fRec44[1];
			int iTemp66 = (fSlow67 + (float)(fTemp65 >= 1.0f)) == 2.0f;
			float fTemp67 = fTemp58 + dsp->fRec43[1];
			float fTemp68 = fmodf(fTemp67, 1.0f);
			float fTemp69 = fmodf(fTemp65, 1.0f);
			float fTemp70 = ((iTemp66) ? fTemp57 * fTemp69 / fTemp27 : fTemp68);
			dsp->fRec43[0] = fTemp70;
			dsp->fRec44[0] = fTemp69;
			int iTemp71 = fTemp70 < fTemp64;
			float fTemp72 = 1.0f - fTemp64;
			float fTemp73 = dsp->fConst0 * (fTemp69 / fTemp27);
			float fTemp74 = 1.0f - fTemp73;
			float fTemp75 = dsp->fRec43[1] + dsp->fConst4 * fTemp57 * fTemp74;
			int iTemp76 = dsp->iRec47[1] == 0;
			int iTemp77 = ((((fTemp75 >= 1.0f) + ((iTemp76 + (fTemp75 >= fTemp64)) == 2)) > 0) + (iTemp66 == 0)) > 0;
			int iTemp78 = fTemp68 >= fTemp64;
			float fTemp79 = fTemp68 - fTemp64;
			float fTemp80 = fTemp58 + dsp->fRec42[1] - fTemp64;
			float fTemp81 = fTemp79 / fTemp80;
			float fTemp82 = 1.0f - fTemp81;
			float fTemp83 = fTemp57 * fSlow70 * (1.0f / fTemp72 + 1.0f / fTemp64);
			int iTemp84 = fTemp67 >= 1.0f;
			float fTemp85 = fTemp68 / fTemp57;
			float fTemp86 = dsp->fConst0 * fTemp85;
			float fTemp87 = 1.0f - fTemp86;
			float fTemp88 = fmodf(fTemp75, 1.0f);
			int iTemp89 = fTemp88 < fTemp64;
			float fTemp90 = fTemp88 + 2.0f * fSlow69 * (((iTemp89) ? 0.0f : 1.0f) - fTemp88) + fSlow70 * (((iTemp89) ? fTemp88 / fTemp64 : 1.0f - (fTemp88 - fTemp64) / fTemp72) - fTemp88);
			dsp->fRec45[0] = fTemp70 + 2.0f * (((iTemp71) ? 0.0f : 1.0f) - fTemp70) * fSlow69 + (((iTemp71) ? fTemp70 / fTemp64 : 1.0f - (fTemp70 - fTemp64) / fTemp72) - fTemp70) * fSlow70 + ((iTemp77) ? ((dsp->iRec47[1]) ? ((iTemp84) ? dsp->fConst4 * fTemp83 * (dsp->fConst0 * (fTemp68 * (dsp->fConst6 * fTemp85 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp68) / mydsp_faustpower3_f(fTemp57))) / fTemp57) + 0.1875f) - 0.5f * fSlow71 * fTemp87 * (fTemp86 - 1.0f) : 0.0f) : ((iTemp78) ? fSlow69 * fTemp82 * (fTemp81 - 1.0f) - dsp->fConst4 * fTemp83 * (fTemp79 * (0.375f * fTemp81 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp79) / mydsp_faustpower3_f(fTemp80))) / fTemp80 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp66) ? 0.5f * fTemp74 * fTemp90 * (fTemp73 - 1.0f) : 0.0f);
			float fRec46 = dsp->fRec45[1] + ((iTemp77) ? ((dsp->iRec47[1]) ? ((iTemp84) ? dsp->fConst4 * fTemp83 * (fTemp87 * (0.375f * fTemp87 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp87)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp68) * fSlow71 / mydsp_faustpower2_f(fTemp57)) : 0.0f) : ((iTemp78) ? fSlow69 * mydsp_faustpower2_f(fTemp79) / mydsp_faustpower2_f(fTemp80) - dsp->fConst4 * fTemp83 * (fTemp82 * (0.375f * fTemp82 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp82)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp66) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp69) * fTemp90 / fTemp48) : 0.0f);
			dsp->iRec47[0] = (((iTemp66 + ((dsp->iRec47[1] + iTemp84) == 2) + ((iTemp76 + (fTemp68 < fTemp64)) == 2)) > 0) ? 0 : 1);
			dsp->fRec64[0] = fSlow72 + dsp->fConst3 * dsp->fRec64[1];
			dsp->fRec65[0] = fSlow73 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp91 = 4.656613e-10f * dsp->fRec65[0] * fTemp0;
			float fTemp92 = (0.5f * (dsp->fRec41[0] * (2.0f * fRec46 + -1.0f) + dsp->fRec64[0] * fTemp49 + fTemp91) - dsp->fRec1[1]) * fTemp51;
			float fTemp93 = fTemp51 + 1.0f;
			float fTemp94 = 1.0f - fTemp51 / fTemp93;
			float fTemp95 = fTemp51 * ((dsp->fRec1[1] + (fTemp92 + 0.21521576f * dsp->fRec3[1] * fTemp52 * fTemp94 - dsp->fRec0[1]) / fTemp93) / (1.0f - 0.21521576f * (fTemp51 * fTemp52 * fTemp94 / fTemp93)) - dsp->fRec3[1]) / fTemp93;
			float fTemp96 = dsp->fRec3[1] + fTemp95;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * (fTemp51 * (0.21521576f * fTemp52 * fTemp96 - dsp->fRec0[1]) / fTemp93);
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp92 / fTemp93);
			float fRec2 = fTemp96;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp95;
			int iTemp97 = dsp->iRec66[1] == 0;
			int iTemp98 = dsp->iRec66[1] == 1;
			float fTemp99 = ((iTemp10) ? 0.0f : dsp->fRec67[1]);
			dsp->iRec66[0] = ((iSlow13) ? ((iTemp97) ? 1 : ((iTemp98) ? ((fTemp99 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp100 = ((dsp->iRec66[1] == 2) ? fSlow74 : 0.0f);
			dsp->fRec68[0] = fTemp14 * dsp->fRec68[1] + fTemp15 * ((iTemp10) ? 1.0f : fTemp99);
			float fTemp101 = ((iTemp97) ? dsp->fRec68[0] : 1.0f);
			float fTemp102 = ((fTemp100 == fTemp101) ? 0.5f : (fTemp99 - fTemp100) / (fTemp101 - fTemp100));
			dsp->fRec67[0] = fmaxf(fTemp100, fminf(1.0f, fTemp99 + 0.25f * (((iTemp97) ? -(fSlow77 * dsp->fRec68[0]) : ((iTemp98) ? fSlow76 : fSlow75)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp102 + -1.0f) + (1.0f - fTemp102)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec67[0]);
			int iTemp103 = dsp->iRec73[1] == 0;
			int iTemp104 = dsp->iRec73[1] == 1;
			float fTemp105 = ((iTemp10) ? 0.0f : dsp->fRec74[1]);
			dsp->iRec73[0] = ((iSlow81) ? ((iTemp103) ? 1 : ((iTemp104) ? ((fTemp105 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp106 = ((dsp->iRec73[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec2[0] = iSlow82;
			int iTemp107 = (dsp->iVec2[1] <= 0) & iSlow83;
			float fTemp108 = (float)(1 - iTemp107);
			float fTemp109 = (float)(iTemp107);
			dsp->fRec75[0] = dsp->fRec75[1] * fTemp108 + ((iTemp10) ? 1.0f : fTemp105) * fTemp109;
			float fTemp110 = ((iTemp103) ? dsp->fRec75[0] : 1.0f);
			float fTemp111 = ((fTemp106 == fTemp110) ? 0.5f : (fTemp105 - fTemp106) / (fTemp110 - fTemp106));
			dsp->fRec74[0] = fmaxf(fTemp106, fminf(1.0f, fTemp105 + 0.25f * (((iTemp103) ? -(fSlow17 * dsp->fRec75[0]) : ((iTemp104) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp111 + -1.0f) + (1.0f - fTemp111)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec74[0]);
			float fTemp112 = dsp->fRec74[0];
			float fTemp113 = ((iSlow22) ? fSlow84 * fTemp20 : fTemp21);
			float fTemp114 = fTemp23 + fTemp25;
			float fTemp115 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp112 * fTemp24 + fTemp114));
			float fTemp116 = fTemp113 * fTemp115;
			float fTemp117 = dsp->fConst4 * fTemp116;
			float fTemp118 = dsp->fConst5 * fTemp116;
			float fTemp119 = fTemp30 + fTemp32;
			float fTemp120 = ((fTemp117 >= 0.25f) ? 0.5f : fmaxf(fTemp118, fminf(1.0f - fTemp118, ((iSlow33) ? 0.5f : ((iSlow34) ? fTemp112 * fTemp31 + fTemp119 : 1.0f)))));
			dsp->fRec76[0] = fTemp120;
			float fTemp121 = fTemp117 + dsp->fRec77[1];
			float fTemp122 = fmodf(fTemp121, 1.0f);
			dsp->fRec77[0] = fTemp122;
			int iTemp123 = fTemp122 < fTemp120;
			float fTemp124 = fTemp122 - fTemp120;
			float fTemp125 = 1.0f - fTemp120;
			int iTemp126 = fTemp122 >= fTemp120;
			float fTemp127 = fTemp117 + dsp->fRec76[1] - fTemp120;
			float fTemp128 = fTemp124 / fTemp127;
			float fTemp129 = 1.0f - fTemp128;
			float fTemp130 = fSlow44 * fTemp113 * fTemp115 * (1.0f / fTemp125 + 1.0f / fTemp120);
			int iTemp131 = fTemp121 >= 1.0f;
			float fTemp132 = fTemp122 / fTemp116;
			float fTemp133 = dsp->fConst0 * fTemp132;
			float fTemp134 = 1.0f - fTemp133;
			dsp->fRec78[0] = fTemp122 + 2.0f * fSlow43 * (((iTemp123) ? 0.0f : 1.0f) - fTemp122) + fSlow44 * (((iTemp123) ? fTemp122 / fTemp120 : 1.0f - fTemp124 / fTemp125) - fTemp122) + ((dsp->iRec80[1]) ? ((iTemp131) ? dsp->fConst4 * fTemp130 * (dsp->fConst0 * (fTemp122 * (dsp->fConst6 * fTemp132 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp122) / (mydsp_faustpower3_f(fTemp113) * mydsp_faustpower3_f(fTemp115)))) / fTemp116) + 0.1875f) - 0.5f * fSlow45 * fTemp134 * (fTemp133 - 1.0f) : 0.0f) : ((iTemp126) ? fSlow43 * fTemp129 * (fTemp128 - 1.0f) - dsp->fConst4 * fTemp130 * (fTemp124 * (0.375f * fTemp128 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp124) / mydsp_faustpower3_f(fTemp127))) / fTemp127 + 0.1875f) : 0.0f));
			float fTemp135 = mydsp_faustpower2_f(fTemp113) * mydsp_faustpower2_f(fTemp115);
			float fRec79 = dsp->fRec78[1] + ((dsp->iRec80[1]) ? ((iTemp131) ? dsp->fConst4 * fTemp130 * (fTemp134 * (0.375f * fTemp134 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp134)) + 0.1875f) - dsp->fConst8 * (fSlow45 * mydsp_faustpower2_f(fTemp122) / fTemp135) : 0.0f) : ((iTemp126) ? fSlow43 * mydsp_faustpower2_f(fTemp124) / mydsp_faustpower2_f(fTemp127) - dsp->fConst4 * fTemp130 * (fTemp129 * (0.375f * fTemp129 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp129)) + 0.1875f) : 0.0f));
			dsp->iRec80[0] = (((((dsp->iRec80[1] + iTemp131) == 2) + ((iTemp123 + (dsp->iRec80[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp136 = 2.0f * fRec79 + -1.0f;
			float fTemp137 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow79 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp2 + 9.6e+03f * (fTemp7 + fTemp112 * fTemp19 + fTemp50 * fTemp136)))), 1.0f) + 1.0f));
			float fTemp138 = fTemp53 + fTemp55;
			float fTemp139 = fmaxf(0.0f, fSlow84 * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp112 * fTemp54 + fTemp138)) + fTemp56 * fTemp113 * fTemp115 * fTemp136);
			float fTemp140 = dsp->fConst4 * fTemp139;
			float fTemp141 = dsp->fConst5 * fTemp139;
			float fTemp142 = fTemp61 + fTemp63;
			float fTemp143 = ((fTemp140 >= 0.25f) ? 0.5f : fmaxf(fTemp141, fminf(1.0f - fTemp141, ((iSlow57) ? fTemp60 * fTemp136 + fTemp112 * fTemp62 + fTemp142 : 1.0f))));
			dsp->fRec81[0] = fTemp143;
			float fTemp144 = fTemp117 + dsp->fRec83[1];
			int iTemp145 = (fSlow67 + (float)(fTemp144 >= 1.0f)) == 2.0f;
			float fTemp146 = fTemp140 + dsp->fRec82[1];
			float fTemp147 = fmodf(fTemp146, 1.0f);
			float fTemp148 = fmodf(fTemp144, 1.0f);
			float fTemp149 = ((iTemp145) ? fTemp139 * fTemp148 / fTemp116 : fTemp147);
			dsp->fRec82[0] = fTemp149;
			dsp->fRec83[0] = fTemp148;
			int iTemp150 = fTemp149 < fTemp143;
			float fTemp151 = 1.0f - fTemp143;
			float fTemp152 = dsp->fConst0 * (fTemp148 / fTemp116);
			float fTemp153 = 1.0f - fTemp152;
			float fTemp154 = dsp->fRec82[1] + dsp->fConst4 * fTemp139 * fTemp153;
			int iTemp155 = dsp->iRec86[1] == 0;
			int iTemp156 = ((((fTemp154 >= 1.0f) + ((iTemp155 + (fTemp154 >= fTemp143)) == 2)) > 0) + (iTemp145 == 0)) > 0;
			int iTemp157 = fTemp147 >= fTemp143;
			float fTemp158 = fTemp147 - fTemp143;
			float fTemp159 = fTemp140 + dsp->fRec81[1] - fTemp143;
			float fTemp160 = fTemp158 / fTemp159;
			float fTemp161 = 1.0f - fTemp160;
			float fTemp162 = fSlow70 * fTemp139 * (1.0f / fTemp151 + 1.0f / fTemp143);
			int iTemp163 = fTemp146 >= 1.0f;
			float fTemp164 = fTemp147 / fTemp139;
			float fTemp165 = dsp->fConst0 * fTemp164;
			float fTemp166 = 1.0f - fTemp165;
			float fTemp167 = fmodf(fTemp154, 1.0f);
			int iTemp168 = fTemp167 < fTemp143;
			float fTemp169 = fTemp167 + 2.0f * fSlow69 * (((iTemp168) ? 0.0f : 1.0f) - fTemp167) + fSlow70 * (((iTemp168) ? fTemp167 / fTemp143 : 1.0f - (fTemp167 - fTemp143) / fTemp151) - fTemp167);
			dsp->fRec84[0] = fTemp149 + 2.0f * fSlow69 * (((iTemp150) ? 0.0f : 1.0f) - fTemp149) + fSlow70 * (((iTemp150) ? fTemp149 / fTemp143 : 1.0f - (fTemp149 - fTemp143) / fTemp151) - fTemp149) + ((iTemp156) ? ((dsp->iRec86[1]) ? ((iTemp163) ? dsp->fConst4 * fTemp162 * (dsp->fConst0 * (fTemp147 * (dsp->fConst6 * fTemp164 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp147) / mydsp_faustpower3_f(fTemp139))) / fTemp139) + 0.1875f) - 0.5f * fSlow71 * fTemp166 * (fTemp165 - 1.0f) : 0.0f) : ((iTemp157) ? fSlow69 * fTemp161 * (fTemp160 - 1.0f) - dsp->fConst4 * fTemp162 * (fTemp158 * (0.375f * fTemp160 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp158) / mydsp_faustpower3_f(fTemp159))) / fTemp159 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp145) ? 0.5f * fTemp153 * fTemp169 * (fTemp152 - 1.0f) : 0.0f);
			float fRec85 = dsp->fRec84[1] + ((iTemp156) ? ((dsp->iRec86[1]) ? ((iTemp163) ? dsp->fConst4 * fTemp162 * (fTemp166 * (0.375f * fTemp166 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp166)) + 0.1875f) - dsp->fConst8 * (fSlow71 * mydsp_faustpower2_f(fTemp147) / mydsp_faustpower2_f(fTemp139)) : 0.0f) : ((iTemp157) ? fSlow69 * mydsp_faustpower2_f(fTemp158) / mydsp_faustpower2_f(fTemp159) - dsp->fConst4 * fTemp162 * (fTemp161 * (0.375f * fTemp161 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp161)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp145) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp148) * fTemp169 / fTemp135) : 0.0f);
			dsp->iRec86[0] = (((iTemp145 + ((dsp->iRec86[1] + iTemp163) == 2) + ((iTemp155 + (fTemp147 < fTemp143)) == 2)) > 0) ? 0 : 1);
			float fTemp170 = (0.5f * (dsp->fRec64[0] * fTemp136 + fTemp91 + dsp->fRec41[0] * (2.0f * fRec85 + -1.0f)) - dsp->fRec70[1]) * fTemp137;
			float fTemp171 = fTemp137 + 1.0f;
			float fTemp172 = 1.0f - fTemp137 / fTemp171;
			float fTemp173 = fTemp137 * ((dsp->fRec70[1] + (fTemp170 + 0.21521576f * fTemp52 * dsp->fRec72[1] * fTemp172 - dsp->fRec69[1]) / fTemp171) / (1.0f - 0.21521576f * (fTemp52 * fTemp137 * fTemp172 / fTemp171)) - dsp->fRec72[1]) / fTemp171;
			float fTemp174 = dsp->fRec72[1] + fTemp173;
			dsp->fRec69[0] = dsp->fRec69[1] + 2.0f * (fTemp137 * (0.21521576f * fTemp52 * fTemp174 - dsp->fRec69[1]) / fTemp171);
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * (fTemp170 / fTemp171);
			float fRec71 = fTemp174;
			dsp->fRec72[0] = dsp->fRec72[1] + 2.0f * fTemp173;
			int iTemp175 = dsp->iRec87[1] == 0;
			int iTemp176 = dsp->iRec87[1] == 1;
			float fTemp177 = ((iTemp10) ? 0.0f : dsp->fRec88[1]);
			dsp->iRec87[0] = ((iSlow81) ? ((iTemp175) ? 1 : ((iTemp176) ? ((fTemp177 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp178 = ((dsp->iRec87[1] == 2) ? fSlow74 : 0.0f);
			dsp->fRec89[0] = fTemp108 * dsp->fRec89[1] + fTemp109 * ((iTemp10) ? 1.0f : fTemp177);
			float fTemp179 = ((iTemp175) ? dsp->fRec89[0] : 1.0f);
			float fTemp180 = ((fTemp178 == fTemp179) ? 0.5f : (fTemp177 - fTemp178) / (fTemp179 - fTemp178));
			dsp->fRec88[0] = fmaxf(fTemp178, fminf(1.0f, fTemp177 + 0.25f * (((iTemp175) ? -(fSlow77 * dsp->fRec89[0]) : ((iTemp176) ? fSlow76 : fSlow75)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp180 + -1.0f) + (1.0f - fTemp180)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec88[0]);
			int iTemp181 = dsp->iRec94[1] == 0;
			int iTemp182 = dsp->iRec94[1] == 1;
			float fTemp183 = ((iTemp10) ? 0.0f : dsp->fRec95[1]);
			dsp->iRec94[0] = ((iSlow88) ? ((iTemp181) ? 1 : ((iTemp182) ? ((fTemp183 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp184 = ((dsp->iRec94[1] == 2) ? fSlow14 : 0.0f);
			dsp->iVec3[0] = iSlow89;
			int iTemp185 = (dsp->iVec3[1] <= 0) & iSlow90;
			float fTemp186 = (float)(1 - iTemp185);
			float fTemp187 = (float)(iTemp185);
			dsp->fRec96[0] = dsp->fRec96[1] * fTemp186 + ((iTemp10) ? 1.0f : fTemp183) * fTemp187;
			float fTemp188 = ((iTemp181) ? dsp->fRec96[0] : 1.0f);
			float fTemp189 = ((fTemp184 == fTemp188) ? 0.5f : (fTemp183 - fTemp184) / (fTemp188 - fTemp184));
			dsp->fRec95[0] = fmaxf(fTemp184, fminf(1.0f, fTemp183 + 0.25f * (((iTemp181) ? -(fSlow17 * dsp->fRec96[0]) : ((iTemp182) ? fSlow16 : fSlow15)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp189 + -1.0f) + (1.0f - fTemp189)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec95[0]);
			float fTemp190 = dsp->fRec95[0];
			float fTemp191 = ((iSlow22) ? fSlow91 * fTemp20 : fTemp21);
			float fTemp192 = powf(2.0f, 0.00083333335f * (fTemp114 + 1.2e+03f * fTemp190 * fTemp24));
			float fTemp193 = fTemp191 * fTemp192;
			float fTemp194 = dsp->fConst4 * fTemp193;
			float fTemp195 = dsp->fConst5 * fTemp193;
			float fTemp196 = ((fTemp194 >= 0.25f) ? 0.5f : fmaxf(fTemp195, fminf(1.0f - fTemp195, ((iSlow33) ? 0.5f : ((iSlow34) ? fTemp119 + fTemp190 * fTemp31 : 1.0f)))));
			dsp->fRec97[0] = fTemp196;
			float fTemp197 = fTemp194 + dsp->fRec98[1];
			float fTemp198 = fmodf(fTemp197, 1.0f);
			dsp->fRec98[0] = fTemp198;
			int iTemp199 = fTemp198 < fTemp196;
			float fTemp200 = fTemp198 - fTemp196;
			float fTemp201 = 1.0f - fTemp196;
			int iTemp202 = fTemp198 >= fTemp196;
			float fTemp203 = fTemp194 + dsp->fRec97[1] - fTemp196;
			float fTemp204 = fTemp200 / fTemp203;
			float fTemp205 = 1.0f - fTemp204;
			float fTemp206 = fSlow44 * fTemp191 * fTemp192 * (1.0f / fTemp201 + 1.0f / fTemp196);
			int iTemp207 = fTemp197 >= 1.0f;
			float fTemp208 = fTemp198 / fTemp193;
			float fTemp209 = dsp->fConst0 * fTemp208;
			float fTemp210 = 1.0f - fTemp209;
			dsp->fRec99[0] = fTemp198 + 2.0f * fSlow43 * (((iTemp199) ? 0.0f : 1.0f) - fTemp198) + fSlow44 * (((iTemp199) ? fTemp198 / fTemp196 : 1.0f - fTemp200 / fTemp201) - fTemp198) + ((dsp->iRec101[1]) ? ((iTemp207) ? dsp->fConst4 * fTemp206 * (dsp->fConst0 * (fTemp198 * (dsp->fConst6 * fTemp208 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp198) / (mydsp_faustpower3_f(fTemp191) * mydsp_faustpower3_f(fTemp192)))) / fTemp193) + 0.1875f) - 0.5f * fSlow45 * fTemp210 * (fTemp209 - 1.0f) : 0.0f) : ((iTemp202) ? fSlow43 * fTemp205 * (fTemp204 - 1.0f) - dsp->fConst4 * fTemp206 * (fTemp200 * (0.375f * fTemp204 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp200) / mydsp_faustpower3_f(fTemp203))) / fTemp203 + 0.1875f) : 0.0f));
			float fTemp211 = mydsp_faustpower2_f(fTemp191) * mydsp_faustpower2_f(fTemp192);
			float fRec100 = dsp->fRec99[1] + ((dsp->iRec101[1]) ? ((iTemp207) ? dsp->fConst4 * fTemp206 * (fTemp210 * (0.375f * fTemp210 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp210)) + 0.1875f) - dsp->fConst8 * (fSlow45 * mydsp_faustpower2_f(fTemp198) / fTemp211) : 0.0f) : ((iTemp202) ? fSlow43 * mydsp_faustpower2_f(fTemp200) / mydsp_faustpower2_f(fTemp203) - dsp->fConst4 * fTemp206 * (fTemp205 * (0.375f * fTemp205 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp205)) + 0.1875f) : 0.0f));
			dsp->iRec101[0] = (((((dsp->iRec101[1] + iTemp207) == 2) + ((iTemp199 + (dsp->iRec101[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp212 = 2.0f * fRec100 + -1.0f;
			float fTemp213 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow86 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp2 + 9.6e+03f * (fTemp7 + fTemp190 * fTemp19 + fTemp50 * fTemp212)))), 1.0f) + 1.0f));
			float fTemp214 = fmaxf(0.0f, fSlow91 * powf(2.0f, 0.00083333335f * (fTemp138 + 1.2e+03f * fTemp190 * fTemp54)) + fTemp56 * fTemp191 * fTemp192 * fTemp212);
			float fTemp215 = dsp->fConst4 * fTemp214;
			float fTemp216 = dsp->fConst5 * fTemp214;
			float fTemp217 = ((fTemp215 >= 0.25f) ? 0.5f : fmaxf(fTemp216, fminf(1.0f - fTemp216, ((iSlow57) ? fTemp60 * fTemp212 + fTemp142 + fTemp190 * fTemp62 : 1.0f))));
			dsp->fRec102[0] = fTemp217;
			float fTemp218 = fTemp194 + dsp->fRec104[1];
			int iTemp219 = (fSlow67 + (float)(fTemp218 >= 1.0f)) == 2.0f;
			float fTemp220 = fTemp215 + dsp->fRec103[1];
			float fTemp221 = fmodf(fTemp220, 1.0f);
			float fTemp222 = fmodf(fTemp218, 1.0f);
			float fTemp223 = ((iTemp219) ? fTemp214 * fTemp222 / fTemp193 : fTemp221);
			dsp->fRec103[0] = fTemp223;
			dsp->fRec104[0] = fTemp222;
			int iTemp224 = fTemp223 < fTemp217;
			float fTemp225 = 1.0f - fTemp217;
			float fTemp226 = dsp->fConst0 * (fTemp222 / fTemp193);
			float fTemp227 = 1.0f - fTemp226;
			float fTemp228 = dsp->fRec103[1] + dsp->fConst4 * fTemp214 * fTemp227;
			int iTemp229 = dsp->iRec107[1] == 0;
			int iTemp230 = ((((fTemp228 >= 1.0f) + ((iTemp229 + (fTemp228 >= fTemp217)) == 2)) > 0) + (iTemp219 == 0)) > 0;
			int iTemp231 = fTemp221 >= fTemp217;
			float fTemp232 = fTemp221 - fTemp217;
			float fTemp233 = fTemp215 + dsp->fRec102[1] - fTemp217;
			float fTemp234 = fTemp232 / fTemp233;
			float fTemp235 = 1.0f - fTemp234;
			float fTemp236 = fSlow70 * fTemp214 * (1.0f / fTemp225 + 1.0f / fTemp217);
			int iTemp237 = fTemp220 >= 1.0f;
			float fTemp238 = fTemp221 / fTemp214;
			float fTemp239 = dsp->fConst0 * fTemp238;
			float fTemp240 = 1.0f - fTemp239;
			float fTemp241 = fmodf(fTemp228, 1.0f);
			int iTemp242 = fTemp241 < fTemp217;
			float fTemp243 = fTemp241 + 2.0f * fSlow69 * (((iTemp242) ? 0.0f : 1.0f) - fTemp241) + fSlow70 * (((iTemp242) ? fTemp241 / fTemp217 : 1.0f - (fTemp241 - fTemp217) / fTemp225) - fTemp241);
			dsp->fRec105[0] = fTemp223 + 2.0f * fSlow69 * (((iTemp224) ? 0.0f : 1.0f) - fTemp223) + fSlow70 * (((iTemp224) ? fTemp223 / fTemp217 : 1.0f - (fTemp223 - fTemp217) / fTemp225) - fTemp223) + ((iTemp230) ? ((dsp->iRec107[1]) ? ((iTemp237) ? dsp->fConst4 * fTemp236 * (dsp->fConst0 * (fTemp221 * (dsp->fConst6 * fTemp238 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp221) / mydsp_faustpower3_f(fTemp214))) / fTemp214) + 0.1875f) - 0.5f * fSlow71 * fTemp240 * (fTemp239 - 1.0f) : 0.0f) : ((iTemp231) ? fSlow69 * fTemp235 * (fTemp234 - 1.0f) - dsp->fConst4 * fTemp236 * (fTemp232 * (0.375f * fTemp234 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp232) / mydsp_faustpower3_f(fTemp233))) / fTemp233 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp219) ? 0.5f * fTemp227 * fTemp243 * (fTemp226 - 1.0f) : 0.0f);
			float fRec106 = dsp->fRec105[1] + ((iTemp230) ? ((dsp->iRec107[1]) ? ((iTemp237) ? dsp->fConst4 * fTemp236 * (fTemp240 * (0.375f * fTemp240 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp240)) + 0.1875f) - dsp->fConst8 * (fSlow71 * mydsp_faustpower2_f(fTemp221) / mydsp_faustpower2_f(fTemp214)) : 0.0f) : ((iTemp231) ? fSlow69 * mydsp_faustpower2_f(fTemp232) / mydsp_faustpower2_f(fTemp233) - dsp->fConst4 * fTemp236 * (fTemp235 * (0.375f * fTemp235 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp235)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp219) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp222) * fTemp243 / fTemp211) : 0.0f);
			dsp->iRec107[0] = (((iTemp219 + ((dsp->iRec107[1] + iTemp237) == 2) + ((iTemp229 + (fTemp221 < fTemp217)) == 2)) > 0) ? 0 : 1);
			float fTemp244 = (0.5f * (dsp->fRec64[0] * fTemp212 + fTemp91 + dsp->fRec41[0] * (2.0f * fRec106 + -1.0f)) - dsp->fRec91[1]) * fTemp213;
			float fTemp245 = fTemp213 + 1.0f;
			float fTemp246 = 1.0f - fTemp213 / fTemp245;
			float fTemp247 = fTemp213 * ((dsp->fRec91[1] + (fTemp244 + 0.21521576f * fTemp52 * dsp->fRec93[1] * fTemp246 - dsp->fRec90[1]) / fTemp245) / (1.0f - 0.21521576f * (fTemp52 * fTemp213 * fTemp246 / fTemp245)) - dsp->fRec93[1]) / fTemp245;
			float fTemp248 = dsp->fRec93[1] + fTemp247;
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * (fTemp213 * (0.21521576f * fTemp52 * fTemp248 - dsp->fRec90[1]) / fTemp245);
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * (fTemp244 / fTemp245);
			float fRec92 = fTemp248;
			dsp->fRec93[0] = dsp->fRec93[1] + 2.0f * fTemp247;
			int iTemp249 = dsp->iRec108[1] == 0;
			int iTemp250 = dsp->iRec108[1] == 1;
			float fTemp251 = ((iTemp10) ? 0.0f : dsp->fRec109[1]);
			dsp->iRec108[0] = ((iSlow88) ? ((iTemp249) ? 1 : ((iTemp250) ? ((fTemp251 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp252 = ((dsp->iRec108[1] == 2) ? fSlow74 : 0.0f);
			dsp->fRec110[0] = fTemp186 * dsp->fRec110[1] + fTemp187 * ((iTemp10) ? 1.0f : fTemp251);
			float fTemp253 = ((iTemp249) ? dsp->fRec110[0] : 1.0f);
			float fTemp254 = ((fTemp252 == fTemp253) ? 0.5f : (fTemp251 - fTemp252) / (fTemp253 - fTemp252));
			dsp->fRec109[0] = fmaxf(fTemp252, fminf(1.0f, fTemp251 + 0.25f * (((iTemp249) ? -(fSlow77 * dsp->fRec110[0]) : ((iTemp250) ? fSlow76 : fSlow75)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp254 + -1.0f) + (1.0f - fTemp254)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec109[0]);
			float fTemp255 = 0.12f * (fRec2 * dsp->fRec67[0] + fRec71 * dsp->fRec88[0] + fRec92 * dsp->fRec109[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp255);
			output1[i0] = (FAUSTFLOAT)(fTemp255);
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
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->iRec23[1] = dsp->iRec23[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec41[1] = dsp->fRec41[0];
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
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->iRec47[1] = dsp->iRec47[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->iRec66[1] = dsp->iRec66[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->iRec73[1] = dsp->iRec73[0];
			dsp->iVec2[1] = dsp->iVec2[0];
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
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->iRec87[1] = dsp->iRec87[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->iRec94[1] = dsp->iRec94[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->iRec101[1] = dsp->iRec101[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->iRec107[1] = dsp->iRec107[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->iRec108[1] = dsp->iRec108[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec109[1] = dsp->fRec109[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
