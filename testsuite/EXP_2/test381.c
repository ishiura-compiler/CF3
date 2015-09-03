#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
uint32_t x34 = 17U;
static int8_t x50 = INT8_MAX;
volatile int64_t t4 = 20474667252982LL;
int8_t x69 = INT8_MIN;
volatile uint8_t x71 = 93U;
int8_t x72 = -1;
uint32_t x75 = 2U;
int64_t t8 = -497166221LL;
int8_t x77 = INT8_MAX;
volatile uint64_t x78 = UINT64_MAX;
static int16_t x79 = -1;
int64_t x90 = -1LL;
int64_t x92 = -1LL;
static int32_t x98 = -172;
volatile int16_t x99 = INT16_MIN;
int64_t x100 = INT64_MAX;
int64_t t12 = 901LL;
int64_t t13 = 154568213170020LL;
uint16_t x106 = UINT16_MAX;
int16_t x111 = -1;
uint16_t x114 = 7256U;
int8_t x120 = -57;
static volatile uint64_t x125 = 1851171026516859962LLU;
int16_t x128 = -1;
static volatile uint16_t x133 = UINT16_MAX;
volatile int32_t x135 = -1;
uint16_t x142 = 1U;
static uint32_t x149 = UINT32_MAX;
uint32_t x152 = UINT32_MAX;
int8_t x163 = -40;
volatile int32_t x172 = -1;
uint64_t x175 = 169092LLU;
uint64_t t25 = 7114374522458555859LLU;
volatile int32_t t26 = 526124;
int32_t x189 = INT32_MIN;
int8_t x190 = INT8_MAX;
uint32_t x191 = UINT32_MAX;
static int16_t x192 = -1;
uint64_t x193 = UINT64_MAX;
volatile uint64_t t28 = 8607878386762LLU;
int16_t x197 = INT16_MIN;
int8_t x199 = -1;
int64_t x205 = -2324120298653LL;
int16_t x206 = INT16_MIN;
int32_t x211 = INT32_MAX;
volatile uint64_t t31 = 318366LLU;
volatile uint64_t t33 = 114299LLU;
uint32_t t34 = 3536387U;
static uint16_t x235 = 15U;
int64_t t36 = -522LL;
static int16_t x242 = INT16_MIN;
uint64_t t37 = 32462077522LLU;
uint32_t x255 = 847U;
uint16_t x256 = UINT16_MAX;
uint64_t x261 = 2735LLU;
volatile uint16_t x268 = 80U;
volatile int64_t x278 = 14583LL;
uint32_t x305 = 271U;
uint32_t x308 = UINT32_MAX;
static int16_t x315 = -1;
int16_t x328 = -4;
static int16_t x332 = -1;
static int16_t x348 = INT16_MAX;
volatile int16_t x363 = INT16_MAX;
int64_t x374 = -1LL;
uint16_t x376 = 1U;
uint16_t x381 = 288U;
int32_t x390 = -1;
static int32_t t65 = 9;
static int64_t x396 = INT64_MIN;
uint32_t t67 = 36218685U;
static uint8_t x407 = 7U;
uint64_t x408 = 1029034038354LLU;
int8_t x409 = INT8_MIN;
static int16_t x416 = INT16_MAX;
int16_t x421 = INT16_MIN;
int16_t x422 = INT16_MIN;
volatile int64_t x426 = 492776878LL;
volatile int32_t x433 = -1;
static uint32_t x435 = 513891946U;
int64_t x437 = INT64_MAX;
int32_t x458 = INT32_MAX;
int32_t x460 = INT32_MAX;
static volatile int64_t t78 = 4653LL;
int16_t x466 = INT16_MIN;
int64_t x469 = INT64_MIN;
uint16_t x480 = 46U;
volatile uint32_t t82 = 1509759U;
static uint64_t t83 = 826544141019LLU;
int8_t x508 = -50;
int8_t x511 = 14;
uint32_t x517 = UINT32_MAX;
static volatile int64_t t88 = -1LL;
uint8_t x522 = UINT8_MAX;
volatile uint16_t x532 = UINT16_MAX;
int16_t x549 = -1;
int64_t x554 = -1LL;
volatile int64_t t96 = 23074110119176637LL;
static int32_t x570 = -180485;
uint64_t x574 = 2LLU;
uint8_t x577 = UINT8_MAX;
volatile int8_t x578 = -1;


