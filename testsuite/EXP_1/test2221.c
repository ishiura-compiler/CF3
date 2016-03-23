
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

static int8_t x1 = -1;
int16_t x16 = -1;
int32_t x23 = 172;
static int8_t x27 = INT8_MIN;
uint32_t x28 = 1477795U;
int16_t x29 = INT16_MIN;
volatile uint8_t x32 = UINT8_MAX;
static int16_t x33 = INT16_MIN;
volatile int32_t t8 = 15483;
static int16_t x40 = -1;
static int32_t t9 = 1983;
int64_t x46 = -1686841LL;
uint8_t x56 = 0U;
int32_t t12 = -2397;
static uint32_t x66 = 150U;
int64_t x70 = -12570LL;
int32_t x74 = INT32_MIN;
int16_t x76 = INT16_MIN;
volatile int32_t t17 = 2;
static uint64_t x78 = UINT64_MAX;
static int64_t x79 = INT64_MAX;
uint32_t x82 = 578358U;
volatile int32_t x92 = INT32_MIN;
uint16_t x97 = 16928U;
uint16_t x106 = 240U;
int64_t x108 = INT64_MIN;
uint16_t x109 = 20500U;
volatile uint8_t x119 = 12U;
static uint32_t x121 = 40977822U;
uint16_t x124 = UINT16_MAX;
static volatile int32_t t29 = 12;
uint32_t x127 = UINT32_MAX;
uint8_t x133 = 43U;
int64_t x140 = -1LL;
int8_t x143 = -1;
volatile uint64_t x145 = UINT64_MAX;
volatile int32_t t36 = 1;
volatile int32_t t37 = 4;
static volatile int32_t t38 = 99526342;
int64_t x169 = -11LL;
uint8_t x171 = UINT8_MAX;
static int32_t t45 = 35357;
static volatile int32_t t46 = -1;
int16_t x193 = INT16_MAX;
static int32_t x196 = -1;
uint32_t x200 = UINT32_MAX;
uint32_t x203 = 7831U;
int8_t x206 = INT8_MIN;
static int64_t x217 = INT64_MAX;
uint8_t x219 = 11U;
volatile int32_t t53 = 189112;
int32_t t54 = 164209698;
static int32_t x227 = INT32_MAX;
int16_t x228 = INT16_MIN;
static uint32_t x234 = 1140834U;
int32_t t56 = 1654967;
volatile int8_t x237 = INT8_MAX;
volatile int32_t t57 = 968;
int8_t x244 = -14;
int64_t x252 = INT64_MIN;
int8_t x253 = INT8_MAX;
int32_t t61 = -3912208;
volatile int32_t t62 = -1732705;
int16_t x269 = 3;
static int32_t x270 = -1;
int8_t x275 = 1;
int32_t x281 = INT32_MIN;
uint32_t x284 = UINT32_MAX;
volatile int32_t t67 = -12298;
static int8_t x291 = -8;
static uint64_t x296 = UINT64_MAX;
volatile int32_t t70 = -446056746;
int16_t x302 = INT16_MAX;
volatile int32_t t73 = -852545;
int8_t x309 = INT8_MIN;
uint8_t x312 = UINT8_MAX;
uint8_t x328 = UINT8_MAX;
int32_t t79 = 29;
int32_t x333 = -1;
volatile int8_t x339 = 2;
int32_t t81 = -1693;
volatile int32_t x346 = -971760201;
volatile uint64_t x366 = 43205LLU;
int32_t x367 = INT32_MIN;
static int16_t x391 = 24;
volatile int16_t x407 = -1;
int32_t t96 = -747057;
int32_t x409 = INT32_MIN;
static int32_t t97 = 13117517;
volatile int32_t t98 = 28;
uint32_t x423 = UINT32_MAX;
int16_t x429 = INT16_MIN;
int16_t x430 = INT16_MIN;
static int64_t x431 = -1LL;
static uint16_t x442 = UINT16_MAX;
volatile uint16_t x444 = 7412U;
volatile int32_t t104 = 52570;
static volatile int32_t x448 = 76;
uint64_t x451 = 25263303706198LLU;
int16_t x454 = INT16_MIN;
volatile int64_t x456 = INT64_MIN;
int64_t x458 = INT64_MAX;
volatile int32_t x469 = INT32_MIN;
volatile uint32_t x471 = 3588776U;
int8_t x476 = 9;
int16_t x480 = -1;
int16_t x486 = INT16_MAX;
int16_t x487 = -142;
volatile int32_t t114 = 251;
uint64_t x490 = UINT64_MAX;
int64_t x494 = 14868LL;
int64_t x496 = -31820473034LL;
int32_t t116 = -41;
volatile int32_t t118 = 188;
int8_t x507 = INT8_MAX;
uint32_t x510 = UINT32_MAX;
static int32_t x511 = 8631051;
uint64_t x516 = UINT64_MAX;
int8_t x517 = INT8_MIN;
volatile int64_t x519 = 26752066835LL;
uint32_t x520 = UINT32_MAX;
volatile int32_t t123 = -1493824;
volatile int32_t x525 = INT32_MIN;
static uint8_t x528 = UINT8_MAX;
uint64_t x529 = UINT64_MAX;
int8_t x541 = -1;
static int32_t t127 = -2;
int32_t t129 = 13;
static int16_t x555 = -1596;
int8_t x564 = -1;
uint32_t x572 = 80U;
static uint16_t x573 = UINT16_MAX;
int64_t x574 = INT64_MAX;
int8_t x575 = INT8_MIN;
volatile uint16_t x587 = UINT16_MAX;
static volatile uint32_t x592 = 1383U;
int8_t x594 = INT8_MIN;
static volatile int64_t x601 = INT64_MIN;
static volatile int32_t t142 = 22;
uint64_t x608 = UINT64_MAX;
static int64_t x611 = INT64_MAX;
uint32_t x615 = 365930U;
static uint16_t x619 = 4405U;
int64_t x622 = INT64_MIN;
static int16_t x627 = INT16_MIN;
int32_t t149 = 388866;
int16_t x658 = -1;
static int16_t x659 = INT16_MAX;
int64_t x661 = -2410724213LL;
uint16_t x662 = UINT16_MAX;
int32_t t157 = 7189;
int32_t x668 = -15145590;
volatile int32_t t159 = 528291497;
volatile int32_t t160 = 155600059;
uint64_t x678 = UINT64_MAX;
int16_t x682 = 95;
volatile int32_t x683 = INT32_MAX;
uint8_t x685 = 18U;
uint64_t x690 = 72956LLU;
int16_t x691 = INT16_MAX;
int64_t x696 = -3324811128461441092LL;
volatile int8_t x698 = INT8_MIN;
uint8_t x702 = UINT8_MAX;
int32_t x704 = INT32_MIN;
static int16_t x710 = INT16_MIN;
int16_t x712 = INT16_MAX;
static int32_t t169 = 126395510;
int64_t x715 = INT64_MIN;
volatile int16_t x720 = INT16_MIN;
int32_t t171 = -15540446;
int8_t x724 = 52;
static uint64_t x730 = UINT64_MAX;
int32_t t174 = 1223;
volatile int16_t x733 = -131;
int16_t x740 = -4033;
uint8_t x745 = 1U;
int8_t x756 = INT8_MIN;
int32_t x759 = INT32_MIN;
int16_t x762 = -1;
volatile int16_t x763 = INT16_MIN;
uint32_t x770 = UINT32_MAX;
uint16_t x774 = 3032U;
int64_t x777 = -1LL;
int8_t x781 = -1;
volatile int32_t x788 = -107057;
volatile uint16_t x797 = 109U;
volatile uint32_t x798 = 152528U;
int32_t x800 = -52127;
int32_t x803 = INT32_MAX;
int8_t x809 = -1;
uint8_t x813 = UINT8_MAX;
static uint32_t x817 = 16155479U;


