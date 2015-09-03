#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 19453072932116210LLU;
volatile int64_t t0 = -31825331089LL;
int32_t x13 = INT32_MAX;
int16_t x17 = INT16_MAX;
uint64_t x21 = 728LLU;
volatile uint64_t t4 = 2687LLU;
static uint8_t x25 = UINT8_MAX;
int16_t x28 = INT16_MAX;
volatile int32_t t5 = -259209652;
int16_t x30 = INT16_MIN;
static uint32_t x32 = UINT32_MAX;
int32_t x38 = INT32_MAX;
uint32_t x42 = UINT32_MAX;
static int16_t x44 = INT16_MAX;
int16_t x51 = -19;
int16_t x52 = 19;
int32_t x61 = 689703120;
static volatile int64_t t12 = INT64_MAX;
volatile int32_t t13 = 14;
uint64_t x89 = UINT64_MAX;
int16_t x90 = INT16_MIN;
int32_t x99 = INT32_MAX;
int16_t x110 = -13655;
uint64_t x112 = 1454684698194547LLU;
int32_t x124 = -1;
uint8_t x129 = 3U;
volatile int64_t x137 = 22954583787810078LL;
static volatile uint8_t x139 = 35U;
uint64_t x141 = UINT64_MAX;
int64_t x143 = INT64_MAX;
static uint8_t x148 = UINT8_MAX;
uint8_t x149 = 0U;
uint32_t x151 = 581717931U;
int64_t x167 = INT64_MIN;
uint32_t x180 = UINT32_MAX;
int32_t x210 = INT32_MIN;
int32_t x217 = INT32_MAX;
int32_t x227 = 2;
int64_t x231 = INT64_MIN;
uint32_t x235 = 1U;
volatile int32_t t34 = -2379950;
static int32_t x244 = INT32_MIN;
static int32_t x249 = INT32_MAX;
uint64_t x250 = UINT64_MAX;
static int32_t t37 = -3644;
volatile int16_t x254 = 2473;
uint32_t x256 = 2U;
volatile uint8_t x258 = 56U;
volatile int32_t t39 = 750;
uint64_t x268 = UINT64_MAX;
uint16_t x269 = UINT16_MAX;
uint64_t x270 = 231180317LLU;
volatile int64_t t42 = 3LL;
volatile uint32_t x297 = 1749033888U;
int32_t x299 = INT32_MIN;
static volatile uint32_t t46 = 1378083U;
int32_t x306 = INT32_MIN;
static uint16_t x312 = 173U;
volatile uint64_t t49 = 4691900LLU;
int8_t x328 = -1;
int32_t x330 = INT32_MIN;
int8_t x343 = -1;
uint32_t x349 = 284250776U;
int16_t x369 = INT16_MAX;
static int32_t x376 = INT32_MAX;
int64_t x379 = INT64_MIN;
uint64_t x382 = 6641081LLU;
uint8_t x383 = 2U;
int64_t x388 = -929LL;
volatile int64_t x395 = INT64_MIN;
uint16_t x396 = 20U;
uint64_t x398 = 7LLU;
static int32_t x404 = 41;
volatile int32_t t63 = -330782;
int8_t x407 = 0;
static uint64_t t64 = UINT64_MAX;
volatile int32_t x410 = INT32_MIN;
int64_t x422 = INT64_MIN;
volatile int8_t x427 = INT8_MIN;
int8_t x438 = -1;
static uint64_t x440 = UINT64_MAX;
uint16_t x449 = 17178U;
static int32_t x450 = -1;
int8_t x452 = INT8_MAX;
static volatile int32_t t71 = 24347;
volatile uint32_t x455 = UINT32_MAX;
static volatile int64_t x481 = 157LL;
volatile int64_t x509 = 128172994413468428LL;
int16_t x510 = INT16_MAX;
volatile int32_t x512 = INT32_MIN;
static volatile uint8_t x514 = 1U;
uint64_t x521 = 14044322148LLU;
volatile uint64_t t80 = UINT64_MAX;
int32_t x529 = 10276;
uint64_t x554 = UINT64_MAX;
volatile uint32_t x557 = UINT32_MAX;
int32_t x567 = INT32_MAX;
int64_t x576 = -1LL;
uint8_t x581 = 5U;
static int32_t x582 = -380;
volatile int32_t x598 = 2846929;
volatile int8_t x600 = 6;
volatile int32_t t91 = -1;
int16_t x602 = INT16_MIN;
static uint64_t x604 = 2146269472077205LLU;
volatile uint64_t t93 = 2016727143754435LLU;
volatile int8_t x609 = 1;
volatile int8_t x610 = 0;
volatile int32_t x615 = INT32_MIN;
static int16_t x616 = -816;
static int64_t x633 = INT64_MAX;
uint64_t x634 = 5607898543138LLU;
int64_t t97 = 27618878347965186LL;
uint16_t x637 = 3109U;
uint16_t x640 = 3U;
static int32_t t98 = 507006424;
uint8_t x645 = 39U;
static uint8_t x646 = UINT8_MAX;