void f0(void) {
	static int8_t x5 = INT8_MIN;
	int16_t x6 = 6;
	uint8_t x7 = 80U;
	static volatile int32_t t0 = 3125374;

	t0 = ((x5/(x6*x7))/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x29 = UINT64_MAX;
	uint64_t x30 = 47361472952365LLU;
	int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MAX;
	uint64_t t1 = 1244145418LLU;

	t1 = ((x29/(x30*x31))/x32);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x33 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t2 = 243425LLU;

	t2 = ((x33/(x34*x35))/x36);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x49 = UINT16_MAX;
	uint64_t x51 = 5941608LLU;
	volatile uint32_t x52 = 78437708U;
	static volatile uint64_t t3 = 1068523184438290394LLU;

	t3 = ((x49/(x50*x51))/x52);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x53 = 3U;
	uint32_t x54 = UINT32_MAX;
	volatile int64_t x55 = 1LL;
	static int32_t x56 = INT32_MIN;

	t4 = ((x53/(x54*x55))/x56);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = INT32_MIN;
	static int16_t x58 = 5547;
	static int64_t x59 = -14LL;
	int16_t x60 = 10526;
	volatile int64_t t5 = -262LL;

	t5 = ((x57/(x58*x59))/x60);

	if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x65 = -50601891428LL;
	int16_t x66 = INT16_MIN;
	static volatile uint32_t x67 = 6943U;
	static uint16_t x68 = 308U;
	static volatile int64_t t6 = 43702472LL;

	t6 = ((x65/(x66*x67))/x68);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x70 = INT16_MIN;
	int32_t t7 = -394652;

	t7 = ((x69/(x70*x71))/x72);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x73 = INT32_MIN;
	static int16_t x74 = -1;
	int64_t x76 = -1LL;

	t8 = ((x73/(x74*x75))/x76);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x80 = -8699;
	uint64_t t9 = 482909LLU;

	t9 = ((x77/(x78*x79))/x80);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = -1LL;
	int16_t x91 = INT16_MIN;
	volatile int64_t t10 = 1106852425709165LL;

	t10 = ((x89/(x90*x91))/x92);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x93 = 7;
	volatile uint8_t x94 = 102U;
	int64_t x95 = -371LL;
	int8_t x96 = -13;
	int64_t t11 = -115378LL;

	t11 = ((x93/(x94*x95))/x96);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x97 = INT64_MIN;

	t12 = ((x97/(x98*x99))/x100);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x101 = INT32_MIN;
	volatile int64_t x102 = 1298751795LL;
	volatile int32_t x103 = INT32_MAX;
	volatile int32_t x104 = INT32_MAX;

	t13 = ((x101/(x102*x103))/x104);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x105 = 17916858997242658LL;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MAX;
	volatile int64_t t14 = 1016135141885LL;

	t14 = ((x105/(x106*x107))/x108);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x109 = 94;
	int64_t x110 = INT64_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t15 = -11111652142274502LL;

	t15 = ((x109/(x110*x111))/x112);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x115 = 46;
	int8_t x116 = INT8_MIN;
	volatile int32_t t16 = -63;

	t16 = ((x113/(x114*x115))/x116);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x117 = INT8_MAX;
	static int16_t x118 = INT16_MIN;
	static volatile int32_t x119 = -1;
	int32_t t17 = 112767;

	t17 = ((x117/(x118*x119))/x120);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x126 = -1LL;
	volatile uint32_t x127 = 1954785686U;
	uint64_t t18 = 6896313489LLU;

	t18 = ((x125/(x126*x127))/x128);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x134 = -1;
	uint64_t x136 = UINT64_MAX;
	uint64_t t19 = 27LLU;

	t19 = ((x133/(x134*x135))/x136);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = 1U;
	volatile int32_t x143 = INT32_MAX;
	uint32_t x144 = 45U;
	uint32_t t20 = 0U;

	t20 = ((x141/(x142*x143))/x144);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x150 = 19;
	volatile int32_t x151 = -1;
	volatile uint32_t t21 = 4218959U;

	t21 = ((x149/(x150*x151))/x152);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x161 = 48738LLU;
	volatile int16_t x162 = -1;
	volatile int64_t x164 = INT64_MIN;
	uint64_t t22 = 1058107102961360LLU;

	t22 = ((x161/(x162*x163))/x164);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x165 = -1;
	static int32_t x166 = 143;
	int16_t x167 = 7;
	uint8_t x168 = 123U;
	static int32_t t23 = -372;

	t23 = ((x165/(x166*x167))/x168);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = -1;
	volatile int32_t x171 = -1;
	volatile int64_t t24 = -7218096LL;

	t24 = ((x169/(x170*x171))/x172);

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x173 = -157731404;
	int32_t x174 = INT32_MIN;
	uint16_t x176 = UINT16_MAX;

	t25 = ((x173/(x174*x175))/x176);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x177 = 34;
	uint8_t x178 = 42U;
	volatile int8_t x179 = 31;
	int8_t x180 = -1;

	t26 = ((x177/(x178*x179))/x180);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t t27 = 18U;

	t27 = ((x189/(x190*x191))/x192);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x194 = 3218;
	int8_t x195 = -40;
	static int32_t x196 = 1;

	t28 = ((x193/(x194*x195))/x196);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x198 = -1;
	uint16_t x200 = 8U;
	int32_t t29 = 8689091;

	t29 = ((x197/(x198*x199))/x200);

	if (t29 != -4096) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x207 = 659473588U;
	volatile int32_t x208 = INT32_MIN;
	volatile int64_t t30 = -60444178038383LL;

	t30 = ((x205/(x206*x207))/x208);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x209 = 70547U;
	uint64_t x210 = 614339522447626LLU;
	int16_t x212 = INT16_MIN;

	t31 = ((x209/(x210*x211))/x212);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x213 = INT64_MIN;
	volatile int32_t x214 = 4355225;
	volatile uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = INT16_MIN;
	static int64_t t32 = 3401919LL;

	t32 = ((x213/(x214*x215))/x216);

	if (t32 != 253448LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x217 = 1186469137U;
	uint64_t x218 = 1381492LLU;
	int32_t x219 = 204066186;
	int64_t x220 = 1LL;

	t33 = ((x217/(x218*x219))/x220);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x225 = UINT32_MAX;
	static int32_t x226 = -1;
	static volatile uint32_t x227 = 62U;
	static int8_t x228 = INT8_MIN;

	t34 = ((x225/(x226*x227))/x228);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x233 = 10U;
	volatile int8_t x234 = INT8_MIN;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t35 = 27912036LLU;

	t35 = ((x233/(x234*x235))/x236);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -1150LL;
	int64_t x240 = -246336546LL;

	t36 = ((x237/(x238*x239))/x240);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int8_t x243 = -22;
	int32_t x244 = INT32_MIN;

	t37 = ((x241/(x242*x243))/x244);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x253 = 20U;
	uint8_t x254 = 3U;
	volatile uint32_t t38 = 494095233U;

	t38 = ((x253/(x254*x255))/x256);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x257 = 2645;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 255711628U;
	uint32_t t39 = 5099U;

	t39 = ((x257/(x258*x259))/x260);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x262 = INT16_MAX;
	static volatile int16_t x263 = -7397;
	int8_t x264 = -1;
	static volatile uint64_t t40 = 105161612632772LLU;

	t40 = ((x261/(x262*x263))/x264);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x265 = 31269663LLU;
	uint32_t x266 = 3U;
	static int32_t x267 = -5099640;
	uint64_t t41 = 7942960020LLU;

	t41 = ((x265/(x266*x267))/x268);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	int32_t x271 = 960995173;
	volatile int32_t x272 = -1;
	int64_t t42 = -3722884LL;

	t42 = ((x269/(x270*x271))/x272);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x273 = INT32_MAX;
	volatile uint16_t x274 = 30504U;
	uint16_t x275 = 12222U;
	int16_t x276 = 163;
	int32_t t43 = -10;

	t43 = ((x273/(x274*x275))/x276);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x279 = -1;
	uint32_t x280 = 91U;
	static int64_t t44 = 12372177208384941LL;

	t44 = ((x277/(x278*x279))/x280);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x281 = -1LL;
	int32_t x282 = 92100667;
	uint32_t x283 = 855U;
	static int64_t x284 = INT64_MIN;
	volatile int64_t t45 = -5266LL;

	t45 = ((x281/(x282*x283))/x284);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	volatile int16_t x295 = INT16_MAX;
	int32_t x296 = -84046374;
	static uint32_t t46 = 51696U;

	t46 = ((x293/(x294*x295))/x296);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x297 = INT16_MAX;
	static int32_t x298 = INT32_MIN;
	uint64_t x299 = 3LLU;
	volatile int64_t x300 = INT64_MIN;
	volatile uint64_t t47 = 2471635392LLU;

	t47 = ((x297/(x298*x299))/x300);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x306 = 6550U;
	volatile int16_t x307 = -1;
	uint32_t t48 = 15097U;

	t48 = ((x305/(x306*x307))/x308);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x309 = UINT32_MAX;
	static uint32_t x310 = 131773U;
	int16_t x311 = -94;
	volatile uint8_t x312 = UINT8_MAX;
	volatile uint32_t t49 = 120318U;

	t49 = ((x309/(x310*x311))/x312);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x313 = 1U;
	static uint64_t x314 = 13LLU;
	uint8_t x316 = 15U;
	uint64_t t50 = 4134242489LLU;

	t50 = ((x313/(x314*x315))/x316);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x317 = UINT8_MAX;
	volatile int16_t x318 = INT16_MAX;
	uint32_t x319 = 5U;
	static uint64_t x320 = UINT64_MAX;
	volatile uint64_t t51 = 51450006135LLU;

	t51 = ((x317/(x318*x319))/x320);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x325 = -1;
	uint16_t x326 = 12016U;
	static uint64_t x327 = UINT64_MAX;
	volatile uint64_t t52 = 1811222LLU;

	t52 = ((x325/(x326*x327))/x328);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x329 = 3U;
	uint16_t x330 = 18U;
	int16_t x331 = INT16_MIN;
	int32_t t53 = 609;

	t53 = ((x329/(x330*x331))/x332);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x333 = -1LL;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 292LLU;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t54 = 726488LLU;

	t54 = ((x333/(x334*x335))/x336);

	if (t54 != 971530658582LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x345 = 63U;
	int32_t x346 = 95;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t55 = 2747;

	t55 = ((x345/(x346*x347))/x348);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	volatile uint16_t x352 = 60U;
	int64_t t56 = -35169727LL;

	t56 = ((x349/(x350*x351))/x352);

	if (t56 != -4691249611844LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = -42208091960325LL;
	volatile int32_t x355 = -1;
	volatile uint32_t x356 = UINT32_MAX;
	int64_t t57 = -134LL;

	t57 = ((x353/(x354*x355))/x356);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile uint64_t x362 = 39LLU;
	int64_t x364 = -1LL;
	volatile uint64_t t58 = 13270796LLU;

	t58 = ((x361/(x362*x363))/x364);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x365 = 1006;
	static uint32_t x366 = 1564U;
	int16_t x367 = -1;
	uint16_t x368 = 312U;
	uint32_t t59 = 1009645208U;

	t59 = ((x365/(x366*x367))/x368);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	int32_t x371 = 1;
	static int8_t x372 = -1;
	int32_t t60 = -1;

	t60 = ((x369/(x370*x371))/x372);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x373 = -4374LL;
	int16_t x375 = -1;
	volatile int64_t t61 = 2644468660346LL;

	t61 = ((x373/(x374*x375))/x376);

	if (t61 != -4374LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x377 = INT8_MAX;
	int8_t x378 = -1;
	int16_t x379 = -408;
	uint8_t x380 = 4U;
	volatile int32_t t62 = 518;

	t62 = ((x377/(x378*x379))/x380);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x382 = UINT64_MAX;
	int32_t x383 = 300121199;
	uint8_t x384 = 114U;
	uint64_t t63 = 5838LLU;

	t63 = ((x381/(x382*x383))/x384);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x385 = UINT64_MAX;
	static int64_t x386 = 76944596390LL;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t64 = 62099902LLU;

	t64 = ((x385/(x386*x387))/x388);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x389 = -1;
	static int8_t x391 = INT8_MIN;
	uint8_t x392 = UINT8_MAX;

	t65 = ((x389/(x390*x391))/x392);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x393 = 19U;
	static volatile int16_t x394 = INT16_MIN;
	static int16_t x395 = INT16_MIN;
	static int64_t t66 = -55520059LL;

	t66 = ((x393/(x394*x395))/x396);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x397 = INT8_MIN;
	static uint32_t x398 = 912501U;
	uint16_t x399 = UINT16_MAX;
	static uint32_t x400 = 941U;

	t67 = ((x397/(x398*x399))/x400);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x401 = -14;
	uint64_t x402 = 30448263LLU;
	int8_t x403 = -18;
	int32_t x404 = INT32_MIN;
	volatile uint64_t t68 = 18634289392546044LLU;

	t68 = ((x401/(x402*x403))/x404);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x405 = 509435373U;
	uint64_t x406 = 32133LLU;
	static volatile uint64_t t69 = 10911446330LLU;

	t69 = ((x405/(x406*x407))/x408);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x410 = UINT64_MAX;
	static volatile uint16_t x411 = 7333U;
	static uint8_t x412 = 27U;
	static volatile uint64_t t70 = 2LLU;

	t70 = ((x409/(x410*x411))/x412);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x413 = -125;
	int16_t x414 = -1962;
	int32_t x415 = -1;
	volatile int32_t t71 = -107;

	t71 = ((x413/(x414*x415))/x416);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x417 = UINT32_MAX;
	static int8_t x418 = INT8_MAX;
	uint8_t x419 = 3U;
	static uint64_t x420 = 79LLU;
	uint64_t t72 = 1008LLU;

	t72 = ((x417/(x418*x419))/x420);

	if (t72 != 142694LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x423 = 3315834U;
	static uint16_t x424 = UINT16_MAX;
	volatile uint32_t t73 = 1390U;

	t73 = ((x421/(x422*x423))/x424);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x425 = 17;
	int32_t x427 = INT32_MIN;
	static volatile int64_t x428 = -5381400246403LL;
	int64_t t74 = 877163895748153791LL;

	t74 = ((x425/(x426*x427))/x428);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x434 = 57829065LLU;
	int32_t x436 = -1;
	volatile uint64_t t75 = 594481944897LLU;

	t75 = ((x433/(x434*x435))/x436);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x438 = INT16_MIN;
	static volatile uint64_t x439 = 48526610702534LLU;
	static volatile int32_t x440 = -10;
	static volatile uint64_t t76 = 837847729674573LLU;

	t76 = ((x437/(x438*x439))/x440);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x457 = -201;
	int32_t x459 = -1;
	int32_t t77 = 183;

	t77 = ((x457/(x458*x459))/x460);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	volatile int64_t x463 = -129909346691411LL;
	int32_t x464 = -1;

	t78 = ((x461/(x462*x463))/x464);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x465 = -5;
	int8_t x467 = 1;
	volatile uint8_t x468 = 6U;
	static int32_t t79 = -2538;

	t79 = ((x465/(x466*x467))/x468);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x470 = 14755LLU;
	int16_t x471 = -1;
	int32_t x472 = INT32_MAX;
	volatile uint64_t t80 = 853909108646LLU;

	t80 = ((x469/(x470*x471))/x472);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MIN;
	static volatile int16_t x479 = INT16_MIN;
	int32_t t81 = 1207224;

	t81 = ((x477/(x478*x479))/x480);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x489 = -400;
	static uint32_t x490 = 139931U;
	volatile int32_t x491 = 898;
	int8_t x492 = INT8_MIN;

	t82 = ((x489/(x490*x491))/x492);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x493 = -1;
	uint32_t x494 = 66350811U;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = 212;

	t83 = ((x493/(x494*x495))/x496);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x497 = 65270LL;
	volatile int16_t x498 = INT16_MAX;
	volatile int16_t x499 = -1;
	int64_t x500 = INT64_MAX;
	static int64_t t84 = -60LL;

	t84 = ((x497/(x498*x499))/x500);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x505 = INT16_MIN;
	int16_t x506 = -1;
	int32_t x507 = INT32_MAX;
	int32_t t85 = 0;

	t85 = ((x505/(x506*x507))/x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x509 = 377995099;
	uint16_t x510 = UINT16_MAX;
	static volatile uint16_t x512 = 1267U;
	int32_t t86 = -996034;

	t86 = ((x509/(x510*x511))/x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x513 = 385U;
	volatile uint8_t x514 = 13U;
	volatile uint32_t x515 = 441822480U;
	uint64_t x516 = 3114204878LLU;
	volatile uint64_t t87 = 7LLU;

	t87 = ((x513/(x514*x515))/x516);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x518 = -1LL;
	uint32_t x519 = 1613664U;
	static int8_t x520 = 11;

	t88 = ((x517/(x518*x519))/x520);

	if (t88 != -241LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x521 = INT64_MIN;
	static volatile int16_t x523 = -1;
	static int32_t x524 = INT32_MIN;
	int64_t t89 = 16350690296468LL;

	t89 = ((x521/(x522*x523))/x524);

	if (t89 != -16843009LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x525 = 1U;
	int32_t x526 = -596;
	int8_t x527 = -1;
	int32_t x528 = INT32_MIN;
	volatile int32_t t90 = -1;

	t90 = ((x525/(x526*x527))/x528);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x529 = INT32_MAX;
	static uint8_t x530 = 31U;
	int8_t x531 = INT8_MIN;
	static volatile int32_t t91 = 42;

	t91 = ((x529/(x530*x531))/x532);

	if (t91 != -8) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x533 = 359010042LLU;
	volatile int8_t x534 = INT8_MAX;
	static volatile int16_t x535 = -1;
	volatile int64_t x536 = INT64_MAX;
	uint64_t t92 = 4485252115610649LLU;

	t92 = ((x533/(x534*x535))/x536);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x541 = 648U;
	int64_t x542 = -1LL;
	volatile int8_t x543 = INT8_MAX;
	static int64_t x544 = -20775654242286LL;
	int64_t t93 = -2132567753785424077LL;

	t93 = ((x541/(x542*x543))/x544);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x545 = INT16_MIN;
	static uint32_t x546 = 4374237U;
	static int16_t x547 = INT16_MIN;
	uint32_t x548 = UINT32_MAX;
	static volatile uint32_t t94 = 4498732U;

	t94 = ((x545/(x546*x547))/x548);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x550 = INT16_MIN;
	int64_t x551 = 1LL;
	int64_t x552 = INT64_MIN;
	int64_t t95 = 402315040LL;

	t95 = ((x549/(x550*x551))/x552);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x553 = 1381851U;
	int64_t x555 = 21664148566LL;
	static int64_t x556 = INT64_MIN;

	t96 = ((x553/(x554*x555))/x556);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x569 = INT16_MIN;
	int16_t x571 = -29;
	uint64_t x572 = 4LLU;
	uint64_t t97 = 26LLU;

	t97 = ((x569/(x570*x571))/x572);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x573 = 112U;
	int16_t x575 = -1;
	static int32_t x576 = INT32_MAX;
	volatile uint64_t t98 = 1774067652685991077LLU;

	t98 = ((x573/(x574*x575))/x576);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x579 = 26U;
	static int64_t x580 = INT64_MIN;
	int64_t t99 = 3094710326LL;

	t99 = ((x577/(x578*x579))/x580);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

