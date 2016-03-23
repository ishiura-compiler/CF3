
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

int64_t x1 = -1LL;
int8_t x8 = INT8_MIN;
static uint32_t x9 = 0U;
int8_t x10 = 2;
int32_t x13 = -31;
int8_t x15 = INT8_MIN;
uint16_t x16 = UINT16_MAX;
int32_t x25 = 76036;
uint64_t x27 = 40615787LLU;
uint64_t x31 = UINT64_MAX;
int32_t t8 = -7;
int8_t x38 = -1;
int16_t x46 = INT16_MIN;
volatile int32_t x53 = -287782950;
volatile int32_t x61 = -116170;
volatile int32_t t15 = 0;
static volatile uint64_t x65 = 147LLU;
int32_t x68 = -1;
int64_t x69 = 955183LL;
int32_t x71 = INT32_MIN;
static int32_t t17 = -4499489;
uint8_t x75 = 5U;
int64_t x77 = INT64_MIN;
volatile int32_t t19 = -8636;
static int64_t x85 = -1LL;
uint64_t x89 = 98052636466633LLU;
int64_t x91 = -1LL;
volatile int32_t x92 = INT32_MAX;
int32_t t22 = -4;
int16_t x93 = INT16_MAX;
static uint32_t x95 = 419109U;
int16_t x99 = INT16_MAX;
int8_t x102 = -1;
static uint16_t x105 = UINT16_MAX;
int8_t x110 = INT8_MIN;
int16_t x111 = INT16_MIN;
int16_t x118 = 0;
int64_t x121 = INT64_MIN;
int64_t x123 = INT64_MIN;
volatile int64_t x126 = -854129829735457417LL;
static int64_t x129 = INT64_MAX;
int8_t x136 = INT8_MIN;
volatile int64_t x149 = INT64_MIN;
uint16_t x152 = UINT16_MAX;
int32_t x153 = INT32_MIN;
int32_t x155 = INT32_MAX;
int32_t x159 = -1;
int64_t x167 = -962723901766LL;
int32_t x169 = 1807;
static int16_t x171 = -72;
static int16_t x172 = INT16_MAX;
int32_t t43 = 3;
static int64_t x178 = -37662485743LL;
int64_t x190 = INT64_MAX;
int32_t x195 = INT32_MAX;
int32_t t48 = -82;
uint64_t x204 = 1962LLU;
static volatile int32_t t50 = 114964;
int32_t t51 = -2;
int32_t x219 = -1;
volatile int8_t x220 = -1;
int64_t x231 = INT64_MIN;
int8_t x240 = -1;
uint32_t x241 = 1390188491U;
static int32_t x247 = INT32_MIN;
volatile int16_t x249 = -1;
volatile uint8_t x254 = 1U;
volatile uint8_t x255 = 62U;
int8_t x258 = INT8_MAX;
static int8_t x262 = INT8_MAX;
int32_t x265 = 204671152;
volatile int32_t t66 = 19056;
static volatile int8_t x272 = INT8_MIN;
int32_t x278 = -13476;
int32_t t69 = -13823095;
int32_t x281 = -1;
uint8_t x286 = 50U;
volatile int64_t x288 = INT64_MIN;
uint16_t x292 = 66U;
volatile int16_t x294 = -67;
int32_t x299 = -1;
uint64_t x303 = UINT64_MAX;
int32_t t75 = -994005091;
volatile int8_t x311 = 14;
int16_t x317 = INT16_MIN;
static volatile int16_t x319 = 0;
int32_t x320 = INT32_MIN;
uint16_t x324 = UINT16_MAX;
volatile int64_t x330 = -78096271LL;
volatile int8_t x340 = INT8_MIN;
int64_t x344 = INT64_MIN;
volatile int32_t t85 = 7;
int32_t x346 = INT32_MIN;
static int16_t x351 = 1;
int8_t x355 = INT8_MAX;
volatile int64_t x356 = INT64_MIN;
uint16_t x364 = 110U;
static int64_t x366 = -136928593LL;
int32_t x367 = -84;
int8_t x369 = INT8_MIN;
int32_t x372 = INT32_MAX;
int32_t x376 = -95888;
int32_t x380 = INT32_MIN;
int32_t t94 = -3813630;
int8_t x383 = 1;
volatile int8_t x389 = 1;
int64_t x394 = -444148105094LL;
static uint64_t x397 = 77548492909LLU;
uint8_t x401 = 1U;
volatile int64_t x416 = INT64_MIN;
uint64_t x419 = 119162LLU;
volatile uint8_t x421 = UINT8_MAX;
int8_t x422 = INT8_MIN;
int32_t t106 = -16163;
int32_t x439 = 2;
static int32_t x445 = -32194576;
int32_t t111 = 47449;
volatile int32_t t112 = 355851599;
int64_t x454 = -1LL;
int8_t x455 = 1;
uint32_t x458 = UINT32_MAX;
int8_t x459 = INT8_MIN;
volatile int32_t t115 = 11518;
int32_t x474 = INT32_MAX;
volatile int32_t x475 = INT32_MAX;
int32_t x478 = 344;
uint16_t x484 = 1U;
volatile int32_t x488 = INT32_MIN;
int32_t t121 = -29;
uint16_t x491 = UINT16_MAX;
volatile int8_t x493 = -1;
uint16_t x496 = UINT16_MAX;
uint32_t x497 = 349U;
static int64_t x508 = INT64_MIN;
uint8_t x510 = 20U;
static uint64_t x511 = 9575311647417LLU;
int64_t x526 = INT64_MIN;
int32_t x527 = -2673632;
static int8_t x544 = INT8_MAX;
volatile int32_t t136 = -2580564;
uint32_t x555 = UINT32_MAX;
static int32_t x560 = 727025;
int64_t x564 = 15477342804LL;
volatile int32_t t140 = -16;
int64_t x571 = INT64_MIN;
int64_t x573 = -1LL;
static volatile int64_t x578 = INT64_MAX;
static int8_t x582 = INT8_MAX;
int64_t x584 = INT64_MIN;
int8_t x591 = INT8_MIN;
static int64_t x592 = INT64_MIN;
static volatile int8_t x595 = -1;
uint8_t x596 = 28U;
int32_t t149 = -1463;
volatile uint32_t x607 = UINT32_MAX;
volatile uint8_t x609 = 6U;
int16_t x610 = -5429;
int16_t x620 = -9962;
static int32_t t154 = -121675;
int64_t x624 = -236LL;
int32_t t156 = 14;
int32_t t157 = -383593535;
int8_t x639 = INT8_MIN;
uint64_t x640 = 276803280602884LLU;
int8_t x645 = 5;
uint16_t x659 = UINT16_MAX;
static int32_t t164 = 51897;
volatile int64_t x667 = 1577408420307139314LL;
int8_t x672 = INT8_MIN;
volatile int32_t t169 = 483443;
int16_t x684 = -1;
static int32_t x687 = 2861;
uint32_t x688 = 58810U;
static uint64_t x690 = UINT64_MAX;
int32_t t175 = 1;
volatile int64_t x705 = 144LL;
volatile uint8_t x708 = 2U;
uint16_t x712 = 1U;
volatile int64_t x714 = INT64_MAX;
int32_t x717 = INT32_MAX;
uint8_t x718 = 34U;
volatile uint16_t x727 = 214U;
int64_t x743 = INT64_MIN;
volatile int32_t t185 = 58007;
static int8_t x752 = -1;
int32_t t187 = 481;
int32_t x753 = INT32_MIN;
int16_t x756 = -6;
int16_t x759 = INT16_MIN;
int32_t x763 = INT32_MAX;
static volatile uint64_t x773 = UINT64_MAX;
static volatile int32_t t193 = -6;
static volatile int32_t x783 = INT32_MIN;
volatile int16_t x785 = INT16_MAX;
static int32_t x788 = INT32_MIN;
uint64_t x789 = UINT64_MAX;
int16_t x791 = INT16_MAX;
volatile int8_t x793 = INT8_MAX;
volatile int16_t x796 = 693;
static volatile int32_t t198 = -673115546;
int64_t x798 = INT64_MIN;


