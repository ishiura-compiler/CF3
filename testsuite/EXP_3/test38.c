#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
volatile uint8_t x13 = UINT8_MAX;
volatile int16_t x15 = INT16_MIN;
uint32_t x16 = 155643834U;
uint16_t x19 = 2U;
int16_t x25 = 11219;
uint16_t x37 = 13U;
volatile uint32_t x39 = UINT32_MAX;
int64_t x40 = INT64_MIN;
uint8_t x61 = 2U;
int8_t x68 = 0;
static int16_t x77 = INT16_MAX;
uint64_t x100 = 25607924821LLU;
uint64_t t13 = 621314692LLU;
static uint16_t x106 = UINT16_MAX;
int8_t x117 = INT8_MIN;
uint16_t x143 = 13993U;
int8_t x160 = -1;
static uint64_t t19 = 3519296LLU;
uint32_t x163 = 59U;
volatile int32_t x164 = INT32_MIN;
volatile int32_t t22 = 5;
static uint32_t x174 = UINT32_MAX;
static volatile int32_t x182 = -1;
static uint32_t x185 = UINT32_MAX;
volatile int64_t x187 = INT64_MIN;
int32_t x194 = INT32_MAX;
volatile int8_t x209 = 35;
volatile uint32_t x211 = 35911U;
uint8_t x212 = UINT8_MAX;
static int64_t t30 = 288206521854822LL;
static int16_t x219 = INT16_MAX;
uint64_t x220 = 6855759505154946788LLU;
volatile uint64_t t33 = 7093861867LLU;
static volatile uint16_t x244 = 24180U;
static volatile int64_t t35 = 1779438523LL;
static int64_t x257 = INT64_MAX;
static int8_t x262 = INT8_MAX;
volatile int8_t x263 = -3;
volatile int32_t x267 = -1;
uint64_t t38 = 4307176LLU;
int64_t x272 = INT64_MAX;
int16_t x276 = INT16_MIN;
int64_t x281 = -1LL;
uint8_t x294 = 28U;
uint16_t x308 = 4074U;
int32_t t46 = -5271468;
int32_t x311 = INT32_MAX;
uint64_t x315 = 824074943438LLU;
volatile int64_t x316 = -2080041020456LL;
static volatile int32_t t50 = 69;
uint16_t x332 = UINT16_MAX;
static int64_t x339 = -1LL;
static volatile uint64_t t53 = 126542628064750LLU;
int16_t x351 = -1407;
int32_t t55 = 469644486;
volatile uint64_t t56 = 1LLU;
volatile int16_t x365 = INT16_MAX;
int16_t x366 = -6;
uint16_t x376 = 534U;
static uint64_t t61 = 18512415751265LLU;
int64_t x382 = -1LL;
int16_t x383 = -1;
int8_t x393 = 41;
int8_t x414 = 1;
int32_t x416 = -2;
uint32_t t67 = 97U;
static int16_t x421 = 0;
volatile uint64_t t69 = 9101313713450814212LLU;
int16_t x433 = INT16_MIN;
int8_t x435 = INT8_MAX;
static volatile int32_t t71 = -497836395;
volatile int32_t x446 = INT32_MIN;
static int8_t x465 = 2;
int16_t x478 = INT16_MIN;
static int8_t x480 = INT8_MIN;
int64_t t75 = -843001LL;
int16_t x486 = INT16_MIN;
int8_t x500 = 4;
int64_t t78 = 3LL;
int8_t x504 = -1;
int16_t x516 = -1;
volatile uint32_t t82 = UINT32_MAX;
static int8_t x533 = INT8_MAX;
uint32_t x535 = UINT32_MAX;
uint16_t x540 = UINT16_MAX;
static int16_t x547 = -1;
static volatile int16_t x551 = -1;
int64_t x566 = 2915976LL;
uint32_t x568 = 19993967U;
static int8_t x594 = -1;
uint16_t x606 = 0U;
static int64_t t95 = 43416326146802LL;
int32_t x625 = -1;
int8_t x633 = INT8_MIN;
int64_t x635 = 479227LL;


