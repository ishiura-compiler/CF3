
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

static uint8_t x10 = 5U;
uint64_t x11 = 286937LLU;
uint16_t x14 = 706U;
uint32_t x15 = 116637855U;
int8_t x25 = 9;
int32_t t6 = 2677482;
int32_t x36 = -721815035;
int16_t x42 = INT16_MIN;
int32_t x47 = -1;
static volatile int32_t t11 = 8;
volatile int64_t x61 = -1LL;
volatile int16_t x65 = INT16_MIN;
volatile int16_t x68 = 116;
uint8_t x70 = UINT8_MAX;
static int64_t x72 = INT64_MIN;
volatile int32_t t18 = 2748773;
volatile uint8_t x77 = 0U;
uint32_t x86 = UINT32_MAX;
static int16_t x88 = 853;
volatile int32_t t21 = 58;
int64_t x97 = INT64_MAX;
int16_t x103 = 429;
int64_t x106 = INT64_MIN;
volatile int32_t t26 = 3280064;
static uint8_t x121 = 0U;
int8_t x125 = INT8_MIN;
uint16_t x126 = 99U;
volatile int8_t x128 = 1;
int32_t x130 = INT32_MAX;
volatile int32_t x132 = 206016;
uint8_t x135 = 7U;
uint32_t x141 = 129107009U;
static uint16_t x143 = 2U;
static int32_t x145 = INT32_MAX;
int64_t x149 = 55267962917415LL;
int64_t x151 = -225341212949132LL;
int32_t x162 = INT32_MIN;
int32_t x163 = 2248;
int32_t t41 = -36952811;
volatile uint16_t x178 = 2U;
int16_t x185 = -1739;
volatile int16_t x193 = INT16_MIN;
int64_t x195 = -1LL;
volatile int32_t x196 = INT32_MIN;
volatile int32_t t48 = 261669;
uint32_t x197 = 1570U;
int8_t x199 = INT8_MIN;
uint16_t x200 = UINT16_MAX;
int32_t t49 = -12725709;
static int32_t x206 = -33483076;
static int64_t x207 = 4790092549567394LL;
int8_t x209 = INT8_MIN;
int64_t x212 = INT64_MIN;
uint16_t x215 = UINT16_MAX;
static int8_t x224 = 1;
uint32_t x226 = UINT32_MAX;
int16_t x232 = INT16_MAX;
int32_t t57 = 876235763;
uint16_t x236 = 44U;
uint32_t x238 = UINT32_MAX;
int32_t x240 = 3874;
volatile int32_t t59 = 29;
int16_t x244 = -2822;
int16_t x245 = -1;
static uint64_t x247 = 196006889111LLU;
static volatile uint16_t x248 = 24U;
static uint32_t x258 = UINT32_MAX;
uint32_t x259 = UINT32_MAX;
int32_t t64 = 201678117;
int16_t x270 = INT16_MAX;
int16_t x273 = INT16_MIN;
uint8_t x275 = 0U;
int64_t x276 = -1LL;
volatile int32_t t70 = -18491680;
uint16_t x290 = 15U;
uint64_t x299 = 112273374585800LLU;
int16_t x306 = -4452;
int8_t x315 = INT8_MIN;
int64_t x335 = INT64_MIN;
uint8_t x337 = 0U;
int64_t x344 = -1LL;
uint64_t x345 = 1344787166294654959LLU;
int16_t x346 = INT16_MAX;
int16_t x350 = 1;
int64_t x355 = INT64_MIN;
int8_t x362 = 1;
static int16_t x373 = INT16_MIN;
volatile int8_t x381 = -1;
static int8_t x382 = INT8_MIN;
volatile int32_t t96 = 4972166;
static int64_t x396 = -105500288720LL;
uint8_t x397 = 82U;
volatile int32_t t100 = 16106;
volatile uint16_t x405 = 3628U;
static volatile uint32_t x406 = 4180U;
int32_t x412 = INT32_MIN;
int16_t x414 = -1;
int8_t x417 = INT8_MIN;
int32_t x425 = 110423;
uint8_t x428 = 7U;
static uint16_t x436 = UINT16_MAX;
int32_t x437 = INT32_MIN;
int64_t x448 = INT64_MIN;
uint32_t x451 = 801U;
volatile int32_t t112 = -1;
volatile int32_t t114 = -2;
int8_t x462 = -1;
int32_t x465 = INT32_MIN;
int32_t t116 = 731;
int16_t x475 = INT16_MIN;
static int32_t t118 = -52;
uint32_t x479 = UINT32_MAX;
int16_t x490 = 382;
uint16_t x492 = 114U;
static volatile uint16_t x496 = 16U;
static int32_t t124 = 5;
volatile int32_t t125 = 2117;
volatile int32_t t126 = -16665562;
int8_t x510 = INT8_MIN;
int8_t x526 = -4;
uint32_t x527 = 604U;
int16_t x528 = -1;
int32_t x547 = INT32_MIN;
uint16_t x555 = 1U;
uint8_t x557 = 0U;
uint64_t x562 = 6427LLU;
uint8_t x573 = UINT8_MAX;
int8_t x580 = INT8_MIN;
volatile uint32_t x582 = UINT32_MAX;
uint16_t x584 = 31905U;
uint64_t x594 = 273809804172LLU;
volatile uint16_t x598 = 1U;
uint8_t x599 = UINT8_MAX;
int8_t x600 = -17;
volatile int32_t t149 = 3720433;
static volatile int32_t x601 = INT32_MIN;
volatile int64_t x606 = INT64_MIN;
volatile int64_t x609 = 7587396LL;
volatile int16_t x615 = INT16_MIN;
volatile int32_t t153 = 17536;
volatile uint16_t x617 = UINT16_MAX;
int32_t t154 = -53;
static uint16_t x623 = 2794U;
static int32_t x627 = INT32_MAX;
uint16_t x638 = UINT16_MAX;
int64_t x639 = INT64_MIN;
volatile int32_t t160 = -6417729;
int64_t x651 = 184063LL;
int8_t x653 = INT8_MAX;
int16_t x655 = -1;
int64_t x656 = INT64_MIN;
volatile int8_t x658 = -1;
uint64_t x660 = UINT64_MAX;
volatile int16_t x667 = INT16_MIN;
int32_t x668 = INT32_MIN;
int16_t x671 = INT16_MIN;
uint64_t x672 = UINT64_MAX;
volatile int32_t t167 = 6795961;
uint8_t x674 = 2U;
volatile int8_t x684 = INT8_MAX;
int32_t x686 = INT32_MIN;
static int16_t x687 = 923;
static volatile int32_t t171 = 26317320;
int8_t x695 = 0;
uint64_t x697 = 0LLU;
int16_t x700 = INT16_MIN;
int32_t t174 = -220120782;
static int8_t x704 = -24;
int16_t x705 = -809;
volatile int32_t t176 = 261054905;
static volatile int32_t x711 = INT32_MIN;
uint8_t x721 = UINT8_MAX;
uint64_t x724 = UINT64_MAX;
uint32_t x728 = UINT32_MAX;
int32_t t182 = -1346;
static volatile int8_t x734 = INT8_MIN;
int16_t x735 = INT16_MIN;
static int32_t x743 = 28;
int32_t t186 = -30;
volatile uint16_t x754 = 752U;
int32_t x756 = -1;
volatile int64_t x757 = INT64_MIN;
int32_t x758 = INT32_MIN;
static uint32_t x768 = 389U;
int32_t x770 = INT32_MIN;
int32_t t192 = 60755;
int64_t x774 = 10642771542265478LL;
int32_t x778 = -1;
volatile uint16_t x780 = 3U;
static volatile int64_t x781 = INT64_MIN;
static int64_t x782 = INT64_MIN;
uint16_t x786 = UINT16_MAX;
uint64_t x789 = 4007097LLU;
int16_t x790 = INT16_MIN;
volatile int32_t t197 = -5828270;
int64_t x795 = -1LL;
volatile int64_t x798 = INT64_MIN;
static int16_t x800 = -5;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	static uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MAX;
	volatile uint8_t x4 = 38U;
	static int32_t t0 = 461324;

    t0 = ((x1>x2)<=(x3>x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 2212689390LLU;
	int8_t x8 = -16;
	int32_t t1 = -4136085;

    t1 = ((x5>x6)<=(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 0;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = 56;

    t2 = ((x9>x10)<=(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 1;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = 4;

    t3 = ((x13>x14)<=(x15>x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static int8_t x18 = 27;
	uint32_t x19 = UINT32_MAX;
	volatile int16_t x20 = 0;
	volatile int32_t t4 = -12938212;

    t4 = ((x17>x18)<=(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = -42546;
	int8_t x22 = -25;
	uint16_t x23 = UINT16_MAX;
	int16_t x24 = 4;
	int32_t t5 = 177850614;

    t5 = ((x21>x22)<=(x23>x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	uint64_t x28 = 126265733327047LLU;

    t6 = ((x25>x26)<=(x27>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	volatile int16_t x30 = -1;
	int64_t x31 = INT64_MAX;
	volatile uint8_t x32 = 2U;
	static volatile int32_t t7 = 461885358;

    t7 = ((x29>x30)<=(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 4915025724805LL;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MAX;
	volatile int32_t t8 = -22433952;

    t8 = ((x33>x34)<=(x35>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint64_t x38 = 3129629865565LLU;
	int8_t x39 = INT8_MAX;
	int8_t x40 = 25;
	volatile int32_t t9 = 732;

    t9 = ((x37>x38)<=(x39>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint16_t x43 = 4119U;
	static uint64_t x44 = 2687213068LLU;
	volatile int32_t t10 = -1;

    t10 = ((x41>x42)<=(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	volatile int8_t x46 = 8;
	static volatile int8_t x48 = 2;

    t11 = ((x45>x46)<=(x47>x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x49 = -899391LL;
	volatile uint16_t x50 = 1U;
	int64_t x51 = INT64_MIN;
	volatile int16_t x52 = 1201;
	volatile int32_t t12 = -1637;

    t12 = ((x49>x50)<=(x51>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = -1;
	volatile uint32_t x54 = 15335875U;
	int8_t x55 = INT8_MIN;
	volatile int16_t x56 = INT16_MAX;
	int32_t t13 = -185;

    t13 = ((x53>x54)<=(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint32_t x58 = UINT32_MAX;
	static int64_t x59 = INT64_MAX;
	uint16_t x60 = 59U;
	static int32_t t14 = -42058;

    t14 = ((x57>x58)<=(x59>x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x62 = UINT16_MAX;
	static int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MAX;
	int32_t t15 = 121317;

    t15 = ((x61>x62)<=(x63>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	int64_t x67 = INT64_MAX;
	volatile int32_t t16 = 1565956;

    t16 = ((x65>x66)<=(x67>x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -95;
	int8_t x71 = INT8_MAX;
	int32_t t17 = 1965697;

    t17 = ((x69>x70)<=(x71>x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 398773973898LLU;
	int16_t x74 = -1;
	volatile int16_t x75 = INT16_MAX;
	int32_t x76 = INT32_MAX;

    t18 = ((x73>x74)<=(x75>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MIN;
	static volatile int8_t x79 = INT8_MIN;
	static volatile int8_t x80 = -1;
	int32_t t19 = 20;

    t19 = ((x77>x78)<=(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -3174788927367LL;
	volatile int8_t x82 = -1;
	int64_t x83 = INT64_MIN;
	static volatile int64_t x84 = 5899464282327261LL;
	volatile int32_t t20 = -647;

    t20 = ((x81>x82)<=(x83>x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 6314LL;
	volatile int32_t x87 = -1;

    t21 = ((x85>x86)<=(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	uint32_t x90 = 11U;
	static int32_t x91 = 0;
	volatile int64_t x92 = 203688959LL;
	volatile int32_t t22 = 4266;

    t22 = ((x89>x90)<=(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x93 = UINT32_MAX;
	uint64_t x94 = 66327466464410LLU;
	static uint16_t x95 = 21254U;
	volatile int64_t x96 = -55378781544489442LL;
	volatile int32_t t23 = -124130510;

    t23 = ((x93>x94)<=(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x98 = INT32_MIN;
	static volatile int32_t x99 = 185529719;
	int32_t x100 = INT32_MIN;
	int32_t t24 = 31916875;

    t24 = ((x97>x98)<=(x99>x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 496136U;
	uint8_t x102 = 86U;
	uint64_t x104 = UINT64_MAX;
	int32_t t25 = 5;

    t25 = ((x101>x102)<=(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 8658351629703651581LLU;
	int8_t x107 = INT8_MAX;
	int32_t x108 = -18;

    t26 = ((x105>x106)<=(x107>x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = -1;
	int32_t x110 = INT32_MAX;
	static int32_t x111 = 19535;
	int32_t x112 = 696;
	volatile int32_t t27 = 20201;

    t27 = ((x109>x110)<=(x111>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = 19U;
	static int64_t x114 = -1LL;
	static int16_t x115 = 12677;
	int8_t x116 = INT8_MAX;
	volatile int32_t t28 = 10134;

    t28 = ((x113>x114)<=(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 7473U;
	volatile int64_t x118 = 767837057LL;
	static volatile uint32_t x119 = 2702238U;
	int8_t x120 = -1;
	volatile int32_t t29 = -143224;

    t29 = ((x117>x118)<=(x119>x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x122 = 15;
	int32_t x123 = -1;
	static volatile uint16_t x124 = UINT16_MAX;
	int32_t t30 = 11810595;

    t30 = ((x121>x122)<=(x123>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x127 = INT32_MAX;
	int32_t t31 = 40887105;

    t31 = ((x125>x126)<=(x127>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 3;
	int64_t x131 = -1LL;
	int32_t t32 = -1;

    t32 = ((x129>x130)<=(x131>x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -1;
	volatile int32_t x134 = -1;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = -257;

    t33 = ((x133>x134)<=(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	int32_t x138 = INT32_MIN;
	static volatile int16_t x139 = INT16_MIN;
	uint16_t x140 = 74U;
	static volatile int32_t t34 = -255;

    t34 = ((x137>x138)<=(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = 13;
	uint8_t x144 = 16U;
	static int32_t t35 = 20;

    t35 = ((x141>x142)<=(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x146 = INT64_MIN;
	volatile int64_t x147 = INT64_MAX;
	volatile uint64_t x148 = 24016LLU;
	int32_t t36 = 37;

    t36 = ((x145>x146)<=(x147>x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x150 = INT16_MAX;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = 100;

    t37 = ((x149>x150)<=(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	static volatile uint32_t x154 = UINT32_MAX;
	int64_t x155 = 34653LL;
	static uint32_t x156 = UINT32_MAX;
	int32_t t38 = -3;

    t38 = ((x153>x154)<=(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 4038U;
	uint16_t x158 = 1265U;
	int64_t x159 = -262162236269LL;
	volatile uint8_t x160 = 1U;
	static int32_t t39 = -2637225;

    t39 = ((x157>x158)<=(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x164 = 29067443U;
	volatile int32_t t40 = -706263;

    t40 = ((x161>x162)<=(x163>x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	static int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = -1;

    t41 = ((x165>x166)<=(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = 8506;

    t42 = ((x169>x170)<=(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 1480671541433911685LLU;
	uint64_t x174 = 1237LLU;
	uint8_t x175 = UINT8_MAX;
	uint8_t x176 = 101U;
	volatile int32_t t43 = 754;

    t43 = ((x173>x174)<=(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = 77;
	volatile uint64_t x179 = 5163337736687LLU;
	int64_t x180 = 1304LL;
	int32_t t44 = -936949;

    t44 = ((x177>x178)<=(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	static volatile uint32_t x182 = 4584721U;
	int16_t x183 = -1;
	static uint32_t x184 = 6092U;
	int32_t t45 = 48;

    t45 = ((x181>x182)<=(x183>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = UINT8_MAX;
	int16_t x187 = -20;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -12;

    t46 = ((x185>x186)<=(x187>x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 26U;
	static volatile uint8_t x190 = 4U;
	uint32_t x191 = 3503485U;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = -123316;

    t47 = ((x189>x190)<=(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x194 = 55076814669134LLU;

    t48 = ((x193>x194)<=(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MAX;

    t49 = ((x197>x198)<=(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	int16_t x203 = -1;
	int64_t x204 = INT64_MIN;
	int32_t t50 = 5480;

    t50 = ((x201>x202)<=(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = 1;
	volatile int64_t x208 = -1LL;
	int32_t t51 = 6077;

    t51 = ((x205>x206)<=(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x210 = 6901U;
	volatile int64_t x211 = -1LL;
	volatile int32_t t52 = 2084;

    t52 = ((x209>x210)<=(x211>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -556225690987LL;
	static uint32_t x214 = 401U;
	uint16_t x216 = UINT16_MAX;
	static int32_t t53 = 539;

    t53 = ((x213>x214)<=(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	volatile int8_t x218 = INT8_MIN;
	uint8_t x219 = UINT8_MAX;
	uint32_t x220 = 655U;
	static int32_t t54 = 316196419;

    t54 = ((x217>x218)<=(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	static int32_t x223 = INT32_MIN;
	volatile int32_t t55 = -11916710;

    t55 = ((x221>x222)<=(x223>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int64_t x227 = 125757476929LL;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 55017821;

    t56 = ((x225>x226)<=(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 73033U;
	int32_t x230 = -1;
	static uint8_t x231 = UINT8_MAX;

    t57 = ((x229>x230)<=(x231>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	int32_t x235 = INT32_MIN;
	volatile int32_t t58 = 855;

    t58 = ((x233>x234)<=(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = 1;
	static int16_t x239 = INT16_MIN;

    t59 = ((x237>x238)<=(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = 100;
	static volatile int32_t t60 = -6790;

    t60 = ((x241>x242)<=(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = 19909;
	static volatile int32_t t61 = -3598502;

    t61 = ((x245>x246)<=(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	volatile uint32_t x250 = 1871854U;
	int16_t x251 = INT16_MIN;
	volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 25;

    t62 = ((x249>x250)<=(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -27;
	volatile uint16_t x254 = 108U;
	int64_t x255 = -10810553LL;
	int8_t x256 = -12;
	static volatile int32_t t63 = 2714;

    t63 = ((x253>x254)<=(x255>x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MAX;
	int8_t x260 = INT8_MIN;

    t64 = ((x257>x258)<=(x259>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 0;
	int8_t x262 = 43;
	int64_t x263 = -1LL;
	uint64_t x264 = 201494275810LLU;
	int32_t t65 = 12;

    t65 = ((x261>x262)<=(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int32_t x266 = INT32_MIN;
	int32_t x267 = -1;
	uint32_t x268 = 868U;
	int32_t t66 = -43386261;

    t66 = ((x265>x266)<=(x267>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = 0U;
	volatile int64_t x271 = INT64_MIN;
	volatile int8_t x272 = 1;
	volatile int32_t t67 = 1066172;

    t67 = ((x269>x270)<=(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x274 = -5991;
	volatile int32_t t68 = -14356747;

    t68 = ((x273>x274)<=(x275>x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	static int16_t x278 = -1;
	static int64_t x279 = -1LL;
	volatile int64_t x280 = -1LL;
	int32_t t69 = 298749;

    t69 = ((x277>x278)<=(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 5U;
	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = -41;

    t70 = ((x281>x282)<=(x283>x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x285 = UINT8_MAX;
	int64_t x286 = -1LL;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -14;

    t71 = ((x285>x286)<=(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 22U;
	static volatile uint64_t x291 = 31LLU;
	int32_t x292 = -24511;
	int32_t t72 = -219538040;

    t72 = ((x289>x290)<=(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 127U;
	int16_t x294 = -1451;
	int64_t x295 = INT64_MIN;
	int64_t x296 = 3462580LL;
	volatile int32_t t73 = 1;

    t73 = ((x293>x294)<=(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = INT16_MAX;
	static uint16_t x298 = UINT16_MAX;
	int32_t x300 = -58;
	static volatile int32_t t74 = -11722;

    t74 = ((x297>x298)<=(x299>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 7U;
	uint64_t x302 = 134400522950109420LLU;
	uint64_t x303 = 1957271686717553LLU;
	int16_t x304 = 6;
	int32_t t75 = 0;

    t75 = ((x301>x302)<=(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -1;
	uint32_t x307 = 8706U;
	static uint16_t x308 = UINT16_MAX;
	static int32_t t76 = -15277;

    t76 = ((x305>x306)<=(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = 4986906U;
	int32_t x310 = 29215233;
	static int16_t x311 = 417;
	int32_t x312 = 35;
	int32_t t77 = 100149;

    t77 = ((x309>x310)<=(x311>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = 1447024069074873179LL;
	uint64_t x314 = 9511840136176560LLU;
	static int16_t x316 = -1;
	int32_t t78 = 7;

    t78 = ((x313>x314)<=(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	int16_t x318 = -3266;
	static int8_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 957456;

    t79 = ((x317>x318)<=(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 877U;
	uint16_t x322 = 6U;
	static volatile int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = -145681344;

    t80 = ((x321>x322)<=(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 4U;
	uint16_t x326 = UINT16_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -25;

    t81 = ((x325>x326)<=(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = 1743U;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -738304871118399LL;
	uint32_t x332 = 13295398U;
	int32_t t82 = -11;

    t82 = ((x329>x330)<=(x331>x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x333 = INT16_MIN;
	static uint8_t x334 = UINT8_MAX;
	volatile int8_t x336 = -8;
	int32_t t83 = -16743559;

    t83 = ((x333>x334)<=(x335>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MAX;
	volatile int16_t x340 = INT16_MIN;
	int32_t t84 = 11930;

    t84 = ((x337>x338)<=(x339>x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -670;
	uint16_t x342 = 491U;
	static uint32_t x343 = 5795U;
	volatile int32_t t85 = -19393581;

    t85 = ((x341>x342)<=(x343>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x347 = -38;
	uint64_t x348 = UINT64_MAX;
	volatile int32_t t86 = 0;

    t86 = ((x345>x346)<=(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	uint32_t x351 = 692U;
	int16_t x352 = -1;
	int32_t t87 = 13106678;

    t87 = ((x349>x350)<=(x351>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	int64_t x354 = -1LL;
	uint8_t x356 = 0U;
	volatile int32_t t88 = -303466;

    t88 = ((x353>x354)<=(x355>x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -42;
	int32_t x358 = 55;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t89 = 106355;

    t89 = ((x357>x358)<=(x359>x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	int64_t x363 = 599LL;
	volatile int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 3;

    t90 = ((x361>x362)<=(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x365 = 3U;
	uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = INT64_MIN;
	int32_t t91 = 78533;

    t91 = ((x365>x366)<=(x367>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 0;
	uint16_t x370 = 166U;
	int8_t x371 = 0;
	static int32_t x372 = INT32_MIN;
	int32_t t92 = -4;

    t92 = ((x369>x370)<=(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x374 = INT8_MAX;
	uint16_t x375 = UINT16_MAX;
	static int16_t x376 = INT16_MIN;
	int32_t t93 = -86682229;

    t93 = ((x373>x374)<=(x375>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = UINT16_MAX;
	int64_t x378 = -17698442LL;
	volatile int16_t x379 = 327;
	static uint8_t x380 = 51U;
	volatile int32_t t94 = 154;

    t94 = ((x377>x378)<=(x379>x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x383 = INT64_MIN;
	volatile uint8_t x384 = 16U;
	static volatile int32_t t95 = -488;

    t95 = ((x381>x382)<=(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 6;
	int64_t x386 = -1LL;
	volatile int16_t x387 = -1;
	int16_t x388 = 4;

    t96 = ((x385>x386)<=(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = -1;
	volatile int32_t x390 = -15;
	int8_t x391 = -1;
	int8_t x392 = 2;
	int32_t t97 = -2;

    t97 = ((x389>x390)<=(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = 4936;
	int32_t t98 = 23142248;

    t98 = ((x393>x394)<=(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = INT32_MAX;
	int32_t x399 = -25228;
	uint32_t x400 = 62416U;
	int32_t t99 = 32528;

    t99 = ((x397>x398)<=(x399>x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = INT32_MIN;
	static uint32_t x402 = UINT32_MAX;
	int64_t x403 = -37403554LL;
	int64_t x404 = INT64_MIN;

    t100 = ((x401>x402)<=(x403>x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x407 = -12;
	volatile int64_t x408 = -1LL;
	static volatile int32_t t101 = 286227;

    t101 = ((x405>x406)<=(x407>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	static volatile int16_t x410 = -1;
	static int8_t x411 = INT8_MIN;
	int32_t t102 = -12079;

    t102 = ((x409>x410)<=(x411>x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	static int64_t x416 = -30425411022928660LL;
	int32_t t103 = 170601;

    t103 = ((x413>x414)<=(x415>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x418 = INT16_MAX;
	uint32_t x419 = 148194426U;
	int8_t x420 = -13;
	int32_t t104 = -14997;

    t104 = ((x417>x418)<=(x419>x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x421 = 155027540U;
	static uint32_t x422 = 19972920U;
	int16_t x423 = 167;
	volatile int32_t x424 = INT32_MAX;
	int32_t t105 = 67002579;

    t105 = ((x421>x422)<=(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x426 = INT8_MIN;
	static uint32_t x427 = UINT32_MAX;
	int32_t t106 = 122433;

    t106 = ((x425>x426)<=(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -24654385537555LL;
	int16_t x430 = -1;
	uint64_t x431 = 104240573036LLU;
	static uint16_t x432 = UINT16_MAX;
	int32_t t107 = 3475;

    t107 = ((x429>x430)<=(x431>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MAX;
	uint16_t x434 = 5524U;
	volatile uint64_t x435 = UINT64_MAX;
	static volatile int32_t t108 = 3134963;

    t108 = ((x433>x434)<=(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 88807503082177225LLU;
	uint32_t x439 = 14985447U;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t109 = -82;

    t109 = ((x437>x438)<=(x439>x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x442 = -1;
	int8_t x443 = INT8_MAX;
	uint64_t x444 = 244LLU;
	int32_t t110 = 6;

    t110 = ((x441>x442)<=(x443>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 1700U;
	int16_t x446 = INT16_MAX;
	uint8_t x447 = 24U;
	int32_t t111 = -24338;

    t111 = ((x445>x446)<=(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x450 = INT8_MIN;
	uint8_t x452 = 18U;

    t112 = ((x449>x450)<=(x451>x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = INT64_MIN;
	static int16_t x454 = 12;
	int64_t x455 = 113552917LL;
	uint32_t x456 = UINT32_MAX;
	int32_t t113 = -1;

    t113 = ((x453>x454)<=(x455>x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	int64_t x459 = -487310LL;
	int8_t x460 = INT8_MIN;

    t114 = ((x457>x458)<=(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -2785;
	int16_t x463 = INT16_MIN;
	static uint32_t x464 = UINT32_MAX;
	int32_t t115 = 3702;

    t115 = ((x461>x462)<=(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x466 = INT32_MAX;
	uint32_t x467 = 1003U;
	volatile int8_t x468 = 14;

    t116 = ((x465>x466)<=(x467>x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 7U;
	volatile uint16_t x470 = 639U;
	static uint64_t x471 = 468325LLU;
	int8_t x472 = INT8_MIN;
	int32_t t117 = -3666290;

    t117 = ((x469>x470)<=(x471>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MIN;
	uint32_t x476 = 2442U;

    t118 = ((x473>x474)<=(x475>x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = UINT16_MAX;
	static int32_t x478 = 415;
	int32_t x480 = -1;
	volatile int32_t t119 = -6;

    t119 = ((x477>x478)<=(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MAX;
	int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MIN;
	volatile int64_t x484 = INT64_MAX;
	int32_t t120 = 8446691;

    t120 = ((x481>x482)<=(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -1LL;
	uint64_t x486 = 3824434406513101LLU;
	volatile int64_t x487 = INT64_MIN;
	int32_t x488 = 0;
	int32_t t121 = -1151603;

    t121 = ((x485>x486)<=(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	static int32_t x491 = INT32_MAX;
	static volatile int32_t t122 = -4482;

    t122 = ((x489>x490)<=(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	static int32_t x494 = -1;
	static int8_t x495 = -1;
	int32_t t123 = -3722;

    t123 = ((x493>x494)<=(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	int16_t x498 = INT16_MIN;
	uint16_t x499 = 10328U;
	uint16_t x500 = UINT16_MAX;

    t124 = ((x497>x498)<=(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x501 = UINT32_MAX;
	int32_t x502 = -1;
	int8_t x503 = 1;
	volatile int64_t x504 = -3664417075008609575LL;

    t125 = ((x501>x502)<=(x503>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -8;
	volatile uint16_t x506 = 2U;
	volatile uint8_t x507 = 5U;
	static int8_t x508 = 0;

    t126 = ((x505>x506)<=(x507>x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = UINT64_MAX;
	static uint64_t x511 = UINT64_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t127 = 0;

    t127 = ((x509>x510)<=(x511>x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = 4LL;
	uint32_t x514 = 23U;
	uint16_t x515 = UINT16_MAX;
	uint64_t x516 = 8275283489208329LLU;
	static volatile int32_t t128 = 0;

    t128 = ((x513>x514)<=(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = INT64_MIN;
	volatile uint16_t x518 = 884U;
	uint16_t x519 = 83U;
	uint16_t x520 = 1761U;
	volatile int32_t t129 = -3;

    t129 = ((x517>x518)<=(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x521 = 1U;
	volatile int32_t x522 = 124355912;
	static uint16_t x523 = 0U;
	int32_t x524 = INT32_MIN;
	volatile int32_t t130 = -187723320;

    t130 = ((x521>x522)<=(x523>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	volatile int32_t t131 = 18701;

    t131 = ((x525>x526)<=(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = UINT8_MAX;
	volatile uint64_t x530 = 253471847LLU;
	static volatile int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MIN;
	int32_t t132 = 485347282;

    t132 = ((x529>x530)<=(x531>x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -1;
	uint64_t x534 = 325675LLU;
	int8_t x535 = INT8_MIN;
	int32_t x536 = -1;
	volatile int32_t t133 = -6;

    t133 = ((x533>x534)<=(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	static uint64_t x538 = UINT64_MAX;
	int32_t x539 = 2254;
	uint16_t x540 = UINT16_MAX;
	int32_t t134 = -5805441;

    t134 = ((x537>x538)<=(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = 387;
	int32_t x543 = -3626306;
	int32_t x544 = -1;
	int32_t t135 = 83759;

    t135 = ((x541>x542)<=(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 22905361LL;
	volatile int16_t x546 = 8;
	int32_t x548 = -1;
	int32_t t136 = 24862;

    t136 = ((x545>x546)<=(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MIN;
	int16_t x550 = INT16_MIN;
	int32_t x551 = -71;
	volatile int16_t x552 = INT16_MIN;
	int32_t t137 = 3039877;

    t137 = ((x549>x550)<=(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = -1;
	int64_t x554 = 1652804540920LL;
	int64_t x556 = INT64_MIN;
	int32_t t138 = 65997045;

    t138 = ((x553>x554)<=(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	int16_t x559 = -1;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t139 = -44605787;

    t139 = ((x557>x558)<=(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = -50122;
	int8_t x563 = -1;
	int32_t x564 = 54958;
	static int32_t t140 = 4056;

    t140 = ((x561>x562)<=(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	static int64_t x566 = INT64_MIN;
	uint8_t x567 = 0U;
	int64_t x568 = INT64_MIN;
	int32_t t141 = 998497184;

    t141 = ((x565>x566)<=(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MAX;
	volatile uint32_t x570 = UINT32_MAX;
	volatile int8_t x571 = INT8_MIN;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = -433;

    t142 = ((x569>x570)<=(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = -1;
	int16_t x575 = 661;
	volatile int64_t x576 = -4LL;
	static volatile int32_t t143 = 2433;

    t143 = ((x573>x574)<=(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 216U;
	volatile uint64_t x578 = 1086131506583653LLU;
	int16_t x579 = INT16_MIN;
	volatile int32_t t144 = -17994908;

    t144 = ((x577>x578)<=(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = 698638533175LL;
	int32_t x583 = INT32_MIN;
	volatile int32_t t145 = -304475;

    t145 = ((x581>x582)<=(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	int64_t x586 = INT64_MIN;
	int16_t x587 = INT16_MIN;
	uint32_t x588 = UINT32_MAX;
	volatile int32_t t146 = 3659;

    t146 = ((x585>x586)<=(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x589 = INT64_MIN;
	uint64_t x590 = 0LLU;
	uint8_t x591 = 23U;
	int16_t x592 = INT16_MIN;
	int32_t t147 = 91513;

    t147 = ((x589>x590)<=(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = 1;
	int8_t x595 = 2;
	int32_t x596 = -1;
	int32_t t148 = 1;

    t148 = ((x593>x594)<=(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 109U;

    t149 = ((x597>x598)<=(x599>x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x602 = 1;
	int32_t x603 = INT32_MIN;
	volatile int32_t x604 = INT32_MIN;
	volatile int32_t t150 = -98572;

    t150 = ((x601>x602)<=(x603>x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x605 = 193890LLU;
	int16_t x607 = -1;
	int8_t x608 = 1;
	int32_t t151 = 20260197;

    t151 = ((x605>x606)<=(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x610 = -7;
	int64_t x611 = 4LL;
	int8_t x612 = INT8_MIN;
	static int32_t t152 = -1838;

    t152 = ((x609>x610)<=(x611>x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 1098U;
	static int16_t x614 = 94;
	int32_t x616 = -1;

    t153 = ((x613>x614)<=(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x618 = 52U;
	volatile uint64_t x619 = UINT64_MAX;
	int16_t x620 = -1464;

    t154 = ((x617>x618)<=(x619>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = UINT32_MAX;
	int16_t x622 = INT16_MIN;
	volatile int32_t x624 = -1;
	int32_t t155 = -856854195;

    t155 = ((x621>x622)<=(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -3531;
	static uint64_t x626 = 2963341094385214627LLU;
	uint16_t x628 = UINT16_MAX;
	static volatile int32_t t156 = 93;

    t156 = ((x625>x626)<=(x627>x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x629 = -24887;
	static uint16_t x630 = 267U;
	static int32_t x631 = -1;
	int8_t x632 = 1;
	volatile int32_t t157 = -14;

    t157 = ((x629>x630)<=(x631>x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	uint64_t x634 = 4163394433431381932LLU;
	static uint64_t x635 = 2628376912967LLU;
	int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 0;

    t158 = ((x633>x634)<=(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 56U;
	static uint8_t x640 = 1U;
	static int32_t t159 = 167;

    t159 = ((x637>x638)<=(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x642 = -3;
	uint64_t x643 = UINT64_MAX;
	int16_t x644 = INT16_MIN;

    t160 = ((x641>x642)<=(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x645 = 1535LLU;
	volatile int8_t x646 = INT8_MIN;
	int8_t x647 = INT8_MAX;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -128079;

    t161 = ((x645>x646)<=(x647>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = 371U;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = -9547;

    t162 = ((x649>x650)<=(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x654 = INT16_MIN;
	int32_t t163 = 30;

    t163 = ((x653>x654)<=(x655>x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 9173;
	int8_t x659 = -1;
	volatile int32_t t164 = -4;

    t164 = ((x657>x658)<=(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	int32_t x662 = -158;
	static volatile uint8_t x663 = 1U;
	uint16_t x664 = 5U;
	volatile int32_t t165 = 57;

    t165 = ((x661>x662)<=(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	static int64_t x666 = INT64_MIN;
	int32_t t166 = 29;

    t166 = ((x665>x666)<=(x667>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	static int8_t x670 = INT8_MIN;

    t167 = ((x669>x670)<=(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	int8_t x675 = -1;
	int8_t x676 = INT8_MAX;
	int32_t t168 = -123528;

    t168 = ((x673>x674)<=(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 5U;
	static volatile int64_t x678 = -1LL;
	int64_t x679 = INT64_MIN;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t169 = -2573;

    t169 = ((x677>x678)<=(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = INT64_MIN;
	int32_t x683 = -1;
	int32_t t170 = 197397;

    t170 = ((x681>x682)<=(x683>x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MAX;
	int64_t x688 = -1LL;

    t171 = ((x685>x686)<=(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x690 = INT16_MAX;
	int32_t x691 = 25572;
	static int32_t x692 = INT32_MIN;
	volatile int32_t t172 = 21252;

    t172 = ((x689>x690)<=(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 12;
	int16_t x694 = -1;
	int8_t x696 = 53;
	int32_t t173 = 6;

    t173 = ((x693>x694)<=(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x698 = UINT32_MAX;
	int8_t x699 = -1;

    t174 = ((x697>x698)<=(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -751520LL;
	int64_t x702 = 4513462366684201530LL;
	uint16_t x703 = 26U;
	int32_t t175 = 123;

    t175 = ((x701>x702)<=(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = -1370133LL;
	static int32_t x707 = INT32_MAX;
	int32_t x708 = -4712231;

    t176 = ((x705>x706)<=(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -4;
	int16_t x710 = 4;
	volatile int32_t x712 = INT32_MIN;
	int32_t t177 = -283294;

    t177 = ((x709>x710)<=(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	static uint64_t x714 = UINT64_MAX;
	static int8_t x715 = INT8_MIN;
	int32_t x716 = -50050090;
	volatile int32_t t178 = -290299;

    t178 = ((x713>x714)<=(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 4U;
	volatile int64_t x718 = INT64_MIN;
	int32_t x719 = INT32_MAX;
	int64_t x720 = -1LL;
	static int32_t t179 = -2145;

    t179 = ((x717>x718)<=(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = 861835456433LLU;
	uint16_t x723 = UINT16_MAX;
	volatile int32_t t180 = -236659333;

    t180 = ((x721>x722)<=(x723>x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int64_t x725 = INT64_MAX;
	volatile int32_t x726 = -1;
	uint64_t x727 = 423LLU;
	static int32_t t181 = -426;

    t181 = ((x725>x726)<=(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	static volatile int16_t x730 = INT16_MIN;
	static int64_t x731 = INT64_MIN;
	int64_t x732 = 2271967LL;

    t182 = ((x729>x730)<=(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -1;
	static int8_t x736 = -1;
	int32_t t183 = 9878;

    t183 = ((x733>x734)<=(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = INT16_MIN;
	static int32_t x738 = -1;
	uint32_t x739 = UINT32_MAX;
	int8_t x740 = 0;
	volatile int32_t t184 = -2;

    t184 = ((x737>x738)<=(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	static int64_t x742 = -27365180LL;
	uint32_t x744 = 225U;
	volatile int32_t t185 = -648309;

    t185 = ((x741>x742)<=(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MIN;
	int32_t x747 = -1;
	uint16_t x748 = 7524U;

    t186 = ((x745>x746)<=(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = 212292804594602962LLU;
	int16_t x750 = -971;
	int64_t x751 = -1LL;
	volatile int16_t x752 = -1;
	int32_t t187 = -1698133;

    t187 = ((x749>x750)<=(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MAX;
	uint32_t x755 = UINT32_MAX;
	int32_t t188 = -190788805;

    t188 = ((x753>x754)<=(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x759 = 137LL;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t189 = 161;

    t189 = ((x757>x758)<=(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int8_t x762 = 0;
	int8_t x763 = 18;
	static volatile int16_t x764 = INT16_MIN;
	volatile int32_t t190 = -32;

    t190 = ((x761>x762)<=(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 212494117U;
	uint64_t x766 = 1411LLU;
	volatile uint16_t x767 = 216U;
	volatile int32_t t191 = -1199165;

    t191 = ((x765>x766)<=(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 8U;
	volatile int8_t x771 = -1;
	int64_t x772 = -28303371549093LL;

    t192 = ((x769>x770)<=(x771>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MIN;
	uint16_t x775 = 12U;
	static uint8_t x776 = 0U;
	static volatile int32_t t193 = 10671;

    t193 = ((x773>x774)<=(x775>x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 74U;
	static int16_t x779 = 1309;
	static int32_t t194 = -2;

    t194 = ((x777>x778)<=(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x783 = 22U;
	int16_t x784 = 1017;
	int32_t t195 = -14288000;

    t195 = ((x781>x782)<=(x783>x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	volatile int16_t x787 = -1;
	static volatile uint8_t x788 = 0U;
	volatile int32_t t196 = -60899559;

    t196 = ((x785>x786)<=(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x791 = UINT16_MAX;
	static uint64_t x792 = UINT64_MAX;

    t197 = ((x789>x790)<=(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x793 = INT64_MIN;
	int32_t x794 = INT32_MIN;
	uint32_t x796 = UINT32_MAX;
	int32_t t198 = -7123;

    t198 = ((x793>x794)<=(x795>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	static volatile uint16_t x799 = UINT16_MAX;
	int32_t t199 = -29341;

    t199 = ((x797>x798)<=(x799>x800));

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

