
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

uint32_t x7 = UINT32_MAX;
int8_t x10 = 1;
volatile int16_t x12 = -3;
int8_t x15 = -1;
static int64_t t6 = INT64_MAX;
uint16_t x37 = UINT16_MAX;
int32_t x46 = 168935202;
uint32_t x48 = UINT32_MAX;
volatile uint32_t t8 = UINT32_MAX;
int32_t t10 = 55464638;
volatile int32_t t12 = -39360;
volatile int32_t t13 = 2347669;
static uint8_t x76 = 26U;
int32_t x78 = INT32_MIN;
static uint8_t x85 = 3U;
volatile int32_t t17 = -1012204602;
static int16_t x89 = INT16_MIN;
static int8_t x90 = INT8_MIN;
volatile uint16_t x91 = 2106U;
static int64_t x92 = 4039587682082035LL;
int64_t x95 = -11LL;
int32_t x97 = -1;
volatile int8_t x100 = INT8_MIN;
static uint64_t x104 = 200696LLU;
int32_t x112 = INT32_MIN;
int32_t x122 = -1;
volatile int32_t t26 = -224;
volatile int32_t x131 = -1170;
int8_t x135 = 5;
int8_t x157 = INT8_MIN;
int8_t x158 = INT8_MIN;
int32_t t33 = 231;
int32_t t36 = -478;
int32_t x182 = 0;
int16_t x184 = INT16_MIN;
int32_t t37 = -7;
volatile int8_t x188 = INT8_MIN;
static volatile uint8_t x194 = 62U;
int64_t x195 = -1LL;
int64_t x202 = -1LL;
uint64_t t44 = UINT64_MAX;
static int32_t t48 = -418831215;
volatile int16_t x230 = 1;
uint64_t x235 = 334814639LLU;
int16_t x238 = 0;
uint8_t x241 = 11U;
int16_t x243 = INT16_MAX;
int64_t x248 = INT64_MAX;
volatile int32_t t54 = -5;
volatile int32_t t55 = -194350;
static volatile int16_t x269 = -1;
static int32_t x279 = INT32_MAX;
int32_t x290 = INT32_MIN;
volatile uint8_t x303 = 11U;
uint16_t x305 = 1839U;
int32_t x308 = INT32_MIN;
static int32_t x322 = INT32_MIN;
int16_t x325 = INT16_MAX;
volatile uint32_t x334 = 827274012U;
int8_t x335 = INT8_MIN;
int16_t x339 = -100;
int16_t x350 = INT16_MIN;
int64_t t73 = 179779023938880LL;
int8_t x354 = INT8_MIN;
volatile int8_t x356 = INT8_MIN;
int32_t x360 = INT32_MIN;
uint32_t x363 = 5U;
uint8_t x386 = UINT8_MAX;
volatile uint16_t x388 = UINT16_MAX;
int32_t t84 = 78796;
int32_t x401 = -1;
int8_t x402 = INT8_MAX;
static volatile int32_t t87 = -751209510;
static int16_t x416 = -661;
int16_t x420 = INT16_MIN;
static int64_t x421 = INT64_MAX;
static int8_t x422 = INT8_MIN;
int8_t x424 = -1;
int32_t t90 = 326;
static int8_t x430 = INT8_MIN;
uint8_t x432 = 38U;
static uint64_t x437 = UINT64_MAX;
static int64_t x440 = INT64_MIN;
uint64_t x442 = UINT64_MAX;
static int32_t t97 = -6041278;
int8_t x466 = -1;
static volatile int8_t x468 = INT8_MIN;
int8_t x475 = -1;
static uint8_t x477 = 14U;
uint16_t x480 = 8855U;
int32_t t102 = 15;
int32_t x484 = -1;
uint32_t x505 = UINT32_MAX;
static int8_t x509 = INT8_MIN;
int64_t x514 = -1LL;
volatile int32_t x515 = -1;
uint64_t x524 = 2736108302016795LLU;
uint16_t x527 = 84U;
static volatile int32_t t113 = 1;
int64_t x529 = INT64_MIN;
static volatile uint64_t t115 = 14LLU;
static int32_t t116 = 19282666;
volatile uint8_t x541 = 13U;
volatile int16_t x543 = INT16_MIN;
int16_t x561 = INT16_MAX;
int32_t x565 = -1;
int8_t x567 = INT8_MIN;
uint16_t x571 = UINT16_MAX;
int32_t x576 = INT32_MIN;
volatile int64_t x577 = -1LL;
static volatile int64_t x581 = -1LL;
uint64_t x584 = 21094LLU;
static volatile int32_t t127 = 237679827;
int32_t x589 = INT32_MIN;
int8_t x591 = INT8_MAX;
static int32_t x596 = 220091;
volatile int32_t t130 = -82852954;
static uint64_t x610 = UINT64_MAX;
volatile uint32_t t131 = 5U;
static uint32_t x616 = UINT32_MAX;
int32_t x617 = -1;
static uint32_t x620 = 50992279U;
static int32_t x621 = INT32_MIN;
int16_t x627 = INT16_MAX;
volatile int16_t x630 = INT16_MIN;
static int32_t x637 = INT32_MIN;
int32_t x639 = INT32_MIN;
uint64_t x644 = 248482196LLU;
volatile uint64_t t139 = 300LLU;
uint16_t x645 = UINT16_MAX;
uint64_t x649 = 550420630155233LLU;
uint64_t x653 = 2697696276000370LLU;
int16_t x663 = INT16_MAX;
int16_t x665 = INT16_MIN;
uint64_t x667 = 0LLU;
static int32_t x674 = -1;
int64_t t146 = -131441996233LL;
volatile uint16_t x680 = 974U;
int32_t t147 = -223;
uint32_t x684 = 704U;
int64_t x711 = INT64_MIN;
int8_t x712 = INT8_MAX;
int32_t x713 = 3;
int16_t x714 = -1;
int8_t x715 = INT8_MAX;
int32_t x717 = INT32_MIN;
int64_t x722 = 32268847LL;
int32_t x723 = INT32_MAX;
int16_t x727 = INT16_MIN;
volatile int32_t t158 = 1934554;
int8_t x733 = -1;
uint8_t x734 = UINT8_MAX;
uint64_t x739 = 235105141764168LLU;
static int8_t x740 = INT8_MAX;
int8_t x746 = 1;
static int8_t x748 = INT8_MAX;
uint8_t x757 = 77U;
static int8_t x760 = INT8_MIN;
volatile int16_t x762 = INT16_MIN;
static int64_t x764 = 101LL;
uint16_t x768 = 205U;
uint32_t x772 = 4U;
uint8_t x774 = 8U;
static uint64_t x776 = 1391491272017LLU;
static int8_t x777 = -6;
static int32_t x778 = INT32_MIN;
uint16_t x793 = 3U;
volatile uint32_t x795 = UINT32_MAX;
uint16_t x796 = 1U;
int8_t x800 = 1;
int32_t t175 = -1845;
volatile uint64_t x813 = 0LLU;
volatile int16_t x814 = INT16_MIN;
static uint8_t x824 = 7U;
volatile uint16_t x827 = 248U;
int16_t x830 = -92;
static volatile int16_t x834 = 3385;
volatile int32_t x836 = -195;
uint32_t x837 = 13345156U;
int64_t x840 = -1LL;
volatile int64_t t183 = 7855LL;
volatile uint64_t x842 = UINT64_MAX;
uint8_t x856 = 44U;
int8_t x857 = INT8_MIN;
int32_t t187 = 195125102;
int32_t t188 = 34046714;
uint64_t x870 = 0LLU;
volatile uint16_t x871 = 323U;
int32_t x872 = INT32_MIN;
volatile int32_t x873 = -7052678;
static volatile int64_t t192 = -115507575446663LL;
uint64_t x888 = UINT64_MAX;
static int16_t x898 = INT16_MIN;
static int64_t x899 = 974469910145342655LL;
static int16_t x909 = INT16_MIN;
uint16_t x911 = 1654U;
static int64_t x912 = 3734LL;
static int8_t x916 = INT8_MIN;
int64_t x921 = INT64_MIN;
volatile uint16_t x922 = 5U;


