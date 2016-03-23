
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

uint8_t x6 = UINT8_MAX;
volatile int32_t t1 = 1;
volatile int8_t x10 = INT8_MIN;
volatile int8_t x12 = -1;
static uint64_t x16 = UINT64_MAX;
volatile int64_t x17 = -1LL;
static int32_t t4 = -25;
static int8_t x25 = -1;
int64_t x29 = INT64_MIN;
static uint8_t x36 = 1U;
static volatile uint64_t x40 = 64116LLU;
static volatile int32_t t11 = -13;
int64_t x52 = -1LL;
int32_t x59 = INT32_MIN;
int8_t x60 = INT8_MIN;
int16_t x64 = INT16_MIN;
int8_t x67 = 0;
uint64_t x73 = 34LLU;
static volatile uint8_t x84 = 12U;
volatile int32_t t20 = 127809;
uint32_t x91 = 16836073U;
int32_t x92 = 393;
uint8_t x95 = 63U;
volatile int32_t t23 = 871;
int8_t x97 = INT8_MAX;
int16_t x98 = INT16_MIN;
static volatile uint8_t x99 = 2U;
volatile int16_t x100 = -1;
int32_t x106 = 166;
uint32_t x108 = 483745U;
uint16_t x120 = UINT16_MAX;
int8_t x126 = INT8_MIN;
volatile uint16_t x128 = 18U;
int32_t t32 = -306739424;
uint32_t x136 = UINT32_MAX;
int8_t x148 = INT8_MIN;
volatile uint16_t x150 = 7063U;
int8_t x160 = -7;
int16_t x164 = INT16_MAX;
static int64_t x166 = -5380297592499064LL;
static volatile int16_t x167 = 0;
uint8_t x169 = UINT8_MAX;
int8_t x171 = 0;
uint16_t x176 = 1U;
volatile int32_t t44 = -81530;
volatile int8_t x186 = 5;
int8_t x187 = -1;
int32_t t47 = 0;
int64_t x196 = 136011914083LL;
uint32_t x197 = UINT32_MAX;
uint16_t x198 = UINT16_MAX;
uint64_t x200 = 1077091420575964LLU;
static volatile uint8_t x210 = 1U;
uint16_t x212 = 3U;
volatile int32_t t52 = 0;
static int64_t x216 = 12516522LL;
uint32_t x219 = 1U;
int8_t x221 = -1;
static uint64_t x240 = 19399LLU;
uint32_t x258 = UINT32_MAX;
volatile uint16_t x261 = 2U;
static volatile int32_t x268 = 0;
int64_t x269 = -1LL;
uint16_t x270 = UINT16_MAX;
uint64_t x278 = UINT64_MAX;
volatile int64_t x281 = INT64_MIN;
volatile int32_t t71 = -9296;
int64_t x290 = INT64_MIN;
int32_t x301 = 5;
int8_t x303 = -1;
uint64_t x305 = 2174654162647150528LLU;
volatile int64_t x321 = INT64_MIN;
int16_t x330 = -344;
uint32_t x335 = 36223865U;
int8_t x340 = 0;
int32_t x344 = 2035;
int32_t x349 = -1;
static int64_t x353 = 492359789122340LL;
uint32_t x355 = 176885928U;
volatile int32_t t88 = -69;
int8_t x358 = INT8_MAX;
uint16_t x363 = 23367U;
volatile int32_t x364 = -1;
volatile int8_t x365 = INT8_MAX;
static int16_t x366 = INT16_MAX;
static uint64_t x371 = 8443272559LLU;
int32_t x372 = INT32_MIN;
int16_t x381 = INT16_MIN;
int8_t x384 = INT8_MIN;
int16_t x385 = INT16_MAX;
uint8_t x386 = 42U;
static int32_t x392 = INT32_MIN;
int8_t x396 = INT8_MAX;
int64_t x406 = 981695766256LL;
static int32_t x408 = INT32_MIN;
static int32_t x410 = INT32_MIN;
int16_t x415 = INT16_MIN;
int16_t x422 = INT16_MIN;
static volatile int32_t t106 = -1043845402;
volatile int64_t x435 = -1LL;
uint8_t x442 = UINT8_MAX;
int8_t x447 = INT8_MIN;
int8_t x450 = INT8_MIN;
volatile int32_t t112 = 382247684;
static uint16_t x455 = 3U;
uint8_t x460 = UINT8_MAX;
int8_t x462 = 1;
int32_t x468 = 25828;
int32_t t116 = 26;
volatile uint64_t x474 = 4148366098135433491LLU;
static uint64_t x476 = UINT64_MAX;
volatile int64_t x478 = INT64_MIN;
volatile int64_t x481 = INT64_MIN;
int32_t x484 = INT32_MIN;
static int32_t t121 = 15641;
uint16_t x500 = UINT16_MAX;
uint32_t x502 = 639784538U;
uint64_t x504 = 546771030864943LLU;
static int16_t x508 = 1633;
int16_t x512 = -771;
int16_t x517 = -1;
volatile int16_t x532 = -1;
int16_t x539 = INT16_MIN;
int64_t x540 = INT64_MAX;
static volatile int32_t t134 = -222038;
static volatile uint16_t x542 = 30676U;
static int16_t x544 = 33;
volatile int32_t t136 = 106;
static uint8_t x549 = 0U;
static volatile int16_t x552 = INT16_MIN;
int64_t x553 = INT64_MIN;
int16_t x555 = -14670;
volatile int32_t t139 = -4763362;
uint32_t x563 = UINT32_MAX;
int16_t x564 = INT16_MAX;
int32_t x576 = -246877967;
volatile int32_t t145 = -35;
uint8_t x591 = UINT8_MAX;
int32_t t147 = -483918339;
static int32_t t149 = 12516122;
static int8_t x607 = INT8_MAX;
int64_t x608 = -186411657452LL;
uint8_t x609 = 3U;
int32_t x610 = -1;
volatile int64_t x611 = 1029418944LL;
uint8_t x617 = UINT8_MAX;
volatile int32_t x619 = INT32_MIN;
int8_t x621 = 0;
uint8_t x622 = 12U;
int32_t t156 = 488;
int8_t x633 = INT8_MAX;
uint64_t x647 = 0LLU;
uint64_t x653 = 99903336031404LLU;
volatile int8_t x655 = 0;
static volatile int32_t t163 = -223396;
uint32_t x657 = UINT32_MAX;
volatile int32_t t164 = 0;
uint16_t x661 = 3U;
uint8_t x663 = UINT8_MAX;
volatile int64_t x664 = -1LL;
volatile int32_t t165 = 17898;
static int64_t x665 = INT64_MIN;
static volatile int32_t t167 = 5810240;
static int8_t x680 = INT8_MIN;
volatile int32_t t171 = 33;
int32_t x693 = INT32_MAX;
int16_t x699 = INT16_MIN;
uint32_t x706 = 225U;
static int32_t t176 = 29;
static uint64_t x709 = 6262969LLU;
int64_t x716 = 3583818488LL;
static int32_t t179 = -23;
uint16_t x732 = 2U;
volatile int32_t t182 = -76;
volatile int16_t x738 = INT16_MIN;
int8_t x739 = INT8_MIN;
volatile int16_t x740 = 6;
int16_t x742 = INT16_MAX;
static int64_t x747 = INT64_MAX;
int16_t x751 = INT16_MIN;
uint8_t x757 = 5U;
int16_t x759 = -768;
int64_t x763 = INT64_MAX;
volatile uint16_t x764 = 24U;
volatile int32_t t190 = -505063068;
uint64_t x768 = UINT64_MAX;
volatile int32_t t191 = 997297;
static int32_t t192 = -472513;
int32_t x784 = -221;
int32_t x788 = INT32_MIN;
volatile int32_t t197 = -9;
int32_t x793 = INT32_MAX;


