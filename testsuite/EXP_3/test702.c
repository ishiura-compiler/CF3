
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

uint8_t x2 = 117U;
volatile uint8_t x5 = 0U;
int16_t x11 = 1;
int16_t x15 = 990;
uint32_t x17 = 19208U;
int16_t x20 = -1;
uint8_t x23 = 0U;
volatile uint8_t x27 = 23U;
int32_t x31 = INT32_MIN;
int8_t x60 = INT8_MIN;
volatile int32_t t13 = -6;
int16_t x68 = INT16_MIN;
volatile int32_t t15 = -14;
int16_t x73 = 0;
volatile int64_t t17 = -806386846LL;
static volatile uint8_t x81 = 54U;
int32_t x86 = INT32_MIN;
int32_t x87 = -78;
volatile int32_t x90 = 5;
uint8_t x91 = UINT8_MAX;
volatile int16_t x93 = -1;
int16_t x94 = 13;
volatile int32_t t21 = -23668;
int16_t x104 = INT16_MIN;
volatile int64_t t25 = 198135238187297LL;
int16_t x118 = INT16_MIN;
int32_t x120 = INT32_MIN;
static int8_t x125 = -1;
int16_t x127 = 1;
int32_t t27 = 31;
uint64_t x130 = UINT64_MAX;
static int64_t x132 = -8412863257LL;
int64_t t28 = -1461287567779667594LL;
uint64_t x136 = UINT64_MAX;
int16_t x146 = -26;
volatile int64_t x160 = -1LL;
volatile int8_t x163 = INT8_MIN;
static int64_t x176 = -558505155559261LL;
static int32_t x179 = -1;
uint8_t x181 = UINT8_MAX;
uint32_t x182 = 242458510U;
static uint64_t x187 = UINT64_MAX;
int16_t x190 = -8;
volatile uint64_t x197 = UINT64_MAX;
uint32_t x212 = 65987U;
int8_t x217 = INT8_MAX;
uint16_t x218 = 1U;
int32_t t49 = 54646303;
int8_t x222 = -6;
volatile int64_t x228 = -836306566495LL;
int64_t x229 = INT64_MIN;
int32_t x232 = -1;
static int64_t t52 = 2546576903030LL;
static int8_t x240 = INT8_MIN;
static volatile uint64_t x241 = 527306071LLU;
int32_t x244 = INT32_MAX;
volatile int64_t t55 = -11166228037015LL;
int16_t x261 = INT16_MIN;
volatile uint8_t x282 = 48U;
volatile int64_t x283 = INT64_MIN;
int16_t x284 = INT16_MAX;
volatile int16_t x293 = -1;
uint8_t x294 = 2U;
uint32_t x296 = 12896U;
uint16_t x297 = 1957U;
uint8_t x298 = UINT8_MAX;
uint64_t x303 = UINT64_MAX;
int16_t x304 = -48;
uint64_t t66 = UINT64_MAX;
volatile int8_t x307 = INT8_MAX;
uint8_t x319 = UINT8_MAX;
static int32_t x322 = -1631609;
int64_t x325 = -1LL;
static volatile int8_t x333 = 1;
int8_t x341 = -12;
static volatile int32_t x342 = INT32_MIN;
int32_t x344 = 89853146;
uint32_t x354 = 3U;
volatile int8_t x355 = INT8_MAX;
int32_t x363 = -50592786;
int32_t x365 = INT32_MIN;
volatile int32_t t81 = -22947;
int64_t x373 = INT64_MIN;
static uint32_t x374 = 14994167U;
int32_t x380 = -1;
int32_t x387 = INT32_MAX;
static uint8_t x388 = UINT8_MAX;
int32_t t86 = 1;
static uint8_t x391 = 0U;
uint16_t x393 = 83U;
int32_t x397 = 2773;
int32_t x401 = INT32_MAX;
volatile int64_t t92 = 393663LL;
uint8_t x414 = 6U;
int8_t x418 = 1;
int64_t x419 = INT64_MIN;
static int64_t t95 = -5871913666593LL;
uint32_t x426 = 7689148U;
int8_t x428 = -7;
static volatile int64_t x433 = -1LL;
volatile int32_t t98 = -2;
static volatile int16_t x439 = -1;
static int16_t x441 = INT16_MIN;
static int8_t x446 = 0;
uint32_t x447 = UINT32_MAX;
int16_t x451 = INT16_MIN;
uint8_t x452 = 14U;
uint64_t x454 = UINT64_MAX;
static volatile int16_t x456 = -1;
volatile uint32_t t104 = 29925329U;
int32_t x464 = INT32_MAX;
int64_t x468 = 31621LL;
static volatile uint8_t x476 = UINT8_MAX;
int8_t x482 = INT8_MIN;
volatile int8_t x486 = INT8_MIN;
int16_t x488 = INT16_MAX;
int64_t x490 = -3579979LL;
uint64_t x492 = 2950LLU;
int8_t x493 = -1;
static int64_t x506 = -26985935268LL;
int8_t x508 = 46;
int64_t x512 = -115112LL;
static int64_t t117 = -1995130LL;
int8_t x517 = INT8_MIN;
int16_t x518 = -8966;
volatile int32_t x521 = INT32_MIN;
int64_t x527 = -1LL;
int16_t x528 = -1;
int32_t x532 = 51048;
int16_t x535 = -1990;
int8_t x540 = INT8_MIN;
static uint64_t x549 = UINT64_MAX;
int32_t x550 = INT32_MAX;
uint8_t x555 = 8U;
volatile int32_t t128 = 281322076;
int16_t x564 = INT16_MAX;
int32_t t130 = -922620861;
static int32_t x568 = INT32_MIN;
static uint8_t x579 = 125U;
uint64_t x587 = 36660441628208LLU;
int16_t x589 = -1;
volatile int64_t x590 = INT64_MAX;
volatile int64_t t138 = -1LL;
volatile int16_t x598 = -383;
int8_t x600 = 29;
int64_t t139 = 173730055305646517LL;
uint64_t x601 = 3LLU;
volatile uint8_t x616 = 96U;
int16_t x619 = 2;
static int32_t t144 = -1;
int32_t x622 = INT32_MAX;
static volatile int64_t x624 = -10088120529928816LL;
int8_t x634 = 0;
int64_t t149 = 251110652581LL;
int32_t x645 = -16040;
uint64_t x648 = 7409095824004LLU;
int16_t x651 = INT16_MIN;
volatile int64_t x653 = INT64_MIN;
int8_t x656 = 11;
volatile int16_t x657 = INT16_MAX;
int16_t x659 = INT16_MIN;
volatile int32_t t154 = 67900322;
static uint16_t x662 = 3507U;
volatile int8_t x663 = -1;
int32_t x666 = INT32_MAX;
int64_t t157 = -1LL;
static int16_t x673 = INT16_MAX;
volatile int64_t t158 = 7681431973096178LL;
int16_t x680 = INT16_MIN;
static uint16_t x683 = 12U;
int8_t x685 = -1;
static int8_t x690 = INT8_MAX;
uint8_t x692 = UINT8_MAX;
static int64_t x695 = 28514134LL;
static volatile int64_t t163 = -465819LL;
uint16_t x704 = UINT16_MAX;
volatile int64_t x708 = INT64_MIN;
int32_t t167 = -6295309;
int16_t x724 = -1;
volatile int32_t t169 = 237153839;
int32_t x726 = INT32_MIN;
static int64_t x735 = -3593200LL;
int64_t t173 = 12015648654588LL;
volatile int32_t t175 = -2;
volatile int16_t x763 = INT16_MIN;
int32_t t178 = 51;
static uint8_t x769 = UINT8_MAX;
uint8_t x775 = 1U;
volatile uint32_t t182 = 11927642U;
static int8_t x787 = INT8_MIN;
static int16_t x788 = 2895;
int32_t x790 = -1;
volatile uint64_t x795 = 9860694359152LLU;
volatile int32_t x800 = -1;
int32_t x803 = -224;
static int64_t x804 = INT64_MIN;
uint16_t x810 = 43U;
uint64_t x816 = UINT64_MAX;
volatile int64_t t192 = -112278683991076LL;
int64_t x839 = INT64_MIN;
static int16_t x844 = INT16_MIN;
static uint8_t x849 = 2U;