void f0(void) {
	uint32_t x1 = 5U;
	int64_t x2 = -26772550LL;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -146767142854LL;
	int64_t t0 = 143737419557950LL;

	t0 = ((x1*x2)|(x3+x4));

	if (t0 != -67114310LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int16_t x6 = -1;
	int8_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 0;

	t1 = ((x5*x6)|(x7+x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 11LLU;
	static int16_t x11 = 2959;
	int32_t x12 = INT32_MIN;
	uint64_t t2 = 97031700319LLU;

	t2 = ((x9*x10)|(x11+x12));

	if (t2 != 18446744073709550479LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	volatile uint32_t t3 = 3849946U;

	t3 = ((x13*x14)|(x15+x16));

	if (t3 != 4294967227U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 12;
	uint32_t x18 = 13884U;
	int32_t x20 = INT32_MIN;
	volatile uint32_t t4 = 2009855U;

	t4 = ((x17*x18)|(x19+x20));

	if (t4 != 2147650258U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x26 = 76199546221126LLU;
	volatile uint8_t x27 = 2U;
	int64_t x28 = -1LL;
	volatile uint64_t t5 = 6477994343035704859LLU;

	t5 = ((x25*x26)|(x27+x28));

	if (t5 != 854882709054812595LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x33 = INT8_MIN;
	int32_t x34 = 19;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = INT32_MAX;
	volatile int32_t t6 = 63;

	t6 = ((x33*x34)|(x35+x36));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x38 = 17932386LLU;
	static uint64_t t7 = 252426958459057736LLU;

	t7 = ((x37*x38)|(x39+x40));

	if (t7 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	volatile uint16_t x46 = 3U;
	volatile uint64_t x47 = UINT64_MAX;
	static int64_t x48 = -62206LL;
	volatile uint64_t t8 = 1067LLU;

	t8 = ((x45*x46)|(x47+x48));

	if (t8 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x62 = 0U;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MAX;
	volatile uint64_t t9 = 3847LLU;

	t9 = ((x61*x62)|(x63+x64));

	if (t9 != 32766LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = -1;
	int64_t x66 = -9341789LL;
	int8_t x67 = INT8_MIN;
	static int64_t t10 = -4LL;

	t10 = ((x65*x66)|(x67+x68));

	if (t10 != -35LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x78 = INT8_MIN;
	volatile uint64_t x79 = UINT64_MAX;
	uint16_t x80 = 0U;
	static uint64_t t11 = UINT64_MAX;

	t11 = ((x77*x78)|(x79+x80));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = -1LL;
	int64_t x90 = -5129312LL;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = -1;
	int64_t t12 = 1977LL;

	t12 = ((x89*x90)|(x91+x92));

	if (t12 != 5129470LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x97 = -2;
	int16_t x98 = -1;
	uint16_t x99 = 4U;

	t13 = ((x97*x98)|(x99+x100));

	if (t13 != 25607924827LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 12820U;
	uint32_t t14 = 10372U;

	t14 = ((x105*x106)|(x107+x108));

	if (t14 != 4286591891U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x118 = 510U;
	int16_t x119 = 44;
	int64_t x120 = 29113282631674491LL;
	int64_t t15 = -331868106LL;

	t15 = ((x117*x118)|(x119+x120));

	if (t15 != -21593LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 2645443235705047832LLU;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MIN;
	static uint64_t t16 = 413478231772320732LLU;

	t16 = ((x125*x126)|(x127+x128));

	if (t16 != 10505238451243352063LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x137 = 975U;
	int64_t x138 = -1LL;
	uint64_t x139 = 677009684300513505LLU;
	int8_t x140 = INT8_MAX;
	static uint64_t t17 = 234936830LLU;

	t17 = ((x137*x138)|(x139+x140));

	if (t17 != 18446744073709550961LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x141 = INT8_MAX;
	uint64_t x142 = 1529LLU;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t18 = 3402866319234LLU;

	t18 = ((x141*x142)|(x143+x144));

	if (t18 != 194223LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x157 = 3571584778LLU;
	int32_t x158 = 5307575;
	volatile uint8_t x159 = 2U;

	t19 = ((x157*x158)|(x159+x160));

	if (t19 != 18956454078093351LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x161 = INT16_MIN;
	static uint8_t x162 = 3U;
	volatile uint32_t t20 = 166U;

	t20 = ((x161*x162)|(x163+x164));

	if (t20 != 4294869051U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x165 = 274U;
	int8_t x166 = INT8_MIN;
	static int64_t x167 = 7971LL;
	int64_t x168 = 17243016207590LL;
	static int64_t t21 = -50810LL;

	t21 = ((x165*x166)|(x167+x168));

	if (t21 != -33015LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x169 = INT8_MAX;
	int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 27U;

	t22 = ((x169*x170)|(x171+x172));

	if (t22 != -101) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x175 = 454;
	int8_t x176 = INT8_MAX;
	volatile uint32_t t23 = 219264U;

	t23 = ((x173*x174)|(x175+x176));

	if (t23 != 581U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x181 = UINT32_MAX;
	uint16_t x183 = 17152U;
	int64_t x184 = INT64_MIN;
	int64_t t24 = 3LL;

	t24 = ((x181*x182)|(x183+x184));

	if (t24 != -9223372036854758655LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x186 = 14835185904224LLU;
	int64_t x188 = INT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x185*x186)|(x187+x188));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x189 = 10U;
	int8_t x190 = INT8_MAX;
	static int8_t x191 = -1;
	static uint64_t x192 = 16523727025454LLU;
	uint64_t t26 = 4611998735LLU;

	t26 = ((x189*x190)|(x191+x192));

	if (t26 != 16523727025663LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x193 = 1U;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 0U;
	static volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x193*x194)|(x195+x196));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x205 = INT16_MIN;
	int16_t x206 = INT16_MIN;
	volatile int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	uint32_t t28 = 47U;

	t28 = ((x205*x206)|(x207+x208));

	if (t28 != 4294967167U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x210 = INT16_MAX;
	static uint32_t t29 = 9044993U;

	t29 = ((x209*x210)|(x211+x212));

	if (t29 != 1179615U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x213 = 1;
	int64_t x214 = INT64_MIN;
	static int8_t x215 = 2;
	int16_t x216 = INT16_MAX;

	t30 = ((x213*x214)|(x215+x216));

	if (t30 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x217 = -358417218LL;
	volatile uint16_t x218 = 7839U;
	uint64_t t31 = 4993LLU;

	t31 = ((x217*x218)|(x219+x220));

	if (t31 != 18446741822456544995LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint8_t x226 = 46U;
	static volatile uint8_t x227 = 44U;
	int8_t x228 = 0;
	volatile int32_t t32 = -14450435;

	t32 = ((x225*x226)|(x227+x228));

	if (t32 != 11774) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x233 = UINT16_MAX;
	uint16_t x234 = 13720U;
	uint64_t x235 = 43622LLU;
	volatile uint32_t x236 = UINT32_MAX;

	t33 = ((x233*x234)|(x235+x236));

	if (t33 != 5194115693LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x237 = -3772252;
	int8_t x238 = INT8_MIN;
	volatile int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MAX;
	volatile int64_t t34 = 95622217147LL;

	t34 = ((x237*x238)|(x239+x240));

	if (t34 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = -1LL;
	int32_t x242 = -1;
	int64_t x243 = -1LL;

	t35 = ((x241*x242)|(x243+x244));

	if (t35 != 24179LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x258 = 1;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MIN;
	volatile int64_t t36 = INT64_MAX;

	t36 = ((x257*x258)|(x259+x260));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x261 = INT16_MIN;
	volatile uint16_t x264 = 10028U;
	int32_t t37 = 12180951;

	t37 = ((x261*x262)|(x263+x264));

	if (t37 != -4151511) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = -1LL;
	int32_t x268 = INT32_MAX;

	t38 = ((x265*x266)|(x267+x268));

	if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = -1LL;
	static int64_t x271 = -1308985575144LL;
	uint64_t t39 = 29705528682LLU;

	t39 = ((x269*x270)|(x271+x272));

	if (t39 != 9223370727869200663LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x273 = -1;
	uint32_t x274 = 4U;
	uint16_t x275 = UINT16_MAX;
	volatile uint32_t t40 = UINT32_MAX;

	t40 = ((x273*x274)|(x275+x276));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x277 = INT16_MIN;
	int16_t x278 = -802;
	int16_t x279 = INT16_MIN;
	uint32_t x280 = 77232457U;
	uint32_t t41 = 0U;

	t41 = ((x277*x278)|(x279+x280));

	if (t41 != 93976905U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x282 = INT8_MAX;
	static int16_t x283 = 1;
	int8_t x284 = INT8_MAX;
	static volatile int64_t t42 = -166264757LL;

	t42 = ((x281*x282)|(x283+x284));

	if (t42 != -127LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x289 = 1270;
	int32_t x290 = -19629;
	uint32_t x291 = 1950860762U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t43 = 1850638223141606LL;

	t43 = ((x289*x290)|(x291+x292));

	if (t43 != -20455974LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t44 = -82068;

	t44 = ((x293*x294)|(x295+x296));

	if (t44 != -256) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x301 = -222342231;
	static int8_t x302 = -1;
	volatile int64_t x303 = -1LL;
	volatile int32_t x304 = 218510;
	int64_t t45 = -1LL;

	t45 = ((x301*x302)|(x303+x304));

	if (t45 != 222559711LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MIN;
	int32_t x307 = -1;

	t46 = ((x305*x306)|(x307+x308));

	if (t46 != 20457) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	int16_t x312 = INT16_MIN;
	static int32_t t47 = 3663053;

	t47 = ((x309*x310)|(x311+x312));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x313 = 267329456LLU;
	int8_t x314 = INT8_MAX;
	uint64_t t48 = 39760921LLU;

	t48 = ((x313*x314)|(x315+x316));

	if (t48 != 18446742836619952118LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x321 = 26;
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = 8;
	static volatile int32_t x324 = INT32_MIN;
	int32_t t49 = -886369892;

	t49 = ((x321*x322)|(x323+x324));

	if (t49 != -851960) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x325 = -1;
	uint16_t x326 = 2U;
	int16_t x327 = INT16_MIN;
	static int8_t x328 = INT8_MAX;

	t50 = ((x325*x326)|(x327+x328));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x329 = UINT32_MAX;
	static uint16_t x330 = UINT16_MAX;
	volatile int64_t x331 = 30LL;
	static volatile int64_t t51 = -6092002298799LL;

	t51 = ((x329*x330)|(x331+x332));

	if (t51 != 4294901789LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x333 = INT8_MIN;
	volatile uint32_t x334 = 1U;
	static int32_t x335 = INT32_MAX;
	volatile int32_t x336 = INT32_MIN;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = ((x333*x334)|(x335+x336));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x337 = 5429668LLU;
	static int8_t x338 = INT8_MIN;
	volatile uint32_t x340 = 377823319U;

	t53 = ((x337*x338)|(x339+x340));

	if (t53 != 18446744073014816342LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x341 = -1;
	int32_t x342 = -1;
	volatile int8_t x343 = INT8_MAX;
	int8_t x344 = -1;
	volatile int32_t t54 = -24651245;

	t54 = ((x341*x342)|(x343+x344));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x349 = -7;
	uint16_t x350 = 436U;
	static uint8_t x352 = 56U;

	t55 = ((x349*x350)|(x351+x352));

	if (t55 != -323) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x353 = -13;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;

	t56 = ((x353*x354)|(x355+x356));

	if (t56 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x357 = INT16_MAX;
	static uint8_t x358 = UINT8_MAX;
	volatile int64_t x359 = INT64_MIN;
	static int16_t x360 = 7945;
	volatile int64_t t57 = 11135216155367769LL;

	t57 = ((x357*x358)|(x359+x360));

	if (t57 != -9223372036846420215LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x367 = INT8_MIN;
	uint8_t x368 = 3U;
	int32_t t58 = 101246;

	t58 = ((x365*x366)|(x367+x368));

	if (t58 != -121) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x369 = -1;
	uint32_t x370 = 144451175U;
	uint32_t x371 = 87943520U;
	int8_t x372 = -1;
	uint32_t t59 = 4U;

	t59 = ((x369*x370)|(x371+x372));

	if (t59 != 4152359391U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x373 = -1LL;
	volatile int64_t x374 = INT64_MAX;
	static int8_t x375 = -1;
	static volatile int64_t t60 = -1547117464LL;

	t60 = ((x373*x374)|(x375+x376));

	if (t60 != -9223372036854775275LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x377 = 4007622833559LLU;
	uint8_t x378 = 1U;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = 1;

	t61 = ((x377*x378)|(x379+x380));

	if (t61 != 4007622833559LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x381 = UINT16_MAX;
	static uint32_t x384 = UINT32_MAX;
	int64_t t62 = -82144930LL;

	t62 = ((x381*x382)|(x383+x384));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = 7U;
	static volatile int32_t x388 = INT32_MIN;
	volatile int32_t t63 = 61;

	t63 = ((x385*x386)|(x387+x388));

	if (t63 != -8388473) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 83U;
	uint8_t x392 = 11U;
	int64_t t64 = -7848109302152LL;

	t64 = ((x389*x390)|(x391+x392));

	if (t64 != 222LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x394 = 9204285284LLU;
	static int64_t x395 = INT64_MAX;
	static int64_t x396 = -1LL;
	uint64_t t65 = 17072LLU;

	t65 = ((x393*x394)|(x395+x396));

	if (t65 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x413 = -123;
	uint8_t x415 = UINT8_MAX;
	volatile int32_t t66 = -3646715;

	t66 = ((x413*x414)|(x415+x416));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x417 = -867364;
	uint8_t x418 = 7U;
	uint32_t x419 = 1063735U;
	int8_t x420 = INT8_MIN;

	t67 = ((x417*x418)|(x419+x420));

	if (t67 != 4289952695U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x422 = INT32_MAX;
	uint16_t x423 = UINT16_MAX;
	uint32_t x424 = 1135695647U;
	uint32_t t68 = 0U;

	t68 = ((x421*x422)|(x423+x424));

	if (t68 != 1135761182U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x429 = 2171U;
	volatile uint64_t x430 = UINT64_MAX;
	static int64_t x431 = -1LL;
	uint16_t x432 = 909U;

	t69 = ((x429*x430)|(x431+x432));

	if (t69 != 18446744073709549453LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x434 = UINT64_MAX;
	int32_t x436 = -1;
	volatile uint64_t t70 = 19463027067LLU;

	t70 = ((x433*x434)|(x435+x436));

	if (t70 != 32894LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x441 = INT16_MIN;
	int8_t x442 = 31;
	static int32_t x443 = -1;
	static int32_t x444 = 114;

	t71 = ((x441*x442)|(x443+x444));

	if (t71 != -1015695) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x445 = 0U;
	uint64_t x447 = 124480336375692LLU;
	uint64_t x448 = 2039LLU;
	static volatile uint64_t t72 = 62458141784099998LLU;

	t72 = ((x445*x446)|(x447+x448));

	if (t72 != 124480336377731LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = 107575462U;
	uint8_t x463 = 12U;
	uint16_t x464 = 856U;
	volatile uint32_t t73 = 31U;

	t73 = ((x461*x462)|(x463+x464));

	if (t73 != 3410210660U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x466 = -299;
	volatile uint16_t x467 = UINT16_MAX;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t74 = 13435642;

	t74 = ((x465*x466)|(x467+x468));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x477 = INT16_MIN;
	int64_t x479 = 434191905LL;

	t75 = ((x477*x478)|(x479+x480));

	if (t75 != 1507933601LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x485 = -5;
	int16_t x487 = INT16_MIN;
	int8_t x488 = INT8_MIN;
	static volatile int32_t t76 = -1;

	t76 = ((x485*x486)|(x487+x488));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x489 = -1;
	uint16_t x490 = 52U;
	int16_t x491 = -15440;
	static int8_t x492 = INT8_MIN;
	int32_t t77 = -11080;

	t77 = ((x489*x490)|(x491+x492));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x497 = -55;
	static volatile int32_t x498 = 12671421;
	int64_t x499 = INT64_MIN;

	t78 = ((x497*x498)|(x499+x500));

	if (t78 != -696928155LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x501 = 1289;
	volatile uint64_t x502 = 436548492994608LLU;
	volatile uint8_t x503 = 5U;
	volatile uint64_t t79 = 3223LLU;

	t79 = ((x501*x502)|(x503+x504));

	if (t79 != 562711007470049716LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x509 = -2;
	int64_t x510 = -209254236025LL;
	uint64_t x511 = 672LLU;
	static uint16_t x512 = 6U;
	volatile uint64_t t80 = 3580LLU;

	t80 = ((x509*x510)|(x511+x512));

	if (t80 != 418508472054LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x513 = 38026741U;
	static volatile int8_t x514 = 0;
	volatile uint8_t x515 = 8U;
	volatile uint32_t t81 = 187793755U;

	t81 = ((x513*x514)|(x515+x516));

	if (t81 != 7U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x525 = UINT32_MAX;
	static volatile uint16_t x526 = 23567U;
	volatile uint8_t x527 = 0U;
	uint16_t x528 = UINT16_MAX;

	t82 = ((x525*x526)|(x527+x528));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x534 = INT8_MIN;
	uint16_t x536 = UINT16_MAX;
	volatile uint32_t t83 = 111U;

	t83 = ((x533*x534)|(x535+x536));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x537 = -1LL;
	static volatile int64_t x538 = INT64_MAX;
	uint16_t x539 = UINT16_MAX;
	int64_t t84 = -93418LL;

	t84 = ((x537*x538)|(x539+x540));

	if (t84 != -9223372036854644737LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x545 = -1LL;
	uint64_t x546 = 22806740458359527LLU;
	int8_t x548 = -1;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x545*x546)|(x547+x548));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x549 = 2;
	uint32_t x550 = 4151U;
	int64_t x552 = -1LL;
	volatile int64_t t86 = -1502LL;

	t86 = ((x549*x550)|(x551+x552));

	if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x553 = 3;
	int64_t x554 = -5169LL;
	uint32_t x555 = 24U;
	int16_t x556 = -1;
	volatile int64_t t87 = 1LL;

	t87 = ((x553*x554)|(x555+x556));

	if (t87 != -15489LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x561 = INT16_MIN;
	uint8_t x562 = UINT8_MAX;
	int8_t x563 = -3;
	int64_t x564 = -239672671815316673LL;
	int64_t t88 = -501993194456090LL;

	t88 = ((x561*x562)|(x563+x564));

	if (t88 != -7025860LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x565 = 21U;
	uint16_t x567 = 3355U;
	int64_t t89 = -1LL;

	t89 = ((x565*x566)|(x567+x568));

	if (t89 != 62350250LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x569 = 15830;
	int8_t x570 = -22;
	int64_t x571 = INT64_MIN;
	static int32_t x572 = 2;
	static volatile int64_t t90 = -10822549984203LL;

	t90 = ((x569*x570)|(x571+x572));

	if (t90 != -348258LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x577 = -1LL;
	int16_t x578 = INT16_MIN;
	static int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MIN;
	int64_t t91 = 102990696811LL;

	t91 = ((x577*x578)|(x579+x580));

	if (t91 != -256LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x589 = UINT32_MAX;
	int8_t x590 = INT8_MAX;
	int64_t x591 = INT64_MIN;
	uint64_t x592 = UINT64_MAX;
	uint64_t t92 = 85774425597333375LLU;

	t92 = ((x589*x590)|(x591+x592));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x593 = -1;
	int16_t x595 = INT16_MIN;
	int64_t x596 = INT64_MAX;
	volatile int64_t t93 = -839482LL;

	t93 = ((x593*x594)|(x595+x596));

	if (t93 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x605 = INT16_MIN;
	static int32_t x607 = -1;
	volatile int8_t x608 = INT8_MIN;
	int32_t t94 = 270859148;

	t94 = ((x605*x606)|(x607+x608));

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x609 = -1;
	volatile int64_t x610 = 71033472882122354LL;
	int8_t x611 = 10;
	int8_t x612 = 29;

	t95 = ((x609*x610)|(x611+x612));

	if (t95 != -71033472882122321LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x613 = 11;
	int16_t x614 = 4414;
	int16_t x615 = INT16_MIN;
	volatile int64_t x616 = -1LL;
	volatile int64_t t96 = -1190412438LL;

	t96 = ((x613*x614)|(x615+x616));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x626 = 1U;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MIN;
	volatile int32_t t97 = 1357;

	t97 = ((x625*x626)|(x627+x628));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x629 = -1;
	static int8_t x630 = INT8_MAX;
	int32_t x631 = 502397;
	volatile int16_t x632 = INT16_MIN;
	int32_t t98 = 454840622;

	t98 = ((x629*x630)|(x631+x632));

	if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x634 = 401861129U;
	static int16_t x636 = INT16_MIN;
	static volatile int64_t t99 = -29072LL;

	t99 = ((x633*x634)|(x635+x636));

	if (t99 != 101646331LL) { NG(); } else { ; }
	
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

