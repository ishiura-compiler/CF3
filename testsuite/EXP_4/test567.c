
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

static int16_t x6 = INT16_MAX;
int32_t t1 = 1;
int64_t x21 = INT64_MIN;
volatile int32_t t5 = -31804;
static int64_t x29 = INT64_MIN;
volatile int32_t t6 = -817;
volatile int16_t x36 = INT16_MIN;
int8_t x57 = INT8_MIN;
uint64_t x59 = 58348737958011LLU;
volatile int32_t t11 = 6;
static int32_t x63 = INT32_MAX;
uint64_t x64 = 634311935939734393LLU;
volatile int32_t t12 = 316790;
volatile int8_t x67 = -1;
volatile int64_t x107 = -1031591145530535LL;
uint64_t x108 = 115951993LLU;
volatile int32_t t16 = 10099;
static uint8_t x111 = 6U;
static uint16_t x120 = 6803U;
uint8_t x121 = UINT8_MAX;
volatile uint8_t x123 = 36U;
uint16_t x138 = 10U;
static uint16_t x140 = 5486U;
int8_t x141 = -1;
volatile int32_t x144 = -1;
volatile int32_t t25 = 29414639;
volatile int16_t x153 = 1371;
int16_t x161 = -13640;
uint16_t x162 = 4722U;
int32_t x165 = -100998;
static uint64_t x166 = 24770054936341LLU;
int64_t x176 = -294243LL;
int16_t x177 = -194;
int32_t t30 = -100184156;
volatile int32_t t31 = -82;
int16_t x186 = -287;
int16_t x188 = INT16_MIN;
int16_t x192 = -1;
volatile int64_t x196 = 9LL;
int16_t x207 = 45;
int8_t x217 = -6;
volatile int32_t t39 = 475090185;
int32_t x225 = -1;
int64_t x240 = INT64_MIN;
int32_t x246 = INT32_MIN;
int8_t x251 = -1;
static int32_t x255 = 974011;
int32_t x263 = 137867;
int32_t x278 = 140607;
int16_t x291 = -1;
int8_t x292 = INT8_MIN;
static volatile int32_t x295 = -1;
int32_t t52 = 7;
volatile uint16_t x315 = 1U;
static uint64_t x319 = 111537180LLU;
int32_t t57 = 1;
static uint8_t x325 = 2U;
volatile int64_t x329 = INT64_MIN;
int32_t x330 = INT32_MIN;
volatile uint16_t x335 = UINT16_MAX;
volatile int64_t x337 = -1LL;
static int8_t x341 = -1;
int32_t t62 = 7986258;
int16_t x352 = INT16_MAX;
static volatile uint8_t x355 = 25U;
int16_t x361 = 6325;
volatile uint64_t x362 = 3052764945928LLU;
static uint64_t x363 = 16231087344LLU;
uint64_t x387 = 1800802140320LLU;
static int32_t x390 = -1;
volatile int32_t x391 = 11368404;
int32_t t72 = 7600;
volatile int32_t t73 = 17;
uint32_t x403 = 1888192565U;
static int8_t x404 = -1;
volatile int32_t t75 = 3593;
volatile uint16_t x418 = UINT16_MAX;
int8_t x428 = INT8_MIN;
volatile uint16_t x431 = UINT16_MAX;
static int64_t x432 = 6LL;
int32_t x450 = 7055036;
volatile int64_t x451 = -1LL;
uint16_t x457 = UINT16_MAX;
uint8_t x459 = 43U;
int16_t x467 = INT16_MIN;
int32_t x473 = INT32_MIN;
uint64_t x484 = 237711102339LLU;
volatile int32_t t85 = 178894857;
static int64_t x485 = INT64_MAX;
int64_t x496 = -1LL;
volatile int32_t t88 = -24;
int32_t x499 = -1;
static uint16_t x500 = 1U;
int64_t x501 = -1LL;
volatile int32_t t92 = -3708481;
volatile uint64_t x532 = 2LLU;
static uint16_t x536 = 641U;
int64_t x540 = -1LL;
static int32_t t96 = -1045806;
int64_t x541 = 3094598049920LL;
int32_t t97 = -1;
uint64_t x548 = 3632577427LLU;
int32_t x555 = -1;
static uint32_t x557 = 656583146U;
static int32_t x559 = -70;
uint16_t x565 = UINT16_MAX;
int8_t x567 = 59;
static volatile uint32_t x574 = 54U;
static volatile int8_t x577 = INT8_MAX;
volatile uint16_t x586 = 2U;
uint8_t x593 = 2U;
static uint16_t x595 = 1U;
volatile int32_t t111 = -81;
int32_t t112 = 483508;
volatile int32_t t113 = -1694;
volatile uint32_t x620 = 103U;
static int32_t t115 = 3881;
int16_t x626 = -161;
int8_t x627 = -1;
static volatile int32_t t117 = -60;
static uint32_t x635 = UINT32_MAX;
int8_t x637 = INT8_MIN;
static int64_t x640 = -1LL;
int16_t x653 = 0;
int8_t x666 = -3;
int32_t x667 = INT32_MIN;
static volatile int16_t x671 = 0;
int64_t x685 = INT64_MIN;
static volatile int32_t t127 = 2637952;
static uint16_t x700 = UINT16_MAX;
volatile int8_t x712 = INT8_MAX;
int32_t t134 = -45;
int8_t x723 = INT8_MAX;
volatile int16_t x727 = INT16_MIN;
int16_t x728 = INT16_MIN;
int32_t t136 = -3172;
volatile int64_t x729 = INT64_MIN;
volatile uint16_t x732 = UINT16_MAX;
int16_t x745 = -1;
volatile int16_t x749 = INT16_MAX;
static int64_t x751 = -1LL;
volatile int32_t t139 = -3090970;
uint32_t x754 = UINT32_MAX;
uint64_t x756 = UINT64_MAX;
int16_t x762 = INT16_MIN;
int64_t x763 = -1640503644666590LL;
volatile int32_t t144 = 66861300;
static int64_t x777 = INT64_MIN;
static uint8_t x780 = UINT8_MAX;
uint32_t x782 = 507997426U;
uint32_t x783 = 429645570U;
static uint64_t x785 = 6LLU;
static volatile uint8_t x789 = 17U;
volatile int32_t t148 = 13207684;
int8_t x802 = INT8_MAX;
uint32_t x809 = 6U;
static uint8_t x817 = UINT8_MAX;
int32_t x819 = 17716;
static volatile uint64_t x820 = 817394LLU;
uint16_t x821 = 4522U;
int64_t x822 = INT64_MIN;
int16_t x828 = 47;
volatile int8_t x840 = -1;
int16_t x847 = -1;
int64_t x849 = INT64_MAX;
static uint32_t x850 = UINT32_MAX;
volatile int32_t t157 = 0;
int8_t x865 = INT8_MIN;
volatile int8_t x875 = INT8_MIN;
int32_t x877 = -9;
static volatile int32_t t166 = 476;
static int16_t x898 = INT16_MIN;
int32_t x900 = 107;
int8_t x904 = INT8_MIN;
int32_t x905 = -1;
static uint64_t x908 = 6LLU;
static int32_t x909 = INT32_MAX;
int64_t x916 = -15LL;
volatile int32_t t175 = -530219813;
volatile int8_t x957 = INT8_MIN;
int64_t x980 = INT64_MAX;
volatile int16_t x985 = 0;
uint16_t x986 = 1U;
int32_t x989 = 82491222;
uint8_t x993 = 3U;
static int32_t t184 = 518191891;
uint16_t x1014 = 0U;
volatile int32_t t186 = 230875;
int8_t x1023 = INT8_MAX;
volatile int32_t t187 = 13;
static int64_t x1026 = -53544LL;
volatile uint16_t x1035 = 198U;
int32_t t192 = -9796;
volatile int8_t x1053 = INT8_MIN;
int16_t x1060 = INT16_MIN;
static int32_t t195 = 292337488;
volatile int32_t t197 = 12263;
uint16_t x1076 = UINT16_MAX;


