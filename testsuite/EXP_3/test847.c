
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

volatile int8_t x1 = 21;
static volatile uint64_t x3 = UINT64_MAX;
int64_t x10 = INT64_MAX;
int32_t x11 = INT32_MIN;
volatile uint64_t x13 = 60069970318898LLU;
volatile int16_t x14 = INT16_MIN;
int16_t x19 = INT16_MIN;
volatile int32_t t4 = 0;
int32_t x30 = INT32_MIN;
static int64_t x37 = -1LL;
int64_t x41 = INT64_MAX;
uint64_t x43 = 1455LLU;
static volatile int64_t x45 = INT64_MIN;
int8_t x48 = INT8_MIN;
volatile int32_t t11 = 643;
volatile int32_t t12 = 4;
int16_t x55 = 1;
uint64_t x57 = 90LLU;
uint32_t x59 = 24012U;
volatile int16_t x60 = INT16_MIN;
int64_t x62 = -1LL;
int32_t t15 = 66688;
static int32_t t16 = 200;
uint8_t x69 = UINT8_MAX;
static volatile int8_t x73 = INT8_MIN;
static int64_t x79 = INT64_MIN;
int64_t x80 = INT64_MIN;
int16_t x92 = INT16_MIN;
int64_t x97 = INT64_MAX;
uint8_t x98 = 4U;
int32_t x106 = -27535469;
int32_t t27 = -27271803;
volatile int8_t x114 = INT8_MAX;
uint16_t x115 = UINT16_MAX;
int64_t x138 = INT64_MIN;
volatile int32_t t33 = -6114031;
int32_t x141 = 66014359;
uint8_t x142 = 10U;
uint64_t x144 = 195081373344254614LLU;
int32_t t35 = 247;
int64_t x152 = INT64_MIN;
static int64_t x154 = -142891LL;
int32_t t37 = -437;
volatile int8_t x162 = INT8_MIN;
int32_t x165 = INT32_MIN;
static int16_t x170 = INT16_MIN;
static uint32_t x172 = 19U;
int32_t x173 = INT32_MIN;
int32_t t42 = 7161;
static uint8_t x184 = UINT8_MAX;
int64_t x195 = INT64_MIN;
volatile int16_t x206 = -1;
static int16_t x208 = -1;
uint64_t x211 = 3331492772024LLU;
int8_t x216 = INT8_MAX;
int32_t t53 = -88692861;
volatile int32_t t54 = -3;
int64_t x225 = INT64_MIN;
static int32_t t56 = 219;
int16_t x252 = 25;
volatile uint16_t x253 = 3U;
volatile uint64_t x268 = 5LLU;
volatile int32_t t64 = 2757878;
int8_t x276 = INT8_MIN;
volatile int32_t t65 = 6;
volatile int64_t x278 = INT64_MIN;
uint8_t x279 = UINT8_MAX;
static volatile int8_t x299 = INT8_MIN;
volatile int64_t x308 = INT64_MIN;
uint64_t x309 = 21981142063LLU;
uint64_t x323 = 1204463713966755LLU;
int32_t t75 = -9073;
int8_t x326 = -12;
int8_t x334 = -1;
uint32_t x336 = UINT32_MAX;
uint32_t x346 = UINT32_MAX;
int32_t x349 = -237;
uint64_t x359 = 1680271779512515514LLU;
volatile int32_t t84 = -2553;
static volatile uint16_t x363 = 181U;
static int32_t x367 = INT32_MIN;
uint32_t x368 = 7U;
static uint8_t x371 = 2U;
int32_t x372 = INT32_MIN;
int32_t x379 = 33591;
int8_t x384 = 1;
int32_t t91 = 0;
static int8_t x389 = INT8_MIN;
int64_t x394 = -5246LL;
uint16_t x404 = 29U;
int64_t x415 = 731721874272LL;
int8_t x416 = -9;
int64_t x423 = -367403LL;
volatile int32_t t101 = 0;
uint32_t x434 = 6949U;
static volatile int32_t t102 = -66472358;
volatile int32_t x444 = -400;
int8_t x447 = INT8_MIN;
volatile int32_t t105 = -61385;
int32_t x450 = INT32_MIN;
int64_t x452 = INT64_MIN;
int16_t x455 = INT16_MAX;
volatile int64_t x456 = 413174955LL;
uint64_t x457 = 12229500705986LLU;
uint16_t x463 = 2915U;
int8_t x465 = INT8_MAX;
volatile int8_t x467 = INT8_MIN;
uint32_t x468 = 227U;
static int32_t t110 = -1;
static volatile int32_t t111 = -548519;
uint16_t x474 = UINT16_MAX;
int64_t x480 = INT64_MAX;
int32_t x489 = 708;
volatile int16_t x492 = -71;
volatile int32_t t117 = 15202;
volatile int64_t x498 = INT64_MIN;
int16_t x509 = 1;
volatile int8_t x511 = INT8_MIN;
volatile uint8_t x522 = 3U;
uint32_t x535 = UINT32_MAX;
int32_t x540 = INT32_MIN;
int8_t x555 = -1;
int32_t x557 = 996853;
int64_t x561 = INT64_MAX;
int32_t t133 = 0;
static int32_t t134 = 3;
int64_t x569 = 55171465205070201LL;
static int16_t x570 = INT16_MAX;
uint32_t x587 = 156854U;
int32_t t140 = -27;
uint8_t x598 = UINT8_MAX;
uint8_t x602 = 4U;
uint32_t x604 = 3908U;
static volatile int64_t x614 = 1LL;
uint32_t x622 = UINT32_MAX;
uint16_t x624 = 1100U;
int32_t x628 = INT32_MIN;
uint64_t x630 = UINT64_MAX;
volatile int64_t x635 = INT64_MIN;
int64_t x636 = INT64_MAX;
volatile int32_t t150 = -14256180;
static uint64_t x643 = 69691LLU;
volatile int32_t t152 = -15964913;
uint32_t x646 = 3U;
static volatile uint64_t x653 = 2LLU;
static uint16_t x655 = UINT16_MAX;
int8_t x658 = INT8_MAX;
volatile int32_t t157 = -346006;
uint16_t x683 = UINT16_MAX;
static int16_t x685 = 0;
uint32_t x687 = 22801338U;
int16_t x696 = INT16_MIN;
int16_t x699 = INT16_MIN;
int8_t x700 = -1;
static volatile int32_t t166 = 2068864;
int32_t t167 = 1210479;
int32_t x706 = INT32_MIN;
int32_t x710 = INT32_MAX;
static volatile uint16_t x715 = 2465U;
int32_t x716 = INT32_MAX;
static int8_t x717 = -26;
int8_t x720 = -1;
int8_t x723 = 0;
static int32_t t172 = 276155;
int32_t x726 = -1;
uint32_t x727 = 7466U;
uint16_t x728 = 743U;
int32_t t173 = -178341978;
static int32_t x734 = 33886945;
uint16_t x739 = 1U;
uint32_t x740 = 298768966U;
int32_t t177 = -12926865;
int8_t x760 = INT8_MIN;
int64_t x764 = -109611390890LL;
volatile int32_t t182 = 2;
int32_t t183 = 2424532;
volatile uint32_t x770 = 18U;
volatile uint8_t x773 = 5U;
int32_t x776 = INT32_MIN;
int16_t x780 = INT16_MIN;
static int8_t x786 = INT8_MIN;
uint32_t x787 = 6710924U;
int32_t t188 = 69719076;
int16_t x789 = -519;
volatile uint8_t x794 = 63U;
static int32_t x795 = INT32_MIN;
volatile uint64_t x798 = 145205655306LLU;
int32_t t191 = -762;
uint32_t x807 = UINT32_MAX;
static volatile int16_t x808 = INT16_MIN;
volatile int64_t x809 = INT64_MIN;
volatile int8_t x810 = -1;
static int8_t x814 = INT8_MIN;
static volatile int32_t t195 = 152;
int32_t x822 = INT32_MIN;
int32_t x830 = INT32_MAX;
static uint64_t x831 = 2637348912663357LLU;
int8_t x837 = INT8_MIN;
uint64_t x838 = 86933LLU;


