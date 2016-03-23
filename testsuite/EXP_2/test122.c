
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

volatile int64_t x1 = -1LL;
static int64_t x11 = INT64_MIN;
volatile int32_t t2 = -7;
static volatile uint64_t x13 = UINT64_MAX;
int32_t x14 = -1529310;
static int16_t x18 = INT16_MAX;
static int8_t x19 = INT8_MAX;
volatile int32_t t4 = 44;
int64_t x22 = -6819LL;
static int64_t x26 = INT64_MAX;
int8_t x28 = 1;
volatile uint64_t x33 = 6LLU;
int8_t x37 = 12;
static volatile int32_t t9 = -225013;
volatile uint64_t x42 = UINT64_MAX;
uint64_t x46 = 11934LLU;
uint32_t x52 = UINT32_MAX;
static volatile int64_t x60 = INT64_MIN;
int32_t t16 = 812;
static volatile int32_t t19 = -13797058;
int32_t t21 = -1;
uint32_t x102 = 28U;
static uint16_t x104 = UINT16_MAX;
static uint32_t x105 = 116170155U;
volatile int32_t t24 = 10;
uint32_t x118 = 162065U;
int32_t t26 = -3;
int16_t x126 = INT16_MIN;
volatile int32_t x127 = 1752;
uint64_t x130 = 5292968463198LLU;
int16_t x131 = 8;
volatile int8_t x137 = INT8_MIN;
static volatile int8_t x142 = -1;
uint16_t x145 = UINT16_MAX;
int8_t x151 = -2;
uint8_t x152 = 24U;
int32_t x154 = -1;
static volatile int64_t x156 = 15758647373LL;
static int32_t t35 = 5545;
int32_t x158 = INT32_MIN;
uint64_t x159 = UINT64_MAX;
static int16_t x161 = INT16_MAX;
uint8_t x170 = 93U;
int64_t x176 = INT64_MIN;
uint32_t x178 = UINT32_MAX;
int32_t t45 = 0;
static int64_t x202 = INT64_MAX;
volatile int32_t t48 = -218937;
int8_t x209 = INT8_MAX;
int32_t t49 = 431425;
volatile int32_t x215 = INT32_MIN;
int32_t t50 = -76275110;
int32_t x218 = -78;
int64_t x222 = INT64_MIN;
int32_t x232 = -1;
static volatile uint16_t x233 = 8U;
int32_t t55 = 342239829;
static volatile uint8_t x237 = 25U;
volatile int64_t x244 = INT64_MIN;
static int32_t t57 = -1;
int16_t x251 = INT16_MIN;
static volatile int32_t t62 = -804;
volatile int32_t x268 = INT32_MIN;
uint16_t x276 = UINT16_MAX;
volatile int32_t t64 = -244899057;
int64_t x278 = -1LL;
int8_t x280 = -1;
int8_t x281 = INT8_MAX;
int32_t x284 = INT32_MIN;
volatile int32_t t66 = 27;
uint64_t x289 = 13030154996LLU;
uint32_t x292 = UINT32_MAX;
static int16_t x295 = INT16_MIN;
volatile uint16_t x296 = 0U;
int64_t x304 = -61106266125158203LL;
static int16_t x305 = INT16_MIN;
int64_t x312 = 3803928LL;
int32_t t73 = 964290;
static int32_t x323 = INT32_MIN;
int32_t t76 = -1036;
int16_t x334 = -1;
int64_t x339 = -1LL;
int32_t t81 = -267;
static uint32_t x347 = 146574436U;
volatile int64_t x352 = 3LL;
int8_t x357 = INT8_MIN;
int64_t x365 = -11380826279637LL;
static int8_t x368 = -28;
static int16_t x369 = INT16_MIN;
int16_t x370 = INT16_MIN;
static int16_t x371 = INT16_MIN;
volatile int32_t t88 = 144638299;
static int64_t x379 = INT64_MAX;
volatile uint64_t x386 = 3647254676218003LLU;
int8_t x387 = -60;
volatile int16_t x388 = INT16_MAX;
volatile int32_t t93 = 304;
uint8_t x404 = UINT8_MAX;
int32_t x410 = INT32_MAX;
uint64_t x411 = 0LLU;
static volatile int32_t t97 = 15761386;
uint64_t x422 = UINT64_MAX;
int32_t t100 = 0;
int32_t x428 = 57846;
int64_t x430 = INT64_MAX;
uint32_t x439 = 25526189U;
uint32_t x441 = UINT32_MAX;
static int32_t x444 = -1;
static int32_t t106 = -40;
static int32_t t108 = 273572;
uint32_t x463 = 185U;
static volatile int32_t t110 = 465;
int16_t x466 = -1;
int32_t x469 = -26185;
volatile int8_t x474 = INT8_MIN;
volatile int16_t x476 = INT16_MIN;
static volatile int32_t t113 = -239940;
int16_t x477 = 3;
volatile uint8_t x479 = 31U;
int32_t x481 = INT32_MIN;
volatile int32_t x487 = INT32_MAX;
static volatile int32_t t116 = 10794;
static int16_t x494 = INT16_MIN;
int32_t x495 = -1;
uint64_t x497 = 2492675LLU;
int32_t x501 = -1;
static volatile int16_t x502 = 13324;
int16_t x503 = INT16_MIN;
int32_t x511 = -718;
uint8_t x519 = UINT8_MAX;
int16_t x521 = INT16_MIN;
uint16_t x523 = 98U;
uint32_t x545 = 1451909U;
volatile int32_t t130 = 36380;
int32_t t131 = 801730178;
int64_t x559 = -1LL;
static volatile int32_t t132 = 5737287;
static volatile uint16_t x567 = UINT16_MAX;
static int32_t x571 = 995;
uint16_t x574 = 23U;
int8_t x576 = INT8_MAX;
static uint8_t x583 = 0U;
int32_t t138 = -21678;
uint32_t x588 = 87U;
int32_t x592 = INT32_MIN;
int8_t x597 = -1;
int32_t x599 = INT32_MAX;
int16_t x607 = INT16_MIN;
volatile int64_t x610 = 41LL;
static int32_t x612 = INT32_MIN;
int32_t t145 = 2950;
int32_t t146 = -2451313;
int64_t x630 = INT64_MIN;
static int64_t x636 = INT64_MIN;
int8_t x639 = INT8_MIN;
int64_t x641 = INT64_MIN;
int8_t x644 = 4;
static volatile int32_t t150 = -229;
int16_t x645 = 482;
volatile int32_t t151 = 11216234;
static uint32_t x651 = 11U;
volatile int8_t x668 = 0;
uint16_t x690 = 91U;
int32_t t160 = -12563569;
volatile int16_t x694 = INT16_MAX;
volatile int64_t x695 = INT64_MIN;
int64_t x698 = -456472568935037LL;
volatile int16_t x699 = -1;
static int8_t x703 = INT8_MAX;
int16_t x706 = 54;
uint64_t x723 = UINT64_MAX;
static int64_t x728 = INT64_MIN;
int16_t x733 = INT16_MIN;
static volatile int8_t x738 = INT8_MAX;
int64_t x745 = -1LL;
static int8_t x747 = INT8_MIN;
static int32_t x751 = INT32_MIN;
int64_t x752 = INT64_MIN;
volatile int32_t t173 = 35324;
static uint32_t x754 = 25579099U;
uint64_t x757 = UINT64_MAX;
uint32_t x760 = 137144552U;
volatile int32_t t175 = -84;
int16_t x766 = INT16_MIN;
static int32_t t176 = 56686091;
volatile int32_t t179 = -312451;
static int8_t x781 = -49;
volatile int16_t x783 = -1;
static int8_t x786 = -1;
volatile int32_t t181 = -729674239;
int64_t x792 = INT64_MAX;
uint8_t x794 = UINT8_MAX;
volatile int32_t t184 = -1;
int64_t x812 = 3128LL;
int64_t x816 = -1008LL;
int8_t x827 = -1;
int32_t x830 = -621466;
int16_t x835 = INT16_MIN;
uint8_t x837 = 16U;
int32_t x840 = INT32_MAX;
static int32_t t193 = 28479112;
int32_t x845 = -1095;
uint8_t x846 = 66U;
uint32_t x852 = 7U;
static int8_t x853 = INT8_MIN;
int64_t x859 = 1LL;
volatile int16_t x860 = 0;
uint64_t x861 = 2139651027LLU;


