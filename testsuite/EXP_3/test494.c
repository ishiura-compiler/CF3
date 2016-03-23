
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

static int64_t x1 = 461666817255294LL;
int32_t x3 = INT32_MAX;
volatile int16_t x8 = -7727;
int8_t x11 = -25;
int32_t x34 = 7793435;
volatile int32_t t6 = -26923796;
int16_t x55 = 476;
volatile int64_t t11 = -50615184733200LL;
int64_t t13 = 1816072LL;
volatile int32_t t15 = 1;
int64_t t16 = 9LL;
static int8_t x113 = INT8_MAX;
int16_t x117 = INT16_MAX;
uint16_t x130 = UINT16_MAX;
volatile int8_t x132 = -1;
volatile uint32_t x134 = 43135575U;
int16_t x135 = INT16_MAX;
volatile uint32_t t24 = 1U;
uint64_t x143 = UINT64_MAX;
int32_t x151 = -1;
static volatile uint64_t t28 = 26754072517536LLU;
static uint32_t x161 = 56U;
uint32_t x162 = UINT32_MAX;
uint32_t x165 = 572U;
static volatile int8_t x173 = 0;
static uint8_t x178 = 0U;
int16_t x184 = 376;
uint64_t x190 = 3478356401367910653LLU;
static uint64_t x196 = 18000505998358740LLU;
static int32_t x198 = INT32_MIN;
uint64_t x199 = 81LLU;
int64_t x206 = -1408657329999221LL;
static int32_t x208 = 3399171;
static volatile int64_t t39 = 214LL;
int16_t x218 = -87;
volatile int32_t t42 = 317199;
uint32_t x225 = 581612U;
int32_t x231 = INT32_MIN;
int32_t x233 = 190965504;
uint64_t x243 = 324LLU;
static uint32_t t48 = 29330496U;
int64_t x266 = INT64_MIN;
int8_t x267 = INT8_MIN;
int32_t x270 = INT32_MIN;
volatile int32_t t52 = 956164907;
uint64_t x276 = UINT64_MAX;
uint32_t x283 = 1U;
static uint8_t x284 = 117U;
volatile int32_t t55 = 697883;
int8_t x289 = -19;
int32_t t56 = 43;
volatile int8_t x300 = INT8_MAX;
int32_t t58 = -1244643;
uint64_t x310 = UINT64_MAX;
int8_t x315 = INT8_MIN;
int32_t x317 = INT32_MAX;
uint8_t x318 = 1U;
int64_t x319 = -1LL;
int64_t t63 = -6701017LL;
uint64_t x330 = UINT64_MAX;
int64_t t66 = -3279449715165024LL;
volatile int16_t x339 = -1;
int16_t x340 = INT16_MIN;
uint64_t x342 = UINT64_MAX;
int64_t x344 = -7896733960429LL;
int8_t x352 = INT8_MIN;
int32_t t70 = -21724437;
int64_t x355 = INT64_MAX;
static int64_t x358 = INT64_MIN;
int8_t x365 = INT8_MIN;
volatile int8_t x366 = -1;
volatile uint64_t x367 = 493193830459577341LLU;
volatile int32_t x368 = -1;
volatile int64_t x379 = -1LL;
int64_t t75 = 72764378140LL;
int8_t x389 = 25;
uint8_t x393 = 0U;
static uint64_t x396 = UINT64_MAX;
volatile uint64_t t79 = 61536LLU;
int32_t x398 = -3903;
int64_t t81 = -17274568152274LL;
uint8_t x406 = 1U;
static int32_t x421 = INT32_MIN;
uint8_t x424 = 10U;
static int64_t x428 = -1LL;
int32_t x429 = INT32_MIN;
uint8_t x433 = 39U;
uint64_t x436 = UINT64_MAX;
volatile int8_t x442 = INT8_MIN;
uint8_t x444 = 2U;
volatile uint64_t t87 = 472767990LLU;
static int8_t x459 = INT8_MIN;
volatile int32_t t89 = 471;
uint32_t x483 = 7585047U;
int32_t t93 = -21191;
int8_t x502 = 20;
static int16_t x507 = INT16_MIN;
volatile int32_t t95 = -474;
int16_t x527 = INT16_MAX;
int32_t t98 = 255263603;
int8_t x541 = -1;
int16_t x542 = -1;
int16_t x544 = -1467;
volatile int64_t t101 = -2244200240202011LL;
int16_t x552 = -1;
volatile int64_t t102 = -41700003487LL;
uint8_t x553 = 11U;
static uint32_t t103 = 561936U;
static volatile int32_t t105 = 113047;
int64_t x574 = 1LL;
volatile int8_t x575 = -1;
int32_t x577 = 101902409;
volatile uint64_t t107 = 545199178510414LLU;
int32_t x589 = INT32_MAX;
static int32_t x605 = 132390154;
volatile uint64_t t112 = 11901LLU;
volatile int8_t x626 = 0;
volatile int32_t x633 = 2303049;
volatile uint64_t x634 = UINT64_MAX;
int16_t x635 = INT16_MIN;
uint16_t x659 = UINT16_MAX;
int64_t t118 = -1LL;
static uint16_t x665 = 2U;
int64_t t121 = -14904041LL;
int32_t t122 = 265388824;
uint16_t x682 = 33U;
volatile int64_t t123 = -1LL;
int8_t x695 = -1;
static int8_t x703 = INT8_MIN;
int16_t x709 = -1;
int64_t x710 = -108828618827106LL;
int64_t x712 = -1LL;
uint16_t x715 = UINT16_MAX;
volatile uint64_t t130 = 670784222LLU;
int64_t x718 = INT64_MIN;
static uint32_t x736 = 183U;
static int16_t x746 = INT16_MAX;
int32_t t136 = 454;
volatile int32_t t139 = 25;
uint8_t x769 = UINT8_MAX;
volatile int64_t x773 = -1LL;
uint16_t x775 = UINT16_MAX;
int32_t x790 = INT32_MIN;
static volatile int32_t t142 = -1142;
static int16_t x796 = INT16_MAX;
int64_t x802 = INT64_MIN;
static volatile int16_t x806 = 86;
uint8_t x814 = UINT8_MAX;
volatile uint64_t t147 = 7889LLU;
volatile int32_t x836 = INT32_MIN;
volatile uint64_t x841 = 40988687466LLU;
int8_t x849 = -1;
int32_t x858 = 9637;
static uint16_t x859 = 9127U;
int32_t x862 = INT32_MAX;
uint16_t x864 = 1U;
volatile int32_t t157 = -452;
int32_t t158 = 72351407;
int64_t x891 = 58201531799419LL;
volatile int64_t t159 = 145181339469350LL;
volatile int16_t x897 = -4330;
volatile int8_t x899 = INT8_MIN;
volatile uint64_t t163 = 619649747LLU;
int64_t x922 = INT64_MIN;
volatile uint32_t t164 = 1U;
static int64_t x938 = -1LL;
int8_t x939 = -1;
int32_t x940 = 465457;
static int16_t x959 = INT16_MAX;
int64_t x968 = 318523LL;
uint32_t t173 = 5372701U;
int64_t x985 = INT64_MIN;
volatile int64_t x988 = 383523581LL;
static int64_t t176 = 35LL;
uint64_t x1010 = 2349517LLU;
volatile uint64_t t181 = 27LLU;
uint32_t x1019 = 7890522U;
int64_t x1020 = 21042502179LL;
static volatile int64_t t182 = 224970752LL;
int32_t x1021 = INT32_MAX;
volatile uint32_t x1024 = 6U;
volatile uint32_t t183 = 53U;
int32_t x1027 = INT32_MIN;
uint8_t x1033 = 0U;
volatile int64_t x1038 = INT64_MIN;
int32_t t186 = 106;
uint8_t x1047 = 78U;
volatile int8_t x1055 = -1;
uint64_t x1065 = 12904607LLU;
int32_t t191 = -6;
int32_t x1069 = INT32_MAX;
static int8_t x1089 = 7;
int16_t x1092 = -1;
volatile int32_t x1101 = -42939;
int32_t x1108 = 286;
int32_t x1112 = -1;
volatile int8_t x1113 = INT8_MAX;


