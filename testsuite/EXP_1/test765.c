
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

volatile uint32_t x5 = UINT32_MAX;
volatile int8_t x7 = INT8_MIN;
int64_t x12 = INT64_MIN;
uint8_t x16 = 3U;
uint8_t x17 = UINT8_MAX;
static volatile int8_t x27 = -8;
static int32_t t8 = -51;
uint64_t x38 = UINT64_MAX;
int16_t x40 = INT16_MAX;
int32_t t9 = -64363;
int32_t x42 = INT32_MAX;
uint32_t x47 = 0U;
int8_t x52 = INT8_MAX;
int64_t x55 = -340664LL;
int16_t x61 = -2253;
int8_t x62 = INT8_MAX;
int16_t x64 = INT16_MIN;
volatile int32_t t19 = -1;
int16_t x93 = 1;
int64_t x96 = INT64_MAX;
static uint32_t x107 = 65470U;
int32_t t24 = -1;
uint8_t x111 = 1U;
int64_t x113 = INT64_MIN;
int32_t t26 = 38;
int16_t x122 = INT16_MIN;
volatile uint32_t x136 = UINT32_MAX;
uint8_t x141 = UINT8_MAX;
static int32_t x157 = INT32_MIN;
static int8_t x158 = INT8_MIN;
uint8_t x159 = UINT8_MAX;
uint64_t x166 = 25LLU;
static uint16_t x169 = UINT16_MAX;
int8_t x171 = INT8_MAX;
uint16_t x176 = 56U;
volatile int64_t x185 = -3844761712865952LL;
volatile int8_t x189 = INT8_MAX;
int32_t t45 = -737;
int16_t x196 = INT16_MIN;
static int32_t x205 = -1;
int32_t x207 = -190663968;
uint16_t x210 = 1U;
static uint32_t x218 = 6275U;
int32_t x219 = INT32_MIN;
uint16_t x221 = 0U;
volatile int64_t x232 = INT64_MAX;
int32_t t58 = -9356506;
uint8_t x250 = UINT8_MAX;
uint16_t x252 = 24120U;
uint8_t x254 = 93U;
static int16_t x256 = INT16_MIN;
volatile int32_t t61 = -51626;
int64_t x262 = INT64_MIN;
uint32_t x263 = 3553U;
static int32_t t63 = 472452;
volatile int32_t t65 = 70214483;
int8_t x284 = INT8_MAX;
volatile uint16_t x301 = UINT16_MAX;
static int32_t x302 = INT32_MIN;
int16_t x305 = -1;
int64_t x308 = -179481290767737487LL;
static int64_t x312 = INT64_MAX;
int32_t t74 = -20;
volatile uint8_t x316 = UINT8_MAX;
volatile int32_t t76 = -1;
int32_t t77 = 41641;
int16_t x327 = 6;
int64_t x332 = INT64_MIN;
int32_t x346 = INT32_MAX;
int8_t x348 = -1;
volatile int32_t t83 = 592514;
int32_t x354 = -22720;
int8_t x361 = -2;
static int16_t x362 = INT16_MIN;
int32_t x366 = -1;
uint16_t x379 = 0U;
int32_t x380 = INT32_MAX;
volatile int16_t x387 = INT16_MIN;
static volatile int32_t x392 = INT32_MAX;
int16_t x394 = INT16_MAX;
static int8_t x397 = -1;
int32_t t95 = -15014338;
int64_t x406 = -1LL;
static uint8_t x413 = 5U;
int32_t t98 = 3;
static volatile int32_t t99 = -185731;
volatile int32_t t101 = -2684;
uint64_t x431 = UINT64_MAX;
int16_t x436 = -1;
volatile int32_t t106 = -124;
static volatile int32_t t111 = 422918;
int8_t x470 = INT8_MIN;
int8_t x477 = INT8_MIN;
static volatile int32_t t114 = -31;
volatile int64_t x481 = INT64_MIN;
uint64_t x489 = 1480635LLU;
int32_t x492 = INT32_MIN;
static int8_t x497 = INT8_MIN;
static int16_t x498 = INT16_MIN;
volatile int32_t x499 = INT32_MIN;
static volatile int32_t t118 = -698;
volatile int64_t x503 = INT64_MIN;
uint64_t x511 = 2369160288907907036LLU;
static int16_t x514 = INT16_MIN;
int64_t x518 = 1LL;
volatile uint64_t x528 = 29LLU;
uint32_t x534 = 904131U;
volatile int32_t t127 = 6420625;
int32_t t128 = -5492;
static int64_t x551 = INT64_MIN;
int16_t x556 = INT16_MIN;
uint64_t x564 = 791347997067115243LLU;
int32_t t134 = 2801243;
volatile int32_t t136 = 31;
volatile int32_t t137 = -106796305;
int8_t x582 = -14;
int8_t x592 = INT8_MAX;
volatile int32_t t140 = 1298;
static int16_t x597 = INT16_MIN;
static int16_t x598 = -1;
int64_t x600 = -39324LL;
uint8_t x602 = 2U;
static uint32_t x607 = UINT32_MAX;
uint8_t x611 = 15U;
static int32_t t144 = -2;
static int64_t x613 = 5208078LL;
volatile int32_t t145 = -75282195;
int8_t x617 = INT8_MIN;
volatile int32_t t146 = 16633838;
volatile int16_t x621 = -7;
uint16_t x624 = UINT16_MAX;
uint16_t x628 = UINT16_MAX;
int32_t x633 = INT32_MAX;
int64_t x637 = INT64_MAX;
uint16_t x641 = 2U;
static volatile int32_t t152 = -1817;
static uint64_t x653 = UINT64_MAX;
int32_t t154 = -5;
volatile int32_t x659 = -31;
int16_t x660 = -1;
uint32_t x663 = UINT32_MAX;
int8_t x664 = INT8_MAX;
static volatile int8_t x665 = INT8_MIN;
int16_t x670 = 5;
uint64_t x671 = UINT64_MAX;
static int32_t t159 = 70447006;
int8_t x679 = -1;
int16_t x682 = -2;
static int16_t x685 = 121;
volatile int16_t x687 = INT16_MIN;
int8_t x698 = -1;
int16_t x699 = INT16_MIN;
volatile int32_t t164 = 3409028;
static volatile int64_t x704 = INT64_MIN;
static int32_t x719 = -441;
static uint32_t x722 = 16730U;
uint64_t x726 = 84924343LLU;
int64_t x731 = INT64_MIN;
volatile uint32_t x736 = UINT32_MAX;
int64_t x738 = INT64_MAX;
int16_t x740 = INT16_MIN;
static uint8_t x743 = UINT8_MAX;
uint64_t x744 = 47794443307LLU;
int32_t x745 = INT32_MIN;
uint16_t x751 = 3U;
volatile int32_t t177 = 5090117;
int16_t x755 = -6;
static uint16_t x757 = 0U;
int8_t x779 = INT8_MIN;
int8_t x784 = -1;
volatile int64_t x788 = -1LL;
volatile int8_t x793 = -1;
int16_t x795 = INT16_MIN;
static volatile uint8_t x804 = UINT8_MAX;
int32_t x806 = 1465176;
static volatile int8_t x808 = INT8_MIN;
int16_t x809 = 3;
static int32_t t191 = 1;
int8_t x814 = INT8_MAX;
static volatile int64_t x816 = -1LL;
uint32_t x817 = UINT32_MAX;
int8_t x821 = INT8_MIN;
int16_t x825 = 1;
static uint32_t x827 = 14U;
static int32_t t195 = -1979;
int16_t x831 = -1;
int16_t x834 = INT16_MAX;
int64_t x836 = INT64_MAX;
int16_t x838 = INT16_MIN;
int8_t x840 = INT8_MAX;


