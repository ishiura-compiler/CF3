
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

static uint64_t x2 = 231623778107627389LLU;
int32_t x10 = 6638;
int64_t x11 = 114110960LL;
int8_t x13 = -1;
uint32_t x16 = 375776447U;
int8_t x23 = -7;
int16_t x25 = -239;
int32_t t4 = 7;
int8_t x35 = 1;
uint32_t t6 = 20U;
uint64_t x38 = UINT64_MAX;
volatile uint32_t t7 = 17287U;
int32_t x42 = 7783845;
volatile uint32_t t9 = 22U;
static volatile int16_t x66 = 1;
volatile int8_t x68 = INT8_MIN;
int16_t x69 = INT16_MIN;
static int8_t x73 = -23;
int64_t x76 = INT64_MIN;
uint16_t x77 = 425U;
int8_t x94 = INT8_MIN;
uint64_t x105 = UINT64_MAX;
uint32_t x108 = UINT32_MAX;
volatile uint8_t x113 = UINT8_MAX;
uint8_t x118 = 4U;
static int64_t x119 = 629LL;
volatile uint8_t x125 = 118U;
int64_t x126 = -1LL;
volatile int64_t x128 = -1LL;
volatile int16_t x129 = 7702;
static int32_t t25 = -11056;
int16_t x139 = -937;
uint16_t x142 = 7U;
uint32_t x145 = UINT32_MAX;
int8_t x151 = INT8_MIN;
volatile int32_t x152 = INT32_MAX;
int64_t x157 = -1LL;
uint16_t x158 = UINT16_MAX;
uint16_t x159 = 12454U;
volatile int64_t t32 = 113158943LL;
volatile uint32_t t33 = 5508U;
volatile int8_t x175 = 4;
int16_t x176 = INT16_MIN;
int32_t x184 = 30450480;
int64_t t36 = -163738978239LL;
static int32_t x193 = -1;
int64_t x196 = -120801LL;
static int16_t x202 = INT16_MAX;
uint64_t x211 = UINT64_MAX;
int16_t x213 = INT16_MIN;
int64_t x215 = INT64_MIN;
uint16_t x219 = UINT16_MAX;
static int64_t x220 = 288LL;
int64_t t43 = -12427486987416558LL;
int8_t x221 = INT8_MIN;
int8_t x222 = INT8_MIN;
uint8_t x224 = UINT8_MAX;
int32_t x229 = INT32_MIN;
static int16_t x231 = -1;
int64_t x235 = INT64_MIN;
volatile uint32_t x236 = UINT32_MAX;
int32_t x254 = INT32_MIN;
int16_t x257 = -1;
uint16_t x258 = 137U;
int16_t x260 = -1;
uint8_t x267 = 3U;
int64_t x270 = INT64_MAX;
volatile int8_t x271 = -4;
int64_t x277 = -1LL;
int16_t x279 = INT16_MIN;
volatile int64_t x280 = -12617025977363LL;
int64_t t58 = 118641414560452LL;
static uint8_t x281 = 4U;
uint64_t x285 = 703235672LLU;
volatile int8_t x300 = INT8_MIN;
volatile int32_t t62 = -503973874;
int64_t x315 = 5153822215909LL;
int16_t x316 = -1;
int32_t x319 = INT32_MAX;
static int64_t t68 = 6894969462LL;
int16_t x333 = -8034;
int32_t t70 = 15481221;
int32_t x338 = INT32_MIN;
static volatile uint32_t x339 = UINT32_MAX;
uint8_t x342 = UINT8_MAX;
uint64_t x344 = 152505549699LLU;
uint16_t x348 = 3153U;
int32_t x349 = INT32_MIN;
static volatile uint64_t t76 = 1789580LLU;
int16_t x362 = INT16_MIN;
static uint8_t x368 = 22U;
int16_t x371 = INT16_MAX;
int8_t x372 = -1;
static volatile int32_t t79 = 8;
static volatile uint64_t t80 = UINT64_MAX;
int8_t x382 = -1;
int32_t x387 = INT32_MIN;
int32_t x390 = 5;
int32_t t85 = 0;
volatile int32_t x412 = INT32_MIN;
uint32_t x415 = 2291U;
uint16_t x419 = 4597U;
int64_t x421 = -276937699157963802LL;
static int16_t x429 = INT16_MIN;
static uint32_t x433 = 1014U;
int16_t x438 = INT16_MAX;
uint8_t x450 = 25U;
uint8_t x451 = 5U;
int8_t x454 = 1;
int8_t x469 = INT8_MIN;
uint32_t x471 = 8947917U;
int32_t t101 = -9192557;
static int8_t x477 = INT8_MIN;
volatile int32_t t102 = -1549;
int8_t x493 = INT8_MIN;
volatile int16_t x499 = 83;
int32_t t106 = -2;
volatile int64_t x502 = INT64_MIN;
uint8_t x503 = 27U;
int32_t x504 = 479;
static volatile int32_t t107 = -10;
int8_t x517 = INT8_MIN;
int16_t x525 = 195;
uint16_t x529 = 89U;
volatile int32_t t115 = -1634;
int8_t x542 = 3;
uint16_t x547 = UINT16_MAX;
uint32_t t117 = 871U;
static uint64_t x549 = UINT64_MAX;
uint8_t x550 = UINT8_MAX;
int8_t x551 = 1;
static int32_t x552 = 34699;
int16_t x559 = INT16_MIN;
static volatile uint64_t x569 = 15LLU;
volatile int64_t x573 = 214408797158LL;
int32_t x578 = INT32_MIN;
uint8_t x581 = UINT8_MAX;
static uint8_t x582 = 11U;
int16_t x597 = -1;
static int8_t x598 = -1;
int8_t x599 = -1;
volatile int32_t x601 = INT32_MIN;
int16_t x613 = 0;
volatile int16_t x614 = INT16_MIN;
static volatile int32_t x620 = -13996488;
int32_t t132 = -1169;
static int32_t x627 = -16281;
int16_t x632 = INT16_MAX;
volatile int32_t t135 = 2332;
volatile int32_t t136 = 3878;
volatile int8_t x646 = -3;
int16_t x656 = 204;
uint64_t t141 = 4502101238763147868LLU;
int16_t x661 = INT16_MIN;
uint16_t x669 = 32554U;
static int32_t x671 = -1;
uint8_t x675 = 3U;
static uint32_t x677 = 406187655U;
int8_t x679 = -1;
int16_t x682 = INT16_MAX;
uint8_t x684 = 3U;
int32_t t147 = 118;
int32_t x686 = -847634167;
int64_t x694 = INT64_MAX;
uint32_t x695 = 203U;
static volatile uint32_t x699 = 127U;
int32_t t151 = -1;
int16_t x711 = INT16_MIN;
volatile int32_t x713 = INT32_MIN;
int32_t x716 = INT32_MIN;
volatile int64_t x719 = 86854LL;
volatile uint16_t x726 = 2213U;
int8_t x741 = -1;
int32_t x746 = INT32_MIN;
static volatile int64_t x747 = INT64_MAX;
uint64_t x748 = 767858147464542LLU;
volatile uint64_t t161 = 2108693560813545867LLU;
static uint16_t x751 = UINT16_MAX;
int32_t x756 = -1;
static volatile int64_t t163 = -150234298602LL;
static uint32_t x759 = 419894U;
static volatile int64_t x760 = INT64_MIN;
uint8_t x765 = UINT8_MAX;
int32_t x768 = INT32_MAX;
static int32_t t166 = -2;
int32_t x771 = INT32_MIN;
uint16_t x783 = UINT16_MAX;
int64_t x793 = 47600533608135877LL;
static int8_t x801 = 1;
int16_t x810 = 21;
static uint64_t x813 = 410165978888123LLU;
uint16_t x815 = 9419U;
static int16_t x816 = INT16_MIN;
static volatile int32_t x820 = 180237627;
static volatile int32_t t178 = -906767463;
static uint16_t x837 = 4993U;
uint64_t x840 = 6819239000LLU;
uint64_t t182 = 271519355052101136LLU;
uint16_t x844 = UINT16_MAX;
int16_t x846 = -3;
int8_t x849 = INT8_MIN;
int8_t x864 = INT8_MIN;
int32_t x866 = INT32_MIN;
uint64_t x878 = 479904LLU;
int32_t x880 = 455325;
static uint32_t x882 = 315443U;
int32_t x883 = INT32_MIN;
int32_t x885 = -1;
int16_t x892 = -12359;
static volatile int32_t t195 = -1284;
int32_t t196 = 62593981;
static volatile int32_t x907 = INT32_MIN;
volatile int64_t t197 = -22LL;
uint64_t x909 = 7905685334363LLU;
static volatile uint32_t x918 = 133749U;
static volatile int32_t x920 = 125580815;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	static uint8_t x3 = UINT8_MAX;
	int8_t x4 = 7;
	volatile int32_t t0 = -29;

    t0 = ((x1|(x2<=x3))-x4);

    if (t0 != 120) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 23U;
	static int32_t x12 = INT32_MIN;
	static volatile uint32_t t1 = 264118U;

    t1 = ((x9|(x10<=x11))-x12);

    if (t1 != 2147483671U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x14 = -1;
	uint32_t x15 = 6U;
	static volatile uint32_t t2 = 5U;

    t2 = ((x13|(x14<=x15))-x16);

    if (t2 != 3919190848U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	int8_t x22 = 1;
	volatile int32_t x24 = -1264;
	int32_t t3 = -189248193;

    t3 = ((x21|(x22<=x23))-x24);

    if (t3 != -31504) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x26 = 10U;
	uint16_t x27 = 139U;
	int32_t x28 = -2721390;

    t4 = ((x25|(x26<=x27))-x28);

    if (t4 != 2721151) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = INT32_MAX;
	static uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	static volatile int16_t x32 = INT16_MAX;
	volatile int32_t t5 = 3;

    t5 = ((x29|(x30<=x31))-x32);

    if (t5 != 2147450880) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MIN;
	volatile int16_t x34 = 2003;
	uint32_t x36 = 472328847U;

    t6 = ((x33|(x34<=x35))-x36);

    if (t6 != 1675154801U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -6;
	static uint32_t x39 = 91204841U;
	uint32_t x40 = UINT32_MAX;

    t7 = ((x37|(x38<=x39))-x40);

    if (t7 != 4294967291U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = -97125819;
	volatile int64_t x43 = 177727479000508486LL;
	volatile int8_t x44 = -1;
	int32_t t8 = -15083113;

    t8 = ((x41|(x42<=x43))-x44);

    if (t8 != -97125818) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x49 = UINT32_MAX;
	static uint32_t x50 = 5U;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -1;

    t9 = ((x49|(x50<=x51))-x52);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = 250;
	int32_t x54 = 4;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 136582379790LLU;
	uint64_t t10 = 6LLU;

    t10 = ((x53|(x54<=x55))-x56);

    if (t10 != 18446743937127172076LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x65 = INT8_MIN;
	int8_t x67 = INT8_MAX;
	int32_t t11 = 1331;

    t11 = ((x65|(x66<=x67))-x68);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x70 = INT16_MAX;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;
	volatile int32_t t12 = -9302;

    t12 = ((x69|(x70<=x71))-x72);

    if (t12 != 2147450881) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x74 = 501420451;
	volatile int64_t x75 = INT64_MIN;
	int64_t t13 = -34284739333LL;

    t13 = ((x73|(x74<=x75))-x76);

    if (t13 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x78 = UINT64_MAX;
	uint8_t x79 = UINT8_MAX;
	static uint8_t x80 = 79U;
	static int32_t t14 = 82439;

    t14 = ((x77|(x78<=x79))-x80);

    if (t14 != 346) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x81 = -952;
	static volatile int16_t x82 = -1;
	int64_t x83 = 28096991LL;
	volatile uint64_t x84 = 1LLU;
	volatile uint64_t t15 = 43LLU;

    t15 = ((x81|(x82<=x83))-x84);

    if (t15 != 18446744073709550664LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x93 = 3329;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t16 = -902;

    t16 = ((x93|(x94<=x95))-x96);

    if (t16 != 3457) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -24;
	uint64_t t17 = 1833512333258854121LLU;

    t17 = ((x97|(x98<=x99))-x100);

    if (t17 != 23LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = INT64_MIN;
	volatile uint32_t x103 = UINT32_MAX;
	volatile int64_t x104 = INT64_MIN;
	static int64_t t18 = 12110288442448392LL;

    t18 = ((x101|(x102<=x103))-x104);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x106 = -3;
	static volatile uint8_t x107 = 2U;
	uint64_t t19 = 133131467612622LLU;

    t19 = ((x105|(x106<=x107))-x108);

    if (t19 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = INT64_MAX;
	volatile int32_t x111 = INT32_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t20 = 1078010076874LLU;

    t20 = ((x109|(x110<=x111))-x112);

    if (t20 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x114 = UINT8_MAX;
	int64_t x115 = 15606059274229803LL;
	int8_t x116 = INT8_MIN;
	static int32_t t21 = -2;

    t21 = ((x113|(x114<=x115))-x116);

    if (t21 != 383) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x117 = INT32_MIN;
	static volatile uint32_t x120 = 902U;
	volatile uint32_t t22 = 24770U;

    t22 = ((x117|(x118<=x119))-x120);

    if (t22 != 2147482747U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x121 = 54U;
	int16_t x122 = INT16_MIN;
	static uint64_t x123 = 4636121382248391LLU;
	int8_t x124 = INT8_MIN;
	int32_t t23 = -19151;

    t23 = ((x121|(x122<=x123))-x124);

    if (t23 != 182) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x127 = 48;
	volatile int64_t t24 = -27491564575901LL;

    t24 = ((x125|(x126<=x127))-x128);

    if (t24 != 120LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x130 = INT8_MIN;
	int32_t x131 = 598191;
	int16_t x132 = -13;

    t25 = ((x129|(x130<=x131))-x132);

    if (t25 != 7716) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x137 = 13;
	int8_t x138 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t26 = 133;

    t26 = ((x137|(x138<=x139))-x140);

    if (t26 != 141) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = UINT16_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	uint64_t x144 = 265603212896LLU;
	uint64_t t27 = 424987848786476LLU;

    t27 = ((x141|(x142<=x143))-x144);

    if (t27 != 18446743808106404255LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x146 = 30U;
	volatile int16_t x147 = 1179;
	uint64_t x148 = 1406844154LLU;
	volatile uint64_t t28 = 432519293327LLU;

    t28 = ((x145|(x146<=x147))-x148);

    if (t28 != 2888123141LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x149 = INT32_MAX;
	static int64_t x150 = INT64_MIN;
	int32_t t29 = 2499;

    t29 = ((x149|(x150<=x151))-x152);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x160 = INT64_MIN;
	volatile int64_t t30 = INT64_MAX;

    t30 = ((x157|(x158<=x159))-x160);

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x161 = 1;
	volatile uint16_t x162 = 11U;
	static uint8_t x163 = 6U;
	volatile uint8_t x164 = 30U;
	volatile int32_t t31 = 1;

    t31 = ((x161|(x162<=x163))-x164);

    if (t31 != -29) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = INT8_MIN;
	static int64_t x166 = 13366LL;
	int32_t x167 = -1413;
	static int64_t x168 = INT64_MIN;

    t32 = ((x165|(x166<=x167))-x168);

    if (t32 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x169 = INT16_MIN;
	int16_t x170 = INT16_MAX;
	static uint16_t x171 = 835U;
	static uint32_t x172 = UINT32_MAX;

    t33 = ((x169|(x170<=x171))-x172);

    if (t33 != 4294934529U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int8_t x174 = INT8_MIN;
	int32_t t34 = -292;

    t34 = ((x173|(x174<=x175))-x176);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x181 = -32;
	uint16_t x182 = UINT16_MAX;
	static uint16_t x183 = 10U;
	int32_t t35 = 167;

    t35 = ((x181|(x182<=x183))-x184);

    if (t35 != -30450512) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x189 = -28;
	int32_t x190 = -1;
	int64_t x191 = -4904453761LL;
	int64_t x192 = 123716452590LL;

    t36 = ((x189|(x190<=x191))-x192);

    if (t36 != -123716452618LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x194 = INT8_MIN;
	int64_t x195 = -1LL;
	int64_t t37 = -2LL;

    t37 = ((x193|(x194<=x195))-x196);

    if (t37 != 120800LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = 5091;
	int64_t x198 = -1LL;
	int64_t x199 = -1LL;
	volatile int16_t x200 = 8627;
	volatile int32_t t38 = -24578;

    t38 = ((x197|(x198<=x199))-x200);

    if (t38 != -3536) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x201 = UINT8_MAX;
	static int8_t x203 = INT8_MAX;
	uint64_t x204 = 1674866LLU;
	uint64_t t39 = 185000104796LLU;

    t39 = ((x201|(x202<=x203))-x204);

    if (t39 != 18446744073707877005LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = 13728;
	int32_t x206 = 68070638;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t40 = -1861221;

    t40 = ((x205|(x206<=x207))-x208);

    if (t40 != 46496) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x209 = 0U;
	int64_t x210 = INT64_MIN;
	static int16_t x212 = -1011;
	volatile int32_t t41 = -1;

    t41 = ((x209|(x210<=x211))-x212);

    if (t41 != 1012) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x214 = 14605U;
	int8_t x216 = INT8_MIN;
	int32_t t42 = -414952;

    t42 = ((x213|(x214<=x215))-x216);

    if (t42 != -32640) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MAX;

    t43 = ((x217|(x218<=x219))-x220);

    if (t43 != -161LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x223 = 14LLU;
	volatile int32_t t44 = -3798;

    t44 = ((x221|(x222<=x223))-x224);

    if (t44 != -383) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MIN;
	uint8_t x227 = 14U;
	int32_t x228 = INT32_MIN;
	volatile int32_t t45 = -59420850;

    t45 = ((x225|(x226<=x227))-x228);

    if (t45 != 2147483521) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x230 = -1;
	static volatile int8_t x232 = -1;
	int32_t t46 = 5;

    t46 = ((x229|(x230<=x231))-x232);

    if (t46 != -2147483646) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint32_t t47 = 1892965330U;

    t47 = ((x233|(x234<=x235))-x236);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x237 = 49U;
	uint8_t x238 = 1U;
	uint8_t x239 = 8U;
	int64_t x240 = 43LL;
	volatile int64_t t48 = -7292685534LL;

    t48 = ((x237|(x238<=x239))-x240);

    if (t48 != 6LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MAX;
	uint64_t x244 = UINT64_MAX;
	uint64_t t49 = 395263LLU;

    t49 = ((x241|(x242<=x243))-x244);

    if (t49 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x245 = INT64_MAX;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 19238039430177LL;
	volatile uint64_t x248 = 2LLU;
	volatile uint64_t t50 = 18249689LLU;

    t50 = ((x245|(x246<=x247))-x248);

    if (t50 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	int8_t x252 = -3;
	volatile int32_t t51 = 5;

    t51 = ((x249|(x250<=x251))-x252);

    if (t51 != 130) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x253 = 20611865LL;
	int16_t x255 = -3644;
	uint64_t x256 = 65661555057426195LLU;
	uint64_t t52 = 55LLU;

    t52 = ((x253|(x254<=x255))-x256);

    if (t52 != 18381082518672737286LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x259 = INT64_MAX;
	volatile int32_t t53 = 396;

    t53 = ((x257|(x258<=x259))-x260);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x261 = INT64_MAX;
	volatile int16_t x262 = INT16_MIN;
	int32_t x263 = 26614060;
	uint8_t x264 = UINT8_MAX;
	int64_t t54 = -56306825114697LL;

    t54 = ((x261|(x262<=x263))-x264);

    if (t54 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x265 = INT8_MAX;
	int8_t x266 = 0;
	static uint64_t x268 = 16620073354947LLU;
	uint64_t t55 = 165LLU;

    t55 = ((x265|(x266<=x267))-x268);

    if (t55 != 18446727453636196796LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x269 = UINT32_MAX;
	static int8_t x272 = INT8_MIN;
	static uint32_t t56 = 12259U;

    t56 = ((x269|(x270<=x271))-x272);

    if (t56 != 127U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x273 = INT8_MAX;
	uint8_t x274 = 26U;
	uint64_t x275 = 62331663LLU;
	int8_t x276 = 6;
	static int32_t t57 = 56783;

    t57 = ((x273|(x274<=x275))-x276);

    if (t57 != 121) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x278 = INT16_MAX;

    t58 = ((x277|(x278<=x279))-x280);

    if (t58 != 12617025977362LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -1;
	volatile int32_t t59 = 5;

    t59 = ((x281|(x282<=x283))-x284);

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x286 = INT32_MAX;
	static int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t60 = 5794657795318654032LLU;

    t60 = ((x285|(x286<=x287))-x288);

    if (t60 != 703235673LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x289 = INT8_MIN;
	uint16_t x290 = 1018U;
	int16_t x291 = INT16_MAX;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t61 = 754410LL;

    t61 = ((x289|(x290<=x291))-x292);

    if (t61 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = INT16_MAX;
	static uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MIN;

    t62 = ((x297|(x298<=x299))-x300);

    if (t62 != 32895) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = INT8_MIN;
	int8_t x304 = -2;
	volatile int32_t t63 = 1018;

    t63 = ((x301|(x302<=x303))-x304);

    if (t63 != -126) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x305 = 120;
	int64_t x306 = -1LL;
	static int64_t x307 = -1LL;
	volatile int32_t x308 = 772025209;
	int32_t t64 = -10;

    t64 = ((x305|(x306<=x307))-x308);

    if (t64 != -772025088) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = INT64_MIN;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = INT16_MIN;
	volatile int64_t t65 = -48901110660814168LL;

    t65 = ((x309|(x310<=x311))-x312);

    if (t65 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x313 = INT16_MIN;
	volatile uint8_t x314 = 28U;
	int32_t t66 = -14164;

    t66 = ((x313|(x314<=x315))-x316);

    if (t66 != -32766) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x317 = INT16_MIN;
	int32_t x318 = -33;
	int16_t x320 = INT16_MIN;
	volatile int32_t t67 = 0;

    t67 = ((x317|(x318<=x319))-x320);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x321 = INT64_MIN;
	volatile uint64_t x322 = 37762966170659LLU;
	int16_t x323 = -1;
	int8_t x324 = INT8_MIN;

    t68 = ((x321|(x322<=x323))-x324);

    if (t68 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x325 = 113;
	volatile int16_t x326 = -1;
	int32_t x327 = INT32_MIN;
	uint8_t x328 = 1U;
	int32_t t69 = -7858;

    t69 = ((x325|(x326<=x327))-x328);

    if (t69 != 112) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x334 = INT64_MIN;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MIN;

    t70 = ((x333|(x334<=x335))-x336);

    if (t70 != 24735) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x337 = 89U;
	int8_t x340 = INT8_MAX;
	static int32_t t71 = -341003716;

    t71 = ((x337|(x338<=x339))-x340);

    if (t71 != -38) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x341 = -1;
	int32_t x343 = -1;
	uint64_t t72 = 62481545LLU;

    t72 = ((x341|(x342<=x343))-x344);

    if (t72 != 18446743921204001916LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x345 = -316386LL;
	volatile uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 0U;
	int64_t t73 = 10257002587021373LL;

    t73 = ((x345|(x346<=x347))-x348);

    if (t73 != -319539LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x350 = 5692U;
	int64_t x351 = INT64_MAX;
	uint32_t x352 = 38986307U;
	uint32_t t74 = 419932U;

    t74 = ((x349|(x350<=x351))-x352);

    if (t74 != 2108497342U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x353 = -1;
	volatile uint16_t x354 = 0U;
	int32_t x355 = -1;
	static int16_t x356 = INT16_MAX;
	int32_t t75 = -28335956;

    t75 = ((x353|(x354<=x355))-x356);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x357 = UINT64_MAX;
	int64_t x358 = -1LL;
	int64_t x359 = 0LL;
	volatile int64_t x360 = -1LL;

    t76 = ((x357|(x358<=x359))-x360);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x361 = 25LLU;
	uint8_t x363 = UINT8_MAX;
	static volatile uint8_t x364 = 50U;
	volatile uint64_t t77 = 145123963606LLU;

    t77 = ((x361|(x362<=x363))-x364);

    if (t77 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x365 = INT8_MIN;
	uint16_t x366 = UINT16_MAX;
	int8_t x367 = -1;
	volatile int32_t t78 = 165807;

    t78 = ((x365|(x366<=x367))-x368);

    if (t78 != -150) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x369 = -831;
	static volatile int32_t x370 = INT32_MIN;

    t79 = ((x369|(x370<=x371))-x372);

    if (t79 != -830) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int32_t x374 = 2708;
	int32_t x375 = -1;
	int8_t x376 = 0;

    t80 = ((x373|(x374<=x375))-x376);

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x381 = 3550U;
	int8_t x383 = -30;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t81 = -65281;

    t81 = ((x381|(x382<=x383))-x384);

    if (t81 != 3295) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x385 = 27U;
	static int64_t x386 = -1199144927236546774LL;
	uint32_t x388 = 7123875U;
	volatile uint32_t t82 = 86750143U;

    t82 = ((x385|(x386<=x387))-x388);

    if (t82 != 4287843448U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x389 = 2720U;
	volatile int8_t x391 = INT8_MIN;
	int32_t x392 = -24475;
	volatile int32_t t83 = -82;

    t83 = ((x389|(x390<=x391))-x392);

    if (t83 != 27195) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x393 = UINT32_MAX;
	int64_t x394 = -1LL;
	static uint8_t x395 = UINT8_MAX;
	volatile int64_t x396 = 42989831LL;
	int64_t t84 = -18372497LL;

    t84 = ((x393|(x394<=x395))-x396);

    if (t84 != 4251977464LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x397 = 23U;
	int8_t x398 = INT8_MIN;
	static int16_t x399 = -1;
	int16_t x400 = INT16_MAX;

    t85 = ((x397|(x398<=x399))-x400);

    if (t85 != -32744) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x409 = -1;
	uint32_t x410 = 59454U;
	static volatile uint32_t x411 = UINT32_MAX;
	int32_t t86 = INT32_MAX;

    t86 = ((x409|(x410<=x411))-x412);

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x413 = 8;
	uint64_t x414 = UINT64_MAX;
	int64_t x416 = INT64_MAX;
	volatile int64_t t87 = 7LL;

    t87 = ((x413|(x414<=x415))-x416);

    if (t87 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x417 = INT16_MIN;
	uint8_t x418 = 3U;
	static volatile int32_t x420 = -1;
	int32_t t88 = 1;

    t88 = ((x417|(x418<=x419))-x420);

    if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x422 = INT64_MIN;
	int16_t x423 = -1;
	static int8_t x424 = 9;
	static int64_t t89 = 26952169587682977LL;

    t89 = ((x421|(x422<=x423))-x424);

    if (t89 != -276937699157963810LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = -22578LL;
	volatile uint16_t x427 = 51U;
	uint64_t x428 = 407652289LLU;
	uint64_t t90 = 16119212330847LLU;

    t90 = ((x425|(x426<=x427))-x428);

    if (t90 != 18446744073301899200LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x430 = -1;
	int64_t x431 = -1LL;
	int64_t x432 = -763208584094LL;
	volatile int64_t t91 = -422LL;

    t91 = ((x429|(x430<=x431))-x432);

    if (t91 != 763208551327LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x434 = -57;
	static uint16_t x435 = 116U;
	int32_t x436 = INT32_MAX;
	volatile uint32_t t92 = 1213U;

    t92 = ((x433|(x434<=x435))-x436);

    if (t92 != 2147484664U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x437 = INT16_MAX;
	int32_t x439 = 153173403;
	int64_t x440 = 7180837LL;
	int64_t t93 = -119108333359LL;

    t93 = ((x437|(x438<=x439))-x440);

    if (t93 != -7148070LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x441 = 381841103LLU;
	volatile uint8_t x442 = 23U;
	static int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t94 = 284258640194546LLU;

    t94 = ((x441|(x442<=x443))-x444);

    if (t94 != 2529324751LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x445 = 671093;
	static uint16_t x446 = 1U;
	uint8_t x447 = 18U;
	int8_t x448 = INT8_MIN;
	int32_t t95 = 50814676;

    t95 = ((x445|(x446<=x447))-x448);

    if (t95 != 671221) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x449 = INT16_MAX;
	int32_t x452 = -1;
	int32_t t96 = -3649;

    t96 = ((x449|(x450<=x451))-x452);

    if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x453 = -1;
	uint32_t x455 = UINT32_MAX;
	volatile int8_t x456 = INT8_MIN;
	int32_t t97 = 95987;

    t97 = ((x453|(x454<=x455))-x456);

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x457 = UINT64_MAX;
	uint8_t x458 = 20U;
	uint8_t x459 = 39U;
	static int64_t x460 = -1LL;
	uint64_t t98 = 26183303LLU;

    t98 = ((x457|(x458<=x459))-x460);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x461 = INT64_MIN;
	int64_t x462 = -1LL;
	static int8_t x463 = INT8_MIN;
	int16_t x464 = -1;
	static volatile int64_t t99 = -9LL;

    t99 = ((x461|(x462<=x463))-x464);

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x465 = INT8_MAX;
	int64_t x466 = -2609344381800LL;
	uint8_t x467 = 63U;
	int8_t x468 = 1;
	volatile int32_t t100 = -165424;

    t100 = ((x465|(x466<=x467))-x468);

    if (t100 != 126) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x470 = 768060878;
	int16_t x472 = INT16_MIN;

    t101 = ((x469|(x470<=x471))-x472);

    if (t101 != 32640) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x478 = 5U;
	int8_t x479 = -1;
	uint16_t x480 = 788U;

    t102 = ((x477|(x478<=x479))-x480);

    if (t102 != -916) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x481 = 61033844005LL;
	uint64_t x482 = 3325539LLU;
	int32_t x483 = 189;
	static uint8_t x484 = 67U;
	int64_t t103 = -1470565420LL;

    t103 = ((x481|(x482<=x483))-x484);

    if (t103 != 61033843938LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x485 = INT32_MIN;
	volatile int32_t x486 = -1;
	static uint64_t x487 = 61502532069012LLU;
	int16_t x488 = -1;
	volatile int32_t t104 = -8455956;

    t104 = ((x485|(x486<=x487))-x488);

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x494 = UINT8_MAX;
	int8_t x495 = -11;
	static int16_t x496 = 53;
	volatile int32_t t105 = 49534073;

    t105 = ((x493|(x494<=x495))-x496);

    if (t105 != -181) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = -1LL;
	int32_t x500 = -412803;

    t106 = ((x497|(x498<=x499))-x500);

    if (t106 != 413058) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x501 = -22;

    t107 = ((x501|(x502<=x503))-x504);

    if (t107 != -500) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = 1U;
	uint8_t x506 = UINT8_MAX;
	static int32_t x507 = -1;
	volatile uint32_t x508 = 65U;
	static volatile uint32_t t108 = 6279651U;

    t108 = ((x505|(x506<=x507))-x508);

    if (t108 != 4294967232U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MIN;
	uint16_t x511 = 6314U;
	uint32_t x512 = 261029871U;
	uint32_t t109 = 685629259U;

    t109 = ((x509|(x510<=x511))-x512);

    if (t109 != 4033937552U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x513 = 19U;
	static int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	int64_t x516 = -1LL;
	static int64_t t110 = 11531144LL;

    t110 = ((x513|(x514<=x515))-x516);

    if (t110 != 20LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x518 = -1;
	static uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MIN;
	volatile int32_t t111 = -1;

    t111 = ((x517|(x518<=x519))-x520);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x526 = INT32_MIN;
	int8_t x527 = 0;
	static uint8_t x528 = UINT8_MAX;
	int32_t t112 = -5;

    t112 = ((x525|(x526<=x527))-x528);

    if (t112 != -60) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x530 = INT16_MIN;
	int16_t x531 = 45;
	uint64_t x532 = UINT64_MAX;
	uint64_t t113 = 10234150597LLU;

    t113 = ((x529|(x530<=x531))-x532);

    if (t113 != 90LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x533 = 63092LL;
	static uint8_t x534 = 0U;
	int32_t x535 = -622;
	static uint16_t x536 = 11370U;
	int64_t t114 = -487LL;

    t114 = ((x533|(x534<=x535))-x536);

    if (t114 != 51722LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x537 = INT16_MIN;
	int32_t x538 = 870606589;
	int16_t x539 = INT16_MIN;
	static int32_t x540 = INT32_MIN;

    t115 = ((x537|(x538<=x539))-x540);

    if (t115 != 2147450880) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x541 = UINT8_MAX;
	uint64_t x543 = 57336273LLU;
	int8_t x544 = INT8_MAX;
	int32_t t116 = 4;

    t116 = ((x541|(x542<=x543))-x544);

    if (t116 != 128) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = INT32_MIN;
	static int64_t x546 = 6481LL;
	static volatile uint32_t x548 = 16165722U;

    t117 = ((x545|(x546<=x547))-x548);

    if (t117 != 2131317927U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t t118 = 348841LLU;

    t118 = ((x549|(x550<=x551))-x552);

    if (t118 != 18446744073709516916LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x557 = INT16_MAX;
	int8_t x558 = INT8_MIN;
	static uint16_t x560 = UINT16_MAX;
	static volatile int32_t t119 = 611379125;

    t119 = ((x557|(x558<=x559))-x560);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x561 = 7U;
	uint64_t x562 = 24728717549LLU;
	int32_t x563 = 1615;
	uint16_t x564 = 0U;
	static volatile uint32_t t120 = 467U;

    t120 = ((x561|(x562<=x563))-x564);

    if (t120 != 7U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x565 = 2858876697085903771LLU;
	volatile uint64_t x566 = 0LLU;
	volatile int8_t x567 = INT8_MIN;
	static uint64_t x568 = 6491261993126643520LLU;
	volatile uint64_t t121 = 1778773925LLU;

    t121 = ((x565|(x566<=x567))-x568);

    if (t121 != 14814358777668811867LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x570 = INT8_MIN;
	uint64_t x571 = 332LLU;
	volatile int16_t x572 = 52;
	uint64_t t122 = 2725153952LLU;

    t122 = ((x569|(x570<=x571))-x572);

    if (t122 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x574 = -351;
	int32_t x575 = 12149;
	static volatile uint32_t x576 = 39630U;
	static volatile int64_t t123 = 383399193LL;

    t123 = ((x573|(x574<=x575))-x576);

    if (t123 != 214408757529LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x577 = INT8_MIN;
	static uint32_t x579 = 2828U;
	int64_t x580 = INT64_MIN;
	static int64_t t124 = 5079940926685LL;

    t124 = ((x577|(x578<=x579))-x580);

    if (t124 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x583 = 332204591U;
	int8_t x584 = -1;
	static volatile int32_t t125 = 6;

    t125 = ((x581|(x582<=x583))-x584);

    if (t125 != 256) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x589 = UINT64_MAX;
	static int16_t x590 = -1;
	static int64_t x591 = INT64_MIN;
	volatile uint64_t x592 = 1014254238LLU;
	volatile uint64_t t126 = 23833LLU;

    t126 = ((x589|(x590<=x591))-x592);

    if (t126 != 18446744072695297377LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x600 = INT64_MAX;
	int64_t t127 = INT64_MIN;

    t127 = ((x597|(x598<=x599))-x600);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x602 = 8003;
	volatile int16_t x603 = INT16_MIN;
	uint64_t x604 = 2524848976LLU;
	volatile uint64_t t128 = 42086755866992LLU;

    t128 = ((x601|(x602<=x603))-x604);

    if (t128 != 18446744069037218992LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x605 = INT16_MIN;
	int64_t x606 = 83344145536235LL;
	volatile int64_t x607 = -1LL;
	int32_t x608 = -1;
	volatile int32_t t129 = 917152911;

    t129 = ((x605|(x606<=x607))-x608);

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x609 = 885;
	int64_t x610 = INT64_MAX;
	uint64_t x611 = 15534288211268LLU;
	static int32_t x612 = 5;
	int32_t t130 = -6663428;

    t130 = ((x609|(x610<=x611))-x612);

    if (t130 != 880) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x615 = 12;
	volatile int32_t x616 = 1;
	static volatile int32_t t131 = 13;

    t131 = ((x613|(x614<=x615))-x616);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x617 = 50U;
	volatile int8_t x618 = INT8_MAX;
	int64_t x619 = INT64_MIN;

    t132 = ((x617|(x618<=x619))-x620);

    if (t132 != 13996538) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x621 = INT8_MIN;
	int16_t x622 = INT16_MAX;
	uint16_t x623 = 6256U;
	volatile int32_t x624 = INT32_MIN;
	volatile int32_t t133 = 1;

    t133 = ((x621|(x622<=x623))-x624);

    if (t133 != 2147483520) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x625 = INT64_MAX;
	int64_t x626 = INT64_MIN;
	uint32_t x628 = 6870284U;
	static volatile int64_t t134 = -236799575LL;

    t134 = ((x625|(x626<=x627))-x628);

    if (t134 != 9223372036847905523LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x629 = INT16_MAX;
	static uint8_t x630 = 1U;
	volatile uint32_t x631 = 44929U;

    t135 = ((x629|(x630<=x631))-x632);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x633 = INT8_MAX;
	static volatile int32_t x634 = INT32_MIN;
	int16_t x635 = 6002;
	int32_t x636 = INT32_MAX;

    t136 = ((x633|(x634<=x635))-x636);

    if (t136 != -2147483520) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x641 = -979385348480084849LL;
	uint32_t x642 = 176315U;
	int8_t x643 = -1;
	volatile int16_t x644 = INT16_MIN;
	volatile int64_t t137 = -209LL;

    t137 = ((x641|(x642<=x643))-x644);

    if (t137 != -979385348480052081LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x645 = -1LL;
	static uint64_t x647 = UINT64_MAX;
	uint64_t x648 = UINT64_MAX;
	static uint64_t t138 = 1099LLU;

    t138 = ((x645|(x646<=x647))-x648);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x649 = 33U;
	volatile int64_t x650 = INT64_MAX;
	int64_t x651 = INT64_MAX;
	volatile uint8_t x652 = 16U;
	static int32_t t139 = 118770285;

    t139 = ((x649|(x650<=x651))-x652);

    if (t139 != 17) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x653 = 195U;
	int16_t x654 = -1;
	uint16_t x655 = 15U;
	volatile uint32_t t140 = 98883U;

    t140 = ((x653|(x654<=x655))-x656);

    if (t140 != 4294967287U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x657 = 6756634321598884LLU;
	uint8_t x658 = 16U;
	uint8_t x659 = 5U;
	static int32_t x660 = INT32_MIN;

    t141 = ((x657|(x658<=x659))-x660);

    if (t141 != 6756636469082532LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x662 = INT8_MAX;
	volatile int16_t x663 = INT16_MIN;
	int8_t x664 = 0;
	static int32_t t142 = 9267244;

    t142 = ((x661|(x662<=x663))-x664);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x665 = -1;
	uint64_t x666 = 47039LLU;
	int64_t x667 = INT64_MAX;
	volatile int32_t x668 = -1;
	volatile int32_t t143 = -3138203;

    t143 = ((x665|(x666<=x667))-x668);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x670 = INT64_MIN;
	static volatile int16_t x672 = INT16_MIN;
	int32_t t144 = -154;

    t144 = ((x669|(x670<=x671))-x672);

    if (t144 != 65323) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint16_t x673 = UINT16_MAX;
	uint32_t x674 = UINT32_MAX;
	static uint16_t x676 = 1U;
	int32_t t145 = -173467;

    t145 = ((x673|(x674<=x675))-x676);

    if (t145 != 65534) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x678 = INT16_MIN;
	int8_t x680 = INT8_MIN;
	static volatile uint32_t t146 = 291011587U;

    t146 = ((x677|(x678<=x679))-x680);

    if (t146 != 406187783U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x683 = INT64_MIN;

    t147 = ((x681|(x682<=x683))-x684);

    if (t147 != -131) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x685 = 3U;
	uint32_t x687 = UINT32_MAX;
	int32_t x688 = -1;
	volatile int32_t t148 = -6282756;

    t148 = ((x685|(x686<=x687))-x688);

    if (t148 != 4) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x689 = 93730U;
	int8_t x690 = INT8_MIN;
	volatile int16_t x691 = INT16_MIN;
	int32_t x692 = INT32_MIN;
	uint32_t t149 = 7U;

    t149 = ((x689|(x690<=x691))-x692);

    if (t149 != 2147577378U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x693 = INT64_MAX;
	int32_t x696 = 25095609;
	volatile int64_t t150 = 251562118049880LL;

    t150 = ((x693|(x694<=x695))-x696);

    if (t150 != 9223372036829680198LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x697 = UINT8_MAX;
	static volatile uint64_t x698 = 46558LLU;
	uint8_t x700 = 2U;

    t151 = ((x697|(x698<=x699))-x700);

    if (t151 != 253) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x701 = 23U;
	uint64_t x702 = 582269499774498LLU;
	int64_t x703 = INT64_MIN;
	volatile uint64_t x704 = 711LLU;
	volatile uint64_t t152 = 1339763479LLU;

    t152 = ((x701|(x702<=x703))-x704);

    if (t152 != 18446744073709550928LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x709 = -52;
	int64_t x710 = INT64_MAX;
	static int16_t x712 = 14807;
	static int32_t t153 = -14599;

    t153 = ((x709|(x710<=x711))-x712);

    if (t153 != -14859) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MAX;
	static volatile int32_t t154 = -22672;

    t154 = ((x713|(x714<=x715))-x716);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x717 = 83U;
	static uint8_t x718 = 45U;
	int64_t x720 = -1LL;
	int64_t t155 = -518078154311690LL;

    t155 = ((x717|(x718<=x719))-x720);

    if (t155 != 84LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x721 = 0LLU;
	static int32_t x722 = -1928876;
	uint8_t x723 = 25U;
	volatile int64_t x724 = INT64_MAX;
	volatile uint64_t t156 = 915979657LLU;

    t156 = ((x721|(x722<=x723))-x724);

    if (t156 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x725 = 15564723959963LLU;
	int64_t x727 = -1LL;
	int16_t x728 = 1;
	uint64_t t157 = 13LLU;

    t157 = ((x725|(x726<=x727))-x728);

    if (t157 != 15564723959962LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x733 = -22;
	volatile uint32_t x734 = UINT32_MAX;
	volatile int8_t x735 = INT8_MAX;
	uint32_t x736 = 391U;
	static volatile uint32_t t158 = 55U;

    t158 = ((x733|(x734<=x735))-x736);

    if (t158 != 4294966883U) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x737 = INT64_MIN;
	int32_t x738 = -1;
	int8_t x739 = INT8_MAX;
	volatile int32_t x740 = -1;
	int64_t t159 = 893490867328LL;

    t159 = ((x737|(x738<=x739))-x740);

    if (t159 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x742 = 11886U;
	int64_t x743 = INT64_MAX;
	int32_t x744 = -945;
	int32_t t160 = -22126;

    t160 = ((x741|(x742<=x743))-x744);

    if (t160 != 944) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x745 = 32658LLU;

    t161 = ((x745|(x746<=x747))-x748);

    if (t161 != 18445976215562119733LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x749 = UINT8_MAX;
	static int32_t x750 = -196170;
	volatile uint8_t x752 = 0U;
	int32_t t162 = -7;

    t162 = ((x749|(x750<=x751))-x752);

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x753 = INT64_MIN;
	uint8_t x754 = 0U;
	int16_t x755 = INT16_MAX;

    t163 = ((x753|(x754<=x755))-x756);

    if (t163 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x757 = INT16_MIN;
	static volatile int64_t x758 = INT64_MAX;
	int64_t t164 = 5745898LL;

    t164 = ((x757|(x758<=x759))-x760);

    if (t164 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x761 = -691693428;
	int64_t x762 = -128058704908405549LL;
	volatile uint64_t x763 = 454789LLU;
	int32_t x764 = INT32_MIN;
	volatile int32_t t165 = 3694476;

    t165 = ((x761|(x762<=x763))-x764);

    if (t165 != 1455790220) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x766 = -1;
	int64_t x767 = INT64_MIN;

    t166 = ((x765|(x766<=x767))-x768);

    if (t166 != -2147483392) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x769 = INT32_MAX;
	int16_t x770 = 1;
	volatile int64_t x772 = -1LL;
	int64_t t167 = 153413871291402519LL;

    t167 = ((x769|(x770<=x771))-x772);

    if (t167 != 2147483648LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x777 = -1;
	static int8_t x778 = -2;
	uint8_t x779 = 0U;
	volatile int8_t x780 = -15;
	int32_t t168 = -2291;

    t168 = ((x777|(x778<=x779))-x780);

    if (t168 != 14) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile int8_t x782 = 5;
	static volatile uint32_t x784 = 26249U;
	uint32_t t169 = 24130729U;

    t169 = ((x781|(x782<=x783))-x784);

    if (t169 != 4294941302U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x785 = -1;
	int16_t x786 = 6140;
	static int32_t x787 = -24541028;
	int8_t x788 = INT8_MIN;
	int32_t t170 = -18;

    t170 = ((x785|(x786<=x787))-x788);

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x789 = 0LL;
	static uint16_t x790 = UINT16_MAX;
	uint64_t x791 = 2993LLU;
	volatile int16_t x792 = INT16_MAX;
	volatile int64_t t171 = -149725133089520LL;

    t171 = ((x789|(x790<=x791))-x792);

    if (t171 != -32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x794 = INT64_MAX;
	volatile uint64_t x795 = 32501060024405LLU;
	uint8_t x796 = 52U;
	int64_t t172 = 3805772843124165938LL;

    t172 = ((x793|(x794<=x795))-x796);

    if (t172 != 47600533608135825LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x797 = 0U;
	static int32_t x798 = INT32_MAX;
	uint32_t x799 = 119U;
	int16_t x800 = INT16_MAX;
	int32_t t173 = 49487173;

    t173 = ((x797|(x798<=x799))-x800);

    if (t173 != -32767) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x802 = INT64_MIN;
	int64_t x803 = INT64_MIN;
	int8_t x804 = INT8_MIN;
	static volatile int32_t t174 = 1607;

    t174 = ((x801|(x802<=x803))-x804);

    if (t174 != 129) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x805 = INT32_MIN;
	int8_t x806 = INT8_MIN;
	uint32_t x807 = 454884097U;
	int8_t x808 = -1;
	int32_t t175 = -81;

    t175 = ((x805|(x806<=x807))-x808);

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x809 = UINT16_MAX;
	volatile uint8_t x811 = UINT8_MAX;
	static int16_t x812 = 147;
	volatile int32_t t176 = -454207973;

    t176 = ((x809|(x810<=x811))-x812);

    if (t176 != 65388) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x814 = -1LL;
	static uint64_t t177 = 5958200158990442LLU;

    t177 = ((x813|(x814<=x815))-x816);

    if (t177 != 410165978920891LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x817 = INT32_MAX;
	int16_t x818 = -1;
	volatile int16_t x819 = INT16_MAX;

    t178 = ((x817|(x818<=x819))-x820);

    if (t178 != 1967246020) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x821 = UINT8_MAX;
	int8_t x822 = -7;
	static int32_t x823 = INT32_MAX;
	static volatile uint16_t x824 = 1U;
	int32_t t179 = -1058417962;

    t179 = ((x821|(x822<=x823))-x824);

    if (t179 != 254) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = INT16_MAX;
	int16_t x831 = INT16_MIN;
	int8_t x832 = -4;
	volatile int32_t t180 = -12774;

    t180 = ((x829|(x830<=x831))-x832);

    if (t180 != -32764) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x833 = 208U;
	int32_t x834 = -2;
	int64_t x835 = -1LL;
	int8_t x836 = INT8_MAX;
	static volatile int32_t t181 = -44880583;

    t181 = ((x833|(x834<=x835))-x836);

    if (t181 != 82) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x838 = 33347509U;
	int64_t x839 = -3777299962LL;

    t182 = ((x837|(x838<=x839))-x840);

    if (t182 != 18446744066890317609LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x841 = -1;
	int16_t x842 = -131;
	int8_t x843 = INT8_MIN;
	volatile int32_t t183 = -873;

    t183 = ((x841|(x842<=x843))-x844);

    if (t183 != -65536) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x845 = INT16_MIN;
	static volatile int32_t x847 = INT32_MIN;
	volatile int32_t x848 = -1;
	int32_t t184 = -3696495;

    t184 = ((x845|(x846<=x847))-x848);

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x850 = UINT8_MAX;
	uint8_t x851 = 78U;
	uint32_t x852 = 138U;
	volatile uint32_t t185 = 3U;

    t185 = ((x849|(x850<=x851))-x852);

    if (t185 != 4294967030U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x853 = 1202743U;
	int32_t x854 = 444722460;
	int8_t x855 = INT8_MAX;
	int16_t x856 = 6796;
	volatile uint32_t t186 = 639350U;

    t186 = ((x853|(x854<=x855))-x856);

    if (t186 != 1195947U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x857 = -1;
	int32_t x858 = INT32_MIN;
	static int64_t x859 = -14319314LL;
	int64_t x860 = -1LL;
	static volatile int64_t t187 = -1LL;

    t187 = ((x857|(x858<=x859))-x860);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x861 = UINT64_MAX;
	static uint16_t x862 = 26529U;
	int8_t x863 = INT8_MIN;
	volatile uint64_t t188 = 8937485592027582465LLU;

    t188 = ((x861|(x862<=x863))-x864);

    if (t188 != 127LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x865 = -652695260LL;
	int16_t x867 = 13068;
	int16_t x868 = INT16_MIN;
	volatile int64_t t189 = 8LL;

    t189 = ((x865|(x866<=x867))-x868);

    if (t189 != -652662491LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x877 = INT8_MAX;
	static int32_t x879 = 8087284;
	static volatile int32_t t190 = -198;

    t190 = ((x877|(x878<=x879))-x880);

    if (t190 != -455198) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x881 = 23175;
	volatile int8_t x884 = 1;
	volatile int32_t t191 = -16928825;

    t191 = ((x881|(x882<=x883))-x884);

    if (t191 != 23174) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x886 = 631745U;
	int32_t x887 = -327184;
	int8_t x888 = INT8_MAX;
	volatile int32_t t192 = 116;

    t192 = ((x885|(x886<=x887))-x888);

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x889 = UINT32_MAX;
	uint8_t x890 = 7U;
	uint16_t x891 = 87U;
	static uint32_t t193 = 120867167U;

    t193 = ((x889|(x890<=x891))-x892);

    if (t193 != 12358U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x893 = UINT8_MAX;
	int16_t x894 = INT16_MIN;
	volatile uint8_t x895 = 7U;
	int8_t x896 = INT8_MIN;
	int32_t t194 = 1;

    t194 = ((x893|(x894<=x895))-x896);

    if (t194 != 383) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x897 = -361;
	int32_t x898 = 96;
	static int32_t x899 = INT32_MIN;
	int8_t x900 = -1;

    t195 = ((x897|(x898<=x899))-x900);

    if (t195 != -360) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x901 = 0U;
	int8_t x902 = INT8_MIN;
	volatile int8_t x903 = INT8_MAX;
	uint8_t x904 = 116U;

    t196 = ((x901|(x902<=x903))-x904);

    if (t196 != -115) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x905 = INT64_MIN;
	static volatile int8_t x906 = INT8_MAX;
	int16_t x908 = INT16_MIN;

    t197 = ((x905|(x906<=x907))-x908);

    if (t197 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x910 = INT16_MIN;
	volatile uint32_t x911 = UINT32_MAX;
	int16_t x912 = INT16_MIN;
	static volatile uint64_t t198 = 1LLU;

    t198 = ((x909|(x910<=x911))-x912);

    if (t198 != 7905685367131LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x917 = INT8_MIN;
	static int64_t x919 = 25LL;
	volatile int32_t t199 = -1448;

    t199 = ((x917|(x918<=x919))-x920);

    if (t199 != -125580943) { NG(); } else { ; }
	
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

