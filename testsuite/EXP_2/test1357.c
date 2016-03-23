
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

int16_t x1 = INT16_MAX;
volatile uint16_t x2 = 1546U;
static uint16_t x3 = UINT16_MAX;
volatile int32_t t0 = -3;
int32_t x13 = INT32_MIN;
int64_t x14 = 68517LL;
int32_t x16 = -1;
static int32_t t3 = 786066;
static volatile int32_t x30 = INT32_MAX;
volatile uint16_t x37 = 3317U;
int32_t x45 = INT32_MAX;
static uint8_t x49 = 31U;
static uint8_t x52 = 2U;
static volatile int16_t x54 = INT16_MIN;
int16_t x64 = INT16_MIN;
int8_t x65 = -1;
int64_t x71 = INT64_MIN;
int64_t x73 = INT64_MIN;
int32_t x77 = INT32_MAX;
int8_t x78 = INT8_MIN;
static int64_t x80 = INT64_MIN;
uint8_t x89 = UINT8_MAX;
static int8_t x90 = 0;
int64_t x99 = 1494732LL;
int64_t x104 = INT64_MIN;
int32_t t26 = 274;
uint64_t x118 = 165608LLU;
uint64_t x122 = 162137492LLU;
static int32_t x123 = -1;
int8_t x124 = INT8_MIN;
int16_t x127 = 220;
int16_t x129 = INT16_MAX;
volatile int32_t t33 = -97689775;
volatile int32_t t34 = -2916373;
int32_t x144 = INT32_MAX;
int16_t x145 = INT16_MIN;
volatile int32_t t36 = -12081606;
int64_t x150 = -2429LL;
uint8_t x159 = UINT8_MAX;
volatile int64_t t40 = 132335434203LL;
static int32_t t41 = 262576990;
uint16_t x169 = 569U;
static int32_t t42 = -560940;
int16_t x173 = INT16_MIN;
uint32_t x176 = 3U;
static uint8_t x179 = UINT8_MAX;
static volatile uint64_t t44 = 652370521685718LLU;
volatile int64_t t49 = -489261LL;
volatile int8_t x201 = -1;
int64_t x207 = INT64_MIN;
int64_t x208 = -1LL;
int8_t x210 = -5;
static int64_t x215 = -1LL;
uint8_t x220 = UINT8_MAX;
int32_t t56 = 2331113;
int16_t x233 = 12;
int64_t x235 = INT64_MAX;
uint64_t x238 = 803222665897536141LLU;
static volatile uint64_t t61 = 52328LLU;
int16_t x252 = INT16_MIN;
int64_t x253 = INT64_MAX;
volatile int64_t t63 = -36585LL;
int32_t x260 = -1;
int32_t t64 = 87404;
uint32_t x267 = 82114630U;
int64_t x272 = INT64_MIN;
uint16_t x274 = 11528U;
static uint64_t x275 = 412LLU;
static uint64_t x279 = 6372407693LLU;
volatile uint64_t t69 = 2467066LLU;
static int8_t x283 = -1;
uint64_t x290 = 382607LLU;
int32_t x292 = INT32_MIN;
int8_t x294 = 10;
uint16_t x296 = UINT16_MAX;
uint16_t x297 = 2648U;
int64_t t74 = INT64_MAX;
volatile uint8_t x302 = 25U;
uint32_t x305 = 2014U;
volatile uint64_t t77 = 1359118106LLU;
static int64_t x313 = 813218681198LL;
volatile int32_t x316 = -287803336;
int16_t x318 = INT16_MIN;
uint64_t x321 = 39776LLU;
int16_t x329 = 204;
volatile uint8_t x330 = UINT8_MAX;
volatile int64_t t82 = 67068092258LL;
int32_t x333 = 67;
uint16_t x343 = 1992U;
volatile int64_t t85 = INT64_MAX;
uint8_t x346 = 5U;
uint16_t x353 = 0U;
volatile uint16_t x358 = 2478U;
int32_t x361 = INT32_MIN;
uint32_t x363 = 977112U;
static uint64_t t91 = UINT64_MAX;
int8_t x370 = -1;
int64_t x374 = INT64_MIN;
volatile int8_t x376 = -1;
static volatile int32_t x378 = INT32_MIN;
static volatile int8_t x380 = INT8_MIN;
volatile uint64_t x381 = UINT64_MAX;
volatile int8_t x387 = INT8_MAX;
uint64_t x392 = 23LLU;
int8_t x398 = INT8_MIN;
volatile int8_t x402 = INT8_MIN;
int64_t x411 = INT64_MIN;
static int64_t x414 = INT64_MIN;
int64_t x415 = INT64_MIN;
int16_t x417 = 0;
volatile uint8_t x420 = UINT8_MAX;
int64_t x428 = INT64_MAX;
int8_t x429 = -1;
int64_t x439 = -1LL;
static int32_t x441 = INT32_MIN;
static int16_t x444 = INT16_MIN;
int16_t x447 = INT16_MIN;
int32_t x449 = -14019;
uint32_t x462 = 22896561U;
int32_t x467 = INT32_MAX;
static int16_t x468 = INT16_MIN;
int8_t x470 = INT8_MIN;
uint32_t x472 = UINT32_MAX;
uint16_t x474 = 77U;
int32_t x506 = INT32_MIN;
volatile int16_t x508 = INT16_MIN;
int16_t x511 = INT16_MIN;
uint32_t x517 = 26862U;
volatile uint32_t x528 = UINT32_MAX;
static int16_t x532 = INT16_MIN;
int16_t x534 = -90;
volatile uint16_t x536 = 14199U;
volatile int16_t x543 = INT16_MIN;
volatile uint32_t t135 = 5262U;
uint64_t x548 = 388087350LLU;
volatile uint64_t t136 = 30LLU;
int64_t t137 = INT64_MAX;
static int32_t x554 = INT32_MIN;
int64_t x558 = INT64_MIN;
static volatile uint64_t x560 = 33LLU;
volatile uint64_t t139 = 235741282290418597LLU;
int16_t x571 = INT16_MAX;
int32_t x572 = INT32_MAX;
uint64_t t142 = 54534995311832861LLU;
int8_t x573 = -3;
uint8_t x576 = 46U;
volatile uint32_t x578 = UINT32_MAX;
uint32_t x583 = 8848U;
int64_t x589 = INT64_MAX;
int64_t x597 = 1732421973570LL;
volatile int64_t x598 = 330LL;
int16_t x600 = -1;
volatile int64_t x601 = INT64_MIN;
uint64_t x607 = UINT64_MAX;
uint8_t x608 = UINT8_MAX;
uint32_t x611 = UINT32_MAX;
uint64_t x612 = 13931625528108351LLU;
uint64_t t152 = UINT64_MAX;
static int64_t x618 = INT64_MIN;
static uint16_t x619 = 3U;
int8_t x624 = INT8_MIN;
int32_t x628 = INT32_MAX;
int32_t t156 = 0;
int16_t x629 = INT16_MAX;
static int32_t x637 = -46153;
int8_t x658 = 1;
volatile int32_t t165 = 29;
uint8_t x671 = 112U;
volatile int8_t x674 = -1;
int64_t x679 = 381961907924LL;
int32_t x684 = -10;
uint32_t x685 = UINT32_MAX;
int8_t x690 = INT8_MIN;
volatile int64_t x700 = 119712089302LL;
static int8_t x701 = 1;
static int64_t x702 = INT64_MIN;
int8_t x703 = INT8_MIN;
static int32_t t175 = -1010540030;
static int64_t x705 = -1LL;
uint8_t x712 = 1U;
int8_t x731 = -1;
uint64_t t182 = UINT64_MAX;
int32_t x740 = -132949333;
int8_t x741 = INT8_MIN;
int16_t x742 = -4512;
uint32_t x756 = 2686514U;
volatile int16_t x757 = 222;
int8_t x758 = -1;
int64_t x759 = INT64_MIN;
int64_t x763 = INT64_MIN;
int32_t x770 = INT32_MIN;
uint8_t x775 = UINT8_MAX;
int64_t x780 = INT64_MIN;
static uint8_t x785 = 1U;
uint32_t x796 = UINT32_MAX;
int32_t x797 = -1;
volatile int32_t t199 = 7;


