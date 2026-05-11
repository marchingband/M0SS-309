/* ------------------------------------------------------------
name: "masterFX"
Code generated with Faust 2.68.6 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -cn MasterFX -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __MasterFX_H__
#define  __MasterFX_H__

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

static int iMasterFXSIG0Wave0[1302] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919,7927,7933,7937,7949,7951,7963,7993,8009,8011,8017,8039,8053,8059,8069,8081,8087,8089,8093,8101,8111,8117,8123,8147,8161,8167,8171,8179,8191,8209,8219,8221,8231,8233,8237,8243,8263,8269,8273,8287,8291,8293,8297,8311,8317,8329,8353,8363,8369,8377,8387,8389,8419,8423,8429,8431,8443,8447,8461,8467,8501,8513,8521,8527,8537,8539,8543,8563,8573,8581,8597,8599,8609,8623,8627,8629,8641,8647,8663,8669,8677,8681,8689,8693,8699,8707,8713,8719,8731,8737,8741,8747,8753,8761,8779,8783,8803,8807,8819,8821,8831,8837,8839,8849,8861,8863,8867,8887,8893,8923,8929,8933,8941,8951,8963,8969,8971,8999,9001,9007,9011,9013,9029,9041,9043,9049,9059,9067,9091,9103,9109,9127,9133,9137,9151,9157,9161,9173,9181,9187,9199,9203,9209,9221,9227,9239,9241,9257,9277,9281,9283,9293,9311,9319,9323,9337,9341,9343,9349,9371,9377,9391,9397,9403,9413,9419,9421,9431,9433,9437,9439,9461,9463,9467,9473,9479,9491,9497,9511,9521,9533,9539,9547,9551,9587,9601,9613,9619,9623,9629,9631,9643,9649,9661,9677,9679,9689,9697,9719,9721,9733,9739,9743,9749,9767,9769,9781,9787,9791,9803,9811,9817,9829,9833,9839,9851,9857,9859,9871,9883,9887,9901,9907,9923,9929,9931,9941,9949,9967,9973,10007,10009,10037,10039,10061,10067,10069,10079,10091,10093,10099,10103,10111,10133,10139,10141,10151,10159,10163,10169,10177,10181,10193,10211,10223,10243,10247,10253,10259,10267,10271,10273,10289,10301,10303,10313,10321,10331,10333,10337,10343,10357,10369,10391,10399,10427,10429,10433,10453,10457,10459,10463,10477,10487,10499,10501,10513,10529,10531,10559,10567,10589,10597,10601,10607,10613,10627,10631,10639,10651,10657,10663,10667};
typedef struct {
	int iMasterFXSIG0Wave0_idx;
} MasterFXSIG0;

static MasterFXSIG0* newMasterFXSIG0() { return (MasterFXSIG0*)calloc(1, sizeof(MasterFXSIG0)); }
static void deleteMasterFXSIG0(MasterFXSIG0* dsp) { free(dsp); }

int getNumInputsMasterFXSIG0(MasterFXSIG0* RESTRICT dsp) {
	return 0;
}
int getNumOutputsMasterFXSIG0(MasterFXSIG0* RESTRICT dsp) {
	return 1;
}

static void instanceInitMasterFXSIG0(MasterFXSIG0* dsp, int sample_rate) {
	dsp->iMasterFXSIG0Wave0_idx = 0;
}

static void fillMasterFXSIG0(MasterFXSIG0* dsp, int count, int* table) {
	/* C99 loop */
	{
		int i1;
		for (i1 = 0; i1 < count; i1 = i1 + 1) {
			table[i1] = iMasterFXSIG0Wave0[dsp->iMasterFXSIG0Wave0_idx];
			dsp->iMasterFXSIG0Wave0_idx = (1 + dsp->iMasterFXSIG0Wave0_idx) % 1302;
		}
	}
}

static int itbl0MasterFXSIG0[1302];
static float MasterFX_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS MasterFX
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	int fSampleRate;
	float fConst0;
	float fVec0[2];
	float fConst1;
	FAUSTFLOAT fHslider0;
	float fConst2;
	int iVec1[2];
	float fRec0[2];
	float fVec2[2];
	FAUSTFLOAT fHslider1;
	float fRec8[2];
	float fRec7[2];
	float fVec3[2];
	float fRec12[2];
	float fRec16[2];
	float fRec23[2];
	float fRec27[2];
	float fRec31[2];
	float fRec38[2];
	float fRec42[2];
	float fRec46[2];
	FAUSTFLOAT fHslider2;
	float fRec50[2];
	FAUSTFLOAT fHslider3;
	int IOTA0;
	float fVec4[2048];
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fRec52[2];
	float fConst9;
	int iVec5[2];
	float fConst10;
	float fRec51[3];
	float fVec6[2048];
	float fConst14;
	float fConst15;
	float fConst16;
	float fRec53[3];
	float fConst17;
	float fRec54[3];
	FAUSTFLOAT fHslider4;
	float fRec55[2];
	float fConst18;
	float fRec56[2];
	float fRec57[2];
	float fVec7[131072];
	FAUSTFLOAT fHslider5;
	float fRec62[2];
	float fRec58[2];
	float fRec59[2];
	float fRec60[2];
	float fRec61[2];
	FAUSTFLOAT fHslider6;
	float fRec64[2];
	float fVec8[131072];
	FAUSTFLOAT fHslider7;
	float fRec69[2];
	float fConst19;
	float fRec65[2];
	float fRec66[2];
	float fRec67[2];
	float fRec68[2];
	float fRec63[2];
	float fVec9[16384];
	float fRec70[2];
	float fVec10[2];
	float fRec49[2];
	float fRec47[2];
	float fVec11[2048];
	float fConst20;
	float fRec73[2];
	float fRec72[3];
	float fVec12[2048];
	float fConst21;
	float fRec75[2];
	float fRec74[3];
	float fRec76[3];
	float fVec13[131072];
	float fRec77[2];
	float fVec14[131072];
	float fVec15[16384];
	float fRec78[2];
	float fVec16[2];
	float fRec71[2];
	float fRec48[2];
	float fVec17[16384];
	float fVec18[2];
	float fRec45[2];
	float fRec43[2];
	float fVec19[16384];
	float fRec80[2];
	float fVec20[2];
	float fRec79[2];
	float fRec44[2];
	float fVec21[16384];
	float fVec22[2];
	float fRec41[2];
	float fRec39[2];
	float fVec23[16384];
	float fRec82[2];
	float fVec24[2];
	float fRec81[2];
	float fRec40[2];
	float fVec25[16384];
	float fVec26[2];
	float fRec37[2];
	float fRec35[2];
	float fVec27[16384];
	float fRec84[2];
	float fVec28[2];
	float fRec83[2];
	float fRec36[2];
	float fVec29[16384];
	float fRec85[2];
	float fVec30[2];
	float fRec34[2];
	float fRec32[2];
	float fVec31[16384];
	float fRec87[2];
	float fVec32[2];
	float fRec86[2];
	float fRec33[2];
	float fVec33[16384];
	float fVec34[2];
	float fRec30[2];
	float fRec28[2];
	float fVec35[16384];
	float fRec89[2];
	float fVec36[2];
	float fRec88[2];
	float fRec29[2];
	float fVec37[16384];
	float fVec38[2];
	float fRec26[2];
	float fRec24[2];
	float fVec39[16384];
	float fRec91[2];
	float fVec40[2];
	float fRec90[2];
	float fRec25[2];
	float fVec41[16384];
	float fVec42[2];
	float fRec22[2];
	float fRec20[2];
	float fVec43[16384];
	float fRec93[2];
	float fVec44[2];
	float fRec92[2];
	float fRec21[2];
	float fVec45[16384];
	float fRec94[2];
	float fVec46[2];
	float fRec19[2];
	float fRec17[2];
	float fVec47[16384];
	float fRec96[2];
	float fVec48[2];
	float fRec95[2];
	float fRec18[2];
	float fVec49[16384];
	float fVec50[2];
	float fRec15[2];
	float fRec13[2];
	float fVec51[16384];
	float fRec98[2];
	float fVec52[2];
	float fRec97[2];
	float fRec14[2];
	float fVec53[16384];
	float fVec54[2];
	float fRec11[2];
	float fRec9[2];
	float fVec55[16384];
	float fRec100[2];
	float fVec56[2];
	float fRec99[2];
	float fRec10[2];
	float fVec57[16384];
	float fVec58[2];
	float fRec6[2];
	float fRec4[2];
	float fVec59[16384];
	float fRec102[2];
	float fVec60[2];
	float fRec101[2];
	float fRec5[2];
	float fRec3[2];
	float fRec1[1024];
	float fRec103[2];
	float fRec2[1024];
	FAUSTFLOAT fHslider8;
	float fRec104[2];
} MasterFX;

