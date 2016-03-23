
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

static int64_t x4 = INT64_MIN;
static int16_t x7 = 0;
static int64_t x20 = 793619483843403LL;
int16_t x22 = -1;
uint64_t x25 = 892479LLU;
static uint64_t t6 = 3509LLU;
volatile uint64_t x34 = 441LLU;
volatile int32_t t7 = -3566;
static uint16_t x43 = UINT16_MAX;
uint16_t x46 = 0U;
uint16_t x63 = 14488U;
int16_t x94 = INT16_MIN;
uint64_t t20 = 843786962LLU;
static int64_t x102 = INT64_MIN;
static uint8_t x108 = 123U;
volatile uint32_t x131 = 29517050U;
volatile uint16_t x135 = 60U;
int64_t x136 = -3787719593762LL;
static uint16_t x141 = UINT16_MAX;
volatile uint16_t x143 = 27947U;
int32_t t27 = -4964;
int32_t x153 = INT32_MIN;
int64_t x155 = -1LL;
volatile int64_t x157 = INT64_MIN;
int64_t x158 = 106823156LL;
uint64_t x172 = UINT64_MAX;
uint64_t t32 = 10495320LLU;
int16_t x173 = -627;
uint64_t x176 = 73244719588403214LLU;
volatile uint64_t t33 = 45538789LLU;
int8_t x177 = INT8_MIN;
static volatile int32_t t34 = 23;
static uint8_t x181 = UINT8_MAX;
int32_t t35 = -1;
int64_t x185 = INT64_MIN;
volatile int16_t x195 = -11;
int32_t x212 = 312820;
int32_t t41 = -7817467;
int8_t x216 = -1;
int8_t x222 = INT8_MAX;
uint8_t x223 = UINT8_MAX;
volatile uint64_t t44 = 15437041560638LLU;
volatile int8_t x230 = 1;
int8_t x232 = INT8_MIN;
int32_t t45 = 179;
uint64_t x246 = 4133407351LLU;
int32_t x248 = INT32_MIN;
volatile int32_t t46 = 31;
static volatile uint64_t x252 = 2302259280344412241LLU;
uint64_t t47 = 13LLU;
int8_t x257 = INT8_MAX;
int16_t x263 = INT16_MIN;
volatile int32_t t50 = -374996782;
uint16_t x278 = 1U;
volatile int64_t x279 = INT64_MIN;
int64_t x280 = 14774550195LL;
int32_t x283 = -6789;
int32_t x288 = INT32_MIN;
uint8_t x289 = UINT8_MAX;
uint32_t x290 = UINT32_MAX;
int32_t x295 = -1;
int32_t t56 = 10;
int32_t x301 = 510;
int8_t x303 = 0;
uint16_t x313 = 3598U;
int8_t x319 = INT8_MIN;
uint8_t x330 = UINT8_MAX;
int8_t x331 = 1;
int32_t t63 = 673106064;
int8_t x341 = 6;
int64_t x342 = 23047LL;
uint64_t x343 = UINT64_MAX;
uint8_t x350 = 12U;
uint64_t x352 = 8387786LLU;
int32_t x356 = -764466;
static int32_t x357 = INT32_MAX;
volatile int32_t t68 = -19259;
int64_t x364 = INT64_MAX;
volatile uint32_t x376 = 9653U;
static int8_t x386 = 1;
int8_t x388 = INT8_MAX;
static int64_t x406 = 65950900LL;
int8_t x407 = -1;
static int32_t x412 = -1;
static volatile uint16_t x435 = 236U;
volatile uint16_t x441 = UINT16_MAX;
int16_t x442 = INT16_MAX;
static uint32_t x453 = UINT32_MAX;
volatile uint64_t t83 = 1174592LLU;
uint16_t x460 = UINT16_MAX;
static int32_t t84 = 3174;
static uint64_t x469 = 9064875LLU;
int16_t x471 = -10226;
int16_t x483 = INT16_MAX;
volatile int32_t x487 = INT32_MIN;
static int32_t x494 = INT32_MAX;
uint32_t t90 = 169U;
int32_t x499 = INT32_MAX;
volatile int16_t x502 = -1;
int16_t x515 = INT16_MAX;
static int8_t x516 = 2;
volatile int32_t t94 = -960237142;
int32_t x530 = 440;
uint64_t x541 = 60287724LLU;
uint16_t x543 = 4015U;
static int16_t x550 = 0;
int8_t x551 = INT8_MAX;
int64_t t100 = -527980204466333125LL;
int32_t t102 = -1;
volatile int32_t x577 = -20394604;
uint16_t x578 = 9320U;
static int64_t x580 = INT64_MIN;
int64_t t103 = 67LL;
volatile int32_t x585 = INT32_MAX;
int8_t x588 = INT8_MIN;
int8_t x594 = -1;
int16_t x595 = INT16_MAX;
volatile uint8_t x598 = 0U;
static uint64_t x600 = 215674LLU;
int16_t x617 = 1;
static volatile int32_t t110 = -704998;
int64_t x647 = -1LL;
int16_t x658 = INT16_MAX;
int64_t x669 = INT64_MIN;
volatile uint64_t x671 = 457955550LLU;
int32_t x679 = INT32_MAX;
static uint8_t x684 = 17U;
static uint16_t x691 = 1023U;
static uint8_t x701 = 2U;
uint32_t t125 = 9U;
int8_t x723 = -1;
int32_t x738 = 1;
volatile int16_t x740 = INT16_MIN;
int8_t x741 = INT8_MAX;
int32_t t130 = -1053744276;
int8_t x748 = INT8_MIN;
int64_t x754 = -56073446124554044LL;
static int32_t x756 = -1;
volatile int32_t t132 = 69807431;
int8_t x762 = -1;
static volatile int32_t x769 = INT32_MIN;
int8_t x770 = INT8_MAX;
int64_t x772 = INT64_MIN;
int16_t x782 = INT16_MIN;
uint16_t x789 = 7787U;
static uint32_t x792 = 81039U;
static uint8_t x795 = 59U;
volatile int32_t t141 = 485596120;
uint16_t x798 = 939U;
int16_t x810 = INT16_MIN;
uint32_t x811 = 325365U;
static uint32_t x815 = UINT32_MAX;
volatile int64_t x820 = INT64_MIN;
int8_t x828 = -1;
int32_t t148 = -679;
static int16_t x833 = INT16_MIN;
int8_t x834 = 0;
int8_t x845 = INT8_MIN;
uint64_t x847 = 346081779891LLU;
static uint64_t x854 = UINT64_MAX;
uint64_t x866 = 134284886624LLU;
uint8_t x874 = 43U;
volatile int64_t x880 = -49LL;
int32_t x902 = -1;
int8_t x903 = INT8_MAX;
static uint16_t x904 = 3U;
volatile int32_t t158 = -15400665;
uint8_t x906 = 1U;
int64_t x907 = INT64_MAX;
static uint16_t x916 = UINT16_MAX;
static int32_t t160 = -4;
int32_t x917 = -1256105;
int16_t x919 = 119;
int32_t t161 = 360827;
uint16_t x930 = 144U;
int64_t t168 = 8794LL;
int32_t t170 = -844;
int16_t x976 = INT16_MIN;
int64_t t172 = -220663LL;
int64_t x981 = -28LL;
static uint32_t x984 = 6623137U;
volatile uint32_t t173 = 14U;
uint64_t x986 = 13482758LLU;
uint8_t x995 = UINT8_MAX;
volatile int32_t x996 = -259;
uint64_t x998 = 1063822635LLU;
int16_t x1002 = INT16_MIN;
int32_t x1005 = -236;
int64_t t179 = -3734LL;
int16_t x1014 = 845;
volatile int16_t x1015 = 49;
static int8_t x1016 = -1;
volatile uint16_t x1019 = 5205U;
int64_t x1020 = INT64_MIN;
static uint64_t x1028 = UINT64_MAX;
uint64_t t184 = 60206LLU;
uint8_t x1030 = 3U;
int16_t x1034 = -23;
uint8_t x1047 = 0U;
static uint8_t x1051 = 1U;
volatile int32_t t189 = -2603800;
volatile int8_t x1053 = INT8_MAX;
uint16_t x1056 = 5U;
int32_t x1062 = INT32_MIN;
uint16_t x1063 = 1U;
int16_t x1064 = INT16_MAX;
uint64_t x1075 = 936947025736LLU;
int8_t x1078 = 7;
volatile int16_t x1079 = INT16_MAX;
int32_t x1096 = -1;
volatile int8_t x1103 = INT8_MIN;
volatile uint32_t t199 = 171386501U;


