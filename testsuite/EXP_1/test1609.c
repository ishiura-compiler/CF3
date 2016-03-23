
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

int64_t x1 = INT64_MIN;
int16_t x2 = INT16_MIN;
int8_t x4 = -1;
volatile int8_t x6 = INT8_MIN;
volatile uint32_t x8 = 60202U;
volatile uint64_t t1 = 13833LLU;
int32_t x22 = INT32_MIN;
volatile uint8_t x25 = 2U;
int64_t x28 = INT64_MIN;
static int32_t x29 = INT32_MIN;
int16_t x36 = -1;
uint64_t t10 = 247768603LLU;
int32_t x47 = INT32_MIN;
volatile uint64_t t12 = 321431994947247327LLU;
int64_t x56 = INT64_MIN;
uint16_t x58 = 390U;
int8_t x63 = -16;
int16_t x66 = INT16_MIN;
int16_t x78 = INT16_MAX;
static int16_t x81 = 15;
uint32_t t21 = 7U;
volatile int32_t x95 = -1;
volatile int32_t t25 = -18976;
int16_t x106 = 592;
static volatile int16_t x107 = 0;
int64_t x109 = -1LL;
static uint64_t x111 = 2035209LLU;
uint64_t x121 = 19458627LLU;
uint64_t t30 = 5165LLU;
volatile int32_t t31 = 67050;
uint64_t x133 = 1LLU;
static volatile int32_t t33 = -22054554;
volatile uint64_t x137 = 4056LLU;
int32_t x156 = -1;
int8_t x161 = INT8_MAX;
static volatile int16_t x163 = -3037;
int32_t x175 = 58;
volatile uint32_t x182 = 74772138U;
uint32_t x187 = 1381966U;
uint32_t t46 = 1880U;
int16_t x195 = -6;
static volatile int16_t x200 = -9429;
uint8_t x204 = UINT8_MAX;
volatile uint32_t t51 = UINT32_MAX;
volatile uint64_t t55 = UINT64_MAX;
uint8_t x225 = 0U;
int64_t x230 = INT64_MIN;
static uint32_t x234 = 601447U;
static int8_t x235 = INT8_MAX;
static uint32_t x239 = UINT32_MAX;
int32_t x241 = INT32_MIN;
int32_t x246 = INT32_MIN;
int64_t x248 = INT64_MIN;
int16_t x254 = INT16_MIN;
static int32_t x256 = -1;
int32_t x258 = INT32_MIN;
uint32_t t64 = 6422U;
volatile uint64_t t66 = 1377663209820061LLU;
static uint32_t t67 = 112U;
uint64_t x273 = UINT64_MAX;
int8_t x280 = -1;
int32_t x283 = -24558;
volatile int32_t t70 = 1803;
uint32_t x286 = 7776U;
static int64_t t71 = 13490016791171LL;
static uint16_t x289 = 93U;
static int8_t x292 = INT8_MAX;
volatile int16_t x297 = INT16_MIN;
int16_t x299 = INT16_MIN;
int64_t x303 = INT64_MIN;
int64_t x304 = 101461656LL;
static uint32_t x308 = 10813816U;
uint32_t x309 = 4750783U;
int8_t x310 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
static uint8_t x317 = UINT8_MAX;
int64_t x323 = INT64_MIN;
int8_t x325 = INT8_MAX;
int64_t x327 = -1LL;
int32_t x336 = -1513;
int8_t x337 = 1;
int64_t x340 = -1LL;
volatile int64_t t84 = -70375800465LL;
int32_t x345 = -14;
volatile int32_t x348 = INT32_MIN;
static int8_t x353 = -1;
int32_t t88 = -233;
int16_t x359 = -1;
int32_t x361 = 31129;
int16_t x367 = -1;
volatile uint8_t x368 = 63U;
int16_t x369 = INT16_MIN;
int32_t t92 = INT32_MIN;
volatile int16_t x374 = INT16_MIN;
static uint8_t x375 = 13U;
static int64_t x379 = INT64_MIN;
volatile int64_t t94 = -56284200LL;
int64_t x381 = INT64_MAX;
volatile int64_t t95 = 18LL;
int16_t x385 = -3110;
volatile int32_t x392 = INT32_MAX;
uint8_t x401 = 0U;
int8_t x402 = INT8_MIN;
int16_t x405 = -1;
volatile uint16_t x406 = UINT16_MAX;
static volatile int64_t t103 = -19307767004918943LL;
volatile int32_t x418 = INT32_MIN;
uint32_t x426 = 658931310U;
volatile int32_t t106 = -562;
int16_t x430 = INT16_MIN;
int16_t x432 = -1;
int32_t x438 = INT32_MIN;
uint32_t x439 = 404U;
int32_t x440 = INT32_MIN;
static uint32_t x449 = 1426365U;
static volatile int8_t x462 = 1;
volatile uint64_t t116 = UINT64_MAX;
int16_t x478 = INT16_MIN;
static uint64_t x479 = UINT64_MAX;
volatile uint64_t t119 = UINT64_MAX;
int8_t x485 = -3;
uint64_t x486 = UINT64_MAX;
static int32_t t121 = 89;
int32_t x491 = INT32_MAX;
int16_t x496 = INT16_MIN;
int32_t x501 = 0;
volatile int16_t x506 = -356;
int32_t x508 = INT32_MIN;
int64_t x510 = 3595805100388099LL;
int16_t x519 = INT16_MAX;
uint8_t x532 = UINT8_MAX;
int8_t x536 = INT8_MIN;
volatile uint64_t t133 = 273423111066LLU;
volatile uint64_t x541 = 3195LLU;
static int8_t x542 = 62;
int16_t x544 = INT16_MAX;
volatile uint64_t t135 = 24621868664LLU;
uint8_t x546 = 0U;
volatile int16_t x550 = 67;
volatile int32_t t138 = 1004527972;
uint16_t x558 = 6U;
int32_t x566 = -1;
static uint64_t x567 = 509LLU;
int16_t x570 = -1485;
static int64_t x573 = INT64_MAX;
volatile int8_t x577 = INT8_MIN;
volatile uint64_t x583 = 56032859535LLU;
volatile int8_t x584 = INT8_MIN;
int16_t x585 = INT16_MAX;
uint16_t x587 = 5189U;
uint16_t x592 = 4897U;
static volatile int32_t t148 = 50030;
volatile uint8_t x597 = 116U;
int8_t x598 = INT8_MAX;
volatile int64_t x599 = INT64_MIN;
int32_t x609 = 51082;
int32_t t152 = 30603782;
static int8_t x615 = INT8_MIN;
int64_t x630 = -225974116189LL;
int8_t x632 = INT8_MIN;
volatile int32_t t157 = 20;
volatile int64_t x635 = INT64_MIN;
static int8_t x639 = INT8_MAX;
int64_t x640 = INT64_MIN;
static volatile int32_t x641 = 4065859;
uint32_t x646 = 435339525U;
static uint8_t x648 = 28U;
int16_t x651 = -90;
int32_t x654 = -1;
int16_t x664 = INT16_MIN;
static uint32_t t166 = UINT32_MAX;
uint16_t x675 = 12U;
static int16_t x676 = INT16_MIN;
static volatile int32_t x681 = -1;
static uint8_t x683 = UINT8_MAX;
int32_t x684 = INT32_MIN;
volatile uint64_t x688 = 4111675168009541349LLU;
uint64_t t171 = 0LLU;
volatile int32_t t172 = 16431765;
int32_t x693 = INT32_MIN;
int16_t x694 = INT16_MIN;
static int32_t x700 = INT32_MIN;
volatile int64_t x706 = -103930LL;
static uint64_t x715 = UINT64_MAX;
uint16_t x717 = 60U;
static uint64_t x721 = 54LLU;
uint8_t x722 = 17U;
uint64_t x727 = 34LLU;
int8_t x734 = 1;
int8_t x736 = INT8_MIN;
volatile int8_t x737 = -18;
uint8_t x738 = UINT8_MAX;
int8_t x740 = 21;
volatile int64_t t184 = -1585783448761592LL;
int32_t x745 = 3;
static uint32_t x746 = 23124815U;
uint8_t x749 = UINT8_MAX;
int16_t x751 = INT16_MIN;
volatile int16_t x754 = -387;
int16_t x757 = 0;
volatile uint32_t t189 = UINT32_MAX;
volatile int64_t x763 = INT64_MIN;
uint64_t x774 = 18676LLU;
int64_t x777 = 2257872318977LL;
uint16_t x778 = 1U;
static int64_t x779 = -7LL;
uint64_t x781 = 10729265LLU;
static int64_t x787 = INT64_MIN;
volatile int64_t t196 = -7851LL;
int64_t x789 = 259075471005683053LL;
int64_t x793 = INT64_MAX;


