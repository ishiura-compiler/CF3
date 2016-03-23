
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

int16_t x2 = 3632;
int64_t x5 = 18LL;
uint32_t x7 = 897109U;
volatile uint64_t t1 = UINT64_MAX;
int64_t x12 = INT64_MIN;
volatile int16_t x21 = -1;
int8_t x31 = INT8_MIN;
int32_t t7 = 574;
int8_t x47 = 1;
volatile int32_t t11 = -4;
int64_t x50 = -1LL;
uint64_t x61 = UINT64_MAX;
static volatile int16_t x62 = -1;
int8_t x63 = -1;
int64_t x65 = INT64_MIN;
uint16_t x72 = 752U;
volatile int16_t x74 = 112;
int64_t x80 = INT64_MIN;
int64_t x85 = 787583986LL;
static int16_t x86 = 1;
volatile int32_t x88 = -2231;
int32_t x96 = INT32_MIN;
int64_t x104 = INT64_MIN;
volatile int16_t x119 = INT16_MAX;
static int32_t x124 = -1;
uint8_t x128 = 125U;
volatile int32_t t31 = 505580;
int8_t x134 = 20;
static volatile int32_t t33 = 3;
static volatile uint64_t x140 = 7947556474760LLU;
uint64_t t34 = 12LLU;
volatile uint8_t x141 = 81U;
static int64_t x147 = -533519211LL;
uint32_t x150 = UINT32_MAX;
static int64_t x155 = 4LL;
volatile int8_t x163 = 25;
uint32_t t40 = UINT32_MAX;
uint16_t x173 = 23304U;
volatile int32_t x179 = INT32_MIN;
uint32_t x185 = 12636U;
int16_t x188 = INT16_MIN;
int32_t x189 = INT32_MIN;
uint8_t x196 = 6U;
int32_t t48 = 265;
static int64_t x205 = INT64_MAX;
volatile int64_t x208 = 4592596519159490179LL;
uint32_t x212 = UINT32_MAX;
int16_t x220 = INT16_MIN;
static int32_t t54 = -174268767;
uint8_t x221 = 87U;
int16_t x227 = -1;
volatile int32_t t56 = 113;
static int16_t x231 = -9;
static volatile int8_t x243 = INT8_MIN;
volatile int32_t t60 = -41755180;
int64_t t62 = -85397067183LL;
volatile int32_t x265 = INT32_MIN;
uint8_t x266 = UINT8_MAX;
volatile int32_t t65 = -13;
uint16_t x271 = 59U;
int64_t x272 = INT64_MAX;
static int16_t x275 = -123;
int8_t x281 = -1;
static volatile int32_t t68 = -98548866;
int64_t t69 = INT64_MIN;
uint64_t x291 = 249987LLU;
int64_t x307 = INT64_MIN;
uint64_t x310 = 8152754LLU;
volatile int8_t x312 = INT8_MAX;
int32_t x315 = INT32_MIN;
int64_t t78 = -13333844LL;
int32_t x330 = 904;
static int64_t x337 = 994122031895397LL;
volatile uint8_t x347 = 8U;
static uint8_t x348 = UINT8_MAX;
int32_t t85 = 24127012;
int16_t x353 = INT16_MAX;
static int32_t x358 = INT32_MIN;
uint16_t x361 = 2327U;
uint64_t x371 = 36401651744228309LLU;
static int32_t t90 = -38075;
volatile int8_t x378 = INT8_MIN;
int64_t x387 = INT64_MAX;
int32_t t95 = 3608446;
volatile uint8_t x396 = 1U;
static int8_t x398 = 1;
int64_t x399 = INT64_MIN;
uint16_t x400 = 5779U;
int8_t x404 = -1;
int32_t t98 = 486;
int8_t x408 = 2;
static uint8_t x409 = UINT8_MAX;
uint32_t x416 = UINT32_MAX;
uint32_t t101 = 5669U;
uint16_t x420 = UINT16_MAX;
int16_t x421 = 4890;
int64_t x424 = 28LL;
volatile int64_t t103 = 9700637492269389LL;
int16_t x430 = INT16_MIN;
static uint32_t x432 = 72772003U;
int64_t x433 = -2LL;
int64_t x435 = INT64_MIN;
int8_t x440 = -61;
int16_t x449 = INT16_MIN;
static volatile int64_t t110 = 5LL;
int32_t x456 = INT32_MIN;
static volatile int32_t x459 = -1;
static int32_t x463 = INT32_MAX;
uint32_t t114 = UINT32_MAX;
static int8_t x469 = INT8_MIN;
uint32_t x474 = UINT32_MAX;
volatile int16_t x478 = 3974;
uint64_t x484 = UINT64_MAX;
int8_t x486 = INT8_MIN;
int64_t x492 = -93LL;
volatile int32_t t122 = -75213;
volatile int64_t x502 = INT64_MIN;
static int16_t x507 = 26;
int8_t x508 = -1;
volatile int32_t t124 = 11803;
int32_t x513 = 49861975;
volatile int32_t t128 = 102331;
volatile int16_t x531 = -1;
uint64_t x537 = 46794908654165LLU;
int32_t x539 = INT32_MIN;
static int8_t x541 = -1;
int8_t x542 = -1;
static int64_t x543 = INT64_MIN;
int64_t x544 = INT64_MIN;
int64_t x548 = INT64_MAX;
static volatile int32_t t136 = -185929187;
uint8_t x558 = UINT8_MAX;
int16_t x560 = -1;
volatile uint64_t t140 = 188967336070LLU;
static uint16_t x574 = 24301U;
volatile uint32_t x577 = 41176112U;
int32_t x578 = INT32_MIN;
static int8_t x583 = INT8_MAX;
int32_t x593 = 2;
int8_t x596 = -1;
int32_t x601 = -954714;
static int32_t t148 = 50;
uint8_t x613 = 71U;
static volatile int8_t x635 = INT8_MIN;
int32_t t157 = 18;
static int16_t x643 = -12396;
int8_t x646 = -1;
int64_t x648 = -248969LL;
uint64_t t160 = 1685461LLU;
int8_t x655 = INT8_MAX;
volatile int32_t t161 = -118;
static volatile int8_t x660 = INT8_MIN;
static int8_t x664 = -1;
volatile int32_t t163 = 1208;
volatile uint64_t x665 = 1102901226126LLU;
volatile uint64_t x667 = UINT64_MAX;
volatile int32_t x679 = INT32_MIN;
int32_t x680 = 1;
int16_t x681 = -1;
int32_t t168 = 105110;
int16_t x688 = INT16_MIN;
int64_t t171 = -1633338LL;
int32_t x698 = -1;
volatile uint8_t x704 = 25U;
int32_t x706 = INT32_MIN;
volatile int32_t t174 = 31;
volatile int32_t x713 = INT32_MIN;
int64_t x731 = INT64_MIN;
static uint16_t x734 = 0U;
int16_t x735 = -1;
static uint8_t x739 = 82U;
uint64_t x748 = UINT64_MAX;
volatile uint64_t t184 = UINT64_MAX;
volatile int32_t t185 = 19966;
uint16_t x756 = 33U;
uint8_t x762 = 3U;
int16_t x764 = INT16_MAX;
volatile uint16_t x777 = UINT16_MAX;
volatile uint16_t x783 = 1U;
int64_t x786 = INT64_MIN;
uint8_t x789 = UINT8_MAX;
uint64_t x791 = 28081696946LLU;
uint32_t x798 = 1U;
int32_t t198 = -15944100;
uint16_t x805 = UINT16_MAX;


