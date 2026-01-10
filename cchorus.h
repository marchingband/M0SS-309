/* ------------------------------------------------------------
name: "cchorus"
Code generated with Faust 2.68.6 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -cn mychorus -scn chorus -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mychorus_H__
#define  __mychorus_H__

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

static float mychorus_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mychorus
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	FAUSTFLOAT fHslider0;
	int IOTA0;
	float fVec0[2048];
	int fSampleRate;
	float fConst3;
	float fConst4;
	float fConst5;
	float fConst6;
	float fRec1[2];
	float fConst7;
	float fConst8;
	float fRec0[3];
	float fVec1[2048];
	float fConst12;
	float fConst13;
	float fRec3[2];
	float fConst14;
	float fConst15;
	float fRec2[3];
	float fConst16;
	float fRec4[3];
	float fVec2[2048];
	float fConst17;
	float fRec6[2];
	float fRec5[3];
	float fVec3[2048];
	float fRec7[3];
	float fRec8[3];
} mychorus;

mychorus* newmychorus() { 
	mychorus* dsp = (mychorus*)calloc(1, sizeof(mychorus));
	return dsp;
}

void deletemychorus(mychorus* dsp) { 
	free(dsp);
}

void metadatamychorus(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -cn mychorus -scn chorus -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "1.1.0");
	m->declare(m->metaInterface, "filename", "cchorus.dsp");
	m->declare(m->metaInterface, "filters.lib/fir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/fir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/iir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/iir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/lowpass:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/tf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf2s:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf2s:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/version", "1.3.0");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.7.0");
	m->declare(m->metaInterface, "name", "cchorus");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
}

int getSampleRatemychorus(mychorus* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmychorus(mychorus* RESTRICT dsp) {
	return 2;
}
int getNumOutputsmychorus(mychorus* RESTRICT dsp) {
	return 2;
}

void classInitmychorus(int sample_rate) {
}

void instanceResetUserInterfacemychorus(mychorus* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(3.0f);
}

void instanceClearmychorus(mychorus* dsp) {
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2048; l0 = l0 + 1) {
			dsp->fVec0[l0] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec1[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 3; l2 = l2 + 1) {
			dsp->fRec0[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2048; l3 = l3 + 1) {
			dsp->fVec1[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec3[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 3; l5 = l5 + 1) {
			dsp->fRec2[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 3; l6 = l6 + 1) {
			dsp->fRec4[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2048; l7 = l7 + 1) {
			dsp->fVec2[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec6[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 3; l9 = l9 + 1) {
			dsp->fRec5[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2048; l10 = l10 + 1) {
			dsp->fVec3[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 3; l11 = l11 + 1) {
			dsp->fRec7[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 3; l12 = l12 + 1) {
			dsp->fRec8[l12] = 0.0f;
		}
	}
}

void instanceConstantsmychorus(mychorus* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	float fConst1 = tanf(31415.926f / fConst0);
	float fConst2 = 1.0f / fConst1;
	dsp->fConst3 = 1.0f / ((fConst2 + 1.4142135f) / fConst1 + 1.0f);
	dsp->fConst4 = 0.06f * fConst0 + 1.0f;
	dsp->fConst5 = 0.001f * fConst0;
	dsp->fConst6 = 0.8f / fConst0;
	dsp->fConst7 = (fConst2 + -1.4142135f) / fConst1 + 1.0f;
	dsp->fConst8 = 2.0f * (1.0f - 1.0f / mychorus_faustpower2_f(fConst1));
	float fConst9 = tanf(20420.352f / fConst0);
	float fConst10 = 1.0f / fConst9;
	float fConst11 = (fConst10 + 1.4142135f) / fConst9 + 1.0f;
	dsp->fConst12 = 1.0f / fConst11;
	dsp->fConst13 = 1.2f / fConst0;
	dsp->fConst14 = (fConst10 + -1.4142135f) / fConst9 + 1.0f;
	dsp->fConst15 = 2.0f * (1.0f - 1.0f / mychorus_faustpower2_f(fConst9));
	dsp->fConst16 = 0.5f / fConst11;
	dsp->fConst17 = 1.05f / fConst0;
}

void instanceInitmychorus(mychorus* dsp, int sample_rate) {
	instanceConstantsmychorus(dsp, sample_rate);
	instanceResetUserInterfacemychorus(dsp);
	instanceClearmychorus(dsp);
}

void initmychorus(mychorus* dsp, int sample_rate) {
	classInitmychorus(sample_rate);
	instanceInitmychorus(dsp, sample_rate);
}

void buildUserInterfacemychorus(mychorus* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "cchorus");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "alt-sel", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "mode", &dsp->fHslider0, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemychorus(mychorus* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)(dsp->fHslider0);
	int iSlow1 = fSlow0 >= 2.0f;
	int iSlow2 = fSlow0 >= 1.0f;
	int iSlow3 = fSlow0 >= 3.0f;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			float fTemp0 = (float)(input0[i0]);
			dsp->fVec0[dsp->IOTA0 & 2047] = fTemp0;
			dsp->fRec1[0] = dsp->fConst6 + (dsp->fRec1[1] - floorf(dsp->fConst6 + dsp->fRec1[1]));
			float fTemp1 = dsp->fConst5 * (1.225f * sinf(6.2831855f * (dsp->fRec1[0] - floorf(dsp->fRec1[0]))) + 3.5f);
			int iTemp2 = (int)(fTemp1);
			float fTemp3 = floorf(fTemp1);
			dsp->fRec0[0] = dsp->fVec0[(dsp->IOTA0 - (int)(fminf(dsp->fConst4, (float)(max(0, iTemp2))))) & 2047] * (fTemp3 + (1.0f - fTemp1)) + (fTemp1 - fTemp3) * dsp->fVec0[(dsp->IOTA0 - (int)(fminf(dsp->fConst4, (float)(max(0, iTemp2 + 1))))) & 2047] - dsp->fConst3 * (dsp->fConst7 * dsp->fRec0[2] + dsp->fConst8 * dsp->fRec0[1]);
			float fTemp4 = fTemp0 + dsp->fConst3 * (dsp->fRec0[2] + dsp->fRec0[0] + 2.0f * dsp->fRec0[1]);
			dsp->fVec1[dsp->IOTA0 & 2047] = fTemp4;
			dsp->fRec3[0] = dsp->fConst13 + (dsp->fRec3[1] - floorf(dsp->fConst13 + dsp->fRec3[1]));
			float fTemp5 = dsp->fConst5 * (2.7f * sinf(6.2831855f * (dsp->fRec3[0] - floorf(dsp->fRec3[0]))) + 6.0f);
			int iTemp6 = (int)(fTemp5);
			int iTemp7 = (int)(fminf(dsp->fConst4, (float)(max(0, iTemp6))));
			float fTemp8 = floorf(fTemp5);
			float fTemp9 = fTemp8 + (1.0f - fTemp5);
			float fTemp10 = fTemp5 - fTemp8;
			int iTemp11 = (int)(fminf(dsp->fConst4, (float)(max(0, iTemp6 + 1))));
			dsp->fRec2[0] = dsp->fVec0[(dsp->IOTA0 - iTemp7) & 2047] * fTemp9 + fTemp10 * dsp->fVec0[(dsp->IOTA0 - iTemp11) & 2047] - dsp->fConst12 * (dsp->fConst14 * dsp->fRec2[2] + dsp->fConst15 * dsp->fRec2[1]);
			dsp->fRec4[0] = 0.5f * (fTemp9 * dsp->fVec1[(dsp->IOTA0 - iTemp7) & 2047] + fTemp10 * dsp->fVec1[(dsp->IOTA0 - iTemp11) & 2047]) - dsp->fConst12 * (dsp->fConst14 * dsp->fRec4[2] + dsp->fConst15 * dsp->fRec4[1]);
			output0[i0] = (FAUSTFLOAT)(((iSlow1) ? ((iSlow3) ? 0.25f * fTemp4 + dsp->fConst16 * (dsp->fRec4[2] + dsp->fRec4[0] + 2.0f * dsp->fRec4[1]) : 0.5f * (fTemp0 + dsp->fConst12 * (dsp->fRec2[2] + dsp->fRec2[0] + 2.0f * dsp->fRec2[1]))) : ((iSlow2) ? 0.5f * fTemp4 : fTemp0)));
			float fTemp12 = (float)(input1[i0]);
			dsp->fVec2[dsp->IOTA0 & 2047] = fTemp12;
			dsp->fRec6[0] = dsp->fConst17 + (dsp->fRec6[1] - floorf(dsp->fConst17 + dsp->fRec6[1]));
			float fTemp13 = sinf(6.2831855f * (dsp->fRec6[0] + (14.323945f - floorf(dsp->fRec6[0] + 14.323945f))));
			float fTemp14 = dsp->fConst5 * (1.225f * fTemp13 + 3.5f);
			int iTemp15 = (int)(fTemp14);
			float fTemp16 = floorf(fTemp14);
			dsp->fRec5[0] = dsp->fVec2[(dsp->IOTA0 - (int)(fminf(dsp->fConst4, (float)(max(0, iTemp15))))) & 2047] * (fTemp16 + (1.0f - fTemp14)) + (fTemp14 - fTemp16) * dsp->fVec2[(dsp->IOTA0 - (int)(fminf(dsp->fConst4, (float)(max(0, iTemp15 + 1))))) & 2047] - dsp->fConst3 * (dsp->fConst7 * dsp->fRec5[2] + dsp->fConst8 * dsp->fRec5[1]);
			float fTemp17 = fTemp12 + dsp->fConst3 * (dsp->fRec5[2] + dsp->fRec5[0] + 2.0f * dsp->fRec5[1]);
			dsp->fVec3[dsp->IOTA0 & 2047] = fTemp17;
			float fTemp18 = dsp->fConst5 * (2.7f * fTemp13 + 6.0f);
			int iTemp19 = (int)(fTemp18);
			int iTemp20 = (int)(fminf(dsp->fConst4, (float)(max(0, iTemp19))));
			float fTemp21 = floorf(fTemp18);
			float fTemp22 = fTemp21 + (1.0f - fTemp18);
			float fTemp23 = fTemp18 - fTemp21;
			int iTemp24 = (int)(fminf(dsp->fConst4, (float)(max(0, iTemp19 + 1))));
			dsp->fRec7[0] = dsp->fVec2[(dsp->IOTA0 - iTemp20) & 2047] * fTemp22 + fTemp23 * dsp->fVec2[(dsp->IOTA0 - iTemp24) & 2047] - dsp->fConst12 * (dsp->fConst14 * dsp->fRec7[2] + dsp->fConst15 * dsp->fRec7[1]);
			dsp->fRec8[0] = 0.5f * (fTemp22 * dsp->fVec3[(dsp->IOTA0 - iTemp20) & 2047] + fTemp23 * dsp->fVec3[(dsp->IOTA0 - iTemp24) & 2047]) - dsp->fConst12 * (dsp->fConst14 * dsp->fRec8[2] + dsp->fConst15 * dsp->fRec8[1]);
			output1[i0] = (FAUSTFLOAT)(((iSlow1) ? ((iSlow3) ? 0.25f * fTemp17 + dsp->fConst16 * (dsp->fRec8[2] + dsp->fRec8[0] + 2.0f * dsp->fRec8[1]) : 0.5f * (fTemp12 + dsp->fConst12 * (dsp->fRec7[2] + dsp->fRec7[0] + 2.0f * dsp->fRec7[1]))) : ((iSlow2) ? 0.5f * fTemp17 : fTemp12)));
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec4[2] = dsp->fRec4[1];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec5[2] = dsp->fRec5[1];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec7[2] = dsp->fRec7[1];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec8[2] = dsp->fRec8[1];
			dsp->fRec8[1] = dsp->fRec8[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