void f0(void) {
    	volatile int8_t x2 = INT8_MIN;
	static int16_t x4 = 4;
	volatile int32_t t0 = -3118;

    t0 = ((x1%x2)!=(x3%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	static int32_t x7 = -1;
	volatile int64_t x8 = INT64_MAX;
	static volatile int32_t t1 = -3114913;

    t1 = ((x5%x6)!=(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 598452U;
	uint64_t x12 = 852938141291824570LLU;
	int32_t t2 = 622653842;

    t2 = ((x9%x10)!=(x11%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x15 = 1038U;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 9;

    t3 = ((x13%x14)!=(x15%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 3447419U;
	int32_t x18 = INT32_MIN;
	uint64_t x20 = 263623058738935LLU;

    t4 = ((x17%x18)!=(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -2218;
	int32_t x22 = INT32_MIN;
	volatile uint16_t x23 = 13612U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 1;

    t5 = ((x21%x22)!=(x23%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 21U;
	volatile int32_t x28 = -1;
	volatile int32_t t6 = -185599363;

    t6 = ((x25%x26)!=(x27%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1349673;
	static int16_t x31 = INT16_MIN;
	static int64_t x32 = INT64_MAX;
	static int32_t t7 = 210599;

    t7 = ((x29%x30)!=(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	static int64_t x34 = INT64_MAX;
	static int32_t x35 = INT32_MIN;
	int32_t x36 = -1;
	int32_t t8 = -16151905;

    t8 = ((x33%x34)!=(x35%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x38 = 29747089382466737LLU;
	static int8_t x39 = 1;
	int32_t x40 = 79978;
	volatile int32_t t9 = 6;

    t9 = ((x37%x38)!=(x39%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x42 = 1U;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -1;

    t10 = ((x41%x42)!=(x43%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 756849569541037127LLU;
	volatile int64_t x47 = INT64_MIN;

    t11 = ((x45%x46)!=(x47%x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MAX;
	static int16_t x51 = -1;
	volatile int64_t x52 = -712579013811911LL;

    t12 = ((x49%x50)!=(x51%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = 7195;
	uint8_t x54 = 2U;
	uint64_t x56 = 35213LLU;
	volatile int32_t t13 = -3759952;

    t13 = ((x53%x54)!=(x55%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	static volatile int32_t t14 = -724597764;

    t14 = ((x57%x58)!=(x59%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 188470482LLU;
	volatile int8_t x63 = INT8_MIN;
	int64_t x64 = 36LL;

    t15 = ((x61%x62)!=(x63%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 1U;
	volatile uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 985176067U;
	int16_t x68 = 14;

    t16 = ((x65%x66)!=(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = UINT32_MAX;
	int32_t x71 = 111668870;
	static volatile int32_t x72 = -1;
	int32_t t17 = 2973303;

    t17 = ((x69%x70)!=(x71%x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x74 = UINT32_MAX;
	uint16_t x75 = UINT16_MAX;
	uint16_t x76 = 1U;
	volatile int32_t t18 = 0;

    t18 = ((x73%x74)!=(x75%x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x77 = 0;
	volatile uint64_t x78 = UINT64_MAX;
	int32_t t19 = 10035;

    t19 = ((x77%x78)!=(x79%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = 852190205;
	volatile int32_t x82 = -1;
	int64_t x83 = INT64_MAX;
	uint32_t x84 = 43U;
	int32_t t20 = -3495;

    t20 = ((x81%x82)!=(x83%x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 1498U;
	volatile int8_t x87 = INT8_MIN;
	volatile int64_t x88 = INT64_MIN;
	static int32_t t21 = 0;

    t21 = ((x85%x86)!=(x87%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	static volatile int64_t x90 = INT64_MAX;
	static volatile int16_t x91 = -1012;
	int32_t t22 = -2090;

    t22 = ((x89%x90)!=(x91%x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 0U;
	static int8_t x94 = -1;
	static uint16_t x95 = 22035U;
	int64_t x96 = 108LL;
	volatile int32_t t23 = -1;

    t23 = ((x93%x94)!=(x95%x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x99 = 49;
	static volatile uint32_t x100 = 1698616408U;
	int32_t t24 = 8;

    t24 = ((x97%x98)!=(x99%x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 0;
	uint64_t x102 = 48890687LLU;
	volatile int64_t x103 = INT64_MIN;
	volatile int16_t x104 = 409;
	volatile int32_t t25 = 434354866;

    t25 = ((x101%x102)!=(x103%x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	int8_t x107 = -1;
	int8_t x108 = 1;
	static volatile int32_t t26 = -13052492;

    t26 = ((x105%x106)!=(x107%x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = 78LLU;
	int32_t x110 = -1;
	static int32_t x111 = INT32_MAX;
	static uint64_t x112 = UINT64_MAX;

    t27 = ((x109%x110)!=(x111%x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	static int32_t t28 = 1;

    t28 = ((x113%x114)!=(x115%x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 16;
	static int8_t x122 = INT8_MIN;
	int16_t x123 = 0;
	int8_t x124 = INT8_MAX;
	int32_t t29 = -6055;

    t29 = ((x121%x122)!=(x123%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t x126 = 27305468229100LL;
	uint8_t x127 = UINT8_MAX;
	static int32_t x128 = -27170;
	volatile int32_t t30 = -41194295;

    t30 = ((x125%x126)!=(x127%x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	static int16_t x131 = INT16_MIN;
	static int16_t x132 = -122;
	int32_t t31 = 9136820;

    t31 = ((x129%x130)!=(x131%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = INT8_MAX;
	uint8_t x134 = 1U;
	static int32_t x135 = -1;
	static int32_t x136 = INT32_MIN;
	int32_t t32 = 216875809;

    t32 = ((x133%x134)!=(x135%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = INT64_MAX;
	int32_t x139 = -2139883;
	int32_t x140 = INT32_MIN;

    t33 = ((x137%x138)!=(x139%x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x143 = -1;
	static int32_t t34 = 3138;

    t34 = ((x141%x142)!=(x143%x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	volatile int32_t x147 = -1;
	volatile uint64_t x148 = UINT64_MAX;

    t35 = ((x145%x146)!=(x147%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x149 = 30U;
	uint32_t x150 = UINT32_MAX;
	int8_t x151 = 21;
	int32_t t36 = -19376958;

    t36 = ((x149%x150)!=(x151%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = 6472800085LL;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 119868203U;

    t37 = ((x153%x154)!=(x155%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	static int16_t x158 = -369;
	int32_t x159 = 1330646;
	volatile uint32_t x160 = UINT32_MAX;
	volatile int32_t t38 = 1;

    t38 = ((x157%x158)!=(x159%x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 457LLU;
	int64_t x163 = INT64_MIN;
	static volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 121106331;

    t39 = ((x161%x162)!=(x163%x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x166 = 1;
	int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = -45;

    t40 = ((x165%x166)!=(x167%x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	static int8_t x171 = INT8_MAX;
	int32_t t41 = -38;

    t41 = ((x169%x170)!=(x171%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x174 = INT32_MIN;
	int32_t x175 = -93861;
	uint8_t x176 = 2U;

    t42 = ((x173%x174)!=(x175%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -1;
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 84013LLU;
	volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t43 = 3;

    t43 = ((x177%x178)!=(x179%x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 119U;
	int16_t x182 = -1;
	int8_t x183 = INT8_MIN;
	volatile int32_t t44 = 38918;

    t44 = ((x181%x182)!=(x183%x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int32_t x186 = INT32_MAX;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;
	int32_t t45 = -1;

    t45 = ((x185%x186)!=(x187%x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = -68077326;
	int8_t x190 = INT8_MIN;
	volatile int16_t x191 = INT16_MIN;
	static int8_t x192 = 54;
	int32_t t46 = 5817487;

    t46 = ((x189%x190)!=(x191%x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = UINT64_MAX;
	int8_t x194 = 1;
	int32_t x196 = 85180005;
	volatile int32_t t47 = 12389959;

    t47 = ((x193%x194)!=(x195%x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = UINT8_MAX;
	static int8_t x198 = 1;
	uint32_t x199 = UINT32_MAX;
	static volatile uint8_t x200 = 1U;
	int32_t t48 = -3750;

    t48 = ((x197%x198)!=(x199%x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MIN;
	uint32_t x203 = UINT32_MAX;
	uint64_t x204 = 1031361616138LLU;
	int32_t t49 = -6;

    t49 = ((x201%x202)!=(x203%x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = -1;
	int32_t x207 = INT32_MIN;
	int32_t t50 = -53;

    t50 = ((x205%x206)!=(x207%x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = -579;
	volatile int32_t x210 = INT32_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t51 = 7165143;

    t51 = ((x209%x210)!=(x211%x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MAX;
	int32_t x214 = 41731509;
	int8_t x215 = 0;
	int32_t t52 = -21;

    t52 = ((x213%x214)!=(x215%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x217 = 0U;
	static int64_t x218 = INT64_MAX;
	static uint32_t x219 = 3U;
	int64_t x220 = 201983034366982097LL;

    t53 = ((x217%x218)!=(x219%x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MAX;
	int16_t x223 = 12384;
	uint8_t x224 = 7U;

    t54 = ((x221%x222)!=(x223%x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x226 = 1U;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = UINT64_MAX;
	static volatile int32_t t55 = -1;

    t55 = ((x225%x226)!=(x227%x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x229 = 162747308;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MIN;
	int16_t x232 = -82;

    t56 = ((x229%x230)!=(x231%x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = -1;
	int32_t x234 = INT32_MIN;
	volatile int64_t x235 = -1LL;
	uint32_t x236 = 89020U;
	int32_t t57 = -256450;

    t57 = ((x233%x234)!=(x235%x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x237 = INT64_MAX;
	uint64_t x238 = 2077583136881154510LLU;
	uint16_t x239 = 10526U;
	int8_t x240 = INT8_MIN;
	int32_t t58 = 106089;

    t58 = ((x237%x238)!=(x239%x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x241 = INT32_MIN;
	uint16_t x242 = 408U;
	uint64_t x243 = 127861156298211802LLU;
	int8_t x244 = INT8_MIN;
	int32_t t59 = 5;

    t59 = ((x241%x242)!=(x243%x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 5464926613LLU;
	volatile int8_t x246 = -62;
	int8_t x247 = 28;
	int16_t x248 = INT16_MIN;
	int32_t t60 = 585;

    t60 = ((x245%x246)!=(x247%x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = -1;
	static int16_t x250 = 8;
	int64_t x251 = INT64_MIN;
	int32_t t61 = -244393;

    t61 = ((x249%x250)!=(x251%x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x254 = INT32_MIN;
	static uint64_t x255 = 256136594715902778LLU;
	int16_t x256 = -1;
	volatile int32_t t62 = -2;

    t62 = ((x253%x254)!=(x255%x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MIN;
	static int16_t x258 = INT16_MIN;
	volatile int16_t x259 = -6;
	volatile uint64_t x260 = 5LLU;
	static volatile int32_t t63 = -100973;

    t63 = ((x257%x258)!=(x259%x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = 0U;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MIN;

    t64 = ((x265%x266)!=(x267%x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	int64_t x275 = 906022LL;

    t65 = ((x273%x274)!=(x275%x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = 115;
	volatile int64_t x280 = INT64_MIN;
	int32_t t66 = -3;

    t66 = ((x277%x278)!=(x279%x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = 729166345U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t67 = -3160;

    t67 = ((x281%x282)!=(x283%x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x285 = 13U;
	int64_t x286 = INT64_MAX;
	volatile int16_t x287 = INT16_MIN;
	static uint16_t x288 = UINT16_MAX;
	volatile int32_t t68 = -2;

    t68 = ((x285%x286)!=(x287%x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x289 = 1U;
	int8_t x290 = INT8_MAX;
	static uint32_t x291 = UINT32_MAX;
	static uint8_t x292 = UINT8_MAX;
	volatile int32_t t69 = 3821672;

    t69 = ((x289%x290)!=(x291%x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = -1744;
	int16_t x298 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	int32_t t70 = 85727;

    t70 = ((x297%x298)!=(x299%x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x301 = 72118U;
	static volatile uint64_t x302 = 129838833109LLU;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = -1;
	volatile int32_t t71 = -44;

    t71 = ((x301%x302)!=(x303%x304));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = -5573;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = UINT64_MAX;
	int32_t t72 = -73;

    t72 = ((x305%x306)!=(x307%x308));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x310 = UINT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	uint64_t x312 = UINT64_MAX;
	int32_t t73 = -5045;

    t73 = ((x309%x310)!=(x311%x312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = INT8_MIN;
	volatile int8_t x318 = 32;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MAX;
	volatile int32_t t74 = -2930;

    t74 = ((x317%x318)!=(x319%x320));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = INT32_MIN;
	int16_t x322 = -1;
	static uint16_t x324 = 109U;

    t75 = ((x321%x322)!=(x323%x324));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x325 = 0U;
	uint16_t x327 = 13U;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t76 = -1060429;

    t76 = ((x325%x326)!=(x327%x328));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile int32_t t77 = -71017459;

    t77 = ((x329%x330)!=(x331%x332));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x333 = 72U;
	int16_t x335 = INT16_MIN;
	int32_t t78 = 5985;

    t78 = ((x333%x334)!=(x335%x336));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x337 = 12U;
	volatile uint8_t x338 = 12U;
	uint64_t x339 = UINT64_MAX;
	static int64_t x340 = 8LL;
	volatile int32_t t79 = -6709272;

    t79 = ((x337%x338)!=(x339%x340));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x341 = 56;
	uint16_t x342 = UINT16_MAX;
	int64_t x343 = 4738LL;
	int16_t x344 = INT16_MAX;
	volatile int32_t t80 = 20071432;

    t80 = ((x341%x342)!=(x343%x344));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x345 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -85331LL;
	int32_t t81 = -43483;

    t81 = ((x345%x346)!=(x347%x348));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x350 = 62746363243333LLU;
	int16_t x351 = INT16_MIN;
	int16_t x352 = 27;
	int32_t t82 = -3;

    t82 = ((x349%x350)!=(x351%x352));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x353 = -1;
	int64_t x354 = 427LL;
	uint16_t x355 = 30765U;
	int8_t x356 = INT8_MAX;
	int32_t t83 = -3523479;

    t83 = ((x353%x354)!=(x355%x356));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x357 = INT32_MAX;
	volatile uint32_t x358 = 4989U;
	int32_t x360 = 289;

    t84 = ((x357%x358)!=(x359%x360));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint16_t x361 = 939U;
	uint8_t x362 = UINT8_MAX;
	uint16_t x364 = 107U;
	int32_t t85 = -465586;

    t85 = ((x361%x362)!=(x363%x364));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MAX;
	int32_t t86 = -41390646;

    t86 = ((x365%x366)!=(x367%x368));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x369 = INT32_MIN;
	int64_t x370 = 3022141801442LL;
	volatile int32_t t87 = -918626;

    t87 = ((x369%x370)!=(x371%x372));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x373 = -4418;
	static int64_t x374 = 471648719798LL;
	int8_t x375 = INT8_MAX;
	int8_t x376 = INT8_MAX;
	int32_t t88 = -214352567;

    t88 = ((x373%x374)!=(x375%x376));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x378 = -1;
	uint8_t x380 = 1U;
	int32_t t89 = -249186;

    t89 = ((x377%x378)!=(x379%x380));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x381 = 1269U;
	int16_t x382 = INT16_MAX;
	volatile uint8_t x383 = 0U;
	volatile int32_t t90 = 180;

    t90 = ((x381%x382)!=(x383%x384));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x385 = INT16_MIN;
	static int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 19U;

    t91 = ((x385%x386)!=(x387%x388));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = INT16_MIN;
	static int32_t t92 = -162898702;

    t92 = ((x389%x390)!=(x391%x392));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	static volatile int8_t x396 = INT8_MIN;
	volatile int32_t t93 = -1;

    t93 = ((x393%x394)!=(x395%x396));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x397 = 4;
	uint16_t x398 = 64U;
	int32_t x399 = 3;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t94 = -134602204;

    t94 = ((x397%x398)!=(x399%x400));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	int32_t t95 = -1;

    t95 = ((x401%x402)!=(x403%x404));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = -26;
	volatile uint64_t x406 = 11522045365997564LLU;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	volatile int32_t t96 = -57;

    t96 = ((x405%x406)!=(x407%x408));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x409 = 595884LLU;
	int16_t x410 = -1;
	uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = 3212LL;
	int32_t t97 = 73;

    t97 = ((x409%x410)!=(x411%x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = INT32_MIN;
	int64_t x414 = -1LL;
	int32_t t98 = 309;

    t98 = ((x413%x414)!=(x415%x416));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = INT16_MIN;
	static uint8_t x418 = 3U;
	int32_t x419 = 1;
	volatile uint32_t x420 = 18U;
	volatile int32_t t99 = 608164212;

    t99 = ((x417%x418)!=(x419%x420));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 5U;
	static int32_t x424 = INT32_MIN;
	volatile int32_t t100 = -15072;

    t100 = ((x421%x422)!=(x423%x424));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = -1;
	uint32_t x426 = 10105U;
	int16_t x427 = INT16_MIN;
	static int8_t x428 = INT8_MIN;

    t101 = ((x425%x426)!=(x427%x428));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x433 = 16U;
	int32_t x435 = 348311;
	int64_t x436 = INT64_MAX;

    t102 = ((x433%x434)!=(x435%x436));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x437 = UINT64_MAX;
	static uint16_t x438 = 2U;
	uint32_t x439 = 7U;
	uint8_t x440 = UINT8_MAX;
	static volatile int32_t t103 = -4;

    t103 = ((x437%x438)!=(x439%x440));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x441 = INT64_MAX;
	static int64_t x442 = INT64_MIN;
	int64_t x443 = -1LL;
	int32_t t104 = -489636673;

    t104 = ((x441%x442)!=(x443%x444));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x445 = 45;
	uint64_t x446 = 3250105499557519LLU;
	uint16_t x448 = UINT16_MAX;

    t105 = ((x445%x446)!=(x447%x448));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x449 = 195912;
	static int16_t x451 = INT16_MIN;
	int32_t t106 = 13;

    t106 = ((x449%x450)!=(x451%x452));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x453 = INT8_MIN;
	static int8_t x454 = 15;
	int32_t t107 = -27609625;

    t107 = ((x453%x454)!=(x455%x456));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x458 = INT16_MIN;
	static int32_t x459 = -1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t108 = -98419;

    t108 = ((x457%x458)!=(x459%x460));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = -3284996382009202235LL;
	volatile uint16_t x464 = 951U;
	volatile int32_t t109 = -279602199;

    t109 = ((x461%x462)!=(x463%x464));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x466 = 16136U;

    t110 = ((x465%x466)!=(x467%x468));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x469 = INT16_MIN;
	int16_t x470 = INT16_MAX;
	int32_t x471 = -1;
	int32_t x472 = -1;

    t111 = ((x469%x470)!=(x471%x472));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x473 = 4653478LL;
	int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MIN;
	static volatile int32_t t112 = 2059;

    t112 = ((x473%x474)!=(x475%x476));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x477 = INT32_MIN;
	int64_t x478 = -130829LL;
	int32_t x479 = -1;
	volatile int32_t t113 = -11271776;

    t113 = ((x477%x478)!=(x479%x480));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x482 = INT16_MAX;
	static int8_t x483 = -1;
	int64_t x484 = INT64_MIN;
	volatile int32_t t114 = 6288592;

    t114 = ((x481%x482)!=(x483%x484));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = -51;
	int64_t x487 = INT64_MIN;
	uint64_t x488 = UINT64_MAX;
	int32_t t115 = 8;

    t115 = ((x485%x486)!=(x487%x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x490 = -1;
	volatile uint32_t x491 = UINT32_MAX;
	int32_t t116 = 270598;

    t116 = ((x489%x490)!=(x491%x492));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x493 = 8U;
	int8_t x494 = INT8_MIN;
	volatile int8_t x495 = INT8_MIN;
	static int16_t x496 = INT16_MAX;

    t117 = ((x493%x494)!=(x495%x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x497 = INT64_MAX;
	int16_t x499 = INT16_MIN;
	volatile int32_t x500 = INT32_MIN;
	int32_t t118 = 6092758;

    t118 = ((x497%x498)!=(x499%x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x501 = UINT16_MAX;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = -70667321703LL;
	int64_t x504 = 6939LL;
	volatile int32_t t119 = -129167879;

    t119 = ((x501%x502)!=(x503%x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x505 = 0;
	static int16_t x506 = INT16_MIN;
	uint64_t x507 = 13484794715024LLU;
	int8_t x508 = INT8_MIN;
	static int32_t t120 = -1;

    t120 = ((x505%x506)!=(x507%x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x510 = 66553486U;
	int16_t x512 = INT16_MAX;
	int32_t t121 = -1973;

    t121 = ((x509%x510)!=(x511%x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = INT32_MAX;
	int16_t x515 = 4;
	uint8_t x516 = UINT8_MAX;
	int32_t t122 = -27156;

    t122 = ((x513%x514)!=(x515%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x517 = 2;
	uint16_t x518 = 4U;
	int16_t x519 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	int32_t t123 = 1;

    t123 = ((x517%x518)!=(x519%x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint16_t x523 = 6360U;
	uint64_t x524 = 1LLU;
	int32_t t124 = 26;

    t124 = ((x521%x522)!=(x523%x524));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x525 = INT8_MIN;
	volatile uint8_t x526 = 24U;
	int8_t x527 = 1;
	uint8_t x528 = UINT8_MAX;
	int32_t t125 = -752;

    t125 = ((x525%x526)!=(x527%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x529 = INT64_MAX;
	int32_t x530 = -1;
	uint32_t x531 = 184U;
	int8_t x532 = 28;
	int32_t t126 = 45;

    t126 = ((x529%x530)!=(x531%x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x533 = -1;
	uint16_t x534 = 1U;
	int64_t x536 = INT64_MIN;
	volatile int32_t t127 = 18128433;

    t127 = ((x533%x534)!=(x535%x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	volatile int16_t x539 = INT16_MIN;
	int32_t t128 = 1;

    t128 = ((x537%x538)!=(x539%x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x545 = -10;
	static uint64_t x546 = 65149561940634576LLU;
	uint16_t x547 = 30U;
	static uint32_t x548 = 10U;
	static volatile int32_t t129 = -56705;

    t129 = ((x545%x546)!=(x547%x548));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x549 = INT64_MIN;
	uint16_t x550 = UINT16_MAX;
	int8_t x551 = INT8_MAX;
	uint16_t x552 = 466U;
	static int32_t t130 = -250;

    t130 = ((x549%x550)!=(x551%x552));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x553 = 5179573129962LL;
	int16_t x554 = -109;
	int64_t x556 = -7699449732LL;
	int32_t t131 = 1;

    t131 = ((x553%x554)!=(x555%x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x558 = INT32_MIN;
	int64_t x559 = INT64_MIN;
	static int16_t x560 = -17;
	int32_t t132 = -3;

    t132 = ((x557%x558)!=(x559%x560));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	int8_t x564 = 2;

    t133 = ((x561%x562)!=(x563%x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x565 = 14U;
	int16_t x566 = INT16_MAX;
	int32_t x567 = INT32_MIN;
	static int8_t x568 = 1;

    t134 = ((x565%x566)!=(x567%x568));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MAX;
	static int32_t t135 = -8288966;

    t135 = ((x569%x570)!=(x571%x572));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x573 = 1LLU;
	int8_t x574 = INT8_MIN;
	volatile int16_t x575 = 2;
	static uint8_t x576 = UINT8_MAX;
	volatile int32_t t136 = 744;

    t136 = ((x573%x574)!=(x575%x576));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x577 = INT8_MIN;
	volatile int8_t x578 = INT8_MAX;
	static int8_t x579 = 56;
	int64_t x580 = -33889527146825982LL;
	static int32_t t137 = -39374;

    t137 = ((x577%x578)!=(x579%x580));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x581 = UINT16_MAX;
	volatile int64_t x582 = INT64_MAX;
	uint32_t x583 = UINT32_MAX;
	int16_t x584 = INT16_MIN;
	int32_t t138 = -4617;

    t138 = ((x581%x582)!=(x583%x584));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = -211;
	static uint64_t x586 = UINT64_MAX;
	int32_t x588 = -1;
	volatile int32_t t139 = -85;

    t139 = ((x585%x586)!=(x587%x588));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x589 = INT16_MIN;
	uint8_t x590 = 2U;
	uint64_t x591 = UINT64_MAX;
	int8_t x592 = INT8_MAX;

    t140 = ((x589%x590)!=(x591%x592));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = -1LL;
	static int64_t x595 = INT64_MIN;
	static volatile uint32_t x596 = 1500U;
	int32_t t141 = -213252;

    t141 = ((x593%x594)!=(x595%x596));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x597 = INT16_MIN;
	int8_t x599 = -29;
	static int32_t x600 = -1;
	static volatile int32_t t142 = 386001;

    t142 = ((x597%x598)!=(x599%x600));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x601 = -1LL;
	uint32_t x603 = 2770U;
	int32_t t143 = -557576;

    t143 = ((x601%x602)!=(x603%x604));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x609 = 108LLU;
	int32_t x610 = INT32_MIN;
	int64_t x611 = INT64_MIN;
	static volatile uint16_t x612 = 555U;
	int32_t t144 = 1;

    t144 = ((x609%x610)!=(x611%x612));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x613 = INT32_MIN;
	volatile int16_t x615 = -1;
	int8_t x616 = INT8_MIN;
	int32_t t145 = -82;

    t145 = ((x613%x614)!=(x615%x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x617 = 33U;
	uint64_t x618 = UINT64_MAX;
	int8_t x619 = INT8_MAX;
	volatile int64_t x620 = INT64_MAX;
	int32_t t146 = 35;

    t146 = ((x617%x618)!=(x619%x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x621 = -1;
	uint32_t x623 = 418465060U;
	int32_t t147 = 1;

    t147 = ((x621%x622)!=(x623%x624));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x625 = 3921U;
	uint64_t x626 = 1903LLU;
	int64_t x627 = 18887856232949906LL;
	static volatile int32_t t148 = 116828;

    t148 = ((x625%x626)!=(x627%x628));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x629 = UINT64_MAX;
	static uint16_t x631 = 5U;
	static int64_t x632 = -524249568LL;
	volatile int32_t t149 = 17851517;

    t149 = ((x629%x630)!=(x631%x632));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x633 = 34469758059397225LL;
	uint8_t x634 = 48U;

    t150 = ((x633%x634)!=(x635%x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x637 = -1;
	volatile uint16_t x638 = 1518U;
	volatile int64_t x639 = INT64_MAX;
	static int32_t x640 = INT32_MAX;
	int32_t t151 = 244306588;

    t151 = ((x637%x638)!=(x639%x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x641 = -1;
	int64_t x642 = -1LL;
	uint32_t x644 = 5300U;

    t152 = ((x641%x642)!=(x643%x644));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x645 = 1205528635488563LLU;
	uint32_t x647 = 58852U;
	int16_t x648 = INT16_MIN;
	int32_t t153 = -3459;

    t153 = ((x645%x646)!=(x647%x648));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x649 = -1;
	int8_t x650 = -4;
	static int8_t x651 = 0;
	volatile uint32_t x652 = 198815762U;
	int32_t t154 = -377;

    t154 = ((x649%x650)!=(x651%x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x654 = 1;
	int16_t x656 = INT16_MIN;
	volatile int32_t t155 = -7638436;

    t155 = ((x653%x654)!=(x655%x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x657 = -422419;
	int16_t x659 = INT16_MIN;
	int16_t x660 = INT16_MIN;
	static int32_t t156 = -99;

    t156 = ((x657%x658)!=(x659%x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x661 = INT64_MAX;
	int16_t x662 = 837;
	int8_t x663 = -1;
	uint16_t x664 = 28U;

    t157 = ((x661%x662)!=(x663%x664));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x665 = INT64_MAX;
	volatile int16_t x666 = INT16_MIN;
	volatile int16_t x667 = INT16_MIN;
	static int16_t x668 = INT16_MIN;
	volatile int32_t t158 = -1;

    t158 = ((x665%x666)!=(x667%x668));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x669 = -1;
	uint64_t x670 = 134LLU;
	int32_t x671 = 404489;
	volatile int8_t x672 = 14;
	static volatile int32_t t159 = 59478;

    t159 = ((x669%x670)!=(x671%x672));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x673 = INT16_MAX;
	volatile int32_t x674 = INT32_MIN;
	static uint8_t x675 = 115U;
	uint8_t x676 = 12U;
	volatile int32_t t160 = 23529977;

    t160 = ((x673%x674)!=(x675%x676));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x677 = -1LL;
	static uint8_t x678 = UINT8_MAX;
	static int16_t x679 = 1;
	int16_t x680 = 3355;
	volatile int32_t t161 = -3;

    t161 = ((x677%x678)!=(x679%x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x681 = 7;
	int8_t x682 = INT8_MAX;
	int8_t x684 = -1;
	volatile int32_t t162 = -321682;

    t162 = ((x681%x682)!=(x683%x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x686 = INT64_MIN;
	static volatile int16_t x688 = INT16_MIN;
	volatile int32_t t163 = -12937;

    t163 = ((x685%x686)!=(x687%x688));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x689 = INT8_MIN;
	int32_t x690 = INT32_MIN;
	volatile int8_t x691 = -11;
	volatile int64_t x692 = INT64_MIN;
	volatile int32_t t164 = 27;

    t164 = ((x689%x690)!=(x691%x692));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x693 = INT8_MIN;
	int16_t x694 = -1;
	int16_t x695 = INT16_MIN;
	volatile int32_t t165 = 30606;

    t165 = ((x693%x694)!=(x695%x696));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x697 = -1LL;
	static int32_t x698 = INT32_MAX;

    t166 = ((x697%x698)!=(x699%x700));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x701 = INT32_MAX;
	static volatile int32_t x702 = INT32_MIN;
	int32_t x703 = 388;
	int32_t x704 = 4686;

    t167 = ((x701%x702)!=(x703%x704));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x705 = 387328629U;
	int64_t x707 = INT64_MAX;
	uint8_t x708 = 28U;
	static volatile int32_t t168 = -100852;

    t168 = ((x705%x706)!=(x707%x708));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x709 = 384392588291LLU;
	uint16_t x711 = 6U;
	int8_t x712 = INT8_MAX;
	int32_t t169 = 1894;

    t169 = ((x709%x710)!=(x711%x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x713 = UINT32_MAX;
	uint32_t x714 = 67998U;
	static volatile int32_t t170 = 24461;

    t170 = ((x713%x714)!=(x715%x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x718 = INT16_MIN;
	uint64_t x719 = 83061878209LLU;
	int32_t t171 = -147574;

    t171 = ((x717%x718)!=(x719%x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x721 = 1167527595675494LL;
	volatile int32_t x722 = INT32_MAX;
	volatile uint8_t x724 = 3U;

    t172 = ((x721%x722)!=(x723%x724));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = INT8_MIN;

    t173 = ((x725%x726)!=(x727%x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MAX;
	static uint16_t x730 = 883U;
	static uint16_t x731 = UINT16_MAX;
	volatile int8_t x732 = 1;
	volatile int32_t t174 = 8570;

    t174 = ((x729%x730)!=(x731%x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x733 = INT32_MIN;
	static int32_t x735 = -1;
	int64_t x736 = INT64_MIN;
	volatile int32_t t175 = -3299149;

    t175 = ((x733%x734)!=(x735%x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x737 = -1LL;
	int32_t x738 = INT32_MIN;
	volatile int32_t t176 = -54344632;

    t176 = ((x737%x738)!=(x739%x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = -1LL;
	uint64_t x742 = 903LLU;
	static int8_t x743 = 1;
	static int8_t x744 = 61;

    t177 = ((x741%x742)!=(x743%x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x745 = 4U;
	uint16_t x746 = 1U;
	uint16_t x747 = 3U;
	int16_t x748 = INT16_MAX;
	volatile int32_t t178 = 16407;

    t178 = ((x745%x746)!=(x747%x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x749 = 15U;
	static int32_t x750 = -1;
	uint64_t x751 = 2907677LLU;
	static uint64_t x752 = UINT64_MAX;
	int32_t t179 = 879605;

    t179 = ((x749%x750)!=(x751%x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x753 = INT16_MIN;
	static int16_t x754 = INT16_MIN;
	int16_t x755 = -1;
	int8_t x756 = INT8_MIN;
	int32_t t180 = -834268174;

    t180 = ((x753%x754)!=(x755%x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	static int8_t x758 = -1;
	int8_t x759 = 5;
	volatile int32_t t181 = -15;

    t181 = ((x757%x758)!=(x759%x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x761 = 1U;
	volatile int64_t x762 = -1LL;
	int64_t x763 = INT64_MIN;

    t182 = ((x761%x762)!=(x763%x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x765 = 96897488U;
	int8_t x766 = 23;
	uint16_t x767 = 1U;
	uint16_t x768 = UINT16_MAX;

    t183 = ((x765%x766)!=(x767%x768));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x769 = UINT32_MAX;
	static int32_t x771 = 16;
	int16_t x772 = 8005;
	volatile int32_t t184 = -8930;

    t184 = ((x769%x770)!=(x771%x772));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x774 = 5977LLU;
	int16_t x775 = INT16_MIN;
	volatile int32_t t185 = -5253611;

    t185 = ((x773%x774)!=(x775%x776));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	int8_t x778 = 49;
	int32_t x779 = INT32_MIN;
	volatile int32_t t186 = 211435710;

    t186 = ((x777%x778)!=(x779%x780));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x781 = INT16_MAX;
	uint16_t x782 = 3U;
	int32_t x783 = -9;
	int32_t x784 = INT32_MIN;
	volatile int32_t t187 = -1051328;

    t187 = ((x781%x782)!=(x783%x784));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x785 = 1965U;
	uint32_t x788 = 663U;

    t188 = ((x785%x786)!=(x787%x788));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x790 = INT16_MAX;
	uint64_t x791 = UINT64_MAX;
	int16_t x792 = INT16_MAX;
	static int32_t t189 = -97704677;

    t189 = ((x789%x790)!=(x791%x792));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x793 = UINT16_MAX;
	int64_t x796 = -1LL;
	static volatile int32_t t190 = 0;

    t190 = ((x793%x794)!=(x795%x796));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x797 = -1;
	int8_t x799 = 1;
	static int16_t x800 = INT16_MIN;

    t191 = ((x797%x798)!=(x799%x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x801 = 4U;
	uint16_t x802 = 12165U;
	uint8_t x803 = 5U;
	uint32_t x804 = 414322U;
	static volatile int32_t t192 = 959049186;

    t192 = ((x801%x802)!=(x803%x804));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x805 = -41;
	uint32_t x806 = UINT32_MAX;
	int32_t t193 = -333190856;

    t193 = ((x805%x806)!=(x807%x808));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x811 = INT32_MIN;
	volatile int64_t x812 = INT64_MIN;
	volatile int32_t t194 = -9;

    t194 = ((x809%x810)!=(x811%x812));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x813 = INT64_MIN;
	uint32_t x815 = 880869U;
	uint64_t x816 = UINT64_MAX;

    t195 = ((x813%x814)!=(x815%x816));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x821 = INT32_MIN;
	uint32_t x823 = UINT32_MAX;
	volatile int32_t x824 = INT32_MIN;
	int32_t t196 = 7829799;

    t196 = ((x821%x822)!=(x823%x824));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x825 = 1702U;
	int16_t x826 = 10774;
	uint16_t x827 = 35U;
	int16_t x828 = INT16_MAX;
	int32_t t197 = -39360;

    t197 = ((x825%x826)!=(x827%x828));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x829 = INT16_MIN;
	uint16_t x832 = 1U;
	int32_t t198 = -915372;

    t198 = ((x829%x830)!=(x831%x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x839 = -1;
	volatile int32_t x840 = INT32_MIN;
	int32_t t199 = 551020;

    t199 = ((x837%x838)!=(x839%x840));

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