void f0(void) {
	static uint8_t x1 = 1U;
	volatile uint32_t x3 = UINT32_MAX;
	static int64_t x4 = -1LL;

	t0 = ((x1>>(x2<x3))|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 1U;
	int8_t x10 = -7;
	uint8_t x11 = 7U;
	int32_t x12 = -1;
	volatile int32_t t1 = -101;

	t1 = ((x9>>(x10<x11))|x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x14 = UINT8_MAX;
	static uint8_t x15 = 19U;
	int64_t x16 = -1LL;
	int64_t t2 = -781590168048143LL;

	t2 = ((x13>>(x14<x15))|x16);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 5214266331LLU;
	uint16_t x19 = UINT16_MAX;
	int32_t x20 = -6133316;
	volatile int32_t t3 = -126;

	t3 = ((x17>>(x18<x19))|x20);

	if (t3 != -6127617) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x22 = UINT8_MAX;
	uint64_t x23 = UINT64_MAX;
	int32_t x24 = -10605;

	t4 = ((x21>>(x22<x23))|x24);

	if (t4 != 18446744073709541375LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MIN;
	int8_t x27 = -4;

	t5 = ((x25>>(x26<x27))|x28);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = 1;
	volatile int64_t x31 = 1659223227LL;
	static volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x29>>(x30<x31))|x32);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	volatile int8_t x34 = INT8_MAX;
	volatile int16_t x35 = 1;
	int8_t x36 = INT8_MAX;
	int32_t t7 = INT32_MAX;

	t7 = ((x33>>(x34<x35))|x36);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 0U;
	static int64_t x39 = INT64_MIN;
	uint32_t x40 = 7553U;
	volatile uint32_t t8 = 287354072U;

	t8 = ((x37>>(x38<x39))|x40);

	if (t8 != 7553U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 1799;
	uint16_t x43 = UINT16_MAX;
	static volatile int32_t t9 = -6813343;

	t9 = ((x41>>(x42<x43))|x44);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 27512U;
	int16_t x46 = INT16_MIN;
	volatile int8_t x47 = -30;
	uint16_t x48 = 0U;
	int32_t t10 = -29448042;

	t10 = ((x45>>(x46<x47))|x48);

	if (t10 != 13756) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = 26862672U;
	volatile int64_t x50 = -7302LL;
	static volatile uint32_t t11 = 225U;

	t11 = ((x49>>(x50<x51))|x52);

	if (t11 != 13431355U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x62 = INT16_MIN;
	uint32_t x63 = UINT32_MAX;
	static int64_t x64 = INT64_MAX;

	t12 = ((x61>>(x62<x63))|x64);

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = 342U;
	uint32_t x70 = 1836958U;
	static int32_t x71 = -365;
	int16_t x72 = INT16_MIN;

	t13 = ((x69>>(x70<x71))|x72);

	if (t13 != -32597) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x73 = UINT8_MAX;
	uint8_t x74 = 18U;
	uint64_t x75 = 2126751155585930LLU;
	int32_t x76 = -1;
	volatile int32_t t14 = -54;

	t14 = ((x73>>(x74<x75))|x76);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x91 = -1;
	int16_t x92 = -388;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = ((x89>>(x90<x91))|x92);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x93 = 6U;
	int16_t x94 = INT16_MIN;
	int32_t x95 = 20;
	int16_t x96 = INT16_MIN;
	int32_t t16 = 1341;

	t16 = ((x93>>(x94<x95))|x96);

	if (t16 != -32765) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x97 = INT16_MAX;
	int16_t x98 = 1634;
	uint64_t x100 = 3720LLU;
	static volatile uint64_t t17 = 1408773688151952LLU;

	t17 = ((x97>>(x98<x99))|x100);

	if (t17 != 16383LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = 3249213831006LL;
	int8_t x102 = INT8_MAX;
	static int16_t x103 = INT16_MAX;
	int64_t x104 = -1LL;
	volatile int64_t t18 = -35759LL;

	t18 = ((x101>>(x102<x103))|x104);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x109 = 1;
	volatile int8_t x111 = 36;
	volatile uint64_t t19 = 1443LLU;

	t19 = ((x109>>(x110<x111))|x112);

	if (t19 != 1454684698194547LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x121 = 324871372LL;
	int64_t x122 = -416773LL;
	int16_t x123 = INT16_MIN;
	static int64_t t20 = 394311233060LL;

	t20 = ((x121>>(x122<x123))|x124);

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x130 = UINT64_MAX;
	volatile uint32_t x131 = 85771U;
	static int8_t x132 = INT8_MIN;
	static int32_t t21 = 1073543781;

	t21 = ((x129>>(x130<x131))|x132);

	if (t21 != -125) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x138 = 39U;
	int32_t x140 = -767955;
	volatile int64_t t22 = -12930LL;

	t22 = ((x137>>(x138<x139))|x140);

	if (t22 != -529089LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x142 = 0U;
	volatile int16_t x144 = -1;
	static uint64_t t23 = UINT64_MAX;

	t23 = ((x141>>(x142<x143))|x144);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = INT16_MIN;
	static volatile int32_t x147 = -1;
	volatile int32_t t24 = -852014;

	t24 = ((x145>>(x146<x147))|x148);

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x150 = 13000U;
	volatile uint32_t x152 = UINT32_MAX;
	uint32_t t25 = UINT32_MAX;

	t25 = ((x149>>(x150<x151))|x152);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x157 = 18770171U;
	int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -1;
	volatile uint32_t t26 = UINT32_MAX;

	t26 = ((x157>>(x158<x159))|x160);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	static int8_t x168 = INT8_MIN;
	volatile int32_t t27 = -54145353;

	t27 = ((x165>>(x166<x167))|x168);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	int64_t x175 = 903779632041619LL;
	int8_t x176 = -4;
	volatile int32_t t28 = 100168012;

	t28 = ((x173>>(x174<x175))|x176);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x177 = 14525663091LLU;
	int32_t x178 = -495;
	uint64_t x179 = 3790850772679110099LLU;
	uint64_t t29 = 8123915LLU;

	t29 = ((x177>>(x178<x179))|x180);

	if (t29 != 17179869183LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x209 = UINT32_MAX;
	static int32_t x211 = 100;
	int64_t x212 = 2LL;
	volatile int64_t t30 = 1LL;

	t30 = ((x209>>(x210<x211))|x212);

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x218 = UINT64_MAX;
	int8_t x219 = -1;
	volatile int64_t x220 = -1LL;
	int64_t t31 = 391293427948064LL;

	t31 = ((x217>>(x218<x219))|x220);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x225 = 5U;
	static uint32_t x226 = 140356103U;
	volatile int16_t x228 = 11397;
	static volatile int32_t t32 = -1149;

	t32 = ((x225>>(x226<x227))|x228);

	if (t32 != 11397) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	uint8_t x232 = UINT8_MAX;
	int32_t t33 = -9938;

	t33 = ((x229>>(x230<x231))|x232);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x233 = 0U;
	static volatile uint64_t x234 = UINT64_MAX;
	int8_t x236 = INT8_MIN;

	t34 = ((x233>>(x234<x235))|x236);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x237 = 40089333LLU;
	static int64_t x238 = 3764156708277LL;
	uint8_t x239 = UINT8_MAX;
	volatile uint64_t x240 = 3629493272374199352LLU;
	uint64_t t35 = 2454002116272LLU;

	t35 = ((x237>>(x238<x239))|x240);

	if (t35 != 3629493272380700413LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x241 = 19415U;
	static int16_t x242 = -1;
	uint16_t x243 = 0U;
	volatile int32_t t36 = -58218;

	t36 = ((x241>>(x242<x243))|x244);

	if (t36 != -2147473941) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x251 = 15U;
	int32_t x252 = INT32_MIN;

	t37 = ((x249>>(x250<x251))|x252);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x253 = INT32_MAX;
	static int8_t x255 = 11;
	volatile uint32_t t38 = 70446U;

	t38 = ((x253>>(x254<x255))|x256);

	if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x257 = 16U;
	int16_t x259 = 23;
	volatile int8_t x260 = INT8_MIN;

	t39 = ((x257>>(x258<x259))|x260);

	if (t39 != -112) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x261 = 4U;
	uint64_t x262 = 1215768634LLU;
	uint32_t x263 = UINT32_MAX;
	static volatile int64_t x264 = INT64_MAX;
	int64_t t40 = INT64_MAX;

	t40 = ((x261>>(x262<x263))|x264);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x265 = 65LLU;
	volatile int32_t x266 = INT32_MIN;
	int8_t x267 = -14;
	uint64_t t41 = UINT64_MAX;

	t41 = ((x265>>(x266<x267))|x268);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x271 = -274386002;
	static int64_t x272 = -54646LL;

	t42 = ((x269>>(x270<x271))|x272);

	if (t42 != -32769LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x285 = 3;
	static int8_t x286 = -39;
	uint32_t x287 = UINT32_MAX;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x285>>(x286<x287))|x288);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x289 = 415364011LLU;
	uint32_t x290 = 3U;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	static uint64_t t44 = 7596371228849462596LLU;

	t44 = ((x289>>(x290<x291))|x292);

	if (t44 != 18446744071769749973LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x293 = INT8_MAX;
	uint8_t x294 = 0U;
	uint8_t x295 = 115U;
	int8_t x296 = INT8_MAX;
	volatile int32_t t45 = 3;

	t45 = ((x293>>(x294<x295))|x296);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x298 = INT64_MIN;
	uint16_t x300 = 6564U;

	t46 = ((x297>>(x298<x299))|x300);

	if (t46 != 874519028U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x301 = 3U;
	int64_t x302 = INT64_MAX;
	volatile int8_t x303 = INT8_MAX;
	int64_t x304 = -1LL;
	int64_t t47 = 7312LL;

	t47 = ((x301>>(x302<x303))|x304);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x305 = INT64_MAX;
	int16_t x307 = -1;
	int64_t x308 = -214428LL;
	volatile int64_t t48 = -263843046LL;

	t48 = ((x305>>(x306<x307))|x308);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x309 = 38754145639221145LLU;
	uint64_t x310 = 3680255LLU;
	uint16_t x311 = 6181U;

	t49 = ((x309>>(x310<x311))|x312);

	if (t49 != 38754145639221181LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x325 = INT32_MAX;
	uint64_t x326 = 63550070LLU;
	int32_t x327 = 1479510;
	int32_t t50 = -262821305;

	t50 = ((x325>>(x326<x327))|x328);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x329 = 0;
	volatile int32_t x331 = -1;
	static uint32_t x332 = 51443U;
	uint32_t t51 = 60748947U;

	t51 = ((x329>>(x330<x331))|x332);

	if (t51 != 51443U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x341 = 6U;
	int8_t x342 = INT8_MIN;
	volatile int16_t x344 = INT16_MIN;
	int32_t t52 = 7912529;

	t52 = ((x341>>(x342<x343))|x344);

	if (t52 != -32765) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x350 = 2004800;
	int32_t x351 = INT32_MIN;
	static int16_t x352 = -15355;
	uint32_t t53 = 9694U;

	t53 = ((x349>>(x350<x351))|x352);

	if (t53 != 4294956701U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x357 = INT8_MAX;
	uint64_t x358 = 101054983162221751LLU;
	static int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MAX;
	volatile int32_t t54 = INT32_MAX;

	t54 = ((x357>>(x358<x359))|x360);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x361 = 2U;
	int8_t x362 = INT8_MIN;
	uint32_t x363 = 157U;
	uint64_t x364 = 5LLU;
	volatile uint64_t t55 = 156818217LLU;

	t55 = ((x361>>(x362<x363))|x364);

	if (t55 != 7LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x370 = INT8_MAX;
	uint8_t x371 = 3U;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t56 = -61939260;

	t56 = ((x369>>(x370<x371))|x372);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x373 = UINT16_MAX;
	static int64_t x374 = INT64_MIN;
	static int8_t x375 = 7;
	int32_t t57 = INT32_MAX;

	t57 = ((x373>>(x374<x375))|x376);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x377 = UINT8_MAX;
	uint32_t x378 = UINT32_MAX;
	static uint32_t x380 = 65412407U;
	uint32_t t58 = 228U;

	t58 = ((x377>>(x378<x379))|x380);

	if (t58 != 65412607U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x381 = INT64_MAX;
	int64_t x384 = -3903135849916006628LL;
	int64_t t59 = -447025676306LL;

	t59 = ((x381>>(x382<x383))|x384);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x385 = UINT8_MAX;
	int16_t x386 = INT16_MAX;
	static volatile int32_t x387 = INT32_MIN;
	volatile int64_t t60 = -1LL;

	t60 = ((x385>>(x386<x387))|x388);

	if (t60 != -769LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 4LLU;
	volatile uint64_t t61 = 15948403714315341LLU;

	t61 = ((x393>>(x394<x395))|x396);

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x397 = 0;
	int32_t x399 = -1405781;
	int8_t x400 = INT8_MIN;
	volatile int32_t t62 = 154244486;

	t62 = ((x397>>(x398<x399))|x400);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x401 = 115U;
	int32_t x402 = -28671;
	uint8_t x403 = UINT8_MAX;

	t63 = ((x401>>(x402<x403))|x404);

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 12U;
	int64_t x408 = 4846936LL;

	t64 = ((x405>>(x406<x407))|x408);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x409 = 19862U;
	int64_t x411 = -1LL;
	volatile int8_t x412 = -1;
	int32_t t65 = -2;

	t65 = ((x409>>(x410<x411))|x412);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x413 = 34U;
	int8_t x414 = -61;
	int32_t x415 = -3;
	uint8_t x416 = 95U;
	volatile int32_t t66 = -29722167;

	t66 = ((x413>>(x414<x415))|x416);

	if (t66 != 95) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x417 = 1U;
	volatile int8_t x418 = INT8_MIN;
	volatile int8_t x419 = -6;
	uint32_t x420 = 23U;
	volatile uint32_t t67 = 992496U;

	t67 = ((x417>>(x418<x419))|x420);

	if (t67 != 23U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x421 = INT32_MAX;
	int32_t x423 = 312945543;
	uint32_t x424 = UINT32_MAX;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = ((x421>>(x422<x423))|x424);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x425 = 22683337294311LLU;
	uint64_t x426 = 6874817936893835802LLU;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t69 = 214912688LLU;

	t69 = ((x425>>(x426<x427))|x428);

	if (t69 != 9223383378523422963LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x437 = 1;
	int32_t x439 = -1;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = ((x437>>(x438<x439))|x440);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x451 = INT16_MIN;

	t71 = ((x449>>(x450<x451))|x452);

	if (t71 != 17279) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x453 = INT16_MAX;
	uint64_t x454 = UINT64_MAX;
	static int64_t x456 = INT64_MIN;
	volatile int64_t t72 = -13938582859295LL;

	t72 = ((x453>>(x454<x455))|x456);

	if (t72 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x461 = INT16_MAX;
	int8_t x462 = -1;
	uint8_t x463 = 121U;
	int16_t x464 = -1;
	int32_t t73 = -520764;

	t73 = ((x461>>(x462<x463))|x464);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x473 = INT16_MAX;
	int32_t x474 = -1;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 45165753U;
	uint32_t t74 = 47249U;

	t74 = ((x473>>(x474<x475))|x476);

	if (t74 != 45187071U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x482 = 8U;
	int64_t x483 = -1LL;
	volatile int8_t x484 = INT8_MIN;
	volatile int64_t t75 = 5951121281LL;

	t75 = ((x481>>(x482<x483))|x484);

	if (t75 != -99LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x485 = 2029;
	uint16_t x486 = UINT16_MAX;
	static uint8_t x487 = UINT8_MAX;
	int64_t x488 = 25405917852710LL;
	volatile int64_t t76 = 240345514LL;

	t76 = ((x485>>(x486<x487))|x488);

	if (t76 != 25405917853679LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x511 = 2838711LLU;
	static volatile int64_t t77 = 282735123374890214LL;

	t77 = ((x509>>(x510<x511))|x512);

	if (t77 != -454554234LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x513 = 6U;
	static int16_t x515 = INT16_MAX;
	static uint8_t x516 = UINT8_MAX;
	int32_t t78 = -1651;

	t78 = ((x513>>(x514<x515))|x516);

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x517 = INT32_MAX;
	int16_t x518 = -42;
	uint32_t x519 = UINT32_MAX;
	int16_t x520 = -9;
	int32_t t79 = 59;

	t79 = ((x517>>(x518<x519))|x520);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x522 = INT32_MIN;
	int32_t x523 = INT32_MIN;
	volatile int32_t x524 = -1;

	t80 = ((x521>>(x522<x523))|x524);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x525 = INT16_MAX;
	int64_t x526 = INT64_MIN;
	volatile uint64_t x527 = 495531636601LLU;
	int8_t x528 = -4;
	volatile int32_t t81 = -99414742;

	t81 = ((x525>>(x526<x527))|x528);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x530 = 20U;
	int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	static int32_t t82 = 256150884;

	t82 = ((x529>>(x530<x531))|x532);

	if (t82 != -22492) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x541 = 238U;
	int64_t x542 = -1LL;
	uint16_t x543 = 6449U;
	int64_t x544 = INT64_MIN;
	volatile int64_t t83 = 1018486662678926LL;

	t83 = ((x541>>(x542<x543))|x544);

	if (t83 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x545 = 455U;
	uint8_t x546 = 2U;
	uint16_t x547 = 318U;
	int16_t x548 = INT16_MIN;
	uint32_t t84 = 3448U;

	t84 = ((x545>>(x546<x547))|x548);

	if (t84 != 4294934755U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x553 = 386051693964411LL;
	uint64_t x555 = 45LLU;
	int64_t x556 = INT64_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = ((x553>>(x554<x555))|x556);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x558 = -1;
	int32_t x559 = INT32_MAX;
	int32_t x560 = INT32_MIN;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x557>>(x558<x559))|x560);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x565 = UINT16_MAX;
	int16_t x566 = INT16_MAX;
	uint8_t x568 = 38U;
	int32_t t87 = 112510584;

	t87 = ((x565>>(x566<x567))|x568);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x573 = 906865396729491LL;
	uint32_t x574 = UINT32_MAX;
	volatile int64_t x575 = -43791110LL;
	volatile int64_t t88 = -105LL;

	t88 = ((x573>>(x574<x575))|x576);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x577 = 896148900116787LLU;
	volatile int32_t x578 = INT32_MIN;
	uint32_t x579 = UINT32_MAX;
	int32_t x580 = INT32_MIN;
	volatile uint64_t t89 = 2412139023993495055LLU;

	t89 = ((x577>>(x578<x579))|x580);

	if (t89 != 18446744073548971161LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x583 = -2924;
	int8_t x584 = INT8_MIN;
	volatile int32_t t90 = 30;

	t90 = ((x581>>(x582<x583))|x584);

	if (t90 != -123) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x597 = 7;
	uint32_t x599 = 186U;

	t91 = ((x597>>(x598<x599))|x600);

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x601 = INT16_MAX;
	uint32_t x603 = UINT32_MAX;
	static uint64_t t92 = 113090926LLU;

	t92 = ((x601>>(x602<x603))|x604);

	if (t92 != 2146269472079871LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x605 = 10LLU;
	int32_t x606 = INT32_MAX;
	static uint32_t x607 = 105374389U;
	uint32_t x608 = 709U;

	t93 = ((x605>>(x606<x607))|x608);

	if (t93 != 719LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x611 = -3;
	int64_t x612 = INT64_MAX;
	int64_t t94 = INT64_MAX;

	t94 = ((x609>>(x610<x611))|x612);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x613 = 3548U;
	int8_t x614 = -1;
	volatile int32_t t95 = 1749017;

	t95 = ((x613>>(x614<x615))|x616);

	if (t95 != -548) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x617 = INT64_MAX;
	uint32_t x618 = 3158U;
	uint8_t x619 = 2U;
	int16_t x620 = -1;
	volatile int64_t t96 = 6LL;

	t96 = ((x617>>(x618<x619))|x620);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x635 = UINT64_MAX;
	static int32_t x636 = -274;

	t97 = ((x633>>(x634<x635))|x636);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x638 = INT64_MAX;
	volatile int16_t x639 = -1;

	t98 = ((x637>>(x638<x639))|x640);

	if (t98 != 3111) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x647 = 194399;
	int16_t x648 = -1;
	int32_t t99 = 265342199;

	t99 = ((x645>>(x646<x647))|x648);

	if (t99 != -1) { NG(); } else { ; }
	
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

