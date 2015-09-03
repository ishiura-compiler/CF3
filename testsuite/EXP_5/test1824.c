#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
uint16_t x3 = UINT16_MAX;
int8_t x10 = INT8_MIN;
volatile int32_t x15 = INT32_MIN;
int8_t x17 = -1;
volatile uint8_t x36 = 31U;
int16_t x42 = -1;
int16_t x44 = INT16_MAX;
volatile uint64_t x49 = 112525058062LLU;
uint16_t x50 = 1003U;
static uint32_t x51 = UINT32_MAX;
int8_t x67 = -6;
int16_t x68 = -1;
uint8_t x85 = 31U;
int8_t x89 = -1;
uint16_t x90 = 372U;
volatile int32_t x101 = INT32_MIN;
int8_t x112 = INT8_MAX;
volatile int64_t t14 = 187650LL;
uint16_t x113 = 254U;
volatile int8_t x122 = -1;
uint16_t x152 = 17U;
int8_t x161 = 40;
volatile int8_t x162 = -1;
static int64_t x165 = INT64_MIN;
uint32_t x178 = 106825479U;
int32_t x180 = 1;
uint32_t t22 = 103668264U;
static uint16_t x181 = UINT16_MAX;
int64_t t23 = 2869LL;
volatile int8_t x190 = 4;
static uint16_t x191 = 62U;
int32_t x193 = INT32_MAX;
int32_t x194 = -1;
volatile int8_t x195 = INT8_MIN;
uint64_t t27 = 39646285921114348LLU;
volatile uint64_t t29 = 1752210557591372612LLU;
uint32_t x218 = 19302972U;
uint64_t x222 = UINT64_MAX;
static uint8_t x238 = UINT8_MAX;
int8_t x239 = -14;
int64_t t34 = 575320828822LL;
static int64_t x245 = INT64_MIN;
int64_t t36 = -22317830059LL;
uint8_t x291 = 56U;
int64_t t39 = -16522124577LL;
int32_t t40 = -7300;
int16_t x316 = -1;
int64_t x335 = -23541366964432054LL;
volatile int8_t x345 = -29;
int8_t x362 = 46;
static uint32_t x363 = 14268710U;
int64_t x381 = -1LL;
static int8_t x384 = INT8_MIN;
uint8_t x385 = 0U;
volatile uint8_t x394 = 10U;
int64_t x395 = -1LL;
volatile int64_t t52 = 2LL;
int8_t x413 = 1;
volatile int32_t x415 = -1967455;
int64_t x418 = -55630294LL;
uint64_t x423 = UINT64_MAX;
int8_t x431 = INT8_MIN;
int64_t x442 = INT64_MIN;
int8_t x443 = -1;
int16_t x452 = INT16_MIN;
uint8_t x467 = UINT8_MAX;
uint16_t x473 = UINT16_MAX;
uint32_t x474 = 842167U;
volatile uint64_t t64 = 1028LLU;
static uint8_t x477 = UINT8_MAX;
int64_t x479 = -1LL;
int32_t x493 = INT32_MIN;
int16_t x497 = INT16_MIN;
int16_t x504 = -3;
int32_t t69 = 61878;
int8_t x521 = -2;
uint64_t x524 = UINT64_MAX;
volatile uint64_t t71 = 27626199926533LLU;
volatile int8_t x535 = -28;
uint64_t x556 = UINT64_MAX;
static uint64_t t74 = 148LLU;
uint64_t t75 = 7232334LLU;
int16_t x563 = 15361;
int8_t x569 = -24;
int64_t x583 = INT64_MIN;
int8_t x584 = INT8_MIN;
static volatile int64_t t79 = -42029011985234LL;
int64_t x590 = INT64_MAX;
uint8_t x592 = UINT8_MAX;
uint32_t x594 = UINT32_MAX;
static volatile int64_t x603 = INT64_MAX;
volatile uint8_t x634 = UINT8_MAX;
static uint8_t x636 = 106U;
volatile int32_t x637 = INT32_MIN;
volatile int32_t t86 = 808;
int16_t x645 = INT16_MIN;
volatile int64_t x648 = INT64_MAX;
volatile uint64_t t90 = 16813820474LLU;
int8_t x669 = 1;
static volatile int8_t x672 = INT8_MIN;
uint32_t x678 = 914480871U;
int64_t t94 = -19957LL;
volatile int8_t x694 = -1;
volatile int32_t t96 = -4420964;
uint8_t x697 = UINT8_MAX;
int32_t x700 = -1;
static int16_t x703 = INT16_MIN;


