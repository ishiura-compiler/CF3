
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

int16_t x1 = INT16_MAX;
uint16_t x2 = UINT16_MAX;
volatile int64_t x15 = INT64_MIN;
int64_t x19 = INT64_MAX;
static volatile uint32_t x21 = 220149256U;
uint8_t x22 = 41U;
int32_t t5 = 1651503;
uint16_t x32 = 14446U;
volatile uint32_t x33 = 1461332818U;
uint32_t x49 = UINT32_MAX;
static int8_t x56 = 9;
uint8_t x57 = 0U;
volatile int16_t x64 = -110;
int8_t x65 = -2;
static volatile int32_t t15 = 4415592;
uint32_t x71 = 2U;
int32_t x72 = 941271406;
int16_t x73 = INT16_MAX;
int32_t x85 = -39;
static volatile int8_t x88 = 24;
uint64_t x91 = 3558LLU;
uint16_t x97 = 7U;
volatile int32_t t23 = 0;
int32_t t24 = 3435;
static int8_t x112 = INT8_MAX;
volatile uint8_t x117 = 3U;
int32_t x118 = -28232144;
static uint32_t x122 = UINT32_MAX;
int64_t x143 = -2LL;
uint16_t x145 = UINT16_MAX;
static volatile uint8_t x149 = UINT8_MAX;
uint16_t x155 = 39U;
int64_t x156 = -4336611236234LL;
int32_t t34 = 1;
volatile int32_t t35 = 5;
uint64_t x161 = UINT64_MAX;
int64_t x164 = INT64_MIN;
static int32_t t37 = -33040;
static int16_t x174 = INT16_MIN;
uint32_t x175 = 829U;
int32_t t38 = 196137;
int32_t x185 = -1;
static int32_t t42 = 1;
static int32_t x198 = INT32_MIN;
int16_t x205 = 20;
volatile uint16_t x214 = 10U;
int16_t x218 = 170;
int32_t x222 = 61;
int32_t t50 = -92362380;
int16_t x227 = INT16_MAX;
uint64_t x228 = UINT64_MAX;
uint8_t x230 = 44U;
static int32_t t52 = -1218;
static volatile int32_t x234 = INT32_MIN;
volatile uint32_t x235 = 104174U;
static volatile int32_t t53 = -677382983;
static uint64_t x237 = 1642945540371LLU;
int8_t x242 = INT8_MAX;
int8_t x249 = 61;
int8_t x250 = -1;
volatile int32_t t58 = 3839;
static volatile int32_t t59 = -86189882;
int32_t x266 = -1;
static uint32_t x267 = 18292793U;
volatile int32_t x273 = INT32_MIN;
uint32_t x274 = 499U;
int32_t x281 = INT32_MAX;
static int32_t x283 = INT32_MIN;
static int16_t x284 = 1;
static int32_t x291 = INT32_MIN;
static int32_t t66 = -3359;
uint16_t x296 = 7392U;
volatile uint32_t x299 = 3U;
static uint64_t x305 = 57602LLU;
uint32_t x306 = 234U;
static uint64_t x315 = 55976359808LLU;
uint64_t x320 = UINT64_MAX;
int32_t t73 = 46418994;
uint8_t x321 = 53U;
uint16_t x324 = UINT16_MAX;
uint64_t x343 = UINT64_MAX;
volatile int16_t x348 = -6;
int32_t x349 = 378969;
uint64_t x351 = 208LLU;
volatile int8_t x353 = -6;
int16_t x355 = INT16_MIN;
int64_t x360 = INT64_MIN;
int64_t x362 = INT64_MAX;
int64_t x363 = INT64_MIN;
volatile int32_t t84 = -1892;
static uint8_t x366 = 2U;
static volatile int32_t x368 = INT32_MIN;
volatile int16_t x369 = INT16_MIN;
uint32_t x374 = 5U;
int64_t x379 = -1879LL;
int32_t t90 = -1297;
int32_t x389 = -57836;
uint32_t x394 = 5155U;
int32_t t93 = -2131;
int64_t x403 = 27476410571805LL;
int8_t x421 = -35;
uint32_t x422 = 1U;
static int64_t x427 = 8094930610LL;
int16_t x431 = 820;
uint32_t x432 = 1089U;
int16_t x433 = 3976;
int32_t t101 = 411332134;
static int8_t x441 = -1;
static uint32_t x443 = 1813723069U;
int64_t x444 = INT64_MAX;
int16_t x458 = INT16_MIN;
int8_t x460 = -60;
int32_t t106 = -3874;
int32_t x461 = 6;
volatile uint64_t x462 = UINT64_MAX;
volatile int32_t t107 = 358000385;
int64_t x466 = INT64_MIN;
int16_t x476 = INT16_MAX;
int32_t t110 = -259909;
int8_t x477 = -1;
volatile int64_t x487 = -1LL;
int32_t x495 = INT32_MIN;
int32_t t115 = 49;
int16_t x500 = INT16_MAX;
volatile int32_t t117 = -93;
int8_t x505 = INT8_MIN;
uint8_t x508 = 4U;
uint16_t x516 = 209U;
volatile int8_t x528 = -32;
int16_t x532 = -74;
volatile int32_t t124 = -398;
volatile int8_t x539 = 13;
int32_t t126 = 4;
uint16_t x542 = 6U;
volatile int8_t x547 = INT8_MIN;
uint64_t x563 = 7669LLU;
volatile int16_t x567 = INT16_MIN;
volatile int8_t x568 = -1;
int32_t x569 = 3632608;
volatile int32_t t134 = 0;
uint32_t x580 = 129120729U;
uint16_t x586 = UINT16_MAX;
static volatile int32_t t138 = -196;
uint64_t x590 = 113958635836849221LLU;
int8_t x603 = INT8_MIN;
uint32_t x608 = 14U;
uint32_t x610 = 600168U;
int64_t x612 = INT64_MAX;
static int16_t x614 = -2426;
int8_t x622 = INT8_MAX;
int64_t x623 = INT64_MIN;
int64_t x626 = INT64_MIN;
int32_t t149 = 257448897;
int16_t x635 = INT16_MIN;
int16_t x636 = 583;
int32_t t150 = 96806271;
static volatile int32_t x643 = -13515752;
static int32_t x660 = INT32_MIN;
static int32_t x665 = 5760;
int64_t x679 = INT64_MIN;
static volatile int32_t t161 = 769;
uint8_t x682 = 27U;
int64_t x693 = -1LL;
int32_t x696 = 221;
int32_t t165 = -45739;
int8_t x698 = -1;
int8_t x699 = 3;
static int32_t x701 = INT32_MIN;
int32_t x708 = INT32_MIN;
static int64_t x713 = INT64_MIN;
int16_t x717 = -1;
volatile int32_t t171 = 2;
volatile uint16_t x729 = 17550U;
uint32_t x730 = 25062U;
int16_t x731 = INT16_MAX;
static int16_t x736 = INT16_MIN;
int32_t t175 = 1190233;
volatile int64_t x737 = 415094LL;
volatile int32_t t177 = -4678;
static int16_t x749 = INT16_MIN;
int16_t x750 = INT16_MIN;
static int32_t t182 = -626555499;
int16_t x766 = INT16_MAX;
int16_t x768 = -1;
int32_t t183 = -722337;
int8_t x778 = 36;
int64_t x781 = -1LL;
int32_t t187 = 6942782;
static uint32_t x791 = UINT32_MAX;
int16_t x798 = INT16_MIN;
volatile uint8_t x804 = 3U;
volatile int32_t t192 = 10;
static volatile int8_t x805 = INT8_MIN;
static int8_t x817 = -6;
static int32_t x820 = 54;
volatile int32_t t196 = -19727;
static volatile int32_t x827 = -1;
int64_t x831 = INT64_MIN;
uint64_t x832 = UINT64_MAX;
static int32_t x833 = 221;
int32_t t199 = -2;