void f0(void) {
    	static uint32_t x2 = 0U;
	uint16_t x3 = 23U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -404;

    t0 = ((x1>(x2+x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	int64_t x8 = -1LL;
	static volatile int32_t t1 = -2671;

    t1 = ((x5>(x6+x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = UINT32_MAX;
	static uint64_t x12 = 909406007187LLU;

    t2 = ((x9>(x10+x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x15 = INT8_MAX;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -3;

    t3 = ((x13>(x14+x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -13757490364193LL;
	uint16_t x20 = UINT16_MAX;

    t4 = ((x17>(x18+x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 41494854U;
	int8_t x23 = 0;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 1;

    t5 = ((x21>(x22+x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	static volatile int16_t x27 = -1;
	volatile int32_t t6 = -3293771;

    t6 = ((x25>(x26+x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	static volatile int32_t x31 = INT32_MAX;
	static volatile int8_t x32 = 1;
	int32_t t7 = 241;

    t7 = ((x29>(x30+x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MAX;
	static int8_t x35 = INT8_MIN;
	int64_t x36 = INT64_MAX;
	int32_t t8 = 0;

    t8 = ((x33>(x34+x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	int32_t x39 = -1;
	int32_t x40 = INT32_MIN;

    t9 = ((x37>(x38+x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x43 = -1;
	int16_t x44 = -1;
	volatile int32_t t10 = 0;

    t10 = ((x41>(x42+x43))<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 111053811367605823LLU;
	static int16_t x47 = -1;
	uint64_t x48 = 1197244777428906005LLU;
	static int32_t t11 = 187;

    t11 = ((x45>(x46+x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x50 = 555508LLU;
	int8_t x51 = 0;
	int32_t t12 = 425;

    t12 = ((x49>(x50+x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = UINT8_MAX;
	volatile int8_t x54 = -38;
	int8_t x55 = -3;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -1396;

    t13 = ((x53>(x54+x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 17U;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = 5073LL;
	int32_t t14 = -3903;

    t14 = ((x57>(x58+x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	volatile int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = UINT64_MAX;
	volatile uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 0;

    t15 = ((x61>(x62+x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	uint64_t x74 = 17579456LLU;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;

    t16 = ((x73>(x74+x75))<=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = -8080;
	int32_t x83 = -53575;
	int64_t x84 = -52729360073509278LL;
	int32_t t17 = 201687;

    t17 = ((x81>(x82+x83))<=x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x85 = -1;
	int64_t x86 = -32LL;
	int8_t x87 = 3;
	volatile uint8_t x88 = 0U;
	volatile int32_t t18 = -157;

    t18 = ((x85>(x86+x87))<=x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x89 = -394;
	int16_t x90 = -7947;
	int64_t x91 = 2930549916629LL;
	uint32_t x92 = UINT32_MAX;

    t19 = ((x89>(x90+x91))<=x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x93 = 13;
	uint32_t x94 = 3U;
	volatile int64_t x95 = -1929229LL;
	int64_t x96 = -1LL;
	volatile int32_t t20 = 89239;

    t20 = ((x93>(x94+x95))<=x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 7U;
	int8_t x98 = INT8_MIN;
	static int16_t x99 = INT16_MAX;
	static int8_t x100 = INT8_MAX;

    t21 = ((x97>(x98+x99))<=x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = 72U;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t t22 = -1;

    t22 = ((x101>(x102+x103))<=x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x106 = -1;
	int8_t x107 = -48;
	int64_t x108 = INT64_MIN;
	volatile int32_t t23 = -13;

    t23 = ((x105>(x106+x107))<=x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = INT16_MAX;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = -1LL;
	static int8_t x112 = INT8_MIN;

    t24 = ((x109>(x110+x111))<=x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = 3;
	static int32_t x114 = INT32_MIN;
	int16_t x115 = 0;
	static int16_t x116 = -1;
	static volatile int32_t t25 = -4;

    t25 = ((x113>(x114+x115))<=x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x117 = 2U;
	int32_t x119 = 3262020;
	int16_t x120 = -40;

    t26 = ((x117>(x118+x119))<=x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = INT8_MIN;
	int16_t x122 = -18;
	uint32_t x123 = 357U;
	int64_t x124 = INT64_MAX;
	int32_t t27 = 1;

    t27 = ((x121>(x122+x123))<=x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = 7543322LL;
	volatile int32_t x128 = -1;
	int32_t t28 = -1;

    t28 = ((x125>(x126+x127))<=x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = INT32_MIN;
	uint32_t x132 = 919146304U;
	int32_t t29 = -2;

    t29 = ((x129>(x130+x131))<=x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x133 = 524034329189LLU;
	int64_t x134 = 2LL;
	uint16_t x135 = 8U;
	int8_t x136 = INT8_MIN;
	volatile int32_t t30 = 1;

    t30 = ((x133>(x134+x135))<=x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x138 = INT16_MAX;
	uint16_t x139 = UINT16_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t31 = -24096;

    t31 = ((x137>(x138+x139))<=x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = INT8_MAX;
	static uint8_t x143 = UINT8_MAX;
	int32_t x144 = INT32_MIN;
	volatile int32_t t32 = 857245;

    t32 = ((x141>(x142+x143))<=x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t33 = 170;

    t33 = ((x145>(x146+x147))<=x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = INT64_MIN;
	uint16_t x150 = 18U;
	int32_t t34 = -11495;

    t34 = ((x149>(x150+x151))<=x152);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	int16_t x155 = -1;

    t35 = ((x153>(x154+x155))<=x156);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = INT64_MAX;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t36 = -262914;

    t36 = ((x157>(x158+x159))<=x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x162 = -1;
	static int32_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	int32_t t37 = -1;

    t37 = ((x161>(x162+x163))<=x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x165 = INT32_MAX;
	int8_t x166 = -1;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 640U;
	int32_t t38 = -5478;

    t38 = ((x165>(x166+x167))<=x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = INT8_MIN;
	volatile uint64_t x171 = 128091820323512LLU;
	int64_t x172 = INT64_MAX;
	static int32_t t39 = -24972950;

    t39 = ((x169>(x170+x171))<=x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = -15;
	volatile uint64_t x174 = UINT64_MAX;
	int64_t x175 = INT64_MAX;
	volatile int32_t t40 = 125480;

    t40 = ((x173>(x174+x175))<=x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x177 = 1481262063U;
	static int16_t x179 = 28;
	int32_t x180 = 1;
	volatile int32_t t41 = 106856997;

    t41 = ((x177>(x178+x179))<=x180);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x181 = 0;
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = -1;
	int64_t x184 = INT64_MIN;
	int32_t t42 = -852949;

    t42 = ((x181>(x182+x183))<=x184);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x185 = -1LL;
	uint16_t x186 = 20U;
	uint8_t x187 = 2U;
	int16_t x188 = INT16_MIN;
	static int32_t t43 = -1494037;

    t43 = ((x185>(x186+x187))<=x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = INT64_MAX;
	volatile int32_t t44 = -468;

    t44 = ((x189>(x190+x191))<=x192);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 878015306U;
	uint8_t x194 = 0U;
	volatile uint64_t x195 = UINT64_MAX;
	int8_t x196 = INT8_MIN;

    t45 = ((x193>(x194+x195))<=x196);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x197 = 1U;
	volatile uint8_t x198 = 6U;
	static int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	volatile int32_t t46 = 410089293;

    t46 = ((x197>(x198+x199))<=x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -33;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	int32_t t47 = -24;

    t47 = ((x201>(x202+x203))<=x204);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = -40;
	int32_t x206 = -1;
	static int32_t x207 = 1440;
	static uint32_t x208 = 106951095U;

    t48 = ((x205>(x206+x207))<=x208);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x210 = 5U;
	uint64_t x211 = 90289LLU;
	static volatile uint64_t x212 = 146091100LLU;

    t49 = ((x209>(x210+x211))<=x212);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x213 = 2U;
	uint64_t x214 = 5132305493196LLU;
	static int64_t x216 = INT64_MIN;

    t50 = ((x213>(x214+x215))<=x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x217 = 59937032U;
	volatile int64_t x219 = -2615LL;
	int8_t x220 = -1;
	static int32_t t51 = -119452043;

    t51 = ((x217>(x218+x219))<=x220);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x221 = 115986U;
	static uint32_t x223 = 32018225U;
	int32_t x224 = INT32_MIN;
	volatile int32_t t52 = 2384155;

    t52 = ((x221>(x222+x223))<=x224);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t53 = 7;

    t53 = ((x225>(x226+x227))<=x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = 902649;
	volatile int32_t t54 = 911636;

    t54 = ((x229>(x230+x231))<=x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x234 = 521072728LL;
	int64_t x235 = 2206838304287091LL;
	static volatile int8_t x236 = -1;

    t55 = ((x233>(x234+x235))<=x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x238 = 20U;
	volatile int32_t x239 = -12125701;
	int64_t x240 = -1LL;
	int32_t t56 = 0;

    t56 = ((x237>(x238+x239))<=x240);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MAX;
	int8_t x243 = -9;

    t57 = ((x241>(x242+x243))<=x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x245 = INT8_MIN;
	int16_t x246 = -9528;
	uint32_t x247 = 14880U;
	volatile uint64_t x248 = 15003833LLU;
	volatile int32_t t58 = 87447770;

    t58 = ((x245>(x246+x247))<=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = UINT64_MAX;
	int8_t x250 = INT8_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t59 = -404;

    t59 = ((x249>(x250+x251))<=x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MIN;
	uint64_t x254 = 16809471189LLU;
	volatile uint16_t x255 = 0U;
	uint32_t x256 = 2U;
	int32_t t60 = -1;

    t60 = ((x253>(x254+x255))<=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MAX;
	int64_t x259 = -1LL;
	uint32_t x260 = 7314U;
	volatile int32_t t61 = -117826078;

    t61 = ((x257>(x258+x259))<=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = 6024873193386005LL;
	int8_t x262 = -30;
	uint16_t x263 = 44U;
	int8_t x264 = -47;

    t62 = ((x261>(x262+x263))<=x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MAX;
	static int8_t x266 = INT8_MIN;
	int32_t x267 = 267;
	static volatile int32_t t63 = 67072794;

    t63 = ((x265>(x266+x267))<=x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	uint16_t x274 = 62U;
	uint64_t x275 = 118881965003LLU;

    t64 = ((x273>(x274+x275))<=x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x277 = -1;
	int16_t x279 = -1;
	int32_t t65 = -64504;

    t65 = ((x277>(x278+x279))<=x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x282 = INT8_MIN;
	int16_t x283 = -1;

    t66 = ((x281>(x282+x283))<=x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x285 = 1036U;
	int64_t x286 = 520007769404571314LL;
	int32_t x287 = INT32_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	int32_t t67 = 96222;

    t67 = ((x285>(x286+x287))<=x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MAX;
	volatile int32_t t68 = 41542497;

    t68 = ((x289>(x290+x291))<=x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x293 = -332069918088995958LL;
	uint32_t x294 = UINT32_MAX;
	volatile int32_t t69 = -18536;

    t69 = ((x293>(x294+x295))<=x296);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = 29;
	uint64_t x298 = 66654717670799468LLU;
	int8_t x299 = INT8_MAX;
	int32_t x300 = 142865314;
	volatile int32_t t70 = -5163;

    t70 = ((x297>(x298+x299))<=x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x301 = 6312U;
	uint32_t x302 = 5115U;
	static uint32_t x303 = 328U;
	int32_t t71 = 0;

    t71 = ((x301>(x302+x303))<=x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x306 = 2U;
	int64_t x307 = -1LL;
	static uint32_t x308 = 15U;
	volatile int32_t t72 = -50;

    t72 = ((x305>(x306+x307))<=x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	int16_t x311 = -1;

    t73 = ((x309>(x310+x311))<=x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x313 = INT32_MIN;
	volatile int16_t x314 = -3;
	static int16_t x315 = 2453;
	volatile uint32_t x316 = UINT32_MAX;
	int32_t t74 = 57323119;

    t74 = ((x313>(x314+x315))<=x316);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x317 = 39822LLU;
	static uint32_t x318 = 58234296U;
	volatile int16_t x319 = INT16_MIN;
	int16_t x320 = 0;
	int32_t t75 = -689902;

    t75 = ((x317>(x318+x319))<=x320);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = 5075;
	static uint32_t x322 = 300543U;
	volatile uint32_t x324 = 104U;

    t76 = ((x321>(x322+x323))<=x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MAX;
	volatile int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	int32_t t77 = 1;

    t77 = ((x325>(x326+x327))<=x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x329 = INT32_MAX;
	volatile uint16_t x330 = 1U;
	uint16_t x331 = 14U;
	uint8_t x332 = 5U;
	int32_t t78 = -1;

    t78 = ((x329>(x330+x331))<=x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	int32_t t79 = -394;

    t79 = ((x333>(x334+x335))<=x336);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	int64_t x340 = INT64_MAX;
	static int32_t t80 = 1195;

    t80 = ((x337>(x338+x339))<=x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = 25062640U;
	uint8_t x342 = UINT8_MAX;
	volatile uint16_t x343 = UINT16_MAX;
	static int16_t x344 = INT16_MAX;

    t81 = ((x341>(x342+x343))<=x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x345 = 1171U;
	int64_t x346 = -2822593293LL;
	static int64_t x348 = INT64_MAX;
	volatile int32_t t82 = -487596815;

    t82 = ((x345>(x346+x347))<=x348);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x349 = UINT8_MAX;
	static int8_t x350 = -1;
	volatile int64_t x351 = INT64_MAX;
	volatile int32_t t83 = -729;

    t83 = ((x349>(x350+x351))<=x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x353 = 20239678470452606LLU;
	int16_t x354 = -1;
	uint16_t x355 = UINT16_MAX;
	volatile int8_t x356 = -1;
	volatile int32_t t84 = -33;

    t84 = ((x353>(x354+x355))<=x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x358 = 7U;
	volatile int64_t x359 = INT64_MIN;
	int16_t x360 = 50;
	int32_t t85 = 0;

    t85 = ((x357>(x358+x359))<=x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	int8_t x362 = -13;
	uint16_t x363 = 3U;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t86 = -35075;

    t86 = ((x361>(x362+x363))<=x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x366 = -29;
	uint16_t x367 = 20U;
	volatile int32_t t87 = 22714;

    t87 = ((x365>(x366+x367))<=x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x372 = INT64_MIN;

    t88 = ((x369>(x370+x371))<=x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = -1;
	int8_t x374 = -2;
	volatile uint8_t x375 = 124U;
	uint16_t x376 = UINT16_MAX;
	static int32_t t89 = -14720;

    t89 = ((x373>(x374+x375))<=x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x377 = 62LL;
	volatile uint64_t x378 = 229242975394597LLU;
	int8_t x380 = INT8_MIN;
	static int32_t t90 = -3945;

    t90 = ((x377>(x378+x379))<=x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x381 = 7U;
	static volatile uint8_t x382 = 12U;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = 10U;
	volatile int32_t t91 = 4861457;

    t91 = ((x381>(x382+x383))<=x384);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MIN;
	volatile int32_t t92 = 914;

    t92 = ((x385>(x386+x387))<=x388);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x393 = 1159U;
	int16_t x394 = -1;
	volatile int8_t x395 = INT8_MAX;
	static int32_t x396 = INT32_MAX;

    t93 = ((x393>(x394+x395))<=x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x398 = UINT16_MAX;
	int8_t x399 = -1;
	static int64_t x400 = 65365112LL;
	int32_t t94 = 257722;

    t94 = ((x397>(x398+x399))<=x400);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x401 = -2;
	int8_t x402 = -1;
	volatile uint16_t x403 = UINT16_MAX;
	int32_t t95 = -85081;

    t95 = ((x401>(x402+x403))<=x404);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x405 = UINT8_MAX;
	uint8_t x406 = 18U;
	int8_t x407 = -1;
	int8_t x408 = INT8_MIN;
	volatile int32_t t96 = 20990009;

    t96 = ((x405>(x406+x407))<=x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x409 = -1;
	static int16_t x412 = INT16_MIN;

    t97 = ((x409>(x410+x411))<=x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x413 = INT16_MAX;
	int32_t x414 = INT32_MIN;
	volatile uint16_t x415 = 137U;
	uint32_t x416 = 16483188U;
	static volatile int32_t t98 = -464253780;

    t98 = ((x413>(x414+x415))<=x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x417 = UINT32_MAX;
	volatile int16_t x418 = INT16_MAX;
	int32_t x419 = -1;
	volatile int64_t x420 = -1LL;
	volatile int32_t t99 = 466;

    t99 = ((x417>(x418+x419))<=x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x421 = -1;
	int8_t x423 = INT8_MAX;
	int32_t x424 = 0;

    t100 = ((x421>(x422+x423))<=x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x425 = 14U;
	int16_t x426 = INT16_MAX;
	static int64_t x427 = 15302777824405096LL;
	int32_t t101 = -1826;

    t101 = ((x425>(x426+x427))<=x428);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = -1;
	int32_t x431 = INT32_MIN;
	static int64_t x432 = -37126528LL;
	int32_t t102 = -1;

    t102 = ((x429>(x430+x431))<=x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x433 = 117685;
	int64_t x434 = -1LL;
	uint64_t x435 = 87816823LLU;
	uint32_t x436 = 12U;
	int32_t t103 = 11547;

    t103 = ((x433>(x434+x435))<=x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x437 = 0;
	static uint64_t x438 = UINT64_MAX;
	int16_t x440 = -1;
	static int32_t t104 = -1565015;

    t104 = ((x437>(x438+x439))<=x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x442 = 450806486;
	int32_t x443 = 1258203;
	static int32_t t105 = 1;

    t105 = ((x441>(x442+x443))<=x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = 16703068121509646LL;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MIN;
	static uint16_t x448 = UINT16_MAX;

    t106 = ((x445>(x446+x447))<=x448);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = -1;
	uint32_t x450 = UINT32_MAX;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 50U;
	int32_t t107 = -1922731;

    t107 = ((x449>(x450+x451))<=x452);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x453 = UINT16_MAX;
	int32_t x454 = -1;
	int64_t x455 = -1LL;
	static uint64_t x456 = UINT64_MAX;

    t108 = ((x453>(x454+x455))<=x456);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x457 = UINT32_MAX;
	volatile uint16_t x458 = 4U;
	int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	int32_t t109 = -18423239;

    t109 = ((x457>(x458+x459))<=x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x461 = 1710716248432LLU;
	int8_t x462 = 6;
	int64_t x464 = INT64_MIN;

    t110 = ((x461>(x462+x463))<=x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x467 = -1;
	uint16_t x468 = 2U;
	volatile int32_t t111 = -3254;

    t111 = ((x465>(x466+x467))<=x468);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x470 = 2713U;
	int8_t x471 = 7;
	static uint64_t x472 = 531209019117831LLU;
	volatile int32_t t112 = -3522;

    t112 = ((x469>(x470+x471))<=x472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = INT32_MAX;
	uint64_t x475 = 17LLU;

    t113 = ((x473>(x474+x475))<=x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x478 = -1;
	static volatile int16_t x480 = 41;
	volatile int32_t t114 = 173841937;

    t114 = ((x477>(x478+x479))<=x480);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;
	uint8_t x484 = 9U;
	volatile int32_t t115 = 6;

    t115 = ((x481>(x482+x483))<=x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x485 = INT16_MAX;
	static volatile int32_t x486 = INT32_MIN;
	uint8_t x488 = 64U;

    t116 = ((x485>(x486+x487))<=x488);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x493 = 246861;
	volatile int8_t x496 = INT8_MAX;
	int32_t t117 = 1639;

    t117 = ((x493>(x494+x495))<=x496);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x498 = INT64_MIN;
	int16_t x499 = INT16_MAX;
	volatile int8_t x500 = INT8_MAX;
	static int32_t t118 = 1226;

    t118 = ((x497>(x498+x499))<=x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x504 = INT16_MIN;
	int32_t t119 = -84;

    t119 = ((x501>(x502+x503))<=x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x505 = -1;
	int32_t x506 = -1;
	volatile int8_t x507 = INT8_MIN;
	int8_t x508 = -6;
	static volatile int32_t t120 = -68563;

    t120 = ((x505>(x506+x507))<=x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x509 = INT64_MIN;
	static int16_t x510 = INT16_MAX;
	static int64_t x512 = INT64_MAX;
	int32_t t121 = 1;

    t121 = ((x509>(x510+x511))<=x512);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = -1;
	uint64_t x514 = 913630096089LLU;
	uint8_t x515 = UINT8_MAX;
	static int8_t x516 = INT8_MAX;
	volatile int32_t t122 = 20427556;

    t122 = ((x513>(x514+x515))<=x516);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x517 = INT16_MIN;
	int16_t x518 = -1001;
	uint64_t x520 = 49742352LLU;
	volatile int32_t t123 = 86435028;

    t123 = ((x517>(x518+x519))<=x520);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x522 = UINT8_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t124 = -55247;

    t124 = ((x521>(x522+x523))<=x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MAX;
	int8_t x526 = INT8_MIN;
	static int8_t x527 = -1;
	uint16_t x528 = 6U;
	volatile int32_t t125 = 1607;

    t125 = ((x525>(x526+x527))<=x528);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = INT16_MAX;
	static volatile int32_t x531 = 975689414;
	int64_t x532 = -408LL;
	volatile int32_t t126 = 15600585;

    t126 = ((x529>(x530+x531))<=x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x533 = UINT8_MAX;
	int32_t x534 = -1;
	int64_t x535 = 24255719372LL;
	uint64_t x536 = 1886710LLU;
	volatile int32_t t127 = -3;

    t127 = ((x533>(x534+x535))<=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = 14323;
	static int32_t x542 = -1;
	volatile int16_t x543 = INT16_MIN;
	int32_t x544 = 175045;
	int32_t t128 = 166;

    t128 = ((x541>(x542+x543))<=x544);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x546 = -2;
	static uint64_t x547 = 62127067965LLU;
	volatile uint8_t x548 = 23U;
	volatile int32_t t129 = 243;

    t129 = ((x545>(x546+x547))<=x548);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x549 = 7;
	volatile int32_t x550 = 3083;
	uint8_t x551 = UINT8_MAX;
	static uint16_t x552 = 17U;

    t130 = ((x549>(x550+x551))<=x552);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x553 = 1LL;
	volatile int32_t x554 = -5345742;
	int16_t x555 = INT16_MIN;
	uint16_t x556 = 3U;

    t131 = ((x553>(x554+x555))<=x556);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x557 = 71233436225612LLU;
	int16_t x558 = -1;
	static int8_t x560 = INT8_MIN;

    t132 = ((x557>(x558+x559))<=x560);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x561 = 3093760U;
	static int8_t x562 = INT8_MIN;
	int16_t x563 = 92;
	int64_t x564 = INT64_MAX;
	volatile int32_t t133 = 996138958;

    t133 = ((x561>(x562+x563))<=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x565 = INT32_MIN;
	static int16_t x566 = INT16_MIN;
	int32_t x568 = INT32_MAX;
	int32_t t134 = -250;

    t134 = ((x565>(x566+x567))<=x568);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x569 = -1;
	int16_t x570 = INT16_MIN;
	static volatile uint32_t x572 = 186U;
	int32_t t135 = 73700;

    t135 = ((x569>(x570+x571))<=x572);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x573 = INT32_MAX;
	uint16_t x575 = 13868U;
	int32_t t136 = 1;

    t136 = ((x573>(x574+x575))<=x576);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x577 = -1;
	uint64_t x578 = 41421LLU;
	int8_t x579 = INT8_MIN;
	volatile int32_t x580 = INT32_MIN;
	static int32_t t137 = -103411990;

    t137 = ((x577>(x578+x579))<=x580);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x581 = 27U;
	uint16_t x582 = 1U;
	int32_t x584 = INT32_MIN;

    t138 = ((x581>(x582+x583))<=x584);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x585 = -1LL;
	int64_t x586 = -1LL;
	uint32_t x587 = UINT32_MAX;
	volatile int32_t t139 = -652547370;

    t139 = ((x585>(x586+x587))<=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x589 = -1678832;
	uint8_t x590 = 0U;
	uint8_t x591 = 0U;
	int32_t t140 = 3;

    t140 = ((x589>(x590+x591))<=x592);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x598 = 544634441U;
	uint8_t x600 = UINT8_MAX;
	int32_t t141 = 108;

    t141 = ((x597>(x598+x599))<=x600);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x601 = INT64_MIN;
	int8_t x602 = INT8_MIN;
	static uint16_t x603 = 29783U;
	volatile int16_t x604 = 84;
	static volatile int32_t t142 = 4448;

    t142 = ((x601>(x602+x603))<=x604);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x605 = UINT64_MAX;
	int8_t x606 = 1;
	int8_t x608 = -1;
	volatile int32_t t143 = 1133747;

    t143 = ((x605>(x606+x607))<=x608);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x609 = INT32_MAX;
	uint8_t x611 = 28U;
	volatile int32_t t144 = -240711111;

    t144 = ((x609>(x610+x611))<=x612);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x613 = -1;
	int64_t x614 = 72204297176227797LL;
	static int64_t x615 = 31401LL;
	int16_t x616 = 1;

    t145 = ((x613>(x614+x615))<=x616);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x621 = INT16_MIN;
	uint32_t x622 = 8843U;
	int8_t x623 = -1;
	uint8_t x624 = UINT8_MAX;

    t146 = ((x621>(x622+x623))<=x624);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x629 = -450LL;
	int32_t x631 = INT32_MAX;
	volatile int8_t x632 = -1;
	volatile int32_t t147 = -19515;

    t147 = ((x629>(x630+x631))<=x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	int64_t x634 = -1LL;
	uint8_t x635 = UINT8_MAX;
	int32_t t148 = -1;

    t148 = ((x633>(x634+x635))<=x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x637 = INT8_MAX;
	int32_t x638 = 1;
	static uint64_t x640 = 33371109LLU;
	int32_t t149 = 42041;

    t149 = ((x637>(x638+x639))<=x640);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x642 = INT16_MIN;
	int16_t x643 = INT16_MIN;

    t150 = ((x641>(x642+x643))<=x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x646 = 247230308381216998LL;
	int64_t x647 = INT64_MIN;
	static int16_t x648 = -1595;

    t151 = ((x645>(x646+x647))<=x648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x649 = -1;
	int32_t x650 = INT32_MAX;
	volatile int32_t x652 = -1;
	static volatile int32_t t152 = -9;

    t152 = ((x649>(x650+x651))<=x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x653 = INT8_MAX;
	volatile int8_t x654 = INT8_MIN;
	uint16_t x655 = UINT16_MAX;
	int64_t x656 = INT64_MAX;
	int32_t t153 = 50530;

    t153 = ((x653>(x654+x655))<=x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x665 = 1U;
	uint16_t x666 = 0U;
	uint64_t x667 = 1114521517801LLU;
	static int32_t t154 = -1;

    t154 = ((x665>(x666+x667))<=x668);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x669 = INT8_MIN;
	uint64_t x670 = UINT64_MAX;
	int64_t x671 = 164933631015625LL;
	volatile int64_t x672 = INT64_MIN;
	int32_t t155 = -27;

    t155 = ((x669>(x670+x671))<=x672);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x673 = 1;
	int32_t x674 = -13263833;
	int8_t x675 = INT8_MIN;
	static int16_t x676 = INT16_MIN;
	int32_t t156 = -567;

    t156 = ((x673>(x674+x675))<=x676);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x677 = 6222641107LL;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -1LL;
	int8_t x680 = 2;
	int32_t t157 = 67132;

    t157 = ((x677>(x678+x679))<=x680);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x681 = 0U;
	volatile uint64_t x682 = UINT64_MAX;
	uint32_t x683 = 258929219U;
	volatile uint32_t x684 = 74197570U;
	int32_t t158 = -7773;

    t158 = ((x681>(x682+x683))<=x684);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int8_t x687 = INT8_MIN;
	volatile int16_t x688 = -1;
	volatile int32_t t159 = 8945101;

    t159 = ((x685>(x686+x687))<=x688);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x689 = -20624214;
	volatile int8_t x691 = 0;
	static int16_t x692 = -377;

    t160 = ((x689>(x690+x691))<=x692);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x693 = -1;
	int16_t x696 = 8524;
	static volatile int32_t t161 = 4;

    t161 = ((x693>(x694+x695))<=x696);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x697 = 9U;
	int64_t x700 = INT64_MIN;
	volatile int32_t t162 = 56950;

    t162 = ((x697>(x698+x699))<=x700);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = INT8_MIN;
	static uint32_t x702 = 10088U;
	static uint64_t x704 = 5LLU;
	volatile int32_t t163 = 243925910;

    t163 = ((x701>(x702+x703))<=x704);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x705 = 1U;
	static volatile uint64_t x707 = 1357102571LLU;
	static volatile int16_t x708 = -1;
	static volatile int32_t t164 = 1;

    t164 = ((x705>(x706+x707))<=x708);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x709 = 98U;
	int8_t x710 = INT8_MAX;
	int8_t x711 = INT8_MIN;
	int32_t x712 = INT32_MAX;
	volatile int32_t t165 = -773757278;

    t165 = ((x709>(x710+x711))<=x712);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x717 = INT32_MIN;
	static uint16_t x718 = 2254U;
	int8_t x719 = 0;
	int16_t x720 = 0;
	int32_t t166 = -209222;

    t166 = ((x717>(x718+x719))<=x720);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x721 = INT32_MIN;
	static uint32_t x722 = 209U;
	int16_t x724 = INT16_MAX;
	static int32_t t167 = 1610;

    t167 = ((x721>(x722+x723))<=x724);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x725 = -1;
	int64_t x726 = -1LL;
	int16_t x727 = 3014;
	static int32_t t168 = 314909;

    t168 = ((x725>(x726+x727))<=x728);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x729 = 484U;
	int16_t x730 = INT16_MIN;
	static int32_t x731 = -1;
	int16_t x732 = INT16_MAX;
	volatile int32_t t169 = -221401;

    t169 = ((x729>(x730+x731))<=x732);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x734 = 203U;
	int8_t x735 = -13;
	static uint8_t x736 = 28U;
	volatile int32_t t170 = 14394520;

    t170 = ((x733>(x734+x735))<=x736);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x737 = 38LLU;
	int8_t x739 = INT8_MAX;
	int16_t x740 = -1;
	volatile int32_t t171 = 1003522170;

    t171 = ((x737>(x738+x739))<=x740);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x746 = 842U;
	uint64_t x748 = 1221819884LLU;
	int32_t t172 = 16684134;

    t172 = ((x745>(x746+x747))<=x748);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x749 = INT8_MIN;
	uint16_t x750 = 2U;

    t173 = ((x749>(x750+x751))<=x752);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x753 = 57U;
	uint32_t x755 = UINT32_MAX;
	uint16_t x756 = 70U;
	int32_t t174 = 53922725;

    t174 = ((x753>(x754+x755))<=x756);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x758 = -1;
	int8_t x759 = INT8_MIN;

    t175 = ((x757>(x758+x759))<=x760);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x765 = INT32_MAX;
	uint16_t x767 = UINT16_MAX;
	volatile int16_t x768 = INT16_MAX;

    t176 = ((x765>(x766+x767))<=x768);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x769 = UINT16_MAX;
	static int16_t x770 = -1;
	static int8_t x771 = INT8_MIN;
	int8_t x772 = -1;
	static volatile int32_t t177 = 46194085;

    t177 = ((x769>(x770+x771))<=x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x773 = 1;
	int32_t x774 = INT32_MIN;
	uint64_t x775 = 531386491748562LLU;
	int8_t x776 = -1;
	int32_t t178 = 108;

    t178 = ((x773>(x774+x775))<=x776);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x777 = INT16_MAX;
	static int64_t x778 = -2000546293LL;
	uint16_t x779 = 1U;
	static int64_t x780 = INT64_MAX;

    t179 = ((x777>(x778+x779))<=x780);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x782 = INT8_MIN;
	int64_t x784 = -1LL;
	int32_t t180 = -304329;

    t180 = ((x781>(x782+x783))<=x784);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x785 = INT16_MIN;
	int16_t x787 = INT16_MIN;
	uint64_t x788 = UINT64_MAX;

    t181 = ((x785>(x786+x787))<=x788);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x789 = 3U;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MIN;
	int32_t t182 = -267232;

    t182 = ((x789>(x790+x791))<=x792);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x793 = 431908732U;
	int8_t x795 = INT8_MIN;
	int64_t x796 = -1LL;
	volatile int32_t t183 = -48;

    t183 = ((x793>(x794+x795))<=x796);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x797 = INT64_MAX;
	static volatile uint64_t x798 = 3570825LLU;
	int32_t x799 = INT32_MIN;
	static uint16_t x800 = 3526U;

    t184 = ((x797>(x798+x799))<=x800);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x805 = UINT16_MAX;
	static uint8_t x806 = 1U;
	int8_t x807 = INT8_MIN;
	int8_t x808 = -1;
	volatile int32_t t185 = -104;

    t185 = ((x805>(x806+x807))<=x808);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x809 = -72211492427810652LL;
	uint32_t x810 = 13758U;
	int32_t x811 = INT32_MIN;
	int32_t t186 = -27748;

    t186 = ((x809>(x810+x811))<=x812);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x813 = INT16_MIN;
	int8_t x814 = 2;
	int64_t x815 = INT64_MIN;
	volatile int32_t t187 = -164;

    t187 = ((x813>(x814+x815))<=x816);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x817 = 123924257884LL;
	int32_t x818 = 144960;
	volatile uint8_t x819 = UINT8_MAX;
	volatile int64_t x820 = INT64_MIN;
	int32_t t188 = 368367987;

    t188 = ((x817>(x818+x819))<=x820);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x822 = 33;
	uint8_t x823 = 1U;
	int16_t x824 = -28;
	static volatile int32_t t189 = 13445793;

    t189 = ((x821>(x822+x823))<=x824);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x825 = INT32_MIN;
	static uint16_t x826 = UINT16_MAX;
	static int16_t x828 = INT16_MIN;
	static volatile int32_t t190 = -21127;

    t190 = ((x825>(x826+x827))<=x828);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x831 = INT16_MIN;
	static int64_t x832 = INT64_MAX;
	static int32_t t191 = 123356;

    t191 = ((x829>(x830+x831))<=x832);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x833 = 21LL;
	int16_t x834 = 0;
	int64_t x836 = INT64_MIN;
	volatile int32_t t192 = -310422711;

    t192 = ((x833>(x834+x835))<=x836);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x838 = INT16_MAX;
	int32_t x839 = -1;

    t193 = ((x837>(x838+x839))<=x840);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x841 = -4;
	uint64_t x842 = UINT64_MAX;
	int8_t x843 = INT8_MIN;
	volatile int64_t x844 = INT64_MIN;
	volatile int32_t t194 = 662;

    t194 = ((x841>(x842+x843))<=x844);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x847 = INT64_MIN;
	int16_t x848 = -1;
	volatile int32_t t195 = -32725539;

    t195 = ((x845>(x846+x847))<=x848);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x849 = INT8_MAX;
	volatile int16_t x850 = -4658;
	volatile uint64_t x851 = 26LLU;
	static int32_t t196 = -24;

    t196 = ((x849>(x850+x851))<=x852);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x854 = 31073597537289837LLU;
	int16_t x855 = -1;
	static volatile int64_t x856 = INT64_MAX;
	static volatile int32_t t197 = 3266116;

    t197 = ((x853>(x854+x855))<=x856);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x857 = INT16_MAX;
	uint64_t x858 = 74632753LLU;
	volatile int32_t t198 = -2616;

    t198 = ((x857>(x858+x859))<=x860);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x862 = INT32_MIN;
	uint16_t x863 = 1U;
	uint32_t x864 = UINT32_MAX;
	volatile int32_t t199 = 2;

    t199 = ((x861>(x862+x863))<=x864);

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

