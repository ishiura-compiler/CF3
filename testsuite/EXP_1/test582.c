
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

static int16_t x2 = INT16_MAX;
int32_t t1 = -14526315;
static int32_t x12 = -1;
uint64_t x13 = 243270424314LLU;
int64_t x14 = -1LL;
uint32_t x21 = 2008641064U;
static int64_t x24 = 422719118588012LL;
int16_t x27 = -13206;
volatile int8_t x28 = INT8_MIN;
uint8_t x29 = UINT8_MAX;
int8_t x31 = INT8_MIN;
volatile int8_t x32 = INT8_MIN;
static int16_t x37 = INT16_MIN;
static volatile uint64_t x39 = UINT64_MAX;
int8_t x40 = INT8_MIN;
volatile uint64_t x45 = 932840031979181LLU;
uint64_t x50 = UINT64_MAX;
int8_t x51 = 29;
int8_t x57 = 3;
int16_t x63 = INT16_MIN;
int16_t x67 = 11;
uint8_t x72 = 1U;
volatile int16_t x78 = -1;
volatile int8_t x80 = 3;
uint16_t x95 = 0U;
uint32_t x97 = 9U;
uint8_t x112 = UINT8_MAX;
uint8_t x124 = 100U;
volatile int32_t t23 = -55;
volatile uint8_t x125 = 23U;
volatile int16_t x126 = INT16_MIN;
volatile int32_t t24 = -4;
static uint8_t x129 = 4U;
volatile int16_t x141 = INT16_MIN;
volatile uint8_t x142 = 5U;
uint32_t x147 = 11U;
int8_t x152 = -63;
int32_t t28 = 3283282;
static uint64_t x166 = UINT64_MAX;
volatile int8_t x183 = 9;
static int16_t x185 = -942;
uint16_t x195 = 124U;
int32_t t35 = -3;
static int16_t x202 = INT16_MIN;
int32_t x205 = INT32_MAX;
volatile int64_t x206 = -1LL;
uint16_t x207 = UINT16_MAX;
int32_t t39 = -479841;
static volatile int32_t t40 = -558785271;
int8_t x236 = -1;
int32_t t42 = -58120199;
int16_t x248 = 41;
int64_t x251 = INT64_MIN;
int16_t x252 = 5422;
volatile int32_t t46 = -920527373;
uint8_t x254 = 101U;
int8_t x262 = 2;
static uint16_t x289 = 1216U;
int64_t x311 = -1LL;
int64_t x317 = -51217468864142016LL;
int8_t x318 = INT8_MAX;
volatile uint16_t x334 = 7U;
int64_t x335 = INT64_MAX;
int8_t x339 = 0;
int16_t x340 = INT16_MIN;
uint32_t x345 = 2U;
int32_t t64 = 841203;
int8_t x365 = -58;
int8_t x367 = INT8_MIN;
uint64_t x368 = UINT64_MAX;
int32_t t68 = -19;
int16_t x377 = -12;
static int64_t x383 = -1LL;
volatile int16_t x393 = INT16_MIN;
static int32_t x397 = -1;
static uint32_t x398 = 2U;
volatile int32_t t73 = -188675;
int8_t x412 = -1;
uint8_t x419 = UINT8_MAX;
static volatile int8_t x420 = INT8_MAX;
int64_t x435 = -1LL;
volatile int32_t t79 = -2;
volatile int32_t t80 = -1;
volatile int32_t x459 = INT32_MIN;
int8_t x468 = INT8_MIN;
int8_t x477 = -1;
int16_t x479 = INT16_MIN;
int16_t x483 = INT16_MAX;
static volatile int32_t x504 = -42;
uint16_t x518 = 7U;
static uint32_t x527 = UINT32_MAX;
volatile uint32_t x530 = 3U;
uint8_t x531 = UINT8_MAX;
int64_t x546 = -1LL;
static uint64_t x548 = UINT64_MAX;
int32_t t93 = 1752;
static int32_t x554 = INT32_MAX;
uint16_t x562 = UINT16_MAX;
int64_t x567 = INT64_MAX;
static volatile int16_t x569 = -31;
static uint8_t x570 = 4U;
uint32_t x579 = 49U;
uint8_t x583 = UINT8_MAX;
int64_t x588 = INT64_MIN;
int32_t x590 = -101;
int16_t x592 = -1;
volatile int8_t x601 = -1;
volatile int32_t t104 = 26856;
static uint64_t x618 = 418093434594004702LLU;
int32_t t106 = 3638797;
static int64_t x635 = INT64_MIN;
uint64_t x646 = 57883139LLU;
int8_t x651 = -1;
uint32_t x652 = 12297626U;
int8_t x658 = INT8_MAX;
uint64_t x660 = UINT64_MAX;
static int16_t x669 = -1407;
int8_t x677 = 11;
uint64_t x680 = 432081171LLU;
static int32_t t119 = -69013385;
int32_t t121 = -43475;
uint64_t x725 = UINT64_MAX;
int8_t x728 = INT8_MIN;
uint64_t x739 = 21LLU;
int8_t x748 = -1;
volatile int16_t x751 = 913;
int16_t x752 = -1;
int32_t t128 = -5850;
int8_t x769 = 1;
static int8_t x772 = INT8_MAX;
int16_t x777 = 0;
int16_t x786 = -1;
int64_t x787 = INT64_MIN;
volatile uint32_t x791 = UINT32_MAX;
static volatile int32_t t132 = -7985341;
static uint16_t x795 = UINT16_MAX;
static volatile uint8_t x798 = UINT8_MAX;
volatile int32_t x800 = INT32_MAX;
static int64_t x808 = INT64_MAX;
int8_t x809 = 1;
int64_t x812 = INT64_MIN;
static int64_t x814 = -1LL;
static int8_t x830 = INT8_MIN;
int16_t x837 = INT16_MIN;
int8_t x838 = 46;
uint16_t x845 = 8997U;
int16_t x849 = -125;
uint8_t x852 = UINT8_MAX;
volatile int32_t t144 = -1592;
uint32_t x860 = 688U;
uint8_t x869 = UINT8_MAX;
int32_t x872 = -10848;
int8_t x877 = -2;
int16_t x880 = INT16_MIN;
int8_t x885 = INT8_MAX;
static int32_t x891 = -1563;
int32_t t153 = 1644473;
int32_t t154 = -42;
int16_t x899 = -64;
static int16_t x913 = -6400;
int8_t x921 = INT8_MIN;
int64_t x922 = -1134901LL;
static int64_t x930 = -22253624516694211LL;
static int8_t x931 = 5;
int64_t x947 = 0LL;
uint64_t x949 = 12288154LLU;
static int32_t t164 = -433353714;
static int32_t t165 = 0;
uint8_t x963 = 53U;
uint32_t x969 = UINT32_MAX;
int8_t x971 = INT8_MAX;
int32_t t167 = 506;
int8_t x976 = INT8_MAX;
volatile uint16_t x978 = 26U;
volatile int16_t x997 = -1;
int32_t x1005 = 27;
volatile uint8_t x1006 = UINT8_MAX;
int16_t x1018 = 0;
int64_t x1022 = -1LL;
volatile int32_t t175 = -903561316;
int32_t x1029 = -18093;
volatile int32_t t177 = 2960;
int8_t x1039 = -1;
volatile int32_t t178 = 166913561;
int8_t x1056 = INT8_MAX;
volatile int32_t x1069 = 41655;
uint8_t x1078 = 0U;
static volatile uint8_t x1079 = UINT8_MAX;
int8_t x1086 = INT8_MIN;
uint16_t x1087 = 44U;
int16_t x1089 = -1;
int64_t x1092 = INT64_MIN;
volatile uint32_t x1093 = 311419U;
int32_t t189 = 165452;
int32_t x1105 = 1087;
static volatile int32_t t191 = 0;
uint16_t x1110 = 4211U;
int32_t x1112 = INT32_MIN;
volatile int8_t x1120 = INT8_MIN;
volatile int32_t t195 = 581363034;
int16_t x1136 = INT16_MIN;
int64_t x1150 = INT64_MIN;
volatile int32_t t198 = 235187760;
int32_t t199 = 59;


