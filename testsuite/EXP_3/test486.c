
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

uint8_t x15 = UINT8_MAX;
volatile uint16_t x21 = UINT16_MAX;
int32_t t3 = 4878826;
static volatile uint8_t x31 = 1U;
int8_t x32 = INT8_MIN;
int16_t x35 = -1;
int32_t x49 = -1;
int8_t x52 = 16;
int64_t x61 = -1LL;
uint64_t x62 = UINT64_MAX;
static uint16_t x64 = 6U;
static int32_t t12 = 895948049;
uint8_t x74 = UINT8_MAX;
volatile uint32_t x79 = UINT32_MAX;
uint8_t x80 = 0U;
int32_t t16 = -653;
int32_t x89 = 3195081;
uint8_t x92 = UINT8_MAX;
volatile int64_t x105 = INT64_MIN;
int8_t x109 = INT8_MIN;
int32_t t22 = -1902;
int16_t x130 = 61;
uint8_t x132 = 12U;
int8_t x136 = 1;
volatile int32_t t24 = -58346276;
static int32_t x148 = INT32_MIN;
volatile int32_t t28 = 194;
static int32_t x157 = INT32_MIN;
int32_t x158 = INT32_MIN;
uint32_t x160 = 212659U;
uint32_t x162 = 778U;
int16_t x166 = INT16_MIN;
static int8_t x167 = INT8_MAX;
int32_t x172 = -203742;
int16_t x184 = -1;
static int64_t x193 = INT64_MIN;
int8_t x198 = -1;
int64_t x201 = -1LL;
uint8_t x204 = 0U;
volatile int32_t t41 = 1474372;
uint32_t x224 = 3U;
int32_t x225 = -781;
static int8_t x228 = -1;
static int64_t x229 = -58LL;
static uint64_t x231 = 194LLU;
int64_t x232 = 17283LL;
int32_t t46 = 178;
int32_t x236 = -929221;
uint8_t x244 = 5U;
int32_t t49 = 29248973;
static int32_t t50 = -26;
static volatile int32_t t51 = -24;
static uint64_t x267 = 160814161040074LLU;
volatile int32_t t53 = 120850537;
int16_t x279 = 1;
uint16_t x282 = UINT16_MAX;
int32_t t57 = 54;
uint64_t x294 = 222994446928858LLU;
int8_t x297 = INT8_MAX;
static volatile int32_t x298 = 27;
volatile int16_t x305 = INT16_MIN;
volatile int32_t x312 = 0;
static int8_t x313 = -1;
uint32_t x316 = UINT32_MAX;
static int64_t x321 = INT64_MIN;
volatile int32_t t65 = -1;
int16_t x351 = -3528;
int8_t x352 = 10;
volatile int32_t x357 = 8136498;
int8_t x359 = INT8_MIN;
int32_t x365 = INT32_MIN;
static volatile int32_t t74 = 1464;
volatile int32_t t75 = -1;
static volatile uint16_t x373 = UINT16_MAX;
static volatile int32_t t76 = -401;
uint32_t x383 = 1U;
int16_t x388 = INT16_MAX;
uint32_t x389 = UINT32_MAX;
volatile int32_t t81 = -492938919;
static int32_t t82 = 1736;
uint32_t x412 = 5U;
int64_t x413 = INT64_MIN;
volatile int32_t t84 = 6032416;
volatile int32_t t85 = -264726116;
volatile int16_t x421 = -1;
volatile int64_t x422 = 10746251824148471LL;
int16_t x428 = -1;
int16_t x434 = INT16_MIN;
int16_t x448 = -912;
int32_t x449 = INT32_MIN;
static volatile int16_t x454 = 19;
volatile uint8_t x468 = UINT8_MAX;
int16_t x479 = -938;
static volatile int32_t t97 = 65;
uint8_t x481 = UINT8_MAX;
uint32_t x503 = 339841444U;
uint16_t x504 = UINT16_MAX;
uint16_t x506 = UINT16_MAX;
static uint16_t x507 = 37U;
volatile int32_t t102 = 87224040;
volatile int8_t x513 = INT8_MIN;
uint32_t x516 = UINT32_MAX;
int32_t x518 = 298;
int16_t x519 = INT16_MAX;
int32_t t105 = 1101;
static uint8_t x524 = 23U;
volatile int32_t t106 = -5;
volatile int64_t x532 = 15313LL;
volatile int32_t x537 = INT32_MAX;
int32_t t109 = -4776176;
int32_t t110 = 2;
static uint8_t x552 = 7U;
static uint8_t x553 = UINT8_MAX;
static uint64_t x557 = UINT64_MAX;
volatile int32_t t115 = -3442295;
int8_t x571 = -1;
static volatile int8_t x576 = 1;
uint32_t x580 = 51551U;
int32_t t118 = -1653;
static int8_t x583 = INT8_MIN;
uint32_t x587 = UINT32_MAX;
int32_t x600 = -1;
static int16_t x602 = 4774;
int16_t x607 = INT16_MIN;
static int32_t x608 = -1;
uint64_t x611 = UINT64_MAX;
int32_t x617 = INT32_MAX;
volatile uint64_t x620 = 6981003548LLU;
volatile uint32_t x634 = 51549293U;
uint64_t x640 = UINT64_MAX;
static uint8_t x642 = UINT8_MAX;
int32_t x650 = INT32_MAX;
volatile int32_t x652 = INT32_MAX;
int16_t x654 = -1;
uint8_t x664 = 1U;
static volatile int32_t x671 = INT32_MIN;
int32_t t135 = 1;
volatile uint16_t x676 = 15U;
static volatile int32_t x698 = -108923419;
static int32_t x699 = -35083;
int32_t x700 = -1;
int16_t x709 = INT16_MAX;
uint8_t x710 = UINT8_MAX;
static volatile int64_t x711 = -1LL;
uint8_t x714 = UINT8_MAX;
int64_t x718 = INT64_MIN;
int32_t t143 = -289349384;
static int32_t t144 = -65734246;
int64_t x737 = INT64_MAX;
volatile int16_t x748 = -1;
int32_t t149 = -30977098;
volatile int32_t t151 = 7;
int16_t x773 = INT16_MAX;
volatile int32_t t153 = 70114;
uint8_t x783 = 1U;
static volatile int8_t x790 = 1;
static int32_t x832 = -248149065;
int64_t x837 = 1039321958665412542LL;
uint8_t x838 = UINT8_MAX;
static int16_t x839 = INT16_MAX;
volatile int16_t x849 = INT16_MAX;
volatile int32_t x853 = -26105797;
int32_t t165 = 3467807;
uint16_t x862 = UINT16_MAX;
uint8_t x863 = 30U;
int16_t x867 = INT16_MIN;
int32_t t167 = -1;
volatile int64_t x872 = 518LL;
int16_t x878 = -1;
int16_t x885 = -1;
volatile int32_t x886 = INT32_MAX;
uint64_t x895 = 1202041068550906485LLU;
int32_t x896 = INT32_MIN;
static int64_t x897 = INT64_MIN;
int32_t t174 = -490;
int64_t x916 = 28644235261401752LL;
uint64_t x917 = UINT64_MAX;
volatile uint16_t x922 = UINT16_MAX;
static int32_t t177 = 1;
static volatile int32_t x929 = INT32_MIN;
static int32_t x930 = -1;
int8_t x947 = -1;
int32_t t182 = 3937303;
int32_t x962 = INT32_MIN;
volatile int64_t x963 = -2285482542LL;
uint64_t x964 = 61300947845738878LLU;
uint32_t x966 = 11U;
int8_t x969 = INT8_MIN;
uint16_t x981 = 1475U;
static volatile int32_t t188 = 68867;
int8_t x986 = INT8_MIN;
int64_t x987 = -10LL;
static volatile int32_t x989 = -315692;
uint16_t x1013 = UINT16_MAX;
static uint16_t x1014 = 22U;
uint16_t x1015 = UINT16_MAX;
int64_t x1020 = -1LL;
static volatile int64_t x1023 = INT64_MIN;
uint16_t x1028 = 7U;
volatile int32_t t198 = 989503;