void f0(void) {
    	int32_t x3 = INT32_MAX;
	static int32_t t0 = 6;

    t0 = (((x1>x2)*x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	uint64_t x7 = 68264731LLU;

    t1 = (((x5>x6)*x7)|x8);

    if (t1 != 68283195LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	int64_t x11 = 33816421120981LL;
	int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = -45772098200338298LL;

    t2 = (((x9>x10)*x11)|x12);

    if (t2 != -2147483648LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	static int8_t x15 = -1;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 15181;

    t3 = (((x13>x14)*x15)|x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 25183430LLU;
	static int64_t x18 = INT64_MAX;
	int64_t x19 = INT64_MAX;
	volatile int16_t x20 = 0;
	int64_t t4 = -75269LL;

    t4 = (((x17>x18)*x19)|x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint16_t x21 = 141U;
	volatile int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MAX;
	static int32_t t5 = -5708194;

    t5 = (((x21>x22)*x23)|x24);

    if (t5 != -32641) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	int64_t t6 = INT64_MIN;

    t6 = (((x25>x26)*x27)|x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 298;
	int16_t x31 = INT16_MIN;
	static int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = -153612260;

    t7 = (((x29>x30)*x31)|x32);

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 2;
	int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MAX;
	volatile int32_t t8 = -3908641;

    t8 = (((x33>x34)*x35)|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x37 = 3754U;
	volatile int16_t x38 = 7111;
	volatile uint16_t x39 = UINT16_MAX;
	static uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t9 = UINT64_MAX;

    t9 = (((x37>x38)*x39)|x40);

    if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	static uint64_t x43 = 3240925195LLU;
	static int8_t x44 = INT8_MIN;

    t10 = (((x41>x42)*x43)|x44);

    if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int16_t x46 = INT16_MAX;
	int8_t x48 = -1;
	int32_t t11 = -306731;

    t11 = (((x45>x46)*x47)|x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 31U;
	static int16_t x50 = INT16_MIN;
	static uint64_t x51 = 0LLU;
	int16_t x52 = INT16_MIN;

    t12 = (((x49>x50)*x51)|x52);

    if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int8_t x54 = INT8_MIN;
	int8_t x55 = -10;
	static volatile int64_t t13 = 493734LL;

    t13 = (((x53>x54)*x55)|x56);

    if (t13 != -10LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = INT32_MAX;

    t14 = (((x57>x58)*x59)|x60);

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 339696U;
	uint8_t x62 = 3U;
	int32_t x64 = -227723764;
	volatile int32_t t15 = -150735653;

    t15 = (((x61>x62)*x63)|x64);

    if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x67 = -202338275;
	int16_t x68 = -1;
	int32_t t16 = -19484756;

    t16 = (((x65>x66)*x67)|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	int64_t x70 = -738LL;
	static uint8_t x71 = UINT8_MAX;
	static volatile uint16_t x72 = 4U;
	int32_t t17 = -11363;

    t17 = (((x69>x70)*x71)|x72);

    if (t17 != 4) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 22LLU;
	int32_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	int64_t t18 = -233793190LL;

    t18 = (((x73>x74)*x75)|x76);

    if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 1045;
	static uint64_t x79 = UINT64_MAX;
	static int32_t x80 = INT32_MAX;
	volatile uint64_t t19 = 1930943073148993LLU;

    t19 = (((x77>x78)*x79)|x80);

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x82 = -3751;
	int32_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	int32_t t20 = -721958;

    t20 = (((x81>x82)*x83)|x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 336U;
	int8_t x86 = -3;
	static int8_t x87 = INT8_MIN;
	uint32_t x88 = 3522U;

    t21 = (((x85>x86)*x87)|x88);

    if (t21 != 4294967234U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	volatile int64_t x90 = INT64_MAX;
	int16_t x91 = -2203;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 6;

    t22 = (((x89>x90)*x91)|x92);

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	static int64_t x94 = INT64_MIN;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t23 = -58806;

    t23 = (((x93>x94)*x95)|x96);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 113475984LLU;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -14LL;
	volatile int64_t x100 = 10292318331LL;
	volatile int64_t t24 = -314635318893123739LL;

    t24 = (((x97>x98)*x99)|x100);

    if (t24 != 10292318331LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x102 = 2802;
	volatile int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;

    t25 = (((x101>x102)*x103)|x104);

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = 111959077482451LL;
	static volatile uint32_t x108 = 1901090966U;
	static volatile uint32_t t26 = 1471U;

    t26 = (((x105>x106)*x107)|x108);

    if (t26 != 1901090966U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x110 = 10535421LLU;
	int32_t x112 = 21;
	static uint64_t t27 = 424219745LLU;

    t27 = (((x109>x110)*x111)|x112);

    if (t27 != 2035229LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int8_t x114 = -1;
	int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MAX;
	volatile int64_t t28 = -1LL;

    t28 = (((x113>x114)*x115)|x116);

    if (t28 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 30710U;
	int32_t x118 = -5;
	uint32_t x119 = 1665U;
	int64_t x120 = INT64_MIN;
	volatile int64_t t29 = INT64_MIN;

    t29 = (((x117>x118)*x119)|x120);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 3;
	uint64_t x123 = 169727087807151691LLU;
	int16_t x124 = INT16_MIN;

    t30 = (((x121>x122)*x123)|x124);

    if (t30 != 18446744073709534795LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MAX;
	int32_t x128 = INT32_MIN;

    t31 = (((x125>x126)*x127)|x128);

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MAX;
	uint64_t x130 = UINT64_MAX;
	static int16_t x131 = -1;
	static int8_t x132 = -1;
	int32_t t32 = -1935;

    t32 = (((x129>x130)*x131)|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -1;
	int32_t x135 = INT32_MAX;
	uint8_t x136 = 0U;

    t33 = (((x133>x134)*x135)|x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MAX;
	volatile int64_t t34 = -5805523026LL;

    t34 = (((x137>x138)*x139)|x140);

    if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	volatile uint16_t x143 = 85U;
	volatile uint8_t x144 = 1U;
	int32_t t35 = -30660762;

    t35 = (((x141>x142)*x143)|x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int32_t x146 = 36080;
	uint64_t x147 = UINT64_MAX;
	static uint16_t x148 = 43U;
	volatile uint64_t t36 = 1810834809764LLU;

    t36 = (((x145>x146)*x147)|x148);

    if (t36 != 43LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MAX;
	static int8_t x150 = INT8_MAX;
	static volatile int32_t x151 = INT32_MIN;
	int8_t x152 = 0;
	static volatile int32_t t37 = INT32_MIN;

    t37 = (((x149>x150)*x151)|x152);

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	int16_t x154 = 3101;
	uint32_t x155 = UINT32_MAX;
	uint32_t t38 = UINT32_MAX;

    t38 = (((x153>x154)*x155)|x156);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = 2U;
	volatile uint16_t x158 = UINT16_MAX;
	static uint64_t x159 = 3LLU;
	static int16_t x160 = INT16_MIN;
	static volatile uint64_t t39 = 1678141855832408465LLU;

    t39 = (((x157>x158)*x159)|x160);

    if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = -1;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 80613741;

    t40 = (((x161>x162)*x163)|x164);

    if (t40 != -3037) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MAX;
	int8_t x166 = 3;
	volatile int32_t x167 = INT32_MAX;
	static volatile int64_t x168 = 0LL;
	volatile int64_t t41 = -343486381973082201LL;

    t41 = (((x165>x166)*x167)|x168);

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	int16_t x170 = -5;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MAX;
	int64_t t42 = INT64_MAX;

    t42 = (((x169>x170)*x171)|x172);

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x173 = UINT16_MAX;
	uint64_t x174 = 385422118802LLU;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

    t43 = (((x173>x174)*x175)|x176);

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -206;
	int32_t t44 = -677;

    t44 = (((x177>x178)*x179)|x180);

    if (t44 != -78) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x183 = 98889U;
	volatile int16_t x184 = 156;
	uint32_t t45 = 55656789U;

    t45 = (((x181>x182)*x183)|x184);

    if (t45 != 156U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	volatile int8_t x186 = 1;
	uint8_t x188 = UINT8_MAX;

    t46 = (((x185>x186)*x187)|x188);

    if (t46 != 255U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 20323478956262LL;
	static int16_t x190 = -184;
	uint16_t x191 = 2U;
	volatile int32_t x192 = 39;
	static volatile int32_t t47 = 2845;

    t47 = (((x189>x190)*x191)|x192);

    if (t47 != 39) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	uint16_t x194 = 3U;
	int32_t x196 = -138162177;
	volatile int32_t t48 = -1;

    t48 = (((x193>x194)*x195)|x196);

    if (t48 != -138162177) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	volatile int32_t x198 = INT32_MAX;
	volatile int8_t x199 = 0;
	volatile int32_t t49 = -61;

    t49 = (((x197>x198)*x199)|x200);

    if (t49 != -9429) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 6U;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MIN;
	volatile int32_t t50 = -657912;

    t50 = (((x201>x202)*x203)|x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	static uint32_t x206 = 759281U;
	int32_t x207 = INT32_MIN;
	volatile uint32_t x208 = UINT32_MAX;

    t51 = (((x205>x206)*x207)|x208);

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = 11130052596138561LL;
	uint8_t x210 = 0U;
	int32_t x211 = INT32_MIN;
	static int64_t x212 = 1LL;
	static volatile int64_t t52 = -6821LL;

    t52 = (((x209>x210)*x211)|x212);

    if (t52 != -2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -38;
	uint32_t x214 = 17978087U;
	int8_t x215 = -1;
	int32_t x216 = 5458;
	int32_t t53 = -50164;

    t53 = (((x213>x214)*x215)|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = 14603975915LLU;
	volatile uint64_t t54 = 126986LLU;

    t54 = (((x217>x218)*x219)|x220);

    if (t54 != 18446744073709550827LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 9;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	static int32_t x224 = INT32_MIN;

    t55 = (((x221>x222)*x223)|x224);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x226 = 1U;
	int64_t x227 = -1LL;
	uint32_t x228 = 0U;
	int64_t t56 = 15968407966LL;

    t56 = (((x225>x226)*x227)|x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	uint64_t x231 = UINT64_MAX;
	volatile uint64_t x232 = 100LLU;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x229>x230)*x231)|x232);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint32_t x236 = 0U;
	static uint32_t t58 = 13506U;

    t58 = (((x233>x234)*x235)|x236);

    if (t58 != 127U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 32;
	uint16_t x238 = UINT16_MAX;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t59 = 633507U;

    t59 = (((x237>x238)*x239)|x240);

    if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = INT16_MIN;
	int16_t x243 = 7;
	uint16_t x244 = 0U;
	int32_t t60 = 740603;

    t60 = (((x241>x242)*x243)|x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = INT16_MIN;
	static volatile uint64_t x247 = 27311325LLU;
	uint64_t t61 = 6654357334406207LLU;

    t61 = (((x245>x246)*x247)|x248);

    if (t61 != 9223372036882087133LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 3U;
	uint8_t x250 = 80U;
	volatile int16_t x251 = INT16_MIN;
	static int64_t x252 = INT64_MAX;
	int64_t t62 = INT64_MAX;

    t62 = (((x249>x250)*x251)|x252);

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	volatile int64_t x255 = -1LL;
	int64_t t63 = 5800173359360154LL;

    t63 = (((x253>x254)*x255)|x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = -14091;
	int32_t x259 = -23;
	uint32_t x260 = 1746328304U;

    t64 = (((x257>x258)*x259)|x260);

    if (t64 != 4294967289U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 46U;
	static int8_t x262 = 2;
	int16_t x263 = INT16_MAX;
	static volatile uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

    t65 = (((x261>x262)*x263)|x264);

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 1U;
	int16_t x266 = 51;
	int16_t x267 = -35;
	static uint64_t x268 = 6238692493429631316LLU;

    t66 = (((x265>x266)*x267)|x268);

    if (t66 != 6238692493429631316LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	uint64_t x270 = 1981LLU;
	volatile uint32_t x271 = 1U;
	int8_t x272 = INT8_MAX;

    t67 = (((x269>x270)*x271)|x272);

    if (t67 != 127U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x274 = -1LL;
	int32_t x275 = INT32_MIN;
	uint16_t x276 = 120U;
	static int32_t t68 = 33277;

    t68 = (((x273>x274)*x275)|x276);

    if (t68 != 120) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 52;
	int32_t x278 = INT32_MIN;
	static volatile int16_t x279 = INT16_MAX;
	int32_t t69 = -12712672;

    t69 = (((x277>x278)*x279)|x280);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = -1;
	int64_t x282 = -1LL;
	int16_t x284 = -664;

    t70 = (((x281>x282)*x283)|x284);

    if (t70 != -664) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = 89;
	volatile int32_t x287 = 59;
	int64_t x288 = -4510LL;

    t71 = (((x285>x286)*x287)|x288);

    if (t71 != -4510LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x290 = 179576307U;
	int64_t x291 = -16274271780LL;
	int64_t t72 = 16211940222923LL;

    t72 = (((x289>x290)*x291)|x292);

    if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -1;
	volatile int8_t x294 = 14;
	int32_t x295 = INT32_MIN;
	static uint64_t x296 = 134746652LLU;
	uint64_t t73 = 8268330LLU;

    t73 = (((x293>x294)*x295)|x296);

    if (t73 != 134746652LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = INT8_MIN;
	static int8_t x300 = INT8_MIN;
	static volatile int32_t t74 = -2458062;

    t74 = (((x297>x298)*x299)|x300);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -23;
	int64_t x302 = INT64_MAX;
	static int64_t t75 = 0LL;

    t75 = (((x301>x302)*x303)|x304);

    if (t75 != 101461656LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	int32_t x306 = -10719;
	uint16_t x307 = 1176U;
	volatile uint32_t t76 = 45U;

    t76 = (((x305>x306)*x307)|x308);

    if (t76 != 10814968U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = 2U;
	uint32_t t77 = 35U;

    t77 = (((x309>x310)*x311)|x312);

    if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = -199901231986596LL;
	int32_t x314 = -233;
	static volatile int16_t x315 = INT16_MIN;
	uint32_t t78 = UINT32_MAX;

    t78 = (((x313>x314)*x315)|x316);

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x318 = INT64_MIN;
	static uint16_t x319 = UINT16_MAX;
	static int32_t x320 = -1;
	volatile int32_t t79 = -3101258;

    t79 = (((x317>x318)*x319)|x320);

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	int8_t x324 = -1;
	int64_t t80 = -219819408LL;

    t80 = (((x321>x322)*x323)|x324);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x326 = UINT32_MAX;
	uint64_t x328 = 907LLU;
	uint64_t t81 = 31844113LLU;

    t81 = (((x325>x326)*x327)|x328);

    if (t81 != 907LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	volatile uint8_t x330 = 5U;
	uint16_t x331 = 14U;
	uint16_t x332 = 859U;
	static int32_t t82 = -25941;

    t82 = (((x329>x330)*x331)|x332);

    if (t82 != 863) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MIN;
	static volatile int32_t x334 = 4916267;
	static uint16_t x335 = UINT16_MAX;
	int32_t t83 = -27883;

    t83 = (((x333>x334)*x335)|x336);

    if (t83 != -1513) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 2585U;

    t84 = (((x337>x338)*x339)|x340);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = -1;
	int8_t x343 = -55;
	int64_t x344 = -1LL;
	int64_t t85 = -126211826595408LL;

    t85 = (((x341>x342)*x343)|x344);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = -1;
	uint8_t x347 = UINT8_MAX;
	int32_t t86 = INT32_MIN;

    t86 = (((x345>x346)*x347)|x348);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	uint16_t x351 = 10577U;
	static int32_t x352 = INT32_MIN;
	static int32_t t87 = INT32_MIN;

    t87 = (((x349>x350)*x351)|x352);

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x354 = UINT32_MAX;
	int8_t x355 = -1;
	volatile int32_t x356 = 0;

    t88 = (((x353>x354)*x355)|x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -1;
	int16_t x358 = INT16_MIN;
	uint8_t x360 = 86U;
	int32_t t89 = 15065;

    t89 = (((x357>x358)*x359)|x360);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x362 = 9999879LL;
	int16_t x363 = -98;
	volatile uint8_t x364 = 32U;
	static int32_t t90 = 37;

    t90 = (((x361>x362)*x363)|x364);

    if (t90 != 32) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	volatile int32_t t91 = -28272649;

    t91 = (((x365>x366)*x367)|x368);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x370 = UINT8_MAX;
	int8_t x371 = 58;
	volatile int32_t x372 = INT32_MIN;

    t92 = (((x369>x370)*x371)|x372);

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	int8_t x376 = 35;
	volatile int32_t t93 = -54662950;

    t93 = (((x373>x374)*x375)|x376);

    if (t93 != 47) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	static int64_t x378 = INT64_MIN;
	int32_t x380 = INT32_MIN;

    t94 = (((x377>x378)*x379)|x380);

    if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x382 = 30U;
	static int64_t x383 = -1LL;
	int8_t x384 = INT8_MIN;

    t95 = (((x381>x382)*x383)|x384);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x386 = 201404443U;
	int16_t x387 = INT16_MIN;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 0;

    t96 = (((x385>x386)*x387)|x388);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -918578LL;
	int16_t x390 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	volatile uint64_t t97 = 1745LLU;

    t97 = (((x389>x390)*x391)|x392);

    if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint16_t x394 = 270U;
	int8_t x395 = 55;
	uint16_t x396 = 32U;
	int32_t t98 = -244183;

    t98 = (((x393>x394)*x395)|x396);

    if (t98 != 32) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MAX;
	int32_t x398 = -1;
	uint32_t x399 = 37447U;
	static int16_t x400 = INT16_MAX;
	static uint32_t t99 = 45990U;

    t99 = (((x397>x398)*x399)|x400);

    if (t99 != 65535U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x403 = 8494;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 1639;

    t100 = (((x401>x402)*x403)|x404);

    if (t100 != -24274) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x407 = INT16_MAX;
	int32_t x408 = 1;
	int32_t t101 = -51978;

    t101 = (((x405>x406)*x407)|x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 14U;
	volatile int8_t x410 = -1;
	static volatile uint16_t x411 = 1U;
	static volatile uint16_t x412 = UINT16_MAX;
	int32_t t102 = 268444207;

    t102 = (((x409>x410)*x411)|x412);

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint8_t x414 = 1U;
	static uint32_t x415 = 184203993U;
	volatile int64_t x416 = -1986084586969590LL;

    t103 = (((x413>x414)*x415)|x416);

    if (t103 != -1986084586969590LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = -1;
	volatile uint8_t x419 = 43U;
	int8_t x420 = -1;
	volatile int32_t t104 = -42217527;

    t104 = (((x417>x418)*x419)|x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MIN;
	int8_t x423 = INT8_MIN;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t105 = 1;

    t105 = (((x421>x422)*x423)|x424);

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = -1;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -1;

    t106 = (((x425>x426)*x427)|x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 258299735U;
	volatile int16_t x431 = INT16_MIN;
	volatile int32_t t107 = -1;

    t107 = (((x429>x430)*x431)|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 58326;
	uint64_t x434 = 586331265733150577LLU;
	int64_t x435 = INT64_MIN;
	uint64_t x436 = 1LLU;
	static uint64_t t108 = 3078073LLU;

    t108 = (((x433>x434)*x435)|x436);

    if (t108 != 1LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint32_t t109 = 1544U;

    t109 = (((x437>x438)*x439)|x440);

    if (t109 != 2147484052U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = INT64_MIN;
	uint8_t x442 = 14U;
	int8_t x443 = INT8_MIN;
	int64_t x444 = -120LL;
	static volatile int64_t t110 = -60265191012LL;

    t110 = (((x441>x442)*x443)|x444);

    if (t110 != -120LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 64391U;
	int32_t x446 = INT32_MAX;
	int32_t x447 = INT32_MIN;
	int64_t x448 = INT64_MAX;
	int64_t t111 = INT64_MAX;

    t111 = (((x445>x446)*x447)|x448);

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x450 = INT16_MAX;
	uint16_t x451 = 13U;
	static int64_t x452 = INT64_MIN;
	static int64_t t112 = -772680132614694931LL;

    t112 = (((x449>x450)*x451)|x452);

    if (t112 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MIN;
	uint64_t x454 = 1050992957LLU;
	uint64_t x455 = UINT64_MAX;
	int8_t x456 = INT8_MIN;
	uint64_t t113 = UINT64_MAX;

    t113 = (((x453>x454)*x455)|x456);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile int32_t x458 = INT32_MAX;
	uint8_t x459 = 3U;
	int16_t x460 = -1344;
	volatile int32_t t114 = -22008890;

    t114 = (((x457>x458)*x459)|x460);

    if (t114 != -1341) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	int8_t x463 = -27;
	uint32_t x464 = 186261874U;
	volatile uint32_t t115 = 52145U;

    t115 = (((x461>x462)*x463)|x464);

    if (t115 != 4294967287U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = -1;
	int8_t x467 = 1;
	volatile uint64_t x468 = UINT64_MAX;

    t116 = (((x465>x466)*x467)|x468);

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	volatile uint16_t x470 = 27U;
	int32_t x471 = 131043315;
	uint32_t x472 = UINT32_MAX;
	static volatile uint32_t t117 = UINT32_MAX;

    t117 = (((x469>x470)*x471)|x472);

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	uint32_t x474 = 27U;
	volatile int16_t x475 = -1;
	volatile uint64_t x476 = 75937LLU;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (((x473>x474)*x475)|x476);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	int8_t x480 = 1;

    t119 = (((x477>x478)*x479)|x480);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1573363438LL;
	uint16_t x482 = 1868U;
	static volatile int32_t x483 = -1112;
	uint32_t x484 = 2332U;
	uint32_t t120 = 0U;

    t120 = (((x481>x482)*x483)|x484);

    if (t120 != 2332U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x487 = INT16_MIN;
	int8_t x488 = -6;

    t121 = (((x485>x486)*x487)|x488);

    if (t121 != -6) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	int8_t x490 = -1;
	uint8_t x492 = 3U;
	volatile int32_t t122 = -30219;

    t122 = (((x489>x490)*x491)|x492);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int64_t x494 = 9695695539LL;
	uint16_t x495 = 0U;
	volatile int32_t t123 = -125208104;

    t123 = (((x493>x494)*x495)|x496);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 0U;
	int64_t x498 = -1LL;
	int32_t x499 = 64429081;
	int64_t x500 = INT64_MIN;
	volatile int64_t t124 = 43LL;

    t124 = (((x497>x498)*x499)|x500);

    if (t124 != -9223372036790346727LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x502 = INT32_MAX;
	volatile int16_t x503 = INT16_MIN;
	static uint8_t x504 = 1U;
	volatile int32_t t125 = -196451;

    t125 = (((x501>x502)*x503)|x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	static int16_t x507 = INT16_MIN;
	volatile int32_t t126 = 1935782;

    t126 = (((x505>x506)*x507)|x508);

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x509 = INT8_MAX;
	int8_t x511 = INT8_MIN;
	uint8_t x512 = UINT8_MAX;
	static int32_t t127 = -506;

    t127 = (((x509>x510)*x511)|x512);

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = 7591316577027LL;
	volatile int16_t x514 = -9868;
	int32_t x515 = -1;
	static int64_t x516 = -64623705LL;
	int64_t t128 = -2620LL;

    t128 = (((x513>x514)*x515)|x516);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = INT8_MIN;
	static int8_t x518 = 25;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t129 = 14005591;

    t129 = (((x517>x518)*x519)|x520);

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = 26U;
	static int32_t x522 = 1;
	volatile int32_t x523 = INT32_MIN;
	static uint16_t x524 = 115U;
	volatile int32_t t130 = -168;

    t130 = (((x521>x522)*x523)|x524);

    if (t130 != -2147483533) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	static uint32_t x526 = 86728124U;
	uint16_t x527 = 7U;
	volatile uint64_t x528 = UINT64_MAX;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (((x525>x526)*x527)|x528);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 6;
	uint32_t x530 = 14500689U;
	uint32_t x531 = 28619892U;
	volatile uint32_t t132 = 25U;

    t132 = (((x529>x530)*x531)|x532);

    if (t132 != 255U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = 14U;
	int32_t x534 = INT32_MAX;
	uint64_t x535 = UINT64_MAX;

    t133 = (((x533>x534)*x535)|x536);

    if (t133 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	static int64_t x538 = -934942LL;
	int32_t x539 = INT32_MIN;
	static uint8_t x540 = 1U;
	volatile int32_t t134 = 0;

    t134 = (((x537>x538)*x539)|x540);

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x543 = 18202060302LLU;

    t135 = (((x541>x542)*x543)|x544);

    if (t135 != 18202066943LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	static uint64_t x547 = UINT64_MAX;
	static uint32_t x548 = 643U;
	volatile uint64_t t136 = 21356259LLU;

    t136 = (((x545>x546)*x547)|x548);

    if (t136 != 643LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -1LL;
	int32_t x551 = INT32_MAX;
	static uint32_t x552 = 9627317U;
	uint32_t t137 = 404838386U;

    t137 = (((x549>x550)*x551)|x552);

    if (t137 != 9627317U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x554 = 131;
	uint16_t x555 = 151U;
	int32_t x556 = -1;

    t138 = (((x553>x554)*x555)|x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	volatile uint8_t x559 = 28U;
	volatile int16_t x560 = INT16_MIN;
	static volatile int32_t t139 = 1;

    t139 = (((x557>x558)*x559)|x560);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 108U;
	uint64_t x562 = 251880846422473LLU;
	int64_t x563 = INT64_MIN;
	int64_t x564 = INT64_MIN;
	volatile int64_t t140 = INT64_MIN;

    t140 = (((x561>x562)*x563)|x564);

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int32_t x568 = INT32_MIN;
	uint64_t t141 = 32451LLU;

    t141 = (((x565>x566)*x567)|x568);

    if (t141 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint8_t x569 = 1U;
	volatile int64_t x571 = -1LL;
	uint8_t x572 = UINT8_MAX;
	static volatile int64_t t142 = 401135397921578LL;

    t142 = (((x569>x570)*x571)|x572);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = -20;
	int64_t x575 = -227702277649LL;
	int8_t x576 = 23;
	volatile int64_t t143 = 146626854907LL;

    t143 = (((x573>x574)*x575)|x576);

    if (t143 != -227702277633LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x578 = 4U;
	int64_t x579 = -236LL;
	uint8_t x580 = 2U;
	static int64_t t144 = -55LL;

    t144 = (((x577>x578)*x579)|x580);

    if (t144 != 2LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = 30U;
	int8_t x582 = 0;
	volatile uint64_t t145 = 31850123511LLU;

    t145 = (((x581>x582)*x583)|x584);

    if (t145 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = 30U;
	volatile int32_t x588 = INT32_MIN;
	static volatile int32_t t146 = 5374232;

    t146 = (((x585>x586)*x587)|x588);

    if (t146 != -2147478459) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int64_t x590 = INT64_MIN;
	uint64_t x591 = 2856141LLU;
	volatile uint64_t t147 = 3109413618919562027LLU;

    t147 = (((x589>x590)*x591)|x592);

    if (t147 != 2856941LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	volatile int32_t x594 = 0;
	static int32_t x595 = INT32_MAX;
	int16_t x596 = 561;

    t148 = (((x593>x594)*x595)|x596);

    if (t148 != 561) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x600 = INT32_MIN;
	int64_t t149 = -184880670421532086LL;

    t149 = (((x597>x598)*x599)|x600);

    if (t149 != -2147483648LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MAX;
	volatile int16_t x602 = -1;
	uint32_t x603 = 154U;
	static volatile uint32_t x604 = UINT32_MAX;
	volatile uint32_t t150 = UINT32_MAX;

    t150 = (((x601>x602)*x603)|x604);

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -18;
	uint32_t x606 = 121233348U;
	uint16_t x607 = 48U;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 3;

    t151 = (((x605>x606)*x607)|x608);

    if (t151 != -32720) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x610 = -1565;
	volatile uint16_t x611 = 71U;
	int32_t x612 = 5927;

    t152 = (((x609>x610)*x611)|x612);

    if (t152 != 5991) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = 2151226;
	int32_t x614 = -1;
	int16_t x616 = INT16_MIN;
	static int32_t t153 = 569;

    t153 = (((x613>x614)*x615)|x616);

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MAX;
	int8_t x618 = -20;
	int64_t x619 = 2966750763781LL;
	int16_t x620 = 0;
	volatile int64_t t154 = 33064LL;

    t154 = (((x617>x618)*x619)|x620);

    if (t154 != 2966750763781LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x621 = INT64_MIN;
	int64_t x622 = INT64_MIN;
	static int64_t x623 = -1LL;
	int16_t x624 = -1;
	int64_t t155 = 130895342894353273LL;

    t155 = (((x621>x622)*x623)|x624);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	volatile uint8_t x626 = 26U;
	uint16_t x627 = UINT16_MAX;
	volatile uint16_t x628 = 2525U;
	int32_t t156 = 204;

    t156 = (((x625>x626)*x627)|x628);

    if (t156 != 65535) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	static int32_t x631 = 8;

    t157 = (((x629>x630)*x631)|x632);

    if (t157 != -120) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 2U;
	volatile uint16_t x634 = 1256U;
	int64_t x636 = INT64_MIN;
	int64_t t158 = INT64_MIN;

    t158 = (((x633>x634)*x635)|x636);

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int32_t x638 = INT32_MAX;
	volatile int64_t t159 = INT64_MIN;

    t159 = (((x637>x638)*x639)|x640);

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = INT32_MIN;
	uint8_t x643 = UINT8_MAX;
	static int8_t x644 = -1;
	volatile int32_t t160 = -221605673;

    t160 = (((x641>x642)*x643)|x644);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MAX;
	volatile uint64_t x647 = 26630889324592LLU;
	volatile uint64_t t161 = 75319668521LLU;

    t161 = (((x645>x646)*x647)|x648);

    if (t161 != 26630889324604LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = -1;
	int64_t x650 = INT64_MAX;
	int32_t x652 = 0;
	int32_t t162 = -8;

    t162 = (((x649>x650)*x651)|x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	uint16_t x655 = 412U;
	int32_t x656 = INT32_MIN;
	volatile int32_t t163 = INT32_MIN;

    t163 = (((x653>x654)*x655)|x656);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MIN;
	int8_t x658 = 34;
	uint8_t x659 = 1U;
	static int64_t x660 = -1LL;
	static volatile int64_t t164 = 212699615813LL;

    t164 = (((x657>x658)*x659)|x660);

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -1;
	int64_t x662 = INT64_MIN;
	uint32_t x663 = 173U;
	volatile uint32_t t165 = 3U;

    t165 = (((x661>x662)*x663)|x664);

    if (t165 != 4294934701U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = 14U;
	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MAX;
	uint32_t x668 = UINT32_MAX;

    t166 = (((x665>x666)*x667)|x668);

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 0U;
	int8_t x670 = 43;
	int16_t x671 = 7390;
	int32_t x672 = INT32_MIN;
	static int32_t t167 = INT32_MIN;

    t167 = (((x669>x670)*x671)|x672);

    if (t167 != INT32_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 62;
	int32_t x674 = INT32_MIN;
	volatile int32_t t168 = 1;

    t168 = (((x673>x674)*x675)|x676);

    if (t168 != -32756) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	static int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MIN;
	static int32_t x680 = INT32_MIN;
	int32_t t169 = -775542825;

    t169 = (((x677>x678)*x679)|x680);

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x682 = INT64_MIN;
	int32_t t170 = -73693884;

    t170 = (((x681>x682)*x683)|x684);

    if (t170 != -2147483393) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 13473208U;
	uint16_t x686 = 121U;
	static uint16_t x687 = 13U;

    t171 = (((x685>x686)*x687)|x688);

    if (t171 != 4111675168009541357LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 235429U;
	int32_t x690 = INT32_MIN;
	uint8_t x691 = UINT8_MAX;
	int16_t x692 = INT16_MAX;

    t172 = (((x689>x690)*x691)|x692);

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x695 = 14557;
	int32_t x696 = 0;
	static int32_t t173 = 259319739;

    t173 = (((x693>x694)*x695)|x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -282;
	int16_t x698 = INT16_MIN;
	static uint64_t x699 = 18689530425599LLU;
	volatile uint64_t t174 = 1016492562282549481LLU;

    t174 = (((x697>x698)*x699)|x700);

    if (t174 != 18446744073689788671LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	int16_t x702 = -1;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = (((x701>x702)*x703)|x704);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int32_t x707 = INT32_MIN;
	int16_t x708 = INT16_MAX;
	volatile int32_t t176 = 50905;

    t176 = (((x705>x706)*x707)|x708);

    if (t176 != -2147450881) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	uint16_t x710 = 70U;
	static int16_t x711 = -1;
	volatile uint64_t x712 = 710056940501057LLU;
	volatile uint64_t t177 = 55LLU;

    t177 = (((x709>x710)*x711)|x712);

    if (t177 != 710056940501057LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int32_t x714 = INT32_MIN;
	volatile int8_t x716 = -1;
	static volatile uint64_t t178 = UINT64_MAX;

    t178 = (((x713>x714)*x715)|x716);

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x718 = INT64_MIN;
	int32_t x719 = 0;
	int64_t x720 = INT64_MAX;
	volatile int64_t t179 = INT64_MAX;

    t179 = (((x717>x718)*x719)|x720);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x723 = INT8_MAX;
	int64_t x724 = INT64_MAX;
	static volatile int64_t t180 = INT64_MAX;

    t180 = (((x721>x722)*x723)|x724);

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x725 = 22;
	static int64_t x726 = INT64_MAX;
	static int64_t x728 = -5739180LL;
	static volatile uint64_t t181 = 487424LLU;

    t181 = (((x725>x726)*x727)|x728);

    if (t181 != 18446744073703812436LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	int32_t x730 = INT32_MIN;
	uint16_t x731 = UINT16_MAX;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = -1;

    t182 = (((x729>x730)*x731)|x732);

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	uint8_t x735 = 0U;
	int32_t t183 = -228875922;

    t183 = (((x733>x734)*x735)|x736);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x739 = -1LL;

    t184 = (((x737>x738)*x739)|x740);

    if (t184 != 21LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 3;
	int32_t x742 = INT32_MIN;
	static volatile int8_t x743 = -62;
	static int16_t x744 = INT16_MIN;
	volatile int32_t t185 = 177326;

    t185 = (((x741>x742)*x743)|x744);

    if (t185 != -62) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x747 = 114U;
	int32_t x748 = -62;
	int32_t t186 = -34229;

    t186 = (((x745>x746)*x747)|x748);

    if (t186 != -62) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x750 = 1;
	uint8_t x752 = 1U;
	static int32_t t187 = 1062289555;

    t187 = (((x749>x750)*x751)|x752);

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	static int64_t x755 = INT64_MIN;
	uint64_t x756 = 2165771889820679LLU;
	volatile uint64_t t188 = 7006417767030LLU;

    t188 = (((x753>x754)*x755)|x756);

    if (t188 != 9225537808744596487LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = -1;
	uint32_t x759 = UINT32_MAX;
	int32_t x760 = INT32_MIN;

    t189 = (((x757>x758)*x759)|x760);

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = 5456234941723013571LLU;
	int64_t x762 = INT64_MAX;
	volatile int64_t x764 = INT64_MAX;
	int64_t t190 = INT64_MAX;

    t190 = (((x761>x762)*x763)|x764);

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	uint8_t x766 = 11U;
	static uint32_t x767 = 811109U;
	int32_t x768 = -1;
	uint32_t t191 = UINT32_MAX;

    t191 = (((x765>x766)*x767)|x768);

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = -1;
	static int16_t x770 = INT16_MIN;
	int16_t x771 = -1;
	volatile uint8_t x772 = 35U;
	static volatile int32_t t192 = -55;

    t192 = (((x769>x770)*x771)|x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	uint32_t x775 = 811U;
	volatile int32_t x776 = INT32_MIN;
	volatile uint32_t t193 = 335U;

    t193 = (((x773>x774)*x775)|x776);

    if (t193 != 2147484459U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x780 = 0U;
	volatile int64_t t194 = 1450LL;

    t194 = (((x777>x778)*x779)|x780);

    if (t194 != -7LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x782 = -20;
	int8_t x783 = INT8_MIN;
	volatile int32_t x784 = -175803;
	static int32_t t195 = 3;

    t195 = (((x781>x782)*x783)|x784);

    if (t195 != -175803) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	int8_t x786 = INT8_MIN;
	int16_t x788 = INT16_MIN;

    t196 = (((x785>x786)*x787)|x788);

    if (t196 != -32768LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MIN;
	int16_t x791 = -623;
	uint16_t x792 = UINT16_MAX;
	int32_t t197 = 1;

    t197 = (((x789>x790)*x791)|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MAX;
	volatile uint16_t x795 = UINT16_MAX;
	static uint64_t x796 = 2741501347496302LLU;
	static uint64_t t198 = 115308969587LLU;

    t198 = (((x793>x794)*x795)|x796);

    if (t198 != 2741501347561471LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	static uint64_t x798 = 209LLU;
	volatile uint8_t x799 = UINT8_MAX;
	int64_t x800 = INT64_MIN;
	volatile int64_t t199 = 1908513LL;

    t199 = (((x797>x798)*x799)|x800);

    if (t199 != -9223372036854775553LL) { NG(); } else { ; }
	
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

