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
	int iVec0[2];
	int iConst0;
	float fConst1;
	float fRec6[2];
	float fVec1[2];
	int iConst2;
	float fConst3;
	float fRec10[2];
	int iConst4;
	float fConst5;
	float fRec14[2];
	int iConst6;
	float fConst7;
	float fRec21[2];
	int iConst8;
	float fConst9;
	float fRec25[2];
	int iConst10;
	float fConst11;
	float fRec29[2];
	int iConst12;
	float fConst13;
	float fRec36[2];
	int iConst14;
	float fConst15;
	float fRec40[2];
	int iConst16;
	float fConst17;
	float fRec44[2];
	int fSampleRate;
	float fConst18;
	float fVec2[2];
	float fConst19;
	FAUSTFLOAT fHslider0;
	float fConst20;
	float fRec48[2];
	FAUSTFLOAT fHslider1;
	int IOTA0;
	float fVec3[2048];
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fRec50[2];
	float fConst27;
	int iVec4[2];
	float fConst28;
	float fRec49[3];
	float fVec5[2048];
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec51[3];
	float fConst35;
	float fRec52[3];
	FAUSTFLOAT fHslider2;
	float fRec53[2];
	float fConst36;
	float fRec54[2];
	float fRec55[2];
	float fVec6[131072];
	float fConst37;
	float fRec56[2];
	float fRec57[2];
	float fRec58[2];
	float fRec59[2];
	FAUSTFLOAT fHslider3;
	float fRec61[2];
	float fVec7[131072];
	FAUSTFLOAT fHslider4;
	float fRec66[2];
	float fConst38;
	float fRec62[2];
	float fRec63[2];
	float fRec64[2];
	float fRec65[2];
	float fRec60[2];
	float fVec8[16384];
	int iConst39;
	float fConst40;
	float fRec67[2];
	float fVec9[2];
	float fRec47[2];
	float fRec45[2];
	float fVec10[2048];
	float fConst41;
	float fRec70[2];
	float fRec69[3];
	float fVec11[2048];
	float fConst42;
	float fRec72[2];
	float fRec71[3];
	float fRec73[3];
	float fVec12[131072];
	float fRec74[2];
	float fVec13[131072];
	float fVec14[16384];
	int iConst43;
	float fConst44;
	float fRec75[2];
	float fVec15[2];
	float fRec68[2];
	float fRec46[2];
	float fVec16[16384];
	float fVec17[2];
	float fRec43[2];
	float fRec41[2];
	float fVec18[16384];
	int iConst45;
	float fConst46;
	float fRec77[2];
	float fVec19[2];
	float fRec76[2];
	float fRec42[2];
	float fVec20[16384];
	float fVec21[2];
	float fRec39[2];
	float fRec37[2];
	float fVec22[16384];
	int iConst47;
	float fConst48;
	float fRec79[2];
	float fVec23[2];
	float fRec78[2];
	float fRec38[2];
	float fVec24[16384];
	float fVec25[2];
	float fRec35[2];
	float fRec33[2];
	float fVec26[16384];
	int iConst49;
	float fConst50;
	float fRec81[2];
	float fVec27[2];
	float fRec80[2];
	float fRec34[2];
	float fVec28[16384];
	int iConst51;
	float fConst52;
	float fRec82[2];
	float fVec29[2];
	float fRec32[2];
	float fRec30[2];
	float fVec30[16384];
	int iConst53;
	float fConst54;
	float fRec84[2];
	float fVec31[2];
	float fRec83[2];
	float fRec31[2];
	float fVec32[16384];
	float fVec33[2];
	float fRec28[2];
	float fRec26[2];
	float fVec34[16384];
	int iConst55;
	float fConst56;
	float fRec86[2];
	float fVec35[2];
	float fRec85[2];
	float fRec27[2];
	float fVec36[16384];
	float fVec37[2];
	float fRec24[2];
	float fRec22[2];
	float fVec38[16384];
	int iConst57;
	float fConst58;
	float fRec88[2];
	float fVec39[2];
	float fRec87[2];
	float fRec23[2];
	float fVec40[16384];
	float fVec41[2];
	float fRec20[2];
	float fRec18[2];
	float fVec42[16384];
	int iConst59;
	float fConst60;
	float fRec90[2];
	float fVec43[2];
	float fRec89[2];
	float fRec19[2];
	float fVec44[16384];
	int iConst61;
	float fConst62;
	float fRec91[2];
	float fVec45[2];
	float fRec17[2];
	float fRec15[2];
	float fVec46[16384];
	int iConst63;
	float fConst64;
	float fRec93[2];
	float fVec47[2];
	float fRec92[2];
	float fRec16[2];
	float fVec48[16384];
	float fVec49[2];
	float fRec13[2];
	float fRec11[2];
	float fVec50[16384];
	int iConst65;
	float fConst66;
	float fRec95[2];
	float fVec51[2];
	float fRec94[2];
	float fRec12[2];
	float fVec52[16384];
	float fVec53[2];
	float fRec9[2];
	float fRec7[2];
	float fVec54[16384];
	int iConst67;
	float fConst68;
	float fRec97[2];
	float fVec55[2];
	float fRec96[2];
	float fRec8[2];
	float fVec56[16384];
	float fVec57[2];
	float fRec5[2];
	float fRec3[2];
	float fVec58[16384];
	int iConst69;
	float fConst70;
	float fRec99[2];
	float fVec59[2];
	float fRec98[2];
	float fRec4[2];
	float fRec0[1024];
	float fRec1[1024];
	FAUSTFLOAT fHslider5;
	float fRec101[2];
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
	dsp->fHslider0 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(1024.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
}

