#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 447082;
static int32_t t2 = 12303700;
static volatile int64_t x24 = 9LL;
volatile uint16_t x26 = 2U;
static uint32_t x35 = 359U;
uint8_t x36 = 1U;
uint8_t x37 = 62U;
volatile uint16_t x38 = 2U;
uint32_t x43 = 3183U;
int32_t t9 = 0;
static int8_t x67 = INT8_MIN;
uint64_t x73 = 3859LLU;
volatile uint64_t x75 = 0LLU;
volatile int64_t x100 = 79735119LL;
int8_t x105 = INT8_MAX;
static volatile uint8_t x107 = UINT8_MAX;
int64_t x112 = 62475303758100999LL;
int16_t x114 = 1;
int8_t x123 = INT8_MIN;
static uint8_t x131 = 29U;
int8_t x135 = INT8_MIN;
static uint64_t x138 = UINT64_MAX;
volatile uint8_t x141 = 25U;
volatile int64_t x142 = -3137963954366943690LL;
int32_t t26 = -6;
uint8_t x145 = UINT8_MAX;
volatile int32_t t27 = -5480622;
int64_t x149 = 3LL;
uint16_t x150 = 3U;
int32_t t29 = 97;
uint64_t x201 = UINT64_MAX;
uint16_t x204 = 73U;
int32_t t33 = -8;
int32_t x212 = INT32_MIN;
static uint16_t x221 = 1306U;
int64_t x227 = -1LL;
int32_t t37 = 1;
int8_t x231 = 60;
static uint8_t x233 = 43U;
static int64_t x236 = -1338LL;
int8_t x250 = INT8_MIN;
uint32_t x265 = 11U;
int16_t x268 = INT16_MAX;
uint64_t x272 = 7855LLU;
static int64_t x273 = 721450613023617998LL;
int64_t x290 = INT64_MIN;
static int32_t x294 = -1;
uint32_t x296 = UINT32_MAX;
volatile int32_t t46 = 7072;
volatile int32_t x311 = INT32_MIN;
volatile int32_t t47 = -19996;
int64_t x318 = INT64_MIN;
static volatile uint16_t x319 = 2322U;
int32_t t48 = -1790727;
uint16_t x330 = 1553U;
int8_t x337 = 46;
static uint64_t x338 = UINT64_MAX;
int64_t x375 = 2840929LL;
int32_t t54 = 1;
static int32_t x387 = INT32_MIN;
int16_t x418 = INT16_MAX;
int8_t x419 = INT8_MIN;
uint32_t x432 = 202144409U;
int32_t t60 = 1;
uint64_t x433 = 262015LLU;
volatile int32_t t62 = 0;
volatile int16_t x454 = 1478;
static uint32_t x464 = 6402483U;
int8_t x470 = INT8_MIN;
int32_t x479 = INT32_MIN;
int32_t t68 = 14063;
int64_t x490 = INT64_MIN;
volatile int16_t x491 = INT16_MIN;
static int8_t x519 = INT8_MIN;
static uint8_t x522 = 61U;
int8_t x524 = INT8_MIN;
int32_t x546 = -7860;
volatile int32_t t74 = 5;
static int32_t x556 = INT32_MIN;
uint64_t x583 = 3220923280143962681LLU;
static volatile uint64_t x611 = UINT64_MAX;
uint32_t x620 = UINT32_MAX;
int8_t x633 = INT8_MAX;
uint8_t x636 = UINT8_MAX;
static int16_t x647 = 45;
volatile uint64_t x650 = UINT64_MAX;
volatile uint32_t x655 = UINT32_MAX;
int32_t t89 = 2851;
int8_t x689 = INT8_MAX;
int32_t t90 = 0;
volatile int64_t x695 = INT64_MIN;
volatile int16_t x703 = -1;
int64_t x720 = INT64_MAX;
uint32_t x722 = UINT32_MAX;
volatile int32_t t95 = 131016328;
static uint8_t x725 = 1U;
int32_t x726 = 17884122;
int32_t x732 = -1;
int64_t x734 = INT64_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = -1;
	volatile uint64_t x3 = 22908LLU;
	static int32_t x4 = -1;

	t0 = ((x1<<(x2<=x3))==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;
	static int64_t x12 = INT64_MAX;
	volatile int32_t t1 = -28307;

	t1 = ((x9<<(x10<=x11))==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 174770055LL;
	int16_t x14 = -1;
	volatile int64_t x15 = -57589LL;
	uint8_t x16 = UINT8_MAX;

	t2 = ((x13<<(x14<=x15))==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	static int64_t x18 = -31432693450LL;
	volatile int16_t x19 = 42;
	int8_t x20 = -1;
	volatile int32_t t3 = -23649443;

	t3 = ((x17<<(x18<=x19))==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 203185000LL;
	int64_t x22 = -1LL;
	int8_t x23 = -1;
	static int32_t t4 = -1;

	t4 = ((x21<<(x22<=x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 814U;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MAX;
	int32_t t5 = -42248449;

	t5 = ((x25<<(x26<=x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = 1;
	static uint8_t x34 = 24U;
	volatile int32_t t6 = 23;

	t6 = ((x33<<(x34<=x35))==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x39 = UINT64_MAX;
	uint32_t x40 = 23033U;
	int32_t t7 = 3;

	t7 = ((x37<<(x38<=x39))==x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	static volatile uint32_t x42 = 110478U;
	int64_t x44 = -1LL;
	volatile int32_t t8 = -106342143;

	t8 = ((x41<<(x42<=x43))==x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MAX;
	static volatile int8_t x47 = 31;
	volatile uint64_t x48 = 26LLU;

	t9 = ((x45<<(x46<=x47))==x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 89U;
	int64_t x62 = 3LL;
	static int16_t x63 = -124;
	volatile uint32_t x64 = UINT32_MAX;
	static volatile int32_t t10 = 887990430;

	t10 = ((x61<<(x62<=x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x65 = 13;
	uint32_t x66 = 244872468U;
	int32_t x68 = INT32_MAX;
	volatile int32_t t11 = -314205807;

	t11 = ((x65<<(x66<=x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -1;
	static volatile uint64_t x71 = 6419862LLU;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t12 = -114776086;

	t12 = ((x69<<(x70<=x71))==x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x74 = 10U;
	int32_t x76 = INT32_MIN;
	int32_t t13 = 76280;

	t13 = ((x73<<(x74<=x75))==x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 479U;
	int16_t x78 = INT16_MIN;
	int64_t x79 = -1LL;
	int32_t x80 = 859;
	static volatile int32_t t14 = -2327;

	t14 = ((x77<<(x78<=x79))==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x82 = INT32_MIN;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = 1;
	int32_t t15 = -310917;

	t15 = ((x81<<(x82<=x83))==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 109U;
	int64_t x90 = INT64_MAX;
	volatile int8_t x91 = INT8_MIN;
	volatile uint64_t x92 = UINT64_MAX;
	static int32_t t16 = 42;

	t16 = ((x89<<(x90<=x91))==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 14LL;
	uint16_t x98 = 6314U;
	int16_t x99 = INT16_MIN;
	volatile int32_t t17 = 0;

	t17 = ((x97<<(x98<=x99))==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = -1;
	int32_t x108 = INT32_MAX;
	volatile int32_t t18 = 8462;

	t18 = ((x105<<(x106<=x107))==x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x109 = 2U;
	int32_t x110 = INT32_MIN;
	uint8_t x111 = 85U;
	int32_t t19 = 11119;

	t19 = ((x109<<(x110<=x111))==x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x113 = 798385LLU;
	int8_t x115 = INT8_MAX;
	volatile uint16_t x116 = 9662U;
	volatile int32_t t20 = 1;

	t20 = ((x113<<(x114<=x115))==x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MAX;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t21 = -96;

	t21 = ((x117<<(x118<=x119))==x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x121 = 1;
	volatile int64_t x122 = INT64_MAX;
	static uint64_t x124 = 441624LLU;
	volatile int32_t t22 = -97794;

	t22 = ((x121<<(x122<=x123))==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = 602;
	volatile int8_t x130 = INT8_MAX;
	int8_t x132 = -1;
	volatile int32_t t23 = -3515168;

	t23 = ((x129<<(x130<=x131))==x132);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x133 = UINT8_MAX;
	uint8_t x134 = UINT8_MAX;
	static int16_t x136 = 4383;
	int32_t t24 = -4031740;

	t24 = ((x133<<(x134<=x135))==x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x137 = 249;
	int32_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile int32_t t25 = 26612;

	t25 = ((x137<<(x138<=x139))==x140);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x143 = 60U;
	uint64_t x144 = 516694658645050660LLU;

	t26 = ((x141<<(x142<=x143))==x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 5LLU;
	int8_t x148 = -43;

	t27 = ((x145<<(x146<=x147))==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x151 = 169014544616LL;
	uint64_t x152 = UINT64_MAX;
	int32_t t28 = -51786533;

	t28 = ((x149<<(x150<=x151))==x152);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MAX;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = -1;

	t29 = ((x169<<(x170<=x171))==x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x177 = INT8_MAX;
	int64_t x178 = 5208025181LL;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	volatile int32_t t30 = 921937;

	t30 = ((x177<<(x178<=x179))==x180);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x193 = 18943U;
	static uint16_t x194 = UINT16_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	uint16_t x196 = 9U;
	static volatile int32_t t31 = 0;

	t31 = ((x193<<(x194<=x195))==x196);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x202 = 38U;
	uint64_t x203 = 1982690771169LLU;
	volatile int32_t t32 = 21017;

	t32 = ((x201<<(x202<=x203))==x204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MAX;

	t33 = ((x205<<(x206<=x207))==x208);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x209 = 13;
	volatile uint16_t x210 = 15U;
	uint8_t x211 = 96U;
	volatile int32_t t34 = -130098;

	t34 = ((x209<<(x210<=x211))==x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x217 = 60;
	static uint64_t x218 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t35 = -167;

	t35 = ((x217<<(x218<=x219))==x220);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x222 = -155548096LL;
	int64_t x223 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t36 = 1339;

	t36 = ((x221<<(x222<=x223))==x224);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x225 = UINT16_MAX;
	uint32_t x226 = UINT32_MAX;
	uint8_t x228 = 112U;

	t37 = ((x225<<(x226<=x227))==x228);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x229 = 0U;
	volatile int32_t x230 = 16138;
	volatile int32_t x232 = 0;
	static volatile int32_t t38 = -495;

	t38 = ((x229<<(x230<=x231))==x232);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x234 = -31;
	volatile int32_t x235 = -13;
	int32_t t39 = -1408808;

	t39 = ((x233<<(x234<=x235))==x236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x249 = 5057454543501001LLU;
	int32_t x251 = 115088;
	uint32_t x252 = UINT32_MAX;
	int32_t t40 = 83;

	t40 = ((x249<<(x250<=x251))==x252);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x266 = 41;
	uint8_t x267 = 9U;
	static volatile int32_t t41 = 20070;

	t41 = ((x265<<(x266<=x267))==x268);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x269 = 12;
	uint8_t x270 = UINT8_MAX;
	volatile int32_t x271 = INT32_MIN;
	static volatile int32_t t42 = 1;

	t42 = ((x269<<(x270<=x271))==x272);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x274 = UINT8_MAX;
	volatile int8_t x275 = -7;
	static uint64_t x276 = 9156936241179552LLU;
	int32_t t43 = 2;

	t43 = ((x273<<(x274<=x275))==x276);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x289 = 77U;
	static uint64_t x291 = UINT64_MAX;
	uint64_t x292 = 98312957543594LLU;
	int32_t t44 = 1986;

	t44 = ((x289<<(x290<=x291))==x292);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x293 = UINT32_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	int32_t t45 = -1466;

	t45 = ((x293<<(x294<=x295))==x296);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x305 = 246U;
	volatile int8_t x306 = INT8_MAX;
	int32_t x307 = INT32_MAX;
	int16_t x308 = -1;

	t46 = ((x305<<(x306<=x307))==x308);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x309 = 68722229278727LLU;
	static uint16_t x310 = 63U;
	volatile int8_t x312 = -36;

	t47 = ((x309<<(x310<=x311))==x312);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x317 = 2U;
	static int32_t x320 = 59363309;

	t48 = ((x317<<(x318<=x319))==x320);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x321 = INT16_MAX;
	uint64_t x322 = 16414816080188LLU;
	int8_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	volatile int32_t t49 = 28;

	t49 = ((x321<<(x322<=x323))==x324);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x329 = UINT16_MAX;
	static int16_t x331 = 4;
	uint8_t x332 = 1U;
	volatile int32_t t50 = -8351;

	t50 = ((x329<<(x330<=x331))==x332);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x339 = 55947957977LLU;
	static int16_t x340 = -2;
	static int32_t t51 = -55688;

	t51 = ((x337<<(x338<=x339))==x340);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x365 = 12198U;
	uint16_t x366 = UINT16_MAX;
	static int16_t x367 = INT16_MIN;
	volatile int64_t x368 = -20036841258LL;
	static volatile int32_t t52 = -728418;

	t52 = ((x365<<(x366<=x367))==x368);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x369 = INT8_MAX;
	int32_t x370 = -7;
	int32_t x371 = INT32_MAX;
	int64_t x372 = -1LL;
	int32_t t53 = -21;

	t53 = ((x369<<(x370<=x371))==x372);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x373 = 8;
	volatile int32_t x374 = INT32_MAX;
	uint32_t x376 = 25506829U;

	t54 = ((x373<<(x374<=x375))==x376);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x377 = 3;
	static int64_t x378 = INT64_MIN;
	static int8_t x379 = INT8_MAX;
	int32_t x380 = 5751035;
	int32_t t55 = -34319;

	t55 = ((x377<<(x378<=x379))==x380);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x381 = UINT16_MAX;
	volatile int32_t x382 = -1;
	int16_t x383 = -1;
	static int32_t x384 = -9600288;
	int32_t t56 = -1;

	t56 = ((x381<<(x382<=x383))==x384);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x386 = INT64_MIN;
	int64_t x388 = INT64_MAX;
	int32_t t57 = 23926776;

	t57 = ((x385<<(x386<=x387))==x388);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x393 = 385899603262198391LLU;
	uint32_t x394 = 15U;
	int64_t x395 = -13883159955735555LL;
	static volatile uint8_t x396 = 0U;
	volatile int32_t t58 = -1027432435;

	t58 = ((x393<<(x394<=x395))==x396);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x417 = 11U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t59 = -728;

	t59 = ((x417<<(x418<=x419))==x420);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x429 = INT8_MAX;
	uint8_t x430 = UINT8_MAX;
	volatile uint64_t x431 = 1416759896LLU;

	t60 = ((x429<<(x430<=x431))==x432);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x434 = 1;
	volatile int16_t x435 = -1;
	uint64_t x436 = 58138390680300LLU;
	static int32_t t61 = 10;

	t61 = ((x433<<(x434<=x435))==x436);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x441 = 122U;
	uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	volatile int16_t x444 = INT16_MIN;

	t62 = ((x441<<(x442<=x443))==x444);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x449 = INT8_MAX;
	static int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MIN;
	int64_t x452 = INT64_MIN;
	volatile int32_t t63 = 840;

	t63 = ((x449<<(x450<=x451))==x452);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x453 = UINT8_MAX;
	int64_t x455 = 51014927095052LL;
	uint16_t x456 = 2246U;
	static volatile int32_t t64 = 8457;

	t64 = ((x453<<(x454<=x455))==x456);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x461 = INT16_MAX;
	uint8_t x462 = 2U;
	uint8_t x463 = 0U;
	volatile int32_t t65 = -1;

	t65 = ((x461<<(x462<=x463))==x464);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x469 = UINT64_MAX;
	int16_t x471 = INT16_MIN;
	volatile uint32_t x472 = 18U;
	static int32_t t66 = -53;

	t66 = ((x469<<(x470<=x471))==x472);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x473 = INT8_MAX;
	uint16_t x474 = 19582U;
	static int64_t x475 = INT64_MIN;
	uint64_t x476 = UINT64_MAX;
	static int32_t t67 = -891320811;

	t67 = ((x473<<(x474<=x475))==x476);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x477 = 13LL;
	int8_t x478 = INT8_MIN;
	volatile uint64_t x480 = 1637271730586432LLU;

	t68 = ((x477<<(x478<=x479))==x480);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x489 = 63LLU;
	static int8_t x492 = -1;
	static volatile int32_t t69 = 993;

	t69 = ((x489<<(x490<=x491))==x492);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x493 = UINT16_MAX;
	static int8_t x494 = INT8_MIN;
	static uint16_t x495 = 324U;
	uint8_t x496 = 35U;
	int32_t t70 = -2082;

	t70 = ((x493<<(x494<=x495))==x496);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x517 = UINT8_MAX;
	volatile int32_t x518 = INT32_MIN;
	int16_t x520 = INT16_MAX;
	int32_t t71 = 1037392;

	t71 = ((x517<<(x518<=x519))==x520);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x521 = 5;
	volatile int8_t x523 = INT8_MAX;
	int32_t t72 = 13;

	t72 = ((x521<<(x522<=x523))==x524);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x533 = 1277075019U;
	static int64_t x534 = INT64_MIN;
	int32_t x535 = 37047;
	int32_t x536 = INT32_MAX;
	volatile int32_t t73 = -30570;

	t73 = ((x533<<(x534<=x535))==x536);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x545 = 16U;
	int8_t x547 = -1;
	int16_t x548 = 3209;

	t74 = ((x545<<(x546<=x547))==x548);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x553 = INT32_MAX;
	uint16_t x554 = 422U;
	int16_t x555 = INT16_MIN;
	static int32_t t75 = -451305553;

	t75 = ((x553<<(x554<=x555))==x556);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x573 = 6;
	static int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = 11629LL;
	int32_t t76 = 107123305;

	t76 = ((x573<<(x574<=x575))==x576);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x581 = 4U;
	int8_t x582 = INT8_MIN;
	int32_t x584 = INT32_MIN;
	volatile int32_t t77 = -1939;

	t77 = ((x581<<(x582<=x583))==x584);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x589 = 59U;
	int32_t x590 = -1;
	uint32_t x591 = 6762566U;
	int8_t x592 = -1;
	int32_t t78 = 15214;

	t78 = ((x589<<(x590<=x591))==x592);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x609 = 6383508LLU;
	int32_t x610 = INT32_MIN;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t79 = -1;

	t79 = ((x609<<(x610<=x611))==x612);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x617 = UINT8_MAX;
	int32_t x618 = -1;
	int16_t x619 = INT16_MAX;
	int32_t t80 = 10459545;

	t80 = ((x617<<(x618<=x619))==x620);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x629 = 107;
	volatile uint16_t x630 = UINT16_MAX;
	int16_t x631 = 1404;
	volatile uint32_t x632 = 295155U;
	int32_t t81 = -14134412;

	t81 = ((x629<<(x630<=x631))==x632);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x634 = 72U;
	static int64_t x635 = 31424285LL;
	static volatile int32_t t82 = 15800;

	t82 = ((x633<<(x634<=x635))==x636);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x637 = 101U;
	static int32_t x638 = INT32_MIN;
	volatile int64_t x639 = INT64_MIN;
	int64_t x640 = 75429267681LL;
	volatile int32_t t83 = -247;

	t83 = ((x637<<(x638<=x639))==x640);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x645 = INT8_MAX;
	int64_t x646 = 4652087LL;
	int32_t x648 = 4494;
	static int32_t t84 = 7486065;

	t84 = ((x645<<(x646<=x647))==x648);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x649 = 116U;
	uint32_t x651 = UINT32_MAX;
	int32_t x652 = INT32_MIN;
	int32_t t85 = 54;

	t85 = ((x649<<(x650<=x651))==x652);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x653 = 228230954321265402LLU;
	int8_t x654 = 0;
	volatile int32_t x656 = INT32_MIN;
	static int32_t t86 = -546615407;

	t86 = ((x653<<(x654<=x655))==x656);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x677 = 5678149422LLU;
	int32_t x678 = 1;
	volatile int32_t x679 = INT32_MIN;
	static int16_t x680 = INT16_MAX;
	int32_t t87 = -3;

	t87 = ((x677<<(x678<=x679))==x680);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x681 = INT8_MAX;
	uint8_t x682 = 19U;
	uint32_t x683 = 751797680U;
	int32_t x684 = INT32_MIN;
	volatile int32_t t88 = 7019;

	t88 = ((x681<<(x682<=x683))==x684);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x685 = INT16_MAX;
	int64_t x686 = -32569796063091LL;
	int32_t x687 = 14;
	int64_t x688 = INT64_MIN;

	t89 = ((x685<<(x686<=x687))==x688);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x690 = 2753394;
	int64_t x691 = -1LL;
	int64_t x692 = INT64_MIN;

	t90 = ((x689<<(x690<=x691))==x692);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x693 = 84U;
	int32_t x694 = -18025057;
	uint32_t x696 = UINT32_MAX;
	volatile int32_t t91 = -16250814;

	t91 = ((x693<<(x694<=x695))==x696);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x697 = 0;
	int16_t x698 = INT16_MAX;
	static int32_t x699 = INT32_MAX;
	int16_t x700 = INT16_MIN;
	int32_t t92 = -61;

	t92 = ((x697<<(x698<=x699))==x700);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x701 = 822807624U;
	int64_t x702 = 795172636LL;
	int16_t x704 = 2;
	volatile int32_t t93 = 7;

	t93 = ((x701<<(x702<=x703))==x704);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x717 = 61U;
	int32_t x718 = INT32_MIN;
	int32_t x719 = INT32_MIN;
	volatile int32_t t94 = 921465022;

	t94 = ((x717<<(x718<=x719))==x720);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x721 = 25;
	static int64_t x723 = INT64_MIN;
	int32_t x724 = -1;

	t95 = ((x721<<(x722<=x723))==x724);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x727 = INT64_MAX;
	int64_t x728 = INT64_MAX;
	int32_t t96 = -202;

	t96 = ((x725<<(x726<=x727))==x728);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x729 = 182U;
	volatile int32_t x730 = -852;
	int16_t x731 = -5509;
	int32_t t97 = 28985704;

	t97 = ((x729<<(x730<=x731))==x732);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x733 = 77U;
	uint64_t x735 = 1782LLU;
	volatile int64_t x736 = 51LL;
	int32_t t98 = 332164;

	t98 = ((x733<<(x734<=x735))==x736);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x737 = INT16_MAX;
	static int64_t x738 = -1LL;
	uint32_t x739 = 10U;
	static int32_t x740 = INT32_MIN;
	int32_t t99 = 20444;

	t99 = ((x737<<(x738<=x739))==x740);

	if (t99 != 0) { NG(); } else { ; }
	
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

