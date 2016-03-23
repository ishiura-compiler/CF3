
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

static volatile uint16_t x2 = UINT16_MAX;
volatile uint64_t x9 = UINT64_MAX;
static int8_t x14 = INT8_MIN;
volatile int32_t t3 = 190511960;
static int16_t x24 = INT16_MIN;
static int64_t x25 = 64321129349LL;
uint64_t x26 = 915258166154LLU;
static volatile int32_t t6 = -51779;
static volatile int32_t x43 = INT32_MIN;
int64_t x50 = INT64_MIN;
int16_t x53 = INT16_MAX;
volatile uint64_t x57 = UINT64_MAX;
uint16_t x58 = 13442U;
int32_t x64 = 32;
uint32_t x66 = UINT32_MAX;
int32_t t15 = -12771;
int8_t x69 = -7;
uint64_t x70 = 405893420815LLU;
int32_t t16 = -1;
uint32_t x74 = 1067U;
int32_t x82 = 0;
uint16_t x104 = 2641U;
int32_t t21 = 62086839;
uint32_t x113 = 2353030U;
int32_t t22 = 1;
uint64_t x119 = 8205485607LLU;
static int8_t x122 = INT8_MIN;
int32_t x123 = INT32_MIN;
int32_t t24 = -27825762;
static int16_t x132 = INT16_MIN;
uint16_t x138 = UINT16_MAX;
int32_t t27 = 114290;
int64_t x142 = INT64_MIN;
int8_t x148 = 9;
int64_t x149 = INT64_MAX;
uint16_t x151 = 14819U;
int64_t x163 = -1LL;
int16_t x168 = INT16_MAX;
volatile int32_t t33 = 999402842;
static volatile uint8_t x173 = UINT8_MAX;
int32_t x174 = 374114845;
uint8_t x175 = UINT8_MAX;
uint8_t x181 = 88U;
static uint16_t x189 = UINT16_MAX;
uint32_t x191 = UINT32_MAX;
volatile uint32_t t38 = 0U;
int8_t x202 = INT8_MIN;
int64_t t41 = 113818289404950920LL;
int16_t x215 = -1822;
static uint64_t x218 = 17062647927LLU;
int8_t x219 = INT8_MAX;
volatile int32_t t43 = 2075;
uint32_t x223 = 29U;
int64_t x225 = 46519465151LL;
int8_t x231 = -4;
int32_t t46 = 460;
int64_t t47 = -2771558968949280LL;
static int32_t x241 = -1;
uint16_t x244 = UINT16_MAX;
int32_t x247 = INT32_MAX;
int32_t x251 = INT32_MIN;
uint8_t x263 = 17U;
int8_t x269 = 3;
uint64_t x278 = 42524LLU;
volatile int32_t t57 = 2242;
static int8_t x283 = 5;
uint32_t x296 = 5U;
uint16_t x297 = 16665U;
int32_t x298 = -5587247;
int16_t x301 = INT16_MIN;
volatile int64_t x303 = INT64_MIN;
int32_t x306 = -1152255;
uint32_t x309 = 3575341U;
volatile int16_t x310 = INT16_MAX;
uint8_t x311 = 4U;
static int64_t x315 = -547038763734947LL;
volatile int32_t t66 = 5713778;
int8_t x333 = INT8_MIN;
int16_t x340 = INT16_MAX;
static volatile int32_t t71 = 161755364;
volatile int64_t x348 = INT64_MIN;
static volatile int64_t t73 = 524991516135LL;
volatile uint64_t t75 = 43368LLU;
int16_t x357 = INT16_MIN;
int8_t x358 = INT8_MIN;
static int32_t x362 = INT32_MAX;
int16_t x366 = INT16_MIN;
uint32_t x372 = UINT32_MAX;
uint16_t x387 = 1284U;
static int8_t x395 = INT8_MIN;
volatile int32_t t83 = 1;
uint64_t x398 = 28906728497694214LLU;
volatile int32_t t85 = -73557;
static volatile int32_t x412 = -1;
static int32_t t90 = -2011592;
int16_t x435 = -1;
volatile int32_t t91 = 13675;
int32_t x437 = -16;
volatile uint64_t t92 = 45LLU;
uint8_t x444 = 12U;
int8_t x445 = INT8_MIN;
int16_t x448 = 4648;
int32_t t94 = 1;
volatile int64_t x456 = INT64_MIN;
int64_t x472 = INT64_MAX;
static volatile int64_t t98 = 273342314221262334LL;
uint64_t x474 = 789923542524308357LLU;
int16_t x517 = -3;
volatile int16_t x518 = 2;
uint8_t x521 = UINT8_MAX;
int16_t x525 = -141;
static int32_t x527 = INT32_MIN;
volatile uint64_t t109 = 33728672918LLU;
int8_t x529 = INT8_MAX;
int32_t x531 = INT32_MIN;
uint16_t x537 = UINT16_MAX;
int32_t x538 = 4;
static int32_t x547 = 1;
int32_t t114 = -225;
static volatile int8_t x553 = INT8_MIN;
uint32_t x554 = 410736398U;
int32_t t116 = 2404444;
uint64_t x565 = UINT64_MAX;
int16_t x572 = -6588;
int32_t x581 = 6;
int16_t x585 = 1455;
int8_t x591 = INT8_MAX;
int64_t t122 = 0LL;
uint32_t x593 = UINT32_MAX;
volatile int32_t x594 = INT32_MIN;
int64_t x608 = INT64_MIN;
int64_t t126 = 3313LL;
int8_t x615 = -1;
int8_t x616 = -1;
static uint16_t x621 = 132U;
int32_t x622 = INT32_MIN;
int32_t t130 = -59025270;
int32_t x637 = -1;
int64_t x638 = -25LL;
uint16_t x647 = 0U;
int8_t x648 = -3;
volatile int32_t x650 = INT32_MAX;
int64_t x655 = 208417LL;
int32_t t134 = 11;
uint8_t x663 = UINT8_MAX;
volatile int64_t t136 = 44164953353023LL;
int32_t x670 = 403955900;
int32_t t138 = 57;
volatile int16_t x681 = INT16_MAX;
volatile int16_t x687 = INT16_MAX;
static int8_t x691 = 45;
int32_t x695 = -1;
volatile int32_t t144 = -46569;
volatile int8_t x702 = -1;
uint64_t t146 = 17657117242LLU;
static int32_t t148 = -123;
volatile int64_t x715 = 18915LL;
int16_t x727 = -1;
static volatile int32_t t152 = -2;
int8_t x738 = -1;
volatile uint32_t t154 = 882U;
int64_t x742 = -1LL;
static int16_t x752 = 2;
volatile int32_t x753 = INT32_MAX;
int64_t x754 = INT64_MIN;
volatile int64_t t158 = 86461127LL;
static int64_t x761 = INT64_MIN;
uint64_t x762 = 55125244527168LLU;
int8_t x765 = INT8_MIN;
int8_t x767 = 1;
volatile int32_t x768 = -4;
volatile int32_t t162 = 5871210;
uint16_t x774 = UINT16_MAX;
uint64_t x777 = UINT64_MAX;
volatile int32_t x778 = -100;
uint8_t x780 = UINT8_MAX;
volatile int8_t x785 = INT8_MIN;
static uint8_t x787 = 1U;
int32_t t166 = -50447195;
int32_t x797 = INT32_MAX;
static int64_t x810 = 4760243LL;
uint16_t x811 = 102U;
int32_t t172 = -216009143;
int32_t t176 = 1722;
volatile int32_t x829 = INT32_MIN;
int16_t x831 = INT16_MIN;
uint64_t x844 = UINT64_MAX;
volatile int32_t x848 = 470250;
int32_t x850 = INT32_MIN;
volatile int32_t t182 = -8847;
volatile uint8_t x861 = UINT8_MAX;
int16_t x862 = 3138;
static uint8_t x863 = 3U;
uint64_t x866 = 95685125882LLU;
int32_t x874 = -1;
volatile int32_t x875 = INT32_MIN;
int8_t x878 = INT8_MIN;
int32_t t188 = -63435149;
int32_t t190 = 0;
static volatile int8_t x890 = INT8_MAX;
uint16_t x891 = 2U;
uint16_t x896 = UINT16_MAX;
uint64_t x901 = 27494611369294LLU;
int8_t x907 = INT8_MIN;
uint8_t x922 = 2U;
volatile int64_t t198 = 450511797493795106LL;
int16_t x928 = INT16_MIN;


