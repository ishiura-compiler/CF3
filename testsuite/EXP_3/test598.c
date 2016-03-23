
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

static uint8_t x1 = 0U;
int8_t x3 = -1;
uint16_t x5 = 27709U;
static int32_t t1 = -7408;
volatile uint32_t x16 = 82U;
volatile int32_t t4 = 3032;
int32_t x31 = INT32_MIN;
static int16_t x36 = 3;
int8_t x38 = INT8_MIN;
int8_t x40 = -1;
int32_t t10 = -62359729;
int8_t x54 = INT8_MIN;
uint16_t x55 = 13587U;
int8_t x58 = INT8_MIN;
int32_t t13 = -112;
static volatile int32_t x61 = INT32_MIN;
volatile uint8_t x62 = 23U;
uint16_t x66 = 58U;
int32_t x67 = INT32_MAX;
int64_t x78 = -1LL;
int64_t x79 = -1LL;
uint32_t x80 = UINT32_MAX;
int32_t t16 = -2489;
uint16_t x84 = 16808U;
static int32_t t17 = 6;
int32_t x88 = INT32_MIN;
int8_t x93 = INT8_MIN;
int8_t x95 = -1;
int32_t t21 = -138752466;
static int32_t t22 = 796;
volatile int64_t x107 = -1LL;
volatile int16_t x109 = -341;
int16_t x110 = INT16_MIN;
int32_t t24 = 7338;
static int16_t x114 = INT16_MAX;
volatile int16_t x115 = INT16_MIN;
int64_t x118 = INT64_MIN;
int8_t x120 = INT8_MIN;
volatile int32_t t26 = 90665260;
int8_t x137 = 1;
static uint32_t x143 = 399U;
int16_t x145 = -2;
uint8_t x155 = UINT8_MAX;
uint64_t x166 = 1135177154LLU;
uint32_t x174 = 900U;
int16_t x181 = INT16_MIN;
int64_t x184 = 3334328021LL;
int32_t t39 = -653280084;
static int64_t x189 = -1LL;
uint32_t x194 = 31U;
int32_t t41 = -329;
int16_t x200 = -408;
static volatile int32_t t42 = 1429;
int32_t x203 = INT32_MIN;
volatile int64_t x204 = -1637698669104301LL;
static int16_t x216 = -1;
static int32_t t44 = 394369;
int16_t x218 = 9;
volatile int16_t x222 = INT16_MAX;
uint64_t x225 = 65133LLU;
int32_t t47 = -4519530;
int64_t x241 = 6443381560LL;
static volatile uint64_t x245 = 2860486LLU;
uint64_t x249 = 3437542LLU;
int32_t x252 = 130700;
static int8_t x260 = -1;
int32_t t57 = 1;
uint64_t x279 = 12LLU;
static volatile int32_t t60 = 175480949;
static volatile uint16_t x298 = 840U;
volatile uint64_t x301 = 41464962037565011LLU;
uint8_t x305 = 38U;
volatile int32_t t65 = 9;
int64_t x318 = INT64_MIN;
volatile uint8_t x320 = 12U;
int64_t x321 = 274845LL;
uint32_t x324 = UINT32_MAX;
uint16_t x325 = 7U;
uint32_t x328 = 98U;
volatile int32_t t69 = -931974996;
static uint8_t x336 = 62U;
int16_t x341 = -4;
uint16_t x344 = 52U;
int16_t x356 = INT16_MIN;
volatile int32_t t74 = -207;
uint32_t x363 = 6943U;
int32_t x366 = 780218;
volatile uint32_t x380 = UINT32_MAX;
static int32_t t79 = -2;
uint32_t x390 = 2024944478U;
int32_t x392 = -1;
int32_t x394 = INT32_MAX;
int64_t x396 = INT64_MIN;
volatile int32_t t82 = -4093;
int64_t x419 = INT64_MAX;
int64_t x437 = -12424524862699795LL;
uint8_t x449 = 0U;
int32_t x450 = INT32_MIN;
volatile int64_t x451 = 2755219055377039314LL;
volatile int32_t t90 = -4;
static int8_t x457 = INT8_MAX;
static uint32_t x460 = 47883602U;
static int32_t t92 = 210602143;
uint64_t x464 = 579LLU;
int16_t x472 = 83;
int64_t x480 = INT64_MIN;
int64_t x481 = 77LL;
static uint64_t x482 = UINT64_MAX;
int64_t x483 = INT64_MAX;
uint16_t x484 = UINT16_MAX;
int64_t x486 = 249653280LL;
int16_t x488 = -1;
int8_t x496 = INT8_MIN;
int64_t x498 = INT64_MIN;
int16_t x500 = INT16_MIN;
static int64_t x502 = 5235807LL;
volatile int8_t x503 = -1;
volatile int32_t t103 = -106981534;
volatile int8_t x519 = -1;
int64_t x523 = -19624636121501838LL;
uint32_t x525 = 12294U;
static volatile int32_t t106 = 24878;
int8_t x533 = -1;
int32_t x535 = -1;
int16_t x538 = -8683;
volatile int32_t t109 = -3;
int8_t x543 = INT8_MIN;
int16_t x554 = -1;
volatile int16_t x555 = -2;
static int32_t t113 = 58;
uint32_t x567 = 9755U;
static uint64_t x569 = 5070400772216158025LLU;
uint32_t x581 = UINT32_MAX;
int64_t x588 = INT64_MIN;
int64_t x595 = -69916LL;
static uint8_t x596 = 110U;
int32_t t120 = -9;
int16_t x599 = INT16_MIN;
int16_t x600 = -3754;
volatile int32_t t121 = 10491815;
volatile uint32_t x610 = 220589U;
int32_t t125 = 11;
volatile uint8_t x621 = UINT8_MAX;
int64_t x628 = -1012LL;
volatile int32_t x634 = 7;
volatile int64_t x635 = -1LL;
static volatile int32_t t129 = 48618891;
volatile int8_t x649 = INT8_MIN;
static volatile int64_t x652 = -1LL;
int16_t x653 = 16127;
volatile int32_t t134 = -641687;
int32_t x667 = INT32_MIN;
static uint16_t x670 = UINT16_MAX;
static int64_t x674 = -1LL;
uint16_t x675 = 28573U;
volatile int32_t t138 = 470658;
volatile int32_t t139 = 3791309;
int8_t x701 = 1;
volatile uint64_t x708 = UINT64_MAX;
volatile int32_t x710 = 21501;
volatile int16_t x711 = -1708;
volatile int32_t t145 = 9;
int64_t x718 = -1LL;
int64_t x719 = INT64_MIN;
volatile uint64_t x722 = 11LLU;
int16_t x728 = INT16_MIN;
uint16_t x738 = 3913U;
int16_t x739 = INT16_MIN;
int32_t t152 = 4851;
int64_t x746 = -2062408333230381LL;
int32_t t153 = 305;
int16_t x754 = INT16_MIN;
int64_t x758 = -25533149LL;
int16_t x759 = -14344;
uint64_t x760 = UINT64_MAX;
int16_t x771 = INT16_MIN;
int32_t x784 = 1577;
static int32_t x790 = 24563982;
int16_t x791 = -1;
int32_t t159 = -3671583;
int16_t x800 = INT16_MIN;
volatile int64_t x809 = 6LL;
int16_t x815 = 1254;
int32_t x817 = -1;
uint16_t x824 = UINT16_MAX;
uint64_t x829 = 11426808100522389LLU;
static int32_t t166 = -1563242;
uint32_t x845 = 18U;
volatile int32_t t169 = -8;
static int32_t x851 = INT32_MIN;
volatile int32_t t170 = -7375913;
static volatile int8_t x855 = 0;
int64_t x859 = INT64_MIN;
volatile uint16_t x873 = 55U;
uint8_t x874 = 0U;
uint8_t x876 = 6U;
uint32_t x877 = 444176U;
static int32_t t176 = 4049;
int32_t t177 = 325266;
uint32_t x885 = 2112U;
volatile int32_t t178 = -1;
int16_t x891 = INT16_MIN;
volatile uint64_t x896 = UINT64_MAX;
volatile int32_t t180 = -1;
int16_t x897 = -1;
int64_t x901 = -1LL;
int64_t x903 = -1LL;
static int32_t x904 = INT32_MIN;
uint64_t x907 = UINT64_MAX;
uint8_t x916 = 1U;
static int8_t x917 = -5;
volatile int8_t x918 = INT8_MIN;
volatile uint8_t x920 = 35U;
int8_t x926 = -1;
int32_t t187 = 106;
static uint32_t x934 = UINT32_MAX;
uint16_t x935 = 1996U;
int32_t x945 = INT32_MIN;
int8_t x946 = INT8_MAX;
static uint64_t x948 = UINT64_MAX;
int32_t t191 = -1;
int8_t x959 = 2;
volatile int64_t x969 = 3649950975LL;
uint32_t x970 = 143590U;
uint8_t x971 = 7U;
int64_t x974 = -1LL;
volatile int32_t t194 = 1161789;
int32_t x985 = -10642;
static uint8_t x986 = 2U;
int64_t x987 = INT64_MAX;
int32_t x989 = INT32_MIN;
int32_t x992 = INT32_MAX;
uint64_t x1002 = 380238461400LLU;
int32_t x1003 = -1145313;
volatile int32_t t198 = 6238320;


