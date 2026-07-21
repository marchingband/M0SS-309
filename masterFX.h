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
	FAUSTFLOAT fHslider1;
	float fVec2[2];
	FAUSTFLOAT fHslider2;
	float fRec7[2];
	float fVec3[2];
	float fRec11[2];
	float fRec15[2];
	float fRec22[2];
	float fRec26[2];
	float fRec30[2];
	float fRec37[2];
	float fRec41[2];
	float fRec45[2];
	FAUSTFLOAT fHslider3;
	float fRec49[2];
	FAUSTFLOAT fHslider4;
	int IOTA0;
	float fVec4[2048];
	float fConst5;
	float fConst6;
	float fConst7;
	float fConst8;
	float fRec51[2];
	float fConst9;
	int iVec5[2];
	float fConst10;
	float fRec50[3];
	float fVec6[2048];
	float fConst14;
	float fConst15;
	float fConst16;
	float fRec52[3];
	float fConst17;
	float fRec53[3];
	FAUSTFLOAT fHslider5;
	float fVec7[2];
	float fConst18;
	float fRec54[2];
	float fRec55[2];
	float fVec8[131072];
	FAUSTFLOAT fHslider6;
	float fRec56[2];
	float fRec57[2];
	float fRec58[2];
	float fRec59[2];
	FAUSTFLOAT fHslider7;
	float fRec61[2];
	float fVec9[131072];
	FAUSTFLOAT fHslider8;
	float fRec66[2];
	float fConst19;
	float fRec62[2];
	float fRec63[2];
	float fRec64[2];
	float fRec65[2];
	float fRec60[2];
	float fVec10[16384];
	float fRec67[2];
	float fVec11[2];
	float fRec48[2];
	float fRec46[2];
	float fVec12[2048];
	float fConst20;
	float fRec70[2];
	float fRec69[3];
	float fVec13[2048];
	float fConst21;
	float fRec72[2];
	float fRec71[3];
	float fRec73[3];
	float fVec14[131072];
	float fRec74[2];
	float fVec15[131072];
	float fVec16[16384];
	float fRec75[2];
	float fVec17[2];
	float fRec68[2];
	float fRec47[2];
	float fVec18[16384];
	float fVec19[2];
	float fRec44[2];
	float fRec42[2];
	float fVec20[16384];
	float fRec77[2];
	float fVec21[2];
	float fRec76[2];
	float fRec43[2];
	float fVec22[16384];
	float fVec23[2];
	float fRec40[2];
	float fRec38[2];
	float fVec24[16384];
	float fRec79[2];
	float fVec25[2];
	float fRec78[2];
	float fRec39[2];
	float fVec26[16384];
	float fVec27[2];
	float fRec36[2];
	float fRec34[2];
	float fVec28[16384];
	float fRec81[2];
	float fVec29[2];
	float fRec80[2];
	float fRec35[2];
	float fVec30[16384];
	float fRec82[2];
	float fVec31[2];
	float fRec33[2];
	float fRec31[2];
	float fVec32[16384];
	float fRec84[2];
	float fVec33[2];
	float fRec83[2];
	float fRec32[2];
	float fVec34[16384];
	float fVec35[2];
	float fRec29[2];
	float fRec27[2];
	float fVec36[16384];
	float fRec86[2];
	float fVec37[2];
	float fRec85[2];
	float fRec28[2];
	float fVec38[16384];
	float fVec39[2];
	float fRec25[2];
	float fRec23[2];
	float fVec40[16384];
	float fRec88[2];
	float fVec41[2];
	float fRec87[2];
	float fRec24[2];
	float fVec42[16384];
	float fVec43[2];
	float fRec21[2];
	float fRec19[2];
	float fVec44[16384];
	float fRec90[2];
	float fVec45[2];
	float fRec89[2];
	float fRec20[2];
	float fVec46[16384];
	float fRec91[2];
	float fVec47[2];
	float fRec18[2];
	float fRec16[2];
	float fVec48[16384];
	float fRec93[2];
	float fVec49[2];
	float fRec92[2];
	float fRec17[2];
	float fVec50[16384];
	float fVec51[2];
	float fRec14[2];
	float fRec12[2];
	float fVec52[16384];
	float fRec95[2];
	float fVec53[2];
	float fRec94[2];
	float fRec13[2];
	float fVec54[16384];
	float fVec55[2];
	float fRec10[2];
	float fRec8[2];
	float fVec56[16384];
	float fRec97[2];
	float fVec57[2];
	float fRec96[2];
	float fRec9[2];
	float fVec58[16384];
	float fVec59[2];
	float fRec6[2];
	float fRec4[2];
	float fVec60[16384];
	float fRec99[2];
	float fVec61[2];
	float fRec98[2];
	float fRec5[2];
	float fRec3[2];
	float fRec1[1024];
	float fRec100[2];
	float fRec2[1024];
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
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
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
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(0.2f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider8 = (FAUSTFLOAT)(1024.0f);
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
			dsp->fRec7[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fVec3[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec11[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec15[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec22[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec26[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec30[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec37[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec41[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec45[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec49[l14] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2048; l15 = l15 + 1) {
			dsp->fVec4[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec51[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->iVec5[l17] = 0;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 3; l18 = l18 + 1) {
			dsp->fRec50[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2048; l19 = l19 + 1) {
			dsp->fVec6[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 3; l20 = l20 + 1) {
			dsp->fRec52[l20] = 0.0f;
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
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fVec7[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec54[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec55[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 131072; l25 = l25 + 1) {
			dsp->fVec8[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec56[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec57[l27] = 0.0f;
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
			dsp->fRec61[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 131072; l31 = l31 + 1) {
			dsp->fVec9[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec66[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec62[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec63[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec64[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec65[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec60[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 16384; l38 = l38 + 1) {
			dsp->fVec10[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec67[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fVec11[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec48[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec46[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2048; l43 = l43 + 1) {
			dsp->fVec12[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec70[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 3; l45 = l45 + 1) {
			dsp->fRec69[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2048; l46 = l46 + 1) {
			dsp->fVec13[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec72[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 3; l48 = l48 + 1) {
			dsp->fRec71[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 3; l49 = l49 + 1) {
			dsp->fRec73[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 131072; l50 = l50 + 1) {
			dsp->fVec14[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec74[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 131072; l52 = l52 + 1) {
			dsp->fVec15[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 16384; l53 = l53 + 1) {
			dsp->fVec16[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec75[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fVec17[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fRec68[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec47[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 16384; l58 = l58 + 1) {
			dsp->fVec18[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fVec19[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec44[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec42[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 16384; l62 = l62 + 1) {
			dsp->fVec20[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec77[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fVec21[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fRec76[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec43[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 16384; l67 = l67 + 1) {
			dsp->fVec22[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fVec23[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec40[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec38[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 16384; l71 = l71 + 1) {
			dsp->fVec24[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec79[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fVec25[l73] = 0.0f;
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
			dsp->fRec39[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 16384; l76 = l76 + 1) {
			dsp->fVec26[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fVec27[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fRec36[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec34[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 16384; l80 = l80 + 1) {
			dsp->fVec28[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec81[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fVec29[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
			dsp->fRec80[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec35[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 16384; l85 = l85 + 1) {
			dsp->fVec30[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec82[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fVec31[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fRec33[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec31[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 16384; l90 = l90 + 1) {
			dsp->fVec32[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec84[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fVec33[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fRec83[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec32[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 16384; l95 = l95 + 1) {
			dsp->fVec34[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fVec35[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec29[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec27[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 16384; l99 = l99 + 1) {
			dsp->fVec36[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec86[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fVec37[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec85[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fRec28[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 16384; l104 = l104 + 1) {
			dsp->fVec38[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fVec39[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 2; l106 = l106 + 1) {
			dsp->fRec25[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec23[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 16384; l108 = l108 + 1) {
			dsp->fVec40[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec88[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 2; l110 = l110 + 1) {
			dsp->fVec41[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 2; l111 = l111 + 1) {
			dsp->fRec87[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fRec24[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 16384; l113 = l113 + 1) {
			dsp->fVec42[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 2; l114 = l114 + 1) {
			dsp->fVec43[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 2; l115 = l115 + 1) {
			dsp->fRec21[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fRec19[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 16384; l117 = l117 + 1) {
			dsp->fVec44[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec90[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 2; l119 = l119 + 1) {
			dsp->fVec45[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 2; l120 = l120 + 1) {
			dsp->fRec89[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 2; l121 = l121 + 1) {
			dsp->fRec20[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 16384; l122 = l122 + 1) {
			dsp->fVec46[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 2; l123 = l123 + 1) {
			dsp->fRec91[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 2; l124 = l124 + 1) {
			dsp->fVec47[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 2; l125 = l125 + 1) {
			dsp->fRec18[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fRec16[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 16384; l127 = l127 + 1) {
			dsp->fVec48[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 2; l128 = l128 + 1) {
			dsp->fRec93[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 2; l129 = l129 + 1) {
			dsp->fVec49[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 2; l130 = l130 + 1) {
			dsp->fRec92[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 2; l131 = l131 + 1) {
			dsp->fRec17[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 16384; l132 = l132 + 1) {
			dsp->fVec50[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 2; l133 = l133 + 1) {
			dsp->fVec51[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 2; l134 = l134 + 1) {
			dsp->fRec14[l134] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; l135 < 2; l135 = l135 + 1) {
			dsp->fRec12[l135] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; l136 < 16384; l136 = l136 + 1) {
			dsp->fVec52[l136] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; l137 < 2; l137 = l137 + 1) {
			dsp->fRec95[l137] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; l138 < 2; l138 = l138 + 1) {
			dsp->fVec53[l138] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; l139 < 2; l139 = l139 + 1) {
			dsp->fRec94[l139] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; l140 < 2; l140 = l140 + 1) {
			dsp->fRec13[l140] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; l141 < 16384; l141 = l141 + 1) {
			dsp->fVec54[l141] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; l142 < 2; l142 = l142 + 1) {
			dsp->fVec55[l142] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; l143 < 2; l143 = l143 + 1) {
			dsp->fRec10[l143] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; l144 < 2; l144 = l144 + 1) {
			dsp->fRec8[l144] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; l145 < 16384; l145 = l145 + 1) {
			dsp->fVec56[l145] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; l146 < 2; l146 = l146 + 1) {
			dsp->fRec97[l146] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; l147 < 2; l147 = l147 + 1) {
			dsp->fVec57[l147] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; l148 < 2; l148 = l148 + 1) {
			dsp->fRec96[l148] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; l149 < 2; l149 = l149 + 1) {
			dsp->fRec9[l149] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; l150 < 16384; l150 = l150 + 1) {
			dsp->fVec58[l150] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; l151 < 2; l151 = l151 + 1) {
			dsp->fVec59[l151] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; l152 < 2; l152 = l152 + 1) {
			dsp->fRec6[l152] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; l153 < 2; l153 = l153 + 1) {
			dsp->fRec4[l153] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; l154 < 16384; l154 = l154 + 1) {
			dsp->fVec60[l154] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; l155 < 2; l155 = l155 + 1) {
			dsp->fRec99[l155] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; l156 < 2; l156 = l156 + 1) {
			dsp->fVec61[l156] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; l157 < 2; l157 = l157 + 1) {
			dsp->fRec98[l157] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; l158 < 2; l158 = l158 + 1) {
			dsp->fRec5[l158] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; l159 < 2; l159 = l159 + 1) {
			dsp->fRec3[l159] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; l160 < 1024; l160 = l160 + 1) {
			dsp->fRec1[l160] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; l161 < 2; l161 = l161 + 1) {
			dsp->fRec100[l161] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; l162 < 1024; l162 = l162 + 1) {
			dsp->fRec2[l162] = 0.0f;
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "alt-sel", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "70");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "chorus-mode", &dsp->fHslider4, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "72");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-fb", &dsp->fHslider7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "alt", "21");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "73");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-mix", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "midi", "71");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-time", &dsp->fHslider8, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)65536.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "alt", "0");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "75");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-feedback", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "alt", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "76");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-mix", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "alt", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "69");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-size", &dsp->fHslider2, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "alt", "18");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "74");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-time", &dsp->fHslider6, (FAUSTFLOAT)0.2f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	float fSlow1 = (float)(dsp->fHslider1);
	float fSlow2 = (float)(dsp->fHslider2);
	int iSlow3 = itbl0MasterFXSIG0[(int)(48.0f * fSlow2)];
	float fSlow4 = 0.0001f * (float)(iSlow3);
	int iSlow5 = itbl0MasterFXSIG0[(int)(61.0f * fSlow2)];
	float fSlow6 = 0.0001f * (float)(iSlow5);
	int iSlow7 = itbl0MasterFXSIG0[(int)(74.0f * fSlow2)];
	float fSlow8 = 0.0001f * (float)(iSlow7);
	int iSlow9 = itbl0MasterFXSIG0[(int)(29.0f * fSlow2)];
	float fSlow10 = 0.0001f * (float)(iSlow9);
	int iSlow11 = itbl0MasterFXSIG0[(int)(42.0f * fSlow2)];
	float fSlow12 = 0.0001f * (float)(iSlow11);
	int iSlow13 = itbl0MasterFXSIG0[(int)(55.0f * fSlow2)];
	float fSlow14 = 0.0001f * (float)(iSlow13);
	int iSlow15 = itbl0MasterFXSIG0[(int)(1e+01f * fSlow2)];
	float fSlow16 = 0.0001f * (float)(iSlow15);
	int iSlow17 = itbl0MasterFXSIG0[(int)(23.0f * fSlow2)];
	float fSlow18 = 0.0001f * (float)(iSlow17);
	int iSlow19 = itbl0MasterFXSIG0[(int)(36.0f * fSlow2)];
	float fSlow20 = 0.0001f * (float)(iSlow19);
	float fSlow21 = dsp->fConst1 * (float)(dsp->fHslider3);
	float fSlow22 = (float)(dsp->fHslider4);
	float fSlow23 = (float)(fSlow22 == 0.0f);
	float fSlow24 = (float)(fSlow22 == 1.0f);
	float fSlow25 = (float)(fSlow22 == 2.0f);
	float fSlow26 = (float)(fSlow22 == 3.0f);
	float fSlow27 = (float)(dsp->fHslider5);
	float fSlow28 = floorf(fminf(65533.0f, dsp->fConst0 * (float)(dsp->fHslider6)));
	float fSlow29 = dsp->fConst1 * (float)(dsp->fHslider7);
	float fSlow30 = dsp->fConst1 * (float)(dsp->fHslider8);
	int iSlow31 = itbl0MasterFXSIG0[(int)(49.0f * fSlow2)];
	float fSlow32 = 0.0001f * (float)(iSlow31);
	int iSlow33 = itbl0MasterFXSIG0[(int)(59.0f * fSlow2)];
	float fSlow34 = 0.0001f * (float)(iSlow33);
	int iSlow35 = itbl0MasterFXSIG0[(int)(46.0f * fSlow2)];
	float fSlow36 = 0.0001f * (float)(iSlow35);
	int iSlow37 = itbl0MasterFXSIG0[(int)(33.0f * fSlow2)];
	float fSlow38 = 0.0001f * (float)(iSlow37);
	int iSlow39 = itbl0MasterFXSIG0[(int)(2e+01f * fSlow2)];
	float fSlow40 = 0.0001f * (float)(iSlow39);
	int iSlow41 = itbl0MasterFXSIG0[(int)(68.0f * fSlow2)];
	float fSlow42 = 0.0001f * (float)(iSlow41);
	int iSlow43 = itbl0MasterFXSIG0[(int)(78.0f * fSlow2)];
	float fSlow44 = 0.0001f * (float)(iSlow43);
	int iSlow45 = itbl0MasterFXSIG0[(int)(65.0f * fSlow2)];
	float fSlow46 = 0.0001f * (float)(iSlow45);
	int iSlow47 = itbl0MasterFXSIG0[(int)(52.0f * fSlow2)];
	float fSlow48 = 0.0001f * (float)(iSlow47);
	int iSlow49 = itbl0MasterFXSIG0[(int)(39.0f * fSlow2)];
	float fSlow50 = 0.0001f * (float)(iSlow49);
	int iSlow51 = itbl0MasterFXSIG0[(int)(87.0f * fSlow2)];
	float fSlow52 = 0.0001f * (float)(iSlow51);
	int iSlow53 = itbl0MasterFXSIG0[(int)(97.0f * fSlow2)];
	float fSlow54 = 0.0001f * (float)(iSlow53);
	int iSlow55 = itbl0MasterFXSIG0[(int)(84.0f * fSlow2)];
	float fSlow56 = 0.0001f * (float)(iSlow55);
	int iSlow57 = itbl0MasterFXSIG0[(int)(71.0f * fSlow2)];
	float fSlow58 = 0.0001f * (float)(iSlow57);
	int iSlow59 = itbl0MasterFXSIG0[(int)(58.0f * fSlow2)];
	float fSlow60 = 0.0001f * (float)(iSlow59);
	float fSlow61 = 1.0f - fSlow1;
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
			dsp->fRec7[0] = 0.9999f * (dsp->fRec7[1] + (float)(iTemp2 * iSlow3)) + fSlow4;
			float fTemp3 = dsp->fRec7[0] + -1.49999f;
			float fTemp4 = floorf(fTemp3);
			float fTemp5 = fTemp4 + (2.0f - dsp->fRec7[0]);
			float fTemp6 = dsp->fRec7[0] - fTemp4;
			dsp->fVec3[0] = 0.6f;
			float fTemp7 = dsp->fVec3[1] + 0.6f;
			float fTemp8 = 0.5f * fTemp7;
			float fTemp9 = cosf(fTemp8);
			dsp->fRec11[0] = 0.9999f * (dsp->fRec11[1] + (float)(iTemp2 * iSlow5)) + fSlow6;
			float fTemp10 = dsp->fRec11[0] + -1.49999f;
			float fTemp11 = floorf(fTemp10);
			float fTemp12 = fTemp11 + (2.0f - dsp->fRec11[0]);
			float fTemp13 = dsp->fRec11[0] - fTemp11;
			dsp->fRec15[0] = 0.9999f * (dsp->fRec15[1] + (float)(iTemp2 * iSlow7)) + fSlow8;
			float fTemp14 = dsp->fRec15[0] + -1.49999f;
			float fTemp15 = floorf(fTemp14);
			float fTemp16 = fTemp15 + (2.0f - dsp->fRec15[0]);
			float fTemp17 = dsp->fRec15[0] - fTemp15;
			float fTemp18 = sinf(fTemp8);
			float fTemp19 = -0.5f * fTemp7;
			float fTemp20 = cosf(fTemp19);
			dsp->fRec22[0] = 0.9999f * (dsp->fRec22[1] + (float)(iTemp2 * iSlow9)) + fSlow10;
			float fTemp21 = dsp->fRec22[0] + -1.49999f;
			float fTemp22 = floorf(fTemp21);
			float fTemp23 = fTemp22 + (2.0f - dsp->fRec22[0]);
			float fTemp24 = dsp->fRec22[0] - fTemp22;
			dsp->fRec26[0] = 0.9999f * (dsp->fRec26[1] + (float)(iTemp2 * iSlow11)) + fSlow12;
			float fTemp25 = dsp->fRec26[0] + -1.49999f;
			float fTemp26 = floorf(fTemp25);
			float fTemp27 = fTemp26 + (2.0f - dsp->fRec26[0]);
			float fTemp28 = dsp->fRec26[0] - fTemp26;
			dsp->fRec30[0] = 0.9999f * (dsp->fRec30[1] + (float)(iTemp2 * iSlow13)) + fSlow14;
			float fTemp29 = dsp->fRec30[0] + -1.49999f;
			float fTemp30 = floorf(fTemp29);
			float fTemp31 = fTemp30 + (2.0f - dsp->fRec30[0]);
			float fTemp32 = dsp->fRec30[0] - fTemp30;
			float fTemp33 = sinf(fTemp19);
			dsp->fRec37[0] = 0.9999f * (dsp->fRec37[1] + (float)(iTemp2 * iSlow15)) + fSlow16;
			float fTemp34 = dsp->fRec37[0] + -1.49999f;
			float fTemp35 = floorf(fTemp34);
			float fTemp36 = fTemp35 + (2.0f - dsp->fRec37[0]);
			float fTemp37 = dsp->fRec37[0] - fTemp35;
			dsp->fRec41[0] = 0.9999f * (dsp->fRec41[1] + (float)(iTemp2 * iSlow17)) + fSlow18;
			float fTemp38 = dsp->fRec41[0] + -1.49999f;
			float fTemp39 = floorf(fTemp38);
			float fTemp40 = fTemp39 + (2.0f - dsp->fRec41[0]);
			float fTemp41 = dsp->fRec41[0] - fTemp39;
			dsp->fRec45[0] = 0.9999f * (dsp->fRec45[1] + (float)(iTemp2 * iSlow19)) + fSlow20;
			float fTemp42 = dsp->fRec45[0] + -1.49999f;
			float fTemp43 = floorf(fTemp42);
			float fTemp44 = fTemp43 + (2.0f - dsp->fRec45[0]);
			float fTemp45 = dsp->fRec45[0] - fTemp43;
			dsp->fRec49[0] = fSlow21 + dsp->fConst2 * dsp->fRec49[1];
			float fTemp46 = 1.0f - dsp->fRec49[0];
			float fTemp47 = (float)(input1[i0]);
			dsp->fVec4[dsp->IOTA0 & 2047] = fTemp47;
			float fTemp48 = fSlow23 * fTemp47;
			dsp->fRec51[0] = dsp->fConst8 + (dsp->fRec51[1] - floorf(dsp->fConst8 + dsp->fRec51[1]));
			float fTemp49 = sinf(6.2831855f * (dsp->fRec51[0] + (14.323945f - floorf(dsp->fRec51[0] + 14.323945f))));
			float fTemp50 = dsp->fConst7 * (1.225f * fTemp49 + 3.5f);
			int iTemp51 = (int)(fTemp50);
			float fTemp52 = floorf(fTemp50);
			dsp->iVec5[0] = 2;
			dsp->fRec50[0] = dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp51))))) & 2047] * (fTemp52 + (1.0f - fTemp50)) + (fTemp50 - fTemp52) * dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp51 + 1))))) & 2047] - dsp->fConst5 * (dsp->fConst9 * dsp->fRec50[2] + dsp->fConst10 * dsp->fRec50[1]);
			float fTemp53 = fTemp47 + dsp->fConst5 * (dsp->fRec50[2] + dsp->fRec50[0] + 2.0f * dsp->fRec50[1]);
			dsp->fVec6[dsp->IOTA0 & 2047] = fTemp53;
			float fTemp54 = dsp->fConst7 * (2.7f * fTemp49 + 6.0f);
			int iTemp55 = (int)(fTemp54);
			int iTemp56 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp55))));
			float fTemp57 = floorf(fTemp54);
			float fTemp58 = fTemp57 + (1.0f - fTemp54);
			float fTemp59 = fTemp54 - fTemp57;
			int iTemp60 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp55 + 1))));
			dsp->fRec52[0] = dsp->fVec4[(dsp->IOTA0 - iTemp56) & 2047] * fTemp58 + fTemp59 * dsp->fVec4[(dsp->IOTA0 - iTemp60) & 2047] - dsp->fConst14 * (dsp->fConst15 * dsp->fRec52[2] + dsp->fConst16 * dsp->fRec52[1]);
			float fTemp61 = 0.5011872f * (fSlow24 * fTemp53 + fSlow25 * (fTemp47 + dsp->fConst14 * (dsp->fRec52[2] + dsp->fRec52[0] + 2.0f * dsp->fRec52[1])));
			dsp->fRec53[0] = 0.5011872f * (fTemp58 * dsp->fVec6[(dsp->IOTA0 - iTemp56) & 2047] + fTemp59 * dsp->fVec6[(dsp->IOTA0 - iTemp60) & 2047]) - dsp->fConst14 * (dsp->fConst15 * dsp->fRec53[2] + dsp->fConst16 * dsp->fRec53[1]);
			float fTemp62 = fSlow26 * (0.25118864f * fTemp53 + dsp->fConst17 * (dsp->fRec53[2] + dsp->fRec53[0] + 2.0f * dsp->fRec53[1]));
			float fTemp63 = fTemp46 * (fTemp48 + fTemp61 + fTemp62);
			dsp->fVec7[0] = fSlow27;
			float fTemp64 = fSlow27 + dsp->fVec7[1];
			float fTemp65 = dsp->fConst0 + dsp->fVec0[1];
			float fTemp66 = dsp->fConst18 * (float)(dsp->iVec5[1] + 2);
			float fTemp67 = sinf(fTemp66);
			float fTemp68 = cosf(fTemp66);
			dsp->fRec54[0] = dsp->fRec55[1] * fTemp67 + dsp->fRec54[1] * fTemp68;
			dsp->fRec55[0] = (float)(iTemp2) + dsp->fRec55[1] * fTemp68 - fTemp67 * dsp->fRec54[1];
			float fTemp69 = 5.6689343e-05f * fTemp65 * (dsp->fRec54[0] + 1.0f);
			float fTemp70 = fTemp69 + 8.500005f;
			float fTemp71 = floorf(fTemp70);
			float fTemp72 = fTemp69 + (7.0f - fTemp71);
			float fTemp73 = fTemp69 + (8.0f - fTemp71);
			int iTemp74 = (int)(fTemp70);
			float fTemp75 = fTemp69 + (9.0f - fTemp71);
			float fTemp76 = fTemp69 + (1e+01f - fTemp71);
			float fTemp77 = fTemp76 * fTemp75;
			float fTemp78 = fTemp77 * fTemp73;
			float fTemp79 = (fTemp69 + (6.0f - fTemp71)) * (fTemp72 * (fTemp73 * (0.041666668f * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp74)) + 1)) & 1023] * fTemp75 - 0.16666667f * fTemp76 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp74 + 1)) + 1)) & 1023]) + 0.25f * fTemp77 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp74 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp78 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp74 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp78 * fTemp72 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp74 + 4)) + 1)) & 1023];
			dsp->fVec8[dsp->IOTA0 & 131071] = fTemp79;
			float fTemp80 = ((dsp->fRec56[1] != 0.0f) ? (((dsp->fRec57[1] > 0.0f) & (dsp->fRec57[1] < 1.0f)) ? dsp->fRec56[1] : 0.0f) : (((dsp->fRec57[1] == 0.0f) & (fSlow28 != dsp->fRec58[1])) ? 4.5351473e-05f : (((dsp->fRec57[1] == 1.0f) & (fSlow28 != dsp->fRec59[1])) ? -4.5351473e-05f : 0.0f)));
			dsp->fRec56[0] = fTemp80;
			dsp->fRec57[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec57[1] + fTemp80));
			dsp->fRec58[0] = (((dsp->fRec57[1] >= 1.0f) & (dsp->fRec59[1] != fSlow28)) ? fSlow28 : dsp->fRec58[1]);
			dsp->fRec59[0] = (((dsp->fRec57[1] <= 0.0f) & (dsp->fRec58[1] != fSlow28)) ? fSlow28 : dsp->fRec59[1]);
			int iTemp81 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec58[0])));
			float fTemp82 = dsp->fVec8[(dsp->IOTA0 - iTemp81) & 131071];
			int iTemp83 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec59[0])));
			dsp->fRec61[0] = fSlow29 + dsp->fConst2 * dsp->fRec61[1];
			float fTemp84 = fTemp62 + fTemp61 + dsp->fRec61[0] * dsp->fRec60[1] + fTemp48;
			dsp->fVec9[dsp->IOTA0 & 131071] = fTemp84;
			dsp->fRec66[0] = fSlow30 + dsp->fConst2 * dsp->fRec66[1];
			float fTemp85 = ((dsp->fRec62[1] != 0.0f) ? (((dsp->fRec63[1] > 0.0f) & (dsp->fRec63[1] < 1.0f)) ? dsp->fRec62[1] : 0.0f) : (((dsp->fRec63[1] == 0.0f) & (dsp->fRec66[0] != dsp->fRec64[1])) ? dsp->fConst19 : (((dsp->fRec63[1] == 1.0f) & (dsp->fRec66[0] != dsp->fRec65[1])) ? -dsp->fConst19 : 0.0f)));
			dsp->fRec62[0] = fTemp85;
			dsp->fRec63[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec63[1] + fTemp85));
			dsp->fRec64[0] = (((dsp->fRec63[1] >= 1.0f) & (dsp->fRec65[1] != dsp->fRec66[0])) ? dsp->fRec66[0] : dsp->fRec64[1]);
			dsp->fRec65[0] = (((dsp->fRec63[1] <= 0.0f) & (dsp->fRec64[1] != dsp->fRec66[0])) ? dsp->fRec66[0] : dsp->fRec65[1]);
			int iTemp86 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec64[0])));
			float fTemp87 = dsp->fVec9[(dsp->IOTA0 - iTemp86) & 131071];
			int iTemp88 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec65[0])));
			dsp->fRec60[0] = fTemp87 + dsp->fRec63[0] * (dsp->fVec9[(dsp->IOTA0 - iTemp88) & 131071] - fTemp87);
			float fTemp89 = dsp->fRec49[0] * dsp->fRec60[0];
			float fTemp90 = fTemp63 + 0.5f * fTemp64 * (fTemp82 + dsp->fRec57[0] * (dsp->fVec8[(dsp->IOTA0 - iTemp83) & 131071] - fTemp82)) + fTemp89;
			float fTemp91 = fTemp9 * fTemp90 - fTemp18 * dsp->fRec35[1];
			float fTemp92 = fTemp9 * fTemp91 - fTemp18 * dsp->fRec39[1];
			float fTemp93 = fTemp9 * fTemp92 - fTemp18 * dsp->fRec43[1];
			dsp->fVec10[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec47[1] - fTemp9 * fTemp93;
			dsp->fRec67[0] = 0.9999f * (dsp->fRec67[1] + (float)(iTemp2 * iSlow31)) + fSlow32;
			float fTemp94 = dsp->fRec67[0] + -1.49999f;
			float fTemp95 = dsp->fVec10[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp94)))) & 16383];
			dsp->fVec11[0] = fTemp95;
			float fTemp96 = floorf(fTemp94);
			dsp->fRec48[0] = dsp->fVec11[1] - (fTemp96 + (2.0f - dsp->fRec67[0])) * (dsp->fRec48[1] - fTemp95) / (dsp->fRec67[0] - fTemp96);
			dsp->fRec46[0] = dsp->fRec48[0];
			float fTemp97 = (float)(input0[i0]);
			dsp->fVec12[dsp->IOTA0 & 2047] = fTemp97;
			float fTemp98 = fSlow23 * fTemp97;
			dsp->fRec70[0] = dsp->fConst20 + (dsp->fRec70[1] - floorf(dsp->fConst20 + dsp->fRec70[1]));
			float fTemp99 = dsp->fConst7 * (1.225f * sinf(6.2831855f * (dsp->fRec70[0] - floorf(dsp->fRec70[0]))) + 3.5f);
			int iTemp100 = (int)(fTemp99);
			float fTemp101 = floorf(fTemp99);
			dsp->fRec69[0] = dsp->fVec12[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp100))))) & 2047] * (fTemp101 + (1.0f - fTemp99)) + (fTemp99 - fTemp101) * dsp->fVec12[(dsp->IOTA0 - (int)(fminf(dsp->fConst6, (float)(max(0, iTemp100 + 1))))) & 2047] - dsp->fConst5 * (dsp->fConst9 * dsp->fRec69[2] + dsp->fConst10 * dsp->fRec69[1]);
			float fTemp102 = fTemp97 + dsp->fConst5 * (dsp->fRec69[2] + dsp->fRec69[0] + 2.0f * dsp->fRec69[1]);
			dsp->fVec13[dsp->IOTA0 & 2047] = fTemp102;
			dsp->fRec72[0] = dsp->fConst21 + (dsp->fRec72[1] - floorf(dsp->fConst21 + dsp->fRec72[1]));
			float fTemp103 = dsp->fConst7 * (2.7f * sinf(6.2831855f * (dsp->fRec72[0] - floorf(dsp->fRec72[0]))) + 6.0f);
			int iTemp104 = (int)(fTemp103);
			int iTemp105 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp104))));
			float fTemp106 = floorf(fTemp103);
			float fTemp107 = fTemp106 + (1.0f - fTemp103);
			float fTemp108 = fTemp103 - fTemp106;
			int iTemp109 = (int)(fminf(dsp->fConst6, (float)(max(0, iTemp104 + 1))));
			dsp->fRec71[0] = dsp->fVec12[(dsp->IOTA0 - iTemp105) & 2047] * fTemp107 + fTemp108 * dsp->fVec12[(dsp->IOTA0 - iTemp109) & 2047] - dsp->fConst14 * (dsp->fConst15 * dsp->fRec71[2] + dsp->fConst16 * dsp->fRec71[1]);
			float fTemp110 = 0.5011872f * (fSlow24 * fTemp102 + fSlow25 * (fTemp97 + dsp->fConst14 * (dsp->fRec71[2] + dsp->fRec71[0] + 2.0f * dsp->fRec71[1])));
			dsp->fRec73[0] = 0.5011872f * (fTemp107 * dsp->fVec13[(dsp->IOTA0 - iTemp105) & 2047] + fTemp108 * dsp->fVec13[(dsp->IOTA0 - iTemp109) & 2047]) - dsp->fConst14 * (dsp->fConst15 * dsp->fRec73[2] + dsp->fConst16 * dsp->fRec73[1]);
			float fTemp111 = fSlow26 * (0.25118864f * fTemp102 + dsp->fConst17 * (dsp->fRec73[2] + dsp->fRec73[0] + 2.0f * dsp->fRec73[1]));
			float fTemp112 = fTemp46 * (fTemp98 + fTemp110 + fTemp111);
			float fTemp113 = fTemp111 + fTemp110 + dsp->fRec61[0] * dsp->fRec74[1] + fTemp98;
			dsp->fVec14[dsp->IOTA0 & 131071] = fTemp113;
			float fTemp114 = dsp->fVec14[(dsp->IOTA0 - iTemp86) & 131071];
			dsp->fRec74[0] = fTemp114 + dsp->fRec63[0] * (dsp->fVec14[(dsp->IOTA0 - iTemp88) & 131071] - fTemp114);
			float fTemp115 = dsp->fRec74[0] * dsp->fRec49[0];
			float fTemp116 = 5.6689343e-05f * fTemp65 * (dsp->fRec55[0] + 1.0f);
			float fTemp117 = fTemp116 + 8.500005f;
			float fTemp118 = floorf(fTemp117);
			float fTemp119 = fTemp116 + (7.0f - fTemp118);
			float fTemp120 = fTemp116 + (8.0f - fTemp118);
			int iTemp121 = (int)(fTemp117);
			float fTemp122 = fTemp116 + (9.0f - fTemp118);
			float fTemp123 = fTemp116 + (1e+01f - fTemp118);
			float fTemp124 = fTemp123 * fTemp122;
			float fTemp125 = fTemp124 * fTemp120;
			float fTemp126 = (fTemp116 + (6.0f - fTemp118)) * (fTemp119 * (fTemp120 * (0.041666668f * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp121)) + 1)) & 1023] * fTemp122 - 0.16666667f * fTemp123 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp121 + 1)) + 1)) & 1023]) + 0.25f * fTemp124 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp121 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp125 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp121 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp125 * fTemp119 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp121 + 4)) + 1)) & 1023];
			dsp->fVec15[dsp->IOTA0 & 131071] = fTemp126;
			float fTemp127 = dsp->fVec15[(dsp->IOTA0 - iTemp81) & 131071];
			float fTemp128 = fTemp112 + fTemp115 + 0.5f * (fTemp127 + dsp->fRec57[0] * (dsp->fVec15[(dsp->IOTA0 - iTemp83) & 131071] - fTemp127)) * fTemp64;
			float fTemp129 = fTemp128 * fTemp9 - fTemp18 * dsp->fRec34[1];
			float fTemp130 = fTemp9 * fTemp129 - fTemp18 * dsp->fRec38[1];
			float fTemp131 = fTemp9 * fTemp130 - fTemp18 * dsp->fRec42[1];
			dsp->fVec16[dsp->IOTA0 & 16383] = fTemp9 * fTemp131 - fTemp18 * dsp->fRec46[1];
			dsp->fRec75[0] = 0.9999f * (dsp->fRec75[1] + (float)(iTemp2 * iSlow33)) + fSlow34;
			float fTemp132 = dsp->fRec75[0] + -1.49999f;
			float fTemp133 = dsp->fVec16[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp132)))) & 16383];
			dsp->fVec17[0] = fTemp133;
			float fTemp134 = floorf(fTemp132);
			dsp->fRec68[0] = dsp->fVec17[1] - (fTemp134 + (2.0f - dsp->fRec75[0])) * (dsp->fRec68[1] - fTemp133) / (dsp->fRec75[0] - fTemp134);
			dsp->fRec47[0] = dsp->fRec68[0];
			dsp->fVec18[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec47[1] + fTemp18 * fTemp93;
			float fTemp135 = dsp->fVec18[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp42)))) & 16383];
			dsp->fVec19[0] = fTemp135;
			dsp->fRec44[0] = -(dsp->fRec44[1] * fTemp44 / fTemp45 + fTemp44 * fTemp135 / fTemp45 + dsp->fVec19[1]);
			dsp->fRec42[0] = dsp->fRec44[0];
			dsp->fVec20[dsp->IOTA0 & 16383] = dsp->fRec46[1] * fTemp9 + fTemp18 * fTemp131;
			dsp->fRec77[0] = 0.9999f * (dsp->fRec77[1] + (float)(iTemp2 * iSlow35)) + fSlow36;
			float fTemp136 = dsp->fRec77[0] + -1.49999f;
			float fTemp137 = dsp->fVec20[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp136)))) & 16383];
			dsp->fVec21[0] = fTemp137;
			float fTemp138 = floorf(fTemp136);
			dsp->fRec76[0] = dsp->fVec21[1] - (fTemp138 + (2.0f - dsp->fRec77[0])) * (dsp->fRec76[1] - fTemp137) / (dsp->fRec77[0] - fTemp138);
			dsp->fRec43[0] = dsp->fRec76[0];
			dsp->fVec22[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec43[1] + fTemp18 * fTemp92;
			float fTemp139 = dsp->fVec22[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp38)))) & 16383];
			dsp->fVec23[0] = fTemp139;
			dsp->fRec40[0] = -(dsp->fRec40[1] * fTemp40 / fTemp41 + fTemp40 * fTemp139 / fTemp41 + dsp->fVec23[1]);
			dsp->fRec38[0] = dsp->fRec40[0];
			dsp->fVec24[dsp->IOTA0 & 16383] = dsp->fRec42[1] * fTemp9 + fTemp18 * fTemp130;
			dsp->fRec79[0] = 0.9999f * (dsp->fRec79[1] + (float)(iTemp2 * iSlow37)) + fSlow38;
			float fTemp140 = dsp->fRec79[0] + -1.49999f;
			float fTemp141 = dsp->fVec24[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp140)))) & 16383];
			dsp->fVec25[0] = fTemp141;
			float fTemp142 = floorf(fTemp140);
			dsp->fRec78[0] = dsp->fVec25[1] - (fTemp142 + (2.0f - dsp->fRec79[0])) * (dsp->fRec78[1] - fTemp141) / (dsp->fRec79[0] - fTemp142);
			dsp->fRec39[0] = dsp->fRec78[0];
			dsp->fVec26[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec39[1] + fTemp18 * fTemp91;
			float fTemp143 = dsp->fVec26[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp34)))) & 16383];
			dsp->fVec27[0] = fTemp143;
			dsp->fRec36[0] = -(dsp->fRec36[1] * fTemp36 / fTemp37 + fTemp36 * fTemp143 / fTemp37 + dsp->fVec27[1]);
			dsp->fRec34[0] = dsp->fRec36[0];
			dsp->fVec28[dsp->IOTA0 & 16383] = dsp->fRec38[1] * fTemp9 + fTemp18 * fTemp129;
			dsp->fRec81[0] = 0.9999f * (dsp->fRec81[1] + (float)(iTemp2 * iSlow39)) + fSlow40;
			float fTemp144 = dsp->fRec81[0] + -1.49999f;
			float fTemp145 = dsp->fVec28[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp144)))) & 16383];
			dsp->fVec29[0] = fTemp145;
			float fTemp146 = floorf(fTemp144);
			dsp->fRec80[0] = dsp->fVec29[1] - (fTemp146 + (2.0f - dsp->fRec81[0])) * (dsp->fRec80[1] - fTemp145) / (dsp->fRec81[0] - fTemp146);
			dsp->fRec35[0] = dsp->fRec80[0];
			float fTemp147 = fTemp9 * dsp->fRec35[1] + fTemp18 * fTemp90;
			float fTemp148 = fTemp20 * fTemp147 - fTemp33 * dsp->fRec20[1];
			float fTemp149 = fTemp20 * fTemp148 - fTemp33 * dsp->fRec24[1];
			float fTemp150 = fTemp20 * fTemp149 - fTemp33 * dsp->fRec28[1];
			dsp->fVec30[dsp->IOTA0 & 16383] = fTemp33 * dsp->fRec32[1] - fTemp20 * fTemp150;
			dsp->fRec82[0] = 0.9999f * (dsp->fRec82[1] + (float)(iTemp2 * iSlow41)) + fSlow42;
			float fTemp151 = dsp->fRec82[0] + -1.49999f;
			float fTemp152 = dsp->fVec30[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp151)))) & 16383];
			dsp->fVec31[0] = fTemp152;
			float fTemp153 = floorf(fTemp151);
			dsp->fRec33[0] = dsp->fVec31[1] - (fTemp153 + (2.0f - dsp->fRec82[0])) * (dsp->fRec33[1] - fTemp152) / (dsp->fRec82[0] - fTemp153);
			dsp->fRec31[0] = dsp->fRec33[0];
			float fTemp154 = dsp->fRec34[1] * fTemp9 + fTemp18 * fTemp128;
			float fTemp155 = fTemp154 * fTemp20 - fTemp33 * dsp->fRec19[1];
			float fTemp156 = fTemp20 * fTemp155 - fTemp33 * dsp->fRec23[1];
			float fTemp157 = fTemp20 * fTemp156 - fTemp33 * dsp->fRec27[1];
			dsp->fVec32[dsp->IOTA0 & 16383] = fTemp20 * fTemp157 - dsp->fRec31[1] * fTemp33;
			dsp->fRec84[0] = 0.9999f * (dsp->fRec84[1] + (float)(iTemp2 * iSlow43)) + fSlow44;
			float fTemp158 = dsp->fRec84[0] + -1.49999f;
			float fTemp159 = dsp->fVec32[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp158)))) & 16383];
			dsp->fVec33[0] = fTemp159;
			float fTemp160 = floorf(fTemp158);
			dsp->fRec83[0] = dsp->fVec33[1] - (fTemp160 + (2.0f - dsp->fRec84[0])) * (dsp->fRec83[1] - fTemp159) / (dsp->fRec84[0] - fTemp160);
			dsp->fRec32[0] = dsp->fRec83[0];
			dsp->fVec34[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec32[1] + fTemp33 * fTemp150;
			float fTemp161 = dsp->fVec34[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp29)))) & 16383];
			dsp->fVec35[0] = fTemp161;
			dsp->fRec29[0] = -(dsp->fRec29[1] * fTemp31 / fTemp32 + fTemp31 * fTemp161 / fTemp32 + dsp->fVec35[1]);
			dsp->fRec27[0] = dsp->fRec29[0];
			dsp->fVec36[dsp->IOTA0 & 16383] = dsp->fRec31[1] * fTemp20 + fTemp33 * fTemp157;
			dsp->fRec86[0] = 0.9999f * (dsp->fRec86[1] + (float)(iTemp2 * iSlow45)) + fSlow46;
			float fTemp162 = dsp->fRec86[0] + -1.49999f;
			float fTemp163 = dsp->fVec36[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp162)))) & 16383];
			dsp->fVec37[0] = fTemp163;
			float fTemp164 = floorf(fTemp162);
			dsp->fRec85[0] = dsp->fVec37[1] - (fTemp164 + (2.0f - dsp->fRec86[0])) * (dsp->fRec85[1] - fTemp163) / (dsp->fRec86[0] - fTemp164);
			dsp->fRec28[0] = dsp->fRec85[0];
			dsp->fVec38[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec28[1] + fTemp33 * fTemp149;
			float fTemp165 = dsp->fVec38[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp25)))) & 16383];
			dsp->fVec39[0] = fTemp165;
			dsp->fRec25[0] = -(dsp->fRec25[1] * fTemp27 / fTemp28 + fTemp27 * fTemp165 / fTemp28 + dsp->fVec39[1]);
			dsp->fRec23[0] = dsp->fRec25[0];
			dsp->fVec40[dsp->IOTA0 & 16383] = dsp->fRec27[1] * fTemp20 + fTemp33 * fTemp156;
			dsp->fRec88[0] = 0.9999f * (dsp->fRec88[1] + (float)(iTemp2 * iSlow47)) + fSlow48;
			float fTemp166 = dsp->fRec88[0] + -1.49999f;
			float fTemp167 = dsp->fVec40[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp166)))) & 16383];
			dsp->fVec41[0] = fTemp167;
			float fTemp168 = floorf(fTemp166);
			dsp->fRec87[0] = dsp->fVec41[1] + (fTemp168 + (2.0f - dsp->fRec88[0])) * (fTemp167 - dsp->fRec87[1]) / (dsp->fRec88[0] - fTemp168);
			dsp->fRec24[0] = dsp->fRec87[0];
			dsp->fVec42[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec24[1] + fTemp33 * fTemp148;
			float fTemp169 = dsp->fVec42[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp21)))) & 16383];
			dsp->fVec43[0] = fTemp169;
			dsp->fRec21[0] = -(dsp->fRec21[1] * fTemp23 / fTemp24 + fTemp23 * fTemp169 / fTemp24 + dsp->fVec43[1]);
			dsp->fRec19[0] = dsp->fRec21[0];
			dsp->fVec44[dsp->IOTA0 & 16383] = dsp->fRec23[1] * fTemp20 + fTemp33 * fTemp155;
			dsp->fRec90[0] = 0.9999f * (dsp->fRec90[1] + (float)(iTemp2 * iSlow49)) + fSlow50;
			float fTemp170 = dsp->fRec90[0] + -1.49999f;
			float fTemp171 = dsp->fVec44[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp170)))) & 16383];
			dsp->fVec45[0] = fTemp171;
			float fTemp172 = floorf(fTemp170);
			dsp->fRec89[0] = dsp->fVec45[1] + (fTemp172 + (2.0f - dsp->fRec90[0])) * (fTemp171 - dsp->fRec89[1]) / (dsp->fRec90[0] - fTemp172);
			dsp->fRec20[0] = dsp->fRec89[0];
			float fTemp173 = fTemp20 * dsp->fRec20[1] + fTemp33 * fTemp147;
			float fTemp174 = fTemp9 * fTemp173 - fTemp18 * dsp->fRec5[1];
			float fTemp175 = fTemp9 * fTemp174 - fTemp18 * dsp->fRec9[1];
			float fTemp176 = fTemp9 * fTemp175 - fTemp18 * dsp->fRec13[1];
			dsp->fVec46[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec17[1] - fTemp9 * fTemp176;
			dsp->fRec91[0] = 0.9999f * (dsp->fRec91[1] + (float)(iTemp2 * iSlow51)) + fSlow52;
			float fTemp177 = dsp->fRec91[0] + -1.49999f;
			float fTemp178 = dsp->fVec46[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp177)))) & 16383];
			dsp->fVec47[0] = fTemp178;
			float fTemp179 = floorf(fTemp177);
			dsp->fRec18[0] = dsp->fVec47[1] + (fTemp179 + (2.0f - dsp->fRec91[0])) * (fTemp178 - dsp->fRec18[1]) / (dsp->fRec91[0] - fTemp179);
			dsp->fRec16[0] = dsp->fRec18[0];
			float fTemp180 = dsp->fRec19[1] * fTemp20 + fTemp33 * fTemp154;
			float fTemp181 = fTemp9 * fTemp180 - fTemp18 * dsp->fRec4[1];
			float fTemp182 = fTemp9 * fTemp181 - fTemp18 * dsp->fRec8[1];
			float fTemp183 = fTemp9 * fTemp182 - fTemp18 * dsp->fRec12[1];
			dsp->fVec48[dsp->IOTA0 & 16383] = fTemp9 * fTemp183 - dsp->fRec16[1] * fTemp18;
			dsp->fRec93[0] = 0.9999f * (dsp->fRec93[1] + (float)(iTemp2 * iSlow53)) + fSlow54;
			float fTemp184 = dsp->fRec93[0] + -1.49999f;
			float fTemp185 = dsp->fVec48[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp184)))) & 16383];
			dsp->fVec49[0] = fTemp185;
			float fTemp186 = floorf(fTemp184);
			dsp->fRec92[0] = dsp->fVec49[1] - (fTemp186 + (2.0f - dsp->fRec93[0])) * (dsp->fRec92[1] - fTemp185) / (dsp->fRec93[0] - fTemp186);
			dsp->fRec17[0] = dsp->fRec92[0];
			dsp->fVec50[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec17[1] + fTemp18 * fTemp176;
			float fTemp187 = dsp->fVec50[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp14)))) & 16383];
			dsp->fVec51[0] = fTemp187;
			dsp->fRec14[0] = -(dsp->fRec14[1] * fTemp16 / fTemp17 + fTemp16 * fTemp187 / fTemp17 + dsp->fVec51[1]);
			dsp->fRec12[0] = dsp->fRec14[0];
			dsp->fVec52[dsp->IOTA0 & 16383] = dsp->fRec16[1] * fTemp9 + fTemp18 * fTemp183;
			dsp->fRec95[0] = 0.9999f * (dsp->fRec95[1] + (float)(iTemp2 * iSlow55)) + fSlow56;
			float fTemp188 = dsp->fRec95[0] + -1.49999f;
			float fTemp189 = dsp->fVec52[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp188)))) & 16383];
			dsp->fVec53[0] = fTemp189;
			float fTemp190 = floorf(fTemp188);
			dsp->fRec94[0] = dsp->fVec53[1] - (fTemp190 + (2.0f - dsp->fRec95[0])) * (dsp->fRec94[1] - fTemp189) / (dsp->fRec95[0] - fTemp190);
			dsp->fRec13[0] = dsp->fRec94[0];
			dsp->fVec54[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec13[1] + fTemp18 * fTemp175;
			float fTemp191 = dsp->fVec54[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp10)))) & 16383];
			dsp->fVec55[0] = fTemp191;
			dsp->fRec10[0] = -(dsp->fRec10[1] * fTemp12 / fTemp13 + fTemp12 * fTemp191 / fTemp13 + dsp->fVec55[1]);
			dsp->fRec8[0] = dsp->fRec10[0];
			dsp->fVec56[dsp->IOTA0 & 16383] = dsp->fRec12[1] * fTemp9 + fTemp18 * fTemp182;
			dsp->fRec97[0] = 0.9999f * (dsp->fRec97[1] + (float)(iTemp2 * iSlow57)) + fSlow58;
			float fTemp192 = dsp->fRec97[0] + -1.49999f;
			float fTemp193 = dsp->fVec56[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp192)))) & 16383];
			dsp->fVec57[0] = fTemp193;
			float fTemp194 = floorf(fTemp192);
			dsp->fRec96[0] = dsp->fVec57[1] - (fTemp194 + (2.0f - dsp->fRec97[0])) * (dsp->fRec96[1] - fTemp193) / (dsp->fRec97[0] - fTemp194);
			dsp->fRec9[0] = dsp->fRec96[0];
			dsp->fVec58[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec9[1] + fTemp18 * fTemp174;
			float fTemp195 = dsp->fVec58[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp3)))) & 16383];
			dsp->fVec59[0] = fTemp195;
			dsp->fRec6[0] = -(dsp->fRec6[1] * fTemp5 / fTemp6 + fTemp5 * fTemp195 / fTemp6 + dsp->fVec59[1]);
			dsp->fRec4[0] = dsp->fRec6[0];
			dsp->fVec60[dsp->IOTA0 & 16383] = dsp->fRec8[1] * fTemp9 + fTemp18 * fTemp181;
			dsp->fRec99[0] = 0.9999f * (dsp->fRec99[1] + (float)(iTemp2 * iSlow59)) + fSlow60;
			float fTemp196 = dsp->fRec99[0] + -1.49999f;
			float fTemp197 = dsp->fVec60[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp196)))) & 16383];
			dsp->fVec61[0] = fTemp197;
			float fTemp198 = floorf(fTemp196);
			dsp->fRec98[0] = dsp->fVec61[1] + (fTemp198 + (2.0f - dsp->fRec99[0])) * (fTemp197 - dsp->fRec98[1]) / (dsp->fRec99[0] - fTemp198);
			dsp->fRec5[0] = dsp->fRec98[0];
			dsp->fRec3[0] = fTemp1 * (dsp->fRec4[1] * fTemp9 + fTemp18 * fTemp180) + 0.5f * fTemp0 * dsp->fRec3[1];
			dsp->fRec1[dsp->IOTA0 & 1023] = dsp->fRec3[0];
			dsp->fRec100[0] = fTemp1 * (fTemp9 * dsp->fRec5[1] + fTemp18 * fTemp173) + 0.5f * fTemp0 * dsp->fRec100[1];
			dsp->fRec2[dsp->IOTA0 & 1023] = dsp->fRec100[0];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fSlow1 * dsp->fRec1[dsp->IOTA0 & 1023] + fSlow61 * (fTemp115 + fTemp112)));
			output1[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fSlow1 * dsp->fRec2[dsp->IOTA0 & 1023] + fSlow61 * (fTemp89 + fTemp63)));
			dsp->fVec0[1] = dsp->fVec0[0];
			dsp->iVec1[1] = dsp->iVec1[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fVec3[1] = dsp->fVec3[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->iVec5[1] = dsp->iVec5[0];
			dsp->fRec50[2] = dsp->fRec50[1];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec52[2] = dsp->fRec52[1];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[2] = dsp->fRec53[1];
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fVec7[1] = dsp->fVec7[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fVec11[1] = dsp->fVec11[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec69[2] = dsp->fRec69[1];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec71[2] = dsp->fRec71[1];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec73[2] = dsp->fRec73[1];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fVec25[1] = dsp->fVec25[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec31[1] = dsp->fVec31[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fVec35[1] = dsp->fVec35[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fVec37[1] = dsp->fVec37[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fVec39[1] = dsp->fVec39[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fVec41[1] = dsp->fVec41[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fVec43[1] = dsp->fVec43[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fVec45[1] = dsp->fVec45[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fVec47[1] = dsp->fVec47[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec49[1] = dsp->fVec49[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fVec51[1] = dsp->fVec51[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fVec53[1] = dsp->fVec53[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec55[1] = dsp->fVec55[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fVec57[1] = dsp->fVec57[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec59[1] = dsp->fVec59[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fVec61[1] = dsp->fVec61[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec100[1] = dsp->fRec100[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
