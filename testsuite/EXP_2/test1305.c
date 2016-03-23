
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

int64_t x2 = 354841721994803LL;
uint8_t x5 = UINT8_MAX;
int8_t x8 = INT8_MAX;
volatile int32_t t1 = -5660;
int8_t x9 = -1;
static int32_t x15 = 8480;
int16_t x16 = -1;
static volatile int32_t t4 = INT32_MIN;
static volatile int64_t x33 = INT64_MIN;
static int32_t x34 = INT32_MIN;
uint64_t x37 = 1568LLU;
int64_t x40 = INT64_MAX;
volatile int64_t x42 = INT64_MAX;
int32_t x44 = INT32_MAX;
uint8_t x45 = UINT8_MAX;
volatile int16_t x48 = 0;
int64_t x49 = -1LL;
int8_t x50 = INT8_MIN;
uint32_t x56 = UINT32_MAX;
volatile uint8_t x61 = 1U;
uint32_t x63 = 1768614U;
uint32_t x73 = 89880604U;
int64_t x81 = -1LL;
volatile int32_t t22 = 4089;
volatile int32_t t23 = -4536;
int32_t x97 = INT32_MIN;
int64_t x101 = INT64_MAX;
volatile int64_t x110 = -4LL;
int32_t t29 = INT32_MAX;
static uint32_t x130 = 365676U;
int16_t x131 = 7962;
static int64_t t32 = INT64_MIN;
int16_t x135 = INT16_MIN;
int32_t x139 = -1;
uint32_t x141 = 19369887U;
int32_t x142 = -523078516;
static volatile int32_t x148 = INT32_MAX;
int64_t x154 = INT64_MIN;
static int32_t t38 = 48207547;
static int64_t x157 = INT64_MAX;
int32_t x167 = -1;
int32_t t42 = 1168;
volatile int64_t x175 = INT64_MIN;
volatile uint64_t x180 = 730018087LLU;
volatile uint32_t t45 = 808U;
volatile int32_t t46 = 29;
int16_t x189 = INT16_MIN;
int8_t x190 = INT8_MAX;
static int64_t x194 = INT64_MIN;
int16_t x200 = -1;
static int16_t x208 = INT16_MIN;
int32_t t52 = 346506749;
int32_t t53 = 97449;
static int64_t x220 = -747532901LL;
int16_t x229 = INT16_MIN;
int32_t x230 = 83;
static int8_t x232 = -1;
uint32_t t58 = 10586U;
volatile uint16_t x237 = 1U;
int64_t t59 = 17117LL;
static uint32_t x244 = 268132501U;
int32_t x246 = 2655;
volatile int32_t x248 = 6986308;
volatile int64_t x252 = -1LL;
static volatile uint32_t x253 = UINT32_MAX;
volatile uint16_t x262 = 24U;
int16_t x263 = -1;
volatile uint16_t x269 = 19700U;
int8_t x271 = INT8_MAX;
int8_t x273 = INT8_MIN;
int32_t t69 = -90;
int64_t x286 = -1LL;
int32_t x287 = -11;
uint8_t x289 = 2U;
int8_t x291 = -6;
int32_t x292 = 39832104;
static int64_t x297 = INT64_MIN;
uint64_t x298 = 139LLU;
static int32_t t74 = -15647;
static int8_t x304 = 1;
static int64_t x305 = INT64_MIN;
volatile int16_t x309 = INT16_MIN;
int32_t x313 = INT32_MIN;
int16_t x324 = -4363;
static volatile int32_t t81 = 69869223;
static int16_t x333 = INT16_MAX;
int8_t x334 = 5;
static int8_t x336 = INT8_MIN;
int16_t x342 = INT16_MAX;
uint8_t x346 = 91U;
static volatile int16_t x355 = INT16_MIN;
volatile int32_t t88 = -1;
volatile uint32_t t90 = UINT32_MAX;
int64_t x366 = -1LL;
static int64_t x374 = -53069LL;
uint16_t x376 = 6119U;
static uint64_t x385 = 2927688683669306LLU;
volatile int16_t x386 = 252;
static int64_t x394 = -1LL;
static uint8_t x396 = UINT8_MAX;
volatile int16_t x408 = -3779;
static uint32_t x417 = 4395681U;
volatile int8_t x418 = INT8_MAX;
int64_t x419 = 13860928036LL;
int64_t x420 = -1LL;
volatile int64_t x422 = -1886116734175LL;
static volatile int64_t x425 = 6541780LL;
int8_t x433 = 3;
volatile int64_t t108 = -43LL;
int64_t x444 = 250LL;
volatile uint16_t x446 = 0U;
static int8_t x451 = INT8_MIN;
volatile int32_t t112 = -232;
int64_t x464 = INT64_MIN;
volatile uint32_t x465 = 39455576U;
int16_t x471 = -7702;
int8_t x480 = -1;
uint32_t x491 = 1496U;
volatile int64_t x497 = INT64_MIN;
volatile uint16_t x498 = UINT16_MAX;
int32_t x499 = -113;
volatile int32_t t128 = -76;
uint8_t x519 = 105U;
int32_t x520 = INT32_MIN;
volatile uint64_t x524 = 198245LLU;
uint64_t x532 = UINT64_MAX;
uint64_t x533 = 183LLU;
volatile uint32_t x534 = 2251306U;
uint8_t x543 = 0U;
volatile int32_t t135 = -2605903;
volatile uint32_t x545 = UINT32_MAX;
int8_t x547 = 13;
volatile int32_t t138 = -170;
volatile int16_t x557 = INT16_MIN;
static uint32_t x564 = 18U;
uint64_t x568 = UINT64_MAX;
volatile uint32_t x569 = 3948018U;
volatile uint16_t x573 = UINT16_MAX;
int32_t t143 = -863982;
int32_t x577 = INT32_MIN;
int8_t x584 = -16;
static volatile int32_t t145 = -1;
int64_t t147 = -2LL;
static int8_t x594 = INT8_MAX;
int64_t x599 = INT64_MIN;
int8_t x603 = INT8_MIN;
static volatile int16_t x605 = INT16_MIN;
static volatile int64_t x619 = -259646582919812LL;
int64_t x622 = -5168462642346LL;
uint64_t x624 = 7628LLU;
uint16_t x627 = UINT16_MAX;
volatile int32_t t156 = -4122692;
volatile uint32_t x639 = 84403533U;
volatile int32_t t160 = -46882;
uint32_t x645 = 1615U;
uint64_t t161 = 10054781865188LLU;
int16_t x650 = INT16_MIN;
int8_t x653 = -26;
int8_t x658 = INT8_MIN;
static int32_t x664 = INT32_MIN;
static uint32_t x665 = 3890467U;
static volatile int64_t t166 = 1LL;
int32_t x671 = INT32_MIN;
volatile int32_t x675 = -130666250;
volatile int32_t t168 = 224312;
int32_t x678 = INT32_MIN;
uint64_t x679 = 1LLU;
volatile int16_t x683 = INT16_MAX;
int32_t x686 = INT32_MIN;
int64_t x688 = 4032227737LL;
int64_t x695 = 262241106LL;
static int64_t x696 = INT64_MIN;
volatile int64_t t173 = INT64_MIN;
static int8_t x699 = -6;
volatile int32_t x708 = INT32_MIN;
volatile int32_t t176 = 196714;
uint8_t x713 = 11U;
static volatile uint8_t x720 = 1U;
uint64_t t180 = 292713590522064LLU;
int16_t x726 = INT16_MIN;
int64_t x739 = -1LL;
int32_t x740 = INT32_MIN;
int32_t x742 = -2127;
volatile int32_t t186 = 185;
static uint16_t x758 = 9881U;
static int8_t x767 = -12;
static volatile int8_t x772 = INT8_MIN;
volatile int16_t x775 = -55;
int32_t t193 = -3;
int64_t x788 = 2020187941977507851LL;
int64_t x792 = INT64_MIN;
static volatile int16_t x795 = -107;
int64_t x799 = INT64_MAX;


