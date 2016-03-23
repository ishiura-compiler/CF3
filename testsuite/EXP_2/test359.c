
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

int32_t t0 = 923808;
int32_t t1 = 63;
uint16_t x11 = 54U;
uint32_t x14 = 2103077U;
uint8_t x16 = UINT8_MAX;
volatile uint8_t x28 = UINT8_MAX;
uint16_t x29 = 8U;
static volatile int16_t x40 = -3;
static int32_t x42 = 7;
volatile int32_t x49 = INT32_MAX;
uint8_t x64 = UINT8_MAX;
int16_t x66 = 24;
int64_t x71 = 2687LL;
volatile int32_t t14 = 9;
int32_t x77 = -30553750;
int8_t x79 = INT8_MIN;
int32_t t16 = -68062008;
static int16_t x81 = -1;
volatile int32_t x84 = INT32_MAX;
int32_t t21 = -2157738;
int8_t x106 = INT8_MIN;
uint16_t x117 = 3975U;
uint32_t x118 = 29132U;
uint32_t x121 = 10U;
volatile uint32_t x123 = 1986697U;
static uint8_t x126 = 1U;
int8_t x127 = INT8_MIN;
volatile int32_t t27 = -24108484;
uint64_t x149 = 3091125LLU;
static uint16_t x152 = UINT16_MAX;
int32_t x155 = INT32_MIN;
static int32_t x158 = 16444276;
static uint32_t x160 = 21306039U;
int32_t t33 = 170;
int32_t x164 = -270920;
int16_t x166 = -1311;
int16_t x171 = INT16_MAX;
int32_t t36 = 25639;
int8_t x175 = INT8_MIN;
volatile int32_t x176 = INT32_MIN;
static int8_t x179 = -1;
int32_t x181 = -131;
uint8_t x182 = UINT8_MAX;
int8_t x183 = INT8_MIN;
int32_t t40 = 13229;
static volatile uint64_t x189 = 24449LLU;
static int32_t t44 = 4646;
volatile int32_t t45 = 45919;
int32_t t46 = 4146;
uint16_t x214 = UINT16_MAX;
int8_t x217 = 15;
uint16_t x223 = UINT16_MAX;
int32_t x230 = INT32_MAX;
volatile uint16_t x232 = UINT16_MAX;
volatile int16_t x237 = INT16_MIN;
static int32_t x241 = INT32_MIN;
uint16_t x243 = 13U;
volatile int32_t t53 = 106251;
int16_t x253 = -1;
uint8_t x255 = 44U;
volatile int32_t t57 = 0;
static volatile int8_t x261 = INT8_MIN;
uint16_t x263 = UINT16_MAX;
static volatile uint8_t x271 = 1U;
volatile uint8_t x273 = UINT8_MAX;
int16_t x274 = 371;
uint16_t x275 = 86U;
volatile int64_t x291 = INT64_MIN;
int32_t t64 = 11599124;
int32_t t65 = -342;
int8_t x299 = 1;
static uint16_t x300 = UINT16_MAX;
int32_t t66 = -464289038;
static volatile uint32_t x310 = UINT32_MAX;
volatile int16_t x321 = -1;
uint64_t x322 = 522869490828558LLU;
uint8_t x330 = UINT8_MAX;
volatile int8_t x345 = -1;
uint32_t x348 = UINT32_MAX;
int8_t x356 = -14;
volatile int32_t t80 = 104720;
uint8_t x367 = 0U;
volatile uint32_t x381 = 193221811U;
int8_t x382 = -1;
int32_t t85 = -242540;
uint8_t x388 = 0U;
static uint32_t x394 = UINT32_MAX;
uint64_t x399 = 1816876LLU;
volatile int32_t t89 = 485640;
int16_t x401 = -5583;
uint32_t x406 = 6247029U;
int16_t x408 = INT16_MIN;
volatile int32_t t91 = -8035;
int8_t x410 = 3;
volatile uint16_t x413 = 3U;
uint16_t x416 = UINT16_MAX;
int64_t x425 = INT64_MAX;
int32_t x426 = INT32_MIN;
int8_t x446 = INT8_MIN;
int16_t x455 = INT16_MIN;
volatile int32_t t102 = 3;
int32_t t103 = 491;
static uint32_t x463 = UINT32_MAX;
volatile int32_t t104 = -961785258;
volatile int32_t t105 = -10089917;
uint64_t x473 = 1LLU;
volatile int32_t t106 = 355585980;
static uint8_t x479 = 74U;
int16_t x481 = -764;
volatile int32_t t108 = -54;
int16_t x485 = INT16_MIN;
static int64_t x492 = -10721890LL;
uint8_t x498 = 4U;
int16_t x508 = INT16_MIN;
static volatile int32_t t116 = -518194;
static uint8_t x519 = 56U;
int32_t t118 = 52;
int32_t x525 = -1;
int32_t t119 = 7;
volatile int8_t x529 = -1;
uint8_t x533 = UINT8_MAX;
uint16_t x539 = UINT16_MAX;
int8_t x543 = INT8_MIN;
int16_t x545 = INT16_MAX;
int16_t x549 = INT16_MIN;
volatile uint32_t x552 = 32877028U;
uint16_t x558 = UINT16_MAX;
volatile int32_t t128 = 107737069;
static uint16_t x567 = UINT16_MAX;
int32_t x568 = -1;
static int32_t t129 = 2;
uint16_t x571 = 54U;
int32_t x572 = INT32_MAX;
int64_t x580 = -635583LL;
int16_t x585 = INT16_MIN;
int16_t x586 = INT16_MIN;
int8_t x589 = 3;
int32_t t135 = 1070737423;
volatile int32_t t136 = 10476;
static int8_t x603 = -63;
volatile int32_t t137 = 0;
static volatile int32_t x612 = INT32_MIN;
int8_t x617 = 10;
volatile uint8_t x618 = 0U;
volatile int32_t t140 = -6095;
static int32_t x639 = INT32_MAX;
static uint32_t x640 = UINT32_MAX;
volatile int32_t t144 = 47725;
int16_t x642 = -1;
static int32_t t145 = 31361;
static int32_t x649 = INT32_MAX;
uint16_t x654 = UINT16_MAX;
volatile int8_t x655 = 1;
volatile uint16_t x657 = 653U;
uint32_t x658 = 13954U;
static int64_t x660 = INT64_MIN;
volatile int8_t x666 = INT8_MIN;
static int16_t x674 = -6218;
int32_t t152 = 37;
uint8_t x678 = 13U;
uint32_t x679 = UINT32_MAX;
int8_t x684 = INT8_MIN;
static int8_t x686 = INT8_MIN;
uint64_t x694 = 25LLU;
uint64_t x697 = 6LLU;
int8_t x698 = -1;
volatile uint64_t x699 = 1091369509294408241LLU;
volatile int32_t x703 = -1;
int32_t x710 = INT32_MIN;
uint8_t x713 = 1U;
uint8_t x719 = UINT8_MAX;
uint32_t x721 = 163503U;
volatile int32_t t164 = -526;
static int16_t x725 = INT16_MIN;
volatile int32_t x726 = -275;
uint16_t x727 = 22U;
volatile int32_t t166 = -8386227;
int8_t x737 = INT8_MIN;
volatile int64_t x740 = -146461270LL;
volatile int32_t x743 = INT32_MIN;
int8_t x746 = INT8_MAX;
volatile int16_t x748 = INT16_MAX;
int64_t x752 = INT64_MIN;
static int32_t t172 = 25;
int8_t x761 = -62;
int8_t x768 = -1;
int32_t x770 = 7;
static volatile int64_t x771 = INT64_MAX;
uint64_t x772 = 1LLU;
static int16_t x786 = -1;
static volatile int16_t x791 = INT16_MIN;
uint16_t x796 = 3641U;
int64_t x805 = INT64_MAX;
volatile uint64_t x806 = 929093641492248LLU;
volatile int8_t x810 = INT8_MIN;
volatile int32_t x812 = INT32_MAX;
volatile int64_t x813 = -17079076205LL;
uint8_t x826 = 32U;
volatile int16_t x829 = -1;
uint16_t x832 = 3U;
static int16_t x842 = -1;
static int32_t x855 = INT32_MAX;
int64_t x858 = 91670918193571LL;
int32_t x868 = 3169926;


