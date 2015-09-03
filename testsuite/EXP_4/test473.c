#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 174533103795LLU;
int32_t t3 = -263612;
uint32_t t5 = 1447U;
static int16_t x41 = INT16_MAX;
static volatile int32_t x62 = -1;
static int64_t t7 = -3033425289300933LL;
uint32_t x80 = UINT32_MAX;
volatile int32_t t9 = -2;
int8_t x95 = -1;
uint32_t t13 = 326447U;
static int32_t x111 = 38934;
volatile int32_t x124 = 1341;
int8_t x128 = INT8_MAX;
volatile int64_t t16 = -114601576918201LL;
static volatile int64_t t20 = 2377LL;
uint16_t x188 = UINT16_MAX;
int64_t t25 = -6771731LL;
static int32_t x213 = INT32_MAX;
uint32_t x215 = 121U;
int32_t x225 = INT32_MAX;
uint8_t x228 = 5U;
static volatile int32_t t31 = -30654238;
static uint32_t x235 = 1U;
uint8_t x238 = UINT8_MAX;
static volatile int32_t t33 = -1;
uint8_t x254 = UINT8_MAX;
volatile uint32_t x269 = 610574U;
uint8_t x270 = 31U;
int16_t x271 = -1;
volatile int16_t x278 = -95;
int8_t x280 = INT8_MIN;
int8_t x300 = -1;
static volatile uint64_t t38 = 1724882LLU;
static int64_t x303 = 154980483LL;
volatile int64_t t39 = 17463523693344LL;
volatile int32_t x309 = INT32_MIN;
static int8_t x327 = INT8_MIN;
static uint8_t x328 = 13U;
volatile uint32_t t42 = 507333484U;
uint8_t x342 = UINT8_MAX;
int16_t x350 = INT16_MIN;
int64_t t44 = 0LL;
uint16_t x357 = 119U;
int8_t x358 = 17;
uint32_t x360 = 2U;
volatile uint32_t t45 = 63744U;
int16_t x361 = INT16_MIN;
uint16_t x362 = 11331U;
int32_t x364 = -1;
int8_t x370 = INT8_MIN;
static uint16_t x383 = 550U;
int8_t x392 = -1;
static uint64_t x413 = 7288072799694LLU;
uint8_t x416 = 46U;
volatile uint64_t t54 = 154195287396639LLU;
uint8_t x417 = 4U;
int8_t x425 = -1;
uint8_t x427 = UINT8_MAX;
uint32_t x428 = 3738U;
volatile uint8_t x449 = UINT8_MAX;
int8_t x457 = -1;
static uint32_t x458 = 226339575U;
int8_t x461 = -1;
volatile int32_t t62 = 0;
static volatile uint32_t x470 = 1271103029U;
uint64_t t64 = 1538LLU;
int8_t x492 = INT8_MAX;
volatile int32_t t65 = -496011;
volatile int32_t x498 = -30;
int64_t t67 = -6230511777371LL;
volatile int64_t t68 = -4439548960846838LL;
int16_t x521 = -46;
volatile int32_t x524 = 74955;
volatile int64_t t70 = -724733415444LL;
uint32_t x528 = 67U;
int16_t x530 = -3;
static uint64_t x531 = UINT64_MAX;
static uint32_t x546 = 2070374130U;
uint64_t t73 = 1862LLU;
static uint64_t x555 = 444910736269285062LLU;
volatile uint8_t x556 = 4U;
int64_t t75 = -1200248LL;
static int64_t x569 = INT64_MAX;
volatile uint8_t x571 = 1U;
static uint64_t t76 = 682938825288LLU;
volatile uint32_t x584 = 232U;
int16_t x585 = INT16_MIN;
static uint8_t x586 = 45U;
int16_t x588 = -1;
static int8_t x590 = -30;
volatile int64_t t80 = 81868911140695LL;
volatile int16_t x603 = 4;
int32_t x638 = 460;
static int16_t x661 = INT16_MIN;
volatile int8_t x663 = 3;
volatile int32_t t86 = -437;
static volatile uint32_t x684 = UINT32_MAX;
uint8_t x685 = 56U;
static int64_t x717 = -1LL;
int32_t x721 = -1;
int8_t x742 = -9;
volatile int64_t t93 = 11818599583630119LL;
static int64_t x765 = INT64_MIN;
int64_t x768 = -1LL;
int8_t x780 = INT8_MIN;
int32_t x788 = -1;
int16_t x793 = 0;