void f0(void) {
    	static volatile int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;
	int8_t x3 = 0;
	int64_t t0 = -5314LL;

    t0 = ((x1==(x2*x3))*x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -3;

    t1 = ((x5==(x6*x7))*x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = UINT16_MAX;
	int32_t x10 = -1;
	uint16_t x11 = 0U;
	int64_t x12 = -3628957286548LL;
	int64_t t2 = -1LL;

    t2 = ((x9==(x10*x11))*x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 7LLU;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -3;
	static int32_t t3 = 14;

    t3 = ((x13==(x14*x15))*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 197994;
	int32_t x18 = 3326835;
	uint16_t x19 = 382U;
	volatile int64_t t4 = 85318631453786591LL;

    t4 = ((x17==(x18*x19))*x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 12818043LLU;
	uint8_t x23 = 25U;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 16837;

    t5 = ((x21==(x22*x23))*x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x26 = 2277073U;
	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = 45604LLU;

    t6 = ((x25==(x26*x27))*x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 39941826937258697LLU;
	volatile int32_t x35 = 16362394;
	uint8_t x36 = UINT8_MAX;

    t7 = ((x33==(x34*x35))*x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = UINT32_MAX;
	uint32_t x40 = 324903811U;
	volatile uint32_t t8 = 185U;

    t8 = ((x37==(x38*x39))*x40);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = INT8_MIN;
	uint32_t x42 = UINT32_MAX;
	uint8_t x44 = 109U;
	volatile int32_t t9 = -72010293;

    t9 = ((x41==(x42*x43))*x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = INT8_MAX;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = -24625562LL;
	int64_t t10 = 52282190673LL;

    t10 = ((x45==(x46*x47))*x48);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x49 = INT16_MIN;
	int64_t x50 = 1845522LL;
	uint32_t x51 = 652U;
	volatile int8_t x52 = INT8_MIN;
	static volatile int32_t t11 = -1785464;

    t11 = ((x49==(x50*x51))*x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 50U;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 23506;

    t12 = ((x57==(x58*x59))*x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = -17;
	uint32_t x62 = 7599825U;
	uint16_t x64 = 2479U;
	volatile int32_t t13 = 67834817;

    t13 = ((x61==(x62*x63))*x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x65 = -95398;
	int8_t x66 = INT8_MIN;
	volatile uint64_t x67 = 8961575408298089LLU;
	static uint32_t x68 = 153867U;
	volatile uint32_t t14 = 1088071968U;

    t14 = ((x65==(x66*x67))*x68);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x69 = 43444829LLU;
	volatile int8_t x70 = -1;
	int32_t x71 = -1215;
	uint16_t x72 = 332U;
	volatile int32_t t15 = -59;

    t15 = ((x69==(x70*x71))*x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int16_t x74 = -1;
	int16_t x75 = 7;
	uint64_t x76 = 8061243332LLU;
	uint64_t t16 = 336401721275518809LLU;

    t16 = ((x73==(x74*x75))*x76);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MIN;
	int32_t x82 = -99529;
	uint8_t x83 = UINT8_MAX;
	volatile int16_t x84 = 0;
	static int32_t t17 = 115467;

    t17 = ((x81==(x82*x83))*x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = 53890722764329LL;
	uint16_t x90 = UINT16_MAX;
	static uint8_t x91 = 8U;
	int8_t x92 = 37;
	volatile int32_t t18 = -33228;

    t18 = ((x89==(x90*x91))*x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 107U;
	int8_t x95 = 18;
	int32_t x96 = -2898802;
	static volatile int32_t t19 = -886346;

    t19 = ((x93==(x94*x95))*x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = -10449347918962959LL;
	int16_t x98 = 13701;
	int64_t x99 = -1LL;
	uint64_t x100 = 4LLU;

    t20 = ((x97==(x98*x99))*x100);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -1;
	uint64_t x103 = UINT64_MAX;
	static uint8_t x104 = 0U;
	int32_t t21 = -30114;

    t21 = ((x101==(x102*x103))*x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = UINT16_MAX;
	static uint32_t x106 = 10186922U;
	uint16_t x107 = UINT16_MAX;
	volatile int32_t t22 = 642693355;

    t22 = ((x105==(x106*x107))*x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x121 = 13648;
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = -1LL;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t23 = -469304148;

    t23 = ((x121==(x122*x123))*x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = 1;
	uint64_t x126 = 202540LLU;
	uint32_t x127 = 273860U;
	int8_t x128 = -1;
	int32_t t24 = 28;

    t24 = ((x125==(x126*x127))*x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x129 = 6763766;
	static int64_t x130 = -1LL;
	int8_t x132 = INT8_MIN;
	int32_t t25 = -60550;

    t25 = ((x129==(x130*x131))*x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x133 = INT8_MIN;
	int8_t x134 = 2;
	volatile int64_t t26 = 10506835800431449LL;

    t26 = ((x133==(x134*x135))*x136);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x142 = -10LL;
	static int32_t x144 = -8;

    t27 = ((x141==(x142*x143))*x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x147 = -3727;
	static uint32_t x148 = 0U;
	volatile uint32_t t28 = 3940645U;

    t28 = ((x145==(x146*x147))*x148);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x154 = INT16_MIN;
	int32_t x156 = 8;
	int32_t t29 = 1541;

    t29 = ((x153==(x154*x155))*x156);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x159 = -1;
	uint64_t x160 = 143226065LLU;
	volatile uint64_t t30 = 6179430LLU;

    t30 = ((x157==(x158*x159))*x160);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x165 = -7;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -1;
	int32_t x168 = INT32_MIN;
	int32_t t31 = -372;

    t31 = ((x165==(x166*x167))*x168);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x169 = 0;
	uint64_t x170 = 21929075297269776LLU;
	uint64_t x171 = UINT64_MAX;

    t32 = ((x169==(x170*x171))*x172);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x174 = UINT8_MAX;
	volatile int8_t x175 = -1;

    t33 = ((x173==(x174*x175))*x176);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x178 = INT16_MIN;
	uint8_t x179 = 0U;
	static int8_t x180 = INT8_MIN;

    t34 = ((x177==(x178*x179))*x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x182 = UINT64_MAX;
	static uint8_t x183 = 31U;
	static int16_t x184 = INT16_MIN;

    t35 = ((x181==(x182*x183))*x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x186 = 0U;
	int16_t x187 = 1685;
	int64_t x188 = INT64_MIN;
	volatile int64_t t36 = 757465396476908655LL;

    t36 = ((x185==(x186*x187))*x188);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = -1;
	int32_t x190 = -1;
	uint8_t x191 = 2U;
	static int32_t x192 = 1;
	int32_t t37 = -105529038;

    t37 = ((x189==(x190*x191))*x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x193 = INT64_MAX;
	int32_t x194 = -1;
	volatile uint32_t x196 = UINT32_MAX;
	uint32_t t38 = 0U;

    t38 = ((x193==(x194*x195))*x196);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x197 = 1U;
	volatile int8_t x198 = -1;
	int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t39 = -10;

    t39 = ((x197==(x198*x199))*x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x205 = 31U;
	int8_t x206 = -1;
	static int16_t x207 = INT16_MAX;
	uint8_t x208 = 51U;
	static volatile int32_t t40 = 7683;

    t40 = ((x205==(x206*x207))*x208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = INT32_MAX;
	uint32_t x210 = 4481U;
	volatile uint8_t x211 = 2U;

    t41 = ((x209==(x210*x211))*x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x213 = UINT8_MAX;
	static int8_t x214 = 0;
	int32_t x215 = INT32_MAX;
	volatile int32_t t42 = -78646031;

    t42 = ((x213==(x214*x215))*x216);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x221 = INT8_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t43 = 19202809;

    t43 = ((x221==(x222*x223))*x224);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x225 = -1LL;
	int16_t x226 = INT16_MIN;
	static int8_t x227 = INT8_MIN;
	static uint64_t x228 = 29791939548LLU;

    t44 = ((x225==(x226*x227))*x228);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x229 = INT64_MAX;
	int64_t x231 = -31LL;

    t45 = ((x229==(x230*x231))*x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x245 = INT16_MAX;
	int32_t x247 = 17;

    t46 = ((x245==(x246*x247))*x248);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x249 = 132365853659357LLU;
	int64_t x250 = -10507966728349LL;
	volatile int32_t x251 = -30379;

    t47 = ((x249==(x250*x251))*x252);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x253 = INT16_MIN;
	int16_t x254 = -1;
	static int16_t x255 = INT16_MIN;
	int64_t x256 = 19720051437387LL;
	int64_t t48 = 48456777875537LL;

    t48 = ((x253==(x254*x255))*x256);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x258 = 10;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = UINT64_MAX;
	uint64_t t49 = 388232807144490LLU;

    t49 = ((x257==(x258*x259))*x260);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x261 = UINT32_MAX;
	int16_t x262 = -3;
	int16_t x264 = INT16_MAX;

    t50 = ((x261==(x262*x263))*x264);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x273 = -1;
	volatile int64_t x274 = 48389269214LL;
	static volatile int16_t x275 = INT16_MIN;
	volatile uint16_t x276 = UINT16_MAX;
	static volatile int32_t t51 = -11139;

    t51 = ((x273==(x274*x275))*x276);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x277 = 3U;
	static volatile int64_t t52 = -26331753218511846LL;

    t52 = ((x277==(x278*x279))*x280);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x281 = INT16_MIN;
	int64_t x282 = -1LL;
	int32_t x284 = 227913395;
	volatile int32_t t53 = 197677740;

    t53 = ((x281==(x282*x283))*x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x285 = INT32_MAX;
	int64_t x286 = -395620066LL;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t54 = -723616440;

    t54 = ((x285==(x286*x287))*x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x291 = INT16_MIN;
	int8_t x292 = -1;
	static int32_t t55 = -331;

    t55 = ((x289==(x290*x291))*x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x293 = 21168261334512174LL;
	volatile int16_t x294 = -1;
	static int32_t x296 = -140;

    t56 = ((x293==(x294*x295))*x296);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x302 = 383;
	int16_t x304 = -1;
	volatile int32_t t57 = 126;

    t57 = ((x301==(x302*x303))*x304);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x314 = 8;
	volatile uint8_t x315 = 14U;
	int64_t x316 = INT64_MIN;
	int64_t t58 = -161267911371453709LL;

    t58 = ((x313==(x314*x315))*x316);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x317 = -1;
	static uint64_t x318 = 226548772LLU;
	int16_t x320 = -42;
	int32_t t59 = 14;

    t59 = ((x317==(x318*x319))*x320);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x325 = INT16_MAX;
	volatile int16_t x326 = -1;
	uint64_t x327 = 870983810118215LLU;
	int16_t x328 = INT16_MIN;
	volatile int32_t t60 = 1470091;

    t60 = ((x325==(x326*x327))*x328);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x329 = -1;
	int32_t x332 = INT32_MIN;
	volatile int32_t t61 = 0;

    t61 = ((x329==(x330*x331))*x332);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x333 = -1;
	int64_t x334 = -49102298103286LL;
	static int32_t x335 = -1;
	int32_t x336 = INT32_MIN;
	int32_t t62 = 17170802;

    t62 = ((x333==(x334*x335))*x336);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x337 = -1;
	int64_t x338 = -1LL;
	volatile int64_t x339 = 57027LL;
	static int32_t x340 = INT32_MIN;

    t63 = ((x337==(x338*x339))*x340);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x344 = INT16_MIN;
	int32_t t64 = -18838253;

    t64 = ((x341==(x342*x343))*x344);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x345 = 1602566073LL;
	int32_t x346 = -1;
	int64_t x347 = -121LL;
	static int32_t x348 = -8;
	volatile int32_t t65 = 18819287;

    t65 = ((x345==(x346*x347))*x348);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x349 = INT16_MAX;
	volatile uint64_t x351 = 7858233LLU;
	uint64_t t66 = 4768041850763LLU;

    t66 = ((x349==(x350*x351))*x352);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x353 = UINT8_MAX;
	static int16_t x354 = -9;
	int16_t x355 = -11;
	int32_t t67 = -6619585;

    t67 = ((x353==(x354*x355))*x356);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x358 = INT16_MIN;
	uint8_t x359 = 30U;
	int16_t x360 = INT16_MIN;

    t68 = ((x357==(x358*x359))*x360);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x361 = 215U;
	uint8_t x362 = UINT8_MAX;
	int8_t x363 = INT8_MAX;
	int64_t t69 = -18030916118LL;

    t69 = ((x361==(x362*x363))*x364);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x369 = 1765407731LLU;
	int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	int64_t t70 = 31307349LL;

    t70 = ((x369==(x370*x371))*x372);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x373 = INT64_MAX;
	volatile uint16_t x374 = 7459U;
	int64_t x375 = 1059330LL;
	volatile uint32_t t71 = 198910U;

    t71 = ((x373==(x374*x375))*x376);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x385 = INT32_MIN;
	uint8_t x387 = 91U;
	volatile int32_t t72 = -781151501;

    t72 = ((x385==(x386*x387))*x388);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x389 = 0U;
	volatile uint8_t x390 = UINT8_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 4103981545295072LLU;
	static uint64_t t73 = 33010842256765488LLU;

    t73 = ((x389==(x390*x391))*x392);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MAX;
	static volatile int32_t x400 = 24295;
	volatile int32_t t74 = -11;

    t74 = ((x397==(x398*x399))*x400);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x405 = -3;
	int16_t x408 = INT16_MAX;
	static int32_t t75 = -10420;

    t75 = ((x405==(x406*x407))*x408);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x409 = -1LL;
	uint32_t x410 = 1638009468U;
	uint8_t x411 = 16U;
	volatile int32_t t76 = 28305;

    t76 = ((x409==(x410*x411))*x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x417 = 0U;
	static volatile int64_t x418 = -1LL;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = -21;
	int32_t t77 = 1079063;

    t77 = ((x417==(x418*x419))*x420);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x425 = -1;
	static volatile int16_t x426 = INT16_MIN;
	int8_t x427 = 1;
	static int32_t x428 = INT32_MIN;
	int32_t t78 = 21746;

    t78 = ((x425==(x426*x427))*x428);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x429 = -1;
	volatile uint16_t x430 = 19U;
	int16_t x431 = -1;
	uint16_t x432 = 1264U;
	volatile int32_t t79 = -1;

    t79 = ((x429==(x430*x431))*x432);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x433 = 1865682323LLU;
	int16_t x434 = -1;
	int32_t x436 = -4161938;
	int32_t t80 = -7059;

    t80 = ((x433==(x434*x435))*x436);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x443 = 537804300082LLU;
	int32_t x444 = 19;
	int32_t t81 = -12829741;

    t81 = ((x441==(x442*x443))*x444);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x445 = 195U;
	int8_t x446 = INT8_MIN;
	uint32_t x447 = UINT32_MAX;
	static int64_t x448 = -1LL;
	int64_t t82 = -865773456795LL;

    t82 = ((x445==(x446*x447))*x448);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x454 = UINT16_MAX;
	uint64_t x455 = UINT64_MAX;
	static volatile uint64_t x456 = 59005736389LLU;

    t83 = ((x453==(x454*x455))*x456);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x457 = INT16_MIN;
	volatile int64_t x458 = -3LL;
	int32_t x459 = -3;

    t84 = ((x457==(x458*x459))*x460);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x465 = INT32_MAX;
	static int32_t x466 = 43421;
	int8_t x467 = INT8_MAX;
	uint64_t x468 = 920228459457763LLU;
	volatile uint64_t t85 = 1LLU;

    t85 = ((x465==(x466*x467))*x468);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x470 = -1LL;
	int32_t x472 = INT32_MAX;
	static int32_t t86 = 3380;

    t86 = ((x469==(x470*x471))*x472);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x473 = -142;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MIN;
	volatile int32_t x476 = INT32_MIN;
	volatile int32_t t87 = -409788;

    t87 = ((x473==(x474*x475))*x476);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x481 = INT32_MAX;
	int16_t x482 = INT16_MAX;
	int16_t x484 = INT16_MAX;
	volatile int32_t t88 = 84885;

    t88 = ((x481==(x482*x483))*x484);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x485 = 764381LLU;
	uint64_t x486 = 282338650LLU;
	volatile int8_t x488 = -3;
	volatile int32_t t89 = 13;

    t89 = ((x485==(x486*x487))*x488);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x493 = -29;
	uint32_t x495 = 59U;
	static uint32_t x496 = 6U;

    t90 = ((x493==(x494*x495))*x496);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x497 = -1;
	static uint32_t x498 = UINT32_MAX;
	uint32_t x500 = 6674133U;
	uint32_t t91 = 149653U;

    t91 = ((x497==(x498*x499))*x500);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x503 = UINT64_MAX;
	static int64_t x504 = INT64_MAX;
	volatile int64_t t92 = 1565941735506162102LL;

    t92 = ((x501==(x502*x503))*x504);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x509 = 10347962880066LL;
	int16_t x510 = 1457;
	uint16_t x511 = UINT16_MAX;
	int16_t x512 = -1;
	int32_t t93 = -17282;

    t93 = ((x509==(x510*x511))*x512);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x513 = INT64_MIN;
	volatile uint16_t x514 = 0U;

    t94 = ((x513==(x514*x515))*x516);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x517 = 4579621694238097542LLU;
	volatile int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	static int64_t x520 = INT64_MIN;
	int64_t t95 = 6382499737838350LL;

    t95 = ((x517==(x518*x519))*x520);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x525 = UINT64_MAX;
	int16_t x526 = INT16_MAX;
	static volatile int8_t x527 = INT8_MAX;
	uint32_t x528 = UINT32_MAX;
	uint32_t t96 = 17216U;

    t96 = ((x525==(x526*x527))*x528);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x529 = INT64_MAX;
	static int64_t x531 = 21763633LL;
	volatile uint16_t x532 = 15570U;
	static volatile int32_t t97 = -414426891;

    t97 = ((x529==(x530*x531))*x532);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x542 = INT16_MAX;
	uint8_t x544 = UINT8_MAX;
	volatile int32_t t98 = 1;

    t98 = ((x541==(x542*x543))*x544);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x545 = INT32_MAX;
	volatile int8_t x546 = -4;
	uint32_t x547 = UINT32_MAX;
	int16_t x548 = INT16_MIN;
	int32_t t99 = 0;

    t99 = ((x545==(x546*x547))*x548);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x549 = -451;
	volatile int64_t x552 = -51590201493656LL;

    t100 = ((x549==(x550*x551))*x552);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	static int64_t x559 = 51229LL;
	uint16_t x560 = 1434U;
	int32_t t101 = 5131;

    t101 = ((x557==(x558*x559))*x560);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x569 = 35U;
	static uint16_t x570 = 141U;
	int8_t x571 = INT8_MIN;
	static int8_t x572 = -17;

    t102 = ((x569==(x570*x571))*x572);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x579 = -87;

    t103 = ((x577==(x578*x579))*x580);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x586 = UINT16_MAX;
	uint8_t x587 = 86U;
	int32_t t104 = 620596133;

    t104 = ((x585==(x586*x587))*x588);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x593 = -1;
	int32_t x596 = INT32_MIN;
	volatile int32_t t105 = 964;

    t105 = ((x593==(x594*x595))*x596);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x597 = 5U;
	static volatile uint8_t x599 = UINT8_MAX;
	volatile uint64_t t106 = 72296528403LLU;

    t106 = ((x597==(x598*x599))*x600);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x609 = -889435218518271LL;
	int16_t x610 = INT16_MAX;
	static int16_t x611 = 48;
	int64_t x612 = 1516934LL;
	volatile int64_t t107 = 6441833278840LL;

    t107 = ((x609==(x610*x611))*x612);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x613 = -118;
	int16_t x614 = -1;
	static uint64_t x615 = UINT64_MAX;
	volatile uint64_t x616 = 320409LLU;
	volatile uint64_t t108 = 422312653067759933LLU;

    t108 = ((x613==(x614*x615))*x616);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x618 = 237LL;
	volatile uint8_t x619 = 2U;
	static int8_t x620 = 0;
	volatile int32_t t109 = -37449;

    t109 = ((x617==(x618*x619))*x620);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x625 = 12150U;
	uint32_t x626 = 56088U;
	volatile int64_t x627 = 0LL;
	static int16_t x628 = INT16_MIN;

    t110 = ((x625==(x626*x627))*x628);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x633 = INT8_MIN;
	uint32_t x634 = 5439277U;
	int8_t x635 = -2;
	int16_t x636 = -12;
	volatile int32_t t111 = -202889932;

    t111 = ((x633==(x634*x635))*x636);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x641 = UINT16_MAX;
	uint32_t x642 = UINT32_MAX;
	uint64_t x643 = UINT64_MAX;
	int64_t x644 = 440611106LL;
	static int64_t t112 = 18418104762LL;

    t112 = ((x641==(x642*x643))*x644);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x645 = INT8_MAX;
	uint32_t x646 = 201U;
	volatile int8_t x648 = 1;
	volatile int32_t t113 = 6;

    t113 = ((x645==(x646*x647))*x648);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x653 = 7506869988956LL;
	int32_t x654 = -1094;
	int8_t x655 = -1;
	volatile int8_t x656 = INT8_MIN;
	static volatile int32_t t114 = -3095;

    t114 = ((x653==(x654*x655))*x656);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x657 = -3064769LL;
	uint8_t x659 = 1U;
	static int8_t x660 = INT8_MIN;
	volatile int32_t t115 = 15;

    t115 = ((x657==(x658*x659))*x660);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x670 = INT16_MAX;
	volatile int8_t x672 = 1;
	int32_t t116 = 1;

    t116 = ((x669==(x670*x671))*x672);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x673 = 0;
	int16_t x674 = 16;
	int16_t x675 = INT16_MIN;
	uint64_t x676 = 15LLU;
	volatile uint64_t t117 = 4LLU;

    t117 = ((x673==(x674*x675))*x676);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x677 = INT8_MIN;
	uint32_t x678 = UINT32_MAX;
	int64_t x680 = INT64_MIN;
	volatile int64_t t118 = 428466961505167739LL;

    t118 = ((x677==(x678*x679))*x680);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x681 = INT8_MAX;
	int16_t x682 = -51;
	int8_t x683 = -1;
	volatile int32_t t119 = -26698;

    t119 = ((x681==(x682*x683))*x684);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x689 = 13U;
	int32_t x690 = -1;
	int64_t x692 = INT64_MIN;
	volatile int64_t t120 = -3244398390777LL;

    t120 = ((x689==(x690*x691))*x692);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x697 = -20;
	static int32_t x698 = -1;
	uint64_t x699 = 933LLU;
	static volatile int64_t x700 = 675378LL;
	int64_t t121 = 62237308536290LL;

    t121 = ((x697==(x698*x699))*x700);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x702 = 1487347403134071992LL;
	uint8_t x703 = 1U;
	int8_t x704 = -1;
	int32_t t122 = 95;

    t122 = ((x701==(x702*x703))*x704);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x709 = 19111U;
	int64_t x710 = -1LL;
	int16_t x711 = 42;
	uint16_t x712 = 92U;
	static volatile int32_t t123 = 86021175;

    t123 = ((x709==(x710*x711))*x712);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x713 = -1;
	static int64_t x714 = INT64_MAX;
	static int32_t x715 = -1;
	int64_t x716 = INT64_MAX;
	static volatile int64_t t124 = -52052LL;

    t124 = ((x713==(x714*x715))*x716);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x717 = INT16_MAX;
	int64_t x718 = -1LL;
	int64_t x719 = 3569LL;
	uint32_t x720 = UINT32_MAX;

    t125 = ((x717==(x718*x719))*x720);

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x721 = INT64_MAX;
	static int8_t x722 = INT8_MIN;
	uint16_t x724 = 4U;
	int32_t t126 = 625691855;

    t126 = ((x721==(x722*x723))*x724);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x729 = INT16_MAX;
	uint32_t x730 = 643U;
	int16_t x731 = -4497;
	static uint8_t x732 = 36U;
	volatile int32_t t127 = -667;

    t127 = ((x729==(x730*x731))*x732);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x733 = INT8_MIN;
	static int16_t x734 = -4;
	uint8_t x735 = 111U;
	int16_t x736 = 0;
	static volatile int32_t t128 = 2840;

    t128 = ((x733==(x734*x735))*x736);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x737 = 96;
	int64_t x739 = 13225003665612964LL;
	volatile int32_t t129 = 12;

    t129 = ((x737==(x738*x739))*x740);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x742 = 2702U;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MIN;

    t130 = ((x741==(x742*x743))*x744);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x745 = 785660599U;
	int16_t x746 = INT16_MIN;
	int64_t x747 = -518642278165LL;
	int32_t t131 = 155465246;

    t131 = ((x745==(x746*x747))*x748);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x753 = 117330570342346054LLU;
	static uint32_t x755 = 60U;

    t132 = ((x753==(x754*x755))*x756);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x757 = -3459710;
	int32_t x758 = 0;
	int32_t x759 = INT32_MAX;
	int16_t x760 = INT16_MIN;
	volatile int32_t t133 = 9495;

    t133 = ((x757==(x758*x759))*x760);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x761 = 2U;
	int8_t x763 = 6;
	static volatile int64_t x764 = INT64_MIN;
	volatile int64_t t134 = -28172LL;

    t134 = ((x761==(x762*x763))*x764);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x765 = 317447444U;
	int16_t x766 = -1;
	static volatile uint8_t x767 = 1U;
	volatile int32_t x768 = INT32_MIN;
	int32_t t135 = 2207;

    t135 = ((x765==(x766*x767))*x768);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x771 = INT16_MIN;
	volatile int64_t t136 = 118019594847031LL;

    t136 = ((x769==(x770*x771))*x772);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x777 = 142LLU;
	int16_t x778 = -1;
	volatile int8_t x779 = -1;
	int16_t x780 = 3283;
	volatile int32_t t137 = 198;

    t137 = ((x777==(x778*x779))*x780);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x781 = -1;
	int64_t x783 = -1LL;
	static uint8_t x784 = 1U;
	int32_t t138 = 13376395;

    t138 = ((x781==(x782*x783))*x784);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x785 = INT16_MIN;
	static int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MIN;
	uint32_t x788 = 235676U;
	uint32_t t139 = 1482U;

    t139 = ((x785==(x786*x787))*x788);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x790 = 852503255435645586LLU;
	uint16_t x791 = 23681U;
	uint32_t t140 = 239787U;

    t140 = ((x789==(x790*x791))*x792);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x793 = -3848LL;
	int8_t x794 = INT8_MIN;
	int16_t x796 = INT16_MIN;

    t141 = ((x793==(x794*x795))*x796);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x797 = -1;
	int16_t x799 = INT16_MAX;
	uint64_t x800 = 1271712898LLU;
	uint64_t t142 = 346224196101LLU;

    t142 = ((x797==(x798*x799))*x800);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x809 = -1;
	int64_t x812 = INT64_MIN;
	static volatile int64_t t143 = 126319561LL;

    t143 = ((x809==(x810*x811))*x812);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x813 = 30333507314000LL;
	int16_t x814 = INT16_MIN;
	int16_t x816 = INT16_MIN;
	volatile int32_t t144 = 177;

    t144 = ((x813==(x814*x815))*x816);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x817 = 23284U;
	int32_t x818 = -1;
	uint32_t x819 = 36077958U;
	volatile int64_t t145 = 133695722557LL;

    t145 = ((x817==(x818*x819))*x820);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x821 = UINT8_MAX;
	int64_t x822 = -1LL;
	uint16_t x823 = 13U;
	uint16_t x824 = UINT16_MAX;
	int32_t t146 = 35728;

    t146 = ((x821==(x822*x823))*x824);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x825 = UINT8_MAX;
	uint64_t x826 = 38LLU;
	int64_t x827 = INT64_MAX;
	volatile int32_t t147 = -16;

    t147 = ((x825==(x826*x827))*x828);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x829 = INT16_MIN;
	uint32_t x830 = 13604U;
	uint64_t x831 = UINT64_MAX;
	int32_t x832 = -689;

    t148 = ((x829==(x830*x831))*x832);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x835 = INT64_MIN;
	int8_t x836 = INT8_MIN;
	static volatile int32_t t149 = -767;

    t149 = ((x833==(x834*x835))*x836);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x846 = INT8_MIN;
	volatile uint32_t x848 = 84675U;
	static uint32_t t150 = 2U;

    t150 = ((x845==(x846*x847))*x848);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x849 = UINT64_MAX;
	volatile int8_t x850 = -1;
	volatile int8_t x851 = INT8_MIN;
	int32_t x852 = INT32_MIN;
	int32_t t151 = -326803396;

    t151 = ((x849==(x850*x851))*x852);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x853 = INT32_MIN;
	int32_t x855 = -18;
	int64_t x856 = INT64_MIN;
	int64_t t152 = -78604320290919LL;

    t152 = ((x853==(x854*x855))*x856);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x865 = -13;
	int64_t x867 = INT64_MAX;
	int64_t x868 = INT64_MIN;
	int64_t t153 = 246749159142606011LL;

    t153 = ((x865==(x866*x867))*x868);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x869 = UINT64_MAX;
	volatile uint64_t x870 = 2840LLU;
	uint64_t x871 = 114904493382931724LLU;
	int64_t x872 = -1LL;
	volatile int64_t t154 = 476941467628100LL;

    t154 = ((x869==(x870*x871))*x872);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x873 = -1;
	int32_t x875 = 0;
	int8_t x876 = -1;
	int32_t t155 = 170;

    t155 = ((x873==(x874*x875))*x876);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x877 = 39314180U;
	volatile uint16_t x878 = UINT16_MAX;
	int16_t x879 = INT16_MIN;
	int64_t t156 = 1504011870246LL;

    t156 = ((x877==(x878*x879))*x880);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x897 = 82U;
	int16_t x898 = INT16_MAX;
	int8_t x899 = -1;
	uint64_t x900 = 4432889299241611596LLU;
	uint64_t t157 = 117085212LLU;

    t157 = ((x897==(x898*x899))*x900);

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x901 = INT16_MAX;

    t158 = ((x901==(x902*x903))*x904);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x905 = UINT16_MAX;
	volatile int64_t x908 = 48LL;
	int64_t t159 = -85226LL;

    t159 = ((x905==(x906*x907))*x908);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x913 = -1;
	uint16_t x914 = UINT16_MAX;
	int8_t x915 = INT8_MIN;

    t160 = ((x913==(x914*x915))*x916);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x918 = 4474659744171452LL;
	uint16_t x920 = 69U;

    t161 = ((x917==(x918*x919))*x920);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x925 = -39512952LL;
	int16_t x926 = 98;
	uint8_t x927 = 15U;
	int32_t x928 = INT32_MIN;
	volatile int32_t t162 = 64607;

    t162 = ((x925==(x926*x927))*x928);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x929 = -430936216224370LL;
	static int16_t x931 = INT16_MIN;
	uint16_t x932 = 1075U;
	volatile int32_t t163 = -1;

    t163 = ((x929==(x930*x931))*x932);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x937 = -1;
	volatile int16_t x938 = 131;
	static volatile int8_t x939 = 1;
	uint32_t x940 = UINT32_MAX;
	uint32_t t164 = 2088306U;

    t164 = ((x937==(x938*x939))*x940);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x945 = 2590LL;
	int32_t x946 = -1;
	int64_t x947 = INT64_MAX;
	volatile int8_t x948 = -25;
	int32_t t165 = -6;

    t165 = ((x945==(x946*x947))*x948);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x949 = INT32_MAX;
	volatile int8_t x950 = -1;
	int64_t x951 = INT64_MAX;
	int16_t x952 = INT16_MIN;
	int32_t t166 = 3970;

    t166 = ((x949==(x950*x951))*x952);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x957 = -125631LL;
	uint8_t x958 = UINT8_MAX;
	uint16_t x959 = 3U;
	static uint64_t x960 = UINT64_MAX;
	uint64_t t167 = 130276764921395839LLU;

    t167 = ((x957==(x958*x959))*x960);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x961 = -1;
	int32_t x962 = -1;
	int16_t x963 = -4935;
	int64_t x964 = -1LL;

    t168 = ((x961==(x962*x963))*x964);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x965 = -21;
	uint64_t x966 = UINT64_MAX;
	int8_t x967 = INT8_MAX;
	int8_t x968 = 1;
	static int32_t t169 = 878;

    t169 = ((x965==(x966*x967))*x968);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x969 = UINT64_MAX;
	int8_t x970 = -1;
	uint8_t x971 = UINT8_MAX;
	uint16_t x972 = UINT16_MAX;

    t170 = ((x969==(x970*x971))*x972);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x973 = 26U;
	uint32_t x974 = UINT32_MAX;
	volatile int64_t x975 = 14LL;
	static volatile int32_t t171 = -1357;

    t171 = ((x973==(x974*x975))*x976);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x977 = 290U;
	uint16_t x978 = 0U;
	uint64_t x979 = UINT64_MAX;
	int64_t x980 = INT64_MIN;

    t172 = ((x977==(x978*x979))*x980);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x982 = 6U;
	static int32_t x983 = -1;

    t173 = ((x981==(x982*x983))*x984);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x985 = UINT32_MAX;
	static int64_t x987 = INT64_MIN;
	uint16_t x988 = 5191U;
	int32_t t174 = 5;

    t174 = ((x985==(x986*x987))*x988);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x989 = -1655597;
	uint8_t x990 = 0U;
	uint32_t x991 = 2U;
	uint32_t x992 = 3028U;
	volatile uint32_t t175 = 7395854U;

    t175 = ((x989==(x990*x991))*x992);

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x993 = 66635U;
	int8_t x994 = 0;
	int32_t t176 = -1;

    t176 = ((x993==(x994*x995))*x996);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x997 = INT8_MIN;
	int8_t x999 = INT8_MAX;
	int64_t x1000 = INT64_MIN;
	int64_t t177 = -25LL;

    t177 = ((x997==(x998*x999))*x1000);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x1001 = UINT16_MAX;
	static uint8_t x1003 = 1U;
	static uint8_t x1004 = 14U;
	int32_t t178 = 7107327;

    t178 = ((x1001==(x1002*x1003))*x1004);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1006 = INT8_MIN;
	volatile uint8_t x1007 = 3U;
	volatile int64_t x1008 = INT64_MAX;

    t179 = ((x1005==(x1006*x1007))*x1008);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x1009 = 6648885349010LLU;
	uint8_t x1010 = 3U;
	int8_t x1011 = INT8_MIN;
	int64_t x1012 = 0LL;
	static int64_t t180 = 11LL;

    t180 = ((x1009==(x1010*x1011))*x1012);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1013 = 74U;
	static volatile int32_t t181 = 27245803;

    t181 = ((x1013==(x1014*x1015))*x1016);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1017 = -1;
	int64_t x1018 = -1LL;
	static int64_t t182 = -2939184851LL;

    t182 = ((x1017==(x1018*x1019))*x1020);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1021 = 19894LLU;
	uint8_t x1022 = 4U;
	uint32_t x1023 = 65530292U;
	int8_t x1024 = INT8_MIN;
	volatile int32_t t183 = -341736;

    t183 = ((x1021==(x1022*x1023))*x1024);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1025 = -1;
	int16_t x1026 = INT16_MIN;
	int64_t x1027 = 2427LL;

    t184 = ((x1025==(x1026*x1027))*x1028);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1029 = -1;
	int16_t x1031 = 3;
	static volatile uint16_t x1032 = 893U;
	static volatile int32_t t185 = 22255;

    t185 = ((x1029==(x1030*x1031))*x1032);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1033 = UINT32_MAX;
	static int64_t x1035 = -3433LL;
	volatile int16_t x1036 = -1;
	volatile int32_t t186 = 294087466;

    t186 = ((x1033==(x1034*x1035))*x1036);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1037 = 59U;
	volatile uint8_t x1038 = 36U;
	uint64_t x1039 = 124341090244745910LLU;
	int32_t x1040 = -1;
	volatile int32_t t187 = 33750;

    t187 = ((x1037==(x1038*x1039))*x1040);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1045 = -159LL;
	uint16_t x1046 = UINT16_MAX;
	uint8_t x1048 = UINT8_MAX;
	volatile int32_t t188 = 103863;

    t188 = ((x1045==(x1046*x1047))*x1048);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1049 = -28;
	static uint64_t x1050 = UINT64_MAX;
	volatile uint8_t x1052 = 15U;

    t189 = ((x1049==(x1050*x1051))*x1052);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1054 = -1;
	int32_t x1055 = -1;
	int32_t t190 = 8796;

    t190 = ((x1053==(x1054*x1055))*x1056);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1061 = INT32_MIN;
	int32_t t191 = -10910;

    t191 = ((x1061==(x1062*x1063))*x1064);

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1065 = INT8_MAX;
	volatile int32_t x1066 = 0;
	uint32_t x1067 = 3745433U;
	int8_t x1068 = 0;
	int32_t t192 = 1032508;

    t192 = ((x1065==(x1066*x1067))*x1068);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x1069 = UINT64_MAX;
	int16_t x1070 = -1;
	volatile uint64_t x1071 = 735159863LLU;
	volatile int16_t x1072 = -1;
	volatile int32_t t193 = 283;

    t193 = ((x1069==(x1070*x1071))*x1072);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1073 = INT64_MIN;
	int8_t x1074 = -1;
	volatile int8_t x1076 = -52;
	volatile int32_t t194 = 452;

    t194 = ((x1073==(x1074*x1075))*x1076);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1077 = INT64_MAX;
	static volatile int32_t x1080 = INT32_MIN;
	static int32_t t195 = 1;

    t195 = ((x1077==(x1078*x1079))*x1080);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1089 = UINT64_MAX;
	static volatile int8_t x1090 = -1;
	int8_t x1091 = -3;
	int8_t x1092 = INT8_MIN;
	volatile int32_t t196 = 23275476;

    t196 = ((x1089==(x1090*x1091))*x1092);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1093 = -2744;
	int16_t x1094 = -1;
	int16_t x1095 = 169;
	int32_t t197 = -1202;

    t197 = ((x1093==(x1094*x1095))*x1096);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1097 = 16619283;
	static volatile uint64_t x1098 = UINT64_MAX;
	int32_t x1099 = INT32_MAX;
	static int8_t x1100 = -54;
	int32_t t198 = -505875;

    t198 = ((x1097==(x1098*x1099))*x1100);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1101 = INT64_MIN;
	int8_t x1102 = 20;
	static uint32_t x1104 = UINT32_MAX;

    t199 = ((x1101==(x1102*x1103))*x1104);

    if (t199 != 0U) { NG(); } else { ; }
	
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