void f0(void) {
	uint64_t x2 = 1907316081687450402LLU;
	volatile uint32_t x4 = UINT32_MAX;
	static volatile uint64_t t0 = 6497661305LLU;

	t0 = (x1/((x2&x3)&x4));

	if (t0 != 79462LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int64_t x11 = 58421509810LL;
	int16_t x12 = 10983;
	int64_t t1 = 5347483LL;

	t1 = (x9/((x10&x11)&x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -21LL;
	int64_t x14 = INT64_MIN;
	int32_t x16 = -3;
	int64_t t2 = 4369449LL;

	t2 = (x13/((x14&x15)&x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = -1541750;
	static uint8_t x19 = 51U;
	uint16_t x20 = 11U;
	static volatile int32_t t3 = -16;

	t3 = (x17/((x18&x19)&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = -1LL;
	uint16_t x34 = UINT16_MAX;
	static volatile int8_t x35 = -6;
	volatile int64_t t4 = 519425140182174899LL;

	t4 = (x33/((x34&x35)&x36));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = -1;
	int8_t x39 = -1;
	uint16_t x40 = 792U;
	int64_t t5 = -423688260340496LL;

	t5 = (x37/((x38&x39)&x40));

	if (t5 != -11645671763705525LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MAX;
	uint8_t x43 = 13U;
	int32_t t6 = 160638;

	t6 = (x41/((x42&x43)&x44));

	if (t6 != 9) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x52 = -1;
	volatile uint64_t t7 = 3943LLU;

	t7 = (x49/((x50&x51)&x52));

	if (t7 != 112188492LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = -285;
	static uint64_t x60 = 63396847LLU;
	volatile uint64_t t8 = 6016809LLU;

	t8 = (x57/((x58&x59)&x60));

	if (t8 != 290973809071LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x65 = INT32_MAX;
	static volatile int64_t x66 = INT64_MAX;
	int64_t t9 = -4185713377LL;

	t9 = (x65/((x66&x67)&x68));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x86 = INT64_MAX;
	int32_t x87 = -1;
	int8_t x88 = -7;
	volatile int64_t t10 = -54774307LL;

	t10 = (x85/((x86&x87)&x88));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x91 = 31049140;
	uint64_t x92 = 7259191LLU;
	uint64_t t11 = 4295835816374LLU;

	t11 = (x89/((x90&x91)&x92));

	if (t11 != 354745078340568300LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x93 = -13;
	int32_t x94 = INT32_MAX;
	int32_t x95 = INT32_MAX;
	uint8_t x96 = 62U;
	static volatile int32_t t12 = 7;

	t12 = (x93/((x94&x95)&x96));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x102 = -1;
	uint16_t x103 = 2701U;
	uint64_t x104 = 995892LLU;
	uint64_t t13 = 8908479133315280LLU;

	t13 = (x101/((x102&x103)&x104));

	if (t13 != 35749504014655170LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 11540U;
	static int64_t x111 = 35967LL;

	t14 = (x109/((x110&x111)&x112));

	if (t14 != 12LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x114 = INT16_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	int32_t x116 = INT32_MAX;
	uint32_t t15 = 434U;

	t15 = (x113/((x114&x115)&x116));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x121 = 1984250063220409LLU;
	static uint8_t x123 = UINT8_MAX;
	uint64_t x124 = 1LLU;
	volatile uint64_t t16 = 259853964892LLU;

	t16 = (x121/((x122&x123)&x124));

	if (t16 != 1984250063220409LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x125 = -58;
	volatile int16_t x126 = -437;
	volatile int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MAX;
	int64_t t17 = -1787326369675242921LL;

	t17 = (x125/((x126&x127)&x128));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x141 = INT64_MIN;
	uint32_t x142 = 19706584U;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	volatile int64_t t18 = -5651LL;

	t18 = (x141/((x142&x143)&x144));

	if (t18 != -468344387205LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x149 = -3231;
	int8_t x150 = 1;
	static int16_t x151 = -1;
	volatile int32_t t19 = 67762;

	t19 = (x149/((x150&x151)&x152));

	if (t19 != -3231) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x163 = INT32_MAX;
	int16_t x164 = -1;
	volatile int32_t t20 = -111022270;

	t20 = (x161/((x162&x163)&x164));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x166 = INT8_MIN;
	uint64_t x167 = 21699290331293LLU;
	int64_t x168 = -1LL;
	uint64_t t21 = 3852204410LLU;

	t21 = (x165/((x166&x167)&x168));

	if (t21 != 425054LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x177 = 3146U;
	int16_t x179 = -1;

	t22 = (x177/((x178&x179)&x180));

	if (t22 != 3146U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x182 = 454621423169978LL;
	volatile int64_t x183 = -1LL;
	static int64_t x184 = -1LL;

	t23 = (x181/((x182&x183)&x184));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x185 = INT16_MIN;
	static int16_t x186 = 1054;
	static volatile int64_t x187 = -1LL;
	uint8_t x188 = 11U;
	int64_t t24 = -1966634490148197197LL;

	t24 = (x185/((x186&x187)&x188));

	if (t24 != -3276LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x189 = INT32_MIN;
	int32_t x192 = -1;
	static int32_t t25 = -1595;

	t25 = (x189/((x190&x191)&x192));

	if (t25 != -536870912) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x196 = 37782LLU;
	uint64_t t26 = 7252066029LLU;

	t26 = (x193/((x194&x195)&x196));

	if (t26 != 56871LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x197 = 175U;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 4U;

	t27 = (x197/((x198&x199)&x200));

	if (t27 != 43LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x201 = -1;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = INT32_MAX;
	volatile int64_t x204 = 167765352353LL;
	int64_t t28 = 3450735250699732813LL;

	t28 = (x201/((x202&x203)&x204));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x209 = INT32_MAX;
	int32_t x210 = INT32_MIN;
	static int32_t x211 = -1;
	static uint64_t x212 = 58523818205761520LLU;

	t29 = (x209/((x210&x211)&x212));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x217 = 2638;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 15938U;
	static uint32_t t30 = 81958861U;

	t30 = (x217/((x218&x219)&x220));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x221 = INT64_MIN;
	int8_t x223 = -5;
	uint16_t x224 = UINT16_MAX;
	uint64_t t31 = 6416421590217736934LLU;

	t31 = (x221/((x222&x223)&x224));

	if (t31 != 140748226592830LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x225 = INT8_MAX;
	int32_t x226 = -3906094;
	int32_t x227 = INT32_MAX;
	uint8_t x228 = 99U;
	volatile int32_t t32 = 3046;

	t32 = (x225/((x226&x227)&x228));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x237 = INT64_MAX;
	int16_t x240 = 304;
	static volatile int64_t t33 = -336LL;

	t33 = (x237/((x238&x239)&x240));

	if (t33 != 192153584101141162LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	int64_t x244 = -1LL;

	t34 = (x241/((x242&x243)&x244));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	int16_t x248 = -1;
	volatile int64_t t35 = -1517235527LL;

	t35 = (x245/((x246&x247)&x248));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x261 = INT8_MIN;
	static volatile int16_t x262 = -13;
	int64_t x263 = -39LL;
	int64_t x264 = INT64_MIN;

	t36 = (x261/((x262&x263)&x264));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x281 = 6617648508LLU;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t37 = 3986466511LLU;

	t37 = (x281/((x282&x283)&x284));

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x285 = INT32_MAX;
	static int64_t x286 = -108LL;
	int16_t x287 = 434;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t38 = -263613824LL;

	t38 = (x285/((x286&x287)&x288));

	if (t38 != 5368709LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = -1LL;
	int16_t x292 = -1;

	t39 = (x289/((x290&x291)&x292));

	if (t39 != 164703072086692425LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x297 = -1;
	int32_t x298 = 17792206;
	uint16_t x299 = UINT16_MAX;
	uint16_t x300 = UINT16_MAX;

	t40 = (x297/((x298&x299)&x300));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x309 = 417022U;
	int16_t x310 = -1;
	volatile uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MIN;
	uint32_t t41 = 83U;

	t41 = (x309/((x310&x311)&x312));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x313 = INT16_MIN;
	static int8_t x314 = -1;
	static volatile uint16_t x315 = 3773U;
	int32_t t42 = 795033;

	t42 = (x313/((x314&x315)&x316));

	if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x329 = -1;
	static int8_t x330 = -52;
	int16_t x331 = -1;
	uint32_t x332 = 116066419U;
	volatile uint32_t t43 = 3U;

	t43 = (x329/((x330&x331)&x332));

	if (t43 != 37U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x333 = 2;
	int8_t x334 = 7;
	volatile uint64_t x336 = 1699LLU;
	volatile uint64_t t44 = 94754424609915LLU;

	t44 = (x333/((x334&x335)&x336));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x341 = INT16_MAX;
	static int8_t x342 = 22;
	volatile uint64_t x343 = 35679LLU;
	static int16_t x344 = INT16_MAX;
	uint64_t t45 = 7597219162LLU;

	t45 = (x341/((x342&x343)&x344));

	if (t45 != 1489LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x346 = 832;
	int16_t x347 = -1;
	int8_t x348 = INT8_MAX;
	volatile int32_t t46 = -1410176;

	t46 = (x345/((x346&x347)&x348));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x357 = INT32_MIN;
	static volatile int16_t x358 = -7031;
	int8_t x359 = -4;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t47 = 349321846;

	t47 = (x357/((x358&x359)&x360));

	if (t47 != 305040) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x361 = INT64_MIN;
	int16_t x364 = -1;
	int64_t t48 = 40LL;

	t48 = (x361/((x362&x363)&x364));

	if (t48 != -242720316759336205LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x365 = UINT8_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = INT64_MAX;
	volatile uint64_t t49 = 63LLU;

	t49 = (x365/((x366&x367)&x368));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x382 = 152U;
	static uint32_t x383 = UINT32_MAX;
	int64_t t50 = 1427789691363LL;

	t50 = (x381/((x382&x383)&x384));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x386 = 327;
	int64_t x387 = -115841LL;
	uint16_t x388 = 3U;
	static volatile int64_t t51 = -16LL;

	t51 = (x385/((x386&x387)&x388));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x393 = 31LL;
	int32_t x396 = -1;

	t52 = (x393/((x394&x395)&x396));

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x397 = UINT32_MAX;
	static volatile int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	int32_t x400 = -4773433;
	volatile int64_t t53 = -6LL;

	t53 = (x397/((x398&x399)&x400));

	if (t53 != -899LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x409 = 124712168LLU;
	int64_t x410 = INT64_MIN;
	int32_t x411 = -99528;
	int64_t x412 = -499291LL;
	volatile uint64_t t54 = 16135LLU;

	t54 = (x409/((x410&x411)&x412));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x414 = -7;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t55 = -1232590;

	t55 = (x413/((x414&x415)&x416));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x417 = -15;
	int64_t x419 = INT64_MIN;
	static int8_t x420 = -1;
	volatile int64_t t56 = -4285226115877251LL;

	t56 = (x417/((x418&x419)&x420));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x421 = -4;
	static int64_t x422 = -1LL;
	int8_t x424 = INT8_MAX;
	static uint64_t t57 = 403403043LLU;

	t57 = (x421/((x422&x423)&x424));

	if (t57 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x429 = UINT8_MAX;
	uint64_t x430 = 475504610783286LLU;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t58 = 289622550142734LLU;

	t58 = (x429/((x430&x431)&x432));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x433 = INT8_MIN;
	uint16_t x434 = UINT16_MAX;
	uint64_t x435 = 76501722LLU;
	volatile uint8_t x436 = 9U;
	uint64_t t59 = 16182LLU;

	t59 = (x433/((x434&x435)&x436));

	if (t59 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x441 = 760986583719LLU;
	static int32_t x444 = -1;
	uint64_t t60 = 309822838489037471LLU;

	t60 = (x441/((x442&x443)&x444));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = -1;
	static volatile uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MAX;
	static int64_t t61 = -1686280LL;

	t61 = (x445/((x446&x447)&x448));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x449 = INT32_MIN;
	int32_t x450 = -1;
	int32_t x451 = -13279924;
	volatile int32_t t62 = -5322023;

	t62 = (x449/((x450&x451)&x452));

	if (t62 != 161) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x465 = INT8_MIN;
	int64_t x466 = 292LL;
	int32_t x468 = 111;
	volatile int64_t t63 = 8LL;

	t63 = (x465/((x466&x467)&x468));

	if (t63 != -3LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x475 = INT8_MIN;
	static uint64_t x476 = 33425482LLU;

	t64 = (x473/((x474&x475)&x476));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x478 = 24;
	uint16_t x480 = UINT16_MAX;
	volatile int64_t t65 = -5LL;

	t65 = (x477/((x478&x479)&x480));

	if (t65 != 10LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x481 = -1;
	static int16_t x482 = INT16_MAX;
	int8_t x483 = INT8_MIN;
	int64_t x484 = -410LL;
	static volatile int64_t t66 = -1722503361LL;

	t66 = (x481/((x482&x483)&x484));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x494 = 1535847092347538121LLU;
	int16_t x495 = -1;
	volatile int8_t x496 = INT8_MIN;
	uint64_t t67 = 3429363LLU;

	t67 = (x493/((x494&x495)&x496));

	if (t67 != 12LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x498 = UINT64_MAX;
	uint64_t x499 = UINT64_MAX;
	static int8_t x500 = 1;
	uint64_t t68 = 16187LLU;

	t68 = (x497/((x498&x499)&x500));

	if (t68 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x501 = 766U;
	static uint8_t x502 = 62U;
	int16_t x503 = -1;

	t69 = (x501/((x502&x503)&x504));

	if (t69 != 12) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x513 = -6;
	volatile int16_t x514 = -1;
	int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t70 = 0LL;

	t70 = (x513/((x514&x515)&x516));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x522 = -1;
	int64_t x523 = -205121588689608192LL;

	t71 = (x521/((x522&x523)&x524));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x529 = 449061U;
	int8_t x530 = -21;
	uint64_t x531 = UINT64_MAX;
	int32_t x532 = -4050819;
	volatile uint64_t t72 = 1416LLU;

	t72 = (x529/((x530&x531)&x532));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x533 = INT16_MIN;
	int64_t x534 = -78410LL;
	int32_t x536 = INT32_MIN;
	int64_t t73 = -217288639LL;

	t73 = (x533/((x534&x535)&x536));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x553 = 1;
	int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;

	t74 = (x553/((x554&x555)&x556));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x557 = UINT64_MAX;
	int64_t x558 = -954275851921155411LL;
	uint16_t x559 = 7038U;
	int8_t x560 = -5;

	t75 = (x557/((x558&x559)&x560));

	if (t75 != 2754890094640016LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x561 = -1LL;
	int64_t x562 = 378903871923247LL;
	uint32_t x564 = UINT32_MAX;
	static volatile int64_t t76 = 3364213266805LL;

	t76 = (x561/((x562&x563)&x564));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x570 = INT16_MIN;
	volatile uint32_t x571 = 884841U;
	int16_t x572 = INT16_MIN;
	volatile uint32_t t77 = 13316U;

	t77 = (x569/((x570&x571)&x572));

	if (t77 != 4854U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x577 = -1;
	volatile uint16_t x578 = 1U;
	volatile int32_t x579 = INT32_MAX;
	uint16_t x580 = 1U;
	int32_t t78 = -3681;

	t78 = (x577/((x578&x579)&x580));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x581 = INT64_MIN;
	static int16_t x582 = -7;

	t79 = (x581/((x582&x583)&x584));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x589 = INT32_MIN;
	int32_t x591 = INT32_MAX;
	static int64_t t80 = -157806840LL;

	t80 = (x589/((x590&x591)&x592));

	if (t80 != -8421504LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x593 = -1;
	static int32_t x595 = INT32_MIN;
	volatile int16_t x596 = INT16_MIN;
	uint32_t t81 = 1U;

	t81 = (x593/((x594&x595)&x596));

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x601 = 7U;
	int8_t x602 = -1;
	uint16_t x604 = 931U;
	static volatile int64_t t82 = 2998174794536036LL;

	t82 = (x601/((x602&x603)&x604));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x605 = 3;
	uint64_t x606 = UINT64_MAX;
	static volatile int8_t x607 = INT8_MIN;
	static uint32_t x608 = 616608520U;
	volatile uint64_t t83 = 29LLU;

	t83 = (x605/((x606&x607)&x608));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x629 = -1;
	static uint64_t x630 = 10157105LLU;
	int16_t x631 = 30;
	int64_t x632 = INT64_MAX;
	static volatile uint64_t t84 = 4869836803LLU;

	t84 = (x629/((x630&x631)&x632));

	if (t84 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x633 = UINT32_MAX;
	static int8_t x635 = -15;
	static volatile uint32_t t85 = 36007325U;

	t85 = (x633/((x634&x635)&x636));

	if (t85 != 44739242U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x638 = INT32_MAX;
	int8_t x639 = -39;
	static int32_t x640 = INT32_MAX;

	t86 = (x637/((x638&x639)&x640));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x641 = -10;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = UINT64_MAX;
	int16_t x644 = INT16_MIN;
	uint64_t t87 = 10328695120469LLU;

	t87 = (x641/((x642&x643)&x644));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x646 = -4;
	int32_t x647 = 46;
	volatile int64_t t88 = -144212684LL;

	t88 = (x645/((x646&x647)&x648));

	if (t88 != -744LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x653 = 3229U;
	int8_t x654 = INT8_MAX;
	int32_t x655 = -1;
	int8_t x656 = 19;
	static int32_t t89 = 105;

	t89 = (x653/((x654&x655)&x656));

	if (t89 != 169) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x661 = 3LLU;
	volatile int8_t x662 = 13;
	int16_t x663 = 538;
	uint32_t x664 = UINT32_MAX;

	t90 = (x661/((x662&x663)&x664));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x665 = -1;
	int16_t x666 = INT16_MAX;
	int64_t x667 = -1LL;
	int32_t x668 = 869518357;
	int64_t t91 = 39517932622LL;

	t91 = (x665/((x666&x667)&x668));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x670 = INT64_MIN;
	volatile int8_t x671 = INT8_MIN;
	volatile int64_t t92 = 4092387LL;

	t92 = (x669/((x670&x671)&x672));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x673 = -1LL;
	static uint16_t x674 = UINT16_MAX;
	uint16_t x675 = UINT16_MAX;
	uint16_t x676 = 195U;
	volatile int64_t t93 = -4561LL;

	t93 = (x673/((x674&x675)&x676));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x677 = 3;
	int64_t x679 = -1LL;
	uint32_t x680 = 1786397U;

	t94 = (x677/((x678&x679)&x680));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x681 = 34420509705842681LL;
	int64_t x682 = 1436031166476969847LL;
	int16_t x683 = INT16_MIN;
	volatile uint64_t x684 = 3778932LLU;
	static volatile uint64_t t95 = 10999LLU;

	t95 = (x681/((x682&x683)&x684));

	if (t95 != 9134179078LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x693 = 179095671;
	int16_t x695 = INT16_MAX;
	uint8_t x696 = 117U;

	t96 = (x693/((x694&x695)&x696));

	if (t96 != 1530732) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x698 = 35;
	uint16_t x699 = 2U;
	int32_t t97 = 29935914;

	t97 = (x697/((x698&x699)&x700));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x701 = INT8_MIN;
	uint16_t x702 = UINT16_MAX;
	int64_t x704 = -1677967253396806664LL;
	static volatile int64_t t98 = 6906824LL;

	t98 = (x701/((x702&x703)&x704));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x705 = -219976921LL;
	int64_t x706 = 3277667467379550LL;
	uint64_t x707 = 2854479133LLU;
	uint16_t x708 = UINT16_MAX;
	static uint64_t t99 = 3607730LLU;

	t99 = (x705/((x706&x707)&x708));

	if (t99 != 373143945171324LLU) { NG(); } else { ; }
	
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

