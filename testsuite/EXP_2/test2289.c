
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

static volatile int64_t x1 = INT64_MIN;
uint64_t x2 = UINT64_MAX;
int32_t t2 = 13;
int32_t t3 = -1;
volatile int32_t t4 = 35;
int64_t x22 = -1LL;
static int16_t x29 = INT16_MAX;
int64_t x30 = -264646LL;
int32_t x31 = INT32_MIN;
int8_t x36 = INT8_MIN;
static int8_t x38 = INT8_MIN;
uint32_t x42 = UINT32_MAX;
volatile uint32_t x52 = 3460674U;
int32_t t12 = 17;
volatile int64_t x56 = INT64_MAX;
volatile int64_t x61 = INT64_MIN;
volatile int64_t x62 = INT64_MIN;
int16_t x66 = -1;
int32_t x70 = -1359;
static volatile int64_t x72 = -1LL;
int32_t t17 = 17820;
uint64_t x76 = 29294LLU;
static uint32_t x84 = 8U;
uint32_t x86 = UINT32_MAX;
uint16_t x88 = 3057U;
uint8_t x89 = 2U;
int16_t x99 = -1;
int32_t x111 = INT32_MIN;
int64_t x112 = INT64_MAX;
int32_t x115 = -2;
int8_t x119 = -1;
int16_t x123 = -1;
static int8_t x130 = INT8_MIN;
volatile int32_t t32 = 5069;
volatile int16_t x134 = -1;
static int64_t x143 = INT64_MIN;
uint16_t x147 = UINT16_MAX;
int8_t x150 = INT8_MIN;
static int16_t x156 = 291;
static int16_t x158 = 7;
static int64_t x160 = 1709227252373LL;
int64_t x164 = 26529LL;
static int64_t x165 = 347449LL;
static int64_t x167 = INT64_MIN;
static volatile int32_t t41 = 44602;
int32_t x176 = -4829872;
int32_t t44 = 469401;
uint32_t x181 = UINT32_MAX;
int8_t x185 = -1;
volatile int32_t t46 = 435013365;
static uint64_t x190 = UINT64_MAX;
volatile int32_t t47 = -85880;
int8_t x193 = 14;
int64_t x202 = INT64_MAX;
uint8_t x203 = UINT8_MAX;
volatile int32_t t50 = -12797845;
int16_t x209 = -1;
int64_t x214 = INT64_MIN;
static volatile int32_t t53 = 108154641;
volatile int32_t t54 = -24180809;
uint16_t x228 = UINT16_MAX;
static uint16_t x229 = 1217U;
int32_t t57 = -435007;
volatile int16_t x233 = -1682;
int32_t t59 = 1;
volatile int32_t x242 = INT32_MIN;
volatile uint16_t x243 = UINT16_MAX;
int32_t t60 = -71975910;
uint64_t x248 = UINT64_MAX;
volatile int32_t t63 = 2017666;
uint16_t x258 = 904U;
int64_t x263 = -1LL;
uint16_t x270 = UINT16_MAX;
int32_t t67 = 1080;
static int16_t x275 = 50;
static int8_t x278 = INT8_MAX;
static int32_t x280 = -266;
int32_t t69 = 4;
volatile int32_t x281 = -862870811;
volatile int16_t x284 = INT16_MIN;
uint16_t x293 = 17U;
int16_t x296 = -19;
static int16_t x301 = INT16_MAX;
uint16_t x306 = 0U;
uint8_t x308 = UINT8_MAX;
volatile int32_t t76 = -738;
int32_t x315 = INT32_MAX;
int32_t x317 = -1;
volatile uint16_t x320 = 7U;
uint32_t x322 = 38644130U;
int32_t x324 = -1796029;
int32_t x330 = INT32_MIN;
volatile int32_t t82 = -30;
static volatile int8_t x337 = 1;
uint64_t x351 = UINT64_MAX;
volatile uint64_t x356 = 198342038855627LLU;
uint16_t x358 = 1U;
volatile int8_t x363 = 0;
static int32_t x364 = -12;
int16_t x368 = INT16_MIN;
int32_t x377 = -844833924;
int32_t x382 = INT32_MIN;
uint32_t x383 = UINT32_MAX;
int32_t x384 = INT32_MIN;
int8_t x385 = -3;
int64_t x387 = INT64_MAX;
int16_t x388 = 1;
static uint16_t x392 = 2433U;
static volatile uint32_t x395 = UINT32_MAX;
int32_t x400 = -30100275;
volatile uint8_t x407 = 22U;
uint64_t x408 = 266111575610LLU;
uint8_t x413 = 1U;
int32_t x418 = -1;
int32_t x424 = 480;
int32_t t105 = -279;
int32_t t107 = -48455;
int32_t x434 = INT32_MIN;
static uint64_t x435 = UINT64_MAX;
volatile int64_t x437 = -1LL;
uint8_t x440 = 82U;
int32_t t109 = 410678985;
int32_t t111 = -39925743;
uint64_t x456 = 186364496LLU;
int32_t t113 = 57639;
int64_t x458 = 5501385579112846LL;
int16_t x464 = -50;
int32_t t116 = 3;
int32_t x472 = 32475;
int32_t t117 = 13342911;
static int16_t x473 = INT16_MIN;
uint8_t x475 = UINT8_MAX;
int64_t x477 = -383186714LL;
int64_t x481 = INT64_MIN;
int16_t x485 = INT16_MIN;
int8_t x486 = -1;
static int16_t x492 = -1;
static int32_t t123 = -6367598;
int64_t x503 = -1LL;
static uint16_t x508 = UINT16_MAX;
uint16_t x514 = 11378U;
int32_t x516 = -5082864;
uint8_t x517 = 11U;
int32_t x520 = 629047350;
uint32_t x524 = UINT32_MAX;
static volatile int32_t t131 = -1;
static int8_t x532 = -1;
int32_t t132 = -1226346;
static uint32_t x539 = UINT32_MAX;
static int8_t x546 = -1;
volatile int16_t x547 = -1;
int32_t t137 = -8370;
int8_t x567 = -30;
int64_t x574 = -18914LL;
static volatile int32_t t143 = -288;
int64_t x579 = INT64_MAX;
volatile int8_t x585 = 30;
uint8_t x589 = UINT8_MAX;
int16_t x591 = -12495;
static int8_t x592 = -1;
int32_t t147 = -20;
uint64_t x593 = 21983875533705589LLU;
static volatile int32_t x597 = -1;
int8_t x598 = 1;
int32_t x604 = -1;
static int64_t x614 = -1LL;
int16_t x627 = INT16_MAX;
volatile int32_t x628 = INT32_MIN;
static uint32_t x638 = 4084543U;
volatile int32_t x644 = INT32_MIN;
uint64_t x647 = UINT64_MAX;
int8_t x651 = -2;
volatile uint16_t x653 = 460U;
static int32_t x654 = INT32_MIN;
int8_t x658 = -14;
volatile int32_t x659 = 11;
int32_t t164 = -297592;
int64_t x663 = INT64_MIN;
uint16_t x668 = 3U;
int32_t t167 = 231524;
int64_t x682 = INT64_MIN;
int16_t x690 = -627;
volatile int32_t t172 = 441;
static int32_t x694 = -1;
uint32_t x696 = UINT32_MAX;
int64_t x707 = INT64_MIN;
volatile uint32_t x710 = UINT32_MAX;
int32_t x716 = INT32_MAX;
int32_t t179 = 0;
int16_t x724 = INT16_MAX;
int64_t x731 = INT64_MIN;
volatile int16_t x732 = INT16_MIN;
static uint8_t x736 = 22U;
int64_t x739 = 4238515211LL;
uint64_t x740 = 233464391LLU;
volatile int32_t t184 = 413376709;
volatile int32_t t185 = -88006;
uint16_t x747 = 229U;
volatile uint16_t x750 = UINT16_MAX;
volatile int16_t x752 = -3;
volatile int8_t x757 = INT8_MIN;
static volatile uint16_t x759 = 0U;
int32_t x761 = INT32_MIN;
int64_t x768 = -32725LL;
volatile int32_t t191 = 25314941;
uint64_t x775 = UINT64_MAX;
int64_t x778 = INT64_MIN;
uint8_t x787 = UINT8_MAX;
int64_t x788 = 14LL;
static volatile int32_t t196 = -19794283;
int64_t x790 = INT64_MIN;
volatile int32_t t197 = -2;
uint32_t x797 = UINT32_MAX;