void f0(void) {
	volatile uint16_t x5 = UINT16_MAX;
	int64_t x6 = 3492886596865538LL;
	static uint64_t x7 = 55347252LLU;
	int16_t x8 = -1;

	t0 = (x5%(x6&(x7*x8)));

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 20958U;
	volatile uint16_t x16 = 845U;
	volatile uint64_t t1 = 12287722653LLU;

	t1 = (x13%(x14&(x15*x16)));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	volatile int32_t x18 = INT32_MAX;
	int32_t x19 = -6144;
	static uint16_t x20 = 113U;
	volatile int64_t t2 = -1136015016352946526LL;

	t2 = (x17%(x18&(x19*x20)));

	if (t2 != -118790144LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -6;
	int16_t x22 = 654;
	static int8_t x23 = 2;
	static volatile int16_t x24 = -1;

	t3 = (x21%(x22&(x23*x24)));

	if (t3 != -6) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = 6U;
	uint8_t x26 = UINT8_MAX;
	static int64_t x27 = 1570913431LL;
	uint32_t x28 = 832299U;
	volatile int64_t t4 = 6LL;

	t4 = (x25%(x26&(x27*x28)));

	if (t4 != 6LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MIN;

	t5 = (x33%(x34&(x35*x36)));

	if (t5 != 4161535U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x42 = -54880;
	int64_t x43 = -1LL;
	int8_t x44 = 4;
	int64_t t6 = -50791130LL;

	t6 = (x41%(x42&(x43*x44)));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = 3915;
	static volatile int64_t x63 = 31490131910LL;
	volatile int8_t x64 = INT8_MIN;

	t7 = (x61%(x62&(x63*x64)));

	if (t7 != 3915LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x77 = 163U;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = 7163LL;
	static volatile int64_t t8 = 504LL;

	t8 = (x77%(x78&(x79*x80)));

	if (t8 != 163LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x81 = -2485;
	volatile int8_t x82 = 3;
	static int16_t x83 = 45;
	uint16_t x84 = UINT16_MAX;

	t9 = (x81%(x82&(x83*x84)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x89 = INT8_MAX;
	volatile uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t10 = 235746716346413300LLU;

	t10 = (x89%(x90&(x91*x92)));

	if (t10 != 127LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x93 = INT8_MAX;
	uint8_t x94 = 1U;
	int64_t x96 = -1LL;
	int64_t t11 = 86LL;

	t11 = (x93%(x94&(x95*x96)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x101 = INT16_MIN;
	static uint8_t x102 = 25U;
	int8_t x103 = -1;
	static int16_t x104 = INT16_MAX;
	static volatile int32_t t12 = -1298756;

	t12 = (x101%(x102&(x103*x104)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	int16_t x107 = 7302;
	static uint32_t x108 = 52904U;

	t13 = (x105%(x106&(x107*x108)));

	if (t13 != 719U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x109 = INT16_MIN;
	static uint8_t x110 = 23U;
	int8_t x112 = -1;
	volatile int32_t t14 = -14298;

	t14 = (x109%(x110&(x111*x112)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x121 = 1U;
	volatile uint32_t x122 = 50U;
	static uint8_t x123 = 4U;
	uint32_t t15 = 1U;

	t15 = (x121%(x122&(x123*x124)));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x125 = -147303;
	int64_t x126 = -1LL;
	int32_t x127 = -1;

	t16 = (x125%(x126&(x127*x128)));

	if (t16 != -110LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x129 = INT8_MAX;
	static volatile int64_t x130 = -1LL;
	int8_t x131 = -1;
	int8_t x132 = -1;
	volatile int64_t t17 = -4LL;

	t17 = (x129%(x130&(x131*x132)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = UINT16_MAX;
	int8_t x148 = INT8_MIN;
	volatile int64_t t18 = -7790282127LL;

	t18 = (x145%(x146&(x147*x148)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	volatile uint32_t x155 = 68833U;
	volatile uint64_t x156 = 2492LLU;
	volatile uint64_t t19 = 43982359996553271LLU;

	t19 = (x153%(x154&(x155*x156)));

	if (t19 != 102006784LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = 1;
	int8_t x159 = 1;
	int8_t x160 = 1;

	t20 = (x157%(x158&(x159*x160)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x165 = UINT16_MAX;
	volatile int64_t x166 = INT64_MIN;
	volatile uint64_t x167 = UINT64_MAX;
	static uint16_t x168 = UINT16_MAX;
	uint64_t t21 = 9992811630225042LLU;

	t21 = (x165%(x166&(x167*x168)));

	if (t21 != 65535LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x169 = UINT16_MAX;
	int8_t x170 = INT8_MIN;
	int16_t x171 = -1;
	volatile int16_t x172 = -3559;
	volatile int32_t t22 = 1;

	t22 = (x169%(x170&(x171*x172)));

	if (t22 != 3327) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x177 = -837;
	uint32_t x178 = 488337U;
	int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t23 = 40516U;

	t23 = (x177%(x178&(x179*x180)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x185 = INT64_MAX;
	int8_t x186 = 3;
	int8_t x187 = 14;
	volatile int64_t t24 = 5311LL;

	t24 = (x185%(x186&(x187*x188)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MAX;
	uint16_t x195 = 217U;
	int64_t x196 = 4126658140025LL;

	t25 = (x193%(x194&(x195*x196)));

	if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x197 = -1;
	uint32_t x198 = 1741977821U;
	volatile uint64_t x199 = 4088167LLU;
	uint64_t x200 = 679102088LLU;
	volatile uint64_t t26 = 78LLU;

	t26 = (x197%(x198&(x199*x200)));

	if (t26 != 452681487LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x205 = INT64_MAX;
	int32_t x206 = -6647086;
	int16_t x207 = 15;
	int64_t x208 = -1LL;
	volatile int64_t t27 = 3294034448058LL;

	t27 = (x205%(x206&(x207*x208)));

	if (t27 != 1594831LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x214 = -3314995123854577LL;
	static int32_t x216 = INT32_MAX;
	volatile int64_t t28 = -266938780LL;

	t28 = (x213%(x214&(x215*x216)));

	if (t28 != 152765632LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 1U;
	int16_t x219 = INT16_MAX;
	static uint8_t x220 = 1U;
	volatile uint32_t t29 = 1752U;

	t29 = (x217%(x218&(x219*x220)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x221 = 5U;
	uint32_t x222 = 31885U;
	volatile uint8_t x223 = 1U;
	int64_t x224 = INT64_MAX;
	int64_t t30 = -9460LL;

	t30 = (x221%(x222&(x223*x224)));

	if (t30 != 5LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x226 = -18;
	int16_t x227 = INT16_MAX;

	t31 = (x225%(x226&(x227*x228)));

	if (t31 != 157303) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x233 = 0;
	static int32_t x234 = INT32_MIN;
	static int8_t x236 = -8;
	uint32_t t32 = 4741U;

	t32 = (x233%(x234&(x235*x236)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = 2U;
	uint8_t x240 = UINT8_MAX;

	t33 = (x237%(x238&(x239*x240)));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x253 = 20U;
	int16_t x255 = -1;
	uint16_t x256 = 21227U;
	volatile int32_t t34 = 14;

	t34 = (x253%(x254&(x255*x256)));

	if (t34 != 20) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x257 = 41;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 1U;
	int32_t x260 = 3337;
	int32_t t35 = 343606525;

	t35 = (x257%(x258&(x259*x260)));

	if (t35 != 41) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x272 = -186LL;
	static int64_t t36 = 100951230391384LL;

	t36 = (x269%(x270&(x271*x272)));

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x277 = INT32_MAX;
	volatile uint8_t x279 = 12U;
	static volatile int32_t t37 = -3796853;

	t37 = (x277%(x278&(x279*x280)));

	if (t37 != 511) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 486996056603409LLU;

	t38 = (x297%(x298&(x299*x300)));

	if (t38 != 686371868LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x301 = UINT32_MAX;
	int16_t x302 = 51;
	uint16_t x304 = 9U;

	t39 = (x301%(x302&(x303*x304)));

	if (t39 != 5LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x310 = INT64_MIN;
	uint16_t x311 = 15675U;
	static int8_t x312 = INT8_MIN;
	int64_t t40 = -894169090713104LL;

	t40 = (x309%(x310&(x311*x312)));

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = UINT32_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = 5387619187122LL;
	static volatile int64_t t41 = -1524535LL;

	t41 = (x317%(x318&(x319*x320)));

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x325 = UINT32_MAX;
	static uint32_t x326 = 1468U;

	t42 = (x325%(x326&(x327*x328)));

	if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x341 = INT16_MAX;
	volatile uint64_t x343 = 35936201056155764LLU;
	uint8_t x344 = UINT8_MAX;
	volatile uint64_t t43 = 106038LLU;

	t43 = (x341%(x342&(x343*x344)));

	if (t43 != 7LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x349 = 41U;
	int64_t x351 = -10595LL;
	int16_t x352 = INT16_MIN;

	t44 = (x349%(x350&(x351*x352)));

	if (t44 != 41LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x359 = -1;

	t45 = (x357%(x358&(x359*x360)));

	if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x363 = 6U;
	static int32_t t46 = 751;

	t46 = (x361%(x362&(x363*x364)));

	if (t46 != -10108) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x369 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = -1;
	static volatile int32_t t47 = -493;

	t47 = (x369%(x370&(x371*x372)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MAX;
	int64_t x375 = -30872092280913LL;
	volatile int8_t x376 = -5;
	int64_t t48 = 75790459968845248LL;

	t48 = (x373%(x374&(x375*x376)));

	if (t48 != -128LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x377 = 207;
	int8_t x378 = INT8_MIN;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = -2555;
	int32_t t49 = 2232250;

	t49 = (x377%(x378&(x379*x380)));

	if (t49 != 207) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MAX;
	uint8_t x384 = 26U;
	int64_t t50 = -7481586687LL;

	t50 = (x381%(x382&(x383*x384)));

	if (t50 != -8LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x385 = -1LL;
	uint64_t x386 = 31566205193497LLU;
	uint64_t x387 = 1839167238071919LLU;
	uint32_t x388 = 1488832U;
	volatile uint64_t t51 = 6210350750961LLU;

	t51 = (x385%(x386&(x387*x388)));

	if (t51 != 3279824616447LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = -1;
	volatile int64_t x391 = 32936328525240262LL;
	int64_t t52 = -2LL;

	t52 = (x389%(x390&(x391*x392)));

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x409 = INT64_MIN;
	int16_t x410 = -174;
	static volatile int8_t x411 = 1;
	int64_t x412 = INT64_MIN;
	static int64_t t53 = 13406017810441406LL;

	t53 = (x409%(x410&(x411*x412)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x414 = 1400;
	static uint64_t x415 = 1254533395467450337LLU;

	t54 = (x413%(x414&(x415*x416)));

	if (t54 != 102LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x418 = INT64_MAX;
	int64_t x419 = 2219056925300682831LL;
	volatile int16_t x420 = -1;
	volatile int64_t t55 = -433293681151155LL;

	t55 = (x417%(x418&(x419*x420)));

	if (t55 != 4LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x421 = -1LL;
	int32_t x422 = 31;
	volatile int16_t x423 = -1;
	static uint8_t x424 = UINT8_MAX;
	static int64_t t56 = -1812423524376438LL;

	t56 = (x421%(x422&(x423*x424)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x426 = -1;
	uint32_t t57 = 6241U;

	t57 = (x425%(x426&(x427*x428)));

	if (t57 != 846345U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x433 = 34;
	static int16_t x434 = INT16_MIN;
	volatile int64_t x435 = -1606025053535501192LL;
	volatile int16_t x436 = -1;
	volatile int64_t t58 = 711718462578883048LL;

	t58 = (x433%(x434&(x435*x436)));

	if (t58 != 34LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x450 = 53217U;
	uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 12U;
	static uint32_t t59 = 978834376U;

	t59 = (x449%(x450&(x451*x452)));

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x453 = INT8_MAX;
	int64_t x454 = INT64_MIN;
	int16_t x455 = -4;
	volatile int8_t x456 = INT8_MAX;
	static int64_t t60 = -1039440LL;

	t60 = (x453%(x454&(x455*x456)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x459 = 376936660LL;
	uint32_t x460 = 375726834U;
	int64_t t61 = 1279349702652LL;

	t61 = (x457%(x458&(x459*x460)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	int8_t x464 = 20;

	t62 = (x461%(x462&(x463*x464)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MIN;
	uint16_t x467 = UINT16_MAX;
	uint64_t x468 = 20856495153060LLU;
	volatile uint64_t t63 = 27159717LLU;

	t63 = (x465%(x466&(x467*x468)));

	if (t63 != 677948745584320384LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x469 = 1;
	static volatile uint64_t x471 = UINT64_MAX;
	int32_t x472 = 220;

	t64 = (x469%(x470&(x471*x472)));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x489 = -3836;
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;

	t65 = (x489%(x490&(x491*x492)));

	if (t65 != -3836) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x497 = -7356350052918LL;
	uint8_t x499 = 44U;
	static uint32_t x500 = 20073589U;
	volatile int64_t t66 = -6499592LL;

	t66 = (x497%(x498&(x499*x500)));

	if (t66 != -744921654LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MAX;
	uint32_t x503 = UINT32_MAX;
	volatile int8_t x504 = INT8_MIN;

	t67 = (x501%(x502&(x503*x504)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x505 = INT32_MIN;
	int64_t x506 = 1206894955367018LL;
	volatile int8_t x507 = -3;
	int8_t x508 = -1;

	t68 = (x505%(x506&(x507*x508)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x517 = INT32_MIN;
	uint32_t x518 = 2904335U;
	uint16_t x519 = UINT16_MAX;
	int8_t x520 = -1;
	uint32_t t69 = 393U;

	t69 = (x517%(x518&(x519*x520)));

	if (t69 != 2096408U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x522 = INT16_MIN;
	int64_t x523 = 228LL;

	t70 = (x521%(x522&(x523*x524)));

	if (t70 != -46LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x525 = 17917766U;
	volatile int64_t x526 = -1LL;
	static int8_t x527 = INT8_MAX;
	int64_t t71 = 2200578396170127490LL;

	t71 = (x525%(x526&(x527*x528)));

	if (t71 != 6321LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x529 = INT64_MIN;
	volatile uint8_t x532 = UINT8_MAX;
	uint64_t t72 = 575344LLU;

	t72 = (x529%(x530&(x531*x532)));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x545 = 38687330;
	static uint8_t x547 = UINT8_MAX;
	uint64_t x548 = 109586325214588912LLU;

	t73 = (x545%(x546&(x547*x548)));

	if (t73 != 17715794LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x553 = 1LLU;
	uint8_t x554 = 49U;
	static volatile uint64_t t74 = 1650983LLU;

	t74 = (x553%(x554&(x555*x556)));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x561 = 11981924LL;
	uint16_t x562 = UINT16_MAX;
	volatile uint16_t x563 = UINT16_MAX;
	uint8_t x564 = UINT8_MAX;

	t75 = (x561%(x562&(x563*x564)));

	if (t75 != 35501LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x570 = 1225726348LLU;
	uint32_t x572 = UINT32_MAX;

	t76 = (x569%(x570&(x571*x572)));

	if (t76 != 247302755LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x577 = INT32_MIN;
	uint8_t x578 = 125U;
	uint16_t x579 = 2U;
	int8_t x580 = -1;
	static volatile int32_t t77 = -1951;

	t77 = (x577%(x578&(x579*x580)));

	if (t77 != -64) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x581 = 168320314;
	int8_t x582 = INT8_MIN;
	int64_t x583 = 2LL;
	volatile int64_t t78 = 882471018317LL;

	t78 = (x581%(x582&(x583*x584)));

	if (t78 != 58LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x587 = -3;
	volatile int32_t t79 = 2;

	t79 = (x585%(x586&(x587*x588)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x589 = 1U;
	int8_t x591 = -1;
	int64_t x592 = INT64_MAX;

	t80 = (x589%(x590&(x591*x592)));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x597 = 2U;
	uint8_t x598 = 88U;
	int64_t x599 = 47201318LL;
	int64_t x600 = -1LL;
	int64_t t81 = -10LL;

	t81 = (x597%(x598&(x599*x600)));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x601 = INT8_MIN;
	int8_t x602 = INT8_MAX;
	uint32_t x604 = 6676U;
	uint32_t t82 = 110785955U;

	t82 = (x601%(x602&(x603*x604)));

	if (t82 != 48U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x637 = 14809447919LL;
	int8_t x639 = -5;
	uint8_t x640 = 3U;
	volatile int64_t t83 = -25770811142115LL;

	t83 = (x637%(x638&(x639*x640)));

	if (t83 != 175LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x649 = INT64_MIN;
	uint8_t x650 = 3U;
	uint64_t x651 = 60432174LLU;
	static uint8_t x652 = UINT8_MAX;
	uint64_t t84 = 86460740LLU;

	t84 = (x649%(x650&(x651*x652)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x662 = -163960LL;
	int64_t x664 = 638659LL;
	static volatile int64_t t85 = -1LL;

	t85 = (x661%(x662&(x663*x664)));

	if (t85 != -32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x673 = -1;
	uint8_t x674 = 50U;
	int32_t x675 = 1;
	uint16_t x676 = 3U;

	t86 = (x673%(x674&(x675*x676)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x681 = 2265398058478LLU;
	volatile uint32_t x682 = UINT32_MAX;
	int32_t x683 = -9;
	uint64_t t87 = 2599764102611LLU;

	t87 = (x681%(x682&(x683*x684)));

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x686 = -1;
	static int64_t x687 = -13274LL;
	int32_t x688 = INT32_MIN;
	volatile int64_t t88 = -104901LL;

	t88 = (x685%(x686&(x687*x688)));

	if (t88 != 56LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x693 = -1;
	uint64_t x694 = 58333867LLU;
	int32_t x695 = -43;
	volatile int16_t x696 = INT16_MIN;
	volatile uint64_t t89 = 2345824LLU;

	t89 = (x693%(x694&(x695*x696)));

	if (t89 != 1048575LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x709 = -1;
	int32_t x710 = INT32_MAX;
	int16_t x711 = 14;
	uint8_t x712 = 114U;
	int32_t t90 = 3;

	t90 = (x709%(x710&(x711*x712)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x718 = 874888U;
	volatile int64_t x719 = -1LL;
	static uint32_t x720 = 1582U;
	int64_t t91 = 349897LL;

	t91 = (x717%(x718&(x719*x720)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x722 = -1;
	static volatile int16_t x723 = 2;
	volatile int8_t x724 = INT8_MIN;
	static int32_t t92 = -16573747;

	t92 = (x721%(x722&(x723*x724)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x741 = INT64_MIN;
	static volatile int64_t x743 = -1LL;
	int8_t x744 = INT8_MIN;

	t93 = (x741%(x742&(x743*x744)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x749 = INT64_MIN;
	uint8_t x750 = 1U;
	static uint64_t x751 = UINT64_MAX;
	volatile uint16_t x752 = 509U;
	volatile uint64_t t94 = 15LLU;

	t94 = (x749%(x750&(x751*x752)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x766 = -2294273672357LL;
	int8_t x767 = -1;
	int64_t t95 = 774451LL;

	t95 = (x765%(x766&(x767*x768)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x777 = INT16_MIN;
	volatile int16_t x778 = INT16_MAX;
	volatile uint64_t x779 = 2414697586244LLU;
	volatile uint64_t t96 = 1004LLU;

	t96 = (x777%(x778&(x779*x780)));

	if (t96 != 12800LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x781 = INT8_MIN;
	int16_t x782 = -3;
	uint64_t x783 = 1768799602LLU;
	int32_t x784 = INT32_MIN;
	uint64_t t97 = 5721LLU;

	t97 = (x781%(x782&(x783*x784)));

	if (t97 != 3798468221883907968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x785 = 3259U;
	volatile int64_t x786 = INT64_MAX;
	uint8_t x787 = 1U;
	volatile int64_t t98 = 208133LL;

	t98 = (x785%(x786&(x787*x788)));

	if (t98 != 3259LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x794 = UINT64_MAX;
	volatile int16_t x795 = -1;
	volatile int16_t x796 = INT16_MIN;
	static volatile uint64_t t99 = 766465LLU;

	t99 = (x793%(x794&(x795*x796)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