void f0(void) {
    	uint16_t x1 = 13U;
	volatile uint32_t x3 = 427U;
	int8_t x4 = -2;
	uint32_t t0 = 0U;

    t0 = ((x1>x2)-(x3/x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	int64_t x7 = INT64_MIN;
	static uint16_t x8 = UINT16_MAX;
	static int64_t t1 = -4610788343249440637LL;

    t1 = ((x5>x6)-(x7/x8));

    if (t1 != 140739635871744LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int64_t x10 = -1LL;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -337;

    t2 = ((x9>x10)-(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	uint64_t x14 = 37713684LLU;
	uint32_t x16 = 28932881U;
	volatile uint32_t t3 = 687643540U;

    t3 = ((x13>x14)-(x15/x16));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	static volatile int64_t x19 = 15227457561296LL;
	int64_t t4 = 0LL;

    t4 = ((x17>x18)-(x19/x20));

    if (t4 != 15227457561296LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int64_t x22 = -307741343502722LL;
	int8_t x24 = 2;
	int32_t t5 = 5042;

    t5 = ((x21>x22)-(x23/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1527020U;
	static int8_t x26 = 4;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -147;

    t6 = ((x25>x26)-(x27/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x29 = 4U;
	int32_t x30 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 5586;

    t7 = ((x29>x30)-(x31/x32));

    if (t7 != -16777215) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = -697709806172439LL;
	int64_t x36 = INT64_MAX;
	volatile int64_t t8 = -3008255LL;

    t8 = ((x33>x34)-(x35/x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 3751LL;
	int16_t x38 = -5;
	uint32_t x39 = 0U;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = 238294U;

    t9 = ((x37>x38)-(x39/x40));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -5738;
	int64_t x44 = -1LL;
	int64_t t10 = 809192LL;

    t10 = ((x41>x42)-(x43/x44));

    if (t10 != -5737LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -9;
	volatile int64_t x46 = 1869LL;
	int16_t x47 = INT16_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -3880;

    t11 = ((x45>x46)-(x47/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = 543;
	uint8_t x52 = 106U;
	int32_t t12 = -1;

    t12 = ((x49>x50)-(x51/x52));

    if (t12 != -4) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = 36167500;
	volatile uint16_t x58 = UINT16_MAX;
	volatile int16_t x59 = 65;

    t13 = ((x57>x58)-(x59/x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = -417362442LL;
	uint16_t x66 = UINT16_MAX;
	uint8_t x67 = UINT8_MAX;
	static int32_t t14 = 47;

    t14 = ((x65>x66)-(x67/x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = 716742LL;
	static int32_t x70 = INT32_MIN;
	int8_t x71 = INT8_MIN;
	int16_t x72 = 5027;

    t15 = ((x69>x70)-(x71/x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x74 = -1;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t16 = 4451812171LL;

    t16 = ((x73>x74)-(x75/x76));

    if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x77 = 129050417U;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = -106912029983663LL;
	static int64_t x80 = -249209194191LL;

    t17 = ((x77>x78)-(x79/x80));

    if (t17 != -429LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x82 = -1LL;
	int16_t x83 = 7;
	static int64_t x84 = 39LL;
	volatile int64_t t18 = 11424449LL;

    t18 = ((x81>x82)-(x83/x84));

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x85 = 15267642445851LLU;
	static int8_t x88 = INT8_MIN;
	int32_t t19 = -1606151;

    t19 = ((x85>x86)-(x87/x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x89 = 32U;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t20 = 3637257290299LLU;

    t20 = ((x89>x90)-(x91/x92));

    if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x95 = -1;
	static int8_t x96 = -1;

    t21 = ((x93>x94)-(x95/x96));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t22 = -236043;

    t22 = ((x97>x98)-(x99/x100));

    if (t22 != 16777215) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x101 = 2U;
	int32_t x102 = INT32_MIN;
	static volatile int16_t x103 = -198;
	static int32_t t23 = -7909383;

    t23 = ((x101>x102)-(x103/x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 3;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -1;
	int32_t x108 = 109318;
	volatile int32_t t24 = -1236;

    t24 = ((x105>x106)-(x107/x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = UINT8_MAX;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = -63030807244618378LL;
	uint16_t x112 = UINT16_MAX;

    t25 = ((x109>x110)-(x111/x112));

    if (t25 != 961788467912LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = UINT64_MAX;
	int8_t x119 = 1;
	volatile int32_t t26 = 6088075;

    t26 = ((x117>x118)-(x119/x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x126 = INT64_MIN;
	int16_t x128 = INT16_MIN;

    t27 = ((x125>x126)-(x127/x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = 3U;
	int16_t x131 = -1;

    t28 = ((x129>x130)-(x131/x132));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	volatile int32_t x135 = 23069;
	uint64_t t29 = 3526268520992756822LLU;

    t29 = ((x133>x134)-(x135/x136));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x137 = -8;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t30 = 20;

    t30 = ((x137>x138)-(x139/x140));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x141 = UINT64_MAX;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = 6206LLU;
	static uint64_t x144 = 6157000LLU;
	uint64_t t31 = 352609456LLU;

    t31 = ((x141>x142)-(x143/x144));

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x145 = UINT8_MAX;
	static int16_t x147 = INT16_MIN;
	int64_t x148 = -1LL;
	static int64_t t32 = -2753031910LL;

    t32 = ((x145>x146)-(x147/x148));

    if (t32 != -32767LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x149 = 15U;
	static uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	static int8_t x152 = INT8_MAX;
	static volatile int32_t t33 = -6218511;

    t33 = ((x149>x150)-(x151/x152));

    if (t33 != 16909320) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = 307759;
	static volatile int32_t x154 = INT32_MIN;
	uint64_t x155 = 255767164LLU;
	volatile int16_t x156 = 15;
	static uint64_t t34 = 4115LLU;

    t34 = ((x153>x154)-(x155/x156));

    if (t34 != 18446744073692500473LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = 27843LLU;
	static int64_t x158 = 750886LL;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t t35 = 5LL;

    t35 = ((x157>x158)-(x159/x160));

    if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MAX;
	int64_t x164 = 4439426489125859084LL;
	volatile int64_t t36 = 745021550671013LL;

    t36 = ((x161>x162)-(x163/x164));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x165 = 47;
	static volatile uint32_t x166 = UINT32_MAX;
	int8_t x167 = INT8_MIN;
	volatile uint32_t x168 = 3809U;
	static uint32_t t37 = 2U;

    t37 = ((x165>x166)-(x167/x168));

    if (t37 != 4293839713U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = -17;
	volatile uint16_t x170 = 4U;
	int32_t x171 = -1;
	int64_t x172 = -1LL;
	static int64_t t38 = -7285150168464LL;

    t38 = ((x169>x170)-(x171/x172));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x173 = INT16_MAX;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	volatile int64_t t39 = -47976318446539LL;

    t39 = ((x173>x174)-(x175/x176));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 6194784796913527LLU;
	uint64_t x178 = UINT64_MAX;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t40 = 17377;

    t40 = ((x177>x178)-(x179/x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x183 = UINT8_MAX;
	volatile int8_t x184 = 59;
	volatile int32_t t41 = -12984900;

    t41 = ((x181>x182)-(x183/x184));

    if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 5700U;
	uint16_t x186 = 183U;
	uint16_t x188 = 90U;
	volatile uint64_t t42 = 12706313001798032LLU;

    t42 = ((x185>x186)-(x187/x188));

    if (t42 != 18241780250668334377LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x189 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	int16_t x192 = -1;
	static volatile int32_t t43 = INT32_MAX;

    t43 = ((x189>x190)-(x191/x192));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t44 = 408;

    t44 = ((x197>x198)-(x199/x200));

    if (t44 != 129) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x201 = INT8_MIN;
	int16_t x202 = -1548;
	uint64_t x203 = UINT64_MAX;
	volatile int64_t x204 = -1LL;
	uint64_t t45 = 59295LLU;

    t45 = ((x201>x202)-(x203/x204));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	volatile int64_t x207 = INT64_MIN;
	uint64_t x208 = 16330931151274557LLU;
	uint64_t t46 = 2054077997536LLU;

    t46 = ((x205>x206)-(x207/x208));

    if (t46 != 18446744073709551052LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x209 = INT64_MAX;
	int16_t x210 = -11437;
	volatile uint16_t x211 = 236U;
	static volatile uint32_t t47 = 16U;

    t47 = ((x209>x210)-(x211/x212));

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x213 = UINT8_MAX;
	uint64_t x214 = 398804515709488847LLU;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 22;
	volatile int32_t t48 = -188;

    t48 = ((x213>x214)-(x215/x216));

    if (t48 != 97612893) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x219 = 0;
	static volatile int8_t x220 = -15;

    t49 = ((x217>x218)-(x219/x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x221 = 3843U;
	int16_t x223 = -1562;
	volatile int64_t x224 = -1LL;
	int64_t t50 = 2169752282075018LL;

    t50 = ((x221>x222)-(x223/x224));

    if (t50 != -1561LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x225 = -1LL;
	static int16_t x226 = 1;
	static int8_t x227 = INT8_MIN;
	int64_t t51 = 31LL;

    t51 = ((x225>x226)-(x227/x228));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x230 = INT64_MIN;
	int64_t x231 = -1LL;

    t52 = ((x229>x230)-(x231/x232));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x237 = INT32_MAX;
	int64_t x238 = INT64_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	int32_t t53 = -351;

    t53 = ((x237>x238)-(x239/x240));

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	uint64_t t54 = 6545138904835632LLU;

    t54 = ((x241>x242)-(x243/x244));

    if (t54 != 18446744065119617020LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = -1;
	static uint64_t x246 = 1093821325565067245LLU;
	int32_t x247 = INT32_MIN;
	volatile int64_t x248 = 66LL;

    t55 = ((x245>x246)-(x247/x248));

    if (t55 != 32537632LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = INT16_MIN;
	uint16_t x250 = 2U;
	volatile int8_t x251 = INT8_MAX;
	volatile int64_t x252 = -1LL;
	int64_t t56 = -18680524811731LL;

    t56 = ((x249>x250)-(x251/x252));

    if (t56 != 127LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = -1;
	volatile int32_t x254 = -73225;
	volatile uint8_t x255 = 2U;
	int16_t x256 = INT16_MAX;
	volatile int32_t t57 = -9;

    t57 = ((x253>x254)-(x255/x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	int8_t x264 = 1;
	int32_t t58 = 110;

    t58 = ((x261>x262)-(x263/x264));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = -9;
	int16_t x266 = -1;
	int16_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	int32_t t59 = -167082;

    t59 = ((x265>x266)-(x267/x268));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	int32_t x272 = 24179;
	static volatile int64_t t60 = 662LL;

    t60 = ((x269>x270)-(x271/x272));

    if (t60 != 381462096730831LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = INT64_MIN;
	static int32_t x274 = INT32_MIN;
	int32_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t61 = 1;

    t61 = ((x273>x274)-(x275/x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x281 = 0;
	static int64_t t62 = 1441300870402070LL;

    t62 = ((x281>x282)-(x283/x284));

    if (t62 != 281483566907400LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	int64_t x287 = -1LL;
	uint64_t x288 = 8500594860698LLU;
	volatile uint64_t t63 = 196149103LLU;

    t63 = ((x285>x286)-(x287/x288));

    if (t63 != 18446744073707381564LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x295 = 6261U;
	uint32_t t64 = 9911U;

    t64 = ((x293>x294)-(x295/x296));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x299 = -1;
	int16_t x300 = -7857;
	volatile int32_t t65 = 6;

    t65 = ((x297>x298)-(x299/x300));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x301 = 53;
	uint64_t x302 = 137851209497LLU;

    t66 = ((x301>x302)-(x303/x304));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x305 = 80821036U;
	int32_t x306 = INT32_MIN;
	uint8_t x308 = 42U;
	int32_t t67 = 806253273;

    t67 = ((x305>x306)-(x307/x308));

    if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x313 = INT8_MIN;
	volatile int16_t x314 = -1;
	static int32_t x315 = INT32_MAX;
	volatile int64_t x316 = 3862341311028996LL;
	volatile int64_t t68 = 17553895900903LL;

    t68 = ((x313>x314)-(x315/x316));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x317 = -7604;
	uint16_t x318 = UINT16_MAX;
	uint16_t x320 = 5212U;
	volatile int32_t t69 = -51600;

    t69 = ((x317>x318)-(x319/x320));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile uint16_t x323 = 1831U;
	static uint8_t x324 = 14U;
	volatile int32_t t70 = -2537224;

    t70 = ((x321>x322)-(x323/x324));

    if (t70 != -129) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x326 = 27U;
	int64_t x327 = 11640545LL;
	uint32_t x328 = UINT32_MAX;
	int64_t t71 = 35045LL;

    t71 = ((x325>x326)-(x327/x328));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x329 = UINT32_MAX;
	int16_t x330 = -8179;
	uint32_t x331 = 54U;
	uint32_t x332 = 22975U;
	static volatile uint32_t t72 = 751203U;

    t72 = ((x329>x330)-(x331/x332));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x334 = 10969995374320LLU;
	int64_t x335 = 1381817747LL;
	int8_t x336 = INT8_MIN;
	volatile int64_t t73 = -1LL;

    t73 = ((x333>x334)-(x335/x336));

    if (t73 != 10795451LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MIN;
	int32_t x338 = -1;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	static volatile int32_t t74 = 0;

    t74 = ((x337>x338)-(x339/x340));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x343 = INT64_MIN;
	static int64_t t75 = -26LL;

    t75 = ((x341>x342)-(x343/x344));

    if (t75 != 102649405697LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = INT32_MAX;
	static int64_t x346 = INT64_MAX;
	uint64_t x347 = 1963554377099195LLU;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t76 = 1494356325LLU;

    t76 = ((x345>x346)-(x347/x348));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x349 = INT16_MIN;
	volatile uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = INT32_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t77 = 13214616LL;

    t77 = ((x349>x350)-(x351/x352));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x353 = 2623233U;
	int32_t x356 = 351697860;
	int32_t t78 = -224377;

    t78 = ((x353>x354)-(x355/x356));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x357 = 2;
	int16_t x358 = INT16_MIN;
	uint16_t x359 = 7325U;
	uint8_t x360 = UINT8_MAX;
	int32_t t79 = 897;

    t79 = ((x357>x358)-(x359/x360));

    if (t79 != -27) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -84;
	int16_t x362 = INT16_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t80 = 337194;

    t80 = ((x361>x362)-(x363/x364));

    if (t80 != 772) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x366 = 65U;
	int8_t x367 = -50;
	int32_t x368 = -1;

    t81 = ((x365>x366)-(x367/x368));

    if (t81 != -50) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MAX;
	static volatile int16_t x371 = INT16_MAX;
	volatile int32_t x372 = INT32_MIN;
	int32_t t82 = -39271467;

    t82 = ((x369>x370)-(x371/x372));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x375 = 227U;
	uint16_t x376 = 57U;
	int32_t t83 = -463504;

    t83 = ((x373>x374)-(x375/x376));

    if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MAX;
	int64_t x378 = 56164480LL;
	int64_t x379 = -1LL;
	int64_t t84 = 35093452916LL;

    t84 = ((x377>x378)-(x379/x380));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x381 = 1948U;
	uint8_t x382 = 57U;
	uint16_t x383 = 23594U;
	volatile int8_t x384 = INT8_MAX;
	volatile int32_t t85 = 187593;

    t85 = ((x381>x382)-(x383/x384));

    if (t85 != -184) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = INT32_MAX;
	int64_t x386 = -1LL;

    t86 = ((x385>x386)-(x387/x388));

    if (t86 != -8421503) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x389 = 32851U;
	int64_t x390 = -1LL;
	int16_t x392 = -1;
	volatile int32_t t87 = 113753985;

    t87 = ((x389>x390)-(x391/x392));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	int16_t x396 = 10915;
	int64_t t88 = 507890057373LL;

    t88 = ((x393>x394)-(x395/x396));

    if (t88 != 845018051933557LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x398 = -3340337LL;
	static int64_t x399 = -23LL;
	static int16_t x400 = -10;
	int64_t t89 = -18982368070645912LL;

    t89 = ((x397>x398)-(x399/x400));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 47709U;
	volatile uint32_t t90 = 364U;

    t90 = ((x401>x402)-(x403/x404));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x405 = 98;
	static uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -1;
	volatile int32_t t91 = -466745557;

    t91 = ((x405>x406)-(x407/x408));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x409 = INT8_MIN;
	int8_t x410 = 54;
	uint32_t x411 = 137U;
	int64_t x412 = INT64_MIN;

    t92 = ((x409>x410)-(x411/x412));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x413 = INT8_MIN;
	uint64_t x415 = 1801272186103LLU;
	int32_t x416 = -1;
	static volatile uint64_t t93 = 25216680390585LLU;

    t93 = ((x413>x414)-(x415/x416));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x417 = INT32_MIN;
	int64_t x420 = 242147895174LL;
	volatile int64_t t94 = 3886LL;

    t94 = ((x417>x418)-(x419/x420));

    if (t94 != 38089829LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = 0;
	int8_t x423 = INT8_MIN;
	int64_t x424 = INT64_MAX;

    t95 = ((x421>x422)-(x423/x424));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = -1;
	uint64_t x427 = 138288849478LLU;
	uint64_t t96 = 13188LLU;

    t96 = ((x425>x426)-(x427/x428));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MIN;
	int32_t x431 = -1;
	int8_t x432 = INT8_MIN;
	volatile int32_t t97 = 1;

    t97 = ((x429>x430)-(x431/x432));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x434 = INT16_MIN;
	int32_t x435 = 187525968;
	int16_t x436 = INT16_MIN;

    t98 = ((x433>x434)-(x435/x436));

    if (t98 != 5723) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = INT32_MIN;
	static int32_t x438 = INT32_MIN;
	int32_t x440 = 7216116;
	volatile int32_t t99 = -1;

    t99 = ((x437>x438)-(x439/x440));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x442 = INT8_MIN;
	static int32_t x443 = -555891722;
	uint32_t x444 = 4U;
	static volatile uint32_t t100 = 641U;

    t100 = ((x441>x442)-(x443/x444));

    if (t100 != 3360198403U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x448 = -1;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = ((x445>x446)-(x447/x448));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x449 = UINT32_MAX;
	int16_t x450 = INT16_MIN;
	volatile int32_t t102 = 0;

    t102 = ((x449>x450)-(x451/x452));

    if (t102 != 2341) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x453 = UINT16_MAX;
	int32_t x455 = -1;
	volatile int32_t t103 = -109;

    t103 = ((x453>x454)-(x455/x456));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x457 = 19575099;
	static int8_t x458 = -1;
	uint32_t x459 = 326458114U;
	volatile int32_t x460 = INT32_MAX;

    t104 = ((x457>x458)-(x459/x460));

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x461 = 7841029LLU;
	static uint16_t x462 = 7U;
	int64_t x463 = INT64_MIN;
	static int64_t t105 = -76280152LL;

    t105 = ((x461>x462)-(x463/x464));

    if (t105 != 4294967299LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = INT32_MAX;
	uint16_t x466 = UINT16_MAX;
	static uint32_t x467 = 143957U;
	int64_t t106 = -359006821501198925LL;

    t106 = ((x465>x466)-(x467/x468));

    if (t106 != -3LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = -2;
	volatile int64_t x470 = -3548966767456LL;
	uint64_t x471 = UINT64_MAX;
	volatile int8_t x472 = -35;
	uint64_t t107 = 11831884350007LLU;

    t107 = ((x469>x470)-(x471/x472));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x473 = 17LLU;
	int64_t x474 = INT64_MAX;
	static int64_t x475 = INT64_MAX;
	int64_t t108 = -11384078454374321LL;

    t108 = ((x473>x474)-(x475/x476));

    if (t108 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x477 = -14;
	static int64_t x478 = 121881LL;
	uint32_t x479 = 801405U;
	volatile int8_t x480 = 1;
	uint32_t t109 = 445U;

    t109 = ((x477>x478)-(x479/x480));

    if (t109 != 4294165891U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x481 = 3U;
	uint64_t x483 = 14436975480380LLU;
	int16_t x484 = 4;
	volatile uint64_t t110 = 574736920110210489LLU;

    t110 = ((x481>x482)-(x483/x484));

    if (t110 != 18446740464465681522LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x485 = 1;
	int16_t x487 = INT16_MIN;
	volatile int32_t t111 = -248389766;

    t111 = ((x485>x486)-(x487/x488));

    if (t111 != 2) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x489 = INT64_MIN;
	volatile uint32_t x491 = 16002U;
	volatile uint64_t t112 = 50070879LLU;

    t112 = ((x489>x490)-(x491/x492));

    if (t112 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x494 = 74U;
	uint16_t x495 = UINT16_MAX;
	uint32_t x496 = 2U;
	volatile uint32_t t113 = 1275U;

    t113 = ((x493>x494)-(x495/x496));

    if (t113 != 4294934529U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MIN;
	uint16_t x499 = 1U;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t114 = 31762;

    t114 = ((x497>x498)-(x499/x500));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x501 = 1132295U;
	int16_t x502 = 0;
	volatile int32_t x503 = 130230120;
	uint32_t x504 = 11U;
	uint32_t t115 = 957U;

    t115 = ((x501>x502)-(x503/x504));

    if (t115 != 4283128196U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x505 = INT32_MIN;
	volatile int32_t x507 = INT32_MIN;
	int32_t t116 = -128310;

    t116 = ((x505>x506)-(x507/x508));

    if (t116 != 46684428) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x509 = -35053242000558LL;
	uint8_t x510 = 8U;
	static int8_t x511 = INT8_MIN;

    t117 = ((x509>x510)-(x511/x512));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x513 = 0U;
	static int32_t x514 = INT32_MIN;
	volatile int64_t x515 = INT64_MIN;
	uint64_t x516 = 8622378996497371614LLU;
	volatile uint64_t t118 = 8783528373013LLU;

    t118 = ((x513>x514)-(x515/x516));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x519 = INT64_MIN;
	uint16_t x520 = 1250U;
	int64_t t119 = 86LL;

    t119 = ((x517>x518)-(x519/x520));

    if (t119 != 7378697629483821LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x522 = INT64_MIN;
	uint16_t x523 = 8378U;
	volatile uint8_t x524 = 109U;
	int32_t t120 = -233568067;

    t120 = ((x521>x522)-(x523/x524));

    if (t120 != -75) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x525 = INT64_MIN;
	volatile uint16_t x526 = 3U;
	int64_t t121 = -3570122LL;

    t121 = ((x525>x526)-(x527/x528));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x529 = INT8_MAX;
	volatile uint32_t x530 = 4U;
	static int32_t x531 = -1;
	static volatile int32_t t122 = -4055;

    t122 = ((x529>x530)-(x531/x532));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x533 = 2U;
	uint8_t x534 = 24U;
	int32_t x536 = INT32_MIN;
	volatile int32_t t123 = 18;

    t123 = ((x533>x534)-(x535/x536));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x537 = -1;
	int64_t x538 = 22044238418311698LL;
	int64_t x539 = -699LL;
	static volatile int64_t t124 = -3391241734357208LL;

    t124 = ((x537>x538)-(x539/x540));

    if (t124 != -5LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x541 = 27U;
	uint8_t x542 = 37U;
	int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MIN;
	volatile int32_t t125 = -218;

    t125 = ((x541>x542)-(x543/x544));

    if (t125 != 16777215) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x545 = 6084;
	int32_t x546 = INT32_MAX;
	uint64_t x547 = UINT64_MAX;
	int64_t x548 = INT64_MIN;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = ((x545>x546)-(x547/x548));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x551 = 26U;
	int8_t x552 = INT8_MIN;
	int32_t t127 = -64045856;

    t127 = ((x549>x550)-(x551/x552));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x553 = INT64_MIN;
	uint8_t x554 = 1U;
	int32_t x556 = INT32_MIN;

    t128 = ((x553>x554)-(x555/x556));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x557 = INT16_MIN;
	static uint64_t x558 = UINT64_MAX;
	volatile uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MIN;
	int32_t t129 = 2900249;

    t129 = ((x557>x558)-(x559/x560));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x561 = UINT16_MAX;
	int16_t x562 = INT16_MIN;
	int32_t x563 = -1;

    t130 = ((x561>x562)-(x563/x564));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x565 = UINT32_MAX;
	static int32_t x566 = INT32_MIN;
	static int32_t x567 = INT32_MIN;
	int32_t t131 = 422798424;

    t131 = ((x565>x566)-(x567/x568));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x569 = 255574754;
	volatile uint32_t x570 = 239701U;
	volatile int16_t x571 = INT16_MIN;
	int64_t x572 = INT64_MAX;
	int64_t t132 = -41LL;

    t132 = ((x569>x570)-(x571/x572));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = INT8_MAX;
	uint64_t x574 = 811125230LLU;
	uint32_t x575 = 205622256U;
	volatile int64_t x576 = 10869LL;
	int64_t t133 = 13810423LL;

    t133 = ((x573>x574)-(x575/x576));

    if (t133 != -18918LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = -235286267;
	uint8_t x578 = UINT8_MAX;
	uint16_t x580 = 8008U;
	int32_t t134 = -92949000;

    t134 = ((x577>x578)-(x579/x580));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x581 = 1382;
	int32_t x582 = 46112;
	int64_t x583 = -1LL;
	int16_t x584 = INT16_MIN;
	int64_t t135 = 27412149721449LL;

    t135 = ((x581>x582)-(x583/x584));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x585 = -1LL;
	int32_t x586 = INT32_MAX;
	int8_t x588 = INT8_MIN;
	static volatile uint64_t t136 = 332LLU;

    t136 = ((x585>x586)-(x587/x588));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x591 = INT64_MIN;
	volatile uint16_t x592 = 475U;
	int64_t t137 = 16337332LL;

    t137 = ((x589>x590)-(x591/x592));

    if (t137 != 19417625340746896LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x593 = 288689;
	int32_t x594 = INT32_MAX;
	int64_t x595 = INT64_MIN;
	int64_t x596 = 272786599285360LL;

    t138 = ((x593>x594)-(x595/x596));

    if (t138 != 33811LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x597 = INT64_MAX;
	int64_t x599 = INT64_MAX;

    t139 = ((x597>x598)-(x599/x600));

    if (t139 != -318047311615681923LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x602 = INT64_MAX;
	static int32_t x603 = 1;
	int8_t x604 = INT8_MIN;
	int32_t t140 = 896;

    t140 = ((x601>x602)-(x603/x604));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x605 = INT64_MIN;
	uint16_t x606 = 3402U;
	volatile uint16_t x607 = UINT16_MAX;
	int16_t x608 = 9;
	int32_t t141 = 398962;

    t141 = ((x605>x606)-(x607/x608));

    if (t141 != -7281) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = -1;
	int8_t x610 = INT8_MAX;
	volatile int16_t x611 = -1;
	volatile int8_t x612 = INT8_MIN;
	int32_t t142 = 156847266;

    t142 = ((x609>x610)-(x611/x612));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x613 = INT8_MAX;
	uint32_t x614 = 66580U;
	volatile int16_t x615 = INT16_MIN;
	volatile int32_t t143 = 25212260;

    t143 = ((x613>x614)-(x615/x616));

    if (t143 != 341) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x617 = 7;
	static int16_t x618 = INT16_MAX;
	int16_t x620 = -61;

    t144 = ((x617>x618)-(x619/x620));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x621 = -4825478252534LL;
	uint8_t x623 = 0U;
	int64_t t145 = 120902221957199076LL;

    t145 = ((x621>x622)-(x623/x624));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x625 = -1;
	int16_t x626 = INT16_MIN;
	uint8_t x627 = UINT8_MAX;
	uint8_t x628 = UINT8_MAX;
	int32_t t146 = 246526;

    t146 = ((x625>x626)-(x627/x628));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x629 = INT8_MIN;
	uint16_t x630 = 1U;
	static int16_t x631 = -2973;
	static int8_t x632 = -5;
	volatile int32_t t147 = -11172;

    t147 = ((x629>x630)-(x631/x632));

    if (t147 != -594) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x633 = 316955558751LL;
	uint8_t x635 = UINT8_MAX;
	int16_t x636 = INT16_MAX;
	volatile int32_t t148 = 1;

    t148 = ((x633>x634)-(x635/x636));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x637 = -14;
	uint16_t x638 = 965U;
	int64_t x639 = 17395790502405LL;
	uint8_t x640 = UINT8_MAX;

    t149 = ((x637>x638)-(x639/x640));

    if (t149 != -68218786283LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x641 = INT8_MAX;
	int16_t x642 = INT16_MAX;
	int64_t x643 = 7501LL;
	static int8_t x644 = INT8_MIN;
	volatile int64_t t150 = 1LL;

    t150 = ((x641>x642)-(x643/x644));

    if (t150 != 58LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x646 = 726U;
	int16_t x647 = INT16_MIN;
	static volatile uint64_t t151 = 39LLU;

    t151 = ((x645>x646)-(x647/x648));

    if (t151 != 18446744073707061875LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x649 = -1;
	int16_t x650 = 1712;
	static int16_t x652 = 10;
	volatile int32_t t152 = 1539997;

    t152 = ((x649>x650)-(x651/x652));

    if (t152 != 3276) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x654 = -2;
	uint16_t x655 = 1U;
	volatile int32_t t153 = 332252816;

    t153 = ((x653>x654)-(x655/x656));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x658 = 5543U;
	int8_t x660 = INT8_MIN;

    t154 = ((x657>x658)-(x659/x660));

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x661 = INT64_MAX;
	int32_t x664 = INT32_MIN;
	volatile int32_t t155 = 39662;

    t155 = ((x661>x662)-(x663/x664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x665 = -1;
	static uint32_t x667 = 28U;
	static volatile uint16_t x668 = UINT16_MAX;
	uint32_t t156 = 1832U;

    t156 = ((x665>x666)-(x667/x668));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x669 = -1;
	int64_t x670 = 3738333LL;
	int64_t x671 = INT64_MIN;
	uint16_t x672 = 177U;

    t157 = ((x669>x670)-(x671/x672));

    if (t157 != 52109446535902688LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x674 = INT64_MIN;
	int32_t x675 = -14368936;
	int64_t x676 = -560619394356657467LL;

    t158 = ((x673>x674)-(x675/x676));

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	int8_t x678 = INT8_MIN;
	int8_t x679 = INT8_MIN;
	int32_t t159 = 0;

    t159 = ((x677>x678)-(x679/x680));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MAX;
	uint16_t x684 = 2U;
	int32_t t160 = 361674;

    t160 = ((x681>x682)-(x683/x684));

    if (t160 != -6) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x686 = INT32_MAX;
	uint16_t x687 = 24665U;
	static int32_t x688 = INT32_MAX;
	volatile int32_t t161 = -65343240;

    t161 = ((x685>x686)-(x687/x688));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x689 = -1;
	static volatile int16_t x691 = INT16_MIN;
	volatile int32_t t162 = 7510695;

    t162 = ((x689>x690)-(x691/x692));

    if (t162 != 128) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x693 = INT64_MIN;
	int8_t x694 = INT8_MAX;
	static int32_t x696 = 15554;

    t163 = ((x693>x694)-(x695/x696));

    if (t163 != -1833LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x701 = INT16_MIN;
	static int16_t x702 = INT16_MAX;
	static int32_t x703 = INT32_MAX;
	volatile int32_t t164 = -786249;

    t164 = ((x701>x702)-(x703/x704));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x705 = -1;
	int64_t x706 = -49030060LL;
	int64_t x707 = INT64_MIN;
	int64_t t165 = 54685632LL;

    t165 = ((x705>x706)-(x707/x708));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x709 = 1927;
	volatile int8_t x710 = INT8_MAX;
	uint16_t x711 = UINT16_MAX;
	static int64_t x712 = 4812983LL;
	static volatile int64_t t166 = -1LL;

    t166 = ((x709>x710)-(x711/x712));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = INT16_MAX;
	static int32_t x715 = 17013;
	static volatile int32_t x716 = INT32_MIN;

    t167 = ((x713>x714)-(x715/x716));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x717 = 1035412209071257264LL;
	int64_t x718 = INT64_MIN;
	int16_t x719 = 120;
	static int64_t x720 = -1LL;
	static volatile int64_t t168 = -26137660833771435LL;

    t168 = ((x717>x718)-(x719/x720));

    if (t168 != 121LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x721 = UINT32_MAX;
	int8_t x722 = 3;
	int8_t x723 = -1;

    t169 = ((x721>x722)-(x723/x724));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x725 = 32U;
	static int8_t x727 = 31;
	uint16_t x728 = 42U;
	int32_t t170 = -10613;

    t170 = ((x725>x726)-(x727/x728));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x729 = INT32_MIN;
	static int64_t x730 = INT64_MIN;
	static int16_t x731 = -31;
	int16_t x732 = INT16_MIN;
	volatile int32_t t171 = 7;

    t171 = ((x729>x730)-(x731/x732));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x733 = -1;
	int16_t x734 = -18;
	int32_t x736 = -1;
	volatile int64_t t172 = -2816LL;

    t172 = ((x733>x734)-(x735/x736));

    if (t172 != -3593199LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x741 = -1;
	uint64_t x742 = UINT64_MAX;
	int64_t x743 = 1623LL;
	uint32_t x744 = UINT32_MAX;

    t173 = ((x741>x742)-(x743/x744));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x745 = UINT64_MAX;
	uint32_t x746 = 777734U;
	uint32_t x747 = 11U;
	static volatile int64_t x748 = -1LL;
	volatile int64_t t174 = 1413794575541229LL;

    t174 = ((x745>x746)-(x747/x748));

    if (t174 != 12LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x749 = 39U;
	uint64_t x750 = 477LLU;
	int16_t x751 = INT16_MIN;
	int32_t x752 = -1;

    t175 = ((x749>x750)-(x751/x752));

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x757 = 469424;
	volatile int64_t x758 = 439476LL;
	uint16_t x759 = 1U;
	static volatile int64_t x760 = -215LL;
	int64_t t176 = 22177959835LL;

    t176 = ((x757>x758)-(x759/x760));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x761 = INT8_MIN;
	static volatile uint16_t x762 = UINT16_MAX;
	uint32_t x764 = 38U;
	uint32_t t177 = 33819442U;

    t177 = ((x761>x762)-(x763/x764));

    if (t177 != 4181942704U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x765 = -3;
	int64_t x766 = INT64_MAX;
	int16_t x767 = 26;
	int32_t x768 = 1;

    t178 = ((x765>x766)-(x767/x768));

    if (t178 != -26) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x770 = -3;
	uint16_t x771 = 4U;
	int8_t x772 = INT8_MIN;
	volatile int32_t t179 = -131158271;

    t179 = ((x769>x770)-(x771/x772));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x773 = INT32_MAX;
	volatile uint16_t x774 = UINT16_MAX;
	int32_t x776 = INT32_MIN;
	volatile int32_t t180 = -7;

    t180 = ((x773>x774)-(x775/x776));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = -740;
	int8_t x779 = 2;
	static int32_t x780 = 14829;
	int32_t t181 = -1;

    t181 = ((x777>x778)-(x779/x780));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x781 = INT64_MIN;
	uint64_t x782 = UINT64_MAX;
	volatile int16_t x783 = INT16_MIN;
	volatile uint32_t x784 = 277U;

    t182 = ((x781>x782)-(x783/x784));

    if (t182 != 4279462118U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x785 = UINT16_MAX;
	static int32_t x786 = INT32_MIN;
	volatile int32_t t183 = -3932;

    t183 = ((x785>x786)-(x787/x788));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x789 = 2U;
	static uint8_t x791 = 2U;
	int64_t x792 = -2LL;
	volatile int64_t t184 = 298376167651004553LL;

    t184 = ((x789>x790)-(x791/x792));

    if (t184 != 2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x793 = UINT32_MAX;
	volatile int32_t x794 = 190;
	int8_t x796 = INT8_MIN;
	uint64_t t185 = 110LLU;

    t185 = ((x793>x794)-(x795/x796));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x797 = INT16_MIN;
	int64_t x798 = -3945466LL;
	static volatile int8_t x799 = 34;
	volatile int32_t t186 = 117;

    t186 = ((x797>x798)-(x799/x800));

    if (t186 != 35) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x801 = -1;
	int16_t x802 = 37;
	int64_t t187 = 4113621516513LL;

    t187 = ((x801>x802)-(x803/x804));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x805 = INT32_MIN;
	uint64_t x806 = 213362LLU;
	static volatile int16_t x807 = INT16_MAX;
	int32_t x808 = -1;
	volatile int32_t t188 = -3949645;

    t188 = ((x805>x806)-(x807/x808));

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x811 = 1;
	int16_t x812 = INT16_MAX;
	int32_t t189 = 5;

    t189 = ((x809>x810)-(x811/x812));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x813 = 5U;
	int8_t x814 = -1;
	volatile int16_t x815 = INT16_MIN;
	uint64_t t190 = 3308LLU;

    t190 = ((x813>x814)-(x815/x816));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x817 = -1LL;
	volatile int16_t x818 = INT16_MIN;
	int32_t x819 = -1;
	static uint64_t x820 = 103709797543272LLU;
	volatile uint64_t t191 = 21338658LLU;

    t191 = ((x817>x818)-(x819/x820));

    if (t191 != 18446744073709373749LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x821 = INT8_MIN;
	int16_t x822 = -14732;
	volatile int64_t x823 = INT64_MAX;
	volatile int32_t x824 = INT32_MAX;

    t192 = ((x821>x822)-(x823/x824));

    if (t192 != -4294967297LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x825 = -1LL;
	int32_t x826 = -1;
	int32_t x827 = INT32_MIN;
	static int64_t x828 = -448036443294747LL;
	volatile int64_t t193 = 30537751009LL;

    t193 = ((x825>x826)-(x827/x828));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x829 = 2U;
	static int8_t x830 = -1;
	int64_t x831 = INT64_MIN;
	int64_t x832 = INT64_MAX;
	int64_t t194 = -114089734793LL;

    t194 = ((x829>x830)-(x831/x832));

    if (t194 != 2LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x833 = 0;
	int32_t x834 = -1;
	uint64_t x835 = 171212298445LLU;
	volatile int32_t x836 = INT32_MIN;
	uint64_t t195 = 31975257183521LLU;

    t195 = ((x833>x834)-(x835/x836));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x837 = 1468U;
	static int32_t x838 = INT32_MIN;
	int32_t x840 = INT32_MIN;
	volatile int64_t t196 = -29787LL;

    t196 = ((x837>x838)-(x839/x840));

    if (t196 != -4294967295LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x841 = INT32_MIN;
	uint32_t x842 = 259330U;
	int32_t x843 = INT32_MIN;
	int32_t t197 = 207;

    t197 = ((x841>x842)-(x843/x844));

    if (t197 != -65535) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x845 = INT32_MIN;
	static int8_t x846 = INT8_MIN;
	static int16_t x847 = INT16_MAX;
	uint8_t x848 = UINT8_MAX;
	volatile int32_t t198 = -1997;

    t198 = ((x845>x846)-(x847/x848));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x850 = -1;
	int32_t x851 = INT32_MAX;
	int32_t x852 = INT32_MAX;
	volatile int32_t t199 = 857487756;

    t199 = ((x849>x850)-(x851/x852));

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

