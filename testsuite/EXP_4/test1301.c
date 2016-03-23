
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

static int32_t x2 = INT32_MIN;
static volatile uint64_t x7 = UINT64_MAX;
static uint64_t x31 = UINT64_MAX;
volatile int32_t t7 = 1;
int64_t x38 = INT64_MIN;
int16_t x39 = 289;
volatile int8_t x48 = INT8_MIN;
int32_t x58 = INT32_MIN;
int16_t x71 = 4;
int32_t x77 = -1;
volatile uint8_t x79 = 1U;
uint8_t x82 = 3U;
int8_t x84 = INT8_MIN;
static int16_t x89 = 11848;
static uint8_t x94 = 2U;
uint16_t x96 = UINT16_MAX;
uint8_t x102 = UINT8_MAX;
volatile int64_t x116 = -25LL;
static int16_t x117 = INT16_MIN;
int32_t x119 = 0;
uint32_t x120 = 103U;
static uint8_t x124 = UINT8_MAX;
int16_t x128 = -868;
static int8_t x130 = -1;
int32_t x138 = INT32_MIN;
int32_t x143 = -3;
static uint32_t x149 = 157294U;
int64_t x151 = -15695LL;
static volatile int8_t x162 = -1;
static int32_t x165 = -80;
volatile int64_t x166 = 453LL;
volatile int16_t x172 = -1;
int16_t x173 = 185;
uint64_t x184 = 4346018919371687604LLU;
volatile uint32_t x190 = 547U;
uint16_t x191 = UINT16_MAX;
static uint16_t x195 = UINT16_MAX;
int8_t x196 = -1;
uint64_t x201 = UINT64_MAX;
uint8_t x204 = UINT8_MAX;
static int8_t x206 = -1;
uint16_t x215 = UINT16_MAX;
uint16_t x217 = 1265U;
uint16_t x221 = UINT16_MAX;
int8_t x230 = INT8_MAX;
static volatile int16_t x231 = -2554;
static int32_t x232 = 7217;
int32_t t57 = -538;
static volatile int64_t t58 = 2LL;
static int16_t x237 = INT16_MAX;
int16_t x238 = -1;
static int8_t x240 = INT8_MIN;
uint64_t x241 = UINT64_MAX;
uint64_t x244 = 5657440000903LLU;
int8_t x248 = 62;
uint8_t x253 = UINT8_MAX;
int16_t x255 = INT16_MAX;
volatile uint32_t x256 = 18U;
volatile int32_t x259 = -1;
volatile int8_t x262 = INT8_MIN;
volatile uint64_t x263 = 3266967LLU;
int64_t t66 = INT64_MIN;
static int32_t x277 = INT32_MIN;
int16_t x279 = -1;
int32_t t70 = -8679958;
int16_t x287 = 174;
volatile uint64_t t71 = 1602379801431LLU;
int8_t x289 = INT8_MIN;
int8_t x297 = INT8_MIN;
volatile int32_t t74 = -312113133;
volatile uint8_t x307 = 2U;
volatile int8_t x309 = INT8_MAX;
int8_t x322 = INT8_MIN;
static uint16_t x324 = 742U;
int32_t x325 = INT32_MIN;
int64_t x326 = -15069131LL;
int8_t x329 = -1;
static int32_t t82 = 119;
volatile int32_t t83 = -6662;
int32_t t85 = -17022553;
static int8_t x345 = 5;
volatile int8_t x346 = INT8_MAX;
uint64_t x349 = 42342337LLU;
uint8_t x350 = UINT8_MAX;
int16_t x351 = -777;
static int16_t x355 = INT16_MIN;
volatile uint32_t t89 = UINT32_MAX;
volatile int16_t x363 = INT16_MIN;
int32_t t90 = 15278;
int32_t t92 = INT32_MIN;
static int16_t x375 = INT16_MIN;
int32_t x378 = INT32_MAX;
int64_t x388 = -1LL;
int8_t x408 = -10;
int32_t x409 = 1029553;
int16_t x411 = 0;
int32_t x413 = INT32_MIN;
int8_t x419 = INT8_MAX;
uint8_t x426 = 0U;
volatile int32_t x429 = -1;
int16_t x433 = 0;
uint8_t x440 = 6U;
volatile int32_t x442 = -1;
static int32_t t110 = -446570;
static volatile uint16_t x447 = 46U;
volatile int32_t t111 = 15;
int8_t x459 = INT8_MIN;
int8_t x464 = INT8_MAX;
int64_t x469 = INT64_MIN;
uint16_t x470 = UINT16_MAX;
int32_t x479 = INT32_MAX;
uint8_t x481 = 1U;
volatile int32_t t120 = 433;
static int16_t x497 = -1;
uint64_t x500 = 1495173914072208LLU;
static int32_t t125 = 156511729;
volatile uint8_t x511 = 1U;
static int8_t x517 = INT8_MAX;
int32_t x524 = 105215;
static volatile int32_t t133 = 4092;
volatile int32_t t136 = -24;
uint32_t x551 = 452963U;
volatile int32_t t137 = 51;
static int32_t x556 = INT32_MAX;
static int16_t x559 = INT16_MIN;
int64_t t139 = -20539LL;
static int64_t x567 = INT64_MAX;
uint32_t x568 = 1177U;
static int32_t t141 = 2142;
int32_t t143 = 2312;
uint16_t x578 = 72U;
volatile int64_t x583 = INT64_MAX;
static volatile uint64_t t146 = 40879785275814695LLU;
int64_t x592 = INT64_MIN;
int8_t x594 = INT8_MIN;
volatile int32_t x595 = -1;
static volatile int32_t t149 = -62237;
volatile int32_t x604 = INT32_MIN;
int64_t x612 = 13LL;
int16_t x615 = 10154;
static int32_t x617 = INT32_MAX;
volatile int32_t t154 = INT32_MAX;
uint32_t x622 = 1380U;
int16_t x626 = -3;
int8_t x632 = INT8_MIN;
uint16_t x644 = UINT16_MAX;
int8_t x645 = INT8_MIN;
uint32_t x648 = 1U;
int8_t x650 = -35;
volatile int16_t x651 = INT16_MAX;
int32_t t162 = INT32_MIN;
volatile int32_t t163 = INT32_MIN;
volatile int32_t t164 = -30;
int32_t t165 = -302888429;
static volatile uint8_t x665 = 23U;
volatile int32_t t166 = -19707049;
int64_t x669 = INT64_MIN;
static uint64_t x680 = UINT64_MAX;
int32_t t169 = -194;
int8_t x681 = -5;
volatile uint64_t x684 = 8033476LLU;
int16_t x695 = INT16_MAX;
volatile int64_t t173 = -32789226LL;
int8_t x700 = -1;
volatile int32_t t174 = 23;
uint32_t x701 = 1902284U;
int8_t x702 = INT8_MIN;
uint64_t x705 = 18985LLU;
uint32_t x724 = 583U;
uint64_t x726 = 158LLU;
uint8_t x729 = UINT8_MAX;
volatile int8_t x732 = -1;
static volatile int32_t t182 = 1;
static volatile int32_t t183 = -88736;
volatile int8_t x740 = INT8_MIN;
int64_t x742 = INT64_MAX;
static volatile uint16_t x744 = 159U;
volatile uint8_t x749 = 6U;
uint16_t x750 = 1681U;
int32_t x757 = INT32_MAX;
static int32_t x760 = INT32_MAX;
static int64_t x767 = INT64_MIN;
int8_t x770 = INT8_MIN;
uint8_t x771 = UINT8_MAX;
uint8_t x775 = 9U;
static int16_t x782 = INT16_MIN;
uint64_t x784 = 177170031134LLU;
volatile int32_t t195 = 511359;
uint16_t x788 = 26U;
uint16_t x792 = UINT16_MAX;
int64_t x797 = INT64_MAX;


