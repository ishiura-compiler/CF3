
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

int8_t x6 = INT8_MIN;
static volatile int32_t t1 = 0;
int64_t x18 = -1LL;
static int32_t t4 = -14283799;
static int64_t x28 = -4635049LL;
int32_t x29 = -10;
volatile int32_t t6 = -111639215;
volatile int8_t x36 = INT8_MAX;
int32_t t7 = -14;
static uint16_t x49 = 8585U;
static uint16_t x63 = 1677U;
uint64_t x69 = 160688LLU;
int16_t x78 = 115;
int8_t x82 = INT8_MAX;
uint8_t x87 = UINT8_MAX;
uint64_t x97 = 1981LLU;
volatile uint8_t x98 = 22U;
volatile int16_t x101 = INT16_MAX;
int16_t x105 = 1;
volatile int64_t x110 = -1LL;
static int16_t x125 = INT16_MIN;
static int16_t x128 = INT16_MAX;
static uint32_t x129 = 60981U;
int16_t x131 = 1;
int32_t t24 = -536756968;
int16_t x133 = INT16_MIN;
int8_t x134 = -1;
int16_t x143 = -918;
static volatile uint16_t x150 = 1U;
int32_t t32 = -60;
int16_t x194 = INT16_MIN;
int32_t t36 = 654769;
static int8_t x210 = INT8_MAX;
int16_t x218 = -437;
int8_t x219 = INT8_MIN;
uint16_t x223 = UINT16_MAX;
uint16_t x224 = 14504U;
static uint8_t x233 = 44U;
int64_t x247 = -1LL;
volatile int32_t t44 = 342508048;
int8_t x264 = -5;
int8_t x270 = INT8_MIN;
int8_t x272 = 4;
static int32_t x274 = -46555500;
static int8_t x275 = INT8_MAX;
uint8_t x284 = 0U;
int64_t x287 = 49LL;
uint32_t x292 = 3780929U;
static volatile int32_t t53 = 969216942;
static int8_t x317 = -1;
uint32_t x321 = UINT32_MAX;
uint64_t x329 = 6497545736LLU;
static int16_t x335 = INT16_MAX;
int32_t t61 = 419996;
static uint64_t x348 = UINT64_MAX;
volatile int32_t t62 = -767;
int16_t x349 = INT16_MAX;
volatile int32_t t63 = 35264482;
uint16_t x356 = 1U;
volatile int32_t t64 = -6952230;
static uint64_t x359 = 40170357402358LLU;
int32_t x365 = 88458;
int8_t x367 = -1;
volatile int32_t t66 = -7219;
volatile int16_t x370 = INT16_MAX;
volatile uint16_t x374 = 7105U;
int16_t x397 = -89;
uint16_t x404 = 17U;
int16_t x407 = INT16_MAX;
int64_t x408 = -108717619585781LL;
uint64_t x411 = UINT64_MAX;
int8_t x413 = INT8_MIN;
int8_t x418 = 45;
volatile int32_t t76 = 3742534;
volatile uint32_t x421 = 671U;
volatile int8_t x425 = INT8_MIN;
int8_t x429 = INT8_MAX;
uint32_t x430 = 195737632U;
static int64_t x431 = INT64_MIN;
static uint64_t x441 = 7276973468413382195LLU;
uint8_t x443 = 74U;
int16_t x445 = 14594;
int16_t x454 = -1;
int16_t x456 = -1;
int64_t x473 = -12510412LL;
static int32_t x474 = INT32_MAX;
volatile uint32_t x477 = UINT32_MAX;
uint64_t x482 = 429495763814462LLU;
uint16_t x486 = UINT16_MAX;
volatile int32_t t90 = 2099;
int32_t x492 = INT32_MIN;
uint8_t x493 = UINT8_MAX;
static uint16_t x497 = 1914U;
int32_t t93 = 1816;
volatile int64_t x502 = 789912LL;
static uint8_t x522 = UINT8_MAX;
int8_t x528 = -2;
volatile int32_t t98 = 3208416;
int64_t x539 = 14314161939559752LL;
int8_t x540 = -14;
int8_t x559 = INT8_MAX;
volatile int32_t t102 = 606446171;
int8_t x582 = INT8_MAX;
static int32_t x589 = INT32_MAX;
int16_t x596 = INT16_MIN;
int32_t t110 = -19672348;
static int64_t x605 = -543677161191LL;
volatile int16_t x613 = 1;
uint64_t x640 = 2LLU;
int8_t x652 = INT8_MIN;
volatile int32_t t119 = 120;
int64_t x664 = -1LL;
int32_t x668 = INT32_MIN;
volatile uint16_t x673 = 1647U;
int32_t t122 = -1092635;
volatile int32_t t124 = 339967;
int32_t t126 = 21094331;
int16_t x703 = INT16_MIN;
static int64_t x730 = -1LL;
static int32_t x731 = 1770929;
uint64_t x732 = UINT64_MAX;
int32_t t130 = -61166;
uint16_t x747 = UINT16_MAX;
int32_t t136 = 0;
int32_t x764 = INT32_MIN;
volatile int32_t t137 = 3048878;
volatile int16_t x767 = -1;
uint32_t x768 = 11U;
int32_t x776 = INT32_MIN;
static uint8_t x788 = 49U;
int16_t x809 = -254;
static volatile int16_t x810 = 2;
int64_t x811 = -196711516303594LL;
volatile uint32_t x822 = UINT32_MAX;
uint8_t x823 = 0U;
int16_t x842 = -2830;
static volatile uint8_t x844 = 5U;
uint8_t x851 = 6U;
volatile int16_t x864 = 247;
uint16_t x868 = 29U;
static volatile int64_t x874 = INT64_MIN;
int16_t x879 = INT16_MIN;
uint16_t x884 = 221U;
static uint64_t x890 = 6796829598LLU;
int8_t x891 = INT8_MIN;
int16_t x894 = INT16_MIN;
int32_t t161 = -4054;
volatile uint16_t x900 = UINT16_MAX;
volatile int32_t x903 = -1;
volatile uint64_t x904 = 2828912LLU;
static int32_t x912 = INT32_MIN;
static volatile int32_t t164 = 18488121;
uint8_t x914 = 47U;
int16_t x917 = INT16_MIN;
volatile int32_t t168 = -1;
int32_t x944 = -1;
static int32_t t169 = -1;
static volatile int32_t t171 = -2442622;
static int32_t x958 = -1;
static int64_t x961 = -1LL;
int64_t x965 = -119841367LL;
int64_t x966 = -1LL;
int64_t x979 = 53951045212800LL;
volatile int32_t t178 = 244;
int16_t x985 = INT16_MIN;
static volatile int32_t x988 = INT32_MIN;
int8_t x992 = INT8_MIN;
int16_t x997 = -1;
volatile int32_t t182 = 9626126;
int8_t x1003 = INT8_MAX;
volatile int32_t t183 = -52284;
volatile int8_t x1021 = INT8_MAX;
static volatile int32_t t186 = -8;
static uint32_t x1033 = 655827U;
int16_t x1037 = INT16_MIN;
static volatile int16_t x1038 = -6;
volatile int64_t x1045 = -1LL;
int32_t x1048 = -3286;
int32_t t192 = 7346;
uint8_t x1053 = 3U;
static int8_t x1054 = -1;
static int32_t x1056 = INT32_MAX;
volatile int32_t t193 = 33710771;
volatile int16_t x1065 = INT16_MIN;
uint32_t x1082 = 464433574U;
uint32_t x1083 = 271U;
static volatile int32_t t197 = -26632;
uint8_t x1087 = 21U;
volatile int32_t t198 = 10089239;


