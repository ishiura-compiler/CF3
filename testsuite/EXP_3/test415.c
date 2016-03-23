
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

int8_t x1 = -1;
static int32_t x9 = -1;
uint32_t x11 = 806723048U;
int8_t x12 = 2;
static uint16_t x20 = 298U;
int32_t t3 = 23;
static int8_t x24 = INT8_MAX;
static int32_t t4 = 610094;
int32_t x42 = -79625351;
static uint16_t x46 = UINT16_MAX;
int8_t x59 = INT8_MIN;
int8_t x62 = -1;
static int8_t x74 = -22;
int32_t t12 = -608675;
static volatile int32_t x77 = INT32_MAX;
volatile int32_t t15 = 2458210;
static int16_t x93 = -13744;
int32_t x96 = INT32_MIN;
uint16_t x97 = 14U;
uint16_t x98 = UINT16_MAX;
uint32_t x105 = 432014404U;
static int32_t x111 = -1;
uint8_t x121 = UINT8_MAX;
static int32_t x123 = INT32_MIN;
int16_t x136 = -14;
static int8_t x150 = INT8_MIN;
volatile uint64_t x151 = 81827677430053LLU;
int16_t x152 = INT16_MAX;
volatile uint32_t x197 = 2779499U;
int16_t x201 = INT16_MIN;
volatile int64_t x202 = INT64_MIN;
int16_t x212 = -1;
uint8_t x213 = 0U;
volatile uint16_t x214 = 10323U;
uint8_t x215 = UINT8_MAX;
int32_t x218 = 410;
volatile int32_t t38 = -5015608;
int16_t x224 = INT16_MAX;
int16_t x230 = INT16_MIN;
volatile int32_t t40 = -22892;
int8_t x265 = 17;
int64_t x284 = 2LL;
int8_t x285 = 1;
uint16_t x287 = UINT16_MAX;
int32_t t45 = 21729;
static int32_t t46 = -16173;
uint8_t x298 = 6U;
int16_t x302 = INT16_MIN;
volatile int8_t x303 = INT8_MAX;
volatile uint64_t x304 = UINT64_MAX;
volatile int32_t t49 = 32141;
int8_t x313 = INT8_MIN;
static uint32_t x314 = 745902U;
int16_t x317 = INT16_MIN;
int64_t x319 = -1LL;
uint64_t x323 = UINT64_MAX;
static int32_t x324 = INT32_MAX;
int64_t x333 = -35663443440LL;
int32_t x335 = INT32_MIN;
static uint32_t x336 = UINT32_MAX;
int8_t x340 = -2;
int32_t t59 = 55315792;
int8_t x365 = INT8_MIN;
uint64_t x369 = 224670411470994592LLU;
static int8_t x370 = 9;
static int8_t x371 = INT8_MIN;
volatile int32_t t61 = 1;
volatile int32_t t62 = 0;
uint64_t x381 = 3190LLU;
int16_t x383 = INT16_MAX;
int32_t t64 = 330332;
volatile int32_t t67 = -133570100;
uint64_t x415 = 3244486720050LLU;
volatile int8_t x421 = 56;
int8_t x423 = -1;
int16_t x427 = -1;
int32_t x430 = INT32_MAX;
int32_t x431 = 1;
int64_t x433 = 2609LL;
int64_t x436 = -112619621LL;
volatile int32_t t75 = -1663354;
int32_t t76 = -415515;
int16_t x455 = 10;
int16_t x460 = INT16_MIN;
int64_t x461 = -5218263696LL;
uint16_t x468 = UINT16_MAX;
volatile uint16_t x470 = UINT16_MAX;
volatile uint8_t x471 = 51U;
int32_t x473 = 17;
int16_t x475 = -6;
static int32_t x481 = INT32_MIN;
volatile int32_t x483 = -1;
int32_t x488 = -9927052;
int32_t x499 = 1883;
static int16_t x500 = INT16_MIN;
int64_t x508 = -47658421561873LL;
int8_t x514 = INT8_MAX;
int8_t x515 = -1;
volatile int64_t x525 = INT64_MAX;
int16_t x527 = INT16_MAX;
static int32_t t90 = -207;
volatile int32_t t91 = -272969;
uint16_t x544 = 2239U;
int32_t t94 = -55;
int16_t x550 = INT16_MIN;
uint8_t x551 = UINT8_MAX;
int32_t t96 = -33527;
int16_t x584 = INT16_MAX;
static int16_t x587 = -75;
volatile int16_t x588 = INT16_MIN;
int8_t x591 = -1;
static int8_t x605 = -1;
uint16_t x606 = UINT16_MAX;
static int16_t x610 = 146;
int16_t x621 = -1;
int8_t x623 = INT8_MIN;
int32_t t107 = -6977352;
volatile int32_t t108 = 8418;
int32_t t109 = 504643;
volatile int16_t x651 = INT16_MAX;
static int64_t x655 = -1LL;
static int64_t x657 = -1LL;
static int64_t x660 = -786LL;
int8_t x663 = INT8_MAX;
int32_t t113 = 4952;
int32_t t115 = -4497;
static int16_t x677 = INT16_MAX;
uint64_t x679 = 23LLU;
int8_t x693 = INT8_MAX;
static uint16_t x700 = 43U;
uint64_t x703 = 34357365573LLU;
volatile int64_t x705 = -77LL;
uint32_t x707 = UINT32_MAX;
static int8_t x708 = INT8_MIN;
static uint32_t x711 = 1U;
static volatile int32_t t122 = 4604575;
uint8_t x713 = 4U;
static int8_t x719 = -1;
int8_t x738 = INT8_MAX;
static uint64_t x739 = 5107LLU;
volatile uint16_t x740 = 13U;
volatile int8_t x743 = -1;
uint16_t x746 = 3U;
volatile int32_t x748 = -1;
volatile int32_t t129 = -14;
static volatile uint8_t x750 = UINT8_MAX;
static int32_t t130 = -483138928;
static volatile int16_t x754 = INT16_MAX;
uint16_t x756 = 7U;
int32_t t132 = -121330;
volatile int64_t x767 = 103729LL;
volatile int32_t t133 = -205565041;
volatile uint64_t x769 = 3301521LLU;
static volatile uint8_t x771 = 7U;
static int32_t t138 = 188863719;
int64_t x795 = 203961LL;
uint8_t x806 = 25U;
static int8_t x818 = INT8_MIN;
uint16_t x834 = 27U;
static volatile int32_t t144 = 441035;
int8_t x851 = INT8_MAX;
static volatile int32_t t145 = -1389;
static uint32_t x853 = 10U;
uint64_t x873 = UINT64_MAX;
uint64_t x874 = 64674527LLU;
volatile uint8_t x875 = UINT8_MAX;
static int32_t x878 = INT32_MIN;
uint64_t x883 = 31172959491461029LLU;
int8_t x884 = INT8_MAX;
int64_t x889 = INT64_MAX;
int32_t x894 = -2022;
volatile uint64_t x902 = UINT64_MAX;
static int32_t x911 = INT32_MIN;
int16_t x914 = 0;
int64_t x916 = -1LL;
static int32_t t157 = 24;
int8_t x924 = INT8_MIN;
uint16_t x947 = 6U;
volatile int32_t x957 = -1;
static volatile int8_t x971 = INT8_MAX;
int16_t x974 = 0;
uint32_t x977 = 16749377U;
int32_t x978 = INT32_MIN;
static uint16_t x979 = 569U;
uint8_t x994 = 3U;
uint8_t x1004 = UINT8_MAX;
uint16_t x1005 = UINT16_MAX;
int64_t x1016 = -15278953072917199LL;
int32_t t171 = 1472;
uint8_t x1017 = UINT8_MAX;
volatile int32_t t172 = -232636134;
int64_t x1022 = INT64_MIN;
volatile uint64_t x1031 = 30089LLU;
uint16_t x1035 = 790U;
static int16_t x1038 = INT16_MAX;
static uint32_t x1039 = UINT32_MAX;
static int32_t t180 = -4703;
static int16_t x1085 = INT16_MAX;
uint8_t x1087 = 12U;
volatile int8_t x1101 = INT8_MIN;
int16_t x1119 = -121;
int16_t x1120 = INT16_MIN;
volatile uint64_t x1126 = 18987810955596LLU;
static uint64_t x1128 = 60LLU;
int32_t x1134 = INT32_MAX;
int8_t x1136 = -1;
int32_t t194 = 433974374;
int64_t x1145 = INT64_MAX;
static volatile int16_t x1146 = 340;
int32_t x1158 = -1;
uint16_t x1161 = 1433U;
volatile int32_t t199 = -9465;


