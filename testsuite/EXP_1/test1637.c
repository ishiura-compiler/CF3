
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

static uint16_t x3 = 9790U;
int32_t t1 = 44635;
int64_t x10 = -36511LL;
static int64_t x11 = -1LL;
uint16_t x15 = 7644U;
int64_t x16 = INT64_MIN;
static int64_t x23 = INT64_MAX;
int16_t x27 = INT16_MAX;
int32_t x36 = -1;
volatile int64_t x42 = -243129446413LL;
static uint64_t x48 = UINT64_MAX;
static uint64_t t11 = UINT64_MAX;
volatile int64_t t12 = INT64_MIN;
uint8_t x54 = 27U;
uint64_t x56 = 52397LLU;
uint16_t x58 = UINT16_MAX;
volatile int64_t t14 = INT64_MIN;
volatile int8_t x61 = -1;
static int32_t x66 = -1;
static int8_t x74 = INT8_MAX;
int8_t x81 = INT8_MAX;
static volatile int8_t x83 = INT8_MIN;
int32_t x85 = -235031109;
int8_t x89 = INT8_MIN;
uint16_t x90 = UINT16_MAX;
uint32_t x110 = 458376402U;
int64_t x111 = INT64_MIN;
volatile int64_t x119 = -6LL;
uint64_t t29 = 22846667965315LLU;
int8_t x130 = INT8_MAX;
int32_t x131 = INT32_MIN;
int8_t x134 = -1;
int8_t x143 = INT8_MAX;
int32_t t34 = 107743;
volatile int32_t t36 = -92;
uint16_t x155 = 4U;
int16_t x158 = INT16_MAX;
static int64_t x161 = -8423158835145317LL;
uint16_t x162 = 15969U;
int32_t x166 = -54858;
volatile uint64_t t40 = 429825442545LLU;
int64_t x176 = INT64_MIN;
int8_t x186 = INT8_MAX;
int32_t x188 = -164;
volatile int32_t t45 = -57;
uint8_t x195 = 2U;
uint16_t x200 = UINT16_MAX;
int64_t x202 = INT64_MAX;
static int64_t x204 = INT64_MAX;
static volatile int8_t x205 = 0;
volatile int8_t x208 = INT8_MIN;
int32_t t49 = 0;
int32_t x209 = INT32_MIN;
int8_t x213 = INT8_MIN;
volatile int32_t x220 = 3031686;
volatile int32_t t52 = -728;
uint16_t x224 = 20U;
uint8_t x225 = 9U;
int32_t x227 = -4;
int8_t x252 = INT8_MIN;
static int32_t t60 = -9190;
int32_t x254 = INT32_MIN;
int64_t t62 = -1760557346584012795LL;
volatile uint8_t x261 = UINT8_MAX;
int8_t x263 = 1;
int8_t x268 = INT8_MIN;
int16_t x269 = INT16_MIN;
int64_t x271 = -1LL;
uint32_t x274 = 67757U;
int16_t x282 = INT16_MIN;
volatile uint32_t x284 = 319U;
int16_t x285 = INT16_MAX;
volatile int32_t x288 = 103;
uint32_t x294 = UINT32_MAX;
static uint16_t x299 = 55U;
uint64_t x300 = 1093912353117022353LLU;
uint64_t x301 = 28952921LLU;
int8_t x309 = INT8_MIN;
volatile int8_t x313 = INT8_MAX;
int8_t x316 = -1;
uint32_t t76 = UINT32_MAX;
int32_t x319 = INT32_MAX;
static int8_t x320 = -1;
int32_t x322 = INT32_MIN;
uint8_t x332 = 1U;
static int32_t x340 = -1;
int32_t t82 = 3222;
uint64_t t83 = UINT64_MAX;
volatile uint64_t x345 = UINT64_MAX;
volatile uint32_t x346 = UINT32_MAX;
int32_t x349 = INT32_MIN;
uint8_t x354 = 84U;
volatile uint32_t x359 = 13773U;
uint32_t x361 = UINT32_MAX;
static int64_t t89 = -433192844665267314LL;
int16_t x370 = INT16_MIN;
uint8_t x371 = 1U;
volatile uint32_t t91 = UINT32_MAX;
int64_t x380 = 710404689719LL;
uint64_t t92 = 3586439688478446127LLU;
volatile int8_t x391 = INT8_MIN;
static int8_t x393 = INT8_MIN;
int16_t x399 = INT16_MAX;
uint32_t x401 = UINT32_MAX;
int64_t x405 = INT64_MIN;
static int16_t x412 = INT16_MIN;
static volatile int32_t t100 = 1484;
static volatile int64_t x413 = INT64_MIN;
volatile int64_t x415 = INT64_MAX;
uint8_t x416 = 5U;
static uint16_t x418 = UINT16_MAX;
int32_t t102 = -8820;
uint64_t x428 = 538906635018873LLU;
uint64_t t104 = 2LLU;
uint16_t x432 = UINT16_MAX;
int64_t x437 = INT64_MIN;
int32_t x439 = -1;
volatile int32_t x449 = -1;
int32_t x457 = -2;
int8_t x462 = INT8_MIN;
int32_t x463 = INT32_MIN;
static volatile uint16_t x468 = 22U;
static int32_t x472 = 56646445;
int32_t t115 = 480816;
volatile int32_t x477 = 4;
volatile int64_t x484 = -1LL;
static volatile uint32_t x488 = 2017138U;
uint32_t t120 = 103760U;
uint64_t x496 = 388745304283LLU;
uint64_t x500 = UINT64_MAX;
static volatile uint32_t x509 = 4408330U;
uint16_t x511 = UINT16_MAX;
volatile int32_t x512 = 53129;
uint16_t x513 = 2U;
int16_t x517 = 118;
int16_t x519 = INT16_MAX;
int32_t x523 = -4837;
static int32_t x524 = -1;
int64_t x528 = -296002721LL;
static int64_t x529 = -1LL;
int8_t x532 = 10;
int32_t x536 = -1;
int8_t x540 = INT8_MIN;
volatile int32_t t133 = 16;
int32_t t134 = 9245367;
uint8_t x552 = UINT8_MAX;
uint64_t x555 = 902303453470LLU;
int8_t x559 = -3;
int32_t x561 = INT32_MIN;
int32_t x569 = INT32_MAX;
volatile uint8_t x575 = 5U;
uint16_t x579 = 27U;
int64_t x580 = -4272894617737430LL;
uint8_t x583 = 2U;
int32_t t143 = 40215;
int8_t x591 = -24;
int32_t x608 = INT32_MIN;
static int16_t x614 = INT16_MAX;
int8_t x617 = -10;
int8_t x618 = -1;
static uint32_t x622 = 174789133U;
static int64_t t152 = 72111LL;
static uint16_t x628 = UINT16_MAX;
int32_t x632 = -9835;
volatile int32_t t154 = 121028;
int64_t x633 = 79103605LL;
static volatile int64_t x638 = INT64_MAX;
uint32_t x640 = UINT32_MAX;
volatile uint32_t t156 = UINT32_MAX;
int8_t x645 = -1;
uint16_t x650 = 60U;
int8_t x652 = -7;
volatile uint8_t x660 = UINT8_MAX;
uint8_t x661 = 76U;
volatile int32_t t162 = 431144;
static int64_t t165 = INT64_MIN;
uint32_t x681 = UINT32_MAX;
static uint32_t x695 = 4176736U;
int16_t x699 = 82;
static uint32_t t171 = UINT32_MAX;
volatile uint16_t x701 = 50U;
static int64_t x703 = 367311945722816086LL;
uint32_t x708 = UINT32_MAX;
static volatile uint8_t x711 = 13U;
int8_t x715 = -1;
int16_t x716 = 8117;
uint16_t x719 = 17388U;
uint64_t x721 = UINT64_MAX;
static int64_t x729 = -7630780731LL;
static volatile uint32_t x733 = 115125U;
static int8_t x735 = -1;
static uint8_t x738 = 0U;
int64_t t181 = -259846867LL;
uint16_t x762 = 4U;
int8_t x766 = 1;
int8_t x767 = -47;
uint64_t x769 = 179275925312LLU;
static int32_t x771 = -117010440;
int64_t x775 = INT64_MIN;
volatile int8_t x776 = INT8_MIN;
static int8_t x778 = INT8_MAX;
static volatile int64_t x779 = INT64_MAX;
int32_t t192 = 39514772;
uint16_t x795 = 1U;
uint32_t x798 = 2483455U;
static int8_t x806 = -1;
uint16_t x810 = 172U;