MasterFX* newMasterFX() { 
	MasterFX* dsp = (MasterFX*)calloc(1, sizeof(MasterFX));
	return dsp;
}

void deleteMasterFX(MasterFX* dsp) { 
	free(dsp);
}

void metadataMasterFX(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "1.11.1");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -cn MasterFX -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "delays.lib/fdelay1a:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelay4:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelayltv:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "1.1.0");
	m->declare(m->metaInterface, "filename", "masterFX.dsp");
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
	m->declare(m->metaInterface, "filters.lib/nlf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/nlf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/nlf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1:license", "MIT-style STK-4.3 license");
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
	m->declare(m->metaInterface, "name", "masterFX");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/version", "1.4.0");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "1.3.0");
	m->declare(m->metaInterface, "reverbs.lib/greyhole:author", "Julian Parker, bug fixes and minor interface changes by Till Bovermann");
	m->declare(m->metaInterface, "reverbs.lib/greyhole:license", "GPL2+");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "1.2.0");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "1.5.0");
}

int getSampleRateMasterFX(MasterFX* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsMasterFX(MasterFX* RESTRICT dsp) {
	return 2;
}
int getNumOutputsMasterFX(MasterFX* RESTRICT dsp) {
	return 2;
}

void classInitMasterFX(int sample_rate) {
	MasterFXSIG0* sig0 = newMasterFXSIG0();
	instanceInitMasterFXSIG0(sig0, sample_rate);
	fillMasterFXSIG0(sig0, 1302, itbl0MasterFXSIG0);
	deleteMasterFXSIG0(sig0);
}

void instanceResetUserInterfaceMasterFX(MasterFX* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.2f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(1024.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(0.0f);
}

void instanceClearMasterFX(MasterFX* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->fVec0[l0] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->iVec1[l1] = 0;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec0[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fVec2[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec8[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec7[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fVec3[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec12[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec16[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec23[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec27[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec31[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec38[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec42[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec46[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec50[l15] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2048; l16 = l16 + 1) {
			dsp->fVec4[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec52[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->iVec5[l18] = 0;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 3; l19 = l19 + 1) {
			dsp->fRec51[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2048; l20 = l20 + 1) {
			dsp->fVec6[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 3; l21 = l21 + 1) {
			dsp->fRec53[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 3; l22 = l22 + 1) {
			dsp->fRec54[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec55[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec56[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec57[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 131072; l26 = l26 + 1) {
			dsp->fVec7[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec62[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec58[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec59[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec60[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec61[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec64[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 131072; l33 = l33 + 1) {
			dsp->fVec8[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec69[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec65[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec66[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec67[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec68[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec63[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 16384; l40 = l40 + 1) {
			dsp->fVec9[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec70[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fVec10[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec49[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec47[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2048; l45 = l45 + 1) {
			dsp->fVec11[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec73[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 3; l47 = l47 + 1) {
			dsp->fRec72[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2048; l48 = l48 + 1) {
			dsp->fVec12[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec75[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 3; l50 = l50 + 1) {
			dsp->fRec74[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 3; l51 = l51 + 1) {
			dsp->fRec76[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 131072; l52 = l52 + 1) {
			dsp->fVec13[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fRec77[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 131072; l54 = l54 + 1) {
			dsp->fVec14[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 16384; l55 = l55 + 1) {
			dsp->fVec15[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec78[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fVec16[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec71[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec48[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 16384; l60 = l60 + 1) {
			dsp->fVec17[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fVec18[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec45[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec43[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 16384; l64 = l64 + 1) {
			dsp->fVec19[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec80[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fVec20[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec79[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec44[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 16384; l69 = l69 + 1) {
			dsp->fVec21[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fVec22[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec41[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec39[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 16384; l73 = l73 + 1) {
			dsp->fVec23[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec82[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fVec24[l75] = 0.0f;
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
			dsp->fRec40[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 16384; l78 = l78 + 1) {
			dsp->fVec25[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fVec26[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec37[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec35[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 16384; l82 = l82 + 1) {
			dsp->fVec27[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec84[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fVec28[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fRec83[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec36[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 16384; l87 = l87 + 1) {
			dsp->fVec29[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec85[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fVec30[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec34[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec32[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 16384; l92 = l92 + 1) {
			dsp->fVec31[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec87[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fVec32[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec86[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec33[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 16384; l97 = l97 + 1) {
			dsp->fVec33[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fVec34[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fRec30[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec28[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 16384; l101 = l101 + 1) {
			dsp->fVec35[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec89[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fVec36[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec88[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec29[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 16384; l106 = l106 + 1) {
			dsp->fVec37[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fVec38[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 2; l108 = l108 + 1) {
			dsp->fRec26[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec24[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 16384; l110 = l110 + 1) {
			dsp->fVec39[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 2; l111 = l111 + 1) {
			dsp->fRec91[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fVec40[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 2; l113 = l113 + 1) {
			dsp->fRec90[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 2; l114 = l114 + 1) {
			dsp->fRec25[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 16384; l115 = l115 + 1) {
			dsp->fVec41[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fVec42[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 2; l117 = l117 + 1) {
			dsp->fRec22[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec20[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 16384; l119 = l119 + 1) {
			dsp->fVec43[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 2; l120 = l120 + 1) {
			dsp->fRec93[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 2; l121 = l121 + 1) {
			dsp->fVec44[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 2; l122 = l122 + 1) {
			dsp->fRec92[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 2; l123 = l123 + 1) {
			dsp->fRec21[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 16384; l124 = l124 + 1) {
			dsp->fVec45[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 2; l125 = l125 + 1) {
			dsp->fRec94[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fVec46[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 2; l127 = l127 + 1) {
			dsp->fRec19[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 2; l128 = l128 + 1) {
			dsp->fRec17[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 16384; l129 = l129 + 1) {
			dsp->fVec47[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 2; l130 = l130 + 1) {
			dsp->fRec96[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 2; l131 = l131 + 1) {
			dsp->fVec48[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 2; l132 = l132 + 1) {
			dsp->fRec95[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 2; l133 = l133 + 1) {
			dsp->fRec18[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 16384; l134 = l134 + 1) {
			dsp->fVec49[l134] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; l135 < 2; l135 = l135 + 1) {
			dsp->fVec50[l135] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; l136 < 2; l136 = l136 + 1) {
			dsp->fRec15[l136] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; l137 < 2; l137 = l137 + 1) {
			dsp->fRec13[l137] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; l138 < 16384; l138 = l138 + 1) {
			dsp->fVec51[l138] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; l139 < 2; l139 = l139 + 1) {
			dsp->fRec98[l139] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; l140 < 2; l140 = l140 + 1) {
			dsp->fVec52[l140] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; l141 < 2; l141 = l141 + 1) {
			dsp->fRec97[l141] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; l142 < 2; l142 = l142 + 1) {
			dsp->fRec14[l142] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; l143 < 16384; l143 = l143 + 1) {
			dsp->fVec53[l143] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; l144 < 2; l144 = l144 + 1) {
			dsp->fVec54[l144] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; l145 < 2; l145 = l145 + 1) {
			dsp->fRec11[l145] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; l146 < 2; l146 = l146 + 1) {
			dsp->fRec9[l146] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; l147 < 16384; l147 = l147 + 1) {
			dsp->fVec55[l147] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; l148 < 2; l148 = l148 + 1) {
			dsp->fRec100[l148] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; l149 < 2; l149 = l149 + 1) {
			dsp->fVec56[l149] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; l150 < 2; l150 = l150 + 1) {
			dsp->fRec99[l150] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; l151 < 2; l151 = l151 + 1) {
			dsp->fRec10[l151] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; l152 < 16384; l152 = l152 + 1) {
			dsp->fVec57[l152] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; l153 < 2; l153 = l153 + 1) {
			dsp->fVec58[l153] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; l154 < 2; l154 = l154 + 1) {
			dsp->fRec6[l154] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; l155 < 2; l155 = l155 + 1) {
			dsp->fRec4[l155] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; l156 < 16384; l156 = l156 + 1) {
			dsp->fVec59[l156] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; l157 < 2; l157 = l157 + 1) {
			dsp->fRec102[l157] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; l158 < 2; l158 = l158 + 1) {
			dsp->fVec60[l158] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; l159 < 2; l159 = l159 + 1) {
			dsp->fRec101[l159] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; l160 < 2; l160 = l160 + 1) {
			dsp->fRec5[l160] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; l161 < 2; l161 = l161 + 1) {
			dsp->fRec3[l161] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; l162 < 1024; l162 = l162 + 1) {
			dsp->fRec1[l162] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; l163 < 2; l163 = l163 + 1) {
			dsp->fRec103[l163] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; l164 < 1024; l164 = l164 + 1) {
			dsp->fRec2[l164] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; l165 < 2; l165 = l165 + 1) {
			dsp->fRec104[l165] = 0.0f;
		}
	}
}

void instanceConstantsMasterFX(MasterFX* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 44.1f / dsp->fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	float fConst3 = tanf(31415.926f / dsp->fConst0);
	float fConst4 = 1.0f / fConst3;
	dsp->fConst5 = 1.0f / ((fConst4 + 1.4142135f) / fConst3 + 1.0f);
	dsp->fConst6 = 0.06f * dsp->fConst0 + 1.0f;
	dsp->fConst7 = 0.001f * dsp->fConst0;
	dsp->fConst8 = 1.05f / dsp->fConst0;
	dsp->fConst9 = (fConst4 + -1.4142135f) / fConst3 + 1.0f;
	dsp->fConst10 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst3));
	float fConst11 = tanf(20420.352f / dsp->fConst0);
	float fConst12 = 1.0f / fConst11;
	float fConst13 = (fConst12 + 1.4142135f) / fConst11 + 1.0f;
	dsp->fConst14 = 1.0f / fConst13;
	dsp->fConst15 = (fConst12 + -1.4142135f) / fConst11 + 1.0f;
	dsp->fConst16 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst11));
	dsp->fConst17 = 0.5011872f / fConst13;
	dsp->fConst18 = 3.1415927f / dsp->fConst0;
	dsp->fConst19 = 1e+01f / dsp->fConst0;
	dsp->fConst20 = 0.8f / dsp->fConst0;
	dsp->fConst21 = 1.2f / dsp->fConst0;
}

void instanceInitMasterFX(MasterFX* dsp, int sample_rate) {
	instanceConstantsMasterFX(dsp, sample_rate);
	instanceResetUserInterfaceMasterFX(dsp);
	instanceClearMasterFX(dsp);
}

void initMasterFX(MasterFX* dsp, int sample_rate) {
	classInitMasterFX(sample_rate);
	instanceInitMasterFX(dsp, sample_rate);
}

void buildUserInterfaceMasterFX(MasterFX* dsp, UIGlue* ui_interface) {
	ui_interface->openVerticalBox(ui_interface->uiInterface, "masterFX");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "alt-sel", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "70");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "chorus-mode", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "72");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-fb", &dsp->fHslider6, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "73");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-mix", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "alt", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "71");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-time", &dsp->fHslider7, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)65536.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "alt", "18");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "75");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-feedback", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "alt", "0");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "76");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-mix", &dsp->fHslider8, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "alt", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "69");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-size", &dsp->fHslider1, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "alt", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "74");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-time", &dsp->fHslider5, (FAUSTFLOAT)0.2f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "alt", "1");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "midi", "77");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "volume", &dsp->fHslider0, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computeMasterFX(MasterFX* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst1 * (float)(dsp->fHslider0);
	float fSlow1 = dsp->fConst1 * (float)(dsp->fHslider1);
	float fSlow2 = dsp->fConst1 * (float)(dsp->fHslider2);
	float fSlow3 = (float)(dsp->fHslider3);
	float fSlow4 = (float)(fSlow3 == 0.0f);
	float fSlow5 = (float)(fSlow3 == 1.0f);
	float fSlow6 = (float)(fSlow3 == 2.0f);
	float fSlow7 = (float)(fSlow3 == 3.0f);
	float fSlow8 = dsp->fConst1 * (float)(dsp->fHslider4);
	float fSlow9 = dsp->fConst1 * (float)(dsp->fHslider5);
	float fSlow10 = dsp->fConst1 * (float)(dsp->fHslider6);
	float fSlow11 = dsp->fConst1 * (float)(dsp->fHslider7);
	float fSlow12 = dsp->fConst1 * (float)(dsp->fHslider8);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->fVec0[0] = dsp->fConst0;
			dsp->iVec1[0] = 1;
			dsp->fRec0[0] = fSlow0 + dsp->fConst2 * dsp->fRec0[1];
			dsp->fVec2[0] = 0.3f;
			float fTemp0 = dsp->fVec2[1] + 0.3f;
			float fTemp1 = 1.0f - 0.5f * fTemp0;
			int iTemp2 = 1 - dsp->iVec1[1];
			dsp->fRec8[0] = fSlow1 + dsp->fConst2 * dsp->fRec8[1];
			int iTemp3 = itbl0MasterFXSIG0[max(0, min((int)(48.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec7[0] = 0.9999f * (dsp->fRec7[1] + (float)(iTemp2 * iTemp3)) + 0.0001f * (float)(iTemp3);
			float fTemp4 = dsp->fRec7[0] + -1.49999f;
			float fTemp5 = floorf(fTemp4);
			float fTemp6 = fTemp5 + (2.0f - dsp->fRec7[0]);
			float fTemp7 = dsp->fRec7[0] - fTemp5;
			dsp->fVec3[0] = 0.6f;
			float fTemp8 = dsp->fVec3[1] + 0.6f;
			float fTemp9 = 0.5f * fTemp8;
			float fTemp10 = cosf(fTemp9);
			int iTemp11 = itbl0MasterFXSIG0[max(0, min((int)(61.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec12[0] = 0.9999f * (dsp->fRec12[1] + (float)(iTemp2 * iTemp11)) + 0.0001f * (float)(iTemp11);
			float fTemp12 = dsp->fRec12[0] + -1.49999f;
			float fTemp13 = floorf(fTemp12);
			float fTemp14 = fTemp13 + (2.0f - dsp->fRec12[0]);
			float fTemp15 = dsp->fRec12[0] - fTemp13;
			int iTemp16 = itbl0MasterFXSIG0[max(0, min((int)(74.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec16[0] = 0.9999f * (dsp->fRec16[1] + (float)(iTemp2 * iTemp16)) + 0.0001f * (float)(iTemp16);
			float fTemp17 = dsp->fRec16[0] + -1.49999f;
			float fTemp18 = floorf(fTemp17);
			float fTemp19 = fTemp18 + (2.0f - dsp->fRec16[0]);
			float fTemp20 = dsp->fRec16[0] - fTemp18;
			float fTemp21 = sinf(fTemp9);
			float fTemp22 = -0.5f * fTemp8;
			float fTemp23 = cosf(fTemp22);
			int iTemp24 = itbl0MasterFXSIG0[max(0, min((int)(29.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec23[0] = 0.9999f * (dsp->fRec23[1] + (float)(iTemp2 * iTemp24)) + 0.0001f * (float)(iTemp24);
			float fTemp25 = dsp->fRec23[0] + -1.49999f;
			float fTemp26 = floorf(fTemp25);
			float fTemp27 = fTemp26 + (2.0f - dsp->fRec23[0]);
			float fTemp28 = dsp->fRec23[0] - fTemp26;
			int iTemp29 = itbl0MasterFXSIG0[max(0, min((int)(42.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec27[0] = 0.9999f * (dsp->fRec27[1] + (float)(iTemp2 * iTemp29)) + 0.0001f * (float)(iTemp29);
			float fTemp30 = dsp->fRec27[0] + -1.49999f;
			float fTemp31 = floorf(fTemp30);
			float fTemp32 = fTemp31 + (2.0f - dsp->fRec27[0]);
			float fTemp33 = dsp->fRec27[0] - fTemp31;
			int iTemp34 = itbl0MasterFXSIG0[max(0, min((int)(55.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec31[0] = 0.9999f * (dsp->fRec31[1] + (float)(iTemp2 * iTemp34)) + 0.0001f * (float)(iTemp34);
			float fTemp35 = dsp->fRec31[0] + -1.49999f;
			float fTemp36 = floorf(fTemp35);
			float fTemp37 = fTemp36 + (2.0f - dsp->fRec31[0]);
			float fTemp38 = dsp->fRec31[0] - fTemp36;
			float fTemp39 = sinf(fTemp22);
			int iTemp40 = itbl0MasterFXSIG0[max(0, min((int)(1e+01f * dsp->fRec8[0]), 1301))];
			dsp->fRec38[0] = 0.9999f * (dsp->fRec38[1] + (float)(iTemp2 * iTemp40)) + 0.0001f * (float)(iTemp40);
			float fTemp41 = dsp->fRec38[0] + -1.49999f;
			float fTemp42 = floorf(fTemp41);
			float fTemp43 = fTemp42 + (2.0f - dsp->fRec38[0]);
			float fTemp44 = dsp->fRec38[0] - fTemp42;
			int iTemp45 = itbl0MasterFXSIG0[max(0, min((int)(23.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec42[0] = 0.9999f * (dsp->fRec42[1] + (float)(iTemp2 * iTemp45)) + 0.0001f * (float)(iTemp45);
			float fTemp46 = dsp->fRec42[0] + -1.49999f;
			float fTemp47 = floorf(fTemp46);
			float fTemp48 = fTemp47 + (2.0f - dsp->fRec42[0]);
			float fTemp49 = dsp->fRec42[0] - fTemp47;
			int iTemp50 = itbl0MasterFXSIG0[max(0, min((int)(36.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec46[0] = 0.9999f * (dsp->fRec46[1] + (float)(iTemp2 * iTemp50)) + 0.0001f * (float)(iTemp50);
			float fTemp51 = dsp->fRec46[0] + -1.49999f;
			float fTemp52 = floorf(fTemp51);
			float fTemp53 = fTemp52 + (2.0f - dsp->fRec46[0]);
			float fTemp54 = dsp->fRec46[0] - fTemp52;
			dsp->fRec50[0] = fSlow2 + dsp->fConst2 * dsp->fRec50[1];
			float fTemp55 = 1.0f - dsp->fRec50[0];
			float fTemp56 = (float)(input1[i0]);
			dsp->fVec4[dsp->IOTA0 & 2047] = fTemp56;
			float fTemp57 = fSlow4 * fTemp56;
			dsp->fRec52[0] = dsp->fConst8 + (dsp->fRec52[1] - floorf(dsp->fConst8 + dsp->fRec52[1]));
			float fTemp58 = sinf(6.2831855f * (dsp->fRec52[0] + (14.323945f - floorf(dsp->fRec52[0] + 14.323945f))));
			float fTemp59 = dsp->fConst7 * (1.225f * fTemp58 + 3.5f);
			int iTemp60 = (int)(fTemp59);
			float fTemp61 = floorf(fTemp59);
			dsp->iVec5[0] = 2;
			dsp->fRec51[0] = dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp60))))) & 2047] * (fTemp61 + (1.0f - fTemp59)) + (fTemp59 - fTemp61) * dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp60 + 1))))) & 2047] - dsp->fConst5 * (dsp->fConst9 * dsp->fRec51[2] + dsp->fConst10 * dsp->fRec51[1]);
			float fTemp62 = fTemp56 + dsp->fConst5 * (dsp->fRec51[2] + dsp->fRec51[0] + 2.0f * dsp->fRec51[1]);
			dsp->fVec6[dsp->IOTA0 & 2047] = fTemp62;
			float fTemp63 = dsp->fConst7 * (2.7f * fTemp58 + 6.0f);
			int iTemp64 = (int)(fTemp63);
			int iTemp65 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp64))));
			float fTemp66 = floorf(fTemp63);
			float fTemp67 = fTemp66 + (1.0f - fTemp63);
			float fTemp68 = fTemp63 - fTemp66;
			int iTemp69 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp64 + 1))));
			dsp->fRec53[0] = dsp->fVec4[(dsp->IOTA0 - iTemp65) & 2047] * fTemp67 + fTemp68 * dsp->fVec4[(dsp->IOTA0 - iTemp69) & 2047] - dsp->fConst14 * (dsp->fConst15 * dsp->fRec53[2] + dsp->fConst16 * dsp->fRec53[1]);
			float fTemp70 = 0.5011872f * (fSlow5 * fTemp62 + fSlow6 * (fTemp56 + dsp->fConst14 * (dsp->fRec53[2] + dsp->fRec53[0] + 2.0f * dsp->fRec53[1])));
			dsp->fRec54[0] = 0.5011872f * (fTemp67 * dsp->fVec6[(dsp->IOTA0 - iTemp65) & 2047] + fTemp68 * dsp->fVec6[(dsp->IOTA0 - iTemp69) & 2047]) - dsp->fConst14 * (dsp->fConst15 * dsp->fRec54[2] + dsp->fConst16 * dsp->fRec54[1]);
			float fTemp71 = fSlow7 * (0.25118864f * fTemp62 + dsp->fConst17 * (dsp->fRec54[2] + dsp->fRec54[0] + 2.0f * dsp->fRec54[1]));
			float fTemp72 = fTemp55 * (fTemp57 + fTemp70 + fTemp71);
			dsp->fRec55[0] = fSlow8 + dsp->fConst2 * dsp->fRec55[1];
			float fTemp73 = dsp->fRec55[0] + dsp->fRec55[1];
			float fTemp74 = dsp->fConst0 + dsp->fVec0[1];
			float fTemp75 = dsp->fConst18 * (float)(dsp->iVec5[1] + 2);
			float fTemp76 = sinf(fTemp75);
			float fTemp77 = cosf(fTemp75);
			dsp->fRec56[0] = dsp->fRec57[1] * fTemp76 + dsp->fRec56[1] * fTemp77;
			dsp->fRec57[0] = (float)(iTemp2) + dsp->fRec57[1] * fTemp77 - fTemp76 * dsp->fRec56[1];
			float fTemp78 = 5.6689343e-05f * fTemp74 * (dsp->fRec56[0] + 1.0f);
			float fTemp79 = fTemp78 + 8.500005f;
			float fTemp80 = floorf(fTemp79);
			float fTemp81 = fTemp78 + (7.0f - fTemp80);
			float fTemp82 = fTemp78 + (8.0f - fTemp80);
			int iTemp83 = (int)(fTemp79);
			float fTemp84 = fTemp78 + (9.0f - fTemp80);
			float fTemp85 = fTemp78 + (1e+01f - fTemp80);
			float fTemp86 = fTemp85 * fTemp84;
			float fTemp87 = fTemp86 * fTemp82;
			float fTemp88 = (fTemp78 + (6.0f - fTemp80)) * (fTemp81 * (fTemp82 * (0.041666668f * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp83)) + 1)) & 1023] * fTemp84 - 0.16666667f * fTemp85 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp83 + 1)) + 1)) & 1023]) + 0.25f * fTemp86 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp83 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp87 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp83 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp87 * fTemp81 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp83 + 4)) + 1)) & 1023];
			dsp->fVec7[dsp->IOTA0 & 131071] = fTemp88;
			dsp->fRec62[0] = fSlow9 + dsp->fConst2 * dsp->fRec62[1];
			float fTemp89 = floorf(fminf(65533.0f, dsp->fConst0 * dsp->fRec62[0]));
			float fTemp90 = ((dsp->fRec58[1] != 0.0f) ? (((dsp->fRec59[1] > 0.0f) & (dsp->fRec59[1] < 1.0f)) ? dsp->fRec58[1] : 0.0f) : (((dsp->fRec59[1] == 0.0f) & (fTemp89 != dsp->fRec60[1])) ? 4.5351473e-05f : (((dsp->fRec59[1] == 1.0f) & (fTemp89 != dsp->fRec61[1])) ? -4.5351473e-05f : 0.0f)));
			dsp->fRec58[0] = fTemp90;
			dsp->fRec59[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec59[1] + fTemp90));
			dsp->fRec60[0] = (((dsp->fRec59[1] >= 1.0f) & (dsp->fRec61[1] != fTemp89)) ? fTemp89 : dsp->fRec60[1]);
			dsp->fRec61[0] = (((dsp->fRec59[1] <= 0.0f) & (dsp->fRec60[1] != fTemp89)) ? fTemp89 : dsp->fRec61[1]);
			int iTemp91 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec60[0])));
			float fTemp92 = dsp->fVec7[(dsp->IOTA0 - iTemp91) & 131071];
			int iTemp93 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec61[0])));
			dsp->fRec64[0] = fSlow10 + dsp->fConst2 * dsp->fRec64[1];
			float fTemp94 = fTemp71 + fTemp70 + dsp->fRec64[0] * dsp->fRec63[1] + fTemp57;
			dsp->fVec8[dsp->IOTA0 & 131071] = fTemp94;
			dsp->fRec69[0] = fSlow11 + dsp->fConst2 * dsp->fRec69[1];
			float fTemp95 = ((dsp->fRec65[1] != 0.0f) ? (((dsp->fRec66[1] > 0.0f) & (dsp->fRec66[1] < 1.0f)) ? dsp->fRec65[1] : 0.0f) : (((dsp->fRec66[1] == 0.0f) & (dsp->fRec69[0] != dsp->fRec67[1])) ? dsp->fConst19 : (((dsp->fRec66[1] == 1.0f) & (dsp->fRec69[0] != dsp->fRec68[1])) ? -dsp->fConst19 : 0.0f)));
			dsp->fRec65[0] = fTemp95;
			dsp->fRec66[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec66[1] + fTemp95));
			dsp->fRec67[0] = (((dsp->fRec66[1] >= 1.0f) & (dsp->fRec68[1] != dsp->fRec69[0])) ? dsp->fRec69[0] : dsp->fRec67[1]);
			dsp->fRec68[0] = (((dsp->fRec66[1] <= 0.0f) & (dsp->fRec67[1] != dsp->fRec69[0])) ? dsp->fRec69[0] : dsp->fRec68[1]);
			int iTemp96 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec67[0])));
			float fTemp97 = dsp->fVec8[(dsp->IOTA0 - iTemp96) & 131071];
			int iTemp98 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec68[0])));
			dsp->fRec63[0] = fTemp97 + dsp->fRec66[0] * (dsp->fVec8[(dsp->IOTA0 - iTemp98) & 131071] - fTemp97);
			float fTemp99 = dsp->fRec50[0] * dsp->fRec63[0];
			float fTemp100 = fTemp72 + 0.5f * fTemp73 * (fTemp92 + dsp->fRec59[0] * (dsp->fVec7[(dsp->IOTA0 - iTemp93) & 131071] - fTemp92)) + fTemp99;
			float fTemp101 = fTemp10 * fTemp100 - fTemp21 * dsp->fRec36[1];
			float fTemp102 = fTemp10 * fTemp101 - fTemp21 * dsp->fRec40[1];
			float fTemp103 = fTemp10 * fTemp102 - fTemp21 * dsp->fRec44[1];
			dsp->fVec9[dsp->IOTA0 & 16383] = fTemp21 * dsp->fRec48[1] - fTemp10 * fTemp103;
			int iTemp104 = itbl0MasterFXSIG0[max(0, min((int)(49.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec70[0] = 0.9999f * (dsp->fRec70[1] + (float)(iTemp2 * iTemp104)) + 0.0001f * (float)(iTemp104);
			float fTemp105 = dsp->fRec70[0] + -1.49999f;
			float fTemp106 = dsp->fVec9[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp105)))) & 16383];
			dsp->fVec10[0] = fTemp106;
			float fTemp107 = floorf(fTemp105);
			dsp->fRec49[0] = dsp->fVec10[1] - (fTemp107 + (2.0f - dsp->fRec70[0])) * (dsp->fRec49[1] - fTemp106) / (dsp->fRec70[0] - fTemp107);
			dsp->fRec47[0] = dsp->fRec49[0];
			float fTemp108 = (float)(input0[i0]);
			dsp->fVec11[dsp->IOTA0 & 2047] = fTemp108;
			float fTemp109 = fSlow4 * fTemp108;
			dsp->fRec73[0] = dsp->fConst20 + (dsp->fRec73[1] - floorf(dsp->fConst20 + dsp->fRec73[1]));
			float fTemp110 = dsp->fConst7 * (1.225f * sinf(6.2831855f * (dsp->fRec73[0] - floorf(dsp->fRec73[0]))) + 3.5f);
			int iTemp111 = (int)(fTemp110);
			float fTemp112 = floorf(fTemp110);
			dsp->fRec72[0] = dsp->fVec11[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp111))))) & 2047] * (fTemp112 + (1.0f - fTemp110)) + (fTemp110 - fTemp112) * dsp->fVec11[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp111 + 1))))) & 2047] - dsp->fConst5 * (dsp->fConst9 * dsp->fRec72[2] + dsp->fConst10 * dsp->fRec72[1]);
			float fTemp113 = fTemp108 + dsp->fConst5 * (dsp->fRec72[2] + dsp->fRec72[0] + 2.0f * dsp->fRec72[1]);
			dsp->fVec12[dsp->IOTA0 & 2047] = fTemp113;
			dsp->fRec75[0] = dsp->fConst21 + (dsp->fRec75[1] - floorf(dsp->fConst21 + dsp->fRec75[1]));
			float fTemp114 = dsp->fConst7 * (2.7f * sinf(6.2831855f * (dsp->fRec75[0] - floorf(dsp->fRec75[0]))) + 6.0f);
			int iTemp115 = (int)(fTemp114);
			int iTemp116 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp115))));
			float fTemp117 = floorf(fTemp114);
			float fTemp118 = fTemp117 + (1.0f - fTemp114);
			float fTemp119 = fTemp114 - fTemp117;
			int iTemp120 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp115 + 1))));
			dsp->fRec74[0] = dsp->fVec11[(dsp->IOTA0 - iTemp116) & 2047] * fTemp118 + fTemp119 * dsp->fVec11[(dsp->IOTA0 - iTemp120) & 2047] - dsp->fConst14 * (dsp->fConst15 * dsp->fRec74[2] + dsp->fConst16 * dsp->fRec74[1]);
			float fTemp121 = 0.5011872f * (fSlow5 * fTemp113 + fSlow6 * (fTemp108 + dsp->fConst14 * (dsp->fRec74[2] + dsp->fRec74[0] + 2.0f * dsp->fRec74[1])));
			dsp->fRec76[0] = 0.5011872f * (fTemp118 * dsp->fVec12[(dsp->IOTA0 - iTemp116) & 2047] + fTemp119 * dsp->fVec12[(dsp->IOTA0 - iTemp120) & 2047]) - dsp->fConst14 * (dsp->fConst15 * dsp->fRec76[2] + dsp->fConst16 * dsp->fRec76[1]);
			float fTemp122 = fSlow7 * (0.25118864f * fTemp113 + dsp->fConst17 * (dsp->fRec76[2] + dsp->fRec76[0] + 2.0f * dsp->fRec76[1]));
			float fTemp123 = fTemp55 * (fTemp109 + fTemp121 + fTemp122);
			float fTemp124 = fTemp122 + fTemp121 + dsp->fRec64[0] * dsp->fRec77[1] + fTemp109;
			dsp->fVec13[dsp->IOTA0 & 131071] = fTemp124;
			float fTemp125 = dsp->fVec13[(dsp->IOTA0 - iTemp96) & 131071];
			dsp->fRec77[0] = fTemp125 + dsp->fRec66[0] * (dsp->fVec13[(dsp->IOTA0 - iTemp98) & 131071] - fTemp125);
			float fTemp126 = dsp->fRec77[0] * dsp->fRec50[0];
			float fTemp127 = 5.6689343e-05f * fTemp74 * (dsp->fRec57[0] + 1.0f);
			float fTemp128 = fTemp127 + 8.500005f;
			float fTemp129 = floorf(fTemp128);
			float fTemp130 = fTemp127 + (7.0f - fTemp129);
			float fTemp131 = fTemp127 + (8.0f - fTemp129);
			int iTemp132 = (int)(fTemp128);
			float fTemp133 = fTemp127 + (9.0f - fTemp129);
			float fTemp134 = fTemp127 + (1e+01f - fTemp129);
			float fTemp135 = fTemp134 * fTemp133;
			float fTemp136 = fTemp135 * fTemp131;
			float fTemp137 = (fTemp127 + (6.0f - fTemp129)) * (fTemp130 * (fTemp131 * (0.041666668f * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp132)) + 1)) & 1023] * fTemp133 - 0.16666667f * fTemp134 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp132 + 1)) + 1)) & 1023]) + 0.25f * fTemp135 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp132 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp136 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp132 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp136 * fTemp130 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp132 + 4)) + 1)) & 1023];
			dsp->fVec14[dsp->IOTA0 & 131071] = fTemp137;
			float fTemp138 = dsp->fVec14[(dsp->IOTA0 - iTemp91) & 131071];
			float fTemp139 = fTemp123 + fTemp126 + 0.5f * (fTemp138 + dsp->fRec59[0] * (dsp->fVec14[(dsp->IOTA0 - iTemp93) & 131071] - fTemp138)) * fTemp73;
			float fTemp140 = fTemp139 * fTemp10 - fTemp21 * dsp->fRec35[1];
			float fTemp141 = fTemp10 * fTemp140 - fTemp21 * dsp->fRec39[1];
			float fTemp142 = fTemp10 * fTemp141 - fTemp21 * dsp->fRec43[1];
			dsp->fVec15[dsp->IOTA0 & 16383] = fTemp10 * fTemp142 - fTemp21 * dsp->fRec47[1];
			int iTemp143 = itbl0MasterFXSIG0[max(0, min((int)(59.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec78[0] = 0.9999f * (dsp->fRec78[1] + (float)(iTemp2 * iTemp143)) + 0.0001f * (float)(iTemp143);
			float fTemp144 = dsp->fRec78[0] + -1.49999f;
			float fTemp145 = dsp->fVec15[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp144)))) & 16383];
			dsp->fVec16[0] = fTemp145;
			float fTemp146 = floorf(fTemp144);
			dsp->fRec71[0] = dsp->fVec16[1] - (fTemp146 + (2.0f - dsp->fRec78[0])) * (dsp->fRec71[1] - fTemp145) / (dsp->fRec78[0] - fTemp146);
			dsp->fRec48[0] = dsp->fRec71[0];
			dsp->fVec17[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec48[1] + fTemp21 * fTemp103;
			float fTemp147 = dsp->fVec17[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp51)))) & 16383];
			dsp->fVec18[0] = fTemp147;
			dsp->fRec45[0] = -(dsp->fRec45[1] * fTemp53 / fTemp54 + fTemp53 * fTemp147 / fTemp54 + dsp->fVec18[1]);
			dsp->fRec43[0] = dsp->fRec45[0];
			dsp->fVec19[dsp->IOTA0 & 16383] = dsp->fRec47[1] * fTemp10 + fTemp21 * fTemp142;
			int iTemp148 = itbl0MasterFXSIG0[max(0, min((int)(46.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec80[0] = 0.9999f * (dsp->fRec80[1] + (float)(iTemp2 * iTemp148)) + 0.0001f * (float)(iTemp148);
			float fTemp149 = dsp->fRec80[0] + -1.49999f;
			float fTemp150 = dsp->fVec19[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp149)))) & 16383];
			dsp->fVec20[0] = fTemp150;
			float fTemp151 = floorf(fTemp149);
			dsp->fRec79[0] = dsp->fVec20[1] - (fTemp151 + (2.0f - dsp->fRec80[0])) * (dsp->fRec79[1] - fTemp150) / (dsp->fRec80[0] - fTemp151);
			dsp->fRec44[0] = dsp->fRec79[0];
			dsp->fVec21[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec44[1] + fTemp21 * fTemp102;
			float fTemp152 = dsp->fVec21[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp46)))) & 16383];
			dsp->fVec22[0] = fTemp152;
			dsp->fRec41[0] = -(dsp->fRec41[1] * fTemp48 / fTemp49 + fTemp48 * fTemp152 / fTemp49 + dsp->fVec22[1]);
			dsp->fRec39[0] = dsp->fRec41[0];
			dsp->fVec23[dsp->IOTA0 & 16383] = dsp->fRec43[1] * fTemp10 + fTemp21 * fTemp141;
			int iTemp153 = itbl0MasterFXSIG0[max(0, min((int)(33.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec82[0] = 0.9999f * (dsp->fRec82[1] + (float)(iTemp2 * iTemp153)) + 0.0001f * (float)(iTemp153);
			float fTemp154 = dsp->fRec82[0] + -1.49999f;
			float fTemp155 = dsp->fVec23[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp154)))) & 16383];
			dsp->fVec24[0] = fTemp155;
			float fTemp156 = floorf(fTemp154);
			dsp->fRec81[0] = dsp->fVec24[1] - (fTemp156 + (2.0f - dsp->fRec82[0])) * (dsp->fRec81[1] - fTemp155) / (dsp->fRec82[0] - fTemp156);
			dsp->fRec40[0] = dsp->fRec81[0];
			dsp->fVec25[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec40[1] + fTemp21 * fTemp101;
			float fTemp157 = dsp->fVec25[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp41)))) & 16383];
			dsp->fVec26[0] = fTemp157;
			dsp->fRec37[0] = -(dsp->fRec37[1] * fTemp43 / fTemp44 + fTemp43 * fTemp157 / fTemp44 + dsp->fVec26[1]);
			dsp->fRec35[0] = dsp->fRec37[0];
			dsp->fVec27[dsp->IOTA0 & 16383] = dsp->fRec39[1] * fTemp10 + fTemp21 * fTemp140;
			int iTemp158 = itbl0MasterFXSIG0[max(0, min((int)(2e+01f * dsp->fRec8[0]), 1301))];
			dsp->fRec84[0] = 0.9999f * (dsp->fRec84[1] + (float)(iTemp2 * iTemp158)) + 0.0001f * (float)(iTemp158);
			float fTemp159 = dsp->fRec84[0] + -1.49999f;
			float fTemp160 = dsp->fVec27[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp159)))) & 16383];
			dsp->fVec28[0] = fTemp160;
			float fTemp161 = floorf(fTemp159);
			dsp->fRec83[0] = dsp->fVec28[1] - (fTemp161 + (2.0f - dsp->fRec84[0])) * (dsp->fRec83[1] - fTemp160) / (dsp->fRec84[0] - fTemp161);
			dsp->fRec36[0] = dsp->fRec83[0];
			float fTemp162 = fTemp10 * dsp->fRec36[1] + fTemp21 * fTemp100;
			float fTemp163 = fTemp23 * fTemp162 - fTemp39 * dsp->fRec21[1];
			float fTemp164 = fTemp23 * fTemp163 - fTemp39 * dsp->fRec25[1];
			float fTemp165 = fTemp23 * fTemp164 - fTemp39 * dsp->fRec29[1];
			dsp->fVec29[dsp->IOTA0 & 16383] = fTemp39 * dsp->fRec33[1] - fTemp23 * fTemp165;
			int iTemp166 = itbl0MasterFXSIG0[max(0, min((int)(68.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec85[0] = 0.9999f * (dsp->fRec85[1] + (float)(iTemp2 * iTemp166)) + 0.0001f * (float)(iTemp166);
			float fTemp167 = dsp->fRec85[0] + -1.49999f;
			float fTemp168 = dsp->fVec29[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp167)))) & 16383];
			dsp->fVec30[0] = fTemp168;
			float fTemp169 = floorf(fTemp167);
			dsp->fRec34[0] = dsp->fVec30[1] - (fTemp169 + (2.0f - dsp->fRec85[0])) * (dsp->fRec34[1] - fTemp168) / (dsp->fRec85[0] - fTemp169);
			dsp->fRec32[0] = dsp->fRec34[0];
			float fTemp170 = dsp->fRec35[1] * fTemp10 + fTemp21 * fTemp139;
			float fTemp171 = fTemp170 * fTemp23 - fTemp39 * dsp->fRec20[1];
			float fTemp172 = fTemp23 * fTemp171 - fTemp39 * dsp->fRec24[1];
			float fTemp173 = fTemp23 * fTemp172 - fTemp39 * dsp->fRec28[1];
			dsp->fVec31[dsp->IOTA0 & 16383] = fTemp23 * fTemp173 - dsp->fRec32[1] * fTemp39;
			int iTemp174 = itbl0MasterFXSIG0[max(0, min((int)(78.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec87[0] = 0.9999f * (dsp->fRec87[1] + (float)(iTemp2 * iTemp174)) + 0.0001f * (float)(iTemp174);
			float fTemp175 = dsp->fRec87[0] + -1.49999f;
			float fTemp176 = dsp->fVec31[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp175)))) & 16383];
			dsp->fVec32[0] = fTemp176;
			float fTemp177 = floorf(fTemp175);
			dsp->fRec86[0] = dsp->fVec32[1] - (fTemp177 + (2.0f - dsp->fRec87[0])) * (dsp->fRec86[1] - fTemp176) / (dsp->fRec87[0] - fTemp177);
			dsp->fRec33[0] = dsp->fRec86[0];
			dsp->fVec33[dsp->IOTA0 & 16383] = fTemp23 * dsp->fRec33[1] + fTemp39 * fTemp165;
			float fTemp178 = dsp->fVec33[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp35)))) & 16383];
			dsp->fVec34[0] = fTemp178;
			dsp->fRec30[0] = -(dsp->fRec30[1] * fTemp37 / fTemp38 + fTemp37 * fTemp178 / fTemp38 + dsp->fVec34[1]);
			dsp->fRec28[0] = dsp->fRec30[0];
			dsp->fVec35[dsp->IOTA0 & 16383] = dsp->fRec32[1] * fTemp23 + fTemp39 * fTemp173;
			int iTemp179 = itbl0MasterFXSIG0[max(0, min((int)(65.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec89[0] = 0.9999f * (dsp->fRec89[1] + (float)(iTemp2 * iTemp179)) + 0.0001f * (float)(iTemp179);
			float fTemp180 = dsp->fRec89[0] + -1.49999f;
			float fTemp181 = dsp->fVec35[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp180)))) & 16383];
			dsp->fVec36[0] = fTemp181;
			float fTemp182 = floorf(fTemp180);
			dsp->fRec88[0] = dsp->fVec36[1] - (fTemp182 + (2.0f - dsp->fRec89[0])) * (dsp->fRec88[1] - fTemp181) / (dsp->fRec89[0] - fTemp182);
			dsp->fRec29[0] = dsp->fRec88[0];
			dsp->fVec37[dsp->IOTA0 & 16383] = fTemp23 * dsp->fRec29[1] + fTemp39 * fTemp164;
			float fTemp183 = dsp->fVec37[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp30)))) & 16383];
			dsp->fVec38[0] = fTemp183;
			dsp->fRec26[0] = -(dsp->fRec26[1] * fTemp32 / fTemp33 + fTemp32 * fTemp183 / fTemp33 + dsp->fVec38[1]);
			dsp->fRec24[0] = dsp->fRec26[0];
			dsp->fVec39[dsp->IOTA0 & 16383] = dsp->fRec28[1] * fTemp23 + fTemp39 * fTemp172;
			int iTemp184 = itbl0MasterFXSIG0[max(0, min((int)(52.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec91[0] = 0.9999f * (dsp->fRec91[1] + (float)(iTemp2 * iTemp184)) + 0.0001f * (float)(iTemp184);
			float fTemp185 = dsp->fRec91[0] + -1.49999f;
			float fTemp186 = dsp->fVec39[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp185)))) & 16383];
			dsp->fVec40[0] = fTemp186;
			float fTemp187 = floorf(fTemp185);
			dsp->fRec90[0] = dsp->fVec40[1] - (fTemp187 + (2.0f - dsp->fRec91[0])) * (dsp->fRec90[1] - fTemp186) / (dsp->fRec91[0] - fTemp187);
			dsp->fRec25[0] = dsp->fRec90[0];
			dsp->fVec41[dsp->IOTA0 & 16383] = fTemp23 * dsp->fRec25[1] + fTemp39 * fTemp163;
			float fTemp188 = dsp->fVec41[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp25)))) & 16383];
			dsp->fVec42[0] = fTemp188;
			dsp->fRec22[0] = -(dsp->fRec22[1] * fTemp27 / fTemp28 + fTemp27 * fTemp188 / fTemp28 + dsp->fVec42[1]);
			dsp->fRec20[0] = dsp->fRec22[0];
			dsp->fVec43[dsp->IOTA0 & 16383] = dsp->fRec24[1] * fTemp23 + fTemp39 * fTemp171;
			int iTemp189 = itbl0MasterFXSIG0[max(0, min((int)(39.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec93[0] = 0.9999f * (dsp->fRec93[1] + (float)(iTemp2 * iTemp189)) + 0.0001f * (float)(iTemp189);
			float fTemp190 = dsp->fRec93[0] + -1.49999f;
			float fTemp191 = dsp->fVec43[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp190)))) & 16383];
			dsp->fVec44[0] = fTemp191;
			float fTemp192 = floorf(fTemp190);
			dsp->fRec92[0] = dsp->fVec44[1] - (fTemp192 + (2.0f - dsp->fRec93[0])) * (dsp->fRec92[1] - fTemp191) / (dsp->fRec93[0] - fTemp192);
			dsp->fRec21[0] = dsp->fRec92[0];
			float fTemp193 = fTemp23 * dsp->fRec21[1] + fTemp39 * fTemp162;
			float fTemp194 = fTemp10 * fTemp193 - fTemp21 * dsp->fRec5[1];
			float fTemp195 = fTemp10 * fTemp194 - fTemp21 * dsp->fRec10[1];
			float fTemp196 = fTemp10 * fTemp195 - fTemp21 * dsp->fRec14[1];
			dsp->fVec45[dsp->IOTA0 & 16383] = fTemp21 * dsp->fRec18[1] - fTemp10 * fTemp196;
			int iTemp197 = itbl0MasterFXSIG0[max(0, min((int)(87.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec94[0] = 0.9999f * (dsp->fRec94[1] + (float)(iTemp2 * iTemp197)) + 0.0001f * (float)(iTemp197);
			float fTemp198 = dsp->fRec94[0] + -1.49999f;
			float fTemp199 = dsp->fVec45[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp198)))) & 16383];
			dsp->fVec46[0] = fTemp199;
			float fTemp200 = floorf(fTemp198);
			dsp->fRec19[0] = dsp->fVec46[1] - (fTemp200 + (2.0f - dsp->fRec94[0])) * (dsp->fRec19[1] - fTemp199) / (dsp->fRec94[0] - fTemp200);
			dsp->fRec17[0] = dsp->fRec19[0];
			float fTemp201 = dsp->fRec20[1] * fTemp23 + fTemp39 * fTemp170;
			float fTemp202 = fTemp10 * fTemp201 - fTemp21 * dsp->fRec4[1];
			float fTemp203 = fTemp10 * fTemp202 - fTemp21 * dsp->fRec9[1];
			float fTemp204 = fTemp10 * fTemp203 - fTemp21 * dsp->fRec13[1];
			dsp->fVec47[dsp->IOTA0 & 16383] = fTemp10 * fTemp204 - dsp->fRec17[1] * fTemp21;
			int iTemp205 = itbl0MasterFXSIG0[max(0, min((int)(97.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec96[0] = 0.9999f * (dsp->fRec96[1] + (float)(iTemp2 * iTemp205)) + 0.0001f * (float)(iTemp205);
			float fTemp206 = dsp->fRec96[0] + -1.49999f;
			float fTemp207 = dsp->fVec47[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp206)))) & 16383];
			dsp->fVec48[0] = fTemp207;
			float fTemp208 = floorf(fTemp206);
			dsp->fRec95[0] = dsp->fVec48[1] - (fTemp208 + (2.0f - dsp->fRec96[0])) * (dsp->fRec95[1] - fTemp207) / (dsp->fRec96[0] - fTemp208);
			dsp->fRec18[0] = dsp->fRec95[0];
			dsp->fVec49[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec18[1] + fTemp21 * fTemp196;
			float fTemp209 = dsp->fVec49[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp17)))) & 16383];
			dsp->fVec50[0] = fTemp209;
			dsp->fRec15[0] = -(dsp->fRec15[1] * fTemp19 / fTemp20 + fTemp19 * fTemp209 / fTemp20 + dsp->fVec50[1]);
			dsp->fRec13[0] = dsp->fRec15[0];
			dsp->fVec51[dsp->IOTA0 & 16383] = dsp->fRec17[1] * fTemp10 + fTemp21 * fTemp204;
			int iTemp210 = itbl0MasterFXSIG0[max(0, min((int)(84.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec98[0] = 0.9999f * (dsp->fRec98[1] + (float)(iTemp2 * iTemp210)) + 0.0001f * (float)(iTemp210);
			float fTemp211 = dsp->fRec98[0] + -1.49999f;
			float fTemp212 = dsp->fVec51[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp211)))) & 16383];
			dsp->fVec52[0] = fTemp212;
			float fTemp213 = floorf(fTemp211);
			dsp->fRec97[0] = dsp->fVec52[1] - (fTemp213 + (2.0f - dsp->fRec98[0])) * (dsp->fRec97[1] - fTemp212) / (dsp->fRec98[0] - fTemp213);
			dsp->fRec14[0] = dsp->fRec97[0];
			dsp->fVec53[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec14[1] + fTemp21 * fTemp195;
			float fTemp214 = dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp12)))) & 16383];
			dsp->fVec54[0] = fTemp214;
			dsp->fRec11[0] = -(dsp->fRec11[1] * fTemp14 / fTemp15 + fTemp14 * fTemp214 / fTemp15 + dsp->fVec54[1]);
			dsp->fRec9[0] = dsp->fRec11[0];
			dsp->fVec55[dsp->IOTA0 & 16383] = dsp->fRec13[1] * fTemp10 + fTemp21 * fTemp203;
			int iTemp215 = itbl0MasterFXSIG0[max(0, min((int)(71.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec100[0] = 0.9999f * (dsp->fRec100[1] + (float)(iTemp2 * iTemp215)) + 0.0001f * (float)(iTemp215);
			float fTemp216 = dsp->fRec100[0] + -1.49999f;
			float fTemp217 = dsp->fVec55[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp216)))) & 16383];
			dsp->fVec56[0] = fTemp217;
			float fTemp218 = floorf(fTemp216);
			dsp->fRec99[0] = dsp->fVec56[1] - (fTemp218 + (2.0f - dsp->fRec100[0])) * (dsp->fRec99[1] - fTemp217) / (dsp->fRec100[0] - fTemp218);
			dsp->fRec10[0] = dsp->fRec99[0];
			dsp->fVec57[dsp->IOTA0 & 16383] = fTemp10 * dsp->fRec10[1] + fTemp21 * fTemp194;
			float fTemp219 = dsp->fVec57[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp4)))) & 16383];
			dsp->fVec58[0] = fTemp219;
			dsp->fRec6[0] = -(dsp->fRec6[1] * fTemp6 / fTemp7 + fTemp6 * fTemp219 / fTemp7 + dsp->fVec58[1]);
			dsp->fRec4[0] = dsp->fRec6[0];
			dsp->fVec59[dsp->IOTA0 & 16383] = dsp->fRec9[1] * fTemp10 + fTemp21 * fTemp202;
			int iTemp220 = itbl0MasterFXSIG0[max(0, min((int)(58.0f * dsp->fRec8[0]), 1301))];
			dsp->fRec102[0] = 0.9999f * (dsp->fRec102[1] + (float)(iTemp2 * iTemp220)) + 0.0001f * (float)(iTemp220);
			float fTemp221 = dsp->fRec102[0] + -1.49999f;
			float fTemp222 = dsp->fVec59[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp221)))) & 16383];
			dsp->fVec60[0] = fTemp222;
			float fTemp223 = floorf(fTemp221);
			dsp->fRec101[0] = dsp->fVec60[1] - (fTemp223 + (2.0f - dsp->fRec102[0])) * (dsp->fRec101[1] - fTemp222) / (dsp->fRec102[0] - fTemp223);
			dsp->fRec5[0] = dsp->fRec101[0];
			dsp->fRec3[0] = fTemp1 * (dsp->fRec4[1] * fTemp10 + fTemp21 * fTemp201) + 0.5f * fTemp0 * dsp->fRec3[1];
			dsp->fRec1[dsp->IOTA0 & 1023] = dsp->fRec3[0];
			dsp->fRec103[0] = fTemp1 * (fTemp10 * dsp->fRec5[1] + fTemp21 * fTemp193) + 0.5f * fTemp0 * dsp->fRec103[1];
			dsp->fRec2[dsp->IOTA0 & 1023] = dsp->fRec103[0];
			dsp->fRec104[0] = fSlow12 + dsp->fConst2 * dsp->fRec104[1];
			float fTemp224 = 1.0f - dsp->fRec104[0];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (dsp->fRec1[dsp->IOTA0 & 1023] * dsp->fRec104[0] + fTemp224 * (fTemp126 + fTemp123)));
			output1[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (dsp->fRec104[0] * dsp->fRec2[dsp->IOTA0 & 1023] + fTemp224 * (fTemp99 + fTemp72)));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->iVec5[1] = dsp->iVec5[0];
			dsp->fRec51[2] = dsp->fRec51[1];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec53[2] = dsp->fRec53[1];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fRec54[2] = dsp->fRec54[1];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec72[2] = dsp->fRec72[1];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[2] = dsp->fRec74[1];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec76[2] = dsp->fRec76[1];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fVec46[1] = dsp->fVec46[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fVec48[1] = dsp->fVec48[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fVec50[1] = dsp->fVec50[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fVec52[1] = dsp->fVec52[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fVec54[1] = dsp->fVec54[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fVec56[1] = dsp->fVec56[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec58[1] = dsp->fVec58[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fVec60[1] = dsp->fVec60[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec104[1] = dsp->fRec104[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
