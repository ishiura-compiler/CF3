
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 35;
static int16_t x2 = -1;
int32_t x9 = INT32_MIN;
volatile int32_t t2 = -3994000;
volatile uint8_t x21 = UINT8_MAX;
volatile uint32_t x24 = 255U;
static int64_t x29 = -1LL;
int64_t x30 = INT64_MIN;
int8_t x60 = INT8_MIN;
int16_t x64 = INT16_MIN;
static volatile int32_t t9 = 3813373;
uint32_t x69 = UINT32_MAX;
static int8_t x71 = INT8_MAX;
int64_t x74 = 1LL;
uint8_t x80 = 53U;
volatile uint8_t x110 = UINT8_MAX;
static uint64_t x112 = 30LLU;
int32_t t16 = -14112343;
static volatile int64_t x120 = INT64_MIN;
volatile int32_t x127 = -1;
static int32_t x132 = INT32_MIN;
int32_t x156 = -43761910;
static volatile int64_t x158 = 2LL;
volatile int64_t x160 = 108LL;
static volatile int32_t x170 = INT32_MIN;
static int32_t t26 = 420;
static volatile int32_t t27 = -13181451;
int16_t x192 = 7;
int32_t t32 = -58296;
static uint64_t x213 = UINT64_MAX;
uint8_t x221 = 1U;
static int32_t x224 = -75007;
uint32_t x225 = 3U;
int64_t x228 = -1LL;
volatile uint32_t x233 = 468U;
int16_t x239 = INT16_MAX;
volatile uint32_t x240 = 10U;
volatile int32_t t38 = 44926;
volatile uint16_t x244 = 2U;
int64_t x249 = INT64_MIN;
int64_t x255 = -1LL;
static volatile int8_t x268 = 0;
uint64_t x270 = 12479151513701LLU;
int64_t x284 = INT64_MIN;
int32_t t47 = -57103;
uint8_t x313 = 13U;
uint8_t x314 = 1U;
static int8_t x331 = INT8_MIN;
static uint64_t x338 = UINT64_MAX;
int16_t x344 = INT16_MAX;
static int32_t x345 = -7797;
int32_t x347 = -1;
static int16_t x351 = INT16_MAX;
uint32_t x354 = 488U;
int64_t x360 = INT64_MAX;
volatile uint64_t x363 = 11488294561284255LLU;
volatile int32_t x369 = 212;
static uint16_t x385 = 63U;
volatile int32_t t65 = -7237427;
uint16_t x390 = 22919U;
volatile int32_t t66 = -1;
static uint8_t x395 = 0U;
uint32_t x404 = 368667171U;
int32_t x405 = INT32_MIN;
uint32_t x406 = 669707U;
static volatile int32_t x418 = -19;
static int32_t x428 = -969;
volatile int32_t t73 = 17;
int64_t x437 = -27463LL;
static int32_t t75 = 669;
static int32_t t76 = 368;
static volatile int32_t x451 = 63518;
uint32_t x457 = 37U;
volatile int32_t t78 = -27;
int32_t x461 = INT32_MIN;
int16_t x463 = -3;
int32_t t81 = 2127;
int8_t x483 = -31;
static uint64_t x486 = 58774LLU;
int64_t x491 = 5LL;
volatile int8_t x492 = -5;
int64_t x494 = -1LL;
volatile int32_t t85 = 10;
int8_t x500 = -1;
static volatile int8_t x501 = 58;
static int32_t t87 = -371;
int16_t x523 = INT16_MAX;
volatile uint64_t x533 = 2009791909533LLU;
static int32_t x563 = -1017823587;
uint64_t x566 = 413LLU;
volatile int16_t x582 = INT16_MIN;
uint64_t x594 = UINT64_MAX;
volatile int32_t t103 = -96;
int16_t x598 = -1;
static int32_t t104 = 4616655;
int8_t x601 = INT8_MAX;
int32_t x607 = -1;
int16_t x609 = INT16_MIN;
int16_t x612 = -1;
int64_t x619 = 988323587LL;
volatile int64_t x620 = INT64_MIN;
int8_t x621 = INT8_MAX;
static int8_t x628 = 40;
static int16_t x630 = INT16_MIN;
volatile int32_t t112 = 535;
static uint8_t x645 = UINT8_MAX;
volatile int32_t x648 = -1;
static volatile uint32_t x650 = 5930U;
static uint16_t x655 = UINT16_MAX;
int32_t t118 = 252692396;
static volatile int32_t x657 = -1;
static int16_t x659 = INT16_MIN;
uint8_t x661 = 1U;
int8_t x667 = -3;
uint64_t x685 = 2165843646269LLU;
volatile int16_t x690 = INT16_MAX;
int32_t x692 = 30205;
volatile uint64_t x698 = 2779575958295433LLU;
int32_t t128 = 97735571;
int64_t x716 = INT64_MAX;
static volatile int16_t x719 = INT16_MIN;
uint64_t x720 = 1492782457984LLU;
uint32_t x725 = 8978694U;
uint64_t x742 = 1603054882LLU;
int32_t x743 = INT32_MIN;
static int8_t x744 = INT8_MIN;
static uint64_t x746 = 0LLU;
int8_t x759 = -12;
volatile int8_t x760 = 53;
int32_t t138 = 1848;
int16_t x768 = 36;
int32_t t139 = 1925356;
uint16_t x771 = UINT16_MAX;
int8_t x773 = INT8_MIN;
uint16_t x776 = 5606U;
int32_t t141 = 1850;
volatile int16_t x778 = INT16_MIN;
int64_t x813 = -60LL;
volatile int16_t x819 = INT16_MAX;
uint64_t x833 = UINT64_MAX;
static volatile uint32_t x835 = UINT32_MAX;
volatile uint8_t x843 = UINT8_MAX;
volatile uint8_t x844 = UINT8_MAX;
volatile int64_t x858 = -74929347178471LL;
int32_t x860 = -1;
int32_t t155 = 53932;
int8_t x867 = INT8_MIN;
volatile int16_t x883 = INT16_MAX;
uint8_t x893 = 1U;
static volatile int16_t x894 = -179;
uint8_t x895 = 1U;
volatile int32_t t162 = -388742234;
int32_t x897 = -1;
static uint64_t x908 = 156765LLU;
uint8_t x909 = 0U;
int64_t x915 = -49969LL;
uint16_t x916 = UINT16_MAX;
static volatile int16_t x937 = INT16_MAX;
uint32_t x941 = UINT32_MAX;
uint16_t x945 = 9677U;
static int32_t x949 = -1;
int32_t t172 = 15953247;
volatile int32_t x953 = INT32_MAX;
int32_t x956 = INT32_MAX;
static int8_t x960 = INT8_MIN;
int32_t t175 = -3;
uint8_t x977 = 61U;
uint32_t x987 = UINT32_MAX;
int64_t x995 = -1LL;
static int32_t t180 = 12962;
int16_t x997 = INT16_MIN;
int32_t t182 = -25505;
static int32_t t183 = 123012;
int64_t x1020 = -1LL;
uint32_t x1047 = 7842391U;
volatile uint64_t x1052 = 63LLU;
uint64_t x1059 = 1860LLU;
uint8_t x1061 = UINT8_MAX;
int32_t t189 = 9;
int16_t x1068 = -1;
static int8_t x1070 = INT8_MIN;
int16_t x1082 = -1;
int8_t x1087 = 3;
uint32_t x1089 = 5456273U;
int8_t x1099 = -1;
int8_t x1104 = -1;
static volatile int32_t t196 = 61490643;
uint8_t x1106 = UINT8_MAX;
int16_t x1109 = INT16_MAX;
int32_t t198 = -11;