void f0(void) {
    	int16_t x2 = -1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 3498841;

    t0 = ((x1+x2)<=(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = -1LL;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = -1;

    t1 = ((x5+x6)<=(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = 202135LLU;
	int32_t x11 = INT32_MAX;
	int8_t x12 = -1;
	int32_t t2 = -3;

    t2 = ((x9+x10)<=(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 252926677761745LLU;
	int64_t x14 = -4181921407208LL;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = -1;

    t3 = ((x13+x14)<=(x15/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 7553387552LLU;
	static uint8_t x22 = 0U;
	int16_t x23 = -1;
	static volatile int16_t x24 = -26;

    t4 = ((x21+x22)<=(x23/x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x25 = -83880559;
	static int8_t x26 = -3;
	static volatile uint16_t x27 = 118U;
	volatile int64_t x28 = -1LL;
	int32_t t5 = 200;

    t5 = ((x25+x26)<=(x27/x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -1LL;
	int64_t x30 = -68LL;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 3503362;

    t6 = ((x29+x30)<=(x31/x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 7U;
	int16_t x34 = 1;
	int32_t x35 = -1;
	volatile int32_t t7 = 3;

    t7 = ((x33+x34)<=(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	int32_t t8 = -736;

    t8 = ((x37+x38)<=(x39/x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	static int16_t x43 = INT16_MAX;
	int16_t x44 = -11;
	static volatile int32_t t9 = -11073;

    t9 = ((x41+x42)<=(x43/x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MAX;
	int16_t x46 = -4;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = -1;

    t10 = ((x45+x46)<=(x47/x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = -1;
	static int8_t x50 = -38;
	int32_t x51 = INT32_MAX;
	int32_t x52 = INT32_MIN;
	int32_t t11 = -2861509;

    t11 = ((x49+x50)<=(x51/x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 48317046LLU;
	volatile uint32_t x56 = UINT32_MAX;
	int32_t t12 = 349649;

    t12 = ((x53+x54)<=(x55/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MAX;
	uint32_t x59 = UINT32_MAX;
	static int32_t x60 = INT32_MAX;

    t13 = ((x57+x58)<=(x59/x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x63 = 1LL;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = -16458086;

    t14 = ((x61+x62)<=(x63/x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	int32_t x68 = 257904172;
	int32_t t15 = -7015327;

    t15 = ((x65+x66)<=(x67/x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = UINT64_MAX;

    t16 = ((x77+x78)<=(x79/x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x81 = INT32_MIN;
	static int16_t x82 = INT16_MAX;
	int32_t x83 = 453186640;

    t17 = ((x81+x82)<=(x83/x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = INT32_MIN;
	static int32_t x86 = INT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	static volatile int32_t t18 = -64933666;

    t18 = ((x85+x86)<=(x87/x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x89 = 22423349257536LLU;
	int32_t x90 = INT32_MAX;
	static int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = 3;

    t19 = ((x89+x90)<=(x91/x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x94 = 338612691565759249LLU;
	int16_t x96 = 12395;
	int32_t t20 = -2;

    t20 = ((x93+x94)<=(x95/x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MIN;
	static int64_t x98 = -1LL;
	int32_t x99 = INT32_MAX;
	volatile uint64_t x100 = 179444435728760LLU;

    t21 = ((x97+x98)<=(x99/x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x101 = -1;
	int32_t x102 = 0;
	uint32_t x103 = UINT32_MAX;
	volatile int16_t x104 = INT16_MIN;

    t22 = ((x101+x102)<=(x103/x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x105 = INT16_MIN;
	static uint8_t x106 = 3U;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t23 = 432457010;

    t23 = ((x105+x106)<=(x107/x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x111 = INT64_MIN;
	int16_t x112 = 4;

    t24 = ((x109+x110)<=(x111/x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -1;
	volatile int64_t x116 = INT64_MIN;
	int32_t t25 = -22303;

    t25 = ((x113+x114)<=(x115/x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x117 = INT64_MAX;
	int16_t x119 = 10;

    t26 = ((x117+x118)<=(x119/x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x133 = 5LLU;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MIN;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t27 = 26114062;

    t27 = ((x133+x134)<=(x135/x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x138 = INT16_MIN;
	uint64_t x139 = 32644502670170LLU;
	static int8_t x140 = -3;
	int32_t t28 = 22;

    t28 = ((x137+x138)<=(x139/x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = -1LL;
	int8_t x142 = -1;
	uint8_t x144 = 1U;
	int32_t t29 = -26823;

    t29 = ((x141+x142)<=(x143/x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x146 = 17U;
	static int64_t x147 = -419LL;
	uint32_t x148 = 4U;
	int32_t t30 = 238722;

    t30 = ((x145+x146)<=(x147/x148));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x153 = INT64_MIN;
	uint32_t x154 = 769680U;
	uint32_t x156 = 36919871U;
	int32_t t31 = -47;

    t31 = ((x153+x154)<=(x155/x156));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x157 = 2893815450LL;
	int64_t x158 = 39LL;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	static int32_t t32 = -5416;

    t32 = ((x157+x158)<=(x159/x160));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = INT8_MIN;
	static uint8_t x162 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MIN;
	static volatile int32_t t33 = -97493733;

    t33 = ((x161+x162)<=(x163/x164));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	static uint8_t x168 = 1U;
	static int32_t t34 = -1844482;

    t34 = ((x165+x166)<=(x167/x168));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = -57;
	int8_t x170 = -36;
	static volatile uint64_t x171 = 1LLU;
	static volatile int8_t x172 = -1;
	int32_t t35 = -74180055;

    t35 = ((x169+x170)<=(x171/x172));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x175 = INT16_MAX;
	int32_t x176 = 3696;
	volatile int32_t t36 = 8377453;

    t36 = ((x173+x174)<=(x175/x176));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x177 = UINT16_MAX;
	volatile int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	int8_t x180 = -1;
	int32_t t37 = 3;

    t37 = ((x177+x178)<=(x179/x180));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x182 = UINT32_MAX;
	volatile int16_t x183 = INT16_MIN;
	volatile int32_t t38 = 11;

    t38 = ((x181+x182)<=(x183/x184));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = -13256868636001958LL;
	static int8_t x186 = INT8_MIN;
	int64_t x187 = INT64_MAX;
	volatile uint32_t x188 = 3657U;

    t39 = ((x185+x186)<=(x187/x188));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x190 = -1LL;
	int32_t x191 = -175011;
	int16_t x192 = -1;
	int32_t t40 = -11937;

    t40 = ((x189+x190)<=(x191/x192));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x193 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

    t41 = ((x193+x194)<=(x195/x196));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	static volatile int64_t x199 = 2163541037454468LL;

    t42 = ((x197+x198)<=(x199/x200));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x201 = UINT32_MAX;
	volatile int32_t x202 = INT32_MIN;
	volatile int32_t t43 = -715740422;

    t43 = ((x201+x202)<=(x203/x204));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = -1;
	uint8_t x214 = 1U;
	volatile int32_t x215 = -1;

    t44 = ((x213+x214)<=(x215/x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x217 = 7U;
	volatile uint32_t x219 = 479U;
	int64_t x220 = 192497323629659965LL;
	int32_t t45 = 13;

    t45 = ((x217+x218)<=(x219/x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = -2;
	uint32_t x223 = 521U;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t46 = 164;

    t46 = ((x221+x222)<=(x223/x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = 59474145U;

    t47 = ((x225+x226)<=(x227/x228));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x229 = -1LL;
	int32_t x230 = -1;
	static int64_t x231 = -1LL;
	int64_t x232 = 1424716609205LL;
	static int32_t t48 = -22075714;

    t48 = ((x229+x230)<=(x231/x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x233 = INT8_MIN;
	volatile uint32_t x234 = 30351U;
	int8_t x235 = -1;
	int16_t x236 = -1;
	volatile int32_t t49 = -679;

    t49 = ((x233+x234)<=(x235/x236));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 1395636975777LLU;
	volatile uint64_t x244 = UINT64_MAX;
	volatile int32_t t50 = 287;

    t50 = ((x241+x242)<=(x243/x244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 21311U;
	static volatile int32_t t51 = -240215545;

    t51 = ((x245+x246)<=(x247/x248));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x250 = -27;
	volatile uint32_t x251 = UINT32_MAX;
	int32_t t52 = -150665;

    t52 = ((x249+x250)<=(x251/x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x253 = INT8_MAX;
	volatile int8_t x254 = -1;
	uint16_t x255 = 16U;
	int32_t x256 = -210;
	volatile int32_t t53 = 107437;

    t53 = ((x253+x254)<=(x255/x256));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MAX;
	int16_t x259 = INT16_MIN;
	int32_t t54 = 60;

    t54 = ((x257+x258)<=(x259/x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x261 = 6;
	int64_t x262 = INT64_MIN;
	volatile int8_t x263 = INT8_MIN;
	static uint32_t x264 = 901755U;
	int32_t t55 = 528407;

    t55 = ((x261+x262)<=(x263/x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = INT16_MIN;
	static uint64_t x270 = UINT64_MAX;
	int64_t x271 = -1LL;
	volatile int64_t x272 = -1197442LL;
	int32_t t56 = -30;

    t56 = ((x269+x270)<=(x271/x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x273 = 31U;
	int32_t x274 = INT32_MIN;
	int64_t x275 = -339980725741808535LL;
	uint16_t x276 = UINT16_MAX;

    t57 = ((x273+x274)<=(x275/x276));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	int8_t x280 = INT8_MAX;
	static int32_t t58 = -54192790;

    t58 = ((x277+x278)<=(x279/x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x281 = 83352624664408758LLU;
	volatile uint32_t x282 = UINT32_MAX;
	volatile uint8_t x283 = 32U;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t59 = 2;

    t59 = ((x281+x282)<=(x283/x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x289 = 57U;
	static int64_t x290 = -3673140090972LL;
	static int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;

    t60 = ((x289+x290)<=(x291/x292));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x293 = INT16_MIN;
	uint32_t x294 = 910U;
	int16_t x295 = -1;
	static volatile uint8_t x296 = 5U;
	int32_t t61 = 7359804;

    t61 = ((x293+x294)<=(x295/x296));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x297 = 42547922223769LLU;
	static volatile int32_t x299 = INT32_MAX;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t62 = -7267745;

    t62 = ((x297+x298)<=(x299/x300));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x302 = INT64_MIN;
	int16_t x303 = 4;
	volatile int8_t x304 = INT8_MIN;
	int32_t t63 = 28316;

    t63 = ((x301+x302)<=(x303/x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x306 = -7;
	int8_t x307 = 6;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t64 = -196052841;

    t64 = ((x305+x306)<=(x307/x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -620923417LL;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	int16_t x312 = -1;

    t65 = ((x309+x310)<=(x311/x312));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x317 = UINT8_MAX;
	static int32_t x319 = -1848;
	int32_t t66 = -146805890;

    t66 = ((x317+x318)<=(x319/x320));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x322 = 2081887026701060157LLU;
	uint16_t x323 = 1U;
	int32_t t67 = -282;

    t67 = ((x321+x322)<=(x323/x324));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x326 = 14557612867106979LL;
	int16_t x327 = 1704;
	volatile int32_t t68 = 0;

    t68 = ((x325+x326)<=(x327/x328));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x329 = 114473080LL;
	uint16_t x330 = 1826U;
	volatile uint8_t x331 = 16U;
	int16_t x332 = INT16_MIN;

    t69 = ((x329+x330)<=(x331/x332));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x333 = 1U;
	uint16_t x334 = 2121U;
	int16_t x335 = -569;
	int32_t t70 = 25909;

    t70 = ((x333+x334)<=(x335/x336));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x342 = 114U;
	static volatile int64_t x343 = INT64_MAX;
	volatile int32_t t71 = -465154563;

    t71 = ((x341+x342)<=(x343/x344));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x349 = 68U;
	uint8_t x350 = 29U;
	uint16_t x351 = 39U;
	static int16_t x352 = INT16_MAX;
	int32_t t72 = -79081893;

    t72 = ((x349+x350)<=(x351/x352));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x353 = -1LL;
	volatile int16_t x354 = 1;
	static int32_t x355 = 12483;
	volatile int32_t t73 = 6149;

    t73 = ((x353+x354)<=(x355/x356));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x357 = -1;
	volatile int16_t x358 = INT16_MAX;
	int16_t x359 = 1629;
	int16_t x360 = INT16_MIN;

    t74 = ((x357+x358)<=(x359/x360));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x361 = UINT16_MAX;
	static int8_t x362 = INT8_MAX;
	uint64_t x364 = 184251909162116614LLU;
	static volatile int32_t t75 = 6001;

    t75 = ((x361+x362)<=(x363/x364));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x365 = -7;
	volatile int8_t x367 = -1;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t76 = -8354;

    t76 = ((x365+x366)<=(x367/x368));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x377 = 1;
	volatile uint64_t x378 = UINT64_MAX;
	int8_t x379 = -5;
	int32_t t77 = -23417;

    t77 = ((x377+x378)<=(x379/x380));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x381 = -11;
	volatile int8_t x382 = -1;
	int32_t x383 = INT32_MIN;
	static volatile int32_t x384 = 192;
	volatile int32_t t78 = -2526422;

    t78 = ((x381+x382)<=(x383/x384));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x385 = INT32_MIN;
	uint64_t x386 = 78LLU;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = UINT16_MAX;

    t79 = ((x385+x386)<=(x387/x388));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x389 = 3U;
	volatile uint16_t x391 = UINT16_MAX;
	static volatile int32_t t80 = -110172889;

    t80 = ((x389+x390)<=(x391/x392));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x393 = UINT64_MAX;
	static int8_t x395 = -1;
	int32_t t81 = -339437039;

    t81 = ((x393+x394)<=(x395/x396));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = -1;
	volatile uint32_t x398 = UINT32_MAX;
	uint64_t x399 = 801556906404741LLU;
	int64_t x400 = INT64_MAX;

    t82 = ((x397+x398)<=(x399/x400));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = -1;
	volatile int32_t t83 = -3451659;

    t83 = ((x401+x402)<=(x403/x404));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = 933233;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t84 = -1905375;

    t84 = ((x417+x418)<=(x419/x420));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x425 = -726;
	uint8_t x426 = 125U;
	int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MIN;
	int32_t t85 = -476791;

    t85 = ((x425+x426)<=(x427/x428));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x429 = INT16_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = INT8_MAX;
	int8_t x432 = 2;
	int32_t t86 = -622328117;

    t86 = ((x429+x430)<=(x431/x432));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x433 = -7LL;
	int16_t x434 = 1740;
	int64_t x435 = INT64_MIN;
	int64_t x436 = 791439639620907082LL;
	int32_t t87 = 7;

    t87 = ((x433+x434)<=(x435/x436));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	static volatile int64_t x440 = -1LL;
	static volatile int32_t t88 = -11227475;

    t88 = ((x437+x438)<=(x439/x440));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x441 = 1974528LLU;
	int16_t x442 = 512;
	int32_t x443 = INT32_MAX;
	int8_t x444 = INT8_MIN;
	int32_t t89 = -48;

    t89 = ((x441+x442)<=(x443/x444));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x452 = INT64_MIN;

    t90 = ((x449+x450)<=(x451/x452));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x453 = INT16_MIN;
	int16_t x454 = INT16_MIN;
	volatile int8_t x455 = 1;
	volatile int64_t x456 = -30128433963718LL;
	volatile int32_t t91 = -308;

    t91 = ((x453+x454)<=(x455/x456));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x458 = UINT8_MAX;
	volatile uint64_t x459 = 115662234519231LLU;

    t92 = ((x457+x458)<=(x459/x460));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x461 = 6;
	static int16_t x462 = INT16_MIN;
	volatile uint32_t x463 = 58380U;
	int32_t t93 = 0;

    t93 = ((x461+x462)<=(x463/x464));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MIN;
	int32_t x467 = INT32_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t94 = -51;

    t94 = ((x465+x466)<=(x467/x468));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x469 = 6;
	static int8_t x470 = -4;
	int8_t x471 = INT8_MIN;
	int32_t t95 = -49;

    t95 = ((x469+x470)<=(x471/x472));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x477 = 3787LL;
	volatile int8_t x478 = 1;
	int32_t x479 = -679324864;
	int32_t t96 = 6;

    t96 = ((x477+x478)<=(x479/x480));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t t97 = 704224;

    t97 = ((x481+x482)<=(x483/x484));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x485 = 47U;
	int8_t x487 = INT8_MAX;
	static volatile int32_t t98 = 25788;

    t98 = ((x485+x486)<=(x487/x488));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x493 = -1;
	static uint16_t x494 = 20U;
	int16_t x495 = 557;
	int32_t t99 = 262;

    t99 = ((x493+x494)<=(x495/x496));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x497 = 1457699U;
	int16_t x499 = -1;
	int32_t t100 = 302;

    t100 = ((x497+x498)<=(x499/x500));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x501 = -1;
	uint8_t x504 = 8U;
	volatile int32_t t101 = -4419118;

    t101 = ((x501+x502)<=(x503/x504));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x506 = -567;
	static int8_t x507 = -15;
	int32_t x508 = INT32_MIN;
	int32_t t102 = -2;

    t102 = ((x505+x506)<=(x507/x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x513 = -1;
	uint32_t x514 = UINT32_MAX;
	uint64_t x515 = 1377466496157395LLU;
	volatile int8_t x516 = INT8_MIN;

    t103 = ((x513+x514)<=(x515/x516));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x517 = INT32_MAX;
	int16_t x518 = INT16_MIN;
	uint8_t x520 = 43U;
	volatile int32_t t104 = 742928;

    t104 = ((x517+x518)<=(x519/x520));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x521 = 18LLU;
	int64_t x522 = 19659LL;
	static volatile int16_t x524 = -1;
	int32_t t105 = 10;

    t105 = ((x521+x522)<=(x523/x524));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x526 = 8U;
	int64_t x527 = 868282917676407LL;
	int64_t x528 = -1LL;

    t106 = ((x525+x526)<=(x527/x528));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x529 = INT64_MAX;
	volatile int16_t x530 = -6;
	static volatile uint8_t x531 = 66U;
	int16_t x532 = INT16_MIN;
	volatile int32_t t107 = -1041663527;

    t107 = ((x529+x530)<=(x531/x532));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x534 = INT16_MAX;
	uint64_t x536 = UINT64_MAX;
	static volatile int32_t t108 = -527352039;

    t108 = ((x533+x534)<=(x535/x536));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x537 = 1LL;
	volatile int16_t x539 = INT16_MIN;
	int8_t x540 = 2;

    t109 = ((x537+x538)<=(x539/x540));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x541 = 2483260;
	volatile int16_t x542 = 91;
	int8_t x544 = INT8_MAX;
	volatile int32_t t110 = -10345618;

    t110 = ((x541+x542)<=(x543/x544));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x545 = INT8_MIN;
	int32_t x546 = -1;
	int64_t x547 = -1LL;
	int64_t x548 = -62LL;
	static int32_t t111 = -27705317;

    t111 = ((x545+x546)<=(x547/x548));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x549 = 6U;
	int16_t x550 = -1;
	int8_t x551 = 0;
	int32_t x552 = -1;
	int32_t t112 = 3384134;

    t112 = ((x549+x550)<=(x551/x552));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x553 = 1U;
	uint32_t x556 = 97U;

    t113 = ((x553+x554)<=(x555/x556));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x565 = INT32_MAX;
	volatile int8_t x566 = -1;
	int8_t x568 = INT8_MIN;
	int32_t t114 = 1;

    t114 = ((x565+x566)<=(x567/x568));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x570 = INT64_MIN;
	static volatile uint16_t x571 = 6863U;
	int64_t x572 = -1LL;
	volatile int32_t t115 = -248637410;

    t115 = ((x569+x570)<=(x571/x572));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x577 = INT8_MAX;
	static int32_t x578 = INT32_MIN;
	volatile int16_t x579 = -1;
	static int64_t x580 = INT64_MIN;
	volatile int32_t t116 = 613155;

    t116 = ((x577+x578)<=(x579/x580));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x582 = -1;
	int16_t x583 = 7;
	int8_t x584 = INT8_MAX;
	volatile int32_t t117 = 10644441;

    t117 = ((x581+x582)<=(x583/x584));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x585 = 1U;
	volatile int64_t x586 = -1LL;
	uint16_t x587 = 6U;
	static int32_t t118 = -267;

    t118 = ((x585+x586)<=(x587/x588));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x589 = -1;
	int32_t x590 = -1;
	static int32_t x591 = INT32_MIN;
	int64_t x592 = -1LL;
	volatile int32_t t119 = -454059794;

    t119 = ((x589+x590)<=(x591/x592));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x593 = 52U;
	int8_t x594 = -1;

    t120 = ((x593+x594)<=(x595/x596));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x597 = UINT32_MAX;
	static uint32_t x598 = UINT32_MAX;

    t121 = ((x597+x598)<=(x599/x600));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x601 = 10U;
	int32_t x602 = INT32_MIN;
	int16_t x603 = INT16_MIN;
	static int32_t x604 = -1;
	volatile int32_t t122 = 144;

    t122 = ((x601+x602)<=(x603/x604));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x605 = 490250425853LLU;
	int32_t x606 = -27586865;
	volatile uint32_t x607 = 36254749U;
	int32_t x608 = INT32_MIN;
	volatile int32_t t123 = -104713552;

    t123 = ((x605+x606)<=(x607/x608));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x609 = -1LL;
	static int64_t x611 = -3376503407098395LL;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t124 = 18;

    t124 = ((x609+x610)<=(x611/x612));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x617 = UINT16_MAX;
	volatile uint8_t x618 = 1U;
	int64_t x619 = INT64_MIN;
	uint8_t x620 = 125U;

    t125 = ((x617+x618)<=(x619/x620));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x622 = -1LL;
	volatile int16_t x623 = INT16_MIN;
	uint8_t x624 = 12U;
	volatile int32_t t126 = 669262778;

    t126 = ((x621+x622)<=(x623/x624));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x625 = INT32_MIN;
	uint8_t x626 = 34U;
	static int16_t x627 = INT16_MIN;
	volatile int32_t t127 = -98640905;

    t127 = ((x625+x626)<=(x627/x628));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x629 = 0U;
	volatile uint16_t x630 = 9556U;
	static volatile int64_t x631 = 34935769313842135LL;
	volatile int64_t x632 = -1LL;
	volatile int32_t t128 = 11959708;

    t128 = ((x629+x630)<=(x631/x632));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x633 = INT32_MIN;
	volatile uint8_t x636 = UINT8_MAX;

    t129 = ((x633+x634)<=(x635/x636));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x641 = 1661;
	int16_t x642 = -3738;
	static int64_t x643 = 711591174514931LL;
	volatile uint64_t x644 = 127541LLU;
	int32_t t130 = 7547;

    t130 = ((x641+x642)<=(x643/x644));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x645 = INT8_MIN;
	volatile uint32_t x646 = 111U;
	int8_t x647 = -4;
	static uint16_t x648 = 71U;
	static int32_t t131 = -1;

    t131 = ((x645+x646)<=(x647/x648));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x650 = INT16_MAX;
	uint16_t x651 = 14U;
	int32_t t132 = -272007747;

    t132 = ((x649+x650)<=(x651/x652));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x654 = -1;
	static int64_t x655 = -4271177664181LL;
	int8_t x656 = INT8_MIN;
	volatile int32_t t133 = 0;

    t133 = ((x653+x654)<=(x655/x656));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x661 = 131;
	static uint16_t x662 = UINT16_MAX;
	static volatile int32_t x663 = INT32_MAX;
	int16_t x664 = INT16_MAX;

    t134 = ((x661+x662)<=(x663/x664));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x665 = 6879794997044401LLU;
	static int16_t x666 = 391;
	static volatile int8_t x668 = INT8_MAX;
	volatile int32_t t135 = 3844125;

    t135 = ((x665+x666)<=(x667/x668));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x669 = -38;
	int64_t x671 = -952100740LL;
	static int64_t x672 = INT64_MIN;
	static int32_t t136 = -4;

    t136 = ((x669+x670)<=(x671/x672));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x673 = INT8_MIN;
	uint64_t x676 = 368038LLU;
	int32_t t137 = 46337;

    t137 = ((x673+x674)<=(x675/x676));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x681 = 15;
	uint16_t x682 = 1U;
	int16_t x683 = -2;
	int8_t x684 = 2;

    t138 = ((x681+x682)<=(x683/x684));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x685 = INT64_MAX;
	int8_t x686 = INT8_MIN;
	int32_t x687 = INT32_MIN;
	int16_t x688 = 1442;

    t139 = ((x685+x686)<=(x687/x688));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x689 = 93676LLU;
	int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MIN;
	int64_t x692 = 6246061LL;
	volatile int32_t t140 = 4;

    t140 = ((x689+x690)<=(x691/x692));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x693 = 158U;
	static volatile int16_t x694 = INT16_MIN;
	static int8_t x695 = -1;
	int64_t x696 = INT64_MAX;
	int32_t t141 = 115;

    t141 = ((x693+x694)<=(x695/x696));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x697 = -1;
	int32_t x698 = INT32_MAX;
	static int8_t x699 = 20;
	volatile int8_t x700 = -1;
	int32_t t142 = -14803;

    t142 = ((x697+x698)<=(x699/x700));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x702 = -8;
	volatile uint64_t x703 = 804068099587328LLU;
	int64_t x704 = INT64_MAX;
	static int32_t t143 = -64548;

    t143 = ((x701+x702)<=(x703/x704));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x705 = INT64_MAX;
	static volatile int32_t x706 = -1;
	int32_t x707 = INT32_MAX;
	static int32_t t144 = 106;

    t144 = ((x705+x706)<=(x707/x708));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x709 = UINT16_MAX;
	volatile int8_t x712 = -1;

    t145 = ((x709+x710)<=(x711/x712));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x713 = 19215U;
	int16_t x714 = -1;
	int64_t x715 = 65968533LL;
	int8_t x716 = INT8_MIN;
	volatile int32_t t146 = -3546;

    t146 = ((x713+x714)<=(x715/x716));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x717 = 659613939;
	volatile int64_t x720 = 4744LL;
	volatile int32_t t147 = -15218;

    t147 = ((x717+x718)<=(x719/x720));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x721 = 0;
	int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	volatile int32_t t148 = -19944265;

    t148 = ((x721+x722)<=(x723/x724));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x725 = 3225432641114017617LL;
	volatile int16_t x726 = INT16_MIN;
	uint16_t x727 = 16U;
	int32_t t149 = 368;

    t149 = ((x725+x726)<=(x727/x728));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x733 = INT32_MIN;
	uint64_t x734 = UINT64_MAX;
	static int64_t x735 = INT64_MIN;
	uint16_t x736 = 186U;
	int32_t t150 = -88921;

    t150 = ((x733+x734)<=(x735/x736));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x737 = INT32_MIN;
	int32_t x740 = INT32_MIN;
	volatile int32_t t151 = -53;

    t151 = ((x737+x738)<=(x739/x740));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x741 = INT32_MAX;
	static uint64_t x742 = UINT64_MAX;
	uint16_t x743 = UINT16_MAX;
	volatile int32_t x744 = -15;

    t152 = ((x741+x742)<=(x743/x744));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x745 = 1454490322U;
	uint8_t x747 = UINT8_MAX;
	uint64_t x748 = UINT64_MAX;

    t153 = ((x745+x746)<=(x747/x748));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x753 = 61163750U;
	static int32_t x755 = -1;
	int8_t x756 = INT8_MIN;
	volatile int32_t t154 = 60;

    t154 = ((x753+x754)<=(x755/x756));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x757 = INT32_MIN;
	int32_t t155 = 1;

    t155 = ((x757+x758)<=(x759/x760));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x761 = 14905392705795559LLU;
	int8_t x762 = INT8_MIN;
	int8_t x763 = INT8_MIN;
	int8_t x764 = -1;
	volatile int32_t t156 = 3;

    t156 = ((x761+x762)<=(x763/x764));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x769 = -59;
	static int64_t x770 = -1LL;
	static int64_t x772 = INT64_MIN;
	volatile int32_t t157 = -385125;

    t157 = ((x769+x770)<=(x771/x772));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x781 = -1;
	int64_t x782 = INT64_MAX;
	static volatile uint8_t x783 = 6U;
	static volatile int32_t t158 = 3082856;

    t158 = ((x781+x782)<=(x783/x784));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x789 = 14534928;
	uint32_t x792 = UINT32_MAX;

    t159 = ((x789+x790)<=(x791/x792));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x797 = 81U;
	int32_t x798 = INT32_MIN;
	static volatile int16_t x799 = INT16_MIN;
	static volatile int32_t t160 = 10948;

    t160 = ((x797+x798)<=(x799/x800));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x801 = 106;
	static uint64_t x802 = 3206979534113619228LLU;
	int16_t x803 = -18;
	static volatile uint32_t x804 = 51488801U;
	volatile int32_t t161 = -25;

    t161 = ((x801+x802)<=(x803/x804));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x810 = 304067347089745741LLU;
	uint8_t x811 = 3U;
	int64_t x812 = INT64_MAX;
	volatile int32_t t162 = -489199;

    t162 = ((x809+x810)<=(x811/x812));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x813 = INT16_MAX;
	static int64_t x814 = INT64_MIN;
	static uint32_t x816 = 7U;
	int32_t t163 = 28;

    t163 = ((x813+x814)<=(x815/x816));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x818 = INT16_MIN;
	volatile int8_t x819 = INT8_MIN;
	static volatile int32_t x820 = INT32_MIN;
	volatile int32_t t164 = 870904360;

    t164 = ((x817+x818)<=(x819/x820));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x821 = 249665LLU;
	static uint32_t x822 = 420742U;
	int64_t x823 = INT64_MIN;
	volatile int32_t t165 = -213516;

    t165 = ((x821+x822)<=(x823/x824));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x830 = UINT8_MAX;
	uint64_t x831 = UINT64_MAX;
	int64_t x832 = -3664644435396345633LL;

    t166 = ((x829+x830)<=(x831/x832));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x833 = UINT32_MAX;
	int8_t x834 = -1;
	volatile int8_t x835 = -2;
	static int64_t x836 = -3774600700871LL;
	int32_t t167 = -1124;

    t167 = ((x833+x834)<=(x835/x836));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x841 = -1;
	int32_t x842 = INT32_MAX;
	volatile int64_t x843 = INT64_MIN;
	uint16_t x844 = UINT16_MAX;
	static int32_t t168 = 1;

    t168 = ((x841+x842)<=(x843/x844));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x846 = -1;
	int64_t x847 = INT64_MIN;
	volatile uint32_t x848 = 34619760U;

    t169 = ((x845+x846)<=(x847/x848));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x849 = -15553578LL;
	int32_t x850 = -1;
	volatile int16_t x852 = -3;

    t170 = ((x849+x850)<=(x851/x852));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x853 = -1;
	int32_t x854 = -1;
	static uint64_t x856 = 118968LLU;
	volatile int32_t t171 = 80248;

    t171 = ((x853+x854)<=(x855/x856));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x857 = 1LLU;
	static int64_t x858 = 524787LL;
	int32_t x860 = INT32_MIN;
	static int32_t t172 = -36798153;

    t172 = ((x857+x858)<=(x859/x860));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x861 = INT16_MIN;
	int64_t x862 = 7LL;
	int8_t x863 = 0;
	int8_t x864 = -1;
	volatile int32_t t173 = 1102984;

    t173 = ((x861+x862)<=(x863/x864));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x869 = -1;
	static volatile int64_t x870 = -1LL;
	int8_t x871 = -1;
	uint8_t x872 = UINT8_MAX;
	static int32_t t174 = 692;

    t174 = ((x869+x870)<=(x871/x872));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x875 = 0U;
	int32_t t175 = -529287714;

    t175 = ((x873+x874)<=(x875/x876));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x878 = -90LL;
	static int32_t x879 = INT32_MIN;
	volatile int8_t x880 = 52;

    t176 = ((x877+x878)<=(x879/x880));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x881 = INT8_MIN;
	uint8_t x882 = 0U;
	static uint8_t x883 = 7U;
	volatile int8_t x884 = 1;

    t177 = ((x881+x882)<=(x883/x884));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x886 = 3U;
	int64_t x887 = 224878806240LL;
	uint32_t x888 = 2U;

    t178 = ((x885+x886)<=(x887/x888));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x889 = INT64_MIN;
	uint64_t x890 = 9614061057442LLU;
	int64_t x892 = INT64_MIN;
	static int32_t t179 = 103;

    t179 = ((x889+x890)<=(x891/x892));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x893 = INT16_MIN;
	volatile int8_t x894 = -1;
	static int16_t x895 = 0;

    t180 = ((x893+x894)<=(x895/x896));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x898 = 15620U;
	uint16_t x899 = 0U;
	volatile uint8_t x900 = 35U;
	int32_t t181 = -79716;

    t181 = ((x897+x898)<=(x899/x900));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x902 = INT32_MIN;
	volatile int32_t t182 = -76459268;

    t182 = ((x901+x902)<=(x903/x904));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x905 = -1LL;
	uint32_t x906 = 1664317262U;
	volatile uint8_t x908 = UINT8_MAX;
	static volatile int32_t t183 = 635303;

    t183 = ((x905+x906)<=(x907/x908));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x913 = UINT16_MAX;
	int32_t x914 = INT32_MIN;
	int32_t x915 = 482154;
	volatile int32_t t184 = 63;

    t184 = ((x913+x914)<=(x915/x916));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x919 = UINT8_MAX;
	int32_t t185 = 10420093;

    t185 = ((x917+x918)<=(x919/x920));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x921 = INT16_MIN;
	int16_t x922 = -1;
	uint64_t x923 = UINT64_MAX;
	uint32_t x924 = UINT32_MAX;
	volatile int32_t t186 = 6;

    t186 = ((x921+x922)<=(x923/x924));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x925 = 11U;
	volatile int32_t x927 = -1;
	volatile int64_t x928 = -1LL;

    t187 = ((x925+x926)<=(x927/x928));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x933 = 1;
	int32_t x936 = -1;
	volatile int32_t t188 = 273509;

    t188 = ((x933+x934)<=(x935/x936));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x937 = 1U;
	uint32_t x938 = UINT32_MAX;
	volatile int32_t x939 = -10;
	static int16_t x940 = 6330;
	int32_t t189 = 1;

    t189 = ((x937+x938)<=(x939/x940));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x947 = INT8_MIN;
	static int32_t t190 = -586097976;

    t190 = ((x945+x946)<=(x947/x948));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x949 = -1;
	uint16_t x950 = 5U;
	volatile uint64_t x951 = UINT64_MAX;
	static uint32_t x952 = UINT32_MAX;

    t191 = ((x949+x950)<=(x951/x952));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x957 = 1730U;
	static uint16_t x958 = 747U;
	volatile int32_t x960 = -1;
	volatile int32_t t192 = 147;

    t192 = ((x957+x958)<=(x959/x960));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x972 = INT32_MIN;
	int32_t t193 = -3;

    t193 = ((x969+x970)<=(x971/x972));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x973 = -1;
	int8_t x975 = INT8_MAX;
	volatile uint32_t x976 = UINT32_MAX;

    t194 = ((x973+x974)<=(x975/x976));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x981 = 123U;
	int16_t x982 = -1;
	volatile uint8_t x983 = 7U;
	int64_t x984 = INT64_MAX;
	volatile int32_t t195 = 153155;

    t195 = ((x981+x982)<=(x983/x984));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x988 = -1;
	static volatile int32_t t196 = -437;

    t196 = ((x985+x986)<=(x987/x988));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x990 = 878;
	static int16_t x991 = 5261;
	int32_t t197 = -373140;

    t197 = ((x989+x990)<=(x991/x992));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1001 = INT8_MIN;
	int16_t x1004 = -1;

    t198 = ((x1001+x1002)<=(x1003/x1004));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1005 = UINT64_MAX;
	int8_t x1006 = -12;
	int8_t x1007 = INT8_MIN;
	int64_t x1008 = -1LL;
	volatile int32_t t199 = -4;

    t199 = ((x1005+x1006)<=(x1007/x1008));

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

