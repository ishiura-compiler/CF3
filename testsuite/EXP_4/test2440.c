
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

int16_t x1 = -1;
volatile uint32_t x4 = UINT32_MAX;
int32_t t0 = -1;
int16_t x12 = INT16_MIN;
static int16_t x18 = 263;
volatile uint8_t x21 = 7U;
int64_t x23 = -1LL;
volatile uint64_t x32 = UINT64_MAX;
int64_t x33 = INT64_MIN;
volatile int16_t x34 = INT16_MIN;
int32_t x37 = -30862;
volatile int8_t x40 = INT8_MIN;
int16_t x41 = INT16_MIN;
static int64_t x42 = INT64_MIN;
int8_t x44 = INT8_MAX;
volatile int32_t x46 = -1;
volatile int64_t x53 = 49398424335LL;
volatile int16_t x60 = -322;
static uint16_t x64 = 1U;
uint16_t x68 = UINT16_MAX;
volatile int32_t t16 = 1057316808;
int8_t x75 = -1;
uint8_t x80 = 1U;
static int8_t x88 = INT8_MIN;
static int64_t x91 = INT64_MIN;
int16_t x97 = 1;
uint64_t x100 = 67048037948103LLU;
uint8_t x103 = UINT8_MAX;
int32_t x105 = INT32_MIN;
static volatile int64_t x106 = 795773471239LL;
uint16_t x107 = UINT16_MAX;
volatile int64_t x115 = -1LL;
int16_t x117 = INT16_MIN;
static volatile int32_t x124 = INT32_MIN;
uint64_t x127 = UINT64_MAX;
volatile int32_t t30 = INT32_MIN;
uint32_t x129 = 341078211U;
int8_t x131 = 26;
uint32_t x134 = 2001U;
int8_t x139 = -3;
int32_t t33 = 59;
uint64_t t34 = UINT64_MAX;
uint16_t x147 = 10U;
volatile int32_t t35 = -206239;
int32_t x169 = INT32_MIN;
uint16_t x171 = 914U;
int16_t x175 = -4;
static volatile int32_t x180 = INT32_MAX;
volatile int64_t x181 = INT64_MAX;
static volatile uint32_t x191 = 688U;
static uint8_t x194 = 1U;
int64_t x205 = 15106579248428392LL;
int32_t x208 = INT32_MIN;
int64_t t48 = 1361168955213303507LL;
int64_t x219 = INT64_MAX;
int8_t x233 = INT8_MIN;
uint32_t x234 = 32157U;
volatile int64_t x235 = INT64_MIN;
volatile int32_t t55 = -3248;
static volatile uint64_t x241 = UINT64_MAX;
volatile int32_t x245 = 5962292;
int8_t x248 = INT8_MIN;
volatile int8_t x252 = 6;
int16_t x253 = INT16_MAX;
int32_t x257 = INT32_MAX;
int8_t x261 = 1;
int32_t x273 = INT32_MAX;
uint16_t x274 = UINT16_MAX;
int32_t t64 = INT32_MAX;
int8_t x283 = INT8_MIN;
int8_t x302 = -1;
int64_t x314 = INT64_MIN;
int16_t x318 = 1;
static int8_t x319 = INT8_MAX;
volatile int32_t x320 = INT32_MIN;
int32_t t74 = -3145075;
uint64_t x327 = 61LLU;
uint16_t x329 = 9U;
volatile uint16_t x330 = UINT16_MAX;
static int16_t x336 = INT16_MIN;
volatile int32_t x344 = INT32_MIN;
static int32_t t80 = -1;
int8_t x345 = INT8_MIN;
uint16_t x350 = 0U;
volatile int16_t x351 = INT16_MAX;
int64_t x352 = INT64_MIN;
static int8_t x355 = 3;
int32_t t84 = INT32_MIN;
int32_t x364 = INT32_MIN;
uint64_t x367 = 52666497601LLU;
int8_t x368 = 3;
volatile int8_t x369 = INT8_MAX;
int32_t x370 = INT32_MIN;
volatile int16_t x371 = -1;
uint8_t x381 = 0U;
int32_t x386 = 104991;
int32_t x392 = INT32_MAX;
int32_t x408 = 83713729;
int64_t x412 = -669960LL;
int32_t t98 = -1056302062;
int64_t t99 = INT64_MIN;
int32_t t100 = 756018575;
int32_t t101 = -1792080;
volatile int8_t x434 = INT8_MAX;
int8_t x437 = INT8_MIN;
int16_t x446 = -1;
uint16_t x450 = 31U;
int8_t x451 = INT8_MIN;
int32_t t106 = 9;
int32_t x460 = 83;
static volatile int32_t t108 = INT32_MIN;
int64_t x462 = -1516663918232358238LL;
static volatile int32_t t109 = -10;
volatile uint16_t x470 = UINT16_MAX;
uint16_t x490 = 1923U;
volatile int16_t x497 = INT16_MAX;
volatile uint32_t x498 = 506715562U;
uint8_t x513 = UINT8_MAX;
int8_t x517 = 1;
static int64_t x519 = -1LL;
volatile int16_t x521 = 4276;
int16_t x524 = 354;
int16_t x527 = INT16_MIN;
volatile int32_t t125 = 54695;
int32_t t128 = -214073016;
volatile uint16_t x541 = UINT16_MAX;
int64_t x546 = -2698LL;
static int16_t x553 = 12;
static int32_t x559 = INT32_MAX;
int8_t x560 = 52;
static int16_t x564 = INT16_MIN;
int8_t x592 = 5;
volatile int16_t x596 = INT16_MIN;
uint64_t x597 = UINT64_MAX;
volatile int32_t t143 = 17;
int8_t x612 = -1;
int8_t x613 = 7;
int16_t x617 = -1;
int16_t x623 = INT16_MIN;
int16_t x629 = INT16_MIN;
volatile int32_t x633 = INT32_MAX;
int16_t x649 = 13599;
static int8_t x667 = -1;
uint16_t x684 = UINT16_MAX;
int16_t x724 = INT16_MIN;
int64_t x726 = INT64_MIN;
static int16_t x732 = -475;
int8_t x736 = 1;
static int64_t x740 = -8346481109913LL;
static int16_t x745 = -12616;
uint8_t x746 = UINT8_MAX;
volatile int8_t x749 = 5;
volatile int32_t x750 = INT32_MAX;
int16_t x752 = -1;
int32_t t175 = 3;
static volatile int32_t t176 = -211;
int8_t x758 = -7;
static uint32_t x759 = 466721U;
int32_t t177 = -2258711;
uint32_t x763 = 2U;
int64_t x765 = -1072106112681148LL;
int8_t x770 = -2;
uint8_t x771 = 30U;
int64_t x774 = INT64_MAX;
int16_t x776 = INT16_MIN;
int32_t x777 = 3;
static uint16_t x781 = UINT16_MAX;
uint8_t x784 = 57U;
uint8_t x798 = 0U;
uint16_t x799 = 9U;
uint64_t x800 = 41LLU;
uint16_t x803 = UINT16_MAX;
int32_t t188 = INT32_MIN;
int32_t x805 = -5590;
int16_t x808 = -23;
static uint64_t t192 = 3196401827842603LLU;
volatile int32_t t193 = 106912;
int32_t t194 = -876259026;
static uint32_t x831 = 1U;
uint16_t x834 = 17199U;
volatile int32_t t196 = -1968389;
static int32_t t197 = INT32_MAX;
int64_t x842 = 1LL;
volatile uint32_t t199 = 4028643U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;

    t0 = (x1/(x2!=(x3|x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 1;
	int16_t x6 = 1749;
	int16_t x7 = INT16_MAX;
	volatile uint16_t x8 = 1U;
	volatile int32_t t1 = 792210693;

    t1 = (x5/(x6!=(x7|x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 59U;
	uint64_t x10 = 9752770713052849LLU;
	int16_t x11 = -1;
	static int32_t t2 = 3910;

    t2 = (x9/(x10!=(x11|x12)));

    if (t2 != 59) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 4U;
	volatile int32_t x14 = INT32_MIN;
	static int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MIN;
	static volatile uint32_t t3 = 12960056U;

    t3 = (x13/(x14!=(x15|x16)));

    if (t3 != 4U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1718260643LL;
	static int16_t x19 = -1;
	int8_t x20 = -42;
	int64_t t4 = 3LL;

    t4 = (x17/(x18!=(x19|x20)));

    if (t4 != -1718260643LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int8_t x24 = INT8_MIN;
	static int32_t t5 = 18261;

    t5 = (x21/(x22!=(x23|x24)));

    if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 6141U;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	static int32_t x28 = INT32_MIN;
	volatile uint32_t t6 = 24U;

    t6 = (x25/(x26!=(x27|x28)));

    if (t6 != 6141U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 1459;
	uint16_t x30 = 0U;
	volatile int32_t x31 = INT32_MIN;
	volatile int32_t t7 = 109484;

    t7 = (x29/(x30!=(x31|x32)));

    if (t7 != 1459) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x35 = 7U;
	volatile int32_t x36 = INT32_MAX;
	static int64_t t8 = INT64_MIN;

    t8 = (x33/(x34!=(x35|x36)));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -3606;
	int8_t x39 = -1;
	static int32_t t9 = 9158;

    t9 = (x37/(x38!=(x39|x40)));

    if (t9 != -30862) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x43 = INT16_MIN;
	int32_t t10 = 0;

    t10 = (x41/(x42!=(x43|x44)));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 19U;
	int64_t x47 = 4033568047247LL;
	volatile int64_t x48 = INT64_MAX;
	volatile int32_t t11 = -1583760;

    t11 = (x45/(x46!=(x47|x48)));

    if (t11 != 19) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 4358U;
	static int64_t x50 = INT64_MIN;
	uint64_t x51 = 157496489LLU;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = -75752;

    t12 = (x49/(x50!=(x51|x52)));

    if (t12 != 4358) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	static int16_t x56 = -1;
	static volatile int64_t t13 = 1212191726426691LL;

    t13 = (x53/(x54!=(x55|x56)));

    if (t13 != 49398424335LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 1099;
	int8_t x58 = -1;
	static int32_t x59 = INT32_MIN;
	volatile int32_t t14 = 427;

    t14 = (x57/(x58!=(x59|x60)));

    if (t14 != 1099) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x61 = UINT8_MAX;
	static volatile int8_t x62 = -51;
	int64_t x63 = -11416264244202LL;
	volatile int32_t t15 = -1004;

    t15 = (x61/(x62!=(x63|x64)));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1;
	int16_t x66 = -1;
	uint32_t x67 = 1U;

    t16 = (x65/(x66!=(x67|x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = 0;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -71509668;

    t17 = (x69/(x70!=(x71|x72)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = INT8_MIN;
	volatile int32_t x74 = -8875;
	uint8_t x76 = 37U;
	int32_t t18 = -1;

    t18 = (x73/(x74!=(x75|x76)));

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	uint8_t x78 = UINT8_MAX;
	uint8_t x79 = 21U;
	volatile int32_t t19 = 59497918;

    t19 = (x77/(x78!=(x79|x80)));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	volatile int32_t t20 = INT32_MIN;

    t20 = (x85/(x86!=(x87|x88)));

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MAX;
	int32_t x92 = -469660;
	static volatile uint64_t t21 = UINT64_MAX;

    t21 = (x89/(x90!=(x91|x92)));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = -2467073LL;
	volatile int32_t t22 = 222;

    t22 = (x93/(x94!=(x95|x96)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	volatile int32_t t23 = -12;

    t23 = (x97/(x98!=(x99|x100)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x101 = 2240U;
	int16_t x102 = INT16_MIN;
	int16_t x104 = -1;
	uint32_t t24 = 317991U;

    t24 = (x101/(x102!=(x103|x104)));

    if (t24 != 2240U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x108 = UINT16_MAX;
	int32_t t25 = INT32_MIN;

    t25 = (x105/(x106!=(x107|x108)));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x109 = 1U;
	int32_t x110 = INT32_MAX;
	uint16_t x111 = 38U;
	uint16_t x112 = 3011U;
	uint32_t t26 = 7678U;

    t26 = (x109/(x110!=(x111|x112)));

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	static int32_t x114 = 473830;
	int32_t x116 = INT32_MAX;
	volatile int64_t t27 = INT64_MIN;

    t27 = (x113/(x114!=(x115|x116)));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x118 = UINT16_MAX;
	uint16_t x119 = 437U;
	int64_t x120 = INT64_MIN;
	int32_t t28 = 1;

    t28 = (x117/(x118!=(x119|x120)));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x121 = -1;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	static int32_t t29 = 1220558;

    t29 = (x121/(x122!=(x123|x124)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = INT32_MIN;
	volatile int16_t x126 = INT16_MAX;
	static volatile int16_t x128 = -1;

    t30 = (x125/(x126!=(x127|x128)));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x130 = UINT64_MAX;
	static int64_t x132 = -3186LL;
	volatile uint32_t t31 = 37273429U;

    t31 = (x129/(x130!=(x131|x132)));

    if (t31 != 341078211U) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -46;

    t32 = (x133/(x134!=(x135|x136)));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	uint32_t x138 = 21150091U;
	volatile int64_t x140 = INT64_MIN;

    t33 = (x137/(x138!=(x139|x140)));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = 28004397246622LL;
	int32_t x143 = -1;
	static volatile int32_t x144 = -1;

    t34 = (x141/(x142!=(x143|x144)));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -1;
	volatile int8_t x146 = -27;
	uint8_t x148 = UINT8_MAX;

    t35 = (x145/(x146!=(x147|x148)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x149 = INT64_MIN;
	uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 18U;
	int64_t x152 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

    t36 = (x149/(x150!=(x151|x152)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x157 = 2U;
	static volatile int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t37 = -14;

    t37 = (x157/(x158!=(x159|x160)));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	int64_t x162 = INT64_MAX;
	int32_t x163 = INT32_MIN;
	static int64_t x164 = INT64_MIN;
	static volatile int32_t t38 = 213210404;

    t38 = (x161/(x162!=(x163|x164)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MAX;
	volatile int64_t x167 = INT64_MIN;
	int16_t x168 = 72;
	volatile int64_t t39 = INT64_MAX;

    t39 = (x165/(x166!=(x167|x168)));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x170 = -1;
	int8_t x172 = INT8_MAX;
	volatile int32_t t40 = INT32_MIN;

    t40 = (x169/(x170!=(x171|x172)));

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x173 = 256085040124360111LLU;
	int8_t x174 = -1;
	int32_t x176 = INT32_MIN;
	static volatile uint64_t t41 = 321348LLU;

    t41 = (x173/(x174!=(x175|x176)));

    if (t41 != 256085040124360111LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = UINT64_MAX;
	volatile int64_t x178 = -254117267LL;
	volatile int32_t x179 = INT32_MIN;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = (x177/(x178!=(x179|x180)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x182 = INT64_MAX;
	volatile uint8_t x183 = 42U;
	uint32_t x184 = 256896U;
	static int64_t t43 = INT64_MAX;

    t43 = (x181/(x182!=(x183|x184)));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x185 = -111400217177625196LL;
	static int8_t x186 = INT8_MIN;
	int16_t x187 = INT16_MAX;
	static int32_t x188 = -30102;
	volatile int64_t t44 = 1801LL;

    t44 = (x185/(x186!=(x187|x188)));

    if (t44 != -111400217177625196LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MIN;
	uint32_t x190 = 39119U;
	static int8_t x192 = -62;
	volatile int32_t t45 = -279348782;

    t45 = (x189/(x190!=(x191|x192)));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	int64_t x195 = INT64_MAX;
	volatile uint16_t x196 = 6U;
	volatile int32_t t46 = INT32_MIN;

    t46 = (x193/(x194!=(x195|x196)));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x201 = -1LL;
	int16_t x202 = 48;
	volatile int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t47 = 220703892719327LL;

    t47 = (x201/(x202!=(x203|x204)));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x206 = INT64_MAX;
	static int16_t x207 = INT16_MAX;

    t48 = (x205/(x206!=(x207|x208)));

    if (t48 != 15106579248428392LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MAX;
	int64_t x211 = -553163584LL;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t49 = INT32_MIN;

    t49 = (x209/(x210!=(x211|x212)));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MIN;
	uint32_t x214 = UINT32_MAX;
	static int8_t x215 = INT8_MIN;
	int64_t x216 = 3179LL;
	int32_t t50 = -20555;

    t50 = (x213/(x214!=(x215|x216)));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MAX;
	int32_t x218 = 9456;
	static int64_t x220 = 15292620968LL;
	static volatile int32_t t51 = INT32_MAX;

    t51 = (x217/(x218!=(x219|x220)));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MIN;
	static int64_t x222 = -288375LL;
	uint32_t x223 = 4U;
	static int8_t x224 = INT8_MIN;
	volatile int64_t t52 = INT64_MIN;

    t52 = (x221/(x222!=(x223|x224)));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x229 = 210542U;
	volatile int8_t x230 = INT8_MAX;
	int32_t x231 = INT32_MAX;
	volatile uint32_t x232 = 1U;
	volatile uint32_t t53 = 44322560U;

    t53 = (x229/(x230!=(x231|x232)));

    if (t53 != 210542U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x236 = UINT8_MAX;
	static volatile int32_t t54 = -2591374;

    t54 = (x233/(x234!=(x235|x236)));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	int64_t x239 = -146128LL;
	static volatile int16_t x240 = 1;

    t55 = (x237/(x238!=(x239|x240)));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x242 = -41;
	uint8_t x243 = 1U;
	int8_t x244 = INT8_MAX;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (x241/(x242!=(x243|x244)));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x246 = 380466721;
	uint32_t x247 = 29U;
	static volatile int32_t t57 = -7;

    t57 = (x245/(x246!=(x247|x248)));

    if (t57 != 5962292) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MIN;
	int32_t x250 = -38983156;
	int8_t x251 = INT8_MAX;
	volatile int32_t t58 = -22943525;

    t58 = (x249/(x250!=(x251|x252)));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x254 = INT64_MAX;
	int16_t x255 = -1;
	uint16_t x256 = 123U;
	int32_t t59 = 1928175;

    t59 = (x253/(x254!=(x255|x256)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x258 = 20;
	int32_t x259 = INT32_MIN;
	volatile int32_t x260 = -77586567;
	int32_t t60 = INT32_MAX;

    t60 = (x257/(x258!=(x259|x260)));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x262 = INT32_MIN;
	uint64_t x263 = 43LLU;
	volatile int8_t x264 = INT8_MIN;
	int32_t t61 = -1;

    t61 = (x261/(x262!=(x263|x264)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x265 = 30U;
	int16_t x266 = -26;
	uint8_t x267 = 6U;
	static int16_t x268 = 101;
	static int32_t t62 = 194860;

    t62 = (x265/(x266!=(x267|x268)));

    if (t62 != 30) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = 618912896LL;
	int64_t x270 = -1LL;
	volatile int16_t x271 = 1161;
	volatile int16_t x272 = INT16_MIN;
	static volatile int64_t t63 = 1468618732273LL;

    t63 = (x269/(x270!=(x271|x272)));

    if (t63 != 618912896LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MIN;

    t64 = (x273/(x274!=(x275|x276)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = -1LL;
	int64_t x278 = INT64_MIN;
	volatile int32_t x279 = -1;
	int64_t x280 = 155LL;
	volatile int64_t t65 = -4412465085661472980LL;

    t65 = (x277/(x278!=(x279|x280)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = -19;
	int32_t x282 = INT32_MAX;
	int64_t x284 = INT64_MAX;
	static volatile int32_t t66 = -3;

    t66 = (x281/(x282!=(x283|x284)));

    if (t66 != -19) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x285 = 17791466215496146LLU;
	int8_t x286 = 9;
	uint32_t x287 = 86504U;
	int32_t x288 = 149708288;
	volatile uint64_t t67 = 61305LLU;

    t67 = (x285/(x286!=(x287|x288)));

    if (t67 != 17791466215496146LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x289 = 37U;
	int64_t x290 = 1959411LL;
	uint8_t x291 = UINT8_MAX;
	uint8_t x292 = 69U;
	int32_t t68 = -333789;

    t68 = (x289/(x290!=(x291|x292)));

    if (t68 != 37) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x293 = INT32_MIN;
	static int64_t x294 = 1032980LL;
	volatile int32_t x295 = INT32_MAX;
	volatile int16_t x296 = -1;
	int32_t t69 = INT32_MIN;

    t69 = (x293/(x294!=(x295|x296)));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	uint64_t x299 = 11042696119400LLU;
	int32_t x300 = INT32_MAX;
	volatile int32_t t70 = -17086558;

    t70 = (x297/(x298!=(x299|x300)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = -1LL;
	int32_t x303 = INT32_MIN;
	static int8_t x304 = -49;
	volatile int64_t t71 = -15461LL;

    t71 = (x301/(x302!=(x303|x304)));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MIN;
	int16_t x310 = INT16_MIN;
	static volatile int64_t x311 = INT64_MIN;
	volatile uint32_t x312 = UINT32_MAX;
	volatile int32_t t72 = INT32_MIN;

    t72 = (x309/(x310!=(x311|x312)));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	uint32_t x315 = 17U;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t73 = -102;

    t73 = (x313/(x314!=(x315|x316)));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = 5;

    t74 = (x317/(x318!=(x319|x320)));

    if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x321 = 128347141U;
	int64_t x322 = -14419501681LL;
	static int16_t x323 = 281;
	uint32_t x324 = UINT32_MAX;
	static uint32_t t75 = 13528763U;

    t75 = (x321/(x322!=(x323|x324)));

    if (t75 != 128347141U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x325 = 39U;
	int32_t x326 = INT32_MIN;
	static int16_t x328 = INT16_MIN;
	static int32_t t76 = 95;

    t76 = (x325/(x326!=(x327|x328)));

    if (t76 != 39) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x331 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	int32_t t77 = -197428;

    t77 = (x329/(x330!=(x331|x332)));

    if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MAX;
	int32_t x335 = INT32_MIN;
	volatile int32_t t78 = -80456;

    t78 = (x333/(x334!=(x335|x336)));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x337 = 116U;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	volatile int8_t x340 = INT8_MAX;
	static volatile int32_t t79 = -4;

    t79 = (x337/(x338!=(x339|x340)));

    if (t79 != 116) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x341 = INT8_MIN;
	int16_t x342 = 18;
	uint8_t x343 = 41U;

    t80 = (x341/(x342!=(x343|x344)));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x346 = 2U;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;
	volatile int32_t t81 = -2;

    t81 = (x345/(x346!=(x347|x348)));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = INT16_MAX;
	static int32_t t82 = 46093;

    t82 = (x349/(x350!=(x351|x352)));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = 8LL;
	uint16_t x354 = 38U;
	volatile int32_t x356 = INT32_MIN;
	int64_t t83 = -220950278333LL;

    t83 = (x353/(x354!=(x355|x356)));

    if (t83 != 8LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x357 = INT32_MIN;
	int64_t x358 = 1LL;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = -1LL;

    t84 = (x357/(x358!=(x359|x360)));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = -37;
	int64_t x362 = -45770778LL;
	static int32_t x363 = -1;
	int32_t t85 = 48683402;

    t85 = (x361/(x362!=(x363|x364)));

    if (t85 != -37) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x365 = 0;
	int64_t x366 = INT64_MIN;
	volatile int32_t t86 = 15205;

    t86 = (x365/(x366!=(x367|x368)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x372 = 2;
	int32_t t87 = -11617246;

    t87 = (x369/(x370!=(x371|x372)));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int16_t x373 = INT16_MIN;
	static int64_t x374 = INT64_MAX;
	uint64_t x375 = 107828806632LLU;
	uint16_t x376 = 6U;
	int32_t t88 = -1;

    t88 = (x373/(x374!=(x375|x376)));

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = -1LL;
	volatile int16_t x378 = 491;
	volatile int32_t x379 = INT32_MIN;
	int32_t x380 = -232470;
	static int64_t t89 = 261786144LL;

    t89 = (x377/(x378!=(x379|x380)));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x382 = 16760;
	static uint16_t x383 = 18299U;
	volatile uint16_t x384 = 85U;
	static volatile int32_t t90 = 319;

    t90 = (x381/(x382!=(x383|x384)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x385 = INT32_MAX;
	int8_t x387 = INT8_MIN;
	int16_t x388 = -1;
	volatile int32_t t91 = INT32_MAX;

    t91 = (x385/(x386!=(x387|x388)));

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x389 = -1;
	volatile int64_t x390 = INT64_MIN;
	int8_t x391 = 1;
	static volatile int32_t t92 = -266;

    t92 = (x389/(x390!=(x391|x392)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = -1;
	static int8_t x394 = -1;
	static int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	volatile int32_t t93 = 58676;

    t93 = (x393/(x394!=(x395|x396)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x401 = -1LL;
	int64_t x402 = INT64_MAX;
	uint32_t x403 = 301508U;
	static int64_t x404 = INT64_MIN;
	volatile int64_t t94 = 849000551LL;

    t94 = (x401/(x402!=(x403|x404)));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x405 = 7LL;
	int64_t x406 = -1LL;
	int64_t x407 = INT64_MIN;
	static volatile int64_t t95 = 15056LL;

    t95 = (x405/(x406!=(x407|x408)));

    if (t95 != 7LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x409 = 28507798594182LLU;
	uint32_t x410 = UINT32_MAX;
	static int32_t x411 = INT32_MIN;
	uint64_t t96 = 47871625369969LLU;

    t96 = (x409/(x410!=(x411|x412)));

    if (t96 != 28507798594182LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x413 = 7U;
	static volatile uint32_t x414 = 9U;
	static uint16_t x415 = UINT16_MAX;
	int32_t x416 = 688;
	int32_t t97 = -116133;

    t97 = (x413/(x414!=(x415|x416)));

    if (t97 != 7) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x417 = UINT8_MAX;
	static int32_t x418 = -177;
	volatile int64_t x419 = -241348614609736671LL;
	static int64_t x420 = -2016015551LL;

    t98 = (x417/(x418!=(x419|x420)));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x421 = INT64_MIN;
	int64_t x422 = INT64_MIN;
	int64_t x423 = -1889930607763379LL;
	int8_t x424 = INT8_MAX;

    t99 = (x421/(x422!=(x423|x424)));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x425 = -47;
	volatile uint64_t x426 = 1949609156LLU;
	static volatile uint64_t x427 = 6921559829608201LLU;
	int8_t x428 = -1;

    t100 = (x425/(x426!=(x427|x428)));

    if (t100 != -47) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x430 = -1;
	uint8_t x431 = 18U;
	uint32_t x432 = 525064384U;

    t101 = (x429/(x430!=(x431|x432)));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x433 = 33849LLU;
	uint64_t x435 = 532LLU;
	int64_t x436 = INT64_MIN;
	static volatile uint64_t t102 = 1070218500LLU;

    t102 = (x433/(x434!=(x435|x436)));

    if (t102 != 33849LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x438 = 5050899430LL;
	static int32_t x439 = 1;
	uint16_t x440 = 59U;
	volatile int32_t t103 = 149435;

    t103 = (x437/(x438!=(x439|x440)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = -3;
	int64_t x442 = -1LL;
	static int8_t x443 = INT8_MIN;
	uint32_t x444 = UINT32_MAX;
	int32_t t104 = 425547294;

    t104 = (x441/(x442!=(x443|x444)));

    if (t104 != -3) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x445 = -145053855;
	int8_t x447 = 0;
	uint32_t x448 = 610U;
	volatile int32_t t105 = -7736;

    t105 = (x445/(x446!=(x447|x448)));

    if (t105 != -145053855) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x449 = UINT8_MAX;
	int64_t x452 = 112947731LL;

    t106 = (x449/(x450!=(x451|x452)));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x453 = INT16_MIN;
	int16_t x454 = INT16_MIN;
	volatile int16_t x455 = INT16_MIN;
	int32_t x456 = -1;
	volatile int32_t t107 = -1288409;

    t107 = (x453/(x454!=(x455|x456)));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x457 = INT32_MIN;
	static uint32_t x458 = UINT32_MAX;
	volatile uint64_t x459 = UINT64_MAX;

    t108 = (x457/(x458!=(x459|x460)));

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x461 = UINT16_MAX;
	volatile uint32_t x463 = 117775U;
	uint16_t x464 = 8U;

    t109 = (x461/(x462!=(x463|x464)));

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x465 = INT8_MIN;
	uint64_t x466 = 120LLU;
	static int8_t x467 = -1;
	int8_t x468 = INT8_MIN;
	int32_t t110 = 1;

    t110 = (x465/(x466!=(x467|x468)));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x469 = -1;
	int16_t x471 = INT16_MAX;
	volatile int16_t x472 = INT16_MAX;
	volatile int32_t t111 = 11;

    t111 = (x469/(x470!=(x471|x472)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x473 = INT64_MAX;
	int16_t x474 = INT16_MIN;
	volatile int64_t x475 = -1LL;
	volatile uint32_t x476 = 2794U;
	static int64_t t112 = INT64_MAX;

    t112 = (x473/(x474!=(x475|x476)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x477 = -1;
	volatile int8_t x478 = INT8_MIN;
	static int8_t x479 = INT8_MIN;
	static int8_t x480 = -18;
	volatile int32_t t113 = 23;

    t113 = (x477/(x478!=(x479|x480)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	uint32_t x483 = 4448U;
	volatile uint16_t x484 = 2U;
	volatile int64_t t114 = INT64_MIN;

    t114 = (x481/(x482!=(x483|x484)));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x485 = -247727LL;
	volatile uint8_t x486 = 38U;
	static int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MIN;
	volatile int64_t t115 = -4541801316LL;

    t115 = (x485/(x486!=(x487|x488)));

    if (t115 != -247727LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x489 = -13999365530018LL;
	volatile int64_t x491 = INT64_MIN;
	int32_t x492 = INT32_MAX;
	volatile int64_t t116 = -3822711877987350LL;

    t116 = (x489/(x490!=(x491|x492)));

    if (t116 != -13999365530018LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = INT32_MAX;
	int8_t x494 = INT8_MAX;
	int16_t x495 = INT16_MIN;
	int64_t x496 = INT64_MIN;
	static volatile int32_t t117 = INT32_MAX;

    t117 = (x493/(x494!=(x495|x496)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x499 = INT16_MAX;
	int8_t x500 = -1;
	int32_t t118 = -30496;

    t118 = (x497/(x498!=(x499|x500)));

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x501 = INT64_MIN;
	int8_t x502 = -1;
	int32_t x503 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	int64_t t119 = INT64_MIN;

    t119 = (x501/(x502!=(x503|x504)));

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = INT16_MIN;
	int64_t x506 = INT64_MAX;
	int32_t x507 = 6632;
	volatile uint8_t x508 = 11U;
	static volatile int32_t t120 = 233235;

    t120 = (x505/(x506!=(x507|x508)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x509 = -1;
	static int16_t x510 = INT16_MIN;
	int8_t x511 = -1;
	int64_t x512 = -1LL;
	volatile int32_t t121 = 7873;

    t121 = (x509/(x510!=(x511|x512)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x514 = 107266U;
	static int64_t x515 = INT64_MIN;
	static int32_t x516 = 1875;
	static volatile int32_t t122 = -14;

    t122 = (x513/(x514!=(x515|x516)));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x518 = 8552;
	static int8_t x520 = INT8_MIN;
	int32_t t123 = 880154;

    t123 = (x517/(x518!=(x519|x520)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x522 = INT16_MIN;
	int16_t x523 = 7411;
	volatile int32_t t124 = -17;

    t124 = (x521/(x522!=(x523|x524)));

    if (t124 != 4276) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	volatile int8_t x528 = INT8_MIN;

    t125 = (x525/(x526!=(x527|x528)));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x529 = -558;
	uint64_t x530 = 7223979261LLU;
	static uint16_t x531 = UINT16_MAX;
	volatile uint8_t x532 = 14U;
	int32_t t126 = 1149261;

    t126 = (x529/(x530!=(x531|x532)));

    if (t126 != -558) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x533 = 63U;
	volatile int32_t x534 = -1;
	int8_t x535 = INT8_MIN;
	int32_t x536 = -2594249;
	int32_t t127 = 29640;

    t127 = (x533/(x534!=(x535|x536)));

    if (t127 != 63) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = INT8_MAX;
	static int64_t x538 = -62896404404575LL;
	int16_t x539 = -119;
	static volatile uint64_t x540 = 36688584986274LLU;

    t128 = (x537/(x538!=(x539|x540)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x542 = 2U;
	volatile int16_t x543 = 1524;
	volatile int16_t x544 = 1;
	int32_t t129 = -268;

    t129 = (x541/(x542!=(x543|x544)));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = -1;
	int8_t x547 = INT8_MIN;
	int64_t x548 = -12309418097440LL;
	static volatile int32_t t130 = 3935916;

    t130 = (x545/(x546!=(x547|x548)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MIN;
	int8_t x551 = -1;
	uint16_t x552 = 15U;
	int64_t t131 = INT64_MIN;

    t131 = (x549/(x550!=(x551|x552)));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	uint16_t x556 = 1529U;
	static volatile int32_t t132 = 3470;

    t132 = (x553/(x554!=(x555|x556)));

    if (t132 != 12) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x557 = -1;
	int8_t x558 = -25;
	int32_t t133 = 2784278;

    t133 = (x557/(x558!=(x559|x560)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = 35039868649826LL;
	static int16_t x562 = INT16_MIN;
	volatile int64_t x563 = -1LL;
	volatile int64_t t134 = -10LL;

    t134 = (x561/(x562!=(x563|x564)));

    if (t134 != 35039868649826LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = -503998LL;
	volatile int32_t x566 = -1;
	uint8_t x567 = 16U;
	int16_t x568 = 1;
	volatile int64_t t135 = 11714333LL;

    t135 = (x565/(x566!=(x567|x568)));

    if (t135 != -503998LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x569 = INT16_MAX;
	static int16_t x570 = INT16_MIN;
	int32_t x571 = -31161;
	static int16_t x572 = INT16_MIN;
	static int32_t t136 = 8106;

    t136 = (x569/(x570!=(x571|x572)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = INT8_MAX;
	int16_t x574 = INT16_MIN;
	static int64_t x575 = -1LL;
	uint16_t x576 = UINT16_MAX;
	volatile int32_t t137 = 11664475;

    t137 = (x573/(x574!=(x575|x576)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x581 = 1LLU;
	int16_t x582 = INT16_MAX;
	static uint16_t x583 = UINT16_MAX;
	uint16_t x584 = 10533U;
	volatile uint64_t t138 = 703380839LLU;

    t138 = (x581/(x582!=(x583|x584)));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x585 = INT32_MIN;
	uint64_t x586 = 186426493140LLU;
	uint16_t x587 = UINT16_MAX;
	uint8_t x588 = UINT8_MAX;
	int32_t t139 = INT32_MIN;

    t139 = (x585/(x586!=(x587|x588)));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = 0;
	volatile uint16_t x591 = UINT16_MAX;
	volatile int32_t t140 = INT32_MIN;

    t140 = (x589/(x590!=(x591|x592)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x593 = -1;
	volatile uint16_t x594 = 1U;
	int64_t x595 = INT64_MIN;
	volatile int32_t t141 = -228686;

    t141 = (x593/(x594!=(x595|x596)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x598 = 6128U;
	uint32_t x599 = 4U;
	int8_t x600 = -19;
	static uint64_t t142 = UINT64_MAX;

    t142 = (x597/(x598!=(x599|x600)));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x605 = -1;
	int32_t x606 = INT32_MIN;
	static uint16_t x607 = 28U;
	int8_t x608 = INT8_MIN;

    t143 = (x605/(x606!=(x607|x608)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x609 = -120;
	int8_t x610 = 1;
	static uint64_t x611 = UINT64_MAX;
	volatile int32_t t144 = -293282658;

    t144 = (x609/(x610!=(x611|x612)));

    if (t144 != -120) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x614 = INT32_MAX;
	int16_t x615 = INT16_MIN;
	static int32_t x616 = -4642910;
	volatile int32_t t145 = -119118666;

    t145 = (x613/(x614!=(x615|x616)));

    if (t145 != 7) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x618 = INT8_MAX;
	volatile int32_t x619 = INT32_MIN;
	volatile uint8_t x620 = 25U;
	volatile int32_t t146 = -3713;

    t146 = (x617/(x618!=(x619|x620)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x621 = 15U;
	uint16_t x622 = UINT16_MAX;
	int64_t x624 = -1980544436972516465LL;
	volatile int32_t t147 = -1;

    t147 = (x621/(x622!=(x623|x624)));

    if (t147 != 15) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x625 = INT16_MIN;
	int8_t x626 = INT8_MAX;
	uint8_t x627 = 1U;
	int16_t x628 = INT16_MIN;
	volatile int32_t t148 = 4962405;

    t148 = (x625/(x626!=(x627|x628)));

    if (t148 != -32768) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x630 = 8U;
	int32_t x631 = INT32_MIN;
	static volatile uint16_t x632 = UINT16_MAX;
	static volatile int32_t t149 = 264;

    t149 = (x629/(x630!=(x631|x632)));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x634 = 2268U;
	uint16_t x635 = UINT16_MAX;
	int32_t x636 = INT32_MAX;
	volatile int32_t t150 = INT32_MAX;

    t150 = (x633/(x634!=(x635|x636)));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x637 = 1535;
	int8_t x638 = INT8_MAX;
	volatile uint64_t x639 = 20767556433520650LLU;
	static uint8_t x640 = 1U;
	static int32_t t151 = 348761873;

    t151 = (x637/(x638!=(x639|x640)));

    if (t151 != 1535) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x641 = 1944230617U;
	int32_t x642 = 194;
	volatile int16_t x643 = 1089;
	uint64_t x644 = UINT64_MAX;
	volatile uint32_t t152 = 11618256U;

    t152 = (x641/(x642!=(x643|x644)));

    if (t152 != 1944230617U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MIN;
	int8_t x652 = -1;
	volatile int32_t t153 = 10;

    t153 = (x649/(x650!=(x651|x652)));

    if (t153 != 13599) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x653 = -1LL;
	int32_t x654 = INT32_MAX;
	int64_t x655 = INT64_MIN;
	int8_t x656 = INT8_MAX;
	volatile int64_t t154 = -66524850680LL;

    t154 = (x653/(x654!=(x655|x656)));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x657 = 13U;
	int64_t x658 = -59448556156LL;
	int64_t x659 = INT64_MAX;
	int64_t x660 = INT64_MIN;
	volatile int32_t t155 = -278287396;

    t155 = (x657/(x658!=(x659|x660)));

    if (t155 != 13) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x661 = -1;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = INT64_MIN;
	static uint16_t x664 = UINT16_MAX;
	volatile int32_t t156 = -4;

    t156 = (x661/(x662!=(x663|x664)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x665 = -1LL;
	uint16_t x666 = 3228U;
	volatile int32_t x668 = INT32_MIN;
	static volatile int64_t t157 = 3LL;

    t157 = (x665/(x666!=(x667|x668)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x669 = UINT32_MAX;
	static uint32_t x670 = UINT32_MAX;
	static int64_t x671 = -2988851968305689LL;
	uint32_t x672 = 107351885U;
	volatile uint32_t t158 = UINT32_MAX;

    t158 = (x669/(x670!=(x671|x672)));

    if (t158 != UINT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x673 = 1;
	int16_t x674 = INT16_MIN;
	int8_t x675 = INT8_MIN;
	int16_t x676 = 25;
	volatile int32_t t159 = 75;

    t159 = (x673/(x674!=(x675|x676)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x677 = -1LL;
	uint8_t x678 = UINT8_MAX;
	volatile int16_t x679 = -1;
	int16_t x680 = INT16_MIN;
	static int64_t t160 = -21765LL;

    t160 = (x677/(x678!=(x679|x680)));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x681 = 1720325493LL;
	int16_t x682 = INT16_MAX;
	int16_t x683 = -1;
	volatile int64_t t161 = -723869474461LL;

    t161 = (x681/(x682!=(x683|x684)));

    if (t161 != 1720325493LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x693 = INT8_MAX;
	int32_t x694 = INT32_MAX;
	static int64_t x695 = INT64_MAX;
	uint8_t x696 = UINT8_MAX;
	int32_t t162 = 3197;

    t162 = (x693/(x694!=(x695|x696)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x697 = UINT8_MAX;
	volatile int32_t x698 = INT32_MAX;
	static volatile uint64_t x699 = 222841516804591583LLU;
	int64_t x700 = INT64_MAX;
	int32_t t163 = -419;

    t163 = (x697/(x698!=(x699|x700)));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MIN;
	int64_t x703 = INT64_MAX;
	uint32_t x704 = UINT32_MAX;
	volatile int32_t t164 = 0;

    t164 = (x701/(x702!=(x703|x704)));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x706 = INT8_MAX;
	volatile uint8_t x707 = UINT8_MAX;
	static int8_t x708 = INT8_MAX;
	volatile int32_t t165 = 5;

    t165 = (x705/(x706!=(x707|x708)));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x709 = -1;
	int32_t x710 = -1;
	volatile int8_t x711 = 1;
	uint16_t x712 = 0U;
	int32_t t166 = 486;

    t166 = (x709/(x710!=(x711|x712)));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x717 = 174;
	uint16_t x718 = 86U;
	int16_t x719 = INT16_MIN;
	int64_t x720 = INT64_MAX;
	volatile int32_t t167 = 207;

    t167 = (x717/(x718!=(x719|x720)));

    if (t167 != 174) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MIN;
	int8_t x723 = INT8_MIN;
	volatile int32_t t168 = -959784;

    t168 = (x721/(x722!=(x723|x724)));

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x725 = -1LL;
	int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MAX;
	static int64_t t169 = 15047084LL;

    t169 = (x725/(x726!=(x727|x728)));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x729 = UINT8_MAX;
	int64_t x730 = 8493085036LL;
	int64_t x731 = -1LL;
	volatile int32_t t170 = -508039171;

    t170 = (x729/(x730!=(x731|x732)));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x733 = -4LL;
	int32_t x734 = INT32_MAX;
	uint8_t x735 = 3U;
	static volatile int64_t t171 = 1716566861LL;

    t171 = (x733/(x734!=(x735|x736)));

    if (t171 != -4LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x737 = INT8_MAX;
	int16_t x738 = INT16_MIN;
	static int64_t x739 = INT64_MIN;
	volatile int32_t t172 = -261502;

    t172 = (x737/(x738!=(x739|x740)));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x741 = 1030;
	int64_t x742 = INT64_MAX;
	static int16_t x743 = INT16_MIN;
	uint64_t x744 = 48651324998LLU;
	int32_t t173 = 159285232;

    t173 = (x741/(x742!=(x743|x744)));

    if (t173 != 1030) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x747 = 5LLU;
	int8_t x748 = INT8_MIN;
	int32_t t174 = -4392;

    t174 = (x745/(x746!=(x747|x748)));

    if (t174 != -12616) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x751 = 11U;

    t175 = (x749/(x750!=(x751|x752)));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x753 = -1669;
	int32_t x754 = INT32_MIN;
	uint32_t x755 = 4816370U;
	int16_t x756 = -1;

    t176 = (x753/(x754!=(x755|x756)));

    if (t176 != -1669) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x757 = 231;
	uint16_t x760 = 11502U;

    t177 = (x757/(x758!=(x759|x760)));

    if (t177 != 231) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x761 = 28;
	int8_t x762 = 0;
	int64_t x764 = INT64_MIN;
	volatile int32_t t178 = 0;

    t178 = (x761/(x762!=(x763|x764)));

    if (t178 != 28) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x766 = INT16_MIN;
	static int64_t x767 = INT64_MAX;
	volatile uint32_t x768 = 7975U;
	int64_t t179 = -386925LL;

    t179 = (x765/(x766!=(x767|x768)));

    if (t179 != -1072106112681148LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x769 = INT64_MAX;
	static int16_t x772 = -12790;
	int64_t t180 = INT64_MAX;

    t180 = (x769/(x770!=(x771|x772)));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x773 = -1;
	volatile int64_t x775 = INT64_MIN;
	volatile int32_t t181 = -5885306;

    t181 = (x773/(x774!=(x775|x776)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x778 = -1LL;
	int64_t x779 = INT64_MIN;
	int8_t x780 = INT8_MAX;
	int32_t t182 = 172;

    t182 = (x777/(x778!=(x779|x780)));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x782 = INT8_MIN;
	int32_t x783 = INT32_MIN;
	static int32_t t183 = -100721;

    t183 = (x781/(x782!=(x783|x784)));

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x785 = 3989588U;
	static int8_t x786 = -1;
	uint8_t x787 = 18U;
	int64_t x788 = 115LL;
	volatile uint32_t t184 = 1026U;

    t184 = (x785/(x786!=(x787|x788)));

    if (t184 != 3989588U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x789 = -1;
	static uint32_t x790 = UINT32_MAX;
	int64_t x791 = INT64_MIN;
	int32_t x792 = INT32_MIN;
	volatile int32_t t185 = -2486;

    t185 = (x789/(x790!=(x791|x792)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x793 = -1LL;
	uint8_t x794 = 13U;
	int8_t x795 = INT8_MIN;
	int8_t x796 = -1;
	int64_t t186 = 82640LL;

    t186 = (x793/(x794!=(x795|x796)));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x797 = INT64_MAX;
	int64_t t187 = INT64_MAX;

    t187 = (x797/(x798!=(x799|x800)));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x801 = INT32_MIN;
	static int8_t x802 = INT8_MIN;
	int32_t x804 = INT32_MIN;

    t188 = (x801/(x802!=(x803|x804)));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x806 = INT64_MAX;
	uint16_t x807 = 14U;
	volatile int32_t t189 = 1476466;

    t189 = (x805/(x806!=(x807|x808)));

    if (t189 != -5590) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x809 = UINT64_MAX;
	int32_t x810 = INT32_MIN;
	static int16_t x811 = -1;
	uint16_t x812 = UINT16_MAX;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (x809/(x810!=(x811|x812)));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x813 = UINT16_MAX;
	static uint64_t x814 = 33862LLU;
	uint64_t x815 = 28165LLU;
	int8_t x816 = 21;
	volatile int32_t t191 = 59760;

    t191 = (x813/(x814!=(x815|x816)));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x817 = 1044239830244353LLU;
	uint64_t x818 = 243LLU;
	int32_t x819 = 1135008;
	static volatile int64_t x820 = 3935348317383159LL;

    t192 = (x817/(x818!=(x819|x820)));

    if (t192 != 1044239830244353LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x821 = -1;
	uint8_t x822 = 3U;
	int64_t x823 = INT64_MAX;
	int64_t x824 = INT64_MIN;

    t193 = (x821/(x822!=(x823|x824)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x825 = 0U;
	uint8_t x826 = 68U;
	static int16_t x827 = INT16_MIN;
	volatile uint8_t x828 = 7U;

    t194 = (x825/(x826!=(x827|x828)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x829 = 31114U;
	volatile int64_t x830 = 3077975314240907LL;
	uint8_t x832 = 8U;
	uint32_t t195 = 12U;

    t195 = (x829/(x830!=(x831|x832)));

    if (t195 != 31114U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x833 = INT16_MIN;
	static int16_t x835 = INT16_MIN;
	int16_t x836 = INT16_MAX;

    t196 = (x833/(x834!=(x835|x836)));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x837 = INT32_MAX;
	int64_t x838 = -205662043675181LL;
	int64_t x839 = INT64_MIN;
	static uint32_t x840 = 1301499U;

    t197 = (x837/(x838!=(x839|x840)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x841 = 91484003650622LL;
	int64_t x843 = -1LL;
	int64_t x844 = INT64_MIN;
	volatile int64_t t198 = 6109LL;

    t198 = (x841/(x842!=(x843|x844)));

    if (t198 != 91484003650622LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x845 = 1U;
	int8_t x846 = INT8_MAX;
	int8_t x847 = INT8_MIN;
	volatile int8_t x848 = -1;

    t199 = (x845/(x846!=(x847|x848)));

    if (t199 != 1U) { NG(); } else { ; }
	
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