void f0(void) {
    	int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 131;

    t0 = ((x1==(x2*x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	static volatile int32_t x6 = INT32_MIN;
	uint32_t x7 = UINT32_MAX;
	static int64_t x8 = 2LL;
	static int32_t t1 = 95;

    t1 = ((x5==(x6*x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -1;
	volatile int16_t x11 = INT16_MIN;
	uint32_t x12 = UINT32_MAX;

    t2 = ((x9==(x10*x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 204U;
	int16_t x14 = 68;
	uint32_t x15 = 1087U;
	int16_t x16 = -1;
	volatile int32_t t3 = 127571175;

    t3 = ((x13==(x14*x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = 58LL;
	int32_t x18 = -1;
	int8_t x19 = -42;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t4 = -18411;

    t4 = ((x17==(x18*x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t t5 = 252111617;

    t5 = ((x21==(x22*x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x31 = 0LL;
	int8_t x32 = INT8_MAX;
	int32_t t6 = -22;

    t6 = ((x29==(x30*x31))!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x49 = 0;
	int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t7 = 9277;

    t7 = ((x49==(x50*x51))!=x52);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x57 = INT32_MIN;
	uint64_t x58 = 2548139732775220947LLU;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t t8 = 920281;

    t8 = ((x57==(x58*x59))!=x60);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = -1;
	volatile int8_t x62 = 3;
	int16_t x63 = INT16_MIN;

    t9 = ((x61==(x62*x63))!=x64);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x70 = -1;
	int64_t x72 = INT64_MIN;
	volatile int32_t t10 = 7010;

    t10 = ((x69==(x70*x71))!=x72);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x73 = INT16_MAX;
	int16_t x75 = 1;
	int32_t x76 = INT32_MIN;
	volatile int32_t t11 = 377;

    t11 = ((x73==(x74*x75))!=x76);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x77 = -2;
	int64_t x78 = -1LL;
	int16_t x79 = INT16_MAX;
	volatile int32_t t12 = 0;

    t12 = ((x77==(x78*x79))!=x80);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x81 = INT32_MIN;
	static int16_t x82 = -169;
	static volatile int16_t x83 = INT16_MIN;
	static int8_t x84 = INT8_MIN;
	int32_t t13 = 12521;

    t13 = ((x81==(x82*x83))!=x84);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x93 = INT16_MAX;
	int32_t x94 = -1;
	int64_t x95 = -106319408LL;
	uint16_t x96 = UINT16_MAX;
	int32_t t14 = 227518;

    t14 = ((x93==(x94*x95))!=x96);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x97 = UINT32_MAX;
	uint32_t x98 = 413U;
	int32_t x99 = 332;
	int64_t x100 = INT64_MIN;
	int32_t t15 = -272730;

    t15 = ((x97==(x98*x99))!=x100);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x109 = -120990LL;
	int8_t x111 = -1;

    t16 = ((x109==(x110*x111))!=x112);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x113 = INT64_MIN;
	uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 133172121263007LLU;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t17 = -160;

    t17 = ((x113==(x114*x115))!=x116);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = INT16_MIN;
	uint32_t x119 = UINT32_MAX;
	int32_t t18 = -169417;

    t18 = ((x117==(x118*x119))!=x120);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t19 = -14093;

    t19 = ((x125==(x126*x127))!=x128);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x129 = 2LLU;
	uint64_t x130 = 2685270194073258LLU;
	uint16_t x131 = UINT16_MAX;
	static volatile int32_t t20 = 1039131;

    t20 = ((x129==(x130*x131))!=x132);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x137 = INT64_MAX;
	volatile int16_t x138 = INT16_MIN;
	static uint8_t x139 = 49U;
	volatile int32_t x140 = 3301123;
	int32_t t21 = -158454187;

    t21 = ((x137==(x138*x139))!=x140);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x145 = -1;
	int16_t x146 = INT16_MIN;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = 17278142705LL;
	static int32_t t22 = -154909;

    t22 = ((x145==(x146*x147))!=x148);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x149 = -1LL;
	volatile uint8_t x150 = UINT8_MAX;
	uint64_t x151 = 2312563338629372581LLU;
	int16_t x152 = 29;
	volatile int32_t t23 = -22619;

    t23 = ((x149==(x150*x151))!=x152);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x153 = UINT8_MAX;
	static int8_t x154 = -1;
	uint32_t x155 = 931647950U;
	volatile int32_t t24 = -736948883;

    t24 = ((x153==(x154*x155))!=x156);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x157 = INT16_MAX;
	volatile int32_t x159 = -1;
	volatile int32_t t25 = 442644668;

    t25 = ((x157==(x158*x159))!=x160);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x169 = INT8_MAX;
	uint64_t x171 = UINT64_MAX;
	static volatile int64_t x172 = INT64_MAX;

    t26 = ((x169==(x170*x171))!=x172);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x173 = 98U;
	volatile uint32_t x174 = UINT32_MAX;
	static volatile int16_t x175 = INT16_MIN;
	static int64_t x176 = -1LL;

    t27 = ((x173==(x174*x175))!=x176);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x177 = 635018433633LL;
	int32_t x178 = 1;
	int64_t x179 = -54837149LL;
	int64_t x180 = INT64_MIN;
	volatile int32_t t28 = -5;

    t28 = ((x177==(x178*x179))!=x180);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x181 = -965713;
	int64_t x182 = -1LL;
	uint64_t x183 = 37255202LLU;
	volatile int32_t x184 = -459;
	int32_t t29 = 275;

    t29 = ((x181==(x182*x183))!=x184);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x185 = INT16_MIN;
	static volatile int8_t x186 = INT8_MAX;
	volatile int8_t x187 = -15;
	int64_t x188 = INT64_MIN;
	volatile int32_t t30 = -1;

    t30 = ((x185==(x186*x187))!=x188);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x189 = 1;
	uint8_t x190 = 6U;
	int32_t x191 = -1;
	int32_t t31 = -52830175;

    t31 = ((x189==(x190*x191))!=x192);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x201 = 183;
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 192973U;
	volatile int8_t x204 = INT8_MIN;

    t32 = ((x201==(x202*x203))!=x204);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x209 = INT64_MIN;
	uint64_t x210 = 3923260LLU;
	volatile uint16_t x211 = 394U;
	volatile int64_t x212 = INT64_MAX;
	volatile int32_t t33 = 1459769;

    t33 = ((x209==(x210*x211))!=x212);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x214 = -1;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = 140269355863244713LL;
	int32_t t34 = 1;

    t34 = ((x213==(x214*x215))!=x216);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x222 = 447241467U;
	int16_t x223 = INT16_MIN;
	int32_t t35 = 424712;

    t35 = ((x221==(x222*x223))!=x224);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x226 = INT32_MAX;
	static uint32_t x227 = 1497964265U;
	volatile int32_t t36 = -287;

    t36 = ((x225==(x226*x227))!=x228);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x234 = 16506322LLU;
	int32_t x235 = 15;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t37 = 1016145;

    t37 = ((x233==(x234*x235))!=x236);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x237 = 25499465LLU;
	volatile int16_t x238 = INT16_MIN;

    t38 = ((x237==(x238*x239))!=x240);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x241 = UINT32_MAX;
	uint64_t x242 = 2LLU;
	volatile int16_t x243 = INT16_MAX;
	volatile int32_t t39 = 89481350;

    t39 = ((x241==(x242*x243))!=x244);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x250 = 1508U;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile int32_t t40 = 5;

    t40 = ((x249==(x250*x251))!=x252);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x253 = INT32_MAX;
	uint16_t x254 = 57U;
	volatile uint64_t x256 = 1903LLU;
	static int32_t t41 = -431366;

    t41 = ((x253==(x254*x255))!=x256);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = 0;
	static uint8_t x260 = 0U;
	volatile int32_t t42 = -295358;

    t42 = ((x257==(x258*x259))!=x260);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = 2418;
	static uint8_t x267 = 27U;
	static volatile int32_t t43 = 12101566;

    t43 = ((x265==(x266*x267))!=x268);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x269 = 135LL;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t44 = -123;

    t44 = ((x269==(x270*x271))!=x272);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x281 = 44U;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 1294959U;
	int32_t t45 = -10;

    t45 = ((x281==(x282*x283))!=x284);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x285 = UINT32_MAX;
	uint64_t x286 = UINT64_MAX;
	int32_t x287 = INT32_MIN;
	uint8_t x288 = 0U;
	volatile int32_t t46 = -47246;

    t46 = ((x285==(x286*x287))!=x288);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 250530196U;
	volatile uint16_t x299 = UINT16_MAX;
	uint64_t x300 = 123LLU;

    t47 = ((x297==(x298*x299))!=x300);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x301 = INT8_MIN;
	int8_t x302 = 1;
	volatile int8_t x303 = INT8_MAX;
	int8_t x304 = -1;
	int32_t t48 = 151262;

    t48 = ((x301==(x302*x303))!=x304);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x315 = 206620155U;
	volatile int16_t x316 = -1;
	static volatile int32_t t49 = 451;

    t49 = ((x313==(x314*x315))!=x316);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x317 = INT8_MIN;
	volatile uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MAX;
	volatile int32_t t50 = 8279;

    t50 = ((x317==(x318*x319))!=x320);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t51 = -1893;

    t51 = ((x321==(x322*x323))!=x324);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x325 = 1U;
	uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 10U;
	int16_t x328 = 49;
	volatile int32_t t52 = -2069;

    t52 = ((x325==(x326*x327))!=x328);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x329 = -1LL;
	uint8_t x330 = 3U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t53 = 13577;

    t53 = ((x329==(x330*x331))!=x332);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x337 = INT32_MIN;
	int8_t x339 = 8;
	static int64_t x340 = -3865819004LL;
	int32_t t54 = 487;

    t54 = ((x337==(x338*x339))!=x340);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x341 = 136878715587627LLU;
	static volatile int64_t x342 = -14LL;
	uint32_t x343 = 5240771U;
	int32_t t55 = 1;

    t55 = ((x341==(x342*x343))!=x344);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x346 = -1;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t56 = -8347548;

    t56 = ((x345==(x346*x347))!=x348);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x349 = INT8_MIN;
	static int16_t x350 = -1;
	static int16_t x352 = INT16_MAX;
	static int32_t t57 = -169724;

    t57 = ((x349==(x350*x351))!=x352);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x353 = 71U;
	volatile int64_t x355 = 918180LL;
	static int16_t x356 = -1;
	volatile int32_t t58 = 20;

    t58 = ((x353==(x354*x355))!=x356);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x357 = UINT64_MAX;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	volatile int32_t t59 = 4415579;

    t59 = ((x357==(x358*x359))!=x360);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x361 = INT64_MIN;
	int16_t x362 = -2095;
	volatile int32_t x364 = INT32_MAX;
	volatile int32_t t60 = -32786122;

    t60 = ((x361==(x362*x363))!=x364);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x365 = -1;
	static int64_t x366 = -1LL;
	static uint64_t x367 = 11032LLU;
	int16_t x368 = 1;
	volatile int32_t t61 = -5;

    t61 = ((x365==(x366*x367))!=x368);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x370 = INT8_MIN;
	static int32_t x371 = 27121;
	static int32_t x372 = INT32_MIN;
	int32_t t62 = -5178;

    t62 = ((x369==(x370*x371))!=x372);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x373 = 2043U;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	static uint64_t x376 = 7LLU;
	static volatile int32_t t63 = -127018313;

    t63 = ((x373==(x374*x375))!=x376);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x377 = 13648678U;
	static volatile int16_t x378 = INT16_MIN;
	static uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t64 = -362;

    t64 = ((x377==(x378*x379))!=x380);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x386 = 853692LLU;
	int32_t x387 = INT32_MAX;
	static int64_t x388 = -1306796LL;

    t65 = ((x385==(x386*x387))!=x388);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x389 = 264;
	uint32_t x391 = 10U;
	uint8_t x392 = 28U;

    t66 = ((x389==(x390*x391))!=x392);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x393 = -2;
	int8_t x394 = -1;
	uint64_t x396 = 6850173LLU;
	volatile int32_t t67 = 4;

    t67 = ((x393==(x394*x395))!=x396);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x401 = INT64_MAX;
	volatile uint16_t x402 = UINT16_MAX;
	uint16_t x403 = 1397U;
	int32_t t68 = -6588930;

    t68 = ((x401==(x402*x403))!=x404);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t69 = -1;

    t69 = ((x405==(x406*x407))!=x408);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x409 = INT64_MAX;
	int32_t x410 = -3845;
	int16_t x411 = INT16_MIN;
	int64_t x412 = -1448LL;
	volatile int32_t t70 = 820204798;

    t70 = ((x409==(x410*x411))!=x412);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x417 = INT16_MIN;
	static uint8_t x419 = UINT8_MAX;
	int8_t x420 = 1;
	int32_t t71 = -26;

    t71 = ((x417==(x418*x419))!=x420);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x425 = -6;
	int32_t x426 = -1;
	int32_t x427 = -1;
	static int32_t t72 = 3698;

    t72 = ((x425==(x426*x427))!=x428);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x429 = -1;
	volatile uint64_t x430 = 53589987190LLU;
	int32_t x431 = 3540854;
	int8_t x432 = INT8_MIN;

    t73 = ((x429==(x430*x431))!=x432);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 13578830912667649LLU;
	int32_t t74 = -25;

    t74 = ((x433==(x434*x435))!=x436);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x438 = UINT32_MAX;
	int8_t x439 = 6;
	int32_t x440 = -1;

    t75 = ((x437==(x438*x439))!=x440);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x445 = INT16_MIN;
	int64_t x446 = -2462140323073801LL;
	static int8_t x447 = INT8_MAX;
	int32_t x448 = INT32_MIN;

    t76 = ((x445==(x446*x447))!=x448);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x449 = INT8_MAX;
	int64_t x450 = -1LL;
	volatile uint16_t x452 = 14U;
	static volatile int32_t t77 = 178950;

    t77 = ((x449==(x450*x451))!=x452);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x458 = -1;
	int32_t x459 = -1;
	static volatile int16_t x460 = -26;

    t78 = ((x457==(x458*x459))!=x460);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x462 = -1;
	int8_t x464 = -1;
	volatile int32_t t79 = -700970;

    t79 = ((x461==(x462*x463))!=x464);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x465 = 2062U;
	uint8_t x466 = UINT8_MAX;
	static uint16_t x467 = UINT16_MAX;
	int64_t x468 = -1LL;
	volatile int32_t t80 = -29272;

    t80 = ((x465==(x466*x467))!=x468);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x473 = INT8_MIN;
	uint16_t x474 = UINT16_MAX;
	static int8_t x475 = INT8_MAX;
	int32_t x476 = -13;

    t81 = ((x473==(x474*x475))!=x476);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x481 = -5;
	uint8_t x482 = 91U;
	volatile int16_t x484 = INT16_MIN;
	int32_t t82 = 393834;

    t82 = ((x481==(x482*x483))!=x484);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x485 = 23U;
	int16_t x487 = INT16_MAX;
	int8_t x488 = -1;
	int32_t t83 = 1;

    t83 = ((x485==(x486*x487))!=x488);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x490 = INT16_MIN;
	volatile int32_t t84 = 39117772;

    t84 = ((x489==(x490*x491))!=x492);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x493 = -1;
	int16_t x495 = INT16_MIN;
	volatile int16_t x496 = 1;

    t85 = ((x493==(x494*x495))!=x496);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x497 = INT32_MIN;
	static volatile uint16_t x498 = UINT16_MAX;
	static uint64_t x499 = 4486101239925296LLU;
	volatile int32_t t86 = 212;

    t86 = ((x497==(x498*x499))!=x500);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x502 = -2;
	int64_t x503 = -19LL;
	volatile uint16_t x504 = UINT16_MAX;

    t87 = ((x501==(x502*x503))!=x504);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x505 = INT16_MIN;
	static uint16_t x506 = 743U;
	volatile int8_t x507 = 29;
	uint64_t x508 = 50901269344LLU;
	int32_t t88 = 41;

    t88 = ((x505==(x506*x507))!=x508);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x510 = INT8_MAX;
	uint16_t x511 = UINT16_MAX;
	uint8_t x512 = UINT8_MAX;
	int32_t t89 = 45;

    t89 = ((x509==(x510*x511))!=x512);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x517 = 10U;
	uint64_t x518 = 1LLU;
	volatile int32_t x519 = INT32_MIN;
	int16_t x520 = -1;
	volatile int32_t t90 = -1456546;

    t90 = ((x517==(x518*x519))!=x520);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x521 = -1LL;
	volatile uint64_t x522 = 2294LLU;
	uint64_t x524 = 50013380562LLU;
	int32_t t91 = 8160769;

    t91 = ((x521==(x522*x523))!=x524);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x529 = INT16_MAX;
	int8_t x530 = -9;
	int32_t x531 = -53;
	static int8_t x532 = 31;
	volatile int32_t t92 = -497717;

    t92 = ((x529==(x530*x531))!=x532);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x534 = 7LLU;
	int16_t x535 = INT16_MIN;
	static volatile int64_t x536 = INT64_MAX;
	static int32_t t93 = -85;

    t93 = ((x533==(x534*x535))!=x536);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x537 = -4;
	int64_t x538 = -1LL;
	static int8_t x539 = INT8_MAX;
	uint16_t x540 = UINT16_MAX;
	int32_t t94 = -1;

    t94 = ((x537==(x538*x539))!=x540);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x541 = INT64_MIN;
	static int64_t x542 = -1LL;
	int16_t x543 = -6191;
	volatile int8_t x544 = INT8_MIN;
	static volatile int32_t t95 = -410477;

    t95 = ((x541==(x542*x543))!=x544);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x545 = INT8_MAX;
	uint32_t x546 = 152402U;
	uint64_t x547 = 293331253409291LLU;
	uint16_t x548 = 8728U;
	volatile int32_t t96 = -45986200;

    t96 = ((x545==(x546*x547))!=x548);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x561 = INT64_MIN;
	static uint64_t x562 = 53884385LLU;
	uint8_t x564 = 66U;
	int32_t t97 = 10;

    t97 = ((x561==(x562*x563))!=x564);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x565 = 17989U;
	static int16_t x567 = -1522;
	static volatile uint32_t x568 = UINT32_MAX;
	volatile int32_t t98 = -490299890;

    t98 = ((x565==(x566*x567))!=x568);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x569 = 266;
	int64_t x570 = -3327840LL;
	uint8_t x571 = 4U;
	int64_t x572 = -1LL;
	int32_t t99 = 150483182;

    t99 = ((x569==(x570*x571))!=x572);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x577 = -1LL;
	uint16_t x578 = UINT16_MAX;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = INT64_MIN;
	volatile int32_t t100 = 1007;

    t100 = ((x577==(x578*x579))!=x580);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x581 = INT64_MAX;
	int16_t x583 = INT16_MAX;
	uint64_t x584 = UINT64_MAX;
	int32_t t101 = 47414075;

    t101 = ((x581==(x582*x583))!=x584);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x589 = UINT8_MAX;
	static int8_t x590 = -41;
	uint64_t x591 = 182728364019532353LLU;
	int32_t x592 = 1432074;
	volatile int32_t t102 = -1;

    t102 = ((x589==(x590*x591))!=x592);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x593 = UINT64_MAX;
	uint16_t x595 = 9370U;
	int64_t x596 = INT64_MIN;

    t103 = ((x593==(x594*x595))!=x596);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x597 = -85109;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = INT16_MIN;

    t104 = ((x597==(x598*x599))!=x600);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x602 = INT32_MAX;
	int64_t x603 = -1LL;
	static volatile int32_t x604 = INT32_MAX;
	volatile int32_t t105 = 26547899;

    t105 = ((x601==(x602*x603))!=x604);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	int64_t x606 = -3597159276698LL;
	int8_t x608 = 0;
	volatile int32_t t106 = 13025;

    t106 = ((x605==(x606*x607))!=x608);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x610 = 505U;
	uint32_t x611 = 1018487U;
	static volatile int32_t t107 = 0;

    t107 = ((x609==(x610*x611))!=x612);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = 110U;
	volatile int32_t x615 = -1;
	int16_t x616 = INT16_MIN;
	volatile int32_t t108 = -21;

    t108 = ((x613==(x614*x615))!=x616);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x617 = -2146955;
	int16_t x618 = INT16_MAX;
	int32_t t109 = -236;

    t109 = ((x617==(x618*x619))!=x620);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x622 = 11LLU;
	static uint32_t x623 = 31019999U;
	volatile uint8_t x624 = 17U;
	int32_t t110 = -398;

    t110 = ((x621==(x622*x623))!=x624);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x625 = -1;
	int8_t x626 = -1;
	uint32_t x627 = UINT32_MAX;
	int32_t t111 = 1;

    t111 = ((x625==(x626*x627))!=x628);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x629 = UINT16_MAX;
	uint8_t x631 = 11U;
	uint8_t x632 = 13U;

    t112 = ((x629==(x630*x631))!=x632);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x633 = 1;
	uint16_t x634 = 1U;
	volatile uint64_t x635 = 15711931426687051LLU;
	static volatile uint16_t x636 = UINT16_MAX;
	volatile int32_t t113 = 10151;

    t113 = ((x633==(x634*x635))!=x636);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x637 = INT8_MAX;
	int16_t x638 = -25;
	int16_t x639 = 2521;
	int32_t x640 = 1758;
	volatile int32_t t114 = 7;

    t114 = ((x637==(x638*x639))!=x640);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x641 = 0U;
	uint8_t x642 = 96U;
	int64_t x643 = -1069LL;
	volatile uint32_t x644 = UINT32_MAX;
	int32_t t115 = -2502918;

    t115 = ((x641==(x642*x643))!=x644);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x646 = INT8_MIN;
	uint8_t x647 = UINT8_MAX;
	int32_t t116 = -15;

    t116 = ((x645==(x646*x647))!=x648);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x649 = -1;
	static uint8_t x651 = 3U;
	int16_t x652 = INT16_MAX;
	int32_t t117 = -292796;

    t117 = ((x649==(x650*x651))!=x652);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x653 = INT8_MAX;
	int8_t x654 = -1;
	uint32_t x656 = UINT32_MAX;

    t118 = ((x653==(x654*x655))!=x656);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x658 = 759952714312256LLU;
	uint64_t x660 = 52LLU;
	volatile int32_t t119 = -896;

    t119 = ((x657==(x658*x659))!=x660);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x662 = 96983533LL;
	int16_t x663 = INT16_MIN;
	uint16_t x664 = 17U;
	static volatile int32_t t120 = 1874;

    t120 = ((x661==(x662*x663))!=x664);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x665 = 15;
	uint8_t x666 = 1U;
	static uint64_t x668 = 2911896LLU;
	volatile int32_t t121 = 0;

    t121 = ((x665==(x666*x667))!=x668);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x669 = INT8_MIN;
	static uint32_t x670 = UINT32_MAX;
	static int16_t x671 = INT16_MIN;
	uint64_t x672 = 12LLU;
	static int32_t t122 = 296;

    t122 = ((x669==(x670*x671))!=x672);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x673 = 1U;
	int16_t x674 = -8;
	volatile int8_t x675 = INT8_MIN;
	volatile int32_t x676 = -619317;
	volatile int32_t t123 = -2887855;

    t123 = ((x673==(x674*x675))!=x676);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x677 = 2U;
	static int16_t x678 = -1;
	int16_t x679 = INT16_MIN;
	static volatile int16_t x680 = INT16_MAX;
	volatile int32_t t124 = 1071323;

    t124 = ((x677==(x678*x679))!=x680);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x686 = 14276LLU;
	static int32_t x687 = -220583268;
	static volatile uint16_t x688 = 28U;
	int32_t t125 = 488938365;

    t125 = ((x685==(x686*x687))!=x688);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x689 = INT64_MIN;
	volatile uint64_t x691 = 44LLU;
	volatile int32_t t126 = -1960;

    t126 = ((x689==(x690*x691))!=x692);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x693 = -1;
	uint64_t x694 = UINT64_MAX;
	static uint32_t x695 = 8755U;
	volatile uint8_t x696 = 6U;
	static int32_t t127 = -1;

    t127 = ((x693==(x694*x695))!=x696);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x697 = INT8_MAX;
	int8_t x699 = INT8_MIN;
	int8_t x700 = -1;

    t128 = ((x697==(x698*x699))!=x700);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x701 = INT16_MIN;
	uint8_t x702 = 7U;
	int16_t x703 = INT16_MAX;
	uint8_t x704 = 110U;
	int32_t t129 = -43067;

    t129 = ((x701==(x702*x703))!=x704);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x713 = INT8_MAX;
	int64_t x714 = 374860LL;
	volatile int8_t x715 = INT8_MIN;
	volatile int32_t t130 = -117354562;

    t130 = ((x713==(x714*x715))!=x716);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x717 = 320LLU;
	uint16_t x718 = 1956U;
	static volatile int32_t t131 = 29486062;

    t131 = ((x717==(x718*x719))!=x720);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x726 = UINT64_MAX;
	volatile int32_t x727 = -1764293;
	static int16_t x728 = INT16_MAX;
	int32_t t132 = 63377977;

    t132 = ((x725==(x726*x727))!=x728);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x741 = UINT32_MAX;
	volatile int32_t t133 = 6;

    t133 = ((x741==(x742*x743))!=x744);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x745 = 61515;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MIN;
	volatile int32_t t134 = 0;

    t134 = ((x745==(x746*x747))!=x748);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x749 = INT16_MIN;
	int16_t x750 = 1;
	int16_t x751 = INT16_MIN;
	int16_t x752 = INT16_MIN;
	int32_t t135 = -10688689;

    t135 = ((x749==(x750*x751))!=x752);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x753 = INT8_MIN;
	uint64_t x754 = 317522860544171LLU;
	int8_t x755 = 1;
	int32_t x756 = INT32_MAX;
	volatile int32_t t136 = -735102289;

    t136 = ((x753==(x754*x755))!=x756);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x757 = INT8_MIN;
	int64_t x758 = 97172127280874LL;
	volatile int32_t t137 = -3;

    t137 = ((x757==(x758*x759))!=x760);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x761 = -22;
	static volatile int64_t x762 = -1LL;
	volatile int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;

    t138 = ((x761==(x762*x763))!=x764);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x765 = 5;
	volatile int16_t x766 = INT16_MIN;
	int8_t x767 = -1;

    t139 = ((x765==(x766*x767))!=x768);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x769 = 252;
	int8_t x770 = INT8_MIN;
	int32_t x772 = INT32_MIN;
	static volatile int32_t t140 = -1;

    t140 = ((x769==(x770*x771))!=x772);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x774 = 1U;
	volatile int16_t x775 = -1;

    t141 = ((x773==(x774*x775))!=x776);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x777 = -204086956;
	uint16_t x779 = 6U;
	int64_t x780 = INT64_MAX;
	int32_t t142 = -246805;

    t142 = ((x777==(x778*x779))!=x780);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x786 = 4U;
	static int64_t x787 = -456516344LL;
	static volatile int8_t x788 = INT8_MIN;
	int32_t t143 = -11339968;

    t143 = ((x785==(x786*x787))!=x788);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x789 = 108;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MAX;
	uint64_t x792 = 12910420799LLU;
	volatile int32_t t144 = -109;

    t144 = ((x789==(x790*x791))!=x792);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x797 = -21;
	int32_t x798 = -1;
	static int8_t x799 = -1;
	static uint8_t x800 = UINT8_MAX;
	int32_t t145 = 106;

    t145 = ((x797==(x798*x799))!=x800);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x801 = 529188035010LLU;
	int16_t x802 = -19;
	int16_t x803 = INT16_MIN;
	uint8_t x804 = 8U;
	int32_t t146 = -43619;

    t146 = ((x801==(x802*x803))!=x804);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x809 = -59;
	int32_t x810 = INT32_MAX;
	uint8_t x811 = 1U;
	int32_t x812 = -51;
	volatile int32_t t147 = 507970;

    t147 = ((x809==(x810*x811))!=x812);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x814 = 1;
	int16_t x815 = 254;
	uint16_t x816 = 180U;
	volatile int32_t t148 = -238;

    t148 = ((x813==(x814*x815))!=x816);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x817 = UINT32_MAX;
	uint16_t x818 = 13408U;
	volatile int8_t x820 = INT8_MIN;
	volatile int32_t t149 = -31485;

    t149 = ((x817==(x818*x819))!=x820);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x834 = UINT32_MAX;
	int32_t x836 = INT32_MIN;
	volatile int32_t t150 = 3;

    t150 = ((x833==(x834*x835))!=x836);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x837 = 6707LLU;
	static int8_t x838 = INT8_MAX;
	int16_t x839 = INT16_MIN;
	int8_t x840 = INT8_MAX;
	int32_t t151 = 683308930;

    t151 = ((x837==(x838*x839))!=x840);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x841 = 3;
	uint8_t x842 = 90U;
	volatile int32_t t152 = -3149;

    t152 = ((x841==(x842*x843))!=x844);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x845 = UINT32_MAX;
	static uint32_t x846 = UINT32_MAX;
	volatile int16_t x847 = INT16_MIN;
	int64_t x848 = 28222295859495821LL;
	int32_t t153 = 666626199;

    t153 = ((x845==(x846*x847))!=x848);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x849 = INT8_MIN;
	int32_t x850 = -1;
	uint64_t x851 = 184836289LLU;
	uint32_t x852 = 428U;
	int32_t t154 = 1575857;

    t154 = ((x849==(x850*x851))!=x852);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x857 = -3877967200102LL;
	int8_t x859 = 1;

    t155 = ((x857==(x858*x859))!=x860);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x861 = INT8_MAX;
	static uint64_t x862 = 1329LLU;
	uint16_t x863 = 1U;
	volatile int32_t x864 = -1;
	int32_t t156 = 2675965;

    t156 = ((x861==(x862*x863))!=x864);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x865 = INT64_MAX;
	volatile uint8_t x866 = 10U;
	int32_t x868 = INT32_MIN;
	int32_t t157 = -1;

    t157 = ((x865==(x866*x867))!=x868);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x873 = 6LLU;
	static int16_t x874 = 122;
	static uint64_t x875 = 5730301LLU;
	int8_t x876 = INT8_MIN;
	int32_t t158 = -36;

    t158 = ((x873==(x874*x875))!=x876);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x877 = INT32_MIN;
	int64_t x878 = 965186LL;
	int8_t x879 = -9;
	int32_t x880 = -1;
	int32_t t159 = -15273053;

    t159 = ((x877==(x878*x879))!=x880);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x881 = 3;
	int64_t x882 = 2012336698LL;
	int64_t x884 = INT64_MIN;
	static int32_t t160 = -378;

    t160 = ((x881==(x882*x883))!=x884);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x885 = INT32_MAX;
	volatile int64_t x886 = 59133935219LL;
	int32_t x887 = -3783;
	uint32_t x888 = 62922787U;
	volatile int32_t t161 = 23142;

    t161 = ((x885==(x886*x887))!=x888);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x896 = 10914746831764LLU;

    t162 = ((x893==(x894*x895))!=x896);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x898 = -1LL;
	static uint16_t x899 = UINT16_MAX;
	int64_t x900 = 22857678035LL;
	int32_t t163 = 7662803;

    t163 = ((x897==(x898*x899))!=x900);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x905 = INT64_MIN;
	uint64_t x906 = UINT64_MAX;
	int64_t x907 = INT64_MIN;
	int32_t t164 = -6976994;

    t164 = ((x905==(x906*x907))!=x908);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x910 = 100122;
	uint32_t x911 = 5U;
	int64_t x912 = INT64_MIN;
	volatile int32_t t165 = 7801;

    t165 = ((x909==(x910*x911))!=x912);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x913 = INT64_MIN;
	int8_t x914 = INT8_MIN;
	int32_t t166 = 8;

    t166 = ((x913==(x914*x915))!=x916);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x921 = INT64_MAX;
	uint64_t x922 = 40246882774539LLU;
	int64_t x923 = -1LL;
	int16_t x924 = -458;
	int32_t t167 = -31494753;

    t167 = ((x921==(x922*x923))!=x924);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x929 = UINT8_MAX;
	int32_t x930 = -1;
	int8_t x931 = 1;
	int32_t x932 = 350006;
	volatile int32_t t168 = -1367590;

    t168 = ((x929==(x930*x931))!=x932);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x938 = -1;
	int64_t x939 = INT64_MAX;
	volatile uint32_t x940 = 25718U;
	volatile int32_t t169 = 1;

    t169 = ((x937==(x938*x939))!=x940);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x942 = 133222LLU;
	static int64_t x943 = 1404LL;
	volatile int16_t x944 = 2761;
	int32_t t170 = 46;

    t170 = ((x941==(x942*x943))!=x944);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x946 = INT8_MIN;
	int16_t x947 = -1;
	int64_t x948 = -1LL;
	volatile int32_t t171 = 276055;

    t171 = ((x945==(x946*x947))!=x948);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x950 = -73246241787LL;
	int32_t x951 = -459;
	static int16_t x952 = INT16_MIN;

    t172 = ((x949==(x950*x951))!=x952);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x954 = UINT64_MAX;
	static int32_t x955 = INT32_MIN;
	int32_t t173 = -9748028;

    t173 = ((x953==(x954*x955))!=x956);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x957 = INT16_MIN;
	int8_t x958 = 18;
	int16_t x959 = INT16_MIN;
	volatile int32_t t174 = 3796;

    t174 = ((x957==(x958*x959))!=x960);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x965 = INT32_MIN;
	int32_t x966 = -10;
	uint64_t x967 = 22844436395LLU;
	int64_t x968 = INT64_MIN;

    t175 = ((x965==(x966*x967))!=x968);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x969 = INT64_MAX;
	int32_t x970 = INT32_MIN;
	uint64_t x971 = UINT64_MAX;
	uint8_t x972 = 2U;
	static volatile int32_t t176 = -867650;

    t176 = ((x969==(x970*x971))!=x972);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x978 = 42194257LLU;
	int64_t x979 = -1LL;
	int64_t x980 = INT64_MIN;
	volatile int32_t t177 = 115091;

    t177 = ((x977==(x978*x979))!=x980);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x981 = -39;
	static volatile uint16_t x982 = UINT16_MAX;
	int64_t x983 = -86961323270056LL;
	int64_t x984 = -1LL;
	int32_t t178 = -11;

    t178 = ((x981==(x982*x983))!=x984);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x985 = INT32_MAX;
	int32_t x986 = INT32_MIN;
	int8_t x988 = INT8_MAX;
	volatile int32_t t179 = -9;

    t179 = ((x985==(x986*x987))!=x988);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x993 = 2U;
	static int8_t x994 = 22;
	int16_t x996 = INT16_MIN;

    t180 = ((x993==(x994*x995))!=x996);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x998 = -1;
	static int64_t x999 = 1733563645LL;
	static uint8_t x1000 = 29U;
	static int32_t t181 = -6467110;

    t181 = ((x997==(x998*x999))!=x1000);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1001 = UINT16_MAX;
	volatile int16_t x1002 = -1;
	int8_t x1003 = 1;
	uint8_t x1004 = 1U;

    t182 = ((x1001==(x1002*x1003))!=x1004);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x1009 = 40104263313LLU;
	int8_t x1010 = INT8_MIN;
	int16_t x1011 = INT16_MIN;
	int16_t x1012 = -3858;

    t183 = ((x1009==(x1010*x1011))!=x1012);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1017 = INT8_MIN;
	uint64_t x1018 = UINT64_MAX;
	static int32_t x1019 = -1;
	volatile int32_t t184 = 223;

    t184 = ((x1017==(x1018*x1019))!=x1020);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1029 = -7301;
	uint32_t x1030 = 12U;
	int16_t x1031 = -237;
	int8_t x1032 = INT8_MIN;
	volatile int32_t t185 = 61483406;

    t185 = ((x1029==(x1030*x1031))!=x1032);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1045 = 118;
	int8_t x1046 = 4;
	int8_t x1048 = -1;
	volatile int32_t t186 = -2238;

    t186 = ((x1045==(x1046*x1047))!=x1048);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1049 = 5;
	static int16_t x1050 = -7984;
	uint8_t x1051 = UINT8_MAX;
	volatile int32_t t187 = -349;

    t187 = ((x1049==(x1050*x1051))!=x1052);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1057 = -1577775944179058LL;
	static volatile int8_t x1058 = -1;
	static int16_t x1060 = INT16_MIN;
	int32_t t188 = 101323;

    t188 = ((x1057==(x1058*x1059))!=x1060);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1062 = INT16_MIN;
	int8_t x1063 = -1;
	int32_t x1064 = -1;

    t189 = ((x1061==(x1062*x1063))!=x1064);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x1065 = UINT16_MAX;
	uint64_t x1066 = 57303LLU;
	uint16_t x1067 = 505U;
	volatile int32_t t190 = 65468885;

    t190 = ((x1065==(x1066*x1067))!=x1068);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1069 = INT8_MAX;
	int32_t x1071 = -45360;
	uint16_t x1072 = UINT16_MAX;
	volatile int32_t t191 = 1;

    t191 = ((x1069==(x1070*x1071))!=x1072);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1081 = 5U;
	static uint64_t x1083 = 37LLU;
	uint32_t x1084 = 5195U;
	int32_t t192 = -7808;

    t192 = ((x1081==(x1082*x1083))!=x1084);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1085 = 11LLU;
	int32_t x1086 = -1;
	volatile uint64_t x1088 = 309794338684600804LLU;
	static volatile int32_t t193 = 1;

    t193 = ((x1085==(x1086*x1087))!=x1088);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1090 = 9520152;
	int64_t x1091 = -1LL;
	uint16_t x1092 = UINT16_MAX;
	static volatile int32_t t194 = -41116;

    t194 = ((x1089==(x1090*x1091))!=x1092);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1097 = -1LL;
	int8_t x1098 = INT8_MIN;
	int64_t x1100 = INT64_MIN;
	static int32_t t195 = 16;

    t195 = ((x1097==(x1098*x1099))!=x1100);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1101 = 3;
	uint8_t x1102 = UINT8_MAX;
	int8_t x1103 = INT8_MAX;

    t196 = ((x1101==(x1102*x1103))!=x1104);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1105 = INT32_MIN;
	volatile uint8_t x1107 = UINT8_MAX;
	volatile int64_t x1108 = INT64_MIN;
	volatile int32_t t197 = -2888695;

    t197 = ((x1105==(x1106*x1107))!=x1108);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1110 = -1;
	volatile uint32_t x1111 = 147954184U;
	static int16_t x1112 = -1;

    t198 = ((x1109==(x1110*x1111))!=x1112);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1117 = INT64_MIN;
	uint16_t x1118 = 1U;
	uint64_t x1119 = UINT64_MAX;
	static int8_t x1120 = INT8_MIN;
	int32_t t199 = -36840;

    t199 = ((x1117==(x1118*x1119))!=x1120);

    if (t199 != 1) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

