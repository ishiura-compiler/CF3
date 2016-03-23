
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

static volatile int8_t x8 = -1;
volatile int32_t t1 = -685698;
static volatile int16_t x11 = -1;
static int32_t x15 = -1;
uint16_t x16 = UINT16_MAX;
static volatile int32_t t3 = -9671914;
volatile int32_t t4 = 953;
int32_t t5 = 101638042;
volatile int32_t x29 = 101713602;
static int64_t x30 = -1LL;
uint8_t x31 = 0U;
volatile int8_t x32 = INT8_MIN;
int16_t x53 = -1;
int32_t x64 = INT32_MIN;
static int8_t x65 = 7;
uint64_t x68 = 325672LLU;
static int32_t x69 = -12599271;
uint8_t x75 = 1U;
int64_t x81 = -1LL;
int64_t x87 = -264968192784703706LL;
uint16_t x91 = 9040U;
uint32_t x94 = 14U;
uint16_t x95 = 84U;
volatile int64_t x106 = -1LL;
int64_t x108 = 11LL;
volatile int8_t x111 = -2;
uint16_t x112 = 3U;
uint16_t x115 = UINT16_MAX;
static int16_t x118 = INT16_MAX;
volatile int32_t x122 = 50687445;
volatile uint8_t x124 = UINT8_MAX;
uint16_t x126 = 12402U;
static uint32_t x128 = 5777908U;
int32_t t26 = -1;
int8_t x130 = INT8_MIN;
uint8_t x133 = 3U;
int32_t x134 = -1;
int32_t t28 = -7;
uint16_t x147 = 7410U;
volatile int16_t x152 = 5;
volatile int64_t x158 = -1LL;
uint64_t x160 = UINT64_MAX;
int32_t t33 = 606764;
uint32_t x161 = UINT32_MAX;
volatile int8_t x162 = -1;
static volatile uint64_t x163 = 37683337402LLU;
int64_t x166 = INT64_MIN;
int64_t x171 = 33868365283LL;
int16_t x174 = INT16_MIN;
int32_t t37 = 375;
uint16_t x178 = 272U;
int32_t x181 = INT32_MIN;
uint8_t x191 = UINT8_MAX;
int8_t x192 = -10;
volatile int32_t x193 = -14;
int8_t x194 = -30;
static volatile int16_t x197 = INT16_MIN;
volatile int32_t t43 = 0;
static int16_t x201 = INT16_MIN;
int32_t t46 = -5866452;
int8_t x220 = INT8_MAX;
volatile int32_t t47 = 12528827;
int16_t x222 = INT16_MIN;
static int32_t t49 = 3;
volatile uint8_t x229 = 7U;
volatile int32_t t50 = -17512;
int16_t x246 = -1;
uint32_t x247 = UINT32_MAX;
int16_t x248 = 6;
static int16_t x252 = INT16_MIN;
volatile int32_t t55 = -760434;
uint8_t x253 = UINT8_MAX;
int32_t x267 = INT32_MIN;
int32_t x268 = INT32_MAX;
int16_t x271 = INT16_MIN;
volatile int32_t t59 = 49951;
uint32_t x276 = 332U;
static volatile int32_t t60 = -12056789;
uint64_t x277 = 456LLU;
int16_t x279 = -1;
int64_t x280 = INT64_MAX;
static volatile int32_t t61 = 2632246;
int32_t x281 = -4746236;
static uint16_t x282 = 1535U;
int16_t x286 = INT16_MAX;
volatile int16_t x288 = 51;
int32_t t63 = 1555;
int64_t x296 = INT64_MAX;
volatile uint16_t x307 = 389U;
volatile int8_t x313 = INT8_MIN;
uint32_t x321 = 471U;
volatile int32_t t72 = 2434;
int64_t x325 = INT64_MIN;
volatile int16_t x329 = -224;
volatile int32_t t75 = -6;
volatile int16_t x345 = INT16_MIN;
static int32_t x358 = 63;
uint32_t x359 = 669874U;
static uint8_t x360 = UINT8_MAX;
volatile int32_t t82 = -946;
static uint8_t x401 = 41U;
int16_t x410 = INT16_MAX;
static uint32_t x412 = 311045245U;
int32_t x417 = INT32_MAX;
uint64_t x428 = 3801679143997967LLU;
static uint8_t x432 = 6U;
uint8_t x436 = 8U;
int16_t x442 = -5641;
uint16_t x444 = UINT16_MAX;
static int8_t x447 = -12;
static uint8_t x451 = 2U;
int16_t x455 = INT16_MIN;
volatile int32_t t100 = -296483045;
static int16_t x459 = INT16_MIN;
int64_t x469 = INT64_MIN;
int32_t t102 = 1;
static volatile uint16_t x489 = 3613U;
uint16_t x493 = UINT16_MAX;
int16_t x496 = INT16_MIN;
int8_t x521 = -6;
int32_t x528 = INT32_MIN;
int32_t t115 = 101812546;
static int32_t t117 = -251863090;
uint8_t x550 = 5U;
volatile int8_t x552 = INT8_MAX;
int32_t x553 = 5448;
uint16_t x554 = 194U;
volatile uint64_t x555 = UINT64_MAX;
int16_t x557 = -118;
volatile int32_t t121 = -98003451;
static int8_t x568 = -2;
uint64_t x579 = UINT64_MAX;
int64_t x581 = INT64_MAX;
int16_t x584 = INT16_MAX;
int8_t x595 = INT8_MAX;
int32_t x602 = INT32_MIN;
int32_t x603 = INT32_MAX;
int8_t x604 = -29;
volatile int32_t t130 = -90152;
int16_t x605 = 86;
volatile int8_t x611 = 0;
int64_t x612 = 1004LL;
volatile int32_t t132 = 2132;
int8_t x616 = -1;
static int64_t x621 = -1LL;
volatile uint32_t x629 = 5U;
int32_t x631 = -1;
volatile int32_t x632 = INT32_MAX;
int32_t x633 = -2910524;
static int64_t x635 = 13293168LL;
static volatile int8_t x636 = INT8_MAX;
volatile int32_t x642 = -1;
int64_t x643 = 898LL;
int8_t x651 = -1;
uint32_t x652 = UINT32_MAX;
uint16_t x653 = UINT16_MAX;
uint8_t x656 = 18U;
uint64_t x659 = 62380065006LLU;
uint8_t x669 = 2U;
volatile int16_t x679 = -3;
uint32_t x688 = 1413U;
int8_t x699 = INT8_MAX;
volatile int32_t x701 = 1;
int64_t x702 = -1LL;
volatile int32_t t152 = -971000;
int16_t x727 = INT16_MIN;
volatile int32_t x736 = -275794;
uint64_t x743 = UINT64_MAX;
int32_t x748 = INT32_MAX;
int64_t x751 = INT64_MIN;
int16_t x756 = -1;
volatile int64_t x776 = INT64_MIN;
volatile int16_t x778 = 30;
static int16_t x780 = INT16_MIN;
int32_t t168 = 604090;
static int64_t x781 = 171240LL;
int16_t x786 = 69;
volatile uint32_t x790 = 1808U;
int16_t x791 = INT16_MIN;
volatile int32_t x799 = INT32_MIN;
static volatile int64_t x807 = 12868586370353379LL;
int32_t t176 = 178;
int8_t x817 = -1;
int64_t x824 = 0LL;
static volatile int32_t x825 = 796099;
int64_t x833 = -48678565421521LL;
uint32_t x837 = 1069463769U;
volatile int32_t t182 = -895315837;
volatile int16_t x844 = 783;
int8_t x848 = INT8_MIN;
int16_t x851 = INT16_MIN;
volatile int32_t t185 = 225470398;
int16_t x856 = 509;
static volatile int64_t x861 = -20LL;
static volatile int32_t t190 = 500;
static uint8_t x874 = UINT8_MAX;
int32_t x875 = 22;
int16_t x881 = INT16_MAX;
static int64_t x885 = -1LL;
int64_t x897 = 3591979513060775LL;
static uint64_t x906 = 140371021268042LLU;
uint64_t x912 = 1006971493876687LLU;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int32_t x2 = 28;
	static int8_t x3 = 3;
	uint64_t x4 = 18492208989170LLU;
	static int32_t t0 = -812575;

    t0 = ((x1!=(x2+x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 15141;
	int8_t x6 = 10;
	int32_t x7 = -18720;

    t1 = ((x5!=(x6+x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 788602613019876LL;
	static int8_t x10 = INT8_MIN;
	int8_t x12 = 0;
	int32_t t2 = -1037125;

    t2 = ((x9!=(x10+x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;

    t3 = ((x13!=(x14+x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int8_t x18 = -2;
	static int16_t x19 = -1;
	uint64_t x20 = 11223922LLU;

    t4 = ((x17!=(x18+x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static int16_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = INT64_MIN;

    t5 = ((x21!=(x22+x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint16_t x26 = 7886U;
	volatile uint64_t x27 = 2LLU;
	int64_t x28 = -1LL;
	volatile int32_t t6 = 0;

    t6 = ((x25!=(x26+x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t t7 = -344;

    t7 = ((x29!=(x30+x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	static volatile int16_t x38 = -1;
	int16_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	static volatile int32_t t8 = 768895;

    t8 = ((x37!=(x38+x39))!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x45 = 1LLU;
	int32_t x46 = -1;
	static int16_t x47 = INT16_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t9 = -181402;

    t9 = ((x45!=(x46+x47))!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x54 = UINT16_MAX;
	uint32_t x55 = 791087689U;
	int8_t x56 = -3;
	int32_t t10 = 375;

    t10 = ((x53!=(x54+x55))!=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x61 = 5732U;
	static int32_t x62 = -1;
	static int64_t x63 = 130371LL;
	static volatile int32_t t11 = -2;

    t11 = ((x61!=(x62+x63))!=x64);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	volatile int32_t t12 = 6288149;

    t12 = ((x65!=(x66+x67))!=x68);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x70 = 1726418909526LLU;
	int16_t x71 = -1;
	static int8_t x72 = -1;
	int32_t t13 = -502;

    t13 = ((x69!=(x70+x71))!=x72);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = 12652;
	int64_t x74 = INT64_MIN;
	static volatile int8_t x76 = -1;
	int32_t t14 = 203670030;

    t14 = ((x73!=(x74+x75))!=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x77 = -49;
	static int32_t x78 = -1;
	static volatile uint64_t x79 = 536LLU;
	static volatile uint16_t x80 = 5U;
	static int32_t t15 = -1;

    t15 = ((x77!=(x78+x79))!=x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x82 = INT64_MIN;
	uint32_t x83 = 235303U;
	static uint8_t x84 = 2U;
	volatile int32_t t16 = 2691767;

    t16 = ((x81!=(x82+x83))!=x84);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x85 = INT64_MIN;
	int32_t x86 = -1;
	uint8_t x88 = 57U;
	int32_t t17 = 128763;

    t17 = ((x85!=(x86+x87))!=x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x89 = INT32_MIN;
	static int32_t x90 = -3294268;
	static volatile int16_t x92 = INT16_MIN;
	int32_t t18 = 7871236;

    t18 = ((x89!=(x90+x91))!=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = INT64_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = 125825;

    t19 = ((x93!=(x94+x95))!=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x101 = 1U;
	int16_t x102 = INT16_MIN;
	static int16_t x103 = -1;
	int8_t x104 = -1;
	static volatile int32_t t20 = -1;

    t20 = ((x101!=(x102+x103))!=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x105 = 1846087865LL;
	int32_t x107 = INT32_MIN;
	int32_t t21 = 5526;

    t21 = ((x105!=(x106+x107))!=x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	volatile int32_t x110 = -8;
	int32_t t22 = 158;

    t22 = ((x109!=(x110+x111))!=x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -16;
	static int16_t x114 = INT16_MIN;
	volatile uint64_t x116 = 2299589LLU;
	volatile int32_t t23 = 4307916;

    t23 = ((x113!=(x114+x115))!=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x117 = 7;
	int32_t x119 = INT32_MIN;
	int64_t x120 = -1LL;
	int32_t t24 = 13;

    t24 = ((x117!=(x118+x119))!=x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x123 = 11;
	int32_t t25 = 4103;

    t25 = ((x121!=(x122+x123))!=x124);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x125 = 87U;
	uint16_t x127 = UINT16_MAX;

    t26 = ((x125!=(x126+x127))!=x128);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = 307;
	int8_t x131 = -6;
	static int8_t x132 = INT8_MIN;
	static volatile int32_t t27 = 137424709;

    t27 = ((x129!=(x130+x131))!=x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x135 = INT16_MIN;
	volatile int16_t x136 = INT16_MIN;

    t28 = ((x133!=(x134+x135))!=x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = 3998919197974806932LL;
	uint64_t x138 = UINT64_MAX;
	volatile uint8_t x139 = 61U;
	uint8_t x140 = 4U;
	volatile int32_t t29 = 2166705;

    t29 = ((x137!=(x138+x139))!=x140);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x141 = UINT64_MAX;
	int8_t x142 = INT8_MIN;
	int64_t x143 = -113801LL;
	uint64_t x144 = UINT64_MAX;
	int32_t t30 = 15978;

    t30 = ((x141!=(x142+x143))!=x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = 7067660830LLU;
	static int8_t x146 = 0;
	volatile int16_t x148 = INT16_MAX;
	int32_t t31 = 11574828;

    t31 = ((x145!=(x146+x147))!=x148);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x149 = INT32_MAX;
	volatile int64_t x150 = 15920060210LL;
	int8_t x151 = -7;
	static int32_t t32 = 1563134;

    t32 = ((x149!=(x150+x151))!=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int16_t x157 = INT16_MIN;
	int16_t x159 = -1;

    t33 = ((x157!=(x158+x159))!=x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x164 = -128032771168692LL;
	int32_t t34 = 21641927;

    t34 = ((x161!=(x162+x163))!=x164);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x165 = 19281445U;
	uint32_t x167 = 81543716U;
	uint16_t x168 = 4647U;
	volatile int32_t t35 = -48253723;

    t35 = ((x165!=(x166+x167))!=x168);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = -1;
	uint64_t x170 = 1209153LLU;
	static volatile int16_t x172 = INT16_MIN;
	int32_t t36 = -12705948;

    t36 = ((x169!=(x170+x171))!=x172);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = 882LLU;
	int64_t x175 = INT64_MAX;
	static int32_t x176 = 5;

    t37 = ((x173!=(x174+x175))!=x176);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x177 = 196577LL;
	int32_t x179 = INT32_MIN;
	volatile uint8_t x180 = UINT8_MAX;
	static volatile int32_t t38 = -367033910;

    t38 = ((x177!=(x178+x179))!=x180);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x182 = -17;
	static int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t39 = 58;

    t39 = ((x181!=(x182+x183))!=x184);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x185 = 126U;
	int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	static volatile int8_t x188 = INT8_MIN;
	static int32_t t40 = -537;

    t40 = ((x185!=(x186+x187))!=x188);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = 16263590326LL;
	int32_t x190 = INT32_MIN;
	volatile int32_t t41 = -1076;

    t41 = ((x189!=(x190+x191))!=x192);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x195 = -1;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t42 = -1590;

    t42 = ((x193!=(x194+x195))!=x196);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x198 = INT32_MAX;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = UINT32_MAX;

    t43 = ((x197!=(x198+x199))!=x200);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x202 = -381;
	uint16_t x203 = 1U;
	uint64_t x204 = 2879LLU;
	volatile int32_t t44 = 126;

    t44 = ((x201!=(x202+x203))!=x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -12;
	static int16_t x212 = INT16_MAX;
	int32_t t45 = 19876;

    t45 = ((x209!=(x210+x211))!=x212);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = -1;
	static int32_t x214 = INT32_MAX;
	static int32_t x215 = -294320;
	int8_t x216 = 1;

    t46 = ((x213!=(x214+x215))!=x216);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x217 = UINT8_MAX;
	static volatile uint16_t x218 = UINT16_MAX;
	int8_t x219 = -1;

    t47 = ((x217!=(x218+x219))!=x220);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x221 = 1;
	int16_t x223 = -1;
	int32_t x224 = 8290;
	int32_t t48 = 319899962;

    t48 = ((x221!=(x222+x223))!=x224);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = -1;
	int32_t x226 = INT32_MAX;
	static int64_t x227 = -21LL;
	static uint16_t x228 = 6U;

    t49 = ((x225!=(x226+x227))!=x228);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	uint8_t x232 = UINT8_MAX;

    t50 = ((x229!=(x230+x231))!=x232);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x233 = 6U;
	uint64_t x234 = 19386LLU;
	uint32_t x235 = UINT32_MAX;
	int16_t x236 = 359;
	int32_t t51 = 8584575;

    t51 = ((x233!=(x234+x235))!=x236);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MIN;
	int64_t x239 = 453294096194289LL;
	int8_t x240 = INT8_MIN;
	volatile int32_t t52 = 1;

    t52 = ((x237!=(x238+x239))!=x240);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = -1;
	static uint64_t x242 = 946982192143110261LLU;
	int8_t x243 = INT8_MAX;
	int32_t x244 = 520911;
	volatile int32_t t53 = -18;

    t53 = ((x241!=(x242+x243))!=x244);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x245 = -449;
	int32_t t54 = -13;

    t54 = ((x245!=(x246+x247))!=x248);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = INT8_MAX;

    t55 = ((x249!=(x250+x251))!=x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x254 = INT16_MAX;
	uint16_t x255 = 8U;
	int32_t x256 = INT32_MIN;
	static volatile int32_t t56 = -126014494;

    t56 = ((x253!=(x254+x255))!=x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x257 = INT64_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = 1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t57 = -170483262;

    t57 = ((x257!=(x258+x259))!=x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x265 = INT8_MIN;
	int32_t x266 = 652055063;
	volatile int32_t t58 = 502;

    t58 = ((x265!=(x266+x267))!=x268);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x269 = 10U;
	int8_t x270 = INT8_MIN;
	static int16_t x272 = INT16_MIN;

    t59 = ((x269!=(x270+x271))!=x272);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = -1941;
	uint8_t x274 = 90U;
	int8_t x275 = -1;

    t60 = ((x273!=(x274+x275))!=x276);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x278 = 70711976010920219LLU;

    t61 = ((x277!=(x278+x279))!=x280);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x283 = INT32_MIN;
	int8_t x284 = -1;
	volatile int32_t t62 = -1;

    t62 = ((x281!=(x282+x283))!=x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x285 = UINT16_MAX;
	static int32_t x287 = -1;

    t63 = ((x285!=(x286+x287))!=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x289 = 4685305U;
	int32_t x290 = -1;
	int32_t x291 = -1;
	uint16_t x292 = UINT16_MAX;
	int32_t t64 = 0;

    t64 = ((x289!=(x290+x291))!=x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x293 = 2038970U;
	volatile uint64_t x294 = 373865LLU;
	int16_t x295 = -275;
	static int32_t t65 = 806;

    t65 = ((x293!=(x294+x295))!=x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x297 = -1;
	uint16_t x298 = UINT16_MAX;
	static volatile int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MAX;
	int32_t t66 = 1;

    t66 = ((x297!=(x298+x299))!=x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = -1;
	uint16_t x302 = 179U;
	static int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t67 = 8;

    t67 = ((x301!=(x302+x303))!=x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MAX;
	volatile int8_t x306 = INT8_MIN;
	int8_t x308 = -1;
	static int32_t t68 = -970683780;

    t68 = ((x305!=(x306+x307))!=x308);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = -1;
	volatile int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	static int64_t x312 = -13537291346461494LL;
	int32_t t69 = -603890283;

    t69 = ((x309!=(x310+x311))!=x312);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x314 = 8109LL;
	static int8_t x315 = INT8_MAX;
	volatile int64_t x316 = INT64_MIN;
	volatile int32_t t70 = 117;

    t70 = ((x313!=(x314+x315))!=x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = -1;
	int32_t x318 = 0;
	volatile int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MAX;
	int32_t t71 = 190232031;

    t71 = ((x317!=(x318+x319))!=x320);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x322 = INT32_MIN;
	volatile int32_t x323 = 15;
	int16_t x324 = INT16_MIN;

    t72 = ((x321!=(x322+x323))!=x324);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x326 = 200525392LL;
	int8_t x327 = INT8_MIN;
	int8_t x328 = 3;
	volatile int32_t t73 = -196;

    t73 = ((x325!=(x326+x327))!=x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x330 = -32685751;
	volatile int32_t x331 = 232;
	int32_t x332 = INT32_MAX;
	volatile int32_t t74 = -863;

    t74 = ((x329!=(x330+x331))!=x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = -1LL;
	int8_t x336 = -1;

    t75 = ((x333!=(x334+x335))!=x336);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x337 = -1214019616LL;
	uint32_t x338 = 146U;
	volatile uint16_t x339 = UINT16_MAX;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t76 = 19244;

    t76 = ((x337!=(x338+x339))!=x340);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x346 = -1436;
	int16_t x347 = 1431;
	int32_t x348 = -1;
	volatile int32_t t77 = -10466;

    t77 = ((x345!=(x346+x347))!=x348);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = INT32_MIN;
	volatile int8_t x350 = INT8_MAX;
	static uint8_t x351 = UINT8_MAX;
	volatile uint32_t x352 = 20965569U;
	volatile int32_t t78 = -551767421;

    t78 = ((x349!=(x350+x351))!=x352);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = INT32_MAX;
	int8_t x354 = 17;
	int64_t x355 = -15590LL;
	volatile int64_t x356 = 11LL;
	volatile int32_t t79 = -323283779;

    t79 = ((x353!=(x354+x355))!=x356);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x357 = -2639;
	volatile int32_t t80 = -4692778;

    t80 = ((x357!=(x358+x359))!=x360);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x361 = INT16_MAX;
	volatile uint16_t x362 = 310U;
	int8_t x363 = 15;
	volatile uint64_t x364 = 10656860LLU;
	volatile int32_t t81 = -7666;

    t81 = ((x361!=(x362+x363))!=x364);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x365 = 668;
	volatile int16_t x366 = INT16_MAX;
	volatile uint64_t x367 = 533344117LLU;
	uint32_t x368 = UINT32_MAX;

    t82 = ((x365!=(x366+x367))!=x368);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x369 = 89;
	volatile int8_t x370 = INT8_MIN;
	static uint32_t x371 = 259519961U;
	int32_t x372 = -246677;
	int32_t t83 = 4;

    t83 = ((x369!=(x370+x371))!=x372);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x373 = 1170687699569LLU;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -9;
	volatile uint64_t x376 = 34449LLU;
	int32_t t84 = -50557;

    t84 = ((x373!=(x374+x375))!=x376);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x381 = INT16_MIN;
	uint16_t x382 = 2U;
	uint64_t x383 = 23225LLU;
	static int64_t x384 = 6635578913LL;
	volatile int32_t t85 = 1646;

    t85 = ((x381!=(x382+x383))!=x384);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x385 = -1;
	uint8_t x386 = 4U;
	int8_t x387 = INT8_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	int32_t t86 = 3318469;

    t86 = ((x385!=(x386+x387))!=x388);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x393 = UINT64_MAX;
	int32_t x394 = 441573;
	uint32_t x395 = UINT32_MAX;
	uint8_t x396 = 3U;
	int32_t t87 = -175;

    t87 = ((x393!=(x394+x395))!=x396);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x397 = INT16_MAX;
	volatile int64_t x398 = -1LL;
	volatile int16_t x399 = INT16_MIN;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t88 = 12051;

    t88 = ((x397!=(x398+x399))!=x400);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x402 = -1LL;
	static uint16_t x403 = 3U;
	volatile int16_t x404 = -1;
	static volatile int32_t t89 = 64642;

    t89 = ((x401!=(x402+x403))!=x404);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x409 = -40557;
	static volatile int8_t x411 = -1;
	static volatile int32_t t90 = 795;

    t90 = ((x409!=(x410+x411))!=x412);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = 68;
	int8_t x414 = 23;
	volatile int32_t x415 = INT32_MIN;
	volatile uint64_t x416 = 184473537LLU;
	static volatile int32_t t91 = -131;

    t91 = ((x413!=(x414+x415))!=x416);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x418 = UINT8_MAX;
	static int16_t x419 = -5;
	uint32_t x420 = 37287U;
	int32_t t92 = -6;

    t92 = ((x417!=(x418+x419))!=x420);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	uint8_t x427 = 2U;
	volatile int32_t t93 = -173366306;

    t93 = ((x425!=(x426+x427))!=x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x429 = INT64_MIN;
	uint8_t x430 = 1U;
	static int8_t x431 = INT8_MIN;
	int32_t t94 = -3541;

    t94 = ((x429!=(x430+x431))!=x432);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x433 = UINT64_MAX;
	uint32_t x434 = 136189066U;
	uint32_t x435 = 1U;
	int32_t t95 = 436;

    t95 = ((x433!=(x434+x435))!=x436);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x437 = INT8_MIN;
	volatile uint32_t x438 = 0U;
	int32_t x439 = -129655;
	uint16_t x440 = 2U;
	volatile int32_t t96 = -34433;

    t96 = ((x437!=(x438+x439))!=x440);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x441 = -1;
	int8_t x443 = -1;
	int32_t t97 = -524296300;

    t97 = ((x441!=(x442+x443))!=x444);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x445 = INT16_MIN;
	uint32_t x446 = 449852U;
	static volatile uint8_t x448 = UINT8_MAX;
	volatile int32_t t98 = 6;

    t98 = ((x445!=(x446+x447))!=x448);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x449 = INT16_MAX;
	uint16_t x450 = 2935U;
	int32_t x452 = INT32_MIN;
	volatile int32_t t99 = 45;

    t99 = ((x449!=(x450+x451))!=x452);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x453 = 10;
	int64_t x454 = INT64_MAX;
	int8_t x456 = -32;

    t100 = ((x453!=(x454+x455))!=x456);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x457 = 1456LLU;
	uint64_t x458 = UINT64_MAX;
	static int16_t x460 = INT16_MIN;
	int32_t t101 = -2631602;

    t101 = ((x457!=(x458+x459))!=x460);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x470 = UINT8_MAX;
	int64_t x471 = -17805842561086400LL;
	int64_t x472 = INT64_MIN;

    t102 = ((x469!=(x470+x471))!=x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = 9LL;
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -1;
	int32_t x476 = -10289260;
	int32_t t103 = -3828641;

    t103 = ((x473!=(x474+x475))!=x476);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x477 = 2;
	int16_t x478 = INT16_MAX;
	int16_t x479 = -1;
	static int64_t x480 = -1LL;
	int32_t t104 = -220678;

    t104 = ((x477!=(x478+x479))!=x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x481 = 35LLU;
	volatile int8_t x482 = 6;
	static volatile int64_t x483 = -81814035614LL;
	int64_t x484 = -387974330000565451LL;
	volatile int32_t t105 = 5;

    t105 = ((x481!=(x482+x483))!=x484);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x485 = INT16_MIN;
	static volatile uint64_t x486 = 9166LLU;
	int8_t x487 = 0;
	int16_t x488 = INT16_MIN;
	static int32_t t106 = 14043;

    t106 = ((x485!=(x486+x487))!=x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x490 = INT64_MIN;
	static uint16_t x491 = 11U;
	volatile int16_t x492 = -1;
	int32_t t107 = 103634067;

    t107 = ((x489!=(x490+x491))!=x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x494 = UINT32_MAX;
	int64_t x495 = -1LL;
	volatile int32_t t108 = 351;

    t108 = ((x493!=(x494+x495))!=x496);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x501 = 14LL;
	static int16_t x502 = INT16_MIN;
	uint32_t x503 = 5559U;
	int16_t x504 = INT16_MIN;
	volatile int32_t t109 = -5520;

    t109 = ((x501!=(x502+x503))!=x504);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x505 = 7LLU;
	static int16_t x506 = -894;
	int16_t x507 = 1;
	volatile int32_t x508 = 241740656;
	static volatile int32_t t110 = 2681770;

    t110 = ((x505!=(x506+x507))!=x508);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x509 = 78078U;
	static uint8_t x510 = 2U;
	int8_t x511 = -47;
	uint32_t x512 = 76017051U;
	int32_t t111 = 174;

    t111 = ((x509!=(x510+x511))!=x512);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x513 = 3U;
	int8_t x514 = 5;
	uint16_t x515 = 7U;
	uint8_t x516 = 2U;
	int32_t t112 = -4;

    t112 = ((x513!=(x514+x515))!=x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x517 = INT32_MAX;
	int64_t x518 = 4259604395LL;
	uint8_t x519 = 2U;
	int8_t x520 = -1;
	int32_t t113 = -37097564;

    t113 = ((x517!=(x518+x519))!=x520);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x522 = INT64_MIN;
	uint8_t x523 = 53U;
	int64_t x524 = 30364654LL;
	int32_t t114 = -4050595;

    t114 = ((x521!=(x522+x523))!=x524);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x525 = INT64_MIN;
	uint64_t x526 = 30372311978LLU;
	static volatile uint8_t x527 = UINT8_MAX;

    t115 = ((x525!=(x526+x527))!=x528);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x537 = INT8_MAX;
	uint32_t x538 = 3U;
	int32_t x539 = INT32_MAX;
	int16_t x540 = -1;
	static int32_t t116 = -58546968;

    t116 = ((x537!=(x538+x539))!=x540);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x541 = 182U;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = UINT8_MAX;
	volatile uint16_t x544 = 2281U;

    t117 = ((x541!=(x542+x543))!=x544);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x545 = -6901162;
	uint64_t x546 = 12605889810386627LLU;
	volatile uint8_t x547 = 0U;
	static int16_t x548 = INT16_MAX;
	int32_t t118 = 1;

    t118 = ((x545!=(x546+x547))!=x548);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x549 = INT64_MIN;
	uint16_t x551 = 5924U;
	static int32_t t119 = 39458012;

    t119 = ((x549!=(x550+x551))!=x552);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x556 = -1;
	volatile int32_t t120 = -500544;

    t120 = ((x553!=(x554+x555))!=x556);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MAX;
	volatile int32_t x560 = -1;

    t121 = ((x557!=(x558+x559))!=x560);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x561 = 7U;
	int8_t x562 = 1;
	int32_t x563 = INT32_MIN;
	volatile uint16_t x564 = UINT16_MAX;
	volatile int32_t t122 = -31814;

    t122 = ((x561!=(x562+x563))!=x564);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x565 = UINT32_MAX;
	int32_t x566 = -1;
	uint8_t x567 = 23U;
	int32_t t123 = 1;

    t123 = ((x565!=(x566+x567))!=x568);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x577 = INT32_MIN;
	uint16_t x578 = 166U;
	static int32_t x580 = INT32_MIN;
	static volatile int32_t t124 = -4008;

    t124 = ((x577!=(x578+x579))!=x580);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x582 = UINT32_MAX;
	uint32_t x583 = 7615U;
	int32_t t125 = -18;

    t125 = ((x581!=(x582+x583))!=x584);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x585 = UINT16_MAX;
	uint64_t x586 = 0LLU;
	volatile uint8_t x587 = 0U;
	static uint16_t x588 = 38U;
	int32_t t126 = -32;

    t126 = ((x585!=(x586+x587))!=x588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x589 = 12U;
	int16_t x590 = 13390;
	int8_t x591 = -2;
	static uint32_t x592 = 303U;
	volatile int32_t t127 = -19201112;

    t127 = ((x589!=(x590+x591))!=x592);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MAX;
	int32_t x596 = -770803398;
	static int32_t t128 = 0;

    t128 = ((x593!=(x594+x595))!=x596);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x597 = UINT64_MAX;
	uint64_t x598 = 342750690771013326LLU;
	uint32_t x599 = UINT32_MAX;
	int16_t x600 = INT16_MAX;
	volatile int32_t t129 = -8;

    t129 = ((x597!=(x598+x599))!=x600);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = INT8_MIN;

    t130 = ((x601!=(x602+x603))!=x604);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x606 = -1;
	volatile int16_t x607 = INT16_MAX;
	int8_t x608 = 0;
	int32_t t131 = -1438;

    t131 = ((x605!=(x606+x607))!=x608);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x609 = INT64_MIN;
	int16_t x610 = INT16_MIN;

    t132 = ((x609!=(x610+x611))!=x612);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x613 = 131U;
	uint16_t x614 = UINT16_MAX;
	int64_t x615 = -41612871829712651LL;
	volatile int32_t t133 = 1414866;

    t133 = ((x613!=(x614+x615))!=x616);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x617 = -378;
	int64_t x618 = INT64_MIN;
	uint16_t x619 = 98U;
	int16_t x620 = -3;
	int32_t t134 = 56182602;

    t134 = ((x617!=(x618+x619))!=x620);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x622 = 43U;
	int16_t x623 = 19;
	volatile int64_t x624 = INT64_MAX;
	int32_t t135 = 196637826;

    t135 = ((x621!=(x622+x623))!=x624);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x630 = 12U;
	volatile int32_t t136 = -96;

    t136 = ((x629!=(x630+x631))!=x632);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x634 = 332U;
	int32_t t137 = 627891689;

    t137 = ((x633!=(x634+x635))!=x636);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x641 = 44498678004518LL;
	volatile uint16_t x644 = 0U;
	volatile int32_t t138 = -774776005;

    t138 = ((x641!=(x642+x643))!=x644);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x645 = 1351LLU;
	int64_t x646 = -1LL;
	volatile int8_t x647 = INT8_MIN;
	int8_t x648 = INT8_MIN;
	volatile int32_t t139 = -33;

    t139 = ((x645!=(x646+x647))!=x648);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x649 = 13894LLU;
	volatile int32_t x650 = INT32_MAX;
	int32_t t140 = -5939229;

    t140 = ((x649!=(x650+x651))!=x652);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x654 = -399;
	volatile uint32_t x655 = 639790329U;
	volatile int32_t t141 = 1;

    t141 = ((x653!=(x654+x655))!=x656);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x657 = 81745645367LL;
	int8_t x658 = -1;
	volatile int16_t x660 = INT16_MIN;
	volatile int32_t t142 = 448567232;

    t142 = ((x657!=(x658+x659))!=x660);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x661 = INT8_MAX;
	uint16_t x662 = 908U;
	static volatile uint8_t x663 = UINT8_MAX;
	int32_t x664 = -27;
	volatile int32_t t143 = 1;

    t143 = ((x661!=(x662+x663))!=x664);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x670 = -1;
	volatile int32_t x671 = -1;
	int32_t x672 = 312081;
	static volatile int32_t t144 = 37982290;

    t144 = ((x669!=(x670+x671))!=x672);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x673 = INT32_MIN;
	int8_t x674 = INT8_MIN;
	int16_t x675 = INT16_MAX;
	static int16_t x676 = INT16_MIN;
	int32_t t145 = 0;

    t145 = ((x673!=(x674+x675))!=x676);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x677 = 1913;
	uint32_t x678 = UINT32_MAX;
	int16_t x680 = 13;
	static volatile int32_t t146 = -591349411;

    t146 = ((x677!=(x678+x679))!=x680);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x685 = INT64_MIN;
	static uint16_t x686 = UINT16_MAX;
	int64_t x687 = INT64_MIN;
	int32_t t147 = -1387;

    t147 = ((x685!=(x686+x687))!=x688);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x689 = 59254127021LLU;
	volatile int8_t x690 = -1;
	static int32_t x691 = 39;
	int16_t x692 = -1;
	static volatile int32_t t148 = 13979065;

    t148 = ((x689!=(x690+x691))!=x692);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x697 = 5U;
	static uint8_t x698 = UINT8_MAX;
	int32_t x700 = INT32_MIN;
	int32_t t149 = 39892;

    t149 = ((x697!=(x698+x699))!=x700);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x703 = INT8_MAX;
	int64_t x704 = INT64_MIN;
	static volatile int32_t t150 = -6767746;

    t150 = ((x701!=(x702+x703))!=x704);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x705 = INT16_MAX;
	uint32_t x706 = UINT32_MAX;
	int32_t x707 = INT32_MAX;
	int32_t x708 = INT32_MIN;
	volatile int32_t t151 = -786300810;

    t151 = ((x705!=(x706+x707))!=x708);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x709 = INT32_MAX;
	uint16_t x710 = 4790U;
	int64_t x711 = -1LL;
	static int32_t x712 = -13;

    t152 = ((x709!=(x710+x711))!=x712);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x717 = UINT16_MAX;
	int64_t x718 = INT64_MAX;
	int32_t x719 = INT32_MIN;
	uint16_t x720 = 203U;
	int32_t t153 = -111548416;

    t153 = ((x717!=(x718+x719))!=x720);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x721 = UINT8_MAX;
	static int64_t x722 = -53152442705LL;
	uint64_t x723 = UINT64_MAX;
	volatile uint32_t x724 = 73151144U;
	int32_t t154 = -7;

    t154 = ((x721!=(x722+x723))!=x724);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x725 = INT64_MAX;
	uint16_t x726 = UINT16_MAX;
	int8_t x728 = -54;
	int32_t t155 = 86894;

    t155 = ((x725!=(x726+x727))!=x728);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x729 = -1LL;
	uint8_t x730 = UINT8_MAX;
	static volatile int64_t x731 = INT64_MIN;
	int64_t x732 = INT64_MIN;
	int32_t t156 = 3;

    t156 = ((x729!=(x730+x731))!=x732);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x733 = INT16_MAX;
	uint32_t x734 = 332U;
	int32_t x735 = INT32_MAX;
	static volatile int32_t t157 = 251;

    t157 = ((x733!=(x734+x735))!=x736);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x737 = 181122;
	int8_t x738 = -1;
	int32_t x739 = -1;
	int16_t x740 = INT16_MIN;
	static int32_t t158 = 1529;

    t158 = ((x737!=(x738+x739))!=x740);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x741 = INT64_MIN;
	volatile uint16_t x742 = 77U;
	volatile int8_t x744 = -2;
	static int32_t t159 = -156819;

    t159 = ((x741!=(x742+x743))!=x744);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x745 = 285457403U;
	static int32_t x746 = 13921;
	static uint64_t x747 = 1614501694LLU;
	volatile int32_t t160 = -29935;

    t160 = ((x745!=(x746+x747))!=x748);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x749 = INT64_MIN;
	static int32_t x750 = 334048592;
	int16_t x752 = -29;
	volatile int32_t t161 = -455829;

    t161 = ((x749!=(x750+x751))!=x752);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x753 = 2023LL;
	volatile int8_t x754 = INT8_MIN;
	int16_t x755 = -1;
	static int32_t t162 = -3959;

    t162 = ((x753!=(x754+x755))!=x756);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x757 = -14362LL;
	int8_t x758 = -1;
	static volatile uint64_t x759 = 1LLU;
	static int32_t x760 = 1282995;
	int32_t t163 = 546109;

    t163 = ((x757!=(x758+x759))!=x760);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x761 = -59;
	volatile uint16_t x762 = 165U;
	static int64_t x763 = -10876457438516051LL;
	uint64_t x764 = UINT64_MAX;
	static volatile int32_t t164 = 6;

    t164 = ((x761!=(x762+x763))!=x764);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x765 = 23U;
	static int16_t x766 = INT16_MAX;
	int8_t x767 = 7;
	static int16_t x768 = INT16_MAX;
	volatile int32_t t165 = -107;

    t165 = ((x765!=(x766+x767))!=x768);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x769 = INT64_MIN;
	int32_t x770 = INT32_MAX;
	int32_t x771 = INT32_MIN;
	int16_t x772 = INT16_MIN;
	int32_t t166 = 7101535;

    t166 = ((x769!=(x770+x771))!=x772);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x773 = -3LL;
	uint32_t x774 = 67U;
	static int32_t x775 = -405;
	volatile int32_t t167 = 287608;

    t167 = ((x773!=(x774+x775))!=x776);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x777 = -1;
	int32_t x779 = INT32_MIN;

    t168 = ((x777!=(x778+x779))!=x780);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x782 = 718343LLU;
	static uint64_t x783 = 420LLU;
	int32_t x784 = 13431366;
	volatile int32_t t169 = -27686;

    t169 = ((x781!=(x782+x783))!=x784);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x785 = INT16_MIN;
	volatile int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MAX;
	volatile int32_t t170 = -19458649;

    t170 = ((x785!=(x786+x787))!=x788);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x789 = 0;
	int64_t x792 = INT64_MIN;
	int32_t t171 = 38818327;

    t171 = ((x789!=(x790+x791))!=x792);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x793 = 31U;
	volatile int32_t x794 = INT32_MAX;
	int16_t x795 = INT16_MIN;
	static int64_t x796 = -28728581515915505LL;
	int32_t t172 = 4;

    t172 = ((x793!=(x794+x795))!=x796);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x797 = -79;
	int32_t x798 = INT32_MAX;
	volatile int16_t x800 = 3;
	int32_t t173 = 270620;

    t173 = ((x797!=(x798+x799))!=x800);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x805 = -11969624LL;
	int64_t x806 = -1LL;
	uint32_t x808 = UINT32_MAX;
	volatile int32_t t174 = 11;

    t174 = ((x805!=(x806+x807))!=x808);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x809 = 625U;
	static volatile int64_t x810 = INT64_MIN;
	uint64_t x811 = UINT64_MAX;
	volatile uint32_t x812 = 9079U;
	static int32_t t175 = 7;

    t175 = ((x809!=(x810+x811))!=x812);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x813 = 4151U;
	uint8_t x814 = 1U;
	static int32_t x815 = 192362797;
	uint16_t x816 = 3U;

    t176 = ((x813!=(x814+x815))!=x816);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x818 = -6;
	uint16_t x819 = 2U;
	int16_t x820 = INT16_MIN;
	static int32_t t177 = 1076;

    t177 = ((x817!=(x818+x819))!=x820);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x821 = 32U;
	uint8_t x822 = 115U;
	int32_t x823 = INT32_MIN;
	volatile int32_t t178 = 2;

    t178 = ((x821!=(x822+x823))!=x824);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x826 = 3015;
	static int32_t x827 = INT32_MIN;
	int32_t x828 = -1;
	int32_t t179 = -475369569;

    t179 = ((x825!=(x826+x827))!=x828);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x829 = 13U;
	int8_t x830 = INT8_MIN;
	volatile uint64_t x831 = UINT64_MAX;
	static int64_t x832 = INT64_MAX;
	volatile int32_t t180 = 1626015;

    t180 = ((x829!=(x830+x831))!=x832);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x834 = UINT64_MAX;
	static int64_t x835 = 26086LL;
	int16_t x836 = -6307;
	volatile int32_t t181 = 7491;

    t181 = ((x833!=(x834+x835))!=x836);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x838 = -4022107095452LL;
	uint16_t x839 = 4U;
	uint64_t x840 = UINT64_MAX;

    t182 = ((x837!=(x838+x839))!=x840);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x841 = 28U;
	int16_t x842 = INT16_MIN;
	int8_t x843 = 12;
	int32_t t183 = -413216012;

    t183 = ((x841!=(x842+x843))!=x844);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x845 = 49U;
	int16_t x846 = INT16_MAX;
	static uint16_t x847 = 4U;
	static int32_t t184 = 35977875;

    t184 = ((x845!=(x846+x847))!=x848);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x849 = INT32_MIN;
	int32_t x850 = INT32_MAX;
	int64_t x852 = -28LL;

    t185 = ((x849!=(x850+x851))!=x852);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x853 = 2033836389127135LLU;
	int64_t x854 = 86406LL;
	int64_t x855 = 14304730LL;
	static int32_t t186 = -219;

    t186 = ((x853!=(x854+x855))!=x856);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x857 = UINT64_MAX;
	volatile int8_t x858 = INT8_MIN;
	int16_t x859 = INT16_MAX;
	uint64_t x860 = 102058819LLU;
	volatile int32_t t187 = 24493;

    t187 = ((x857!=(x858+x859))!=x860);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x862 = 3;
	static int64_t x863 = INT64_MIN;
	uint32_t x864 = 232U;
	volatile int32_t t188 = 601564;

    t188 = ((x861!=(x862+x863))!=x864);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x865 = -1;
	static int64_t x866 = INT64_MIN;
	int32_t x867 = INT32_MAX;
	volatile uint8_t x868 = 17U;
	int32_t t189 = 0;

    t189 = ((x865!=(x866+x867))!=x868);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x869 = 1;
	static uint64_t x870 = 498LLU;
	int16_t x871 = 4;
	volatile int64_t x872 = INT64_MIN;

    t190 = ((x869!=(x870+x871))!=x872);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x873 = 0U;
	uint8_t x876 = UINT8_MAX;
	volatile int32_t t191 = 97520;

    t191 = ((x873!=(x874+x875))!=x876);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x882 = 19856U;
	volatile int64_t x883 = 64893996853LL;
	int8_t x884 = 56;
	volatile int32_t t192 = -531591221;

    t192 = ((x881!=(x882+x883))!=x884);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x886 = 1;
	int16_t x887 = -276;
	static uint64_t x888 = 7538515657741610761LLU;
	volatile int32_t t193 = -26527;

    t193 = ((x885!=(x886+x887))!=x888);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x889 = -1;
	volatile int64_t x890 = -1LL;
	volatile int32_t x891 = INT32_MIN;
	int16_t x892 = -1;
	int32_t t194 = -63639541;

    t194 = ((x889!=(x890+x891))!=x892);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x898 = 0;
	int64_t x899 = INT64_MIN;
	int8_t x900 = INT8_MIN;
	volatile int32_t t195 = 2;

    t195 = ((x897!=(x898+x899))!=x900);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x901 = 666947U;
	int8_t x902 = -14;
	int8_t x903 = INT8_MIN;
	int64_t x904 = -1LL;
	int32_t t196 = 30640703;

    t196 = ((x901!=(x902+x903))!=x904);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x905 = 121U;
	uint32_t x907 = 14U;
	int32_t x908 = -1043530979;
	int32_t t197 = 639;

    t197 = ((x905!=(x906+x907))!=x908);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x909 = 140919U;
	int16_t x910 = INT16_MAX;
	int8_t x911 = INT8_MIN;
	int32_t t198 = 1;

    t198 = ((x909!=(x910+x911))!=x912);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x913 = INT32_MIN;
	uint32_t x914 = 168U;
	uint32_t x915 = 52209U;
	int16_t x916 = -25;
	static int32_t t199 = 3;

    t199 = ((x913!=(x914+x915))!=x916);

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