void f0(void) {
    	volatile uint16_t x2 = 1U;
	volatile uint64_t x4 = 23246LLU;
	volatile uint64_t t0 = 430323191824354307LLU;

    t0 = ((x1==x2)/(x3*x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	volatile int64_t x6 = INT64_MIN;
	uint32_t x7 = 565U;
	uint32_t t1 = 1746U;

    t1 = ((x5==x6)/(x7*x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	uint16_t x10 = 0U;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 98516U;

    t2 = ((x9==x10)/(x11*x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x29 = INT64_MIN;
	static int16_t x30 = INT16_MIN;
	uint32_t x31 = 46738915U;
	int16_t x32 = -2947;
	uint32_t t3 = 13530U;

    t3 = ((x29==x30)/(x31*x32));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x33 = -1;
	int16_t x35 = -1756;
	int64_t x36 = 13834234LL;
	int64_t t4 = 32LL;

    t4 = ((x33==x34)/(x35*x36));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x41 = -1;
	int16_t x42 = INT16_MAX;
	static uint8_t x43 = 1U;
	volatile int32_t x44 = -1;
	volatile int32_t t5 = -1;

    t5 = ((x41==x42)/(x43*x44));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x45 = INT64_MIN;
	int16_t x46 = 1;
	volatile int8_t x47 = INT8_MAX;
	int8_t x48 = -61;

    t6 = ((x45==x46)/(x47*x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x53 = 558538335U;
	int64_t x54 = INT64_MIN;
	static uint8_t x56 = UINT8_MAX;
	static int32_t t7 = 520481;

    t7 = ((x53==x54)/(x55*x56));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x57 = 2422U;
	static uint8_t x58 = 91U;
	volatile uint64_t x59 = UINT64_MAX;
	static volatile uint8_t x60 = UINT8_MAX;
	volatile uint64_t t8 = 82280228846981136LLU;

    t8 = ((x57==x58)/(x59*x60));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x61 = 0;
	uint32_t x62 = 85270317U;
	int16_t x63 = INT16_MAX;
	uint32_t x64 = 117U;
	uint32_t t9 = 435U;

    t9 = ((x61==x62)/(x63*x64));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x65 = 12U;
	static int64_t x66 = -247740498644LL;
	uint32_t x67 = 158922U;
	static volatile int32_t x68 = -1;
	volatile uint32_t t10 = 40607U;

    t10 = ((x65==x66)/(x67*x68));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x69 = 10LLU;
	static int32_t x70 = -1;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -1LL;

    t11 = ((x69==x70)/(x71*x72));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x73 = -1LL;
	int32_t x74 = 4210735;
	int32_t x75 = 27902;
	static uint32_t x76 = 379U;
	uint32_t t12 = 1200615U;

    t12 = ((x73==x74)/(x75*x76));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = -1038888478068001LL;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -12701129419LL;
	int32_t x80 = 122392;

    t13 = ((x77==x78)/(x79*x80));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x81 = 17;
	int64_t x82 = INT64_MAX;
	uint32_t x83 = 140U;
	uint16_t x84 = UINT16_MAX;
	volatile uint32_t t14 = 42296U;

    t14 = ((x81==x82)/(x83*x84));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x85 = 0U;
	static volatile uint32_t x86 = 48331U;
	uint16_t x87 = 21U;
	uint8_t x88 = UINT8_MAX;

    t15 = ((x85==x86)/(x87*x88));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x89 = INT8_MAX;
	int16_t x90 = -67;
	volatile int64_t x91 = -1LL;
	volatile int32_t x92 = INT32_MIN;

    t16 = ((x89==x90)/(x91*x92));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x97 = 0LLU;
	volatile int8_t x98 = 0;
	int64_t x99 = -1LL;
	uint32_t x100 = 12733717U;
	int64_t t17 = 45698156660LL;

    t17 = ((x97==x98)/(x99*x100));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = 8601U;
	volatile int32_t t18 = 17626;

    t18 = ((x113==x114)/(x115*x116));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x118 = INT16_MAX;
	int16_t x119 = 1;
	static uint32_t x120 = 1U;
	uint32_t t19 = 0U;

    t19 = ((x117==x118)/(x119*x120));

    if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int16_t x123 = INT16_MAX;
	int16_t x124 = 521;
	volatile int32_t t20 = -40449570;

    t20 = ((x121==x122)/(x123*x124));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x125 = -2;
	int64_t x126 = 2481767451347633LL;
	int64_t x127 = -66529906890711LL;
	int16_t x128 = 1;
	volatile int64_t t21 = -43LL;

    t21 = ((x125==x126)/(x127*x128));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x129 = 99U;
	volatile int16_t x131 = INT16_MIN;
	static volatile int32_t t22 = -75894152;

    t22 = ((x129==x130)/(x131*x132));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x133 = INT32_MIN;
	uint8_t x136 = 53U;
	volatile int32_t t23 = -756722;

    t23 = ((x133==x134)/(x135*x136));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x137 = 48U;
	volatile int32_t x138 = 3274544;
	uint32_t x139 = UINT32_MAX;
	uint32_t x140 = 28U;

    t24 = ((x137==x138)/(x139*x140));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x142 = -12;
	volatile uint32_t x144 = UINT32_MAX;
	volatile uint64_t t25 = 380723457976LLU;

    t25 = ((x141==x142)/(x143*x144));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x149 = -1LL;
	volatile int64_t x150 = INT64_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t26 = 60631U;

    t26 = ((x149==x150)/(x151*x152));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 105U;
	int8_t x155 = INT8_MAX;
	static uint64_t x156 = UINT64_MAX;
	uint64_t t27 = 30175503404093083LLU;

    t27 = ((x153==x154)/(x155*x156));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x157 = INT32_MAX;
	int64_t x158 = -3038LL;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = 119833098463492544LLU;

    t28 = ((x157==x158)/(x159*x160));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x163 = 162U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t29 = -90;

    t29 = ((x161==x162)/(x163*x164));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x166 = INT64_MIN;
	static int32_t x167 = INT32_MAX;
	static volatile int64_t x168 = -1LL;
	static int64_t t30 = -62923321LL;

    t30 = ((x165==x166)/(x167*x168));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x174 = INT8_MIN;
	int32_t x175 = -654446;
	int8_t x176 = -1;
	volatile int32_t t31 = 1;

    t31 = ((x173==x174)/(x175*x176));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x177 = UINT16_MAX;
	static int8_t x179 = INT8_MIN;
	int64_t x180 = 69840046682010LL;
	int64_t t32 = 0LL;

    t32 = ((x177==x178)/(x179*x180));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x181 = 241463778;
	volatile int16_t x182 = 241;
	uint32_t x183 = 195286U;
	volatile uint32_t t33 = 1355086U;

    t33 = ((x181==x182)/(x183*x184));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x185 = 15596LLU;
	static int8_t x186 = INT8_MIN;
	uint8_t x187 = UINT8_MAX;
	static uint64_t x188 = 6914LLU;
	uint64_t t34 = 3970443345522453949LLU;

    t34 = ((x185==x186)/(x187*x188));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x189 = -1LL;
	volatile int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	int32_t t35 = -44878;

    t35 = ((x189==x190)/(x191*x192));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x193 = INT64_MIN;
	int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MIN;
	uint64_t t36 = 233LLU;

    t36 = ((x193==x194)/(x195*x196));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x197 = INT16_MIN;
	static uint32_t x200 = UINT32_MAX;
	volatile uint64_t t37 = 152493LLU;

    t37 = ((x197==x198)/(x199*x200));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x201 = 120251;
	int64_t x202 = 1LL;
	static int16_t x203 = -1;
	int64_t x204 = 130LL;
	volatile int64_t t38 = -807400LL;

    t38 = ((x201==x202)/(x203*x204));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x205 = -1;
	volatile int64_t x207 = 9348542LL;

    t39 = ((x205==x206)/(x207*x208));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x209 = 13U;
	uint64_t x210 = 123LLU;
	static int32_t x211 = -1;
	static int16_t x212 = 1;
	int32_t t40 = -42677;

    t40 = ((x209==x210)/(x211*x212));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x213 = INT32_MIN;
	volatile int8_t x214 = -1;
	int32_t x215 = 406;
	int16_t x216 = -2442;
	volatile int32_t t41 = 1479632;

    t41 = ((x213==x214)/(x215*x216));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x217 = 19361;
	volatile int32_t x219 = -1;
	int16_t x220 = INT16_MIN;

    t42 = ((x217==x218)/(x219*x220));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = -1;
	static int8_t x224 = INT8_MIN;
	int32_t t43 = -4929;

    t43 = ((x221==x222)/(x223*x224));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x226 = INT64_MIN;
	volatile int16_t x227 = -1;
	uint32_t x228 = 488U;
	uint32_t t44 = 13891755U;

    t44 = ((x225==x226)/(x227*x228));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = -1LL;
	static uint64_t x232 = 1680920065LLU;
	uint64_t t45 = 11070267512983LLU;

    t45 = ((x229==x230)/(x231*x232));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x234 = INT16_MAX;
	int8_t x235 = -2;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t46 = -1;

    t46 = ((x233==x234)/(x235*x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x241 = 1123U;
	int32_t x242 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	static volatile uint64_t t47 = 245LLU;

    t47 = ((x241==x242)/(x243*x244));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x245 = 22666U;
	uint16_t x246 = 286U;
	int8_t x247 = 1;
	uint32_t x248 = UINT32_MAX;

    t48 = ((x245==x246)/(x247*x248));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x249 = 7942U;
	int8_t x250 = -34;
	int16_t x251 = 4;
	static uint64_t x252 = UINT64_MAX;
	static uint64_t t49 = 71LLU;

    t49 = ((x249==x250)/(x251*x252));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x257 = 12343;
	uint8_t x258 = UINT8_MAX;
	static uint16_t x259 = 30U;
	int32_t x260 = -1553;
	int32_t t50 = 2;

    t50 = ((x257==x258)/(x259*x260));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x265 = INT32_MAX;
	int16_t x268 = -1;
	int32_t t51 = -87;

    t51 = ((x265==x266)/(x267*x268));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x271 = -1;
	int16_t x272 = -1;

    t52 = ((x269==x270)/(x271*x272));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x273 = -125;
	int16_t x274 = -3;
	int8_t x275 = -1;
	uint64_t t53 = 453221777351583289LLU;

    t53 = ((x273==x274)/(x275*x276));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x281 = -1906106573756846374LL;
	int64_t x282 = -251742689LL;
	uint32_t t54 = 4U;

    t54 = ((x281==x282)/(x283*x284));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = -1;
	uint8_t x287 = 35U;
	static int8_t x288 = -1;

    t55 = ((x285==x286)/(x287*x288));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x290 = 15532U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MAX;

    t56 = ((x289==x290)/(x291*x292));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x293 = INT8_MAX;
	static volatile int32_t x294 = 47;
	uint32_t x295 = 5244413U;
	volatile int16_t x296 = INT16_MIN;
	uint32_t t57 = 23598886U;

    t57 = ((x293==x294)/(x295*x296));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MIN;
	static uint16_t x299 = 131U;

    t58 = ((x297==x298)/(x299*x300));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x301 = UINT8_MAX;
	volatile uint64_t x302 = UINT64_MAX;
	uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 1LLU;
	uint64_t t59 = 19LLU;

    t59 = ((x301==x302)/(x303*x304));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x305 = 2U;
	int8_t x306 = INT8_MIN;
	static int32_t x307 = INT32_MAX;
	uint64_t x308 = 75LLU;
	volatile uint64_t t60 = 355259449578025304LLU;

    t60 = ((x305==x306)/(x307*x308));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = -24181824239777415LL;
	volatile uint16_t x311 = 1883U;
	int16_t x312 = -1;
	volatile int32_t t61 = -26;

    t61 = ((x309==x310)/(x311*x312));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MAX;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t62 = 46LLU;

    t62 = ((x313==x314)/(x315*x316));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x320 = INT16_MAX;

    t63 = ((x317==x318)/(x319*x320));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x325 = -766;
	volatile uint64_t x326 = 2409LLU;
	int16_t x327 = 2325;
	uint64_t x328 = UINT64_MAX;
	uint64_t t64 = 239246361883LLU;

    t64 = ((x325==x326)/(x327*x328));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x329 = 4553;
	uint32_t x331 = UINT32_MAX;
	uint8_t x332 = UINT8_MAX;
	uint32_t t65 = 1U;

    t65 = ((x329==x330)/(x331*x332));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x333 = 2879850858LLU;
	volatile uint64_t x334 = 19824462LLU;
	static int32_t x335 = 11281899;
	int64_t x336 = -1LL;

    t66 = ((x333==x334)/(x335*x336));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x337 = -3960490673LL;
	uint64_t x338 = 2836LLU;
	static int32_t t67 = -3115788;

    t67 = ((x337==x338)/(x339*x340));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x341 = 13U;
	uint8_t x343 = 1U;
	volatile int64_t t68 = 267009061287575749LL;

    t68 = ((x341==x342)/(x343*x344));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x345 = UINT64_MAX;
	static int64_t x346 = INT64_MIN;
	uint64_t x347 = 268962017529933224LLU;
	volatile uint64_t x348 = UINT64_MAX;
	uint64_t t69 = 363LLU;

    t69 = ((x345==x346)/(x347*x348));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x349 = -1;
	uint8_t x350 = 6U;
	int8_t x351 = INT8_MIN;

    t70 = ((x349==x350)/(x351*x352));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x353 = -21;
	int8_t x354 = -1;
	static int8_t x356 = -1;
	volatile int64_t t71 = -5656600188LL;

    t71 = ((x353==x354)/(x355*x356));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x357 = -1;
	int16_t x359 = -15;
	int16_t x360 = -1;
	static volatile int32_t t72 = 130;

    t72 = ((x357==x358)/(x359*x360));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x361 = 122125990386136664LLU;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 481185974311300LLU;
	int32_t x364 = 7025;
	uint64_t t73 = 3252434LLU;

    t73 = ((x361==x362)/(x363*x364));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t t74 = 35993807620884LLU;

    t74 = ((x365==x366)/(x367*x368));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x377 = 1;
	uint8_t x378 = UINT8_MAX;
	static int32_t x380 = INT32_MAX;

    t75 = ((x377==x378)/(x379*x380));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x381 = INT8_MAX;
	static int32_t x382 = INT32_MAX;
	int16_t x383 = -1;
	static volatile int16_t x384 = -6;
	static volatile int32_t t76 = 58240514;

    t76 = ((x381==x382)/(x383*x384));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x385 = INT32_MAX;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = -1;
	int32_t x388 = -1;
	static volatile int32_t t77 = 506508;

    t77 = ((x385==x386)/(x387*x388));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x390 = INT8_MAX;
	static int8_t x391 = -1;
	volatile int64_t x392 = 570907525964073717LL;
	static int64_t t78 = 5LL;

    t78 = ((x389==x390)/(x391*x392));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MIN;

    t79 = ((x393==x394)/(x395*x396));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x397 = 6364;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t80 = 74369;

    t80 = ((x397==x398)/(x399*x400));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x402 = 1734;
	int64_t x403 = 461508LL;
	uint32_t x404 = 20095U;

    t81 = ((x401==x402)/(x403*x404));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x405 = -1;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -364LL;
	int64_t t82 = 3427549267LL;

    t82 = ((x405==x406)/(x407*x408));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x422 = 10U;
	int32_t x423 = 3474472;
	volatile int32_t t83 = 2;

    t83 = ((x421==x422)/(x423*x424));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x425 = INT16_MAX;
	int32_t x426 = -1;
	uint64_t x427 = 6LLU;
	uint64_t t84 = 83713208467553870LLU;

    t84 = ((x425==x426)/(x427*x428));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x430 = INT64_MIN;
	static int16_t x431 = INT16_MIN;
	static uint64_t x432 = 2587453291589631LLU;
	volatile uint64_t t85 = 279482971919489LLU;

    t85 = ((x429==x430)/(x431*x432));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	uint64_t t86 = 2774601547555818LLU;

    t86 = ((x433==x434)/(x435*x436));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x441 = 992451843U;
	static uint64_t x443 = 178236383218717LLU;

    t87 = ((x441==x442)/(x443*x444));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x453 = INT16_MIN;
	volatile int64_t x454 = -1LL;
	uint64_t x455 = 24090167300122LLU;
	int16_t x456 = INT16_MIN;
	uint64_t t88 = 1LLU;

    t88 = ((x453==x454)/(x455*x456));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x457 = -6;
	int8_t x458 = INT8_MIN;
	int16_t x460 = -1897;

    t89 = ((x457==x458)/(x459*x460));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x473 = 202LL;
	static int16_t x474 = INT16_MIN;
	uint16_t x475 = UINT16_MAX;
	volatile int64_t x476 = -1LL;
	static int64_t t90 = 42783895146063363LL;

    t90 = ((x473==x474)/(x475*x476));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x477 = -1;
	int8_t x478 = INT8_MAX;
	static int16_t x479 = -3;
	int64_t x480 = -1LL;
	int64_t t91 = 79465217681959341LL;

    t91 = ((x477==x478)/(x479*x480));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x481 = -1;
	uint32_t x482 = 31220U;
	static int8_t x484 = -55;
	uint32_t t92 = 2099091950U;

    t92 = ((x481==x482)/(x483*x484));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x497 = -1LL;
	volatile uint32_t x498 = UINT32_MAX;
	uint16_t x499 = 718U;
	volatile uint8_t x500 = 101U;

    t93 = ((x497==x498)/(x499*x500));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x501 = 141595222LL;
	uint32_t x503 = 247498U;
	uint32_t x504 = UINT32_MAX;
	uint32_t t94 = 0U;

    t94 = ((x501==x502)/(x503*x504));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x505 = UINT32_MAX;
	static int32_t x506 = 26173557;
	static volatile int32_t x508 = 5619;

    t95 = ((x505==x506)/(x507*x508));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x517 = INT16_MIN;
	int64_t x518 = 81392511348LL;
	volatile uint64_t x519 = 299255422LLU;
	static uint32_t x520 = 4154865U;
	uint64_t t96 = 9870LLU;

    t96 = ((x517==x518)/(x519*x520));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x521 = -442LL;
	static int32_t x522 = -1;
	int32_t x523 = -83246552;
	int16_t x524 = -1;
	volatile int32_t t97 = 851;

    t97 = ((x521==x522)/(x523*x524));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x525 = -1;
	uint64_t x526 = 1648839552221823LLU;
	volatile int8_t x528 = 57;

    t98 = ((x525==x526)/(x527*x528));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x533 = UINT64_MAX;
	static volatile int64_t x534 = -1LL;
	int16_t x535 = 6892;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t99 = 194440;

    t99 = ((x533==x534)/(x535*x536));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x543 = 135;
	static int32_t t100 = -7;

    t100 = ((x541==x542)/(x543*x544));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = INT16_MIN;
	volatile int64_t x547 = -1LL;
	uint8_t x548 = 101U;

    t101 = ((x545==x546)/(x547*x548));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x549 = 1050U;
	int16_t x550 = 13123;
	int64_t x551 = -1LL;

    t102 = ((x549==x550)/(x551*x552));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x554 = 6207U;
	uint32_t x555 = 19233271U;
	static int32_t x556 = INT32_MIN;

    t103 = ((x553==x554)/(x555*x556));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x565 = 2055861145U;
	int32_t x566 = INT32_MIN;
	static int8_t x567 = -1;
	uint32_t x568 = 35U;
	volatile uint32_t t104 = 157866U;

    t104 = ((x565==x566)/(x567*x568));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x569 = -58343LL;
	static uint64_t x570 = 16281053LLU;
	static int8_t x571 = INT8_MIN;
	int8_t x572 = -1;

    t105 = ((x569==x570)/(x571*x572));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x573 = UINT8_MAX;
	int8_t x576 = 28;
	static int32_t t106 = -2045735;

    t106 = ((x573==x574)/(x575*x576));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x578 = 13U;
	uint64_t x579 = UINT64_MAX;
	uint64_t x580 = 47655017466156516LLU;

    t107 = ((x577==x578)/(x579*x580));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x581 = -137;
	int16_t x582 = -1;
	static volatile int32_t x583 = -1;
	static int16_t x584 = INT16_MIN;
	volatile int32_t t108 = 789;

    t108 = ((x581==x582)/(x583*x584));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x590 = -1;
	volatile int64_t x591 = -2247746LL;
	uint8_t x592 = UINT8_MAX;
	int64_t t109 = 3LL;

    t109 = ((x589==x590)/(x591*x592));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x593 = -1;
	volatile int8_t x594 = 1;
	volatile uint16_t x595 = UINT16_MAX;
	volatile int64_t x596 = -1LL;
	volatile int64_t t110 = -10076479990LL;

    t110 = ((x593==x594)/(x595*x596));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x606 = 2411865847627LLU;
	static int8_t x607 = -1;
	volatile int16_t x608 = INT16_MIN;
	volatile int32_t t111 = 71;

    t111 = ((x605==x606)/(x607*x608));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x617 = INT8_MIN;
	uint32_t x618 = 208U;
	int64_t x619 = INT64_MIN;
	uint64_t x620 = UINT64_MAX;

    t112 = ((x617==x618)/(x619*x620));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x621 = INT16_MIN;
	static int64_t x622 = 42649LL;
	uint64_t x623 = 278LLU;
	int32_t x624 = INT32_MAX;
	volatile uint64_t t113 = 1717LLU;

    t113 = ((x621==x622)/(x623*x624));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x625 = 3772117821235LLU;
	volatile uint8_t x627 = UINT8_MAX;
	int8_t x628 = 1;
	volatile int32_t t114 = 543;

    t114 = ((x625==x626)/(x627*x628));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x636 = 78U;
	int32_t t115 = 42;

    t115 = ((x633==x634)/(x635*x636));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x637 = -1LL;
	int16_t x638 = 522;
	uint8_t x639 = 14U;
	volatile int8_t x640 = 3;
	static volatile int32_t t116 = 1;

    t116 = ((x637==x638)/(x639*x640));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x645 = INT32_MAX;
	volatile int8_t x646 = INT8_MIN;
	int64_t x647 = INT64_MIN;
	static volatile int8_t x648 = 1;
	int64_t t117 = 20948195LL;

    t117 = ((x645==x646)/(x647*x648));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x657 = INT16_MIN;
	uint32_t x658 = 3641283U;
	int64_t x660 = 489LL;

    t118 = ((x657==x658)/(x659*x660));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x661 = 97588414;
	static uint32_t x662 = 12574U;
	static uint8_t x663 = 25U;
	uint8_t x664 = 13U;
	volatile int32_t t119 = -702549468;

    t119 = ((x661==x662)/(x663*x664));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x666 = 234219417664205LLU;
	uint64_t x667 = 70044973468LLU;
	int64_t x668 = 431067690436331759LL;
	uint64_t t120 = 4769376176201804127LLU;

    t120 = ((x665==x666)/(x667*x668));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x669 = -9535064;
	static int32_t x670 = INT32_MIN;
	int64_t x671 = 3719475122034352LL;
	int8_t x672 = INT8_MIN;

    t121 = ((x669==x670)/(x671*x672));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x673 = UINT8_MAX;
	uint8_t x674 = 3U;
	int16_t x675 = 441;
	static int16_t x676 = INT16_MIN;

    t122 = ((x673==x674)/(x675*x676));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x681 = -35;
	int64_t x683 = -1001263188LL;
	volatile uint8_t x684 = 1U;

    t123 = ((x681==x682)/(x683*x684));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x685 = 687569U;
	uint32_t x686 = UINT32_MAX;
	static int8_t x687 = INT8_MIN;
	static int64_t x688 = -7820226900327759LL;
	int64_t t124 = -5408103661LL;

    t124 = ((x685==x686)/(x687*x688));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x689 = 8U;
	int8_t x690 = -1;
	volatile uint32_t x691 = 151022U;
	int16_t x692 = INT16_MIN;
	uint32_t t125 = 30U;

    t125 = ((x689==x690)/(x691*x692));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x693 = INT16_MIN;
	static int32_t x694 = -1;
	volatile uint8_t x696 = 1U;
	int32_t t126 = 206476;

    t126 = ((x693==x694)/(x695*x696));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x701 = INT16_MIN;
	int8_t x702 = INT8_MAX;
	int8_t x704 = INT8_MIN;
	volatile int32_t t127 = 0;

    t127 = ((x701==x702)/(x703*x704));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x705 = -1;
	uint32_t x706 = UINT32_MAX;
	int16_t x707 = 737;
	uint32_t x708 = 839770312U;
	uint32_t t128 = 622883U;

    t128 = ((x705==x706)/(x707*x708));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x711 = -2069005183312LL;
	int64_t t129 = 44676264LL;

    t129 = ((x709==x710)/(x711*x712));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x713 = 397343U;
	int8_t x714 = 8;
	uint64_t x716 = 6480LLU;

    t130 = ((x713==x714)/(x715*x716));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x717 = 2;
	static int64_t x719 = -125LL;
	uint8_t x720 = 7U;
	static volatile int64_t t131 = -1098943408921LL;

    t131 = ((x717==x718)/(x719*x720));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x721 = -28LL;
	int8_t x722 = 1;
	static int64_t x723 = 5155883LL;
	int64_t x724 = -1LL;
	static int64_t t132 = 3798511155074067338LL;

    t132 = ((x721==x722)/(x723*x724));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x725 = INT64_MAX;
	uint8_t x726 = 13U;
	volatile uint8_t x727 = 1U;
	int16_t x728 = INT16_MIN;
	volatile int32_t t133 = -343;

    t133 = ((x725==x726)/(x727*x728));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x729 = UINT16_MAX;
	static int16_t x730 = -16037;
	static int64_t x731 = 9253999006016089LL;
	int8_t x732 = INT8_MIN;
	int64_t t134 = 83960712505LL;

    t134 = ((x729==x730)/(x731*x732));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x733 = INT64_MIN;
	volatile int64_t x734 = INT64_MIN;
	int32_t x735 = -494319952;
	uint32_t t135 = 15278040U;

    t135 = ((x733==x734)/(x735*x736));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x745 = UINT8_MAX;
	int16_t x747 = INT16_MIN;
	int32_t x748 = -1;

    t136 = ((x745==x746)/(x747*x748));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x749 = INT32_MAX;
	int8_t x750 = INT8_MIN;
	static int8_t x751 = -1;
	volatile int8_t x752 = INT8_MAX;
	int32_t t137 = -39388775;

    t137 = ((x749==x750)/(x751*x752));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x757 = 25220046U;
	int32_t x758 = 861701;
	int64_t x759 = INT64_MAX;
	int16_t x760 = -1;
	volatile int64_t t138 = -6011LL;

    t138 = ((x757==x758)/(x759*x760));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x765 = 334;
	volatile uint32_t x766 = 1258U;
	int8_t x767 = INT8_MAX;
	int32_t x768 = 736;

    t139 = ((x765==x766)/(x767*x768));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x770 = 19661524;
	int32_t x771 = -1;
	uint32_t x772 = 596739094U;
	volatile uint32_t t140 = 2598282U;

    t140 = ((x769==x770)/(x771*x772));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x774 = 38U;
	int16_t x776 = -1;
	int32_t t141 = 16;

    t141 = ((x773==x774)/(x775*x776));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x789 = INT8_MIN;
	int16_t x791 = -1;
	static volatile int32_t x792 = 375462;

    t142 = ((x789==x790)/(x791*x792));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x793 = INT64_MAX;
	uint64_t x794 = 11050527LLU;
	int8_t x795 = -1;
	volatile int32_t t143 = -43;

    t143 = ((x793==x794)/(x795*x796));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MIN;
	static int64_t x799 = -12164LL;
	int8_t x800 = INT8_MIN;
	static volatile int64_t t144 = 166LL;

    t144 = ((x797==x798)/(x799*x800));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x801 = 262463992U;
	uint8_t x803 = 2U;
	volatile uint32_t x804 = UINT32_MAX;
	uint32_t t145 = 165288765U;

    t145 = ((x801==x802)/(x803*x804));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x805 = -1;
	static uint64_t x807 = 137053582080717096LLU;
	static int32_t x808 = 766828;
	volatile uint64_t t146 = 5648LLU;

    t146 = ((x805==x806)/(x807*x808));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x813 = INT16_MIN;
	static volatile int16_t x815 = INT16_MIN;
	volatile uint64_t x816 = 9116994528LLU;

    t147 = ((x813==x814)/(x815*x816));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x817 = -313;
	int16_t x818 = -1;
	int32_t x819 = 479595;
	static int16_t x820 = -1;
	static int32_t t148 = -17390066;

    t148 = ((x817==x818)/(x819*x820));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x829 = 98958105;
	uint8_t x830 = 1U;
	int64_t x831 = -1LL;
	int16_t x832 = INT16_MAX;
	int64_t t149 = 3540282998817763726LL;

    t149 = ((x829==x830)/(x831*x832));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x833 = -3LL;
	uint16_t x834 = 3833U;
	static uint8_t x835 = 1U;
	int32_t t150 = -400939;

    t150 = ((x833==x834)/(x835*x836));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x837 = -846076268445LL;
	static int16_t x838 = INT16_MIN;
	static volatile int8_t x839 = INT8_MIN;
	static uint64_t x840 = UINT64_MAX;
	uint64_t t151 = 4209270864118LLU;

    t151 = ((x837==x838)/(x839*x840));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x842 = INT8_MIN;
	uint32_t x843 = UINT32_MAX;
	static int64_t x844 = 2LL;
	int64_t t152 = 4131LL;

    t152 = ((x841==x842)/(x843*x844));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x845 = 173U;
	uint8_t x846 = 111U;
	int32_t x847 = 509;
	uint8_t x848 = UINT8_MAX;
	int32_t t153 = 2295;

    t153 = ((x845==x846)/(x847*x848));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x850 = INT16_MIN;
	uint64_t x851 = 105704884715090234LLU;
	volatile uint16_t x852 = 3U;
	volatile uint64_t t154 = 37LLU;

    t154 = ((x849==x850)/(x851*x852));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x857 = -1;
	uint8_t x860 = UINT8_MAX;
	static volatile int32_t t155 = -4947024;

    t155 = ((x857==x858)/(x859*x860));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x861 = 15159U;
	int8_t x863 = INT8_MIN;
	int32_t t156 = -17538849;

    t156 = ((x861==x862)/(x863*x864));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x869 = INT32_MIN;
	int16_t x870 = INT16_MAX;
	int8_t x871 = -1;
	int8_t x872 = 21;

    t157 = ((x869==x870)/(x871*x872));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x881 = INT16_MAX;
	int64_t x882 = 795932420284555LL;
	uint16_t x883 = 3275U;
	int8_t x884 = INT8_MIN;

    t158 = ((x881==x882)/(x883*x884));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x889 = INT64_MIN;
	uint64_t x890 = 312107LLU;
	volatile uint32_t x892 = 7U;

    t159 = ((x889==x890)/(x891*x892));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x893 = -1;
	int8_t x894 = 1;
	int8_t x895 = INT8_MAX;
	int16_t x896 = INT16_MIN;
	volatile int32_t t160 = -13781809;

    t160 = ((x893==x894)/(x895*x896));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x898 = -4626;
	volatile uint8_t x900 = 39U;
	int32_t t161 = -247300000;

    t161 = ((x897==x898)/(x899*x900));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x905 = INT32_MIN;
	int64_t x906 = INT64_MIN;
	uint16_t x907 = UINT16_MAX;
	static uint8_t x908 = 51U;
	volatile int32_t t162 = -2;

    t162 = ((x905==x906)/(x907*x908));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x909 = INT32_MAX;
	static int8_t x910 = 1;
	int8_t x911 = INT8_MIN;
	uint64_t x912 = UINT64_MAX;

    t163 = ((x909==x910)/(x911*x912));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x921 = 465499U;
	static int32_t x923 = 28204907;
	uint32_t x924 = UINT32_MAX;

    t164 = ((x921==x922)/(x923*x924));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x929 = UINT64_MAX;
	uint8_t x930 = UINT8_MAX;
	int16_t x931 = -1;
	volatile int8_t x932 = INT8_MIN;
	volatile int32_t t165 = -2;

    t165 = ((x929==x930)/(x931*x932));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x933 = 0;
	int32_t x934 = INT32_MIN;
	int16_t x935 = INT16_MIN;
	volatile uint8_t x936 = 1U;
	volatile int32_t t166 = -1325;

    t166 = ((x933==x934)/(x935*x936));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x937 = 1U;
	int32_t t167 = -44;

    t167 = ((x937==x938)/(x939*x940));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x941 = INT16_MAX;
	uint8_t x942 = 5U;
	uint16_t x943 = UINT16_MAX;
	int32_t x944 = 3;
	static int32_t t168 = 421944747;

    t168 = ((x941==x942)/(x943*x944));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x953 = INT16_MIN;
	int8_t x954 = INT8_MIN;
	uint16_t x955 = 39U;
	int32_t x956 = -169713;
	volatile int32_t t169 = -3437452;

    t169 = ((x953==x954)/(x955*x956));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x957 = INT8_MIN;
	int8_t x958 = INT8_MIN;
	int8_t x960 = -1;
	int32_t t170 = 547;

    t170 = ((x957==x958)/(x959*x960));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x961 = 12499U;
	uint64_t x962 = 36080288469539LLU;
	int64_t x963 = -1LL;
	uint64_t x964 = UINT64_MAX;
	volatile uint64_t t171 = 11LLU;

    t171 = ((x961==x962)/(x963*x964));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x965 = UINT64_MAX;
	volatile int64_t x966 = 970733LL;
	int32_t x967 = 379239177;
	int64_t t172 = -186657LL;

    t172 = ((x965==x966)/(x967*x968));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x969 = INT16_MIN;
	volatile uint16_t x970 = 10U;
	volatile int16_t x971 = INT16_MAX;
	static uint32_t x972 = UINT32_MAX;

    t173 = ((x969==x970)/(x971*x972));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x973 = INT32_MAX;
	uint32_t x974 = 96U;
	uint8_t x975 = 2U;
	int8_t x976 = INT8_MIN;
	volatile int32_t t174 = -272487;

    t174 = ((x973==x974)/(x975*x976));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x981 = INT32_MAX;
	int8_t x982 = INT8_MIN;
	int8_t x983 = INT8_MIN;
	int16_t x984 = INT16_MIN;
	int32_t t175 = 39;

    t175 = ((x981==x982)/(x983*x984));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x986 = 370;
	uint8_t x987 = 70U;

    t176 = ((x985==x986)/(x987*x988));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x989 = 77U;
	volatile int8_t x990 = -1;
	volatile int16_t x991 = -1;
	volatile int8_t x992 = -1;
	static int32_t t177 = 0;

    t177 = ((x989==x990)/(x991*x992));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x997 = -1LL;
	int64_t x998 = INT64_MAX;
	int8_t x999 = 1;
	uint64_t x1000 = 11127LLU;
	uint64_t t178 = 3407607583164LLU;

    t178 = ((x997==x998)/(x999*x1000));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1005 = -1;
	static int32_t x1006 = -7960;
	volatile int8_t x1007 = -1;
	int8_t x1008 = INT8_MIN;
	int32_t t179 = -13;

    t179 = ((x1005==x1006)/(x1007*x1008));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1009 = 16574685597LLU;
	int8_t x1011 = INT8_MAX;
	volatile int32_t x1012 = -8;
	int32_t t180 = 102;

    t180 = ((x1009==x1010)/(x1011*x1012));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1013 = 15766288U;
	int8_t x1014 = INT8_MIN;
	int16_t x1015 = -3675;
	uint64_t x1016 = UINT64_MAX;

    t181 = ((x1013==x1014)/(x1015*x1016));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1017 = UINT16_MAX;
	volatile int8_t x1018 = INT8_MIN;

    t182 = ((x1017==x1018)/(x1019*x1020));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x1022 = -1;
	int32_t x1023 = 74569496;

    t183 = ((x1021==x1022)/(x1023*x1024));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x1025 = INT32_MIN;
	uint8_t x1026 = UINT8_MAX;
	uint32_t x1028 = UINT32_MAX;
	static volatile uint32_t t184 = 82225433U;

    t184 = ((x1025==x1026)/(x1027*x1028));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1034 = UINT64_MAX;
	static volatile int64_t x1035 = -1LL;
	static uint32_t x1036 = UINT32_MAX;
	volatile int64_t t185 = -110132432014LL;

    t185 = ((x1033==x1034)/(x1035*x1036));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1037 = INT16_MAX;
	static volatile int16_t x1039 = INT16_MIN;
	int16_t x1040 = -7;

    t186 = ((x1037==x1038)/(x1039*x1040));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1041 = 40096006546626LL;
	volatile uint64_t x1042 = 4826999310LLU;
	uint64_t x1043 = 105807567126324LLU;
	int32_t x1044 = INT32_MAX;
	volatile uint64_t t187 = 55833586122494LLU;

    t187 = ((x1041==x1042)/(x1043*x1044));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1045 = UINT64_MAX;
	int32_t x1046 = INT32_MIN;
	static volatile uint64_t x1048 = 7019917LLU;
	volatile uint64_t t188 = 95675591LLU;

    t188 = ((x1045==x1046)/(x1047*x1048));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x1053 = 49U;
	int16_t x1054 = -47;
	volatile uint8_t x1056 = 12U;
	volatile int32_t t189 = 416677;

    t189 = ((x1053==x1054)/(x1055*x1056));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1061 = 1U;
	volatile uint8_t x1062 = 20U;
	uint16_t x1063 = 71U;
	volatile uint64_t x1064 = UINT64_MAX;
	volatile uint64_t t190 = 2206LLU;

    t190 = ((x1061==x1062)/(x1063*x1064));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1066 = INT32_MAX;
	uint16_t x1067 = 2261U;
	int16_t x1068 = INT16_MIN;

    t191 = ((x1065==x1066)/(x1067*x1068));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1070 = 653818677U;
	static volatile uint8_t x1071 = UINT8_MAX;
	uint16_t x1072 = 1U;
	volatile int32_t t192 = -79236066;

    t192 = ((x1069==x1070)/(x1071*x1072));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1073 = -61;
	int32_t x1074 = INT32_MIN;
	volatile uint16_t x1075 = 3518U;
	int8_t x1076 = -1;
	volatile int32_t t193 = 252;

    t193 = ((x1073==x1074)/(x1075*x1076));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1085 = 78U;
	int16_t x1086 = INT16_MAX;
	static int16_t x1087 = -1;
	static int64_t x1088 = -1LL;
	int64_t t194 = -3LL;

    t194 = ((x1085==x1086)/(x1087*x1088));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1090 = INT64_MIN;
	int8_t x1091 = -16;
	volatile int32_t t195 = 114309555;

    t195 = ((x1089==x1090)/(x1091*x1092));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1102 = 8120939U;
	uint8_t x1103 = 9U;
	uint8_t x1104 = 28U;
	int32_t t196 = 5395;

    t196 = ((x1101==x1102)/(x1103*x1104));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1105 = 201273961390283LLU;
	uint32_t x1106 = UINT32_MAX;
	int64_t x1107 = -892488017LL;
	static int64_t t197 = 24100LL;

    t197 = ((x1105==x1106)/(x1107*x1108));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x1109 = -4273449870444LL;
	int32_t x1110 = INT32_MIN;
	int16_t x1111 = INT16_MIN;
	static int32_t t198 = -6312688;

    t198 = ((x1109==x1110)/(x1111*x1112));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1114 = -280;
	int32_t x1115 = INT32_MIN;
	static int64_t x1116 = -10LL;
	static int64_t t199 = 15005286801459LL;

    t199 = ((x1113==x1114)/(x1115*x1116));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

