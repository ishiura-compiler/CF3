
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

static int16_t x3 = INT16_MIN;
uint16_t x10 = 953U;
int64_t x11 = INT64_MIN;
int8_t x14 = INT8_MIN;
volatile int32_t t3 = -3931395;
static volatile int8_t x21 = 1;
int16_t x32 = INT16_MIN;
uint64_t x34 = 4221552012LLU;
static uint64_t x38 = UINT64_MAX;
uint16_t x39 = UINT16_MAX;
static uint64_t x40 = 499322LLU;
static int32_t t10 = 19;
uint64_t x47 = UINT64_MAX;
int32_t t11 = -6948683;
int64_t x49 = INT64_MAX;
volatile int32_t t13 = -32535162;
volatile int32_t x57 = 497;
int8_t x60 = -1;
volatile int64_t x63 = INT64_MIN;
uint8_t x64 = 29U;
uint16_t x65 = UINT16_MAX;
volatile int16_t x67 = -1;
static uint64_t x72 = UINT64_MAX;
static volatile uint16_t x77 = 1218U;
volatile uint64_t x80 = 6400281488651322391LLU;
int64_t x94 = -1LL;
int32_t x95 = -1;
int32_t t23 = 2958509;
volatile uint16_t x98 = UINT16_MAX;
int32_t t24 = -1830640;
static volatile int8_t x103 = 1;
volatile int32_t t27 = -763009104;
uint64_t x113 = 14764078031034LLU;
uint8_t x115 = 53U;
volatile int32_t t28 = -9364;
volatile int32_t t29 = 1;
int16_t x121 = INT16_MIN;
volatile uint16_t x123 = 255U;
static volatile int32_t t31 = 28019734;
static uint8_t x132 = 13U;
static volatile int32_t t32 = 119673357;
uint32_t x136 = 114135U;
volatile int32_t t33 = -472;
int8_t x140 = INT8_MAX;
static volatile int32_t t34 = 205;
static uint8_t x142 = 121U;
volatile int32_t t35 = 13122910;
volatile int64_t x147 = 1472346432633LL;
int8_t x148 = -1;
volatile int32_t t37 = 77361;
int16_t x154 = 26;
int16_t x157 = 5;
int32_t t39 = -1;
int32_t x161 = 1283878;
uint16_t x163 = 2922U;
volatile int32_t t40 = -16541;
volatile uint32_t x166 = 3601U;
volatile uint64_t x172 = 83971LLU;
volatile int64_t x182 = INT64_MIN;
static int32_t x184 = INT32_MIN;
int32_t t45 = 506566;
int16_t x189 = -1;
volatile int16_t x191 = 2;
uint8_t x192 = UINT8_MAX;
uint8_t x199 = 1U;
int8_t x204 = INT8_MAX;
int32_t x205 = -14;
uint16_t x206 = UINT16_MAX;
int16_t x207 = INT16_MIN;
int16_t x208 = -1;
static int16_t x211 = -3;
static uint64_t x215 = UINT64_MAX;
uint32_t x220 = 262377026U;
static int32_t t54 = -1665;
volatile int8_t x222 = INT8_MAX;
static int32_t t55 = 76;
int32_t x225 = INT32_MIN;
int64_t x227 = -1621909987109LL;
uint16_t x228 = 522U;
volatile int16_t x231 = -447;
int32_t t57 = 12988;
volatile int64_t x237 = 80476947LL;
int32_t x243 = INT32_MAX;
static int64_t x249 = INT64_MIN;
uint16_t x258 = UINT16_MAX;
volatile int16_t x275 = 1;
int64_t x277 = INT64_MIN;
int8_t x280 = 4;
volatile int8_t x281 = INT8_MIN;
static int64_t x282 = INT64_MAX;
volatile int8_t x285 = INT8_MIN;
volatile int32_t t71 = 3;
volatile int32_t t73 = -43;
int8_t x303 = INT8_MAX;
static int16_t x304 = -1;
uint64_t x313 = 3314047733453LLU;
static int8_t x314 = -4;
volatile int16_t x315 = -1;
int16_t x324 = INT16_MAX;
int16_t x335 = -62;
int16_t x340 = -1;
int64_t x341 = -1985LL;
volatile int32_t t87 = 739;
int8_t x353 = INT8_MIN;
int32_t x354 = INT32_MIN;
int64_t x361 = INT64_MAX;
static uint16_t x363 = 3U;
static int32_t t90 = -222;
int16_t x370 = -4074;
uint64_t x381 = UINT64_MAX;
volatile int32_t t95 = 784375;
uint64_t x386 = 5508548740050LLU;
int16_t x388 = -1;
int64_t x393 = -28LL;
uint32_t x398 = 1U;
int32_t t99 = -4;
volatile uint16_t x402 = 40U;
int32_t t100 = 1872;
int16_t x413 = INT16_MIN;
static volatile int32_t t103 = -71;
volatile uint64_t x420 = 950968LLU;
volatile int32_t t105 = -3030;
volatile int16_t x435 = -1;
int32_t x437 = -1;
uint16_t x439 = 2877U;
static uint32_t x440 = 1838310U;
static volatile int32_t t109 = -3;
volatile int32_t t110 = 1;
int64_t x452 = INT64_MIN;
int64_t x454 = INT64_MIN;
static int64_t x456 = 1334LL;
int64_t x457 = INT64_MIN;
static int8_t x458 = INT8_MIN;
int32_t t114 = 88;
volatile int32_t t117 = -1031899354;
volatile int32_t t118 = -464;
int32_t x481 = 3476148;
int32_t x487 = INT32_MAX;
uint64_t x490 = 7LLU;
uint64_t x491 = 3743181623665LLU;
static uint8_t x492 = UINT8_MAX;
uint8_t x496 = 9U;
int32_t x498 = -987;
uint8_t x499 = UINT8_MAX;
int64_t x507 = INT64_MAX;
int16_t x521 = -1;
volatile int64_t x523 = -14742LL;
uint8_t x525 = UINT8_MAX;
int32_t t131 = -233;
int64_t x530 = -292LL;
int64_t x535 = 1LL;
int8_t x542 = INT8_MIN;
int64_t x546 = INT64_MIN;
int8_t x547 = 56;
volatile uint64_t x556 = 8061047LLU;
int32_t x559 = INT32_MAX;
int16_t x565 = 1;
int32_t x566 = INT32_MIN;
volatile int64_t x572 = INT64_MIN;
int16_t x573 = 296;
static int64_t x574 = -424112520LL;
int32_t t143 = -71125;
uint64_t x579 = UINT64_MAX;
int8_t x580 = 1;
static int32_t x581 = -1;
uint64_t x583 = 580584LLU;
volatile int8_t x584 = -6;
int8_t x587 = -3;
int32_t x595 = INT32_MAX;
int8_t x598 = -13;
int64_t x603 = 342878LL;
int8_t x604 = INT8_MIN;
uint16_t x610 = 159U;
static int8_t x612 = INT8_MIN;
uint8_t x618 = 1U;
int8_t x623 = -12;
int16_t x627 = -1;
int16_t x631 = INT16_MIN;
int32_t t159 = -28564785;
uint16_t x642 = UINT16_MAX;
volatile int64_t x663 = -468593258535LL;
int16_t x664 = -1;
int64_t x672 = -7501LL;
uint8_t x675 = 0U;
volatile int16_t x677 = INT16_MIN;
int32_t x678 = INT32_MIN;
static volatile int16_t x682 = -1;
int64_t x684 = -1LL;
volatile int32_t t170 = 0;
uint64_t x687 = UINT64_MAX;
static uint32_t x690 = UINT32_MAX;
volatile int32_t t173 = 195178;
volatile int32_t t174 = 84197930;
int16_t x703 = -1;
uint8_t x704 = 60U;
int8_t x707 = INT8_MIN;
int32_t x708 = INT32_MIN;
uint32_t x720 = UINT32_MAX;
uint16_t x722 = UINT16_MAX;
static uint64_t x723 = 395399LLU;
int32_t t180 = -9171413;
int64_t x728 = INT64_MIN;
int32_t x730 = 875639048;
uint64_t x731 = UINT64_MAX;
int8_t x734 = -1;
volatile uint8_t x735 = 0U;
int32_t t183 = 31;
volatile int16_t x745 = INT16_MAX;
int64_t x747 = INT64_MIN;
int16_t x751 = -1;
int8_t x754 = -15;
uint16_t x757 = 2021U;
int16_t x758 = INT16_MIN;
int64_t x764 = INT64_MIN;
int32_t x765 = INT32_MIN;
int32_t t191 = -6810627;
uint32_t x779 = 1136595U;
int16_t x781 = -1;
volatile int8_t x795 = -3;
int32_t t198 = 158;
static volatile int64_t x797 = -1LL;
int8_t x798 = INT8_MIN;
static uint64_t x799 = 7856893980060568578LLU;


