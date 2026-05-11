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
	int iConst3;
	float fConst4;
	float fRec7[2];
	float fVec3[2];
	int iConst5;
	float fConst6;
	float fRec11[2];
	int iConst7;
	float fConst8;
	float fRec15[2];
	int iConst9;
	float fConst10;
	float fRec22[2];
	int iConst11;
	float fConst12;
	float fRec26[2];
	int iConst13;
	float fConst14;
	float fRec30[2];
	int iConst15;
	float fConst16;
	float fRec37[2];
	int iConst17;
	float fConst18;
	float fRec41[2];
	int iConst19;
	float fConst20;
	float fRec45[2];
	FAUSTFLOAT fHslider1;
	float fRec49[2];
	FAUSTFLOAT fHslider2;
	int IOTA0;
	float fVec4[2048];
	float fConst23;
	float fConst24;
	float fConst25;
	float fConst26;
	float fRec51[2];
	float fConst27;
	int iVec5[2];
	float fConst28;
	float fRec50[3];
	float fVec6[2048];
	float fConst32;
	float fConst33;
	float fConst34;
	float fRec52[3];
	float fConst35;
	float fRec53[3];
	FAUSTFLOAT fHslider3;
	float fRec54[2];
	float fConst36;
	float fRec55[2];
	float fRec56[2];
	float fVec7[131072];
	FAUSTFLOAT fHslider4;
	float fRec61[2];
	float fRec57[2];
	float fRec58[2];
	float fRec59[2];
	float fRec60[2];
	FAUSTFLOAT fHslider5;
	float fRec63[2];
	float fVec8[131072];
	FAUSTFLOAT fHslider6;
	float fRec68[2];
	float fConst37;
	float fRec64[2];
	float fRec65[2];
	float fRec66[2];
	float fRec67[2];
	float fRec62[2];
	float fVec9[16384];
	int iConst38;
	float fConst39;
	float fRec69[2];
	float fVec10[2];
	float fRec48[2];
	float fRec46[2];
	float fVec11[2048];
	float fConst40;
	float fRec73[2];
	float fRec72[3];
	float fVec12[2048];
	float fConst41;
	float fRec75[2];
	float fRec74[3];
	float fRec76[3];
	float fVec13[131072];
	float fRec71[2];
	float fVec14[131072];
	float fVec15[16384];
	int iConst42;
	float fConst43;
	float fRec77[2];
	float fVec16[2];
	float fRec70[2];
	float fRec47[2];
	float fVec17[16384];
	float fVec18[2];
	float fRec44[2];
	float fRec42[2];
	float fVec19[16384];
	int iConst44;
	float fConst45;
	float fRec79[2];
	float fVec20[2];
	float fRec78[2];
	float fRec43[2];
	float fVec21[16384];
	float fVec22[2];
	float fRec40[2];
	float fRec38[2];
	float fVec23[16384];
	int iConst46;
	float fConst47;
	float fRec81[2];
	float fVec24[2];
	float fRec80[2];
	float fRec39[2];
	float fVec25[16384];
	float fVec26[2];
	float fRec36[2];
	float fRec34[2];
	float fVec27[16384];
	int iConst48;
	float fConst49;
	float fRec83[2];
	float fVec28[2];
	float fRec82[2];
	float fRec35[2];
	float fVec29[16384];
	int iConst50;
	float fConst51;
	float fRec84[2];
	float fVec30[2];
	float fRec33[2];
	float fRec31[2];
	float fVec31[16384];
	int iConst52;
	float fConst53;
	float fRec86[2];
	float fVec32[2];
	float fRec85[2];
	float fRec32[2];
	float fVec33[16384];
	float fVec34[2];
	float fRec29[2];
	float fRec27[2];
	float fVec35[16384];
	int iConst54;
	float fConst55;
	float fRec88[2];
	float fVec36[2];
	float fRec87[2];
	float fRec28[2];
	float fVec37[16384];
	float fVec38[2];
	float fRec25[2];
	float fRec23[2];
	float fVec39[16384];
	int iConst56;
	float fConst57;
	float fRec90[2];
	float fVec40[2];
	float fRec89[2];
	float fRec24[2];
	float fVec41[16384];
	float fVec42[2];
	float fRec21[2];
	float fRec19[2];
	float fVec43[16384];
	int iConst58;
	float fConst59;
	float fRec92[2];
	float fVec44[2];
	float fRec91[2];
	float fRec20[2];
	float fVec45[16384];
	int iConst60;
	float fConst61;
	float fRec93[2];
	float fVec46[2];
	float fRec18[2];
	float fRec16[2];
	float fVec47[16384];
	int iConst62;
	float fConst63;
	float fRec95[2];
	float fVec48[2];
	float fRec94[2];
	float fRec17[2];
	float fVec49[16384];
	float fVec50[2];
	float fRec14[2];
	float fRec12[2];
	float fVec51[16384];
	int iConst64;
	float fConst65;
	float fRec97[2];
	float fVec52[2];
	float fRec96[2];
	float fRec13[2];
	float fVec53[16384];
	float fVec54[2];
	float fRec10[2];
	float fRec8[2];
	float fVec55[16384];
	int iConst66;
	float fConst67;
	float fRec99[2];
	float fVec56[2];
	float fRec98[2];
	float fRec9[2];
	float fVec57[16384];
	float fVec58[2];
	float fRec6[2];
	float fRec4[2];
	float fVec59[16384];
	int iConst68;
	float fConst69;
	float fRec101[2];
	float fVec60[2];
	float fRec100[2];
	float fRec5[2];
	float fRec3[2];
	float fRec1[1024];
	float fRec102[2];
	float fRec2[1024];
	FAUSTFLOAT fHslider7;
	float fRec103[2];
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
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider3 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(0.2f);
	dsp->fHslider5 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1024.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(0.0f);
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
		for (l25 = 0; l25 < 131072; l25 = l25 + 1) {
			dsp->fVec7[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec61[l26] = 0.0f;
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
			dsp->fRec60[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec63[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 131072; l32 = l32 + 1) {
			dsp->fVec8[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec68[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec64[l34] = 0.0f;
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
			dsp->fRec62[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 16384; l39 = l39 + 1) {
			dsp->fVec9[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec69[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fVec10[l41] = 0.0f;
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
			dsp->fRec46[l43] = 0.0f;
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
			dsp->fRec73[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 3; l46 = l46 + 1) {
			dsp->fRec72[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2048; l47 = l47 + 1) {
			dsp->fVec12[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 2; l48 = l48 + 1) {
			dsp->fRec75[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 3; l49 = l49 + 1) {
			dsp->fRec74[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 3; l50 = l50 + 1) {
			dsp->fRec76[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 131072; l51 = l51 + 1) {
			dsp->fVec13[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec71[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 131072; l53 = l53 + 1) {
			dsp->fVec14[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 16384; l54 = l54 + 1) {
			dsp->fVec15[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec77[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fVec16[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec70[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 2; l58 = l58 + 1) {
			dsp->fRec47[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 16384; l59 = l59 + 1) {
			dsp->fVec17[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fVec18[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fRec44[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec42[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 16384; l63 = l63 + 1) {
			dsp->fVec19[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec79[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fVec20[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec78[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec43[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 16384; l68 = l68 + 1) {
			dsp->fVec21[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fVec22[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fRec40[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec38[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 16384; l72 = l72 + 1) {
			dsp->fVec23[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 2; l73 = l73 + 1) {
			dsp->fRec81[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fVec24[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fRec80[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec39[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 16384; l77 = l77 + 1) {
			dsp->fVec25[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 2; l78 = l78 + 1) {
			dsp->fVec26[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec36[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fRec34[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 16384; l81 = l81 + 1) {
			dsp->fVec27[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec83[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 2; l83 = l83 + 1) {
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
			dsp->fRec35[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 16384; l86 = l86 + 1) {
			dsp->fVec29[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec84[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 2; l88 = l88 + 1) {
			dsp->fVec30[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec33[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fRec31[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 16384; l91 = l91 + 1) {
			dsp->fVec31[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec86[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 2; l93 = l93 + 1) {
			dsp->fVec32[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec85[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fRec32[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 16384; l96 = l96 + 1) {
			dsp->fVec33[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fVec34[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 2; l98 = l98 + 1) {
			dsp->fRec29[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fRec27[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 16384; l100 = l100 + 1) {
			dsp->fVec35[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec88[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fVec36[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 2; l103 = l103 + 1) {
			dsp->fRec87[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec28[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 16384; l105 = l105 + 1) {
			dsp->fVec37[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 2; l106 = l106 + 1) {
			dsp->fVec38[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec25[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 2; l108 = l108 + 1) {
			dsp->fRec23[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 16384; l109 = l109 + 1) {
			dsp->fVec39[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 2; l110 = l110 + 1) {
			dsp->fRec90[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 2; l111 = l111 + 1) {
			dsp->fVec40[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fRec89[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 2; l113 = l113 + 1) {
			dsp->fRec24[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 16384; l114 = l114 + 1) {
			dsp->fVec41[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 2; l115 = l115 + 1) {
			dsp->fVec42[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fRec21[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 2; l117 = l117 + 1) {
			dsp->fRec19[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 16384; l118 = l118 + 1) {
			dsp->fVec43[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 2; l119 = l119 + 1) {
			dsp->fRec92[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 2; l120 = l120 + 1) {
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
			dsp->fRec20[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 16384; l123 = l123 + 1) {
			dsp->fVec45[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 2; l124 = l124 + 1) {
			dsp->fRec93[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 2; l125 = l125 + 1) {
			dsp->fVec46[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fRec18[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 2; l127 = l127 + 1) {
			dsp->fRec16[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 16384; l128 = l128 + 1) {
			dsp->fVec47[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 2; l129 = l129 + 1) {
			dsp->fRec95[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 2; l130 = l130 + 1) {
			dsp->fVec48[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 2; l131 = l131 + 1) {
			dsp->fRec94[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 2; l132 = l132 + 1) {
			dsp->fRec17[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 16384; l133 = l133 + 1) {
			dsp->fVec49[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 2; l134 = l134 + 1) {
			dsp->fVec50[l134] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; l135 < 2; l135 = l135 + 1) {
			dsp->fRec14[l135] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; l136 < 2; l136 = l136 + 1) {
			dsp->fRec12[l136] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; l137 < 16384; l137 = l137 + 1) {
			dsp->fVec51[l137] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; l138 < 2; l138 = l138 + 1) {
			dsp->fRec97[l138] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; l139 < 2; l139 = l139 + 1) {
			dsp->fVec52[l139] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; l140 < 2; l140 = l140 + 1) {
			dsp->fRec96[l140] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; l141 < 2; l141 = l141 + 1) {
			dsp->fRec13[l141] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; l142 < 16384; l142 = l142 + 1) {
			dsp->fVec53[l142] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; l143 < 2; l143 = l143 + 1) {
			dsp->fVec54[l143] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; l144 < 2; l144 = l144 + 1) {
			dsp->fRec10[l144] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; l145 < 2; l145 = l145 + 1) {
			dsp->fRec8[l145] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; l146 < 16384; l146 = l146 + 1) {
			dsp->fVec55[l146] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; l147 < 2; l147 = l147 + 1) {
			dsp->fRec99[l147] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; l148 < 2; l148 = l148 + 1) {
			dsp->fVec56[l148] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; l149 < 2; l149 = l149 + 1) {
			dsp->fRec98[l149] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; l150 < 2; l150 = l150 + 1) {
			dsp->fRec9[l150] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; l151 < 16384; l151 = l151 + 1) {
			dsp->fVec57[l151] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; l152 < 2; l152 = l152 + 1) {
			dsp->fVec58[l152] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; l153 < 2; l153 = l153 + 1) {
			dsp->fRec6[l153] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; l154 < 2; l154 = l154 + 1) {
			dsp->fRec4[l154] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; l155 < 16384; l155 = l155 + 1) {
			dsp->fVec59[l155] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; l156 < 2; l156 = l156 + 1) {
			dsp->fRec101[l156] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; l157 < 2; l157 = l157 + 1) {
			dsp->fVec60[l157] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; l158 < 2; l158 = l158 + 1) {
			dsp->fRec100[l158] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; l159 < 2; l159 = l159 + 1) {
			dsp->fRec5[l159] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; l160 < 2; l160 = l160 + 1) {
			dsp->fRec3[l160] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; l161 < 1024; l161 = l161 + 1) {
			dsp->fRec1[l161] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; l162 < 2; l162 = l162 + 1) {
			dsp->fRec102[l162] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; l163 < 1024; l163 = l163 + 1) {
			dsp->fRec2[l163] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; l164 < 2; l164 = l164 + 1) {
			dsp->fRec103[l164] = 0.0f;
		}
	}
}

void instanceConstantsMasterFX(MasterFX* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	dsp->fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 44.1f / dsp->fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	dsp->iConst3 = itbl0MasterFXSIG0[48];
	dsp->fConst4 = 0.0001f * (float)(dsp->iConst3);
	dsp->iConst5 = itbl0MasterFXSIG0[61];
	dsp->fConst6 = 0.0001f * (float)(dsp->iConst5);
	dsp->iConst7 = itbl0MasterFXSIG0[74];
	dsp->fConst8 = 0.0001f * (float)(dsp->iConst7);
	dsp->iConst9 = itbl0MasterFXSIG0[29];
	dsp->fConst10 = 0.0001f * (float)(dsp->iConst9);
	dsp->iConst11 = itbl0MasterFXSIG0[42];
	dsp->fConst12 = 0.0001f * (float)(dsp->iConst11);
	dsp->iConst13 = itbl0MasterFXSIG0[55];
	dsp->fConst14 = 0.0001f * (float)(dsp->iConst13);
	dsp->iConst15 = itbl0MasterFXSIG0[10];
	dsp->fConst16 = 0.0001f * (float)(dsp->iConst15);
	dsp->iConst17 = itbl0MasterFXSIG0[23];
	dsp->fConst18 = 0.0001f * (float)(dsp->iConst17);
	dsp->iConst19 = itbl0MasterFXSIG0[36];
	dsp->fConst20 = 0.0001f * (float)(dsp->iConst19);
	float fConst21 = tanf(31415.926f / dsp->fConst0);
	float fConst22 = 1.0f / fConst21;
	dsp->fConst23 = 1.0f / ((fConst22 + 1.4142135f) / fConst21 + 1.0f);
	dsp->fConst24 = 0.06f * dsp->fConst0 + 1.0f;
	dsp->fConst25 = 0.001f * dsp->fConst0;
	dsp->fConst26 = 1.05f / dsp->fConst0;
	dsp->fConst27 = (fConst22 + -1.4142135f) / fConst21 + 1.0f;
	dsp->fConst28 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst21));
	float fConst29 = tanf(20420.352f / dsp->fConst0);
	float fConst30 = 1.0f / fConst29;
	float fConst31 = (fConst30 + 1.4142135f) / fConst29 + 1.0f;
	dsp->fConst32 = 1.0f / fConst31;
	dsp->fConst33 = (fConst30 + -1.4142135f) / fConst29 + 1.0f;
	dsp->fConst34 = 2.0f * (1.0f - 1.0f / MasterFX_faustpower2_f(fConst29));
	dsp->fConst35 = 0.5011872f / fConst31;
	dsp->fConst36 = 3.1415927f / dsp->fConst0;
	dsp->fConst37 = 1e+01f / dsp->fConst0;
	dsp->iConst38 = itbl0MasterFXSIG0[49];
	dsp->fConst39 = 0.0001f * (float)(dsp->iConst38);
	dsp->fConst40 = 0.8f / dsp->fConst0;
	dsp->fConst41 = 1.2f / dsp->fConst0;
	dsp->iConst42 = itbl0MasterFXSIG0[59];
	dsp->fConst43 = 0.0001f * (float)(dsp->iConst42);
	dsp->iConst44 = itbl0MasterFXSIG0[46];
	dsp->fConst45 = 0.0001f * (float)(dsp->iConst44);
	dsp->iConst46 = itbl0MasterFXSIG0[33];
	dsp->fConst47 = 0.0001f * (float)(dsp->iConst46);
	dsp->iConst48 = itbl0MasterFXSIG0[20];
	dsp->fConst49 = 0.0001f * (float)(dsp->iConst48);
	dsp->iConst50 = itbl0MasterFXSIG0[68];
	dsp->fConst51 = 0.0001f * (float)(dsp->iConst50);
	dsp->iConst52 = itbl0MasterFXSIG0[78];
	dsp->fConst53 = 0.0001f * (float)(dsp->iConst52);
	dsp->iConst54 = itbl0MasterFXSIG0[65];
	dsp->fConst55 = 0.0001f * (float)(dsp->iConst54);
	dsp->iConst56 = itbl0MasterFXSIG0[52];
	dsp->fConst57 = 0.0001f * (float)(dsp->iConst56);
	dsp->iConst58 = itbl0MasterFXSIG0[39];
	dsp->fConst59 = 0.0001f * (float)(dsp->iConst58);
	dsp->iConst60 = itbl0MasterFXSIG0[87];
	dsp->fConst61 = 0.0001f * (float)(dsp->iConst60);
	dsp->iConst62 = itbl0MasterFXSIG0[97];
	dsp->fConst63 = 0.0001f * (float)(dsp->iConst62);
	dsp->iConst64 = itbl0MasterFXSIG0[84];
	dsp->fConst65 = 0.0001f * (float)(dsp->iConst64);
	dsp->iConst66 = itbl0MasterFXSIG0[71];
	dsp->fConst67 = 0.0001f * (float)(dsp->iConst66);
	dsp->iConst68 = itbl0MasterFXSIG0[58];
	dsp->fConst69 = 0.0001f * (float)(dsp->iConst68);
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
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "alt-sel", "26");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "midi", "70");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "chorus-mode", &dsp->fHslider2, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "alt", "15");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "midi", "72");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-fb", &dsp->fHslider5, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "alt", "27");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "midi", "73");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-mix", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "alt", "3");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "midi", "71");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "delay-time", &dsp->fHslider6, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)1024.0f, (FAUSTFLOAT)65536.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "alt", "18");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "midi", "75");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-feedback", &dsp->fHslider3, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "alt", "0");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "midi", "76");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-mix", &dsp->fHslider7, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "alt", "6");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "midi", "74");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "reverb-time", &dsp->fHslider4, (FAUSTFLOAT)0.2f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
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
	float fSlow2 = (float)(dsp->fHslider2);
	float fSlow3 = (float)(fSlow2 == 0.0f);
	float fSlow4 = (float)(fSlow2 == 1.0f);
	float fSlow5 = (float)(fSlow2 == 2.0f);
	float fSlow6 = (float)(fSlow2 == 3.0f);
	float fSlow7 = dsp->fConst1 * (float)(dsp->fHslider3);
	float fSlow8 = dsp->fConst1 * (float)(dsp->fHslider4);
	float fSlow9 = dsp->fConst1 * (float)(dsp->fHslider5);
	float fSlow10 = dsp->fConst1 * (float)(dsp->fHslider6);
	float fSlow11 = dsp->fConst1 * (float)(dsp->fHslider7);
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
			dsp->fRec7[0] = 0.9999f * (dsp->fRec7[1] + (float)(iTemp2 * dsp->iConst3)) + dsp->fConst4;
			float fTemp3 = dsp->fRec7[0] + -1.49999f;
			float fTemp4 = floorf(fTemp3);
			float fTemp5 = fTemp4 + (2.0f - dsp->fRec7[0]);
			float fTemp6 = dsp->fRec7[0] - fTemp4;
			dsp->fVec3[0] = 0.6f;
			float fTemp7 = dsp->fVec3[1] + 0.6f;
			float fTemp8 = 0.5f * fTemp7;
			float fTemp9 = cosf(fTemp8);
			dsp->fRec11[0] = 0.9999f * (dsp->fRec11[1] + (float)(iTemp2 * dsp->iConst5)) + dsp->fConst6;
			float fTemp10 = dsp->fRec11[0] + -1.49999f;
			float fTemp11 = floorf(fTemp10);
			float fTemp12 = fTemp11 + (2.0f - dsp->fRec11[0]);
			float fTemp13 = dsp->fRec11[0] - fTemp11;
			dsp->fRec15[0] = 0.9999f * (dsp->fRec15[1] + (float)(iTemp2 * dsp->iConst7)) + dsp->fConst8;
			float fTemp14 = dsp->fRec15[0] + -1.49999f;
			float fTemp15 = floorf(fTemp14);
			float fTemp16 = fTemp15 + (2.0f - dsp->fRec15[0]);
			float fTemp17 = dsp->fRec15[0] - fTemp15;
			float fTemp18 = sinf(fTemp8);
			float fTemp19 = -0.5f * fTemp7;
			float fTemp20 = cosf(fTemp19);
			dsp->fRec22[0] = 0.9999f * (dsp->fRec22[1] + (float)(iTemp2 * dsp->iConst9)) + dsp->fConst10;
			float fTemp21 = dsp->fRec22[0] + -1.49999f;
			float fTemp22 = floorf(fTemp21);
			float fTemp23 = fTemp22 + (2.0f - dsp->fRec22[0]);
			float fTemp24 = dsp->fRec22[0] - fTemp22;
			dsp->fRec26[0] = 0.9999f * (dsp->fRec26[1] + (float)(iTemp2 * dsp->iConst11)) + dsp->fConst12;
			float fTemp25 = dsp->fRec26[0] + -1.49999f;
			float fTemp26 = floorf(fTemp25);
			float fTemp27 = fTemp26 + (2.0f - dsp->fRec26[0]);
			float fTemp28 = dsp->fRec26[0] - fTemp26;
			dsp->fRec30[0] = 0.9999f * (dsp->fRec30[1] + (float)(iTemp2 * dsp->iConst13)) + dsp->fConst14;
			float fTemp29 = dsp->fRec30[0] + -1.49999f;
			float fTemp30 = floorf(fTemp29);
			float fTemp31 = fTemp30 + (2.0f - dsp->fRec30[0]);
			float fTemp32 = dsp->fRec30[0] - fTemp30;
			float fTemp33 = sinf(fTemp19);
			dsp->fRec37[0] = 0.9999f * (dsp->fRec37[1] + (float)(iTemp2 * dsp->iConst15)) + dsp->fConst16;
			float fTemp34 = dsp->fRec37[0] + -1.49999f;
			float fTemp35 = floorf(fTemp34);
			float fTemp36 = fTemp35 + (2.0f - dsp->fRec37[0]);
			float fTemp37 = dsp->fRec37[0] - fTemp35;
			dsp->fRec41[0] = 0.9999f * (dsp->fRec41[1] + (float)(iTemp2 * dsp->iConst17)) + dsp->fConst18;
			float fTemp38 = dsp->fRec41[0] + -1.49999f;
			float fTemp39 = floorf(fTemp38);
			float fTemp40 = fTemp39 + (2.0f - dsp->fRec41[0]);
			float fTemp41 = dsp->fRec41[0] - fTemp39;
			dsp->fRec45[0] = 0.9999f * (dsp->fRec45[1] + (float)(iTemp2 * dsp->iConst19)) + dsp->fConst20;
			float fTemp42 = dsp->fRec45[0] + -1.49999f;
			float fTemp43 = floorf(fTemp42);
			float fTemp44 = fTemp43 + (2.0f - dsp->fRec45[0]);
			float fTemp45 = dsp->fRec45[0] - fTemp43;
			dsp->fRec49[0] = fSlow1 + dsp->fConst2 * dsp->fRec49[1];
			float fTemp46 = 1.0f - dsp->fRec49[0];
			float fTemp47 = (float)(input1[i0]);
			dsp->fVec4[dsp->IOTA0 & 2047] = fTemp47;
			float fTemp48 = fSlow3 * fTemp47;
			dsp->fRec51[0] = dsp->fConst26 + (dsp->fRec51[1] - floorf(dsp->fConst26 + dsp->fRec51[1]));
			float fTemp49 = sinf(6.2831855f * (dsp->fRec51[0] + (14.323945f - floorf(dsp->fRec51[0] + 14.323945f))));
			float fTemp50 = dsp->fConst25 * (1.225f * fTemp49 + 3.5f);
			int iTemp51 = (int)(fTemp50);
			float fTemp52 = floorf(fTemp50);
			dsp->iVec5[0] = 2;
			dsp->fRec50[0] = dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp51))))) & 2047] * (fTemp52 + (1.0f - fTemp50)) + (fTemp50 - fTemp52) * dsp->fVec4[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp51 + 1))))) & 2047] - dsp->fConst23 * (dsp->fConst27 * dsp->fRec50[2] + dsp->fConst28 * dsp->fRec50[1]);
			float fTemp53 = 2.0f * dsp->fRec50[1];
			float fTemp54 = fTemp47 + dsp->fConst23 * (dsp->fRec50[2] + dsp->fRec50[0] + fTemp53);
			dsp->fVec6[dsp->IOTA0 & 2047] = fTemp54;
			float fTemp55 = dsp->fConst25 * (2.7f * fTemp49 + 6.0f);
			int iTemp56 = (int)(fTemp55);
			int iTemp57 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp56))));
			float fTemp58 = floorf(fTemp55);
			float fTemp59 = fTemp58 + (1.0f - fTemp55);
			float fTemp60 = fTemp55 - fTemp58;
			int iTemp61 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp56 + 1))));
			dsp->fRec52[0] = dsp->fVec4[(dsp->IOTA0 - iTemp57) & 2047] * fTemp59 + fTemp60 * dsp->fVec4[(dsp->IOTA0 - iTemp61) & 2047] - dsp->fConst32 * (dsp->fConst33 * dsp->fRec52[2] + dsp->fConst34 * dsp->fRec52[1]);
			float fTemp62 = 2.0f * dsp->fRec52[1];
			float fTemp63 = 0.5011872f * (fSlow4 * fTemp54 + fSlow5 * (fTemp47 + dsp->fConst32 * (dsp->fRec52[2] + dsp->fRec52[0] + fTemp62)));
			dsp->fRec53[0] = 0.5011872f * (fTemp59 * dsp->fVec6[(dsp->IOTA0 - iTemp57) & 2047] + fTemp60 * dsp->fVec6[(dsp->IOTA0 - iTemp61) & 2047]) - dsp->fConst32 * (dsp->fConst33 * dsp->fRec53[2] + dsp->fConst34 * dsp->fRec53[1]);
			float fTemp64 = 2.0f * dsp->fRec53[1];
			float fTemp65 = fSlow6 * (0.25118864f * fTemp54 + dsp->fConst35 * (dsp->fRec53[2] + dsp->fRec53[0] + fTemp64));
			dsp->fRec54[0] = fSlow7 + dsp->fConst2 * dsp->fRec54[1];
			float fTemp66 = dsp->fRec54[0] + dsp->fRec54[1];
			float fTemp67 = dsp->fConst0 + dsp->fVec0[1];
			float fTemp68 = dsp->fConst36 * (float)(dsp->iVec5[1] + 2);
			float fTemp69 = sinf(fTemp68);
			float fTemp70 = cosf(fTemp68);
			dsp->fRec55[0] = dsp->fRec56[1] * fTemp69 + dsp->fRec55[1] * fTemp70;
			dsp->fRec56[0] = (float)(iTemp2) + dsp->fRec56[1] * fTemp70 - fTemp69 * dsp->fRec55[1];
			float fTemp71 = 5.6689343e-05f * fTemp67 * (dsp->fRec55[0] + 1.0f);
			float fTemp72 = fTemp71 + 8.500005f;
			float fTemp73 = floorf(fTemp72);
			float fTemp74 = fTemp71 + (7.0f - fTemp73);
			float fTemp75 = fTemp71 + (8.0f - fTemp73);
			int iTemp76 = (int)(fTemp72);
			float fTemp77 = fTemp71 + (9.0f - fTemp73);
			float fTemp78 = fTemp71 + (1e+01f - fTemp73);
			float fTemp79 = fTemp78 * fTemp77;
			float fTemp80 = fTemp79 * fTemp75;
			float fTemp81 = (fTemp71 + (6.0f - fTemp73)) * (fTemp74 * (fTemp75 * (0.041666668f * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp76)) + 1)) & 1023] * fTemp77 - 0.16666667f * fTemp78 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 1)) + 1)) & 1023]) + 0.25f * fTemp79 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp80 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp80 * fTemp74 * dsp->fRec2[(dsp->IOTA0 - (min(512, max(0, iTemp76 + 4)) + 1)) & 1023];
			dsp->fVec7[dsp->IOTA0 & 131071] = fTemp81;
			dsp->fRec61[0] = fSlow8 + dsp->fConst2 * dsp->fRec61[1];
			float fTemp82 = floorf(fminf(65533.0f, dsp->fConst0 * dsp->fRec61[0]));
			float fTemp83 = ((dsp->fRec57[1] != 0.0f) ? (((dsp->fRec58[1] > 0.0f) & (dsp->fRec58[1] < 1.0f)) ? dsp->fRec57[1] : 0.0f) : (((dsp->fRec58[1] == 0.0f) & (fTemp82 != dsp->fRec59[1])) ? 4.5351473e-05f : (((dsp->fRec58[1] == 1.0f) & (fTemp82 != dsp->fRec60[1])) ? -4.5351473e-05f : 0.0f)));
			dsp->fRec57[0] = fTemp83;
			dsp->fRec58[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec58[1] + fTemp83));
			dsp->fRec59[0] = (((dsp->fRec58[1] >= 1.0f) & (dsp->fRec60[1] != fTemp82)) ? fTemp82 : dsp->fRec59[1]);
			dsp->fRec60[0] = (((dsp->fRec58[1] <= 0.0f) & (dsp->fRec59[1] != fTemp82)) ? fTemp82 : dsp->fRec60[1]);
			int iTemp84 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec59[0])));
			float fTemp85 = dsp->fVec7[(dsp->IOTA0 - iTemp84) & 131071];
			int iTemp86 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec60[0])));
			dsp->fRec63[0] = fSlow9 + dsp->fConst2 * dsp->fRec63[1];
			float fTemp87 = fTemp65 + fTemp63 + dsp->fRec63[0] * dsp->fRec62[1] + fTemp48;
			dsp->fVec8[dsp->IOTA0 & 131071] = fTemp87;
			dsp->fRec68[0] = fSlow10 + dsp->fConst2 * dsp->fRec68[1];
			float fTemp88 = ((dsp->fRec64[1] != 0.0f) ? (((dsp->fRec65[1] > 0.0f) & (dsp->fRec65[1] < 1.0f)) ? dsp->fRec64[1] : 0.0f) : (((dsp->fRec65[1] == 0.0f) & (dsp->fRec68[0] != dsp->fRec66[1])) ? dsp->fConst37 : (((dsp->fRec65[1] == 1.0f) & (dsp->fRec68[0] != dsp->fRec67[1])) ? -dsp->fConst37 : 0.0f)));
			dsp->fRec64[0] = fTemp88;
			dsp->fRec65[0] = fmaxf(0.0f, fminf(1.0f, dsp->fRec65[1] + fTemp88));
			dsp->fRec66[0] = (((dsp->fRec65[1] >= 1.0f) & (dsp->fRec67[1] != dsp->fRec68[0])) ? dsp->fRec68[0] : dsp->fRec66[1]);
			dsp->fRec67[0] = (((dsp->fRec65[1] <= 0.0f) & (dsp->fRec66[1] != dsp->fRec68[0])) ? dsp->fRec68[0] : dsp->fRec67[1]);
			int iTemp89 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec66[0])));
			float fTemp90 = dsp->fVec8[(dsp->IOTA0 - iTemp89) & 131071];
			int iTemp91 = (int)(fminf(65536.0f, fmaxf(0.0f, dsp->fRec67[0])));
			dsp->fRec62[0] = fTemp90 + dsp->fRec65[0] * (dsp->fVec8[(dsp->IOTA0 - iTemp91) & 131071] - fTemp90);
			float fTemp92 = dsp->fRec49[0] * dsp->fRec62[0];
			float fTemp93 = fTemp46 * (fTemp48 + fTemp63 + fTemp65) + 0.5f * fTemp66 * (fTemp85 + dsp->fRec58[0] * (dsp->fVec7[(dsp->IOTA0 - iTemp86) & 131071] - fTemp85)) + fTemp92;
			float fTemp94 = fTemp9 * fTemp93 - fTemp18 * dsp->fRec35[1];
			float fTemp95 = fTemp9 * fTemp94 - fTemp18 * dsp->fRec39[1];
			float fTemp96 = fTemp9 * fTemp95 - fTemp18 * dsp->fRec43[1];
			dsp->fVec9[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec47[1] - fTemp9 * fTemp96;
			dsp->fRec69[0] = 0.9999f * (dsp->fRec69[1] + (float)(iTemp2 * dsp->iConst38)) + dsp->fConst39;
			float fTemp97 = dsp->fRec69[0] + -1.49999f;
			float fTemp98 = dsp->fVec9[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp97)))) & 16383];
			dsp->fVec10[0] = fTemp98;
			float fTemp99 = floorf(fTemp97);
			dsp->fRec48[0] = dsp->fVec10[1] + (fTemp99 + (2.0f - dsp->fRec69[0])) * (fTemp98 - dsp->fRec48[1]) / (dsp->fRec69[0] - fTemp99);
			dsp->fRec46[0] = dsp->fRec48[0];
			float fTemp100 = (float)(input0[i0]);
			dsp->fVec11[dsp->IOTA0 & 2047] = fTemp100;
			dsp->fRec73[0] = dsp->fConst40 + (dsp->fRec73[1] - floorf(dsp->fConst40 + dsp->fRec73[1]));
			float fTemp101 = dsp->fConst25 * (1.225f * sinf(6.2831855f * (dsp->fRec73[0] - floorf(dsp->fRec73[0]))) + 3.5f);
			int iTemp102 = (int)(fTemp101);
			float fTemp103 = floorf(fTemp101);
			dsp->fRec72[0] = dsp->fVec11[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp102))))) & 2047] * (fTemp103 + (1.0f - fTemp101)) + (fTemp101 - fTemp103) * dsp->fVec11[(dsp->IOTA0 - (int)(fminf(dsp->fConst24, (float)(max(0, iTemp102 + 1))))) & 2047] - dsp->fConst23 * (dsp->fConst27 * dsp->fRec72[2] + dsp->fConst28 * dsp->fRec72[1]);
			float fTemp104 = 2.0f * dsp->fRec72[1];
			float fTemp105 = fTemp100 + dsp->fConst23 * (dsp->fRec72[2] + dsp->fRec72[0] + fTemp104);
			dsp->fVec12[dsp->IOTA0 & 2047] = fTemp105;
			dsp->fRec75[0] = dsp->fConst41 + (dsp->fRec75[1] - floorf(dsp->fConst41 + dsp->fRec75[1]));
			float fTemp106 = dsp->fConst25 * (2.7f * sinf(6.2831855f * (dsp->fRec75[0] - floorf(dsp->fRec75[0]))) + 6.0f);
			float fTemp107 = floorf(fTemp106);
			float fTemp108 = fTemp107 + (1.0f - fTemp106);
			int iTemp109 = (int)(fTemp106);
			int iTemp110 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp109))));
			float fTemp111 = fTemp106 - fTemp107;
			int iTemp112 = (int)(fminf(dsp->fConst24, (float)(max(0, iTemp109 + 1))));
			dsp->fRec74[0] = 0.5011872f * (fTemp108 * dsp->fVec12[(dsp->IOTA0 - iTemp110) & 2047] + fTemp111 * dsp->fVec12[(dsp->IOTA0 - iTemp112) & 2047]) - dsp->fConst32 * (dsp->fConst33 * dsp->fRec74[2] + dsp->fConst34 * dsp->fRec74[1]);
			float fTemp113 = 2.0f * dsp->fRec74[1];
			float fTemp114 = fSlow6 * (0.25118864f * fTemp105 + dsp->fConst35 * (dsp->fRec74[2] + dsp->fRec74[0] + fTemp113));
			dsp->fRec76[0] = dsp->fVec11[(dsp->IOTA0 - iTemp110) & 2047] * fTemp108 + fTemp111 * dsp->fVec11[(dsp->IOTA0 - iTemp112) & 2047] - dsp->fConst32 * (dsp->fConst33 * dsp->fRec76[2] + dsp->fConst34 * dsp->fRec76[1]);
			float fTemp115 = 2.0f * dsp->fRec76[1];
			float fTemp116 = 0.5011872f * (fSlow4 * fTemp105 + fSlow5 * (fTemp100 + dsp->fConst32 * (dsp->fRec76[2] + dsp->fRec76[0] + fTemp115)));
			float fTemp117 = fSlow3 * fTemp100;
			float fTemp118 = fTemp114 + fTemp116 + dsp->fRec63[0] * dsp->fRec71[1] + fTemp117;
			dsp->fVec13[dsp->IOTA0 & 131071] = fTemp118;
			float fTemp119 = dsp->fVec13[(dsp->IOTA0 - iTemp89) & 131071];
			dsp->fRec71[0] = fTemp119 + dsp->fRec65[0] * (dsp->fVec13[(dsp->IOTA0 - iTemp91) & 131071] - fTemp119);
			float fTemp120 = dsp->fRec71[0] * dsp->fRec49[0];
			float fTemp121 = 5.6689343e-05f * fTemp67 * (dsp->fRec56[0] + 1.0f);
			float fTemp122 = fTemp121 + 8.500005f;
			float fTemp123 = floorf(fTemp122);
			float fTemp124 = fTemp121 + (7.0f - fTemp123);
			float fTemp125 = fTemp121 + (8.0f - fTemp123);
			int iTemp126 = (int)(fTemp122);
			float fTemp127 = fTemp121 + (9.0f - fTemp123);
			float fTemp128 = fTemp121 + (1e+01f - fTemp123);
			float fTemp129 = fTemp128 * fTemp127;
			float fTemp130 = fTemp129 * fTemp125;
			float fTemp131 = (fTemp121 + (6.0f - fTemp123)) * (fTemp124 * (fTemp125 * (0.041666668f * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp126)) + 1)) & 1023] * fTemp127 - 0.16666667f * fTemp128 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp126 + 1)) + 1)) & 1023]) + 0.25f * fTemp129 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp126 + 2)) + 1)) & 1023]) - 0.16666667f * fTemp130 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp126 + 3)) + 1)) & 1023]) + 0.041666668f * fTemp130 * fTemp124 * dsp->fRec1[(dsp->IOTA0 - (min(512, max(0, iTemp126 + 4)) + 1)) & 1023];
			dsp->fVec14[dsp->IOTA0 & 131071] = fTemp131;
			float fTemp132 = dsp->fVec14[(dsp->IOTA0 - iTemp84) & 131071];
			float fTemp133 = fTemp120 + 0.5f * (fTemp132 + dsp->fRec58[0] * (dsp->fVec14[(dsp->IOTA0 - iTemp86) & 131071] - fTemp132)) * fTemp66 + fTemp46 * (fTemp117 + fTemp116 + fTemp114);
			float fTemp134 = fTemp133 * fTemp9 - fTemp18 * dsp->fRec34[1];
			float fTemp135 = fTemp9 * fTemp134 - fTemp18 * dsp->fRec38[1];
			float fTemp136 = fTemp9 * fTemp135 - fTemp18 * dsp->fRec42[1];
			dsp->fVec15[dsp->IOTA0 & 16383] = fTemp9 * fTemp136 - fTemp18 * dsp->fRec46[1];
			dsp->fRec77[0] = 0.9999f * (dsp->fRec77[1] + (float)(iTemp2 * dsp->iConst42)) + dsp->fConst43;
			float fTemp137 = dsp->fRec77[0] + -1.49999f;
			float fTemp138 = dsp->fVec15[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp137)))) & 16383];
			dsp->fVec16[0] = fTemp138;
			float fTemp139 = floorf(fTemp137);
			dsp->fRec70[0] = dsp->fVec16[1] - (fTemp139 + (2.0f - dsp->fRec77[0])) * (dsp->fRec70[1] - fTemp138) / (dsp->fRec77[0] - fTemp139);
			dsp->fRec47[0] = dsp->fRec70[0];
			dsp->fVec17[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec47[1] + fTemp18 * fTemp96;
			float fTemp140 = dsp->fVec17[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp42)))) & 16383];
			dsp->fVec18[0] = fTemp140;
			dsp->fRec44[0] = -(dsp->fRec44[1] * fTemp44 / fTemp45 + fTemp44 * fTemp140 / fTemp45 + dsp->fVec18[1]);
			dsp->fRec42[0] = dsp->fRec44[0];
			dsp->fVec19[dsp->IOTA0 & 16383] = dsp->fRec46[1] * fTemp9 + fTemp18 * fTemp136;
			dsp->fRec79[0] = 0.9999f * (dsp->fRec79[1] + (float)(iTemp2 * dsp->iConst44)) + dsp->fConst45;
			float fTemp141 = dsp->fRec79[0] + -1.49999f;
			float fTemp142 = dsp->fVec19[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp141)))) & 16383];
			dsp->fVec20[0] = fTemp142;
			float fTemp143 = floorf(fTemp141);
			dsp->fRec78[0] = dsp->fVec20[1] - (fTemp143 + (2.0f - dsp->fRec79[0])) * (dsp->fRec78[1] - fTemp142) / (dsp->fRec79[0] - fTemp143);
			dsp->fRec43[0] = dsp->fRec78[0];
			dsp->fVec21[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec43[1] + fTemp18 * fTemp95;
			float fTemp144 = dsp->fVec21[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp38)))) & 16383];
			dsp->fVec22[0] = fTemp144;
			dsp->fRec40[0] = -(dsp->fRec40[1] * fTemp40 / fTemp41 + fTemp40 * fTemp144 / fTemp41 + dsp->fVec22[1]);
			dsp->fRec38[0] = dsp->fRec40[0];
			dsp->fVec23[dsp->IOTA0 & 16383] = dsp->fRec42[1] * fTemp9 + fTemp18 * fTemp135;
			dsp->fRec81[0] = 0.9999f * (dsp->fRec81[1] + (float)(iTemp2 * dsp->iConst46)) + dsp->fConst47;
			float fTemp145 = dsp->fRec81[0] + -1.49999f;
			float fTemp146 = dsp->fVec23[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp145)))) & 16383];
			dsp->fVec24[0] = fTemp146;
			float fTemp147 = floorf(fTemp145);
			dsp->fRec80[0] = dsp->fVec24[1] - (fTemp147 + (2.0f - dsp->fRec81[0])) * (dsp->fRec80[1] - fTemp146) / (dsp->fRec81[0] - fTemp147);
			dsp->fRec39[0] = dsp->fRec80[0];
			dsp->fVec25[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec39[1] + fTemp18 * fTemp94;
			float fTemp148 = dsp->fVec25[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp34)))) & 16383];
			dsp->fVec26[0] = fTemp148;
			dsp->fRec36[0] = -(dsp->fRec36[1] * fTemp36 / fTemp37 + fTemp36 * fTemp148 / fTemp37 + dsp->fVec26[1]);
			dsp->fRec34[0] = dsp->fRec36[0];
			dsp->fVec27[dsp->IOTA0 & 16383] = dsp->fRec38[1] * fTemp9 + fTemp18 * fTemp134;
			dsp->fRec83[0] = 0.9999f * (dsp->fRec83[1] + (float)(iTemp2 * dsp->iConst48)) + dsp->fConst49;
			float fTemp149 = dsp->fRec83[0] + -1.49999f;
			float fTemp150 = dsp->fVec27[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp149)))) & 16383];
			dsp->fVec28[0] = fTemp150;
			float fTemp151 = floorf(fTemp149);
			dsp->fRec82[0] = dsp->fVec28[1] - (fTemp151 + (2.0f - dsp->fRec83[0])) * (dsp->fRec82[1] - fTemp150) / (dsp->fRec83[0] - fTemp151);
			dsp->fRec35[0] = dsp->fRec82[0];
			float fTemp152 = fTemp9 * dsp->fRec35[1] + fTemp18 * fTemp93;
			float fTemp153 = fTemp20 * fTemp152 - fTemp33 * dsp->fRec20[1];
			float fTemp154 = fTemp20 * fTemp153 - fTemp33 * dsp->fRec24[1];
			float fTemp155 = fTemp20 * fTemp154 - fTemp33 * dsp->fRec28[1];
			dsp->fVec29[dsp->IOTA0 & 16383] = fTemp33 * dsp->fRec32[1] - fTemp20 * fTemp155;
			dsp->fRec84[0] = 0.9999f * (dsp->fRec84[1] + (float)(iTemp2 * dsp->iConst50)) + dsp->fConst51;
			float fTemp156 = dsp->fRec84[0] + -1.49999f;
			float fTemp157 = dsp->fVec29[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp156)))) & 16383];
			dsp->fVec30[0] = fTemp157;
			float fTemp158 = floorf(fTemp156);
			dsp->fRec33[0] = dsp->fVec30[1] - (fTemp158 + (2.0f - dsp->fRec84[0])) * (dsp->fRec33[1] - fTemp157) / (dsp->fRec84[0] - fTemp158);
			dsp->fRec31[0] = dsp->fRec33[0];
			float fTemp159 = dsp->fRec34[1] * fTemp9 + fTemp18 * fTemp133;
			float fTemp160 = fTemp159 * fTemp20 - fTemp33 * dsp->fRec19[1];
			float fTemp161 = fTemp20 * fTemp160 - fTemp33 * dsp->fRec23[1];
			float fTemp162 = fTemp20 * fTemp161 - fTemp33 * dsp->fRec27[1];
			dsp->fVec31[dsp->IOTA0 & 16383] = fTemp20 * fTemp162 - dsp->fRec31[1] * fTemp33;
			dsp->fRec86[0] = 0.9999f * (dsp->fRec86[1] + (float)(iTemp2 * dsp->iConst52)) + dsp->fConst53;
			float fTemp163 = dsp->fRec86[0] + -1.49999f;
			float fTemp164 = dsp->fVec31[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp163)))) & 16383];
			dsp->fVec32[0] = fTemp164;
			float fTemp165 = floorf(fTemp163);
			dsp->fRec85[0] = dsp->fVec32[1] - (fTemp165 + (2.0f - dsp->fRec86[0])) * (dsp->fRec85[1] - fTemp164) / (dsp->fRec86[0] - fTemp165);
			dsp->fRec32[0] = dsp->fRec85[0];
			dsp->fVec33[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec32[1] + fTemp33 * fTemp155;
			float fTemp166 = dsp->fVec33[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp29)))) & 16383];
			dsp->fVec34[0] = fTemp166;
			dsp->fRec29[0] = -(dsp->fRec29[1] * fTemp31 / fTemp32 + fTemp31 * fTemp166 / fTemp32 + dsp->fVec34[1]);
			dsp->fRec27[0] = dsp->fRec29[0];
			dsp->fVec35[dsp->IOTA0 & 16383] = dsp->fRec31[1] * fTemp20 + fTemp33 * fTemp162;
			dsp->fRec88[0] = 0.9999f * (dsp->fRec88[1] + (float)(iTemp2 * dsp->iConst54)) + dsp->fConst55;
			float fTemp167 = dsp->fRec88[0] + -1.49999f;
			float fTemp168 = dsp->fVec35[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp167)))) & 16383];
			dsp->fVec36[0] = fTemp168;
			float fTemp169 = floorf(fTemp167);
			dsp->fRec87[0] = dsp->fVec36[1] - (fTemp169 + (2.0f - dsp->fRec88[0])) * (dsp->fRec87[1] - fTemp168) / (dsp->fRec88[0] - fTemp169);
			dsp->fRec28[0] = dsp->fRec87[0];
			dsp->fVec37[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec28[1] + fTemp33 * fTemp154;
			float fTemp170 = dsp->fVec37[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp25)))) & 16383];
			dsp->fVec38[0] = fTemp170;
			dsp->fRec25[0] = -(dsp->fRec25[1] * fTemp27 / fTemp28 + fTemp27 * fTemp170 / fTemp28 + dsp->fVec38[1]);
			dsp->fRec23[0] = dsp->fRec25[0];
			dsp->fVec39[dsp->IOTA0 & 16383] = dsp->fRec27[1] * fTemp20 + fTemp33 * fTemp161;
			dsp->fRec90[0] = 0.9999f * (dsp->fRec90[1] + (float)(iTemp2 * dsp->iConst56)) + dsp->fConst57;
			float fTemp171 = dsp->fRec90[0] + -1.49999f;
			float fTemp172 = dsp->fVec39[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp171)))) & 16383];
			dsp->fVec40[0] = fTemp172;
			float fTemp173 = floorf(fTemp171);
			dsp->fRec89[0] = dsp->fVec40[1] - (fTemp173 + (2.0f - dsp->fRec90[0])) * (dsp->fRec89[1] - fTemp172) / (dsp->fRec90[0] - fTemp173);
			dsp->fRec24[0] = dsp->fRec89[0];
			dsp->fVec41[dsp->IOTA0 & 16383] = fTemp20 * dsp->fRec24[1] + fTemp33 * fTemp153;
			float fTemp174 = dsp->fVec41[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp21)))) & 16383];
			dsp->fVec42[0] = fTemp174;
			dsp->fRec21[0] = -(dsp->fRec21[1] * fTemp23 / fTemp24 + fTemp23 * fTemp174 / fTemp24 + dsp->fVec42[1]);
			dsp->fRec19[0] = dsp->fRec21[0];
			dsp->fVec43[dsp->IOTA0 & 16383] = dsp->fRec23[1] * fTemp20 + fTemp33 * fTemp160;
			dsp->fRec92[0] = 0.9999f * (dsp->fRec92[1] + (float)(iTemp2 * dsp->iConst58)) + dsp->fConst59;
			float fTemp175 = dsp->fRec92[0] + -1.49999f;
			float fTemp176 = dsp->fVec43[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp175)))) & 16383];
			dsp->fVec44[0] = fTemp176;
			float fTemp177 = floorf(fTemp175);
			dsp->fRec91[0] = dsp->fVec44[1] - (fTemp177 + (2.0f - dsp->fRec92[0])) * (dsp->fRec91[1] - fTemp176) / (dsp->fRec92[0] - fTemp177);
			dsp->fRec20[0] = dsp->fRec91[0];
			float fTemp178 = fTemp20 * dsp->fRec20[1] + fTemp33 * fTemp152;
			float fTemp179 = fTemp9 * fTemp178 - fTemp18 * dsp->fRec5[1];
			float fTemp180 = fTemp9 * fTemp179 - fTemp18 * dsp->fRec9[1];
			float fTemp181 = fTemp9 * fTemp180 - fTemp18 * dsp->fRec13[1];
			dsp->fVec45[dsp->IOTA0 & 16383] = fTemp18 * dsp->fRec17[1] - fTemp9 * fTemp181;
			dsp->fRec93[0] = 0.9999f * ((float)(dsp->iConst60 * iTemp2) + dsp->fRec93[1]) + dsp->fConst61;
			float fTemp182 = dsp->fRec93[0] + -1.49999f;
			float fTemp183 = dsp->fVec45[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp182)))) & 16383];
			dsp->fVec46[0] = fTemp183;
			float fTemp184 = floorf(fTemp182);
			dsp->fRec18[0] = dsp->fVec46[1] - (fTemp184 + (2.0f - dsp->fRec93[0])) * (dsp->fRec18[1] - fTemp183) / (dsp->fRec93[0] - fTemp184);
			dsp->fRec16[0] = dsp->fRec18[0];
			float fTemp185 = dsp->fRec19[1] * fTemp20 + fTemp33 * fTemp159;
			float fTemp186 = fTemp9 * fTemp185 - fTemp18 * dsp->fRec4[1];
			float fTemp187 = fTemp9 * fTemp186 - fTemp18 * dsp->fRec8[1];
			float fTemp188 = fTemp9 * fTemp187 - fTemp18 * dsp->fRec12[1];
			dsp->fVec47[dsp->IOTA0 & 16383] = fTemp9 * fTemp188 - dsp->fRec16[1] * fTemp18;
			dsp->fRec95[0] = 0.9999f * (dsp->fRec95[1] + (float)(iTemp2 * dsp->iConst62)) + dsp->fConst63;
			float fTemp189 = dsp->fRec95[0] + -1.49999f;
			float fTemp190 = dsp->fVec47[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp189)))) & 16383];
			dsp->fVec48[0] = fTemp190;
			float fTemp191 = floorf(fTemp189);
			dsp->fRec94[0] = dsp->fVec48[1] - (fTemp191 + (2.0f - dsp->fRec95[0])) * (dsp->fRec94[1] - fTemp190) / (dsp->fRec95[0] - fTemp191);
			dsp->fRec17[0] = dsp->fRec94[0];
			dsp->fVec49[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec17[1] + fTemp18 * fTemp181;
			float fTemp192 = dsp->fVec49[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp14)))) & 16383];
			dsp->fVec50[0] = fTemp192;
			dsp->fRec14[0] = -(dsp->fRec14[1] * fTemp16 / fTemp17 + fTemp16 * fTemp192 / fTemp17 + dsp->fVec50[1]);
			dsp->fRec12[0] = dsp->fRec14[0];
			dsp->fVec51[dsp->IOTA0 & 16383] = dsp->fRec16[1] * fTemp9 + fTemp18 * fTemp188;
			dsp->fRec97[0] = 0.9999f * (dsp->fRec97[1] + (float)(iTemp2 * dsp->iConst64)) + dsp->fConst65;
			float fTemp193 = dsp->fRec97[0] + -1.49999f;
			float fTemp194 = dsp->fVec51[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp193)))) & 16383];
			dsp->fVec52[0] = fTemp194;
			float fTemp195 = floorf(fTemp193);
			dsp->fRec96[0] = dsp->fVec52[1] - (fTemp195 + (2.0f - dsp->fRec97[0])) * (dsp->fRec96[1] - fTemp194) / (dsp->fRec97[0] - fTemp195);
			dsp->fRec13[0] = dsp->fRec96[0];
			dsp->fVec53[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec13[1] + fTemp18 * fTemp180;
			float fTemp196 = dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp10)))) & 16383];
			dsp->fVec54[0] = fTemp196;
			dsp->fRec10[0] = -(dsp->fRec10[1] * fTemp12 / fTemp13 + fTemp12 * fTemp196 / fTemp13 + dsp->fVec54[1]);
			dsp->fRec8[0] = dsp->fRec10[0];
			dsp->fVec55[dsp->IOTA0 & 16383] = dsp->fRec12[1] * fTemp9 + fTemp18 * fTemp187;
			dsp->fRec99[0] = 0.9999f * (dsp->fRec99[1] + (float)(iTemp2 * dsp->iConst66)) + dsp->fConst67;
			float fTemp197 = dsp->fRec99[0] + -1.49999f;
			float fTemp198 = dsp->fVec55[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp197)))) & 16383];
			dsp->fVec56[0] = fTemp198;
			float fTemp199 = floorf(fTemp197);
			dsp->fRec98[0] = dsp->fVec56[1] - (fTemp199 + (2.0f - dsp->fRec99[0])) * (dsp->fRec98[1] - fTemp198) / (dsp->fRec99[0] - fTemp199);
			dsp->fRec9[0] = dsp->fRec98[0];
			dsp->fVec57[dsp->IOTA0 & 16383] = fTemp9 * dsp->fRec9[1] + fTemp18 * fTemp179;
			float fTemp200 = dsp->fVec57[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp3)))) & 16383];
			dsp->fVec58[0] = fTemp200;
			dsp->fRec6[0] = -(dsp->fRec6[1] * fTemp5 / fTemp6 + fTemp5 * fTemp200 / fTemp6 + dsp->fVec58[1]);
			dsp->fRec4[0] = dsp->fRec6[0];
			dsp->fVec59[dsp->IOTA0 & 16383] = dsp->fRec8[1] * fTemp9 + fTemp18 * fTemp186;
			dsp->fRec101[0] = 0.9999f * (dsp->fRec101[1] + (float)(iTemp2 * dsp->iConst68)) + dsp->fConst69;
			float fTemp201 = dsp->fRec101[0] + -1.49999f;
			float fTemp202 = dsp->fVec59[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp201)))) & 16383];
			dsp->fVec60[0] = fTemp202;
			float fTemp203 = floorf(fTemp201);
			dsp->fRec100[0] = dsp->fVec60[1] - (fTemp203 + (2.0f - dsp->fRec101[0])) * (dsp->fRec100[1] - fTemp202) / (dsp->fRec101[0] - fTemp203);
			dsp->fRec5[0] = dsp->fRec100[0];
			dsp->fRec3[0] = fTemp1 * (dsp->fRec4[1] * fTemp9 + fTemp18 * fTemp185) + 0.5f * fTemp0 * dsp->fRec3[1];
			dsp->fRec1[dsp->IOTA0 & 1023] = dsp->fRec3[0];
			dsp->fRec102[0] = fTemp1 * (fTemp9 * dsp->fRec5[1] + fTemp18 * fTemp178) + 0.5f * fTemp0 * dsp->fRec102[1];
			dsp->fRec2[dsp->IOTA0 & 1023] = dsp->fRec102[0];
			dsp->fRec103[0] = fSlow11 + dsp->fConst2 * dsp->fRec103[1];
			float fTemp204 = 1.0f - dsp->fRec103[0];
			float fTemp205 = fTemp100 + dsp->fConst23 * (dsp->fRec72[0] + dsp->fRec72[2] + fTemp104);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (dsp->fRec1[dsp->IOTA0 & 1023] * dsp->fRec103[0] + fTemp204 * (fTemp120 + fTemp46 * (fTemp117 + 0.5011872f * (fSlow4 * fTemp205 + fSlow5 * (fTemp100 + dsp->fConst32 * (dsp->fRec76[0] + dsp->fRec76[2] + fTemp115))) + fSlow6 * (0.25118864f * fTemp205 + dsp->fConst35 * (dsp->fRec74[0] + dsp->fRec74[2] + fTemp113))))));
			float fTemp206 = fTemp47 + dsp->fConst23 * (dsp->fRec50[0] + dsp->fRec50[2] + fTemp53);
			output1[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (dsp->fRec103[0] * dsp->fRec2[dsp->IOTA0 & 1023] + fTemp204 * (fTemp92 + fTemp46 * (fTemp48 + 0.5011872f * (fSlow4 * fTemp206 + fSlow5 * (fTemp47 + dsp->fConst32 * (dsp->fRec52[0] + dsp->fRec52[2] + fTemp62))) + fSlow6 * (0.25118864f * fTemp206 + dsp->fConst35 * (dsp->fRec53[0] + dsp->fRec53[2] + fTemp64))))));
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
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fRec72[2] = dsp->fRec72[1];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec74[2] = dsp->fRec74[1];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fRec76[2] = dsp->fRec76[1];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fVec22[1] = dsp->fVec22[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fVec24[1] = dsp->fVec24[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fVec46[1] = dsp->fVec46[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fVec48[1] = dsp->fVec48[0];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fVec50[1] = dsp->fVec50[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fVec52[1] = dsp->fVec52[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fVec54[1] = dsp->fVec54[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fVec56[1] = dsp->fVec56[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec58[1] = dsp->fVec58[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fVec60[1] = dsp->fVec60[0];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec103[1] = dsp->fRec103[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
