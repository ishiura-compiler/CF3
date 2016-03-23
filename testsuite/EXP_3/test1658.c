
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

int8_t x2 = INT8_MAX;
int16_t x4 = INT16_MIN;
int32_t t2 = 16563928;
int32_t x16 = INT32_MIN;
int64_t x36 = -1LL;
int8_t x37 = INT8_MAX;
volatile uint16_t x41 = 3U;
static int8_t x46 = -7;
int32_t x65 = -1;
int32_t t16 = -84;
static int8_t x69 = -58;
int64_t x72 = 643190170580887LL;
static uint64_t x82 = UINT64_MAX;
uint64_t x84 = 18489995393494794LLU;
int32_t t23 = 493219;
int64_t x100 = -1LL;
int64_t x103 = INT64_MIN;
int16_t x109 = INT16_MAX;
uint32_t x110 = 1814868251U;
int16_t x112 = -1;
int8_t x119 = -2;
int8_t x129 = INT8_MAX;
volatile int32_t t34 = 1;
static int64_t x147 = -14934619365998LL;
int8_t x150 = -1;
uint64_t x158 = UINT64_MAX;
static int64_t x162 = -1LL;
int8_t x163 = -22;
int32_t x166 = 25426;
int8_t x167 = -14;
int32_t t42 = 26;
uint32_t x177 = UINT32_MAX;
int32_t x179 = -487;
volatile int8_t x183 = INT8_MIN;
int32_t t45 = -11;
static int64_t x186 = INT64_MIN;
int16_t x198 = -1;
int32_t x199 = INT32_MIN;
int32_t x205 = -1;
int8_t x212 = INT8_MIN;
uint16_t x215 = 113U;
static volatile int64_t x220 = INT64_MIN;
volatile int32_t t54 = -2022604;
static volatile int16_t x231 = INT16_MAX;
volatile int32_t t57 = -6065;
static volatile int64_t x236 = -1LL;
volatile int32_t t58 = -11;
static int64_t x239 = -1LL;
uint16_t x252 = 11167U;
int32_t t62 = 61745;
uint8_t x253 = UINT8_MAX;
int32_t t63 = 7014391;
static volatile int16_t x260 = INT16_MIN;
volatile int32_t t64 = -13922006;
int32_t x261 = 81700755;
volatile uint64_t x265 = UINT64_MAX;
int32_t t66 = 413387118;
static uint64_t x273 = UINT64_MAX;
int8_t x274 = INT8_MIN;
static int8_t x284 = INT8_MIN;
volatile int64_t x290 = -27291507222441LL;
int8_t x296 = INT8_MIN;
volatile int32_t t73 = 102;
static uint32_t x304 = UINT32_MAX;
int32_t t75 = -267;
int16_t x309 = -6;
static int64_t x325 = -1LL;
int32_t x328 = INT32_MAX;
int8_t x330 = 6;
int32_t t82 = -2;
uint8_t x334 = 50U;
static uint16_t x339 = 188U;
static int16_t x344 = -1;
int8_t x345 = INT8_MIN;
int16_t x347 = -29;
static volatile uint32_t x349 = 0U;
uint8_t x354 = 10U;
int32_t t88 = 897624253;
uint32_t x365 = 475U;
volatile int32_t t91 = 403476224;
int32_t x382 = INT32_MIN;
volatile int16_t x386 = INT16_MAX;
volatile uint64_t x388 = 75440501979219667LLU;
volatile int32_t t96 = -1819778;
volatile int32_t x391 = -1;
static uint16_t x394 = 1U;
static int16_t x395 = -1414;
int64_t x400 = INT64_MAX;
uint16_t x404 = UINT16_MAX;
volatile int32_t t100 = -20;
int64_t x405 = -1LL;
static volatile uint64_t x407 = UINT64_MAX;
volatile int16_t x408 = INT16_MIN;
uint8_t x411 = 4U;
int64_t x412 = 793695631LL;
int16_t x418 = INT16_MIN;
uint8_t x432 = 112U;
int64_t x437 = INT64_MAX;
int8_t x440 = 31;
uint32_t x443 = 392U;
volatile int32_t x460 = 1532;
int64_t x467 = -1LL;
int64_t x469 = 3326820083LL;
int16_t x470 = INT16_MIN;
static volatile uint64_t x471 = 94793LLU;
int16_t x477 = INT16_MIN;
int64_t x484 = INT64_MIN;
volatile int32_t t122 = -30;
static int16_t x500 = INT16_MAX;
int32_t t125 = -4979;
volatile int16_t x505 = -1;
static int32_t x506 = -19139;
uint64_t x507 = 920235LLU;
int32_t x512 = INT32_MIN;
volatile uint64_t x513 = 1964474LLU;
static int32_t t128 = 96122;
int16_t x521 = INT16_MIN;
volatile int64_t x527 = -9581706242LL;
int16_t x528 = -52;
int32_t t131 = -105675602;
uint32_t x531 = UINT32_MAX;
static int32_t t132 = -131538;
static int64_t x533 = -1LL;
static volatile int8_t x539 = INT8_MIN;
uint8_t x541 = 0U;
int8_t x545 = INT8_MIN;
uint64_t x569 = UINT64_MAX;
volatile int32_t t142 = -96554;
static int64_t x576 = INT64_MAX;
int32_t t143 = 99440238;
int32_t t144 = -189536;
int16_t x588 = -1;
volatile int8_t x589 = -1;
volatile uint8_t x590 = UINT8_MAX;
volatile int8_t x593 = 16;
int16_t x600 = INT16_MIN;
int32_t t150 = -14;
int16_t x608 = 6623;
int16_t x609 = -16;
uint16_t x611 = UINT16_MAX;
volatile int64_t x612 = -1LL;
static int32_t t153 = 575;
volatile int32_t x618 = 90;
volatile int16_t x620 = INT16_MIN;
int8_t x622 = INT8_MAX;
int16_t x623 = INT16_MIN;
int64_t x624 = INT64_MIN;
static int64_t x630 = INT64_MIN;
int8_t x640 = INT8_MIN;
static int32_t x644 = 6;
int32_t t160 = 30;
int64_t x648 = INT64_MIN;
static int32_t x651 = INT32_MIN;
volatile int16_t x654 = 1620;
int32_t t164 = -3418855;
int64_t x661 = -31401651232LL;
int32_t x667 = INT32_MIN;
int8_t x680 = INT8_MAX;
int8_t x682 = 0;
int8_t x685 = -6;
volatile int32_t t171 = 7872949;
volatile int16_t x691 = INT16_MIN;
volatile int8_t x694 = INT8_MIN;
uint8_t x695 = UINT8_MAX;
int8_t x698 = INT8_MIN;
int64_t x709 = -3LL;
static int8_t x712 = INT8_MIN;
static int32_t t177 = 373;
int32_t x713 = INT32_MAX;
int32_t x716 = -393964808;
int64_t x718 = 0LL;
static volatile uint64_t x729 = 81034LLU;
int32_t x730 = INT32_MIN;
volatile int8_t x731 = -1;
uint16_t x732 = UINT16_MAX;
volatile uint32_t x733 = 1229U;
static int32_t t184 = -14211341;
uint64_t x743 = 193LLU;
static volatile int32_t x747 = INT32_MIN;
volatile int64_t x754 = INT64_MIN;
static int32_t t188 = 10;
int16_t x758 = -1315;
static int8_t x764 = 1;
volatile int32_t t190 = 950702325;
static uint8_t x766 = 71U;
volatile int32_t t191 = -415419595;
uint8_t x772 = 75U;
uint64_t x773 = 3643094583852294348LLU;
int8_t x775 = INT8_MAX;
int32_t t193 = 2808744;
static volatile int8_t x795 = INT8_MIN;
int8_t x797 = -1;
int16_t x800 = INT16_MIN;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	static volatile uint16_t x3 = 152U;
	volatile int32_t t0 = 4;

    t0 = ((x1!=x2)<<(x3>x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 213369U;
	int16_t x6 = 31;
	static volatile int64_t x7 = INT64_MAX;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = 1;

    t1 = ((x5!=x6)<<(x7>x8));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -46770140LL;
	uint64_t x10 = 677277060472LLU;
	volatile int32_t x11 = 23907965;
	volatile int8_t x12 = INT8_MIN;

    t2 = ((x9!=x10)<<(x11>x12));

    if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MAX;
	int32_t x15 = -19379;
	volatile int32_t t3 = 4039;

    t3 = ((x13!=x14)<<(x15>x16));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int8_t x18 = -1;
	uint64_t x19 = 7769LLU;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 988;

    t4 = ((x17!=x18)<<(x19>x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = 6594;
	volatile int16_t x24 = -373;
	static volatile int32_t t5 = 34;

    t5 = ((x21!=x22)<<(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 18U;
	uint64_t x27 = UINT64_MAX;
	static int8_t x28 = 37;
	volatile int32_t t6 = -212;

    t6 = ((x25!=x26)<<(x27>x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile int64_t x30 = INT64_MAX;
	volatile int32_t x31 = INT32_MIN;
	uint16_t x32 = 2154U;
	int32_t t7 = -1;

    t7 = ((x29!=x30)<<(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	static int16_t x35 = -5;
	int32_t t8 = 3337;

    t8 = ((x33!=x34)<<(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = 26226;
	int64_t x39 = INT64_MAX;
	int64_t x40 = -9155419LL;
	static int32_t t9 = 45;

    t9 = ((x37!=x38)<<(x39>x40));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x42 = UINT8_MAX;
	int8_t x43 = -1;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -24053;

    t10 = ((x41!=x42)<<(x43>x44));

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int32_t x47 = 915688034;
	volatile uint8_t x48 = UINT8_MAX;
	static volatile int32_t t11 = 23807;

    t11 = ((x45!=x46)<<(x47>x48));

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	uint8_t x50 = UINT8_MAX;
	int8_t x51 = INT8_MIN;
	volatile int32_t x52 = 1347;
	int32_t t12 = -16247;

    t12 = ((x49!=x50)<<(x51>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int8_t x56 = -1;
	volatile int32_t t13 = 33147129;

    t13 = ((x53!=x54)<<(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 1;
	int64_t x58 = -1LL;
	int16_t x59 = 40;
	uint8_t x60 = 2U;
	int32_t t14 = -18818;

    t14 = ((x57!=x58)<<(x59>x60));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	static uint8_t x62 = UINT8_MAX;
	volatile uint64_t x63 = UINT64_MAX;
	static int8_t x64 = INT8_MAX;
	static volatile int32_t t15 = -51;

    t15 = ((x61!=x62)<<(x63>x64));

    if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	int64_t x67 = 1181856LL;
	uint16_t x68 = UINT16_MAX;

    t16 = ((x65!=x66)<<(x67>x68));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MAX;
	int8_t x71 = INT8_MAX;
	volatile int32_t t17 = 3234547;

    t17 = ((x69!=x70)<<(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = 54;
	volatile uint8_t x74 = 0U;
	int64_t x75 = -1LL;
	int64_t x76 = INT64_MIN;
	int32_t t18 = -156;

    t18 = ((x73!=x74)<<(x75>x76));

    if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = 5890;
	uint32_t x78 = 2616U;
	int16_t x79 = 1865;
	int64_t x80 = 5531828617LL;
	static volatile int32_t t19 = 368027700;

    t19 = ((x77!=x78)<<(x79>x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x83 = 2816;
	volatile int32_t t20 = 132;

    t20 = ((x81!=x82)<<(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -25477800105LL;
	static int8_t x86 = INT8_MAX;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;
	volatile int32_t t21 = -12;

    t21 = ((x85!=x86)<<(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	static uint8_t x90 = 49U;
	static uint16_t x91 = 15924U;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -1768650;

    t22 = ((x89!=x90)<<(x91>x92));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MIN;
	volatile int8_t x94 = INT8_MIN;
	static int32_t x95 = -6;
	uint16_t x96 = UINT16_MAX;

    t23 = ((x93!=x94)<<(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = -1;
	volatile int32_t x98 = 2607435;
	int64_t x99 = INT64_MIN;
	static int32_t t24 = 6716860;

    t24 = ((x97!=x98)<<(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	volatile uint8_t x102 = 0U;
	int64_t x104 = -5493467LL;
	volatile int32_t t25 = 879468;

    t25 = ((x101!=x102)<<(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 50072U;
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 5371LLU;
	int32_t t26 = -1832761;

    t26 = ((x105!=x106)<<(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x111 = 11;
	volatile int32_t t27 = -104831;

    t27 = ((x109!=x110)<<(x111>x112));

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = -1;
	uint16_t x115 = 8U;
	volatile int8_t x116 = 1;
	volatile int32_t t28 = -1377;

    t28 = ((x113!=x114)<<(x115>x116));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	uint8_t x118 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	static int32_t t29 = 11034;

    t29 = ((x117!=x118)<<(x119>x120));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	int64_t x122 = 0LL;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = 3U;
	int32_t t30 = 325;

    t30 = ((x121!=x122)<<(x123>x124));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	uint64_t x126 = 461825551507165LLU;
	static int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -6385;

    t31 = ((x125!=x126)<<(x127>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x130 = 13218;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	static int32_t t32 = 109;

    t32 = ((x129!=x130)<<(x131>x132));

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = -1;
	static int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 194203;

    t33 = ((x133!=x134)<<(x135>x136));

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -10818405;
	int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;
	volatile uint64_t x140 = 4LLU;

    t34 = ((x137!=x138)<<(x139>x140));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 167U;
	uint16_t x142 = UINT16_MAX;
	static int64_t x143 = -1735LL;
	int16_t x144 = -20;
	int32_t t35 = -617171337;

    t35 = ((x141!=x142)<<(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = -10272;
	uint64_t x146 = UINT64_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 0;

    t36 = ((x145!=x146)<<(x147>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 22017U;
	int16_t x151 = 6;
	int32_t x152 = -1;
	static volatile int32_t t37 = -3;

    t37 = ((x149!=x150)<<(x151>x152));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint16_t x154 = UINT16_MAX;
	uint8_t x155 = 0U;
	int8_t x156 = INT8_MAX;
	static volatile int32_t t38 = -2013230;

    t38 = ((x153!=x154)<<(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = -131262717;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = -1;
	volatile int32_t t39 = 1972;

    t39 = ((x157!=x158)<<(x159>x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	int32_t x164 = -1;
	volatile int32_t t40 = 94882;

    t40 = ((x161!=x162)<<(x163>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -59163754;

    t41 = ((x165!=x166)<<(x167>x168));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 27303U;
	volatile int32_t x170 = 88;
	static uint32_t x171 = 15768U;
	volatile int16_t x172 = -1;

    t42 = ((x169!=x170)<<(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	static int32_t x174 = -1;
	int64_t x175 = INT64_MIN;
	static int32_t x176 = -8174347;
	volatile int32_t t43 = -3593;

    t43 = ((x173!=x174)<<(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x178 = INT32_MAX;
	static int32_t x180 = 326;
	int32_t t44 = -281833920;

    t44 = ((x177!=x178)<<(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	int64_t x184 = 67511111296955018LL;

    t45 = ((x181!=x182)<<(x183>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x187 = 0U;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 1461;

    t46 = ((x185!=x186)<<(x187>x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = 30;
	int64_t x190 = 1738855223878LL;
	volatile uint16_t x191 = 295U;
	static int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = -48;

    t47 = ((x189!=x190)<<(x191>x192));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	uint16_t x194 = 1082U;
	int16_t x195 = INT16_MIN;
	int16_t x196 = 92;
	volatile int32_t t48 = -17572669;

    t48 = ((x193!=x194)<<(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 0;
	uint32_t x200 = 1U;
	volatile int32_t t49 = 1551436;

    t49 = ((x197!=x198)<<(x199>x200));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	volatile uint8_t x203 = 1U;
	int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 2;

    t50 = ((x201!=x202)<<(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x206 = INT32_MAX;
	int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 1;

    t51 = ((x205!=x206)<<(x207>x208));

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	int16_t x211 = -1;
	volatile int32_t t52 = -29063;

    t52 = ((x209!=x210)<<(x211>x212));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = 2628673156860808653LLU;
	uint64_t x214 = UINT64_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = 43396222;

    t53 = ((x213!=x214)<<(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MAX;

    t54 = ((x217!=x218)<<(x219>x220));

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = -1;
	static int64_t x222 = INT64_MIN;
	uint64_t x223 = 6745054820LLU;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 317;

    t55 = ((x221!=x222)<<(x223>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MAX;
	uint32_t x227 = 9361064U;
	volatile int64_t x228 = 4531340LL;
	volatile int32_t t56 = 1192;

    t56 = ((x225!=x226)<<(x227>x228));

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	volatile uint64_t x230 = 490LLU;
	int32_t x232 = INT32_MAX;

    t57 = ((x229!=x230)<<(x231>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = -1;
	int32_t x234 = -1;
	int16_t x235 = INT16_MAX;

    t58 = ((x233!=x234)<<(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 587548;
	volatile int16_t x238 = INT16_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 70548476;

    t59 = ((x237!=x238)<<(x239>x240));

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -4;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 8680097U;
	int16_t x244 = -862;
	volatile int32_t t60 = 102794;

    t60 = ((x241!=x242)<<(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 0U;
	int32_t x246 = -1;
	volatile int16_t x247 = -347;
	int64_t x248 = INT64_MAX;
	int32_t t61 = -5595437;

    t61 = ((x245!=x246)<<(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 2;
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;

    t62 = ((x249!=x250)<<(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x254 = 0U;
	int16_t x255 = -1;
	uint16_t x256 = 5693U;

    t63 = ((x253!=x254)<<(x255>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 76;
	int16_t x258 = INT16_MAX;
	uint32_t x259 = 66078263U;

    t64 = ((x257!=x258)<<(x259>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = 91;
	int8_t x263 = 1;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t65 = 53555534;

    t65 = ((x261!=x262)<<(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = 29U;
	static volatile int32_t x267 = 378305;
	int8_t x268 = -26;

    t66 = ((x265!=x266)<<(x267>x268));

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 43LL;
	volatile int16_t x270 = -5494;
	int64_t x271 = INT64_MAX;
	uint8_t x272 = 3U;
	int32_t t67 = 5144471;

    t67 = ((x269!=x270)<<(x271>x272));

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x275 = -1;
	int32_t x276 = INT32_MAX;
	volatile int32_t t68 = -44963128;

    t68 = ((x273!=x274)<<(x275>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	uint16_t x278 = 49U;
	int32_t x279 = INT32_MIN;
	static int8_t x280 = 9;
	int32_t t69 = -1867800;

    t69 = ((x277!=x278)<<(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint32_t x282 = 0U;
	static volatile int32_t x283 = INT32_MAX;
	int32_t t70 = 1050;

    t70 = ((x281!=x282)<<(x283>x284));

    if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	static volatile int64_t x286 = INT64_MIN;
	volatile int64_t x287 = -498424676751270LL;
	volatile int32_t x288 = -67863230;
	static int32_t t71 = -54;

    t71 = ((x285!=x286)<<(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 1U;
	uint16_t x291 = 21404U;
	int32_t x292 = -1;
	int32_t t72 = -6;

    t72 = ((x289!=x290)<<(x291>x292));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = 3;
	uint32_t x294 = 2124034222U;
	int64_t x295 = INT64_MAX;

    t73 = ((x293!=x294)<<(x295>x296));

    if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 21290U;
	uint64_t x298 = 5LLU;
	volatile int32_t x299 = 16296461;
	volatile int8_t x300 = INT8_MAX;
	static volatile int32_t t74 = -6530140;

    t74 = ((x297!=x298)<<(x299>x300));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	uint64_t x302 = UINT64_MAX;
	volatile uint32_t x303 = UINT32_MAX;

    t75 = ((x301!=x302)<<(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	volatile int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	static volatile int32_t x308 = -1790971;
	volatile int32_t t76 = 2749;

    t76 = ((x305!=x306)<<(x307>x308));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = INT32_MIN;
	uint64_t x311 = 17675LLU;
	int16_t x312 = -1;
	static int32_t t77 = -42772;

    t77 = ((x309!=x310)<<(x311>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -1;
	uint32_t x314 = 55073U;
	volatile int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MAX;
	static int32_t t78 = 0;

    t78 = ((x313!=x314)<<(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 949371159U;
	int8_t x318 = -1;
	int32_t x319 = INT32_MAX;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t79 = 33923685;

    t79 = ((x317!=x318)<<(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	static int32_t x322 = 841;
	volatile int16_t x323 = INT16_MAX;
	volatile uint8_t x324 = 15U;
	int32_t t80 = 1962;

    t80 = ((x321!=x322)<<(x323>x324));

    if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	uint8_t x327 = 25U;
	int32_t t81 = 7884852;

    t81 = ((x325!=x326)<<(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MIN;
	static uint64_t x331 = 9388812840089LLU;
	volatile int16_t x332 = INT16_MAX;

    t82 = ((x329!=x330)<<(x331>x332));

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MAX;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = INT16_MIN;
	static volatile int32_t t83 = 251575;

    t83 = ((x333!=x334)<<(x335>x336));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = -383367798;
	int32_t x338 = INT32_MIN;
	volatile uint8_t x340 = 68U;
	int32_t t84 = -4738;

    t84 = ((x337!=x338)<<(x339>x340));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	volatile int8_t x343 = INT8_MIN;
	volatile int32_t t85 = 841411448;

    t85 = ((x341!=x342)<<(x343>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = -54;
	volatile int16_t x348 = -4531;
	int32_t t86 = -3840741;

    t86 = ((x345!=x346)<<(x347>x348));

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	int64_t x351 = -14250460087310LL;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = 756129;

    t87 = ((x349!=x350)<<(x351>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = 0;
	int16_t x355 = -1;
	int64_t x356 = INT64_MAX;

    t88 = ((x353!=x354)<<(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x357 = UINT16_MAX;
	uint32_t x358 = 2726669U;
	volatile uint8_t x359 = 2U;
	volatile int64_t x360 = -424938307953205373LL;
	int32_t t89 = 7;

    t89 = ((x357!=x358)<<(x359>x360));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x361 = 3752916LLU;
	int32_t x362 = INT32_MAX;
	int16_t x363 = -161;
	static int16_t x364 = -1364;
	int32_t t90 = -68393;

    t90 = ((x361!=x362)<<(x363>x364));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = INT64_MIN;
	uint8_t x367 = 5U;
	int64_t x368 = INT64_MIN;

    t91 = ((x365!=x366)<<(x367>x368));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = 521349497313462379LL;
	static volatile uint32_t x370 = 4161U;
	volatile int32_t x371 = INT32_MIN;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -13;

    t92 = ((x369!=x370)<<(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 179018437LLU;
	uint64_t x374 = 1299435762238782815LLU;
	static int32_t x375 = 445655;
	uint16_t x376 = 10U;
	volatile int32_t t93 = -61976;

    t93 = ((x373!=x374)<<(x375>x376));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	int32_t x378 = -420326;
	volatile int32_t x379 = INT32_MIN;
	int64_t x380 = -16007099419375LL;
	static int32_t t94 = 215199;

    t94 = ((x377!=x378)<<(x379>x380));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x381 = 59U;
	static int16_t x383 = INT16_MIN;
	int32_t x384 = -48;
	int32_t t95 = 3084581;

    t95 = ((x381!=x382)<<(x383>x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = -56;
	int8_t x387 = 0;

    t96 = ((x385!=x386)<<(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 1U;
	int32_t x390 = -34060512;
	uint16_t x392 = 2966U;
	static int32_t t97 = -445944;

    t97 = ((x389!=x390)<<(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = INT32_MAX;
	int16_t x396 = -14405;
	volatile int32_t t98 = 31376;

    t98 = ((x393!=x394)<<(x395>x396));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 396U;
	volatile int64_t x398 = -103640568691LL;
	static int32_t x399 = INT32_MIN;
	int32_t t99 = -117274197;

    t99 = ((x397!=x398)<<(x399>x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	uint32_t x402 = 2045U;
	volatile int32_t x403 = INT32_MAX;

    t100 = ((x401!=x402)<<(x403>x404));

    if (t100 != 2) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x406 = INT16_MIN;
	static volatile int32_t t101 = -14;

    t101 = ((x405!=x406)<<(x407>x408));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = 1LL;
	int32_t x410 = -1;
	volatile int32_t t102 = -6337;

    t102 = ((x409!=x410)<<(x411>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -1;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = 0LLU;
	int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 218;

    t103 = ((x413!=x414)<<(x415>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = INT64_MIN;
	volatile int32_t x419 = -1007635;
	static int64_t x420 = INT64_MIN;
	int32_t t104 = -10674411;

    t104 = ((x417!=x418)<<(x419>x420));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = -1;
	volatile uint64_t x422 = 8017LLU;
	volatile int8_t x423 = INT8_MIN;
	int32_t x424 = -1;
	static volatile int32_t t105 = -1643;

    t105 = ((x421!=x422)<<(x423>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MAX;
	int64_t x427 = -1LL;
	static uint16_t x428 = UINT16_MAX;
	int32_t t106 = 4675;

    t106 = ((x425!=x426)<<(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = 3;
	int32_t x430 = 392080716;
	uint16_t x431 = 146U;
	int32_t t107 = -132;

    t107 = ((x429!=x430)<<(x431>x432));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = -3;
	int32_t x434 = INT32_MIN;
	int64_t x435 = 522626709LL;
	int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -5;

    t108 = ((x433!=x434)<<(x435>x436));

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = 209596U;
	int16_t x439 = INT16_MIN;
	int32_t t109 = 89;

    t109 = ((x437!=x438)<<(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x441 = UINT8_MAX;
	static volatile int32_t x442 = INT32_MIN;
	uint8_t x444 = 5U;
	static int32_t t110 = 193596;

    t110 = ((x441!=x442)<<(x443>x444));

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = 4;
	volatile uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	static int32_t x448 = INT32_MAX;
	static volatile int32_t t111 = 95007025;

    t111 = ((x445!=x446)<<(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	volatile int64_t x450 = INT64_MIN;
	int32_t x451 = -7;
	static int32_t x452 = INT32_MAX;
	volatile int32_t t112 = -1;

    t112 = ((x449!=x450)<<(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1LL;
	static uint64_t x454 = 4LLU;
	static uint32_t x455 = 52612753U;
	int8_t x456 = -4;
	int32_t t113 = -506;

    t113 = ((x453!=x454)<<(x455>x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	uint16_t x458 = 133U;
	int32_t x459 = INT32_MAX;
	volatile int32_t t114 = -7064;

    t114 = ((x457!=x458)<<(x459>x460));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	uint8_t x462 = 1U;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 54U;
	int32_t t115 = 1959;

    t115 = ((x461!=x462)<<(x463>x464));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	volatile int64_t x466 = -1LL;
	static int32_t x468 = INT32_MIN;
	int32_t t116 = 3688;

    t116 = ((x465!=x466)<<(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x472 = 111U;
	int32_t t117 = 54826306;

    t117 = ((x469!=x470)<<(x471>x472));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	volatile int32_t x474 = -5;
	int8_t x475 = INT8_MIN;
	static uint16_t x476 = UINT16_MAX;
	static int32_t t118 = -1;

    t118 = ((x473!=x474)<<(x475>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x478 = 2703321344884550825LLU;
	int16_t x479 = INT16_MAX;
	int64_t x480 = 34347572377LL;
	volatile int32_t t119 = 59125;

    t119 = ((x477!=x478)<<(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	volatile int64_t x482 = INT64_MIN;
	volatile int8_t x483 = INT8_MIN;
	volatile int32_t t120 = -511673431;

    t120 = ((x481!=x482)<<(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	static volatile int8_t x486 = -1;
	uint16_t x487 = 8131U;
	static volatile uint16_t x488 = UINT16_MAX;
	static int32_t t121 = 444390;

    t121 = ((x485!=x486)<<(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	static int8_t x490 = -1;
	static volatile int8_t x491 = INT8_MIN;
	uint16_t x492 = UINT16_MAX;

    t122 = ((x489!=x490)<<(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x493 = UINT64_MAX;
	uint8_t x494 = 2U;
	int8_t x495 = -14;
	uint8_t x496 = 32U;
	int32_t t123 = -1327;

    t123 = ((x493!=x494)<<(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x497 = INT16_MAX;
	int16_t x498 = INT16_MAX;
	uint16_t x499 = 401U;
	int32_t t124 = 60658984;

    t124 = ((x497!=x498)<<(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x502 = INT64_MIN;
	int32_t x503 = -1;
	int32_t x504 = -1;

    t125 = ((x501!=x502)<<(x503>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x508 = UINT16_MAX;
	int32_t t126 = 299032;

    t126 = ((x505!=x506)<<(x507>x508));

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	uint64_t x510 = 3LLU;
	uint16_t x511 = 0U;
	static volatile int32_t t127 = -9775589;

    t127 = ((x509!=x510)<<(x511>x512));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = -1;
	int16_t x515 = INT16_MIN;
	int32_t x516 = -604644;

    t128 = ((x513!=x514)<<(x515>x516));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = 23;
	uint16_t x518 = 2961U;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 0U;
	static int32_t t129 = 3;

    t129 = ((x517!=x518)<<(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x522 = -1;
	uint32_t x523 = 37U;
	int64_t x524 = INT64_MAX;
	volatile int32_t t130 = 23597383;

    t130 = ((x521!=x522)<<(x523>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = 11503LL;
	int32_t x526 = INT32_MAX;

    t131 = ((x525!=x526)<<(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 211894;
	static uint64_t x530 = 9660337LLU;
	int64_t x532 = INT64_MIN;

    t132 = ((x529!=x530)<<(x531>x532));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x534 = INT32_MIN;
	uint16_t x535 = 179U;
	uint8_t x536 = UINT8_MAX;
	int32_t t133 = -6;

    t133 = ((x533!=x534)<<(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -6854LL;
	volatile int32_t x538 = -1;
	volatile int8_t x540 = -1;
	static volatile int32_t t134 = -964;

    t134 = ((x537!=x538)<<(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x542 = INT16_MIN;
	int16_t x543 = INT16_MIN;
	uint16_t x544 = 15289U;
	int32_t t135 = 14378;

    t135 = ((x541!=x542)<<(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = INT8_MAX;
	int64_t x547 = 78615LL;
	uint64_t x548 = 68068195961LLU;
	volatile int32_t t136 = 3246189;

    t136 = ((x545!=x546)<<(x547>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	static uint32_t x550 = 3U;
	uint8_t x551 = 3U;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t137 = -1;

    t137 = ((x549!=x550)<<(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 51;
	int32_t x554 = -1;
	int64_t x555 = -1LL;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = -328;

    t138 = ((x553!=x554)<<(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MIN;
	volatile uint8_t x558 = 6U;
	volatile uint16_t x559 = 6265U;
	int32_t x560 = 8559;
	volatile int32_t t139 = -9;

    t139 = ((x557!=x558)<<(x559>x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	uint32_t x562 = UINT32_MAX;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = UINT16_MAX;
	int32_t t140 = -810745;

    t140 = ((x561!=x562)<<(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 1446937988850401LLU;
	int8_t x566 = INT8_MAX;
	static volatile uint64_t x567 = 27391246633762507LLU;
	volatile uint16_t x568 = 4366U;
	static int32_t t141 = 101392840;

    t141 = ((x565!=x566)<<(x567>x568));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x570 = 72020U;
	int8_t x571 = INT8_MIN;
	int8_t x572 = 11;

    t142 = ((x569!=x570)<<(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -10594729;
	int16_t x574 = -5165;
	volatile int16_t x575 = -1;

    t143 = ((x573!=x574)<<(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x578 = 2096982LL;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = INT64_MIN;

    t144 = ((x577!=x578)<<(x579>x580));

    if (t144 != 2) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -736;
	uint64_t x582 = 494032551007515230LLU;
	uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 5U;
	volatile int32_t t145 = -1389631;

    t145 = ((x581!=x582)<<(x583>x584));

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = -14;
	uint8_t x586 = 3U;
	volatile uint8_t x587 = 2U;
	static int32_t t146 = -2566;

    t146 = ((x585!=x586)<<(x587>x588));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x591 = INT16_MAX;
	uint32_t x592 = 1768111U;
	volatile int32_t t147 = -18521;

    t147 = ((x589!=x590)<<(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = -175;
	int64_t x595 = -18121576LL;
	volatile int16_t x596 = -119;
	int32_t t148 = 894;

    t148 = ((x593!=x594)<<(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int32_t x598 = -1;
	uint8_t x599 = 0U;
	int32_t t149 = -178;

    t149 = ((x597!=x598)<<(x599>x600));

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 30803306459LLU;
	int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MIN;
	uint8_t x604 = UINT8_MAX;

    t150 = ((x601!=x602)<<(x603>x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = UINT64_MAX;
	static int64_t x606 = -1LL;
	int16_t x607 = INT16_MIN;
	int32_t t151 = -4170;

    t151 = ((x605!=x606)<<(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x610 = 0;
	static int32_t t152 = 812;

    t152 = ((x609!=x610)<<(x611>x612));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	int32_t x614 = INT32_MIN;
	uint64_t x615 = 76465391022LLU;
	int64_t x616 = 601006072406214863LL;

    t153 = ((x613!=x614)<<(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x617 = 31408325187252LLU;
	int32_t x619 = -370;
	static int32_t t154 = -127795933;

    t154 = ((x617!=x618)<<(x619>x620));

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 1026763672U;
	int32_t t155 = 15419;

    t155 = ((x621!=x622)<<(x623>x624));

    if (t155 != 2) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	volatile uint8_t x626 = 54U;
	int16_t x627 = INT16_MIN;
	volatile uint8_t x628 = 0U;
	int32_t t156 = 0;

    t156 = ((x625!=x626)<<(x627>x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	uint16_t x631 = 22U;
	uint8_t x632 = 1U;
	volatile int32_t t157 = 1965;

    t157 = ((x629!=x630)<<(x631>x632));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x633 = UINT16_MAX;
	uint64_t x634 = 36795886663776704LLU;
	int8_t x635 = 0;
	static int64_t x636 = INT64_MIN;
	int32_t t158 = 37;

    t158 = ((x633!=x634)<<(x635>x636));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	int64_t x638 = 3645LL;
	int64_t x639 = INT64_MIN;
	static volatile int32_t t159 = 0;

    t159 = ((x637!=x638)<<(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MAX;
	static int64_t x642 = 100504041LL;
	int8_t x643 = INT8_MIN;

    t160 = ((x641!=x642)<<(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	static volatile int8_t x646 = -1;
	int8_t x647 = -40;
	volatile int32_t t161 = -231;

    t161 = ((x645!=x646)<<(x647>x648));

    if (t161 != 2) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x649 = INT64_MAX;
	int64_t x650 = INT64_MIN;
	int16_t x652 = INT16_MAX;
	int32_t t162 = -1;

    t162 = ((x649!=x650)<<(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 29155LLU;
	static int32_t x655 = 30342;
	int32_t x656 = -1;
	static volatile int32_t t163 = -18928;

    t163 = ((x653!=x654)<<(x655>x656));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	static volatile int32_t x658 = -97802837;
	volatile int64_t x659 = INT64_MIN;
	uint32_t x660 = 433527U;

    t164 = ((x657!=x658)<<(x659>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = INT16_MIN;
	int64_t x663 = 146311LL;
	static int64_t x664 = INT64_MIN;
	volatile int32_t t165 = -89;

    t165 = ((x661!=x662)<<(x663>x664));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	int32_t x666 = INT32_MIN;
	uint64_t x668 = 2511074135042232758LLU;
	int32_t t166 = 1;

    t166 = ((x665!=x666)<<(x667>x668));

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = 1;
	static volatile int64_t x671 = 28028LL;
	static int64_t x672 = 1159LL;
	volatile int32_t t167 = -1;

    t167 = ((x669!=x670)<<(x671>x672));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	static uint64_t x674 = UINT64_MAX;
	int16_t x675 = INT16_MIN;
	static int32_t x676 = -1;
	volatile int32_t t168 = -404582;

    t168 = ((x673!=x674)<<(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MIN;
	int64_t x678 = INT64_MIN;
	int32_t x679 = 394350461;
	volatile int32_t t169 = 2;

    t169 = ((x677!=x678)<<(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x681 = INT64_MIN;
	volatile int16_t x683 = INT16_MAX;
	volatile uint64_t x684 = 394179LLU;
	int32_t t170 = 164300933;

    t170 = ((x681!=x682)<<(x683>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -1LL;
	int16_t x687 = INT16_MAX;
	uint16_t x688 = 4U;

    t171 = ((x685!=x686)<<(x687>x688));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 3961319310856738629LL;
	static int64_t x690 = -1LL;
	uint8_t x692 = 9U;
	volatile int32_t t172 = -3;

    t172 = ((x689!=x690)<<(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x696 = 63567026878480341LL;
	volatile int32_t t173 = 1;

    t173 = ((x693!=x694)<<(x695>x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	int32_t x699 = -516534795;
	volatile uint16_t x700 = UINT16_MAX;
	static volatile int32_t t174 = 4799577;

    t174 = ((x697!=x698)<<(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = 29;
	int8_t x702 = 4;
	int32_t x703 = INT32_MIN;
	uint32_t x704 = UINT32_MAX;
	int32_t t175 = -113764313;

    t175 = ((x701!=x702)<<(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x705 = UINT8_MAX;
	int8_t x706 = 13;
	int16_t x707 = 0;
	int16_t x708 = -1;
	volatile int32_t t176 = 10532698;

    t176 = ((x705!=x706)<<(x707>x708));

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x710 = -1;
	int32_t x711 = INT32_MAX;

    t177 = ((x709!=x710)<<(x711>x712));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = -1;
	volatile int64_t x715 = INT64_MIN;
	int32_t t178 = 68506630;

    t178 = ((x713!=x714)<<(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = -1;
	int32_t x719 = -1;
	int8_t x720 = -1;
	int32_t t179 = -1020;

    t179 = ((x717!=x718)<<(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = -1;
	int32_t x722 = -1;
	volatile uint64_t x723 = 617545LLU;
	uint64_t x724 = 44LLU;
	int32_t t180 = 0;

    t180 = ((x721!=x722)<<(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int64_t x726 = 334631075173125909LL;
	uint64_t x727 = 3243571322LLU;
	volatile int16_t x728 = INT16_MIN;
	int32_t t181 = 97802167;

    t181 = ((x725!=x726)<<(x727>x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t t182 = -5570;

    t182 = ((x729!=x730)<<(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x734 = INT64_MIN;
	volatile int8_t x735 = INT8_MIN;
	int64_t x736 = INT64_MIN;
	static int32_t t183 = 52586;

    t183 = ((x733!=x734)<<(x735>x736));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = 223791;
	static volatile int16_t x738 = 5631;
	int32_t x739 = -11;
	static uint32_t x740 = 968744U;

    t184 = ((x737!=x738)<<(x739>x740));

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	int32_t x742 = -534347;
	uint8_t x744 = 38U;
	int32_t t185 = 218383;

    t185 = ((x741!=x742)<<(x743>x744));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	uint8_t x746 = 1U;
	int16_t x748 = 1646;
	volatile int32_t t186 = 721;

    t186 = ((x745!=x746)<<(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	uint32_t x750 = 3U;
	int64_t x751 = -17516111385202LL;
	volatile int16_t x752 = -13872;
	static volatile int32_t t187 = 0;

    t187 = ((x749!=x750)<<(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	uint32_t x755 = UINT32_MAX;
	int16_t x756 = -431;

    t188 = ((x753!=x754)<<(x755>x756));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 23751LLU;
	static volatile uint32_t x759 = UINT32_MAX;
	static int8_t x760 = -1;
	int32_t t189 = -34924;

    t189 = ((x757!=x758)<<(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 105968366U;
	uint32_t x762 = 0U;
	int16_t x763 = INT16_MIN;

    t190 = ((x761!=x762)<<(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x765 = 907705579LLU;
	int64_t x767 = -2028069LL;
	int8_t x768 = 1;

    t191 = ((x765!=x766)<<(x767>x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int16_t x770 = INT16_MIN;
	int16_t x771 = INT16_MIN;
	int32_t t192 = 49670089;

    t192 = ((x769!=x770)<<(x771>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 42U;
	static uint8_t x776 = UINT8_MAX;

    t193 = ((x773!=x774)<<(x775>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	volatile uint8_t x778 = 4U;
	int64_t x779 = -315645542450LL;
	uint8_t x780 = 29U;
	int32_t t194 = 154989054;

    t194 = ((x777!=x778)<<(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint16_t x782 = UINT16_MAX;
	volatile int16_t x783 = -2;
	int16_t x784 = 1344;
	int32_t t195 = -5765;

    t195 = ((x781!=x782)<<(x783>x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	int8_t x786 = INT8_MAX;
	uint64_t x787 = UINT64_MAX;
	volatile uint64_t x788 = UINT64_MAX;
	int32_t t196 = 2602;

    t196 = ((x785!=x786)<<(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -92;
	int16_t x790 = -1;
	int16_t x791 = 31;
	uint32_t x792 = 45U;
	volatile int32_t t197 = -6774;

    t197 = ((x789!=x790)<<(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	uint8_t x794 = UINT8_MAX;
	volatile uint16_t x796 = 15U;
	int32_t t198 = 159;

    t198 = ((x793!=x794)<<(x795>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x798 = -1;
	int16_t x799 = INT16_MIN;
	volatile int32_t t199 = 2342;

    t199 = ((x797!=x798)<<(x799>x800));

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

