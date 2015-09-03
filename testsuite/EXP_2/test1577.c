#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x13 = 6U;
static volatile int32_t t1 = -44398;
int8_t x32 = -36;
volatile int8_t x35 = INT8_MAX;
static int16_t x68 = INT16_MIN;
volatile int32_t t9 = 0;
static int8_t x93 = INT8_MIN;
int32_t x104 = -1;
int32_t x106 = INT32_MAX;
static int32_t x107 = INT32_MAX;
int32_t x108 = -1281;
int64_t t12 = 7826107317534LL;
uint8_t x112 = 24U;
uint32_t x114 = 16U;
int64_t x123 = INT64_MAX;
static int32_t x143 = 1170;
volatile uint32_t x154 = 107287114U;
volatile int64_t t20 = 1167LL;
uint8_t x161 = UINT8_MAX;
int64_t x165 = INT64_MIN;
uint32_t x167 = 48548439U;
int8_t x168 = INT8_MAX;
volatile int64_t t22 = 14LL;
volatile int32_t x172 = -1;
uint8_t x173 = 13U;
int32_t t25 = -2039378;
volatile int64_t t31 = 49867921895LL;
static volatile int32_t t32 = -1;
int32_t x244 = 6648429;
static volatile uint16_t x246 = 5687U;
int32_t t34 = 7373;
static int8_t x266 = 15;
static int16_t x271 = INT16_MIN;
static uint64_t x272 = 5407887267627263766LLU;
int16_t x287 = 274;
volatile uint32_t t39 = 93068603U;
int64_t x294 = -993677575337LL;
int64_t x306 = -1LL;
uint32_t x307 = UINT32_MAX;
static int8_t x308 = -1;
int32_t t41 = 253397505;
static volatile int32_t x337 = -1;
int8_t x345 = INT8_MAX;
volatile int32_t x359 = 4604793;
int16_t x362 = -83;
static uint32_t x364 = 467U;
int32_t x365 = INT32_MAX;
int8_t x390 = INT8_MIN;
static int32_t x393 = -1;
int16_t x421 = INT16_MIN;
int16_t x426 = 0;
static int8_t x427 = INT8_MAX;
uint64_t t57 = 3325283576LLU;
uint64_t x437 = 112451160880757LLU;
int32_t x438 = 254032;
int32_t x445 = -1;
uint8_t x447 = UINT8_MAX;
int16_t x459 = INT16_MIN;
int8_t x460 = 1;
static int16_t x462 = INT16_MAX;
int8_t x484 = 1;
int16_t x493 = -977;
static volatile uint8_t x495 = UINT8_MAX;
uint64_t x499 = 247473725918172LLU;
volatile int32_t x506 = INT32_MAX;
volatile int64_t x507 = 158382139602072LL;
volatile int32_t x511 = INT32_MAX;
int8_t x512 = 1;
volatile uint32_t t67 = 44U;
int32_t x546 = INT32_MIN;
int8_t x547 = -12;
static uint16_t x550 = 27360U;
uint16_t x551 = UINT16_MAX;
volatile int32_t t74 = -1;
uint64_t x581 = UINT64_MAX;
int16_t x582 = INT16_MIN;
static volatile uint64_t t76 = 64LLU;
int8_t x588 = INT8_MIN;
static volatile int32_t x593 = INT32_MAX;
int64_t x598 = -1LL;
int32_t x599 = INT32_MAX;
int8_t x604 = -1;
uint64_t x617 = 46599833LLU;
int64_t x618 = INT64_MIN;
volatile int64_t x638 = -1LL;
uint8_t x653 = 0U;
int16_t x656 = INT16_MAX;
int32_t x672 = 129289730;
int16_t x681 = -1;
uint64_t x684 = 490362982304388831LLU;
uint64_t x689 = 9186027930581244LLU;
volatile uint64_t t88 = 7213LLU;
int64_t x697 = 67LL;
int32_t x699 = 100878157;
volatile int64_t x700 = INT64_MIN;
int64_t x701 = -2774653LL;
volatile uint8_t x707 = 2U;
volatile int64_t t92 = 39522096418892LL;
uint8_t x721 = 0U;
static int16_t x722 = INT16_MIN;
int16_t x723 = INT16_MAX;
volatile uint64_t t96 = 72060833068554LLU;
int16_t x744 = 1533;
uint32_t x747 = 1316762U;