void f0(void) {
    	volatile uint32_t x2 = 771108U;
	static uint16_t x3 = UINT16_MAX;
	static volatile int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 177305988;

    t0 = (((x1&x2)%x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint64_t x6 = 153008272LLU;
	static int8_t x7 = -1;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 688806574;

    t1 = (((x5&x6)%x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int32_t x10 = 1;
	uint64_t x11 = 7LLU;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -307;

    t2 = (((x9&x10)%x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	int16_t x14 = -207;
	int32_t x15 = INT32_MIN;
	static volatile int32_t t3 = -96109276;

    t3 = (((x13&x14)%x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MAX;
	uint32_t x18 = 893U;
	int32_t x19 = -1;
	int32_t x20 = -1;
	volatile int32_t t4 = 3;

    t4 = (((x17&x18)%x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MAX;
	volatile int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 543985;

    t5 = (((x21&x22)%x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1610;
	uint32_t x26 = 50649315U;
	volatile int32_t t6 = 61603730;

    t6 = (((x25&x26)%x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	int64_t x31 = INT64_MIN;
	static int32_t t7 = 237536648;

    t7 = (((x29&x30)%x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x34 = 901U;
	int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MAX;

    t8 = (((x33&x34)%x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 2U;
	int32_t x38 = 974430252;
	volatile int64_t x39 = 31100510548LL;

    t9 = (((x37&x38)%x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	static int8_t x47 = -1;
	uint8_t x48 = 76U;
	static volatile int32_t t10 = -1694;

    t10 = (((x45&x46)%x47)>x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	static int32_t t11 = 43344421;

    t11 = (((x49&x50)%x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = UINT8_MAX;
	int8_t x54 = 1;
	int8_t x55 = -56;

    t12 = (((x53&x54)%x55)>x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = INT64_MIN;
	uint8_t x58 = 4U;
	uint8_t x59 = 22U;
	static uint8_t x60 = 19U;
	static int32_t t13 = 47272;

    t13 = (((x57&x58)%x59)>x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = -1LL;
	int32_t t14 = -1;

    t14 = (((x61&x62)%x63)>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	static volatile int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	static int32_t t15 = -31662653;

    t15 = (((x65&x66)%x67)>x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 0U;
	static int32_t x71 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -1067161426;

    t16 = (((x69&x70)%x71)>x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -1;
	int64_t x75 = INT64_MIN;

    t17 = (((x73&x74)%x75)>x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = UINT32_MAX;
	uint16_t x80 = UINT16_MAX;
	static int32_t t18 = 0;

    t18 = (((x77&x78)%x79)>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = UINT8_MAX;
	int32_t x83 = INT32_MIN;
	static uint64_t x84 = UINT64_MAX;
	volatile int32_t t19 = -372;

    t19 = (((x81&x82)%x83)>x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = -1LL;
	static int32_t x86 = -1;
	uint32_t x87 = UINT32_MAX;
	uint64_t x88 = 38076727572586LLU;
	int32_t t20 = -206560208;

    t20 = (((x85&x86)%x87)>x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1;
	static uint32_t x90 = UINT32_MAX;
	int16_t x91 = -1;
	int32_t t21 = -864569;

    t21 = (((x89&x90)%x91)>x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 394174LLU;
	int8_t x94 = 42;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 2U;
	volatile int32_t t22 = 725740857;

    t22 = (((x93&x94)%x95)>x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x98 = -1178529;
	uint8_t x99 = 32U;
	volatile int32_t x100 = 5;
	volatile int32_t t23 = -34662;

    t23 = (((x97&x98)%x99)>x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x101 = -8460938;
	int16_t x102 = 4;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	static int32_t t24 = 141;

    t24 = (((x101&x102)%x103)>x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	uint32_t x107 = 1973501205U;
	int32_t t25 = 125806907;

    t25 = (((x105&x106)%x107)>x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x110 = -1LL;
	int64_t x111 = INT64_MAX;
	int16_t x112 = -1;
	int32_t t26 = -3404;

    t26 = (((x109&x110)%x111)>x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = 0U;
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = 3024;
	int32_t t27 = 280314;

    t27 = (((x113&x114)%x115)>x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -1020467289907517LL;
	int8_t x118 = 0;
	volatile int32_t x120 = -1;
	volatile int32_t t28 = -1;

    t28 = (((x117&x118)%x119)>x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x122 = -1;
	int64_t x123 = 536809527086LL;

    t29 = (((x121&x122)%x123)>x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = -1;
	static uint32_t x126 = UINT32_MAX;
	int32_t x128 = -1;
	static volatile int32_t t30 = -15;

    t30 = (((x125&x126)%x127)>x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 9836139LLU;
	uint16_t x130 = UINT16_MAX;
	static int8_t x131 = -3;
	uint64_t x132 = 461810200LLU;
	volatile int32_t t31 = 4751;

    t31 = (((x129&x130)%x131)>x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x134 = 2U;
	uint64_t x135 = 1327307555LLU;
	int32_t x136 = -1;
	int32_t t32 = -203199912;

    t32 = (((x133&x134)%x135)>x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 20494U;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = INT32_MIN;
	volatile int32_t t33 = 19695;

    t33 = (((x137&x138)%x139)>x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	volatile uint64_t x142 = 3412051462678199243LLU;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t34 = -20385;

    t34 = (((x141&x142)%x143)>x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x146 = -1;
	volatile uint16_t x147 = 75U;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t35 = -1;

    t35 = (((x145&x146)%x147)>x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x149 = 624LLU;
	int16_t x150 = -1;
	uint64_t x151 = 3LLU;
	volatile int16_t x152 = 14618;

    t36 = (((x149&x150)%x151)>x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x153 = 79U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = -1;
	static int32_t x156 = INT32_MIN;

    t37 = (((x153&x154)%x155)>x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x157 = INT8_MAX;
	int16_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int16_t x160 = -1;

    t38 = (((x157&x158)%x159)>x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MIN;
	volatile int8_t x162 = INT8_MIN;
	volatile int16_t x163 = INT16_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t39 = 688240130;

    t39 = (((x161&x162)%x163)>x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = 1;
	uint64_t x166 = 3390680LLU;
	int16_t x167 = -3;
	static uint16_t x168 = 272U;
	int32_t t40 = 1491;

    t40 = (((x165&x166)%x167)>x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x170 = 3;
	uint16_t x172 = UINT16_MAX;
	int32_t t41 = 65221121;

    t41 = (((x169&x170)%x171)>x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = 432;
	volatile uint64_t x175 = UINT64_MAX;
	static int64_t x176 = INT64_MIN;
	int32_t t42 = -497785;

    t42 = (((x173&x174)%x175)>x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = 322LL;
	int16_t x178 = 6274;
	static int8_t x179 = -1;
	int32_t x180 = -1;
	volatile int32_t t43 = 0;

    t43 = (((x177&x178)%x179)>x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MAX;
	static volatile int16_t x182 = INT16_MAX;
	static uint64_t x183 = 804LLU;
	int16_t x184 = -12270;
	int32_t t44 = 57371;

    t44 = (((x181&x182)%x183)>x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -1;
	uint64_t x186 = 1948657975256072711LLU;
	int64_t x187 = -2642099LL;
	uint16_t x188 = 635U;

    t45 = (((x185&x186)%x187)>x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	volatile int64_t x190 = INT64_MAX;
	volatile uint16_t x191 = 78U;
	int8_t x192 = INT8_MAX;

    t46 = (((x189&x190)%x191)>x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	int32_t t47 = 42677;

    t47 = (((x193&x194)%x195)>x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	int16_t x198 = -2;
	int16_t x199 = INT16_MAX;
	static int32_t t48 = -761211420;

    t48 = (((x197&x198)%x199)>x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x201 = UINT64_MAX;
	static int8_t x202 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t49 = 1;

    t49 = (((x201&x202)%x203)>x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 2U;
	int8_t x207 = INT8_MAX;
	int16_t x208 = -73;
	volatile int32_t t50 = -2264;

    t50 = (((x205&x206)%x207)>x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = 370;
	volatile int64_t x212 = INT64_MAX;
	int32_t t51 = 759717;

    t51 = (((x209&x210)%x211)>x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x213 = -47;
	int32_t x214 = -1;
	int16_t x215 = -1;
	uint32_t x216 = 1U;
	int32_t t52 = 59;

    t52 = (((x213&x214)%x215)>x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x218 = -7896;
	int64_t x220 = INT64_MIN;

    t53 = (((x217&x218)%x219)>x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	static int8_t x224 = INT8_MIN;

    t54 = (((x221&x222)%x223)>x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -1LL;
	volatile uint8_t x226 = 0U;
	int32_t t55 = -8092;

    t55 = (((x225&x226)%x227)>x228);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x235 = -384;
	int8_t x236 = 28;

    t56 = (((x233&x234)%x235)>x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x238 = UINT32_MAX;
	static int32_t x239 = INT32_MAX;
	int16_t x240 = INT16_MAX;

    t57 = (((x237&x238)%x239)>x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MIN;
	static uint32_t x243 = 8451U;
	volatile int32_t t58 = -10;

    t58 = (((x241&x242)%x243)>x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x245 = 32054;
	int32_t x246 = 0;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -628;
	volatile int32_t t59 = -541;

    t59 = (((x245&x246)%x247)>x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = 62U;
	int8_t x250 = -1;
	int16_t x251 = 6;
	int32_t t60 = -735486;

    t60 = (((x249&x250)%x251)>x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x254 = INT64_MAX;
	int32_t x255 = 1;
	volatile uint64_t x256 = 380793190177206LLU;

    t61 = (((x253&x254)%x255)>x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = -1;
	uint32_t x258 = UINT32_MAX;
	static int32_t x259 = -1;
	uint64_t x260 = UINT64_MAX;

    t62 = (((x257&x258)%x259)>x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x261 = UINT8_MAX;
	int16_t x262 = INT16_MIN;
	static int64_t x263 = -1LL;
	int8_t x264 = 1;
	int32_t t63 = 25;

    t63 = (((x261&x262)%x263)>x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x265 = -1;
	int8_t x266 = -1;
	volatile int16_t x267 = -1;
	int8_t x268 = INT8_MIN;
	volatile int32_t t64 = -10596071;

    t64 = (((x265&x266)%x267)>x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x271 = UINT16_MAX;
	static volatile int16_t x272 = INT16_MIN;
	static volatile int32_t t65 = -263507;

    t65 = (((x269&x270)%x271)>x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x273 = 3U;
	volatile uint16_t x274 = UINT16_MAX;
	static int64_t x276 = -1LL;
	int32_t t66 = -378600;

    t66 = (((x273&x274)%x275)>x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;

    t67 = (((x281&x282)%x283)>x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	static volatile int16_t x287 = INT16_MIN;
	uint32_t x288 = UINT32_MAX;
	int32_t t68 = -2839;

    t68 = (((x285&x286)%x287)>x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x289 = -61;
	int32_t x290 = -29880;
	uint64_t x292 = 371375147091LLU;
	int32_t t69 = -683791792;

    t69 = (((x289&x290)%x291)>x292);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x293 = -1;
	int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;

    t70 = (((x293&x294)%x295)>x296);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	int32_t x298 = 26681874;
	uint32_t x299 = 8784471U;
	int8_t x300 = -1;
	volatile int32_t t71 = 6068;

    t71 = (((x297&x298)%x299)>x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	int64_t x303 = INT64_MIN;
	int16_t x304 = 3068;
	int32_t t72 = 204765;

    t72 = (((x301&x302)%x303)>x304);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x305 = 1LL;
	int8_t x306 = INT8_MAX;
	int32_t x307 = -51263;
	static int32_t x308 = -1;

    t73 = (((x305&x306)%x307)>x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MAX;
	int32_t t74 = -247045;

    t74 = (((x309&x310)%x311)>x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = -127;
	uint8_t x314 = 52U;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MAX;
	int32_t t75 = 26750;

    t75 = (((x313&x314)%x315)>x316);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x317 = 2136908924157024LLU;
	uint32_t x318 = UINT32_MAX;
	static int8_t x319 = INT8_MIN;
	int16_t x320 = INT16_MAX;
	volatile int32_t t76 = 3560139;

    t76 = (((x317&x318)%x319)>x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = INT16_MAX;
	static int8_t x322 = -1;
	int16_t x323 = -13004;
	int8_t x324 = -50;
	int32_t t77 = 5953568;

    t77 = (((x321&x322)%x323)>x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x325 = 114U;
	static uint32_t x326 = UINT32_MAX;
	static uint32_t x327 = 11723403U;
	int32_t t78 = -1231;

    t78 = (((x325&x326)%x327)>x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x329 = INT64_MAX;
	uint16_t x330 = 502U;
	uint16_t x331 = 3U;
	int8_t x332 = INT8_MIN;

    t79 = (((x329&x330)%x331)>x332);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x334 = 0U;
	uint16_t x335 = 26949U;
	int64_t x336 = 0LL;
	volatile int32_t t80 = 31649;

    t80 = (((x333&x334)%x335)>x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x337 = INT16_MAX;
	uint16_t x338 = 19U;
	uint16_t x340 = UINT16_MAX;

    t81 = (((x337&x338)%x339)>x340);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MAX;
	volatile uint32_t x342 = UINT32_MAX;
	int64_t x343 = -32LL;
	volatile uint32_t x344 = 468319488U;
	volatile int32_t t82 = 449;

    t82 = (((x341&x342)%x343)>x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x345 = INT32_MIN;
	volatile int32_t x347 = 33720;
	static volatile uint64_t x348 = 33410384LLU;
	int32_t t83 = 112;

    t83 = (((x345&x346)%x347)>x348);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = -4657;
	static uint32_t x350 = 38433U;
	uint8_t x351 = UINT8_MAX;
	volatile int32_t x352 = 303;
	volatile int32_t t84 = 3467;

    t84 = (((x349&x350)%x351)>x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	int16_t x355 = 234;
	static int64_t x356 = 306629182097390LL;
	int32_t t85 = 127729265;

    t85 = (((x353&x354)%x355)>x356);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = INT32_MIN;
	static int16_t x358 = 9;
	static uint32_t x359 = 95303U;
	int64_t x360 = -1LL;
	int32_t t86 = 588566416;

    t86 = (((x357&x358)%x359)>x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x365 = INT8_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = -10294253;

    t87 = (((x365&x366)%x367)>x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = INT32_MAX;
	uint32_t x370 = 4106955U;
	int64_t x371 = 28568LL;
	int32_t x372 = -1;
	volatile int32_t t88 = 1053;

    t88 = (((x369&x370)%x371)>x372);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x373 = -75322173;
	static volatile uint8_t x374 = 17U;
	volatile int64_t x375 = -1LL;
	int32_t x376 = INT32_MAX;
	volatile int32_t t89 = -417968;

    t89 = (((x373&x374)%x375)>x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x377 = -1LL;
	volatile int16_t x378 = -1;
	uint32_t x379 = 107980U;
	volatile uint64_t x380 = 50087936405828LLU;
	volatile int32_t t90 = 10;

    t90 = (((x377&x378)%x379)>x380);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x385 = UINT16_MAX;
	int32_t x386 = -1;
	uint8_t x387 = 42U;
	static int8_t x388 = 29;
	static volatile int32_t t91 = -140;

    t91 = (((x385&x386)%x387)>x388);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = INT64_MAX;
	static uint8_t x390 = 81U;
	volatile int64_t x392 = 980899539LL;
	int32_t t92 = 4;

    t92 = (((x389&x390)%x391)>x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = UINT64_MAX;
	static int64_t x394 = INT64_MAX;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = 0U;
	volatile int32_t t93 = 37391335;

    t93 = (((x393&x394)%x395)>x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = -14;
	static int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	int64_t x400 = INT64_MIN;
	static int32_t t94 = -5485;

    t94 = (((x397&x398)%x399)>x400);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = 3;
	static volatile int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = -1;
	volatile int32_t t95 = -32060;

    t95 = (((x401&x402)%x403)>x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x405 = 706086652391189040LLU;
	uint16_t x406 = 7940U;
	int64_t x408 = 134874507360610LL;

    t96 = (((x405&x406)%x407)>x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x410 = UINT16_MAX;
	volatile int32_t x411 = INT32_MIN;
	volatile int32_t x412 = -26;

    t97 = (((x409&x410)%x411)>x412);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x413 = INT32_MIN;
	volatile int32_t x414 = -1;
	uint8_t x415 = 6U;
	static int64_t x416 = INT64_MIN;

    t98 = (((x413&x414)%x415)>x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x417 = 137LLU;
	uint64_t x418 = 417815115LLU;
	uint64_t x419 = 58260358LLU;
	int32_t x420 = -1;
	volatile int32_t t99 = -433870846;

    t99 = (((x417&x418)%x419)>x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x421 = INT64_MAX;
	volatile int16_t x422 = INT16_MAX;
	volatile int8_t x424 = INT8_MIN;
	int32_t t100 = -847169589;

    t100 = (((x421&x422)%x423)>x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x432 = -17;
	int32_t t101 = 5;

    t101 = (((x429&x430)%x431)>x432);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	int64_t x435 = INT64_MIN;
	int64_t x436 = -1408785182LL;
	int32_t t102 = -2022632;

    t102 = (((x433&x434)%x435)>x436);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = -1LL;
	volatile int16_t x438 = INT16_MIN;
	int32_t x439 = -674286059;
	int32_t x440 = INT32_MIN;
	int32_t t103 = 15;

    t103 = (((x437&x438)%x439)>x440);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x441 = 2LL;
	int8_t x443 = INT8_MIN;

    t104 = (((x441&x442)%x443)>x444);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = UINT32_MAX;
	static volatile int32_t t105 = -58;

    t105 = (((x445&x446)%x447)>x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x449 = 8014631U;
	static int32_t x450 = -73;
	volatile uint64_t x452 = 307626460LLU;
	volatile int32_t t106 = -11;

    t106 = (((x449&x450)%x451)>x452);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x453 = -1;
	volatile uint32_t x455 = 59U;
	int32_t t107 = 105609650;

    t107 = (((x453&x454)%x455)>x456);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x457 = UINT8_MAX;
	volatile int16_t x459 = 1;
	int16_t x460 = 2380;
	volatile int32_t t108 = -26896;

    t108 = (((x457&x458)%x459)>x460);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x461 = 3882LLU;
	static int32_t x462 = INT32_MAX;
	static int32_t x463 = INT32_MIN;
	volatile uint8_t x464 = 18U;
	int32_t t109 = 315340;

    t109 = (((x461&x462)%x463)>x464);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x470 = -1;
	int64_t x472 = INT64_MAX;
	volatile int32_t t110 = 494;

    t110 = (((x469&x470)%x471)>x472);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	static int32_t x475 = -87049271;
	static volatile int32_t t111 = 0;

    t111 = (((x473&x474)%x475)>x476);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x477 = INT8_MAX;
	static uint8_t x478 = 21U;
	int8_t x479 = INT8_MIN;
	volatile int32_t t112 = -32;

    t112 = (((x477&x478)%x479)>x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x481 = INT64_MIN;
	int16_t x482 = INT16_MIN;
	uint32_t x483 = 609370U;
	int32_t x484 = INT32_MIN;
	static int32_t t113 = 507229;

    t113 = (((x481&x482)%x483)>x484);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x485 = 19248LLU;
	uint8_t x488 = UINT8_MAX;

    t114 = (((x485&x486)%x487)>x488);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x489 = INT64_MIN;
	volatile uint32_t x491 = 10912699U;
	static int32_t x492 = -621;
	static volatile int32_t t115 = -442326;

    t115 = (((x489&x490)%x491)>x492);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x493 = 11U;
	volatile int64_t x495 = -1LL;

    t116 = (((x493&x494)%x495)>x496);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x497 = -1LL;
	static int64_t x498 = -1LL;
	int8_t x499 = -1;
	uint64_t x500 = 185706154LLU;
	volatile int32_t t117 = 82900366;

    t117 = (((x497&x498)%x499)>x500);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x501 = 101755257808953048LLU;
	uint32_t x502 = 11377422U;
	uint16_t x503 = 87U;
	static volatile int32_t x504 = -1;

    t118 = (((x501&x502)%x503)>x504);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x505 = 1U;
	int32_t x506 = INT32_MIN;
	static volatile int64_t x508 = INT64_MIN;
	static int32_t t119 = -13076383;

    t119 = (((x505&x506)%x507)>x508);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x509 = INT8_MAX;
	int8_t x512 = INT8_MIN;
	static volatile int32_t t120 = 666663284;

    t120 = (((x509&x510)%x511)>x512);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x513 = INT8_MIN;
	static uint32_t x514 = UINT32_MAX;
	int64_t x515 = -1LL;
	volatile int32_t t121 = -7;

    t121 = (((x513&x514)%x515)>x516);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x518 = 597U;
	volatile int32_t t122 = -477844;

    t122 = (((x517&x518)%x519)>x520);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x521 = -55995095575915LL;
	int16_t x522 = 4;
	int16_t x523 = -286;
	int64_t x524 = 62630166720372076LL;

    t123 = (((x521&x522)%x523)>x524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x526 = -1LL;
	int64_t x527 = INT64_MIN;
	int32_t t124 = -3;

    t124 = (((x525&x526)%x527)>x528);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x530 = 3U;
	volatile int64_t x531 = INT64_MAX;
	uint8_t x532 = UINT8_MAX;
	int32_t t125 = 15093;

    t125 = (((x529&x530)%x531)>x532);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x533 = INT64_MIN;
	int16_t x534 = INT16_MIN;
	volatile int64_t x535 = INT64_MIN;
	static int32_t x536 = INT32_MIN;
	volatile int32_t t126 = -24122;

    t126 = (((x533&x534)%x535)>x536);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x542 = 0LL;
	int8_t x543 = INT8_MAX;
	static volatile int64_t x544 = 2505690403079423LL;

    t127 = (((x541&x542)%x543)>x544);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x545 = 1382577646LLU;
	static int8_t x546 = INT8_MAX;
	static int32_t x547 = -1;
	static int32_t x548 = -6040642;
	volatile int32_t t128 = -255480;

    t128 = (((x545&x546)%x547)>x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x549 = UINT64_MAX;
	int64_t x550 = INT64_MAX;
	static uint32_t x551 = 11304924U;
	uint32_t x552 = 130654306U;

    t129 = (((x549&x550)%x551)>x552);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x553 = 21218U;
	volatile int32_t x554 = -7134573;
	int8_t x556 = INT8_MIN;
	int32_t t130 = -472;

    t130 = (((x553&x554)%x555)>x556);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x557 = INT16_MAX;
	static int32_t x558 = INT32_MAX;
	int32_t x559 = -29;
	int32_t x560 = -160918570;
	int32_t t131 = -5955888;

    t131 = (((x557&x558)%x559)>x560);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x562 = -1;
	volatile int32_t x563 = INT32_MAX;
	static volatile int32_t t132 = -194270050;

    t132 = (((x561&x562)%x563)>x564);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x566 = -1;
	int64_t x567 = INT64_MIN;
	int16_t x568 = 247;
	volatile int32_t t133 = 5;

    t133 = (((x565&x566)%x567)>x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x569 = -7;
	volatile int16_t x570 = INT16_MIN;
	uint16_t x571 = UINT16_MAX;
	volatile int32_t t134 = 75317797;

    t134 = (((x569&x570)%x571)>x572);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x576 = -1;
	int32_t t135 = 1732315;

    t135 = (((x573&x574)%x575)>x576);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x577 = INT64_MAX;
	uint16_t x578 = UINT16_MAX;
	int64_t x579 = -1LL;
	int32_t x580 = -1;
	int32_t t136 = -51;

    t136 = (((x577&x578)%x579)>x580);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x581 = 6346LLU;
	int32_t x582 = -1242;
	int32_t x583 = -10770171;
	int64_t x584 = INT64_MAX;
	static volatile int32_t t137 = -3;

    t137 = (((x581&x582)%x583)>x584);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x586 = 19549100U;
	int32_t x588 = -1;
	int32_t t138 = -43033389;

    t138 = (((x585&x586)%x587)>x588);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x589 = 907;
	static int8_t x590 = INT8_MIN;
	volatile int64_t x591 = -5043507973184LL;
	volatile int32_t t139 = 114;

    t139 = (((x589&x590)%x591)>x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x593 = 34;
	int64_t x595 = INT64_MIN;
	int16_t x596 = 2;
	int32_t t140 = -6;

    t140 = (((x593&x594)%x595)>x596);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x597 = 1216727U;
	static volatile uint32_t x598 = 11254191U;
	int16_t x599 = -1;
	static int64_t x600 = -3853LL;
	static volatile int32_t t141 = -3099220;

    t141 = (((x597&x598)%x599)>x600);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x602 = INT16_MIN;
	uint16_t x603 = UINT16_MAX;
	static int32_t x604 = INT32_MIN;

    t142 = (((x601&x602)%x603)>x604);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x605 = 26U;
	static uint64_t x606 = 3845705517697487LLU;
	volatile int64_t x607 = -4892134651772385LL;
	volatile int32_t t143 = -218800;

    t143 = (((x605&x606)%x607)>x608);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x609 = -1LL;
	uint8_t x610 = 3U;
	static int8_t x612 = 7;
	volatile int32_t t144 = -213;

    t144 = (((x609&x610)%x611)>x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x613 = UINT32_MAX;
	int16_t x614 = INT16_MAX;
	int32_t x616 = -1;
	static volatile int32_t t145 = 190238;

    t145 = (((x613&x614)%x615)>x616);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x617 = 31876286U;
	volatile uint8_t x618 = UINT8_MAX;
	int64_t x620 = INT64_MIN;
	volatile int32_t t146 = 58;

    t146 = (((x617&x618)%x619)>x620);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x621 = 5U;
	int16_t x623 = INT16_MIN;
	uint64_t x624 = 275506839963LLU;
	volatile int32_t t147 = 16765300;

    t147 = (((x621&x622)%x623)>x624);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x625 = UINT32_MAX;
	int64_t x626 = INT64_MAX;
	int32_t x628 = -1;
	int32_t t148 = -11497;

    t148 = (((x625&x626)%x627)>x628);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x629 = 82789670126LLU;
	int16_t x630 = -1;
	int16_t x631 = -11;
	static int64_t x632 = -1702344934571588135LL;

    t149 = (((x629&x630)%x631)>x632);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = -1;
	int8_t x634 = INT8_MIN;
	uint8_t x635 = 41U;
	int8_t x636 = INT8_MAX;
	int32_t t150 = -807116;

    t150 = (((x633&x634)%x635)>x636);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x637 = -1LL;
	uint8_t x638 = 1U;
	int16_t x639 = -1;
	volatile int16_t x640 = 5062;
	volatile int32_t t151 = 412653295;

    t151 = (((x637&x638)%x639)>x640);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x641 = 83U;
	int16_t x642 = -3763;
	static int64_t x643 = -1LL;
	int8_t x644 = INT8_MAX;
	int32_t t152 = 150148;

    t152 = (((x641&x642)%x643)>x644);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x645 = INT32_MAX;
	uint16_t x646 = 6U;
	int16_t x647 = 377;
	int8_t x648 = INT8_MIN;
	volatile int32_t t153 = -139053146;

    t153 = (((x645&x646)%x647)>x648);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x649 = 58;
	static int16_t x650 = -1;
	int64_t x651 = INT64_MIN;
	int32_t x652 = -1;
	volatile int32_t t154 = 7606706;

    t154 = (((x649&x650)%x651)>x652);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x653 = INT8_MAX;
	volatile uint64_t x654 = 23132LLU;
	volatile int8_t x655 = INT8_MIN;
	int64_t x656 = INT64_MIN;
	volatile int32_t t155 = 15;

    t155 = (((x653&x654)%x655)>x656);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x657 = -63;
	volatile int64_t x660 = INT64_MAX;
	volatile int32_t t156 = -3;

    t156 = (((x657&x658)%x659)>x660);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x663 = -1;
	uint64_t x664 = 182849048820972127LLU;

    t157 = (((x661&x662)%x663)>x664);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = INT32_MIN;
	uint16_t x666 = 412U;
	volatile int32_t x667 = INT32_MIN;
	volatile int32_t t158 = 135002905;

    t158 = (((x665&x666)%x667)>x668);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile int64_t x670 = INT64_MAX;
	int16_t x671 = -6520;
	uint16_t x672 = 49U;

    t159 = (((x669&x670)%x671)>x672);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x673 = 241065U;
	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MIN;

    t160 = (((x673&x674)%x675)>x676);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x677 = -1;
	int32_t x679 = INT32_MIN;
	static volatile uint64_t x680 = 6488099055592LLU;
	volatile int32_t t161 = -503324456;

    t161 = (((x677&x678)%x679)>x680);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = -2081LL;
	int8_t x684 = INT8_MIN;
	volatile int32_t t162 = 154667;

    t162 = (((x681&x682)%x683)>x684);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x686 = -3878460LL;
	static uint16_t x687 = 2193U;
	uint16_t x688 = 2340U;
	volatile int32_t t163 = 96032;

    t163 = (((x685&x686)%x687)>x688);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x689 = INT8_MAX;
	volatile int16_t x692 = 112;
	static int32_t t164 = 3420;

    t164 = (((x689&x690)%x691)>x692);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x693 = -1;
	static int8_t x694 = 16;
	uint8_t x695 = 13U;
	static int32_t t165 = -1230523;

    t165 = (((x693&x694)%x695)>x696);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = 3;
	uint64_t x699 = 203562914LLU;
	int64_t x700 = -1LL;
	int32_t t166 = -96585856;

    t166 = (((x697&x698)%x699)>x700);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = -1;
	static uint64_t x703 = 19LLU;
	int32_t t167 = -9360321;

    t167 = (((x701&x702)%x703)>x704);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -51;
	int64_t x706 = INT64_MIN;
	static uint16_t x707 = UINT16_MAX;
	static int16_t x708 = 1085;
	volatile int32_t t168 = 1606;

    t168 = (((x705&x706)%x707)>x708);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x709 = -3;
	int16_t x711 = -3;

    t169 = (((x709&x710)%x711)>x712);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint16_t x713 = 40U;
	uint16_t x714 = 73U;
	int32_t x716 = -1;
	volatile int32_t t170 = 185;

    t170 = (((x713&x714)%x715)>x716);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x717 = -955355946;
	static volatile int16_t x718 = INT16_MIN;
	int8_t x719 = INT8_MIN;

    t171 = (((x717&x718)%x719)>x720);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x721 = -1;
	int32_t x722 = INT32_MIN;
	uint32_t x723 = 200U;
	int32_t t172 = -894;

    t172 = (((x721&x722)%x723)>x724);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = -1;
	uint8_t x726 = UINT8_MAX;
	static int16_t x727 = 22;
	static volatile int64_t x728 = INT64_MIN;
	static volatile int32_t t173 = 382609131;

    t173 = (((x725&x726)%x727)>x728);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = INT64_MIN;
	volatile uint64_t x731 = UINT64_MAX;
	static int16_t x732 = 54;

    t174 = (((x729&x730)%x731)>x732);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x734 = 2U;
	int32_t x735 = INT32_MIN;
	volatile int32_t x736 = INT32_MAX;
	volatile int32_t t175 = 4262;

    t175 = (((x733&x734)%x735)>x736);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x737 = INT32_MAX;
	uint64_t x738 = 99011202299LLU;
	static int8_t x739 = -1;
	volatile int32_t t176 = -584;

    t176 = (((x737&x738)%x739)>x740);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x741 = INT16_MAX;
	static int64_t x742 = INT64_MAX;
	uint64_t x743 = 2LLU;
	static int64_t x744 = -76317060LL;
	int32_t t177 = 217;

    t177 = (((x741&x742)%x743)>x744);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x746 = -2209;
	int32_t x747 = INT32_MIN;
	uint64_t x748 = 168537477298082LLU;
	static int32_t t178 = -45785318;

    t178 = (((x745&x746)%x747)>x748);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MAX;
	volatile int8_t x751 = -30;
	volatile int8_t x752 = INT8_MIN;
	int32_t t179 = -24773991;

    t179 = (((x749&x750)%x751)>x752);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x753 = 215292258521LLU;
	int16_t x754 = 0;
	static int8_t x755 = INT8_MAX;
	volatile int32_t t180 = 695514652;

    t180 = (((x753&x754)%x755)>x756);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = -1;
	static int32_t x760 = -220760252;
	volatile int32_t t181 = -121868091;

    t181 = (((x757&x758)%x759)>x760);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x761 = -1;
	volatile uint8_t x764 = 0U;
	int32_t t182 = 12;

    t182 = (((x761&x762)%x763)>x764);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	int16_t x766 = INT16_MIN;
	int32_t x767 = INT32_MIN;
	volatile int32_t x768 = INT32_MIN;
	volatile int32_t t183 = -1337;

    t183 = (((x765&x766)%x767)>x768);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x769 = 0U;
	uint16_t x771 = 134U;
	uint16_t x772 = 558U;
	int32_t t184 = 2;

    t184 = (((x769&x770)%x771)>x772);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x773 = UINT32_MAX;
	uint32_t x775 = UINT32_MAX;
	int64_t x776 = INT64_MIN;
	int32_t t185 = -4575090;

    t185 = (((x773&x774)%x775)>x776);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x778 = INT16_MAX;
	int32_t x779 = INT32_MAX;
	volatile uint16_t x780 = UINT16_MAX;
	volatile int32_t t186 = -28;

    t186 = (((x777&x778)%x779)>x780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x782 = -1210705;
	volatile int32_t x783 = INT32_MAX;
	int64_t x784 = INT64_MIN;
	volatile int32_t t187 = 4293682;

    t187 = (((x781&x782)%x783)>x784);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x785 = -59405673;
	uint64_t x786 = 37166LLU;
	int16_t x787 = -1;
	volatile int32_t t188 = 1;

    t188 = (((x785&x786)%x787)>x788);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x789 = -101182986;
	int16_t x790 = 0;
	uint64_t x791 = 134079LLU;
	int16_t x792 = INT16_MIN;
	int32_t t189 = -35084;

    t189 = (((x789&x790)%x791)>x792);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x793 = -14036690752LL;
	static int16_t x794 = INT16_MAX;
	int32_t x795 = INT32_MIN;
	static volatile uint8_t x796 = 43U;
	int32_t t190 = 1;

    t190 = (((x793&x794)%x795)>x796);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x799 = UINT64_MAX;
	static volatile int32_t t191 = 3961;

    t191 = (((x797&x798)%x799)>x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x801 = -1;
	int32_t x802 = -1033983202;
	volatile int16_t x804 = 56;
	int32_t t192 = 2006031;

    t192 = (((x801&x802)%x803)>x804);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = -925;
	uint16_t x806 = 2607U;
	int64_t x807 = INT64_MAX;
	int16_t x808 = 3;
	int32_t t193 = -114141461;

    t193 = (((x805&x806)%x807)>x808);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x810 = 31491U;
	volatile int8_t x811 = INT8_MIN;
	int64_t x812 = INT64_MIN;
	static int32_t t194 = -757;

    t194 = (((x809&x810)%x811)>x812);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x814 = 86646342U;
	int32_t x815 = INT32_MIN;
	int8_t x816 = INT8_MAX;
	volatile int32_t t195 = -7826737;

    t195 = (((x813&x814)%x815)>x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x818 = -12;
	static int16_t x819 = INT16_MIN;
	volatile int64_t x820 = INT64_MIN;
	volatile int32_t t196 = -52;

    t196 = (((x817&x818)%x819)>x820);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x821 = INT16_MIN;
	static int32_t x822 = INT32_MIN;
	int16_t x823 = INT16_MIN;
	uint8_t x824 = 119U;
	volatile int32_t t197 = 5356078;

    t197 = (((x821&x822)%x823)>x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x825 = INT8_MIN;
	int64_t x826 = INT64_MIN;
	int32_t x827 = INT32_MIN;
	volatile uint64_t x828 = 8098475631155943LLU;
	int32_t t198 = 0;

    t198 = (((x825&x826)%x827)>x828);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x829 = -7;
	static uint16_t x830 = UINT16_MAX;
	int16_t x831 = INT16_MIN;
	int64_t x832 = 74738581442895LL;
	int32_t t199 = -33;

    t199 = (((x829&x830)%x831)>x832);

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

