
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

volatile int16_t x10 = 0;
volatile int8_t x11 = INT8_MAX;
static int32_t x12 = INT32_MAX;
int8_t x17 = 32;
static int16_t x18 = -50;
static uint32_t x33 = 678U;
uint32_t x35 = UINT32_MAX;
static uint64_t x36 = UINT64_MAX;
volatile uint64_t t7 = 44LLU;
int64_t x37 = INT64_MIN;
volatile uint8_t x39 = UINT8_MAX;
static uint64_t x41 = 59256540270378LLU;
volatile uint8_t x42 = 70U;
static int32_t t9 = -442;
static volatile int64_t x46 = INT64_MIN;
uint32_t x53 = UINT32_MAX;
int16_t x56 = -1;
volatile int32_t t12 = 86;
int8_t x60 = INT8_MIN;
int32_t t13 = -159524;
static int64_t x70 = 24297LL;
int16_t x73 = -1;
int8_t x74 = INT8_MIN;
volatile int32_t t17 = 40402;
int32_t x77 = INT32_MAX;
static int32_t x78 = -1;
int16_t x81 = -11;
int16_t x88 = -1;
int32_t t20 = 6721;
static uint32_t t21 = 4161772U;
int32_t x98 = INT32_MAX;
static volatile uint32_t x106 = 5U;
uint8_t x107 = 3U;
uint8_t x112 = 25U;
volatile int64_t t29 = 4LL;
int16_t x125 = INT16_MIN;
volatile uint64_t x129 = UINT64_MAX;
uint8_t x130 = UINT8_MAX;
int16_t x134 = INT16_MIN;
volatile int32_t t34 = 2970742;
volatile uint32_t t35 = 88513721U;
int64_t x150 = -30LL;
uint8_t x151 = UINT8_MAX;
uint32_t x160 = UINT32_MAX;
volatile uint32_t t38 = 16U;
static uint8_t x166 = UINT8_MAX;
volatile int32_t x169 = INT32_MIN;
int32_t x172 = INT32_MIN;
static volatile int32_t x175 = INT32_MIN;
static int32_t t45 = 3220923;
int32_t x189 = INT32_MIN;
int8_t x191 = -1;
uint16_t x194 = 12900U;
static uint64_t x196 = UINT64_MAX;
int32_t t48 = -30540;
static int64_t x202 = -1LL;
static int64_t t49 = 3550670108791019876LL;
int64_t t50 = 1417485LL;
static volatile int8_t x212 = -39;
volatile int32_t t51 = -184;
static int32_t t53 = 61;
int64_t x227 = INT64_MIN;
int64_t x231 = 2399591076531LL;
int32_t x234 = -553;
static uint64_t x243 = UINT64_MAX;
static int32_t t59 = 691931;
uint64_t x247 = 10LLU;
volatile int32_t t60 = -220544;
volatile int16_t x249 = -1;
volatile int64_t x250 = INT64_MIN;
volatile int32_t t61 = 183129733;
volatile int16_t x258 = -104;
int16_t x263 = INT16_MAX;
static int8_t x264 = INT8_MIN;
int32_t x266 = -249;
uint8_t x277 = 1U;
int64_t x278 = INT64_MIN;
static volatile uint32_t x280 = 103U;
volatile int64_t x281 = 0LL;
volatile int32_t x283 = INT32_MIN;
int16_t x289 = 3009;
static int8_t x290 = INT8_MIN;
static int16_t x296 = INT16_MAX;
static int16_t x300 = INT16_MIN;
static int32_t t73 = -105383;
static int16_t x302 = -1;
uint32_t x306 = UINT32_MAX;
uint16_t x310 = 2291U;
int32_t x311 = 739742;
int64_t x312 = 20436773734977095LL;
int64_t t76 = 13367062076772LL;
volatile int32_t x316 = INT32_MIN;
int32_t t77 = 3229;
uint32_t x323 = UINT32_MAX;
int64_t x327 = 4569011589LL;
uint8_t x331 = UINT8_MAX;
volatile uint32_t x332 = 22419U;
uint8_t x336 = 5U;
int32_t x342 = -1;
volatile int64_t x346 = INT64_MIN;
int16_t x348 = INT16_MAX;
static int8_t x350 = -1;
uint16_t x360 = UINT16_MAX;
volatile int32_t t88 = 2047009;
uint8_t x373 = 34U;
volatile int32_t x374 = INT32_MIN;
volatile int32_t x376 = 56716;
static int16_t x379 = 13621;
uint16_t x384 = 6U;
volatile uint64_t t96 = 124346881659LLU;
int8_t x397 = INT8_MAX;
static int16_t x401 = -1;
int8_t x403 = INT8_MAX;
static int8_t x407 = -1;
int8_t x408 = INT8_MIN;
volatile int32_t t99 = -1;
int8_t x410 = INT8_MIN;
int32_t t100 = 2345;
volatile uint32_t x413 = 941U;
int16_t x415 = -1;
int64_t x416 = 2LL;
volatile int8_t x418 = -1;
volatile int32_t t102 = -6120;
static uint8_t x427 = UINT8_MAX;
static int32_t x428 = INT32_MIN;
volatile int64_t x431 = -119014068254134675LL;
int64_t x434 = INT64_MAX;
static int64_t x438 = 798LL;
static int64_t x441 = 1030168860LL;
uint16_t x448 = 29702U;
volatile int32_t t109 = -415;
int32_t t111 = -173;
static volatile int64_t t113 = -1027955070780604LL;
int16_t x474 = -648;
volatile uint64_t x475 = 1581036071658112LLU;
int32_t x476 = INT32_MIN;
int16_t x481 = -1;
volatile int8_t x485 = 0;
int32_t x499 = 0;
uint16_t x503 = UINT16_MAX;
static volatile int16_t x509 = -1;
uint32_t x511 = 385U;
int32_t x513 = -1;
uint8_t x515 = UINT8_MAX;
int32_t t126 = -5;
int8_t x518 = INT8_MIN;
uint64_t x526 = 120800368304633LLU;
int8_t x528 = INT8_MAX;
int64_t x534 = 6670257923624LL;
int32_t x539 = -1;
int32_t t131 = 8845797;
uint32_t x543 = 12247U;
static int16_t x544 = 460;
uint64_t x548 = 1LLU;
uint64_t t133 = 1360862118LLU;
int64_t t135 = -1616275632111823LL;
int16_t x559 = INT16_MIN;
uint8_t x563 = UINT8_MAX;
static int16_t x566 = -5256;
int8_t x571 = INT8_MAX;
int64_t x572 = INT64_MAX;
uint64_t x583 = 0LLU;
static int32_t x584 = INT32_MIN;
static uint32_t x586 = 88U;
int64_t x592 = INT64_MAX;
static volatile int64_t t144 = 49LL;
volatile int64_t x600 = 1LL;
uint8_t x604 = 5U;
volatile int32_t t147 = -69471;
uint64_t t150 = 30958LLU;
volatile uint32_t t151 = 115U;
static int32_t x626 = -1;
int16_t x628 = 43;
uint16_t x643 = UINT16_MAX;
int8_t x648 = INT8_MIN;
static int32_t x653 = -34;
int32_t t160 = -1397345;
static int32_t x657 = -1;
uint32_t x668 = 1910171U;
volatile int32_t t165 = -46;
static uint16_t x679 = 13474U;
int32_t t166 = -23;
int8_t x681 = -1;
int16_t x687 = INT16_MIN;
int8_t x689 = INT8_MIN;
static int16_t x692 = -2487;
int32_t t169 = 644230528;
uint8_t x693 = UINT8_MAX;
volatile int64_t t176 = -3775551312162100LL;
int8_t x724 = -20;
uint64_t x728 = 10483173567567LLU;
static volatile uint64_t t178 = 74894LLU;
int32_t x732 = -1;
volatile int32_t t179 = -59;
uint16_t x734 = 1419U;
uint8_t x739 = 14U;
uint8_t x740 = 111U;
static int32_t t181 = -1;
int16_t x743 = -24;
int32_t t182 = 11307;
volatile uint8_t x754 = 103U;
int64_t x760 = INT64_MIN;
uint8_t x765 = 1U;
uint16_t x768 = UINT16_MAX;
volatile int64_t x771 = INT64_MIN;
int16_t x778 = 11206;
uint8_t x779 = 4U;
int16_t x780 = INT16_MIN;
int32_t x782 = INT32_MIN;
volatile int32_t t191 = -14;
volatile int32_t t192 = -61536;
volatile int32_t x790 = -1;
int8_t x793 = -1;
int32_t x795 = 207893387;
int64_t x797 = -13275LL;
volatile int64_t t195 = -24240130435LL;
volatile int8_t x804 = -22;
uint64_t x814 = UINT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 0U;
	int32_t x4 = -1;
	volatile int32_t t0 = 284;

    t0 = ((x1!=(x2&x3))/x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 81U;
	uint8_t x6 = 62U;
	static int8_t x7 = -1;
	int16_t x8 = -1;
	volatile int32_t t1 = -110890533;

    t1 = ((x5!=(x6&x7))/x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile int32_t t2 = -141;

    t2 = ((x9!=(x10&x11))/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 13U;
	uint8_t x14 = UINT8_MAX;
	uint64_t x15 = 222974LLU;
	uint16_t x16 = 25U;
	static volatile int32_t t3 = -346927;

    t3 = ((x13!=(x14&x15))/x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x19 = 689469183U;
	int64_t x20 = 2021757273247LL;
	volatile int64_t t4 = -92LL;

    t4 = ((x17!=(x18&x19))/x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 14746860LLU;
	volatile uint8_t x22 = UINT8_MAX;
	static int16_t x23 = INT16_MIN;
	static volatile int64_t x24 = -20036994494LL;
	volatile int64_t t5 = 0LL;

    t5 = ((x21!=(x22&x23))/x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 3;
	int32_t x30 = -41161010;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = 13;
	int32_t t6 = 38434409;

    t6 = ((x29!=(x30&x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x34 = -1;

    t7 = ((x33!=(x34&x35))/x36);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x38 = INT8_MIN;
	uint32_t x40 = 120U;
	uint32_t t8 = 2030U;

    t8 = ((x37!=(x38&x39))/x40);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;

    t9 = ((x41!=(x42&x43))/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = -1;
	int8_t x47 = INT8_MIN;
	volatile uint32_t x48 = 2147027676U;
	volatile uint32_t t10 = 7566U;

    t10 = ((x45!=(x46&x47))/x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 160U;
	static uint8_t x52 = 3U;
	int32_t t11 = 5;

    t11 = ((x49!=(x50&x51))/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 3666U;

    t12 = ((x53!=(x54&x55))/x56);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -1;
	volatile int16_t x58 = INT16_MAX;
	uint8_t x59 = 125U;

    t13 = ((x57!=(x58&x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	int8_t x62 = 2;
	int16_t x63 = -1;
	int64_t x64 = INT64_MAX;
	static volatile int64_t t14 = 21761048140LL;

    t14 = ((x61!=(x62&x63))/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MAX;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = INT64_MAX;
	static volatile int16_t x68 = 14435;
	volatile int32_t t15 = 239095457;

    t15 = ((x65!=(x66&x67))/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = INT8_MIN;
	static volatile int32_t x71 = -1;
	uint16_t x72 = 39U;
	int32_t t16 = -6117;

    t16 = ((x69!=(x70&x71))/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x75 = 119U;
	volatile int8_t x76 = INT8_MAX;

    t17 = ((x73!=(x74&x75))/x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x79 = INT64_MAX;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t18 = 54416016976409LL;

    t18 = ((x77!=(x78&x79))/x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = -1LL;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = 131503919745679LL;
	volatile int64_t t19 = -28LL;

    t19 = ((x81!=(x82&x83))/x84);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -6729008;
	int64_t x86 = -16946839285018LL;
	int16_t x87 = INT16_MIN;

    t20 = ((x85!=(x86&x87))/x88);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = 230037394489LL;
	volatile int16_t x90 = 7;
	int64_t x91 = INT64_MIN;
	static uint32_t x92 = 23782054U;

    t21 = ((x89!=(x90&x91))/x92);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x94 = 0U;
	uint8_t x95 = 34U;
	volatile int32_t x96 = -188120046;
	volatile int32_t t22 = 2816;

    t22 = ((x93!=(x94&x95))/x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = INT64_MAX;
	uint32_t x99 = UINT32_MAX;
	static volatile int64_t x100 = INT64_MIN;
	static volatile int64_t t23 = 6LL;

    t23 = ((x97!=(x98&x99))/x100);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x101 = 9884534831LLU;
	int32_t x102 = -10;
	int16_t x103 = -1;
	uint8_t x104 = UINT8_MAX;
	int32_t t24 = 1;

    t24 = ((x101!=(x102&x103))/x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x105 = -1LL;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t25 = -8844951;

    t25 = ((x105!=(x106&x107))/x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x109 = -399941020731LL;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MAX;
	int32_t t26 = 7;

    t26 = ((x109!=(x110&x111))/x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = 0U;
	int32_t x116 = -1;
	int32_t t27 = 32586795;

    t27 = ((x113!=(x114&x115))/x116);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x117 = 4U;
	int8_t x118 = INT8_MAX;
	static int8_t x119 = INT8_MAX;
	uint16_t x120 = 436U;
	volatile int32_t t28 = 3583;

    t28 = ((x117!=(x118&x119))/x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x121 = INT32_MIN;
	static int64_t x122 = INT64_MIN;
	static int64_t x123 = INT64_MIN;
	static int64_t x124 = -1LL;

    t29 = ((x121!=(x122&x123))/x124);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x126 = 23;
	int32_t x127 = -1;
	uint64_t x128 = 13LLU;
	volatile uint64_t t30 = 210133932706033LLU;

    t30 = ((x125!=(x126&x127))/x128);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x131 = 7951931101426283LL;
	int8_t x132 = INT8_MIN;
	int32_t t31 = 3732;

    t31 = ((x129!=(x130&x131))/x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	uint16_t x135 = UINT16_MAX;
	static int16_t x136 = INT16_MIN;
	int32_t t32 = 12734977;

    t32 = ((x133!=(x134&x135))/x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = INT32_MIN;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = 0U;
	static volatile int64_t x140 = -218078375738735113LL;
	volatile int64_t t33 = 3617122910317LL;

    t33 = ((x137!=(x138&x139))/x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 26U;
	volatile uint64_t x142 = 7021980757114716410LLU;
	static int16_t x143 = INT16_MIN;
	volatile int32_t x144 = INT32_MIN;

    t34 = ((x141!=(x142&x143))/x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x145 = INT8_MIN;
	uint16_t x146 = 1U;
	static volatile int16_t x147 = 380;
	uint32_t x148 = UINT32_MAX;

    t35 = ((x145!=(x146&x147))/x148);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x149 = INT64_MIN;
	int8_t x152 = -1;
	volatile int32_t t36 = 12151;

    t36 = ((x149!=(x150&x151))/x152);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x153 = 24959U;
	volatile uint8_t x154 = 4U;
	uint32_t x155 = 583U;
	uint8_t x156 = UINT8_MAX;
	int32_t t37 = -1781611;

    t37 = ((x153!=(x154&x155))/x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = UINT8_MAX;
	static volatile uint8_t x158 = 1U;
	static int32_t x159 = INT32_MIN;

    t38 = ((x157!=(x158&x159))/x160);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x161 = -328442;
	uint16_t x162 = 288U;
	uint32_t x163 = 53U;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t39 = 984052094405258338LLU;

    t39 = ((x161!=(x162&x163))/x164);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = 4748;
	int16_t x167 = -1;
	int16_t x168 = INT16_MAX;
	volatile int32_t t40 = 61010;

    t40 = ((x165!=(x166&x167))/x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x170 = UINT32_MAX;
	static volatile int64_t x171 = INT64_MAX;
	int32_t t41 = 2;

    t41 = ((x169!=(x170&x171))/x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x173 = 439209817152LLU;
	int64_t x174 = 903065573LL;
	int64_t x176 = 5717317983398LL;
	static volatile int64_t t42 = -375051219813LL;

    t42 = ((x173!=(x174&x175))/x176);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	volatile int32_t x179 = -1;
	static int32_t x180 = -1;
	volatile int32_t t43 = 557844;

    t43 = ((x177!=(x178&x179))/x180);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x181 = UINT8_MAX;
	static uint8_t x182 = 6U;
	volatile int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t44 = -2;

    t44 = ((x181!=(x182&x183))/x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = UINT64_MAX;
	int8_t x186 = -1;
	int32_t x187 = INT32_MIN;
	static int8_t x188 = INT8_MIN;

    t45 = ((x185!=(x186&x187))/x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x190 = UINT64_MAX;
	static uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 25706687U;

    t46 = ((x189!=(x190&x191))/x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x193 = -1;
	uint32_t x195 = 12481500U;
	uint64_t t47 = 7370155033651LLU;

    t47 = ((x193!=(x194&x195))/x196);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = -1;
	int8_t x198 = -1;
	uint8_t x199 = 23U;
	int16_t x200 = -13236;

    t48 = ((x197!=(x198&x199))/x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x201 = -6;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = -1LL;

    t49 = ((x201!=(x202&x203))/x204);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = 783796242;
	int8_t x206 = 3;
	int64_t x207 = INT64_MIN;
	int64_t x208 = -877900799LL;

    t50 = ((x205!=(x206&x207))/x208);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x209 = 362943344021367LL;
	static int32_t x210 = INT32_MAX;
	uint64_t x211 = UINT64_MAX;

    t51 = ((x209!=(x210&x211))/x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = 27;
	int8_t x214 = 0;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MIN;
	static volatile int64_t t52 = -8383953LL;

    t52 = ((x213!=(x214&x215))/x216);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = 48;
	static uint8_t x218 = 9U;
	uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = INT16_MIN;

    t53 = ((x217!=(x218&x219))/x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x221 = -1;
	static uint64_t x222 = 30495768859884LLU;
	static volatile int16_t x223 = -1;
	uint8_t x224 = 1U;
	static volatile int32_t t54 = 19;

    t54 = ((x221!=(x222&x223))/x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x225 = INT64_MIN;
	uint8_t x226 = UINT8_MAX;
	static int32_t x228 = -19184;
	volatile int32_t t55 = 30;

    t55 = ((x225!=(x226&x227))/x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = UINT64_MAX;
	int64_t x230 = INT64_MAX;
	volatile uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t56 = 388955120U;

    t56 = ((x229!=(x230&x231))/x232);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = INT16_MAX;
	uint64_t x235 = 5023992002317392252LLU;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t57 = -2699870;

    t57 = ((x233!=(x234&x235))/x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = INT32_MIN;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t58 = 51972807;

    t58 = ((x237!=(x238&x239))/x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MAX;
	volatile int16_t x244 = INT16_MAX;

    t59 = ((x241!=(x242&x243))/x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = 2;
	uint32_t x246 = UINT32_MAX;
	static uint8_t x248 = 19U;

    t60 = ((x245!=(x246&x247))/x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x251 = INT32_MIN;
	static uint8_t x252 = 2U;

    t61 = ((x249!=(x250&x251))/x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x253 = 1;
	int16_t x254 = INT16_MIN;
	static int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t62 = -93;

    t62 = ((x253!=(x254&x255))/x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 17150U;
	int8_t x259 = INT8_MAX;
	static int8_t x260 = INT8_MIN;
	int32_t t63 = 0;

    t63 = ((x257!=(x258&x259))/x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x261 = UINT16_MAX;
	uint64_t x262 = 6689716758366LLU;
	static volatile int32_t t64 = 12757;

    t64 = ((x261!=(x262&x263))/x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x265 = 669541084254817LL;
	static volatile uint8_t x267 = 29U;
	static int16_t x268 = 393;
	static int32_t t65 = -785243;

    t65 = ((x265!=(x266&x267))/x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 23105U;
	int64_t x270 = -55578LL;
	volatile uint64_t x271 = 1443LLU;
	int32_t x272 = INT32_MIN;
	volatile int32_t t66 = -1223;

    t66 = ((x269!=(x270&x271))/x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x273 = 526962458U;
	int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	uint8_t x276 = UINT8_MAX;
	int32_t t67 = 4013720;

    t67 = ((x273!=(x274&x275))/x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x279 = -9167383;
	uint32_t t68 = 83674U;

    t68 = ((x277!=(x278&x279))/x280);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x282 = -84368357;
	int32_t x284 = -54741;
	int32_t t69 = 4;

    t69 = ((x281!=(x282&x283))/x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x285 = 6581LL;
	uint32_t x286 = 3876U;
	uint16_t x287 = UINT16_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t70 = -135;

    t70 = ((x285!=(x286&x287))/x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x291 = INT16_MIN;
	static volatile int16_t x292 = -1;
	static int32_t t71 = -4;

    t71 = ((x289!=(x290&x291))/x292);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = -6;
	int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	volatile int32_t t72 = -5982;

    t72 = ((x293!=(x294&x295))/x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x297 = 10U;
	volatile uint32_t x298 = UINT32_MAX;
	static volatile int8_t x299 = -1;

    t73 = ((x297!=(x298&x299))/x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	static volatile int64_t t74 = -4967342LL;

    t74 = ((x301!=(x302&x303))/x304);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile int8_t x307 = 2;
	volatile int16_t x308 = -5125;
	int32_t t75 = -180013612;

    t75 = ((x305!=(x306&x307))/x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x309 = INT8_MAX;

    t76 = ((x309!=(x310&x311))/x312);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = -20517467;
	int64_t x314 = -1LL;
	int64_t x315 = -1LL;

    t77 = ((x313!=(x314&x315))/x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -7LL;
	int32_t x322 = INT32_MIN;
	int32_t x324 = -1;
	int32_t t78 = 233511393;

    t78 = ((x321!=(x322&x323))/x324);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MAX;
	int32_t x328 = 7;
	int32_t t79 = 403;

    t79 = ((x325!=(x326&x327))/x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = UINT16_MAX;
	int8_t x330 = -51;
	static uint32_t t80 = 6U;

    t80 = ((x329!=(x330&x331))/x332);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x333 = INT8_MIN;
	uint8_t x334 = 3U;
	uint64_t x335 = 355344LLU;
	volatile int32_t t81 = 6587233;

    t81 = ((x333!=(x334&x335))/x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = 100436782223153LL;
	static volatile int32_t x338 = -1;
	int32_t x339 = 159;
	uint8_t x340 = 14U;
	volatile int32_t t82 = -147178172;

    t82 = ((x337!=(x338&x339))/x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x341 = -1LL;
	uint16_t x343 = 4U;
	volatile uint16_t x344 = UINT16_MAX;
	int32_t t83 = -7;

    t83 = ((x341!=(x342&x343))/x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x345 = 195291109267LLU;
	int64_t x347 = -1LL;
	int32_t t84 = -28837;

    t84 = ((x345!=(x346&x347))/x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = 1;
	uint64_t x351 = 710881840LLU;
	uint32_t x352 = UINT32_MAX;
	uint32_t t85 = 50U;

    t85 = ((x349!=(x350&x351))/x352);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x353 = INT32_MIN;
	int32_t x354 = -5;
	static int64_t x355 = 354325483456000620LL;
	uint16_t x356 = UINT16_MAX;
	volatile int32_t t86 = -271247721;

    t86 = ((x353!=(x354&x355))/x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x357 = INT32_MIN;
	static int16_t x358 = INT16_MAX;
	uint16_t x359 = 8735U;
	volatile int32_t t87 = -258451070;

    t87 = ((x357!=(x358&x359))/x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	volatile int32_t x363 = 3672903;
	uint16_t x364 = 14U;

    t88 = ((x361!=(x362&x363))/x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = 21;
	volatile uint64_t x366 = 455139659LLU;
	int16_t x367 = -1;
	volatile int64_t x368 = INT64_MIN;
	int64_t t89 = -1692577668684LL;

    t89 = ((x365!=(x366&x367))/x368);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x369 = 1U;
	static volatile uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 1577U;
	int32_t x372 = INT32_MIN;
	volatile int32_t t90 = 851;

    t90 = ((x369!=(x370&x371))/x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x375 = INT64_MIN;
	int32_t t91 = 258819;

    t91 = ((x373!=(x374&x375))/x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	uint8_t x378 = 0U;
	int32_t x380 = -4008204;
	int32_t t92 = 6084;

    t92 = ((x377!=(x378&x379))/x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = -450339135752LL;
	int16_t x383 = INT16_MIN;
	static int32_t t93 = 101;

    t93 = ((x381!=(x382&x383))/x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = 11;
	volatile int8_t x386 = 14;
	uint8_t x387 = 122U;
	volatile int64_t x388 = -24382LL;
	int64_t t94 = 262LL;

    t94 = ((x385!=(x386&x387))/x388);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x389 = 22U;
	volatile int32_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	int32_t t95 = 282385919;

    t95 = ((x389!=(x390&x391))/x392);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x394 = 3U;
	int8_t x395 = -13;
	static uint64_t x396 = 117783LLU;

    t96 = ((x393!=(x394&x395))/x396);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x398 = INT16_MIN;
	uint8_t x399 = 9U;
	uint32_t x400 = 38477152U;
	static uint32_t t97 = 9588U;

    t97 = ((x397!=(x398&x399))/x400);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x402 = INT16_MIN;
	static int32_t x404 = INT32_MIN;
	int32_t t98 = -1;

    t98 = ((x401!=(x402&x403))/x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x405 = 57085104772034931LLU;
	int16_t x406 = 650;

    t99 = ((x405!=(x406&x407))/x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = 1755276567366699LLU;
	uint32_t x411 = 179555138U;
	int32_t x412 = INT32_MIN;

    t100 = ((x409!=(x410&x411))/x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x414 = 444U;
	int64_t t101 = 39827LL;

    t101 = ((x413!=(x414&x415))/x416);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x417 = INT64_MAX;
	volatile uint8_t x419 = 4U;
	static int32_t x420 = INT32_MIN;

    t102 = ((x417!=(x418&x419))/x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x421 = -16590326540LL;
	uint16_t x422 = 15605U;
	static int32_t x423 = -1;
	int64_t x424 = -180146376920158983LL;
	int64_t t103 = 14141LL;

    t103 = ((x421!=(x422&x423))/x424);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = -1;
	int32_t x426 = -16734;
	volatile int32_t t104 = -341;

    t104 = ((x425!=(x426&x427))/x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x429 = 278279567839793949LL;
	uint8_t x430 = 0U;
	int64_t x432 = 15566118LL;
	volatile int64_t t105 = 1343LL;

    t105 = ((x429!=(x430&x431))/x432);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = INT16_MIN;
	static int64_t x435 = 247675267LL;
	int32_t x436 = 2003;
	volatile int32_t t106 = 4077532;

    t106 = ((x433!=(x434&x435))/x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x437 = -515;
	uint64_t x439 = 108668971201LLU;
	volatile int16_t x440 = INT16_MAX;
	volatile int32_t t107 = 131363;

    t107 = ((x437!=(x438&x439))/x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x442 = INT8_MIN;
	static int16_t x443 = INT16_MIN;
	volatile int64_t x444 = 33335636189578LL;
	volatile int64_t t108 = 0LL;

    t108 = ((x441!=(x442&x443))/x444);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = 711;
	int64_t x446 = -1LL;
	uint16_t x447 = 1U;

    t109 = ((x445!=(x446&x447))/x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x449 = -54;
	static int16_t x450 = INT16_MIN;
	uint64_t x451 = UINT64_MAX;
	uint64_t x452 = 127LLU;
	volatile uint64_t t110 = 13LLU;

    t110 = ((x449!=(x450&x451))/x452);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x453 = INT8_MIN;
	uint8_t x454 = 68U;
	static int8_t x455 = -12;
	int32_t x456 = INT32_MIN;

    t111 = ((x453!=(x454&x455))/x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x457 = 2106165613U;
	int32_t x458 = 324;
	volatile uint32_t x459 = 9114U;
	int8_t x460 = -1;
	volatile int32_t t112 = -98002;

    t112 = ((x457!=(x458&x459))/x460);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = 28LL;
	int32_t x462 = INT32_MIN;
	volatile uint16_t x463 = 37U;
	static int64_t x464 = 534378112337222461LL;

    t113 = ((x461!=(x462&x463))/x464);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x465 = INT8_MIN;
	uint8_t x466 = 3U;
	uint32_t x467 = UINT32_MAX;
	volatile uint16_t x468 = 116U;
	volatile int32_t t114 = 26687260;

    t114 = ((x465!=(x466&x467))/x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x469 = 329LLU;
	int16_t x470 = INT16_MAX;
	volatile uint8_t x471 = 21U;
	uint32_t x472 = 5465940U;
	volatile uint32_t t115 = 4134983U;

    t115 = ((x469!=(x470&x471))/x472);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = -159202708743863LL;
	static int32_t t116 = -29;

    t116 = ((x473!=(x474&x475))/x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x477 = -1;
	static uint8_t x478 = 24U;
	int64_t x479 = INT64_MIN;
	int32_t x480 = INT32_MAX;
	int32_t t117 = -87871321;

    t117 = ((x477!=(x478&x479))/x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x482 = INT16_MIN;
	uint64_t x483 = 205015863359060007LLU;
	uint64_t x484 = 14060282270319LLU;
	volatile uint64_t t118 = 6441935LLU;

    t118 = ((x481!=(x482&x483))/x484);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x486 = -12;
	static int32_t x487 = -1;
	int32_t x488 = INT32_MIN;
	int32_t t119 = 23160;

    t119 = ((x485!=(x486&x487))/x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = INT64_MIN;
	volatile int8_t x490 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	static uint32_t x492 = 1805U;
	volatile uint32_t t120 = 1U;

    t120 = ((x489!=(x490&x491))/x492);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = 12U;
	static int64_t x494 = -1LL;
	int64_t x495 = INT64_MIN;
	static int32_t x496 = -25;
	static volatile int32_t t121 = 0;

    t121 = ((x493!=(x494&x495))/x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x497 = -1895;
	uint8_t x498 = UINT8_MAX;
	int64_t x500 = INT64_MAX;
	volatile int64_t t122 = -2363547484930845LL;

    t122 = ((x497!=(x498&x499))/x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x501 = UINT32_MAX;
	static int8_t x502 = -1;
	int64_t x504 = 435LL;
	volatile int64_t t123 = -955075163817903453LL;

    t123 = ((x501!=(x502&x503))/x504);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x505 = 3534003466LLU;
	uint16_t x506 = UINT16_MAX;
	int32_t x507 = INT32_MAX;
	int8_t x508 = -2;
	volatile int32_t t124 = 2;

    t124 = ((x505!=(x506&x507))/x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x510 = -6825134;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t125 = 172686478LLU;

    t125 = ((x509!=(x510&x511))/x512);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x514 = INT64_MIN;
	static int16_t x516 = -1;

    t126 = ((x513!=(x514&x515))/x516);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x517 = UINT16_MAX;
	int8_t x519 = INT8_MAX;
	volatile int32_t x520 = 99793582;
	volatile int32_t t127 = 11025;

    t127 = ((x517!=(x518&x519))/x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x521 = 21U;
	int32_t x522 = 2822;
	volatile int32_t x523 = -1;
	int64_t x524 = -50305756288820447LL;
	static int64_t t128 = -235892LL;

    t128 = ((x521!=(x522&x523))/x524);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x527 = INT8_MIN;
	int32_t t129 = -582;

    t129 = ((x525!=(x526&x527))/x528);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x533 = 3;
	int16_t x535 = INT16_MAX;
	static uint8_t x536 = 8U;
	int32_t t130 = 1;

    t130 = ((x533!=(x534&x535))/x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x537 = 31U;
	int8_t x538 = -1;
	int16_t x540 = INT16_MIN;

    t131 = ((x537!=(x538&x539))/x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = 55U;
	volatile int16_t x542 = -366;
	volatile int32_t t132 = -7350;

    t132 = ((x541!=(x542&x543))/x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MIN;
	volatile uint64_t x546 = 7135323123111LLU;
	volatile uint32_t x547 = 3U;

    t133 = ((x545!=(x546&x547))/x548);

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MAX;
	int8_t x550 = 9;
	int16_t x551 = -1;
	int8_t x552 = INT8_MIN;
	volatile int32_t t134 = 7999;

    t134 = ((x549!=(x550&x551))/x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x553 = INT8_MAX;
	int64_t x554 = -409846847508LL;
	int64_t x555 = INT64_MIN;
	static int64_t x556 = -1388739613369LL;

    t135 = ((x553!=(x554&x555))/x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint16_t x557 = 1U;
	uint64_t x558 = UINT64_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t136 = 6981;

    t136 = ((x557!=(x558&x559))/x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MAX;
	uint64_t x564 = 202904702LLU;
	uint64_t t137 = 5826218LLU;

    t137 = ((x561!=(x562&x563))/x564);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x565 = -1;
	int64_t x567 = INT64_MIN;
	static int64_t x568 = INT64_MAX;
	int64_t t138 = -1788444LL;

    t138 = ((x565!=(x566&x567))/x568);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x569 = -59;
	uint8_t x570 = UINT8_MAX;
	static volatile int64_t t139 = 482743139LL;

    t139 = ((x569!=(x570&x571))/x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x573 = -3;
	int64_t x574 = INT64_MIN;
	uint16_t x575 = 15U;
	uint32_t x576 = 926245U;
	uint32_t t140 = 12U;

    t140 = ((x573!=(x574&x575))/x576);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x577 = -3;
	int64_t x578 = INT64_MIN;
	static volatile uint64_t x579 = 451032349410LLU;
	int32_t x580 = INT32_MIN;
	volatile int32_t t141 = -48;

    t141 = ((x577!=(x578&x579))/x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x581 = 7;
	volatile int16_t x582 = INT16_MIN;
	static volatile int32_t t142 = -60626980;

    t142 = ((x581!=(x582&x583))/x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x585 = INT16_MAX;
	uint32_t x587 = 1113786106U;
	int16_t x588 = 56;
	volatile int32_t t143 = 24;

    t143 = ((x585!=(x586&x587))/x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x589 = 279996298668570976LL;
	volatile uint64_t x590 = 6894LLU;
	volatile int32_t x591 = -1;

    t144 = ((x589!=(x590&x591))/x592);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x593 = INT64_MIN;
	static uint16_t x594 = 404U;
	static uint64_t x595 = 9016455LLU;
	uint16_t x596 = 262U;
	static volatile int32_t t145 = 725;

    t145 = ((x593!=(x594&x595))/x596);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = INT32_MAX;
	int32_t x598 = 111740352;
	uint16_t x599 = 15U;
	volatile int64_t t146 = 71789LL;

    t146 = ((x597!=(x598&x599))/x600);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = 593168U;
	int32_t x602 = -1;
	int16_t x603 = INT16_MIN;

    t147 = ((x601!=(x602&x603))/x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x605 = 15788U;
	static int32_t x606 = 465;
	static int8_t x607 = INT8_MAX;
	int64_t x608 = -3461218835038816145LL;
	volatile int64_t t148 = 90820LL;

    t148 = ((x605!=(x606&x607))/x608);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x609 = -1;
	int16_t x610 = INT16_MAX;
	int32_t x611 = 44296;
	volatile uint16_t x612 = 3U;
	int32_t t149 = 17;

    t149 = ((x609!=(x610&x611))/x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x613 = UINT8_MAX;
	uint32_t x614 = 102U;
	uint64_t x615 = 55630LLU;
	uint64_t x616 = 2130782194LLU;

    t150 = ((x613!=(x614&x615))/x616);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x617 = -224029LL;
	uint64_t x618 = 6932290304LLU;
	uint64_t x619 = 21229LLU;
	uint32_t x620 = 641370U;

    t151 = ((x617!=(x618&x619))/x620);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x621 = 3U;
	uint16_t x622 = 19U;
	volatile uint16_t x623 = UINT16_MAX;
	static int16_t x624 = 5084;
	int32_t t152 = 43;

    t152 = ((x621!=(x622&x623))/x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x625 = INT32_MAX;
	uint32_t x627 = UINT32_MAX;
	volatile int32_t t153 = -6622772;

    t153 = ((x625!=(x626&x627))/x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x629 = UINT32_MAX;
	int16_t x630 = INT16_MAX;
	uint32_t x631 = UINT32_MAX;
	int32_t x632 = INT32_MAX;
	int32_t t154 = 40747;

    t154 = ((x629!=(x630&x631))/x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x633 = UINT16_MAX;
	int16_t x634 = INT16_MAX;
	uint16_t x635 = 313U;
	static int64_t x636 = -3603942240287LL;
	int64_t t155 = -10LL;

    t155 = ((x633!=(x634&x635))/x636);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x637 = INT16_MIN;
	uint32_t x638 = UINT32_MAX;
	uint16_t x639 = 1793U;
	int32_t x640 = -1;
	int32_t t156 = 196;

    t156 = ((x637!=(x638&x639))/x640);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x641 = INT32_MAX;
	int8_t x642 = 17;
	int32_t x644 = INT32_MIN;
	volatile int32_t t157 = -3695;

    t157 = ((x641!=(x642&x643))/x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x645 = INT64_MIN;
	uint64_t x646 = 68LLU;
	int16_t x647 = 73;
	volatile int32_t t158 = -310847323;

    t158 = ((x645!=(x646&x647))/x648);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = -1;
	static uint8_t x650 = UINT8_MAX;
	static int16_t x651 = -1;
	int8_t x652 = -6;
	volatile int32_t t159 = 336494;

    t159 = ((x649!=(x650&x651))/x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x654 = 2001759;
	int64_t x655 = INT64_MAX;
	int8_t x656 = INT8_MIN;

    t160 = ((x653!=(x654&x655))/x656);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x658 = INT16_MIN;
	uint8_t x659 = 10U;
	uint8_t x660 = UINT8_MAX;
	static volatile int32_t t161 = 2986;

    t161 = ((x657!=(x658&x659))/x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x661 = 7U;
	uint32_t x662 = 707U;
	volatile int32_t x663 = INT32_MIN;
	uint8_t x664 = 41U;
	int32_t t162 = 56250;

    t162 = ((x661!=(x662&x663))/x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x665 = INT16_MIN;
	volatile int8_t x666 = INT8_MAX;
	volatile int8_t x667 = 0;
	uint32_t t163 = 45512U;

    t163 = ((x665!=(x666&x667))/x668);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x669 = INT32_MAX;
	volatile uint32_t x670 = 337038430U;
	static uint64_t x671 = 52861679037LLU;
	volatile int8_t x672 = -1;
	static volatile int32_t t164 = 109631;

    t164 = ((x669!=(x670&x671))/x672);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x673 = INT32_MAX;
	static int8_t x674 = -1;
	int16_t x675 = -1;
	int8_t x676 = -1;

    t165 = ((x673!=(x674&x675))/x676);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x677 = INT16_MAX;
	uint8_t x678 = 0U;
	static volatile int16_t x680 = INT16_MAX;

    t166 = ((x677!=(x678&x679))/x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x682 = INT8_MIN;
	uint32_t x683 = 301744U;
	int16_t x684 = -1;
	int32_t t167 = -1;

    t167 = ((x681!=(x682&x683))/x684);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = 6;
	int32_t x686 = -1;
	int8_t x688 = INT8_MAX;
	int32_t t168 = -78078;

    t168 = ((x685!=(x686&x687))/x688);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x690 = 5586066U;
	static int32_t x691 = INT32_MIN;

    t169 = ((x689!=(x690&x691))/x692);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x694 = UINT64_MAX;
	int32_t x695 = 5;
	volatile int16_t x696 = -1;
	int32_t t170 = -7528;

    t170 = ((x693!=(x694&x695))/x696);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x697 = 5115097U;
	int16_t x698 = INT16_MAX;
	static int16_t x699 = -40;
	int64_t x700 = 50230LL;
	int64_t t171 = -107650166LL;

    t171 = ((x697!=(x698&x699))/x700);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = INT64_MAX;
	volatile uint16_t x703 = 12U;
	volatile int32_t x704 = -1;
	volatile int32_t t172 = -46310;

    t172 = ((x701!=(x702&x703))/x704);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x705 = INT64_MIN;
	static volatile int16_t x706 = INT16_MIN;
	uint32_t x707 = 506793750U;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t173 = 8528201;

    t173 = ((x705!=(x706&x707))/x708);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x709 = INT8_MAX;
	volatile int8_t x710 = INT8_MAX;
	uint8_t x711 = 8U;
	int32_t x712 = 45584;
	int32_t t174 = 98;

    t174 = ((x709!=(x710&x711))/x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x713 = -1;
	int8_t x714 = INT8_MIN;
	static volatile uint8_t x715 = 7U;
	int16_t x716 = 737;
	int32_t t175 = -29343;

    t175 = ((x713!=(x714&x715))/x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x717 = 1219158342871110228LL;
	int16_t x718 = INT16_MAX;
	int8_t x719 = -5;
	volatile int64_t x720 = -1LL;

    t176 = ((x717!=(x718&x719))/x720);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x721 = 4LLU;
	static uint64_t x722 = UINT64_MAX;
	int8_t x723 = INT8_MAX;
	volatile int32_t t177 = -236686144;

    t177 = ((x721!=(x722&x723))/x724);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = -12565634623873LL;
	static int8_t x726 = 8;
	int16_t x727 = INT16_MAX;

    t178 = ((x725!=(x726&x727))/x728);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x729 = INT64_MAX;
	int32_t x730 = INT32_MIN;
	static int8_t x731 = INT8_MIN;

    t179 = ((x729!=(x730&x731))/x732);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x733 = UINT32_MAX;
	static volatile int16_t x735 = -1;
	static volatile int8_t x736 = INT8_MAX;
	int32_t t180 = -3211744;

    t180 = ((x733!=(x734&x735))/x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = -1;

    t181 = ((x737!=(x738&x739))/x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x741 = INT64_MAX;
	static uint16_t x742 = 0U;
	int32_t x744 = -1;

    t182 = ((x741!=(x742&x743))/x744);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x745 = 294014391889LL;
	int16_t x746 = INT16_MAX;
	volatile uint64_t x747 = 25536LLU;
	static int32_t x748 = 3;
	int32_t t183 = -1;

    t183 = ((x745!=(x746&x747))/x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x749 = -1;
	uint8_t x750 = 79U;
	int16_t x751 = INT16_MIN;
	volatile int64_t x752 = INT64_MIN;
	volatile int64_t t184 = -4728504419925LL;

    t184 = ((x749!=(x750&x751))/x752);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x753 = -1;
	volatile int32_t x755 = -1;
	int8_t x756 = INT8_MIN;
	static int32_t t185 = -1904813;

    t185 = ((x753!=(x754&x755))/x756);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = INT64_MIN;
	uint64_t x758 = 811887LLU;
	int16_t x759 = INT16_MAX;
	int64_t t186 = 58LL;

    t186 = ((x757!=(x758&x759))/x760);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x761 = 49U;
	int64_t x762 = INT64_MIN;
	int16_t x763 = 2539;
	volatile int16_t x764 = INT16_MIN;
	volatile int32_t t187 = 4798653;

    t187 = ((x761!=(x762&x763))/x764);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x766 = -169278382509235LL;
	static uint32_t x767 = 0U;
	volatile int32_t t188 = 186658418;

    t188 = ((x765!=(x766&x767))/x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x769 = INT16_MIN;
	int64_t x770 = -152156336599158LL;
	int64_t x772 = INT64_MIN;
	static int64_t t189 = 771031383LL;

    t189 = ((x769!=(x770&x771))/x772);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x777 = -1;
	volatile int32_t t190 = -13797;

    t190 = ((x777!=(x778&x779))/x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x781 = UINT16_MAX;
	int8_t x783 = -1;
	uint8_t x784 = 6U;

    t191 = ((x781!=(x782&x783))/x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = INT8_MIN;
	static int32_t x786 = -414;
	int32_t x787 = INT32_MAX;
	uint8_t x788 = 22U;

    t192 = ((x785!=(x786&x787))/x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x789 = 100539071LLU;
	int8_t x791 = INT8_MAX;
	uint64_t x792 = 7826705980LLU;
	static uint64_t t193 = 7178122427LLU;

    t193 = ((x789!=(x790&x791))/x792);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x794 = -1;
	int32_t x796 = -3007;
	int32_t t194 = 1;

    t194 = ((x793!=(x794&x795))/x796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x798 = 3;
	int32_t x799 = -1;
	volatile int64_t x800 = -1LL;

    t195 = ((x797!=(x798&x799))/x800);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x801 = INT64_MIN;
	int16_t x802 = -1;
	static int32_t x803 = INT32_MIN;
	int32_t t196 = 5;

    t196 = ((x801!=(x802&x803))/x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x805 = 49U;
	volatile uint64_t x806 = 2871618012144LLU;
	volatile int16_t x807 = -1;
	int64_t x808 = INT64_MIN;
	volatile int64_t t197 = -450LL;

    t197 = ((x805!=(x806&x807))/x808);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x809 = UINT16_MAX;
	volatile int16_t x810 = INT16_MIN;
	volatile uint16_t x811 = UINT16_MAX;
	int64_t x812 = INT64_MIN;
	volatile int64_t t198 = 46274251617LL;

    t198 = ((x809!=(x810&x811))/x812);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x813 = 61LLU;
	uint64_t x815 = UINT64_MAX;
	static int32_t x816 = -1;
	int32_t t199 = 1616720;

    t199 = ((x813!=(x814&x815))/x816);

    if (t199 != -1) { NG(); } else { ; }
	
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

