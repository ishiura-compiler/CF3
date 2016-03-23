
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

static uint8_t x5 = UINT8_MAX;
uint64_t x11 = 89541019LLU;
volatile int32_t x13 = -121;
static int16_t x14 = INT16_MIN;
int32_t x20 = INT32_MAX;
uint32_t x25 = UINT32_MAX;
int8_t x27 = INT8_MIN;
volatile int16_t x28 = -5682;
int32_t x34 = INT32_MIN;
static int16_t x41 = INT16_MIN;
static int16_t x46 = -253;
uint64_t x47 = UINT64_MAX;
uint64_t x53 = UINT64_MAX;
uint8_t x61 = 39U;
int32_t t13 = -159809;
static uint16_t x75 = 30U;
volatile int32_t t16 = -64649952;
static int16_t x95 = INT16_MAX;
int32_t t19 = -14;
int32_t x106 = -1;
volatile uint16_t x121 = 491U;
static int8_t x123 = INT8_MAX;
int32_t t23 = -69916328;
volatile uint8_t x139 = UINT8_MAX;
int64_t x143 = -1LL;
volatile int32_t t27 = 92;
volatile uint64_t x148 = 22LLU;
volatile int32_t t29 = -32237;
int64_t x160 = -1LL;
int8_t x168 = INT8_MIN;
int64_t x170 = 166517053LL;
int16_t x171 = 1;
volatile int8_t x174 = INT8_MIN;
volatile int64_t x182 = -2771LL;
int8_t x185 = INT8_MIN;
static volatile int32_t t38 = -8515;
int16_t x194 = INT16_MAX;
static uint64_t x195 = 7LLU;
uint8_t x200 = UINT8_MAX;
int32_t x205 = INT32_MIN;
uint64_t x207 = UINT64_MAX;
int16_t x209 = 3055;
volatile int32_t x211 = INT32_MIN;
volatile int32_t t44 = 0;
volatile int64_t x221 = -6LL;
volatile int16_t x232 = -11;
uint16_t x235 = UINT16_MAX;
uint32_t x240 = UINT32_MAX;
int16_t x244 = INT16_MAX;
int32_t x257 = INT32_MIN;
int32_t x260 = -245339463;
int16_t x268 = 1;
volatile int32_t t54 = -23731;
int32_t x269 = -40;
uint8_t x277 = UINT8_MAX;
int32_t t57 = -1054;
uint64_t x283 = 4703425255866LLU;
int16_t x289 = INT16_MAX;
int32_t x292 = -4;
int32_t t60 = 785193492;
int8_t x301 = -12;
int32_t x308 = 4;
static int32_t x320 = INT32_MAX;
volatile int32_t t66 = 8;
volatile uint8_t x321 = UINT8_MAX;
int64_t x322 = 4792697733LL;
int32_t x323 = 982;
volatile int32_t t67 = 123617015;
static uint8_t x330 = 6U;
int64_t x337 = INT64_MAX;
static int8_t x342 = INT8_MAX;
uint32_t x345 = UINT32_MAX;
int32_t t72 = 1708;
int32_t x349 = 23;
uint16_t x353 = 123U;
static int32_t t74 = -784708473;
volatile uint64_t x358 = 171155850LLU;
static int8_t x363 = INT8_MIN;
int8_t x367 = INT8_MAX;
volatile int32_t x368 = -9205727;
volatile int32_t t77 = 673;
int8_t x378 = -1;
static int32_t x388 = 221093789;
int32_t t82 = -50;
int8_t x390 = INT8_MAX;
volatile uint16_t x392 = 3U;
int32_t x399 = INT32_MAX;
int32_t x403 = 32230288;
static int64_t x407 = -1LL;
int16_t x409 = INT16_MAX;
uint8_t x420 = UINT8_MAX;
volatile int16_t x426 = INT16_MIN;
int32_t x431 = INT32_MIN;
static uint64_t x454 = 226182861827688021LLU;
volatile int64_t x458 = -158319248663LL;
uint64_t x459 = 7065013LLU;
static int32_t t100 = 1;
volatile int32_t x471 = INT32_MIN;
static int32_t x472 = 422729;
volatile uint16_t x482 = 24U;
volatile uint8_t x490 = 4U;
int64_t x497 = INT64_MAX;
volatile int8_t x498 = INT8_MIN;
int32_t x501 = 13054;
int64_t x502 = INT64_MIN;
static int32_t x504 = -1;
uint8_t x511 = UINT8_MAX;
uint8_t x512 = UINT8_MAX;
volatile int32_t t112 = 7;
volatile int32_t t113 = 85290;
static int32_t x520 = INT32_MIN;
int32_t x527 = INT32_MAX;
int8_t x530 = 1;
int32_t x531 = -23;
int16_t x532 = INT16_MIN;
int16_t x535 = -15;
static volatile int32_t x536 = INT32_MIN;
int64_t x538 = INT64_MIN;
int8_t x539 = INT8_MAX;
int32_t t119 = -1743251;
int32_t x544 = INT32_MIN;
int64_t x550 = -232LL;
int16_t x552 = 1969;
static int64_t x556 = 227333LL;
int64_t x559 = -52473LL;
uint64_t x560 = UINT64_MAX;
volatile int32_t t124 = -1;
uint64_t x566 = 5LLU;
int16_t x570 = 15014;
int32_t x572 = -4646;
int16_t x584 = INT16_MAX;
uint64_t x587 = 53387LLU;
static int32_t x589 = INT32_MIN;
int32_t t131 = -247571493;
uint32_t x595 = UINT32_MAX;
volatile int32_t x598 = 3565;
volatile int32_t x601 = -3426639;
volatile uint16_t x604 = UINT16_MAX;
uint16_t x621 = 57U;
int64_t x630 = INT64_MAX;
volatile int32_t t138 = 9867;
int8_t x639 = -1;
int32_t x647 = 14920;
volatile int32_t t142 = -2;
uint64_t x650 = UINT64_MAX;
volatile int32_t t143 = 3157;
int32_t t144 = -30970841;
static int32_t x679 = INT32_MIN;
int32_t t148 = 1857;
int8_t x686 = -1;
int32_t t149 = -7547968;
int32_t t150 = 1;
static uint64_t x694 = 880808103LLU;
int8_t x696 = INT8_MAX;
volatile int32_t x697 = -56189559;
volatile uint16_t x705 = 334U;
uint32_t x707 = 1231310U;
static int8_t x713 = INT8_MIN;
int8_t x722 = INT8_MAX;
int16_t x730 = -25;
int32_t t160 = 0;
uint32_t x740 = UINT32_MAX;
uint32_t x746 = UINT32_MAX;
uint8_t x747 = 25U;
static volatile int32_t t162 = -430;
int64_t x751 = INT64_MIN;
int32_t t164 = -5;
uint8_t x757 = UINT8_MAX;
static int32_t t166 = -38417;
volatile uint8_t x766 = 1U;
static int16_t x773 = INT16_MIN;
int8_t x778 = INT8_MIN;
volatile int8_t x779 = INT8_MIN;
volatile int16_t x791 = 843;
static int32_t t172 = -600577088;
uint8_t x793 = 12U;
int64_t x798 = -147LL;
volatile uint16_t x817 = UINT16_MAX;
static volatile int8_t x824 = 61;
volatile int32_t x836 = INT32_MAX;
uint32_t x837 = 112U;
static int64_t x843 = -1LL;
int64_t x845 = 6200179333476LL;
int8_t x847 = -1;
volatile uint64_t x849 = UINT64_MAX;
uint16_t x852 = 2U;
static int16_t x858 = INT16_MIN;
static int32_t t185 = 9381383;
static uint32_t x861 = 1370941227U;
int16_t x880 = INT16_MIN;
int16_t x881 = 95;
int32_t x882 = INT32_MIN;
static int32_t x884 = -5240;
int8_t x888 = -1;
static uint32_t x890 = UINT32_MAX;
uint32_t x892 = 90237U;
int32_t t194 = -1;
int8_t x908 = -12;
int32_t t196 = 1760;
int16_t x932 = -1;