void f0(void) {
    	volatile int64_t x3 = -35730227802562LL;
	static volatile uint8_t x4 = 2U;
	int32_t t0 = -202134712;

    t0 = ((x1^x2)<=(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	uint32_t x6 = UINT32_MAX;
	volatile uint32_t x7 = UINT32_MAX;
	uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 5180;

    t1 = ((x5^x6)<=(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	static uint8_t x10 = 16U;
	uint8_t x11 = UINT8_MAX;
	static uint8_t x12 = 52U;
	int32_t t2 = -6935;

    t2 = ((x9^x10)<=(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint32_t x14 = UINT32_MAX;
	int8_t x16 = -28;
	volatile int32_t t3 = 78158336;

    t3 = ((x13^x14)<=(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int8_t x18 = 3;
	static uint32_t x20 = 7468224U;
	static int32_t t4 = 12028347;

    t4 = ((x17^x18)<=(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x23 = 743LLU;
	uint64_t x24 = 1045LLU;

    t5 = ((x21^x22)<=(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint8_t x26 = 17U;
	static int64_t x27 = INT64_MAX;
	uint8_t x28 = UINT8_MAX;
	int32_t t6 = 6105890;

    t6 = ((x25^x26)<=(x27%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = 21U;
	volatile int32_t t7 = 5194688;

    t7 = ((x29^x30)<=(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = INT16_MAX;
	static int64_t x35 = INT64_MIN;
	int32_t x36 = INT32_MAX;
	volatile int32_t t8 = -2490;

    t8 = ((x33^x34)<=(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int16_t x38 = -3;
	uint16_t x39 = 5726U;
	uint8_t x40 = 1U;
	int32_t t9 = -1;

    t9 = ((x37^x38)<=(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int64_t x42 = -439550077682716803LL;
	uint32_t x43 = 1181630214U;
	volatile uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = 5;

    t10 = ((x41^x42)<=(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = INT16_MAX;
	int8_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 149372147;

    t11 = ((x49^x50)<=(x51%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1;
	int64_t x54 = INT64_MAX;
	int8_t x55 = 11;
	volatile int32_t t12 = 19998;

    t12 = ((x53^x54)<=(x55%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x58 = 0;
	int16_t x59 = 9;
	int8_t x60 = 22;
	volatile int32_t t13 = -18005623;

    t13 = ((x57^x58)<=(x59%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x62 = -1;
	static int8_t x63 = INT8_MAX;
	static int32_t t14 = -1437;

    t14 = ((x61^x62)<=(x63%x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = INT8_MIN;
	static int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MIN;

    t15 = ((x65^x66)<=(x67%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 100304673548LLU;
	volatile int16_t x70 = -1;
	volatile int32_t t16 = -1;

    t16 = ((x69^x70)<=(x71%x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x74 = 28U;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = INT64_MAX;
	static volatile int32_t t17 = -61;

    t17 = ((x73^x74)<=(x75%x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 140848U;
	uint32_t x78 = 0U;
	static uint8_t x79 = 12U;
	static volatile int64_t x80 = -50048LL;
	volatile int32_t t18 = -36654740;

    t18 = ((x77^x78)<=(x79%x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x86 = -5;
	int32_t x87 = INT32_MIN;
	static volatile int32_t t19 = 0;

    t19 = ((x85^x86)<=(x87%x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = 8;
	uint32_t x90 = UINT32_MAX;
	int64_t x92 = -235277267804LL;
	int32_t t20 = 65118021;

    t20 = ((x89^x90)<=(x91%x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 14400860038842LL;
	uint32_t x94 = 430577640U;
	uint32_t x95 = 60781658U;
	int64_t x96 = 3870LL;
	volatile int32_t t21 = 184;

    t21 = ((x93^x94)<=(x95%x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x98 = INT16_MAX;
	volatile uint32_t x99 = 2758U;
	int32_t x100 = 1;
	volatile int32_t t22 = 1844;

    t22 = ((x97^x98)<=(x99%x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x101 = INT32_MAX;
	int32_t x102 = -1;
	int16_t x103 = INT16_MIN;
	volatile int64_t x104 = INT64_MIN;

    t23 = ((x101^x102)<=(x103%x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x105 = -92847186;
	int64_t x106 = INT64_MIN;
	static int32_t x107 = INT32_MIN;
	int8_t x108 = -9;

    t24 = ((x105^x106)<=(x107%x108));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MAX;
	uint16_t x110 = 24U;
	static int8_t x111 = -63;
	volatile int32_t t25 = -306;

    t25 = ((x109^x110)<=(x111%x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x119 = -1;
	int64_t x120 = INT64_MIN;
	static volatile int32_t t26 = 10207;

    t26 = ((x117^x118)<=(x119%x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = -1;
	static int16_t x123 = -1;
	int32_t x124 = INT32_MIN;
	int32_t t27 = -13019307;

    t27 = ((x121^x122)<=(x123%x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x125 = INT16_MAX;
	int8_t x126 = -1;
	int32_t x127 = -170379;
	static int8_t x128 = 7;
	volatile int32_t t28 = -24;

    t28 = ((x125^x126)<=(x127%x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x129 = UINT16_MAX;
	int64_t x130 = -288606243LL;
	int8_t x131 = -6;
	uint32_t x132 = 1092074254U;
	int32_t t29 = 46138851;

    t29 = ((x129^x130)<=(x131%x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	static int32_t t30 = -27679;

    t30 = ((x133^x134)<=(x135%x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = -1;
	volatile int8_t x142 = -1;
	uint64_t x144 = 80500554434LLU;
	volatile int32_t t31 = -410;

    t31 = ((x141^x142)<=(x143%x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x146 = UINT64_MAX;
	int8_t x147 = 0;
	int64_t x148 = INT64_MIN;
	int32_t t32 = -21804;

    t32 = ((x145^x146)<=(x147%x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x150 = -214007669;
	int32_t x151 = -1;
	uint64_t x152 = UINT64_MAX;
	int32_t t33 = -24158031;

    t33 = ((x149^x150)<=(x151%x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = -208LL;

    t34 = ((x153^x154)<=(x155%x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = INT64_MAX;
	uint64_t x158 = 10LLU;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 382984399U;

    t35 = ((x157^x158)<=(x159%x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x162 = UINT32_MAX;
	volatile int8_t x163 = -7;
	int32_t t36 = -32;

    t36 = ((x161^x162)<=(x163%x164));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = UINT8_MAX;
	static uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;

    t37 = ((x169^x170)<=(x171%x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x173 = UINT32_MAX;
	int8_t x176 = INT8_MIN;

    t38 = ((x173^x174)<=(x175%x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x177 = 17255649470739994LL;
	int64_t x178 = 299LL;
	int8_t x179 = 1;
	uint64_t x180 = 2581622028598LLU;
	int32_t t39 = 22556;

    t39 = ((x177^x178)<=(x179%x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	int8_t x184 = 4;
	static volatile int32_t t40 = 67627375;

    t40 = ((x181^x182)<=(x183%x184));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x186 = -1;
	int8_t x187 = -1;
	int64_t x188 = INT64_MIN;
	int32_t t41 = 0;

    t41 = ((x185^x186)<=(x187%x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x189 = 2936309832529026695LLU;
	uint8_t x190 = 10U;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;

    t42 = ((x189^x190)<=(x191%x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x195 = 0;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t43 = 327;

    t43 = ((x193^x194)<=(x195%x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x197 = 6528LLU;
	int64_t x199 = INT64_MIN;
	static int8_t x200 = 1;
	static int32_t t44 = 5;

    t44 = ((x197^x198)<=(x199%x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	int8_t x203 = -1;
	static uint64_t x204 = 3064013867051LLU;
	int32_t t45 = -53358352;

    t45 = ((x201^x202)<=(x203%x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x206 = -25LL;
	int32_t x207 = -1;
	static int16_t x208 = -1;
	int32_t t46 = 2;

    t46 = ((x205^x206)<=(x207%x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	uint32_t x210 = 196984U;
	static int64_t x211 = INT64_MAX;
	static volatile int32_t x212 = INT32_MIN;
	volatile int32_t t47 = -3516655;

    t47 = ((x209^x210)<=(x211%x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x213 = 2078060622141415069LLU;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = 2649;
	int32_t t48 = -719808782;

    t48 = ((x213^x214)<=(x215%x216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MAX;
	volatile int32_t t49 = 1;

    t49 = ((x217^x218)<=(x219%x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = -1;
	int64_t x223 = 85940757952755LL;
	int32_t x224 = INT32_MIN;

    t50 = ((x221^x222)<=(x223%x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	static int32_t t51 = 40255;

    t51 = ((x225^x226)<=(x227%x228));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static uint64_t x232 = 21820223720LLU;

    t52 = ((x229^x230)<=(x231%x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = INT32_MIN;
	volatile uint16_t x236 = 12U;

    t53 = ((x233^x234)<=(x235%x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x238 = 0U;
	volatile uint8_t x239 = UINT8_MAX;
	int64_t x240 = -110651059345LL;
	int32_t t54 = 44750;

    t54 = ((x237^x238)<=(x239%x240));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x241 = -1;
	volatile uint32_t x243 = 835337633U;
	int16_t x244 = 11;
	int32_t t55 = -16808661;

    t55 = ((x241^x242)<=(x243%x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x245 = INT64_MIN;
	static int8_t x246 = -1;
	int32_t x247 = -1;
	volatile int8_t x248 = INT8_MIN;
	static int32_t t56 = 453925;

    t56 = ((x245^x246)<=(x247%x248));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x251 = 1067431670LL;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t57 = 51963;

    t57 = ((x249^x250)<=(x251%x252));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x253 = INT16_MIN;
	volatile int32_t x254 = -1;
	volatile uint64_t x255 = 2LLU;
	static volatile uint64_t x256 = 21000794021298240LLU;

    t58 = ((x253^x254)<=(x255%x256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x257 = -588LL;
	uint16_t x258 = 952U;
	int64_t x259 = -1LL;
	int8_t x260 = -1;

    t59 = ((x257^x258)<=(x259%x260));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = INT8_MIN;
	uint8_t x262 = 38U;
	int64_t x263 = INT64_MAX;
	int64_t x264 = -695682206LL;
	int32_t t60 = -33466891;

    t60 = ((x261^x262)<=(x263%x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x268 = 6;
	static int32_t t61 = -4753045;

    t61 = ((x265^x266)<=(x267%x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 217418U;
	int16_t x271 = -1;
	int64_t x272 = INT64_MIN;
	int32_t t62 = 1;

    t62 = ((x269^x270)<=(x271%x272));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x275 = INT32_MAX;
	uint64_t x276 = 2454229779555LLU;
	static int32_t t63 = 18728518;

    t63 = ((x273^x274)<=(x275%x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x277 = 8LL;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 91229704U;
	static int16_t x280 = INT16_MIN;
	int32_t t64 = 14679083;

    t64 = ((x277^x278)<=(x279%x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x282 = INT32_MAX;
	int32_t t65 = 21108;

    t65 = ((x281^x282)<=(x283%x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x289 = INT8_MIN;
	volatile int32_t x290 = 43989;
	int32_t x292 = 10347280;

    t66 = ((x289^x290)<=(x291%x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x293 = 1U;
	int64_t x294 = INT64_MAX;
	volatile uint64_t x295 = UINT64_MAX;
	static int32_t t67 = 1;

    t67 = ((x293^x294)<=(x295%x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	volatile int32_t x298 = INT32_MIN;
	int64_t x300 = -1LL;
	static volatile int32_t t68 = -576214;

    t68 = ((x297^x298)<=(x299%x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x301 = 358006LLU;
	uint8_t x302 = 0U;
	volatile int16_t x303 = INT16_MIN;
	static int16_t x304 = 5;
	static volatile int32_t t69 = 60042;

    t69 = ((x301^x302)<=(x303%x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x307 = -202;
	int64_t x308 = -12703280493676754LL;
	volatile int32_t t70 = 14;

    t70 = ((x305^x306)<=(x307%x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x309 = INT8_MIN;
	int32_t x310 = -1;
	int16_t x311 = INT16_MAX;
	int32_t x312 = 10069326;
	int32_t t71 = -944;

    t71 = ((x309^x310)<=(x311%x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x313 = INT64_MIN;
	int32_t x314 = 747507;
	int16_t x316 = INT16_MIN;
	volatile int32_t t72 = -124;

    t72 = ((x313^x314)<=(x315%x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x317 = UINT16_MAX;
	uint32_t x318 = 75426U;
	static volatile int64_t x319 = INT64_MIN;

    t73 = ((x317^x318)<=(x319%x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x322 = INT32_MIN;
	int8_t x323 = -1;
	volatile int32_t t74 = 43063785;

    t74 = ((x321^x322)<=(x323%x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -48;
	int64_t x326 = INT64_MIN;
	int8_t x327 = 0;
	int8_t x328 = -34;
	volatile int32_t t75 = -171;

    t75 = ((x325^x326)<=(x327%x328));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = INT8_MAX;
	int8_t x330 = 21;
	static int32_t x331 = 41;
	int8_t x332 = INT8_MAX;
	volatile int32_t t76 = -260549;

    t76 = ((x329^x330)<=(x331%x332));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x333 = 1632U;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 2469663U;
	int16_t x336 = -1;
	volatile int32_t t77 = -169;

    t77 = ((x333^x334)<=(x335%x336));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x337 = UINT32_MAX;
	int16_t x338 = -1;
	static volatile int64_t x339 = INT64_MIN;
	volatile int32_t x340 = INT32_MIN;
	int32_t t78 = -6;

    t78 = ((x337^x338)<=(x339%x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x341 = -1;
	volatile int8_t x342 = INT8_MIN;
	int16_t x344 = INT16_MAX;
	static volatile int32_t t79 = -3;

    t79 = ((x341^x342)<=(x343%x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	static volatile int32_t t80 = 0;

    t80 = ((x345^x346)<=(x347%x348));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x350 = INT8_MIN;
	volatile uint32_t x352 = 156U;
	volatile int32_t t81 = -1551;

    t81 = ((x349^x350)<=(x351%x352));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x354 = INT64_MIN;
	volatile uint8_t x356 = 29U;
	int32_t t82 = 15050;

    t82 = ((x353^x354)<=(x355%x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x357 = 117402;
	int64_t x358 = -1LL;
	static int16_t x359 = INT16_MIN;
	static volatile int32_t t83 = 124621444;

    t83 = ((x357^x358)<=(x359%x360));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x361 = INT64_MIN;
	volatile uint8_t x364 = UINT8_MAX;

    t84 = ((x361^x362)<=(x363%x364));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x365 = INT32_MIN;
	static uint8_t x367 = 0U;
	int32_t t85 = 538049058;

    t85 = ((x365^x366)<=(x367%x368));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x370 = INT32_MIN;
	uint16_t x371 = 9188U;
	int8_t x372 = -1;
	volatile int32_t t86 = 1;

    t86 = ((x369^x370)<=(x371%x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x373 = 38U;
	static int8_t x375 = -3;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t87 = -25;

    t87 = ((x373^x374)<=(x375%x376));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x377 = UINT32_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile uint64_t x380 = 21162LLU;
	int32_t t88 = -196024;

    t88 = ((x377^x378)<=(x379%x380));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x381 = 462U;
	int64_t x382 = -31311LL;
	volatile int64_t x383 = 6029LL;
	int16_t x384 = -157;
	volatile int32_t t89 = -4;

    t89 = ((x381^x382)<=(x383%x384));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x385 = INT32_MIN;
	static int8_t x386 = -24;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = INT8_MIN;

    t90 = ((x385^x386)<=(x387%x388));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x390 = 862;
	uint16_t x391 = 16U;
	static int8_t x392 = -1;
	int32_t t91 = -38850;

    t91 = ((x389^x390)<=(x391%x392));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x393 = INT8_MAX;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = -125103004;
	volatile int32_t t92 = 768;

    t92 = ((x393^x394)<=(x395%x396));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x397 = INT32_MAX;
	volatile int32_t x398 = INT32_MAX;
	int8_t x399 = -28;
	uint8_t x400 = 2U;

    t93 = ((x397^x398)<=(x399%x400));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x401 = -1;
	static int32_t x402 = INT32_MIN;
	static uint16_t x404 = 23U;
	int32_t t94 = -1363210;

    t94 = ((x401^x402)<=(x403%x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x405 = UINT8_MAX;
	static int64_t x406 = 1200377742038621LL;
	uint64_t x407 = UINT64_MAX;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t95 = -7;

    t95 = ((x405^x406)<=(x407%x408));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x409 = INT8_MAX;
	static int64_t x410 = INT64_MIN;
	static uint16_t x411 = 3U;
	volatile int32_t x412 = INT32_MAX;
	int32_t t96 = -505;

    t96 = ((x409^x410)<=(x411%x412));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x413 = -1;
	volatile int8_t x414 = -2;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MAX;
	int32_t t97 = -44;

    t97 = ((x413^x414)<=(x415%x416));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x423 = INT32_MIN;
	static int8_t x424 = -1;
	int32_t t98 = -253281;

    t98 = ((x421^x422)<=(x423%x424));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x425 = -1;
	static volatile int16_t x426 = -1;
	int8_t x428 = -1;
	volatile int32_t t99 = -7;

    t99 = ((x425^x426)<=(x427%x428));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x429 = INT64_MIN;
	int64_t x430 = -1LL;
	volatile int32_t t100 = -26;

    t100 = ((x429^x430)<=(x431%x432));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x434 = 92912699;
	volatile int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MAX;

    t101 = ((x433^x434)<=(x435%x436));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x437 = 83679291;
	uint16_t x438 = 7U;
	uint16_t x439 = 53U;
	static volatile int8_t x440 = INT8_MIN;
	volatile int32_t t102 = -19619338;

    t102 = ((x437^x438)<=(x439%x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x442 = INT64_MIN;
	static int32_t t103 = -14911;

    t103 = ((x441^x442)<=(x443%x444));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x445 = UINT32_MAX;
	volatile int32_t x446 = -1;
	static int32_t x447 = INT32_MIN;
	static int8_t x448 = -4;
	volatile int32_t t104 = 29630;

    t104 = ((x445^x446)<=(x447%x448));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x449 = -1;
	int32_t x450 = INT32_MIN;
	int16_t x451 = -246;
	static uint16_t x452 = UINT16_MAX;
	int32_t t105 = -42611585;

    t105 = ((x449^x450)<=(x451%x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = INT32_MIN;
	uint16_t x459 = UINT16_MAX;

    t106 = ((x457^x458)<=(x459%x460));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x463 = INT32_MIN;
	int64_t x464 = -1LL;

    t107 = ((x461^x462)<=(x463%x464));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x465 = INT8_MIN;
	volatile int8_t x467 = INT8_MIN;
	volatile uint64_t x468 = UINT64_MAX;
	int32_t t108 = 0;

    t108 = ((x465^x466)<=(x467%x468));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x470 = -13153135185LL;
	static int8_t x471 = INT8_MIN;
	uint16_t x472 = UINT16_MAX;
	int32_t t109 = -2401;

    t109 = ((x469^x470)<=(x471%x472));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int8_t x474 = 0;
	int16_t x475 = -1;

    t110 = ((x473^x474)<=(x475%x476));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x478 = -5539000931644837LL;
	uint32_t x479 = 977U;
	int32_t x480 = -1;
	volatile int32_t t111 = 616;

    t111 = ((x477^x478)<=(x479%x480));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x481 = 46U;
	int8_t x482 = INT8_MAX;
	static volatile uint64_t x483 = 7241LLU;
	int32_t x484 = -922;
	int32_t t112 = -325842;

    t112 = ((x481^x482)<=(x483%x484));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x485 = INT8_MAX;
	int8_t x486 = INT8_MAX;
	uint64_t x488 = 847082608LLU;
	int32_t t113 = 170275;

    t113 = ((x485^x486)<=(x487%x488));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x489 = 22U;
	int8_t x490 = INT8_MIN;
	volatile int64_t x491 = INT64_MIN;
	volatile int64_t x492 = INT64_MAX;
	volatile int32_t t114 = -166164189;

    t114 = ((x489^x490)<=(x491%x492));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x493 = -1;
	static uint32_t x494 = 4407645U;
	volatile int16_t x496 = INT16_MAX;

    t115 = ((x493^x494)<=(x495%x496));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x497 = 4508U;
	uint8_t x498 = 3U;
	static int16_t x499 = -1;
	int32_t t116 = 2396;

    t116 = ((x497^x498)<=(x499%x500));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	static uint8_t x503 = 30U;
	int64_t x504 = INT64_MIN;

    t117 = ((x501^x502)<=(x503%x504));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x506 = -209237999950946614LL;
	static int64_t x507 = INT64_MIN;
	volatile int32_t t118 = 1;

    t118 = ((x505^x506)<=(x507%x508));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x509 = 39583U;
	int64_t x510 = INT64_MIN;
	volatile uint64_t x511 = 918867796234863LLU;
	int64_t x512 = -1LL;
	volatile int32_t t119 = 165;

    t119 = ((x509^x510)<=(x511%x512));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x513 = 2271830695656LLU;
	static int32_t x514 = INT32_MIN;
	volatile int32_t x515 = INT32_MIN;
	int32_t t120 = 2648;

    t120 = ((x513^x514)<=(x515%x516));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x517 = 19871U;
	int32_t x518 = -1471;
	uint8_t x519 = 0U;
	int32_t x520 = 17006;
	static int32_t t121 = 498642653;

    t121 = ((x517^x518)<=(x519%x520));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = INT64_MIN;
	int8_t x522 = 36;
	uint32_t x523 = 968955U;
	static volatile uint8_t x524 = 32U;
	int32_t t122 = -1109;

    t122 = ((x521^x522)<=(x523%x524));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = INT32_MAX;
	volatile int8_t x526 = -3;
	uint64_t x527 = UINT64_MAX;
	static volatile int32_t t123 = 0;

    t123 = ((x525^x526)<=(x527%x528));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x529 = -1;
	int16_t x530 = -1;
	int64_t x531 = INT64_MIN;

    t124 = ((x529^x530)<=(x531%x532));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = -1;
	int8_t x535 = INT8_MAX;
	uint8_t x536 = 3U;
	int32_t t125 = 393953207;

    t125 = ((x533^x534)<=(x535%x536));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x537 = INT16_MAX;
	static int8_t x538 = INT8_MAX;
	volatile int32_t x540 = INT32_MIN;

    t126 = ((x537^x538)<=(x539%x540));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x541 = INT8_MIN;
	volatile int16_t x543 = INT16_MAX;
	uint16_t x544 = 694U;
	volatile int32_t t127 = 1;

    t127 = ((x541^x542)<=(x543%x544));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x545 = -1;
	static uint32_t x546 = 19U;
	int64_t x548 = -155499549932LL;
	int32_t t128 = -5393664;

    t128 = ((x545^x546)<=(x547%x548));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x549 = 0;
	int8_t x550 = INT8_MIN;
	uint32_t x551 = UINT32_MAX;
	int16_t x552 = INT16_MIN;
	volatile int32_t t129 = 271;

    t129 = ((x549^x550)<=(x551%x552));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x553 = 27U;
	int32_t x554 = INT32_MAX;
	int16_t x555 = 1;
	int8_t x556 = INT8_MIN;
	volatile int32_t t130 = -1;

    t130 = ((x553^x554)<=(x555%x556));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x557 = 209U;
	static volatile int8_t x558 = -1;
	uint64_t x559 = 3LLU;
	int16_t x560 = -1;
	static volatile int32_t t131 = -1;

    t131 = ((x557^x558)<=(x559%x560));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x561 = 0U;
	int8_t x562 = INT8_MIN;
	int16_t x564 = 1013;
	int32_t t132 = -467971070;

    t132 = ((x561^x562)<=(x563%x564));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x565 = 703634U;
	volatile int32_t x566 = -1;
	int32_t t133 = -68895;

    t133 = ((x565^x566)<=(x567%x568));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x570 = UINT32_MAX;
	uint16_t x571 = 16409U;
	volatile int32_t x572 = 76321;

    t134 = ((x569^x570)<=(x571%x572));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x573 = -252332910427627LL;
	static uint64_t x574 = 0LLU;
	static int8_t x575 = -34;
	int8_t x576 = -18;
	volatile int32_t t135 = -73;

    t135 = ((x573^x574)<=(x575%x576));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x577 = 32642U;
	int64_t x578 = INT64_MIN;
	int8_t x579 = INT8_MIN;
	volatile int32_t t136 = 3489919;

    t136 = ((x577^x578)<=(x579%x580));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x581 = INT32_MAX;
	int32_t x582 = 52006;
	uint8_t x583 = UINT8_MAX;
	static int16_t x584 = -1;
	volatile int32_t t137 = -103;

    t137 = ((x581^x582)<=(x583%x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = 13172;
	static uint32_t x587 = 14107737U;
	int32_t x588 = 11;

    t138 = ((x585^x586)<=(x587%x588));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x589 = INT64_MAX;
	static uint16_t x591 = 366U;
	uint64_t x592 = 527874LLU;
	int32_t t139 = 1149;

    t139 = ((x589^x590)<=(x591%x592));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x593 = INT8_MIN;
	volatile uint32_t x594 = 298914809U;
	static int64_t x595 = INT64_MAX;
	static volatile int8_t x596 = INT8_MIN;
	static int32_t t140 = -777239942;

    t140 = ((x593^x594)<=(x595%x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x597 = UINT64_MAX;
	volatile int8_t x598 = -1;
	int32_t x599 = -1005914003;
	static int32_t x600 = -6074484;
	int32_t t141 = 1557;

    t141 = ((x597^x598)<=(x599%x600));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x601 = INT64_MIN;
	int16_t x602 = INT16_MIN;
	int64_t x604 = INT64_MIN;
	int32_t t142 = -6;

    t142 = ((x601^x602)<=(x603%x604));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x605 = -456;
	int16_t x606 = INT16_MIN;
	uint8_t x607 = 55U;
	static int32_t t143 = 4725;

    t143 = ((x605^x606)<=(x607%x608));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x609 = 15931037085LL;
	static int16_t x611 = INT16_MIN;
	int32_t t144 = 58324639;

    t144 = ((x609^x610)<=(x611%x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x613 = UINT8_MAX;
	uint16_t x615 = 257U;
	int64_t x616 = -29157166LL;
	int32_t t145 = 337899;

    t145 = ((x613^x614)<=(x615%x616));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x617 = INT32_MIN;
	uint8_t x618 = 5U;
	static int8_t x619 = -1;
	int8_t x620 = INT8_MIN;
	int32_t t146 = -31;

    t146 = ((x617^x618)<=(x619%x620));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x621 = 0;
	uint8_t x624 = 1U;
	static volatile int32_t t147 = -1758193;

    t147 = ((x621^x622)<=(x623%x624));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x625 = -1953;
	uint16_t x627 = 128U;
	uint8_t x628 = 7U;
	volatile int32_t t148 = -132834242;

    t148 = ((x625^x626)<=(x627%x628));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x629 = 25294298U;
	volatile int8_t x630 = -1;
	uint8_t x631 = 0U;
	int8_t x632 = -1;

    t149 = ((x629^x630)<=(x631%x632));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x633 = -1;
	uint64_t x634 = UINT64_MAX;

    t150 = ((x633^x634)<=(x635%x636));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x637 = INT64_MIN;
	uint64_t x638 = UINT64_MAX;
	static int64_t x639 = -15048191775134LL;
	int64_t x640 = -10811217726188LL;
	volatile int32_t t151 = -6930759;

    t151 = ((x637^x638)<=(x639%x640));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x641 = UINT16_MAX;
	uint64_t x642 = 1859426385170LLU;
	static uint8_t x644 = 119U;
	static int32_t t152 = 15024;

    t152 = ((x641^x642)<=(x643%x644));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x645 = INT16_MIN;
	int32_t x646 = -1;
	uint32_t x647 = UINT32_MAX;
	uint16_t x648 = 23235U;
	volatile int32_t t153 = 318059209;

    t153 = ((x645^x646)<=(x647%x648));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x649 = -1;
	int64_t x650 = -1LL;
	static int32_t x651 = INT32_MIN;
	uint64_t x652 = 10643LLU;
	volatile int32_t t154 = -262507154;

    t154 = ((x649^x650)<=(x651%x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = -1LL;
	static uint64_t x654 = UINT64_MAX;
	volatile int64_t x655 = -5LL;
	volatile int64_t x656 = INT64_MAX;
	volatile int32_t t155 = -9;

    t155 = ((x653^x654)<=(x655%x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x657 = UINT8_MAX;
	static int32_t x658 = -1;
	static int32_t x659 = 50;
	int32_t t156 = -1;

    t156 = ((x657^x658)<=(x659%x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x661 = INT32_MIN;
	volatile int32_t x662 = -1;
	static int16_t x663 = -1;
	int16_t x664 = INT16_MAX;
	int32_t t157 = 45617;

    t157 = ((x661^x662)<=(x663%x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x666 = INT16_MIN;
	volatile int8_t x667 = INT8_MIN;
	uint64_t x668 = 4069428LLU;
	int32_t t158 = -82840;

    t158 = ((x665^x666)<=(x667%x668));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x669 = 0U;
	uint32_t x670 = 1198196U;
	static volatile int64_t x671 = INT64_MIN;
	uint16_t x672 = UINT16_MAX;
	int32_t t159 = -15914520;

    t159 = ((x669^x670)<=(x671%x672));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x673 = -7339041LL;
	static int64_t x674 = INT64_MAX;
	int8_t x675 = INT8_MIN;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t160 = 10604;

    t160 = ((x673^x674)<=(x675%x676));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x677 = 28751756652LLU;
	volatile int8_t x678 = 1;
	static volatile uint64_t x680 = 88444490829173LLU;

    t161 = ((x677^x678)<=(x679%x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x681 = 51U;
	int8_t x683 = 6;
	int16_t x684 = -1;
	int32_t t162 = -1;

    t162 = ((x681^x682)<=(x683%x684));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x685 = INT32_MIN;
	static int8_t x686 = 2;
	static int8_t x687 = INT8_MIN;
	int8_t x688 = -1;
	int32_t t163 = 234637453;

    t163 = ((x685^x686)<=(x687%x688));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x689 = 44402715LL;
	int32_t x690 = 62;
	static volatile uint8_t x691 = 114U;
	int32_t x692 = INT32_MIN;
	int32_t t164 = -30192;

    t164 = ((x689^x690)<=(x691%x692));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x694 = -1LL;
	int8_t x695 = 0;

    t165 = ((x693^x694)<=(x695%x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x697 = -202;
	int32_t x700 = INT32_MAX;
	int32_t t166 = -1;

    t166 = ((x697^x698)<=(x699%x700));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x702 = 91144207U;
	static int64_t x703 = -1LL;
	uint32_t x704 = UINT32_MAX;
	int32_t t167 = 1794;

    t167 = ((x701^x702)<=(x703%x704));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x705 = 2U;
	static int16_t x706 = -37;
	int32_t x707 = INT32_MIN;
	static int32_t t168 = -11667;

    t168 = ((x705^x706)<=(x707%x708));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x709 = UINT16_MAX;
	static int8_t x710 = -1;
	static int64_t x711 = -1LL;
	uint32_t x712 = 398626U;
	int32_t t169 = -10364760;

    t169 = ((x709^x710)<=(x711%x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x714 = 3281U;
	volatile int32_t x715 = INT32_MIN;
	volatile int8_t x716 = INT8_MAX;
	int32_t t170 = -19957455;

    t170 = ((x713^x714)<=(x715%x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x718 = INT16_MAX;
	int16_t x719 = INT16_MIN;
	uint32_t x720 = UINT32_MAX;

    t171 = ((x717^x718)<=(x719%x720));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x721 = 23382318744592390LLU;
	static int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MAX;
	uint8_t x724 = UINT8_MAX;
	static volatile int32_t t172 = 183;

    t172 = ((x721^x722)<=(x723%x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x725 = 0;
	uint8_t x726 = 2U;
	static uint8_t x727 = UINT8_MAX;
	uint64_t x728 = 5774977476500LLU;
	int32_t t173 = -1;

    t173 = ((x725^x726)<=(x727%x728));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x732 = -1;
	static volatile int32_t t174 = 859;

    t174 = ((x729^x730)<=(x731%x732));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x733 = 123U;
	static volatile int64_t x734 = INT64_MIN;
	static int64_t x735 = INT64_MAX;

    t175 = ((x733^x734)<=(x735%x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x738 = -87529;
	int64_t x739 = -376LL;
	int32_t x740 = -1;
	static int32_t t176 = -312014072;

    t176 = ((x737^x738)<=(x739%x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x741 = INT64_MAX;
	static uint16_t x742 = 6U;
	static int8_t x743 = INT8_MIN;
	static int32_t x744 = 750880;

    t177 = ((x741^x742)<=(x743%x744));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x745 = UINT64_MAX;
	int32_t x746 = INT32_MIN;
	int32_t x747 = -1;
	volatile uint16_t x748 = 10U;
	volatile int32_t t178 = 62;

    t178 = ((x745^x746)<=(x747%x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x751 = 209LLU;
	int16_t x752 = INT16_MIN;
	int32_t t179 = -7355;

    t179 = ((x749^x750)<=(x751%x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x753 = UINT64_MAX;
	int8_t x754 = 0;
	int8_t x755 = -1;
	int32_t x756 = -1;
	int32_t t180 = -219355;

    t180 = ((x753^x754)<=(x755%x756));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile int16_t x758 = INT16_MAX;
	static uint16_t x759 = 1592U;
	int8_t x760 = INT8_MAX;
	volatile int32_t t181 = 545676688;

    t181 = ((x757^x758)<=(x759%x760));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x761 = INT16_MAX;
	volatile int8_t x762 = 1;
	uint16_t x763 = 53U;
	int8_t x764 = -1;

    t182 = ((x761^x762)<=(x763%x764));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = -1;
	volatile int8_t x767 = INT8_MIN;

    t183 = ((x765^x766)<=(x767%x768));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x769 = -1;
	int32_t x770 = INT32_MAX;
	static int64_t x771 = -63713109LL;
	static int64_t x772 = 53515665970808LL;
	int32_t t184 = 1068155115;

    t184 = ((x769^x770)<=(x771%x772));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x773 = INT64_MAX;
	int16_t x774 = INT16_MIN;
	int8_t x775 = 8;
	uint64_t x776 = UINT64_MAX;
	int32_t t185 = 201;

    t185 = ((x773^x774)<=(x775%x776));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile uint16_t x779 = UINT16_MAX;
	int64_t x780 = 205302LL;
	int32_t t186 = -813418352;

    t186 = ((x777^x778)<=(x779%x780));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x782 = INT32_MIN;
	int64_t x783 = 12692260LL;
	uint16_t x784 = UINT16_MAX;

    t187 = ((x781^x782)<=(x783%x784));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x785 = INT16_MIN;
	static int64_t x786 = INT64_MIN;
	int8_t x787 = -2;
	int32_t x788 = 315;
	volatile int32_t t188 = 41942371;

    t188 = ((x785^x786)<=(x787%x788));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x789 = INT64_MAX;
	uint32_t x790 = 190944131U;
	uint16_t x792 = 110U;
	static int32_t t189 = 33380243;

    t189 = ((x789^x790)<=(x791%x792));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x793 = INT64_MAX;
	uint32_t x794 = UINT32_MAX;
	static int8_t x795 = INT8_MAX;
	static uint16_t x796 = 6513U;
	int32_t t190 = -817296;

    t190 = ((x793^x794)<=(x795%x796));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x797 = 91U;
	int8_t x799 = INT8_MIN;
	static uint64_t x800 = UINT64_MAX;
	static volatile int32_t t191 = -98812;

    t191 = ((x797^x798)<=(x799%x800));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x801 = INT16_MIN;
	int32_t x802 = -1;
	volatile uint8_t x803 = UINT8_MAX;

    t192 = ((x801^x802)<=(x803%x804));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint8_t x806 = 0U;
	int16_t x807 = INT16_MIN;
	int16_t x808 = INT16_MIN;
	volatile int32_t t193 = -22;

    t193 = ((x805^x806)<=(x807%x808));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x809 = -63;
	static uint32_t x810 = 23U;
	uint16_t x811 = 17U;
	uint32_t x812 = 1019861U;
	volatile int32_t t194 = -425610549;

    t194 = ((x809^x810)<=(x811%x812));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x818 = INT16_MIN;
	int64_t x819 = INT64_MAX;
	static volatile int32_t t195 = 18;

    t195 = ((x817^x818)<=(x819%x820));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x821 = INT32_MIN;
	uint64_t x822 = 211356LLU;
	volatile int16_t x823 = INT16_MIN;
	static int8_t x824 = INT8_MAX;

    t196 = ((x821^x822)<=(x823%x824));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x825 = 1130998998487657646LLU;
	int64_t x826 = INT64_MAX;
	uint16_t x828 = 490U;
	static volatile int32_t t197 = 17694;

    t197 = ((x825^x826)<=(x827%x828));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x829 = -1;
	static volatile uint64_t x830 = 1002395LLU;
	int32_t t198 = -31546;

    t198 = ((x829^x830)<=(x831%x832));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x834 = UINT16_MAX;
	volatile int8_t x835 = -1;
	uint8_t x836 = 11U;

    t199 = ((x833^x834)<=(x835%x836));

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

