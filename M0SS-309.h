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
	int iRec3[2];
	FAUSTFLOAT fHslider2;
	FAUSTFLOAT fHslider3;
	float fConst2;
	FAUSTFLOAT fHslider4;
	float fRec4[2];
	FAUSTFLOAT fVbargraph0;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fButton0;
	int iRec7[2];
	int iRec5[2];
	FAUSTFLOAT fHslider6;
	FAUSTFLOAT fHslider7;
	FAUSTFLOAT fHslider8;
	FAUSTFLOAT fHslider9;
	int iVec1[2];
	float fRec8[2];
	float fRec6[2];
	FAUSTFLOAT fVbargraph1;
	FAUSTFLOAT fHslider10;
	float fConst3;
	FAUSTFLOAT fHslider11;
	FAUSTFLOAT fHslider12;
	FAUSTFLOAT fHslider13;
	FAUSTFLOAT fHslider14;
	float fConst4;
	FAUSTFLOAT fHslider15;
	FAUSTFLOAT fHslider16;
	FAUSTFLOAT fHslider17;
	FAUSTFLOAT fHslider18;
	FAUSTFLOAT fHslider19;
	float fRec9[2];
	float fRec10[2];
	float fConst5;
	float fConst7;
	float fConst8;
	float fRec11[2];
	float fConst10;
	int iRec13[2];
	FAUSTFLOAT fHslider20;
	FAUSTFLOAT fHslider21;
	FAUSTFLOAT fHslider22;
	FAUSTFLOAT fHslider23;
	FAUSTFLOAT fHslider24;
	FAUSTFLOAT fHslider25;
	FAUSTFLOAT fHslider26;
	FAUSTFLOAT fHslider27;
	float fConst11;
	FAUSTFLOAT fHslider28;
	FAUSTFLOAT fHslider29;
	FAUSTFLOAT fHslider30;
	FAUSTFLOAT fHslider31;
	FAUSTFLOAT fHslider32;
	FAUSTFLOAT fHslider33;
	float fRec14[2];
	FAUSTFLOAT fHslider34;
	float fRec15[2];
	float fRec16[2];
	float fConst12;
	float fConst13;
	float fRec17[2];
	float fConst14;
	int iRec19[2];
	FAUSTFLOAT fHslider35;
	FAUSTFLOAT fHslider36;
	FAUSTFLOAT fHslider37;
	float fRec0[2];
	float fRec1[2];
	int iRec20[2];
	FAUSTFLOAT fHslider38;
	FAUSTFLOAT fHslider39;
	FAUSTFLOAT fHslider40;
	FAUSTFLOAT fHslider41;
	float fRec22[2];
	float fRec21[2];
	FAUSTFLOAT fVbargraph2;
	FAUSTFLOAT fButton1;
	int iRec26[2];
	int iVec2[2];
	float fRec28[2];
	float fRec27[2];
	FAUSTFLOAT fVbargraph3;
	FAUSTFLOAT fHslider42;
	float fRec29[2];
	float fRec30[2];
	float fRec31[2];
	int iRec33[2];
	float fRec34[2];
	float fRec35[2];
	float fRec36[2];
	float fRec37[2];
	int iRec39[2];
	float fRec23[2];
	float fRec24[2];
	int iRec40[2];
	float fRec42[2];
	float fRec41[2];
	FAUSTFLOAT fVbargraph4;
	FAUSTFLOAT fButton2;
	int iRec46[2];
	int iVec3[2];
	float fRec48[2];
	float fRec47[2];
	FAUSTFLOAT fVbargraph5;
	FAUSTFLOAT fHslider43;
	float fRec49[2];
	float fRec50[2];
	float fRec51[2];
	int iRec53[2];
	float fRec54[2];
	float fRec55[2];
	float fRec56[2];
	float fRec57[2];
	int iRec59[2];
	float fRec43[2];
	float fRec44[2];
	int iRec60[2];
	float fRec62[2];
	float fRec61[2];
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
	m->declare(m->metaInterface, "misceffects.lib/cubicnl:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "misceffects.lib/cubicnl:license", "STK-4.3");
	m->declare(m->metaInterface, "misceffects.lib/name", "Misc Effects Library");
	m->declare(m->metaInterface, "misceffects.lib/version", "2.4.0");
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
	m->declare(m->metaInterface, "vaeffects.lib/name", "Faust Virtual Analog Filter Effect Library");
	m->declare(m->metaInterface, "vaeffects.lib/oberheim:author", "Eric Tarr");
	m->declare(m->metaInterface, "vaeffects.lib/oberheim:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "vaeffects.lib/oberheimLPF:author", "Eric Tarr");
	m->declare(m->metaInterface, "vaeffects.lib/oberheimLPF:license", "MIT-style STK-4.3 license");
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
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fButton0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider9 = (FAUSTFLOAT)(0.001f);
	dsp->fHslider10 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider11 = (FAUSTFLOAT)(4e+01f);
	dsp->fHslider12 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider13 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider14 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider15 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider16 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider17 = (FAUSTFLOAT)(0.0f);
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
	dsp->fHslider29 = (FAUSTFLOAT)(0.5f);
	dsp->fHslider30 = (FAUSTFLOAT)(0.0f);
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
	dsp->fButton2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider43 = (FAUSTFLOAT)(4e+01f);
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
			dsp->iRec3[l1] = 0;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec4[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->iRec7[l3] = 0;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->iRec5[l4] = 0;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->iVec1[l5] = 0;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec8[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec6[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec9[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec10[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec11[l10] = 0.0f;
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
			dsp->fRec14[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec15[l13] = 0.0f;
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
			dsp->fRec17[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->iRec19[l16] = 0;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec0[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec1[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->iRec20[l19] = 0;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec22[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec21[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->iRec26[l22] = 0;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->iVec2[l23] = 0;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec28[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec27[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec29[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec30[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec31[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->iRec33[l29] = 0;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec34[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec35[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec36[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec37[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->iRec39[l34] = 0;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec23[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec24[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->iRec40[l37] = 0;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec42[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec41[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->iRec46[l40] = 0;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->iVec3[l41] = 0;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec48[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec47[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec49[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec50[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec51[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->iRec53[l47] = 0;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec54[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec55[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fRec56[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec57[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->iRec59[l52] = 0;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec43[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec44[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->iRec60[l55] = 0;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec62[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec61[l57] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 6.2831855f / dsp->fConst0;
	dsp->fConst2 = 1.0f / dsp->fConst0;
	dsp->fConst3 = 4.4e+02f / dsp->fConst0;
	dsp->fConst4 = 8.8e+02f / dsp->fConst0;
	dsp->fConst5 = 1.9369834e-06f * dsp->fConst0;
	float fConst6 = mydsp_faustpower3_f(dsp->fConst0);
	dsp->fConst7 = 1.6675133e-12f * fConst6;
	dsp->fConst8 = 0.0022727272f * dsp->fConst0;
	float fConst9 = mydsp_faustpower2_f(dsp->fConst0);
	dsp->fConst10 = 2.5826446e-06f * fConst9;
	dsp->fConst11 = 2.0f / dsp->fConst0;
	dsp->fConst12 = 0.375f * dsp->fConst0;
	dsp->fConst13 = 0.0625f * fConst6;
	dsp->fConst14 = 0.5f * fConst9;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "0", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "5");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "mod", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "a", &dsp->fHslider8, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "mod", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "d", &dsp->fHslider7, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "7");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "mod", "14");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "s", &dsp->fHslider6, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "midi", "8");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "mod", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "r", &dsp->fHslider9, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)0.001f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0001f);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "24");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "mod", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "rate", &dsp->fHslider4, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "23");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "sel", "23");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider3, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "5", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "lfo matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "midi", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider24, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os1", &dsp->fHslider24, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "midi", "29");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider12, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.os2", &dsp->fHslider12, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "midi", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider30, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw1", &dsp->fHslider30, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "midi", "30");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider17, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.pw2", &dsp->fHslider17, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "28");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lfo.vcf", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "6", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "env matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "midi", "31");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider25, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os1", &dsp->fHslider25, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "midi", "34");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider13, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.os2", &dsp->fHslider13, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "midi", "32");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider31, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw1", &dsp->fHslider31, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "midi", "35");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider18, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.pw2", &dsp->fHslider18, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "33");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "env.vcf", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "7", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "nse matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "midi", "36");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider26, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os1", &dsp->fHslider26, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "midi", "39");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider14, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.os2", &dsp->fHslider14, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "midi", "37");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider32, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw1", &dsp->fHslider32, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "midi", "40");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider19, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.pw2", &dsp->fHslider19, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "38");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "nse.vcf", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "8", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "os2 matrix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "midi", "41");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider27, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.os1", &dsp->fHslider27, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "midi", "42");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider33, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.pw1", &dsp->fHslider33, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "midi", "43");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "os2.vcf", &dsp->fHslider10, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_0", &dsp->fHslider11, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_1", &dsp->fHslider42, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "freq_2", &dsp->fHslider43, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)127.0f, (FAUSTFLOAT)1.0f);
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
	ui_interface->addButton(ui_interface->uiInterface, "gate_2", &dsp->fButton2);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "alt", "9");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider29, "midi", "12");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider29, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "midi", "13");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider34, "sel", "3");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "sync", &dsp->fHslider34, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "midi", "11");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider28, "sel", "9");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider28, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "osc2");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider23, "midi", "17");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "fine", &dsp->fHslider23, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "alt-sel", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider21, "midi", "19");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "kt", &dsp->fHslider21, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider16, "midi", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "pw", &dsp->fHslider16, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "midi", "16");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider22, "mod", "15");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "tune", &dsp->fHslider22, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)1e+02f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "midi", "14");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider15, "sel", "27");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "waveform", &dsp->fHslider15, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)(dsp->fHslider0);
	float fSlow1 = 1.1175871e-06f * mydsp_faustpower2_f((float)(dsp->fHslider1));
	float fSlow2 = mydsp_faustpower2_f((float)(dsp->fHslider2));
	float fSlow3 = (float)(dsp->fHslider3);
	int iSlow4 = fSlow3 >= 2.0f;
	int iSlow5 = fSlow3 >= 1.0f;
	float fSlow6 = dsp->fConst2 * (float)(dsp->fHslider4);
	float fSlow7 = mydsp_faustpower2_f((float)(dsp->fHslider5));
	float fSlow8 = (float)(dsp->fButton0);
	int iSlow9 = fSlow8 > 0.0f;
	float fSlow10 = (float)(dsp->fHslider6);
	float fSlow11 = (fSlow10 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider7)) + 0.001f));
	float fSlow12 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider8)) + 0.001f));
	float fSlow13 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider9)) + 0.001f));
	int iSlow14 = fSlow8 == 0.0f;
	int iSlow15 = iSlow14 > 0;
	float fSlow16 = mydsp_faustpower2_f((float)(dsp->fHslider10));
	float fSlow17 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider11) + -69.0f));
	float fSlow18 = dsp->fConst3 * fSlow17;
	float fSlow19 = 2.4e+03f * mydsp_faustpower2_f((float)(dsp->fHslider12));
	float fSlow20 = 1.2e+03f * mydsp_faustpower2_f((float)(dsp->fHslider13));
	float fSlow21 = 4.656613e-08f * mydsp_faustpower2_f((float)(dsp->fHslider14));
	float fSlow22 = dsp->fConst4 * fSlow17;
	float fSlow23 = (float)(dsp->fHslider15);
	int iSlow24 = fSlow23 >= 2.0f;
	int iSlow25 = fSlow23 >= 1.0f;
	float fSlow26 = (float)(dsp->fHslider16);
	float fSlow27 = mydsp_faustpower2_f((float)(dsp->fHslider17));
	float fSlow28 = mydsp_faustpower2_f((float)(dsp->fHslider18));
	float fSlow29 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider19));
	float fSlow30 = (float)(((iSlow24) ? 0 : ((iSlow25) ? 0 : 1)));
	float fSlow31 = fmaxf(fSlow30 + -0.5f, 0.0f);
	float fSlow32 = fmaxf(1.0f - 2.0f * fSlow30, 0.0f);
	float fSlow33 = dsp->fConst0 / fSlow17;
	float fSlow34 = dsp->fConst5 / fSlow17;
	float fSlow35 = dsp->fConst7 / mydsp_faustpower3_f(fSlow17);
	float fSlow36 = 1.0f - fSlow32;
	float fSlow37 = dsp->fConst8 / fSlow17;
	float fSlow38 = dsp->fConst10 / mydsp_faustpower2_f(fSlow17);
	float fSlow39 = (float)(dsp->fHslider20);
	int iSlow40 = (float)(dsp->fHslider21) >= 1.0f;
	float fSlow41 = powf(2.0f, 0.00083333335f * ((float)(dsp->fHslider22) + (float)(dsp->fHslider23)));
	float fSlow42 = 2e+01f * fSlow41;
	float fSlow43 = ((iSlow40) ? 4.4e+02f * fSlow41 * fSlow17 : fSlow42);
	float fSlow44 = 2.4e+03f * mydsp_faustpower2_f((float)(dsp->fHslider24));
	float fSlow45 = 1.2e+03f * mydsp_faustpower2_f((float)(dsp->fHslider25));
	float fSlow46 = 4.656613e-08f * mydsp_faustpower2_f((float)(dsp->fHslider26));
	float fSlow47 = 4.8e+03f * mydsp_faustpower2_f((float)(dsp->fHslider27));
	int iSlow48 = (float)(dsp->fHslider28) >= 1.0f;
	float fSlow49 = (float)(dsp->fHslider29);
	float fSlow50 = mydsp_faustpower2_f((float)(dsp->fHslider30));
	float fSlow51 = mydsp_faustpower2_f((float)(dsp->fHslider31));
	float fSlow52 = 4.656613e-10f * mydsp_faustpower2_f((float)(dsp->fHslider32));
	float fSlow53 = mydsp_faustpower2_f((float)(dsp->fHslider33));
	float fSlow54 = (float)(dsp->fHslider34);
	float fSlow55 = 0.0022727272f / fSlow17;
	float fSlow56 = (float)(((iSlow48) ? 0 : 1));
	float fSlow57 = fmaxf(fSlow56 + -0.5f, 0.0f);
	float fSlow58 = fmaxf(1.0f - 2.0f * fSlow56, 0.0f);
	float fSlow59 = mydsp_faustpower3_f(fSlow43);
	float fSlow60 = 1.0f - fSlow58;
	float fSlow61 = mydsp_faustpower2_f(fSlow43);
	float fSlow62 = (float)(dsp->fHslider35);
	float fSlow63 = 4.656613e-10f * (float)(dsp->fHslider36);
	float fSlow64 = 1.0f / (float)(dsp->fHslider37);
	float fSlow65 = (float)(dsp->fHslider38);
	float fSlow66 = (fSlow65 + -1.0f) / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider39)) + 0.001f));
	float fSlow67 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider40)) + 0.001f));
	float fSlow68 = 1.0f / fmaxf(1.0f, dsp->fConst0 * (19.999f * mydsp_faustpower2_f((float)(dsp->fHslider41)) + 0.001f));
	float fSlow69 = (float)(dsp->fButton1);
	int iSlow70 = fSlow69 > 0.0f;
	int iSlow71 = fSlow69 == 0.0f;
	int iSlow72 = iSlow71 > 0;
	float fSlow73 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider42) + -69.0f));
	float fSlow74 = dsp->fConst3 * fSlow73;
	float fSlow75 = dsp->fConst4 * fSlow73;
	float fSlow76 = dsp->fConst0 / fSlow73;
	float fSlow77 = dsp->fConst5 / fSlow73;
	float fSlow78 = dsp->fConst7 / mydsp_faustpower3_f(fSlow73);
	float fSlow79 = dsp->fConst8 / fSlow73;
	float fSlow80 = dsp->fConst10 / mydsp_faustpower2_f(fSlow73);
	float fSlow81 = ((iSlow40) ? 4.4e+02f * fSlow41 * fSlow73 : fSlow42);
	float fSlow82 = 0.0022727272f / fSlow73;
	float fSlow83 = fSlow58 * fSlow81;
	float fSlow84 = mydsp_faustpower3_f(fSlow81);
	float fSlow85 = mydsp_faustpower2_f(fSlow81);
	float fSlow86 = (float)(dsp->fButton2);
	int iSlow87 = fSlow86 > 0.0f;
	int iSlow88 = fSlow86 == 0.0f;
	int iSlow89 = iSlow88 > 0;
	float fSlow90 = powf(2.0f, 0.083333336f * ((float)(dsp->fHslider43) + -69.0f));
	float fSlow91 = dsp->fConst3 * fSlow90;
	float fSlow92 = dsp->fConst4 * fSlow90;
	float fSlow93 = dsp->fConst0 / fSlow90;
	float fSlow94 = dsp->fConst5 / fSlow90;
	float fSlow95 = dsp->fConst7 / mydsp_faustpower3_f(fSlow90);
	float fSlow96 = dsp->fConst8 / fSlow90;
	float fSlow97 = dsp->fConst10 / mydsp_faustpower2_f(fSlow90);
	float fSlow98 = ((iSlow40) ? 4.4e+02f * fSlow90 * fSlow41 : fSlow42);
	float fSlow99 = 0.0022727272f / fSlow90;
	float fSlow100 = fSlow58 * fSlow98;
	float fSlow101 = mydsp_faustpower3_f(fSlow98);
	float fSlow102 = mydsp_faustpower2_f(fSlow98);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->iRec3[0] = 1103515245 * dsp->iRec3[1] + 12345;
			float fTemp0 = (float)(dsp->iRec3[0]);
			float fTemp1 = fSlow1 * fTemp0;
			float fTemp2 = ((1 - dsp->iVec0[1]) ? 0.0f : fSlow6 + dsp->fRec4[1]);
			dsp->fRec4[0] = fTemp2 - floorf(fTemp2);
			float fTemp3 = 2.0f * dsp->fRec4[0] + -1.0f;
			float fTemp4 = ((iSlow4) ? 2.0f * (1.0f - fabsf(fTemp3)) + -1.0f : ((iSlow5) ? 2.0f * (float)(dsp->fRec4[0] <= 0.5f) + -1.0f : fTemp3));
			dsp->fVbargraph0 = (FAUSTFLOAT)(fTemp4);
			float fTemp5 = fTemp4;
			float fTemp6 = fSlow2 * fTemp5;
			int iTemp7 = dsp->iRec5[1] == 0;
			int iTemp8 = dsp->iRec5[1] == 1;
			dsp->iRec7[0] = dsp->iRec7[1] + 1;
			int iTemp9 = (dsp->iRec7[0] + -1) == 0;
			float fTemp10 = ((iTemp9) ? 0.0f : dsp->fRec6[1]);
			dsp->iRec5[0] = ((iSlow9) ? ((iTemp7) ? 1 : ((iTemp8) ? ((fTemp10 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp11 = ((dsp->iRec5[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec1[0] = iSlow14;
			int iTemp12 = (dsp->iVec1[1] <= 0) & iSlow15;
			float fTemp13 = (float)(1 - iTemp12);
			float fTemp14 = (float)(iTemp12);
			dsp->fRec8[0] = dsp->fRec8[1] * fTemp13 + ((iTemp9) ? 1.0f : fTemp10) * fTemp14;
			float fTemp15 = ((iTemp7) ? dsp->fRec8[0] : 1.0f);
			float fTemp16 = ((fTemp11 == fTemp15) ? 0.5f : (fTemp10 - fTemp11) / (fTemp15 - fTemp11));
			dsp->fRec6[0] = fmaxf(fTemp11, fminf(1.0f, fTemp10 + 0.25f * (((iTemp7) ? -(fSlow13 * dsp->fRec8[0]) : ((iTemp8) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp16 + -1.0f) + (1.0f - fTemp16)))));
			dsp->fVbargraph1 = (FAUSTFLOAT)(dsp->fRec6[0]);
			float fTemp17 = dsp->fRec6[0];
			float fTemp18 = fSlow19 * fTemp5;
			float fTemp19 = fSlow21 * fTemp0;
			float fTemp20 = powf(2.0f, 0.00083333335f * (fTemp18 + fSlow20 * fTemp17 + fTemp19));
			float fTemp21 = fSlow18 * fTemp20;
			float fTemp22 = fSlow22 * fTemp20;
			float fTemp23 = fSlow27 * fTemp5;
			float fTemp24 = fSlow29 * fTemp0;
			float fTemp25 = ((fTemp21 >= 0.25f) ? 0.5f : fmaxf(fTemp22, fminf(1.0f - fTemp22, ((iSlow24) ? 0.5f : ((iSlow25) ? 1.0f : fSlow26 + fTemp23 + fSlow28 * fTemp17 + fTemp24)))));
			dsp->fRec9[0] = fTemp25;
			float fTemp26 = fTemp21 + dsp->fRec10[1];
			float fTemp27 = fmodf(fTemp26, 1.0f);
			dsp->fRec10[0] = fTemp27;
			int iTemp28 = fTemp27 < fTemp25;
			float fTemp29 = fTemp27 - fTemp25;
			float fTemp30 = 1.0f - fTemp25;
			int iTemp31 = fTemp27 >= fTemp25;
			float fTemp32 = fTemp21 + dsp->fRec9[1] - fTemp25;
			float fTemp33 = fTemp29 / fTemp32;
			float fTemp34 = 1.0f - fTemp33;
			float fTemp35 = fTemp20 * fSlow32 * (1.0f / fTemp30 + 1.0f / fTemp25);
			int iTemp36 = fTemp26 >= 1.0f;
			float fTemp37 = fTemp27 / fTemp20;
			float fTemp38 = fSlow37 * fTemp37;
			float fTemp39 = 1.0f - fTemp38;
			dsp->fRec11[0] = fTemp27 + 2.0f * (((iTemp28) ? 0.0f : 1.0f) - fTemp27) * fSlow31 + (((iTemp28) ? fTemp27 / fTemp25 : 1.0f - fTemp29 / fTemp30) - fTemp27) * fSlow32 + ((dsp->iRec13[1]) ? ((iTemp36) ? fSlow18 * fTemp35 * (fSlow33 * (fTemp27 * (fSlow34 * fTemp37 + -0.0011363636f - fSlow35 * (mydsp_faustpower3_f(fTemp27) / mydsp_faustpower3_f(fTemp20))) / fTemp20) + 0.1875f) - 0.5f * fSlow36 * fTemp39 * (fTemp38 - 1.0f) : 0.0f) : ((iTemp31) ? fSlow31 * fTemp34 * (fTemp33 - 1.0f) - fSlow18 * fTemp35 * (fTemp29 * (0.375f * fTemp33 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp29) / mydsp_faustpower3_f(fTemp32))) / fTemp32 + 0.1875f) : 0.0f));
			float fTemp40 = mydsp_faustpower2_f(fTemp20);
			float fRec12 = dsp->fRec11[1] + ((dsp->iRec13[1]) ? ((iTemp36) ? fSlow18 * fTemp35 * (fTemp39 * (0.375f * fTemp39 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp39)) + 0.1875f) - fSlow38 * (mydsp_faustpower2_f(fTemp27) * fSlow36 / fTemp40) : 0.0f) : ((iTemp31) ? fSlow31 * mydsp_faustpower2_f(fTemp29) / mydsp_faustpower2_f(fTemp32) - fSlow18 * fTemp35 * (fTemp34 * (0.375f * fTemp34 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp34)) + 0.1875f) : 0.0f));
			dsp->iRec13[0] = (((((dsp->iRec13[1] + iTemp36) == 2) + ((iTemp28 + (dsp->iRec13[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp41 = 2.0f * fRec12 + -1.0f;
			float fTemp42 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, fSlow0 * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fSlow7 * fTemp17 + fSlow16 * fTemp41)))), 1.0f) + 1.0f));
			float fTemp43 = fSlow44 * fTemp5;
			float fTemp44 = fSlow46 * fTemp0;
			float fTemp45 = powf(2.0f, 0.00083333335f * (fTemp43 + fSlow45 * fTemp17 + fTemp44 + fSlow47 * fTemp41));
			float fTemp46 = fSlow43 * fTemp45;
			float fTemp47 = dsp->fConst2 * fTemp46;
			float fTemp48 = dsp->fConst11 * fTemp46;
			float fTemp49 = fSlow50 * fTemp5;
			float fTemp50 = fSlow52 * fTemp0;
			float fTemp51 = ((fTemp47 >= 0.25f) ? 0.5f : fmaxf(fTemp48, fminf(1.0f - fTemp48, ((iSlow48) ? 1.0f : fSlow49 + fTemp49 + fSlow51 * fTemp17 + fTemp50 + fSlow53 * fTemp41))));
			dsp->fRec14[0] = fTemp51;
			float fTemp52 = fTemp21 + dsp->fRec16[1];
			int iTemp53 = (fSlow54 + (float)(fTemp52 >= 1.0f)) == 2.0f;
			float fTemp54 = fTemp47 + dsp->fRec15[1];
			float fTemp55 = fmodf(fTemp54, 1.0f);
			float fTemp56 = fmodf(fTemp52, 1.0f);
			float fTemp57 = ((iTemp53) ? fSlow55 * (fTemp46 * fTemp56 / fTemp20) : fTemp55);
			dsp->fRec15[0] = fTemp57;
			dsp->fRec16[0] = fTemp56;
			int iTemp58 = fTemp57 < fTemp51;
			float fTemp59 = 1.0f - fTemp51;
			float fTemp60 = fSlow37 * (fTemp56 / fTemp20);
			float fTemp61 = 1.0f - fTemp60;
			float fTemp62 = dsp->fRec15[1] + dsp->fConst2 * fTemp46 * fTemp61;
			int iTemp63 = dsp->iRec19[1] == 0;
			int iTemp64 = ((((fTemp62 >= 1.0f) + ((iTemp63 + (fTemp62 >= fTemp51)) == 2)) > 0) + (iTemp53 == 0)) > 0;
			int iTemp65 = fTemp55 >= fTemp51;
			float fTemp66 = fTemp55 - fTemp51;
			float fTemp67 = fTemp47 + dsp->fRec14[1] - fTemp51;
			float fTemp68 = fTemp66 / fTemp67;
			float fTemp69 = 1.0f - fTemp68;
			float fTemp70 = fTemp46 * fSlow58 * (1.0f / fTemp59 + 1.0f / fTemp51);
			int iTemp71 = fTemp54 >= 1.0f;
			float fTemp72 = fTemp55 / fTemp46;
			float fTemp73 = dsp->fConst0 * fTemp72;
			float fTemp74 = 1.0f - fTemp73;
			float fTemp75 = fmodf(fTemp62, 1.0f);
			int iTemp76 = fTemp75 < fTemp51;
			float fTemp77 = fTemp75 + 2.0f * fSlow57 * (((iTemp76) ? 0.0f : 1.0f) - fTemp75) + fSlow58 * (((iTemp76) ? fTemp75 / fTemp51 : 1.0f - (fTemp75 - fTemp51) / fTemp59) - fTemp75);
			dsp->fRec17[0] = fTemp57 + 2.0f * (((iTemp58) ? 0.0f : 1.0f) - fTemp57) * fSlow57 + (((iTemp58) ? fTemp57 / fTemp51 : 1.0f - (fTemp57 - fTemp51) / fTemp59) - fTemp57) * fSlow58 + ((iTemp64) ? ((dsp->iRec19[1]) ? ((iTemp71) ? dsp->fConst2 * fTemp70 * (dsp->fConst0 * (fTemp55 * (dsp->fConst12 * fTemp72 + -0.5f - dsp->fConst13 * (mydsp_faustpower3_f(fTemp55) / (fSlow59 * mydsp_faustpower3_f(fTemp45)))) / fTemp46) + 0.1875f) - 0.5f * fSlow60 * fTemp74 * (fTemp73 - 1.0f) : 0.0f) : ((iTemp65) ? fSlow57 * fTemp69 * (fTemp68 - 1.0f) - dsp->fConst2 * fTemp70 * (fTemp66 * (0.375f * fTemp68 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp66) / mydsp_faustpower3_f(fTemp67))) / fTemp67 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp53) ? 0.5f * fTemp61 * fTemp77 * (fTemp60 - 1.0f) : 0.0f);
			float fRec18 = dsp->fRec17[1] + ((iTemp64) ? ((dsp->iRec19[1]) ? ((iTemp71) ? dsp->fConst2 * fTemp70 * (fTemp74 * (0.375f * fTemp74 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp74)) + 0.1875f) - dsp->fConst14 * (mydsp_faustpower2_f(fTemp55) * fSlow60 / (fSlow61 * mydsp_faustpower2_f(fTemp45))) : 0.0f) : ((iTemp65) ? fSlow57 * mydsp_faustpower2_f(fTemp66) / mydsp_faustpower2_f(fTemp67) - dsp->fConst2 * fTemp70 * (fTemp69 * (0.375f * fTemp69 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp69)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp53) ? fSlow38 * (mydsp_faustpower2_f(fTemp56) * fTemp77 / fTemp40) : 0.0f);
			dsp->iRec19[0] = (((iTemp53 + ((dsp->iRec19[1] + iTemp71) == 2) + ((iTemp63 + (fTemp55 < fTemp51)) == 2)) > 0) ? 0 : 1);
			float fTemp78 = fSlow63 * fTemp0;
			float fTemp79 = fSlow64 + fTemp42;
			float fTemp80 = fSlow39 * (2.0f * fRec18 + -1.0f) + fSlow62 * fTemp41 + fTemp78 - (dsp->fRec0[1] + dsp->fRec1[1] * fTemp79);
			float fTemp81 = fTemp42 * fTemp79 + 1.0f;
			float fTemp82 = fTemp42 * fTemp80 / fTemp81;
			float fTemp83 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec1[1] + fTemp82));
			float fTemp84 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp83);
			float fTemp85 = fTemp42 * fTemp83 * fTemp84;
			dsp->fRec0[0] = dsp->fRec0[1] + 2.0f * fTemp85;
			float fTemp86 = fTemp83 * fTemp84;
			dsp->fRec1[0] = fTemp82 + fTemp86;
			float fRec2 = dsp->fRec0[1] + fTemp85;
			int iTemp87 = dsp->iRec20[1] == 0;
			int iTemp88 = dsp->iRec20[1] == 1;
			float fTemp89 = ((iTemp9) ? 0.0f : dsp->fRec21[1]);
			dsp->iRec20[0] = ((iSlow9) ? ((iTemp87) ? 1 : ((iTemp88) ? ((fTemp89 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp90 = ((dsp->iRec20[1] == 2) ? fSlow65 : 0.0f);
			dsp->fRec22[0] = fTemp13 * dsp->fRec22[1] + fTemp14 * ((iTemp9) ? 1.0f : fTemp89);
			float fTemp91 = ((iTemp87) ? dsp->fRec22[0] : 1.0f);
			float fTemp92 = ((fTemp90 == fTemp91) ? 0.5f : (fTemp89 - fTemp90) / (fTemp91 - fTemp90));
			dsp->fRec21[0] = fmaxf(fTemp90, fminf(1.0f, fTemp89 + 0.25f * (((iTemp87) ? -(fSlow68 * dsp->fRec22[0]) : ((iTemp88) ? fSlow67 : fSlow66)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp92 + -1.0f) + (1.0f - fTemp92)))));
			dsp->fVbargraph2 = (FAUSTFLOAT)(dsp->fRec21[0]);
			int iTemp93 = dsp->iRec26[1] == 0;
			int iTemp94 = dsp->iRec26[1] == 1;
			float fTemp95 = ((iTemp9) ? 0.0f : dsp->fRec27[1]);
			dsp->iRec26[0] = ((iSlow70) ? ((iTemp93) ? 1 : ((iTemp94) ? ((fTemp95 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp96 = ((dsp->iRec26[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec2[0] = iSlow71;
			int iTemp97 = (dsp->iVec2[1] <= 0) & iSlow72;
			float fTemp98 = (float)(1 - iTemp97);
			float fTemp99 = (float)(iTemp97);
			dsp->fRec28[0] = dsp->fRec28[1] * fTemp98 + ((iTemp9) ? 1.0f : fTemp95) * fTemp99;
			float fTemp100 = ((iTemp93) ? dsp->fRec28[0] : 1.0f);
			float fTemp101 = ((fTemp96 == fTemp100) ? 0.5f : (fTemp95 - fTemp96) / (fTemp100 - fTemp96));
			dsp->fRec27[0] = fmaxf(fTemp96, fminf(1.0f, fTemp95 + 0.25f * (((iTemp93) ? -(fSlow13 * dsp->fRec28[0]) : ((iTemp94) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp101 + -1.0f) + (1.0f - fTemp101)))));
			dsp->fVbargraph3 = (FAUSTFLOAT)(dsp->fRec27[0]);
			float fTemp102 = dsp->fRec27[0];
			float fTemp103 = fTemp18 + fTemp19;
			float fTemp104 = powf(2.0f, 0.00083333335f * (fSlow20 * fTemp102 + fTemp103));
			float fTemp105 = fSlow74 * fTemp104;
			float fTemp106 = fSlow75 * fTemp104;
			float fTemp107 = fTemp23 + fTemp24;
			float fTemp108 = ((fTemp105 >= 0.25f) ? 0.5f : fmaxf(fTemp106, fminf(1.0f - fTemp106, ((iSlow24) ? 0.5f : ((iSlow25) ? 1.0f : fSlow26 + fSlow28 * fTemp102 + fTemp107)))));
			dsp->fRec29[0] = fTemp108;
			float fTemp109 = fTemp105 + dsp->fRec30[1];
			float fTemp110 = fmodf(fTemp109, 1.0f);
			dsp->fRec30[0] = fTemp110;
			int iTemp111 = fTemp110 < fTemp108;
			float fTemp112 = fTemp110 - fTemp108;
			float fTemp113 = 1.0f - fTemp108;
			int iTemp114 = fTemp110 >= fTemp108;
			float fTemp115 = fTemp105 + dsp->fRec29[1] - fTemp108;
			float fTemp116 = fTemp112 / fTemp115;
			float fTemp117 = 1.0f - fTemp116;
			float fTemp118 = fSlow32 * fTemp104 * (1.0f / fTemp113 + 1.0f / fTemp108);
			int iTemp119 = fTemp109 >= 1.0f;
			float fTemp120 = fTemp110 / fTemp104;
			float fTemp121 = fSlow79 * fTemp120;
			float fTemp122 = 1.0f - fTemp121;
			dsp->fRec31[0] = fTemp110 + 2.0f * fSlow31 * (((iTemp111) ? 0.0f : 1.0f) - fTemp110) + fSlow32 * (((iTemp111) ? fTemp110 / fTemp108 : 1.0f - fTemp112 / fTemp113) - fTemp110) + ((dsp->iRec33[1]) ? ((iTemp119) ? fSlow74 * fTemp118 * (fSlow76 * (fTemp110 * (fSlow77 * fTemp120 + -0.0011363636f - fSlow78 * (mydsp_faustpower3_f(fTemp110) / mydsp_faustpower3_f(fTemp104))) / fTemp104) + 0.1875f) - 0.5f * fSlow36 * fTemp122 * (fTemp121 - 1.0f) : 0.0f) : ((iTemp114) ? fSlow31 * fTemp117 * (fTemp116 - 1.0f) - fSlow74 * fTemp118 * (fTemp112 * (0.375f * fTemp116 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp112) / mydsp_faustpower3_f(fTemp115))) / fTemp115 + 0.1875f) : 0.0f));
			float fTemp123 = mydsp_faustpower2_f(fTemp104);
			float fRec32 = dsp->fRec31[1] + ((dsp->iRec33[1]) ? ((iTemp119) ? fSlow74 * fTemp118 * (fTemp122 * (0.375f * fTemp122 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp122)) + 0.1875f) - fSlow80 * (fSlow36 * mydsp_faustpower2_f(fTemp110) / fTemp123) : 0.0f) : ((iTemp114) ? fSlow31 * mydsp_faustpower2_f(fTemp112) / mydsp_faustpower2_f(fTemp115) - fSlow74 * fTemp118 * (fTemp117 * (0.375f * fTemp117 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp117)) + 0.1875f) : 0.0f));
			dsp->iRec33[0] = (((((dsp->iRec33[1] + iTemp119) == 2) + ((iTemp111 + (dsp->iRec33[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp124 = 2.0f * fRec32 + -1.0f;
			float fTemp125 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, fSlow0 * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fSlow7 * fTemp102 + fSlow16 * fTemp124)))), 1.0f) + 1.0f));
			float fTemp126 = fTemp43 + fTemp44;
			float fTemp127 = powf(2.0f, 0.00083333335f * (fSlow45 * fTemp102 + fTemp126 + fSlow47 * fTemp124));
			float fTemp128 = fSlow81 * fTemp127;
			float fTemp129 = dsp->fConst2 * fTemp128;
			float fTemp130 = dsp->fConst11 * fTemp128;
			float fTemp131 = fTemp49 + fTemp50;
			float fTemp132 = ((fTemp129 >= 0.25f) ? 0.5f : fmaxf(fTemp130, fminf(1.0f - fTemp130, ((iSlow48) ? 1.0f : fSlow49 + fSlow51 * fTemp102 + fTemp131 + fSlow53 * fTemp124))));
			dsp->fRec34[0] = fTemp132;
			float fTemp133 = fTemp105 + dsp->fRec36[1];
			int iTemp134 = (fSlow54 + (float)(fTemp133 >= 1.0f)) == 2.0f;
			float fTemp135 = fTemp129 + dsp->fRec35[1];
			float fTemp136 = fmodf(fTemp135, 1.0f);
			float fTemp137 = fmodf(fTemp133, 1.0f);
			float fTemp138 = ((iTemp134) ? fSlow82 * (fTemp128 * fTemp137 / fTemp104) : fTemp136);
			dsp->fRec35[0] = fTemp138;
			dsp->fRec36[0] = fTemp137;
			int iTemp139 = fTemp138 < fTemp132;
			float fTemp140 = 1.0f - fTemp132;
			float fTemp141 = fSlow79 * (fTemp137 / fTemp104);
			float fTemp142 = 1.0f - fTemp141;
			float fTemp143 = dsp->fRec35[1] + dsp->fConst2 * fTemp128 * fTemp142;
			int iTemp144 = dsp->iRec39[1] == 0;
			int iTemp145 = ((((fTemp143 >= 1.0f) + ((iTemp144 + (fTemp143 >= fTemp132)) == 2)) > 0) + (iTemp134 == 0)) > 0;
			int iTemp146 = fTemp136 >= fTemp132;
			float fTemp147 = fTemp136 - fTemp132;
			float fTemp148 = fTemp129 + dsp->fRec34[1] - fTemp132;
			float fTemp149 = fTemp147 / fTemp148;
			float fTemp150 = 1.0f - fTemp149;
			float fTemp151 = fSlow83 * fTemp127 * (1.0f / fTemp140 + 1.0f / fTemp132);
			int iTemp152 = fTemp135 >= 1.0f;
			float fTemp153 = fTemp136 / fTemp128;
			float fTemp154 = dsp->fConst0 * fTemp153;
			float fTemp155 = 1.0f - fTemp154;
			float fTemp156 = fmodf(fTemp143, 1.0f);
			int iTemp157 = fTemp156 < fTemp132;
			float fTemp158 = fTemp156 + 2.0f * fSlow57 * (((iTemp157) ? 0.0f : 1.0f) - fTemp156) + fSlow58 * (((iTemp157) ? fTemp156 / fTemp132 : 1.0f - (fTemp156 - fTemp132) / fTemp140) - fTemp156);
			dsp->fRec37[0] = fTemp138 + 2.0f * fSlow57 * (((iTemp139) ? 0.0f : 1.0f) - fTemp138) + fSlow58 * (((iTemp139) ? fTemp138 / fTemp132 : 1.0f - (fTemp138 - fTemp132) / fTemp140) - fTemp138) + ((iTemp145) ? ((dsp->iRec39[1]) ? ((iTemp152) ? dsp->fConst2 * fTemp151 * (dsp->fConst0 * (fTemp136 * (dsp->fConst12 * fTemp153 + -0.5f - dsp->fConst13 * (mydsp_faustpower3_f(fTemp136) / (fSlow84 * mydsp_faustpower3_f(fTemp127)))) / fTemp128) + 0.1875f) - 0.5f * fSlow60 * fTemp155 * (fTemp154 - 1.0f) : 0.0f) : ((iTemp146) ? fSlow57 * fTemp150 * (fTemp149 - 1.0f) - dsp->fConst2 * fTemp151 * (fTemp147 * (0.375f * fTemp149 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp147) / mydsp_faustpower3_f(fTemp148))) / fTemp148 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp134) ? 0.5f * fTemp142 * fTemp158 * (fTemp141 - 1.0f) : 0.0f);
			float fRec38 = dsp->fRec37[1] + ((iTemp145) ? ((dsp->iRec39[1]) ? ((iTemp152) ? dsp->fConst2 * fTemp151 * (fTemp155 * (0.375f * fTemp155 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp155)) + 0.1875f) - dsp->fConst14 * (fSlow60 * mydsp_faustpower2_f(fTemp136) / (fSlow85 * mydsp_faustpower2_f(fTemp127))) : 0.0f) : ((iTemp146) ? fSlow57 * mydsp_faustpower2_f(fTemp147) / mydsp_faustpower2_f(fTemp148) - dsp->fConst2 * fTemp151 * (fTemp150 * (0.375f * fTemp150 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp150)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp134) ? fSlow80 * (mydsp_faustpower2_f(fTemp137) * fTemp158 / fTemp123) : 0.0f);
			dsp->iRec39[0] = (((iTemp134 + ((dsp->iRec39[1] + iTemp152) == 2) + ((iTemp144 + (fTemp136 < fTemp132)) == 2)) > 0) ? 0 : 1);
			float fTemp159 = fSlow64 + fTemp125;
			float fTemp160 = fSlow62 * fTemp124 + fTemp78 + fSlow39 * (2.0f * fRec38 + -1.0f) - (dsp->fRec23[1] + dsp->fRec24[1] * fTemp159);
			float fTemp161 = fTemp125 * fTemp159 + 1.0f;
			float fTemp162 = fTemp125 * fTemp160 / fTemp161;
			float fTemp163 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec24[1] + fTemp162));
			float fTemp164 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp163);
			float fTemp165 = fTemp125 * fTemp163 * fTemp164;
			dsp->fRec23[0] = dsp->fRec23[1] + 2.0f * fTemp165;
			float fTemp166 = fTemp163 * fTemp164;
			dsp->fRec24[0] = fTemp162 + fTemp166;
			float fRec25 = dsp->fRec23[1] + fTemp165;
			int iTemp167 = dsp->iRec40[1] == 0;
			int iTemp168 = dsp->iRec40[1] == 1;
			float fTemp169 = ((iTemp9) ? 0.0f : dsp->fRec41[1]);
			dsp->iRec40[0] = ((iSlow70) ? ((iTemp167) ? 1 : ((iTemp168) ? ((fTemp169 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp170 = ((dsp->iRec40[1] == 2) ? fSlow65 : 0.0f);
			dsp->fRec42[0] = fTemp98 * dsp->fRec42[1] + fTemp99 * ((iTemp9) ? 1.0f : fTemp169);
			float fTemp171 = ((iTemp167) ? dsp->fRec42[0] : 1.0f);
			float fTemp172 = ((fTemp170 == fTemp171) ? 0.5f : (fTemp169 - fTemp170) / (fTemp171 - fTemp170));
			dsp->fRec41[0] = fmaxf(fTemp170, fminf(1.0f, fTemp169 + 0.25f * (((iTemp167) ? -(fSlow68 * dsp->fRec42[0]) : ((iTemp168) ? fSlow67 : fSlow66)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp172 + -1.0f) + (1.0f - fTemp172)))));
			dsp->fVbargraph4 = (FAUSTFLOAT)(dsp->fRec41[0]);
			int iTemp173 = dsp->iRec46[1] == 0;
			int iTemp174 = dsp->iRec46[1] == 1;
			float fTemp175 = ((iTemp9) ? 0.0f : dsp->fRec47[1]);
			dsp->iRec46[0] = ((iSlow87) ? ((iTemp173) ? 1 : ((iTemp174) ? ((fTemp175 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp176 = ((dsp->iRec46[1] == 2) ? fSlow10 : 0.0f);
			dsp->iVec3[0] = iSlow88;
			int iTemp177 = (dsp->iVec3[1] <= 0) & iSlow89;
			float fTemp178 = (float)(1 - iTemp177);
			float fTemp179 = (float)(iTemp177);
			dsp->fRec48[0] = dsp->fRec48[1] * fTemp178 + ((iTemp9) ? 1.0f : fTemp175) * fTemp179;
			float fTemp180 = ((iTemp173) ? dsp->fRec48[0] : 1.0f);
			float fTemp181 = ((fTemp176 == fTemp180) ? 0.5f : (fTemp175 - fTemp176) / (fTemp180 - fTemp176));
			dsp->fRec47[0] = fmaxf(fTemp176, fminf(1.0f, fTemp175 + 0.25f * (((iTemp173) ? -(fSlow13 * dsp->fRec48[0]) : ((iTemp174) ? fSlow12 : fSlow11)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp181 + -1.0f) + (1.0f - fTemp181)))));
			dsp->fVbargraph5 = (FAUSTFLOAT)(dsp->fRec47[0]);
			float fTemp182 = dsp->fRec47[0];
			float fTemp183 = powf(2.0f, 0.00083333335f * (fTemp103 + fSlow20 * fTemp182));
			float fTemp184 = fSlow91 * fTemp183;
			float fTemp185 = fSlow92 * fTemp183;
			float fTemp186 = ((fTemp184 >= 0.25f) ? 0.5f : fmaxf(fTemp185, fminf(1.0f - fTemp185, ((iSlow24) ? 0.5f : ((iSlow25) ? 1.0f : fSlow26 + fTemp107 + fSlow28 * fTemp182)))));
			dsp->fRec49[0] = fTemp186;
			float fTemp187 = fTemp184 + dsp->fRec50[1];
			float fTemp188 = fmodf(fTemp187, 1.0f);
			dsp->fRec50[0] = fTemp188;
			int iTemp189 = fTemp188 < fTemp186;
			float fTemp190 = fTemp188 - fTemp186;
			float fTemp191 = 1.0f - fTemp186;
			int iTemp192 = fTemp188 >= fTemp186;
			float fTemp193 = fTemp184 + dsp->fRec49[1] - fTemp186;
			float fTemp194 = fTemp190 / fTemp193;
			float fTemp195 = 1.0f - fTemp194;
			float fTemp196 = fSlow32 * fTemp183 * (1.0f / fTemp191 + 1.0f / fTemp186);
			int iTemp197 = fTemp187 >= 1.0f;
			float fTemp198 = fTemp188 / fTemp183;
			float fTemp199 = fSlow96 * fTemp198;
			float fTemp200 = 1.0f - fTemp199;
			dsp->fRec51[0] = fTemp188 + 2.0f * fSlow31 * (((iTemp189) ? 0.0f : 1.0f) - fTemp188) + fSlow32 * (((iTemp189) ? fTemp188 / fTemp186 : 1.0f - fTemp190 / fTemp191) - fTemp188) + ((dsp->iRec53[1]) ? ((iTemp197) ? fSlow91 * fTemp196 * (fSlow93 * (fTemp188 * (fSlow94 * fTemp198 + -0.0011363636f - fSlow95 * (mydsp_faustpower3_f(fTemp188) / mydsp_faustpower3_f(fTemp183))) / fTemp183) + 0.1875f) - 0.5f * fSlow36 * fTemp200 * (fTemp199 - 1.0f) : 0.0f) : ((iTemp192) ? fSlow31 * fTemp195 * (fTemp194 - 1.0f) - fSlow91 * fTemp196 * (fTemp190 * (0.375f * fTemp194 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp190) / mydsp_faustpower3_f(fTemp193))) / fTemp193 + 0.1875f) : 0.0f));
			float fTemp201 = mydsp_faustpower2_f(fTemp183);
			float fRec52 = dsp->fRec51[1] + ((dsp->iRec53[1]) ? ((iTemp197) ? fSlow91 * fTemp196 * (fTemp200 * (0.375f * fTemp200 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp200)) + 0.1875f) - fSlow97 * (fSlow36 * mydsp_faustpower2_f(fTemp188) / fTemp201) : 0.0f) : ((iTemp192) ? fSlow31 * mydsp_faustpower2_f(fTemp190) / mydsp_faustpower2_f(fTemp193) - fSlow91 * fTemp196 * (fTemp195 * (0.375f * fTemp195 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp195)) + 0.1875f) : 0.0f));
			dsp->iRec53[0] = (((((dsp->iRec53[1] + iTemp197) == 2) + ((iTemp189 + (dsp->iRec53[1] == 0)) == 2)) > 0) ? 0 : 1);
			float fTemp202 = 2.0f * fRec52 + -1.0f;
			float fTemp203 = tanf(dsp->fConst1 * powf(1e+01f, 3.0f * fminf(fmaxf(0.0f, fSlow0 * powf(2.0f, 0.00083333335f * (fTemp1 + 9.6e+03f * (fTemp6 + fSlow7 * fTemp182 + fSlow16 * fTemp202)))), 1.0f) + 1.0f));
			float fTemp204 = powf(2.0f, 0.00083333335f * (fTemp126 + fSlow45 * fTemp182 + fSlow47 * fTemp202));
			float fTemp205 = fSlow98 * fTemp204;
			float fTemp206 = dsp->fConst2 * fTemp205;
			float fTemp207 = dsp->fConst11 * fTemp205;
			float fTemp208 = ((fTemp206 >= 0.25f) ? 0.5f : fmaxf(fTemp207, fminf(1.0f - fTemp207, ((iSlow48) ? 1.0f : fSlow49 + fTemp131 + fSlow51 * fTemp182 + fSlow53 * fTemp202))));
			dsp->fRec54[0] = fTemp208;
			float fTemp209 = fTemp184 + dsp->fRec56[1];
			int iTemp210 = (fSlow54 + (float)(fTemp209 >= 1.0f)) == 2.0f;
			float fTemp211 = fTemp206 + dsp->fRec55[1];
			float fTemp212 = fmodf(fTemp211, 1.0f);
			float fTemp213 = fmodf(fTemp209, 1.0f);
			float fTemp214 = ((iTemp210) ? fSlow99 * (fTemp205 * fTemp213 / fTemp183) : fTemp212);
			dsp->fRec55[0] = fTemp214;
			dsp->fRec56[0] = fTemp213;
			int iTemp215 = fTemp214 < fTemp208;
			float fTemp216 = 1.0f - fTemp208;
			float fTemp217 = fSlow96 * (fTemp213 / fTemp183);
			float fTemp218 = 1.0f - fTemp217;
			float fTemp219 = dsp->fRec55[1] + dsp->fConst2 * fTemp205 * fTemp218;
			int iTemp220 = dsp->iRec59[1] == 0;
			int iTemp221 = ((((fTemp219 >= 1.0f) + ((iTemp220 + (fTemp219 >= fTemp208)) == 2)) > 0) + (iTemp210 == 0)) > 0;
			int iTemp222 = fTemp212 >= fTemp208;
			float fTemp223 = fTemp212 - fTemp208;
			float fTemp224 = fTemp206 + dsp->fRec54[1] - fTemp208;
			float fTemp225 = fTemp223 / fTemp224;
			float fTemp226 = 1.0f - fTemp225;
			float fTemp227 = fSlow100 * fTemp204 * (1.0f / fTemp216 + 1.0f / fTemp208);
			int iTemp228 = fTemp211 >= 1.0f;
			float fTemp229 = fTemp212 / fTemp205;
			float fTemp230 = dsp->fConst0 * fTemp229;
			float fTemp231 = 1.0f - fTemp230;
			float fTemp232 = fmodf(fTemp219, 1.0f);
			int iTemp233 = fTemp232 < fTemp208;
			float fTemp234 = fTemp232 + 2.0f * fSlow57 * (((iTemp233) ? 0.0f : 1.0f) - fTemp232) + fSlow58 * (((iTemp233) ? fTemp232 / fTemp208 : 1.0f - (fTemp232 - fTemp208) / fTemp216) - fTemp232);
			dsp->fRec57[0] = fTemp214 + 2.0f * fSlow57 * (((iTemp215) ? 0.0f : 1.0f) - fTemp214) + fSlow58 * (((iTemp215) ? fTemp214 / fTemp208 : 1.0f - (fTemp214 - fTemp208) / fTemp216) - fTemp214) + ((iTemp221) ? ((dsp->iRec59[1]) ? ((iTemp228) ? dsp->fConst2 * fTemp227 * (dsp->fConst0 * (fTemp212 * (dsp->fConst12 * fTemp229 + -0.5f - dsp->fConst13 * (mydsp_faustpower3_f(fTemp212) / (fSlow101 * mydsp_faustpower3_f(fTemp204)))) / fTemp205) + 0.1875f) - 0.5f * fSlow60 * fTemp231 * (fTemp230 - 1.0f) : 0.0f) : ((iTemp222) ? fSlow57 * fTemp226 * (fTemp225 - 1.0f) - dsp->fConst2 * fTemp227 * (fTemp223 * (0.375f * fTemp225 + -0.5f - 0.0625f * (mydsp_faustpower3_f(fTemp223) / mydsp_faustpower3_f(fTemp224))) / fTemp224 + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp210) ? 0.5f * fTemp218 * fTemp234 * (fTemp217 - 1.0f) : 0.0f);
			float fRec58 = dsp->fRec57[1] + ((iTemp221) ? ((dsp->iRec59[1]) ? ((iTemp228) ? dsp->fConst2 * fTemp227 * (fTemp231 * (0.375f * fTemp231 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp231)) + 0.1875f) - dsp->fConst14 * (fSlow60 * mydsp_faustpower2_f(fTemp212) / (fSlow102 * mydsp_faustpower2_f(fTemp204))) : 0.0f) : ((iTemp222) ? fSlow57 * mydsp_faustpower2_f(fTemp223) / mydsp_faustpower2_f(fTemp224) - dsp->fConst2 * fTemp227 * (fTemp226 * (0.375f * fTemp226 + -0.5f - 0.0625f * mydsp_faustpower3_f(fTemp226)) + 0.1875f) : 0.0f)) : 0.0f) - ((iTemp210) ? fSlow97 * (mydsp_faustpower2_f(fTemp213) * fTemp234 / fTemp201) : 0.0f);
			dsp->iRec59[0] = (((iTemp210 + ((dsp->iRec59[1] + iTemp228) == 2) + ((iTemp220 + (fTemp212 < fTemp208)) == 2)) > 0) ? 0 : 1);
			float fTemp235 = fSlow64 + fTemp203;
			float fTemp236 = fSlow62 * fTemp202 + fTemp78 + fSlow39 * (2.0f * fRec58 + -1.0f) - (dsp->fRec43[1] + dsp->fRec44[1] * fTemp235);
			float fTemp237 = fTemp203 * fTemp235 + 1.0f;
			float fTemp238 = fTemp203 * fTemp236 / fTemp237;
			float fTemp239 = fmaxf(-1.0f, fminf(1.0f, dsp->fRec44[1] + fTemp238));
			float fTemp240 = 1.0f - 0.33333334f * mydsp_faustpower2_f(fTemp239);
			float fTemp241 = fTemp203 * fTemp239 * fTemp240;
			dsp->fRec43[0] = dsp->fRec43[1] + 2.0f * fTemp241;
			float fTemp242 = fTemp239 * fTemp240;
			dsp->fRec44[0] = fTemp238 + fTemp242;
			float fRec45 = dsp->fRec43[1] + fTemp241;
			int iTemp243 = dsp->iRec60[1] == 0;
			int iTemp244 = dsp->iRec60[1] == 1;
			float fTemp245 = ((iTemp9) ? 0.0f : dsp->fRec61[1]);
			dsp->iRec60[0] = ((iSlow87) ? ((iTemp243) ? 1 : ((iTemp244) ? ((fTemp245 < 1.0f) ? 1 : 2) : 2)) : 0);
			float fTemp246 = ((dsp->iRec60[1] == 2) ? fSlow65 : 0.0f);
			dsp->fRec62[0] = fTemp178 * dsp->fRec62[1] + fTemp179 * ((iTemp9) ? 1.0f : fTemp245);
			float fTemp247 = ((iTemp243) ? dsp->fRec62[0] : 1.0f);
			float fTemp248 = ((fTemp246 == fTemp247) ? 0.5f : (fTemp245 - fTemp246) / (fTemp247 - fTemp246));
			dsp->fRec61[0] = fmaxf(fTemp246, fminf(1.0f, fTemp245 + 0.25f * (((iTemp243) ? -(fSlow68 * dsp->fRec62[0]) : ((iTemp244) ? fSlow67 : fSlow66)) / mydsp_faustpower2_f(0.5f * (2.0f * fTemp248 + -1.0f) + (1.0f - fTemp248)))));
			dsp->fVbargraph6 = (FAUSTFLOAT)(dsp->fRec61[0]);
			float fTemp249 = 0.2f * (fRec2 * dsp->fRec21[0] + fRec25 * dsp->fRec41[0] + fRec45 * dsp->fRec61[0]);
			output0[i0] = (FAUSTFLOAT)(fTemp249);
			output1[i0] = (FAUSTFLOAT)(fTemp249);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->iRec3[1] = dsp->iRec3[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->iRec7[1] = dsp->iRec7[0];
			dsp->iRec5[1] = dsp->iRec5[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->iRec13[1] = dsp->iRec13[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->iRec19[1] = dsp->iRec19[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->iRec20[1] = dsp->iRec20[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->iRec26[1] = dsp->iRec26[0];
			dsp->iVec2[1] = dsp->iVec2[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->iRec33[1] = dsp->iRec33[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->iRec39[1] = dsp->iRec39[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->iRec40[1] = dsp->iRec40[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->iRec46[1] = dsp->iRec46[0];
			dsp->iVec3[1] = dsp->iVec3[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->iRec53[1] = dsp->iRec53[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->iRec59[1] = dsp->iRec59[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->iRec60[1] = dsp->iRec60[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec61[1] = dsp->fRec61[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
