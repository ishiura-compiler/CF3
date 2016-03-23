
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

volatile int8_t x1 = INT8_MIN;
uint32_t x2 = 1579681U;
volatile int8_t x4 = 0;
uint64_t x5 = UINT64_MAX;
uint64_t x6 = 6LLU;
volatile int32_t t1 = 414;
int32_t x15 = 1;
static int32_t x17 = INT32_MIN;
volatile int8_t x20 = INT8_MIN;
uint8_t x22 = 2U;
int16_t x25 = INT16_MAX;
volatile uint16_t x26 = UINT16_MAX;
static int32_t x32 = INT32_MAX;
int64_t x34 = 6904375680628LL;
int16_t x39 = -1;
static int64_t x42 = INT64_MAX;
uint8_t x56 = 2U;
volatile int64_t t15 = 0LL;
int64_t x68 = -8782962LL;
int16_t x88 = INT16_MIN;
int32_t t22 = 104221;
static volatile uint64_t t23 = 57424LLU;
uint8_t x100 = UINT8_MAX;
static volatile int32_t x108 = INT32_MIN;
int64_t x114 = 104279294567LL;
int8_t x120 = INT8_MIN;
volatile int32_t t29 = 10;
static uint32_t x123 = 450U;
volatile uint32_t t30 = 2955732U;
uint32_t x133 = 39929369U;
int32_t x136 = INT32_MIN;
int32_t x142 = 13136416;
int64_t x145 = -1LL;
volatile int16_t x149 = -1;
static int32_t x151 = INT32_MAX;
int16_t x154 = -1;
volatile int32_t t38 = -406373;
volatile int16_t x166 = INT16_MIN;
int32_t x167 = INT32_MIN;
int32_t t45 = -1787;
static uint8_t x187 = 27U;
int16_t x193 = INT16_MIN;
uint32_t x195 = 28U;
int16_t x201 = -5973;
uint64_t t50 = 34312954931086043LLU;
int64_t x206 = 3LL;
volatile int32_t t51 = 41;
int8_t x212 = 0;
volatile int32_t x221 = -1;
int8_t x223 = INT8_MAX;
int8_t x227 = -1;
int32_t x231 = INT32_MAX;
volatile uint32_t t59 = 153U;
int8_t x241 = INT8_MIN;
volatile int32_t x242 = -1;
uint32_t x245 = 852738188U;
volatile int16_t x247 = -1;
uint64_t x250 = UINT64_MAX;
volatile int32_t t64 = 15316532;
int32_t x262 = -1;
volatile int8_t x265 = INT8_MIN;
uint8_t x272 = 4U;
volatile int32_t t67 = 3;
static volatile int32_t x276 = INT32_MIN;
static int8_t x277 = INT8_MIN;
int16_t x282 = INT16_MIN;
static uint32_t x284 = UINT32_MAX;
volatile int64_t x285 = 1LL;
int32_t t71 = -1;
int16_t x289 = INT16_MIN;
volatile int32_t t72 = 0;
int8_t x293 = INT8_MAX;
int16_t x295 = INT16_MAX;
static int16_t x299 = INT16_MIN;
static uint8_t x302 = UINT8_MAX;
volatile uint32_t x322 = UINT32_MAX;
int32_t t81 = -28;
static uint64_t x331 = 1LLU;
uint32_t x336 = 9202U;
uint32_t t83 = 145U;
static uint64_t x347 = 1164633479211952711LLU;
int8_t x351 = INT8_MAX;
int32_t x356 = INT32_MIN;
int8_t x358 = INT8_MIN;
int32_t x362 = INT32_MIN;
int32_t t90 = -153681;
uint8_t x366 = 90U;
uint32_t x368 = 1939U;
uint32_t t91 = 79928356U;
int64_t x369 = INT64_MIN;
int32_t x372 = INT32_MIN;
volatile int32_t t92 = INT32_MIN;
static uint32_t x374 = UINT32_MAX;
volatile int16_t x380 = INT16_MIN;
int32_t t97 = 5338;
int8_t x396 = INT8_MIN;
int32_t x400 = INT32_MAX;
int32_t t101 = 24717055;
uint8_t x410 = 1U;
int32_t x411 = -7;
uint64_t x414 = 98006LLU;
int64_t x432 = INT64_MIN;
volatile int8_t x435 = -1;
static uint32_t x440 = 168065224U;
volatile int16_t x443 = 292;
uint64_t x456 = 26855LLU;
uint32_t t114 = UINT32_MAX;
static int16_t x463 = -1;
int16_t x471 = INT16_MAX;
uint64_t t117 = 38339446LLU;
int32_t x473 = INT32_MIN;
int8_t x475 = INT8_MIN;
int16_t x481 = 4;
volatile int32_t t121 = -2189957;
int32_t x501 = INT32_MIN;
int32_t t126 = 842259;
int32_t x521 = INT32_MIN;
static int32_t x522 = -1;
volatile uint32_t x524 = 982900U;
int8_t x525 = -4;
static volatile int16_t x527 = -1;
uint64_t x531 = 23LLU;
int32_t t132 = -3682;
int16_t x536 = -4283;
int64_t t134 = 134080902986LL;
volatile uint16_t x549 = 177U;
int16_t x551 = INT16_MIN;
uint8_t x553 = UINT8_MAX;
static int32_t t139 = -175;
volatile int32_t x562 = INT32_MIN;
int32_t x566 = INT32_MAX;
int8_t x567 = 0;
static int8_t x570 = -1;
static int8_t x573 = INT8_MIN;
uint8_t x574 = 10U;
int16_t x590 = INT16_MIN;
int32_t x592 = INT32_MAX;
volatile int32_t t147 = -2642270;
volatile uint8_t x600 = 36U;
int32_t t150 = 1;
int8_t x606 = 1;
int32_t t151 = -3767964;
uint8_t x609 = 0U;
uint32_t t152 = 1544493U;
static int8_t x619 = INT8_MIN;
int64_t x624 = -405943274LL;
static volatile int32_t t156 = 6;
static int32_t t157 = 50;
volatile int64_t x636 = -1LL;
volatile int64_t t158 = 18140793196245LL;
volatile int32_t t160 = 281808;
int8_t x646 = -26;
uint16_t x651 = 4426U;
int16_t x661 = INT16_MIN;
volatile int32_t x663 = INT32_MAX;
volatile uint32_t x671 = 3156U;
volatile int32_t t167 = -173351;
int32_t x674 = -62066508;
static uint16_t x677 = 5U;
static int8_t x678 = 0;
uint32_t x681 = 2937447U;
int32_t x685 = INT32_MAX;
static uint32_t x687 = 13546657U;
volatile int32_t t171 = INT32_MAX;
int8_t x689 = -1;
volatile int64_t t172 = INT64_MIN;
volatile int32_t x696 = 2034007;
int16_t x704 = -4;
volatile uint16_t x707 = UINT16_MAX;
volatile uint64_t x712 = 542893519626138497LLU;
volatile uint64_t t177 = 33711594LLU;
int16_t x715 = INT16_MIN;
int32_t t179 = -150;
volatile uint32_t t180 = 246005781U;
uint32_t x727 = UINT32_MAX;
int32_t t181 = 252;
int8_t x730 = INT8_MAX;
volatile uint64_t x732 = UINT64_MAX;
int8_t x744 = INT8_MIN;
volatile uint16_t x748 = 15430U;
static uint8_t x752 = UINT8_MAX;
int64_t x753 = -146274541LL;
static int64_t t192 = INT64_MIN;
int32_t x775 = INT32_MIN;
int16_t x782 = INT16_MIN;
int16_t x790 = 74;
int8_t x792 = INT8_MIN;
int32_t t197 = 374613;
volatile int64_t x798 = INT64_MAX;
static uint32_t x799 = 99017U;


