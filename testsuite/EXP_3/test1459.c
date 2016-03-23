
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

static uint32_t x1 = 1U;
volatile int32_t x2 = INT32_MIN;
int16_t x4 = INT16_MIN;
int32_t t0 = -11;
volatile uint8_t x6 = 23U;
int8_t x11 = INT8_MAX;
int8_t x12 = INT8_MAX;
static volatile int32_t t3 = -160833;
int32_t t4 = -69169;
uint32_t x21 = 485819U;
volatile int32_t t6 = -2;
uint16_t x33 = 2U;
static int8_t x40 = INT8_MAX;
static volatile int32_t x50 = INT32_MIN;
int16_t x53 = -1;
uint64_t x57 = 62789756LLU;
static int8_t x59 = INT8_MIN;
uint32_t x61 = 12U;
int8_t x62 = INT8_MIN;
int16_t x73 = INT16_MAX;
int64_t x74 = -1LL;
volatile int8_t x77 = INT8_MIN;
int64_t x81 = -1LL;
static int64_t x82 = INT64_MIN;
volatile int8_t x83 = INT8_MIN;
int32_t x85 = INT32_MIN;
int32_t x87 = INT32_MAX;
int16_t x88 = -10886;
static volatile int32_t t21 = 7186;
int64_t x89 = -1076568820LL;
volatile int64_t x93 = INT64_MIN;
int64_t x95 = -29639361769LL;
volatile int64_t x96 = -1LL;
static int32_t t23 = -8;
int32_t x97 = -1;
uint8_t x100 = UINT8_MAX;
volatile int16_t x103 = INT16_MIN;
static int8_t x104 = INT8_MIN;
static int16_t x108 = INT16_MIN;
volatile uint64_t x109 = 60LLU;
volatile uint32_t x115 = 34226976U;
static uint8_t x118 = 107U;
int32_t t29 = 1036;
volatile int32_t t30 = -15566;
int16_t x137 = -1;
uint32_t x143 = 2538126U;
int32_t t35 = -213085;
uint64_t x148 = 1LLU;
volatile int32_t t37 = -553;
volatile int32_t t38 = 11;
static int64_t x168 = INT64_MIN;
int16_t x169 = INT16_MAX;
int32_t t44 = 485;
uint32_t x182 = UINT32_MAX;
int16_t x189 = -1;
static uint8_t x192 = 29U;
static volatile int32_t t47 = -1749430;
static int16_t x201 = INT16_MIN;
int64_t x202 = -1LL;
static int16_t x203 = INT16_MIN;
static uint16_t x204 = UINT16_MAX;
int32_t t50 = -62477;
static volatile uint8_t x206 = 58U;
int8_t x207 = INT8_MIN;
volatile int32_t t51 = 47289;
int64_t x217 = -1390LL;
int32_t t54 = 308863588;
uint32_t x227 = UINT32_MAX;
volatile uint8_t x232 = 116U;
volatile int32_t t57 = 12;
int16_t x234 = 18;
static volatile int32_t t59 = -524855915;
static int8_t x241 = INT8_MIN;
uint8_t x245 = UINT8_MAX;
volatile int32_t t62 = 1;
volatile int64_t x255 = -1LL;
int32_t t63 = -102807518;
int32_t x259 = INT32_MIN;
uint8_t x261 = UINT8_MAX;
volatile uint16_t x271 = UINT16_MAX;
uint16_t x272 = 2550U;
volatile int32_t x277 = -514391;
static int8_t x279 = INT8_MIN;
static int8_t x280 = 10;
volatile int32_t t70 = 33233806;
int64_t x285 = -1LL;
volatile int32_t t71 = 5628;
int16_t x289 = INT16_MAX;
static int32_t x290 = -1;
int16_t x303 = -109;
int16_t x305 = INT16_MIN;
int8_t x308 = -1;
int32_t x316 = -2173483;
volatile int32_t t82 = -67006500;
int8_t x337 = -1;
int32_t x338 = -310;
int64_t x344 = INT64_MIN;
static volatile int16_t x346 = INT16_MIN;
uint8_t x349 = 29U;
static uint8_t x350 = UINT8_MAX;
uint32_t x357 = UINT32_MAX;
int16_t x361 = INT16_MAX;
int32_t x362 = -5;
int32_t t91 = -508;
static uint32_t x371 = 3U;
volatile int8_t x374 = 0;
int16_t x375 = -1;
uint64_t x378 = 6450697284LLU;
uint32_t x387 = UINT32_MAX;
volatile int32_t t96 = 250621992;
int16_t x391 = -3075;
int32_t x392 = INT32_MIN;
static uint8_t x397 = 15U;
int32_t x402 = INT32_MIN;
int16_t x403 = -1;
static int64_t x414 = -785934698889LL;
int64_t x415 = INT64_MAX;
int64_t x423 = INT64_MIN;
volatile int32_t x424 = INT32_MIN;
static int32_t t108 = 2;
int64_t x438 = -1LL;
int8_t x439 = -1;
int8_t x443 = INT8_MIN;
uint8_t x444 = 2U;
volatile int32_t t110 = -91892935;
volatile int32_t t111 = 1591;
int8_t x458 = -1;
int16_t x462 = INT16_MAX;
int16_t x465 = -1;
int64_t x467 = INT64_MIN;
int8_t x469 = INT8_MAX;
int32_t x471 = INT32_MIN;
int16_t x472 = INT16_MIN;
int8_t x473 = -1;
static uint16_t x474 = 587U;
int32_t x481 = INT32_MIN;
volatile int8_t x487 = -1;
int16_t x488 = 16;
int32_t x489 = 46307;
static int64_t x491 = 496874178LL;
volatile int32_t x492 = 872;
int8_t x496 = -8;
static int32_t x501 = INT32_MIN;
int64_t x510 = INT64_MIN;
int64_t x516 = 0LL;
uint8_t x517 = 18U;
uint64_t x519 = 2006481035LLU;
int8_t x520 = 57;
volatile int8_t x524 = 0;
int32_t x528 = -1;
int8_t x535 = INT8_MAX;
uint32_t x538 = UINT32_MAX;
volatile int64_t x539 = INT64_MIN;
uint32_t x543 = UINT32_MAX;
static volatile int32_t x544 = INT32_MAX;
volatile int32_t t135 = -437834;
volatile int32_t t136 = 428058092;
int32_t x549 = INT32_MAX;
uint32_t x550 = 9608835U;
int32_t x564 = -1;
static uint32_t x566 = UINT32_MAX;
int32_t x570 = INT32_MIN;
uint64_t x573 = 27607415LLU;
volatile int8_t x578 = 0;
int64_t x579 = INT64_MIN;
int32_t x582 = INT32_MIN;
volatile int32_t t145 = 16144;
volatile uint64_t x585 = UINT64_MAX;
int64_t x588 = 23LL;
volatile int32_t t146 = 190823149;
uint64_t x589 = 2836274015852657LLU;
int32_t x591 = INT32_MIN;
volatile int32_t t147 = 20883784;
volatile int16_t x605 = INT16_MIN;
static int8_t x610 = 0;
static int8_t x617 = -29;
int8_t x624 = INT8_MIN;
int32_t t156 = -25;
int64_t x633 = INT64_MIN;
int64_t x637 = INT64_MIN;
volatile int32_t t159 = 519919889;
uint8_t x646 = UINT8_MAX;
int16_t x647 = INT16_MIN;
volatile int32_t t161 = 15;
static uint16_t x653 = 11132U;
static int64_t x663 = -51916LL;
int32_t t165 = 6;
static uint16_t x666 = 396U;
int32_t t169 = -5161;
volatile int16_t x681 = -135;
volatile int64_t x685 = INT64_MIN;
uint32_t x690 = 1426U;
static volatile int32_t t172 = 136996;
static int8_t x694 = INT8_MIN;
static volatile int32_t t173 = -8088;
int64_t x700 = INT64_MAX;
volatile int32_t x701 = 334;
uint16_t x704 = 11547U;
int32_t x716 = -136124;
static int32_t t178 = 3;
volatile int8_t x728 = INT8_MAX;
static volatile int32_t t181 = -62444969;
int16_t x729 = -1;
uint64_t x731 = 101LLU;
int16_t x732 = 3;
int8_t x737 = -1;
static uint64_t x741 = 236LLU;
volatile uint64_t x744 = 6508LLU;
static uint16_t x761 = 78U;
static uint16_t x783 = 24188U;
static volatile uint16_t x785 = 1727U;
static volatile int8_t x786 = INT8_MIN;
volatile uint8_t x789 = 31U;
int32_t x791 = INT32_MIN;