void f0(void) {
    	static int64_t x3 = 92449LL;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 52;

    t0 = ((x1<=(x2&x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	int8_t x6 = -2;
	uint32_t x7 = 564724U;
	static int8_t x8 = -5;
	int32_t t1 = 48;

    t1 = ((x5<=(x6&x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile int16_t x10 = INT16_MAX;
	uint32_t x11 = 42917162U;
	static volatile int8_t x12 = -1;

    t2 = ((x9<=(x10&x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	int16_t x14 = -1;
	int32_t x15 = -1;
	static uint64_t x16 = UINT64_MAX;

    t3 = ((x13<=(x14&x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 2U;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;

    t4 = ((x17<=(x18&x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = 16852;
	uint16_t x23 = 166U;
	volatile int32_t x24 = -1;
	volatile int32_t t5 = -188;

    t5 = ((x21<=(x22&x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -3;
	int16_t x26 = INT16_MAX;
	int16_t x27 = -1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 249;

    t6 = ((x25<=(x26&x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x32 = -1;
	volatile int32_t t7 = 10406532;

    t7 = ((x29<=(x30&x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -3;
	uint8_t x34 = 1U;
	uint64_t x35 = UINT64_MAX;
	int32_t t8 = -1;

    t8 = ((x33<=(x34&x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint16_t x39 = 9U;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t9 = -535303173;

    t9 = ((x37<=(x38&x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -16972;

    t10 = ((x41<=(x42&x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 1528992025272265LL;
	int8_t x46 = -1;
	int64_t x47 = INT64_MIN;
	volatile int32_t x48 = INT32_MAX;
	int32_t t11 = 0;

    t11 = ((x45<=(x46&x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint16_t x50 = 205U;
	int32_t x51 = -1;

    t12 = ((x49<=(x50&x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int8_t x54 = INT8_MAX;
	static int8_t x55 = 11;
	volatile int32_t t13 = 1699;

    t13 = ((x53<=(x54&x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 15298552311584152LLU;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 298379365;

    t14 = ((x57<=(x58&x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = -1;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -23979;

    t15 = ((x61<=(x62&x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static uint64_t x67 = 1488356202558485LLU;
	volatile uint8_t x68 = 12U;
	static int32_t t16 = -1932;

    t16 = ((x65<=(x66&x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = INT16_MAX;
	uint64_t x71 = 53468967LLU;

    t17 = ((x69<=(x70&x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 2999U;
	int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	volatile int32_t t18 = 326478;

    t18 = ((x73<=(x74&x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = -48;
	volatile uint64_t x79 = 1211841956LLU;
	int8_t x80 = -1;
	volatile int32_t t19 = 104440627;

    t19 = ((x77<=(x78&x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MAX;
	int16_t x82 = INT16_MIN;
	volatile uint8_t x83 = UINT8_MAX;
	int32_t t20 = 7398;

    t20 = ((x81<=(x82&x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 25U;
	int8_t x87 = -1;
	volatile int32_t t21 = -800423656;

    t21 = ((x85<=(x86&x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x90 = 147LLU;
	uint16_t x91 = 7U;
	uint16_t x92 = 3418U;
	volatile int32_t t22 = -659;

    t22 = ((x89<=(x90&x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	int32_t x94 = INT32_MIN;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MAX;
	volatile int32_t t23 = 0;

    t23 = ((x93<=(x94&x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 1U;
	uint16_t x98 = 24U;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 260437573;

    t24 = ((x97<=(x98&x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 3;
	int8_t x102 = INT8_MAX;
	static uint16_t x103 = UINT16_MAX;
	int32_t x104 = -1;
	volatile int32_t t25 = -902;

    t25 = ((x101<=(x102&x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = UINT16_MAX;
	uint32_t x106 = 606U;
	volatile uint16_t x107 = UINT16_MAX;
	static uint64_t x108 = 11891783LLU;
	int32_t t26 = 272899;

    t26 = ((x105<=(x106&x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = INT64_MIN;
	volatile int32_t t27 = 0;

    t27 = ((x109<=(x110&x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	static int32_t x114 = -14132706;
	int64_t x116 = INT64_MAX;
	static int32_t t28 = 70882778;

    t28 = ((x113<=(x114&x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -1;
	uint32_t x118 = 7U;
	static uint8_t x120 = UINT8_MAX;
	int32_t t29 = -198;

    t29 = ((x117<=(x118&x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MAX;
	int64_t x122 = -1LL;
	int16_t x124 = INT16_MAX;
	volatile int32_t t30 = -2;

    t30 = ((x121<=(x122&x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 15U;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 58U;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 1;

    t31 = ((x125<=(x126&x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	int64_t x131 = 436LL;
	static uint8_t x132 = 14U;

    t32 = ((x129<=(x130&x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	volatile int64_t x136 = INT64_MAX;
	int32_t t33 = 66535496;

    t33 = ((x133<=(x134&x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = 22U;
	volatile int32_t x140 = -1;
	int32_t t34 = -667439719;

    t34 = ((x137<=(x138&x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 321U;
	uint8_t x142 = UINT8_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t35 = -727;

    t35 = ((x141<=(x142&x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	uint64_t x146 = 15090530683917LLU;
	volatile int16_t x148 = -1;
	int32_t t36 = 24520;

    t36 = ((x145<=(x146&x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 184108097547176696LL;
	int16_t x151 = -7120;
	int64_t x152 = -901909LL;
	volatile int32_t t37 = 25;

    t37 = ((x149<=(x150&x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -248;
	int16_t x154 = -1987;
	int32_t x155 = INT32_MIN;
	int32_t t38 = -5727349;

    t38 = ((x153<=(x154&x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	volatile int16_t x159 = INT16_MAX;
	static volatile int32_t t39 = 2304138;

    t39 = ((x157<=(x158&x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 81558;
	volatile uint32_t x162 = 518334U;
	int8_t x163 = 24;
	volatile int32_t t40 = 77381667;

    t40 = ((x161<=(x162&x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x166 = UINT32_MAX;
	volatile int64_t x168 = -17190181351167671LL;

    t41 = ((x165<=(x166&x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 261LLU;
	int64_t x170 = 0LL;
	int8_t x171 = INT8_MIN;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = -56;

    t42 = ((x169<=(x170&x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 1;
	int8_t x174 = INT8_MIN;
	volatile int64_t x175 = 41583024773760LL;
	volatile int32_t t43 = 77;

    t43 = ((x173<=(x174&x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = -18551;
	static int32_t x178 = INT32_MAX;
	static int32_t x179 = -10837;
	int32_t x180 = INT32_MIN;

    t44 = ((x177<=(x178&x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = 35LL;
	uint8_t x183 = 0U;
	uint16_t x184 = 9U;
	int32_t t45 = 12674;

    t45 = ((x181<=(x182&x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x186 = UINT64_MAX;
	int64_t x187 = 23955408LL;
	int32_t x188 = -1;

    t46 = ((x185<=(x186&x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	uint64_t x191 = UINT64_MAX;
	static int16_t x192 = 9;

    t47 = ((x189<=(x190&x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x194 = -1797980456431LL;
	uint16_t x195 = 10U;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -1;

    t48 = ((x193<=(x194&x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MAX;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 188U;
	int64_t x200 = 21097LL;
	static int32_t t49 = -9622227;

    t49 = ((x197<=(x198&x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 83774U;
	int8_t x204 = -43;

    t50 = ((x201<=(x202&x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -401056LL;
	int32_t x206 = -5571;
	uint32_t x207 = 18881U;
	uint16_t x208 = UINT16_MAX;
	int32_t t51 = 23730;

    t51 = ((x205<=(x206&x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -1LL;
	volatile int8_t x211 = INT8_MAX;
	volatile int64_t x212 = -1LL;
	volatile int32_t t52 = -1463128;

    t52 = ((x209<=(x210&x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	volatile int64_t x215 = -1LL;
	uint64_t x216 = UINT64_MAX;

    t53 = ((x213<=(x214&x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	uint8_t x218 = UINT8_MAX;
	uint8_t x219 = 1U;
	int8_t x220 = 1;

    t54 = ((x217<=(x218&x219))!=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 1;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = -6838LL;
	int32_t t55 = 56619956;

    t55 = ((x221<=(x222&x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	static uint64_t x226 = 17472542137940LLU;
	uint32_t x227 = 60U;
	int32_t t56 = 269908299;

    t56 = ((x225<=(x226&x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x230 = 3U;
	volatile int64_t x231 = -117888242269346LL;
	int16_t x232 = INT16_MAX;

    t57 = ((x229<=(x230&x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x234 = 1;
	int64_t x235 = INT64_MIN;
	int64_t x236 = 8165139812LL;
	volatile int32_t t58 = -915457;

    t58 = ((x233<=(x234&x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = 11296825692LLU;
	static uint8_t x240 = 0U;

    t59 = ((x237<=(x238&x239))!=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	int64_t x244 = INT64_MIN;

    t60 = ((x241<=(x242&x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = 779;
	static int64_t x246 = -1LL;
	int8_t x247 = 39;
	int32_t t61 = 155;

    t61 = ((x245<=(x246&x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = UINT8_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = INT16_MAX;
	int32_t t62 = 7;

    t62 = ((x249<=(x250&x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = 3813732;
	static int64_t x254 = 4567LL;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 3U;

    t63 = ((x253<=(x254&x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	volatile int64_t x259 = INT64_MIN;
	volatile int8_t x260 = -1;
	int32_t t64 = 370;

    t64 = ((x257<=(x258&x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t65 = 78376677;

    t65 = ((x261<=(x262&x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = 115719305LL;
	static int64_t x266 = -14LL;
	static volatile int64_t x267 = -1LL;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 6106208;

    t66 = ((x265<=(x266&x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	static uint32_t x271 = 1U;
	volatile int32_t x272 = INT32_MIN;

    t67 = ((x269<=(x270&x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	uint64_t x274 = 835914LLU;
	static volatile int32_t x276 = -1;
	volatile int32_t t68 = 2150839;

    t68 = ((x273<=(x274&x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = -1;
	volatile uint64_t x279 = 15LLU;

    t69 = ((x277<=(x278&x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x282 = INT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int32_t t70 = -1360;

    t70 = ((x281<=(x282&x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = 202969;
	uint64_t x286 = UINT64_MAX;
	static uint16_t x287 = UINT16_MAX;
	int8_t x288 = 3;
	volatile int32_t t71 = -109514;

    t71 = ((x285<=(x286&x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 0LL;
	volatile int64_t x290 = 585997038LL;
	uint8_t x291 = 1U;
	static uint8_t x292 = 5U;
	static int32_t t72 = 145;

    t72 = ((x289<=(x290&x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x294 = 1958U;
	int8_t x295 = -1;
	static int32_t t73 = -31;

    t73 = ((x293<=(x294&x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	static int8_t x299 = -4;
	volatile int8_t x300 = 2;
	volatile int32_t t74 = 1720282;

    t74 = ((x297<=(x298&x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x302 = 29420U;
	volatile int32_t x303 = -113393345;
	int8_t x304 = 1;
	int32_t t75 = -56477;

    t75 = ((x301<=(x302&x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x307 = 61;

    t76 = ((x305<=(x306&x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 1;
	uint16_t x310 = UINT16_MAX;
	static int8_t x311 = -34;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 194508;

    t77 = ((x309<=(x310&x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	int8_t x316 = -25;
	int32_t t78 = -15198796;

    t78 = ((x313<=(x314&x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x318 = UINT64_MAX;
	uint16_t x319 = UINT16_MAX;
	volatile int32_t t79 = -130448;

    t79 = ((x317<=(x318&x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = -16;
	volatile uint16_t x323 = 0U;
	int32_t t80 = 3;

    t80 = ((x321<=(x322&x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 3829206U;
	uint16_t x326 = 1U;
	int64_t x327 = 292540591955641964LL;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = -439;

    t81 = ((x325<=(x326&x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x331 = -1;
	uint8_t x332 = 9U;

    t82 = ((x329<=(x330&x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	static volatile int16_t x334 = 241;
	uint32_t x335 = 6U;
	int32_t x336 = 61;
	volatile int32_t t83 = 3608;

    t83 = ((x333<=(x334&x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = 242420U;
	int8_t x339 = -30;
	static volatile int8_t x340 = INT8_MAX;
	static int32_t t84 = -3;

    t84 = ((x337<=(x338&x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = -56715;
	volatile int8_t x342 = -4;
	volatile uint32_t x343 = 1U;
	uint64_t x344 = 9LLU;
	static volatile int32_t t85 = 2163;

    t85 = ((x341<=(x342&x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	int32_t x346 = -5;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MIN;
	int32_t t86 = 48109;

    t86 = ((x345<=(x346&x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 38U;
	static uint16_t x350 = 1505U;
	int32_t x352 = -1;
	volatile int32_t t87 = -14016;

    t87 = ((x349<=(x350&x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	uint64_t x354 = UINT64_MAX;
	static int16_t x355 = INT16_MAX;
	static volatile int32_t t88 = -26690893;

    t88 = ((x353<=(x354&x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 29U;
	uint8_t x359 = 125U;
	static uint64_t x360 = 4106976852791410448LLU;
	volatile int32_t t89 = -1350;

    t89 = ((x357<=(x358&x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 116U;
	volatile uint8_t x362 = 82U;
	static volatile int32_t t90 = -6695199;

    t90 = ((x361<=(x362&x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = -1;
	int16_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static volatile int32_t t91 = 19333197;

    t91 = ((x365<=(x366&x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = 69529LLU;
	volatile int32_t t92 = -70;

    t92 = ((x369<=(x370&x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	int32_t x374 = -1;
	int8_t x375 = -1;
	static int64_t x376 = 708LL;
	static int32_t t93 = -880573048;

    t93 = ((x373<=(x374&x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x378 = INT8_MIN;
	static int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 95;

    t94 = ((x377<=(x378&x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 0LLU;
	static int32_t t95 = 1335;

    t95 = ((x381<=(x382&x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = 2318113;
	static int32_t t96 = -64;

    t96 = ((x385<=(x386&x387))!=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = 405731U;
	int64_t x390 = 20398738244LL;
	int8_t x391 = 2;
	volatile int32_t t97 = -506640;

    t97 = ((x389<=(x390&x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 9U;
	int64_t x394 = -1LL;
	static uint32_t x396 = 33095067U;
	volatile int32_t t98 = -201;

    t98 = ((x393<=(x394&x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = -977;
	uint16_t x398 = 1621U;
	static volatile uint8_t x399 = UINT8_MAX;
	static int32_t t99 = 321;

    t99 = ((x397<=(x398&x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = -1;
	int64_t x403 = -1LL;
	static uint32_t x404 = 140U;
	static volatile int32_t t100 = 89571;

    t100 = ((x401<=(x402&x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 4007142862315LLU;
	int32_t t101 = -139;

    t101 = ((x405<=(x406&x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = -1;
	int16_t x410 = -1;
	int16_t x411 = INT16_MAX;
	uint32_t x412 = 2832347U;
	volatile int32_t t102 = 8208006;

    t102 = ((x409<=(x410&x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x414 = 75U;
	int16_t x415 = INT16_MAX;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = 4622;

    t103 = ((x413<=(x414&x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x417 = INT32_MIN;
	int16_t x419 = 88;
	volatile int32_t x420 = INT32_MIN;
	int32_t t104 = -3;

    t104 = ((x417<=(x418&x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int64_t x422 = -1LL;
	int32_t x423 = INT32_MIN;

    t105 = ((x421<=(x422&x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	int64_t x426 = -5165954948135LL;
	int64_t x427 = INT64_MIN;
	static uint32_t x428 = 15744418U;
	int32_t t106 = -308130;

    t106 = ((x425<=(x426&x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = 215U;
	int64_t x430 = -68338LL;
	volatile int64_t x431 = INT64_MIN;
	int16_t x432 = -1;

    t107 = ((x429<=(x430&x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -1LL;
	volatile int32_t x436 = -1;
	volatile int32_t t108 = 19927462;

    t108 = ((x433<=(x434&x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = INT8_MIN;
	uint16_t x439 = UINT16_MAX;

    t109 = ((x437<=(x438&x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	static int8_t x442 = INT8_MIN;
	volatile int32_t x443 = -381;
	uint32_t x444 = 998598046U;
	int32_t t110 = -1;

    t110 = ((x441<=(x442&x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	int8_t x446 = INT8_MIN;
	static uint64_t x447 = UINT64_MAX;
	int8_t x448 = INT8_MIN;

    t111 = ((x445<=(x446&x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x449 = 13;
	int32_t x450 = INT32_MIN;
	uint8_t x451 = 2U;
	static uint32_t x452 = 2591110U;
	int32_t t112 = 37521;

    t112 = ((x449<=(x450&x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = -617;
	static uint16_t x454 = 1U;
	uint32_t x455 = UINT32_MAX;

    t113 = ((x453<=(x454&x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	int64_t x459 = 572639048698235LL;
	static int32_t x460 = INT32_MIN;
	int32_t t114 = -99604;

    t114 = ((x457<=(x458&x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	volatile uint64_t x462 = 333535197212LLU;
	static int64_t x463 = INT64_MIN;
	int32_t t115 = -53982;

    t115 = ((x461<=(x462&x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	int8_t x466 = 1;
	volatile int32_t x467 = -5;
	int32_t x468 = INT32_MIN;

    t116 = ((x465<=(x466&x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = -1;
	int8_t x470 = INT8_MAX;
	int32_t x471 = -1;

    t117 = ((x469<=(x470&x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = INT32_MIN;
	uint64_t x476 = 574773204476LLU;
	volatile int32_t t118 = 56753583;

    t118 = ((x473<=(x474&x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = INT8_MAX;
	int16_t x479 = INT16_MIN;
	uint8_t x480 = 13U;
	static int32_t t119 = -1043820371;

    t119 = ((x477<=(x478&x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MAX;
	uint32_t x483 = 55U;
	uint64_t x484 = UINT64_MAX;
	int32_t t120 = 16;

    t120 = ((x481<=(x482&x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x487 = INT16_MIN;
	volatile uint8_t x488 = 2U;
	volatile int32_t t121 = 3924;

    t121 = ((x485<=(x486&x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	static volatile int32_t x490 = -1;
	int64_t x491 = -656802581974LL;
	int32_t t122 = 0;

    t122 = ((x489<=(x490&x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 33134U;
	int32_t x494 = INT32_MIN;
	int16_t x495 = INT16_MIN;
	int8_t x496 = 0;

    t123 = ((x493<=(x494&x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 373876955420533449LLU;
	int64_t x498 = INT64_MIN;
	uint8_t x499 = 0U;
	int64_t x500 = -1LL;
	volatile int32_t t124 = -6485;

    t124 = ((x497<=(x498&x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 619608104LLU;
	int16_t x502 = INT16_MIN;
	int8_t x504 = -1;
	int32_t t125 = 27;

    t125 = ((x501<=(x502&x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = UINT32_MAX;
	static int32_t x506 = INT32_MIN;
	volatile int8_t x507 = INT8_MIN;
	volatile int32_t t126 = -167;

    t126 = ((x505<=(x506&x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MIN;
	int32_t x511 = -1;
	static int64_t x512 = 4283487LL;
	int32_t t127 = -69540;

    t127 = ((x509<=(x510&x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x513 = 2U;
	uint16_t x515 = 8U;
	volatile int32_t t128 = 202961;

    t128 = ((x513<=(x514&x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = INT16_MIN;
	int8_t x519 = INT8_MIN;
	volatile int32_t t129 = 25;

    t129 = ((x517<=(x518&x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 0;
	int16_t x522 = -3083;
	int64_t x523 = INT64_MAX;
	volatile int32_t t130 = 0;

    t130 = ((x521<=(x522&x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	static int32_t x526 = -1;
	uint16_t x527 = 0U;
	volatile int16_t x528 = INT16_MAX;

    t131 = ((x525<=(x526&x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MIN;
	uint8_t x531 = 1U;

    t132 = ((x529<=(x530&x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static int64_t x534 = 1LL;
	volatile int32_t x535 = INT32_MAX;
	int32_t x536 = INT32_MAX;
	volatile int32_t t133 = -4;

    t133 = ((x533<=(x534&x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 1885701085284LLU;
	int64_t x538 = INT64_MIN;
	static int8_t x540 = 0;
	volatile int32_t t134 = 873013780;

    t134 = ((x537<=(x538&x539))!=x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	int16_t x542 = -1;
	static volatile int32_t x543 = -521009;
	volatile uint8_t x544 = 75U;
	int32_t t135 = -1;

    t135 = ((x541<=(x542&x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 70384153194LL;
	uint64_t x548 = 35396710247547054LLU;
	int32_t t136 = 20996;

    t136 = ((x545<=(x546&x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 1989830LLU;
	static int64_t x550 = -352255538609016072LL;
	int64_t x551 = 57722541779LL;
	volatile int64_t x552 = 14517778LL;

    t137 = ((x549<=(x550&x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x553 = UINT8_MAX;
	static int16_t x554 = INT16_MIN;
	int64_t x555 = INT64_MIN;
	volatile int32_t x556 = -1;
	int32_t t138 = -6;

    t138 = ((x553<=(x554&x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int64_t x557 = -1LL;
	int64_t x558 = 3541263483025LL;
	int32_t x559 = INT32_MAX;
	int64_t x560 = 32395770LL;
	volatile int32_t t139 = 2423350;

    t139 = ((x557<=(x558&x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	uint16_t x562 = 7U;
	uint16_t x563 = UINT16_MAX;
	uint16_t x564 = 14U;
	int32_t t140 = 10552044;

    t140 = ((x561<=(x562&x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 25889U;
	uint8_t x566 = 4U;
	int32_t x568 = 333;
	volatile int32_t t141 = 14;

    t141 = ((x565<=(x566&x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = 0;
	static volatile int16_t x570 = INT16_MIN;
	int8_t x571 = 2;
	int16_t x572 = INT16_MIN;
	volatile int32_t t142 = -1;

    t142 = ((x569<=(x570&x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MAX;
	int8_t x575 = INT8_MAX;
	volatile uint16_t x576 = 32U;

    t143 = ((x573<=(x574&x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	int16_t x578 = INT16_MAX;
	uint64_t x580 = 379625018397LLU;
	static int32_t t144 = -100;

    t144 = ((x577<=(x578&x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int64_t x582 = -16519670327895885LL;
	int8_t x583 = INT8_MAX;
	uint16_t x584 = 128U;
	volatile int32_t t145 = -473955;

    t145 = ((x581<=(x582&x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = 24209LL;
	volatile int32_t x587 = -1;
	uint8_t x588 = 9U;
	int32_t t146 = 18511033;

    t146 = ((x585<=(x586&x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x590 = INT64_MIN;

    t147 = ((x589<=(x590&x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MIN;
	int16_t x595 = INT16_MIN;
	volatile int16_t x596 = INT16_MIN;
	static int32_t t148 = -15;

    t148 = ((x593<=(x594&x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x599 = 1U;
	int16_t x600 = INT16_MAX;
	int32_t t149 = 1791;

    t149 = ((x597<=(x598&x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 138U;
	int64_t x602 = INT64_MAX;
	static int64_t x603 = -203111853441769115LL;
	volatile int32_t t150 = -14223106;

    t150 = ((x601<=(x602&x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 2553U;
	int16_t x606 = 3047;
	uint64_t x607 = 6712LLU;
	int16_t x608 = INT16_MIN;
	int32_t t151 = 9723;

    t151 = ((x605<=(x606&x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = UINT8_MAX;
	uint8_t x612 = 4U;
	int32_t t152 = 63;

    t152 = ((x609<=(x610&x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -2774583508584864LL;
	uint8_t x615 = 3U;
	static uint64_t x616 = 46745LLU;
	int32_t t153 = -6;

    t153 = ((x613<=(x614&x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = -5;
	int32_t x618 = INT32_MIN;
	volatile int8_t x619 = 1;
	int64_t x620 = -5LL;
	int32_t t154 = 63104;

    t154 = ((x617<=(x618&x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 1381197112LL;
	uint64_t x622 = UINT64_MAX;
	static int64_t x623 = -1LL;
	uint32_t x624 = 1U;
	volatile int32_t t155 = 3121932;

    t155 = ((x621<=(x622&x623))!=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 24562314829686323LLU;
	int64_t x626 = -2487LL;
	volatile int32_t t156 = -140;

    t156 = ((x625<=(x626&x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 1492LLU;
	int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	uint8_t x632 = 114U;
	int32_t t157 = 34;

    t157 = ((x629<=(x630&x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	uint32_t x634 = 71475754U;
	int32_t x635 = -947;
	int64_t x636 = -1LL;
	int32_t t158 = 208;

    t158 = ((x633<=(x634&x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 1U;
	volatile int16_t x639 = INT16_MAX;
	uint16_t x640 = 3332U;
	int32_t t159 = -258086761;

    t159 = ((x637<=(x638&x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x641 = INT16_MIN;
	uint16_t x642 = 84U;
	int8_t x643 = 1;
	int32_t t160 = 5670;

    t160 = ((x641<=(x642&x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	static int32_t x646 = 1058720;
	int32_t x648 = INT32_MIN;
	volatile int32_t t161 = 4619;

    t161 = ((x645<=(x646&x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	static int64_t x650 = -3090914LL;
	int32_t x652 = -1;
	volatile int32_t t162 = 1545995;

    t162 = ((x649<=(x650&x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x655 = 0U;
	int8_t x656 = -1;
	int32_t t163 = -21774;

    t163 = ((x653<=(x654&x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 12;
	int8_t x660 = INT8_MIN;

    t164 = ((x657<=(x658&x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int16_t x662 = INT16_MIN;
	int16_t x664 = INT16_MIN;
	static int32_t t165 = -10;

    t165 = ((x661<=(x662&x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = INT32_MIN;
	uint8_t x666 = UINT8_MAX;
	int64_t x667 = -4079211147LL;
	int32_t t166 = -1;

    t166 = ((x665<=(x666&x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	static int64_t x670 = INT64_MAX;
	static int64_t x671 = -26511LL;
	volatile int32_t x672 = -1;

    t167 = ((x669<=(x670&x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	uint32_t x674 = UINT32_MAX;
	uint16_t x675 = 21U;
	uint8_t x676 = 4U;
	int32_t t168 = -92833;

    t168 = ((x673<=(x674&x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x677 = 11616LLU;
	uint8_t x678 = 43U;
	int16_t x679 = -1;
	static int16_t x680 = INT16_MIN;
	volatile int32_t t169 = -89563;

    t169 = ((x677<=(x678&x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = UINT32_MAX;
	int64_t x683 = INT64_MAX;
	static int32_t x684 = INT32_MAX;
	volatile int32_t t170 = -26;

    t170 = ((x681<=(x682&x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = INT16_MIN;
	int8_t x686 = -4;
	uint32_t x687 = 2057U;
	static int8_t x688 = 0;
	volatile int32_t t171 = 0;

    t171 = ((x685<=(x686&x687))!=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x691 = -13606;
	uint8_t x692 = UINT8_MAX;

    t172 = ((x689<=(x690&x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = -364LL;
	static volatile int64_t x695 = 362LL;
	volatile int32_t t173 = -7465;

    t173 = ((x693<=(x694&x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x697 = -1;
	int16_t x698 = -107;
	int8_t x699 = INT8_MIN;
	int64_t x700 = INT64_MIN;
	static int32_t t174 = 215679890;

    t174 = ((x697<=(x698&x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = 0;
	int8_t x702 = INT8_MIN;
	volatile uint8_t x703 = 7U;
	uint32_t x704 = 0U;
	volatile int32_t t175 = -1025557384;

    t175 = ((x701<=(x702&x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = -60;
	int64_t x706 = -1LL;
	volatile int64_t x708 = -9886977609570LL;
	volatile int32_t t176 = -244473410;

    t176 = ((x705<=(x706&x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	uint8_t x711 = 0U;
	static volatile int16_t x712 = -1;
	static volatile int32_t t177 = -20997728;

    t177 = ((x709<=(x710&x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	volatile int16_t x714 = -1;
	uint16_t x715 = 7U;
	volatile int32_t t178 = -237;

    t178 = ((x713<=(x714&x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = -323623;
	uint64_t x718 = 293451LLU;
	volatile int64_t x719 = -1318LL;
	volatile uint32_t x720 = UINT32_MAX;

    t179 = ((x717<=(x718&x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = INT32_MIN;
	int32_t x722 = -1;
	static uint16_t x723 = 56U;
	volatile int32_t t180 = 7;

    t180 = ((x721<=(x722&x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -1LL;
	volatile int64_t x726 = INT64_MAX;
	static uint8_t x727 = 41U;
	int16_t x728 = -1;
	int32_t t181 = 12;

    t181 = ((x725<=(x726&x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	volatile uint8_t x730 = 3U;
	int32_t t182 = 797;

    t182 = ((x729<=(x730&x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	static uint16_t x734 = UINT16_MAX;
	int16_t x735 = -1;
	int32_t t183 = 12270997;

    t183 = ((x733<=(x734&x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 1014LLU;
	uint32_t x738 = 29U;

    t184 = ((x737<=(x738&x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 1U;
	uint32_t x742 = 252U;
	volatile int16_t x743 = 2043;
	int16_t x744 = -1;

    t185 = ((x741<=(x742&x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MIN;
	int32_t x746 = 2535293;
	int32_t x748 = -1;
	volatile int32_t t186 = -3340024;

    t186 = ((x745<=(x746&x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = INT16_MIN;
	int32_t x751 = INT32_MIN;
	int32_t t187 = -2;

    t187 = ((x749<=(x750&x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MIN;
	static uint64_t x754 = UINT64_MAX;
	uint32_t x755 = UINT32_MAX;
	int32_t x756 = 8299339;
	volatile int32_t t188 = -3;

    t188 = ((x753<=(x754&x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = INT16_MIN;
	int16_t x760 = -1;
	int32_t t189 = 257222455;

    t189 = ((x757<=(x758&x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x762 = 33458797748597LLU;
	uint16_t x763 = 86U;
	int16_t x764 = INT16_MAX;
	int32_t t190 = -22502942;

    t190 = ((x761<=(x762&x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x765 = INT16_MIN;
	static uint8_t x766 = UINT8_MAX;
	uint64_t x767 = UINT64_MAX;

    t191 = ((x765<=(x766&x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -58;
	int64_t x770 = -40LL;
	int32_t x771 = INT32_MIN;
	int64_t x772 = -1LL;
	static volatile int32_t t192 = -1;

    t192 = ((x769<=(x770&x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 935917911602793LLU;
	uint16_t x774 = 6323U;
	uint64_t x776 = 7269826145221LLU;
	int32_t t193 = -990;

    t193 = ((x773<=(x774&x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	static int8_t x779 = 0;
	int8_t x780 = 0;
	volatile int32_t t194 = 60726;

    t194 = ((x777<=(x778&x779))!=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 4811269193338LLU;
	int16_t x782 = INT16_MIN;
	static uint32_t x783 = 77407930U;
	int64_t x784 = INT64_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x781<=(x782&x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	int8_t x786 = INT8_MIN;

    t196 = ((x785<=(x786&x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	static volatile uint8_t x791 = 2U;
	static int32_t x792 = INT32_MIN;

    t197 = ((x789<=(x790&x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MAX;
	int32_t x794 = INT32_MIN;
	int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = -188627326;

    t198 = ((x793<=(x794&x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = -2;
	uint8_t x799 = 7U;
	uint32_t x800 = 8033U;
	volatile int32_t t199 = -370093679;

    t199 = ((x797<=(x798&x799))!=x800);

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