void f0(void) {
    	static uint16_t x2 = 212U;
	volatile int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 3;

    t0 = ((x1-x2)>(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 337;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = -683352902;
	int32_t t1 = 3112011;

    t1 = ((x5-x6)>(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x10 = 15;
	volatile int32_t t2 = -128313339;

    t2 = ((x9-x10)>(x11*x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 7996U;
	static uint32_t x18 = 29997U;
	int64_t x19 = 12LL;

    t3 = ((x17-x18)>(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x22 = -17LL;
	int8_t x23 = INT8_MAX;

    t4 = ((x21-x22)>(x23*x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x33 = 20U;
	int16_t x34 = INT16_MAX;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = UINT16_MAX;
	int32_t t5 = -183005;

    t5 = ((x33-x34)>(x35*x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x41 = -625201;
	uint32_t x43 = 3670U;
	int32_t x44 = 144;
	static volatile int32_t t6 = 3136764;

    t6 = ((x41-x42)>(x43*x44));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x45 = 26791254;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = 6U;
	int32_t t7 = 8;

    t7 = ((x45-x46)>(x47*x48));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = 71;
	volatile int8_t x51 = -5;
	uint8_t x52 = 48U;
	volatile int32_t t8 = 115464;

    t8 = ((x49-x50)>(x51*x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x57 = INT64_MIN;
	static int16_t x58 = -1;
	uint8_t x60 = 1U;
	int32_t t9 = -428139466;

    t9 = ((x57-x58)>(x59*x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = 1;
	int16_t x63 = -1;
	int8_t x64 = -1;
	static int32_t t10 = 14390;

    t10 = ((x61-x62)>(x63*x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = -234847569;
	volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1;
	int16_t x68 = 3;
	int32_t t11 = 21;

    t11 = ((x65-x66)>(x67*x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MIN;
	static int8_t x75 = INT8_MIN;
	int64_t x76 = 49508LL;

    t12 = ((x73-x74)>(x75*x76));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x78 = 68257150662900LLU;
	static int8_t x79 = INT8_MAX;
	static uint32_t x80 = UINT32_MAX;
	int32_t t13 = 110101402;

    t13 = ((x77-x78)>(x79*x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MIN;
	volatile int8_t x83 = INT8_MIN;
	static volatile int32_t x84 = 24;
	int32_t t14 = 2853663;

    t14 = ((x81-x82)>(x83*x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x89 = 6U;
	uint32_t x90 = 1U;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = 258091028;

    t15 = ((x89-x90)>(x91*x92));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x94 = 74788;
	static uint64_t x95 = 385081390021LLU;
	int32_t t16 = -1154745;

    t16 = ((x93-x94)>(x95*x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x99 = UINT16_MAX;
	int8_t x100 = -11;
	int32_t t17 = 61804;

    t17 = ((x97-x98)>(x99*x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = -1;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = 0U;
	int32_t t18 = -1;

    t18 = ((x101-x102)>(x103*x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x106 = 2402LLU;
	int32_t x107 = 447;
	volatile uint16_t x108 = UINT16_MAX;
	static int32_t t19 = -1979;

    t19 = ((x105-x106)>(x107*x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x109 = INT32_MAX;
	int16_t x110 = INT16_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t20 = 45405735;

    t20 = ((x109-x110)>(x111*x112));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = 2762U;
	uint16_t x120 = 26U;
	static volatile int32_t t21 = -828374;

    t21 = ((x117-x118)>(x119*x120));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x122 = 0;
	volatile int64_t x124 = -1LL;
	int32_t t22 = 658174105;

    t22 = ((x121-x122)>(x123*x124));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x133 = UINT8_MAX;
	static volatile int16_t x134 = -1;
	int16_t x135 = 182;
	static volatile int32_t t23 = 1;

    t23 = ((x133-x134)>(x135*x136));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	int32_t x139 = 940510;
	int8_t x140 = INT8_MIN;
	volatile int32_t t24 = -3608;

    t24 = ((x137-x138)>(x139*x140));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x145 = -1;
	int64_t x146 = -1LL;
	int8_t x147 = -1;
	int8_t x148 = 0;
	volatile int32_t t25 = -3532868;

    t25 = ((x145-x146)>(x147*x148));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x149 = -1LL;
	volatile int32_t t26 = 345124;

    t26 = ((x149-x150)>(x151*x152));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x157 = -1LL;
	int8_t x158 = INT8_MAX;
	int32_t x159 = -623003982;
	int64_t x160 = -1LL;
	int32_t t27 = 60868;

    t27 = ((x157-x158)>(x159*x160));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x161 = 11542750227917767LLU;
	static uint16_t x162 = 3291U;
	int16_t x163 = INT16_MAX;
	int16_t x164 = -2;
	volatile int32_t t28 = -9899;

    t28 = ((x161-x162)>(x163*x164));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x165 = INT64_MIN;
	static int64_t x166 = INT64_MIN;
	static uint64_t x167 = 241006LLU;
	static volatile int64_t x168 = INT64_MIN;
	int32_t t29 = -18292475;

    t29 = ((x165-x166)>(x167*x168));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	static uint8_t x179 = 23U;
	volatile uint32_t x180 = 52683U;
	int32_t t30 = 1435;

    t30 = ((x177-x178)>(x179*x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x181 = -80;
	static uint16_t x182 = UINT16_MAX;
	volatile int32_t x183 = INT32_MAX;
	static uint64_t x184 = 246290555482LLU;
	static volatile int32_t t31 = -170260;

    t31 = ((x181-x182)>(x183*x184));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x185 = -739871635650958293LL;
	int64_t x186 = 2124735LL;
	uint64_t x187 = UINT64_MAX;
	volatile int8_t x188 = -1;
	volatile int32_t t32 = 15293;

    t32 = ((x185-x186)>(x187*x188));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MIN;
	uint64_t x191 = 22LLU;
	int32_t x192 = 62;
	int32_t t33 = -1;

    t33 = ((x189-x190)>(x191*x192));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x198 = 565U;
	int8_t x199 = INT8_MAX;
	int16_t x200 = -19;
	volatile int32_t t34 = 0;

    t34 = ((x197-x198)>(x199*x200));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x203 = 13U;
	volatile uint8_t x204 = UINT8_MAX;
	int32_t t35 = 14632809;

    t35 = ((x201-x202)>(x203*x204));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x209 = INT32_MIN;
	volatile int64_t x210 = 63258912000876969LL;
	uint32_t x211 = 93U;
	int32_t t36 = -330;

    t36 = ((x209-x210)>(x211*x212));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x216 = INT8_MIN;
	int32_t t37 = 6573155;

    t37 = ((x213-x214)>(x215*x216));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x217 = INT8_MIN;
	int8_t x219 = -1;
	uint16_t x220 = 144U;

    t38 = ((x217-x218)>(x219*x220));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x221 = 159467U;
	uint16_t x222 = UINT16_MAX;
	static int16_t x223 = INT16_MAX;
	static volatile int32_t t39 = 32628;

    t39 = ((x221-x222)>(x223*x224));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x229 = -1;
	static int8_t x231 = -1;
	int16_t x232 = INT16_MAX;

    t40 = ((x229-x230)>(x231*x232));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x245 = 0;
	uint64_t x246 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	static int16_t x248 = -1;
	volatile int32_t t41 = -7;

    t41 = ((x245-x246)>(x247*x248));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x261 = -1LL;
	uint64_t x262 = UINT64_MAX;
	int16_t x263 = -5;
	static volatile uint32_t x264 = 53474911U;
	volatile int32_t t42 = -119543;

    t42 = ((x261-x262)>(x263*x264));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x266 = 1U;
	uint64_t x267 = UINT64_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t43 = -3;

    t43 = ((x265-x266)>(x267*x268));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x281 = INT16_MIN;
	static uint16_t x282 = UINT16_MAX;
	static int16_t x283 = INT16_MIN;
	int32_t t44 = -108349434;

    t44 = ((x281-x282)>(x283*x284));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x286 = -1;
	int8_t x288 = INT8_MIN;

    t45 = ((x285-x286)>(x287*x288));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x289 = 214408157U;
	uint16_t x290 = 6U;
	int16_t x291 = INT16_MAX;
	int16_t x292 = INT16_MAX;

    t46 = ((x289-x290)>(x291*x292));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -32048672;
	int32_t x295 = INT32_MIN;
	static int64_t x296 = -581012692LL;
	int32_t t47 = 29;

    t47 = ((x293-x294)>(x295*x296));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x297 = 0LLU;
	uint64_t x299 = UINT64_MAX;
	static int8_t x300 = INT8_MIN;
	int32_t t48 = -1;

    t48 = ((x297-x298)>(x299*x300));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x301 = 113421U;

    t49 = ((x301-x302)>(x303*x304));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x305 = 1027555677025438LLU;
	static volatile int64_t x306 = INT64_MAX;
	int32_t x307 = -1;
	static int16_t x308 = -741;
	volatile int32_t t50 = -2038151;

    t50 = ((x305-x306)>(x307*x308));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x315 = 56;
	volatile int64_t x316 = 972615156LL;
	static volatile int32_t t51 = 822925129;

    t51 = ((x313-x314)>(x315*x316));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x318 = 7234760489166105LLU;
	uint64_t x320 = 82LLU;
	static int32_t t52 = -26428168;

    t52 = ((x317-x318)>(x319*x320));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x321 = -1;
	int64_t x322 = INT64_MIN;
	volatile int32_t t53 = -46782;

    t53 = ((x321-x322)>(x323*x324));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x325 = UINT16_MAX;
	static int8_t x326 = 35;
	uint8_t x327 = 1U;
	int32_t x328 = INT32_MAX;
	int32_t t54 = 0;

    t54 = ((x325-x326)>(x327*x328));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x329 = 1U;
	uint8_t x330 = 73U;
	static int8_t x331 = INT8_MAX;
	int64_t x332 = 1LL;
	int32_t t55 = -44124;

    t55 = ((x329-x330)>(x331*x332));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x334 = INT16_MIN;
	volatile int32_t t56 = -79823;

    t56 = ((x333-x334)>(x335*x336));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x337 = 59U;
	int16_t x338 = INT16_MAX;
	volatile uint64_t x339 = 14LLU;
	volatile int32_t t57 = 23733;

    t57 = ((x337-x338)>(x339*x340));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x341 = 830485298LL;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = -1;
	uint64_t x344 = 105355720439763LLU;
	volatile int32_t t58 = -3351223;

    t58 = ((x341-x342)>(x343*x344));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x345 = -1;
	int32_t x346 = -1;
	volatile int64_t x347 = INT64_MIN;
	volatile uint64_t x348 = 97106867499964LLU;

    t59 = ((x345-x346)>(x347*x348));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 1U;
	static volatile int32_t t60 = 20388312;

    t60 = ((x365-x366)>(x367*x368));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x372 = 10U;

    t61 = ((x369-x370)>(x371*x372));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x373 = -1;
	int64_t x374 = INT64_MIN;
	static int16_t x375 = 13;
	static int8_t x376 = 31;

    t62 = ((x373-x374)>(x375*x376));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x382 = 14U;
	static int16_t x384 = INT16_MAX;
	int32_t t63 = -45;

    t63 = ((x381-x382)>(x383*x384));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x385 = INT32_MAX;
	uint16_t x386 = 29U;
	uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = -1LL;

    t64 = ((x385-x386)>(x387*x388));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x393 = INT16_MIN;
	uint64_t x394 = 25041276571834763LLU;
	int8_t x395 = -14;
	static uint16_t x396 = 23539U;
	int32_t t65 = 0;

    t65 = ((x393-x394)>(x395*x396));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x398 = 65;
	static uint32_t x399 = UINT32_MAX;
	static int16_t x400 = -26;
	int32_t t66 = -61;

    t66 = ((x397-x398)>(x399*x400));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x405 = UINT8_MAX;
	volatile uint32_t x406 = UINT32_MAX;
	int16_t x407 = INT16_MIN;
	volatile int8_t x408 = INT8_MIN;

    t67 = ((x405-x406)>(x407*x408));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x409 = INT16_MIN;
	uint64_t x410 = 12619878221029377LLU;
	uint32_t x411 = 24U;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t68 = -381;

    t68 = ((x409-x410)>(x411*x412));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MAX;
	static int16_t x416 = -1;
	static volatile int32_t t69 = -339;

    t69 = ((x413-x414)>(x415*x416));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x422 = -1;
	int64_t x424 = INT64_MAX;
	static volatile int32_t t70 = 669810;

    t70 = ((x421-x422)>(x423*x424));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x425 = INT64_MIN;
	static uint8_t x426 = 0U;
	volatile int16_t x428 = INT16_MIN;
	volatile int32_t t71 = -245144484;

    t71 = ((x425-x426)>(x427*x428));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x429 = 21876412035LLU;
	static int16_t x432 = -1;
	int32_t t72 = 4212211;

    t72 = ((x429-x430)>(x431*x432));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x434 = -1LL;
	int32_t x435 = 59;
	int32_t t73 = 2040726;

    t73 = ((x433-x434)>(x435*x436));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	static uint16_t x439 = 29013U;
	uint16_t x440 = 0U;
	int32_t t74 = 0;

    t74 = ((x437-x438)>(x439*x440));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x445 = -240386;
	uint64_t x446 = 149886LLU;
	volatile uint8_t x447 = UINT8_MAX;
	static uint64_t x448 = 36LLU;

    t75 = ((x445-x446)>(x447*x448));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x449 = INT16_MIN;
	static int16_t x450 = -3274;
	volatile int8_t x451 = INT8_MAX;
	uint8_t x452 = 1U;

    t76 = ((x449-x450)>(x451*x452));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x453 = 0;
	volatile uint8_t x454 = UINT8_MAX;
	int32_t x456 = -20312321;
	int32_t t77 = 220173313;

    t77 = ((x453-x454)>(x455*x456));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x457 = INT16_MIN;
	volatile uint16_t x458 = UINT16_MAX;
	int16_t x459 = 108;
	int32_t t78 = -83694;

    t78 = ((x457-x458)>(x459*x460));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x462 = 7;
	int8_t x463 = INT8_MAX;
	volatile int64_t x464 = -1LL;
	int32_t t79 = 787;

    t79 = ((x461-x462)>(x463*x464));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x465 = UINT16_MAX;
	volatile int32_t x466 = INT32_MAX;
	static int8_t x467 = INT8_MIN;
	static volatile int32_t t80 = 6705105;

    t80 = ((x465-x466)>(x467*x468));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x469 = -1;
	int8_t x472 = 7;
	int32_t t81 = -920600;

    t81 = ((x469-x470)>(x471*x472));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x474 = -805;
	volatile uint8_t x476 = 21U;
	int32_t t82 = 51962641;

    t82 = ((x473-x474)>(x475*x476));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x482 = INT64_MIN;
	volatile int8_t x484 = INT8_MIN;
	int32_t t83 = -5662;

    t83 = ((x481-x482)>(x483*x484));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x485 = 0;
	volatile uint16_t x486 = 6U;
	volatile int32_t x487 = -1;
	int32_t t84 = 49651704;

    t84 = ((x485-x486)>(x487*x488));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x497 = -1;
	int64_t x498 = -1LL;
	volatile int32_t t85 = 9841;

    t85 = ((x497-x498)>(x499*x500));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x505 = -111;
	static int32_t x506 = INT32_MIN;
	uint16_t x507 = 2208U;
	static int32_t t86 = 26;

    t86 = ((x505-x506)>(x507*x508));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x513 = INT16_MIN;
	int32_t x516 = 1246;
	static volatile int32_t t87 = -6069;

    t87 = ((x513-x514)>(x515*x516));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x517 = INT64_MAX;
	volatile uint64_t x518 = UINT64_MAX;
	uint16_t x519 = 27079U;
	volatile int16_t x520 = 14036;
	static int32_t t88 = -52856;

    t88 = ((x517-x518)>(x519*x520));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x521 = -1;
	volatile int32_t x522 = -883364808;
	uint8_t x523 = 7U;
	volatile uint16_t x524 = UINT16_MAX;
	volatile int32_t t89 = -81938416;

    t89 = ((x521-x522)>(x523*x524));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x526 = 7U;
	volatile uint32_t x528 = 6U;

    t90 = ((x525-x526)>(x527*x528));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x529 = 2242098290414321751LL;
	int16_t x530 = -1;
	static int64_t x531 = -2649417LL;
	int16_t x532 = INT16_MIN;

    t91 = ((x529-x530)>(x531*x532));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x533 = 501096308;
	uint64_t x534 = UINT64_MAX;
	static uint64_t x535 = 29437239095281004LLU;
	volatile int32_t x536 = 238379;
	volatile int32_t t92 = 387572;

    t92 = ((x533-x534)>(x535*x536));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = INT8_MIN;
	volatile uint8_t x539 = 37U;
	static int8_t x540 = INT8_MIN;
	volatile int32_t t93 = -150413805;

    t93 = ((x537-x538)>(x539*x540));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x541 = INT16_MAX;
	uint64_t x542 = 257228546716368LLU;
	volatile int16_t x543 = 2;

    t94 = ((x541-x542)>(x543*x544));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x549 = 17642LLU;
	static uint8_t x552 = 13U;
	volatile int32_t t95 = 3656175;

    t95 = ((x549-x550)>(x551*x552));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x557 = 6847972011770LLU;
	int8_t x558 = 11;
	int64_t x559 = -1783946111226LL;
	int16_t x560 = INT16_MIN;

    t96 = ((x557-x558)>(x559*x560));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x561 = UINT32_MAX;
	uint16_t x562 = 255U;
	static int64_t x563 = INT64_MAX;
	uint64_t x564 = 2353126LLU;
	volatile int32_t t97 = -1;

    t97 = ((x561-x562)>(x563*x564));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x565 = 33643861;
	uint64_t x566 = 58788LLU;
	uint64_t x567 = 264985690385LLU;
	uint64_t x568 = 2LLU;
	static int32_t t98 = -24892164;

    t98 = ((x565-x566)>(x567*x568));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x581 = 11;
	volatile int8_t x582 = INT8_MIN;
	static int8_t x583 = -1;
	volatile int32_t t99 = -3083;

    t99 = ((x581-x582)>(x583*x584));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x585 = 71LL;
	int16_t x586 = -1;
	int32_t t100 = -69095697;

    t100 = ((x585-x586)>(x587*x588));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x589 = 3;
	uint32_t x590 = 324543U;
	static uint64_t x592 = 151444223590939723LLU;
	volatile int32_t t101 = -545841;

    t101 = ((x589-x590)>(x591*x592));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x593 = 342;
	int8_t x594 = -13;
	uint16_t x595 = 11U;
	uint16_t x596 = UINT16_MAX;
	volatile int32_t t102 = 1;

    t102 = ((x593-x594)>(x595*x596));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x601 = INT8_MIN;
	int64_t x602 = INT64_MIN;
	int64_t x603 = -1LL;
	int64_t x604 = INT64_MAX;
	int32_t t103 = 158187;

    t103 = ((x601-x602)>(x603*x604));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x607 = 12504U;
	static uint8_t x608 = UINT8_MAX;
	volatile int32_t t104 = 12036294;

    t104 = ((x605-x606)>(x607*x608));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x611 = -27;
	uint32_t x612 = 5926U;
	volatile int32_t t105 = 5;

    t105 = ((x609-x610)>(x611*x612));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x617 = -1;
	static uint8_t x618 = 44U;
	int16_t x619 = 0;
	uint32_t x620 = 512425U;
	int32_t t106 = 16693867;

    t106 = ((x617-x618)>(x619*x620));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x622 = 1;
	int8_t x624 = 6;

    t107 = ((x621-x622)>(x623*x624));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x641 = INT32_MAX;
	int64_t x642 = INT64_MAX;
	static int8_t x643 = INT8_MIN;
	uint64_t x644 = UINT64_MAX;

    t108 = ((x641-x642)>(x643*x644));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MIN;
	uint16_t x647 = 159U;
	int8_t x648 = INT8_MAX;

    t109 = ((x645-x646)>(x647*x648));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x649 = 537621LLU;
	static uint32_t x650 = 411U;
	uint16_t x652 = 1612U;
	volatile int32_t t110 = 56984;

    t110 = ((x649-x650)>(x651*x652));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x653 = -7609570521492347LL;
	static int64_t x654 = INT64_MIN;
	uint64_t x656 = 13LLU;
	int32_t t111 = -8;

    t111 = ((x653-x654)>(x655*x656));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x658 = -1LL;
	int16_t x659 = INT16_MIN;
	static volatile int32_t t112 = 23667;

    t112 = ((x657-x658)>(x659*x660));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x661 = UINT64_MAX;
	int64_t x662 = 149413763657083521LL;
	int8_t x664 = 31;

    t113 = ((x661-x662)>(x663*x664));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x669 = 0U;
	volatile uint32_t x670 = UINT32_MAX;
	static int8_t x671 = INT8_MAX;
	uint8_t x672 = 25U;
	volatile int32_t t114 = -7840;

    t114 = ((x669-x670)>(x671*x672));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x673 = -315;
	int8_t x674 = INT8_MIN;
	int64_t x675 = -54105615865LL;
	static int8_t x676 = 0;

    t115 = ((x673-x674)>(x675*x676));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x678 = 1709567388945970122LLU;
	int8_t x680 = INT8_MIN;
	int32_t t116 = -78;

    t116 = ((x677-x678)>(x679*x680));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x685 = 293;
	uint32_t x686 = UINT32_MAX;
	volatile int16_t x687 = INT16_MAX;
	int16_t x688 = INT16_MIN;
	int32_t t117 = 565280625;

    t117 = ((x685-x686)>(x687*x688));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x694 = INT8_MIN;
	int64_t x695 = -1LL;
	int64_t x696 = 16761493546627LL;
	volatile int32_t t118 = -2550852;

    t118 = ((x693-x694)>(x695*x696));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x697 = -1;
	int32_t x698 = -1;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t119 = -14339226;

    t119 = ((x697-x698)>(x699*x700));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x701 = UINT64_MAX;
	uint64_t x702 = UINT64_MAX;
	int8_t x704 = -1;
	volatile int32_t t120 = 1187;

    t120 = ((x701-x702)>(x703*x704));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x706 = 421980U;
	int32_t t121 = 13758;

    t121 = ((x705-x706)>(x707*x708));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x709 = 197367409718LL;
	int8_t x710 = -1;
	uint32_t x712 = 241690437U;

    t122 = ((x709-x710)>(x711*x712));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x714 = INT8_MIN;
	static int32_t x715 = INT32_MIN;
	uint16_t x716 = 1U;
	static volatile int32_t t123 = -363524;

    t123 = ((x713-x714)>(x715*x716));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x717 = INT16_MAX;
	int8_t x718 = -1;
	static volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t124 = -2143;

    t124 = ((x717-x718)>(x719*x720));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x721 = UINT32_MAX;
	volatile uint8_t x722 = UINT8_MAX;
	uint64_t x723 = 5885389101LLU;
	volatile int16_t x724 = INT16_MAX;
	volatile int32_t t125 = 54;

    t125 = ((x721-x722)>(x723*x724));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x725 = 1017851034028000LL;
	int32_t x726 = INT32_MAX;
	static int8_t x727 = -1;
	uint16_t x728 = 53U;
	int32_t t126 = -3;

    t126 = ((x725-x726)>(x727*x728));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x737 = -2163;
	volatile int32_t t127 = 1;

    t127 = ((x737-x738)>(x739*x740));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x741 = UINT16_MAX;
	uint16_t x742 = 4546U;
	int16_t x744 = -1;
	volatile int32_t t128 = 111647404;

    t128 = ((x741-x742)>(x743*x744));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x745 = INT8_MAX;
	uint8_t x747 = UINT8_MAX;

    t129 = ((x745-x746)>(x747*x748));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x749 = INT8_MIN;
	int16_t x751 = -1;
	int32_t x752 = -2476243;

    t130 = ((x749-x750)>(x751*x752));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x753 = -8419;
	volatile int32_t x755 = 5;
	volatile int32_t t131 = -537;

    t131 = ((x753-x754)>(x755*x756));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x761 = 459U;
	volatile int16_t x762 = -1;
	int8_t x763 = INT8_MAX;
	int16_t x764 = 13024;

    t132 = ((x761-x762)>(x763*x764));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MIN;
	int32_t x768 = INT32_MIN;

    t133 = ((x765-x766)>(x767*x768));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x770 = 5377U;
	int64_t x772 = 4226239LL;
	int32_t t134 = -60360186;

    t134 = ((x769-x770)>(x771*x772));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x773 = 23U;
	int16_t x774 = INT16_MIN;
	volatile int8_t x775 = INT8_MIN;
	int32_t x776 = -1;
	int32_t t135 = -35377951;

    t135 = ((x773-x774)>(x775*x776));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x781 = INT8_MIN;
	static uint8_t x782 = 2U;
	static volatile uint32_t x783 = 3U;
	int32_t x784 = -5961;
	volatile int32_t t136 = 70;

    t136 = ((x781-x782)>(x783*x784));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x785 = INT8_MAX;
	uint8_t x786 = 1U;
	volatile uint16_t x787 = 60U;
	int16_t x788 = INT16_MIN;
	static volatile int32_t t137 = -1012890;

    t137 = ((x785-x786)>(x787*x788));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	uint64_t x790 = 1214364897191LLU;
	int64_t x791 = -1LL;
	uint16_t x792 = 100U;

    t138 = ((x789-x790)>(x791*x792));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x793 = -1;
	uint64_t x794 = UINT64_MAX;
	static int32_t x796 = -1;
	volatile int32_t t139 = 397884;

    t139 = ((x793-x794)>(x795*x796));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x801 = -1;
	uint8_t x802 = 1U;
	uint32_t x803 = 32094U;
	uint8_t x804 = 2U;
	volatile int32_t t140 = -14;

    t140 = ((x801-x802)>(x803*x804));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x805 = -1;
	uint8_t x807 = 21U;
	int64_t x808 = -1LL;
	int32_t t141 = 15;

    t141 = ((x805-x806)>(x807*x808));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x813 = -1;
	int32_t x814 = 26;
	int16_t x815 = INT16_MIN;
	int32_t x816 = -11;
	volatile int32_t t142 = 468182716;

    t142 = ((x813-x814)>(x815*x816));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x817 = -1;
	volatile uint8_t x819 = 19U;
	int8_t x820 = INT8_MAX;
	volatile int32_t t143 = 678950292;

    t143 = ((x817-x818)>(x819*x820));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x833 = 16779038084925LLU;
	int16_t x835 = -1;
	int32_t x836 = -1;

    t144 = ((x833-x834)>(x835*x836));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x849 = -1;
	volatile int8_t x850 = 1;
	int8_t x852 = -1;

    t145 = ((x849-x850)>(x851*x852));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x854 = -2;
	static volatile uint16_t x855 = 2U;
	uint8_t x856 = 25U;
	int32_t t146 = 341;

    t146 = ((x853-x854)>(x855*x856));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x865 = -1LL;
	uint32_t x866 = 7U;
	int64_t x867 = -1LL;
	int8_t x868 = -1;
	volatile int32_t t147 = 0;

    t147 = ((x865-x866)>(x867*x868));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x876 = UINT32_MAX;
	int32_t t148 = -1;

    t148 = ((x873-x874)>(x875*x876));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x877 = INT32_MIN;
	int16_t x879 = -1;
	uint8_t x880 = 19U;
	volatile int32_t t149 = 1;

    t149 = ((x877-x878)>(x879*x880));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x881 = INT16_MIN;
	static int16_t x882 = 117;
	static volatile int32_t t150 = 4752690;

    t150 = ((x881-x882)>(x883*x884));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x885 = -1LL;
	volatile uint32_t x886 = 313385U;
	int32_t x887 = -2;
	volatile int8_t x888 = 17;
	volatile int32_t t151 = -1;

    t151 = ((x885-x886)>(x887*x888));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x890 = 5;
	volatile int64_t x891 = INT64_MIN;
	uint64_t x892 = 1LLU;
	int32_t t152 = 7171825;

    t152 = ((x889-x890)>(x891*x892));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x893 = -1;
	uint8_t x895 = 2U;
	int32_t x896 = -1;
	volatile int32_t t153 = -690835;

    t153 = ((x893-x894)>(x895*x896));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x901 = INT64_MIN;
	static int64_t x903 = 19567524228834289LL;
	static uint64_t x904 = UINT64_MAX;
	static int32_t t154 = 0;

    t154 = ((x901-x902)>(x903*x904));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x905 = -1LL;
	static volatile int32_t x906 = INT32_MIN;
	uint64_t x907 = UINT64_MAX;
	int16_t x908 = INT16_MAX;
	volatile int32_t t155 = 1208;

    t155 = ((x905-x906)>(x907*x908));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x909 = -1LL;
	uint32_t x910 = UINT32_MAX;
	volatile uint64_t x912 = 38389LLU;
	volatile int32_t t156 = 12;

    t156 = ((x909-x910)>(x911*x912));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x913 = 8;
	volatile int64_t x915 = 169707520LL;

    t157 = ((x913-x914)>(x915*x916));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x921 = -1906399842LL;
	uint64_t x922 = 439420LLU;
	int16_t x923 = -1;
	volatile int32_t t158 = 86150;

    t158 = ((x921-x922)>(x923*x924));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x941 = INT64_MAX;
	int32_t x942 = INT32_MAX;
	static uint64_t x943 = 217785LLU;
	volatile int8_t x944 = INT8_MIN;
	volatile int32_t t159 = 34;

    t159 = ((x941-x942)>(x943*x944));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x945 = 6060LL;
	uint32_t x946 = UINT32_MAX;
	static int16_t x948 = 758;
	volatile int32_t t160 = 76378;

    t160 = ((x945-x946)>(x947*x948));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x953 = 316;
	int8_t x954 = INT8_MIN;
	int32_t x955 = INT32_MIN;
	static uint32_t x956 = 816055U;
	volatile int32_t t161 = -8;

    t161 = ((x953-x954)>(x955*x956));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x958 = INT8_MIN;
	int16_t x959 = INT16_MIN;
	static int8_t x960 = -1;
	static int32_t t162 = 1782;

    t162 = ((x957-x958)>(x959*x960));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x969 = 3U;
	int16_t x970 = -7183;
	int32_t x972 = 6719270;
	int32_t t163 = -40103;

    t163 = ((x969-x970)>(x971*x972));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x973 = 1915177U;
	int16_t x975 = -244;
	volatile uint16_t x976 = 4U;
	int32_t t164 = 3;

    t164 = ((x973-x974)>(x975*x976));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x980 = -26533567393LL;
	volatile int32_t t165 = -3353;

    t165 = ((x977-x978)>(x979*x980));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x981 = 1819U;
	int64_t x982 = -1449738387761220680LL;
	uint64_t x983 = 1847037109LLU;
	volatile int16_t x984 = INT16_MIN;
	static int32_t t166 = -15798;

    t166 = ((x981-x982)>(x983*x984));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x993 = 834LL;
	static volatile int16_t x995 = INT16_MAX;
	uint16_t x996 = 27U;
	volatile int32_t t167 = -290986;

    t167 = ((x993-x994)>(x995*x996));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1001 = INT32_MIN;
	volatile int64_t x1002 = INT64_MIN;
	int64_t x1003 = -479991398LL;
	static volatile int32_t t168 = 1021;

    t168 = ((x1001-x1002)>(x1003*x1004));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1006 = -1;
	int32_t x1007 = INT32_MAX;
	volatile int8_t x1008 = 0;
	volatile int32_t t169 = -198808741;

    t169 = ((x1005-x1006)>(x1007*x1008));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1009 = 1224859U;
	uint8_t x1010 = 0U;
	int64_t x1011 = -1LL;
	static int64_t x1012 = -1LL;
	int32_t t170 = -1;

    t170 = ((x1009-x1010)>(x1011*x1012));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1013 = INT8_MIN;
	int64_t x1014 = INT64_MIN;
	int32_t x1015 = 1;

    t171 = ((x1013-x1014)>(x1015*x1016));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1018 = -2483;
	static volatile int16_t x1019 = INT16_MIN;
	uint64_t x1020 = 1LLU;

    t172 = ((x1017-x1018)>(x1019*x1020));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1021 = INT8_MIN;
	int16_t x1023 = INT16_MIN;
	volatile uint16_t x1024 = 489U;
	int32_t t173 = -224;

    t173 = ((x1021-x1022)>(x1023*x1024));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1025 = UINT8_MAX;
	int16_t x1026 = INT16_MIN;
	uint64_t x1027 = 3382972628332303481LLU;
	uint8_t x1028 = 103U;
	int32_t t174 = -36154140;

    t174 = ((x1025-x1026)>(x1027*x1028));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1029 = 76359283LL;
	int16_t x1030 = 298;
	volatile int16_t x1032 = INT16_MIN;
	static int32_t t175 = 57;

    t175 = ((x1029-x1030)>(x1031*x1032));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1033 = INT8_MIN;
	int8_t x1034 = INT8_MAX;
	uint16_t x1036 = UINT16_MAX;
	volatile int32_t t176 = 273;

    t176 = ((x1033-x1034)>(x1035*x1036));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1037 = UINT8_MAX;
	int16_t x1040 = INT16_MIN;
	volatile int32_t t177 = -53;

    t177 = ((x1037-x1038)>(x1039*x1040));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1041 = 106313;
	volatile uint8_t x1042 = 1U;
	int8_t x1043 = INT8_MIN;
	int16_t x1044 = -1;
	int32_t t178 = 1;

    t178 = ((x1041-x1042)>(x1043*x1044));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1045 = -1;
	int64_t x1046 = -1LL;
	uint64_t x1047 = UINT64_MAX;
	int16_t x1048 = INT16_MAX;
	int32_t t179 = 0;

    t179 = ((x1045-x1046)>(x1047*x1048));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1057 = 98U;
	int8_t x1058 = INT8_MIN;
	uint32_t x1059 = 498390651U;
	int16_t x1060 = INT16_MIN;

    t180 = ((x1057-x1058)>(x1059*x1060));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1061 = 4U;
	int16_t x1062 = 409;
	uint8_t x1063 = UINT8_MAX;
	static int16_t x1064 = -604;
	static int32_t t181 = 517373;

    t181 = ((x1061-x1062)>(x1063*x1064));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1069 = UINT8_MAX;
	int16_t x1070 = 1;
	uint64_t x1071 = 80LLU;
	static int64_t x1072 = INT64_MIN;
	int32_t t182 = -103;

    t182 = ((x1069-x1070)>(x1071*x1072));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1073 = -1;
	int16_t x1074 = 1;
	volatile uint64_t x1075 = UINT64_MAX;
	static int32_t x1076 = -11;
	volatile int32_t t183 = -144;

    t183 = ((x1073-x1074)>(x1075*x1076));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1077 = 14739U;
	static volatile int8_t x1078 = -54;
	int64_t x1079 = 86269LL;
	static int8_t x1080 = 0;
	volatile int32_t t184 = 7104;

    t184 = ((x1077-x1078)>(x1079*x1080));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1086 = 6U;
	uint64_t x1088 = UINT64_MAX;
	int32_t t185 = -102517501;

    t185 = ((x1085-x1086)>(x1087*x1088));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1093 = INT8_MIN;
	int64_t x1094 = INT64_MIN;
	uint64_t x1095 = UINT64_MAX;
	int16_t x1096 = INT16_MIN;
	static int32_t t186 = -6341960;

    t186 = ((x1093-x1094)>(x1095*x1096));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1097 = INT8_MAX;
	int16_t x1098 = INT16_MAX;
	static int32_t x1099 = -1;
	int32_t x1100 = INT32_MAX;
	int32_t t187 = -1540;

    t187 = ((x1097-x1098)>(x1099*x1100));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1102 = 970785217;
	int32_t x1103 = INT32_MIN;
	int64_t x1104 = 78LL;
	volatile int32_t t188 = -54781;

    t188 = ((x1101-x1102)>(x1103*x1104));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1109 = -270;
	int8_t x1110 = -24;
	uint32_t x1111 = 2U;
	volatile int8_t x1112 = INT8_MAX;
	int32_t t189 = 15796359;

    t189 = ((x1109-x1110)>(x1111*x1112));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1113 = -1;
	uint64_t x1114 = UINT64_MAX;
	volatile uint8_t x1115 = UINT8_MAX;
	int32_t x1116 = -1;
	volatile int32_t t190 = 0;

    t190 = ((x1113-x1114)>(x1115*x1116));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1117 = 32340202LLU;
	int8_t x1118 = INT8_MIN;
	volatile int32_t t191 = -325;

    t191 = ((x1117-x1118)>(x1119*x1120));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1121 = INT8_MIN;
	uint64_t x1122 = 14589181124400LLU;
	int16_t x1123 = -1;
	int32_t x1124 = INT32_MAX;
	int32_t t192 = 527538;

    t192 = ((x1121-x1122)>(x1123*x1124));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1125 = INT16_MIN;
	int64_t x1127 = 4335652LL;
	volatile int32_t t193 = -1814;

    t193 = ((x1125-x1126)>(x1127*x1128));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1133 = 41;
	volatile uint8_t x1135 = 20U;

    t194 = ((x1133-x1134)>(x1135*x1136));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1141 = INT16_MAX;
	int8_t x1142 = INT8_MAX;
	uint32_t x1143 = 3884966U;
	uint64_t x1144 = 251564106932734LLU;
	volatile int32_t t195 = -94528119;

    t195 = ((x1141-x1142)>(x1143*x1144));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1147 = -1;
	volatile uint16_t x1148 = 246U;
	int32_t t196 = -1;

    t196 = ((x1145-x1146)>(x1147*x1148));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1157 = 0;
	volatile int32_t x1159 = INT32_MAX;
	int16_t x1160 = -1;
	int32_t t197 = -6;

    t197 = ((x1157-x1158)>(x1159*x1160));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint64_t x1162 = 1LLU;
	uint16_t x1163 = UINT16_MAX;
	static int16_t x1164 = INT16_MIN;
	volatile int32_t t198 = 26572201;

    t198 = ((x1161-x1162)>(x1163*x1164));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1165 = 14U;
	int16_t x1166 = INT16_MAX;
	int16_t x1167 = -48;
	int16_t x1168 = -1;

    t199 = ((x1165-x1166)>(x1167*x1168));

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