void f0(void) {
	int16_t x5 = 1;
	int64_t x6 = -1LL;
	uint32_t x7 = UINT32_MAX;
	static uint16_t x8 = 3201U;
	int32_t t0 = 7;

	t0 = ((x5%(x6<=x7))/x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x14 = 29;
	int16_t x15 = INT16_MAX;
	static volatile uint8_t x16 = UINT8_MAX;

	t1 = ((x13%(x14<=x15))/x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 1U;
	uint32_t x18 = 29U;
	static volatile int32_t x19 = 1373;
	uint32_t x20 = 75U;
	uint32_t t2 = 504392595U;

	t2 = ((x17%(x18<=x19))/x20);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x25 = 0U;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -1;
	volatile uint64_t x28 = 1937066457LLU;
	uint64_t t3 = 440524736165LLU;

	t3 = ((x25%(x26<=x27))/x28);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -119307630098LL;
	int32_t x30 = INT32_MIN;
	static uint8_t x31 = 0U;
	int64_t t4 = -298676424159228LL;

	t4 = ((x29%(x30<=x31))/x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -22LL;
	volatile uint8_t x34 = 106U;
	int64_t x36 = -1LL;
	volatile int64_t t5 = -40584372346815596LL;

	t5 = ((x33%(x34<=x35))/x36);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = 1;
	static int32_t x38 = INT32_MIN;
	int16_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	int32_t t6 = 46;

	t6 = ((x37%(x38<=x39))/x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x65 = -1;
	uint16_t x66 = 15U;
	volatile int32_t x67 = INT32_MAX;
	static volatile int32_t t7 = 52;

	t7 = ((x65%(x66<=x67))/x68);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x69 = 56072221U;
	int16_t x70 = -9283;
	int32_t x71 = INT32_MAX;
	uint16_t x72 = 8U;
	static volatile uint32_t t8 = 0U;

	t8 = ((x69%(x70<=x71))/x72);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int32_t x75 = -1;
	int32_t x76 = INT32_MAX;

	t9 = ((x73%(x74<=x75))/x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x94 = INT64_MIN;
	int32_t x95 = -1;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t10 = 940869612;

	t10 = ((x93%(x94<=x95))/x96);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x101 = INT32_MIN;
	uint32_t x102 = 1366U;
	int32_t x103 = -162;
	int32_t t11 = -575;

	t11 = ((x101%(x102<=x103))/x104);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x105 = 4976389452378LL;

	t12 = ((x105%(x106<=x107))/x108);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x109 = 1;
	uint32_t x110 = 0U;
	int32_t x111 = INT32_MIN;
	int32_t t13 = 2033451;

	t13 = ((x109%(x110<=x111))/x112);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x113 = 235LLU;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;
	volatile uint64_t t14 = 5LLU;

	t14 = ((x113%(x114<=x115))/x116);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x121 = -8363;
	uint16_t x122 = 356U;
	volatile int16_t x124 = INT16_MAX;
	volatile int32_t t15 = -51228552;

	t15 = ((x121%(x122<=x123))/x124);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x125 = 1U;
	uint32_t x126 = 50710706U;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MAX;
	static volatile uint32_t t16 = 3U;

	t16 = ((x125%(x126<=x127))/x128);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	int32_t x131 = 38915078;
	static int16_t x132 = 9;
	volatile int64_t t17 = 10422685902LL;

	t17 = ((x129%(x130<=x131))/x132);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x141 = INT8_MAX;
	volatile int16_t x142 = INT16_MIN;
	uint64_t x144 = 2LLU;
	uint64_t t18 = 2180085966610087LLU;

	t18 = ((x141%(x142<=x143))/x144);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x145 = INT32_MAX;
	int64_t x146 = -3721597LL;
	int32_t x147 = -980;
	uint32_t x148 = UINT32_MAX;
	static uint32_t t19 = 88U;

	t19 = ((x145%(x146<=x147))/x148);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = 14501LL;
	int32_t x155 = INT32_MIN;
	static uint32_t x156 = UINT32_MAX;

	t20 = ((x153%(x154<=x155))/x156);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x162 = 82415789U;
	static int8_t x163 = -1;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t21 = -2063671;

	t21 = ((x161%(x162<=x163))/x164);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x166 = 17U;

	t22 = ((x165%(x166<=x167))/x168);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = -166813180953097LL;
	static int32_t x171 = -238;
	static int32_t t23 = 1;

	t23 = ((x169%(x170<=x171))/x172);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x174 = INT16_MIN;
	volatile int8_t x175 = 37;
	int64_t x176 = -1LL;
	static int64_t t24 = -7274990710471LL;

	t24 = ((x173%(x174<=x175))/x176);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x185 = 5U;
	uint64_t x186 = UINT64_MAX;
	uint64_t x187 = UINT64_MAX;
	int32_t x188 = -1;

	t25 = ((x185%(x186<=x187))/x188);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x189 = -5LL;
	static int8_t x190 = -1;
	int8_t x191 = 11;
	static uint32_t x192 = UINT32_MAX;
	int64_t t26 = -140173865180173468LL;

	t26 = ((x189%(x190<=x191))/x192);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x193 = 1544746U;
	int8_t x194 = 7;
	int64_t x195 = INT64_MAX;
	int32_t x196 = INT32_MIN;
	uint32_t t27 = 503092U;

	t27 = ((x193%(x194<=x195))/x196);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x201 = -2775LL;
	volatile uint32_t x202 = 23U;
	int16_t x203 = INT16_MAX;
	static volatile int16_t x204 = INT16_MIN;
	static int64_t t28 = -642774576791LL;

	t28 = ((x201%(x202<=x203))/x204);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x217 = 3U;
	static volatile int32_t x218 = -5;
	static volatile int32_t x219 = INT32_MAX;
	int8_t x220 = -8;
	volatile int32_t t29 = 7;

	t29 = ((x217%(x218<=x219))/x220);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = 6306771U;
	static int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MAX;
	int32_t x224 = -1;
	uint32_t t30 = 9U;

	t30 = ((x221%(x222<=x223))/x224);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x225 = INT16_MAX;
	static volatile int8_t x226 = 7;
	uint16_t x227 = 7U;
	int64_t x228 = -1LL;

	t31 = ((x225%(x226<=x227))/x228);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = 1;

	t32 = ((x233%(x234<=x235))/x236);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x241 = -1;
	uint32_t x242 = 241187U;
	int16_t x243 = -101;
	volatile int32_t t33 = -9732446;

	t33 = ((x241%(x242<=x243))/x244);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x245 = 2U;
	int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MAX;

	t34 = ((x245%(x246<=x247))/x248);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x249 = 500653156U;
	int16_t x250 = -1;
	static int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;
	uint32_t t35 = 295943U;

	t35 = ((x249%(x250<=x251))/x252);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x253 = 5U;
	volatile uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 30154529LLU;
	int16_t x256 = -1;
	volatile int32_t t36 = -3212;

	t36 = ((x253%(x254<=x255))/x256);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x267 = INT32_MAX;
	static uint64_t x268 = UINT64_MAX;
	uint64_t t37 = 3390LLU;

	t37 = ((x265%(x266<=x267))/x268);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x269 = 9U;
	volatile int64_t x270 = INT64_MIN;
	volatile uint64_t t38 = 148476848912255651LLU;

	t38 = ((x269%(x270<=x271))/x272);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x285 = INT32_MAX;
	int8_t x286 = INT8_MAX;
	uint32_t x288 = 750U;

	t39 = ((x285%(x286<=x287))/x288);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x293 = 0U;
	static int32_t x295 = INT32_MAX;
	int16_t x296 = 1017;
	static int32_t t40 = -23688022;

	t40 = ((x293%(x294<=x295))/x296);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x305 = 46U;

	t41 = ((x305%(x306<=x307))/x308);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t42 = -31002;

	t42 = ((x321%(x322<=x323))/x324);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = 28;
	volatile uint64_t x331 = UINT64_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t43 = 1728657788073LLU;

	t43 = ((x329%(x330<=x331))/x332);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x338 = INT8_MAX;
	uint32_t x339 = UINT32_MAX;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t44 = 522224209406454375LLU;

	t44 = ((x337%(x338<=x339))/x340);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x346 = 14U;
	volatile uint8_t x347 = 27U;
	static int8_t x348 = 8;
	static volatile int32_t t45 = 66661805;

	t45 = ((x345%(x346<=x347))/x348);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x353 = 5655660305390LLU;
	volatile uint32_t x354 = 16375924U;
	int16_t x355 = -1;
	int16_t x356 = -1;
	volatile uint64_t t46 = 113190885025406501LLU;

	t46 = ((x353%(x354<=x355))/x356);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x357 = 8U;
	int16_t x358 = INT16_MIN;
	static int64_t x360 = 867348884428276LL;
	volatile int64_t t47 = -941080260092747LL;

	t47 = ((x357%(x358<=x359))/x360);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x361 = UINT64_MAX;
	volatile int64_t x363 = -1LL;
	static volatile uint64_t t48 = 458777777946951714LLU;

	t48 = ((x361%(x362<=x363))/x364);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MIN;
	int32_t t49 = 514553966;

	t49 = ((x365%(x366<=x367))/x368);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x369 = -1;
	volatile int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	uint16_t x372 = 18967U;
	static int32_t t50 = 0;

	t50 = ((x369%(x370<=x371))/x372);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x389 = INT16_MIN;
	int64_t x391 = 1380649294LL;
	volatile int64_t x392 = INT64_MIN;
	volatile int64_t t51 = -362LL;

	t51 = ((x389%(x390<=x391))/x392);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MAX;
	int16_t x396 = -5;
	static volatile int32_t t52 = 5957027;

	t52 = ((x393%(x394<=x395))/x396);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x397 = 387U;
	volatile int64_t x398 = INT64_MIN;
	static volatile int16_t x399 = -178;
	int32_t x400 = INT32_MIN;
	int32_t t53 = -405754;

	t53 = ((x397%(x398<=x399))/x400);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x401 = INT64_MIN;
	int8_t x402 = 5;
	volatile int16_t x403 = INT16_MAX;
	volatile int32_t x404 = INT32_MIN;
	volatile int64_t t54 = -2LL;

	t54 = ((x401%(x402<=x403))/x404);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x409 = INT8_MIN;
	static int8_t x410 = INT8_MIN;
	uint8_t x411 = 103U;
	uint16_t x412 = 73U;
	int32_t t55 = -830751288;

	t55 = ((x409%(x410<=x411))/x412);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x422 = -1;
	static uint16_t x423 = 20U;
	int32_t x424 = INT32_MIN;
	static volatile int32_t t56 = -17851807;

	t56 = ((x421%(x422<=x423))/x424);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x425 = UINT64_MAX;
	static int64_t x428 = -2485056130618071LL;

	t57 = ((x425%(x426<=x427))/x428);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x433 = 19U;
	static int32_t x434 = INT32_MIN;
	uint32_t x435 = UINT32_MAX;
	static int8_t x436 = INT8_MIN;
	static volatile int32_t t58 = -14695;

	t58 = ((x433%(x434<=x435))/x436);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x439 = 431882693176301LL;
	static int8_t x440 = -1;
	static uint64_t t59 = 9010138665192LLU;

	t59 = ((x437%(x438<=x439))/x440);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x446 = UINT8_MAX;
	static volatile int64_t x448 = INT64_MIN;
	int64_t t60 = -27272072034LL;

	t60 = ((x445%(x446<=x447))/x448);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x457 = 65U;
	static uint64_t x458 = 375795LLU;
	int32_t t61 = 40603526;

	t61 = ((x457%(x458<=x459))/x460);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x461 = INT32_MAX;
	uint32_t x463 = 432715383U;
	int32_t x464 = INT32_MAX;
	static int32_t t62 = -4;

	t62 = ((x461%(x462<=x463))/x464);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MIN;
	int16_t x483 = -1;
	int32_t t63 = -4;

	t63 = ((x481%(x482<=x483))/x484);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x494 = -125;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t64 = 1LLU;

	t64 = ((x493%(x494<=x495))/x496);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x497 = UINT8_MAX;
	uint16_t x498 = 1884U;
	static int32_t x500 = INT32_MIN;
	volatile int32_t t65 = 6465528;

	t65 = ((x497%(x498<=x499))/x500);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x505 = UINT64_MAX;
	uint16_t x508 = UINT16_MAX;
	uint64_t t66 = 65219896LLU;

	t66 = ((x505%(x506<=x507))/x508);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x509 = UINT32_MAX;
	int64_t x510 = INT64_MIN;

	t67 = ((x509%(x510<=x511))/x512);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x513 = INT64_MIN;
	static int8_t x514 = -1;
	int16_t x515 = INT16_MAX;
	int32_t x516 = INT32_MIN;
	volatile int64_t t68 = -73506LL;

	t68 = ((x513%(x514<=x515))/x516);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x517 = 54U;
	static uint8_t x518 = UINT8_MAX;
	uint64_t x519 = 55073154129793LLU;
	int8_t x520 = INT8_MIN;
	volatile int32_t t69 = 638328728;

	t69 = ((x517%(x518<=x519))/x520);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x533 = INT64_MIN;
	static volatile uint32_t x534 = 154U;
	int32_t x535 = -1;
	uint8_t x536 = 17U;
	int64_t t70 = -509LL;

	t70 = ((x533%(x534<=x535))/x536);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x545 = 4;
	int64_t x548 = 332710LL;
	int64_t t71 = -48369LL;

	t71 = ((x545%(x546<=x547))/x548);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x549 = UINT32_MAX;
	int32_t x552 = -4;
	static volatile uint32_t t72 = 10807678U;

	t72 = ((x549%(x550<=x551))/x552);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x553 = INT16_MIN;
	volatile int64_t x554 = -1LL;
	volatile int64_t x555 = -1LL;
	volatile int8_t x556 = INT8_MAX;
	int32_t t73 = -13132;

	t73 = ((x553%(x554<=x555))/x556);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x561 = INT8_MIN;
	static uint32_t x562 = 231U;
	int8_t x563 = -54;
	int32_t x564 = INT32_MIN;

	t74 = ((x561%(x562<=x563))/x564);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x565 = INT8_MIN;
	static int32_t x566 = -1;
	uint16_t x567 = UINT16_MAX;
	static int32_t x568 = -47298848;
	static int32_t t75 = -2982;

	t75 = ((x565%(x566<=x567))/x568);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x583 = INT8_MAX;
	int64_t x584 = INT64_MIN;

	t76 = ((x581%(x582<=x583))/x584);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MIN;
	int32_t x587 = INT32_MIN;
	int32_t t77 = 2160;

	t77 = ((x585%(x586<=x587))/x588);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x594 = INT64_MIN;
	int8_t x595 = INT8_MAX;
	uint8_t x596 = 74U;
	int32_t t78 = 1;

	t78 = ((x593%(x594<=x595))/x596);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x597 = INT8_MAX;
	volatile uint32_t x600 = 9787U;
	volatile uint32_t t79 = 201771U;

	t79 = ((x597%(x598<=x599))/x600);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x601 = UINT8_MAX;
	int16_t x602 = 15430;
	uint16_t x603 = UINT16_MAX;
	int32_t t80 = -39;

	t80 = ((x601%(x602<=x603))/x604);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x619 = -2074824LL;
	static int8_t x620 = INT8_MAX;
	uint64_t t81 = 33237051LLU;

	t81 = ((x617%(x618<=x619))/x620);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x621 = 3719;
	volatile int32_t x622 = INT32_MAX;
	uint64_t x623 = UINT64_MAX;
	volatile int32_t x624 = -1;
	static int32_t t82 = -61509690;

	t82 = ((x621%(x622<=x623))/x624);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x625 = 4;
	static int64_t x626 = -1LL;
	static int8_t x627 = INT8_MAX;
	static int32_t x628 = 7989775;
	int32_t t83 = 3834;

	t83 = ((x625%(x626<=x627))/x628);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x637 = INT8_MAX;
	volatile uint16_t x639 = 11344U;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t84 = 469573703;

	t84 = ((x637%(x638<=x639))/x640);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x654 = 43U;
	uint64_t x655 = 938128378359227LLU;
	int32_t t85 = -126995862;

	t85 = ((x653%(x654<=x655))/x656);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x669 = 18U;
	int32_t x670 = -24453;
	volatile int8_t x671 = INT8_MIN;
	int32_t t86 = -77776;

	t86 = ((x669%(x670<=x671))/x672);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x682 = 0U;
	uint64_t x683 = 789650753056843LLU;
	volatile uint64_t t87 = 21644285139874LLU;

	t87 = ((x681%(x682<=x683))/x684);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x690 = 0LLU;
	int8_t x691 = INT8_MIN;
	int64_t x692 = -1LL;

	t88 = ((x689%(x690<=x691))/x692);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x693 = INT32_MIN;
	int64_t x694 = -1LL;
	uint8_t x695 = 23U;
	static int16_t x696 = 75;
	volatile int32_t t89 = 491256;

	t89 = ((x693%(x694<=x695))/x696);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x698 = INT16_MIN;
	static volatile int64_t t90 = 3817415LL;

	t90 = ((x697%(x698<=x699))/x700);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x702 = INT32_MIN;
	uint16_t x703 = 249U;
	static int64_t x704 = -65808834568392486LL;
	static int64_t t91 = 2LL;

	t91 = ((x701%(x702<=x703))/x704);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x705 = -1LL;
	int8_t x706 = -1;
	volatile int32_t x708 = INT32_MIN;

	t92 = ((x705%(x706<=x707))/x708);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x717 = UINT32_MAX;
	int8_t x718 = INT8_MAX;
	uint32_t x719 = 811578421U;
	int16_t x720 = INT16_MAX;
	static volatile uint32_t t93 = 52787826U;

	t93 = ((x717%(x718<=x719))/x720);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x724 = 2U;
	volatile int32_t t94 = -1;

	t94 = ((x721%(x722<=x723))/x724);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x729 = INT8_MIN;
	static int32_t x730 = INT32_MIN;
	volatile int32_t x731 = INT32_MAX;
	int8_t x732 = -1;
	volatile int32_t t95 = -126339;

	t95 = ((x729%(x730<=x731))/x732);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x733 = 612LLU;
	int32_t x734 = INT32_MIN;
	static int64_t x735 = -1LL;
	int32_t x736 = -1;

	t96 = ((x733%(x734<=x735))/x736);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x737 = INT8_MIN;
	int64_t x738 = -2220061LL;
	static int8_t x739 = INT8_MIN;
	int16_t x740 = INT16_MIN;
	volatile int32_t t97 = -452164;

	t97 = ((x737%(x738<=x739))/x740);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x741 = 16U;
	int32_t x742 = -407;
	int32_t x743 = -1;
	volatile int32_t t98 = 347354;

	t98 = ((x741%(x742<=x743))/x744);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x745 = UINT16_MAX;
	static int64_t x746 = INT64_MIN;
	static uint32_t x748 = UINT32_MAX;
	volatile uint32_t t99 = 8U;

	t99 = ((x745%(x746<=x747))/x748);

	if (t99 != 0U) { NG(); } else { ; }
	
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