void f0(void) {
    	int64_t x1 = -1LL;
	uint32_t x3 = 6U;
	int32_t x4 = INT32_MAX;
	static int32_t t0 = 0;

    t0 = (((x1*x2)^x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 2U;
	volatile int8_t x6 = -2;
	int64_t x7 = 3108534815169038LL;
	static int8_t x8 = -7;

    t1 = (((x5*x6)^x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 14;
	static int8_t x10 = INT8_MAX;
	int64_t x11 = 13821820LL;
	volatile int32_t t2 = -191273994;

    t2 = (((x9*x10)^x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x15 = -2319;
	int16_t x16 = 493;
	volatile int32_t t3 = 16673789;

    t3 = (((x13*x14)^x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -73;
	volatile int64_t x18 = 30LL;
	int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 6616828;

    t4 = (((x17*x18)^x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = INT32_MAX;
	volatile int16_t x23 = -1;
	int32_t t5 = 326;

    t5 = (((x21*x22)^x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -5605;
	static uint32_t x26 = UINT32_MAX;
	volatile int32_t t6 = 7628;

    t6 = (((x25*x26)^x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MIN;
	int32_t t7 = -31;

    t7 = (((x29*x30)^x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x38 = UINT8_MAX;
	volatile int32_t t8 = -6945504;

    t8 = (((x37*x38)^x39)==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 436794885U;
	volatile int8_t x43 = -1;
	int64_t x44 = 626LL;
	volatile int32_t t9 = -19231760;

    t9 = (((x41*x42)^x43)==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x46 = 55;
	volatile int8_t x47 = INT8_MIN;
	uint32_t x48 = 11810643U;
	int32_t t10 = -116;

    t10 = (((x45*x46)^x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = 3748;
	static volatile int64_t x52 = INT64_MIN;
	int32_t t11 = 1;

    t11 = (((x49*x50)^x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = 50LL;
	volatile int64_t x54 = 696005919925LL;
	int16_t x55 = -1;
	volatile uint32_t x56 = 1732651190U;
	int32_t t12 = -3247;

    t12 = (((x53*x54)^x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x58 = -1;
	int64_t x59 = -2327118654421LL;
	int64_t x60 = INT64_MIN;
	volatile int32_t t13 = 1;

    t13 = (((x57*x58)^x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = UINT64_MAX;
	int64_t x62 = -1LL;
	int32_t x64 = INT32_MIN;
	static int32_t t14 = -33388;

    t14 = (((x61*x62)^x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = 1LL;
	volatile int64_t x66 = 303LL;
	static uint64_t x68 = 11598739LLU;
	int32_t t15 = -1;

    t15 = (((x65*x66)^x67)==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	volatile int16_t x71 = INT16_MAX;
	int32_t t16 = 11901;

    t16 = (((x69*x70)^x71)==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = 278;
	int64_t x79 = INT64_MIN;
	volatile int32_t t17 = -7981270;

    t17 = (((x77*x78)^x79)==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x81 = 0U;
	static uint64_t x82 = 43277027030167066LLU;
	volatile int32_t x83 = -1;
	volatile uint64_t x84 = UINT64_MAX;
	int32_t t18 = -394;

    t18 = (((x81*x82)^x83)==x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 0LL;
	int32_t x86 = -1;
	int16_t x87 = -15;
	int64_t x88 = -245067LL;
	volatile int32_t t19 = 45;

    t19 = (((x85*x86)^x87)==x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint8_t x94 = UINT8_MAX;
	int32_t x96 = -352050106;
	int32_t t20 = -1;

    t20 = (((x93*x94)^x95)==x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MIN;
	volatile uint8_t x100 = 38U;
	volatile int32_t t21 = 1;

    t21 = (((x97*x98)^x99)==x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x109 = 19;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	static volatile int32_t t22 = 7;

    t22 = (((x109*x110)^x111)==x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = 0;
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = UINT8_MAX;

    t23 = (((x121*x122)^x123)==x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = UINT64_MAX;

    t24 = (((x125*x126)^x127)==x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x130 = -40202460;
	static uint8_t x131 = 62U;
	static uint8_t x132 = UINT8_MAX;
	static volatile int32_t t25 = 136;

    t25 = (((x129*x130)^x131)==x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x143 = 0;
	int16_t x144 = -1;
	volatile int32_t t26 = -1;

    t26 = (((x141*x142)^x143)==x144);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x145 = INT8_MIN;
	int8_t x146 = 2;
	int16_t x148 = 3882;
	volatile int32_t t27 = -3224;

    t27 = (((x145*x146)^x147)==x148);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x149 = INT64_MAX;
	static int8_t x150 = -1;
	volatile int32_t x151 = INT32_MIN;

    t28 = (((x149*x150)^x151)==x152);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x161 = -1;
	int32_t x162 = 18072945;
	uint8_t x163 = 0U;
	uint64_t x164 = 276087873497737293LLU;
	int32_t t29 = 8156640;

    t29 = (((x161*x162)^x163)==x164);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x165 = 1U;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t30 = 3558;

    t30 = (((x165*x166)^x167)==x168);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x173 = 451;
	uint16_t x174 = 3U;
	volatile int32_t x175 = -3012;
	int8_t x176 = INT8_MIN;
	int32_t t31 = 0;

    t31 = (((x173*x174)^x175)==x176);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x181 = -1;
	static int32_t x182 = INT32_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t32 = -8;

    t32 = (((x181*x182)^x183)==x184);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x186 = 11U;
	uint16_t x187 = 0U;
	static volatile int64_t x188 = -1LL;
	int32_t t33 = 2452;

    t33 = (((x185*x186)^x187)==x188);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x189 = INT64_MIN;
	uint16_t x190 = 0U;
	static int64_t x191 = -21951959467203LL;
	int64_t x192 = INT64_MIN;
	int32_t t34 = 9;

    t34 = (((x189*x190)^x191)==x192);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x193 = -1;
	static int16_t x194 = 772;
	int8_t x196 = INT8_MAX;

    t35 = (((x193*x194)^x195)==x196);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	int8_t x200 = INT8_MIN;
	int32_t t36 = 3;

    t36 = (((x197*x198)^x199)==x200);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x201 = 89U;
	static uint8_t x203 = 73U;
	int8_t x204 = INT8_MIN;
	int32_t t37 = 42098277;

    t37 = (((x201*x202)^x203)==x204);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x208 = 127U;
	int32_t t38 = -851;

    t38 = (((x205*x206)^x207)==x208);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	int64_t x214 = -7189LL;
	int16_t x215 = -7881;
	static volatile int16_t x216 = INT16_MIN;

    t39 = (((x213*x214)^x215)==x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = -1;
	int8_t x226 = 9;
	static int64_t x227 = INT64_MAX;
	static int32_t x228 = INT32_MIN;

    t40 = (((x225*x226)^x227)==x228);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x229 = 0;
	int16_t x230 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = -1LL;
	static int32_t t41 = 12962;

    t41 = (((x229*x230)^x231)==x232);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x233 = UINT16_MAX;
	uint32_t x234 = 39793U;
	static volatile uint32_t x235 = 64922409U;

    t42 = (((x233*x234)^x235)==x236);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x237 = 3;
	uint64_t x238 = 122632122LLU;
	int8_t x239 = -1;
	int64_t x240 = 322618788LL;
	volatile int32_t t43 = -18481375;

    t43 = (((x237*x238)^x239)==x240);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x241 = 29;
	volatile int8_t x242 = -1;
	static uint8_t x243 = 114U;
	static uint8_t x244 = 0U;
	volatile int32_t t44 = -104896;

    t44 = (((x241*x242)^x243)==x244);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x245 = 4U;
	static uint64_t x246 = 458153085LLU;
	int64_t x247 = INT64_MAX;
	int32_t t45 = 435;

    t45 = (((x245*x246)^x247)==x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x249 = 689;
	volatile uint32_t x250 = 1052612038U;

    t46 = (((x249*x250)^x251)==x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = 4;
	uint16_t x255 = 7019U;
	static volatile uint8_t x256 = 26U;
	volatile int32_t t47 = -49476;

    t47 = (((x253*x254)^x255)==x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x261 = 6534U;
	int8_t x263 = -23;
	volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t48 = -444;

    t48 = (((x261*x262)^x263)==x264);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x265 = INT32_MAX;
	volatile int32_t x266 = -1;
	uint32_t x267 = 4391288U;
	static int32_t x268 = -1;
	volatile int32_t t49 = 22;

    t49 = (((x265*x266)^x267)==x268);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x270 = -402;
	uint16_t x271 = 8139U;
	uint32_t x272 = 21185U;
	volatile int32_t t50 = -30147;

    t50 = (((x269*x270)^x271)==x272);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x273 = INT16_MIN;
	volatile uint16_t x274 = UINT16_MAX;
	uint8_t x275 = 45U;
	int64_t x276 = INT64_MIN;
	int32_t t51 = -22586292;

    t51 = (((x273*x274)^x275)==x276);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x281 = 793944141964740029LLU;
	volatile int64_t x282 = 13LL;
	uint32_t x283 = 1709U;
	static int64_t x284 = INT64_MIN;
	volatile int32_t t52 = 4330336;

    t52 = (((x281*x282)^x283)==x284);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x285 = 1;
	static int16_t x286 = INT16_MAX;
	static int32_t x287 = 7640;
	static int8_t x288 = -1;
	static volatile int32_t t53 = 15;

    t53 = (((x285*x286)^x287)==x288);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x290 = 5U;
	uint8_t x291 = 71U;
	int8_t x292 = -15;
	static volatile int32_t t54 = -3108;

    t54 = (((x289*x290)^x291)==x292);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x305 = -1;
	static int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint8_t x308 = 3U;
	int32_t t55 = -3;

    t55 = (((x305*x306)^x307)==x308);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x309 = -1;
	volatile int32_t x310 = -59;
	int8_t x312 = 0;
	int32_t t56 = -359443821;

    t56 = (((x309*x310)^x311)==x312);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x313 = INT32_MIN;
	uint64_t x314 = 28428903106LLU;
	uint8_t x315 = 3U;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t57 = 24093877;

    t57 = (((x313*x314)^x315)==x316);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x319 = INT16_MAX;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t58 = 753875;

    t58 = (((x317*x318)^x319)==x320);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x325 = -2;
	volatile uint8_t x326 = 0U;
	uint32_t x327 = 51045106U;
	static volatile int16_t x328 = INT16_MIN;
	volatile int32_t t59 = -26986149;

    t59 = (((x325*x326)^x327)==x328);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x333 = -1LL;
	int8_t x336 = INT8_MIN;
	int32_t t60 = 30811485;

    t60 = (((x333*x334)^x335)==x336);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x337 = -13;
	int16_t x338 = INT16_MAX;
	int32_t t61 = -53615;

    t61 = (((x337*x338)^x339)==x340);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x341 = INT16_MAX;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t62 = 0;

    t62 = (((x341*x342)^x343)==x344);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x346 = UINT16_MAX;
	int32_t x347 = 0;
	volatile int16_t x348 = -1;
	volatile int32_t t63 = 4323804;

    t63 = (((x345*x346)^x347)==x348);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x350 = INT64_MAX;
	static int8_t x351 = -8;
	uint8_t x352 = 2U;

    t64 = (((x349*x350)^x351)==x352);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = 0U;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -1;
	volatile int32_t t65 = 123678;

    t65 = (((x357*x358)^x359)==x360);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x361 = 9;
	uint8_t x362 = 2U;
	volatile int64_t x363 = INT64_MAX;
	uint32_t x364 = 435U;
	int32_t t66 = 1448;

    t66 = (((x361*x362)^x363)==x364);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x366 = 9427U;
	static int32_t t67 = 54239;

    t67 = (((x365*x366)^x367)==x368);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	static int8_t x374 = 5;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;

    t68 = (((x373*x374)^x375)==x376);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x378 = INT8_MAX;
	static uint8_t x379 = 2U;
	uint16_t x380 = 53U;
	volatile int32_t t69 = -62052;

    t69 = (((x377*x378)^x379)==x380);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x381 = INT16_MAX;
	uint16_t x382 = 0U;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t70 = 28;

    t70 = (((x381*x382)^x383)==x384);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x394 = 5791629U;
	int64_t x395 = INT64_MIN;
	static int16_t x396 = INT16_MAX;
	static volatile int32_t t71 = 158;

    t71 = (((x393*x394)^x395)==x396);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x399 = 12362U;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t72 = 253555;

    t72 = (((x397*x398)^x399)==x400);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x405 = -1;
	volatile uint32_t x406 = 226537U;
	int8_t x407 = 0;
	int8_t x408 = 0;

    t73 = (((x405*x406)^x407)==x408);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x409 = 190109469650LLU;
	int32_t x410 = INT32_MIN;
	uint8_t x411 = UINT8_MAX;
	int32_t t74 = -10132;

    t74 = (((x409*x410)^x411)==x412);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x417 = 0U;
	int8_t x418 = INT8_MIN;
	volatile int32_t t75 = -523;

    t75 = (((x417*x418)^x419)==x420);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = 11LL;
	volatile uint8_t x424 = UINT8_MAX;
	int32_t t76 = -349;

    t76 = (((x421*x422)^x423)==x424);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x425 = UINT64_MAX;
	volatile uint32_t x426 = 15572U;
	int8_t x427 = 1;
	int16_t x428 = INT16_MIN;
	int32_t t77 = 2651093;

    t77 = (((x425*x426)^x427)==x428);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x433 = 122U;
	uint8_t x434 = UINT8_MAX;
	static int8_t x436 = -1;
	int32_t t78 = 424464;

    t78 = (((x433*x434)^x435)==x436);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x437 = 47391313LL;
	volatile int16_t x438 = 2;
	volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = 1;

    t79 = (((x437*x438)^x439)==x440);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x441 = 1;
	int32_t x442 = INT32_MIN;
	static volatile int32_t x443 = -1;
	static int16_t x444 = -932;

    t80 = (((x441*x442)^x443)==x444);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x457 = 2345;
	uint64_t x458 = 6237827442674505LLU;
	uint64_t x460 = UINT64_MAX;
	int32_t t81 = 0;

    t81 = (((x457*x458)^x459)==x460);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x465 = INT8_MIN;
	uint32_t x466 = 1867913662U;
	int64_t x467 = 593098650LL;
	int32_t t82 = -64616108;

    t82 = (((x465*x466)^x467)==x468);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x478 = 105724U;
	volatile int32_t x480 = 1;
	int32_t t83 = -2955;

    t83 = (((x477*x478)^x479)==x480);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x481 = 13304U;
	volatile int8_t x482 = INT8_MIN;
	int8_t x484 = INT8_MIN;
	int32_t t84 = 205;

    t84 = (((x481*x482)^x483)==x484);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x485 = -1;
	static uint8_t x486 = 5U;
	uint32_t x487 = 56874404U;
	int64_t x488 = INT64_MIN;
	volatile int32_t t85 = 52383;

    t85 = (((x485*x486)^x487)==x488);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x501 = -1LL;
	uint64_t x502 = 27363753LLU;
	int32_t x503 = INT32_MAX;
	static volatile int32_t t86 = 132380134;

    t86 = (((x501*x502)^x503)==x504);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x517 = -2268;
	int8_t x519 = 2;
	int16_t x520 = INT16_MIN;
	int32_t t87 = -11880035;

    t87 = (((x517*x518)^x519)==x520);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x525 = 0;
	uint8_t x526 = 3U;
	static int16_t x528 = INT16_MIN;
	int32_t t88 = 0;

    t88 = (((x525*x526)^x527)==x528);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x529 = -1187;
	int16_t x532 = INT16_MAX;
	volatile int32_t t89 = -124059091;

    t89 = (((x529*x530)^x531)==x532);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x533 = 423505323LLU;
	int32_t x534 = 3230364;
	int64_t x535 = -2LL;
	int64_t x536 = 5612331154342565LL;
	int32_t t90 = 4201;

    t90 = (((x533*x534)^x535)==x536);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x537 = -2;
	int32_t x538 = 1004354467;
	int8_t x539 = -1;
	int64_t x540 = INT64_MAX;
	int32_t t91 = -607815;

    t91 = (((x537*x538)^x539)==x540);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x541 = 5U;
	volatile uint32_t x542 = 2966U;
	uint8_t x543 = 9U;
	volatile int8_t x544 = -1;
	int32_t t92 = 316;

    t92 = (((x541*x542)^x543)==x544);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x545 = -260630LL;
	int8_t x547 = -7;

    t93 = (((x545*x546)^x547)==x548);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x553 = 16LLU;
	volatile int8_t x555 = -2;
	int16_t x556 = INT16_MIN;
	volatile int32_t t94 = -15694956;

    t94 = (((x553*x554)^x555)==x556);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint64_t x557 = UINT64_MAX;
	int32_t x558 = 977926;
	int64_t x559 = INT64_MAX;
	volatile uint32_t x560 = UINT32_MAX;
	int32_t t95 = 301766924;

    t95 = (((x557*x558)^x559)==x560);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x561 = 1;
	int8_t x563 = 13;
	static int16_t x564 = -1;
	int32_t t96 = 133;

    t96 = (((x561*x562)^x563)==x564);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x565 = 266636888U;
	int64_t x566 = 15104065783LL;
	uint32_t x568 = 13717U;
	static int32_t t97 = 63758098;

    t97 = (((x565*x566)^x567)==x568);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x571 = UINT8_MAX;
	volatile uint32_t x572 = 129277U;
	volatile int32_t t98 = 8;

    t98 = (((x569*x570)^x571)==x572);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x577 = 6U;
	int64_t x578 = -1LL;
	uint16_t x580 = 0U;
	volatile int32_t t99 = -62432;

    t99 = (((x577*x578)^x579)==x580);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x581 = 2;
	int16_t x582 = INT16_MAX;
	static uint32_t x584 = 23129U;
	volatile int32_t t100 = 2886;

    t100 = (((x581*x582)^x583)==x584);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x585 = 1U;
	int32_t x586 = INT32_MIN;
	int32_t x587 = INT32_MIN;
	static volatile int32_t t101 = 3670647;

    t101 = (((x585*x586)^x587)==x588);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x589 = 108146664338LLU;
	uint8_t x591 = 57U;
	int32_t t102 = -1;

    t102 = (((x589*x590)^x591)==x592);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile uint16_t x594 = 31U;
	int32_t x595 = INT32_MIN;
	volatile int64_t x596 = -1LL;
	volatile int32_t t103 = 5385498;

    t103 = (((x593*x594)^x595)==x596);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x602 = INT8_MAX;
	int16_t x603 = -1;
	volatile uint16_t x604 = 124U;

    t104 = (((x601*x602)^x603)==x604);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x617 = INT8_MAX;
	static int64_t x619 = INT64_MIN;
	int8_t x620 = INT8_MAX;
	volatile int32_t t105 = 1394653;

    t105 = (((x617*x618)^x619)==x620);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x625 = -1;
	uint8_t x626 = 62U;
	static uint8_t x627 = UINT8_MAX;
	int16_t x628 = 110;

    t106 = (((x625*x626)^x627)==x628);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x629 = 55526963209LLU;
	int64_t x630 = -1LL;
	volatile uint8_t x631 = UINT8_MAX;
	int64_t x632 = INT64_MAX;
	volatile int32_t t107 = 5288577;

    t107 = (((x629*x630)^x631)==x632);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x633 = 1;
	static uint16_t x634 = 1019U;
	int16_t x636 = 516;
	volatile int32_t t108 = -841141327;

    t108 = (((x633*x634)^x635)==x636);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x645 = -1;
	int8_t x647 = -1;
	int32_t x648 = 10130961;
	volatile int32_t t109 = 3878580;

    t109 = (((x645*x646)^x647)==x648);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x649 = -1248633LL;
	int32_t x650 = INT32_MIN;
	volatile int32_t t110 = 115738;

    t110 = (((x649*x650)^x651)==x652);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x653 = 2;
	uint32_t x654 = 800U;
	uint64_t x655 = 2801642820524375LLU;
	static volatile int8_t x656 = INT8_MAX;
	static int32_t t111 = 1663;

    t111 = (((x653*x654)^x655)==x656);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x657 = -19;
	int64_t x659 = -1LL;
	volatile int32_t t112 = 436517446;

    t112 = (((x657*x658)^x659)==x660);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x661 = UINT16_MAX;
	uint8_t x662 = UINT8_MAX;
	int8_t x663 = 1;
	uint64_t x664 = 143012LLU;
	int32_t t113 = -1;

    t113 = (((x661*x662)^x663)==x664);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x670 = -1;
	int64_t x671 = INT64_MIN;
	static volatile int16_t x672 = 161;
	static int32_t t114 = 1;

    t114 = (((x669*x670)^x671)==x672);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x673 = UINT8_MAX;
	static int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	uint64_t x676 = 1982099903897694294LLU;
	int32_t t115 = -6405;

    t115 = (((x673*x674)^x675)==x676);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x678 = UINT64_MAX;
	volatile uint8_t x679 = UINT8_MAX;
	static volatile int32_t t116 = -18033068;

    t116 = (((x677*x678)^x679)==x680);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x685 = 11643U;
	volatile int16_t x686 = -122;
	static uint64_t x687 = 430762044972007850LLU;
	static uint64_t x688 = 82273913541259LLU;
	int32_t t117 = 10691064;

    t117 = (((x685*x686)^x687)==x688);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x701 = INT32_MAX;
	uint64_t x702 = UINT64_MAX;
	int32_t x703 = INT32_MIN;
	int64_t x704 = 27797864LL;
	volatile int32_t t118 = 4980459;

    t118 = (((x701*x702)^x703)==x704);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x705 = INT16_MIN;
	static uint8_t x706 = 57U;
	volatile uint32_t x707 = 109982U;
	int16_t x708 = INT16_MAX;

    t119 = (((x705*x706)^x707)==x708);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x717 = -1;
	volatile int64_t x718 = -185964574794820617LL;
	int32_t x719 = INT32_MAX;
	uint16_t x720 = 11U;
	static int32_t t120 = 22;

    t120 = (((x717*x718)^x719)==x720);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x721 = INT8_MIN;
	uint64_t x722 = 372683337LLU;
	uint16_t x723 = UINT16_MAX;
	volatile uint64_t x724 = 655098036LLU;

    t121 = (((x721*x722)^x723)==x724);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x726 = 981303575801LLU;
	static uint16_t x727 = 0U;
	int32_t t122 = 981559;

    t122 = (((x725*x726)^x727)==x728);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x737 = 15U;
	uint8_t x738 = 5U;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t123 = -31834715;

    t123 = (((x737*x738)^x739)==x740);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x741 = -1;
	uint64_t x742 = UINT64_MAX;
	int8_t x743 = INT8_MIN;
	int8_t x744 = INT8_MIN;
	volatile int32_t t124 = 2118684;

    t124 = (((x741*x742)^x743)==x744);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x745 = -1LL;
	static int32_t x746 = -14952;
	int8_t x747 = 1;
	volatile int32_t t125 = 50;

    t125 = (((x745*x746)^x747)==x748);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x749 = INT8_MIN;
	uint16_t x750 = UINT16_MAX;
	volatile int32_t t126 = 16;

    t126 = (((x749*x750)^x751)==x752);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x757 = -1LL;
	uint64_t x758 = 719889202216162LLU;
	uint32_t x759 = 57U;
	int32_t x760 = INT32_MIN;
	int32_t t127 = 15;

    t127 = (((x757*x758)^x759)==x760);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x765 = 1294LL;
	volatile uint32_t x766 = 36149U;
	volatile int16_t x767 = INT16_MAX;
	uint16_t x768 = 9U;

    t128 = (((x765*x766)^x767)==x768);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x770 = INT32_MIN;
	uint8_t x771 = 0U;
	static volatile int32_t t129 = 0;

    t129 = (((x769*x770)^x771)==x772);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x778 = INT64_MAX;
	int8_t x779 = INT8_MIN;
	static int16_t x780 = INT16_MIN;
	int32_t t130 = -31;

    t130 = (((x777*x778)^x779)==x780);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x788 = 32240227LLU;
	volatile int32_t t131 = -167;

    t131 = (((x785*x786)^x787)==x788);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x789 = 0;
	uint32_t x790 = 1440058368U;
	int8_t x792 = INT8_MAX;

    t132 = (((x789*x790)^x791)==x792);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x793 = -1LL;
	uint16_t x794 = 99U;
	volatile int16_t x796 = INT16_MIN;
	static int32_t t133 = -70;

    t133 = (((x793*x794)^x795)==x796);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x797 = 12;
	uint8_t x799 = 0U;
	int32_t t134 = 7;

    t134 = (((x797*x798)^x799)==x800);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x801 = INT16_MIN;
	uint16_t x802 = UINT16_MAX;
	uint8_t x803 = 3U;
	int32_t x804 = INT32_MAX;
	volatile int32_t t135 = -1865041;

    t135 = (((x801*x802)^x803)==x804);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x805 = UINT64_MAX;
	int64_t x806 = INT64_MAX;
	int64_t x807 = -5LL;
	int32_t t136 = 2873;

    t136 = (((x805*x806)^x807)==x808);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x810 = 1;
	uint32_t x811 = 40684249U;
	volatile int32_t t137 = 472;

    t137 = (((x809*x810)^x811)==x812);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x813 = -268062498568LL;
	uint64_t x815 = 6843541621129LLU;
	volatile uint32_t x816 = 12U;
	volatile int32_t t138 = -418;

    t138 = (((x813*x814)^x815)==x816);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x829 = UINT64_MAX;
	int16_t x831 = 349;
	int16_t x832 = INT16_MAX;
	volatile int32_t t139 = -4373;

    t139 = (((x829*x830)^x831)==x832);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x839 = UINT64_MAX;
	static volatile int8_t x840 = INT8_MAX;
	int32_t t140 = 1927;

    t140 = (((x837*x838)^x839)==x840);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x841 = -1;
	int8_t x842 = INT8_MAX;
	int16_t x843 = 33;
	uint32_t x844 = UINT32_MAX;
	volatile int32_t t141 = 2847;

    t141 = (((x841*x842)^x843)==x844);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x846 = UINT32_MAX;
	volatile int16_t x847 = INT16_MIN;
	uint16_t x848 = 7U;
	volatile int32_t t142 = 1;

    t142 = (((x845*x846)^x847)==x848);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x850 = -1;
	uint32_t x851 = 12U;
	int32_t t143 = 57072;

    t143 = (((x849*x850)^x851)==x852);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x853 = INT16_MIN;
	int16_t x854 = INT16_MIN;
	volatile int32_t x855 = 29;
	int16_t x856 = INT16_MIN;

    t144 = (((x853*x854)^x855)==x856);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x857 = 1006248LLU;
	volatile int64_t x858 = INT64_MAX;
	volatile int16_t x859 = -64;
	static volatile int32_t t145 = -37953;

    t145 = (((x857*x858)^x859)==x860);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x861 = -9454516;
	int8_t x862 = 4;
	int16_t x863 = -1;
	volatile int64_t x864 = INT64_MIN;
	static volatile int32_t t146 = -26107044;

    t146 = (((x861*x862)^x863)==x864);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x865 = 3982U;
	uint64_t x866 = 187529777040LLU;
	volatile int8_t x867 = INT8_MAX;
	static volatile int16_t x868 = -37;
	int32_t t147 = 26;

    t147 = (((x865*x866)^x867)==x868);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x870 = UINT16_MAX;
	int16_t x871 = INT16_MAX;
	int32_t t148 = 12557;

    t148 = (((x869*x870)^x871)==x872);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x873 = 29U;
	uint16_t x874 = UINT16_MAX;
	static int16_t x875 = INT16_MIN;
	static uint64_t x876 = 3957640038420635512LLU;
	volatile int32_t t149 = 4032;

    t149 = (((x873*x874)^x875)==x876);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x878 = 54;
	volatile int64_t x879 = 0LL;
	volatile int32_t t150 = -3588;

    t150 = (((x877*x878)^x879)==x880);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x881 = INT8_MIN;
	int8_t x882 = INT8_MIN;
	static int8_t x883 = INT8_MAX;
	uint32_t x884 = 489U;
	volatile int32_t t151 = 10211;

    t151 = (((x881*x882)^x883)==x884);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x886 = INT8_MAX;
	static uint32_t x887 = UINT32_MAX;
	int32_t x888 = INT32_MAX;
	volatile int32_t t152 = 6834;

    t152 = (((x885*x886)^x887)==x888);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x889 = INT8_MAX;
	uint8_t x890 = 31U;
	uint32_t x892 = 242602U;

    t153 = (((x889*x890)^x891)==x892);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x893 = UINT32_MAX;
	uint64_t x894 = 27219170616757LLU;
	uint32_t x895 = 195U;
	int8_t x896 = INT8_MIN;

    t154 = (((x893*x894)^x895)==x896);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x897 = UINT8_MAX;
	static int16_t x898 = -3;
	uint32_t x900 = UINT32_MAX;
	int32_t t155 = -235191;

    t155 = (((x897*x898)^x899)==x900);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x909 = UINT64_MAX;
	int8_t x910 = -1;
	uint16_t x911 = 62U;
	volatile int64_t x912 = 42039437901LL;
	volatile int32_t t156 = -51392001;

    t156 = (((x909*x910)^x911)==x912);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x914 = INT16_MIN;
	static uint64_t x915 = UINT64_MAX;
	int32_t x916 = INT32_MAX;
	volatile int32_t t157 = 122914;

    t157 = (((x913*x914)^x915)==x916);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x923 = INT16_MIN;
	int64_t x924 = INT64_MAX;
	volatile int32_t t158 = 6250;

    t158 = (((x921*x922)^x923)==x924);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x925 = 104163696461069579LLU;
	uint32_t x926 = 743608827U;
	volatile int32_t x927 = -16198;
	int8_t x928 = -61;
	int32_t t159 = 487264;

    t159 = (((x925*x926)^x927)==x928);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x929 = UINT64_MAX;
	int32_t x932 = INT32_MIN;
	int32_t t160 = -204;

    t160 = (((x929*x930)^x931)==x932);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x933 = INT8_MIN;
	int16_t x934 = INT16_MIN;
	int8_t x935 = INT8_MIN;
	static int32_t x936 = -1;
	volatile int32_t t161 = -44537683;

    t161 = (((x933*x934)^x935)==x936);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x937 = 47290U;
	static int8_t x938 = INT8_MIN;
	int8_t x939 = -1;
	int16_t x940 = -107;
	volatile int32_t t162 = -1110149;

    t162 = (((x937*x938)^x939)==x940);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x945 = INT8_MIN;
	uint8_t x946 = 0U;
	uint16_t x948 = UINT16_MAX;
	volatile int32_t t163 = 6403923;

    t163 = (((x945*x946)^x947)==x948);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x950 = INT16_MIN;
	volatile int64_t x951 = INT64_MIN;
	int32_t x952 = INT32_MAX;

    t164 = (((x949*x950)^x951)==x952);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x953 = 227;
	int16_t x954 = 72;
	volatile int8_t x955 = INT8_MIN;
	uint64_t x956 = UINT64_MAX;

    t165 = (((x953*x954)^x955)==x956);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x961 = 14U;
	int16_t x962 = 56;
	uint32_t x964 = 1055062811U;
	volatile int32_t t166 = 0;

    t166 = (((x961*x962)^x963)==x964);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x970 = 120U;
	int64_t x972 = -1LL;

    t167 = (((x969*x970)^x971)==x972);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x973 = 1LLU;
	uint64_t x974 = 402098LLU;
	uint16_t x975 = 176U;
	volatile int32_t t168 = -486;

    t168 = (((x973*x974)^x975)==x976);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x977 = INT8_MIN;
	volatile int8_t x979 = INT8_MAX;
	int32_t x980 = INT32_MIN;
	volatile int32_t t169 = -5;

    t169 = (((x977*x978)^x979)==x980);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x989 = 1;
	static int64_t x990 = 330478LL;
	static int16_t x991 = INT16_MAX;
	int64_t x992 = -614504952LL;
	int32_t t170 = -64580;

    t170 = (((x989*x990)^x991)==x992);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x998 = INT16_MIN;
	static int64_t x999 = -1LL;
	int64_t x1000 = INT64_MAX;
	int32_t t171 = -5172669;

    t171 = (((x997*x998)^x999)==x1000);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1007 = 111629531321221547LL;
	int16_t x1008 = INT16_MAX;
	int32_t t172 = 424689;

    t172 = (((x1005*x1006)^x1007)==x1008);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1009 = -1;
	int8_t x1010 = INT8_MAX;
	int32_t x1011 = 1512141;
	static int8_t x1012 = INT8_MIN;
	int32_t t173 = -1;

    t173 = (((x1009*x1010)^x1011)==x1012);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x1017 = UINT16_MAX;
	uint8_t x1019 = 0U;
	static int8_t x1020 = INT8_MAX;
	int32_t t174 = -16533;

    t174 = (((x1017*x1018)^x1019)==x1020);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x1021 = INT16_MIN;
	uint64_t x1023 = 1907625728310LLU;
	int16_t x1024 = INT16_MIN;

    t175 = (((x1021*x1022)^x1023)==x1024);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1025 = INT8_MAX;
	int8_t x1026 = INT8_MAX;
	static uint16_t x1027 = 1563U;
	int64_t x1028 = INT64_MIN;
	int32_t t176 = -1;

    t176 = (((x1025*x1026)^x1027)==x1028);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1030 = -1;
	volatile int8_t x1031 = INT8_MAX;
	uint8_t x1032 = UINT8_MAX;

    t177 = (((x1029*x1030)^x1031)==x1032);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int8_t x1037 = INT8_MIN;
	int8_t x1038 = INT8_MIN;
	uint64_t x1040 = UINT64_MAX;

    t178 = (((x1037*x1038)^x1039)==x1040);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1045 = INT32_MIN;
	uint16_t x1046 = 1U;
	uint16_t x1047 = 54U;
	static int64_t x1048 = INT64_MAX;
	static int32_t t179 = -457701540;

    t179 = (((x1045*x1046)^x1047)==x1048);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1049 = -3;
	static volatile int16_t x1050 = 4003;
	volatile int32_t x1051 = INT32_MIN;
	int8_t x1052 = -1;
	volatile int32_t t180 = 454025;

    t180 = (((x1049*x1050)^x1051)==x1052);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1053 = UINT16_MAX;
	static uint64_t x1054 = 192068163952LLU;
	int32_t x1055 = 1;
	int32_t t181 = -24914799;

    t181 = (((x1053*x1054)^x1055)==x1056);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1057 = INT8_MIN;
	static uint32_t x1058 = 176864U;
	static volatile int64_t x1059 = INT64_MIN;
	static uint64_t x1060 = 2594657676LLU;
	volatile int32_t t182 = 29764;

    t182 = (((x1057*x1058)^x1059)==x1060);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1065 = 29U;
	static int16_t x1066 = INT16_MIN;
	int64_t x1067 = -68585LL;
	static int32_t x1068 = -1;
	volatile int32_t t183 = 412577519;

    t183 = (((x1065*x1066)^x1067)==x1068);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1070 = 164942847LLU;
	volatile int64_t x1071 = INT64_MAX;
	int64_t x1072 = -1LL;
	static int32_t t184 = 199684817;

    t184 = (((x1069*x1070)^x1071)==x1072);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1077 = -1;
	volatile uint32_t x1080 = UINT32_MAX;
	volatile int32_t t185 = 3539;

    t185 = (((x1077*x1078)^x1079)==x1080);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1085 = -1LL;
	uint16_t x1088 = UINT16_MAX;
	int32_t t186 = -44876752;

    t186 = (((x1085*x1086)^x1087)==x1088);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x1090 = INT8_MAX;
	static uint32_t x1091 = 226516U;
	int32_t t187 = 1595374;

    t187 = (((x1089*x1090)^x1091)==x1092);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x1094 = INT32_MIN;
	uint32_t x1095 = 983U;
	static int64_t x1096 = INT64_MAX;
	volatile int32_t t188 = -7550;

    t188 = (((x1093*x1094)^x1095)==x1096);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1097 = UINT64_MAX;
	int8_t x1098 = INT8_MIN;
	volatile int16_t x1099 = 112;
	int16_t x1100 = INT16_MIN;

    t189 = (((x1097*x1098)^x1099)==x1100);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1101 = UINT32_MAX;
	int16_t x1102 = INT16_MAX;
	uint16_t x1103 = 12003U;
	int8_t x1104 = INT8_MAX;
	volatile int32_t t190 = -14842;

    t190 = (((x1101*x1102)^x1103)==x1104);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x1106 = 20973727LL;
	uint64_t x1107 = UINT64_MAX;
	int8_t x1108 = INT8_MIN;

    t191 = (((x1105*x1106)^x1107)==x1108);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1109 = -14;
	volatile int32_t x1111 = -2294;
	volatile int32_t t192 = 289678;

    t192 = (((x1109*x1110)^x1111)==x1112);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1117 = 151;
	uint32_t x1118 = 30U;
	int64_t x1119 = INT64_MIN;
	volatile int32_t t193 = 6289043;

    t193 = (((x1117*x1118)^x1119)==x1120);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1125 = UINT64_MAX;
	uint64_t x1126 = UINT64_MAX;
	uint8_t x1127 = 0U;
	int16_t x1128 = INT16_MAX;
	int32_t t194 = 3135;

    t194 = (((x1125*x1126)^x1127)==x1128);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1129 = 96018487659LLU;
	int8_t x1130 = -26;
	static volatile int32_t x1131 = -2533;
	int32_t x1132 = INT32_MIN;

    t195 = (((x1129*x1130)^x1131)==x1132);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1133 = INT16_MIN;
	int32_t x1134 = -1;
	int32_t x1135 = INT32_MIN;
	int32_t t196 = 38862029;

    t196 = (((x1133*x1134)^x1135)==x1136);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1141 = 62;
	volatile int64_t x1142 = 1143LL;
	int16_t x1143 = 8600;
	int64_t x1144 = INT64_MAX;
	int32_t t197 = 126073;

    t197 = (((x1141*x1142)^x1143)==x1144);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1149 = 0;
	int16_t x1151 = -1;
	static uint64_t x1152 = 17004767031LLU;

    t198 = (((x1149*x1150)^x1151)==x1152);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x1153 = 262LLU;
	int64_t x1154 = INT64_MIN;
	uint16_t x1155 = 745U;
	int8_t x1156 = -16;

    t199 = (((x1153*x1154)^x1155)==x1156);

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

