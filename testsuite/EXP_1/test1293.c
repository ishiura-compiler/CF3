
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

static int64_t x5 = -1LL;
int16_t x7 = 48;
static int16_t x18 = 4875;
int32_t x21 = -67211;
uint8_t x24 = 69U;
uint8_t x25 = UINT8_MAX;
int32_t t7 = -11114;
int16_t x34 = INT16_MAX;
int64_t x38 = -178876636LL;
uint8_t x39 = 6U;
int64_t x43 = INT64_MIN;
static volatile int16_t x48 = -5553;
volatile uint64_t x49 = 29164141LLU;
static uint8_t x53 = 10U;
static int64_t x54 = -90284611166972547LL;
int32_t x60 = 30597731;
static int16_t x63 = -1;
volatile int32_t t16 = 3160;
int8_t x69 = INT8_MIN;
int32_t x74 = -743462;
uint8_t x79 = UINT8_MAX;
int32_t t20 = 23382;
int8_t x88 = INT8_MIN;
int32_t x95 = -1;
int16_t x96 = INT16_MIN;
uint8_t x98 = UINT8_MAX;
uint8_t x99 = 43U;
uint16_t x101 = 1U;
int32_t x109 = INT32_MIN;
int16_t x115 = INT16_MIN;
static volatile int16_t x118 = -3;
int32_t x122 = INT32_MAX;
int32_t x126 = INT32_MIN;
int32_t x131 = 29285577;
int32_t t32 = 33261103;
volatile uint32_t t33 = 3U;
uint16_t x137 = 413U;
int8_t x147 = -1;
int8_t x152 = INT8_MAX;
uint64_t x158 = 88450437085630LLU;
int8_t x170 = INT8_MAX;
int32_t t42 = 6380965;
int64_t x174 = INT64_MIN;
uint32_t x186 = 10205U;
static int32_t t46 = -413065;
int32_t x194 = INT32_MIN;
int16_t x198 = INT16_MIN;
uint16_t x200 = UINT16_MAX;
int64_t x203 = -1LL;
int8_t x205 = 12;
int8_t x208 = INT8_MIN;
int16_t x210 = -1;
static uint64_t x211 = UINT64_MAX;
uint8_t x214 = 8U;
static int64_t x217 = -17746252382LL;
static uint64_t x225 = 40398945663623770LLU;
uint64_t x231 = 1640659206819LLU;
static volatile int32_t t57 = 16041;
static volatile uint32_t t58 = 55U;
uint64_t x239 = UINT64_MAX;
int32_t x241 = 0;
volatile int64_t x252 = INT64_MAX;
volatile int32_t t63 = -115641205;
int16_t x258 = 4;
volatile int32_t t64 = 18116879;
int16_t x266 = -7;
int16_t x271 = INT16_MAX;
int64_t t67 = -117851LL;
volatile int32_t t68 = 103395;
int8_t x285 = -50;
int32_t t72 = 6;
int8_t x295 = INT8_MIN;
volatile uint64_t x297 = UINT64_MAX;
uint64_t x331 = UINT64_MAX;
uint64_t x334 = UINT64_MAX;
int8_t x346 = INT8_MIN;
volatile int64_t x349 = INT64_MAX;
int64_t x351 = INT64_MIN;
uint16_t x352 = UINT16_MAX;
static int8_t x354 = INT8_MIN;
int16_t x358 = INT16_MAX;
uint64_t x361 = 20186583422LLU;
volatile uint8_t x362 = 25U;
volatile uint16_t x364 = 2U;
int32_t t90 = -23;
int16_t x373 = -1;
uint8_t x379 = 68U;
static int8_t x384 = INT8_MIN;
uint16_t x386 = UINT16_MAX;
int64_t x387 = INT64_MIN;
volatile int32_t x388 = INT32_MAX;
uint32_t x390 = 771924406U;
int8_t x391 = INT8_MAX;
volatile uint32_t x407 = UINT32_MAX;
int8_t x410 = INT8_MAX;
int8_t x417 = INT8_MAX;
int8_t x427 = -1;
uint64_t x433 = 6664LLU;
uint8_t x437 = UINT8_MAX;
uint32_t x438 = 3U;
static int8_t x449 = INT8_MIN;
int16_t x454 = INT16_MAX;
int8_t x465 = INT8_MIN;
static uint16_t x471 = UINT16_MAX;
int64_t x473 = INT64_MIN;
volatile int16_t x474 = -9317;
static volatile int16_t x488 = INT16_MIN;
uint32_t x489 = 587826U;
uint8_t x490 = 21U;
static int64_t t121 = 3562180359796257LL;
uint32_t x495 = UINT32_MAX;
volatile uint32_t t123 = 165995759U;
int8_t x501 = INT8_MIN;
volatile uint64_t x509 = 12432589LLU;
static volatile int64_t t128 = 1656332LL;
int8_t x521 = -1;
static int8_t x547 = -1;
static int8_t x550 = INT8_MIN;
static uint8_t x554 = 10U;
uint8_t x557 = 5U;
static uint64_t x558 = 315105LLU;
uint8_t x568 = 62U;
int8_t x570 = INT8_MIN;
volatile int32_t t141 = -35423658;
static int32_t x574 = 51236677;
int64_t x576 = INT64_MAX;
volatile int64_t t142 = 649510434082418LL;
static uint8_t x578 = UINT8_MAX;
int16_t x580 = 6;
int32_t t143 = 842851324;
volatile int8_t x583 = INT8_MIN;
int32_t x589 = -512689;
uint64_t x592 = UINT64_MAX;
volatile int8_t x595 = -1;
volatile uint32_t x598 = 440363U;
uint64_t t148 = 26673059655685LLU;
int16_t x601 = 6460;
volatile uint16_t x614 = UINT16_MAX;
int16_t x627 = -1;
int64_t x628 = INT64_MIN;
volatile int16_t x633 = 3748;
int64_t x642 = INT64_MIN;
int32_t x660 = INT32_MIN;
int8_t x661 = -1;
uint8_t x667 = 32U;
int16_t x668 = -1;
volatile int32_t x671 = INT32_MIN;
volatile int16_t x674 = 3;
int8_t x677 = INT8_MIN;
int16_t x679 = -1;
int64_t x687 = INT64_MIN;
int16_t x689 = INT16_MIN;
static volatile int32_t t171 = 116;
uint8_t x697 = 1U;
int32_t t172 = 27313;
volatile int32_t x702 = INT32_MIN;
static int16_t x705 = INT16_MAX;
static int16_t x706 = INT16_MIN;
int32_t x709 = -597381108;
static int64_t x712 = INT64_MIN;
static volatile uint32_t t176 = 4104632U;
static int8_t x721 = -1;
int8_t x733 = -2;
int64_t x734 = -1LL;
int32_t x741 = INT32_MAX;
int8_t x743 = 0;
uint16_t x748 = 5U;
int16_t x759 = INT16_MAX;
volatile int32_t t186 = 15498;
int64_t t188 = 89LL;
volatile int32_t x771 = -10196576;
int64_t x773 = INT64_MIN;
int64_t x778 = INT64_MIN;
static int32_t t191 = 1036431004;
int8_t x786 = 0;
volatile int32_t t193 = 10644;
int64_t x790 = INT64_MIN;
static int64_t x792 = -1LL;
int32_t x797 = INT32_MAX;
int64_t x800 = INT64_MIN;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	volatile int16_t x2 = INT16_MIN;
	volatile uint64_t x3 = 250LLU;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = -21;

    t0 = (((x1!=x2)>x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 0;

    t1 = (((x5!=x6)>x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MAX;
	volatile uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 6U;
	volatile int32_t t2 = 3059;

    t2 = (((x9!=x10)>x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	uint64_t x14 = 3841LLU;
	static uint16_t x15 = 23U;
	static int64_t x16 = INT64_MAX;
	static int64_t t3 = -90673LL;

    t3 = (((x13!=x14)>x15)%x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	static volatile int8_t x19 = -1;
	static volatile int64_t x20 = INT64_MIN;
	int64_t t4 = -36191005452LL;

    t4 = (((x17!=x18)>x19)%x20);

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 8461;
	volatile int64_t x23 = -1LL;
	volatile int32_t t5 = -1;

    t5 = (((x21!=x22)>x23)%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int8_t x27 = INT8_MAX;
	volatile uint8_t x28 = 6U;
	int32_t t6 = 1435;

    t6 = (((x25!=x26)>x27)%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -688295;
	static uint32_t x30 = 63429U;
	int32_t x31 = INT32_MAX;
	volatile int8_t x32 = INT8_MIN;

    t7 = (((x29!=x30)>x31)%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	static uint64_t x35 = 2391834460512632LLU;
	uint32_t x36 = 85565691U;
	static volatile uint32_t t8 = 7U;

    t8 = (((x33!=x34)>x35)%x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 323675050947929LL;
	static int8_t x40 = INT8_MIN;
	int32_t t9 = 1258447;

    t9 = (((x37!=x38)>x39)%x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 440;
	int32_t x42 = INT32_MAX;
	uint8_t x44 = 28U;
	int32_t t10 = 21467;

    t10 = (((x41!=x42)>x43)%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 15;
	uint64_t x46 = 38810947LLU;
	static int64_t x47 = INT64_MIN;
	static volatile int32_t t11 = 0;

    t11 = (((x45!=x46)>x47)%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = 1;
	uint8_t x51 = 6U;
	int16_t x52 = -13;
	volatile int32_t t12 = -3;

    t12 = (((x49!=x50)>x51)%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -13603;

    t13 = (((x53!=x54)>x55)%x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	static volatile int16_t x58 = INT16_MIN;
	static int8_t x59 = INT8_MIN;
	volatile int32_t t14 = 193;

    t14 = (((x57!=x58)>x59)%x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MIN;
	int16_t x62 = -1;
	int8_t x64 = -1;
	int32_t t15 = 359155;

    t15 = (((x61!=x62)>x63)%x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1080739515149LL;
	static uint32_t x66 = 47U;
	int8_t x67 = INT8_MIN;
	volatile int16_t x68 = INT16_MAX;

    t16 = (((x65!=x66)>x67)%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 204044185432LLU;
	volatile uint64_t t17 = 1846939243450LLU;

    t17 = (((x69!=x70)>x71)%x72);

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 4478392U;
	volatile int32_t x75 = INT32_MIN;
	uint32_t x76 = 730244U;
	volatile uint32_t t18 = 1255038U;

    t18 = (((x73!=x74)>x75)%x76);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 31;
	int16_t x78 = INT16_MIN;
	uint32_t x80 = 1714U;
	volatile uint32_t t19 = 2033663110U;

    t19 = (((x77!=x78)>x79)%x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint16_t x82 = 11U;
	int64_t x83 = INT64_MIN;
	static uint8_t x84 = 1U;

    t20 = (((x81!=x82)>x83)%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x85 = INT32_MIN;
	int32_t x86 = -1;
	int8_t x87 = -1;
	volatile int32_t t21 = 1822;

    t21 = (((x85!=x86)>x87)%x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int64_t x90 = -1LL;
	static int64_t x91 = -1LL;
	uint16_t x92 = 127U;
	int32_t t22 = -3493;

    t22 = (((x89!=x90)>x91)%x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;
	volatile int32_t t23 = -12678075;

    t23 = (((x93!=x94)>x95)%x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MIN;
	static uint16_t x100 = 3U;
	int32_t t24 = 125176;

    t24 = (((x97!=x98)>x99)%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x102 = -2;
	int64_t x103 = INT64_MIN;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 145934133954809685LL;

    t25 = (((x101!=x102)>x103)%x104);

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MAX;
	static int64_t x106 = -1LL;
	uint16_t x107 = 1935U;
	int32_t x108 = -114885027;
	int32_t t26 = 1603934;

    t26 = (((x105!=x106)>x107)%x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x110 = UINT8_MAX;
	static int64_t x111 = -1548850882206030877LL;
	int32_t x112 = -235;
	int32_t t27 = -128203;

    t27 = (((x109!=x110)>x111)%x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int32_t x114 = -1;
	volatile int8_t x116 = 41;
	volatile int32_t t28 = -117962008;

    t28 = (((x113!=x114)>x115)%x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 169U;
	int64_t x119 = INT64_MIN;
	volatile int8_t x120 = -1;
	volatile int32_t t29 = 176884;

    t29 = (((x117!=x118)>x119)%x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = 21LLU;
	volatile int64_t x123 = 193339LL;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -124;

    t30 = (((x121!=x122)>x123)%x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = 440241410004377680LL;
	static int32_t x127 = -1;
	uint32_t x128 = 1859342U;
	static uint32_t t31 = 195U;

    t31 = (((x125!=x126)>x127)%x128);

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 0LLU;
	int8_t x132 = -1;

    t32 = (((x129!=x130)>x131)%x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = INT64_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = -6;
	volatile uint32_t x136 = UINT32_MAX;

    t33 = (((x133!=x134)>x135)%x136);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	static uint8_t x140 = 15U;
	int32_t t34 = 4;

    t34 = (((x137!=x138)>x139)%x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	static volatile int16_t x142 = 228;
	static uint64_t x143 = 129346389583908LLU;
	int64_t x144 = -1LL;
	static int64_t t35 = 3756830911LL;

    t35 = (((x141!=x142)>x143)%x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = -10394060468624LL;
	int16_t x146 = INT16_MAX;
	int8_t x148 = 15;
	volatile int32_t t36 = 40;

    t36 = (((x145!=x146)>x147)%x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 14U;
	static volatile int32_t t37 = 448272;

    t37 = (((x149!=x150)>x151)%x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 1537U;
	static int64_t x154 = -17086068787446LL;
	static volatile int32_t x155 = 572241145;
	uint8_t x156 = UINT8_MAX;
	int32_t t38 = 7;

    t38 = (((x153!=x154)>x155)%x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	volatile int32_t x159 = INT32_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t39 = 128234951;

    t39 = (((x157!=x158)>x159)%x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1966;
	static uint64_t x162 = 94332454103208389LLU;
	volatile int8_t x163 = -1;
	int16_t x164 = -1;
	volatile int32_t t40 = -293328788;

    t40 = (((x161!=x162)>x163)%x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint64_t x166 = 537255811LLU;
	static int16_t x167 = INT16_MAX;
	uint64_t x168 = UINT64_MAX;
	uint64_t t41 = 24200896254229204LLU;

    t41 = (((x165!=x166)>x167)%x168);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = UINT16_MAX;

    t42 = (((x169!=x170)>x171)%x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MIN;
	static uint32_t x175 = 316U;
	int64_t x176 = INT64_MIN;
	int64_t t43 = -63LL;

    t43 = (((x173!=x174)>x175)%x176);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MAX;
	uint16_t x178 = 1620U;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 4U;

    t44 = (((x177!=x178)>x179)%x180);

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 0;
	static int32_t x182 = -1;
	volatile int32_t x183 = -1;
	static int64_t x184 = 3384LL;
	static int64_t t45 = 2877536LL;

    t45 = (((x181!=x182)>x183)%x184);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -4;
	int64_t x187 = INT64_MAX;
	static int16_t x188 = INT16_MIN;

    t46 = (((x185!=x186)>x187)%x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	int64_t x190 = INT64_MIN;
	static int16_t x191 = 619;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 1;

    t47 = (((x189!=x190)>x191)%x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	int16_t x195 = INT16_MIN;
	int16_t x196 = -1;
	volatile int32_t t48 = 676;

    t48 = (((x193!=x194)>x195)%x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 100U;
	static volatile uint8_t x199 = 0U;
	volatile int32_t t49 = -12129321;

    t49 = (((x197!=x198)>x199)%x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 10768U;
	uint16_t x202 = 2179U;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 13429;

    t50 = (((x201!=x202)>x203)%x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x206 = -107235607;
	int32_t x207 = INT32_MIN;
	int32_t t51 = -900314;

    t51 = (((x205!=x206)>x207)%x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = -5548;
	int64_t x212 = INT64_MAX;
	static volatile int64_t t52 = 807078460LL;

    t52 = (((x209!=x210)>x211)%x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = INT64_MIN;
	uint64_t x215 = 12680465744LLU;
	static int32_t x216 = -62729;
	int32_t t53 = 1350;

    t53 = (((x213!=x214)>x215)%x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = -3728;
	volatile int16_t x219 = 10090;
	static volatile int64_t x220 = INT64_MIN;
	int64_t t54 = -3986564162302LL;

    t54 = (((x217!=x218)>x219)%x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	volatile int8_t x223 = INT8_MIN;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = 1;

    t55 = (((x221!=x222)>x223)%x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = 62367U;
	int32_t x227 = -73194579;
	volatile int32_t x228 = -1;
	static int32_t t56 = -1653742;

    t56 = (((x225!=x226)>x227)%x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -3584274618011LL;
	int16_t x230 = 9;
	int32_t x232 = -130068;

    t57 = (((x229!=x230)>x231)%x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -17;
	static int64_t x234 = INT64_MAX;
	int32_t x235 = -3;
	uint32_t x236 = UINT32_MAX;

    t58 = (((x233!=x234)>x235)%x236);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = UINT8_MAX;
	int64_t x238 = 547326595752LL;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 226;

    t59 = (((x237!=x238)>x239)%x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x242 = INT64_MAX;
	volatile int8_t x243 = 49;
	int16_t x244 = INT16_MAX;
	int32_t t60 = -9796;

    t60 = (((x241!=x242)>x243)%x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -2621811071LL;
	volatile int8_t x246 = INT8_MAX;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t61 = 6010930;

    t61 = (((x245!=x246)>x247)%x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 1U;
	static int16_t x250 = INT16_MAX;
	static int16_t x251 = 1753;
	volatile int64_t t62 = 273098322364689796LL;

    t62 = (((x249!=x250)>x251)%x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile int32_t x254 = INT32_MIN;
	static int64_t x255 = -7LL;
	int8_t x256 = -1;

    t63 = (((x253!=x254)>x255)%x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MAX;
	static int8_t x259 = 2;
	int8_t x260 = 29;

    t64 = (((x257!=x258)>x259)%x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -22LL;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 23896008LLU;
	static uint16_t x264 = 86U;
	int32_t t65 = -24;

    t65 = (((x261!=x262)>x263)%x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 45;
	int32_t x267 = INT32_MIN;
	uint8_t x268 = 26U;
	int32_t t66 = 4;

    t66 = (((x265!=x266)>x267)%x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = INT64_MIN;
	static int64_t x272 = INT64_MIN;

    t67 = (((x269!=x270)>x271)%x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x273 = 13U;
	int8_t x274 = INT8_MIN;
	static int32_t x275 = INT32_MAX;
	static int32_t x276 = INT32_MIN;

    t68 = (((x273!=x274)>x275)%x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -3;
	uint16_t x278 = 6U;
	int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 18;

    t69 = (((x277!=x278)>x279)%x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x281 = -1;
	volatile int32_t x282 = INT32_MIN;
	int16_t x283 = -5919;
	uint8_t x284 = 2U;
	volatile int32_t t70 = 31235073;

    t70 = (((x281!=x282)>x283)%x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MIN;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = -1;

    t71 = (((x285!=x286)>x287)%x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 1U;
	int32_t x290 = -1;
	static volatile int8_t x291 = INT8_MAX;
	int32_t x292 = -1180507;

    t72 = (((x289!=x290)>x291)%x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	static volatile int8_t x294 = 20;
	static int32_t x296 = INT32_MAX;
	volatile int32_t t73 = 40613004;

    t73 = (((x293!=x294)>x295)%x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = 29LL;
	static uint8_t x299 = 0U;
	static int8_t x300 = 63;
	volatile int32_t t74 = -87786;

    t74 = (((x297!=x298)>x299)%x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = -1;
	int16_t x302 = -1;
	int8_t x303 = 1;
	volatile int64_t x304 = INT64_MIN;
	int64_t t75 = -3671LL;

    t75 = (((x301!=x302)>x303)%x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = INT16_MAX;
	static volatile uint16_t x306 = 1754U;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = INT64_MAX;
	volatile int64_t t76 = -83LL;

    t76 = (((x305!=x306)>x307)%x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	int64_t x311 = -1LL;
	volatile int32_t x312 = INT32_MAX;
	int32_t t77 = -1;

    t77 = (((x309!=x310)>x311)%x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	static uint64_t x314 = UINT64_MAX;
	volatile int8_t x315 = 19;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 642597;

    t78 = (((x313!=x314)>x315)%x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MAX;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	int32_t t79 = -59;

    t79 = (((x317!=x318)>x319)%x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 48U;
	volatile int16_t x322 = 1;
	volatile int8_t x323 = 1;
	int8_t x324 = -1;
	static volatile int32_t t80 = -169372;

    t80 = (((x321!=x322)>x323)%x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 1053797399048LL;
	volatile int64_t x326 = -13723527856LL;
	static uint64_t x327 = 1768170LLU;
	int64_t x328 = INT64_MIN;
	int64_t t81 = 186343999674394273LL;

    t81 = (((x325!=x326)>x327)%x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 2803763520997LL;
	volatile int16_t x330 = -1;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -534;

    t82 = (((x329!=x330)>x331)%x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MIN;
	static uint16_t x335 = 30171U;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -14205306;

    t83 = (((x333!=x334)>x335)%x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	uint32_t x338 = 1593U;
	uint16_t x339 = 19423U;
	static int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -633640878;

    t84 = (((x337!=x338)>x339)%x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = -1;
	int8_t x342 = -1;
	int8_t x343 = INT8_MIN;
	volatile int8_t x344 = 5;
	int32_t t85 = -48582606;

    t85 = (((x341!=x342)>x343)%x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x345 = 7U;
	uint64_t x347 = 29133308249LLU;
	static int32_t x348 = 66;
	int32_t t86 = 11293;

    t86 = (((x345!=x346)>x347)%x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MIN;
	volatile int32_t t87 = -111301594;

    t87 = (((x349!=x350)>x351)%x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = INT64_MIN;
	int32_t x355 = -1;
	static uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = 1;

    t88 = (((x353!=x354)>x355)%x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 37U;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t89 = 57;

    t89 = (((x357!=x358)>x359)%x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x363 = -4;

    t90 = (((x361!=x362)>x363)%x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MAX;
	int16_t x366 = -115;
	volatile int64_t x367 = INT64_MIN;
	int16_t x368 = -22;
	int32_t t91 = -2041267;

    t91 = (((x365!=x366)>x367)%x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 574610;
	int32_t x370 = 13685124;
	int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 38377435;

    t92 = (((x369!=x370)>x371)%x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x374 = INT16_MIN;
	uint32_t x375 = 19492U;
	uint64_t x376 = 23LLU;
	uint64_t t93 = 311905599228LLU;

    t93 = (((x373!=x374)>x375)%x376);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -1;
	static volatile uint32_t x378 = 87U;
	uint64_t x380 = 5LLU;
	volatile uint64_t t94 = 14969LLU;

    t94 = (((x377!=x378)>x379)%x380);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 0U;
	volatile int32_t t95 = -171095272;

    t95 = (((x381!=x382)>x383)%x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 53319894;
	static volatile int32_t t96 = -2329941;

    t96 = (((x385!=x386)>x387)%x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MAX;
	int32_t x392 = -34999197;
	int32_t t97 = -3530;

    t97 = (((x389!=x390)>x391)%x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = UINT16_MAX;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = 6460061LLU;
	uint8_t x396 = UINT8_MAX;
	static volatile int32_t t98 = -422;

    t98 = (((x393!=x394)>x395)%x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x401 = 13;
	int32_t x402 = 8744613;
	uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = -657;
	int32_t t99 = -15;

    t99 = (((x401!=x402)>x403)%x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = -1;
	int64_t x406 = INT64_MIN;
	uint16_t x408 = 8387U;
	int32_t t100 = -158;

    t100 = (((x405!=x406)>x407)%x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x409 = INT8_MAX;
	volatile int64_t x411 = -1LL;
	uint8_t x412 = 7U;
	int32_t t101 = -82288184;

    t101 = (((x409!=x410)>x411)%x412);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x413 = -43516LL;
	int8_t x414 = INT8_MAX;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MAX;
	int32_t t102 = 862786;

    t102 = (((x413!=x414)>x415)%x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x418 = 5U;
	int64_t x419 = INT64_MAX;
	volatile int32_t x420 = 10106;
	volatile int32_t t103 = 396;

    t103 = (((x417!=x418)>x419)%x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	int16_t x422 = -32;
	static uint64_t x423 = UINT64_MAX;
	uint32_t x424 = 44U;
	uint32_t t104 = 1022712703U;

    t104 = (((x421!=x422)>x423)%x424);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x425 = UINT8_MAX;
	uint32_t x426 = 30U;
	static int8_t x428 = -9;
	int32_t t105 = -25605115;

    t105 = (((x425!=x426)>x427)%x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = INT8_MAX;
	int8_t x430 = -1;
	volatile uint8_t x431 = 117U;
	uint8_t x432 = UINT8_MAX;
	static int32_t t106 = -9;

    t106 = (((x429!=x430)>x431)%x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x434 = UINT64_MAX;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 38U;
	static volatile uint32_t t107 = 8467U;

    t107 = (((x433!=x434)>x435)%x436);

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x439 = 2587U;
	uint32_t x440 = 1040069122U;
	uint32_t t108 = 3U;

    t108 = (((x437!=x438)>x439)%x440);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x441 = 0U;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MAX;
	int8_t x444 = -57;
	volatile int32_t t109 = 7171857;

    t109 = (((x441!=x442)>x443)%x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MAX;
	volatile uint32_t x446 = 148988087U;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -5;
	volatile int32_t t110 = 403659;

    t110 = (((x445!=x446)>x447)%x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x450 = 8U;
	int8_t x451 = INT8_MAX;
	int64_t x452 = -1LL;
	volatile int64_t t111 = 207662959156LL;

    t111 = (((x449!=x450)>x451)%x452);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x453 = INT8_MAX;
	volatile uint8_t x455 = 44U;
	uint16_t x456 = 82U;
	int32_t t112 = 3;

    t112 = (((x453!=x454)>x455)%x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x457 = INT64_MAX;
	static int8_t x458 = 1;
	volatile int32_t x459 = INT32_MAX;
	static int16_t x460 = INT16_MIN;
	int32_t t113 = -51514;

    t113 = (((x457!=x458)>x459)%x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x461 = -1;
	int8_t x462 = -2;
	static int32_t x463 = -1;
	static volatile int8_t x464 = INT8_MIN;
	int32_t t114 = -386078;

    t114 = (((x461!=x462)>x463)%x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x466 = 28310767372433LLU;
	uint8_t x467 = UINT8_MAX;
	static int8_t x468 = INT8_MAX;
	int32_t t115 = -7756654;

    t115 = (((x465!=x466)>x467)%x468);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = INT64_MIN;
	volatile int8_t x470 = INT8_MAX;
	static int16_t x472 = INT16_MIN;
	int32_t t116 = -22187392;

    t116 = (((x469!=x470)>x471)%x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MIN;
	static volatile int32_t t117 = 5066632;

    t117 = (((x473!=x474)>x475)%x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x477 = 1625U;
	int64_t x478 = INT64_MIN;
	volatile uint16_t x479 = 130U;
	int16_t x480 = INT16_MIN;
	int32_t t118 = 17557869;

    t118 = (((x477!=x478)>x479)%x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x481 = 516321U;
	static int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;
	int64_t x484 = -1LL;
	int64_t t119 = 7LL;

    t119 = (((x481!=x482)>x483)%x484);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x486 = 0;
	uint16_t x487 = UINT16_MAX;
	volatile int32_t t120 = 1;

    t120 = (((x485!=x486)>x487)%x488);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x491 = -1;
	volatile int64_t x492 = 17265147425253LL;

    t121 = (((x489!=x490)>x491)%x492);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x493 = 11251;
	int32_t x494 = INT32_MIN;
	uint8_t x496 = 11U;
	static volatile int32_t t122 = 16;

    t122 = (((x493!=x494)>x495)%x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x497 = UINT32_MAX;
	static int32_t x498 = 18604449;
	int8_t x499 = INT8_MAX;
	uint32_t x500 = UINT32_MAX;

    t123 = (((x497!=x498)>x499)%x500);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x502 = INT8_MAX;
	volatile int64_t x503 = -1LL;
	volatile uint8_t x504 = UINT8_MAX;
	volatile int32_t t124 = 51;

    t124 = (((x501!=x502)>x503)%x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x505 = INT16_MIN;
	static int8_t x506 = INT8_MIN;
	volatile int64_t x507 = INT64_MAX;
	uint8_t x508 = 29U;
	int32_t t125 = 8786;

    t125 = (((x505!=x506)>x507)%x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x510 = -7;
	int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t126 = -3665;

    t126 = (((x509!=x510)>x511)%x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x513 = 79991707;
	static int64_t x514 = INT64_MIN;
	int64_t x515 = INT64_MAX;
	static int64_t x516 = 909195533208007178LL;
	volatile int64_t t127 = -1632LL;

    t127 = (((x513!=x514)>x515)%x516);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x517 = UINT32_MAX;
	int32_t x518 = -1;
	static volatile uint8_t x519 = 2U;
	int64_t x520 = INT64_MIN;

    t128 = (((x517!=x518)>x519)%x520);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x522 = -1;
	int8_t x523 = -1;
	volatile int8_t x524 = INT8_MIN;
	int32_t t129 = 919334;

    t129 = (((x521!=x522)>x523)%x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = 200;
	uint64_t x526 = UINT64_MAX;
	int64_t x527 = -10640411022LL;
	volatile int64_t x528 = INT64_MIN;
	volatile int64_t t130 = -169087LL;

    t130 = (((x525!=x526)>x527)%x528);

    if (t130 != 1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x529 = 1653U;
	int16_t x530 = -788;
	uint16_t x531 = 11U;
	volatile int64_t x532 = 381900247LL;
	volatile int64_t t131 = 374572770792LL;

    t131 = (((x529!=x530)>x531)%x532);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x533 = -1;
	int8_t x534 = -9;
	int32_t x535 = 368152910;
	static int64_t x536 = 209257165LL;
	int64_t t132 = -197816066383716988LL;

    t132 = (((x533!=x534)>x535)%x536);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = 1;
	uint32_t x538 = 229745664U;
	uint8_t x539 = UINT8_MAX;
	int64_t x540 = -1LL;
	volatile int64_t t133 = 8810481578LL;

    t133 = (((x537!=x538)>x539)%x540);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x541 = INT8_MIN;
	volatile uint64_t x542 = 328265868200318761LLU;
	volatile int32_t x543 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	int32_t t134 = 0;

    t134 = (((x541!=x542)>x543)%x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = 1823;
	int32_t x546 = INT32_MIN;
	static int8_t x548 = INT8_MAX;
	static volatile int32_t t135 = 2248460;

    t135 = (((x545!=x546)>x547)%x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x549 = INT64_MIN;
	int16_t x551 = INT16_MIN;
	int32_t x552 = INT32_MIN;
	volatile int32_t t136 = -1;

    t136 = (((x549!=x550)>x551)%x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x553 = -1;
	static int32_t x555 = 21943;
	uint8_t x556 = UINT8_MAX;
	int32_t t137 = -2;

    t137 = (((x553!=x554)>x555)%x556);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x559 = -54;
	int32_t x560 = INT32_MIN;
	static int32_t t138 = -63;

    t138 = (((x557!=x558)>x559)%x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x561 = INT8_MAX;
	static int16_t x562 = -1;
	volatile uint32_t x563 = 512U;
	int16_t x564 = INT16_MIN;
	volatile int32_t t139 = -141144530;

    t139 = (((x561!=x562)>x563)%x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x565 = INT32_MAX;
	volatile int16_t x566 = INT16_MAX;
	volatile uint16_t x567 = UINT16_MAX;
	volatile int32_t t140 = 120241478;

    t140 = (((x565!=x566)>x567)%x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x569 = 1325;
	volatile int16_t x571 = 0;
	uint16_t x572 = 66U;

    t141 = (((x569!=x570)>x571)%x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x573 = INT64_MIN;
	static volatile uint32_t x575 = UINT32_MAX;

    t142 = (((x573!=x574)>x575)%x576);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x577 = UINT64_MAX;
	int64_t x579 = INT64_MIN;

    t143 = (((x577!=x578)>x579)%x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x581 = -1;
	uint64_t x582 = 886186217812651LLU;
	uint16_t x584 = 8509U;
	volatile int32_t t144 = 69712480;

    t144 = (((x581!=x582)>x583)%x584);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = INT16_MIN;
	volatile uint32_t x586 = 1U;
	int16_t x587 = INT16_MIN;
	uint8_t x588 = UINT8_MAX;
	static volatile int32_t t145 = -9;

    t145 = (((x585!=x586)>x587)%x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x590 = 1U;
	static int8_t x591 = INT8_MIN;
	uint64_t t146 = 2LLU;

    t146 = (((x589!=x590)>x591)%x592);

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x593 = INT16_MAX;
	static volatile uint32_t x594 = 9U;
	int32_t x596 = INT32_MIN;
	int32_t t147 = 2152;

    t147 = (((x593!=x594)>x595)%x596);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x597 = INT8_MIN;
	static int64_t x599 = INT64_MAX;
	static uint64_t x600 = 16463832659LLU;

    t148 = (((x597!=x598)>x599)%x600);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x602 = 8U;
	volatile int16_t x603 = INT16_MAX;
	int16_t x604 = INT16_MIN;
	int32_t t149 = -44;

    t149 = (((x601!=x602)>x603)%x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x605 = -1LL;
	int8_t x606 = -1;
	volatile int16_t x607 = INT16_MIN;
	static uint64_t x608 = 122077255051212LLU;
	static uint64_t t150 = 17637LLU;

    t150 = (((x605!=x606)>x607)%x608);

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x609 = 1;
	static volatile int8_t x610 = 7;
	uint16_t x611 = 99U;
	int64_t x612 = -1LL;
	static volatile int64_t t151 = 25950950LL;

    t151 = (((x609!=x610)>x611)%x612);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x613 = -6186;
	int32_t x615 = INT32_MAX;
	uint64_t x616 = 1LLU;
	static uint64_t t152 = 2739LLU;

    t152 = (((x613!=x614)>x615)%x616);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x621 = UINT8_MAX;
	int8_t x622 = -15;
	int16_t x623 = INT16_MIN;
	uint16_t x624 = 9246U;
	volatile int32_t t153 = 48545551;

    t153 = (((x621!=x622)>x623)%x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x625 = -1;
	volatile int8_t x626 = INT8_MIN;
	int64_t t154 = -8850206206LL;

    t154 = (((x625!=x626)>x627)%x628);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x629 = 1374U;
	uint64_t x630 = 26LLU;
	int16_t x631 = 21;
	int32_t x632 = -1;
	static volatile int32_t t155 = -3;

    t155 = (((x629!=x630)>x631)%x632);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x634 = 12;
	int8_t x635 = INT8_MAX;
	uint32_t x636 = 14629U;
	uint32_t t156 = 855254716U;

    t156 = (((x633!=x634)>x635)%x636);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x637 = INT64_MAX;
	volatile int32_t x638 = INT32_MIN;
	int32_t x639 = 280;
	static int8_t x640 = INT8_MIN;
	int32_t t157 = 290489;

    t157 = (((x637!=x638)>x639)%x640);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	int32_t x643 = INT32_MIN;
	volatile uint64_t x644 = 960031161978774LLU;
	volatile uint64_t t158 = 999471419059LLU;

    t158 = (((x641!=x642)>x643)%x644);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x645 = 238600819457503565LLU;
	volatile int16_t x646 = 56;
	volatile int8_t x647 = INT8_MIN;
	static uint32_t x648 = 73U;
	uint32_t t159 = 2253U;

    t159 = (((x645!=x646)>x647)%x648);

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x649 = INT64_MIN;
	uint8_t x650 = 9U;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 562652823U;
	volatile uint32_t t160 = 7U;

    t160 = (((x649!=x650)>x651)%x652);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x653 = INT32_MIN;
	int16_t x654 = INT16_MAX;
	uint32_t x655 = 17607U;
	int64_t x656 = INT64_MAX;
	static int64_t t161 = 464724597346620693LL;

    t161 = (((x653!=x654)>x655)%x656);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x657 = 163U;
	static int8_t x658 = INT8_MAX;
	static int64_t x659 = 1544087LL;
	int32_t t162 = -14;

    t162 = (((x657!=x658)>x659)%x660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x662 = 26U;
	int8_t x663 = INT8_MIN;
	int8_t x664 = -61;
	static volatile int32_t t163 = 14919;

    t163 = (((x661!=x662)>x663)%x664);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x665 = UINT8_MAX;
	uint64_t x666 = 723459511019LLU;
	int32_t t164 = 14;

    t164 = (((x665!=x666)>x667)%x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = -1;
	volatile uint64_t x670 = UINT64_MAX;
	uint32_t x672 = UINT32_MAX;
	uint32_t t165 = 2794984U;

    t165 = (((x669!=x670)>x671)%x672);

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x673 = INT8_MIN;
	int8_t x675 = -1;
	int8_t x676 = INT8_MIN;
	static volatile int32_t t166 = 0;

    t166 = (((x673!=x674)>x675)%x676);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x678 = INT16_MIN;
	int16_t x680 = -58;
	volatile int32_t t167 = -7918;

    t167 = (((x677!=x678)>x679)%x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x681 = 100U;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = 81U;
	uint64_t x684 = UINT64_MAX;
	volatile uint64_t t168 = 11487549429630172LLU;

    t168 = (((x681!=x682)>x683)%x684);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x685 = 0U;
	uint8_t x686 = 1U;
	volatile int32_t x688 = INT32_MIN;
	int32_t t169 = -162;

    t169 = (((x685!=x686)>x687)%x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x690 = INT16_MAX;
	static volatile int16_t x691 = INT16_MIN;
	uint16_t x692 = 4019U;
	int32_t t170 = -3;

    t170 = (((x689!=x690)>x691)%x692);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x693 = 346LLU;
	int64_t x694 = INT64_MAX;
	int8_t x695 = 7;
	int16_t x696 = -3;

    t171 = (((x693!=x694)>x695)%x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x698 = -1;
	volatile uint16_t x699 = 11653U;
	volatile int16_t x700 = INT16_MIN;

    t172 = (((x697!=x698)>x699)%x700);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x701 = 333U;
	int8_t x703 = INT8_MIN;
	int8_t x704 = 48;
	static volatile int32_t t173 = -494437377;

    t173 = (((x701!=x702)>x703)%x704);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x707 = 361U;
	uint8_t x708 = 28U;
	volatile int32_t t174 = -172;

    t174 = (((x705!=x706)>x707)%x708);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x710 = INT8_MIN;
	static int8_t x711 = INT8_MIN;
	volatile int64_t t175 = -435437643106LL;

    t175 = (((x709!=x710)>x711)%x712);

    if (t175 != 1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x713 = -1;
	int32_t x714 = 3280;
	static uint16_t x715 = UINT16_MAX;
	static uint32_t x716 = 1016563U;

    t176 = (((x713!=x714)>x715)%x716);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x717 = 26;
	int32_t x718 = INT32_MIN;
	uint8_t x719 = 90U;
	static volatile int32_t x720 = INT32_MIN;
	int32_t t177 = 952778;

    t177 = (((x717!=x718)>x719)%x720);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x722 = INT64_MIN;
	int8_t x723 = -15;
	uint64_t x724 = 68435573342098895LLU;
	volatile uint64_t t178 = 12715LLU;

    t178 = (((x721!=x722)>x723)%x724);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x726 = -1;
	volatile int8_t x727 = 4;
	int32_t x728 = INT32_MIN;
	int32_t t179 = -786;

    t179 = (((x725!=x726)>x727)%x728);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x729 = 9;
	int8_t x730 = INT8_MAX;
	static volatile uint8_t x731 = 110U;
	static int64_t x732 = -1LL;
	volatile int64_t t180 = -78929LL;

    t180 = (((x729!=x730)>x731)%x732);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x735 = -86;
	volatile int32_t x736 = -28065;
	int32_t t181 = 31014;

    t181 = (((x733!=x734)>x735)%x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x742 = INT32_MIN;
	int16_t x744 = 62;
	int32_t t182 = -1;

    t182 = (((x741!=x742)>x743)%x744);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x745 = 58U;
	volatile uint16_t x746 = 6310U;
	uint32_t x747 = 1048631975U;
	volatile int32_t t183 = 1357;

    t183 = (((x745!=x746)>x747)%x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x749 = INT8_MIN;
	int32_t x750 = INT32_MIN;
	uint8_t x751 = UINT8_MAX;
	static int16_t x752 = 221;
	volatile int32_t t184 = -45387348;

    t184 = (((x749!=x750)>x751)%x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x753 = INT8_MIN;
	int8_t x754 = 2;
	uint8_t x755 = 7U;
	int64_t x756 = -1LL;
	volatile int64_t t185 = -23LL;

    t185 = (((x753!=x754)>x755)%x756);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x757 = 506514975U;
	static uint8_t x758 = 2U;
	int32_t x760 = -50600960;

    t186 = (((x757!=x758)>x759)%x760);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x761 = -1;
	int64_t x762 = -1LL;
	uint16_t x763 = 58U;
	volatile int64_t x764 = INT64_MAX;
	volatile int64_t t187 = 21975LL;

    t187 = (((x761!=x762)>x763)%x764);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x765 = 0U;
	int32_t x766 = 2504119;
	volatile int64_t x767 = 4LL;
	int64_t x768 = INT64_MIN;

    t188 = (((x765!=x766)>x767)%x768);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x769 = 1;
	uint64_t x770 = 796953LLU;
	uint16_t x772 = UINT16_MAX;
	static int32_t t189 = -45;

    t189 = (((x769!=x770)>x771)%x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x774 = 0;
	volatile int64_t x775 = INT64_MIN;
	int16_t x776 = -1;
	static int32_t t190 = 233;

    t190 = (((x773!=x774)>x775)%x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x777 = 5966762211264LL;
	int32_t x779 = INT32_MIN;
	uint8_t x780 = 4U;

    t191 = (((x777!=x778)>x779)%x780);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x781 = -1;
	int8_t x782 = INT8_MAX;
	volatile int32_t x783 = -1;
	int32_t x784 = 266;
	static volatile int32_t t192 = 1355;

    t192 = (((x781!=x782)>x783)%x784);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x785 = INT8_MAX;
	static uint16_t x787 = 103U;
	int16_t x788 = INT16_MAX;

    t193 = (((x785!=x786)>x787)%x788);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x789 = INT8_MIN;
	int32_t x791 = -1;
	volatile int64_t t194 = 813688393099LL;

    t194 = (((x789!=x790)>x791)%x792);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x793 = 29099U;
	static int64_t x794 = INT64_MAX;
	volatile int16_t x795 = 1203;
	volatile int8_t x796 = 1;
	volatile int32_t t195 = 254419;

    t195 = (((x793!=x794)>x795)%x796);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x798 = 27490U;
	uint64_t x799 = 78118LLU;
	static volatile int64_t t196 = -2897613582203LL;

    t196 = (((x797!=x798)>x799)%x800);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x801 = INT32_MIN;
	volatile int16_t x802 = INT16_MIN;
	volatile int64_t x803 = -1LL;
	uint16_t x804 = 98U;
	int32_t t197 = -20325893;

    t197 = (((x801!=x802)>x803)%x804);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x805 = -1LL;
	int16_t x806 = INT16_MIN;
	uint64_t x807 = 11425882746215LLU;
	static uint8_t x808 = UINT8_MAX;
	volatile int32_t t198 = -9;

    t198 = (((x805!=x806)>x807)%x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x809 = 3U;
	volatile int64_t x810 = 3852886855395LL;
	static int8_t x811 = INT8_MIN;
	int16_t x812 = INT16_MIN;
	int32_t t199 = -8173171;

    t199 = (((x809!=x810)>x811)%x812);

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

