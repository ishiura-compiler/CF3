
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

uint32_t x1 = UINT32_MAX;
volatile int8_t x4 = INT8_MIN;
int16_t x16 = -10;
int32_t x18 = INT32_MIN;
uint16_t x27 = 4824U;
volatile uint16_t x32 = 31902U;
int8_t x39 = -20;
int8_t x44 = INT8_MIN;
int8_t x47 = -1;
volatile int32_t t11 = 0;
volatile int32_t x49 = INT32_MIN;
int32_t t12 = -3931401;
int16_t x56 = -27;
volatile uint64_t x59 = 71LLU;
static int32_t x60 = INT32_MIN;
volatile int32_t x67 = INT32_MAX;
int64_t x68 = 8810188774939LL;
int32_t x76 = INT32_MIN;
int32_t t20 = 7485;
int16_t x88 = 345;
static uint8_t x93 = 24U;
int16_t x96 = 0;
int16_t x99 = INT16_MIN;
int32_t x103 = INT32_MAX;
int32_t x105 = INT32_MIN;
int32_t t26 = 166075794;
int32_t x114 = -1;
static int8_t x117 = -1;
static volatile uint8_t x131 = 2U;
uint64_t x136 = 10162770LLU;
int64_t x138 = -1LL;
static volatile uint64_t x141 = 7736287466330LLU;
volatile int32_t t35 = -489;
uint32_t x150 = 383624U;
int32_t t38 = 91178;
volatile int8_t x161 = 1;
static int64_t x164 = 8LL;
int64_t x171 = -1LL;
volatile int32_t t42 = 29772692;
volatile uint64_t x182 = UINT64_MAX;
volatile uint64_t x191 = 175725226LLU;
static int16_t x200 = -9;
static int32_t t50 = -25041196;
int8_t x206 = INT8_MIN;
static int32_t t52 = 1;
int16_t x215 = INT16_MIN;
uint8_t x222 = 2U;
uint64_t x223 = 104027456031LLU;
uint32_t x224 = 1179478419U;
volatile int16_t x229 = -1;
int32_t x232 = 1016;
static volatile int32_t t57 = 20763;
int64_t x235 = INT64_MIN;
uint8_t x236 = 1U;
int64_t x237 = -1384473397LL;
static uint8_t x239 = 0U;
int8_t x243 = INT8_MIN;
uint16_t x257 = 61U;
int32_t x258 = 20;
uint8_t x259 = UINT8_MAX;
uint32_t x265 = UINT32_MAX;
int8_t x267 = -1;
int16_t x270 = -1;
int16_t x279 = 28;
static volatile int32_t t70 = -22;
int8_t x289 = -7;
volatile int16_t x292 = 7248;
static int64_t x293 = INT64_MAX;
volatile int32_t t73 = 18;
uint16_t x298 = 25697U;
volatile int32_t x301 = -1;
int8_t x303 = -31;
static int16_t x308 = 40;
volatile int32_t t78 = 7553;
volatile int8_t x320 = INT8_MIN;
uint8_t x326 = 0U;
uint32_t x327 = 1369U;
uint32_t x328 = UINT32_MAX;
int64_t x331 = INT64_MIN;
volatile int8_t x344 = 0;
static uint64_t x345 = UINT64_MAX;
int8_t x347 = INT8_MIN;
int64_t x350 = -1LL;
int64_t x358 = INT64_MIN;
int32_t t89 = 57532;
uint16_t x363 = 3U;
static uint16_t x372 = UINT16_MAX;
int32_t t92 = 252;
uint16_t x374 = 22539U;
uint32_t x378 = UINT32_MAX;
static int32_t x388 = INT32_MIN;
int16_t x391 = 1;
volatile int32_t t97 = -1867683;
volatile int8_t x396 = 34;
int16_t x411 = INT16_MIN;
uint8_t x422 = 10U;
uint64_t x424 = UINT64_MAX;
int32_t t105 = -2029763;
volatile int32_t x430 = 1449436;
uint16_t x431 = 373U;
static volatile int32_t x433 = 11653025;
static volatile int32_t t109 = 29707;
int32_t t110 = -469902;
uint64_t x456 = 82056215215LLU;
int64_t x457 = 3LL;
static volatile int32_t t120 = -3062;
uint64_t x489 = 546701821168332LLU;
int32_t x492 = INT32_MIN;
int64_t x498 = -860603LL;
volatile uint8_t x499 = UINT8_MAX;
static volatile int8_t x500 = INT8_MIN;
uint32_t x501 = UINT32_MAX;
uint32_t x505 = 914394U;
static int64_t x509 = -1LL;
static volatile int16_t x511 = -1;
uint64_t x512 = 1599LLU;
volatile int32_t t128 = 38000;
int64_t x517 = INT64_MIN;
uint16_t x519 = UINT16_MAX;
static int32_t t129 = -17690;
volatile int32_t t130 = -536584;
static int8_t x530 = INT8_MIN;
int32_t t132 = -104871;
volatile int32_t t133 = 1450763;
volatile uint8_t x538 = UINT8_MAX;
uint8_t x546 = UINT8_MAX;
int16_t x548 = -6;
int64_t x557 = -1LL;
int16_t x560 = INT16_MIN;
uint64_t x561 = 25637LLU;
int64_t x571 = -1LL;
volatile int32_t x572 = INT32_MIN;
int16_t x574 = 0;
int64_t x575 = INT64_MIN;
int8_t x578 = INT8_MIN;
static uint8_t x582 = 3U;
int32_t t145 = 1248;
static int16_t x585 = INT16_MIN;
int8_t x588 = -1;
static int16_t x597 = INT16_MAX;
int32_t t149 = -29;
int32_t x602 = -31;
volatile int32_t x604 = 13;
volatile int32_t t151 = -22;
volatile int16_t x611 = INT16_MIN;
volatile int32_t t152 = 3484;
static int8_t x614 = INT8_MAX;
static int32_t t155 = -13433053;
volatile uint16_t x628 = 11U;
static int32_t t156 = -1;
volatile int16_t x630 = 1;
int32_t x631 = INT32_MIN;
int32_t t157 = -27086784;
volatile uint32_t x636 = UINT32_MAX;
int64_t x638 = -1129LL;
int64_t x641 = INT64_MIN;
uint32_t x642 = UINT32_MAX;
volatile int8_t x644 = -1;
volatile int32_t x650 = 2;
volatile int32_t x654 = INT32_MIN;
int16_t x658 = INT16_MIN;
uint16_t x671 = 8U;
volatile uint32_t x678 = 10U;
int32_t t169 = 7403;
volatile uint16_t x691 = 1237U;
int32_t t172 = -75622723;
uint8_t x694 = 4U;
int8_t x703 = -24;
static volatile int32_t t175 = -1461999;
uint8_t x705 = UINT8_MAX;
volatile uint8_t x715 = 10U;
volatile int16_t x716 = -1;
volatile uint32_t x722 = UINT32_MAX;
int64_t x724 = INT64_MIN;
int32_t t180 = -60852688;
uint8_t x725 = UINT8_MAX;
int16_t x731 = INT16_MAX;
volatile int32_t x732 = 72;
int32_t t182 = 7;
static int64_t x734 = INT64_MIN;
int32_t t183 = -451;
static uint64_t x738 = 1352582746887759130LLU;
uint32_t x747 = 41345787U;
int64_t x748 = 328710797LL;
volatile int32_t t186 = 1395751;
int8_t x756 = INT8_MIN;
int16_t x759 = INT16_MIN;
volatile int32_t t189 = -871;
uint8_t x766 = UINT8_MAX;
volatile uint16_t x770 = UINT16_MAX;
volatile uint32_t x771 = 10506U;
volatile int32_t x772 = 186;
static int32_t t192 = -487;
int16_t x779 = -6883;
static int32_t t195 = 2234677;
int32_t x787 = INT32_MAX;


