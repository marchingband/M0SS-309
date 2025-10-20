/* ------------------------------------------------------------
name: "cchorus"
Code generated with Faust 2.68.6 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
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
#include "dsp_glue.h"

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
	int fSampleRate;
	float fConst1;
	float fConst2;
	FAUSTFLOAT fHslider1;
	float fConst3;
	float fRec1[2];
	FAUSTFLOAT fHslider2;
	float fRec2[2];
	FAUSTFLOAT fHslider3;
	float fRec3[2];
	float fConst4;
	float fRec0[3];
	int IOTA0;
	float fVec0[16384];
	FAUSTFLOAT fHslider4;
	float fConst5;
	float fConst6;
	FAUSTFLOAT fHslider5;
	float fRec5[2];
	FAUSTFLOAT fHslider6;
	float fRec6[2];
	FAUSTFLOAT fHslider7;
	float fConst7;
	FAUSTFLOAT fHslider8;
	float fRec7[2];
	FAUSTFLOAT fHslider9;
	float fRec8[2];
	float fRec4[3];
	float fRec9[3];
	float fVec1[16384];
	FAUSTFLOAT fHslider10;
	float fRec11[2];
	float fConst8;
	FAUSTFLOAT fHslider11;
	float fRec12[2];
	float fRec10[3];
} mychorus;

mychorus* newmychorus() { 
	mychorus* chorus = (mychorus*)calloc(1, sizeof(mychorus));
	return chorus;
}

void deletemychorus(mychorus* chorus) { 
	free(chorus);
}

int getSampleRatemychorus(mychorus* RESTRICT chorus) {
	return chorus->fSampleRate;
}

int getNumInputsmychorus(mychorus* RESTRICT chorus) {
	return 2;
}
int getNumOutputsmychorus(mychorus* RESTRICT chorus) {
	return 2;
}

void classInitmychorus(int sample_rate) {
}

void instanceResetUserInterfacemychorus(mychorus* chorus) {
	chorus->fHslider0 = (FAUSTFLOAT)(-3.5f);
	chorus->fHslider1 = (FAUSTFLOAT)(7.5e+02f);
	chorus->fHslider2 = (FAUSTFLOAT)(0.0f);
	chorus->fHslider3 = (FAUSTFLOAT)(0.7f);
	chorus->fHslider4 = (FAUSTFLOAT)(-3.5f);
	chorus->fHslider5 = (FAUSTFLOAT)(3.5f);
	chorus->fHslider6 = (FAUSTFLOAT)(0.35f);
	chorus->fHslider7 = (FAUSTFLOAT)(1.0f);
	chorus->fHslider8 = (FAUSTFLOAT)(0.8f);
	chorus->fHslider9 = (FAUSTFLOAT)(1e+04f);
	chorus->fHslider10 = (FAUSTFLOAT)(1.0f);
	chorus->fHslider11 = (FAUSTFLOAT)(9e+01f);
}

void instanceClearmychorus(mychorus* chorus) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			chorus->fRec1[l0] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			chorus->fRec2[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			chorus->fRec3[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 3; l3 = l3 + 1) {
			chorus->fRec0[l3] = 0.0f;
		}
	}
	chorus->IOTA0 = 0;
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 16384; l4 = l4 + 1) {
			chorus->fVec0[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			chorus->fRec5[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			chorus->fRec6[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			chorus->fRec7[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			chorus->fRec8[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 3; l9 = l9 + 1) {
			chorus->fRec4[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 3; l10 = l10 + 1) {
			chorus->fRec9[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 16384; l11 = l11 + 1) {
			chorus->fVec1[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			chorus->fRec11[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			chorus->fRec12[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 3; l14 = l14 + 1) {
			chorus->fRec10[l14] = 0.0f;
		}
	}
}

void instanceConstantsmychorus(mychorus* chorus, int sample_rate) {
	chorus->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(chorus->fSampleRate)));
	chorus->fConst1 = 3.1415927f / fConst0;
	chorus->fConst2 = 44.1f / fConst0;
	chorus->fConst3 = 1.0f - chorus->fConst2;
	chorus->fConst4 = 6.2831855f / fConst0;
	chorus->fConst5 = 0.06f * fConst0 + 1.0f;
	chorus->fConst6 = 0.001f * fConst0;
	chorus->fConst7 = 1.0f / fConst0;
	chorus->fConst8 = 7.018733f / fConst0;
}

void instanceInitmychorus(mychorus* chorus, int sample_rate) {
	instanceConstantsmychorus(chorus, sample_rate);
	instanceResetUserInterfacemychorus(chorus);
	instanceClearmychorus(chorus);
}

void initmychorus(mychorus* chorus, int sample_rate) {
	classInitmychorus(sample_rate);
	instanceInitmychorus(chorus, sample_rate);
}

void computemychorus(mychorus* chorus, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = powf(1e+01f, 0.05f * (float)(chorus->fHslider0));
	float fSlow1 = chorus->fConst2 * (float)(chorus->fHslider1);
	float fSlow2 = chorus->fConst2 * (float)(chorus->fHslider2);
	float fSlow3 = chorus->fConst2 * (float)(chorus->fHslider3);
	float fSlow4 = powf(1e+01f, 0.05f * (float)(chorus->fHslider4));
	float fSlow5 = chorus->fConst2 * (float)(chorus->fHslider5);
	float fSlow6 = chorus->fConst2 * (float)(chorus->fHslider6);
	int iSlow7 = (int)((float)(chorus->fHslider7));
	float fSlow8 = (float)(chorus->fHslider8);
	float fSlow9 = chorus->fConst7 * fSlow8;
	float fSlow10 = chorus->fConst2 * (float)(chorus->fHslider9);
	float fSlow11 = chorus->fConst7 * fSlow8 * (float)(chorus->fHslider10);
	float fSlow12 = chorus->fConst8 * (float)(chorus->fHslider11);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			chorus->fRec1[0] = fSlow1 + chorus->fConst3 * chorus->fRec1[1];
			float fTemp0 = tanf(chorus->fConst1 * chorus->fRec1[0]);
			float fTemp1 = 1.0f / fTemp0;
			chorus->fRec2[0] = fSlow2 + chorus->fConst3 * chorus->fRec2[1];
			int iTemp2 = chorus->fRec2[0] > 0.0f;
			chorus->fRec3[0] = fSlow3 + chorus->fConst3 * chorus->fRec3[1];
			float fTemp3 = chorus->fRec3[0] * sinf(chorus->fConst4 * chorus->fRec1[0]);
			float fTemp4 = chorus->fConst1 * (chorus->fRec1[0] * powf(1e+01f, 0.05f * fabsf(chorus->fRec2[0])) / fTemp3);
			float fTemp5 = chorus->fConst1 * (chorus->fRec1[0] / fTemp3);
			float fTemp6 = ((iTemp2) ? fTemp5 : fTemp4);
			float fTemp7 = (fTemp1 - fTemp6) / fTemp0 + 1.0f;
			float fTemp8 = 1.0f - 1.0f / mychorus_faustpower2_f(fTemp0);
			float fTemp9 = 2.0f * chorus->fRec0[1] * fTemp8;
			float fTemp10 = (fTemp1 + fTemp6) / fTemp0 + 1.0f;
			chorus->fRec0[0] = (float)(input0[i0]) - (chorus->fRec0[2] * fTemp7 + fTemp9) / fTemp10;
			float fTemp11 = ((iTemp2) ? fTemp4 : fTemp5);
			float fTemp12 = (fTemp1 + fTemp11) / fTemp0 + 1.0f;
			float fTemp13 = (fTemp1 - fTemp11) / fTemp0 + 1.0f;
			float fTemp14 = (fTemp9 + chorus->fRec0[0] * fTemp12 + chorus->fRec0[2] * fTemp13) / fTemp10;
			chorus->fVec0[chorus->IOTA0 & 16383] = fTemp14;
			chorus->fRec5[0] = fSlow5 + chorus->fConst3 * chorus->fRec5[1];
			chorus->fRec6[0] = fSlow6 + chorus->fConst3 * chorus->fRec6[1];
			chorus->fRec7[0] = fSlow9 + (chorus->fRec7[1] - floorf(fSlow9 + chorus->fRec7[1]));
			float fTemp15 = floorf(chorus->fRec7[0]);
			float fTemp16 = chorus->fConst6 * chorus->fRec5[0] * (chorus->fRec6[0] * ((iSlow7) ? fabsf(4.0f * (chorus->fRec7[0] + (-0.25f - (fTemp15 + floorf(chorus->fRec7[0] + (-0.25f - fTemp15))))) + -2.0f) + -1.0f : sinf(6.2831855f * (chorus->fRec7[0] - fTemp15))) + 1.0f);
			int iTemp17 = (int)(fTemp16);
			float fTemp18 = floorf(fTemp16);
			chorus->fRec8[0] = fSlow10 + chorus->fConst3 * chorus->fRec8[1];
			float fTemp19 = tanf(chorus->fConst1 * chorus->fRec8[0]);
			float fTemp20 = 1.0f / fTemp19;
			float fTemp21 = (fTemp20 + -1.4142135f) / fTemp19 + 1.0f;
			float fTemp22 = 1.0f - 1.0f / mychorus_faustpower2_f(fTemp19);
			float fTemp23 = (fTemp20 + 1.4142135f) / fTemp19 + 1.0f;
			chorus->fRec4[0] = chorus->fVec0[(chorus->IOTA0 - (int)(fminf(chorus->fConst5, (float)(max(0, iTemp17))))) & 16383] * (fTemp18 + (1.0f - fTemp16)) + (fTemp16 - fTemp18) * chorus->fVec0[(chorus->IOTA0 - (int)(fminf(chorus->fConst5, (float)(max(0, iTemp17 + 1))))) & 16383] - (chorus->fRec4[2] * fTemp21 + 2.0f * chorus->fRec4[1] * fTemp22) / fTemp23;
			output0[i0] = (FAUSTFLOAT)(fSlow0 * fTemp14 + fSlow4 * ((chorus->fRec4[2] + chorus->fRec4[0] + 2.0f * chorus->fRec4[1]) / fTemp23));
			float fTemp24 = 2.0f * fTemp8 * chorus->fRec9[1];
			chorus->fRec9[0] = (float)(input1[i0]) - (fTemp7 * chorus->fRec9[2] + fTemp24) / fTemp10;
			float fTemp25 = (fTemp24 + chorus->fRec9[0] * fTemp12 + fTemp13 * chorus->fRec9[2]) / fTemp10;
			chorus->fVec1[chorus->IOTA0 & 16383] = fTemp25;
			chorus->fRec11[0] = fSlow11 + (chorus->fRec11[1] - floorf(fSlow11 + chorus->fRec11[1]));
			chorus->fRec12[0] = fSlow12 + chorus->fConst3 * chorus->fRec12[1];
			float fTemp26 = chorus->fRec11[0] + 0.15915494f * chorus->fRec12[0];
			float fTemp27 = floorf(fTemp26);
			float fTemp28 = chorus->fConst6 * chorus->fRec5[0] * (chorus->fRec6[0] * ((iSlow7) ? fabsf(4.0f * (fTemp26 + (-0.25f - (fTemp27 + floorf(fTemp26 + (-0.25f - fTemp27))))) + -2.0f) + -1.0f : sinf(6.2831855f * (fTemp26 - fTemp27))) + 1.0f);
			int iTemp29 = (int)(fTemp28);
			float fTemp30 = floorf(fTemp28);
			chorus->fRec10[0] = chorus->fVec1[(chorus->IOTA0 - (int)(fminf(chorus->fConst5, (float)(max(0, iTemp29))))) & 16383] * (fTemp30 + (1.0f - fTemp28)) + (fTemp28 - fTemp30) * chorus->fVec1[(chorus->IOTA0 - (int)(fminf(chorus->fConst5, (float)(max(0, iTemp29 + 1))))) & 16383] - (fTemp21 * chorus->fRec10[2] + 2.0f * fTemp22 * chorus->fRec10[1]) / fTemp23;
			output1[i0] = (FAUSTFLOAT)(fSlow0 * fTemp25 + fSlow4 * ((chorus->fRec10[2] + chorus->fRec10[0] + 2.0f * chorus->fRec10[1]) / fTemp23));
			chorus->fRec1[1] = chorus->fRec1[0];
			chorus->fRec2[1] = chorus->fRec2[0];
			chorus->fRec3[1] = chorus->fRec3[0];
			chorus->fRec0[2] = chorus->fRec0[1];
			chorus->fRec0[1] = chorus->fRec0[0];
			chorus->IOTA0 = chorus->IOTA0 + 1;
			chorus->fRec5[1] = chorus->fRec5[0];
			chorus->fRec6[1] = chorus->fRec6[0];
			chorus->fRec7[1] = chorus->fRec7[0];
			chorus->fRec8[1] = chorus->fRec8[0];
			chorus->fRec4[2] = chorus->fRec4[1];
			chorus->fRec4[1] = chorus->fRec4[0];
			chorus->fRec9[2] = chorus->fRec9[1];
			chorus->fRec9[1] = chorus->fRec9[0];
			chorus->fRec11[1] = chorus->fRec11[0];
			chorus->fRec12[1] = chorus->fRec12[0];
			chorus->fRec10[2] = chorus->fRec10[1];
			chorus->fRec10[1] = chorus->fRec10[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
