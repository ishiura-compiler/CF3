
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

static int16_t x4 = INT16_MIN;
volatile int32_t t1 = 167987;
uint16_t x11 = 1634U;
static int8_t x19 = -1;
uint8_t x24 = UINT8_MAX;
volatile int32_t t5 = 1660674;
static int32_t t7 = -988;
int32_t x46 = 486351;
int64_t x58 = -336LL;
volatile int32_t t11 = -45734;
uint8_t x63 = 121U;
static volatile int64_t x76 = INT64_MIN;
static volatile uint8_t x78 = 1U;
int32_t t16 = -189;
volatile int64_t x81 = 3667416935LL;
uint32_t x82 = UINT32_MAX;
int32_t t18 = -2;
static volatile uint8_t x94 = 1U;
uint32_t x102 = 6835779U;
static int32_t t21 = 8021;
int8_t x113 = INT8_MIN;
uint16_t x115 = 26U;
int32_t t22 = 16686076;
uint32_t x135 = UINT32_MAX;
int32_t t26 = -4;
uint32_t x138 = 13373U;
volatile int32_t x142 = INT32_MAX;
static uint16_t x143 = 0U;
volatile int32_t t29 = 93739228;
static volatile uint64_t x154 = 52948LLU;
int64_t x155 = INT64_MAX;
uint32_t x163 = 748685U;
static int32_t x164 = -12585;
uint8_t x174 = 55U;
int16_t x175 = -91;
volatile int16_t x176 = INT16_MAX;
uint32_t x180 = 979925538U;
int32_t x183 = -1;
volatile int8_t x189 = -1;
uint8_t x192 = 20U;
int8_t x194 = -1;
volatile int16_t x195 = -1;
static volatile int32_t t40 = 62191;
uint16_t x199 = 2U;
int32_t x201 = -1;
uint32_t x203 = UINT32_MAX;
uint16_t x210 = 12332U;
int16_t x211 = INT16_MIN;
int64_t x213 = -1LL;
volatile uint64_t x214 = 1023581LLU;
int64_t x215 = INT64_MIN;
int32_t t45 = -2;
int32_t x225 = INT32_MAX;
uint8_t x228 = UINT8_MAX;
volatile int32_t t47 = 12;
int16_t x230 = INT16_MIN;
static uint64_t x232 = 43382LLU;
uint64_t x242 = 23517LLU;
int32_t t51 = 335647;
uint32_t x249 = 13840185U;
volatile int8_t x251 = -1;
int16_t x254 = INT16_MAX;
static uint8_t x259 = 77U;
uint8_t x269 = 8U;
int64_t x277 = INT64_MAX;
int16_t x278 = INT16_MAX;
volatile int32_t x284 = -1;
int32_t t61 = 542851;
int64_t x293 = -48177700734LL;
volatile int32_t x312 = INT32_MIN;
volatile int32_t t64 = -2594;
static uint16_t x331 = 1935U;
volatile uint16_t x332 = 16U;
int8_t x334 = -1;
uint16_t x335 = UINT16_MAX;
volatile int32_t t69 = 2;
static int64_t x349 = INT64_MAX;
volatile uint8_t x355 = 14U;
static volatile int32_t t71 = 3066;
static volatile int32_t t73 = 1338;
int32_t t75 = 120;
uint16_t x378 = UINT16_MAX;
int8_t x379 = -1;
uint64_t x387 = UINT64_MAX;
int16_t x399 = -1;
int32_t x400 = INT32_MIN;
int32_t t80 = -1;
static int16_t x414 = INT16_MIN;
int16_t x415 = -1;
int32_t x417 = -858370;
int8_t x423 = INT8_MIN;
int16_t x426 = 3727;
volatile int64_t x429 = INT64_MIN;
uint32_t x430 = UINT32_MAX;
volatile int32_t t86 = 2;
uint16_t x435 = UINT16_MAX;
uint8_t x437 = 35U;
int64_t x438 = -1LL;
uint16_t x446 = 127U;
volatile int32_t x458 = -1;
volatile int32_t t92 = -16057;
static int16_t x469 = -6351;
int32_t x474 = INT32_MAX;
uint64_t x476 = 137738766138943LLU;
uint32_t x477 = UINT32_MAX;
volatile int64_t x492 = INT64_MIN;
volatile int8_t x502 = INT8_MIN;
int16_t x505 = INT16_MIN;
int32_t t102 = 368;
uint64_t x513 = UINT64_MAX;
uint32_t x515 = 32675731U;
int16_t x519 = INT16_MAX;
volatile uint8_t x524 = UINT8_MAX;
int8_t x528 = INT8_MIN;
int16_t x535 = 0;
static volatile int32_t x536 = INT32_MIN;
static uint32_t x538 = 393839880U;
volatile uint32_t x539 = 1038U;
int64_t x549 = -1LL;
static uint32_t x552 = UINT32_MAX;
int32_t t112 = 141;
uint16_t x553 = 24U;
uint64_t x568 = 66010995LLU;
int16_t x576 = -1;
int32_t t118 = -21739597;
int64_t x583 = -1LL;
static uint64_t x590 = UINT64_MAX;
uint32_t x591 = UINT32_MAX;
int64_t x604 = -26626556282385699LL;
uint32_t x605 = UINT32_MAX;
volatile int8_t x608 = -3;
uint8_t x609 = 3U;
uint32_t x610 = 419441U;
int64_t x612 = INT64_MIN;
uint16_t x618 = 0U;
uint32_t x626 = 23066U;
int16_t x629 = 717;
volatile int32_t t129 = 53763224;
uint16_t x633 = 810U;
volatile uint64_t x640 = UINT64_MAX;
int8_t x642 = 0;
volatile uint64_t x649 = 10816684852906716LLU;
uint8_t x650 = UINT8_MAX;
static int16_t x656 = 0;
volatile int32_t t135 = -99170;
int64_t x662 = INT64_MAX;
volatile int8_t x663 = -1;
int16_t x669 = -6115;
int8_t x672 = -1;
static int8_t x673 = INT8_MIN;
static int8_t x681 = -45;
int64_t x685 = 32531133LL;
static volatile int8_t x688 = INT8_MIN;
uint8_t x713 = UINT8_MAX;
static uint64_t x714 = 33798366LLU;
static int8_t x715 = INT8_MIN;
static int32_t x717 = INT32_MAX;
int16_t x719 = -1147;
volatile int32_t t147 = 0;
static uint32_t x747 = 6498197U;
volatile int32_t t152 = 357;
uint64_t x755 = 44026853276LLU;
static volatile int32_t t153 = 5109296;
uint16_t x761 = 4U;
static int8_t x762 = INT8_MIN;
uint8_t x764 = 37U;
static int16_t x772 = INT16_MIN;
int32_t t155 = 462986906;
int16_t x777 = INT16_MIN;
int32_t t156 = -484505;
uint32_t x785 = UINT32_MAX;
static int32_t x793 = INT32_MAX;
int32_t t160 = 1859;
volatile int64_t x805 = -101397226LL;
int8_t x809 = INT8_MIN;
volatile uint32_t x818 = 2510713U;
uint8_t x819 = 1U;
int16_t x820 = INT16_MIN;
int32_t t164 = -721;
int8_t x825 = INT8_MIN;
int32_t t166 = 0;
int8_t x833 = INT8_MIN;
volatile uint8_t x836 = UINT8_MAX;
uint64_t x849 = UINT64_MAX;
int64_t x852 = INT64_MAX;
int32_t t169 = 7055168;
int32_t x864 = -1;
volatile int32_t t170 = -1860791;
volatile int8_t x865 = 8;
uint64_t x866 = UINT64_MAX;
int8_t x876 = INT8_MIN;
volatile int32_t t174 = 115;
volatile uint8_t x892 = UINT8_MAX;
uint64_t x905 = UINT64_MAX;
int16_t x907 = INT16_MIN;
int32_t t180 = -54799;
uint32_t x909 = UINT32_MAX;
int32_t t183 = 143;
static volatile int16_t x927 = -1;
int8_t x928 = INT8_MAX;
volatile uint64_t x930 = 39119291284311990LLU;
volatile int32_t t186 = -52434;
int8_t x942 = INT8_MIN;
int64_t x944 = -883LL;
static uint64_t x947 = UINT64_MAX;
static volatile int32_t x948 = INT32_MAX;
volatile uint16_t x950 = 24U;
int64_t x951 = -638703132933312LL;
int64_t x958 = -1LL;
uint64_t x962 = 183589540LLU;
int8_t x966 = INT8_MAX;
static int8_t x968 = INT8_MIN;
int32_t x975 = 6100;
uint16_t x979 = 2276U;
volatile int32_t x982 = 0;
volatile int16_t x985 = INT16_MIN;
uint32_t x986 = 4052U;
int64_t x988 = INT64_MAX;
static volatile int8_t x989 = -20;


