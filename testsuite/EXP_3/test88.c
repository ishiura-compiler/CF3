
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

static int8_t x8 = INT8_MIN;
int8_t x9 = 0;
uint64_t x11 = 7LLU;
static uint32_t t4 = 52274240U;
int8_t x22 = INT8_MAX;
int32_t x24 = 0;
static int64_t t5 = -6515989653925734LL;
int16_t x28 = INT16_MAX;
int64_t x41 = INT64_MAX;
static int32_t x49 = -1;
volatile uint16_t x50 = UINT16_MAX;
int32_t x52 = INT32_MAX;
volatile int16_t x53 = -1;
int8_t x56 = INT8_MIN;
int8_t x59 = -48;
static volatile int32_t t14 = -3;
static int8_t x63 = INT8_MAX;
int64_t x65 = 3194784203399LL;
volatile uint32_t x70 = 7444156U;
uint32_t t17 = 26U;
static int16_t x77 = -4080;
static uint32_t x84 = 187U;
int64_t t20 = -83708312177068264LL;
uint32_t x89 = UINT32_MAX;
volatile int32_t t23 = 295;
int64_t x104 = 273020913065LL;
int64_t t27 = -10025350433353096LL;
uint32_t x113 = 406625U;
int8_t x117 = 9;
int32_t x124 = -2;
int32_t x126 = INT32_MIN;
volatile uint64_t t33 = 24286432418452LLU;
static uint16_t x139 = 2134U;
volatile uint32_t t35 = 167356416U;
int16_t x146 = -1;
static uint8_t x148 = 12U;
volatile uint64_t x150 = UINT64_MAX;
static uint64_t t37 = 1846LLU;
uint8_t x156 = 0U;
int32_t x174 = -124324720;
volatile int32_t t42 = -5870;
int64_t x194 = INT64_MIN;
static volatile int64_t x196 = 12122772802334254LL;
static volatile int64_t t44 = 3727LL;
volatile uint32_t x198 = 826U;
volatile int8_t x204 = INT8_MIN;
int32_t x207 = -1;
int32_t x209 = -3126748;
int64_t t48 = -236LL;
static int32_t x220 = INT32_MIN;
volatile int8_t x225 = 1;
uint8_t x236 = 14U;
int32_t x237 = -1;
int32_t x257 = -1;
volatile int32_t x259 = 0;
volatile int64_t x263 = -1599575625437LL;
uint16_t x264 = 2U;
int16_t x266 = 104;
int32_t t61 = 227;
int8_t x272 = 0;
int32_t t62 = -833464;
uint16_t x273 = UINT16_MAX;
uint16_t x290 = 3880U;
uint32_t x293 = 366731636U;
uint16_t x294 = UINT16_MAX;
static int8_t x296 = 30;
static volatile int32_t t67 = 14234570;
volatile int16_t x299 = INT16_MAX;
int32_t x317 = INT32_MIN;
int32_t x319 = -1;
volatile uint8_t x324 = 4U;
volatile int64_t t72 = 10011832054901LL;
uint8_t x326 = UINT8_MAX;
volatile int16_t x335 = -1;
int16_t x336 = -1802;
int32_t t75 = 1;
static volatile uint64_t x337 = 461731578600LLU;
uint64_t x338 = 2988531068763621228LLU;
uint32_t x339 = UINT32_MAX;
static uint64_t x342 = 315459816894311LLU;
uint64_t x344 = 313426156618341612LLU;
static int32_t x347 = INT32_MIN;
int32_t t78 = -281846;
static int32_t x354 = -1;
volatile uint32_t t82 = 90U;
int8_t x376 = INT8_MIN;
int32_t t83 = 1;
int32_t x378 = -76;
static int32_t t84 = -23342;
volatile uint64_t t85 = 7399985140LLU;
static uint8_t x389 = 4U;
int8_t x390 = -1;
volatile int32_t t88 = 1047;
int16_t x398 = 916;
int8_t x399 = -1;
int32_t x400 = -1;
volatile int16_t x405 = INT16_MAX;
volatile int64_t t91 = -44082LL;
volatile int64_t x409 = INT64_MIN;
uint64_t x412 = 34026166273LLU;
static uint64_t t92 = 3588425293086201LLU;
int8_t x416 = 8;
int32_t t94 = 0;
static int16_t x429 = -1;
int16_t x438 = INT16_MIN;
int8_t x440 = 59;
int32_t t99 = 13635090;
int8_t x450 = INT8_MAX;
uint32_t x452 = UINT32_MAX;
volatile uint32_t t102 = 852U;
int64_t x458 = -1LL;
int16_t x460 = -1;
uint64_t t104 = 64822736711841477LLU;
uint32_t x462 = 1U;
volatile uint64_t x466 = 423390653715LLU;
int32_t t106 = -177470;
int32_t x474 = INT32_MAX;
volatile uint32_t x476 = UINT32_MAX;
uint32_t t107 = 11657116U;
uint16_t x480 = UINT16_MAX;
static int32_t t108 = 123;
volatile uint64_t t109 = 366168LLU;
int16_t x490 = INT16_MAX;
static uint16_t x493 = 176U;
int16_t x495 = INT16_MIN;
volatile int32_t t112 = 15;
int8_t x498 = INT8_MAX;
int16_t x499 = -1;
volatile int32_t t113 = 8171;
int64_t x503 = INT64_MIN;
int64_t x505 = INT64_MAX;
int64_t x507 = -659018686612000533LL;
int8_t x518 = INT8_MIN;
int8_t x520 = INT8_MAX;
int64_t x526 = 265158237425777713LL;
uint16_t x536 = UINT16_MAX;
volatile uint8_t x539 = UINT8_MAX;
uint64_t t122 = 2LLU;
int64_t t124 = -167632899486LL;
volatile int32_t x562 = INT32_MIN;
volatile int32_t x567 = -1;
static int16_t x577 = -1;
static int64_t x586 = -360587031019085190LL;
volatile int32_t t130 = 196489727;
volatile int16_t x592 = -1;
int16_t x594 = INT16_MIN;
volatile int64_t t132 = -883596499162758148LL;
static int32_t x599 = -1;
volatile uint32_t x600 = 33940U;
volatile uint32_t x603 = 107816U;
int32_t x604 = INT32_MAX;
uint32_t x607 = UINT32_MAX;
int16_t x610 = INT16_MIN;
int16_t x621 = INT16_MIN;
static volatile int16_t x623 = -411;
static uint64_t t140 = 349466309LLU;
int32_t x634 = INT32_MAX;
static volatile int32_t t145 = -2;
int8_t x661 = 0;
int32_t t147 = -21;
volatile uint16_t x665 = 1U;
volatile int16_t x669 = INT16_MAX;
volatile int64_t t150 = 32422LL;
volatile int8_t x684 = INT8_MIN;
volatile int32_t t151 = -13194;
int8_t x690 = -1;
uint8_t x691 = 1U;
static int16_t x692 = INT16_MIN;
static int16_t x693 = INT16_MAX;
int8_t x700 = -1;
volatile uint64_t x706 = 195323330201639943LLU;
volatile int32_t x709 = -23457157;
volatile int16_t x717 = 29;
int16_t x733 = -1;
int64_t x735 = INT64_MIN;
int32_t x738 = INT32_MIN;
static int32_t x745 = INT32_MIN;
static uint8_t x748 = UINT8_MAX;
volatile uint32_t x751 = 5205389U;
uint16_t x752 = 78U;
uint32_t t166 = 619934U;
volatile uint64_t x755 = 24595001350LLU;
uint64_t t169 = 171739908197812LLU;
static int64_t t170 = 3681LL;
static int64_t x778 = INT64_MAX;
uint64_t t172 = 101097293LLU;
uint64_t t174 = 5065207149895258LLU;
uint8_t x789 = 0U;
int32_t x790 = INT32_MAX;
int16_t x810 = INT16_MIN;
volatile int32_t x814 = INT32_MAX;
uint64_t x827 = UINT64_MAX;
static volatile uint64_t t181 = 49LLU;
int32_t x842 = -43387624;
static volatile int64_t t185 = -22LL;
int32_t t187 = 9;
static uint16_t x856 = UINT16_MAX;
uint32_t x863 = 9U;
volatile int16_t x866 = INT16_MIN;
static int32_t x869 = INT32_MAX;
int32_t x885 = 75;
volatile uint8_t x887 = 0U;
volatile uint8_t x889 = 2U;
static int64_t x909 = INT64_MAX;
static volatile int64_t x912 = INT64_MIN;