void f0(void) {
    	volatile int8_t x2 = INT8_MIN;
	static int64_t x3 = -1LL;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -654535;

    t0 = (((x1^x2)>x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = -5448;
	int64_t x6 = INT64_MAX;
	volatile int32_t x7 = INT32_MIN;
	int32_t t1 = -59665;

    t1 = (((x5^x6)>x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = -399;
	static int64_t x12 = 1039410212516435879LL;
	int32_t t2 = -14;

    t2 = (((x9^x10)>x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = UINT8_MAX;
	int32_t t3 = 4;

    t3 = (((x13^x14)>x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -6229;
	static int64_t x18 = 26847LL;
	uint32_t x19 = 1U;
	int16_t x20 = -11;
	volatile int32_t t4 = -67946;

    t4 = (((x17^x18)>x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	static int64_t x22 = -120305098895LL;
	volatile int16_t x23 = INT16_MIN;
	static int32_t x24 = INT32_MIN;
	static int32_t t5 = 26;

    t5 = (((x21^x22)>x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x26 = INT32_MAX;
	int32_t x28 = -1;
	int32_t t6 = 22;

    t6 = (((x25^x26)>x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	int16_t x30 = -1;
	uint16_t x32 = 715U;
	int32_t t7 = -43;

    t7 = (((x29^x30)>x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 37173LLU;
	static uint64_t x34 = 43793177536LLU;
	uint16_t x35 = 2614U;
	volatile int64_t x36 = INT64_MAX;

    t8 = (((x33^x34)>x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = UINT8_MAX;
	int8_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 791480821;

    t9 = (((x37^x38)>x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 2U;
	int64_t x42 = 70LL;
	volatile uint8_t x43 = 1U;
	uint32_t x44 = 951U;
	volatile int32_t t10 = -8;

    t10 = (((x41^x42)>x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	uint16_t x47 = 7889U;
	volatile uint32_t x48 = UINT32_MAX;
	static volatile int32_t t11 = 71341487;

    t11 = (((x45^x46)>x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x49 = INT64_MIN;
	static uint64_t x50 = UINT64_MAX;
	uint64_t x51 = 1258837219188LLU;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = 0;

    t12 = (((x49^x50)>x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = 193;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -129015367;

    t13 = (((x53^x54)>x55)<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 5U;
	static int8_t x58 = -5;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = 1029785622;
	static int32_t t14 = 67677;

    t14 = (((x57^x58)>x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x62 = 81U;
	static uint32_t x63 = UINT32_MAX;
	int16_t x64 = -1;

    t15 = (((x61^x62)>x63)<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MAX;
	uint16_t x67 = 13478U;
	static int32_t t16 = 727;

    t16 = (((x65^x66)>x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x70 = 214027U;
	int16_t x72 = INT16_MIN;

    t17 = (((x69^x70)>x71)<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	uint32_t x74 = 30536U;
	int8_t x76 = -1;
	volatile int32_t t18 = 6;

    t18 = (((x73^x74)>x75)<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x78 = 2174482649339878237LLU;
	static uint64_t x79 = 69844227388476LLU;
	volatile int8_t x80 = -7;

    t19 = (((x77^x78)>x79)<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 0U;
	volatile int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	int32_t x84 = -18590;
	int32_t t20 = 870;

    t20 = (((x81^x82)>x83)<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 72;

    t21 = (((x85^x86)>x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 4U;

    t22 = (((x89^x90)>x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = -20;
	int32_t x96 = -455;
	volatile int32_t t23 = 938;

    t23 = (((x93^x94)>x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MAX;
	static int8_t x98 = INT8_MIN;
	uint64_t x100 = 27LLU;
	int32_t t24 = 115;

    t24 = (((x97^x98)>x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	uint64_t x103 = 2412222LLU;
	uint8_t x104 = 93U;
	int32_t t25 = -805;

    t25 = (((x101^x102)>x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 297210354U;
	int64_t x107 = -1LL;
	int32_t x108 = -6268298;
	volatile int32_t t26 = 16177;

    t26 = (((x105^x106)>x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = 1487011327027254838LL;
	static int64_t x112 = 30668398761LL;
	int32_t t27 = 431531348;

    t27 = (((x109^x110)>x111)<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	volatile uint32_t x114 = 3102U;
	uint16_t x115 = 71U;
	volatile int16_t x116 = INT16_MIN;
	int32_t t28 = -13119977;

    t28 = (((x113^x114)>x115)<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 27U;
	int8_t x119 = 2;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 92417;

    t29 = (((x117^x118)>x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x122 = UINT8_MAX;
	int64_t x124 = INT64_MIN;
	static int32_t t30 = -1;

    t30 = (((x121^x122)>x123)<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	int64_t x127 = 369271652976791024LL;
	int64_t x128 = -1LL;
	int32_t t31 = 57943;

    t31 = (((x125^x126)>x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	int8_t x131 = -1;
	int8_t x132 = 0;
	int32_t t32 = 26695206;

    t32 = (((x129^x130)>x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	volatile int16_t x134 = INT16_MIN;
	uint8_t x135 = 49U;
	static volatile int32_t t33 = -20;

    t33 = (((x133^x134)>x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = -147;
	int16_t x138 = -1;
	int8_t x139 = INT8_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = -785;

    t34 = (((x137^x138)>x139)<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 1004075U;
	uint16_t x142 = 1U;
	static int8_t x143 = INT8_MAX;
	static uint16_t x144 = 906U;
	volatile int32_t t35 = 10;

    t35 = (((x141^x142)>x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 709;
	int16_t x146 = INT16_MAX;
	int32_t x147 = 0;
	volatile uint16_t x148 = 1784U;
	int32_t t36 = 56564536;

    t36 = (((x145^x146)>x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = 1U;
	volatile int32_t x151 = -488;
	volatile int32_t t37 = 3777101;

    t37 = (((x149^x150)>x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -2;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = -144;

    t38 = (((x153^x154)>x155)<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint64_t x157 = 41656582LLU;
	static volatile int32_t x158 = INT32_MAX;
	int8_t x160 = -1;
	static int32_t t39 = -63422;

    t39 = (((x157^x158)>x159)<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 6;
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = 517U;
	int8_t x164 = 1;
	int32_t t40 = -97251;

    t40 = (((x161^x162)>x163)<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 3246U;
	uint16_t x166 = 39U;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -19954189;

    t41 = (((x165^x166)>x167)<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x170 = UINT64_MAX;
	static int32_t t42 = -97;

    t42 = (((x169^x170)>x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -1LL;
	uint8_t x174 = 13U;
	static volatile int8_t x175 = INT8_MIN;
	static int32_t x176 = 67;

    t43 = (((x173^x174)>x175)<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 226U;
	volatile uint8_t x179 = 26U;
	volatile uint64_t x180 = 1103365LLU;
	int32_t t44 = -91;

    t44 = (((x177^x178)>x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 36LL;
	volatile uint64_t x182 = UINT64_MAX;
	static int8_t x183 = INT8_MAX;
	int32_t x184 = -13234242;
	int32_t t45 = 3;

    t45 = (((x181^x182)>x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MAX;
	uint32_t x186 = 129174005U;
	static volatile int32_t x187 = -1747;
	uint64_t x188 = 14928882620103571LLU;
	static int32_t t46 = 50444;

    t46 = (((x185^x186)>x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	int16_t x191 = INT16_MIN;
	volatile int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = -787;

    t47 = (((x189^x190)>x191)<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	int32_t x194 = 1339;
	volatile int8_t x196 = INT8_MIN;

    t48 = (((x193^x194)>x195)<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -1LL;
	static uint16_t x198 = 2637U;
	uint32_t x199 = 59U;
	int64_t x200 = -37947729101LL;
	int32_t t49 = -246;

    t49 = (((x197^x198)>x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 0U;
	uint8_t x202 = UINT8_MAX;
	volatile int64_t x203 = -1LL;

    t50 = (((x201^x202)>x203)<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MIN;
	static volatile int64_t x207 = 326655LL;
	int8_t x208 = 5;

    t51 = (((x205^x206)>x207)<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = 2081U;
	int32_t t52 = -28247417;

    t52 = (((x209^x210)>x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 10;
	static int16_t x214 = INT16_MAX;
	uint8_t x215 = 114U;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = -189820;

    t53 = (((x213^x214)>x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MAX;
	int8_t x218 = -1;
	volatile int32_t t54 = -28744;

    t54 = (((x217^x218)>x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 84815516LLU;
	uint8_t x222 = UINT8_MAX;
	static int64_t x223 = 2087LL;
	volatile uint8_t x224 = 3U;
	volatile int32_t t55 = -1;

    t55 = (((x221^x222)>x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = 136953442920LL;
	static uint8_t x226 = UINT8_MAX;
	static uint16_t x227 = 29U;
	volatile uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 1187192;

    t56 = (((x225^x226)>x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x229 = INT32_MAX;
	int8_t x230 = INT8_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -52934171;

    t57 = (((x229^x230)>x231)<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MAX;
	uint8_t x235 = 102U;
	volatile int32_t x236 = 901;
	int32_t t58 = -510;

    t58 = (((x233^x234)>x235)<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = 117;
	static uint8_t x238 = 89U;
	int16_t x239 = -1;
	volatile int32_t t59 = 31670;

    t59 = (((x237^x238)>x239)<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = -1;
	uint16_t x243 = 510U;
	static volatile int16_t x244 = INT16_MAX;
	int32_t t60 = 13532;

    t60 = (((x241^x242)>x243)<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 98;
	int16_t x246 = -1;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -43;

    t61 = (((x245^x246)>x247)<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	static volatile uint64_t x251 = 1528LLU;
	volatile uint16_t x252 = 3U;
	volatile int32_t t62 = 30;

    t62 = (((x249^x250)>x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	int64_t x256 = -1LL;
	volatile int32_t t63 = 2906;

    t63 = (((x253^x254)>x255)<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	uint64_t x259 = 2237LLU;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 60545;

    t64 = (((x257^x258)>x259)<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int64_t x263 = -208258092257341531LL;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 735484;

    t65 = (((x261^x262)>x263)<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	volatile uint8_t x268 = 1U;

    t66 = (((x265^x266)>x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 26209LLU;
	int64_t x270 = INT64_MIN;
	volatile int8_t x271 = INT8_MAX;
	int32_t t67 = -26802684;

    t67 = (((x269^x270)>x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 23544U;
	volatile int64_t x274 = INT64_MIN;
	uint8_t x275 = 4U;
	uint32_t x276 = UINT32_MAX;
	int32_t t68 = -2053;

    t68 = (((x273^x274)>x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 104U;

    t69 = (((x277^x278)>x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -3607225;
	int32_t t70 = 13;

    t70 = (((x281^x282)>x283)<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = INT64_MIN;
	uint8_t x287 = 0U;
	volatile int32_t t71 = -847653939;

    t71 = (((x285^x286)>x287)<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x289 = INT64_MAX;
	static uint64_t x290 = 17170LLU;
	static int16_t x291 = INT16_MAX;
	int32_t t72 = -391;

    t72 = (((x289^x290)>x291)<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	uint8_t x295 = 9U;
	int8_t x296 = 3;
	static volatile int32_t t73 = 165;

    t73 = (((x293^x294)>x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = 1;
	int32_t x298 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = 65;

    t74 = (((x297^x298)>x299)<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = INT32_MIN;
	uint16_t x302 = UINT16_MAX;
	static uint16_t x304 = 6770U;

    t75 = (((x301^x302)>x303)<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	int32_t x306 = -177;
	int64_t x307 = INT64_MIN;
	volatile uint8_t x308 = 1U;
	int32_t t76 = -504;

    t76 = (((x305^x306)>x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 107574;
	uint64_t x310 = 448534958LLU;
	static uint32_t x312 = 99U;
	volatile int32_t t77 = 28;

    t77 = (((x309^x310)>x311)<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	volatile int64_t x314 = -170020991LL;
	int32_t x315 = -548;
	volatile int16_t x316 = 8038;
	int32_t t78 = 1427;

    t78 = (((x313^x314)>x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x318 = UINT64_MAX;
	static volatile int32_t t79 = -4;

    t79 = (((x317^x318)>x319)<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = 350214458;
	volatile int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	volatile int32_t t80 = -33450482;

    t80 = (((x321^x322)>x323)<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	static int32_t x326 = -1;
	int8_t x327 = 1;
	static int64_t x328 = -249327LL;
	volatile int32_t t81 = 1;

    t81 = (((x325^x326)>x327)<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1LL;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -30357;

    t82 = (((x329^x330)>x331)<=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	uint16_t x335 = 1838U;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -1087641;

    t83 = (((x333^x334)>x335)<=x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	int16_t x338 = INT16_MIN;
	uint16_t x339 = 41U;
	int32_t t84 = 592195;

    t84 = (((x337^x338)>x339)<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = -1;
	uint16_t x342 = 16189U;
	uint64_t x343 = 3LLU;

    t85 = (((x341^x342)>x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	static uint32_t x347 = UINT32_MAX;
	int8_t x348 = -11;
	volatile int32_t t86 = -16129;

    t86 = (((x345^x346)>x347)<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	uint64_t x350 = 992675554626LLU;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = 0;

    t87 = (((x349^x350)>x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -3410182113531380LL;
	int16_t x354 = INT16_MIN;
	int32_t t88 = -1;

    t88 = (((x353^x354)>x355)<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MAX;
	uint64_t x358 = UINT64_MAX;
	int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	static int32_t t89 = -1647;

    t89 = (((x357^x358)>x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x361 = INT16_MAX;
	uint64_t x362 = 2683177893920LLU;
	int8_t x363 = -1;
	int32_t t90 = 88800;

    t90 = (((x361^x362)>x363)<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	uint16_t x368 = 10U;
	int32_t t91 = 1257;

    t91 = (((x365^x366)>x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x370 = 17754U;
	int8_t x371 = -1;
	static int32_t t92 = 74;

    t92 = (((x369^x370)>x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = 22684LLU;
	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -1LL;
	volatile int32_t t93 = 1;

    t93 = (((x373^x374)>x375)<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int16_t x378 = 54;
	static int64_t x379 = 2244381999955100394LL;

    t94 = (((x377^x378)>x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	static int8_t x382 = INT8_MIN;
	int8_t x384 = 1;
	static volatile int32_t t95 = 4122;

    t95 = (((x381^x382)>x383)<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	static int64_t x386 = 43585800568144LL;
	volatile uint64_t x387 = 1178372187351LLU;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t96 = -40432;

    t96 = (((x385^x386)>x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x390 = UINT8_MAX;
	int8_t x391 = INT8_MAX;
	int64_t x392 = 297799255303531710LL;
	volatile int32_t t97 = -805304;

    t97 = (((x389^x390)>x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 6U;
	static int32_t x395 = INT32_MIN;
	uint16_t x396 = 6327U;
	volatile int32_t t98 = -4760870;

    t98 = (((x393^x394)>x395)<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x398 = -6;
	volatile uint64_t x399 = 4532981907LLU;
	volatile int8_t x400 = -23;
	volatile int32_t t99 = -240602;

    t99 = (((x397^x398)>x399)<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x402 = -1;
	uint64_t x403 = 3261LLU;
	int8_t x404 = INT8_MIN;
	int32_t t100 = 259;

    t100 = (((x401^x402)>x403)<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static volatile int8_t x406 = INT8_MIN;
	static volatile int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MAX;
	int32_t t101 = -92641;

    t101 = (((x405^x406)>x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	static volatile uint64_t x410 = 3LLU;
	uint16_t x411 = UINT16_MAX;
	static int16_t x412 = INT16_MIN;
	static volatile int32_t t102 = -3301983;

    t102 = (((x409^x410)>x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 31334U;
	static uint16_t x414 = 407U;
	uint32_t x415 = 232465U;
	int32_t t103 = -1;

    t103 = (((x413^x414)>x415)<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int64_t x418 = INT64_MIN;
	static int32_t x420 = INT32_MIN;
	static volatile int32_t t104 = 809381;

    t104 = (((x417^x418)>x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x423 = -14840660438370LL;
	int64_t x424 = -1LL;
	int32_t t105 = -28990613;

    t105 = (((x421^x422)>x423)<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = 34;
	int8_t x426 = INT8_MIN;
	static int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;

    t106 = (((x425^x426)>x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 1633;
	uint64_t x430 = UINT64_MAX;
	uint8_t x431 = 0U;
	int64_t x432 = 7437995231192LL;
	volatile int32_t t107 = 11;

    t107 = (((x429^x430)>x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x433 = INT32_MIN;
	uint64_t x434 = 39479527LLU;
	uint8_t x435 = 56U;
	uint32_t x436 = 3644957U;
	volatile int32_t t108 = 132294;

    t108 = (((x433^x434)>x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	uint64_t x438 = 5732480LLU;
	int64_t x440 = -1LL;
	static int32_t t109 = -7527;

    t109 = (((x437^x438)>x439)<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = -15471;
	uint16_t x442 = 38U;
	uint16_t x443 = UINT16_MAX;
	static int16_t x444 = INT16_MIN;
	int32_t t110 = -15;

    t110 = (((x441^x442)>x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = 7680;
	int32_t x447 = -222;
	int16_t x448 = INT16_MAX;

    t111 = (((x445^x446)>x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 6U;
	uint16_t x450 = 244U;
	uint16_t x451 = 28088U;
	int8_t x452 = 11;

    t112 = (((x449^x450)>x451)<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint8_t x456 = UINT8_MAX;
	static int32_t t113 = 2052589;

    t113 = (((x453^x454)>x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = INT16_MIN;
	int32_t x460 = -1;
	static volatile int32_t t114 = 260778801;

    t114 = (((x457^x458)>x459)<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1354917219305487LL;
	int8_t x462 = -3;
	uint8_t x463 = 3U;
	int32_t x464 = INT32_MIN;

    t115 = (((x461^x462)>x463)<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x465 = INT32_MAX;
	uint64_t x466 = UINT64_MAX;
	static int16_t x467 = 56;
	int64_t x468 = -1LL;
	volatile int32_t t116 = -73081;

    t116 = (((x465^x466)>x467)<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 1816097562U;
	int32_t x470 = -6315;
	int16_t x471 = INT16_MIN;
	uint16_t x472 = UINT16_MAX;
	int32_t t117 = -5;

    t117 = (((x469^x470)>x471)<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = 57477489U;
	volatile int64_t x476 = INT64_MIN;
	int32_t t118 = -29;

    t118 = (((x473^x474)>x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;
	uint8_t x480 = 14U;
	volatile int32_t t119 = 32220;

    t119 = (((x477^x478)>x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x481 = 14U;
	uint32_t x482 = 2364387U;
	volatile uint8_t x483 = 18U;
	static volatile int32_t t120 = -13822;

    t120 = (((x481^x482)>x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x485 = INT16_MIN;
	static volatile int8_t x486 = -5;
	static uint64_t x487 = 11083356733LLU;

    t121 = (((x485^x486)>x487)<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 269810133560626LLU;
	int8_t x490 = 3;
	int16_t x492 = -9;
	volatile int32_t t122 = -11463865;

    t122 = (((x489^x490)>x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x494 = 24286U;
	static volatile int16_t x495 = -1;
	static volatile int32_t t123 = -147142951;

    t123 = (((x493^x494)>x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x498 = -1LL;
	static int8_t x499 = -1;
	uint32_t x500 = 121974U;
	int32_t t124 = 2257;

    t124 = (((x497^x498)>x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = 305884584;
	uint8_t x502 = 91U;
	int64_t x503 = INT64_MAX;
	static volatile int32_t x504 = INT32_MIN;
	volatile int32_t t125 = 7600;

    t125 = (((x501^x502)>x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	uint64_t x507 = 6753677147695654LLU;
	volatile int32_t t126 = -14;

    t126 = (((x505^x506)>x507)<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -1;
	uint32_t x512 = 12U;
	volatile int32_t t127 = -67287;

    t127 = (((x509^x510)>x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int16_t x514 = -1;
	uint32_t x515 = 33589U;
	int64_t x516 = 1048299LL;
	volatile int32_t t128 = 1176;

    t128 = (((x513^x514)>x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 50U;
	uint8_t x518 = 2U;
	uint16_t x519 = 0U;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = 5;

    t129 = (((x517^x518)>x519)<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -158830;
	static int8_t x522 = INT8_MIN;
	int32_t x523 = INT32_MAX;
	int16_t x524 = INT16_MIN;
	int32_t t130 = 46597218;

    t130 = (((x521^x522)>x523)<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x525 = UINT8_MAX;
	int16_t x528 = -1;
	volatile int32_t t131 = 3160069;

    t131 = (((x525^x526)>x527)<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -402311280;
	int8_t x530 = -15;
	int32_t x531 = -1049655;
	uint16_t x532 = 74U;
	static int32_t t132 = -21360;

    t132 = (((x529^x530)>x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -35932748247103195LL;
	static int32_t x534 = INT32_MIN;
	int64_t x535 = INT64_MAX;
	volatile int64_t x536 = -3779911591519674235LL;
	volatile int32_t t133 = 19991;

    t133 = (((x533^x534)>x535)<=x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -739;
	static int64_t x538 = -1LL;
	int32_t x539 = 1672192;
	int64_t x540 = 2758916866883100LL;
	int32_t t134 = -3488;

    t134 = (((x537^x538)>x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 6523LL;
	volatile uint16_t x542 = 139U;
	uint64_t x543 = 171LLU;
	volatile int32_t t135 = -175027;

    t135 = (((x541^x542)>x543)<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 39U;
	static int32_t x546 = -1;
	int32_t x547 = 2;
	static uint64_t x548 = 1791056LLU;

    t136 = (((x545^x546)>x547)<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = -7;
	volatile int32_t x551 = 15012210;
	int8_t x552 = -4;
	volatile int32_t t137 = -141;

    t137 = (((x549^x550)>x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	static uint32_t x554 = 29U;
	uint32_t x556 = 23064U;
	volatile int32_t t138 = 7547944;

    t138 = (((x553^x554)>x555)<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -214;
	uint32_t x558 = 1551577588U;
	static int16_t x559 = -1;
	volatile int32_t t139 = 3845;

    t139 = (((x557^x558)>x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 30;
	int64_t x562 = INT64_MAX;
	uint32_t x563 = UINT32_MAX;

    t140 = (((x561^x562)>x563)<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	uint64_t x566 = 60731330118LLU;
	int64_t x567 = INT64_MIN;
	int16_t x568 = 0;
	volatile int32_t t141 = -34337;

    t141 = (((x565^x566)>x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x569 = 682920231601414LLU;
	volatile int32_t x570 = -1;
	static volatile uint8_t x572 = 30U;
	volatile int32_t t142 = 1278;

    t142 = (((x569^x570)>x571)<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x574 = 38432234U;
	static int64_t x575 = INT64_MIN;
	uint8_t x576 = 0U;
	int32_t t143 = 13335;

    t143 = (((x573^x574)>x575)<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = -1;
	int32_t x579 = -1;
	static int16_t x580 = 70;
	volatile int32_t t144 = 1792;

    t144 = (((x577^x578)>x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x581 = -2380;
	volatile uint32_t x583 = UINT32_MAX;
	volatile int32_t t145 = 403;

    t145 = (((x581^x582)>x583)<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	uint16_t x586 = UINT16_MAX;
	volatile int32_t x587 = 5;
	static int16_t x588 = 1;
	int32_t t146 = 2261601;

    t146 = (((x585^x586)>x587)<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 9U;
	static uint16_t x590 = 4U;
	static volatile int32_t t147 = 5;

    t147 = (((x589^x590)>x591)<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x594 = INT16_MIN;
	volatile int32_t t148 = 14652840;

    t148 = (((x593^x594)>x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 3351078;
	int16_t x598 = -80;
	int32_t x599 = INT32_MIN;
	volatile uint64_t x600 = 774174248246LLU;

    t149 = (((x597^x598)>x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 23U;
	int32_t x602 = INT32_MAX;
	volatile uint32_t x603 = UINT32_MAX;
	uint16_t x604 = 1661U;
	int32_t t150 = -16777911;

    t150 = (((x601^x602)>x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	static int32_t x606 = 890;
	volatile uint64_t x608 = 898206351LLU;
	int32_t t151 = -10;

    t151 = (((x605^x606)>x607)<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x611 = INT8_MIN;
	static int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 1;

    t152 = (((x609^x610)>x611)<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x613 = -18336;
	int64_t x614 = INT64_MIN;
	int32_t x615 = INT32_MAX;
	volatile int64_t x616 = INT64_MIN;
	int32_t t153 = 158;

    t153 = (((x613^x614)>x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -16;
	int32_t x618 = -1;
	int32_t x619 = -2;

    t154 = (((x617^x618)>x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	uint8_t x622 = 38U;
	static volatile int32_t x623 = -1;
	int32_t t155 = 3;

    t155 = (((x621^x622)>x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 1356627;
	static uint8_t x626 = UINT8_MAX;
	uint32_t x627 = 62424U;
	static int16_t x628 = 10687;

    t156 = (((x625^x626)>x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = -1;
	int32_t x630 = INT32_MIN;
	int32_t x631 = -1;
	static int32_t x632 = INT32_MIN;

    t157 = (((x629^x630)>x631)<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	uint8_t x634 = 105U;
	volatile int8_t x635 = INT8_MIN;
	int32_t x636 = -1;
	volatile int32_t t158 = 442982;

    t158 = (((x633^x634)>x635)<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x637 = 11U;
	int8_t x638 = INT8_MIN;
	volatile int32_t t159 = -477466897;

    t159 = (((x637^x638)>x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = 2;
	volatile int8_t x642 = INT8_MAX;
	uint32_t x643 = 807U;
	volatile int16_t x644 = INT16_MAX;
	int32_t t160 = -56;

    t160 = (((x641^x642)>x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x646 = 243537LLU;
	int64_t x647 = INT64_MIN;
	uint64_t x648 = 32269147756029580LLU;
	int32_t t161 = 687;

    t161 = (((x645^x646)>x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MIN;
	uint16_t x650 = UINT16_MAX;
	int32_t x651 = -28621612;
	uint8_t x652 = 33U;
	static volatile int32_t t162 = 3070;

    t162 = (((x649^x650)>x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = 105U;
	static volatile int64_t x654 = INT64_MIN;
	uint8_t x655 = UINT8_MAX;
	int8_t x656 = -1;
	volatile int32_t t163 = -1972053;

    t163 = (((x653^x654)>x655)<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x657 = 107U;
	uint64_t x658 = 14043977064260556LLU;
	volatile int8_t x660 = 0;

    t164 = (((x657^x658)>x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 107LLU;
	volatile int16_t x662 = INT16_MIN;
	static int8_t x663 = -2;
	int8_t x664 = INT8_MIN;
	volatile int32_t t165 = -44159;

    t165 = (((x661^x662)>x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x665 = 4U;
	static int8_t x666 = -1;
	int8_t x668 = INT8_MIN;
	static volatile int32_t t166 = 746218371;

    t166 = (((x665^x666)>x667)<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x669 = INT64_MIN;
	volatile int32_t x670 = INT32_MAX;
	volatile int8_t x671 = -1;
	volatile int32_t t167 = 61096755;

    t167 = (((x669^x670)>x671)<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x673 = UINT16_MAX;
	int8_t x674 = INT8_MIN;
	volatile int8_t x675 = 0;
	int64_t x676 = -1LL;
	int32_t t168 = -916598;

    t168 = (((x673^x674)>x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = -2;
	volatile uint8_t x678 = 1U;
	uint16_t x679 = 15U;
	uint32_t x680 = 825163U;

    t169 = (((x677^x678)>x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	int16_t x682 = -1;
	int16_t x683 = -4;
	int32_t t170 = 2263;

    t170 = (((x681^x682)>x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 79U;
	static volatile int16_t x686 = -1;
	static int32_t t171 = -10;

    t171 = (((x685^x686)>x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 442279058U;
	volatile uint8_t x691 = 127U;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = 0;

    t172 = (((x689^x690)>x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = INT32_MIN;
	int32_t x694 = -1;
	static volatile uint16_t x695 = 14786U;
	volatile int32_t x696 = INT32_MAX;
	int32_t t173 = 540647265;

    t173 = (((x693^x694)>x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 58U;
	int64_t x698 = INT64_MIN;
	int64_t x699 = INT64_MIN;
	static uint64_t x700 = 3991076822578358LLU;
	volatile int32_t t174 = 236050526;

    t174 = (((x697^x698)>x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	volatile int16_t x702 = -38;
	uint32_t x703 = UINT32_MAX;
	int32_t x704 = INT32_MIN;

    t175 = (((x701^x702)>x703)<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = -1LL;
	volatile uint8_t x707 = 14U;
	volatile int32_t t176 = 69603698;

    t176 = (((x705^x706)>x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 117114U;
	int8_t x710 = INT8_MIN;
	volatile uint64_t x711 = 62709098069LLU;
	volatile int32_t t177 = 0;

    t177 = (((x709^x710)>x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = -1;
	volatile int16_t x715 = -3;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = -521635;

    t178 = (((x713^x714)>x715)<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x719 = INT64_MIN;
	int32_t x720 = -546671;
	int32_t t179 = 184516972;

    t179 = (((x717^x718)>x719)<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 500;
	static int8_t x722 = 45;
	uint64_t x723 = 230848409790LLU;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = 1456;

    t180 = (((x721^x722)>x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	static uint64_t x726 = UINT64_MAX;
	uint8_t x728 = 1U;
	static int32_t t181 = 1;

    t181 = (((x725^x726)>x727)<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	static int32_t x730 = INT32_MIN;
	int64_t x731 = INT64_MIN;
	int64_t x732 = INT64_MAX;
	int32_t t182 = -449;

    t182 = (((x729^x730)>x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 215101723;
	static volatile uint16_t x734 = UINT16_MAX;
	int8_t x735 = -7;
	uint32_t x736 = UINT32_MAX;
	static int32_t t183 = -530665;

    t183 = (((x733^x734)>x735)<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	static uint16_t x738 = 841U;
	static uint32_t x739 = 8065U;
	uint32_t x740 = 459U;
	static volatile int32_t t184 = -17;

    t184 = (((x737^x738)>x739)<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 15U;
	volatile uint8_t x742 = 9U;
	int16_t x744 = INT16_MIN;

    t185 = (((x741^x742)>x743)<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	int16_t x746 = INT16_MAX;
	int8_t x747 = INT8_MIN;
	static int32_t x748 = INT32_MAX;
	int32_t t186 = -2;

    t186 = (((x745^x746)>x747)<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint8_t x750 = 0U;
	int8_t x751 = -3;

    t187 = (((x749^x750)>x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x754 = UINT8_MAX;
	int16_t x755 = -14;
	static volatile int32_t t188 = -416;

    t188 = (((x753^x754)>x755)<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 23407136U;
	volatile uint16_t x758 = UINT16_MAX;
	static volatile int64_t x760 = -78783LL;
	volatile int32_t t189 = 280001;

    t189 = (((x757^x758)>x759)<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = -1;
	int64_t x762 = -1LL;
	volatile int8_t x764 = 2;
	int32_t t190 = 8583789;

    t190 = (((x761^x762)>x763)<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	static int16_t x766 = 6;
	int64_t x767 = 29423253572LL;
	int64_t x768 = -1LL;
	volatile int32_t t191 = 130532564;

    t191 = (((x765^x766)>x767)<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = 103;
	static int8_t x770 = INT8_MIN;
	int32_t x771 = INT32_MIN;
	uint64_t x772 = UINT64_MAX;
	int32_t t192 = 233969;

    t192 = (((x769^x770)>x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = INT8_MAX;
	int16_t x775 = 6603;
	volatile uint16_t x776 = UINT16_MAX;

    t193 = (((x773^x774)>x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 5230;
	volatile uint8_t x778 = 37U;
	int8_t x779 = INT8_MIN;
	int32_t x780 = -1;
	int32_t t194 = -488025957;

    t194 = (((x777^x778)>x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x781 = UINT64_MAX;
	static int32_t x782 = -1;
	volatile int32_t x784 = -1;
	int32_t t195 = -83;

    t195 = (((x781^x782)>x783)<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = UINT32_MAX;
	int64_t x787 = INT64_MAX;
	int32_t t196 = -13485106;

    t196 = (((x785^x786)>x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = 124;
	int32_t x792 = -311242653;
	static volatile int32_t t197 = -36218347;

    t197 = (((x789^x790)>x791)<=x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MIN;
	volatile int32_t x795 = -232;

    t198 = (((x793^x794)>x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	uint64_t x799 = UINT64_MAX;
	volatile uint16_t x800 = 151U;
	static volatile int32_t t199 = -59312;

    t199 = (((x797^x798)>x799)<=x800);

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