void f0(void) {
    	int16_t x1 = -12572;
	int64_t x2 = 1467LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 0;

    t0 = ((x1<=x2)&(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	static uint16_t x6 = 3984U;
	int16_t x7 = -1;
	uint16_t x8 = 14057U;
	volatile int32_t t1 = -4043952;

    t1 = ((x5<=x6)&(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	uint32_t x12 = 188210013U;
	static int32_t t2 = 194118;

    t2 = ((x9<=x10)&(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	uint64_t x15 = 805543860485374LLU;
	uint64_t x16 = 128562802543541LLU;

    t3 = ((x13<=x14)&(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint8_t x18 = 0U;
	static int16_t x19 = INT16_MIN;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 6588871;

    t4 = ((x17<=x18)&(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = INT32_MAX;
	static uint64_t x23 = 621001951361009197LLU;
	static volatile uint32_t x24 = UINT32_MAX;
	int32_t t5 = 28312;

    t5 = ((x21<=x22)&(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int8_t x26 = 1;
	static uint16_t x27 = 3832U;
	static int16_t x28 = 211;
	volatile int32_t t6 = 14;

    t6 = ((x25<=x26)&(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = -194866736356805081LL;
	static int16_t x30 = INT16_MIN;
	uint16_t x31 = UINT16_MAX;
	volatile int32_t t7 = 449970;

    t7 = ((x29<=x30)&(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MIN;
	int64_t x35 = -1LL;
	uint64_t x36 = 342740LLU;
	volatile int32_t t8 = -6155;

    t8 = ((x33<=x34)&(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int32_t t9 = 0;

    t9 = ((x37<=x38)&(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 37935;
	int16_t x42 = -1;
	static int32_t x43 = 61964374;
	int32_t x44 = 3512;

    t10 = ((x41<=x42)&(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 121517476649LLU;
	int8_t x46 = 16;
	uint64_t x48 = UINT64_MAX;

    t11 = ((x45<=x46)&(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = -624984;
	uint64_t x51 = 1LLU;
	volatile int8_t x52 = INT8_MIN;
	static int32_t t12 = -502;

    t12 = ((x49<=x50)&(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 6U;
	int16_t x54 = INT16_MAX;
	volatile int16_t x55 = INT16_MIN;
	static int32_t x56 = -1;

    t13 = ((x53<=x54)&(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = 42U;
	int64_t x59 = INT64_MIN;
	volatile int32_t t14 = -422094479;

    t14 = ((x57<=x58)&(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 1508U;
	int16_t x62 = INT16_MIN;
	volatile int32_t t15 = -112385448;

    t15 = ((x61<=x62)&(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x66 = 28U;
	uint32_t x68 = 0U;
	int32_t t16 = -237113335;

    t16 = ((x65<=x66)&(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 1;
	uint8_t x70 = 1U;
	int8_t x71 = -1;
	int32_t t17 = -2008211;

    t17 = ((x69<=x70)&(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x73 = 2U;
	int64_t x74 = 7LL;
	uint8_t x75 = 18U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 696908238;

    t18 = ((x73<=x74)&(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x78 = -16;
	int64_t x79 = -237245872LL;
	int32_t t19 = -157;

    t19 = ((x77<=x78)&(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 25148675LL;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = 98161;
	volatile int16_t x84 = 2;
	static volatile int32_t t20 = -7133;

    t20 = ((x81<=x82)&(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 2515LL;
	volatile int8_t x86 = INT8_MAX;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static int32_t t21 = -13;

    t21 = ((x85<=x86)&(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x90 = 15U;
	int16_t x91 = -1;
	static uint64_t x92 = UINT64_MAX;
	static int32_t t22 = -311;

    t22 = ((x89<=x90)&(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 15065701LLU;
	int64_t x96 = -6957446098675LL;

    t23 = ((x93<=x94)&(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	static int32_t x99 = INT32_MAX;
	uint8_t x100 = 15U;

    t24 = ((x97<=x98)&(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	uint16_t x102 = UINT16_MAX;
	uint8_t x104 = 6U;
	static volatile int32_t t25 = -476363;

    t25 = ((x101<=x102)&(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	int8_t x106 = -3;
	volatile uint32_t x107 = 1183156651U;
	int8_t x108 = -1;
	volatile int32_t t26 = 848;

    t26 = ((x105<=x106)&(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x109 = UINT64_MAX;
	int64_t x110 = -1LL;
	volatile int16_t x111 = INT16_MIN;
	static uint16_t x112 = 31861U;

    t27 = ((x109<=x110)&(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x114 = -1;
	int32_t x116 = -7;

    t28 = ((x113<=x114)&(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 0U;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 4248U;
	static volatile int8_t x120 = -1;

    t29 = ((x117<=x118)&(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -4633558548981LL;
	int32_t x124 = INT32_MIN;
	static int32_t t30 = 29;

    t30 = ((x121<=x122)&(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 75U;
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MAX;
	int64_t x128 = -1LL;

    t31 = ((x125<=x126)&(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	int32_t x130 = -1;
	uint16_t x131 = 102U;

    t32 = ((x129<=x130)&(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;

    t33 = ((x133<=x134)&(x135!=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 1U;
	int16_t x138 = 593;
	volatile int64_t x139 = -366670342518362LL;

    t34 = ((x137<=x138)&(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 3408U;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = -1;

    t35 = ((x141<=x142)&(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	volatile int32_t t36 = -345515;

    t36 = ((x145<=x146)&(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 36592448383384LLU;
	volatile int32_t x150 = INT32_MIN;
	int64_t x151 = 11LL;
	int8_t x152 = INT8_MAX;

    t37 = ((x149<=x150)&(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint64_t x155 = 1074737999310023715LLU;
	int8_t x156 = -1;
	int32_t t38 = 1;

    t38 = ((x153<=x154)&(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x158 = 10U;
	int16_t x159 = -28;
	int8_t x160 = -1;

    t39 = ((x157<=x158)&(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x162 = INT64_MIN;
	int32_t x164 = INT32_MIN;

    t40 = ((x161<=x162)&(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 5U;
	int16_t x167 = -17;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -6651;

    t41 = ((x165<=x166)&(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 265U;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MAX;
	int32_t t42 = 13389911;

    t42 = ((x169<=x170)&(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -456311584;
	int32_t x174 = INT32_MIN;
	static uint64_t x175 = UINT64_MAX;
	int16_t x176 = 0;
	int32_t t43 = -5;

    t43 = ((x173<=x174)&(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MIN;
	volatile int64_t x178 = INT64_MIN;
	volatile int64_t x179 = INT64_MAX;
	uint64_t x180 = 476735299373LLU;
	int32_t t44 = -19269620;

    t44 = ((x177<=x178)&(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	volatile uint32_t x183 = UINT32_MAX;

    t45 = ((x181<=x182)&(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static uint8_t x186 = 0U;
	static uint8_t x187 = 24U;
	int16_t x188 = 1;
	int32_t t46 = -1986788;

    t46 = ((x185<=x186)&(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = INT32_MIN;
	static volatile int32_t t47 = -6681535;

    t47 = ((x189<=x190)&(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = 11;
	int64_t x194 = -105637307107554LL;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = -426;
	int32_t t48 = -1;

    t48 = ((x193<=x194)&(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 17981U;
	volatile int64_t x198 = INT64_MIN;
	int8_t x200 = -57;
	volatile int32_t t49 = -1055;

    t49 = ((x197<=x198)&(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	int16_t x202 = -1;
	static uint64_t x203 = 880LLU;
	volatile int32_t t50 = 135121;

    t50 = ((x201<=x202)&(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t t51 = -10165518;

    t51 = ((x205<=x206)&(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x209 = 1;
	int32_t x210 = -1;
	volatile int8_t x212 = -26;
	int32_t t52 = -1;

    t52 = ((x209<=x210)&(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MIN;
	static int32_t x216 = -279644796;
	int32_t t53 = 888;

    t53 = ((x213<=x214)&(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	static uint64_t x218 = 49165LLU;
	int32_t x219 = -1;

    t54 = ((x217<=x218)&(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = -1;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;

    t55 = ((x221<=x222)&(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x226 = UINT64_MAX;
	int32_t t56 = 3856;

    t56 = ((x225<=x226)&(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 385018156U;
	volatile int8_t x230 = 1;
	uint8_t x232 = UINT8_MAX;

    t57 = ((x229<=x230)&(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = 80;
	volatile uint8_t x235 = 1U;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = 501968349;

    t58 = ((x233<=x234)&(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	static int32_t x239 = INT32_MIN;
	volatile uint32_t x240 = 1628008497U;
	int32_t t59 = -2494763;

    t59 = ((x237<=x238)&(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	static int64_t x242 = -1LL;
	int8_t x244 = -1;
	static volatile int32_t t60 = -2255;

    t60 = ((x241<=x242)&(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -5503;
	int32_t x248 = INT32_MAX;
	int32_t t61 = -1576;

    t61 = ((x245<=x246)&(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x250 = 79U;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;
	volatile int32_t t62 = -775;

    t62 = ((x249<=x250)&(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int32_t x254 = -10;
	int8_t x255 = -29;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -22;

    t63 = ((x253<=x254)&(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 3923230LL;
	int8_t x259 = INT8_MAX;
	int16_t x260 = 1734;
	volatile int32_t t64 = -39732;

    t64 = ((x257<=x258)&(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	volatile uint8_t x262 = 0U;
	volatile uint64_t x263 = 3LLU;
	static int16_t x264 = INT16_MIN;
	int32_t t65 = 4315623;

    t65 = ((x261<=x262)&(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 380U;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 0;

    t66 = ((x265<=x266)&(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	volatile int32_t x270 = 44981736;
	int32_t x271 = -7187;
	int16_t x272 = -899;
	int32_t t67 = 20;

    t67 = ((x269<=x270)&(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = 12U;
	int64_t x274 = INT64_MAX;
	static int64_t x276 = INT64_MAX;
	volatile int32_t t68 = 2;

    t68 = ((x273<=x274)&(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = INT32_MIN;
	int32_t x279 = 1;
	int32_t t69 = 16;

    t69 = ((x277<=x278)&(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x283 = -1;
	int8_t x284 = -43;
	int32_t t70 = 3;

    t70 = ((x281<=x282)&(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x286 = 9;
	static int32_t x287 = INT32_MIN;
	uint32_t x288 = UINT32_MAX;

    t71 = ((x285<=x286)&(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = INT16_MIN;
	uint64_t x290 = 3655364855LLU;
	volatile int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t72 = -3605;

    t72 = ((x289<=x290)&(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 0;
	volatile uint16_t x294 = UINT16_MAX;
	int32_t x295 = 2647234;
	static int8_t x296 = INT8_MIN;

    t73 = ((x293<=x294)&(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	int32_t x298 = INT32_MIN;
	uint64_t x299 = 281454325017853LLU;
	int8_t x300 = 1;
	volatile int32_t t74 = -1767;

    t74 = ((x297<=x298)&(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 1173U;
	uint32_t x302 = 223330461U;
	static volatile int32_t t75 = -63375;

    t75 = ((x301<=x302)&(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -499;
	uint16_t x306 = 3U;
	int64_t x307 = -1LL;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = -212;

    t76 = ((x305<=x306)&(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MIN;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -15040738;

    t77 = ((x309<=x310)&(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -13560;

    t78 = ((x313<=x314)&(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	static uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 3U;
	static uint32_t x320 = 784522947U;
	int32_t t79 = -68752886;

    t79 = ((x317<=x318)&(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = 17U;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = 45023038889447979LL;
	volatile int32_t t80 = -770655;

    t80 = ((x321<=x322)&(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -1;
	volatile int16_t x326 = -1;
	static int8_t x327 = 5;
	volatile uint8_t x328 = UINT8_MAX;
	int32_t t81 = 325273439;

    t81 = ((x325<=x326)&(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 10126322400945LLU;
	int32_t x330 = -2892320;
	uint16_t x331 = 43U;
	uint64_t x332 = UINT64_MAX;
	int32_t t82 = 105361;

    t82 = ((x329<=x330)&(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 1;
	static int16_t x334 = -1;
	int64_t x336 = -12047LL;
	volatile int32_t t83 = 2193389;

    t83 = ((x333<=x334)&(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x337 = -3752;
	uint64_t x338 = 60610407479395747LLU;
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = -7;

    t84 = ((x337<=x338)&(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = 79;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 104U;
	int32_t t85 = -361635;

    t85 = ((x341<=x342)&(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x345 = UINT32_MAX;
	int32_t x346 = -80102;
	static int64_t x347 = INT64_MIN;
	volatile int32_t x348 = 365172624;
	volatile int32_t t86 = 6;

    t86 = ((x345<=x346)&(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = UINT16_MAX;
	uint32_t x350 = 8U;
	int16_t x351 = 53;
	uint32_t x352 = UINT32_MAX;

    t87 = ((x349<=x350)&(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MIN;
	static int32_t t88 = 14718;

    t88 = ((x353<=x354)&(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	volatile int16_t x358 = -448;
	int64_t x359 = -1LL;
	static int8_t x360 = INT8_MAX;
	int32_t t89 = -1;

    t89 = ((x357<=x358)&(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -11;
	static int32_t x364 = INT32_MIN;

    t90 = ((x361<=x362)&(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	volatile uint16_t x366 = UINT16_MAX;
	int16_t x367 = INT16_MIN;
	static volatile int8_t x368 = -1;
	volatile int32_t t91 = -115605;

    t91 = ((x365<=x366)&(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MAX;
	int64_t x371 = INT64_MIN;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 219556;

    t92 = ((x369<=x370)&(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	uint16_t x375 = 495U;
	uint32_t x376 = UINT32_MAX;
	int32_t t93 = -700212;

    t93 = ((x373<=x374)&(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	static uint16_t x378 = 16U;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = 34LLU;
	volatile int32_t t94 = -3;

    t94 = ((x377<=x378)&(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x382 = 0;
	int64_t x383 = -1LL;
	static int32_t x384 = -1;

    t95 = ((x381<=x382)&(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = 1739165590824131LLU;
	uint64_t x387 = 132LLU;
	volatile int32_t t96 = 1743110;

    t96 = ((x385<=x386)&(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	int16_t x390 = INT16_MIN;
	static uint16_t x391 = UINT16_MAX;
	int32_t x392 = -1;
	static int32_t t97 = 0;

    t97 = ((x389<=x390)&(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x394 = -99852739669119LL;
	int64_t x395 = 2118500431757LL;
	uint16_t x396 = UINT16_MAX;
	int32_t t98 = -7215443;

    t98 = ((x393<=x394)&(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;

    t99 = ((x397<=x398)&(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 2215;
	uint8_t x403 = 3U;
	volatile uint16_t x404 = UINT16_MAX;

    t100 = ((x401<=x402)&(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 31309787U;
	static int16_t x406 = INT16_MIN;
	static uint32_t x407 = 1864032439U;
	int64_t x408 = INT64_MAX;
	int32_t t101 = -5726;

    t101 = ((x405<=x406)&(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	static uint32_t x410 = UINT32_MAX;
	int32_t x411 = INT32_MIN;
	int64_t x412 = 205LL;
	static int32_t t102 = 88616;

    t102 = ((x409<=x410)&(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = -41;
	int8_t x415 = INT8_MAX;
	int64_t x416 = INT64_MAX;

    t103 = ((x413<=x414)&(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	static int64_t x418 = 8LL;
	static int16_t x419 = -1;
	static int32_t t104 = -35533;

    t104 = ((x417<=x418)&(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	static int16_t x422 = 1;
	int16_t x423 = -1;
	int32_t x424 = INT32_MIN;

    t105 = ((x421<=x422)&(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = 1;
	int16_t x426 = INT16_MIN;
	int16_t x427 = -1534;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = 0;

    t106 = ((x425<=x426)&(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int64_t x430 = 205373538389327LL;
	int16_t x431 = -287;
	static int32_t x432 = INT32_MIN;
	int32_t t107 = 1351263;

    t107 = ((x429<=x430)&(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 0U;
	static int16_t x434 = INT16_MAX;
	volatile int64_t x436 = INT64_MAX;
	int32_t t108 = 813;

    t108 = ((x433<=x434)&(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x438 = 10U;

    t109 = ((x437<=x438)&(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	uint16_t x442 = UINT16_MAX;
	uint8_t x443 = 21U;
	uint16_t x444 = 208U;

    t110 = ((x441<=x442)&(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	static int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t111 = -3292654;

    t111 = ((x445<=x446)&(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MAX;
	volatile int8_t x451 = INT8_MAX;
	int32_t t112 = -1;

    t112 = ((x449<=x450)&(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x453 = UINT32_MAX;
	uint16_t x455 = 204U;
	int32_t t113 = -236793;

    t113 = ((x453<=x454)&(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x459 = -1LL;
	int16_t x460 = INT16_MIN;

    t114 = ((x457<=x458)&(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int8_t x462 = INT8_MIN;
	volatile uint8_t x463 = 18U;
	int16_t x464 = -9;
	int32_t t115 = 69372074;

    t115 = ((x461<=x462)&(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1234886120178LL;
	static uint16_t x466 = 0U;
	volatile uint32_t x467 = 17023U;
	static int64_t x468 = INT64_MAX;
	volatile int32_t t116 = 3490;

    t116 = ((x465<=x466)&(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 41245791174LL;
	volatile uint16_t x470 = 1U;
	uint8_t x471 = 41U;
	static uint64_t x472 = 125147527693LLU;

    t117 = ((x469<=x470)&(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MIN;
	static int32_t x475 = -1;
	static int32_t x476 = INT32_MAX;

    t118 = ((x473<=x474)&(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = 13;
	volatile uint64_t x479 = 27669936LLU;
	uint64_t x480 = 324477979853025LLU;
	volatile int32_t t119 = 0;

    t119 = ((x477<=x478)&(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = -1;
	uint8_t x483 = UINT8_MAX;
	volatile uint64_t x484 = 2113LLU;
	static volatile int32_t t120 = 1978647;

    t120 = ((x481<=x482)&(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 0U;
	int64_t x486 = -331012774654417447LL;
	int8_t x488 = -33;
	volatile int32_t t121 = -55922;

    t121 = ((x485<=x486)&(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MAX;
	int32_t t122 = 79;

    t122 = ((x489<=x490)&(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = INT16_MAX;
	int16_t x494 = -1;
	int16_t x495 = -1;
	volatile int32_t t123 = -7;

    t123 = ((x493<=x494)&(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 107U;
	volatile int16_t x500 = -1;
	volatile int32_t t124 = 9171510;

    t124 = ((x497<=x498)&(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = 33022937276LL;
	uint16_t x502 = 2906U;
	int8_t x503 = 1;
	volatile uint8_t x504 = 3U;
	int32_t t125 = 424011;

    t125 = ((x501<=x502)&(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	static int16_t x506 = -4808;
	static int32_t x508 = -425134;
	int32_t t126 = 551035;

    t126 = ((x505<=x506)&(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	static int8_t x512 = -1;
	volatile int32_t t127 = 0;

    t127 = ((x509<=x510)&(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	uint64_t x514 = UINT64_MAX;
	uint32_t x515 = 61518279U;
	uint8_t x516 = 7U;
	volatile int32_t t128 = 5815024;

    t128 = ((x513<=x514)&(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = -1;
	int8_t x518 = INT8_MAX;
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MAX;
	volatile int32_t t129 = -34074555;

    t129 = ((x517<=x518)&(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	static int8_t x524 = INT8_MIN;
	int32_t t130 = -1724;

    t130 = ((x521<=x522)&(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x526 = 0LL;
	int32_t x527 = INT32_MIN;
	int64_t x528 = INT64_MAX;

    t131 = ((x525<=x526)&(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int64_t x531 = -1LL;
	static int16_t x532 = 1;
	int32_t t132 = 69058619;

    t132 = ((x529<=x530)&(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = UINT8_MAX;
	int32_t x534 = INT32_MIN;
	static int64_t x536 = -883041LL;
	volatile int32_t t133 = -45451;

    t133 = ((x533<=x534)&(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = -1;
	volatile int64_t x538 = INT64_MIN;
	static uint64_t x539 = 10850526052311LLU;
	uint8_t x540 = 28U;
	int32_t t134 = 45180;

    t134 = ((x537<=x538)&(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MAX;
	int64_t x543 = INT64_MAX;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = 0;

    t135 = ((x541<=x542)&(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 1LL;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t136 = 2717235;

    t136 = ((x545<=x546)&(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 1632LLU;
	uint16_t x550 = 2U;
	volatile int64_t x551 = INT64_MIN;
	volatile uint64_t x552 = UINT64_MAX;
	int32_t t137 = 8;

    t137 = ((x549<=x550)&(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -319144LL;
	int8_t x554 = INT8_MAX;
	int16_t x555 = -1;
	volatile int32_t t138 = 227944;

    t138 = ((x553<=x554)&(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	uint8_t x558 = 3U;
	static int64_t x560 = INT64_MIN;
	volatile int32_t t139 = -174;

    t139 = ((x557<=x558)&(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 260U;
	int32_t x562 = INT32_MIN;
	int64_t x563 = -601LL;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t140 = -710346;

    t140 = ((x561<=x562)&(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x567 = INT64_MAX;
	volatile uint64_t x568 = 78LLU;
	int32_t t141 = -9746291;

    t141 = ((x565<=x566)&(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 3U;
	volatile uint32_t x570 = UINT32_MAX;
	int32_t x571 = -1064;
	int32_t t142 = 479;

    t142 = ((x569<=x570)&(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x575 = 1U;
	uint64_t x576 = 60284278157827LLU;

    t143 = ((x573<=x574)&(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = UINT64_MAX;
	int64_t x578 = -2141723536LL;
	int32_t t144 = -2;

    t144 = ((x577<=x578)&(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MAX;
	volatile int32_t t145 = 52742;

    t145 = ((x581<=x582)&(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	volatile int8_t x586 = INT8_MIN;
	static int8_t x588 = 1;
	volatile int32_t t146 = -7384;

    t146 = ((x585<=x586)&(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MIN;
	int32_t x591 = 664;
	volatile uint8_t x592 = 0U;
	volatile int32_t t147 = -927190;

    t147 = ((x589<=x590)&(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	int64_t x594 = 212848178137651LL;
	uint16_t x596 = 803U;
	volatile int32_t t148 = -15363;

    t148 = ((x593<=x594)&(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int32_t x599 = -685;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t149 = 4;

    t149 = ((x597<=x598)&(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	static int8_t x602 = -1;
	static volatile int32_t t150 = 36365239;

    t150 = ((x601<=x602)&(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x605 = 941LL;
	volatile int32_t x606 = INT32_MAX;
	volatile int8_t x607 = 3;
	static int16_t x608 = INT16_MIN;
	static int32_t t151 = 46;

    t151 = ((x605<=x606)&(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x609 = -6890869;
	int16_t x611 = INT16_MIN;
	volatile int32_t t152 = -15658;

    t152 = ((x609<=x610)&(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile int16_t x614 = INT16_MIN;
	int16_t x615 = -331;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t153 = -7977239;

    t153 = ((x613<=x614)&(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MIN;
	volatile int8_t x619 = -2;
	int16_t x620 = 6;
	volatile int32_t t154 = 31;

    t154 = ((x617<=x618)&(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	int64_t x622 = INT64_MIN;
	volatile uint64_t x624 = 759021274LLU;
	volatile int32_t t155 = -8030895;

    t155 = ((x621<=x622)&(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	uint8_t x626 = 3U;
	static int16_t x628 = 136;
	int32_t t156 = 737638657;

    t156 = ((x625<=x626)&(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	volatile uint16_t x630 = 0U;
	static volatile uint64_t x632 = 7138141338852LLU;
	static int32_t t157 = -20;

    t157 = ((x629<=x630)&(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	static uint32_t x634 = UINT32_MAX;
	uint64_t x635 = 1311262604LLU;
	static int8_t x636 = -1;
	int32_t t158 = -249559465;

    t158 = ((x633<=x634)&(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 69U;
	uint16_t x638 = 8U;
	int64_t x639 = -3243850537871221LL;
	uint8_t x640 = 19U;

    t159 = ((x637<=x638)&(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	uint32_t x643 = 336220U;
	int64_t x644 = INT64_MIN;
	static volatile int32_t t160 = 21;

    t160 = ((x641<=x642)&(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MIN;
	static volatile uint8_t x647 = 64U;
	volatile int32_t x648 = -1;
	static volatile int32_t t161 = 261754005;

    t161 = ((x645<=x646)&(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 3382U;
	volatile int64_t x650 = -1LL;
	volatile uint8_t x651 = 3U;
	uint32_t x652 = UINT32_MAX;
	static int32_t t162 = -323648300;

    t162 = ((x649<=x650)&(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x653 = UINT16_MAX;
	int8_t x654 = 3;
	int32_t x655 = INT32_MIN;
	volatile int16_t x656 = -1;
	volatile int32_t t163 = 32573369;

    t163 = ((x653<=x654)&(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -5301686083430140LL;
	int8_t x658 = 5;
	int64_t x659 = INT64_MIN;
	static int64_t x660 = -1LL;
	volatile int32_t t164 = -45862528;

    t164 = ((x657<=x658)&(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x661 = 505271154U;
	static uint64_t x662 = 155LLU;
	int32_t t165 = -15;

    t165 = ((x661<=x662)&(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x665 = INT64_MIN;
	volatile int32_t x666 = -1;
	static int64_t x667 = INT64_MAX;
	static int16_t x668 = -1;
	static volatile int32_t t166 = 1;

    t166 = ((x665<=x666)&(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = 1;
	volatile int16_t x670 = INT16_MIN;
	int32_t x671 = 5987;
	volatile int32_t t167 = -6342708;

    t167 = ((x669<=x670)&(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 4U;
	int32_t x674 = -13958135;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -13;

    t168 = ((x673<=x674)&(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x679 = INT64_MAX;
	static int8_t x680 = INT8_MIN;
	int32_t t169 = 52;

    t169 = ((x677<=x678)&(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int16_t x683 = INT16_MIN;

    t170 = ((x681<=x682)&(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -43;
	int16_t x686 = INT16_MAX;
	uint64_t x688 = 184LLU;
	volatile int32_t t171 = 383708;

    t171 = ((x685<=x686)&(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x691 = -3734198;
	int64_t x692 = -1LL;
	volatile int32_t t172 = -1;

    t172 = ((x689<=x690)&(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint8_t x694 = 62U;
	volatile int64_t x695 = INT64_MIN;
	volatile int64_t x696 = INT64_MIN;

    t173 = ((x693<=x694)&(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x697 = 195;
	volatile uint64_t x698 = UINT64_MAX;
	static volatile int64_t x699 = 1070733LL;
	int32_t x700 = INT32_MIN;

    t174 = ((x697<=x698)&(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	int32_t t175 = -221092791;

    t175 = ((x701<=x702)&(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	static int16_t x706 = INT16_MIN;
	int32_t t176 = 33714;

    t176 = ((x705<=x706)&(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int64_t x710 = 4682089656533LL;
	int64_t x711 = 113492586136LL;
	static int64_t x712 = 4LL;
	int32_t t177 = 426071;

    t177 = ((x709<=x710)&(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int8_t x714 = INT8_MIN;
	int16_t x715 = -1188;
	volatile int32_t x716 = 53;
	int32_t t178 = -68154159;

    t178 = ((x713<=x714)&(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = UINT8_MAX;
	int64_t x718 = INT64_MAX;
	static uint32_t x719 = 1716219U;
	volatile int32_t t179 = 396;

    t179 = ((x717<=x718)&(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int32_t x724 = INT32_MIN;

    t180 = ((x721<=x722)&(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 30491028818LLU;
	volatile int32_t x726 = INT32_MAX;
	volatile int8_t x727 = -1;
	int32_t t181 = -105723;

    t181 = ((x725<=x726)&(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 94U;
	static int64_t x732 = 231371509039LL;
	volatile int32_t t182 = -3;

    t182 = ((x729<=x730)&(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	static int32_t x736 = INT32_MAX;

    t183 = ((x733<=x734)&(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MAX;
	static volatile uint8_t x738 = 1U;
	static volatile int16_t x739 = -23;
	static volatile uint16_t x740 = 1102U;
	int32_t t184 = 74690;

    t184 = ((x737<=x738)&(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = 50212;
	uint64_t x742 = UINT64_MAX;
	int32_t x743 = INT32_MAX;
	volatile int8_t x744 = -1;
	volatile int32_t t185 = 9562;

    t185 = ((x741<=x742)&(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x746 = 5572U;
	int8_t x748 = INT8_MIN;
	int32_t t186 = -41414156;

    t186 = ((x745<=x746)&(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = UINT16_MAX;
	int8_t x750 = INT8_MIN;
	static int32_t x752 = -1;
	int32_t t187 = -52603;

    t187 = ((x749<=x750)&(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = 1;
	uint16_t x755 = UINT16_MAX;
	int8_t x756 = -14;
	int32_t t188 = 1824;

    t188 = ((x753<=x754)&(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x759 = UINT16_MAX;
	int64_t x760 = 687405250944519LL;
	int32_t t189 = -30546872;

    t189 = ((x757<=x758)&(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = INT8_MIN;
	uint8_t x762 = UINT8_MAX;
	volatile int32_t x763 = 3;
	volatile int32_t t190 = 53398;

    t190 = ((x761<=x762)&(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x766 = 25033176481037023LLU;
	uint32_t x767 = 93760U;
	int16_t x768 = INT16_MAX;

    t191 = ((x765<=x766)&(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = -1;
	uint16_t x770 = 3148U;
	int16_t x771 = INT16_MIN;
	volatile int32_t x772 = 98;
	int32_t t192 = 11541;

    t192 = ((x769<=x770)&(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	int8_t x774 = -1;
	int8_t x775 = -6;
	uint8_t x776 = 24U;
	int32_t t193 = -37895;

    t193 = ((x773<=x774)&(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = 354LL;
	uint32_t x778 = UINT32_MAX;
	int16_t x780 = INT16_MIN;
	static volatile int32_t t194 = 87578;

    t194 = ((x777<=x778)&(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = -968;
	int32_t x783 = 54;
	static int16_t x784 = -1;
	volatile int32_t t195 = 604;

    t195 = ((x781<=x782)&(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x785 = 10;
	uint16_t x786 = 3558U;
	uint64_t x787 = UINT64_MAX;
	int16_t x788 = INT16_MAX;
	volatile int32_t t196 = 912;

    t196 = ((x785<=x786)&(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x789 = -2683142500875LL;
	int32_t x790 = INT32_MAX;
	int16_t x791 = 0;
	volatile uint8_t x792 = UINT8_MAX;
	int32_t t197 = 93245430;

    t197 = ((x789<=x790)&(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 870359771236LLU;
	static int64_t x794 = INT64_MIN;
	uint64_t x796 = 1LLU;

    t198 = ((x793<=x794)&(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x800 = 105U;
	volatile int32_t t199 = -327;

    t199 = ((x797<=x798)&(x799!=x800));

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