void f0(void) {
    	static int32_t x4 = -1;

    t0 = ((x1|(x2!=x3))|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -4513;
	int16_t x6 = INT16_MIN;
	static uint64_t x7 = 1287030457LLU;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 2911087;

    t1 = ((x5|(x6!=x7))|x8);

    if (t1 != -4513) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 1;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MAX;
	int16_t x12 = -3;
	volatile int32_t t2 = 661990;

    t2 = ((x9|(x10!=x11))|x12);

    if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = INT8_MIN;

    t3 = ((x13|(x14!=x15))|x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	volatile int32_t x18 = 259949128;
	static int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	volatile int64_t t4 = 489556LL;

    t4 = ((x17|(x18!=x19))|x20);

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int16_t x22 = -1535;
	int64_t x23 = 60LL;
	uint64_t x24 = 460757985742883LLU;
	uint64_t t5 = UINT64_MAX;

    t5 = ((x21|(x22!=x23))|x24);

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	volatile int64_t x27 = INT64_MIN;
	static volatile int32_t x28 = INT32_MAX;
	int64_t t6 = INT64_MAX;

    t6 = ((x25|(x26!=x27))|x28);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	volatile int16_t x31 = INT16_MIN;
	int32_t x32 = -1;
	int64_t t7 = 4241119519LL;

    t7 = ((x29|(x30!=x31))|x32);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = 373;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	static uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = ((x33|(x34!=x35))|x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x38 = INT16_MIN;
	static uint32_t x39 = UINT32_MAX;
	volatile int16_t x40 = -1892;
	int32_t t9 = 1;

    t9 = ((x37|(x38!=x39))|x40);

    if (t9 != -771) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	uint16_t x42 = 0U;
	int8_t x43 = -1;
	static int32_t x44 = INT32_MIN;
	static volatile int32_t t10 = -203;

    t10 = ((x41|(x42!=x43))|x44);

    if (t10 != -32767) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = -555656LL;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 1U;
	volatile uint32_t t11 = 305U;

    t11 = ((x45|(x46!=x47))|x48);

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 467;
	static int32_t x51 = -350780845;
	volatile int32_t t12 = -7935281;

    t12 = ((x49|(x50!=x51))|x52);

    if (t12 != 31) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 187U;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	uint32_t t13 = 2088106U;

    t13 = ((x53|(x54!=x55))|x56);

    if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	static int64_t x58 = INT64_MIN;
	uint16_t x59 = 355U;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 460021;

    t14 = ((x57|(x58!=x59))|x60);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	volatile uint32_t x62 = UINT32_MAX;
	int8_t x63 = INT8_MAX;
	int32_t t15 = -796;

    t15 = ((x61|(x62!=x63))|x64);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x66 = UINT16_MAX;
	int16_t x67 = INT16_MAX;
	uint16_t x68 = 6448U;
	volatile int32_t t16 = 150;

    t16 = ((x65|(x66!=x67))|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = 13LL;
	uint32_t x70 = 0U;
	static uint64_t x72 = 1740LLU;
	uint64_t t17 = 1094023198268LLU;

    t17 = ((x69|(x70!=x71))|x72);

    if (t17 != 1741LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x74 = 42U;
	int16_t x75 = 691;
	int64_t x76 = -447760LL;
	volatile int64_t t18 = 2819985777003563LL;

    t18 = ((x73|(x74!=x75))|x76);

    if (t18 != -447759LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = INT16_MIN;
	int64_t t19 = -2698558419719345LL;

    t19 = ((x77|(x78!=x79))|x80);

    if (t19 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MAX;
	uint8_t x83 = 26U;
	int16_t x84 = 626;
	static volatile int64_t t20 = -2LL;

    t20 = ((x81|(x82!=x83))|x84);

    if (t20 != -9223372036854775181LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x86 = -1;
	uint32_t x87 = 2054223315U;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = -206949025;

    t21 = ((x85|(x86!=x87))|x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x91 = 1;
	uint64_t x92 = 8894495445205LLU;
	volatile uint64_t t22 = 9320381078509497LLU;

    t22 = ((x89|(x90!=x91))|x92);

    if (t22 != 8894495445247LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 26839U;
	int8_t x94 = -6;
	int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	volatile int32_t t23 = 4623270;

    t23 = ((x93|(x94!=x95))|x96);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = -6156;
	uint32_t x98 = 886477U;
	int32_t x100 = -1;
	volatile int32_t t24 = -332786238;

    t24 = ((x97|(x98!=x99))|x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 13011363U;
	volatile int32_t x102 = -194;
	int64_t x103 = INT64_MIN;
	static int64_t t25 = -5531LL;

    t25 = ((x101|(x102!=x103))|x104);

    if (t25 != -9223372036841764445LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	volatile int8_t x108 = -1;

    t26 = ((x105|(x106!=x107))|x108);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint64_t x109 = 67301213944LLU;
	volatile uint64_t x110 = 772396026250274875LLU;
	static uint16_t x111 = UINT16_MAX;
	uint64_t x112 = 122654907002LLU;
	volatile uint64_t t27 = 23520324201298407LLU;

    t27 = ((x109|(x110!=x111))|x112);

    if (t27 != 136096734971LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	int8_t x114 = 0;
	int64_t x115 = -1993LL;
	int8_t x116 = 3;
	static volatile int32_t t28 = -13144;

    t28 = ((x113|(x114!=x115))|x116);

    if (t28 != -32765) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -1;
	int64_t t29 = -1069406398163821303LL;

    t29 = ((x117|(x118!=x119))|x120);

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x121 = 15634268390LLU;
	uint64_t t30 = 1LLU;

    t30 = ((x121|(x122!=x123))|x124);

    if (t30 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	uint8_t x126 = 122U;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 116631556;

    t31 = ((x125|(x126!=x127))|x128);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MAX;
	volatile int32_t x131 = -28575;
	static int8_t x132 = INT8_MAX;
	int32_t t32 = 7423;

    t32 = ((x129|(x130!=x131))|x132);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 111228136;
	volatile uint8_t x134 = 15U;
	volatile int64_t x135 = -118521513777689LL;
	static volatile int16_t x136 = INT16_MIN;

    t33 = ((x133|(x134!=x135))|x136);

    if (t33 != -19223) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 25U;
	int8_t x138 = -1;
	int8_t x139 = 2;
	int8_t x140 = 0;

    t34 = ((x137|(x138!=x139))|x140);

    if (t34 != 25) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	volatile int64_t x142 = -99965645368628LL;
	int16_t x143 = INT16_MIN;
	volatile int64_t t35 = 47931638400231173LL;

    t35 = ((x141|(x142!=x143))|x144);

    if (t35 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	static int16_t x148 = -1;

    t36 = ((x145|(x146!=x147))|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	static volatile uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 7U;
	uint32_t t37 = UINT32_MAX;

    t37 = ((x149|(x150!=x151))|x152);

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -105;
	static volatile int64_t x154 = INT64_MAX;
	int32_t x155 = -973404921;
	static int8_t x156 = -1;
	int32_t t38 = 8481;

    t38 = ((x153|(x154!=x155))|x156);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MAX;
	uint64_t x160 = 6682382329126LLU;
	volatile uint64_t t39 = 1260LLU;

    t39 = ((x157|(x158!=x159))|x160);

    if (t39 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	static volatile int8_t x162 = INT8_MIN;
	static int16_t x163 = 2366;
	int8_t x164 = -1;

    t40 = ((x161|(x162!=x163))|x164);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MAX;
	static uint8_t x167 = UINT8_MAX;
	int32_t x168 = 13991;

    t41 = ((x165|(x166!=x167))|x168);

    if (t41 != -18777) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = -50864;

    t42 = ((x169|(x170!=x171))|x172);

    if (t42 != -50311) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -12194;
	uint64_t x175 = UINT64_MAX;
	uint32_t t43 = 145625U;

    t43 = ((x173|(x174!=x175))|x176);

    if (t43 != 4294934531U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 445126763860687126LLU;
	static volatile int64_t x178 = INT64_MIN;
	int64_t x180 = INT64_MIN;

    t44 = ((x177|(x178!=x179))|x180);

    if (t44 != 9668498800715462935LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 125U;
	int8_t x182 = INT8_MAX;
	uint16_t x183 = UINT16_MAX;
	static volatile int8_t x184 = INT8_MAX;
	volatile int32_t t45 = -6294953;

    t45 = ((x181|(x182!=x183))|x184);

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 774;
	static int32_t x186 = INT32_MAX;
	static int32_t x187 = -1;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t46 = UINT32_MAX;

    t46 = ((x185|(x186!=x187))|x188);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 773330755U;
	uint8_t x190 = 54U;
	uint64_t x191 = 45180643606616899LLU;
	volatile int8_t x192 = INT8_MIN;
	static uint32_t t47 = 428U;

    t47 = ((x189|(x190!=x191))|x192);

    if (t47 != 4294967235U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	static int16_t x194 = -1;
	volatile uint8_t x195 = 3U;
	int16_t x196 = INT16_MAX;
	static int32_t t48 = INT32_MAX;

    t48 = ((x193|(x194!=x195))|x196);

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	int8_t x198 = INT8_MAX;
	static uint16_t x199 = 693U;
	volatile int64_t x200 = INT64_MIN;

    t49 = ((x197|(x198!=x199))|x200);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 1U;
	volatile uint8_t x203 = 32U;
	static volatile uint32_t x204 = 198U;
	volatile uint32_t t50 = UINT32_MAX;

    t50 = ((x201|(x202!=x203))|x204);

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = 14720582;
	int32_t x206 = INT32_MAX;
	volatile int64_t t51 = 420735592710916058LL;

    t51 = ((x205|(x206!=x207))|x208);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = -1;
	int16_t x211 = INT16_MIN;
	static uint16_t x212 = UINT16_MAX;
	static int32_t t52 = 95629;

    t52 = ((x209|(x210!=x211))|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x213 = 15U;
	int64_t x214 = INT64_MAX;
	static volatile int64_t x216 = INT64_MIN;
	volatile int64_t t53 = -125659LL;

    t53 = ((x213|(x214!=x215))|x216);

    if (t53 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 0;
	uint64_t x218 = 94700494214LLU;
	static uint64_t x219 = 18446407801719994LLU;
	volatile int32_t t54 = -217378203;

    t54 = ((x217|(x218!=x219))|x220);

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x221 = 384U;
	static uint16_t x222 = 32751U;
	static volatile int64_t x223 = -1LL;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -1;

    t55 = ((x221|(x222!=x223))|x224);

    if (t55 != -2147483263) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MAX;
	uint16_t x228 = 4U;

    t56 = ((x225|(x226!=x227))|x228);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -2237;
	volatile uint8_t x230 = UINT8_MAX;
	volatile int16_t x231 = -1513;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = 91527;

    t57 = ((x229|(x230!=x231))|x232);

    if (t57 != -2237) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x234 = 1U;
	volatile uint64_t x236 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

    t58 = ((x233|(x234!=x235))|x236);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	static int32_t x239 = 148;
	uint64_t x240 = 119994LLU;
	volatile uint64_t t59 = UINT64_MAX;

    t59 = ((x237|(x238!=x239))|x240);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = INT32_MAX;
	static int32_t t60 = -4585;

    t60 = ((x241|(x242!=x243))|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = -131242775LL;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = 17928944LLU;

    t61 = ((x245|(x246!=x247))|x248);

    if (t61 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 360072034;
	volatile int32_t x250 = INT32_MAX;
	int64_t x251 = INT64_MIN;
	volatile int32_t t62 = -322;

    t62 = ((x249|(x250!=x251))|x252);

    if (t62 != -15517) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x254 = INT16_MAX;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;

    t63 = ((x253|(x254!=x255))|x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 10U;
	int64_t x258 = 2LL;
	volatile int64_t x259 = -64536504156218LL;

    t64 = ((x257|(x258!=x259))|x260);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = INT16_MAX;
	volatile int16_t x262 = -1;
	uint8_t x263 = 12U;
	int64_t x264 = -1LL;
	int64_t t65 = -75019058134651574LL;

    t65 = ((x261|(x262!=x263))|x264);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	int16_t x266 = 732;
	int32_t x268 = -265067789;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = ((x265|(x266!=x267))|x268);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	uint32_t x270 = 118U;
	int64_t x271 = INT64_MAX;
	volatile int64_t t67 = 360189978LL;

    t67 = ((x269|(x270!=x271))|x272);

    if (t67 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MIN;
	static int32_t x276 = INT32_MIN;
	volatile int64_t t68 = -717295444866929346LL;

    t68 = ((x273|(x274!=x275))|x276);

    if (t68 != -2147483647LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 1647LLU;
	int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MIN;

    t69 = ((x277|(x278!=x279))|x280);

    if (t69 != 18446744071562069615LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	volatile int16_t x282 = INT16_MIN;
	int8_t x284 = -1;
	volatile int32_t t70 = -21;

    t70 = ((x281|(x282!=x283))|x284);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x286 = UINT16_MAX;
	static volatile uint64_t x287 = 102124366645LLU;
	uint16_t x288 = 1868U;
	int32_t t71 = 12492241;

    t71 = ((x285|(x286!=x287))|x288);

    if (t71 != -51) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x291 = -1LL;
	int32_t t72 = 628307;

    t72 = ((x289|(x290!=x291))|x292);

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	int64_t t73 = INT64_MAX;

    t73 = ((x293|(x294!=x295))|x296);

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = 1108U;
	int8_t x299 = INT8_MIN;
	int64_t x300 = INT64_MAX;

    t74 = ((x297|(x298!=x299))|x300);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = -1LL;
	volatile int64_t x303 = INT64_MIN;
	static uint16_t x304 = 2U;
	volatile int64_t t75 = -1764416551772641LL;

    t75 = ((x301|(x302!=x303))|x304);

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = 55;
	int16_t x307 = -5611;
	static int64_t x308 = -1LL;
	int64_t t76 = -1235776544142948803LL;

    t76 = ((x305|(x306!=x307))|x308);

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = 58261085LLU;
	int16_t x310 = INT16_MIN;
	static uint16_t x311 = 212U;
	uint16_t x312 = UINT16_MAX;

    t77 = ((x309|(x310!=x311))|x312);

    if (t77 != 58261503LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 37987U;
	volatile uint32_t x315 = 0U;
	static int64_t t78 = -2LL;

    t78 = ((x313|(x314!=x315))|x316);

    if (t78 != -2328193LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 34LL;
	uint32_t x319 = 14U;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = -224583LL;

    t79 = ((x317|(x318!=x319))|x320);

    if (t79 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x322 = -1;
	int32_t x323 = -1;
	static volatile int16_t x324 = INT16_MAX;
	static volatile uint64_t t80 = 119140LLU;

    t80 = ((x321|(x322!=x323))|x324);

    if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	volatile int64_t x326 = INT64_MIN;
	static volatile uint64_t x327 = 6100299095366796602LLU;
	int8_t x328 = -1;
	int64_t t81 = -7623491954573149LL;

    t81 = ((x325|(x326!=x327))|x328);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x331 = -1;
	volatile int64_t x332 = -114223LL;

    t82 = ((x329|(x330!=x331))|x332);

    if (t82 != -114211LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = -1;
	uint16_t x335 = 884U;
	int8_t x336 = INT8_MAX;
	int32_t t83 = -1;

    t83 = ((x333|(x334!=x335))|x336);

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	static int32_t x338 = -416;
	uint32_t x339 = 153U;
	int32_t x340 = -100;
	volatile int32_t t84 = -16108051;

    t84 = ((x337|(x338!=x339))|x340);

    if (t84 != -99) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 0U;
	int8_t x342 = INT8_MAX;
	int64_t x344 = INT64_MAX;

    t85 = ((x341|(x342!=x343))|x344);

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = INT8_MIN;
	static uint64_t x347 = 244064066119085LLU;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

    t86 = ((x345|(x346!=x347))|x348);

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x349 = -13540341LL;
	uint16_t x350 = 0U;
	static int8_t x351 = -1;
	static int8_t x352 = -1;
	static int64_t t87 = 5795873LL;

    t87 = ((x349|(x350!=x351))|x352);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = UINT64_MAX;
	static int16_t x355 = INT16_MIN;
	uint16_t x356 = 193U;
	volatile int32_t t88 = -3;

    t88 = ((x353|(x354!=x355))|x356);

    if (t88 != 193) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -12;
	int8_t x359 = -30;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = 3379402;

    t89 = ((x357|(x358!=x359))|x360);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = -1;
	uint64_t x364 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

    t90 = ((x361|(x362!=x363))|x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 13;
	int64_t x366 = INT64_MAX;
	static volatile int8_t x367 = -1;
	uint64_t x368 = UINT64_MAX;

    t91 = ((x365|(x366!=x367))|x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x371 = INT8_MIN;
	static int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -982691LL;

    t92 = ((x369|(x370!=x371))|x372);

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 9;
	static int16_t x375 = -1;
	int32_t t93 = 824312643;

    t93 = ((x373|(x374!=x375))|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	volatile int64_t x379 = INT64_MAX;
	volatile int32_t t94 = 105;

    t94 = ((x377|(x378!=x379))|x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x382 = INT16_MAX;
	volatile int64_t x383 = INT64_MAX;
	int8_t x384 = -1;
	uint64_t t95 = UINT64_MAX;

    t95 = ((x381|(x382!=x383))|x384);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	int32_t x388 = -526065107;
	volatile int32_t t96 = 180;

    t96 = ((x385|(x386!=x387))|x388);

    if (t96 != -526065107) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 1002467487LLU;
	uint8_t x390 = 70U;
	int32_t x391 = 73;
	volatile uint64_t t97 = 243LLU;

    t97 = ((x389|(x390!=x391))|x392);

    if (t97 != 1002467487LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x393 = 1150547774200086168LLU;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = 773390U;
	static volatile uint64_t t98 = 7937565LLU;

    t98 = ((x393|(x394!=x395))|x396);

    if (t98 != 1150547774200086431LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 21U;
	static volatile int32_t t99 = 14;

    t99 = ((x397|(x398!=x399))|x400);

    if (t99 != -2147483627) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	static volatile uint64_t x404 = 2776LLU;
	volatile uint64_t t100 = 30752179020LLU;

    t100 = ((x401|(x402!=x403))|x404);

    if (t100 != 18446744073709521625LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -6697664301LL;
	int64_t t101 = -553626920870292LL;

    t101 = ((x405|(x406!=x407))|x408);

    if (t101 != -6697664301LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = -2891;
	uint8_t x410 = 3U;
	uint64_t x412 = 41732832512929LLU;
	uint64_t t102 = 5645219108LLU;

    t102 = ((x409|(x410!=x411))|x412);

    if (t102 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	int64_t x416 = INT64_MAX;
	int64_t t103 = -1814326LL;

    t103 = ((x413|(x414!=x415))|x416);

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = INT8_MAX;
	int16_t x419 = -1;
	int32_t t104 = -112643070;

    t104 = ((x417|(x418!=x419))|x420);

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	int8_t x422 = -1;
	static int64_t x423 = INT64_MIN;
	int8_t x424 = -1;
	volatile int64_t t105 = -4447873200319154572LL;

    t105 = ((x421|(x422!=x423))|x424);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = UINT32_MAX;
	int64_t t106 = 1695477LL;

    t106 = ((x425|(x426!=x427))|x428);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = 534884496LLU;
	uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 1U;
	int32_t t107 = -8;

    t107 = ((x429|(x430!=x431))|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -83;
	int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	uint64_t x436 = 1499109251153557883LLU;
	static uint64_t t108 = UINT64_MAX;

    t108 = ((x433|(x434!=x435))|x436);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	volatile int16_t x438 = INT16_MIN;
	static int8_t x440 = INT8_MAX;
	int32_t t109 = -113716;

    t109 = ((x437|(x438!=x439))|x440);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = -1;
	int16_t x443 = INT16_MIN;
	static int32_t t110 = 1988;

    t110 = ((x441|(x442!=x443))|x444);

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = INT32_MIN;
	volatile uint16_t x446 = 242U;
	uint16_t x448 = 2070U;
	static int32_t t111 = 21;

    t111 = ((x445|(x446!=x447))|x448);

    if (t111 != -2147481577) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MAX;
	int16_t x452 = INT16_MAX;
	int32_t t112 = 3674145;

    t112 = ((x449|(x450!=x451))|x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 460653U;
	uint16_t x454 = 2872U;
	uint64_t x455 = 251657LLU;
	volatile int16_t x456 = INT16_MIN;
	volatile uint32_t t113 = 2886435U;

    t113 = ((x453|(x454!=x455))|x456);

    if (t113 != 4294936429U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	int8_t x458 = -1;
	int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MAX;
	int64_t t114 = 1210195345723LL;

    t114 = ((x457|(x458!=x459))|x460);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x461 = -1LL;
	int64_t x463 = -1LL;
	int16_t x464 = -1;
	volatile int64_t t115 = -532097660594207062LL;

    t115 = ((x461|(x462!=x463))|x464);

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = -1670;
	int16_t x466 = -1;
	int32_t t116 = 39;

    t116 = ((x465|(x466!=x467))|x468);

    if (t116 != -1669) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	static int8_t x471 = -4;
	uint32_t t117 = UINT32_MAX;

    t117 = ((x469|(x470!=x471))|x472);

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = -111905358584LL;
	uint64_t x475 = 1006LLU;
	volatile uint8_t x476 = UINT8_MAX;
	volatile int64_t t118 = 17203872109470LL;

    t118 = ((x473|(x474!=x475))|x476);

    if (t118 != -111905358337LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = 652491738U;
	int8_t x478 = INT8_MIN;
	int8_t x479 = -1;
	uint8_t x480 = UINT8_MAX;
	volatile uint32_t t119 = 13U;

    t119 = ((x477|(x478!=x479))|x480);

    if (t119 != 652491775U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = UINT64_MAX;
	static uint8_t x482 = UINT8_MAX;
	volatile int32_t x483 = 674;
	int8_t x484 = INT8_MIN;
	uint64_t t120 = UINT64_MAX;

    t120 = ((x481|(x482!=x483))|x484);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 3U;
	int16_t x486 = 0;
	volatile uint32_t x487 = UINT32_MAX;
	int16_t x488 = INT16_MIN;
	int32_t t121 = 66661571;

    t121 = ((x485|(x486!=x487))|x488);

    if (t121 != -32765) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	uint16_t x490 = UINT16_MAX;
	static int64_t x491 = 18827705458LL;
	int8_t x492 = -1;
	int64_t t122 = -407771749540168LL;

    t122 = ((x489|(x490!=x491))|x492);

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 8U;
	volatile int64_t x494 = INT64_MAX;
	int8_t x495 = -9;
	static uint64_t x496 = 69644940285298LLU;
	volatile uint64_t t123 = 509151LLU;

    t123 = ((x493|(x494!=x495))|x496);

    if (t123 != 69644940285307LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x497 = INT64_MIN;
	volatile int16_t x498 = INT16_MAX;
	int32_t x499 = INT32_MIN;
	static volatile uint16_t x500 = 41U;
	volatile int64_t t124 = 685777761782915LL;

    t124 = ((x497|(x498!=x499))|x500);

    if (t124 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x501 = 26322760LL;
	int8_t x502 = 1;
	static uint16_t x503 = 2U;
	int64_t x504 = INT64_MIN;
	int64_t t125 = 1LL;

    t125 = ((x501|(x502!=x503))|x504);

    if (t125 != -9223372036828453047LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int8_t x507 = -1;
	static volatile int32_t t126 = -23601;

    t126 = ((x505|(x506!=x507))|x508);

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MAX;
	static uint8_t x510 = UINT8_MAX;
	uint64_t x512 = UINT64_MAX;
	uint64_t t127 = UINT64_MAX;

    t127 = ((x509|(x510!=x511))|x512);

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -7940;
	int8_t x514 = -13;
	int16_t x515 = -1966;
	uint32_t x516 = 4806U;
	static uint32_t t128 = 20U;

    t128 = ((x513|(x514!=x515))|x516);

    if (t128 != 4294963967U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x518 = INT64_MIN;
	int32_t x519 = INT32_MAX;
	int16_t x520 = 7;
	uint32_t t129 = 0U;

    t129 = ((x517|(x518!=x519))|x520);

    if (t129 != 26863U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 3U;
	static int16_t x522 = -1;
	uint32_t x523 = 59313414U;
	uint32_t x524 = 676271U;
	static volatile uint32_t t130 = 183272U;

    t130 = ((x521|(x522!=x523))|x524);

    if (t130 != 676271U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = INT8_MIN;
	int8_t x526 = -1;
	uint8_t x527 = 12U;
	uint32_t t131 = UINT32_MAX;

    t131 = ((x525|(x526!=x527))|x528);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 2U;
	int64_t x530 = -1LL;
	uint16_t x531 = UINT16_MAX;
	volatile int32_t t132 = 3848;

    t132 = ((x529|(x530!=x531))|x532);

    if (t132 != -32765) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	static int64_t x535 = -1LL;
	uint32_t t133 = UINT32_MAX;

    t133 = ((x533|(x534!=x535))|x536);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MIN;
	int32_t x538 = INT32_MIN;
	int32_t x539 = INT32_MIN;
	int64_t x540 = -538507705918007853LL;
	int64_t t134 = 6562689LL;

    t134 = ((x537|(x538!=x539))|x540);

    if (t134 != -45LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x541 = 900939U;
	int16_t x542 = INT16_MIN;
	int16_t x544 = INT16_MAX;

    t135 = ((x541|(x542!=x543))|x544);

    if (t135 != 917503U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 0;
	static int32_t x546 = INT32_MIN;
	static uint8_t x547 = UINT8_MAX;

    t136 = ((x545|(x546!=x547))|x548);

    if (t136 != 388087351LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	int16_t x550 = INT16_MAX;
	int16_t x551 = -1;
	int8_t x552 = 1;

    t137 = ((x549|(x550!=x551))|x552);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	static uint16_t x555 = UINT16_MAX;
	int8_t x556 = -30;
	static int32_t t138 = -95;

    t138 = ((x553|(x554!=x555))|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1633054681011LL;
	int8_t x559 = -15;

    t139 = ((x557|(x558!=x559))|x560);

    if (t139 != 18446742440654870637LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x561 = 3;
	int64_t x562 = INT64_MAX;
	static int16_t x563 = INT16_MIN;
	int16_t x564 = 872;
	volatile int32_t t140 = -395934;

    t140 = ((x561|(x562!=x563))|x564);

    if (t140 != 875) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = INT8_MIN;
	static volatile uint16_t x566 = UINT16_MAX;
	uint32_t x567 = 3589U;
	uint8_t x568 = 31U;
	volatile int32_t t141 = 14;

    t141 = ((x565|(x566!=x567))|x568);

    if (t141 != -97) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 4088754461066350210LLU;
	int64_t x570 = INT64_MIN;

    t142 = ((x569|(x570!=x571))|x572);

    if (t142 != 4088754461441261567LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = INT8_MIN;
	int64_t x575 = -1LL;
	int32_t t143 = 58;

    t143 = ((x573|(x574!=x575))|x576);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int64_t x579 = INT64_MAX;
	uint16_t x580 = 494U;
	int32_t t144 = 4118087;

    t144 = ((x577|(x578!=x579))|x580);

    if (t144 != -17) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int32_t x582 = 9412893;
	int8_t x584 = -26;
	int32_t t145 = -691633030;

    t145 = ((x581|(x582!=x583))|x584);

    if (t145 != -25) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = -711;
	int8_t x586 = INT8_MIN;
	int32_t x587 = INT32_MIN;
	volatile int32_t x588 = -1;
	volatile int32_t t146 = -510205;

    t146 = ((x585|(x586!=x587))|x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x590 = 17U;
	uint32_t x591 = UINT32_MAX;
	static int64_t x592 = INT64_MAX;
	int64_t t147 = INT64_MAX;

    t147 = ((x589|(x590!=x591))|x592);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	uint8_t x594 = 6U;
	uint64_t x595 = 102335572682921891LLU;
	uint16_t x596 = 95U;
	volatile int32_t t148 = 431;

    t148 = ((x593|(x594!=x595))|x596);

    if (t148 != -32673) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x599 = INT16_MIN;
	int64_t t149 = -3987194562061537LL;

    t149 = ((x597|(x598!=x599))|x600);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x602 = 951606LLU;
	uint8_t x603 = UINT8_MAX;
	volatile int32_t x604 = 19908161;
	int64_t t150 = -414079888555769012LL;

    t150 = ((x601|(x602!=x603))|x604);

    if (t150 != -9223372036834867647LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = 27121LL;
	volatile int32_t x606 = INT32_MIN;
	volatile int64_t t151 = 52683953948310367LL;

    t151 = ((x605|(x606!=x607))|x608);

    if (t151 != 27135LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -25;
	volatile uint32_t x610 = 0U;

    t152 = ((x609|(x610!=x611))|x612);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 125340;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = UINT32_MAX;
	static int8_t x616 = -1;
	int32_t t153 = 2288390;

    t153 = ((x613|(x614!=x615))|x616);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -26;
	int64_t x620 = 27290092LL;
	int64_t t154 = -40007192LL;

    t154 = ((x617|(x618!=x619))|x620);

    if (t154 != -17LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	volatile int8_t x622 = INT8_MAX;
	uint64_t x623 = UINT64_MAX;
	int32_t t155 = -49334790;

    t155 = ((x621|(x622!=x623))|x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -6;
	static int8_t x626 = -1;
	int16_t x627 = INT16_MIN;

    t156 = ((x625|(x626!=x627))|x628);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = INT32_MIN;
	volatile int32_t x631 = INT32_MAX;
	volatile int16_t x632 = -1;
	int32_t t157 = 0;

    t157 = ((x629|(x630!=x631))|x632);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = 17;
	int16_t x634 = INT16_MAX;
	int16_t x635 = -7568;
	uint16_t x636 = UINT16_MAX;
	volatile int32_t t158 = 15264338;

    t158 = ((x633|(x634!=x635))|x636);

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = -693736;
	volatile uint16_t x639 = 863U;
	int32_t x640 = 2;
	static volatile int32_t t159 = -162576738;

    t159 = ((x637|(x638!=x639))|x640);

    if (t159 != -46153) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -5;
	volatile int64_t x642 = 111666369617767LL;
	uint64_t x643 = 1809338865LLU;
	uint16_t x644 = 15837U;
	int32_t t160 = 532970215;

    t160 = ((x641|(x642!=x643))|x644);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = INT16_MIN;
	static volatile int16_t x646 = -1;
	volatile int8_t x647 = INT8_MIN;
	int64_t x648 = INT64_MAX;
	static volatile int64_t t161 = -1LL;

    t161 = ((x645|(x646!=x647))|x648);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -4;
	uint8_t x650 = 2U;
	static volatile uint16_t x651 = 0U;
	static int8_t x652 = INT8_MIN;
	int32_t t162 = -1250251;

    t162 = ((x649|(x650!=x651))|x652);

    if (t162 != -3) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	int64_t x654 = INT64_MIN;
	static int8_t x655 = -1;
	uint16_t x656 = UINT16_MAX;
	int64_t t163 = 17401746273049071LL;

    t163 = ((x653|(x654!=x655))|x656);

    if (t163 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int16_t x659 = INT16_MAX;
	int8_t x660 = INT8_MAX;
	static volatile int32_t t164 = -4;

    t164 = ((x657|(x658!=x659))|x660);

    if (t164 != -2147483521) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x662 = INT32_MIN;
	volatile int16_t x663 = -209;
	static volatile int32_t x664 = INT32_MIN;

    t165 = ((x661|(x662!=x663))|x664);

    if (t165 != -2147418113) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -124737207309LL;
	int64_t x666 = INT64_MIN;
	int8_t x667 = INT8_MIN;
	uint32_t x668 = 9743U;
	volatile int64_t t166 = 474202132LL;

    t166 = ((x665|(x666!=x667))|x668);

    if (t166 != -124737198081LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -12;
	static int16_t x670 = -14983;
	static uint32_t x672 = 2U;
	uint32_t t167 = 2836U;

    t167 = ((x669|(x670!=x671))|x672);

    if (t167 != 4294967287U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = INT16_MAX;
	static volatile int64_t t168 = 20788060LL;

    t168 = ((x673|(x674!=x675))|x676);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = 1;
	int16_t x678 = -1;
	uint64_t x680 = 2230099751752430LLU;
	static uint64_t t169 = 16262836071496751LLU;

    t169 = ((x677|(x678!=x679))|x680);

    if (t169 != 2230099751752431LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x681 = UINT64_MAX;
	volatile uint16_t x682 = 87U;
	uint64_t x683 = UINT64_MAX;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = ((x681|(x682!=x683))|x684);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = 15251235348959LL;
	int32_t x687 = -1;
	uint8_t x688 = 60U;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = ((x685|(x686!=x687))|x688);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = -1;
	int16_t x691 = 6400;
	uint64_t x692 = UINT64_MAX;
	uint64_t t172 = UINT64_MAX;

    t172 = ((x689|(x690!=x691))|x692);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MAX;
	volatile uint64_t x695 = 1864350856LLU;
	volatile int32_t x696 = -1;
	static volatile int32_t t173 = 56556365;

    t173 = ((x693|(x694!=x695))|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	int8_t x698 = INT8_MAX;
	int32_t x699 = -1;
	int64_t t174 = 2303654205728349826LL;

    t174 = ((x697|(x698!=x699))|x700);

    if (t174 != -546994985LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x704 = 0;

    t175 = ((x701|(x702!=x703))|x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = INT32_MIN;
	uint16_t x707 = 56U;
	int32_t x708 = INT32_MIN;
	int64_t t176 = 3000513842395323LL;

    t176 = ((x705|(x706!=x707))|x708);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -6893;
	int8_t x710 = 1;
	volatile int16_t x711 = INT16_MAX;
	int32_t t177 = 12991843;

    t177 = ((x709|(x710!=x711))|x712);

    if (t177 != -6893) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -1LL;
	volatile uint64_t x714 = UINT64_MAX;
	static uint16_t x715 = 1U;
	volatile int8_t x716 = -1;
	volatile int64_t t178 = 261LL;

    t178 = ((x713|(x714!=x715))|x716);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = -1LL;
	int64_t x718 = INT64_MIN;
	volatile int16_t x719 = INT16_MIN;
	int8_t x720 = 1;
	volatile int64_t t179 = 29879933LL;

    t179 = ((x717|(x718!=x719))|x720);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 257600025U;
	int8_t x722 = INT8_MIN;
	int8_t x723 = INT8_MAX;
	int8_t x724 = -1;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = ((x721|(x722!=x723))|x724);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int64_t x726 = INT64_MIN;
	int16_t x727 = INT16_MAX;
	static int32_t x728 = -65803277;
	int32_t t181 = 290090;

    t181 = ((x725|(x726!=x727))|x728);

    if (t181 != -65798145) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	int8_t x730 = -1;
	int8_t x732 = INT8_MIN;

    t182 = ((x729|(x730!=x731))|x732);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x733 = UINT32_MAX;
	volatile uint16_t x734 = 0U;
	int32_t x735 = -158369;
	static int32_t x736 = -23712;
	uint32_t t183 = UINT32_MAX;

    t183 = ((x733|(x734!=x735))|x736);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x737 = UINT16_MAX;
	static int64_t x738 = INT64_MIN;
	volatile int16_t x739 = -1142;
	volatile int32_t t184 = 90385945;

    t184 = ((x737|(x738!=x739))|x740);

    if (t184 != -132907009) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x743 = -1;
	static volatile int8_t x744 = -1;
	volatile int32_t t185 = 1;

    t185 = ((x741|(x742!=x743))|x744);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	int64_t x746 = INT64_MAX;
	int32_t x747 = -1;
	static volatile int32_t x748 = INT32_MIN;
	int32_t t186 = -1;

    t186 = ((x745|(x746!=x747))|x748);

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x749 = 82411083944528LLU;
	int8_t x750 = INT8_MIN;
	uint64_t x751 = UINT64_MAX;
	uint32_t x752 = 3697U;
	static volatile uint64_t t187 = 353227LLU;

    t187 = ((x749|(x750!=x751))|x752);

    if (t187 != 82411083947633LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1LL;
	int16_t x754 = INT16_MIN;
	static int64_t x755 = INT64_MIN;
	static volatile int64_t t188 = -31270983086557LL;

    t188 = ((x753|(x754!=x755))|x756);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x760 = INT32_MIN;
	volatile int32_t t189 = -6337;

    t189 = ((x757|(x758!=x759))|x760);

    if (t189 != -2147483425) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	volatile int16_t x762 = INT16_MIN;
	int64_t x764 = -1LL;
	int64_t t190 = -2198063199600382915LL;

    t190 = ((x761|(x762!=x763))|x764);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 0U;
	volatile uint8_t x766 = 0U;
	static int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	int64_t t191 = 2528LL;

    t191 = ((x765|(x766!=x767))|x768);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = 99755LLU;
	volatile int16_t x771 = -9;
	int32_t x772 = -76177349;
	uint64_t t192 = 1914LLU;

    t192 = ((x769|(x770!=x771))|x772);

    if (t192 != 18446744073633375675LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MIN;
	int32_t x774 = 229198243;
	volatile uint32_t x776 = UINT32_MAX;
	uint32_t t193 = UINT32_MAX;

    t193 = ((x773|(x774!=x775))|x776);

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = -1;
	volatile int32_t x778 = INT32_MIN;
	volatile int16_t x779 = -1;
	volatile int64_t t194 = -7LL;

    t194 = ((x777|(x778!=x779))|x780);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = 30;
	int16_t x782 = INT16_MIN;
	volatile int32_t x783 = INT32_MAX;
	int32_t x784 = INT32_MAX;
	volatile int32_t t195 = INT32_MAX;

    t195 = ((x781|(x782!=x783))|x784);

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = INT64_MIN;
	int16_t x787 = -1;
	static uint32_t x788 = UINT32_MAX;
	uint32_t t196 = UINT32_MAX;

    t196 = ((x785|(x786!=x787))|x788);

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	volatile int64_t x790 = INT64_MAX;
	int32_t x791 = INT32_MAX;
	int16_t x792 = INT16_MIN;
	volatile int32_t t197 = -482775;

    t197 = ((x789|(x790!=x791))|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 1138127515U;
	volatile int32_t x794 = -1;
	int64_t x795 = -5796916LL;
	static uint32_t t198 = UINT32_MAX;

    t198 = ((x793|(x794!=x795))|x796);

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x798 = 887266LL;
	int8_t x799 = -1;
	int8_t x800 = -1;

    t199 = ((x797|(x798!=x799))|x800);

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