void f0(void) {
    	uint16_t x2 = 1U;
	int64_t x3 = -93793324LL;
	volatile int32_t t0 = 1;

    t0 = ((x1>x2)^(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static uint16_t x6 = 1U;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 1907461502293342LLU;
	static volatile int32_t t1 = -12479972;

    t1 = ((x5>x6)^(x7<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 91695U;
	int64_t x10 = -1LL;
	static int64_t x11 = INT64_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 65555;

    t2 = ((x9>x10)^(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	static uint8_t x14 = 0U;
	int64_t x15 = -99921460388095LL;
	volatile int32_t t3 = 13964533;

    t3 = ((x13>x14)^(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MAX;
	volatile int32_t x19 = 14686153;
	volatile int32_t x20 = 7488;
	static volatile int32_t t4 = -323;

    t4 = ((x17>x18)^(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int16_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int64_t x24 = 7478LL;
	volatile int32_t t5 = -224781;

    t5 = ((x21>x22)^(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int16_t x26 = 1;
	static volatile uint8_t x28 = 6U;
	static volatile int32_t t6 = 1377;

    t6 = ((x25>x26)^(x27<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = 3;
	volatile int8_t x31 = INT8_MIN;
	int32_t t7 = 2806;

    t7 = ((x29>x30)^(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	int64_t x34 = -1LL;
	int32_t x35 = INT32_MIN;
	int16_t x36 = 2462;
	volatile int32_t t8 = -1;

    t8 = ((x33>x34)^(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MIN;
	static int16_t x38 = 13;
	uint64_t x40 = 31365893898LLU;
	int32_t t9 = 276015;

    t9 = ((x37>x38)^(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int64_t x42 = 6947442551515978LL;
	volatile int8_t x43 = -1;
	int32_t t10 = 0;

    t10 = ((x41>x42)^(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MIN;
	uint32_t x46 = 104029U;
	volatile uint32_t x48 = UINT32_MAX;

    t11 = ((x45>x46)^(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = -1;
	int32_t x51 = -1;
	int64_t x52 = INT64_MIN;

    t12 = ((x49>x50)^(x51<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 0;
	uint64_t x54 = 530455261621LLU;
	volatile int64_t x55 = -2389456399774750993LL;
	static volatile int32_t t13 = 6;

    t13 = ((x53>x54)^(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	static volatile int32_t t14 = 49710495;

    t14 = ((x57>x58)^(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	uint16_t x62 = UINT16_MAX;
	volatile int8_t x63 = -1;
	int8_t x64 = INT8_MIN;
	int32_t t15 = 4965;

    t15 = ((x61>x62)^(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	static volatile int32_t t16 = -32;

    t16 = ((x65>x66)^(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -1LL;
	int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	volatile int8_t x72 = -1;
	volatile int32_t t17 = 25525268;

    t17 = ((x69>x70)^(x71<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MAX;
	static uint64_t x74 = UINT64_MAX;
	volatile int16_t x75 = INT16_MAX;
	volatile int32_t t18 = 2;

    t18 = ((x73>x74)^(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = 117LLU;
	int64_t x80 = -1LL;
	volatile int32_t t19 = -1;

    t19 = ((x77>x78)^(x79<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	int64_t x82 = 997646345444636LL;
	volatile uint64_t x83 = 845140LLU;
	static volatile int32_t x84 = 6555555;

    t20 = ((x81>x82)^(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -72LL;
	uint16_t x86 = 1U;
	static volatile uint64_t x87 = 5242450085LLU;
	static int32_t t21 = -1;

    t21 = ((x85>x86)^(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -1;
	int32_t x90 = INT32_MAX;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -3302806427LL;
	volatile int32_t t22 = -492;

    t22 = ((x89>x90)^(x91<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = -1;
	static volatile int16_t x95 = 4;
	int32_t t23 = 7;

    t23 = ((x93>x94)^(x95<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MAX;
	int64_t x100 = INT64_MAX;
	volatile int32_t t24 = -123789048;

    t24 = ((x97>x98)^(x99<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int8_t x102 = 0;
	uint32_t x104 = 32002737U;
	int32_t t25 = -408;

    t25 = ((x101>x102)^(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = INT64_MAX;
	int16_t x107 = 105;
	uint32_t x108 = 117472U;

    t26 = ((x105>x106)^(x107<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	static volatile int8_t x110 = 0;
	uint32_t x111 = UINT32_MAX;
	uint32_t x112 = 3U;
	volatile int32_t t27 = 9214552;

    t27 = ((x109>x110)^(x111<=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	int8_t x116 = 3;
	int32_t t28 = 23;

    t28 = ((x113>x114)^(x115<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = -1;
	static uint32_t x119 = 4005574U;
	int64_t x120 = -1LL;
	volatile int32_t t29 = -174423;

    t29 = ((x117>x118)^(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	volatile uint16_t x122 = UINT16_MAX;
	uint32_t x123 = UINT32_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -2912963;

    t30 = ((x121>x122)^(x123<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -7547419190839609LL;
	static int8_t x126 = INT8_MIN;
	volatile int32_t x127 = -109154785;
	volatile int8_t x128 = 0;
	static int32_t t31 = -22498903;

    t31 = ((x125>x126)^(x127<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MAX;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x132 = 12364609LLU;
	volatile int32_t t32 = -1815733;

    t32 = ((x129>x130)^(x131<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	static int64_t x135 = -1LL;
	volatile int32_t t33 = -37484254;

    t33 = ((x133>x134)^(x135<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	uint16_t x139 = 1332U;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -15711;

    t34 = ((x137>x138)^(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x142 = UINT8_MAX;
	int32_t x143 = 179870913;
	volatile int16_t x144 = -202;

    t35 = ((x141>x142)^(x143<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 31U;
	uint16_t x146 = 4U;
	int32_t x147 = 685;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = -195;

    t36 = ((x145>x146)^(x147<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;
	volatile int32_t t37 = 13;

    t37 = ((x149>x150)^(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int32_t x154 = -1;
	uint8_t x155 = 0U;
	uint32_t x156 = UINT32_MAX;

    t38 = ((x153>x154)^(x155<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -18;
	int8_t x158 = 0;
	volatile uint8_t x159 = 52U;
	uint16_t x160 = 1787U;
	int32_t t39 = -3113;

    t39 = ((x157>x158)^(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x162 = 115547065518LLU;
	volatile int64_t x163 = INT64_MIN;
	int32_t t40 = 103911109;

    t40 = ((x161>x162)^(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = UINT8_MAX;
	static volatile int16_t x166 = -51;
	volatile int16_t x167 = -1;
	int32_t x168 = -682913;
	volatile int32_t t41 = 219;

    t41 = ((x165>x166)^(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 76U;
	uint32_t x170 = UINT32_MAX;
	static int64_t x172 = -1LL;

    t42 = ((x169>x170)^(x171<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = -1;
	volatile int64_t x174 = -1LL;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = -1LL;
	volatile int32_t t43 = 175976148;

    t43 = ((x173>x174)^(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x177 = 1;
	int8_t x178 = INT8_MIN;
	int64_t x179 = INT64_MIN;
	int8_t x180 = 0;
	int32_t t44 = 16;

    t44 = ((x177>x178)^(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int16_t x183 = -18;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -657910;

    t45 = ((x181>x182)^(x183<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 468U;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -3041;

    t46 = ((x185>x186)^(x187<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 2037U;
	uint16_t x190 = 1632U;
	static int64_t x192 = -1LL;
	int32_t t47 = 3607161;

    t47 = ((x189>x190)^(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 136954LL;
	int8_t x194 = INT8_MAX;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = 3;
	static volatile int32_t t48 = 97;

    t48 = ((x193>x194)^(x195<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = INT64_MAX;
	static volatile uint64_t x198 = 29203495169LLU;
	int32_t x199 = 2829324;
	volatile int32_t t49 = 27976;

    t49 = ((x197>x198)^(x199<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	int16_t x202 = -376;
	int64_t x203 = INT64_MIN;
	int16_t x204 = -3219;

    t50 = ((x201>x202)^(x203<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	int16_t x207 = -8313;
	int32_t x208 = -2380421;
	int32_t t51 = -1669741;

    t51 = ((x205>x206)^(x207<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 416673;
	uint32_t x210 = 9992U;
	uint8_t x211 = 0U;
	int16_t x212 = 0;

    t52 = ((x209>x210)^(x211<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 804U;
	static uint16_t x214 = 0U;
	static uint32_t x216 = 0U;
	static int32_t t53 = -19;

    t53 = ((x213>x214)^(x215<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x217 = -1LL;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MAX;
	int32_t x220 = -1;
	volatile int32_t t54 = -131;

    t54 = ((x217>x218)^(x219<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	volatile int32_t t55 = -109609899;

    t55 = ((x221>x222)^(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = -37;
	volatile int32_t t56 = 9684980;

    t56 = ((x225>x226)^(x227<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x230 = INT32_MAX;
	uint16_t x231 = UINT16_MAX;

    t57 = ((x229>x230)^(x231<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = 10LL;
	volatile int32_t t58 = 43952152;

    t58 = ((x233>x234)^(x235<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x238 = 734517715U;
	int64_t x240 = -1LL;
	volatile int32_t t59 = 5;

    t59 = ((x237>x238)^(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 328U;
	uint8_t x242 = 31U;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = 914;

    t60 = ((x241>x242)^(x243<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	int8_t x247 = INT8_MIN;
	volatile int64_t x248 = -1LL;
	volatile int32_t t61 = 187384;

    t61 = ((x245>x246)^(x247<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = INT16_MAX;
	int8_t x250 = -1;
	int8_t x251 = 0;
	static volatile int64_t x252 = -1LL;
	volatile int32_t t62 = 1;

    t62 = ((x249>x250)^(x251<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	int16_t x256 = -5;
	int32_t t63 = -65167216;

    t63 = ((x253>x254)^(x255<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x260 = -241;
	volatile int32_t t64 = -2322516;

    t64 = ((x257>x258)^(x259<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	int8_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -52119837;

    t65 = ((x261>x262)^(x263<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x266 = 595U;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -19573060;

    t66 = ((x265>x266)^(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 0U;
	int64_t x271 = 62319LL;
	static int64_t x272 = INT64_MIN;
	int32_t t67 = 504694086;

    t67 = ((x269>x270)^(x271<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 506123;

    t68 = ((x273>x274)^(x275<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 389640874759999369LL;
	static volatile uint16_t x278 = 6692U;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t69 = -90;

    t69 = ((x277>x278)^(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = 1786442765LL;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 86727716054548544LLU;
	volatile int8_t x284 = 7;

    t70 = ((x281>x282)^(x283<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	uint8_t x287 = 5U;
	volatile int16_t x288 = INT16_MAX;
	static volatile int32_t t71 = 260396;

    t71 = ((x285>x286)^(x287<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = -24186;

    t72 = ((x289>x290)^(x291<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x294 = INT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	uint8_t x296 = 8U;

    t73 = ((x293>x294)^(x295<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -9380;
	int16_t x299 = INT16_MAX;
	int8_t x300 = 5;
	volatile int32_t t74 = 502688;

    t74 = ((x297>x298)^(x299<=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = INT64_MIN;
	uint32_t x304 = 127735025U;
	volatile int32_t t75 = -400622404;

    t75 = ((x301>x302)^(x303<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MAX;
	volatile int32_t t76 = 3;

    t76 = ((x305>x306)^(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = INT16_MAX;
	static volatile uint64_t x310 = 41928672LLU;
	volatile int64_t x311 = -1LL;
	int8_t x312 = 0;
	static volatile int32_t t77 = -14292460;

    t77 = ((x309>x310)^(x311<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x313 = UINT64_MAX;
	uint64_t x314 = UINT64_MAX;
	static int64_t x315 = -1LL;
	static int64_t x316 = -1LL;

    t78 = ((x313>x314)^(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x317 = 1671338360U;
	static uint32_t x318 = 50223487U;
	int64_t x319 = -10396271101LL;
	int32_t t79 = -3;

    t79 = ((x317>x318)^(x319<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 227381583015030954LLU;
	volatile uint8_t x322 = 29U;
	int8_t x323 = -2;
	static uint32_t x324 = UINT32_MAX;
	volatile int32_t t80 = -10357423;

    t80 = ((x321>x322)^(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MAX;
	volatile int32_t t81 = -58;

    t81 = ((x325>x326)^(x327<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MAX;
	int32_t x330 = -1;
	int32_t x332 = 16319456;
	volatile int32_t t82 = -11;

    t82 = ((x329>x330)^(x331<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = 812;
	int8_t x334 = -3;
	volatile int64_t x335 = -1LL;
	int64_t x336 = INT64_MIN;
	int32_t t83 = 28;

    t83 = ((x333>x334)^(x335<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	static int32_t x338 = -1;
	volatile int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;
	int32_t t84 = 15;

    t84 = ((x337>x338)^(x339<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	static int32_t x342 = INT32_MIN;
	uint16_t x343 = UINT16_MAX;
	int32_t t85 = -3548129;

    t85 = ((x341>x342)^(x343<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int32_t t86 = -1;

    t86 = ((x345>x346)^(x347<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -127;
	int8_t x351 = INT8_MAX;
	int64_t x352 = 4299316378LL;
	static volatile int32_t t87 = -3;

    t87 = ((x349>x350)^(x351<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	volatile int32_t x354 = -1;
	volatile int8_t x355 = INT8_MAX;
	static uint8_t x356 = UINT8_MAX;
	int32_t t88 = 92;

    t88 = ((x353>x354)^(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static int8_t x359 = 3;
	int8_t x360 = -1;

    t89 = ((x357>x358)^(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int16_t x362 = 95;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -297169;

    t90 = ((x361>x362)^(x363<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 0;
	volatile uint8_t x366 = 37U;
	volatile uint32_t x367 = 36836787U;
	int16_t x368 = -1;
	static int32_t t91 = -4651767;

    t91 = ((x365>x366)^(x367<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;

    t92 = ((x369>x370)^(x371<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -272860333024670LL;
	uint32_t x375 = 0U;
	uint16_t x376 = 238U;
	int32_t t93 = -3;

    t93 = ((x373>x374)^(x375<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = UINT64_MAX;
	static int64_t x379 = -46456903042375LL;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -78707134;

    t94 = ((x377>x378)^(x379<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = -960393170LL;
	int32_t x382 = INT32_MAX;
	int32_t x383 = INT32_MAX;
	volatile int8_t x384 = INT8_MIN;
	static int32_t t95 = 3;

    t95 = ((x381>x382)^(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = 5585LLU;
	static uint16_t x386 = 21215U;
	uint16_t x387 = 434U;
	static int32_t t96 = -5;

    t96 = ((x385>x386)^(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int16_t x390 = INT16_MIN;
	uint32_t x392 = 26275772U;

    t97 = ((x389>x390)^(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 1U;
	int32_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	int32_t t98 = 439;

    t98 = ((x393>x394)^(x395<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MAX;
	int16_t x399 = 1;
	volatile uint16_t x400 = UINT16_MAX;
	static volatile int32_t t99 = -7162363;

    t99 = ((x397>x398)^(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	int8_t x403 = -1;
	int16_t x404 = 0;
	int32_t t100 = 124;

    t100 = ((x401>x402)^(x403<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	uint64_t x406 = 734906LLU;
	int8_t x407 = INT8_MAX;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t101 = -27743822;

    t101 = ((x405>x406)^(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x409 = 727LL;
	int64_t x410 = -1LL;
	int32_t x412 = INT32_MIN;
	volatile int32_t t102 = 203;

    t102 = ((x409>x410)^(x411<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	uint64_t x414 = 1852162787LLU;
	int32_t x415 = INT32_MIN;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t103 = -258023861;

    t103 = ((x413>x414)^(x415<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	static volatile uint64_t x418 = 11501LLU;
	uint8_t x419 = 67U;
	volatile int64_t x420 = INT64_MAX;
	volatile int32_t t104 = 0;

    t104 = ((x417>x418)^(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MIN;
	int64_t x423 = -5537022592LL;

    t105 = ((x421>x422)^(x423<=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -1;
	static volatile int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	uint32_t x428 = UINT32_MAX;
	static int32_t t106 = 7;

    t106 = ((x425>x426)^(x427<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MIN;
	static uint8_t x432 = 6U;
	volatile int32_t t107 = 39;

    t107 = ((x429>x430)^(x431<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x434 = 0U;
	uint32_t x435 = UINT32_MAX;
	static uint64_t x436 = 9546060900779LLU;
	int32_t t108 = 22740790;

    t108 = ((x433>x434)^(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MAX;
	volatile int16_t x439 = INT16_MIN;
	volatile int16_t x440 = -1;

    t109 = ((x437>x438)^(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = 1;
	int32_t x442 = -3580688;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = 3;

    t110 = ((x441>x442)^(x443<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x446 = 5995;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t111 = -893;

    t111 = ((x445>x446)^(x447<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = UINT16_MAX;
	static int64_t x450 = 104561102LL;
	uint16_t x451 = 14809U;
	static int32_t x452 = INT32_MIN;
	int32_t t112 = -43269187;

    t112 = ((x449>x450)^(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = UINT32_MAX;
	volatile uint64_t x454 = UINT64_MAX;
	volatile uint16_t x455 = 14082U;
	volatile int32_t t113 = -1;

    t113 = ((x453>x454)^(x455<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = -1;
	static int32_t x459 = INT32_MAX;
	int16_t x460 = INT16_MAX;
	int32_t t114 = -1631;

    t114 = ((x457>x458)^(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	int32_t x462 = -32591;
	int8_t x463 = 0;
	int16_t x464 = -4703;
	static int32_t t115 = 26;

    t115 = ((x461>x462)^(x463<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	volatile uint32_t x466 = 600111745U;
	int32_t x467 = INT32_MIN;
	static int32_t x468 = INT32_MIN;
	static int32_t t116 = -782;

    t116 = ((x465>x466)^(x467<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 1492U;
	int16_t x470 = -1;
	volatile uint16_t x471 = UINT16_MAX;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t117 = 22406858;

    t117 = ((x469>x470)^(x471<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	static uint32_t x474 = 3276U;
	int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;
	volatile int32_t t118 = 16870;

    t118 = ((x473>x474)^(x475<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint32_t x478 = UINT32_MAX;
	int8_t x479 = -1;
	int32_t x480 = INT32_MAX;
	int32_t t119 = -114749;

    t119 = ((x477>x478)^(x479<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x481 = UINT8_MAX;
	int8_t x482 = 0;
	int8_t x483 = INT8_MIN;
	volatile uint64_t x484 = 900791879067647LLU;

    t120 = ((x481>x482)^(x483<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = INT8_MIN;
	int64_t x487 = -1LL;
	volatile int8_t x488 = -1;
	volatile int32_t t121 = 850924672;

    t121 = ((x485>x486)^(x487<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x490 = 15U;
	volatile uint64_t x491 = 1874400932699LLU;
	int32_t t122 = -63915692;

    t122 = ((x489>x490)^(x491<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = -1536983521670810113LL;
	uint32_t x494 = 9996U;
	static int32_t x495 = INT32_MIN;
	int8_t x496 = INT8_MAX;
	int32_t t123 = 6966562;

    t123 = ((x493>x494)^(x495<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	int32_t t124 = 0;

    t124 = ((x497>x498)^(x499<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x502 = INT64_MIN;
	int64_t x503 = -1175238612664757LL;
	static uint8_t x504 = 70U;
	volatile int32_t t125 = -39;

    t125 = ((x501>x502)^(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MAX;
	uint16_t x507 = 7U;
	uint64_t x508 = UINT64_MAX;
	volatile int32_t t126 = -129262015;

    t126 = ((x505>x506)^(x507<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x510 = INT16_MIN;
	int32_t t127 = -3;

    t127 = ((x509>x510)^(x511<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	int8_t x514 = 0;
	int16_t x515 = INT16_MAX;
	int8_t x516 = -1;

    t128 = ((x513>x514)^(x515<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = INT16_MIN;
	uint32_t x520 = 34U;

    t129 = ((x517>x518)^(x519<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x521 = 311287817492701326LLU;
	uint8_t x522 = 3U;
	int16_t x523 = INT16_MIN;
	volatile int64_t x524 = INT64_MIN;

    t130 = ((x521>x522)^(x523<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -1LL;
	volatile int8_t x527 = 27;
	int32_t x528 = 37362;
	volatile int32_t t131 = -411978;

    t131 = ((x525>x526)^(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	uint16_t x531 = 1U;
	int32_t x532 = -1;

    t132 = ((x529>x530)^(x531<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	uint8_t x534 = 3U;
	static int32_t x535 = INT32_MAX;
	int64_t x536 = INT64_MIN;

    t133 = ((x533>x534)^(x535<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int32_t x539 = INT32_MAX;
	int8_t x540 = -1;
	volatile int32_t t134 = -37912;

    t134 = ((x537>x538)^(x539<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	int8_t x542 = -1;
	volatile int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	int32_t t135 = 8905;

    t135 = ((x541>x542)^(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = -1544;
	volatile uint32_t x547 = 18U;
	volatile int32_t t136 = 475388;

    t136 = ((x545>x546)^(x547<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	static int32_t x550 = -2;
	int8_t x551 = INT8_MIN;
	static int16_t x552 = -1;
	volatile int32_t t137 = -7590;

    t137 = ((x549>x550)^(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MIN;
	int8_t x554 = -1;
	int32_t x555 = 14;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 1292361;

    t138 = ((x553>x554)^(x555<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = INT16_MAX;
	static int32_t x559 = INT32_MIN;
	volatile int32_t t139 = -432757315;

    t139 = ((x557>x558)^(x559<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x562 = 74043362;
	volatile int16_t x563 = -1;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t140 = 2;

    t140 = ((x561>x562)^(x563<=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MAX;
	volatile uint8_t x567 = 127U;
	static uint32_t x568 = UINT32_MAX;
	volatile int32_t t141 = 3;

    t141 = ((x565>x566)^(x567<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 18;
	int8_t x570 = INT8_MIN;
	static int32_t t142 = -2365084;

    t142 = ((x569>x570)^(x571<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	int32_t x576 = -25776;
	int32_t t143 = 72;

    t143 = ((x573>x574)^(x575<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	int64_t x579 = -1LL;
	int64_t x580 = INT64_MAX;
	static volatile int32_t t144 = -7508396;

    t144 = ((x577>x578)^(x579<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 5967LLU;
	int16_t x583 = INT16_MIN;
	int16_t x584 = INT16_MIN;

    t145 = ((x581>x582)^(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = 25276;
	volatile uint32_t x587 = 4134U;
	static int32_t t146 = -64319264;

    t146 = ((x585>x586)^(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = 3;
	int8_t x590 = INT8_MIN;
	uint32_t x591 = 11325U;
	static int32_t x592 = 9159071;
	volatile int32_t t147 = -27911811;

    t147 = ((x589>x590)^(x591<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MIN;
	static volatile uint16_t x594 = UINT16_MAX;
	static int32_t x595 = -22;
	int32_t x596 = INT32_MIN;
	static int32_t t148 = -69;

    t148 = ((x593>x594)^(x595<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = -1;
	volatile int32_t x599 = 0;
	int64_t x600 = 327253692223LL;

    t149 = ((x597>x598)^(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	static int16_t x603 = -1;
	static volatile int32_t t150 = 19053825;

    t150 = ((x601>x602)^(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = -20;
	static volatile uint8_t x606 = 33U;
	int8_t x607 = -1;
	uint8_t x608 = 1U;

    t151 = ((x605>x606)^(x607<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	int8_t x610 = 0;
	static int64_t x612 = INT64_MAX;

    t152 = ((x609>x610)^(x611<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x615 = INT8_MAX;
	int8_t x616 = -1;
	static volatile int32_t t153 = 176248168;

    t153 = ((x613>x614)^(x615<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x617 = UINT8_MAX;
	volatile int8_t x618 = 28;
	int16_t x619 = -1;
	volatile int64_t x620 = INT64_MAX;
	volatile int32_t t154 = -52737304;

    t154 = ((x617>x618)^(x619<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	volatile int8_t x622 = -1;
	int8_t x623 = INT8_MIN;
	static uint64_t x624 = 330655032LLU;

    t155 = ((x621>x622)^(x623<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	int16_t x626 = -1;
	int32_t x627 = -20581;

    t156 = ((x625>x626)^(x627<=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -1;
	static volatile int8_t x632 = 5;

    t157 = ((x629>x630)^(x631<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	static uint64_t x634 = 1890045982455550593LLU;
	static int8_t x635 = 21;
	volatile int32_t t158 = -373214401;

    t158 = ((x633>x634)^(x635<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = -5267696317474143LL;
	uint32_t x639 = 1880U;
	volatile int64_t x640 = -1LL;
	volatile int32_t t159 = -399;

    t159 = ((x637>x638)^(x639<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x643 = INT32_MAX;
	static int32_t t160 = -3393;

    t160 = ((x641>x642)^(x643<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x645 = 71387174352LLU;
	static int32_t x646 = INT32_MIN;
	volatile int8_t x647 = INT8_MAX;
	int8_t x648 = 0;
	volatile int32_t t161 = -87;

    t161 = ((x645>x646)^(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 1792097U;
	uint32_t x651 = 84712954U;
	int64_t x652 = INT64_MIN;
	int32_t t162 = 9;

    t162 = ((x649>x650)^(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = -1;
	static int8_t x655 = -1;
	volatile int8_t x656 = -7;
	volatile int32_t t163 = -5047534;

    t163 = ((x653>x654)^(x655<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	int64_t x659 = -1LL;
	uint32_t x660 = UINT32_MAX;
	static volatile int32_t t164 = -8162544;

    t164 = ((x657>x658)^(x659<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 112U;
	int16_t x662 = INT16_MIN;
	volatile int16_t x663 = INT16_MAX;
	static int64_t x664 = INT64_MIN;
	int32_t t165 = -7162;

    t165 = ((x661>x662)^(x663<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 0U;
	int16_t x666 = INT16_MAX;
	volatile int16_t x667 = 2215;
	volatile uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = 51118603;

    t166 = ((x665>x666)^(x667<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MIN;
	volatile int32_t x670 = INT32_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t167 = -45;

    t167 = ((x669>x670)^(x671<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = -1720040LL;
	volatile uint8_t x675 = 23U;
	uint16_t x676 = 377U;
	int32_t t168 = 1;

    t168 = ((x673>x674)^(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = -1;
	uint64_t x679 = 48811LLU;
	int8_t x680 = INT8_MIN;

    t169 = ((x677>x678)^(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	int64_t x682 = INT64_MAX;
	int16_t x683 = -1;
	static volatile int16_t x684 = INT16_MAX;
	volatile int32_t t170 = -988349;

    t170 = ((x681>x682)^(x683<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x685 = 29031880U;
	volatile int32_t x686 = INT32_MIN;
	uint32_t x687 = 3U;
	static int8_t x688 = -29;
	int32_t t171 = 204715833;

    t171 = ((x685>x686)^(x687<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	uint8_t x690 = 33U;
	static int32_t x692 = 0;

    t172 = ((x689>x690)^(x691<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	int8_t x695 = -1;
	int32_t x696 = 84;
	int32_t t173 = -28076;

    t173 = ((x693>x694)^(x695<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x697 = UINT64_MAX;
	int64_t x698 = INT64_MIN;
	int64_t x699 = 1752LL;
	int32_t x700 = -4794950;
	volatile int32_t t174 = 10808;

    t174 = ((x697>x698)^(x699<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 30;
	static int64_t x702 = -1LL;
	uint8_t x704 = 4U;

    t175 = ((x701>x702)^(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x706 = -810319LL;
	volatile int64_t x707 = -1LL;
	int8_t x708 = INT8_MAX;
	int32_t t176 = 14;

    t176 = ((x705>x706)^(x707<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	uint8_t x710 = 9U;
	static uint32_t x711 = 2576U;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = 48201311;

    t177 = ((x709>x710)^(x711<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	int16_t x714 = 0;
	int32_t t178 = 1400891;

    t178 = ((x713>x714)^(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = UINT32_MAX;
	static volatile uint32_t x718 = 3230U;
	volatile int16_t x719 = -9;
	volatile int16_t x720 = 944;
	static int32_t t179 = -1;

    t179 = ((x717>x718)^(x719<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -3130;
	int8_t x723 = 0;

    t180 = ((x721>x722)^(x723<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x726 = 1LLU;
	int32_t x727 = -1;
	int32_t x728 = INT32_MIN;
	int32_t t181 = -81270427;

    t181 = ((x725>x726)^(x727<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	uint16_t x730 = UINT16_MAX;

    t182 = ((x729>x730)^(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 24;
	static volatile uint64_t x735 = 26831LLU;
	int64_t x736 = -1LL;

    t183 = ((x733>x734)^(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = -11;
	static int64_t x739 = -959LL;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t184 = 0;

    t184 = ((x737>x738)^(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x741 = UINT16_MAX;
	volatile int32_t x742 = INT32_MAX;
	static volatile int64_t x743 = INT64_MAX;
	static uint8_t x744 = 11U;
	int32_t t185 = 4;

    t185 = ((x741>x742)^(x743<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 661066;
	uint64_t x746 = UINT64_MAX;

    t186 = ((x745>x746)^(x747<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int8_t x750 = 3;
	uint64_t x751 = UINT64_MAX;
	static int16_t x752 = INT16_MIN;
	static volatile int32_t t187 = 3375495;

    t187 = ((x749>x750)^(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x753 = -2034;
	static uint32_t x754 = 215554U;
	volatile int32_t x755 = INT32_MAX;
	volatile int32_t t188 = 4263;

    t188 = ((x753>x754)^(x755<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -8184438216LL;
	volatile uint16_t x758 = UINT16_MAX;
	uint64_t x760 = 4LLU;

    t189 = ((x757>x758)^(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MAX;
	volatile uint64_t x762 = UINT64_MAX;
	static int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;
	int32_t t190 = -551;

    t190 = ((x761>x762)^(x763<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x767 = UINT32_MAX;
	uint8_t x768 = 35U;
	static int32_t t191 = 13872526;

    t191 = ((x765>x766)^(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x769 = 213784221448LLU;

    t192 = ((x769>x770)^(x771<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	int8_t x774 = 12;
	int64_t x775 = INT64_MIN;
	uint8_t x776 = 73U;
	int32_t t193 = 73407;

    t193 = ((x773>x774)^(x775<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 3;
	static int64_t x778 = -1LL;
	int64_t x780 = INT64_MAX;
	volatile int32_t t194 = 314;

    t194 = ((x777>x778)^(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -4;
	int16_t x782 = INT16_MAX;
	int8_t x783 = INT8_MIN;
	int16_t x784 = INT16_MIN;

    t195 = ((x781>x782)^(x783<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = -69716835396927LL;
	uint64_t x788 = 14818965375676LLU;
	volatile int32_t t196 = 32752;

    t196 = ((x785>x786)^(x787<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	static int16_t x790 = INT16_MIN;
	int8_t x791 = INT8_MAX;
	volatile int8_t x792 = -1;
	int32_t t197 = 7;

    t197 = ((x789>x790)^(x791<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 28U;
	int16_t x794 = INT16_MAX;
	static int64_t x795 = INT64_MAX;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = 21;

    t198 = ((x793>x794)^(x795<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	static uint32_t x798 = UINT32_MAX;
	int64_t x799 = -13930LL;
	uint16_t x800 = 11U;
	static volatile int32_t t199 = 21843680;

    t199 = ((x797>x798)^(x799<=x800));

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

