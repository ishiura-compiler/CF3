#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = -29;
volatile int64_t x11 = INT64_MIN;
static volatile int64_t x14 = INT64_MIN;
int16_t x17 = 6952;
uint64_t x20 = 876732472198081777LLU;
static volatile int64_t x25 = -46563835554676LL;
int32_t x29 = INT32_MAX;
static int64_t t7 = -1LL;
uint64_t t10 = 8777579788123LLU;
int8_t x49 = 10;
static volatile uint8_t x50 = 3U;
int32_t t12 = 10213;
int32_t x56 = -42957;
static volatile int8_t x67 = INT8_MAX;
static int64_t t15 = INT64_MIN;
uint16_t x69 = UINT16_MAX;
volatile uint64_t t17 = 123969184615911LLU;
uint8_t x80 = 19U;
uint8_t x82 = 88U;
int64_t x83 = 934733283934LL;
volatile uint32_t x85 = UINT32_MAX;
volatile uint32_t t20 = 4414810U;
static volatile int64_t x92 = INT64_MIN;
int32_t x99 = -3;
static uint64_t x100 = 1LLU;
int64_t x106 = -729LL;
int16_t x111 = -1;
uint8_t x114 = UINT8_MAX;
uint32_t x116 = 1756U;
int16_t x118 = INT16_MAX;
int32_t x119 = -1;
static int16_t x123 = -483;
uint32_t x127 = 2183U;
int64_t x128 = 39787950LL;
uint16_t x139 = UINT16_MAX;
int32_t x140 = INT32_MIN;
int64_t x142 = INT64_MIN;
volatile int64_t t35 = -257866449814297LL;
static uint64_t x149 = 12LLU;
volatile int32_t x153 = -1;
uint16_t x156 = 14U;
static int16_t x157 = -12531;
int16_t x164 = INT16_MAX;
int32_t x168 = INT32_MIN;
static uint8_t x175 = UINT8_MAX;
volatile int64_t t42 = 5621072916087694LL;
static int32_t x178 = INT32_MAX;
volatile int16_t x180 = INT16_MIN;
static volatile int64_t t44 = -97894LL;
int64_t x191 = INT64_MIN;
static volatile int16_t x199 = -3;
static int8_t x201 = INT8_MIN;
int8_t x204 = INT8_MIN;
uint32_t x207 = UINT32_MAX;
int32_t x211 = -304240597;
int32_t x219 = INT32_MIN;
volatile uint32_t t52 = 3723042U;
int64_t x224 = -1LL;
int64_t t53 = -1532261454290609LL;
uint32_t x225 = 5010U;
int32_t x227 = INT32_MAX;
int16_t x236 = -1;
static int64_t t56 = -21315752287945375LL;
int16_t x239 = INT16_MIN;
volatile uint64_t x242 = UINT64_MAX;
volatile uint64_t t58 = 1205139LLU;
int8_t x246 = 28;
int16_t x249 = -1;
int64_t t61 = 64LL;
int16_t x264 = -47;
int16_t x265 = INT16_MIN;
volatile int16_t x271 = -1;
uint8_t x289 = UINT8_MAX;
volatile int64_t t72 = -3071920203806LL;
int32_t x301 = INT32_MIN;
int64_t t73 = -1789LL;
volatile uint32_t x310 = 1792U;
int32_t x313 = 24863380;
int8_t x319 = -1;
static int32_t x322 = INT32_MIN;
int8_t x326 = INT8_MIN;
int8_t x334 = -1;
uint8_t x342 = 3U;
uint16_t x348 = UINT16_MAX;
uint32_t x355 = UINT32_MAX;
volatile int8_t x356 = INT8_MAX;
uint64_t t87 = 3049651061377423920LLU;
int16_t x371 = 0;
uint8_t x376 = 18U;
volatile int16_t x377 = INT16_MIN;
int64_t x379 = INT64_MIN;
int8_t x382 = INT8_MIN;
int32_t t93 = 291705051;
int64_t t94 = -115LL;
volatile int32_t t95 = 4530;
int8_t x398 = INT8_MIN;
uint64_t x402 = 294226LLU;
uint8_t x410 = 0U;
uint64_t x411 = 585LLU;
static uint16_t x412 = 4U;


