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
	float fRec24[2];
	FAUSTFLOAT fHslider19;
	float fRec25[2];
	FAUSTFLOAT fHslider20;
	float fRec26[2];
	FAUSTFLOAT fHslider21;
	float fRec27[2];
	FAUSTFLOAT fHslider22;
	float fRec28[2];
	FAUSTFLOAT fHslider23;
	float fRec29[2];
	FAUSTFLOAT fHslider24;
	float fRec30[2];
	float fConst5;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	float fRec31[2];
	FAUSTFLOAT fHslider27;
	float fRec32[2];
	FAUSTFLOAT fHslider28;
	float fRec33[2];
	FAUSTFLOAT fHslider29;
	float fRec34[2];
	FAUSTFLOAT fHslider30;
	float fRec35[2];
	FAUSTFLOAT fHslider31;
	float fRec36[2];
	FAUSTFLOAT fHslider32;
	float fRec37[2];
	float fRec19[2];
	float fRec20[2];
	float fConst6;
	float fConst7;
	float fRec21[2];
	float fConst8;
	int iRec23[2];
	FAUSTFLOAT fHslider33;
	float fRec38[2];
	FAUSTFLOAT fHslider34;
	float fRec39[2];
	FAUSTFLOAT fHslider35;
	float fRec40[2];
	FAUSTFLOAT fHslider36;
	float fRec41[2];
	FAUSTFLOAT fHslider37;
	float fRec48[2];
	FAUSTFLOAT fHslider38;
	float fRec49[2];
	FAUSTFLOAT fHslider39;
	float fRec50[2];
	FAUSTFLOAT fHslider40;
	float fRec51[2];
	FAUSTFLOAT fHslider41;
	float fRec52[2];
	FAUSTFLOAT fHslider42;
	float fRec53[2];
	FAUSTFLOAT fHslider43;
	float fRec54[2];
	FAUSTFLOAT fHslider44;
	FAUSTFLOAT fHslider45;
	float fRec55[2];
	FAUSTFLOAT fHslider46;
	float fRec56[2];
	FAUSTFLOAT fHslider47;
	float fRec57[2];
	FAUSTFLOAT fHslider48;
	float fRec58[2];
	FAUSTFLOAT fHslider49;
	float fRec59[2];
	FAUSTFLOAT fHslider50;
	float fRec60[2];
	FAUSTFLOAT fHslider51;
	float fRec61[2];
	FAUSTFLOAT fHslider52;
	float fRec62[2];
	FAUSTFLOAT fHslider53;
	float fRec63[2];
	float fRec42[2];
	FAUSTFLOAT fHslider54;
	float fRec43[2];
	float fRec44[2];
	float fRec45[2];
	int iRec47[2];
	FAUSTFLOAT fHslider55;
	float fRec64[2];
	FAUSTFLOAT fHslider56;
	float fRec65[2];
	float fRec0[2];
	float fRec1[2];
	float fRec3[2];
	int iRec66[2];
	FAUSTFLOAT fHslider57;
	FAUSTFLOAT fHslider58;
	FAUSTFLOAT fHslider59;
	FAUSTFLOAT fHslider60;
	float fRec68[2];
	float fRec67[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fHslider61;
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
	FAUSTFLOAT fHslider62;
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
	dsp->fHslider26 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider27 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider28 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider29 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider31 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider32 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider33 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider34 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider35 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider36 = (FAUSTFLOAT)(1.0f);
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
	dsp->fHslider50 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider51 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider52 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider53 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider54 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider55 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider56 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider57 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider58 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider59 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider60 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider61 = (FAUSTFLOAT)(4e+01f);
	dsp->fButton1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider62 = (FAUSTFLOAT)(4e+01f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "midi", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider59, "mod", "6");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider59, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "midi", "2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider58, "mod", "18");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider58, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "midi", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider57, "mod", "0");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider57, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "midi", "4");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider60, "mod", "26");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider60, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "10", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "midi", "49");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider40, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os1", &dsp->fHslider40, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "52");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.os2", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "midi", "50");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider50, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw1", &dsp->fHslider50, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "53");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.pw2", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "51");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.env.vcf", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "11", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "midi", "54");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider42, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os1", &dsp->fHslider42, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "57");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.os2", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "midi", "55");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider48, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw1", &dsp->fHslider48, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "58");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.pw2", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "56");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.nse.vcf", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "12", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "midi", "60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider46, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.pw1", &dsp->fHslider46, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "61");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.os2.vcf", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "midi", "10");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider35, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "res", &dsp->fHslider35, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)9.9f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider37, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider37, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider52, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider52, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider39, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider39, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider21, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider49, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider49, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider29, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider41, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider41, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider47, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider47, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider43, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider43, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider45, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider45, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "9", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "p lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "midi", "44");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider38, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os1", &dsp->fHslider38, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "midi", "47");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider20, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.os2", &dsp->fHslider20, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "midi", "45");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider53, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw1", &dsp->fHslider53, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "48");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "p.lfo.pw2", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider61, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider62, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "hidden", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVbargraph0, "lfo", "");
	ui_interface->addVerticalBargraph(ui_interface->uiInterface, "lfo", &dsp->fVbargraph0, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "mixer");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "alt", "19");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider56, "midi", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "noise", &dsp->fHslider56, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "midi", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider36, "mod", "1");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "osc1", &dsp->fHslider36, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "alt", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider51, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider51, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider54, "sel", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider54, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider44, "sel", "28");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider44, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "alt", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "alt-sel", "20");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider16, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "alt", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider26, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-24.0f, (FAUSTFLOAT)24.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "sel", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
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
	float fSlow34 = (float)(dsp->fHslider25);
	int iSlow35 = fSlow34 >= 2.0f;
	int iSlow36 = fSlow34 >= 1.0f;
	float fSlow37 = dsp->fConst2 * (float)(dsp->fHslider26);
	float fSlow38 = dsp->fConst2 * (float)(dsp->fHslider27);
	float fSlow39 = dsp->fConst2 * (float)(dsp->fHslider28);
	float fSlow40 = dsp->fConst2 * (float)(dsp->fHslider29);
	float fSlow41 = dsp->fConst2 * (float)(dsp->fHslider30);
	float fSlow42 = dsp->fConst2 * (float)(dsp->fHslider31);
	float fSlow43 = dsp->fConst2 * (float)(dsp->fHslider32);
	float fSlow44 = (float)(((iSlow35) ? 0 : ((iSlow36) ? 1 : 0)));
	float fSlow45 = fmaxf(fSlow44 + -0.5f, 0.0f);
	float fSlow46 = fmaxf(1.0f - 2.0f * fSlow44, 0.0f);
	float fSlow47 = 1.0f - fSlow46;
	float fSlow48 = dsp->fConst2 * (float)(dsp->fHslider33);
	float fSlow49 = dsp->fConst2 * (float)(dsp->fHslider34);
	float fSlow50 = dsp->fConst2 * (float)(dsp->fHslider35);
	float fSlow51 = dsp->fConst2 * (float)(dsp->fHslider36);
	float fSlow52 = dsp->fConst2 * (float)(dsp->fHslider37);
	float fSlow53 = dsp->fConst2 * (float)(dsp->fHslider38);
	float fSlow54 = dsp->fConst2 * (float)(dsp->fHslider39);
	float fSlow55 = dsp->fConst2 * (float)(dsp->fHslider40);
	float fSlow56 = dsp->fConst2 * (float)(dsp->fHslider41);
	float fSlow57 = dsp->fConst2 * (float)(dsp->fHslider42);
	float fSlow58 = dsp->fConst2 * (float)(dsp->fHslider43);
	int iSlow59 = (float)(dsp->fHslider44) >= 1.0f;
	float fSlow60 = dsp->fConst2 * (float)(dsp->fHslider45);
	float fSlow61 = dsp->fConst2 * (float)(dsp->fHslider46);
	float fSlow62 = dsp->fConst2 * (float)(dsp->fHslider47);
	float fSlow63 = dsp->fConst2 * (float)(dsp->fHslider48);
	float fSlow64 = dsp->fConst2 * (float)(dsp->fHslider49);
	float fSlow65 = dsp->fConst2 * (float)(dsp->fHslider50);
	float fSlow66 = dsp->fConst2 * (float)(dsp->fHslider51);
	float fSlow67 = dsp->fConst2 * (float)(dsp->fHslider52);
	float fSlow68 = dsp->fConst2 * (float)(dsp->fHslider53);
	float fSlow69 = (float)(dsp->fHslider54);
	float fSlow70 = (float)(((iSlow59) ? 1 : 0));
	float fSlow71 = fmaxf(fSlow70 + -0.5f, 0.0f);
	float fSlow72 = fmaxf(1.0f - 2.0f * fSlow70, 0.0f);
	float fSlow73 = 1.0f - fSlow72;
	float fSlow74 = dsp->fConst2 * (float)(dsp->fHslider55);
	float fSlow75 = dsp->fConst2 * (float)(dsp->fHslider56);
	float fSlow76 = (float)(dsp->fHslider57);
	float fSlow77 = (fSlow76 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider58)) + 0.001f));
	float fSlow78 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider59)) + 0.001f));
	float fSlow79 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower3_f((float)(dsp->fHslider60)) + 0.001f));
	float fSlow80 = powf(2.0f, 0.083333336f * (fSlow0 + (float)(dsp->fHslider61) + -69.0f));
	float fSlow81 = 0.33333334f * log10f(fSlow80);
	float fSlow82 = (float)(dsp->fButton1);
	int iSlow83 = fSlow82 > 0.0f;
	int iSlow84 = fSlow82 == 0.0f;
	int iSlow85 = iSlow84 > 0;
	float fSlow86 = 4.4e+02f * fSlow80;
	float fSlow87 = powf(2.0f, 0.083333336f * (fSlow0 + (float)(dsp->fHslider62) + -69.0f));
	float fSlow88 = 0.33333334f * log10f(fSlow87);
	float fSlow89 = (float)(dsp->fButton2);
	int iSlow90 = fSlow89 > 0.0f;
	int iSlow91 = fSlow89 == 0.0f;
	int iSlow92 = iSlow91 > 0;
	float fSlow93 = 4.4e+02f * fSlow87;
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
			dsp->fRec24[0] = fSlow26 + dsp->fConst3 * dsp->fRec24[1];
			float fTemp19 = powf(2.0f, 0.00083333335f * (fSlow25 + dsp->fRec24[0]));
			float fTemp20 = fSlow24 * fTemp19;
			float fTemp21 = ((iSlow23) ? fSlow27 * fTemp19 : fTemp20);
			dsp->fRec25[0] = fSlow28 + dsp->fConst3 * dsp->fRec25[1];
			dsp->fRec26[0] = fSlow29 + dsp->fConst3 * dsp->fRec26[1];
			float fTemp22 = 2.4e+03f * fTemp5 * (mydsp_faustpower2_f(dsp->fRec25[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec26[0]));
			dsp->fRec27[0] = fSlow30 + dsp->fConst3 * dsp->fRec27[1];
			dsp->fRec28[0] = fSlow31 + dsp->fConst3 * dsp->fRec28[1];
			float fTemp23 = mydsp_faustpower2_f(dsp->fRec27[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec28[0]);
			dsp->fRec29[0] = fSlow32 + dsp->fConst3 * dsp->fRec29[1];
			dsp->fRec30[0] = fSlow33 + dsp->fConst3 * dsp->fRec30[1];
			float fTemp24 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec29[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec30[0]));
			float fTemp25 = powf(2.0f, 0.00083333335f * (fTemp22 + 1.2e+03f * fTemp17 * fTemp23 + fTemp24));
			float fTemp26 = fTemp21 * fTemp25;
			float fTemp27 = dsp->fConst4 * fTemp26;
			float fTemp28 = dsp->fConst5 * fTemp26;
			dsp->fRec31[0] = fSlow37 + dsp->fConst3 * dsp->fRec31[1];
			dsp->fRec32[0] = fSlow38 + dsp->fConst3 * dsp->fRec32[1];
			dsp->fRec33[0] = fSlow39 + dsp->fConst3 * dsp->fRec33[1];
			float fTemp29 = fTemp5 * (mydsp_faustpower2_f(dsp->fRec32[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec33[0]));
			dsp->fRec34[0] = fSlow40 + dsp->fConst3 * dsp->fRec34[1];
			dsp->fRec35[0] = fSlow41 + dsp->fConst3 * dsp->fRec35[1];
			float fTemp30 = mydsp_faustpower2_f(dsp->fRec34[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec35[0]);
			dsp->fRec36[0] = fSlow42 + dsp->fConst3 * dsp->fRec36[1];
			dsp->fRec37[0] = fSlow43 + dsp->fConst3 * dsp->fRec37[1];
			float fTemp31 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec36[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec37[0]));
			float fTemp32 = ((fTemp27 >= 0.25f) ? 0.5f : fmaxf(fTemp28, fminf(1.0f - fTemp28, ((iSlow35) ? 0.5f : ((iSlow36) ? dsp->fRec31[0] + fTemp29 + fTemp17 * fTemp30 + fTemp31 : 1.0f)))));
			dsp->fRec19[0] = fTemp32;
			float fTemp33 = fTemp27 + dsp->fRec20[1];
			float fTemp34 = fmodf(fTemp33, 1.0f);
			dsp->fRec20[0] = fTemp34;
			int iTemp35 = fTemp34 < fTemp32;
			float fTemp36 = fTemp34 - fTemp32;
			float fTemp37 = 1.0f - fTemp32;
			int iTemp38 = fTemp34 >= fTemp32;
			float fTemp39 = fTemp27 + dsp->fRec19[1] - fTemp32;
			float fTemp40 = fTemp36 / fTemp39;
			float fTemp41 = 1.0f - fTemp40;
			float fTemp42 = fTemp26 * fSlow46 * (1.0f / fTemp37 + 1.0f / fTemp32);
			int iTemp43 = fTemp33 >= 1.0f;
			float fTemp44 = fTemp34 / fTemp26;
			float fTemp45 = dsp->fConst0 * fTemp44;
			float fTemp46 = 1.0f - fTemp45;
			dsp->fRec21[0] = fTemp34 + 2.0f * (((iTemp35) ? 0.0f : 1.0f) - fTemp34) * fSlow45 + (((iTemp35) ? fTemp34 / fTemp32 : 1.0f - fTemp36 / fTemp37) - fTemp34) * fSlow46 + ((dsp->iRec23[1]) ? ((iTemp43) ? dsp->fConst4 * fTemp42 * (dsp->fConst0 * (fTemp34 * (dsp->fConst6 * fTemp44 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp34) / (mydsp_faustpower3_f(fTemp21) * mydsp_faustpower3_f(fTemp25)))) / fTemp26) + 0.1875f) - 0.5f * fSlow47 * fTemp46 * (fTemp45 - 1.0f) : 0.0f) : ((iTemp38) ? fSlow45 * fTemp41 * (fTemp40 - 1.0f) - dsp->fConst4 * fTemp42 * (fTemp36 * (0.375f * fTemp40 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp36) / mydsp_faustpower3_f(fTemp39))) / fTemp39 + 0.1875f) : 0.0f));
			float fTemp47 = mydsp_faustpower2_f(fTemp21) * mydsp_faustpower2_f(fTemp25);
			float fRec22 = dsp->fRec21[1] + ((dsp->iRec23[1]) ? ((iTemp43) ? dsp->fConst4 * fTemp42 * (fTemp46 * (0.375f * fTemp46 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp46)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp34) * fSlow47 / fTemp47) : 0.0f) : ((iTemp38) ? fSlow45 * mydsp_faustpower2_f(fTemp36) / mydsp_faustpower2_f(fTemp39) - dsp->fConst4 * fTemp42 * (fTemp41 * (0.375f * fTemp41 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp41)) + 0.1875f) : 0.0f));
			dsp->iRec23[0] = (((((dsp->iRec23[1] + iTemp43) == 2) + ((iTemp35 + (dsp->iRec23[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp48 = 2.0f * fRec22 + -1.0f;
			dsp->fRec38[0] = fSlow48 + dsp->fConst3 * dsp->fRec38[1];
			dsp->fRec39[0] = fSlow49 + dsp->fConst3 * dsp->fRec39[1];
			float fTemp49 = mydsp_faustpower2_f(dsp->fRec38[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec39[0]);
			float fTemp50 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow2 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp17 * fTemp18 + fTemp48 * fTemp49)))), 1.0f) + 1.0f));
			dsp->fRec40[0] = fSlow50 + dsp->fConst3 * dsp->fRec40[1];
			float fTemp51 = dsp->fRec40[0] + -0.707f;
			dsp->fRec41[0] = fSlow51 + dsp->fConst3 * dsp->fRec41[1];
			dsp->fRec48[0] = fSlow52 + dsp->fConst3 * dsp->fRec48[1];
			dsp->fRec49[0] = fSlow53 + dsp->fConst3 * dsp->fRec49[1];
			float fTemp52 = 2.4e+03f * fTemp5 * (mydsp_faustpower2_f(dsp->fRec48[0]) + mydsp_faustpower2_f(dsp->fRec49[0]) * dsp->fRec7[0]);
			dsp->fRec50[0] = fSlow54 + dsp->fConst3 * dsp->fRec50[1];
			dsp->fRec51[0] = fSlow55 + dsp->fConst3 * dsp->fRec51[1];
			float fTemp53 = mydsp_faustpower2_f(dsp->fRec50[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec51[0]);
			dsp->fRec52[0] = fSlow56 + dsp->fConst3 * dsp->fRec52[1];
			dsp->fRec53[0] = fSlow57 + dsp->fConst3 * dsp->fRec53[1];
			float fTemp54 = 5.5879354e-07f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec52[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec53[0]));
			dsp->fRec54[0] = fSlow58 + dsp->fConst3 * dsp->fRec54[1];
			float fTemp55 = mydsp_faustpower2_f(dsp->fRec54[0]);
			float fTemp56 = fmaxf(0.0f, fSlow27 * powf(2.0f, 0.00083333335f * (fTemp52 + 1.2e+03f * fTemp17 * fTemp53 + fTemp54)) + fTemp55 * fTemp21 * fTemp25 * fTemp48);
			float fTemp57 = dsp->fConst4 * fTemp56;
			float fTemp58 = dsp->fConst5 * fTemp56;
			dsp->fRec55[0] = fSlow60 + dsp->fConst3 * dsp->fRec55[1];
			dsp->fRec56[0] = fSlow61 + dsp->fConst3 * dsp->fRec56[1];
			float fTemp59 = mydsp_faustpower2_f(dsp->fRec55[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec56[0]);
			dsp->fRec57[0] = fSlow62 + dsp->fConst3 * dsp->fRec57[1];
			dsp->fRec58[0] = fSlow63 + dsp->fConst3 * dsp->fRec58[1];
			float fTemp60 = 4.656613e-10f * fTemp0 * (mydsp_faustpower2_f(dsp->fRec57[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec58[0]));
			dsp->fRec59[0] = fSlow64 + dsp->fConst3 * dsp->fRec59[1];
			dsp->fRec60[0] = fSlow65 + dsp->fConst3 * dsp->fRec60[1];
			float fTemp61 = mydsp_faustpower2_f(dsp->fRec59[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec60[0]);
			dsp->fRec61[0] = fSlow66 + dsp->fConst3 * dsp->fRec61[1];
			dsp->fRec62[0] = fSlow67 + dsp->fConst3 * dsp->fRec62[1];
			dsp->fRec63[0] = fSlow68 + dsp->fConst3 * dsp->fRec63[1];
			float fTemp62 = fTemp5 * (mydsp_faustpower2_f(dsp->fRec62[0]) + dsp->fRec7[0] * mydsp_faustpower2_f(dsp->fRec63[0]));
			float fTemp63 = dsp->fRec61[0] + fTemp62;
			float fTemp64 = ((fTemp57 >= 0.25f) ? 0.5f : fmaxf(fTemp58, fminf(1.0f - fTemp58, ((iSlow59) ? fTemp48 * fTemp59 + fTemp60 + fTemp17 * fTemp61 + fTemp63 : 1.0f))));
			dsp->fRec42[0] = fTemp64;
			float fTemp65 = fTemp27 + dsp->fRec44[1];
			int iTemp66 = (fSlow69 + (float)(fTemp65 >= 1.0f)) == 2.0f;
			float fTemp67 = fTemp57 + dsp->fRec43[1];
			float fTemp68 = fmodf(fTemp67, 1.0f);
			float fTemp69 = fmodf(fTemp65, 1.0f);
			float fTemp70 = ((iTemp66) ? fTemp56 * fTemp69 / fTemp26 : fTemp68);
			dsp->fRec43[0] = fTemp70;
			dsp->fRec44[0] = fTemp69;
			int iTemp71 = fTemp70 < fTemp64;
			float fTemp72 = 1.0f - fTemp64;
			float fTemp73 = dsp->fConst0 * (fTemp69 / fTemp26);
			float fTemp74 = 1.0f - fTemp73;
			float fTemp75 = dsp->fRec43[1] + dsp->fConst4 * fTemp56 * fTemp74;
			int iTemp76 = dsp->iRec47[1] == 0;
			int iTemp77 = ((((fTemp75 >= 1.0f) + ((iTemp76 + (fTemp75 >= fTemp64)) == 2)) > 0) + (iTemp66 == 0)) > 0;
			int iTemp78 = fTemp68 >= fTemp64;
			float fTemp79 = fTemp68 - fTemp64;
			float fTemp80 = fTemp57 + dsp->fRec42[1] - fTemp64;
			float fTemp81 = fTemp79 / fTemp80;
			float fTemp82 = 1.0f - fTemp81;
			float fTemp83 = fTemp56 * fSlow72 * (1.0f / fTemp72 + 1.0f / fTemp64);
			int iTemp84 = fTemp67 >= 1.0f;
			float fTemp85 = fTemp68 / fTemp56;
			float fTemp86 = dsp->fConst0 * fTemp85;
			float fTemp87 = 1.0f - fTemp86;
			float fTemp88 = fmodf(fTemp75, 1.0f);
			int iTemp89 = fTemp88 < fTemp64;
			float fTemp90 = fTemp88 + 2.0f * fSlow71 * (((iTemp89) ? 0.0f : 1.0f) - fTemp88) + fSlow72 * (((iTemp89) ? fTemp88 / fTemp64 : 1.0f - (fTemp88 - fTemp64) / fTemp72) - fTemp88);
			dsp->fRec45[0] = fTemp70 + 2.0f * (((iTemp71) ? 0.0f : 1.0f) - fTemp70) * fSlow71 + (((iTemp71) ? fTemp70 / fTemp64 : 1.0f - (fTemp70 - fTemp64) / fTemp72) - fTemp70) * fSlow72 + ((iTemp77) ? ((dsp->iRec47[1]) ? ((iTemp84) ? dsp->fConst4 * fTemp83 * (dsp->fConst0 * (fTemp68 * (dsp->fConst6 * fTemp85 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp68) / mydsp_faustpower3_f(fTemp56))) / fTemp56) + 0.1875f) - 0.5f * fSlow73 * fTemp87 * (fTemp86 - 1.0f) : 0.0f) : ((iTemp78) ? fSlow71 * fTemp82 * (fTemp81 - 1.0f) - dsp->fConst4 * fTemp83 * (fTemp79 * (0.375f * fTemp81 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp79) / mydsp_faustpower3_f(fTemp80))) / fTemp80 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp66) ? 0.5f * fTemp74 * fTemp90 * (fTemp73 - 1.0f) : 0.0f);
			float fRec46 = dsp->fRec45[1] + ((iTemp77) ? ((dsp->iRec47[1]) ? ((iTemp84) ? dsp->fConst4 * fTemp83 * (fTemp87 * (0.375f * fTemp87 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp87)) + 0.1875f) - dsp->fConst8 * (mydsp_faustpower2_f(fTemp68) * fSlow73 / mydsp_faustpower2_f(fTemp56)) : 0.0f) : ((iTemp78) ? fSlow71 * mydsp_faustpower2_f(fTemp79) / mydsp_faustpower2_f(fTemp80) - dsp->fConst4 * fTemp83 * (fTemp82 * (0.375f * fTemp82 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp82)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp66) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp69) * fTemp90 / fTemp47) : 0.0f);
			dsp->iRec47[0] = (((iTemp66 + ((dsp->iRec47[1] + iTemp84) == 2) + ((iTemp76 + (fTemp68 < fTemp64)) == 2)) > 0) ? 0 : 1);
			dsp->fRec64[0] = fSlow74 + dsp->fConst3 * dsp->fRec64[1];
			dsp->fRec65[0] = fSlow75 + dsp->fConst3 * dsp->fRec65[1];
			float fTemp91 = 4.656613e-10f * dsp->fRec65[0] * fTemp0;
			float fTemp92 = (0.5f * (dsp->fRec41[0] * (2.0f * fRec46 + -1.0f) + dsp->fRec64[0] * fTemp48 + fTemp91) - dsp->fRec1[1]) * fTemp50;
			float fTemp93 = fTemp50 + 1.0f;
			float fTemp94 = 1.0f - fTemp50 / fTemp93;
			float fTemp95 = fTemp50 * ((dsp->fRec1[1] + (fTemp92 + 0.21521576f * dsp->fRec3[1] * fTemp51 * fTemp94 - dsp->fRec0[1]) / fTemp93) / (1.0f - 0.21521576f * (fTemp50 * fTemp51 * fTemp94 / fTemp93)) - dsp->fRec3[1]) / fTemp93;
			float fTemp96 = dsp->fRec3[1] + fTemp95;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * (fTemp50 * (0.21521576f * fTemp51 * fTemp96 - dsp->fRec0[1]) / fTemp93);
			dsp->fRec1[0] = dsp->fRec1[1] + 2.0f * (fTemp92 / fTemp93);
			float fRec2 = fTemp96;
			dsp->fRec3[0] = dsp->fRec3[1] + 2.0f * fTemp95;
			int iTemp97 = dsp->iRec66[1] == 0;
			int iTemp98 = dsp->iRec66[1] == 1;
			float fTemp99 = ((iTemp9) ? 0.0f : dsp->fRec67[1]);
			dsp->iRec66[0] = ((iSlow14) ? ((iTemp97) ? 1 : ((iTemp98) ? ((fTemp99 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp100 = ((dsp->iRec66[1] == 2) ? fSlow76 : 0.0f);
			dsp->fRec68[0] = fTemp13 * dsp->fRec68[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp99);
			float fTemp101 = ((iTemp97) ? dsp->fRec68[0] : 1.0f);
			float fTemp102 = ((fTemp100 == fTemp101) ? 0.5f : (fTemp99 - fTemp100) / (fTemp101 - fTemp100));
			dsp->fRec67[0] = fmaxf(fTemp100, fminf(1.0f, fTemp99 + 0.25f * (((iTemp97) ? -(fSlow79 * dsp->fRec68[0]) : ((iTemp98) ? fSlow78 : fSlow77)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp102 + -1.0f) + (1.0f - fTemp102)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec67[0]);
			int iTemp103 = dsp->iRec73[1] == 0;
			int iTemp104 = dsp->iRec73[1] == 1;
			float fTemp105 = ((iTemp9) ? 0.0f : dsp->fRec74[1]);
			dsp->iRec73[0] = ((iSlow83) ? ((iTemp103) ? 1 : ((iTemp104) ? ((fTemp105 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp106 = ((dsp->iRec73[1] == 2) ? fSlow15 : 0.0f);
			dsp->iVec2[0] = iSlow84;
			int iTemp107 = (dsp->iVec2[1] <= 0) & iSlow85;
			float fTemp108 = (float)(1 - iTemp107);
			float fTemp109 = (float)(iTemp107);
			dsp->fRec75[0] = dsp->fRec75[1] * fTemp108 + ((iTemp9) ? 1.0f : fTemp105) * fTemp109;
			float fTemp110 = ((iTemp103) ? dsp->fRec75[0] : 1.0f);
			float fTemp111 = ((fTemp106 == fTemp110) ? 0.5f : (fTemp105 - fTemp106) / (fTemp110 - fTemp106));
			dsp->fRec74[0] = fmaxf(fTemp106, fminf(1.0f, fTemp105 + 0.25f * (((iTemp103) ? -(fSlow18 * dsp->fRec75[0]) : ((iTemp104) ? fSlow17 : fSlow16)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp111 + -1.0f) + (1.0f - fTemp111)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec74[0]);
			float fTemp112 = dsp->fRec74[0];
			float fTemp113 = ((iSlow23) ? fSlow86 * fTemp19 : fTemp20);
			float fTemp114 = fTemp22 + fTemp24;
			float fTemp115 = powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp112 * fTemp23 + fTemp114));
			float fTemp116 = fTemp113 * fTemp115;
			float fTemp117 = dsp->fConst4 * fTemp116;
			float fTemp118 = dsp->fConst5 * fTemp116;
			float fTemp119 = dsp->fRec31[0] + fTemp29 + fTemp31;
			float fTemp120 = ((fTemp117 >= 0.25f) ? 0.5f : fmaxf(fTemp118, fminf(1.0f - fTemp118, ((iSlow35) ? 0.5f : ((iSlow36) ? fTemp112 * fTemp30 + fTemp119 : 1.0f)))));
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
			float fTemp130 = fSlow46 * fTemp113 * fTemp115 * (1.0f / fTemp125 + 1.0f / fTemp120);
			int iTemp131 = fTemp121 >= 1.0f;
			float fTemp132 = fTemp122 / fTemp116;
			float fTemp133 = dsp->fConst0 * fTemp132;
			float fTemp134 = 1.0f - fTemp133;
			dsp->fRec78[0] = fTemp122 + 2.0f * fSlow45 * (((iTemp123) ? 0.0f : 1.0f) - fTemp122) + fSlow46 * (((iTemp123) ? fTemp122 / fTemp120 : 1.0f - fTemp124 / fTemp125) - fTemp122) + ((dsp->iRec80[1]) ? ((iTemp131) ? dsp->fConst4 * fTemp130 * (dsp->fConst0 * (fTemp122 * (dsp->fConst6 * fTemp132 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp122) / (mydsp_faustpower3_f(fTemp113) * mydsp_faustpower3_f(fTemp115)))) / fTemp116) + 0.1875f) - 0.5f * fSlow47 * fTemp134 * (fTemp133 - 1.0f) : 0.0f) : ((iTemp126) ? fSlow45 * fTemp129 * (fTemp128 - 1.0f) - dsp->fConst4 * fTemp130 * (fTemp124 * (0.375f * fTemp128 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp124) / mydsp_faustpower3_f(fTemp127))) / fTemp127 + 0.1875f) : 0.0f));
			float fTemp135 = mydsp_faustpower2_f(fTemp113) * mydsp_faustpower2_f(fTemp115);
			float fRec79 = dsp->fRec78[1] + ((dsp->iRec80[1]) ? ((iTemp131) ? dsp->fConst4 * fTemp130 * (fTemp134 * (0.375f * fTemp134 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp134)) + 0.1875f) - dsp->fConst8 * (fSlow47 * mydsp_faustpower2_f(fTemp122) / fTemp135) : 0.0f) : ((iTemp126) ? fSlow45 * mydsp_faustpower2_f(fTemp124) / mydsp_faustpower2_f(fTemp127) - dsp->fConst4 * fTemp130 * (fTemp129 * (0.375f * fTemp129 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp129)) + 0.1875f) : 0.0f));
			dsp->iRec80[0] = (((((dsp->iRec80[1] + iTemp131) == 2) + ((iTemp123 + (dsp->iRec80[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp136 = 2.0f * fRec79 + -1.0f;
			float fTemp137 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow81 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp112 * fTemp18 + fTemp49 * fTemp136)))), 1.0f) + 1.0f));
			float fTemp138 = fTemp52 + fTemp54;
			float fTemp139 = fmaxf(0.0f, fSlow86 * powf(2.0f, 0.00083333335f * (1.2e+03f * fTemp112 * fTemp53 + fTemp138)) + fTemp55 * fTemp113 * fTemp115 * fTemp136);
			float fTemp140 = dsp->fConst4 * fTemp139;
			float fTemp141 = dsp->fConst5 * fTemp139;
			float fTemp142 = ((fTemp140 >= 0.25f) ? 0.5f : fmaxf(fTemp141, fminf(1.0f - fTemp141, ((iSlow59) ? fTemp59 * fTemp136 + fTemp112 * fTemp61 + fTemp60 + fTemp63 : 1.0f))));
			dsp->fRec81[0] = fTemp142;
			float fTemp143 = fTemp117 + dsp->fRec83[1];
			int iTemp144 = (fSlow69 + (float)(fTemp143 >= 1.0f)) == 2.0f;
			float fTemp145 = fTemp140 + dsp->fRec82[1];
			float fTemp146 = fmodf(fTemp145, 1.0f);
			float fTemp147 = fmodf(fTemp143, 1.0f);
			float fTemp148 = ((iTemp144) ? fTemp139 * fTemp147 / fTemp116 : fTemp146);
			dsp->fRec82[0] = fTemp148;
			dsp->fRec83[0] = fTemp147;
			int iTemp149 = fTemp148 < fTemp142;
			float fTemp150 = 1.0f - fTemp142;
			float fTemp151 = dsp->fConst0 * (fTemp147 / fTemp116);
			float fTemp152 = 1.0f - fTemp151;
			float fTemp153 = dsp->fRec82[1] + dsp->fConst4 * fTemp139 * fTemp152;
			int iTemp154 = dsp->iRec86[1] == 0;
			int iTemp155 = ((((fTemp153 >= 1.0f) + ((iTemp154 + (fTemp153 >= fTemp142)) == 2)) > 0) + (iTemp144 == 0)) > 0;
			int iTemp156 = fTemp146 >= fTemp142;
			float fTemp157 = fTemp146 - fTemp142;
			float fTemp158 = fTemp140 + dsp->fRec81[1] - fTemp142;
			float fTemp159 = fTemp157 / fTemp158;
			float fTemp160 = 1.0f - fTemp159;
			float fTemp161 = fSlow72 * fTemp139 * (1.0f / fTemp150 + 1.0f / fTemp142);
			int iTemp162 = fTemp145 >= 1.0f;
			float fTemp163 = fTemp146 / fTemp139;
			float fTemp164 = dsp->fConst0 * fTemp163;
			float fTemp165 = 1.0f - fTemp164;
			float fTemp166 = fmodf(fTemp153, 1.0f);
			int iTemp167 = fTemp166 < fTemp142;
			float fTemp168 = fTemp166 + 2.0f * fSlow71 * (((iTemp167) ? 0.0f : 1.0f) - fTemp166) + fSlow72 * (((iTemp167) ? fTemp166 / fTemp142 : 1.0f - (fTemp166 - fTemp142) / fTemp150) - fTemp166);
			dsp->fRec84[0] = fSlow72 * (((iTemp149) ? fTemp148 / fTemp142 : 1.0f - (fTemp148 - fTemp142) / fTemp150) - fTemp148) + 2.0f * fSlow71 * (((iTemp149) ? 0.0f : 1.0f) - fTemp148) + fTemp148 + ((iTemp155) ? ((dsp->iRec86[1]) ? ((iTemp162) ? dsp->fConst4 * fTemp161 * (dsp->fConst0 * (fTemp146 * (dsp->fConst6 * fTemp163 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp146) / mydsp_faustpower3_f(fTemp139))) / fTemp139) + 0.1875f) - 0.5f * fSlow73 * fTemp165 * (fTemp164 - 1.0f) : 0.0f) : ((iTemp156) ? fSlow71 * fTemp160 * (fTemp159 - 1.0f) - dsp->fConst4 * fTemp161 * (fTemp157 * (0.375f * fTemp159 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp157) / mydsp_faustpower3_f(fTemp158))) / fTemp158 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp144) ? 0.5f * fTemp152 * fTemp168 * (fTemp151 - 1.0f) : 0.0f);
			float fRec85 = dsp->fRec84[1] + ((iTemp155) ? ((dsp->iRec86[1]) ? ((iTemp162) ? dsp->fConst4 * fTemp161 * (fTemp165 * (0.375f * fTemp165 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp165)) + 0.1875f) - dsp->fConst8 * (fSlow73 * mydsp_faustpower2_f(fTemp146) / mydsp_faustpower2_f(fTemp139)) : 0.0f) : ((iTemp156) ? fSlow71 * mydsp_faustpower2_f(fTemp157) / mydsp_faustpower2_f(fTemp158) - dsp->fConst4 * fTemp161 * (fTemp160 * (0.375f * fTemp160 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp160)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp144) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp147) * fTemp168 / fTemp135) : 0.0f);
			dsp->iRec86[0] = (((iTemp144 + ((dsp->iRec86[1] + iTemp162) == 2) + ((iTemp154 + (fTemp146 < fTemp142)) == 2)) > 0) ? 0 : 1);
			float fTemp169 = (0.5f * (fTemp91 + dsp->fRec41[0] * (2.0f * fRec85 + -1.0f) + dsp->fRec64[0] * fTemp136) - dsp->fRec70[1]) * fTemp137;
			float fTemp170 = fTemp137 + 1.0f;
			float fTemp171 = 1.0f - fTemp137 / fTemp170;
			float fTemp172 = fTemp137 * ((dsp->fRec70[1] + (fTemp169 + 0.21521576f * fTemp51 * dsp->fRec72[1] * fTemp171 - dsp->fRec69[1]) / fTemp170) / (1.0f - 0.21521576f * (fTemp51 * fTemp137 * fTemp171 / fTemp170)) - dsp->fRec72[1]) / fTemp170;
			float fTemp173 = dsp->fRec72[1] + fTemp172;
			dsp->fRec69[0] = dsp->fRec69[1] + 2.0f * (fTemp137 * (0.21521576f * fTemp51 * fTemp173 - dsp->fRec69[1]) / fTemp170);
			dsp->fRec70[0] = dsp->fRec70[1] + 2.0f * (fTemp169 / fTemp170);
			float fRec71 = fTemp173;
			dsp->fRec72[0] = dsp->fRec72[1] + 2.0f * fTemp172;
			int iTemp174 = dsp->iRec87[1] == 0;
			int iTemp175 = dsp->iRec87[1] == 1;
			float fTemp176 = ((iTemp9) ? 0.0f : dsp->fRec88[1]);
			dsp->iRec87[0] = ((iSlow83) ? ((iTemp174) ? 1 : ((iTemp175) ? ((fTemp176 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp177 = ((dsp->iRec87[1] == 2) ? fSlow76 : 0.0f);
			dsp->fRec89[0] = fTemp108 * dsp->fRec89[1] + fTemp109 * ((iTemp9) ? 1.0f : fTemp176);
			float fTemp178 = ((iTemp174) ? dsp->fRec89[0] : 1.0f);
			float fTemp179 = ((fTemp177 == fTemp178) ? 0.5f : (fTemp176 - fTemp177) / (fTemp178 - fTemp177));
			dsp->fRec88[0] = fmaxf(fTemp177, fminf(1.0f, fTemp176 + 0.25f * (((iTemp174) ? -(fSlow79 * dsp->fRec89[0]) : ((iTemp175) ? fSlow78 : fSlow77)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp179 + -1.0f) + (1.0f - fTemp179)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec88[0]);
			int iTemp180 = dsp->iRec94[1] == 0;
			int iTemp181 = dsp->iRec94[1] == 1;
			float fTemp182 = ((iTemp9) ? 0.0f : dsp->fRec95[1]);
			dsp->iRec94[0] = ((iSlow90) ? ((iTemp180) ? 1 : ((iTemp181) ? ((fTemp182 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp183 = ((dsp->iRec94[1] == 2) ? fSlow15 : 0.0f);
			dsp->iVec3[0] = iSlow91;
			int iTemp184 = (dsp->iVec3[1] <= 0) & iSlow92;
			float fTemp185 = (float)(1 - iTemp184);
			float fTemp186 = (float)(iTemp184);
			dsp->fRec96[0] = dsp->fRec96[1] * fTemp185 + ((iTemp9) ? 1.0f : fTemp182) * fTemp186;
			float fTemp187 = ((iTemp180) ? dsp->fRec96[0] : 1.0f);
			float fTemp188 = ((fTemp183 == fTemp187) ? 0.5f : (fTemp182 - fTemp183) / (fTemp187 - fTemp183));
			dsp->fRec95[0] = fmaxf(fTemp183, fminf(1.0f, fTemp182 + 0.25f * (((iTemp180) ? -(fSlow18 * dsp->fRec96[0]) : ((iTemp181) ? fSlow17 : fSlow16)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp188 + -1.0f) + (1.0f - fTemp188)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec95[0]);
			float fTemp189 = dsp->fRec95[0];
			float fTemp190 = ((iSlow23) ? fSlow93 * fTemp19 : fTemp20);
			float fTemp191 = powf(2.0f, 0.00083333335f * (fTemp114 + 1.2e+03f * fTemp189 * fTemp23));
			float fTemp192 = fTemp190 * fTemp191;
			float fTemp193 = dsp->fConst4 * fTemp192;
			float fTemp194 = dsp->fConst5 * fTemp192;
			float fTemp195 = ((fTemp193 >= 0.25f) ? 0.5f : fmaxf(fTemp194, fminf(1.0f - fTemp194, ((iSlow35) ? 0.5f : ((iSlow36) ? fTemp119 + fTemp189 * fTemp30 : 1.0f)))));
			dsp->fRec97[0] = fTemp195;
			float fTemp196 = fTemp193 + dsp->fRec98[1];
			float fTemp197 = fmodf(fTemp196, 1.0f);
			dsp->fRec98[0] = fTemp197;
			int iTemp198 = fTemp197 < fTemp195;
			float fTemp199 = fTemp197 - fTemp195;
			float fTemp200 = 1.0f - fTemp195;
			int iTemp201 = fTemp197 >= fTemp195;
			float fTemp202 = fTemp193 + dsp->fRec97[1] - fTemp195;
			float fTemp203 = fTemp199 / fTemp202;
			float fTemp204 = 1.0f - fTemp203;
			float fTemp205 = fSlow46 * fTemp190 * fTemp191 * (1.0f / fTemp200 + 1.0f / fTemp195);
			int iTemp206 = fTemp196 >= 1.0f;
			float fTemp207 = fTemp197 / fTemp192;
			float fTemp208 = dsp->fConst0 * fTemp207;
			float fTemp209 = 1.0f - fTemp208;
			dsp->fRec99[0] = fSlow46 * (((iTemp198) ? fTemp197 / fTemp195 : 1.0f - fTemp199 / fTemp200) - fTemp197) + 2.0f * fSlow45 * (((iTemp198) ? 0.0f : 1.0f) - fTemp197) + fTemp197 + ((dsp->iRec101[1]) ? ((iTemp206) ? dsp->fConst4 * fTemp205 * (dsp->fConst0 * (fTemp197 * (dsp->fConst6 * fTemp207 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp197) / (mydsp_faustpower3_f(fTemp190) * mydsp_faustpower3_f(fTemp191)))) / fTemp192) + 0.1875f) - 0.5f * fSlow47 * fTemp209 * (fTemp208 - 1.0f) : 0.0f) : ((iTemp201) ? fSlow45 * fTemp204 * (fTemp203 - 1.0f) - dsp->fConst4 * fTemp205 * (fTemp199 * (0.375f * fTemp203 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp199) / mydsp_faustpower3_f(fTemp202))) / fTemp202 + 0.1875f) : 0.0f));
			float fTemp210 = mydsp_faustpower2_f(fTemp190) * mydsp_faustpower2_f(fTemp191);
			float fRec100 = dsp->fRec99[1] + ((dsp->iRec101[1]) ? ((iTemp206) ? dsp->fConst4 * fTemp205 * (fTemp209 * (0.375f * fTemp209 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp209)) + 0.1875f) - dsp->fConst8 * (fSlow47 * mydsp_faustpower2_f(fTemp197) / fTemp210) : 0.0f) : ((iTemp201) ? fSlow45 * mydsp_faustpower2_f(fTemp199) / mydsp_faustpower2_f(fTemp202) - dsp->fConst4 * fTemp205 * (fTemp204 * (0.375f * fTemp204 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp204)) + 0.1875f) : 0.0f));
			dsp->iRec101[0] = (((((dsp->iRec101[1] + iTemp206) == 2) + ((iTemp198 + (dsp->iRec101[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp211 = 2.0f * fRec100 + -1.0f;
			float fTemp212 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, (fSlow88 + dsp->fRec4[0]) * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fTemp189 * fTemp18 + fTemp49 * fTemp211)))), 1.0f) + 1.0f));
			float fTemp213 = fmaxf(0.0f, fSlow93 * powf(2.0f, 0.00083333335f * (fTemp138 + 1.2e+03f * fTemp189 * fTemp53)) + fTemp55 * fTemp190 * fTemp191 * fTemp211);
			float fTemp214 = dsp->fConst4 * fTemp213;
			float fTemp215 = dsp->fConst5 * fTemp213;
			float fTemp216 = ((fTemp214 >= 0.25f) ? 0.5f : fmaxf(fTemp215, fminf(1.0f - fTemp215, ((iSlow59) ? fTemp60 + dsp->fRec61[0] + fTemp62 + fTemp189 * fTemp61 + fTemp59 * fTemp211 : 1.0f))));
			dsp->fRec102[0] = fTemp216;
			float fTemp217 = fTemp193 + dsp->fRec104[1];
			int iTemp218 = (fSlow69 + (float)(fTemp217 >= 1.0f)) == 2.0f;
			float fTemp219 = fTemp214 + dsp->fRec103[1];
			float fTemp220 = fmodf(fTemp219, 1.0f);
			float fTemp221 = fmodf(fTemp217, 1.0f);
			float fTemp222 = ((iTemp218) ? fTemp213 * fTemp221 / fTemp192 : fTemp220);
			dsp->fRec103[0] = fTemp222;
			dsp->fRec104[0] = fTemp221;
			int iTemp223 = fTemp222 < fTemp216;
			float fTemp224 = 1.0f - fTemp216;
			float fTemp225 = dsp->fConst0 * (fTemp221 / fTemp192);
			float fTemp226 = 1.0f - fTemp225;
			float fTemp227 = dsp->fRec103[1] + dsp->fConst4 * fTemp213 * fTemp226;
			int iTemp228 = dsp->iRec107[1] == 0;
			int iTemp229 = ((((fTemp227 >= 1.0f) + ((iTemp228 + (fTemp227 >= fTemp216)) == 2)) > 0) + (iTemp218 == 0)) > 0;
			int iTemp230 = fTemp220 >= fTemp216;
			float fTemp231 = fTemp220 - fTemp216;
			float fTemp232 = fTemp214 + dsp->fRec102[1] - fTemp216;
			float fTemp233 = fTemp231 / fTemp232;
			float fTemp234 = 1.0f - fTemp233;
			float fTemp235 = fSlow72 * fTemp213 * (1.0f / fTemp224 + 1.0f / fTemp216);
			int iTemp236 = fTemp219 >= 1.0f;
			float fTemp237 = fTemp220 / fTemp213;
			float fTemp238 = dsp->fConst0 * fTemp237;
			float fTemp239 = 1.0f - fTemp238;
			float fTemp240 = fmodf(fTemp227, 1.0f);
			int iTemp241 = fTemp240 < fTemp216;
			float fTemp242 = fTemp240 + 2.0f * fSlow71 * (((iTemp241) ? 0.0f : 1.0f) - fTemp240) + fSlow72 * (((iTemp241) ? fTemp240 / fTemp216 : 1.0f - (fTemp240 - fTemp216) / fTemp224) - fTemp240);
			dsp->fRec105[0] = fTemp222 + 2.0f * fSlow71 * (((iTemp223) ? 0.0f : 1.0f) - fTemp222) + fSlow72 * (((iTemp223) ? fTemp222 / fTemp216 : 1.0f - (fTemp222 - fTemp216) / fTemp224) - fTemp222) + ((iTemp229) ? ((dsp->iRec107[1]) ? ((iTemp236) ? dsp->fConst4 * fTemp235 * (dsp->fConst0 * (fTemp220 * (dsp->fConst6 * fTemp237 + -0.5f - dsp->fConst7 * (mydsp_faustpower3_f(fTemp220) / mydsp_faustpower3_f(fTemp213))) / fTemp213) + 0.1875f) - 0.5f * fSlow73 * fTemp239 * (fTemp238 - 1.0f) : 0.0f) : ((iTemp230) ? fSlow71 * fTemp234 * (fTemp233 - 1.0f) - dsp->fConst4 * fTemp235 * (fTemp231 * (0.375f * fTemp233 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp231) / mydsp_faustpower3_f(fTemp232))) / fTemp232 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp218) ? 0.5f * fTemp226 * fTemp242 * (fTemp225 - 1.0f) : 0.0f);
			float fRec106 = dsp->fRec105[1] + ((iTemp229) ? ((dsp->iRec107[1]) ? ((iTemp236) ? dsp->fConst4 * fTemp235 * (fTemp239 * (0.375f * fTemp239 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp239)) + 0.1875f) - dsp->fConst8 * (fSlow73 * mydsp_faustpower2_f(fTemp220) / mydsp_faustpower2_f(fTemp213)) : 0.0f) : ((iTemp230) ? fSlow71 * mydsp_faustpower2_f(fTemp231) / mydsp_faustpower2_f(fTemp232) - dsp->fConst4 * fTemp235 * (fTemp234 * (0.375f * fTemp234 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp234)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp218) ? dsp->fConst8 * (mydsp_faustpower2_f(fTemp221) * fTemp242 / fTemp210) : 0.0f);
			dsp->iRec107[0] = (((iTemp218 + ((dsp->iRec107[1] + iTemp236) == 2) + ((iTemp228 + (fTemp220 < fTemp216)) == 2)) > 0) ? 0 : 1);
			float fTemp243 = (0.5f * (fTemp91 + dsp->fRec41[0] * (2.0f * fRec106 + -1.0f) + dsp->fRec64[0] * fTemp211) - dsp->fRec91[1]) * fTemp212;
			float fTemp244 = fTemp212 + 1.0f;
			float fTemp245 = fTemp212 / fTemp244 + -1.0f;
			float fTemp246 = fTemp212 * ((dsp->fRec91[1] + (fTemp243 - 0.21521576f * fTemp51 * dsp->fRec93[1] * fTemp245 - dsp->fRec90[1]) / fTemp244) / (0.21521576f * (fTemp51 * fTemp212 * fTemp245 / fTemp244) + 1.0f) - dsp->fRec93[1]) / fTemp244;
			float fTemp247 = dsp->fRec93[1] + fTemp246;
			dsp->fRec90[0] = dsp->fRec90[1] + 2.0f * (fTemp212 * (0.21521576f * fTemp51 * fTemp247 - dsp->fRec90[1]) / fTemp244);
			dsp->fRec91[0] = dsp->fRec91[1] + 2.0f * (fTemp243 / fTemp244);
			float fRec92 = fTemp247;
			dsp->fRec93[0] = dsp->fRec93[1] + 2.0f * fTemp246;
			int iTemp248 = dsp->iRec108[1] == 0;
			int iTemp249 = dsp->iRec108[1] == 1;
			float fTemp250 = ((iTemp9) ? 0.0f : dsp->fRec109[1]);
			dsp->iRec108[0] = ((iSlow90) ? ((iTemp248) ? 1 : ((iTemp249) ? ((fTemp250 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp251 = ((dsp->iRec108[1] == 2) ? fSlow76 : 0.0f);
			dsp->fRec110[0] = fTemp185 * dsp->fRec110[1] + fTemp186 * ((iTemp9) ? 1.0f : fTemp250);
			float fTemp252 = ((iTemp248) ? dsp->fRec110[0] : 1.0f);
			float fTemp253 = ((fTemp251 == fTemp252) ? 0.5f : (fTemp250 - fTemp251) / (fTemp252 - fTemp251));
			dsp->fRec109[0] = fmaxf(fTemp251, fminf(1.0f, fTemp250 + 0.25f * (((iTemp248) ? -(fSlow79 * dsp->fRec110[0]) : ((iTemp249) ? fSlow78 : fSlow77)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp253 + -1.0f) + (1.0f - fTemp253)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec109[0]);
			float fTemp254 = 0.12f * (fRec2 * dsp->fRec67[0] + fRec71 * dsp->fRec88[0] + fRec92 * dsp->fRec109[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp254);
			output1[i0] = (FAUSTFLOAT)(fTemp254);
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