void f0(void) {
    	uint8_t x1 = 10U;
	static uint16_t x2 = UINT16_MAX;
	static int64_t x3 = 5077263LL;
	static int32_t x4 = 37469;
	volatile int32_t t0 = 1;

    t0 = ((x1*x2)>(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 696U;
	uint8_t x7 = 37U;
	int8_t x8 = INT8_MIN;

    t1 = ((x5*x6)>(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MIN;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 25678;

    t2 = ((x9*x10)>(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = 42;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = 1;
	int32_t t3 = -58;

    t3 = ((x17*x18)>(x19!=x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	uint8_t x22 = 0U;
	int64_t x23 = INT64_MAX;
	int64_t x24 = -3248676945772690LL;

    t4 = ((x21*x22)>(x23!=x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 66597875615LLU;
	int8_t x26 = INT8_MAX;
	static int32_t x27 = INT32_MIN;
	int32_t t5 = -91;

    t5 = ((x25*x26)>(x27!=x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x30 = INT8_MAX;
	int32_t x31 = -1;
	int32_t x32 = 957323;

    t6 = ((x29*x30)>(x31!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 38LLU;
	int32_t x34 = -3261;
	volatile uint64_t x35 = 5182497344378477LLU;

    t7 = ((x33*x34)>(x35!=x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x50 = -1LL;
	int8_t x51 = INT8_MIN;
	static volatile int16_t x52 = -5207;
	int32_t t8 = 4246009;

    t8 = ((x49*x50)>(x51!=x52));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x61 = 12U;
	int32_t x62 = -1;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t9 = 72;

    t9 = ((x61*x62)>(x63!=x64));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x65 = 64461567LLU;
	static uint16_t x66 = UINT16_MAX;
	volatile uint8_t x67 = 3U;
	int16_t x68 = 2;
	int32_t t10 = -11260;

    t10 = ((x65*x66)>(x67!=x68));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x70 = 134794260U;
	uint8_t x71 = 1U;
	uint8_t x72 = UINT8_MAX;
	int32_t t11 = -2223;

    t11 = ((x69*x70)>(x71!=x72));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x77 = 10;
	int32_t x79 = INT32_MAX;
	int64_t x80 = INT64_MAX;
	int32_t t12 = -2409312;

    t12 = ((x77*x78)>(x79!=x80));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x81 = INT16_MIN;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t13 = -919155;

    t13 = ((x81*x82)>(x83!=x84));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x85 = 468259828688439LLU;
	volatile int8_t x86 = INT8_MIN;
	volatile uint8_t x88 = 27U;
	int32_t t14 = -30057;

    t14 = ((x85*x86)>(x87!=x88));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x89 = -1;
	static volatile uint8_t x90 = 0U;
	uint32_t x91 = 263986111U;
	int32_t x92 = -1;
	int32_t t15 = 7937753;

    t15 = ((x89*x90)>(x91!=x92));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x93 = -1LL;
	uint32_t x94 = 214U;
	volatile uint8_t x95 = UINT8_MAX;
	int64_t x96 = 1LL;
	static volatile int32_t t16 = -724705;

    t16 = ((x93*x94)>(x95!=x96));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x99 = INT64_MIN;
	static uint32_t x100 = UINT32_MAX;
	int32_t t17 = -443425388;

    t17 = ((x97*x98)>(x99!=x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x102 = -27;
	int32_t x103 = INT32_MIN;
	static uint8_t x104 = UINT8_MAX;
	int32_t t18 = -2;

    t18 = ((x101*x102)>(x103!=x104));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x106 = 643108391U;
	int64_t x107 = INT64_MIN;
	uint32_t x108 = UINT32_MAX;
	int32_t t19 = 294504;

    t19 = ((x105*x106)>(x107!=x108));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x109 = -1LL;
	static int64_t x111 = -86742906960LL;
	uint8_t x112 = 17U;
	static volatile int32_t t20 = -4110666;

    t20 = ((x109*x110)>(x111!=x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = 10U;
	volatile int32_t x119 = INT32_MAX;
	volatile int32_t x120 = INT32_MIN;
	int32_t t21 = 35;

    t21 = ((x117*x118)>(x119!=x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x121 = -2;
	uint64_t x122 = UINT64_MAX;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t22 = -716790;

    t22 = ((x121*x122)>(x123!=x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x126 = 1;
	static int64_t x127 = INT64_MAX;
	volatile int32_t t23 = 0;

    t23 = ((x125*x126)>(x127!=x128));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x130 = 17263654710729LLU;
	volatile uint32_t x132 = UINT32_MAX;

    t24 = ((x129*x130)>(x131!=x132));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x135 = INT16_MIN;
	static uint32_t x136 = UINT32_MAX;
	static volatile int32_t t25 = -12103;

    t25 = ((x133*x134)>(x135!=x136));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x137 = 4519U;
	static volatile int32_t x138 = 205;
	uint32_t x139 = 4U;
	volatile uint32_t x140 = 179U;
	volatile int32_t t26 = 249905000;

    t26 = ((x137*x138)>(x139!=x140));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	int32_t x144 = 1710;
	volatile int32_t t27 = -2327976;

    t27 = ((x141*x142)>(x143!=x144));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x149 = 6;
	static int16_t x151 = INT16_MIN;
	volatile int64_t x152 = -903120736821711625LL;
	volatile int32_t t28 = -10329;

    t28 = ((x149*x150)>(x151!=x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x157 = INT32_MAX;
	uint32_t x158 = 3268U;
	uint32_t x159 = 218472855U;
	int16_t x160 = -819;
	int32_t t29 = -20;

    t29 = ((x157*x158)>(x159!=x160));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x161 = UINT16_MAX;
	int32_t x162 = 0;
	int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int32_t t30 = -5870;

    t30 = ((x161*x162)>(x163!=x164));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x165 = 57U;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 1039850U;
	uint16_t x168 = 82U;
	volatile int32_t t31 = -607180;

    t31 = ((x165*x166)>(x167!=x168));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x169 = -13;
	int8_t x170 = INT8_MAX;
	static int32_t x171 = -124;
	int32_t x172 = INT32_MIN;

    t32 = ((x169*x170)>(x171!=x172));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x173 = 38436471383873795LLU;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = 483431211309174LL;
	int32_t t33 = -374;

    t33 = ((x173*x174)>(x175!=x176));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x177 = -88659874815082LL;
	uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -439990;
	static int32_t t34 = 23911;

    t34 = ((x177*x178)>(x179!=x180));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = -17;
	int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 4U;
	volatile int32_t t35 = -56;

    t35 = ((x189*x190)>(x191!=x192));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x193 = -1;
	volatile int64_t x195 = INT64_MAX;
	volatile int64_t x196 = INT64_MIN;

    t36 = ((x193*x194)>(x195!=x196));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x209 = -8740;
	volatile int64_t x211 = -1669LL;
	static uint16_t x212 = UINT16_MAX;
	volatile int32_t t37 = 284481148;

    t37 = ((x209*x210)>(x211!=x212));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x217 = UINT32_MAX;
	static int64_t x220 = INT64_MIN;
	int32_t t38 = 113639;

    t38 = ((x217*x218)>(x219!=x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = 16031;
	int8_t x222 = INT8_MIN;
	int32_t t39 = -56;

    t39 = ((x221*x222)>(x223!=x224));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x225 = 0U;
	uint8_t x226 = 1U;
	static int64_t x227 = INT64_MIN;
	int64_t x228 = -2LL;
	int32_t t40 = 61674;

    t40 = ((x225*x226)>(x227!=x228));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x229 = 27;
	int32_t x230 = -63;
	static volatile int16_t x231 = -356;
	uint64_t x232 = 4121662625518LLU;
	volatile int32_t t41 = 37214;

    t41 = ((x229*x230)>(x231!=x232));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x234 = 7433658U;
	volatile int16_t x235 = INT16_MIN;
	uint64_t x236 = 692097706169690LLU;
	volatile int32_t t42 = 213;

    t42 = ((x233*x234)>(x235!=x236));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x241 = 1U;
	static uint16_t x242 = 13599U;
	static int8_t x243 = INT8_MIN;
	static int64_t x244 = INT64_MIN;
	volatile int32_t t43 = -137811727;

    t43 = ((x241*x242)>(x243!=x244));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x245 = 5U;
	int8_t x246 = 0;
	static volatile uint16_t x248 = 1334U;

    t44 = ((x245*x246)>(x247!=x248));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x253 = INT8_MIN;
	int32_t x254 = 45756;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t45 = -19375229;

    t45 = ((x253*x254)>(x255!=x256));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x257 = 710258;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = -1;
	int32_t x260 = 2;
	volatile int32_t t46 = -1;

    t46 = ((x257*x258)>(x259!=x260));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x261 = 3590;
	static uint16_t x262 = 7345U;
	int8_t x263 = -6;
	static int32_t t47 = -6803;

    t47 = ((x261*x262)>(x263!=x264));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x265 = 15U;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = -1;
	int32_t t48 = -275493221;

    t48 = ((x265*x266)>(x267!=x268));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x269 = -30;
	int32_t x271 = INT32_MAX;
	volatile int32_t t49 = 1;

    t49 = ((x269*x270)>(x271!=x272));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x273 = 2U;
	int16_t x276 = -1;
	static int32_t t50 = -694;

    t50 = ((x273*x274)>(x275!=x276));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;
	static volatile int32_t t51 = -120736;

    t51 = ((x281*x282)>(x283!=x284));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x285 = 0;
	uint64_t x286 = UINT64_MAX;
	int16_t x288 = -1;
	int32_t t52 = -818;

    t52 = ((x285*x286)>(x287!=x288));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x289 = 1528473U;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = INT32_MAX;

    t53 = ((x289*x290)>(x291!=x292));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	uint64_t x296 = 457893656334207064LLU;
	int32_t t54 = 681060;

    t54 = ((x293*x294)>(x295!=x296));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	int32_t x298 = -144389797;
	uint32_t x299 = 225270762U;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t55 = 478918;

    t55 = ((x297*x298)>(x299!=x300));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x301 = -1;
	volatile int64_t x302 = -63218065440163789LL;
	int32_t x303 = -1;
	volatile int32_t x304 = -15;
	static int32_t t56 = 140827;

    t56 = ((x301*x302)>(x303!=x304));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x318 = 64;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t57 = 12;

    t57 = ((x317*x318)>(x319!=x320));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x322 = -2LL;
	int8_t x323 = -8;
	uint64_t x324 = 31216672LLU;
	int32_t t58 = 1800974;

    t58 = ((x321*x322)>(x323!=x324));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x330 = INT64_MIN;
	int32_t x331 = -447790;
	uint64_t x332 = 236247268924LLU;
	volatile int32_t t59 = -67310486;

    t59 = ((x329*x330)>(x331!=x332));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x333 = 288U;
	uint8_t x334 = 117U;
	int64_t x336 = INT64_MIN;
	static int32_t t60 = -65;

    t60 = ((x333*x334)>(x335!=x336));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x337 = 48232369U;
	int8_t x338 = 28;
	volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = UINT16_MAX;

    t61 = ((x337*x338)>(x339!=x340));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile int32_t x346 = -1;
	int8_t x347 = -3;

    t62 = ((x345*x346)>(x347!=x348));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;

    t63 = ((x349*x350)>(x351!=x352));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x353 = -2;
	static uint16_t x354 = 11U;
	int32_t x355 = INT32_MAX;

    t64 = ((x353*x354)>(x355!=x356));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x357 = -1;
	int8_t x358 = INT8_MIN;
	uint32_t x360 = 2166U;
	volatile int32_t t65 = -11;

    t65 = ((x357*x358)>(x359!=x360));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x366 = 2056;
	int8_t x368 = INT8_MIN;

    t66 = ((x365*x366)>(x367!=x368));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x369 = -1;
	static int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t67 = -234011947;

    t67 = ((x369*x370)>(x371!=x372));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x373 = -1;
	int8_t x375 = -1;
	int64_t x376 = -1LL;
	int32_t t68 = 214;

    t68 = ((x373*x374)>(x375!=x376));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x389 = 2528LLU;
	uint8_t x390 = 2U;
	volatile int64_t x391 = -1836LL;
	int16_t x392 = INT16_MIN;
	int32_t t69 = 103;

    t69 = ((x389*x390)>(x391!=x392));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x393 = 81;
	int16_t x394 = 154;
	int8_t x395 = INT8_MIN;
	uint32_t x396 = 965U;
	int32_t t70 = 8715;

    t70 = ((x393*x394)>(x395!=x396));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x398 = 84;
	int16_t x399 = -1;
	static uint64_t x400 = UINT64_MAX;
	volatile int32_t t71 = -5;

    t71 = ((x397*x398)>(x399!=x400));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	int8_t x403 = -1;
	volatile int32_t t72 = 825450105;

    t72 = ((x401*x402)>(x403!=x404));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x405 = INT64_MIN;
	uint64_t x406 = 120LLU;
	volatile int32_t t73 = 3;

    t73 = ((x405*x406)>(x407!=x408));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x409 = 23193287LLU;
	int16_t x410 = -1;
	int64_t x412 = INT64_MIN;
	volatile int32_t t74 = 0;

    t74 = ((x409*x410)>(x411!=x412));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x414 = 82412U;
	int8_t x415 = -2;
	uint64_t x416 = 3762205LLU;
	volatile int32_t t75 = -7663;

    t75 = ((x413*x414)>(x415!=x416));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x417 = 54;
	int16_t x419 = -1;
	int64_t x420 = INT64_MAX;

    t76 = ((x417*x418)>(x419!=x420));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x422 = INT8_MAX;
	uint16_t x423 = 36U;
	int8_t x424 = INT8_MIN;
	int32_t t77 = 27;

    t77 = ((x421*x422)>(x423!=x424));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x426 = INT16_MAX;
	volatile uint8_t x427 = 121U;
	volatile uint64_t x428 = 29744LLU;
	volatile int32_t t78 = 26776;

    t78 = ((x425*x426)>(x427!=x428));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x432 = 42U;
	int32_t t79 = 189;

    t79 = ((x429*x430)>(x431!=x432));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x437 = INT32_MIN;
	static int64_t x438 = -1LL;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MIN;
	static int32_t t80 = 3;

    t80 = ((x437*x438)>(x439!=x440));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x442 = 5U;
	static uint8_t x444 = 26U;
	int32_t t81 = 47235;

    t81 = ((x441*x442)>(x443!=x444));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;
	int64_t x448 = INT64_MIN;
	volatile int32_t t82 = -10;

    t82 = ((x445*x446)>(x447!=x448));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x449 = 55479851LLU;
	int64_t x450 = -1LL;
	static uint8_t x451 = 90U;
	static int64_t x452 = INT64_MIN;
	static int32_t t83 = 0;

    t83 = ((x449*x450)>(x451!=x452));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x453 = UINT8_MAX;
	int8_t x455 = INT8_MAX;
	static int32_t t84 = -1;

    t84 = ((x453*x454)>(x455!=x456));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x465 = -1;
	int8_t x466 = -51;
	int32_t x467 = -1;
	volatile uint64_t x468 = 5LLU;
	volatile int32_t t85 = 15;

    t85 = ((x465*x466)>(x467!=x468));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x469 = -1;
	static uint8_t x470 = 1U;
	int64_t x471 = -1LL;
	int64_t x472 = INT64_MIN;
	int32_t t86 = 1;

    t86 = ((x469*x470)>(x471!=x472));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x475 = 69U;
	int8_t x476 = -1;
	volatile int32_t t87 = -1;

    t87 = ((x473*x474)>(x475!=x476));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x478 = -1;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MAX;
	int32_t t88 = 28735471;

    t88 = ((x477*x478)>(x479!=x480));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	int32_t x483 = -1;
	uint32_t x484 = 95517U;
	volatile int32_t t89 = 10560;

    t89 = ((x481*x482)>(x483!=x484));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x485 = 1;
	int32_t x487 = INT32_MIN;
	int64_t x488 = 536236101508674LL;

    t90 = ((x485*x486)>(x487!=x488));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x489 = INT64_MAX;
	int8_t x490 = 1;
	int16_t x491 = -143;
	volatile int32_t t91 = 50263805;

    t91 = ((x489*x490)>(x491!=x492));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x494 = INT16_MAX;
	int32_t x495 = -1;
	int64_t x496 = 5LL;
	volatile int32_t t92 = -421;

    t92 = ((x493*x494)>(x495!=x496));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x498 = 7U;
	static volatile int16_t x499 = INT16_MAX;
	uint16_t x500 = UINT16_MAX;

    t93 = ((x497*x498)>(x499!=x500));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x501 = 52U;
	uint16_t x503 = UINT16_MAX;
	uint64_t x504 = 494912054052978927LLU;
	volatile int32_t t94 = 35075652;

    t94 = ((x501*x502)>(x503!=x504));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x505 = INT64_MIN;
	int16_t x506 = 0;
	uint8_t x507 = UINT8_MAX;
	int32_t x508 = -902;
	int32_t t95 = 25557354;

    t95 = ((x505*x506)>(x507!=x508));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x513 = 0;
	uint32_t x514 = 26498186U;
	volatile uint8_t x515 = 14U;
	int64_t x516 = 542815210693157800LL;
	int32_t t96 = 4938;

    t96 = ((x513*x514)>(x515!=x516));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x521 = -1;
	uint16_t x523 = UINT16_MAX;
	volatile int32_t x524 = 261;
	int32_t t97 = -5799780;

    t97 = ((x521*x522)>(x523!=x524));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x525 = 222;
	int64_t x526 = -1LL;
	static uint16_t x527 = 39U;

    t98 = ((x525*x526)>(x527!=x528));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = INT64_MAX;
	volatile int32_t t99 = 1826721;

    t99 = ((x537*x538)>(x539!=x540));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x545 = UINT64_MAX;
	int8_t x546 = INT8_MIN;
	volatile int16_t x547 = INT16_MIN;
	static int8_t x548 = -1;
	static volatile int32_t t100 = 1;

    t100 = ((x545*x546)>(x547!=x548));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x553 = 42958249340817258LLU;
	int32_t x554 = -593939;
	int32_t x555 = 0;
	int16_t x556 = 1650;
	volatile int32_t t101 = 28;

    t101 = ((x553*x554)>(x555!=x556));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x557 = 1921LLU;
	volatile uint64_t x558 = 21197219LLU;
	uint32_t x560 = 98220369U;

    t102 = ((x557*x558)>(x559!=x560));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x561 = -1;
	uint16_t x562 = 1023U;
	uint32_t x563 = 5U;
	int16_t x564 = INT16_MIN;
	volatile int32_t t103 = 136;

    t103 = ((x561*x562)>(x563!=x564));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x565 = INT8_MIN;
	int8_t x566 = INT8_MIN;
	int64_t x567 = INT64_MIN;
	volatile int16_t x568 = INT16_MIN;
	int32_t t104 = 1271203;

    t104 = ((x565*x566)>(x567!=x568));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x577 = 124408872LLU;
	static volatile int16_t x578 = 0;
	volatile int16_t x579 = -1;
	volatile int16_t x580 = INT16_MIN;
	int32_t t105 = 112318;

    t105 = ((x577*x578)>(x579!=x580));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x581 = INT8_MIN;
	uint64_t x583 = 8180098771997LLU;
	static int64_t x584 = INT64_MIN;
	volatile int32_t t106 = -3;

    t106 = ((x581*x582)>(x583!=x584));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x585 = -1LL;
	volatile int32_t x586 = -1;
	int16_t x587 = 56;
	volatile int32_t x588 = -13047;
	static int32_t t107 = 9349;

    t107 = ((x585*x586)>(x587!=x588));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x590 = 1;
	uint64_t x591 = UINT64_MAX;
	uint16_t x592 = 593U;
	volatile int32_t t108 = -1;

    t108 = ((x589*x590)>(x591!=x592));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x593 = 0;
	int64_t x594 = -436LL;
	int64_t x595 = INT64_MIN;
	int32_t t109 = 15255;

    t109 = ((x593*x594)>(x595!=x596));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x597 = -26190;
	uint64_t x598 = 1366LLU;
	uint64_t x599 = 1533671481313LLU;
	int16_t x600 = -1;

    t110 = ((x597*x598)>(x599!=x600));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x601 = -1;
	uint64_t x602 = 850LLU;
	int64_t x603 = INT64_MIN;
	volatile int64_t x604 = -1LL;
	int32_t t111 = -298366069;

    t111 = ((x601*x602)>(x603!=x604));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x606 = INT16_MIN;
	int32_t x607 = 93385;
	int32_t x608 = -123966;
	volatile int32_t t112 = 8;

    t112 = ((x605*x606)>(x607!=x608));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x614 = -149;
	uint32_t x615 = 51072U;
	static volatile int16_t x616 = INT16_MAX;
	volatile int32_t t113 = -7353;

    t113 = ((x613*x614)>(x615!=x616));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x617 = 3U;
	int64_t x618 = -1LL;
	int16_t x619 = 137;
	static uint16_t x620 = UINT16_MAX;
	volatile int32_t t114 = -452739754;

    t114 = ((x617*x618)>(x619!=x620));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x625 = 2U;
	uint64_t x626 = 7770548439LLU;
	uint16_t x627 = 2U;
	volatile uint16_t x628 = 169U;
	volatile int32_t t115 = 26280;

    t115 = ((x625*x626)>(x627!=x628));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x633 = 394221321U;
	int8_t x634 = -6;
	static uint8_t x635 = 27U;
	uint16_t x636 = 13133U;
	static volatile int32_t t116 = 239866;

    t116 = ((x633*x634)>(x635!=x636));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x637 = INT64_MAX;
	int32_t x638 = -1;
	int64_t x639 = 862153643777LL;
	volatile int32_t t117 = -93;

    t117 = ((x637*x638)>(x639!=x640));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x649 = INT8_MAX;
	uint16_t x650 = 17U;
	volatile uint64_t x651 = UINT64_MAX;
	volatile int32_t t118 = 2;

    t118 = ((x649*x650)>(x651!=x652));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x657 = 2;
	static uint8_t x658 = UINT8_MAX;
	int64_t x659 = 443776048199059705LL;
	static int64_t x660 = -49704435LL;

    t119 = ((x657*x658)>(x659!=x660));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x661 = UINT32_MAX;
	int32_t x662 = -1;
	int8_t x663 = INT8_MAX;
	volatile int32_t t120 = -17;

    t120 = ((x661*x662)>(x663!=x664));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x665 = -1;
	static uint64_t x666 = UINT64_MAX;
	static int16_t x667 = -7;
	int32_t t121 = -53;

    t121 = ((x665*x666)>(x667!=x668));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x674 = INT16_MAX;
	static int64_t x675 = INT64_MAX;
	int16_t x676 = 7309;

    t122 = ((x673*x674)>(x675!=x676));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x677 = UINT8_MAX;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -2967721664139265LL;
	uint32_t x680 = UINT32_MAX;
	static volatile int32_t t123 = 235565642;

    t123 = ((x677*x678)>(x679!=x680));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x681 = -909968441;
	static volatile int64_t x682 = -1LL;
	int16_t x683 = -1;
	volatile int8_t x684 = INT8_MIN;

    t124 = ((x681*x682)>(x683!=x684));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x685 = 39U;
	uint8_t x686 = UINT8_MAX;
	uint64_t x687 = 699886764988429506LLU;
	int64_t x688 = INT64_MIN;
	int32_t t125 = 340;

    t125 = ((x685*x686)>(x687!=x688));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x697 = -1;
	static volatile int8_t x698 = 1;
	volatile uint32_t x699 = UINT32_MAX;
	uint8_t x700 = 45U;

    t126 = ((x697*x698)>(x699!=x700));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x701 = -1;
	uint8_t x702 = 100U;
	uint32_t x704 = 371U;
	static volatile int32_t t127 = -28;

    t127 = ((x701*x702)>(x703!=x704));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x705 = INT8_MIN;
	uint64_t x706 = 386427538210912LLU;
	int64_t x707 = INT64_MAX;
	static uint32_t x708 = 162U;
	static volatile int32_t t128 = -12;

    t128 = ((x705*x706)>(x707!=x708));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x721 = -1;
	int16_t x722 = -1;
	volatile uint64_t x723 = UINT64_MAX;
	uint64_t x724 = 1128289193912LLU;
	volatile int32_t t129 = -3935;

    t129 = ((x721*x722)>(x723!=x724));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x729 = 0;

    t130 = ((x729*x730)>(x731!=x732));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x733 = 178391373759LLU;
	static int32_t x734 = 1103;
	volatile int8_t x735 = -1;
	static int32_t x736 = INT32_MIN;
	int32_t t131 = 115;

    t131 = ((x733*x734)>(x735!=x736));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x741 = INT8_MAX;
	int16_t x742 = INT16_MIN;
	static int32_t x743 = INT32_MIN;
	uint64_t x744 = 20499988034LLU;
	volatile int32_t t132 = -109979;

    t132 = ((x741*x742)>(x743!=x744));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	uint8_t x746 = 124U;
	int32_t x748 = -1;
	int32_t t133 = 0;

    t133 = ((x745*x746)>(x747!=x748));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x749 = -1LL;
	volatile int16_t x750 = -1;
	int64_t x751 = INT64_MAX;
	static uint32_t x752 = UINT32_MAX;
	int32_t t134 = -17402;

    t134 = ((x749*x750)>(x751!=x752));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x753 = 27077LLU;
	int8_t x754 = 10;
	int32_t x755 = INT32_MIN;
	int8_t x756 = 3;
	volatile int32_t t135 = -3735055;

    t135 = ((x753*x754)>(x755!=x756));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x757 = -15203;
	uint32_t x758 = 86056U;
	static volatile int8_t x759 = INT8_MAX;
	static int32_t x760 = INT32_MIN;

    t136 = ((x757*x758)>(x759!=x760));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MAX;
	uint16_t x763 = UINT16_MAX;

    t137 = ((x761*x762)>(x763!=x764));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x765 = 16U;
	uint16_t x766 = 785U;
	int32_t t138 = 34;

    t138 = ((x765*x766)>(x767!=x768));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x769 = 8145814232020773LL;
	uint64_t x770 = UINT64_MAX;
	uint8_t x771 = 35U;
	uint8_t x772 = 31U;
	volatile int32_t t139 = -2045045;

    t139 = ((x769*x770)>(x771!=x772));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x773 = 16U;
	int16_t x774 = -74;
	volatile int8_t x775 = -1;
	volatile int32_t t140 = 1;

    t140 = ((x773*x774)>(x775!=x776));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x777 = 9U;
	uint64_t x778 = 10084919468319776LLU;
	static volatile int8_t x779 = 18;
	uint8_t x780 = 1U;
	int32_t t141 = 987;

    t141 = ((x777*x778)>(x779!=x780));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x785 = INT8_MAX;
	volatile int16_t x786 = 941;
	uint16_t x787 = UINT16_MAX;
	volatile int32_t t142 = 240946;

    t142 = ((x785*x786)>(x787!=x788));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x793 = 121480U;
	static volatile int16_t x794 = -723;
	int32_t x795 = INT32_MAX;
	static int32_t x796 = INT32_MIN;
	volatile int32_t t143 = -59461610;

    t143 = ((x793*x794)>(x795!=x796));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x801 = 1034615U;
	int32_t x802 = INT32_MIN;
	static volatile uint16_t x803 = 407U;
	static uint64_t x804 = 5897728LLU;
	static volatile int32_t t144 = 11045;

    t144 = ((x801*x802)>(x803!=x804));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = INT16_MIN;
	int32_t x807 = -40;
	int64_t x808 = INT64_MIN;
	int32_t t145 = -3;

    t145 = ((x805*x806)>(x807!=x808));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x812 = INT16_MIN;
	volatile int32_t t146 = 0;

    t146 = ((x809*x810)>(x811!=x812));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x821 = 0LL;
	static volatile uint32_t x824 = UINT32_MAX;
	int32_t t147 = 108292;

    t147 = ((x821*x822)>(x823!=x824));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x825 = UINT32_MAX;
	int16_t x826 = INT16_MIN;
	uint32_t x827 = UINT32_MAX;
	int16_t x828 = 12138;
	int32_t t148 = -22;

    t148 = ((x825*x826)>(x827!=x828));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x833 = -1;
	uint32_t x834 = 2834U;
	int32_t x835 = 76;
	uint32_t x836 = UINT32_MAX;
	int32_t t149 = -36178114;

    t149 = ((x833*x834)>(x835!=x836));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x841 = 1U;
	static uint8_t x843 = UINT8_MAX;
	volatile int32_t t150 = 20510219;

    t150 = ((x841*x842)>(x843!=x844));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x845 = INT16_MAX;
	int8_t x846 = INT8_MIN;
	uint16_t x847 = UINT16_MAX;
	uint64_t x848 = 403577062LLU;
	int32_t t151 = 3023;

    t151 = ((x845*x846)>(x847!=x848));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x849 = -3;
	int16_t x850 = 335;
	volatile int8_t x852 = INT8_MIN;
	int32_t t152 = 295580307;

    t152 = ((x849*x850)>(x851!=x852));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x853 = INT16_MIN;
	int8_t x854 = INT8_MIN;
	volatile int64_t x855 = 172201835241LL;
	uint8_t x856 = UINT8_MAX;
	int32_t t153 = 38885255;

    t153 = ((x853*x854)>(x855!=x856));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x861 = -1;
	int64_t x862 = -1LL;
	int8_t x863 = 2;
	int32_t t154 = 2;

    t154 = ((x861*x862)>(x863!=x864));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x865 = INT16_MIN;
	int8_t x866 = -1;
	int32_t x867 = INT32_MIN;
	int32_t t155 = 920;

    t155 = ((x865*x866)>(x867!=x868));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x869 = INT8_MIN;
	int32_t x870 = -1;
	static uint64_t x871 = 1787016346LLU;
	int16_t x872 = -984;
	volatile int32_t t156 = -594;

    t156 = ((x869*x870)>(x871!=x872));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x873 = UINT64_MAX;
	int16_t x875 = INT16_MAX;
	int32_t x876 = INT32_MAX;
	int32_t t157 = -22611;

    t157 = ((x873*x874)>(x875!=x876));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x877 = 58316945245686LLU;
	volatile int8_t x878 = INT8_MAX;
	uint16_t x880 = 23480U;
	int32_t t158 = -174258673;

    t158 = ((x877*x878)>(x879!=x880));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x881 = INT16_MAX;
	static uint64_t x882 = UINT64_MAX;
	int8_t x883 = 1;
	static int32_t t159 = -4496;

    t159 = ((x881*x882)>(x883!=x884));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x889 = INT8_MAX;
	int8_t x892 = INT8_MIN;
	static volatile int32_t t160 = -1;

    t160 = ((x889*x890)>(x891!=x892));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x893 = 12375302035LLU;
	int16_t x895 = 12867;
	uint32_t x896 = UINT32_MAX;

    t161 = ((x893*x894)>(x895!=x896));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x897 = 15U;
	uint64_t x898 = 260199155586328LLU;
	int32_t x899 = INT32_MAX;
	volatile int32_t t162 = -59287;

    t162 = ((x897*x898)>(x899!=x900));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x901 = 820389007LLU;
	uint64_t x902 = UINT64_MAX;
	static int32_t t163 = -2472;

    t163 = ((x901*x902)>(x903!=x904));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x909 = 34068U;
	uint64_t x910 = 13LLU;
	static volatile int32_t x911 = -1;

    t164 = ((x909*x910)>(x911!=x912));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x913 = INT16_MIN;
	int8_t x915 = INT8_MIN;
	int32_t x916 = -21446;
	int32_t t165 = -63118;

    t165 = ((x913*x914)>(x915!=x916));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x918 = UINT32_MAX;
	volatile uint64_t x919 = 2085836123834288LLU;
	int16_t x920 = -12;
	volatile int32_t t166 = 251064382;

    t166 = ((x917*x918)>(x919!=x920));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x925 = INT16_MIN;
	int16_t x926 = INT16_MIN;
	volatile int8_t x927 = INT8_MIN;
	uint32_t x928 = UINT32_MAX;
	int32_t t167 = 4;

    t167 = ((x925*x926)>(x927!=x928));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x937 = 23360U;
	static int16_t x938 = 0;
	static uint8_t x939 = UINT8_MAX;
	int8_t x940 = -1;

    t168 = ((x937*x938)>(x939!=x940));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x941 = -1462;
	uint64_t x942 = UINT64_MAX;
	static uint64_t x943 = 4504129848653022235LLU;

    t169 = ((x941*x942)>(x943!=x944));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x945 = 11;
	uint16_t x946 = 1869U;
	int32_t x947 = INT32_MIN;
	int32_t x948 = -40;
	volatile int32_t t170 = 143;

    t170 = ((x945*x946)>(x947!=x948));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x953 = INT16_MIN;
	static int16_t x954 = 343;
	int16_t x955 = INT16_MIN;
	uint64_t x956 = UINT64_MAX;

    t171 = ((x953*x954)>(x955!=x956));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x957 = 30997LLU;
	int64_t x959 = 10116LL;
	int32_t x960 = -1;
	volatile int32_t t172 = 199751;

    t172 = ((x957*x958)>(x959!=x960));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x962 = 1908144U;
	uint32_t x963 = 1U;
	volatile uint16_t x964 = 26U;
	volatile int32_t t173 = 30093749;

    t173 = ((x961*x962)>(x963!=x964));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x967 = -4231;
	volatile int32_t x968 = INT32_MIN;
	int32_t t174 = 7768;

    t174 = ((x965*x966)>(x967!=x968));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x969 = 17553636LLU;
	static uint64_t x970 = 1826860650655248LLU;
	static volatile int32_t x971 = -221424597;
	static uint64_t x972 = UINT64_MAX;
	volatile int32_t t175 = 24;

    t175 = ((x969*x970)>(x971!=x972));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x973 = 91LLU;
	static uint32_t x974 = UINT32_MAX;
	int32_t x975 = INT32_MIN;
	volatile uint8_t x976 = 0U;
	volatile int32_t t176 = -417800;

    t176 = ((x973*x974)>(x975!=x976));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x977 = 255587084LL;
	int16_t x978 = INT16_MIN;
	int64_t x980 = -1LL;
	volatile int32_t t177 = -7427;

    t177 = ((x977*x978)>(x979!=x980));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x981 = INT16_MIN;
	static int32_t x982 = -3;
	int16_t x983 = -1;
	int16_t x984 = -1;

    t178 = ((x981*x982)>(x983!=x984));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x986 = INT8_MIN;
	int16_t x987 = -1;
	volatile int32_t t179 = 0;

    t179 = ((x985*x986)>(x987!=x988));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x989 = 1574;
	int32_t x990 = -1;
	int16_t x991 = INT16_MIN;
	static int32_t t180 = -60366;

    t180 = ((x989*x990)>(x991!=x992));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x993 = -65;
	uint64_t x994 = 258665357LLU;
	static volatile int32_t x995 = INT32_MAX;
	int16_t x996 = -1;
	volatile int32_t t181 = -16516539;

    t181 = ((x993*x994)>(x995!=x996));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x998 = INT32_MAX;
	uint64_t x999 = 13897391LLU;
	int64_t x1000 = INT64_MAX;

    t182 = ((x997*x998)>(x999!=x1000));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1001 = 13U;
	static int16_t x1002 = INT16_MAX;
	int32_t x1004 = 775428;

    t183 = ((x1001*x1002)>(x1003!=x1004));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1013 = INT16_MAX;
	int64_t x1014 = -58393897469008LL;
	int64_t x1015 = INT64_MAX;
	uint16_t x1016 = UINT16_MAX;
	volatile int32_t t184 = -315371598;

    t184 = ((x1013*x1014)>(x1015!=x1016));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x1017 = 94LLU;
	int64_t x1018 = -19LL;
	static uint16_t x1019 = UINT16_MAX;
	int8_t x1020 = INT8_MIN;
	int32_t t185 = 929622171;

    t185 = ((x1017*x1018)>(x1019!=x1020));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1022 = UINT32_MAX;
	static int8_t x1023 = -1;
	int16_t x1024 = 14726;

    t186 = ((x1021*x1022)>(x1023!=x1024));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1029 = 172153LLU;
	uint32_t x1030 = 2007327268U;
	uint16_t x1031 = 1135U;
	static uint8_t x1032 = 1U;
	volatile int32_t t187 = 94;

    t187 = ((x1029*x1030)>(x1031!=x1032));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1034 = INT16_MIN;
	static uint16_t x1035 = 1380U;
	int64_t x1036 = 4676160LL;
	int32_t t188 = -2781895;

    t188 = ((x1033*x1034)>(x1035!=x1036));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1039 = INT32_MIN;
	uint64_t x1040 = 24718LLU;
	volatile int32_t t189 = 6709;

    t189 = ((x1037*x1038)>(x1039!=x1040));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1041 = 0;
	int64_t x1042 = INT64_MIN;
	int16_t x1043 = INT16_MAX;
	volatile uint16_t x1044 = 14104U;
	int32_t t190 = -162861;

    t190 = ((x1041*x1042)>(x1043!=x1044));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1046 = INT16_MAX;
	int32_t x1047 = INT32_MIN;
	volatile int32_t t191 = -1;

    t191 = ((x1045*x1046)>(x1047!=x1048));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1049 = INT8_MIN;
	uint16_t x1050 = UINT16_MAX;
	uint16_t x1051 = UINT16_MAX;
	int8_t x1052 = INT8_MIN;

    t192 = ((x1049*x1050)>(x1051!=x1052));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1055 = -1;

    t193 = ((x1053*x1054)>(x1055!=x1056));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1066 = -191294LL;
	static uint16_t x1067 = 0U;
	uint8_t x1068 = 0U;
	static int32_t t194 = 0;

    t194 = ((x1065*x1066)>(x1067!=x1068));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1069 = INT32_MIN;
	static uint64_t x1070 = 602777LLU;
	int16_t x1071 = INT16_MIN;
	int32_t x1072 = INT32_MAX;
	int32_t t195 = 1;

    t195 = ((x1069*x1070)>(x1071!=x1072));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x1073 = -1;
	static volatile int16_t x1074 = -1;
	uint64_t x1075 = UINT64_MAX;
	static uint32_t x1076 = UINT32_MAX;
	int32_t t196 = -1401611;

    t196 = ((x1073*x1074)>(x1075!=x1076));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1081 = 3379;
	int32_t x1084 = INT32_MIN;

    t197 = ((x1081*x1082)>(x1083!=x1084));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1085 = -1LL;
	uint64_t x1086 = 3024582492589673989LLU;
	int64_t x1088 = INT64_MIN;

    t198 = ((x1085*x1086)>(x1087!=x1088));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1089 = -100;
	static int8_t x1090 = INT8_MAX;
	static int16_t x1091 = -2140;
	int32_t x1092 = 455138;
	volatile int32_t t199 = 2974;

    t199 = ((x1089*x1090)>(x1091!=x1092));

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