void f0(void) {
    	int64_t x3 = INT64_MAX;
	int32_t t0 = -3765;

    t0 = (((x1>x2)<=x3)*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x7 = 43U;
	volatile int16_t x8 = -23;

    t1 = (((x5>x6)<=x7)*x8);

    if (t1 != -23) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -65;
	int8_t x10 = INT8_MIN;
	int64_t x11 = INT64_MIN;
	int32_t x12 = 1023518625;
	volatile int32_t t2 = -42220;

    t2 = (((x9>x10)<=x11)*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -422;

    t3 = (((x13>x14)<=x15)*x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int32_t t4 = 482;

    t4 = (((x17>x18)<=x19)*x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	static uint32_t x23 = 40132466U;
	int8_t x24 = -1;
	int32_t t5 = -464578571;

    t5 = (((x21>x22)<=x23)*x24);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = 13;
	int8_t x28 = -1;
	int32_t t6 = 1352502;

    t6 = (((x25>x26)<=x27)*x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	static int16_t x31 = -1;
	volatile int32_t t7 = 7137245;

    t7 = (((x29>x30)<=x31)*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	uint64_t x35 = 652LLU;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t8 = INT32_MIN;

    t8 = (((x33>x34)<=x35)*x36);

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	volatile int16_t x38 = INT16_MIN;
	int16_t x40 = -1;
	volatile int32_t t9 = -1771;

    t9 = (((x37>x38)<=x39)*x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 498373647U;
	volatile int8_t x43 = -1;
	int64_t x44 = 3512211214669LL;
	volatile int64_t t10 = -3116145348720103LL;

    t10 = (((x41>x42)<=x43)*x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	static int64_t x46 = INT64_MIN;
	volatile uint16_t x47 = UINT16_MAX;
	volatile int8_t x48 = INT8_MAX;
	int32_t t11 = 19;

    t11 = (((x45>x46)<=x47)*x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	static int16_t x50 = INT16_MIN;
	volatile int16_t x51 = INT16_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = INT32_MIN;

    t12 = (((x49>x50)<=x51)*x52);

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x53 = INT8_MIN;
	static int64_t x54 = -59639625LL;
	int16_t x55 = INT16_MAX;
	static volatile int32_t t13 = -337596963;

    t13 = (((x53>x54)<=x55)*x56);

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1539979667854LL;
	int64_t x58 = INT64_MIN;
	volatile uint16_t x59 = 7481U;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 2012031;

    t14 = (((x57>x58)<=x59)*x60);

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 3LLU;
	volatile uint64_t x62 = UINT64_MAX;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -28LL;

    t15 = (((x61>x62)<=x63)*x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 78;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MAX;
	static int64_t t16 = -20000227LL;

    t16 = (((x65>x66)<=x67)*x68);

    if (t16 != -8782962LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 11U;
	volatile uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = -808;
	volatile int8_t x72 = 43;
	int32_t t17 = -14389;

    t17 = (((x69>x70)<=x71)*x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int32_t x74 = 1;
	static uint32_t x75 = UINT32_MAX;
	static int32_t x76 = -4;
	int32_t t18 = -278;

    t18 = (((x73>x74)<=x75)*x76);

    if (t18 != -4) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = INT32_MAX;
	volatile int32_t x79 = 102;
	uint8_t x80 = 3U;
	int32_t t19 = -14229;

    t19 = (((x77>x78)<=x79)*x80);

    if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MAX;
	uint16_t x83 = UINT16_MAX;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

    t20 = (((x81>x82)<=x83)*x84);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	volatile uint16_t x86 = 1877U;
	volatile int16_t x87 = INT16_MIN;
	volatile int32_t t21 = 2006607;

    t21 = (((x85>x86)<=x87)*x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	uint8_t x90 = 47U;
	int16_t x91 = -9;
	static uint16_t x92 = 30U;

    t22 = (((x89>x90)<=x91)*x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint32_t x94 = 226U;
	static int16_t x95 = -1;
	static uint64_t x96 = 368058652LLU;

    t23 = (((x93>x94)<=x95)*x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 452158450LLU;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = 56335U;
	static volatile int32_t t24 = 26970;

    t24 = (((x97>x98)<=x99)*x100);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	static volatile int8_t x103 = 1;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -657523;

    t25 = (((x101>x102)<=x103)*x104);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 2;
	volatile int64_t x106 = 237LL;
	uint32_t x107 = 5726U;
	int32_t t26 = INT32_MIN;

    t26 = (((x105>x106)<=x107)*x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = -2030LL;
	int32_t x110 = INT32_MAX;
	int64_t x111 = -1LL;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = 397986543;

    t27 = (((x109>x110)<=x111)*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 6426LL;
	int16_t x115 = INT16_MIN;
	int16_t x116 = INT16_MAX;
	static int32_t t28 = -10;

    t28 = (((x113>x114)<=x115)*x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MAX;
	static uint64_t x118 = 59590191076431LLU;
	static volatile int8_t x119 = INT8_MIN;

    t29 = (((x117>x118)<=x119)*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	int16_t x122 = INT16_MIN;
	uint32_t x124 = 2U;

    t30 = (((x121>x122)<=x123)*x124);

    if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = INT64_MIN;
	volatile uint32_t x126 = 8U;
	int8_t x127 = -1;
	uint8_t x128 = 0U;
	int32_t t31 = 33320;

    t31 = (((x125>x126)<=x127)*x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	int8_t x132 = -1;
	volatile int32_t t32 = 1;

    t32 = (((x129>x130)<=x131)*x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x134 = -1;
	uint16_t x135 = 31606U;
	static int32_t t33 = INT32_MIN;

    t33 = (((x133>x134)<=x135)*x136);

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = UINT8_MAX;
	static volatile int32_t x138 = 5575;
	int16_t x139 = INT16_MIN;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 8;

    t34 = (((x137>x138)<=x139)*x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int64_t x143 = -1LL;
	volatile uint16_t x144 = UINT16_MAX;
	int32_t t35 = 1585;

    t35 = (((x141>x142)<=x143)*x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = INT32_MIN;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = INT32_MAX;

    t36 = (((x145>x146)<=x147)*x148);

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = UINT8_MAX;
	int32_t x152 = 5907;
	int32_t t37 = -1822953;

    t37 = (((x149>x150)<=x151)*x152);

    if (t37 != 5907) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 29U;

    t38 = (((x153>x154)<=x155)*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x157 = UINT16_MAX;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -13444;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -370;

    t39 = (((x157>x158)<=x159)*x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 17005U;
	int16_t x162 = 2238;
	uint8_t x163 = 66U;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t40 = -69389680;

    t40 = (((x161>x162)<=x163)*x164);

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	uint64_t x168 = 4125798LLU;
	volatile uint64_t t41 = 2966759339469907LLU;

    t41 = (((x165>x166)<=x167)*x168);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -1;
	uint64_t x170 = 2042697277LLU;
	int32_t x171 = 15956947;
	volatile int16_t x172 = 0;
	volatile int32_t t42 = 1684737;

    t42 = (((x169>x170)<=x171)*x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 4104168478539702LLU;
	int64_t x174 = -3401994LL;
	volatile uint64_t x175 = 914655626449898157LLU;
	volatile int64_t x176 = -14728967LL;
	volatile int64_t t43 = -1007694LL;

    t43 = (((x173>x174)<=x175)*x176);

    if (t43 != -14728967LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	static uint64_t x178 = 2329050LLU;
	int16_t x179 = INT16_MAX;
	int64_t x180 = -1LL;
	int64_t t44 = 7LL;

    t44 = (((x177>x178)<=x179)*x180);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MAX;
	static int16_t x182 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;

    t45 = (((x181>x182)<=x183)*x184);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1343;
	uint8_t x186 = UINT8_MAX;
	int16_t x188 = -114;
	static int32_t t46 = 104583664;

    t46 = (((x185>x186)<=x187)*x188);

    if (t46 != -114) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 2U;
	int64_t x190 = INT64_MIN;
	int8_t x191 = -1;
	volatile int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = 29;

    t47 = (((x189>x190)<=x191)*x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MIN;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

    t48 = (((x193>x194)<=x195)*x196);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 123U;
	uint32_t x198 = 421082886U;
	uint16_t x199 = 12U;
	uint16_t x200 = 0U;
	volatile int32_t t49 = 0;

    t49 = (((x197>x198)<=x199)*x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 3U;
	volatile int16_t x203 = -1273;
	uint64_t x204 = 0LLU;

    t50 = (((x201>x202)<=x203)*x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 28LLU;
	uint16_t x207 = 2784U;
	int16_t x208 = INT16_MAX;

    t51 = (((x205>x206)<=x207)*x208);

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int64_t x210 = -46122499514450665LL;
	int16_t x211 = 0;
	int32_t t52 = 610879441;

    t52 = (((x209>x210)<=x211)*x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 0U;
	volatile int8_t x214 = 1;
	int8_t x215 = INT8_MAX;
	static uint16_t x216 = 7U;
	volatile int32_t t53 = 339;

    t53 = (((x213>x214)<=x215)*x216);

    if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	uint32_t x219 = 4026239U;
	volatile int32_t x220 = INT32_MAX;
	static int32_t t54 = INT32_MAX;

    t54 = (((x217>x218)<=x219)*x220);

    if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x222 = -5;
	uint8_t x224 = 2U;
	int32_t t55 = 1131763;

    t55 = (((x221>x222)<=x223)*x224);

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 3624LLU;
	int16_t x226 = 4;
	static int8_t x228 = -1;
	volatile int32_t t56 = -1851667;

    t56 = (((x225>x226)<=x227)*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 424U;
	static volatile int16_t x230 = INT16_MIN;
	int32_t x232 = 207309;
	int32_t t57 = 555596885;

    t57 = (((x229>x230)<=x231)*x232);

    if (t57 != 207309) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -1;
	uint16_t x234 = 1U;
	volatile int16_t x235 = -1;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -2;

    t58 = (((x233>x234)<=x235)*x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = -1081LL;
	uint64_t x238 = 5LLU;
	uint16_t x239 = 7654U;
	volatile uint32_t x240 = 447947U;

    t59 = (((x237>x238)<=x239)*x240);

    if (t59 != 447947U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x243 = 2063514569759LLU;
	volatile int64_t x244 = -11LL;
	int64_t t60 = -1LL;

    t60 = (((x241>x242)<=x243)*x244);

    if (t60 != -11LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = UINT64_MAX;
	volatile int32_t x248 = -1;
	volatile int32_t t61 = -7;

    t61 = (((x245>x246)<=x247)*x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 9;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = -1;
	volatile int32_t t62 = -416457497;

    t62 = (((x249>x250)<=x251)*x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 536040457116LLU;
	static volatile int16_t x254 = INT16_MIN;
	volatile int64_t x255 = 349246902714956LL;
	int32_t x256 = INT32_MAX;
	volatile int32_t t63 = INT32_MAX;

    t63 = (((x253>x254)<=x255)*x256);

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x257 = UINT16_MAX;
	int32_t x258 = 7281209;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -5111;

    t64 = (((x257>x258)<=x259)*x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -15501LL;
	volatile uint8_t x263 = 6U;
	int32_t x264 = -183771;
	static volatile int32_t t65 = 589929;

    t65 = (((x261>x262)<=x263)*x264);

    if (t65 != -183771) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = INT64_MIN;
	static uint64_t x267 = 211053932800140LLU;
	volatile uint64_t x268 = 7LLU;
	uint64_t t66 = 640993137LLU;

    t66 = (((x265>x266)<=x267)*x268);

    if (t66 != 7LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x269 = 67U;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;

    t67 = (((x269>x270)<=x271)*x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	uint32_t x275 = 545652372U;
	volatile int32_t t68 = INT32_MIN;

    t68 = (((x273>x274)<=x275)*x276);

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x278 = 60U;
	volatile int16_t x279 = INT16_MAX;
	int32_t x280 = -184;
	static int32_t t69 = -340;

    t69 = (((x277>x278)<=x279)*x280);

    if (t69 != -184) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 117089239844173LL;
	int64_t x283 = -202772308LL;
	static uint32_t t70 = 5376U;

    t70 = (((x281>x282)<=x283)*x284);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = 90944;
	uint32_t x287 = 108866U;
	int16_t x288 = 216;

    t71 = (((x285>x286)<=x287)*x288);

    if (t71 != 216) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MIN;

    t72 = (((x289>x290)<=x291)*x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = UINT32_MAX;
	uint8_t x296 = 1U;
	volatile int32_t t73 = 67172685;

    t73 = (((x293>x294)<=x295)*x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 925228206012415LLU;
	static int16_t x298 = -1;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 3036821;

    t74 = (((x297>x298)<=x299)*x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -1;
	volatile int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	int32_t t75 = -29671533;

    t75 = (((x301>x302)<=x303)*x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = 4;
	uint32_t x306 = UINT32_MAX;
	static int8_t x307 = INT8_MIN;
	static int64_t x308 = -1LL;
	int64_t t76 = 666773LL;

    t76 = (((x305>x306)<=x307)*x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 7556435U;
	static int8_t x310 = INT8_MIN;
	int32_t x311 = -1;
	int64_t x312 = INT64_MIN;
	int64_t t77 = 1467166LL;

    t77 = (((x309>x310)<=x311)*x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 7;
	volatile int64_t x314 = -221354353657LL;
	uint16_t x315 = 2190U;
	int64_t x316 = -4563493116LL;
	volatile int64_t t78 = 485450173704506LL;

    t78 = (((x313>x314)<=x315)*x316);

    if (t78 != -4563493116LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = 368LL;
	volatile int8_t x318 = INT8_MIN;
	static uint32_t x319 = UINT32_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = -295383685;

    t79 = (((x317>x318)<=x319)*x320);

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 1605U;
	int64_t x323 = INT64_MIN;
	static int8_t x324 = -53;
	volatile int32_t t80 = 69408;

    t80 = (((x321>x322)<=x323)*x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 7157509977176539434LLU;
	static volatile int64_t x326 = INT64_MIN;
	static int8_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;

    t81 = (((x325>x326)<=x327)*x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x329 = UINT64_MAX;
	uint32_t x330 = 921308U;
	volatile uint16_t x332 = 312U;
	int32_t t82 = 377756;

    t82 = (((x329>x330)<=x331)*x332);

    if (t82 != 312) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MIN;
	uint16_t x334 = 1U;
	uint32_t x335 = 3301U;

    t83 = (((x333>x334)<=x335)*x336);

    if (t83 != 9202U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	uint16_t x338 = 40U;
	static volatile uint64_t x339 = 7391953812306906418LLU;
	int16_t x340 = -3;
	int32_t t84 = -155087301;

    t84 = (((x337>x338)<=x339)*x340);

    if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int16_t x342 = 20;
	static int64_t x343 = -12320025133LL;
	volatile int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 11523;

    t85 = (((x341>x342)<=x343)*x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x345 = 25124;
	volatile uint16_t x346 = UINT16_MAX;
	int16_t x348 = -1;
	volatile int32_t t86 = 65008636;

    t86 = (((x345>x346)<=x347)*x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = -58580274;
	int32_t x350 = INT32_MIN;
	int8_t x352 = 55;
	static int32_t t87 = -10;

    t87 = (((x349>x350)<=x351)*x352);

    if (t87 != 55) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	volatile uint64_t x354 = 25LLU;
	uint64_t x355 = 6630057993830030033LLU;
	int32_t t88 = INT32_MIN;

    t88 = (((x353>x354)<=x355)*x356);

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 52679LLU;
	static int16_t x359 = 7;
	int8_t x360 = INT8_MIN;
	int32_t t89 = -85;

    t89 = (((x357>x358)<=x359)*x360);

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 2805934985LLU;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t x364 = 838462276;

    t90 = (((x361>x362)<=x363)*x364);

    if (t90 != 838462276) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x367 = 11609368713808LL;

    t91 = (((x365>x366)<=x367)*x368);

    if (t91 != 1939U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x370 = 11LLU;
	uint64_t x371 = 21172971LLU;

    t92 = (((x369>x370)<=x371)*x372);

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -3765;
	int32_t x375 = -1;
	volatile uint16_t x376 = 0U;
	int32_t t93 = -63876449;

    t93 = (((x373>x374)<=x375)*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	uint64_t x378 = 53624150606912LLU;
	uint32_t x379 = 849U;
	volatile int32_t t94 = 20174;

    t94 = (((x377>x378)<=x379)*x380);

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	static int32_t x383 = INT32_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 29428798;

    t95 = (((x381>x382)<=x383)*x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	uint32_t x386 = 16U;
	static volatile uint32_t x387 = UINT32_MAX;
	int8_t x388 = -1;
	int32_t t96 = 144;

    t96 = (((x385>x386)<=x387)*x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	int32_t x390 = INT32_MAX;
	volatile int32_t x391 = INT32_MAX;
	int16_t x392 = INT16_MAX;

    t97 = (((x389>x390)<=x391)*x392);

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	volatile uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	int32_t t98 = -13591955;

    t98 = (((x393>x394)<=x395)*x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = -1172752663LL;
	uint16_t x398 = 23U;
	static uint8_t x399 = 23U;
	static int32_t t99 = INT32_MAX;

    t99 = (((x397>x398)<=x399)*x400);

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int16_t x402 = INT16_MAX;
	int32_t x403 = INT32_MAX;
	volatile int32_t x404 = INT32_MIN;
	static int32_t t100 = INT32_MIN;

    t100 = (((x401>x402)<=x403)*x404);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 6LL;
	int8_t x406 = INT8_MAX;
	static volatile uint32_t x407 = 9U;
	static int16_t x408 = -1;

    t101 = (((x405>x406)<=x407)*x408);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = INT16_MIN;
	int64_t x412 = -1096964547569759420LL;
	static int64_t t102 = -952236760727187387LL;

    t102 = (((x409>x410)<=x411)*x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	volatile int8_t x415 = INT8_MIN;
	uint64_t x416 = 5LLU;
	volatile uint64_t t103 = 34318399669692LLU;

    t103 = (((x413>x414)<=x415)*x416);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = 77164057023828LLU;
	volatile int64_t x420 = 2LL;
	int64_t t104 = -4719LL;

    t104 = (((x417>x418)<=x419)*x420);

    if (t104 != 2LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = 2767459LL;
	uint16_t x422 = 2838U;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	int32_t t105 = -919;

    t105 = (((x421>x422)<=x423)*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = INT64_MIN;
	int16_t x426 = -14;
	int32_t x427 = -97478991;
	int8_t x428 = INT8_MAX;
	int32_t t106 = -367689718;

    t106 = (((x425>x426)<=x427)*x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MAX;
	int64_t x431 = INT64_MIN;
	volatile int64_t t107 = -6058879329570251LL;

    t107 = (((x429>x430)<=x431)*x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MIN;
	static int8_t x434 = INT8_MIN;
	volatile int64_t x436 = -1LL;
	volatile int64_t t108 = 6441LL;

    t108 = (((x433>x434)<=x435)*x436);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = 26826;
	int64_t x438 = INT64_MIN;
	int8_t x439 = INT8_MIN;
	volatile uint32_t t109 = 3U;

    t109 = (((x437>x438)<=x439)*x440);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	int16_t x442 = INT16_MIN;
	static uint64_t x444 = UINT64_MAX;
	uint64_t t110 = UINT64_MAX;

    t110 = (((x441>x442)<=x443)*x444);

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MAX;
	static uint16_t x447 = 245U;
	uint8_t x448 = 37U;
	int32_t t111 = -13796595;

    t111 = (((x445>x446)<=x447)*x448);

    if (t111 != 37) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -498224;
	int64_t x450 = INT64_MIN;
	int32_t x451 = -2;
	int8_t x452 = -1;
	static volatile int32_t t112 = 361;

    t112 = (((x449>x450)<=x451)*x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 110U;
	uint32_t x454 = UINT32_MAX;
	static volatile int8_t x455 = 1;
	static uint64_t t113 = 53LLU;

    t113 = (((x453>x454)<=x455)*x456);

    if (t113 != 26855LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = 609LL;
	static int32_t x458 = INT32_MIN;
	static int8_t x459 = 1;
	uint32_t x460 = UINT32_MAX;

    t114 = (((x457>x458)<=x459)*x460);

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	volatile int64_t x462 = -1LL;
	int64_t x464 = INT64_MIN;
	static int64_t t115 = -29530414298590LL;

    t115 = (((x461>x462)<=x463)*x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	uint8_t x466 = 89U;
	int8_t x467 = INT8_MIN;
	int32_t x468 = 167;
	static int32_t t116 = 140927955;

    t116 = (((x465>x466)<=x467)*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = -1;
	int8_t x470 = -1;
	uint64_t x472 = 1276LLU;

    t117 = (((x469>x470)<=x471)*x472);

    if (t117 != 1276LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -7521;
	int32_t x476 = INT32_MAX;
	int32_t t118 = -120618572;

    t118 = (((x473>x474)<=x475)*x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = UINT8_MAX;
	static int16_t x478 = INT16_MIN;
	uint64_t x479 = 5LLU;
	static volatile int16_t x480 = INT16_MIN;
	static int32_t t119 = 6844;

    t119 = (((x477>x478)<=x479)*x480);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MIN;
	int32_t x483 = 143954650;
	uint32_t x484 = 64508U;
	uint32_t t120 = 148U;

    t120 = (((x481>x482)<=x483)*x484);

    if (t120 != 64508U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = 14161LL;
	int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MIN;

    t121 = (((x485>x486)<=x487)*x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = -1LL;
	uint8_t x490 = UINT8_MAX;
	static int8_t x491 = -3;
	static uint16_t x492 = UINT16_MAX;
	static int32_t t122 = -188;

    t122 = (((x489>x490)<=x491)*x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	volatile int8_t x494 = INT8_MIN;
	uint16_t x495 = 6U;
	uint32_t x496 = 30U;
	static uint32_t t123 = 1U;

    t123 = (((x493>x494)<=x495)*x496);

    if (t123 != 30U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 1LL;
	static volatile int16_t x498 = INT16_MAX;
	static volatile uint64_t x499 = 1805300928105771830LLU;
	static volatile uint32_t x500 = 10940851U;
	uint32_t t124 = 197671965U;

    t124 = (((x497>x498)<=x499)*x500);

    if (t124 != 10940851U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x502 = 1;
	static int16_t x503 = 33;
	uint64_t x504 = 1715284580203904LLU;
	uint64_t t125 = 21122870043968737LLU;

    t125 = (((x501>x502)<=x503)*x504);

    if (t125 != 1715284580203904LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 15;
	int64_t x506 = INT64_MIN;
	int32_t x507 = INT32_MIN;
	uint8_t x508 = UINT8_MAX;

    t126 = (((x505>x506)<=x507)*x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 0U;
	volatile int16_t x510 = -1;
	int8_t x511 = -4;
	uint64_t x512 = UINT64_MAX;
	uint64_t t127 = 455053350829887LLU;

    t127 = (((x509>x510)<=x511)*x512);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	static int64_t x514 = -3095821812723629469LL;
	static uint8_t x515 = UINT8_MAX;
	int16_t x516 = -1;
	int32_t t128 = 886302700;

    t128 = (((x513>x514)<=x515)*x516);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = INT8_MAX;
	uint8_t x519 = UINT8_MAX;
	volatile uint16_t x520 = UINT16_MAX;
	static int32_t t129 = -255880;

    t129 = (((x517>x518)<=x519)*x520);

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x523 = UINT32_MAX;
	uint32_t t130 = 32507125U;

    t130 = (((x521>x522)<=x523)*x524);

    if (t130 != 982900U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x526 = INT32_MIN;
	int32_t x528 = 1571;
	volatile int32_t t131 = -449;

    t131 = (((x525>x526)<=x527)*x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 37366U;
	int64_t x530 = -1LL;
	int32_t x532 = 106;

    t132 = (((x529>x530)<=x531)*x532);

    if (t132 != 106) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 4379124;
	int8_t x534 = 5;
	int32_t x535 = INT32_MAX;
	int32_t t133 = -12582;

    t133 = (((x533>x534)<=x535)*x536);

    if (t133 != -4283) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MAX;
	static int64_t x538 = INT64_MAX;
	uint16_t x539 = UINT16_MAX;
	static int64_t x540 = 160141LL;

    t134 = (((x537>x538)<=x539)*x540);

    if (t134 != 160141LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint8_t x541 = 6U;
	int64_t x542 = -1LL;
	int16_t x543 = -13;
	uint8_t x544 = 78U;
	volatile int32_t t135 = 1;

    t135 = (((x541>x542)<=x543)*x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = -1;
	static int16_t x546 = -1;
	int8_t x547 = INT8_MIN;
	static int8_t x548 = INT8_MIN;
	static int32_t t136 = 38;

    t136 = (((x545>x546)<=x547)*x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x550 = 182162359722LLU;
	static int16_t x552 = -11851;
	static int32_t t137 = -249409720;

    t137 = (((x549>x550)<=x551)*x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x554 = -3;
	uint64_t x555 = 122435200829LLU;
	static volatile uint8_t x556 = 32U;
	int32_t t138 = 475;

    t138 = (((x553>x554)<=x555)*x556);

    if (t138 != 32) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MIN;
	uint8_t x558 = 71U;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = -1;

    t139 = (((x557>x558)<=x559)*x560);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x561 = 13981U;
	static volatile int64_t x563 = INT64_MIN;
	static volatile uint16_t x564 = 28U;
	int32_t t140 = 84326;

    t140 = (((x561>x562)<=x563)*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	volatile uint8_t x568 = 15U;
	volatile int32_t t141 = -40;

    t141 = (((x565>x566)<=x567)*x568);

    if (t141 != 15) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	int16_t x571 = -1;
	volatile int32_t x572 = -1;
	volatile int32_t t142 = 3413266;

    t142 = (((x569>x570)<=x571)*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x575 = INT64_MAX;
	uint32_t x576 = UINT32_MAX;
	volatile uint32_t t143 = UINT32_MAX;

    t143 = (((x573>x574)<=x575)*x576);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -1;
	int64_t x578 = INT64_MAX;
	static int32_t x579 = -1;
	uint64_t x580 = UINT64_MAX;
	uint64_t t144 = 1237480859866LLU;

    t144 = (((x577>x578)<=x579)*x580);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	uint64_t x582 = UINT64_MAX;
	int64_t x583 = INT64_MIN;
	volatile int32_t x584 = -1;
	volatile int32_t t145 = 1;

    t145 = (((x581>x582)<=x583)*x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = INT32_MIN;
	volatile int8_t x586 = 1;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MIN;
	int64_t t146 = 277142981547200LL;

    t146 = (((x585>x586)<=x587)*x588);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x589 = 62771LLU;
	int32_t x591 = -1;

    t147 = (((x589>x590)<=x591)*x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = -1LL;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = 4092984723401744LLU;
	static int64_t x596 = INT64_MIN;
	static volatile int64_t t148 = INT64_MIN;

    t148 = (((x593>x594)<=x595)*x596);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	volatile uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MIN;
	static volatile int32_t t149 = 4;

    t149 = (((x597>x598)<=x599)*x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	int32_t x602 = 1275;
	uint8_t x603 = 6U;
	uint8_t x604 = 2U;

    t150 = (((x601>x602)<=x603)*x604);

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x605 = UINT16_MAX;
	static int64_t x607 = INT64_MAX;
	static int8_t x608 = INT8_MIN;

    t151 = (((x605>x606)<=x607)*x608);

    if (t151 != -128) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = 20473832230LL;
	uint16_t x611 = UINT16_MAX;
	uint32_t x612 = 26333U;

    t152 = (((x609>x610)<=x611)*x612);

    if (t152 != 26333U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 3U;
	int16_t x614 = -621;
	int16_t x615 = 10400;
	int32_t x616 = -349;
	static volatile int32_t t153 = -3955;

    t153 = (((x613>x614)<=x615)*x616);

    if (t153 != -349) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = UINT16_MAX;
	static int8_t x618 = INT8_MAX;
	volatile int64_t x620 = -14299461427930313LL;
	int64_t t154 = 7745135348967218LL;

    t154 = (((x617>x618)<=x619)*x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 1U;
	static int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	volatile int64_t t155 = -146783810680LL;

    t155 = (((x621>x622)<=x623)*x624);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = 1019U;
	static uint16_t x627 = 255U;
	int8_t x628 = -58;

    t156 = (((x625>x626)<=x627)*x628);

    if (t156 != -58) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 807303LLU;
	int16_t x630 = INT16_MIN;
	uint64_t x631 = 453883272089030LLU;
	static uint16_t x632 = UINT16_MAX;

    t157 = (((x629>x630)<=x631)*x632);

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	static uint16_t x634 = 1U;
	volatile uint8_t x635 = 118U;

    t158 = (((x633>x634)<=x635)*x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = UINT8_MAX;
	uint16_t x638 = 23820U;
	int64_t x639 = -1LL;
	int64_t x640 = -1LL;
	volatile int64_t t159 = -27201454305283LL;

    t159 = (((x637>x638)<=x639)*x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = -3032987;
	volatile int64_t x642 = INT64_MIN;
	volatile uint8_t x643 = 30U;
	volatile int8_t x644 = 20;

    t160 = (((x641>x642)<=x643)*x644);

    if (t160 != 20) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	static volatile int8_t x647 = 0;
	static int64_t x648 = -1LL;
	volatile int64_t t161 = 46320493345664465LL;

    t161 = (((x645>x646)<=x647)*x648);

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = INT16_MIN;
	int32_t x650 = INT32_MIN;
	static int32_t x652 = -1;
	int32_t t162 = -4;

    t162 = (((x649>x650)<=x651)*x652);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 390U;
	uint32_t x654 = 30122U;
	int8_t x655 = 8;
	int64_t x656 = -117133306718LL;
	int64_t t163 = -102324706087530626LL;

    t163 = (((x653>x654)<=x655)*x656);

    if (t163 != -117133306718LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 3U;
	volatile int32_t x658 = INT32_MIN;
	static int16_t x659 = INT16_MAX;
	int8_t x660 = 2;
	static volatile int32_t t164 = -36614880;

    t164 = (((x657>x658)<=x659)*x660);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = -1;
	int8_t x664 = INT8_MAX;
	volatile int32_t t165 = -18275;

    t165 = (((x661>x662)<=x663)*x664);

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 124334591355LLU;
	volatile int64_t x666 = 761677842756466LL;
	int8_t x667 = -3;
	int64_t x668 = 164078753LL;
	int64_t t166 = -28920040403LL;

    t166 = (((x665>x666)<=x667)*x668);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 7936811226774428237LLU;
	int32_t x670 = INT32_MAX;
	volatile uint16_t x672 = UINT16_MAX;

    t167 = (((x669>x670)<=x671)*x672);

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	int8_t x676 = INT8_MIN;
	static int32_t t168 = -69172017;

    t168 = (((x673>x674)<=x675)*x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x679 = 191593U;
	static int32_t x680 = INT32_MIN;
	volatile int32_t t169 = INT32_MIN;

    t169 = (((x677>x678)<=x679)*x680);

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x682 = 3U;
	uint32_t x683 = UINT32_MAX;
	int32_t x684 = INT32_MAX;
	int32_t t170 = INT32_MAX;

    t170 = (((x681>x682)<=x683)*x684);

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x686 = -13;
	int32_t x688 = INT32_MAX;

    t171 = (((x685>x686)<=x687)*x688);

    if (t171 != INT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x690 = 2U;
	int64_t x691 = INT64_MAX;
	int64_t x692 = INT64_MIN;

    t172 = (((x689>x690)<=x691)*x692);

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 984U;
	int8_t x695 = INT8_MIN;
	int32_t t173 = 39;

    t173 = (((x693>x694)<=x695)*x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 1U;
	int32_t x698 = -126966;
	static int32_t x699 = 0;
	int8_t x700 = INT8_MIN;
	int32_t t174 = 45;

    t174 = (((x697>x698)<=x699)*x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = UINT16_MAX;
	int32_t x702 = -1;
	int32_t x703 = INT32_MIN;
	static int32_t t175 = -107810;

    t175 = (((x701>x702)<=x703)*x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	uint8_t x706 = 12U;
	int32_t x708 = -1;
	volatile int32_t t176 = 88492023;

    t176 = (((x705>x706)<=x707)*x708);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	uint64_t x710 = 254092843459080122LLU;
	volatile int16_t x711 = INT16_MIN;

    t177 = (((x709>x710)<=x711)*x712);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 10U;
	int64_t x714 = INT64_MIN;
	int8_t x716 = -1;
	volatile int32_t t178 = 254958490;

    t178 = (((x713>x714)<=x715)*x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -1;
	int64_t x718 = INT64_MIN;
	uint16_t x719 = UINT16_MAX;
	int16_t x720 = -1;

    t179 = (((x717>x718)<=x719)*x720);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = INT32_MIN;
	uint32_t x723 = 10434U;
	volatile uint32_t x724 = 1559498U;

    t180 = (((x721>x722)<=x723)*x724);

    if (t180 != 1559498U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	volatile int8_t x726 = INT8_MIN;
	uint16_t x728 = UINT16_MAX;

    t181 = (((x725>x726)<=x727)*x728);

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = -1;
	volatile uint32_t x731 = 6743U;
	uint64_t t182 = UINT64_MAX;

    t182 = (((x729>x730)<=x731)*x732);

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 14441969838LLU;
	int32_t x734 = INT32_MIN;
	uint64_t x735 = UINT64_MAX;
	int32_t x736 = INT32_MAX;
	static volatile int32_t t183 = INT32_MAX;

    t183 = (((x733>x734)<=x735)*x736);

    if (t183 != INT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -90;
	int8_t x738 = INT8_MAX;
	uint8_t x739 = UINT8_MAX;
	int8_t x740 = INT8_MIN;
	int32_t t184 = 17753;

    t184 = (((x737>x738)<=x739)*x740);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 109U;
	int8_t x742 = INT8_MAX;
	int16_t x743 = 110;
	volatile int32_t t185 = -105;

    t185 = (((x741>x742)<=x743)*x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint8_t x746 = 1U;
	static volatile int32_t x747 = -1;
	volatile int32_t t186 = -1461;

    t186 = (((x745>x746)<=x747)*x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 2U;
	volatile uint8_t x750 = UINT8_MAX;
	int32_t x751 = 98245;
	volatile int32_t t187 = -134147;

    t187 = (((x749>x750)<=x751)*x752);

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = INT16_MIN;
	int8_t x755 = 38;
	uint32_t x756 = 1902U;
	static uint32_t t188 = 868650713U;

    t188 = (((x753>x754)<=x755)*x756);

    if (t188 != 1902U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 15775U;
	uint32_t x758 = 14U;
	int16_t x759 = INT16_MAX;
	uint32_t x760 = 24U;
	uint32_t t189 = 1U;

    t189 = (((x757>x758)<=x759)*x760);

    if (t189 != 24U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 10U;
	volatile int64_t x762 = 0LL;
	int64_t x763 = -2886LL;
	static uint64_t x764 = 11812161261LLU;
	static uint64_t t190 = 5639LLU;

    t190 = (((x761>x762)<=x763)*x764);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 15U;
	int8_t x766 = INT8_MAX;
	int32_t x767 = -1;
	int64_t x768 = -18062LL;
	int64_t t191 = -12473LL;

    t191 = (((x765>x766)<=x767)*x768);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	static volatile int8_t x770 = INT8_MIN;
	static volatile int8_t x771 = 0;
	int64_t x772 = INT64_MIN;

    t192 = (((x769>x770)<=x771)*x772);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 0U;
	int8_t x774 = -14;
	static uint32_t x776 = UINT32_MAX;
	volatile uint32_t t193 = 63719U;

    t193 = (((x773>x774)<=x775)*x776);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = UINT16_MAX;
	static int16_t x778 = 0;
	static int32_t x779 = INT32_MAX;
	int64_t x780 = -1LL;
	volatile int64_t t194 = -13836844899352015LL;

    t194 = (((x777>x778)<=x779)*x780);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 752080863691565972LL;
	uint16_t x783 = UINT16_MAX;
	volatile int8_t x784 = INT8_MAX;
	volatile int32_t t195 = -6284;

    t195 = (((x781>x782)<=x783)*x784);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int32_t x786 = INT32_MAX;
	int64_t x787 = -25764692LL;
	static int32_t x788 = INT32_MAX;
	static volatile int32_t t196 = 101;

    t196 = (((x785>x786)<=x787)*x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	volatile int8_t x791 = INT8_MIN;

    t197 = (((x789>x790)<=x791)*x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	uint64_t x794 = UINT64_MAX;
	static int16_t x795 = -1;
	int32_t x796 = INT32_MIN;
	volatile int32_t t198 = 10046553;

    t198 = (((x793>x794)<=x795)*x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 68428976U;
	int16_t x800 = INT16_MIN;
	int32_t t199 = -5;

    t199 = (((x797>x798)<=x799)*x800);

    if (t199 != -32768) { NG(); } else { ; }
	
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

