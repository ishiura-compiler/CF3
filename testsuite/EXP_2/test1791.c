
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

static int8_t x8 = INT8_MIN;
static int32_t x11 = INT32_MIN;
int8_t x12 = INT8_MIN;
int64_t t3 = -1LL;
volatile uint8_t x22 = 1U;
uint8_t x29 = 41U;
int8_t x32 = INT8_MIN;
uint64_t x33 = UINT64_MAX;
uint32_t x38 = UINT32_MAX;
uint32_t x39 = UINT32_MAX;
int8_t x40 = 37;
int8_t x42 = 9;
int32_t t10 = 224;
static int32_t x48 = INT32_MIN;
static int32_t t11 = 218883866;
int32_t x50 = INT32_MIN;
int32_t x51 = -1;
volatile int64_t t12 = INT64_MAX;
uint8_t x60 = 2U;
uint16_t x63 = 27U;
uint16_t x64 = 105U;
int8_t x66 = 9;
volatile int64_t x67 = INT64_MIN;
volatile int64_t x70 = -807LL;
int64_t x72 = INT64_MAX;
static uint64_t t19 = 222579468263839256LLU;
volatile uint16_t x85 = UINT16_MAX;
int32_t x87 = INT32_MIN;
int64_t x90 = INT64_MIN;
int16_t x93 = -1;
int8_t x100 = INT8_MIN;
volatile uint32_t t24 = 53667279U;
int8_t x108 = INT8_MIN;
volatile int32_t t25 = 14560830;
uint32_t x117 = 183798U;
volatile uint16_t x119 = UINT16_MAX;
volatile uint64_t x123 = UINT64_MAX;
uint16_t x124 = UINT16_MAX;
uint8_t x129 = 109U;
int64_t x130 = INT64_MAX;
static uint32_t x137 = UINT32_MAX;
int64_t x143 = INT64_MIN;
int8_t x150 = INT8_MAX;
volatile uint32_t t34 = 8476251U;
uint8_t x162 = UINT8_MAX;
uint8_t x163 = 35U;
int64_t t37 = 50085444640067LL;
uint8_t x172 = UINT8_MAX;
uint64_t x182 = 14062864LLU;
int8_t x187 = INT8_MIN;
int32_t x188 = INT32_MAX;
static volatile uint64_t t42 = UINT64_MAX;
int8_t x189 = INT8_MAX;
int16_t x190 = -4;
static int16_t x195 = INT16_MAX;
int64_t x196 = INT64_MIN;
volatile int64_t x199 = 7847949337812LL;
int64_t x204 = INT64_MIN;
uint64_t t47 = UINT64_MAX;
uint32_t x211 = 5910390U;
static int8_t x213 = 0;
static uint16_t x218 = 46U;
uint64_t x226 = UINT64_MAX;
int64_t x232 = INT64_MAX;
uint32_t x236 = UINT32_MAX;
volatile int16_t x244 = INT16_MAX;
int32_t t56 = -51;
volatile int64_t t57 = 129108LL;
volatile uint16_t x249 = 25U;
int64_t t59 = -961159829LL;
uint8_t x257 = UINT8_MAX;
volatile int64_t t60 = 1LL;
int8_t x261 = INT8_MIN;
int32_t x265 = INT32_MIN;
int64_t t64 = 48LL;
static int8_t x277 = INT8_MIN;
static int8_t x284 = -5;
uint8_t x286 = 61U;
static volatile int32_t t67 = -109603382;
static int32_t x289 = INT32_MAX;
int32_t t68 = 48;
int32_t x295 = INT32_MIN;
static volatile int32_t t69 = -6682413;
int32_t t70 = 13;
uint64_t t71 = 132588413428292LLU;
static volatile int32_t t73 = 102461576;
static int16_t x316 = INT16_MAX;
int64_t x317 = -1LL;
int32_t x332 = -1309335;
static int64_t t79 = -51159282278045LL;
int64_t x341 = -1LL;
uint32_t x348 = 16177U;
static volatile int32_t t83 = -1883;
volatile int16_t x355 = -640;
uint32_t x361 = 29U;
int8_t x362 = INT8_MIN;
static int16_t x367 = -120;
volatile int8_t x370 = 30;
static volatile int32_t t88 = -2710241;
uint64_t x380 = 235231330648LLU;
static int8_t x389 = 0;
volatile uint32_t x391 = 791242434U;
int16_t x392 = -2;
static int32_t x395 = -1;
static volatile uint64_t t94 = 379240131658791LLU;
int32_t t95 = 115;
volatile int16_t x409 = INT16_MIN;
uint32_t x416 = UINT32_MAX;
volatile int64_t x419 = INT64_MAX;
int16_t x420 = 1;
int16_t x430 = INT16_MIN;
volatile uint32_t x433 = UINT32_MAX;
volatile int32_t x435 = 158909512;
uint16_t x442 = UINT16_MAX;
int64_t x443 = -1LL;
static int64_t x449 = -321102687LL;
static int32_t x451 = INT32_MIN;
int8_t x459 = 18;
uint64_t x468 = UINT64_MAX;
uint64_t x470 = 3547070LLU;
static uint32_t x471 = UINT32_MAX;
int16_t x472 = INT16_MIN;
int32_t t112 = -22051099;
int8_t x477 = INT8_MAX;
int8_t x480 = -1;
int64_t x481 = 41828121590LL;
uint8_t x487 = 31U;
int64_t t116 = -695LL;
volatile int16_t x496 = INT16_MIN;
int8_t x501 = INT8_MIN;
int16_t x510 = INT16_MIN;
volatile uint16_t x515 = 182U;
volatile int32_t t124 = -1162;
static uint32_t x522 = UINT32_MAX;
int64_t x523 = 953LL;
static int16_t x524 = INT16_MIN;
uint8_t x530 = UINT8_MAX;
volatile int64_t x533 = INT64_MAX;
int32_t x541 = -1;
volatile uint32_t x542 = UINT32_MAX;
int32_t x543 = INT32_MIN;
volatile int64_t x545 = INT64_MIN;
int8_t x553 = 20;
int16_t x565 = INT16_MIN;
int16_t x566 = INT16_MIN;
static volatile int32_t t135 = -3564;
static uint16_t x571 = 1U;
volatile int64_t t136 = 64040194LL;
static uint64_t t137 = UINT64_MAX;
int16_t x591 = -1;
static int32_t x593 = INT32_MIN;
int16_t x602 = -3;
int64_t t145 = -2923508552LL;
static uint16_t x613 = UINT16_MAX;
int64_t x615 = 24866LL;
int8_t x619 = -1;
static volatile int64_t x620 = -1LL;
int16_t x621 = INT16_MAX;
volatile uint16_t x630 = UINT16_MAX;
volatile int16_t x634 = INT16_MIN;
int64_t t151 = 6LL;
int32_t x639 = INT32_MIN;
static int8_t x647 = -1;
volatile uint32_t t154 = UINT32_MAX;
int32_t t156 = -843;
uint8_t x660 = 9U;
volatile int64_t t158 = -339130197LL;
int64_t x665 = INT64_MAX;
static int8_t x671 = -15;
uint32_t x674 = UINT32_MAX;
static uint8_t x681 = 0U;
volatile uint32_t x683 = UINT32_MAX;
int8_t x685 = INT8_MIN;
uint32_t x686 = 154964U;
int16_t x691 = -1;
uint8_t x692 = 3U;
int16_t x693 = 27;
volatile uint64_t t166 = 1732449842LLU;
volatile uint32_t x701 = UINT32_MAX;
static int64_t x708 = -324592928350LL;
int8_t x719 = INT8_MIN;
int16_t x720 = INT16_MAX;
int64_t x721 = 6519LL;
static int16_t x731 = -6112;
uint16_t x736 = 357U;
uint64_t x740 = 172496871676743LLU;
int32_t x742 = 190434;
static int64_t x746 = 10992689436566LL;
uint8_t x750 = 1U;
volatile int16_t x751 = -83;
static volatile int64_t x757 = INT64_MIN;
int16_t x760 = INT16_MIN;
int64_t x771 = -1LL;
int32_t x776 = INT32_MIN;
volatile int32_t x786 = INT32_MAX;
static int64_t x787 = INT64_MIN;
int16_t x792 = 9764;
uint64_t x799 = UINT64_MAX;
int16_t x803 = INT16_MIN;
int8_t x810 = 2;
int16_t x812 = -1;
int64_t x814 = -60378746486374LL;
static volatile uint64_t x827 = UINT64_MAX;
uint32_t x831 = 707209U;
int64_t x833 = -1LL;
static volatile int64_t t198 = -4697341591LL;