void f0(void) {
	volatile int64_t x1 = 16379LL;
	int8_t x2 = INT8_MIN;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = 174524455644921LL;
	volatile int64_t t0 = 6202016921641LL;

	t0 = (x1^(x2|(x3/x4)));

	if (t0 != -16261LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = INT8_MIN;
	volatile uint64_t t1 = 1494104104LLU;

	t1 = (x5^(x6|(x7/x8)));

	if (t1 != 28LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 138989692563649633LL;
	int64_t x10 = INT64_MIN;
	static int32_t x12 = INT32_MAX;
	volatile int64_t t2 = 61934486LL;

	t2 = (x9^(x10|(x11/x12)));

	if (t2 != -138989688268682337LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 1U;
	volatile int8_t x15 = INT8_MAX;
	int64_t x16 = INT64_MAX;
	int64_t t3 = -14675700423503569LL;

	t3 = (x13^(x14|(x15/x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -73LL;
	static int16_t x19 = 425;
	volatile uint64_t t4 = 17156042768718783LLU;

	t4 = (x17^(x18|(x19/x20)));

	if (t4 != 18446744073709544607LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -45;
	static uint32_t x22 = 1619544235U;
	static int8_t x23 = INT8_MIN;
	static volatile uint64_t x24 = UINT64_MAX;
	static volatile uint64_t t5 = 24486603444862186LLU;

	t5 = (x21^(x22|(x23/x24)));

	if (t5 != 18446744072090007416LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MAX;
	uint64_t x27 = 6317374071029107821LLU;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 30565774886935681LLU;

	t6 = (x25^(x26|(x27/x28)));

	if (t6 != 9223418600690330483LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = -3180;
	static uint32_t x32 = UINT32_MAX;

	t7 = (x29^(x30|(x31/x32)));

	if (t7 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 2961980LLU;
	uint64_t x34 = UINT64_MAX;
	static int8_t x35 = INT8_MIN;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 942485471306392LLU;

	t8 = (x33^(x34|(x35/x36)));

	if (t8 != 18446744073706589635LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	int64_t x38 = 1LL;
	volatile uint8_t x39 = 25U;
	uint16_t x40 = UINT16_MAX;
	volatile int64_t t9 = -84678519689LL;

	t9 = (x37^(x38|(x39/x40)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 14442786525145457LLU;
	static uint64_t x44 = 19680966591LLU;

	t10 = (x41^(x42|(x43/x44)));

	if (t10 != 127LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1599659723049LL;
	static uint8_t x47 = 1U;
	uint32_t x48 = UINT32_MAX;
	volatile int64_t t11 = 1088307782924796LL;

	t11 = (x45^(x46|(x47/x48)));

	if (t11 != -1600090912472LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x51 = 31850U;
	volatile int16_t x52 = -36;

	t12 = (x49^(x50|(x51/x52)));

	if (t12 != -891) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 193U;
	static int16_t x54 = INT16_MIN;
	int64_t x55 = -1386332892682684870LL;
	static volatile int64_t t13 = -2LL;

	t13 = (x53^(x54|(x55/x56)));

	if (t13 != -13575LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	static int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t14 = 74031351U;

	t14 = (x61^(x62|(x63/x64)));

	if (t14 != 127U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	volatile int64_t x66 = INT64_MAX;
	int64_t x68 = INT64_MIN;

	t15 = (x65^(x66|(x67/x68)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x70 = 218LL;
	int32_t x71 = INT32_MIN;
	volatile uint64_t x72 = 34754161914262264LLU;
	static volatile uint64_t t16 = 27345983908LLU;

	t16 = (x69^(x70|(x71/x72)));

	if (t16 != 64805LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	volatile int32_t x74 = INT32_MIN;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = -1;

	t17 = (x73^(x74|(x75/x76)));

	if (t17 != 18446744071562068222LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 2230U;
	uint8_t x78 = 2U;
	static uint32_t x79 = UINT32_MAX;
	volatile uint32_t t18 = 1U;

	t18 = (x77^(x78|(x79/x80)));

	if (t18 != 226053096U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -10;
	int8_t x84 = -9;
	volatile int64_t t19 = 11335457692639LL;

	t19 = (x81^(x82|(x83/x84)));

	if (t19 != 103859253768LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = INT16_MIN;
	static volatile int16_t x87 = -1;
	static uint8_t x88 = UINT8_MAX;

	t20 = (x85^(x86|(x87/x88)));

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 12U;
	int64_t x90 = -1LL;
	uint8_t x91 = UINT8_MAX;
	int64_t t21 = -6LL;

	t21 = (x89^(x90|(x91/x92)));

	if (t21 != -13LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = INT64_MIN;
	int64_t x94 = -8370523LL;
	volatile int8_t x95 = -1;
	static volatile int64_t x96 = -643630521420505LL;
	volatile int64_t t22 = 79035LL;

	t22 = (x93^(x94|(x95/x96)));

	if (t22 != 9223372036846405285LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = 0;
	uint32_t x98 = UINT32_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (x97^(x98|(x99/x100)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 352354002183090502LLU;
	int32_t x102 = 37212422;
	int16_t x103 = -1;
	static int8_t x104 = INT8_MAX;
	volatile uint64_t t24 = 1971181769490LLU;

	t24 = (x101^(x102|(x103/x104)));

	if (t24 != 352354002152235072LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	int64_t x107 = 3LL;
	int32_t x108 = -1;
	volatile int64_t t25 = 772644673657745LL;

	t25 = (x105^(x106|(x107/x108)));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	uint16_t x110 = UINT16_MAX;
	static int16_t x112 = INT16_MIN;
	uint32_t t26 = 12U;

	t26 = (x109^(x110|(x111/x112)));

	if (t26 != 4294901760U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	volatile uint32_t x115 = 11800U;
	uint32_t t27 = 48143196U;

	t27 = (x113^(x114|(x115/x116)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x120 = INT64_MAX;
	static volatile int64_t t28 = -1217089LL;

	t28 = (x117^(x118|(x119/x120)));

	if (t28 != 4294934528LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = 2084492018U;
	uint64_t x124 = 3571304639079LLU;
	volatile uint64_t t29 = 1421996484342835LLU;

	t29 = (x121^(x122|(x123/x124)));

	if (t29 != 18446744071620874995LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	volatile int64_t x126 = -284404872849270949LL;
	volatile int64_t t30 = 79LL;

	t30 = (x125^(x126|(x127/x128)));

	if (t30 != 8938967164005504859LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -3933LL;
	int32_t x130 = -468447;
	uint64_t x131 = 60310734202459LLU;
	int64_t x132 = -1LL;
	static volatile uint64_t t31 = 1670600008498280LLU;

	t31 = (x129^(x130|(x131/x132)));

	if (t31 != 469634LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x133 = 1154U;
	int16_t x134 = INT16_MIN;
	uint8_t x135 = 22U;
	int64_t x136 = INT64_MIN;
	int64_t t32 = 1000429330102LL;

	t32 = (x133^(x134|(x135/x136)));

	if (t32 != -31614LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1488;
	uint64_t x138 = 6250591593658497LLU;
	static uint64_t t33 = 3374345879LLU;

	t33 = (x137^(x138|(x139/x140)));

	if (t33 != 18440493482115891889LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x141 = -1;
	volatile int64_t x143 = INT64_MIN;
	volatile int64_t x144 = INT64_MIN;
	int64_t t34 = 86519174LL;

	t34 = (x141^(x142|(x143/x144)));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x145 = -1;
	int16_t x146 = 6923;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = INT64_MIN;

	t35 = (x145^(x146|(x147/x148)));

	if (t35 != -6924LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MAX;
	static int64_t x151 = 13355072452710191LL;
	int32_t x152 = 196;
	static uint64_t t36 = 26183742316LLU;

	t36 = (x149^(x150|(x151/x152)));

	if (t36 != 68138124771315LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x154 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;
	uint32_t t37 = 3909029U;

	t37 = (x153^(x154|(x155/x156)));

	if (t37 != 1840700269U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x158 = 645LLU;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MIN;
	uint64_t t38 = 22LLU;

	t38 = (x157^(x158|(x159/x160)));

	if (t38 != 12680LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MIN;
	volatile uint64_t x162 = UINT64_MAX;
	static int32_t x163 = INT32_MIN;
	volatile uint64_t t39 = 11LLU;

	t39 = (x161^(x162|(x163/x164)));

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x165 = 301490411171038LLU;
	int64_t x166 = -1LL;
	int32_t x167 = INT32_MIN;
	uint64_t t40 = 27167490396LLU;

	t40 = (x165^(x166|(x167/x168)));

	if (t40 != 18446442583298380577LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x170 = INT8_MIN;
	int64_t x171 = -1LL;
	int32_t x172 = -113304046;
	int64_t t41 = -1LL;

	t41 = (x169^(x170|(x171/x172)));

	if (t41 != -129LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MIN;
	int64_t x176 = -4LL;

	t42 = (x173^(x174|(x175/x176)));

	if (t42 != 9223372036854775745LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	uint32_t x179 = UINT32_MAX;
	static int64_t t43 = 7893LL;

	t43 = (x177^(x178|(x179/x180)));

	if (t43 != -2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	uint32_t x182 = 751U;
	volatile int32_t x183 = INT32_MIN;
	static int32_t x184 = INT32_MIN;

	t44 = (x181^(x182|(x183/x184)));

	if (t44 != -752LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = 31U;
	uint16_t x190 = UINT16_MAX;
	int64_t x192 = INT64_MIN;
	static int64_t t45 = 20787165LL;

	t45 = (x189^(x190|(x191/x192)));

	if (t45 != 65504LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = INT32_MIN;
	int16_t x195 = 1;
	int16_t x196 = -6;
	static volatile int32_t t46 = -6971146;

	t46 = (x193^(x194|(x195/x196)));

	if (t46 != 2147483520) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 1U;
	int16_t x200 = -1;
	volatile int32_t t47 = 7450674;

	t47 = (x197^(x198|(x199/x200)));

	if (t47 != -125) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x202 = -1;
	int8_t x203 = -32;
	static int32_t t48 = -357466;

	t48 = (x201^(x202|(x203/x204)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 87U;
	uint16_t x206 = UINT16_MAX;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t49 = 4224931987LLU;

	t49 = (x205^(x206|(x207/x208)));

	if (t49 != 65448LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 2373U;
	int32_t x210 = -1;
	uint8_t x212 = UINT8_MAX;
	int32_t t50 = 8507215;

	t50 = (x209^(x210|(x211/x212)));

	if (t50 != -2374) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 0U;
	static uint32_t x215 = UINT32_MAX;
	int16_t x216 = 603;
	uint32_t t51 = 92933563U;

	t51 = (x213^(x214|(x215/x216)));

	if (t51 != 7122454U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MAX;
	static uint32_t x218 = 64732U;
	uint16_t x220 = UINT16_MAX;

	t52 = (x217^(x218|(x219/x220)));

	if (t52 != 4294935331U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	static uint8_t x222 = 1U;
	static uint16_t x223 = 447U;

	t53 = (x221^(x222|(x223/x224)));

	if (t53 != 9223372036854775361LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x226 = 463LLU;
	int64_t x228 = 41349203172654462LL;
	uint64_t t54 = 3LLU;

	t54 = (x225^(x226|(x227/x228)));

	if (t54 != 4701LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = UINT64_MAX;
	uint64_t t55 = 2353LLU;

	t55 = (x229^(x230|(x231/x232)));

	if (t55 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = INT64_MIN;
	volatile uint8_t x234 = 62U;
	static int64_t x235 = 294440936LL;

	t56 = (x233^(x234|(x235/x236)));

	if (t56 != 9223372036560334910LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 2U;
	uint64_t x238 = UINT64_MAX;
	volatile uint16_t x240 = UINT16_MAX;
	volatile uint64_t t57 = 8691106973967762LLU;

	t57 = (x237^(x238|(x239/x240)));

	if (t57 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	int8_t x243 = -1;
	static volatile int8_t x244 = 33;

	t58 = (x241^(x242|(x243/x244)));

	if (t58 != 127LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x247 = -1240200605LL;
	static volatile int64_t x248 = INT64_MAX;
	int64_t t59 = 152482948571439LL;

	t59 = (x245^(x246|(x247/x248)));

	if (t59 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = 1U;
	int16_t x251 = 99;
	static volatile uint64_t x252 = 11204LLU;
	static volatile uint64_t t60 = 983017LLU;

	t60 = (x249^(x250|(x251/x252)));

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = -1;
	int16_t x254 = -6903;
	int64_t x255 = 3315576LL;
	int64_t x256 = INT64_MIN;

	t61 = (x253^(x254|(x255/x256)));

	if (t61 != 6902LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = 3047781;
	int64_t x258 = 358387LL;
	volatile uint8_t x259 = 1U;
	static uint8_t x260 = UINT8_MAX;
	int64_t t62 = 4390697615LL;

	t62 = (x257^(x258|(x259/x260)));

	if (t62 != 2881174LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MAX;
	static uint32_t x263 = UINT32_MAX;
	int64_t t63 = -3828354995586035LL;

	t63 = (x261^(x262|(x263/x264)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x266 = 45U;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	static uint32_t t64 = 207U;

	t64 = (x265^(x266|(x267/x268)));

	if (t64 != 4294934573U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static int64_t x270 = INT64_MIN;
	int16_t x272 = -1;
	static volatile int64_t t65 = 999118LL;

	t65 = (x269^(x270|(x271/x272)));

	if (t65 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MAX;
	volatile int64_t x274 = -1LL;
	uint32_t x275 = 173278U;
	int32_t x276 = INT32_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x273^(x274|(x275/x276)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 1631376097LLU;
	static uint64_t t67 = 53773056765LLU;

	t67 = (x277^(x278|(x279/x280)));

	if (t67 != 18446744068055814144LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = 104832299;
	uint16_t x282 = 848U;
	static volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	int64_t t68 = 22814056896160LL;

	t68 = (x281^(x282|(x283/x284)));

	if (t68 != 72057594142760571LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = 1957;
	int8_t x286 = INT8_MIN;
	int8_t x287 = -1;
	static uint32_t x288 = 29154U;
	volatile uint32_t t69 = 20090620U;

	t69 = (x285^(x286|(x287/x288)));

	if (t69 != 4294965341U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = -449;
	int64_t x292 = INT64_MAX;
	volatile int64_t t70 = 200015970287LL;

	t70 = (x289^(x290|(x291/x292)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = 3;
	int16_t x295 = INT16_MIN;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t71 = 21562385;

	t71 = (x293^(x294|(x295/x296)));

	if (t71 != -512) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 51796667LL;
	uint8_t x298 = UINT8_MAX;
	volatile int16_t x299 = INT16_MAX;
	volatile uint8_t x300 = UINT8_MAX;

	t72 = (x297^(x298|(x299/x300)));

	if (t72 != 51796548LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = INT8_MIN;
	volatile int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MIN;

	t73 = (x301^(x302|(x303/x304)));

	if (t73 != 2147483520LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MAX;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;
	static uint64_t t74 = 4922LLU;

	t74 = (x305^(x306|(x307/x308)));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x309 = INT32_MIN;
	static int16_t x311 = INT16_MIN;
	uint8_t x312 = 2U;
	volatile uint32_t t75 = 328663000U;

	t75 = (x309^(x310|(x311/x312)));

	if (t75 != 2147469056U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = -80;
	volatile uint32_t x316 = UINT32_MAX;
	static uint32_t t76 = 19U;

	t76 = (x313^(x314|(x315/x316)));

	if (t76 != 4270103828U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = -6;
	int16_t x318 = -6;
	uint32_t x320 = 14972730U;
	volatile uint32_t t77 = 2U;

	t77 = (x317^(x318|(x319/x320)));

	if (t77 != 4U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x321 = 1;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;
	uint64_t t78 = 29518LLU;

	t78 = (x321^(x322|(x323/x324)));

	if (t78 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = -579;
	volatile uint32_t x327 = 1U;
	int16_t x328 = 1;
	static volatile uint32_t t79 = 967U;

	t79 = (x325^(x326|(x327/x328)));

	if (t79 != 572U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	volatile uint8_t x335 = 0U;
	volatile int64_t x336 = INT64_MAX;
	int64_t t80 = -877956723LL;

	t80 = (x333^(x334|(x335/x336)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x337 = 8U;
	static uint16_t x338 = 2034U;
	uint8_t x339 = 8U;
	static volatile int32_t x340 = INT32_MAX;
	static int32_t t81 = 2580402;

	t81 = (x337^(x338|(x339/x340)));

	if (t81 != 2042) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = INT8_MAX;
	uint32_t x343 = 150928U;
	uint8_t x344 = UINT8_MAX;
	static uint32_t t82 = 2692U;

	t82 = (x341^(x342|(x343/x344)));

	if (t82 != 560U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = UINT32_MAX;
	volatile uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	static uint32_t t83 = 0U;

	t83 = (x345^(x346|(x347/x348)));

	if (t83 != 4294901760U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MIN;
	volatile int32_t x350 = INT32_MIN;
	uint32_t x351 = 3U;
	static int16_t x352 = -1;
	volatile int64_t t84 = -2301423LL;

	t84 = (x349^(x350|(x351/x352)));

	if (t84 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 231U;
	int64_t x354 = -660254451471907LL;
	static int64_t t85 = 2694236703LL;

	t85 = (x353^(x354|(x355/x356)));

	if (t85 != -660254451472070LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -10;
	int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = 11414483LLU;
	uint64_t t86 = 10015020767LLU;

	t86 = (x357^(x358|(x359/x360)));

	if (t86 != 118LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 5610214U;
	uint64_t x362 = 21513765LLU;
	int8_t x363 = 29;
	int64_t x364 = INT64_MIN;

	t87 = (x361^(x362|(x363/x364)));

	if (t87 != 18734275LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MAX;
	uint8_t x366 = UINT8_MAX;
	int32_t x367 = INT32_MAX;
	int8_t x368 = -7;
	volatile int32_t t88 = -278362057;

	t88 = (x365^(x366|(x367/x368)));

	if (t88 != -1840700416) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x369 = 495U;
	volatile uint32_t x370 = UINT32_MAX;
	int8_t x372 = INT8_MIN;
	volatile uint32_t t89 = 6892U;

	t89 = (x369^(x370|(x371/x372)));

	if (t89 != 4294966800U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = INT64_MIN;
	uint32_t x374 = 34273U;
	static int8_t x375 = -1;
	int64_t t90 = 1LL;

	t90 = (x373^(x374|(x375/x376)));

	if (t90 != -9223372036854741535LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x378 = 12528940118560LLU;
	int64_t x380 = INT64_MIN;
	volatile uint64_t t91 = 551802594854594145LLU;

	t91 = (x377^(x378|(x379/x380)));

	if (t91 != 18446731544769458721LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x381 = 1646506052084435278LL;
	volatile int16_t x383 = -1;
	uint8_t x384 = 14U;
	static int64_t t92 = 107097963902LL;

	t92 = (x381^(x382|(x383/x384)));

	if (t92 != -1646506052084435250LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = -1;
	uint8_t x387 = 39U;
	int16_t x388 = -1;

	t93 = (x385^(x386|(x387/x388)));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x389 = 3U;
	int64_t x390 = -2LL;
	uint32_t x391 = 515U;
	int8_t x392 = 1;

	t94 = (x389^(x390|(x391/x392)));

	if (t94 != -4LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x393 = 11005;
	static int16_t x394 = 1806;
	volatile int8_t x395 = INT8_MIN;
	int16_t x396 = -1;

	t95 = (x393^(x394|(x395/x396)));

	if (t95 != 11635) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MAX;
	int32_t x399 = -980976;
	uint16_t x400 = 1378U;
	int32_t t96 = 17610156;

	t96 = (x397^(x398|(x399/x400)));

	if (t96 != -58) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = 16U;
	volatile int32_t x403 = INT32_MIN;
	static volatile int16_t x404 = INT16_MAX;
	uint64_t t97 = 32232173542321LLU;

	t97 = (x401^(x402|(x403/x404)));

	if (t97 != 18446744073709486062LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 3378979662303534552LLU;
	static int32_t x407 = 946775919;
	int64_t x408 = -1LL;
	static volatile uint64_t t98 = 491025489LLU;

	t98 = (x405^(x406|(x407/x408)));

	if (t98 != 270574118LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x409 = UINT16_MAX;
	volatile uint64_t t99 = 1034150LLU;

	t99 = (x409^(x410|(x411/x412)));

	if (t99 != 65389LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

