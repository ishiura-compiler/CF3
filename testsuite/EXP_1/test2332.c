
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

static int64_t x4 = 66513687539128356LL;
int8_t x5 = INT8_MIN;
volatile uint8_t x9 = 0U;
int16_t x11 = -1;
int32_t x12 = -1594833;
uint8_t x14 = UINT8_MAX;
int32_t x18 = 55;
uint64_t x21 = UINT64_MAX;
uint32_t x24 = UINT32_MAX;
static int16_t x28 = INT16_MAX;
static uint8_t x34 = 19U;
uint64_t x37 = UINT64_MAX;
volatile int16_t x38 = INT16_MIN;
static int32_t x59 = 1;
volatile int32_t t14 = -3;
static uint8_t x61 = 87U;
volatile int32_t t16 = -494897;
uint16_t x69 = 14U;
volatile int32_t t19 = -761239;
int32_t x87 = INT32_MIN;
int64_t x91 = INT64_MIN;
volatile int32_t x92 = INT32_MAX;
volatile uint16_t x94 = UINT16_MAX;
int32_t t23 = -351891;
int32_t t25 = 0;
int16_t x105 = INT16_MAX;
int64_t x107 = INT64_MIN;
uint16_t x109 = 2U;
static uint8_t x115 = 1U;
int32_t x117 = INT32_MAX;
static volatile int32_t x119 = INT32_MIN;
volatile int32_t t33 = -34232;
int8_t x143 = 10;
int8_t x147 = 1;
static int32_t t38 = -197;
int32_t t40 = 222063;
static int16_t x170 = -1;
int32_t x171 = -1;
volatile int32_t x176 = INT32_MIN;
volatile int64_t x177 = INT64_MIN;
static int8_t x178 = INT8_MIN;
int64_t x179 = 2086495LL;
uint32_t x182 = 7547436U;
volatile int16_t x184 = INT16_MIN;
static uint16_t x185 = UINT16_MAX;
int32_t x188 = INT32_MAX;
static int16_t x198 = INT16_MIN;
volatile int32_t t49 = 953619916;
int16_t x201 = INT16_MAX;
volatile int64_t x203 = -28484854593099084LL;
int32_t t50 = -209940458;
static uint16_t x208 = UINT16_MAX;
volatile int32_t t51 = -5015836;
static uint64_t x219 = UINT64_MAX;
volatile int16_t x222 = INT16_MIN;
int16_t x224 = -1;
volatile uint16_t x234 = 2086U;
static int64_t x237 = -1LL;
static volatile int32_t t59 = 119;
static int16_t x242 = INT16_MIN;
volatile int8_t x248 = INT8_MIN;
uint32_t x249 = 360U;
int32_t x255 = -3;
int32_t t63 = 3011394;
int32_t x273 = INT32_MAX;
volatile int64_t x277 = -1LL;
int16_t x281 = 3663;
static int8_t x282 = 1;
volatile uint32_t x283 = 1534458053U;
volatile uint32_t x285 = 514718U;
int32_t x289 = INT32_MIN;
int8_t x291 = INT8_MAX;
int16_t x295 = INT16_MAX;
volatile int32_t t73 = -12902950;
volatile int32_t t76 = 183;
uint8_t x314 = 1U;
int8_t x320 = INT8_MIN;
int32_t x321 = INT32_MIN;
int8_t x324 = INT8_MAX;
static uint8_t x336 = 5U;
int32_t x337 = 10;
int16_t x343 = INT16_MIN;
volatile int32_t t85 = -513;
volatile int16_t x353 = INT16_MIN;
int16_t x355 = INT16_MAX;
int8_t x359 = 1;
static int32_t x363 = -1;
volatile int32_t t90 = -316;
static uint8_t x365 = 6U;
static int8_t x369 = INT8_MIN;
int32_t x370 = -197164;
volatile int32_t x371 = INT32_MIN;
int32_t x380 = INT32_MAX;
int32_t t94 = -2023158;
volatile int32_t t96 = 151739899;
int64_t x391 = -6025255260LL;
volatile int16_t x392 = INT16_MAX;
volatile int32_t x393 = INT32_MAX;
volatile uint64_t x395 = 145484672475984LLU;
volatile int8_t x396 = INT8_MIN;
int32_t t98 = -4718530;
uint8_t x400 = 41U;
volatile int32_t t99 = 6986255;
int16_t x403 = -166;
volatile int32_t x407 = INT32_MIN;
int16_t x408 = INT16_MIN;
volatile int32_t t102 = -31081;
int8_t x425 = INT8_MIN;
static volatile int32_t t106 = 2599;
int8_t x433 = -37;
static int32_t t109 = -428996;
int32_t x442 = INT32_MAX;
int16_t x443 = 86;
static volatile int32_t x445 = INT32_MIN;
volatile int32_t t111 = -31865;
static int16_t x460 = INT16_MIN;
volatile int32_t t114 = -51059568;
volatile int16_t x461 = 18;
int64_t x465 = INT64_MIN;
static uint64_t x467 = UINT64_MAX;
uint16_t x468 = UINT16_MAX;
int32_t x471 = 1019;
static uint8_t x472 = UINT8_MAX;
int32_t x474 = INT32_MIN;
volatile int32_t x477 = INT32_MAX;
static int32_t x486 = -1;
static uint64_t x495 = 4294LLU;
uint16_t x497 = 1462U;
volatile int32_t x498 = -1;
uint64_t x502 = 12371563806LLU;
uint16_t x504 = UINT16_MAX;
int16_t x512 = INT16_MAX;
volatile int32_t t127 = 93006128;
volatile uint64_t x516 = UINT64_MAX;
static int32_t x518 = -1;
int32_t t129 = 6021776;
volatile uint32_t x535 = 32096536U;
int32_t t134 = -2;
volatile int32_t x558 = -1;
int64_t x559 = -1759388696533985234LL;
int64_t x560 = 426LL;
volatile int32_t t139 = 1;
static volatile int8_t x562 = 9;
int32_t x564 = INT32_MIN;
int32_t x573 = -210;
uint64_t x579 = UINT64_MAX;
uint8_t x586 = 0U;
uint16_t x589 = UINT16_MAX;
static uint8_t x598 = UINT8_MAX;
int16_t x612 = INT16_MIN;
volatile int32_t x614 = 3429824;
uint32_t x615 = 202286438U;
uint32_t x616 = 16069855U;
int32_t t153 = -1189880;
uint64_t x625 = 96640042573303LLU;
uint16_t x629 = UINT16_MAX;
static uint16_t x630 = 3U;
volatile int32_t t157 = 803804146;
int16_t x634 = INT16_MIN;
static int64_t x635 = INT64_MIN;
int32_t t158 = 89110;
int64_t x637 = 6920594LL;
static int8_t x638 = INT8_MIN;
int16_t x651 = INT16_MIN;
int32_t t163 = 1635;
int32_t x658 = -250531;
volatile int64_t x662 = INT64_MIN;
int16_t x663 = INT16_MIN;
static volatile int32_t t165 = -25759;
int32_t x669 = -8138012;
static int64_t x673 = -1455238937LL;
static int8_t x675 = -1;
int8_t x684 = INT8_MIN;
int8_t x685 = 7;
int16_t x689 = -1;
uint64_t x700 = 29851132462LLU;
int32_t t174 = -2574304;
uint32_t x702 = 7506U;
uint8_t x706 = 67U;
int16_t x708 = INT16_MIN;
static uint32_t x710 = 1U;
int8_t x711 = INT8_MAX;
int16_t x712 = -5;
volatile uint32_t x723 = 5U;
static uint64_t x725 = UINT64_MAX;
int32_t x729 = INT32_MIN;
int8_t x736 = INT8_MIN;
int32_t t183 = 3832633;
volatile int32_t x746 = 574225;
volatile int16_t x753 = -1;
int64_t x756 = INT64_MIN;
int32_t t188 = 3626494;
volatile int16_t x758 = -171;
volatile uint32_t x760 = 23793696U;
int16_t x769 = INT16_MIN;
volatile int32_t x775 = INT32_MIN;
int64_t x785 = INT64_MIN;
uint8_t x788 = 25U;
volatile int32_t t196 = 17815;
int32_t x791 = INT32_MIN;
int16_t x792 = -1;
uint8_t x793 = 10U;
static volatile int32_t t198 = -1928665;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int32_t x2 = INT32_MIN;
	static volatile int16_t x3 = -14;
	int32_t t0 = 0;

    t0 = (((x1&x2)|x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	uint8_t x7 = 82U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 459;

    t1 = (((x5&x6)|x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	static int32_t t2 = 16502076;

    t2 = (((x9&x10)|x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 110863U;
	static int16_t x15 = -38;
	int8_t x16 = -1;
	int32_t t3 = -217;

    t3 = (((x13&x14)|x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x19 = 807848481317LLU;
	int8_t x20 = -1;
	volatile int32_t t4 = -1876;

    t4 = (((x17&x18)|x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = 455U;
	uint16_t x23 = 4U;
	volatile int32_t t5 = 132215399;

    t5 = (((x21&x22)|x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 387539864U;
	static volatile int8_t x26 = -36;
	uint32_t x27 = 848120U;
	static int32_t t6 = -696524327;

    t6 = (((x25&x26)|x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -43;
	uint32_t x30 = 3U;
	int16_t x31 = INT16_MIN;
	static uint8_t x32 = 0U;
	volatile int32_t t7 = -11;

    t7 = (((x29&x30)|x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MIN;
	static int32_t t8 = -3179;

    t8 = (((x33&x34)|x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = -234982;
	int32_t x40 = -1;
	volatile int32_t t9 = -13339070;

    t9 = (((x37&x38)|x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	uint8_t x42 = 18U;
	uint64_t x43 = UINT64_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = -75235876;

    t10 = (((x41&x42)|x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = INT32_MIN;
	volatile uint16_t x46 = 22U;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = -3338968;
	volatile int32_t t11 = -87980;

    t11 = (((x45&x46)|x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static uint16_t x50 = 1769U;
	int64_t x51 = 14977LL;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -208;

    t12 = (((x49&x50)|x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	int32_t x54 = -1;
	uint32_t x55 = 978U;
	int32_t x56 = INT32_MAX;
	int32_t t13 = -32;

    t13 = (((x53&x54)|x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 69LLU;
	int8_t x58 = 52;
	int32_t x60 = INT32_MIN;

    t14 = (((x57&x58)|x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 115515U;
	uint8_t x63 = 62U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -63;

    t15 = (((x61&x62)|x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 125LLU;
	static int32_t x66 = INT32_MIN;
	static uint64_t x67 = 794362302294941LLU;
	static int32_t x68 = 193;

    t16 = (((x65&x66)|x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x70 = UINT16_MAX;
	static volatile uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 31526574053LLU;
	static int32_t t17 = 35187399;

    t17 = (((x69&x70)|x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -1;

    t18 = (((x73&x74)|x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = 3115U;
	uint64_t x78 = 12LLU;
	uint16_t x79 = UINT16_MAX;
	uint8_t x80 = 2U;

    t19 = (((x77&x78)|x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -463986027705LL;
	static int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 6;

    t20 = (((x81&x82)|x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	int32_t x86 = INT32_MAX;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = -1;

    t21 = (((x85&x86)|x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	volatile int8_t x90 = INT8_MIN;
	static int32_t t22 = 1276;

    t22 = (((x89&x90)|x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 93811619U;
	int32_t x95 = -1;
	uint32_t x96 = UINT32_MAX;

    t23 = (((x93&x94)|x95)==x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MIN;
	int8_t x98 = 24;
	static volatile uint64_t x99 = 17195259157518887LLU;
	int32_t x100 = -1;
	volatile int32_t t24 = 993338;

    t24 = (((x97&x98)|x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile int16_t x102 = INT16_MAX;
	volatile uint32_t x103 = 28931U;
	static volatile int16_t x104 = INT16_MIN;

    t25 = (((x101&x102)|x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = -1;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 20888;

    t26 = (((x105&x106)|x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	int32_t x112 = INT32_MAX;
	static volatile int32_t t27 = 12942;

    t27 = (((x109&x110)|x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -1;
	static int16_t x114 = INT16_MIN;
	static volatile int32_t x116 = 3342;
	int32_t t28 = 988119673;

    t28 = (((x113&x114)|x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = -1;
	static uint32_t x120 = UINT32_MAX;
	int32_t t29 = 0;

    t29 = (((x117&x118)|x119)==x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x121 = UINT64_MAX;
	int8_t x122 = -1;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 28707693U;
	volatile int32_t t30 = 299677;

    t30 = (((x121&x122)|x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -16808445645LL;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 577;

    t31 = (((x125&x126)|x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -2;
	static uint8_t x130 = 33U;
	int16_t x131 = -1;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 5043940;

    t32 = (((x129&x130)|x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -4394846171644220LL;
	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = -14;
	volatile int8_t x136 = 0;

    t33 = (((x133&x134)|x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 0U;
	static uint64_t x138 = UINT64_MAX;
	static int8_t x139 = -1;
	int16_t x140 = 12639;
	volatile int32_t t34 = 43745;

    t34 = (((x137&x138)|x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = -1LL;
	static volatile int32_t x142 = INT32_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	int32_t t35 = 83;

    t35 = (((x141&x142)|x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MIN;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -21675;

    t36 = (((x145&x146)|x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 0;
	int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 13737465264050433LLU;
	int32_t t37 = -7032;

    t37 = (((x149&x150)|x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 30;
	uint8_t x154 = 33U;
	int8_t x155 = 3;
	uint64_t x156 = 200LLU;

    t38 = (((x153&x154)|x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static volatile uint32_t x158 = 77U;
	int64_t x159 = 4333962253119309LL;
	static int32_t x160 = 4771;
	volatile int32_t t39 = -339;

    t39 = (((x157&x158)|x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x161 = -20LL;
	static int64_t x162 = INT64_MIN;
	uint64_t x163 = 11535893081LLU;
	uint8_t x164 = UINT8_MAX;

    t40 = (((x161&x162)|x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	int8_t x166 = 1;
	int64_t x167 = 1735880LL;
	static int8_t x168 = 5;
	int32_t t41 = 1549;

    t41 = (((x165&x166)|x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -1;

    t42 = (((x169&x170)|x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = -11;
	volatile int32_t t43 = -443685518;

    t43 = (((x173&x174)|x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x180 = -55;
	int32_t t44 = -1;

    t44 = (((x177&x178)|x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 0U;
	volatile int32_t x183 = 229351;
	volatile int32_t t45 = 12202;

    t45 = (((x181&x182)|x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x186 = 3;
	volatile uint32_t x187 = UINT32_MAX;
	int32_t t46 = -628153;

    t46 = (((x185&x186)|x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	int32_t x190 = -1;
	int32_t x191 = INT32_MAX;
	static int64_t x192 = -5LL;
	int32_t t47 = 468;

    t47 = (((x189&x190)|x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	uint16_t x194 = 14518U;
	int32_t x195 = INT32_MAX;
	static int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -74703;

    t48 = (((x193&x194)|x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x197 = 88U;
	static uint32_t x199 = UINT32_MAX;
	volatile uint32_t x200 = 423619U;

    t49 = (((x197&x198)|x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = -1;
	uint8_t x204 = 99U;

    t50 = (((x201&x202)|x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 8285727U;
	uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MIN;

    t51 = (((x205&x206)|x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	uint16_t x210 = 10636U;
	int32_t x211 = 27670;
	static volatile int64_t x212 = 29481594LL;
	int32_t t52 = 1;

    t52 = (((x209&x210)|x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -251456LL;
	static volatile int64_t x214 = INT64_MIN;
	volatile int16_t x215 = -70;
	int32_t x216 = -66;
	int32_t t53 = -1;

    t53 = (((x213&x214)|x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 1LLU;
	int16_t x218 = -1;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 0;

    t54 = (((x217&x218)|x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MAX;
	int16_t x223 = -7551;
	int32_t t55 = -465904305;

    t55 = (((x221&x222)|x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 7U;
	static int16_t x226 = INT16_MAX;
	int16_t x227 = 187;
	static int32_t x228 = INT32_MIN;
	volatile int32_t t56 = 14;

    t56 = (((x225&x226)|x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 38769004;
	static uint64_t x230 = 3596325015371218675LLU;
	uint64_t x231 = 64014923312841447LLU;
	static int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 384941576;

    t57 = (((x229&x230)|x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = 551LLU;
	volatile int32_t t58 = -54583;

    t58 = (((x233&x234)|x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MAX;
	static uint8_t x239 = 78U;
	int16_t x240 = -1;

    t59 = (((x237&x238)|x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x241 = INT8_MIN;
	uint8_t x243 = UINT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = -9301;

    t60 = (((x241&x242)|x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = -1LL;
	int8_t x247 = 49;
	volatile int32_t t61 = 302846424;

    t61 = (((x245&x246)|x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MAX;
	static uint8_t x251 = 6U;
	int64_t x252 = -261422885021058LL;
	int32_t t62 = 217531595;

    t62 = (((x249&x250)|x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x253 = 52U;
	volatile uint8_t x254 = 0U;
	uint16_t x256 = 10U;

    t63 = (((x253&x254)|x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x257 = 1752325U;
	int16_t x258 = -1;
	static uint16_t x259 = UINT16_MAX;
	volatile uint32_t x260 = 1002707205U;
	int32_t t64 = -379;

    t64 = (((x257&x258)|x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = 1;
	int32_t x263 = 1;
	int64_t x264 = INT64_MAX;
	volatile int32_t t65 = -796712550;

    t65 = (((x261&x262)|x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x265 = 0;
	int32_t x266 = INT32_MIN;
	static int64_t x267 = 127872445481671LL;
	volatile int16_t x268 = INT16_MAX;
	volatile int32_t t66 = -6150;

    t66 = (((x265&x266)|x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 3LLU;
	int8_t x270 = INT8_MIN;
	static int8_t x271 = INT8_MIN;
	static uint16_t x272 = 571U;
	volatile int32_t t67 = 15997372;

    t67 = (((x269&x270)|x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x274 = 2818U;
	static uint8_t x275 = 2U;
	uint8_t x276 = 102U;
	static volatile int32_t t68 = 1;

    t68 = (((x273&x274)|x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x278 = 17711629090778922LLU;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -1;

    t69 = (((x277&x278)|x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x284 = -1;
	int32_t t70 = 171514282;

    t70 = (((x281&x282)|x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = INT64_MAX;
	volatile uint64_t x287 = 2709LLU;
	int32_t x288 = -1;
	int32_t t71 = 3913506;

    t71 = (((x285&x286)|x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;
	uint64_t x292 = UINT64_MAX;
	static int32_t t72 = 548655;

    t72 = (((x289&x290)|x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	static uint64_t x294 = 12911311971LLU;
	uint32_t x296 = 1668541U;

    t73 = (((x293&x294)|x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = 0;
	int16_t x298 = -63;
	static int16_t x299 = 0;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 27172576;

    t74 = (((x297&x298)|x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 4U;
	int32_t x302 = 15;
	int16_t x303 = INT16_MAX;
	int64_t x304 = 2006989066771421542LL;
	static volatile int32_t t75 = 1670;

    t75 = (((x301&x302)|x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x305 = 33689433736867570LLU;
	static int64_t x306 = INT64_MIN;
	uint64_t x307 = 955003165514907LLU;
	static uint16_t x308 = UINT16_MAX;

    t76 = (((x305&x306)|x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 1890U;
	static int32_t x310 = INT32_MIN;
	uint16_t x311 = 406U;
	uint16_t x312 = 1U;
	volatile int32_t t77 = 393;

    t77 = (((x309&x310)|x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -1;
	uint8_t x315 = 12U;
	uint8_t x316 = 15U;
	static volatile int32_t t78 = -3709823;

    t78 = (((x313&x314)|x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MIN;
	volatile int32_t x318 = -12859433;
	int32_t x319 = INT32_MIN;
	int32_t t79 = -961;

    t79 = (((x317&x318)|x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x322 = INT64_MIN;
	int16_t x323 = INT16_MIN;
	int32_t t80 = 16172542;

    t80 = (((x321&x322)|x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x325 = 1101735930953159LL;
	int64_t x326 = INT64_MIN;
	int64_t x327 = -1244800887925LL;
	int16_t x328 = INT16_MAX;
	volatile int32_t t81 = -6521;

    t81 = (((x325&x326)|x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	int64_t x330 = -450057089LL;
	int16_t x331 = 1;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -1;

    t82 = (((x329&x330)|x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int32_t t83 = -36;

    t83 = (((x333&x334)|x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = -1;
	volatile int8_t x339 = INT8_MIN;
	static int16_t x340 = INT16_MAX;
	volatile int32_t t84 = -15088;

    t84 = (((x337&x338)|x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint16_t x342 = UINT16_MAX;
	int64_t x344 = -1LL;

    t85 = (((x341&x342)|x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 9U;
	volatile int32_t x348 = -35959003;
	int32_t t86 = -3012;

    t86 = (((x345&x346)|x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MAX;
	static uint16_t x352 = 2U;
	static int32_t t87 = -97322;

    t87 = (((x349&x350)|x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x354 = -411949LL;
	volatile uint8_t x356 = 6U;
	int32_t t88 = 0;

    t88 = (((x353&x354)|x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static int16_t x358 = INT16_MIN;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = 1;

    t89 = (((x357&x358)|x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1;
	int8_t x362 = 0;
	int64_t x364 = INT64_MAX;

    t90 = (((x361&x362)|x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x366 = 4U;
	uint32_t x367 = UINT32_MAX;
	static volatile int16_t x368 = 9;
	static volatile int32_t t91 = -16526;

    t91 = (((x365&x366)|x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = 38;

    t92 = (((x369&x370)|x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	uint32_t x374 = 201708383U;
	uint32_t x375 = 1U;
	int8_t x376 = -1;
	int32_t t93 = 374740;

    t93 = (((x373&x374)|x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 1;
	int8_t x378 = INT8_MAX;
	static int64_t x379 = INT64_MIN;

    t94 = (((x377&x378)|x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	volatile int16_t x382 = INT16_MAX;
	static uint16_t x383 = UINT16_MAX;
	static uint64_t x384 = UINT64_MAX;
	int32_t t95 = 297;

    t95 = (((x381&x382)|x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 1425;
	static int16_t x386 = INT16_MIN;
	int64_t x387 = 25180743396404LL;
	static volatile int64_t x388 = INT64_MIN;

    t96 = (((x385&x386)|x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	int32_t t97 = -18838702;

    t97 = (((x389&x390)|x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x394 = UINT8_MAX;

    t98 = (((x393&x394)|x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	static int64_t x398 = 8969245024127625LL;
	int32_t x399 = INT32_MIN;

    t99 = (((x397&x398)|x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	int64_t x404 = 2311825LL;
	volatile int32_t t100 = 0;

    t100 = (((x401&x402)|x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -64000;
	volatile int16_t x406 = 1;
	volatile int32_t t101 = 46;

    t101 = (((x405&x406)|x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 3038048750477876355LLU;
	static uint32_t x410 = 5177415U;
	volatile int8_t x411 = INT8_MIN;
	static uint16_t x412 = 199U;

    t102 = (((x409&x410)|x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -4;
	uint32_t x414 = 46751U;
	int16_t x415 = -112;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t103 = 17;

    t103 = (((x413&x414)|x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = INT64_MIN;
	volatile int8_t x418 = 21;
	int64_t x419 = -1LL;
	static int8_t x420 = INT8_MIN;
	static int32_t t104 = 326;

    t104 = (((x417&x418)|x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	volatile int32_t x422 = 424;
	uint8_t x423 = 112U;
	int32_t x424 = INT32_MIN;
	int32_t t105 = -3076;

    t105 = (((x421&x422)|x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = 0;
	int8_t x427 = INT8_MAX;
	uint32_t x428 = UINT32_MAX;

    t106 = (((x425&x426)|x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = UINT32_MAX;
	uint16_t x430 = 2040U;
	static volatile uint16_t x431 = 1U;
	uint16_t x432 = 8318U;
	int32_t t107 = 13;

    t107 = (((x429&x430)|x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x434 = INT32_MAX;
	int8_t x435 = 1;
	static uint16_t x436 = 0U;
	static volatile int32_t t108 = 222167;

    t108 = (((x433&x434)|x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x437 = INT16_MAX;
	static uint32_t x438 = UINT32_MAX;
	int16_t x439 = 39;
	volatile int32_t x440 = INT32_MIN;

    t109 = (((x437&x438)|x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	int8_t x444 = -1;
	int32_t t110 = -10624;

    t110 = (((x441&x442)|x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x446 = -26;
	uint32_t x447 = 71697U;
	volatile int32_t x448 = INT32_MIN;

    t111 = (((x445&x446)|x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 1427441U;
	int16_t x450 = -5;
	int8_t x451 = 0;
	volatile int32_t x452 = INT32_MAX;
	int32_t t112 = -50339;

    t112 = (((x449&x450)|x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = 375729547LL;
	int64_t x456 = INT64_MIN;
	int32_t t113 = 400967;

    t113 = (((x453&x454)|x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x457 = INT8_MIN;
	int64_t x458 = -46263682306LL;
	static int8_t x459 = INT8_MIN;

    t114 = (((x457&x458)|x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = INT32_MIN;
	uint16_t x463 = 7292U;
	uint32_t x464 = 264517687U;
	static int32_t t115 = 1068550358;

    t115 = (((x461&x462)|x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = 441;
	volatile int32_t t116 = -16;

    t116 = (((x465&x466)|x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x469 = INT64_MIN;
	static uint8_t x470 = 23U;
	int32_t t117 = 38816392;

    t117 = (((x469&x470)|x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	static uint32_t x475 = 239011U;
	static uint8_t x476 = 10U;
	volatile int32_t t118 = -30810648;

    t118 = (((x473&x474)|x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x478 = -1;
	static int64_t x479 = INT64_MIN;
	static int16_t x480 = INT16_MAX;
	static volatile int32_t t119 = -127;

    t119 = (((x477&x478)|x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	static int8_t x482 = -1;
	int32_t x483 = -37800986;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t120 = -250215897;

    t120 = (((x481&x482)|x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x485 = 1;
	volatile uint64_t x487 = 127LLU;
	uint64_t x488 = 445540728LLU;
	static int32_t t121 = -206779;

    t121 = (((x485&x486)|x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -6;
	static volatile uint64_t x490 = 5LLU;
	int16_t x491 = INT16_MIN;
	static int32_t x492 = INT32_MAX;
	static volatile int32_t t122 = 723;

    t122 = (((x489&x490)|x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MIN;
	uint32_t x494 = 184468U;
	int32_t x496 = INT32_MAX;
	volatile int32_t t123 = -129051;

    t123 = (((x493&x494)|x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x499 = 0U;
	int8_t x500 = INT8_MIN;
	int32_t t124 = 0;

    t124 = (((x497&x498)|x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x503 = 2154899169468219LL;
	int32_t t125 = 3;

    t125 = (((x501&x502)|x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MAX;
	int8_t x506 = -18;
	int32_t x507 = 11;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t126 = -21079757;

    t126 = (((x505&x506)|x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	static uint16_t x510 = 1U;
	int64_t x511 = INT64_MIN;

    t127 = (((x509&x510)|x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 6;
	int16_t x514 = INT16_MAX;
	int16_t x515 = 0;
	volatile int32_t t128 = -282290;

    t128 = (((x513&x514)|x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = 3677469LL;
	int32_t x519 = -1;
	static int8_t x520 = INT8_MIN;

    t129 = (((x517&x518)|x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 90U;
	static uint16_t x522 = UINT16_MAX;
	static int8_t x523 = -1;
	static uint16_t x524 = UINT16_MAX;
	volatile int32_t t130 = 49109735;

    t130 = (((x521&x522)|x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	volatile int16_t x526 = -1;
	static uint64_t x527 = 5LLU;
	static int16_t x528 = 31;
	volatile int32_t t131 = -185057508;

    t131 = (((x525&x526)|x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 7958782843620439LL;
	int64_t x530 = 32LL;
	int32_t x531 = -1;
	uint8_t x532 = 35U;
	volatile int32_t t132 = 15704;

    t132 = (((x529&x530)|x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	int16_t x534 = INT16_MIN;
	int64_t x536 = -1LL;
	static volatile int32_t t133 = 1;

    t133 = (((x533&x534)|x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -1;
	int32_t x538 = -422248301;
	uint8_t x539 = UINT8_MAX;
	int8_t x540 = INT8_MIN;

    t134 = (((x537&x538)|x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = -1;
	int8_t x542 = INT8_MAX;
	volatile uint64_t x543 = 896800976549944LLU;
	int8_t x544 = 11;
	volatile int32_t t135 = -6;

    t135 = (((x541&x542)|x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	static uint8_t x546 = 15U;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = 1;
	volatile int32_t t136 = 10619361;

    t136 = (((x545&x546)|x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -6265272408981LL;
	int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MIN;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t137 = -52377;

    t137 = (((x549&x550)|x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 57571869819842LLU;
	int64_t x554 = INT64_MIN;
	uint32_t x555 = 180685971U;
	uint32_t x556 = UINT32_MAX;
	static volatile int32_t t138 = -1;

    t138 = (((x553&x554)|x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;

    t139 = (((x557&x558)|x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 4256LLU;
	int32_t x563 = INT32_MIN;
	volatile int32_t t140 = 2457;

    t140 = (((x561&x562)|x563)==x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = 9820006135335LLU;
	int64_t x566 = INT64_MIN;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = 0;
	static volatile int32_t t141 = -795169279;

    t141 = (((x565&x566)|x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	uint8_t x570 = 10U;
	static int64_t x571 = INT64_MIN;
	int64_t x572 = 852566477002177LL;
	int32_t t142 = -105;

    t142 = (((x569&x570)|x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x574 = UINT32_MAX;
	volatile int64_t x575 = 530LL;
	uint16_t x576 = 5812U;
	volatile int32_t t143 = 9428;

    t143 = (((x573&x574)|x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	uint64_t x578 = UINT64_MAX;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 2;

    t144 = (((x577&x578)|x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = INT8_MIN;
	uint8_t x582 = 0U;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = -244565757;
	int32_t t145 = -52;

    t145 = (((x581&x582)|x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x585 = INT64_MIN;
	static int8_t x587 = 6;
	uint32_t x588 = 45367U;
	int32_t t146 = 192608179;

    t146 = (((x585&x586)|x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	uint8_t x591 = UINT8_MAX;
	static int32_t x592 = INT32_MAX;
	volatile int32_t t147 = 101089049;

    t147 = (((x589&x590)|x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	volatile int32_t x594 = INT32_MIN;
	static volatile uint16_t x595 = 25U;
	int64_t x596 = INT64_MAX;
	volatile int32_t t148 = 106;

    t148 = (((x593&x594)|x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 928838657446397585LL;
	static uint16_t x599 = 8U;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = 79950;

    t149 = (((x597&x598)|x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	static int16_t x602 = INT16_MAX;
	int16_t x603 = -1;
	uint64_t x604 = 1523LLU;
	volatile int32_t t150 = -52429;

    t150 = (((x601&x602)|x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = -1;
	static volatile uint64_t x606 = UINT64_MAX;
	static int16_t x607 = INT16_MIN;
	uint8_t x608 = 13U;
	volatile int32_t t151 = 1;

    t151 = (((x605&x606)|x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x609 = 3515619505LLU;
	uint64_t x610 = 227526784705874LLU;
	volatile int8_t x611 = -58;
	int32_t t152 = -408097699;

    t152 = (((x609&x610)|x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;

    t153 = (((x613&x614)|x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 8025;
	static int32_t x618 = INT32_MIN;
	int32_t x619 = INT32_MAX;
	static int32_t x620 = -1;
	int32_t t154 = -115035395;

    t154 = (((x617&x618)|x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = INT64_MAX;
	volatile uint8_t x622 = 21U;
	static uint16_t x623 = 13326U;
	int16_t x624 = -1;
	static volatile int32_t t155 = 752050;

    t155 = (((x621&x622)|x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = 60;
	uint64_t x627 = 342220969LLU;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t156 = 1;

    t156 = (((x625&x626)|x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x631 = -1;
	volatile uint64_t x632 = 14544LLU;

    t157 = (((x629&x630)|x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 51U;
	volatile int64_t x636 = -1LL;

    t158 = (((x633&x634)|x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x639 = -400;
	volatile int64_t x640 = -1LL;
	int32_t t159 = -1;

    t159 = (((x637&x638)|x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MIN;
	int16_t x642 = INT16_MAX;
	volatile int16_t x643 = INT16_MIN;
	static volatile int16_t x644 = INT16_MIN;
	int32_t t160 = -199098203;

    t160 = (((x641&x642)|x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 3;
	static volatile int8_t x646 = INT8_MIN;
	volatile int16_t x647 = INT16_MIN;
	int64_t x648 = -20091636238LL;
	volatile int32_t t161 = 75348;

    t161 = (((x645&x646)|x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 134U;
	int64_t x650 = -91214LL;
	static int32_t x652 = INT32_MIN;
	static int32_t t162 = 3315842;

    t162 = (((x649&x650)|x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 55U;
	uint32_t x654 = 746154799U;
	volatile int16_t x655 = -1;
	static int16_t x656 = INT16_MAX;

    t163 = (((x653&x654)|x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = INT32_MIN;
	int64_t x659 = -1LL;
	uint16_t x660 = 0U;
	int32_t t164 = -15620935;

    t164 = (((x657&x658)|x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = INT16_MIN;
	static volatile int32_t x664 = -967;

    t165 = (((x661&x662)|x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = 1U;
	uint8_t x666 = 15U;
	uint8_t x667 = 14U;
	int16_t x668 = -1;
	int32_t t166 = 174641085;

    t166 = (((x665&x666)|x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = -719LL;
	int8_t x671 = INT8_MAX;
	int16_t x672 = 8;
	int32_t t167 = -884689120;

    t167 = (((x669&x670)|x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x674 = 8077U;
	uint8_t x676 = UINT8_MAX;
	static int32_t t168 = 221;

    t168 = (((x673&x674)|x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = -1;
	uint16_t x678 = 0U;
	int16_t x679 = INT16_MIN;
	uint16_t x680 = 191U;
	volatile int32_t t169 = 118;

    t169 = (((x677&x678)|x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	static uint64_t x682 = 77329639LLU;
	int32_t x683 = 252;
	int32_t t170 = -1;

    t170 = (((x681&x682)|x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x686 = 6787LLU;
	int32_t x687 = INT32_MIN;
	uint16_t x688 = UINT16_MAX;
	static volatile int32_t t171 = 13;

    t171 = (((x685&x686)|x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x690 = -1;
	int16_t x691 = -13961;
	int32_t x692 = -1;
	volatile int32_t t172 = 292842;

    t172 = (((x689&x690)|x691)==x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 2LLU;
	int8_t x694 = INT8_MAX;
	int16_t x695 = INT16_MIN;
	uint16_t x696 = 454U;
	volatile int32_t t173 = 688091009;

    t173 = (((x693&x694)|x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -1LL;
	static uint32_t x698 = UINT32_MAX;
	uint16_t x699 = UINT16_MAX;

    t174 = (((x697&x698)|x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	volatile int8_t x703 = INT8_MIN;
	volatile uint64_t x704 = 4358966583987835LLU;
	volatile int32_t t175 = 162055;

    t175 = (((x701&x702)|x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 2U;
	int16_t x707 = -1;
	static volatile int32_t t176 = 10197;

    t176 = (((x705&x706)|x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	int32_t t177 = -131865284;

    t177 = (((x709&x710)|x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x713 = -1LL;
	int16_t x714 = 49;
	static int64_t x715 = 177226039412937LL;
	static int16_t x716 = INT16_MIN;
	static int32_t t178 = 133115006;

    t178 = (((x713&x714)|x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MAX;
	volatile int32_t x718 = INT32_MIN;
	uint16_t x719 = 1U;
	volatile uint16_t x720 = 60U;
	static int32_t t179 = 1;

    t179 = (((x717&x718)|x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int8_t x722 = INT8_MIN;
	static int32_t x724 = INT32_MIN;
	int32_t t180 = 1;

    t180 = (((x721&x722)|x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x726 = INT64_MIN;
	uint8_t x727 = 3U;
	static uint16_t x728 = UINT16_MAX;
	volatile int32_t t181 = -28396850;

    t181 = (((x725&x726)|x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x730 = 20710U;
	uint8_t x731 = 61U;
	static int64_t x732 = INT64_MIN;
	static volatile int32_t t182 = 15935;

    t182 = (((x729&x730)|x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	uint32_t x734 = 867371537U;
	int64_t x735 = INT64_MAX;

    t183 = (((x733&x734)|x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x737 = 78611LLU;
	volatile int8_t x738 = INT8_MIN;
	int16_t x739 = -5;
	static int8_t x740 = 0;
	int32_t t184 = -92;

    t184 = (((x737&x738)|x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	volatile uint32_t x742 = 3U;
	uint32_t x743 = 5U;
	volatile int8_t x744 = INT8_MIN;
	int32_t t185 = 421508;

    t185 = (((x741&x742)|x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -1;
	static uint64_t x747 = UINT64_MAX;
	static volatile uint8_t x748 = 53U;
	int32_t t186 = -50363416;

    t186 = (((x745&x746)|x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 144U;
	int64_t x750 = INT64_MIN;
	int64_t x751 = 155LL;
	static volatile int16_t x752 = INT16_MAX;
	volatile int32_t t187 = -10260;

    t187 = (((x749&x750)|x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x754 = INT16_MIN;
	volatile int16_t x755 = 21;

    t188 = (((x753&x754)|x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 105U;
	uint32_t x759 = 14268U;
	int32_t t189 = 193;

    t189 = (((x757&x758)|x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 4974;
	int8_t x762 = 1;
	int8_t x763 = -1;
	int32_t x764 = -1;
	int32_t t190 = 3;

    t190 = (((x761&x762)|x763)==x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	volatile int64_t x766 = INT64_MIN;
	int8_t x767 = -1;
	int64_t x768 = -1LL;
	volatile int32_t t191 = 9309;

    t191 = (((x765&x766)|x767)==x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x770 = 4U;
	int16_t x771 = INT16_MAX;
	static int32_t x772 = -90652;
	volatile int32_t t192 = -7;

    t192 = (((x769&x770)|x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 1439U;
	volatile int64_t x774 = INT64_MAX;
	static int32_t x776 = 3;
	static volatile int32_t t193 = -136398531;

    t193 = (((x773&x774)|x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	uint8_t x778 = 2U;
	volatile int16_t x779 = 53;
	uint32_t x780 = 215824433U;
	static int32_t t194 = 3576;

    t194 = (((x777&x778)|x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	int64_t x782 = INT64_MIN;
	int16_t x783 = INT16_MAX;
	static volatile int8_t x784 = INT8_MIN;
	int32_t t195 = 174;

    t195 = (((x781&x782)|x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = INT32_MIN;
	int64_t x787 = -24155030974224LL;

    t196 = (((x785&x786)|x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	volatile int8_t x790 = 1;
	volatile int32_t t197 = -863;

    t197 = (((x789&x790)|x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x794 = INT32_MIN;
	uint16_t x795 = UINT16_MAX;
	int16_t x796 = INT16_MIN;

    t198 = (((x793&x794)|x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = INT8_MAX;
	uint16_t x798 = 123U;
	uint32_t x799 = UINT32_MAX;
	static int64_t x800 = INT64_MAX;
	volatile int32_t t199 = -46050597;

    t199 = (((x797&x798)|x799)==x800);

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