void f0(void) {
    	int16_t x1 = -1;
	static int16_t x3 = -1;
	uint16_t x4 = 134U;
	volatile int32_t t0 = 480257761;

    t0 = (((x1&x2)>x3)+x4);

    if (t0 != 135) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -1;
	volatile uint64_t x8 = UINT64_MAX;

    t1 = (((x5&x6)>x7)+x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MIN;
	volatile int32_t x11 = -1;
	int64_t t2 = INT64_MIN;

    t2 = (((x9&x10)>x11)+x12);

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	int8_t x16 = 3;
	volatile int32_t t3 = 15939;

    t3 = (((x13&x14)>x15)+x16);

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 226085;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = 0;
	uint64_t x20 = 81244213LLU;
	volatile uint64_t t4 = 3254460138870328LLU;

    t4 = (((x17&x18)>x19)+x20);

    if (t4 != 81244214LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x22 = 5771LL;
	static int32_t x23 = 96;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -3454146215710423LL;

    t5 = (((x21&x22)>x23)+x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int16_t x26 = 30;
	int8_t x27 = -1;
	static uint64_t x28 = UINT64_MAX;
	static volatile uint64_t t6 = 2159725653LLU;

    t6 = (((x25&x26)>x27)+x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 30U;
	uint64_t x30 = UINT64_MAX;
	volatile uint16_t x32 = UINT16_MAX;

    t7 = (((x29&x30)>x31)+x32);

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 353936585;
	int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	int8_t x36 = -1;
	static int32_t t8 = 6703;

    t8 = (((x33&x34)>x35)+x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 13295246LLU;
	uint64_t x38 = 256612588356061535LLU;
	volatile int32_t x39 = -2;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 62282;

    t9 = (((x37&x38)>x39)+x40);

    if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	static int32_t x42 = INT32_MIN;
	int32_t x43 = 267;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -2;

    t10 = (((x41&x42)>x43)+x44);

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 2;
	uint32_t x46 = 50U;
	int32_t x48 = -176;

    t11 = (((x45&x46)>x47)+x48);

    if (t11 != -175) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	volatile int64_t x51 = INT64_MAX;
	uint16_t x52 = 5221U;
	int32_t t12 = 3147;

    t12 = (((x49&x50)>x51)+x52);

    if (t12 != 5221) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	int32_t x54 = 7943727;
	uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 161U;
	int32_t t13 = -343;

    t13 = (((x53&x54)>x55)+x56);

    if (t13 != 161) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = 748;
	uint64_t x59 = 13LLU;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = INT64_MAX;

    t14 = (((x57&x58)>x59)+x60);

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x64 = INT64_MIN;
	static volatile int64_t t15 = INT64_MIN;

    t15 = (((x61&x62)>x63)+x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = 925;
	int64_t x67 = INT64_MIN;
	volatile int16_t x68 = -1;
	static int32_t t16 = 89804990;

    t16 = (((x65&x66)>x67)+x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -20573869LL;
	static int32_t x70 = 94381171;
	int64_t x71 = INT64_MIN;
	volatile int32_t t17 = 7;

    t17 = (((x69&x70)>x71)+x72);

    if (t17 != 753) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1LL;
	static volatile int64_t t18 = 1662LL;

    t18 = (((x73&x74)>x75)+x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x77 = 7730U;
	uint16_t x78 = 33U;
	uint64_t x79 = 4477495LLU;
	static volatile int64_t t19 = INT64_MIN;

    t19 = (((x77&x78)>x79)+x80);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	static int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 975;

    t20 = (((x81&x82)>x83)+x84);

    if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x87 = 182440445407LL;
	int32_t t21 = 0;

    t21 = (((x85&x86)>x87)+x88);

    if (t21 != -2231) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 962315805;
	int64_t x90 = -2036760LL;
	volatile uint64_t x91 = 24204669622475101LLU;
	uint64_t x92 = 22LLU;
	uint64_t t22 = 4857919232LLU;

    t22 = (((x89&x90)>x91)+x92);

    if (t22 != 22LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = 22253U;
	int32_t t23 = INT32_MIN;

    t23 = (((x93&x94)>x95)+x96);

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -55LL;
	volatile int64_t x98 = INT64_MIN;
	int32_t x99 = -531697410;
	int64_t x100 = -99835LL;
	volatile int64_t t24 = 39376LL;

    t24 = (((x97&x98)>x99)+x100);

    if (t24 != -99835LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	int32_t x102 = 7;
	int8_t x103 = INT8_MIN;
	int64_t t25 = -90520831132732529LL;

    t25 = (((x101&x102)>x103)+x104);

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = -24128;
	static uint32_t x107 = 3977852U;
	uint8_t x108 = 30U;
	int32_t t26 = -737526;

    t26 = (((x105&x106)>x107)+x108);

    if (t26 != 31) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	static int16_t x110 = INT16_MIN;
	int64_t x111 = 3984078078300887LL;
	static volatile int64_t x112 = -1LL;
	int64_t t27 = 1379656943890802613LL;

    t27 = (((x109&x110)>x111)+x112);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -1LL;
	int64_t x114 = 724615528579941LL;
	volatile uint16_t x115 = UINT16_MAX;
	static int32_t x116 = -489;
	volatile int32_t t28 = -32336;

    t28 = (((x113&x114)>x115)+x116);

    if (t28 != -488) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	int8_t x118 = 56;
	volatile uint16_t x120 = 5939U;
	volatile int32_t t29 = -31846960;

    t29 = (((x117&x118)>x119)+x120);

    if (t29 != 5939) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	volatile uint8_t x122 = 30U;
	static int32_t x123 = -1;
	int32_t t30 = -1;

    t30 = (((x121&x122)>x123)+x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -1;
	uint16_t x126 = 11U;
	int32_t x127 = -50437;

    t31 = (((x125&x126)>x127)+x128);

    if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 0U;
	int64_t x130 = -1LL;
	volatile int16_t x131 = -1;
	static int8_t x132 = INT8_MAX;
	static volatile int32_t t32 = 49079821;

    t32 = (((x129&x130)>x131)+x132);

    if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = -1;
	volatile uint32_t x135 = UINT32_MAX;
	uint16_t x136 = UINT16_MAX;

    t33 = (((x133&x134)>x135)+x136);

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -47446350;
	static volatile int64_t x138 = 4854825911LL;
	volatile uint32_t x139 = UINT32_MAX;

    t34 = (((x137&x138)>x139)+x140);

    if (t34 != 7947556474761LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = 1;
	volatile uint16_t x143 = 13776U;
	int16_t x144 = -1;
	int32_t t35 = 131331721;

    t35 = (((x141&x142)>x143)+x144);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 71U;
	int32_t x146 = -1;
	int64_t x148 = INT64_MIN;
	volatile int64_t t36 = -4558482130746092LL;

    t36 = (((x145&x146)>x147)+x148);

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = -1045220;
	int64_t x151 = INT64_MAX;
	volatile int16_t x152 = 227;
	volatile int32_t t37 = -201225;

    t37 = (((x149&x150)>x151)+x152);

    if (t37 != 227) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x153 = 15U;
	int16_t x154 = -27;
	uint16_t x156 = 5U;
	volatile int32_t t38 = 55;

    t38 = (((x153&x154)>x155)+x156);

    if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x157 = INT16_MAX;
	uint16_t x158 = 104U;
	uint32_t x159 = 4578U;
	int32_t x160 = -1;
	volatile int32_t t39 = 14986;

    t39 = (((x157&x158)>x159)+x160);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 3297U;
	static int16_t x162 = 11;
	uint32_t x164 = UINT32_MAX;

    t40 = (((x161&x162)>x163)+x164);

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = 22755LLU;
	int8_t x166 = INT8_MAX;
	static int16_t x167 = INT16_MIN;
	static volatile int16_t x168 = INT16_MIN;
	int32_t t41 = -7233200;

    t41 = (((x165&x166)>x167)+x168);

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -19549;
	uint16_t x170 = UINT16_MAX;
	volatile int16_t x171 = 24;
	uint64_t x172 = 444570506393663LLU;
	uint64_t t42 = 67929260019260448LLU;

    t42 = (((x169&x170)>x171)+x172);

    if (t42 != 444570506393664LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x174 = -1LL;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t x176 = 21240LLU;
	uint64_t t43 = 51869533447LLU;

    t43 = (((x173&x174)>x175)+x176);

    if (t43 != 21240LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	volatile int8_t x180 = INT8_MAX;
	int32_t t44 = 4741998;

    t44 = (((x177&x178)>x179)+x180);

    if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = INT8_MAX;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 173140114;

    t45 = (((x181&x182)>x183)+x184);

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x186 = UINT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int32_t t46 = -22;

    t46 = (((x185&x186)>x187)+x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -1;
	int64_t x191 = 153294797325686850LL;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = -286;

    t47 = (((x189&x190)>x191)+x192);

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = 1;
	uint32_t x194 = 154325U;
	static uint64_t x195 = 8640LLU;

    t48 = (((x193&x194)>x195)+x196);

    if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x197 = INT32_MAX;
	static uint64_t x198 = 1928710006LLU;
	uint8_t x199 = 23U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 0;

    t49 = (((x197&x198)>x199)+x200);

    if (t49 != 65536) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	volatile int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	uint16_t x204 = 204U;
	volatile int32_t t50 = 861598341;

    t50 = (((x201&x202)>x203)+x204);

    if (t50 != 204) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = 11U;
	int32_t x207 = INT32_MIN;
	int64_t t51 = -3981874699LL;

    t51 = (((x205&x206)>x207)+x208);

    if (t51 != 4592596519159490180LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = 45;
	int16_t x210 = INT16_MIN;
	volatile int16_t x211 = -1;
	volatile uint32_t t52 = 6781U;

    t52 = (((x209&x210)>x211)+x212);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = -1;
	int64_t x214 = INT64_MAX;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t53 = INT32_MIN;

    t53 = (((x213&x214)>x215)+x216);

    if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = -1;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MAX;

    t54 = (((x217&x218)>x219)+x220);

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MAX;
	int16_t x223 = -1;
	uint32_t x224 = 32117U;
	uint32_t t55 = 214552U;

    t55 = (((x221&x222)>x223)+x224);

    if (t55 != 32118U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MIN;
	static int32_t x228 = 23;

    t56 = (((x225&x226)>x227)+x228);

    if (t56 != 24) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	int64_t x230 = -208011094770496046LL;
	volatile uint8_t x232 = 12U;
	volatile int32_t t57 = -76232;

    t57 = (((x229&x230)>x231)+x232);

    if (t57 != 12) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint32_t x233 = UINT32_MAX;
	int32_t x234 = 1878;
	int16_t x235 = -7;
	volatile uint16_t x236 = 32186U;
	int32_t t58 = 1646;

    t58 = (((x233&x234)>x235)+x236);

    if (t58 != 32186) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x237 = -1;
	int8_t x238 = 0;
	uint8_t x239 = 26U;
	static int32_t x240 = -1;
	int32_t t59 = -116580;

    t59 = (((x237&x238)>x239)+x240);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = -1;
	int8_t x242 = -1;
	static uint16_t x244 = 0U;

    t60 = (((x241&x242)>x243)+x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = UINT64_MAX;
	static volatile int64_t x246 = INT64_MAX;
	int8_t x247 = -6;
	int64_t x248 = -450LL;
	int64_t t61 = 505361LL;

    t61 = (((x245&x246)>x247)+x248);

    if (t61 != -450LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MAX;
	uint16_t x251 = 31U;
	volatile int64_t x252 = 3897LL;

    t62 = (((x249&x250)>x251)+x252);

    if (t62 != 3898LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	uint32_t x254 = 104815U;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 1001U;
	volatile int32_t t63 = -3;

    t63 = (((x253&x254)>x255)+x256);

    if (t63 != 1002) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 14U;
	int64_t x263 = INT64_MIN;
	static int16_t x264 = -1;
	volatile int32_t t64 = -330386;

    t64 = (((x261&x262)>x263)+x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x267 = 1620178;
	static uint8_t x268 = 15U;

    t65 = (((x265&x266)>x267)+x268);

    if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x269 = UINT8_MAX;
	volatile int32_t x270 = INT32_MIN;
	int64_t t66 = INT64_MAX;

    t66 = (((x269&x270)>x271)+x272);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	static volatile uint32_t x274 = 5256714U;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

    t67 = (((x273&x274)>x275)+x276);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x282 = 104U;
	int32_t x283 = 5493;
	int32_t x284 = -1;

    t68 = (((x281&x282)>x283)+x284);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x285 = 4U;
	static volatile int8_t x286 = INT8_MIN;
	volatile int16_t x287 = -1;
	int64_t x288 = INT64_MIN;

    t69 = (((x285&x286)>x287)+x288);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x289 = -63;
	uint8_t x290 = UINT8_MAX;
	uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t70 = UINT32_MAX;

    t70 = (((x289&x290)>x291)+x292);

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x293 = 13505443U;
	static int8_t x294 = INT8_MIN;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t71 = 118;

    t71 = (((x293&x294)>x295)+x296);

    if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = -800;
	volatile int16_t x298 = INT16_MAX;
	uint16_t x299 = 17425U;
	static uint8_t x300 = 0U;
	static volatile int32_t t72 = -61857399;

    t72 = (((x297&x298)>x299)+x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = -943102176;
	int16_t x302 = -246;
	uint64_t x303 = 850528967527311LLU;
	uint64_t x304 = 55433010855LLU;
	static volatile uint64_t t73 = 419048035651776LLU;

    t73 = (((x301&x302)>x303)+x304);

    if (t73 != 55433010856LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x305 = -1;
	int8_t x306 = INT8_MAX;
	static uint8_t x308 = UINT8_MAX;
	static volatile int32_t t74 = 1429999;

    t74 = (((x305&x306)>x307)+x308);

    if (t74 != 256) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = -24;
	int16_t x311 = INT16_MIN;
	int32_t t75 = 742493;

    t75 = (((x309&x310)>x311)+x312);

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = INT16_MIN;
	static volatile int64_t x314 = -1LL;
	static int16_t x316 = INT16_MIN;
	static volatile int32_t t76 = 770596574;

    t76 = (((x313&x314)>x315)+x316);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x317 = 5178U;
	int64_t x318 = 31LL;
	static uint8_t x319 = 41U;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t77 = -177394;

    t77 = (((x317&x318)>x319)+x320);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -1LL;
	static int64_t x322 = 60006LL;
	int64_t x323 = -1LL;
	int64_t x324 = -25997691239802LL;

    t78 = (((x321&x322)>x323)+x324);

    if (t78 != -25997691239801LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x325 = 1U;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = -2;
	int64_t x328 = INT64_MIN;
	volatile int64_t t79 = 1237900473576715LL;

    t79 = (((x325&x326)>x327)+x328);

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x329 = INT32_MIN;
	static uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t80 = 6;

    t80 = (((x329&x330)>x331)+x332);

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MAX;
	uint16_t x334 = 235U;
	uint32_t x335 = 1821684U;
	uint8_t x336 = 1U;
	volatile int32_t t81 = -119385;

    t81 = (((x333&x334)>x335)+x336);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;
	static int64_t t82 = 2296773839583484866LL;

    t82 = (((x337&x338)>x339)+x340);

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x341 = 4LL;
	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 956U;
	int32_t x344 = INT32_MIN;
	volatile int32_t t83 = INT32_MIN;

    t83 = (((x341&x342)>x343)+x344);

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	int32_t t84 = 96;

    t84 = (((x345&x346)>x347)+x348);

    if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = 9U;
	static int32_t x350 = 926706;
	int16_t x351 = INT16_MIN;
	int8_t x352 = -1;

    t85 = (((x349&x350)>x351)+x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x354 = 3U;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = 491U;
	volatile uint32_t t86 = 3U;

    t86 = (((x353&x354)>x355)+x356);

    if (t86 != 491U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	static int32_t x359 = -752;
	uint32_t x360 = 745U;
	volatile uint32_t t87 = 33092U;

    t87 = (((x357&x358)>x359)+x360);

    if (t87 != 745U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x362 = INT16_MIN;
	static uint32_t x363 = 56777440U;
	uint32_t x364 = 2241U;
	static volatile uint32_t t88 = 5433U;

    t88 = (((x361&x362)>x363)+x364);

    if (t88 != 2241U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x365 = UINT64_MAX;
	int32_t x366 = -79858484;
	static int32_t x367 = INT32_MIN;
	volatile uint8_t x368 = UINT8_MAX;
	static int32_t t89 = 202660;

    t89 = (((x365&x366)>x367)+x368);

    if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = 2;
	uint16_t x370 = 4U;
	uint16_t x372 = 12U;

    t90 = (((x369&x370)>x371)+x372);

    if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x373 = 1;
	int8_t x374 = INT8_MIN;
	uint8_t x375 = 0U;
	int64_t x376 = 737912LL;
	static int64_t t91 = 83900LL;

    t91 = (((x373&x374)>x375)+x376);

    if (t91 != 737912LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = 1726U;
	static uint64_t x379 = 331127854966276831LLU;
	int32_t x380 = 0;
	static int32_t t92 = 20522;

    t92 = (((x377&x378)>x379)+x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x381 = 381861994LLU;
	volatile int32_t x382 = -1;
	static volatile int8_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	int64_t t93 = INT64_MIN;

    t93 = (((x381&x382)>x383)+x384);

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x385 = 490189765;
	uint32_t x386 = 126061813U;
	uint64_t x388 = 8765208093985LLU;
	uint64_t t94 = 19842LLU;

    t94 = (((x385&x386)>x387)+x388);

    if (t94 != 8765208093985LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x390 = 2LL;
	static int8_t x391 = -1;
	volatile int32_t x392 = -1;

    t95 = (((x389&x390)>x391)+x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x393 = -2;
	uint16_t x394 = 12571U;
	int8_t x395 = -4;
	int32_t t96 = -11;

    t96 = (((x393&x394)>x395)+x396);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x397 = INT8_MIN;
	static int32_t t97 = 12613;

    t97 = (((x397&x398)>x399)+x400);

    if (t97 != 5780) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x401 = 592798965399167LLU;
	static uint16_t x402 = UINT16_MAX;
	int32_t x403 = -1;

    t98 = (((x401&x402)>x403)+x404);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = 19808758U;
	int16_t x406 = -199;
	int8_t x407 = -1;
	int32_t t99 = -838;

    t99 = (((x405&x406)>x407)+x408);

    if (t99 != 2) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x410 = -1;
	int8_t x411 = 46;
	int32_t x412 = INT32_MIN;
	int32_t t100 = 119948;

    t100 = (((x409&x410)>x411)+x412);

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = 4;
	int32_t x414 = -2618801;
	int32_t x415 = -19936;

    t101 = (((x413&x414)>x415)+x416);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = -8738;
	uint8_t x418 = UINT8_MAX;
	volatile uint8_t x419 = 0U;
	int32_t t102 = 0;

    t102 = (((x417&x418)>x419)+x420);

    if (t102 != 65536) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x422 = 205U;
	int32_t x423 = -252;

    t103 = (((x421&x422)>x423)+x424);

    if (t103 != 29LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x425 = -1;
	static int16_t x426 = -1;
	static int16_t x427 = -1;
	static uint8_t x428 = 4U;
	int32_t t104 = 2;

    t104 = (((x425&x426)>x427)+x428);

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x429 = -1;
	static uint32_t x431 = UINT32_MAX;
	uint32_t t105 = 19U;

    t105 = (((x429&x430)>x431)+x432);

    if (t105 != 72772003U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x434 = INT32_MIN;
	static int8_t x436 = -59;
	volatile int32_t t106 = 51019105;

    t106 = (((x433&x434)>x435)+x436);

    if (t106 != -58) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x437 = UINT32_MAX;
	volatile int64_t x438 = -1LL;
	int64_t x439 = INT64_MAX;
	volatile int32_t t107 = 1;

    t107 = (((x437&x438)>x439)+x440);

    if (t107 != -61) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = 224;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	static int8_t x444 = -1;
	static volatile int32_t t108 = -14603386;

    t108 = (((x441&x442)>x443)+x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x445 = 7U;
	uint16_t x446 = 16320U;
	static volatile uint32_t x447 = UINT32_MAX;
	uint8_t x448 = 14U;
	int32_t t109 = -6;

    t109 = (((x445&x446)>x447)+x448);

    if (t109 != 14) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x450 = UINT64_MAX;
	volatile int64_t x451 = INT64_MAX;
	volatile int64_t x452 = -1LL;

    t110 = (((x449&x450)>x451)+x452);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x453 = -1;
	static volatile int8_t x454 = -1;
	uint16_t x455 = 62U;
	int32_t t111 = INT32_MIN;

    t111 = (((x453&x454)>x455)+x456);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = INT8_MIN;
	uint16_t x458 = 115U;
	volatile uint16_t x460 = 347U;
	static volatile int32_t t112 = -96784;

    t112 = (((x457&x458)>x459)+x460);

    if (t112 != 348) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x461 = INT32_MIN;
	int32_t x462 = -1;
	int16_t x464 = INT16_MIN;
	int32_t t113 = 41786;

    t113 = (((x461&x462)>x463)+x464);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x465 = -1;
	static int8_t x466 = INT8_MIN;
	uint16_t x467 = 1U;
	uint32_t x468 = UINT32_MAX;

    t114 = (((x465&x466)>x467)+x468);

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x470 = -1;
	int32_t x471 = INT32_MIN;
	uint64_t x472 = 1532324173LLU;
	uint64_t t115 = 1416283273051577738LLU;

    t115 = (((x469&x470)>x471)+x472);

    if (t115 != 1532324174LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x473 = INT16_MAX;
	volatile int16_t x475 = 138;
	uint8_t x476 = UINT8_MAX;
	int32_t t116 = 4;

    t116 = (((x473&x474)>x475)+x476);

    if (t116 != 256) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x479 = 0;
	int64_t x480 = INT64_MIN;
	static volatile int64_t t117 = 424840624240633LL;

    t117 = (((x477&x478)>x479)+x480);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x481 = UINT16_MAX;
	static int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MAX;
	uint64_t t118 = UINT64_MAX;

    t118 = (((x481&x482)>x483)+x484);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x485 = -1;
	static int16_t x487 = -3566;
	static volatile int64_t x488 = -1038761837LL;
	int64_t t119 = 219477LL;

    t119 = (((x485&x486)>x487)+x488);

    if (t119 != -1038761836LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x489 = 2U;
	int8_t x490 = -30;
	int64_t x491 = INT64_MIN;
	volatile int64_t t120 = 178437290LL;

    t120 = (((x489&x490)>x491)+x492);

    if (t120 != -92LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x493 = UINT16_MAX;
	uint16_t x494 = UINT16_MAX;
	volatile int8_t x495 = -1;
	int8_t x496 = INT8_MAX;
	static int32_t t121 = -67748;

    t121 = (((x493&x494)>x495)+x496);

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x497 = INT64_MAX;
	static int16_t x498 = INT16_MIN;
	uint64_t x499 = 306824LLU;
	static int32_t x500 = INT32_MIN;

    t122 = (((x497&x498)>x499)+x500);

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x501 = -1;
	uint8_t x503 = 75U;
	uint8_t x504 = 0U;
	volatile int32_t t123 = 3962945;

    t123 = (((x501&x502)>x503)+x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x505 = 471461;
	int8_t x506 = INT8_MIN;

    t124 = (((x505&x506)>x507)+x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x509 = -19;
	uint16_t x510 = 891U;
	int8_t x511 = -1;
	static int16_t x512 = INT16_MAX;
	static int32_t t125 = 1918;

    t125 = (((x509&x510)>x511)+x512);

    if (t125 != 32768) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x514 = UINT16_MAX;
	int64_t x515 = INT64_MIN;
	int16_t x516 = -1;
	int32_t t126 = -7;

    t126 = (((x513&x514)>x515)+x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x517 = -1;
	int8_t x518 = INT8_MAX;
	volatile uint64_t x519 = 12357136768106594LLU;
	volatile int8_t x520 = INT8_MIN;
	int32_t t127 = 5193479;

    t127 = (((x517&x518)>x519)+x520);

    if (t127 != -128) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x521 = 2013839978LLU;
	static int32_t x522 = INT32_MAX;
	static uint8_t x523 = 5U;
	static int32_t x524 = -1941949;

    t128 = (((x521&x522)>x523)+x524);

    if (t128 != -1941948) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x525 = INT16_MIN;
	volatile int8_t x526 = INT8_MIN;
	int16_t x527 = -114;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t129 = -277829428;

    t129 = (((x525&x526)>x527)+x528);

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x529 = -1;
	int16_t x530 = -15689;
	static int32_t x532 = 63541;
	volatile int32_t t130 = 7805483;

    t130 = (((x529&x530)>x531)+x532);

    if (t130 != 63541) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x533 = 5U;
	volatile int8_t x534 = INT8_MAX;
	int32_t x535 = 1;
	int8_t x536 = -1;
	int32_t t131 = 710395;

    t131 = (((x533&x534)>x535)+x536);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x538 = UINT16_MAX;
	int32_t x540 = -608;
	static volatile int32_t t132 = 385;

    t132 = (((x537&x538)>x539)+x540);

    if (t132 != -608) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t t133 = -5559LL;

    t133 = (((x541&x542)>x543)+x544);

    if (t133 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x545 = 3490LLU;
	uint16_t x546 = UINT16_MAX;
	volatile uint64_t x547 = 551726LLU;
	static int64_t t134 = INT64_MAX;

    t134 = (((x545&x546)>x547)+x548);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x549 = 1;
	int8_t x550 = INT8_MAX;
	int8_t x551 = -1;
	int16_t x552 = -10116;
	int32_t t135 = 17093988;

    t135 = (((x549&x550)>x551)+x552);

    if (t135 != -10115) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x553 = 2919941629LLU;
	int32_t x554 = INT32_MAX;
	static volatile uint32_t x555 = 78U;
	uint16_t x556 = 82U;

    t136 = (((x553&x554)>x555)+x556);

    if (t136 != 83) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x557 = 34U;
	static int32_t x559 = -163432;
	volatile int32_t t137 = -32;

    t137 = (((x557&x558)>x559)+x560);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x561 = INT16_MIN;
	uint32_t x562 = 119312664U;
	static int8_t x563 = -1;
	uint32_t x564 = UINT32_MAX;
	static uint32_t t138 = UINT32_MAX;

    t138 = (((x561&x562)>x563)+x564);

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x565 = INT8_MIN;
	uint8_t x566 = 0U;
	uint32_t x567 = 3U;
	uint8_t x568 = 1U;
	volatile int32_t t139 = 2626;

    t139 = (((x565&x566)>x567)+x568);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = INT32_MIN;
	volatile int64_t x570 = -122647143146612751LL;
	int64_t x571 = INT64_MAX;
	static uint64_t x572 = 880969418380639556LLU;

    t140 = (((x569&x570)>x571)+x572);

    if (t140 != 880969418380639556LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x573 = 3203359LLU;
	volatile int32_t x575 = -1;
	int16_t x576 = 24;
	int32_t t141 = 0;

    t141 = (((x573&x574)>x575)+x576);

    if (t141 != 24) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x579 = INT64_MIN;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t142 = -3;

    t142 = (((x577&x578)>x579)+x580);

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x581 = -1LL;
	int64_t x582 = INT64_MAX;
	int16_t x584 = -1;
	volatile int32_t t143 = 105630778;

    t143 = (((x581&x582)>x583)+x584);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int64_t x586 = -104LL;
	int8_t x587 = INT8_MIN;
	uint32_t x588 = 505529646U;
	volatile uint32_t t144 = 63349U;

    t144 = (((x585&x586)>x587)+x588);

    if (t144 != 505529647U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x589 = INT16_MIN;
	uint32_t x590 = 651322U;
	static uint8_t x591 = 2U;
	volatile uint64_t x592 = 248153245LLU;
	volatile uint64_t t145 = 1754763LLU;

    t145 = (((x589&x590)>x591)+x592);

    if (t145 != 248153246LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x594 = 153275672663LL;
	uint8_t x595 = 27U;
	static int32_t t146 = -20427;

    t146 = (((x593&x594)>x595)+x596);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x597 = INT8_MAX;
	int64_t x598 = -1LL;
	int32_t x599 = INT32_MAX;
	static int8_t x600 = INT8_MIN;
	int32_t t147 = -230203180;

    t147 = (((x597&x598)>x599)+x600);

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x602 = -42;
	static volatile int8_t x603 = INT8_MAX;
	int8_t x604 = -11;

    t148 = (((x601&x602)>x603)+x604);

    if (t148 != -11) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x605 = -1;
	int64_t x606 = INT64_MIN;
	int64_t x607 = INT64_MIN;
	volatile int8_t x608 = -13;
	int32_t t149 = -134363183;

    t149 = (((x605&x606)>x607)+x608);

    if (t149 != -13) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x609 = 16785637460LL;
	int16_t x610 = INT16_MIN;
	volatile int32_t x611 = INT32_MIN;
	static int64_t x612 = INT64_MIN;
	static volatile int64_t t150 = 6380473056LL;

    t150 = (((x609&x610)>x611)+x612);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x614 = 76989U;
	volatile uint64_t x615 = 118892779020LLU;
	uint32_t x616 = 1330U;
	static volatile uint32_t t151 = 1U;

    t151 = (((x613&x614)>x615)+x616);

    if (t151 != 1330U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x617 = INT64_MIN;
	static int64_t x618 = INT64_MIN;
	int32_t x619 = -1;
	int64_t x620 = INT64_MAX;
	volatile int64_t t152 = INT64_MAX;

    t152 = (((x617&x618)>x619)+x620);

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x621 = UINT16_MAX;
	static int16_t x622 = 3910;
	static int8_t x623 = -1;
	static volatile int16_t x624 = -1;
	int32_t t153 = -22493235;

    t153 = (((x621&x622)>x623)+x624);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x625 = INT16_MIN;
	volatile uint32_t x626 = UINT32_MAX;
	volatile int16_t x627 = -1;
	static uint16_t x628 = 27U;
	volatile int32_t t154 = 1;

    t154 = (((x625&x626)>x627)+x628);

    if (t154 != 27) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x629 = 0U;
	int8_t x630 = INT8_MIN;
	volatile int16_t x631 = INT16_MIN;
	int16_t x632 = -28;
	volatile int32_t t155 = -1909;

    t155 = (((x629&x630)>x631)+x632);

    if (t155 != -27) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x633 = -1LL;
	uint8_t x634 = 75U;
	volatile int32_t x636 = INT32_MIN;
	static volatile int32_t t156 = 1;

    t156 = (((x633&x634)>x635)+x636);

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x637 = 10U;
	int32_t x638 = 32409;
	volatile uint32_t x639 = 13635113U;
	int8_t x640 = 3;

    t157 = (((x637&x638)>x639)+x640);

    if (t157 != 3) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x641 = INT32_MAX;
	volatile uint16_t x642 = UINT16_MAX;
	int8_t x644 = -1;
	static volatile int32_t t158 = -43592811;

    t158 = (((x641&x642)>x643)+x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x645 = UINT32_MAX;
	int16_t x647 = INT16_MIN;
	int64_t t159 = -36184486087990LL;

    t159 = (((x645&x646)>x647)+x648);

    if (t159 != -248968LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = 19;
	int8_t x651 = INT8_MIN;
	uint64_t x652 = 35942179715LLU;

    t160 = (((x649&x650)>x651)+x652);

    if (t160 != 35942179716LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = 286229965236LLU;
	volatile int16_t x654 = -1;
	volatile uint16_t x656 = 27259U;

    t161 = (((x653&x654)>x655)+x656);

    if (t161 != 27260) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint8_t x657 = 0U;
	uint16_t x658 = 13U;
	int32_t x659 = -98;
	static int32_t t162 = 92356;

    t162 = (((x657&x658)>x659)+x660);

    if (t162 != -127) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x661 = -51359LL;
	int8_t x662 = 46;
	int16_t x663 = -4317;

    t163 = (((x661&x662)>x663)+x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x666 = 261;
	uint16_t x668 = 26U;
	volatile int32_t t164 = 862;

    t164 = (((x665&x666)>x667)+x668);

    if (t164 != 26) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = -1;
	uint64_t x670 = 507290165153LLU;
	static uint16_t x671 = 296U;
	int16_t x672 = -1;
	volatile int32_t t165 = -132978157;

    t165 = (((x669&x670)>x671)+x672);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x673 = 2U;
	int16_t x674 = -1;
	uint8_t x675 = 0U;
	int16_t x676 = -10196;
	volatile int32_t t166 = -128;

    t166 = (((x673&x674)>x675)+x676);

    if (t166 != -10195) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MAX;
	int32_t t167 = 286773190;

    t167 = (((x677&x678)>x679)+x680);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x682 = INT16_MAX;
	int8_t x683 = INT8_MAX;
	volatile int16_t x684 = -3456;

    t168 = (((x681&x682)>x683)+x684);

    if (t168 != -3455) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x685 = -132LL;
	static int32_t x686 = INT32_MAX;
	uint64_t x687 = 2LLU;
	volatile int32_t t169 = 3;

    t169 = (((x685&x686)>x687)+x688);

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x689 = INT32_MIN;
	volatile int64_t x690 = -1LL;
	volatile uint8_t x691 = UINT8_MAX;
	volatile int16_t x692 = -1;
	volatile int32_t t170 = 20683;

    t170 = (((x689&x690)>x691)+x692);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x693 = INT16_MIN;
	int32_t x694 = INT32_MAX;
	int16_t x695 = INT16_MIN;
	int64_t x696 = -1LL;

    t171 = (((x693&x694)>x695)+x696);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x697 = UINT64_MAX;
	int8_t x699 = -1;
	static uint64_t x700 = 4015737LLU;
	volatile uint64_t t172 = 1150187511186866771LLU;

    t172 = (((x697&x698)>x699)+x700);

    if (t172 != 4015737LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x701 = 3;
	int8_t x702 = 0;
	volatile uint8_t x703 = 7U;
	int32_t t173 = 8400772;

    t173 = (((x701&x702)>x703)+x704);

    if (t173 != 25) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x705 = 692LLU;
	volatile int64_t x707 = -796LL;
	int8_t x708 = INT8_MIN;

    t174 = (((x705&x706)>x707)+x708);

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x709 = 1706267LL;
	int8_t x710 = INT8_MIN;
	uint8_t x711 = UINT8_MAX;
	int8_t x712 = -10;
	volatile int32_t t175 = 90787;

    t175 = (((x709&x710)>x711)+x712);

    if (t175 != -9) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x714 = UINT32_MAX;
	int32_t x715 = -1;
	int32_t x716 = INT32_MAX;
	int32_t t176 = INT32_MAX;

    t176 = (((x713&x714)>x715)+x716);

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x717 = 26U;
	static int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MAX;
	volatile int16_t x720 = -27;
	volatile int32_t t177 = 49857;

    t177 = (((x717&x718)>x719)+x720);

    if (t177 != -27) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x721 = 991414683538269LLU;
	uint16_t x722 = 328U;
	volatile uint64_t x723 = UINT64_MAX;
	int32_t x724 = INT32_MIN;
	int32_t t178 = INT32_MIN;

    t178 = (((x721&x722)>x723)+x724);

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	int32_t x728 = INT32_MIN;
	volatile int32_t t179 = -2348232;

    t179 = (((x725&x726)>x727)+x728);

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x729 = INT16_MIN;
	uint64_t x730 = UINT64_MAX;
	int32_t x732 = INT32_MIN;
	int32_t t180 = 130610393;

    t180 = (((x729&x730)>x731)+x732);

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x733 = UINT16_MAX;
	uint32_t x736 = 189U;
	uint32_t t181 = 99U;

    t181 = (((x733&x734)>x735)+x736);

    if (t181 != 190U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x737 = -2;
	volatile uint64_t x738 = UINT64_MAX;
	volatile int32_t x740 = INT32_MIN;
	int32_t t182 = 207061;

    t182 = (((x737&x738)>x739)+x740);

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x741 = 3U;
	uint16_t x742 = 668U;
	int8_t x743 = 1;
	int32_t x744 = INT32_MIN;
	int32_t t183 = INT32_MIN;

    t183 = (((x741&x742)>x743)+x744);

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x745 = 0;
	uint64_t x746 = 165595200092489LLU;
	int8_t x747 = 7;

    t184 = (((x745&x746)>x747)+x748);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x749 = -25;
	volatile int32_t x750 = INT32_MIN;
	uint64_t x751 = 1LLU;
	uint16_t x752 = 9731U;

    t185 = (((x749&x750)>x751)+x752);

    if (t185 != 9732) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x753 = INT32_MIN;
	int64_t x754 = 2135165976752599LL;
	int8_t x755 = INT8_MIN;
	volatile int32_t t186 = 591623356;

    t186 = (((x753&x754)>x755)+x756);

    if (t186 != 34) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x757 = UINT16_MAX;
	static int32_t x758 = INT32_MIN;
	int64_t x759 = 276616743310305879LL;
	int8_t x760 = 9;
	volatile int32_t t187 = -12273060;

    t187 = (((x757&x758)>x759)+x760);

    if (t187 != 9) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x761 = INT64_MAX;
	static int64_t x763 = 3540281537126LL;
	int32_t t188 = -2039;

    t188 = (((x761&x762)>x763)+x764);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = INT32_MAX;
	volatile uint32_t x766 = 752U;
	uint16_t x767 = 2U;
	volatile int8_t x768 = INT8_MIN;
	volatile int32_t t189 = 96242;

    t189 = (((x765&x766)>x767)+x768);

    if (t189 != -127) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x769 = -1;
	uint8_t x770 = UINT8_MAX;
	int8_t x771 = INT8_MIN;
	static uint16_t x772 = 523U;
	int32_t t190 = 62;

    t190 = (((x769&x770)>x771)+x772);

    if (t190 != 524) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x773 = INT32_MIN;
	int64_t x774 = INT64_MIN;
	static uint64_t x775 = 17071711562566678LLU;
	int8_t x776 = INT8_MIN;
	int32_t t191 = 1;

    t191 = (((x773&x774)>x775)+x776);

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x778 = -1;
	volatile int64_t x779 = -41125LL;
	static uint16_t x780 = UINT16_MAX;
	static int32_t t192 = -103711;

    t192 = (((x777&x778)>x779)+x780);

    if (t192 != 65536) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x781 = 3U;
	volatile int16_t x782 = INT16_MAX;
	volatile int8_t x784 = 31;
	volatile int32_t t193 = 1873;

    t193 = (((x781&x782)>x783)+x784);

    if (t193 != 32) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x785 = INT32_MAX;
	static uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MIN;
	volatile int32_t t194 = INT32_MIN;

    t194 = (((x785&x786)>x787)+x788);

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x790 = 9859LLU;
	volatile int8_t x792 = INT8_MIN;
	int32_t t195 = 7908;

    t195 = (((x789&x790)>x791)+x792);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x793 = INT8_MAX;
	static volatile int8_t x794 = INT8_MAX;
	int64_t x795 = 549076LL;
	volatile int8_t x796 = 0;
	int32_t t196 = -86445;

    t196 = (((x793&x794)>x795)+x796);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x797 = -41;
	int32_t x799 = INT32_MIN;
	volatile uint16_t x800 = 176U;
	static volatile int32_t t197 = 71;

    t197 = (((x797&x798)>x799)+x800);

    if (t197 != 176) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x801 = -340619532904025146LL;
	static uint16_t x802 = UINT16_MAX;
	volatile int16_t x803 = INT16_MIN;
	int32_t x804 = 1013032727;

    t198 = (((x801&x802)>x803)+x804);

    if (t198 != 1013032728) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x806 = UINT32_MAX;
	volatile uint32_t x807 = 2193U;
	volatile int8_t x808 = INT8_MIN;
	static volatile int32_t t199 = -1;

    t199 = (((x805&x806)>x807)+x808);

    if (t199 != -127) { NG(); } else { ; }
	
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

