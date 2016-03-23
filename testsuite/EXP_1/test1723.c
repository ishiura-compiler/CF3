
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

int64_t x8 = INT64_MIN;
static volatile uint8_t x10 = UINT8_MAX;
int16_t x11 = INT16_MAX;
int32_t t4 = 15;
int16_t x25 = INT16_MIN;
static uint8_t x26 = UINT8_MAX;
static int32_t x29 = 0;
uint16_t x36 = UINT16_MAX;
int32_t t8 = -71977;
int64_t x49 = -1LL;
volatile uint8_t x53 = 3U;
volatile uint8_t x60 = 26U;
static int8_t x62 = 0;
uint64_t t16 = 3696449520343815414LLU;
volatile int16_t x69 = 2516;
int8_t x73 = INT8_MIN;
int64_t t18 = 9271847853LL;
uint32_t x78 = 259541953U;
static uint32_t x80 = 128018U;
int32_t x81 = -11420334;
volatile int32_t t20 = 15;
static int16_t x85 = INT16_MIN;
int16_t x86 = INT16_MIN;
int32_t x88 = 3;
static uint8_t x91 = 13U;
volatile int16_t x93 = INT16_MAX;
static uint8_t x98 = 1U;
uint64_t t24 = 7964774019043415LLU;
int32_t x102 = INT32_MIN;
int32_t t25 = -225256156;
volatile int64_t t26 = INT64_MIN;
int8_t x111 = 58;
int64_t x114 = -1LL;
int16_t x117 = -1;
int16_t x127 = INT16_MIN;
volatile int32_t x130 = -101212396;
volatile int32_t t32 = 66965;
int32_t t33 = 1018696953;
static int32_t x138 = -1;
int64_t x142 = INT64_MIN;
int32_t t36 = -78380;
static volatile int64_t t37 = -22358LL;
int8_t x157 = INT8_MAX;
int64_t x158 = INT64_MIN;
int32_t x160 = INT32_MIN;
int64_t x162 = -1LL;
int32_t x163 = INT32_MIN;
volatile int32_t t41 = 48264239;
int64_t x174 = 234476750132129670LL;
int32_t t43 = 2;
static uint8_t x177 = 1U;
static int64_t x183 = INT64_MIN;
uint16_t x184 = UINT16_MAX;
uint16_t x186 = 2586U;
int16_t x188 = INT16_MIN;
static uint16_t x191 = 424U;
volatile int32_t t47 = 718237;
volatile int32_t x193 = -1206;
uint64_t x197 = 4LLU;
int16_t x213 = 351;
static uint64_t x214 = 127821243LLU;
uint64_t t53 = 2LLU;
int16_t x230 = INT16_MIN;
uint32_t x232 = 224166768U;
volatile uint32_t t57 = 455277383U;
int8_t x235 = 1;
uint32_t x240 = UINT32_MAX;
int64_t x246 = INT64_MIN;
int16_t x252 = -1;
volatile int64_t x256 = -1LL;
static volatile int32_t x259 = INT32_MIN;
volatile int32_t x261 = -1;
int32_t x264 = INT32_MIN;
uint8_t x267 = UINT8_MAX;
volatile int32_t t66 = 24947;
volatile uint64_t x272 = UINT64_MAX;
uint64_t t67 = UINT64_MAX;
int16_t x277 = -5542;
uint32_t x285 = 56696851U;
volatile int32_t x287 = 28090506;
static volatile int32_t x288 = -1647;
volatile int32_t t71 = 126918;
int32_t x290 = INT32_MIN;
static int32_t x292 = -1;
int32_t t72 = 4;
uint16_t x299 = 15U;
int32_t x307 = INT32_MAX;
int32_t t76 = INT32_MIN;
int32_t x316 = -1;
int32_t t78 = -580;
volatile uint32_t x322 = 19105U;
volatile int64_t t81 = 10962788LL;
volatile int32_t t82 = 78361363;
uint16_t x333 = UINT16_MAX;
uint32_t x341 = UINT32_MAX;
uint8_t x343 = 81U;
int32_t x346 = INT32_MIN;
uint8_t x351 = 39U;
int16_t x355 = -16120;
volatile int32_t x359 = 8171;
int8_t x363 = INT8_MIN;
volatile int64_t t93 = 3LL;
static int32_t x379 = -1;
int32_t x385 = INT32_MIN;
static uint32_t x393 = 30354960U;
int16_t x394 = 39;
static volatile uint32_t x397 = UINT32_MAX;
int32_t t100 = -138;
uint8_t x406 = UINT8_MAX;
int8_t x407 = INT8_MAX;
volatile int32_t t101 = -270646;
volatile int64_t x412 = -855786LL;
volatile int8_t x415 = INT8_MAX;
int64_t x425 = INT64_MAX;
int8_t x437 = -1;
uint16_t x441 = 0U;
static volatile int64_t x445 = INT64_MIN;
int32_t x446 = -3;
int32_t x449 = INT32_MAX;
int64_t x451 = 26161676760362LL;
volatile int64_t x452 = INT64_MIN;
static uint32_t x454 = 122U;
int16_t x455 = INT16_MIN;
int64_t x457 = -8839LL;
uint16_t x460 = UINT16_MAX;
uint32_t t115 = 1331U;
int32_t x469 = 75814654;
uint16_t x478 = UINT16_MAX;
int8_t x481 = 0;
int32_t x482 = INT32_MIN;
uint16_t x483 = 0U;
uint16_t x493 = 3U;
int8_t x503 = 14;
static int16_t x504 = INT16_MIN;
int32_t x506 = -443;
int8_t x511 = 0;
int32_t x516 = 13;
uint8_t x519 = UINT8_MAX;
static uint64_t x530 = 22LLU;
int64_t x531 = 8404583056349669LL;
int32_t x532 = -484991045;
int8_t x535 = -1;
volatile int32_t t133 = -14182239;
int32_t x538 = INT32_MIN;
volatile uint64_t t135 = 258724939237534497LLU;
static volatile int16_t x547 = INT16_MIN;
static int64_t x550 = INT64_MIN;
static int16_t x563 = 102;
static int16_t x564 = -1722;
static int32_t x565 = 433;
uint32_t x566 = 210857977U;
volatile uint16_t x570 = UINT16_MAX;
uint8_t x575 = 1U;
int64_t x577 = 30763872LL;
static int64_t t144 = 1185LL;
int32_t x582 = INT32_MAX;
uint32_t x583 = 3U;
volatile int32_t t146 = -1;
int16_t x592 = INT16_MIN;
volatile int32_t t147 = -14;
uint8_t x596 = UINT8_MAX;
int8_t x599 = INT8_MIN;
int64_t x600 = 1579LL;
int64_t x601 = 40572LL;
int8_t x604 = INT8_MAX;
uint8_t x605 = UINT8_MAX;
uint32_t x607 = 3351U;
int16_t x608 = -1;
static int16_t x613 = INT16_MIN;
int16_t x619 = INT16_MIN;
int32_t x623 = -1;
volatile uint8_t x624 = 19U;
uint32_t x628 = UINT32_MAX;
static volatile int32_t t157 = 250;
int64_t x634 = INT64_MIN;
volatile uint32_t x641 = 308716U;
uint8_t x655 = 1U;
int32_t x656 = INT32_MIN;
static int32_t t163 = -13009184;
int16_t x657 = INT16_MIN;
uint16_t x669 = 6159U;
static volatile uint8_t x674 = UINT8_MAX;
volatile int64_t t167 = 120LL;
static int32_t x681 = -1;
uint16_t x688 = 9931U;
volatile int64_t x694 = INT64_MIN;
int16_t x697 = INT16_MIN;
int16_t x701 = 1;
uint8_t x704 = 1U;
int8_t x708 = INT8_MAX;
static uint32_t x724 = 1U;
volatile int64_t x736 = INT64_MIN;
int32_t x748 = -1;
static int16_t x765 = INT16_MAX;
static int8_t x766 = -1;
int8_t x777 = -29;
uint32_t x779 = UINT32_MAX;
uint32_t t193 = 14U;
static int64_t x783 = INT64_MAX;
static volatile uint64_t x791 = UINT64_MAX;


