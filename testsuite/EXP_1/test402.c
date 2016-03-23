
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

static int16_t x6 = -36;
static int16_t x9 = INT16_MAX;
uint16_t x18 = 105U;
uint32_t x19 = 214U;
int32_t t2 = 725405737;
int64_t x21 = -255086697286389165LL;
int32_t t5 = -834453;
static uint64_t x57 = 69297115827207341LLU;
int8_t x65 = INT8_MIN;
volatile int32_t t8 = 139575922;
volatile int8_t x69 = INT8_MIN;
uint64_t x70 = 71502410LLU;
int16_t x73 = -4764;
uint64_t x76 = 3360189307555747LLU;
uint8_t x82 = UINT8_MAX;
uint16_t x83 = 20186U;
int64_t x88 = 4049588532LL;
uint32_t x105 = UINT32_MAX;
uint64_t x115 = 9656519195LLU;
uint16_t x121 = 4U;
volatile int8_t x123 = -1;
int64_t x124 = -1LL;
volatile int32_t x125 = INT32_MIN;
static volatile int8_t x131 = INT8_MIN;
int8_t x157 = 11;
static int64_t x159 = -1LL;
uint8_t x161 = 0U;
uint32_t x162 = 21U;
static int16_t x166 = INT16_MIN;
int8_t x167 = INT8_MIN;
uint8_t x168 = 23U;
int32_t x179 = -1;
static uint8_t x180 = 29U;
int64_t x185 = -1LL;
int32_t t30 = 40954918;
static int16_t x190 = 334;
int16_t x195 = -1;
static uint16_t x198 = 54U;
int64_t x200 = -59LL;
uint32_t x204 = UINT32_MAX;
int8_t x208 = INT8_MIN;
static volatile uint16_t x223 = 5830U;
volatile int32_t x228 = INT32_MAX;
int8_t x233 = -1;
static volatile int16_t x244 = 600;
volatile int16_t x256 = -76;
int32_t x258 = INT32_MAX;
static int64_t x259 = -1LL;
uint64_t x269 = UINT64_MAX;
uint16_t x272 = 2U;
int8_t x273 = 0;
int8_t x279 = -2;
volatile int32_t t48 = 19880377;
static int16_t x289 = INT16_MAX;
uint8_t x303 = 12U;
uint8_t x309 = 0U;
volatile int32_t x310 = INT32_MIN;
volatile int16_t x317 = 169;
int64_t x319 = -1LL;
static uint8_t x321 = UINT8_MAX;
int64_t x322 = -1LL;
volatile int32_t x328 = INT32_MIN;
volatile int64_t x335 = INT64_MIN;
int16_t x369 = 51;
volatile int32_t t62 = -125025;
static volatile int32_t t65 = 1;
int16_t x404 = INT16_MIN;
static int16_t x407 = -1;
uint32_t x413 = 125U;
int16_t x415 = INT16_MIN;
int32_t t70 = 23;
int16_t x421 = 5070;
int8_t x422 = -1;
int32_t x424 = INT32_MIN;
int64_t x432 = 1001404615332123LL;
uint16_t x434 = 0U;
int64_t x438 = -90470062261426466LL;
uint32_t x442 = 29112124U;
int16_t x446 = -1;
int8_t x447 = INT8_MAX;
static int16_t x450 = 93;
volatile int32_t x455 = INT32_MIN;
static int16_t x461 = 0;
uint8_t x464 = 21U;
uint32_t x470 = 12U;
volatile int16_t x471 = INT16_MAX;
uint64_t x481 = 2039LLU;
uint16_t x482 = 37U;
int32_t t87 = 8232657;
static uint32_t x494 = 20U;
uint8_t x496 = 1U;
uint16_t x509 = 57U;
int16_t x510 = INT16_MIN;
static int64_t x512 = 113327LL;
uint8_t x518 = 6U;
static uint16_t x519 = UINT16_MAX;
volatile int64_t x520 = INT64_MAX;
static int32_t t91 = 85;
volatile int32_t t92 = 30;
uint16_t x529 = UINT16_MAX;
static volatile int32_t t93 = 21715;
int8_t x534 = INT8_MIN;
static int32_t x546 = INT32_MIN;
uint64_t x548 = 728957689585463LLU;
static int32_t t97 = -8;
volatile int8_t x553 = -2;
int32_t x558 = -1;
uint8_t x565 = 17U;
int8_t x566 = INT8_MIN;
int32_t t100 = 1;
volatile int8_t x574 = 2;
static volatile int32_t x581 = 16257962;
int32_t t103 = 3743;
int16_t x596 = -5493;
int16_t x599 = -1751;
int32_t x603 = INT32_MIN;
int32_t t108 = -44;
int64_t x625 = -1LL;
int32_t t110 = 382798588;
volatile int16_t x635 = INT16_MAX;
static uint16_t x638 = UINT16_MAX;
int32_t t113 = 7549980;
static volatile int32_t t114 = -126;
int16_t x653 = 1412;
int32_t x655 = INT32_MIN;
int16_t x659 = 8;
uint64_t x675 = 130999645198LLU;
int8_t x680 = INT8_MIN;
int32_t t120 = -38;
volatile int32_t t121 = 510770173;
uint32_t x693 = 5257158U;
int8_t x699 = INT8_MAX;
int16_t x711 = -4308;
volatile int32_t t126 = -3;
volatile int8_t x764 = 1;
int32_t t135 = 49935;
volatile uint16_t x782 = 29554U;
int32_t t141 = 1054092981;
volatile int32_t t142 = -2;
static int16_t x794 = -261;
uint16_t x822 = 2555U;
volatile int8_t x823 = INT8_MIN;
static uint8_t x824 = 16U;
volatile int32_t t146 = -7678407;
int64_t x834 = INT64_MIN;
static uint64_t x839 = 410LLU;
uint8_t x840 = 3U;
int64_t x853 = 82756426264LL;
int16_t x855 = INT16_MIN;
int32_t t153 = -570;
int16_t x869 = -1;
static int8_t x874 = INT8_MIN;
volatile int32_t x877 = INT32_MAX;
static int32_t x880 = INT32_MIN;
static int32_t t157 = -84338331;
static volatile int32_t t158 = -16757532;
uint8_t x886 = 1U;
volatile uint16_t x914 = UINT16_MAX;
static int64_t x915 = 3372991402410392LL;
static volatile int32_t t162 = -1356328;
uint64_t x919 = UINT64_MAX;
int8_t x922 = -1;
volatile int32_t t164 = 52668312;
uint8_t x926 = 39U;
volatile int32_t x939 = 245;
uint32_t x940 = UINT32_MAX;
uint8_t x943 = 2U;
int8_t x947 = 0;
uint32_t x954 = 13U;
int64_t x960 = -196299312056LL;
int32_t x962 = -1;
uint32_t x963 = UINT32_MAX;
uint8_t x968 = UINT8_MAX;
volatile int64_t x970 = 13359182LL;
int64_t x971 = INT64_MIN;
uint64_t x976 = UINT64_MAX;
int32_t t175 = 1;
static int8_t x978 = 1;
int16_t x980 = INT16_MIN;
volatile int32_t t176 = 143828724;
uint64_t x986 = 9644938LLU;
int8_t x994 = -28;
volatile int8_t x1001 = INT8_MIN;
static int64_t x1003 = -1LL;
static int16_t x1004 = INT16_MAX;
int32_t x1008 = INT32_MIN;
volatile int64_t x1025 = 3843215318LL;
int8_t x1028 = -19;
uint64_t x1029 = UINT64_MAX;
int32_t t185 = -392;
uint8_t x1034 = 8U;
static uint16_t x1039 = 1U;
uint32_t x1050 = 1854U;
int32_t t188 = 12342;
volatile int32_t t191 = -57723024;
int64_t x1065 = -12867760432948876LL;
uint16_t x1070 = 12431U;
volatile uint8_t x1072 = 4U;
static int8_t x1074 = -7;
int16_t x1075 = INT16_MAX;
uint64_t x1083 = 5750673507346844LLU;
volatile int32_t t195 = 15212394;
volatile int16_t x1096 = -1;
volatile uint64_t x1108 = 934033LLU;
int32_t t198 = 7493488;
int64_t x1110 = -1281578530LL;
volatile int64_t x1111 = INT64_MIN;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	int64_t x7 = -44874116057731LL;
	int32_t x8 = INT32_MAX;
	volatile int32_t t0 = 213353806;

    t0 = (((x5*x6)+x7)<=x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = -20;
	static volatile int32_t t1 = 267359208;

    t1 = (((x9*x10)+x11)<=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x17 = 40U;
	int8_t x20 = INT8_MIN;

    t2 = (((x17*x18)+x19)<=x20);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x22 = 6U;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t3 = 113291870;

    t3 = (((x21*x22)+x23)<=x24);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x41 = 119950046U;
	static uint64_t x42 = 218LLU;
	static volatile uint32_t x43 = 3188U;
	uint64_t x44 = 26414758LLU;
	volatile int32_t t4 = -3083630;

    t4 = (((x41*x42)+x43)<=x44);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x49 = 1710752275U;
	uint64_t x50 = UINT64_MAX;
	uint16_t x51 = UINT16_MAX;
	uint16_t x52 = 225U;

    t5 = (((x49*x50)+x51)<=x52);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x53 = -1;
	static int8_t x54 = -1;
	volatile int16_t x55 = -1;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t6 = 11;

    t6 = (((x53*x54)+x55)<=x56);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x58 = 21U;
	int64_t x59 = 3131585222422449LL;
	int16_t x60 = 2137;
	static volatile int32_t t7 = 98473;

    t7 = (((x57*x58)+x59)<=x60);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x66 = -1;
	volatile int64_t x67 = 3118LL;
	uint8_t x68 = 0U;

    t8 = (((x65*x66)+x67)<=x68);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x71 = INT16_MIN;
	uint32_t x72 = 101527U;
	volatile int32_t t9 = -2941208;

    t9 = (((x69*x70)+x71)<=x72);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x74 = 2023510U;
	volatile uint32_t x75 = UINT32_MAX;
	volatile int32_t t10 = -1916;

    t10 = (((x73*x74)+x75)<=x76);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x81 = -2;
	int64_t x84 = INT64_MIN;
	int32_t t11 = 815318661;

    t11 = (((x81*x82)+x83)<=x84);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x85 = 1;
	uint64_t x86 = 1189LLU;
	int16_t x87 = INT16_MAX;
	int32_t t12 = -25;

    t12 = (((x85*x86)+x87)<=x88);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x89 = -1;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = 1;
	static int16_t x92 = -1;
	int32_t t13 = 21022;

    t13 = (((x89*x90)+x91)<=x92);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x106 = INT32_MAX;
	int32_t x107 = -1;
	static volatile uint16_t x108 = 3251U;
	volatile int32_t t14 = 106667;

    t14 = (((x105*x106)+x107)<=x108);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x113 = -88;
	uint8_t x114 = 1U;
	static uint8_t x116 = 0U;
	static volatile int32_t t15 = 36;

    t15 = (((x113*x114)+x115)<=x116);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x117 = INT16_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	uint32_t x119 = UINT32_MAX;
	static volatile int64_t x120 = 536LL;
	volatile int32_t t16 = -225327;

    t16 = (((x117*x118)+x119)<=x120);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x122 = 0U;
	volatile int32_t t17 = -15428;

    t17 = (((x121*x122)+x123)<=x124);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x126 = -527LL;
	int64_t x127 = 1160256781993LL;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t18 = 1345;

    t18 = (((x125*x126)+x127)<=x128);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x129 = 31U;
	uint32_t x130 = 172955U;
	static volatile uint16_t x132 = 3U;
	static volatile int32_t t19 = 1901;

    t19 = (((x129*x130)+x131)<=x132);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x137 = INT16_MAX;
	uint32_t x138 = 18173166U;
	volatile uint8_t x139 = UINT8_MAX;
	volatile int32_t x140 = 473027;
	static int32_t t20 = 5465580;

    t20 = (((x137*x138)+x139)<=x140);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x141 = 2U;
	uint16_t x142 = 14995U;
	int64_t x143 = INT64_MIN;
	static uint16_t x144 = 8U;
	static volatile int32_t t21 = 6807;

    t21 = (((x141*x142)+x143)<=x144);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x145 = -1LL;
	static volatile uint64_t x146 = UINT64_MAX;
	int16_t x147 = INT16_MIN;
	volatile int8_t x148 = -1;
	int32_t t22 = 13;

    t22 = (((x145*x146)+x147)<=x148);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x158 = 1710453U;
	uint16_t x160 = 3U;
	static volatile int32_t t23 = -7300;

    t23 = (((x157*x158)+x159)<=x160);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x163 = -1;
	volatile int32_t x164 = -982;
	static volatile int32_t t24 = -80;

    t24 = (((x161*x162)+x163)<=x164);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x165 = -1;
	int32_t t25 = -154;

    t25 = (((x165*x166)+x167)<=x168);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x169 = UINT32_MAX;
	static uint16_t x170 = UINT16_MAX;
	static int8_t x171 = INT8_MAX;
	static int32_t x172 = INT32_MIN;
	int32_t t26 = 7028780;

    t26 = (((x169*x170)+x171)<=x172);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x173 = 658U;
	volatile int8_t x174 = INT8_MIN;
	volatile int16_t x175 = 13;
	int8_t x176 = INT8_MAX;
	int32_t t27 = -204;

    t27 = (((x173*x174)+x175)<=x176);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x177 = 6U;
	uint64_t x178 = 2093075469924LLU;
	int32_t t28 = -15765;

    t28 = (((x177*x178)+x179)<=x180);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x181 = 52266276792626456LLU;
	int16_t x182 = -1;
	int32_t x183 = INT32_MAX;
	static int32_t x184 = 51964;
	volatile int32_t t29 = -93944;

    t29 = (((x181*x182)+x183)<=x184);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x186 = UINT16_MAX;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = -25;

    t30 = (((x185*x186)+x187)<=x188);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x189 = -45643434742LL;
	static int16_t x191 = INT16_MIN;
	uint32_t x192 = 477U;
	int32_t t31 = -2;

    t31 = (((x189*x190)+x191)<=x192);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x193 = 23115U;
	int8_t x194 = INT8_MAX;
	static uint8_t x196 = 32U;
	static volatile int32_t t32 = -15;

    t32 = (((x193*x194)+x195)<=x196);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x197 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	volatile int32_t t33 = 15;

    t33 = (((x197*x198)+x199)<=x200);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 0U;
	static uint16_t x203 = UINT16_MAX;
	static volatile int32_t t34 = -1942993;

    t34 = (((x201*x202)+x203)<=x204);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x205 = INT16_MAX;
	static volatile int8_t x206 = INT8_MIN;
	volatile int8_t x207 = INT8_MAX;
	int32_t t35 = -88696012;

    t35 = (((x205*x206)+x207)<=x208);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x213 = UINT16_MAX;
	int32_t x214 = 2436;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = 18732493689497606LLU;
	int32_t t36 = -4055;

    t36 = (((x213*x214)+x215)<=x216);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x221 = 0U;
	uint16_t x222 = UINT16_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t37 = -4532551;

    t37 = (((x221*x222)+x223)<=x224);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x225 = 1U;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 14753803090075LLU;
	volatile int32_t t38 = -15;

    t38 = (((x225*x226)+x227)<=x228);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x229 = -2;
	int32_t x230 = 892006;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = -1LL;
	volatile int32_t t39 = 16;

    t39 = (((x229*x230)+x231)<=x232);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x234 = 245U;
	static int64_t x235 = -171817LL;
	static uint32_t x236 = 1U;
	int32_t t40 = 1;

    t40 = (((x233*x234)+x235)<=x236);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x237 = 69U;
	int16_t x238 = -12;
	volatile int32_t x239 = INT32_MAX;
	volatile int16_t x240 = INT16_MIN;
	int32_t t41 = -246957;

    t41 = (((x237*x238)+x239)<=x240);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x241 = -1;
	static volatile int16_t x242 = -1;
	int32_t x243 = INT32_MIN;
	volatile int32_t t42 = -265947734;

    t42 = (((x241*x242)+x243)<=x244);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x253 = -1;
	int32_t x254 = -3;
	uint8_t x255 = 70U;
	static int32_t t43 = 108;

    t43 = (((x253*x254)+x255)<=x256);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x257 = -1LL;
	int32_t x260 = -1;
	volatile int32_t t44 = -5565160;

    t44 = (((x257*x258)+x259)<=x260);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x270 = -344995;
	int8_t x271 = 6;
	int32_t t45 = -153840451;

    t45 = (((x269*x270)+x271)<=x272);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = 27;
	uint32_t x276 = 43363U;
	volatile int32_t t46 = -74195;

    t46 = (((x273*x274)+x275)<=x276);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x277 = -702958890;
	volatile int64_t x278 = -1LL;
	static int8_t x280 = 0;
	int32_t t47 = 3;

    t47 = (((x277*x278)+x279)<=x280);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x281 = INT64_MIN;
	int32_t x282 = 0;
	uint16_t x283 = 197U;
	int8_t x284 = 0;

    t48 = (((x281*x282)+x283)<=x284);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x290 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t49 = 2;

    t49 = (((x289*x290)+x291)<=x292);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x301 = 45;
	int8_t x302 = INT8_MAX;
	int64_t x304 = 7134908703613259LL;
	int32_t t50 = -30269651;

    t50 = (((x301*x302)+x303)<=x304);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 6025379339768260LLU;
	static uint32_t x307 = 29233U;
	int64_t x308 = 4364413531072490849LL;
	static int32_t t51 = 10;

    t51 = (((x305*x306)+x307)<=x308);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x311 = 24530835U;
	int8_t x312 = 27;
	static volatile int32_t t52 = -62251838;

    t52 = (((x309*x310)+x311)<=x312);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x318 = 118632757473LL;
	uint16_t x320 = 12624U;
	int32_t t53 = -56782293;

    t53 = (((x317*x318)+x319)<=x320);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x323 = -1;
	int8_t x324 = 3;
	int32_t t54 = -252;

    t54 = (((x321*x322)+x323)<=x324);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x325 = UINT32_MAX;
	uint16_t x326 = 2U;
	uint8_t x327 = UINT8_MAX;
	static volatile int32_t t55 = 1;

    t55 = (((x325*x326)+x327)<=x328);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x329 = -4;
	volatile int8_t x330 = INT8_MIN;
	uint8_t x331 = 82U;
	static uint32_t x332 = 14U;
	volatile int32_t t56 = 2;

    t56 = (((x329*x330)+x331)<=x332);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x333 = INT32_MIN;
	uint64_t x334 = 7861090271LLU;
	volatile uint16_t x336 = 1U;
	int32_t t57 = -102037;

    t57 = (((x333*x334)+x335)<=x336);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x337 = 22248U;
	uint32_t x338 = 11U;
	volatile int16_t x339 = 309;
	uint64_t x340 = 20845460458270113LLU;
	volatile int32_t t58 = -9;

    t58 = (((x337*x338)+x339)<=x340);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x341 = 132U;
	static uint64_t x342 = 34123358LLU;
	uint64_t x343 = UINT64_MAX;
	uint64_t x344 = 28539LLU;
	static volatile int32_t t59 = -142;

    t59 = (((x341*x342)+x343)<=x344);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x357 = 29LL;
	static uint64_t x358 = 35826457056LLU;
	uint64_t x359 = 24LLU;
	volatile uint32_t x360 = UINT32_MAX;
	volatile int32_t t60 = 242280625;

    t60 = (((x357*x358)+x359)<=x360);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	static uint16_t x363 = 3U;
	volatile uint64_t x364 = 145687673LLU;
	int32_t t61 = -125904530;

    t61 = (((x361*x362)+x363)<=x364);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x370 = 2228284U;
	int16_t x371 = INT16_MIN;
	uint64_t x372 = UINT64_MAX;

    t62 = (((x369*x370)+x371)<=x372);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x373 = INT16_MAX;
	uint8_t x374 = 86U;
	int16_t x375 = INT16_MAX;
	uint16_t x376 = 0U;
	volatile int32_t t63 = -10018622;

    t63 = (((x373*x374)+x375)<=x376);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = INT64_MIN;
	int8_t x384 = 21;
	volatile int32_t t64 = -3644979;

    t64 = (((x381*x382)+x383)<=x384);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x389 = INT16_MAX;
	volatile int32_t x390 = 30;
	uint32_t x391 = 107U;
	int16_t x392 = INT16_MIN;

    t65 = (((x389*x390)+x391)<=x392);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x401 = 1U;
	int8_t x402 = -1;
	int8_t x403 = INT8_MIN;
	int32_t t66 = -3792353;

    t66 = (((x401*x402)+x403)<=x404);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	int32_t x406 = INT32_MAX;
	static int64_t x408 = -1LL;
	int32_t t67 = 1;

    t67 = (((x405*x406)+x407)<=x408);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x409 = 0;
	volatile int32_t x410 = -148;
	volatile uint32_t x411 = 10107U;
	int8_t x412 = 1;
	volatile int32_t t68 = -3;

    t68 = (((x409*x410)+x411)<=x412);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x414 = 17733U;
	uint8_t x416 = 25U;
	static volatile int32_t t69 = 7184;

    t69 = (((x413*x414)+x415)<=x416);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = UINT8_MAX;
	uint64_t x419 = 143035614651LLU;
	uint16_t x420 = 1246U;

    t70 = (((x417*x418)+x419)<=x420);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x423 = -23;
	int32_t t71 = -1177;

    t71 = (((x421*x422)+x423)<=x424);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x425 = 0;
	int32_t x426 = INT32_MAX;
	int32_t x427 = INT32_MAX;
	int8_t x428 = INT8_MAX;
	volatile int32_t t72 = -6620274;

    t72 = (((x425*x426)+x427)<=x428);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x429 = -1;
	uint32_t x430 = 136U;
	int8_t x431 = -1;
	int32_t t73 = 212011654;

    t73 = (((x429*x430)+x431)<=x432);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x433 = 9U;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MAX;
	volatile int32_t t74 = 1;

    t74 = (((x433*x434)+x435)<=x436);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile uint8_t x439 = 0U;
	int32_t x440 = -1;
	int32_t t75 = 219;

    t75 = (((x437*x438)+x439)<=x440);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x441 = 8;
	uint8_t x443 = 5U;
	static int16_t x444 = INT16_MIN;
	static int32_t t76 = -13353;

    t76 = (((x441*x442)+x443)<=x444);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x445 = INT32_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t77 = -745;

    t77 = (((x445*x446)+x447)<=x448);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x449 = -1;
	int64_t x451 = 20462554969614LL;
	int8_t x452 = 3;
	volatile int32_t t78 = -3811;

    t78 = (((x449*x450)+x451)<=x452);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x453 = -1;
	volatile uint32_t x454 = 219U;
	static int32_t x456 = -1;
	int32_t t79 = -6527;

    t79 = (((x453*x454)+x455)<=x456);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x457 = INT8_MIN;
	uint8_t x458 = UINT8_MAX;
	uint8_t x459 = UINT8_MAX;
	static volatile int32_t x460 = INT32_MIN;
	int32_t t80 = 68165752;

    t80 = (((x457*x458)+x459)<=x460);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x462 = 25;
	int8_t x463 = INT8_MIN;
	int32_t t81 = 49;

    t81 = (((x461*x462)+x463)<=x464);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x465 = -1LL;
	static int8_t x466 = INT8_MAX;
	volatile uint8_t x467 = UINT8_MAX;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t82 = 53978;

    t82 = (((x465*x466)+x467)<=x468);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x469 = -1;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t83 = 0;

    t83 = (((x469*x470)+x471)<=x472);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x473 = 4LLU;
	int64_t x474 = -1905198LL;
	uint32_t x475 = UINT32_MAX;
	int64_t x476 = 60LL;
	volatile int32_t t84 = 71566;

    t84 = (((x473*x474)+x475)<=x476);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x477 = 12594588LLU;
	int16_t x478 = INT16_MAX;
	uint64_t x479 = 17470502455861LLU;
	uint16_t x480 = UINT16_MAX;
	static volatile int32_t t85 = -76744;

    t85 = (((x477*x478)+x479)<=x480);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x483 = 27129LLU;
	static uint32_t x484 = 2151U;
	static volatile int32_t t86 = 891400;

    t86 = (((x481*x482)+x483)<=x484);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x489 = 5573448342219870LLU;
	volatile int64_t x490 = -21920LL;
	int64_t x491 = INT64_MIN;
	static int32_t x492 = INT32_MAX;

    t87 = (((x489*x490)+x491)<=x492);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x493 = 46580727U;
	static int8_t x495 = 54;
	static volatile int32_t t88 = -980534;

    t88 = (((x493*x494)+x495)<=x496);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x505 = -1;
	uint32_t x506 = UINT32_MAX;
	static int64_t x507 = -2084LL;
	volatile int8_t x508 = -1;
	volatile int32_t t89 = -3993;

    t89 = (((x505*x506)+x507)<=x508);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x511 = 933509703U;
	volatile int32_t t90 = -22;

    t90 = (((x509*x510)+x511)<=x512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x517 = 1814U;

    t91 = (((x517*x518)+x519)<=x520);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	volatile uint16_t x522 = UINT16_MAX;
	static uint16_t x523 = UINT16_MAX;
	int64_t x524 = INT64_MIN;

    t92 = (((x521*x522)+x523)<=x524);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x530 = -1;
	uint8_t x531 = UINT8_MAX;
	static int16_t x532 = INT16_MAX;

    t93 = (((x529*x530)+x531)<=x532);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x533 = 74U;
	int16_t x535 = INT16_MAX;
	int8_t x536 = -15;
	int32_t t94 = 0;

    t94 = (((x533*x534)+x535)<=x536);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x537 = UINT32_MAX;
	int32_t x538 = -1;
	volatile int8_t x539 = 0;
	int32_t x540 = INT32_MAX;
	volatile int32_t t95 = -39217;

    t95 = (((x537*x538)+x539)<=x540);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x541 = 15U;
	uint8_t x542 = 9U;
	uint64_t x543 = 1035535LLU;
	static uint64_t x544 = 20991670307126769LLU;
	volatile int32_t t96 = -996335257;

    t96 = (((x541*x542)+x543)<=x544);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile int8_t x547 = -14;

    t97 = (((x545*x546)+x547)<=x548);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x554 = 2719U;
	volatile uint8_t x555 = 5U;
	uint32_t x556 = 29147014U;
	volatile int32_t t98 = 837;

    t98 = (((x553*x554)+x555)<=x556);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x557 = 629U;
	int64_t x559 = 1310151LL;
	static uint64_t x560 = 289534945LLU;
	int32_t t99 = 6;

    t99 = (((x557*x558)+x559)<=x560);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x567 = -13;
	uint32_t x568 = 19U;

    t100 = (((x565*x566)+x567)<=x568);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x569 = INT32_MIN;
	static uint8_t x570 = 0U;
	static uint32_t x571 = UINT32_MAX;
	static int16_t x572 = 383;
	volatile int32_t t101 = -104813118;

    t101 = (((x569*x570)+x571)<=x572);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	uint32_t x575 = UINT32_MAX;
	volatile int32_t x576 = -115180923;
	int32_t t102 = 183780;

    t102 = (((x573*x574)+x575)<=x576);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x582 = 53U;
	int32_t x583 = -10;
	int8_t x584 = 1;

    t103 = (((x581*x582)+x583)<=x584);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x585 = 684433796425816LLU;
	int64_t x586 = -1LL;
	static uint64_t x587 = UINT64_MAX;
	int16_t x588 = -1;
	static volatile int32_t t104 = 11610;

    t104 = (((x585*x586)+x587)<=x588);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x593 = INT64_MAX;
	static volatile uint64_t x594 = UINT64_MAX;
	int32_t x595 = INT32_MAX;
	volatile int32_t t105 = -39;

    t105 = (((x593*x594)+x595)<=x596);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x597 = 2U;
	int64_t x598 = -20725944151424540LL;
	uint32_t x600 = 1094336U;
	int32_t t106 = 2419;

    t106 = (((x597*x598)+x599)<=x600);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x601 = -1;
	int32_t x602 = -1;
	int16_t x604 = INT16_MAX;
	static volatile int32_t t107 = 73466;

    t107 = (((x601*x602)+x603)<=x604);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x609 = 0U;
	uint8_t x610 = 42U;
	static uint32_t x611 = UINT32_MAX;
	int32_t x612 = -1;

    t108 = (((x609*x610)+x611)<=x612);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x621 = INT16_MIN;
	uint16_t x622 = 136U;
	int8_t x623 = INT8_MIN;
	static int32_t x624 = 37;
	static volatile int32_t t109 = 69039251;

    t109 = (((x621*x622)+x623)<=x624);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x626 = -1;
	uint8_t x627 = 88U;
	int8_t x628 = -1;

    t110 = (((x625*x626)+x627)<=x628);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x633 = 7154;
	uint16_t x634 = UINT16_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t111 = -4018;

    t111 = (((x633*x634)+x635)<=x636);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x637 = -1;
	volatile int64_t x639 = -1LL;
	int64_t x640 = INT64_MAX;
	volatile int32_t t112 = -3350901;

    t112 = (((x637*x638)+x639)<=x640);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x641 = 121087U;
	volatile int32_t x642 = 978310670;
	volatile int32_t x643 = -1770977;
	int16_t x644 = 7451;

    t113 = (((x641*x642)+x643)<=x644);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x649 = 1;
	int16_t x650 = INT16_MIN;
	uint16_t x651 = 69U;
	static volatile int32_t x652 = -1;

    t114 = (((x649*x650)+x651)<=x652);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x654 = 2;
	uint32_t x656 = 48727U;
	static int32_t t115 = -366846;

    t115 = (((x653*x654)+x655)<=x656);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x657 = -1;
	volatile int8_t x658 = INT8_MIN;
	uint16_t x660 = 214U;
	volatile int32_t t116 = 92;

    t116 = (((x657*x658)+x659)<=x660);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x661 = UINT8_MAX;
	static int16_t x662 = -1;
	uint32_t x663 = 59996355U;
	volatile int32_t x664 = -1;
	int32_t t117 = -113;

    t117 = (((x661*x662)+x663)<=x664);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x665 = INT8_MIN;
	static int8_t x666 = 0;
	uint16_t x667 = UINT16_MAX;
	int32_t x668 = INT32_MIN;
	volatile int32_t t118 = -356906667;

    t118 = (((x665*x666)+x667)<=x668);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x673 = 2018U;
	volatile int64_t x674 = 4LL;
	int8_t x676 = -1;
	int32_t t119 = 12091818;

    t119 = (((x673*x674)+x675)<=x676);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x677 = -1;
	uint32_t x678 = UINT32_MAX;
	static int8_t x679 = -19;

    t120 = (((x677*x678)+x679)<=x680);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x681 = -1;
	int16_t x682 = 2500;
	uint8_t x683 = 15U;
	int16_t x684 = 1;

    t121 = (((x681*x682)+x683)<=x684);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x694 = -248;
	int32_t x695 = INT32_MIN;
	volatile int32_t x696 = INT32_MIN;
	static volatile int32_t t122 = 869918662;

    t122 = (((x693*x694)+x695)<=x696);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x697 = 0U;
	int16_t x698 = -1;
	int16_t x700 = INT16_MIN;
	int32_t t123 = -3113043;

    t123 = (((x697*x698)+x699)<=x700);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x701 = 1;
	int64_t x702 = INT64_MAX;
	int32_t x703 = -1;
	uint32_t x704 = 9596837U;
	int32_t t124 = -23576;

    t124 = (((x701*x702)+x703)<=x704);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x705 = -1;
	uint32_t x706 = UINT32_MAX;
	int64_t x707 = -686282304823LL;
	int32_t x708 = INT32_MIN;
	volatile int32_t t125 = 1889;

    t125 = (((x705*x706)+x707)<=x708);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x709 = 1;
	int8_t x710 = INT8_MIN;
	uint8_t x712 = UINT8_MAX;

    t126 = (((x709*x710)+x711)<=x712);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x713 = -1;
	volatile int16_t x714 = INT16_MIN;
	static volatile uint32_t x715 = 4971641U;
	int64_t x716 = INT64_MIN;
	int32_t t127 = 5;

    t127 = (((x713*x714)+x715)<=x716);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x717 = 1U;
	volatile uint16_t x718 = 1U;
	static int16_t x719 = 2;
	int16_t x720 = INT16_MIN;
	volatile int32_t t128 = 27163466;

    t128 = (((x717*x718)+x719)<=x720);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x725 = 1U;
	uint64_t x726 = UINT64_MAX;
	int8_t x727 = -22;
	uint16_t x728 = UINT16_MAX;
	static volatile int32_t t129 = -2;

    t129 = (((x725*x726)+x727)<=x728);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x729 = 0U;
	int64_t x730 = INT64_MIN;
	volatile int16_t x731 = INT16_MIN;
	volatile int64_t x732 = -1LL;
	int32_t t130 = 112706;

    t130 = (((x729*x730)+x731)<=x732);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = -1;
	int32_t x739 = 221415653;
	static uint64_t x740 = UINT64_MAX;
	volatile int32_t t131 = -6532400;

    t131 = (((x737*x738)+x739)<=x740);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	int64_t x746 = -1LL;
	volatile int32_t x747 = INT32_MIN;
	static int64_t x748 = -1LL;
	volatile int32_t t132 = 31965;

    t132 = (((x745*x746)+x747)<=x748);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x749 = -1;
	static volatile int16_t x750 = -1;
	int64_t x751 = -7630781865066529LL;
	static uint64_t x752 = 478328434760939743LLU;
	int32_t t133 = -609904003;

    t133 = (((x749*x750)+x751)<=x752);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x753 = 1098U;
	int8_t x754 = INT8_MIN;
	uint16_t x755 = 0U;
	int8_t x756 = INT8_MAX;
	volatile int32_t t134 = -47;

    t134 = (((x753*x754)+x755)<=x756);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x761 = 67U;
	int8_t x762 = 0;
	int32_t x763 = INT32_MAX;

    t135 = (((x761*x762)+x763)<=x764);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x765 = UINT64_MAX;
	int32_t x766 = INT32_MIN;
	static uint8_t x767 = 5U;
	int32_t x768 = -1;
	volatile int32_t t136 = -82615;

    t136 = (((x765*x766)+x767)<=x768);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x769 = 633089628LL;
	int8_t x770 = -1;
	int32_t x771 = 15089777;
	int32_t x772 = INT32_MAX;
	int32_t t137 = 656;

    t137 = (((x769*x770)+x771)<=x772);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x773 = INT8_MAX;
	uint64_t x774 = 14LLU;
	int64_t x775 = INT64_MIN;
	static int16_t x776 = -1687;
	volatile int32_t t138 = 3091107;

    t138 = (((x773*x774)+x775)<=x776);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x777 = 1;
	uint64_t x778 = 3345317146636526280LLU;
	int16_t x779 = 3;
	int64_t x780 = INT64_MIN;
	volatile int32_t t139 = 303;

    t139 = (((x777*x778)+x779)<=x780);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x781 = -1LL;
	int16_t x783 = 1728;
	uint8_t x784 = UINT8_MAX;
	volatile int32_t t140 = 4;

    t140 = (((x781*x782)+x783)<=x784);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x785 = -3;
	volatile int8_t x786 = -1;
	volatile int32_t x787 = -1;
	static int32_t x788 = INT32_MIN;

    t141 = (((x785*x786)+x787)<=x788);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x789 = 17653U;
	static uint16_t x790 = 1287U;
	static int8_t x791 = 0;
	uint8_t x792 = 12U;

    t142 = (((x789*x790)+x791)<=x792);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x793 = -1;
	int16_t x795 = 109;
	volatile uint64_t x796 = 8LLU;
	static int32_t t143 = 57;

    t143 = (((x793*x794)+x795)<=x796);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x805 = -28LL;
	static int16_t x806 = -1;
	int16_t x807 = 3499;
	int16_t x808 = INT16_MIN;
	static volatile int32_t t144 = 19;

    t144 = (((x805*x806)+x807)<=x808);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x813 = 1U;
	int16_t x814 = INT16_MAX;
	int32_t x815 = INT32_MIN;
	int64_t x816 = -7141LL;
	static int32_t t145 = -6630;

    t145 = (((x813*x814)+x815)<=x816);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x821 = 0LLU;

    t146 = (((x821*x822)+x823)<=x824);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x829 = -1;
	volatile int8_t x830 = 6;
	static int16_t x831 = -1;
	int32_t x832 = INT32_MIN;
	int32_t t147 = 1917;

    t147 = (((x829*x830)+x831)<=x832);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x833 = 1;
	uint16_t x835 = 546U;
	static volatile int32_t x836 = -1;
	int32_t t148 = -81226;

    t148 = (((x833*x834)+x835)<=x836);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x837 = 45U;
	int8_t x838 = INT8_MAX;
	volatile int32_t t149 = 737171863;

    t149 = (((x837*x838)+x839)<=x840);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x845 = INT16_MAX;
	volatile uint16_t x846 = 31354U;
	uint32_t x847 = 63U;
	int32_t x848 = -489;
	volatile int32_t t150 = 1;

    t150 = (((x845*x846)+x847)<=x848);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x854 = 660;
	volatile uint16_t x856 = UINT16_MAX;
	volatile int32_t t151 = 2;

    t151 = (((x853*x854)+x855)<=x856);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x857 = INT8_MAX;
	int16_t x858 = INT16_MAX;
	int32_t x859 = INT32_MIN;
	int16_t x860 = INT16_MIN;
	volatile int32_t t152 = -1;

    t152 = (((x857*x858)+x859)<=x860);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x861 = -1;
	static uint16_t x862 = UINT16_MAX;
	uint64_t x863 = 808LLU;
	uint8_t x864 = UINT8_MAX;

    t153 = (((x861*x862)+x863)<=x864);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x865 = INT32_MIN;
	int8_t x866 = 0;
	int64_t x867 = INT64_MAX;
	volatile uint32_t x868 = 1182U;
	volatile int32_t t154 = -131729567;

    t154 = (((x865*x866)+x867)<=x868);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x870 = INT32_MAX;
	int64_t x871 = INT64_MAX;
	uint32_t x872 = 0U;
	int32_t t155 = 23604359;

    t155 = (((x869*x870)+x871)<=x872);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x873 = 1LLU;
	static int32_t x875 = -1;
	volatile int64_t x876 = 4930285068343105LL;
	int32_t t156 = -2042;

    t156 = (((x873*x874)+x875)<=x876);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x878 = 0U;
	int8_t x879 = -1;

    t157 = (((x877*x878)+x879)<=x880);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x881 = -201;
	static int16_t x882 = -787;
	int64_t x883 = -1LL;
	int64_t x884 = INT64_MIN;

    t158 = (((x881*x882)+x883)<=x884);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x885 = -1;
	int32_t x887 = INT32_MAX;
	int16_t x888 = INT16_MIN;
	volatile int32_t t159 = -6;

    t159 = (((x885*x886)+x887)<=x888);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x889 = 385220LL;
	int8_t x890 = INT8_MIN;
	volatile int8_t x891 = -1;
	int64_t x892 = -1LL;
	volatile int32_t t160 = -20884222;

    t160 = (((x889*x890)+x891)<=x892);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x897 = INT8_MAX;
	uint8_t x898 = 1U;
	int8_t x899 = INT8_MIN;
	int16_t x900 = -21;
	static volatile int32_t t161 = 6;

    t161 = (((x897*x898)+x899)<=x900);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x913 = INT16_MIN;
	static int32_t x916 = INT32_MIN;

    t162 = (((x913*x914)+x915)<=x916);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x917 = 0U;
	int64_t x918 = INT64_MIN;
	int64_t x920 = -1LL;
	int32_t t163 = 8;

    t163 = (((x917*x918)+x919)<=x920);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x921 = INT8_MAX;
	uint16_t x923 = UINT16_MAX;
	uint8_t x924 = UINT8_MAX;

    t164 = (((x921*x922)+x923)<=x924);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x925 = INT8_MAX;
	int8_t x927 = -1;
	int32_t x928 = INT32_MIN;
	static volatile int32_t t165 = 32856502;

    t165 = (((x925*x926)+x927)<=x928);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x929 = INT8_MIN;
	uint64_t x930 = 8453022746108047LLU;
	volatile int8_t x931 = INT8_MIN;
	static int16_t x932 = -1;
	static volatile int32_t t166 = -987756;

    t166 = (((x929*x930)+x931)<=x932);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x937 = 18;
	uint16_t x938 = 1U;
	int32_t t167 = 1;

    t167 = (((x937*x938)+x939)<=x940);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x941 = -59;
	int8_t x942 = -1;
	uint8_t x944 = 2U;
	int32_t t168 = 390894;

    t168 = (((x941*x942)+x943)<=x944);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x945 = INT16_MIN;
	static int16_t x946 = INT16_MIN;
	int16_t x948 = INT16_MIN;
	volatile int32_t t169 = 113411;

    t169 = (((x945*x946)+x947)<=x948);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x953 = -1LL;
	int16_t x955 = -1;
	static int32_t x956 = INT32_MIN;
	static int32_t t170 = -2811917;

    t170 = (((x953*x954)+x955)<=x956);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x957 = INT8_MIN;
	static uint64_t x958 = 7444409963LLU;
	uint16_t x959 = 0U;
	int32_t t171 = -18188310;

    t171 = (((x957*x958)+x959)<=x960);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x961 = -581;
	uint8_t x964 = 40U;
	volatile int32_t t172 = 57;

    t172 = (((x961*x962)+x963)<=x964);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x965 = 1064U;
	volatile uint8_t x966 = 6U;
	int16_t x967 = INT16_MAX;
	volatile int32_t t173 = -77929867;

    t173 = (((x965*x966)+x967)<=x968);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x969 = 212LL;
	static int64_t x972 = -5065141429072954LL;
	int32_t t174 = -11;

    t174 = (((x969*x970)+x971)<=x972);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x973 = 7209LLU;
	int32_t x974 = INT32_MIN;
	static int8_t x975 = INT8_MIN;

    t175 = (((x973*x974)+x975)<=x976);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x977 = INT64_MIN;
	uint8_t x979 = 25U;

    t176 = (((x977*x978)+x979)<=x980);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x981 = 1;
	uint16_t x982 = 2655U;
	static int8_t x983 = -1;
	int8_t x984 = INT8_MIN;
	int32_t t177 = 3507549;

    t177 = (((x981*x982)+x983)<=x984);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x985 = 1285U;
	int16_t x987 = -1;
	uint32_t x988 = 25822U;
	int32_t t178 = 505443;

    t178 = (((x985*x986)+x987)<=x988);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x993 = 62;
	static int16_t x995 = -1;
	uint64_t x996 = UINT64_MAX;
	volatile int32_t t179 = 252181;

    t179 = (((x993*x994)+x995)<=x996);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x997 = INT16_MIN;
	uint64_t x998 = 30954608316680135LLU;
	static uint8_t x999 = 28U;
	int32_t x1000 = INT32_MIN;
	static int32_t t180 = -1870845;

    t180 = (((x997*x998)+x999)<=x1000);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x1002 = 121U;
	int32_t t181 = 13911042;

    t181 = (((x1001*x1002)+x1003)<=x1004);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1005 = 17U;
	static uint64_t x1006 = 3457LLU;
	static volatile int16_t x1007 = 1130;
	volatile int32_t t182 = 1;

    t182 = (((x1005*x1006)+x1007)<=x1008);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1013 = 0U;
	int8_t x1014 = INT8_MIN;
	int64_t x1015 = 5LL;
	uint8_t x1016 = 11U;
	volatile int32_t t183 = -44;

    t183 = (((x1013*x1014)+x1015)<=x1016);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1026 = 3U;
	volatile int32_t x1027 = 4391;
	volatile int32_t t184 = 221452;

    t184 = (((x1025*x1026)+x1027)<=x1028);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1030 = -9214;
	uint64_t x1031 = UINT64_MAX;
	volatile int16_t x1032 = -25;

    t185 = (((x1029*x1030)+x1031)<=x1032);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1033 = 39U;
	uint64_t x1035 = 54126LLU;
	static uint8_t x1036 = UINT8_MAX;
	volatile int32_t t186 = -100;

    t186 = (((x1033*x1034)+x1035)<=x1036);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1037 = -1975;
	uint32_t x1038 = 176190U;
	uint16_t x1040 = 529U;
	static volatile int32_t t187 = -23674646;

    t187 = (((x1037*x1038)+x1039)<=x1040);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1049 = INT32_MIN;
	int64_t x1051 = -294LL;
	int32_t x1052 = -1;

    t188 = (((x1049*x1050)+x1051)<=x1052);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x1053 = 6756U;
	volatile int8_t x1054 = -2;
	volatile uint32_t x1055 = 25038990U;
	int8_t x1056 = INT8_MIN;
	volatile int32_t t189 = 3872876;

    t189 = (((x1053*x1054)+x1055)<=x1056);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1057 = 33148879835LLU;
	int16_t x1058 = 1;
	int16_t x1059 = -972;
	static uint8_t x1060 = 10U;
	volatile int32_t t190 = -13768;

    t190 = (((x1057*x1058)+x1059)<=x1060);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1061 = INT32_MIN;
	uint64_t x1062 = 13LLU;
	int64_t x1063 = -2003930599587288LL;
	int8_t x1064 = INT8_MAX;

    t191 = (((x1061*x1062)+x1063)<=x1064);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x1066 = UINT64_MAX;
	int16_t x1067 = INT16_MIN;
	int8_t x1068 = INT8_MIN;
	volatile int32_t t192 = -696729008;

    t192 = (((x1065*x1066)+x1067)<=x1068);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1069 = 521601291075609LL;
	int16_t x1071 = INT16_MIN;
	int32_t t193 = 1;

    t193 = (((x1069*x1070)+x1071)<=x1072);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1073 = 15375LL;
	int32_t x1076 = INT32_MIN;
	static int32_t t194 = -73060610;

    t194 = (((x1073*x1074)+x1075)<=x1076);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1081 = 3;
	int64_t x1082 = 0LL;
	static int64_t x1084 = 22429426LL;

    t195 = (((x1081*x1082)+x1083)<=x1084);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1085 = UINT32_MAX;
	int8_t x1086 = INT8_MIN;
	uint16_t x1087 = 717U;
	volatile int32_t x1088 = -813267;
	static int32_t t196 = 284677037;

    t196 = (((x1085*x1086)+x1087)<=x1088);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1093 = UINT64_MAX;
	volatile int64_t x1094 = 5LL;
	uint8_t x1095 = 7U;
	int32_t t197 = -1;

    t197 = (((x1093*x1094)+x1095)<=x1096);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1105 = INT8_MIN;
	int8_t x1106 = -1;
	int16_t x1107 = INT16_MAX;

    t198 = (((x1105*x1106)+x1107)<=x1108);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1109 = -1;
	static uint8_t x1112 = 28U;
	static int32_t t199 = 386;

    t199 = (((x1109*x1110)+x1111)<=x1112);

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

