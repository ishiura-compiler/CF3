
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

uint16_t x3 = 1U;
static uint8_t x4 = 111U;
int64_t x6 = INT64_MIN;
int32_t x15 = -85;
static volatile int8_t x18 = -9;
int64_t x20 = INT64_MAX;
volatile int32_t x21 = -14;
int16_t x22 = -11;
uint8_t x31 = 0U;
int16_t x34 = INT16_MIN;
volatile uint32_t x37 = UINT32_MAX;
uint32_t x40 = 254U;
int32_t x45 = -3;
int64_t x48 = 0LL;
int8_t x59 = INT8_MAX;
int16_t x64 = 3556;
int32_t t15 = 3;
int64_t x73 = 2805LL;
uint64_t x76 = 5119769465348118120LLU;
static int32_t t16 = -326375;
uint8_t x80 = UINT8_MAX;
int16_t x83 = INT16_MAX;
int8_t x86 = INT8_MAX;
uint32_t x87 = 16U;
static uint64_t x90 = 1LLU;
int16_t x91 = -1;
int8_t x96 = -1;
volatile int16_t x97 = -1;
int16_t x103 = -1;
int32_t x106 = 1;
volatile uint32_t x107 = UINT32_MAX;
int8_t x111 = INT8_MIN;
volatile int32_t t25 = 6516;
static int16_t x138 = -1;
static int32_t t31 = 72;
int64_t x147 = INT64_MAX;
volatile uint16_t x161 = 19U;
static int32_t x168 = INT32_MIN;
int32_t t36 = 73297587;
static uint16_t x175 = UINT16_MAX;
uint16_t x178 = 1644U;
uint16_t x180 = UINT16_MAX;
int8_t x183 = INT8_MIN;
int64_t x186 = 51LL;
volatile int64_t x187 = -11LL;
volatile uint8_t x203 = 18U;
int16_t x207 = INT16_MAX;
static int32_t x211 = INT32_MIN;
int64_t x212 = -463LL;
static int8_t x218 = 1;
static int32_t x223 = INT32_MAX;
int32_t t49 = -41650230;
static int32_t x228 = -3069;
int16_t x239 = -1;
int64_t x242 = INT64_MIN;
int8_t x244 = INT8_MAX;
static uint32_t x245 = 128U;
int8_t x250 = INT8_MIN;
static volatile int64_t x254 = -19920010LL;
int16_t x262 = INT16_MIN;
static int16_t x264 = INT16_MAX;
int32_t t61 = 1405;
uint16_t x278 = 12U;
volatile int16_t x286 = INT16_MAX;
int32_t x288 = -1;
int32_t x300 = -1;
volatile int32_t t66 = 2636;
volatile int8_t x307 = -10;
uint32_t x310 = UINT32_MAX;
volatile int8_t x311 = INT8_MIN;
volatile int32_t x339 = INT32_MAX;
int64_t x343 = -12883024623203LL;
int32_t x345 = -9767290;
volatile uint8_t x348 = UINT8_MAX;
int64_t x351 = -44439LL;
int8_t x355 = INT8_MIN;
static int16_t x366 = 6;
volatile int16_t x367 = 0;
volatile int32_t t81 = -357613949;
int32_t x378 = INT32_MIN;
static int16_t x379 = INT16_MIN;
int32_t x387 = -18;
uint64_t x389 = 52LLU;
int8_t x391 = INT8_MIN;
volatile int32_t t86 = -347319;
static uint8_t x399 = 38U;
uint64_t x405 = 4871992907713LLU;
static volatile int64_t x407 = -1034772LL;
uint32_t x416 = UINT32_MAX;
uint64_t x426 = 60377350933700LLU;
static volatile int8_t x429 = INT8_MIN;
int16_t x430 = INT16_MIN;
static int32_t x431 = 8521;
volatile int32_t t97 = 12708753;
static volatile int16_t x441 = -1;
static volatile int32_t t98 = 9;
static uint32_t x446 = 170U;
uint8_t x453 = UINT8_MAX;
static int64_t x465 = INT64_MIN;
int8_t x471 = INT8_MIN;
uint32_t x478 = 3898676U;
int32_t x480 = INT32_MIN;
int32_t t107 = 249402382;
int64_t x497 = INT64_MIN;
uint64_t x505 = 66338533025875329LLU;
int16_t x506 = 31;
static int8_t x509 = INT8_MAX;
int32_t t112 = -26;
volatile int32_t t113 = -77;
uint32_t x517 = UINT32_MAX;
volatile int64_t x524 = INT64_MAX;
static int8_t x525 = INT8_MIN;
volatile int16_t x530 = INT16_MAX;
int32_t t117 = 87744124;
volatile int32_t t118 = 878;
int8_t x537 = INT8_MIN;
volatile int16_t x539 = 1;
int32_t t119 = -10125079;
volatile int32_t t121 = 2758219;
static volatile uint8_t x550 = 13U;
static volatile int32_t t123 = 128033;
uint64_t x569 = 769579LLU;
static volatile int32_t t124 = 24715;
uint64_t x576 = UINT64_MAX;
uint64_t x577 = 7612LLU;
volatile int8_t x585 = INT8_MAX;
int32_t x587 = INT32_MAX;
volatile int64_t x590 = -3LL;
uint16_t x592 = 11U;
static volatile int32_t t129 = 63305668;
int8_t x593 = 0;
uint32_t x594 = 608087077U;
int32_t t130 = -46141;
volatile uint16_t x600 = UINT16_MAX;
volatile int32_t t131 = 7808;
volatile int8_t x603 = INT8_MIN;
int64_t x612 = 3731LL;
int16_t x615 = INT16_MIN;
static volatile int32_t x620 = -76408;
static int8_t x630 = 6;
static int8_t x647 = 0;
int8_t x653 = 4;
static volatile int32_t t141 = 82;
static int64_t x659 = -520600LL;
uint8_t x660 = UINT8_MAX;
uint32_t x670 = 9388709U;
static volatile uint32_t x671 = 22U;
int32_t x676 = INT32_MIN;
static int64_t x682 = 230LL;
uint8_t x683 = 27U;
int8_t x684 = -1;
uint16_t x689 = 530U;
volatile int32_t x691 = 251766;
int64_t x693 = INT64_MIN;
static int32_t x701 = -1;
volatile int8_t x704 = 1;
static int32_t t152 = -353690;
static uint64_t x706 = 93616572148149LLU;
uint64_t x707 = 472003062297633915LLU;
volatile int32_t t153 = -11785667;
static uint32_t x717 = UINT32_MAX;
volatile int8_t x732 = -4;
int16_t x734 = INT16_MAX;
uint64_t x736 = 458817191945LLU;
int16_t x737 = 1;
volatile int8_t x738 = 1;
static volatile uint32_t x740 = UINT32_MAX;
int8_t x742 = INT8_MAX;
int64_t x744 = -1LL;
static uint32_t x751 = UINT32_MAX;
int32_t t163 = -26;
int32_t t164 = 374451;
uint32_t x760 = UINT32_MAX;
static int32_t x766 = INT32_MAX;
uint64_t x775 = 0LLU;
uint64_t x776 = 61LLU;
uint64_t x784 = UINT64_MAX;
int32_t t171 = 814508311;
volatile int32_t t174 = 1;
uint16_t x799 = 16030U;
volatile int32_t x806 = INT32_MIN;
static int32_t t177 = 58357534;
int16_t x810 = INT16_MIN;
int16_t x811 = 6014;
static uint32_t x812 = UINT32_MAX;
uint32_t x823 = UINT32_MAX;
static int32_t x828 = INT32_MIN;
static int16_t x829 = INT16_MAX;
uint16_t x830 = UINT16_MAX;
int8_t x840 = INT8_MAX;
int32_t x847 = 12107;
int16_t x855 = -1;
uint64_t x856 = 21603LLU;
static int8_t x866 = 0;
int64_t x867 = 1448181795179466LL;
int8_t x873 = INT8_MAX;
volatile int32_t x877 = 4;
int32_t x878 = -1;
uint8_t x884 = 20U;
volatile uint32_t x885 = UINT32_MAX;
static volatile int32_t t195 = 754579751;
static int8_t x891 = INT8_MIN;
int32_t t196 = -33;
uint16_t x903 = 17746U;
volatile int32_t t198 = 3264;
int16_t x910 = INT16_MIN;


