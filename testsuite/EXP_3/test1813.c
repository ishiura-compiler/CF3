
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

volatile int32_t t0 = 23;
volatile int8_t x8 = INT8_MIN;
static int32_t x22 = INT32_MIN;
int32_t t4 = 0;
int32_t x29 = 4;
static volatile int8_t x31 = INT8_MIN;
volatile int16_t x39 = INT16_MIN;
int16_t x46 = INT16_MIN;
uint8_t x49 = UINT8_MAX;
uint32_t x51 = 47939U;
volatile int8_t x53 = 31;
volatile uint32_t x58 = 526712976U;
static volatile uint16_t x61 = 458U;
uint8_t x67 = 2U;
uint32_t x70 = 64U;
int32_t t16 = -725967822;
static int32_t t17 = 0;
int32_t t18 = 30011;
volatile int8_t x86 = INT8_MIN;
volatile int32_t t19 = 27;
int8_t x98 = -35;
uint64_t x100 = 63654LLU;
int16_t x102 = INT16_MAX;
volatile int16_t x108 = INT16_MAX;
static int16_t x116 = -1;
volatile int8_t x117 = 0;
static int16_t x122 = INT16_MIN;
int8_t x126 = INT8_MIN;
int32_t x134 = INT32_MIN;
int32_t t31 = -984;
uint16_t x154 = UINT16_MAX;
int64_t x158 = INT64_MAX;
static int16_t x163 = 0;
int16_t x164 = -1;
volatile int32_t t39 = 152738;
int64_t x175 = -1597225LL;
uint64_t x179 = 8120LLU;
volatile int64_t x180 = INT64_MAX;
int32_t t41 = -63062492;
static int64_t x182 = INT64_MAX;
int32_t t42 = 769;
uint32_t x185 = UINT32_MAX;
volatile int64_t x196 = -15400230LL;
static int8_t x198 = INT8_MIN;
volatile int32_t t46 = 34374;
uint8_t x204 = UINT8_MAX;
volatile int32_t t47 = -468434693;
uint64_t x205 = 2570113971LLU;
volatile int32_t t49 = 14324;
int64_t x215 = INT64_MIN;
int32_t x222 = 1723;
volatile int32_t t52 = 746;
int32_t t53 = -787;
int32_t x230 = 850;
volatile int16_t x239 = INT16_MIN;
int64_t x241 = 2852084066955LL;
int32_t x244 = INT32_MIN;
static int32_t x246 = -1;
int64_t x247 = INT64_MAX;
static int16_t x250 = 1;
static int8_t x253 = -1;
static int32_t t60 = 1839992;
int8_t x258 = INT8_MIN;
int16_t x259 = INT16_MAX;
int64_t x263 = INT64_MIN;
int64_t x279 = INT64_MAX;
volatile int32_t t68 = -615;
uint64_t x290 = UINT64_MAX;
uint8_t x296 = 12U;
volatile uint64_t x298 = 5902990429787LLU;
int32_t t71 = 2402725;
int8_t x303 = -1;
int8_t x307 = INT8_MIN;
int16_t x308 = -1;
int8_t x311 = -1;
uint32_t x314 = 6375355U;
static int8_t x320 = -31;
uint8_t x331 = 8U;
static volatile uint16_t x332 = UINT16_MAX;
volatile int32_t t79 = -3110;
volatile uint16_t x333 = 3150U;
volatile uint8_t x337 = 0U;
int32_t x339 = -1;
static volatile int16_t x342 = INT16_MIN;
static int8_t x343 = 1;
uint32_t x346 = UINT32_MAX;
uint16_t x358 = 1U;
static volatile int32_t t86 = 115276715;
int8_t x375 = 1;
int16_t x380 = INT16_MIN;
volatile uint16_t x395 = 313U;
int16_t x398 = 3;
int32_t x400 = -1;
int8_t x404 = -1;
uint16_t x410 = 18U;
int64_t x415 = -1613824LL;
volatile int32_t x417 = 79397957;
int32_t t100 = 5;
static int16_t x426 = -5228;
static int16_t x427 = INT16_MAX;
uint16_t x428 = 7510U;
volatile int32_t t102 = -12;
int32_t x429 = INT32_MIN;
static int16_t x432 = 6;
int32_t t105 = 251606;
int32_t t107 = -1588;
int64_t x450 = 30844848827589LL;
int32_t x454 = 89654;
uint32_t x456 = 108131674U;
uint64_t x460 = 10911609LLU;
volatile int32_t x466 = -1;
static int64_t x469 = INT64_MIN;
volatile uint32_t x475 = 6U;
uint8_t x476 = UINT8_MAX;
int16_t x478 = INT16_MIN;
volatile int32_t x484 = -1;
int16_t x497 = INT16_MAX;
static volatile int16_t x500 = INT16_MIN;
int64_t x507 = -406535711947695733LL;
volatile int32_t t124 = 3874028;
volatile uint16_t x521 = 31U;
volatile int16_t x524 = INT16_MIN;
static volatile int32_t t126 = -1;
uint64_t x525 = 18291475436170LLU;
static int32_t t127 = 21;
int8_t x531 = -1;
uint8_t x533 = UINT8_MAX;
static uint16_t x536 = 57U;
volatile int32_t t129 = 22;
int32_t t131 = 1776438;
int64_t x549 = 1306285LL;
int64_t x553 = 39412789625097LL;
volatile uint32_t x554 = 1588U;
static volatile int32_t t134 = 12;
static uint8_t x560 = 87U;
uint8_t x563 = 14U;
uint64_t x571 = UINT64_MAX;
static int16_t x572 = INT16_MIN;
int16_t x596 = -13836;
int16_t x598 = INT16_MIN;
uint8_t x606 = 8U;
static int16_t x610 = INT16_MIN;
static uint8_t x616 = 1U;
static uint32_t x619 = 30U;
int32_t t149 = -521667644;
int16_t x625 = INT16_MIN;
int32_t t153 = 1002;
int32_t x638 = INT32_MIN;
int32_t t154 = -316;
int32_t x642 = 2912347;
volatile int16_t x645 = INT16_MIN;
int64_t x648 = INT64_MAX;
volatile int16_t x649 = INT16_MIN;
static volatile int8_t x653 = 25;
int8_t x656 = 0;
uint8_t x662 = 26U;
uint32_t x665 = UINT32_MAX;
static volatile uint64_t x672 = 1411515983LLU;
int32_t t162 = 0;
uint16_t x682 = 1491U;
int64_t x684 = INT64_MIN;
uint16_t x691 = 1U;
volatile int32_t x692 = INT32_MIN;
int16_t x694 = -17;
uint64_t x703 = 90494380LLU;
uint32_t x704 = 100634477U;
int16_t x706 = INT16_MIN;
int64_t x710 = -1LL;
int16_t x715 = INT16_MAX;
static volatile int32_t t173 = 75;
uint16_t x732 = 23U;
int16_t x733 = INT16_MIN;
uint8_t x735 = 1U;
int32_t x740 = -1481;
int32_t t179 = 21;
int8_t x745 = 1;
int32_t x746 = -1;
static int64_t x750 = -1LL;
volatile int32_t t182 = 8;
volatile int32_t t183 = -10534;
volatile int32_t t184 = 5205135;
volatile int8_t x764 = INT8_MAX;
static volatile int16_t x773 = INT16_MIN;
int32_t x778 = INT32_MIN;
volatile uint16_t x783 = 2U;
volatile int64_t x798 = INT64_MAX;
volatile int32_t x801 = INT32_MAX;
int64_t x804 = INT64_MAX;
uint64_t x805 = UINT64_MAX;
uint32_t x811 = 7885U;
volatile int16_t x813 = INT16_MIN;
static int32_t t198 = 2010;
int32_t t199 = 3;


