
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

static int16_t x3 = INT16_MIN;
uint64_t x4 = 22964859LLU;
uint8_t x7 = 3U;
static volatile uint64_t t1 = 320614183224344424LLU;
uint32_t x11 = 961557U;
int8_t x12 = INT8_MIN;
int8_t x14 = INT8_MAX;
uint64_t x17 = UINT64_MAX;
volatile uint8_t x30 = UINT8_MAX;
int64_t x33 = INT64_MAX;
int8_t x37 = 5;
static uint64_t x41 = 13305918LLU;
uint16_t x59 = 6U;
int32_t x69 = INT32_MAX;
int64_t x79 = -201LL;
int16_t x81 = -1;
int8_t x82 = -1;
int64_t x88 = -1LL;
int64_t t20 = -1731LL;
int64_t x90 = -1LL;
volatile uint64_t x107 = UINT64_MAX;
volatile uint32_t x108 = UINT32_MAX;
volatile uint64_t t24 = 6176274371177960LLU;
uint64_t x112 = 206616040458949LLU;
int32_t x121 = 34;
volatile int64_t t27 = -25770232645LL;
static uint32_t x127 = 35U;
volatile int8_t x131 = -4;
uint32_t x132 = UINT32_MAX;
int8_t x141 = INT8_MIN;
int16_t x143 = INT16_MAX;
int32_t x152 = -1;
int64_t x156 = 85243182265919471LL;
int64_t x169 = 5715908LL;
uint8_t x183 = 95U;
static uint8_t x185 = 6U;
uint16_t x188 = 844U;
uint64_t x195 = UINT64_MAX;
static volatile uint16_t x205 = 2U;
volatile int16_t x212 = 19;
static int32_t x219 = -18;
int16_t x227 = INT16_MAX;
static int64_t x228 = 221543681157661LL;
static uint8_t x229 = UINT8_MAX;
volatile uint32_t x232 = UINT32_MAX;
int8_t x233 = INT8_MAX;
int8_t x234 = -45;
uint16_t x240 = 30U;
uint16_t x241 = 2488U;
static volatile int8_t x242 = INT8_MAX;
volatile int8_t x243 = 0;
int32_t t50 = -77;
int8_t x252 = 0;
uint32_t x254 = UINT32_MAX;
volatile int64_t x255 = 3228042LL;
static volatile int64_t t53 = 312947745493LL;
uint64_t x261 = 870798076LLU;
int16_t x271 = -1;
int32_t x272 = INT32_MAX;
volatile int16_t x282 = INT16_MIN;
int64_t x283 = INT64_MIN;
static uint8_t x288 = UINT8_MAX;
static uint64_t x289 = UINT64_MAX;
static volatile uint64_t t62 = 5952859789293LLU;
uint8_t x295 = 83U;
volatile uint8_t x297 = 3U;
int8_t x298 = 15;
uint64_t x302 = 11750906539862LLU;
uint64_t x306 = 90216449LLU;
static int16_t x309 = INT16_MIN;
int16_t x312 = INT16_MAX;
uint32_t x321 = UINT32_MAX;
int16_t x322 = INT16_MIN;
uint16_t x323 = UINT16_MAX;
static uint32_t t69 = 508794693U;
static int8_t x329 = INT8_MAX;
volatile int8_t x331 = INT8_MIN;
static uint8_t x333 = UINT8_MAX;
int8_t x336 = INT8_MIN;
volatile int64_t t71 = -172079485LL;
uint32_t x342 = 30833612U;
volatile int8_t x345 = 54;
int16_t x347 = 752;
int8_t x353 = INT8_MIN;
uint8_t x354 = 24U;
int64_t x360 = -19579707008776LL;
int16_t x362 = 6;
int32_t t79 = -809504;
int64_t t80 = 5751932LL;
int64_t x379 = INT64_MIN;
int16_t x382 = INT16_MIN;
volatile int64_t t82 = 761360515414997789LL;
static int16_t x385 = 1;
static volatile int8_t x386 = -3;
static volatile int8_t x387 = -1;
int32_t x390 = INT32_MIN;
volatile uint64_t t84 = 1645LLU;
int32_t x396 = -1008111456;
uint64_t t86 = 16030911LLU;
static int64_t x406 = INT64_MIN;
uint32_t x420 = 15U;
static int8_t x421 = INT8_MIN;
int32_t t91 = 5;
uint32_t x426 = 107U;
static uint64_t t92 = 12252908018238645LLU;
static int16_t x435 = INT16_MAX;
volatile int16_t x438 = INT16_MIN;
uint64_t x441 = UINT64_MAX;
uint8_t x443 = UINT8_MAX;
uint32_t x444 = 29673434U;
uint64_t t96 = 13LLU;
static uint16_t x450 = 7U;
int8_t x453 = 1;
int16_t x462 = INT16_MIN;
int32_t x465 = INT32_MIN;
int8_t x468 = 25;
volatile int32_t t102 = 796534921;
volatile uint64_t t103 = 894LLU;
static volatile int16_t x473 = 20;
int64_t x478 = 1548237LL;
int32_t x479 = -1;
static int16_t x486 = INT16_MIN;
int32_t x488 = 1206;
volatile uint32_t t107 = 123U;
volatile int32_t t109 = 25862;
int64_t x499 = 1LL;
int8_t x506 = INT8_MIN;
int32_t x512 = INT32_MIN;
uint64_t t114 = 6LLU;
int32_t t116 = -61178;
static int8_t x539 = -1;
int64_t x540 = INT64_MIN;
int32_t x546 = -32;
uint32_t x548 = 88327U;
static int8_t x549 = INT8_MIN;
volatile int32_t x550 = INT32_MIN;
volatile int64_t t121 = 2183863375863976549LL;
static int64_t t122 = 7183850LL;
static int8_t x557 = 2;
volatile int16_t x558 = -5532;
static uint64_t x559 = 734695LLU;
int8_t x577 = -1;
int64_t x582 = 49890LL;
uint64_t x584 = 120078LLU;
volatile uint64_t x585 = UINT64_MAX;
uint32_t x591 = UINT32_MAX;
int64_t x596 = -1LL;
static int32_t x608 = 128091475;
volatile uint32_t x612 = 371115U;
volatile uint16_t x617 = UINT16_MAX;
int8_t x629 = 18;
int16_t x631 = 0;
int64_t x632 = INT64_MIN;
volatile int64_t t137 = 1373LL;
int8_t x640 = -1;
int8_t x642 = INT8_MIN;
uint64_t t139 = 268742947LLU;
uint8_t x649 = 5U;
static int16_t x657 = INT16_MIN;
int16_t x660 = -13162;
static volatile uint32_t x664 = 77U;
int64_t x673 = INT64_MIN;
int64_t x676 = 159774966449632LL;
int64_t t148 = -144199780993506103LL;
int64_t x685 = INT64_MAX;
uint8_t x686 = UINT8_MAX;
volatile int32_t x688 = -271240769;
int32_t x696 = INT32_MAX;
int64_t t153 = 14697379685052486LL;
int64_t t154 = 113053997LL;
static volatile int8_t x721 = -59;
int64_t t157 = -124LL;
volatile int16_t x725 = INT16_MAX;
int8_t x727 = -5;
int16_t x728 = -2579;
uint64_t x731 = 7634LLU;
static int16_t x732 = -1;
static int16_t x733 = -1;
int32_t x736 = -76961527;
int32_t t160 = -1377569;
volatile uint16_t x739 = 1200U;
int16_t x740 = INT16_MIN;
volatile int16_t x743 = -68;
uint16_t x753 = 13U;
int8_t x763 = -1;
static int32_t t168 = -10059;
int32_t x780 = INT32_MIN;
int32_t x782 = 1;
int16_t x784 = INT16_MIN;
volatile int64_t x790 = INT64_MIN;
uint8_t x802 = 33U;
int32_t x805 = INT32_MIN;
volatile int32_t x812 = INT32_MAX;
static int8_t x813 = 4;
volatile int64_t t178 = -2289LL;
int16_t x818 = 139;
int16_t x819 = INT16_MIN;
uint8_t x823 = UINT8_MAX;
static volatile uint64_t x828 = UINT64_MAX;
int32_t x830 = INT32_MIN;
static int8_t x831 = INT8_MIN;
static uint32_t t185 = 0U;
volatile int16_t x846 = -12;
volatile uint64_t x858 = 8763105312824LLU;
static int8_t x860 = INT8_MIN;
volatile int32_t x863 = 53;
static volatile uint16_t x872 = 1428U;
int32_t x875 = -94451008;
static int32_t x877 = INT32_MAX;
int16_t x878 = INT16_MIN;
int32_t x884 = -481525739;
static uint16_t x885 = 1434U;
volatile uint32_t t195 = 856295U;
int16_t x889 = INT16_MIN;
uint16_t x900 = 0U;
uint64_t t198 = 30950577LLU;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	volatile uint64_t t0 = 9053239318LLU;

    t0 = ((x1|(x2-x3))^x4);

    if (t0 != 18446744073686608507LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	static volatile uint64_t x6 = UINT64_MAX;
	int8_t x8 = INT8_MIN;

    t1 = ((x5|(x6-x7))^x8);

    if (t1 != 124LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -7;
	uint32_t x10 = 583824594U;
	volatile uint32_t t2 = 5398U;

    t2 = ((x9|(x10-x11))^x12);

    if (t2 != 125U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int16_t x15 = -1;
	volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -115837535154LL;

    t3 = ((x13|(x14-x15))^x16);

    if (t3 != -9223372034707292289LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	static int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 16644104013511LLU;

    t4 = ((x17|(x18-x19))^x20);

    if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 41557692U;
	uint16_t x26 = 30U;
	volatile int64_t x27 = -1LL;
	static int32_t x28 = 4;
	int64_t t5 = -1LL;

    t5 = ((x25|(x26-x27))^x28);

    if (t5 != 41557691LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x29 = 0U;
	static int8_t x31 = -6;
	uint64_t x32 = UINT64_MAX;
	static volatile uint64_t t6 = 800119738031LLU;

    t6 = ((x29|(x30-x31))^x32);

    if (t6 != 18446744073709551354LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = -43;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1LL;
	static int64_t t7 = 1657108753421543728LL;

    t7 = ((x33|(x34-x35))^x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MIN;
	int32_t x39 = 247;
	static int16_t x40 = -1;
	volatile int32_t t8 = 345;

    t8 = ((x37|(x38-x39))^x40);

    if (t8 != 33010) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = INT32_MIN;
	uint64_t x43 = 132719LLU;
	uint8_t x44 = 84U;
	uint64_t t9 = 174392107032832424LLU;

    t9 = ((x41|(x42-x43))^x44);

    if (t9 != 18446744071562066411LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MAX;
	uint64_t x46 = UINT64_MAX;
	uint8_t x47 = 2U;
	int8_t x48 = -1;
	uint64_t t10 = 889607295140577902LLU;

    t10 = ((x45|(x46-x47))^x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x49 = 10LLU;
	uint64_t x50 = 147LLU;
	uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 454U;
	static uint64_t t11 = 248526959LLU;

    t11 = ((x49|(x50-x51))^x52);

    if (t11 != 18446744069414584664LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = 1;
	volatile int32_t x55 = -1;
	static int8_t x56 = -16;
	volatile int32_t t12 = -32477;

    t12 = ((x53|(x54-x55))^x56);

    if (t12 != -65521) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x57 = 3675411U;
	int16_t x58 = INT16_MAX;
	uint32_t x60 = 30230251U;
	uint32_t t13 = 97869U;

    t13 = ((x57|(x58-x59))^x60);

    if (t13 != 32848144U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 382690955837989415LLU;
	uint64_t x62 = 22948LLU;
	int64_t x63 = -1LL;
	int16_t x64 = INT16_MIN;
	static volatile uint64_t t14 = 46667056792LLU;

    t14 = ((x61|(x62-x63))^x64);

    if (t14 != 18064053117871586215LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	static int8_t x66 = -1;
	volatile int64_t x67 = -536119235LL;
	uint32_t x68 = 801886810U;
	int64_t t15 = 6799558LL;

    t15 = ((x65|(x66-x67))^x68);

    if (t15 != -801886811LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x70 = 764U;
	int32_t x71 = -1513;
	static int16_t x72 = INT16_MIN;
	int32_t t16 = 1892;

    t16 = ((x69|(x70-x71))^x72);

    if (t16 != -2147450881) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 28U;
	static volatile int32_t x74 = -1;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MAX;
	int32_t t17 = 11450;

    t17 = ((x73|(x74-x75))^x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int32_t x80 = INT32_MIN;
	int64_t t18 = 76049986224387LL;

    t18 = ((x77|(x78-x79))^x80);

    if (t18 != 456LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x83 = 7778646917931LLU;
	volatile int32_t x84 = 101729189;
	static volatile uint64_t t19 = 369LLU;

    t19 = ((x81|(x82-x83))^x84);

    if (t19 != 18446744073607822426LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MAX;
	volatile int32_t x86 = INT32_MAX;
	volatile uint32_t x87 = 26U;

    t20 = ((x85|(x86-x87))^x88);

    if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	volatile uint16_t x91 = 11619U;
	int32_t x92 = INT32_MIN;
	int64_t t21 = 7174LL;

    t21 = ((x89|(x90-x91))^x92);

    if (t21 != 2147472028LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 3178820U;
	volatile int64_t x94 = 18010LL;
	static uint64_t x95 = UINT64_MAX;
	static uint8_t x96 = UINT8_MAX;
	static volatile uint64_t t22 = 5399529397338LLU;

    t22 = ((x93|(x94-x95))^x96);

    if (t22 != 3196832LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x101 = INT32_MIN;
	uint32_t x102 = 902881221U;
	uint64_t x103 = 11LLU;
	static volatile int32_t x104 = -1;
	uint64_t t23 = 16065685LLU;

    t23 = ((x101|(x102-x103))^x104);

    if (t23 != 1244602437LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 524802U;
	int16_t x106 = INT16_MIN;

    t24 = ((x105|(x106-x107))^x108);

    if (t24 != 18446744069414616572LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = 3834735U;
	static volatile int16_t x110 = -1;
	int8_t x111 = -1;
	volatile uint64_t t25 = 6701868LLU;

    t25 = ((x109|(x110-x111))^x112);

    if (t25 != 206616037738922LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 1305U;
	uint64_t x114 = UINT64_MAX;
	static int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MAX;
	uint64_t t26 = 3449858042084966781LLU;

    t26 = ((x113|(x114-x115))^x116);

    if (t26 != 18446744073709550310LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = INT16_MIN;
	volatile int64_t x124 = -1LL;

    t27 = ((x121|(x122-x123))^x124);

    if (t27 != -35LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int8_t x128 = -27;
	volatile uint32_t t28 = 139263U;

    t28 = ((x125|(x126-x127))^x128);

    if (t28 != 26U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x129 = UINT64_MAX;
	static volatile uint32_t x130 = UINT32_MAX;
	volatile uint64_t t29 = 353505LLU;

    t29 = ((x129|(x130-x131))^x132);

    if (t29 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile uint64_t x138 = 53384766LLU;
	static int16_t x139 = INT16_MAX;
	uint16_t x140 = 1U;
	volatile uint64_t t30 = 379434266612588LLU;

    t30 = ((x137|(x138-x139))^x140);

    if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x142 = 7;
	int16_t x144 = INT16_MIN;
	volatile int32_t t31 = -7218024;

    t31 = ((x141|(x142-x143))^x144);

    if (t31 != 32648) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x145 = INT32_MIN;
	uint32_t x146 = 1739607U;
	int64_t x147 = INT64_MAX;
	int8_t x148 = -28;
	static volatile int64_t t32 = -325093696929964LL;

    t32 = ((x145|(x146-x147))^x148);

    if (t32 != 2145744060LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x149 = -1LL;
	static int32_t x150 = -5971316;
	uint16_t x151 = 0U;
	int64_t t33 = 738LL;

    t33 = ((x149|(x150-x151))^x152);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	static volatile int64_t t34 = 3014LL;

    t34 = ((x153|(x154-x155))^x156);

    if (t34 != 85243182265919376LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = 96U;
	volatile uint16_t x163 = 19U;
	static uint32_t x164 = 450U;
	volatile uint32_t t35 = 167U;

    t35 = ((x161|(x162-x163))^x164);

    if (t35 != 2147484047U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x170 = INT16_MAX;
	int64_t x171 = 20375415960901LL;
	volatile uint64_t x172 = 8959480059LLU;
	uint64_t t36 = 78293LLU;

    t36 = ((x169|(x170-x171))^x172);

    if (t36 != 18446723689472962309LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x173 = UINT32_MAX;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = -1;
	uint8_t x176 = 12U;
	volatile uint64_t t37 = 6LLU;

    t37 = ((x173|(x174-x175))^x176);

    if (t37 != 4294967283LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int8_t x184 = -3;
	int64_t t38 = -6276983LL;

    t38 = ((x181|(x182-x183))^x184);

    if (t38 != 32860LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile uint64_t t39 = 2241236287069951LLU;

    t39 = ((x185|(x186-x187))^x188);

    if (t39 != 9223372036854776651LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x189 = 50284;
	uint64_t x190 = 16269105084370LLU;
	int8_t x191 = 0;
	uint64_t x192 = 1462LLU;
	uint64_t t40 = 3995421970942LLU;

    t40 = ((x189|(x190-x191))^x192);

    if (t40 != 16269105099336LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = 4023;
	uint8_t x194 = UINT8_MAX;
	int8_t x196 = INT8_MAX;
	uint64_t t41 = 625312547090LLU;

    t41 = ((x193|(x194-x195))^x196);

    if (t41 != 4040LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x206 = 1U;
	volatile int8_t x207 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;
	int32_t t42 = -179621;

    t42 = ((x205|(x206-x207))^x208);

    if (t42 != 65404) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x209 = INT16_MIN;
	uint32_t x210 = 53U;
	volatile uint8_t x211 = 0U;
	volatile uint32_t t43 = 10326521U;

    t43 = ((x209|(x210-x211))^x212);

    if (t43 != 4294934566U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = 4;
	volatile uint64_t t44 = 1798687652245196422LLU;

    t44 = ((x213|(x214-x215))^x216);

    if (t44 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	static uint8_t x220 = UINT8_MAX;
	volatile int32_t t45 = 84;

    t45 = ((x217|(x218-x219))^x220);

    if (t45 != -146) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x225 = 1018;
	volatile uint16_t x226 = 2559U;
	int64_t t46 = -64091998LL;

    t46 = ((x225|(x226-x227))^x228);

    if (t46 != -221543681138201LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x230 = INT8_MAX;
	int32_t x231 = -6;
	uint32_t t47 = 2005925U;

    t47 = ((x229|(x230-x231))^x232);

    if (t47 != 4294967040U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x235 = 73;
	int8_t x236 = -1;
	volatile int32_t t48 = 3302244;

    t48 = ((x233|(x234-x235))^x236);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x237 = 58U;
	volatile int32_t x238 = 30804486;
	volatile int32_t x239 = INT32_MAX;
	static volatile int32_t t49 = 864875;

    t49 = ((x237|(x238-x239))^x240);

    if (t49 != -2116679135) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x244 = 13;

    t50 = ((x241|(x242-x243))^x244);

    if (t50 != 2546) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x245 = -36;
	int64_t x246 = 97233LL;
	uint32_t x247 = 13339U;
	int8_t x248 = INT8_MAX;
	int64_t t51 = -65583057691966LL;

    t51 = ((x245|(x246-x247))^x248);

    if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x249 = UINT64_MAX;
	uint64_t x250 = 346154520884LLU;
	volatile int8_t x251 = INT8_MIN;
	static uint64_t t52 = UINT64_MAX;

    t52 = ((x249|(x250-x251))^x252);

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = 7;
	int8_t x256 = -9;

    t53 = ((x253|(x254-x255))^x256);

    if (t53 != -4291739264LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x257 = INT32_MIN;
	int8_t x258 = -8;
	uint64_t x259 = UINT64_MAX;
	static int32_t x260 = INT32_MIN;
	volatile uint64_t t54 = 1432717000547374250LLU;

    t54 = ((x257|(x258-x259))^x260);

    if (t54 != 2147483641LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x262 = 652945;
	volatile int8_t x263 = INT8_MAX;
	int8_t x264 = -5;
	uint64_t t55 = 532579195LLU;

    t55 = ((x261|(x262-x263))^x264);

    if (t55 != 18446744072838187269LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x265 = UINT16_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	uint16_t x267 = UINT16_MAX;
	volatile int8_t x268 = 18;
	volatile int32_t t56 = -39974;

    t56 = ((x265|(x266-x267))^x268);

    if (t56 != -19) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x269 = INT64_MIN;
	uint8_t x270 = 2U;
	volatile int64_t t57 = -38417565377561LL;

    t57 = ((x269|(x270-x271))^x272);

    if (t57 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x273 = -245;
	static int16_t x274 = -20;
	int8_t x275 = -1;
	int32_t x276 = INT32_MIN;
	static int32_t t58 = 2;

    t58 = ((x273|(x274-x275))^x276);

    if (t58 != 2147483631) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = 0;
	int8_t x278 = -1;
	volatile int32_t x279 = -257879;
	static volatile int8_t x280 = INT8_MAX;
	static int32_t t59 = -831546;

    t59 = ((x277|(x278-x279))^x280);

    if (t59 != 257833) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x281 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t60 = 244896459LL;

    t60 = ((x281|(x282-x283))^x284);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = -1;
	static int64_t x286 = INT64_MIN;
	int32_t x287 = -1;
	volatile int64_t t61 = 131552680393274107LL;

    t61 = ((x285|(x286-x287))^x288);

    if (t61 != -256LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x290 = -29482665463LL;
	static volatile int32_t x291 = INT32_MIN;
	static int8_t x292 = INT8_MIN;

    t62 = ((x289|(x290-x291))^x292);

    if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x293 = -240121LL;
	uint32_t x294 = UINT32_MAX;
	volatile int8_t x296 = INT8_MIN;
	int64_t t63 = -6LL;

    t63 = ((x293|(x294-x295))^x296);

    if (t63 != 47LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x299 = INT8_MAX;
	volatile uint8_t x300 = UINT8_MAX;
	static int32_t t64 = -38615;

    t64 = ((x297|(x298-x299))^x300);

    if (t64 != -148) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x301 = UINT64_MAX;
	int64_t x303 = -46918346096052027LL;
	uint16_t x304 = 38U;
	uint64_t t65 = 56659398587LLU;

    t65 = ((x301|(x302-x303))^x304);

    if (t65 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = -1;
	int64_t x307 = INT64_MIN;
	uint16_t x308 = UINT16_MAX;
	uint64_t t66 = 33093LLU;

    t66 = ((x305|(x306-x307))^x308);

    if (t66 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x310 = -250467;
	int8_t x311 = -6;
	volatile int32_t t67 = 23028396;

    t67 = ((x309|(x310-x311))^x312);

    if (t67 != -11684) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	uint64_t x318 = 2805681594013LLU;
	static int16_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile uint64_t t68 = 10193333489328706LLU;

    t68 = ((x317|(x318-x319))^x320);

    if (t68 != 18446741268027932799LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x324 = -3;

    t69 = ((x321|(x322-x323))^x324);

    if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x330 = -127469686LL;
	static uint16_t x332 = UINT16_MAX;
	volatile int64_t t70 = 9610LL;

    t70 = ((x329|(x330-x331))^x332);

    if (t70 != -127531136LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x334 = -1LL;
	volatile uint32_t x335 = 46120513U;

    t71 = ((x333|(x334-x335))^x336);

    if (t71 != 46120575LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x337 = 60910072022591LLU;
	uint16_t x338 = 6718U;
	int8_t x339 = 11;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t72 = 114009081LLU;

    t72 = ((x337|(x338-x339))^x340);

    if (t72 != 18446683163637522879LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x341 = 98713LLU;
	static volatile uint64_t x343 = UINT64_MAX;
	volatile int8_t x344 = INT8_MIN;
	static volatile uint64_t t73 = 13001LLU;

    t73 = ((x341|(x342-x343))^x344);

    if (t73 != 18446744073678619741LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x346 = 20577278518415166LLU;
	int32_t x348 = 133146;
	uint64_t t74 = 996157661678LLU;

    t74 = ((x345|(x346-x347))^x348);

    if (t74 != 20577278518543460LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x349 = -1LL;
	uint64_t x350 = 4060998901817963418LLU;
	int32_t x351 = 4;
	uint32_t x352 = UINT32_MAX;
	uint64_t t75 = 982692607222636LLU;

    t75 = ((x349|(x350-x351))^x352);

    if (t75 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t76 = -1;

    t76 = ((x353|(x354-x355))^x356);

    if (t76 != -32665) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x357 = -1;
	static int16_t x358 = 3859;
	int8_t x359 = 50;
	int64_t t77 = 1871LL;

    t77 = ((x357|(x358-x359))^x360);

    if (t77 != 19579707008775LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x361 = 75U;
	uint16_t x363 = UINT16_MAX;
	volatile int16_t x364 = 4;
	int32_t t78 = -105613;

    t78 = ((x361|(x362-x363))^x364);

    if (t78 != -65461) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x365 = INT8_MIN;
	int8_t x366 = 6;
	static int16_t x367 = INT16_MAX;
	static uint8_t x368 = 2U;

    t79 = ((x365|(x366-x367))^x368);

    if (t79 != -123) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x374 = -651;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;

    t80 = ((x373|(x374-x375))^x376);

    if (t80 != 9223372036854775285LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x377 = 1600;
	int32_t x378 = -111;
	static uint64_t x380 = 48093184094LLU;
	static volatile uint64_t t81 = 6948686LLU;

    t81 = ((x377|(x378-x379))^x380);

    if (t81 != 9223371988761591695LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x381 = UINT32_MAX;
	volatile int64_t x383 = 1746248521LL;
	static uint8_t x384 = UINT8_MAX;

    t82 = ((x381|(x382-x383))^x384);

    if (t82 != -256LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x388 = 369849485;
	volatile int32_t t83 = 445;

    t83 = ((x385|(x386-x387))^x388);

    if (t83 != -369849486) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x389 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 2U;

    t84 = ((x389|(x390-x391))^x392);

    if (t84 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = 1232970;
	int8_t x394 = INT8_MIN;
	static uint16_t x395 = 32491U;
	static int32_t t85 = -4007769;

    t85 = ((x393|(x394-x395))^x396);

    if (t85 != 1008115839) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x397 = 12643205208LLU;
	uint8_t x398 = 23U;
	int16_t x399 = -10073;
	volatile int32_t x400 = -1;

    t86 = ((x397|(x398-x399))^x400);

    if (t86 != 18446744061066336391LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x401 = INT64_MIN;
	int64_t x402 = 405740428199341526LL;
	uint8_t x403 = UINT8_MAX;
	int64_t x404 = -288722008LL;
	int64_t t87 = -139905418459545LL;

    t87 = ((x401|(x402-x403))^x404);

    if (t87 != 8817631608402894719LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x405 = UINT32_MAX;
	int8_t x407 = -1;
	int32_t x408 = INT32_MIN;
	volatile int64_t t88 = 104958LL;

    t88 = ((x405|(x406-x407))^x408);

    if (t88 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x413 = INT32_MAX;
	volatile uint16_t x414 = 43U;
	static int16_t x415 = 20;
	int32_t x416 = INT32_MAX;
	static volatile int32_t t89 = 46794;

    t89 = ((x413|(x414-x415))^x416);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x417 = INT32_MIN;
	static uint8_t x418 = 1U;
	int32_t x419 = -1;
	static uint32_t t90 = 38738113U;

    t90 = ((x417|(x418-x419))^x420);

    if (t90 != 2147483661U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x422 = 1676;
	volatile int16_t x423 = INT16_MIN;
	int32_t x424 = -1;

    t91 = ((x421|(x422-x423))^x424);

    if (t91 != 115) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x425 = 86671319783026515LLU;
	int64_t x427 = 103467313LL;
	int16_t x428 = -3801;

    t92 = ((x425|(x426-x427))^x428);

    if (t92 != 67784284LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	uint16_t x431 = 41U;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t93 = -1;

    t93 = ((x429|(x430-x431))^x432);

    if (t93 != 32599) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x433 = -1879;
	uint64_t x434 = UINT64_MAX;
	int8_t x436 = -1;
	volatile uint64_t t94 = 11779779790409471LLU;

    t94 = ((x433|(x434-x435))^x436);

    if (t94 != 1878LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x437 = 88;
	int32_t x439 = -2434628;
	int8_t x440 = INT8_MIN;
	static volatile int32_t t95 = 26226146;

    t95 = ((x437|(x438-x439))^x440);

    if (t95 != -2401828) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x442 = -1;

    t96 = ((x441|(x442-x443))^x444);

    if (t96 != 18446744073679878181LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x445 = -1;
	int8_t x446 = 0;
	int8_t x447 = -1;
	uint64_t x448 = 27898900685090LLU;
	uint64_t t97 = 1855496277LLU;

    t97 = ((x445|(x446-x447))^x448);

    if (t97 != 18446716174808866525LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x449 = 36U;
	int8_t x451 = 1;
	uint8_t x452 = 1U;
	static volatile uint32_t t98 = 1772992250U;

    t98 = ((x449|(x450-x451))^x452);

    if (t98 != 39U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x454 = INT64_MIN;
	int32_t x455 = -182918;
	int8_t x456 = 3;
	int64_t t99 = 62LL;

    t99 = ((x453|(x454-x455))^x456);

    if (t99 != -9223372036854592892LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = -1LL;
	static int8_t x458 = INT8_MIN;
	uint8_t x459 = UINT8_MAX;
	uint32_t x460 = 33652U;
	volatile int64_t t100 = -53584264542LL;

    t100 = ((x457|(x458-x459))^x460);

    if (t100 != -33653LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x461 = 74515297U;
	volatile int64_t x463 = INT64_MIN;
	int32_t x464 = 593134489;
	volatile int64_t t101 = 38021094LL;

    t101 = ((x461|(x462-x463))^x464);

    if (t101 != 9223372036261609720LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x466 = -1;
	uint16_t x467 = 8067U;

    t102 = ((x465|(x466-x467))^x468);

    if (t102 != -8091) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x469 = 109;
	int16_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	uint64_t x472 = 1684272504441793LLU;

    t103 = ((x469|(x470-x471))^x472);

    if (t103 != 1684272504441772LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x474 = 427790310747LLU;
	int8_t x475 = 0;
	int16_t x476 = INT16_MIN;
	uint64_t t104 = 30LLU;

    t104 = ((x473|(x474-x475))^x476);

    if (t104 != 18446743645919223135LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x477 = 14U;
	volatile uint16_t x480 = 0U;
	static volatile int64_t t105 = -28080682604053316LL;

    t105 = ((x477|(x478-x479))^x480);

    if (t105 != 1548238LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x481 = 4U;
	uint32_t x482 = 39451U;
	uint32_t x483 = UINT32_MAX;
	int32_t x484 = 102;
	volatile uint32_t t106 = 127664U;

    t106 = ((x481|(x482-x483))^x484);

    if (t106 != 39546U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint32_t x485 = UINT32_MAX;
	volatile int32_t x487 = INT32_MIN;

    t107 = ((x485|(x486-x487))^x488);

    if (t107 != 4294966089U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x489 = INT32_MIN;
	volatile uint32_t x490 = 5020U;
	int64_t x491 = 132561988757644LL;
	int64_t x492 = -233125131865110013LL;
	volatile int64_t t108 = 801LL;

    t108 = ((x489|(x490-x491))^x492);

    if (t108 != 233125133983228179LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x493 = 1U;
	volatile uint16_t x494 = UINT16_MAX;
	static uint16_t x495 = 33U;
	int32_t x496 = INT32_MAX;

    t109 = ((x493|(x494-x495))^x496);

    if (t109 != 2147418144) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = INT8_MIN;
	int64_t x498 = -1LL;
	int32_t x500 = -998;
	int64_t t110 = 3580LL;

    t110 = ((x497|(x498-x499))^x500);

    if (t110 != 996LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x501 = -5;
	int64_t x502 = -62LL;
	int64_t x503 = 485580857LL;
	int64_t x504 = 1282529689668811525LL;
	static int64_t t111 = -7LL;

    t111 = ((x501|(x502-x503))^x504);

    if (t111 != -1282529689668811522LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x505 = 1498U;
	uint64_t x507 = UINT64_MAX;
	int64_t x508 = -64895415253LL;
	uint64_t t112 = 26127LLU;

    t112 = ((x505|(x506-x507))^x508);

    if (t112 != 64895415280LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t x509 = UINT64_MAX;
	int64_t x510 = -1LL;
	int16_t x511 = -1;
	volatile uint64_t t113 = 4560340337776LLU;

    t113 = ((x509|(x510-x511))^x512);

    if (t113 != 2147483647LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x513 = 65U;
	static int64_t x514 = -1LL;
	static volatile int8_t x515 = -1;
	uint64_t x516 = 1262008741110857LLU;

    t114 = ((x513|(x514-x515))^x516);

    if (t114 != 1262008741110792LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x517 = 2604909895875725496LLU;
	static int32_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MAX;
	volatile uint64_t t115 = 624669618239LLU;

    t115 = ((x517|(x518-x519))^x520);

    if (t115 != 2604909895875725511LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = -53080845;
	int16_t x522 = -5;
	volatile uint16_t x523 = 3959U;
	int8_t x524 = INT8_MIN;

    t116 = ((x521|(x522-x523))^x524);

    if (t116 != 887) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x525 = INT32_MIN;
	uint64_t x526 = 708493515865LLU;
	int32_t x527 = 1;
	int32_t x528 = -1;
	volatile uint64_t t117 = 2032848457241318LLU;

    t117 = ((x525|(x526-x527))^x528);

    if (t117 != 176087975LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x533 = 114810055059417679LL;
	volatile int64_t x534 = INT64_MIN;
	volatile int16_t x535 = INT16_MIN;
	uint32_t x536 = 135U;
	volatile int64_t t118 = 383963153103969335LL;

    t118 = ((x533|(x534-x535))^x536);

    if (t118 != -9108561981795358008LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x537 = 161U;
	int16_t x538 = -2059;
	int64_t t119 = 1LL;

    t119 = ((x537|(x538-x539))^x540);

    if (t119 != 9223372036854773751LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x545 = 8341U;
	uint16_t x547 = 79U;
	uint32_t t120 = 0U;

    t120 = ((x545|(x546-x547))^x548);

    if (t120 != 4294878866U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x551 = INT64_MIN;
	int16_t x552 = INT16_MAX;

    t121 = ((x549|(x550-x551))^x552);

    if (t121 != -32641LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = INT64_MIN;
	static int16_t x554 = INT16_MAX;
	int32_t x555 = -3;
	int8_t x556 = INT8_MAX;

    t122 = ((x553|(x554-x555))^x556);

    if (t122 != -9223372036854742915LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x560 = -1;
	volatile uint64_t t123 = 0LLU;

    t123 = ((x557|(x558-x559))^x560);

    if (t123 != 740224LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x565 = -1LL;
	int32_t x566 = -1;
	uint8_t x567 = 6U;
	uint32_t x568 = 155419326U;
	volatile int64_t t124 = 18899LL;

    t124 = ((x565|(x566-x567))^x568);

    if (t124 != -155419327LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x573 = INT64_MAX;
	uint8_t x574 = 82U;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MIN;
	int64_t t125 = -20078673022149659LL;

    t125 = ((x573|(x574-x575))^x576);

    if (t125 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x578 = -1;
	int64_t x579 = INT64_MIN;
	int32_t x580 = INT32_MIN;
	volatile int64_t t126 = 1312860262318654LL;

    t126 = ((x577|(x578-x579))^x580);

    if (t126 != 2147483647LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x581 = INT16_MIN;
	int16_t x583 = INT16_MIN;
	uint64_t t127 = 124687878826681LLU;

    t127 = ((x581|(x582-x583))^x584);

    if (t127 != 18446744073709426668LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x586 = 143113304211102348LLU;
	static uint64_t x587 = UINT64_MAX;
	uint8_t x588 = 6U;
	uint64_t t128 = 100785787LLU;

    t128 = ((x585|(x586-x587))^x588);

    if (t128 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x589 = 3U;
	volatile int32_t x590 = -3175;
	int16_t x592 = 598;
	uint32_t t129 = 410570U;

    t129 = ((x589|(x590-x591))^x592);

    if (t129 != 4294963661U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x593 = 11310U;
	volatile int8_t x594 = -1;
	static int32_t x595 = -135;
	int64_t t130 = -170434253046237LL;

    t130 = ((x593|(x594-x595))^x596);

    if (t130 != -11439LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x601 = 1147706702LLU;
	int8_t x602 = -10;
	int32_t x603 = -885304291;
	volatile uint16_t x604 = 4U;
	uint64_t t131 = 69363LLU;

    t131 = ((x601|(x602-x603))^x604);

    if (t131 != 1961672667LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x605 = 24U;
	static volatile int64_t x606 = 49335208365925286LL;
	static int16_t x607 = -1;
	volatile int64_t t132 = 3667209913716LL;

    t132 = ((x605|(x606-x607))^x608);

    if (t132 != 49335208443422444LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x609 = INT16_MIN;
	uint64_t x610 = 336197596964LLU;
	int16_t x611 = 95;
	uint64_t t133 = 7LLU;

    t133 = ((x609|(x610-x611))^x612);

    if (t133 != 18446744073709166446LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x613 = -1;
	int16_t x614 = INT16_MAX;
	uint32_t x615 = 32U;
	static uint32_t x616 = UINT32_MAX;
	static volatile uint32_t t134 = 3U;

    t134 = ((x613|(x614-x615))^x616);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x618 = 17LL;
	int32_t x619 = INT32_MIN;
	uint8_t x620 = UINT8_MAX;
	volatile int64_t t135 = 290385179LL;

    t135 = ((x617|(x618-x619))^x620);

    if (t135 != 2147548928LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x625 = 96U;
	int8_t x626 = -1;
	static uint8_t x627 = 1U;
	int32_t x628 = INT32_MIN;
	int32_t t136 = -263848;

    t136 = ((x625|(x626-x627))^x628);

    if (t136 != 2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x630 = -31LL;

    t137 = ((x629|(x630-x631))^x632);

    if (t137 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x637 = INT64_MIN;
	int16_t x638 = INT16_MIN;
	int8_t x639 = 10;
	volatile int64_t t138 = -3493048862LL;

    t138 = ((x637|(x638-x639))^x640);

    if (t138 != 32777LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x641 = INT8_MAX;
	static int16_t x643 = -1;
	uint64_t x644 = UINT64_MAX;

    t139 = ((x641|(x642-x643))^x644);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x645 = 12U;
	uint16_t x646 = 46U;
	int16_t x647 = INT16_MAX;
	volatile uint64_t x648 = 1525116213LLU;
	volatile uint64_t t140 = 2535997603343LLU;

    t140 = ((x645|(x646-x647))^x648);

    if (t140 != 18446744072184458522LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x650 = INT32_MAX;
	uint64_t x651 = UINT64_MAX;
	uint16_t x652 = UINT16_MAX;
	uint64_t t141 = 15768069557684210LLU;

    t141 = ((x649|(x650-x651))^x652);

    if (t141 != 2147549178LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x653 = INT32_MAX;
	uint64_t x654 = UINT64_MAX;
	static uint64_t x655 = 26LLU;
	volatile uint32_t x656 = UINT32_MAX;
	volatile uint64_t t142 = 32399840555709LLU;

    t142 = ((x653|(x654-x655))^x656);

    if (t142 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x658 = 106162013LL;
	int32_t x659 = 1;
	volatile int64_t t143 = -184956674681078148LL;

    t143 = ((x657|(x658-x659))^x660);

    if (t143 != 11210LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x661 = UINT64_MAX;
	int32_t x662 = -1;
	int16_t x663 = -6346;
	volatile uint64_t t144 = 4508068363531211LLU;

    t144 = ((x661|(x662-x663))^x664);

    if (t144 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x665 = 2380376243540697LLU;
	static volatile int8_t x666 = 30;
	int64_t x667 = INT64_MAX;
	static volatile uint64_t x668 = UINT64_MAX;
	static volatile uint64_t t145 = 285417871806840LLU;

    t145 = ((x665|(x666-x667))^x668);

    if (t145 != 9220991660611235104LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x669 = 321U;
	static int32_t x670 = INT32_MIN;
	int32_t x671 = -7;
	int32_t x672 = -1;
	volatile int32_t t146 = -146185334;

    t146 = ((x669|(x670-x671))^x672);

    if (t146 != 2147483320) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MIN;
	volatile int64_t t147 = -16056016264045LL;

    t147 = ((x673|(x674-x675))^x676);

    if (t147 != -9223212261888326176LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x677 = INT32_MIN;
	int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MIN;

    t148 = ((x677|(x678-x679))^x680);

    if (t148 != 2147450752LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x687 = 0;
	int64_t t149 = 22353507LL;

    t149 = ((x685|(x686-x687))^x688);

    if (t149 != -9223372036583535040LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x693 = UINT64_MAX;
	int64_t x694 = -1LL;
	int64_t x695 = -6490LL;
	uint64_t t150 = 5911LLU;

    t150 = ((x693|(x694-x695))^x696);

    if (t150 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x698 = INT8_MIN;
	static uint8_t x699 = 79U;
	int64_t x700 = INT64_MIN;
	volatile uint64_t t151 = 26824LLU;

    t151 = ((x697|(x698-x699))^x700);

    if (t151 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x701 = INT16_MIN;
	int8_t x702 = 1;
	uint32_t x703 = 3317057U;
	int16_t x704 = INT16_MIN;
	static volatile uint32_t t152 = 28U;

    t152 = ((x701|(x702-x703))^x704);

    if (t152 != 25280U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x705 = 116;
	static uint16_t x706 = 38U;
	int8_t x707 = -1;
	volatile int64_t x708 = INT64_MAX;

    t153 = ((x705|(x706-x707))^x708);

    if (t153 != 9223372036854775688LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x709 = INT8_MIN;
	static int32_t x710 = -1;
	int64_t x711 = -1LL;
	uint32_t x712 = 403954U;

    t154 = ((x709|(x710-x711))^x712);

    if (t154 != -403854LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x713 = -416;
	static int16_t x714 = INT16_MAX;
	int8_t x715 = -12;
	uint32_t x716 = UINT32_MAX;
	uint32_t t155 = 11U;

    t155 = ((x713|(x714-x715))^x716);

    if (t155 != 404U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x717 = INT64_MIN;
	static int8_t x718 = INT8_MIN;
	int8_t x719 = INT8_MAX;
	int16_t x720 = 29;
	volatile int64_t t156 = -1648LL;

    t156 = ((x717|(x718-x719))^x720);

    if (t156 != -228LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x722 = 445654U;
	int64_t x723 = INT64_MAX;
	volatile uint8_t x724 = UINT8_MAX;

    t157 = ((x721|(x722-x723))^x724);

    if (t157 != -216LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x726 = INT32_MIN;
	volatile int32_t t158 = 11752;

    t158 = ((x725|(x726-x727))^x728);

    if (t158 != 2147453458) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x729 = INT16_MIN;
	volatile int64_t x730 = -1LL;
	volatile uint64_t t159 = 223290LLU;

    t159 = ((x729|(x730-x731))^x732);

    if (t159 != 7634LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x734 = INT8_MAX;
	uint16_t x735 = 15053U;

    t160 = ((x733|(x734-x735))^x736);

    if (t160 != 76961526) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x737 = 11733U;
	volatile int64_t x738 = -503338410LL;
	static volatile int64_t t161 = -1668139278LL;

    t161 = ((x737|(x738-x739))^x740);

    if (t161 != 503328247LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x741 = -1;
	uint64_t x742 = 1358787LLU;
	uint8_t x744 = UINT8_MAX;
	static uint64_t t162 = 3975566457LLU;

    t162 = ((x741|(x742-x743))^x744);

    if (t162 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x745 = -1;
	volatile int64_t x746 = INT64_MIN;
	volatile int64_t x747 = -1LL;
	uint8_t x748 = UINT8_MAX;
	volatile int64_t t163 = 246733359673LL;

    t163 = ((x745|(x746-x747))^x748);

    if (t163 != -256LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x749 = -15;
	int8_t x750 = 10;
	static int16_t x751 = 708;
	uint64_t x752 = 250136447LLU;
	uint64_t t164 = 183812482744534LLU;

    t164 = ((x749|(x750-x751))^x752);

    if (t164 != 18446744073459415176LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x754 = 75019LLU;
	int16_t x755 = INT16_MIN;
	uint16_t x756 = 1U;
	static uint64_t t165 = 5641LLU;

    t165 = ((x753|(x754-x755))^x756);

    if (t165 != 107790LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x757 = 661019362061027092LL;
	int32_t x758 = INT32_MIN;
	uint64_t x759 = 20110LLU;
	int32_t x760 = 8009;
	volatile uint64_t t166 = 1384031876813490712LLU;

    t166 = ((x757|(x758-x759))^x760);

    if (t166 != 18446744073709529151LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x761 = UINT64_MAX;
	int8_t x762 = INT8_MAX;
	uint64_t x764 = 1979LLU;
	static uint64_t t167 = 23491370998622472LLU;

    t167 = ((x761|(x762-x763))^x764);

    if (t167 != 18446744073709549636LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x769 = -59725979;
	static int32_t x770 = -1252;
	int8_t x771 = -1;
	volatile int8_t x772 = 0;

    t168 = ((x769|(x770-x771))^x772);

    if (t168 != -131) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x773 = 27445U;
	volatile uint8_t x774 = 9U;
	volatile int16_t x775 = INT16_MIN;
	volatile int8_t x776 = 2;
	int32_t t169 = -3577;

    t169 = ((x773|(x774-x775))^x776);

    if (t169 != 60223) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 30U;
	int32_t x779 = INT32_MAX;
	int32_t t170 = 9916668;

    t170 = ((x777|(x778-x779))^x780);

    if (t170 != 2147483551) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x781 = UINT32_MAX;
	int16_t x783 = 11;
	static uint32_t t171 = 5062U;

    t171 = ((x781|(x782-x783))^x784);

    if (t171 != 32767U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x785 = INT8_MIN;
	volatile uint8_t x786 = 0U;
	int16_t x787 = -1;
	static volatile uint64_t x788 = 570616LLU;
	static uint64_t t172 = 1471011LLU;

    t172 = ((x785|(x786-x787))^x788);

    if (t172 != 18446744073708981113LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x789 = -7904135476LL;
	volatile int8_t x791 = INT8_MIN;
	static volatile int8_t x792 = INT8_MAX;
	int64_t t173 = -765948770787360020LL;

    t173 = ((x789|(x790-x791))^x792);

    if (t173 != -7904135501LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x793 = UINT64_MAX;
	int32_t x794 = INT32_MAX;
	static uint64_t x795 = UINT64_MAX;
	int8_t x796 = INT8_MAX;
	static uint64_t t174 = 23LLU;

    t174 = ((x793|(x794-x795))^x796);

    if (t174 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x801 = INT8_MIN;
	volatile uint32_t x803 = UINT32_MAX;
	volatile int16_t x804 = INT16_MAX;
	uint32_t t175 = 238361U;

    t175 = ((x801|(x802-x803))^x804);

    if (t175 != 4294934621U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x806 = INT32_MIN;
	uint64_t x807 = 380040LLU;
	uint16_t x808 = UINT16_MAX;
	volatile uint64_t t176 = 672710527LLU;

    t176 = ((x805|(x806-x807))^x808);

    if (t176 != 18446744073709210759LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x809 = UINT16_MAX;
	uint8_t x810 = 4U;
	int32_t x811 = INT32_MAX;
	int32_t t177 = 4204747;

    t177 = ((x809|(x810-x811))^x812);

    if (t177 != -65536) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x814 = INT64_MAX;
	uint32_t x815 = 16581640U;
	uint32_t x816 = 1086838U;

    t178 = ((x813|(x814-x815))^x816);

    if (t178 != 9223372036839206529LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x817 = -1;
	static uint32_t x820 = 20573876U;
	uint32_t t179 = 23U;

    t179 = ((x817|(x818-x819))^x820);

    if (t179 != 4274393419U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = -1;
	static int64_t x822 = INT64_MAX;
	volatile int32_t x824 = -2739;
	volatile int64_t t180 = 0LL;

    t180 = ((x821|(x822-x823))^x824);

    if (t180 != 2738LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x825 = -7;
	static volatile uint16_t x826 = 10668U;
	uint64_t x827 = 2819550575042078LLU;
	uint64_t t181 = 3909416LLU;

    t181 = ((x825|(x826-x827))^x828);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x832 = INT32_MIN;
	static int64_t t182 = 23765022804LL;

    t182 = ((x829|(x830-x831))^x832);

    if (t182 != 128LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x833 = INT8_MIN;
	volatile uint32_t x834 = 9789812U;
	static int32_t x835 = INT32_MIN;
	static uint16_t x836 = UINT16_MAX;
	volatile uint32_t t183 = 1592233U;

    t183 = ((x833|(x834-x835))^x836);

    if (t183 != 4294901771U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x837 = INT32_MIN;
	uint16_t x838 = 434U;
	int8_t x839 = -1;
	static int16_t x840 = INT16_MAX;
	volatile int32_t t184 = -114984123;

    t184 = ((x837|(x838-x839))^x840);

    if (t184 != -2147451316) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x841 = 1U;
	uint32_t x842 = UINT32_MAX;
	static uint16_t x843 = 748U;
	uint16_t x844 = 1U;

    t185 = ((x841|(x842-x843))^x844);

    if (t185 != 4294966546U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x845 = 118U;
	int64_t x847 = INT64_MIN;
	volatile int16_t x848 = INT16_MIN;
	int64_t t186 = -878386LL;

    t186 = ((x845|(x846-x847))^x848);

    if (t186 != -9223372036854743050LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x849 = 1840U;
	volatile uint64_t x850 = UINT64_MAX;
	volatile int32_t x851 = INT32_MIN;
	static int64_t x852 = INT64_MAX;
	uint64_t t187 = 25379855830LLU;

    t187 = ((x849|(x850-x851))^x852);

    if (t187 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x857 = 0U;
	static uint8_t x859 = 2U;
	volatile uint64_t t188 = 1925352246268LLU;

    t188 = ((x857|(x858-x859))^x860);

    if (t188 != 18446735310604238774LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x861 = INT64_MIN;
	volatile int32_t x862 = -1;
	int16_t x864 = INT16_MIN;
	int64_t t189 = -65LL;

    t189 = ((x861|(x862-x863))^x864);

    if (t189 != 32714LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x865 = UINT16_MAX;
	volatile int64_t x866 = -3882126921072LL;
	static uint16_t x867 = 840U;
	int32_t x868 = INT32_MIN;
	int64_t t190 = 635415543160344LL;

    t190 = ((x865|(x866-x867))^x868);

    if (t190 != 3881026519039LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x869 = INT64_MIN;
	int16_t x870 = -406;
	int64_t x871 = INT64_MIN;
	volatile int64_t t191 = 484871LL;

    t191 = ((x869|(x870-x871))^x872);

    if (t191 != -1026LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x873 = INT8_MIN;
	int8_t x874 = INT8_MAX;
	int8_t x876 = 0;
	int32_t t192 = 30503;

    t192 = ((x873|(x874-x875))^x876);

    if (t192 != -65) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x879 = -1;
	uint16_t x880 = 71U;
	volatile int32_t t193 = 0;

    t193 = ((x877|(x878-x879))^x880);

    if (t193 != -72) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x881 = -1;
	int64_t x882 = -314757LL;
	int8_t x883 = INT8_MIN;
	int64_t t194 = 260LL;

    t194 = ((x881|(x882-x883))^x884);

    if (t194 != 481525738LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x886 = INT8_MIN;
	static uint32_t x887 = 3186U;
	static int8_t x888 = -1;

    t195 = ((x885|(x886-x887))^x888);

    if (t195 != 2145U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x890 = 2615;
	static volatile int64_t x891 = INT64_MAX;
	int64_t x892 = 6243333121LL;
	int64_t t196 = 10202367LL;

    t196 = ((x889|(x890-x891))^x892);

    if (t196 != -6243336647LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x893 = -1;
	uint32_t x894 = UINT32_MAX;
	uint64_t x895 = UINT64_MAX;
	static int16_t x896 = INT16_MIN;
	volatile uint64_t t197 = 13719792081091717LLU;

    t197 = ((x893|(x894-x895))^x896);

    if (t197 != 32767LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x897 = INT64_MAX;
	static uint64_t x898 = 591058055LLU;
	int8_t x899 = INT8_MAX;

    t198 = ((x897|(x898-x899))^x900);

    if (t198 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x901 = UINT32_MAX;
	uint16_t x902 = UINT16_MAX;
	static int32_t x903 = INT32_MAX;
	uint16_t x904 = UINT16_MAX;
	uint32_t t199 = 612895335U;

    t199 = ((x901|(x902-x903))^x904);

    if (t199 != 4294901760U) { NG(); } else { ; }
	
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