void f0(void) {
    	volatile int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	static int32_t x3 = INT32_MIN;
	static uint64_t x4 = 1754929404582061LLU;

    t0 = ((x1&(x2-x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 22U;
	volatile int16_t x6 = 13;
	static int16_t x7 = INT16_MAX;
	volatile uint16_t x8 = 0U;

    t1 = ((x5&(x6-x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	uint16_t x10 = UINT16_MAX;
	int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 18987;

    t2 = ((x9&(x10-x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint8_t x15 = 41U;
	int32_t t3 = -24603749;

    t3 = ((x13&(x14-x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MIN;
	static volatile uint8_t x26 = 68U;
	int8_t x27 = INT8_MIN;
	static int32_t t4 = 16859505;

    t4 = ((x25&(x26-x27))>x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x30 = 10296960975367081LLU;
	int16_t x31 = INT16_MIN;
	volatile int8_t x32 = -5;
	volatile int32_t t5 = 52077;

    t5 = ((x29&(x30-x31))>x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = -1;
	int16_t x34 = INT16_MIN;
	int16_t x35 = -4058;
	int16_t x36 = -1;
	volatile int32_t t6 = -1;

    t6 = ((x33&(x34-x35))>x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -8564;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = 632U;
	int32_t t7 = -4;

    t7 = ((x37&(x38-x39))>x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x41 = INT16_MIN;
	volatile int32_t x43 = INT32_MAX;
	int32_t x44 = -1;
	volatile int32_t t8 = 115087526;

    t8 = ((x41&(x42-x43))>x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x50 = INT16_MAX;
	static int8_t x51 = -6;
	uint8_t x52 = UINT8_MAX;
	int32_t t9 = 293450;

    t9 = ((x49&(x50-x51))>x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	uint64_t x54 = 22746159899934LLU;
	static int16_t x55 = -383;
	int64_t x56 = INT64_MIN;
	volatile int32_t t10 = 32146;

    t10 = ((x53&(x54-x55))>x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x57 = 593;
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = -53;
	uint64_t x60 = 1520610847261149LLU;
	static int32_t t11 = 4;

    t11 = ((x57&(x58-x59))>x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x61 = INT64_MIN;
	int16_t x62 = -27;
	volatile uint16_t x63 = UINT16_MAX;
	int32_t t12 = -1;

    t12 = ((x61&(x62-x63))>x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x65 = 0U;
	volatile int8_t x67 = 4;
	int64_t x68 = INT64_MIN;
	static int32_t t13 = -17655;

    t13 = ((x65&(x66-x67))>x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x69 = 1U;
	volatile int64_t x70 = 0LL;
	int32_t x72 = INT32_MAX;

    t14 = ((x69&(x70-x71))>x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x73 = 3404U;
	volatile int16_t x74 = INT16_MIN;
	volatile int8_t x75 = -1;
	static int64_t x76 = 2606109710LL;
	static int32_t t15 = -193353;

    t15 = ((x73&(x74-x75))>x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x78 = INT16_MAX;
	static volatile uint32_t x80 = UINT32_MAX;

    t16 = ((x77&(x78-x79))>x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x82 = -6;
	int8_t x83 = INT8_MIN;
	int32_t t17 = 59072;

    t17 = ((x81&(x82-x83))>x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x85 = -34327LL;
	uint64_t x86 = 3LLU;
	static int8_t x87 = INT8_MIN;
	volatile int64_t x88 = INT64_MIN;
	int32_t t18 = -30;

    t18 = ((x85&(x86-x87))>x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = 5751;
	static int8_t x94 = INT8_MIN;
	volatile uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	volatile int32_t t19 = -76;

    t19 = ((x93&(x94-x95))>x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x97 = 24U;
	volatile int64_t x98 = 2920526730582467336LL;
	static volatile int16_t x99 = 5177;
	int32_t x100 = -281;
	volatile int32_t t20 = -1;

    t20 = ((x97&(x98-x99))>x100);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x101 = 34916359877310LLU;
	volatile uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;

    t21 = ((x101&(x102-x103))>x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x105 = -1;
	volatile int32_t x107 = INT32_MIN;
	volatile uint32_t x108 = UINT32_MAX;
	static int32_t t22 = -342080;

    t22 = ((x105&(x106-x107))>x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x109 = UINT64_MAX;
	int32_t x110 = 328;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = -1LL;
	volatile int32_t t23 = 1784192;

    t23 = ((x109&(x110-x111))>x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x119 = -10;
	int16_t x120 = -88;
	int32_t t24 = 2;

    t24 = ((x117&(x118-x119))>x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x122 = INT8_MIN;
	int64_t x124 = INT64_MAX;
	int32_t t25 = 174793287;

    t25 = ((x121&(x122-x123))>x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = -13;
	static volatile uint64_t x128 = UINT64_MAX;
	volatile int32_t t26 = -12;

    t26 = ((x125&(x126-x127))>x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = -278;
	volatile int8_t x130 = 52;
	int8_t x131 = 2;
	uint64_t x132 = 30LLU;

    t27 = ((x129&(x130-x131))>x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x137 = 25668034549112LLU;
	volatile int16_t x138 = 0;
	uint64_t x139 = 5503579125518LLU;
	int16_t x140 = -1;
	int32_t t28 = -15;

    t28 = ((x137&(x138-x139))>x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 985U;
	uint16_t x142 = 3U;
	int64_t x143 = -1LL;
	static uint64_t x144 = UINT64_MAX;
	int32_t t29 = -213741304;

    t29 = ((x141&(x142-x143))>x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x145 = -6742644192977LL;
	static uint16_t x146 = 15137U;
	volatile uint16_t x147 = 70U;
	static uint8_t x148 = UINT8_MAX;
	static int32_t t30 = 0;

    t30 = ((x145&(x146-x147))>x148);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x150 = 30488LLU;
	int8_t x151 = -1;
	volatile int32_t t31 = 1609489;

    t31 = ((x149&(x150-x151))>x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	static int8_t x154 = INT8_MIN;
	volatile int16_t x156 = INT16_MAX;
	int32_t t32 = 2699;

    t32 = ((x153&(x154-x155))>x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x157 = INT64_MIN;
	int32_t x159 = -1;

    t33 = ((x157&(x158-x159))>x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x161 = 11U;
	static uint8_t x162 = 5U;
	volatile int16_t x163 = INT16_MAX;
	volatile int32_t t34 = 88;

    t34 = ((x161&(x162-x163))>x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = 3;
	volatile uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 78693328072689612LLU;
	volatile int32_t t35 = -6405;

    t35 = ((x165&(x166-x167))>x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x169 = 26799008U;
	int32_t x170 = -106054299;
	int8_t x172 = -1;

    t36 = ((x169&(x170-x171))>x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = -1;
	uint8_t x174 = 10U;
	static int32_t t37 = -29372060;

    t37 = ((x173&(x174-x175))>x176);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = 473573278722LLU;
	int8_t x178 = INT8_MAX;
	int8_t x180 = 10;
	static volatile int32_t t38 = -53592;

    t38 = ((x177&(x178-x179))>x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x184 = -57;
	int32_t t39 = 246277452;

    t39 = ((x181&(x182-x183))>x184);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	static int16_t x187 = INT16_MIN;
	volatile uint64_t x188 = UINT64_MAX;

    t40 = ((x185&(x186-x187))>x188);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x190 = -8;
	uint8_t x191 = 2U;
	volatile int8_t x192 = -1;
	static volatile int32_t t41 = -4250;

    t41 = ((x189&(x190-x191))>x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x193 = UINT8_MAX;
	int64_t x194 = 880076276LL;
	int32_t x195 = -1790837;
	int16_t x196 = INT16_MIN;
	volatile int32_t t42 = -8;

    t42 = ((x193&(x194-x195))>x196);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MIN;
	static uint64_t x198 = 25LLU;
	int16_t x199 = -4;
	volatile uint32_t x200 = 3787062U;
	static volatile int32_t t43 = 12;

    t43 = ((x197&(x198-x199))>x200);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = 15351157108730653LL;
	uint8_t x202 = 0U;
	volatile uint16_t x203 = 5838U;
	static volatile int8_t x204 = INT8_MIN;

    t44 = ((x201&(x202-x203))>x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	int8_t x206 = -1;
	volatile uint64_t x207 = 18183643LLU;
	static uint32_t x208 = UINT32_MAX;

    t45 = ((x205&(x206-x207))>x208);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = INT8_MIN;
	volatile int64_t x210 = INT64_MIN;
	static int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;

    t46 = ((x209&(x210-x211))>x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x213 = 3940909527590525LLU;
	static uint8_t x215 = 26U;
	static volatile uint8_t x216 = UINT8_MAX;
	int32_t t47 = 3679;

    t47 = ((x213&(x214-x215))>x216);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x218 = 496606087462506LLU;
	volatile uint8_t x219 = 36U;
	int32_t x220 = INT32_MAX;
	static int32_t t48 = 122604;

    t48 = ((x217&(x218-x219))>x220);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = -1;
	int16_t x222 = -1;
	static uint16_t x224 = 11U;
	static int32_t t49 = 239376597;

    t49 = ((x221&(x222-x223))>x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x225 = 86312;
	int64_t x226 = -47187478040660LL;
	int8_t x227 = INT8_MAX;
	static uint16_t x228 = 1472U;
	int32_t t50 = 8149360;

    t50 = ((x225&(x226-x227))>x228);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x229 = INT16_MAX;
	int8_t x231 = INT8_MAX;
	int32_t t51 = -2;

    t51 = ((x229&(x230-x231))>x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x238 = 8031519LLU;
	int16_t x239 = INT16_MAX;
	uint16_t x240 = 3383U;
	static int32_t t52 = -7;

    t52 = ((x237&(x238-x239))>x240);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x242 = -1;
	int16_t x244 = -3;

    t53 = ((x241&(x242-x243))>x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x245 = INT64_MIN;
	static uint64_t x246 = UINT64_MAX;
	int16_t x247 = 126;
	static int64_t x248 = 11410028LL;
	int32_t t54 = 640;

    t54 = ((x245&(x246-x247))>x248);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x249 = INT64_MAX;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t55 = -47897;

    t55 = ((x249&(x250-x251))>x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x254 = INT16_MIN;
	int32_t x256 = -1;
	volatile int32_t t56 = -114217;

    t56 = ((x253&(x254-x255))>x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = -1;
	static volatile uint8_t x258 = 16U;
	static int32_t x259 = INT32_MAX;
	int64_t x260 = INT64_MIN;

    t57 = ((x257&(x258-x259))>x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x262 = -1;
	uint8_t x264 = 15U;
	volatile int32_t t58 = -7019102;

    t58 = ((x261&(x262-x263))>x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = 45;
	uint8_t x266 = 61U;
	int64_t x267 = INT64_MAX;
	volatile int64_t x268 = -84438LL;
	static int32_t t59 = -2855;

    t59 = ((x265&(x266-x267))>x268);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MAX;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t60 = 20186268;

    t60 = ((x269&(x270-x271))>x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x276 = INT32_MIN;
	int32_t t61 = -13316059;

    t61 = ((x273&(x274-x275))>x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x277 = 75035LLU;
	int64_t x278 = INT64_MAX;
	uint16_t x279 = 10U;
	uint64_t x280 = 19140564LLU;
	static volatile int32_t t62 = -168017245;

    t62 = ((x277&(x278-x279))>x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	volatile int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t63 = -7653665;

    t63 = ((x285&(x286-x287))>x288);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x289 = 11059;
	volatile int8_t x290 = -1;
	uint16_t x292 = UINT16_MAX;

    t64 = ((x289&(x290-x291))>x292);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x293 = 1524896;
	int16_t x294 = -774;
	uint32_t x295 = UINT32_MAX;
	volatile int16_t x296 = INT16_MIN;

    t65 = ((x293&(x294-x295))>x296);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = -140652685;
	volatile int32_t x298 = INT32_MAX;

    t66 = ((x297&(x298-x299))>x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x301 = 2153784;
	uint32_t x302 = 13497U;
	int16_t x303 = -1;
	int8_t x304 = INT8_MAX;
	volatile int32_t t67 = 98078800;

    t67 = ((x301&(x302-x303))>x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x309 = -21699726282262LL;
	uint8_t x311 = 1U;
	int64_t x312 = INT64_MIN;
	volatile int32_t t68 = -11;

    t68 = ((x309&(x310-x311))>x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x313 = UINT64_MAX;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MAX;
	int8_t x316 = -1;
	volatile int32_t t69 = -24494923;

    t69 = ((x313&(x314-x315))>x316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = -1;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t70 = -914674;

    t70 = ((x317&(x318-x319))>x320);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x323 = UINT32_MAX;
	int8_t x324 = -1;
	volatile int32_t t71 = -136402;

    t71 = ((x321&(x322-x323))>x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	int16_t x327 = -49;
	int32_t x328 = -1;
	volatile int32_t t72 = 276527357;

    t72 = ((x325&(x326-x327))>x328);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x329 = 1U;
	static int16_t x331 = -28;
	uint32_t x332 = 196729218U;
	volatile int32_t t73 = 33;

    t73 = ((x329&(x330-x331))>x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = INT16_MAX;
	volatile uint8_t x334 = UINT8_MAX;
	static uint8_t x335 = 1U;
	int32_t x336 = -1;
	volatile int32_t t74 = 4;

    t74 = ((x333&(x334-x335))>x336);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x337 = UINT64_MAX;
	static int32_t x338 = -24438;
	uint8_t x339 = UINT8_MAX;
	volatile int8_t x340 = 41;
	static int32_t t75 = -26850078;

    t75 = ((x337&(x338-x339))>x340);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = -4;
	uint16_t x342 = 1U;
	static int16_t x343 = 7;
	uint32_t x344 = 163328U;
	static volatile int32_t t76 = -15911;

    t76 = ((x341&(x342-x343))>x344);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MAX;
	volatile int32_t t77 = 130548608;

    t77 = ((x345&(x346-x347))>x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x349 = 0U;
	int32_t x350 = -1;
	int32_t x351 = INT32_MIN;
	int64_t x352 = -1LL;
	int32_t t78 = 125798;

    t78 = ((x349&(x350-x351))>x352);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = 125950627;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = UINT8_MAX;
	static volatile int32_t t79 = 6930;

    t79 = ((x353&(x354-x355))>x356);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x357 = INT64_MIN;
	uint8_t x358 = 12U;
	uint32_t x359 = 3098169U;
	int8_t x360 = -2;

    t80 = ((x357&(x358-x359))>x360);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = INT16_MAX;
	uint32_t x362 = 14041360U;
	static int32_t x363 = INT32_MIN;
	uint16_t x364 = 6U;
	int32_t t81 = 2480;

    t81 = ((x361&(x362-x363))>x364);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x365 = INT64_MAX;
	int64_t x366 = -1666562962370074LL;
	volatile int8_t x368 = 14;
	int32_t t82 = -7901770;

    t82 = ((x365&(x366-x367))>x368);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x369 = 1313;
	int8_t x370 = INT8_MIN;
	int8_t x371 = -1;
	static volatile int64_t x372 = -374743912LL;
	static int32_t t83 = 306;

    t83 = ((x369&(x370-x371))>x372);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x377 = UINT8_MAX;
	volatile int16_t x378 = -480;
	int8_t x379 = INT8_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t84 = 6;

    t84 = ((x377&(x378-x379))>x380);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x383 = -1LL;
	int64_t x384 = 162964538016355LL;

    t85 = ((x381&(x382-x383))>x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x385 = 31U;
	volatile uint64_t x386 = UINT64_MAX;
	static int8_t x387 = INT8_MAX;
	volatile int32_t t86 = 102565727;

    t86 = ((x385&(x386-x387))>x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MIN;
	int32_t x391 = -766;
	int8_t x392 = INT8_MIN;
	int32_t t87 = 33326;

    t87 = ((x389&(x390-x391))>x392);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x393 = UINT8_MAX;
	static int16_t x395 = INT16_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t88 = -2066;

    t88 = ((x393&(x394-x395))>x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x397 = UINT16_MAX;
	int8_t x398 = 1;
	int8_t x400 = INT8_MAX;

    t89 = ((x397&(x398-x399))>x400);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x402 = UINT64_MAX;
	int8_t x403 = -1;
	uint16_t x404 = 132U;
	int32_t t90 = -3424818;

    t90 = ((x401&(x402-x403))>x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = 27107;
	static uint64_t x407 = 101850113786392LLU;

    t91 = ((x405&(x406-x407))>x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x409 = -1;
	int64_t x411 = -1600553952465LL;
	static uint64_t x412 = UINT64_MAX;
	volatile int32_t t92 = 25808;

    t92 = ((x409&(x410-x411))>x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x414 = INT64_MIN;
	volatile uint64_t x415 = 692885LLU;
	static int32_t t93 = 912775535;

    t93 = ((x413&(x414-x415))>x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x417 = -1;
	int16_t x418 = INT16_MIN;
	int8_t x419 = -2;
	static volatile int16_t x420 = -8006;
	volatile int32_t t94 = -5648733;

    t94 = ((x417&(x418-x419))>x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x421 = -1;
	int32_t x422 = INT32_MAX;
	uint16_t x423 = 87U;
	volatile int8_t x424 = 48;
	volatile int32_t t95 = 938890218;

    t95 = ((x421&(x422-x423))>x424);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x427 = 859U;
	int32_t x428 = -1760;
	int32_t t96 = 0;

    t96 = ((x425&(x426-x427))>x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x429 = -2;
	static int32_t x430 = 97917015;
	int16_t x431 = -1;
	int16_t x432 = -4560;
	static volatile int32_t t97 = 827;

    t97 = ((x429&(x430-x431))>x432);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x434 = -1;
	static int32_t x435 = -1;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t98 = -1669670;

    t98 = ((x433&(x434-x435))>x436);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x441 = 41;
	int16_t x442 = -1;
	int32_t x443 = INT32_MIN;
	int8_t x444 = -1;
	volatile int32_t t99 = 28890;

    t99 = ((x441&(x442-x443))>x444);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int32_t x447 = -1;
	static uint8_t x448 = 5U;
	int32_t t100 = -101483407;

    t100 = ((x445&(x446-x447))>x448);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x449 = INT8_MIN;
	uint64_t x450 = UINT64_MAX;
	volatile uint64_t x451 = UINT64_MAX;
	static int16_t x452 = INT16_MAX;
	static volatile int32_t t101 = 986082;

    t101 = ((x449&(x450-x451))>x452);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x453 = INT32_MIN;
	uint8_t x454 = 15U;
	volatile int16_t x456 = 2;

    t102 = ((x453&(x454-x455))>x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x457 = INT64_MAX;
	int8_t x458 = INT8_MAX;
	static volatile uint64_t x459 = 369676546802907333LLU;
	int32_t x460 = INT32_MAX;

    t103 = ((x457&(x458-x459))>x460);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x461 = 25U;
	static int16_t x462 = -1;
	uint16_t x464 = 969U;

    t104 = ((x461&(x462-x463))>x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x465 = INT64_MIN;
	int8_t x466 = INT8_MIN;
	uint32_t x467 = 1U;
	static int16_t x468 = -1;

    t105 = ((x465&(x466-x467))>x468);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x474 = 19520155U;
	static uint32_t x475 = 3U;
	int16_t x476 = INT16_MAX;

    t106 = ((x473&(x474-x475))>x476);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x477 = UINT32_MAX;
	static volatile int8_t x478 = -1;
	static uint32_t x480 = 1U;
	static int32_t t107 = 1230;

    t107 = ((x477&(x478-x479))>x480);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x482 = -6;
	int8_t x483 = INT8_MAX;
	int32_t x484 = INT32_MIN;

    t108 = ((x481&(x482-x483))>x484);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x486 = 21;
	static int16_t x487 = INT16_MAX;
	int64_t x488 = INT64_MAX;
	int32_t t109 = 0;

    t109 = ((x485&(x486-x487))>x488);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x489 = INT8_MIN;
	volatile int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	int32_t t110 = -1;

    t110 = ((x489&(x490-x491))>x492);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = -14;
	int64_t x494 = -1LL;
	uint16_t x495 = UINT16_MAX;
	static uint8_t x496 = 8U;
	int32_t t111 = 98412307;

    t111 = ((x493&(x494-x495))>x496);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	volatile uint32_t x499 = 302229973U;
	int16_t x500 = 3083;
	volatile int32_t t112 = -265896230;

    t112 = ((x497&(x498-x499))>x500);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x501 = 524584417U;
	int16_t x502 = INT16_MIN;
	static uint64_t x503 = 363961280410LLU;
	static uint16_t x504 = 13U;
	volatile int32_t t113 = 16858;

    t113 = ((x501&(x502-x503))>x504);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x505 = 2341870941998833220LLU;
	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MIN;
	int32_t t114 = 1224;

    t114 = ((x505&(x506-x507))>x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x509 = 1U;
	int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	uint64_t x512 = 9602221724504414LLU;
	volatile int32_t t115 = 0;

    t115 = ((x509&(x510-x511))>x512);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x513 = -1;
	int64_t x514 = 2540094815LL;
	int16_t x515 = -256;
	volatile int8_t x516 = INT8_MAX;

    t116 = ((x513&(x514-x515))>x516);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = -14728;
	int16_t x518 = 1840;
	int64_t x520 = INT64_MIN;
	static int32_t t117 = 32;

    t117 = ((x517&(x518-x519))>x520);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint8_t x522 = 14U;
	volatile int16_t x523 = INT16_MIN;
	volatile uint64_t x524 = 338521200LLU;

    t118 = ((x521&(x522-x523))>x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x526 = 13U;
	int32_t x527 = INT32_MAX;
	uint16_t x528 = UINT16_MAX;

    t119 = ((x525&(x526-x527))>x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x530 = 2;
	int16_t x531 = -1;
	static int64_t x532 = -1LL;
	volatile int32_t t120 = 6164247;

    t120 = ((x529&(x530-x531))>x532);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x534 = 678827636264978798LL;
	int8_t x535 = -1;
	static uint8_t x536 = 10U;
	volatile int32_t t121 = -61;

    t121 = ((x533&(x534-x535))>x536);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int16_t x538 = 18;
	int16_t x540 = -1;
	volatile int32_t t122 = 101;

    t122 = ((x537&(x538-x539))>x540);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x541 = -1;
	static int16_t x542 = INT16_MAX;
	int8_t x544 = -31;
	volatile int32_t t123 = -1834;

    t123 = ((x541&(x542-x543))>x544);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x546 = 38194U;
	uint32_t x547 = 4U;
	static int32_t x548 = INT32_MIN;
	volatile int32_t t124 = -1140;

    t124 = ((x545&(x546-x547))>x548);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x550 = UINT8_MAX;
	int8_t x551 = -1;
	volatile int32_t t125 = -2;

    t125 = ((x549&(x550-x551))>x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x553 = -366783174;
	int8_t x554 = -7;
	uint16_t x555 = 104U;
	int32_t x556 = -1;
	int32_t t126 = -1013784006;

    t126 = ((x553&(x554-x555))>x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x557 = INT16_MIN;
	int32_t x559 = -1;
	int8_t x560 = INT8_MIN;
	int32_t t127 = -422;

    t127 = ((x557&(x558-x559))>x560);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x561 = INT32_MAX;
	uint32_t x562 = 29392096U;
	int8_t x563 = -1;
	uint32_t x564 = UINT32_MAX;

    t128 = ((x561&(x562-x563))>x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x565 = INT8_MIN;
	static int64_t x566 = -152428LL;

    t129 = ((x565&(x566-x567))>x568);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x570 = INT32_MAX;
	int32_t t130 = 988172;

    t130 = ((x569&(x570-x571))>x572);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x573 = INT8_MAX;
	int32_t x574 = INT32_MIN;
	int8_t x575 = INT8_MIN;
	uint64_t x576 = 6995395LLU;
	int32_t t131 = 885027802;

    t131 = ((x573&(x574-x575))>x576);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = INT64_MIN;
	static uint64_t x578 = 5951601LLU;
	volatile int32_t x579 = INT32_MIN;
	volatile int32_t t132 = 5;

    t132 = ((x577&(x578-x579))>x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x587 = UINT64_MAX;
	volatile int32_t x588 = 13127009;
	static volatile int32_t t133 = -1;

    t133 = ((x585&(x586-x587))>x588);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x590 = UINT32_MAX;
	static int32_t x591 = 112;
	volatile int64_t x592 = 6441LL;
	int32_t t134 = 858931;

    t134 = ((x589&(x590-x591))>x592);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x593 = INT32_MIN;
	int32_t x594 = -1;
	static volatile int8_t x595 = -1;
	volatile int8_t x596 = 5;

    t135 = ((x593&(x594-x595))>x596);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x597 = -1;
	int16_t x598 = -351;
	int8_t x599 = 5;
	volatile int32_t x600 = -30139063;

    t136 = ((x597&(x598-x599))>x600);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x601 = 0U;
	static volatile int32_t x602 = INT32_MIN;
	int16_t x604 = INT16_MIN;

    t137 = ((x601&(x602-x603))>x604);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x605 = 1022346282689268LLU;
	uint64_t x606 = 12299LLU;
	int16_t x607 = 1;
	int16_t x608 = INT16_MIN;
	volatile int32_t t138 = -28;

    t138 = ((x605&(x606-x607))>x608);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x609 = -1760;
	static uint16_t x610 = 4U;
	uint16_t x611 = UINT16_MAX;
	int32_t t139 = 1620;

    t139 = ((x609&(x610-x611))>x612);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x619 = -32;
	int16_t x620 = 84;

    t140 = ((x617&(x618-x619))>x620);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x621 = 185;
	static uint8_t x622 = 0U;
	int16_t x623 = -1;
	int64_t x624 = -1332356LL;
	int32_t t141 = 1;

    t141 = ((x621&(x622-x623))>x624);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x625 = INT16_MIN;
	uint64_t x626 = 10290157557479LLU;
	volatile int64_t x627 = INT64_MIN;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t142 = 203757415;

    t142 = ((x625&(x626-x627))>x628);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x633 = 175U;
	uint32_t x634 = 24U;
	int16_t x635 = INT16_MIN;
	int32_t x636 = -1;
	volatile int32_t t143 = -9597676;

    t143 = ((x633&(x634-x635))>x636);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x637 = UINT16_MAX;
	volatile int64_t x638 = 11842LL;

    t144 = ((x637&(x638-x639))>x640);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x641 = UINT64_MAX;
	static int16_t x643 = -24;
	int64_t x644 = 1LL;

    t145 = ((x641&(x642-x643))>x644);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x645 = -1LL;
	uint64_t x646 = 11LLU;
	int16_t x647 = INT16_MIN;
	static int8_t x648 = 0;
	volatile int32_t t146 = 464775;

    t146 = ((x645&(x646-x647))>x648);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x650 = INT16_MIN;
	uint16_t x651 = 0U;
	static volatile uint8_t x652 = 94U;
	volatile int32_t t147 = -2660;

    t147 = ((x649&(x650-x651))>x652);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x653 = -8464120889LL;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t148 = -1045072;

    t148 = ((x653&(x654-x655))>x656);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x659 = UINT64_MAX;
	int32_t t149 = -6699081;

    t149 = ((x657&(x658-x659))>x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x661 = 0U;
	volatile int8_t x662 = INT8_MAX;
	int32_t x663 = 57;
	int8_t x664 = -18;
	int32_t t150 = -9474838;

    t150 = ((x661&(x662-x663))>x664);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x665 = -1;
	static uint64_t x667 = 61212LLU;
	int8_t x668 = INT8_MIN;
	volatile int32_t t151 = 173538983;

    t151 = ((x665&(x666-x667))>x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x673 = -1337;
	static int32_t x675 = INT32_MIN;
	int16_t x676 = INT16_MIN;

    t152 = ((x673&(x674-x675))>x676);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x677 = -1;
	int32_t x680 = 362;
	static int32_t t153 = 33080;

    t153 = ((x677&(x678-x679))>x680);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x681 = 1U;
	int16_t x682 = 401;
	int16_t x683 = -1;
	int32_t t154 = -642340;

    t154 = ((x681&(x682-x683))>x684);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x685 = 2U;
	int32_t x687 = 236160;
	uint8_t x688 = 15U;
	volatile int32_t t155 = -3;

    t155 = ((x685&(x686-x687))>x688);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x689 = 374988LL;
	volatile int16_t x690 = -1;
	static int32_t x691 = -1;
	int16_t x692 = -16364;
	volatile int32_t t156 = -9419;

    t156 = ((x689&(x690-x691))>x692);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x693 = 15202;
	volatile uint32_t x695 = UINT32_MAX;
	int32_t x696 = INT32_MAX;
	volatile int32_t t157 = 121365;

    t157 = ((x693&(x694-x695))>x696);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x700 = INT32_MIN;
	int32_t t158 = -13453475;

    t158 = ((x697&(x698-x699))>x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	uint16_t x702 = 6034U;
	uint16_t x704 = UINT16_MAX;
	static volatile int32_t t159 = 13355206;

    t159 = ((x701&(x702-x703))>x704);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x705 = 4780;
	static int16_t x706 = -7867;
	volatile int64_t x707 = INT64_MIN;
	int64_t x708 = -7733497198019511LL;
	int32_t t160 = 83;

    t160 = ((x705&(x706-x707))>x708);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x709 = 32066947766718LL;
	static int16_t x711 = INT16_MIN;
	int16_t x712 = INT16_MIN;
	static int32_t t161 = -11;

    t161 = ((x709&(x710-x711))>x712);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x714 = 54U;
	uint32_t x715 = 4091657U;
	static uint16_t x716 = 2U;
	int32_t t162 = 32732824;

    t162 = ((x713&(x714-x715))>x716);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x717 = 39;
	uint8_t x718 = UINT8_MAX;
	static int16_t x720 = -1;
	volatile int32_t t163 = -200903;

    t163 = ((x717&(x718-x719))>x720);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x722 = 6103470LLU;
	static int64_t x723 = INT64_MAX;
	int8_t x724 = INT8_MIN;

    t164 = ((x721&(x722-x723))>x724);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x728 = 1LL;
	int32_t t165 = 9705321;

    t165 = ((x725&(x726-x727))>x728);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x729 = INT64_MIN;
	int8_t x730 = INT8_MIN;
	int8_t x731 = -1;
	uint8_t x732 = 2U;

    t166 = ((x729&(x730-x731))>x732);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x738 = UINT64_MAX;
	uint64_t x739 = 18884502366455792LLU;
	static int32_t t167 = -3572860;

    t167 = ((x737&(x738-x739))>x740);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x741 = 4U;
	int32_t x742 = INT32_MIN;
	int64_t x744 = 992335138082218LL;
	volatile int32_t t168 = 24780;

    t168 = ((x741&(x742-x743))>x744);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = 7747;
	uint32_t x747 = UINT32_MAX;
	volatile int32_t t169 = 1;

    t169 = ((x745&(x746-x747))>x748);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x749 = 11700U;
	volatile uint32_t x750 = UINT32_MAX;
	int64_t x751 = INT64_MAX;
	static int32_t t170 = 517;

    t170 = ((x749&(x750-x751))>x752);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x753 = -360;
	static int16_t x754 = -311;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MIN;
	volatile int32_t t171 = -13226851;

    t171 = ((x753&(x754-x755))>x756);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x757 = INT32_MAX;
	volatile int16_t x758 = 1446;
	static int32_t x759 = -11619511;
	int16_t x760 = INT16_MIN;

    t172 = ((x757&(x758-x759))>x760);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x762 = UINT16_MAX;
	int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MAX;
	volatile int32_t t173 = 19446860;

    t173 = ((x761&(x762-x763))>x764);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x765 = INT64_MIN;
	int64_t x766 = 681965LL;
	uint64_t x767 = 561392155014126LLU;
	volatile int32_t t174 = 0;

    t174 = ((x765&(x766-x767))>x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x769 = -1;
	volatile int32_t t175 = -284;

    t175 = ((x769&(x770-x771))>x772);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x773 = -1;
	uint16_t x774 = UINT16_MAX;
	int64_t x775 = -1LL;
	int8_t x776 = INT8_MAX;
	static int32_t t176 = 4286138;

    t176 = ((x773&(x774-x775))>x776);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x777 = UINT32_MAX;
	static int16_t x778 = -1;
	static int64_t x779 = INT64_MIN;
	volatile int64_t x780 = INT64_MAX;
	int32_t t177 = 291;

    t177 = ((x777&(x778-x779))>x780);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x781 = 35U;
	int16_t x782 = -2023;
	uint64_t x783 = 15039745876LLU;
	int64_t x784 = INT64_MAX;
	static int32_t t178 = 123615;

    t178 = ((x781&(x782-x783))>x784);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x785 = -1LL;
	uint8_t x787 = 28U;
	int8_t x788 = INT8_MIN;
	int32_t t179 = 970889658;

    t179 = ((x785&(x786-x787))>x788);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x789 = INT64_MAX;
	int16_t x790 = 1776;
	uint16_t x792 = 1U;
	volatile int32_t t180 = 670222;

    t180 = ((x789&(x790-x791))>x792);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x793 = INT64_MIN;
	int16_t x794 = -67;
	static volatile int16_t x795 = 12441;
	int32_t t181 = -1032;

    t181 = ((x793&(x794-x795))>x796);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile int32_t x802 = -6313230;
	volatile uint32_t x803 = 81U;
	int8_t x804 = INT8_MIN;
	int32_t t182 = 214311020;

    t182 = ((x801&(x802-x803))>x804);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x807 = -1;
	int32_t x808 = INT32_MIN;
	int32_t t183 = -2930199;

    t183 = ((x805&(x806-x807))>x808);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x809 = 3;
	int64_t x811 = INT64_MIN;
	static int32_t t184 = 953;

    t184 = ((x809&(x810-x811))>x812);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x814 = UINT64_MAX;
	int32_t x815 = 17;
	int16_t x816 = INT16_MIN;
	volatile int32_t t185 = 243513;

    t185 = ((x813&(x814-x815))>x816);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x817 = -1;
	volatile uint32_t x818 = UINT32_MAX;
	static uint8_t x819 = 14U;
	uint64_t x820 = 30576367882816015LLU;
	volatile int32_t t186 = 243;

    t186 = ((x817&(x818-x819))>x820);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x821 = -1;
	uint32_t x822 = 6167U;
	volatile uint8_t x823 = UINT8_MAX;
	int16_t x824 = INT16_MIN;
	int32_t t187 = -23;

    t187 = ((x821&(x822-x823))>x824);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x825 = -1;
	static volatile int64_t x827 = INT64_MAX;
	int8_t x828 = INT8_MAX;
	volatile int32_t t188 = 0;

    t188 = ((x825&(x826-x827))>x828);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x830 = -1;
	static int64_t x831 = -313LL;
	int32_t t189 = 1;

    t189 = ((x829&(x830-x831))>x832);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x833 = INT32_MIN;
	int8_t x834 = INT8_MIN;
	int64_t x835 = 848944793276041974LL;
	volatile int32_t x836 = -1;
	int32_t t190 = -16001517;

    t190 = ((x833&(x834-x835))>x836);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x837 = 9423587020LLU;
	uint8_t x838 = 6U;
	uint16_t x839 = UINT16_MAX;
	static int8_t x840 = INT8_MIN;
	int32_t t191 = 3;

    t191 = ((x837&(x838-x839))>x840);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = INT32_MIN;
	int8_t x843 = INT8_MIN;
	int8_t x844 = INT8_MIN;
	int32_t t192 = -1421090;

    t192 = ((x841&(x842-x843))>x844);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x845 = 9201720378LL;
	int8_t x846 = -1;
	volatile int32_t x847 = -1426764;
	int16_t x848 = INT16_MIN;
	volatile int32_t t193 = 113;

    t193 = ((x845&(x846-x847))>x848);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x849 = 114U;
	uint16_t x850 = 21U;
	static int16_t x851 = -1;
	int64_t x852 = -1LL;
	volatile int32_t t194 = -8159339;

    t194 = ((x849&(x850-x851))>x852);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x853 = 0U;
	uint8_t x854 = 57U;
	uint64_t x856 = 34934347889LLU;
	int32_t t195 = -1;

    t195 = ((x853&(x854-x855))>x856);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x857 = 3;
	int64_t x859 = -50010048598806878LL;
	uint8_t x860 = 0U;
	int32_t t196 = 837226734;

    t196 = ((x857&(x858-x859))>x860);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x861 = -1;
	static uint16_t x862 = 4U;
	static int32_t x863 = -3697139;
	static uint64_t x864 = 420736775375615LLU;
	volatile int32_t t197 = 0;

    t197 = ((x861&(x862-x863))>x864);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x865 = INT64_MAX;
	uint16_t x866 = 6793U;
	uint64_t x867 = 17103776196LLU;
	int32_t t198 = 64;

    t198 = ((x865&(x866-x867))>x868);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x869 = 237646140U;
	int64_t x870 = INT64_MAX;
	volatile int16_t x871 = INT16_MAX;
	static uint32_t x872 = UINT32_MAX;
	int32_t t199 = 732;

    t199 = ((x869&(x870-x871))>x872);

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