void f0(void) {
    	volatile uint32_t x1 = 450662U;
	static volatile int16_t x3 = -1;
	int64_t x4 = -1LL;
	volatile int64_t t0 = 84687023LL;

    t0 = ((x1<=(x2!=x3))*x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -18;
	static volatile uint8_t x7 = UINT8_MAX;

    t1 = ((x5<=(x6!=x7))*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = INT32_MAX;
	static int8_t x11 = INT8_MIN;
	static int64_t x12 = -826122472805LL;
	volatile int64_t t2 = -6LL;

    t2 = ((x9<=(x10!=x11))*x12);

    if (t2 != -826122472805LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	uint16_t x14 = 194U;
	volatile int32_t t3 = 71260;

    t3 = ((x13<=(x14!=x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -5;
	int32_t x18 = INT32_MIN;
	volatile int64_t x19 = INT64_MAX;
	static volatile int32_t x20 = INT32_MIN;

    t4 = ((x17<=(x18!=x19))*x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	static uint16_t x22 = 83U;
	static int32_t x23 = -143849803;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 58360699;

    t5 = ((x21<=(x22!=x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int32_t x26 = INT32_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 1974LLU;
	volatile uint64_t t6 = 8373563910LLU;

    t6 = ((x25<=(x26!=x27))*x28);

    if (t6 != 1974LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = 33495224212757LL;
	int64_t t7 = 498394276612LL;

    t7 = ((x29<=(x30!=x31))*x32);

    if (t7 != 33495224212757LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x35 = UINT8_MAX;
	uint32_t x36 = 37491685U;
	uint32_t t8 = 50190113U;

    t8 = ((x33<=(x34!=x35))*x36);

    if (t8 != 37491685U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = INT64_MIN;
	static int64_t x39 = INT64_MIN;
	static volatile int64_t t9 = -9250089538889761LL;

    t9 = ((x37<=(x38!=x39))*x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x41 = 8606876;
	volatile uint8_t x43 = 1U;
	static int32_t t10 = -23350106;

    t10 = ((x41<=(x42!=x43))*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MAX;
	int32_t x47 = -1;
	int32_t t11 = -1;

    t11 = ((x45<=(x46!=x47))*x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;
	uint32_t t12 = UINT32_MAX;

    t12 = ((x49<=(x50!=x51))*x52);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MIN;
	int64_t x55 = -1LL;
	volatile uint32_t t13 = 584982313U;

    t13 = ((x53<=(x54!=x55))*x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	int32_t x58 = -1;
	static int32_t x59 = 15;
	static volatile uint8_t x60 = UINT8_MAX;
	int32_t t14 = -1435;

    t14 = ((x57<=(x58!=x59))*x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = UINT16_MAX;
	int64_t x64 = INT64_MAX;
	volatile int64_t t15 = INT64_MAX;

    t15 = ((x61<=(x62!=x63))*x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x65 = -1;
	uint32_t x66 = 9512721U;
	volatile int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 95;

    t16 = ((x65<=(x66!=x67))*x68);

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 224035031U;
	static volatile uint16_t x70 = UINT16_MAX;
	static volatile int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int64_t t17 = 181743414LL;

    t17 = ((x69<=(x70!=x71))*x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = 2;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = -1;
	volatile int32_t t18 = 0;

    t18 = ((x73<=(x74!=x75))*x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	static int32_t x78 = 0;
	volatile uint32_t x79 = 1297146423U;
	uint16_t x80 = 1331U;
	volatile int32_t t19 = -3746129;

    t19 = ((x77<=(x78!=x79))*x80);

    if (t19 != 1331) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x82 = UINT64_MAX;
	volatile uint8_t x83 = 3U;
	int8_t x84 = -1;
	int32_t t20 = 361;

    t20 = ((x81<=(x82!=x83))*x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -1;
	uint32_t x86 = 2470184U;
	uint64_t x87 = 1LLU;
	int64_t x88 = 529746976LL;
	int64_t t21 = -2LL;

    t21 = ((x85<=(x86!=x87))*x88);

    if (t21 != 529746976LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 30U;
	static int64_t x90 = INT64_MAX;
	int16_t x91 = -330;
	int32_t x92 = INT32_MIN;

    t22 = ((x89<=(x90!=x91))*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	uint16_t x94 = 11532U;
	int8_t x95 = INT8_MIN;
	uint16_t x96 = UINT16_MAX;

    t23 = ((x93<=(x94!=x95))*x96);

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 19U;
	volatile int32_t t24 = -815;

    t24 = ((x97<=(x98!=x99))*x100);

    if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = INT8_MAX;
	uint32_t x104 = 1893U;
	volatile uint32_t t25 = 241U;

    t25 = ((x101<=(x102!=x103))*x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = UINT16_MAX;
	uint32_t x107 = UINT32_MAX;
	static volatile int8_t x108 = -5;
	volatile int32_t t26 = 109;

    t26 = ((x105<=(x106!=x107))*x108);

    if (t26 != -5) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	volatile int64_t x111 = -1LL;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t27 = 53363185;

    t27 = ((x109<=(x110!=x111))*x112);

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 3529;
	int8_t x114 = 22;
	int8_t x115 = INT8_MAX;
	uint8_t x116 = 73U;
	volatile int32_t t28 = 55991752;

    t28 = ((x113<=(x114!=x115))*x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = 42353U;
	uint32_t x119 = 8345U;
	volatile int32_t x120 = INT32_MAX;

    t29 = ((x117<=(x118!=x119))*x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MAX;
	int32_t x122 = 425212;
	uint64_t x123 = 2564761LLU;
	static uint32_t x124 = UINT32_MAX;
	volatile uint32_t t30 = 25673066U;

    t30 = ((x121<=(x122!=x123))*x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 924747043536LLU;
	volatile uint32_t x126 = 320173704U;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 9944U;
	int32_t t31 = -118020693;

    t31 = ((x125<=(x126!=x127))*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	int64_t x132 = INT64_MIN;

    t32 = ((x129<=(x130!=x131))*x132);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MAX;
	static int16_t x134 = INT16_MIN;
	static volatile int32_t x136 = INT32_MIN;
	int32_t t33 = -1097;

    t33 = ((x133<=(x134!=x135))*x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 0;
	static uint64_t x138 = UINT64_MAX;
	uint16_t x140 = 6U;
	volatile int32_t t34 = -211;

    t34 = ((x137<=(x138!=x139))*x140);

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x143 = -1;
	int16_t x144 = -351;
	int32_t t35 = -14;

    t35 = ((x141<=(x142!=x143))*x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 13U;
	volatile uint32_t x146 = 331U;
	int64_t x147 = -1LL;
	int32_t t36 = -34;

    t36 = ((x145<=(x146!=x147))*x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x149 = 5;
	uint64_t x150 = 0LLU;
	int32_t x151 = 221;
	int64_t x152 = INT64_MIN;
	volatile int64_t t37 = -482157LL;

    t37 = ((x149<=(x150!=x151))*x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 45U;
	int32_t x156 = INT32_MIN;

    t38 = ((x153<=(x154!=x155))*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MAX;
	int64_t x159 = INT64_MAX;
	int8_t x160 = 2;
	int32_t t39 = -5625983;

    t39 = ((x157<=(x158!=x159))*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 62U;
	static int16_t x162 = -1;
	int16_t x163 = INT16_MAX;
	int16_t x164 = -11135;
	volatile int32_t t40 = -258949;

    t40 = ((x161<=(x162!=x163))*x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 3073816LLU;
	int32_t x166 = -4;
	int32_t x168 = INT32_MAX;
	int32_t t41 = 12928886;

    t41 = ((x165<=(x166!=x167))*x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = UINT16_MAX;
	static uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 1U;
	volatile uint8_t x172 = 8U;

    t42 = ((x169<=(x170!=x171))*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 25444U;
	int8_t x174 = -33;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -335105;

    t43 = ((x173<=(x174!=x175))*x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MAX;
	int8_t x178 = INT8_MIN;
	static int8_t x179 = -1;
	uint64_t t44 = 79576042255389LLU;

    t44 = ((x177<=(x178!=x179))*x180);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 30858219LLU;
	volatile int32_t x182 = INT32_MIN;
	static int8_t x183 = -1;
	uint32_t x184 = 474149U;

    t45 = ((x181<=(x182!=x183))*x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	uint16_t x186 = 26093U;
	uint16_t x187 = 130U;
	volatile int16_t x188 = INT16_MIN;

    t46 = ((x185<=(x186!=x187))*x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x191 = 4224776379276LL;
	uint16_t x192 = 107U;
	static int32_t t47 = -13563481;

    t47 = ((x189<=(x190!=x191))*x192);

    if (t47 != 107) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 1;
	int64_t x195 = INT64_MIN;
	int8_t x196 = -1;
	int32_t t48 = 108549;

    t48 = ((x193<=(x194!=x195))*x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MAX;
	static volatile int16_t x199 = INT16_MIN;
	int32_t t49 = -2046;

    t49 = ((x197<=(x198!=x199))*x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = INT32_MIN;
	int8_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = 8198;
	int32_t t50 = 62227;

    t50 = ((x201<=(x202!=x203))*x204);

    if (t50 != 8198) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MIN;
	int32_t x207 = -110190324;
	int32_t t51 = -31056;

    t51 = ((x205<=(x206!=x207))*x208);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = -1021;
	static uint32_t x210 = UINT32_MAX;
	uint32_t x211 = UINT32_MAX;
	static int16_t x212 = INT16_MIN;

    t52 = ((x209<=(x210!=x211))*x212);

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	int16_t x214 = -18;
	static uint64_t x215 = 224984390627LLU;
	uint8_t x216 = UINT8_MAX;

    t53 = ((x213<=(x214!=x215))*x216);

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 27916482765LLU;
	static uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	static int64_t t54 = 215470361100176326LL;

    t54 = ((x217<=(x218!=x219))*x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x221 = 3LL;
	volatile int8_t x222 = INT8_MIN;
	volatile int64_t x223 = INT64_MAX;
	int8_t x224 = -1;
	static volatile int32_t t55 = -945836147;

    t55 = ((x221<=(x222!=x223))*x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x225 = INT8_MIN;
	static volatile int32_t x226 = -3087;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = -1263116;

    t56 = ((x225<=(x226!=x227))*x228);

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x231 = 10007248U;
	int32_t t57 = 56730808;

    t57 = ((x229<=(x230!=x231))*x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 1U;
	int32_t x234 = -208;
	volatile int16_t x235 = INT16_MIN;
	uint32_t x236 = 65290190U;

    t58 = ((x233<=(x234!=x235))*x236);

    if (t58 != 65290190U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -30233518853086756LL;
	static int16_t x239 = INT16_MIN;
	int64_t x240 = -371895510LL;

    t59 = ((x237<=(x238!=x239))*x240);

    if (t59 != -371895510LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -2;
	static int64_t x242 = INT64_MIN;
	uint32_t x243 = 421336U;
	volatile uint32_t t60 = 15U;

    t60 = ((x241<=(x242!=x243))*x244);

    if (t60 != 268132501U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	uint8_t x247 = 10U;
	static volatile int32_t t61 = 64782;

    t61 = ((x245<=(x246!=x247))*x248);

    if (t61 != 6986308) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile int8_t x250 = INT8_MIN;
	int64_t x251 = -9137017721100LL;
	static int64_t t62 = 267039308LL;

    t62 = ((x249<=(x250!=x251))*x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t63 = 9284;

    t63 = ((x253<=(x254!=x255))*x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MAX;
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 95U;
	uint64_t x260 = 31289664676LLU;
	uint64_t t64 = 7LLU;

    t64 = ((x257<=(x258!=x259))*x260);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	static int8_t x264 = 1;
	int32_t t65 = -45596972;

    t65 = ((x261<=(x262!=x263))*x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	uint64_t x266 = 2LLU;
	int32_t x267 = -1;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = 25558;

    t66 = ((x265<=(x266!=x267))*x268);

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = INT8_MIN;
	int16_t x272 = -1;
	int32_t t67 = 433960;

    t67 = ((x269<=(x270!=x271))*x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	int64_t x276 = 5680LL;
	int64_t t68 = 16LL;

    t68 = ((x273<=(x274!=x275))*x276);

    if (t68 != 5680LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;
	volatile int32_t x279 = 3;
	int8_t x280 = INT8_MIN;

    t69 = ((x277<=(x278!=x279))*x280);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = INT64_MIN;
	int16_t x283 = -779;
	int64_t x284 = -1LL;
	int64_t t70 = 16280657LL;

    t70 = ((x281<=(x282!=x283))*x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	uint32_t x288 = 75037U;
	volatile uint32_t t71 = 52644981U;

    t71 = ((x285<=(x286!=x287))*x288);

    if (t71 != 75037U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x290 = INT64_MAX;
	int32_t t72 = 0;

    t72 = ((x289<=(x290!=x291))*x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 5U;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 543U;
	volatile int64_t x296 = -20283029LL;
	int64_t t73 = 34225153963LL;

    t73 = ((x293<=(x294!=x295))*x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x299 = 576718U;
	int8_t x300 = INT8_MAX;

    t74 = ((x297<=(x298!=x299))*x300);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 1;
	int8_t x302 = INT8_MAX;
	volatile uint64_t x303 = UINT64_MAX;
	int32_t t75 = -8;

    t75 = ((x301<=(x302!=x303))*x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t76 = -51936464;

    t76 = ((x305<=(x306!=x307))*x308);

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x310 = UINT64_MAX;
	int16_t x311 = -1;
	static int32_t x312 = INT32_MAX;
	volatile int32_t t77 = INT32_MAX;

    t77 = ((x309<=(x310!=x311))*x312);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x314 = 35186312;
	volatile uint32_t x315 = UINT32_MAX;
	int8_t x316 = -1;
	volatile int32_t t78 = -435;

    t78 = ((x313<=(x314!=x315))*x316);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = 12;
	int8_t x319 = INT8_MAX;
	uint64_t x320 = 1362284789LLU;
	static uint64_t t79 = 6LLU;

    t79 = ((x317<=(x318!=x319))*x320);

    if (t79 != 1362284789LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 11453470193LLU;
	int16_t x323 = INT16_MIN;
	volatile int32_t t80 = 32;

    t80 = ((x321<=(x322!=x323))*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = INT8_MAX;
	uint16_t x326 = 3U;
	int8_t x327 = -1;
	int32_t x328 = -80294;

    t81 = ((x325<=(x326!=x327))*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 1;
	volatile int8_t x330 = -3;
	static int8_t x331 = -3;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -3401133;

    t82 = ((x329<=(x330!=x331))*x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x335 = INT16_MIN;
	int32_t t83 = -176417;

    t83 = ((x333<=(x334!=x335))*x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	volatile int64_t x338 = INT64_MIN;
	volatile int32_t x339 = INT32_MAX;
	int64_t x340 = 4611641LL;
	volatile int64_t t84 = 97152937048757558LL;

    t84 = ((x337<=(x338!=x339))*x340);

    if (t84 != 4611641LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = 2;
	int32_t x343 = INT32_MIN;
	int64_t x344 = 768469621LL;
	int64_t t85 = 19201169LL;

    t85 = ((x341<=(x342!=x343))*x344);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint16_t x345 = 27U;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = UINT64_MAX;
	uint64_t t86 = 29LLU;

    t86 = ((x345<=(x346!=x347))*x348);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	static volatile int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	volatile uint32_t x352 = 2U;
	volatile uint32_t t87 = 12864U;

    t87 = ((x349<=(x350!=x351))*x352);

    if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	uint16_t x354 = UINT16_MAX;
	static int16_t x356 = -198;

    t88 = ((x353<=(x354!=x355))*x356);

    if (t88 != -198) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = 2044696LLU;
	int64_t x360 = -1LL;
	volatile int64_t t89 = 15415157247244LL;

    t89 = ((x357<=(x358!=x359))*x360);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MAX;
	uint32_t x364 = UINT32_MAX;

    t90 = ((x361<=(x362!=x363))*x364);

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -111;
	int16_t x367 = -1;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = INT32_MAX;

    t91 = ((x365<=(x366!=x367))*x368);

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int64_t x370 = INT64_MAX;
	uint16_t x371 = 137U;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -246706;

    t92 = ((x369<=(x370!=x371))*x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 106U;
	static volatile int16_t x375 = INT16_MAX;
	static volatile int32_t t93 = -741819;

    t93 = ((x373<=(x374!=x375))*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	static int16_t x379 = INT16_MIN;
	volatile int16_t x380 = INT16_MIN;
	int32_t t94 = -4878;

    t94 = ((x377<=(x378!=x379))*x380);

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	volatile int8_t x382 = INT8_MAX;
	int64_t x383 = INT64_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 201;

    t95 = ((x381<=(x382!=x383))*x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x387 = -1LL;
	int32_t x388 = -1;
	volatile int32_t t96 = 3;

    t96 = ((x385<=(x386!=x387))*x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = -1;
	static int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = UINT32_MAX;
	static uint32_t t97 = UINT32_MAX;

    t97 = ((x389<=(x390!=x391))*x392);

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	uint32_t x395 = UINT32_MAX;
	volatile int32_t t98 = -13219;

    t98 = ((x393<=(x394!=x395))*x396);

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x397 = 15U;
	int16_t x398 = -1;
	uint16_t x399 = 187U;
	static int32_t x400 = INT32_MIN;
	static int32_t t99 = -2;

    t99 = ((x397<=(x398!=x399))*x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	int32_t x402 = -1;
	int32_t x403 = INT32_MIN;
	static int16_t x404 = -1415;
	volatile int32_t t100 = 4496;

    t100 = ((x401<=(x402!=x403))*x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = -359;
	int16_t x406 = -181;
	int8_t x407 = INT8_MIN;
	int32_t t101 = -746;

    t101 = ((x405<=(x406!=x407))*x408);

    if (t101 != -3779) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x409 = INT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	int16_t x411 = 1215;
	int16_t x412 = 1;
	volatile int32_t t102 = 12006;

    t102 = ((x409<=(x410!=x411))*x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x413 = 33U;
	uint32_t x414 = 142U;
	uint16_t x415 = 17U;
	static volatile int8_t x416 = -1;
	static volatile int32_t t103 = 31332;

    t103 = ((x413<=(x414!=x415))*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t t104 = -30863279896959229LL;

    t104 = ((x417<=(x418!=x419))*x420);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = INT8_MIN;
	volatile uint32_t x423 = 64757U;
	int32_t x424 = -1;
	static volatile int32_t t105 = 8894;

    t105 = ((x421<=(x422!=x423))*x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = 1;
	int32_t x427 = 72803;
	uint8_t x428 = UINT8_MAX;
	int32_t t106 = -3832681;

    t106 = ((x425<=(x426!=x427))*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 65122LLU;
	volatile int16_t x430 = -1;
	static int64_t x431 = -1LL;
	static uint8_t x432 = 85U;
	volatile int32_t t107 = 4822392;

    t107 = ((x429<=(x430!=x431))*x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x434 = 16449U;
	static int8_t x435 = INT8_MAX;
	int64_t x436 = -12636523067LL;

    t108 = ((x433<=(x434!=x435))*x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint8_t x437 = UINT8_MAX;
	static uint32_t x438 = 372628414U;
	volatile int64_t x439 = 310LL;
	uint64_t x440 = 1825377942396538980LLU;
	static uint64_t t109 = 61062566LLU;

    t109 = ((x437<=(x438!=x439))*x440);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x441 = -15;
	int32_t x442 = 3;
	static int16_t x443 = INT16_MIN;
	static volatile int64_t t110 = -595234970903LL;

    t110 = ((x441<=(x442!=x443))*x444);

    if (t110 != 250LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -5;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MAX;
	volatile int32_t t111 = -1194;

    t111 = ((x445<=(x446!=x447))*x448);

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int64_t x450 = -1LL;
	int16_t x452 = INT16_MIN;

    t112 = ((x449<=(x450!=x451))*x452);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = 2;
	volatile int8_t x454 = INT8_MIN;
	int16_t x455 = INT16_MIN;
	uint32_t x456 = UINT32_MAX;
	uint32_t t113 = 5U;

    t113 = ((x453<=(x454!=x455))*x456);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int16_t x458 = INT16_MAX;
	static uint8_t x459 = UINT8_MAX;
	int32_t x460 = INT32_MAX;
	volatile int32_t t114 = -184161;

    t114 = ((x457<=(x458!=x459))*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = 58;
	uint8_t x462 = 105U;
	volatile int16_t x463 = -1;
	int64_t t115 = -12440452125563LL;

    t115 = ((x461<=(x462!=x463))*x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x466 = 0U;
	volatile int16_t x467 = -10;
	int8_t x468 = -1;
	volatile int32_t t116 = 5;

    t116 = ((x465<=(x466!=x467))*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 1596U;
	volatile int32_t x470 = 229466823;
	int8_t x472 = 0;
	volatile int32_t t117 = 412;

    t117 = ((x469<=(x470!=x471))*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MIN;
	static uint64_t x474 = 746381507LLU;
	volatile int16_t x475 = 3;
	volatile uint16_t x476 = UINT16_MAX;
	int32_t t118 = 903;

    t118 = ((x473<=(x474!=x475))*x476);

    if (t118 != 65535) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MAX;
	int8_t x479 = 11;
	volatile int32_t t119 = -847816;

    t119 = ((x477<=(x478!=x479))*x480);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x481 = INT64_MAX;
	static int64_t x482 = -1LL;
	static volatile int16_t x483 = INT16_MIN;
	int64_t x484 = -1LL;
	int64_t t120 = 18342629180823181LL;

    t120 = ((x481<=(x482!=x483))*x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = INT32_MAX;
	int64_t x486 = INT64_MAX;
	uint32_t x487 = UINT32_MAX;
	uint32_t x488 = 2813220U;
	static uint32_t t121 = 922335U;

    t121 = ((x485<=(x486!=x487))*x488);

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	uint64_t x490 = 201071LLU;
	volatile uint32_t x492 = 87739U;
	uint32_t t122 = 15967U;

    t122 = ((x489<=(x490!=x491))*x492);

    if (t122 != 87739U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x493 = UINT32_MAX;
	static uint16_t x494 = UINT16_MAX;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = INT8_MIN;
	volatile int32_t t123 = -1;

    t123 = ((x493<=(x494!=x495))*x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x500 = 194158665189754832LLU;
	volatile uint64_t t124 = 49999579520480LLU;

    t124 = ((x497<=(x498!=x499))*x500);

    if (t124 != 194158665189754832LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -9;
	volatile int16_t x502 = -36;
	volatile uint32_t x503 = UINT32_MAX;
	uint32_t x504 = 12253747U;
	uint32_t t125 = 58U;

    t125 = ((x501<=(x502!=x503))*x504);

    if (t125 != 12253747U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x505 = UINT64_MAX;
	static int32_t x506 = -473246;
	int8_t x507 = INT8_MAX;
	int64_t x508 = -3144443710233990786LL;
	volatile int64_t t126 = -29617844489592702LL;

    t126 = ((x505<=(x506!=x507))*x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	uint32_t x510 = UINT32_MAX;
	uint32_t x511 = UINT32_MAX;
	volatile uint32_t x512 = UINT32_MAX;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = ((x509<=(x510!=x511))*x512);

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 932U;
	static volatile uint64_t x514 = 12LLU;
	volatile int8_t x515 = 0;
	uint8_t x516 = UINT8_MAX;

    t128 = ((x513<=(x514!=x515))*x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = 43;
	uint64_t x518 = UINT64_MAX;
	volatile int32_t t129 = -159420;

    t129 = ((x517<=(x518!=x519))*x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x521 = 146U;
	volatile uint32_t x522 = UINT32_MAX;
	int32_t x523 = -7448;
	uint64_t t130 = 755006LLU;

    t130 = ((x521<=(x522!=x523))*x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = INT64_MIN;
	uint8_t x526 = UINT8_MAX;
	int16_t x527 = -5;
	int8_t x528 = INT8_MAX;
	static int32_t t131 = 35562;

    t131 = ((x525<=(x526!=x527))*x528);

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = 0;
	uint16_t x530 = UINT16_MAX;
	static uint16_t x531 = 335U;
	uint64_t t132 = UINT64_MAX;

    t132 = ((x529<=(x530!=x531))*x532);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x535 = INT8_MAX;
	int64_t x536 = -1LL;
	volatile int64_t t133 = -9566830578LL;

    t133 = ((x533<=(x534!=x535))*x536);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -764;
	static int16_t x538 = INT16_MIN;
	static int64_t x539 = INT64_MIN;
	volatile int32_t x540 = -452154171;
	int32_t t134 = 32713353;

    t134 = ((x537<=(x538!=x539))*x540);

    if (t134 != -452154171) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = INT64_MIN;
	volatile int64_t x542 = -1LL;
	static volatile int32_t x544 = -1;

    t135 = ((x541<=(x542!=x543))*x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x546 = -1;
	volatile uint8_t x548 = UINT8_MAX;
	static int32_t t136 = 113933;

    t136 = ((x545<=(x546!=x547))*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MAX;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = INT8_MAX;
	int32_t x552 = INT32_MIN;
	int32_t t137 = 1912587;

    t137 = ((x549<=(x550!=x551))*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = INT16_MIN;
	static uint8_t x554 = 96U;
	int64_t x555 = 48225395488LL;
	volatile int8_t x556 = -7;

    t138 = ((x553<=(x554!=x555))*x556);

    if (t138 != -7) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -2632;
	static int16_t x559 = INT16_MIN;
	int64_t x560 = 1068785230879153376LL;
	volatile int64_t t139 = 1339029704LL;

    t139 = ((x557<=(x558!=x559))*x560);

    if (t139 != 1068785230879153376LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 0;
	uint32_t x562 = 107713339U;
	static int16_t x563 = 17;
	volatile uint32_t t140 = 644732622U;

    t140 = ((x561<=(x562!=x563))*x564);

    if (t140 != 18U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = 55;
	static volatile int8_t x566 = -9;
	int16_t x567 = 746;
	static volatile uint64_t t141 = 62450129428688289LLU;

    t141 = ((x565<=(x566!=x567))*x568);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x570 = UINT16_MAX;
	volatile int16_t x571 = INT16_MAX;
	static uint64_t x572 = 0LLU;
	volatile uint64_t t142 = 136073LLU;

    t142 = ((x569<=(x570!=x571))*x572);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = -2754067;
	uint32_t x575 = UINT32_MAX;
	uint16_t x576 = UINT16_MAX;

    t143 = ((x573<=(x574!=x575))*x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x578 = INT32_MIN;
	uint64_t x579 = UINT64_MAX;
	int8_t x580 = INT8_MAX;
	volatile int32_t t144 = -171692;

    t144 = ((x577<=(x578!=x579))*x580);

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	static int16_t x582 = INT16_MIN;
	volatile int64_t x583 = -1LL;

    t145 = ((x581<=(x582!=x583))*x584);

    if (t145 != -16) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	static uint32_t x586 = UINT32_MAX;
	uint64_t x587 = 0LLU;
	int64_t x588 = -11140642LL;
	volatile int64_t t146 = 31604493264559164LL;

    t146 = ((x585<=(x586!=x587))*x588);

    if (t146 != -11140642LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 479363487U;
	int32_t x590 = -1;
	static uint16_t x591 = 32U;
	int64_t x592 = INT64_MIN;

    t147 = ((x589<=(x590!=x591))*x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	int32_t x595 = INT32_MAX;
	int8_t x596 = INT8_MIN;
	int32_t t148 = -40883196;

    t148 = ((x593<=(x594!=x595))*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 11030U;
	volatile int64_t x598 = INT64_MAX;
	uint8_t x600 = 0U;
	int32_t t149 = -454786;

    t149 = ((x597<=(x598!=x599))*x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x601 = 867955LLU;
	int8_t x602 = INT8_MIN;
	static int64_t x604 = 6LL;
	volatile int64_t t150 = 7388571432806LL;

    t150 = ((x601<=(x602!=x603))*x604);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = INT16_MIN;
	volatile int8_t x607 = 8;
	int8_t x608 = -14;
	int32_t t151 = 199;

    t151 = ((x605<=(x606!=x607))*x608);

    if (t151 != -14) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MAX;
	uint32_t x610 = 15097U;
	static volatile int8_t x611 = 24;
	int64_t x612 = INT64_MIN;
	volatile int64_t t152 = 182276745LL;

    t152 = ((x609<=(x610!=x611))*x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	uint16_t x614 = 29U;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = 1;
	volatile int32_t t153 = -1744908;

    t153 = ((x613<=(x614!=x615))*x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint64_t x618 = 6972LLU;
	int16_t x620 = INT16_MAX;
	int32_t t154 = 0;

    t154 = ((x617<=(x618!=x619))*x620);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 856081762U;
	static int16_t x623 = INT16_MAX;
	uint64_t t155 = 439247LLU;

    t155 = ((x621<=(x622!=x623))*x624);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 1108U;
	volatile int8_t x626 = INT8_MAX;
	int32_t x628 = -1055570057;

    t156 = ((x625<=(x626!=x627))*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x629 = 24U;
	int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	int64_t x632 = -194310484016032201LL;
	int64_t t157 = -3663343988LL;

    t157 = ((x629<=(x630!=x631))*x632);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 13U;
	int8_t x634 = INT8_MIN;
	int32_t x635 = INT32_MIN;
	static int64_t x636 = -2660762741265LL;
	volatile int64_t t158 = -1600LL;

    t158 = ((x633<=(x634!=x635))*x636);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = -1;
	volatile int16_t x640 = -1;
	int32_t t159 = 0;

    t159 = ((x637<=(x638!=x639))*x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	uint16_t x642 = UINT16_MAX;
	int64_t x643 = -11448998LL;
	static int16_t x644 = -1;

    t160 = ((x641<=(x642!=x643))*x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x646 = INT8_MIN;
	uint16_t x647 = 887U;
	uint64_t x648 = 55502166LLU;

    t161 = ((x645<=(x646!=x647))*x648);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int32_t x651 = INT32_MAX;
	int32_t x652 = 213;
	volatile int32_t t162 = 1358;

    t162 = ((x649<=(x650!=x651))*x652);

    if (t162 != 213) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = INT16_MAX;
	int64_t x655 = 7472565601495072LL;
	uint32_t x656 = 263649U;
	uint32_t t163 = 632137025U;

    t163 = ((x653<=(x654!=x655))*x656);

    if (t163 != 263649U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	uint32_t x659 = 5U;
	volatile uint32_t x660 = 3U;
	volatile uint32_t t164 = 31U;

    t164 = ((x657<=(x658!=x659))*x660);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = INT16_MIN;
	volatile int64_t x662 = INT64_MIN;
	uint16_t x663 = 3U;
	int32_t t165 = INT32_MIN;

    t165 = ((x661<=(x662!=x663))*x664);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = 22765LL;
	uint32_t x667 = 1594U;
	volatile int64_t x668 = -1LL;

    t166 = ((x665<=(x666!=x667))*x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 9U;
	volatile int8_t x670 = INT8_MIN;
	volatile int32_t x672 = INT32_MIN;
	int32_t t167 = 1;

    t167 = ((x669<=(x670!=x671))*x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = -1;
	int32_t x674 = 24;
	volatile int8_t x676 = 0;

    t168 = ((x673<=(x674!=x675))*x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = -1;
	volatile uint64_t x680 = UINT64_MAX;
	uint64_t t169 = UINT64_MAX;

    t169 = ((x677<=(x678!=x679))*x680);

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MAX;
	static int8_t x682 = INT8_MIN;
	static uint16_t x684 = UINT16_MAX;
	int32_t t170 = 14997843;

    t170 = ((x681<=(x682!=x683))*x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	int32_t x687 = -1;
	volatile int64_t t171 = -3871LL;

    t171 = ((x685<=(x686!=x687))*x688);

    if (t171 != 4032227737LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 0;
	volatile int64_t x690 = -1LL;
	int32_t x691 = -1;
	volatile int8_t x692 = INT8_MAX;
	int32_t t172 = 33;

    t172 = ((x689<=(x690!=x691))*x692);

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = -1;
	int8_t x694 = 30;

    t173 = ((x693<=(x694!=x695))*x696);

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = 1577179;
	uint64_t x698 = UINT64_MAX;
	int8_t x700 = -8;
	int32_t t174 = 6735;

    t174 = ((x697<=(x698!=x699))*x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -1LL;
	int64_t x702 = INT64_MAX;
	uint64_t x703 = 763547790153LLU;
	static volatile int16_t x704 = INT16_MIN;
	volatile int32_t t175 = 2200;

    t175 = ((x701<=(x702!=x703))*x704);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x705 = 27910U;
	int8_t x706 = -13;
	int64_t x707 = 3LL;

    t176 = ((x705<=(x706!=x707))*x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = 105297362942766LL;
	int32_t x710 = -26;
	int16_t x711 = INT16_MIN;
	int16_t x712 = -181;
	int32_t t177 = -31027129;

    t177 = ((x709<=(x710!=x711))*x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x714 = UINT16_MAX;
	static int64_t x715 = -1LL;
	volatile int32_t x716 = -478;
	volatile int32_t t178 = -82998571;

    t178 = ((x713<=(x714!=x715))*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -25;
	uint16_t x718 = UINT16_MAX;
	int64_t x719 = -1LL;
	volatile int32_t t179 = -292;

    t179 = ((x717<=(x718!=x719))*x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 1689;
	int8_t x722 = INT8_MIN;
	int8_t x723 = -1;
	uint64_t x724 = UINT64_MAX;

    t180 = ((x721<=(x722!=x723))*x724);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	uint16_t x727 = 85U;
	int64_t x728 = 209441302989020LL;
	volatile int64_t t181 = 261095104112LL;

    t181 = ((x725<=(x726!=x727))*x728);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MAX;
	int32_t x730 = INT32_MAX;
	uint8_t x731 = UINT8_MAX;
	int32_t x732 = 1712547;
	static volatile int32_t t182 = 1018072698;

    t182 = ((x729<=(x730!=x731))*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	volatile uint64_t x734 = 32924261344741LLU;
	volatile uint8_t x735 = UINT8_MAX;
	volatile int32_t x736 = -883;
	int32_t t183 = 84461;

    t183 = ((x733<=(x734!=x735))*x736);

    if (t183 != -883) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -7LL;
	int64_t x738 = -36513346LL;
	volatile int32_t t184 = INT32_MIN;

    t184 = ((x737<=(x738!=x739))*x740);

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	volatile int8_t x743 = 4;
	uint8_t x744 = UINT8_MAX;
	volatile int32_t t185 = -1570113;

    t185 = ((x741<=(x742!=x743))*x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 91497;
	static uint32_t x746 = 1827U;
	int32_t x747 = INT32_MIN;
	int32_t x748 = INT32_MIN;

    t186 = ((x745<=(x746!=x747))*x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 392;
	static uint32_t x750 = 848049U;
	int64_t x751 = 12LL;
	static int8_t x752 = 1;
	static volatile int32_t t187 = -2828;

    t187 = ((x749<=(x750!=x751))*x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	volatile int32_t x754 = INT32_MIN;
	volatile int16_t x755 = -1;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 49897704;

    t188 = ((x753<=(x754!=x755))*x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int64_t x759 = -325164140684LL;
	int32_t x760 = 1011;
	int32_t t189 = -3807;

    t189 = ((x757<=(x758!=x759))*x760);

    if (t189 != 1011) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	volatile uint64_t x762 = 17591738371959784LLU;
	int8_t x763 = INT8_MIN;
	int16_t x764 = -37;
	int32_t t190 = -84665089;

    t190 = ((x761<=(x762!=x763))*x764);

    if (t190 != -37) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	int8_t x766 = -4;
	int64_t x768 = -1LL;
	volatile int64_t t191 = 765626761102LL;

    t191 = ((x765<=(x766!=x767))*x768);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = -1LL;
	static int64_t x770 = -1LL;
	int32_t x771 = -7325;
	volatile int32_t t192 = 105988253;

    t192 = ((x769<=(x770!=x771))*x772);

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	int64_t x774 = INT64_MIN;
	uint8_t x776 = UINT8_MAX;

    t193 = ((x773<=(x774!=x775))*x776);

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 1;
	static volatile uint32_t x778 = 188406939U;
	uint16_t x779 = UINT16_MAX;
	static uint64_t x780 = 288688LLU;
	uint64_t t194 = 1385033097LLU;

    t194 = ((x777<=(x778!=x779))*x780);

    if (t194 != 288688LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 0U;
	static int8_t x782 = INT8_MAX;
	int16_t x783 = INT16_MAX;
	volatile int16_t x784 = 234;
	volatile int32_t t195 = 29646760;

    t195 = ((x781<=(x782!=x783))*x784);

    if (t195 != 234) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 6500U;
	volatile uint32_t x786 = 2491161U;
	int64_t x787 = INT64_MIN;
	int64_t t196 = -34195307444137105LL;

    t196 = ((x785<=(x786!=x787))*x788);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	static int16_t x790 = INT16_MAX;
	int8_t x791 = INT8_MIN;
	int64_t t197 = INT64_MIN;

    t197 = ((x789<=(x790!=x791))*x792);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -1;
	static int32_t x794 = INT32_MAX;
	int16_t x796 = INT16_MAX;
	volatile int32_t t198 = -57;

    t198 = ((x793<=(x794!=x795))*x796);

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MAX;
	static int32_t x800 = INT32_MAX;
	static volatile int32_t t199 = INT32_MAX;

    t199 = ((x797<=(x798!=x799))*x800);

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

