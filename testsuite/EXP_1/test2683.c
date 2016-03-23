
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

volatile int32_t t2 = 0;
volatile int32_t x16 = INT32_MIN;
volatile int32_t x17 = INT32_MIN;
volatile int64_t x22 = INT64_MAX;
int32_t x24 = -1;
static int32_t t5 = 106;
uint16_t x26 = 119U;
static volatile int32_t t6 = -27382;
int8_t x31 = INT8_MAX;
int64_t x38 = 557021LL;
int64_t x40 = -5LL;
int64_t x43 = 464816732583LL;
int64_t x44 = 267093982317LL;
int32_t t11 = 0;
uint32_t x50 = 158764U;
volatile int64_t x55 = -103LL;
int64_t x57 = INT64_MAX;
int64_t x59 = 25321558564LL;
static volatile int32_t t15 = 45455;
volatile int64_t x66 = INT64_MAX;
static int16_t x72 = INT16_MAX;
volatile uint16_t x74 = 6983U;
int32_t t18 = -7518;
int16_t x80 = -1;
int32_t x86 = INT32_MAX;
volatile int32_t x87 = -1;
volatile int32_t t22 = -2720;
volatile int64_t x101 = 20394LL;
static uint8_t x102 = 59U;
uint16_t x106 = 1U;
int64_t x124 = -135630386769554855LL;
static int32_t t30 = 2178629;
static uint8_t x127 = UINT8_MAX;
static int8_t x128 = 21;
int64_t x131 = -14618150876227059LL;
static int32_t x144 = -82856785;
uint16_t x145 = UINT16_MAX;
static uint16_t x146 = 35U;
volatile int32_t t39 = 127693714;
volatile int8_t x161 = INT8_MIN;
int16_t x178 = 23;
volatile int32_t t44 = 0;
int8_t x181 = INT8_MIN;
int16_t x183 = INT16_MIN;
int32_t x184 = INT32_MAX;
static volatile int32_t t45 = -15583262;
int32_t x194 = -1226785;
volatile int64_t x196 = -1LL;
static int8_t x197 = INT8_MIN;
static volatile int32_t x199 = INT32_MIN;
static int32_t x201 = -1414770;
static uint16_t x202 = UINT16_MAX;
int64_t x217 = INT64_MIN;
static int32_t x218 = -1;
static volatile int32_t t54 = -14969;
static int32_t x221 = INT32_MAX;
uint8_t x228 = 51U;
static int32_t x236 = INT32_MIN;
int32_t t58 = -503;
int8_t x237 = INT8_MIN;
volatile int32_t t59 = 9990;
int8_t x243 = -1;
int32_t t61 = 34149;
volatile int32_t t62 = 0;
uint32_t x257 = UINT32_MAX;
static volatile int64_t x260 = INT64_MIN;
static int64_t x261 = -1435914151421495162LL;
int16_t x265 = INT16_MAX;
uint8_t x268 = 17U;
uint32_t x270 = 15650U;
int8_t x272 = 0;
uint32_t x274 = 59704U;
int32_t t68 = -28;
uint8_t x280 = UINT8_MAX;
static int16_t x283 = -814;
uint64_t x294 = 90039116086259LLU;
uint8_t x297 = 59U;
int32_t t74 = 242;
int8_t x310 = INT8_MAX;
int64_t x311 = INT64_MIN;
static volatile int32_t x318 = -1;
uint64_t x326 = 858005283235080LLU;
static int8_t x327 = -1;
uint16_t x332 = 10U;
int64_t x333 = INT64_MIN;
static int32_t x342 = -1;
static int32_t t85 = -109248;
int8_t x354 = -1;
volatile int32_t t88 = -50;
volatile int32_t t89 = -71;
int64_t x369 = INT64_MIN;
int8_t x371 = -1;
static uint16_t x372 = 70U;
int64_t x378 = -1LL;
int64_t x379 = INT64_MAX;
int32_t x382 = INT32_MIN;
int32_t x383 = INT32_MAX;
int8_t x384 = 0;
int32_t x387 = -1;
uint8_t x388 = UINT8_MAX;
static int32_t t96 = -540;
volatile int64_t x392 = -2414993453LL;
int16_t x402 = -218;
volatile uint8_t x404 = 97U;
static volatile uint8_t x408 = UINT8_MAX;
uint8_t x409 = 1U;
static volatile int32_t x418 = -66001;
int16_t x424 = -1;
int16_t x425 = INT16_MAX;
static int8_t x428 = -11;
int32_t t106 = 571;
uint32_t x440 = UINT32_MAX;
int64_t x445 = INT64_MIN;
volatile int8_t x446 = INT8_MIN;
uint8_t x448 = 1U;
int32_t x455 = INT32_MIN;
uint16_t x456 = 422U;
static volatile int64_t x459 = -1LL;
int16_t x462 = INT16_MAX;
volatile int32_t x463 = -1;
volatile int16_t x467 = 166;
int32_t t118 = 331064;
int64_t x482 = INT64_MIN;
static int32_t x489 = INT32_MIN;
uint16_t x494 = UINT16_MAX;
int32_t x496 = INT32_MIN;
int32_t t123 = -19895997;
static int8_t x501 = INT8_MIN;
static volatile int16_t x506 = INT16_MIN;
volatile int64_t x509 = INT64_MIN;
int32_t t127 = -4;
int8_t x513 = -1;
int8_t x525 = INT8_MIN;
int32_t x527 = INT32_MAX;
static volatile int32_t t134 = 89262;
static volatile int32_t x549 = INT32_MIN;
static int64_t x558 = INT64_MIN;
static int32_t t140 = 190399;
uint16_t x566 = 15U;
static int16_t x567 = INT16_MIN;
volatile uint64_t x568 = 3284549418681LLU;
int16_t x571 = INT16_MIN;
int8_t x573 = INT8_MIN;
int32_t x577 = -1;
int64_t x578 = -19121787LL;
int32_t x588 = -1250983;
int64_t x589 = -178560811772703LL;
volatile int64_t x590 = INT64_MIN;
int8_t x594 = 1;
volatile uint8_t x599 = 41U;
int32_t x601 = INT32_MIN;
int64_t x602 = 147LL;
int32_t t150 = -7155459;
uint64_t x606 = UINT64_MAX;
volatile int32_t x607 = INT32_MAX;
int16_t x610 = -1;
static volatile int8_t x619 = -1;
int64_t x620 = INT64_MIN;
uint64_t x626 = 291815440LLU;
static uint64_t x635 = 452LLU;
uint8_t x642 = 1U;
int16_t x651 = -1;
int32_t t162 = -3951;
static volatile int16_t x656 = -1;
static int32_t x660 = -1;
int32_t x661 = 0;
volatile int32_t t165 = 87013;
static volatile int32_t t166 = 2;
int16_t x670 = INT16_MIN;
static int8_t x671 = INT8_MIN;
volatile int32_t t169 = 2126252;
uint8_t x681 = 0U;
int16_t x683 = INT16_MIN;
int64_t x689 = INT64_MIN;
int16_t x694 = 10;
volatile int32_t t173 = -95673091;
uint64_t x706 = UINT64_MAX;
volatile int16_t x708 = INT16_MIN;
volatile uint16_t x711 = UINT16_MAX;
int16_t x712 = INT16_MAX;
uint16_t x714 = 222U;
static uint16_t x719 = 15891U;
volatile int16_t x721 = -6;
static int32_t x728 = 123222519;
volatile int32_t t181 = 50563557;
static int16_t x729 = -12292;
uint8_t x734 = UINT8_MAX;
static volatile int32_t t183 = -1479;
uint64_t x737 = 1875261368661827600LLU;
uint8_t x739 = 63U;
uint64_t x741 = 46226992613854109LLU;
int16_t x760 = -3506;
volatile uint8_t x763 = 11U;
volatile int16_t x767 = INT16_MAX;
static int32_t t191 = 4094004;
static volatile uint8_t x774 = 5U;
static volatile int16_t x778 = 2;
volatile int32_t t195 = -1685510;
uint16_t x785 = 73U;
int16_t x790 = INT16_MAX;
volatile uint64_t x794 = UINT64_MAX;
int32_t t198 = -1486;
uint64_t x798 = 1055LLU;
volatile int8_t x799 = INT8_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int64_t x2 = INT64_MAX;
	volatile int8_t x3 = -1;
	int64_t x4 = -1LL;
	int32_t t0 = 1921055;

    t0 = (((x1^x2)<=x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static uint16_t x6 = 1666U;
	int8_t x7 = INT8_MIN;
	static uint8_t x8 = 1U;
	int32_t t1 = 22089612;

    t1 = (((x5^x6)<=x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	static int32_t x10 = -48205;
	volatile int8_t x11 = INT8_MIN;
	static int32_t x12 = INT32_MIN;

    t2 = (((x9^x10)<=x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 6067U;
	volatile uint32_t x14 = 3386U;
	int8_t x15 = INT8_MIN;
	int32_t t3 = -4549;

    t3 = (((x13^x14)<=x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x18 = 2U;
	static int32_t x19 = -214913528;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -1;

    t4 = (((x17^x18)<=x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 2LLU;
	int16_t x23 = -186;

    t5 = (((x21^x22)<=x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -963602674LL;
	uint32_t x27 = 3U;
	uint32_t x28 = 513958U;

    t6 = (((x25^x26)<=x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static int64_t x30 = -2425029451327940LL;
	int64_t x32 = INT64_MIN;
	static int32_t t7 = -196631;

    t7 = (((x29^x30)<=x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	static uint64_t x35 = 129LLU;
	static int16_t x36 = -4;
	int32_t t8 = -63;

    t8 = (((x33^x34)<=x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 118U;
	int64_t x39 = INT64_MIN;
	volatile int32_t t9 = 1649;

    t9 = (((x37^x38)<=x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int32_t x42 = 61;
	volatile int32_t t10 = -2671;

    t10 = (((x41^x42)<=x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int64_t x46 = INT64_MAX;
	static int8_t x47 = INT8_MIN;
	int32_t x48 = 10229500;

    t11 = (((x45^x46)<=x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = -15;
	uint8_t x51 = 106U;
	uint32_t x52 = 33U;
	volatile int32_t t12 = -47540142;

    t12 = (((x49^x50)<=x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -3;
	volatile uint8_t x54 = UINT8_MAX;
	volatile int8_t x56 = INT8_MAX;
	int32_t t13 = 423;

    t13 = (((x53^x54)<=x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = -7538LL;
	int64_t x60 = -56017632LL;
	volatile int32_t t14 = -290798409;

    t14 = (((x57^x58)<=x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 381223U;
	static int64_t x62 = INT64_MIN;
	int64_t x63 = 34LL;
	int32_t x64 = 0;

    t15 = (((x61^x62)<=x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	static volatile int16_t x68 = -251;
	static int32_t t16 = -22;

    t16 = (((x65^x66)<=x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x69 = -1;
	int16_t x70 = -2892;
	volatile int8_t x71 = INT8_MAX;
	static int32_t t17 = -24294564;

    t17 = (((x69^x70)<=x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	volatile int16_t x76 = 9942;

    t18 = (((x73^x74)<=x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 888537888LLU;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = -1;
	static volatile int32_t t19 = 250;

    t19 = (((x77^x78)<=x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MAX;
	uint8_t x82 = 6U;
	int32_t x83 = -1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 1;

    t20 = (((x81^x82)<=x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 2067286864310851946LLU;
	uint32_t x88 = 4236091U;
	int32_t t21 = -53;

    t21 = (((x85^x86)<=x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x89 = UINT16_MAX;
	int64_t x90 = 118180580404913LL;
	int16_t x91 = 1;
	static int32_t x92 = -5;

    t22 = (((x89^x90)<=x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	int64_t x94 = -29864LL;
	int64_t x95 = 878758930749730LL;
	uint8_t x96 = 33U;
	volatile int32_t t23 = -786;

    t23 = (((x93^x94)<=x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	static volatile uint8_t x99 = 5U;
	int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -14;

    t24 = (((x97^x98)<=x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x103 = INT16_MIN;
	volatile int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -61;

    t25 = (((x101^x102)<=x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 9;
	volatile int32_t x107 = INT32_MAX;
	static uint8_t x108 = 30U;
	static volatile int32_t t26 = 839849;

    t26 = (((x105^x106)<=x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int8_t x110 = -1;
	volatile int8_t x111 = INT8_MIN;
	int32_t x112 = 731;
	int32_t t27 = -85;

    t27 = (((x109^x110)<=x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -17;
	int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 937571954279745LLU;
	int32_t t28 = 2;

    t28 = (((x113^x114)<=x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	uint64_t x119 = 30373686257720264LLU;
	int32_t x120 = -60;
	int32_t t29 = 0;

    t29 = (((x117^x118)<=x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	uint8_t x122 = 118U;
	int64_t x123 = INT64_MAX;

    t30 = (((x121^x122)<=x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	volatile int8_t x126 = -1;
	volatile int32_t t31 = 7255124;

    t31 = (((x125^x126)<=x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MAX;
	int64_t x130 = 9962532LL;
	uint8_t x132 = 45U;
	int32_t t32 = 100408997;

    t32 = (((x129^x130)<=x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = 34U;
	uint16_t x134 = 26592U;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 1U;
	static int32_t t33 = 45;

    t33 = (((x133^x134)<=x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static int16_t x138 = -1315;
	int64_t x139 = INT64_MIN;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -125579867;

    t34 = (((x137^x138)<=x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 15U;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 571U;
	volatile int32_t t35 = 0;

    t35 = (((x141^x142)<=x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 721U;
	volatile int32_t t36 = -13553744;

    t36 = (((x145^x146)<=x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	static uint16_t x151 = 0U;
	int32_t x152 = -1;
	int32_t t37 = -689759239;

    t37 = (((x149^x150)<=x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x153 = UINT8_MAX;
	volatile uint8_t x154 = 37U;
	volatile int16_t x155 = -9550;
	volatile int8_t x156 = -1;
	volatile int32_t t38 = 1;

    t38 = (((x153^x154)<=x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -32859306;
	int64_t x158 = 111482779015567LL;
	static volatile int64_t x159 = INT64_MIN;
	volatile uint16_t x160 = UINT16_MAX;

    t39 = (((x157^x158)<=x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x162 = 1U;
	int16_t x163 = -12596;
	volatile int16_t x164 = INT16_MAX;
	int32_t t40 = -24;

    t40 = (((x161^x162)<=x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	static int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 312;

    t41 = (((x165^x166)<=x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 2U;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	static int8_t x172 = -1;
	volatile int32_t t42 = 2;

    t42 = (((x169^x170)<=x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 0U;
	int8_t x174 = -1;
	uint16_t x175 = UINT16_MAX;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t43 = 0;

    t43 = (((x173^x174)<=x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x177 = 1408LL;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;

    t44 = (((x177^x178)<=x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x182 = 748;

    t45 = (((x181^x182)<=x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 21U;
	int8_t x186 = INT8_MAX;
	static volatile uint64_t x187 = 0LLU;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = -2895534;

    t46 = (((x185^x186)<=x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile uint64_t x190 = 202576648LLU;
	uint32_t x191 = 148775595U;
	uint32_t x192 = 3121868U;
	int32_t t47 = 50;

    t47 = (((x189^x190)<=x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 42984U;
	volatile int32_t x195 = INT32_MAX;
	volatile int32_t t48 = -12;

    t48 = (((x193^x194)<=x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x198 = 19;
	static int8_t x200 = -1;
	int32_t t49 = 2233101;

    t49 = (((x197^x198)<=x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x203 = INT32_MAX;
	volatile int16_t x204 = -8493;
	static int32_t t50 = -2286762;

    t50 = (((x201^x202)<=x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x205 = UINT64_MAX;
	static int32_t x206 = INT32_MIN;
	uint8_t x207 = UINT8_MAX;
	volatile uint32_t x208 = 56U;
	int32_t t51 = -1234331;

    t51 = (((x205^x206)<=x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x209 = INT32_MIN;
	uint64_t x210 = 126845LLU;
	volatile int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MAX;
	static int32_t t52 = 113760310;

    t52 = (((x209^x210)<=x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = -1;
	static uint32_t x215 = 349387141U;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t53 = -425;

    t53 = (((x213^x214)<=x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x219 = INT8_MAX;
	uint16_t x220 = 279U;

    t54 = (((x217^x218)<=x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = -1;
	volatile uint16_t x223 = 1622U;
	static uint64_t x224 = 4469241517026761470LLU;
	volatile int32_t t55 = 1826;

    t55 = (((x221^x222)<=x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = -1;
	volatile int16_t x226 = INT16_MIN;
	volatile int64_t x227 = INT64_MAX;
	volatile int32_t t56 = 49;

    t56 = (((x225^x226)<=x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	static int32_t x230 = 124946302;
	int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t57 = -1642727;

    t57 = (((x229^x230)<=x231)>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 30079775465LLU;
	int16_t x234 = -8161;
	uint8_t x235 = 20U;

    t58 = (((x233^x234)<=x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MAX;
	static volatile int32_t x239 = INT32_MAX;
	uint64_t x240 = UINT64_MAX;

    t59 = (((x237^x238)<=x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x241 = 57U;
	int64_t x242 = -11922739729514LL;
	static int64_t x244 = -1LL;
	volatile int32_t t60 = 0;

    t60 = (((x241^x242)<=x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	static int8_t x246 = -1;
	volatile uint16_t x247 = 658U;
	volatile int8_t x248 = INT8_MAX;

    t61 = (((x245^x246)<=x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	static uint32_t x251 = UINT32_MAX;
	static int8_t x252 = -4;

    t62 = (((x249^x250)<=x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int64_t x255 = INT64_MAX;
	volatile int64_t x256 = -4LL;
	volatile int32_t t63 = -57336;

    t63 = (((x253^x254)<=x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = -1;
	static volatile uint16_t x259 = 1338U;
	volatile int32_t t64 = -467959733;

    t64 = (((x257^x258)<=x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x262 = 39107LL;
	int16_t x263 = -898;
	int16_t x264 = 28;
	int32_t t65 = -29;

    t65 = (((x261^x262)<=x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	volatile int32_t t66 = 480784093;

    t66 = (((x265^x266)<=x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t67 = 16072907;

    t67 = (((x269^x270)<=x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	volatile int8_t x275 = INT8_MIN;
	int32_t x276 = -1;

    t68 = (((x273^x274)<=x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	static int32_t x278 = INT32_MIN;
	int32_t x279 = -1;
	static int32_t t69 = -17912956;

    t69 = (((x277^x278)<=x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x281 = INT64_MAX;
	int32_t x282 = INT32_MIN;
	uint8_t x284 = 0U;
	static volatile int32_t t70 = 5770765;

    t70 = (((x281^x282)<=x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = -7;

    t71 = (((x285^x286)<=x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = -1;
	uint64_t x290 = UINT64_MAX;
	int64_t x291 = 1075163764LL;
	int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 14441;

    t72 = (((x289^x290)<=x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 7U;
	uint64_t x295 = 1742421203853LLU;
	volatile uint32_t x296 = 68U;
	static volatile int32_t t73 = -1660;

    t73 = (((x293^x294)<=x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x298 = 15;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;

    t74 = (((x297^x298)<=x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x301 = 63763U;
	volatile int64_t x302 = -1LL;
	volatile uint8_t x303 = 4U;
	uint32_t x304 = UINT32_MAX;
	static int32_t t75 = 18;

    t75 = (((x301^x302)<=x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x305 = UINT32_MAX;
	volatile int16_t x306 = -1;
	volatile uint32_t x307 = 531954097U;
	int16_t x308 = 1258;
	volatile int32_t t76 = -452601270;

    t76 = (((x305^x306)<=x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -19675794;

    t77 = (((x309^x310)<=x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -4896;
	volatile int16_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static int64_t x316 = -1LL;
	int32_t t78 = 18348305;

    t78 = (((x313^x314)<=x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 1125847U;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;
	int32_t t79 = 0;

    t79 = (((x317^x318)<=x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MAX;
	int8_t x322 = 10;
	int16_t x323 = INT16_MAX;
	static int16_t x324 = INT16_MIN;
	int32_t t80 = -1761;

    t80 = (((x321^x322)<=x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 918;
	int32_t x328 = 1691251;
	int32_t t81 = -1304;

    t81 = (((x325^x326)<=x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 0U;
	int8_t x330 = INT8_MIN;
	volatile uint32_t x331 = 151157805U;
	volatile int32_t t82 = -37383037;

    t82 = (((x329^x330)<=x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x334 = UINT16_MAX;
	uint8_t x335 = 112U;
	volatile uint64_t x336 = UINT64_MAX;
	int32_t t83 = 42367;

    t83 = (((x333^x334)<=x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	uint64_t x338 = 212022LLU;
	volatile int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 13;

    t84 = (((x337^x338)<=x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	uint8_t x343 = 14U;
	volatile uint32_t x344 = UINT32_MAX;

    t85 = (((x341^x342)<=x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x345 = 5883U;
	int32_t x346 = INT32_MIN;
	static int8_t x347 = INT8_MIN;
	static int16_t x348 = INT16_MIN;
	static int32_t t86 = 7806;

    t86 = (((x345^x346)<=x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 54U;
	static volatile int32_t x350 = INT32_MIN;
	static volatile int8_t x351 = 3;
	int8_t x352 = -1;
	int32_t t87 = -1;

    t87 = (((x349^x350)<=x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x355 = -7;
	uint16_t x356 = 7U;

    t88 = (((x353^x354)<=x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = INT8_MAX;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = UINT32_MAX;

    t89 = (((x357^x358)<=x359)>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 3;
	uint64_t x362 = UINT64_MAX;
	volatile uint16_t x363 = UINT16_MAX;
	int64_t x364 = -1LL;
	volatile int32_t t90 = -2;

    t90 = (((x361^x362)<=x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = 1;
	static int8_t x366 = INT8_MAX;
	int32_t x367 = -1;
	uint16_t x368 = 6595U;
	int32_t t91 = 811522;

    t91 = (((x365^x366)<=x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x370 = 9U;
	volatile int32_t t92 = -355573;

    t92 = (((x369^x370)<=x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MIN;
	static uint16_t x374 = 3771U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = 5;
	int32_t t93 = -972;

    t93 = (((x373^x374)<=x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x380 = 24U;
	int32_t t94 = 1;

    t94 = (((x377^x378)<=x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int32_t t95 = 196144045;

    t95 = (((x381^x382)<=x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 0U;
	int64_t x386 = -46LL;

    t96 = (((x385^x386)<=x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MIN;
	static volatile int64_t x391 = INT64_MIN;
	volatile int32_t t97 = 81081918;

    t97 = (((x389^x390)<=x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -1;
	uint8_t x394 = 15U;
	static volatile uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MAX;
	static int32_t t98 = 162;

    t98 = (((x393^x394)<=x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MAX;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 237490;

    t99 = (((x397^x398)<=x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	static int32_t x403 = -1;
	volatile int32_t t100 = -1;

    t100 = (((x401^x402)<=x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x405 = -1;
	int64_t x406 = 398050311733498LL;
	int32_t x407 = -1;
	int32_t t101 = 85;

    t101 = (((x405^x406)<=x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -3;
	int64_t x411 = INT64_MIN;
	volatile int32_t x412 = INT32_MIN;
	static int32_t t102 = -1;

    t102 = (((x409^x410)<=x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	uint8_t x414 = UINT8_MAX;
	static int32_t x415 = -1;
	static int32_t x416 = INT32_MIN;
	volatile int32_t t103 = -1214372;

    t103 = (((x413^x414)<=x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -5416;
	int16_t x419 = 2;
	int16_t x420 = -2828;
	int32_t t104 = -131515897;

    t104 = (((x417^x418)<=x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = UINT32_MAX;
	int8_t x422 = INT8_MAX;
	uint64_t x423 = 74701LLU;
	int32_t t105 = -87454963;

    t105 = (((x421^x422)<=x423)>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x426 = 25U;
	volatile int16_t x427 = 62;

    t106 = (((x425^x426)<=x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x429 = 162175761U;
	int16_t x430 = INT16_MAX;
	int16_t x431 = INT16_MAX;
	static volatile int64_t x432 = -267818318298408LL;
	int32_t t107 = -2550;

    t107 = (((x429^x430)<=x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = 11173805624708LL;
	int64_t x434 = INT64_MAX;
	static int32_t x435 = 578046;
	volatile int32_t x436 = -1367927;
	int32_t t108 = 461462781;

    t108 = (((x433^x434)<=x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	volatile uint8_t x438 = UINT8_MAX;
	int64_t x439 = 6700031803LL;
	static int32_t t109 = 713;

    t109 = (((x437^x438)<=x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = -136492495;
	static uint32_t x442 = 803558U;
	uint64_t x443 = 13206935LLU;
	static int16_t x444 = -2;
	volatile int32_t t110 = -7685;

    t110 = (((x441^x442)<=x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x447 = INT32_MIN;
	int32_t t111 = -120055;

    t111 = (((x445^x446)<=x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 231683825691LLU;
	volatile int64_t x450 = INT64_MIN;
	uint16_t x451 = 16U;
	int8_t x452 = -1;
	volatile int32_t t112 = 149311844;

    t112 = (((x449^x450)<=x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = 233;
	int16_t x454 = -1;
	volatile int32_t t113 = 1;

    t113 = (((x453^x454)<=x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 1U;
	int8_t x458 = -1;
	uint64_t x460 = 60620LLU;
	int32_t t114 = -65263499;

    t114 = (((x457^x458)<=x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	uint8_t x464 = UINT8_MAX;
	int32_t t115 = 798;

    t115 = (((x461^x462)<=x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	uint8_t x466 = 73U;
	volatile uint8_t x468 = 0U;
	static volatile int32_t t116 = 3;

    t116 = (((x465^x466)<=x467)>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = 289747671U;
	int64_t x470 = INT64_MIN;
	uint32_t x471 = 415155768U;
	int8_t x472 = -2;
	volatile int32_t t117 = -380203141;

    t117 = (((x469^x470)<=x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	int32_t x474 = INT32_MIN;
	int16_t x475 = INT16_MIN;
	int64_t x476 = -1LL;

    t118 = (((x473^x474)<=x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	uint8_t x478 = 3U;
	int32_t x479 = INT32_MIN;
	uint64_t x480 = 69567LLU;
	int32_t t119 = 50897;

    t119 = (((x477^x478)<=x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = 150U;
	static volatile int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t120 = -1;

    t120 = (((x481^x482)<=x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	uint32_t x486 = 1631855U;
	int8_t x487 = INT8_MAX;
	static int8_t x488 = INT8_MIN;
	static int32_t t121 = 16814;

    t121 = (((x485^x486)<=x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x490 = 18054U;
	uint8_t x491 = 20U;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 245;

    t122 = (((x489^x490)<=x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MIN;
	int32_t x495 = -77;

    t123 = (((x493^x494)<=x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MAX;
	int32_t x498 = -1;
	int16_t x499 = -20;
	uint32_t x500 = 4U;
	int32_t t124 = 38600239;

    t124 = (((x497^x498)<=x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = INT64_MIN;
	int16_t x503 = 3;
	int8_t x504 = -1;
	volatile int32_t t125 = 12;

    t125 = (((x501^x502)<=x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = UINT8_MAX;
	int32_t x507 = -1;
	int8_t x508 = -1;
	static volatile int32_t t126 = 995929;

    t126 = (((x505^x506)<=x507)>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x510 = 21U;
	int16_t x511 = 6;
	int32_t x512 = INT32_MAX;

    t127 = (((x509^x510)<=x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = -635;
	int16_t x515 = INT16_MAX;
	static int32_t x516 = INT32_MAX;
	static volatile int32_t t128 = 7;

    t128 = (((x513^x514)<=x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int64_t x518 = -85238555LL;
	int8_t x519 = INT8_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = 1540629;

    t129 = (((x517^x518)<=x519)>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 43587658;
	uint16_t x522 = 1U;
	volatile int8_t x523 = INT8_MIN;
	int8_t x524 = -1;
	volatile int32_t t130 = 263371692;

    t130 = (((x521^x522)<=x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x526 = -1;
	volatile int32_t x528 = INT32_MIN;
	volatile int32_t t131 = 117;

    t131 = (((x525^x526)<=x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int64_t x530 = INT64_MIN;
	uint8_t x531 = 3U;
	uint64_t x532 = 407353977651271LLU;
	volatile int32_t t132 = -174454;

    t132 = (((x529^x530)<=x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 1490737LLU;
	int64_t x534 = INT64_MIN;
	volatile uint32_t x535 = 28963278U;
	uint8_t x536 = UINT8_MAX;
	static int32_t t133 = -1;

    t133 = (((x533^x534)<=x535)>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x537 = -62781;
	int16_t x538 = INT16_MIN;
	int8_t x539 = 12;
	volatile uint64_t x540 = UINT64_MAX;

    t134 = (((x537^x538)<=x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 0U;
	static volatile int8_t x542 = INT8_MIN;
	volatile int64_t x543 = INT64_MIN;
	int8_t x544 = INT8_MAX;
	int32_t t135 = 4895;

    t135 = (((x541^x542)<=x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	volatile int32_t x546 = INT32_MIN;
	int8_t x547 = 1;
	int32_t x548 = INT32_MIN;
	volatile int32_t t136 = -476;

    t136 = (((x545^x546)<=x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x550 = -1LL;
	int32_t x551 = INT32_MIN;
	volatile int64_t x552 = 60346618LL;
	volatile int32_t t137 = -123;

    t137 = (((x549^x550)<=x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = UINT32_MAX;
	int8_t x554 = -1;
	static int64_t x555 = -1LL;
	static uint8_t x556 = 75U;
	int32_t t138 = -5;

    t138 = (((x553^x554)<=x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	int64_t x559 = INT64_MAX;
	volatile int16_t x560 = INT16_MIN;
	volatile int32_t t139 = 329927;

    t139 = (((x557^x558)<=x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = -4;
	int16_t x563 = 50;
	static uint32_t x564 = UINT32_MAX;

    t140 = (((x561^x562)<=x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	int32_t t141 = 1759;

    t141 = (((x565^x566)<=x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	static int64_t x570 = -1LL;
	uint32_t x572 = 38644360U;
	int32_t t142 = -1;

    t142 = (((x569^x570)<=x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x574 = INT8_MIN;
	volatile uint64_t x575 = 175LLU;
	int32_t x576 = INT32_MAX;
	volatile int32_t t143 = -3027718;

    t143 = (((x573^x574)<=x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x579 = 60802675827750LL;
	uint16_t x580 = 58U;
	volatile int32_t t144 = 14;

    t144 = (((x577^x578)<=x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x581 = UINT32_MAX;
	static uint16_t x582 = 179U;
	static int16_t x583 = -1;
	int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 193;

    t145 = (((x581^x582)<=x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	uint32_t x586 = 9948117U;
	volatile uint32_t x587 = 259U;
	int32_t t146 = -406465972;

    t146 = (((x585^x586)<=x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x591 = INT32_MIN;
	uint8_t x592 = 37U;
	int32_t t147 = -2587;

    t147 = (((x589^x590)<=x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x595 = 718062030LL;
	int64_t x596 = INT64_MIN;
	static int32_t t148 = 999422954;

    t148 = (((x593^x594)<=x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -239;
	int16_t x598 = -3;
	static int8_t x600 = -1;
	static volatile int32_t t149 = 18792955;

    t149 = (((x597^x598)<=x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x603 = 20;
	int16_t x604 = INT16_MIN;

    t150 = (((x601^x602)<=x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 15U;
	int8_t x608 = -1;
	int32_t t151 = -4312;

    t151 = (((x605^x606)<=x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = 50LLU;
	uint8_t x611 = 57U;
	volatile int32_t x612 = INT32_MIN;
	int32_t t152 = -64424;

    t152 = (((x609^x610)<=x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	int16_t x614 = 358;
	uint8_t x615 = 1U;
	int8_t x616 = INT8_MAX;
	int32_t t153 = 1;

    t153 = (((x613^x614)<=x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = 81713743605105437LLU;
	int8_t x618 = -1;
	int32_t t154 = 338617;

    t154 = (((x617^x618)<=x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = 978;
	static uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 735522806842LLU;
	static int64_t x624 = INT64_MAX;
	volatile int32_t t155 = 4;

    t155 = (((x621^x622)<=x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -1;
	int8_t x627 = INT8_MAX;
	int8_t x628 = 0;
	int32_t t156 = 10551;

    t156 = (((x625^x626)<=x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = INT32_MIN;
	static int32_t x630 = INT32_MAX;
	static int8_t x631 = 2;
	uint8_t x632 = UINT8_MAX;
	static int32_t t157 = 1;

    t157 = (((x629^x630)<=x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -384968;
	int8_t x634 = -1;
	volatile uint16_t x636 = 4950U;
	int32_t t158 = -1281581;

    t158 = (((x633^x634)<=x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = -1;
	uint64_t x638 = 1198667818707943163LLU;
	int8_t x639 = -1;
	uint64_t x640 = 290LLU;
	int32_t t159 = 378521;

    t159 = (((x637^x638)<=x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = UINT32_MAX;
	volatile int8_t x643 = INT8_MAX;
	uint32_t x644 = 1866U;
	volatile int32_t t160 = 80;

    t160 = (((x641^x642)<=x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = 0;
	uint16_t x646 = 1554U;
	int8_t x647 = -1;
	volatile int64_t x648 = INT64_MIN;
	int32_t t161 = 25677367;

    t161 = (((x645^x646)<=x647)>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = 1;
	int8_t x650 = 1;
	int8_t x652 = INT8_MIN;

    t162 = (((x649^x650)<=x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -169;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = -1;
	volatile int32_t t163 = -225913095;

    t163 = (((x653^x654)<=x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x657 = 129025068571LLU;
	uint64_t x658 = UINT64_MAX;
	volatile int64_t x659 = -1LL;
	volatile int32_t t164 = 1;

    t164 = (((x657^x658)<=x659)>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x662 = 3LLU;
	int32_t x663 = INT32_MIN;
	volatile uint16_t x664 = 14U;

    t165 = (((x661^x662)<=x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x665 = 1390790000LLU;
	int32_t x666 = -2767934;
	int16_t x667 = INT16_MIN;
	volatile int32_t x668 = -327502582;

    t166 = (((x665^x666)<=x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	int32_t x672 = -1;
	volatile int32_t t167 = -253951;

    t167 = (((x669^x670)<=x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	static int16_t x674 = -148;
	uint16_t x675 = 1538U;
	int64_t x676 = INT64_MAX;
	int32_t t168 = 105;

    t168 = (((x673^x674)<=x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	static uint8_t x678 = UINT8_MAX;
	int64_t x679 = INT64_MIN;
	uint16_t x680 = UINT16_MAX;

    t169 = (((x677^x678)<=x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x682 = -1;
	int8_t x684 = -7;
	int32_t t170 = -7;

    t170 = (((x681^x682)<=x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 6;
	volatile int64_t x686 = -1LL;
	volatile int32_t x687 = -1;
	uint8_t x688 = 1U;
	int32_t t171 = -681769;

    t171 = (((x685^x686)<=x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x690 = -113LL;
	int8_t x691 = INT8_MIN;
	uint64_t x692 = 1967956342209296716LLU;
	int32_t t172 = -2094548;

    t172 = (((x689^x690)<=x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = -1;
	int8_t x695 = -1;
	int64_t x696 = -1LL;

    t173 = (((x693^x694)<=x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = 88780371;
	int16_t x698 = 270;
	volatile int32_t x699 = 1046078;
	int16_t x700 = -42;
	static volatile int32_t t174 = 1;

    t174 = (((x697^x698)<=x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 2U;
	volatile uint16_t x702 = UINT16_MAX;
	uint16_t x703 = UINT16_MAX;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int32_t t175 = 192;

    t175 = (((x701^x702)<=x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -5255297LL;
	static uint64_t x707 = UINT64_MAX;
	int32_t t176 = 220;

    t176 = (((x705^x706)<=x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	int16_t x710 = 9185;
	volatile int32_t t177 = 1500828;

    t177 = (((x709^x710)<=x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 77244U;
	int16_t x715 = INT16_MIN;
	volatile uint64_t x716 = UINT64_MAX;
	volatile int32_t t178 = 544;

    t178 = (((x713^x714)<=x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	volatile uint32_t x718 = UINT32_MAX;
	static volatile int16_t x720 = -777;
	static int32_t t179 = -1;

    t179 = (((x717^x718)<=x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x722 = 0U;
	volatile int64_t x723 = -1LL;
	static int64_t x724 = -1LL;
	volatile int32_t t180 = -6;

    t180 = (((x721^x722)<=x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = UINT16_MAX;
	volatile int8_t x726 = INT8_MAX;
	volatile uint32_t x727 = 143U;

    t181 = (((x725^x726)<=x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x730 = 14588;
	int16_t x731 = INT16_MIN;
	volatile uint8_t x732 = 9U;
	static int32_t t182 = -1;

    t182 = (((x729^x730)<=x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 11U;
	volatile uint64_t x735 = 57832194299762264LLU;
	int64_t x736 = 7187451016707256LL;

    t183 = (((x733^x734)<=x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x738 = UINT16_MAX;
	uint16_t x740 = 10U;
	volatile int32_t t184 = 7321349;

    t184 = (((x737^x738)<=x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x742 = 19U;
	uint64_t x743 = 1574LLU;
	int32_t x744 = INT32_MIN;
	volatile int32_t t185 = 2148230;

    t185 = (((x741^x742)<=x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	volatile uint32_t x746 = 12U;
	int32_t x747 = INT32_MAX;
	int64_t x748 = -1LL;
	int32_t t186 = -767676232;

    t186 = (((x745^x746)<=x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 118910U;
	int64_t x750 = INT64_MIN;
	uint32_t x751 = 1105997U;
	volatile int16_t x752 = INT16_MAX;
	int32_t t187 = 3679;

    t187 = (((x749^x750)<=x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = -2646526967615426LL;
	int16_t x754 = INT16_MAX;
	uint64_t x755 = 58755573LLU;
	uint16_t x756 = 102U;
	volatile int32_t t188 = 52;

    t188 = (((x753^x754)<=x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	static uint16_t x758 = 1U;
	int8_t x759 = INT8_MIN;
	volatile int32_t t189 = -23;

    t189 = (((x757^x758)<=x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = -24605;
	int64_t x762 = -1LL;
	int16_t x764 = -4320;
	volatile int32_t t190 = 88311409;

    t190 = (((x761^x762)<=x763)>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1LL;
	uint8_t x766 = 2U;
	int32_t x768 = -21845;

    t191 = (((x765^x766)<=x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int16_t x770 = INT16_MIN;
	volatile uint32_t x771 = UINT32_MAX;
	int32_t x772 = 70971;
	int32_t t192 = 915;

    t192 = (((x769^x770)<=x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	static volatile int64_t x775 = -1LL;
	volatile int32_t x776 = -1;
	int32_t t193 = 282;

    t193 = (((x773^x774)<=x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	int64_t x779 = -1LL;
	uint16_t x780 = 447U;
	volatile int32_t t194 = 1;

    t194 = (((x777^x778)<=x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 665607642754362533LLU;
	volatile uint16_t x782 = UINT16_MAX;
	int64_t x783 = INT64_MIN;
	int32_t x784 = -1;

    t195 = (((x781^x782)<=x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x786 = -1;
	int8_t x787 = INT8_MIN;
	volatile uint16_t x788 = UINT16_MAX;
	int32_t t196 = -1;

    t196 = (((x785^x786)<=x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 2129317382U;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = INT64_MAX;
	int32_t t197 = -50825;

    t197 = (((x789^x790)<=x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = 58;
	int64_t x795 = 17416LL;
	uint16_t x796 = 6700U;

    t198 = (((x793^x794)<=x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x797 = 522U;
	int32_t x800 = 145;
	int32_t t199 = 387;

    t199 = (((x797^x798)<=x799)>x800);

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