void f0(void) {
    	volatile int64_t x1 = -3194945LL;
	static int16_t x2 = INT16_MIN;
	uint64_t x3 = 10248LLU;
	int8_t x4 = 3;
	volatile int32_t t0 = -2045559;

    t0 = (((x1/x2)|x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x6 = 6;
	uint16_t x8 = 1U;
	static int32_t t1 = -4;

    t1 = (((x5/x6)|x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	uint16_t x11 = UINT16_MAX;
	static int32_t t2 = 41404;

    t2 = (((x9/x10)|x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 466U;
	volatile int8_t x14 = 8;
	int64_t x15 = 1969304403117LL;
	static volatile int32_t t3 = 440;

    t3 = (((x13/x14)|x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 337U;
	int64_t x19 = 50777907391657LL;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 3;

    t4 = (((x17/x18)|x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = INT16_MIN;
	uint32_t x22 = 3U;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = INT64_MAX;
	int32_t t5 = 3;

    t5 = (((x21/x22)|x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	uint16_t x28 = 6129U;
	volatile int32_t t6 = -51216346;

    t6 = (((x25/x26)|x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 3984LL;
	int32_t x30 = -1;
	int32_t x31 = -4521;
	volatile int8_t x32 = INT8_MAX;
	int32_t t7 = -60465;

    t7 = (((x29/x30)|x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x34 = 63528;
	int16_t x35 = 0;
	int8_t x36 = INT8_MIN;

    t8 = (((x33/x34)|x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 155291986U;
	volatile int8_t x39 = INT8_MIN;

    t9 = (((x37/x38)|x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	int32_t x43 = -12;
	uint16_t x44 = 203U;
	int32_t t10 = -1449;

    t10 = (((x41/x42)|x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -8;
	uint16_t x46 = UINT16_MAX;
	static int16_t x48 = -1;
	int32_t t11 = 592122;

    t11 = (((x45/x46)|x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	int16_t x50 = -1;
	uint16_t x51 = 27U;
	int32_t t12 = -2;

    t12 = (((x49/x50)|x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	static int64_t x54 = INT64_MIN;
	volatile int32_t x56 = INT32_MAX;
	int32_t t13 = -3074;

    t13 = (((x53/x54)|x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = -1;
	int64_t x58 = -1LL;
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 6115;

    t14 = (((x57/x58)|x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x63 = -3;
	static volatile int32_t t15 = 63881362;

    t15 = (((x61/x62)|x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	static volatile int16_t x66 = 295;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = 1;

    t16 = (((x65/x66)|x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x77 = INT64_MAX;
	volatile uint8_t x78 = UINT8_MAX;
	int16_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	int32_t t17 = 13339;

    t17 = (((x77/x78)|x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MIN;
	volatile uint32_t x82 = 33629068U;
	uint8_t x83 = 23U;
	int8_t x84 = 29;
	int32_t t18 = 354;

    t18 = (((x81/x82)|x83)>x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x85 = 116U;
	int32_t x86 = -1;
	int64_t x87 = INT64_MAX;
	int32_t x88 = -461286151;

    t19 = (((x85/x86)|x87)>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	static uint32_t x91 = 58262U;
	static volatile int16_t x92 = INT16_MAX;
	int32_t t20 = -32827;

    t20 = (((x89/x90)|x91)>x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = -1;
	int64_t x95 = -183496648LL;
	int32_t t21 = 336955076;

    t21 = (((x93/x94)|x95)>x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MIN;
	int8_t x98 = -1;
	int32_t x99 = -155;
	volatile uint32_t x100 = 32158U;
	int32_t t22 = 46611616;

    t22 = (((x97/x98)|x99)>x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = INT64_MIN;
	static int16_t x102 = INT16_MAX;
	uint64_t x103 = 21917LLU;
	int64_t x104 = INT64_MIN;
	int32_t t23 = -424288;

    t23 = (((x101/x102)|x103)>x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x105 = INT8_MIN;
	int32_t x106 = -477211;
	uint32_t x108 = UINT32_MAX;

    t24 = (((x105/x106)|x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = 1338;
	int8_t x110 = INT8_MAX;
	int64_t x112 = -1LL;
	int32_t t25 = 0;

    t25 = (((x109/x110)|x111)>x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x114 = INT8_MIN;
	int16_t x115 = -493;
	uint16_t x116 = 52U;

    t26 = (((x113/x114)|x115)>x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x117 = INT64_MAX;
	volatile int32_t x118 = -90;
	int32_t x119 = INT32_MIN;
	static int32_t x120 = -702;
	static volatile int32_t t27 = 108576;

    t27 = (((x117/x118)|x119)>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = 3;
	uint8_t x123 = UINT8_MAX;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t28 = -193;

    t28 = (((x121/x122)|x123)>x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MIN;
	static volatile uint64_t x126 = 264910169LLU;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t29 = 27091;

    t29 = (((x125/x126)|x127)>x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 4U;
	int8_t x130 = INT8_MAX;
	static volatile int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	static int32_t t30 = 3804099;

    t30 = (((x129/x130)|x131)>x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 20U;
	int32_t x134 = -1069865;
	int32_t x135 = -1;
	int32_t t31 = 2083303;

    t31 = (((x133/x134)|x135)>x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = UINT8_MAX;
	volatile int64_t x138 = -1LL;
	int8_t x139 = -7;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t32 = -1104;

    t32 = (((x137/x138)|x139)>x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x142 = UINT8_MAX;
	static int64_t x143 = INT64_MAX;
	uint16_t x144 = 1U;
	static volatile int32_t t33 = 7069;

    t33 = (((x141/x142)|x143)>x144);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = -1;
	uint32_t x146 = 1U;
	int64_t x147 = -1LL;
	int16_t x148 = -2535;
	int32_t t34 = -4;

    t34 = (((x145/x146)|x147)>x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = 16;
	volatile int16_t x150 = INT16_MAX;
	volatile uint32_t x151 = 21U;
	uint16_t x152 = 3U;
	int32_t t35 = -29;

    t35 = (((x149/x150)|x151)>x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x153 = -1;
	static uint16_t x154 = UINT16_MAX;
	static int16_t x155 = -1;
	volatile int64_t x156 = -1LL;
	int32_t t36 = 451316901;

    t36 = (((x153/x154)|x155)>x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x160 = -1LL;
	int32_t t37 = -848;

    t37 = (((x157/x158)|x159)>x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = INT32_MIN;
	int64_t x162 = -9230047989LL;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	static volatile int32_t t38 = -1;

    t38 = (((x161/x162)|x163)>x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = INT32_MIN;
	int32_t x167 = -20680980;
	int64_t x168 = INT64_MIN;
	int32_t t39 = -82732988;

    t39 = (((x165/x166)|x167)>x168);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x170 = INT8_MIN;
	volatile int64_t x172 = 250957163LL;
	volatile int32_t t40 = 55226593;

    t40 = (((x169/x170)|x171)>x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 1141965LLU;
	static volatile uint32_t x174 = UINT32_MAX;
	static int8_t x175 = INT8_MAX;
	static int32_t t41 = 4094950;

    t41 = (((x173/x174)|x175)>x176);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = INT32_MIN;
	static int8_t x178 = -7;
	volatile int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MIN;
	static int32_t t42 = -183917823;

    t42 = (((x177/x178)|x179)>x180);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = 2U;
	static int64_t x182 = 10711557LL;
	static uint8_t x183 = 14U;
	static volatile uint8_t x184 = 15U;
	volatile int32_t t43 = -30479266;

    t43 = (((x181/x182)|x183)>x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x186 = 11542U;
	static volatile uint64_t x187 = UINT64_MAX;
	int16_t x188 = -1;
	volatile int32_t t44 = 0;

    t44 = (((x185/x186)|x187)>x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = INT64_MIN;
	int32_t x192 = -1;

    t45 = (((x189/x190)|x191)>x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 1;
	static volatile int8_t x194 = INT8_MAX;
	volatile int8_t x195 = INT8_MIN;
	volatile int32_t t46 = -28;

    t46 = (((x193/x194)|x195)>x196);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 0;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -34222252851290779LL;
	uint64_t x200 = 8154622000190LLU;
	int32_t t47 = -72502;

    t47 = (((x197/x198)|x199)>x200);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x201 = 1U;
	int32_t x202 = 811245622;
	volatile uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MAX;
	volatile int32_t t48 = 1440;

    t48 = (((x201/x202)|x203)>x204);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x206 = -61;
	int16_t x208 = 1;
	volatile int32_t t49 = -1;

    t49 = (((x205/x206)|x207)>x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = 239U;
	uint16_t x211 = 25U;
	int8_t x212 = -1;
	int32_t t50 = 5829;

    t50 = (((x209/x210)|x211)>x212);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = 116;
	uint8_t x214 = UINT8_MAX;
	volatile int16_t x215 = -182;
	static uint64_t x216 = 28168249650196245LLU;
	volatile int32_t t51 = 3;

    t51 = (((x213/x214)|x215)>x216);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = INT16_MIN;
	static volatile uint16_t x220 = UINT16_MAX;
	int32_t t52 = 7078;

    t52 = (((x217/x218)|x219)>x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x222 = -299443;
	static int8_t x223 = 11;
	uint8_t x224 = UINT8_MAX;
	static int32_t t53 = -270;

    t53 = (((x221/x222)|x223)>x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = INT8_MAX;
	static int32_t x226 = 65;
	int16_t x227 = 328;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t54 = 3224391;

    t54 = (((x225/x226)|x227)>x228);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	static uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 204087788U;
	int32_t t55 = 112838627;

    t55 = (((x229/x230)|x231)>x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x233 = INT8_MIN;
	volatile uint32_t x234 = 847818U;
	static uint64_t x235 = 7LLU;
	volatile uint64_t x236 = UINT64_MAX;
	int32_t t56 = 9;

    t56 = (((x233/x234)|x235)>x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x237 = 193319817458LL;
	int64_t x238 = INT64_MAX;
	volatile int16_t x239 = INT16_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t57 = -55186;

    t57 = (((x237/x238)|x239)>x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	int32_t x243 = -1;
	volatile uint8_t x244 = UINT8_MAX;

    t58 = (((x241/x242)|x243)>x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = -1;
	volatile int8_t x246 = -1;
	static volatile int16_t x247 = INT16_MIN;
	int32_t x248 = 115;
	volatile int32_t t59 = 1;

    t59 = (((x245/x246)|x247)>x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = INT16_MIN;
	uint64_t x251 = 49LLU;
	volatile int32_t t60 = -23527436;

    t60 = (((x249/x250)|x251)>x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = UINT32_MAX;
	uint16_t x255 = 6605U;

    t61 = (((x253/x254)|x255)>x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = 7681LL;
	int64_t x258 = INT64_MIN;
	static int16_t x259 = INT16_MIN;
	static int32_t x260 = INT32_MAX;
	int32_t t62 = 0;

    t62 = (((x257/x258)|x259)>x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x261 = 567U;
	static int8_t x264 = INT8_MAX;

    t63 = (((x261/x262)|x263)>x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x265 = 16538404959LLU;
	volatile uint8_t x266 = 39U;
	static int32_t x267 = -1;
	int8_t x268 = INT8_MIN;
	int32_t t64 = -3466257;

    t64 = (((x265/x266)|x267)>x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = 31106174LL;
	uint64_t x270 = 5418741LLU;
	static volatile int16_t x271 = INT16_MAX;
	uint32_t x272 = 79422U;

    t65 = (((x269/x270)|x271)>x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	uint8_t x274 = 46U;
	int8_t x275 = -5;
	int32_t x276 = INT32_MIN;
	int32_t t66 = 856;

    t66 = (((x273/x274)|x275)>x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = 4;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MAX;
	volatile int16_t x280 = INT16_MAX;
	int32_t t67 = -2;

    t67 = (((x277/x278)|x279)>x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = INT64_MIN;
	static volatile int16_t x282 = INT16_MIN;
	uint8_t x283 = 0U;
	volatile int32_t t68 = 3970426;

    t68 = (((x281/x282)|x283)>x284);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x289 = 52U;
	static int16_t x290 = -1;
	uint16_t x291 = 3U;
	uint16_t x292 = 492U;
	int32_t t69 = -42206143;

    t69 = (((x289/x290)|x291)>x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = 1690;
	volatile int64_t x294 = INT64_MIN;
	int16_t x295 = -1859;
	volatile uint32_t x296 = 2020U;
	volatile int32_t t70 = 251221;

    t70 = (((x293/x294)|x295)>x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MAX;
	volatile int64_t x298 = -1LL;
	uint64_t x299 = UINT64_MAX;
	volatile int64_t x300 = -2076432LL;
	volatile int32_t t71 = 4979687;

    t71 = (((x297/x298)|x299)>x300);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x303 = 76;
	int32_t x304 = 1062;
	int32_t t72 = -4135;

    t72 = (((x301/x302)|x303)>x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x306 = INT32_MIN;
	int8_t x307 = 53;
	volatile int32_t t73 = -3;

    t73 = (((x305/x306)|x307)>x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x309 = -1;
	int16_t x310 = INT16_MIN;
	int8_t x311 = 6;

    t74 = (((x309/x310)|x311)>x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = 7;
	static uint64_t x314 = UINT64_MAX;
	uint8_t x315 = 53U;
	int32_t t75 = 124189;

    t75 = (((x313/x314)|x315)>x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = 52456775014266LL;
	static int64_t x318 = INT64_MIN;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = -1;

    t76 = (((x317/x318)|x319)>x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x321 = INT16_MIN;
	int64_t x322 = -76063809448179839LL;
	static uint64_t x323 = 6460513LLU;
	int16_t x324 = INT16_MIN;

    t77 = (((x321/x322)|x323)>x324);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = 1596;
	uint16_t x326 = 358U;
	static int64_t x328 = -1981392559062461LL;
	int32_t t78 = -73;

    t78 = (((x325/x326)|x327)>x328);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = 13LLU;
	int8_t x330 = -1;
	int8_t x331 = INT8_MAX;
	volatile int32_t t79 = -7;

    t79 = (((x329/x330)|x331)>x332);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x333 = 19LLU;
	int32_t x334 = 107179723;
	static uint32_t x335 = 2076U;
	int64_t x336 = -5921098729815928LL;
	int32_t t80 = 0;

    t80 = (((x333/x334)|x335)>x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x337 = UINT64_MAX;
	int32_t x338 = -78;
	int16_t x339 = INT16_MIN;
	static volatile uint8_t x340 = UINT8_MAX;
	volatile int32_t t81 = -9198461;

    t81 = (((x337/x338)|x339)>x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	static volatile int32_t t82 = -5169662;

    t82 = (((x345/x346)|x347)>x348);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x349 = 2989U;
	uint64_t x350 = UINT64_MAX;
	static uint32_t x351 = 42354U;
	volatile int32_t x352 = -1;

    t83 = (((x349/x350)|x351)>x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x353 = 853233516634LLU;
	int32_t x355 = 467515298;
	volatile uint32_t x356 = 14421613U;
	static volatile int32_t t84 = 1;

    t84 = (((x353/x354)|x355)>x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x357 = 1;
	int16_t x358 = 51;
	static volatile uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MIN;
	int32_t t85 = 67;

    t85 = (((x357/x358)|x359)>x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x363 = 1175841LL;
	uint8_t x364 = 0U;
	int32_t t86 = -4380;

    t86 = (((x361/x362)|x363)>x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x365 = INT8_MAX;
	int8_t x367 = INT8_MAX;
	int64_t x368 = INT64_MIN;
	static int32_t t87 = 37953;

    t87 = (((x365/x366)|x367)>x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x369 = 27128856183467172LLU;
	static int8_t x370 = 1;
	static volatile int8_t x371 = 1;
	static volatile uint8_t x372 = 2U;
	static volatile int32_t t88 = 13110028;

    t88 = (((x369/x370)|x371)>x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x373 = INT16_MIN;
	uint64_t x374 = 2246595LLU;
	int32_t x375 = -255;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t89 = -647493517;

    t89 = (((x373/x374)|x375)>x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	int64_t x378 = -1LL;
	int32_t t90 = 949965336;

    t90 = (((x377/x378)|x379)>x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x381 = 32557597U;
	volatile uint8_t x382 = UINT8_MAX;
	int16_t x383 = 14;
	int64_t x384 = 54106922123LL;
	int32_t t91 = 39401334;

    t91 = (((x381/x382)|x383)>x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x385 = 1521726888412744LLU;
	int64_t x386 = INT64_MAX;
	uint64_t x388 = 590543754696LLU;
	volatile int32_t t92 = 2544;

    t92 = (((x385/x386)|x387)>x388);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x389 = -1;
	int32_t x390 = INT32_MAX;
	int64_t x391 = INT64_MIN;
	volatile int32_t t93 = 15242;

    t93 = (((x389/x390)|x391)>x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -21;
	uint8_t x395 = UINT8_MAX;
	uint16_t x396 = 902U;
	volatile int32_t t94 = 11735;

    t94 = (((x393/x394)|x395)>x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x398 = INT32_MAX;
	static int64_t x399 = -1LL;
	static int16_t x400 = INT16_MAX;

    t95 = (((x397/x398)|x399)>x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x401 = UINT64_MAX;
	int16_t x402 = INT16_MAX;
	static int8_t x403 = 3;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t96 = -4825600;

    t96 = (((x401/x402)|x403)>x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = 3;
	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 137U;
	static volatile int32_t t97 = -6507970;

    t97 = (((x405/x406)|x407)>x408);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x414 = INT8_MAX;
	volatile int16_t x415 = INT16_MIN;
	uint8_t x416 = UINT8_MAX;

    t98 = (((x413/x414)|x415)>x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x417 = 8;
	uint16_t x418 = 3U;
	int8_t x419 = INT8_MIN;
	uint16_t x420 = UINT16_MAX;

    t99 = (((x417/x418)|x419)>x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x421 = 0U;
	uint32_t x422 = 239U;
	volatile uint8_t x423 = 7U;
	static int8_t x424 = -3;
	int32_t t100 = -97278;

    t100 = (((x421/x422)|x423)>x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x425 = 39679U;
	uint32_t x426 = 101867U;
	uint8_t x427 = 59U;
	int16_t x428 = INT16_MAX;

    t101 = (((x425/x426)|x427)>x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = -1;
	int8_t x430 = -1;
	uint16_t x432 = 34U;
	volatile int32_t t102 = -21;

    t102 = (((x429/x430)|x431)>x432);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x433 = -1;
	uint8_t x434 = 11U;
	uint16_t x435 = UINT16_MAX;
	volatile int32_t t103 = -276242937;

    t103 = (((x433/x434)|x435)>x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x437 = 589U;
	static uint8_t x438 = 118U;
	uint16_t x439 = UINT16_MAX;
	volatile int8_t x440 = INT8_MAX;
	volatile int32_t t104 = -7521705;

    t104 = (((x437/x438)|x439)>x440);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x441 = UINT16_MAX;
	int32_t x442 = 46096717;
	static volatile uint32_t x443 = 0U;
	int16_t x444 = -1;
	volatile int32_t t105 = -201035;

    t105 = (((x441/x442)|x443)>x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x445 = -218;
	int16_t x446 = 2728;
	int8_t x447 = 1;
	int16_t x448 = INT16_MAX;

    t106 = (((x445/x446)|x447)>x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x449 = 85U;
	static volatile int64_t x450 = INT64_MIN;
	static int8_t x451 = -1;
	int32_t x452 = INT32_MAX;
	int32_t t107 = -8752495;

    t107 = (((x449/x450)|x451)>x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x453 = 849U;
	uint8_t x454 = 20U;
	volatile uint64_t x455 = 468237931470339746LLU;
	int16_t x456 = -12;
	volatile int32_t t108 = -14568528;

    t108 = (((x453/x454)|x455)>x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	volatile int32_t x458 = -57;
	volatile int64_t x459 = -1LL;
	static uint32_t x460 = 889U;
	volatile int32_t t109 = -224;

    t109 = (((x457/x458)|x459)>x460);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x461 = -1;
	int8_t x462 = INT8_MAX;
	static volatile int32_t x463 = INT32_MAX;
	volatile uint64_t x464 = UINT64_MAX;
	volatile int32_t t110 = -20;

    t110 = (((x461/x462)|x463)>x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x465 = -23351553;
	int32_t x466 = INT32_MIN;
	static int64_t x467 = 27194442LL;
	volatile int8_t x468 = -4;

    t111 = (((x465/x466)|x467)>x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = -1;
	int8_t x471 = -9;
	int64_t x472 = -1LL;
	int32_t t112 = -24;

    t112 = (((x469/x470)|x471)>x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x473 = -1;
	static uint32_t x474 = 465388U;
	static int32_t x475 = 249;
	volatile int8_t x476 = 1;
	static volatile int32_t t113 = -129;

    t113 = (((x473/x474)|x475)>x476);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x478 = -10;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MAX;

    t114 = (((x477/x478)|x479)>x480);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x482 = 43773LLU;
	static uint64_t x483 = 8510204117717994834LLU;
	uint64_t x484 = 1986439900293433LLU;
	static int32_t t115 = 213;

    t115 = (((x481/x482)|x483)>x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x490 = UINT32_MAX;
	static int16_t x491 = INT16_MAX;
	int32_t t116 = 162767;

    t116 = (((x489/x490)|x491)>x492);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x493 = -1;
	static int32_t x494 = -1;
	int64_t x495 = -1LL;
	static volatile int16_t x496 = -33;
	volatile int32_t t117 = 288691151;

    t117 = (((x493/x494)|x495)>x496);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x500 = -606668274533LL;

    t118 = (((x497/x498)|x499)>x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = 1;
	volatile int8_t x502 = INT8_MAX;
	int64_t x504 = INT64_MIN;
	volatile int32_t t119 = 3916734;

    t119 = (((x501/x502)|x503)>x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x505 = -1;
	static int32_t x506 = 16246900;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = 144;
	int32_t t120 = 13;

    t120 = (((x505/x506)|x507)>x508);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x509 = -12;
	uint16_t x510 = 7107U;
	static int8_t x512 = INT8_MIN;
	volatile int32_t t121 = -3;

    t121 = (((x509/x510)|x511)>x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = 972584727577897640LL;
	int16_t x515 = INT16_MAX;
	volatile uint16_t x516 = 13981U;
	volatile int32_t t122 = -62654278;

    t122 = (((x513/x514)|x515)>x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x517 = INT64_MIN;
	volatile int16_t x519 = 10;
	int64_t x520 = 13LL;
	static volatile int32_t t123 = -12802;

    t123 = (((x517/x518)|x519)>x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x521 = INT32_MAX;
	static int8_t x522 = 57;
	int16_t x523 = INT16_MIN;
	int32_t x524 = INT32_MAX;
	static int32_t t124 = -15;

    t124 = (((x521/x522)|x523)>x524);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x525 = 16200U;
	int8_t x526 = INT8_MAX;
	uint8_t x527 = 2U;
	volatile int32_t t125 = -45;

    t125 = (((x525/x526)|x527)>x528);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = 211417LL;
	static uint64_t x530 = 7137043027184609076LLU;
	volatile uint8_t x531 = UINT8_MAX;
	uint32_t x532 = 179959309U;
	int32_t t126 = -1;

    t126 = (((x529/x530)|x531)>x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x533 = -7;
	int32_t x535 = INT32_MIN;
	int64_t x536 = 15499LL;

    t127 = (((x533/x534)|x535)>x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x537 = INT32_MIN;
	static int8_t x538 = INT8_MAX;
	int8_t x539 = INT8_MIN;
	static uint16_t x540 = 1469U;

    t128 = (((x537/x538)|x539)>x540);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x541 = INT8_MAX;
	int64_t x542 = -1191LL;
	volatile int64_t x543 = 3025704477LL;
	uint8_t x544 = UINT8_MAX;
	int32_t t129 = 1517654;

    t129 = (((x541/x542)|x543)>x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x545 = -1;
	volatile int64_t x546 = INT64_MIN;
	volatile int32_t x547 = INT32_MIN;
	int32_t x548 = INT32_MIN;
	int32_t t130 = 0;

    t130 = (((x545/x546)|x547)>x548);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x549 = UINT8_MAX;
	volatile uint64_t x550 = UINT64_MAX;
	volatile uint64_t x552 = 2638911924554874LLU;
	volatile int32_t t131 = -3;

    t131 = (((x549/x550)|x551)>x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x553 = 2LLU;
	static int64_t x554 = INT64_MIN;
	uint32_t x555 = 186353U;
	int32_t t132 = 6908;

    t132 = (((x553/x554)|x555)>x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x557 = 59;
	static int64_t x558 = 245LL;
	int8_t x559 = 62;
	volatile int16_t x560 = 117;
	volatile int32_t t133 = -1;

    t133 = (((x557/x558)|x559)>x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = 32395728LL;
	static uint32_t x562 = 513055U;
	int8_t x563 = INT8_MAX;

    t134 = (((x561/x562)|x563)>x564);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x565 = -1;
	int8_t x566 = 5;
	int16_t x567 = 2;
	int32_t x568 = INT32_MAX;
	int32_t t135 = -278166403;

    t135 = (((x565/x566)|x567)>x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x569 = INT16_MIN;
	int16_t x570 = INT16_MIN;
	uint16_t x571 = 943U;
	int8_t x572 = 13;

    t136 = (((x569/x570)|x571)>x572);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x577 = -1LL;
	uint8_t x578 = 1U;
	int32_t x579 = -268;
	static int16_t x580 = -1;

    t137 = (((x577/x578)|x579)>x580);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x581 = 243;
	static int64_t x583 = 7201647633947109LL;
	volatile uint16_t x584 = 1702U;
	static int32_t t138 = -3510937;

    t138 = (((x581/x582)|x583)>x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = INT32_MAX;
	static uint32_t x590 = UINT32_MAX;
	int64_t x591 = INT64_MIN;
	static volatile int32_t t139 = -78;

    t139 = (((x589/x590)|x591)>x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x593 = 19;
	int16_t x594 = -4;
	uint64_t x595 = UINT64_MAX;
	volatile int32_t x596 = INT32_MIN;

    t140 = (((x593/x594)|x595)>x596);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x599 = INT32_MIN;
	volatile int32_t t141 = -817852819;

    t141 = (((x597/x598)|x599)>x600);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x601 = -1;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -1;
	volatile int32_t t142 = -180746171;

    t142 = (((x601/x602)|x603)>x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x605 = -1;
	int64_t x606 = INT64_MAX;
	int64_t x608 = INT64_MAX;
	volatile int32_t t143 = -435;

    t143 = (((x605/x606)|x607)>x608);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x609 = 430U;
	int64_t x610 = 11941876LL;
	static volatile int8_t x612 = -1;

    t144 = (((x609/x610)|x611)>x612);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x614 = -3;
	volatile int16_t x615 = INT16_MAX;
	uint8_t x616 = 71U;

    t145 = (((x613/x614)|x615)>x616);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x618 = UINT8_MAX;
	int16_t x619 = INT16_MIN;
	static uint64_t x620 = 0LLU;

    t146 = (((x617/x618)|x619)>x620);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MAX;
	int32_t t147 = -1;

    t147 = (((x621/x622)|x623)>x624);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint16_t x625 = 3U;
	int32_t x626 = INT32_MIN;
	static int8_t x627 = -3;
	volatile int32_t t148 = 215477726;

    t148 = (((x625/x626)|x627)>x628);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x629 = 50120604056927LLU;
	int16_t x630 = -1;
	int64_t x631 = -1LL;
	static uint16_t x632 = 27745U;
	volatile int32_t t149 = -137512457;

    t149 = (((x629/x630)|x631)>x632);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x634 = INT32_MAX;
	int32_t x635 = -16772297;
	uint16_t x636 = 4814U;
	volatile int32_t t150 = -12732621;

    t150 = (((x633/x634)|x635)>x636);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x638 = INT32_MAX;
	int16_t x639 = INT16_MIN;
	int64_t x640 = INT64_MIN;
	volatile int32_t t151 = 209983;

    t151 = (((x637/x638)|x639)>x640);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x642 = -1LL;
	int8_t x643 = -14;
	uint8_t x644 = 66U;

    t152 = (((x641/x642)|x643)>x644);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x649 = INT32_MIN;
	uint8_t x650 = 120U;
	int8_t x651 = 3;
	int16_t x652 = 1;
	volatile int32_t t153 = -643429641;

    t153 = (((x649/x650)|x651)>x652);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x654 = -1LL;
	int32_t x655 = 1818456;
	int32_t x656 = INT32_MIN;

    t154 = (((x653/x654)|x655)>x656);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x657 = 538818608837056LLU;
	int64_t x658 = INT64_MAX;
	int32_t t155 = 98984638;

    t155 = (((x657/x658)|x659)>x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x661 = 0;
	int16_t x662 = 2315;
	volatile int32_t t156 = -1944634;

    t156 = (((x661/x662)|x663)>x664);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x666 = INT16_MIN;
	int16_t x667 = INT16_MAX;
	static volatile int16_t x668 = INT16_MAX;
	int32_t t157 = -62767;

    t157 = (((x665/x666)|x667)>x668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x669 = 37;
	int32_t x672 = INT32_MIN;
	int32_t t158 = -332842660;

    t158 = (((x669/x670)|x671)>x672);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x673 = -1866661;
	int32_t x674 = -1;
	static volatile int16_t x675 = -1;
	volatile int8_t x676 = INT8_MIN;

    t159 = (((x673/x674)|x675)>x676);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x677 = 2U;
	int64_t x678 = -1LL;
	int16_t x680 = INT16_MIN;
	static volatile int32_t t160 = -64048723;

    t160 = (((x677/x678)|x679)>x680);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x681 = INT32_MIN;
	static int32_t x683 = 477327;
	int16_t x684 = INT16_MAX;
	int32_t t161 = -46992;

    t161 = (((x681/x682)|x683)>x684);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x686 = 4U;
	int32_t x688 = -1;
	int32_t t162 = -9;

    t162 = (((x685/x686)|x687)>x688);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x693 = 3266U;
	uint32_t x694 = 2853539U;
	static volatile int16_t x695 = 39;
	int32_t x696 = 347407;
	static volatile int32_t t163 = -248587621;

    t163 = (((x693/x694)|x695)>x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x697 = -1;
	uint16_t x700 = 12U;

    t164 = (((x697/x698)|x699)>x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x701 = -1;
	static volatile int16_t x702 = 7657;
	int8_t x703 = -5;
	volatile int32_t t165 = -10;

    t165 = (((x701/x702)|x703)>x704);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x705 = -5102;
	static int64_t x706 = INT64_MIN;
	int64_t x707 = -1LL;
	int32_t x708 = -1975061;
	volatile int32_t t166 = 218;

    t166 = (((x705/x706)|x707)>x708);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x709 = 3743301U;
	volatile int32_t x710 = INT32_MIN;
	int16_t x711 = -1;
	uint8_t x712 = 1U;
	int32_t t167 = -427;

    t167 = (((x709/x710)|x711)>x712);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x713 = INT16_MAX;
	static int8_t x714 = INT8_MAX;
	uint8_t x715 = 20U;
	uint16_t x716 = 10U;
	int32_t t168 = -1067951;

    t168 = (((x713/x714)|x715)>x716);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x717 = 0;
	int64_t x718 = -1LL;
	static int64_t x720 = 312294125LL;
	volatile int32_t t169 = 6899596;

    t169 = (((x717/x718)|x719)>x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x721 = INT32_MIN;
	static int16_t x723 = INT16_MIN;
	int32_t x724 = INT32_MIN;
	static int32_t t170 = -2;

    t170 = (((x721/x722)|x723)>x724);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x725 = INT8_MIN;
	int8_t x727 = -1;
	static volatile int16_t x728 = INT16_MAX;
	int32_t t171 = 0;

    t171 = (((x725/x726)|x727)>x728);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x729 = -1;
	uint16_t x730 = 4U;
	static int32_t x732 = 641600;
	volatile int32_t t172 = 45;

    t172 = (((x729/x730)|x731)>x732);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x733 = 1U;
	volatile uint64_t x734 = UINT64_MAX;
	int8_t x735 = INT8_MIN;
	int32_t t173 = -610029971;

    t173 = (((x733/x734)|x735)>x736);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x737 = 32877320749LLU;
	int8_t x739 = INT8_MIN;
	volatile int32_t t174 = -59074;

    t174 = (((x737/x738)|x739)>x740);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x741 = INT32_MIN;
	volatile int16_t x742 = INT16_MAX;
	int32_t t175 = 56;

    t175 = (((x741/x742)|x743)>x744);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x746 = INT8_MAX;
	uint64_t x747 = 3268LLU;
	int8_t x748 = INT8_MIN;
	volatile int32_t t176 = 1226;

    t176 = (((x745/x746)|x747)>x748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	uint64_t x750 = 9318240629111964LLU;
	volatile uint16_t x752 = 8732U;

    t177 = (((x749/x750)|x751)>x752);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x753 = 53480LL;
	static uint64_t x754 = UINT64_MAX;
	uint32_t x756 = UINT32_MAX;
	int32_t t178 = -104;

    t178 = (((x753/x754)|x755)>x756);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x758 = INT16_MIN;
	uint64_t x759 = UINT64_MAX;
	int64_t x760 = -66LL;
	int32_t t179 = 61095209;

    t179 = (((x757/x758)|x759)>x760);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x761 = -852728520858501LL;
	int8_t x762 = 14;
	uint8_t x763 = 15U;
	int16_t x764 = -1;
	static volatile int32_t t180 = 844;

    t180 = (((x761/x762)|x763)>x764);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = INT32_MIN;
	volatile int64_t x766 = -1LL;
	uint8_t x767 = UINT8_MAX;
	volatile int32_t x768 = 2;
	volatile int32_t t181 = 683875;

    t181 = (((x765/x766)|x767)>x768);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x769 = INT64_MIN;
	uint8_t x770 = UINT8_MAX;
	int64_t x771 = 1388854059LL;
	static int8_t x772 = INT8_MIN;
	volatile int32_t t182 = -5931137;

    t182 = (((x769/x770)|x771)>x772);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x773 = UINT32_MAX;
	static uint16_t x774 = 32201U;
	static uint64_t x775 = UINT64_MAX;
	int32_t x776 = -239;
	int32_t t183 = 29572486;

    t183 = (((x773/x774)|x775)>x776);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x777 = 9U;
	int16_t x778 = INT16_MIN;
	volatile int16_t x780 = INT16_MIN;
	volatile int32_t t184 = 0;

    t184 = (((x777/x778)|x779)>x780);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x781 = 1921;
	int32_t x782 = -2;
	int32_t x783 = INT32_MIN;
	int32_t t185 = 475;

    t185 = (((x781/x782)|x783)>x784);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x786 = -5105;
	int16_t x787 = INT16_MAX;
	static volatile int32_t t186 = -12490;

    t186 = (((x785/x786)|x787)>x788);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x789 = -4;
	static int16_t x790 = INT16_MIN;
	uint8_t x791 = 37U;
	uint8_t x792 = 1U;
	static volatile int32_t t187 = -1;

    t187 = (((x789/x790)|x791)>x792);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x794 = 9296;
	int64_t x796 = INT64_MIN;
	int32_t t188 = -38379796;

    t188 = (((x793/x794)|x795)>x796);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x801 = -1;
	static uint64_t x802 = 22104545231918410LLU;
	int8_t x803 = INT8_MIN;
	volatile int32_t t189 = 1;

    t189 = (((x801/x802)|x803)>x804);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x805 = -1;
	int8_t x807 = -1;
	volatile int32_t t190 = 1;

    t190 = (((x805/x806)|x807)>x808);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x810 = 753U;
	uint16_t x811 = 38U;
	uint8_t x812 = UINT8_MAX;

    t191 = (((x809/x810)|x811)>x812);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x813 = INT64_MIN;
	int32_t x815 = INT32_MIN;
	volatile int32_t t192 = -1115463;

    t192 = (((x813/x814)|x815)>x816);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x818 = 9128U;
	static int64_t x819 = -1LL;
	volatile uint32_t x820 = 10U;
	int32_t t193 = 0;

    t193 = (((x817/x818)|x819)>x820);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x822 = INT8_MIN;
	uint64_t x823 = UINT64_MAX;
	volatile int16_t x824 = -1;
	int32_t t194 = -13099;

    t194 = (((x821/x822)|x823)>x824);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint8_t x826 = 119U;
	int16_t x828 = INT16_MAX;

    t195 = (((x825/x826)|x827)>x828);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x829 = 66U;
	uint32_t x830 = 1053U;
	uint8_t x832 = 1U;
	volatile int32_t t196 = -16;

    t196 = (((x829/x830)|x831)>x832);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = -1;
	static uint32_t x835 = 11991U;
	int32_t t197 = 0;

    t197 = (((x833/x834)|x835)>x836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x837 = -1;
	static volatile int8_t x839 = 2;
	static volatile int32_t t198 = 11;

    t198 = (((x837/x838)|x839)>x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x841 = 12612803U;
	uint64_t x842 = 126LLU;
	int64_t x843 = -1LL;
	int64_t x844 = INT64_MIN;
	int32_t t199 = 2;

    t199 = (((x841/x842)|x843)>x844);

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