void f0(void) {
    	int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MAX;
	volatile int16_t x8 = -359;
	volatile int32_t t0 = -216;

    t0 = (((x5+x6)!=x7)<=x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 53U;
	static uint32_t x10 = 3U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 4562343;

    t1 = (((x9+x10)!=x11)<=x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x15 = UINT8_MAX;
	static int32_t x16 = INT32_MAX;
	static volatile int32_t t2 = -276966946;

    t2 = (((x13+x14)!=x15)<=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 420U;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = UINT16_MAX;
	static volatile int32_t t3 = -18770;

    t3 = (((x17+x18)!=x19)<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = 1;
	volatile int16_t x22 = 1;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t4 = -4974;

    t4 = (((x21+x22)!=x23)<=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x26 = INT16_MAX;
	int32_t t5 = -1776;

    t5 = (((x25+x26)!=x27)<=x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = 5287318U;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile int64_t x32 = 467699036LL;
	int32_t t6 = -2;

    t6 = (((x29+x30)!=x31)<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = -483689322LL;
	static volatile int8_t x35 = 1;
	volatile int64_t x36 = INT64_MIN;
	int32_t t7 = -356842;

    t7 = (((x33+x34)!=x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x42 = -63451445;
	static volatile uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MAX;
	int32_t t8 = -17220317;

    t8 = (((x41+x42)!=x43)<=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -241683419142LL;
	int64_t x48 = -3868LL;
	int32_t t9 = 19360;

    t9 = (((x45+x46)!=x47)<=x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x54 = 28562LLU;
	int32_t x55 = INT32_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t10 = 1;

    t10 = (((x53+x54)!=x55)<=x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x62 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	static int32_t x64 = -1;
	int32_t t11 = -851204;

    t11 = (((x61+x62)!=x63)<=x64);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = INT64_MAX;
	volatile int64_t x66 = INT64_MIN;
	volatile int16_t x67 = -1;
	int32_t x68 = INT32_MAX;
	volatile int32_t t12 = -1;

    t12 = (((x65+x66)!=x67)<=x68);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x69 = -4;
	uint16_t x70 = 32U;
	int16_t x71 = -3;
	volatile uint8_t x72 = 15U;

    t13 = (((x69+x70)!=x71)<=x72);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x73 = 29;
	volatile int16_t x74 = -1;
	uint32_t x76 = 247338U;
	volatile int32_t t14 = 150;

    t14 = (((x73+x74)!=x75)<=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x77 = 6525998U;
	uint8_t x78 = UINT8_MAX;
	static volatile int32_t x79 = -12;
	int32_t x80 = INT32_MAX;
	static int32_t t15 = -2;

    t15 = (((x77+x78)!=x79)<=x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x81 = -10140123862LL;
	uint32_t x82 = 1000U;
	static int16_t x83 = INT16_MAX;
	static int8_t x84 = 6;

    t16 = (((x81+x82)!=x83)<=x84);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x93 = INT32_MIN;
	volatile uint32_t x94 = UINT32_MAX;
	uint16_t x96 = 50U;
	volatile int32_t t17 = -127879;

    t17 = (((x93+x94)!=x95)<=x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x97 = 71U;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 566086964U;
	int64_t x100 = 5LL;
	volatile int32_t t18 = -765;

    t18 = (((x97+x98)!=x99)<=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x101 = 3432U;
	int8_t x102 = INT8_MAX;
	volatile int32_t x103 = -40861951;
	int8_t x104 = INT8_MAX;

    t19 = (((x101+x102)!=x103)<=x104);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -1;
	volatile int16_t x107 = INT16_MIN;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t20 = 2232203;

    t20 = (((x105+x106)!=x107)<=x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = INT8_MAX;
	int16_t x114 = 8;
	int64_t x115 = -998069151732844806LL;
	int8_t x116 = 4;
	int32_t t21 = -64;

    t21 = (((x113+x114)!=x115)<=x116);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x122 = 1124995614U;
	int16_t x124 = 1;
	static int32_t t22 = 417;

    t22 = (((x121+x122)!=x123)<=x124);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x125 = -14467;
	int16_t x126 = -1;
	int32_t x127 = INT32_MAX;
	uint32_t x128 = 1U;

    t23 = (((x125+x126)!=x127)<=x128);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x129 = INT32_MIN;
	uint32_t x130 = 55051706U;
	static volatile int16_t x131 = INT16_MIN;
	volatile uint64_t x132 = 467712437013LLU;
	volatile int32_t t24 = 921319;

    t24 = (((x129+x130)!=x131)<=x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x133 = 13;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t25 = -11661562;

    t25 = (((x133+x134)!=x135)<=x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x137 = -1;
	int16_t x138 = INT16_MAX;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t26 = -3;

    t26 = (((x137+x138)!=x139)<=x140);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x141 = -1;
	int32_t x142 = -1734;
	static int32_t x144 = INT32_MIN;

    t27 = (((x141+x142)!=x143)<=x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x145 = 1;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MAX;
	int32_t t28 = 99;

    t28 = (((x145+x146)!=x147)<=x148);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x153 = 61881188829070196LL;
	int32_t x154 = 1382;
	static int32_t x155 = 16008326;
	volatile int8_t x156 = 1;

    t29 = (((x153+x154)!=x155)<=x156);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	static int16_t x158 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	int32_t t30 = -1589478;

    t30 = (((x157+x158)!=x159)<=x160);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x161 = -1;
	static int32_t x162 = -462;
	int8_t x163 = -4;
	static uint8_t x164 = 15U;
	int32_t t31 = -3067549;

    t31 = (((x161+x162)!=x163)<=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x165 = INT16_MAX;
	int64_t x166 = -129173346597LL;
	int16_t x167 = INT16_MAX;
	int32_t t32 = -468;

    t32 = (((x165+x166)!=x167)<=x168);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x169 = UINT32_MAX;
	static int64_t x172 = INT64_MIN;
	static int32_t t33 = 8323514;

    t33 = (((x169+x170)!=x171)<=x172);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = 197000287;
	int16_t x175 = 2009;
	int8_t x176 = 5;
	static int32_t t34 = -12506;

    t34 = (((x173+x174)!=x175)<=x176);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x177 = INT32_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = 1011291;
	static volatile int16_t x180 = INT16_MIN;
	static volatile int32_t t35 = 3;

    t35 = (((x177+x178)!=x179)<=x180);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x181 = -1LL;
	volatile int16_t x183 = 12;
	int16_t x184 = -1;
	int32_t t36 = 186348;

    t36 = (((x181+x182)!=x183)<=x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x186 = 7024;
	int16_t x187 = -19;
	int16_t x188 = INT16_MIN;
	int32_t t37 = 54;

    t37 = (((x185+x186)!=x187)<=x188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x189 = -59297;
	static int32_t x190 = -1;
	uint32_t x191 = 22U;
	uint8_t x192 = UINT8_MAX;

    t38 = (((x189+x190)!=x191)<=x192);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x193 = 27LL;
	int16_t x196 = INT16_MAX;
	int32_t t39 = 6;

    t39 = (((x193+x194)!=x195)<=x196);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 2478U;
	static volatile int8_t x198 = INT8_MAX;
	static volatile int8_t x199 = -1;
	volatile int32_t t40 = 16544;

    t40 = (((x197+x198)!=x199)<=x200);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x201 = 3175212;
	int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t41 = 2001440;

    t41 = (((x201+x202)!=x203)<=x204);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x206 = 29U;
	volatile int8_t x208 = 0;
	int32_t t42 = -6;

    t42 = (((x205+x206)!=x207)<=x208);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x210 = INT32_MIN;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t43 = 6;

    t43 = (((x209+x210)!=x211)<=x212);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x217 = UINT8_MAX;
	int32_t x218 = -1;
	static int32_t x219 = INT32_MIN;
	volatile int8_t x220 = 22;

    t44 = (((x217+x218)!=x219)<=x220);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 99U;
	uint16_t x224 = 3U;
	volatile int32_t t45 = 0;

    t45 = (((x221+x222)!=x223)<=x224);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x225 = -11;
	int16_t x226 = 645;
	int16_t x227 = INT16_MAX;
	static uint8_t x228 = 3U;
	volatile int32_t t46 = 40;

    t46 = (((x225+x226)!=x227)<=x228);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x229 = 1U;
	static volatile uint8_t x230 = 4U;
	static volatile uint64_t x231 = 54863064618803LLU;
	int32_t t47 = 355;

    t47 = (((x229+x230)!=x231)<=x232);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	uint64_t x234 = UINT64_MAX;
	uint8_t x236 = 107U;
	volatile int32_t t48 = 8;

    t48 = (((x233+x234)!=x235)<=x236);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x237 = 0U;
	volatile int64_t x238 = INT64_MIN;
	uint64_t x239 = 2795253675734290868LLU;
	int32_t t49 = 3;

    t49 = (((x237+x238)!=x239)<=x240);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	uint64_t x243 = 0LLU;
	volatile int32_t t50 = 1;

    t50 = (((x241+x242)!=x243)<=x244);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = INT32_MAX;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = -1;
	volatile int16_t x252 = -1;
	int32_t t51 = 14370;

    t51 = (((x249+x250)!=x251)<=x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x258 = 759843732821714LLU;
	int8_t x259 = -7;
	static volatile int32_t t52 = -2;

    t52 = (((x257+x258)!=x259)<=x260);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = -1LL;
	int64_t x264 = INT64_MAX;
	int32_t t53 = 77;

    t53 = (((x261+x262)!=x263)<=x264);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x265 = UINT16_MAX;
	volatile int64_t x266 = -84853LL;
	volatile uint16_t x267 = UINT16_MAX;

    t54 = (((x265+x266)!=x267)<=x268);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x270 = 20;
	volatile int32_t x271 = -1;
	int16_t x272 = 44;
	int32_t t55 = 37080111;

    t55 = (((x269+x270)!=x271)<=x272);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x273 = INT16_MIN;
	static int64_t x274 = -140024002038870792LL;
	int64_t x275 = INT64_MIN;
	int32_t x276 = INT32_MIN;
	volatile int32_t t56 = -32;

    t56 = (((x273+x274)!=x275)<=x276);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x278 = INT64_MIN;
	int64_t x279 = 38982LL;
	int64_t x280 = INT64_MAX;

    t57 = (((x277+x278)!=x279)<=x280);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x281 = 1;
	volatile int32_t x282 = -1;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t58 = -42947172;

    t58 = (((x281+x282)!=x283)<=x284);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x285 = UINT8_MAX;
	static int64_t x286 = INT64_MIN;
	static uint64_t x287 = 990481LLU;
	uint16_t x288 = UINT16_MAX;
	static int32_t t59 = -1;

    t59 = (((x285+x286)!=x287)<=x288);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x290 = 1207227LLU;
	int32_t x291 = -1;

    t60 = (((x289+x290)!=x291)<=x292);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x297 = INT8_MIN;
	int16_t x298 = -3;
	int64_t x299 = INT64_MAX;
	uint16_t x300 = 12641U;
	volatile int32_t t61 = -1;

    t61 = (((x297+x298)!=x299)<=x300);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x302 = UINT8_MAX;
	uint64_t x303 = 384494LLU;
	int32_t x304 = INT32_MIN;
	volatile int32_t t62 = 943033;

    t62 = (((x301+x302)!=x303)<=x304);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x305 = 739U;
	int16_t x306 = INT16_MIN;
	uint16_t x307 = 2467U;
	volatile int32_t t63 = 171;

    t63 = (((x305+x306)!=x307)<=x308);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x309 = 1324254668642LLU;
	uint16_t x310 = UINT16_MAX;
	uint32_t x311 = 13U;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t64 = -34171;

    t64 = (((x309+x310)!=x311)<=x312);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x313 = INT64_MAX;
	uint64_t x314 = 2302114033635414LLU;
	volatile int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MAX;
	static volatile int32_t t65 = -1;

    t65 = (((x313+x314)!=x315)<=x316);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = 1;
	int64_t x319 = INT64_MAX;

    t66 = (((x317+x318)!=x319)<=x320);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x324 = 14699;

    t67 = (((x321+x322)!=x323)<=x324);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = 3;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t68 = -3891719;

    t68 = (((x325+x326)!=x327)<=x328);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = INT16_MIN;
	int8_t x331 = -1;
	uint64_t x332 = 7328343402151094LLU;
	int32_t t69 = 65576988;

    t69 = (((x329+x330)!=x331)<=x332);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x338 = -15997;
	int8_t x339 = -1;
	volatile int32_t x340 = -2122;
	static volatile int32_t t70 = -37410;

    t70 = (((x337+x338)!=x339)<=x340);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x341 = -1LL;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = -1LL;
	static volatile int32_t t71 = 118405986;

    t71 = (((x341+x342)!=x343)<=x344);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x346 = 270820798208409LL;
	uint16_t x347 = 447U;
	int64_t x348 = 644242LL;

    t72 = (((x345+x346)!=x347)<=x348);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x350 = 737034845U;
	static volatile int8_t x351 = 7;
	int16_t x352 = INT16_MIN;
	volatile int32_t t73 = -116;

    t73 = (((x349+x350)!=x351)<=x352);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x354 = -1;
	int8_t x355 = INT8_MIN;
	static int8_t x356 = 0;

    t74 = (((x353+x354)!=x355)<=x356);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x357 = -290;
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = 244U;
	int32_t t75 = -287971833;

    t75 = (((x357+x358)!=x359)<=x360);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int64_t x361 = INT64_MIN;
	static uint64_t x362 = 18169272072730LLU;
	int8_t x364 = INT8_MIN;
	int32_t t76 = 52770;

    t76 = (((x361+x362)!=x363)<=x364);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x365 = INT64_MIN;
	uint32_t x366 = 32611089U;

    t77 = (((x365+x366)!=x367)<=x368);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x369 = -1;
	volatile int16_t x370 = 0;
	uint8_t x371 = 111U;
	int16_t x372 = 3;
	int32_t t78 = 1008075;

    t78 = (((x369+x370)!=x371)<=x372);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x373 = -1;
	int16_t x374 = INT16_MIN;
	int64_t x375 = 124023367316400187LL;
	volatile uint32_t x376 = 156689U;
	int32_t t79 = 119805;

    t79 = (((x373+x374)!=x375)<=x376);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x377 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	static volatile int32_t x380 = -1;
	int32_t t80 = -1;

    t80 = (((x377+x378)!=x379)<=x380);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x381 = 2;
	int32_t x382 = -1;
	static volatile uint8_t x383 = 1U;
	volatile uint32_t x384 = UINT32_MAX;
	int32_t t81 = 20;

    t81 = (((x381+x382)!=x383)<=x384);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x385 = 230U;
	int64_t x386 = -1031396LL;
	volatile int64_t x387 = INT64_MIN;

    t82 = (((x385+x386)!=x387)<=x388);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x389 = 8U;
	static int64_t x391 = 1074248855391679608LL;
	volatile int32_t t83 = 2;

    t83 = (((x389+x390)!=x391)<=x392);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = 163945LL;
	int32_t x396 = INT32_MAX;
	int32_t t84 = -468356386;

    t84 = (((x393+x394)!=x395)<=x396);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x397 = -1;
	volatile int16_t x398 = 871;
	int8_t x400 = -1;
	int32_t t85 = -1;

    t85 = (((x397+x398)!=x399)<=x400);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x401 = -6744;
	int16_t x402 = -1;
	int16_t x404 = INT16_MAX;
	volatile int32_t t86 = 15;

    t86 = (((x401+x402)!=x403)<=x404);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x405 = 2U;
	int16_t x406 = -1;
	int64_t x408 = -1LL;
	int32_t t87 = 870111462;

    t87 = (((x405+x406)!=x407)<=x408);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x410 = -1;
	static volatile uint64_t x411 = 3171981274882881LLU;
	volatile uint16_t x412 = 63U;
	int32_t t88 = 355235;

    t88 = (((x409+x410)!=x411)<=x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x413 = INT8_MAX;
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MAX;
	volatile int32_t t89 = 118768;

    t89 = (((x413+x414)!=x415)<=x416);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x417 = UINT32_MAX;
	static int8_t x418 = INT8_MIN;
	static int32_t x419 = -1;
	volatile int32_t t90 = -666966;

    t90 = (((x417+x418)!=x419)<=x420);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = -1;
	int8_t x422 = INT8_MAX;
	int8_t x423 = 0;
	int16_t x424 = 45;
	int32_t t91 = -132699839;

    t91 = (((x421+x422)!=x423)<=x424);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x425 = -1382960400LL;
	int16_t x427 = INT16_MIN;
	static int32_t x428 = INT32_MAX;
	volatile int32_t t92 = -3;

    t92 = (((x425+x426)!=x427)<=x428);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = -1LL;
	volatile int32_t x430 = 3804;
	uint16_t x432 = UINT16_MAX;
	static int32_t t93 = -7;

    t93 = (((x429+x430)!=x431)<=x432);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x433 = -1;
	static int8_t x434 = 3;
	int64_t x435 = -1LL;
	volatile int32_t x436 = -1;
	int32_t t94 = -246;

    t94 = (((x433+x434)!=x435)<=x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x437 = 937980608U;
	static uint16_t x438 = 103U;
	uint8_t x439 = 1U;
	volatile int32_t x440 = -1;
	static int32_t t95 = 1;

    t95 = (((x437+x438)!=x439)<=x440);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x441 = INT16_MIN;
	int64_t x442 = 19032256964676557LL;
	static int16_t x443 = INT16_MAX;
	uint16_t x444 = 11U;
	int32_t t96 = -11457151;

    t96 = (((x441+x442)!=x443)<=x444);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x445 = 1497588524LLU;
	int32_t x446 = -75;
	static uint64_t x447 = UINT64_MAX;
	static int64_t x448 = 2912864071291701LL;
	int32_t t97 = 6114;

    t97 = (((x445+x446)!=x447)<=x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = INT32_MIN;
	uint16_t x450 = UINT16_MAX;
	static uint64_t x451 = UINT64_MAX;
	uint16_t x452 = 1U;
	static volatile int32_t t98 = -10907;

    t98 = (((x449+x450)!=x451)<=x452);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x453 = 22U;
	int64_t x455 = INT64_MAX;
	int8_t x456 = INT8_MIN;
	volatile int32_t t99 = 340;

    t99 = (((x453+x454)!=x455)<=x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = -3792LL;
	uint8_t x460 = UINT8_MAX;

    t100 = (((x457+x458)!=x459)<=x460);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x461 = 602U;
	int32_t x462 = INT32_MIN;
	static int64_t x463 = -1LL;
	static int8_t x464 = -1;
	static volatile int32_t t101 = 186;

    t101 = (((x461+x462)!=x463)<=x464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x469 = 2017U;
	uint8_t x470 = 0U;
	static volatile int32_t t102 = 27;

    t102 = (((x469+x470)!=x471)<=x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x473 = 28U;
	int8_t x474 = 0;
	int64_t x475 = 95472063220LL;
	uint8_t x476 = UINT8_MAX;
	int32_t t103 = -1;

    t103 = (((x473+x474)!=x475)<=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x477 = 70U;
	volatile uint8_t x478 = 0U;
	int16_t x479 = INT16_MIN;
	static volatile int32_t x480 = INT32_MIN;
	int32_t t104 = 21;

    t104 = (((x477+x478)!=x479)<=x480);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x481 = 1394U;
	uint32_t x483 = 1904173699U;
	volatile uint16_t x484 = UINT16_MAX;
	volatile int32_t t105 = 0;

    t105 = (((x481+x482)!=x483)<=x484);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x485 = 17824U;
	int64_t x486 = INT64_MIN;
	int16_t x487 = INT16_MIN;
	volatile int64_t x488 = -31126003337LL;
	volatile int32_t t106 = 1;

    t106 = (((x485+x486)!=x487)<=x488);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x489 = INT32_MIN;
	uint32_t x491 = 887U;
	int64_t x492 = 98072009LL;
	volatile int32_t t107 = 7778148;

    t107 = (((x489+x490)!=x491)<=x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x493 = 535U;
	volatile uint16_t x494 = UINT16_MAX;
	uint32_t x495 = 125776U;
	volatile uint64_t x496 = UINT64_MAX;
	volatile int32_t t108 = -608818012;

    t108 = (((x493+x494)!=x495)<=x496);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x499 = INT64_MIN;
	int16_t x500 = -4735;
	volatile int32_t t109 = 1789;

    t109 = (((x497+x498)!=x499)<=x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x503 = 7U;
	int32_t t110 = -2135;

    t110 = (((x501+x502)!=x503)<=x504);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x505 = 1084823U;
	int8_t x506 = INT8_MAX;
	uint32_t x507 = UINT32_MAX;
	static uint8_t x508 = 2U;
	volatile int32_t t111 = -489;

    t111 = (((x505+x506)!=x507)<=x508);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x509 = -1;
	uint16_t x510 = UINT16_MAX;

    t112 = (((x509+x510)!=x511)<=x512);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x513 = 0U;
	int64_t x514 = -1LL;
	static int8_t x515 = INT8_MIN;
	uint16_t x516 = UINT16_MAX;

    t113 = (((x513+x514)!=x515)<=x516);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x517 = 1073471031008LLU;
	int64_t x518 = -35007358LL;
	volatile int16_t x519 = 0;
	volatile int32_t t114 = 3;

    t114 = (((x517+x518)!=x519)<=x520);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x521 = 2;
	volatile int8_t x522 = -1;
	volatile int32_t x523 = -1;
	volatile int16_t x524 = -10129;
	static int32_t t115 = 675649232;

    t115 = (((x521+x522)!=x523)<=x524);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x525 = UINT8_MAX;
	int64_t x526 = INT64_MIN;
	int32_t x528 = INT32_MIN;
	volatile int32_t t116 = 2;

    t116 = (((x525+x526)!=x527)<=x528);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x529 = -1;
	volatile int32_t t117 = 1;

    t117 = (((x529+x530)!=x531)<=x532);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x533 = INT64_MAX;
	int32_t x534 = -1;
	int32_t t118 = 160648;

    t118 = (((x533+x534)!=x535)<=x536);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x537 = 39804403U;
	static volatile int64_t x540 = 10LL;

    t119 = (((x537+x538)!=x539)<=x540);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x541 = -1;
	volatile int8_t x542 = INT8_MAX;
	int8_t x543 = INT8_MIN;
	int32_t t120 = -1183619;

    t120 = (((x541+x542)!=x543)<=x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = -13857322343185361LL;
	int16_t x546 = -1;
	int16_t x547 = -1;
	int16_t x548 = -5662;
	static int32_t t121 = 13;

    t121 = (((x545+x546)!=x547)<=x548);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x549 = 1110013824820508LLU;
	int16_t x551 = INT16_MIN;
	volatile int32_t t122 = -26;

    t122 = (((x549+x550)!=x551)<=x552);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x553 = INT32_MAX;
	volatile uint64_t x554 = 105LLU;
	volatile uint64_t x555 = 2032361762874285LLU;
	int32_t t123 = 128125;

    t123 = (((x553+x554)!=x555)<=x556);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x557 = INT16_MIN;
	int16_t x558 = 82;

    t124 = (((x557+x558)!=x559)<=x560);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x561 = INT32_MIN;
	static int64_t x562 = 52926134LL;
	int64_t x563 = INT64_MIN;
	static int8_t x564 = -1;
	volatile int32_t t125 = 414;

    t125 = (((x561+x562)!=x563)<=x564);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = -1;
	static uint8_t x567 = 13U;
	volatile int64_t x568 = INT64_MAX;
	static volatile int32_t t126 = -460392265;

    t126 = (((x565+x566)!=x567)<=x568);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x569 = INT16_MIN;
	int32_t x571 = INT32_MIN;
	int32_t t127 = 120984833;

    t127 = (((x569+x570)!=x571)<=x572);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x577 = UINT16_MAX;
	volatile int16_t x578 = INT16_MAX;
	int32_t x579 = INT32_MIN;
	static uint64_t x580 = UINT64_MAX;
	int32_t t128 = 0;

    t128 = (((x577+x578)!=x579)<=x580);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x581 = 3U;
	static int16_t x582 = 23;
	volatile int8_t x583 = INT8_MIN;
	volatile int32_t t129 = 10037605;

    t129 = (((x581+x582)!=x583)<=x584);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x585 = INT64_MIN;
	int32_t x586 = 2037;
	uint64_t x588 = 418LLU;
	int32_t t130 = 15994;

    t130 = (((x585+x586)!=x587)<=x588);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x590 = -1LL;
	int16_t x591 = -14;
	int8_t x592 = -30;

    t131 = (((x589+x590)!=x591)<=x592);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x593 = 17U;
	int64_t x594 = -3621350LL;
	int8_t x596 = -1;
	volatile int32_t t132 = 0;

    t132 = (((x593+x594)!=x595)<=x596);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x597 = -1LL;
	volatile int32_t x599 = 2;
	static int32_t x600 = -1;
	static int32_t t133 = 1;

    t133 = (((x597+x598)!=x599)<=x600);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x602 = -225050555LL;
	int16_t x603 = INT16_MAX;
	volatile int32_t t134 = -881;

    t134 = (((x601+x602)!=x603)<=x604);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x605 = -1;
	int64_t x606 = 24045095441152LL;
	volatile int32_t x607 = -523536;
	static int32_t x608 = -5137;
	int32_t t135 = -24081;

    t135 = (((x605+x606)!=x607)<=x608);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x617 = -6;
	int8_t x618 = INT8_MIN;
	uint32_t x619 = 7623U;
	int32_t x620 = INT32_MIN;
	volatile int32_t t136 = 301433;

    t136 = (((x617+x618)!=x619)<=x620);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x622 = -2613275358282193LL;
	volatile uint64_t x623 = 526864684021120437LLU;
	int16_t x624 = -1;
	static volatile int32_t t137 = 2298;

    t137 = (((x621+x622)!=x623)<=x624);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x629 = INT64_MIN;
	uint8_t x631 = UINT8_MAX;
	static int32_t x632 = -1;

    t138 = (((x629+x630)!=x631)<=x632);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x633 = 402350;
	uint16_t x634 = 97U;
	uint16_t x635 = 7U;
	int32_t x636 = INT32_MIN;
	static volatile int32_t t139 = -73339;

    t139 = (((x633+x634)!=x635)<=x636);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x637 = 474555918312LLU;
	volatile uint32_t x638 = UINT32_MAX;
	int32_t x640 = INT32_MAX;
	int32_t t140 = 677;

    t140 = (((x637+x638)!=x639)<=x640);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x641 = -1;
	uint32_t x642 = 1960961U;
	int8_t x643 = INT8_MAX;
	uint16_t x644 = 1196U;
	volatile int32_t t141 = -97;

    t141 = (((x641+x642)!=x643)<=x644);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = INT16_MAX;
	uint8_t x646 = UINT8_MAX;
	uint16_t x648 = UINT16_MAX;

    t142 = (((x645+x646)!=x647)<=x648);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x649 = 7880679LLU;
	uint64_t x651 = 171LLU;
	int8_t x652 = 1;

    t143 = (((x649+x650)!=x651)<=x652);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x657 = -38;
	volatile int16_t x658 = -11378;
	int8_t x659 = INT8_MIN;
	int16_t x660 = 136;

    t144 = (((x657+x658)!=x659)<=x660);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x661 = -1;
	volatile int64_t x662 = -1LL;
	uint32_t x663 = 2801211U;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t145 = -1;

    t145 = (((x661+x662)!=x663)<=x664);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x665 = -3;
	volatile uint32_t x666 = 11877U;
	volatile int8_t x667 = -1;
	volatile int64_t x668 = INT64_MIN;
	static int32_t t146 = 1;

    t146 = (((x665+x666)!=x667)<=x668);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x673 = 2747039323251852682LLU;
	int8_t x674 = INT8_MAX;
	static int64_t x675 = -52485LL;
	volatile int16_t x676 = 236;
	int32_t t147 = -54851;

    t147 = (((x673+x674)!=x675)<=x676);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x678 = INT16_MIN;
	volatile int32_t x680 = -1;

    t148 = (((x677+x678)!=x679)<=x680);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x685 = 61LLU;
	int8_t x687 = INT8_MIN;
	int64_t x688 = -665479314LL;

    t149 = (((x685+x686)!=x687)<=x688);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x689 = INT8_MIN;
	static volatile int16_t x690 = -40;
	static int32_t x691 = -45;
	volatile uint8_t x692 = UINT8_MAX;

    t150 = (((x689+x690)!=x691)<=x692);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x693 = INT16_MIN;
	volatile uint8_t x695 = 5U;
	static int32_t t151 = -58;

    t151 = (((x693+x694)!=x695)<=x696);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x698 = UINT32_MAX;
	uint8_t x699 = 88U;
	static uint16_t x700 = 14771U;
	static int32_t t152 = -21976;

    t152 = (((x697+x698)!=x699)<=x700);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x701 = 7;
	volatile uint32_t x702 = UINT32_MAX;
	int32_t x703 = -1;
	static uint8_t x704 = UINT8_MAX;
	volatile int32_t t153 = -417961488;

    t153 = (((x701+x702)!=x703)<=x704);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x706 = UINT64_MAX;
	uint32_t x708 = 1U;
	static int32_t t154 = -4867537;

    t154 = (((x705+x706)!=x707)<=x708);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x709 = INT32_MIN;
	uint16_t x710 = 1524U;
	int64_t x711 = 5464638913177487LL;
	static int64_t x712 = 76852527726590LL;
	volatile int32_t t155 = 61120;

    t155 = (((x709+x710)!=x711)<=x712);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x714 = 1309;
	int16_t x715 = 0;
	static volatile int32_t x716 = INT32_MIN;
	int32_t t156 = 1;

    t156 = (((x713+x714)!=x715)<=x716);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x721 = -3191852;
	int64_t x723 = INT64_MIN;
	int64_t x724 = INT64_MIN;
	int32_t t157 = -651;

    t157 = (((x721+x722)!=x723)<=x724);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x726 = -275569;
	uint16_t x727 = 5006U;
	volatile int64_t x728 = -1LL;
	volatile int32_t t158 = 2567;

    t158 = (((x725+x726)!=x727)<=x728);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x729 = 1;
	static int32_t x731 = 990;
	static uint16_t x732 = 28U;
	int32_t t159 = 3563230;

    t159 = (((x729+x730)!=x731)<=x732);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x733 = 30042U;
	int32_t x734 = INT32_MIN;
	int64_t x735 = INT64_MIN;
	static int16_t x736 = 1;

    t160 = (((x733+x734)!=x735)<=x736);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x737 = INT32_MAX;
	volatile int32_t x738 = -1;
	volatile int64_t x739 = 1253195131312893LL;
	int32_t t161 = 5;

    t161 = (((x737+x738)!=x739)<=x740);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x745 = -1464339882LL;
	int32_t x748 = INT32_MIN;

    t162 = (((x745+x746)!=x747)<=x748);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x749 = INT64_MIN;
	int64_t x750 = 44536LL;
	static uint8_t x752 = 1U;
	volatile int32_t t163 = -605;

    t163 = (((x749+x750)!=x751)<=x752);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x753 = -417949928953804LL;
	int8_t x754 = -1;
	uint16_t x755 = 12U;
	static int8_t x756 = INT8_MIN;

    t164 = (((x753+x754)!=x755)<=x756);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x758 = -1;
	static int64_t x759 = -1LL;
	uint64_t x760 = UINT64_MAX;
	int32_t t165 = 39871;

    t165 = (((x757+x758)!=x759)<=x760);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x761 = 0;
	int64_t x762 = INT64_MIN;
	int64_t x763 = -1LL;
	volatile int64_t x764 = INT64_MAX;

    t166 = (((x761+x762)!=x763)<=x764);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x765 = INT8_MAX;
	static uint8_t x767 = 1U;
	int32_t x768 = 25;
	volatile int32_t t167 = -168828;

    t167 = (((x765+x766)!=x767)<=x768);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x769 = -148;
	volatile int32_t x770 = INT32_MAX;
	uint32_t x771 = UINT32_MAX;
	int8_t x772 = INT8_MAX;
	volatile int32_t t168 = -240906529;

    t168 = (((x769+x770)!=x771)<=x772);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x774 = 216427U;
	volatile int8_t x775 = INT8_MIN;
	uint32_t x776 = 230U;
	int32_t t169 = -38;

    t169 = (((x773+x774)!=x775)<=x776);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x777 = -1;
	volatile uint32_t x780 = 1046U;
	int32_t t170 = -236;

    t170 = (((x777+x778)!=x779)<=x780);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x785 = UINT64_MAX;
	volatile uint32_t x786 = 25005380U;
	volatile int8_t x787 = 2;
	int8_t x788 = INT8_MAX;
	static volatile int32_t t171 = -440518;

    t171 = (((x785+x786)!=x787)<=x788);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x789 = UINT64_MAX;
	volatile int8_t x790 = INT8_MIN;
	volatile int16_t x792 = INT16_MIN;

    t172 = (((x789+x790)!=x791)<=x792);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x794 = 7U;
	static int64_t x795 = INT64_MIN;
	static uint32_t x796 = 98U;
	volatile int32_t t173 = 4123865;

    t173 = (((x793+x794)!=x795)<=x796);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x797 = INT32_MIN;
	static uint64_t x799 = 55LLU;
	int8_t x800 = -1;
	int32_t t174 = 111398062;

    t174 = (((x797+x798)!=x799)<=x800);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x805 = 23941U;
	uint16_t x806 = 25U;
	volatile int32_t x807 = INT32_MIN;
	uint16_t x808 = 372U;
	volatile int32_t t175 = -39527;

    t175 = (((x805+x806)!=x807)<=x808);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x809 = 4075598U;
	int64_t x810 = INT64_MIN;
	int32_t x811 = -4713;
	int32_t x812 = -1;
	static int32_t t176 = -87;

    t176 = (((x809+x810)!=x811)<=x812);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x818 = INT16_MIN;
	int16_t x819 = -80;
	volatile uint8_t x820 = 3U;
	int32_t t177 = 16;

    t177 = (((x817+x818)!=x819)<=x820);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x821 = INT16_MIN;
	uint16_t x822 = 21939U;
	int8_t x823 = INT8_MIN;
	static volatile int32_t t178 = -1371284;

    t178 = (((x821+x822)!=x823)<=x824);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x833 = -1;
	uint16_t x834 = 9656U;
	static uint16_t x835 = 15U;
	static int32_t t179 = -102734195;

    t179 = (((x833+x834)!=x835)<=x836);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x838 = INT16_MIN;
	int16_t x839 = INT16_MIN;
	static uint32_t x840 = 1640441U;
	volatile int32_t t180 = 584711085;

    t180 = (((x837+x838)!=x839)<=x840);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x841 = UINT8_MAX;
	uint16_t x842 = UINT16_MAX;
	volatile uint8_t x844 = 1U;
	volatile int32_t t181 = 10;

    t181 = (((x841+x842)!=x843)<=x844);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x846 = 9;
	int16_t x848 = INT16_MIN;
	int32_t t182 = -1;

    t182 = (((x845+x846)!=x847)<=x848);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x850 = 5U;
	uint32_t x851 = 5566778U;
	volatile int32_t t183 = 5;

    t183 = (((x849+x850)!=x851)<=x852);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x853 = -1;
	static int8_t x854 = -2;
	volatile uint64_t x855 = UINT64_MAX;
	uint64_t x856 = 89614883960946LLU;
	int32_t t184 = 475744286;

    t184 = (((x853+x854)!=x855)<=x856);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x857 = 0U;
	int8_t x859 = 5;
	int64_t x860 = 663636427071778214LL;

    t185 = (((x857+x858)!=x859)<=x860);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x862 = INT32_MIN;
	uint64_t x863 = 50200197LLU;
	uint64_t x864 = 2863LLU;
	volatile int32_t t186 = 451;

    t186 = (((x861+x862)!=x863)<=x864);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x865 = 0LL;
	int32_t x866 = INT32_MAX;
	volatile uint16_t x867 = UINT16_MAX;
	static int16_t x868 = 13;
	int32_t t187 = -245817150;

    t187 = (((x865+x866)!=x867)<=x868);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x869 = UINT16_MAX;
	int8_t x870 = INT8_MIN;
	static uint64_t x871 = 35LLU;
	uint16_t x872 = 2735U;
	int32_t t188 = 31882766;

    t188 = (((x869+x870)!=x871)<=x872);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x873 = UINT32_MAX;
	uint8_t x874 = 2U;
	volatile uint64_t x875 = 14466547267123LLU;
	static int64_t x876 = 1440002220759943803LL;
	volatile int32_t t189 = -595498;

    t189 = (((x873+x874)!=x875)<=x876);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x877 = INT64_MIN;
	uint16_t x878 = 6362U;
	static int8_t x879 = INT8_MIN;
	volatile int32_t t190 = -29067270;

    t190 = (((x877+x878)!=x879)<=x880);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x883 = INT8_MIN;
	volatile int32_t t191 = 143;

    t191 = (((x881+x882)!=x883)<=x884);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x885 = -1LL;
	int16_t x886 = INT16_MIN;
	uint8_t x887 = UINT8_MAX;
	volatile int32_t t192 = -218462369;

    t192 = (((x885+x886)!=x887)<=x888);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = INT64_MIN;
	volatile uint32_t x891 = UINT32_MAX;
	volatile int32_t t193 = 20;

    t193 = (((x889+x890)!=x891)<=x892);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x893 = UINT8_MAX;
	uint64_t x894 = UINT64_MAX;
	int16_t x895 = INT16_MIN;
	int8_t x896 = INT8_MIN;

    t194 = (((x893+x894)!=x895)<=x896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x906 = INT32_MAX;
	int16_t x907 = INT16_MAX;
	int32_t t195 = -72800206;

    t195 = (((x905+x906)!=x907)<=x908);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x913 = INT32_MIN;
	uint64_t x914 = 783LLU;
	int32_t x915 = 1841;
	volatile int8_t x916 = -1;

    t196 = (((x913+x914)!=x915)<=x916);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x917 = UINT32_MAX;
	volatile int16_t x918 = 15060;
	volatile int64_t x919 = 1991LL;
	int16_t x920 = INT16_MAX;
	volatile int32_t t197 = 934790548;

    t197 = (((x917+x918)!=x919)<=x920);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x921 = 1;
	int64_t x922 = INT64_MIN;
	uint32_t x923 = UINT32_MAX;
	static int64_t x924 = INT64_MIN;
	volatile int32_t t198 = 214;

    t198 = (((x921+x922)!=x923)<=x924);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x929 = 164126368747308LL;
	uint32_t x930 = 1919276793U;
	uint32_t x931 = 11589833U;
	static volatile int32_t t199 = 517912875;

    t199 = (((x929+x930)!=x931)<=x932);

    if (t199 != 0) { NG(); } else { ; }
	
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