void f0(void) {
    	uint8_t x1 = 1U;
	uint64_t x2 = 4114912064LLU;
	int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -3;

    t0 = (x1!=(x2|(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	int32_t x7 = INT32_MIN;
	static int64_t x8 = -1LL;

    t1 = (x5!=(x6|(x7*x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile uint64_t x10 = 42332208275LLU;
	int64_t x11 = -526579LL;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -439495;

    t2 = (x9!=(x10|(x11*x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -2;
	int16_t x14 = -1;
	static uint32_t x15 = UINT32_MAX;
	volatile int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -32035130;

    t3 = (x13!=(x14|(x15*x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x22 = 277642400LLU;
	volatile int8_t x23 = 0;
	static volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t4 = 71556;

    t4 = (x21!=(x22|(x23*x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -30;
	int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MIN;
	uint32_t x28 = 42260U;

    t5 = (x25!=(x26|(x27*x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = INT16_MIN;
	volatile uint8_t x31 = 14U;
	int16_t x32 = INT16_MIN;

    t6 = (x29!=(x30|(x31*x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x33 = 6;
	static int8_t x34 = INT8_MIN;
	static uint16_t x35 = UINT16_MAX;
	static int32_t t7 = 4322;

    t7 = (x33!=(x34|(x35*x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x45 = INT64_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	uint64_t x47 = 195420230684LLU;
	volatile int16_t x48 = INT16_MIN;
	int32_t t8 = 660895792;

    t8 = (x45!=(x46|(x47*x48)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x49 = 9;
	uint32_t x50 = UINT32_MAX;
	volatile int32_t x51 = 14;
	static uint16_t x52 = 15194U;
	static volatile int32_t t9 = -88466;

    t9 = (x49!=(x50|(x51*x52)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MIN;
	volatile int8_t x55 = -1;
	static int16_t x56 = -1;
	volatile int32_t t10 = 0;

    t10 = (x53!=(x54|(x55*x56)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x58 = INT32_MIN;
	int32_t x60 = INT32_MAX;

    t11 = (x57!=(x58|(x59*x60)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;

    t12 = (x61!=(x62|(x63*x64)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MAX;
	static volatile uint64_t x68 = 11842249190322LLU;
	volatile int32_t t13 = -13;

    t13 = (x65!=(x66|(x67*x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x69 = 33U;
	volatile uint16_t x70 = UINT16_MAX;
	uint8_t x71 = UINT8_MAX;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t14 = -1;

    t14 = (x69!=(x70|(x71*x72)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x93 = -10;
	int16_t x94 = INT16_MIN;
	static int64_t x95 = -1LL;
	int16_t x96 = 694;
	volatile int32_t t15 = -674443298;

    t15 = (x93!=(x94|(x95*x96)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x105 = INT64_MAX;
	uint8_t x106 = 2U;

    t16 = (x105!=(x106|(x107*x108)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x109 = 13U;
	int16_t x110 = -11771;
	uint16_t x112 = UINT16_MAX;
	volatile int32_t t17 = -5;

    t17 = (x109!=(x110|(x111*x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x117 = INT64_MIN;
	int8_t x118 = -18;
	int64_t x119 = -1LL;
	volatile int32_t t18 = -884325519;

    t18 = (x117!=(x118|(x119*x120)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x122 = INT32_MIN;
	uint16_t x124 = UINT16_MAX;
	int32_t t19 = -142143521;

    t19 = (x121!=(x122|(x123*x124)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x125 = -1LL;
	int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = 2;
	int32_t t20 = -13;

    t20 = (x125!=(x126|(x127*x128)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x129 = 1U;
	static uint64_t x130 = UINT64_MAX;
	int32_t x131 = -1;
	int8_t x132 = INT8_MAX;
	int32_t t21 = 56;

    t21 = (x129!=(x130|(x131*x132)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x133 = INT64_MAX;
	uint32_t x134 = 773U;
	volatile int64_t x135 = 1LL;
	uint16_t x136 = 17U;
	int32_t t22 = 14416;

    t22 = (x133!=(x134|(x135*x136)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x137 = INT32_MIN;
	int32_t x139 = -3860;
	volatile int32_t t23 = -169;

    t23 = (x137!=(x138|(x139*x140)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x142 = -1LL;
	int16_t x143 = -1;
	int32_t t24 = -19337579;

    t24 = (x141!=(x142|(x143*x144)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x149 = INT64_MIN;
	int64_t x150 = -21402LL;
	int8_t x151 = 12;
	int8_t x152 = INT8_MIN;

    t25 = (x149!=(x150|(x151*x152)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x154 = -1LL;
	int32_t x155 = 157784;
	uint8_t x156 = 48U;
	volatile int32_t t26 = -33593;

    t26 = (x153!=(x154|(x155*x156)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x163 = 12355U;
	uint16_t x164 = 889U;
	volatile int32_t t27 = -6;

    t27 = (x161!=(x162|(x163*x164)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	int32_t t28 = 24;

    t28 = (x165!=(x166|(x167*x168)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = 560422358986LL;
	volatile uint8_t x175 = 2U;
	int32_t t29 = 12962651;

    t29 = (x173!=(x174|(x175*x176)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x178 = UINT8_MAX;
	int64_t x179 = 1432887819LL;
	static volatile uint64_t x180 = 8060763294017994LLU;

    t30 = (x177!=(x178|(x179*x180)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x181 = -148;
	uint8_t x182 = 89U;
	int8_t x183 = INT8_MAX;
	int16_t x184 = 0;

    t31 = (x181!=(x182|(x183*x184)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x185 = 47U;
	uint8_t x187 = 51U;
	int32_t t32 = -53304;

    t32 = (x185!=(x186|(x187*x188)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x189 = 239621410LLU;
	int64_t x190 = INT64_MIN;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t t33 = 1;

    t33 = (x189!=(x190|(x191*x192)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x193 = 5;
	int8_t x194 = INT8_MIN;
	uint16_t x195 = UINT16_MAX;
	static volatile int32_t t34 = -1118051;

    t34 = (x193!=(x194|(x195*x196)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x197 = 49LL;
	int8_t x198 = -1;
	static int16_t x199 = -1;
	static int64_t x200 = 187086312LL;
	int32_t t35 = -156;

    t35 = (x197!=(x198|(x199*x200)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x205 = INT16_MAX;
	uint8_t x206 = 1U;
	static int16_t x208 = INT16_MIN;
	int32_t t36 = -1789584;

    t36 = (x205!=(x206|(x207*x208)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x209 = INT16_MAX;
	uint32_t x210 = 1982U;
	volatile uint8_t x211 = 0U;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t37 = 6168;

    t37 = (x209!=(x210|(x211*x212)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x213 = 7821567LLU;
	int16_t x214 = -1;
	int32_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int32_t t38 = 106;

    t38 = (x213!=(x214|(x215*x216)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x218 = -1LL;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = UINT16_MAX;

    t39 = (x217!=(x218|(x219*x220)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x226 = INT8_MIN;
	int32_t x227 = -1;
	int64_t x228 = -1LL;
	volatile int32_t t40 = -5692;

    t40 = (x225!=(x226|(x227*x228)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x229 = 77361459;
	uint32_t x230 = 1008814470U;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t41 = -7;

    t41 = (x229!=(x230|(x231*x232)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x233 = INT16_MIN;
	static int32_t x234 = -96843;
	int32_t x235 = -1;
	int16_t x236 = INT16_MAX;
	static volatile int32_t t42 = 7;

    t42 = (x233!=(x234|(x235*x236)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x237 = 1229486913585677LL;
	int64_t x238 = -7LL;
	int8_t x239 = 0;
	static volatile int32_t t43 = -16917;

    t43 = (x237!=(x238|(x239*x240)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x241 = INT8_MAX;
	uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 7U;
	int8_t x244 = -1;
	volatile int32_t t44 = 1883;

    t44 = (x241!=(x242|(x243*x244)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x245 = 26139468U;
	static uint64_t x247 = 22785LLU;
	int8_t x248 = -1;
	volatile int32_t t45 = 2402;

    t45 = (x245!=(x246|(x247*x248)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x249 = 0LLU;
	uint8_t x250 = UINT8_MAX;
	uint16_t x252 = 5578U;
	volatile int32_t t46 = 28;

    t46 = (x249!=(x250|(x251*x252)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x253 = 50U;
	int64_t x254 = 352482122LL;
	int8_t x256 = -11;
	int32_t t47 = 0;

    t47 = (x253!=(x254|(x255*x256)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x261 = 56U;
	uint16_t x262 = 14U;
	uint8_t x264 = UINT8_MAX;
	int32_t t48 = 30783801;

    t48 = (x261!=(x262|(x263*x264)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x273 = 21;
	int16_t x274 = 102;
	uint8_t x275 = 1U;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t49 = -3123342;

    t49 = (x273!=(x274|(x275*x276)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x277 = INT64_MAX;
	int8_t x279 = INT8_MAX;
	uint32_t x280 = UINT32_MAX;
	int32_t t50 = -697948615;

    t50 = (x277!=(x278|(x279*x280)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x289 = -1;
	static volatile int32_t x290 = -29;
	volatile int32_t t51 = -109250;

    t51 = (x289!=(x290|(x291*x292)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x293 = INT16_MIN;
	volatile uint32_t x294 = UINT32_MAX;
	int32_t x296 = -1;

    t52 = (x293!=(x294|(x295*x296)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x297 = 1905;
	volatile int64_t x298 = INT64_MIN;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = 31942639LL;
	volatile int32_t t53 = 125362;

    t53 = (x297!=(x298|(x299*x300)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x301 = 21U;
	volatile uint32_t x302 = 89930564U;
	int8_t x303 = 49;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t54 = -203;

    t54 = (x301!=(x302|(x303*x304)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile int8_t x310 = INT8_MIN;
	uint8_t x311 = 94U;
	int8_t x312 = 1;
	volatile int32_t t55 = 61;

    t55 = (x309!=(x310|(x311*x312)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x313 = UINT16_MAX;
	int64_t x314 = INT64_MAX;
	int32_t x316 = 24378962;
	int32_t t56 = 61994;

    t56 = (x313!=(x314|(x315*x316)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x317 = 0LLU;
	int64_t x318 = INT64_MAX;
	volatile int16_t x320 = INT16_MAX;

    t57 = (x317!=(x318|(x319*x320)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x326 = UINT8_MAX;
	uint16_t x327 = 228U;
	int16_t x328 = INT16_MIN;
	static int32_t t58 = 37965;

    t58 = (x325!=(x326|(x327*x328)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t59 = -1194453;

    t59 = (x329!=(x330|(x331*x332)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	uint16_t x336 = 4918U;
	static int32_t t60 = 22408;

    t60 = (x333!=(x334|(x335*x336)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x338 = -1;
	volatile int16_t x339 = 1017;
	uint16_t x340 = UINT16_MAX;
	int32_t t61 = -941336927;

    t61 = (x337!=(x338|(x339*x340)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x342 = INT32_MIN;
	static uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 127159114340LLU;

    t62 = (x341!=(x342|(x343*x344)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x345 = 72690;
	uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	int32_t t63 = -1;

    t63 = (x345!=(x346|(x347*x348)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x349 = 36;
	static int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	int32_t t64 = 117925901;

    t64 = (x349!=(x350|(x351*x352)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x353 = -23655458;
	int64_t x354 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t65 = -2411;

    t65 = (x353!=(x354|(x355*x356)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x364 = -1;
	volatile int32_t t66 = 29;

    t66 = (x361!=(x362|(x363*x364)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x365 = -2030242LL;
	uint32_t x366 = 70332332U;
	int16_t x367 = -1;
	uint8_t x368 = 1U;
	int32_t t67 = 41956299;

    t67 = (x365!=(x366|(x367*x368)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x369 = -10815;
	int8_t x370 = INT8_MAX;
	volatile uint16_t x371 = 19049U;
	static int32_t x372 = 56;
	static volatile int32_t t68 = -7859342;

    t68 = (x369!=(x370|(x371*x372)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x373 = INT32_MIN;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 1U;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t69 = -9838156;

    t69 = (x373!=(x374|(x375*x376)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x381 = 3U;
	volatile int16_t x382 = INT16_MIN;
	uint8_t x383 = 7U;
	int8_t x384 = INT8_MAX;
	int32_t t70 = 43346;

    t70 = (x381!=(x382|(x383*x384)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x385 = INT16_MIN;
	static volatile int16_t x386 = INT16_MIN;
	static int32_t x388 = 836000;
	static int32_t t71 = -211138;

    t71 = (x385!=(x386|(x387*x388)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x389 = INT64_MIN;
	static uint8_t x392 = 0U;

    t72 = (x389!=(x390|(x391*x392)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x397 = INT32_MAX;
	static int8_t x398 = INT8_MAX;
	volatile int32_t x399 = 0;
	static volatile uint32_t x400 = 3425032U;

    t73 = (x397!=(x398|(x399*x400)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x401 = 958556LLU;
	int16_t x402 = 0;
	static int32_t t74 = 240519841;

    t74 = (x401!=(x402|(x403*x404)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x409 = INT64_MIN;
	static uint32_t x410 = 107U;
	volatile int16_t x411 = -1;
	int64_t x412 = -184364480606736LL;

    t75 = (x409!=(x410|(x411*x412)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x417 = 1U;
	uint8_t x419 = 1U;
	volatile uint64_t x420 = UINT64_MAX;
	int32_t t76 = -430463906;

    t76 = (x417!=(x418|(x419*x420)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x421 = -347527008LL;
	int32_t x422 = -44;
	int8_t x423 = -1;
	volatile int16_t x424 = INT16_MIN;
	int32_t t77 = 46;

    t77 = (x421!=(x422|(x423*x424)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x425 = 49U;
	uint16_t x426 = 9U;
	uint32_t x427 = UINT32_MAX;
	volatile int32_t t78 = -507;

    t78 = (x425!=(x426|(x427*x428)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x429 = INT8_MIN;
	uint8_t x430 = 8U;
	int32_t t79 = -20250588;

    t79 = (x429!=(x430|(x431*x432)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x433 = INT16_MAX;
	int32_t x434 = -1;
	static uint64_t x435 = UINT64_MAX;
	volatile int8_t x436 = 5;
	volatile int32_t t80 = -40658;

    t80 = (x433!=(x434|(x435*x436)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x449 = -63767;
	volatile uint16_t x452 = 48U;
	volatile int32_t t81 = 80;

    t81 = (x449!=(x450|(x451*x452)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x458 = INT32_MIN;
	int32_t x460 = 2832872;
	volatile int32_t t82 = 812328;

    t82 = (x457!=(x458|(x459*x460)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x465 = 13U;
	int64_t x466 = INT64_MIN;
	uint16_t x468 = 55U;
	volatile int32_t t83 = -40009681;

    t83 = (x465!=(x466|(x467*x468)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x474 = INT16_MIN;
	uint32_t x475 = 100833U;
	uint16_t x476 = 169U;
	volatile int32_t t84 = -5693;

    t84 = (x473!=(x474|(x475*x476)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x481 = 0;
	static volatile int16_t x482 = -197;
	volatile int32_t x483 = INT32_MAX;

    t85 = (x481!=(x482|(x483*x484)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x486 = INT16_MAX;
	int16_t x487 = 0;
	static volatile int64_t x488 = -33797377883393889LL;
	static int32_t t86 = 1;

    t86 = (x485!=(x486|(x487*x488)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x489 = 207;
	int32_t x490 = -1;
	uint32_t x491 = UINT32_MAX;
	int64_t x492 = -1LL;
	int32_t t87 = 28;

    t87 = (x489!=(x490|(x491*x492)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x493 = INT8_MIN;
	static uint64_t x494 = 3315441332592LLU;
	uint32_t x495 = UINT32_MAX;

    t88 = (x493!=(x494|(x495*x496)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x497 = -1;
	int8_t x498 = -1;
	int32_t t89 = 21;

    t89 = (x497!=(x498|(x499*x500)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x502 = 1583390;
	uint64_t x503 = UINT64_MAX;
	uint64_t x504 = 11896916121371LLU;
	static int32_t t90 = 1;

    t90 = (x501!=(x502|(x503*x504)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x509 = -26;
	uint32_t x510 = UINT32_MAX;
	static uint32_t x511 = UINT32_MAX;
	volatile int32_t x512 = -1;
	static int32_t t91 = 0;

    t91 = (x509!=(x510|(x511*x512)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x517 = UINT64_MAX;
	int32_t x518 = INT32_MIN;
	int16_t x519 = -1;
	volatile int8_t x520 = INT8_MIN;

    t92 = (x517!=(x518|(x519*x520)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x521 = UINT32_MAX;
	static int8_t x522 = -1;
	int64_t x523 = -205747049906838LL;
	static volatile int16_t x524 = -1;
	static volatile int32_t t93 = -14;

    t93 = (x521!=(x522|(x523*x524)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x529 = INT64_MIN;
	int32_t x530 = -1;
	static int64_t x531 = INT64_MIN;
	volatile int32_t t94 = -5;

    t94 = (x529!=(x530|(x531*x532)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x533 = 1;
	int64_t x534 = 45088127217811483LL;
	int16_t x535 = 16;
	volatile int32_t t95 = 119177470;

    t95 = (x533!=(x534|(x535*x536)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x537 = 1;
	uint32_t x538 = UINT32_MAX;
	static int8_t x539 = INT8_MAX;

    t96 = (x537!=(x538|(x539*x540)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x542 = -1;
	uint64_t x543 = UINT64_MAX;
	static int16_t x544 = 793;

    t97 = (x541!=(x542|(x543*x544)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile int8_t x546 = 2;
	int8_t x547 = 9;
	volatile int32_t t98 = 106;

    t98 = (x545!=(x546|(x547*x548)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x553 = UINT16_MAX;
	int32_t x554 = 418604798;
	static int8_t x556 = INT8_MAX;
	static int32_t t99 = 732129;

    t99 = (x553!=(x554|(x555*x556)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x558 = INT16_MIN;
	int64_t x560 = -73722520LL;
	static volatile int32_t t100 = -39329602;

    t100 = (x557!=(x558|(x559*x560)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	volatile uint64_t x562 = 1408592447519LLU;
	volatile int16_t x563 = -1;
	volatile uint8_t x564 = UINT8_MAX;
	volatile int32_t t101 = -27;

    t101 = (x561!=(x562|(x563*x564)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x566 = INT16_MAX;
	static int8_t x568 = 36;
	volatile int32_t t102 = -455;

    t102 = (x565!=(x566|(x567*x568)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint32_t x569 = UINT32_MAX;
	int8_t x570 = INT8_MIN;
	volatile uint8_t x571 = UINT8_MAX;
	int16_t x572 = 12097;
	volatile int32_t t103 = 1014;

    t103 = (x569!=(x570|(x571*x572)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x573 = 2838U;
	static uint64_t x575 = 7597074511000863856LLU;
	static uint8_t x576 = UINT8_MAX;
	int32_t t104 = 16;

    t104 = (x573!=(x574|(x575*x576)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x578 = INT64_MIN;
	int8_t x579 = -1;
	static uint64_t x580 = 240405625801272323LLU;
	volatile int32_t t105 = 12136735;

    t105 = (x577!=(x578|(x579*x580)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x581 = 7746U;
	volatile int16_t x582 = 913;
	volatile int16_t x583 = INT16_MAX;
	volatile uint16_t x584 = 25U;
	int32_t t106 = -2;

    t106 = (x581!=(x582|(x583*x584)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x585 = INT32_MIN;
	uint32_t x587 = UINT32_MAX;
	volatile int32_t x588 = INT32_MAX;
	volatile int32_t t107 = 103796;

    t107 = (x585!=(x586|(x587*x588)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x589 = 4946LLU;
	uint64_t x590 = UINT64_MAX;
	int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MAX;
	volatile int32_t t108 = -67850617;

    t108 = (x589!=(x590|(x591*x592)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x594 = -1;
	uint8_t x596 = 1U;
	volatile int32_t t109 = -30;

    t109 = (x593!=(x594|(x595*x596)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x597 = 720291305;
	int32_t x598 = INT32_MIN;
	int64_t x599 = INT64_MIN;
	int16_t x600 = 1;
	int32_t t110 = 30484146;

    t110 = (x597!=(x598|(x599*x600)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x601 = INT16_MIN;
	int16_t x602 = -1;
	static int32_t x603 = INT32_MIN;
	uint64_t x604 = UINT64_MAX;

    t111 = (x601!=(x602|(x603*x604)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x605 = INT8_MIN;
	int64_t x606 = -1605246LL;
	static int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MIN;

    t112 = (x605!=(x606|(x607*x608)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x609 = 1U;
	int32_t x610 = INT32_MIN;
	volatile uint16_t x611 = 86U;
	uint16_t x612 = 0U;

    t113 = (x609!=(x610|(x611*x612)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = UINT64_MAX;
	static volatile int64_t x619 = 9440455133716LL;
	int32_t t114 = -369008;

    t114 = (x617!=(x618|(x619*x620)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x621 = INT8_MIN;
	int16_t x622 = INT16_MIN;
	uint32_t x623 = 833128U;
	uint8_t x624 = UINT8_MAX;

    t115 = (x621!=(x622|(x623*x624)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x625 = INT32_MAX;
	uint16_t x628 = UINT16_MAX;
	static volatile int32_t t116 = -6;

    t116 = (x625!=(x626|(x627*x628)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x629 = INT32_MIN;
	static volatile uint16_t x630 = 0U;
	uint32_t x631 = 366649U;
	int32_t x632 = 1353;

    t117 = (x629!=(x630|(x631*x632)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x633 = 11U;
	uint8_t x634 = 96U;
	int64_t x636 = -1LL;
	volatile int32_t t118 = 3;

    t118 = (x633!=(x634|(x635*x636)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x638 = INT32_MIN;
	uint16_t x639 = 0U;
	volatile int32_t t119 = -193;

    t119 = (x637!=(x638|(x639*x640)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x645 = 0U;
	int64_t x646 = -23LL;
	uint16_t x647 = UINT16_MAX;
	int64_t x648 = -1LL;
	volatile int32_t t120 = 3612;

    t120 = (x645!=(x646|(x647*x648)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x649 = INT32_MAX;
	volatile uint64_t x650 = 444516211LLU;
	int32_t x651 = INT32_MIN;
	uint32_t x652 = 1631U;
	int32_t t121 = -15;

    t121 = (x649!=(x650|(x651*x652)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x654 = 0;
	uint16_t x655 = 230U;
	int8_t x656 = -1;
	int32_t t122 = -444704965;

    t122 = (x653!=(x654|(x655*x656)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x661 = INT16_MAX;
	volatile int32_t x662 = -1;
	uint64_t x663 = 26257LLU;
	static uint8_t x664 = 24U;
	volatile int32_t t123 = 187180;

    t123 = (x661!=(x662|(x663*x664)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x665 = INT16_MAX;
	int64_t x668 = 2034329842LL;
	static int32_t t124 = -32158;

    t124 = (x665!=(x666|(x667*x668)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x669 = 4373;
	uint32_t x670 = 32638U;
	static int16_t x672 = INT16_MAX;
	static int32_t t125 = 41;

    t125 = (x669!=(x670|(x671*x672)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x677 = 6;
	uint16_t x678 = 1753U;
	int16_t x679 = INT16_MAX;
	volatile int16_t x680 = INT16_MAX;
	int32_t t126 = -2783779;

    t126 = (x677!=(x678|(x679*x680)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x686 = 0U;
	volatile int32_t x687 = -1;
	int8_t x688 = 7;

    t127 = (x685!=(x686|(x687*x688)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x693 = -1;
	int64_t x694 = -28919845LL;
	volatile int32_t x695 = -1;
	uint8_t x696 = UINT8_MAX;
	int32_t t128 = -5319;

    t128 = (x693!=(x694|(x695*x696)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x697 = UINT8_MAX;
	int8_t x698 = INT8_MAX;
	uint64_t x699 = 981148096480240LLU;
	volatile int32_t t129 = -5158;

    t129 = (x697!=(x698|(x699*x700)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x701 = 476LLU;
	static int64_t x702 = INT64_MAX;
	int64_t x703 = -1LL;
	volatile uint64_t x704 = UINT64_MAX;
	static volatile int32_t t130 = 1351605;

    t130 = (x701!=(x702|(x703*x704)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x705 = 1711U;
	int8_t x706 = -15;
	int8_t x707 = -62;
	uint16_t x708 = 0U;
	int32_t t131 = -7785;

    t131 = (x705!=(x706|(x707*x708)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x709 = 105U;
	static volatile int32_t x710 = INT32_MIN;
	static uint16_t x711 = 817U;
	int32_t t132 = 443572;

    t132 = (x709!=(x710|(x711*x712)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x713 = INT8_MIN;
	int32_t x714 = INT32_MAX;
	static int64_t x715 = INT64_MAX;
	int16_t x716 = -1;
	int32_t t133 = -1015719;

    t133 = (x713!=(x714|(x715*x716)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x717 = INT32_MAX;
	static int8_t x718 = -11;
	static int16_t x719 = 1;
	int16_t x720 = -4;

    t134 = (x717!=(x718|(x719*x720)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x721 = -1;
	int64_t x722 = -1LL;
	int8_t x724 = INT8_MAX;
	volatile int32_t t135 = -1562;

    t135 = (x721!=(x722|(x723*x724)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x725 = UINT32_MAX;
	int8_t x726 = -23;

    t136 = (x725!=(x726|(x727*x728)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x730 = UINT32_MAX;
	int8_t x731 = -3;
	int32_t t137 = 0;

    t137 = (x729!=(x730|(x731*x732)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x746 = -1LL;
	int16_t x747 = INT16_MIN;
	uint8_t x748 = 4U;
	volatile int32_t t138 = 1219363;

    t138 = (x745!=(x746|(x747*x748)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x750 = UINT32_MAX;
	int16_t x752 = INT16_MIN;

    t139 = (x749!=(x750|(x751*x752)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x753 = INT16_MIN;
	volatile uint32_t x755 = UINT32_MAX;
	int32_t t140 = 48702;

    t140 = (x753!=(x754|(x755*x756)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x761 = INT16_MIN;
	static int64_t x764 = -1LL;
	volatile int32_t t141 = -53403463;

    t141 = (x761!=(x762|(x763*x764)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x766 = INT32_MAX;
	uint8_t x767 = 4U;
	static uint32_t x768 = 15656U;
	static volatile int32_t t142 = 2266;

    t142 = (x765!=(x766|(x767*x768)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x769 = INT32_MIN;
	int16_t x770 = -1;
	static volatile uint64_t x771 = 104856LLU;
	static int8_t x772 = INT8_MIN;
	int32_t t143 = 313498794;

    t143 = (x769!=(x770|(x771*x772)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x773 = INT32_MIN;
	int32_t x774 = -490352;
	int64_t x775 = -4095105LL;
	uint32_t x776 = 25921194U;

    t144 = (x773!=(x774|(x775*x776)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x778 = INT16_MIN;
	uint16_t x779 = 0U;
	static volatile int32_t t145 = 2;

    t145 = (x777!=(x778|(x779*x780)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x781 = 90;
	volatile int8_t x784 = INT8_MAX;
	int32_t t146 = 1;

    t146 = (x781!=(x782|(x783*x784)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x786 = -3LL;
	uint64_t x787 = 4592380300789133LLU;
	int8_t x788 = INT8_MIN;
	int32_t t147 = -124504;

    t147 = (x785!=(x786|(x787*x788)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x790 = -1;
	static uint64_t x791 = 1583LLU;
	static uint16_t x792 = 969U;

    t148 = (x789!=(x790|(x791*x792)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x801 = 15;
	uint64_t x803 = UINT64_MAX;
	volatile int64_t x804 = INT64_MIN;
	volatile int32_t t149 = 19918997;

    t149 = (x801!=(x802|(x803*x804)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x810 = 566159091U;
	volatile int64_t x811 = 775207430666212LL;
	volatile int8_t x812 = -12;
	static int32_t t150 = 89623640;

    t150 = (x809!=(x810|(x811*x812)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x818 = UINT32_MAX;
	volatile int32_t t151 = -7;

    t151 = (x817!=(x818|(x819*x820)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x823 = 3729634023850LLU;
	int32_t x824 = -1150901;
	int32_t t152 = -870;

    t152 = (x821!=(x822|(x823*x824)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x825 = INT32_MIN;
	int16_t x826 = INT16_MIN;
	int32_t x827 = 3563;
	volatile int32_t t153 = 196480;

    t153 = (x825!=(x826|(x827*x828)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x833 = INT32_MIN;
	int16_t x834 = -1;
	int16_t x835 = INT16_MIN;
	int32_t x836 = 503;
	int32_t t154 = -2;

    t154 = (x833!=(x834|(x835*x836)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x837 = INT64_MIN;
	int32_t x838 = INT32_MIN;
	uint16_t x839 = 1202U;
	int32_t t155 = -94;

    t155 = (x837!=(x838|(x839*x840)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x845 = 45676299U;
	uint64_t x846 = UINT64_MAX;
	static volatile uint64_t x848 = 35665701667206119LLU;
	static volatile int32_t t156 = 0;

    t156 = (x845!=(x846|(x847*x848)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x851 = INT64_MAX;
	volatile uint64_t x852 = UINT64_MAX;

    t157 = (x849!=(x850|(x851*x852)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x853 = 1U;
	int32_t x854 = INT32_MIN;
	static int8_t x855 = INT8_MIN;
	int32_t x856 = -29;
	static volatile int32_t t158 = -432;

    t158 = (x853!=(x854|(x855*x856)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x857 = INT8_MIN;
	uint16_t x858 = 18U;
	volatile uint32_t x859 = 0U;
	uint64_t x860 = 1406909489548537LLU;
	static int32_t t159 = 75;

    t159 = (x857!=(x858|(x859*x860)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x866 = 7791499;
	int8_t x867 = INT8_MAX;
	uint64_t x868 = UINT64_MAX;
	int32_t t160 = -4765;

    t160 = (x865!=(x866|(x867*x868)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x869 = -784356403;
	uint8_t x870 = 0U;
	uint16_t x871 = 834U;
	uint8_t x872 = 7U;
	int32_t t161 = 102967631;

    t161 = (x869!=(x870|(x871*x872)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x873 = 3U;
	static volatile uint64_t x874 = UINT64_MAX;
	int16_t x876 = 0;
	static volatile int32_t t162 = -411;

    t162 = (x873!=(x874|(x875*x876)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x878 = INT64_MIN;
	int64_t x879 = -61147534028LL;
	int32_t x880 = 232;
	volatile int32_t t163 = -2844527;

    t163 = (x877!=(x878|(x879*x880)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x881 = 1U;
	volatile uint64_t x882 = UINT64_MAX;
	int16_t x883 = INT16_MIN;
	int16_t x884 = 4482;
	volatile int32_t t164 = -19531;

    t164 = (x881!=(x882|(x883*x884)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x885 = INT16_MIN;
	volatile int32_t x886 = -1;
	int64_t x887 = INT64_MIN;
	uint64_t x888 = UINT64_MAX;
	int32_t t165 = 2;

    t165 = (x885!=(x886|(x887*x888)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x889 = UINT8_MAX;
	static int16_t x890 = 504;
	volatile int32_t x891 = 1;
	uint16_t x892 = 14U;

    t166 = (x889!=(x890|(x891*x892)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x893 = 48270734U;
	uint32_t x894 = UINT32_MAX;
	static int8_t x895 = INT8_MIN;
	int32_t x896 = -1;
	static int32_t t167 = 152;

    t167 = (x893!=(x894|(x895*x896)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x897 = 100241LLU;
	uint64_t x899 = UINT64_MAX;
	volatile int32_t t168 = 285;

    t168 = (x897!=(x898|(x899*x900)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x901 = 14;
	int8_t x902 = INT8_MAX;
	int16_t x903 = 1698;
	volatile int32_t t169 = -45730589;

    t169 = (x901!=(x902|(x903*x904)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x906 = -5;
	uint64_t x907 = 714171409LLU;
	int32_t t170 = 1;

    t170 = (x905!=(x906|(x907*x908)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x910 = -1;
	int32_t x911 = -1;
	int32_t x912 = INT32_MAX;
	volatile int32_t t171 = -2255;

    t171 = (x909!=(x910|(x911*x912)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x913 = INT16_MAX;
	int8_t x914 = -5;
	int16_t x915 = INT16_MIN;
	static int32_t t172 = -2154;

    t172 = (x913!=(x914|(x915*x916)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x917 = INT8_MAX;
	uint16_t x918 = 12951U;
	static uint32_t x919 = UINT32_MAX;
	uint64_t x920 = 30LLU;
	volatile int32_t t173 = 3964;

    t173 = (x917!=(x918|(x919*x920)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x937 = INT8_MAX;
	int8_t x938 = 57;
	static volatile int8_t x939 = 0;
	uint32_t x940 = 799U;
	int32_t t174 = -832;

    t174 = (x937!=(x938|(x939*x940)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x949 = -1;
	static int8_t x950 = 0;
	static uint64_t x951 = UINT64_MAX;
	static uint64_t x952 = 77LLU;

    t175 = (x949!=(x950|(x951*x952)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x953 = 0;
	int8_t x954 = INT8_MIN;
	uint16_t x955 = 17708U;
	int8_t x956 = INT8_MAX;
	volatile int32_t t176 = 915382;

    t176 = (x953!=(x954|(x955*x956)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x958 = 5U;
	uint64_t x959 = UINT64_MAX;
	int64_t x960 = INT64_MAX;
	int32_t t177 = 14439;

    t177 = (x957!=(x958|(x959*x960)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x961 = 0;
	static int32_t x962 = INT32_MIN;
	uint8_t x963 = 90U;
	int32_t x964 = 772683;
	int32_t t178 = 5567;

    t178 = (x961!=(x962|(x963*x964)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x969 = INT64_MIN;
	volatile int8_t x970 = INT8_MAX;
	int32_t x971 = -127151;
	int32_t x972 = -328;
	int32_t t179 = -469951;

    t179 = (x969!=(x970|(x971*x972)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x977 = INT32_MIN;
	int8_t x978 = INT8_MAX;
	uint64_t x979 = 178600070228593LLU;
	volatile int32_t t180 = -557;

    t180 = (x977!=(x978|(x979*x980)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x987 = 116U;
	uint32_t x988 = UINT32_MAX;
	int32_t t181 = 111953;

    t181 = (x985!=(x986|(x987*x988)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x990 = UINT32_MAX;
	int8_t x991 = INT8_MIN;
	volatile int16_t x992 = INT16_MIN;
	int32_t t182 = 28239;

    t182 = (x989!=(x990|(x991*x992)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x994 = -1;
	int8_t x995 = INT8_MAX;
	volatile int32_t x996 = -1;
	int32_t t183 = 84493;

    t183 = (x993!=(x994|(x995*x996)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x997 = INT8_MIN;
	uint16_t x998 = 21185U;
	uint64_t x999 = UINT64_MAX;
	int16_t x1000 = 6864;

    t184 = (x997!=(x998|(x999*x1000)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1001 = -1LL;
	uint64_t x1002 = 302LLU;
	volatile int8_t x1003 = -1;
	int64_t x1004 = 615155LL;
	volatile int32_t t185 = 1;

    t185 = (x1001!=(x1002|(x1003*x1004)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1013 = INT16_MAX;
	volatile int8_t x1015 = INT8_MIN;
	volatile uint64_t x1016 = 140421304LLU;

    t186 = (x1013!=(x1014|(x1015*x1016)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1021 = 1;
	static uint16_t x1022 = 0U;
	int32_t x1024 = -1;

    t187 = (x1021!=(x1022|(x1023*x1024)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1025 = -1;
	int32_t x1027 = 32219167;
	int8_t x1028 = -1;
	volatile int32_t t188 = 1;

    t188 = (x1025!=(x1026|(x1027*x1028)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x1029 = INT64_MIN;
	uint64_t x1030 = UINT64_MAX;
	uint32_t x1031 = 624701564U;
	static int16_t x1032 = INT16_MIN;
	static volatile int32_t t189 = -1;

    t189 = (x1029!=(x1030|(x1031*x1032)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1033 = 75LLU;
	int8_t x1034 = INT8_MIN;
	int16_t x1036 = INT16_MAX;
	volatile int32_t t190 = 23897;

    t190 = (x1033!=(x1034|(x1035*x1036)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1041 = 586235LLU;
	static int16_t x1042 = INT16_MAX;
	volatile uint8_t x1043 = UINT8_MAX;
	volatile int64_t x1044 = 939187LL;
	volatile int32_t t191 = -732825005;

    t191 = (x1041!=(x1042|(x1043*x1044)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1045 = 4U;
	uint8_t x1046 = UINT8_MAX;
	volatile int8_t x1047 = -1;
	int8_t x1048 = 0;

    t192 = (x1045!=(x1046|(x1047*x1048)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1049 = 8U;
	uint16_t x1050 = UINT16_MAX;
	volatile int8_t x1051 = INT8_MIN;
	static uint8_t x1052 = 13U;
	volatile int32_t t193 = 0;

    t193 = (x1049!=(x1050|(x1051*x1052)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1054 = INT8_MIN;
	uint64_t x1055 = 43468274787761547LLU;
	int32_t x1056 = INT32_MAX;
	volatile int32_t t194 = -227376006;

    t194 = (x1053!=(x1054|(x1055*x1056)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1057 = UINT8_MAX;
	int16_t x1058 = INT16_MIN;
	static uint32_t x1059 = 29U;

    t195 = (x1057!=(x1058|(x1059*x1060)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1061 = 7U;
	static uint8_t x1062 = UINT8_MAX;
	uint32_t x1063 = 53690U;
	int8_t x1064 = INT8_MIN;
	int32_t t196 = -56813;

    t196 = (x1061!=(x1062|(x1063*x1064)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1065 = UINT8_MAX;
	uint32_t x1066 = 99067035U;
	uint8_t x1067 = UINT8_MAX;
	static int8_t x1068 = -1;

    t197 = (x1065!=(x1066|(x1067*x1068)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1069 = -1;
	int8_t x1070 = -1;
	volatile int16_t x1071 = INT16_MIN;
	int16_t x1072 = INT16_MIN;
	int32_t t198 = -8610247;

    t198 = (x1069!=(x1070|(x1071*x1072)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1073 = 110U;
	uint16_t x1074 = 19U;
	int8_t x1075 = 11;
	volatile int32_t t199 = 18;

    t199 = (x1073!=(x1074|(x1075*x1076)));

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