void f0(void) {
    	uint8_t x1 = 4U;
	int64_t x2 = 1096750LL;
	static int64_t x3 = INT64_MAX;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = 788638700988LL;

    t0 = ((x1!=x2)/(x3+x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x5 = INT8_MIN;
	uint64_t x6 = UINT64_MAX;
	int8_t x7 = -1;
	volatile int32_t t1 = 13;

    t1 = ((x5!=x6)/(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = INT64_MIN;
	volatile int64_t x12 = 5LL;
	uint64_t t2 = 781937691625679677LLU;

    t2 = ((x9!=x10)/(x11+x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	volatile int32_t x14 = -1;
	int64_t x15 = -1LL;
	int32_t x16 = -1;
	volatile int64_t t3 = 3275288790181LL;

    t3 = ((x13!=x14)/(x15+x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MAX;
	uint64_t x18 = 2970817392LLU;
	uint32_t x19 = 1261514U;
	volatile int16_t x20 = INT16_MIN;

    t4 = ((x17!=x18)/(x19+x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = UINT64_MAX;
	int64_t x23 = INT64_MIN;

    t5 = ((x21!=x22)/(x23+x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int64_t x26 = INT64_MIN;
	static int16_t x27 = INT16_MAX;
	int32_t t6 = -627085054;

    t6 = ((x25!=x26)/(x27+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	uint8_t x30 = 8U;
	volatile uint8_t x31 = 26U;
	uint8_t x32 = 7U;
	volatile int32_t t7 = -792;

    t7 = ((x29!=x30)/(x31+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	volatile int64_t x34 = INT64_MIN;
	static volatile int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 69855813;

    t8 = ((x33!=x34)/(x35+x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint8_t x38 = UINT8_MAX;
	uint64_t x39 = 1079631061283090LLU;
	volatile int32_t x40 = INT32_MIN;
	uint64_t t9 = 16870576545244LLU;

    t9 = ((x37!=x38)/(x39+x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = -6;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -9977118;

    t10 = ((x41!=x42)/(x43+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = 98837;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = -1;
	int32_t t11 = -44;

    t11 = ((x45!=x46)/(x47+x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x51 = 121LLU;
	uint64_t t12 = 136LLU;

    t12 = ((x49!=x50)/(x51+x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x54 = INT8_MIN;
	uint16_t x55 = 1440U;
	int32_t t13 = 61979;

    t13 = ((x53!=x54)/(x55+x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -403733660;
	volatile uint64_t x58 = UINT64_MAX;
	uint8_t x60 = UINT8_MAX;

    t14 = ((x57!=x58)/(x59+x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 3;
	int16_t x62 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 4015480;

    t15 = ((x61!=x62)/(x63+x64));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MIN;
	int32_t x67 = 1437;
	int16_t x68 = 149;
	volatile int32_t t16 = -159;

    t16 = ((x65!=x66)/(x67+x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = -1LL;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 6896U;

    t17 = ((x69!=x70)/(x71+x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = INT64_MIN;
	uint8_t x74 = UINT8_MAX;
	static int8_t x75 = -1;
	uint32_t x76 = 1361423602U;
	uint32_t t18 = 92620982U;

    t18 = ((x73!=x74)/(x75+x76));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	uint32_t x79 = 912284722U;
	uint64_t x80 = 8315LLU;
	volatile uint64_t t19 = 103344043LLU;

    t19 = ((x77!=x78)/(x79+x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 4812U;
	int8_t x82 = INT8_MIN;
	static volatile int64_t x83 = -1LL;

    t20 = ((x81!=x82)/(x83+x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	uint64_t x86 = 51753043877995928LLU;
	uint16_t x87 = 160U;
	static uint64_t x88 = 29749LLU;
	uint64_t t21 = 365294LLU;

    t21 = ((x85!=x86)/(x87+x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MIN;
	volatile uint8_t x91 = 9U;
	int64_t x92 = 15525077LL;
	volatile int64_t t22 = 52966273922LL;

    t22 = ((x89!=x90)/(x91+x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x93 = INT32_MIN;
	volatile int64_t x94 = INT64_MAX;
	volatile int16_t x95 = -81;
	static int8_t x96 = -1;

    t23 = ((x93!=x94)/(x95+x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = 509548013546LL;
	int64_t x98 = INT64_MIN;
	static int8_t x99 = INT8_MIN;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -88940;

    t24 = ((x97!=x98)/(x99+x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static int16_t x102 = INT16_MIN;
	uint64_t x103 = 867866643424LLU;
	volatile uint64_t t25 = 21LLU;

    t25 = ((x101!=x102)/(x103+x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MIN;
	uint8_t x106 = 3U;
	static volatile int64_t x107 = -664194LL;
	uint32_t x108 = 1242U;
	int64_t t26 = 45865889436LL;

    t26 = ((x105!=x106)/(x107+x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = INT16_MIN;
	static int32_t x110 = -1849;
	volatile int32_t x111 = INT32_MIN;
	int64_t x112 = -3561156641LL;

    t27 = ((x109!=x110)/(x111+x112));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x114 = -7;
	int8_t x115 = -1;
	uint16_t x116 = 12361U;
	int32_t t28 = -1;

    t28 = ((x113!=x114)/(x115+x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = 0;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = -43153;
	int32_t t29 = 0;

    t29 = ((x117!=x118)/(x119+x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	static volatile int64_t x122 = INT64_MIN;
	static int16_t x123 = INT16_MIN;
	static volatile int32_t t30 = -713329;

    t30 = ((x121!=x122)/(x123+x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x125 = 1U;
	int8_t x127 = INT8_MIN;
	uint16_t x128 = 110U;
	volatile int32_t t31 = 771;

    t31 = ((x125!=x126)/(x127+x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = UINT32_MAX;
	volatile uint8_t x130 = 25U;
	int16_t x131 = 1431;
	static volatile int8_t x132 = -1;
	volatile int32_t t32 = 72;

    t32 = ((x129!=x130)/(x131+x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 4616U;
	int32_t x134 = INT32_MIN;
	static int16_t x135 = 9560;
	uint64_t x136 = 2034825LLU;

    t33 = ((x133!=x134)/(x135+x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x137 = INT32_MAX;
	volatile uint64_t x138 = 7893693190717144657LLU;
	volatile uint16_t x140 = 8101U;
	volatile int32_t t34 = 7733;

    t34 = ((x137!=x138)/(x139+x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -1;
	volatile uint16_t x142 = 16729U;
	static volatile uint32_t x143 = 1913140800U;
	static int16_t x144 = INT16_MAX;

    t35 = ((x141!=x142)/(x143+x144));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 1848303;
	volatile int8_t x147 = INT8_MIN;
	volatile int32_t t36 = -325437139;

    t36 = ((x145!=x146)/(x147+x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	static int16_t x151 = 30;
	static volatile uint64_t x152 = 30LLU;

    t37 = ((x149!=x150)/(x151+x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	static uint32_t x154 = UINT32_MAX;
	int32_t x155 = 3611;
	volatile int32_t t38 = -224711;

    t38 = ((x153!=x154)/(x155+x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 12121726U;
	uint8_t x162 = 3U;
	volatile int64_t x163 = -504994350818LL;
	volatile int64_t x164 = -1LL;
	int64_t t39 = 11651033428LL;

    t39 = ((x161!=x162)/(x163+x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -1;
	int16_t x175 = 1;
	int64_t x176 = INT64_MIN;
	volatile int64_t t40 = -404568707525244LL;

    t40 = ((x173!=x174)/(x175+x176));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x177 = 23595U;
	uint16_t x178 = UINT16_MAX;
	uint64_t x179 = 3593969146446LLU;
	int64_t x180 = INT64_MAX;
	static uint64_t t41 = 118LLU;

    t41 = ((x177!=x178)/(x179+x180));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint16_t x183 = 9777U;
	volatile int32_t x184 = INT32_MIN;

    t42 = ((x181!=x182)/(x183+x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x189 = 5995;
	static int32_t x190 = INT32_MIN;
	static int64_t x191 = INT64_MAX;
	int8_t x192 = -4;
	volatile int64_t t43 = -171557769096LL;

    t43 = ((x189!=x190)/(x191+x192));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = 22;
	int16_t x195 = -1;

    t44 = ((x193!=x194)/(x195+x196));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -61;
	int16_t x199 = -1;
	volatile int8_t x200 = INT8_MAX;
	int32_t t45 = 3000;

    t45 = ((x197!=x198)/(x199+x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x201 = INT8_MIN;
	volatile int32_t x202 = INT32_MAX;
	int32_t x203 = -10;
	int32_t t46 = -76814687;

    t46 = ((x201!=x202)/(x203+x204));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	int8_t x208 = INT8_MAX;
	static int32_t t47 = -9702;

    t47 = ((x205!=x206)/(x207+x208));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x210 = 3100538219LLU;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MAX;

    t48 = ((x209!=x210)/(x211+x212));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x213 = -1;
	uint32_t x214 = 561708U;
	int32_t x215 = INT32_MIN;
	static volatile int32_t x216 = 962549;
	volatile int32_t t49 = -839732;

    t49 = ((x213!=x214)/(x215+x216));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x217 = 4349087214194680LLU;
	volatile uint64_t x218 = 102341220LLU;
	int64_t x219 = 320063649551LL;
	volatile int64_t t50 = -1959569632879272793LL;

    t50 = ((x217!=x218)/(x219+x220));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	uint16_t x223 = 566U;
	uint16_t x224 = 1846U;
	volatile int32_t t51 = -105924;

    t51 = ((x221!=x222)/(x223+x224));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x226 = INT8_MAX;
	int8_t x227 = -18;
	static int64_t x228 = -1LL;
	static int64_t t52 = 1LL;

    t52 = ((x225!=x226)/(x227+x228));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x229 = INT8_MIN;
	uint8_t x230 = 0U;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile uint32_t t53 = 284067978U;

    t53 = ((x229!=x230)/(x231+x232));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	int16_t x235 = 16302;
	static int32_t t54 = 28;

    t54 = ((x233!=x234)/(x235+x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = 1;
	static uint64_t x240 = 6440050168651658577LLU;
	uint64_t t55 = 2LLU;

    t55 = ((x237!=x238)/(x239+x240));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x245 = INT32_MAX;
	uint64_t x246 = UINT64_MAX;
	int64_t x247 = INT64_MIN;
	static volatile uint32_t x248 = 6205186U;
	volatile int64_t t56 = 398681877LL;

    t56 = ((x245!=x246)/(x247+x248));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	volatile uint32_t x251 = UINT32_MAX;
	static int32_t x252 = INT32_MAX;
	static volatile uint32_t t57 = 2899U;

    t57 = ((x249!=x250)/(x251+x252));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x253 = UINT8_MAX;
	int32_t x254 = 926998;
	static int32_t x255 = -1;
	int64_t x256 = INT64_MAX;
	int64_t t58 = -16639522929038671LL;

    t58 = ((x253!=x254)/(x255+x256));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x258 = -1;
	uint64_t x260 = 1072159709167LLU;
	volatile uint64_t t59 = 6LLU;

    t59 = ((x257!=x258)/(x259+x260));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x261 = INT64_MAX;
	volatile uint8_t x262 = 4U;
	int64_t t60 = -704670655138032018LL;

    t60 = ((x261!=x262)/(x263+x264));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = -1LL;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = INT8_MIN;

    t61 = ((x265!=x266)/(x267+x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MAX;
	int32_t x270 = -163402095;
	int8_t x271 = -1;

    t62 = ((x269!=x270)/(x271+x272));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x274 = -205134;
	int64_t x275 = -59668570810476029LL;
	static int8_t x276 = INT8_MIN;
	volatile int64_t t63 = 37LL;

    t63 = ((x273!=x274)/(x275+x276));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = INT8_MIN;
	int16_t x278 = 1;
	uint32_t x279 = UINT32_MAX;
	int64_t x280 = 1742154785895290LL;
	int64_t t64 = 7467256LL;

    t64 = ((x277!=x278)/(x279+x280));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = 1U;
	int32_t x286 = -1;
	uint32_t x287 = 2313U;
	static int32_t x288 = -1;
	volatile uint32_t t65 = 4054929U;

    t65 = ((x285!=x286)/(x287+x288));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	volatile uint8_t x292 = 13U;
	static volatile int32_t t66 = 246;

    t66 = ((x289!=x290)/(x291+x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x295 = -1;

    t67 = ((x293!=x294)/(x295+x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x297 = 18407025600LLU;
	volatile uint64_t x298 = UINT64_MAX;
	uint32_t x300 = 3432U;
	uint32_t t68 = 4419145U;

    t68 = ((x297!=x298)/(x299+x300));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x305 = 15635U;
	int32_t x306 = INT32_MIN;
	static int64_t x307 = 7LL;
	static int16_t x308 = INT16_MAX;
	int64_t t69 = 0LL;

    t69 = ((x305!=x306)/(x307+x308));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = 0;
	uint16_t x314 = 203U;
	volatile uint8_t x315 = 1U;
	uint64_t x316 = 436085801359LLU;
	uint64_t t70 = 5538058341341275847LLU;

    t70 = ((x313!=x314)/(x315+x316));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x318 = -1LL;
	static int32_t x320 = -45010802;
	int32_t t71 = -480345;

    t71 = ((x317!=x318)/(x319+x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 171U;
	static int64_t x323 = INT64_MIN;

    t72 = ((x321!=x322)/(x323+x324));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x325 = UINT16_MAX;
	int8_t x327 = 1;
	uint64_t x328 = 840636014536679LLU;
	volatile uint64_t t73 = 283796338LLU;

    t73 = ((x325!=x326)/(x327+x328));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x329 = -1LL;
	int64_t x330 = -1LL;
	int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t74 = -12968;

    t74 = ((x329!=x330)/(x331+x332));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = INT8_MIN;
	static int8_t x334 = INT8_MIN;

    t75 = ((x333!=x334)/(x335+x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x340 = -124LL;
	volatile int64_t t76 = -9221858727657910LL;

    t76 = ((x337!=x338)/(x339+x340));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x341 = 105273U;
	int32_t x343 = INT32_MAX;
	volatile uint64_t t77 = 2350536855LLU;

    t77 = ((x341!=x342)/(x343+x344));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = 811332909LL;
	uint8_t x346 = UINT8_MAX;
	int16_t x348 = INT16_MAX;

    t78 = ((x345!=x346)/(x347+x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x349 = 135;
	static int32_t x350 = INT32_MAX;
	static int16_t x351 = 146;
	volatile int64_t x352 = 127650LL;
	int64_t t79 = -526665LL;

    t79 = ((x349!=x350)/(x351+x352));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x353 = INT8_MIN;
	uint16_t x355 = 2629U;
	static int16_t x356 = INT16_MIN;
	int32_t t80 = 130338;

    t80 = ((x353!=x354)/(x355+x356));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	volatile int32_t x362 = 8813139;
	static uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MAX;
	volatile uint64_t t81 = 46LLU;

    t81 = ((x361!=x362)/(x363+x364));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x369 = INT64_MIN;
	uint8_t x370 = 124U;
	uint32_t x371 = 471742770U;
	static uint8_t x372 = UINT8_MAX;

    t82 = ((x369!=x370)/(x371+x372));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	volatile int8_t x375 = INT8_MIN;

    t83 = ((x373!=x374)/(x375+x376));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x377 = INT16_MAX;
	int32_t x379 = -1;
	int8_t x380 = INT8_MIN;

    t84 = ((x377!=x378)/(x379+x380));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x381 = 672;
	static volatile int16_t x382 = INT16_MIN;
	volatile uint64_t x383 = 5688224575LLU;
	static int64_t x384 = -1LL;

    t85 = ((x381!=x382)/(x383+x384));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 6668U;
	uint16_t x388 = 137U;
	static volatile int32_t t86 = 790414902;

    t86 = ((x385!=x386)/(x387+x388));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x391 = INT64_MIN;
	uint16_t x392 = UINT16_MAX;
	static volatile int64_t t87 = -925588814961LL;

    t87 = ((x389!=x390)/(x391+x392));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x393 = INT64_MIN;
	uint8_t x394 = 1U;
	static int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;

    t88 = ((x393!=x394)/(x395+x396));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile int32_t t89 = -240961;

    t89 = ((x397!=x398)/(x399+x400));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x402 = 21;
	volatile int32_t x403 = INT32_MIN;
	uint32_t x404 = 14713U;
	volatile uint32_t t90 = 105U;

    t90 = ((x401!=x402)/(x403+x404));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x406 = 3784524848042861284LLU;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MAX;

    t91 = ((x405!=x406)/(x407+x408));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x410 = 14;
	int8_t x411 = INT8_MAX;

    t92 = ((x409!=x410)/(x411+x412));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x413 = 60841U;
	volatile int64_t x414 = -26258799112LL;
	uint64_t x415 = 99439654563331510LLU;
	uint64_t t93 = 975LLU;

    t93 = ((x413!=x414)/(x415+x416));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = -1LL;
	volatile int8_t x418 = 1;
	int16_t x419 = 4;
	int8_t x420 = INT8_MIN;

    t94 = ((x417!=x418)/(x419+x420));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MAX;
	volatile uint32_t x423 = 410966494U;
	static uint64_t x424 = UINT64_MAX;
	volatile uint64_t t95 = 2458177661LLU;

    t95 = ((x421!=x422)/(x423+x424));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x425 = INT8_MAX;
	int64_t x426 = 85499912310616LL;
	uint64_t x427 = UINT64_MAX;
	static int64_t x428 = INT64_MAX;
	volatile uint64_t t96 = 15LLU;

    t96 = ((x425!=x426)/(x427+x428));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x430 = INT64_MIN;
	static volatile uint64_t x431 = UINT64_MAX;
	volatile int8_t x432 = INT8_MAX;
	volatile uint64_t t97 = 19745467481430LLU;

    t97 = ((x429!=x430)/(x431+x432));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x433 = 4U;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MIN;
	static int16_t x436 = 1424;
	static int32_t t98 = -13832;

    t98 = ((x433!=x434)/(x435+x436));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x437 = INT8_MAX;
	int8_t x439 = INT8_MIN;

    t99 = ((x437!=x438)/(x439+x440));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = INT16_MIN;
	volatile int64_t x442 = INT64_MIN;
	uint8_t x443 = 73U;
	uint16_t x444 = 1U;
	int32_t t100 = 11;

    t100 = ((x441!=x442)/(x443+x444));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MIN;
	static uint64_t x446 = 712545859713214188LLU;
	int8_t x447 = INT8_MAX;
	uint8_t x448 = 31U;
	int32_t t101 = 227710;

    t101 = ((x445!=x446)/(x447+x448));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x449 = UINT32_MAX;
	volatile int8_t x451 = INT8_MAX;

    t102 = ((x449!=x450)/(x451+x452));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x453 = INT8_MIN;
	int8_t x454 = -1;
	static volatile uint8_t x455 = UINT8_MAX;
	uint8_t x456 = 10U;
	volatile int32_t t103 = 1115925;

    t103 = ((x453!=x454)/(x455+x456));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MIN;
	uint64_t x459 = 7467602746378423LLU;

    t104 = ((x457!=x458)/(x459+x460));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = INT64_MAX;
	uint16_t x463 = 7185U;
	int64_t x464 = -349669425213551330LL;
	int64_t t105 = 222LL;

    t105 = ((x461!=x462)/(x463+x464));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x465 = UINT32_MAX;
	static int16_t x467 = INT16_MAX;
	volatile int8_t x468 = 1;

    t106 = ((x465!=x466)/(x467+x468));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x473 = INT64_MIN;
	int16_t x475 = 2467;

    t107 = ((x473!=x474)/(x475+x476));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x477 = INT16_MAX;
	volatile uint8_t x478 = UINT8_MAX;
	int32_t x479 = INT32_MIN;

    t108 = ((x477!=x478)/(x479+x480));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x481 = 740U;
	int32_t x482 = INT32_MIN;
	volatile int8_t x483 = 0;
	uint64_t x484 = 104576LLU;

    t109 = ((x481!=x482)/(x483+x484));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x485 = 3;
	int64_t x486 = 105LL;
	uint8_t x487 = 64U;
	int8_t x488 = -13;
	int32_t t110 = -10726058;

    t110 = ((x485!=x486)/(x487+x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x489 = INT32_MAX;
	int32_t x491 = INT32_MAX;
	static int16_t x492 = -3203;
	static volatile int32_t t111 = 133274;

    t111 = ((x489!=x490)/(x491+x492));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x494 = -1;
	int16_t x496 = 0;

    t112 = ((x493!=x494)/(x495+x496));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x497 = INT32_MIN;
	int8_t x500 = INT8_MAX;

    t113 = ((x497!=x498)/(x499+x500));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x501 = UINT16_MAX;
	volatile uint8_t x502 = 8U;
	volatile uint8_t x504 = 61U;
	volatile int64_t t114 = -58882978LL;

    t114 = ((x501!=x502)/(x503+x504));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x506 = -26;
	uint8_t x508 = UINT8_MAX;
	int64_t t115 = 973555807LL;

    t115 = ((x505!=x506)/(x507+x508));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x509 = -1;
	uint8_t x510 = 31U;
	static int32_t x511 = 1;
	uint32_t x512 = 1095931678U;
	uint32_t t116 = 1065266983U;

    t116 = ((x509!=x510)/(x511+x512));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x517 = -1LL;
	int64_t x519 = -522955881797659LL;
	volatile int64_t t117 = 521331LL;

    t117 = ((x517!=x518)/(x519+x520));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x521 = -8726648;
	int32_t x522 = -1;
	uint64_t x523 = 644240431LLU;
	int32_t x524 = 28;
	uint64_t t118 = 2875696190314LLU;

    t118 = ((x521!=x522)/(x523+x524));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x527 = -3;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t119 = 13793;

    t119 = ((x525!=x526)/(x527+x528));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x533 = INT16_MAX;
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = -1;
	int32_t t120 = 0;

    t120 = ((x533!=x534)/(x535+x536));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x537 = UINT32_MAX;
	int16_t x538 = INT16_MIN;
	uint16_t x540 = UINT16_MAX;
	int32_t t121 = -3;

    t121 = ((x537!=x538)/(x539+x540));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x541 = INT64_MAX;
	int8_t x542 = -44;
	static volatile int16_t x543 = -1454;
	uint64_t x544 = 37526LLU;

    t122 = ((x541!=x542)/(x543+x544));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x545 = -1;
	volatile int16_t x546 = -81;
	int64_t x547 = -58594726665103859LL;
	int64_t x548 = 0LL;
	int64_t t123 = -2550482047LL;

    t123 = ((x545!=x546)/(x547+x548));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x554 = INT32_MAX;
	int64_t x555 = INT64_MIN;
	volatile int32_t x556 = INT32_MAX;

    t124 = ((x553!=x554)/(x555+x556));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x561 = 14037616;
	int64_t x563 = -1LL;
	int8_t x564 = INT8_MIN;
	int64_t t125 = -58782313824LL;

    t125 = ((x561!=x562)/(x563+x564));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x565 = -9;
	int64_t x566 = -351862183612983LL;
	int64_t x568 = -505LL;
	static int64_t t126 = -1LL;

    t126 = ((x565!=x566)/(x567+x568));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = 0;
	volatile uint16_t x571 = 13U;
	int16_t x572 = INT16_MAX;
	int32_t t127 = 828063669;

    t127 = ((x569!=x570)/(x571+x572));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x573 = INT32_MIN;
	static int8_t x574 = 11;
	int16_t x575 = 13;
	uint64_t x576 = 2LLU;
	uint64_t t128 = 57928204682196LLU;

    t128 = ((x573!=x574)/(x575+x576));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x578 = INT32_MAX;
	static uint16_t x579 = UINT16_MAX;
	int8_t x580 = 18;
	int32_t t129 = -24695;

    t129 = ((x577!=x578)/(x579+x580));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x585 = 78422458LL;
	uint16_t x587 = UINT16_MAX;
	int16_t x588 = 1;

    t130 = ((x585!=x586)/(x587+x588));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x589 = INT32_MIN;
	int64_t x590 = 77778452108281LL;
	static int16_t x591 = INT16_MIN;
	int32_t t131 = 35814870;

    t131 = ((x589!=x590)/(x591+x592));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x593 = UINT8_MAX;
	int64_t x595 = 0LL;
	int32_t x596 = INT32_MAX;

    t132 = ((x593!=x594)/(x595+x596));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x597 = 58U;
	int16_t x598 = INT16_MIN;
	volatile uint32_t t133 = 107170U;

    t133 = ((x597!=x598)/(x599+x600));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x601 = 0U;
	uint64_t x602 = 408796LLU;
	uint32_t t134 = 625U;

    t134 = ((x601!=x602)/(x603+x604));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x605 = INT32_MIN;
	volatile int16_t x606 = -1;
	uint64_t x608 = 3249201742741263995LLU;
	volatile uint64_t t135 = 5393LLU;

    t135 = ((x605!=x606)/(x607+x608));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x609 = 24;
	int8_t x611 = INT8_MIN;
	static volatile int16_t x612 = INT16_MAX;
	volatile int32_t t136 = -104;

    t136 = ((x609!=x610)/(x611+x612));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x613 = 2970;
	static uint32_t x614 = 78506516U;
	uint32_t x615 = 6239259U;
	uint32_t x616 = 60280220U;
	volatile uint32_t t137 = 27U;

    t137 = ((x613!=x614)/(x615+x616));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x617 = UINT32_MAX;
	uint16_t x618 = 116U;
	int8_t x619 = -20;
	uint32_t x620 = 4U;
	static volatile uint32_t t138 = 1280U;

    t138 = ((x617!=x618)/(x619+x620));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x622 = -1;
	volatile int64_t x624 = INT64_MAX;
	int64_t t139 = -571848631LL;

    t139 = ((x621!=x622)/(x623+x624));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x629 = 2382119U;
	int16_t x630 = -2;
	uint64_t x631 = 1348525728610187LLU;
	static uint32_t x632 = UINT32_MAX;

    t140 = ((x629!=x630)/(x631+x632));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x633 = 12;
	static int32_t x635 = -60986937;
	int8_t x636 = 0;
	volatile int32_t t141 = 41329028;

    t141 = ((x633!=x634)/(x635+x636));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x641 = -1;
	int32_t x642 = -7;
	int16_t x643 = 11;
	uint16_t x644 = UINT16_MAX;
	static volatile int32_t t142 = 30951;

    t142 = ((x641!=x642)/(x643+x644));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x645 = -1;
	int64_t x646 = 15149LL;
	volatile uint8_t x647 = 16U;
	uint8_t x648 = 22U;
	int32_t t143 = -11756;

    t143 = ((x645!=x646)/(x647+x648));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x649 = 3345036956LL;
	int64_t x650 = -1344027203232593LL;
	static uint64_t x651 = 52LLU;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t144 = 55797456LLU;

    t144 = ((x649!=x650)/(x651+x652));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x653 = -1;
	volatile int8_t x654 = -1;
	uint8_t x655 = 0U;
	static uint16_t x656 = 64U;

    t145 = ((x653!=x654)/(x655+x656));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x657 = 100U;
	int16_t x658 = -51;
	int64_t x659 = INT64_MAX;
	int64_t x660 = INT64_MIN;
	int64_t t146 = -368017857413750LL;

    t146 = ((x657!=x658)/(x659+x660));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x662 = 6973086370223701573LLU;
	static int32_t x663 = 37375559;
	volatile int16_t x664 = INT16_MAX;

    t147 = ((x661!=x662)/(x663+x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x666 = INT8_MIN;
	uint64_t x667 = 1977546778LLU;
	uint8_t x668 = 0U;
	volatile uint64_t t148 = 3910578632190911269LLU;

    t148 = ((x665!=x666)/(x667+x668));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x670 = UINT32_MAX;
	int32_t x671 = -1;
	volatile int8_t x672 = INT8_MIN;
	int32_t t149 = 70953;

    t149 = ((x669!=x670)/(x671+x672));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x677 = INT32_MIN;
	volatile int16_t x678 = INT16_MIN;
	uint8_t x679 = 5U;
	static int64_t x680 = -1LL;

    t150 = ((x677!=x678)/(x679+x680));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x681 = INT32_MAX;
	int32_t x682 = INT32_MIN;
	uint16_t x683 = 276U;

    t151 = ((x681!=x682)/(x683+x684));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = -3186564507792LL;
	uint8_t x686 = 0U;
	int8_t x687 = 45;
	volatile int16_t x688 = -1;
	int32_t t152 = -360;

    t152 = ((x685!=x686)/(x687+x688));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x689 = -1353080194103270LL;
	int32_t t153 = -32963;

    t153 = ((x689!=x690)/(x691+x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x694 = 13743976688LLU;
	static uint16_t x695 = 23U;
	uint8_t x696 = 81U;
	int32_t t154 = 568770247;

    t154 = ((x693!=x694)/(x695+x696));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x697 = 3U;
	int64_t x698 = -1LL;
	static int8_t x699 = INT8_MIN;
	volatile int32_t t155 = 93;

    t155 = ((x697!=x698)/(x699+x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x701 = UINT32_MAX;
	static volatile int64_t x702 = 338225928LL;
	static uint32_t x703 = 15873812U;
	int64_t x704 = -1LL;
	volatile int64_t t156 = -4477283167677133LL;

    t156 = ((x701!=x702)/(x703+x704));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x705 = 0LLU;
	volatile uint8_t x707 = UINT8_MAX;
	uint64_t x708 = 1759392LLU;
	uint64_t t157 = 917126365661422LLU;

    t157 = ((x705!=x706)/(x707+x708));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x710 = 13;
	int16_t x711 = -1;
	volatile int8_t x712 = INT8_MIN;
	int32_t t158 = -23431668;

    t158 = ((x709!=x710)/(x711+x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x718 = -112;
	int64_t x719 = -1LL;
	uint32_t x720 = 3720575U;
	static int64_t t159 = -6LL;

    t159 = ((x717!=x718)/(x719+x720));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x721 = 646;
	volatile int32_t x722 = INT32_MIN;
	static uint64_t x723 = 271755LLU;
	volatile uint16_t x724 = UINT16_MAX;
	uint64_t t160 = 47LLU;

    t160 = ((x721!=x722)/(x723+x724));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x725 = 6U;
	int64_t x726 = 35638143807861LL;
	volatile int8_t x727 = 5;
	static volatile uint16_t x728 = 16345U;
	volatile int32_t t161 = 10652;

    t161 = ((x725!=x726)/(x727+x728));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x729 = INT32_MAX;
	uint8_t x730 = 3U;
	int16_t x731 = INT16_MAX;
	uint64_t x732 = 1308LLU;
	volatile uint64_t t162 = 553602685732509410LLU;

    t162 = ((x729!=x730)/(x731+x732));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x734 = 326U;
	uint16_t x736 = 1835U;
	int64_t t163 = 156702556369870LL;

    t163 = ((x733!=x734)/(x735+x736));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x737 = 65U;
	int64_t x739 = -1LL;
	int8_t x740 = INT8_MAX;
	static int64_t t164 = 51310429085400920LL;

    t164 = ((x737!=x738)/(x739+x740));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x746 = -1;
	int8_t x747 = INT8_MAX;
	static volatile int32_t t165 = 7;

    t165 = ((x745!=x746)/(x747+x748));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x749 = 29U;
	volatile uint8_t x750 = 61U;

    t166 = ((x749!=x750)/(x751+x752));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x753 = INT8_MIN;
	uint32_t x754 = UINT32_MAX;
	int8_t x756 = -2;
	uint64_t t167 = 14876143017969479LLU;

    t167 = ((x753!=x754)/(x755+x756));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x757 = 1;
	volatile int16_t x758 = -1;
	volatile int32_t x759 = INT32_MIN;
	int8_t x760 = INT8_MAX;
	volatile int32_t t168 = 5;

    t168 = ((x757!=x758)/(x759+x760));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x765 = 869749638U;
	int32_t x766 = INT32_MIN;
	volatile int32_t x767 = INT32_MIN;
	uint64_t x768 = 207383757052640814LLU;

    t169 = ((x765!=x766)/(x767+x768));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x769 = INT32_MIN;
	volatile uint8_t x770 = UINT8_MAX;
	static int16_t x771 = -2886;
	int64_t x772 = -1LL;

    t170 = ((x769!=x770)/(x771+x772));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x773 = -1;
	uint8_t x774 = UINT8_MAX;
	int64_t x775 = INT64_MIN;
	volatile int8_t x776 = INT8_MAX;
	volatile int64_t t171 = 661286076LL;

    t171 = ((x773!=x774)/(x775+x776));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x777 = -661;
	uint32_t x779 = 0U;
	uint64_t x780 = 17678564LLU;

    t172 = ((x777!=x778)/(x779+x780));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x781 = 7386733279596LLU;
	uint64_t x782 = 1590677248167LLU;
	uint8_t x783 = UINT8_MAX;
	uint64_t x784 = 30727435734183496LLU;
	volatile uint64_t t173 = 2613518229426552LLU;

    t173 = ((x781!=x782)/(x783+x784));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x785 = 61U;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	uint64_t x788 = 3251LLU;

    t174 = ((x785!=x786)/(x787+x788));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x791 = 434;
	int32_t x792 = -1;
	static volatile int32_t t175 = 1015494496;

    t175 = ((x789!=x790)/(x791+x792));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x797 = INT8_MAX;
	int8_t x798 = -1;
	int8_t x799 = -1;
	uint64_t x800 = 1502155827852439215LLU;
	uint64_t t176 = 8970346929LLU;

    t176 = ((x797!=x798)/(x799+x800));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x801 = -1;
	int16_t x802 = INT16_MIN;
	int64_t x803 = 68652483522936468LL;
	static int16_t x804 = INT16_MIN;
	int64_t t177 = 178970330219363LL;

    t177 = ((x801!=x802)/(x803+x804));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x809 = INT32_MIN;
	uint8_t x811 = 1U;
	volatile int8_t x812 = INT8_MIN;
	static volatile int32_t t178 = 4515;

    t178 = ((x809!=x810)/(x811+x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x813 = INT32_MIN;
	static int64_t x815 = INT64_MIN;
	static uint64_t x816 = UINT64_MAX;
	volatile uint64_t t179 = 3906444LLU;

    t179 = ((x813!=x814)/(x815+x816));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x817 = -154;
	int16_t x818 = 181;
	static uint8_t x819 = 1U;
	static volatile int64_t x820 = INT64_MIN;
	int64_t t180 = 1675LL;

    t180 = ((x817!=x818)/(x819+x820));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x825 = UINT64_MAX;
	int32_t x826 = INT32_MAX;
	int64_t x828 = INT64_MIN;

    t181 = ((x825!=x826)/(x827+x828));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x829 = 21U;
	int32_t x830 = INT32_MIN;
	uint8_t x831 = 0U;
	int64_t x832 = 99053552LL;
	int64_t t182 = -227560458578LL;

    t182 = ((x829!=x830)/(x831+x832));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x833 = INT32_MIN;
	int32_t x834 = -79;
	int32_t x835 = 14406;
	uint32_t x836 = UINT32_MAX;
	uint32_t t183 = 216670786U;

    t183 = ((x833!=x834)/(x835+x836));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x837 = UINT32_MAX;
	static int32_t x838 = 238;
	static int8_t x839 = INT8_MIN;
	static int32_t x840 = -97674;
	volatile int32_t t184 = 165;

    t184 = ((x837!=x838)/(x839+x840));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x841 = INT32_MAX;
	int8_t x843 = -1;
	int64_t x844 = 3456365669LL;

    t185 = ((x841!=x842)/(x843+x844));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x845 = 1U;
	static uint8_t x846 = 1U;
	int8_t x847 = INT8_MAX;
	uint16_t x848 = 138U;
	static int32_t t186 = -28;

    t186 = ((x845!=x846)/(x847+x848));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x849 = UINT64_MAX;
	uint16_t x850 = 219U;
	volatile int16_t x851 = INT16_MIN;
	static int32_t x852 = -5;

    t187 = ((x849!=x850)/(x851+x852));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x853 = 29618941;
	static int16_t x854 = -1;
	uint8_t x855 = 1U;
	int32_t t188 = 260653;

    t188 = ((x853!=x854)/(x855+x856));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x857 = INT8_MIN;
	int32_t x858 = 211937;
	int8_t x859 = 13;
	int32_t x860 = INT32_MIN;
	static int32_t t189 = 128516911;

    t189 = ((x857!=x858)/(x859+x860));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x861 = INT64_MAX;
	int64_t x862 = INT64_MIN;
	static uint16_t x864 = 219U;
	static volatile uint32_t t190 = 10683U;

    t190 = ((x861!=x862)/(x863+x864));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x865 = -1;
	static int16_t x867 = 6342;
	int8_t x868 = INT8_MIN;
	int32_t t191 = -1060898996;

    t191 = ((x865!=x866)/(x867+x868));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x870 = -1;
	int16_t x871 = INT16_MIN;
	uint64_t x872 = 161803LLU;
	uint64_t t192 = 929609LLU;

    t192 = ((x869!=x870)/(x871+x872));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x881 = INT8_MAX;
	uint64_t x882 = 1162991170870LLU;
	int16_t x883 = 40;
	int32_t x884 = -1;
	int32_t t193 = 0;

    t193 = ((x881!=x882)/(x883+x884));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x886 = UINT8_MAX;
	uint16_t x888 = 6639U;
	int32_t t194 = -12;

    t194 = ((x885!=x886)/(x887+x888));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x890 = INT8_MAX;
	int32_t x891 = 0;
	int8_t x892 = 47;
	volatile int32_t t195 = 346933334;

    t195 = ((x889!=x890)/(x891+x892));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x893 = INT8_MAX;
	static int32_t x894 = 200;
	int16_t x895 = -1;
	int64_t x896 = -1LL;
	volatile int64_t t196 = -38511176953050288LL;

    t196 = ((x893!=x894)/(x895+x896));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x897 = UINT64_MAX;
	uint32_t x898 = 0U;
	static uint32_t x899 = 11054445U;
	static uint32_t x900 = 14U;
	volatile uint32_t t197 = 1922620683U;

    t197 = ((x897!=x898)/(x899+x900));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x901 = 3819U;
	uint8_t x902 = 27U;
	static int16_t x903 = -1;
	int32_t x904 = -1;
	int32_t t198 = 89412393;

    t198 = ((x901!=x902)/(x903+x904));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x910 = 11447U;
	volatile uint16_t x911 = 15365U;
	int64_t t199 = -842737621947645LL;

    t199 = ((x909!=x910)/(x911+x912));

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

