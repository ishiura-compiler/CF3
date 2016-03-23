
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

int32_t x3 = -1;
int16_t x4 = 112;
uint8_t x8 = 102U;
uint8_t x12 = UINT8_MAX;
static volatile int32_t t2 = -11;
int16_t x13 = 0;
uint64_t x18 = UINT64_MAX;
int16_t x19 = INT16_MIN;
int8_t x27 = -1;
static volatile int32_t t7 = 1140;
static int8_t x39 = INT8_MAX;
uint64_t x40 = 14916740225LLU;
int32_t t9 = 19469106;
int8_t x52 = INT8_MIN;
int32_t x54 = 93663;
volatile uint64_t x55 = 20600641793305LLU;
int32_t x67 = -1;
uint64_t x74 = UINT64_MAX;
int16_t x78 = INT16_MIN;
static int8_t x79 = 13;
int32_t t16 = 1416;
static int16_t x84 = 1;
static int8_t x95 = INT8_MAX;
volatile int16_t x97 = -1;
int32_t t20 = -1665720;
volatile int32_t t21 = -772;
volatile int32_t x114 = INT32_MAX;
uint64_t x117 = 58296336110855LLU;
int16_t x121 = -157;
volatile int64_t x123 = INT64_MIN;
int16_t x130 = INT16_MIN;
int8_t x131 = 0;
int16_t x132 = INT16_MAX;
volatile int32_t t27 = -63339778;
uint32_t x139 = 24U;
uint64_t x145 = 4162558525LLU;
int8_t x149 = -4;
int8_t x150 = INT8_MAX;
volatile int16_t x152 = 957;
volatile int32_t t33 = -57300;
int16_t x157 = 63;
uint8_t x160 = 1U;
volatile uint32_t x161 = UINT32_MAX;
int32_t t35 = -604165;
int16_t x166 = INT16_MIN;
static uint64_t x172 = UINT64_MAX;
volatile int32_t t39 = 6986100;
static int32_t x184 = -1;
static volatile int64_t x188 = 316265826LL;
static uint32_t x194 = 1677030663U;
static uint32_t x197 = 16U;
int8_t x204 = INT8_MAX;
uint16_t x214 = UINT16_MAX;
static int8_t x218 = INT8_MAX;
volatile int32_t t49 = 2414;
static int8_t x221 = 1;
int16_t x225 = INT16_MIN;
int64_t x228 = 2257LL;
static int32_t t51 = 1;
static int32_t x235 = INT32_MIN;
int64_t x236 = 38290LL;
static uint64_t x243 = 4743161LLU;
volatile int32_t x248 = INT32_MIN;
int32_t t55 = -8360;
int8_t x252 = INT8_MIN;
uint64_t x257 = UINT64_MAX;
int64_t x264 = INT64_MIN;
volatile uint64_t x272 = 164896107584223LLU;
int64_t x280 = INT64_MIN;
int32_t x286 = INT32_MIN;
uint32_t x287 = 4034U;
int32_t x288 = -1;
volatile int32_t t66 = -1;
volatile int8_t x293 = 0;
int32_t x301 = INT32_MIN;
static int64_t x305 = -1LL;
volatile uint16_t x307 = 5U;
volatile uint8_t x308 = 36U;
int32_t t70 = 1;
volatile int16_t x314 = INT16_MAX;
volatile uint8_t x325 = UINT8_MAX;
int16_t x326 = INT16_MIN;
volatile int32_t t76 = -1059;
int16_t x337 = -630;
static volatile int32_t x338 = -1;
static volatile int8_t x340 = INT8_MAX;
static int8_t x343 = INT8_MAX;
int8_t x344 = 6;
int32_t t81 = 142344;
int8_t x363 = 56;
volatile int32_t t83 = -7712;
int8_t x365 = 4;
uint8_t x367 = 13U;
volatile uint8_t x369 = 0U;
uint64_t x371 = 114297LLU;
int32_t t85 = 1;
uint16_t x376 = 2U;
static volatile int64_t x378 = -3187454542108763LL;
uint32_t x379 = UINT32_MAX;
int64_t x383 = INT64_MAX;
volatile int8_t x384 = -1;
uint32_t x388 = 1723661343U;
static int32_t t91 = -3754445;
int8_t x397 = -1;
volatile int32_t t92 = -102;
int16_t x403 = 1967;
static int8_t x407 = INT8_MIN;
int8_t x408 = 1;
int32_t x415 = INT32_MAX;
int32_t t97 = 531468480;
static int16_t x422 = INT16_MIN;
int32_t x426 = INT32_MIN;
volatile int32_t t100 = -850;
uint8_t x436 = 20U;
volatile int8_t x438 = -4;
static uint32_t x440 = 160151090U;
int32_t t103 = 1655;
int32_t x449 = 47706292;
static volatile int8_t x450 = -51;
static uint64_t x451 = 5338070LLU;
uint16_t x460 = UINT16_MAX;
int8_t x476 = INT8_MAX;
int64_t x477 = INT64_MIN;
int8_t x483 = INT8_MIN;
static int16_t x488 = INT16_MIN;
static uint16_t x489 = 2971U;
int32_t t115 = 1282;
static uint16_t x500 = 10068U;
uint64_t x501 = 37816210199LLU;
volatile int32_t t120 = 815525;
volatile int8_t x526 = INT8_MIN;
int8_t x532 = -6;
static int16_t x536 = -1;
static uint16_t x539 = 18U;
static volatile uint32_t x541 = 1551130U;
static int32_t t130 = -7944;
int16_t x553 = INT16_MIN;
int64_t x554 = -1LL;
volatile int16_t x556 = INT16_MAX;
static volatile int32_t x560 = -1;
int32_t t132 = -4340199;
static int16_t x561 = -1;
int16_t x565 = INT16_MIN;
int8_t x567 = INT8_MAX;
volatile int8_t x568 = 61;
volatile int32_t x574 = -351974271;
static volatile int32_t t137 = -707605333;
uint16_t x582 = 1792U;
int64_t x583 = INT64_MIN;
uint32_t x584 = UINT32_MAX;
int64_t x599 = 1010294766963273050LL;
int8_t x605 = INT8_MIN;
uint64_t x608 = 98106LLU;
static int64_t x609 = -1LL;
volatile int8_t x610 = 12;
int32_t x617 = 51;
volatile int16_t x619 = -2934;
int16_t x621 = 193;
uint64_t x622 = UINT64_MAX;
volatile int32_t t147 = 1;
int16_t x625 = INT16_MIN;
int32_t x640 = 369911;
uint32_t x654 = 27531683U;
volatile int32_t x657 = INT32_MAX;
uint16_t x668 = UINT16_MAX;
int32_t x670 = 1;
uint32_t x672 = UINT32_MAX;
static volatile int32_t t157 = -78892;
int32_t t158 = 3;
volatile int16_t x678 = INT16_MAX;
int32_t x679 = -561421366;
volatile int32_t t159 = -45891975;
int16_t x687 = 4;
uint64_t x693 = 15076864559664796LLU;
int32_t x698 = INT32_MIN;
int64_t x702 = INT64_MIN;
uint32_t x703 = 26906108U;
int32_t x707 = INT32_MIN;
int32_t x708 = -72;
static int64_t x711 = INT64_MAX;
int8_t x729 = 47;
static int32_t t173 = -887;
static int64_t x740 = -1LL;
volatile int32_t t174 = 80;
int64_t x742 = -1LL;
volatile int32_t t175 = 4050444;
int64_t x745 = 657380878LL;
uint16_t x749 = 1313U;
uint64_t x751 = UINT64_MAX;
int32_t x755 = INT32_MIN;
static int16_t x761 = 1;
volatile int32_t t180 = -250;
static uint64_t x771 = 436624623561278LLU;
static int8_t x782 = INT8_MAX;
volatile int64_t x793 = -71380372263184LL;
int32_t t187 = -513;
uint32_t x797 = 736948U;
volatile int32_t t188 = 53;
int16_t x801 = INT16_MIN;
int16_t x804 = INT16_MAX;
int32_t t189 = 36;
volatile uint16_t x807 = 147U;
volatile uint8_t x825 = 0U;