void f0(void) {
    	int64_t x1 = 12LL;
	int64_t x2 = 77162383561LL;
	int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 5LL;

    t0 = ((x1-(x2<=x3))|x4);

    if (t0 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	volatile int16_t x6 = INT16_MAX;
	volatile uint8_t x7 = 2U;
	volatile int64_t t1 = -5LL;

    t1 = ((x5-(x6<=x7))|x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	int32_t t2 = -110698774;

    t2 = ((x9-(x10<=x11))|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 52LL;
	uint64_t x14 = 1236LLU;
	static uint32_t x15 = 195089689U;
	int8_t x16 = INT8_MIN;

    t3 = ((x13-(x14<=x15))|x16);

    if (t3 != -77LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	int64_t x19 = INT64_MAX;
	static int16_t x20 = -1;
	int32_t t4 = -20888758;

    t4 = ((x17-(x18<=x19))|x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = 29796U;
	uint16_t x23 = 12670U;
	uint8_t x24 = 49U;
	volatile uint32_t t5 = 2293U;

    t5 = ((x21-(x22<=x23))|x24);

    if (t5 != 29811U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	volatile int16_t x26 = INT16_MIN;
	static int8_t x27 = INT8_MIN;
	volatile int32_t x28 = -372;
	volatile int64_t t6 = 11696856LL;

    t6 = ((x25-(x26<=x27))|x28);

    if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = UINT64_MAX;
	volatile uint8_t x31 = UINT8_MAX;
	volatile int32_t t7 = 2652;

    t7 = ((x29-(x30<=x31))|x32);

    if (t7 != -87) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	static uint64_t t8 = 9588559661765575LLU;

    t8 = ((x33-(x34<=x35))|x36);

    if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	int32_t t9 = -14137;

    t9 = ((x37-(x38<=x39))|x40);

    if (t9 != -32769) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 22;
	int32_t x43 = 58166857;
	int8_t x44 = INT8_MAX;

    t10 = ((x41-(x42<=x43))|x44);

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;

    t11 = ((x45-(x46<=x47))|x48);

    if (t11 != -2147450882) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	int64_t x52 = INT64_MAX;

    t12 = ((x49-(x50<=x51))|x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint32_t x54 = UINT32_MAX;
	static int8_t x55 = INT8_MIN;
	static int8_t x56 = 0;
	static volatile int32_t t13 = -1;

    t13 = ((x53-(x54<=x55))|x56);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	int32_t t14 = 13422;

    t14 = ((x57-(x58<=x59))|x60);

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	int32_t x62 = INT32_MIN;
	volatile int32_t t15 = INT32_MAX;

    t15 = ((x61-(x62<=x63))|x64);

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 518977345LLU;
	int16_t x68 = 1;
	volatile uint64_t t16 = 921462309438571LLU;

    t16 = ((x65-(x66<=x67))|x68);

    if (t16 != 518977345LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = 199U;
	static volatile int16_t x71 = INT16_MAX;
	volatile int64_t t17 = INT64_MAX;

    t17 = ((x69-(x70<=x71))|x72);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 32134;

    t18 = ((x77-(x78<=x79))|x80);

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = 191888493LL;
	static int32_t x83 = -1;
	static uint64_t x84 = 265784530417153LLU;

    t19 = ((x81-(x82<=x83))|x84);

    if (t19 != 18446744073709532673LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x86 = 2;
	uint32_t x88 = 175U;
	uint32_t t20 = 195U;

    t20 = ((x85-(x86<=x87))|x88);

    if (t20 != 65535U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MAX;
	int16_t x91 = INT16_MAX;
	volatile int64_t x92 = 1159359540282639LL;
	int64_t t21 = -89567593183112649LL;

    t21 = ((x89-(x90<=x91))|x92);

    if (t21 != 1159359540282751LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x94 = INT64_MAX;
	uint16_t x95 = UINT16_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t22 = -45185;

    t22 = ((x93-(x94<=x95))|x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x97 = 11U;
	static int32_t x98 = 285668;
	uint16_t x99 = 0U;
	static volatile int32_t t23 = 47967;

    t23 = ((x97-(x98<=x99))|x100);

    if (t23 != -117) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	static int16_t x102 = INT16_MAX;
	int64_t x103 = -1LL;
	uint32_t x104 = 6216132U;

    t24 = ((x101-(x102<=x103))|x104);

    if (t24 != 4294967236U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x105 = 2U;
	int32_t x106 = INT32_MAX;
	uint8_t x107 = 0U;

    t25 = ((x105-(x106<=x107))|x108);

    if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MIN;
	volatile int64_t t26 = -3895087LL;

    t26 = ((x109-(x110<=x111))|x112);

    if (t26 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x118 = INT8_MIN;
	int16_t x120 = -1952;
	uint32_t t27 = 89478U;

    t27 = ((x117-(x118<=x119))|x120);

    if (t27 != 4294966773U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 1872U;
	static volatile int32_t t28 = -1;

    t28 = ((x121-(x122<=x123))|x124);

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = -1;
	volatile int16_t x127 = INT16_MIN;
	volatile uint64_t x128 = 104163418807LLU;
	volatile uint64_t t29 = 144776212988861LLU;

    t29 = ((x125-(x126<=x127))|x128);

    if (t29 != 104163418879LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x131 = -859369014562LL;
	uint32_t x132 = UINT32_MAX;
	uint32_t t30 = UINT32_MAX;

    t30 = ((x129-(x130<=x131))|x132);

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = UINT16_MAX;
	int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	static uint32_t t31 = UINT32_MAX;

    t31 = ((x133-(x134<=x135))|x136);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x138 = INT16_MIN;
	int32_t x139 = 1279;
	static volatile int16_t x140 = INT16_MIN;
	uint32_t t32 = 219U;

    t32 = ((x137-(x138<=x139))|x140);

    if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x141 = -1;
	static int32_t x142 = -60093180;
	volatile int8_t x144 = -10;
	volatile int32_t t33 = 7712434;

    t33 = ((x141-(x142<=x143))|x144);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x149 = 0U;
	int32_t x151 = -1434;
	static int8_t x152 = INT8_MIN;

    t34 = ((x149-(x150<=x151))|x152);

    if (t34 != 4294967168U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x153 = -1LL;
	static int32_t x154 = INT32_MIN;
	int64_t x155 = 35509687LL;
	int32_t x156 = -1;
	int64_t t35 = -1065985017LL;

    t35 = ((x153-(x154<=x155))|x156);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = -4;
	volatile uint32_t x158 = 45U;
	static volatile int8_t x159 = -1;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

    t36 = ((x157-(x158<=x159))|x160);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x161 = INT64_MIN;
	int32_t x164 = -72;

    t37 = ((x161-(x162<=x163))|x164);

    if (t37 != -72LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x165 = 1U;
	uint16_t x166 = 28186U;
	static int16_t x167 = -1;
	volatile int16_t x168 = -2829;
	uint32_t t38 = 103912U;

    t38 = ((x165-(x166<=x167))|x168);

    if (t38 != 4294964467U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x169 = -1;
	static int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	static volatile int32_t t39 = -14023187;

    t39 = ((x169-(x170<=x171))|x172);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	static volatile uint64_t x174 = UINT64_MAX;
	volatile int16_t x175 = INT16_MAX;
	int16_t x176 = -278;
	static int32_t t40 = -1735;

    t40 = ((x173-(x174<=x175))|x176);

    if (t40 != -257) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x181 = -1;
	int32_t x183 = INT32_MAX;
	uint32_t x184 = 2U;
	volatile uint32_t t41 = 476012U;

    t41 = ((x181-(x182<=x183))|x184);

    if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	static uint32_t x186 = UINT32_MAX;

    t42 = ((x185-(x186<=x187))|x188);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x191 = INT64_MAX;
	volatile int32_t x192 = -1;
	int32_t t43 = 75035069;

    t43 = ((x189-(x190<=x191))|x192);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	volatile int64_t t44 = -89263992035967LL;

    t44 = ((x193-(x194<=x195))|x196);

    if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	uint64_t x198 = 121LLU;
	int64_t x200 = INT64_MIN;
	int64_t t45 = 5799703LL;

    t45 = ((x197-(x198<=x199))|x200);

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x201 = INT32_MAX;
	uint8_t x202 = 0U;
	uint32_t x203 = 2257306U;
	volatile int64_t t46 = 79145760392021507LL;

    t46 = ((x201-(x202<=x203))|x204);

    if (t46 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = INT32_MAX;
	volatile int32_t x206 = INT32_MAX;
	volatile uint16_t x207 = 57U;
	volatile uint64_t x208 = UINT64_MAX;

    t47 = ((x205-(x206<=x207))|x208);

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = -9216894558532LL;
	static int32_t x212 = 218886;
	volatile int32_t t48 = 232;

    t48 = ((x209-(x210<=x211))|x212);

    if (t48 != 219134) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x214 = 18806U;
	int64_t x215 = -1LL;
	int64_t x216 = -64LL;
	volatile int64_t t49 = 2LL;

    t49 = ((x213-(x214<=x215))|x216);

    if (t49 != -64LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x217 = 276;
	static int32_t x219 = INT32_MIN;
	static int64_t x220 = 17145081038915LL;
	volatile int64_t t50 = 213LL;

    t50 = ((x217-(x218<=x219))|x220);

    if (t50 != 17145081039191LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = INT16_MIN;
	uint8_t x222 = 4U;
	static int64_t x223 = INT64_MIN;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t51 = 4941065414LL;

    t51 = ((x221-(x222<=x223))|x224);

    if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x225 = 0LLU;
	int16_t x227 = INT16_MAX;
	uint8_t x228 = 17U;
	volatile uint64_t t52 = 5011LLU;

    t52 = ((x225-(x226<=x227))|x228);

    if (t52 != 17LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MAX;
	int16_t x231 = -1;
	int64_t t53 = 1816535LL;

    t53 = ((x229-(x230<=x231))|x232);

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x233 = 40886873LLU;
	uint16_t x234 = 2789U;
	volatile uint16_t x235 = 22482U;
	volatile uint64_t t54 = 414686170208652LLU;

    t54 = ((x233-(x234<=x235))|x236);

    if (t54 != 4294967295LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = -48423LL;
	static int64_t x238 = -203812987407693790LL;
	volatile int8_t x239 = -2;
	int32_t x240 = 518;
	int64_t t55 = -11242LL;

    t55 = ((x237-(x238<=x239))|x240);

    if (t55 != -48418LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x241 = INT8_MIN;
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = -5402029LL;

    t56 = ((x241-(x242<=x243))|x244);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -292763460647344216LL;

    t57 = ((x245-(x246<=x247))|x248);

    if (t57 != -2065258584LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x250 = -1;
	static int8_t x251 = 0;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t58 = -2;

    t58 = ((x249-(x250<=x251))|x252);

    if (t58 != -32744) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x253 = 480257U;
	int64_t x254 = -100767304205393LL;
	int16_t x255 = -59;
	int64_t x256 = -50892793776332LL;

    t59 = ((x253-(x254<=x255))|x256);

    if (t59 != -50892793448652LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x258 = 9030515LL;
	int32_t x259 = 10328655;
	int64_t x260 = 306586890LL;

    t60 = ((x257-(x258<=x259))|x260);

    if (t60 != 306587134LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x262 = INT32_MIN;
	volatile uint32_t x263 = 7391U;
	uint32_t x264 = 360U;
	uint32_t t61 = 468U;

    t61 = ((x261-(x262<=x263))|x264);

    if (t61 != 4294967272U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x266 = 400811923932LL;
	int32_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t62 = 71;

    t62 = ((x265-(x266<=x267))|x268);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = INT8_MIN;
	int16_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t63 = -10004041;

    t63 = ((x269-(x270<=x271))|x272);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x273 = 14788U;
	int32_t x274 = -1;
	int16_t x275 = 1;
	int64_t x276 = -1LL;

    t64 = ((x273-(x274<=x275))|x276);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x278 = INT32_MAX;
	int16_t x279 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t65 = -38;

    t65 = ((x277-(x278<=x279))|x280);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -249618;
	static int32_t t66 = -20613;

    t66 = ((x281-(x282<=x283))|x284);

    if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x285 = 3U;
	static uint32_t x287 = 29870488U;
	volatile int8_t x288 = -1;

    t67 = ((x285-(x286<=x287))|x288);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x290 = 199804U;
	volatile int8_t x291 = -1;
	int16_t x292 = INT16_MIN;

    t68 = ((x289-(x290<=x291))|x292);

    if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;
	int16_t x296 = -1;

    t69 = ((x293-(x294<=x295))|x296);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = UINT8_MAX;
	static int8_t x298 = 60;
	int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;

    t70 = ((x297-(x298<=x299))|x300);

    if (t70 != -32513) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = 58907049;
	uint32_t x302 = 355207566U;
	int32_t x303 = -1;
	static uint64_t x304 = 165859584026296LLU;

    t71 = ((x301-(x302<=x303))|x304);

    if (t71 != 165859617603512LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = -1;
	static int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 1U;
	int32_t t72 = 6455;

    t72 = ((x305-(x306<=x307))|x308);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = UINT8_MAX;

    t73 = ((x309-(x310<=x311))|x312);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x313 = UINT16_MAX;
	volatile int64_t x314 = INT64_MIN;
	uint32_t x315 = 517076U;
	static int32_t t74 = -1436;

    t74 = ((x313-(x314<=x315))|x316);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x318 = -1;
	int8_t x319 = INT8_MAX;
	uint64_t x320 = UINT64_MAX;
	uint64_t t75 = UINT64_MAX;

    t75 = ((x317-(x318<=x319))|x320);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = 64;
	int64_t x322 = -1LL;
	uint8_t x323 = UINT8_MAX;
	uint64_t x324 = 4050815204LLU;
	uint64_t t76 = 2558LLU;

    t76 = ((x321-(x322<=x323))|x324);

    if (t76 != 4050815231LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = 3297218313699403849LL;
	int32_t x326 = -226793781;
	static int32_t x327 = INT32_MIN;
	uint32_t x328 = 1218655377U;
	static int64_t t77 = 1672955971531LL;

    t77 = ((x325-(x326<=x327))|x328);

    if (t77 != 3297218314773150937LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x329 = INT8_MIN;
	int64_t x330 = 119015LL;
	static volatile int64_t x331 = -3964534501820984866LL;
	static int32_t t78 = 1836;

    t78 = ((x329-(x330<=x331))|x332);

    if (t78 != -23) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x333 = INT64_MIN;
	uint64_t x334 = 1497911622675LLU;
	uint8_t x335 = 120U;
	uint16_t x336 = UINT16_MAX;

    t79 = ((x333-(x334<=x335))|x336);

    if (t79 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -1;
	int64_t x338 = INT64_MIN;
	static int8_t x339 = 6;
	int64_t x340 = 493564507255LL;
	volatile int64_t t80 = -2680998695256416LL;

    t80 = ((x337-(x338<=x339))|x340);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x342 = -1;
	static uint8_t x343 = 1U;
	int8_t x344 = INT8_MIN;
	volatile int64_t t81 = 878029377670768LL;

    t81 = ((x341-(x342<=x343))|x344);

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x345 = UINT64_MAX;
	int32_t x346 = -1;
	static volatile int64_t x347 = -226030LL;
	volatile uint64_t t82 = UINT64_MAX;

    t82 = ((x345-(x346<=x347))|x348);

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x349 = INT32_MAX;
	int16_t x350 = -5;
	int32_t x351 = INT32_MAX;
	int16_t x352 = -1;

    t83 = ((x349-(x350<=x351))|x352);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = -54;
	int32_t x354 = INT32_MIN;
	volatile int64_t x356 = INT64_MIN;
	static int64_t t84 = 2807930642611LL;

    t84 = ((x353-(x354<=x355))|x356);

    if (t84 != -55LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x357 = -1;
	int32_t x358 = -1;
	int32_t x359 = INT32_MIN;
	int8_t x360 = 44;
	int32_t t85 = -2;

    t85 = ((x357-(x358<=x359))|x360);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x363 = UINT64_MAX;
	volatile int16_t x364 = -6;
	volatile uint32_t t86 = 24U;

    t86 = ((x361-(x362<=x363))|x364);

    if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x365 = INT16_MIN;
	int64_t x366 = -138045792LL;
	static uint32_t x368 = 476U;
	uint32_t t87 = 4706599U;

    t87 = ((x365-(x366<=x367))|x368);

    if (t87 != 4294934527U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x371 = -1;
	int8_t x372 = INT8_MIN;

    t88 = ((x369-(x370<=x371))|x372);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = 14116179203922702LL;
	int64_t x374 = INT64_MAX;
	int8_t x375 = 6;
	int16_t x376 = INT16_MIN;
	int64_t t89 = -2699461822084733255LL;

    t89 = ((x373-(x374<=x375))|x376);

    if (t89 != -25842LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x377 = INT8_MIN;
	int32_t x378 = INT32_MIN;
	volatile uint8_t x379 = 29U;
	uint64_t t90 = 133720598LLU;

    t90 = ((x377-(x378<=x379))|x380);

    if (t90 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x385 = INT32_MIN;
	static int8_t x386 = -1;
	uint64_t x387 = 2648920435399LLU;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t91 = 779;

    t91 = ((x385-(x386<=x387))|x388);

    if (t91 != -2147418113) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x390 = UINT16_MAX;
	int32_t t92 = 1;

    t92 = ((x389-(x390<=x391))|x392);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x393 = UINT16_MAX;
	static int8_t x394 = INT8_MIN;
	uint32_t x396 = 2841802U;
	volatile uint32_t t93 = 2U;

    t93 = ((x393-(x394<=x395))|x396);

    if (t93 != 2883582U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x397 = 5U;
	int32_t x398 = -123;
	uint32_t x399 = 1835364U;
	uint64_t x400 = 3695090LLU;

    t94 = ((x397-(x398<=x399))|x400);

    if (t94 != 3695095LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = -1;
	int64_t x402 = 4472744378956652LL;
	uint16_t x403 = 35U;
	int8_t x404 = -9;

    t95 = ((x401-(x402<=x403))|x404);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = 37;
	volatile int32_t x406 = -1;
	int16_t x407 = INT16_MAX;
	int64_t x408 = 995LL;
	int64_t t96 = 12984891492891LL;

    t96 = ((x405-(x406<=x407))|x408);

    if (t96 != 999LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x410 = -574;
	int32_t x411 = INT32_MAX;
	volatile int16_t x412 = INT16_MIN;
	int32_t t97 = -16463604;

    t97 = ((x409-(x410<=x411))|x412);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = -354;
	int8_t x414 = -1;
	int16_t x415 = 54;
	static uint32_t t98 = UINT32_MAX;

    t98 = ((x413-(x414<=x415))|x416);

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 0;
	volatile int16_t x418 = INT16_MAX;
	int32_t t99 = 166887264;

    t99 = ((x417-(x418<=x419))|x420);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x421 = 29;
	int32_t x422 = -4;
	int16_t x423 = INT16_MIN;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t100 = -124056;

    t100 = ((x421-(x422<=x423))|x424);

    if (t100 != -32739) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x425 = INT16_MIN;
	static uint32_t x426 = 11296895U;
	int32_t x427 = -1;
	int8_t x428 = INT8_MAX;
	volatile int32_t t101 = -57705950;

    t101 = ((x425-(x426<=x427))|x428);

    if (t101 != -32769) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x429 = 46U;
	int8_t x431 = 1;
	int16_t x432 = -88;
	static volatile int32_t t102 = 483859;

    t102 = ((x429-(x430<=x431))|x432);

    if (t102 != -83) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x434 = INT16_MAX;
	int16_t x436 = -1889;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = ((x433-(x434<=x435))|x436);

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = -10;
	uint8_t x438 = UINT8_MAX;
	static int32_t x439 = INT32_MIN;
	static uint8_t x440 = 3U;
	static int32_t t104 = 0;

    t104 = ((x437-(x438<=x439))|x440);

    if (t104 != -9) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = 0;
	uint32_t x444 = 309290428U;
	uint32_t t105 = 10U;

    t105 = ((x441-(x442<=x443))|x444);

    if (t105 != 309290428U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x445 = 28574900647445LLU;
	int32_t x446 = -1;
	uint16_t x447 = 13976U;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t106 = 624016226LLU;

    t106 = ((x445-(x446<=x447))|x448);

    if (t106 != 18446744073709549076LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x450 = 3812742892LLU;
	int8_t x452 = 1;
	static volatile int64_t t107 = 119970074761409007LL;

    t107 = ((x449-(x450<=x451))|x452);

    if (t107 != -321102687LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = -1LL;
	int16_t x454 = INT16_MIN;
	int16_t x455 = INT16_MIN;
	static uint64_t x456 = 230409LLU;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = ((x453-(x454<=x455))|x456);

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = -115422341367LL;
	int16_t x458 = 426;
	volatile int64_t x460 = INT64_MIN;
	volatile int64_t t109 = -686476870551172LL;

    t109 = ((x457-(x458<=x459))|x460);

    if (t109 != -115422341367LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x461 = INT8_MIN;
	static uint8_t x462 = UINT8_MAX;
	static int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MAX;
	volatile int64_t t110 = 24LL;

    t110 = ((x461-(x462<=x463))|x464);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = -90;
	int16_t x466 = INT16_MIN;
	int32_t x467 = -25197994;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = ((x465-(x466<=x467))|x468);

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = -1;

    t112 = ((x469-(x470<=x471))|x472);

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x473 = -1;
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -3;
	volatile int16_t x476 = INT16_MIN;
	volatile int32_t t113 = -5;

    t113 = ((x473-(x474<=x475))|x476);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x478 = INT64_MIN;
	volatile int32_t x479 = -293106215;
	volatile int32_t t114 = -52;

    t114 = ((x477-(x478<=x479))|x480);

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x482 = 8U;
	int32_t x483 = INT32_MAX;
	int16_t x484 = 3;
	static int64_t t115 = -35759219893112611LL;

    t115 = ((x481-(x482<=x483))|x484);

    if (t115 != 41828121591LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x485 = -1LL;
	int64_t x486 = -6435150512158522LL;
	uint8_t x488 = 3U;

    t116 = ((x485-(x486<=x487))|x488);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x489 = INT16_MAX;
	int16_t x490 = -1;
	volatile int32_t x491 = -339861216;
	int16_t x492 = -6;
	volatile int32_t t117 = 2;

    t117 = ((x489-(x490<=x491))|x492);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x493 = INT32_MAX;
	static volatile int32_t x494 = INT32_MIN;
	int32_t x495 = INT32_MIN;
	int32_t t118 = -1;

    t118 = ((x493-(x494<=x495))|x496);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = INT16_MIN;
	uint8_t x498 = 93U;
	volatile uint64_t x499 = UINT64_MAX;
	volatile int32_t x500 = -14846;
	int32_t t119 = 1688;

    t119 = ((x497-(x498<=x499))|x500);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x502 = INT8_MAX;
	volatile uint32_t x503 = 28748U;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t120 = -47731284;

    t120 = ((x501-(x502<=x503))|x504);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x505 = -25;
	int16_t x506 = -82;
	uint16_t x507 = UINT16_MAX;
	volatile int8_t x508 = -1;
	volatile int32_t t121 = -3;

    t121 = ((x505-(x506<=x507))|x508);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x509 = 934;
	int8_t x511 = 1;
	int16_t x512 = 0;
	int32_t t122 = 60949583;

    t122 = ((x509-(x510<=x511))|x512);

    if (t122 != 933) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x513 = -1;
	volatile int32_t x514 = INT32_MIN;
	int8_t x516 = INT8_MIN;
	volatile int32_t t123 = -175457;

    t123 = ((x513-(x514<=x515))|x516);

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x517 = INT16_MAX;
	volatile int16_t x518 = 6;
	uint32_t x519 = 31609385U;
	volatile int16_t x520 = INT16_MAX;

    t124 = ((x517-(x518<=x519))|x520);

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x521 = INT8_MIN;
	static int32_t t125 = -7;

    t125 = ((x521-(x522<=x523))|x524);

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x525 = INT8_MIN;
	int16_t x526 = -3;
	uint16_t x527 = 6698U;
	volatile int64_t x528 = -35327836LL;
	volatile int64_t t126 = -3957803664LL;

    t126 = ((x525-(x526<=x527))|x528);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x529 = INT64_MIN;
	int8_t x531 = INT8_MIN;
	uint32_t x532 = 50U;
	volatile int64_t t127 = -11525900LL;

    t127 = ((x529-(x530<=x531))|x532);

    if (t127 != -9223372036854775758LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x534 = INT16_MIN;
	static int16_t x535 = INT16_MIN;
	volatile int8_t x536 = -1;
	static volatile int64_t t128 = 471645752050115LL;

    t128 = ((x533-(x534<=x535))|x536);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = 16U;
	int64_t x538 = INT64_MIN;
	static uint64_t x539 = UINT64_MAX;
	uint32_t x540 = 83576U;
	static volatile uint32_t t129 = 540870U;

    t129 = ((x537-(x538<=x539))|x540);

    if (t129 != 83583U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x544 = INT64_MIN;
	volatile int64_t t130 = 9LL;

    t130 = ((x541-(x542<=x543))|x544);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x546 = -1;
	volatile int64_t x547 = -558121246149LL;
	uint8_t x548 = 2U;
	volatile int64_t t131 = 707333119923LL;

    t131 = ((x545-(x546<=x547))|x548);

    if (t131 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x549 = -1;
	static int16_t x550 = INT16_MAX;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MIN;
	volatile int32_t t132 = -409213208;

    t132 = ((x549-(x550<=x551))|x552);

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x554 = INT64_MAX;
	static volatile int16_t x555 = INT16_MIN;
	uint64_t x556 = 36842439LLU;
	volatile uint64_t t133 = 271992295089686295LLU;

    t133 = ((x553-(x554<=x555))|x556);

    if (t133 != 36842455LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x561 = UINT32_MAX;
	uint8_t x562 = UINT8_MAX;
	int32_t x563 = INT32_MIN;
	volatile int16_t x564 = -102;
	uint32_t t134 = UINT32_MAX;

    t134 = ((x561-(x562<=x563))|x564);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x567 = 26U;
	uint8_t x568 = 0U;

    t135 = ((x565-(x566<=x567))|x568);

    if (t135 != -32769) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x569 = INT64_MAX;
	volatile uint32_t x570 = UINT32_MAX;
	int64_t x572 = INT64_MIN;

    t136 = ((x569-(x570<=x571))|x572);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x577 = 1U;
	volatile int16_t x578 = INT16_MIN;
	int64_t x579 = -1LL;
	uint64_t x580 = UINT64_MAX;

    t137 = ((x577-(x578<=x579))|x580);

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = -16;
	static uint8_t x582 = UINT8_MAX;
	int8_t x583 = INT8_MAX;
	uint32_t x584 = 217984U;
	static volatile uint32_t t138 = 743U;

    t138 = ((x581-(x582<=x583))|x584);

    if (t138 != 4294967280U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x585 = 248522158443LL;
	static volatile int16_t x586 = -286;
	int64_t x587 = -1LL;
	int16_t x588 = INT16_MAX;
	int64_t t139 = 1899183LL;

    t139 = ((x585-(x586<=x587))|x588);

    if (t139 != 248522178559LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x590 = 0LL;
	static uint8_t x592 = 61U;
	int32_t t140 = 31;

    t140 = ((x589-(x590<=x591))|x592);

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x594 = -1LL;
	int64_t x595 = INT64_MIN;
	int32_t x596 = INT32_MIN;
	static int32_t t141 = INT32_MIN;

    t141 = ((x593-(x594<=x595))|x596);

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x597 = INT32_MAX;
	int8_t x598 = 1;
	int32_t x599 = 2294;
	uint16_t x600 = 564U;
	int32_t t142 = -23;

    t142 = ((x597-(x598<=x599))|x600);

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x601 = 250U;
	static int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MAX;
	static uint32_t t143 = 50051426U;

    t143 = ((x601-(x602<=x603))|x604);

    if (t143 != 2147483647U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x605 = -13695427LL;
	uint8_t x606 = 6U;
	uint64_t x607 = 9035322989909205LLU;
	int16_t x608 = 1;
	static int64_t t144 = 28833857031457048LL;

    t144 = ((x605-(x606<=x607))|x608);

    if (t144 != -13695427LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x609 = INT8_MIN;
	uint64_t x610 = 7361434751651LLU;
	uint8_t x611 = UINT8_MAX;
	int64_t x612 = -17506077LL;

    t145 = ((x609-(x610<=x611))|x612);

    if (t145 != -29LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x614 = INT64_MIN;
	volatile int32_t x616 = INT32_MAX;
	volatile int32_t t146 = INT32_MAX;

    t146 = ((x613-(x614<=x615))|x616);

    if (t146 != INT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x617 = INT8_MAX;
	int64_t x618 = -1LL;
	volatile int64_t t147 = -1LL;

    t147 = ((x617-(x618<=x619))|x620);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x622 = UINT8_MAX;
	int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MAX;
	static volatile int32_t t148 = -7805651;

    t148 = ((x621-(x622<=x623))|x624);

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x625 = -1;
	uint16_t x626 = 58U;
	int16_t x627 = 37;
	int64_t x628 = -1LL;
	volatile int64_t t149 = -66208652LL;

    t149 = ((x625-(x626<=x627))|x628);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x629 = -1;
	int8_t x631 = 1;
	static uint64_t x632 = UINT64_MAX;
	uint64_t t150 = UINT64_MAX;

    t150 = ((x629-(x630<=x631))|x632);

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = -312586283LL;
	int32_t x635 = INT32_MIN;
	int32_t x636 = -3381420;

    t151 = ((x633-(x634<=x635))|x636);

    if (t151 != -2199595LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x637 = 1031606;
	int64_t x638 = INT64_MAX;
	int32_t x640 = -530438383;
	int32_t t152 = -317176;

    t152 = ((x637-(x638<=x639))|x640);

    if (t152 != -529547337) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x641 = -1LL;
	static volatile int32_t x642 = INT32_MIN;
	static uint16_t x643 = 4620U;
	uint8_t x644 = UINT8_MAX;
	volatile int64_t t153 = 1LL;

    t153 = ((x641-(x642<=x643))|x644);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x645 = UINT32_MAX;
	static volatile int16_t x646 = INT16_MIN;
	int32_t x648 = 20860799;

    t154 = ((x645-(x646<=x647))|x648);

    if (t154 != UINT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x649 = 3790U;
	uint32_t x650 = 113U;
	volatile int64_t x651 = 1160680LL;
	uint32_t x652 = 1859907897U;
	volatile uint32_t t155 = 8019U;

    t155 = ((x649-(x650<=x651))|x652);

    if (t155 != 1859911677U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = -1;
	uint8_t x654 = UINT8_MAX;
	static uint8_t x655 = 9U;
	static int32_t x656 = INT32_MIN;

    t156 = ((x653-(x654<=x655))|x656);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x657 = UINT32_MAX;
	int8_t x658 = -1;
	int32_t x659 = -1;
	static uint32_t t157 = UINT32_MAX;

    t157 = ((x657-(x658<=x659))|x660);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x661 = 80244LL;
	int8_t x662 = -1;
	uint64_t x663 = UINT64_MAX;
	int32_t x664 = -233;

    t158 = ((x661-(x662<=x663))|x664);

    if (t158 != -137LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x666 = 1U;
	static uint32_t x667 = 3U;
	static volatile int64_t x668 = INT64_MIN;
	volatile int64_t t159 = 4036202206212LL;

    t159 = ((x665-(x666<=x667))|x668);

    if (t159 != -2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x669 = 1483;
	static uint32_t x670 = UINT32_MAX;
	volatile uint8_t x672 = 6U;
	int32_t t160 = -252112;

    t160 = ((x669-(x670<=x671))|x672);

    if (t160 != 1487) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = -1;
	int8_t x675 = INT8_MAX;
	int32_t x676 = INT32_MAX;
	int32_t t161 = -1;

    t161 = ((x673-(x674<=x675))|x676);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x677 = INT64_MAX;
	int16_t x678 = -1;
	int8_t x679 = INT8_MAX;
	int16_t x680 = INT16_MIN;
	int64_t t162 = 10742872384765412LL;

    t162 = ((x677-(x678<=x679))|x680);

    if (t162 != -2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x682 = 7U;
	int32_t x684 = -326322;
	int32_t t163 = 7516702;

    t163 = ((x681-(x682<=x683))|x684);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x687 = INT8_MAX;
	volatile uint64_t x688 = 139109583929137LLU;
	static uint64_t t164 = 7901441616049420LLU;

    t164 = ((x685-(x686<=x687))|x688);

    if (t164 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x689 = INT64_MIN;
	static uint16_t x690 = 1999U;
	int64_t t165 = -305871993573LL;

    t165 = ((x689-(x690<=x691))|x692);

    if (t165 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x694 = 20;
	uint8_t x695 = UINT8_MAX;
	uint64_t x696 = 9LLU;

    t166 = ((x693-(x694<=x695))|x696);

    if (t166 != 27LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x697 = -3193175352LL;
	int8_t x698 = INT8_MIN;
	volatile int64_t x699 = -1LL;
	int16_t x700 = INT16_MIN;
	int64_t t167 = -482830807497198151LL;

    t167 = ((x697-(x698<=x699))|x700);

    if (t167 != -32057LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x702 = INT8_MAX;
	uint64_t x703 = 63031LLU;
	int16_t x704 = -6;
	volatile uint32_t t168 = 48U;

    t168 = ((x701-(x702<=x703))|x704);

    if (t168 != 4294967294U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x705 = -5;
	volatile int32_t x706 = -1;
	uint16_t x707 = 79U;
	int64_t t169 = -5532LL;

    t169 = ((x705-(x706<=x707))|x708);

    if (t169 != -6LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x713 = INT16_MIN;
	uint64_t x714 = 4LLU;
	static int64_t x715 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	volatile int32_t t170 = 1;

    t170 = ((x713-(x714<=x715))|x716);

    if (t170 != -32769) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x717 = INT64_MIN;
	int8_t x718 = -1;
	int64_t t171 = -2735975772408347621LL;

    t171 = ((x717-(x718<=x719))|x720);

    if (t171 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x722 = 10;
	int8_t x723 = -31;
	volatile uint8_t x724 = 1U;
	int64_t t172 = 530793792LL;

    t172 = ((x721-(x722<=x723))|x724);

    if (t172 != 6519LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x729 = -1;
	static uint32_t x730 = UINT32_MAX;
	volatile int16_t x732 = -30;
	volatile int32_t t173 = -98508728;

    t173 = ((x729-(x730<=x731))|x732);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x733 = -31;
	static uint32_t x734 = 63547U;
	int16_t x735 = -926;
	volatile int32_t t174 = -1038460;

    t174 = ((x733-(x734<=x735))|x736);

    if (t174 != -27) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x737 = UINT16_MAX;
	uint64_t x738 = 3106904543LLU;
	int8_t x739 = INT8_MIN;
	uint64_t t175 = 487473LLU;

    t175 = ((x737-(x738<=x739))|x740);

    if (t175 != 172496871686143LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	static uint8_t x743 = 61U;
	int16_t x744 = -10;
	volatile int32_t t176 = 465718;

    t176 = ((x741-(x742<=x743))|x744);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x745 = INT32_MAX;
	static int16_t x747 = 6;
	int64_t x748 = INT64_MAX;
	int64_t t177 = INT64_MAX;

    t177 = ((x745-(x746<=x747))|x748);

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x749 = UINT32_MAX;
	int32_t x752 = INT32_MIN;
	uint32_t t178 = UINT32_MAX;

    t178 = ((x749-(x750<=x751))|x752);

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x753 = 19U;
	uint16_t x754 = 735U;
	int16_t x755 = -533;
	volatile uint8_t x756 = UINT8_MAX;
	static volatile int32_t t179 = 513301965;

    t179 = ((x753-(x754<=x755))|x756);

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x758 = INT64_MAX;
	int32_t x759 = INT32_MAX;
	int64_t t180 = -29949778LL;

    t180 = ((x757-(x758<=x759))|x760);

    if (t180 != -32768LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x765 = 1U;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MAX;
	int64_t x768 = -1LL;
	int64_t t181 = 17376151115799777LL;

    t181 = ((x765-(x766<=x767))|x768);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	int16_t x770 = INT16_MAX;
	int64_t x772 = -1LL;
	volatile int64_t t182 = 1652009800043375LL;

    t182 = ((x769-(x770<=x771))|x772);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x773 = 1U;
	volatile int8_t x774 = 7;
	int64_t x775 = -1LL;
	int32_t t183 = -248;

    t183 = ((x773-(x774<=x775))|x776);

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x777 = INT64_MIN;
	volatile uint8_t x778 = 52U;
	int16_t x779 = INT16_MIN;
	volatile int16_t x780 = -1;
	volatile int64_t t184 = 149632543806328LL;

    t184 = ((x777-(x778<=x779))|x780);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x781 = UINT16_MAX;
	static volatile int64_t x782 = INT64_MAX;
	int8_t x783 = -21;
	int64_t x784 = 10642686678LL;
	volatile int64_t t185 = -3381142LL;

    t185 = ((x781-(x782<=x783))|x784);

    if (t185 != 10642718719LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x785 = INT64_MIN;
	int16_t x788 = INT16_MAX;
	volatile int64_t t186 = 5490024LL;

    t186 = ((x785-(x786<=x787))|x788);

    if (t186 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x789 = 183;
	volatile uint32_t x790 = UINT32_MAX;
	int8_t x791 = -1;
	int32_t t187 = -790100;

    t187 = ((x789-(x790<=x791))|x792);

    if (t187 != 9910) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x793 = 0LLU;
	static uint32_t x794 = UINT32_MAX;
	int16_t x795 = INT16_MIN;
	int64_t x796 = INT64_MIN;
	uint64_t t188 = 4948036237LLU;

    t188 = ((x793-(x794<=x795))|x796);

    if (t188 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x797 = -1;
	uint8_t x798 = 12U;
	static int32_t x800 = INT32_MIN;
	volatile int32_t t189 = 13069940;

    t189 = ((x797-(x798<=x799))|x800);

    if (t189 != -2) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x801 = 43;
	int32_t x802 = INT32_MIN;
	int32_t x804 = INT32_MIN;
	int32_t t190 = -6552677;

    t190 = ((x801-(x802<=x803))|x804);

    if (t190 != -2147483606) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x805 = 312079LL;
	static volatile uint32_t x806 = UINT32_MAX;
	uint32_t x807 = 127U;
	uint16_t x808 = 25120U;
	volatile int64_t t191 = 35797650649148LL;

    t191 = ((x805-(x806<=x807))|x808);

    if (t191 != 320303LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x809 = -1;
	int32_t x811 = INT32_MAX;
	int32_t t192 = -215512458;

    t192 = ((x809-(x810<=x811))|x812);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x813 = INT8_MIN;
	volatile int32_t x815 = -2;
	static volatile int64_t x816 = INT64_MIN;
	volatile int64_t t193 = -1LL;

    t193 = ((x813-(x814<=x815))|x816);

    if (t193 != -129LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x817 = INT8_MIN;
	volatile uint16_t x818 = 1682U;
	uint8_t x819 = UINT8_MAX;
	int8_t x820 = INT8_MIN;
	volatile int32_t t194 = 427158;

    t194 = ((x817-(x818<=x819))|x820);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x821 = INT16_MIN;
	volatile int64_t x822 = INT64_MIN;
	uint64_t x823 = UINT64_MAX;
	int32_t x824 = INT32_MAX;
	volatile int32_t t195 = 7245;

    t195 = ((x821-(x822<=x823))|x824);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x825 = -1;
	static uint64_t x826 = 3187351278659713LLU;
	int16_t x828 = INT16_MIN;
	static volatile int32_t t196 = 37015;

    t196 = ((x825-(x826<=x827))|x828);

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x829 = 1U;
	uint8_t x830 = 5U;
	uint64_t x832 = 2726706875007661613LLU;
	volatile uint64_t t197 = 11437446523187LLU;

    t197 = ((x829-(x830<=x831))|x832);

    if (t197 != 2726706875007661613LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x834 = INT16_MIN;
	int16_t x835 = INT16_MAX;
	int16_t x836 = 0;

    t198 = ((x833-(x834<=x835))|x836);

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x837 = INT16_MIN;
	int8_t x838 = 2;
	static int32_t x839 = -35684;
	int64_t x840 = INT64_MAX;
	volatile int64_t t199 = -96775247707LL;

    t199 = ((x837-(x838<=x839))|x840);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