void f0(void) {
    	uint8_t x1 = 54U;
	int32_t x2 = INT32_MAX;
	volatile int8_t x3 = 5;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -195869;

    t0 = (((x1>x2)&x3)+x4);

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 5110009122LLU;
	int8_t x7 = INT8_MAX;
	int64_t t1 = INT64_MIN;

    t1 = (((x5>x6)&x7)+x8);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	volatile int32_t x12 = -39;
	int32_t t2 = 3;

    t2 = (((x9>x10)&x11)+x12);

    if (t2 != -39) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 2;
	int32_t x14 = -1;
	uint16_t x15 = 1014U;
	static int8_t x16 = INT8_MAX;
	int32_t t3 = -41;

    t3 = (((x13>x14)&x15)+x16);

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int16_t x18 = 2302;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MAX;

    t4 = (((x17>x18)&x19)+x20);

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	uint64_t x22 = 5248LLU;
	static int8_t x23 = INT8_MAX;
	int32_t x24 = 1;
	int32_t t5 = 10422;

    t5 = (((x21>x22)&x23)+x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = 13;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

    t6 = (((x25>x26)&x27)+x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x30 = INT8_MIN;
	uint32_t x31 = 2659288U;
	static int8_t x32 = INT8_MIN;
	static uint32_t t7 = 1U;

    t7 = (((x29>x30)&x31)+x32);

    if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 2168253755187LLU;
	static volatile int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;

    t8 = (((x33>x34)&x35)+x36);

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 18437608U;
	uint32_t x38 = 943U;
	uint16_t x39 = UINT16_MAX;
	static int8_t x40 = -30;
	volatile int32_t t9 = 3900;

    t9 = (((x37>x38)&x39)+x40);

    if (t9 != -29) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 1;
	static uint8_t x42 = 4U;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = -275;
	static uint32_t t10 = 2U;

    t10 = (((x41>x42)&x43)+x44);

    if (t10 != 4294967021U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint16_t x45 = 127U;
	volatile int32_t x46 = INT32_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 23132153;

    t11 = (((x45>x46)&x47)+x48);

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = 0U;
	volatile uint32_t t12 = 62464047U;

    t12 = (((x49>x50)&x51)+x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = -1;
	int32_t x55 = -207018;
	uint64_t x56 = 532466963547649LLU;
	volatile uint64_t t13 = 547425623624LLU;

    t13 = (((x53>x54)&x55)+x56);

    if (t13 != 532466963547649LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	static int16_t x59 = INT16_MIN;
	volatile int32_t t14 = -13270;

    t14 = (((x57>x58)&x59)+x60);

    if (t14 != 26) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x63 = -6;
	static int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

    t15 = (((x61>x62)&x63)+x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static int8_t x66 = INT8_MAX;
	int32_t x67 = -84608233;
	static uint64_t x68 = 60282275086LLU;

    t16 = (((x65>x66)&x67)+x68);

    if (t16 != 60282275086LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = INT8_MIN;
	int8_t x71 = 1;
	static volatile int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = -1;

    t17 = (((x69>x70)&x71)+x72);

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x74 = 1U;
	volatile int64_t x75 = INT64_MIN;
	static volatile int16_t x76 = -1;

    t18 = (((x73>x74)&x75)+x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	int16_t x79 = -3209;
	uint32_t t19 = 0U;

    t19 = (((x77>x78)&x79)+x80);

    if (t19 != 128019U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 105U;
	static int16_t x83 = INT16_MIN;
	int8_t x84 = 2;

    t20 = (((x81>x82)&x83)+x84);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x87 = INT32_MIN;
	int32_t t21 = 15070918;

    t21 = (((x85>x86)&x87)+x88);

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint32_t x90 = 9103633U;
	static uint64_t x92 = 2026805716078781541LLU;
	volatile uint64_t t22 = 3LLU;

    t22 = (((x89>x90)&x91)+x92);

    if (t22 != 2026805716078781542LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MAX;
	int16_t x95 = -1;
	volatile int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = INT32_MAX;

    t23 = (((x93>x94)&x95)+x96);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MAX;
	static volatile uint64_t x99 = UINT64_MAX;
	int8_t x100 = -1;

    t24 = (((x97>x98)&x99)+x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 3560U;
	int32_t x103 = -57477;
	int32_t x104 = -1015;

    t25 = (((x101>x102)&x103)+x104);

    if (t25 != -1014) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	uint16_t x106 = 56U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;

    t26 = (((x105>x106)&x107)+x108);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = INT8_MIN;
	static int32_t x110 = 838;
	int16_t x112 = -1;
	volatile int32_t t27 = 1;

    t27 = (((x109>x110)&x111)+x112);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	int64_t x115 = INT64_MIN;
	uint32_t x116 = 62218U;
	static volatile int64_t t28 = 1446701672LL;

    t28 = (((x113>x114)&x115)+x116);

    if (t28 != 62218LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = 0;
	static int32_t t29 = 776371417;

    t29 = (((x117>x118)&x119)+x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 983U;
	static uint32_t x122 = UINT32_MAX;
	int8_t x123 = -41;
	int64_t x124 = -1LL;
	volatile int64_t t30 = 27813520135LL;

    t30 = (((x121>x122)&x123)+x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	int8_t x126 = -1;
	int8_t x128 = -1;
	volatile int32_t t31 = 2759;

    t31 = (((x125>x126)&x127)+x128);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = 281898LL;
	int16_t x131 = INT16_MAX;
	volatile int16_t x132 = INT16_MIN;

    t32 = (((x129>x130)&x131)+x132);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 32444LLU;
	int8_t x134 = -1;
	static int16_t x135 = -1;
	volatile uint8_t x136 = 0U;

    t33 = (((x133>x134)&x135)+x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = 663911337;
	int8_t x139 = -1;
	volatile int64_t x140 = INT64_MIN;
	int64_t t34 = 4307213378071LL;

    t34 = (((x137>x138)&x139)+x140);

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int32_t x143 = -44495;
	volatile int32_t x144 = -384;
	volatile int32_t t35 = 87642600;

    t35 = (((x141>x142)&x143)+x144);

    if (t35 != -383) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 218U;
	static volatile int32_t x146 = 3;
	int32_t x147 = INT32_MAX;
	volatile int8_t x148 = INT8_MIN;

    t36 = (((x145>x146)&x147)+x148);

    if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 6LLU;
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = 5U;

    t37 = (((x149>x150)&x151)+x152);

    if (t37 != 5LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int8_t x154 = -7;
	int64_t x155 = 64511816490847LL;
	static uint32_t x156 = UINT32_MAX;
	volatile int64_t t38 = -11416019LL;

    t38 = (((x153>x154)&x155)+x156);

    if (t38 != 4294967295LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x159 = 2U;
	volatile int32_t t39 = INT32_MIN;

    t39 = (((x157>x158)&x159)+x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t40 = INT32_MIN;

    t40 = (((x161>x162)&x163)+x164);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = 1408976251171033LLU;
	volatile int16_t x166 = INT16_MAX;
	int16_t x167 = 168;
	volatile int16_t x168 = -1560;

    t41 = (((x165>x166)&x167)+x168);

    if (t41 != -1560) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 0U;
	volatile int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	int64_t x172 = -1LL;
	int64_t t42 = 6943546160785LL;

    t42 = (((x169>x170)&x171)+x172);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	uint8_t x175 = UINT8_MAX;
	static volatile int8_t x176 = INT8_MIN;

    t43 = (((x173>x174)&x175)+x176);

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 21542U;
	static volatile int16_t x179 = INT16_MAX;
	uint8_t x180 = 0U;
	volatile int32_t t44 = 2;

    t44 = (((x177>x178)&x179)+x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	int32_t x182 = -54;
	volatile int64_t t45 = 1LL;

    t45 = (((x181>x182)&x183)+x184);

    if (t45 != 65535LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int8_t x187 = INT8_MIN;
	int32_t t46 = -953213566;

    t46 = (((x185>x186)&x187)+x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = 31;
	int64_t x190 = INT64_MAX;
	int8_t x192 = INT8_MAX;

    t47 = (((x189>x190)&x191)+x192);

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x194 = UINT32_MAX;
	volatile int64_t x195 = INT64_MIN;
	uint16_t x196 = UINT16_MAX;
	int64_t t48 = 1499379LL;

    t48 = (((x193>x194)&x195)+x196);

    if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	static int16_t x199 = INT16_MAX;
	int64_t x200 = -3800LL;
	static volatile int64_t t49 = -13887177LL;

    t49 = (((x197>x198)&x199)+x200);

    if (t49 != -3800LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 26416113;
	uint8_t x202 = 49U;
	volatile uint16_t x203 = UINT16_MAX;
	static volatile int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -5201;

    t50 = (((x201>x202)&x203)+x204);

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MAX;
	volatile uint8_t x206 = 41U;
	uint32_t x207 = 186255474U;
	uint8_t x208 = 6U;
	volatile uint32_t t51 = 18799567U;

    t51 = (((x205>x206)&x207)+x208);

    if (t51 != 6U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 1;
	static int16_t x210 = INT16_MAX;
	int8_t x211 = -1;
	int16_t x212 = INT16_MIN;
	int32_t t52 = 3302610;

    t52 = (((x209>x210)&x211)+x212);

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x215 = 116025919485151535LLU;
	uint16_t x216 = 2568U;

    t53 = (((x213>x214)&x215)+x216);

    if (t53 != 2568LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MAX;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = -1;
	int32_t x220 = INT32_MAX;
	static volatile int32_t t54 = INT32_MAX;

    t54 = (((x217>x218)&x219)+x220);

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MIN;
	uint64_t x222 = 55815198204LLU;
	int32_t x223 = 209;
	int64_t x224 = 123239183487LL;
	volatile int64_t t55 = 57768LL;

    t55 = (((x221>x222)&x223)+x224);

    if (t55 != 123239183488LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = 18;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	int8_t x228 = 11;
	int32_t t56 = -17;

    t56 = (((x225>x226)&x227)+x228);

    if (t56 != 11) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	uint32_t x231 = UINT32_MAX;

    t57 = (((x229>x230)&x231)+x232);

    if (t57 != 224166768U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -646;
	int32_t x234 = 47766535;
	volatile int64_t x236 = -1LL;
	int64_t t58 = 9789LL;

    t58 = (((x233>x234)&x235)+x236);

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 41U;
	int16_t x238 = 2;
	uint32_t x239 = UINT32_MAX;
	uint32_t t59 = 2U;

    t59 = (((x237>x238)&x239)+x240);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 89U;
	uint64_t x242 = 19571LLU;
	volatile uint32_t x243 = 1U;
	volatile int16_t x244 = INT16_MAX;
	static volatile uint32_t t60 = 1U;

    t60 = (((x241>x242)&x243)+x244);

    if (t60 != 32767U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	static volatile int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = 1;

    t61 = (((x245>x246)&x247)+x248);

    if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	volatile int64_t x251 = INT64_MIN;
	int64_t t62 = -4503LL;

    t62 = (((x249>x250)&x251)+x252);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 40U;
	int8_t x254 = -1;
	volatile uint64_t x255 = UINT64_MAX;
	uint64_t t63 = 290361873LLU;

    t63 = (((x253>x254)&x255)+x256);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int64_t x258 = -216229LL;
	volatile int64_t x260 = INT64_MIN;
	static volatile int64_t t64 = INT64_MIN;

    t64 = (((x257>x258)&x259)+x260);

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x262 = -216LL;
	int16_t x263 = -1;
	int32_t t65 = -60;

    t65 = (((x261>x262)&x263)+x264);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	uint16_t x266 = 30976U;
	uint16_t x268 = 1U;

    t66 = (((x265>x266)&x267)+x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x269 = 52218025U;
	volatile int32_t x270 = INT32_MIN;
	int16_t x271 = -1;

    t67 = (((x269>x270)&x271)+x272);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 45U;
	static int8_t x274 = 0;
	int8_t x275 = INT8_MIN;
	int32_t x276 = -1;
	int32_t t68 = -2327;

    t68 = (((x273>x274)&x275)+x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x278 = INT64_MIN;
	volatile int64_t x279 = 256651552737878LL;
	int16_t x280 = -1;
	int64_t t69 = 271439LL;

    t69 = (((x277>x278)&x279)+x280);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x282 = 1U;
	uint8_t x283 = 93U;
	volatile int64_t x284 = -1LL;
	int64_t t70 = 14176LL;

    t70 = (((x281>x282)&x283)+x284);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = 25427LL;

    t71 = (((x285>x286)&x287)+x288);

    if (t71 != -1647) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	static volatile int32_t x291 = -1536;

    t72 = (((x289>x290)&x291)+x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 1U;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -91991LL;
	uint64_t x296 = 21086LLU;
	uint64_t t73 = 217707LLU;

    t73 = (((x293>x294)&x295)+x296);

    if (t73 != 21087LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	uint64_t x298 = UINT64_MAX;
	static uint32_t x300 = 12U;
	volatile uint32_t t74 = 12633161U;

    t74 = (((x297>x298)&x299)+x300);

    if (t74 != 12U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 1;
	uint8_t x302 = 58U;
	uint8_t x303 = 1U;
	static int16_t x304 = INT16_MIN;
	int32_t t75 = 2025658;

    t75 = (((x301>x302)&x303)+x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x305 = UINT16_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	volatile int32_t x308 = INT32_MIN;

    t76 = (((x305>x306)&x307)+x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	int32_t x311 = -1;
	int32_t x312 = 1589151;
	int32_t t77 = -3981;

    t77 = (((x309>x310)&x311)+x312);

    if (t77 != 1589152) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = 1323U;
	static int64_t x314 = INT64_MIN;
	uint8_t x315 = 3U;

    t78 = (((x313>x314)&x315)+x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x317 = 4931871U;
	uint16_t x318 = 3977U;
	static int64_t x319 = 3828084309670202LL;
	uint32_t x320 = 19897979U;
	int64_t t79 = -26745477677622062LL;

    t79 = (((x317>x318)&x319)+x320);

    if (t79 != 19897979LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	static int16_t x324 = 8;
	uint32_t t80 = 541406U;

    t80 = (((x321>x322)&x323)+x324);

    if (t80 != 8U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = 1;
	static uint16_t x326 = UINT16_MAX;
	volatile int16_t x327 = 212;
	int64_t x328 = -1LL;

    t81 = (((x325>x326)&x327)+x328);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 12U;
	int64_t x330 = INT64_MAX;
	static int32_t x331 = -16805467;
	int16_t x332 = INT16_MIN;

    t82 = (((x329>x330)&x331)+x332);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x334 = 24U;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;
	static volatile uint32_t t83 = UINT32_MAX;

    t83 = (((x333>x334)&x335)+x336);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	static uint8_t x338 = 1U;
	uint16_t x339 = 7U;
	int64_t x340 = INT64_MIN;
	static int64_t t84 = INT64_MIN;

    t84 = (((x337>x338)&x339)+x340);

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x342 = INT16_MAX;
	volatile uint16_t x344 = 2002U;
	static volatile int32_t t85 = 42495313;

    t85 = (((x341>x342)&x343)+x344);

    if (t85 != 2003) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = 26;
	uint64_t t86 = 1228257703337801LLU;

    t86 = (((x345>x346)&x347)+x348);

    if (t86 != 26LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 22779912775097LL;
	int8_t x350 = INT8_MIN;
	uint8_t x352 = 69U;
	volatile int32_t t87 = 2794493;

    t87 = (((x349>x350)&x351)+x352);

    if (t87 != 70) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x353 = INT32_MAX;
	static int32_t x354 = INT32_MIN;
	uint16_t x356 = 30544U;
	volatile int32_t t88 = 7963730;

    t88 = (((x353>x354)&x355)+x356);

    if (t88 != 30544) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	volatile uint32_t x360 = 423660U;
	uint32_t t89 = 1565173U;

    t89 = (((x357>x358)&x359)+x360);

    if (t89 != 423660U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -1;
	volatile int8_t x362 = -61;
	uint16_t x364 = 1U;
	volatile int32_t t90 = 13017515;

    t90 = (((x361>x362)&x363)+x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	uint32_t x366 = 1164614707U;
	int16_t x367 = -1;
	static uint64_t x368 = 136856469326LLU;
	volatile uint64_t t91 = 556LLU;

    t91 = (((x365>x366)&x367)+x368);

    if (t91 != 136856469326LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = INT8_MIN;
	uint8_t x370 = 0U;
	static volatile uint16_t x371 = 1U;
	int16_t x372 = 15;
	int32_t t92 = -6;

    t92 = (((x369>x370)&x371)+x372);

    if (t92 != 15) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -1;
	static volatile uint8_t x374 = UINT8_MAX;
	volatile int64_t x375 = -1LL;
	int8_t x376 = 3;

    t93 = (((x373>x374)&x375)+x376);

    if (t93 != 3LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = -1;
	int64_t x378 = 3195LL;
	uint16_t x380 = 0U;
	int32_t t94 = 73;

    t94 = (((x377>x378)&x379)+x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 617LLU;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 14U;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = (((x381>x382)&x383)+x384);

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x386 = INT8_MAX;
	int32_t x387 = -12999;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t96 = 7;

    t96 = (((x385>x386)&x387)+x388);

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 6;
	volatile int32_t x390 = INT32_MIN;
	volatile int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -24;

    t97 = (((x389>x390)&x391)+x392);

    if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x395 = -5998642666334LL;
	static volatile uint16_t x396 = 223U;
	int64_t t98 = 493374964LL;

    t98 = (((x393>x394)&x395)+x396);

    if (t98 != 223LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x398 = 9533U;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MAX;
	int32_t t99 = 149;

    t99 = (((x397>x398)&x399)+x400);

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -1LL;
	int32_t x402 = INT32_MIN;
	uint8_t x403 = 71U;
	int8_t x404 = INT8_MAX;

    t100 = (((x401>x402)&x403)+x404);

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = 60;
	static uint16_t x408 = 15U;

    t101 = (((x405>x406)&x407)+x408);

    if (t101 != 15) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = -1;
	int32_t x410 = -21809712;
	uint16_t x411 = 0U;
	int64_t t102 = 4312664399193728235LL;

    t102 = (((x409>x410)&x411)+x412);

    if (t102 != -855786LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint32_t x413 = 74U;
	int8_t x414 = 1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = -47228;

    t103 = (((x413>x414)&x415)+x416);

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int64_t x418 = INT64_MIN;
	static int16_t x419 = -1;
	static int8_t x420 = INT8_MAX;
	int32_t t104 = -2038;

    t104 = (((x417>x418)&x419)+x420);

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = UINT64_MAX;
	int32_t x422 = INT32_MIN;
	uint16_t x423 = 2U;
	int32_t x424 = -3191225;
	int32_t t105 = 64445553;

    t105 = (((x421>x422)&x423)+x424);

    if (t105 != -3191225) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = 249877749601LLU;
	int8_t x427 = -1;
	static volatile int8_t x428 = -2;
	int32_t t106 = 22543484;

    t106 = (((x425>x426)&x427)+x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 14951U;
	static uint32_t x430 = 32257U;
	int8_t x431 = 13;
	uint32_t x432 = 6558721U;
	uint32_t t107 = 19U;

    t107 = (((x429>x430)&x431)+x432);

    if (t107 != 6558721U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 127835783891LLU;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -1;
	int32_t x436 = INT32_MIN;
	int32_t t108 = INT32_MIN;

    t108 = (((x433>x434)&x435)+x436);

    if (t108 != INT32_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x438 = 236U;
	volatile int64_t x439 = -1LL;
	volatile uint8_t x440 = 9U;
	int64_t t109 = 230452832LL;

    t109 = (((x437>x438)&x439)+x440);

    if (t109 != 9LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = -4060298835160LL;
	volatile int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MIN;
	int64_t t110 = INT64_MIN;

    t110 = (((x441>x442)&x443)+x444);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x447 = -10142;
	static int64_t x448 = -1LL;
	volatile int64_t t111 = 618615381931LL;

    t111 = (((x445>x446)&x447)+x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = INT32_MAX;
	static int64_t t112 = INT64_MIN;

    t112 = (((x449>x450)&x451)+x452);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -13;
	uint8_t x456 = 1U;
	volatile int32_t t113 = -811497;

    t113 = (((x453>x454)&x455)+x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = -12931;
	int64_t x459 = INT64_MAX;
	volatile int64_t t114 = 106570LL;

    t114 = (((x457>x458)&x459)+x460);

    if (t114 != 65536LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int8_t x462 = INT8_MAX;
	volatile uint32_t x463 = 109337U;
	volatile uint8_t x464 = UINT8_MAX;

    t115 = (((x461>x462)&x463)+x464);

    if (t115 != 256U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 54U;
	volatile int32_t x466 = INT32_MIN;
	int8_t x467 = 31;
	int8_t x468 = INT8_MIN;
	volatile int32_t t116 = 517641243;

    t116 = (((x465>x466)&x467)+x468);

    if (t116 != -127) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MIN;
	volatile int64_t x471 = INT64_MAX;
	int16_t x472 = -740;
	int64_t t117 = 28LL;

    t117 = (((x469>x470)&x471)+x472);

    if (t117 != -739LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x473 = 2U;
	uint8_t x474 = 1U;
	int16_t x475 = -1;
	int8_t x476 = -54;
	int32_t t118 = -5407950;

    t118 = (((x473>x474)&x475)+x476);

    if (t118 != -53) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint8_t x479 = 2U;
	static uint16_t x480 = 218U;
	static volatile int32_t t119 = 2175;

    t119 = (((x477>x478)&x479)+x480);

    if (t119 != 218) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x484 = INT8_MIN;
	int32_t t120 = -8;

    t120 = (((x481>x482)&x483)+x484);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -21619338313828LL;
	int32_t x486 = -1;
	uint16_t x487 = UINT16_MAX;
	int32_t x488 = -235100743;
	volatile int32_t t121 = 0;

    t121 = (((x485>x486)&x487)+x488);

    if (t121 != -235100743) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MIN;
	volatile int16_t x490 = INT16_MAX;
	uint16_t x491 = 0U;
	int64_t x492 = -182303146LL;
	int64_t t122 = -52112842338LL;

    t122 = (((x489>x490)&x491)+x492);

    if (t122 != -182303146LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = 1;
	uint32_t x495 = UINT32_MAX;
	static int16_t x496 = 4;
	static uint32_t t123 = 2001270U;

    t123 = (((x493>x494)&x495)+x496);

    if (t123 != 5U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -127062;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MAX;
	volatile int16_t x500 = 1850;
	static int64_t t124 = 32422087537400LL;

    t124 = (((x497>x498)&x499)+x500);

    if (t124 != 1851LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = 0U;
	uint16_t x502 = 50U;
	static int32_t t125 = 53699;

    t125 = (((x501>x502)&x503)+x504);

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	static uint8_t x507 = 36U;
	volatile uint64_t x508 = UINT64_MAX;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (((x505>x506)&x507)+x508);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	int32_t x510 = 86;
	static int16_t x512 = -1;
	volatile int32_t t127 = -29143;

    t127 = (((x509>x510)&x511)+x512);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -475577533;
	volatile uint8_t x514 = UINT8_MAX;
	static volatile int32_t x515 = INT32_MIN;
	volatile int32_t t128 = -229;

    t128 = (((x513>x514)&x515)+x516);

    if (t128 != 13) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	volatile int8_t x518 = INT8_MAX;
	uint64_t x520 = 139508600213245961LLU;
	volatile uint64_t t129 = 31LLU;

    t129 = (((x517>x518)&x519)+x520);

    if (t129 != 139508600213245962LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = INT16_MAX;
	volatile int8_t x522 = -1;
	int8_t x523 = 1;
	int8_t x524 = INT8_MIN;
	int32_t t130 = 2157467;

    t130 = (((x521>x522)&x523)+x524);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = 1662323LL;
	volatile int32_t x526 = -1;
	uint8_t x527 = 14U;
	static uint64_t x528 = UINT64_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = (((x525>x526)&x527)+x528);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 1706017U;
	volatile int64_t t132 = -1619200727058LL;

    t132 = (((x529>x530)&x531)+x532);

    if (t132 != -484991044LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 41;
	static uint16_t x534 = 1623U;
	uint8_t x536 = UINT8_MAX;

    t133 = (((x533>x534)&x535)+x536);

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	int64_t x539 = -2415931835482757LL;
	int16_t x540 = INT16_MIN;
	volatile int64_t t134 = 2LL;

    t134 = (((x537>x538)&x539)+x540);

    if (t134 != -32768LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int8_t x542 = INT8_MIN;
	volatile uint64_t x543 = UINT64_MAX;
	int8_t x544 = INT8_MIN;

    t135 = (((x541>x542)&x543)+x544);

    if (t135 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -6;
	volatile int32_t x546 = -34248738;
	static int8_t x548 = INT8_MIN;
	volatile int32_t t136 = -13225;

    t136 = (((x545>x546)&x547)+x548);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	uint64_t x551 = 18612100LLU;
	volatile int64_t x552 = INT64_MAX;
	static uint64_t t137 = 64647216LLU;

    t137 = (((x549>x550)&x551)+x552);

    if (t137 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	int32_t x554 = INT32_MIN;
	static int32_t x555 = INT32_MIN;
	int32_t x556 = INT32_MIN;
	static int32_t t138 = INT32_MIN;

    t138 = (((x553>x554)&x555)+x556);

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 71U;
	volatile int8_t x558 = INT8_MAX;
	static uint8_t x559 = UINT8_MAX;
	int64_t x560 = -1LL;
	int64_t t139 = -154LL;

    t139 = (((x557>x558)&x559)+x560);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	int64_t x562 = INT64_MAX;
	int32_t t140 = -107004016;

    t140 = (((x561>x562)&x563)+x564);

    if (t140 != -1722) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x567 = -12LL;
	static int64_t x568 = -1LL;
	int64_t t141 = 8LL;

    t141 = (((x565>x566)&x567)+x568);

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x571 = INT16_MIN;
	int64_t x572 = 1LL;
	int64_t t142 = 2883605LL;

    t142 = (((x569>x570)&x571)+x572);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	int32_t x574 = INT32_MIN;
	volatile int16_t x576 = -9;
	static volatile int32_t t143 = -1;

    t143 = (((x573>x574)&x575)+x576);

    if (t143 != -8) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x578 = -1570645111LL;
	int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MIN;

    t144 = (((x577>x578)&x579)+x580);

    if (t144 != -2147483648LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	int32_t x584 = -262;
	static volatile uint32_t t145 = 0U;

    t145 = (((x581>x582)&x583)+x584);

    if (t145 != 4294967034U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x585 = INT16_MIN;
	int16_t x586 = 0;
	int32_t x587 = INT32_MAX;
	int8_t x588 = INT8_MAX;

    t146 = (((x585>x586)&x587)+x588);

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int16_t x590 = 560;
	static uint8_t x591 = UINT8_MAX;

    t147 = (((x589>x590)&x591)+x592);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = -633406934479198793LL;
	static volatile uint64_t x594 = 837003193LLU;
	int8_t x595 = -5;
	volatile int32_t t148 = 21;

    t148 = (((x593>x594)&x595)+x596);

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	volatile int32_t x598 = INT32_MAX;
	static int64_t t149 = -7737LL;

    t149 = (((x597>x598)&x599)+x600);

    if (t149 != 1579LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x602 = INT8_MAX;
	int64_t x603 = -54553290272495163LL;
	volatile int64_t t150 = -750411LL;

    t150 = (((x601>x602)&x603)+x604);

    if (t150 != 128LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x606 = 1613257768U;
	volatile uint32_t t151 = UINT32_MAX;

    t151 = (((x605>x606)&x607)+x608);

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 179749LLU;
	static int8_t x610 = INT8_MIN;
	uint64_t x611 = 3LLU;
	int32_t x612 = INT32_MIN;
	uint64_t t152 = 2804363206488035LLU;

    t152 = (((x609>x610)&x611)+x612);

    if (t152 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x614 = 682671835U;
	volatile int64_t x615 = -776905386LL;
	uint16_t x616 = 1527U;
	static int64_t t153 = 202695516LL;

    t153 = (((x613>x614)&x615)+x616);

    if (t153 != 1527LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MIN;
	uint8_t x618 = 1U;
	int8_t x620 = -1;
	int32_t t154 = 229;

    t154 = (((x617>x618)&x619)+x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = -841720071772LL;
	int64_t x622 = INT64_MIN;
	volatile int32_t t155 = -1039815502;

    t155 = (((x621>x622)&x623)+x624);

    if (t155 != 20) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 93587620U;
	int16_t x626 = INT16_MAX;
	uint64_t x627 = 5274635LLU;
	volatile uint64_t t156 = 1058358034524LLU;

    t156 = (((x625>x626)&x627)+x628);

    if (t156 != 4294967296LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = 3929;
	uint32_t x630 = UINT32_MAX;
	int8_t x631 = INT8_MAX;
	int16_t x632 = INT16_MIN;

    t157 = (((x629>x630)&x631)+x632);

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = 46LLU;
	volatile int32_t x635 = INT32_MAX;
	int64_t x636 = -213068059524LL;
	volatile int64_t t158 = 1772996411003LL;

    t158 = (((x633>x634)&x635)+x636);

    if (t158 != -213068059524LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 121753U;
	static int8_t x638 = 0;
	volatile int8_t x639 = -1;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = 140889213;

    t159 = (((x637>x638)&x639)+x640);

    if (t159 != 256) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x642 = 241221965841LLU;
	uint32_t x643 = 22U;
	volatile int64_t x644 = -75227280LL;
	static volatile int64_t t160 = -3967676936LL;

    t160 = (((x641>x642)&x643)+x644);

    if (t160 != -75227280LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 18U;
	volatile int8_t x646 = -14;
	static int64_t x647 = 19LL;
	static uint32_t x648 = 150U;
	volatile int64_t t161 = 12503LL;

    t161 = (((x645>x646)&x647)+x648);

    if (t161 != 151LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = INT8_MAX;
	int16_t x650 = INT16_MIN;
	int64_t x651 = INT64_MAX;
	int8_t x652 = INT8_MIN;
	static int64_t t162 = 2472677201LL;

    t162 = (((x649>x650)&x651)+x652);

    if (t162 != -127LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MAX;
	int8_t x654 = -9;

    t163 = (((x653>x654)&x655)+x656);

    if (t163 != -2147483647) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x658 = 134U;
	int64_t x659 = -265782188111995705LL;
	int32_t x660 = INT32_MIN;
	int64_t t164 = -15140217667933577LL;

    t164 = (((x657>x658)&x659)+x660);

    if (t164 != -2147483647LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	static int64_t x662 = -1LL;
	volatile uint16_t x663 = UINT16_MAX;
	int64_t x664 = INT64_MIN;
	static int64_t t165 = INT64_MIN;

    t165 = (((x661>x662)&x663)+x664);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x670 = INT8_MIN;
	uint8_t x671 = 53U;
	uint32_t x672 = 219282U;
	volatile uint32_t t166 = 1U;

    t166 = (((x669>x670)&x671)+x672);

    if (t166 != 219283U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x673 = 10734LL;
	int32_t x675 = INT32_MIN;
	volatile int64_t x676 = -4881169104838341LL;

    t167 = (((x673>x674)&x675)+x676);

    if (t167 != -4881169104838341LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x677 = 3;
	int8_t x678 = INT8_MIN;
	uint8_t x679 = UINT8_MAX;
	uint8_t x680 = 8U;
	static int32_t t168 = -7656121;

    t168 = (((x677>x678)&x679)+x680);

    if (t168 != 9) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x682 = INT8_MIN;
	volatile int8_t x683 = INT8_MAX;
	int16_t x684 = 80;
	int32_t t169 = -7;

    t169 = (((x681>x682)&x683)+x684);

    if (t169 != 81) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x685 = 1U;
	static uint8_t x686 = 31U;
	int32_t x687 = -1;
	int32_t t170 = -81;

    t170 = (((x685>x686)&x687)+x688);

    if (t170 != 9931) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x689 = INT64_MIN;
	int16_t x690 = INT16_MIN;
	static uint8_t x691 = 1U;
	uint32_t x692 = 17U;
	static uint32_t t171 = 510290583U;

    t171 = (((x689>x690)&x691)+x692);

    if (t171 != 17U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x693 = INT16_MIN;
	int32_t x695 = INT32_MIN;
	int8_t x696 = INT8_MIN;
	static volatile int32_t t172 = 32193053;

    t172 = (((x693>x694)&x695)+x696);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x698 = INT16_MIN;
	static int16_t x699 = -2804;
	int32_t x700 = INT32_MIN;
	int32_t t173 = INT32_MIN;

    t173 = (((x697>x698)&x699)+x700);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x702 = 1;
	int16_t x703 = 204;
	int32_t t174 = 6353;

    t174 = (((x701>x702)&x703)+x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x705 = -1LL;
	uint16_t x706 = 0U;
	volatile int64_t x707 = INT64_MIN;
	volatile int64_t t175 = -379LL;

    t175 = (((x705>x706)&x707)+x708);

    if (t175 != 127LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x709 = INT16_MIN;
	static int8_t x710 = INT8_MIN;
	volatile uint32_t x711 = 71969993U;
	static int16_t x712 = INT16_MIN;
	uint32_t t176 = 978530U;

    t176 = (((x709>x710)&x711)+x712);

    if (t176 != 4294934528U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x713 = -1;
	static int8_t x714 = INT8_MIN;
	uint64_t x715 = 1LLU;
	uint16_t x716 = 63U;
	volatile uint64_t t177 = 5LLU;

    t177 = (((x713>x714)&x715)+x716);

    if (t177 != 64LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x717 = INT8_MIN;
	volatile int32_t x718 = -174565555;
	int8_t x719 = 0;
	static uint64_t x720 = UINT64_MAX;
	volatile uint64_t t178 = UINT64_MAX;

    t178 = (((x717>x718)&x719)+x720);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x721 = -1LL;
	uint8_t x722 = UINT8_MAX;
	static uint8_t x723 = UINT8_MAX;
	uint32_t t179 = 244991685U;

    t179 = (((x721>x722)&x723)+x724);

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x725 = -1LL;
	uint8_t x726 = 5U;
	static int16_t x727 = -1;
	volatile int8_t x728 = INT8_MAX;
	static int32_t t180 = 812623;

    t180 = (((x725>x726)&x727)+x728);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x729 = 1U;
	uint16_t x730 = UINT16_MAX;
	uint8_t x731 = 36U;
	volatile int64_t x732 = 106999963050872868LL;
	static int64_t t181 = -432189416661LL;

    t181 = (((x729>x730)&x731)+x732);

    if (t181 != 106999963050872868LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x733 = -1LL;
	uint32_t x734 = 4008281U;
	int16_t x735 = INT16_MIN;
	volatile int64_t t182 = INT64_MIN;

    t182 = (((x733>x734)&x735)+x736);

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x737 = 3726U;
	volatile int64_t x738 = INT64_MIN;
	static int16_t x739 = 3;
	uint16_t x740 = 13U;
	volatile int32_t t183 = 793069;

    t183 = (((x737>x738)&x739)+x740);

    if (t183 != 14) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x741 = UINT8_MAX;
	static int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MIN;
	static uint16_t x744 = 89U;
	volatile int32_t t184 = 2;

    t184 = (((x741>x742)&x743)+x744);

    if (t184 != 89) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x745 = INT16_MIN;
	uint16_t x746 = 1889U;
	int16_t x747 = 1;
	static int32_t t185 = 440468524;

    t185 = (((x745>x746)&x747)+x748);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x749 = 1812269121LLU;
	volatile int32_t x750 = INT32_MAX;
	volatile uint64_t x751 = UINT64_MAX;
	static int32_t x752 = INT32_MIN;
	volatile uint64_t t186 = 4683885LLU;

    t186 = (((x749>x750)&x751)+x752);

    if (t186 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x753 = 28768495LLU;
	int32_t x754 = INT32_MIN;
	static uint16_t x755 = 243U;
	uint64_t x756 = 1793938425LLU;
	volatile uint64_t t187 = 2526LLU;

    t187 = (((x753>x754)&x755)+x756);

    if (t187 != 1793938425LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x757 = UINT16_MAX;
	int8_t x758 = -1;
	int64_t x759 = -4LL;
	uint32_t x760 = UINT32_MAX;
	int64_t t188 = 20018580208LL;

    t188 = (((x757>x758)&x759)+x760);

    if (t188 != 4294967295LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x761 = -1;
	uint32_t x762 = UINT32_MAX;
	volatile uint8_t x763 = UINT8_MAX;
	int8_t x764 = 0;
	static int32_t t189 = -9587219;

    t189 = (((x761>x762)&x763)+x764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x767 = 41748315U;
	static int8_t x768 = INT8_MAX;
	uint32_t t190 = 637U;

    t190 = (((x765>x766)&x767)+x768);

    if (t190 != 128U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x769 = INT8_MIN;
	volatile int16_t x770 = INT16_MIN;
	int64_t x771 = INT64_MIN;
	static uint16_t x772 = UINT16_MAX;
	volatile int64_t t191 = 1045646294580028LL;

    t191 = (((x769>x770)&x771)+x772);

    if (t191 != 65535LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x773 = INT8_MIN;
	uint32_t x774 = UINT32_MAX;
	uint64_t x775 = 762976146994676LLU;
	static uint8_t x776 = 7U;
	uint64_t t192 = 275752LLU;

    t192 = (((x773>x774)&x775)+x776);

    if (t192 != 7LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x778 = UINT8_MAX;
	static volatile uint16_t x780 = 1022U;

    t193 = (((x777>x778)&x779)+x780);

    if (t193 != 1022U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	static int64_t x782 = 30114LL;
	volatile int64_t x784 = -817240828973233763LL;
	int64_t t194 = -62395055310LL;

    t194 = (((x781>x782)&x783)+x784);

    if (t194 != -817240828973233763LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x785 = 2U;
	int16_t x786 = -129;
	uint16_t x787 = 8806U;
	int32_t x788 = INT32_MIN;
	int32_t t195 = INT32_MIN;

    t195 = (((x785>x786)&x787)+x788);

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x790 = UINT64_MAX;
	uint8_t x792 = 31U;
	volatile uint64_t t196 = 11715706821724231LLU;

    t196 = (((x789>x790)&x791)+x792);

    if (t196 != 31LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x793 = 346760939U;
	int8_t x794 = 35;
	int8_t x795 = -1;
	static volatile uint8_t x796 = 28U;
	int32_t t197 = 4450;

    t197 = (((x793>x794)&x795)+x796);

    if (t197 != 29) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x797 = INT32_MIN;
	static volatile uint64_t x798 = 216850075456094LLU;
	int8_t x799 = 9;
	uint64_t x800 = 91551223424966LLU;
	volatile uint64_t t198 = 38081LLU;

    t198 = (((x797>x798)&x799)+x800);

    if (t198 != 91551223424967LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x801 = 92U;
	uint32_t x802 = UINT32_MAX;
	int64_t x803 = INT64_MIN;
	static uint32_t x804 = UINT32_MAX;
	static int64_t t199 = -8LL;

    t199 = (((x801>x802)&x803)+x804);

    if (t199 != 4294967295LL) { NG(); } else { ; }
	
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