void f0(void) {
    	static int8_t x1 = -7;
	static int16_t x2 = -1;
	static volatile int32_t t0 = -1962;

    t0 = ((x1/x2)!=(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile int32_t x6 = INT32_MAX;
	int32_t x7 = 2872;
	int32_t t1 = 23518;

    t1 = ((x5/x6)!=(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 1918052765LLU;
	volatile int64_t x10 = INT64_MAX;
	volatile uint64_t x11 = UINT64_MAX;

    t2 = ((x9/x10)!=(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	int16_t x15 = -16374;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -458231849;

    t3 = ((x13/x14)!=(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	uint64_t x20 = 14385653664060406LLU;
	static volatile int32_t t4 = 505346;

    t4 = ((x17/x18)!=(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -62299LL;
	int32_t x26 = INT32_MIN;
	int64_t x28 = -1LL;
	volatile int32_t t5 = -13;

    t5 = ((x25/x26)!=(x27!=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	static int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	static int64_t x32 = INT64_MIN;
	static int32_t t6 = -15;

    t6 = ((x29/x30)!=(x31!=x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	uint16_t x35 = 1945U;
	int16_t x36 = INT16_MIN;

    t7 = ((x33/x34)!=(x35!=x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int32_t t8 = 14;

    t8 = ((x37/x38)!=(x39!=x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	static int32_t x43 = INT32_MAX;
	int16_t x44 = INT16_MIN;

    t9 = ((x41/x42)!=(x43!=x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 3690381010986181LLU;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 1LL;
	int32_t t10 = -1;

    t10 = ((x49/x50)!=(x51!=x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	volatile int32_t x56 = -1;
	volatile int32_t t11 = -3506;

    t11 = ((x53/x54)!=(x55!=x56));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -1;
	int64_t x58 = INT64_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = 5;
	volatile int32_t t12 = -2012;

    t12 = ((x57/x58)!=(x59!=x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = 6;
	int64_t x66 = INT64_MIN;
	int8_t x68 = -1;
	volatile int32_t t13 = 178354;

    t13 = ((x65/x66)!=(x67!=x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x69 = -1LL;
	int64_t x70 = 216LL;
	uint8_t x71 = UINT8_MAX;
	uint8_t x72 = 1U;
	static int32_t t14 = -53393;

    t14 = ((x69/x70)!=(x71!=x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x73 = INT32_MAX;
	static volatile int16_t x75 = -7;
	int16_t x76 = INT16_MAX;
	volatile int32_t t15 = 9;

    t15 = ((x73/x74)!=(x75!=x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x77 = INT32_MIN;
	static volatile int16_t x80 = -790;

    t16 = ((x77/x78)!=(x79!=x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = UINT8_MAX;
	int8_t x82 = 26;
	volatile int64_t x83 = -11462559LL;
	volatile int32_t t17 = -1254808;

    t17 = ((x81/x82)!=(x83!=x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MAX;
	int64_t x90 = INT64_MIN;
	int32_t x91 = 371318016;
	uint64_t x92 = 801494522475139518LLU;
	volatile int32_t t18 = -13167287;

    t18 = ((x89/x90)!=(x91!=x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = 229368U;
	int32_t x94 = 48;
	int16_t x96 = INT16_MAX;
	int32_t t19 = -146432;

    t19 = ((x93/x94)!=(x95!=x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x98 = -1LL;
	int64_t x99 = 14967200167LL;
	static int16_t x100 = INT16_MAX;

    t20 = ((x97/x98)!=(x99!=x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = -1LL;
	static uint16_t x102 = 1U;
	int32_t x103 = -18;
	volatile int32_t x104 = 43431568;

    t21 = ((x101/x102)!=(x103!=x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = -44LL;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = 4;
	int32_t t22 = 41808;

    t22 = ((x109/x110)!=(x111!=x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	int64_t x115 = INT64_MAX;
	static int32_t x116 = -24;
	volatile int32_t t23 = -4169617;

    t23 = ((x113/x114)!=(x115!=x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x118 = 23530LL;
	int32_t x119 = INT32_MAX;
	int64_t x120 = INT64_MIN;
	static volatile int32_t t24 = 0;

    t24 = ((x117/x118)!=(x119!=x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x122 = INT64_MIN;
	volatile int8_t x124 = -1;
	volatile int32_t t25 = -28663;

    t25 = ((x121/x122)!=(x123!=x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x125 = 1271;
	int32_t x126 = INT32_MIN;
	static int8_t x127 = INT8_MIN;
	int64_t x128 = 423920321420LL;
	volatile int32_t t26 = -2;

    t26 = ((x125/x126)!=(x127!=x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = 36149476LL;

    t27 = ((x129/x130)!=(x131!=x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x133 = -32LL;
	int64_t x134 = 11080221594LL;
	int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t28 = -19491039;

    t28 = ((x133/x134)!=(x135!=x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	volatile int32_t t29 = 446;

    t29 = ((x137/x138)!=(x139!=x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x141 = INT16_MIN;
	volatile uint8_t x142 = 54U;
	volatile int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	int32_t t30 = 31093;

    t30 = ((x141/x142)!=(x143!=x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x146 = 6606665570576LLU;
	static volatile uint32_t x147 = 98500424U;
	int32_t x148 = INT32_MIN;
	volatile int32_t t31 = -1593959;

    t31 = ((x145/x146)!=(x147!=x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x151 = INT32_MIN;
	volatile int32_t t32 = -1;

    t32 = ((x149/x150)!=(x151!=x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = 7;
	int64_t x154 = -687399070540638868LL;
	int64_t x155 = -1393932LL;
	uint32_t x156 = 21U;

    t33 = ((x153/x154)!=(x155!=x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x158 = UINT32_MAX;
	int32_t x159 = -1;
	static int32_t t34 = 11532;

    t34 = ((x157/x158)!=(x159!=x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x162 = 64U;
	volatile int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MAX;

    t35 = ((x161/x162)!=(x163!=x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x165 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	uint8_t x168 = 56U;
	static volatile int32_t t36 = -220;

    t36 = ((x165/x166)!=(x167!=x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	static int8_t x171 = INT8_MIN;
	int32_t t37 = 21845916;

    t37 = ((x169/x170)!=(x171!=x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x173 = -1;
	uint8_t x174 = 2U;
	int16_t x175 = INT16_MIN;
	uint64_t x176 = UINT64_MAX;
	int32_t t38 = -1670928;

    t38 = ((x173/x174)!=(x175!=x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x177 = UINT16_MAX;
	int16_t x178 = 14253;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = -4927097;

    t39 = ((x177/x178)!=(x179!=x180));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MIN;
	uint32_t x182 = 23691685U;
	volatile uint32_t x183 = UINT32_MAX;
	volatile int32_t t40 = 0;

    t40 = ((x181/x182)!=(x183!=x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x185 = 0;
	int32_t x186 = -21349888;
	static volatile int32_t x187 = INT32_MIN;
	int32_t t41 = -44165;

    t41 = ((x185/x186)!=(x187!=x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	int8_t x190 = INT8_MAX;
	int8_t x191 = -1;
	int32_t x192 = -1;
	int32_t t42 = -259519482;

    t42 = ((x189/x190)!=(x191!=x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x193 = 8147U;
	int64_t x195 = -62608409221237006LL;
	uint32_t x196 = UINT32_MAX;
	int32_t t43 = 8004353;

    t43 = ((x193/x194)!=(x195!=x196));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x198 = -1;
	int16_t x199 = INT16_MIN;
	static uint16_t x200 = 5U;
	static int32_t t44 = 441;

    t44 = ((x197/x198)!=(x199!=x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = INT64_MIN;
	volatile int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MAX;
	volatile int32_t t45 = -358880384;

    t45 = ((x201/x202)!=(x203!=x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x205 = -1;
	int8_t x206 = -1;
	static volatile uint8_t x207 = 3U;
	volatile int16_t x208 = -1;
	static volatile int32_t t46 = -41180058;

    t46 = ((x205/x206)!=(x207!=x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x209 = INT32_MIN;
	int16_t x210 = 1;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -15;
	int32_t t47 = 1522654;

    t47 = ((x209/x210)!=(x211!=x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MIN;
	static int32_t x215 = -32466882;
	static uint16_t x216 = 0U;
	int32_t t48 = 0;

    t48 = ((x213/x214)!=(x215!=x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x217 = UINT64_MAX;
	int8_t x219 = INT8_MAX;
	int8_t x220 = -1;

    t49 = ((x217/x218)!=(x219!=x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x222 = 2092618LLU;
	int32_t x223 = -1;
	volatile int16_t x224 = -1;
	static int32_t t50 = 13;

    t50 = ((x221/x222)!=(x223!=x224));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x226 = INT16_MIN;
	int64_t x227 = -1LL;

    t51 = ((x225/x226)!=(x227!=x228));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x229 = INT64_MAX;
	int64_t x230 = INT64_MAX;
	int8_t x231 = INT8_MIN;
	int8_t x232 = 1;
	int32_t t52 = -186;

    t52 = ((x229/x230)!=(x231!=x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x233 = -1;
	static int8_t x234 = INT8_MAX;
	volatile int32_t t53 = 8533892;

    t53 = ((x233/x234)!=(x235!=x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x241 = 1393625U;
	int16_t x242 = INT16_MIN;
	static volatile int8_t x244 = INT8_MIN;
	volatile int32_t t54 = 278;

    t54 = ((x241/x242)!=(x243!=x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x245 = 20;
	volatile int32_t x246 = 2011134;
	uint16_t x247 = 3896U;

    t55 = ((x245/x246)!=(x247!=x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = 1U;
	volatile int64_t x250 = 11267163648548LL;
	uint16_t x251 = 0U;
	int32_t t56 = -29689;

    t56 = ((x249/x250)!=(x251!=x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = -110;
	int8_t x254 = -1;
	int32_t x255 = INT32_MIN;
	static volatile uint32_t x256 = UINT32_MAX;
	int32_t t57 = 14794060;

    t57 = ((x253/x254)!=(x255!=x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x258 = INT16_MAX;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t58 = -94627345;

    t58 = ((x257/x258)!=(x259!=x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = -1;
	uint64_t x262 = 8791270598318578LLU;
	int16_t x263 = INT16_MIN;
	volatile int32_t t59 = 6075;

    t59 = ((x261/x262)!=(x263!=x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x265 = INT64_MIN;
	static int32_t x266 = INT32_MIN;
	int16_t x267 = -2;
	int8_t x268 = -55;
	volatile int32_t t60 = 38767;

    t60 = ((x265/x266)!=(x267!=x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MIN;
	int16_t x271 = -27;
	volatile int32_t t61 = 566045;

    t61 = ((x269/x270)!=(x271!=x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x273 = -1;
	uint32_t x274 = 29816123U;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = 29U;
	volatile int32_t t62 = -2414103;

    t62 = ((x273/x274)!=(x275!=x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x277 = 491U;
	int64_t x278 = -1LL;
	static int16_t x279 = 7859;
	int32_t t63 = 199;

    t63 = ((x277/x278)!=(x279!=x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x281 = INT8_MIN;
	uint32_t x282 = 123U;
	static int64_t x283 = INT64_MAX;
	static int32_t x284 = 18702319;
	volatile int32_t t64 = -707;

    t64 = ((x281/x282)!=(x283!=x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x285 = INT32_MIN;
	int32_t t65 = 54055;

    t65 = ((x285/x286)!=(x287!=x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x289 = INT64_MIN;
	volatile int64_t x290 = -7092452LL;
	volatile int16_t x291 = INT16_MIN;
	uint8_t x292 = 3U;

    t66 = ((x289/x290)!=(x291!=x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x294 = -1;
	static int8_t x295 = 0;
	int32_t x296 = -1;
	volatile int32_t t67 = 11431;

    t67 = ((x293/x294)!=(x295!=x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x297 = 375U;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = 20U;
	volatile int8_t x300 = -1;
	int32_t t68 = 32823;

    t68 = ((x297/x298)!=(x299!=x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x302 = UINT16_MAX;
	volatile uint32_t x303 = 1425284U;
	uint32_t x304 = 4U;
	volatile int32_t t69 = 9;

    t69 = ((x301/x302)!=(x303!=x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x306 = INT32_MIN;

    t70 = ((x305/x306)!=(x307!=x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x309 = -1LL;
	int64_t x310 = 2424534LL;
	volatile int64_t x311 = 7594698609LL;
	static int8_t x312 = INT8_MAX;
	volatile int32_t t71 = 121;

    t71 = ((x309/x310)!=(x311!=x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x313 = -1;
	int32_t x315 = -171351;
	uint64_t x316 = 53435362LLU;
	volatile int32_t t72 = -2;

    t72 = ((x313/x314)!=(x315!=x316));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x317 = INT16_MAX;
	int32_t x318 = 5;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t73 = 458356;

    t73 = ((x317/x318)!=(x319!=x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x327 = INT16_MIN;
	static volatile int32_t x328 = INT32_MAX;
	volatile int32_t t74 = 50111;

    t74 = ((x325/x326)!=(x327!=x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = 2319820037LL;
	int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	int16_t x332 = -29;
	static volatile int32_t t75 = 1;

    t75 = ((x329/x330)!=(x331!=x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x333 = -1;
	int64_t x334 = -1LL;
	uint16_t x335 = 7U;
	int32_t x336 = INT32_MIN;

    t76 = ((x333/x334)!=(x335!=x336));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x339 = -1;
	int32_t t77 = 60153;

    t77 = ((x337/x338)!=(x339!=x340));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x341 = -1;
	static volatile uint64_t x342 = 44304239LLU;
	static int32_t t78 = 425602195;

    t78 = ((x341/x342)!=(x343!=x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x345 = -1;
	int64_t x346 = INT64_MIN;
	static int64_t x347 = -1LL;
	static uint64_t x348 = UINT64_MAX;
	static int32_t t79 = -15389;

    t79 = ((x345/x346)!=(x347!=x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = -1;
	static int8_t x350 = INT8_MIN;
	static volatile int32_t x351 = INT32_MIN;
	int16_t x352 = -38;
	volatile int32_t t80 = 296;

    t80 = ((x349/x350)!=(x351!=x352));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -1;
	static int16_t x354 = -30;
	int32_t x355 = INT32_MAX;
	int64_t x356 = INT64_MIN;

    t81 = ((x353/x354)!=(x355!=x356));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 92U;
	int16_t x359 = -1;
	volatile int32_t x360 = -4;
	volatile int32_t t82 = 335;

    t82 = ((x357/x358)!=(x359!=x360));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x361 = INT32_MAX;
	int64_t x362 = 305LL;
	int32_t x364 = 37;

    t83 = ((x361/x362)!=(x363!=x364));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x366 = -1;
	volatile uint64_t x368 = UINT64_MAX;
	volatile int32_t t84 = 1885;

    t84 = ((x365/x366)!=(x367!=x368));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x370 = -1;
	static volatile int32_t x372 = -1;

    t85 = ((x369/x370)!=(x371!=x372));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x373 = UINT32_MAX;
	static int32_t x374 = -371388;
	uint64_t x375 = 0LLU;
	int32_t t86 = 0;

    t86 = ((x373/x374)!=(x375!=x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x377 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	static volatile int32_t t87 = -2717644;

    t87 = ((x377/x378)!=(x379!=x380));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MAX;
	int32_t t88 = -16092657;

    t88 = ((x381/x382)!=(x383!=x384));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x385 = 3097U;
	int32_t x386 = -19089;
	volatile uint32_t x387 = 726396U;
	volatile int32_t t89 = -57;

    t89 = ((x385/x386)!=(x387!=x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x389 = 21U;
	uint32_t x390 = 2091703U;
	uint64_t x391 = 13728008194LLU;
	uint64_t x392 = 68436421676LLU;
	static int32_t t90 = 307403;

    t90 = ((x389/x390)!=(x391!=x392));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = -229LL;
	uint64_t x394 = 6294LLU;
	uint8_t x395 = UINT8_MAX;
	volatile uint8_t x396 = UINT8_MAX;

    t91 = ((x393/x394)!=(x395!=x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x398 = INT8_MIN;
	volatile int16_t x399 = -1;
	volatile int16_t x400 = INT16_MAX;

    t92 = ((x397/x398)!=(x399!=x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x401 = INT32_MIN;
	uint8_t x402 = UINT8_MAX;
	volatile int16_t x404 = -1;
	volatile int32_t t93 = -6;

    t93 = ((x401/x402)!=(x403!=x404));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int32_t t94 = 61595;

    t94 = ((x405/x406)!=(x407!=x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MIN;
	static uint64_t x410 = 8999853497009840LLU;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = -1LL;
	int32_t t95 = 1490;

    t95 = ((x409/x410)!=(x411!=x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x414 = INT64_MIN;
	volatile int16_t x416 = INT16_MIN;
	int32_t t96 = 45418423;

    t96 = ((x413/x414)!=(x415!=x416));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x417 = UINT32_MAX;
	int64_t x418 = INT64_MAX;
	int64_t x419 = -1LL;
	int16_t x420 = 74;

    t97 = ((x417/x418)!=(x419!=x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x421 = INT16_MAX;
	int32_t x423 = INT32_MIN;
	volatile uint32_t x424 = 13224484U;
	int32_t t98 = 2889565;

    t98 = ((x421/x422)!=(x423!=x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = INT16_MAX;
	int64_t x427 = INT64_MIN;
	uint8_t x428 = 41U;
	volatile int32_t t99 = -4552267;

    t99 = ((x425/x426)!=(x427!=x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = -1;
	uint32_t x430 = 1073802291U;
	static int16_t x431 = -1;
	int64_t x432 = INT64_MAX;

    t100 = ((x429/x430)!=(x431!=x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x433 = 33988927310872LL;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -34429663144741065LL;
	volatile int32_t t101 = 2642200;

    t101 = ((x433/x434)!=(x435!=x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x437 = 94U;
	int8_t x439 = 54;
	volatile int32_t t102 = -1;

    t102 = ((x437/x438)!=(x439!=x440));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x441 = 520260932LLU;
	int64_t x442 = 62514438911LL;
	uint32_t x443 = 629738293U;
	uint32_t x444 = UINT32_MAX;

    t103 = ((x441/x442)!=(x443!=x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x445 = UINT8_MAX;
	volatile int16_t x446 = INT16_MIN;
	int32_t x447 = -1;
	uint32_t x448 = 97861U;
	int32_t t104 = 26605589;

    t104 = ((x445/x446)!=(x447!=x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x452 = 19839U;
	static int32_t t105 = 1;

    t105 = ((x449/x450)!=(x451!=x452));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x453 = INT16_MAX;
	uint16_t x454 = UINT16_MAX;
	int8_t x455 = 16;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t106 = 2;

    t106 = ((x453/x454)!=(x455!=x456));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x457 = -4;
	int32_t x458 = INT32_MIN;
	static uint16_t x459 = 172U;
	static volatile int32_t t107 = -402;

    t107 = ((x457/x458)!=(x459!=x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x461 = -817;
	static uint8_t x462 = UINT8_MAX;
	volatile uint64_t x463 = 10595016958290LLU;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t108 = 15679894;

    t108 = ((x461/x462)!=(x463!=x464));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = 911;
	uint32_t x466 = 1909U;
	int64_t x467 = -1021500LL;
	static int32_t x468 = INT32_MAX;
	static volatile int32_t t109 = -233;

    t109 = ((x465/x466)!=(x467!=x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x469 = -1;
	int16_t x470 = INT16_MIN;
	int32_t x471 = 23155;
	int8_t x472 = -1;
	int32_t t110 = -355727;

    t110 = ((x469/x470)!=(x471!=x472));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x473 = 2951991405LLU;
	volatile uint8_t x474 = UINT8_MAX;
	uint32_t x475 = 9744377U;
	int32_t t111 = 41971917;

    t111 = ((x473/x474)!=(x475!=x476));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x478 = 5321U;
	uint64_t x479 = 265965423LLU;
	uint64_t x480 = 8370364120278741104LLU;
	int32_t t112 = 620297;

    t112 = ((x477/x478)!=(x479!=x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x481 = 58216LL;
	volatile int8_t x482 = INT8_MAX;
	uint16_t x484 = 10989U;
	static int32_t t113 = -4;

    t113 = ((x481/x482)!=(x483!=x484));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x485 = INT32_MIN;
	static volatile int64_t x486 = INT64_MIN;
	volatile int64_t x487 = 2135875139473699490LL;
	int32_t t114 = 402141869;

    t114 = ((x485/x486)!=(x487!=x488));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x490 = INT8_MIN;
	volatile int16_t x491 = INT16_MIN;
	static int8_t x492 = INT8_MIN;

    t115 = ((x489/x490)!=(x491!=x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = -1LL;
	volatile int64_t x495 = 3513LL;
	uint8_t x496 = UINT8_MAX;
	static volatile int32_t t116 = -3;

    t116 = ((x493/x494)!=(x495!=x496));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x497 = -1;
	int8_t x498 = INT8_MIN;
	int8_t x499 = INT8_MIN;
	volatile int32_t t117 = 655;

    t117 = ((x497/x498)!=(x499!=x500));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x502 = 1U;
	int16_t x503 = -1;
	int64_t x504 = INT64_MIN;
	int32_t t118 = -66737826;

    t118 = ((x501/x502)!=(x503!=x504));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x505 = UINT16_MAX;
	volatile int64_t x506 = -41103995LL;
	static int8_t x507 = -1;
	int16_t x508 = -1;
	int32_t t119 = -676577;

    t119 = ((x505/x506)!=(x507!=x508));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x509 = -1;
	volatile int32_t x510 = INT32_MIN;
	int16_t x511 = 0;
	volatile int64_t x512 = INT64_MIN;

    t120 = ((x509/x510)!=(x511!=x512));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = INT16_MAX;
	static volatile uint64_t x514 = UINT64_MAX;
	static volatile uint8_t x515 = 78U;
	volatile int64_t x516 = INT64_MIN;
	volatile int32_t t121 = 66274543;

    t121 = ((x513/x514)!=(x515!=x516));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x517 = INT32_MAX;
	uint32_t x518 = UINT32_MAX;
	uint8_t x519 = 27U;
	int16_t x520 = -1;
	volatile int32_t t122 = 15005;

    t122 = ((x517/x518)!=(x519!=x520));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = 11785;
	int16_t x523 = -6125;
	int32_t x524 = -1;
	int32_t t123 = 16;

    t123 = ((x521/x522)!=(x523!=x524));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x527 = 14;
	uint16_t x528 = 20348U;
	volatile int32_t t124 = -21173;

    t124 = ((x525/x526)!=(x527!=x528));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x529 = 121U;
	int16_t x530 = INT16_MIN;
	static volatile int64_t x531 = INT64_MIN;
	int32_t t125 = 287782410;

    t125 = ((x529/x530)!=(x531!=x532));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = 1;
	int64_t x534 = -11566729596556LL;
	int16_t x535 = -1;
	int32_t t126 = 22;

    t126 = ((x533/x534)!=(x535!=x536));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x537 = -1;
	int8_t x538 = -1;
	int8_t x540 = INT8_MAX;
	int32_t t127 = 1115449;

    t127 = ((x537/x538)!=(x539!=x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x542 = 15000062U;
	volatile uint64_t x543 = 4643078418086712LLU;
	static uint64_t x544 = UINT64_MAX;
	int32_t t128 = 386;

    t128 = ((x541/x542)!=(x543!=x544));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x545 = INT64_MIN;
	uint16_t x546 = UINT16_MAX;
	static uint16_t x547 = 102U;
	int32_t x548 = -1;
	static volatile int32_t t129 = -97;

    t129 = ((x545/x546)!=(x547!=x548));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x549 = 641;
	static uint64_t x550 = 624333801589009LLU;
	static uint16_t x551 = 7U;
	int8_t x552 = -21;

    t130 = ((x549/x550)!=(x551!=x552));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x555 = UINT64_MAX;
	volatile int32_t t131 = 51800215;

    t131 = ((x553/x554)!=(x555!=x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x557 = INT16_MIN;
	int8_t x558 = INT8_MAX;
	static int16_t x559 = -28;

    t132 = ((x557/x558)!=(x559!=x560));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x562 = 27U;
	uint16_t x563 = 4U;
	int16_t x564 = INT16_MAX;
	int32_t t133 = -871155317;

    t133 = ((x561/x562)!=(x563!=x564));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x566 = INT32_MIN;
	static int32_t t134 = 1;

    t134 = ((x565/x566)!=(x567!=x568));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x569 = -1LL;
	int32_t x570 = INT32_MIN;
	uint64_t x571 = 1120602969LLU;
	int32_t x572 = 17;
	volatile int32_t t135 = 226;

    t135 = ((x569/x570)!=(x571!=x572));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = 0;
	uint16_t x575 = UINT16_MAX;
	static uint16_t x576 = 2153U;
	static int32_t t136 = 0;

    t136 = ((x573/x574)!=(x575!=x576));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x577 = -1;
	int32_t x578 = INT32_MAX;
	uint8_t x579 = 1U;
	int64_t x580 = -1LL;

    t137 = ((x577/x578)!=(x579!=x580));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x581 = -453916154LL;
	volatile int32_t t138 = -1232;

    t138 = ((x581/x582)!=(x583!=x584));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x589 = 119806LLU;
	uint8_t x590 = 1U;
	uint16_t x591 = UINT16_MAX;
	uint64_t x592 = 934694482586712LLU;
	volatile int32_t t139 = 7517;

    t139 = ((x589/x590)!=(x591!=x592));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x593 = 1081481845LLU;
	int16_t x594 = INT16_MIN;
	int64_t x595 = INT64_MIN;
	static int8_t x596 = -1;
	int32_t t140 = 124;

    t140 = ((x593/x594)!=(x595!=x596));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x597 = -1;
	uint32_t x598 = 64U;
	uint64_t x600 = UINT64_MAX;
	volatile int32_t t141 = 173054726;

    t141 = ((x597/x598)!=(x599!=x600));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x601 = -1;
	static int8_t x602 = INT8_MAX;
	static int8_t x603 = -48;
	int8_t x604 = INT8_MIN;
	int32_t t142 = -8237134;

    t142 = ((x601/x602)!=(x603!=x604));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x606 = INT8_MIN;
	uint64_t x607 = 1597589LLU;
	int32_t t143 = -10;

    t143 = ((x605/x606)!=(x607!=x608));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x611 = INT8_MAX;
	int64_t x612 = INT64_MIN;
	volatile int32_t t144 = -836;

    t144 = ((x609/x610)!=(x611!=x612));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x613 = 106U;
	static int16_t x614 = INT16_MIN;
	uint64_t x615 = 10559LLU;
	int8_t x616 = INT8_MIN;
	static int32_t t145 = -133926618;

    t145 = ((x613/x614)!=(x615!=x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x618 = UINT8_MAX;
	int16_t x620 = INT16_MIN;
	static int32_t t146 = 5;

    t146 = ((x617/x618)!=(x619!=x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x623 = -1;
	static int8_t x624 = 62;

    t147 = ((x621/x622)!=(x623!=x624));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x626 = -1;
	volatile int16_t x627 = INT16_MIN;
	volatile int64_t x628 = INT64_MIN;
	static volatile int32_t t148 = -77769;

    t148 = ((x625/x626)!=(x627!=x628));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x629 = 2U;
	uint32_t x630 = 101838U;
	static uint64_t x631 = 379LLU;
	uint64_t x632 = 601669328057107343LLU;
	int32_t t149 = -3062654;

    t149 = ((x629/x630)!=(x631!=x632));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x633 = INT64_MAX;
	static uint64_t x634 = UINT64_MAX;
	static uint16_t x635 = 0U;
	static int64_t x636 = -322912940039644233LL;
	volatile int32_t t150 = 44403988;

    t150 = ((x633/x634)!=(x635!=x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x637 = -1;
	static int8_t x638 = -3;
	int32_t x639 = INT32_MIN;
	volatile int32_t t151 = -11809396;

    t151 = ((x637/x638)!=(x639!=x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x649 = INT32_MIN;
	int8_t x650 = -59;
	uint16_t x651 = 467U;
	int16_t x652 = 58;
	static int32_t t152 = -1;

    t152 = ((x649/x650)!=(x651!=x652));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x653 = 0;
	int32_t x655 = -1;
	uint32_t x656 = 20630646U;
	int32_t t153 = 19200;

    t153 = ((x653/x654)!=(x655!=x656));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x658 = -1;
	volatile uint32_t x659 = UINT32_MAX;
	volatile int64_t x660 = INT64_MIN;
	int32_t t154 = -15446;

    t154 = ((x657/x658)!=(x659!=x660));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x661 = INT32_MIN;
	uint64_t x662 = 321242582783182963LLU;
	uint8_t x663 = 4U;
	uint8_t x664 = 0U;
	volatile int32_t t155 = -15329715;

    t155 = ((x661/x662)!=(x663!=x664));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x665 = -1LL;
	static int64_t x666 = -34364865670241007LL;
	static int8_t x667 = -1;
	static int32_t t156 = -43894;

    t156 = ((x665/x666)!=(x667!=x668));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x669 = 1798507544U;
	static uint32_t x671 = 3498309U;

    t157 = ((x669/x670)!=(x671!=x672));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x673 = UINT32_MAX;
	uint16_t x674 = 3423U;
	volatile uint64_t x675 = UINT64_MAX;
	uint64_t x676 = 0LLU;

    t158 = ((x673/x674)!=(x675!=x676));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x677 = UINT32_MAX;
	uint16_t x680 = UINT16_MAX;

    t159 = ((x677/x678)!=(x679!=x680));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x681 = 4U;
	int64_t x682 = INT64_MAX;
	int64_t x683 = -1LL;
	uint16_t x684 = 19U;
	int32_t t160 = 639361;

    t160 = ((x681/x682)!=(x683!=x684));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x685 = 34U;
	int8_t x686 = INT8_MIN;
	int8_t x688 = 22;
	volatile int32_t t161 = 251636326;

    t161 = ((x685/x686)!=(x687!=x688));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x689 = -11;
	int32_t x690 = INT32_MIN;
	int64_t x691 = INT64_MIN;
	int64_t x692 = INT64_MIN;
	volatile int32_t t162 = -4377553;

    t162 = ((x689/x690)!=(x691!=x692));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x694 = -1;
	uint64_t x695 = 10334603706262LLU;
	uint16_t x696 = 20693U;
	int32_t t163 = 101339;

    t163 = ((x693/x694)!=(x695!=x696));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x699 = INT32_MIN;
	static uint8_t x700 = UINT8_MAX;
	volatile int32_t t164 = -99145575;

    t164 = ((x697/x698)!=(x699!=x700));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x701 = INT64_MAX;
	static int32_t x704 = INT32_MIN;
	volatile int32_t t165 = -212368163;

    t165 = ((x701/x702)!=(x703!=x704));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x705 = 2565U;
	static volatile int32_t x706 = INT32_MIN;
	static volatile int32_t t166 = 181289868;

    t166 = ((x705/x706)!=(x707!=x708));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x709 = INT32_MIN;
	static uint16_t x710 = UINT16_MAX;
	static int64_t x712 = INT64_MIN;
	int32_t t167 = -7531347;

    t167 = ((x709/x710)!=(x711!=x712));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x713 = -1;
	static int8_t x714 = INT8_MIN;
	uint64_t x715 = 67085960784254654LLU;
	int8_t x716 = INT8_MIN;
	int32_t t168 = -32;

    t168 = ((x713/x714)!=(x715!=x716));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x717 = INT8_MAX;
	uint32_t x718 = 64U;
	int32_t x719 = INT32_MAX;
	static int16_t x720 = -1;
	volatile int32_t t169 = 96935637;

    t169 = ((x717/x718)!=(x719!=x720));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x721 = 7;
	int8_t x722 = 58;
	static uint64_t x723 = 808201LLU;
	volatile int16_t x724 = 91;
	int32_t t170 = 89;

    t170 = ((x721/x722)!=(x723!=x724));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x725 = 762871994LLU;
	volatile uint8_t x726 = 1U;
	int64_t x727 = 1660LL;
	int16_t x728 = INT16_MIN;
	int32_t t171 = 11;

    t171 = ((x725/x726)!=(x727!=x728));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x730 = INT32_MIN;
	int32_t x731 = -107901;
	int32_t x732 = INT32_MIN;
	int32_t t172 = 1871;

    t172 = ((x729/x730)!=(x731!=x732));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x733 = INT8_MAX;
	volatile int64_t x734 = 4055LL;
	int32_t x735 = -1;
	uint8_t x736 = 34U;

    t173 = ((x733/x734)!=(x735!=x736));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x737 = UINT16_MAX;
	int16_t x738 = INT16_MAX;
	static uint16_t x739 = 15U;

    t174 = ((x737/x738)!=(x739!=x740));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x741 = 6;
	static volatile int8_t x743 = -1;
	int16_t x744 = 569;

    t175 = ((x741/x742)!=(x743!=x744));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x746 = 80128363545972LLU;
	int32_t x747 = 1218;
	static uint8_t x748 = 1U;
	int32_t t176 = 0;

    t176 = ((x745/x746)!=(x747!=x748));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x750 = INT32_MIN;
	static int8_t x752 = -1;
	int32_t t177 = 18;

    t177 = ((x749/x750)!=(x751!=x752));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x753 = 0U;
	int16_t x754 = INT16_MIN;
	static int32_t x756 = -4;
	int32_t t178 = -1;

    t178 = ((x753/x754)!=(x755!=x756));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = -1;
	int32_t x758 = INT32_MIN;
	volatile int8_t x759 = -21;
	uint64_t x760 = 41798639LLU;
	volatile int32_t t179 = -7980428;

    t179 = ((x757/x758)!=(x759!=x760));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x762 = INT8_MIN;
	uint8_t x763 = 10U;
	volatile uint64_t x764 = 28101289LLU;

    t180 = ((x761/x762)!=(x763!=x764));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x765 = INT8_MIN;
	static int32_t x766 = 236677;
	int8_t x767 = -1;
	int8_t x768 = INT8_MIN;
	int32_t t181 = 1;

    t181 = ((x765/x766)!=(x767!=x768));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x769 = -1;
	static uint8_t x770 = 2U;
	uint8_t x772 = 1U;
	volatile int32_t t182 = -682036;

    t182 = ((x769/x770)!=(x771!=x772));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x777 = -1;
	uint64_t x778 = UINT64_MAX;
	int64_t x779 = 1414042102118125LL;
	int16_t x780 = INT16_MIN;
	static int32_t t183 = 8061;

    t183 = ((x777/x778)!=(x779!=x780));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x781 = INT32_MAX;
	int8_t x783 = INT8_MAX;
	int64_t x784 = -170186780LL;
	static volatile int32_t t184 = 2475;

    t184 = ((x781/x782)!=(x783!=x784));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x785 = INT16_MIN;
	uint64_t x786 = 9466090417LLU;
	int32_t x787 = 624651;
	int32_t x788 = 11;
	int32_t t185 = -1;

    t185 = ((x785/x786)!=(x787!=x788));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x789 = 149993220046594LLU;
	int8_t x790 = -35;
	int32_t x791 = INT32_MIN;
	int64_t x792 = 179206591624LL;
	volatile int32_t t186 = 1;

    t186 = ((x789/x790)!=(x791!=x792));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x794 = INT32_MAX;
	int64_t x795 = 784709389926300LL;
	static int16_t x796 = INT16_MAX;

    t187 = ((x793/x794)!=(x795!=x796));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x798 = 674186303U;
	uint32_t x799 = 6U;
	volatile uint8_t x800 = 3U;

    t188 = ((x797/x798)!=(x799!=x800));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x802 = INT8_MAX;
	volatile uint32_t x803 = UINT32_MAX;

    t189 = ((x801/x802)!=(x803!=x804));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x805 = 53U;
	static int32_t x806 = 218468;
	int64_t x808 = INT64_MAX;
	static int32_t t190 = 37336020;

    t190 = ((x805/x806)!=(x807!=x808));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x809 = UINT8_MAX;
	volatile int32_t x810 = INT32_MIN;
	uint8_t x811 = 5U;
	uint16_t x812 = 1U;
	volatile int32_t t191 = -10910;

    t191 = ((x809/x810)!=(x811!=x812));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x813 = 162U;
	volatile uint16_t x814 = UINT16_MAX;
	uint64_t x815 = 8203519816648LLU;
	volatile int8_t x816 = -1;
	volatile int32_t t192 = 876;

    t192 = ((x813/x814)!=(x815!=x816));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x817 = 20118U;
	uint8_t x818 = 82U;
	volatile int64_t x819 = INT64_MIN;
	volatile int8_t x820 = INT8_MIN;
	int32_t t193 = 163094536;

    t193 = ((x817/x818)!=(x819!=x820));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile int32_t x822 = -1;
	static volatile uint16_t x823 = 1487U;
	int8_t x824 = 1;
	volatile int32_t t194 = 8775;

    t194 = ((x821/x822)!=(x823!=x824));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x826 = -1;
	int16_t x827 = -14242;
	static int8_t x828 = -1;
	static volatile int32_t t195 = -447862812;

    t195 = ((x825/x826)!=(x827!=x828));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x829 = 24;
	uint16_t x830 = 29753U;
	static int64_t x831 = INT64_MIN;
	int32_t x832 = INT32_MIN;
	int32_t t196 = -18;

    t196 = ((x829/x830)!=(x831!=x832));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x833 = -1;
	int16_t x834 = INT16_MAX;
	uint16_t x835 = 2U;
	static uint64_t x836 = UINT64_MAX;
	int32_t t197 = -27;

    t197 = ((x833/x834)!=(x835!=x836));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x837 = 1257925;
	uint16_t x838 = 6049U;
	static uint64_t x839 = 311914LLU;
	volatile uint16_t x840 = UINT16_MAX;
	int32_t t198 = -83618;

    t198 = ((x837/x838)!=(x839!=x840));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x841 = -1LL;
	static int32_t x842 = -1;
	volatile uint64_t x843 = 5390655278502LLU;
	uint32_t x844 = 48U;
	int32_t t199 = -423;

    t199 = ((x841/x842)!=(x843!=x844));

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

