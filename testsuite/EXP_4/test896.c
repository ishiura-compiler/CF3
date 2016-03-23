
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

int8_t x2 = -1;
int8_t x8 = -61;
int32_t t1 = -8173;
static int32_t x9 = -1;
static uint32_t x15 = 3U;
int8_t x22 = INT8_MIN;
int64_t x25 = INT64_MIN;
int32_t t7 = -12;
volatile int16_t x38 = INT16_MAX;
volatile uint16_t x47 = 116U;
static int32_t x50 = -1;
static uint16_t x53 = 2U;
volatile int64_t x59 = INT64_MAX;
int32_t t13 = -338;
int16_t x63 = -1;
volatile int32_t t14 = -133151;
int64_t x66 = -1LL;
int32_t x76 = INT32_MAX;
int32_t t17 = -195041902;
volatile int64_t x82 = 124388131469081LL;
int16_t x83 = -9;
volatile uint16_t x85 = 0U;
static int32_t t20 = 26;
uint32_t x90 = UINT32_MAX;
uint16_t x96 = 2U;
int64_t x106 = 96665047839605457LL;
static int16_t x110 = -43;
uint8_t x116 = UINT8_MAX;
static uint16_t x118 = 255U;
uint32_t x120 = 877825392U;
int32_t x124 = INT32_MIN;
int8_t x127 = 0;
int32_t t30 = 9;
int32_t x135 = 8964375;
int64_t x139 = INT64_MIN;
int64_t x140 = 117398142LL;
static uint16_t x141 = UINT16_MAX;
int16_t x144 = -3535;
static volatile int32_t x157 = INT32_MIN;
int16_t x161 = INT16_MIN;
static uint32_t x164 = 5U;
uint64_t x166 = UINT64_MAX;
static int8_t x167 = 4;
int16_t x175 = INT16_MIN;
int16_t x176 = INT16_MAX;
volatile uint64_t t41 = 0LLU;
int64_t x194 = -67853114098689LL;
int64_t x198 = 33647LL;
static int32_t x199 = 771;
volatile uint16_t x201 = 36U;
int8_t x212 = -1;
static int64_t x216 = 223LL;
static int32_t t51 = -31882;
int32_t x223 = -1;
uint64_t t52 = 4518188864423186785LLU;
int64_t x225 = INT64_MIN;
uint16_t x226 = 0U;
static uint64_t x233 = 1860LLU;
volatile int8_t x242 = INT8_MIN;
int16_t x251 = -1;
static int16_t x252 = -1;
volatile int32_t t59 = -999;
static uint16_t x261 = UINT16_MAX;
volatile int32_t x265 = INT32_MIN;
int16_t x266 = INT16_MIN;
int64_t x271 = -1LL;
int16_t x279 = INT16_MAX;
int16_t x285 = -1;
int64_t x286 = INT64_MAX;
int32_t t69 = -7579;
volatile uint16_t x304 = UINT16_MAX;
int8_t x308 = 2;
int16_t x317 = INT16_MIN;
static int8_t x328 = -52;
static uint8_t x330 = UINT8_MAX;
int64_t x332 = INT64_MIN;
uint16_t x338 = UINT16_MAX;
static volatile int16_t x339 = -1;
int16_t x347 = 485;
volatile int64_t x351 = -1LL;
int8_t x352 = INT8_MAX;
uint8_t x353 = UINT8_MAX;
int32_t t85 = 41818;
static uint32_t x363 = 290U;
int8_t x371 = -37;
uint64_t x384 = UINT64_MAX;
uint8_t x388 = 2U;
uint64_t t93 = 54368722468LLU;
int16_t x394 = 1;
int32_t x399 = INT32_MIN;
int32_t t96 = 5035;
static volatile int64_t t97 = INT64_MAX;
volatile int16_t x414 = INT16_MAX;
int64_t x416 = -1LL;
volatile int32_t t100 = -81;
volatile int32_t x430 = -1;
volatile uint16_t x438 = UINT16_MAX;
int16_t x440 = INT16_MAX;
volatile int32_t x443 = -1;
int32_t x446 = INT32_MIN;
int16_t x453 = -1;
static uint16_t x461 = UINT16_MAX;
volatile uint16_t x462 = UINT16_MAX;
static int8_t x463 = -10;
int32_t t111 = 229;
int32_t x465 = -1;
static int8_t x467 = -1;
static int32_t t115 = -2404;
int16_t x490 = 4806;
int8_t x501 = -42;
static uint16_t x515 = 796U;
volatile uint64_t t123 = 1092411996516391681LLU;
int32_t x524 = INT32_MIN;
volatile int32_t t125 = 1018218558;
int32_t t126 = 16317527;
int16_t x532 = INT16_MAX;
static int8_t x538 = INT8_MAX;
static volatile int8_t x541 = -3;
volatile int32_t t130 = 18829068;
volatile int64_t x547 = -1LL;
int64_t t132 = 208038438514962985LL;
static int64_t x553 = -1LL;
volatile uint16_t x555 = 1040U;
static uint16_t x559 = UINT16_MAX;
int32_t x573 = 6;
volatile uint64_t t138 = 10971213563LLU;
int8_t x581 = -1;
static volatile int16_t x584 = -12175;
static int32_t t140 = -204379;
uint32_t x590 = 56614928U;
int64_t t141 = -62939404LL;
static volatile int64_t x594 = INT64_MAX;
volatile uint64_t x599 = UINT64_MAX;
int16_t x600 = INT16_MAX;
static int8_t x601 = INT8_MIN;
volatile int16_t x602 = -1398;
int32_t t144 = 675;
int32_t x605 = 110195;
int16_t x606 = -113;
uint32_t x620 = 278578604U;
int16_t x626 = INT16_MIN;
static uint16_t x628 = 1U;
static int64_t x633 = INT64_MIN;
static int64_t t152 = INT64_MIN;
int16_t x637 = 3;
int8_t x641 = INT8_MIN;
volatile int64_t x642 = INT64_MAX;
int8_t x643 = -22;
static volatile uint16_t x646 = 458U;
int8_t x647 = INT8_MIN;
static volatile int16_t x648 = INT16_MIN;
volatile uint32_t t156 = 116597685U;
int16_t x657 = INT16_MAX;
static uint64_t x665 = 13320038LLU;
uint8_t x668 = 97U;
int64_t x673 = -9526544300025028LL;
static int16_t x682 = -1;
static int32_t x683 = INT32_MAX;
int32_t t164 = -637903;
int16_t x688 = 1119;
static uint64_t x690 = 999LLU;
volatile int32_t t166 = INT32_MIN;
int16_t x693 = -4043;
static volatile int16_t x696 = INT16_MIN;
int8_t x700 = -1;
volatile int32_t t170 = -14;
uint8_t x710 = 60U;
int32_t x718 = INT32_MIN;
int64_t x721 = INT64_MIN;
int64_t x729 = 9942692LL;
int8_t x740 = INT8_MIN;
uint64_t x742 = UINT64_MAX;
volatile int32_t t179 = 4500481;
int64_t x745 = -199LL;
uint16_t x749 = 5U;
volatile int32_t t181 = -157;
uint16_t x753 = 105U;
int16_t x754 = -476;
volatile uint64_t t183 = UINT64_MAX;
int64_t x764 = INT64_MAX;
static int32_t x775 = INT32_MAX;
volatile int16_t x784 = -1;
static int64_t x788 = INT64_MIN;
volatile uint32_t t190 = UINT32_MAX;
static volatile int64_t x790 = INT64_MIN;
int32_t x792 = INT32_MAX;
int32_t t191 = 5;
int64_t x797 = -1LL;
static volatile uint8_t x798 = 2U;
int32_t t194 = -73;
int16_t x810 = -1;
static int32_t x811 = INT32_MIN;
volatile int8_t x814 = 0;
volatile int32_t t198 = 51145;


