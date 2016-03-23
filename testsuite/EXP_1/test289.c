
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

static int8_t x2 = INT8_MIN;
int16_t x4 = INT16_MIN;
uint64_t x6 = 3LLU;
int16_t x21 = INT16_MAX;
uint16_t x24 = UINT16_MAX;
static uint64_t x37 = UINT64_MAX;
int8_t x43 = 0;
volatile int32_t t9 = -596994730;
int64_t x49 = -1LL;
uint64_t x54 = UINT64_MAX;
int16_t x56 = -1;
uint32_t x57 = 1U;
int16_t x63 = INT16_MIN;
volatile int32_t t14 = 214904015;
volatile uint64_t x70 = UINT64_MAX;
volatile int32_t t15 = 265046;
static volatile int8_t x78 = INT8_MAX;
static int16_t x81 = -1;
int16_t x83 = -1;
static volatile uint16_t x84 = UINT16_MAX;
int8_t x86 = INT8_MIN;
int8_t x89 = INT8_MIN;
int32_t x90 = -1;
int32_t t20 = -251322086;
uint32_t x97 = 92U;
int8_t x98 = 1;
static int32_t t22 = -117;
static int32_t t23 = -62;
uint16_t x105 = 109U;
int64_t x112 = 29313LL;
uint64_t x113 = 2223416995195LLU;
int64_t x114 = -1822187LL;
int64_t x119 = -1LL;
uint16_t x121 = 80U;
int16_t x128 = INT16_MIN;
uint64_t x131 = UINT64_MAX;
int16_t x132 = 127;
static volatile int32_t x150 = 69288;
int8_t x157 = INT8_MAX;
int16_t x158 = INT16_MIN;
static int64_t x163 = 24253393LL;
uint8_t x165 = 36U;
uint8_t x170 = 1U;
volatile int8_t x175 = -1;
volatile uint32_t x187 = 0U;
volatile int32_t t43 = 59860110;
int32_t x190 = 110254;
uint16_t x199 = 223U;
int8_t x206 = -30;
int8_t x209 = INT8_MAX;
static int64_t x226 = INT64_MAX;
static int8_t x237 = INT8_MAX;
static uint64_t x240 = 28609LLU;
int32_t t55 = 227317;
volatile int32_t t56 = -1750;
uint8_t x248 = 5U;
int32_t t58 = 2179;
static uint32_t x253 = UINT32_MAX;
uint8_t x254 = 3U;
static uint32_t x256 = 657U;
volatile uint32_t x258 = 49145344U;
int32_t t60 = 492944272;
int32_t x262 = -2;
uint32_t x263 = 79820600U;
int64_t x267 = INT64_MIN;
uint32_t x270 = 18U;
uint8_t x272 = UINT8_MAX;
uint32_t x280 = UINT32_MAX;
static int8_t x284 = 55;
uint8_t x285 = 1U;
uint32_t x289 = UINT32_MAX;
int16_t x293 = 1847;
int32_t x299 = INT32_MAX;
volatile int32_t t72 = -3;
int32_t t75 = 1581902;
volatile int64_t x329 = -1LL;
uint32_t x334 = 16U;
uint64_t x338 = UINT64_MAX;
static uint32_t x339 = UINT32_MAX;
int16_t x343 = -1;
int64_t x345 = -1LL;
volatile uint16_t x348 = 44U;
uint32_t x350 = 17324557U;
int32_t x354 = -1;
int16_t x356 = 1;
uint32_t x369 = 450U;
int32_t t87 = 526465556;
int8_t x376 = 5;
uint32_t x395 = 1009940U;
static uint64_t x398 = 19577LLU;
int32_t t94 = -1;
uint8_t x406 = 1U;
int16_t x408 = 34;
int32_t t97 = 75285;
static int32_t x415 = 56854652;
volatile int32_t t98 = -103355;
volatile int32_t t99 = 35;
int64_t x427 = INT64_MIN;
int8_t x444 = -1;
int64_t x446 = -880LL;
int32_t x453 = -1;
volatile int32_t t107 = -172;
uint64_t x463 = 136LLU;
volatile int64_t x470 = -1LL;
volatile int8_t x476 = -24;
int16_t x487 = INT16_MIN;
int32_t t113 = -198729698;
uint64_t x491 = 8LLU;
int32_t t114 = -3988;
volatile int16_t x494 = INT16_MAX;
volatile int32_t x496 = 6;
int32_t t115 = -37;
uint32_t x504 = 8924875U;
static int32_t t117 = 1;
int16_t x506 = 7567;
volatile uint16_t x507 = UINT16_MAX;
uint32_t x514 = 108092U;
static int32_t t119 = 3690;
uint32_t x524 = 0U;
static uint16_t x533 = UINT16_MAX;
volatile int32_t x563 = -1;
int8_t x565 = -1;
uint32_t x569 = 180368342U;
int64_t x570 = -1LL;
static int64_t x572 = INT64_MIN;
int64_t x586 = 76484076658LL;
int8_t x588 = 0;
volatile uint8_t x590 = UINT8_MAX;
int32_t t136 = -249556;
static volatile int16_t x594 = INT16_MAX;
static volatile int8_t x596 = -4;
static int16_t x599 = INT16_MAX;
volatile int64_t x600 = INT64_MIN;
int32_t t138 = -657839694;
uint8_t x603 = 13U;
uint16_t x608 = UINT16_MAX;
int16_t x609 = INT16_MIN;
int8_t x611 = 60;
uint16_t x612 = UINT16_MAX;
int32_t x613 = INT32_MAX;
uint64_t x615 = 844818692826591LLU;
static uint8_t x620 = 13U;
static uint64_t x625 = 1512084188747633903LLU;
int16_t x630 = INT16_MAX;
uint32_t x637 = 87959867U;
volatile int16_t x638 = 1;
static int16_t x641 = INT16_MAX;
static volatile int8_t x655 = INT8_MIN;
static uint32_t x662 = 33U;
int8_t x671 = -52;
static int32_t t153 = -154684;
volatile int32_t t154 = 1;
volatile int64_t x681 = 444LL;
int32_t x688 = -1;
static uint64_t x690 = 12219390212800LLU;
uint64_t x696 = 257433486015706900LLU;
int32_t x698 = -995900844;
int64_t x699 = INT64_MAX;
int32_t x704 = INT32_MAX;
int32_t x705 = -14;
static uint32_t x708 = 119375U;
static uint16_t x709 = 38U;
int64_t x710 = -1LL;
volatile uint64_t x718 = UINT64_MAX;
int8_t x721 = INT8_MIN;
volatile int64_t x727 = INT64_MIN;
uint16_t x730 = 10U;
volatile int32_t x733 = INT32_MAX;
volatile int32_t t169 = 6035;
volatile int8_t x742 = 1;
uint8_t x744 = 0U;
static uint16_t x746 = UINT16_MAX;
int64_t x751 = -1LL;
static int8_t x752 = -1;
int32_t t172 = -17576562;
uint8_t x764 = UINT8_MAX;
int64_t x768 = INT64_MIN;
volatile int8_t x777 = INT8_MIN;
volatile int64_t x778 = 1130556487169LL;
int32_t t178 = 98925009;
static uint8_t x791 = UINT8_MAX;
static int8_t x795 = INT8_MIN;
int8_t x796 = 12;
uint32_t x797 = 270897U;
int64_t x805 = -823970LL;
int8_t x808 = INT8_MAX;
volatile int32_t t184 = 247800144;
int32_t x820 = -79;
uint64_t x830 = 1914081LLU;
uint32_t x832 = UINT32_MAX;
int16_t x833 = -1;
int32_t x834 = INT32_MIN;
int16_t x836 = INT16_MAX;
int16_t x840 = 3480;
int32_t t191 = -88;
static int16_t x864 = -1;
int8_t x872 = INT8_MIN;
int16_t x873 = INT16_MAX;
int8_t x874 = 0;
int64_t x875 = 5LL;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	uint32_t x3 = 227U;
	int32_t t0 = 801;

    t0 = (((x1-x2)!=x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MIN;
	volatile int32_t x7 = -1;
	uint16_t x8 = 175U;
	int32_t t1 = 96;

    t1 = (((x5-x6)!=x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 615213897065LLU;
	int8_t x10 = INT8_MAX;
	static int8_t x11 = 0;
	volatile int64_t x12 = -1LL;
	static int32_t t2 = 40790;

    t2 = (((x9-x10)!=x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MIN;
	static volatile int32_t t3 = -7548;

    t3 = (((x21-x22)!=x23)>x24);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = -5;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = 0;
	int32_t t4 = 2564881;

    t4 = (((x25-x26)!=x27)>x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x29 = 1;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t5 = 500;

    t5 = (((x29-x30)!=x31)>x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	uint64_t x34 = 21159LLU;
	volatile int16_t x35 = -1;
	uint8_t x36 = 1U;
	volatile int32_t t6 = 1626741;

    t6 = (((x33-x34)!=x35)>x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x38 = -87017;
	int32_t x39 = INT32_MIN;
	int32_t x40 = 490;
	int32_t t7 = 259;

    t7 = (((x37-x38)!=x39)>x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = -17793803633441489LL;
	int8_t x42 = INT8_MIN;
	int16_t x44 = -6682;
	volatile int32_t t8 = 484991;

    t8 = (((x41-x42)!=x43)>x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = UINT32_MAX;
	static int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;

    t9 = (((x45-x46)!=x47)>x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x50 = INT64_MAX;
	int64_t x51 = -1LL;
	static int8_t x52 = -3;
	int32_t t10 = 6;

    t10 = (((x49-x50)!=x51)>x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = UINT64_MAX;
	uint64_t x55 = 224430LLU;
	int32_t t11 = -1;

    t11 = (((x53-x54)!=x55)>x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = UINT8_MAX;
	int8_t x59 = -9;
	static int64_t x60 = -1373698222267291LL;
	int32_t t12 = 1845844;

    t12 = (((x57-x58)!=x59)>x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = -779024532954407LL;
	volatile int64_t x62 = 354519830875344984LL;
	int64_t x64 = -3227633LL;
	volatile int32_t t13 = 483;

    t13 = (((x61-x62)!=x63)>x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	int64_t x67 = -1LL;
	uint64_t x68 = 8286316213742LLU;

    t14 = (((x65-x66)!=x67)>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x69 = INT64_MIN;
	int32_t x71 = 1551;
	uint64_t x72 = 99834783LLU;

    t15 = (((x69-x70)!=x71)>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x73 = -1;
	static uint64_t x74 = 402LLU;
	int8_t x75 = 1;
	static volatile int8_t x76 = -43;
	volatile int32_t t16 = -243;

    t16 = (((x73-x74)!=x75)>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = INT16_MIN;
	int32_t x79 = INT32_MIN;
	volatile uint8_t x80 = 1U;
	volatile int32_t t17 = -3734;

    t17 = (((x77-x78)!=x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x82 = INT8_MAX;
	int32_t t18 = 1;

    t18 = (((x81-x82)!=x83)>x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 16;
	uint16_t x87 = UINT16_MAX;
	volatile int8_t x88 = INT8_MAX;
	volatile int32_t t19 = 49;

    t19 = (((x85-x86)!=x87)>x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x91 = UINT32_MAX;
	int32_t x92 = -1;

    t20 = (((x89-x90)!=x91)>x92);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = 1U;
	int64_t x94 = 1327LL;
	uint8_t x95 = UINT8_MAX;
	uint64_t x96 = 117359428115984621LLU;
	volatile int32_t t21 = -1;

    t21 = (((x93-x94)!=x95)>x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x99 = INT8_MIN;
	uint8_t x100 = 3U;

    t22 = (((x97-x98)!=x99)>x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MAX;
	int32_t x104 = -1;

    t23 = (((x101-x102)!=x103)>x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x106 = 19U;
	uint16_t x107 = 8062U;
	uint32_t x108 = 60U;
	volatile int32_t t24 = 1161880;

    t24 = (((x105-x106)!=x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x109 = 105LLU;
	int64_t x110 = 194014LL;
	uint16_t x111 = 119U;
	volatile int32_t t25 = 1736;

    t25 = (((x109-x110)!=x111)>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x115 = 7711793586900678LLU;
	int8_t x116 = INT8_MAX;
	int32_t t26 = 23593;

    t26 = (((x113-x114)!=x115)>x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x117 = 3270765154LLU;
	int8_t x118 = INT8_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t27 = -7003;

    t27 = (((x117-x118)!=x119)>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x122 = 6;
	int8_t x123 = -1;
	volatile uint8_t x124 = 62U;
	int32_t t28 = -153292;

    t28 = (((x121-x122)!=x123)>x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MIN;
	static int32_t x126 = INT32_MIN;
	int16_t x127 = -1420;
	volatile int32_t t29 = 4999154;

    t29 = (((x125-x126)!=x127)>x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = UINT32_MAX;
	volatile int64_t x130 = INT64_MAX;
	int32_t t30 = -374705;

    t30 = (((x129-x130)!=x131)>x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 20187749668582885LL;
	int32_t x138 = 231;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MAX;
	static int32_t t31 = -112;

    t31 = (((x137-x138)!=x139)>x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x141 = -1;
	volatile int64_t x142 = -8000LL;
	int8_t x143 = INT8_MAX;
	static int8_t x144 = 1;
	int32_t t32 = -1;

    t32 = (((x141-x142)!=x143)>x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x145 = 24591875U;
	uint32_t x146 = UINT32_MAX;
	int8_t x147 = -3;
	int32_t x148 = -47029284;
	int32_t t33 = -11126;

    t33 = (((x145-x146)!=x147)>x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = -2LL;
	int32_t x151 = INT32_MIN;
	volatile int16_t x152 = -185;
	static volatile int32_t t34 = 388318;

    t34 = (((x149-x150)!=x151)>x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x153 = 31U;
	int16_t x154 = -1;
	int16_t x155 = INT16_MIN;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t35 = 278812019;

    t35 = (((x153-x154)!=x155)>x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x159 = INT64_MIN;
	static int32_t x160 = -55714528;
	int32_t t36 = 2958;

    t36 = (((x157-x158)!=x159)>x160);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = UINT32_MAX;
	int8_t x162 = -1;
	int32_t x164 = INT32_MAX;
	int32_t t37 = -2165051;

    t37 = (((x161-x162)!=x163)>x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x166 = INT8_MIN;
	volatile int8_t x167 = 48;
	int8_t x168 = 2;
	volatile int32_t t38 = 6;

    t38 = (((x165-x166)!=x167)>x168);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x169 = -1LL;
	volatile int32_t x171 = -518664;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t39 = 2;

    t39 = (((x169-x170)!=x171)>x172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x173 = 2558U;
	volatile int16_t x174 = INT16_MAX;
	volatile uint32_t x176 = 33421444U;
	volatile int32_t t40 = -82947583;

    t40 = (((x173-x174)!=x175)>x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = -2;
	int64_t x178 = 70287073939LL;
	uint16_t x179 = UINT16_MAX;
	static volatile int8_t x180 = -9;
	int32_t t41 = 5644;

    t41 = (((x177-x178)!=x179)>x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = INT8_MAX;
	uint16_t x182 = 60U;
	static volatile int8_t x183 = -1;
	static int8_t x184 = 1;
	int32_t t42 = -121;

    t42 = (((x181-x182)!=x183)>x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = -1LL;
	volatile int32_t x186 = -1;
	static int16_t x188 = INT16_MIN;

    t43 = (((x185-x186)!=x187)>x188);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x189 = INT16_MAX;
	int32_t x191 = 13;
	uint32_t x192 = 52598U;
	volatile int32_t t44 = 45805932;

    t44 = (((x189-x190)!=x191)>x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = INT16_MIN;
	int16_t x194 = -206;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = -1776LL;
	volatile int32_t t45 = 7078;

    t45 = (((x193-x194)!=x195)>x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x197 = INT16_MIN;
	static uint64_t x198 = 192LLU;
	volatile int32_t x200 = INT32_MIN;
	int32_t t46 = 1;

    t46 = (((x197-x198)!=x199)>x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MAX;
	int16_t x202 = -1;
	static int8_t x203 = -1;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t47 = 42831162;

    t47 = (((x201-x202)!=x203)>x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x205 = UINT64_MAX;
	volatile int8_t x207 = 4;
	static uint32_t x208 = 127608U;
	volatile int32_t t48 = -14;

    t48 = (((x205-x206)!=x207)>x208);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x210 = -89;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;
	int32_t t49 = 459246994;

    t49 = (((x209-x210)!=x211)>x212);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x213 = -8033;
	uint16_t x214 = UINT16_MAX;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t50 = -2;

    t50 = (((x213-x214)!=x215)>x216);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 0U;
	int8_t x224 = 62;
	volatile int32_t t51 = -33;

    t51 = (((x221-x222)!=x223)>x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x225 = 87317;
	int32_t x227 = -385778;
	static uint16_t x228 = 65U;
	static int32_t t52 = -1863;

    t52 = (((x225-x226)!=x227)>x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	static uint16_t x230 = 1573U;
	static volatile uint8_t x231 = 124U;
	static volatile int32_t x232 = INT32_MIN;
	volatile int32_t t53 = -165461;

    t53 = (((x229-x230)!=x231)>x232);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x233 = 50U;
	int64_t x234 = INT64_MAX;
	uint16_t x235 = UINT16_MAX;
	volatile int64_t x236 = -1LL;
	static int32_t t54 = -2;

    t54 = (((x233-x234)!=x235)>x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x238 = INT8_MIN;
	int64_t x239 = -1107475LL;

    t55 = (((x237-x238)!=x239)>x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x241 = INT8_MAX;
	int32_t x242 = -22878;
	int8_t x243 = -1;
	int64_t x244 = -1LL;

    t56 = (((x241-x242)!=x243)>x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = 11496U;
	int64_t x246 = -2433925LL;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t t57 = 16071477;

    t57 = (((x245-x246)!=x247)>x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x249 = UINT8_MAX;
	static int8_t x250 = INT8_MIN;
	int32_t x251 = -1;
	volatile int16_t x252 = 4;

    t58 = (((x249-x250)!=x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x255 = -358;
	static volatile int32_t t59 = -853551439;

    t59 = (((x253-x254)!=x255)>x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x257 = 30U;
	static volatile int16_t x259 = 20;
	static int16_t x260 = 10522;

    t60 = (((x257-x258)!=x259)>x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = 0;
	int16_t x264 = 0;
	int32_t t61 = 56899;

    t61 = (((x261-x262)!=x263)>x264);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = -9;
	uint16_t x266 = 23U;
	volatile int16_t x268 = -1;
	volatile int32_t t62 = 0;

    t62 = (((x265-x266)!=x267)>x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = -1;
	int64_t x271 = -1LL;
	static int32_t t63 = -1;

    t63 = (((x269-x270)!=x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x273 = 22U;
	volatile int8_t x274 = 43;
	static uint16_t x275 = 15U;
	uint64_t x276 = UINT64_MAX;
	int32_t t64 = -963;

    t64 = (((x273-x274)!=x275)>x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x277 = 57510276961983LLU;
	int16_t x278 = INT16_MAX;
	uint8_t x279 = 12U;
	int32_t t65 = 21;

    t65 = (((x277-x278)!=x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x281 = 163U;
	uint64_t x282 = 253510748053350LLU;
	static int8_t x283 = -1;
	volatile int32_t t66 = 411031;

    t66 = (((x281-x282)!=x283)>x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x286 = INT16_MIN;
	uint32_t x287 = 489914131U;
	int32_t x288 = 4993343;
	volatile int32_t t67 = -13;

    t67 = (((x285-x286)!=x287)>x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x290 = 4713494810970853LLU;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = 2492LLU;
	int32_t t68 = -89175;

    t68 = (((x289-x290)!=x291)>x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x294 = 2;
	int64_t x295 = INT64_MIN;
	static uint16_t x296 = UINT16_MAX;
	int32_t t69 = -86365058;

    t69 = (((x293-x294)!=x295)>x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = 5;
	volatile uint8_t x298 = 5U;
	static int8_t x300 = 2;
	static int32_t t70 = -41404331;

    t70 = (((x297-x298)!=x299)>x300);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = 2606380455741781LL;
	uint32_t x302 = UINT32_MAX;
	uint16_t x303 = 317U;
	volatile uint32_t x304 = 91175U;
	volatile int32_t t71 = -250559;

    t71 = (((x301-x302)!=x303)>x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	uint32_t x306 = 7201861U;
	uint32_t x307 = 58781U;
	int8_t x308 = -1;

    t72 = (((x305-x306)!=x307)>x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x309 = -256185890;
	int32_t x310 = INT32_MIN;
	static int16_t x311 = 0;
	int64_t x312 = 2051LL;
	static int32_t t73 = -276983;

    t73 = (((x309-x310)!=x311)>x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = 1;
	volatile uint16_t x314 = 5734U;
	int64_t x315 = 834LL;
	static volatile int16_t x316 = -7;
	int32_t t74 = -1;

    t74 = (((x313-x314)!=x315)>x316);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x317 = UINT64_MAX;
	static int32_t x318 = 14548345;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MAX;

    t75 = (((x317-x318)!=x319)>x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = INT64_MIN;
	int8_t x322 = -42;
	static uint32_t x323 = 21837U;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t76 = -9;

    t76 = (((x321-x322)!=x323)>x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x330 = -1;
	int32_t x331 = -13;
	int32_t x332 = INT32_MAX;
	int32_t t77 = -9267;

    t77 = (((x329-x330)!=x331)>x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x333 = 21;
	int32_t x335 = -1;
	uint64_t x336 = 836318683040LLU;
	static volatile int32_t t78 = -19407;

    t78 = (((x333-x334)!=x335)>x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x337 = UINT8_MAX;
	volatile int8_t x340 = INT8_MAX;
	volatile int32_t t79 = -5351549;

    t79 = (((x337-x338)!=x339)>x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x341 = -1;
	int32_t x342 = INT32_MIN;
	int16_t x344 = 0;
	int32_t t80 = 51970;

    t80 = (((x341-x342)!=x343)>x344);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x346 = 21U;
	volatile uint8_t x347 = UINT8_MAX;
	static int32_t t81 = 59251;

    t81 = (((x345-x346)!=x347)>x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x349 = 202509U;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 5U;
	int32_t t82 = -429256;

    t82 = (((x349-x350)!=x351)>x352);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = -1;
	volatile uint32_t x355 = 53U;
	static int32_t t83 = 76471;

    t83 = (((x353-x354)!=x355)>x356);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	int8_t x359 = 21;
	volatile int64_t x360 = INT64_MIN;
	static volatile int32_t t84 = -84;

    t84 = (((x357-x358)!=x359)>x360);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x361 = INT64_MIN;
	volatile int8_t x362 = -1;
	volatile int32_t x363 = INT32_MAX;
	int8_t x364 = -1;
	int32_t t85 = 1751162;

    t85 = (((x361-x362)!=x363)>x364);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x365 = INT16_MIN;
	int16_t x366 = -10097;
	int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	int32_t t86 = 59570675;

    t86 = (((x365-x366)!=x367)>x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x370 = 440473U;
	uint32_t x371 = 0U;
	int16_t x372 = -286;

    t87 = (((x369-x370)!=x371)>x372);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 12U;
	static int8_t x375 = -35;
	int32_t t88 = 15;

    t88 = (((x373-x374)!=x375)>x376);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = 47U;
	static int8_t x380 = -1;
	int32_t t89 = -2;

    t89 = (((x377-x378)!=x379)>x380);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x381 = -15257468283LL;
	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = -1;
	static int32_t t90 = 272140;

    t90 = (((x381-x382)!=x383)>x384);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x385 = 11218149391123103LL;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = -1;
	int64_t x388 = INT64_MIN;
	int32_t t91 = -593;

    t91 = (((x385-x386)!=x387)>x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = -1;
	volatile uint8_t x390 = 0U;
	uint16_t x391 = UINT16_MAX;
	uint32_t x392 = UINT32_MAX;
	int32_t t92 = 866519;

    t92 = (((x389-x390)!=x391)>x392);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x393 = 2538LLU;
	int16_t x394 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t93 = 238857;

    t93 = (((x393-x394)!=x395)>x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x397 = 6U;
	uint32_t x399 = UINT32_MAX;
	static int64_t x400 = INT64_MAX;

    t94 = (((x397-x398)!=x399)>x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x401 = UINT16_MAX;
	static uint16_t x402 = 10368U;
	int16_t x403 = INT16_MAX;
	static volatile int64_t x404 = -58710742100LL;
	volatile int32_t t95 = -463362;

    t95 = (((x401-x402)!=x403)>x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x405 = INT8_MIN;
	static int8_t x407 = -1;
	volatile int32_t t96 = -117247908;

    t96 = (((x405-x406)!=x407)>x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = -8;
	volatile int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MAX;

    t97 = (((x409-x410)!=x411)>x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x413 = 4634U;
	int32_t x414 = INT32_MAX;
	static volatile int32_t x416 = -1;

    t98 = (((x413-x414)!=x415)>x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x417 = INT32_MIN;
	static int16_t x418 = INT16_MIN;
	volatile uint32_t x419 = UINT32_MAX;
	int8_t x420 = INT8_MIN;

    t99 = (((x417-x418)!=x419)>x420);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x421 = -100;
	uint16_t x422 = 177U;
	uint16_t x423 = 5032U;
	int8_t x424 = -1;
	volatile int32_t t100 = 11;

    t100 = (((x421-x422)!=x423)>x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MAX;
	int32_t x428 = 0;
	int32_t t101 = 329;

    t101 = (((x425-x426)!=x427)>x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x429 = 144469LLU;
	int64_t x430 = -4145LL;
	int8_t x431 = 1;
	static uint8_t x432 = 26U;
	int32_t t102 = 165786625;

    t102 = (((x429-x430)!=x431)>x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x437 = UINT8_MAX;
	static int8_t x438 = INT8_MAX;
	int64_t x439 = INT64_MIN;
	int32_t x440 = INT32_MAX;
	static volatile int32_t t103 = 1338793;

    t103 = (((x437-x438)!=x439)>x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x441 = 15U;
	uint16_t x442 = 498U;
	volatile int8_t x443 = -5;
	int32_t t104 = -2133;

    t104 = (((x441-x442)!=x443)>x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x445 = 1647U;
	volatile int64_t x447 = 5977490442LL;
	int8_t x448 = -8;
	int32_t t105 = -334;

    t105 = (((x445-x446)!=x447)>x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x454 = 29U;
	uint64_t x455 = UINT64_MAX;
	volatile uint32_t x456 = 79U;
	static int32_t t106 = -6;

    t106 = (((x453-x454)!=x455)>x456);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x457 = 1U;
	int16_t x458 = 79;
	static int8_t x459 = 37;
	int64_t x460 = -35738693LL;

    t107 = (((x457-x458)!=x459)>x460);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x461 = 15265858U;
	volatile int64_t x462 = INT64_MAX;
	uint8_t x464 = 39U;
	volatile int32_t t108 = 222946355;

    t108 = (((x461-x462)!=x463)>x464);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x465 = -360113;
	int8_t x466 = 5;
	int8_t x467 = -38;
	uint16_t x468 = UINT16_MAX;
	int32_t t109 = -1746;

    t109 = (((x465-x466)!=x467)>x468);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x469 = 85U;
	volatile int32_t x471 = 5689863;
	volatile int16_t x472 = -1;
	static int32_t t110 = 4332151;

    t110 = (((x469-x470)!=x471)>x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x473 = 536081434123934LLU;
	uint64_t x474 = 14842LLU;
	int32_t x475 = 0;
	int32_t t111 = -2445405;

    t111 = (((x473-x474)!=x475)>x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = -2286;
	volatile int32_t x482 = 7;
	uint32_t x483 = 489377U;
	int64_t x484 = INT64_MIN;
	int32_t t112 = 0;

    t112 = (((x481-x482)!=x483)>x484);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x485 = 1647813586090008669LLU;
	int16_t x486 = -11;
	uint8_t x488 = UINT8_MAX;

    t113 = (((x485-x486)!=x487)>x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x489 = UINT16_MAX;
	static int16_t x490 = 15832;
	int32_t x492 = INT32_MIN;

    t114 = (((x489-x490)!=x491)>x492);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MAX;
	uint64_t x495 = UINT64_MAX;

    t115 = (((x493-x494)!=x495)>x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x497 = INT8_MIN;
	uint16_t x498 = 46U;
	uint32_t x499 = 424386945U;
	int64_t x500 = INT64_MIN;
	volatile int32_t t116 = -193113969;

    t116 = (((x497-x498)!=x499)>x500);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x501 = UINT8_MAX;
	volatile int16_t x502 = -1;
	int16_t x503 = 9546;

    t117 = (((x501-x502)!=x503)>x504);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x505 = -1;
	volatile uint64_t x508 = 2695LLU;
	volatile int32_t t118 = 2210780;

    t118 = (((x505-x506)!=x507)>x508);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int32_t x515 = 17;
	static int64_t x516 = 11978LL;

    t119 = (((x513-x514)!=x515)>x516);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x521 = INT8_MAX;
	uint32_t x522 = 5104852U;
	volatile int64_t x523 = INT64_MAX;
	volatile int32_t t120 = -1609;

    t120 = (((x521-x522)!=x523)>x524);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x525 = -1;
	uint64_t x526 = 83LLU;
	uint8_t x527 = 58U;
	uint32_t x528 = 1440864006U;
	volatile int32_t t121 = 26529;

    t121 = (((x525-x526)!=x527)>x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MIN;
	int64_t x531 = 212LL;
	uint64_t x532 = 1024196421440494LLU;
	volatile int32_t t122 = -3;

    t122 = (((x529-x530)!=x531)>x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x534 = INT16_MAX;
	int32_t x535 = INT32_MIN;
	int16_t x536 = -1566;
	volatile int32_t t123 = -90422;

    t123 = (((x533-x534)!=x535)>x536);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x537 = -491660782;
	volatile int8_t x538 = 51;
	static int32_t x539 = INT32_MAX;
	uint32_t x540 = 3U;
	static int32_t t124 = 724;

    t124 = (((x537-x538)!=x539)>x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = -1;
	int64_t x542 = -48447LL;
	int16_t x543 = INT16_MIN;
	volatile int64_t x544 = INT64_MAX;
	int32_t t125 = 0;

    t125 = (((x541-x542)!=x543)>x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x549 = 1;
	static volatile uint64_t x550 = 49LLU;
	uint16_t x551 = UINT16_MAX;
	int8_t x552 = INT8_MAX;
	volatile int32_t t126 = 10;

    t126 = (((x549-x550)!=x551)>x552);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x553 = 12203;
	int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MAX;
	uint64_t x556 = 325037157997LLU;
	int32_t t127 = -5163338;

    t127 = (((x553-x554)!=x555)>x556);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x557 = 6U;
	uint16_t x558 = 657U;
	uint64_t x559 = 21464733899790930LLU;
	uint64_t x560 = 98765290620066LLU;
	int32_t t128 = -1;

    t128 = (((x557-x558)!=x559)>x560);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x561 = -1;
	static int32_t x562 = -75;
	int16_t x564 = -1;
	static volatile int32_t t129 = 117255705;

    t129 = (((x561-x562)!=x563)>x564);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x566 = 72633;
	uint16_t x567 = 19317U;
	uint16_t x568 = 12809U;
	volatile int32_t t130 = -3523838;

    t130 = (((x565-x566)!=x567)>x568);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x571 = 0;
	static volatile int32_t t131 = 1082;

    t131 = (((x569-x570)!=x571)>x572);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x573 = -1;
	int8_t x574 = -1;
	static int32_t x575 = -3;
	int32_t x576 = 2852;
	int32_t t132 = 191;

    t132 = (((x573-x574)!=x575)>x576);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x577 = INT64_MIN;
	volatile int8_t x578 = -1;
	static volatile int16_t x579 = -3603;
	uint64_t x580 = 475LLU;
	static int32_t t133 = 454238112;

    t133 = (((x577-x578)!=x579)>x580);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MIN;
	volatile int64_t x583 = INT64_MIN;
	volatile int16_t x584 = -1;
	static int32_t t134 = 893;

    t134 = (((x581-x582)!=x583)>x584);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x585 = 188LLU;
	static int32_t x587 = -1;
	int32_t t135 = 57793;

    t135 = (((x585-x586)!=x587)>x588);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x589 = UINT64_MAX;
	int8_t x591 = INT8_MIN;
	int8_t x592 = 0;

    t136 = (((x589-x590)!=x591)>x592);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x593 = 146654222;
	volatile uint8_t x595 = UINT8_MAX;
	static int32_t t137 = -53084886;

    t137 = (((x593-x594)!=x595)>x596);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x597 = 9U;
	volatile uint16_t x598 = 3U;

    t138 = (((x597-x598)!=x599)>x600);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x601 = INT16_MIN;
	static uint8_t x602 = UINT8_MAX;
	static uint32_t x604 = 116615031U;
	volatile int32_t t139 = 3;

    t139 = (((x601-x602)!=x603)>x604);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x605 = 266668344602LL;
	int64_t x606 = -63673LL;
	int32_t x607 = 809;
	volatile int32_t t140 = 43836231;

    t140 = (((x605-x606)!=x607)>x608);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x610 = -3746;
	volatile int32_t t141 = 258743805;

    t141 = (((x609-x610)!=x611)>x612);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x614 = 3;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t142 = 2354449;

    t142 = (((x613-x614)!=x615)>x616);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x617 = 341546835LLU;
	volatile int8_t x618 = 30;
	int16_t x619 = 913;
	int32_t t143 = -92510427;

    t143 = (((x617-x618)!=x619)>x620);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x626 = -915115410028129359LL;
	int16_t x627 = -978;
	static uint64_t x628 = 1798775663791LLU;
	volatile int32_t t144 = 13;

    t144 = (((x625-x626)!=x627)>x628);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x629 = -1;
	int8_t x631 = -12;
	int16_t x632 = INT16_MIN;
	volatile int32_t t145 = -10040;

    t145 = (((x629-x630)!=x631)>x632);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x633 = 15503249633LL;
	volatile int8_t x634 = 27;
	static volatile int32_t x635 = -1;
	uint64_t x636 = 1160LLU;
	static volatile int32_t t146 = -180;

    t146 = (((x633-x634)!=x635)>x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x639 = INT32_MAX;
	volatile int32_t x640 = INT32_MIN;
	volatile int32_t t147 = 6;

    t147 = (((x637-x638)!=x639)>x640);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x642 = 60;
	int64_t x643 = -1LL;
	int32_t x644 = -1;
	int32_t t148 = 832;

    t148 = (((x641-x642)!=x643)>x644);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile int16_t x654 = 1755;
	uint32_t x656 = 381U;
	volatile int32_t t149 = 0;

    t149 = (((x653-x654)!=x655)>x656);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 8831818248512885060LLU;
	static uint16_t x658 = 34U;
	static volatile uint8_t x659 = UINT8_MAX;
	static int32_t x660 = -1;
	volatile int32_t t150 = -38129802;

    t150 = (((x657-x658)!=x659)>x660);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x661 = INT32_MIN;
	static int16_t x663 = -410;
	uint32_t x664 = 69208U;
	int32_t t151 = -470402;

    t151 = (((x661-x662)!=x663)>x664);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x665 = -2;
	uint16_t x666 = 8U;
	static uint64_t x667 = 3086441009LLU;
	static int32_t x668 = INT32_MIN;
	volatile int32_t t152 = 0;

    t152 = (((x665-x666)!=x667)>x668);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 70572179U;
	int8_t x670 = INT8_MAX;
	int16_t x672 = 572;

    t153 = (((x669-x670)!=x671)>x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x673 = 0;
	static int32_t x674 = -212;
	int8_t x675 = -7;
	volatile uint64_t x676 = 280492302898759LLU;

    t154 = (((x673-x674)!=x675)>x676);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x677 = 1604LLU;
	int16_t x678 = -1425;
	int64_t x679 = INT64_MIN;
	static uint16_t x680 = 14856U;
	static int32_t t155 = 42202;

    t155 = (((x677-x678)!=x679)>x680);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x682 = 23077163703717072LLU;
	static volatile int32_t x683 = -1;
	uint64_t x684 = 274328759124LLU;
	volatile int32_t t156 = 37679590;

    t156 = (((x681-x682)!=x683)>x684);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x685 = 67U;
	uint64_t x686 = 4679LLU;
	int16_t x687 = INT16_MAX;
	volatile int32_t t157 = -865910557;

    t157 = (((x685-x686)!=x687)>x688);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x689 = -1;
	volatile uint64_t x691 = 92731715591353312LLU;
	int8_t x692 = 1;
	volatile int32_t t158 = 222;

    t158 = (((x689-x690)!=x691)>x692);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x693 = -61;
	static int8_t x694 = -1;
	int64_t x695 = INT64_MIN;
	volatile int32_t t159 = 477968442;

    t159 = (((x693-x694)!=x695)>x696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x697 = INT32_MIN;
	uint8_t x700 = 5U;
	int32_t t160 = 5020934;

    t160 = (((x697-x698)!=x699)>x700);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x701 = 0U;
	int64_t x702 = 1328032LL;
	int8_t x703 = INT8_MIN;
	int32_t t161 = 3;

    t161 = (((x701-x702)!=x703)>x704);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x706 = INT8_MIN;
	volatile int8_t x707 = -1;
	int32_t t162 = -510820;

    t162 = (((x705-x706)!=x707)>x708);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x711 = INT16_MIN;
	int8_t x712 = -5;
	int32_t t163 = -54508154;

    t163 = (((x709-x710)!=x711)>x712);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x713 = -48;
	volatile int32_t x714 = 7340;
	static int64_t x715 = INT64_MAX;
	int16_t x716 = INT16_MIN;
	volatile int32_t t164 = 200;

    t164 = (((x713-x714)!=x715)>x716);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x717 = -25;
	static uint16_t x719 = UINT16_MAX;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t165 = -1;

    t165 = (((x717-x718)!=x719)>x720);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x722 = -1;
	volatile uint8_t x723 = 1U;
	int16_t x724 = INT16_MIN;
	volatile int32_t t166 = -892;

    t166 = (((x721-x722)!=x723)>x724);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x725 = INT16_MAX;
	volatile int16_t x726 = INT16_MAX;
	int16_t x728 = -121;
	volatile int32_t t167 = -8438;

    t167 = (((x725-x726)!=x727)>x728);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x729 = UINT16_MAX;
	int16_t x731 = INT16_MIN;
	volatile int32_t x732 = INT32_MIN;
	volatile int32_t t168 = -13831;

    t168 = (((x729-x730)!=x731)>x732);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x734 = UINT16_MAX;
	int64_t x735 = INT64_MAX;
	int32_t x736 = 451469334;

    t169 = (((x733-x734)!=x735)>x736);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x741 = 24647U;
	int16_t x743 = -1808;
	int32_t t170 = -1;

    t170 = (((x741-x742)!=x743)>x744);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x745 = -1LL;
	uint32_t x747 = 2U;
	uint32_t x748 = 38674U;
	volatile int32_t t171 = -68136921;

    t171 = (((x745-x746)!=x747)>x748);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x749 = -1;
	int16_t x750 = -1;

    t172 = (((x749-x750)!=x751)>x752);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x757 = INT32_MIN;
	static int32_t x758 = INT32_MIN;
	static uint8_t x759 = 70U;
	int16_t x760 = 0;
	int32_t t173 = 174037437;

    t173 = (((x757-x758)!=x759)>x760);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x761 = 31U;
	volatile int16_t x762 = INT16_MIN;
	static uint32_t x763 = UINT32_MAX;
	int32_t t174 = 5440;

    t174 = (((x761-x762)!=x763)>x764);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x765 = 24;
	int64_t x766 = INT64_MAX;
	volatile int8_t x767 = INT8_MIN;
	static int32_t t175 = 52;

    t175 = (((x765-x766)!=x767)>x768);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x769 = INT8_MAX;
	int8_t x770 = INT8_MAX;
	int64_t x771 = 796593256720433LL;
	static uint64_t x772 = 8LLU;
	int32_t t176 = -3950;

    t176 = (((x769-x770)!=x771)>x772);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x779 = 1;
	static uint64_t x780 = 9232LLU;
	volatile int32_t t177 = 873255451;

    t177 = (((x777-x778)!=x779)>x780);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x781 = 999893867LLU;
	uint64_t x782 = UINT64_MAX;
	volatile int32_t x783 = INT32_MAX;
	uint64_t x784 = 2337LLU;

    t178 = (((x781-x782)!=x783)>x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x789 = UINT64_MAX;
	int64_t x790 = INT64_MIN;
	static int64_t x792 = INT64_MIN;
	volatile int32_t t179 = -1;

    t179 = (((x789-x790)!=x791)>x792);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x793 = INT8_MIN;
	static volatile uint8_t x794 = 11U;
	volatile int32_t t180 = 30237831;

    t180 = (((x793-x794)!=x795)>x796);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x798 = -8480LL;
	int64_t x799 = -1LL;
	volatile int8_t x800 = -12;
	volatile int32_t t181 = 916;

    t181 = (((x797-x798)!=x799)>x800);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x806 = UINT64_MAX;
	int16_t x807 = 10936;
	volatile int32_t t182 = -99;

    t182 = (((x805-x806)!=x807)>x808);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x809 = -44;
	static int16_t x810 = -1;
	int16_t x811 = INT16_MIN;
	uint32_t x812 = UINT32_MAX;
	int32_t t183 = 1;

    t183 = (((x809-x810)!=x811)>x812);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x813 = 4585U;
	int32_t x814 = INT32_MAX;
	volatile int16_t x815 = 1;
	int32_t x816 = -1;

    t184 = (((x813-x814)!=x815)>x816);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x817 = -1;
	int64_t x818 = -20LL;
	volatile int64_t x819 = -1LL;
	int32_t t185 = 13;

    t185 = (((x817-x818)!=x819)>x820);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x821 = -14;
	uint64_t x822 = UINT64_MAX;
	volatile int32_t x823 = INT32_MIN;
	volatile int8_t x824 = INT8_MIN;
	int32_t t186 = -1539;

    t186 = (((x821-x822)!=x823)>x824);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x825 = 5U;
	uint8_t x826 = UINT8_MAX;
	static int32_t x827 = INT32_MIN;
	int32_t x828 = 20;
	volatile int32_t t187 = 42193;

    t187 = (((x825-x826)!=x827)>x828);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x829 = INT64_MAX;
	uint16_t x831 = 5U;
	static int32_t t188 = 112;

    t188 = (((x829-x830)!=x831)>x832);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x835 = INT32_MIN;
	volatile int32_t t189 = 2991;

    t189 = (((x833-x834)!=x835)>x836);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x837 = INT8_MAX;
	static uint8_t x838 = UINT8_MAX;
	uint16_t x839 = UINT16_MAX;
	int32_t t190 = -57714;

    t190 = (((x837-x838)!=x839)>x840);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x841 = INT8_MAX;
	static uint16_t x842 = UINT16_MAX;
	uint8_t x843 = 3U;
	volatile int32_t x844 = -1;

    t191 = (((x841-x842)!=x843)>x844);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x849 = 2838U;
	uint32_t x850 = 59794868U;
	int64_t x851 = -1LL;
	uint32_t x852 = 7U;
	int32_t t192 = 0;

    t192 = (((x849-x850)!=x851)>x852);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x853 = 89;
	int64_t x854 = -52919623043432237LL;
	volatile int32_t x855 = -28;
	int16_t x856 = -116;
	static volatile int32_t t193 = 41;

    t193 = (((x853-x854)!=x855)>x856);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x857 = INT8_MIN;
	uint64_t x858 = 140150812134611240LLU;
	volatile uint64_t x859 = 8680377167463828LLU;
	volatile uint32_t x860 = 1324U;
	static int32_t t194 = -1;

    t194 = (((x857-x858)!=x859)>x860);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x861 = -1LL;
	uint64_t x862 = 3482882299265629LLU;
	int64_t x863 = INT64_MAX;
	static volatile int32_t t195 = -107946315;

    t195 = (((x861-x862)!=x863)>x864);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x865 = 1486295152U;
	static int64_t x866 = -1439140472349LL;
	volatile uint8_t x867 = 1U;
	int16_t x868 = INT16_MIN;
	static int32_t t196 = 14;

    t196 = (((x865-x866)!=x867)>x868);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x869 = -1;
	int16_t x870 = INT16_MAX;
	int64_t x871 = INT64_MIN;
	static volatile int32_t t197 = 1163;

    t197 = (((x869-x870)!=x871)>x872);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x876 = UINT64_MAX;
	int32_t t198 = -30;

    t198 = (((x873-x874)!=x875)>x876);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x877 = 9U;
	volatile uint64_t x878 = UINT64_MAX;
	static int64_t x879 = -1LL;
	int16_t x880 = -1;
	volatile int32_t t199 = -151887413;

    t199 = (((x877-x878)!=x879)>x880);

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