void instanceClearMasterFX(MasterFX* dsp) {
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
			dsp->fRec6[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fVec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec10[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec14[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec21[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec25[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec29[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec36[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec40[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec44[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fVec2[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec48[l12] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2048; l13 = l13 + 1) {
			dsp->fVec3[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec50[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->iVec4[l15] = 0;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 3; l16 = l16 + 1) {
			dsp->fRec49[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2048; l17 = l17 + 1) {
			dsp->fVec5[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 3; l18 = l18 + 1) {
			dsp->fRec51[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 3; l19 = l19 + 1) {
			dsp->fRec52[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec53[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec54[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec55[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 131072; l23 = l23 + 1) {
			dsp->fVec6[l23] = 0.0f;
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
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec58[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec59[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec61[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 131072; l29 = l29 + 1) {
			dsp->fVec7[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec66[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec62[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec63[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec64[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec65[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec60[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 16384; l36 = l36 + 1) {
			dsp->fVec8[l36] = 0.0f;
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
			dsp->fVec9[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec47[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec45[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2048; l41 = l41 + 1) {
			dsp->fVec10[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec70[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 3; l43 = l43 + 1) {
			dsp->fRec69[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2048; l44 = l44 + 1) {
			dsp->fVec11[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fRec72[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 3; l46 = l46 + 1) {
			dsp->fRec71[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 3; l47 = l47 + 1) {
			dsp->fRec73[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 131072; l48 = l48 + 1) {
			dsp->fVec12[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec74[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 131072; l50 = l50 + 1) {
			dsp->fVec13[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 16384; l51 = l51 + 1) {
			dsp->fVec14[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec75[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 2; l53 = l53 + 1) {
			dsp->fVec15[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 2; l54 = l54 + 1) {
			dsp->fRec68[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec46[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 16384; l56 = l56 + 1) {
			dsp->fVec16[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fVec17[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec43[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 2; l59 = l59 + 1) {
			dsp->fRec41[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 16384; l60 = l60 + 1) {
			dsp->fVec18[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec77[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fVec19[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 2; l63 = l63 + 1) {
			dsp->fRec76[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec42[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 16384; l65 = l65 + 1) {
			dsp->fVec20[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fVec21[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec39[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 2; l68 = l68 + 1) {
			dsp->fRec37[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 16384; l69 = l69 + 1) {
			dsp->fVec22[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec79[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fVec23[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec78[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec38[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 16384; l74 = l74 + 1) {
			dsp->fVec24[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fVec25[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec35[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec33[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 16384; l78 = l78 + 1) {
			dsp->fVec26[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec81[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fVec27[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec80[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec34[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 16384; l83 = l83 + 1) {
			dsp->fVec28[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec82[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fVec29[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec32[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec30[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 16384; l88 = l88 + 1) {
			dsp->fVec30[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec84[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fVec31[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec83[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec31[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 16384; l93 = l93 + 1) {
			dsp->fVec32[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fVec33[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec28[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec26[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 16384; l97 = l97 + 1) {
			dsp->fVec34[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec86[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fVec35[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fRec85[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec27[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 16384; l102 = l102 + 1) {
			dsp->fVec36[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fVec37[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec24[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fRec22[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 16384; l106 = l106 + 1) {
			dsp->fVec38[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec88[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 2; l108 = l108 + 1) {
			dsp->fVec39[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec87[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 2; l110 = l110 + 1) {
			dsp->fRec23[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 16384; l111 = l111 + 1) {
			dsp->fVec40[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fVec41[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 2; l113 = l113 + 1) {
			dsp->fRec20[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 2; l114 = l114 + 1) {
			dsp->fRec18[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 16384; l115 = l115 + 1) {
			dsp->fVec42[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fRec90[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 2; l117 = l117 + 1) {
			dsp->fVec43[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec89[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 2; l119 = l119 + 1) {
			dsp->fRec19[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 16384; l120 = l120 + 1) {
			dsp->fVec44[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 2; l121 = l121 + 1) {
			dsp->fRec91[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 2; l122 = l122 + 1) {
			dsp->fVec45[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 2; l123 = l123 + 1) {
			dsp->fRec17[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 2; l124 = l124 + 1) {
			dsp->fRec15[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 16384; l125 = l125 + 1) {
			dsp->fVec46[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fRec93[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 2; l127 = l127 + 1) {
			dsp->fVec47[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 2; l128 = l128 + 1) {
			dsp->fRec92[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 2; l129 = l129 + 1) {
			dsp->fRec16[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 16384; l130 = l130 + 1) {
			dsp->fVec48[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 2; l131 = l131 + 1) {
			dsp->fVec49[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 2; l132 = l132 + 1) {
			dsp->fRec13[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 2; l133 = l133 + 1) {
			dsp->fRec11[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 16384; l134 = l134 + 1) {
			dsp->fVec50[l134] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; l135 < 2; l135 = l135 + 1) {
			dsp->fRec95[l135] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; l136 < 2; l136 = l136 + 1) {
			dsp->fVec51[l136] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; l137 < 2; l137 = l137 + 1) {
			dsp->fRec94[l137] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; l138 < 2; l138 = l138 + 1) {
			dsp->fRec12[l138] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; l139 < 16384; l139 = l139 + 1) {
			dsp->fVec52[l139] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; l140 < 2; l140 = l140 + 1) {
			dsp->fVec53[l140] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; l141 < 2; l141 = l141 + 1) {
			dsp->fRec9[l141] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; l142 < 2; l142 = l142 + 1) {
			dsp->fRec7[l142] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; l143 < 16384; l143 = l143 + 1) {
			dsp->fVec54[l143] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; l144 < 2; l144 = l144 + 1) {
			dsp->fRec97[l144] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; l145 < 2; l145 = l145 + 1) {
			dsp->fVec55[l145] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; l146 < 2; l146 = l146 + 1) {
			dsp->fRec96[l146] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; l147 < 2; l147 = l147 + 1) {
			dsp->fRec8[l147] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; l148 < 16384; l148 = l148 + 1) {
			dsp->fVec56[l148] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; l149 < 2; l149 = l149 + 1) {
			dsp->fVec57[l149] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; l150 < 2; l150 = l150 + 1) {
			dsp->fRec5[l150] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; l151 < 2; l151 = l151 + 1) {
			dsp->fRec3[l151] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; l152 < 16384; l152 = l152 + 1) {
			dsp->fVec58[l152] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; l153 < 2; l153 = l153 + 1) {
			dsp->fRec99[l153] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; l154 < 2; l154 = l154 + 1) {
			dsp->fVec59[l154] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; l155 < 2; l155 = l155 + 1) {
			dsp->fRec98[l155] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; l156 < 2; l156 = l156 + 1) {
			dsp->fRec4[l156] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; l157 < 1024; l157 = l157 + 1) {
			dsp->fRec0[l157] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; l158 < 1024; l158 = l158 + 1) {
			dsp->fRec1[l158] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; l159 < 2; l159 = l159 + 1) {
			dsp->fRec101[l159] = 0.0f;
		}
	}
}

void instanceConstantsMasterFX(MasterFX* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->iConst0 = itbl0MasterFXSIG0[48];
	dsp->fConst1 = 0.0001f * (float)(dsp->iConst0);
	dsp->iConst2 = itbl0MasterFXSIG0[61];
	dsp->fConst3 = 0.0001f * (float)(dsp->iConst2);
	dsp->iConst4 = itbl0MasterFXSIG0[74];
	dsp->fConst5 = 0.0001f * (float)(dsp->iConst4);
	dsp->iConst6 = itbl0MasterFXSIG0[29];
	dsp->fConst7 = 0.0001f * (float)(dsp->iConst6);
	dsp->iConst8 = itbl0MasterFXSIG0[42];
	dsp->fConst9 = 0.0001f * (float)(dsp->iConst8);
	dsp->iConst10 = itbl0MasterFXSIG0[55];
	dsp->fConst11 = 0.0001f * (float)(dsp->iConst10);
	dsp->iConst12 = itbl0MasterFXSIG0[10];
	dsp->fConst13 = 0.0001f * (float)(dsp->iConst12);
	dsp->iConst14 = itbl0MasterFXSIG0[23];
	dsp->fConst15 = 0.0001f * (float)(dsp->iConst14);
	dsp->iConst16 = itbl0MasterFXSIG0[36];
	dsp->fConst17 = 0.0001f * (float)(dsp->iConst16);
	dsp->fConst18 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst19 = 44.1f / dsp->fConst18;
	dsp->fConst20 = 1.0f - dsp->fConst19;
	float fConst21 = tanf(31415.926f / dsp->fConst18);
	float fConst22 = 1.0f / fConst21;
	dsp->fConst23 = 1.0f / ((fConst22 + 1.4142135f) / fConst21 + 1.0f);
	dsp->fConst24 = 0.06f * dsp->fConst18 + 1.0f;
	dsp->fConst25 = 0.001f * dsp->fConst18;
	dsp->fConst26 = 1.05f / dsp->fConst18;
	dsp->fConst27 = (fConst22 + -1.4142135f) / fConst21 + 1.0f;
	dsp->fConst28 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst21));
	float fConst29 = tanf(20420.352f / dsp->fConst18);
	float fConst30 = 1.0f / fConst29;
	float fConst31 = (fConst30 + 1.4142135f) / fConst29 + 1.0f;
	dsp->fConst32 = 1.0f / fConst31;
	dsp->fConst33 = (fConst30 + -1.4142135f) / fConst29 + 1.0f;
	dsp->fConst34 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst29));
	dsp->fConst35 = 0.5011872f / fConst31;
	dsp->fConst36 = 3.1415927f / dsp->fConst18;
	dsp->fConst37 = floorf(fminf(65533.0f, 0.2f * dsp->fConst18));
	dsp->fConst38 = 1e+01f / dsp->fConst18;
	dsp->iConst39 = itbl0MasterFXSIG0[49];
	dsp->fConst40 = 0.0001f * (float)(dsp->iConst39);
	dsp->fConst41 = 0.8f / dsp->fConst18;
	dsp->fConst42 = 1.2f / dsp->fConst18;
	dsp->iConst43 = itbl0MasterFXSIG0[59];
	dsp->fConst44 = 0.0001f * (float)(dsp->iConst43);
	dsp->iConst45 = itbl0MasterFXSIG0[46];
	dsp->fConst46 = 0.0001f * (float)(dsp->iConst45);
	dsp->iConst47 = itbl0MasterFXSIG0[33];
	dsp->fConst48 = 0.0001f * (float)(dsp->iConst47);
	dsp->iConst49 = itbl0MasterFXSIG0[20];
	dsp->fConst50 = 0.0001f * (float)(dsp->iConst49);
	dsp->iConst51 = itbl0MasterFXSIG0[68];
	dsp->fConst52 = 0.0001f * (float)(dsp->iConst51);
	dsp->iConst53 = itbl0MasterFXSIG0[78];
	dsp->fConst54 = 0.0001f * (float)(dsp->iConst53);
	dsp->iConst55 = itbl0MasterFXSIG0[65];
	dsp->fConst56 = 0.0001f * (float)(dsp->iConst55);
	dsp->iConst57 = itbl0MasterFXSIG0[52];
	dsp->fConst58 = 0.0001f * (float)(dsp->iConst57);
	dsp->iConst59 = itbl0MasterFXSIG0[39];
	dsp->fConst60 = 0.0001f * (float)(dsp->iConst59);
	dsp->iConst61 = itbl0MasterFXSIG0[87];
	dsp->fConst62 = 0.0001f * (float)(dsp->iConst61);
	dsp->iConst63 = itbl0MasterFXSIG0[97];
	dsp->fConst64 = 0.0001f * (float)(dsp->iConst63);
	dsp->iConst65 = itbl0MasterFXSIG0[84];
	dsp->fConst66 = 0.0001f * (float)(dsp->iConst65);
	dsp->iConst67 = itbl0MasterFXSIG0[71];
	dsp->fConst68 = 0.0001f * (float)(dsp->iConst67);
	dsp->iConst69 = itbl0MasterFXSIG0[58];
	dsp->fConst70 = 0.0001f * (float)(dsp->iConst69);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "alt-sel", "11");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "chorus-mode", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "alt", "20");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-fb", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "alt", "8");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-mix", &dsp->fHslider0, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "alt", "5");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-time", &dsp->fHslider4, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)65536.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "alt", "2");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-feedback", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "alt", "22");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-mix", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computeMasterFX(MasterFX* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* input0 = inputs[0];
	FAUSTFLOAT* input1 = inputs[1];
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = dsp->fConst19 * (float)(dsp->fHslider0);
	float fSlow1 = (float)(dsp->fHslider1);
	float fSlow2 = (float)(fSlow1 == 0.0f);
	float fSlow3 = (float)(fSlow1 == 1.0f);
	float fSlow4 = (float)(fSlow1 == 2.0f);
	float fSlow5 = (float)(fSlow1 == 3.0f);
	float fSlow6 = dsp->fConst19 * (float)(dsp->fHslider2);
	float fSlow7 = dsp->fConst19 * (float)(dsp->fHslider3);
	float fSlow8 = dsp->fConst19 * (float)(dsp->fHslider4);
	float fSlow9 = dsp->fConst19 * (float)(dsp->fHslider5);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			int iTemp0 = 1 - dsp->iVec0[1];
			dsp->fRec6[0] = 0.9999f * (dsp->fRec6[1] + (float)(iTemp0 * dsp->iConst0)) + dsp->fConst1;
			float fTemp1 = dsp->fRec6[0] + -1.49999f;
			float fTemp2 = floorf(fTemp1);
			float fTemp3 = fTemp2 + (2.0f - dsp->fRec6[0]);
			float fTemp4 = dsp->fRec6[0] - fTemp2;
			dsp->fVec1[0] = 0.5f;
			float fTemp5 = dsp->fVec1[1] + 0.5f;
			float fTemp6 = 0.5f * fTemp5;
			float fTemp7 = cosf(fTemp6);
			dsp->fRec10[0] = 0.9999f * (dsp->fRec10[1] + (float)(iTemp0 * dsp->iConst2)) + dsp->fConst3;
			float fTemp8 = dsp->fRec10[0] + -1.49999f;
			float fTemp9 = floorf(fTemp8);
			float fTemp10 = fTemp9 + (2.0f - dsp->fRec10[0]);
			float fTemp11 = dsp->fRec10[0] - fTemp9;
			dsp->fRec14[0] = 0.9999f * (dsp->fRec14[1] + (float)(iTemp0 * dsp->iConst4)) + dsp->fConst5;
			float fTemp12 = dsp->fRec14[0] + -1.49999f;
			float fTemp13 = floorf(fTemp12);
			float fTemp14 = fTemp13 + (2.0f - dsp->fRec14[0]);
			float fTemp15 = dsp->fRec14[0] - fTemp13;
			float fTemp16 = sinf(fTemp6);
			float fTemp17 = -0.5f * fTemp5;
			float fTemp18 = cosf(fTemp17);
			dsp->fRec21[0] = 0.9999f * (dsp->fRec21[1] + (float)(iTemp0 * dsp->iConst6)) + dsp->fConst7;
			float fTemp19 = dsp->fRec21[0] + -1.49999f;
			float fTemp20 = floorf(fTemp19);
			float fTemp21 = fTemp20 + (2.0f - dsp->fRec21[0]);
			float fTemp22 = dsp->fRec21[0] - fTemp20;
			dsp->fRec25[0] = 0.9999f * (dsp->fRec25[1] + (float)(iTemp0 * dsp->iConst8)) + dsp->fConst9;
			float fTemp23 = dsp->fRec25[0] + -1.49999f;
			float fTemp24 = floorf(fTemp23);
			float fTemp25 = fTemp24 + (2.0f - dsp->fRec25[0]);
			float fTemp26 = dsp->fRec25[0] - fTemp24;
			dsp->fRec29[0] = 0.9999f * (dsp->fRec29[1] + (float)(iTemp0 * dsp->iConst10)) + dsp->fConst11;
			float fTemp27 = dsp->fRec29[0] + -1.49999f;
			float fTemp28 = floorf(fTemp27);
			float fTemp29 = fTemp28 + (2.0f - dsp->fRec29[0]);
			float fTemp30 = dsp->fRec29[0] - fTemp28;
			float fTemp31 = sinf(fTemp17);
			dsp->fRec36[0] = 0.9999f * (dsp->fRec36[1] + (float)(iTemp0 * dsp->iConst12)) + dsp->fConst13;
			float fTemp32 = dsp->fRec36[0] + -1.49999f;
			float fTemp33 = floorf(fTemp32);
			float fTemp34 = fTemp33 + (2.0f - dsp->fRec36[0]);
			float fTemp35 = dsp->fRec36[0] - fTemp33;
			dsp->fRec40[0] = 0.9999f * (dsp->fRec40[1] + (float)(iTemp0 * dsp->iConst14)) + dsp->fConst15;
			float fTemp36 = dsp->fRec40[0] + -1.49999f;
			float fTemp37 = floorf(fTemp36);
			float fTemp38 = fTemp37 + (2.0f - dsp->fRec40[0]);
			float fTemp39 = dsp->fRec40[0] - fTemp37;
			dsp->fRec44[0] = 0.9999f * (dsp->fRec44[1] + (float)(iTemp0 * dsp->iConst16)) + dsp->fConst17;
			float fTemp40 = dsp->fRec44[0] + -1.49999f;
			float fTemp41 = floorf(fTemp40);
			float fTemp42 = fTemp41 + (2.0f - dsp->fRec44[0]);
			float fTemp43 = dsp->fRec44[0] - fTemp41;
			dsp->fVec2[0] = dsp->fConst18;
			dsp->fRec48[0] = fSlow0 + dsp->fConst20 * dsp->fRec48[1];
			float fTemp44 = 1.0f - dsp->fRec48[0];
			float fTemp45 = (float)(input1[i0]);
			dsp->fVec3[dsp->IOTA0 & 2047] = fTemp45;
			float fTemp46 = fSlow2 * fTemp45;
			dsp->fRec50[0] = dsp->fConst26 + (dsp->fRec50[1] - floorf(dsp->fConst26 + dsp->fRec50[1]));
			float fTemp47 = sinf(6.2831855f * (dsp->fRec50[0] + (14.323945f - floorf(dsp->fRec50[0] + 14.323945f))));
			float fTemp48 = dsp->fConst25 * (1.225f * fTemp47 + 3.5f);
			int iTemp49 = (int)(fTemp48);
			float fTemp50 = floorf(fTemp48);
			dsp->iVec4[0] = 2;
			dsp->fRec49[0] = dsp->fVec3[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp49))))) & 2047] * (fTemp50 + (1.0f - fTemp48)) + (fTemp48 - fTemp50) * dsp->fVec3[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp49 + 1))))) & 2047] - dsp->fConst23 * (dsp->fConst27 * dsp->fRec49[2] + dsp->fConst28 * dsp->fRec49[1]);
			float fTemp51 = fTemp45 + dsp->fConst23 * (dsp->fRec49[2] + dsp->fRec49[0] + 2.0f * dsp->fRec49[1]);
			dsp->fVec5[dsp->IOTA0 & 2047] = fTemp51;
			float fTemp52 = dsp->fConst25 * (2.7f * fTemp47 + 6.0f);
			int iTemp53 = (int)(fTemp52);
			int iTemp54 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp53))));
			float fTemp55 = floorf(fTemp52);
			float fTemp56 = fTemp55 + (1.0f - fTemp52);
			float fTemp57 = fTemp52 - fTemp55;
			int iTemp58 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp53 + 1))));
			dsp->fRec51[0] = dsp->fVec3[(dsp->IOTA0 - iTemp54) & 2047] * fTemp56 + fTemp57 * dsp->fVec3[(dsp->IOTA0 - iTemp58) & 2047] - dsp->fConst32 * (dsp->fConst33 * dsp->fRec51[2] + dsp->fConst34 * dsp->fRec51[1]);
			float fTemp59 = 0.5011872f * (fSlow3 * fTemp51 + fSlow4 * (fTemp45 + dsp->fConst32 * (dsp->fRec51[2] + dsp->fRec51[0] + 2.0f * dsp->fRec51[1])));
			dsp->fRec52[0] = 0.5011872f * (fTemp56 * dsp->fVec5[(dsp->IOTA0 - iTemp54) & 2047] + fTemp57 * dsp->fVec5[(dsp->IOTA0 - iTemp58) & 2047]) - dsp->fConst32 * (dsp->fConst33 * dsp->fRec52[2] + dsp->fConst34 * dsp->fRec52[1]);
			float fTemp60 = fSlow5 * (0.25118864f * fTemp51 + dsp->fConst35 * (dsp->fRec52[2] + dsp->fRec52[0] + 2.0f * dsp->fRec52[1]));
			float fTemp61 = fTemp44 * (fTemp46 + fTemp59 + fTemp60);
			dsp->fRec53[0] = fSlow6 + dsp->fConst20 * dsp->fRec53[1];
			float fTemp62 = dsp->fRec53[0] + dsp->fRec53[1];
			float fTemp63 = dsp->fConst18 + dsp->fVec2[1];
			float fTemp64 = dsp->fConst36 * (float)(dsp->iVec4[1] + 2);
			float fTemp65 = sinf(fTemp64);
			float fTemp66 = cosf(fTemp64);
			dsp->fRec54[0] = dsp->fRec55[1] * fTemp65 + dsp->fRec54[1] * fTemp66;
			dsp->fRec55[0] = (float)(iTemp0) + dsp->fRec55[1] * fTemp66 - fTemp65 * dsp->fRec54[1];
			float fTemp67 = 5.6689343e-05f * fTemp63 * (dsp->fRec54[0] + 1.0f);
			float fTemp68 = fTemp67 + 8.500005f;
			float fTemp69 = floorf(fTemp68);
			float fTemp70 = fTemp67 + (7.0f - fTemp69);
			float fTemp71 = fTemp67 + (8.0f - fTemp69);
			int iTemp72 = (int)(fTemp68);
			float fTemp73 = fTemp67 + (9.0f - fTemp69);
			float fTemp74 = fTemp67 + (1e+01f - fTemp69);
			float fTemp75 = fTemp74 * fTemp73;
			float fTemp76 = fTemp75 * fTemp71;
			float fTemp77 = (fTemp67 + (6.0f - fTemp69)) * (fTemp70 * (fTemp71 * (0.041666668f * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp72)) + 1)) & 1023] * fTemp73 - 0.16666667f * fTemp74 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp72 + 1)) + 1)) & 1023]) + 0.25f * fTemp75 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp72 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp76 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp72 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp76 * fTemp70 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp72 + 4)) + 1)) & 1023];
			dsp->fVec6[dsp->IOTA0 & 131071] = fTemp77;
			float fTemp78 = ((dsp->fRec56[1] != 0.0f) ? (((dsp->fRec57[1] > 0.0f) & (dsp->fRec57[1] < 1.0f)) ? dsp->fRec56[1] : 0.0f) : (((dsp->fRec57[1] == 0.0f) & (dsp->fConst37 != dsp->fRec58[1])) ? 4.5351473e-05f : (((dsp->fRec57[1] == 1.0f) & (dsp->fConst37 != dsp->fRec59[1])) ? -4.5351473e-05f : 0.0f)));
			dsp->fRec56[0] = fTemp78;
			dsp->fRec57[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec57[1] + fTemp78));
			dsp->fRec58[0] = (((dsp->fRec57[1] >= 1.0f) & (dsp->fRec59[1] != dsp->fConst37)) ? dsp->fConst37 : dsp->fRec58[1]);
			dsp->fRec59[0] = (((dsp->fRec57[1] <= 0.0f) & (dsp->fRec58[1] != dsp->fConst37)) ? dsp->fConst37 : dsp->fRec59[1]);
			int iTemp79 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec58[0])));
			float fTemp80 = dsp->fVec6[(dsp->IOTA0 - iTemp79) & 131071];
			int iTemp81 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec59[0])));
			dsp->fRec61[0] = fSlow7 + dsp->fConst20 * dsp->fRec61[1];
			float fTemp82 = fTemp60 + fTemp59 + dsp->fRec61[0] * dsp->fRec60[1] + fTemp46;
			dsp->fVec7[dsp->IOTA0 & 131071] = fTemp82;
			dsp->fRec66[0] = fSlow8 + dsp->fConst20 * dsp->fRec66[1];
			float fTemp83 = ((dsp->fRec62[1] != 0.0f) ? (((dsp->fRec63[1] > 0.0f) & (dsp->fRec63[1] < 1.0f)) ? dsp->fRec62[1] : 0.0f) : (((dsp->fRec63[1] == 0.0f) & (dsp->fRec66[0] != dsp->fRec64[1])) ? dsp->fConst38 : (((dsp->fRec63[1] == 1.0f) & (dsp->fRec66[0] != dsp->fRec65[1])) ? -dsp->fConst38 : 0.0f)));
			dsp->fRec62[0] = fTemp83;
			dsp->fRec63[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec63[1] + fTemp83));
			dsp->fRec64[0] = (((dsp->fRec63[1] >= 1.0f) & (dsp->fRec65[1] != dsp->fRec66[0])) ? dsp->fRec66[0] : dsp->fRec64[1]);
			dsp->fRec65[0] = (((dsp->fRec63[1] <= 0.0f) & (dsp->fRec64[1] != dsp->fRec66[0])) ? dsp->fRec66[0] : dsp->fRec65[1]);
			int iTemp84 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec64[0])));
			float fTemp85 = dsp->fVec7[(dsp->IOTA0 - iTemp84) & 131071];
			int iTemp86 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec65[0])));
			dsp->fRec60[0] = fTemp85 + dsp->fRec63[0] * (dsp->fVec7[(dsp->IOTA0 - iTemp86) & 131071] - fTemp85);
			float fTemp87 = dsp->fRec48[0] * dsp->fRec60[0];
			float fTemp88 = fTemp61 + 0.5f * fTemp62 * (fTemp80 + dsp->fRec57[0] * (dsp->fVec6[(dsp->IOTA0 - iTemp81) & 131071] - fTemp80)) + fTemp87;
			float fTemp89 = fTemp7 * fTemp88 - fTemp16 * dsp->fRec34[1];
			float fTemp90 = fTemp7 * fTemp89 - fTemp16 * dsp->fRec38[1];
			float fTemp91 = fTemp7 * fTemp90 - fTemp16 * dsp->fRec42[1];
			dsp->fVec8[dsp->IOTA0 & 16383] = fTemp16 * dsp->fRec46[1] - fTemp7 * fTemp91;
			dsp->fRec67[0] = 0.9999f * (dsp->fRec67[1] + (float)(iTemp0 * dsp->iConst39)) + dsp->fConst40;
			float fTemp92 = dsp->fRec67[0] + -1.49999f;
			float fTemp93 = dsp->fVec8[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp92)))) & 16383];
			dsp->fVec9[0] = fTemp93;
			float fTemp94 = floorf(fTemp92);
			dsp->fRec47[0] = dsp->fVec9[1] - (fTemp94 + (2.0f - dsp->fRec67[0])) * (dsp->fRec47[1] - fTemp93) / (dsp->fRec67[0] - fTemp94);
			dsp->fRec45[0] = dsp->fRec47[0];
			float fTemp95 = (float)(input0[i0]);
			dsp->fVec10[dsp->IOTA0 & 2047] = fTemp95;
			float fTemp96 = fSlow2 * fTemp95;
			dsp->fRec70[0] = dsp->fConst41 + (dsp->fRec70[1] - floorf(dsp->fConst41 + dsp->fRec70[1]));
			float fTemp97 = dsp->fConst25 * (1.225f * sinf(6.2831855f * (dsp->fRec70[0] - floorf(dsp->fRec70[0]))) + 3.5f);
			int iTemp98 = (int)(fTemp97);
			float fTemp99 = floorf(fTemp97);
			dsp->fRec69[0] = dsp->fVec10[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp98))))) & 2047] * (fTemp99 + (1.0f - fTemp97)) + (fTemp97 - fTemp99) * dsp->fVec10[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp98 + 1))))) & 2047] - dsp->fConst23 * (dsp->fConst27 * dsp->fRec69[2] + dsp->fConst28 * dsp->fRec69[1]);
			float fTemp100 = fTemp95 + dsp->fConst23 * (dsp->fRec69[2] + dsp->fRec69[0] + 2.0f * dsp->fRec69[1]);
			dsp->fVec11[dsp->IOTA0 & 2047] = fTemp100;
			dsp->fRec72[0] = dsp->fConst42 + (dsp->fRec72[1] - floorf(dsp->fConst42 + dsp->fRec72[1]));
			float fTemp101 = dsp->fConst25 * (2.7f * sinf(6.2831855f * (dsp->fRec72[0] - floorf(dsp->fRec72[0]))) + 6.0f);
			int iTemp102 = (int)(fTemp101);
			int iTemp103 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp102))));
			float fTemp104 = floorf(fTemp101);
			float fTemp105 = fTemp104 + (1.0f - fTemp101);
			float fTemp106 = fTemp101 - fTemp104;
			int iTemp107 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp102 + 1))));
			dsp->fRec71[0] = dsp->fVec10[(dsp->IOTA0 - iTemp103) & 2047] * fTemp105 + fTemp106 * dsp->fVec10[(dsp->IOTA0 - iTemp107) & 2047] - dsp->fConst32 * (dsp->fConst33 * dsp->fRec71[2] + dsp->fConst34 * dsp->fRec71[1]);
			float fTemp108 = 0.5011872f * (fSlow3 * fTemp100 + fSlow4 * (fTemp95 + dsp->fConst32 * (dsp->fRec71[2] + dsp->fRec71[0] + 2.0f * dsp->fRec71[1])));
			dsp->fRec73[0] = 0.5011872f * (fTemp105 * dsp->fVec11[(dsp->IOTA0 - iTemp103) & 2047] + fTemp106 * dsp->fVec11[(dsp->IOTA0 - iTemp107) & 2047]) - dsp->fConst32 * (dsp->fConst33 * dsp->fRec73[2] + dsp->fConst34 * dsp->fRec73[1]);
			float fTemp109 = fSlow5 * (0.25118864f * fTemp100 + dsp->fConst35 * (dsp->fRec73[2] + dsp->fRec73[0] + 2.0f * dsp->fRec73[1]));
			float fTemp110 = fTemp44 * (fTemp96 + fTemp108 + fTemp109);
			float fTemp111 = fTemp109 + fTemp108 + dsp->fRec61[0] * dsp->fRec74[1] + fTemp96;
			dsp->fVec12[dsp->IOTA0 & 131071] = fTemp111;
			float fTemp112 = dsp->fVec12[(dsp->IOTA0 - iTemp84) & 131071];
			dsp->fRec74[0] = fTemp112 + dsp->fRec63[0] * (dsp->fVec12[(dsp->IOTA0 - iTemp86) & 131071] - fTemp112);
			float fTemp113 = dsp->fRec74[0] * dsp->fRec48[0];
			float fTemp114 = 5.6689343e-05f * fTemp63 * (dsp->fRec55[0] + 1.0f);
			float fTemp115 = fTemp114 + 8.500005f;
			float fTemp116 = floorf(fTemp115);
			float fTemp117 = fTemp114 + (7.0f - fTemp116);
			float fTemp118 = fTemp114 + (8.0f - fTemp116);
			int iTemp119 = (int)(fTemp115);
			float fTemp120 = fTemp114 + (9.0f - fTemp116);
			float fTemp121 = fTemp114 + (1e+01f - fTemp116);
			float fTemp122 = fTemp121 * fTemp120;
			float fTemp123 = fTemp122 * fTemp118;
			float fTemp124 = (fTemp114 + (6.0f - fTemp116)) * (fTemp117 * (fTemp118 * (0.041666668f * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp119)) + 1)) & 1023] * fTemp120 - 0.16666667f * fTemp121 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp119 + 1)) + 1)) & 1023]) + 0.25f * fTemp122 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp119 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp123 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp119 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp123 * fTemp117 * dsp->fRec0[(dsp->IOTA0 - (min(512, max(0, iTemp119 + 4)) + 1)) & 1023];
			dsp->fVec13[dsp->IOTA0 & 131071] = fTemp124;
			float fTemp125 = dsp->fVec13[(dsp->IOTA0 - iTemp79) & 131071];
			float fTemp126 = fTemp110 + fTemp113 + 0.5f * (fTemp125 + dsp->fRec57[0] * (dsp->fVec13[(dsp->IOTA0 - iTemp81) & 131071] - fTemp125)) * fTemp62;
			float fTemp127 = fTemp126 * fTemp7 - fTemp16 * dsp->fRec33[1];
			float fTemp128 = fTemp7 * fTemp127 - fTemp16 * dsp->fRec37[1];
			float fTemp129 = fTemp7 * fTemp128 - fTemp16 * dsp->fRec41[1];
			dsp->fVec14[dsp->IOTA0 & 16383] = fTemp7 * fTemp129 - fTemp16 * dsp->fRec45[1];
			dsp->fRec75[0] = 0.9999f * (dsp->fRec75[1] + (float)(iTemp0 * dsp->iConst43)) + dsp->fConst44;
			float fTemp130 = dsp->fRec75[0] + -1.49999f;
			float fTemp131 = dsp->fVec14[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp130)))) & 16383];
			dsp->fVec15[0] = fTemp131;
			float fTemp132 = floorf(fTemp130);
			dsp->fRec68[0] = dsp->fVec15[1] - (fTemp132 + (2.0f - dsp->fRec75[0])) * (dsp->fRec68[1] - fTemp131) / (dsp->fRec75[0] - fTemp132);
			dsp->fRec46[0] = dsp->fRec68[0];
			dsp->fVec16[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec46[1] + fTemp16 * fTemp91;
			float fTemp133 = dsp->fVec16[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp40)))) & 16383];
			dsp->fVec17[0] = fTemp133;
			dsp->fRec43[0] = -(dsp->fRec43[1] * fTemp42 / fTemp43 + fTemp42 * fTemp133 / fTemp43 + dsp->fVec17[1]);
			dsp->fRec41[0] = dsp->fRec43[0];
			dsp->fVec18[dsp->IOTA0 & 16383] = dsp->fRec45[1] * fTemp7 + fTemp16 * fTemp129;
			dsp->fRec77[0] = 0.9999f * (dsp->fRec77[1] + (float)(iTemp0 * dsp->iConst45)) + dsp->fConst46;
			float fTemp134 = dsp->fRec77[0] + -1.49999f;
			float fTemp135 = dsp->fVec18[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp134)))) & 16383];
			dsp->fVec19[0] = fTemp135;
			float fTemp136 = floorf(fTemp134);
			dsp->fRec76[0] = dsp->fVec19[1] - (fTemp136 + (2.0f - dsp->fRec77[0])) * (dsp->fRec76[1] - fTemp135) / (dsp->fRec77[0] - fTemp136);
			dsp->fRec42[0] = dsp->fRec76[0];
			dsp->fVec20[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec42[1] + fTemp16 * fTemp90;
			float fTemp137 = dsp->fVec20[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp36)))) & 16383];
			dsp->fVec21[0] = fTemp137;
			dsp->fRec39[0] = -(dsp->fRec39[1] * fTemp38 / fTemp39 + fTemp38 * fTemp137 / fTemp39 + dsp->fVec21[1]);
			dsp->fRec37[0] = dsp->fRec39[0];
			dsp->fVec22[dsp->IOTA0 & 16383] = dsp->fRec41[1] * fTemp7 + fTemp16 * fTemp128;
			dsp->fRec79[0] = 0.9999f * (dsp->fRec79[1] + (float)(iTemp0 * dsp->iConst47)) + dsp->fConst48;
			float fTemp138 = dsp->fRec79[0] + -1.49999f;
			float fTemp139 = dsp->fVec22[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp138)))) & 16383];
			dsp->fVec23[0] = fTemp139;
			float fTemp140 = floorf(fTemp138);
			dsp->fRec78[0] = dsp->fVec23[1] - (fTemp140 + (2.0f - dsp->fRec79[0])) * (dsp->fRec78[1] - fTemp139) / (dsp->fRec79[0] - fTemp140);
			dsp->fRec38[0] = dsp->fRec78[0];
			dsp->fVec24[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec38[1] + fTemp16 * fTemp89;
			float fTemp141 = dsp->fVec24[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp32)))) & 16383];
			dsp->fVec25[0] = fTemp141;
			dsp->fRec35[0] = -(dsp->fRec35[1] * fTemp34 / fTemp35 + fTemp34 * fTemp141 / fTemp35 + dsp->fVec25[1]);
			dsp->fRec33[0] = dsp->fRec35[0];
			dsp->fVec26[dsp->IOTA0 & 16383] = dsp->fRec37[1] * fTemp7 + fTemp16 * fTemp127;
			dsp->fRec81[0] = 0.9999f * (dsp->fRec81[1] + (float)(iTemp0 * dsp->iConst49)) + dsp->fConst50;
			float fTemp142 = dsp->fRec81[0] + -1.49999f;
			float fTemp143 = dsp->fVec26[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp142)))) & 16383];
			dsp->fVec27[0] = fTemp143;
			float fTemp144 = floorf(fTemp142);
			dsp->fRec80[0] = dsp->fVec27[1] - (fTemp144 + (2.0f - dsp->fRec81[0])) * (dsp->fRec80[1] - fTemp143) / (dsp->fRec81[0] - fTemp144);
			dsp->fRec34[0] = dsp->fRec80[0];
			float fTemp145 = fTemp7 * dsp->fRec34[1] + fTemp16 * fTemp88;
			float fTemp146 = fTemp18 * fTemp145 - fTemp31 * dsp->fRec19[1];
			float fTemp147 = fTemp18 * fTemp146 - fTemp31 * dsp->fRec23[1];
			float fTemp148 = fTemp18 * fTemp147 - fTemp31 * dsp->fRec27[1];
			dsp->fVec28[dsp->IOTA0 & 16383] = fTemp31 * dsp->fRec31[1] - fTemp18 * fTemp148;
			dsp->fRec82[0] = 0.9999f * (dsp->fRec82[1] + (float)(iTemp0 * dsp->iConst51)) + dsp->fConst52;
			float fTemp149 = dsp->fRec82[0] + -1.49999f;
			float fTemp150 = dsp->fVec28[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp149)))) & 16383];
			dsp->fVec29[0] = fTemp150;
			float fTemp151 = floorf(fTemp149);
			dsp->fRec32[0] = dsp->fVec29[1] - (fTemp151 + (2.0f - dsp->fRec82[0])) * (dsp->fRec32[1] - fTemp150) / (dsp->fRec82[0] - fTemp151);
			dsp->fRec30[0] = dsp->fRec32[0];
			float fTemp152 = dsp->fRec33[1] * fTemp7 + fTemp16 * fTemp126;
			float fTemp153 = fTemp152 * fTemp18 - fTemp31 * dsp->fRec18[1];
			float fTemp154 = fTemp18 * fTemp153 - fTemp31 * dsp->fRec22[1];
			float fTemp155 = fTemp18 * fTemp154 - fTemp31 * dsp->fRec26[1];
			dsp->fVec30[dsp->IOTA0 & 16383] = fTemp18 * fTemp155 - dsp->fRec30[1] * fTemp31;
			dsp->fRec84[0] = 0.9999f * (dsp->fRec84[1] + (float)(iTemp0 * dsp->iConst53)) + dsp->fConst54;
			float fTemp156 = dsp->fRec84[0] + -1.49999f;
			float fTemp157 = dsp->fVec30[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp156)))) & 16383];
			dsp->fVec31[0] = fTemp157;
			float fTemp158 = floorf(fTemp156);
			dsp->fRec83[0] = dsp->fVec31[1] - (fTemp158 + (2.0f - dsp->fRec84[0])) * (dsp->fRec83[1] - fTemp157) / (dsp->fRec84[0] - fTemp158);
			dsp->fRec31[0] = dsp->fRec83[0];
			dsp->fVec32[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec31[1] + fTemp31 * fTemp148;
			float fTemp159 = dsp->fVec32[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp27)))) & 16383];
			dsp->fVec33[0] = fTemp159;
			dsp->fRec28[0] = -(dsp->fRec28[1] * fTemp29 / fTemp30 + fTemp29 * fTemp159 / fTemp30 + dsp->fVec33[1]);
			dsp->fRec26[0] = dsp->fRec28[0];
			dsp->fVec34[dsp->IOTA0 & 16383] = dsp->fRec30[1] * fTemp18 + fTemp31 * fTemp155;
			dsp->fRec86[0] = 0.9999f * (dsp->fRec86[1] + (float)(iTemp0 * dsp->iConst55)) + dsp->fConst56;
			float fTemp160 = dsp->fRec86[0] + -1.49999f;
			float fTemp161 = dsp->fVec34[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp160)))) & 16383];
			dsp->fVec35[0] = fTemp161;
			float fTemp162 = floorf(fTemp160);
			dsp->fRec85[0] = dsp->fVec35[1] - (fTemp162 + (2.0f - dsp->fRec86[0])) * (dsp->fRec85[1] - fTemp161) / (dsp->fRec86[0] - fTemp162);
			dsp->fRec27[0] = dsp->fRec85[0];
			dsp->fVec36[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec27[1] + fTemp31 * fTemp147;
			float fTemp163 = dsp->fVec36[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp23)))) & 16383];
			dsp->fVec37[0] = fTemp163;
			dsp->fRec24[0] = -(dsp->fRec24[1] * fTemp25 / fTemp26 + fTemp25 * fTemp163 / fTemp26 + dsp->fVec37[1]);
			dsp->fRec22[0] = dsp->fRec24[0];
			dsp->fVec38[dsp->IOTA0 & 16383] = dsp->fRec26[1] * fTemp18 + fTemp31 * fTemp154;
			dsp->fRec88[0] = 0.9999f * (dsp->fRec88[1] + (float)(iTemp0 * dsp->iConst57)) + dsp->fConst58;
			float fTemp164 = dsp->fRec88[0] + -1.49999f;
			float fTemp165 = dsp->fVec38[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp164)))) & 16383];
			dsp->fVec39[0] = fTemp165;
			float fTemp166 = floorf(fTemp164);
			dsp->fRec87[0] = dsp->fVec39[1] - (fTemp166 + (2.0f - dsp->fRec88[0])) * (dsp->fRec87[1] - fTemp165) / (dsp->fRec88[0] - fTemp166);
			dsp->fRec23[0] = dsp->fRec87[0];
			dsp->fVec40[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec23[1] + fTemp31 * fTemp146;
			float fTemp167 = dsp->fVec40[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp19)))) & 16383];
			dsp->fVec41[0] = fTemp167;
			dsp->fRec20[0] = -(dsp->fRec20[1] * fTemp21 / fTemp22 + fTemp21 * fTemp167 / fTemp22 + dsp->fVec41[1]);
			dsp->fRec18[0] = dsp->fRec20[0];
			dsp->fVec42[dsp->IOTA0 & 16383] = dsp->fRec22[1] * fTemp18 + fTemp31 * fTemp153;
			dsp->fRec90[0] = 0.9999f * (dsp->fRec90[1] + (float)(iTemp0 * dsp->iConst59)) + dsp->fConst60;
			float fTemp168 = dsp->fRec90[0] + -1.49999f;
			float fTemp169 = dsp->fVec42[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp168)))) & 16383];
			dsp->fVec43[0] = fTemp169;
			float fTemp170 = floorf(fTemp168);
			dsp->fRec89[0] = dsp->fVec43[1] - (fTemp170 + (2.0f - dsp->fRec90[0])) * (dsp->fRec89[1] - fTemp169) / (dsp->fRec90[0] - fTemp170);
			dsp->fRec19[0] = dsp->fRec89[0];
			float fTemp171 = fTemp18 * dsp->fRec19[1] + fTemp31 * fTemp145;
			float fTemp172 = fTemp7 * fTemp171 - fTemp16 * dsp->fRec4[1];
			float fTemp173 = fTemp7 * fTemp172 - fTemp16 * dsp->fRec8[1];
			float fTemp174 = fTemp7 * fTemp173 - fTemp16 * dsp->fRec12[1];
			dsp->fVec44[dsp->IOTA0 & 16383] = fTemp16 * dsp->fRec16[1] - fTemp7 * fTemp174;
			dsp->fRec91[0] = 0.9999f * ((float)(dsp->iConst61 * iTemp0) + dsp->fRec91[1]) + dsp->fConst62;
			float fTemp175 = dsp->fRec91[0] + -1.49999f;
			float fTemp176 = dsp->fVec44[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp175)))) & 16383];
			dsp->fVec45[0] = fTemp176;
			float fTemp177 = floorf(fTemp175);
			dsp->fRec17[0] = dsp->fVec45[1] - (fTemp177 + (2.0f - dsp->fRec91[0])) * (dsp->fRec17[1] - fTemp176) / (dsp->fRec91[0] - fTemp177);
			dsp->fRec15[0] = dsp->fRec17[0];
			float fTemp178 = dsp->fRec18[1] * fTemp18 + fTemp31 * fTemp152;
			float fTemp179 = fTemp7 * fTemp178 - fTemp16 * dsp->fRec3[1];
			float fTemp180 = fTemp7 * fTemp179 - fTemp16 * dsp->fRec7[1];
			float fTemp181 = fTemp7 * fTemp180 - fTemp16 * dsp->fRec11[1];
			dsp->fVec46[dsp->IOTA0 & 16383] = fTemp7 * fTemp181 - dsp->fRec15[1] * fTemp16;
			dsp->fRec93[0] = 0.9999f * (dsp->fRec93[1] + (float)(iTemp0 * dsp->iConst63)) + dsp->fConst64;
			float fTemp182 = dsp->fRec93[0] + -1.49999f;
			float fTemp183 = dsp->fVec46[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp182)))) & 16383];
			dsp->fVec47[0] = fTemp183;
			float fTemp184 = floorf(fTemp182);
			dsp->fRec92[0] = dsp->fVec47[1] - (fTemp184 + (2.0f - dsp->fRec93[0])) * (dsp->fRec92[1] - fTemp183) / (dsp->fRec93[0] - fTemp184);
			dsp->fRec16[0] = dsp->fRec92[0];
			dsp->fVec48[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec16[1] + fTemp16 * fTemp174;
			float fTemp185 = dsp->fVec48[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp12)))) & 16383];
			dsp->fVec49[0] = fTemp185;
			dsp->fRec13[0] = -(dsp->fRec13[1] * fTemp14 / fTemp15 + fTemp14 * fTemp185 / fTemp15 + dsp->fVec49[1]);
			dsp->fRec11[0] = dsp->fRec13[0];
			dsp->fVec50[dsp->IOTA0 & 16383] = dsp->fRec15[1] * fTemp7 + fTemp16 * fTemp181;
			dsp->fRec95[0] = 0.9999f * (dsp->fRec95[1] + (float)(iTemp0 * dsp->iConst65)) + dsp->fConst66;
			float fTemp186 = dsp->fRec95[0] + -1.49999f;
			float fTemp187 = dsp->fVec50[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp186)))) & 16383];
			dsp->fVec51[0] = fTemp187;
			float fTemp188 = floorf(fTemp186);
			dsp->fRec94[0] = dsp->fVec51[1] - (fTemp188 + (2.0f - dsp->fRec95[0])) * (dsp->fRec94[1] - fTemp187) / (dsp->fRec95[0] - fTemp188);
			dsp->fRec12[0] = dsp->fRec94[0];
			dsp->fVec52[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec12[1] + fTemp16 * fTemp173;
			float fTemp189 = dsp->fVec52[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp8)))) & 16383];
			dsp->fVec53[0] = fTemp189;
			dsp->fRec9[0] = -(dsp->fRec9[1] * fTemp10 / fTemp11 + fTemp10 * fTemp189 / fTemp11 + dsp->fVec53[1]);
			dsp->fRec7[0] = dsp->fRec9[0];
			dsp->fVec54[dsp->IOTA0 & 16383] = dsp->fRec11[1] * fTemp7 + fTemp16 * fTemp180;
			dsp->fRec97[0] = 0.9999f * (dsp->fRec97[1] + (float)(iTemp0 * dsp->iConst67)) + dsp->fConst68;
			float fTemp190 = dsp->fRec97[0] + -1.49999f;
			float fTemp191 = dsp->fVec54[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp190)))) & 16383];
			dsp->fVec55[0] = fTemp191;
			float fTemp192 = floorf(fTemp190);
			dsp->fRec96[0] = dsp->fVec55[1] - (fTemp192 + (2.0f - dsp->fRec97[0])) * (dsp->fRec96[1] - fTemp191) / (dsp->fRec97[0] - fTemp192);
			dsp->fRec8[0] = dsp->fRec96[0];
			dsp->fVec56[dsp->IOTA0 & 16383] = fTemp7 * dsp->fRec8[1] + fTemp16 * fTemp172;
			float fTemp193 = dsp->fVec56[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp1)))) & 16383];
			dsp->fVec57[0] = fTemp193;
			dsp->fRec5[0] = -(dsp->fRec5[1] * fTemp3 / fTemp4 + fTemp3 * fTemp193 / fTemp4 + dsp->fVec57[1]);
			dsp->fRec3[0] = dsp->fRec5[0];
			dsp->fVec58[dsp->IOTA0 & 16383] = dsp->fRec7[1] * fTemp7 + fTemp16 * fTemp179;
			dsp->fRec99[0] = 0.9999f * (dsp->fRec99[1] + (float)(iTemp0 * dsp->iConst69)) + dsp->fConst70;
			float fTemp194 = dsp->fRec99[0] + -1.49999f;
			float fTemp195 = dsp->fVec58[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp194)))) & 16383];
			dsp->fVec59[0] = fTemp195;
			float fTemp196 = floorf(fTemp194);
			dsp->fRec98[0] = dsp->fVec59[1] - (fTemp196 + (2.0f - dsp->fRec99[0])) * (dsp->fRec98[1] - fTemp195) / (dsp->fRec99[0] - fTemp196);
			dsp->fRec4[0] = dsp->fRec98[0];
			float fRec2 = dsp->fRec3[1] * fTemp7 + fTemp16 * fTemp178;
			dsp->fRec0[dsp->IOTA0 & 1023] = fRec2;
			float fRec100 = fTemp7 * dsp->fRec4[1] + fTemp16 * fTemp171;
			dsp->fRec1[dsp->IOTA0 & 1023] = fRec100;
			dsp->fRec101[0] = fSlow9 + dsp->fConst20 * dsp->fRec101[1];
			float fTemp197 = 1.0f - dsp->fRec101[0];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[dsp->IOTA0 & 1023] * dsp->fRec101[0] + fTemp197 * (fTemp113 + fTemp110));
			output1[i0] = (FAUSTFLOAT)(dsp->fRec101[0] * dsp->fRec1[dsp->IOTA0 & 1023] + fTemp197 * (fTemp87 + fTemp61));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->iVec4[1] = dsp->iVec4[0];
			dsp->fRec49[2] = dsp->fRec49[1];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec51[2] = dsp->fRec51[1];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec52[2] = dsp->fRec52[1];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec53[1] = dsp->fRec53[0];
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
			dsp->fVec9[1] = dsp->fVec9[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec45[1] = dsp->fRec45[0];
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
			dsp->fVec15[1] = dsp->fVec15[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fVec17[1] = dsp->fVec17[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec19[1] = dsp->fVec19[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fVec21[1] = dsp->fVec21[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fVec25[1] = dsp->fVec25[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fVec27[1] = dsp->fVec27[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec29[1] = dsp->fVec29[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fVec31[1] = dsp->fVec31[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fVec33[1] = dsp->fVec33[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fVec35[1] = dsp->fVec35[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fVec37[1] = dsp->fVec37[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fVec39[1] = dsp->fVec39[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fVec41[1] = dsp->fVec41[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fVec43[1] = dsp->fVec43[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fVec45[1] = dsp->fVec45[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec47[1] = dsp->fVec47[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fVec49[1] = dsp->fVec49[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fVec51[1] = dsp->fVec51[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec53[1] = dsp->fVec53[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fVec55[1] = dsp->fVec55[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec57[1] = dsp->fVec57[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fVec59[1] = dsp->fVec59[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec101[1] = dsp->fRec101[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