void f0(void) {
    	int8_t x1 = 6;
	static uint64_t x2 = 1926LLU;
	int32_t x3 = -1;
	int32_t t0 = -48913;

    t0 = ((x1|(x2*x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = 23860497LLU;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	volatile uint32_t x8 = 51963U;

    t1 = ((x5|(x6*x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 9U;
	int32_t x10 = -1;
	static volatile uint8_t x12 = UINT8_MAX;
	static volatile int32_t t2 = -89;

    t2 = ((x9|(x10*x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x17 = 25LLU;
	uint16_t x18 = 0U;
	int8_t x20 = INT8_MAX;
	static int32_t t3 = -446378067;

    t3 = ((x17|(x18*x19))==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 220300059U;
	int64_t x23 = 701441LL;
	int32_t t4 = -37576210;

    t4 = ((x21|(x22*x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MIN;
	static volatile uint8_t x30 = 13U;
	uint16_t x31 = 699U;
	int32_t x32 = -125102799;

    t5 = ((x29|(x30*x31))==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = 1109;
	static uint64_t x34 = 5824LLU;
	volatile uint32_t x35 = UINT32_MAX;
	int8_t x36 = 1;
	volatile int32_t t6 = -87;

    t6 = ((x33|(x34*x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -1;
	volatile int8_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	static int8_t x40 = -1;

    t7 = ((x37|(x38*x39))==x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MAX;
	int64_t x47 = 391LL;
	int16_t x48 = INT16_MIN;
	int32_t t8 = 100989508;

    t8 = ((x45|(x46*x47))==x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -1;
	uint64_t x50 = 9160646LLU;
	static int64_t x51 = INT64_MIN;
	static volatile int8_t x52 = INT8_MAX;
	static volatile int32_t t9 = -1;

    t9 = ((x49|(x50*x51))==x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 16224U;
	int64_t x55 = 2007133LL;
	volatile int32_t x56 = INT32_MAX;
	volatile int32_t t10 = -8600764;

    t10 = ((x53|(x54*x55))==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = 232;
	uint32_t x59 = 53U;
	volatile uint32_t x60 = 86U;

    t11 = ((x57|(x58*x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MIN;
	static uint32_t x62 = 1553U;
	int64_t x64 = 3478670590888267198LL;
	int32_t t12 = -498540;

    t12 = ((x61|(x62*x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = 4152490644946LL;
	uint8_t x66 = UINT8_MAX;
	volatile int8_t x67 = INT8_MAX;
	static volatile uint16_t x68 = 168U;
	volatile int32_t t13 = -2255882;

    t13 = ((x65|(x66*x67))==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x69 = INT64_MIN;
	volatile uint8_t x70 = 3U;
	int8_t x71 = 14;
	int32_t x72 = -1;
	int32_t t14 = 60339;

    t14 = ((x69|(x70*x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = 13216;
	int16_t x74 = INT16_MAX;
	int32_t x75 = -1;
	static int32_t t15 = -211718;

    t15 = ((x73|(x74*x75))==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = 1035;
	int32_t x79 = -27604509;
	volatile int32_t x80 = -27;

    t16 = ((x77|(x78*x79))==x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x83 = -1;
	static int32_t x84 = 77202835;
	volatile int32_t t17 = -472;

    t17 = ((x81|(x82*x83))==x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	uint16_t x90 = 11U;
	uint16_t x91 = 10U;
	int64_t x92 = -11379619645LL;

    t18 = ((x89|(x90*x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 6U;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t19 = 30;

    t19 = ((x93|(x94*x95))==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MIN;
	volatile int16_t x99 = -1;
	volatile int16_t x100 = -1;
	volatile int32_t t20 = -2;

    t20 = ((x97|(x98*x99))==x100);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = 354;
	int32_t x103 = -24348;
	int8_t x104 = 3;

    t21 = ((x101|(x102*x103))==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x114 = INT16_MIN;
	int16_t x116 = INT16_MAX;

    t22 = ((x113|(x114*x115))==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x121 = INT8_MIN;
	static int32_t x122 = -1;
	int64_t x123 = -1LL;
	static volatile int64_t x124 = -58721752377LL;
	static int32_t t23 = 12981;

    t23 = ((x121|(x122*x123))==x124);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x125 = 10442LLU;
	static int16_t x126 = -1;
	static int16_t x127 = INT16_MAX;
	static uint64_t x128 = 260591LLU;
	volatile int32_t t24 = -1534497;

    t24 = ((x125|(x126*x127))==x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x129 = -1;
	static uint16_t x130 = 6949U;
	uint8_t x131 = 6U;
	volatile int16_t x132 = -1;
	int32_t t25 = -5340;

    t25 = ((x129|(x130*x131))==x132);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x133 = -5;
	volatile uint64_t x134 = UINT64_MAX;
	int8_t x136 = INT8_MIN;

    t26 = ((x133|(x134*x135))==x136);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = INT16_MIN;
	uint32_t x139 = 39585517U;
	static uint8_t x140 = 9U;
	volatile int32_t t27 = -23;

    t27 = ((x137|(x138*x139))==x140);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = 42U;
	int16_t x144 = -28;
	volatile int32_t t28 = 5239;

    t28 = ((x141|(x142*x143))==x144);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x145 = -1;
	uint64_t x146 = 128270549687LLU;
	uint64_t x147 = 408967033542LLU;
	int64_t x148 = 8462703527968078LL;

    t29 = ((x145|(x146*x147))==x148);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = INT16_MAX;
	static volatile uint32_t x150 = UINT32_MAX;
	int16_t x151 = -1;
	static volatile uint64_t x152 = 7646855146LLU;
	int32_t t30 = -103957;

    t30 = ((x149|(x150*x151))==x152);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x153 = INT32_MAX;
	int64_t x156 = -1LL;
	static int32_t t31 = 658;

    t31 = ((x153|(x154*x155))==x156);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = INT16_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	int64_t x160 = 10601457LL;
	volatile int32_t t32 = -4033503;

    t32 = ((x157|(x158*x159))==x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x161 = -7490315LL;
	static volatile uint64_t x162 = 7384248601836LLU;
	int32_t t33 = -247774;

    t33 = ((x161|(x162*x163))==x164);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = -1;
	uint8_t x166 = 2U;
	int8_t x167 = 10;
	volatile int8_t x168 = 12;
	int32_t t34 = 686867;

    t34 = ((x165|(x166*x167))==x168);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	static volatile int32_t x171 = INT32_MIN;
	int8_t x172 = -5;
	static int32_t t35 = 10750;

    t35 = ((x169|(x170*x171))==x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x173 = -1;
	volatile int32_t t36 = -1;

    t36 = ((x173|(x174*x175))==x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x177 = UINT64_MAX;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t t37 = -5319;

    t37 = ((x177|(x178*x179))==x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x181 = UINT64_MAX;
	uint64_t x182 = 9189339601765597564LLU;
	int64_t x184 = -1LL;
	static int32_t t38 = -1;

    t38 = ((x181|(x182*x183))==x184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x190 = UINT32_MAX;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t39 = 451608333;

    t39 = ((x189|(x190*x191))==x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x193 = 38U;
	int32_t x196 = INT32_MAX;

    t40 = ((x193|(x194*x195))==x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x197 = -1LL;
	int16_t x198 = 23;
	int16_t x200 = INT16_MIN;
	volatile int32_t t41 = -581803105;

    t41 = ((x197|(x198*x199))==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x202 = 12LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t42 = -627;

    t42 = ((x201|(x202*x203))==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x205 = 17;
	static volatile int64_t x206 = -1LL;
	volatile uint16_t x207 = 5U;
	static int64_t x208 = -1LL;
	int32_t t43 = -14751;

    t43 = ((x205|(x206*x207))==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x209 = -1;
	uint64_t x212 = 161707997252818LLU;
	volatile int32_t t44 = 2209;

    t44 = ((x209|(x210*x211))==x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x216 = 10;

    t45 = ((x213|(x214*x215))==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = -2;
	uint16_t x218 = 208U;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = UINT8_MAX;
	int32_t t46 = -166689;

    t46 = ((x217|(x218*x219))==x220);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x226 = -1;
	uint8_t x227 = 2U;

    t47 = ((x225|(x226*x227))==x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 34U;
	int64_t x231 = -11126896601806LL;
	static volatile int32_t t48 = -32090;

    t48 = ((x229|(x230*x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x233 = 242975568644886LLU;
	volatile int32_t x234 = -1;
	volatile int16_t x235 = 0;
	uint64_t x236 = UINT64_MAX;
	int32_t t49 = 5833;

    t49 = ((x233|(x234*x235))==x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = -1LL;
	int64_t x243 = -30742722LL;
	uint16_t x244 = 2950U;
	int32_t t50 = 134862;

    t50 = ((x241|(x242*x243))==x244);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	static volatile uint32_t x247 = 240324267U;
	int32_t x248 = 32734;

    t51 = ((x245|(x246*x247))==x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x250 = 1545U;
	int64_t x252 = -1LL;
	volatile int32_t t52 = -42;

    t52 = ((x249|(x250*x251))==x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x253 = -1LL;
	int8_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int32_t t53 = -14270880;

    t53 = ((x253|(x254*x255))==x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MAX;
	int8_t x260 = -23;
	static int32_t t54 = -112099521;

    t54 = ((x257|(x258*x259))==x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x261 = INT16_MAX;
	uint8_t x262 = 19U;
	volatile int16_t x263 = -1;
	static int64_t x264 = INT64_MIN;
	int32_t t55 = -1;

    t55 = ((x261|(x262*x263))==x264);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x270 = 2213U;
	int8_t x271 = INT8_MIN;
	uint32_t x272 = 4662663U;
	int32_t t56 = 6091;

    t56 = ((x269|(x270*x271))==x272);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x273 = INT8_MAX;
	uint64_t x274 = 3025027203646LLU;
	int64_t x275 = -1LL;
	int8_t x276 = -1;
	volatile int32_t t57 = -28725;

    t57 = ((x273|(x274*x275))==x276);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x279 = 59;
	volatile uint32_t x280 = 70259U;
	int32_t t58 = -26453113;

    t58 = ((x277|(x278*x279))==x280);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x281 = -434;
	uint64_t x282 = UINT64_MAX;
	static int64_t x283 = 1144988773781775608LL;
	int32_t t59 = 1162;

    t59 = ((x281|(x282*x283))==x284);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x285 = 459416259LL;
	uint32_t x286 = UINT32_MAX;
	static uint64_t x287 = 3788062490560084723LLU;
	volatile int64_t x288 = -1LL;
	int32_t t60 = -1584021;

    t60 = ((x285|(x286*x287))==x288);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x289 = INT8_MAX;
	int16_t x290 = INT16_MAX;
	int32_t x291 = -6833;
	int8_t x292 = INT8_MAX;

    t61 = ((x289|(x290*x291))==x292);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x294 = -1LL;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t62 = 200530;

    t62 = ((x293|(x294*x295))==x296);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x301 = 931668LL;
	uint64_t x302 = 2087429568414LLU;
	volatile int32_t x303 = 66870245;
	static int8_t x304 = -1;
	volatile int32_t t63 = -12741705;

    t63 = ((x301|(x302*x303))==x304);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	static int8_t x311 = INT8_MAX;

    t64 = ((x309|(x310*x311))==x312);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x317 = 528077U;
	int64_t x318 = -1LL;
	static int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MIN;
	static volatile int32_t t65 = 875656871;

    t65 = ((x317|(x318*x319))==x320);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	static int16_t x323 = -1860;
	int32_t x324 = -35957;
	static volatile int32_t t66 = 4391;

    t66 = ((x321|(x322*x323))==x324);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x325 = INT64_MIN;
	static volatile int16_t x326 = INT16_MAX;
	int8_t x327 = 1;
	int8_t x328 = -1;
	volatile int32_t t67 = 70275;

    t67 = ((x325|(x326*x327))==x328);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x329 = UINT32_MAX;
	int32_t x330 = -15006;
	volatile int32_t t68 = -3272;

    t68 = ((x329|(x330*x331))==x332);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x333 = 5U;
	static uint16_t x336 = UINT16_MAX;

    t69 = ((x333|(x334*x335))==x336);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x350 = 4U;
	int8_t x351 = -4;
	static uint64_t x352 = 1000444LLU;
	int32_t t70 = -405;

    t70 = ((x349|(x350*x351))==x352);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x353 = INT64_MAX;
	int16_t x354 = INT16_MIN;
	volatile int8_t x356 = INT8_MIN;

    t71 = ((x353|(x354*x355))==x356);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x357 = UINT64_MAX;
	uint64_t x358 = 7LLU;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t72 = -496039453;

    t72 = ((x357|(x358*x359))==x360);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x361 = -1LL;
	static uint64_t x362 = 4987760715191LLU;
	uint32_t x363 = 1489905217U;
	int32_t x364 = INT32_MAX;

    t73 = ((x361|(x362*x363))==x364);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x365 = 99044;
	static volatile int64_t x366 = -31493648LL;
	int16_t x367 = INT16_MAX;
	static int8_t x368 = -3;
	int32_t t74 = 102;

    t74 = ((x365|(x366*x367))==x368);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x369 = UINT16_MAX;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = -1LL;
	int16_t x372 = INT16_MIN;

    t75 = ((x369|(x370*x371))==x372);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x377 = INT64_MIN;
	volatile int16_t x380 = -25;
	int32_t t76 = -124976;

    t76 = ((x377|(x378*x379))==x380);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x385 = UINT32_MAX;
	int16_t x386 = 2342;
	uint32_t x388 = UINT32_MAX;
	int32_t t77 = -1548;

    t77 = ((x385|(x386*x387))==x388);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = 0;
	int8_t x391 = -1;
	uint8_t x392 = 2U;
	int32_t t78 = 110204;

    t78 = ((x389|(x390*x391))==x392);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x397 = UINT32_MAX;
	static int32_t x398 = INT32_MAX;
	volatile int32_t t79 = -88854325;

    t79 = ((x397|(x398*x399))==x400);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x405 = -1LL;
	volatile int8_t x406 = INT8_MAX;
	uint32_t x407 = UINT32_MAX;
	uint32_t x408 = 3U;

    t80 = ((x405|(x406*x407))==x408);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint32_t x409 = UINT32_MAX;
	uint64_t x410 = 42163LLU;
	int16_t x411 = INT16_MIN;
	volatile int64_t x412 = -1LL;
	int32_t t81 = 131;

    t81 = ((x409|(x410*x411))==x412);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x413 = INT16_MIN;
	volatile int8_t x416 = -13;
	volatile int32_t t82 = -1701;

    t82 = ((x413|(x414*x415))==x416);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x418 = 54U;
	int64_t x419 = 1127933707113495LL;
	int32_t x420 = INT32_MIN;
	static int32_t t83 = -376235;

    t83 = ((x417|(x418*x419))==x420);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x421 = INT16_MAX;
	int64_t x422 = 325321676LL;
	static int16_t x424 = 26;
	static volatile int32_t t84 = 118620;

    t84 = ((x421|(x422*x423))==x424);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x425 = -1124533464500776845LL;
	uint8_t x427 = 3U;
	uint32_t x428 = 7U;
	volatile int32_t t85 = 24;

    t85 = ((x425|(x426*x427))==x428);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x431 = 12U;
	int32_t x432 = -130;

    t86 = ((x429|(x430*x431))==x432);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x433 = 50U;
	uint8_t x434 = UINT8_MAX;
	volatile int64_t x436 = 747LL;
	int32_t t87 = -14091144;

    t87 = ((x433|(x434*x435))==x436);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x439 = INT64_MAX;
	int64_t x440 = INT64_MIN;
	int32_t t88 = 9;

    t88 = ((x437|(x438*x439))==x440);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x441 = -1LL;
	uint16_t x442 = UINT16_MAX;
	volatile int64_t x443 = 2LL;
	int8_t x444 = INT8_MIN;
	int32_t t89 = 268986;

    t89 = ((x441|(x442*x443))==x444);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x445 = 6384;
	volatile int8_t x447 = -5;
	uint64_t x448 = 8972109376543965LLU;
	volatile int32_t t90 = -1;

    t90 = ((x445|(x446*x447))==x448);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int8_t x454 = -1;
	int8_t x455 = -1;
	int32_t x456 = -49754272;
	volatile int32_t t91 = -221350;

    t91 = ((x453|(x454*x455))==x456);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x457 = 1711676;
	static uint8_t x459 = 6U;
	int64_t x460 = -15LL;

    t92 = ((x457|(x458*x459))==x460);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x465 = 4198U;
	int8_t x466 = -1;
	static int32_t x467 = -1;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t93 = -102533573;

    t93 = ((x465|(x466*x467))==x468);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	int8_t x472 = INT8_MAX;
	volatile int32_t t94 = 307579419;

    t94 = ((x469|(x470*x471))==x472);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x473 = 65U;
	static uint64_t x475 = UINT64_MAX;
	volatile int32_t t95 = -2700;

    t95 = ((x473|(x474*x475))==x476);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x478 = -1;
	static int8_t x479 = INT8_MAX;
	int64_t x480 = INT64_MIN;
	volatile int32_t t96 = 12413363;

    t96 = ((x477|(x478*x479))==x480);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x481 = INT64_MIN;
	int64_t x482 = -1LL;
	static int64_t x483 = -1183372642173741839LL;
	volatile int32_t x484 = 0;
	int32_t t97 = -2;

    t97 = ((x481|(x482*x483))==x484);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x485 = 4897374421743LL;
	static int64_t x486 = -73LL;
	int8_t x487 = INT8_MIN;
	int8_t x488 = -22;
	static volatile int32_t t98 = -9;

    t98 = ((x485|(x486*x487))==x488);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x489 = INT32_MIN;
	volatile int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	int32_t t99 = 8682;

    t99 = ((x489|(x490*x491))==x492);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x497 = 2106;
	uint32_t x498 = 465U;
	int32_t x499 = INT32_MIN;
	uint32_t x500 = UINT32_MAX;
	int32_t t100 = 2093;

    t100 = ((x497|(x498*x499))==x500);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x501 = 13181105785246746LLU;
	int8_t x503 = -1;
	uint64_t x504 = 30947286018331880LLU;
	int32_t t101 = -5348;

    t101 = ((x501|(x502*x503))==x504);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x506 = INT16_MIN;
	static uint64_t x507 = 558634LLU;
	static int16_t x508 = INT16_MIN;

    t102 = ((x505|(x506*x507))==x508);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x509 = INT32_MAX;
	uint8_t x510 = 63U;
	static int32_t x511 = 3536114;
	int64_t x512 = 28910771LL;
	int32_t t103 = 958763;

    t103 = ((x509|(x510*x511))==x512);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x514 = UINT64_MAX;
	volatile int64_t x516 = 340397807909243LL;
	int32_t t104 = -6;

    t104 = ((x513|(x514*x515))==x516);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x517 = INT8_MAX;
	uint8_t x518 = UINT8_MAX;
	uint32_t x520 = 66170856U;
	volatile int32_t t105 = -12560;

    t105 = ((x517|(x518*x519))==x520);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x521 = 25U;
	uint64_t x522 = 1LLU;
	int64_t x523 = 13LL;
	static int32_t t106 = 1653657;

    t106 = ((x521|(x522*x523))==x524);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x525 = 71229821;
	int16_t x526 = INT16_MIN;
	uint64_t x527 = UINT64_MAX;
	volatile int32_t t107 = 1367;

    t107 = ((x525|(x526*x527))==x528);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x533 = INT32_MIN;
	volatile int32_t x534 = 1212;
	static int32_t t108 = -676717;

    t108 = ((x533|(x534*x535))==x536);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x537 = INT32_MAX;
	int64_t x540 = 29180909959LL;
	volatile int32_t t109 = 29681854;

    t109 = ((x537|(x538*x539))==x540);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x541 = INT16_MAX;
	int64_t x542 = 69431934963033437LL;
	static int8_t x543 = 53;
	int16_t x544 = INT16_MAX;
	volatile int32_t t110 = 675622;

    t110 = ((x541|(x542*x543))==x544);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = -1;
	uint64_t x547 = 23137665333828981LLU;
	static volatile int8_t x548 = -25;
	static volatile int32_t t111 = 4352;

    t111 = ((x545|(x546*x547))==x548);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x550 = UINT32_MAX;
	volatile int16_t x551 = -431;

    t112 = ((x549|(x550*x551))==x552);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x554 = INT64_MIN;
	uint16_t x555 = 1U;
	uint32_t x556 = UINT32_MAX;
	volatile int32_t t113 = 113846850;

    t113 = ((x553|(x554*x555))==x556);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x561 = 872604U;
	int16_t x562 = INT16_MAX;
	static int16_t x563 = INT16_MIN;
	static int16_t x564 = INT16_MIN;
	int32_t t114 = 39634204;

    t114 = ((x561|(x562*x563))==x564);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x565 = INT16_MIN;
	static volatile uint64_t x566 = 6927432062631557LLU;
	uint64_t x567 = 280410520181743LLU;
	int32_t t115 = 5;

    t115 = ((x565|(x566*x567))==x568);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x569 = -1LL;
	int8_t x570 = INT8_MIN;
	int8_t x571 = 0;
	int64_t x572 = INT64_MAX;
	int32_t t116 = 0;

    t116 = ((x569|(x570*x571))==x572);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x573 = INT8_MIN;
	static uint32_t x574 = 5706U;
	uint64_t x575 = 125882LLU;
	volatile int32_t t117 = -118787860;

    t117 = ((x573|(x574*x575))==x576);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x577 = INT64_MIN;
	int64_t x578 = -20436262961414LL;
	uint8_t x579 = UINT8_MAX;
	int8_t x580 = INT8_MAX;

    t118 = ((x577|(x578*x579))==x580);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x581 = -1;
	static uint8_t x582 = 13U;
	volatile int64_t x584 = INT64_MIN;
	int32_t t119 = 345296769;

    t119 = ((x581|(x582*x583))==x584);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x589 = -1;
	uint16_t x592 = UINT16_MAX;
	int32_t t120 = 1464335;

    t120 = ((x589|(x590*x591))==x592);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = UINT64_MAX;
	static uint64_t x594 = 148378242728154863LLU;
	int8_t x595 = -48;
	int32_t x596 = INT32_MIN;
	volatile int32_t t121 = 3540;

    t121 = ((x593|(x594*x595))==x596);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x598 = INT8_MAX;
	int32_t x599 = -141;
	int16_t x600 = -6541;
	static int32_t t122 = -15;

    t122 = ((x597|(x598*x599))==x600);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x601 = INT32_MIN;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	volatile int32_t t123 = 1127;

    t123 = ((x601|(x602*x603))==x604);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 7U;
	static int32_t t124 = -10;

    t124 = ((x605|(x606*x607))==x608);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x611 = 3559487376LLU;
	int32_t t125 = -2631;

    t125 = ((x609|(x610*x611))==x612);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x617 = INT16_MIN;
	int16_t x619 = INT16_MAX;
	static int64_t x620 = INT64_MAX;
	volatile int32_t t126 = 591;

    t126 = ((x617|(x618*x619))==x620);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x621 = INT32_MIN;
	int32_t x622 = INT32_MAX;
	static int8_t x623 = -1;
	int32_t x624 = -1;
	volatile int32_t t127 = 116;

    t127 = ((x621|(x622*x623))==x624);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x625 = INT8_MIN;
	int8_t x627 = INT8_MAX;
	int16_t x628 = INT16_MIN;
	int32_t t128 = 37481;

    t128 = ((x625|(x626*x627))==x628);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x630 = 14U;
	int8_t x631 = INT8_MAX;
	int16_t x632 = INT16_MIN;

    t129 = ((x629|(x630*x631))==x632);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x634 = 348160194010567737LLU;
	int32_t x635 = 180;
	int64_t x636 = 957767LL;
	int32_t t130 = 1;

    t130 = ((x633|(x634*x635))==x636);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x637 = 63U;
	uint16_t x638 = UINT16_MAX;
	static int8_t x639 = INT8_MIN;
	volatile int32_t t131 = 25;

    t131 = ((x637|(x638*x639))==x640);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x641 = -6499LL;
	int64_t x643 = INT64_MIN;
	static volatile int32_t x644 = INT32_MIN;
	static int32_t t132 = -798;

    t132 = ((x641|(x642*x643))==x644);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x645 = 6U;
	int32_t x646 = INT32_MAX;
	uint32_t x647 = 5882U;
	uint32_t x648 = UINT32_MAX;
	static int32_t t133 = 26084;

    t133 = ((x645|(x646*x647))==x648);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x651 = 3573;
	int32_t x652 = 156145695;
	volatile int32_t t134 = 1415447;

    t134 = ((x649|(x650*x651))==x652);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x653 = -1LL;
	uint32_t x654 = UINT32_MAX;
	static uint16_t x655 = 880U;

    t135 = ((x653|(x654*x655))==x656);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x661 = INT8_MIN;
	uint8_t x664 = UINT8_MAX;
	int32_t t136 = 372885;

    t136 = ((x661|(x662*x663))==x664);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x665 = INT32_MAX;
	int8_t x666 = INT8_MIN;
	uint16_t x667 = UINT16_MAX;
	uint8_t x668 = 4U;
	volatile int32_t t137 = -462038;

    t137 = ((x665|(x666*x667))==x668);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x670 = 1763U;
	int16_t x671 = -1;
	static int32_t t138 = 584;

    t138 = ((x669|(x670*x671))==x672);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x674 = 14579U;
	uint16_t x675 = 0U;
	int32_t x676 = INT32_MAX;
	int32_t t139 = -173;

    t139 = ((x673|(x674*x675))==x676);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x682 = 1;
	uint32_t x683 = 8226U;
	int64_t x684 = -1LL;
	int32_t t140 = 5147;

    t140 = ((x681|(x682*x683))==x684);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x686 = UINT64_MAX;
	volatile int32_t x687 = -1;
	volatile int32_t t141 = 973;

    t141 = ((x685|(x686*x687))==x688);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x689 = -33005390LL;
	volatile uint32_t x690 = UINT32_MAX;
	volatile int8_t x691 = INT8_MIN;
	int32_t x692 = INT32_MIN;
	int32_t t142 = 375;

    t142 = ((x689|(x690*x691))==x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x693 = 1049169435LLU;
	int16_t x694 = INT16_MIN;
	volatile int32_t x695 = -6;
	static int32_t x696 = INT32_MIN;
	int32_t t143 = -23559;

    t143 = ((x693|(x694*x695))==x696);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x697 = -29;
	volatile int8_t x698 = -2;
	int64_t x699 = 7LL;
	static int16_t x700 = 0;
	static volatile int32_t t144 = -35;

    t144 = ((x697|(x698*x699))==x700);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x705 = -28LL;
	static int32_t x706 = -1;
	volatile int8_t x707 = INT8_MAX;
	uint64_t x708 = UINT64_MAX;
	volatile int32_t t145 = -148946257;

    t145 = ((x705|(x706*x707))==x708);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x716 = INT8_MIN;
	int32_t t146 = -133824;

    t146 = ((x713|(x714*x715))==x716);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x718 = 1;
	int16_t x720 = 1885;

    t147 = ((x717|(x718*x719))==x720);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x721 = -1;
	static int32_t x722 = 266;
	uint32_t x723 = 3792U;
	uint64_t x724 = UINT64_MAX;
	volatile int32_t t148 = 2725;

    t148 = ((x721|(x722*x723))==x724);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x725 = 6559097330921LL;
	int64_t x726 = -642433397660543LL;
	uint32_t x727 = 376U;
	int64_t x728 = INT64_MIN;
	int32_t t149 = -645;

    t149 = ((x725|(x726*x727))==x728);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x733 = -15;
	uint64_t x734 = 1695990162568LLU;
	int32_t x735 = -1;
	int64_t x736 = -1LL;
	int32_t t150 = 216;

    t150 = ((x733|(x734*x735))==x736);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x745 = 1U;
	static int16_t x746 = 0;
	uint8_t x748 = UINT8_MAX;
	int32_t t151 = -235;

    t151 = ((x745|(x746*x747))==x748);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x749 = INT32_MIN;
	static int8_t x750 = -1;
	int64_t x751 = -47684618200462810LL;
	volatile int32_t x752 = INT32_MIN;

    t152 = ((x749|(x750*x751))==x752);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x753 = 211158364248962LLU;
	int64_t x754 = INT64_MIN;
	static int16_t x756 = 202;

    t153 = ((x753|(x754*x755))==x756);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x763 = -4724;
	int32_t t154 = -5846;

    t154 = ((x761|(x762*x763))==x764);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x769 = 386988370LL;
	uint8_t x770 = 3U;
	int8_t x771 = -1;

    t155 = ((x769|(x770*x771))==x772);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x778 = -803219086452LL;
	static int8_t x779 = INT8_MAX;
	int16_t x780 = -1;

    t156 = ((x777|(x778*x779))==x780);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x786 = UINT64_MAX;
	int64_t x787 = 64LL;
	static int64_t x788 = -1LL;
	int32_t t157 = 82736;

    t157 = ((x785|(x786*x787))==x788);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x794 = 6U;
	volatile uint64_t x795 = UINT64_MAX;
	uint64_t x796 = 17775LLU;
	volatile int32_t t158 = -48904309;

    t158 = ((x793|(x794*x795))==x796);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x797 = 2;
	static uint64_t x798 = 46665070LLU;
	int64_t x799 = -200585012175599LL;
	int32_t x800 = INT32_MIN;
	volatile int32_t t159 = -9;

    t159 = ((x797|(x798*x799))==x800);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x801 = UINT32_MAX;
	int64_t x802 = INT64_MAX;
	uint64_t x803 = 1212007510LLU;
	int16_t x804 = -1;

    t160 = ((x801|(x802*x803))==x804);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x806 = -1LL;
	int8_t x807 = INT8_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t161 = -55;

    t161 = ((x805|(x806*x807))==x808);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x810 = INT32_MAX;
	uint32_t x811 = 198844871U;
	int64_t x812 = INT64_MAX;
	int32_t t162 = -247334;

    t162 = ((x809|(x810*x811))==x812);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x813 = 6178LL;
	static int32_t x814 = INT32_MAX;
	volatile uint32_t x815 = 419U;
	uint32_t x816 = 0U;
	int32_t t163 = -9078777;

    t163 = ((x813|(x814*x815))==x816);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x817 = 1U;

    t164 = ((x817|(x818*x819))==x820);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x821 = 27U;
	uint32_t x822 = 8932U;
	volatile int16_t x823 = INT16_MIN;
	int16_t x824 = -211;
	int32_t t165 = 0;

    t165 = ((x821|(x822*x823))==x824);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x826 = 2227252LLU;
	int8_t x827 = INT8_MIN;
	static int16_t x828 = INT16_MIN;

    t166 = ((x825|(x826*x827))==x828);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x834 = -20583LL;
	uint8_t x835 = UINT8_MAX;
	volatile int32_t t167 = 67;

    t167 = ((x833|(x834*x835))==x836);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x837 = 7843LLU;
	int8_t x838 = INT8_MIN;
	volatile uint32_t x839 = UINT32_MAX;
	volatile int8_t x840 = INT8_MIN;
	volatile int32_t t168 = 540;

    t168 = ((x837|(x838*x839))==x840);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x850 = -1LL;
	int16_t x851 = -9661;

    t169 = ((x849|(x850*x851))==x852);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x861 = INT16_MIN;
	int64_t x862 = 837251176658LL;
	volatile int8_t x863 = INT8_MIN;

    t170 = ((x861|(x862*x863))==x864);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x867 = -2661LL;
	static int64_t x868 = INT64_MIN;
	volatile int32_t t171 = -1;

    t171 = ((x865|(x866*x867))==x868);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x869 = INT32_MAX;
	int16_t x870 = -49;
	static volatile int32_t x871 = -1;
	int32_t x872 = 18;
	volatile int32_t t172 = -115332;

    t172 = ((x869|(x870*x871))==x872);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x873 = -53;
	int64_t x874 = 1626747LL;
	static int64_t x875 = -1LL;
	int32_t t173 = 0;

    t173 = ((x873|(x874*x875))==x876);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x877 = 1U;
	static uint64_t x878 = 2875479219LLU;
	volatile int16_t x879 = -1;
	int64_t x880 = INT64_MAX;

    t174 = ((x877|(x878*x879))==x880);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x881 = -1LL;
	static uint32_t x882 = 0U;
	int8_t x883 = INT8_MIN;
	volatile int64_t x884 = INT64_MAX;
	int32_t t175 = -323912800;

    t175 = ((x881|(x882*x883))==x884);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x885 = -1;
	int16_t x886 = -1;
	uint32_t x887 = 128102U;
	static uint8_t x888 = 27U;
	volatile int32_t t176 = 63;

    t176 = ((x885|(x886*x887))==x888);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x889 = 25U;
	int64_t x890 = -1LL;
	int8_t x891 = -1;
	int32_t t177 = -118221;

    t177 = ((x889|(x890*x891))==x892);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x893 = UINT16_MAX;
	int16_t x894 = INT16_MIN;
	uint32_t x895 = 28903551U;
	static int64_t x896 = -1LL;
	int32_t t178 = 7261;

    t178 = ((x893|(x894*x895))==x896);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x897 = 0;
	volatile int8_t x898 = 1;
	int32_t x899 = INT32_MAX;
	int8_t x900 = INT8_MIN;
	int32_t t179 = 604209;

    t179 = ((x897|(x898*x899))==x900);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x906 = 26188361099315LLU;
	int16_t x908 = INT16_MIN;

    t180 = ((x905|(x906*x907))==x908);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x910 = 155U;
	volatile int16_t x911 = INT16_MIN;
	static int8_t x912 = -2;
	int32_t t181 = 3870908;

    t181 = ((x909|(x910*x911))==x912);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x913 = 2;
	int16_t x914 = 1490;
	uint16_t x915 = 0U;
	int16_t x916 = INT16_MAX;
	volatile int32_t t182 = -784428536;

    t182 = ((x913|(x914*x915))==x916);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x921 = 44224U;
	volatile uint8_t x922 = 26U;
	int8_t x923 = 54;
	volatile uint32_t x924 = UINT32_MAX;

    t183 = ((x921|(x922*x923))==x924);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x925 = 116869634545520907LLU;
	uint8_t x926 = 118U;
	int32_t t184 = 130537900;

    t184 = ((x925|(x926*x927))==x928);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x929 = INT64_MAX;
	uint16_t x931 = 8U;
	int16_t x932 = INT16_MIN;
	int32_t t185 = -147;

    t185 = ((x929|(x930*x931))==x932);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x933 = UINT16_MAX;
	int16_t x934 = -1;
	static volatile uint32_t x935 = 0U;
	uint32_t x936 = 27701262U;

    t186 = ((x933|(x934*x935))==x936);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x941 = INT16_MIN;
	static uint8_t x943 = UINT8_MAX;
	static volatile int32_t t187 = -1;

    t187 = ((x941|(x942*x943))==x944);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x945 = -27707;
	volatile uint32_t x946 = 1501297U;
	volatile int32_t t188 = 117;

    t188 = ((x945|(x946*x947))==x948);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x949 = INT32_MIN;
	int8_t x952 = -1;
	int32_t t189 = -1141;

    t189 = ((x949|(x950*x951))==x952);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x957 = INT8_MIN;
	uint64_t x959 = 10200579387LLU;
	static int8_t x960 = 1;
	volatile int32_t t190 = 58598;

    t190 = ((x957|(x958*x959))==x960);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x961 = -1;
	volatile int16_t x963 = 4592;
	uint64_t x964 = 1LLU;
	volatile int32_t t191 = 1;

    t191 = ((x961|(x962*x963))==x964);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x965 = UINT32_MAX;
	volatile int8_t x967 = 11;
	int32_t t192 = -1;

    t192 = ((x965|(x966*x967))==x968);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x969 = 11;
	uint8_t x970 = 2U;
	uint16_t x971 = UINT16_MAX;
	volatile int16_t x972 = 842;
	static int32_t t193 = 3753;

    t193 = ((x969|(x970*x971))==x972);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x973 = INT64_MIN;
	int8_t x974 = INT8_MIN;
	int16_t x976 = INT16_MIN;
	volatile int32_t t194 = -659045030;

    t194 = ((x973|(x974*x975))==x976);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x977 = INT8_MAX;
	uint8_t x978 = UINT8_MAX;
	static int16_t x980 = -2;
	static int32_t t195 = -5404195;

    t195 = ((x977|(x978*x979))==x980);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x981 = 7U;
	static volatile uint16_t x983 = 0U;
	static int32_t x984 = INT32_MIN;
	int32_t t196 = 3421326;

    t196 = ((x981|(x982*x983))==x984);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x987 = 1LLU;
	int32_t t197 = 227;

    t197 = ((x985|(x986*x987))==x988);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x990 = 2U;
	int16_t x991 = INT16_MIN;
	volatile int8_t x992 = -19;
	volatile int32_t t198 = -53754342;

    t198 = ((x989|(x990*x991))==x992);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x993 = INT8_MAX;
	static uint32_t x994 = 851359478U;
	volatile int32_t x995 = -1;
	int8_t x996 = 1;
	int32_t t199 = 0;

    t199 = ((x993|(x994*x995))==x996);

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

