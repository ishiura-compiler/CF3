
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

static volatile uint64_t x2 = UINT64_MAX;
int64_t x3 = INT64_MAX;
int32_t t0 = -23111;
static int16_t x11 = INT16_MIN;
int16_t x15 = INT16_MIN;
int16_t x20 = INT16_MIN;
volatile int32_t t4 = -149063772;
static int16_t x27 = -905;
static uint16_t x28 = UINT16_MAX;
uint64_t x30 = UINT64_MAX;
int32_t x33 = -1;
uint32_t x36 = UINT32_MAX;
uint64_t x37 = UINT64_MAX;
int8_t x38 = INT8_MAX;
static volatile int64_t x40 = 297397405961584170LL;
int32_t t10 = -216;
uint8_t x53 = 4U;
volatile int32_t x54 = INT32_MIN;
int32_t x55 = INT32_MIN;
volatile int32_t t14 = -431;
uint64_t x61 = 312610749621427LLU;
int16_t x68 = -2;
uint16_t x75 = 3U;
int32_t t18 = -116;
int64_t x80 = INT64_MIN;
int32_t x81 = INT32_MIN;
volatile int32_t t20 = 37767976;
static volatile int8_t x88 = 0;
int16_t x89 = -1;
int32_t x94 = INT32_MAX;
int32_t t23 = -353788182;
int8_t x109 = INT8_MIN;
int16_t x114 = -78;
int16_t x117 = -15;
volatile int32_t t30 = -14721;
static volatile int16_t x125 = -1;
int8_t x130 = 2;
static int32_t t33 = -600064;
static int8_t x137 = INT8_MIN;
uint32_t x139 = 1U;
volatile int32_t t34 = 798588;
volatile int64_t x143 = INT64_MIN;
int32_t x145 = INT32_MIN;
uint16_t x151 = 2U;
volatile int32_t t37 = -6934892;
int32_t x153 = INT32_MIN;
static int32_t x154 = INT32_MAX;
volatile uint16_t x161 = 3U;
volatile int32_t x163 = -118149051;
int32_t x165 = INT32_MAX;
int32_t t43 = 0;
static int8_t x178 = -11;
uint64_t x182 = 39795LLU;
uint8_t x184 = UINT8_MAX;
int8_t x188 = INT8_MIN;
int8_t x194 = INT8_MIN;
uint8_t x203 = 3U;
volatile int16_t x207 = INT16_MAX;
int32_t x211 = INT32_MAX;
static int16_t x215 = -1;
static volatile int32_t t53 = 225222720;
uint8_t x218 = UINT8_MAX;
uint32_t x222 = 107U;
volatile int32_t t55 = 908342249;
int32_t t56 = 5176;
uint32_t x231 = 0U;
volatile uint64_t x236 = UINT64_MAX;
static int64_t x238 = -65905885LL;
uint64_t x240 = 144840441499802LLU;
int32_t x241 = INT32_MIN;
uint16_t x244 = UINT16_MAX;
static uint8_t x250 = 2U;
int32_t t64 = 10595102;
uint64_t x266 = UINT64_MAX;
static int64_t x268 = INT64_MIN;
uint32_t x274 = 140U;
static int16_t x275 = -1;
static int32_t x280 = -1;
int8_t x283 = INT8_MIN;
static volatile int32_t t71 = -1035481;
volatile uint8_t x289 = 61U;
uint32_t x290 = 337171U;
static int16_t x299 = INT16_MIN;
volatile int16_t x301 = INT16_MIN;
volatile int32_t t76 = -3;
int32_t x313 = -249769;
int16_t x314 = 687;
volatile int32_t x322 = INT32_MIN;
static uint32_t x323 = 855382U;
int64_t x328 = INT64_MIN;
volatile int16_t x332 = -6051;
int64_t x334 = INT64_MIN;
static int64_t x343 = 2381086827288533LL;
static uint32_t x351 = 80U;
int32_t x353 = INT32_MIN;
static int32_t t88 = -32009973;
volatile int64_t x357 = -1LL;
int8_t x358 = INT8_MAX;
volatile uint64_t x363 = 2196229392401LLU;
int32_t x365 = INT32_MIN;
uint64_t x368 = 250059774LLU;
volatile int64_t x369 = 707446LL;
int32_t x371 = INT32_MAX;
int16_t x374 = INT16_MAX;
volatile int32_t t95 = 36;
volatile uint32_t x387 = UINT32_MAX;
int32_t x389 = 2557580;
uint8_t x390 = 52U;
static int8_t x401 = INT8_MIN;
int8_t x402 = -1;
int16_t x403 = 548;
uint8_t x409 = UINT8_MAX;
int32_t t104 = -949627;
static int8_t x439 = 0;
int32_t x443 = -1;
static volatile int8_t x444 = 0;
volatile int16_t x463 = INT16_MIN;
int16_t x468 = INT16_MIN;
int16_t x474 = -1;
uint32_t x476 = 86704141U;
uint64_t x480 = UINT64_MAX;
int16_t x482 = INT16_MIN;
int64_t x483 = 3295746983LL;
static int32_t x484 = INT32_MAX;
static int32_t x487 = -1;
uint8_t x488 = UINT8_MAX;
volatile int32_t t122 = 0;
uint8_t x501 = 61U;
static volatile int16_t x509 = INT16_MAX;
uint8_t x513 = 7U;
static uint32_t x521 = UINT32_MAX;
int64_t x523 = INT64_MAX;
volatile int32_t t130 = -6;
int16_t x527 = -478;
uint8_t x535 = 0U;
volatile uint64_t x540 = 374LLU;
int32_t x563 = -1;
int8_t x564 = INT8_MIN;
volatile int32_t x566 = INT32_MAX;
int64_t x569 = INT64_MIN;
int16_t x572 = 23;
int32_t t142 = -17295336;
volatile int32_t t143 = -13541083;
volatile int64_t x577 = 13146631204687LL;
volatile int32_t t144 = 399;
uint64_t x582 = UINT64_MAX;
uint8_t x588 = UINT8_MAX;
int8_t x589 = INT8_MIN;
int16_t x591 = INT16_MAX;
int32_t x592 = INT32_MIN;
static volatile uint64_t x594 = 11651661511LLU;
int32_t x597 = -1;
static volatile int16_t x599 = 2;
int16_t x603 = INT16_MIN;
volatile int64_t x611 = INT64_MIN;
volatile int32_t t152 = 12403;
int32_t t153 = 1517932;
static volatile int32_t x620 = INT32_MIN;
volatile int32_t t154 = -68;
int8_t x625 = INT8_MAX;
static uint16_t x630 = 6865U;
int8_t x634 = -1;
int8_t x643 = -1;
uint16_t x648 = 17U;
volatile uint8_t x654 = UINT8_MAX;
int32_t t163 = -2;
int64_t x658 = 798659551387444379LL;
int16_t x662 = INT16_MAX;
static int64_t x665 = 3397103889011570LL;
int8_t x666 = 10;
int32_t x669 = INT32_MIN;
volatile int64_t x671 = INT64_MAX;
int64_t x672 = 400013LL;
static volatile int16_t x675 = INT16_MAX;
int32_t t169 = 1443944;
int64_t x681 = 0LL;
uint8_t x693 = 16U;
volatile int32_t t175 = -462;
volatile int16_t x705 = -1780;
int32_t t176 = -1384;
int8_t x714 = -1;
int16_t x716 = INT16_MIN;
volatile int16_t x717 = INT16_MIN;
uint64_t x720 = 3413LLU;
volatile int32_t t179 = -929;
int8_t x721 = INT8_MIN;
volatile int32_t t185 = -1;
int16_t x745 = -1;
uint32_t x750 = 6709U;
uint16_t x752 = UINT16_MAX;
static uint8_t x761 = UINT8_MAX;
int32_t t190 = -1;
uint8_t x768 = 4U;
uint16_t x778 = 3272U;
volatile int32_t t194 = -6;
static int32_t t195 = -524956;
volatile uint16_t x785 = UINT16_MAX;
int64_t x794 = -490347134663147207LL;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	static uint8_t x4 = 1U;

    t0 = (((x1==x2)&x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	static int64_t x6 = 57883393827LL;
	int32_t x7 = INT32_MIN;
	int64_t x8 = -364549055686350072LL;
	volatile int32_t t1 = 1098124;

    t1 = (((x5==x6)&x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 13U;
	volatile int64_t x10 = INT64_MIN;
	uint64_t x12 = 1094091754636477070LLU;
	volatile int32_t t2 = 401953;

    t2 = (((x9==x10)&x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 5;
	int64_t x14 = -1LL;
	static int16_t x16 = 7410;
	volatile int32_t t3 = -3021012;

    t3 = (((x13==x14)&x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint32_t x18 = 449535U;
	int8_t x19 = INT8_MIN;

    t4 = (((x17==x18)&x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MAX;
	int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -3;
	static int32_t t5 = 0;

    t5 = (((x21==x22)&x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 4;
	int64_t x26 = INT64_MIN;
	static volatile int32_t t6 = 113667;

    t6 = (((x25==x26)&x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int8_t x31 = -1;
	static int32_t x32 = INT32_MAX;
	int32_t t7 = -527863;

    t7 = (((x29==x30)&x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = 1;
	uint16_t x35 = UINT16_MAX;
	int32_t t8 = -176457;

    t8 = (((x33==x34)&x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x39 = 2514LLU;
	volatile int32_t t9 = 5;

    t9 = (((x37==x38)&x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	int64_t x42 = INT64_MIN;
	int8_t x43 = -1;
	uint8_t x44 = UINT8_MAX;

    t10 = (((x41==x42)&x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	static volatile int64_t x46 = -1LL;
	uint32_t x47 = 33409U;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -519037;

    t11 = (((x45==x46)&x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -1;
	int16_t x50 = 2;
	uint64_t x51 = 27814346373317LLU;
	static uint16_t x52 = 20U;
	volatile int32_t t12 = 0;

    t12 = (((x49==x50)&x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x56 = INT32_MAX;
	int32_t t13 = -217327176;

    t13 = (((x53==x54)&x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 10703273319719081LL;
	uint64_t x58 = 425158061960448LLU;
	int64_t x59 = INT64_MIN;
	volatile int8_t x60 = INT8_MIN;

    t14 = (((x57==x58)&x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x62 = INT16_MIN;
	uint32_t x63 = 81595146U;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -446923;

    t15 = (((x61==x62)&x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -213551360932784LL;
	int8_t x66 = 0;
	uint32_t x67 = 15U;
	volatile int32_t t16 = 18456607;

    t16 = (((x65==x66)&x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MAX;
	volatile int32_t x70 = INT32_MIN;
	uint64_t x71 = 4708523LLU;
	static volatile int64_t x72 = -1LL;
	volatile int32_t t17 = 3270;

    t17 = (((x69==x70)&x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	uint64_t x74 = UINT64_MAX;
	int32_t x76 = -11188;

    t18 = (((x73==x74)&x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	static int32_t t19 = -11514;

    t19 = (((x77==x78)&x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	static int8_t x84 = INT8_MIN;

    t20 = (((x81==x82)&x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 38367324988569068LL;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	int32_t t21 = -1;

    t21 = (((x85==x86)&x87)==x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = 94U;
	static int32_t x91 = INT32_MIN;
	int64_t x92 = 1LL;
	volatile int32_t t22 = 1;

    t22 = (((x89==x90)&x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 30839U;
	uint64_t x95 = 3894211540LLU;
	static volatile int32_t x96 = INT32_MIN;

    t23 = (((x93==x94)&x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 2633LLU;
	volatile int8_t x100 = INT8_MIN;
	int32_t t24 = 5782396;

    t24 = (((x97==x98)&x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	int16_t x103 = 1;
	int16_t x104 = 0;
	static int32_t t25 = 134746;

    t25 = (((x101==x102)&x103)==x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 147598LLU;
	int16_t x106 = 15285;
	int32_t x107 = INT32_MAX;
	int16_t x108 = -1;
	volatile int32_t t26 = 0;

    t26 = (((x105==x106)&x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x110 = 1;
	volatile uint8_t x111 = UINT8_MAX;
	int64_t x112 = -3028150805209289288LL;
	static int32_t t27 = -175027565;

    t27 = (((x109==x110)&x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	uint16_t x115 = 184U;
	int64_t x116 = -1LL;
	int32_t t28 = 20;

    t28 = (((x113==x114)&x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x118 = 27859U;
	uint64_t x119 = 2532LLU;
	uint64_t x120 = 490011801950032550LLU;
	static volatile int32_t t29 = -1;

    t29 = (((x117==x118)&x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x121 = INT32_MAX;
	uint64_t x122 = 426795LLU;
	static int32_t x123 = INT32_MIN;
	static volatile uint64_t x124 = UINT64_MAX;

    t30 = (((x121==x122)&x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MAX;
	volatile int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 0;

    t31 = (((x125==x126)&x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	uint64_t x131 = UINT64_MAX;
	volatile uint64_t x132 = 1940661LLU;
	volatile int32_t t32 = 74278;

    t32 = (((x129==x130)&x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -3;
	uint8_t x134 = 1U;
	static int64_t x135 = -417078643LL;
	static volatile uint16_t x136 = 55U;

    t33 = (((x133==x134)&x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x138 = -115;
	static int64_t x140 = INT64_MIN;

    t34 = (((x137==x138)&x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -1;
	uint64_t x142 = 1826986472754426LLU;
	int16_t x144 = -1326;
	int32_t t35 = 32761;

    t35 = (((x141==x142)&x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x146 = -1LL;
	int8_t x147 = -1;
	volatile int64_t x148 = INT64_MAX;
	volatile int32_t t36 = -5148114;

    t36 = (((x145==x146)&x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = 7307U;
	volatile int8_t x150 = -1;
	static int8_t x152 = -1;

    t37 = (((x149==x150)&x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x155 = INT8_MIN;
	static int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 5;

    t38 = (((x153==x154)&x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 3531486966866852LLU;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int8_t x160 = 2;
	static int32_t t39 = -64345;

    t39 = (((x157==x158)&x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x162 = 0U;
	int64_t x164 = -442024LL;
	static int32_t t40 = -5;

    t40 = (((x161==x162)&x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = INT64_MAX;
	uint32_t x167 = 5098U;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = -2;

    t41 = (((x165==x166)&x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x169 = 5U;
	int8_t x170 = -56;
	volatile int32_t x171 = 2;
	static int8_t x172 = -1;
	volatile int32_t t42 = 108866;

    t42 = (((x169==x170)&x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	volatile int64_t x174 = INT64_MIN;
	volatile uint64_t x175 = 3590229LLU;
	uint64_t x176 = 0LLU;

    t43 = (((x173==x174)&x175)==x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 5342U;
	static int16_t x179 = INT16_MAX;
	volatile int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = -44440;

    t44 = (((x177==x178)&x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	static int32_t x183 = INT32_MAX;
	int32_t t45 = 385;

    t45 = (((x181==x182)&x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -3809;
	static int64_t x186 = INT64_MIN;
	static int16_t x187 = -1;
	int32_t t46 = -8;

    t46 = (((x185==x186)&x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 13U;
	int16_t x190 = 52;
	int32_t x191 = -1;
	static int8_t x192 = 3;
	volatile int32_t t47 = -495;

    t47 = (((x189==x190)&x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 46U;
	volatile int8_t x195 = -38;
	int16_t x196 = INT16_MAX;
	volatile int32_t t48 = 6949091;

    t48 = (((x193==x194)&x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 13U;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = 1451;

    t49 = (((x197==x198)&x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	int64_t x202 = INT64_MIN;
	static int64_t x204 = 40750LL;
	static volatile int32_t t50 = -2;

    t50 = (((x201==x202)&x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	volatile uint32_t x206 = 473931266U;
	static int8_t x208 = -1;
	volatile int32_t t51 = -49175227;

    t51 = (((x205==x206)&x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x209 = 14545U;
	uint8_t x210 = 5U;
	uint16_t x212 = 22488U;
	int32_t t52 = 24;

    t52 = (((x209==x210)&x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 113U;
	int64_t x214 = -1LL;
	uint64_t x216 = UINT64_MAX;

    t53 = (((x213==x214)&x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 23021051402700LLU;
	uint8_t x219 = 2U;
	static int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = -740377;

    t54 = (((x217==x218)&x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint64_t x223 = UINT64_MAX;
	uint64_t x224 = 50005780866513LLU;

    t55 = (((x221==x222)&x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	int16_t x226 = -3422;
	static int32_t x227 = -6052;
	uint32_t x228 = 49825988U;

    t56 = (((x225==x226)&x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 477;
	volatile uint8_t x230 = 1U;
	volatile int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = 744;

    t57 = (((x229==x230)&x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = 1351051915LL;
	int64_t x234 = 2303133475751190256LL;
	volatile int16_t x235 = -1;
	volatile int32_t t58 = 54050749;

    t58 = (((x233==x234)&x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = -1;
	int32_t x239 = INT32_MIN;
	volatile int32_t t59 = 46807;

    t59 = (((x237==x238)&x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x242 = -1;
	int64_t x243 = -1LL;
	int32_t t60 = -7;

    t60 = (((x241==x242)&x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x245 = 0U;
	int64_t x246 = 2841309259LL;
	static uint16_t x247 = 1U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 1;

    t61 = (((x245==x246)&x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MAX;
	static int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	int32_t t62 = 2;

    t62 = (((x249==x250)&x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint8_t x253 = 97U;
	int8_t x254 = 63;
	volatile int16_t x255 = 117;
	int16_t x256 = INT16_MAX;
	static volatile int32_t t63 = 109333;

    t63 = (((x253==x254)&x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x257 = UINT32_MAX;
	volatile int16_t x258 = -1;
	uint8_t x259 = 52U;
	uint8_t x260 = UINT8_MAX;

    t64 = (((x257==x258)&x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 1495U;
	int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MIN;
	uint8_t x264 = 6U;
	static int32_t t65 = 5;

    t65 = (((x261==x262)&x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x267 = -1;
	int32_t t66 = 10;

    t66 = (((x265==x266)&x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = 48;
	volatile int32_t t67 = -64100221;

    t67 = (((x269==x270)&x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 12159428U;
	int8_t x276 = -42;
	static int32_t t68 = 3;

    t68 = (((x273==x274)&x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 386918543U;
	volatile int64_t x278 = INT64_MAX;
	volatile int32_t x279 = INT32_MIN;
	int32_t t69 = 41212768;

    t69 = (((x277==x278)&x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x281 = 1U;
	int64_t x282 = -1LL;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 0;

    t70 = (((x281==x282)&x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 0LL;
	uint16_t x286 = 88U;
	int32_t x287 = -1;
	int32_t x288 = -1;

    t71 = (((x285==x286)&x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x291 = 90335984U;
	int16_t x292 = 1032;
	static int32_t t72 = 9170;

    t72 = (((x289==x290)&x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 12U;
	volatile int16_t x294 = INT16_MAX;
	uint16_t x295 = 70U;
	int16_t x296 = 27;
	int32_t t73 = 61512;

    t73 = (((x293==x294)&x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = UINT16_MAX;
	int64_t x298 = -299467715LL;
	volatile uint16_t x300 = 378U;
	static volatile int32_t t74 = 951126214;

    t74 = (((x297==x298)&x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x302 = INT16_MAX;
	int32_t x303 = 10082;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 69511;

    t75 = (((x301==x302)&x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x305 = -7440;
	static int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;

    t76 = (((x305==x306)&x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x309 = 498731LLU;
	volatile uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	int32_t t77 = -1634;

    t77 = (((x309==x310)&x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x315 = 822U;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 96359;

    t78 = (((x313==x314)&x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -15424374;
	uint8_t x318 = 43U;
	uint32_t x319 = 10306445U;
	int32_t x320 = 16083;
	volatile int32_t t79 = -1;

    t79 = (((x317==x318)&x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -1;
	static int8_t x324 = -1;
	static int32_t t80 = 77732;

    t80 = (((x321==x322)&x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MIN;
	static int32_t x326 = INT32_MIN;
	int32_t x327 = 135759;
	volatile int32_t t81 = 15309294;

    t81 = (((x325==x326)&x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 3U;
	uint16_t x331 = UINT16_MAX;
	int32_t t82 = -175687808;

    t82 = (((x329==x330)&x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 124563U;
	static uint16_t x335 = 7835U;
	int8_t x336 = -1;
	volatile int32_t t83 = 54208;

    t83 = (((x333==x334)&x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x337 = -1;
	static int64_t x338 = INT64_MAX;
	uint64_t x339 = UINT64_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 42;

    t84 = (((x337==x338)&x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -2161;
	int16_t x342 = INT16_MIN;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -88489;

    t85 = (((x341==x342)&x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x345 = -1;
	static uint32_t x346 = 99295700U;
	int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = -2;

    t86 = (((x345==x346)&x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 127063947U;
	uint64_t x350 = UINT64_MAX;
	int64_t x352 = -1LL;
	volatile int32_t t87 = 20;

    t87 = (((x349==x350)&x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	uint16_t x355 = 31U;
	int16_t x356 = -349;

    t88 = (((x353==x354)&x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x359 = 39;
	int16_t x360 = 2;
	static int32_t t89 = -1;

    t89 = (((x357==x358)&x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 123388915129LLU;
	static int16_t x362 = INT16_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -3008293;

    t90 = (((x361==x362)&x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = 1677U;
	int32_t x367 = -17;
	int32_t t91 = -6243602;

    t91 = (((x365==x366)&x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x370 = INT64_MIN;
	int8_t x372 = -1;
	int32_t t92 = -81;

    t92 = (((x369==x370)&x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = -1LL;
	int8_t x375 = INT8_MAX;
	uint32_t x376 = 2034284962U;
	volatile int32_t t93 = 64;

    t93 = (((x373==x374)&x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = 0;
	static int8_t x378 = INT8_MIN;
	uint64_t x379 = 432429LLU;
	volatile uint16_t x380 = 8U;
	static int32_t t94 = -801951672;

    t94 = (((x377==x378)&x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = -1;
	int16_t x383 = 0;
	volatile int32_t x384 = INT32_MIN;

    t95 = (((x381==x382)&x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x385 = 23U;
	uint64_t x386 = 5552752LLU;
	volatile int16_t x388 = -1;
	int32_t t96 = -2942499;

    t96 = (((x385==x386)&x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x391 = 42LL;
	volatile int32_t x392 = INT32_MAX;
	int32_t t97 = -930611974;

    t97 = (((x389==x390)&x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = -391987233;
	volatile int64_t x394 = INT64_MIN;
	int64_t x395 = -186LL;
	uint32_t x396 = 1U;
	volatile int32_t t98 = 842;

    t98 = (((x393==x394)&x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -11;
	int16_t x398 = INT16_MAX;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 924;

    t99 = (((x397==x398)&x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x404 = INT8_MIN;
	int32_t t100 = -98704;

    t100 = (((x401==x402)&x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	uint64_t x406 = UINT64_MAX;
	uint64_t x407 = 12762272852LLU;
	int64_t x408 = INT64_MIN;
	int32_t t101 = 1925188;

    t101 = (((x405==x406)&x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x410 = UINT64_MAX;
	int16_t x411 = INT16_MAX;
	static uint32_t x412 = 3U;
	volatile int32_t t102 = 65446;

    t102 = (((x409==x410)&x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1031631873;
	int16_t x414 = -14022;
	uint8_t x415 = 127U;
	static int64_t x416 = -1LL;
	volatile int32_t t103 = -59;

    t103 = (((x413==x414)&x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -3;
	int16_t x418 = INT16_MIN;
	uint64_t x419 = 44711157946151LLU;
	uint16_t x420 = UINT16_MAX;

    t104 = (((x417==x418)&x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = 33;
	int8_t x422 = 18;
	static int32_t x423 = INT32_MIN;
	uint32_t x424 = UINT32_MAX;
	static int32_t t105 = -3861;

    t105 = (((x421==x422)&x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int64_t x426 = 1LL;
	int32_t x427 = 6;
	volatile uint16_t x428 = UINT16_MAX;
	int32_t t106 = 13020;

    t106 = (((x425==x426)&x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 734;
	int16_t x430 = INT16_MAX;
	int8_t x431 = -1;
	int32_t x432 = INT32_MAX;
	volatile int32_t t107 = -677;

    t107 = (((x429==x430)&x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = -61;
	static uint32_t x434 = 189646U;
	int8_t x435 = -1;
	uint8_t x436 = 3U;
	volatile int32_t t108 = -7228644;

    t108 = (((x433==x434)&x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	uint32_t x438 = UINT32_MAX;
	int64_t x440 = -116048142132LL;
	int32_t t109 = 51867747;

    t109 = (((x437==x438)&x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	uint8_t x442 = 8U;
	static volatile int32_t t110 = 4306;

    t110 = (((x441==x442)&x443)==x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MAX;
	uint32_t x447 = 7357230U;
	volatile int16_t x448 = -1;
	static int32_t t111 = -3;

    t111 = (((x445==x446)&x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MIN;
	static int16_t x451 = INT16_MIN;
	static int8_t x452 = INT8_MIN;
	int32_t t112 = 11166147;

    t112 = (((x449==x450)&x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = INT32_MIN;
	int16_t x456 = -1;
	static volatile int32_t t113 = -34659650;

    t113 = (((x453==x454)&x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	uint16_t x458 = 598U;
	uint32_t x459 = 2011409U;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 1;

    t114 = (((x457==x458)&x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = 13711648;
	int8_t x462 = 14;
	int64_t x464 = INT64_MIN;
	static int32_t t115 = 108;

    t115 = (((x461==x462)&x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1796280;
	static int16_t x466 = INT16_MIN;
	int64_t x467 = 15420LL;
	volatile int32_t t116 = 44441;

    t116 = (((x465==x466)&x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 0U;
	int32_t x470 = INT32_MIN;
	volatile int16_t x471 = -2009;
	int8_t x472 = 15;
	static int32_t t117 = -1034753776;

    t117 = (((x469==x470)&x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	static int64_t x475 = -9661604LL;
	volatile int32_t t118 = 7;

    t118 = (((x473==x474)&x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -202LL;
	int32_t x478 = -16142;
	int32_t x479 = INT32_MIN;
	volatile int32_t t119 = 386;

    t119 = (((x477==x478)&x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x481 = UINT16_MAX;
	static int32_t t120 = 12923;

    t120 = (((x481==x482)&x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 7;
	int32_t x486 = -1;
	volatile int32_t t121 = -2;

    t121 = (((x485==x486)&x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 6870;
	uint32_t x490 = 27325607U;
	int16_t x491 = INT16_MAX;
	static int32_t x492 = 30;

    t122 = (((x489==x490)&x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	static volatile int32_t x494 = INT32_MIN;
	volatile int16_t x495 = INT16_MAX;
	uint32_t x496 = 733658U;
	volatile int32_t t123 = 0;

    t123 = (((x493==x494)&x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x497 = 5602U;
	volatile int32_t x498 = -981583977;
	int64_t x499 = INT64_MAX;
	uint64_t x500 = 30597LLU;
	static int32_t t124 = -4199;

    t124 = (((x497==x498)&x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x502 = UINT16_MAX;
	int64_t x503 = INT64_MIN;
	int8_t x504 = -1;
	int32_t t125 = 1024989363;

    t125 = (((x501==x502)&x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 188987651;
	static int8_t x506 = -1;
	static uint64_t x507 = UINT64_MAX;
	int32_t x508 = 1059;
	volatile int32_t t126 = -8;

    t126 = (((x505==x506)&x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x510 = 3U;
	uint64_t x511 = 92110479625468LLU;
	uint64_t x512 = 518LLU;
	static int32_t t127 = -24;

    t127 = (((x509==x510)&x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = INT32_MAX;
	static volatile int16_t x515 = INT16_MIN;
	uint32_t x516 = 18U;
	int32_t t128 = 2220;

    t128 = (((x513==x514)&x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -12;
	uint64_t x518 = 0LLU;
	static uint16_t x519 = 18673U;
	int64_t x520 = -1LL;
	int32_t t129 = 15133417;

    t129 = (((x517==x518)&x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -7;
	int16_t x524 = 155;

    t130 = (((x521==x522)&x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = -1LL;
	uint64_t x526 = UINT64_MAX;
	uint16_t x528 = 9274U;
	int32_t t131 = -15289676;

    t131 = (((x525==x526)&x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	static uint8_t x530 = UINT8_MAX;
	volatile uint64_t x531 = 244LLU;
	static int64_t x532 = -1LL;
	volatile int32_t t132 = 3;

    t132 = (((x529==x530)&x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 770U;
	static volatile int8_t x534 = INT8_MIN;
	uint64_t x536 = UINT64_MAX;
	int32_t t133 = -114948;

    t133 = (((x533==x534)&x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MAX;
	uint16_t x538 = 1230U;
	int16_t x539 = INT16_MIN;
	int32_t t134 = 2540460;

    t134 = (((x537==x538)&x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x541 = -1;
	static uint32_t x542 = 0U;
	volatile int16_t x543 = 0;
	int32_t x544 = -1;
	volatile int32_t t135 = 56;

    t135 = (((x541==x542)&x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = -15;
	static int32_t x546 = 7;
	uint32_t x547 = UINT32_MAX;
	static int32_t x548 = INT32_MAX;
	int32_t t136 = 140;

    t136 = (((x545==x546)&x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	int32_t x550 = INT32_MIN;
	volatile int8_t x551 = 18;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t137 = 609105;

    t137 = (((x549==x550)&x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -1LL;
	volatile int16_t x554 = 0;
	static volatile uint64_t x555 = 474647032LLU;
	static int64_t x556 = -1LL;
	static volatile int32_t t138 = -2906;

    t138 = (((x553==x554)&x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	uint32_t x558 = 117840535U;
	volatile int16_t x559 = INT16_MIN;
	volatile int64_t x560 = INT64_MAX;
	int32_t t139 = 1357741;

    t139 = (((x557==x558)&x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	uint16_t x562 = UINT16_MAX;
	int32_t t140 = 15891;

    t140 = (((x561==x562)&x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 6;
	static volatile uint64_t x567 = UINT64_MAX;
	int64_t x568 = -1LL;
	int32_t t141 = 129718993;

    t141 = (((x565==x566)&x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x570 = INT8_MIN;
	static uint8_t x571 = UINT8_MAX;

    t142 = (((x569==x570)&x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = UINT8_MAX;
	uint16_t x574 = 2U;
	volatile int8_t x575 = INT8_MIN;
	int8_t x576 = 1;

    t143 = (((x573==x574)&x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = 4849LLU;
	uint16_t x579 = 940U;
	int32_t x580 = -207010243;

    t144 = (((x577==x578)&x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	static int16_t x583 = INT16_MAX;
	uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = -3;

    t145 = (((x581==x582)&x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x585 = 173129405660LLU;
	volatile uint16_t x586 = 1734U;
	uint16_t x587 = 4U;
	int32_t t146 = 0;

    t146 = (((x585==x586)&x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x590 = 727931843U;
	volatile int32_t t147 = 39;

    t147 = (((x589==x590)&x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	uint64_t x595 = 127794LLU;
	int16_t x596 = INT16_MAX;
	int32_t t148 = 6306631;

    t148 = (((x593==x594)&x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x598 = 212499LLU;
	int8_t x600 = INT8_MAX;
	int32_t t149 = -12304413;

    t149 = (((x597==x598)&x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MAX;
	static uint32_t x602 = UINT32_MAX;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t150 = 12101;

    t150 = (((x601==x602)&x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 72U;
	uint64_t x606 = 126652LLU;
	int64_t x607 = INT64_MIN;
	uint64_t x608 = UINT64_MAX;
	int32_t t151 = -200;

    t151 = (((x605==x606)&x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	static int16_t x610 = -1;
	volatile int64_t x612 = -1LL;

    t152 = (((x609==x610)&x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int64_t x614 = INT64_MIN;
	int16_t x615 = -1;
	uint64_t x616 = UINT64_MAX;

    t153 = (((x613==x614)&x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -118;
	uint8_t x618 = UINT8_MAX;
	uint16_t x619 = UINT16_MAX;

    t154 = (((x617==x618)&x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = -1;
	int16_t x622 = -9;
	int8_t x623 = 7;
	int16_t x624 = -1;
	volatile int32_t t155 = -1025;

    t155 = (((x621==x622)&x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x626 = -37;
	static int16_t x627 = INT16_MIN;
	volatile int32_t x628 = -1;
	int32_t t156 = -344;

    t156 = (((x625==x626)&x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 809865LLU;
	uint32_t x631 = 397U;
	uint8_t x632 = 115U;
	volatile int32_t t157 = -1180030;

    t157 = (((x629==x630)&x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int16_t x635 = INT16_MIN;
	int64_t x636 = 61666450914406LL;
	int32_t t158 = -454;

    t158 = (((x633==x634)&x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 30953U;
	volatile uint64_t x638 = UINT64_MAX;
	int32_t x639 = -527;
	uint16_t x640 = UINT16_MAX;
	int32_t t159 = -67394;

    t159 = (((x637==x638)&x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 61U;
	volatile uint64_t x642 = 2773LLU;
	uint64_t x644 = 5LLU;
	volatile int32_t t160 = -1912223;

    t160 = (((x641==x642)&x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	static volatile int8_t x646 = INT8_MAX;
	volatile int32_t x647 = INT32_MIN;
	volatile int32_t t161 = -1814;

    t161 = (((x645==x646)&x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 16419371639355LLU;
	int32_t x650 = 183308476;
	volatile int64_t x651 = -412164559LL;
	int64_t x652 = -10653903674972643LL;
	volatile int32_t t162 = -54;

    t162 = (((x649==x650)&x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint16_t x653 = UINT16_MAX;
	uint32_t x655 = UINT32_MAX;
	static int8_t x656 = INT8_MIN;

    t163 = (((x653==x654)&x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	int32_t x659 = INT32_MIN;
	int16_t x660 = -6553;
	volatile int32_t t164 = -154;

    t164 = (((x657==x658)&x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	int8_t x663 = INT8_MIN;
	static int64_t x664 = INT64_MIN;
	int32_t t165 = 1230;

    t165 = (((x661==x662)&x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x667 = 18U;
	int64_t x668 = INT64_MIN;
	volatile int32_t t166 = -181856;

    t166 = (((x665==x666)&x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x670 = -27LL;
	int32_t t167 = 350425769;

    t167 = (((x669==x670)&x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x674 = INT16_MIN;
	int8_t x676 = 0;
	static int32_t t168 = -865;

    t168 = (((x673==x674)&x675)==x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = INT64_MIN;
	static uint64_t x679 = 4LLU;
	int64_t x680 = -1LL;

    t169 = (((x677==x678)&x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x682 = UINT16_MAX;
	int16_t x683 = -232;
	int16_t x684 = INT16_MIN;
	volatile int32_t t170 = -1210149;

    t170 = (((x681==x682)&x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = 196860055;
	int8_t x686 = 1;
	int64_t x687 = -22926087309038LL;
	volatile int16_t x688 = 653;
	volatile int32_t t171 = 0;

    t171 = (((x685==x686)&x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = 1;
	int64_t x690 = INT64_MIN;
	uint16_t x691 = UINT16_MAX;
	static int16_t x692 = INT16_MIN;
	int32_t t172 = 50;

    t172 = (((x689==x690)&x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x694 = UINT16_MAX;
	int16_t x695 = INT16_MIN;
	uint16_t x696 = 918U;
	static volatile int32_t t173 = -65269966;

    t173 = (((x693==x694)&x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	int64_t x698 = -1LL;
	uint16_t x699 = 0U;
	int16_t x700 = -1;
	volatile int32_t t174 = -44;

    t174 = (((x697==x698)&x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 0;
	uint8_t x702 = 0U;
	int64_t x703 = -760001LL;
	uint32_t x704 = UINT32_MAX;

    t175 = (((x701==x702)&x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	uint8_t x707 = 0U;
	int16_t x708 = 3060;

    t176 = (((x705==x706)&x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 58;
	static uint32_t x710 = 26U;
	uint8_t x711 = 45U;
	int32_t x712 = -1;
	int32_t t177 = -2;

    t177 = (((x709==x710)&x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -1LL;
	int16_t x715 = INT16_MIN;
	volatile int32_t t178 = -909949;

    t178 = (((x713==x714)&x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x718 = 872974050LLU;
	int8_t x719 = INT8_MAX;

    t179 = (((x717==x718)&x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = UINT64_MAX;
	static int8_t x723 = INT8_MAX;
	int64_t x724 = -1LL;
	int32_t t180 = -453937;

    t180 = (((x721==x722)&x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MIN;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = INT64_MAX;
	uint16_t x728 = 7U;
	volatile int32_t t181 = 4069;

    t181 = (((x725==x726)&x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 2080225355U;
	static volatile int32_t x730 = INT32_MAX;
	int16_t x731 = INT16_MIN;
	uint64_t x732 = 1470893609421825LLU;
	static volatile int32_t t182 = 1;

    t182 = (((x729==x730)&x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 2U;
	int64_t x734 = 38025555770646LL;
	volatile int16_t x735 = INT16_MAX;
	int64_t x736 = INT64_MIN;
	static int32_t t183 = -38234;

    t183 = (((x733==x734)&x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int32_t x738 = INT32_MAX;
	int16_t x739 = -1;
	uint64_t x740 = 1972701LLU;
	volatile int32_t t184 = -427417449;

    t184 = (((x737==x738)&x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	int16_t x742 = -1;
	volatile int8_t x743 = INT8_MIN;
	uint8_t x744 = 0U;

    t185 = (((x741==x742)&x743)==x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x746 = 61U;
	volatile int64_t x747 = INT64_MIN;
	static int16_t x748 = INT16_MIN;
	volatile int32_t t186 = 5842873;

    t186 = (((x745==x746)&x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -1;
	int8_t x751 = INT8_MIN;
	volatile int32_t t187 = 120;

    t187 = (((x749==x750)&x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x753 = 97U;
	int64_t x754 = -1LL;
	int16_t x755 = -1;
	volatile int32_t x756 = INT32_MIN;
	volatile int32_t t188 = -38351318;

    t188 = (((x753==x754)&x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	int64_t x758 = 1794868LL;
	uint8_t x759 = UINT8_MAX;
	volatile uint32_t x760 = 81U;
	int32_t t189 = -1444769;

    t189 = (((x757==x758)&x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x762 = -1979;
	static uint32_t x763 = UINT32_MAX;
	uint32_t x764 = 215427U;

    t190 = (((x761==x762)&x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = UINT32_MAX;
	int8_t x766 = 0;
	int16_t x767 = -6;
	int32_t t191 = 43;

    t191 = (((x765==x766)&x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	int64_t x770 = INT64_MAX;
	int16_t x771 = -18;
	int64_t x772 = 50898LL;
	int32_t t192 = -54304877;

    t192 = (((x769==x770)&x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x773 = INT64_MIN;
	int32_t x774 = INT32_MAX;
	uint16_t x775 = 1818U;
	int64_t x776 = INT64_MIN;
	volatile int32_t t193 = 8104;

    t193 = (((x773==x774)&x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = 224252U;
	volatile int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MIN;

    t194 = (((x777==x778)&x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 0U;
	uint64_t x782 = 378357617594LLU;
	int64_t x783 = 2LL;
	int8_t x784 = -1;

    t195 = (((x781==x782)&x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = -29513;
	int32_t x787 = -1;
	uint64_t x788 = 1825LLU;
	static int32_t t196 = 126374210;

    t196 = (((x785==x786)&x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	int64_t x790 = -11487574LL;
	int64_t x791 = 106LL;
	static int8_t x792 = INT8_MIN;
	volatile int32_t t197 = 29;

    t197 = (((x789==x790)&x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x795 = 3621;
	uint32_t x796 = UINT32_MAX;
	static volatile int32_t t198 = -2084441;

    t198 = (((x793==x794)&x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -11216368450555286LL;
	volatile int8_t x798 = INT8_MAX;
	volatile int8_t x799 = -1;
	int64_t x800 = 1LL;
	volatile int32_t t199 = 313957;

    t199 = (((x797==x798)&x799)==x800);

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