void f0(void) {
    	volatile int16_t x1 = 930;
	uint32_t x2 = 42023U;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -7186;

    t0 = (((x1>x2)%x3)|x4);

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	uint32_t x6 = 149996151U;
	volatile int8_t x7 = INT8_MIN;
	uint16_t x8 = 7U;

    t1 = (((x5>x6)%x7)|x8);

    if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 3215682U;
	static int32_t x12 = -1;
	volatile int64_t t2 = -16212185LL;

    t2 = (((x9>x10)%x11)|x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int8_t x14 = -1;
	int64_t t3 = INT64_MIN;

    t3 = (((x13>x14)%x15)|x16);

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	static int8_t x18 = 0;
	volatile uint32_t x19 = 279221U;
	uint64_t x20 = UINT64_MAX;
	uint64_t t4 = UINT64_MAX;

    t4 = (((x17>x18)%x19)|x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	static volatile int16_t x22 = INT16_MAX;
	uint32_t x24 = 305U;
	int64_t t5 = 10LL;

    t5 = (((x21>x22)%x23)|x24);

    if (t5 != 305LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	static uint8_t x26 = UINT8_MAX;
	static volatile int32_t x28 = 73;
	volatile int32_t t6 = 26;

    t6 = (((x25>x26)%x27)|x28);

    if (t6 != 73) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	volatile uint32_t x30 = 28U;
	volatile uint32_t x31 = 6812U;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = UINT64_MAX;

    t7 = (((x29>x30)%x31)|x32);

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = -5;
	int16_t x34 = -1;
	uint8_t x35 = 29U;
	static volatile int32_t t8 = 10594934;

    t8 = (((x33>x34)%x35)|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x37 = UINT8_MAX;
	int32_t x38 = 2379;
	int64_t x39 = -4200631201LL;
	int8_t x40 = INT8_MIN;
	int64_t t9 = -1647350808092076LL;

    t9 = (((x37>x38)%x39)|x40);

    if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x43 = UINT32_MAX;
	volatile uint32_t x44 = UINT32_MAX;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (((x41>x42)%x43)|x44);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 317561145LLU;
	uint32_t x46 = UINT32_MAX;
	static uint64_t x47 = 378153379020775392LLU;

    t11 = (((x45>x46)%x47)|x48);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	int8_t x50 = 1;
	uint16_t x51 = 1U;
	int64_t x52 = INT64_MIN;

    t12 = (((x49>x50)%x51)|x52);

    if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x53 = INT64_MIN;
	static volatile uint8_t x55 = UINT8_MAX;
	volatile uint64_t t13 = 24LLU;

    t13 = (((x53>x54)%x55)|x56);

    if (t13 != 52397LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 26;
	volatile int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;

    t14 = (((x57>x58)%x59)|x60);

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MIN;
	uint16_t x63 = UINT16_MAX;
	volatile uint64_t x64 = UINT64_MAX;
	uint64_t t15 = UINT64_MAX;

    t15 = (((x61>x62)%x63)|x64);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 1028708U;
	int8_t x67 = -1;
	static int64_t x68 = -68186215693349021LL;
	static volatile int64_t t16 = -77044027LL;

    t16 = (((x65>x66)%x67)|x68);

    if (t16 != -68186215693349021LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	uint64_t x70 = 316384929LLU;
	int16_t x71 = 516;
	int16_t x72 = INT16_MAX;
	static int32_t t17 = -74898;

    t17 = (((x69>x70)%x71)|x72);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 1U;
	int16_t x75 = 4;
	static volatile uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = (((x73>x74)%x75)|x76);

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = 307332895134LL;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -16;
	int32_t x80 = -1;
	int32_t t19 = 1732903;

    t19 = (((x77>x78)%x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MAX;
	volatile uint32_t x84 = 2870U;
	static uint32_t t20 = 7902U;

    t20 = (((x81>x82)%x83)|x84);

    if (t20 != 2870U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = 16528411357960993LLU;
	static volatile int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	static volatile int32_t t21 = -38642;

    t21 = (((x85>x86)%x87)|x88);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x91 = 9968U;
	uint16_t x92 = 2U;
	static int32_t t22 = -1608415;

    t22 = (((x89>x90)%x91)|x92);

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -18;
	uint16_t x94 = 106U;
	uint32_t x95 = 3736359U;
	static uint32_t x96 = 10303U;
	volatile uint32_t t23 = 858474006U;

    t23 = (((x93>x94)%x95)|x96);

    if (t23 != 10303U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 14681633687423906LL;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -1;
	int64_t t24 = -477599LL;

    t24 = (((x97>x98)%x99)|x100);

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 100U;
	uint16_t x102 = UINT16_MAX;
	static uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 75U;
	static volatile uint64_t t25 = 101709745614LLU;

    t25 = (((x101>x102)%x103)|x104);

    if (t25 != 75LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int64_t x106 = 23LL;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	int64_t t26 = 49106947359254404LL;

    t26 = (((x105>x106)%x107)|x108);

    if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = INT64_MIN;
	volatile int64_t x112 = INT64_MAX;
	static int64_t t27 = INT64_MAX;

    t27 = (((x109>x110)%x111)|x112);

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	static int32_t x114 = 836547;
	int64_t x115 = -5LL;
	static uint64_t x116 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

    t28 = (((x113>x114)%x115)|x116);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	static int64_t x118 = INT64_MAX;
	uint64_t x120 = 3792006LLU;

    t29 = (((x117>x118)%x119)|x120);

    if (t29 != 3792006LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 11U;
	uint16_t x122 = 1027U;
	int8_t x123 = -1;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = -7;

    t30 = (((x121>x122)%x123)|x124);

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x129 = 44U;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t31 = -257;

    t31 = (((x129>x130)%x131)|x132);

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MAX;
	int16_t x135 = INT16_MIN;
	static int16_t x136 = -1;
	int32_t t32 = 258044248;

    t32 = (((x133>x134)%x135)|x136);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = -15;
	volatile int16_t x138 = INT16_MAX;
	static int32_t x139 = INT32_MAX;
	static int16_t x140 = 384;
	static volatile int32_t t33 = 38;

    t33 = (((x137>x138)%x139)|x140);

    if (t33 != 384) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 12336U;
	int8_t x144 = INT8_MIN;

    t34 = (((x141>x142)%x143)|x144);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = 6585LLU;
	uint64_t x146 = 5746160472332224LLU;
	static int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

    t35 = (((x145>x146)%x147)|x148);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x149 = 9062634LLU;
	static uint16_t x150 = 25U;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = -4491;

    t36 = (((x149>x150)%x151)|x152);

    if (t36 != -4491) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t37 = INT32_MAX;

    t37 = (((x153>x154)%x155)|x156);

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	int16_t x159 = 131;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = INT64_MIN;

    t38 = (((x157>x158)%x159)|x160);

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x163 = INT16_MIN;
	volatile int16_t x164 = -1;
	int32_t t39 = 1965;

    t39 = (((x161>x162)%x163)|x164);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = INT8_MIN;
	static volatile uint64_t x167 = 268371008590199LLU;
	int8_t x168 = INT8_MIN;

    t40 = (((x165>x166)%x167)|x168);

    if (t40 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x169 = -1;
	int8_t x170 = -1;
	static int32_t x171 = INT32_MIN;
	static int64_t x172 = -1LL;
	volatile int64_t t41 = -2393936200251829410LL;

    t41 = (((x169>x170)%x171)|x172);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	uint8_t x174 = 65U;
	volatile int64_t x175 = 612LL;
	volatile int64_t t42 = 2378491946725971782LL;

    t42 = (((x173>x174)%x175)|x176);

    if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = -1;
	static int8_t x178 = INT8_MAX;
	int64_t x179 = INT64_MIN;
	static uint16_t x180 = UINT16_MAX;
	int64_t t43 = -209284760743LL;

    t43 = (((x177>x178)%x179)|x180);

    if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 31U;
	volatile int8_t x182 = INT8_MAX;
	int32_t x183 = INT32_MIN;
	int16_t x184 = -12;
	int32_t t44 = -64440936;

    t44 = (((x181>x182)%x183)|x184);

    if (t44 != -12) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x185 = 12980U;
	int32_t x187 = INT32_MIN;

    t45 = (((x185>x186)%x187)|x188);

    if (t45 != -163) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = -1;
	int8_t x194 = 0;
	int16_t x196 = INT16_MIN;
	volatile int32_t t46 = 106;

    t46 = (((x193>x194)%x195)|x196);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = 0U;
	uint8_t x198 = 0U;
	static int16_t x199 = -3699;
	volatile int32_t t47 = -145638791;

    t47 = (((x197>x198)%x199)|x200);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x201 = INT8_MIN;
	volatile uint32_t x203 = 1U;
	int64_t t48 = INT64_MAX;

    t48 = (((x201>x202)%x203)|x204);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x206 = 7;
	volatile uint16_t x207 = 1447U;

    t49 = (((x205>x206)%x207)|x208);

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x210 = -1;
	uint32_t x211 = 542195U;
	int64_t x212 = -1LL;
	volatile int64_t t50 = -4968092267546LL;

    t50 = (((x209>x210)%x211)|x212);

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = INT32_MAX;
	int32_t x215 = INT32_MIN;
	volatile uint32_t x216 = UINT32_MAX;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = (((x213>x214)%x215)|x216);

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x217 = 4118864036093695953LLU;
	volatile int16_t x218 = -2913;
	volatile int16_t x219 = -281;

    t52 = (((x217>x218)%x219)|x220);

    if (t52 != 3031686) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = INT32_MAX;
	uint8_t x222 = 3U;
	int8_t x223 = -36;
	volatile int32_t t53 = 0;

    t53 = (((x221>x222)%x223)|x224);

    if (t53 != 21) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x226 = 33U;
	volatile int16_t x228 = INT16_MIN;
	volatile int32_t t54 = 82383495;

    t54 = (((x225>x226)%x227)|x228);

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = -12297LL;
	int8_t x230 = INT8_MIN;
	int32_t x231 = INT32_MAX;
	volatile int16_t x232 = -1;
	volatile int32_t t55 = 49;

    t55 = (((x229>x230)%x231)|x232);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x233 = 10069LLU;
	int16_t x234 = INT16_MIN;
	static int64_t x235 = INT64_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t56 = 2880359LL;

    t56 = (((x233>x234)%x235)|x236);

    if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x237 = 84U;
	int16_t x238 = 849;
	uint8_t x239 = UINT8_MAX;
	volatile uint64_t x240 = 120LLU;
	uint64_t t57 = 494333708994LLU;

    t57 = (((x237>x238)%x239)|x240);

    if (t57 != 120LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x241 = INT8_MIN;
	volatile int8_t x242 = INT8_MIN;
	uint16_t x243 = 87U;
	static uint8_t x244 = UINT8_MAX;
	int32_t t58 = -589;

    t58 = (((x241>x242)%x243)|x244);

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x245 = INT16_MAX;
	volatile uint64_t x246 = 7630211803648LLU;
	int64_t x247 = -619150LL;
	volatile int8_t x248 = 15;
	volatile int64_t t59 = 805159579083559LL;

    t59 = (((x245>x246)%x247)|x248);

    if (t59 != 15LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	static volatile int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;

    t60 = (((x249>x250)%x251)|x252);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 53215U;
	uint8_t x255 = 5U;
	volatile int32_t x256 = 1426;
	volatile int32_t t61 = 2191;

    t61 = (((x253>x254)%x255)|x256);

    if (t61 != 1426) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = 3;
	int32_t x259 = INT32_MAX;
	static int64_t x260 = -167614545056806048LL;

    t62 = (((x257>x258)%x259)|x260);

    if (t62 != -167614545056806048LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x262 = 242623;
	int32_t x264 = INT32_MAX;
	volatile int32_t t63 = INT32_MAX;

    t63 = (((x261>x262)%x263)|x264);

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x265 = 3274386256114LLU;
	uint64_t x266 = 680621943478380249LLU;
	int16_t x267 = -1;
	volatile int32_t t64 = 1317473;

    t64 = (((x265>x266)%x267)|x268);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x270 = INT64_MIN;
	int32_t x272 = INT32_MAX;
	int64_t t65 = -1151LL;

    t65 = (((x269>x270)%x271)|x272);

    if (t65 != 2147483647LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x273 = UINT32_MAX;
	uint64_t x275 = 3994528073810LLU;
	volatile int8_t x276 = -32;
	volatile uint64_t t66 = 89261509364288942LLU;

    t66 = (((x273>x274)%x275)|x276);

    if (t66 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = -649;
	uint32_t x278 = 3830699U;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t x280 = -5115;
	int32_t t67 = -1330204;

    t67 = (((x277>x278)%x279)|x280);

    if (t67 != -5115) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x281 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	volatile uint32_t t68 = 311009U;

    t68 = (((x281>x282)%x283)|x284);

    if (t68 != 319U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x286 = 10366U;
	int8_t x287 = INT8_MIN;
	int32_t t69 = -881367402;

    t69 = (((x285>x286)%x287)|x288);

    if (t69 != 103) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = INT8_MAX;
	uint16_t x290 = 24U;
	int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	volatile int64_t t70 = INT64_MIN;

    t70 = (((x289>x290)%x291)|x292);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = 23LL;
	volatile int64_t t71 = -12956LL;

    t71 = (((x293>x294)%x295)|x296);

    if (t71 != 23LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = -15926;
	static int8_t x298 = INT8_MIN;
	volatile uint64_t t72 = 6956355LLU;

    t72 = (((x297>x298)%x299)|x300);

    if (t72 != 1093912353117022353LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;
	int64_t t73 = 22007LL;

    t73 = (((x301>x302)%x303)|x304);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x305 = -1;
	int64_t x306 = INT64_MAX;
	int64_t x307 = 1025140886141884LL;
	volatile uint16_t x308 = 2540U;
	volatile int64_t t74 = -81906597754679LL;

    t74 = (((x305>x306)%x307)|x308);

    if (t74 != 2540LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x310 = INT64_MIN;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = INT8_MAX;
	volatile uint32_t t75 = 118U;

    t75 = (((x309>x310)%x311)|x312);

    if (t75 != 127U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x314 = -1LL;
	uint32_t x315 = 7U;

    t76 = (((x313>x314)%x315)|x316);

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x317 = INT32_MIN;
	volatile int16_t x318 = INT16_MIN;
	static int32_t t77 = 232;

    t77 = (((x317>x318)%x319)|x320);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x321 = 49166610U;
	static int64_t x323 = 127350LL;
	uint64_t x324 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

    t78 = (((x321>x322)%x323)|x324);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x325 = 6279LL;
	int8_t x326 = -19;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t79 = 2328657543LL;

    t79 = (((x325>x326)%x327)|x328);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x329 = 42;
	int32_t x330 = -1;
	uint16_t x331 = 176U;
	volatile int32_t t80 = -1198290;

    t80 = (((x329>x330)%x331)|x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x333 = 133U;
	int32_t x334 = INT32_MAX;
	volatile int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t81 = INT32_MIN;

    t81 = (((x333>x334)%x335)|x336);

    if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -448494431;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = -1;

    t82 = (((x337>x338)%x339)|x340);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x341 = 22U;
	int8_t x342 = INT8_MAX;
	volatile int64_t x343 = INT64_MIN;
	uint64_t x344 = UINT64_MAX;

    t83 = (((x341>x342)%x343)|x344);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x347 = 145571670;
	uint64_t x348 = 24535414811578129LLU;
	volatile uint64_t t84 = 44376261756579LLU;

    t84 = (((x345>x346)%x347)|x348);

    if (t84 != 24535414811578129LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x350 = INT8_MIN;
	static uint16_t x351 = 238U;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t85 = INT64_MIN;

    t85 = (((x349>x350)%x351)|x352);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x353 = INT8_MIN;
	int32_t x355 = 11250944;
	static uint32_t x356 = 19129279U;
	static uint32_t t86 = 48U;

    t86 = (((x353>x354)%x355)|x356);

    if (t86 != 19129279U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x357 = 14U;
	static int32_t x358 = INT32_MIN;
	uint8_t x360 = UINT8_MAX;
	uint32_t t87 = 93325U;

    t87 = (((x357>x358)%x359)|x360);

    if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x362 = UINT32_MAX;
	static uint16_t x363 = UINT16_MAX;
	volatile uint32_t x364 = 1U;
	volatile uint32_t t88 = 68854124U;

    t88 = (((x361>x362)%x363)|x364);

    if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = -45;
	int64_t x366 = -2436510665LL;
	volatile uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;

    t89 = (((x365>x366)%x367)|x368);

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x369 = -470;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t90 = 14;

    t90 = (((x369>x370)%x371)|x372);

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 2U;
	static volatile uint32_t x376 = UINT32_MAX;

    t91 = (((x373>x374)%x375)|x376);

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x377 = UINT32_MAX;
	static int16_t x378 = 7;
	uint64_t x379 = 1550589LLU;

    t92 = (((x377>x378)%x379)|x380);

    if (t92 != 710404689719LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x381 = 17518U;
	static int32_t x382 = -1;
	int16_t x383 = INT16_MAX;
	uint64_t x384 = 247074033LLU;
	volatile uint64_t t93 = 2645710821554559LLU;

    t93 = (((x381>x382)%x383)|x384);

    if (t93 != 247074033LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = 999;
	int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 841232200U;
	volatile uint32_t t94 = 11878942U;

    t94 = (((x385>x386)%x387)|x388);

    if (t94 != 841232200U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MIN;
	uint32_t x390 = UINT32_MAX;
	uint16_t x392 = 180U;
	volatile int32_t t95 = -944;

    t95 = (((x389>x390)%x391)|x392);

    if (t95 != 180) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x394 = 421LL;
	int64_t x395 = INT64_MIN;
	volatile uint64_t x396 = 2386937085591941953LLU;
	static uint64_t t96 = 17947878LLU;

    t96 = (((x393>x394)%x395)|x396);

    if (t96 != 2386937085591941953LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x397 = 88U;
	static uint32_t x398 = UINT32_MAX;
	int32_t x400 = 0;
	int32_t t97 = 7;

    t97 = (((x397>x398)%x399)|x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x402 = INT32_MAX;
	volatile uint32_t x403 = 7030U;
	static volatile int32_t x404 = INT32_MIN;
	volatile uint32_t t98 = 15864576U;

    t98 = (((x401>x402)%x403)|x404);

    if (t98 != 2147483649U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x406 = -4143874691LL;
	uint8_t x407 = 36U;
	static int64_t x408 = 303LL;
	volatile int64_t t99 = 96LL;

    t99 = (((x405>x406)%x407)|x408);

    if (t99 != 303LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x409 = 1;
	int64_t x410 = 904LL;
	int32_t x411 = INT32_MAX;

    t100 = (((x409>x410)%x411)|x412);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x414 = UINT16_MAX;
	static int64_t t101 = -47236466285LL;

    t101 = (((x413>x414)%x415)|x416);

    if (t101 != 5LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = 211736LL;
	int16_t x419 = 24;
	uint16_t x420 = 1U;

    t102 = (((x417>x418)%x419)|x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	uint8_t x422 = 41U;
	volatile int64_t x423 = INT64_MIN;
	int64_t x424 = -2083565787773167LL;
	static int64_t t103 = 6507827328190LL;

    t103 = (((x421>x422)%x423)|x424);

    if (t103 != -2083565787773167LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = INT64_MAX;
	int64_t x426 = 166791LL;
	volatile int32_t x427 = INT32_MIN;

    t104 = (((x425>x426)%x427)|x428);

    if (t104 != 538906635018873LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x429 = -7126;
	int32_t x430 = 504786;
	int32_t x431 = 4094;
	int32_t t105 = -51967342;

    t105 = (((x429>x430)%x431)|x432);

    if (t105 != 65535) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x433 = 22LLU;
	uint32_t x434 = 1U;
	int32_t x435 = -1;
	int32_t x436 = -70;
	volatile int32_t t106 = -445508726;

    t106 = (((x433>x434)%x435)|x436);

    if (t106 != -70) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x438 = INT16_MAX;
	int32_t x440 = -377721;
	volatile int32_t t107 = -2;

    t107 = (((x437>x438)%x439)|x440);

    if (t107 != -377721) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x441 = UINT32_MAX;
	uint16_t x442 = UINT16_MAX;
	static int16_t x443 = -20;
	int64_t x444 = INT64_MAX;
	int64_t t108 = INT64_MAX;

    t108 = (((x441>x442)%x443)|x444);

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x445 = UINT16_MAX;
	int32_t x446 = 105;
	int16_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t109 = 737;

    t109 = (((x445>x446)%x447)|x448);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x450 = UINT16_MAX;
	uint32_t x451 = 18U;
	static volatile int32_t x452 = -1;
	static uint32_t t110 = UINT32_MAX;

    t110 = (((x449>x450)%x451)|x452);

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x453 = 0U;
	int64_t x454 = INT64_MIN;
	uint16_t x455 = 75U;
	volatile int16_t x456 = -324;
	int32_t t111 = 415;

    t111 = (((x453>x454)%x455)|x456);

    if (t111 != -323) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x458 = 38;
	int8_t x459 = INT8_MIN;
	volatile int64_t x460 = -1LL;
	int64_t t112 = 26770663892111898LL;

    t112 = (((x457>x458)%x459)|x460);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x461 = INT64_MIN;
	int8_t x464 = 3;
	volatile int32_t t113 = -31479;

    t113 = (((x461>x462)%x463)|x464);

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint64_t x465 = UINT64_MAX;
	volatile int8_t x466 = -1;
	int8_t x467 = -1;
	volatile int32_t t114 = 567;

    t114 = (((x465>x466)%x467)|x468);

    if (t114 != 22) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x469 = 9;
	static int32_t x470 = INT32_MIN;
	uint8_t x471 = 107U;

    t115 = (((x469>x470)%x471)|x472);

    if (t115 != 56646445) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x473 = INT32_MIN;
	static int8_t x474 = -1;
	volatile uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t116 = INT32_MIN;

    t116 = (((x473>x474)%x475)|x476);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x478 = INT16_MIN;
	static int32_t x479 = 889;
	int32_t x480 = -208660;
	volatile int32_t t117 = -127590198;

    t117 = (((x477>x478)%x479)|x480);

    if (t117 != -208659) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x481 = 15U;
	volatile uint32_t x482 = 8224523U;
	uint8_t x483 = 7U;
	int64_t t118 = 1429372629924205LL;

    t118 = (((x481>x482)%x483)|x484);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = -4;
	int16_t x486 = INT16_MIN;
	static volatile int32_t x487 = 88786793;
	volatile uint32_t t119 = 2393U;

    t119 = (((x485>x486)%x487)|x488);

    if (t119 != 2017139U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x489 = INT16_MIN;
	uint32_t x490 = 100U;
	volatile uint32_t x491 = UINT32_MAX;
	volatile uint32_t x492 = 225U;

    t120 = (((x489>x490)%x491)|x492);

    if (t120 != 225U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x493 = 745822388LLU;
	uint32_t x494 = 895U;
	uint16_t x495 = 209U;
	uint64_t t121 = 6695LLU;

    t121 = (((x493>x494)%x495)|x496);

    if (t121 != 388745304283LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x497 = -1;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = (((x497>x498)%x499)|x500);

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x501 = 13U;
	int16_t x502 = INT16_MIN;
	static int32_t x503 = INT32_MAX;
	int8_t x504 = INT8_MIN;
	int32_t t123 = -3458640;

    t123 = (((x501>x502)%x503)|x504);

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x505 = -6;
	static int32_t x506 = INT32_MAX;
	uint64_t x507 = UINT64_MAX;
	static int8_t x508 = 1;
	uint64_t t124 = 6LLU;

    t124 = (((x505>x506)%x507)|x508);

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x510 = -27;
	volatile int32_t t125 = -627573;

    t125 = (((x509>x510)%x511)|x512);

    if (t125 != 53129) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x514 = -1;
	volatile uint32_t x515 = 996U;
	static volatile int8_t x516 = -1;
	uint32_t t126 = UINT32_MAX;

    t126 = (((x513>x514)%x515)|x516);

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x518 = UINT32_MAX;
	int16_t x520 = 102;
	volatile int32_t t127 = 829407;

    t127 = (((x517>x518)%x519)|x520);

    if (t127 != 102) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x521 = 1779177661114LLU;
	volatile int32_t x522 = -1;
	static int32_t t128 = -436;

    t128 = (((x521>x522)%x523)|x524);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x525 = 9;
	static int64_t x526 = -1LL;
	int16_t x527 = -1;
	int64_t t129 = -11444LL;

    t129 = (((x525>x526)%x527)|x528);

    if (t129 != -296002721LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x530 = INT64_MAX;
	int8_t x531 = -3;
	volatile int32_t t130 = 20770974;

    t130 = (((x529>x530)%x531)|x532);

    if (t130 != 10) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x533 = INT16_MIN;
	int8_t x534 = -14;
	static uint16_t x535 = UINT16_MAX;
	int32_t t131 = -1313;

    t131 = (((x533>x534)%x535)|x536);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x537 = 5923U;
	static int16_t x538 = 9;
	uint32_t x539 = 140452U;
	uint32_t t132 = 18880U;

    t132 = (((x537>x538)%x539)|x540);

    if (t132 != 4294967169U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x541 = -1;
	int64_t x542 = -67108023603022083LL;
	int32_t x543 = -1;
	static uint8_t x544 = UINT8_MAX;

    t133 = (((x541>x542)%x543)|x544);

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x546 = INT16_MAX;
	int16_t x547 = 135;
	static int8_t x548 = INT8_MIN;

    t134 = (((x545>x546)%x547)|x548);

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x549 = -1;
	int8_t x550 = 25;
	int8_t x551 = INT8_MIN;
	volatile int32_t t135 = 3;

    t135 = (((x549>x550)%x551)|x552);

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = -1LL;
	int64_t x556 = -1LL;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x553>x554)%x555)|x556);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MIN;
	static uint8_t x560 = UINT8_MAX;
	int32_t t137 = -7866570;

    t137 = (((x557>x558)%x559)|x560);

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x562 = 20LLU;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MIN;
	uint32_t t138 = 4984U;

    t138 = (((x561>x562)%x563)|x564);

    if (t138 != 4294967169U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x565 = INT16_MAX;
	int64_t x566 = INT64_MAX;
	uint32_t x567 = 123396443U;
	int32_t x568 = INT32_MIN;
	uint32_t t139 = 158U;

    t139 = (((x565>x566)%x567)|x568);

    if (t139 != 2147483648U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x570 = -6;
	int64_t x571 = -1LL;
	static int8_t x572 = -3;
	int64_t t140 = 120824328665LL;

    t140 = (((x569>x570)%x571)|x572);

    if (t140 != -3LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x573 = 275LLU;
	static uint32_t x574 = UINT32_MAX;
	uint64_t x576 = 179LLU;
	volatile uint64_t t141 = 171070LLU;

    t141 = (((x573>x574)%x575)|x576);

    if (t141 != 179LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x577 = -1;
	uint8_t x578 = 5U;
	static int64_t t142 = 135018992072372220LL;

    t142 = (((x577>x578)%x579)|x580);

    if (t142 != -4272894617737430LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x581 = 5121U;
	int8_t x582 = -1;
	int16_t x584 = INT16_MAX;

    t143 = (((x581>x582)%x583)|x584);

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	static int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MAX;
	volatile int64_t x588 = 12185247906LL;
	static volatile int64_t t144 = -24372LL;

    t144 = (((x585>x586)%x587)|x588);

    if (t144 != 12185247907LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x589 = -233;
	uint8_t x590 = 19U;
	int8_t x592 = INT8_MAX;
	volatile int32_t t145 = 30052241;

    t145 = (((x589>x590)%x591)|x592);

    if (t145 != 127) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = INT32_MIN;
	int8_t x598 = -1;
	int64_t x599 = INT64_MAX;
	int64_t x600 = -1LL;
	static int64_t t146 = 498023745735LL;

    t146 = (((x597>x598)%x599)|x600);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x601 = -454;
	volatile int32_t x602 = -721890528;
	uint8_t x603 = UINT8_MAX;
	int16_t x604 = -1;
	int32_t t147 = 454432333;

    t147 = (((x601>x602)%x603)|x604);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x605 = 877U;
	uint64_t x606 = UINT64_MAX;
	int16_t x607 = -1;
	static int32_t t148 = INT32_MIN;

    t148 = (((x605>x606)%x607)|x608);

    if (t148 != INT32_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x609 = INT64_MIN;
	uint8_t x610 = 11U;
	uint16_t x611 = 7U;
	volatile uint32_t x612 = 12U;
	uint32_t t149 = 696976U;

    t149 = (((x609>x610)%x611)|x612);

    if (t149 != 12U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x613 = 3;
	volatile uint16_t x615 = 31U;
	int64_t x616 = INT64_MIN;
	volatile int64_t t150 = INT64_MIN;

    t150 = (((x613>x614)%x615)|x616);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x619 = -16467685;
	uint16_t x620 = UINT16_MAX;
	int32_t t151 = 91604230;

    t151 = (((x617>x618)%x619)|x620);

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x621 = 31157LLU;
	volatile int64_t x623 = INT64_MIN;
	volatile uint8_t x624 = UINT8_MAX;

    t152 = (((x621>x622)%x623)|x624);

    if (t152 != 255LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x625 = INT8_MIN;
	int32_t x626 = -1;
	volatile int32_t x627 = 134354;
	int32_t t153 = -17723;

    t153 = (((x625>x626)%x627)|x628);

    if (t153 != 65535) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x629 = UINT16_MAX;
	int16_t x630 = INT16_MAX;
	uint16_t x631 = 2996U;

    t154 = (((x629>x630)%x631)|x632);

    if (t154 != -9835) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x634 = -1;
	int32_t x635 = 438;
	uint64_t x636 = 75508265717618642LLU;
	volatile uint64_t t155 = 2688516836363725LLU;

    t155 = (((x633>x634)%x635)|x636);

    if (t155 != 75508265717618643LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x637 = INT16_MAX;
	int8_t x639 = -1;

    t156 = (((x637>x638)%x639)|x640);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x641 = 354831981U;
	volatile int32_t x642 = 222;
	uint8_t x643 = UINT8_MAX;
	int64_t x644 = -1LL;
	volatile int64_t t157 = -12756045064LL;

    t157 = (((x641>x642)%x643)|x644);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x646 = 0LLU;
	int8_t x647 = -1;
	int16_t x648 = -7;
	volatile int32_t t158 = 29251696;

    t158 = (((x645>x646)%x647)|x648);

    if (t158 != -7) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x651 = 9610806U;
	uint32_t t159 = 3425813U;

    t159 = (((x649>x650)%x651)|x652);

    if (t159 != 4294967289U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x653 = 1180487648U;
	int16_t x654 = INT16_MIN;
	uint64_t x655 = 1095862905924LLU;
	int64_t x656 = INT64_MIN;
	volatile uint64_t t160 = 20973299LLU;

    t160 = (((x653>x654)%x655)|x656);

    if (t160 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x657 = INT64_MIN;
	static int64_t x658 = -1LL;
	int16_t x659 = INT16_MAX;
	int32_t t161 = -3088;

    t161 = (((x657>x658)%x659)|x660);

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x662 = INT8_MIN;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = UINT16_MAX;

    t162 = (((x661>x662)%x663)|x664);

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MAX;
	static volatile int8_t x667 = INT8_MAX;
	static uint8_t x668 = 0U;
	int32_t t163 = -867;

    t163 = (((x665>x666)%x667)|x668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x669 = -1;
	uint64_t x670 = 5LLU;
	static int32_t x671 = -1;
	uint8_t x672 = 4U;
	int32_t t164 = -1;

    t164 = (((x669>x670)%x671)|x672);

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = -4;
	uint8_t x675 = 20U;
	volatile int64_t x676 = INT64_MIN;

    t165 = (((x673>x674)%x675)|x676);

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x677 = 20LLU;
	volatile int64_t x678 = -1LL;
	int8_t x679 = -1;
	static volatile int16_t x680 = INT16_MIN;
	int32_t t166 = 0;

    t166 = (((x677>x678)%x679)|x680);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x682 = INT64_MIN;
	uint32_t x683 = 1960728U;
	int8_t x684 = -1;
	uint32_t t167 = UINT32_MAX;

    t167 = (((x681>x682)%x683)|x684);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x685 = INT16_MIN;
	static uint16_t x686 = 4U;
	uint8_t x687 = 2U;
	int8_t x688 = -1;
	volatile int32_t t168 = -20134144;

    t168 = (((x685>x686)%x687)|x688);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x689 = INT32_MIN;
	int64_t x690 = INT64_MIN;
	volatile int32_t x691 = INT32_MIN;
	uint8_t x692 = 2U;
	volatile int32_t t169 = 0;

    t169 = (((x689>x690)%x691)|x692);

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = INT64_MAX;
	uint16_t x694 = UINT16_MAX;
	int32_t x696 = 1994730;
	volatile uint32_t t170 = 663U;

    t170 = (((x693>x694)%x695)|x696);

    if (t170 != 1994731U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x697 = INT64_MIN;
	uint64_t x698 = 2178057757010LLU;
	static volatile uint32_t x700 = UINT32_MAX;

    t171 = (((x697>x698)%x699)|x700);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x702 = INT16_MIN;
	static uint32_t x704 = 5355475U;
	volatile int64_t t172 = 13403863563LL;

    t172 = (((x701>x702)%x703)|x704);

    if (t172 != 5355475LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x705 = INT32_MAX;
	int8_t x706 = -1;
	int16_t x707 = -1;
	uint32_t t173 = UINT32_MAX;

    t173 = (((x705>x706)%x707)|x708);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = INT8_MIN;
	int16_t x710 = INT16_MIN;
	int8_t x712 = 40;
	int32_t t174 = -3008580;

    t174 = (((x709>x710)%x711)|x712);

    if (t174 != 41) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x713 = 229U;
	static int16_t x714 = INT16_MIN;
	volatile int32_t t175 = -57;

    t175 = (((x713>x714)%x715)|x716);

    if (t175 != 8117) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x717 = -1;
	int64_t x718 = -1LL;
	static uint16_t x720 = 4068U;
	volatile int32_t t176 = -60660508;

    t176 = (((x717>x718)%x719)|x720);

    if (t176 != 4068) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x722 = -1LL;
	volatile int8_t x723 = -1;
	int8_t x724 = -1;
	static int32_t t177 = 5845;

    t177 = (((x721>x722)%x723)|x724);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = INT64_MIN;
	uint64_t x726 = 73443184068LLU;
	static int32_t x727 = INT32_MIN;
	uint8_t x728 = 21U;
	int32_t t178 = 11;

    t178 = (((x725>x726)%x727)|x728);

    if (t178 != 21) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x730 = -5679;
	uint64_t x731 = UINT64_MAX;
	static uint64_t x732 = UINT64_MAX;
	static uint64_t t179 = UINT64_MAX;

    t179 = (((x729>x730)%x731)|x732);

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x734 = -740;
	int64_t x736 = -1LL;
	volatile int64_t t180 = 11919969577786151LL;

    t180 = (((x733>x734)%x735)|x736);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x737 = 11675U;
	static volatile int64_t x739 = INT64_MIN;
	volatile int8_t x740 = -1;

    t181 = (((x737>x738)%x739)|x740);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x741 = 1U;
	volatile int8_t x742 = INT8_MIN;
	volatile uint64_t x743 = UINT64_MAX;
	static uint8_t x744 = 39U;
	volatile uint64_t t182 = 97428LLU;

    t182 = (((x741>x742)%x743)|x744);

    if (t182 != 39LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x749 = -1;
	int8_t x750 = INT8_MIN;
	int32_t x751 = 46;
	static uint8_t x752 = UINT8_MAX;
	int32_t t183 = 165661;

    t183 = (((x749>x750)%x751)|x752);

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x753 = UINT16_MAX;
	static uint64_t x754 = UINT64_MAX;
	int32_t x755 = INT32_MIN;
	int16_t x756 = -31;
	int32_t t184 = 1;

    t184 = (((x753>x754)%x755)|x756);

    if (t184 != -31) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x761 = 26U;
	int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MIN;
	volatile int32_t t185 = -51913088;

    t185 = (((x761>x762)%x763)|x764);

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x765 = 71611;
	static int32_t x768 = -172694911;
	static int32_t t186 = -1140;

    t186 = (((x765>x766)%x767)|x768);

    if (t186 != -172694911) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x770 = -13932;
	int8_t x772 = 22;
	int32_t t187 = -521606976;

    t187 = (((x769>x770)%x771)|x772);

    if (t187 != 22) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x773 = 2050352U;
	static int8_t x774 = INT8_MIN;
	static volatile int64_t t188 = -4209464979238LL;

    t188 = (((x773>x774)%x775)|x776);

    if (t188 != -128LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x777 = 12U;
	uint16_t x780 = UINT16_MAX;
	volatile int64_t t189 = -1047LL;

    t189 = (((x777>x778)%x779)|x780);

    if (t189 != 65535LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x781 = INT32_MIN;
	int8_t x782 = INT8_MIN;
	int8_t x783 = INT8_MAX;
	uint8_t x784 = UINT8_MAX;
	int32_t t190 = -3;

    t190 = (((x781>x782)%x783)|x784);

    if (t190 != 255) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x785 = 1U;
	static int16_t x786 = 125;
	int16_t x787 = -58;
	uint8_t x788 = 51U;
	int32_t t191 = -874505316;

    t191 = (((x785>x786)%x787)|x788);

    if (t191 != 51) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x789 = 17002337797LLU;
	volatile uint32_t x790 = 719144U;
	static uint8_t x791 = 7U;
	static uint16_t x792 = 39U;

    t192 = (((x789>x790)%x791)|x792);

    if (t192 != 39) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x793 = -28715002561951LL;
	static int32_t x794 = -1;
	int8_t x796 = INT8_MIN;
	static int32_t t193 = -3;

    t193 = (((x793>x794)%x795)|x796);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x797 = UINT64_MAX;
	int8_t x799 = -1;
	int16_t x800 = INT16_MIN;
	int32_t t194 = 11;

    t194 = (((x797>x798)%x799)|x800);

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x801 = 69099256775061079LLU;
	uint64_t x802 = 281187557422248033LLU;
	static uint16_t x803 = 5U;
	int32_t x804 = 55151;
	int32_t t195 = 47896774;

    t195 = (((x801>x802)%x803)|x804);

    if (t195 != 55151) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x805 = INT16_MIN;
	static int64_t x807 = -478733LL;
	static volatile int16_t x808 = -1;
	int64_t t196 = 1431271LL;

    t196 = (((x805>x806)%x807)|x808);

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x809 = 23;
	volatile uint16_t x811 = UINT16_MAX;
	uint32_t x812 = UINT32_MAX;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (((x809>x810)%x811)|x812);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x813 = 499476U;
	static uint32_t x814 = 714U;
	volatile int64_t x815 = INT64_MIN;
	int8_t x816 = INT8_MAX;
	int64_t t198 = -3987LL;

    t198 = (((x813>x814)%x815)|x816);

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x817 = 227120320744983LLU;
	uint64_t x818 = UINT64_MAX;
	volatile int32_t x819 = 1622436;
	uint64_t x820 = 1644714LLU;
	uint64_t t199 = 1098105LLU;

    t199 = (((x817>x818)%x819)|x820);

    if (t199 != 1644714LLU) { NG(); } else { ; }
	
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

