
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

static int32_t x7 = INT32_MAX;
int32_t x8 = -13313;
int16_t x9 = 106;
volatile int32_t t2 = -19484;
int32_t x23 = INT32_MAX;
int16_t x24 = 1;
int16_t x26 = -3;
static int64_t x32 = INT64_MAX;
static volatile int8_t x34 = -9;
static int64_t x41 = INT64_MIN;
int16_t x45 = 246;
int32_t t11 = 111056;
int64_t x50 = -1LL;
int64_t x51 = 889LL;
volatile int64_t x64 = -1LL;
volatile uint8_t x68 = UINT8_MAX;
int16_t x72 = INT16_MAX;
static uint16_t x79 = 1U;
int32_t t19 = 13084;
volatile int32_t t23 = 1;
int32_t t24 = 564;
int8_t x107 = INT8_MAX;
uint16_t x108 = 31922U;
int32_t x112 = -486052;
static volatile int32_t t28 = 1;
volatile uint32_t x117 = 337546310U;
int64_t x121 = -1LL;
int8_t x122 = INT8_MIN;
uint8_t x123 = UINT8_MAX;
static int8_t x127 = -1;
uint16_t x136 = 3719U;
int32_t x139 = -149905685;
uint32_t x140 = 3143U;
int32_t x142 = -522559;
volatile int32_t x143 = -96241434;
int8_t x148 = INT8_MAX;
int64_t x153 = 9448577320463LL;
int16_t x157 = INT16_MIN;
uint8_t x159 = 7U;
int8_t x161 = INT8_MAX;
uint64_t x165 = 980746064619LLU;
int8_t x166 = 2;
int32_t t42 = 1486;
volatile int64_t x183 = INT64_MAX;
volatile int32_t t45 = -202053;
int32_t t48 = 31057;
int64_t x197 = INT64_MIN;
int32_t x201 = INT32_MAX;
static volatile int8_t x206 = INT8_MAX;
static uint8_t x207 = UINT8_MAX;
volatile int32_t t51 = -995;
uint32_t x212 = 41484U;
int32_t x214 = -1;
volatile uint8_t x217 = 100U;
int32_t t54 = 207;
int64_t x222 = INT64_MIN;
int32_t x224 = -1;
static uint32_t x225 = 14178009U;
volatile int8_t x232 = INT8_MIN;
static volatile uint64_t x233 = UINT64_MAX;
volatile uint8_t x241 = 1U;
int32_t t60 = -5000;
int32_t x246 = INT32_MAX;
int8_t x249 = INT8_MIN;
static volatile int32_t t62 = 19055;
volatile int32_t t63 = 1635;
static int8_t x260 = INT8_MIN;
int16_t x261 = 4090;
int16_t x268 = INT16_MAX;
volatile int32_t x277 = -1;
volatile int32_t t69 = 10712;
static int32_t x282 = -20;
static volatile uint16_t x284 = UINT16_MAX;
int64_t x300 = INT64_MIN;
static int32_t t74 = -7;
int64_t x302 = -1LL;
volatile int32_t t75 = 405659951;
int16_t x310 = INT16_MIN;
int32_t x314 = -1;
int32_t t80 = 3783;
static volatile int8_t x325 = -1;
static volatile int8_t x327 = -18;
int16_t x332 = -4708;
volatile int32_t x334 = INT32_MIN;
int16_t x335 = 446;
static int64_t x336 = 410859474521LL;
volatile int16_t x344 = 2;
int32_t x346 = INT32_MIN;
uint64_t x347 = UINT64_MAX;
uint8_t x350 = 5U;
int16_t x356 = -1;
static int16_t x359 = -4;
static int8_t x372 = INT8_MIN;
uint8_t x378 = 3U;
volatile int64_t x379 = INT64_MAX;
int32_t t94 = 512310;
uint32_t x382 = UINT32_MAX;
int8_t x384 = INT8_MIN;
static int32_t t95 = 0;
volatile uint64_t x386 = 145900764LLU;
int16_t x402 = 0;
volatile int32_t x404 = -223;
volatile uint8_t x415 = 22U;
uint16_t x416 = 0U;
volatile int32_t t104 = -34911;
int32_t x429 = INT32_MIN;
int32_t t107 = -2;
volatile int32_t x443 = INT32_MIN;
uint64_t x448 = UINT64_MAX;
static int32_t x454 = -559412797;
volatile int8_t x468 = INT8_MAX;
static int32_t x471 = 305978;
uint8_t x476 = 6U;
static int64_t x481 = INT64_MAX;
int64_t x491 = -14646127569539241LL;
volatile int8_t x492 = -1;
static int32_t x504 = INT32_MIN;
int16_t x513 = 8610;
int64_t x520 = 2185233319677LL;
static volatile int32_t t129 = -62;
static uint32_t x533 = 55U;
int64_t x540 = 2228LL;
volatile int32_t t134 = 0;
volatile int8_t x543 = -59;
int8_t x548 = 10;
uint8_t x555 = UINT8_MAX;
uint8_t x559 = UINT8_MAX;
int16_t x562 = 16;
int8_t x568 = 0;
volatile int32_t t141 = -323280;
int32_t x570 = 6866;
static int32_t t144 = 621379;
int64_t x583 = INT64_MIN;
volatile int32_t t145 = 1;
int32_t x597 = 81397;
volatile int32_t t150 = -881;
int64_t x606 = INT64_MIN;
int32_t t154 = -10;
int16_t x626 = -1;
int32_t t156 = -203270;
int32_t t157 = -3;
int64_t x640 = 9851LL;
int64_t x644 = INT64_MAX;
int32_t t160 = 1185;
uint16_t x651 = 3U;
int32_t t162 = 15117391;
int16_t x654 = 659;
volatile uint8_t x655 = 2U;
static uint32_t x663 = 233U;
int16_t x665 = 0;
uint32_t x667 = 3069771U;
int8_t x669 = -18;
uint8_t x671 = UINT8_MAX;
int16_t x672 = -1;
int16_t x676 = INT16_MAX;
int64_t x679 = -1LL;
uint64_t x691 = 22340802LLU;
int64_t x694 = INT64_MIN;
int8_t x699 = INT8_MAX;
int32_t x702 = -1;
volatile int64_t x704 = INT64_MAX;
int8_t x706 = INT8_MIN;
static volatile uint16_t x714 = UINT16_MAX;
int64_t x725 = -1LL;
int16_t x729 = 7;
static uint64_t x730 = 3664246335278023LLU;
volatile int32_t t182 = 274140040;
uint64_t x734 = 5918998LLU;
int16_t x736 = INT16_MAX;
int8_t x744 = INT8_MAX;
int16_t x746 = 22;
int32_t t186 = 3152678;
volatile int8_t x750 = INT8_MAX;
int32_t x758 = INT32_MIN;
int32_t x763 = -259719832;
static volatile int32_t t191 = 7077589;
int32_t t193 = 1003711;
static int8_t x777 = INT8_MAX;
int16_t x780 = 100;
static uint16_t x783 = UINT16_MAX;
volatile uint16_t x790 = 0U;
static uint16_t x793 = 38U;
int32_t t198 = -424573;
int16_t x797 = INT16_MIN;
uint32_t x798 = UINT32_MAX;
volatile uint32_t x799 = 27877039U;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	uint8_t x2 = 1U;
	static int64_t x3 = INT64_MAX;
	uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = 29710554;

    t0 = ((x1>x2)-(x3>x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 124558054358078943LLU;
	uint64_t x6 = 4726240LLU;
	volatile int32_t t1 = 0;

    t1 = ((x5>x6)-(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 36U;
	uint32_t x11 = UINT32_MAX;
	volatile int32_t x12 = -477602;

    t2 = ((x9>x10)-(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	static int64_t x14 = -1LL;
	int16_t x15 = INT16_MIN;
	volatile int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -3752;

    t3 = ((x13>x14)-(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int64_t x18 = 35533311639416LL;
	int8_t x19 = INT8_MAX;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -1170322;

    t4 = ((x17>x18)-(x19>x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	static uint16_t x22 = 23U;
	int32_t t5 = 1568480;

    t5 = ((x21>x22)-(x23>x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	static uint64_t x27 = UINT64_MAX;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -685586;

    t6 = ((x25>x26)-(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -669400110;

    t7 = ((x29>x30)-(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MAX;
	volatile uint16_t x35 = UINT16_MAX;
	int8_t x36 = 2;
	static int32_t t8 = -364339430;

    t8 = ((x33>x34)-(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 270478890U;
	static uint16_t x40 = 16355U;
	volatile int32_t t9 = -4035;

    t9 = ((x37>x38)-(x39>x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = 199;

    t10 = ((x41>x42)-(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = INT8_MIN;
	uint16_t x47 = 950U;
	volatile int32_t x48 = -1;

    t11 = ((x45>x46)-(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = 40073;

    t12 = ((x49>x50)-(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	volatile int64_t x54 = 25564183110LL;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = -1;
	int32_t t13 = -14544;

    t13 = ((x53>x54)-(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	static volatile int32_t x58 = INT32_MIN;
	int32_t x59 = 749032153;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = -26110;

    t14 = ((x57>x58)-(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 17U;
	int8_t x62 = INT8_MAX;
	volatile int8_t x63 = INT8_MIN;
	volatile int32_t t15 = -1;

    t15 = ((x61>x62)-(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static volatile int32_t x66 = INT32_MIN;
	uint16_t x67 = 1U;
	int32_t t16 = 3783;

    t16 = ((x65>x66)-(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 24U;
	int64_t x70 = INT64_MAX;
	static volatile uint32_t x71 = 121939U;
	static int32_t t17 = -58913428;

    t17 = ((x69>x70)-(x71>x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MIN;
	uint8_t x74 = 0U;
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 689631U;
	static volatile int32_t t18 = 162;

    t18 = ((x73>x74)-(x75>x76));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	static int8_t x78 = -1;
	int64_t x80 = 492545928929946656LL;

    t19 = ((x77>x78)-(x79>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	volatile uint16_t x82 = 0U;
	uint64_t x83 = 1LLU;
	static uint64_t x84 = 117163LLU;
	volatile int32_t t20 = -478871;

    t20 = ((x81>x82)-(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x85 = -6111;
	volatile uint8_t x86 = 1U;
	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -463143;

    t21 = ((x85>x86)-(x87>x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	int8_t x90 = INT8_MIN;
	static int64_t x91 = -237539LL;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t22 = -23;

    t22 = ((x89>x90)-(x91>x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MAX;
	uint16_t x94 = 3U;
	static int16_t x95 = INT16_MAX;
	static int64_t x96 = 10241067011292LL;

    t23 = ((x93>x94)-(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 9986753LLU;
	int64_t x98 = 16704574727483LL;
	int32_t x99 = -2;
	static uint8_t x100 = UINT8_MAX;

    t24 = ((x97>x98)-(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = 26596216;
	volatile int64_t x102 = INT64_MIN;
	static volatile uint8_t x103 = UINT8_MAX;
	int64_t x104 = INT64_MAX;
	static int32_t t25 = 2;

    t25 = ((x101>x102)-(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 499835;
	int8_t x106 = -1;
	int32_t t26 = -73414;

    t26 = ((x105>x106)-(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MAX;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = 0;
	int32_t t27 = -2719139;

    t27 = ((x109>x110)-(x111>x112));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	uint16_t x114 = 30U;
	int8_t x115 = INT8_MAX;
	static uint32_t x116 = 2861U;

    t28 = ((x113>x114)-(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -3378715013240LL;
	static volatile int64_t x119 = INT64_MAX;
	uint32_t x120 = 2146401U;
	int32_t t29 = -462;

    t29 = ((x117>x118)-(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x124 = 354;
	int32_t t30 = -31;

    t30 = ((x121>x122)-(x123>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x126 = UINT8_MAX;
	int32_t x128 = -1;
	volatile int32_t t31 = -3306;

    t31 = ((x125>x126)-(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MAX;
	uint8_t x130 = 6U;
	int8_t x131 = 5;
	uint16_t x132 = 863U;
	volatile int32_t t32 = -720;

    t32 = ((x129>x130)-(x131>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 24890784325873831LLU;
	static uint16_t x134 = 3U;
	uint32_t x135 = UINT32_MAX;
	int32_t t33 = 0;

    t33 = ((x133>x134)-(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 1LLU;
	static int32_t x138 = -2;
	static int32_t t34 = 24760095;

    t34 = ((x137>x138)-(x139>x140));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	uint16_t x144 = 2U;
	volatile int32_t t35 = -189387;

    t35 = ((x141>x142)-(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = 3187U;
	volatile uint64_t x146 = UINT64_MAX;
	volatile uint64_t x147 = UINT64_MAX;
	int32_t t36 = -5944;

    t36 = ((x145>x146)-(x147>x148));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = -2210554161897LL;
	int16_t x150 = -502;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = UINT64_MAX;
	int32_t t37 = -270721973;

    t37 = ((x149>x150)-(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x154 = 28U;
	static int8_t x155 = -40;
	static uint16_t x156 = 3434U;
	static volatile int32_t t38 = -6898003;

    t38 = ((x153>x154)-(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 1660;

    t39 = ((x157>x158)-(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 3086U;
	int16_t x163 = INT16_MIN;
	int64_t x164 = 0LL;
	int32_t t40 = -251407;

    t40 = ((x161>x162)-(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x167 = 1U;
	int32_t x168 = INT32_MAX;
	int32_t t41 = -14;

    t41 = ((x165>x166)-(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MAX;
	int64_t x171 = -1LL;
	int64_t x172 = -806LL;

    t42 = ((x169>x170)-(x171>x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 1U;
	int8_t x174 = INT8_MAX;
	int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 8;

    t43 = ((x173>x174)-(x175>x176));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1056LL;
	volatile int64_t x178 = -20319033LL;
	int32_t x179 = INT32_MAX;
	volatile int32_t x180 = INT32_MAX;
	int32_t t44 = -28;

    t44 = ((x177>x178)-(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	static int16_t x182 = 1;
	int32_t x184 = INT32_MIN;

    t45 = ((x181>x182)-(x183>x184));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	int32_t x188 = 581757;
	volatile int32_t t46 = -5893348;

    t46 = ((x185>x186)-(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MIN;
	int64_t x190 = -1LL;
	static volatile int16_t x191 = INT16_MIN;
	volatile int32_t x192 = 17469762;
	int32_t t47 = -81562;

    t47 = ((x189>x190)-(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = INT16_MAX;
	int16_t x194 = 9;
	int8_t x195 = INT8_MIN;
	int16_t x196 = 65;

    t48 = ((x193>x194)-(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x198 = 5U;
	uint64_t x199 = UINT64_MAX;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = -404160;

    t49 = ((x197>x198)-(x199>x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -2;
	int64_t x203 = INT64_MAX;
	volatile int64_t x204 = -405508968192LL;
	static int32_t t50 = 4364171;

    t50 = ((x201>x202)-(x203>x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 0U;
	int8_t x208 = INT8_MAX;

    t51 = ((x205>x206)-(x207>x208));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	int16_t x210 = INT16_MAX;
	int32_t x211 = -643254;
	volatile int32_t t52 = -11147;

    t52 = ((x209>x210)-(x211>x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	uint8_t x216 = UINT8_MAX;
	int32_t t53 = -1208538;

    t53 = ((x213>x214)-(x215>x216));

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x218 = -4;
	int32_t x219 = 1300175;
	int64_t x220 = INT64_MIN;

    t54 = ((x217>x218)-(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int32_t x223 = 453;
	static int32_t t55 = -1942;

    t55 = ((x221>x222)-(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = UINT32_MAX;
	static uint16_t x227 = 5U;
	int64_t x228 = 8LL;
	volatile int32_t t56 = -5701;

    t56 = ((x225>x226)-(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 1674U;
	int8_t x230 = 25;
	uint16_t x231 = 6509U;
	volatile int32_t t57 = 521913153;

    t57 = ((x229>x230)-(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x234 = -230;
	int32_t x235 = -1;
	int16_t x236 = INT16_MIN;
	int32_t t58 = -1064984219;

    t58 = ((x233>x234)-(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = INT16_MAX;
	volatile int8_t x239 = INT8_MIN;
	volatile int8_t x240 = -1;
	volatile int32_t t59 = -24982;

    t59 = ((x237>x238)-(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 11U;
	int32_t x243 = 6049;
	uint32_t x244 = UINT32_MAX;

    t60 = ((x241>x242)-(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = -1;
	volatile int32_t t61 = 44404;

    t61 = ((x245>x246)-(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = INT32_MIN;
	int32_t x251 = -1;
	int8_t x252 = 1;

    t62 = ((x249>x250)-(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	static int64_t x254 = -1LL;
	volatile uint8_t x255 = 86U;
	int8_t x256 = INT8_MIN;

    t63 = ((x253>x254)-(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 302525U;
	uint64_t x258 = UINT64_MAX;
	int8_t x259 = 2;
	int32_t t64 = 1;

    t64 = ((x257>x258)-(x259>x260));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x262 = 4019043858068199562LL;
	volatile int32_t x263 = INT32_MIN;
	int32_t x264 = INT32_MAX;
	int32_t t65 = 1;

    t65 = ((x261>x262)-(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MIN;
	static volatile int32_t t66 = 158111;

    t66 = ((x265>x266)-(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = UINT16_MAX;
	uint16_t x270 = UINT16_MAX;
	volatile int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	static int32_t t67 = 883061835;

    t67 = ((x269>x270)-(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = 5;
	static int64_t x274 = INT64_MIN;
	uint32_t x275 = 16566U;
	int32_t x276 = -1;
	int32_t t68 = 200544955;

    t68 = ((x273>x274)-(x275>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x278 = INT64_MIN;
	int64_t x279 = -13420725244360879LL;
	static volatile int32_t x280 = 4367746;

    t69 = ((x277>x278)-(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	int32_t x283 = INT32_MIN;
	volatile int32_t t70 = 173071;

    t70 = ((x281>x282)-(x283>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 741661496382784898LL;
	int8_t x286 = -1;
	uint16_t x287 = 40U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = -50610;

    t71 = ((x285>x286)-(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 2U;
	volatile int64_t x290 = -8222836900736133LL;
	uint32_t x291 = 3U;
	int8_t x292 = -9;
	volatile int32_t t72 = -10;

    t72 = ((x289>x290)-(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x293 = 42597690U;
	volatile uint32_t x294 = 22045617U;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	int32_t t73 = 141443206;

    t73 = ((x293>x294)-(x295>x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MIN;
	uint16_t x298 = 1U;
	int64_t x299 = INT64_MAX;

    t74 = ((x297>x298)-(x299>x300));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -5385LL;
	uint64_t x303 = 15LLU;
	uint8_t x304 = 119U;

    t75 = ((x301>x302)-(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x305 = UINT64_MAX;
	static volatile uint16_t x306 = 514U;
	static uint32_t x307 = UINT32_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 245303;

    t76 = ((x305>x306)-(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	static uint32_t x311 = UINT32_MAX;
	int16_t x312 = -7706;
	volatile int32_t t77 = 494231931;

    t77 = ((x309>x310)-(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x313 = 1U;
	uint8_t x315 = 6U;
	uint16_t x316 = 9814U;
	int32_t t78 = -1700654;

    t78 = ((x313>x314)-(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	uint64_t x318 = 1039309986LLU;
	int8_t x319 = 0;
	uint32_t x320 = 65625783U;
	volatile int32_t t79 = -2;

    t79 = ((x317>x318)-(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 14U;
	volatile int32_t x322 = -5;
	int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;

    t80 = ((x321>x322)-(x323>x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x326 = -1;
	int64_t x328 = INT64_MAX;
	volatile int32_t t81 = -14160;

    t81 = ((x325>x326)-(x327>x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = UINT8_MAX;
	static volatile int8_t x330 = -1;
	int8_t x331 = -47;
	volatile int32_t t82 = 1;

    t82 = ((x329>x330)-(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -1LL;
	volatile int32_t t83 = -105389274;

    t83 = ((x333>x334)-(x335>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 1418LLU;
	uint32_t x340 = 1558417U;
	int32_t t84 = -318;

    t84 = ((x337>x338)-(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = -116LL;
	uint32_t x342 = 4473U;
	volatile int8_t x343 = 1;
	int32_t t85 = -1212;

    t85 = ((x341>x342)-(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile int64_t x348 = INT64_MAX;
	static volatile int32_t t86 = -1248;

    t86 = ((x345>x346)-(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = 14;
	static int8_t x351 = INT8_MIN;
	volatile int64_t x352 = INT64_MIN;
	static int32_t t87 = 31130716;

    t87 = ((x349>x350)-(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = 0;
	int32_t x354 = INT32_MIN;
	int64_t x355 = -5817LL;
	volatile int32_t t88 = -26629594;

    t88 = ((x353>x354)-(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 772U;
	uint64_t x358 = 14726737439219LLU;
	int8_t x360 = -11;
	volatile int32_t t89 = 66;

    t89 = ((x357>x358)-(x359>x360));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint8_t x362 = 0U;
	volatile uint64_t x363 = 8435646815LLU;
	int64_t x364 = 1929274LL;
	volatile int32_t t90 = 6876836;

    t90 = ((x361>x362)-(x363>x364));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = INT16_MIN;
	int64_t x366 = 345383613566LL;
	volatile int8_t x367 = -3;
	uint16_t x368 = 3263U;
	static int32_t t91 = 7;

    t91 = ((x365>x366)-(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1;
	int16_t x370 = -1;
	volatile int8_t x371 = -1;
	volatile int32_t t92 = 1281088;

    t92 = ((x369>x370)-(x371>x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 5U;
	int16_t x374 = INT16_MAX;
	int8_t x375 = 1;
	int32_t x376 = 49330744;
	volatile int32_t t93 = -1;

    t93 = ((x373>x374)-(x375>x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 2U;
	int8_t x380 = INT8_MIN;

    t94 = ((x377>x378)-(x379>x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = 611170416183391694LLU;
	static int32_t x383 = INT32_MAX;

    t95 = ((x381>x382)-(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -20;
	int16_t x387 = 0;
	int32_t x388 = INT32_MAX;
	volatile int32_t t96 = -131331608;

    t96 = ((x385>x386)-(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x389 = INT8_MAX;
	int64_t x390 = -1LL;
	int8_t x391 = INT8_MIN;
	static volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 9306;

    t97 = ((x389>x390)-(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 2408U;
	static int16_t x394 = 1004;
	static int16_t x395 = INT16_MIN;
	int64_t x396 = 112717LL;
	volatile int32_t t98 = -13873393;

    t98 = ((x393>x394)-(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 30978U;
	volatile int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	static int32_t x400 = -6419002;
	static int32_t t99 = 1227232;

    t99 = ((x397>x398)-(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	volatile int64_t x403 = -289021410437LL;
	int32_t t100 = -7;

    t100 = ((x401>x402)-(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x405 = 18U;
	volatile uint32_t x406 = 983122U;
	int16_t x407 = -1;
	uint64_t x408 = 27LLU;
	int32_t t101 = -123;

    t101 = ((x405>x406)-(x407>x408));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -103315LL;
	int16_t x410 = INT16_MIN;
	volatile uint16_t x411 = UINT16_MAX;
	uint8_t x412 = 45U;
	int32_t t102 = 3;

    t102 = ((x409>x410)-(x411>x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int32_t x414 = 103432;
	int32_t t103 = -2070837;

    t103 = ((x413>x414)-(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MAX;
	int16_t x419 = 2752;
	static int32_t x420 = -1;

    t104 = ((x417>x418)-(x419>x420));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MAX;
	static int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = 117081577638LLU;
	volatile int32_t t105 = 1;

    t105 = ((x421>x422)-(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = 824407448064LLU;
	int16_t x426 = 318;
	static volatile uint64_t x427 = 164820167612794559LLU;
	volatile int32_t x428 = -1828;
	volatile int32_t t106 = 385781620;

    t106 = ((x425>x426)-(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = 6U;
	int16_t x431 = INT16_MIN;
	int16_t x432 = 12;

    t107 = ((x429>x430)-(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 84U;
	uint64_t x434 = 689068LLU;
	int64_t x435 = INT64_MAX;
	int16_t x436 = 2404;
	int32_t t108 = -380;

    t108 = ((x433>x434)-(x435>x436));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 7LL;
	static int8_t x438 = 9;
	uint16_t x439 = 3542U;
	volatile uint64_t x440 = UINT64_MAX;
	volatile int32_t t109 = -86;

    t109 = ((x437>x438)-(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x441 = UINT64_MAX;
	static uint16_t x442 = UINT16_MAX;
	uint16_t x444 = 8110U;
	volatile int32_t t110 = -567735047;

    t110 = ((x441>x442)-(x443>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 101LLU;
	volatile int16_t x446 = INT16_MIN;
	int16_t x447 = 376;
	static int32_t t111 = -332514692;

    t111 = ((x445>x446)-(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	int32_t x450 = -201153085;
	uint16_t x451 = UINT16_MAX;
	uint16_t x452 = UINT16_MAX;
	int32_t t112 = 728;

    t112 = ((x449>x450)-(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x455 = INT16_MAX;
	uint32_t x456 = UINT32_MAX;
	int32_t t113 = 1;

    t113 = ((x453>x454)-(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = 0;
	uint8_t x458 = 1U;
	volatile uint32_t x459 = 7U;
	int64_t x460 = INT64_MIN;
	static int32_t t114 = -1984988;

    t114 = ((x457>x458)-(x459>x460));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 170552459;
	int16_t x462 = -1;
	volatile int32_t x463 = INT32_MIN;
	int8_t x464 = INT8_MIN;
	static int32_t t115 = -344;

    t115 = ((x461>x462)-(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	uint16_t x466 = 7268U;
	int32_t x467 = INT32_MIN;
	static volatile int32_t t116 = -6;

    t116 = ((x465>x466)-(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 37U;
	uint32_t x470 = 6522U;
	uint64_t x472 = 579073667514LLU;
	int32_t t117 = 3953116;

    t117 = ((x469>x470)-(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x473 = -10;
	uint64_t x474 = 1678002LLU;
	int32_t x475 = 96167617;
	volatile int32_t t118 = 227;

    t118 = ((x473>x474)-(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = INT8_MIN;
	volatile int16_t x478 = -1;
	int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -650263491;

    t119 = ((x477>x478)-(x479>x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MAX;
	static volatile uint8_t x483 = 3U;
	uint16_t x484 = 50U;
	volatile int32_t t120 = -141478589;

    t120 = ((x481>x482)-(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	static uint32_t x486 = 7U;
	static int16_t x487 = 430;
	volatile int64_t x488 = -1LL;
	int32_t t121 = -1;

    t121 = ((x485>x486)-(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 52U;
	int8_t x490 = -6;
	volatile int32_t t122 = 0;

    t122 = ((x489>x490)-(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	uint16_t x494 = 6U;
	int32_t x495 = INT32_MIN;
	int16_t x496 = -1;
	static int32_t t123 = -413;

    t123 = ((x493>x494)-(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	uint16_t x498 = UINT16_MAX;
	static int64_t x499 = INT64_MIN;
	int32_t x500 = -1;
	int32_t t124 = -6650;

    t124 = ((x497>x498)-(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	int64_t x502 = INT64_MIN;
	uint16_t x503 = 6602U;
	int32_t t125 = -143;

    t125 = ((x501>x502)-(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 1U;
	int32_t x506 = -4031472;
	volatile int64_t x507 = INT64_MAX;
	volatile int32_t x508 = -1;
	volatile int32_t t126 = 42116;

    t126 = ((x505>x506)-(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 419119290931LL;
	volatile int32_t x510 = INT32_MIN;
	static int8_t x511 = INT8_MIN;
	uint32_t x512 = UINT32_MAX;
	volatile int32_t t127 = 2765489;

    t127 = ((x509>x510)-(x511>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x514 = 20U;
	uint16_t x515 = 5607U;
	uint32_t x516 = 1U;
	int32_t t128 = 121451;

    t128 = ((x513>x514)-(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -6;
	int32_t x518 = -54870;
	int64_t x519 = INT64_MIN;

    t129 = ((x517>x518)-(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 49;
	volatile uint32_t x522 = UINT32_MAX;
	static uint16_t x523 = 7123U;
	int8_t x524 = INT8_MIN;
	int32_t t130 = -73;

    t130 = ((x521>x522)-(x523>x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int64_t x526 = 1392125683123LL;
	uint64_t x527 = 594027664636LLU;
	static int64_t x528 = INT64_MAX;
	static int32_t t131 = -3819;

    t131 = ((x525>x526)-(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 2U;
	static int8_t x531 = -1;
	int16_t x532 = -932;
	int32_t t132 = 0;

    t132 = ((x529>x530)-(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x534 = INT32_MIN;
	int8_t x535 = INT8_MIN;
	int8_t x536 = 2;
	volatile int32_t t133 = -1995698;

    t133 = ((x533>x534)-(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = 802U;
	volatile int16_t x538 = 24;
	int32_t x539 = -21;

    t134 = ((x537>x538)-(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x541 = 408840542828214926LLU;
	volatile int64_t x542 = INT64_MIN;
	int16_t x544 = 922;
	static volatile int32_t t135 = -7501547;

    t135 = ((x541>x542)-(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = -12103613873002LL;
	int32_t x546 = 947;
	volatile int16_t x547 = 47;
	int32_t t136 = 9;

    t136 = ((x545>x546)-(x547>x548));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 2U;
	int64_t x550 = INT64_MIN;
	uint64_t x551 = UINT64_MAX;
	volatile int16_t x552 = 1188;
	int32_t t137 = 1447593;

    t137 = ((x549>x550)-(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = -28;
	uint32_t x556 = 1530749U;
	int32_t t138 = 237110;

    t138 = ((x553>x554)-(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 0LLU;
	static int16_t x558 = -141;
	int32_t x560 = 1;
	volatile int32_t t139 = 17096;

    t139 = ((x557>x558)-(x559>x560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	static volatile uint16_t x563 = 4638U;
	uint64_t x564 = 5751521LLU;
	volatile int32_t t140 = 5905304;

    t140 = ((x561>x562)-(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x565 = 4;
	int16_t x566 = -1;
	int16_t x567 = -1;

    t141 = ((x565>x566)-(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 15LLU;
	int32_t x571 = INT32_MIN;
	static int16_t x572 = INT16_MIN;
	volatile int32_t t142 = -11;

    t142 = ((x569>x570)-(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	volatile int32_t x574 = -1;
	int16_t x575 = -490;
	uint64_t x576 = 1042659956263451308LLU;
	static int32_t t143 = 0;

    t143 = ((x573>x574)-(x575>x576));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 1;
	static volatile uint8_t x578 = 14U;
	uint16_t x579 = 2U;
	int8_t x580 = INT8_MIN;

    t144 = ((x577>x578)-(x579>x580));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = -720;
	volatile int16_t x582 = -30;
	uint16_t x584 = UINT16_MAX;

    t145 = ((x581>x582)-(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x585 = UINT64_MAX;
	static volatile int8_t x586 = INT8_MAX;
	volatile int16_t x587 = 3406;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = -12212;

    t146 = ((x585>x586)-(x587>x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	uint64_t x590 = 1034726856560LLU;
	static int8_t x591 = INT8_MIN;
	uint64_t x592 = 8523363931539007LLU;
	volatile int32_t t147 = 59762883;

    t147 = ((x589>x590)-(x591>x592));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	static int8_t x594 = INT8_MIN;
	int16_t x595 = INT16_MIN;
	int16_t x596 = 34;
	volatile int32_t t148 = 0;

    t148 = ((x593>x594)-(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = 7809LLU;
	int8_t x599 = INT8_MIN;
	volatile int64_t x600 = -7152609198142LL;
	static volatile int32_t t149 = 260592;

    t149 = ((x597>x598)-(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	int16_t x602 = INT16_MAX;
	int16_t x603 = 88;
	int64_t x604 = INT64_MAX;

    t150 = ((x601>x602)-(x603>x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -1;
	int64_t x607 = -59770567061LL;
	int32_t x608 = -1;
	volatile int32_t t151 = 3;

    t151 = ((x605>x606)-(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 127;
	int64_t x610 = INT64_MAX;
	volatile int8_t x611 = 1;
	volatile int32_t x612 = -1;
	volatile int32_t t152 = -656;

    t152 = ((x609>x610)-(x611>x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x613 = UINT16_MAX;
	int8_t x614 = INT8_MIN;
	uint8_t x615 = UINT8_MAX;
	int8_t x616 = -1;
	volatile int32_t t153 = -36239;

    t153 = ((x613>x614)-(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 0;
	int32_t x618 = 996167;
	int32_t x619 = INT32_MIN;
	int16_t x620 = INT16_MIN;

    t154 = ((x617>x618)-(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = 107U;
	int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MAX;
	int32_t x624 = -206;
	static volatile int32_t t155 = 28379;

    t155 = ((x621>x622)-(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	uint32_t x627 = UINT32_MAX;
	int16_t x628 = INT16_MIN;

    t156 = ((x625>x626)-(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = 997;
	int32_t x630 = 79753;
	int64_t x631 = 450564178255LL;
	volatile uint16_t x632 = UINT16_MAX;

    t157 = ((x629>x630)-(x631>x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = INT32_MIN;
	volatile int32_t x634 = INT32_MAX;
	uint8_t x635 = UINT8_MAX;
	uint16_t x636 = 204U;
	volatile int32_t t158 = -133;

    t158 = ((x633>x634)-(x635>x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = 1;
	int32_t x638 = INT32_MIN;
	int64_t x639 = INT64_MIN;
	static int32_t t159 = -29;

    t159 = ((x637>x638)-(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 108;
	static uint32_t x642 = 500620263U;
	int64_t x643 = INT64_MIN;

    t160 = ((x641>x642)-(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = -1;
	uint16_t x646 = 417U;
	int16_t x647 = 62;
	int16_t x648 = -1;
	int32_t t161 = -6;

    t161 = ((x645>x646)-(x647>x648));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x649 = INT64_MAX;
	uint32_t x650 = UINT32_MAX;
	static volatile int32_t x652 = INT32_MIN;

    t162 = ((x649>x650)-(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -2112140;
	volatile int8_t x656 = 0;
	static int32_t t163 = -373872165;

    t163 = ((x653>x654)-(x655>x656));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int32_t x658 = 1222163;
	uint16_t x659 = 3U;
	int16_t x660 = -1615;
	volatile int32_t t164 = -2075;

    t164 = ((x657>x658)-(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = 2LL;
	int64_t x662 = 776344131514110LL;
	int8_t x664 = INT8_MIN;
	volatile int32_t t165 = 13650495;

    t165 = ((x661>x662)-(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = INT32_MAX;
	int32_t x668 = -427974;
	volatile int32_t t166 = -2;

    t166 = ((x665>x666)-(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = UINT32_MAX;
	volatile int32_t t167 = -28660;

    t167 = ((x669>x670)-(x671>x672));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int8_t x674 = 0;
	static int64_t x675 = -11671749LL;
	static volatile int32_t t168 = -4;

    t168 = ((x673>x674)-(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MAX;
	static int32_t x678 = 176106448;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t169 = 430;

    t169 = ((x677>x678)-(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MAX;
	int8_t x682 = 0;
	int32_t x683 = INT32_MAX;
	static volatile int32_t x684 = 884762418;
	volatile int32_t t170 = -124552501;

    t170 = ((x681>x682)-(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MAX;
	int32_t x686 = -130507639;
	uint16_t x687 = UINT16_MAX;
	uint64_t x688 = 383998573394179LLU;
	int32_t t171 = 102568;

    t171 = ((x685>x686)-(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	static int8_t x690 = INT8_MIN;
	int16_t x692 = -1;
	int32_t t172 = 0;

    t172 = ((x689>x690)-(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = INT64_MAX;
	int32_t x695 = -1;
	static int64_t x696 = INT64_MIN;
	int32_t t173 = -23783440;

    t173 = ((x693>x694)-(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = -1;
	int8_t x698 = INT8_MAX;
	int64_t x700 = INT64_MIN;
	static int32_t t174 = 407160964;

    t174 = ((x697>x698)-(x699>x700));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 56949384LL;
	volatile int8_t x703 = 6;
	int32_t t175 = 439932;

    t175 = ((x701>x702)-(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x705 = 5;
	static volatile uint8_t x707 = 113U;
	volatile int16_t x708 = -1;
	volatile int32_t t176 = 646004;

    t176 = ((x705>x706)-(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -36;
	int16_t x710 = INT16_MAX;
	uint8_t x711 = 7U;
	int16_t x712 = INT16_MAX;
	volatile int32_t t177 = -2372;

    t177 = ((x709>x710)-(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MIN;
	static uint64_t x715 = 4363LLU;
	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = 174;

    t178 = ((x713>x714)-(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = INT16_MIN;
	int64_t x718 = INT64_MIN;
	volatile int32_t x719 = INT32_MIN;
	volatile uint64_t x720 = 591939LLU;
	int32_t t179 = 2;

    t179 = ((x717>x718)-(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 13441821007LLU;
	int32_t x722 = INT32_MIN;
	static volatile int32_t x723 = -11;
	volatile uint8_t x724 = 86U;
	int32_t t180 = -4;

    t180 = ((x721>x722)-(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = -125260811LL;
	int32_t x727 = -1;
	static int32_t x728 = -15640434;
	int32_t t181 = 17;

    t181 = ((x725>x726)-(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x731 = INT8_MAX;
	uint8_t x732 = 6U;

    t182 = ((x729>x730)-(x731>x732));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = INT8_MIN;
	volatile int8_t x735 = -1;
	int32_t t183 = 31691;

    t183 = ((x733>x734)-(x735>x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = INT32_MIN;
	volatile int32_t x738 = -26486;
	int32_t x739 = INT32_MIN;
	int32_t x740 = -7123;
	static volatile int32_t t184 = 36216;

    t184 = ((x737>x738)-(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -7;
	static uint64_t x742 = 3236029LLU;
	int32_t x743 = INT32_MAX;
	int32_t t185 = -591790;

    t185 = ((x741>x742)-(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 63752353481865246LLU;
	static int16_t x747 = INT16_MIN;
	uint8_t x748 = 28U;

    t186 = ((x745>x746)-(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	uint8_t x751 = 32U;
	uint8_t x752 = UINT8_MAX;
	static volatile int32_t t187 = -3851;

    t187 = ((x749>x750)-(x751>x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 415LLU;
	int8_t x754 = -1;
	int16_t x755 = -1;
	int32_t x756 = -1;
	int32_t t188 = -139;

    t188 = ((x753>x754)-(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = -1;
	volatile uint32_t x759 = UINT32_MAX;
	volatile uint64_t x760 = 23429342LLU;
	static volatile int32_t t189 = 0;

    t189 = ((x757>x758)-(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -939;
	int64_t x762 = INT64_MIN;
	volatile int16_t x764 = 0;
	int32_t t190 = 602;

    t190 = ((x761>x762)-(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -1;
	int8_t x766 = -12;
	uint16_t x767 = 309U;
	volatile uint16_t x768 = 3U;

    t191 = ((x765>x766)-(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	int32_t x770 = INT32_MIN;
	uint16_t x771 = 129U;
	uint8_t x772 = 0U;
	int32_t t192 = 516267635;

    t192 = ((x769>x770)-(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	uint32_t x774 = 53U;
	volatile int16_t x775 = 5835;
	int16_t x776 = -1;

    t193 = ((x773>x774)-(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = INT16_MIN;
	volatile uint8_t x779 = 111U;
	int32_t t194 = -7;

    t194 = ((x777>x778)-(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint8_t x782 = 25U;
	static int64_t x784 = INT64_MIN;
	int32_t t195 = 921595568;

    t195 = ((x781>x782)-(x783>x784));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile uint64_t x786 = 7922639663794253LLU;
	static uint8_t x787 = 0U;
	uint16_t x788 = UINT16_MAX;
	int32_t t196 = -862608175;

    t196 = ((x785>x786)-(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	int64_t x791 = -2840LL;
	volatile int64_t x792 = INT64_MIN;
	int32_t t197 = -479187965;

    t197 = ((x789>x790)-(x791>x792));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 0;
	static uint8_t x795 = 28U;
	uint8_t x796 = 4U;

    t198 = ((x793>x794)-(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x800 = 336367;
	int32_t t199 = 1615085;

    t199 = ((x797>x798)-(x799>x800));

    if (t199 != -1) { NG(); } else { ; }
	
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