void f0(void) {
    	static volatile uint16_t x1 = 8134U;
	int32_t x2 = 6863;
	int32_t t0 = 174064;

    t0 = ((x1&(x2-x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint64_t x7 = 121400275LLU;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -83;

    t1 = ((x5&(x6-x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MAX;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 5361;

    t2 = ((x9&(x10-x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = -77;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -337944210;

    t3 = ((x13&(x14-x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static uint64_t x19 = 791038425LLU;
	volatile int32_t t4 = 43062;

    t4 = ((x17&(x18-x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = 24476498;
	int8_t x24 = 2;
	static int32_t t5 = 34;

    t5 = ((x21&(x22-x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = UINT16_MAX;
	uint64_t x30 = UINT64_MAX;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t6 = -758758;

    t6 = ((x29&(x30-x31))==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MIN;
	static volatile uint16_t x35 = UINT16_MAX;
	static int64_t x36 = INT64_MAX;
	volatile int32_t t7 = -68860627;

    t7 = ((x33&(x34-x35))==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = 1;
	static int16_t x39 = INT16_MAX;
	volatile int32_t t8 = 211;

    t8 = ((x37&(x38-x39))==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	static int16_t x42 = INT16_MIN;
	uint32_t x43 = 37U;
	int32_t x44 = INT32_MIN;
	static int32_t t9 = -94998;

    t9 = ((x41&(x42-x43))==x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x46 = 13909355U;
	uint64_t x47 = 0LLU;
	volatile int32_t t10 = -15;

    t10 = ((x45&(x46-x47))==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	static int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	uint8_t x52 = 1U;
	int32_t t11 = -6;

    t11 = ((x49&(x50-x51))==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 33921291359LLU;
	uint16_t x58 = 27766U;
	int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 13986897;

    t12 = ((x57&(x58-x59))==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x61 = 15U;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 107638494225700LLU;
	volatile int32_t t13 = 3185308;

    t13 = ((x61&(x62-x63))==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = UINT32_MAX;
	int64_t x66 = -1LL;
	static int64_t x67 = -2093226760278914800LL;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int32_t t14 = -21702;

    t14 = ((x65&(x66-x67))==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MIN;
	static int64_t x70 = 1105LL;
	volatile int64_t x71 = INT64_MAX;
	static int16_t x72 = INT16_MIN;

    t15 = ((x69&(x70-x71))==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x74 = INT32_MIN;
	int32_t x75 = -87925326;

    t16 = ((x73&(x74-x75))==x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static int32_t t17 = -16410149;

    t17 = ((x77&(x78-x79))==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 5U;
	int16_t x82 = -11;
	int16_t x84 = -1;
	int32_t t18 = -321286267;

    t18 = ((x81&(x82-x83))==x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 485493818LL;
	int8_t x88 = -1;
	volatile int32_t t19 = -36625;

    t19 = ((x85&(x86-x87))==x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x89 = -1;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t20 = 465;

    t20 = ((x89&(x90-x91))==x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = -1;
	int64_t x94 = 673LL;
	static int8_t x95 = INT8_MIN;
	volatile int32_t t21 = -11849;

    t21 = ((x93&(x94-x95))==x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = -1;
	volatile uint8_t x100 = UINT8_MAX;
	static volatile int32_t t22 = 45051;

    t22 = ((x97&(x98-x99))==x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = UINT64_MAX;
	int32_t x102 = INT32_MIN;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t23 = -13748767;

    t23 = ((x101&(x102-x103))==x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MIN;
	int16_t x108 = 266;
	volatile int32_t t24 = -319;

    t24 = ((x105&(x106-x107))==x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	uint8_t x110 = UINT8_MAX;
	int32_t x112 = INT32_MIN;

    t25 = ((x109&(x110-x111))==x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	uint32_t x114 = 16619U;
	uint32_t x115 = 3235166U;
	static int64_t x116 = -1LL;
	static int32_t t26 = 1828;

    t26 = ((x113&(x114-x115))==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x117 = 99447030109LLU;
	uint8_t x118 = 5U;
	int32_t x119 = -1;
	int8_t x120 = -1;
	int32_t t27 = 240;

    t27 = ((x117&(x118-x119))==x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = INT64_MAX;
	static volatile int32_t x126 = -1;
	int8_t x127 = INT8_MAX;
	volatile int64_t x128 = -21314611921985565LL;
	volatile int32_t t28 = -13;

    t28 = ((x125&(x126-x127))==x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x133 = INT16_MIN;
	int32_t x134 = 3;
	volatile uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MIN;
	static int32_t t29 = 3;

    t29 = ((x133&(x134-x135))==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x137 = -170;
	static uint32_t x139 = 17U;
	static volatile int32_t x140 = INT32_MIN;
	int32_t t30 = 1366726;

    t30 = ((x137&(x138-x139))==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x141 = 2013U;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = -1LL;
	uint32_t x144 = UINT32_MAX;

    t31 = ((x141&(x142-x143))==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x145 = INT32_MIN;
	volatile uint8_t x146 = 1U;
	uint8_t x148 = UINT8_MAX;
	static volatile int32_t t32 = 435;

    t32 = ((x145&(x146-x147))==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = 4549;
	int16_t x150 = 2309;
	int32_t x151 = -1;
	uint16_t x152 = 2U;
	volatile int32_t t33 = 6800349;

    t33 = ((x149&(x150-x151))==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x153 = 399326481U;
	uint16_t x154 = 0U;
	uint32_t x155 = 980U;
	uint64_t x156 = UINT64_MAX;
	int32_t t34 = 1061912;

    t34 = ((x153&(x154-x155))==x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x162 = 3413U;
	int16_t x163 = INT16_MAX;
	volatile int8_t x164 = -1;
	int32_t t35 = 17153132;

    t35 = ((x161&(x162-x163))==x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x165 = 2U;
	int8_t x166 = INT8_MAX;
	int64_t x167 = 33LL;

    t36 = ((x165&(x166-x167))==x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = 1053301U;
	volatile int16_t x174 = 6;
	volatile uint32_t x176 = 8U;
	int32_t t37 = 61;

    t37 = ((x173&(x174-x175))==x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x177 = 4046U;
	int16_t x179 = INT16_MAX;
	int32_t t38 = 42211039;

    t38 = ((x177&(x178-x179))==x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = -26LL;
	int16_t x182 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t39 = 400355;

    t39 = ((x181&(x182-x183))==x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x185 = 70851LLU;
	volatile int8_t x188 = INT8_MIN;
	int32_t t40 = 52863268;

    t40 = ((x185&(x186-x187))==x188);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	int32_t x190 = -1;
	int32_t x191 = -1;
	static int8_t x192 = -1;
	int32_t t41 = 32;

    t41 = ((x189&(x190-x191))==x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x193 = INT16_MIN;
	uint32_t x194 = 3736461U;
	static int16_t x195 = INT16_MAX;
	static uint64_t x196 = UINT64_MAX;
	int32_t t42 = 50405266;

    t42 = ((x193&(x194-x195))==x196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x197 = 9U;
	static int32_t x198 = -44807698;
	static int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MAX;
	int32_t t43 = 705974;

    t43 = ((x197&(x198-x199))==x200);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x201 = 112U;
	int16_t x202 = INT16_MIN;
	int32_t x204 = 1;
	volatile int32_t t44 = 0;

    t44 = ((x201&(x202-x203))==x204);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = 3U;
	uint32_t x206 = 32203759U;
	static uint16_t x208 = UINT16_MAX;
	int32_t t45 = 204224;

    t45 = ((x205&(x206-x207))==x208);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x209 = INT64_MIN;
	static uint64_t x210 = 138930LLU;
	static int32_t t46 = 205028193;

    t46 = ((x209&(x210-x211))==x212);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x213 = -11119956;
	uint16_t x214 = 17214U;
	int64_t x215 = INT64_MAX;
	int8_t x216 = -1;
	static int32_t t47 = -959486052;

    t47 = ((x213&(x214-x215))==x216);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = 3168113083996LL;
	uint16_t x219 = UINT16_MAX;
	static int32_t x220 = -1;
	int32_t t48 = 252;

    t48 = ((x217&(x218-x219))==x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MIN;
	static volatile uint16_t x222 = 1184U;
	volatile uint32_t x224 = 86429U;

    t49 = ((x221&(x222-x223))==x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x225 = 420165895315686LLU;
	int16_t x226 = 7426;
	int8_t x227 = -2;
	int32_t t50 = -261022126;

    t50 = ((x225&(x226-x227))==x228);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x229 = -1;
	volatile uint64_t x230 = 604776LLU;
	uint8_t x231 = 12U;
	uint64_t x232 = 136LLU;
	int32_t t51 = 133401204;

    t51 = ((x229&(x230-x231))==x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = 135;
	int32_t x234 = INT32_MIN;
	int64_t x235 = -1LL;
	volatile uint64_t x236 = UINT64_MAX;
	int32_t t52 = 14;

    t52 = ((x233&(x234-x235))==x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	int16_t x240 = -1;
	volatile int32_t t53 = -1837;

    t53 = ((x237&(x238-x239))==x240);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x241 = 16U;
	volatile int8_t x243 = -1;
	int32_t t54 = 88599290;

    t54 = ((x241&(x242-x243))==x244);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x246 = 743229150;
	int8_t x247 = INT8_MAX;
	volatile int32_t x248 = -2;
	int32_t t55 = 0;

    t55 = ((x245&(x246-x247))==x248);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x249 = -1;
	int16_t x251 = 107;
	int64_t x252 = 907973533321187LL;
	int32_t t56 = -1;

    t56 = ((x249&(x250-x251))==x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x253 = INT32_MIN;
	static int16_t x255 = INT16_MIN;
	int64_t x256 = -1LL;
	static int32_t t57 = -368;

    t57 = ((x253&(x254-x255))==x256);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x261 = INT8_MAX;
	int16_t x263 = INT16_MAX;
	static volatile int32_t t58 = -353089145;

    t58 = ((x261&(x262-x263))==x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x265 = -1;
	static int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t59 = -6;

    t59 = ((x265&(x266-x267))==x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	static volatile int8_t x271 = INT8_MIN;
	int64_t x272 = 50LL;
	int32_t t60 = -792590;

    t60 = ((x269&(x270-x271))==x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x273 = -1;
	int16_t x274 = INT16_MAX;
	static int16_t x275 = INT16_MAX;
	static uint64_t x276 = UINT64_MAX;

    t61 = ((x273&(x274-x275))==x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x277 = UINT8_MAX;
	int32_t x279 = INT32_MAX;
	int32_t x280 = INT32_MAX;
	int32_t t62 = 472;

    t62 = ((x277&(x278-x279))==x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x281 = INT8_MIN;
	uint8_t x282 = 7U;
	uint64_t x283 = 13215734088LLU;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t63 = -10;

    t63 = ((x281&(x282-x283))==x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x285 = 97U;
	int8_t x287 = 14;
	volatile int32_t t64 = -1950;

    t64 = ((x285&(x286-x287))==x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = -1;
	static uint16_t x298 = 3149U;
	static uint8_t x299 = 112U;
	int32_t t65 = 208012362;

    t65 = ((x297&(x298-x299))==x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = -1;
	int64_t x302 = 2038104953542734662LL;
	int8_t x303 = INT8_MAX;
	int32_t x304 = -7376140;

    t66 = ((x301&(x302-x303))==x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	uint32_t x308 = UINT32_MAX;
	static volatile int32_t t67 = 1;

    t67 = ((x305&(x306-x307))==x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x309 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	static int32_t t68 = -44654568;

    t68 = ((x309&(x310-x311))==x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x313 = INT8_MAX;
	int64_t x314 = INT64_MIN;
	int8_t x315 = -1;
	int16_t x316 = -2;
	int32_t t69 = -52203;

    t69 = ((x313&(x314-x315))==x316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x317 = 18;
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = -31308;
	int32_t t70 = -268604;

    t70 = ((x317&(x318-x319))==x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	static int32_t x323 = -1;
	static int64_t x324 = -6745LL;
	int32_t t71 = -39903;

    t71 = ((x321&(x322-x323))==x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x325 = 136005746483LLU;
	int16_t x326 = -1;
	uint16_t x327 = 3013U;
	static volatile int16_t x328 = INT16_MAX;
	volatile int32_t t72 = 2310950;

    t72 = ((x325&(x326-x327))==x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x329 = 0U;
	volatile int16_t x330 = 555;
	uint8_t x331 = 0U;
	uint8_t x332 = 26U;
	volatile int32_t t73 = -760156;

    t73 = ((x329&(x330-x331))==x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x333 = INT32_MIN;
	static int8_t x334 = -1;
	volatile uint32_t x335 = 18619684U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t74 = 0;

    t74 = ((x333&(x334-x335))==x336);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = -11;
	int64_t x338 = -2006976315712445LL;
	int32_t x340 = -8;
	static volatile int32_t t75 = 6253133;

    t75 = ((x337&(x338-x339))==x340);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x341 = INT8_MIN;
	uint16_t x342 = UINT16_MAX;
	int8_t x344 = 15;
	static int32_t t76 = 4051349;

    t76 = ((x341&(x342-x343))==x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x346 = 7545420;
	int8_t x347 = -6;
	volatile int32_t t77 = 30;

    t77 = ((x345&(x346-x347))==x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	volatile int8_t x352 = -1;
	int32_t t78 = -245208892;

    t78 = ((x349&(x350-x351))==x352);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = INT16_MIN;
	int8_t x354 = -1;
	uint8_t x356 = 3U;
	int32_t t79 = 1332364;

    t79 = ((x353&(x354-x355))==x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x361 = 0U;
	uint64_t x362 = 1376559417976871724LLU;
	static int8_t x363 = 0;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t80 = 52237539;

    t80 = ((x361&(x362-x363))==x364);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x365 = UINT8_MAX;
	int8_t x368 = INT8_MAX;

    t81 = ((x365&(x366-x367))==x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MIN;
	static int8_t x372 = -1;
	static int32_t t82 = -110;

    t82 = ((x369&(x370-x371))==x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = INT64_MAX;
	volatile int16_t x374 = 1;
	int64_t x375 = -1LL;
	uint64_t x376 = 333705846LLU;
	static int32_t t83 = 398546;

    t83 = ((x373&(x374-x375))==x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x380 = 115U;
	volatile int32_t t84 = -65907400;

    t84 = ((x377&(x378-x379))==x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x385 = -31025808LL;
	uint64_t x386 = UINT64_MAX;
	static int16_t x388 = -1;
	int32_t t85 = 651761495;

    t85 = ((x385&(x386-x387))==x388);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x390 = -1LL;
	volatile int64_t x392 = INT64_MIN;

    t86 = ((x389&(x390-x391))==x392);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x393 = 2;
	volatile int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	int64_t x396 = -358074169943LL;
	int32_t t87 = -3;

    t87 = ((x393&(x394-x395))==x396);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x397 = 2272;
	static uint16_t x398 = UINT16_MAX;
	volatile int8_t x400 = -1;
	volatile int32_t t88 = -480953;

    t88 = ((x397&(x398-x399))==x400);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x401 = 56LL;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	volatile int32_t x404 = 1590;
	static int32_t t89 = -6165;

    t89 = ((x401&(x402-x403))==x404);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x406 = INT8_MIN;
	static int8_t x408 = INT8_MIN;
	volatile int32_t t90 = -64795;

    t90 = ((x405&(x406-x407))==x408);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x413 = 238U;
	int32_t x414 = -1;
	uint64_t x415 = UINT64_MAX;
	volatile int32_t t91 = -51197;

    t91 = ((x413&(x414-x415))==x416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x417 = -407089091;
	volatile int64_t x418 = -1LL;
	uint8_t x419 = 2U;
	uint8_t x420 = UINT8_MAX;
	int32_t t92 = 103;

    t92 = ((x417&(x418-x419))==x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = -1;
	int32_t x422 = -2310;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t93 = 753517747;

    t93 = ((x421&(x422-x423))==x424);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x425 = 12LL;
	int16_t x427 = -3335;
	int64_t x428 = INT64_MIN;
	int32_t t94 = 2377;

    t94 = ((x425&(x426-x427))==x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x432 = 14U;
	static int32_t t95 = -2036557;

    t95 = ((x429&(x430-x431))==x432);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x433 = -1;
	static volatile uint8_t x434 = 4U;
	int64_t x435 = 7144988987LL;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t96 = -4000068;

    t96 = ((x433&(x434-x435))==x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x437 = 23010487741136LLU;
	int16_t x438 = INT16_MAX;
	static int64_t x439 = -1LL;
	int64_t x440 = -1LL;

    t97 = ((x437&(x438-x439))==x440);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x442 = 1021050710566880453LLU;
	static int64_t x443 = INT64_MIN;
	int32_t x444 = INT32_MAX;

    t98 = ((x441&(x442-x443))==x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x445 = -1LL;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = -1597;
	volatile int32_t t99 = 132573;

    t99 = ((x445&(x446-x447))==x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = 1;
	uint16_t x450 = 0U;
	int16_t x451 = 3;
	int32_t x452 = 733829;
	int32_t t100 = 554272452;

    t100 = ((x449&(x450-x451))==x452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x454 = UINT32_MAX;
	int16_t x455 = 10;
	static int16_t x456 = INT16_MIN;
	int32_t t101 = 55;

    t101 = ((x453&(x454-x455))==x456);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x461 = -1;
	volatile uint8_t x462 = UINT8_MAX;
	uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 1571U;
	static int32_t t102 = 670902234;

    t102 = ((x461&(x462-x463))==x464);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x466 = INT16_MIN;
	int8_t x467 = 6;
	int16_t x468 = INT16_MIN;
	int32_t t103 = 125855939;

    t103 = ((x465&(x466-x467))==x468);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x469 = 12661410LLU;
	int16_t x470 = -571;
	int8_t x472 = -1;
	volatile int32_t t104 = -59066;

    t104 = ((x469&(x470-x471))==x472);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x473 = INT16_MAX;
	int32_t x474 = -1883363;
	uint64_t x475 = UINT64_MAX;
	int32_t x476 = -282698;
	static int32_t t105 = 2037;

    t105 = ((x473&(x474-x475))==x476);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x477 = -899;
	volatile int64_t x479 = -3820086152730835LL;
	volatile int32_t t106 = -366553;

    t106 = ((x477&(x478-x479))==x480);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x481 = INT32_MIN;
	int32_t x482 = INT32_MIN;
	volatile int32_t x483 = INT32_MIN;
	static int8_t x484 = -1;

    t107 = ((x481&(x482-x483))==x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x489 = -6;
	int16_t x490 = INT16_MIN;
	int8_t x491 = INT8_MAX;
	static volatile int8_t x492 = -1;
	volatile int32_t t108 = -1949;

    t108 = ((x489&(x490-x491))==x492);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x498 = 998878422244LLU;
	int8_t x499 = INT8_MIN;
	volatile int64_t x500 = INT64_MAX;
	int32_t t109 = -4;

    t109 = ((x497&(x498-x499))==x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x501 = -1LL;
	uint8_t x502 = 53U;
	int16_t x503 = INT16_MIN;
	int64_t x504 = -7524551LL;
	volatile int32_t t110 = 769;

    t110 = ((x501&(x502-x503))==x504);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x507 = UINT16_MAX;
	static int8_t x508 = -1;
	volatile int32_t t111 = -3774968;

    t111 = ((x505&(x506-x507))==x508);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x510 = INT8_MIN;
	static int64_t x511 = -1LL;
	int8_t x512 = -1;

    t112 = ((x509&(x510-x511))==x512);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x513 = -1;
	static int64_t x514 = -1LL;
	static uint8_t x515 = UINT8_MAX;
	uint32_t x516 = 32710287U;

    t113 = ((x513&(x514-x515))==x516);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x518 = 0U;
	uint32_t x519 = 82924U;
	int8_t x520 = INT8_MIN;
	int32_t t114 = 0;

    t114 = ((x517&(x518-x519))==x520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x521 = 439LLU;
	volatile int32_t x522 = -6;
	volatile int8_t x523 = INT8_MIN;
	int32_t t115 = -240596891;

    t115 = ((x521&(x522-x523))==x524);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x526 = INT64_MIN;
	static int16_t x527 = -1;
	int64_t x528 = -1LL;
	int32_t t116 = 149;

    t116 = ((x525&(x526-x527))==x528);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x529 = INT64_MIN;
	uint64_t x531 = 1051470182LLU;
	uint8_t x532 = 16U;

    t117 = ((x529&(x530-x531))==x532);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint64_t x534 = UINT64_MAX;
	int64_t x535 = INT64_MAX;
	uint32_t x536 = 1710U;

    t118 = ((x533&(x534-x535))==x536);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x538 = INT16_MAX;
	int64_t x540 = 3623876427613766059LL;

    t119 = ((x537&(x538-x539))==x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x541 = 244457958;
	int64_t x542 = 44LL;
	int32_t x543 = INT32_MAX;
	int64_t x544 = INT64_MIN;
	volatile int32_t t120 = -10;

    t120 = ((x541&(x542-x543))==x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x545 = 1576656U;
	uint8_t x546 = 10U;
	volatile int8_t x547 = 0;
	int64_t x548 = -1LL;

    t121 = ((x545&(x546-x547))==x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x549 = -1LL;
	int8_t x551 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	int32_t t122 = -34443;

    t122 = ((x549&(x550-x551))==x552);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x565 = INT16_MAX;
	uint32_t x566 = UINT32_MAX;
	volatile int8_t x567 = INT8_MIN;
	static volatile int32_t x568 = INT32_MIN;

    t123 = ((x565&(x566-x567))==x568);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x570 = -7558;
	int16_t x571 = 14354;
	int16_t x572 = INT16_MAX;

    t124 = ((x569&(x570-x571))==x572);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x573 = INT8_MIN;
	static volatile uint32_t x574 = 614736U;
	int8_t x575 = -1;
	int32_t t125 = -27;

    t125 = ((x573&(x574-x575))==x576);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x578 = 6;
	static int64_t x579 = 2LL;
	int8_t x580 = 18;
	int32_t t126 = -45;

    t126 = ((x577&(x578-x579))==x580);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x581 = 12U;
	int32_t x582 = -447910;
	int64_t x583 = INT64_MIN;
	volatile int32_t x584 = INT32_MAX;
	static volatile int32_t t127 = 22059;

    t127 = ((x581&(x582-x583))==x584);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x586 = -2804428485007351LL;
	int32_t x588 = INT32_MAX;
	int32_t t128 = -60299;

    t128 = ((x585&(x586-x587))==x588);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x589 = 1927896171U;
	uint32_t x591 = UINT32_MAX;

    t129 = ((x589&(x590-x591))==x592);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x595 = -1;
	int16_t x596 = -114;

    t130 = ((x593&(x594-x595))==x596);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x597 = 1U;
	static int8_t x598 = 4;
	volatile int32_t x599 = -700;

    t131 = ((x597&(x598-x599))==x600);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x601 = 1499U;
	volatile uint32_t x602 = UINT32_MAX;
	int32_t x604 = INT32_MIN;
	static int32_t t132 = -1180699;

    t132 = ((x601&(x602-x603))==x604);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x609 = -17981;
	int16_t x610 = -1;
	int8_t x611 = -1;
	static volatile int32_t t133 = 1;

    t133 = ((x609&(x610-x611))==x612);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x613 = INT64_MAX;
	int8_t x614 = INT8_MAX;
	int64_t x616 = -1226090722798LL;
	int32_t t134 = -507;

    t134 = ((x613&(x614-x615))==x616);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x617 = 199408885;
	uint8_t x618 = 5U;
	uint16_t x619 = 290U;
	static volatile int32_t t135 = 838;

    t135 = ((x617&(x618-x619))==x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x621 = INT32_MIN;
	int64_t x622 = -204896121881877LL;
	volatile uint16_t x623 = 412U;
	int16_t x624 = INT16_MAX;
	volatile int32_t t136 = 1045;

    t136 = ((x621&(x622-x623))==x624);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x625 = INT16_MIN;
	static int32_t x626 = -1;
	volatile int8_t x627 = INT8_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t137 = 15877960;

    t137 = ((x625&(x626-x627))==x628);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x629 = INT8_MAX;
	volatile int64_t x631 = 10034108489492019LL;
	uint64_t x632 = UINT64_MAX;
	int32_t t138 = 16981;

    t138 = ((x629&(x630-x631))==x632);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x641 = -1;
	int32_t x642 = -31023;
	int8_t x643 = INT8_MAX;
	int64_t x644 = 98LL;
	int32_t t139 = 88;

    t139 = ((x641&(x642-x643))==x644);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x645 = 17049211948LL;
	int16_t x646 = INT16_MIN;
	static int8_t x648 = -1;
	static volatile int32_t t140 = 361;

    t140 = ((x645&(x646-x647))==x648);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x654 = 1;
	uint16_t x655 = 2337U;
	int64_t x656 = 0LL;

    t141 = ((x653&(x654-x655))==x656);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile uint64_t x658 = 35287430LLU;
	static int32_t t142 = -84571059;

    t142 = ((x657&(x658-x659))==x660);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x661 = INT16_MAX;
	uint8_t x662 = 8U;
	volatile int16_t x663 = -1;
	uint32_t x664 = 340814567U;
	volatile int32_t t143 = 12552;

    t143 = ((x661&(x662-x663))==x664);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x666 = 58;
	uint16_t x667 = 2U;
	volatile int32_t x668 = 378803;
	static volatile int32_t t144 = -283;

    t144 = ((x665&(x666-x667))==x668);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x669 = UINT8_MAX;
	int8_t x672 = INT8_MAX;
	static volatile int32_t t145 = -196508831;

    t145 = ((x669&(x670-x671))==x672);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x673 = INT32_MIN;
	int16_t x674 = INT16_MIN;
	volatile int16_t x675 = -1;
	int32_t t146 = -933760889;

    t146 = ((x673&(x674-x675))==x676);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x677 = UINT8_MAX;
	static uint16_t x678 = 3U;
	int64_t x679 = 10299LL;
	int64_t x680 = -788LL;
	volatile int32_t t147 = -55;

    t147 = ((x677&(x678-x679))==x680);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x681 = -1;
	int32_t t148 = -5;

    t148 = ((x681&(x682-x683))==x684);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x685 = 33U;
	int32_t x686 = INT32_MIN;
	uint32_t x687 = UINT32_MAX;
	int64_t x688 = INT64_MAX;
	static int32_t t149 = -56;

    t149 = ((x685&(x686-x687))==x688);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x690 = 8069U;
	volatile int32_t x692 = -1;
	volatile int32_t t150 = -169828764;

    t150 = ((x689&(x690-x691))==x692);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x694 = 21;
	uint16_t x695 = 4U;
	int8_t x696 = INT8_MAX;
	volatile int32_t t151 = 33127;

    t151 = ((x693&(x694-x695))==x696);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x702 = -1;
	volatile int64_t x703 = 3777023047704192736LL;

    t152 = ((x701&(x702-x703))==x704);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x705 = 2279U;
	int8_t x708 = -1;

    t153 = ((x705&(x706-x707))==x708);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x709 = INT64_MAX;
	volatile int16_t x710 = INT16_MIN;
	static int16_t x711 = 768;
	int32_t x712 = 3790;
	volatile int32_t t154 = 1421;

    t154 = ((x709&(x710-x711))==x712);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x713 = -1LL;
	volatile int32_t x714 = -1;
	int8_t x715 = INT8_MIN;
	uint8_t x716 = 13U;
	int32_t t155 = -350;

    t155 = ((x713&(x714-x715))==x716);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x718 = -1;
	int32_t x719 = INT32_MIN;
	int64_t x720 = 3LL;
	static int32_t t156 = -46283;

    t156 = ((x717&(x718-x719))==x720);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x721 = -9330;
	int16_t x722 = -1;
	int8_t x723 = INT8_MIN;
	static int32_t x724 = 1;
	int32_t t157 = 21226;

    t157 = ((x721&(x722-x723))==x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x725 = INT8_MAX;
	int16_t x726 = -5;
	uint64_t x727 = UINT64_MAX;
	volatile int16_t x728 = INT16_MAX;
	int32_t t158 = -2;

    t158 = ((x725&(x726-x727))==x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x729 = 6U;
	int16_t x730 = INT16_MIN;
	uint32_t x731 = 244211U;
	volatile int32_t t159 = -16959;

    t159 = ((x729&(x730-x731))==x732);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x733 = INT16_MIN;
	static int32_t x735 = 408567767;
	static int32_t t160 = 787270185;

    t160 = ((x733&(x734-x735))==x736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x739 = UINT32_MAX;
	int32_t t161 = 60075489;

    t161 = ((x737&(x738-x739))==x740);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x741 = 2434LLU;
	static volatile int64_t x743 = -1LL;
	int32_t t162 = 5407046;

    t162 = ((x741&(x742-x743))==x744);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x749 = INT16_MAX;
	uint32_t x750 = 1274U;
	static int8_t x752 = -11;

    t163 = ((x749&(x750-x751))==x752);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x753 = 10U;
	static uint64_t x754 = 206785487221LLU;
	uint64_t x755 = 11921LLU;
	int32_t x756 = -1;

    t164 = ((x753&(x754-x755))==x756);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x757 = INT16_MIN;
	uint8_t x758 = UINT8_MAX;
	int32_t x759 = -1;
	int32_t t165 = -80;

    t165 = ((x757&(x758-x759))==x760);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x761 = -1;
	int32_t x762 = -1;
	int64_t x763 = INT64_MIN;
	uint16_t x764 = UINT16_MAX;
	int32_t t166 = 14185853;

    t166 = ((x761&(x762-x763))==x764);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x765 = -1;
	uint16_t x767 = 28655U;
	static uint64_t x768 = UINT64_MAX;
	volatile int32_t t167 = -12193935;

    t167 = ((x765&(x766-x767))==x768);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x769 = UINT32_MAX;
	uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 0;
	int32_t t168 = -4;

    t168 = ((x769&(x770-x771))==x772);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x773 = 6128;
	volatile int32_t x774 = -105;
	int32_t t169 = -96466119;

    t169 = ((x773&(x774-x775))==x776);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x777 = INT32_MIN;
	volatile int8_t x778 = 5;
	volatile uint32_t x779 = 246409585U;
	uint64_t x780 = 46247693244273567LLU;
	volatile int32_t t170 = 820;

    t170 = ((x777&(x778-x779))==x780);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x781 = INT32_MIN;
	static uint64_t x782 = UINT64_MAX;
	int8_t x783 = -1;

    t171 = ((x781&(x782-x783))==x784);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x785 = 605U;
	static int8_t x786 = -1;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MAX;
	int32_t t172 = 11525;

    t172 = ((x785&(x786-x787))==x788);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = 4353;
	int16_t x790 = -1;
	int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MIN;
	volatile int32_t t173 = 1;

    t173 = ((x789&(x790-x791))==x792);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x793 = -1;
	uint64_t x794 = 457757LLU;
	int64_t x795 = -1LL;
	uint64_t x796 = UINT64_MAX;

    t174 = ((x793&(x794-x795))==x796);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x797 = INT64_MAX;
	uint16_t x798 = 14U;
	int8_t x800 = 1;
	volatile int32_t t175 = -377;

    t175 = ((x797&(x798-x799))==x800);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x801 = 9U;
	uint8_t x802 = 11U;
	static volatile uint16_t x803 = 78U;
	int8_t x804 = INT8_MIN;
	int32_t t176 = -1;

    t176 = ((x801&(x802-x803))==x804);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x805 = INT32_MAX;
	int64_t x807 = -1LL;
	int16_t x808 = -1895;

    t177 = ((x805&(x806-x807))==x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x809 = UINT64_MAX;
	static int32_t t178 = -274;

    t178 = ((x809&(x810-x811))==x812);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x813 = -1LL;
	uint64_t x814 = 48057LLU;
	uint16_t x815 = 6U;
	int16_t x816 = 3;
	volatile int32_t t179 = 66366;

    t179 = ((x813&(x814-x815))==x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x817 = INT16_MAX;
	volatile int32_t x818 = -155586;
	int32_t x819 = -1;
	static uint64_t x820 = 53920536352LLU;
	static int32_t t180 = 36584;

    t180 = ((x817&(x818-x819))==x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x821 = 35U;
	int32_t x822 = INT32_MIN;
	uint64_t x824 = UINT64_MAX;
	int32_t t181 = -103;

    t181 = ((x821&(x822-x823))==x824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = -2179773;
	uint32_t x826 = 79U;
	uint32_t x827 = 0U;
	volatile int32_t t182 = 1;

    t182 = ((x825&(x826-x827))==x828);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x831 = 71U;
	volatile int64_t x832 = -1LL;
	volatile int32_t t183 = -2;

    t183 = ((x829&(x830-x831))==x832);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x833 = 758;
	static volatile int16_t x834 = INT16_MAX;
	static uint32_t x835 = 189234530U;
	int64_t x836 = INT64_MAX;
	int32_t t184 = -901298;

    t184 = ((x833&(x834-x835))==x836);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x837 = 83787671394848LLU;
	int16_t x838 = -1;
	static uint64_t x839 = 536501325860LLU;
	volatile int32_t t185 = -14018;

    t185 = ((x837&(x838-x839))==x840);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x845 = INT32_MIN;
	static uint64_t x846 = 256268896LLU;
	uint16_t x848 = 18917U;
	int32_t t186 = 102865418;

    t186 = ((x845&(x846-x847))==x848);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x849 = 54701U;
	int32_t x850 = -1;
	volatile uint16_t x851 = 1U;
	int64_t x852 = -1LL;
	volatile int32_t t187 = -4163963;

    t187 = ((x849&(x850-x851))==x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x853 = -1;
	int16_t x854 = INT16_MIN;
	static volatile int32_t t188 = 1;

    t188 = ((x853&(x854-x855))==x856);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x857 = 116616698U;
	static uint8_t x858 = 4U;
	volatile uint16_t x859 = 23U;
	static uint16_t x860 = UINT16_MAX;
	static volatile int32_t t189 = 1870804;

    t189 = ((x857&(x858-x859))==x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x865 = INT16_MIN;
	volatile uint8_t x868 = 0U;
	int32_t t190 = 15430612;

    t190 = ((x865&(x866-x867))==x868);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x869 = -1;
	int8_t x870 = INT8_MIN;
	int16_t x871 = -3;
	int32_t x872 = 399;
	int32_t t191 = 6;

    t191 = ((x869&(x870-x871))==x872);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x874 = 3U;
	volatile int16_t x875 = INT16_MIN;
	uint64_t x876 = UINT64_MAX;
	static int32_t t192 = -12;

    t192 = ((x873&(x874-x875))==x876);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x879 = INT32_MAX;
	uint8_t x880 = 25U;
	int32_t t193 = 245;

    t193 = ((x877&(x878-x879))==x880);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x881 = INT8_MIN;
	uint16_t x882 = 1U;
	int8_t x883 = -3;
	int32_t t194 = 246;

    t194 = ((x881&(x882-x883))==x884);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x886 = 377235;
	int8_t x887 = 8;
	int64_t x888 = INT64_MAX;

    t195 = ((x885&(x886-x887))==x888);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x889 = INT16_MIN;
	static uint32_t x890 = 97043U;
	volatile uint8_t x892 = UINT8_MAX;

    t196 = ((x889&(x890-x891))==x892);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x901 = 5;
	static uint16_t x902 = 560U;
	static volatile uint8_t x904 = 32U;
	volatile int32_t t197 = 34784447;

    t197 = ((x901&(x902-x903))==x904);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x905 = -5377;
	int16_t x906 = INT16_MIN;
	int8_t x907 = INT8_MAX;
	static int64_t x908 = -1LL;

    t198 = ((x905&(x906-x907))==x908);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x909 = INT32_MIN;
	uint16_t x911 = 1U;
	static int32_t x912 = INT32_MIN;
	static volatile int32_t t199 = 3181;

    t199 = ((x909&(x910-x911))==x912);

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