void f0(void) {
    	static int64_t x1 = 58799815253LL;
	volatile uint8_t x2 = 1U;
	int16_t x3 = -118;
	uint8_t x4 = 37U;

    t0 = ((x1/x2)!=(x3<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 2;
	volatile uint16_t x6 = UINT16_MAX;
	static int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 547053856;

    t1 = ((x5/x6)!=(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	volatile uint32_t x10 = 222473264U;
	int32_t x11 = -32348677;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -3;

    t2 = ((x9/x10)!=(x11<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 310LLU;
	int64_t x18 = -1LL;
	static uint8_t x19 = UINT8_MAX;
	uint32_t x20 = 2U;
	int32_t t3 = -113;

    t3 = ((x17/x18)!=(x19<=x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;

    t4 = ((x21/x22)!=(x23<=x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x30 = INT8_MIN;
	volatile int64_t x32 = -1LL;
	volatile int32_t t5 = -70132;

    t5 = ((x29/x30)!=(x31<=x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x33 = INT64_MAX;
	static int64_t x34 = -21510780468LL;
	volatile int8_t x35 = -5;
	uint16_t x36 = 0U;
	int32_t t6 = -29;

    t6 = ((x33/x34)!=(x35<=x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 46887U;
	int32_t x38 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t7 = 31812619;

    t7 = ((x37/x38)!=(x39<=x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 352668971LLU;
	static int64_t x42 = INT64_MIN;
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = UINT32_MAX;
	int32_t t8 = 379;

    t8 = ((x41/x42)!=(x43<=x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -1;
	int16_t x47 = INT16_MIN;
	static int16_t x48 = -11416;
	int32_t t9 = -16;

    t9 = ((x45/x46)!=(x47<=x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x50 = -1LL;
	int64_t x52 = 1LL;
	int32_t t10 = -30845016;

    t10 = ((x49/x50)!=(x51<=x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = 7298;
	volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t11 = 1705;

    t11 = ((x53/x54)!=(x55<=x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x57 = 49;
	uint64_t x59 = 883260312LLU;
	uint16_t x60 = 4U;
	static int32_t t12 = -18907157;

    t12 = ((x57/x58)!=(x59<=x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MAX;
	static int64_t x64 = 381548228577LL;
	int32_t t13 = -1009072335;

    t13 = ((x61/x62)!=(x63<=x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 68572550LLU;
	volatile int8_t x66 = INT8_MAX;
	volatile uint8_t x68 = 37U;
	int32_t t14 = 28206130;

    t14 = ((x65/x66)!=(x67<=x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = INT16_MIN;
	int16_t x71 = -3543;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 12766;

    t15 = ((x69/x70)!=(x71<=x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	uint32_t x75 = 363081U;
	static int16_t x76 = -1;

    t16 = ((x73/x74)!=(x75<=x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x77 = INT32_MAX;
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 443U;
	static uint32_t x80 = UINT32_MAX;

    t17 = ((x77/x78)!=(x79<=x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	int8_t x82 = -3;
	uint16_t x83 = 1712U;
	volatile int64_t x84 = 330544684366612LL;

    t18 = ((x81/x82)!=(x83<=x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x85 = 14LLU;
	int32_t x87 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;

    t19 = ((x85/x86)!=(x87<=x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = 10;
	int64_t x90 = -1LL;
	int64_t x91 = -124503216243155947LL;
	volatile uint8_t x92 = 0U;
	static int32_t t20 = 17;

    t20 = ((x89/x90)!=(x91<=x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = -7;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MIN;
	int32_t t21 = -152190816;

    t21 = ((x93/x94)!=(x95<=x96));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = UINT16_MAX;
	int16_t x99 = -1;
	static volatile int32_t t22 = 427488;

    t22 = ((x97/x98)!=(x99<=x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	int32_t x103 = INT32_MAX;
	int64_t x104 = -1LL;
	int32_t t23 = 21999419;

    t23 = ((x101/x102)!=(x103<=x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x105 = INT64_MAX;
	int64_t x106 = 425626LL;
	int16_t x107 = INT16_MIN;
	int32_t t24 = 86308293;

    t24 = ((x105/x106)!=(x107<=x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MIN;
	uint8_t x110 = 54U;
	uint32_t x111 = 30U;
	uint64_t x112 = 511455518LLU;
	int32_t t25 = 0;

    t25 = ((x109/x110)!=(x111<=x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x113 = -1;
	int64_t x114 = -1LL;
	uint16_t x115 = 86U;
	int32_t t26 = 8013;

    t26 = ((x113/x114)!=(x115<=x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x118 = 61536203327LLU;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t27 = 786770688;

    t27 = ((x117/x118)!=(x119<=x120));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x121 = UINT8_MAX;
	static uint8_t x123 = UINT8_MAX;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t28 = 1418;

    t28 = ((x121/x122)!=(x123<=x124));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 4U;
	uint64_t x127 = 74042388210329415LLU;
	uint16_t x128 = 1394U;
	volatile int32_t t29 = -4;

    t29 = ((x125/x126)!=(x127<=x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 2966U;
	int16_t x130 = INT16_MIN;
	volatile uint8_t x131 = 113U;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t30 = -1;

    t30 = ((x129/x130)!=(x131<=x132));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = UINT16_MAX;
	volatile int64_t x135 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;

    t31 = ((x133/x134)!=(x135<=x136));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = INT16_MAX;
	int32_t x142 = -322;
	int16_t x143 = -568;
	static volatile int32_t x144 = 35532735;
	static int32_t t32 = 0;

    t32 = ((x141/x142)!=(x143<=x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = INT16_MIN;
	volatile int8_t x146 = 15;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;
	volatile int32_t t33 = 48;

    t33 = ((x145/x146)!=(x147<=x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	uint16_t x152 = 519U;
	volatile int32_t t34 = 38;

    t34 = ((x149/x150)!=(x151<=x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x153 = 1268;
	int8_t x155 = 0;
	int32_t x156 = INT32_MIN;
	int32_t t35 = 10;

    t35 = ((x153/x154)!=(x155<=x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x157 = UINT64_MAX;
	int16_t x159 = INT16_MAX;
	static int16_t x160 = -1;
	static int32_t t36 = 3;

    t36 = ((x157/x158)!=(x159<=x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x161 = 35643LLU;
	uint64_t x162 = UINT64_MAX;
	int32_t t37 = -1;

    t37 = ((x161/x162)!=(x163<=x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MAX;
	int16_t x167 = 1;
	static int32_t x168 = INT32_MAX;
	static volatile int32_t t38 = -1132;

    t38 = ((x165/x166)!=(x167<=x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 9U;
	volatile int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = -153;

    t39 = ((x169/x170)!=(x171<=x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -1;
	uint32_t x174 = 293674885U;
	static volatile int32_t x176 = INT32_MAX;
	volatile int32_t t40 = -1;

    t40 = ((x173/x174)!=(x175<=x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = 775LLU;
	volatile int64_t x178 = 82216867068479080LL;

    t41 = ((x177/x178)!=(x179<=x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x181 = 1475223U;
	int64_t x183 = INT64_MIN;
	static int8_t x184 = INT8_MIN;

    t42 = ((x181/x182)!=(x183<=x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x186 = INT64_MAX;
	uint64_t x187 = 981654LLU;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t43 = 574;

    t43 = ((x185/x186)!=(x187<=x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MAX;
	int16_t x191 = INT16_MIN;
	static uint64_t x192 = 128776LLU;
	int32_t t44 = -34;

    t44 = ((x189/x190)!=(x191<=x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x193 = 4491490316352576527LL;
	int16_t x194 = INT16_MAX;
	uint16_t x195 = 157U;
	volatile int32_t t45 = 0;

    t45 = ((x193/x194)!=(x195<=x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x197 = INT8_MIN;
	static int32_t x199 = INT32_MAX;
	static int8_t x200 = -1;

    t46 = ((x197/x198)!=(x199<=x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x201 = 11U;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = -1;

    t47 = ((x201/x202)!=(x203<=x204));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x206 = UINT16_MAX;
	int64_t x207 = -69115104218LL;
	int32_t x208 = 56384;
	volatile int32_t t48 = 10185;

    t48 = ((x205/x206)!=(x207<=x208));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = -25762635;
	uint16_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MAX;

    t49 = ((x209/x210)!=(x211<=x212));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x213 = INT8_MIN;
	static int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t50 = -394;

    t50 = ((x213/x214)!=(x215<=x216));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -33;
	int64_t x218 = INT64_MAX;
	int16_t x219 = -1;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t51 = 15;

    t51 = ((x217/x218)!=(x219<=x220));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = -110LL;
	volatile uint8_t x223 = 1U;
	static int64_t x224 = 9305734441525478LL;

    t52 = ((x221/x222)!=(x223<=x224));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	uint64_t x228 = 125176390639LLU;

    t53 = ((x225/x226)!=(x227<=x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x229 = INT32_MIN;
	static int16_t x231 = INT16_MAX;
	int32_t x232 = -1;
	int32_t t54 = -6283287;

    t54 = ((x229/x230)!=(x231<=x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = 113U;
	volatile uint8_t x235 = 118U;
	int64_t x236 = INT64_MIN;
	static int32_t t55 = 3785878;

    t55 = ((x233/x234)!=(x235<=x236));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t56 = -13;

    t56 = ((x237/x238)!=(x239<=x240));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x242 = -1LL;
	int8_t x243 = -5;
	volatile int32_t t57 = 4018;

    t57 = ((x241/x242)!=(x243<=x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -1;
	int32_t x248 = 1;
	int32_t t58 = 1626408;

    t58 = ((x245/x246)!=(x247<=x248));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x249 = INT64_MIN;
	int32_t x251 = 13404;
	int64_t x252 = INT64_MIN;
	volatile int32_t t59 = -1;

    t59 = ((x249/x250)!=(x251<=x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x254 = INT32_MAX;
	int16_t x255 = -1;
	int16_t x256 = -1;

    t60 = ((x253/x254)!=(x255<=x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = -1;
	static int64_t x260 = INT64_MIN;
	static int32_t t61 = 423;

    t61 = ((x257/x258)!=(x259<=x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x261 = -1LL;
	int8_t x262 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t62 = 74027;

    t62 = ((x261/x262)!=(x263<=x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = 2399;
	uint64_t x267 = 1637194LLU;
	uint8_t x268 = 0U;
	int32_t t63 = 50918;

    t63 = ((x265/x266)!=(x267<=x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x269 = -20;
	static uint64_t x270 = 9909879LLU;
	volatile int64_t x271 = INT64_MIN;
	uint64_t x272 = 3087260714684678LLU;
	volatile int32_t t64 = -1877734;

    t64 = ((x269/x270)!=(x271<=x272));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x273 = 3U;
	static int64_t x274 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;
	int8_t x276 = -1;
	int32_t t65 = -236;

    t65 = ((x273/x274)!=(x275<=x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	int32_t x280 = -377;
	int32_t t66 = -78602936;

    t66 = ((x277/x278)!=(x279<=x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = -1;
	uint64_t x282 = 329052980417LLU;
	int16_t x283 = 0;
	uint64_t x284 = UINT64_MAX;
	static int32_t t67 = -445112;

    t67 = ((x281/x282)!=(x283<=x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = 704LL;
	volatile uint16_t x286 = UINT16_MAX;
	int16_t x287 = INT16_MAX;
	uint32_t x288 = 1U;

    t68 = ((x285/x286)!=(x287<=x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x289 = INT8_MIN;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = -12899296508271LL;
	volatile int32_t t69 = -822;

    t69 = ((x289/x290)!=(x291<=x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x293 = 1002U;
	int8_t x294 = 15;
	uint32_t x295 = 5U;
	volatile int32_t t70 = -2;

    t70 = ((x293/x294)!=(x295<=x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x297 = -1;
	int16_t x299 = INT16_MAX;
	uint8_t x300 = 8U;

    t71 = ((x297/x298)!=(x299<=x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = -1;
	int32_t x302 = -1;
	static int16_t x304 = INT16_MIN;
	volatile int32_t t72 = -213339210;

    t72 = ((x301/x302)!=(x303<=x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x305 = INT64_MAX;
	int8_t x306 = -1;
	int32_t t73 = 6;

    t73 = ((x305/x306)!=(x307<=x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x309 = -48566LL;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = 0U;
	volatile int32_t t74 = 94023047;

    t74 = ((x309/x310)!=(x311<=x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x313 = UINT16_MAX;
	int32_t x315 = -52421;
	int16_t x316 = INT16_MAX;
	volatile int32_t t75 = 37008;

    t75 = ((x313/x314)!=(x315<=x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = 39;
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = -1;
	volatile int32_t t76 = -1;

    t76 = ((x317/x318)!=(x319<=x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x321 = -1;
	static int64_t x322 = INT64_MIN;
	int8_t x323 = INT8_MIN;
	static uint16_t x324 = UINT16_MAX;
	volatile int32_t t77 = -856;

    t77 = ((x321/x322)!=(x323<=x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x325 = 125U;
	volatile int16_t x326 = INT16_MAX;
	volatile int64_t x327 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;
	int32_t t78 = -800557748;

    t78 = ((x325/x326)!=(x327<=x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x329 = 3U;
	int64_t x330 = 4900129LL;

    t79 = ((x329/x330)!=(x331<=x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x334 = -50275130;
	uint64_t x335 = 36LLU;
	int32_t x336 = INT32_MAX;
	volatile int32_t t80 = -140189;

    t80 = ((x333/x334)!=(x335<=x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x338 = 3444U;
	static volatile int16_t x340 = -1;
	int32_t t81 = 0;

    t81 = ((x337/x338)!=(x339<=x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x341 = 478316U;
	int64_t x344 = -1LL;
	volatile int32_t t82 = 366;

    t82 = ((x341/x342)!=(x343<=x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = -1;
	int16_t x347 = 137;
	uint8_t x348 = 51U;
	volatile int32_t t83 = 613986706;

    t83 = ((x345/x346)!=(x347<=x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = INT64_MIN;
	volatile int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	uint64_t x352 = 950979417083306995LLU;
	volatile int32_t t84 = 220;

    t84 = ((x349/x350)!=(x351<=x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	uint16_t x355 = 935U;
	uint64_t x356 = 16850911493LLU;
	int32_t t85 = 492343;

    t85 = ((x353/x354)!=(x355<=x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	static int64_t x360 = -2691264906829LL;

    t86 = ((x357/x358)!=(x359<=x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	uint32_t x367 = 3U;
	static int16_t x368 = INT16_MAX;
	volatile int32_t t87 = 92453676;

    t87 = ((x365/x366)!=(x367<=x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x369 = -1LL;
	static volatile int32_t x370 = INT32_MIN;
	static uint16_t x371 = 470U;
	static int64_t x372 = -1013LL;
	int32_t t88 = 548969;

    t88 = ((x369/x370)!=(x371<=x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 2U;
	uint32_t x374 = 287514685U;
	int64_t x376 = -1LL;
	volatile int32_t t89 = 8;

    t89 = ((x373/x374)!=(x375<=x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x377 = 0U;
	int8_t x378 = INT8_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	volatile int32_t t90 = -5940723;

    t90 = ((x377/x378)!=(x379<=x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = -1;
	int64_t x382 = 39728382311910888LL;
	static uint8_t x383 = 0U;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t91 = -12181;

    t91 = ((x381/x382)!=(x383<=x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = 100049091029702410LLU;
	volatile int8_t x388 = 25;
	volatile int32_t t92 = -13223;

    t92 = ((x385/x386)!=(x387<=x388));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x389 = 0;
	static int32_t x390 = -1;
	static int16_t x391 = INT16_MAX;
	static int32_t x392 = -1;
	volatile int32_t t93 = 268500193;

    t93 = ((x389/x390)!=(x391<=x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x393 = 21LLU;
	uint8_t x394 = 17U;
	uint64_t x396 = UINT64_MAX;
	static int32_t t94 = -1;

    t94 = ((x393/x394)!=(x395<=x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	int32_t t95 = 5;

    t95 = ((x397/x398)!=(x399<=x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x401 = 42U;
	int32_t x402 = INT32_MAX;
	volatile uint8_t x403 = 24U;
	volatile int32_t t96 = 10;

    t96 = ((x401/x402)!=(x403<=x404));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x405 = 223460U;
	int16_t x406 = INT16_MIN;
	int32_t x407 = 152;
	uint8_t x408 = 1U;
	volatile int32_t t97 = -234260057;

    t97 = ((x405/x406)!=(x407<=x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x409 = -1LL;
	int64_t x411 = 13155254636270676LL;
	static volatile uint64_t x412 = 5566339891910LLU;
	int32_t t98 = 1;

    t98 = ((x409/x410)!=(x411<=x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x413 = 20986LLU;
	int32_t x414 = INT32_MAX;
	static int8_t x416 = INT8_MIN;
	int32_t t99 = -13293805;

    t99 = ((x413/x414)!=(x415<=x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x418 = -14366566169804836LL;
	uint64_t x419 = 50342026454LLU;
	int16_t x420 = INT16_MIN;

    t100 = ((x417/x418)!=(x419<=x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x421 = -1;
	volatile int64_t x422 = INT64_MIN;
	uint32_t x423 = 15030244U;
	uint64_t x424 = UINT64_MAX;
	int32_t t101 = 3280;

    t101 = ((x421/x422)!=(x423<=x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x425 = 59149625LLU;

    t102 = ((x425/x426)!=(x427<=x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x430 = INT16_MAX;
	uint8_t x431 = 13U;
	volatile int32_t t103 = -5029;

    t103 = ((x429/x430)!=(x431<=x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = -1;
	int8_t x434 = -1;
	uint64_t x435 = 3032262230408LLU;
	int16_t x436 = -1;
	volatile int32_t t104 = 3;

    t104 = ((x433/x434)!=(x435<=x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint32_t x438 = 7U;
	static int16_t x439 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;

    t105 = ((x437/x438)!=(x439<=x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x441 = -556LL;
	static volatile int64_t x442 = -41LL;
	static int8_t x443 = INT8_MIN;
	int32_t x444 = 967;
	int32_t t106 = 960;

    t106 = ((x441/x442)!=(x443<=x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x445 = 2;
	static volatile int8_t x446 = INT8_MAX;
	volatile int64_t x447 = 1180692239722464738LL;
	int8_t x448 = INT8_MAX;

    t107 = ((x445/x446)!=(x447<=x448));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = INT64_MIN;
	uint32_t x451 = UINT32_MAX;
	static uint8_t x452 = 4U;
	static volatile int32_t t108 = -102991;

    t108 = ((x449/x450)!=(x451<=x452));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x453 = -490;
	int16_t x455 = INT16_MIN;
	volatile int32_t t109 = 233;

    t109 = ((x453/x454)!=(x455<=x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = 7;
	volatile int16_t x458 = 1;
	uint32_t x459 = 17701U;
	static int32_t t110 = 534;

    t110 = ((x457/x458)!=(x459<=x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = INT64_MIN;
	static int16_t x462 = -13326;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 49000U;
	volatile int32_t t111 = -265663;

    t111 = ((x461/x462)!=(x463<=x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x467 = -59;
	int32_t x468 = INT32_MIN;
	volatile int32_t t112 = 237607342;

    t112 = ((x465/x466)!=(x467<=x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x470 = INT64_MAX;
	int32_t x471 = INT32_MAX;
	volatile uint8_t x472 = 8U;
	int32_t t113 = -60784;

    t113 = ((x469/x470)!=(x471<=x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = INT16_MIN;
	static int32_t x474 = -2080;
	static int32_t t114 = -399102194;

    t114 = ((x473/x474)!=(x475<=x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = INT32_MIN;
	int8_t x479 = -1;
	volatile int16_t x480 = 2;
	static volatile int32_t t115 = -139699215;

    t115 = ((x477/x478)!=(x479<=x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x481 = 6875U;
	static volatile int64_t x482 = INT64_MIN;
	int16_t x483 = -1;
	static volatile int32_t t116 = 34339056;

    t116 = ((x481/x482)!=(x483<=x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x485 = INT8_MAX;
	int16_t x486 = -1;
	uint64_t x487 = 4943873085937LLU;
	static uint64_t x488 = UINT64_MAX;
	volatile int32_t t117 = -3137;

    t117 = ((x485/x486)!=(x487<=x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x489 = 5U;
	int8_t x490 = INT8_MIN;
	uint16_t x491 = 5U;
	int32_t x492 = INT32_MIN;
	int32_t t118 = -221013306;

    t118 = ((x489/x490)!=(x491<=x492));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = 0;
	static uint32_t x494 = UINT32_MAX;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = INT8_MIN;
	volatile int32_t t119 = 375613522;

    t119 = ((x493/x494)!=(x495<=x496));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x498 = -1;
	volatile int8_t x499 = INT8_MAX;
	volatile int32_t t120 = 1;

    t120 = ((x497/x498)!=(x499<=x500));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x501 = INT16_MIN;
	static int16_t x502 = INT16_MAX;
	volatile int16_t x503 = -1;
	static int32_t x504 = -1;
	int32_t t121 = 96;

    t121 = ((x501/x502)!=(x503<=x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = 2095;
	uint32_t x506 = 2696421U;
	int32_t x508 = 255;
	volatile int32_t t122 = -130;

    t122 = ((x505/x506)!=(x507<=x508));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x509 = 60U;
	int16_t x510 = -1;
	uint8_t x511 = 117U;
	uint16_t x512 = UINT16_MAX;
	int32_t t123 = 3628;

    t123 = ((x509/x510)!=(x511<=x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MAX;
	int16_t x515 = INT16_MAX;
	int16_t x516 = 260;

    t124 = ((x513/x514)!=(x515<=x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x517 = UINT64_MAX;
	uint32_t x518 = 5U;
	int16_t x519 = -1;
	volatile uint64_t x520 = UINT64_MAX;
	volatile int32_t t125 = -6;

    t125 = ((x517/x518)!=(x519<=x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x522 = 6U;
	volatile int8_t x523 = -1;

    t126 = ((x521/x522)!=(x523<=x524));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x526 = -1;
	int32_t x527 = INT32_MAX;
	static int64_t x528 = -1LL;

    t127 = ((x525/x526)!=(x527<=x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = INT8_MAX;
	uint8_t x530 = 51U;
	volatile int8_t x532 = -1;
	int32_t t128 = -712317;

    t128 = ((x529/x530)!=(x531<=x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x534 = INT32_MAX;
	int8_t x535 = INT8_MIN;

    t129 = ((x533/x534)!=(x535<=x536));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = INT64_MIN;
	int64_t x538 = INT64_MAX;
	int16_t x539 = -4410;
	volatile uint64_t x540 = 1523LLU;
	int32_t t130 = -9;

    t130 = ((x537/x538)!=(x539<=x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = -1;
	int32_t x542 = INT32_MAX;
	int32_t x543 = 8;
	int32_t x544 = 3;

    t131 = ((x541/x542)!=(x543<=x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x545 = 1077982U;
	int32_t x546 = -1;
	volatile uint32_t x547 = UINT32_MAX;
	uint64_t x548 = 7066548619177LLU;
	int32_t t132 = -1;

    t132 = ((x545/x546)!=(x547<=x548));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x550 = 102572;
	uint16_t x551 = 15U;
	static uint32_t x552 = 5728916U;
	static volatile int32_t t133 = -3;

    t133 = ((x549/x550)!=(x551<=x552));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x555 = INT16_MIN;
	uint32_t x556 = UINT32_MAX;

    t134 = ((x553/x554)!=(x555<=x556));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = INT16_MAX;
	uint8_t x558 = 6U;
	volatile int16_t x559 = INT16_MAX;
	static volatile int32_t t135 = -3723159;

    t135 = ((x557/x558)!=(x559<=x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = -1;
	int32_t x562 = INT32_MIN;
	uint32_t x564 = 260485128U;
	volatile int32_t t136 = -2428;

    t136 = ((x561/x562)!=(x563<=x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = -604;
	uint64_t x566 = 36LLU;
	int8_t x567 = 45;
	int8_t x568 = -2;
	volatile int32_t t137 = -21657;

    t137 = ((x565/x566)!=(x567<=x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x569 = 1;
	uint16_t x570 = 14161U;
	static volatile int32_t t138 = -2;

    t138 = ((x569/x570)!=(x571<=x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x573 = 36266187795742731LL;
	static volatile int16_t x574 = -1;
	uint32_t x575 = 24769463U;
	int8_t x576 = INT8_MAX;
	volatile int32_t t139 = 2589;

    t139 = ((x573/x574)!=(x575<=x576));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x577 = UINT16_MAX;
	uint16_t x578 = 19U;
	int32_t x579 = -2891919;
	volatile int32_t x580 = INT32_MIN;
	static int32_t t140 = -157108426;

    t140 = ((x577/x578)!=(x579<=x580));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x585 = 15893106805LLU;
	int32_t x586 = 13662443;
	int16_t x587 = INT16_MIN;
	uint8_t x588 = 1U;
	volatile int32_t t141 = -18863283;

    t141 = ((x585/x586)!=(x587<=x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x589 = 6000361U;
	int32_t x590 = INT32_MAX;
	static int16_t x591 = 30;
	int8_t x592 = 3;
	volatile int32_t t142 = 407373;

    t142 = ((x589/x590)!=(x591<=x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x593 = 25244290U;
	int16_t x594 = 1289;
	volatile int16_t x595 = INT16_MIN;
	static int32_t t143 = 67503834;

    t143 = ((x593/x594)!=(x595<=x596));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x597 = 2U;
	static int64_t x599 = 52705389971295LL;
	volatile int8_t x600 = -2;
	static int32_t t144 = -1916;

    t144 = ((x597/x598)!=(x599<=x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x601 = -979;
	uint32_t x602 = 114U;
	static int64_t x603 = INT64_MAX;
	volatile int8_t x604 = INT8_MIN;
	static volatile int32_t t145 = 284;

    t145 = ((x601/x602)!=(x603<=x604));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x605 = INT32_MIN;
	static uint16_t x607 = UINT16_MAX;
	int8_t x608 = INT8_MIN;
	volatile int32_t t146 = -256743;

    t146 = ((x605/x606)!=(x607<=x608));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = 0;
	static volatile uint8_t x611 = 8U;
	static volatile int8_t x612 = 2;
	volatile int32_t t147 = -17775875;

    t147 = ((x609/x610)!=(x611<=x612));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x613 = 11268930LLU;
	int16_t x614 = 1;
	int32_t x615 = 0;
	volatile int32_t t148 = 15602;

    t148 = ((x613/x614)!=(x615<=x616));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x617 = 2022444504U;
	int16_t x618 = -231;
	static int64_t x620 = -1LL;

    t149 = ((x617/x618)!=(x619<=x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x621 = -6814;
	int64_t x622 = INT64_MIN;
	volatile uint64_t x623 = 8610817016796689LLU;
	uint16_t x624 = 44U;
	volatile int32_t t150 = 41;

    t150 = ((x621/x622)!=(x623<=x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x626 = 1;
	int64_t x627 = INT64_MIN;
	uint8_t x628 = 9U;
	volatile int32_t t151 = 66511;

    t151 = ((x625/x626)!=(x627<=x628));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x629 = -1LL;
	int32_t x630 = 5476;
	int16_t x631 = -56;
	int16_t x632 = -1;
	int32_t t152 = -96214;

    t152 = ((x629/x630)!=(x631<=x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x633 = -1;
	static int64_t x634 = INT64_MIN;
	int8_t x635 = -1;
	volatile uint64_t x636 = 865874283740774LLU;

    t153 = ((x633/x634)!=(x635<=x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x637 = INT8_MAX;
	uint32_t x639 = 255U;
	static volatile int8_t x640 = 40;

    t154 = ((x637/x638)!=(x639<=x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x641 = 41;
	int8_t x643 = -1;
	uint64_t x644 = 1111469223100694220LLU;
	volatile int32_t t155 = -52817;

    t155 = ((x641/x642)!=(x643<=x644));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x646 = INT16_MIN;
	int64_t x647 = INT64_MAX;
	int32_t t156 = 144;

    t156 = ((x645/x646)!=(x647<=x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x650 = INT8_MAX;
	int8_t x651 = -1;
	static int32_t x652 = 265388026;
	volatile int32_t t157 = 1;

    t157 = ((x649/x650)!=(x651<=x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x654 = 1;
	static volatile int16_t x655 = -9;
	int32_t t158 = 98;

    t158 = ((x653/x654)!=(x655<=x656));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x657 = 21U;
	int32_t x658 = 32;
	volatile int64_t x659 = INT64_MIN;
	uint64_t x660 = 64398999851LLU;
	static int32_t t159 = -1631;

    t159 = ((x657/x658)!=(x659<=x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x661 = 0LL;
	int16_t x663 = -1;
	int8_t x664 = -6;
	int32_t t160 = -19;

    t160 = ((x661/x662)!=(x663<=x664));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x666 = -1;
	int16_t x667 = INT16_MAX;
	volatile uint8_t x668 = 85U;
	int32_t t161 = -12228;

    t161 = ((x665/x666)!=(x667<=x668));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x669 = -1;
	int32_t x670 = -1;
	int64_t x671 = -1LL;

    t162 = ((x669/x670)!=(x671<=x672));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x673 = -1LL;
	volatile int16_t x674 = INT16_MAX;
	uint8_t x675 = UINT8_MAX;
	uint32_t x676 = UINT32_MAX;
	int32_t t163 = -1006342;

    t163 = ((x673/x674)!=(x675<=x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x677 = UINT32_MAX;
	int64_t x678 = INT64_MAX;
	static volatile int64_t x679 = -233186357718559LL;
	int32_t x680 = 132826;
	volatile int32_t t164 = 867095647;

    t164 = ((x677/x678)!=(x679<=x680));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = -1;
	volatile int8_t x683 = -1;
	volatile int32_t t165 = -1030;

    t165 = ((x681/x682)!=(x683<=x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x685 = 27LLU;
	int8_t x686 = INT8_MIN;
	uint32_t x687 = 409292807U;
	int32_t x688 = -1;
	static int32_t t166 = -474588;

    t166 = ((x685/x686)!=(x687<=x688));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = INT16_MIN;
	volatile int64_t x690 = INT64_MIN;
	int32_t t167 = -14690;

    t167 = ((x689/x690)!=(x691<=x692));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x693 = INT32_MIN;
	static int8_t x695 = -2;
	static int16_t x696 = 41;
	volatile int32_t t168 = 23790;

    t168 = ((x693/x694)!=(x695<=x696));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x697 = 12951U;
	int16_t x698 = -1;
	int64_t x699 = 3362525LL;
	int8_t x700 = -1;
	int32_t t169 = -7787;

    t169 = ((x697/x698)!=(x699<=x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = INT16_MIN;
	volatile int32_t t170 = -76031668;

    t170 = ((x701/x702)!=(x703<=x704));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = INT8_MAX;
	volatile int32_t x707 = -1;
	static int16_t x708 = -11925;
	int32_t t171 = -76426;

    t171 = ((x705/x706)!=(x707<=x708));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x709 = INT8_MIN;
	volatile int64_t x711 = INT64_MIN;
	int16_t x712 = INT16_MIN;
	volatile int32_t t172 = 0;

    t172 = ((x709/x710)!=(x711<=x712));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x713 = 152U;
	volatile int16_t x714 = INT16_MIN;
	uint32_t x716 = 1166U;

    t173 = ((x713/x714)!=(x715<=x716));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x717 = INT16_MAX;
	uint8_t x718 = 4U;
	int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;
	volatile int32_t t174 = -2031965;

    t174 = ((x717/x718)!=(x719<=x720));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x721 = INT64_MIN;
	static uint64_t x722 = 445024190090239590LLU;
	int64_t x723 = -4531848549753444LL;
	int8_t x724 = INT8_MIN;
	static int32_t t175 = 21059985;

    t175 = ((x721/x722)!=(x723<=x724));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x725 = 2174500LLU;
	uint32_t x726 = 9000U;
	volatile uint8_t x727 = UINT8_MAX;
	int8_t x728 = INT8_MAX;
	volatile int32_t t176 = 172;

    t176 = ((x725/x726)!=(x727<=x728));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = INT16_MAX;
	static int32_t x730 = INT32_MAX;
	int32_t x731 = 1030506;
	int32_t t177 = -2591079;

    t177 = ((x729/x730)!=(x731<=x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x734 = 601339980243871623LLU;
	static int16_t x736 = 115;
	volatile int32_t t178 = 5757;

    t178 = ((x733/x734)!=(x735<=x736));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x737 = 1U;
	int8_t x738 = INT8_MAX;
	static volatile int16_t x739 = -984;

    t179 = ((x737/x738)!=(x739<=x740));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x741 = INT64_MAX;
	static int32_t x742 = -3322064;
	int32_t x743 = -1;
	int64_t x744 = -1LL;
	int32_t t180 = 13850;

    t180 = ((x741/x742)!=(x743<=x744));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x747 = INT16_MIN;
	volatile int64_t x748 = -1971LL;
	static int32_t t181 = 221;

    t181 = ((x745/x746)!=(x747<=x748));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x749 = -1040439645;
	int16_t x751 = INT16_MIN;
	int64_t x752 = INT64_MIN;

    t182 = ((x749/x750)!=(x751<=x752));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MAX;
	static volatile int8_t x755 = -59;
	static uint64_t x756 = UINT64_MAX;

    t183 = ((x753/x754)!=(x755<=x756));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x757 = INT32_MIN;
	uint16_t x758 = 14224U;
	int32_t x759 = INT32_MAX;
	int8_t x760 = INT8_MIN;

    t184 = ((x757/x758)!=(x759<=x760));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x761 = -108LL;
	volatile int64_t x762 = 3LL;
	volatile int32_t x763 = -7;
	static int32_t t185 = -1;

    t185 = ((x761/x762)!=(x763<=x764));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x765 = -39560;
	volatile int64_t x766 = -1LL;
	uint64_t x767 = 44LLU;
	uint16_t x768 = 2U;
	int32_t t186 = -431846722;

    t186 = ((x765/x766)!=(x767<=x768));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x774 = INT16_MIN;
	uint32_t x775 = 53U;
	volatile int32_t x776 = INT32_MAX;
	static volatile int32_t t187 = 1;

    t187 = ((x773/x774)!=(x775<=x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x777 = UINT8_MAX;
	int8_t x779 = INT8_MIN;
	int32_t x780 = -830;
	int32_t t188 = -2483403;

    t188 = ((x777/x778)!=(x779<=x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = INT16_MIN;
	static int8_t x782 = INT8_MIN;
	uint8_t x784 = UINT8_MAX;
	int32_t t189 = -1052;

    t189 = ((x781/x782)!=(x783<=x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x785 = -1;
	int64_t x786 = -1LL;
	static volatile int16_t x787 = INT16_MAX;
	int32_t x788 = 4;
	int32_t t190 = 9;

    t190 = ((x785/x786)!=(x787<=x788));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x789 = 2LLU;
	uint32_t x790 = UINT32_MAX;
	int16_t x791 = INT16_MIN;
	int32_t x792 = INT32_MIN;
	volatile int32_t t191 = -537617681;

    t191 = ((x789/x790)!=(x791<=x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = INT16_MIN;
	uint32_t x794 = 10U;
	int8_t x795 = INT8_MIN;
	static int16_t x796 = -1;
	int32_t t192 = -6884;

    t192 = ((x793/x794)!=(x795<=x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x797 = 3812381425181LLU;
	static int16_t x799 = INT16_MIN;
	uint8_t x800 = 102U;
	static volatile int32_t t193 = -109791;

    t193 = ((x797/x798)!=(x799<=x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x802 = 6;
	static uint64_t x803 = 82142047LLU;
	int32_t t194 = 39;

    t194 = ((x801/x802)!=(x803<=x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x806 = 1U;
	int64_t x807 = INT64_MAX;
	static volatile uint32_t x808 = 22U;
	static volatile int32_t t195 = 2692;

    t195 = ((x805/x806)!=(x807<=x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x809 = INT16_MIN;
	static int8_t x810 = INT8_MIN;
	static int16_t x812 = INT16_MIN;
	int32_t t196 = 3;

    t196 = ((x809/x810)!=(x811<=x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x814 = -1;
	volatile int64_t x815 = INT64_MIN;
	int64_t x816 = -1LL;
	volatile int32_t t197 = 67136629;

    t197 = ((x813/x814)!=(x815<=x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x817 = INT16_MAX;
	volatile int32_t x818 = INT32_MIN;
	uint64_t x819 = 121418450774347341LLU;
	int32_t x820 = 5;

    t198 = ((x817/x818)!=(x819<=x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x821 = INT64_MAX;
	int8_t x822 = INT8_MIN;
	int16_t x823 = INT16_MAX;
	static int32_t x824 = -1;

    t199 = ((x821/x822)!=(x823<=x824));

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