void f0(void) {
    	static uint8_t x3 = 42U;

    t0 = ((x1!=x2)*(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 387414443;
	static int32_t x7 = INT32_MIN;
	static volatile uint32_t x8 = 15419U;
	static int32_t t1 = 14955;

    t1 = ((x5!=x6)*(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int8_t x10 = 31;
	volatile int32_t t2 = 143;

    t2 = ((x9!=x10)*(x11==x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	uint8_t x14 = 9U;
	int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;

    t3 = ((x13!=x14)*(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	static volatile int16_t x18 = INT16_MAX;
	volatile uint8_t x19 = 2U;
	uint8_t x20 = 23U;

    t4 = ((x17!=x18)*(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -3LL;
	uint32_t x23 = 109027533U;
	int16_t x24 = INT16_MAX;
	int32_t t5 = -265;

    t5 = ((x21!=x22)*(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = 1;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MIN;

    t6 = ((x25!=x26)*(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -61949091;
	int64_t x30 = 16615592778160769LL;
	uint32_t x31 = 3100U;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -1721107;

    t7 = ((x29!=x30)*(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	static int8_t x35 = INT8_MIN;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -526562;

    t8 = ((x33!=x34)*(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 5U;
	static volatile int16_t x38 = 7;
	int32_t x39 = INT32_MIN;
	int32_t t9 = 27050;

    t9 = ((x37!=x38)*(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 28U;
	uint16_t x42 = 20100U;
	static uint8_t x43 = 5U;
	uint16_t x44 = 680U;
	static volatile int32_t t10 = 824069068;

    t10 = ((x41!=x42)*(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -170LL;
	int64_t x46 = -1815018LL;
	static volatile int16_t x47 = -1;
	static volatile int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -9295;

    t11 = ((x45!=x46)*(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int16_t x51 = -920;
	static uint16_t x52 = UINT16_MAX;
	int32_t t12 = 112;

    t12 = ((x49!=x50)*(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = 2LLU;
	int32_t x55 = INT32_MIN;
	volatile uint64_t x56 = UINT64_MAX;
	static int32_t t13 = -5906;

    t13 = ((x53!=x54)*(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 19988;

    t14 = ((x57!=x58)*(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x63 = -45;
	uint64_t x64 = 0LLU;
	volatile int32_t t15 = 521698878;

    t15 = ((x61!=x62)*(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MAX;
	volatile int8_t x67 = INT8_MAX;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -192747742;

    t16 = ((x65!=x66)*(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 2LLU;
	uint32_t x70 = 3U;
	static uint64_t x71 = 672396930081157977LLU;
	volatile int64_t x72 = -1LL;
	volatile int32_t t17 = -2145;

    t17 = ((x69!=x70)*(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x75 = 0LLU;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t18 = -31;

    t18 = ((x73!=x74)*(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x78 = INT32_MAX;
	volatile int16_t x79 = INT16_MIN;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 3475;

    t19 = ((x77!=x78)*(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x84 = INT64_MAX;
	int32_t t20 = 2255;

    t20 = ((x81!=x82)*(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;

    t21 = ((x85!=x86)*(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x90 = INT16_MIN;
	uint64_t x91 = 263632308592481023LLU;
	static int64_t x92 = 13796483001LL;
	volatile int32_t t22 = -1;

    t22 = ((x89!=x90)*(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 115U;

    t23 = ((x93!=x94)*(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x98 = 0;
	static int16_t x99 = -1;
	int32_t t24 = -897877276;

    t24 = ((x97!=x98)*(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 15378;
	uint32_t x102 = 6565U;
	int32_t t25 = 17218;

    t25 = ((x101!=x102)*(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	static uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 6U;
	static int32_t t26 = 1;

    t26 = ((x105!=x106)*(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = -1;
	static int32_t x111 = 403478;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = 4;

    t27 = ((x109!=x110)*(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	uint16_t x114 = 497U;
	volatile int64_t x116 = 20748375956867577LL;
	static volatile int32_t t28 = -3015039;

    t28 = ((x113!=x114)*(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = INT32_MIN;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = 1896U;

    t29 = ((x117!=x118)*(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 0U;
	static int8_t x122 = -12;
	int32_t x123 = -125;
	uint16_t x124 = UINT16_MAX;

    t30 = ((x121!=x122)*(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	static int64_t x126 = -126607166147LL;
	static volatile uint8_t x127 = 6U;
	int64_t x128 = -1LL;
	int32_t t31 = -725888242;

    t31 = ((x125!=x126)*(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1361;
	int8_t x130 = INT8_MAX;
	volatile uint8_t x131 = UINT8_MAX;
	int64_t x132 = INT64_MIN;
	int32_t t32 = -263546381;

    t32 = ((x129!=x130)*(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 38U;
	static int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	volatile int64_t x136 = INT64_MIN;
	int32_t t33 = -1;

    t33 = ((x133!=x134)*(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = 23360U;
	static int16_t x140 = INT16_MAX;
	volatile int32_t t34 = -7407;

    t34 = ((x137!=x138)*(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x141 = UINT64_MAX;
	int32_t x142 = -357663;
	int32_t x144 = INT32_MIN;

    t35 = ((x141!=x142)*(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 323188LL;
	int8_t x146 = 11;
	volatile int8_t x147 = INT8_MIN;
	volatile int32_t t36 = 8307027;

    t36 = ((x145!=x146)*(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 12U;
	int64_t x150 = INT64_MAX;
	volatile int32_t x151 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;

    t37 = ((x149!=x150)*(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	volatile int16_t x155 = 5232;
	static int64_t x156 = 135459073240306LL;

    t38 = ((x153!=x154)*(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static uint8_t x158 = 50U;
	uint8_t x159 = 0U;
	uint64_t x160 = 32792157073LLU;
	int32_t t39 = -130786;

    t39 = ((x157!=x158)*(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	static uint32_t x162 = 7909495U;
	volatile uint16_t x163 = UINT16_MAX;
	volatile int32_t x164 = INT32_MIN;
	int32_t t40 = -901;

    t40 = ((x161!=x162)*(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint64_t x166 = 1LLU;
	int16_t x167 = INT16_MAX;
	int32_t t41 = -281;

    t41 = ((x165!=x166)*(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	static volatile int32_t x172 = INT32_MAX;
	int32_t t42 = -20707385;

    t42 = ((x169!=x170)*(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 0U;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 52578148;

    t43 = ((x173!=x174)*(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MIN;
	int16_t x180 = INT16_MIN;

    t44 = ((x177!=x178)*(x179==x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -1;
	static volatile int32_t t45 = 3942351;

    t45 = ((x181!=x182)*(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -957394399;
	int16_t x186 = -1;
	int64_t x187 = -1LL;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -29;

    t46 = ((x185!=x186)*(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x190 = 139478721237665748LL;
	volatile uint16_t x191 = 2U;

    t47 = ((x189!=x190)*(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 22225LLU;
	volatile int8_t x194 = INT8_MIN;
	volatile int64_t x195 = INT64_MIN;
	int8_t x196 = 63;
	int32_t t48 = 40916;

    t48 = ((x193!=x194)*(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 14U;
	uint32_t x198 = UINT32_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t49 = -6612250;

    t49 = ((x197!=x198)*(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    

    t50 = ((x201!=x202)*(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	volatile uint64_t x208 = 941661726713514400LLU;

    t51 = ((x205!=x206)*(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	volatile int8_t x210 = -1;
	volatile uint64_t x211 = 33LLU;
	volatile uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -29229;

    t52 = ((x209!=x210)*(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	uint32_t x214 = 627277U;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t53 = 12;

    t53 = ((x213!=x214)*(x215==x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x218 = -2;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;

    t54 = ((x217!=x218)*(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MAX;
	volatile uint8_t x222 = UINT8_MAX;
	static int32_t x223 = 29659739;
	int32_t x224 = INT32_MAX;
	int32_t t55 = -71;

    t55 = ((x221!=x222)*(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x225 = INT64_MIN;
	int64_t x226 = 13LL;
	static uint16_t x228 = UINT16_MAX;
	int32_t t56 = 45180762;

    t56 = ((x225!=x226)*(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	uint16_t x230 = 3720U;
	static int32_t x231 = INT32_MAX;

    t57 = ((x229!=x230)*(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = INT8_MIN;
	static int8_t x235 = 3;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t58 = -177;

    t58 = ((x233!=x234)*(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = -1;
	volatile int64_t x238 = -1LL;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MAX;

    t59 = ((x237!=x238)*(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 1220198U;
	int16_t x243 = -1;
	int32_t x244 = INT32_MAX;
	int32_t t60 = -1;

    t60 = ((x241!=x242)*(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = -18;
	int32_t t61 = 78390623;

    t61 = ((x245!=x246)*(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x249 = 12987U;
	uint32_t x250 = 44643U;
	volatile int8_t x251 = INT8_MAX;
	static uint64_t x252 = 1129833LLU;

    t62 = ((x249!=x250)*(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 20896U;
	volatile int64_t x254 = -132858440719LL;
	static int8_t x256 = INT8_MIN;

    t63 = ((x253!=x254)*(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = -7;
	volatile int8_t x258 = -5;
	int8_t x260 = -44;
	static volatile int32_t t64 = -72039596;

    t64 = ((x257!=x258)*(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x262 = UINT32_MAX;
	int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = UINT64_MAX;
	int32_t t65 = 4316;

    t65 = ((x261!=x262)*(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	int8_t x266 = 0;
	int8_t x267 = -1;
	static int8_t x268 = 2;
	volatile int32_t t66 = 124511850;

    t66 = ((x265!=x266)*(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int64_t x270 = INT64_MIN;
	static volatile int32_t t67 = 299238507;

    t67 = ((x269!=x270)*(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = UINT16_MAX;
	static uint8_t x276 = UINT8_MAX;
	static volatile int32_t t68 = 843;

    t68 = ((x273!=x274)*(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x278 = 14LLU;
	static int32_t t69 = 712;

    t69 = ((x277!=x278)*(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 8;
	int16_t x282 = 47;
	int32_t x283 = -1;
	volatile int32_t x284 = -1;

    t70 = ((x281!=x282)*(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x286 = UINT16_MAX;
	int32_t x287 = -26;
	int8_t x288 = 4;

    t71 = ((x285!=x286)*(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -139;

    t72 = ((x289!=x290)*(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 6193039572811487LLU;
	static int8_t x294 = -1;
	volatile uint64_t x295 = 447075899LLU;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -929269936;

    t73 = ((x293!=x294)*(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	volatile int64_t x298 = INT64_MIN;
	int32_t x299 = -1;
	uint8_t x300 = 18U;
	volatile int32_t t74 = 31413;

    t74 = ((x297!=x298)*(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -3214LL;
	uint32_t x302 = 5066U;
	int32_t x304 = -1;
	static volatile int32_t t75 = 45338731;

    t75 = ((x301!=x302)*(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	volatile int16_t x307 = 408;
	int32_t t76 = -2;

    t76 = ((x305!=x306)*(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x309 = 2;
	static int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = UINT64_MAX;
	int16_t x312 = -912;
	int32_t t77 = 101;

    t77 = ((x309!=x310)*(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 3U;
	static uint64_t x315 = UINT64_MAX;
	volatile int32_t t78 = 1;

    t78 = ((x313!=x314)*(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = 263U;
	static uint32_t x320 = 273U;
	volatile int32_t t79 = 51060944;

    t79 = ((x317!=x318)*(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = -166044122167811854LL;
	int64_t x322 = INT64_MAX;
	volatile int8_t x323 = INT8_MIN;
	volatile uint8_t x324 = 1U;
	volatile int32_t t80 = -306609634;

    t80 = ((x321!=x322)*(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = -1LL;
	int64_t x326 = -87670658LL;
	volatile int32_t x327 = 3209;
	int16_t x328 = INT16_MAX;
	int32_t t81 = -200080964;

    t81 = ((x325!=x326)*(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = 2075355;
	uint32_t x330 = 356U;
	int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;

    t82 = ((x329!=x330)*(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -5699;
	int32_t x334 = INT32_MIN;
	uint8_t x335 = 34U;
	int32_t x336 = -119404063;
	volatile int32_t t83 = 17234;

    t83 = ((x333!=x334)*(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x339 = INT16_MIN;
	static int16_t x340 = -1;
	volatile int32_t t84 = -3190;

    t84 = ((x337!=x338)*(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	static int16_t x342 = -1;
	int32_t x343 = INT32_MAX;
	int32_t t85 = 0;

    t85 = ((x341!=x342)*(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x345 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MAX;
	int32_t t86 = 25268;

    t86 = ((x345!=x346)*(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x351 = 2;
	int16_t x352 = INT16_MIN;
	volatile int32_t t87 = -15619;

    t87 = ((x349!=x350)*(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 456U;
	uint32_t x354 = 516962759U;
	int8_t x355 = 27;
	volatile int16_t x356 = -1;
	volatile int32_t t88 = 14290;

    t88 = ((x353!=x354)*(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = 70011;
	int16_t x359 = -382;
	uint8_t x360 = 118U;
	int32_t t89 = 107998555;

    t89 = ((x357!=x358)*(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x363 = 1U;
	int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -59872638;

    t90 = ((x361!=x362)*(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = -1;
	static uint32_t x366 = UINT32_MAX;
	volatile uint32_t x367 = 34U;
	uint16_t x368 = 14710U;

    t91 = ((x365!=x366)*(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	int16_t x370 = -43;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = 1;

    t92 = ((x369!=x370)*(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile uint16_t x376 = 1156U;
	int32_t t93 = 1;

    t93 = ((x373!=x374)*(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	static int16_t x379 = 1;
	uint16_t x380 = 0U;
	volatile int32_t t94 = 404446487;

    t94 = ((x377!=x378)*(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 0U;
	int32_t x382 = INT32_MIN;
	int32_t x383 = 147217633;
	static volatile uint64_t x384 = UINT64_MAX;
	int32_t t95 = 6;

    t95 = ((x381!=x382)*(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 97U;
	volatile int8_t x386 = -3;
	uint16_t x388 = 12428U;

    t96 = ((x385!=x386)*(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 130;
	int8_t x390 = INT8_MAX;
	int32_t t97 = -26575;

    t97 = ((x389!=x390)*(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	volatile int64_t x394 = 18748492LL;
	static volatile uint64_t x395 = 153418022379LLU;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = -236;

    t98 = ((x393!=x394)*(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x398 = 1236267976U;
	int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	static int32_t t99 = 186;

    t99 = ((x397!=x398)*(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 17;
	uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = 93303537;

    t100 = ((x401!=x402)*(x403==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 24769680LL;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	int32_t x408 = INT32_MIN;
	volatile int32_t t101 = -20655;

    t101 = ((x405!=x406)*(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	volatile int32_t x410 = 5387;
	uint8_t x411 = 0U;
	static uint16_t x412 = UINT16_MAX;
	int32_t t102 = -22;

    t102 = ((x409!=x410)*(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = -1LL;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = -2105929;

    t103 = ((x413!=x414)*(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = 5867851013252089LL;
	volatile int32_t t104 = 130459;

    t104 = ((x417!=x418)*(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = UINT8_MAX;
	int16_t x422 = INT16_MIN;
	static int32_t t105 = 83;

    t105 = ((x421!=x422)*(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	uint8_t x427 = UINT8_MAX;
	static volatile int16_t x428 = INT16_MIN;
	int32_t t106 = -1;

    t106 = ((x425!=x426)*(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -1;
	static int32_t x430 = INT32_MIN;
	int64_t x431 = -12472LL;
	int8_t x432 = INT8_MIN;
	int32_t t107 = -5561551;

    t107 = ((x429!=x430)*(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x433 = -1;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = UINT16_MAX;
	uint64_t x436 = 329349691528814LLU;

    t108 = ((x433!=x434)*(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 1759U;
	uint64_t x440 = 220LLU;
	static int32_t t109 = -12366;

    t109 = ((x437!=x438)*(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -313;
	int64_t x442 = -7139LL;

    t110 = ((x441!=x442)*(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = -1;
	int32_t x446 = INT32_MIN;
	static int8_t x447 = INT8_MIN;
	int8_t x448 = -1;

    t111 = ((x445!=x446)*(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 554U;
	static int64_t x450 = 1600780658004LL;
	volatile int8_t x451 = 0;
	uint8_t x452 = UINT8_MAX;
	int32_t t112 = -204901653;

    t112 = ((x449!=x450)*(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	uint16_t x454 = 240U;
	volatile int16_t x455 = INT16_MIN;
	volatile int32_t x456 = -59;
	int32_t t113 = 1;

    t113 = ((x453!=x454)*(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MAX;
	static uint32_t x459 = 15145U;
	static int64_t x460 = INT64_MIN;
	int32_t t114 = -6355;

    t114 = ((x457!=x458)*(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MAX;
	volatile int64_t x463 = -197LL;
	volatile uint16_t x464 = 748U;
	volatile int32_t t115 = 916662159;

    t115 = ((x461!=x462)*(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MIN;
	static uint16_t x468 = 1U;
	static int32_t t116 = -13592353;

    t116 = ((x465!=x466)*(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x470 = -1;
	volatile int32_t t117 = -4;

    t117 = ((x469!=x470)*(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x475 = 14U;
	volatile int32_t x476 = INT32_MAX;
	volatile int32_t t118 = 21233728;

    t118 = ((x473!=x474)*(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = INT32_MAX;
	static uint16_t x478 = 15U;
	volatile int8_t x479 = INT8_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	volatile int32_t t119 = 8837480;

    t119 = ((x477!=x478)*(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MIN;
	uint32_t x483 = 150U;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -5;

    t120 = ((x481!=x482)*(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 202U;
	int64_t x486 = INT64_MIN;
	int32_t t121 = -3663;

    t121 = ((x485!=x486)*(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x490 = -1;
	int32_t t122 = 649;

    t122 = ((x489!=x490)*(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	int64_t x494 = -1LL;
	static uint64_t x495 = UINT64_MAX;
	int32_t t123 = 31940;

    t123 = ((x493!=x494)*(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = -1;
	int64_t x498 = INT64_MAX;
	static int16_t x499 = INT16_MAX;
	uint64_t x500 = 396LLU;
	volatile int32_t t124 = -1;

    t124 = ((x497!=x498)*(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x502 = -1;
	int32_t x503 = -408;
	int64_t x504 = -1LL;
	volatile int32_t t125 = 131852830;

    t125 = ((x501!=x502)*(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = INT8_MAX;
	uint8_t x506 = 0U;
	static int64_t x507 = -13LL;
	uint64_t x508 = 7132438077942352382LLU;
	int32_t t126 = -16005295;

    t126 = ((x505!=x506)*(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 18U;
	int32_t x511 = INT32_MIN;
	static volatile int64_t x512 = INT64_MIN;
	int32_t t127 = 13;

    t127 = ((x509!=x510)*(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int16_t x514 = 105;
	uint8_t x515 = 5U;
	static int32_t t128 = 1;

    t128 = ((x513!=x514)*(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x518 = INT16_MIN;
	int32_t t129 = -3135691;

    t129 = ((x517!=x518)*(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	volatile uint32_t x522 = 12450U;
	uint16_t x523 = 421U;
	volatile int32_t t130 = -1911529;

    t130 = ((x521!=x522)*(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	int8_t x526 = INT8_MIN;
	volatile uint64_t x527 = 0LLU;
	volatile int32_t t131 = -42991;

    t131 = ((x525!=x526)*(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x529 = 17262U;
	int32_t x530 = 1892342;
	static uint16_t x531 = 206U;
	int16_t x532 = INT16_MIN;
	int32_t t132 = -199384;

    t132 = ((x529!=x530)*(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	uint16_t x534 = 13695U;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t133 = 531346979;

    t133 = ((x533!=x534)*(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 806;
	static int64_t x540 = INT64_MAX;
	volatile int32_t t134 = 986;

    t134 = ((x537!=x538)*(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 3363490760054093LL;
	static volatile int16_t x542 = INT16_MAX;

    t135 = ((x541!=x542)*(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MAX;
	int64_t x547 = -753266LL;
	int64_t x548 = INT64_MIN;

    t136 = ((x545!=x546)*(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x551 = 275;
	int32_t x552 = -3454920;
	int32_t t137 = 216;

    t137 = ((x549!=x550)*(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	int16_t x554 = 312;
	int8_t x555 = -11;
	static int8_t x556 = -1;
	volatile int32_t t138 = 28886;

    t138 = ((x553!=x554)*(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t139 = -389653;

    t139 = ((x557!=x558)*(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	int32_t x562 = -5;
	static int16_t x563 = INT16_MIN;
	int32_t t140 = -875477;

    t140 = ((x561!=x562)*(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	volatile int8_t x567 = -11;
	volatile uint16_t x568 = 2639U;
	static volatile int32_t t141 = -10571;

    t141 = ((x565!=x566)*(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	uint8_t x571 = 7U;
	uint64_t x572 = UINT64_MAX;
	static int32_t t142 = -104;

    t142 = ((x569!=x570)*(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x574 = UINT8_MAX;
	uint16_t x575 = 2680U;
	static volatile uint64_t x576 = 290395LLU;
	static volatile int32_t t143 = -11287;

    t143 = ((x573!=x574)*(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x580 = 1;
	int32_t t144 = -11;

    t144 = ((x577!=x578)*(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x581 = UINT8_MAX;
	uint8_t x583 = 3U;
	int64_t x584 = 6623096LL;

    t145 = ((x581!=x582)*(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x586 = 6867829119128460LLU;
	static int32_t x587 = -111474079;

    t146 = ((x585!=x586)*(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x590 = 75;
	static volatile int64_t x592 = 22654765732LL;

    t147 = ((x589!=x590)*(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 30267;
	static int64_t x594 = 210557496366085690LL;
	int32_t x595 = INT32_MIN;
	int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -421;

    t148 = ((x593!=x594)*(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x598 = 0;
	uint32_t x599 = UINT32_MAX;
	static volatile uint32_t x600 = 787090944U;
	int32_t t149 = 89841182;

    t149 = ((x597!=x598)*(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 1479683036U;
	int16_t x602 = INT16_MAX;
	volatile uint64_t x603 = 14840752LLU;
	uint64_t x604 = 2304207433293390077LLU;
	volatile int32_t t150 = 2775177;

    t150 = ((x601!=x602)*(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = -1LL;
	volatile int8_t x607 = 51;
	volatile int8_t x608 = INT8_MIN;
	volatile int32_t t151 = -1863455;

    t151 = ((x605!=x606)*(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 59260U;
	volatile uint64_t x611 = UINT64_MAX;
	int8_t x612 = -1;
	volatile int32_t t152 = 1822531;

    t152 = ((x609!=x610)*(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	volatile uint8_t x614 = 71U;
	volatile uint64_t x615 = 238221232LLU;
	int64_t x616 = INT64_MIN;
	static int32_t t153 = -1229618;

    t153 = ((x613!=x614)*(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MIN;
	int8_t x619 = INT8_MIN;
	static volatile int64_t x620 = INT64_MIN;
	int32_t t154 = 111;

    t154 = ((x617!=x618)*(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 306575797LLU;
	int64_t x622 = -1LL;
	int64_t x623 = -964243LL;
	int32_t t155 = 21673;

    t155 = ((x621!=x622)*(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = INT16_MIN;
	static uint64_t x626 = UINT64_MAX;
	static int8_t x627 = INT8_MIN;
	volatile uint32_t x628 = 69624U;

    t156 = ((x625!=x626)*(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 16143U;
	int64_t x630 = INT64_MAX;
	static int8_t x631 = INT8_MAX;
	int64_t x632 = INT64_MAX;
	int32_t t157 = -2;

    t157 = ((x629!=x630)*(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MAX;
	uint8_t x636 = 1U;
	static int32_t t158 = 5;

    t158 = ((x633!=x634)*(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = UINT32_MAX;
	volatile int8_t x639 = -13;
	int64_t x640 = INT64_MAX;

    t159 = ((x637!=x638)*(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = -39597098078452LL;
	int64_t x642 = -1LL;
	int16_t x643 = INT16_MIN;
	uint16_t x644 = 1U;
	volatile int32_t t160 = -303478275;

    t160 = ((x641!=x642)*(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = 31;
	int16_t x648 = -12218;

    t161 = ((x645!=x646)*(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = 103U;
	int16_t x650 = INT16_MIN;
	int32_t x651 = -300;
	volatile int16_t x652 = -1;
	static int32_t t162 = 51;

    t162 = ((x649!=x650)*(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MAX;
	volatile int8_t x655 = INT8_MIN;
	int16_t x656 = INT16_MIN;
	int32_t t163 = 665471098;

    t163 = ((x653!=x654)*(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int16_t x658 = INT16_MIN;
	int32_t x659 = INT32_MIN;
	int16_t x660 = -3;
	volatile int32_t t164 = -9178118;

    t164 = ((x657!=x658)*(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -3;
	volatile uint8_t x662 = 0U;
	int32_t x664 = 1718;

    t165 = ((x661!=x662)*(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = 5349U;
	volatile int8_t x667 = -59;
	uint16_t x668 = UINT16_MAX;
	static int32_t t166 = -30;

    t166 = ((x665!=x666)*(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = INT64_MAX;
	uint32_t x670 = 18526398U;
	uint32_t x671 = UINT32_MAX;
	uint64_t x672 = 993LLU;
	int32_t t167 = -220773;

    t167 = ((x669!=x670)*(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MAX;
	int16_t x674 = INT16_MAX;
	volatile int8_t x675 = INT8_MIN;
	int16_t x676 = -1;
	volatile int32_t t168 = 373;

    t168 = ((x673!=x674)*(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -3;
	int8_t x678 = 29;
	volatile uint64_t x679 = 3LLU;
	volatile int64_t x680 = -816157041598LL;

    t169 = ((x677!=x678)*(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = -21;
	uint32_t x683 = 58125238U;
	int8_t x684 = 3;
	volatile int32_t t170 = -5;

    t170 = ((x681!=x682)*(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = INT32_MIN;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = -5;
	static volatile int32_t t171 = 2257;

    t171 = ((x685!=x686)*(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = INT16_MIN;
	uint64_t x691 = UINT64_MAX;
	uint8_t x692 = 1U;

    t172 = ((x689!=x690)*(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = 34;
	int8_t x695 = INT8_MIN;
	volatile int16_t x696 = -1;

    t173 = ((x693!=x694)*(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = UINT16_MAX;
	volatile int32_t x698 = 8614;
	uint16_t x699 = 9U;
	int32_t t174 = -9320;

    t174 = ((x697!=x698)*(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x702 = -1;
	int16_t x703 = INT16_MAX;
	volatile int32_t t175 = -799420598;

    t175 = ((x701!=x702)*(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MAX;
	int32_t x706 = -1;
	int32_t x707 = 233531;
	volatile int64_t x708 = INT64_MIN;
	volatile int32_t t176 = 28;

    t176 = ((x705!=x706)*(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = -1LL;
	int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	int32_t t177 = -348856;

    t177 = ((x709!=x710)*(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = -1LL;
	static int16_t x714 = 6;
	int8_t x715 = -1;

    t178 = ((x713!=x714)*(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 3956873708499388679LLU;
	volatile int16_t x718 = -1908;
	int8_t x719 = INT8_MIN;
	int32_t x720 = -1;
	int32_t t179 = -390;

    t179 = ((x717!=x718)*(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x721 = INT64_MIN;
	static uint64_t x722 = 680261317043468LLU;
	int32_t x723 = -811348;
	uint16_t x724 = 2U;
	volatile int32_t t180 = -655557;

    t180 = ((x721!=x722)*(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x725 = INT8_MIN;
	static int64_t x726 = INT64_MAX;
	uint32_t x727 = 351743873U;

    t181 = ((x725!=x726)*(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x730 = -1;
	volatile int32_t t182 = 1191;

    t182 = ((x729!=x730)*(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 155463265;
	int32_t x734 = 534494562;
	int32_t x735 = INT32_MIN;
	int32_t x736 = -5;
	volatile int32_t t183 = 12;

    t183 = ((x733!=x734)*(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x738 = -1562;
	volatile int32_t x739 = INT32_MIN;
	volatile int64_t x740 = -1LL;
	volatile int32_t t184 = 5642;

    t184 = ((x737!=x738)*(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x742 = INT64_MAX;
	int8_t x743 = 0;
	static int32_t t185 = 359;

    t185 = ((x741!=x742)*(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x745 = UINT16_MAX;
	uint16_t x746 = UINT16_MAX;
	int32_t x747 = -1557158;
	uint64_t x748 = UINT64_MAX;
	int32_t t186 = -1;

    t186 = ((x745!=x746)*(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	volatile uint8_t x750 = UINT8_MAX;
	volatile int16_t x751 = INT16_MIN;
	uint64_t x752 = UINT64_MAX;
	int32_t t187 = 1336;

    t187 = ((x749!=x750)*(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 1U;
	uint64_t x754 = UINT64_MAX;
	static int8_t x755 = 6;
	int32_t x756 = -1;
	volatile int32_t t188 = -1346948;

    t188 = ((x753!=x754)*(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x757 = 3U;
	uint16_t x758 = 14378U;
	volatile int32_t x759 = -32;
	int16_t x760 = INT16_MIN;
	int32_t t189 = 75158;

    t189 = ((x757!=x758)*(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = 1;
	static int8_t x763 = INT8_MIN;
	uint16_t x764 = 1U;
	volatile int32_t t190 = 0;

    t190 = ((x761!=x762)*(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint64_t x765 = 4945800903152LLU;
	volatile uint64_t x766 = 31008867053LLU;
	int16_t x767 = 2252;
	uint32_t x768 = 12646U;
	static volatile int32_t t191 = -34578498;

    t191 = ((x765!=x766)*(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 62U;
	int8_t x770 = INT8_MAX;
	uint16_t x771 = 8604U;
	int8_t x772 = INT8_MIN;
	int32_t t192 = -374768;

    t192 = ((x769!=x770)*(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x774 = -1;
	int8_t x775 = -1;
	static int32_t x776 = INT32_MIN;
	int32_t t193 = -665797;

    t193 = ((x773!=x774)*(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 1U;
	uint8_t x778 = 4U;
	static int8_t x779 = INT8_MIN;
	static volatile int8_t x780 = -2;
	static volatile int32_t t194 = 1;

    t194 = ((x777!=x778)*(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = 27474464081415680LL;
	int16_t x782 = INT16_MIN;
	uint64_t x784 = 69LLU;
	int32_t t195 = 7725889;

    t195 = ((x781!=x782)*(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x787 = UINT16_MAX;
	static volatile int32_t x788 = -84;
	int32_t t196 = -6067746;

    t196 = ((x785!=x786)*(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = INT8_MIN;
	int32_t x792 = INT32_MAX;
	volatile int32_t t197 = 782118;

    t197 = ((x789!=x790)*(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = 218857301;
	volatile uint32_t x794 = 114U;
	int8_t x795 = -1;
	int32_t x796 = INT32_MAX;
	volatile int32_t t198 = 106252;

    t198 = ((x793!=x794)*(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 62U;
	uint64_t x798 = 3088335601151877331LLU;
	static int16_t x799 = -1;
	volatile int32_t x800 = -9153723;
	int32_t t199 = 12267544;

    t199 = ((x797!=x798)*(x799==x800));

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