void f0(void) {
    	uint8_t x1 = 87U;
	int64_t x2 = -50647173758315LL;
	uint16_t x3 = 5101U;
	static int64_t x4 = -1LL;
	static volatile int32_t t0 = 1;

    t0 = (((x1<=x2)|x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;

    t1 = (((x5<=x6)|x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	uint64_t x11 = 452LLU;
	static volatile int32_t t2 = 21;

    t2 = (((x9<=x10)|x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = -6094;

    t3 = (((x13<=x14)|x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x18 = -49;
	uint32_t x19 = UINT32_MAX;
	static volatile uint64_t x20 = 3139019421LLU;

    t4 = (((x17<=x18)|x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 20014222943873LLU;
	uint32_t x22 = 36373U;
	static int8_t x23 = -1;
	int8_t x24 = -2;
	static volatile int32_t t5 = 704;

    t5 = (((x21<=x22)|x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MIN;
	int32_t x27 = INT32_MAX;
	uint8_t x28 = 0U;
	int32_t t6 = -319044869;

    t6 = (((x25<=x26)|x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 111026593;

    t7 = (((x29<=x30)|x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 1044554541259649229LLU;
	int8_t x34 = 0;
	uint8_t x35 = 10U;
	static int32_t t8 = 485495803;

    t8 = (((x33<=x34)|x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = 437;

    t9 = (((x37<=x38)|x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -183139LL;
	int8_t x42 = 0;
	int16_t x43 = INT16_MAX;
	int64_t x44 = -674363LL;
	volatile int32_t t10 = -973803;

    t10 = (((x41<=x42)|x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	volatile int64_t x46 = 786624344LL;
	int32_t x47 = -893347971;
	static int64_t x48 = INT64_MIN;

    t11 = (((x45<=x46)|x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -555;
	int16_t x50 = INT16_MAX;
	int64_t x51 = -1LL;
	int32_t t12 = 95639193;

    t12 = (((x49<=x50)|x51)==x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int16_t x54 = 5;
	volatile int16_t x55 = INT16_MIN;
	static uint32_t x56 = UINT32_MAX;
	int32_t t13 = -1;

    t13 = (((x53<=x54)|x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = -257188904;
	volatile int32_t t14 = -7655;

    t14 = (((x57<=x58)|x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	volatile int16_t x62 = INT16_MIN;
	uint8_t x63 = 24U;
	int32_t t15 = 990964192;

    t15 = (((x61<=x62)|x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -28;
	int32_t x66 = -1;
	int32_t x68 = -1;
	static int32_t t16 = -6122;

    t16 = (((x65<=x66)|x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	int64_t x70 = -107168545923466LL;
	int64_t x71 = -1LL;
	uint8_t x72 = 40U;
	volatile int32_t t17 = -1733178;

    t17 = (((x69<=x70)|x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = INT64_MIN;
	int16_t x76 = -842;
	volatile int32_t t18 = 7432526;

    t18 = (((x73<=x74)|x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 2U;
	uint16_t x78 = 16119U;
	volatile int32_t x79 = -1;
	int16_t x80 = -1;
	static int32_t t19 = 481982;

    t19 = (((x77<=x78)|x79)==x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 13U;
	static uint64_t x82 = 5873322432986017LLU;
	int64_t x83 = INT64_MIN;

    t20 = (((x81<=x82)|x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 58;
	int32_t x86 = INT32_MIN;
	int32_t x87 = -970448;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -6;

    t21 = (((x85<=x86)|x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x89 = 4U;
	int32_t x90 = INT32_MIN;
	volatile int32_t t22 = 1140041;

    t22 = (((x89<=x90)|x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int16_t x94 = INT16_MAX;
	uint8_t x96 = UINT8_MAX;

    t23 = (((x93<=x94)|x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t t24 = 977872;

    t24 = (((x97<=x98)|x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	static int64_t x102 = INT64_MIN;
	static uint16_t x103 = 154U;
	int64_t x104 = 5365989051LL;
	int32_t t25 = 95200839;

    t25 = (((x101<=x102)|x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = 708517041;
	int64_t x107 = INT64_MIN;
	volatile int32_t t26 = 1089409;

    t26 = (((x105<=x106)|x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 114U;
	static uint16_t x110 = 1205U;
	uint8_t x111 = UINT8_MAX;
	volatile uint32_t x112 = 53365U;
	volatile int32_t t27 = -7966;

    t27 = (((x109<=x110)|x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -23;
	int8_t x114 = INT8_MAX;
	int16_t x115 = 913;
	int8_t x116 = -1;
	int32_t t28 = -157489;

    t28 = (((x113<=x114)|x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile int32_t t29 = -3565;

    t29 = (((x117<=x118)|x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = -1;
	int8_t x122 = 3;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = 23;
	static int32_t t30 = 55;

    t30 = (((x121<=x122)|x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	volatile uint16_t x127 = 15845U;
	volatile int32_t t31 = 4668686;

    t31 = (((x125<=x126)|x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x129 = INT32_MIN;
	int16_t x130 = -2;
	uint16_t x131 = 17214U;
	uint16_t x132 = UINT16_MAX;

    t32 = (((x129<=x130)|x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 2U;
	int32_t x134 = 397553927;
	int64_t x135 = -1LL;
	volatile int32_t t33 = -73118;

    t33 = (((x133<=x134)|x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MAX;
	static uint16_t x138 = UINT16_MAX;
	static volatile int16_t x139 = 0;
	int16_t x140 = 61;
	volatile int32_t t34 = 452;

    t34 = (((x137<=x138)|x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static uint32_t x142 = 703074U;
	int8_t x143 = INT8_MIN;
	volatile int8_t x144 = -1;
	volatile int32_t t35 = 12240634;

    t35 = (((x141<=x142)|x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	volatile uint16_t x146 = UINT16_MAX;
	volatile int8_t x147 = -11;
	volatile int32_t t36 = 0;

    t36 = (((x145<=x146)|x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	volatile int32_t x151 = -1;
	int64_t x152 = -1455257496LL;
	volatile int32_t t37 = -50995554;

    t37 = (((x149<=x150)|x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int16_t x154 = -5606;
	int32_t x155 = INT32_MIN;
	int32_t x156 = -1543721;
	static int32_t t38 = 13;

    t38 = (((x153<=x154)|x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = -1;
	volatile int32_t t39 = 86;

    t39 = (((x157<=x158)|x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = 329777U;
	uint32_t x162 = UINT32_MAX;
	volatile int32_t x163 = INT32_MAX;
	int32_t t40 = -255966;

    t40 = (((x161<=x162)|x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -2237;
	uint16_t x168 = 1798U;
	int32_t t41 = -398576;

    t41 = (((x165<=x166)|x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x170 = 41088U;
	volatile int32_t x172 = 383;
	int32_t t42 = -195866284;

    t42 = (((x169<=x170)|x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x173 = INT16_MIN;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = -1;
	int32_t t43 = -1396;

    t43 = (((x173<=x174)|x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	int64_t x178 = -1LL;
	int8_t x179 = -1;
	int64_t x180 = -97620444001870LL;

    t44 = (((x177<=x178)|x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 78U;
	volatile uint16_t x182 = 431U;
	int32_t x183 = -1;
	static int8_t x184 = -1;
	int32_t t45 = 862;

    t45 = (((x181<=x182)|x183)==x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 838287;

    t46 = (((x185<=x186)|x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 1157;
	uint16_t x190 = UINT16_MAX;
	volatile uint16_t x191 = 2U;
	uint16_t x192 = 29U;

    t47 = (((x189<=x190)|x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	int64_t x195 = INT64_MIN;
	int32_t t48 = -18620;

    t48 = (((x193<=x194)|x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x199 = 17U;
	int32_t t49 = 5636;

    t49 = (((x197<=x198)|x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -5662895LL;
	int64_t x202 = -1LL;
	int32_t x203 = INT32_MIN;
	static uint16_t x204 = UINT16_MAX;
	int32_t t50 = 2630;

    t50 = (((x201<=x202)|x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 1918028404LLU;
	int32_t x206 = INT32_MAX;
	int8_t x207 = -1;
	int64_t x208 = -17139280458221756LL;
	volatile int32_t t51 = 251;

    t51 = (((x205<=x206)|x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 59U;
	static volatile int8_t x211 = -21;

    t52 = (((x209<=x210)|x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 1;
	volatile int8_t x214 = INT8_MIN;
	volatile int64_t x215 = INT64_MIN;
	static volatile int32_t t53 = -10;

    t53 = (((x213<=x214)|x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	static int16_t x220 = -3595;
	volatile int32_t t54 = 53841;

    t54 = (((x217<=x218)|x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x222 = INT8_MIN;
	uint32_t x223 = 451165U;
	uint16_t x224 = 13997U;
	volatile int32_t t55 = 1;

    t55 = (((x221<=x222)|x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -9;
	uint16_t x226 = UINT16_MAX;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = 12;

    t56 = (((x225<=x226)|x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	volatile uint8_t x230 = 22U;
	int32_t x231 = 558584;
	int8_t x232 = INT8_MAX;
	static int32_t t57 = 0;

    t57 = (((x229<=x230)|x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	uint64_t x234 = 127422LLU;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MAX;
	volatile int32_t t58 = -163;

    t58 = (((x233<=x234)|x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	int32_t x238 = 13;
	uint32_t x239 = UINT32_MAX;
	static int32_t t59 = 61431775;

    t59 = (((x237<=x238)|x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -6;
	int32_t x242 = -1;
	int32_t x243 = -61955;
	static uint64_t x244 = UINT64_MAX;
	int32_t t60 = 90;

    t60 = (((x241<=x242)|x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 0;
	int8_t x246 = -1;
	int16_t x247 = 316;
	int32_t x248 = -667694;
	int32_t t61 = 611884961;

    t61 = (((x245<=x246)|x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 154203;
	int8_t x250 = -1;
	static volatile int32_t x251 = INT32_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	int32_t t62 = 0;

    t62 = (((x249<=x250)|x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 11817770LLU;
	int64_t x254 = -19013LL;
	int32_t x255 = -1194795;
	uint32_t x256 = 16073U;
	volatile int32_t t63 = 1893216;

    t63 = (((x253<=x254)|x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MAX;
	static volatile int32_t t64 = 801362;

    t64 = (((x257<=x258)|x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x262 = -1;
	int8_t x263 = -1;
	int32_t x264 = 1;
	int32_t t65 = 177;

    t65 = (((x261<=x262)|x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	uint32_t x266 = 6585U;
	int8_t x267 = 22;
	volatile int32_t t66 = -11958;

    t66 = (((x265<=x266)|x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x271 = 23221U;
	int32_t x272 = -6863529;
	static volatile int32_t t67 = -1619789;

    t67 = (((x269<=x270)|x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MAX;
	int8_t x274 = -1;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t68 = 10955064;

    t68 = (((x273<=x274)|x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = 5;
	volatile int32_t t69 = 3180;

    t69 = (((x277<=x278)|x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = 7;
	static int8_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 496;

    t70 = (((x281<=x282)|x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 71310577U;
	uint8_t x286 = 1U;
	int64_t x287 = INT64_MAX;
	static uint16_t x288 = 0U;

    t71 = (((x285<=x286)|x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -3072613LL;
	int64_t x291 = INT64_MAX;
	int64_t x292 = 1LL;
	static volatile int32_t t72 = -673;

    t72 = (((x289<=x290)|x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	static int32_t x294 = -1;
	volatile int64_t x295 = 831LL;
	int16_t x296 = -1;
	static int32_t t73 = -13875361;

    t73 = (((x293<=x294)|x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 40657U;
	volatile int64_t x298 = -3698877425065LL;
	int64_t x299 = INT64_MAX;
	int64_t x300 = -32LL;
	volatile int32_t t74 = -4;

    t74 = (((x297<=x298)|x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x302 = 0U;
	int64_t x304 = -16831526918LL;
	volatile int32_t t75 = 43;

    t75 = (((x301<=x302)|x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = 25813977;
	volatile uint8_t x307 = 6U;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 87;

    t76 = (((x305<=x306)|x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = 1;
	volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = 1927816026311491LLU;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -26394228;

    t77 = (((x309<=x310)|x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = 3;
	volatile uint8_t x314 = 7U;
	int16_t x315 = INT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	int32_t t78 = -3;

    t78 = (((x313<=x314)|x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = INT8_MAX;
	uint8_t x318 = 33U;
	volatile int8_t x319 = 1;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = 13046;

    t79 = (((x317<=x318)|x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = 979948263820094LL;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = -1;
	int32_t t80 = -3179;

    t80 = (((x321<=x322)|x323)==x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 107;
	volatile int64_t x326 = INT64_MIN;
	volatile int16_t x327 = -231;
	int8_t x328 = -1;
	volatile int32_t t81 = 238;

    t81 = (((x325<=x326)|x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 2U;
	int32_t x331 = -1;
	uint64_t x332 = 13344963784LLU;
	int32_t t82 = -1176;

    t82 = (((x329<=x330)|x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 3U;
	uint8_t x334 = 10U;
	int32_t x336 = 286;
	static volatile int32_t t83 = 7667;

    t83 = (((x333<=x334)|x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x337 = 62;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MAX;
	int32_t t84 = 32120924;

    t84 = (((x337<=x338)|x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 55;
	uint8_t x342 = 0U;
	static int16_t x343 = -26;
	volatile int32_t t85 = 48223;

    t85 = (((x341<=x342)|x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = 58;
	uint32_t x347 = UINT32_MAX;
	static uint32_t x348 = 677124U;
	int32_t t86 = -3967019;

    t86 = (((x345<=x346)|x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MIN;
	uint16_t x351 = UINT16_MAX;
	static int8_t x352 = INT8_MIN;
	static volatile int32_t t87 = -98201;

    t87 = (((x349<=x350)|x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = -1;
	static uint8_t x356 = UINT8_MAX;

    t88 = (((x353<=x354)|x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = INT32_MAX;
	static int16_t x359 = INT16_MIN;
	static int64_t x360 = INT64_MIN;
	static int32_t t89 = 810206237;

    t89 = (((x357<=x358)|x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 5256488912LLU;
	int64_t x362 = INT64_MAX;
	static int32_t t90 = 866935;

    t90 = (((x361<=x362)|x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x367 = -1;
	int8_t x368 = INT8_MAX;
	static int32_t t91 = -50517254;

    t91 = (((x365<=x366)|x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = -1;
	int32_t t92 = -6064375;

    t92 = (((x369<=x370)|x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -1;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = -1LL;
	static int8_t x376 = INT8_MIN;
	int32_t t93 = -788832697;

    t93 = (((x373<=x374)|x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	int32_t x378 = -173;
	static int32_t x379 = -1;
	static volatile uint32_t x380 = 0U;
	int32_t t94 = 1;

    t94 = (((x377<=x378)|x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x382 = 1;
	static int64_t x383 = -805LL;
	int32_t t95 = -260735;

    t95 = (((x381<=x382)|x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x387 = INT8_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = -7769;

    t96 = (((x385<=x386)|x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = -304;
	volatile int16_t x391 = INT16_MAX;
	volatile int32_t t97 = -7555;

    t97 = (((x389<=x390)|x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MIN;
	static int64_t x395 = 324585081237691083LL;
	volatile int32_t t98 = 1487625;

    t98 = (((x393<=x394)|x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MIN;
	volatile uint64_t x398 = 1168315LLU;
	static volatile int32_t x399 = -1;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 1321;

    t99 = (((x397<=x398)|x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	int64_t x402 = 1LL;
	uint8_t x403 = 2U;
	volatile uint16_t x404 = UINT16_MAX;
	static volatile int32_t t100 = 26797;

    t100 = (((x401<=x402)|x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -14780969271LL;
	static int8_t x407 = 43;
	int32_t t101 = 686;

    t101 = (((x405<=x406)|x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = -1;
	int8_t x411 = INT8_MIN;
	static int32_t x412 = INT32_MIN;
	int32_t t102 = 13630;

    t102 = (((x409<=x410)|x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MAX;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = -866954692;

    t103 = (((x413<=x414)|x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	uint16_t x418 = UINT16_MAX;
	uint32_t x419 = 182008U;
	int8_t x420 = INT8_MIN;
	int32_t t104 = -589023061;

    t104 = (((x417<=x418)|x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MAX;
	int16_t x423 = INT16_MAX;
	int8_t x424 = 50;
	volatile int32_t t105 = 391389;

    t105 = (((x421<=x422)|x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 508U;
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 37U;

    t106 = (((x425<=x426)|x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	static int16_t x430 = -34;
	static uint16_t x431 = 15258U;
	uint64_t x432 = 15506656051LLU;
	volatile int32_t t107 = 219387893;

    t107 = (((x429<=x430)|x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	static volatile int16_t x434 = INT16_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile int32_t t108 = -848;

    t108 = (((x433<=x434)|x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int8_t x438 = INT8_MIN;
	uint32_t x439 = 20024U;
	uint32_t x440 = 12U;
	volatile int32_t t109 = 92;

    t109 = (((x437<=x438)|x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x443 = INT64_MAX;
	int32_t x444 = -53;
	int32_t t110 = 263;

    t110 = (((x441<=x442)|x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int8_t x446 = 22;
	uint32_t x448 = 124U;
	static int32_t t111 = -5040;

    t111 = (((x445<=x446)|x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	static int64_t x451 = 5656791111955LL;
	static volatile uint16_t x452 = 1U;

    t112 = (((x449<=x450)|x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = 3;
	uint8_t x454 = 6U;
	volatile int16_t x456 = -1456;
	int32_t t113 = -62887060;

    t113 = (((x453<=x454)|x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	volatile int32_t x458 = INT32_MIN;
	int8_t x459 = -18;
	int32_t t114 = 127807278;

    t114 = (((x457<=x458)|x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = 1;
	int8_t x463 = INT8_MIN;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t115 = -8027;

    t115 = (((x461<=x462)|x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x465 = INT32_MAX;
	volatile uint8_t x466 = 69U;
	uint64_t x467 = UINT64_MAX;

    t116 = (((x465<=x466)|x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -1;
	static volatile int16_t x470 = -1;
	uint8_t x471 = 49U;
	uint16_t x472 = 3U;
	int32_t t117 = 14130;

    t117 = (((x469<=x470)|x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	int16_t x475 = -1;
	volatile int32_t t118 = -5818608;

    t118 = (((x473<=x474)|x475)==x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 59U;
	volatile int64_t x479 = -1LL;
	static int16_t x480 = INT16_MIN;
	volatile int32_t t119 = -13;

    t119 = (((x477<=x478)|x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x482 = 24067035;
	uint64_t x483 = 3LLU;
	volatile int32_t t120 = 931078;

    t120 = (((x481<=x482)|x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 94U;
	static volatile int8_t x486 = 2;
	int32_t x487 = -323745;
	uint32_t x488 = 19941U;

    t121 = (((x485<=x486)|x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -557070;
	volatile int64_t x490 = -1LL;
	volatile int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	static volatile int32_t t122 = -46941;

    t122 = (((x489<=x490)|x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int64_t x494 = -17038990802LL;
	int64_t x495 = INT64_MIN;
	int32_t x496 = 177;
	volatile int32_t t123 = -79270;

    t123 = (((x493<=x494)|x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -1;
	uint64_t x498 = 27537322LLU;
	static volatile int32_t x499 = INT32_MIN;
	int32_t t124 = 33536137;

    t124 = (((x497<=x498)|x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	uint32_t x503 = 126813U;
	int32_t t125 = -1046;

    t125 = (((x501<=x502)|x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	uint32_t x506 = UINT32_MAX;
	int64_t x507 = INT64_MIN;
	int32_t t126 = 0;

    t126 = (((x505<=x506)|x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	static volatile uint8_t x510 = 59U;
	uint16_t x511 = 791U;
	int32_t t127 = -193;

    t127 = (((x509<=x510)|x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	uint64_t x514 = 571LLU;
	static int64_t x515 = -4662096156167LL;
	int32_t x516 = INT32_MIN;
	int32_t t128 = 1822195;

    t128 = (((x513<=x514)|x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x518 = INT32_MAX;
	volatile int16_t x519 = INT16_MIN;
	uint32_t x520 = UINT32_MAX;
	int32_t t129 = -71327;

    t129 = (((x517<=x518)|x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -3;
	int16_t x522 = INT16_MIN;
	uint16_t x523 = 6859U;
	volatile int16_t x524 = 1;
	int32_t t130 = 27;

    t130 = (((x521<=x522)|x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	int64_t x526 = -1LL;
	volatile int16_t x527 = INT16_MIN;
	static int16_t x528 = -93;
	volatile int32_t t131 = -36;

    t131 = (((x525<=x526)|x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = 1U;
	int8_t x530 = -1;
	int8_t x531 = 40;
	int32_t t132 = 15079309;

    t132 = (((x529<=x530)|x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static volatile int16_t x534 = -1;
	int64_t x535 = INT64_MIN;
	static volatile uint32_t x536 = 3782U;
	int32_t t133 = -1579319;

    t133 = (((x533<=x534)|x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 4878131961LLU;
	uint16_t x538 = 17U;

    t134 = (((x537<=x538)|x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	volatile uint8_t x543 = 0U;
	volatile int32_t t135 = 6701887;

    t135 = (((x541<=x542)|x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x545 = 1;
	volatile int8_t x546 = -1;
	uint16_t x547 = 3U;
	uint64_t x548 = UINT64_MAX;

    t136 = (((x545<=x546)|x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MAX;
	int8_t x551 = -9;
	int32_t t137 = 212;

    t137 = (((x549<=x550)|x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = INT8_MIN;
	static volatile int16_t x556 = INT16_MAX;
	static volatile int32_t t138 = 2;

    t138 = (((x553<=x554)|x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 6492U;
	uint64_t x558 = 835LLU;
	static int16_t x559 = INT16_MIN;
	int8_t x560 = 1;

    t139 = (((x557<=x558)|x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 6488802LLU;
	int8_t x562 = -5;
	volatile int32_t t140 = 10992454;

    t140 = (((x561<=x562)|x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x565 = 48U;
	int8_t x566 = -2;
	int32_t x567 = 190707451;
	int64_t x568 = INT64_MIN;
	static volatile int32_t t141 = 129374429;

    t141 = (((x565<=x566)|x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	int8_t x570 = INT8_MIN;
	uint8_t x571 = UINT8_MAX;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t142 = -35134;

    t142 = (((x569<=x570)|x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int32_t x574 = -1;
	int32_t x575 = 0;
	volatile int32_t t143 = -6845676;

    t143 = (((x573<=x574)|x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -5;
	uint16_t x578 = UINT16_MAX;
	int16_t x579 = -1;
	int32_t x580 = INT32_MIN;
	volatile int32_t t144 = 21471169;

    t144 = (((x577<=x578)|x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 7U;
	volatile uint64_t x582 = UINT64_MAX;
	int8_t x583 = -1;
	int8_t x584 = INT8_MAX;

    t145 = (((x581<=x582)|x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -11015;
	uint32_t x586 = UINT32_MAX;
	uint64_t x587 = UINT64_MAX;
	static int64_t x588 = 2003501189890725LL;
	volatile int32_t t146 = -218;

    t146 = (((x585<=x586)|x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MAX;
	static int16_t x590 = INT16_MIN;
	int32_t x592 = INT32_MIN;

    t147 = (((x589<=x590)|x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int64_t x594 = INT64_MAX;
	int16_t x595 = INT16_MAX;
	int8_t x596 = -1;
	int32_t t148 = 0;

    t148 = (((x593<=x594)|x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 88U;
	uint16_t x598 = 0U;
	volatile int64_t x599 = -172719237631LL;
	int8_t x600 = INT8_MIN;

    t149 = (((x597<=x598)|x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	static uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MIN;
	int16_t x604 = INT16_MIN;
	static volatile int32_t t150 = 1;

    t150 = (((x601<=x602)|x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 7;
	int8_t x606 = INT8_MIN;
	static volatile int32_t t151 = -2061746;

    t151 = (((x605<=x606)|x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x612 = UINT8_MAX;
	volatile int32_t t152 = -250965882;

    t152 = (((x609<=x610)|x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	int8_t x614 = -1;
	volatile int64_t x615 = -7754573424872LL;
	uint32_t x616 = UINT32_MAX;
	int32_t t153 = 1;

    t153 = (((x613<=x614)|x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MIN;
	volatile int32_t x620 = INT32_MIN;
	volatile int32_t t154 = -20211;

    t154 = (((x617<=x618)|x619)==x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x623 = -1LL;
	int16_t x624 = 25;
	static int32_t t155 = -1039798;

    t155 = (((x621<=x622)|x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -3;
	int8_t x626 = -1;
	static int32_t x627 = INT32_MAX;
	volatile uint8_t x628 = UINT8_MAX;

    t156 = (((x625<=x626)|x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 177172975U;
	uint8_t x630 = 3U;
	static uint16_t x631 = 9240U;
	static uint64_t x632 = 6003832666326LLU;
	static volatile int32_t t157 = 47271556;

    t157 = (((x629<=x630)|x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x634 = 29781914869392LLU;
	volatile int64_t x635 = -1LL;
	static int16_t x636 = -13;
	static int32_t t158 = -7181484;

    t158 = (((x633<=x634)|x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	int32_t x638 = INT32_MIN;
	int8_t x639 = INT8_MIN;
	uint64_t x640 = 30575LLU;
	int32_t t159 = -35095264;

    t159 = (((x637<=x638)|x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 12U;
	volatile int16_t x642 = INT16_MIN;
	int32_t x643 = -1;
	static volatile int64_t x644 = INT64_MIN;
	int32_t t160 = -415316;

    t160 = (((x641<=x642)|x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	int8_t x646 = -1;
	int64_t x648 = -733148921821LL;
	static int32_t t161 = 287;

    t161 = (((x645<=x646)|x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint8_t x650 = UINT8_MAX;
	int32_t x651 = INT32_MIN;
	static uint16_t x652 = 476U;
	volatile int32_t t162 = 466016340;

    t162 = (((x649<=x650)|x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MIN;
	int16_t x656 = INT16_MIN;

    t163 = (((x653<=x654)|x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x658 = 18U;
	int64_t x659 = -1032LL;
	int64_t x660 = INT64_MIN;

    t164 = (((x657<=x658)|x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x662 = UINT32_MAX;

    t165 = (((x661<=x662)|x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x666 = -1;
	int16_t x667 = -1;
	volatile int16_t x668 = -212;
	volatile int32_t t166 = -42505;

    t166 = (((x665<=x666)|x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = -1;
	volatile int16_t x670 = 2;
	static int16_t x671 = -1;
	static volatile int16_t x672 = 1;

    t167 = (((x669<=x670)|x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	volatile uint32_t x674 = UINT32_MAX;
	volatile int64_t x675 = INT64_MAX;
	volatile int64_t x676 = -1LL;
	int32_t t168 = -20223497;

    t168 = (((x673<=x674)|x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	uint16_t x678 = UINT16_MAX;
	uint8_t x679 = UINT8_MAX;
	volatile int32_t t169 = -407;

    t169 = (((x677<=x678)|x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MAX;
	static int8_t x682 = INT8_MIN;
	int8_t x683 = INT8_MIN;
	int32_t x684 = 918514;
	int32_t t170 = 19648;

    t170 = (((x681<=x682)|x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	volatile int16_t x686 = 1147;
	volatile int16_t x687 = INT16_MAX;
	uint32_t x688 = UINT32_MAX;

    t171 = (((x685<=x686)|x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = INT8_MIN;
	int64_t x690 = INT64_MIN;
	static int64_t x691 = 91183558499LL;
	static uint64_t x692 = UINT64_MAX;
	int32_t t172 = 64729994;

    t172 = (((x689<=x690)|x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = 0U;
	int64_t x695 = INT64_MIN;
	volatile int16_t x696 = INT16_MIN;
	volatile int32_t t173 = 851174;

    t173 = (((x693<=x694)|x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	int64_t x698 = -1LL;
	int64_t x700 = INT64_MIN;
	volatile int32_t t174 = 10;

    t174 = (((x697<=x698)|x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 216511506924LL;
	volatile int16_t x702 = 0;
	int32_t x703 = -1;
	int64_t x704 = -280LL;
	volatile int32_t t175 = 290352;

    t175 = (((x701<=x702)|x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	uint16_t x707 = 0U;
	volatile int32_t x708 = -3;

    t176 = (((x705<=x706)|x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x710 = 241692370;
	int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	int32_t t177 = -2227358;

    t177 = (((x709<=x710)|x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	int64_t x714 = INT64_MIN;
	int64_t x715 = INT64_MIN;
	int32_t t178 = 180701887;

    t178 = (((x713<=x714)|x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	int64_t x718 = INT64_MIN;
	int32_t x719 = -5691732;
	static uint8_t x720 = 90U;

    t179 = (((x717<=x718)|x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = -1;
	int16_t x723 = 82;
	volatile uint64_t x724 = UINT64_MAX;
	volatile int32_t t180 = 920372527;

    t180 = (((x721<=x722)|x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x725 = UINT8_MAX;
	int32_t x726 = 390017764;
	uint16_t x727 = 3362U;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t181 = 1977;

    t181 = (((x725<=x726)|x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 0;
	uint32_t x730 = 2U;
	static int32_t x731 = INT32_MAX;

    t182 = (((x729<=x730)|x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x733 = INT16_MIN;
	uint32_t x734 = UINT32_MAX;
	int16_t x735 = -11376;
	uint16_t x736 = 0U;
	volatile int32_t t183 = -567;

    t183 = (((x733<=x734)|x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x737 = 4U;
	volatile int32_t t184 = 146715;

    t184 = (((x737<=x738)|x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	volatile uint64_t x743 = 964644602024353125LLU;
	int32_t x744 = INT32_MIN;
	static int32_t t185 = -3017322;

    t185 = (((x741<=x742)|x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x745 = 5U;
	int64_t x746 = INT64_MIN;
	static volatile uint64_t x748 = 1LLU;
	int32_t t186 = 37174;

    t186 = (((x745<=x746)|x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	int8_t x750 = -2;
	int64_t x752 = -801005LL;
	volatile int32_t t187 = 0;

    t187 = (((x749<=x750)|x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 39U;
	int32_t x754 = INT32_MIN;
	int16_t x755 = -1;
	volatile int8_t x756 = -1;
	int32_t t188 = 222089563;

    t188 = (((x753<=x754)|x755)==x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = INT16_MIN;
	volatile int16_t x760 = -1;
	volatile int32_t t189 = -1426506;

    t189 = (((x757<=x758)|x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x761 = 12970U;
	int32_t x762 = -1;

    t190 = (((x761<=x762)|x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	uint8_t x766 = 91U;
	int32_t x767 = INT32_MIN;

    t191 = (((x765<=x766)|x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 930426203106564LLU;
	int16_t x770 = INT16_MIN;
	static int32_t x771 = INT32_MIN;
	volatile int16_t x772 = INT16_MIN;

    t192 = (((x769<=x770)|x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MAX;
	int16_t x774 = INT16_MIN;
	uint64_t x775 = 13601180061LLU;
	int8_t x776 = -58;
	static volatile int32_t t193 = -583319;

    t193 = (((x773<=x774)|x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = 3U;
	volatile uint32_t x778 = 1U;
	int16_t x779 = -1;
	int8_t x780 = INT8_MIN;
	int32_t t194 = -1;

    t194 = (((x777<=x778)|x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	static int64_t x782 = -1LL;
	int32_t x783 = 11411;
	volatile int32_t t195 = -605;

    t195 = (((x781<=x782)|x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = UINT8_MAX;
	int64_t x786 = INT64_MIN;
	static volatile int8_t x787 = INT8_MAX;
	static volatile int32_t t196 = 2;

    t196 = (((x785<=x786)|x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	static uint16_t x790 = UINT16_MAX;
	int8_t x791 = 0;
	volatile int64_t x792 = INT64_MIN;

    t197 = (((x789<=x790)|x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x794 = 2;
	int32_t x795 = 0;
	uint8_t x796 = 5U;
	static volatile int32_t t198 = -804;

    t198 = (((x793<=x794)|x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x797 = INT16_MIN;
	int32_t x798 = INT32_MIN;
	int8_t x799 = -3;
	int32_t x800 = INT32_MAX;
	int32_t t199 = -1;

    t199 = (((x797<=x798)|x799)==x800);

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