void f0(void) {
    	static volatile int16_t x1 = INT16_MAX;
	static int64_t x2 = -3954277505982403576LL;
	uint8_t x3 = 0U;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -30378;

    t0 = ((x1!=x2)<=(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = 11635581574594LL;
	int32_t x10 = INT32_MAX;
	volatile int8_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t1 = -225105278;

    t1 = ((x9!=x10)<=(x11*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x13 = 13U;
	int32_t x14 = -9746101;
	int16_t x16 = 36;
	static volatile int32_t t2 = 252;

    t2 = ((x13!=x14)<=(x15*x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x22 = 34;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = 1754406837530900194LLU;

    t3 = ((x21!=x22)<=(x23*x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MIN;
	uint16_t x26 = 18912U;
	uint64_t x27 = 23639943646678LLU;
	uint64_t x28 = 721677699026LLU;
	volatile int32_t t4 = 13;

    t4 = ((x25!=x26)<=(x27*x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = 466;
	static uint16_t x30 = 19U;
	int32_t t5 = -704318;

    t5 = ((x29!=x30)<=(x31*x32));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t6 = -1232928;

    t6 = ((x33!=x34)<=(x35*x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x45 = 4723551035488723562LLU;
	int16_t x46 = -1;
	volatile int32_t x47 = -26647;
	int16_t x48 = -1;
	volatile int32_t t7 = -6849418;

    t7 = ((x45!=x46)<=(x47*x48));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x50 = -8125271;
	uint8_t x51 = 50U;
	int32_t t8 = 75066600;

    t8 = ((x49!=x50)<=(x51*x52));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = -6243;
	uint8_t x58 = 15U;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t9 = -92584142;

    t9 = ((x57!=x58)<=(x59*x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x63 = -1;
	int32_t t10 = -384052;

    t10 = ((x61!=x62)<=(x63*x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x65 = UINT16_MAX;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = 125;
	static int32_t x68 = -1;
	int32_t t11 = -383;

    t11 = ((x65!=x66)<=(x67*x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x69 = 3898LL;
	int64_t x70 = -1LL;
	volatile int16_t x71 = -1;
	static uint8_t x72 = 1U;

    t12 = ((x69!=x70)<=(x71*x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	volatile int32_t t13 = 10632;

    t13 = ((x73!=x74)<=(x75*x76));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x77 = INT64_MIN;
	static int32_t x78 = INT32_MIN;
	static int32_t t14 = 1;

    t14 = ((x77!=x78)<=(x79*x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = INT32_MIN;
	static uint16_t x82 = 4U;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;
	static int32_t t15 = -140;

    t15 = ((x81!=x82)<=(x83*x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = 293495117LLU;
	uint8_t x86 = 1U;
	int16_t x87 = INT16_MAX;
	volatile int64_t x88 = -12865394552LL;

    t16 = ((x85!=x86)<=(x87*x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	static int32_t t17 = -467660802;

    t17 = ((x89!=x90)<=(x91*x92));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x93 = 175U;
	int32_t x94 = -1;
	static uint8_t x95 = 47U;
	volatile int16_t x96 = -1;
	volatile int32_t t18 = -4971;

    t18 = ((x93!=x94)<=(x95*x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = -1LL;
	uint32_t x102 = UINT32_MAX;
	uint16_t x103 = 26U;
	uint16_t x104 = 2U;
	int32_t t19 = -3697;

    t19 = ((x101!=x102)<=(x103*x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = -1382;
	int32_t t20 = -501808;

    t20 = ((x105!=x106)<=(x107*x108));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MAX;
	volatile uint32_t x112 = 207U;
	volatile int32_t t21 = -908;

    t21 = ((x109!=x110)<=(x111*x112));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;

    t22 = ((x121!=x122)<=(x123*x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x129 = INT64_MIN;
	uint64_t x131 = 1103816045655326LLU;
	int32_t t23 = 161;

    t23 = ((x129!=x130)<=(x131*x132));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x133 = INT64_MIN;
	int16_t x134 = 1;
	int64_t x135 = INT64_MAX;

    t24 = ((x133!=x134)<=(x135*x136));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x137 = 418881047570013497LLU;
	static uint16_t x138 = UINT16_MAX;
	static uint8_t x139 = 10U;
	uint32_t x140 = UINT32_MAX;
	int32_t t25 = -1769;

    t25 = ((x137!=x138)<=(x139*x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x145 = 98U;
	int8_t x146 = -1;
	volatile int64_t x147 = -1LL;
	volatile int32_t t26 = 89752;

    t26 = ((x145!=x146)<=(x147*x148));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x149 = 3U;
	uint32_t x150 = UINT32_MAX;
	volatile uint64_t x151 = 1033499954581LLU;
	int64_t x152 = INT64_MAX;
	volatile int32_t t27 = -472045455;

    t27 = ((x149!=x150)<=(x151*x152));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;

    t28 = ((x153!=x154)<=(x155*x156));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x159 = UINT64_MAX;
	int32_t t29 = 1;

    t29 = ((x157!=x158)<=(x159*x160));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x161 = 0;
	uint32_t x163 = UINT32_MAX;
	volatile int64_t x164 = -1LL;
	volatile int32_t t30 = 11176;

    t30 = ((x161!=x162)<=(x163*x164));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x165 = -596864787417LL;
	static volatile int64_t x168 = -19379272736298817LL;
	static int32_t t31 = -15353;

    t31 = ((x165!=x166)<=(x167*x168));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x169 = -3;
	int8_t x170 = 0;
	uint32_t x171 = 77U;
	volatile int32_t t32 = 94658;

    t32 = ((x169!=x170)<=(x171*x172));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x173 = 324403;
	int8_t x174 = 27;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = 907794568720735LL;
	volatile int32_t t33 = 821;

    t33 = ((x173!=x174)<=(x175*x176));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x177 = 51019572;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 67171901LLU;
	volatile uint32_t x180 = 795972751U;
	int32_t t34 = -219445;

    t34 = ((x177!=x178)<=(x179*x180));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x181 = INT32_MIN;
	uint8_t x182 = UINT8_MAX;
	uint8_t x183 = 58U;
	static volatile int32_t t35 = -1413;

    t35 = ((x181!=x182)<=(x183*x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = -1;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = -1LL;
	int8_t x192 = 38;
	int32_t t36 = -25981179;

    t36 = ((x189!=x190)<=(x191*x192));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x194 = 68170850877LL;
	int8_t x195 = -53;
	int16_t x196 = -1;
	volatile int32_t t37 = 2910;

    t37 = ((x193!=x194)<=(x195*x196));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = -14071;
	uint16_t x199 = 33U;
	int16_t x200 = -8064;
	int32_t t38 = 701;

    t38 = ((x197!=x198)<=(x199*x200));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x202 = UINT16_MAX;
	int64_t x203 = -5LL;
	int32_t t39 = 24;

    t39 = ((x201!=x202)<=(x203*x204));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x205 = INT32_MAX;
	uint16_t x206 = UINT16_MAX;
	static int16_t x207 = -247;
	uint16_t x208 = UINT16_MAX;
	static int32_t t40 = -3;

    t40 = ((x205!=x206)<=(x207*x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 27U;
	volatile int32_t x212 = 192468;

    t41 = ((x209!=x210)<=(x211*x212));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x213 = INT32_MAX;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = -1LL;
	volatile int32_t x216 = -1;
	static volatile int32_t t42 = 5;

    t42 = ((x213!=x214)<=(x215*x216));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x217 = -1LL;
	uint64_t x218 = 485589LLU;
	volatile int8_t x219 = 0;
	static volatile int64_t x220 = INT64_MIN;
	int32_t t43 = -12;

    t43 = ((x217!=x218)<=(x219*x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x221 = -10;
	int8_t x222 = -1;
	int16_t x223 = INT16_MIN;
	int32_t t44 = 15368338;

    t44 = ((x221!=x222)<=(x223*x224));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x226 = 676;
	int16_t x227 = -1;
	volatile int32_t t45 = 99607208;

    t45 = ((x225!=x226)<=(x227*x228));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x230 = -1;

    t46 = ((x229!=x230)<=(x231*x232));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x233 = UINT32_MAX;
	int64_t x234 = INT64_MAX;
	static uint32_t x235 = 31612U;
	int32_t t47 = 2993;

    t47 = ((x233!=x234)<=(x235*x236));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x237 = 16824149162747LLU;
	static int64_t x238 = -937000994877LL;
	volatile int32_t x239 = -1;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t48 = -245305;

    t48 = ((x237!=x238)<=(x239*x240));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x241 = -76;
	int16_t x242 = INT16_MAX;
	int8_t x243 = INT8_MAX;

    t49 = ((x241!=x242)<=(x243*x244));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = INT32_MIN;
	static uint16_t x250 = 3082U;
	int32_t x251 = -124348005;
	int64_t x252 = -1LL;

    t50 = ((x249!=x250)<=(x251*x252));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x257 = 4244LL;
	static volatile int32_t x258 = -74679;
	static volatile uint64_t x259 = UINT64_MAX;
	uint32_t x260 = UINT32_MAX;

    t51 = ((x257!=x258)<=(x259*x260));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x265 = -854953955021376LL;
	uint8_t x266 = UINT8_MAX;
	static uint32_t x268 = 6836743U;
	int32_t t52 = -98;

    t52 = ((x265!=x266)<=(x267*x268));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x269 = 123U;
	static int8_t x270 = INT8_MIN;
	int32_t x271 = -7;
	volatile uint64_t x272 = UINT64_MAX;

    t53 = ((x269!=x270)<=(x271*x272));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x277 = -152255;
	int32_t x278 = INT32_MIN;
	static volatile int32_t x280 = INT32_MIN;
	volatile int32_t t54 = 569976788;

    t54 = ((x277!=x278)<=(x279*x280));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	uint64_t x284 = 33LLU;
	volatile int32_t t55 = -282356;

    t55 = ((x281!=x282)<=(x283*x284));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x285 = INT64_MIN;
	uint8_t x286 = 121U;
	uint64_t x287 = 463805LLU;
	volatile int64_t x288 = INT64_MIN;
	static int32_t t56 = 248667378;

    t56 = ((x285!=x286)<=(x287*x288));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MAX;
	int16_t x291 = -3199;
	int8_t x292 = INT8_MIN;

    t57 = ((x289!=x290)<=(x291*x292));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x293 = UINT16_MAX;
	int8_t x295 = -38;
	uint64_t x296 = UINT64_MAX;
	static int32_t t58 = -9;

    t58 = ((x293!=x294)<=(x295*x296));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x299 = -1;
	int32_t x300 = -7;
	volatile int32_t t59 = -31;

    t59 = ((x297!=x298)<=(x299*x300));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x301 = -1;
	volatile uint8_t x302 = 18U;
	volatile int16_t x303 = 4;
	static uint16_t x304 = 3U;
	volatile int32_t t60 = -31;

    t60 = ((x301!=x302)<=(x303*x304));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x306 = INT8_MIN;
	int32_t x307 = -1;
	int64_t x308 = INT64_MAX;
	int32_t t61 = -27;

    t61 = ((x305!=x306)<=(x307*x308));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x309 = INT8_MIN;
	static int16_t x310 = 4176;
	int32_t x311 = 1065543;
	int32_t t62 = -1831327;

    t62 = ((x309!=x310)<=(x311*x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int32_t t63 = -9681;

    t63 = ((x313!=x314)<=(x315*x316));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x317 = UINT8_MAX;
	static int16_t x318 = -1;
	static volatile int8_t x319 = -1;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t64 = 3009964;

    t64 = ((x317!=x318)<=(x319*x320));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x322 = 1;
	uint16_t x323 = UINT16_MAX;
	uint32_t x324 = 8142U;

    t65 = ((x321!=x322)<=(x323*x324));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x325 = -6583LL;
	int16_t x326 = INT16_MAX;
	int16_t x327 = INT16_MIN;
	static uint64_t x328 = UINT64_MAX;
	int32_t t66 = -28709772;

    t66 = ((x325!=x326)<=(x327*x328));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	int64_t x331 = -1LL;
	uint8_t x332 = 3U;
	int32_t t67 = 0;

    t67 = ((x329!=x330)<=(x331*x332));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t68 = 1788018;

    t68 = ((x333!=x334)<=(x335*x336));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x337 = 24822U;
	int64_t x338 = INT64_MIN;
	int64_t x339 = -1891LL;
	uint32_t x340 = 0U;
	int32_t t69 = 7;

    t69 = ((x337!=x338)<=(x339*x340));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x345 = INT64_MAX;
	static uint8_t x346 = UINT8_MAX;
	uint64_t x347 = 310419262945837132LLU;
	uint8_t x348 = 51U;
	static volatile int32_t t70 = -10941;

    t70 = ((x345!=x346)<=(x347*x348));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x349 = -513733616195810LL;
	int64_t x350 = INT64_MIN;
	static volatile int32_t t71 = 0;

    t71 = ((x349!=x350)<=(x351*x352));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x353 = 14U;
	uint64_t x354 = 83986053042585LLU;
	int16_t x355 = -1305;
	static uint64_t x356 = 492212655LLU;
	volatile int32_t t72 = 20;

    t72 = ((x353!=x354)<=(x355*x356));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x358 = INT8_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t73 = -1235526;

    t73 = ((x357!=x358)<=(x359*x360));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x366 = 11317813097072LL;
	int8_t x367 = INT8_MAX;
	static int16_t x368 = -1;

    t74 = ((x365!=x366)<=(x367*x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = 879U;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = 5;

    t75 = ((x369!=x370)<=(x371*x372));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x374 = -1;
	static int16_t x375 = INT16_MIN;
	uint8_t x376 = 11U;

    t76 = ((x373!=x374)<=(x375*x376));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x377 = 2;
	int16_t x378 = -449;
	static int8_t x379 = INT8_MIN;
	uint32_t x380 = 43303088U;
	static volatile int32_t t77 = 5540;

    t77 = ((x377!=x378)<=(x379*x380));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = 6;
	uint32_t x384 = UINT32_MAX;
	static int32_t t78 = -20;

    t78 = ((x381!=x382)<=(x383*x384));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x385 = 13840U;
	volatile int8_t x386 = 54;
	uint16_t x387 = 8U;
	volatile int32_t t79 = -331;

    t79 = ((x385!=x386)<=(x387*x388));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x390 = 13U;
	int8_t x391 = 60;
	int16_t x392 = INT16_MAX;
	int32_t t80 = 138;

    t80 = ((x389!=x390)<=(x391*x392));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	static int64_t x399 = -1LL;
	static volatile int8_t x400 = 51;

    t81 = ((x397!=x398)<=(x399*x400));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x405 = 52444250LL;
	volatile int8_t x406 = -1;
	uint16_t x407 = 9165U;
	int64_t x408 = -1LL;

    t82 = ((x405!=x406)<=(x407*x408));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x409 = INT32_MIN;
	uint16_t x410 = 81U;
	int32_t x411 = -6593;
	volatile int32_t t83 = 2963731;

    t83 = ((x409!=x410)<=(x411*x412));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x414 = INT32_MIN;
	int8_t x415 = 5;
	static uint64_t x416 = UINT64_MAX;

    t84 = ((x413!=x414)<=(x415*x416));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x417 = 2916U;
	static int64_t x418 = -1LL;
	volatile int64_t x419 = -7LL;
	int16_t x420 = INT16_MIN;

    t85 = ((x417!=x418)<=(x419*x420));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x423 = 2922;
	static uint64_t x424 = 30LLU;
	static int32_t t86 = -46;

    t86 = ((x421!=x422)<=(x423*x424));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x425 = INT64_MAX;
	static int64_t x426 = -458785860LL;
	int16_t x427 = INT16_MIN;
	volatile int32_t t87 = 95175962;

    t87 = ((x425!=x426)<=(x427*x428));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x429 = 0;
	volatile int32_t x430 = -1;
	int64_t x431 = -533258149631LL;
	uint64_t x432 = 1431676LLU;
	int32_t t88 = 114859520;

    t88 = ((x429!=x430)<=(x431*x432));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x433 = 14U;
	int16_t x435 = INT16_MAX;
	volatile uint16_t x436 = 1146U;
	int32_t t89 = 0;

    t89 = ((x433!=x434)<=(x435*x436));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x437 = -4000175;
	volatile int16_t x438 = 0;
	uint32_t x439 = 1227U;
	uint8_t x440 = 40U;
	volatile int32_t t90 = 1046;

    t90 = ((x437!=x438)<=(x439*x440));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x445 = 452476064477133624LLU;
	int16_t x446 = -29;
	volatile uint8_t x447 = 0U;
	volatile int32_t t91 = -629278652;

    t91 = ((x445!=x446)<=(x447*x448));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x450 = 54U;
	static int16_t x451 = -1;
	uint64_t x452 = 171103124LLU;
	int32_t t92 = 3284928;

    t92 = ((x449!=x450)<=(x451*x452));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint64_t x455 = UINT64_MAX;
	uint64_t x456 = 908651429LLU;
	int32_t t93 = -13624;

    t93 = ((x453!=x454)<=(x455*x456));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x461 = INT64_MIN;
	static uint64_t x462 = 1091516LLU;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 210944U;
	int32_t t94 = 3009;

    t94 = ((x461!=x462)<=(x463*x464));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x465 = UINT64_MAX;
	int32_t x466 = -1;
	uint32_t x467 = 19U;
	int32_t t95 = 16987940;

    t95 = ((x465!=x466)<=(x467*x468));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x469 = INT8_MIN;
	int16_t x470 = INT16_MAX;
	static uint8_t x471 = 1U;
	int16_t x472 = 2688;
	int32_t t96 = -617992;

    t96 = ((x469!=x470)<=(x471*x472));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x477 = INT32_MIN;
	volatile uint8_t x478 = 1U;
	volatile uint8_t x480 = 35U;

    t97 = ((x477!=x478)<=(x479*x480));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x482 = 16427307;
	static uint16_t x483 = 1740U;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t98 = 4895270;

    t98 = ((x481!=x482)<=(x483*x484));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x485 = -3;
	static int64_t x486 = -1LL;
	volatile uint16_t x487 = 2972U;
	uint16_t x488 = 67U;
	int32_t t99 = -2285;

    t99 = ((x485!=x486)<=(x487*x488));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x493 = 1017857584175134682LL;
	static int64_t x494 = INT64_MIN;
	static int16_t x495 = INT16_MAX;
	volatile int8_t x496 = INT8_MIN;
	int32_t t100 = 46256;

    t100 = ((x493!=x494)<=(x495*x496));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x501 = INT8_MIN;
	volatile int32_t x502 = 94897150;
	volatile int32_t t101 = -547;

    t101 = ((x501!=x502)<=(x503*x504));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	int64_t x508 = -184330LL;

    t102 = ((x505!=x506)<=(x507*x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x509 = 15618;
	uint16_t x510 = 238U;
	volatile int8_t x511 = INT8_MAX;
	volatile uint32_t x512 = 3934994U;
	int32_t t103 = -372529200;

    t103 = ((x509!=x510)<=(x511*x512));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x514 = -5;
	static volatile int16_t x515 = INT16_MAX;
	int32_t t104 = -133718293;

    t104 = ((x513!=x514)<=(x515*x516));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x517 = UINT32_MAX;
	int64_t x520 = -1LL;

    t105 = ((x517!=x518)<=(x519*x520));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x521 = 6123809891LLU;
	int16_t x522 = INT16_MAX;
	static volatile int16_t x523 = INT16_MIN;

    t106 = ((x521!=x522)<=(x523*x524));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x529 = INT32_MIN;
	int32_t x530 = -1;
	int16_t x531 = INT16_MIN;
	volatile int32_t t107 = -2;

    t107 = ((x529!=x530)<=(x531*x532));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x533 = 0U;
	static int64_t x534 = -43452LL;
	uint64_t x535 = 83106100403311LLU;
	static volatile uint8_t x536 = UINT8_MAX;
	volatile int32_t t108 = 54;

    t108 = ((x533!=x534)<=(x535*x536));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x538 = INT8_MAX;
	uint32_t x539 = UINT32_MAX;
	static int16_t x540 = -234;

    t109 = ((x537!=x538)<=(x539*x540));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MIN;
	int32_t x543 = -1;
	static volatile int16_t x544 = -1;

    t110 = ((x541!=x542)<=(x543*x544));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x545 = -2;
	volatile uint64_t x546 = 85188489999874LLU;
	uint64_t x547 = UINT64_MAX;
	uint64_t x548 = UINT64_MAX;
	static int32_t t111 = -504964135;

    t111 = ((x545!=x546)<=(x547*x548));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x549 = -3711515;
	int32_t x550 = INT32_MIN;
	uint64_t x551 = UINT64_MAX;
	static int32_t t112 = -1;

    t112 = ((x549!=x550)<=(x551*x552));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x554 = 700;
	static int64_t x555 = -1663753195315LL;
	uint16_t x556 = 1U;
	volatile int32_t t113 = 3125;

    t113 = ((x553!=x554)<=(x555*x556));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x558 = INT64_MIN;
	int64_t x559 = -49444159272544925LL;
	int16_t x560 = -5;
	volatile int32_t t114 = -218882158;

    t114 = ((x557!=x558)<=(x559*x560));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x565 = 34LLU;
	uint8_t x566 = UINT8_MAX;
	volatile uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MIN;

    t115 = ((x565!=x566)<=(x567*x568));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x570 = INT16_MIN;
	volatile int16_t x572 = INT16_MIN;
	int32_t t116 = -44;

    t116 = ((x569!=x570)<=(x571*x572));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x573 = UINT8_MAX;
	uint64_t x574 = UINT64_MAX;
	int64_t x575 = 663971044849483915LL;
	volatile int32_t t117 = -229996524;

    t117 = ((x573!=x574)<=(x575*x576));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x577 = 2043928860647671988LLU;
	int8_t x578 = INT8_MAX;
	int8_t x579 = -1;

    t118 = ((x577!=x578)<=(x579*x580));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x581 = -174;
	int8_t x582 = INT8_MIN;
	uint32_t x584 = 16222186U;
	static volatile int32_t t119 = -1;

    t119 = ((x581!=x582)<=(x583*x584));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x586 = 3;
	volatile uint8_t x588 = 23U;
	static int32_t t120 = -3022654;

    t120 = ((x585!=x586)<=(x587*x588));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x593 = UINT32_MAX;
	int16_t x594 = INT16_MAX;
	int16_t x595 = -5;
	int16_t x596 = INT16_MIN;
	int32_t t121 = -19998;

    t121 = ((x593!=x594)<=(x595*x596));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	uint8_t x598 = UINT8_MAX;
	int16_t x599 = INT16_MIN;
	volatile int32_t t122 = -5197;

    t122 = ((x597!=x598)<=(x599*x600));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x601 = UINT32_MAX;
	int64_t x603 = 4763231087880807LL;
	volatile int16_t x604 = 36;
	volatile int32_t t123 = -13;

    t123 = ((x601!=x602)<=(x603*x604));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x605 = 117U;
	static int8_t x606 = INT8_MAX;
	int32_t t124 = -48289;

    t124 = ((x605!=x606)<=(x607*x608));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x609 = INT64_MIN;
	static volatile int16_t x610 = -4265;
	int32_t x612 = -95;
	volatile int32_t t125 = 42168;

    t125 = ((x609!=x610)<=(x611*x612));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x618 = 74U;
	uint32_t x619 = 207922U;
	static volatile int32_t t126 = 35757796;

    t126 = ((x617!=x618)<=(x619*x620));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x633 = 1U;
	int8_t x635 = 3;
	int64_t x636 = -24135852LL;
	static int32_t t127 = 118;

    t127 = ((x633!=x634)<=(x635*x636));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x637 = -1;
	int16_t x638 = INT16_MAX;
	static int32_t x639 = INT32_MIN;
	int32_t t128 = 69;

    t128 = ((x637!=x638)<=(x639*x640));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x641 = 1;
	int32_t x643 = -28;
	uint8_t x644 = 29U;
	static int32_t t129 = 1;

    t129 = ((x641!=x642)<=(x643*x644));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x645 = INT32_MAX;
	uint32_t x646 = UINT32_MAX;
	static int16_t x647 = INT16_MAX;
	static uint64_t x648 = UINT64_MAX;
	int32_t t130 = -514;

    t130 = ((x645!=x646)<=(x647*x648));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x649 = -338;
	uint32_t x651 = 84885U;
	static int32_t t131 = 265782479;

    t131 = ((x649!=x650)<=(x651*x652));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x653 = 1748U;
	uint64_t x655 = 26LLU;
	int32_t x656 = 2;
	volatile int32_t t132 = 27581;

    t132 = ((x653!=x654)<=(x655*x656));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x657 = 2U;
	int64_t x658 = INT64_MIN;
	int64_t x659 = 749401334LL;
	int32_t x660 = INT32_MAX;
	int32_t t133 = 1097;

    t133 = ((x657!=x658)<=(x659*x660));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x661 = INT16_MAX;
	uint16_t x662 = 3U;
	volatile int8_t x663 = 47;
	volatile int32_t t134 = -3;

    t134 = ((x661!=x662)<=(x663*x664));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x669 = 13142U;
	int16_t x670 = 5828;
	int64_t x672 = 0LL;

    t135 = ((x669!=x670)<=(x671*x672));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x673 = 4132;
	static uint32_t x674 = 4U;
	int16_t x675 = INT16_MIN;
	volatile int32_t t136 = 6975;

    t136 = ((x673!=x674)<=(x675*x676));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x689 = INT16_MIN;
	static int64_t x690 = -5082736656366LL;
	int32_t x691 = 3634;
	static int8_t x692 = -1;
	static volatile int32_t t137 = 6;

    t137 = ((x689!=x690)<=(x691*x692));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x693 = INT32_MIN;
	static int64_t x694 = INT64_MIN;
	static int64_t x695 = -1LL;
	int16_t x696 = INT16_MIN;
	int32_t t138 = -400618;

    t138 = ((x693!=x694)<=(x695*x696));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x697 = 34U;
	volatile int32_t t139 = 8021;

    t139 = ((x697!=x698)<=(x699*x700));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x701 = INT64_MIN;
	static int16_t x702 = INT16_MIN;
	uint16_t x703 = 26059U;
	int16_t x704 = 1;
	int32_t t140 = 61286;

    t140 = ((x701!=x702)<=(x703*x704));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x712 = INT16_MIN;
	int32_t t141 = -264;

    t141 = ((x709!=x710)<=(x711*x712));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x713 = INT8_MIN;
	int8_t x715 = INT8_MIN;
	static int8_t x716 = -1;
	static int32_t t142 = -1697844;

    t142 = ((x713!=x714)<=(x715*x716));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x717 = INT32_MAX;
	int16_t x719 = -1;
	uint32_t x720 = 6U;

    t143 = ((x717!=x718)<=(x719*x720));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x721 = 447125308606291LLU;
	int64_t x722 = -1LL;
	uint8_t x723 = 44U;
	int16_t x724 = -1;

    t144 = ((x721!=x722)<=(x723*x724));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x729 = UINT8_MAX;
	uint64_t x730 = 65919638129790LLU;
	int8_t x731 = 16;
	volatile int16_t x732 = INT16_MIN;
	static int32_t t145 = 1308621;

    t145 = ((x729!=x730)<=(x731*x732));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x733 = INT64_MAX;
	int16_t x734 = -1;
	volatile int64_t x735 = INT64_MAX;
	int8_t x736 = -1;
	volatile int32_t t146 = 77215059;

    t146 = ((x733!=x734)<=(x735*x736));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x738 = 7659826233077860175LLU;
	volatile int32_t x739 = 496;
	volatile int8_t x740 = INT8_MAX;
	volatile int32_t t147 = -2;

    t147 = ((x737!=x738)<=(x739*x740));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MAX;
	static uint64_t x743 = UINT64_MAX;
	static int64_t x744 = 16980265860436260LL;
	int32_t t148 = 4917316;

    t148 = ((x741!=x742)<=(x743*x744));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x745 = -16;
	uint32_t x746 = 10471898U;
	int8_t x747 = INT8_MIN;

    t149 = ((x745!=x746)<=(x747*x748));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x749 = -619;
	volatile int64_t x750 = INT64_MIN;
	volatile int16_t x751 = INT16_MIN;
	uint32_t x752 = 68U;
	volatile int32_t t150 = 5363028;

    t150 = ((x749!=x750)<=(x751*x752));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x766 = INT32_MIN;
	static int64_t x767 = -1LL;
	volatile uint16_t x768 = 52U;

    t151 = ((x765!=x766)<=(x767*x768));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x774 = 56U;
	int8_t x775 = INT8_MIN;
	uint32_t x776 = UINT32_MAX;
	int32_t t152 = 736997;

    t152 = ((x773!=x774)<=(x775*x776));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x777 = 569U;
	int16_t x778 = INT16_MAX;
	int8_t x779 = 3;
	int64_t x780 = 7725374933LL;

    t153 = ((x777!=x778)<=(x779*x780));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x781 = INT16_MAX;
	volatile int8_t x782 = 12;
	int64_t x784 = 8289256744770LL;
	volatile int32_t t154 = 2;

    t154 = ((x781!=x782)<=(x783*x784));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x789 = 0;
	static int64_t x791 = 135059LL;
	uint8_t x792 = 0U;
	int32_t t155 = -209;

    t155 = ((x789!=x790)<=(x791*x792));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x793 = INT8_MIN;
	static int32_t x794 = INT32_MIN;
	int8_t x795 = INT8_MAX;
	volatile uint64_t x796 = 4534763247227216LLU;
	int32_t t156 = -26333;

    t156 = ((x793!=x794)<=(x795*x796));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x801 = INT8_MAX;
	uint8_t x802 = 71U;
	uint16_t x803 = 24U;
	int16_t x804 = -1;
	static volatile int32_t t157 = -9;

    t157 = ((x801!=x802)<=(x803*x804));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint32_t x805 = 15U;
	int8_t x806 = INT8_MIN;
	static uint64_t x807 = UINT64_MAX;
	int32_t x808 = 297;
	int32_t t158 = -6;

    t158 = ((x805!=x806)<=(x807*x808));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x825 = INT32_MAX;
	static volatile uint32_t x826 = UINT32_MAX;
	static uint16_t x827 = 24U;
	uint8_t x828 = 13U;
	int32_t t159 = -31016;

    t159 = ((x825!=x826)<=(x827*x828));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x829 = -1;
	static int32_t x830 = 8118;
	int64_t x831 = -1LL;
	int32_t t160 = -74;

    t160 = ((x829!=x830)<=(x831*x832));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x840 = INT16_MIN;
	int32_t t161 = -1;

    t161 = ((x837!=x838)<=(x839*x840));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x845 = 93U;
	volatile int64_t x846 = INT64_MAX;
	int32_t x847 = INT32_MAX;
	static uint64_t x848 = 394702425500LLU;
	volatile int32_t t162 = -27710;

    t162 = ((x845!=x846)<=(x847*x848));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x850 = 3080U;
	int32_t x851 = INT32_MIN;
	uint32_t x852 = 341532108U;
	volatile int32_t t163 = 296;

    t163 = ((x849!=x850)<=(x851*x852));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x854 = UINT8_MAX;
	uint32_t x855 = UINT32_MAX;
	int8_t x856 = INT8_MIN;
	int32_t t164 = 11172259;

    t164 = ((x853!=x854)<=(x855*x856));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x857 = INT16_MIN;
	static uint16_t x858 = UINT16_MAX;
	int32_t x859 = -1;
	static int64_t x860 = INT64_MAX;

    t165 = ((x857!=x858)<=(x859*x860));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x861 = UINT64_MAX;
	int64_t x864 = -1LL;
	volatile int32_t t166 = 23746929;

    t166 = ((x861!=x862)<=(x863*x864));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x865 = 1;
	static volatile int16_t x866 = -45;
	uint32_t x868 = UINT32_MAX;

    t167 = ((x865!=x866)<=(x867*x868));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x869 = 1;
	uint32_t x870 = 1U;
	static uint16_t x871 = UINT16_MAX;
	static volatile int32_t t168 = 15;

    t168 = ((x869!=x870)<=(x871*x872));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x873 = INT64_MAX;
	uint64_t x874 = 6668LLU;
	uint8_t x875 = UINT8_MAX;
	int16_t x876 = INT16_MIN;
	static volatile int32_t t169 = -204316775;

    t169 = ((x873!=x874)<=(x875*x876));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x877 = -1;
	uint64_t x879 = 837582325833LLU;
	volatile int32_t x880 = -1;
	volatile int32_t t170 = 527247124;

    t170 = ((x877!=x878)<=(x879*x880));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x887 = 1U;
	volatile int8_t x888 = -14;
	int32_t t171 = 10247;

    t171 = ((x885!=x886)<=(x887*x888));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x889 = UINT16_MAX;
	volatile uint64_t x890 = 1LLU;
	uint64_t x891 = UINT64_MAX;
	int8_t x892 = INT8_MIN;
	int32_t t172 = 651365;

    t172 = ((x889!=x890)<=(x891*x892));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x893 = 12167327791858304LLU;
	uint8_t x894 = UINT8_MAX;
	int32_t t173 = 522268;

    t173 = ((x893!=x894)<=(x895*x896));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x898 = INT8_MIN;
	uint32_t x899 = UINT32_MAX;
	volatile int8_t x900 = INT8_MIN;

    t174 = ((x897!=x898)<=(x899*x900));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x913 = -1;
	uint64_t x914 = 402032612139478204LLU;
	uint8_t x915 = 41U;
	int32_t t175 = 35;

    t175 = ((x913!=x914)<=(x915*x916));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x918 = INT16_MAX;
	int16_t x919 = -373;
	volatile uint64_t x920 = 727242LLU;
	static int32_t t176 = -19626448;

    t176 = ((x917!=x918)<=(x919*x920));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x921 = INT64_MIN;
	static uint32_t x923 = UINT32_MAX;
	int64_t x924 = -6748LL;

    t177 = ((x921!=x922)<=(x923*x924));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x931 = UINT8_MAX;
	uint16_t x932 = UINT16_MAX;
	static volatile int32_t t178 = 638435;

    t178 = ((x929!=x930)<=(x931*x932));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x933 = 10608187LL;
	volatile int8_t x934 = INT8_MAX;
	uint16_t x935 = 54U;
	uint64_t x936 = 7239903036934376LLU;
	volatile int32_t t179 = -1401;

    t179 = ((x933!=x934)<=(x935*x936));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x937 = INT32_MIN;
	int8_t x938 = 23;
	int32_t x939 = -1;
	volatile uint16_t x940 = 25U;
	volatile int32_t t180 = 24247216;

    t180 = ((x937!=x938)<=(x939*x940));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x941 = 3LLU;
	int16_t x942 = INT16_MIN;
	int64_t x943 = -4333445218007LL;
	uint8_t x944 = 0U;
	volatile int32_t t181 = 719496478;

    t181 = ((x941!=x942)<=(x943*x944));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x945 = INT64_MAX;
	int32_t x946 = -61;
	int8_t x948 = -18;

    t182 = ((x945!=x946)<=(x947*x948));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x957 = UINT64_MAX;
	volatile int16_t x958 = INT16_MIN;
	int8_t x959 = INT8_MAX;
	volatile int16_t x960 = 0;
	int32_t t183 = 15954;

    t183 = ((x957!=x958)<=(x959*x960));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x961 = INT16_MIN;
	volatile int32_t t184 = 3160;

    t184 = ((x961!=x962)<=(x963*x964));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x965 = -3029316052LL;
	static int8_t x967 = INT8_MAX;
	int32_t x968 = -1;
	volatile int32_t t185 = -46144072;

    t185 = ((x965!=x966)<=(x967*x968));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x970 = INT32_MAX;
	uint32_t x971 = 3U;
	static int32_t x972 = INT32_MAX;
	volatile int32_t t186 = -3371646;

    t186 = ((x969!=x970)<=(x971*x972));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x977 = INT8_MIN;
	volatile int8_t x978 = INT8_MAX;
	uint8_t x979 = UINT8_MAX;
	int64_t x980 = 16795111085LL;
	int32_t t187 = 72;

    t187 = ((x977!=x978)<=(x979*x980));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x982 = INT32_MIN;
	int32_t x983 = -1;
	volatile int8_t x984 = INT8_MIN;

    t188 = ((x981!=x982)<=(x983*x984));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x985 = -1;
	int8_t x988 = INT8_MIN;
	volatile int32_t t189 = 285;

    t189 = ((x985!=x986)<=(x987*x988));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x990 = INT16_MAX;
	uint16_t x991 = UINT16_MAX;
	int8_t x992 = INT8_MAX;
	volatile int32_t t190 = 29;

    t190 = ((x989!=x990)<=(x991*x992));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x993 = -1LL;
	int32_t x994 = INT32_MIN;
	int64_t x995 = -50916999LL;
	static uint8_t x996 = 0U;
	int32_t t191 = -262253388;

    t191 = ((x993!=x994)<=(x995*x996));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1001 = UINT32_MAX;
	uint8_t x1002 = UINT8_MAX;
	static uint8_t x1003 = 0U;
	int16_t x1004 = 406;
	int32_t t192 = -6;

    t192 = ((x1001!=x1002)<=(x1003*x1004));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1005 = 36U;
	uint8_t x1006 = 59U;
	uint64_t x1007 = 24176LLU;
	uint32_t x1008 = 12516U;
	int32_t t193 = 159179;

    t193 = ((x1005!=x1006)<=(x1007*x1008));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1016 = -54;
	volatile int32_t t194 = -42;

    t194 = ((x1013!=x1014)<=(x1015*x1016));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1017 = INT16_MAX;
	static volatile int32_t x1018 = INT32_MAX;
	uint8_t x1019 = 78U;
	int32_t t195 = 1746;

    t195 = ((x1017!=x1018)<=(x1019*x1020));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1021 = 1196LLU;
	int64_t x1022 = INT64_MIN;
	uint64_t x1024 = 795LLU;
	int32_t t196 = -22466060;

    t196 = ((x1021!=x1022)<=(x1023*x1024));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1025 = -54;
	int8_t x1026 = INT8_MAX;
	static uint64_t x1027 = UINT64_MAX;
	volatile int32_t t197 = -163;

    t197 = ((x1025!=x1026)<=(x1027*x1028));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1029 = INT8_MAX;
	volatile int64_t x1030 = 2031515020026LL;
	static volatile int8_t x1031 = INT8_MAX;
	int8_t x1032 = -1;

    t198 = ((x1029!=x1030)<=(x1031*x1032));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1037 = 4710U;
	int64_t x1038 = INT64_MIN;
	uint32_t x1039 = UINT32_MAX;
	uint32_t x1040 = 355U;
	int32_t t199 = -3950116;

    t199 = ((x1037!=x1038)<=(x1039*x1040));

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

