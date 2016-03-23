
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

static int32_t x1 = -18;
uint8_t x2 = UINT8_MAX;
int32_t t0 = 117631;
int8_t x17 = -1;
int8_t x21 = INT8_MAX;
int16_t x23 = INT16_MIN;
volatile int32_t x34 = 474726609;
int64_t x36 = 26LL;
int8_t x37 = -1;
int16_t x46 = INT16_MAX;
int32_t x48 = INT32_MIN;
volatile int32_t t9 = -960154;
int32_t x59 = INT32_MAX;
static uint16_t x65 = 475U;
uint32_t t13 = 9843U;
static int64_t x69 = -6847065693LL;
int32_t t14 = -1449;
int32_t x76 = INT32_MAX;
int32_t x87 = INT32_MIN;
volatile int64_t t18 = -14LL;
uint32_t x101 = UINT32_MAX;
int8_t x108 = INT8_MAX;
int64_t x111 = INT64_MIN;
static volatile uint16_t x123 = 783U;
int32_t t26 = -118;
uint16_t x134 = UINT16_MAX;
int64_t x140 = 1813999256549069354LL;
int32_t t31 = -234869;
volatile int8_t x169 = -1;
int32_t x172 = -20305;
volatile int32_t t36 = -1;
uint32_t x187 = 63387216U;
static int32_t t39 = -28603261;
static uint32_t x193 = 33U;
int8_t x195 = INT8_MAX;
int64_t x199 = INT64_MAX;
int32_t x203 = -1;
int32_t t42 = 580;
volatile int32_t x205 = INT32_MAX;
volatile int16_t x206 = -3;
int32_t x210 = INT32_MAX;
static int16_t x216 = INT16_MIN;
static volatile int32_t x217 = 28464272;
int8_t x227 = 12;
int32_t t50 = -1;
static int8_t x244 = -1;
static int32_t t51 = 3952;
volatile uint32_t t52 = 10U;
int32_t x260 = 197167;
uint16_t x265 = 3073U;
volatile int8_t x267 = INT8_MAX;
int16_t x294 = 220;
static int64_t t63 = -71232074829LL;
volatile uint32_t t65 = 460U;
uint8_t x309 = 24U;
volatile int32_t t66 = -15199;
int64_t x314 = -722060394989680350LL;
uint64_t x321 = 3LLU;
int8_t x324 = INT8_MAX;
int32_t x326 = -836;
volatile int64_t t70 = -4810105LL;
uint32_t x330 = UINT32_MAX;
uint64_t x339 = 491094146489071LLU;
static int8_t x343 = -7;
uint32_t x351 = 9578183U;
int32_t t75 = 4084;
static int16_t x358 = -1;
static volatile int32_t t79 = 24847814;
volatile int32_t x376 = -1;
int32_t t80 = 228;
static uint16_t x378 = 11848U;
uint16_t x382 = 659U;
int16_t x384 = -1;
int32_t t82 = -3708;
volatile int16_t x387 = -769;
int32_t x394 = -1;
int32_t x397 = INT32_MAX;
volatile uint16_t x400 = 6394U;
volatile int64_t x401 = 3LL;
int32_t t87 = -12267;
int16_t x408 = INT16_MIN;
int32_t x413 = -1;
int64_t x418 = -52387478493545004LL;
int32_t x421 = -1;
static volatile int16_t x423 = -1;
uint8_t x427 = 20U;
int32_t t93 = -838633903;
uint16_t x437 = UINT16_MAX;
volatile int8_t x438 = -50;
uint32_t x439 = UINT32_MAX;
static int8_t x440 = INT8_MIN;
volatile int32_t x446 = -55;
volatile uint32_t x450 = 15U;
int16_t x452 = -1;
int64_t x458 = -57139369913665LL;
volatile int32_t t102 = -3634061;
uint32_t x471 = UINT32_MAX;
volatile int64_t x478 = INT64_MIN;
int64_t x481 = 105648482518362LL;
int32_t t106 = -17547;
uint32_t x491 = UINT32_MAX;
volatile uint64_t x492 = 343808228808226LLU;
uint32_t x495 = UINT32_MAX;
int16_t x499 = INT16_MAX;
volatile uint16_t x502 = UINT16_MAX;
int64_t x506 = INT64_MAX;
int32_t t111 = 43429728;
int64_t x518 = -35302087352285999LL;
int8_t x527 = INT8_MAX;
volatile uint64_t x530 = 14952239LLU;
int8_t x537 = -1;
uint64_t x538 = UINT64_MAX;
uint64_t t117 = 2194117713942LLU;
int16_t x552 = INT16_MIN;
uint8_t x555 = 43U;
static int64_t x556 = -1LL;
volatile int32_t t124 = 2;
int16_t x572 = -28;
uint8_t x574 = 12U;
volatile uint8_t x594 = 102U;
int16_t x596 = INT16_MIN;
int32_t x602 = -29406;
uint64_t x604 = 319049587477494801LLU;
uint64_t t132 = 149LLU;
volatile uint16_t x618 = 1U;
int16_t x635 = 11694;
int32_t x636 = 1759892;
int32_t t139 = 0;
uint64_t x646 = UINT64_MAX;
int16_t x647 = INT16_MIN;
uint64_t x648 = 72037985041618443LLU;
volatile uint64_t t140 = 6871263971250745LLU;
volatile int32_t t141 = 242;
static volatile int32_t x656 = INT32_MAX;
int32_t x666 = -1;
int16_t x668 = 175;
static volatile int32_t t144 = 59;
int64_t t145 = 11962084559222243LL;
static uint8_t x681 = 34U;
int8_t x682 = INT8_MIN;
volatile int8_t x683 = INT8_MIN;
static volatile int64_t t148 = 110982029181877380LL;
volatile uint64_t x695 = 54884998513437LLU;
int32_t x701 = -8471;
volatile int32_t t153 = -14449;
int8_t x715 = INT8_MAX;
uint64_t t158 = 395LLU;
int8_t x726 = 63;
int8_t x730 = -1;
int8_t x742 = -1;
static int64_t x744 = INT64_MIN;
int32_t x746 = 69736;
volatile int32_t t165 = 38;
int8_t x769 = 2;
int64_t x775 = -62275158526595582LL;
uint16_t x777 = UINT16_MAX;
int16_t x778 = 13552;
uint32_t x779 = UINT32_MAX;
int8_t x780 = -10;
static int64_t x781 = -811234237200606LL;
volatile uint32_t x783 = 60U;
int64_t t170 = 2707828710587818602LL;
static volatile uint32_t x791 = UINT32_MAX;
int16_t x794 = INT16_MAX;
int32_t x795 = INT32_MAX;
static int32_t t172 = -3;
uint64_t x797 = UINT64_MAX;
static volatile int64_t t174 = -90699030445LL;
uint64_t x805 = 115LLU;
volatile uint64_t x806 = 6655843042LLU;
volatile uint64_t x807 = 5473399245831159365LLU;
uint64_t x809 = 2LLU;
uint64_t t176 = 69756927364116LLU;
static volatile int8_t x813 = INT8_MAX;
uint64_t x814 = 6222LLU;
volatile int32_t t177 = 351925572;
static int16_t x825 = INT16_MAX;
static int16_t x827 = 16;
int32_t x830 = INT32_MIN;
int32_t t180 = 392121;
static int8_t x836 = INT8_MIN;
static volatile int8_t x838 = -1;
int16_t x839 = -3492;
static volatile int32_t t182 = -43688;
int16_t x844 = -1;
int32_t x846 = INT32_MIN;
volatile int8_t x858 = -3;
static uint32_t t186 = 2022U;
int64_t x864 = INT64_MAX;
static int64_t x867 = INT64_MIN;
static int32_t x868 = -122588;
int8_t x873 = -1;
static int64_t x876 = INT64_MAX;
static uint64_t x888 = 5538516635763628LLU;
uint64_t t192 = 488LLU;
int32_t t194 = 19593;
int8_t x899 = 1;
int16_t x900 = INT16_MIN;
int8_t x902 = -1;
volatile uint16_t x903 = 12U;
int32_t x909 = 48;
uint16_t x916 = UINT16_MAX;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	volatile uint16_t x4 = UINT16_MAX;

    t0 = (((x1+x2)<=x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int32_t x6 = -1;
	int16_t x7 = INT16_MAX;
	uint16_t x8 = 3U;
	static volatile int32_t t1 = 538;

    t1 = (((x5+x6)<=x7)%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x13 = -1LL;
	int64_t x14 = -52010257127LL;
	int32_t x15 = -1;
	static uint8_t x16 = 14U;
	static int32_t t2 = -1209;

    t2 = (((x13+x14)<=x15)%x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x18 = 7U;
	int8_t x19 = -13;
	static int16_t x20 = -1;
	volatile int32_t t3 = 37;

    t3 = (((x17+x18)<=x19)%x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x22 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -501;

    t4 = (((x21+x22)<=x23)%x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MAX;
	static uint8_t x27 = 26U;
	static int32_t x28 = INT32_MIN;
	int32_t t5 = -102;

    t5 = (((x25+x26)<=x27)%x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	uint32_t x30 = 0U;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = -1;
	static int32_t t6 = -155713850;

    t6 = (((x29+x30)<=x31)%x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	volatile int8_t x35 = -3;
	volatile int64_t t7 = -60111LL;

    t7 = (((x33+x34)<=x35)%x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x38 = -1;
	uint8_t x39 = 3U;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t8 = -4089;

    t8 = (((x37+x38)<=x39)%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 2864U;
	int16_t x47 = INT16_MAX;

    t9 = (((x45+x46)<=x47)%x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MAX;
	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = 13449;
	uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 1052915103LLU;

    t10 = (((x53+x54)<=x55)%x56);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x57 = 42697456;
	static uint16_t x58 = 6U;
	int8_t x60 = INT8_MAX;
	int32_t t11 = -822;

    t11 = (((x57+x58)<=x59)%x60);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 11246;
	static volatile int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	int32_t t12 = 16181061;

    t12 = (((x61+x62)<=x63)%x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x66 = 77165918LLU;
	int8_t x67 = INT8_MIN;
	static uint32_t x68 = 287494363U;

    t13 = (((x65+x66)<=x67)%x68);

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x70 = -1;
	uint8_t x71 = 3U;
	uint16_t x72 = 36U;

    t14 = (((x69+x70)<=x71)%x72);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x73 = -2;
	uint64_t x74 = 148229392634261LLU;
	int16_t x75 = INT16_MIN;
	int32_t t15 = 2565884;

    t15 = (((x73+x74)<=x75)%x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x77 = -1;
	volatile uint16_t x78 = UINT16_MAX;
	int8_t x79 = INT8_MAX;
	int64_t x80 = INT64_MIN;
	static int64_t t16 = -4962430318LL;

    t16 = (((x77+x78)<=x79)%x80);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x85 = 3419050U;
	int64_t x86 = -8407175914LL;
	uint32_t x88 = 10372426U;
	static uint32_t t17 = 200U;

    t17 = (((x85+x86)<=x87)%x88);

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x89 = -1;
	uint32_t x90 = 323U;
	int32_t x91 = INT32_MIN;
	static int64_t x92 = INT64_MIN;

    t18 = (((x89+x90)<=x91)%x92);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = -239;
	static volatile int32_t x98 = -1;
	int64_t x99 = INT64_MIN;
	static uint16_t x100 = 56U;
	volatile int32_t t19 = 596;

    t19 = (((x97+x98)<=x99)%x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x102 = 3LL;
	int8_t x103 = INT8_MAX;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t20 = 379888720409790462LLU;

    t20 = (((x101+x102)<=x103)%x104);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x105 = 12578U;
	uint16_t x106 = 277U;
	int8_t x107 = INT8_MIN;
	int32_t t21 = 124;

    t21 = (((x105+x106)<=x107)%x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x109 = -48;
	int16_t x110 = -1102;
	int64_t x112 = INT64_MAX;
	volatile int64_t t22 = 10713185LL;

    t22 = (((x109+x110)<=x111)%x112);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int64_t x114 = INT64_MIN;
	uint32_t x115 = 1042307U;
	volatile int16_t x116 = 90;
	volatile int32_t t23 = 68;

    t23 = (((x113+x114)<=x115)%x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t24 = 112;

    t24 = (((x121+x122)<=x123)%x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x125 = 4;
	volatile int32_t x126 = 4305351;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = INT8_MAX;
	static int32_t t25 = -376378422;

    t25 = (((x125+x126)<=x127)%x128);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MIN;
	static volatile uint16_t x130 = UINT16_MAX;
	int64_t x131 = -1LL;
	static int32_t x132 = INT32_MAX;

    t26 = (((x129+x130)<=x131)%x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = INT16_MIN;
	uint8_t x135 = 31U;
	int32_t x136 = INT32_MAX;
	int32_t t27 = 444;

    t27 = (((x133+x134)<=x135)%x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x137 = UINT16_MAX;
	static int16_t x138 = INT16_MIN;
	volatile int16_t x139 = -1;
	int64_t t28 = 1556LL;

    t28 = (((x137+x138)<=x139)%x140);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = 3;
	uint16_t x150 = 6U;
	volatile int8_t x151 = -1;
	int64_t x152 = INT64_MIN;
	volatile int64_t t29 = -3221173756409618886LL;

    t29 = (((x149+x150)<=x151)%x152);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x153 = UINT64_MAX;
	int8_t x154 = 0;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = UINT32_MAX;
	volatile uint32_t t30 = 12032268U;

    t30 = (((x153+x154)<=x155)%x156);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x157 = UINT16_MAX;
	uint8_t x158 = 53U;
	int16_t x159 = 21;
	int32_t x160 = INT32_MAX;

    t31 = (((x157+x158)<=x159)%x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x161 = INT64_MAX;
	uint64_t x162 = UINT64_MAX;
	uint8_t x163 = 28U;
	uint64_t x164 = 5911472914418717585LLU;
	uint64_t t32 = 8378837873742881983LLU;

    t32 = (((x161+x162)<=x163)%x164);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x165 = -1LL;
	static uint16_t x166 = 569U;
	uint32_t x167 = 30U;
	int64_t x168 = -63133784200LL;
	static volatile int64_t t33 = 45280514LL;

    t33 = (((x165+x166)<=x167)%x168);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MAX;
	volatile int32_t t34 = 189560196;

    t34 = (((x169+x170)<=x171)%x172);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = INT16_MAX;
	static int64_t x174 = 989982664418LL;
	int8_t x175 = INT8_MAX;
	int16_t x176 = -206;
	volatile int32_t t35 = -161582332;

    t35 = (((x173+x174)<=x175)%x176);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x177 = UINT64_MAX;
	int32_t x178 = -4;
	static int64_t x179 = 3459769059LL;
	volatile int32_t x180 = INT32_MIN;

    t36 = (((x177+x178)<=x179)%x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x181 = 90U;
	int8_t x182 = -1;
	static int32_t x183 = 18025622;
	uint16_t x184 = UINT16_MAX;
	int32_t t37 = 5379;

    t37 = (((x181+x182)<=x183)%x184);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = -1;
	uint8_t x186 = 19U;
	int8_t x188 = -2;
	volatile int32_t t38 = 15444;

    t38 = (((x185+x186)<=x187)%x188);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x189 = -57634567LL;
	uint64_t x190 = UINT64_MAX;
	uint64_t x191 = 509098369479LLU;
	uint16_t x192 = 6U;

    t39 = (((x189+x190)<=x191)%x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x194 = 1U;
	int64_t x196 = INT64_MIN;
	static int64_t t40 = 33404716219760LL;

    t40 = (((x193+x194)<=x195)%x196);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x197 = UINT32_MAX;
	static int64_t x198 = INT64_MIN;
	volatile int8_t x200 = -1;
	int32_t t41 = 537523561;

    t41 = (((x197+x198)<=x199)%x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x201 = 10;
	uint32_t x202 = 156202642U;
	volatile int16_t x204 = INT16_MAX;

    t42 = (((x201+x202)<=x203)%x204);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x207 = -1;
	static volatile uint32_t x208 = 771170129U;
	static volatile uint32_t t43 = 282695598U;

    t43 = (((x205+x206)<=x207)%x208);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	static int16_t x212 = -12;
	int32_t t44 = 497547;

    t44 = (((x209+x210)<=x211)%x212);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x213 = INT16_MAX;
	static int32_t x214 = -30503;
	int32_t x215 = 820714841;
	int32_t t45 = 63;

    t45 = (((x213+x214)<=x215)%x216);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x218 = UINT8_MAX;
	uint32_t x219 = UINT32_MAX;
	uint64_t x220 = 176824LLU;
	volatile uint64_t t46 = 7LLU;

    t46 = (((x217+x218)<=x219)%x220);

    if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x221 = INT32_MAX;
	int32_t x222 = -10335;
	volatile uint8_t x223 = 31U;
	int32_t x224 = -158623;
	volatile int32_t t47 = 417117;

    t47 = (((x221+x222)<=x223)%x224);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = INT16_MIN;
	int8_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;
	int32_t t48 = -217657;

    t48 = (((x225+x226)<=x227)%x228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint32_t x234 = 139647418U;
	int8_t x235 = 34;
	static int32_t x236 = -38483959;
	int32_t t49 = 18512;

    t49 = (((x233+x234)<=x235)%x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = 1U;
	int64_t x238 = 85180395729432725LL;
	int32_t x239 = INT32_MIN;
	int16_t x240 = -1;

    t50 = (((x237+x238)<=x239)%x240);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	static int64_t x242 = -1LL;
	uint16_t x243 = 9U;

    t51 = (((x241+x242)<=x243)%x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = 222457945117LL;
	static uint8_t x246 = 0U;
	int64_t x247 = INT64_MIN;
	uint32_t x248 = UINT32_MAX;

    t52 = (((x245+x246)<=x247)%x248);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x249 = 9U;
	uint32_t x250 = UINT32_MAX;
	static uint32_t x251 = 76401981U;
	uint32_t x252 = 770U;
	uint32_t t53 = 356585174U;

    t53 = (((x249+x250)<=x251)%x252);

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x253 = 1U;
	int16_t x254 = INT16_MIN;
	static int64_t x255 = INT64_MIN;
	int8_t x256 = 24;
	volatile int32_t t54 = 230263213;

    t54 = (((x253+x254)<=x255)%x256);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x257 = 8568814859747LLU;
	int32_t x258 = INT32_MIN;
	volatile uint8_t x259 = 2U;
	int32_t t55 = 203;

    t55 = (((x257+x258)<=x259)%x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x261 = INT16_MAX;
	uint16_t x262 = 1U;
	int16_t x263 = INT16_MAX;
	static uint8_t x264 = UINT8_MAX;
	static volatile int32_t t56 = -196;

    t56 = (((x261+x262)<=x263)%x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x266 = 253856LL;
	static int64_t x268 = INT64_MIN;
	int64_t t57 = 856826LL;

    t57 = (((x265+x266)<=x267)%x268);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x269 = INT32_MIN;
	uint16_t x270 = 551U;
	uint32_t x271 = UINT32_MAX;
	static int64_t x272 = INT64_MIN;
	int64_t t58 = -11LL;

    t58 = (((x269+x270)<=x271)%x272);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x273 = 1U;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = 3U;
	volatile uint64_t x276 = 86LLU;
	uint64_t t59 = 321777108LLU;

    t59 = (((x273+x274)<=x275)%x276);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x277 = -1;
	uint8_t x278 = 15U;
	uint32_t x279 = 14292656U;
	uint32_t x280 = 111787448U;
	uint32_t t60 = 64269785U;

    t60 = (((x277+x278)<=x279)%x280);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = 8527LL;
	int64_t x286 = 286956LL;
	int16_t x287 = INT16_MAX;
	static uint32_t x288 = UINT32_MAX;
	uint32_t t61 = 3246U;

    t61 = (((x285+x286)<=x287)%x288);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = INT16_MAX;
	static int32_t x295 = 340508;
	int16_t x296 = INT16_MIN;
	int32_t t62 = 396;

    t62 = (((x293+x294)<=x295)%x296);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x297 = -4;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = 5U;
	static int64_t x300 = 5LL;

    t63 = (((x297+x298)<=x299)%x300);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x301 = -1;
	int32_t x302 = -144900;
	static int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t64 = 787512LLU;

    t64 = (((x301+x302)<=x303)%x304);

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int8_t x306 = -1;
	static int8_t x307 = -2;
	uint32_t x308 = 449351689U;

    t65 = (((x305+x306)<=x307)%x308);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x310 = 14858;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = 4849;

    t66 = (((x309+x310)<=x311)%x312);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x315 = 2;
	static int8_t x316 = INT8_MAX;
	int32_t t67 = 1687549;

    t67 = (((x313+x314)<=x315)%x316);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x317 = -3;
	static volatile int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MAX;
	uint8_t x320 = 4U;
	volatile int32_t t68 = -8;

    t68 = (((x317+x318)<=x319)%x320);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x322 = 46553;
	volatile int16_t x323 = -1;
	int32_t t69 = 1552;

    t69 = (((x321+x322)<=x323)%x324);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x325 = UINT8_MAX;
	uint32_t x327 = UINT32_MAX;
	int64_t x328 = INT64_MIN;

    t70 = (((x325+x326)<=x327)%x328);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x329 = 1;
	uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t71 = 213704;

    t71 = (((x329+x330)<=x331)%x332);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MIN;
	volatile int32_t x340 = INT32_MIN;
	int32_t t72 = -1402;

    t72 = (((x337+x338)<=x339)%x340);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x341 = UINT16_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t73 = 45380;

    t73 = (((x341+x342)<=x343)%x344);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x345 = INT64_MIN;
	uint32_t x346 = UINT32_MAX;
	int64_t x347 = 1061455306084LL;
	uint32_t x348 = 29U;
	volatile uint32_t t74 = 82542308U;

    t74 = (((x345+x346)<=x347)%x348);

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x349 = 2U;
	int8_t x350 = -60;
	volatile int32_t x352 = -1;

    t75 = (((x349+x350)<=x351)%x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x357 = 0;
	static volatile int32_t x359 = -2;
	uint16_t x360 = 361U;
	int32_t t76 = -6;

    t76 = (((x357+x358)<=x359)%x360);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x361 = 82U;
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = -55735712;
	static int32_t x364 = INT32_MIN;
	static volatile int32_t t77 = -59954;

    t77 = (((x361+x362)<=x363)%x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x365 = 5526;
	int32_t x366 = INT32_MIN;
	volatile int32_t x367 = 14;
	int32_t x368 = -46;
	int32_t t78 = 2181;

    t78 = (((x365+x366)<=x367)%x368);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x369 = 2981267522LLU;
	static volatile int8_t x370 = -4;
	int32_t x371 = -1;
	static volatile int8_t x372 = -4;

    t79 = (((x369+x370)<=x371)%x372);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x373 = 183951U;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = 14;

    t80 = (((x373+x374)<=x375)%x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x377 = 1U;
	int64_t x379 = -1LL;
	volatile int32_t x380 = -1;
	int32_t t81 = -167;

    t81 = (((x377+x378)<=x379)%x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x381 = 21851741341809LLU;
	volatile int32_t x383 = -118056703;

    t82 = (((x381+x382)<=x383)%x384);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x385 = UINT64_MAX;
	static volatile int8_t x386 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t83 = -3717610;

    t83 = (((x385+x386)<=x387)%x388);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x389 = INT64_MAX;
	uint64_t x390 = 19835528254145LLU;
	int32_t x391 = -6670459;
	int32_t x392 = INT32_MIN;
	volatile int32_t t84 = 319225828;

    t84 = (((x389+x390)<=x391)%x392);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = 526;
	uint8_t x395 = 1U;
	static uint16_t x396 = 3U;
	static int32_t t85 = -2321601;

    t85 = (((x393+x394)<=x395)%x396);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x398 = INT16_MIN;
	static int16_t x399 = INT16_MAX;
	volatile int32_t t86 = 429378;

    t86 = (((x397+x398)<=x399)%x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x402 = 265416274;
	int32_t x403 = INT32_MAX;
	int32_t x404 = INT32_MIN;

    t87 = (((x401+x402)<=x403)%x404);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x405 = UINT32_MAX;
	static int32_t x406 = INT32_MAX;
	static int32_t x407 = 4;
	static volatile int32_t t88 = 1934012;

    t88 = (((x405+x406)<=x407)%x408);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x409 = 113U;
	int64_t x410 = INT64_MIN;
	int32_t x411 = -1;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t89 = -10990LL;

    t89 = (((x409+x410)<=x411)%x412);

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x414 = UINT16_MAX;
	static uint32_t x415 = 0U;
	static int64_t x416 = 2363LL;
	volatile int64_t t90 = 40214692576746401LL;

    t90 = (((x413+x414)<=x415)%x416);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x417 = UINT8_MAX;
	int8_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	static int32_t t91 = 1907;

    t91 = (((x417+x418)<=x419)%x420);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x422 = 16981664190373204LLU;
	int16_t x424 = -1;
	volatile int32_t t92 = 80;

    t92 = (((x421+x422)<=x423)%x424);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x425 = 1LL;
	static int16_t x426 = -16;
	uint16_t x428 = UINT16_MAX;

    t93 = (((x425+x426)<=x427)%x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x429 = 389719254U;
	int32_t x430 = INT32_MIN;
	uint8_t x431 = 98U;
	static uint64_t x432 = 3LLU;
	uint64_t t94 = 222831822933904LLU;

    t94 = (((x429+x430)<=x431)%x432);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	static int64_t x435 = INT64_MIN;
	volatile uint8_t x436 = 4U;
	volatile int32_t t95 = 627;

    t95 = (((x433+x434)<=x435)%x436);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t t96 = -108620106;

    t96 = (((x437+x438)<=x439)%x440);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -401;
	uint16_t x447 = UINT16_MAX;
	volatile int8_t x448 = 58;
	int32_t t97 = -323613;

    t97 = (((x445+x446)<=x447)%x448);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x449 = 76380U;
	uint64_t x451 = 24193381379129LLU;
	volatile int32_t t98 = 21682138;

    t98 = (((x449+x450)<=x451)%x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x453 = 1;
	int8_t x454 = -1;
	uint8_t x455 = UINT8_MAX;
	static uint16_t x456 = UINT16_MAX;
	volatile int32_t t99 = -1833;

    t99 = (((x453+x454)<=x455)%x456);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = -1LL;
	static uint32_t x459 = 260900U;
	int16_t x460 = INT16_MAX;
	volatile int32_t t100 = 1;

    t100 = (((x457+x458)<=x459)%x460);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x461 = 730930485585173324LLU;
	static uint64_t x462 = UINT64_MAX;
	int64_t x463 = -5110616828122LL;
	int64_t x464 = 1942126310219638359LL;
	static int64_t t101 = -19881418111LL;

    t101 = (((x461+x462)<=x463)%x464);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x465 = 3U;
	int8_t x466 = -1;
	volatile int64_t x467 = -110339961508LL;
	int8_t x468 = -1;

    t102 = (((x465+x466)<=x467)%x468);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x469 = 18995477LL;
	int8_t x470 = 10;
	static int32_t x472 = INT32_MIN;
	volatile int32_t t103 = 252173;

    t103 = (((x469+x470)<=x471)%x472);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x477 = 96U;
	uint16_t x479 = UINT16_MAX;
	uint16_t x480 = 11U;
	volatile int32_t t104 = 251885675;

    t104 = (((x477+x478)<=x479)%x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x482 = INT16_MIN;
	volatile int32_t x483 = -1;
	static int32_t x484 = INT32_MAX;
	int32_t t105 = 198973854;

    t105 = (((x481+x482)<=x483)%x484);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x485 = INT16_MIN;
	int64_t x486 = 25LL;
	static int64_t x487 = INT64_MAX;
	int16_t x488 = INT16_MIN;

    t106 = (((x485+x486)<=x487)%x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x489 = 123831;
	uint64_t x490 = 126213498LLU;
	volatile uint64_t t107 = 8218428037LLU;

    t107 = (((x489+x490)<=x491)%x492);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x493 = -1LL;
	static uint8_t x494 = 54U;
	int32_t x496 = 31982;
	static volatile int32_t t108 = 14;

    t108 = (((x493+x494)<=x495)%x496);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x497 = INT64_MIN;
	uint32_t x498 = 156653U;
	static uint8_t x500 = UINT8_MAX;
	volatile int32_t t109 = -1;

    t109 = (((x497+x498)<=x499)%x500);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x501 = UINT64_MAX;
	static int8_t x503 = INT8_MIN;
	int16_t x504 = INT16_MAX;
	int32_t t110 = -39;

    t110 = (((x501+x502)<=x503)%x504);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x505 = -1;
	static int32_t x507 = 0;
	int16_t x508 = -1;

    t111 = (((x505+x506)<=x507)%x508);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x509 = 515723284588947LLU;
	int16_t x510 = INT16_MAX;
	uint64_t x511 = 25030938LLU;
	int8_t x512 = -29;
	volatile int32_t t112 = 204862;

    t112 = (((x509+x510)<=x511)%x512);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x517 = 89;
	uint32_t x519 = 289U;
	int64_t x520 = -1LL;
	int64_t t113 = -103918LL;

    t113 = (((x517+x518)<=x519)%x520);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x521 = 29101907286158935LL;
	int32_t x522 = INT32_MAX;
	int32_t x523 = -1;
	int16_t x524 = INT16_MIN;
	int32_t t114 = 83624;

    t114 = (((x521+x522)<=x523)%x524);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x525 = INT8_MIN;
	volatile int8_t x526 = INT8_MIN;
	uint64_t x528 = 17LLU;
	volatile uint64_t t115 = 57LLU;

    t115 = (((x525+x526)<=x527)%x528);

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x529 = 1679348539U;
	uint16_t x531 = 638U;
	int8_t x532 = INT8_MIN;
	volatile int32_t t116 = 1;

    t116 = (((x529+x530)<=x531)%x532);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x539 = -35;
	uint64_t x540 = UINT64_MAX;

    t117 = (((x537+x538)<=x539)%x540);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x541 = 21637823372241LL;
	uint64_t x542 = 10174388627227LLU;
	static int32_t x543 = -1080;
	uint16_t x544 = 6U;
	int32_t t118 = 50207197;

    t118 = (((x541+x542)<=x543)%x544);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x545 = 1U;
	int8_t x546 = -1;
	int16_t x547 = -1;
	volatile int16_t x548 = INT16_MIN;
	volatile int32_t t119 = -515344243;

    t119 = (((x545+x546)<=x547)%x548);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x549 = INT8_MAX;
	static volatile uint8_t x550 = UINT8_MAX;
	volatile int16_t x551 = INT16_MIN;
	volatile int32_t t120 = 1;

    t120 = (((x549+x550)<=x551)%x552);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x553 = INT32_MIN;
	static volatile uint32_t x554 = 412U;
	static int64_t t121 = 100346LL;

    t121 = (((x553+x554)<=x555)%x556);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x557 = INT16_MIN;
	int16_t x558 = INT16_MIN;
	volatile uint32_t x559 = UINT32_MAX;
	int64_t x560 = INT64_MIN;
	static int64_t t122 = -2132934128099LL;

    t122 = (((x557+x558)<=x559)%x560);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x561 = INT16_MAX;
	int8_t x562 = -1;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = UINT8_MAX;
	static int32_t t123 = -223692106;

    t123 = (((x561+x562)<=x563)%x564);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x565 = -1;
	volatile int32_t x566 = 138094875;
	int64_t x567 = INT64_MIN;
	int16_t x568 = -12289;

    t124 = (((x565+x566)<=x567)%x568);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x569 = INT16_MAX;
	static int16_t x570 = INT16_MIN;
	volatile uint16_t x571 = 3U;
	volatile int32_t t125 = -14884913;

    t125 = (((x569+x570)<=x571)%x572);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x573 = 3;
	uint8_t x575 = UINT8_MAX;
	int64_t x576 = 815LL;
	volatile int64_t t126 = -177LL;

    t126 = (((x573+x574)<=x575)%x576);

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x577 = -1;
	volatile int32_t x578 = -23;
	uint8_t x579 = 10U;
	static volatile int64_t x580 = INT64_MIN;
	int64_t t127 = -32378154438674058LL;

    t127 = (((x577+x578)<=x579)%x580);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x581 = INT8_MAX;
	volatile uint32_t x582 = 60U;
	int8_t x583 = INT8_MIN;
	int64_t x584 = INT64_MIN;
	int64_t t128 = -1359218288LL;

    t128 = (((x581+x582)<=x583)%x584);

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x585 = -15;
	uint8_t x586 = 121U;
	uint64_t x587 = 22932696754920LLU;
	uint8_t x588 = 7U;
	volatile int32_t t129 = -3;

    t129 = (((x585+x586)<=x587)%x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x593 = -1;
	int64_t x595 = -1LL;
	volatile int32_t t130 = 219;

    t130 = (((x593+x594)<=x595)%x596);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x597 = 43U;
	uint64_t x598 = UINT64_MAX;
	uint32_t x599 = 3034U;
	int64_t x600 = 247440LL;
	int64_t t131 = 6837611479369LL;

    t131 = (((x597+x598)<=x599)%x600);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x601 = -119601;
	volatile uint32_t x603 = UINT32_MAX;

    t132 = (((x601+x602)<=x603)%x604);

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x605 = 0;
	volatile uint32_t x606 = UINT32_MAX;
	int32_t x607 = INT32_MIN;
	uint32_t x608 = 12U;
	volatile uint32_t t133 = 101U;

    t133 = (((x605+x606)<=x607)%x608);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = 16;
	int64_t x614 = INT64_MIN;
	int16_t x615 = INT16_MIN;
	int32_t x616 = 768706477;
	int32_t t134 = 6372858;

    t134 = (((x613+x614)<=x615)%x616);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x617 = -1;
	int8_t x619 = 4;
	static volatile int8_t x620 = -1;
	static int32_t t135 = -585417253;

    t135 = (((x617+x618)<=x619)%x620);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x621 = INT16_MIN;
	uint32_t x622 = 66936657U;
	int16_t x623 = INT16_MAX;
	uint8_t x624 = 46U;
	volatile int32_t t136 = 1;

    t136 = (((x621+x622)<=x623)%x624);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x633 = -1;
	int16_t x634 = -1;
	volatile int32_t t137 = 382;

    t137 = (((x633+x634)<=x635)%x636);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MIN;
	int16_t x639 = -1;
	volatile int8_t x640 = INT8_MAX;
	volatile int32_t t138 = -11;

    t138 = (((x637+x638)<=x639)%x640);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x641 = INT64_MIN;
	uint64_t x642 = UINT64_MAX;
	static volatile uint64_t x643 = 3616695922LLU;
	static uint8_t x644 = UINT8_MAX;

    t139 = (((x641+x642)<=x643)%x644);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x645 = 25260U;

    t140 = (((x645+x646)<=x647)%x648);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x649 = INT16_MIN;
	static volatile int16_t x650 = -1;
	int16_t x651 = INT16_MIN;
	int8_t x652 = 1;

    t141 = (((x649+x650)<=x651)%x652);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x653 = INT64_MIN;
	volatile int8_t x654 = INT8_MAX;
	static uint64_t x655 = 11849524029817LLU;
	int32_t t142 = -54141;

    t142 = (((x653+x654)<=x655)%x656);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x657 = 2;
	int16_t x658 = 14250;
	static volatile uint8_t x659 = 33U;
	volatile int8_t x660 = INT8_MIN;
	int32_t t143 = 729087215;

    t143 = (((x657+x658)<=x659)%x660);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x665 = 3757673672658881LL;
	int16_t x667 = 1;

    t144 = (((x665+x666)<=x667)%x668);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x669 = 6U;
	volatile uint64_t x670 = 665969903LLU;
	int64_t x671 = -5LL;
	int64_t x672 = 524510LL;

    t145 = (((x669+x670)<=x671)%x672);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x674 = UINT64_MAX;
	static volatile int64_t x675 = 0LL;
	uint64_t x676 = UINT64_MAX;
	volatile uint64_t t146 = 374697634LLU;

    t146 = (((x673+x674)<=x675)%x676);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x677 = -1;
	static uint8_t x678 = 35U;
	uint32_t x679 = 3094583U;
	volatile uint64_t x680 = 64LLU;
	uint64_t t147 = 32462959347LLU;

    t147 = (((x677+x678)<=x679)%x680);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x684 = INT64_MIN;

    t148 = (((x681+x682)<=x683)%x684);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x685 = 7;
	int64_t x686 = -2817034610856390282LL;
	int32_t x687 = 33801;
	int8_t x688 = 3;
	volatile int32_t t149 = 181501;

    t149 = (((x685+x686)<=x687)%x688);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x689 = INT16_MAX;
	uint32_t x690 = 36U;
	volatile int16_t x691 = INT16_MIN;
	int32_t x692 = INT32_MAX;
	volatile int32_t t150 = 345;

    t150 = (((x689+x690)<=x691)%x692);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x693 = 1096606671848LLU;
	static uint32_t x694 = 1U;
	volatile int64_t x696 = INT64_MIN;
	int64_t t151 = -115379334276LL;

    t151 = (((x693+x694)<=x695)%x696);

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x697 = UINT8_MAX;
	static uint64_t x698 = UINT64_MAX;
	static int16_t x699 = -1;
	int16_t x700 = INT16_MIN;
	volatile int32_t t152 = -1012;

    t152 = (((x697+x698)<=x699)%x700);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x702 = 528LLU;
	uint16_t x703 = 1249U;
	int8_t x704 = -2;

    t153 = (((x701+x702)<=x703)%x704);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x705 = UINT8_MAX;
	uint16_t x706 = 19U;
	int32_t x707 = -1;
	int64_t x708 = -1LL;
	int64_t t154 = 5000506LL;

    t154 = (((x705+x706)<=x707)%x708);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x709 = -1;
	static int8_t x710 = INT8_MAX;
	int32_t x711 = -93;
	static int32_t x712 = INT32_MIN;
	static volatile int32_t t155 = -1015398;

    t155 = (((x709+x710)<=x711)%x712);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	static uint16_t x714 = 18U;
	volatile int16_t x716 = 10831;
	static int32_t t156 = 53737923;

    t156 = (((x713+x714)<=x715)%x716);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x717 = 0;
	int16_t x718 = INT16_MIN;
	uint8_t x719 = UINT8_MAX;
	static int64_t x720 = INT64_MIN;
	volatile int64_t t157 = 3773LL;

    t157 = (((x717+x718)<=x719)%x720);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x721 = 45U;
	volatile uint16_t x722 = 25U;
	volatile int8_t x723 = -1;
	uint64_t x724 = UINT64_MAX;

    t158 = (((x721+x722)<=x723)%x724);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x725 = -1;
	uint64_t x727 = 463958328820091093LLU;
	uint32_t x728 = UINT32_MAX;
	static volatile uint32_t t159 = 5777U;

    t159 = (((x725+x726)<=x727)%x728);

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x729 = INT8_MIN;
	uint16_t x731 = UINT16_MAX;
	uint32_t x732 = 4153188U;
	uint32_t t160 = 545U;

    t160 = (((x729+x730)<=x731)%x732);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x737 = 0U;
	int8_t x738 = -1;
	static int8_t x739 = INT8_MIN;
	volatile int64_t x740 = 7821231LL;
	volatile int64_t t161 = -27472377LL;

    t161 = (((x737+x738)<=x739)%x740);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x741 = UINT32_MAX;
	volatile int8_t x743 = INT8_MIN;
	static volatile int64_t t162 = 79141816LL;

    t162 = (((x741+x742)<=x743)%x744);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x745 = -1;
	uint64_t x747 = 15405863LLU;
	int16_t x748 = -1;
	volatile int32_t t163 = 108248699;

    t163 = (((x745+x746)<=x747)%x748);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MAX;
	volatile uint64_t x751 = UINT64_MAX;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t164 = -317620;

    t164 = (((x749+x750)<=x751)%x752);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = -1LL;
	static int32_t x755 = -1780904;
	static uint16_t x756 = UINT16_MAX;

    t165 = (((x753+x754)<=x755)%x756);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x770 = -1;
	uint8_t x771 = 0U;
	int8_t x772 = INT8_MIN;
	static volatile int32_t t166 = 31;

    t166 = (((x769+x770)<=x771)%x772);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x773 = 2U;
	static int16_t x774 = INT16_MAX;
	uint32_t x776 = 1741921369U;
	volatile uint32_t t167 = 4639962U;

    t167 = (((x773+x774)<=x775)%x776);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t t168 = 8;

    t168 = (((x777+x778)<=x779)%x780);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x782 = 430;
	static uint32_t x784 = 5904900U;
	uint32_t t169 = 192655792U;

    t169 = (((x781+x782)<=x783)%x784);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint64_t x786 = 4029164012476934849LLU;
	int8_t x787 = INT8_MAX;
	int64_t x788 = 2425225231922756LL;

    t170 = (((x785+x786)<=x787)%x788);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x789 = UINT16_MAX;
	uint32_t x790 = UINT32_MAX;
	int64_t x792 = INT64_MIN;
	int64_t t171 = -51562933415LL;

    t171 = (((x789+x790)<=x791)%x792);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x793 = 202U;
	uint8_t x796 = UINT8_MAX;

    t172 = (((x793+x794)<=x795)%x796);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x798 = -1;
	uint32_t x799 = 102347979U;
	static uint16_t x800 = 15292U;
	int32_t t173 = 2294692;

    t173 = (((x797+x798)<=x799)%x800);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x801 = INT64_MAX;
	int64_t x802 = INT64_MIN;
	uint8_t x803 = UINT8_MAX;
	int64_t x804 = -9220806785LL;

    t174 = (((x801+x802)<=x803)%x804);

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x808 = 476;
	int32_t t175 = -1462454;

    t175 = (((x805+x806)<=x807)%x808);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x810 = INT16_MAX;
	volatile int16_t x811 = -1;
	uint64_t x812 = 402365LLU;

    t176 = (((x809+x810)<=x811)%x812);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x815 = 3U;
	int8_t x816 = INT8_MIN;

    t177 = (((x813+x814)<=x815)%x816);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x817 = INT8_MAX;
	int64_t x818 = INT64_MIN;
	int32_t x819 = INT32_MIN;
	uint16_t x820 = 141U;
	static int32_t t178 = -1;

    t178 = (((x817+x818)<=x819)%x820);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x826 = -1;
	int32_t x828 = -305;
	volatile int32_t t179 = -189920;

    t179 = (((x825+x826)<=x827)%x828);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x829 = 0U;
	volatile int64_t x831 = -1LL;
	static int32_t x832 = INT32_MIN;

    t180 = (((x829+x830)<=x831)%x832);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x833 = -41;
	int16_t x834 = 34;
	uint32_t x835 = 2030U;
	static int32_t t181 = 553;

    t181 = (((x833+x834)<=x835)%x836);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x837 = -214LL;
	volatile int16_t x840 = 271;

    t182 = (((x837+x838)<=x839)%x840);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x841 = UINT8_MAX;
	volatile int8_t x842 = 0;
	uint8_t x843 = 7U;
	int32_t t183 = 29890;

    t183 = (((x841+x842)<=x843)%x844);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x845 = INT16_MAX;
	static volatile int32_t x847 = -1;
	static int16_t x848 = INT16_MAX;
	int32_t t184 = 81414;

    t184 = (((x845+x846)<=x847)%x848);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x849 = -1LL;
	volatile int64_t x850 = -186LL;
	volatile uint32_t x851 = 178799068U;
	int64_t x852 = INT64_MIN;
	static int64_t t185 = 1108621859191194723LL;

    t185 = (((x849+x850)<=x851)%x852);

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x857 = -14330;
	int16_t x859 = INT16_MIN;
	static uint32_t x860 = 500U;

    t186 = (((x857+x858)<=x859)%x860);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x861 = INT64_MIN;
	uint8_t x862 = UINT8_MAX;
	int16_t x863 = INT16_MIN;
	volatile int64_t t187 = -1905091LL;

    t187 = (((x861+x862)<=x863)%x864);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x865 = -1;
	int8_t x866 = INT8_MAX;
	volatile int32_t t188 = 135172525;

    t188 = (((x865+x866)<=x867)%x868);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x869 = INT32_MIN;
	int64_t x870 = INT64_MAX;
	int8_t x871 = INT8_MIN;
	uint32_t x872 = UINT32_MAX;
	static uint32_t t189 = 31U;

    t189 = (((x869+x870)<=x871)%x872);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x874 = -1;
	static int32_t x875 = INT32_MAX;
	int64_t t190 = -104LL;

    t190 = (((x873+x874)<=x875)%x876);

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x877 = UINT8_MAX;
	int8_t x878 = -1;
	static uint16_t x879 = UINT16_MAX;
	int8_t x880 = -1;
	static int32_t t191 = 1325468;

    t191 = (((x877+x878)<=x879)%x880);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x885 = -1;
	static int16_t x886 = -1;
	uint32_t x887 = 106977U;

    t192 = (((x885+x886)<=x887)%x888);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x889 = UINT16_MAX;
	uint64_t x890 = UINT64_MAX;
	int16_t x891 = INT16_MIN;
	static int8_t x892 = 2;
	volatile int32_t t193 = 7;

    t193 = (((x889+x890)<=x891)%x892);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x893 = -1LL;
	static int32_t x894 = 3402651;
	volatile uint16_t x895 = 190U;
	int8_t x896 = INT8_MIN;

    t194 = (((x893+x894)<=x895)%x896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x897 = 19U;
	volatile int8_t x898 = 0;
	static int32_t t195 = 1009135;

    t195 = (((x897+x898)<=x899)%x900);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x901 = -1LL;
	volatile int8_t x904 = INT8_MIN;
	int32_t t196 = -1519;

    t196 = (((x901+x902)<=x903)%x904);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x905 = INT64_MAX;
	int32_t x906 = -1;
	int8_t x907 = INT8_MIN;
	uint8_t x908 = 1U;
	static int32_t t197 = 64961;

    t197 = (((x905+x906)<=x907)%x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x910 = 36;
	static volatile int8_t x911 = INT8_MIN;
	volatile uint8_t x912 = UINT8_MAX;
	int32_t t198 = -11;

    t198 = (((x909+x910)<=x911)%x912);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x913 = 18U;
	int8_t x914 = INT8_MIN;
	int8_t x915 = 0;
	volatile int32_t t199 = 23;

    t199 = (((x913+x914)<=x915)%x916);

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

