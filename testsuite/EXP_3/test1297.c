
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

uint16_t x2 = 11U;
static uint16_t x11 = 0U;
uint8_t x17 = 7U;
uint32_t x25 = UINT32_MAX;
static int8_t x35 = 0;
uint8_t x36 = UINT8_MAX;
int32_t t8 = 102580;
int16_t x45 = INT16_MIN;
int32_t t11 = -570607;
int64_t x53 = 1092LL;
int32_t t13 = 1;
int64_t x63 = INT64_MIN;
int8_t x65 = -1;
uint64_t x68 = 363LLU;
uint64_t x70 = 5495LLU;
int32_t t17 = -1;
uint32_t x76 = UINT32_MAX;
uint8_t x77 = UINT8_MAX;
static volatile int64_t x79 = INT64_MAX;
volatile int32_t t19 = -703689050;
int32_t x82 = INT32_MAX;
volatile int32_t t20 = 361841;
int16_t x94 = 1025;
int32_t t23 = 3070;
volatile int8_t x105 = INT8_MIN;
int32_t t27 = -2561;
static volatile int32_t t28 = -4;
static int8_t x125 = INT8_MIN;
int16_t x131 = -1;
volatile int32_t t34 = -19;
uint8_t x147 = 93U;
int32_t x149 = INT32_MAX;
static volatile int8_t x155 = 23;
int8_t x158 = 0;
int32_t x165 = -37;
static int8_t x166 = INT8_MIN;
int32_t t41 = 37776761;
uint8_t x177 = 41U;
volatile uint32_t x178 = 29608U;
int32_t t47 = -164776;
int8_t x193 = 4;
static volatile int32_t t48 = -2156260;
int16_t x212 = INT16_MIN;
uint8_t x218 = 4U;
int32_t t56 = 4;
int64_t x230 = 9897LL;
int16_t x241 = 3;
static uint8_t x242 = 8U;
static int8_t x243 = -10;
uint32_t x252 = 1078U;
static uint64_t x255 = UINT64_MAX;
int32_t t63 = -27335;
volatile uint16_t x264 = 6582U;
static uint32_t x270 = UINT32_MAX;
int8_t x271 = INT8_MIN;
volatile int32_t t67 = 74725;
static uint16_t x273 = 61U;
int32_t t68 = 1;
int16_t x277 = INT16_MIN;
uint64_t x282 = 1190472966325386361LLU;
volatile int32_t x287 = INT32_MIN;
int16_t x289 = INT16_MIN;
int32_t x291 = 17;
uint64_t x297 = UINT64_MAX;
int64_t x300 = INT64_MIN;
int32_t t74 = 1;
volatile uint64_t x302 = 185701768924013LLU;
uint16_t x305 = UINT16_MAX;
int8_t x309 = 22;
volatile int64_t x315 = INT64_MIN;
static volatile int32_t t79 = -27807;
static uint16_t x326 = 10621U;
static int32_t t81 = -7;
int32_t x332 = 9;
volatile int32_t t83 = 1993030;
uint64_t x342 = 373388LLU;
volatile uint32_t x346 = UINT32_MAX;
uint16_t x351 = UINT16_MAX;
static volatile int64_t x352 = 1LL;
static int16_t x355 = 0;
volatile int32_t t89 = 1169176;
uint8_t x369 = 4U;
int16_t x371 = -1;
volatile int32_t t92 = -463;
volatile int32_t x385 = -1;
static int32_t t96 = -5322;
uint64_t x393 = UINT64_MAX;
int32_t t98 = -160060;
int8_t x403 = 1;
static int16_t x405 = INT16_MAX;
int64_t x407 = -1031LL;
static int32_t t102 = -160294;
int32_t t103 = 683667404;
uint8_t x419 = UINT8_MAX;
int32_t x424 = -3786110;
int32_t t106 = -6583601;
static int64_t x429 = -1LL;
int64_t x437 = INT64_MAX;
uint16_t x448 = 1489U;
int32_t x456 = INT32_MIN;
static uint32_t x458 = UINT32_MAX;
volatile int32_t t116 = 0;
int32_t t117 = -244956941;
static uint64_t x476 = 15341587361LLU;
int16_t x477 = INT16_MIN;
static int32_t x479 = INT32_MIN;
uint64_t x480 = UINT64_MAX;
volatile int32_t t121 = 5850909;
volatile int16_t x489 = INT16_MIN;
volatile uint64_t x501 = 6LLU;
volatile uint64_t x502 = UINT64_MAX;
uint8_t x505 = UINT8_MAX;
int32_t t126 = -2061350;
int32_t x509 = INT32_MIN;
int8_t x512 = 10;
uint64_t x530 = 6353LLU;
int64_t x536 = INT64_MIN;
static int8_t x549 = INT8_MIN;
int8_t x558 = 6;
uint64_t x561 = UINT64_MAX;
uint64_t x562 = UINT64_MAX;
static int64_t x564 = INT64_MAX;
int16_t x565 = INT16_MIN;
uint16_t x566 = 183U;
static int64_t x571 = INT64_MIN;
volatile uint64_t x575 = 20002080LLU;
int64_t x584 = -1LL;
volatile uint32_t x587 = 69192U;
volatile uint16_t x607 = 565U;
int16_t x610 = INT16_MIN;
uint8_t x614 = 127U;
int64_t x618 = INT64_MIN;
int32_t x622 = INT32_MAX;
int32_t t155 = 1;
uint32_t x645 = 2118071870U;
static uint32_t x651 = 7157U;
volatile int32_t t162 = -390;
int16_t x655 = INT16_MIN;
volatile int16_t x656 = 0;
volatile int32_t t164 = 992092;
uint32_t x663 = 7U;
int32_t t165 = -45777560;
volatile int32_t t166 = -38;
static volatile int8_t x674 = 41;
volatile int32_t t168 = -1841;
volatile int32_t t169 = 1059952;
int8_t x685 = -1;
uint32_t x686 = 21U;
volatile int32_t t171 = -18938396;
int64_t x695 = -1LL;
int16_t x697 = INT16_MAX;
uint16_t x705 = 22U;
uint16_t x710 = 11594U;
static uint32_t x711 = 28655U;
volatile uint64_t x713 = 193976LLU;
uint32_t x726 = 34U;
int16_t x727 = -1;
uint8_t x731 = 13U;
volatile int32_t t182 = -9542;
volatile uint64_t x740 = UINT64_MAX;
int32_t x743 = INT32_MAX;
static volatile int32_t t186 = 5;
int16_t x755 = 11;
static int32_t t188 = 45749;
int32_t t189 = -11;
volatile int16_t x766 = 540;
uint32_t x772 = 20U;
static int32_t t192 = -414731;
volatile uint8_t x775 = 1U;
uint32_t x779 = UINT32_MAX;
volatile int16_t x788 = 121;
uint8_t x790 = 26U;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int32_t x3 = -2788;
	static volatile int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = -1998654;

    t0 = ((x1>x2)>(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	static int8_t x6 = INT8_MAX;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = -61307;
	int32_t t1 = -995;

    t1 = ((x5>x6)>(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 20651751U;
	int8_t x10 = INT8_MIN;
	uint8_t x12 = 5U;
	int32_t t2 = -27333;

    t2 = ((x9>x10)>(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = -112;
	uint16_t x14 = 11U;
	int32_t x15 = INT32_MAX;
	volatile int32_t x16 = -1;
	volatile int32_t t3 = 73822;

    t3 = ((x13>x14)>(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x18 = 115763U;
	int8_t x19 = -1;
	uint8_t x20 = 16U;
	int32_t t4 = 55;

    t4 = ((x17>x18)>(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = 5;
	uint16_t x23 = UINT16_MAX;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -57534568;

    t5 = ((x21>x22)>(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 53U;
	int32_t x27 = INT32_MIN;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -14270;

    t6 = ((x25>x26)>(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = 85U;
	static int64_t x30 = -1234LL;
	int8_t x31 = 0;
	volatile uint8_t x32 = 54U;
	volatile int32_t t7 = -505060767;

    t7 = ((x29>x30)>(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 6249U;
	volatile int16_t x34 = 1663;

    t8 = ((x33>x34)>(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 165U;
	static uint8_t x38 = 42U;
	static int64_t x39 = -1LL;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -399651896;

    t9 = ((x37>x38)>(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	static int16_t x42 = -1;
	int64_t x43 = -1LL;
	static int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -2071378;

    t10 = ((x41>x42)>(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 934U;
	int64_t x47 = INT64_MIN;
	static volatile uint32_t x48 = UINT32_MAX;

    t11 = ((x45>x46)>(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 1U;
	volatile uint8_t x50 = 0U;
	volatile int8_t x51 = -42;
	int32_t x52 = INT32_MAX;
	int32_t t12 = 80;

    t12 = ((x49>x50)>(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = INT16_MIN;
	int8_t x55 = -1;
	int32_t x56 = INT32_MIN;

    t13 = ((x53>x54)>(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = 32;
	int64_t x58 = INT64_MAX;
	uint64_t x59 = 528802806252LLU;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 8253;

    t14 = ((x57>x58)>(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = -1;
	volatile int16_t x62 = INT16_MAX;
	static int64_t x64 = -9061LL;
	int32_t t15 = 455139;

    t15 = ((x61>x62)>(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x66 = INT64_MAX;
	static int8_t x67 = -1;
	int32_t t16 = 31;

    t16 = ((x65>x66)>(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int8_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;

    t17 = ((x69>x70)>(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	volatile uint32_t x74 = 15396644U;
	static uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = -2573;

    t18 = ((x73>x74)>(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -1;
	static uint8_t x80 = UINT8_MAX;

    t19 = ((x77>x78)>(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -3;
	int64_t x83 = -1847080592036350444LL;
	int32_t x84 = -1;

    t20 = ((x81>x82)>(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -13357;
	int64_t x86 = -1LL;
	uint8_t x87 = 1U;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -2588;

    t21 = ((x85>x86)>(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -5028502905291035LL;
	uint8_t x90 = 12U;
	int64_t x91 = 20LL;
	static volatile uint64_t x92 = 267718437637958LLU;
	static volatile int32_t t22 = -318593912;

    t22 = ((x89>x90)>(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -173592;
	uint32_t x95 = 14754U;
	int32_t x96 = -1;

    t23 = ((x93>x94)>(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 1059;
	static volatile int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	int32_t t24 = 1546;

    t24 = ((x97>x98)>(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x101 = 262917839LLU;
	int32_t x102 = -1;
	static uint16_t x103 = UINT16_MAX;
	volatile uint16_t x104 = 82U;
	int32_t t25 = 29;

    t25 = ((x101>x102)>(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	uint32_t x108 = 7941U;
	int32_t t26 = -1;

    t26 = ((x105>x106)>(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int8_t x110 = -1;
	int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;

    t27 = ((x109>x110)>(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = INT16_MAX;
	int32_t x115 = -1;
	static volatile int16_t x116 = INT16_MIN;

    t28 = ((x113>x114)>(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile uint8_t x118 = 2U;
	static int16_t x119 = 1;
	static int16_t x120 = -13957;
	volatile int32_t t29 = -44780999;

    t29 = ((x117>x118)>(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 6;
	volatile uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MAX;
	volatile int16_t x124 = INT16_MIN;
	static int32_t t30 = -935112676;

    t30 = ((x121>x122)>(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x126 = UINT64_MAX;
	static volatile uint16_t x127 = 45U;
	int16_t x128 = 8;
	volatile int32_t t31 = 1;

    t31 = ((x125>x126)>(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	volatile uint8_t x132 = 50U;
	volatile int32_t t32 = 133;

    t32 = ((x129>x130)>(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x133 = UINT32_MAX;
	int64_t x134 = INT64_MAX;
	int32_t x135 = 158;
	uint64_t x136 = 18694LLU;
	volatile int32_t t33 = -4;

    t33 = ((x133>x134)>(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int64_t x138 = -23193407LL;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;

    t34 = ((x137>x138)>(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = INT32_MAX;
	int32_t x142 = -8999;
	uint64_t x143 = 9357LLU;
	uint64_t x144 = 895344817256749130LLU;
	volatile int32_t t35 = -15;

    t35 = ((x141>x142)>(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x145 = -1;
	static uint64_t x146 = 79082070361170475LLU;
	static volatile uint64_t x148 = 3LLU;
	int32_t t36 = -431050;

    t36 = ((x145>x146)>(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x150 = 14U;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -125301;

    t37 = ((x149>x150)>(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x153 = 88U;
	uint64_t x154 = 511058LLU;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 14;

    t38 = ((x153>x154)>(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 2;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = -1;
	static volatile int32_t t39 = 14206;

    t39 = ((x157>x158)>(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	int16_t x162 = -1;
	volatile int32_t x163 = -1;
	int8_t x164 = 1;
	volatile int32_t t40 = 861227;

    t40 = ((x161>x162)>(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x167 = -1LL;
	int16_t x168 = -28;

    t41 = ((x165>x166)>(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = 2U;
	int32_t x170 = INT32_MAX;
	volatile int64_t x171 = INT64_MAX;
	int8_t x172 = 3;
	volatile int32_t t42 = -25310413;

    t42 = ((x169>x170)>(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = -54;
	volatile uint64_t x175 = 15992790LLU;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = -5800;

    t43 = ((x173>x174)>(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x179 = INT64_MIN;
	int32_t x180 = 0;
	int32_t t44 = -43651099;

    t44 = ((x177>x178)>(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = -1;
	volatile uint64_t x182 = 3772519107687572252LLU;
	static int32_t x183 = -1;
	static uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = 5;

    t45 = ((x181>x182)>(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	static uint8_t x186 = 3U;
	static uint64_t x187 = 12LLU;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 1;

    t46 = ((x185>x186)>(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = 55324957036569172LL;
	int16_t x190 = -1;
	uint16_t x191 = 15926U;
	uint64_t x192 = 18328771047202LLU;

    t47 = ((x189>x190)>(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x194 = 1U;
	int64_t x195 = INT64_MAX;
	int32_t x196 = -38;

    t48 = ((x193>x194)>(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 4048;
	int32_t x199 = INT32_MAX;
	volatile int16_t x200 = 601;
	static int32_t t49 = 816;

    t49 = ((x197>x198)>(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 881825;
	int16_t x202 = INT16_MAX;
	static uint64_t x203 = 6107LLU;
	static uint8_t x204 = 72U;
	int32_t t50 = 82;

    t50 = ((x201>x202)>(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -215053031;
	uint64_t x206 = 43708296LLU;
	uint64_t x207 = 29LLU;
	uint16_t x208 = 1U;
	static int32_t t51 = -5031203;

    t51 = ((x205>x206)>(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = 22782U;
	int16_t x210 = -250;
	uint64_t x211 = 1LLU;
	volatile int32_t t52 = 7876075;

    t52 = ((x209>x210)>(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint8_t x214 = 1U;
	static uint16_t x215 = UINT16_MAX;
	static int8_t x216 = INT8_MIN;
	int32_t t53 = -165010379;

    t53 = ((x213>x214)>(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 139386896;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = 3;
	volatile int32_t t54 = 34159;

    t54 = ((x217>x218)>(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	int16_t x222 = 64;
	static volatile int16_t x223 = INT16_MIN;
	uint8_t x224 = 54U;
	int32_t t55 = -2351;

    t55 = ((x221>x222)>(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;

    t56 = ((x225>x226)>(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 2854U;
	uint8_t x231 = 98U;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 238180385;

    t57 = ((x229>x230)>(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = -10;
	static int16_t x234 = -453;
	volatile int16_t x235 = -14195;
	volatile int64_t x236 = INT64_MIN;
	int32_t t58 = -57344;

    t58 = ((x233>x234)>(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = -419;
	int64_t x239 = 34LL;
	int8_t x240 = -1;
	int32_t t59 = -1;

    t59 = ((x237>x238)>(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x244 = INT8_MAX;
	static volatile int32_t t60 = 52732;

    t60 = ((x241>x242)>(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 54LL;
	int32_t x246 = -1;
	int32_t x247 = -1568;
	int32_t x248 = -1;
	volatile int32_t t61 = -477411;

    t61 = ((x245>x246)>(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MAX;
	static uint64_t x250 = 52406344LLU;
	int16_t x251 = INT16_MIN;
	int32_t t62 = 334773133;

    t62 = ((x249>x250)>(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x253 = 4U;
	static uint64_t x254 = 52645739LLU;
	static int64_t x256 = -1LL;

    t63 = ((x253>x254)>(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = UINT32_MAX;
	uint32_t x258 = UINT32_MAX;
	static uint64_t x259 = 51086723922682LLU;
	static int64_t x260 = -2005001733514513LL;
	volatile int32_t t64 = 0;

    t64 = ((x257>x258)>(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -26823LL;
	int32_t x262 = 0;
	int64_t x263 = INT64_MIN;
	int32_t t65 = -3174560;

    t65 = ((x261>x262)>(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = INT16_MIN;
	static int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MIN;
	volatile int64_t x268 = INT64_MAX;
	int32_t t66 = -45;

    t66 = ((x265>x266)>(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 12602;
	uint8_t x272 = UINT8_MAX;

    t67 = ((x269>x270)>(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x274 = 831039451194989942LLU;
	int64_t x275 = INT64_MIN;
	int16_t x276 = 1;

    t68 = ((x273>x274)>(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x278 = 2560U;
	int64_t x279 = INT64_MIN;
	uint32_t x280 = 3U;
	int32_t t69 = 387;

    t69 = ((x277>x278)>(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = INT64_MIN;
	volatile int16_t x283 = -570;
	int32_t x284 = INT32_MIN;
	volatile int32_t t70 = -2862606;

    t70 = ((x281>x282)>(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = -1;
	int32_t x286 = 106095;
	uint8_t x288 = 12U;
	int32_t t71 = 198869453;

    t71 = ((x285>x286)>(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -1;
	volatile int8_t x292 = -33;
	volatile int32_t t72 = 55;

    t72 = ((x289>x290)>(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = UINT32_MAX;
	static volatile int8_t x294 = -1;
	static int8_t x295 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 665;

    t73 = ((x293>x294)>(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x298 = INT32_MIN;
	int32_t x299 = -1;

    t74 = ((x297>x298)>(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 0U;
	int8_t x303 = 6;
	int8_t x304 = -1;
	int32_t t75 = -57959;

    t75 = ((x301>x302)>(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = 0;
	int64_t x307 = INT64_MAX;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 65847934;

    t76 = ((x305>x306)>(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = -1LL;
	int64_t x311 = 7601125801573LL;
	int64_t x312 = INT64_MIN;
	int32_t t77 = 1060460138;

    t77 = ((x309>x310)>(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 1;
	static uint16_t x314 = UINT16_MAX;
	int32_t x316 = -1;
	static volatile int32_t t78 = -287045;

    t78 = ((x313>x314)>(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x317 = INT64_MAX;
	int8_t x318 = -1;
	int64_t x319 = INT64_MIN;
	static uint16_t x320 = 17711U;

    t79 = ((x317>x318)>(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	static volatile uint16_t x322 = 893U;
	uint16_t x323 = 17U;
	static int16_t x324 = -1;
	volatile int32_t t80 = 4;

    t80 = ((x321>x322)>(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = 11;
	uint64_t x327 = UINT64_MAX;
	volatile uint16_t x328 = UINT16_MAX;

    t81 = ((x325>x326)>(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -76;
	int64_t x330 = 782034LL;
	uint32_t x331 = 1167U;
	static int32_t t82 = 0;

    t82 = ((x329>x330)>(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 1U;
	volatile uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 0U;
	uint8_t x336 = 8U;

    t83 = ((x333>x334)>(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	static int32_t x338 = -1;
	uint16_t x339 = 24798U;
	volatile int16_t x340 = 12;
	int32_t t84 = -1;

    t84 = ((x337>x338)>(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -50078322;
	volatile uint64_t x343 = UINT64_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 4709949;

    t85 = ((x341>x342)>(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	static uint16_t x347 = UINT16_MAX;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 57;

    t86 = ((x345>x346)>(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 1014573366506318LLU;
	uint16_t x350 = 3426U;
	int32_t t87 = 69;

    t87 = ((x349>x350)>(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 3U;
	volatile int64_t x354 = -11104942672551051LL;
	uint16_t x356 = 31U;
	int32_t t88 = 1;

    t88 = ((x353>x354)>(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	volatile int64_t x358 = -1LL;
	int16_t x359 = -1;
	static uint64_t x360 = UINT64_MAX;

    t89 = ((x357>x358)>(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	uint32_t x362 = 1U;
	uint32_t x363 = 2U;
	int8_t x364 = -1;
	int32_t t90 = 140244943;

    t90 = ((x361>x362)>(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 316026552U;
	int32_t x366 = INT32_MIN;
	static uint16_t x367 = 4995U;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -11843301;

    t91 = ((x365>x366)>(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x370 = -1;
	uint16_t x372 = 2429U;

    t92 = ((x369>x370)>(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	int16_t x374 = -1;
	int8_t x375 = INT8_MAX;
	volatile int16_t x376 = INT16_MIN;
	volatile int32_t t93 = 327702;

    t93 = ((x373>x374)>(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 506LLU;
	int64_t x378 = INT64_MIN;
	volatile int8_t x379 = -11;
	volatile uint16_t x380 = 4U;
	volatile int32_t t94 = 144026;

    t94 = ((x377>x378)>(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	uint8_t x382 = 122U;
	int16_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 1359156;

    t95 = ((x381>x382)>(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x386 = UINT32_MAX;
	volatile uint8_t x387 = UINT8_MAX;
	volatile uint16_t x388 = 4043U;

    t96 = ((x385>x386)>(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 26317U;
	uint16_t x390 = 10322U;
	int16_t x391 = 0;
	uint8_t x392 = 10U;
	int32_t t97 = 103995;

    t97 = ((x389>x390)>(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 47U;
	int8_t x395 = -1;
	static int32_t x396 = INT32_MAX;

    t98 = ((x393>x394)>(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x397 = 2U;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	static int32_t x400 = 28944;
	int32_t t99 = 11;

    t99 = ((x397>x398)>(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 1LLU;
	int64_t x402 = -1LL;
	int64_t x404 = INT64_MIN;
	volatile int32_t t100 = -3958932;

    t100 = ((x401>x402)>(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = -64;
	static uint16_t x408 = 28361U;
	volatile int32_t t101 = 758880;

    t101 = ((x405>x406)>(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	uint64_t x410 = UINT64_MAX;
	static int8_t x411 = INT8_MAX;
	int16_t x412 = INT16_MIN;

    t102 = ((x409>x410)>(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = -1;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = 11694621U;
	int64_t x416 = -1LL;

    t103 = ((x413>x414)>(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	static int16_t x418 = -57;
	int32_t x420 = INT32_MIN;
	int32_t t104 = -1547;

    t104 = ((x417>x418)>(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -1;
	static int8_t x422 = INT8_MIN;
	static uint16_t x423 = 31U;
	volatile int32_t t105 = 350578;

    t105 = ((x421>x422)>(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	volatile int8_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	static int64_t x428 = -53821685801679278LL;

    t106 = ((x425>x426)>(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = -202;
	uint64_t x431 = 976154647258062LLU;
	int32_t x432 = -11;
	int32_t t107 = -279139462;

    t107 = ((x429>x430)>(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	static uint16_t x434 = 1506U;
	uint64_t x435 = 7351459931556LLU;
	uint32_t x436 = 1775397013U;
	int32_t t108 = 63;

    t108 = ((x433>x434)>(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x438 = 15U;
	int16_t x439 = INT16_MIN;
	volatile uint32_t x440 = UINT32_MAX;
	volatile int32_t t109 = 330784;

    t109 = ((x437>x438)>(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x442 = -1LL;
	static volatile uint8_t x443 = UINT8_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t110 = -304;

    t110 = ((x441>x442)>(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = -137001625;
	static volatile int32_t t111 = -17194;

    t111 = ((x445>x446)>(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = INT64_MIN;
	volatile int8_t x450 = INT8_MIN;
	int16_t x451 = -1;
	int16_t x452 = INT16_MAX;
	volatile int32_t t112 = 8033;

    t112 = ((x449>x450)>(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MAX;
	uint64_t x454 = 313919236112121581LLU;
	int32_t x455 = INT32_MAX;
	int32_t t113 = -1;

    t113 = ((x453>x454)>(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MAX;
	uint32_t x459 = 1052587U;
	int32_t x460 = INT32_MIN;
	int32_t t114 = -23438609;

    t114 = ((x457>x458)>(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = INT32_MAX;
	volatile uint32_t x463 = 26262825U;
	int8_t x464 = INT8_MIN;
	volatile int32_t t115 = -2;

    t115 = ((x461>x462)>(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	int64_t x466 = -215809953751372LL;
	int64_t x467 = INT64_MIN;
	static uint64_t x468 = 87LLU;

    t116 = ((x465>x466)>(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MIN;
	uint64_t x470 = UINT64_MAX;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;

    t117 = ((x469>x470)>(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 246U;
	static int8_t x474 = 0;
	volatile int8_t x475 = INT8_MIN;
	int32_t t118 = 261;

    t118 = ((x473>x474)>(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = INT32_MAX;
	int32_t t119 = -1;

    t119 = ((x477>x478)>(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = -21822130;
	int64_t x482 = INT64_MAX;
	volatile int16_t x483 = INT16_MIN;
	int8_t x484 = INT8_MIN;
	int32_t t120 = 762092875;

    t120 = ((x481>x482)>(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MAX;
	uint8_t x486 = UINT8_MAX;
	int32_t x487 = INT32_MAX;
	int32_t x488 = -1;

    t121 = ((x485>x486)>(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = 2U;
	volatile int32_t x491 = INT32_MIN;
	static int32_t x492 = 2308;
	volatile int32_t t122 = 52;

    t122 = ((x489>x490)>(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -2793893385232LL;
	uint8_t x494 = 1U;
	int64_t x495 = INT64_MIN;
	volatile int64_t x496 = INT64_MIN;
	static volatile int32_t t123 = -50;

    t123 = ((x493>x494)>(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MAX;
	int64_t x498 = INT64_MIN;
	int16_t x499 = 229;
	int8_t x500 = 31;
	int32_t t124 = -625;

    t124 = ((x497>x498)>(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x503 = INT32_MAX;
	static int8_t x504 = INT8_MIN;
	int32_t t125 = -20798;

    t125 = ((x501>x502)>(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MAX;
	uint8_t x508 = 2U;

    t126 = ((x505>x506)>(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = -1;
	uint16_t x511 = 5461U;
	int32_t t127 = -819;

    t127 = ((x509>x510)>(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	static int64_t x515 = INT64_MAX;
	int64_t x516 = INT64_MAX;
	volatile int32_t t128 = 11427554;

    t128 = ((x513>x514)>(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 97U;
	int16_t x518 = -398;
	volatile uint8_t x519 = 0U;
	volatile uint32_t x520 = 910U;
	volatile int32_t t129 = 48385716;

    t129 = ((x517>x518)>(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 1;
	static volatile int16_t x522 = INT16_MAX;
	int8_t x523 = -1;
	static uint8_t x524 = 12U;
	volatile int32_t t130 = -105835;

    t130 = ((x521>x522)>(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x525 = UINT16_MAX;
	int16_t x526 = INT16_MAX;
	volatile uint32_t x527 = UINT32_MAX;
	int16_t x528 = -839;
	volatile int32_t t131 = 13247351;

    t131 = ((x525>x526)>(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x529 = -32048051760490LL;
	int16_t x531 = INT16_MAX;
	uint8_t x532 = 9U;
	int32_t t132 = -48;

    t132 = ((x529>x530)>(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x533 = 58U;
	uint64_t x534 = 85846LLU;
	volatile int32_t x535 = INT32_MIN;
	int32_t t133 = 314;

    t133 = ((x533>x534)>(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = -1;
	uint8_t x538 = 62U;
	int16_t x539 = -1;
	int64_t x540 = -16312712LL;
	int32_t t134 = -31624;

    t134 = ((x537>x538)>(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = 131LL;
	uint8_t x542 = 0U;
	int32_t x543 = -4094245;
	volatile int32_t x544 = INT32_MAX;
	int32_t t135 = -12121;

    t135 = ((x541>x542)>(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = INT64_MAX;
	int8_t x546 = -35;
	uint16_t x547 = 3U;
	volatile uint8_t x548 = UINT8_MAX;
	volatile int32_t t136 = 0;

    t136 = ((x545>x546)>(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = INT64_MAX;
	int16_t x551 = INT16_MIN;
	int32_t x552 = -958333663;
	int32_t t137 = 3984467;

    t137 = ((x549>x550)>(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MAX;
	int16_t x555 = -1;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t138 = 10;

    t138 = ((x553>x554)>(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint16_t x559 = UINT16_MAX;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = -18064;

    t139 = ((x557>x558)>(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x563 = -10603878651728073LL;
	volatile int32_t t140 = 12541;

    t140 = ((x561>x562)>(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x567 = INT32_MIN;
	int8_t x568 = 6;
	volatile int32_t t141 = 24488881;

    t141 = ((x565>x566)>(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -212;
	int8_t x570 = INT8_MIN;
	static uint8_t x572 = 57U;
	int32_t t142 = -1219667;

    t142 = ((x569>x570)>(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MIN;
	int32_t x574 = INT32_MIN;
	int32_t x576 = -1;
	volatile int32_t t143 = 185873;

    t143 = ((x573>x574)>(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = -602968388;
	static int64_t x578 = INT64_MAX;
	int16_t x579 = INT16_MIN;
	volatile int32_t x580 = INT32_MIN;
	volatile int32_t t144 = -31472;

    t144 = ((x577>x578)>(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	uint16_t x582 = UINT16_MAX;
	volatile uint64_t x583 = 120273702478549585LLU;
	static int32_t t145 = -13121;

    t145 = ((x581>x582)>(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x585 = INT32_MIN;
	volatile int16_t x586 = INT16_MIN;
	volatile int64_t x588 = 109139888369LL;
	static volatile int32_t t146 = 31751793;

    t146 = ((x585>x586)>(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 138871188LLU;
	int16_t x590 = INT16_MIN;
	int8_t x591 = INT8_MIN;
	uint32_t x592 = 58723U;
	volatile int32_t t147 = 6942;

    t147 = ((x589>x590)>(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 3U;
	uint64_t x594 = UINT64_MAX;
	uint64_t x595 = UINT64_MAX;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -641445831;

    t148 = ((x593>x594)>(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = 31438;
	static int64_t x598 = 209888441637687LL;
	volatile int32_t x599 = 7688012;
	uint8_t x600 = 47U;
	static volatile int32_t t149 = -759;

    t149 = ((x597>x598)>(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 702LLU;
	static uint16_t x602 = 0U;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 1230;

    t150 = ((x601>x602)>(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = 42;
	static int8_t x606 = -1;
	uint16_t x608 = 544U;
	int32_t t151 = -81306523;

    t151 = ((x605>x606)>(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x609 = 10U;
	volatile uint32_t x611 = UINT32_MAX;
	int32_t x612 = INT32_MAX;
	int32_t t152 = 338;

    t152 = ((x609>x610)>(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 0;
	volatile int64_t x615 = INT64_MAX;
	static int64_t x616 = -1LL;
	volatile int32_t t153 = -50456;

    t153 = ((x613>x614)>(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 752260;
	uint8_t x619 = 1U;
	int8_t x620 = 45;
	volatile int32_t t154 = 2;

    t154 = ((x617>x618)>(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x621 = 13067114451058550LLU;
	int32_t x623 = 0;
	int8_t x624 = INT8_MAX;

    t155 = ((x621>x622)>(x623!=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	volatile int8_t x626 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	int32_t x628 = -1;
	int32_t t156 = 1;

    t156 = ((x625>x626)>(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = UINT64_MAX;
	uint32_t x630 = 248U;
	static volatile uint8_t x631 = UINT8_MAX;
	int8_t x632 = 3;
	static int32_t t157 = -1843925;

    t157 = ((x629>x630)>(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -11;
	uint16_t x634 = UINT16_MAX;
	uint16_t x635 = 3U;
	static int8_t x636 = -1;
	volatile int32_t t158 = -2940023;

    t158 = ((x633>x634)>(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = UINT64_MAX;
	uint64_t x638 = 3456LLU;
	static volatile int8_t x639 = INT8_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t159 = 3097101;

    t159 = ((x637>x638)>(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x641 = -1;
	int16_t x642 = -1;
	int32_t x643 = INT32_MIN;
	uint32_t x644 = 650U;
	volatile int32_t t160 = 132481273;

    t160 = ((x641>x642)>(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x646 = 6U;
	volatile int16_t x647 = 9;
	static int64_t x648 = INT64_MIN;
	volatile int32_t t161 = -5842;

    t161 = ((x645>x646)>(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x649 = INT64_MAX;
	int16_t x650 = 0;
	uint8_t x652 = UINT8_MAX;

    t162 = ((x649>x650)>(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 1;
	int32_t x654 = 128402;
	static volatile int32_t t163 = -40;

    t163 = ((x653>x654)>(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = 0;
	static uint16_t x658 = 2734U;
	static volatile int16_t x659 = -2967;
	uint8_t x660 = 1U;

    t164 = ((x657>x658)>(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 13877261U;
	int16_t x662 = INT16_MIN;
	int16_t x664 = INT16_MIN;

    t165 = ((x661>x662)>(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	int32_t x667 = -208353;
	volatile uint32_t x668 = 396U;

    t166 = ((x665>x666)>(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	volatile int64_t x670 = 882727544196353LL;
	static int16_t x671 = INT16_MAX;
	uint8_t x672 = 92U;
	int32_t t167 = -6;

    t167 = ((x669>x670)>(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	static volatile uint32_t x675 = UINT32_MAX;
	int64_t x676 = -1LL;

    t168 = ((x673>x674)>(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 2055U;
	uint16_t x678 = UINT16_MAX;
	static int16_t x679 = 121;
	volatile int8_t x680 = 0;

    t169 = ((x677>x678)>(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static int16_t x682 = INT16_MAX;
	int16_t x683 = 26;
	static uint8_t x684 = 1U;
	volatile int32_t t170 = 515228147;

    t170 = ((x681>x682)>(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x687 = 11U;
	static int32_t x688 = INT32_MIN;

    t171 = ((x685>x686)>(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MAX;
	int16_t x690 = INT16_MIN;
	static int16_t x691 = INT16_MAX;
	uint64_t x692 = UINT64_MAX;
	static int32_t t172 = 3994;

    t172 = ((x689>x690)>(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x693 = 47U;
	uint8_t x694 = 2U;
	int16_t x696 = INT16_MIN;
	volatile int32_t t173 = 260201394;

    t173 = ((x693>x694)>(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x698 = -110171036;
	int16_t x699 = -26;
	int16_t x700 = -59;
	static volatile int32_t t174 = -9781351;

    t174 = ((x697>x698)>(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	static uint64_t x702 = 7374136LLU;
	int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;
	static volatile int32_t t175 = -1020380913;

    t175 = ((x701>x702)>(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x706 = INT64_MAX;
	static int64_t x707 = -29972816961416LL;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t176 = -477;

    t176 = ((x705>x706)>(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	volatile int8_t x712 = INT8_MAX;
	volatile int32_t t177 = -46541348;

    t177 = ((x709>x710)>(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x714 = UINT8_MAX;
	static int16_t x715 = INT16_MIN;
	int64_t x716 = -1LL;
	int32_t t178 = 30594032;

    t178 = ((x713>x714)>(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	int32_t x718 = INT32_MAX;
	uint32_t x719 = 9U;
	uint8_t x720 = UINT8_MAX;
	static volatile int32_t t179 = -12;

    t179 = ((x717>x718)>(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x721 = 14;
	static int16_t x722 = 5;
	int16_t x723 = INT16_MAX;
	volatile uint64_t x724 = UINT64_MAX;
	static volatile int32_t t180 = -4834;

    t180 = ((x721>x722)>(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x728 = -1;
	volatile int32_t t181 = 5404129;

    t181 = ((x725>x726)>(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint32_t x729 = UINT32_MAX;
	int64_t x730 = INT64_MAX;
	int16_t x732 = 3650;

    t182 = ((x729>x730)>(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -64537;
	int32_t x734 = INT32_MAX;
	uint32_t x735 = UINT32_MAX;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 227;

    t183 = ((x733>x734)>(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = UINT8_MAX;
	uint16_t x738 = UINT16_MAX;
	int64_t x739 = INT64_MAX;
	int32_t t184 = -4407;

    t184 = ((x737>x738)>(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = INT64_MIN;
	int64_t x742 = -1LL;
	int8_t x744 = 1;
	int32_t t185 = -7186149;

    t185 = ((x741>x742)>(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int32_t x746 = -1;
	int16_t x747 = INT16_MIN;
	uint32_t x748 = 57U;

    t186 = ((x745>x746)>(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	static int64_t x750 = -1LL;
	int16_t x751 = -223;
	volatile int64_t x752 = INT64_MIN;
	volatile int32_t t187 = -37574;

    t187 = ((x749>x750)>(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MAX;
	volatile uint64_t x754 = 48066989229602871LLU;
	int64_t x756 = INT64_MIN;

    t188 = ((x753>x754)>(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	int32_t x758 = INT32_MIN;
	volatile int8_t x759 = -1;
	static volatile uint16_t x760 = UINT16_MAX;

    t189 = ((x757>x758)>(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = 719LLU;
	int8_t x762 = INT8_MIN;
	int16_t x763 = -128;
	int64_t x764 = INT64_MIN;
	int32_t t190 = 68;

    t190 = ((x761>x762)>(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 443250895LL;
	int32_t x767 = INT32_MIN;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t191 = -40719731;

    t191 = ((x765>x766)>(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 35U;
	int8_t x770 = 13;
	volatile uint64_t x771 = 8043178075306559460LLU;

    t192 = ((x769>x770)>(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -1;
	static volatile uint32_t x774 = 96U;
	int32_t x776 = INT32_MIN;
	int32_t t193 = -15936;

    t193 = ((x773>x774)>(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MAX;
	int16_t x780 = INT16_MIN;
	volatile int32_t t194 = -236;

    t194 = ((x777>x778)>(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	volatile int32_t x782 = INT32_MAX;
	uint64_t x783 = 158662LLU;
	int64_t x784 = INT64_MAX;
	int32_t t195 = -939;

    t195 = ((x781>x782)>(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 17536U;
	int8_t x786 = -1;
	volatile int16_t x787 = 5;
	int32_t t196 = 3722628;

    t196 = ((x785>x786)>(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int64_t x791 = -51103038466LL;
	static int16_t x792 = -12;
	int32_t t197 = -1;

    t197 = ((x789>x790)>(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 1332078493U;
	uint32_t x794 = 207383724U;
	uint16_t x795 = 3034U;
	int8_t x796 = INT8_MIN;
	int32_t t198 = 8857;

    t198 = ((x793>x794)>(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	volatile uint16_t x798 = 674U;
	static int8_t x799 = INT8_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t199 = 250399475;

    t199 = ((x797>x798)>(x799!=x800));

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