void f0(void) {
    	static uint8_t x5 = 53U;
	int64_t x6 = INT64_MIN;
	static volatile uint8_t x8 = 77U;
	static int32_t t0 = -112813;

    t0 = ((x5>(x6+x7))|x8);

    if (t0 != 77) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x9 = 157LLU;
	int8_t x11 = INT8_MIN;
	static volatile int32_t t1 = 1100781;

    t1 = ((x9>(x10+x11))|x12);

    if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x13 = INT16_MIN;
	uint32_t x14 = 869U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t2 = UINT64_MAX;

    t2 = ((x13>(x14+x15))|x16);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 5438810LLU;
	volatile uint8_t x18 = 0U;
	uint16_t x19 = 0U;
	int32_t x20 = INT32_MAX;
	int32_t t3 = INT32_MAX;

    t3 = ((x17>(x18+x19))|x20);

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -976;
	int32_t x22 = INT32_MIN;
	int16_t x23 = 67;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t4 = 101181;

    t4 = ((x21>(x22+x23))|x24);

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = -191964577;
	int32_t x26 = INT32_MAX;
	static int64_t x27 = -1LL;
	volatile int64_t x28 = -1LL;
	volatile int64_t t5 = -884909447LL;

    t5 = ((x25>(x26+x27))|x28);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MAX;
	int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MAX;

    t6 = ((x33>(x34+x35))|x36);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = -1;
	uint8_t x39 = 1U;
	int32_t x40 = INT32_MIN;
	static int32_t t7 = 0;

    t7 = ((x37>(x38+x39))|x40);

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	int32_t x47 = INT32_MIN;

    t8 = ((x45>(x46+x47))|x48);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x49 = INT8_MIN;
	static volatile int16_t x50 = -482;
	int64_t x51 = 10479937LL;
	int16_t x52 = 996;
	int32_t t9 = -20472857;

    t9 = ((x49>(x50+x51))|x52);

    if (t9 != 996) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = -1LL;
	int64_t x58 = INT64_MAX;
	static int32_t x59 = -1;
	int8_t x60 = INT8_MIN;

    t10 = ((x57>(x58+x59))|x60);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x61 = 298081LLU;
	uint16_t x62 = 158U;
	int16_t x63 = -1;
	static int64_t x64 = 1781195LL;
	volatile int64_t t11 = 5634414LL;

    t11 = ((x61>(x62+x63))|x64);

    if (t11 != 1781195LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x65 = -2592;
	uint32_t x66 = 863U;
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 372U;

    t12 = ((x65>(x66+x67))|x68);

    if (t12 != 373) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x69 = 1U;
	int16_t x70 = 113;
	uint32_t x71 = 185816U;
	int16_t x72 = 33;

    t13 = ((x69>(x70+x71))|x72);

    if (t13 != 33) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x73 = UINT64_MAX;
	int8_t x74 = 3;
	uint32_t x75 = 104U;
	volatile int32_t t14 = -243066;

    t14 = ((x73>(x74+x75))|x76);

    if (t14 != 27) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = INT8_MAX;
	int32_t x79 = 50943824;
	static int8_t x80 = 11;
	int32_t t15 = 260;

    t15 = ((x77>(x78+x79))|x80);

    if (t15 != 11) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = 0;
	uint64_t x82 = 4LLU;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t16 = INT32_MIN;

    t16 = ((x81>(x82+x83))|x84);

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x86 = -1;
	volatile int8_t x87 = 47;
	int16_t x88 = INT16_MIN;

    t17 = ((x85>(x86+x87))|x88);

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t t18 = -68340750308LL;

    t18 = ((x89>(x90+x91))|x92);

    if (t18 != 4039587682082035LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = INT32_MIN;
	uint64_t x94 = UINT64_MAX;
	int32_t x96 = INT32_MAX;
	int32_t t19 = INT32_MAX;

    t19 = ((x93>(x94+x95))|x96);

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x98 = UINT32_MAX;
	int32_t x99 = INT32_MIN;
	volatile int32_t t20 = 23782;

    t20 = ((x97>(x98+x99))|x100);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = 263LLU;
	int8_t x103 = -60;
	static uint64_t t21 = 890489058740528LLU;

    t21 = ((x101>(x102+x103))|x104);

    if (t21 != 200697LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x109 = 6U;
	volatile int16_t x110 = INT16_MIN;
	int16_t x111 = -11238;
	volatile int32_t t22 = 60908320;

    t22 = ((x109>(x110+x111))|x112);

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = 105U;
	uint16_t x114 = 444U;
	uint32_t x115 = 241160U;
	static int32_t x116 = 10774;
	volatile int32_t t23 = 4027106;

    t23 = ((x113>(x114+x115))|x116);

    if (t23 != 10774) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	static int64_t x120 = -1LL;
	volatile int64_t t24 = -6LL;

    t24 = ((x117>(x118+x119))|x120);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = 124U;
	uint64_t x123 = 54LLU;
	int16_t x124 = INT16_MIN;
	volatile int32_t t25 = 12;

    t25 = ((x121>(x122+x123))|x124);

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x125 = 40147379928438040LL;
	int64_t x126 = INT64_MAX;
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;

    t26 = ((x125>(x126+x127))|x128);

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x129 = 2518379416125176427LLU;
	uint64_t x130 = 12590LLU;
	int32_t x132 = -1;
	int32_t t27 = -47509;

    t27 = ((x129>(x130+x131))|x132);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x133 = -870;
	int16_t x134 = INT16_MIN;
	static int16_t x136 = -3;
	static volatile int32_t t28 = 8236;

    t28 = ((x133>(x134+x135))|x136);

    if (t28 != -3) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MIN;
	int16_t x139 = 34;
	int8_t x140 = -13;
	volatile int32_t t29 = -4;

    t29 = ((x137>(x138+x139))|x140);

    if (t29 != -13) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = INT32_MAX;
	volatile int8_t x142 = INT8_MIN;
	static uint16_t x143 = 3U;
	static int32_t x144 = INT32_MAX;
	volatile int32_t t30 = INT32_MAX;

    t30 = ((x141>(x142+x143))|x144);

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x145 = 109016091U;
	static uint64_t x146 = 198263887LLU;
	uint16_t x147 = 40U;
	volatile int16_t x148 = INT16_MAX;
	volatile int32_t t31 = 92008;

    t31 = ((x145>(x146+x147))|x148);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x153 = 32LLU;
	uint16_t x154 = UINT16_MAX;
	volatile uint64_t x155 = UINT64_MAX;
	static int64_t x156 = INT64_MAX;
	int64_t t32 = INT64_MAX;

    t32 = ((x153>(x154+x155))|x156);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x159 = INT64_MAX;
	int8_t x160 = INT8_MIN;

    t33 = ((x157>(x158+x159))|x160);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x165 = UINT16_MAX;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MAX;
	int64_t x168 = -1LL;
	int64_t t34 = 214754266321459264LL;

    t34 = ((x165>(x166+x167))|x168);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x173 = INT64_MIN;
	int64_t x174 = 509655198922824LL;
	int32_t x175 = -1;
	static int8_t x176 = INT8_MAX;
	static int32_t t35 = -125;

    t35 = ((x173>(x174+x175))|x176);

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x177 = INT64_MIN;
	uint8_t x178 = 39U;
	uint16_t x179 = 0U;
	int32_t x180 = 1021774911;

    t36 = ((x177>(x178+x179))|x180);

    if (t36 != 1021774911) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x181 = -1LL;
	int64_t x183 = INT64_MIN;

    t37 = ((x181>(x182+x183))|x184);

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x185 = 671;
	static int8_t x186 = -1;
	static int32_t x187 = -1;
	int32_t t38 = -331;

    t38 = ((x185>(x186+x187))|x188);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = INT8_MIN;
	int16_t x190 = 6602;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	static volatile int64_t t39 = -136545730575100LL;

    t39 = ((x189>(x190+x191))|x192);

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = INT16_MIN;
	static uint16_t x196 = 23498U;
	int32_t t40 = -5;

    t40 = ((x193>(x194+x195))|x196);

    if (t40 != 23498) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x197 = INT64_MAX;
	int32_t x198 = 15251;
	int32_t x199 = INT32_MIN;
	int8_t x200 = -1;
	static volatile int32_t t41 = -7719;

    t41 = ((x197>(x198+x199))|x200);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = INT16_MIN;
	int32_t x203 = INT32_MIN;
	static int16_t x204 = -10791;
	int32_t t42 = 0;

    t42 = ((x201>(x202+x203))|x204);

    if (t42 != -10791) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = -30944649LL;
	static int16_t x206 = 7;
	uint32_t x207 = UINT32_MAX;
	volatile int16_t x208 = -12;
	volatile int32_t t43 = -377498;

    t43 = ((x205>(x206+x207))|x208);

    if (t43 != -12) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = INT16_MIN;
	volatile int16_t x210 = 1755;
	static int16_t x211 = -1;
	uint64_t x212 = UINT64_MAX;

    t44 = ((x209>(x210+x211))|x212);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = 1;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = -26698151427LL;
	int32_t x216 = -1;
	int32_t t45 = 106;

    t45 = ((x213>(x214+x215))|x216);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x217 = INT32_MIN;
	volatile int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MAX;
	int16_t x220 = -1;
	static int32_t t46 = -1623;

    t46 = ((x217>(x218+x219))|x220);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = INT16_MAX;
	int16_t x223 = INT16_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t47 = -354;

    t47 = ((x221>(x222+x223))|x224);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MIN;
	static uint64_t x226 = 113773962056364219LLU;
	static uint16_t x227 = UINT16_MAX;
	int16_t x228 = -400;

    t48 = ((x225>(x226+x227))|x228);

    if (t48 != -399) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x229 = 911U;
	volatile int8_t x231 = INT8_MIN;
	volatile int16_t x232 = INT16_MIN;
	int32_t t49 = -19852;

    t49 = ((x229>(x230+x231))|x232);

    if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x233 = 32394949115653747LLU;
	volatile uint32_t x234 = 1U;
	static volatile int16_t x236 = INT16_MIN;
	int32_t t50 = -499986796;

    t50 = ((x233>(x234+x235))|x236);

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x237 = UINT16_MAX;
	volatile uint16_t x239 = 2634U;
	uint64_t x240 = 10093LLU;
	volatile uint64_t t51 = 27198LLU;

    t51 = ((x237>(x238+x239))|x240);

    if (t51 != 10093LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x242 = -30;
	int16_t x244 = INT16_MAX;
	static int32_t t52 = 228;

    t52 = ((x241>(x242+x243))|x244);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = 43U;
	int64_t x246 = INT64_MAX;
	int32_t x247 = -1;
	int64_t t53 = INT64_MAX;

    t53 = ((x245>(x246+x247))|x248);

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = -1LL;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	int16_t x256 = 30;

    t54 = ((x253>(x254+x255))|x256);

    if (t54 != 30) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = 28U;
	uint8_t x259 = 16U;
	static uint16_t x260 = 24U;

    t55 = ((x257>(x258+x259))|x260);

    if (t55 != 24) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x270 = 66646181U;
	uint16_t x271 = 24927U;
	int32_t x272 = -111513432;
	volatile int32_t t56 = 3023;

    t56 = ((x269>(x270+x271))|x272);

    if (t56 != -111513431) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = -10;
	int64_t x278 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t57 = 1;

    t57 = ((x277>(x278+x279))|x280);

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x281 = -1;
	static int8_t x282 = INT8_MAX;
	int32_t x283 = -1;
	int8_t x284 = -3;
	volatile int32_t t58 = -34795141;

    t58 = ((x281>(x282+x283))|x284);

    if (t58 != -3) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x285 = INT32_MIN;
	int32_t x286 = 10620;
	int16_t x287 = INT16_MAX;
	static uint32_t x288 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

    t59 = ((x285>(x286+x287))|x288);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x289 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	volatile int32_t x292 = INT32_MAX;
	static int32_t t60 = INT32_MAX;

    t60 = ((x289>(x290+x291))|x292);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x293 = 16U;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = 31859U;
	uint16_t x296 = 1U;
	int32_t t61 = -1893;

    t61 = ((x293>(x294+x295))|x296);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = -1;
	int8_t x298 = INT8_MAX;
	volatile int8_t x299 = 19;
	int8_t x300 = -1;
	static volatile int32_t t62 = 254593;

    t62 = ((x297>(x298+x299))|x300);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int16_t x304 = -4358;
	static volatile int32_t t63 = 829389194;

    t63 = ((x301>(x302+x303))|x304);

    if (t63 != -4358) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x306 = 1;
	uint32_t x307 = 10081280U;
	int32_t t64 = INT32_MIN;

    t64 = ((x305>(x306+x307))|x308);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x309 = -78;
	int16_t x310 = INT16_MIN;
	static int64_t x311 = -1LL;
	uint64_t x312 = 74684626629LLU;
	uint64_t t65 = 7LLU;

    t65 = ((x309>(x310+x311))|x312);

    if (t65 != 74684626629LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x317 = 26738U;
	static int16_t x318 = INT16_MIN;
	uint8_t x319 = 8U;
	int8_t x320 = 22;
	static volatile int32_t t66 = 77831867;

    t66 = ((x317>(x318+x319))|x320);

    if (t66 != 22) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x321 = 11;
	static int16_t x323 = INT16_MAX;
	static int64_t x324 = INT64_MIN;
	static volatile int64_t t67 = -11LL;

    t67 = ((x321>(x322+x323))|x324);

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x326 = INT16_MIN;
	static uint8_t x327 = 42U;
	static volatile uint16_t x328 = UINT16_MAX;
	int32_t t68 = -1150891;

    t68 = ((x325>(x326+x327))|x328);

    if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x333 = INT16_MIN;
	static int8_t x336 = 18;
	int32_t t69 = -5;

    t69 = ((x333>(x334+x335))|x336);

    if (t69 != 19) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x337 = 552006LLU;
	volatile uint32_t x338 = 37U;
	int16_t x340 = INT16_MIN;
	int32_t t70 = -116743;

    t70 = ((x337>(x338+x339))|x340);

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x341 = -1;
	uint16_t x342 = 0U;
	static uint16_t x343 = 1483U;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t71 = INT32_MIN;

    t71 = ((x341>(x342+x343))|x344);

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = INT32_MIN;
	int64_t x346 = -181LL;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 217157739U;
	uint32_t t72 = 2088753373U;

    t72 = ((x345>(x346+x347))|x348);

    if (t72 != 217157739U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = INT8_MIN;
	volatile int64_t x351 = 386705816035LL;
	int64_t x352 = 20329127LL;

    t73 = ((x349>(x350+x351))|x352);

    if (t73 != 20329127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x353 = UINT8_MAX;
	int8_t x355 = INT8_MAX;
	int32_t t74 = -373;

    t74 = ((x353>(x354+x355))|x356);

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -17;
	int16_t x358 = INT16_MIN;
	int8_t x359 = -2;
	volatile int32_t t75 = -6758;

    t75 = ((x357>(x358+x359))|x360);

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x361 = INT8_MIN;
	int64_t x362 = -13882673986LL;
	static uint64_t x364 = 15934525159790LLU;
	volatile uint64_t t76 = 817LLU;

    t76 = ((x361>(x362+x363))|x364);

    if (t76 != 15934525159791LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 313894669;
	uint32_t x367 = 8U;
	static uint64_t x368 = 56378LLU;
	volatile uint64_t t77 = 4886451LLU;

    t77 = ((x365>(x366+x367))|x368);

    if (t77 != 56378LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x369 = UINT8_MAX;
	static volatile uint64_t x370 = 16181099LLU;
	static int8_t x371 = INT8_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t78 = -10669040;

    t78 = ((x369>(x370+x371))|x372);

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x373 = INT8_MIN;
	static int32_t x374 = 3;
	volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = 5330LLU;
	static volatile uint64_t t79 = 533406LLU;

    t79 = ((x373>(x374+x375))|x376);

    if (t79 != 5331LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = UINT64_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t80 = 0;

    t80 = ((x377>(x378+x379))|x380);

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x381 = 227U;
	int32_t x382 = 3293860;
	int64_t x383 = -44LL;
	volatile uint8_t x384 = 2U;
	volatile int32_t t81 = 3;

    t81 = ((x381>(x382+x383))|x384);

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x385 = UINT64_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	int32_t t82 = 496;

    t82 = ((x385>(x386+x387))|x388);

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x389 = -28566046723488LL;
	int32_t x390 = -23940;
	int8_t x391 = -1;
	static uint16_t x392 = UINT16_MAX;
	int32_t t83 = -353;

    t83 = ((x389>(x390+x391))|x392);

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x393 = 4335U;
	volatile int16_t x394 = 1940;
	int8_t x395 = 54;
	int16_t x396 = -1;

    t84 = ((x393>(x394+x395))|x396);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t85 = -11440231;

    t85 = ((x401>(x402+x403))|x404);

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x405 = UINT64_MAX;
	volatile int8_t x406 = INT8_MIN;
	static volatile int8_t x407 = INT8_MIN;
	uint16_t x408 = 578U;
	static volatile int32_t t86 = 1;

    t86 = ((x405>(x406+x407))|x408);

    if (t86 != 579) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x409 = 173472LLU;
	uint64_t x410 = 30341LLU;
	static uint8_t x411 = 36U;
	int16_t x412 = INT16_MAX;

    t87 = ((x409>(x410+x411))|x412);

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x413 = 4910;
	volatile int64_t x414 = INT64_MIN;
	static uint64_t x415 = UINT64_MAX;
	volatile int32_t t88 = 48;

    t88 = ((x413>(x414+x415))|x416);

    if (t88 != -661) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x418 = INT8_MIN;
	uint64_t x419 = 33284710878390919LLU;
	volatile int32_t t89 = -665203740;

    t89 = ((x417>(x418+x419))|x420);

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x423 = -1LL;

    t90 = ((x421>(x422+x423))|x424);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x429 = INT8_MAX;
	uint64_t x431 = 2996967624600639240LLU;
	volatile int32_t t91 = -223673155;

    t91 = ((x429>(x430+x431))|x432);

    if (t91 != 38) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = -1567949;
	static volatile int32_t x435 = -2261;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t92 = 0;

    t92 = ((x433>(x434+x435))|x436);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x438 = INT64_MIN;
	static int64_t x439 = 15978415308194361LL;
	int64_t t93 = -445474136LL;

    t93 = ((x437>(x438+x439))|x440);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x441 = INT64_MAX;
	volatile int64_t x443 = -6348742151480086LL;
	int16_t x444 = -1;
	volatile int32_t t94 = -254130;

    t94 = ((x441>(x442+x443))|x444);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = INT8_MAX;
	int64_t x447 = -1LL;
	static int16_t x448 = -1;
	volatile int32_t t95 = 143;

    t95 = ((x445>(x446+x447))|x448);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x449 = -20;
	int64_t x450 = -8712LL;
	int16_t x451 = INT16_MIN;
	static uint16_t x452 = 4245U;
	volatile int32_t t96 = 1693143;

    t96 = ((x449>(x450+x451))|x452);

    if (t96 != 4245) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = UINT64_MAX;
	uint32_t x454 = 63U;
	int32_t x455 = 30411;
	int8_t x456 = INT8_MIN;

    t97 = ((x453>(x454+x455))|x456);

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x461 = 2U;
	int8_t x462 = INT8_MAX;
	int8_t x463 = 27;
	int16_t x464 = -2;
	static int32_t t98 = -96887827;

    t98 = ((x461>(x462+x463))|x464);

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x465 = 4970683378464LL;
	uint32_t x467 = UINT32_MAX;
	static volatile int32_t t99 = 23467916;

    t99 = ((x465>(x466+x467))|x468);

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x470 = UINT32_MAX;
	int32_t x471 = -1;
	static uint32_t x472 = 6U;
	static uint32_t t100 = 1636332479U;

    t100 = ((x469>(x470+x471))|x472);

    if (t100 != 6U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x473 = -1LL;
	int8_t x474 = -1;
	int32_t x476 = INT32_MIN;
	int32_t t101 = 669;

    t101 = ((x473>(x474+x475))|x476);

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x478 = -4085412286309LL;
	volatile int64_t x479 = INT64_MAX;

    t102 = ((x477>(x478+x479))|x480);

    if (t102 != 8855) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x481 = -165099;
	volatile uint64_t x482 = 43833662814236LLU;
	int16_t x483 = INT16_MIN;
	volatile int32_t t103 = -226;

    t103 = ((x481>(x482+x483))|x484);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x485 = -1;
	int16_t x486 = -993;
	int16_t x487 = 59;
	volatile int64_t x488 = INT64_MIN;
	int64_t t104 = 1169727620474580986LL;

    t104 = ((x485>(x486+x487))|x488);

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x489 = INT8_MIN;
	volatile int64_t x490 = -917LL;
	uint8_t x491 = 0U;
	int64_t x492 = -1LL;
	int64_t t105 = -15630916286LL;

    t105 = ((x489>(x490+x491))|x492);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x497 = INT32_MIN;
	uint16_t x498 = 42U;
	static int16_t x499 = INT16_MIN;
	uint8_t x500 = UINT8_MAX;
	int32_t t106 = 1269036;

    t106 = ((x497>(x498+x499))|x500);

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x501 = -1;
	int64_t x502 = -45324649LL;
	static int64_t x503 = -1LL;
	int64_t x504 = -1LL;
	int64_t t107 = -18040LL;

    t107 = ((x501>(x502+x503))|x504);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x506 = INT64_MAX;
	static int32_t x507 = INT32_MIN;
	uint32_t x508 = 567346703U;
	volatile uint32_t t108 = 1556985U;

    t108 = ((x505>(x506+x507))|x508);

    if (t108 != 567346703U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x510 = 719986534118632402LLU;
	int64_t x511 = INT64_MIN;
	static volatile uint64_t x512 = UINT64_MAX;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = ((x509>(x510+x511))|x512);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x513 = INT16_MAX;
	int32_t x516 = -1;
	volatile int32_t t110 = 32575;

    t110 = ((x513>(x514+x515))|x516);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x517 = UINT64_MAX;
	int16_t x518 = 1124;
	int64_t x519 = -1LL;
	static int16_t x520 = 13464;
	int32_t t111 = -7001116;

    t111 = ((x517>(x518+x519))|x520);

    if (t111 != 13465) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int32_t x522 = INT32_MAX;
	int64_t x523 = -4457973LL;
	volatile uint64_t t112 = 4199565LLU;

    t112 = ((x521>(x522+x523))|x524);

    if (t112 != 2736108302016795LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x525 = -7;
	uint16_t x526 = UINT16_MAX;
	int32_t x528 = 446290;

    t113 = ((x525>(x526+x527))|x528);

    if (t113 != 446290) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x530 = 30;
	static uint32_t x531 = UINT32_MAX;
	volatile uint16_t x532 = 5U;
	volatile int32_t t114 = -26;

    t114 = ((x529>(x530+x531))|x532);

    if (t114 != 5) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x533 = 0U;
	int64_t x534 = -479203729LL;
	int32_t x535 = INT32_MAX;
	uint64_t x536 = 1LLU;

    t115 = ((x533>(x534+x535))|x536);

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x537 = INT64_MIN;
	static uint64_t x538 = UINT64_MAX;
	int16_t x539 = INT16_MIN;
	static int8_t x540 = 18;

    t116 = ((x537>(x538+x539))|x540);

    if (t116 != 18) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x542 = -1LL;
	uint16_t x544 = 57U;
	int32_t t117 = -31;

    t117 = ((x541>(x542+x543))|x544);

    if (t117 != 57) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x545 = 3;
	uint64_t x546 = 162171LLU;
	int32_t x547 = -112863807;
	int8_t x548 = 3;
	static int32_t t118 = 1019391840;

    t118 = ((x545>(x546+x547))|x548);

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x553 = INT32_MAX;
	int64_t x554 = INT64_MIN;
	uint32_t x555 = 19414636U;
	int8_t x556 = INT8_MAX;
	volatile int32_t t119 = -360;

    t119 = ((x553>(x554+x555))|x556);

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x557 = 240U;
	static uint32_t x558 = 8U;
	volatile int8_t x559 = INT8_MAX;
	int64_t x560 = 3768518631LL;
	static volatile int64_t t120 = -2233786LL;

    t120 = ((x557>(x558+x559))|x560);

    if (t120 != 3768518631LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x562 = 28303U;
	uint32_t x563 = 1492778U;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t121 = -438285134;

    t121 = ((x561>(x562+x563))|x564);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x566 = INT32_MAX;
	int64_t x568 = INT64_MIN;
	int64_t t122 = INT64_MIN;

    t122 = ((x565>(x566+x567))|x568);

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x569 = -1;
	volatile uint64_t x570 = UINT64_MAX;
	int64_t x572 = -1LL;
	static int64_t t123 = -5227706514LL;

    t123 = ((x569>(x570+x571))|x572);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x573 = UINT64_MAX;
	uint32_t x574 = 2075496U;
	volatile int16_t x575 = INT16_MIN;
	static volatile int32_t t124 = 10;

    t124 = ((x573>(x574+x575))|x576);

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x578 = INT64_MIN;
	uint32_t x579 = 19485078U;
	uint32_t x580 = 0U;
	uint32_t t125 = 462685U;

    t125 = ((x577>(x578+x579))|x580);

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x582 = UINT64_MAX;
	static int64_t x583 = INT64_MIN;
	uint64_t t126 = 3LLU;

    t126 = ((x581>(x582+x583))|x584);

    if (t126 != 21095LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x585 = -213966;
	uint32_t x586 = 126U;
	volatile uint8_t x587 = 26U;
	volatile int16_t x588 = -56;

    t127 = ((x585>(x586+x587))|x588);

    if (t127 != -55) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x590 = 1U;
	volatile int16_t x592 = -1;
	static volatile int32_t t128 = 1282;

    t128 = ((x589>(x590+x591))|x592);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x593 = UINT64_MAX;
	volatile int64_t x594 = -218476603243019LL;
	uint32_t x595 = 8087U;
	volatile int32_t t129 = -9627;

    t129 = ((x593>(x594+x595))|x596);

    if (t129 != 220091) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x605 = -614212276;
	uint64_t x606 = 1480663036462LLU;
	int32_t x607 = -1;
	int8_t x608 = -1;

    t130 = ((x605>(x606+x607))|x608);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x611 = 283859864LL;
	uint32_t x612 = 851566U;

    t131 = ((x609>(x610+x611))|x612);

    if (t131 != 851567U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x613 = 152500870364LLU;
	int8_t x614 = 27;
	static uint32_t x615 = UINT32_MAX;
	volatile uint32_t t132 = UINT32_MAX;

    t132 = ((x613>(x614+x615))|x616);

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x618 = INT32_MIN;
	uint8_t x619 = 1U;
	uint32_t t133 = 1106505299U;

    t133 = ((x617>(x618+x619))|x620);

    if (t133 != 50992279U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MAX;
	int8_t x624 = -1;
	int32_t t134 = -1;

    t134 = ((x621>(x622+x623))|x624);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x625 = 1U;
	static uint32_t x626 = 32U;
	uint32_t x628 = 1033644U;
	volatile uint32_t t135 = 229U;

    t135 = ((x625>(x626+x627))|x628);

    if (t135 != 1033644U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x629 = INT32_MIN;
	int16_t x631 = INT16_MAX;
	int64_t x632 = INT64_MAX;
	int64_t t136 = INT64_MAX;

    t136 = ((x629>(x630+x631))|x632);

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x633 = INT32_MIN;
	uint16_t x634 = UINT16_MAX;
	uint8_t x635 = 4U;
	volatile uint64_t x636 = 57881LLU;
	volatile uint64_t t137 = 18845LLU;

    t137 = ((x633>(x634+x635))|x636);

    if (t137 != 57881LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x638 = 20U;
	int16_t x640 = INT16_MIN;
	volatile int32_t t138 = -8;

    t138 = ((x637>(x638+x639))|x640);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x641 = -16LL;
	int32_t x642 = -50176500;
	uint16_t x643 = 37U;

    t139 = ((x641>(x642+x643))|x644);

    if (t139 != 248482197LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x646 = 1U;
	uint32_t x647 = 10778U;
	volatile int8_t x648 = INT8_MIN;
	int32_t t140 = -74226;

    t140 = ((x645>(x646+x647))|x648);

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x650 = UINT16_MAX;
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = -7;
	volatile int32_t t141 = -113;

    t141 = ((x649>(x650+x651))|x652);

    if (t141 != -7) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x654 = 720803482926585366LLU;
	uint32_t x655 = UINT32_MAX;
	uint64_t x656 = 14815281LLU;
	volatile uint64_t t142 = 611456005LLU;

    t142 = ((x653>(x654+x655))|x656);

    if (t142 != 14815281LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x657 = -27184;
	volatile int16_t x658 = INT16_MIN;
	int64_t x659 = -58LL;
	volatile int32_t x660 = 34;
	int32_t t143 = 273346;

    t143 = ((x657>(x658+x659))|x660);

    if (t143 != 35) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x661 = UINT16_MAX;
	volatile int64_t x662 = INT64_MIN;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t144 = -12;

    t144 = ((x661>(x662+x663))|x664);

    if (t144 != -127) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x666 = -25LL;
	int8_t x668 = 0;
	int32_t t145 = 9114;

    t145 = ((x665>(x666+x667))|x668);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x673 = -1;
	uint16_t x675 = 0U;
	int64_t x676 = -1LL;

    t146 = ((x673>(x674+x675))|x676);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x677 = 447757176041LLU;
	int64_t x678 = 24LL;
	uint16_t x679 = 6796U;

    t147 = ((x677>(x678+x679))|x680);

    if (t147 != 975) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int8_t x681 = INT8_MIN;
	int8_t x682 = INT8_MIN;
	int16_t x683 = 908;
	volatile uint32_t t148 = 1677U;

    t148 = ((x681>(x682+x683))|x684);

    if (t148 != 704U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x685 = 895U;
	uint64_t x686 = 28LLU;
	volatile uint64_t x687 = UINT64_MAX;
	int16_t x688 = 245;
	static volatile int32_t t149 = -715;

    t149 = ((x685>(x686+x687))|x688);

    if (t149 != 245) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x697 = 24;
	int32_t x698 = 1029860136;
	int32_t x699 = -905266908;
	int64_t x700 = -386LL;
	volatile int64_t t150 = -720363658086LL;

    t150 = ((x697>(x698+x699))|x700);

    if (t150 != -386LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x701 = 14532558;
	uint64_t x702 = UINT64_MAX;
	volatile int8_t x703 = -1;
	int8_t x704 = -1;
	volatile int32_t t151 = 0;

    t151 = ((x701>(x702+x703))|x704);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x705 = 0U;
	int16_t x706 = -68;
	int32_t x707 = -221731226;
	int8_t x708 = -1;
	volatile int32_t t152 = 254021613;

    t152 = ((x705>(x706+x707))|x708);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x709 = INT16_MIN;
	static uint16_t x710 = 391U;
	int32_t t153 = -2103354;

    t153 = ((x709>(x710+x711))|x712);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x716 = UINT8_MAX;
	static int32_t t154 = -7;

    t154 = ((x713>(x714+x715))|x716);

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x718 = -16;
	static uint8_t x719 = 0U;
	uint64_t x720 = UINT64_MAX;
	uint64_t t155 = UINT64_MAX;

    t155 = ((x717>(x718+x719))|x720);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x721 = -1;
	int8_t x724 = -7;
	volatile int32_t t156 = 127370;

    t156 = ((x721>(x722+x723))|x724);

    if (t156 != -7) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x725 = -1LL;
	volatile int16_t x726 = INT16_MIN;
	int64_t x728 = INT64_MIN;
	volatile int64_t t157 = -33149736766LL;

    t157 = ((x725>(x726+x727))|x728);

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x729 = 9U;
	int32_t x730 = -3735663;
	static int32_t x731 = -1;
	int16_t x732 = INT16_MIN;

    t158 = ((x729>(x730+x731))|x732);

    if (t158 != -32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x735 = -1;
	int16_t x736 = INT16_MIN;
	int32_t t159 = -63348;

    t159 = ((x733>(x734+x735))|x736);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x737 = -658714945068LL;
	int8_t x738 = 0;
	int32_t t160 = 3;

    t160 = ((x737>(x738+x739))|x740);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = 1;
	volatile int8_t x743 = INT8_MIN;
	volatile int32_t x744 = INT32_MIN;
	int32_t t161 = INT32_MIN;

    t161 = ((x741>(x742+x743))|x744);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x745 = INT8_MIN;
	int64_t x747 = 4368286306481935114LL;
	int32_t t162 = -24;

    t162 = ((x745>(x746+x747))|x748);

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x749 = INT64_MIN;
	uint32_t x750 = UINT32_MAX;
	int32_t x751 = INT32_MIN;
	int8_t x752 = INT8_MAX;
	static int32_t t163 = 14;

    t163 = ((x749>(x750+x751))|x752);

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x753 = 1092402903054LLU;
	static volatile int8_t x754 = -3;
	uint32_t x755 = 12U;
	int16_t x756 = INT16_MAX;
	static volatile int32_t t164 = 125298;

    t164 = ((x753>(x754+x755))|x756);

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x758 = -228514805LL;
	volatile int8_t x759 = INT8_MAX;
	static int32_t t165 = -94325811;

    t165 = ((x757>(x758+x759))|x760);

    if (t165 != -127) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x761 = INT64_MIN;
	int16_t x763 = INT16_MIN;
	static int64_t t166 = 826295885LL;

    t166 = ((x761>(x762+x763))|x764);

    if (t166 != 101LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x765 = INT64_MAX;
	uint32_t x766 = UINT32_MAX;
	static volatile int8_t x767 = INT8_MIN;
	int32_t t167 = -826687;

    t167 = ((x765>(x766+x767))|x768);

    if (t167 != 205) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x769 = 9U;
	static int32_t x770 = INT32_MIN;
	uint32_t x771 = UINT32_MAX;
	volatile uint32_t t168 = 286245939U;

    t168 = ((x769>(x770+x771))|x772);

    if (t168 != 4U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x773 = INT64_MAX;
	int16_t x775 = 1072;
	static volatile uint64_t t169 = 565697466290622LLU;

    t169 = ((x773>(x774+x775))|x776);

    if (t169 != 1391491272017LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x779 = UINT64_MAX;
	static uint16_t x780 = 233U;
	volatile int32_t t170 = -1;

    t170 = ((x777>(x778+x779))|x780);

    if (t170 != 233) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x781 = UINT16_MAX;
	static volatile uint8_t x782 = 2U;
	uint16_t x783 = UINT16_MAX;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t171 = 80993;

    t171 = ((x781>(x782+x783))|x784);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x785 = UINT64_MAX;
	int16_t x786 = -1;
	volatile uint64_t x787 = UINT64_MAX;
	int16_t x788 = -2;
	int32_t t172 = 788;

    t172 = ((x785>(x786+x787))|x788);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x789 = -1;
	int16_t x790 = INT16_MIN;
	static volatile int8_t x791 = INT8_MIN;
	volatile int64_t x792 = -1LL;
	static volatile int64_t t173 = -15113LL;

    t173 = ((x789>(x790+x791))|x792);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x794 = INT32_MIN;
	volatile int32_t t174 = 38588;

    t174 = ((x793>(x794+x795))|x796);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = -1;
	uint16_t x799 = 4U;

    t175 = ((x797>(x798+x799))|x800);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x805 = INT32_MAX;
	uint16_t x806 = 210U;
	static volatile uint16_t x807 = UINT16_MAX;
	volatile int64_t x808 = INT64_MIN;
	int64_t t176 = 3382396LL;

    t176 = ((x805>(x806+x807))|x808);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x815 = INT16_MIN;
	static uint8_t x816 = 0U;
	int32_t t177 = 1;

    t177 = ((x813>(x814+x815))|x816);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x817 = 2U;
	int8_t x818 = -2;
	uint16_t x819 = 4916U;
	static int16_t x820 = INT16_MIN;
	volatile int32_t t178 = 3;

    t178 = ((x817>(x818+x819))|x820);

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x821 = 266365428;
	static int8_t x822 = -1;
	volatile int16_t x823 = INT16_MIN;
	static volatile int32_t t179 = 2048757;

    t179 = ((x821>(x822+x823))|x824);

    if (t179 != 7) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x825 = INT16_MIN;
	uint64_t x826 = 114621LLU;
	volatile int8_t x828 = 1;
	int32_t t180 = -13683;

    t180 = ((x825>(x826+x827))|x828);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x829 = 3788765LL;
	int64_t x831 = -1LL;
	static uint16_t x832 = 90U;
	volatile int32_t t181 = -567829146;

    t181 = ((x829>(x830+x831))|x832);

    if (t181 != 91) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x833 = UINT8_MAX;
	int32_t x835 = 16089553;
	int32_t t182 = -113201;

    t182 = ((x833>(x834+x835))|x836);

    if (t182 != -195) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x838 = INT8_MAX;
	int16_t x839 = INT16_MIN;

    t183 = ((x837>(x838+x839))|x840);

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint64_t x841 = 1291788273211131LLU;
	uint64_t x843 = UINT64_MAX;
	int64_t x844 = -1LL;
	int64_t t184 = 28LL;

    t184 = ((x841>(x842+x843))|x844);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x845 = INT16_MIN;
	uint64_t x846 = 747538277786538LLU;
	uint64_t x847 = 3476463312746987475LLU;
	int32_t x848 = -1;
	volatile int32_t t185 = -172972;

    t185 = ((x845>(x846+x847))|x848);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x853 = 1343771U;
	uint16_t x854 = UINT16_MAX;
	int8_t x855 = 19;
	int32_t t186 = -12563680;

    t186 = ((x853>(x854+x855))|x856);

    if (t186 != 45) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x858 = UINT64_MAX;
	int16_t x859 = INT16_MAX;
	static volatile int32_t x860 = INT32_MIN;

    t187 = ((x857>(x858+x859))|x860);

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x861 = 0;
	int32_t x862 = 863345;
	uint16_t x863 = 180U;
	int8_t x864 = 1;

    t188 = ((x861>(x862+x863))|x864);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x869 = UINT16_MAX;
	volatile int32_t t189 = 15820;

    t189 = ((x869>(x870+x871))|x872);

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x874 = INT32_MIN;
	uint64_t x875 = 2300697417612LLU;
	uint8_t x876 = 3U;
	int32_t t190 = 283;

    t190 = ((x873>(x874+x875))|x876);

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x877 = -139789402;
	volatile uint32_t x878 = 6U;
	int64_t x879 = -1LL;
	int16_t x880 = -1;
	int32_t t191 = 18213;

    t191 = ((x877>(x878+x879))|x880);

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x881 = INT8_MAX;
	static uint8_t x882 = 4U;
	int64_t x883 = INT64_MIN;
	static int64_t x884 = INT64_MIN;

    t192 = ((x881>(x882+x883))|x884);

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x885 = INT64_MAX;
	volatile int64_t x886 = -7461493332465671LL;
	int64_t x887 = -3713544932727187119LL;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = ((x885>(x886+x887))|x888);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x889 = 146598327;
	int16_t x890 = INT16_MIN;
	int16_t x891 = INT16_MIN;
	volatile int8_t x892 = -1;
	int32_t t194 = -361;

    t194 = ((x889>(x890+x891))|x892);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x897 = -1338268325451LL;
	int8_t x900 = INT8_MAX;
	volatile int32_t t195 = 818540;

    t195 = ((x897>(x898+x899))|x900);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x910 = INT32_MIN;
	volatile int64_t t196 = 3485349LL;

    t196 = ((x909>(x910+x911))|x912);

    if (t196 != 3735LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x913 = INT16_MIN;
	int16_t x914 = -1;
	uint16_t x915 = UINT16_MAX;
	int32_t t197 = -112374574;

    t197 = ((x913>(x914+x915))|x916);

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x917 = INT16_MIN;
	int32_t x918 = INT32_MIN;
	static int32_t x919 = 363967576;
	volatile uint64_t x920 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = ((x917>(x918+x919))|x920);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x923 = INT32_MIN;
	volatile int8_t x924 = INT8_MAX;
	int32_t t199 = -1651597;

    t199 = ((x921>(x922+x923))|x924);

    if (t199 != 127) { NG(); } else { ; }
	
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