void f0(void) {
    	uint8_t x1 = 0U;
	static uint16_t x3 = 3111U;
	uint64_t x4 = 749215458279LLU;
	static volatile uint64_t t0 = 7402LLU;

    t0 = (((x1+x2)!=x3)%x4);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = -991;
	static uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 53523076452271LLU;

    t1 = (((x5+x6)!=x7)%x8);

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint16_t x12 = 7539U;
	int32_t t2 = -148448702;

    t2 = (((x9+x10)!=x11)%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int16_t x15 = -11141;
	static int8_t x16 = 1;

    t3 = (((x13+x14)!=x15)%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = -1LL;
	static uint64_t x22 = 5LLU;
	static int32_t x23 = -37327;
	volatile int32_t t4 = 1;

    t4 = (((x21+x22)!=x23)%x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x27 = -1;
	static volatile int64_t x28 = INT64_MIN;
	volatile int64_t t5 = -111064LL;

    t5 = (((x25+x26)!=x27)%x28);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x29 = UINT16_MAX;
	static int8_t x30 = 1;
	uint8_t x31 = UINT8_MAX;
	volatile uint8_t x32 = 21U;

    t6 = (((x29+x30)!=x31)%x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	uint8_t x34 = 1U;
	uint8_t x35 = UINT8_MAX;
	static volatile int16_t x36 = -1;
	volatile int32_t t7 = 0;

    t7 = (((x33+x34)!=x35)%x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	static volatile int32_t x39 = INT32_MIN;
	volatile uint32_t x40 = 355894271U;
	static volatile uint32_t t8 = 67405894U;

    t8 = (((x37+x38)!=x39)%x40);

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -44698229;
	int8_t x42 = INT8_MAX;
	uint32_t x44 = 779688128U;
	volatile uint32_t t9 = 47U;

    t9 = (((x41+x42)!=x43)%x44);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x45 = UINT8_MAX;
	static int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = -1;
	volatile int32_t t10 = -37094179;

    t10 = (((x45+x46)!=x47)%x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = UINT16_MAX;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MAX;
	int32_t t11 = 72271;

    t11 = (((x49+x50)!=x51)%x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = 0;
	int64_t x55 = INT64_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t12 = 1106134736752285772LL;

    t12 = (((x53+x54)!=x55)%x56);

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x59 = 27707U;
	volatile int32_t x60 = -1;
	int32_t t13 = -10961;

    t13 = (((x57+x58)!=x59)%x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x61 = UINT64_MAX;
	static volatile uint8_t x62 = 6U;
	static int64_t x63 = -1LL;
	static volatile int32_t t14 = 238160;

    t14 = (((x61+x62)!=x63)%x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 43470281LLU;
	int32_t x67 = -999525491;
	int16_t x68 = -78;

    t15 = (((x65+x66)!=x67)%x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x71 = INT8_MAX;
	volatile uint8_t x72 = 55U;

    t16 = (((x69+x70)!=x71)%x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	static uint16_t x75 = UINT16_MAX;
	static volatile int32_t x76 = INT32_MIN;
	volatile int32_t t17 = 4816192;

    t17 = (((x73+x74)!=x75)%x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -15LL;
	int64_t x83 = -1LL;
	uint64_t x84 = 2971857042112LLU;
	volatile uint64_t t18 = 477858970131132LLU;

    t18 = (((x81+x82)!=x83)%x84);

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x93 = 2663591U;
	uint8_t x94 = 8U;
	uint8_t x95 = 10U;
	int16_t x96 = INT16_MIN;
	int32_t t19 = -113021;

    t19 = (((x93+x94)!=x95)%x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x101 = 7U;
	static int16_t x102 = 1176;
	static uint32_t x103 = 2381U;
	volatile int32_t t20 = -14;

    t20 = (((x101+x102)!=x103)%x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x109 = 514U;
	uint32_t x110 = 494514U;
	volatile int64_t x111 = INT64_MIN;
	static int32_t x112 = INT32_MIN;

    t21 = (((x109+x110)!=x111)%x112);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x114 = INT32_MAX;
	int16_t x115 = 2;
	int32_t x116 = INT32_MAX;

    t22 = (((x113+x114)!=x115)%x116);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x117 = 132531879U;
	int16_t x118 = -901;
	static volatile uint64_t x120 = 384717637902LLU;
	static uint64_t t23 = 11551LLU;

    t23 = (((x117+x118)!=x119)%x120);

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x121 = INT16_MAX;
	uint8_t x124 = UINT8_MAX;

    t24 = (((x121+x122)!=x123)%x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x125 = INT8_MIN;
	int64_t x126 = -25606LL;
	static uint64_t x127 = 3717687204897483LLU;
	int8_t x128 = -1;
	volatile int32_t t25 = 502983;

    t25 = (((x125+x126)!=x127)%x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x129 = UINT32_MAX;
	volatile int8_t x130 = -15;
	uint64_t x131 = UINT64_MAX;
	static volatile int32_t t26 = 8504;

    t26 = (((x129+x130)!=x131)%x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -1;
	int64_t x139 = INT64_MAX;
	static int16_t x140 = INT16_MIN;

    t27 = (((x137+x138)!=x139)%x140);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x141 = 11958U;
	int8_t x143 = INT8_MAX;
	static volatile int64_t x144 = -1LL;
	int64_t t28 = -2719LL;

    t28 = (((x141+x142)!=x143)%x144);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile int32_t t29 = -2713931;

    t29 = (((x145+x146)!=x147)%x148);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x150 = -1;
	int16_t x152 = -1;
	int32_t t30 = 0;

    t30 = (((x149+x150)!=x151)%x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x153 = 166;
	volatile int64_t x154 = -7LL;
	int64_t x155 = -7413146LL;
	static volatile int16_t x156 = -1;
	volatile int32_t t31 = 185991301;

    t31 = (((x153+x154)!=x155)%x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x161 = 57U;
	uint16_t x162 = UINT16_MAX;
	int16_t x164 = -1;
	static volatile int32_t t32 = 4082762;

    t32 = (((x161+x162)!=x163)%x164);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x165 = INT64_MIN;
	uint16_t x166 = 1453U;
	volatile int16_t x167 = -139;

    t33 = (((x165+x166)!=x167)%x168);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = 81;
	int32_t x170 = INT32_MIN;
	volatile int16_t x171 = 0;
	int64_t x172 = INT64_MAX;
	volatile int64_t t34 = -3692LL;

    t34 = (((x169+x170)!=x171)%x172);

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x176 = INT16_MIN;
	volatile int32_t t35 = 156116385;

    t35 = (((x173+x174)!=x175)%x176);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x182 = 7029339356736416859LLU;
	volatile int16_t x183 = -1;
	uint8_t x184 = 2U;
	int32_t t36 = -13409;

    t36 = (((x181+x182)!=x183)%x184);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = INT16_MAX;
	int32_t x186 = 403;
	int16_t x187 = INT16_MAX;
	static int64_t x188 = 89618770LL;
	volatile int64_t t37 = 378735677324424988LL;

    t37 = (((x185+x186)!=x187)%x188);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x190 = 279650;
	static uint32_t x192 = 18U;

    t38 = (((x189+x190)!=x191)%x192);

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x193 = INT64_MAX;
	volatile int8_t x194 = -1;
	volatile uint8_t x195 = 17U;
	int8_t x196 = 5;
	static volatile int32_t t39 = 4015;

    t39 = (((x193+x194)!=x195)%x196);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x201 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	static int32_t t40 = 382866287;

    t40 = (((x201+x202)!=x203)%x204);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x209 = 2U;
	int16_t x210 = INT16_MIN;
	static uint8_t x211 = 0U;
	volatile int64_t x212 = INT64_MIN;

    t41 = (((x209+x210)!=x211)%x212);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x213 = 0U;
	int8_t x214 = INT8_MIN;
	int16_t x216 = -1;
	int32_t t42 = 111;

    t42 = (((x213+x214)!=x215)%x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x217 = 1142933208415418LL;
	int32_t x220 = INT32_MIN;

    t43 = (((x217+x218)!=x219)%x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MIN;
	int32_t x224 = 178;
	volatile int32_t t44 = -875459;

    t44 = (((x221+x222)!=x223)%x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x226 = INT16_MAX;
	int8_t x227 = INT8_MAX;
	volatile uint16_t x228 = UINT16_MAX;
	int32_t t45 = -2630;

    t45 = (((x225+x226)!=x227)%x228);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x229 = INT8_MAX;
	static int16_t x230 = INT16_MIN;
	int32_t x232 = -1;

    t46 = (((x229+x230)!=x231)%x232);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x233 = 50881319LLU;
	uint8_t x234 = 31U;
	volatile uint16_t x235 = 531U;
	static int64_t x236 = INT64_MAX;

    t47 = (((x233+x234)!=x235)%x236);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x237 = 12;
	int16_t x238 = INT16_MIN;
	static volatile int16_t x239 = INT16_MIN;
	volatile int8_t x240 = -1;
	int32_t t48 = -7316;

    t48 = (((x237+x238)!=x239)%x240);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x242 = -1;
	int32_t x243 = 1978;
	volatile int32_t t49 = 995860;

    t49 = (((x241+x242)!=x243)%x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x245 = INT8_MIN;
	uint64_t x246 = UINT64_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t50 = -325;

    t50 = (((x245+x246)!=x247)%x248);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x249 = -47;
	int8_t x250 = 30;
	int16_t x252 = INT16_MIN;
	static int32_t t51 = -85061;

    t51 = (((x249+x250)!=x251)%x252);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x257 = 48;
	static uint64_t x258 = UINT64_MAX;
	uint8_t x259 = 85U;
	int16_t x260 = 252;
	int32_t t52 = 9;

    t52 = (((x257+x258)!=x259)%x260);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = 14;
	volatile int8_t x262 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	int64_t t53 = -3487850396823664LL;

    t53 = (((x261+x262)!=x263)%x264);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x265 = 272LL;
	static uint8_t x266 = 0U;
	int32_t x267 = -1;
	static uint32_t x268 = 2U;
	static volatile uint32_t t54 = 6417U;

    t54 = (((x265+x266)!=x267)%x268);

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x270 = UINT32_MAX;
	int8_t x271 = 1;
	volatile uint16_t x272 = UINT16_MAX;
	int32_t t55 = -1069584981;

    t55 = (((x269+x270)!=x271)%x272);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x273 = INT32_MIN;
	volatile int64_t x274 = -1LL;
	static int8_t x275 = -1;
	uint8_t x276 = 2U;
	static int32_t t56 = 246;

    t56 = (((x273+x274)!=x275)%x276);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x277 = INT16_MIN;
	static uint8_t x279 = UINT8_MAX;
	int32_t x280 = -1;

    t57 = (((x277+x278)!=x279)%x280);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x281 = INT64_MIN;
	int16_t x282 = 1431;
	int16_t x284 = -1;
	int32_t t58 = 69304;

    t58 = (((x281+x282)!=x283)%x284);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x285 = 113U;
	volatile uint16_t x286 = 2U;
	int32_t x287 = INT32_MAX;
	volatile int8_t x288 = INT8_MAX;
	int32_t t59 = -184751222;

    t59 = (((x285+x286)!=x287)%x288);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x289 = INT32_MIN;
	int64_t x290 = -615162859707348308LL;
	static uint16_t x291 = 2714U;
	volatile int8_t x292 = INT8_MAX;
	int32_t t60 = 7904862;

    t60 = (((x289+x290)!=x291)%x292);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x293 = -190;
	volatile uint64_t x294 = 86699222851LLU;
	uint32_t x295 = UINT32_MAX;
	static uint32_t t61 = 0U;

    t61 = (((x293+x294)!=x295)%x296);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x299 = INT16_MIN;
	int64_t x300 = 448474991859801296LL;
	volatile int64_t t62 = -8406898LL;

    t62 = (((x297+x298)!=x299)%x300);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x302 = 227652518LLU;
	int8_t x304 = 16;
	static int32_t t63 = 29731376;

    t63 = (((x301+x302)!=x303)%x304);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	static uint64_t x308 = 973824LLU;
	volatile uint64_t t64 = 4117670658LLU;

    t64 = (((x305+x306)!=x307)%x308);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x312 = -157072144802827037LL;
	int64_t t65 = -118320LL;

    t65 = (((x309+x310)!=x311)%x312);

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x313 = -1;
	volatile int8_t x314 = 8;
	uint16_t x316 = 10U;

    t66 = (((x313+x314)!=x315)%x316);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x321 = -1LL;
	volatile int32_t x322 = INT32_MIN;
	uint8_t x323 = 3U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t67 = -50LL;

    t67 = (((x321+x322)!=x323)%x324);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	static volatile int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t68 = -30041LL;

    t68 = (((x325+x326)!=x327)%x328);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x329 = 6172315U;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 7586U;
	uint64_t x332 = 19879037782LLU;
	uint64_t t69 = 58794808543LLU;

    t69 = (((x329+x330)!=x331)%x332);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x334 = -30;
	volatile int8_t x335 = INT8_MIN;
	static int64_t x336 = INT64_MAX;
	int64_t t70 = 531662633558683LL;

    t70 = (((x333+x334)!=x335)%x336);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x337 = 1433604LLU;
	static uint16_t x338 = UINT16_MAX;
	static uint16_t x339 = UINT16_MAX;

    t71 = (((x337+x338)!=x339)%x340);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x341 = INT8_MAX;
	int32_t x342 = -1;
	static volatile int16_t x343 = INT16_MIN;
	int32_t x344 = -24818;
	static int32_t t72 = 15364;

    t72 = (((x341+x342)!=x343)%x344);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x345 = -1LL;
	static int64_t x346 = -23LL;
	int32_t x347 = INT32_MAX;

    t73 = (((x345+x346)!=x347)%x348);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x349 = 1;
	uint8_t x350 = 16U;
	volatile uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t74 = -537;

    t74 = (((x349+x350)!=x351)%x352);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x353 = INT8_MIN;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MAX;
	static uint64_t x356 = UINT64_MAX;

    t75 = (((x353+x354)!=x355)%x356);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x359 = INT16_MIN;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t76 = -1;

    t76 = (((x357+x358)!=x359)%x360);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x361 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	static int8_t x364 = INT8_MAX;
	volatile int32_t t77 = -35998104;

    t77 = (((x361+x362)!=x363)%x364);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x365 = INT16_MAX;
	volatile uint8_t x367 = 0U;
	int16_t x368 = INT16_MIN;
	int32_t t78 = -1;

    t78 = (((x365+x366)!=x367)%x368);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x369 = UINT16_MAX;
	static volatile uint32_t x370 = 62916243U;
	int64_t x371 = 286170464266254LL;
	uint32_t t79 = 0U;

    t79 = (((x369+x370)!=x371)%x372);

    if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x373 = -225162019LL;
	uint16_t x374 = 4321U;
	volatile int64_t x375 = INT64_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t80 = 7911852;

    t80 = (((x373+x374)!=x375)%x376);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x385 = INT16_MIN;
	volatile uint64_t x386 = 135450972241246LLU;
	static uint8_t x388 = UINT8_MAX;
	static int32_t t81 = -4122946;

    t81 = (((x385+x386)!=x387)%x388);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x389 = -522LL;
	volatile int16_t x390 = INT16_MIN;
	static volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t82 = 119;

    t82 = (((x389+x390)!=x391)%x392);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x393 = UINT8_MAX;
	static int32_t x394 = -539;
	static int8_t x396 = INT8_MAX;

    t83 = (((x393+x394)!=x395)%x396);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x397 = 1U;
	uint64_t x399 = 1LLU;
	volatile uint32_t x400 = 103801031U;
	uint32_t t84 = 9312555U;

    t84 = (((x397+x398)!=x399)%x400);

    if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x401 = 1688U;
	int64_t x402 = 287441387999007961LL;
	int8_t x403 = 0;
	int16_t x404 = INT16_MIN;

    t85 = (((x401+x402)!=x403)%x404);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x405 = -1;
	volatile int64_t x406 = -7966047731013LL;
	uint8_t x407 = 0U;
	static int16_t x408 = 18;
	volatile int32_t t86 = 29078;

    t86 = (((x405+x406)!=x407)%x408);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x409 = 19;
	int64_t x410 = 8520422622989881LL;
	int64_t x411 = INT64_MIN;
	volatile int32_t t87 = -14;

    t87 = (((x409+x410)!=x411)%x412);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x417 = 85;
	uint16_t x418 = 151U;
	uint8_t x419 = 16U;
	static int16_t x420 = 578;
	volatile int32_t t88 = 1766550;

    t88 = (((x417+x418)!=x419)%x420);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x421 = -9475;
	uint64_t x422 = UINT64_MAX;
	int64_t x423 = -3732726492LL;
	int8_t x424 = INT8_MAX;
	volatile int32_t t89 = -555000113;

    t89 = (((x421+x422)!=x423)%x424);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x429 = 9718U;
	int16_t x430 = -181;
	int8_t x431 = -1;
	uint8_t x432 = 1U;

    t90 = (((x429+x430)!=x431)%x432);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x433 = 18491LL;
	volatile uint64_t x434 = UINT64_MAX;
	int8_t x436 = -1;

    t91 = (((x433+x434)!=x435)%x436);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x438 = UINT32_MAX;
	int64_t x439 = -1717915461394LL;
	uint64_t x440 = 94LLU;

    t92 = (((x437+x438)!=x439)%x440);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x441 = -1;
	static uint32_t x442 = UINT32_MAX;
	int8_t x443 = -1;
	volatile int32_t t93 = -37859168;

    t93 = (((x441+x442)!=x443)%x444);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x446 = INT16_MIN;
	static int8_t x447 = 43;

    t94 = (((x445+x446)!=x447)%x448);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x453 = -1LL;
	int32_t x454 = 477;
	int16_t x455 = INT16_MIN;
	int64_t t95 = -771422491218LL;

    t95 = (((x453+x454)!=x455)%x456);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x457 = -1;
	int32_t x458 = 30153;
	int16_t x459 = INT16_MIN;
	int8_t x460 = -1;
	int32_t t96 = -965605;

    t96 = (((x457+x458)!=x459)%x460);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x465 = INT16_MAX;
	int8_t x466 = INT8_MAX;
	static int32_t x467 = -240;
	int64_t x468 = -4487548LL;
	volatile int64_t t97 = 3540653985891719LL;

    t97 = (((x465+x466)!=x467)%x468);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = INT16_MIN;
	uint64_t x470 = UINT64_MAX;
	volatile int16_t x471 = INT16_MIN;

    t98 = (((x469+x470)!=x471)%x472);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x473 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t99 = 841864776;

    t99 = (((x473+x474)!=x475)%x476);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x477 = -1;
	int8_t x478 = INT8_MAX;
	static uint8_t x479 = UINT8_MAX;
	int64_t x480 = -163LL;
	volatile int64_t t100 = 31162444916LL;

    t100 = (((x477+x478)!=x479)%x480);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x481 = -1LL;
	int32_t x482 = INT32_MIN;
	int32_t x483 = -649874;
	int8_t x484 = INT8_MIN;
	volatile int32_t t101 = -25037;

    t101 = (((x481+x482)!=x483)%x484);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x485 = -1;
	static int32_t x486 = -68163;
	int64_t x487 = 61546218396164795LL;
	static int16_t x488 = -556;
	int32_t t102 = -75;

    t102 = (((x485+x486)!=x487)%x488);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x493 = INT16_MIN;
	int8_t x494 = 5;
	volatile int64_t x495 = INT64_MIN;
	static int64_t x496 = INT64_MAX;
	int64_t t103 = 20LL;

    t103 = (((x493+x494)!=x495)%x496);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x497 = 3644220120LLU;
	volatile int16_t x498 = -1;
	int8_t x499 = 6;
	volatile uint64_t x500 = 64736LLU;
	volatile uint64_t t104 = 1LLU;

    t104 = (((x497+x498)!=x499)%x500);

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = -1;
	int64_t x502 = 55245571143763LL;
	uint64_t x503 = 3328618766481713157LLU;
	static int64_t x504 = INT64_MIN;
	int64_t t105 = 7036598740097LL;

    t105 = (((x501+x502)!=x503)%x504);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x505 = 208166061LLU;
	volatile int8_t x506 = 22;
	int64_t x507 = -4025568LL;
	volatile uint8_t x508 = 5U;
	static volatile int32_t t106 = 124997;

    t106 = (((x505+x506)!=x507)%x508);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x519 = -276476854206265LL;
	uint32_t x520 = UINT32_MAX;
	volatile uint32_t t107 = 793U;

    t107 = (((x517+x518)!=x519)%x520);

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x522 = INT8_MAX;
	int8_t x523 = -42;
	volatile int16_t x524 = -3021;
	volatile int32_t t108 = -2719;

    t108 = (((x521+x522)!=x523)%x524);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x526 = INT32_MAX;
	uint64_t x528 = 237726LLU;

    t109 = (((x525+x526)!=x527)%x528);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x530 = -10;
	int64_t x532 = -1LL;
	int64_t t110 = -680800903990777LL;

    t110 = (((x529+x530)!=x531)%x532);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x539 = 0;
	static int64_t x540 = INT64_MIN;
	int64_t t111 = -6LL;

    t111 = (((x537+x538)!=x539)%x540);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x541 = 0;
	static int8_t x542 = INT8_MAX;
	int32_t x543 = INT32_MIN;
	int64_t x544 = -2185549LL;
	int64_t t112 = -1LL;

    t112 = (((x541+x542)!=x543)%x544);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x546 = -1;
	static int64_t x548 = 3572442060098LL;
	int64_t t113 = 118808389187LL;

    t113 = (((x545+x546)!=x547)%x548);

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x549 = -114215897;
	uint8_t x550 = UINT8_MAX;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = INT16_MAX;

    t114 = (((x549+x550)!=x551)%x552);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x555 = INT64_MIN;
	int64_t x556 = -1LL;
	int64_t t115 = 299470237956542LL;

    t115 = (((x553+x554)!=x555)%x556);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x557 = INT8_MIN;
	uint64_t x558 = 15733403076LLU;
	int32_t x559 = INT32_MIN;
	volatile int8_t x560 = 1;

    t116 = (((x557+x558)!=x559)%x560);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x566 = 120U;
	volatile int8_t x567 = INT8_MIN;
	static int64_t x568 = 472LL;
	int64_t t117 = 0LL;

    t117 = (((x565+x566)!=x567)%x568);

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x569 = -1047048;
	volatile int16_t x570 = INT16_MAX;
	int64_t x571 = 4308779604608797LL;
	static volatile int32_t t118 = -745745743;

    t118 = (((x569+x570)!=x571)%x572);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x577 = 2284733655726757317LL;
	uint64_t x578 = 442LLU;
	int16_t x579 = 0;
	int32_t x580 = INT32_MAX;
	int32_t t119 = 2;

    t119 = (((x577+x578)!=x579)%x580);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x582 = -1LL;
	int8_t x583 = INT8_MIN;
	int32_t x584 = 14273242;
	volatile int32_t t120 = 10275;

    t120 = (((x581+x582)!=x583)%x584);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x586 = 0U;
	int8_t x587 = INT8_MAX;
	static int8_t x588 = INT8_MIN;
	int32_t t121 = 38114065;

    t121 = (((x585+x586)!=x587)%x588);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x589 = INT8_MAX;
	int16_t x590 = INT16_MIN;
	int64_t x592 = -1LL;

    t122 = (((x589+x590)!=x591)%x592);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x595 = 1U;
	static int8_t x596 = -1;
	volatile int32_t t123 = 25;

    t123 = (((x593+x594)!=x595)%x596);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x597 = -454617LL;
	int8_t x598 = INT8_MAX;
	uint64_t x599 = UINT64_MAX;
	int64_t x600 = INT64_MIN;
	volatile int64_t t124 = -22349465678LL;

    t124 = (((x597+x598)!=x599)%x600);

    if (t124 != 1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x601 = INT8_MAX;
	static int16_t x602 = 1194;
	int64_t x603 = 1LL;
	int64_t x604 = 262597733LL;
	volatile int64_t t125 = -5887278396999302LL;

    t125 = (((x601+x602)!=x603)%x604);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x605 = 5997;
	int16_t x606 = INT16_MIN;
	volatile uint64_t x607 = 254954351247415LLU;

    t126 = (((x605+x606)!=x607)%x608);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x613 = -4102;
	int32_t x614 = INT32_MAX;
	int32_t t127 = -1533177;

    t127 = (((x613+x614)!=x615)%x616);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x617 = -1LL;
	int8_t x618 = INT8_MAX;
	static int32_t x619 = -1;
	volatile int64_t x620 = -1LL;
	volatile int64_t t128 = 58LL;

    t128 = (((x617+x618)!=x619)%x620);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x623 = INT64_MAX;
	static uint8_t x624 = 3U;
	static volatile int32_t t129 = -3995;

    t129 = (((x621+x622)!=x623)%x624);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x633 = 0U;
	volatile int64_t x634 = INT64_MAX;
	volatile int16_t x635 = -3587;
	int32_t x636 = 24806;

    t130 = (((x633+x634)!=x635)%x636);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x639 = 0U;
	volatile int8_t x640 = 3;
	volatile int32_t t131 = -48654;

    t131 = (((x637+x638)!=x639)%x640);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x645 = UINT16_MAX;
	static uint16_t x646 = 219U;
	int32_t t132 = 714599404;

    t132 = (((x645+x646)!=x647)%x648);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x649 = 1846556120LL;
	uint64_t x651 = 44163779150681315LLU;
	volatile int64_t x652 = INT64_MIN;
	int64_t t133 = 61LL;

    t133 = (((x649+x650)!=x651)%x652);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x653 = -301738490086LL;
	int8_t x654 = INT8_MIN;
	int32_t x656 = -1;

    t134 = (((x653+x654)!=x655)%x656);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x657 = -1;
	int16_t x658 = -1;
	static uint8_t x659 = 2U;
	int32_t x660 = INT32_MAX;
	volatile int32_t t135 = -1;

    t135 = (((x657+x658)!=x659)%x660);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x661 = -1LL;
	uint64_t x662 = 251459836306286542LLU;
	static volatile int64_t x664 = INT64_MAX;

    t136 = (((x661+x662)!=x663)%x664);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x665 = INT8_MIN;
	static uint16_t x666 = 0U;
	int16_t x667 = -5229;
	static volatile uint8_t x668 = UINT8_MAX;
	static volatile int32_t t137 = -48357;

    t137 = (((x665+x666)!=x667)%x668);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x669 = 61;
	uint32_t x671 = 2U;
	uint8_t x672 = 98U;

    t138 = (((x669+x670)!=x671)%x672);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x673 = INT16_MIN;
	uint16_t x674 = UINT16_MAX;
	static uint16_t x675 = 1623U;
	int16_t x676 = 2;
	static volatile int32_t t139 = -56445;

    t139 = (((x673+x674)!=x675)%x676);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x677 = INT64_MIN;
	uint8_t x678 = 14U;
	uint16_t x679 = UINT16_MAX;
	volatile int8_t x680 = INT8_MIN;
	volatile int32_t t140 = -948446;

    t140 = (((x677+x678)!=x679)%x680);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x682 = -514504431884LL;
	static int32_t x683 = INT32_MIN;
	volatile int32_t x684 = INT32_MIN;
	static volatile int32_t t141 = 194;

    t141 = (((x681+x682)!=x683)%x684);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x685 = -8LL;
	int8_t x686 = INT8_MAX;
	int8_t x688 = INT8_MIN;
	volatile int32_t t142 = -11932;

    t142 = (((x685+x686)!=x687)%x688);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x689 = 2731U;
	int16_t x690 = INT16_MIN;
	uint16_t x692 = UINT16_MAX;
	int32_t t143 = -1;

    t143 = (((x689+x690)!=x691)%x692);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x693 = 5U;
	uint16_t x694 = 17U;
	int16_t x696 = INT16_MAX;

    t144 = (((x693+x694)!=x695)%x696);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x697 = -1;
	int64_t x698 = -1LL;
	uint64_t x699 = UINT64_MAX;
	uint8_t x700 = UINT8_MAX;
	static int32_t t145 = 20449906;

    t145 = (((x697+x698)!=x699)%x700);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x701 = -1;
	int16_t x703 = INT16_MAX;
	uint64_t x704 = 410315811559289737LLU;

    t146 = (((x701+x702)!=x703)%x704);

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x705 = 337716U;
	int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MAX;
	int64_t x708 = 14549LL;
	static volatile int64_t t147 = -352298184LL;

    t147 = (((x705+x706)!=x707)%x708);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x709 = INT16_MIN;
	volatile int8_t x710 = -15;
	uint8_t x711 = 57U;
	volatile int8_t x712 = INT8_MAX;

    t148 = (((x709+x710)!=x711)%x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x713 = INT16_MIN;
	int8_t x714 = INT8_MAX;
	int32_t x716 = -2;
	volatile int32_t t149 = 254;

    t149 = (((x713+x714)!=x715)%x716);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x717 = UINT64_MAX;
	int32_t x718 = -1;
	uint32_t x719 = 8117923U;
	int8_t x720 = INT8_MIN;
	volatile int32_t t150 = 2013;

    t150 = (((x717+x718)!=x719)%x720);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x721 = 16;
	static int8_t x722 = INT8_MAX;
	int64_t x723 = 10830739316LL;
	int64_t x724 = -1LL;
	static volatile int64_t t151 = 2303084493491LL;

    t151 = (((x721+x722)!=x723)%x724);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x726 = 55;
	int32_t x728 = -1;

    t152 = (((x725+x726)!=x727)%x728);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x733 = 644U;
	int64_t x734 = INT64_MIN;
	int8_t x735 = 2;
	int32_t x736 = -19343;
	volatile int32_t t153 = -1038537;

    t153 = (((x733+x734)!=x735)%x736);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x737 = 107U;
	volatile int32_t x739 = -51463;
	uint32_t x740 = UINT32_MAX;

    t154 = (((x737+x738)!=x739)%x740);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x741 = 15U;
	uint8_t x743 = UINT8_MAX;
	uint8_t x744 = 37U;
	volatile int32_t t155 = -172594463;

    t155 = (((x741+x742)!=x743)%x744);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x745 = 32083476557LLU;
	static volatile int16_t x746 = -1;
	static int64_t x747 = INT64_MIN;
	int64_t x748 = -143255LL;
	volatile int64_t t156 = -1805364594546358LL;

    t156 = (((x745+x746)!=x747)%x748);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x749 = -112LL;
	uint8_t x750 = UINT8_MAX;
	static int64_t x751 = INT64_MAX;
	int32_t t157 = 23;

    t157 = (((x749+x750)!=x751)%x752);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x755 = -1;
	int64_t x756 = INT64_MAX;

    t158 = (((x753+x754)!=x755)%x756);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x757 = INT8_MIN;
	int64_t x758 = 145746975711LL;
	static uint64_t x759 = 24137013LLU;
	int32_t x760 = -1;
	volatile int32_t t159 = 244285633;

    t159 = (((x757+x758)!=x759)%x760);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x763 = UINT8_MAX;
	static uint64_t x764 = 4705483801LLU;
	volatile uint64_t t160 = 15095627512384LLU;

    t160 = (((x761+x762)!=x763)%x764);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x766 = -1634LL;
	int32_t t161 = 546509;

    t161 = (((x765+x766)!=x767)%x768);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x769 = 1;
	static int64_t x770 = -1LL;
	static int64_t x771 = INT64_MIN;
	int32_t x772 = INT32_MAX;

    t162 = (((x769+x770)!=x771)%x772);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x773 = 140U;
	static int32_t x775 = INT32_MAX;
	int64_t x776 = INT64_MIN;
	volatile int64_t t163 = 2508603658898968314LL;

    t163 = (((x773+x774)!=x775)%x776);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x779 = INT16_MAX;
	volatile int32_t t164 = 51275;

    t164 = (((x777+x778)!=x779)%x780);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = -1LL;
	int32_t x783 = 742558557;
	static int32_t x784 = INT32_MAX;
	static int32_t t165 = 1891791;

    t165 = (((x781+x782)!=x783)%x784);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x786 = INT16_MIN;
	uint8_t x788 = 19U;

    t166 = (((x785+x786)!=x787)%x788);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x789 = 396967288765341LLU;
	int32_t x790 = -11233132;
	uint64_t x791 = UINT64_MAX;
	volatile int16_t x792 = INT16_MIN;
	int32_t t167 = 212119379;

    t167 = (((x789+x790)!=x791)%x792);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x793 = INT16_MAX;
	static uint8_t x794 = UINT8_MAX;
	int32_t x795 = INT32_MIN;
	uint64_t x796 = UINT64_MAX;
	volatile uint64_t t168 = 599221LLU;

    t168 = (((x793+x794)!=x795)%x796);

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x798 = INT8_MIN;
	int64_t x799 = INT64_MIN;
	uint32_t x800 = 119U;
	static volatile uint32_t t169 = 211U;

    t169 = (((x797+x798)!=x799)%x800);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x801 = 0U;
	int16_t x802 = INT16_MAX;
	int64_t x803 = -1LL;
	uint64_t x804 = UINT64_MAX;
	static volatile uint64_t t170 = 20085908605312LLU;

    t170 = (((x801+x802)!=x803)%x804);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x805 = -1;
	int8_t x806 = INT8_MAX;
	uint16_t x807 = 2471U;
	int16_t x808 = INT16_MIN;
	int32_t t171 = -72294720;

    t171 = (((x805+x806)!=x807)%x808);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x809 = -4;
	int16_t x812 = -1;

    t172 = (((x809+x810)!=x811)%x812);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x813 = INT64_MIN;
	static uint32_t x814 = UINT32_MAX;
	volatile int8_t x815 = INT8_MAX;
	uint16_t x816 = 7U;
	volatile int32_t t173 = 0;

    t173 = (((x813+x814)!=x815)%x816);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x817 = 4748U;
	uint8_t x818 = 48U;
	uint8_t x819 = UINT8_MAX;
	int64_t x820 = 8228141LL;
	volatile int64_t t174 = 47LL;

    t174 = (((x817+x818)!=x819)%x820);

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x821 = 87469813U;
	static volatile int32_t x822 = -1;
	int64_t x823 = 74000046LL;
	uint8_t x824 = 1U;
	int32_t t175 = -142;

    t175 = (((x821+x822)!=x823)%x824);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x825 = UINT8_MAX;
	volatile int32_t x826 = -657;
	volatile uint64_t x827 = 3799622674387098LLU;
	int16_t x828 = -255;

    t176 = (((x825+x826)!=x827)%x828);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x830 = UINT8_MAX;
	uint64_t x832 = 25LLU;
	uint64_t t177 = 6940LLU;

    t177 = (((x829+x830)!=x831)%x832);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x833 = INT8_MIN;
	static uint64_t x834 = 20344781778820224LLU;
	static uint64_t x835 = 3608786344LLU;
	int16_t x836 = INT16_MIN;
	volatile int32_t t178 = -27293758;

    t178 = (((x833+x834)!=x835)%x836);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x841 = 49204644762503LL;
	int32_t x842 = INT32_MIN;
	uint8_t x843 = UINT8_MAX;
	uint64_t t179 = 1344713525745LLU;

    t179 = (((x841+x842)!=x843)%x844);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x845 = -1;
	int8_t x846 = INT8_MIN;
	int64_t x847 = INT64_MIN;
	static volatile int32_t t180 = -16;

    t180 = (((x845+x846)!=x847)%x848);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x849 = 1110LLU;
	int8_t x851 = INT8_MIN;
	volatile int32_t x852 = -216;
	static int32_t t181 = 1185;

    t181 = (((x849+x850)!=x851)%x852);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x853 = UINT8_MAX;
	int64_t x854 = INT64_MIN;
	uint16_t x855 = 4461U;
	int8_t x856 = INT8_MIN;

    t182 = (((x853+x854)!=x855)%x856);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x857 = 7;
	static uint32_t x858 = UINT32_MAX;
	int8_t x859 = -1;
	uint8_t x860 = UINT8_MAX;
	volatile int32_t t183 = -161231;

    t183 = (((x857+x858)!=x859)%x860);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x864 = UINT8_MAX;
	volatile int32_t t184 = -16655465;

    t184 = (((x861+x862)!=x863)%x864);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x865 = INT64_MAX;
	volatile uint8_t x867 = UINT8_MAX;
	uint8_t x868 = 1U;
	int32_t t185 = -70;

    t185 = (((x865+x866)!=x867)%x868);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x869 = 529U;
	uint16_t x870 = 12243U;
	int8_t x871 = -1;
	volatile uint64_t x872 = UINT64_MAX;
	uint64_t t186 = 68114LLU;

    t186 = (((x869+x870)!=x871)%x872);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x873 = -24803;
	int64_t x876 = INT64_MAX;
	int64_t t187 = -14164066861952980LL;

    t187 = (((x873+x874)!=x875)%x876);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x877 = -1;
	static uint64_t x879 = 175957LLU;
	int32_t x880 = 1;

    t188 = (((x877+x878)!=x879)%x880);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x881 = 1U;
	int32_t x882 = INT32_MIN;
	uint64_t x883 = UINT64_MAX;
	uint64_t x884 = 867731957338166LLU;
	volatile uint64_t t189 = 0LLU;

    t189 = (((x881+x882)!=x883)%x884);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x885 = 1U;
	static uint32_t x886 = UINT32_MAX;
	static int32_t x887 = -1;
	volatile uint16_t x888 = 5674U;

    t190 = (((x885+x886)!=x887)%x888);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x889 = 2865334620083854LLU;
	int8_t x892 = 1;
	volatile int32_t t191 = -2558;

    t191 = (((x889+x890)!=x891)%x892);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x893 = INT32_MIN;
	volatile uint16_t x894 = 1869U;
	int64_t x895 = 120LL;
	volatile int32_t t192 = 3;

    t192 = (((x893+x894)!=x895)%x896);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x897 = 6299U;
	int8_t x898 = -1;
	int16_t x899 = 11780;
	volatile int32_t x900 = INT32_MIN;
	int32_t t193 = 3793;

    t193 = (((x897+x898)!=x899)%x900);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x902 = 4488LL;
	static volatile int16_t x903 = INT16_MIN;
	uint64_t x904 = 796048LLU;
	static volatile uint64_t t194 = 1502255816753LLU;

    t194 = (((x901+x902)!=x903)%x904);

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x905 = 8U;
	int16_t x906 = INT16_MIN;
	int32_t x908 = INT32_MIN;
	int32_t t195 = -3918767;

    t195 = (((x905+x906)!=x907)%x908);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = INT8_MIN;
	uint64_t x910 = 16723550244LLU;
	int32_t x911 = 3142901;
	uint32_t x912 = 955U;
	static uint32_t t196 = 1167U;

    t196 = (((x909+x910)!=x911)%x912);

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x917 = -1LL;
	volatile uint64_t x918 = 133527371LLU;
	volatile int8_t x919 = -2;
	int64_t x920 = INT64_MIN;
	int64_t t197 = 63960984348875332LL;

    t197 = (((x917+x918)!=x919)%x920);

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x921 = INT64_MIN;
	static volatile int16_t x923 = INT16_MIN;
	int64_t x924 = -1LL;

    t198 = (((x921+x922)!=x923)%x924);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x925 = INT64_MIN;
	uint64_t x926 = 478LLU;
	static int8_t x927 = 7;
	volatile int32_t t199 = -69;

    t199 = (((x925+x926)!=x927)%x928);

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