void f0(void) {
    	uint8_t x1 = 126U;
	int8_t x3 = -13;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = 661267;

    t0 = (x1|(x2>(x3!=x4)));

    if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	static int32_t x6 = 0;
	uint64_t x8 = UINT64_MAX;
	static volatile uint32_t t1 = UINT32_MAX;

    t1 = (x5|(x6>(x7!=x8)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile int16_t x10 = 104;
	uint32_t x11 = 700U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -279541848;

    t2 = (x9|(x10>(x11!=x12)));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = 647645U;
	volatile int64_t t3 = INT64_MIN;

    t3 = (x13|(x14>(x15!=x16)));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 1806496661LL;
	int32_t x18 = INT32_MAX;
	static int32_t x19 = -3167;
	uint8_t x20 = UINT8_MAX;
	volatile int64_t t4 = 41608266823883559LL;

    t4 = (x17|(x18>(x19!=x20)));

    if (t4 != 1806496661LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = -1;
	volatile uint16_t x24 = 12U;
	volatile uint32_t t5 = UINT32_MAX;

    t5 = (x21|(x22>(x23!=x24)));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	static int16_t x26 = INT16_MAX;
	volatile int32_t x27 = INT32_MAX;
	static int32_t x28 = 72130858;
	static volatile int32_t t6 = 4453;

    t6 = (x25|(x26>(x27!=x28)));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int64_t x30 = 27643813LL;
	static int64_t x32 = 451685245698298LL;

    t7 = (x29|(x30>(x31!=x32)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int64_t x34 = -1LL;
	static int64_t x35 = INT64_MIN;
	uint8_t x36 = 1U;
	int64_t t8 = INT64_MIN;

    t8 = (x33|(x34>(x35!=x36)));

    if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -352666362LL;
	static int8_t x40 = 3;
	volatile int64_t t9 = -50061044718LL;

    t9 = (x37|(x38>(x39!=x40)));

    if (t9 != -352666362LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	volatile int8_t x43 = -28;
	volatile int32_t x44 = -1;
	int32_t t10 = INT32_MIN;

    t10 = (x41|(x42>(x43!=x44)));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = UINT64_MAX;
	volatile int16_t x46 = INT16_MIN;
	static int64_t x47 = -64456LL;
	static uint64_t t11 = UINT64_MAX;

    t11 = (x45|(x46>(x47!=x48)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 14U;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = 37U;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 6830;

    t12 = (x49|(x50>(x51!=x52)));

    if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	static uint16_t x55 = 183U;
	int64_t x56 = 345037LL;
	int32_t t13 = -163446;

    t13 = (x53|(x54>(x55!=x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 7790U;
	volatile uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 13330U;
	static volatile uint32_t t14 = 6639979U;

    t14 = (x57|(x58>(x59!=x60)));

    if (t14 != 7790U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 9U;
	int16_t x62 = INT16_MAX;
	static int32_t x63 = INT32_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -5;

    t15 = (x61|(x62>(x63!=x64)));

    if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	int8_t x66 = 0;
	volatile uint32_t x67 = UINT32_MAX;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = -14291886;

    t16 = (x65|(x66>(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	uint16_t x72 = 3885U;
	static volatile int32_t t17 = -30;

    t17 = (x69|(x70>(x71!=x72)));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = -1LL;
	volatile uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;
	int64_t t18 = -8LL;

    t18 = (x73|(x74>(x75!=x76)));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x78 = 135U;
	int8_t x80 = 1;
	volatile int32_t t19 = -263306969;

    t19 = (x77|(x78>(x79!=x80)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	volatile int8_t x83 = INT8_MIN;
	static volatile int32_t t20 = 10;

    t20 = (x81|(x82>(x83!=x84)));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 3U;
	static uint32_t x86 = 247330U;
	int32_t x87 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -1;

    t21 = (x85|(x86>(x87!=x88)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x90 = 612U;
	int32_t x91 = -1;
	static int64_t x92 = 395787831772817LL;
	int32_t t22 = -5;

    t22 = (x89|(x90>(x91!=x92)));

    if (t22 != 11849) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = 0;
	int8_t x95 = 1;
	static int32_t t23 = 14;

    t23 = (x93|(x94>(x95!=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -7835;
	uint32_t x98 = 760U;
	volatile int8_t x99 = -3;
	static uint64_t x100 = 986180321760LLU;
	volatile int32_t t24 = 10057;

    t24 = (x97|(x98>(x99!=x100)));

    if (t24 != -7835) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int8_t x103 = INT8_MAX;
	int32_t x104 = 7348;
	volatile int32_t t25 = -387;

    t25 = (x101|(x102>(x103!=x104)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	int64_t x106 = -2147127LL;
	int16_t x107 = INT16_MIN;
	uint64_t x108 = 2748520657568782LLU;
	static int32_t t26 = -340717248;

    t26 = (x105|(x106>(x107!=x108)));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = INT64_MAX;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = INT32_MAX;

    t27 = (x109|(x110>(x111!=x112)));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 594788111LLU;
	int64_t x114 = INT64_MAX;
	static uint64_t x115 = UINT64_MAX;
	uint64_t t28 = 1595841LLU;

    t28 = (x113|(x114>(x115!=x116)));

    if (t28 != 594788111LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x118 = -1;
	int32_t t29 = 0;

    t29 = (x117|(x118>(x119!=x120)));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	int64_t t30 = INT64_MIN;

    t30 = (x121|(x122>(x123!=x124)));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 14U;
	int16_t x126 = INT16_MIN;
	static int64_t x127 = INT64_MIN;
	int32_t t31 = 7;

    t31 = (x125|(x126>(x127!=x128)));

    if (t31 != 14) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	uint64_t x131 = 840581196LLU;
	int64_t x132 = 24LL;
	volatile int32_t t32 = -3386;

    t32 = (x129|(x130>(x131!=x132)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	volatile int16_t x136 = -1;
	int32_t t33 = INT32_MIN;

    t33 = (x133|(x134>(x135!=x136)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int32_t x140 = 197643087;
	static volatile int32_t t34 = 86514462;

    t34 = (x137|(x138>(x139!=x140)));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -7;
	volatile int16_t x142 = -1;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -55932;

    t35 = (x141|(x142>(x143!=x144)));

    if (t35 != -7) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 22;
	uint64_t x146 = UINT64_MAX;
	static uint8_t x147 = UINT8_MAX;
	uint32_t x148 = 4U;
	int32_t t36 = 120;

    t36 = (x145|(x146>(x147!=x148)));

    if (t36 != 23) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 309133951U;
	volatile uint32_t x152 = 2089672U;
	volatile uint32_t t37 = 1206193U;

    t37 = (x149|(x150>(x151!=x152)));

    if (t37 != 157295U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = -485596889;

    t38 = (x153|(x154>(x155!=x156)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	int16_t x158 = -6;
	static volatile int16_t x159 = 844;
	int32_t x160 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = (x157|(x158>(x159!=x160)));

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x161 = 26761813084137129LLU;
	static int8_t x163 = INT8_MIN;
	static int64_t x164 = 761964202567654LL;
	static uint64_t t40 = 2012LLU;

    t40 = (x161|(x162>(x163!=x164)));

    if (t40 != 26761813084137129LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x167 = 0U;
	static int32_t x168 = 1006;
	volatile int32_t t41 = -2460098;

    t41 = (x165|(x166>(x167!=x168)));

    if (t41 != -79) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = INT32_MIN;
	volatile int32_t t42 = 1118022;

    t42 = (x169|(x170>(x171!=x172)));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;
	volatile int32_t t43 = -14;

    t43 = (x173|(x174>(x175!=x176)));

    if (t43 != 185) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 12221494;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MAX;
	int32_t t44 = -196;

    t44 = (x177|(x178>(x179!=x180)));

    if (t44 != 12221495) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = 257891LL;
	static volatile int32_t t45 = INT32_MIN;

    t45 = (x181|(x182>(x183!=x184)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = INT64_MAX;
	uint64_t x186 = 8815688718525967803LLU;
	volatile int64_t x187 = -411542781LL;
	static int16_t x188 = INT16_MIN;
	int64_t t46 = INT64_MAX;

    t46 = (x185|(x186>(x187!=x188)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	int64_t t47 = -1588915625766327LL;

    t47 = (x189|(x190>(x191!=x192)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	volatile uint32_t x194 = 137894U;
	static int32_t t48 = -34;

    t48 = (x193|(x194>(x195!=x196)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 3U;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 1;

    t49 = (x197|(x198>(x199!=x200)));

    if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x201|(x202>(x203!=x204)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	int64_t x207 = -1LL;
	uint64_t x208 = 6019825686LLU;
	int64_t t51 = INT64_MAX;

    t51 = (x205|(x206>(x207!=x208)));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = 16U;
	static int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = -77238653;

    t52 = (x209|(x210>(x211!=x212)));

    if (t52 != 17) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 88U;
	uint32_t x214 = 626U;
	volatile uint8_t x216 = 59U;
	volatile int32_t t53 = 72136;

    t53 = (x213|(x214>(x215!=x216)));

    if (t53 != 89) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x218 = 1U;
	uint32_t x219 = 1133170U;
	int16_t x220 = -1;
	static volatile int32_t t54 = 399164128;

    t54 = (x217|(x218>(x219!=x220)));

    if (t54 != 1265) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	static int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MAX;
	int32_t t55 = 28571500;

    t55 = (x221|(x222>(x223!=x224)));

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 1500901758U;
	int64_t x227 = -12569493LL;
	static uint64_t x228 = 2301LLU;
	volatile int32_t t56 = 1;

    t56 = (x225|(x226>(x227!=x228)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 0;

    t57 = (x229|(x230>(x231!=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -198283LL;
	int8_t x234 = INT8_MIN;
	static int64_t x235 = INT64_MAX;
	int32_t x236 = -1;

    t58 = (x233|(x234>(x235!=x236)));

    if (t58 != -198283LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x239 = UINT64_MAX;
	volatile int32_t t59 = -1041266;

    t59 = (x237|(x238>(x239!=x240)));

    if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x242 = 21174LL;
	int32_t x243 = 2;
	static volatile uint64_t t60 = UINT64_MAX;

    t60 = (x241|(x242>(x243!=x244)));

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x245 = 28U;
	int32_t x246 = INT32_MIN;
	static int32_t x247 = INT32_MAX;
	int32_t t61 = -32726;

    t61 = (x245|(x246>(x247!=x248)));

    if (t61 != 28) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MAX;
	int64_t x250 = -43493889172025LL;
	uint16_t x251 = 13U;
	volatile int32_t x252 = -191;
	static volatile int32_t t62 = 1757;

    t62 = (x249|(x250>(x251!=x252)));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = 437;
	int32_t t63 = -1;

    t63 = (x253|(x254>(x255!=x256)));

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -6;
	int64_t x258 = 19813461095LL;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -1;

    t64 = (x257|(x258>(x259!=x260)));

    if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = INT64_MIN;
	int32_t x264 = INT32_MIN;
	volatile int64_t t65 = INT64_MIN;

    t65 = (x261|(x262>(x263!=x264)));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MIN;
	int8_t x267 = 4;
	int32_t x268 = INT32_MAX;

    t66 = (x265|(x266>(x267!=x268)));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x269 = UINT64_MAX;
	volatile int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	int8_t x272 = 1;
	static uint64_t t67 = UINT64_MAX;

    t67 = (x269|(x270>(x271!=x272)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int64_t x274 = -1LL;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	int32_t t68 = INT32_MIN;

    t68 = (x273|(x274>(x275!=x276)));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = UINT16_MAX;
	volatile uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -150191035;

    t69 = (x277|(x278>(x279!=x280)));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x282 = 1473313554251641614LL;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = 7;

    t70 = (x281|(x282>(x283!=x284)));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = 1109496183643325LLU;
	int32_t x286 = 3;
	uint64_t x288 = 97320852LLU;

    t71 = (x285|(x286>(x287!=x288)));

    if (t71 != 1109496183643325LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -1;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = -255;

    t72 = (x289|(x290>(x291!=x292)));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x293 = 291395027768936LLU;
	static int64_t x294 = -153213LL;
	static int8_t x295 = INT8_MAX;
	uint64_t x296 = 1613537LLU;
	static volatile uint64_t t73 = 59442LLU;

    t73 = (x293|(x294>(x295!=x296)));

    if (t73 != 291395027768936LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x298 = 3577U;
	int32_t x299 = -1;
	static int16_t x300 = INT16_MIN;

    t74 = (x297|(x298>(x299!=x300)));

    if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -1;
	static int64_t x302 = INT64_MIN;
	int16_t x303 = 1;
	uint8_t x304 = 17U;
	int32_t t75 = 1666609;

    t75 = (x301|(x302>(x303!=x304)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	static uint32_t x308 = 9462306U;
	static volatile int32_t t76 = 963;

    t76 = (x305|(x306>(x307!=x308)));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = -1;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -8481094;

    t77 = (x309|(x310>(x311!=x312)));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MAX;
	volatile uint16_t x316 = UINT16_MAX;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = (x313|(x314>(x315!=x316)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MIN;
	static int16_t x318 = INT16_MIN;
	uint16_t x319 = UINT16_MAX;
	int16_t x320 = -6758;
	static volatile int32_t t79 = -2;

    t79 = (x317|(x318>(x319!=x320)));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	int32_t t80 = -88510563;

    t80 = (x321|(x322>(x323!=x324)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x327 = -1;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t81 = INT32_MIN;

    t81 = (x325|(x326>(x327!=x328)));

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x330 = 2U;
	volatile int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;

    t82 = (x329|(x330>(x331!=x332)));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 2003968LLU;
	static int64_t x335 = -1LL;
	static int32_t x336 = -1;

    t83 = (x333|(x334>(x335!=x336)));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = UINT64_MAX;
	uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 45U;
	uint32_t x340 = 4U;
	uint64_t t84 = UINT64_MAX;

    t84 = (x337|(x338>(x339!=x340)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x341 = -1;
	volatile int8_t x342 = -1;
	static uint8_t x343 = 5U;
	static int16_t x344 = -96;

    t85 = (x341|(x342>(x343!=x344)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x347 = -1;
	static int64_t x348 = -1969011LL;
	int32_t t86 = 1110619;

    t86 = (x345|(x346>(x347!=x348)));

    if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x352 = -514895560;
	volatile uint64_t t87 = 1610399554033LLU;

    t87 = (x349|(x350>(x351!=x352)));

    if (t87 != 42342337LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	volatile uint16_t x354 = 363U;
	volatile uint64_t x356 = 284035783233831789LLU;
	static volatile int32_t t88 = 16607;

    t88 = (x353|(x354>(x355!=x356)));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	volatile int16_t x358 = INT16_MIN;
	static uint32_t x359 = UINT32_MAX;
	int64_t x360 = 431977784LL;

    t89 = (x357|(x358>(x359!=x360)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	int64_t x362 = 448LL;
	int64_t x364 = INT64_MAX;

    t90 = (x361|(x362>(x363!=x364)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MAX;
	uint64_t x367 = 20476664107765LLU;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t91 = -1554473LL;

    t91 = (x365|(x366>(x367!=x368)));

    if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x370 = -1;
	volatile int16_t x371 = INT16_MAX;
	uint64_t x372 = 232611031310LLU;

    t92 = (x369|(x370>(x371!=x372)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 0U;
	uint32_t x374 = UINT32_MAX;
	int64_t x376 = -1LL;
	static int32_t t93 = 5;

    t93 = (x373|(x374>(x375!=x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 51827507U;
	volatile int32_t t94 = INT32_MAX;

    t94 = (x377|(x378>(x379!=x380)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = -1LL;
	static volatile uint32_t x382 = 22U;
	volatile uint64_t x383 = 33LLU;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t95 = -79LL;

    t95 = (x381|(x382>(x383!=x384)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = -1LL;
	int8_t x386 = 38;
	volatile int32_t x387 = -181;
	volatile int64_t t96 = 104127846920LL;

    t96 = (x385|(x386>(x387!=x388)));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 359727214U;
	uint8_t x390 = UINT8_MAX;
	volatile int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MAX;
	static volatile uint32_t t97 = 20U;

    t97 = (x389|(x390>(x391!=x392)));

    if (t97 != 359727215U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MAX;
	static uint16_t x394 = 12329U;
	int16_t x395 = 3;
	volatile int8_t x396 = INT8_MAX;
	volatile int64_t t98 = INT64_MAX;

    t98 = (x393|(x394>(x395!=x396)));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int32_t x398 = 1;
	int32_t x399 = -1;
	static volatile uint64_t x400 = 5153957LLU;
	int32_t t99 = INT32_MIN;

    t99 = (x397|(x398>(x399!=x400)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int16_t x402 = 30;
	uint32_t x403 = 400817373U;
	int64_t x404 = INT64_MIN;
	volatile int64_t t100 = -82787LL;

    t100 = (x401|(x402>(x403!=x404)));

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -4;
	volatile uint16_t x406 = 101U;
	volatile int16_t x407 = INT16_MIN;
	static volatile int32_t t101 = 190;

    t101 = (x405|(x406>(x407!=x408)));

    if (t101 != -3) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x410 = INT8_MIN;
	int8_t x412 = 42;
	volatile int32_t t102 = 2;

    t102 = (x409|(x410>(x411!=x412)));

    if (t102 != 1029553) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = INT64_MAX;
	static int16_t x415 = -1;
	int32_t x416 = INT32_MIN;
	volatile int32_t t103 = 1;

    t103 = (x413|(x414>(x415!=x416)));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -11217;
	volatile int16_t x418 = INT16_MIN;
	int32_t x420 = -164301027;
	static int32_t t104 = 185457;

    t104 = (x417|(x418>(x419!=x420)));

    if (t104 != -11217) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	uint8_t x422 = 10U;
	volatile uint8_t x423 = 89U;
	volatile uint64_t x424 = UINT64_MAX;
	volatile int32_t t105 = -6292;

    t105 = (x421|(x422>(x423!=x424)));

    if (t105 != -2147483647) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = INT16_MIN;
	volatile int16_t x427 = INT16_MIN;
	static volatile int32_t x428 = INT32_MAX;
	int32_t t106 = 12764;

    t106 = (x425|(x426>(x427!=x428)));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = UINT8_MAX;
	int8_t x431 = INT8_MIN;
	uint64_t x432 = 124LLU;
	static int32_t t107 = 321013168;

    t107 = (x429|(x430>(x431!=x432)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = 609;
	uint8_t x436 = 14U;
	volatile int32_t t108 = 3;

    t108 = (x433|(x434>(x435!=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 112U;
	static volatile int32_t x438 = 326073;
	int16_t x439 = INT16_MIN;
	int32_t t109 = 53168;

    t109 = (x437|(x438>(x439!=x440)));

    if (t109 != 113) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	int16_t x443 = -649;
	volatile int16_t x444 = 1;

    t110 = (x441|(x442>(x443!=x444)));

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	uint64_t x446 = UINT64_MAX;
	int32_t x448 = INT32_MIN;

    t111 = (x445|(x446>(x447!=x448)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int8_t x450 = INT8_MAX;
	volatile uint32_t x451 = UINT32_MAX;
	static uint64_t x452 = 266157279715LLU;
	static int32_t t112 = 47986920;

    t112 = (x449|(x450>(x451!=x452)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	int16_t x454 = -1;
	int16_t x455 = INT16_MAX;
	volatile int8_t x456 = INT8_MAX;
	int32_t t113 = -3614042;

    t113 = (x453|(x454>(x455!=x456)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint64_t x457 = 3251418231LLU;
	int32_t x458 = INT32_MIN;
	uint16_t x460 = UINT16_MAX;
	volatile uint64_t t114 = 183080787LLU;

    t114 = (x457|(x458>(x459!=x460)));

    if (t114 != 3251418231LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 2U;
	static int32_t x462 = 235382331;
	uint8_t x463 = UINT8_MAX;
	int32_t t115 = -513907838;

    t115 = (x461|(x462>(x463!=x464)));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	int16_t x466 = INT16_MIN;
	volatile uint64_t x467 = UINT64_MAX;
	int32_t x468 = INT32_MAX;
	int32_t t116 = INT32_MAX;

    t116 = (x465|(x466>(x467!=x468)));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x471 = INT64_MAX;
	int8_t x472 = INT8_MIN;
	int64_t t117 = 3932684059951947743LL;

    t117 = (x469|(x470>(x471!=x472)));

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = INT8_MAX;
	int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MAX;
	volatile int32_t t118 = -2572995;

    t118 = (x473|(x474>(x475!=x476)));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	int32_t x478 = -70002852;
	static int8_t x480 = INT8_MIN;
	int32_t t119 = -448;

    t119 = (x477|(x478>(x479!=x480)));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x482 = 837818;
	static uint8_t x483 = UINT8_MAX;
	int8_t x484 = INT8_MAX;

    t120 = (x481|(x482>(x483!=x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 20U;
	int8_t x486 = INT8_MIN;
	int32_t x487 = 84043272;
	volatile uint32_t x488 = 4U;
	volatile int32_t t121 = -17;

    t121 = (x485|(x486>(x487!=x488)));

    if (t121 != 20) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int8_t x490 = 9;
	volatile int64_t x491 = -3885243538100042287LL;
	int16_t x492 = -1;
	volatile int32_t t122 = -53006;

    t122 = (x489|(x490>(x491!=x492)));

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -251406571598609LL;
	int8_t x494 = -18;
	int8_t x495 = INT8_MIN;
	static uint16_t x496 = UINT16_MAX;
	volatile int64_t t123 = -19376559692LL;

    t123 = (x493|(x494>(x495!=x496)));

    if (t123 != -251406571598609LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x498 = 14;
	uint32_t x499 = 218719166U;
	static int32_t t124 = 522722405;

    t124 = (x497|(x498>(x499!=x500)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	int8_t x502 = -1;
	static volatile uint8_t x503 = 0U;
	volatile int32_t x504 = 497354;

    t125 = (x501|(x502>(x503!=x504)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = 24158U;
	int8_t x506 = INT8_MAX;
	uint16_t x507 = UINT16_MAX;
	int64_t x508 = -1395755LL;
	volatile uint32_t t126 = 147U;

    t126 = (x505|(x506>(x507!=x508)));

    if (t126 != 24159U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	int8_t x510 = -1;
	volatile int64_t x512 = INT64_MIN;
	static volatile int32_t t127 = 1807004;

    t127 = (x509|(x510>(x511!=x512)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x513 = 4U;
	volatile int8_t x514 = -1;
	static int32_t x515 = INT32_MAX;
	uint64_t x516 = UINT64_MAX;
	volatile int32_t t128 = 257;

    t128 = (x513|(x514>(x515!=x516)));

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x518 = INT32_MAX;
	int64_t x519 = INT64_MIN;
	uint8_t x520 = UINT8_MAX;
	int32_t t129 = -6682;

    t129 = (x517|(x518>(x519!=x520)));

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = INT16_MIN;
	static uint16_t x522 = UINT16_MAX;
	static int32_t x523 = -1;
	volatile int32_t t130 = 49;

    t130 = (x521|(x522>(x523!=x524)));

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	uint16_t x526 = 1U;
	uint16_t x527 = 7U;
	uint64_t x528 = 8874332455LLU;
	int32_t t131 = 764932120;

    t131 = (x525|(x526>(x527!=x528)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	int16_t x530 = -1;
	uint16_t x531 = 15994U;
	volatile int32_t x532 = INT32_MAX;
	static volatile int32_t t132 = -4985;

    t132 = (x529|(x530>(x531!=x532)));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 5U;
	uint32_t x534 = 171665852U;
	static int16_t x535 = 467;
	int16_t x536 = INT16_MIN;

    t133 = (x533|(x534>(x535!=x536)));

    if (t133 != 5) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 10U;
	uint16_t x538 = UINT16_MAX;
	int8_t x539 = -1;
	volatile int16_t x540 = -1;
	int32_t t134 = -3424;

    t134 = (x537|(x538>(x539!=x540)));

    if (t134 != 11) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 11125027296LLU;
	int16_t x542 = INT16_MAX;
	static volatile uint32_t x543 = 35025U;
	uint64_t x544 = 7156565532410334LLU;
	volatile uint64_t t135 = 300805545LLU;

    t135 = (x541|(x542>(x543!=x544)));

    if (t135 != 11125027297LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x545 = 7U;
	static volatile int32_t x546 = -1;
	int8_t x547 = 0;
	volatile int32_t x548 = INT32_MAX;

    t136 = (x545|(x546>(x547!=x548)));

    if (t136 != 7) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x549 = INT8_MIN;
	int8_t x550 = 8;
	static uint8_t x552 = 2U;

    t137 = (x549|(x550>(x551!=x552)));

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MAX;
	uint64_t x554 = UINT64_MAX;
	uint8_t x555 = 2U;
	int32_t t138 = INT32_MAX;

    t138 = (x553|(x554>(x555!=x556)));

    if (t138 != INT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	int32_t x558 = INT32_MAX;
	int64_t x560 = INT64_MAX;

    t139 = (x557|(x558>(x559!=x560)));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MAX;
	static int32_t x562 = INT32_MIN;
	static uint32_t x563 = 250124534U;
	uint8_t x564 = 105U;
	volatile int32_t t140 = INT32_MAX;

    t140 = (x561|(x562>(x563!=x564)));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint8_t x566 = 6U;

    t141 = (x565|(x566>(x567!=x568)));

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x569 = UINT16_MAX;
	int32_t x570 = INT32_MAX;
	volatile int8_t x571 = -1;
	int64_t x572 = INT64_MIN;
	int32_t t142 = 0;

    t142 = (x569|(x570>(x571!=x572)));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MAX;
	volatile int16_t x574 = INT16_MAX;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = INT16_MIN;

    t143 = (x573|(x574>(x575!=x576)));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 2017;
	volatile int8_t x579 = INT8_MAX;
	volatile int32_t x580 = INT32_MIN;
	int32_t t144 = -1;

    t144 = (x577|(x578>(x579!=x580)));

    if (t144 != 2017) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x581 = 439U;
	static uint32_t x582 = UINT32_MAX;
	volatile uint32_t x584 = UINT32_MAX;
	int32_t t145 = 32;

    t145 = (x581|(x582>(x583!=x584)));

    if (t145 != 439) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 232553614535920LLU;
	int8_t x586 = -1;
	static int64_t x587 = -1LL;
	static uint32_t x588 = UINT32_MAX;

    t146 = (x585|(x586>(x587!=x588)));

    if (t146 != 232553614535920LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	uint32_t x590 = 7U;
	int64_t x591 = INT64_MIN;
	int32_t t147 = -27536607;

    t147 = (x589|(x590>(x591!=x592)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = -1LL;
	volatile uint64_t x596 = 28268LLU;
	int64_t t148 = 463698921581247LL;

    t148 = (x593|(x594>(x595!=x596)));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	int64_t x598 = INT64_MIN;
	uint16_t x599 = 8U;
	uint64_t x600 = 1504697000LLU;

    t149 = (x597|(x598>(x599!=x600)));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 311091LLU;
	static volatile int64_t x602 = 1196236LL;
	static int8_t x603 = INT8_MIN;
	volatile uint64_t t150 = 3772094LLU;

    t150 = (x601|(x602>(x603!=x604)));

    if (t150 != 311091LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 0U;
	uint8_t x606 = 1U;
	volatile int16_t x607 = -812;
	volatile int64_t x608 = INT64_MIN;
	static int32_t t151 = 40;

    t151 = (x605|(x606>(x607!=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MIN;
	int32_t x610 = 0;
	int32_t x611 = -37;
	int32_t t152 = -175271068;

    t152 = (x609|(x610>(x611!=x612)));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MAX;
	int16_t x614 = 161;
	int8_t x616 = INT8_MIN;
	volatile int32_t t153 = INT32_MAX;

    t153 = (x613|(x614>(x615!=x616)));

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x618 = INT64_MAX;
	int8_t x619 = -60;
	int8_t x620 = INT8_MIN;

    t154 = (x617|(x618>(x619!=x620)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = INT64_MIN;
	uint32_t x623 = 29959U;
	int16_t x624 = INT16_MAX;
	static volatile int64_t t155 = 1LL;

    t155 = (x621|(x622>(x623!=x624)));

    if (t155 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	static int8_t x627 = -30;
	int32_t x628 = -1;
	int32_t t156 = INT32_MIN;

    t156 = (x625|(x626>(x627!=x628)));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = 0;
	int16_t x630 = INT16_MIN;
	int8_t x631 = INT8_MAX;
	int32_t t157 = 79626062;

    t157 = (x629|(x630>(x631!=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = 402284640U;
	int32_t x634 = -33508648;
	int16_t x635 = -1;
	int32_t x636 = -444;
	uint32_t t158 = 4598U;

    t158 = (x633|(x634>(x635!=x636)));

    if (t158 != 402284640U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = UINT16_MAX;
	static int16_t x638 = INT16_MIN;
	int16_t x639 = 4;
	uint8_t x640 = 25U;
	int32_t t159 = -5;

    t159 = (x637|(x638>(x639!=x640)));

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	uint32_t x642 = UINT32_MAX;
	uint8_t x643 = 48U;
	static int32_t t160 = INT32_MAX;

    t160 = (x641|(x642>(x643!=x644)));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = INT8_MIN;
	static int16_t x647 = INT16_MIN;
	int32_t t161 = 9;

    t161 = (x645|(x646>(x647!=x648)));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	volatile int64_t x652 = -1LL;

    t162 = (x649|(x650>(x651!=x652)));

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = INT32_MIN;
	int8_t x654 = INT8_MIN;
	static int64_t x655 = -1LL;
	static int64_t x656 = INT64_MIN;

    t163 = (x653|(x654>(x655!=x656)));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -22;
	volatile int8_t x658 = INT8_MIN;
	uint16_t x659 = 577U;
	static int16_t x660 = INT16_MIN;

    t164 = (x657|(x658>(x659!=x660)));

    if (t164 != -22) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MAX;
	int32_t x662 = INT32_MAX;
	uint64_t x663 = UINT64_MAX;
	volatile int8_t x664 = INT8_MAX;

    t165 = (x661|(x662>(x663!=x664)));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x666 = INT64_MAX;
	static int64_t x667 = INT64_MIN;
	static uint8_t x668 = 13U;

    t166 = (x665|(x666>(x667!=x668)));

    if (t166 != 23) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x670 = 750U;
	uint16_t x671 = 0U;
	int32_t x672 = -1;
	int64_t t167 = -1LL;

    t167 = (x669|(x670>(x671!=x672)));

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	static int8_t x674 = 1;
	uint32_t x675 = UINT32_MAX;
	uint16_t x676 = 155U;
	static int64_t t168 = INT64_MIN;

    t168 = (x673|(x674>(x675!=x676)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	uint64_t x678 = 196725997380804049LLU;
	static int32_t x679 = INT32_MIN;

    t169 = (x677|(x678>(x679!=x680)));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = -986984;
	int16_t x683 = -12;
	static int32_t t170 = 23;

    t170 = (x681|(x682>(x683!=x684)));

    if (t170 != -5) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 30LLU;
	int8_t x686 = INT8_MIN;
	uint16_t x687 = UINT16_MAX;
	static volatile int8_t x688 = INT8_MAX;
	volatile uint64_t t171 = 37907054686446893LLU;

    t171 = (x685|(x686>(x687!=x688)));

    if (t171 != 30LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 588U;
	uint64_t x690 = 969LLU;
	int32_t x691 = INT32_MIN;
	static uint64_t x692 = UINT64_MAX;
	int32_t t172 = 163340369;

    t172 = (x689|(x690>(x691!=x692)));

    if (t172 != 589) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = -1LL;
	static int8_t x694 = -3;
	int32_t x696 = INT32_MAX;

    t173 = (x693|(x694>(x695!=x696)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 0U;
	int8_t x698 = INT8_MAX;
	static uint64_t x699 = 3783206LLU;

    t174 = (x697|(x698>(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x703 = UINT64_MAX;
	uint64_t x704 = 15LLU;
	volatile uint32_t t175 = 55U;

    t175 = (x701|(x702>(x703!=x704)));

    if (t175 != 1902284U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x706 = UINT8_MAX;
	static volatile int16_t x707 = -1;
	uint16_t x708 = 9U;
	uint64_t t176 = 43LLU;

    t176 = (x705|(x706>(x707!=x708)));

    if (t176 != 18985LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -1;
	volatile int16_t x710 = -1;
	uint16_t x711 = UINT16_MAX;
	volatile int32_t x712 = INT32_MIN;
	volatile int32_t t177 = -25;

    t177 = (x709|(x710>(x711!=x712)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	int16_t x714 = 11726;
	uint16_t x715 = UINT16_MAX;
	int64_t x716 = INT64_MIN;
	int32_t t178 = -6613;

    t178 = (x713|(x714>(x715!=x716)));

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 4571591LLU;
	int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;
	int16_t x720 = INT16_MIN;
	volatile uint64_t t179 = 16898704615LLU;

    t179 = (x717|(x718>(x719!=x720)));

    if (t179 != 4571591LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = INT32_MIN;
	uint16_t x723 = UINT16_MAX;
	static volatile uint32_t t180 = UINT32_MAX;

    t180 = (x721|(x722>(x723!=x724)));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = 244704634LL;
	int8_t x727 = 1;
	volatile uint32_t x728 = UINT32_MAX;
	int64_t t181 = -2096461512625LL;

    t181 = (x725|(x726>(x727!=x728)));

    if (t181 != 244704635LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x730 = 2165212U;
	static int8_t x731 = 12;

    t182 = (x729|(x730>(x731!=x732)));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	uint16_t x734 = 84U;
	int64_t x735 = INT64_MIN;
	volatile int64_t x736 = -1LL;

    t183 = (x733|(x734>(x735!=x736)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 2017455340LLU;
	int16_t x738 = -1;
	int8_t x739 = INT8_MIN;
	uint64_t t184 = 870LLU;

    t184 = (x737|(x738>(x739!=x740)));

    if (t184 != 2017455340LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = INT32_MIN;
	int16_t x743 = INT16_MIN;
	static volatile int32_t t185 = 12718;

    t185 = (x741|(x742>(x743!=x744)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x745 = 6879U;
	int32_t x746 = 0;
	volatile int8_t x747 = INT8_MIN;
	uint64_t x748 = 22406673136695815LLU;
	static int32_t t186 = -885230;

    t186 = (x745|(x746>(x747!=x748)));

    if (t186 != 6879) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x751 = 5040;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t187 = 955408623;

    t187 = (x749|(x750>(x751!=x752)));

    if (t187 != 7) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -1;
	volatile uint32_t x754 = UINT32_MAX;
	static int8_t x755 = INT8_MAX;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -327;

    t188 = (x753|(x754>(x755!=x756)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x758 = 127433892LLU;
	volatile int64_t x759 = -1LL;
	volatile int32_t t189 = INT32_MAX;

    t189 = (x757|(x758>(x759!=x760)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = INT64_MIN;
	int64_t x762 = -1LL;
	uint8_t x763 = 1U;
	int8_t x764 = INT8_MAX;
	int64_t t190 = INT64_MIN;

    t190 = (x761|(x762>(x763!=x764)));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = 14U;
	volatile uint16_t x766 = UINT16_MAX;
	uint8_t x768 = 1U;
	int32_t t191 = 23;

    t191 = (x765|(x766>(x767!=x768)));

    if (t191 != 15) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	static int8_t x772 = 0;
	static volatile int32_t t192 = INT32_MIN;

    t192 = (x769|(x770>(x771!=x772)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = INT16_MAX;
	int64_t x774 = INT64_MAX;
	uint8_t x776 = UINT8_MAX;
	static int32_t t193 = -706025248;

    t193 = (x773|(x774>(x775!=x776)));

    if (t193 != 32767) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile uint8_t x778 = 1U;
	int8_t x779 = INT8_MIN;
	uint8_t x780 = 35U;
	int32_t t194 = -12;

    t194 = (x777|(x778>(x779!=x780)));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 3U;
	uint8_t x783 = UINT8_MAX;

    t195 = (x781|(x782>(x783!=x784)));

    if (t195 != 3) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x785 = UINT16_MAX;
	uint64_t x786 = UINT64_MAX;
	uint32_t x787 = 980681U;
	volatile int32_t t196 = 987975416;

    t196 = (x785|(x786>(x787!=x788)));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	uint64_t x790 = 189LLU;
	uint32_t x791 = 5U;
	static uint64_t t197 = UINT64_MAX;

    t197 = (x789|(x790>(x791!=x792)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 413LL;
	volatile uint32_t x794 = UINT32_MAX;
	uint64_t x795 = 555363434398455989LLU;
	int16_t x796 = 483;
	volatile int64_t t198 = 478670642812240769LL;

    t198 = (x793|(x794>(x795!=x796)));

    if (t198 != 413LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = 50987;
	uint64_t x799 = UINT64_MAX;
	uint8_t x800 = 0U;
	volatile int64_t t199 = INT64_MAX;

    t199 = (x797|(x798>(x799!=x800)));

    if (t199 != INT64_MAX) { NG(); } else { ; }
	
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