void f0(void) {
    	static int8_t x1 = -1;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = 1027806;

    t0 = (x1^(x2==(x3%x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	uint64_t x6 = 241LLU;
	int32_t x7 = -146766;

    t1 = (x5^(x6==(x7%x8)));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -1;
	static int64_t x11 = -63272041421LL;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -4819;

    t2 = (x9^(x10==(x11%x12)));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int64_t x14 = INT64_MAX;
	static uint32_t x16 = UINT32_MAX;
	int32_t t3 = INT32_MAX;

    t3 = (x13^(x14==(x15%x16)));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	static int8_t x18 = INT8_MIN;
	uint64_t x19 = 53228378LLU;
	static int64_t x20 = INT64_MIN;
	int32_t t4 = -69330;

    t4 = (x17^(x18==(x19%x20)));

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint16_t x23 = UINT16_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -73;

    t5 = (x21^(x22==(x23%x24)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int16_t x27 = 0;
	volatile int8_t x28 = INT8_MIN;
	static volatile int64_t t6 = INT64_MIN;

    t6 = (x25^(x26==(x27%x28)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -27893215;
	int64_t x30 = -1LL;
	uint32_t x31 = 2232U;
	static uint64_t x32 = 1953631621LLU;

    t7 = (x29^(x30==(x31%x32)));

    if (t7 != -27893215) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	uint8_t x39 = 1U;
	int32_t x40 = -1;
	static volatile int32_t t8 = 49;

    t8 = (x37^(x38==(x39%x40)));

    if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -17275LL;
	static int32_t x42 = INT32_MIN;
	static int32_t x43 = INT32_MAX;
	int8_t x44 = -1;
	static int64_t t9 = 1LL;

    t9 = (x41^(x42==(x43%x44)));

    if (t9 != -17275LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x45 = 14;
	uint64_t x46 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	int32_t t10 = 250;

    t10 = (x45^(x46==(x47%x48)));

    if (t10 != 14) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 14260598503846152LL;
	uint32_t x51 = 7672U;
	int8_t x52 = INT8_MAX;
	volatile int64_t t11 = -40519688438421LL;

    t11 = (x49^(x50==(x51%x52)));

    if (t11 != 14260598503846152LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MIN;
	uint64_t x55 = UINT64_MAX;
	uint64_t x56 = 958402263LLU;
	int32_t t12 = 412;

    t12 = (x53^(x54==(x55%x56)));

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = -1;
	volatile int32_t x58 = -1;
	static uint32_t x60 = UINT32_MAX;

    t13 = (x57^(x58==(x59%x60)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MAX;
	static uint16_t x62 = 2786U;
	volatile int8_t x64 = INT8_MIN;

    t14 = (x61^(x62==(x63%x64)));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 4U;
	uint16_t x67 = UINT16_MAX;
	static uint16_t x68 = 12U;
	static volatile uint32_t t15 = 36U;

    t15 = (x65^(x66==(x67%x68)));

    if (t15 != 4U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = 0LLU;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MIN;
	static volatile uint64_t t16 = 1LLU;

    t16 = (x69^(x70==(x71%x72)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = 6866;
	int8_t x74 = -1;
	int64_t x75 = INT64_MAX;

    t17 = (x73^(x74==(x75%x76)));

    if (t17 != 6866) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MAX;
	volatile int64_t x79 = -317896132962LL;
	int8_t x80 = INT8_MAX;
	volatile int64_t t18 = INT64_MAX;

    t18 = (x77^(x78==(x79%x80)));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x81 = -14;
	static int8_t x84 = INT8_MAX;
	static volatile int32_t t19 = 7;

    t19 = (x81^(x82==(x83%x84)));

    if (t19 != -14) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x86 = 78433140;
	static int64_t x87 = INT64_MIN;
	volatile int64_t x88 = -1LL;

    t20 = (x85^(x86==(x87%x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MAX;
	volatile int32_t t21 = 875199;

    t21 = (x89^(x90==(x91%x92)));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint32_t x94 = 1293829U;
	volatile int32_t x95 = INT32_MIN;
	static volatile uint64_t t22 = UINT64_MAX;

    t22 = (x93^(x94==(x95%x96)));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x97 = 9U;
	static int16_t x98 = INT16_MIN;
	int64_t x99 = -1LL;
	static volatile int16_t x100 = -1176;
	volatile uint32_t t23 = 51540663U;

    t23 = (x97^(x98==(x99%x100)));

    if (t23 != 9U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MIN;
	static uint64_t x102 = 2550812531738480683LLU;
	int16_t x103 = INT16_MAX;
	static volatile uint64_t x104 = 29LLU;
	int32_t t24 = INT32_MIN;

    t24 = (x101^(x102==(x103%x104)));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	volatile int64_t x107 = INT64_MAX;
	volatile int8_t x108 = 1;
	int32_t t25 = INT32_MIN;

    t25 = (x105^(x106==(x107%x108)));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x109 = INT32_MAX;
	uint32_t x111 = 30U;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t26 = INT32_MAX;

    t26 = (x109^(x110==(x111%x112)));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x113 = UINT64_MAX;
	static uint64_t x114 = 5956LLU;
	int32_t x115 = INT32_MIN;
	static volatile uint64_t t27 = UINT64_MAX;

    t27 = (x113^(x114==(x115%x116)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = INT16_MIN;
	uint32_t x119 = 35293958U;
	volatile int32_t t28 = 28;

    t28 = (x117^(x118==(x119%x120)));

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x123 = INT16_MIN;
	int64_t t29 = INT64_MIN;

    t29 = (x121^(x122==(x123%x124)));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 881408365;
	static int8_t x126 = INT8_MIN;
	int32_t x128 = -1;

    t30 = (x125^(x126==(x127%x128)));

    if (t30 != 881408365) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = -1;
	uint32_t x130 = 0U;
	volatile int32_t x131 = INT32_MIN;
	int32_t x132 = 1233;
	static int32_t t31 = 0;

    t31 = (x129^(x130==(x131%x132)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x134 = -1;
	uint16_t x136 = 52U;
	int32_t t32 = 78;

    t32 = (x133^(x134==(x135%x136)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MAX;
	int64_t x138 = -1LL;
	int32_t t33 = INT32_MAX;

    t33 = (x137^(x138==(x139%x140)));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x142 = INT64_MAX;
	static int16_t x143 = -1;
	volatile int32_t t34 = -2267;

    t34 = (x141^(x142==(x143%x144)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = UINT32_MAX;
	static int64_t x146 = 1199192LL;
	static uint16_t x147 = 6689U;
	uint16_t x148 = 7U;
	static volatile uint32_t t35 = UINT32_MAX;

    t35 = (x145^(x146==(x147%x148)));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	volatile int16_t x150 = INT16_MAX;
	uint8_t x151 = 64U;
	int8_t x152 = INT8_MIN;
	volatile int64_t t36 = INT64_MIN;

    t36 = (x149^(x150==(x151%x152)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t37 = INT32_MIN;

    t37 = (x157^(x158==(x159%x160)));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x162 = 5325;
	static volatile uint8_t x163 = 15U;
	static int32_t t38 = 3113761;

    t38 = (x161^(x162==(x163%x164)));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = 0LLU;
	int64_t x168 = -1LL;
	volatile uint64_t t39 = 308853245042LLU;

    t39 = (x165^(x166==(x167%x168)));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x173 = INT64_MAX;
	uint16_t x174 = 7U;
	volatile int64_t t40 = INT64_MAX;

    t40 = (x173^(x174==(x175%x176)));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x177 = 1394593LLU;
	uint16_t x178 = 236U;
	static int8_t x179 = INT8_MIN;
	static int16_t x180 = 121;

    t41 = (x177^(x178==(x179%x180)));

    if (t41 != 1394593LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x181 = UINT8_MAX;
	int8_t x182 = -43;
	int64_t x183 = 189760020788636LL;
	uint32_t x184 = 134060U;
	int32_t t42 = -430;

    t42 = (x181^(x182==(x183%x184)));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -1;
	int16_t x186 = INT16_MIN;
	static volatile int32_t x187 = INT32_MIN;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t43 = -2;

    t43 = (x185^(x186==(x187%x188)));

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x189 = 206U;
	int32_t x190 = INT32_MAX;
	uint64_t x191 = 16LLU;
	int64_t x192 = 1084335222996201LL;
	volatile uint32_t t44 = 19226244U;

    t44 = (x189^(x190==(x191%x192)));

    if (t44 != 206U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x193 = 0;
	int32_t x195 = 9569;
	uint16_t x196 = 1U;
	static int32_t t45 = 101504;

    t45 = (x193^(x194==(x195%x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = 275635LL;
	volatile int8_t x200 = 30;
	static volatile int64_t t46 = 23224LL;

    t46 = (x197^(x198==(x199%x200)));

    if (t46 != 275635LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t47 = 1;

    t47 = (x201^(x202==(x203%x204)));

    if (t47 != 36) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x205 = -1LL;
	uint32_t x206 = 205U;
	int16_t x207 = INT16_MIN;
	static int16_t x208 = INT16_MIN;
	int64_t t48 = 1LL;

    t48 = (x205^(x206==(x207%x208)));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint64_t x209 = 22639277LLU;
	static int8_t x210 = INT8_MIN;
	uint32_t x211 = UINT32_MAX;
	uint64_t t49 = 390588LLU;

    t49 = (x209^(x210==(x211%x212)));

    if (t49 != 22639277LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = -1;
	uint8_t x214 = 7U;
	static int32_t x215 = INT32_MIN;
	int32_t t50 = -138506;

    t50 = (x213^(x214==(x215%x216)));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x217 = 6U;
	volatile int64_t x218 = -47LL;
	int64_t x219 = INT64_MIN;
	volatile uint8_t x220 = UINT8_MAX;

    t51 = (x217^(x218==(x219%x220)));

    if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 47LLU;
	static int16_t x222 = INT16_MAX;
	uint64_t x224 = 3202991696LLU;

    t52 = (x221^(x222==(x223%x224)));

    if (t52 != 47LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x227 = -1LL;
	int64_t x228 = 1LL;
	int64_t t53 = 6295835494LL;

    t53 = (x225^(x226==(x227%x228)));

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x229 = INT16_MIN;
	static uint16_t x230 = 2612U;
	int32_t x231 = 874897;
	uint64_t x232 = 20347948126LLU;
	volatile int32_t t54 = 5767;

    t54 = (x229^(x230==(x231%x232)));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MIN;
	static volatile uint64_t t55 = 6603LLU;

    t55 = (x233^(x234==(x235%x236)));

    if (t55 != 1860LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x237 = 13;
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MAX;
	int32_t t56 = 72639;

    t56 = (x237^(x238==(x239%x240)));

    if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x241 = 108;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	volatile int32_t t57 = -288;

    t57 = (x241^(x242==(x243%x244)));

    if (t57 != 109) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = -1LL;
	int32_t x246 = -8076;
	volatile int32_t x247 = INT32_MAX;
	uint64_t x248 = 68898LLU;
	volatile int64_t t58 = 17591073346LL;

    t58 = (x245^(x246==(x247%x248)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x249 = -59;
	uint64_t x250 = 620LLU;

    t59 = (x249^(x250==(x251%x252)));

    if (t59 != -59) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 2;
	int64_t x254 = INT64_MIN;
	int8_t x255 = 0;
	static int32_t x256 = 2703616;
	int32_t t60 = -238430708;

    t60 = (x253^(x254==(x255%x256)));

    if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x257 = 474U;
	int8_t x258 = 0;
	int64_t x259 = -514525564LL;
	volatile int64_t x260 = 7758339289LL;
	volatile uint32_t t61 = 5364322U;

    t61 = (x257^(x258==(x259%x260)));

    if (t61 != 474U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x262 = 13U;
	int16_t x263 = INT16_MAX;
	volatile uint8_t x264 = 1U;
	volatile int32_t t62 = -1;

    t62 = (x261^(x262==(x263%x264)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x267 = 12U;
	volatile uint64_t x268 = 423791199LLU;
	volatile int32_t t63 = INT32_MIN;

    t63 = (x265^(x266==(x267%x268)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MAX;
	static volatile int32_t x272 = INT32_MIN;
	int64_t t64 = INT64_MIN;

    t64 = (x269^(x270==(x271%x272)));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile uint8_t x274 = 3U;
	int64_t x275 = 182613609733107LL;
	int8_t x276 = -1;
	volatile uint32_t t65 = UINT32_MAX;

    t65 = (x273^(x274==(x275%x276)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x277 = UINT32_MAX;
	int8_t x278 = -12;
	static int8_t x280 = -1;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = (x277^(x278==(x279%x280)));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x281 = -1;
	int32_t x282 = 618966;
	uint32_t x283 = 4712747U;
	uint8_t x284 = 1U;
	static volatile int32_t t67 = 50690423;

    t67 = (x281^(x282==(x283%x284)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x287 = INT16_MAX;
	static int64_t x288 = INT64_MIN;
	volatile int32_t t68 = 988505;

    t68 = (x285^(x286==(x287%x288)));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = INT8_MIN;
	uint16_t x290 = 27U;
	uint64_t x291 = 14LLU;
	uint64_t x292 = UINT64_MAX;

    t69 = (x289^(x290==(x291%x292)));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	static uint32_t x295 = UINT32_MAX;
	uint64_t x296 = 87851268550520898LLU;
	int32_t t70 = 107;

    t70 = (x293^(x294==(x295%x296)));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MIN;
	static int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	static uint64_t x300 = 4352051261379532771LLU;
	volatile int32_t t71 = -66545;

    t71 = (x297^(x298==(x299%x300)));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = INT8_MAX;
	static int16_t x302 = -1;
	int32_t x303 = INT32_MAX;
	volatile int32_t t72 = -3293447;

    t72 = (x301^(x302==(x303%x304)));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x305 = -1;
	int64_t x306 = 1324623770569737LL;
	int16_t x307 = 1;
	int32_t t73 = 8894;

    t73 = (x305^(x306==(x307%x308)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = INT64_MIN;
	uint32_t x310 = 343940839U;
	static int32_t x311 = 488755;
	int32_t x312 = INT32_MAX;
	volatile int64_t t74 = INT64_MIN;

    t74 = (x309^(x310==(x311%x312)));

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = -191;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t75 = 7468;

    t75 = (x313^(x314==(x315%x316)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x318 = 819247762U;
	static int32_t x319 = INT32_MAX;
	static int16_t x320 = INT16_MIN;
	int32_t t76 = 22950168;

    t76 = (x317^(x318==(x319%x320)));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	volatile int32_t x322 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t77 = 100;

    t77 = (x321^(x322==(x323%x324)));

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = 5395397;
	static int32_t x326 = INT32_MAX;
	int32_t x327 = -459463;
	static volatile int32_t t78 = -5252;

    t78 = (x325^(x326==(x327%x328)));

    if (t78 != 5395397) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x329 = INT32_MIN;
	uint32_t x331 = UINT32_MAX;
	int32_t t79 = INT32_MIN;

    t79 = (x329^(x330==(x331%x332)));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x333 = INT32_MIN;
	uint8_t x334 = 121U;
	volatile int16_t x335 = -28;
	uint64_t x336 = 1094LLU;
	volatile int32_t t80 = INT32_MIN;

    t80 = (x333^(x334==(x335%x336)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x337 = UINT16_MAX;
	int32_t x340 = -33448;
	volatile int32_t t81 = -168717;

    t81 = (x337^(x338==(x339%x340)));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = -1LL;
	static int64_t x342 = 3589135749840560LL;
	int64_t x343 = INT64_MIN;
	uint64_t x344 = 2135564364385LLU;
	int64_t t82 = 795977980LL;

    t82 = (x341^(x342==(x343%x344)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x345 = INT16_MIN;
	static int16_t x346 = -9;
	static volatile int8_t x348 = INT8_MIN;
	int32_t t83 = 194201;

    t83 = (x345^(x346==(x347%x348)));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x349 = UINT64_MAX;
	int8_t x350 = 19;
	uint64_t t84 = UINT64_MAX;

    t84 = (x349^(x350==(x351%x352)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x354 = 8LLU;
	int8_t x355 = -1;
	int64_t x356 = -441130708505384LL;

    t85 = (x353^(x354==(x355%x356)));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = -842;
	uint8_t x358 = UINT8_MAX;
	static int8_t x359 = -3;
	int64_t x360 = -1LL;
	int32_t t86 = 120973701;

    t86 = (x357^(x358==(x359%x360)));

    if (t86 != -842) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = INT8_MIN;
	volatile int16_t x362 = 1;
	volatile uint16_t x364 = 5271U;
	int32_t t87 = -1;

    t87 = (x361^(x362==(x363%x364)));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = 8663;
	static int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = 12;

    t88 = (x365^(x366==(x367%x368)));

    if (t88 != 8662) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = 31;
	int8_t x370 = INT8_MAX;
	static int64_t x372 = INT64_MIN;
	static volatile int32_t t89 = -262568;

    t89 = (x369^(x370==(x371%x372)));

    if (t89 != 31) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 124U;
	uint32_t x376 = UINT32_MAX;
	static volatile int32_t t90 = INT32_MIN;

    t90 = (x373^(x374==(x375%x376)));

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t91 = -37;

    t91 = (x377^(x378==(x379%x380)));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x381 = 89U;
	volatile int64_t x382 = -1LL;
	static volatile uint16_t x383 = 0U;
	volatile uint32_t t92 = 2U;

    t92 = (x381^(x382==(x383%x384)));

    if (t92 != 89U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x385 = 2LLU;
	uint8_t x386 = 39U;
	static int16_t x387 = -1;

    t93 = (x385^(x386==(x387%x388)));

    if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	static uint32_t x391 = 8U;
	static int8_t x392 = INT8_MIN;
	int64_t t94 = INT64_MIN;

    t94 = (x389^(x390==(x391%x392)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x393 = 30U;
	static int16_t x395 = INT16_MIN;
	volatile uint32_t x396 = 12U;
	volatile int32_t t95 = 374762;

    t95 = (x393^(x394==(x395%x396)));

    if (t95 != 30) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x397 = UINT8_MAX;
	uint16_t x398 = 0U;
	volatile int32_t x400 = -1;

    t96 = (x397^(x398==(x399%x400)));

    if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = INT64_MAX;
	uint8_t x402 = 3U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;

    t97 = (x401^(x402==(x403%x404)));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = INT8_MIN;
	uint32_t x406 = 0U;
	int32_t x407 = 3103649;
	int32_t x408 = INT32_MIN;
	int32_t t98 = -31;

    t98 = (x405^(x406==(x407%x408)));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	static volatile int8_t x412 = INT8_MAX;
	int64_t t99 = INT64_MIN;

    t99 = (x409^(x410==(x411%x412)));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x413 = 1U;
	volatile int64_t x415 = -1LL;

    t100 = (x413^(x414==(x415%x416)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = -1;
	int8_t x418 = INT8_MAX;
	static uint8_t x419 = UINT8_MAX;
	uint64_t x420 = 27LLU;
	volatile int32_t t101 = -1;

    t101 = (x417^(x418==(x419%x420)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = 93839LL;
	int32_t x422 = INT32_MAX;
	int16_t x423 = -380;
	int64_t x424 = -13709LL;
	int64_t t102 = 3224326690990LL;

    t102 = (x421^(x422==(x423%x424)));

    if (t102 != 93839LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = INT32_MIN;
	int64_t x431 = -1LL;
	volatile int8_t x432 = -1;
	static volatile int32_t t103 = INT32_MIN;

    t103 = (x429^(x430==(x431%x432)));

    if (t103 != INT32_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x433 = 0U;
	int64_t x434 = INT64_MAX;
	int8_t x435 = 11;
	int16_t x436 = -4;
	uint32_t t104 = 24451148U;

    t104 = (x433^(x434==(x435%x436)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = -1;
	uint16_t x439 = 5993U;
	volatile int32_t t105 = 25136560;

    t105 = (x437^(x438==(x439%x440)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x441 = -8;
	static int8_t x442 = INT8_MIN;
	int16_t x444 = -1;
	volatile int32_t t106 = -56494408;

    t106 = (x441^(x442==(x443%x444)));

    if (t106 != -8) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x445 = 6;
	uint64_t x447 = 7262424LLU;
	static int64_t x448 = -1LL;
	int32_t t107 = -346;

    t107 = (x445^(x446==(x447%x448)));

    if (t107 != 6) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x449 = 408334485U;
	int64_t x450 = INT64_MIN;
	int16_t x451 = -1100;
	int32_t x452 = INT32_MIN;
	uint32_t t108 = 484242655U;

    t108 = (x449^(x450==(x451%x452)));

    if (t108 != 408334485U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x454 = 6U;
	int64_t x455 = 1957948755812665979LL;
	int64_t x456 = INT64_MAX;
	static volatile int32_t t109 = -369122;

    t109 = (x453^(x454==(x455%x456)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = INT8_MAX;
	int8_t x458 = 29;
	int32_t x459 = -225158358;
	uint16_t x460 = UINT16_MAX;
	static volatile int32_t t110 = -148003583;

    t110 = (x457^(x458==(x459%x460)));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x464 = INT8_MIN;

    t111 = (x461^(x462==(x463%x464)));

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x466 = UINT8_MAX;
	static volatile uint64_t x468 = 110163248LLU;
	static volatile int32_t t112 = 1825543;

    t112 = (x465^(x466==(x467%x468)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x469 = -136;
	volatile int16_t x470 = INT16_MAX;
	int16_t x471 = -1;
	int64_t x472 = -176450953583LL;
	volatile int32_t t113 = 12155;

    t113 = (x469^(x470==(x471%x472)));

    if (t113 != -136) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x473 = 11U;
	int32_t x474 = -28087734;
	uint16_t x475 = UINT16_MAX;
	uint8_t x476 = 57U;
	int32_t t114 = -20267;

    t114 = (x473^(x474==(x475%x476)));

    if (t114 != 11) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x477 = -1;
	volatile uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 83U;
	uint8_t x480 = UINT8_MAX;

    t115 = (x477^(x478==(x479%x480)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x485 = -4;
	int16_t x486 = 0;
	uint64_t x487 = 5493523826LLU;
	uint32_t x488 = 14667U;
	volatile int32_t t116 = -731638199;

    t116 = (x485^(x486==(x487%x488)));

    if (t116 != -4) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x489 = INT64_MIN;
	uint32_t x491 = 1532492154U;
	volatile uint16_t x492 = 2998U;
	int64_t t117 = INT64_MIN;

    t117 = (x489^(x490==(x491%x492)));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x493 = 7509470LLU;
	uint64_t x494 = UINT64_MAX;
	volatile uint64_t x495 = UINT64_MAX;
	uint16_t x496 = UINT16_MAX;
	volatile uint64_t t118 = 17613879258680876LLU;

    t118 = (x493^(x494==(x495%x496)));

    if (t118 != 7509470LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	int32_t x498 = -1;
	volatile uint64_t x499 = 1887792353700740600LLU;
	uint8_t x500 = 83U;
	uint32_t t119 = UINT32_MAX;

    t119 = (x497^(x498==(x499%x500)));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x502 = -1;
	int64_t x503 = INT64_MAX;
	int16_t x504 = 745;
	int32_t t120 = 875043;

    t120 = (x501^(x502==(x503%x504)));

    if (t120 != -42) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x505 = -1LL;
	static int64_t x506 = -1LL;
	uint16_t x507 = 4568U;
	volatile uint8_t x508 = 18U;
	int64_t t121 = -27544422963335LL;

    t121 = (x505^(x506==(x507%x508)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x510 = INT8_MAX;
	uint64_t x511 = 329688631LLU;
	int64_t x512 = -13629936426931LL;
	static int32_t t122 = 0;

    t122 = (x509^(x510==(x511%x512)));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x513 = 136506908538176LLU;
	int64_t x514 = INT64_MIN;
	static int16_t x516 = INT16_MAX;

    t123 = (x513^(x514==(x515%x516)));

    if (t123 != 136506908538176LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = -488403507LL;
	int32_t x518 = -38030922;
	int16_t x519 = -73;
	static int32_t x520 = -1;
	volatile int64_t t124 = 22LL;

    t124 = (x517^(x518==(x519%x520)));

    if (t124 != -488403507LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = -1;
	static volatile int16_t x522 = -11;
	int8_t x523 = -7;

    t125 = (x521^(x522==(x523%x524)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MIN;
	static int32_t x527 = -25;
	int8_t x528 = INT8_MAX;

    t126 = (x525^(x526==(x527%x528)));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x529 = 26;
	int16_t x530 = INT16_MIN;
	int64_t x531 = -1LL;
	volatile int32_t t127 = -357628;

    t127 = (x529^(x530==(x531%x532)));

    if (t127 != 26) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x533 = UINT32_MAX;
	volatile int16_t x534 = 1388;
	int64_t x535 = 21715684LL;
	static int64_t x536 = INT64_MIN;
	uint32_t t128 = UINT32_MAX;

    t128 = (x533^(x534==(x535%x536)));

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x537 = INT8_MIN;
	static int8_t x539 = -1;
	int32_t x540 = INT32_MAX;
	int32_t t129 = 5771;

    t129 = (x537^(x538==(x539%x540)));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x542 = INT32_MAX;
	uint16_t x543 = 4U;
	int8_t x544 = -1;

    t130 = (x541^(x542==(x543%x544)));

    if (t130 != -3) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x545 = INT64_MAX;
	int16_t x546 = 13;
	uint8_t x548 = UINT8_MAX;
	int64_t t131 = INT64_MAX;

    t131 = (x545^(x546==(x547%x548)));

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x549 = -1LL;
	int32_t x550 = INT32_MIN;
	volatile int32_t x551 = INT32_MIN;
	static int32_t x552 = INT32_MAX;

    t132 = (x549^(x550==(x551%x552)));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x554 = -1000;
	static int8_t x556 = INT8_MAX;
	volatile int64_t t133 = 6950670629123216LL;

    t133 = (x553^(x554==(x555%x556)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x557 = INT8_MIN;
	static uint16_t x558 = 327U;
	volatile int64_t x560 = 1LL;
	volatile int32_t t134 = -3374;

    t134 = (x557^(x558==(x559%x560)));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x561 = UINT64_MAX;
	uint16_t x562 = UINT16_MAX;
	int16_t x563 = INT16_MIN;
	int64_t x564 = -1LL;
	static uint64_t t135 = UINT64_MAX;

    t135 = (x561^(x562==(x563%x564)));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x565 = -1;
	int8_t x566 = INT8_MIN;
	static int8_t x567 = INT8_MAX;
	int32_t x568 = 1153;
	int32_t t136 = 869;

    t136 = (x565^(x566==(x567%x568)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x574 = -1LL;
	uint16_t x575 = 8U;
	static int16_t x576 = 206;
	static volatile int32_t t137 = 1859;

    t137 = (x573^(x574==(x575%x576)));

    if (t137 != 6) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x577 = 31999714991571LLU;
	int16_t x578 = INT16_MAX;
	volatile uint64_t x579 = 3LLU;
	int8_t x580 = -1;

    t138 = (x577^(x578==(x579%x580)));

    if (t138 != 31999714991571LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x582 = UINT16_MAX;
	uint32_t x583 = UINT32_MAX;
	int32_t t139 = -1054076;

    t139 = (x581^(x582==(x583%x584)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x585 = 0;
	int8_t x586 = INT8_MAX;
	int32_t x587 = INT32_MIN;
	int64_t x588 = INT64_MIN;

    t140 = (x585^(x586==(x587%x588)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = 1595983LL;
	uint16_t x591 = UINT16_MAX;
	uint64_t x592 = 8105358181925104LLU;

    t141 = (x589^(x590==(x591%x592)));

    if (t141 != 1595983LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x593 = -1LL;
	int16_t x595 = INT16_MIN;
	static volatile int8_t x596 = INT8_MIN;
	static volatile int64_t t142 = -524466070288888161LL;

    t142 = (x593^(x594==(x595%x596)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x597 = 1238738;
	int8_t x598 = 49;
	volatile int32_t t143 = 1;

    t143 = (x597^(x598==(x599%x600)));

    if (t143 != 1238738) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x603 = INT8_MIN;
	int16_t x604 = INT16_MIN;

    t144 = (x601^(x602==(x603%x604)));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x607 = 1;
	int64_t x608 = INT64_MAX;
	int32_t t145 = 43;

    t145 = (x605^(x606==(x607%x608)));

    if (t145 != 110195) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x609 = 2U;
	volatile int16_t x610 = INT16_MIN;
	int64_t x611 = -1LL;
	volatile int8_t x612 = -1;
	static volatile int32_t t146 = -148;

    t146 = (x609^(x610==(x611%x612)));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x613 = 17511U;
	volatile int8_t x614 = INT8_MIN;
	int64_t x615 = 1LL;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t147 = 382;

    t147 = (x613^(x614==(x615%x616)));

    if (t147 != 17511) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x617 = -17093481LL;
	int32_t x618 = 793372;
	uint16_t x619 = 703U;
	static int64_t t148 = -2544086LL;

    t148 = (x617^(x618==(x619%x620)));

    if (t148 != -17093481LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x621 = -1;
	uint8_t x622 = UINT8_MAX;
	volatile uint32_t x623 = 7433626U;
	int8_t x624 = INT8_MAX;
	int32_t t149 = -417007799;

    t149 = (x621^(x622==(x623%x624)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = INT8_MIN;
	static volatile int8_t x627 = -1;
	int32_t t150 = 941402;

    t150 = (x625^(x626==(x627%x628)));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x629 = -4339;
	volatile uint64_t x630 = UINT64_MAX;
	static uint16_t x631 = 4U;
	volatile int32_t x632 = 1541;
	static int32_t t151 = 34875;

    t151 = (x629^(x630==(x631%x632)));

    if (t151 != -4339) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x634 = 13572U;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;

    t152 = (x633^(x634==(x635%x636)));

    if (t152 != INT64_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x638 = UINT64_MAX;
	int32_t x639 = 43;
	static int64_t x640 = INT64_MIN;
	int32_t t153 = 369011192;

    t153 = (x637^(x638==(x639%x640)));

    if (t153 != 3) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x644 = UINT32_MAX;
	static volatile int32_t t154 = 12;

    t154 = (x641^(x642==(x643%x644)));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x645 = INT32_MIN;
	static volatile int32_t t155 = INT32_MIN;

    t155 = (x645^(x646==(x647%x648)));

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x649 = 19524216U;
	int16_t x650 = 21;
	int64_t x651 = -10376LL;
	uint64_t x652 = 81207877091LLU;

    t156 = (x649^(x650==(x651%x652)));

    if (t156 != 19524216U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x653 = INT64_MAX;
	int8_t x654 = 0;
	volatile int8_t x655 = INT8_MAX;
	static int64_t x656 = INT64_MIN;
	int64_t t157 = INT64_MAX;

    t157 = (x653^(x654==(x655%x656)));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x658 = INT32_MIN;
	volatile int64_t x659 = -1091901129564225299LL;
	int8_t x660 = -1;
	int32_t t158 = 2;

    t158 = (x657^(x658==(x659%x660)));

    if (t158 != 32767) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = -6;
	int32_t x662 = -1;
	volatile int32_t x663 = INT32_MIN;
	int16_t x664 = INT16_MIN;
	int32_t t159 = 81;

    t159 = (x661^(x662==(x663%x664)));

    if (t159 != -6) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x666 = INT16_MAX;
	uint32_t x667 = 26873952U;
	volatile uint64_t t160 = 717213199346700272LLU;

    t160 = (x665^(x666==(x667%x668)));

    if (t160 != 13320038LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x669 = 0;
	volatile uint8_t x670 = 1U;
	uint16_t x671 = 32592U;
	static int64_t x672 = 74813273935585260LL;
	volatile int32_t t161 = -6091606;

    t161 = (x669^(x670==(x671%x672)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x674 = UINT64_MAX;
	int64_t x675 = INT64_MIN;
	volatile int8_t x676 = INT8_MIN;
	int64_t t162 = -1667698260410710624LL;

    t162 = (x673^(x674==(x675%x676)));

    if (t162 != -9526544300025028LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x677 = INT64_MAX;
	int64_t x678 = -7036LL;
	int64_t x679 = 5008LL;
	uint64_t x680 = 32077574751360919LLU;
	int64_t t163 = INT64_MAX;

    t163 = (x677^(x678==(x679%x680)));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x681 = -1;
	volatile int8_t x684 = INT8_MIN;

    t164 = (x681^(x682==(x683%x684)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x685 = 1023625886LLU;
	volatile int64_t x686 = INT64_MIN;
	int32_t x687 = -15305;
	volatile uint64_t t165 = 702097LLU;

    t165 = (x685^(x686==(x687%x688)));

    if (t165 != 1023625886LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x689 = INT32_MIN;
	volatile int16_t x691 = INT16_MIN;
	int16_t x692 = -1;

    t166 = (x689^(x690==(x691%x692)));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x695 = -866070246LL;
	volatile int32_t t167 = 48007757;

    t167 = (x693^(x694==(x695%x696)));

    if (t167 != -4043) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x697 = -260120541627LL;
	static volatile int32_t x698 = INT32_MAX;
	int64_t x699 = INT64_MAX;
	volatile int64_t t168 = 78558LL;

    t168 = (x697^(x698==(x699%x700)));

    if (t168 != -260120541627LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x701 = UINT64_MAX;
	static volatile uint32_t x702 = 919U;
	volatile uint32_t x703 = 461U;
	volatile int32_t x704 = INT32_MIN;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = (x701^(x702==(x703%x704)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x705 = -1;
	int32_t x706 = INT32_MAX;
	uint16_t x707 = 6U;
	int32_t x708 = INT32_MAX;

    t170 = (x705^(x706==(x707%x708)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x709 = 110094814U;
	int8_t x711 = -1;
	volatile uint64_t x712 = UINT64_MAX;
	uint32_t t171 = 7433U;

    t171 = (x709^(x710==(x711%x712)));

    if (t171 != 110094814U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x713 = INT8_MAX;
	static volatile uint32_t x714 = 70890221U;
	int16_t x715 = 2;
	static volatile int64_t x716 = -1LL;
	volatile int32_t t172 = 1273;

    t172 = (x713^(x714==(x715%x716)));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x717 = 7820178445728065LL;
	uint64_t x719 = UINT64_MAX;
	int64_t x720 = INT64_MIN;
	int64_t t173 = -185539767615806LL;

    t173 = (x717^(x718==(x719%x720)));

    if (t173 != 7820178445728065LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x722 = INT8_MAX;
	volatile int64_t x723 = -1424489LL;
	int16_t x724 = INT16_MAX;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x721^(x722==(x723%x724)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x725 = 20374365U;
	int32_t x726 = INT32_MIN;
	int32_t x727 = -1;
	uint16_t x728 = UINT16_MAX;
	volatile uint32_t t175 = 229979082U;

    t175 = (x725^(x726==(x727%x728)));

    if (t175 != 20374365U) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x730 = INT16_MIN;
	int16_t x731 = 1226;
	int64_t x732 = INT64_MIN;
	int64_t t176 = 2111025LL;

    t176 = (x729^(x730==(x731%x732)));

    if (t176 != 9942692LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x733 = 2802U;
	uint8_t x734 = 93U;
	static uint8_t x735 = 3U;
	static int8_t x736 = -1;
	uint32_t t177 = 991138842U;

    t177 = (x733^(x734==(x735%x736)));

    if (t177 != 2802U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x737 = INT64_MIN;
	volatile int32_t x738 = INT32_MIN;
	int32_t x739 = -1;
	volatile int64_t t178 = INT64_MIN;

    t178 = (x737^(x738==(x739%x740)));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x741 = -1;
	int32_t x743 = -1;
	int64_t x744 = INT64_MIN;

    t179 = (x741^(x742==(x743%x744)));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x746 = -1;
	int32_t x747 = -1;
	int64_t x748 = -1LL;
	static volatile int64_t t180 = -19252839263034LL;

    t180 = (x745^(x746==(x747%x748)));

    if (t180 != -199LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x750 = 7894LLU;
	int64_t x751 = INT64_MAX;
	int64_t x752 = -1LL;

    t181 = (x749^(x750==(x751%x752)));

    if (t181 != 5) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x755 = UINT16_MAX;
	int32_t x756 = -8189;
	static int32_t t182 = -59754881;

    t182 = (x753^(x754==(x755%x756)));

    if (t182 != 105) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x757 = UINT64_MAX;
	int16_t x758 = INT16_MIN;
	static int64_t x759 = INT64_MIN;
	uint64_t x760 = 9610616LLU;

    t183 = (x757^(x758==(x759%x760)));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x761 = -1LL;
	uint32_t x762 = UINT32_MAX;
	volatile int8_t x763 = INT8_MIN;
	int64_t t184 = -306825LL;

    t184 = (x761^(x762==(x763%x764)));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x765 = 0U;
	uint8_t x766 = UINT8_MAX;
	static volatile int64_t x767 = 1603516LL;
	uint8_t x768 = 7U;
	volatile int32_t t185 = 525499058;

    t185 = (x765^(x766==(x767%x768)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = INT32_MIN;
	volatile int32_t x770 = INT32_MIN;
	static int16_t x771 = -1;
	static int32_t x772 = 1;
	int32_t t186 = INT32_MIN;

    t186 = (x769^(x770==(x771%x772)));

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x773 = 899;
	uint16_t x774 = UINT16_MAX;
	int64_t x776 = -1LL;
	int32_t t187 = 431883259;

    t187 = (x773^(x774==(x775%x776)));

    if (t187 != 899) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = -1;
	int8_t x778 = INT8_MIN;
	uint8_t x779 = 37U;
	int8_t x780 = INT8_MAX;
	volatile int32_t t188 = 322631918;

    t188 = (x777^(x778==(x779%x780)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = INT64_MIN;
	uint16_t x782 = 31U;
	int16_t x783 = INT16_MIN;
	volatile int64_t t189 = INT64_MIN;

    t189 = (x781^(x782==(x783%x784)));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x785 = UINT32_MAX;
	int32_t x786 = 105;
	int8_t x787 = INT8_MAX;

    t190 = (x785^(x786==(x787%x788)));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x789 = 6U;
	uint32_t x791 = 122484U;

    t191 = (x789^(x790==(x791%x792)));

    if (t191 != 6) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x793 = 15721U;
	static uint8_t x794 = 20U;
	int64_t x795 = 290562LL;
	uint8_t x796 = 13U;
	volatile int32_t t192 = -653096;

    t192 = (x793^(x794==(x795%x796)));

    if (t192 != 15721) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x799 = INT64_MAX;
	static int64_t x800 = INT64_MIN;
	volatile int64_t t193 = 1877790LL;

    t193 = (x797^(x798==(x799%x800)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = -3084;
	int32_t x802 = 107;
	volatile int64_t x803 = 30686301LL;
	int16_t x804 = INT16_MAX;

    t194 = (x801^(x802==(x803%x804)));

    if (t194 != -3084) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x805 = 2U;
	int64_t x806 = INT64_MAX;
	uint64_t x807 = 13960007LLU;
	volatile int16_t x808 = INT16_MIN;
	static volatile int32_t t195 = 223202;

    t195 = (x805^(x806==(x807%x808)));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x809 = 38U;
	int32_t x812 = INT32_MIN;
	volatile int32_t t196 = 6038154;

    t196 = (x809^(x810==(x811%x812)));

    if (t196 != 38) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = INT32_MIN;
	int16_t x815 = 287;
	int16_t x816 = INT16_MIN;
	static volatile int32_t t197 = INT32_MIN;

    t197 = (x813^(x814==(x815%x816)));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x817 = -1851;
	int64_t x818 = INT64_MAX;
	uint8_t x819 = 26U;
	int16_t x820 = INT16_MAX;

    t198 = (x817^(x818==(x819%x820)));

    if (t198 != -1851) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile uint16_t x822 = 1711U;
	uint16_t x823 = 1382U;
	int16_t x824 = 6;
	volatile uint64_t t199 = UINT64_MAX;

    t199 = (x821^(x822==(x823%x824)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

