
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

int8_t x4 = -25;
int8_t x7 = INT8_MIN;
int16_t x11 = INT16_MIN;
static uint16_t x13 = 4U;
uint64_t x20 = 11LLU;
uint32_t x22 = 181U;
int64_t x26 = 549540LL;
int64_t x27 = -91364915LL;
uint16_t x33 = 8U;
int32_t x34 = -1;
int8_t x37 = 12;
volatile int16_t x40 = INT16_MIN;
int64_t x45 = -1LL;
int64_t x47 = 851487907LL;
volatile int16_t x57 = INT16_MAX;
volatile int64_t x58 = INT64_MAX;
volatile uint64_t x62 = 3354LLU;
int32_t t13 = -415048775;
volatile int64_t x72 = -1LL;
volatile int32_t t15 = 222633158;
int16_t x95 = INT16_MIN;
int32_t x98 = -5;
int32_t t19 = -852572;
int8_t x101 = INT8_MIN;
volatile int8_t x105 = INT8_MAX;
volatile int32_t t21 = -7917277;
static int32_t x110 = 442;
int64_t x111 = -1LL;
static uint8_t x113 = 1U;
static int32_t x114 = -1;
int32_t t26 = 16678514;
static int16_t x134 = INT16_MAX;
int8_t x138 = INT8_MIN;
int8_t x141 = INT8_MAX;
int64_t x145 = -263192470LL;
static uint32_t x152 = 73U;
int32_t x160 = -1;
volatile uint16_t x168 = 156U;
static int32_t x171 = INT32_MIN;
int8_t x175 = INT8_MIN;
static int32_t x178 = INT32_MAX;
int64_t x183 = 276848784379625LL;
int64_t x184 = -1LL;
static int32_t t39 = 1;
volatile int32_t t40 = 4;
volatile int16_t x189 = 23;
volatile int16_t x196 = INT16_MAX;
volatile int64_t x209 = -2009661465566LL;
int32_t x210 = 5254911;
volatile uint16_t x211 = 5547U;
static uint16_t x212 = 399U;
int32_t t45 = 187223183;
volatile int32_t t49 = -2845654;
int64_t x243 = -74707656LL;
static uint64_t x246 = UINT64_MAX;
int64_t x251 = 2984252806646LL;
uint16_t x252 = 1U;
volatile int32_t t52 = 38;
int32_t t53 = -223547;
int32_t x258 = 6371;
volatile int32_t x262 = INT32_MIN;
int32_t t56 = 473653326;
volatile uint8_t x275 = 8U;
volatile int32_t t59 = -6000335;
int32_t x293 = 107533427;
static int8_t x296 = 0;
int16_t x299 = 5;
static volatile int32_t t64 = 554;
uint64_t x327 = 6605817LLU;
int16_t x334 = INT16_MIN;
volatile int32_t x339 = -129224;
int32_t t74 = 331594847;
static int64_t x341 = INT64_MAX;
static int8_t x346 = -1;
int32_t t76 = 44726169;
static volatile int32_t t77 = -7786;
int16_t x357 = INT16_MIN;
uint32_t x364 = 214875U;
uint32_t x368 = UINT32_MAX;
int64_t x371 = -226879352570LL;
static uint32_t x373 = 136008692U;
uint64_t x376 = UINT64_MAX;
int16_t x382 = 38;
uint8_t x383 = 0U;
int64_t x393 = INT64_MAX;
int64_t x400 = -2575693396862740LL;
uint16_t x403 = 5U;
int32_t x404 = 1;
int32_t x411 = -1;
uint8_t x412 = 7U;
static uint16_t x413 = UINT16_MAX;
static int64_t x414 = -10LL;
int16_t x415 = -1;
static volatile int32_t t91 = -861;
static int16_t x423 = -8861;
volatile uint64_t x426 = 113LLU;
int8_t x430 = INT8_MIN;
int32_t t94 = 17172158;
int64_t x434 = -1LL;
static int16_t x435 = INT16_MAX;
static int32_t t95 = 2961089;
int16_t x450 = INT16_MIN;
volatile uint64_t x451 = 9LLU;
static int32_t x465 = -148;
volatile int8_t x467 = INT8_MAX;
static volatile int16_t x469 = 9;
int16_t x474 = INT16_MIN;
static int8_t x476 = 1;
uint16_t x478 = UINT16_MAX;
static uint32_t x494 = 4031523U;
int64_t x501 = INT64_MIN;
int32_t t112 = 15400355;
uint32_t x522 = 532436309U;
int32_t t113 = 10;
int8_t x537 = INT8_MIN;
int32_t t117 = 8099866;
int32_t t118 = 49806634;
int64_t x554 = INT64_MIN;
volatile int32_t t119 = 2767;
int64_t x558 = -2891LL;
int8_t x559 = -4;
int32_t t123 = 0;
int8_t x574 = 2;
int32_t x576 = INT32_MIN;
int32_t t124 = -1;
uint64_t x582 = 8766071880088475LLU;
int64_t x583 = -1LL;
volatile uint8_t x588 = 24U;
int32_t x595 = INT32_MIN;
uint8_t x606 = 9U;
uint16_t x609 = 19976U;
volatile uint32_t x611 = 3423U;
static int8_t x612 = -1;
static int16_t x614 = -16226;
int8_t x616 = -1;
volatile int32_t t133 = 0;
int64_t x617 = -8490849271LL;
int64_t x624 = -1LL;
uint16_t x625 = UINT16_MAX;
uint16_t x629 = UINT16_MAX;
uint16_t x630 = 1U;
static int64_t x631 = 117603LL;
static uint16_t x638 = 61U;
int8_t x640 = INT8_MIN;
int32_t t138 = 0;
static volatile int8_t x645 = INT8_MIN;
volatile int8_t x648 = 2;
uint8_t x651 = 99U;
int32_t x652 = 12188910;
static int32_t t142 = 119;
volatile int32_t x661 = INT32_MIN;
static volatile int32_t x663 = -43885309;
int32_t t145 = 508036;
volatile uint16_t x673 = 1389U;
int16_t x682 = INT16_MIN;
volatile int32_t t152 = -33315777;
int32_t t153 = -403610;
static int32_t x711 = 970575604;
int32_t x713 = INT32_MIN;
static int32_t x715 = 5461694;
int32_t x726 = INT32_MIN;
volatile uint8_t x743 = UINT8_MAX;
volatile int32_t t162 = -432597;
volatile int32_t t163 = 962516895;
int16_t x754 = INT16_MAX;
volatile uint32_t x756 = UINT32_MAX;
static int32_t t164 = 34;
int32_t t165 = 106;
int32_t t167 = -14;
volatile int64_t x784 = 481866805920LL;
volatile int16_t x785 = INT16_MIN;
uint32_t x786 = UINT32_MAX;
int16_t x787 = INT16_MAX;
int8_t x793 = -1;
volatile int16_t x794 = INT16_MIN;
static volatile int64_t x802 = -11891043009333775LL;
static int8_t x808 = INT8_MIN;
int8_t x812 = INT8_MIN;
int32_t x813 = INT32_MIN;
uint8_t x814 = 107U;
uint8_t x826 = 0U;
int32_t t183 = 29;
int8_t x843 = 10;
int32_t t184 = -23234135;
static volatile int32_t t185 = -422369;
int64_t x849 = 2LL;
int64_t x860 = 243807687882126857LL;
int32_t t188 = 56307989;
int16_t x862 = INT16_MIN;
int32_t t189 = 111923;
volatile uint16_t x865 = 5U;
static int64_t x878 = INT64_MIN;
static volatile int16_t x886 = INT16_MAX;
uint32_t x887 = 800455U;
int16_t x888 = INT16_MIN;
static int32_t x890 = INT32_MAX;
int8_t x894 = INT8_MIN;
volatile int32_t t198 = -50733875;
int64_t x901 = 5941516333442LL;
int32_t x904 = INT32_MIN;
volatile int32_t t199 = -7482929;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MIN;
	static volatile int32_t x3 = -14664294;
	static volatile int32_t t0 = -769696;

    t0 = ((x1>x2)!=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	int8_t x8 = 10;
	int32_t t1 = -56449;

    t1 = ((x5>x6)!=(x7+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 6595;
	static uint16_t x10 = 11U;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -8;

    t2 = ((x9>x10)!=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	static uint64_t x15 = UINT64_MAX;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 7;

    t3 = ((x13>x14)!=(x15+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	volatile int64_t x18 = -31435188424541951LL;
	uint32_t x19 = 2907U;
	int32_t t4 = 3049552;

    t4 = ((x17>x18)!=(x19+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 2LL;
	int16_t x23 = 2;
	static int8_t x24 = -13;
	volatile int32_t t5 = 67878;

    t5 = ((x21>x22)!=(x23+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint32_t x28 = 218984159U;
	volatile int32_t t6 = 253;

    t6 = ((x25>x26)!=(x27+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x35 = INT8_MIN;
	int16_t x36 = -97;
	int32_t t7 = 1752;

    t7 = ((x33>x34)!=(x35+x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x38 = -23;
	int16_t x39 = INT16_MAX;
	volatile int32_t t8 = -64;

    t8 = ((x37>x38)!=(x39+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x46 = INT8_MAX;
	uint32_t x48 = 260U;
	int32_t t9 = -11990;

    t9 = ((x45>x46)!=(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = 3;
	volatile int8_t x52 = -1;
	volatile int32_t t10 = -1;

    t10 = ((x49>x50)!=(x51+x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 5U;
	static int8_t x54 = -38;
	uint8_t x55 = 1U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = -8067400;

    t11 = ((x53>x54)!=(x55+x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x59 = 1;
	uint32_t x60 = UINT32_MAX;
	static int32_t t12 = 102;

    t12 = ((x57>x58)!=(x59+x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = 1796;
	uint16_t x63 = 1679U;
	volatile int16_t x64 = INT16_MAX;

    t13 = ((x61>x62)!=(x63+x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = 2;
	int64_t x66 = INT64_MIN;
	static volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 2165964450091004314LLU;
	volatile int32_t t14 = 4002;

    t14 = ((x65>x66)!=(x67+x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x69 = 3U;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 2319176338367441047LLU;

    t15 = ((x69>x70)!=(x71+x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x77 = UINT32_MAX;
	static uint64_t x78 = UINT64_MAX;
	static int8_t x79 = 9;
	uint16_t x80 = 28U;
	static volatile int32_t t16 = 65229978;

    t16 = ((x77>x78)!=(x79+x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = 3U;
	int8_t x86 = 33;
	uint16_t x87 = 1738U;
	int64_t x88 = INT64_MIN;
	int32_t t17 = 6105875;

    t17 = ((x85>x86)!=(x87+x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MIN;
	uint32_t x96 = 1255294U;
	static volatile int32_t t18 = 60089847;

    t18 = ((x93>x94)!=(x95+x96));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = -374509050619773623LL;
	int8_t x99 = -1;
	static uint32_t x100 = 269566895U;

    t19 = ((x97>x98)!=(x99+x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x102 = -1;
	int8_t x103 = 0;
	int16_t x104 = INT16_MIN;
	int32_t t20 = 174034392;

    t20 = ((x101>x102)!=(x103+x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x106 = INT32_MIN;
	uint32_t x107 = 3U;
	uint16_t x108 = UINT16_MAX;

    t21 = ((x105>x106)!=(x107+x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x109 = INT16_MIN;
	volatile int8_t x112 = -1;
	int32_t t22 = -173781;

    t22 = ((x109>x110)!=(x111+x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x115 = -1;
	uint16_t x116 = 9U;
	volatile int32_t t23 = 29;

    t23 = ((x113>x114)!=(x115+x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x117 = -1LL;
	volatile int64_t x118 = INT64_MIN;
	static int32_t x119 = 51462131;
	static volatile uint64_t x120 = 87709546682124810LLU;
	int32_t t24 = 6834;

    t24 = ((x117>x118)!=(x119+x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = INT8_MIN;
	volatile int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = -13;
	static volatile int32_t t25 = -16365;

    t25 = ((x121>x122)!=(x123+x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x125 = 655715731U;
	uint32_t x126 = 15081939U;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = UINT16_MAX;

    t26 = ((x125>x126)!=(x127+x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	static int8_t x131 = 1;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t27 = -19;

    t27 = ((x129>x130)!=(x131+x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x133 = INT32_MAX;
	uint32_t x135 = 425617U;
	int64_t x136 = -1LL;
	int32_t t28 = 199966337;

    t28 = ((x133>x134)!=(x135+x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = -134;
	volatile int16_t x139 = INT16_MIN;
	volatile int32_t x140 = INT32_MAX;
	volatile int32_t t29 = 1756;

    t29 = ((x137>x138)!=(x139+x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x142 = 3U;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t30 = -580766;

    t30 = ((x141>x142)!=(x143+x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x146 = 77U;
	uint32_t x147 = 1609U;
	int8_t x148 = -1;
	volatile int32_t t31 = -16699;

    t31 = ((x145>x146)!=(x147+x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x149 = -1LL;
	int8_t x150 = INT8_MIN;
	static int8_t x151 = INT8_MIN;
	int32_t t32 = 28;

    t32 = ((x149>x150)!=(x151+x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	int64_t x158 = -1LL;
	int64_t x159 = 1LL;
	volatile int32_t t33 = -1;

    t33 = ((x157>x158)!=(x159+x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile uint16_t x162 = 7395U;
	int32_t x163 = -1;
	uint64_t x164 = 0LLU;
	volatile int32_t t34 = -7648;

    t34 = ((x161>x162)!=(x163+x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = 3U;
	volatile uint64_t x166 = 2046193448LLU;
	uint64_t x167 = UINT64_MAX;
	int32_t t35 = 11068681;

    t35 = ((x165>x166)!=(x167+x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	uint32_t x170 = 1372U;
	uint8_t x172 = 3U;
	volatile int32_t t36 = -6;

    t36 = ((x169>x170)!=(x171+x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MIN;
	int64_t x176 = -415LL;
	int32_t t37 = -7408;

    t37 = ((x173>x174)!=(x175+x176));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = INT32_MAX;
	int32_t x179 = 25;
	volatile int32_t x180 = 388;
	volatile int32_t t38 = 571272789;

    t38 = ((x177>x178)!=(x179+x180));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x181 = 5U;
	int16_t x182 = -1;

    t39 = ((x181>x182)!=(x183+x184));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x185 = 31521U;
	int16_t x186 = -1;
	static volatile int32_t x187 = INT32_MIN;
	volatile uint32_t x188 = 25887U;

    t40 = ((x185>x186)!=(x187+x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x190 = -63608590;
	uint8_t x191 = 33U;
	int8_t x192 = 30;
	static int32_t t41 = 11037;

    t41 = ((x189>x190)!=(x191+x192));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = 23U;
	int32_t x195 = -1;
	int32_t t42 = -169;

    t42 = ((x193>x194)!=(x195+x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x201 = UINT32_MAX;
	int32_t x202 = -1;
	int8_t x203 = 1;
	uint32_t x204 = 105712U;
	volatile int32_t t43 = 2812;

    t43 = ((x201>x202)!=(x203+x204));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t t44 = 705569025;

    t44 = ((x209>x210)!=(x211+x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile uint32_t x214 = 0U;
	volatile uint64_t x215 = UINT64_MAX;
	int8_t x216 = 42;

    t45 = ((x213>x214)!=(x215+x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x217 = 513490349274033673LLU;
	int64_t x218 = -1LL;
	int16_t x219 = 5105;
	int16_t x220 = -1;
	int32_t t46 = -52098;

    t46 = ((x217>x218)!=(x219+x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint32_t x221 = 57U;
	volatile int16_t x222 = INT16_MIN;
	uint64_t x223 = 173603823LLU;
	uint8_t x224 = UINT8_MAX;
	static volatile int32_t t47 = -5;

    t47 = ((x221>x222)!=(x223+x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x229 = UINT64_MAX;
	static volatile int8_t x230 = INT8_MIN;
	static int32_t x231 = INT32_MIN;
	uint16_t x232 = 16U;
	static int32_t t48 = 475122373;

    t48 = ((x229>x230)!=(x231+x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = -1LL;
	uint16_t x235 = 1U;
	static volatile int8_t x236 = INT8_MAX;

    t49 = ((x233>x234)!=(x235+x236));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = -1LL;
	int32_t x242 = -1;
	int64_t x244 = 109396595LL;
	int32_t t50 = -124;

    t50 = ((x241>x242)!=(x243+x244));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = -231002353147LL;
	uint32_t x247 = UINT32_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t51 = 971257117;

    t51 = ((x245>x246)!=(x247+x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x249 = 61397511648338955LLU;
	volatile uint32_t x250 = 475039288U;

    t52 = ((x249>x250)!=(x251+x252));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = 0;
	int64_t x254 = 58357484377LL;
	static int8_t x255 = INT8_MAX;
	volatile uint32_t x256 = 2861726U;

    t53 = ((x253>x254)!=(x255+x256));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x257 = 13;
	uint64_t x259 = 132954274LLU;
	int32_t x260 = INT32_MIN;
	volatile int32_t t54 = -74;

    t54 = ((x257>x258)!=(x259+x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x261 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	uint16_t x264 = 138U;
	int32_t t55 = -96;

    t55 = ((x261>x262)!=(x263+x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x265 = UINT16_MAX;
	uint16_t x266 = UINT16_MAX;
	uint32_t x267 = 31170038U;
	static int8_t x268 = INT8_MIN;

    t56 = ((x265>x266)!=(x267+x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x269 = INT64_MIN;
	int8_t x270 = -20;
	static uint8_t x271 = UINT8_MAX;
	int16_t x272 = 2;
	static volatile int32_t t57 = 160417;

    t57 = ((x269>x270)!=(x271+x272));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x273 = 1876564LLU;
	volatile int32_t x274 = INT32_MIN;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t58 = 39007144;

    t58 = ((x273>x274)!=(x275+x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x277 = -1;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 97512U;
	int16_t x280 = -1;

    t59 = ((x277>x278)!=(x279+x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x281 = UINT8_MAX;
	int32_t x282 = 5488;
	static int32_t x283 = INT32_MIN;
	volatile uint16_t x284 = UINT16_MAX;
	volatile int32_t t60 = 1571960;

    t60 = ((x281>x282)!=(x283+x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x285 = 371941584173801LL;
	int32_t x286 = -12;
	int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t61 = 1;

    t61 = ((x285>x286)!=(x287+x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x289 = -1LL;
	int16_t x290 = -1;
	int8_t x291 = 1;
	uint64_t x292 = UINT64_MAX;
	int32_t t62 = -9;

    t62 = ((x289>x290)!=(x291+x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x294 = 2U;
	int32_t x295 = INT32_MIN;
	int32_t t63 = 0;

    t63 = ((x293>x294)!=(x295+x296));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x297 = INT32_MAX;
	volatile int8_t x298 = -1;
	int32_t x300 = INT32_MIN;

    t64 = ((x297>x298)!=(x299+x300));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x301 = -264;
	int64_t x302 = INT64_MIN;
	int8_t x303 = -1;
	int16_t x304 = -1;
	int32_t t65 = -784;

    t65 = ((x301>x302)!=(x303+x304));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x305 = 125U;
	int16_t x306 = INT16_MAX;
	uint32_t x307 = 1406U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t66 = -26;

    t66 = ((x305>x306)!=(x307+x308));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = INT8_MIN;
	static int16_t x311 = INT16_MIN;
	uint16_t x312 = 18500U;
	int32_t t67 = 61748;

    t67 = ((x309>x310)!=(x311+x312));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x313 = INT16_MAX;
	int32_t x314 = INT32_MAX;
	volatile int32_t x315 = 175783;
	int32_t x316 = INT32_MIN;
	volatile int32_t t68 = 985;

    t68 = ((x313>x314)!=(x315+x316));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x317 = INT64_MIN;
	uint8_t x318 = UINT8_MAX;
	static uint64_t x319 = UINT64_MAX;
	static int16_t x320 = INT16_MAX;
	int32_t t69 = 2045854;

    t69 = ((x317>x318)!=(x319+x320));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	uint8_t x323 = 6U;
	static int32_t x324 = INT32_MIN;
	int32_t t70 = 33;

    t70 = ((x321>x322)!=(x323+x324));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x325 = 1342317878U;
	volatile uint16_t x326 = 10015U;
	int32_t x328 = -6533;
	volatile int32_t t71 = -115011551;

    t71 = ((x325>x326)!=(x327+x328));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x329 = 120;
	int32_t x330 = INT32_MAX;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	static int32_t t72 = -2350570;

    t72 = ((x329>x330)!=(x331+x332));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x333 = -1;
	static uint8_t x335 = 7U;
	static int64_t x336 = INT64_MIN;
	volatile int32_t t73 = 38;

    t73 = ((x333>x334)!=(x335+x336));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	static int16_t x340 = -47;

    t74 = ((x337>x338)!=(x339+x340));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x342 = INT8_MAX;
	uint8_t x343 = 30U;
	static uint32_t x344 = UINT32_MAX;
	static volatile int32_t t75 = 879682234;

    t75 = ((x341>x342)!=(x343+x344));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x345 = 6U;
	static int32_t x347 = -124276;
	volatile int8_t x348 = 3;

    t76 = ((x345>x346)!=(x347+x348));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x353 = 8816U;
	int64_t x354 = -10LL;
	uint64_t x355 = 161144211403LLU;
	uint64_t x356 = UINT64_MAX;

    t77 = ((x353>x354)!=(x355+x356));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x358 = UINT8_MAX;
	int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	static volatile int32_t t78 = 2015;

    t78 = ((x357>x358)!=(x359+x360));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x361 = UINT16_MAX;
	volatile int64_t x362 = INT64_MIN;
	volatile uint64_t x363 = 6157021501243288555LLU;
	volatile int32_t t79 = -39;

    t79 = ((x361>x362)!=(x363+x364));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	volatile int32_t t80 = 2329225;

    t80 = ((x365>x366)!=(x367+x368));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = 10;
	int64_t x370 = INT64_MIN;
	static int32_t x372 = 37646490;
	static int32_t t81 = -61300778;

    t81 = ((x369>x370)!=(x371+x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x374 = 1469727191U;
	int64_t x375 = 21519LL;
	int32_t t82 = -3180714;

    t82 = ((x373>x374)!=(x375+x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = -1;
	uint16_t x384 = 1U;
	int32_t t83 = 47;

    t83 = ((x381>x382)!=(x383+x384));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x385 = -122;
	uint8_t x386 = 22U;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t84 = -217774;

    t84 = ((x385>x386)!=(x387+x388));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x389 = -8055LL;
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	static int32_t x392 = -1;
	volatile int32_t t85 = 5;

    t85 = ((x389>x390)!=(x391+x392));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x394 = INT16_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t86 = 384;

    t86 = ((x393>x394)!=(x395+x396));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x397 = 10;
	int16_t x398 = -181;
	uint64_t x399 = UINT64_MAX;
	int32_t t87 = -282467031;

    t87 = ((x397>x398)!=(x399+x400));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x401 = INT32_MIN;
	uint8_t x402 = 88U;
	static int32_t t88 = 3558833;

    t88 = ((x401>x402)!=(x403+x404));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x409 = INT32_MAX;
	static int16_t x410 = INT16_MIN;
	int32_t t89 = 1789579;

    t89 = ((x409>x410)!=(x411+x412));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x416 = 536;
	int32_t t90 = -25937;

    t90 = ((x413>x414)!=(x415+x416));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x417 = 1;
	static volatile uint64_t x418 = 556105649249664LLU;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = -9;

    t91 = ((x417>x418)!=(x419+x420));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x421 = 2890U;
	volatile uint8_t x422 = UINT8_MAX;
	static int32_t x424 = 734739;
	volatile int32_t t92 = -87261;

    t92 = ((x421>x422)!=(x423+x424));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = 29;
	int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MIN;
	volatile int32_t t93 = 118066984;

    t93 = ((x425>x426)!=(x427+x428));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x429 = INT16_MIN;
	static int64_t x431 = -1LL;
	static int32_t x432 = 11647;

    t94 = ((x429>x430)!=(x431+x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x433 = INT64_MIN;
	static uint8_t x436 = UINT8_MAX;

    t95 = ((x433>x434)!=(x435+x436));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x437 = -1LL;
	int64_t x438 = INT64_MAX;
	static int64_t x439 = INT64_MIN;
	int64_t x440 = 28883119985238202LL;
	static volatile int32_t t96 = -174;

    t96 = ((x437>x438)!=(x439+x440));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x441 = INT32_MIN;
	volatile uint64_t x442 = UINT64_MAX;
	int32_t x443 = -1;
	static int8_t x444 = -1;
	int32_t t97 = 10;

    t97 = ((x441>x442)!=(x443+x444));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x445 = -1;
	static uint8_t x446 = UINT8_MAX;
	volatile int16_t x447 = -1;
	uint16_t x448 = 1U;
	volatile int32_t t98 = -4087211;

    t98 = ((x445>x446)!=(x447+x448));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x449 = 0U;
	int32_t x452 = -1;
	volatile int32_t t99 = 1;

    t99 = ((x449>x450)!=(x451+x452));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile uint8_t x454 = 121U;
	uint16_t x455 = UINT16_MAX;
	static uint8_t x456 = 6U;
	static int32_t t100 = -10505;

    t100 = ((x453>x454)!=(x455+x456));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x457 = -3;
	int32_t x458 = INT32_MAX;
	int8_t x459 = INT8_MIN;
	static volatile uint16_t x460 = UINT16_MAX;
	volatile int32_t t101 = -496;

    t101 = ((x457>x458)!=(x459+x460));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x461 = -1;
	int64_t x462 = INT64_MIN;
	int64_t x463 = 4547143474017238564LL;
	uint8_t x464 = UINT8_MAX;
	static int32_t t102 = 13;

    t102 = ((x461>x462)!=(x463+x464));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x466 = 3833006U;
	volatile uint32_t x468 = 65745299U;
	volatile int32_t t103 = -937495048;

    t103 = ((x465>x466)!=(x467+x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x470 = INT16_MIN;
	static uint8_t x471 = 79U;
	int32_t x472 = -7656936;
	volatile int32_t t104 = -179;

    t104 = ((x469>x470)!=(x471+x472));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x473 = -1LL;
	uint16_t x475 = 1260U;
	volatile int32_t t105 = -1;

    t105 = ((x473>x474)!=(x475+x476));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x477 = INT32_MIN;
	uint32_t x479 = 5787926U;
	uint32_t x480 = UINT32_MAX;
	volatile int32_t t106 = 28070131;

    t106 = ((x477>x478)!=(x479+x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MIN;
	int64_t x487 = -39LL;
	volatile int8_t x488 = -1;
	volatile int32_t t107 = 12391;

    t107 = ((x485>x486)!=(x487+x488));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x489 = 2U;
	int8_t x490 = 15;
	volatile uint64_t x491 = UINT64_MAX;
	volatile int32_t x492 = INT32_MAX;
	volatile int32_t t108 = -1;

    t108 = ((x489>x490)!=(x491+x492));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x493 = INT16_MAX;
	volatile int64_t x495 = -1LL;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t109 = -13389;

    t109 = ((x493>x494)!=(x495+x496));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x502 = 46;
	uint8_t x503 = UINT8_MAX;
	int16_t x504 = INT16_MIN;
	int32_t t110 = -12382;

    t110 = ((x501>x502)!=(x503+x504));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MIN;
	static uint32_t x511 = UINT32_MAX;
	int64_t x512 = -1LL;
	volatile int32_t t111 = 11928018;

    t111 = ((x509>x510)!=(x511+x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x517 = INT32_MAX;
	static uint8_t x518 = 5U;
	int16_t x519 = -2146;
	uint64_t x520 = UINT64_MAX;

    t112 = ((x517>x518)!=(x519+x520));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x521 = UINT16_MAX;
	int64_t x523 = 287LL;
	int64_t x524 = 10663966110LL;

    t113 = ((x521>x522)!=(x523+x524));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x525 = INT64_MIN;
	int16_t x526 = -58;
	volatile int8_t x527 = 1;
	uint64_t x528 = 159333150LLU;
	int32_t t114 = -42637179;

    t114 = ((x525>x526)!=(x527+x528));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x533 = INT32_MIN;
	uint16_t x534 = 51U;
	volatile uint8_t x535 = UINT8_MAX;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t115 = -28;

    t115 = ((x533>x534)!=(x535+x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x538 = INT32_MIN;
	int16_t x539 = -309;
	uint8_t x540 = 5U;
	volatile int32_t t116 = 7988043;

    t116 = ((x537>x538)!=(x539+x540));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x545 = -1;
	static int32_t x546 = 746635;
	static uint64_t x547 = 638LLU;
	int32_t x548 = INT32_MIN;

    t117 = ((x545>x546)!=(x547+x548));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x549 = 1;
	uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MIN;
	volatile int16_t x552 = INT16_MAX;

    t118 = ((x549>x550)!=(x551+x552));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x553 = INT8_MAX;
	volatile int8_t x555 = -1;
	int8_t x556 = INT8_MIN;

    t119 = ((x553>x554)!=(x555+x556));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t120 = -28900;

    t120 = ((x557>x558)!=(x559+x560));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x561 = INT16_MAX;
	int16_t x562 = INT16_MIN;
	static int16_t x563 = INT16_MAX;
	int32_t x564 = INT32_MIN;
	int32_t t121 = 417;

    t121 = ((x561>x562)!=(x563+x564));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x565 = INT8_MIN;
	volatile int8_t x566 = INT8_MIN;
	uint32_t x567 = 49420293U;
	int64_t x568 = -5LL;
	static int32_t t122 = -15263;

    t122 = ((x565>x566)!=(x567+x568));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x569 = 363;
	int8_t x570 = INT8_MAX;
	int64_t x571 = -1LL;
	uint32_t x572 = UINT32_MAX;

    t123 = ((x569>x570)!=(x571+x572));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x573 = INT64_MIN;
	static int64_t x575 = INT64_MAX;

    t124 = ((x573>x574)!=(x575+x576));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x577 = UINT8_MAX;
	int32_t x578 = -5;
	static volatile int32_t x579 = -1;
	int8_t x580 = -1;
	volatile int32_t t125 = -334540706;

    t125 = ((x577>x578)!=(x579+x580));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x581 = INT16_MIN;
	int32_t x584 = INT32_MIN;
	volatile int32_t t126 = -7;

    t126 = ((x581>x582)!=(x583+x584));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x585 = UINT16_MAX;
	static uint16_t x586 = 8949U;
	int32_t x587 = INT32_MIN;
	int32_t t127 = 223677177;

    t127 = ((x585>x586)!=(x587+x588));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x589 = INT8_MIN;
	int16_t x590 = -6198;
	uint64_t x591 = 2812LLU;
	int8_t x592 = 1;
	static int32_t t128 = -401594533;

    t128 = ((x589>x590)!=(x591+x592));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x593 = 149995LL;
	static int64_t x594 = -1LL;
	int64_t x596 = -57338687448LL;
	int32_t t129 = -6;

    t129 = ((x593>x594)!=(x595+x596));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = -2;
	uint8_t x602 = UINT8_MAX;
	volatile int16_t x603 = 40;
	int16_t x604 = INT16_MIN;
	int32_t t130 = 3654;

    t130 = ((x601>x602)!=(x603+x604));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x605 = INT16_MAX;
	uint32_t x607 = 4U;
	uint8_t x608 = 109U;
	int32_t t131 = 1891469;

    t131 = ((x605>x606)!=(x607+x608));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x610 = 7392539202LL;
	volatile int32_t t132 = -1572261;

    t132 = ((x609>x610)!=(x611+x612));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x613 = 899181116666932LLU;
	static uint32_t x615 = 523898462U;

    t133 = ((x613>x614)!=(x615+x616));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x618 = 24;
	int64_t x619 = INT64_MIN;
	static uint8_t x620 = 10U;
	int32_t t134 = 2;

    t134 = ((x617>x618)!=(x619+x620));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x621 = 28U;
	int8_t x622 = 2;
	uint8_t x623 = 2U;
	volatile int32_t t135 = -600564;

    t135 = ((x621>x622)!=(x623+x624));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x626 = 255U;
	uint8_t x627 = 104U;
	volatile uint64_t x628 = 2641807099484509LLU;
	volatile int32_t t136 = 192636;

    t136 = ((x625>x626)!=(x627+x628));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x632 = INT64_MIN;
	int32_t t137 = -2383732;

    t137 = ((x629>x630)!=(x631+x632));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x637 = 82U;
	static int64_t x639 = -68LL;

    t138 = ((x637>x638)!=(x639+x640));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x641 = INT16_MAX;
	int32_t x642 = INT32_MIN;
	static uint32_t x643 = UINT32_MAX;
	static uint64_t x644 = 213302142499LLU;
	volatile int32_t t139 = -4715;

    t139 = ((x641>x642)!=(x643+x644));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x646 = -1;
	volatile uint64_t x647 = 360595944504615664LLU;
	int32_t t140 = 3;

    t140 = ((x645>x646)!=(x647+x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = 1;
	int8_t x650 = 4;
	int32_t t141 = 229;

    t141 = ((x649>x650)!=(x651+x652));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x653 = -1;
	int16_t x654 = INT16_MAX;
	uint64_t x655 = 378200814LLU;
	volatile int8_t x656 = -3;

    t142 = ((x653>x654)!=(x655+x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x657 = 17U;
	static int32_t x658 = INT32_MAX;
	uint64_t x659 = UINT64_MAX;
	volatile uint64_t x660 = UINT64_MAX;
	int32_t t143 = 15541784;

    t143 = ((x657>x658)!=(x659+x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x662 = -1;
	volatile uint64_t x664 = 278573627105417010LLU;
	static volatile int32_t t144 = -20;

    t144 = ((x661>x662)!=(x663+x664));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x665 = 485331LL;
	uint32_t x666 = 123834U;
	uint64_t x667 = UINT64_MAX;
	int64_t x668 = INT64_MAX;

    t145 = ((x665>x666)!=(x667+x668));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x669 = 5;
	int32_t x670 = INT32_MIN;
	int16_t x671 = 0;
	static int32_t x672 = INT32_MIN;
	volatile int32_t t146 = 920;

    t146 = ((x669>x670)!=(x671+x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x674 = INT16_MIN;
	volatile int16_t x675 = 134;
	int8_t x676 = INT8_MIN;
	int32_t t147 = 1;

    t147 = ((x673>x674)!=(x675+x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x677 = -1984;
	volatile int16_t x678 = INT16_MIN;
	static int16_t x679 = -1;
	int32_t x680 = 6138;
	int32_t t148 = -2;

    t148 = ((x677>x678)!=(x679+x680));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x681 = 4020LLU;
	int8_t x683 = INT8_MIN;
	static volatile uint8_t x684 = 35U;
	static volatile int32_t t149 = 637506;

    t149 = ((x681>x682)!=(x683+x684));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x685 = INT64_MAX;
	volatile int16_t x686 = INT16_MIN;
	int16_t x687 = -1;
	static uint8_t x688 = 99U;
	int32_t t150 = 1874;

    t150 = ((x685>x686)!=(x687+x688));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x689 = 13901037;
	uint16_t x690 = 6913U;
	static volatile uint16_t x691 = UINT16_MAX;
	static int8_t x692 = INT8_MIN;
	int32_t t151 = -653646;

    t151 = ((x689>x690)!=(x691+x692));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x693 = INT64_MIN;
	static volatile uint8_t x694 = UINT8_MAX;
	static uint32_t x695 = UINT32_MAX;
	volatile int32_t x696 = -896;

    t152 = ((x693>x694)!=(x695+x696));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x697 = -7;
	int16_t x698 = 7;
	int8_t x699 = INT8_MAX;
	volatile uint64_t x700 = UINT64_MAX;

    t153 = ((x697>x698)!=(x699+x700));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x705 = 4297U;
	int32_t x706 = -5345;
	int16_t x707 = -1;
	volatile int16_t x708 = INT16_MIN;
	static int32_t t154 = 481;

    t154 = ((x705>x706)!=(x707+x708));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x709 = 88556914661LL;
	int32_t x710 = INT32_MAX;
	int16_t x712 = 845;
	static int32_t t155 = 0;

    t155 = ((x709>x710)!=(x711+x712));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x714 = 300981LLU;
	uint32_t x716 = 468144424U;
	int32_t t156 = 2689;

    t156 = ((x713>x714)!=(x715+x716));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x717 = 35305088450608LLU;
	uint64_t x718 = UINT64_MAX;
	static int16_t x719 = -1;
	int16_t x720 = INT16_MAX;
	int32_t t157 = -4585;

    t157 = ((x717>x718)!=(x719+x720));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	static volatile int16_t x723 = INT16_MIN;
	int64_t x724 = -1LL;
	static int32_t t158 = 841195878;

    t158 = ((x721>x722)!=(x723+x724));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x725 = UINT32_MAX;
	volatile int32_t x727 = -1;
	int32_t x728 = -1;
	int32_t t159 = -30461;

    t159 = ((x725>x726)!=(x727+x728));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x729 = 5307171LLU;
	int8_t x730 = -1;
	uint16_t x731 = UINT16_MAX;
	int32_t x732 = 83;
	int32_t t160 = -119620;

    t160 = ((x729>x730)!=(x731+x732));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x741 = INT64_MAX;
	static int32_t x742 = -1051156;
	volatile int32_t x744 = -8;
	volatile int32_t t161 = -121;

    t161 = ((x741>x742)!=(x743+x744));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	uint32_t x747 = 2332U;
	uint32_t x748 = UINT32_MAX;

    t162 = ((x745>x746)!=(x747+x748));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x749 = INT64_MIN;
	uint16_t x750 = UINT16_MAX;
	int16_t x751 = -424;
	uint16_t x752 = 21U;

    t163 = ((x749>x750)!=(x751+x752));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x753 = INT8_MAX;
	volatile int64_t x755 = -1LL;

    t164 = ((x753>x754)!=(x755+x756));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x757 = INT16_MAX;
	int64_t x758 = -39271LL;
	uint16_t x759 = 5U;
	uint32_t x760 = 78101U;

    t165 = ((x757>x758)!=(x759+x760));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = -1LL;
	volatile int64_t x762 = INT64_MIN;
	int64_t x763 = INT64_MIN;
	int32_t x764 = INT32_MAX;
	int32_t t166 = -973687096;

    t166 = ((x761>x762)!=(x763+x764));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x765 = 53U;
	int32_t x766 = -1;
	volatile uint32_t x767 = UINT32_MAX;
	static uint64_t x768 = 49740062394567404LLU;

    t167 = ((x765>x766)!=(x767+x768));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x769 = 13581761U;
	static volatile int64_t x770 = INT64_MIN;
	int32_t x771 = INT32_MAX;
	int8_t x772 = -1;
	volatile int32_t t168 = 314940237;

    t168 = ((x769>x770)!=(x771+x772));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x781 = -1;
	uint16_t x782 = 193U;
	volatile int32_t x783 = -1;
	int32_t t169 = -61;

    t169 = ((x781>x782)!=(x783+x784));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x788 = UINT8_MAX;
	int32_t t170 = -33287;

    t170 = ((x785>x786)!=(x787+x788));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x789 = 0U;
	volatile uint16_t x790 = 1U;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = 25;
	int32_t t171 = -103;

    t171 = ((x789>x790)!=(x791+x792));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x795 = INT32_MIN;
	int8_t x796 = 3;
	volatile int32_t t172 = 894;

    t172 = ((x793>x794)!=(x795+x796));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MIN;
	int8_t x799 = INT8_MIN;
	volatile int8_t x800 = INT8_MIN;
	static int32_t t173 = -7051627;

    t173 = ((x797>x798)!=(x799+x800));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x801 = INT32_MIN;
	uint16_t x803 = 1U;
	static int64_t x804 = -1LL;
	volatile int32_t t174 = 0;

    t174 = ((x801>x802)!=(x803+x804));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x805 = 92;
	int16_t x806 = INT16_MIN;
	uint8_t x807 = 1U;
	int32_t t175 = -1369927;

    t175 = ((x805>x806)!=(x807+x808));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = 30;
	static uint32_t x810 = 469U;
	int8_t x811 = 6;
	static volatile int32_t t176 = 22616;

    t176 = ((x809>x810)!=(x811+x812));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x815 = 4U;
	volatile uint8_t x816 = UINT8_MAX;
	volatile int32_t t177 = -1;

    t177 = ((x813>x814)!=(x815+x816));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x817 = 1;
	int32_t x818 = -241333947;
	volatile uint8_t x819 = UINT8_MAX;
	volatile uint16_t x820 = 6447U;
	volatile int32_t t178 = 2;

    t178 = ((x817>x818)!=(x819+x820));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x821 = 789170023LL;
	int8_t x822 = -6;
	int16_t x823 = INT16_MIN;
	int8_t x824 = -16;
	int32_t t179 = 759596;

    t179 = ((x821>x822)!=(x823+x824));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x825 = INT8_MIN;
	uint64_t x827 = UINT64_MAX;
	volatile int64_t x828 = INT64_MAX;
	static int32_t t180 = -71818305;

    t180 = ((x825>x826)!=(x827+x828));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x829 = INT8_MIN;
	static uint64_t x830 = UINT64_MAX;
	static int16_t x831 = 1;
	int32_t x832 = INT32_MIN;
	int32_t t181 = -10942262;

    t181 = ((x829>x830)!=(x831+x832));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x833 = 7508U;
	int32_t x834 = -354;
	static int16_t x835 = -10803;
	static volatile int16_t x836 = INT16_MIN;
	volatile int32_t t182 = -64;

    t182 = ((x833>x834)!=(x835+x836));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x837 = 3U;
	static int8_t x838 = INT8_MAX;
	uint8_t x839 = 2U;
	volatile int8_t x840 = INT8_MAX;

    t183 = ((x837>x838)!=(x839+x840));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x841 = UINT64_MAX;
	int64_t x842 = INT64_MIN;
	uint64_t x844 = 346857858260071810LLU;

    t184 = ((x841>x842)!=(x843+x844));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x845 = INT32_MIN;
	volatile int8_t x846 = -1;
	static int8_t x847 = INT8_MIN;
	static int64_t x848 = INT64_MAX;

    t185 = ((x845>x846)!=(x847+x848));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x850 = UINT16_MAX;
	volatile uint8_t x851 = UINT8_MAX;
	int16_t x852 = -4;
	volatile int32_t t186 = -4745;

    t186 = ((x849>x850)!=(x851+x852));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x853 = -1LL;
	int16_t x854 = INT16_MAX;
	static uint32_t x855 = UINT32_MAX;
	volatile uint16_t x856 = UINT16_MAX;
	int32_t t187 = 258913;

    t187 = ((x853>x854)!=(x855+x856));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x857 = 1U;
	int64_t x858 = INT64_MIN;
	uint64_t x859 = 278538LLU;

    t188 = ((x857>x858)!=(x859+x860));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x861 = -16;
	static uint8_t x863 = UINT8_MAX;
	int8_t x864 = 4;

    t189 = ((x861>x862)!=(x863+x864));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x866 = 474;
	uint32_t x867 = 74U;
	int8_t x868 = INT8_MIN;
	volatile int32_t t190 = -125104;

    t190 = ((x865>x866)!=(x867+x868));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x869 = INT16_MIN;
	static int64_t x870 = 17487LL;
	volatile uint32_t x871 = 3100U;
	static int16_t x872 = -1;
	int32_t t191 = 19383;

    t191 = ((x869>x870)!=(x871+x872));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x873 = 985383U;
	int8_t x874 = INT8_MAX;
	int16_t x875 = 1224;
	int8_t x876 = INT8_MAX;
	int32_t t192 = 399043;

    t192 = ((x873>x874)!=(x875+x876));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x877 = INT8_MIN;
	static int32_t x879 = 132837;
	uint16_t x880 = 4U;
	volatile int32_t t193 = -541221305;

    t193 = ((x877>x878)!=(x879+x880));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x881 = UINT32_MAX;
	int64_t x882 = 2511333224643201441LL;
	int64_t x883 = -1LL;
	uint8_t x884 = UINT8_MAX;
	static volatile int32_t t194 = -1294173;

    t194 = ((x881>x882)!=(x883+x884));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x885 = -25;
	volatile int32_t t195 = -1;

    t195 = ((x885>x886)!=(x887+x888));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x889 = INT8_MIN;
	uint8_t x891 = 3U;
	static uint64_t x892 = UINT64_MAX;
	int32_t t196 = -32;

    t196 = ((x889>x890)!=(x891+x892));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x893 = 24U;
	int8_t x895 = 47;
	int8_t x896 = -1;
	volatile int32_t t197 = 219791;

    t197 = ((x893>x894)!=(x895+x896));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x897 = UINT16_MAX;
	int8_t x898 = INT8_MAX;
	uint8_t x899 = UINT8_MAX;
	volatile int8_t x900 = INT8_MAX;

    t198 = ((x897>x898)!=(x899+x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x902 = 28011359571LL;
	static int16_t x903 = 40;

    t199 = ((x901>x902)!=(x903+x904));

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

