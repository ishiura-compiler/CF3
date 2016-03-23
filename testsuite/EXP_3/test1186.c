
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

volatile int32_t x2 = -1;
int64_t x7 = INT64_MAX;
int32_t x9 = -55036;
int64_t x17 = INT64_MAX;
int32_t x19 = 47;
int8_t x21 = INT8_MAX;
volatile int32_t t5 = -5162;
int32_t x28 = INT32_MIN;
uint8_t x35 = 8U;
static int32_t x36 = INT32_MIN;
static volatile int32_t t7 = -1010;
uint64_t x38 = 119366656604LLU;
static volatile int64_t x44 = INT64_MAX;
uint64_t x46 = 3374951962LLU;
int64_t x47 = -1LL;
int32_t t10 = -594;
uint64_t x50 = UINT64_MAX;
uint64_t x51 = 511085053458543320LLU;
static volatile int8_t x53 = -24;
int64_t x55 = -1LL;
volatile int32_t t12 = -248274;
int8_t x61 = -1;
int8_t x62 = 2;
int32_t x68 = -1;
volatile int8_t x78 = -1;
volatile int16_t x80 = -1;
volatile int32_t x91 = INT32_MAX;
volatile int32_t x93 = -29360;
static uint64_t x99 = UINT64_MAX;
static int32_t t21 = 26875913;
static uint32_t x101 = 4U;
int64_t x107 = 5330617356805982LL;
static int32_t x108 = INT32_MAX;
volatile int32_t t23 = -794618;
int64_t x112 = INT64_MAX;
int32_t x114 = INT32_MAX;
int16_t x116 = 16;
int16_t x120 = 2122;
volatile int32_t t26 = 1922837;
int16_t x124 = INT16_MAX;
volatile uint64_t x129 = 6173LLU;
int64_t x131 = INT64_MAX;
volatile uint64_t x142 = UINT64_MAX;
int64_t x143 = -2351LL;
int32_t x144 = 2551;
int32_t t31 = 94075;
uint64_t x153 = 893649250LLU;
int64_t x159 = 3004223078150LL;
int32_t x162 = 14380397;
volatile int32_t t36 = -3334;
static int16_t x169 = 4;
uint16_t x172 = 3524U;
volatile uint64_t x173 = 120669399003LLU;
int8_t x174 = 1;
uint8_t x175 = 89U;
volatile int32_t t38 = -75;
int64_t x182 = -495625029LL;
uint16_t x183 = UINT16_MAX;
volatile int32_t t40 = -13;
int32_t t42 = 1;
uint8_t x193 = 51U;
int32_t x196 = -1;
int16_t x199 = INT16_MIN;
volatile int32_t x201 = INT32_MAX;
int32_t x209 = INT32_MIN;
uint8_t x210 = 2U;
int64_t x211 = INT64_MAX;
uint64_t x215 = 157128LLU;
int16_t x219 = -255;
volatile int16_t x220 = -1;
uint32_t x226 = 8164U;
volatile int32_t x230 = INT32_MIN;
uint32_t x231 = 30U;
uint32_t x238 = UINT32_MAX;
int8_t x239 = INT8_MAX;
volatile int64_t x240 = 142070702009400LL;
uint8_t x243 = UINT8_MAX;
int32_t t54 = -59835;
volatile int64_t x251 = INT64_MAX;
int16_t x255 = -16220;
int8_t x259 = -1;
int16_t x263 = INT16_MIN;
volatile uint64_t x267 = 12578475445626LLU;
static volatile uint32_t x268 = UINT32_MAX;
static int32_t x272 = INT32_MIN;
int64_t x273 = INT64_MAX;
int32_t t63 = -510506;
volatile int64_t x287 = INT64_MIN;
uint32_t x293 = UINT32_MAX;
static int32_t t66 = -25308;
int8_t x298 = INT8_MAX;
int32_t x301 = 7515;
int16_t x314 = INT16_MIN;
static uint32_t x322 = UINT32_MAX;
int16_t x325 = -1;
uint32_t x331 = UINT32_MAX;
int32_t t75 = 136692367;
int64_t x340 = 173055596056011339LL;
uint8_t x358 = 5U;
int32_t t79 = 5433423;
uint16_t x367 = UINT16_MAX;
volatile int32_t t83 = -139965;
volatile int8_t x383 = INT8_MIN;
volatile int8_t x389 = -1;
static int16_t x391 = 5778;
int16_t x406 = 1;
int32_t t90 = 62274481;
int8_t x421 = -1;
volatile uint16_t x427 = 33U;
volatile int32_t t96 = -108;
volatile int16_t x447 = 60;
int64_t x455 = 1583137987800LL;
int64_t x463 = INT64_MAX;
uint16_t x466 = 214U;
int16_t x469 = INT16_MIN;
volatile int32_t t103 = -26;
volatile int32_t x474 = INT32_MAX;
int32_t x481 = INT32_MIN;
uint8_t x482 = 13U;
uint16_t x484 = 0U;
int16_t x496 = -1;
static uint64_t x506 = 1063863170725LLU;
uint32_t x507 = 8U;
uint16_t x514 = UINT16_MAX;
int32_t x515 = -1;
int32_t t112 = 7230067;
static int64_t x526 = -1LL;
int32_t x527 = INT32_MIN;
static int8_t x529 = 1;
int16_t x536 = 41;
static int16_t x539 = INT16_MIN;
int8_t x543 = -1;
int64_t x547 = INT64_MIN;
int64_t x548 = 22490923454629LL;
uint16_t x561 = UINT16_MAX;
uint8_t x564 = 1U;
volatile uint16_t x570 = 14694U;
int16_t x580 = INT16_MIN;
static volatile int32_t t126 = -26749;
volatile int8_t x584 = 1;
int16_t x587 = INT16_MIN;
static volatile int64_t x589 = INT64_MAX;
int32_t x599 = -1;
int8_t x608 = INT8_MAX;
int32_t x609 = -1;
volatile int64_t x618 = -1LL;
int32_t x622 = 27753;
int8_t x623 = INT8_MAX;
static uint64_t x633 = 259629179116822198LLU;
uint16_t x639 = UINT16_MAX;
static int32_t x651 = -1;
int8_t x655 = INT8_MAX;
volatile int32_t t142 = 1764640;
volatile int16_t x658 = 2;
int32_t x663 = INT32_MIN;
uint64_t x672 = 1078183684261271LLU;
uint64_t x677 = 27048LLU;
int8_t x679 = INT8_MIN;
int64_t x689 = -1LL;
static uint64_t x702 = 4616LLU;
uint8_t x717 = 28U;
int64_t x722 = INT64_MIN;
static int16_t x747 = -9;
uint64_t x749 = 912LLU;
int32_t x751 = INT32_MAX;
int32_t t158 = -3;
static uint32_t x754 = 3U;
int32_t t160 = 3783123;
int16_t x763 = INT16_MIN;
static int8_t x772 = -1;
static volatile int8_t x784 = INT8_MAX;
int8_t x786 = 0;
uint8_t x791 = UINT8_MAX;
int32_t x796 = -1;
int16_t x808 = INT16_MAX;
int8_t x809 = INT8_MIN;
static int32_t x810 = -592905969;
static volatile int64_t x817 = 73131704748LL;
uint16_t x820 = 304U;
int32_t x823 = INT32_MAX;
int32_t t174 = 12053;
volatile uint16_t x825 = 3U;
int16_t x827 = INT16_MAX;
volatile int64_t x832 = INT64_MIN;
volatile int32_t t177 = 12734664;
int16_t x840 = -41;
int32_t x842 = -255;
static uint32_t x847 = UINT32_MAX;
int32_t x848 = INT32_MIN;
volatile int32_t t180 = -6899188;
volatile int32_t t182 = 11467423;
volatile int64_t x858 = -1LL;
int64_t x862 = -350LL;
volatile uint64_t x868 = 3683880561LLU;
volatile int64_t x874 = INT64_MIN;
int32_t t187 = -350482;
volatile int32_t t188 = -1792;
int32_t x881 = -2;
volatile uint64_t x883 = 26716043LLU;
volatile int32_t t190 = -637;
static uint8_t x892 = 0U;
uint64_t x896 = UINT64_MAX;
static int64_t x898 = INT64_MIN;
int32_t t193 = -23566103;
volatile int8_t x907 = 0;
int64_t x910 = INT64_MIN;
static int64_t x912 = -1LL;
int8_t x914 = INT8_MAX;
int32_t x915 = INT32_MIN;
int8_t x917 = 1;
static volatile int32_t x921 = 1185972;


void f0(void) {
    	uint32_t x1 = 30315701U;
	static volatile uint64_t x3 = 338502989469LLU;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -201098238;

    t0 = ((x1+x2)<=(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -6;
	static uint16_t x6 = UINT16_MAX;
	int64_t x8 = 20487LL;
	int32_t t1 = -29768;

    t1 = ((x5+x6)<=(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x10 = 2001U;
	int32_t x11 = -1;
	uint64_t x12 = 5082724LLU;
	volatile int32_t t2 = 110958;

    t2 = ((x9+x10)<=(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1014U;
	uint16_t x14 = 7U;
	int16_t x15 = 2;
	int32_t x16 = -5917;
	static volatile int32_t t3 = 837;

    t3 = ((x13+x14)<=(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;
	static int16_t x20 = INT16_MIN;
	static int32_t t4 = 187989;

    t4 = ((x17+x18)<=(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x22 = UINT16_MAX;
	int16_t x23 = 7;
	int16_t x24 = INT16_MIN;

    t5 = ((x21+x22)<=(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 97U;
	uint64_t x26 = 876LLU;
	static int32_t x27 = 2;
	int32_t t6 = 40957241;

    t6 = ((x25+x26)<=(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 737930124617445LLU;
	int16_t x34 = INT16_MIN;

    t7 = ((x33+x34)<=(x35!=x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 53221263U;
	volatile uint16_t x39 = 631U;
	volatile uint8_t x40 = 2U;
	volatile int32_t t8 = 784;

    t8 = ((x37+x38)<=(x39!=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -1LL;
	uint32_t x42 = 259498U;
	int64_t x43 = INT64_MAX;
	int32_t t9 = -164352613;

    t9 = ((x41+x42)<=(x43!=x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 522715LL;
	volatile int32_t x48 = INT32_MIN;

    t10 = ((x45+x46)<=(x47!=x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 6800U;
	static uint64_t x52 = UINT64_MAX;
	int32_t t11 = 417777736;

    t11 = ((x49+x50)<=(x51!=x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x54 = 12637261204285LL;
	static volatile uint64_t x56 = 2605445459653640LLU;

    t12 = ((x53+x54)<=(x55!=x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x63 = 1964U;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t13 = 129174;

    t13 = ((x61+x62)<=(x63!=x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x65 = 21U;
	static int16_t x66 = 563;
	int64_t x67 = 97016354LL;
	volatile int32_t t14 = 4488630;

    t14 = ((x65+x66)<=(x67!=x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x73 = UINT32_MAX;
	volatile int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	static int8_t x76 = 18;
	int32_t t15 = -6;

    t15 = ((x73+x74)<=(x75!=x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x77 = -1;
	static uint16_t x79 = UINT16_MAX;
	volatile int32_t t16 = -46872947;

    t16 = ((x77+x78)<=(x79!=x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	uint64_t x82 = UINT64_MAX;
	uint64_t x83 = UINT64_MAX;
	static int8_t x84 = 13;
	int32_t t17 = 2812;

    t17 = ((x81+x82)<=(x83!=x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t18 = 43122;

    t18 = ((x85+x86)<=(x87!=x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = 2;
	int8_t x90 = INT8_MIN;
	static uint16_t x92 = 1U;
	static int32_t t19 = -8;

    t19 = ((x89+x90)<=(x91!=x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x94 = 18U;
	int8_t x95 = -1;
	int32_t x96 = 1;
	int32_t t20 = 815291;

    t20 = ((x93+x94)<=(x95!=x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x97 = 8U;
	int64_t x98 = 27LL;
	int16_t x100 = -8313;

    t21 = ((x97+x98)<=(x99!=x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x102 = UINT16_MAX;
	int8_t x103 = -1;
	static uint16_t x104 = 7359U;
	volatile int32_t t22 = 1323;

    t22 = ((x101+x102)<=(x103!=x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MIN;

    t23 = ((x105+x106)<=(x107!=x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x109 = INT64_MIN;
	uint16_t x110 = UINT16_MAX;
	static uint32_t x111 = 33U;
	int32_t t24 = -12955675;

    t24 = ((x109+x110)<=(x111!=x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x113 = 16482599946753552LLU;
	uint32_t x115 = UINT32_MAX;
	int32_t t25 = 17577522;

    t25 = ((x113+x114)<=(x115!=x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = 3;
	uint16_t x118 = 22U;
	int64_t x119 = INT64_MIN;

    t26 = ((x117+x118)<=(x119!=x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	static uint32_t x122 = 443U;
	uint64_t x123 = UINT64_MAX;
	static volatile int32_t t27 = 182;

    t27 = ((x121+x122)<=(x123!=x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x130 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	static int32_t t28 = -360;

    t28 = ((x129+x130)<=(x131!=x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x133 = -1LL;
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	volatile uint8_t x136 = 3U;
	int32_t t29 = 10;

    t29 = ((x133+x134)<=(x135!=x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x137 = INT64_MIN;
	int64_t x138 = 17692468LL;
	static int32_t x139 = -1;
	uint8_t x140 = 0U;
	static int32_t t30 = 479016;

    t30 = ((x137+x138)<=(x139!=x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x141 = -1;

    t31 = ((x141+x142)<=(x143!=x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = 3028587358296104018LL;
	volatile int64_t x147 = -31LL;
	static uint8_t x148 = 6U;
	int32_t t32 = 29506;

    t32 = ((x145+x146)<=(x147!=x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	static int32_t t33 = -60448079;

    t33 = ((x153+x154)<=(x155!=x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 59U;
	uint64_t x160 = UINT64_MAX;
	static int32_t t34 = 10;

    t34 = ((x157+x158)<=(x159!=x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x161 = INT32_MIN;
	int64_t x163 = -272455375575671777LL;
	int16_t x164 = INT16_MIN;
	int32_t t35 = -225293517;

    t35 = ((x161+x162)<=(x163!=x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x165 = UINT8_MAX;
	int8_t x166 = -2;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -15;

    t36 = ((x165+x166)<=(x167!=x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	int32_t t37 = 0;

    t37 = ((x169+x170)<=(x171!=x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x176 = INT64_MIN;

    t38 = ((x173+x174)<=(x175!=x176));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x177 = 2401U;
	static uint16_t x178 = 2U;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -1;
	volatile int32_t t39 = 0;

    t39 = ((x177+x178)<=(x179!=x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x181 = INT32_MAX;
	uint32_t x184 = UINT32_MAX;

    t40 = ((x181+x182)<=(x183!=x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x185 = INT8_MIN;
	int32_t x186 = -1;
	uint8_t x187 = 41U;
	static int64_t x188 = 26413527LL;
	static int32_t t41 = 31;

    t41 = ((x185+x186)<=(x187!=x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x189 = INT16_MIN;
	uint16_t x190 = 3617U;
	int64_t x191 = -1LL;
	volatile int8_t x192 = 13;

    t42 = ((x189+x190)<=(x191!=x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x194 = 61748262567LL;
	int16_t x195 = -134;
	int32_t t43 = -10;

    t43 = ((x193+x194)<=(x195!=x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = 56U;
	int16_t x198 = INT16_MIN;
	uint32_t x200 = 177734411U;
	int32_t t44 = -465659272;

    t44 = ((x197+x198)<=(x199!=x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	static volatile int32_t x204 = INT32_MIN;
	volatile int32_t t45 = 41;

    t45 = ((x201+x202)<=(x203!=x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = 0;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int32_t x208 = -244334072;
	int32_t t46 = -122496058;

    t46 = ((x205+x206)<=(x207!=x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t47 = -1;

    t47 = ((x209+x210)<=(x211!=x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x213 = 132050U;
	volatile uint32_t x214 = UINT32_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t48 = -453767620;

    t48 = ((x213+x214)<=(x215!=x216));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	static uint16_t x218 = 31740U;
	static int32_t t49 = -261510466;

    t49 = ((x217+x218)<=(x219!=x220));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x221 = UINT64_MAX;
	static int8_t x222 = -1;
	int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	int32_t t50 = -83;

    t50 = ((x221+x222)<=(x223!=x224));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = 3;
	int8_t x227 = -1;
	volatile int8_t x228 = -1;
	volatile int32_t t51 = -42573;

    t51 = ((x225+x226)<=(x227!=x228));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x229 = 100U;
	int32_t x232 = INT32_MAX;
	int32_t t52 = 17922121;

    t52 = ((x229+x230)<=(x231!=x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x237 = INT16_MAX;
	static int32_t t53 = -68265411;

    t53 = ((x237+x238)<=(x239!=x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x241 = 6U;
	int64_t x242 = -1LL;
	int32_t x244 = -1;

    t54 = ((x241+x242)<=(x243!=x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x245 = 1U;
	uint64_t x246 = 2158LLU;
	uint32_t x247 = 2502U;
	int16_t x248 = -7659;
	int32_t t55 = -231;

    t55 = ((x245+x246)<=(x247!=x248));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = 1665U;
	uint32_t x250 = UINT32_MAX;
	int32_t x252 = INT32_MIN;
	int32_t t56 = 247893;

    t56 = ((x249+x250)<=(x251!=x252));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MAX;
	int64_t x256 = 6241LL;
	volatile int32_t t57 = 41946560;

    t57 = ((x253+x254)<=(x255!=x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = 165714LL;
	int16_t x258 = -1;
	int32_t x260 = INT32_MAX;
	volatile int32_t t58 = -6;

    t58 = ((x257+x258)<=(x259!=x260));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = 3639704853LL;
	volatile int32_t x262 = -653032689;
	int64_t x264 = -46852517586651387LL;
	int32_t t59 = 56188;

    t59 = ((x261+x262)<=(x263!=x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = 15629U;
	volatile int64_t x266 = INT64_MIN;
	volatile int32_t t60 = -13989388;

    t60 = ((x265+x266)<=(x267!=x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x269 = INT8_MAX;
	static volatile int32_t x270 = -1;
	volatile int32_t x271 = 7;
	volatile int32_t t61 = 218373;

    t61 = ((x269+x270)<=(x271!=x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x274 = INT16_MIN;
	int16_t x275 = 0;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t62 = 207;

    t62 = ((x273+x274)<=(x275!=x276));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = 171301LLU;
	static uint32_t x278 = 211U;
	int64_t x279 = INT64_MAX;
	volatile int8_t x280 = -1;

    t63 = ((x277+x278)<=(x279!=x280));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x281 = -293;
	volatile uint64_t x282 = UINT64_MAX;
	int32_t x283 = -1;
	static int32_t x284 = -155410;
	int32_t t64 = 583029;

    t64 = ((x281+x282)<=(x283!=x284));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x285 = 39U;
	int16_t x286 = 3541;
	int16_t x288 = 6527;
	static int32_t t65 = -52005;

    t65 = ((x285+x286)<=(x287!=x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x294 = 28437U;
	uint32_t x295 = 339U;
	int64_t x296 = -1LL;

    t66 = ((x293+x294)<=(x295!=x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x297 = 9988023LLU;
	int32_t x299 = -649155;
	volatile uint32_t x300 = UINT32_MAX;
	int32_t t67 = 151344;

    t67 = ((x297+x298)<=(x299!=x300));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x302 = INT16_MIN;
	static int32_t x303 = -10148;
	volatile int64_t x304 = 3454869758851471791LL;
	int32_t t68 = 2299599;

    t68 = ((x301+x302)<=(x303!=x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = -12;
	static int64_t x306 = -263135764538762812LL;
	int8_t x307 = INT8_MAX;
	static volatile int64_t x308 = INT64_MAX;
	volatile int32_t t69 = 1;

    t69 = ((x305+x306)<=(x307!=x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = -1;
	uint64_t x310 = 132238171559417906LLU;
	int64_t x311 = -3LL;
	int32_t x312 = INT32_MIN;
	int32_t t70 = -37;

    t70 = ((x309+x310)<=(x311!=x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = -1;
	int8_t x315 = 8;
	int16_t x316 = -1;
	int32_t t71 = -188;

    t71 = ((x313+x314)<=(x315!=x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x317 = -9619;
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = INT8_MAX;
	uint32_t x320 = 1185U;
	volatile int32_t t72 = 352749237;

    t72 = ((x317+x318)<=(x319!=x320));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x321 = -1280491894892674LL;
	int32_t x323 = INT32_MIN;
	int8_t x324 = -1;
	volatile int32_t t73 = 3246;

    t73 = ((x321+x322)<=(x323!=x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x326 = -224394089LL;
	uint64_t x327 = 982100371100963942LLU;
	volatile int64_t x328 = 454628384LL;
	volatile int32_t t74 = 125225624;

    t74 = ((x325+x326)<=(x327!=x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x329 = INT16_MAX;
	uint64_t x330 = 1866882545183528LLU;
	int32_t x332 = INT32_MAX;

    t75 = ((x329+x330)<=(x331!=x332));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	static int32_t x335 = INT32_MAX;
	uint16_t x336 = 26008U;
	volatile int32_t t76 = -83;

    t76 = ((x333+x334)<=(x335!=x336));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	static volatile int32_t t77 = 1;

    t77 = ((x337+x338)<=(x339!=x340));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x349 = UINT64_MAX;
	volatile uint8_t x350 = 3U;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 83939U;
	volatile int32_t t78 = 1;

    t78 = ((x349+x350)<=(x351!=x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x357 = 31827035U;
	int8_t x359 = 0;
	uint8_t x360 = UINT8_MAX;

    t79 = ((x357+x358)<=(x359!=x360));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = INT16_MIN;
	int64_t x362 = 7648964425638669LL;
	int8_t x363 = INT8_MIN;
	static uint32_t x364 = 4U;
	int32_t t80 = 6662558;

    t80 = ((x361+x362)<=(x363!=x364));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x365 = 600600152;
	uint32_t x366 = 238139U;
	int32_t x368 = INT32_MAX;
	volatile int32_t t81 = -156;

    t81 = ((x365+x366)<=(x367!=x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -11762439;
	volatile uint8_t x370 = UINT8_MAX;
	int16_t x371 = -1;
	int32_t x372 = -1;
	int32_t t82 = 11916;

    t82 = ((x369+x370)<=(x371!=x372));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x377 = UINT16_MAX;
	uint32_t x378 = 3U;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = 100041;

    t83 = ((x377+x378)<=(x379!=x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x381 = -33;
	volatile int16_t x382 = 0;
	static int64_t x384 = -840185444408107LL;
	static volatile int32_t t84 = 18659844;

    t84 = ((x381+x382)<=(x383!=x384));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x385 = UINT8_MAX;
	int16_t x386 = 42;
	volatile int64_t x387 = INT64_MIN;
	int16_t x388 = -2;
	volatile int32_t t85 = 23;

    t85 = ((x385+x386)<=(x387!=x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x390 = INT32_MAX;
	static int16_t x392 = -26;
	volatile int32_t t86 = -67;

    t86 = ((x389+x390)<=(x391!=x392));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x401 = 46;
	volatile uint16_t x402 = 1U;
	static int64_t x403 = INT64_MIN;
	static int64_t x404 = 197LL;
	volatile int32_t t87 = -15266531;

    t87 = ((x401+x402)<=(x403!=x404));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x405 = 78259;
	volatile int16_t x407 = INT16_MIN;
	volatile uint32_t x408 = 480880622U;
	int32_t t88 = 15425048;

    t88 = ((x405+x406)<=(x407!=x408));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x409 = INT32_MIN;
	uint32_t x410 = UINT32_MAX;
	volatile uint8_t x411 = 24U;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t89 = 41396;

    t89 = ((x409+x410)<=(x411!=x412));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x413 = -25018906LL;
	static int32_t x414 = 41122;
	uint64_t x415 = 19861822LLU;
	static int32_t x416 = -3;

    t90 = ((x413+x414)<=(x415!=x416));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x417 = -1LL;
	uint16_t x418 = 234U;
	int32_t x419 = -7;
	uint16_t x420 = 2U;
	static int32_t t91 = -281424505;

    t91 = ((x417+x418)<=(x419!=x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x422 = -2754834LL;
	static int32_t x423 = -1;
	uint16_t x424 = 4U;
	int32_t t92 = -594826671;

    t92 = ((x421+x422)<=(x423!=x424));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = INT32_MIN;
	int64_t x426 = 4520422LL;
	static int16_t x428 = INT16_MAX;
	int32_t t93 = -1;

    t93 = ((x425+x426)<=(x427!=x428));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = 1;
	uint32_t x430 = UINT32_MAX;
	static uint8_t x431 = UINT8_MAX;
	uint16_t x432 = UINT16_MAX;
	int32_t t94 = 6037672;

    t94 = ((x429+x430)<=(x431!=x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x433 = 27U;
	static uint64_t x434 = 4625042611LLU;
	static int32_t x435 = 1;
	int8_t x436 = INT8_MIN;
	volatile int32_t t95 = -1136;

    t95 = ((x433+x434)<=(x435!=x436));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = 27;
	int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	static int32_t x440 = 1881;

    t96 = ((x437+x438)<=(x439!=x440));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x445 = 2U;
	uint8_t x446 = 1U;
	int8_t x448 = -1;
	volatile int32_t t97 = 10789;

    t97 = ((x445+x446)<=(x447!=x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x449 = -1;
	int8_t x450 = -1;
	int16_t x451 = -4;
	int32_t x452 = -1;
	volatile int32_t t98 = -419527;

    t98 = ((x449+x450)<=(x451!=x452));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x453 = 54U;
	volatile int64_t x454 = INT64_MIN;
	static int64_t x456 = INT64_MIN;
	volatile int32_t t99 = -98839337;

    t99 = ((x453+x454)<=(x455!=x456));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x457 = 12640331;
	volatile int64_t x458 = 18763LL;
	uint64_t x459 = UINT64_MAX;
	static int32_t x460 = -2405523;
	int32_t t100 = 63;

    t100 = ((x457+x458)<=(x459!=x460));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x461 = 3U;
	int32_t x462 = -13;
	int64_t x464 = -1LL;
	volatile int32_t t101 = 59;

    t101 = ((x461+x462)<=(x463!=x464));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x465 = -2977233161LL;
	volatile int32_t x467 = 235;
	int16_t x468 = -1;
	volatile int32_t t102 = -13;

    t102 = ((x465+x466)<=(x467!=x468));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x470 = 756981316U;
	static volatile int16_t x471 = -1;
	int64_t x472 = INT64_MIN;

    t103 = ((x469+x470)<=(x471!=x472));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x473 = -1;
	volatile int8_t x475 = INT8_MIN;
	uint32_t x476 = 170U;
	volatile int32_t t104 = -10249;

    t104 = ((x473+x474)<=(x475!=x476));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x483 = 1U;
	int32_t t105 = 627;

    t105 = ((x481+x482)<=(x483!=x484));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x485 = -36;
	int8_t x486 = INT8_MIN;
	int64_t x487 = -1LL;
	static uint8_t x488 = 35U;
	volatile int32_t t106 = 30379;

    t106 = ((x485+x486)<=(x487!=x488));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x493 = 395;
	int32_t x494 = -1;
	static uint32_t x495 = UINT32_MAX;
	static volatile int32_t t107 = -2909;

    t107 = ((x493+x494)<=(x495!=x496));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = INT8_MAX;
	volatile int32_t x498 = -1;
	int8_t x499 = 0;
	volatile int32_t x500 = INT32_MIN;
	int32_t t108 = -160114;

    t108 = ((x497+x498)<=(x499!=x500));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = INT16_MIN;
	int8_t x502 = 58;
	static volatile int16_t x503 = INT16_MIN;
	uint8_t x504 = 94U;
	volatile int32_t t109 = -1478;

    t109 = ((x501+x502)<=(x503!=x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x505 = -35;
	int8_t x508 = 28;
	volatile int32_t t110 = -30285720;

    t110 = ((x505+x506)<=(x507!=x508));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x509 = 23U;
	int32_t x510 = INT32_MIN;
	uint16_t x511 = 6486U;
	uint32_t x512 = 18750730U;
	int32_t t111 = 7083702;

    t111 = ((x509+x510)<=(x511!=x512));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint16_t x516 = 24U;

    t112 = ((x513+x514)<=(x515!=x516));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x517 = 42U;
	int64_t x518 = INT64_MIN;
	int8_t x519 = INT8_MAX;
	static volatile int32_t x520 = INT32_MIN;
	int32_t t113 = 35343794;

    t113 = ((x517+x518)<=(x519!=x520));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x521 = -185153130789888525LL;
	uint64_t x522 = 110645525768LLU;
	uint8_t x523 = UINT8_MAX;
	int16_t x524 = -1;
	int32_t t114 = -23117;

    t114 = ((x521+x522)<=(x523!=x524));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x525 = 1U;
	uint16_t x528 = 1U;
	int32_t t115 = 0;

    t115 = ((x525+x526)<=(x527!=x528));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x530 = -1;
	uint16_t x531 = 5U;
	int32_t x532 = INT32_MIN;
	int32_t t116 = -221;

    t116 = ((x529+x530)<=(x531!=x532));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint32_t x534 = 470332U;
	int32_t x535 = 409987;
	int32_t t117 = -1870256;

    t117 = ((x533+x534)<=(x535!=x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x537 = 38U;
	int16_t x538 = -962;
	volatile int64_t x540 = INT64_MAX;
	int32_t t118 = -54514;

    t118 = ((x537+x538)<=(x539!=x540));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x541 = 26700U;
	uint64_t x542 = UINT64_MAX;
	static volatile int8_t x544 = INT8_MAX;
	volatile int32_t t119 = -9124;

    t119 = ((x541+x542)<=(x543!=x544));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MAX;
	volatile int32_t t120 = -596274957;

    t120 = ((x545+x546)<=(x547!=x548));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x553 = INT64_MIN;
	int32_t x554 = 917;
	int64_t x555 = INT64_MAX;
	int64_t x556 = INT64_MIN;
	int32_t t121 = 1207;

    t121 = ((x553+x554)<=(x555!=x556));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x557 = UINT32_MAX;
	volatile uint64_t x558 = 13LLU;
	int8_t x559 = -1;
	volatile int64_t x560 = INT64_MAX;
	volatile int32_t t122 = -5;

    t122 = ((x557+x558)<=(x559!=x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x562 = UINT16_MAX;
	volatile uint16_t x563 = UINT16_MAX;
	int32_t t123 = -2492;

    t123 = ((x561+x562)<=(x563!=x564));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x565 = 2831643U;
	static int32_t x566 = INT32_MAX;
	uint32_t x567 = 222502U;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t124 = 2851161;

    t124 = ((x565+x566)<=(x567!=x568));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x569 = UINT64_MAX;
	static int16_t x571 = INT16_MIN;
	static int32_t x572 = 43;
	int32_t t125 = 40565098;

    t125 = ((x569+x570)<=(x571!=x572));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x577 = -31;
	uint8_t x578 = UINT8_MAX;
	int32_t x579 = INT32_MIN;

    t126 = ((x577+x578)<=(x579!=x580));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x582 = 441376048;
	uint16_t x583 = 2U;
	int32_t t127 = -4601886;

    t127 = ((x581+x582)<=(x583!=x584));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = 53;
	volatile int32_t x588 = -413;
	static int32_t t128 = 136;

    t128 = ((x585+x586)<=(x587!=x588));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x590 = -23;
	static int64_t x591 = INT64_MIN;
	uint16_t x592 = 42U;
	static int32_t t129 = 15;

    t129 = ((x589+x590)<=(x591!=x592));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x593 = 11U;
	volatile int64_t x594 = INT64_MIN;
	int8_t x595 = -1;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t130 = 19624;

    t130 = ((x593+x594)<=(x595!=x596));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x597 = INT32_MIN;
	static int64_t x598 = -1LL;
	uint16_t x600 = 2784U;
	volatile int32_t t131 = -27769268;

    t131 = ((x597+x598)<=(x599!=x600));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = 596;
	static int8_t x606 = INT8_MIN;
	static int32_t x607 = INT32_MIN;
	static volatile int32_t t132 = -1;

    t132 = ((x605+x606)<=(x607!=x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x610 = INT16_MIN;
	uint16_t x611 = 26803U;
	static volatile int16_t x612 = -1;
	int32_t t133 = 1893;

    t133 = ((x609+x610)<=(x611!=x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x617 = 44;
	int16_t x619 = -1;
	static int32_t x620 = INT32_MIN;
	static int32_t t134 = 8179274;

    t134 = ((x617+x618)<=(x619!=x620));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x621 = 5113079230094LLU;
	int8_t x624 = -1;
	static volatile int32_t t135 = -23;

    t135 = ((x621+x622)<=(x623!=x624));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x629 = INT8_MIN;
	volatile int32_t x630 = -1;
	uint32_t x631 = UINT32_MAX;
	volatile uint8_t x632 = 13U;
	volatile int32_t t136 = -358186;

    t136 = ((x629+x630)<=(x631!=x632));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x634 = 27LL;
	int8_t x635 = INT8_MIN;
	static int8_t x636 = INT8_MIN;
	static volatile int32_t t137 = 1;

    t137 = ((x633+x634)<=(x635!=x636));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x637 = UINT64_MAX;
	uint32_t x638 = 20708U;
	static int32_t x640 = INT32_MIN;
	volatile int32_t t138 = 534;

    t138 = ((x637+x638)<=(x639!=x640));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x641 = INT8_MIN;
	static int32_t x642 = -1;
	int8_t x643 = INT8_MIN;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t139 = -64915;

    t139 = ((x641+x642)<=(x643!=x644));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x645 = UINT32_MAX;
	static uint32_t x646 = 6U;
	int32_t x647 = INT32_MAX;
	int8_t x648 = INT8_MAX;
	int32_t t140 = -25958437;

    t140 = ((x645+x646)<=(x647!=x648));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x649 = 30U;
	int32_t x650 = INT32_MIN;
	int64_t x652 = INT64_MAX;
	int32_t t141 = -103723093;

    t141 = ((x649+x650)<=(x651!=x652));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x653 = INT8_MAX;
	static int64_t x654 = INT64_MIN;
	int32_t x656 = 11;

    t142 = ((x653+x654)<=(x655!=x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x657 = 2662697629272LLU;
	static int8_t x659 = INT8_MIN;
	static uint32_t x660 = UINT32_MAX;
	volatile int32_t t143 = 3;

    t143 = ((x657+x658)<=(x659!=x660));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x661 = INT16_MAX;
	static volatile int8_t x662 = INT8_MIN;
	volatile int64_t x664 = INT64_MIN;
	volatile int32_t t144 = 881984;

    t144 = ((x661+x662)<=(x663!=x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x669 = 20747U;
	volatile int16_t x670 = INT16_MIN;
	volatile int64_t x671 = -1LL;
	int32_t t145 = -1535;

    t145 = ((x669+x670)<=(x671!=x672));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = UINT32_MAX;
	static volatile uint16_t x674 = 2U;
	int16_t x675 = -1;
	int16_t x676 = INT16_MAX;
	int32_t t146 = -226790991;

    t146 = ((x673+x674)<=(x675!=x676));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x678 = INT16_MIN;
	uint32_t x680 = 23823023U;
	int32_t t147 = -987285;

    t147 = ((x677+x678)<=(x679!=x680));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x690 = 393160U;
	int16_t x691 = INT16_MAX;
	volatile int16_t x692 = INT16_MAX;
	int32_t t148 = -8021;

    t148 = ((x689+x690)<=(x691!=x692));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x697 = -14;
	int64_t x698 = -1LL;
	int8_t x699 = -3;
	volatile uint16_t x700 = UINT16_MAX;
	volatile int32_t t149 = -65;

    t149 = ((x697+x698)<=(x699!=x700));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x701 = INT64_MIN;
	uint8_t x703 = 3U;
	int16_t x704 = -1;
	static volatile int32_t t150 = 24;

    t150 = ((x701+x702)<=(x703!=x704));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x709 = INT64_MIN;
	volatile uint64_t x710 = 3880LLU;
	int16_t x711 = INT16_MIN;
	int8_t x712 = INT8_MAX;
	volatile int32_t t151 = -1577;

    t151 = ((x709+x710)<=(x711!=x712));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x718 = 0;
	static uint32_t x719 = UINT32_MAX;
	volatile uint64_t x720 = 113LLU;
	volatile int32_t t152 = -98198915;

    t152 = ((x717+x718)<=(x719!=x720));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x721 = 0;
	int8_t x723 = -1;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t153 = 5605;

    t153 = ((x721+x722)<=(x723!=x724));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x733 = 30;
	int8_t x734 = -4;
	int64_t x735 = -1LL;
	static volatile int16_t x736 = -46;
	int32_t t154 = -14756;

    t154 = ((x733+x734)<=(x735!=x736));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x737 = INT16_MIN;
	volatile uint8_t x738 = UINT8_MAX;
	volatile int32_t x739 = INT32_MAX;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t155 = 22792;

    t155 = ((x737+x738)<=(x739!=x740));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x741 = -2;
	int8_t x742 = 0;
	static volatile int32_t x743 = 72;
	int8_t x744 = -1;
	volatile int32_t t156 = 0;

    t156 = ((x741+x742)<=(x743!=x744));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x745 = INT16_MAX;
	volatile int64_t x746 = 1332122LL;
	uint16_t x748 = 899U;
	int32_t t157 = 5020471;

    t157 = ((x745+x746)<=(x747!=x748));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint64_t x750 = 282932127LLU;
	int8_t x752 = -1;

    t158 = ((x749+x750)<=(x751!=x752));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x753 = INT16_MIN;
	volatile int8_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;
	int32_t t159 = -29508;

    t159 = ((x753+x754)<=(x755!=x756));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x757 = 2U;
	int32_t x758 = INT32_MIN;
	uint16_t x759 = 10U;
	volatile int16_t x760 = 1003;

    t160 = ((x757+x758)<=(x759!=x760));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x761 = 36U;
	uint64_t x762 = 2048640877841077LLU;
	uint8_t x764 = 6U;
	int32_t t161 = 0;

    t161 = ((x761+x762)<=(x763!=x764));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x765 = INT8_MAX;
	volatile int16_t x766 = INT16_MAX;
	uint32_t x767 = 20U;
	uint32_t x768 = 259159U;
	static volatile int32_t t162 = -2579;

    t162 = ((x765+x766)<=(x767!=x768));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x769 = INT16_MIN;
	static int32_t x770 = 2665451;
	int8_t x771 = INT8_MIN;
	int32_t t163 = 14;

    t163 = ((x769+x770)<=(x771!=x772));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x777 = -1;
	uint8_t x778 = 86U;
	static int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	volatile int32_t t164 = 1391421;

    t164 = ((x777+x778)<=(x779!=x780));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x781 = -377;
	volatile int32_t x782 = 2169442;
	volatile uint8_t x783 = UINT8_MAX;
	int32_t t165 = 102;

    t165 = ((x781+x782)<=(x783!=x784));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x785 = 0;
	uint8_t x787 = 0U;
	int32_t x788 = 5;
	int32_t t166 = 1;

    t166 = ((x785+x786)<=(x787!=x788));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x789 = INT16_MIN;
	volatile int8_t x790 = INT8_MAX;
	int16_t x792 = 1;
	static volatile int32_t t167 = 16;

    t167 = ((x789+x790)<=(x791!=x792));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x793 = 820U;
	int16_t x794 = 1702;
	uint64_t x795 = UINT64_MAX;
	volatile int32_t t168 = 271093;

    t168 = ((x793+x794)<=(x795!=x796));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x801 = 5U;
	int32_t x802 = 340446647;
	volatile uint8_t x803 = 0U;
	uint64_t x804 = 202364514LLU;
	volatile int32_t t169 = 16;

    t169 = ((x801+x802)<=(x803!=x804));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x805 = 1U;
	uint16_t x806 = 19U;
	uint8_t x807 = UINT8_MAX;
	volatile int32_t t170 = -130;

    t170 = ((x805+x806)<=(x807!=x808));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x811 = 1U;
	volatile uint8_t x812 = 0U;
	volatile int32_t t171 = -28193;

    t171 = ((x809+x810)<=(x811!=x812));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x813 = INT8_MIN;
	static uint16_t x814 = 0U;
	uint64_t x815 = UINT64_MAX;
	int8_t x816 = INT8_MAX;
	volatile int32_t t172 = -9;

    t172 = ((x813+x814)<=(x815!=x816));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x818 = -1;
	int8_t x819 = INT8_MIN;
	int32_t t173 = 32;

    t173 = ((x817+x818)<=(x819!=x820));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x821 = UINT64_MAX;
	static volatile int64_t x822 = -1982194026386185LL;
	volatile int8_t x824 = 1;

    t174 = ((x821+x822)<=(x823!=x824));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x826 = INT32_MIN;
	uint32_t x828 = UINT32_MAX;
	int32_t t175 = 58085736;

    t175 = ((x825+x826)<=(x827!=x828));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x829 = 32756262LLU;
	uint8_t x830 = UINT8_MAX;
	static int16_t x831 = -1;
	static int32_t t176 = -12995;

    t176 = ((x829+x830)<=(x831!=x832));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x833 = 205999454LL;
	volatile uint16_t x834 = UINT16_MAX;
	int8_t x835 = INT8_MIN;
	uint8_t x836 = 29U;

    t177 = ((x833+x834)<=(x835!=x836));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x837 = INT64_MIN;
	static int32_t x838 = INT32_MAX;
	uint32_t x839 = 0U;
	int32_t t178 = -625063;

    t178 = ((x837+x838)<=(x839!=x840));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x841 = 2308541U;
	uint64_t x843 = 2363972429LLU;
	int32_t x844 = -29217180;
	static int32_t t179 = 770757;

    t179 = ((x841+x842)<=(x843!=x844));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x845 = -1;
	int32_t x846 = -1;

    t180 = ((x845+x846)<=(x847!=x848));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x849 = 17031U;
	uint64_t x850 = 3999810877121361LLU;
	uint16_t x851 = UINT16_MAX;
	int8_t x852 = -26;
	int32_t t181 = -7758;

    t181 = ((x849+x850)<=(x851!=x852));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x853 = -430;
	int64_t x854 = -1LL;
	int8_t x855 = -1;
	static int8_t x856 = INT8_MIN;

    t182 = ((x853+x854)<=(x855!=x856));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x857 = INT16_MAX;
	volatile int8_t x859 = INT8_MIN;
	int8_t x860 = INT8_MAX;
	int32_t t183 = 11557;

    t183 = ((x857+x858)<=(x859!=x860));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x861 = 5261445907254LLU;
	uint64_t x863 = 140LLU;
	static int64_t x864 = INT64_MAX;
	int32_t t184 = -34;

    t184 = ((x861+x862)<=(x863!=x864));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x865 = 356660U;
	uint64_t x866 = 170LLU;
	int32_t x867 = INT32_MIN;
	int32_t t185 = -6849169;

    t185 = ((x865+x866)<=(x867!=x868));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x869 = -1LL;
	uint32_t x870 = 320813U;
	int8_t x871 = INT8_MIN;
	int64_t x872 = -1LL;
	int32_t t186 = -2;

    t186 = ((x869+x870)<=(x871!=x872));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x873 = 18U;
	int64_t x875 = -1LL;
	int16_t x876 = 9;

    t187 = ((x873+x874)<=(x875!=x876));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x877 = INT64_MIN;
	static int32_t x878 = INT32_MAX;
	uint8_t x879 = UINT8_MAX;
	int32_t x880 = -1;

    t188 = ((x877+x878)<=(x879!=x880));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x882 = 6194233650789728544LLU;
	volatile int8_t x884 = INT8_MAX;
	static volatile int32_t t189 = -4;

    t189 = ((x881+x882)<=(x883!=x884));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x885 = -26LL;
	volatile int8_t x886 = -1;
	int8_t x887 = INT8_MIN;
	int16_t x888 = INT16_MIN;

    t190 = ((x885+x886)<=(x887!=x888));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x889 = INT16_MIN;
	int8_t x890 = -1;
	static volatile uint8_t x891 = UINT8_MAX;
	int32_t t191 = -683;

    t191 = ((x889+x890)<=(x891!=x892));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x893 = INT32_MIN;
	int64_t x894 = 7521233412LL;
	volatile int64_t x895 = -236837LL;
	int32_t t192 = 93839876;

    t192 = ((x893+x894)<=(x895!=x896));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x897 = 6100LLU;
	volatile int64_t x899 = INT64_MIN;
	uint8_t x900 = 91U;

    t193 = ((x897+x898)<=(x899!=x900));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x901 = 1666;
	volatile int16_t x902 = INT16_MIN;
	uint32_t x903 = 14763U;
	int16_t x904 = INT16_MIN;
	static volatile int32_t t194 = 0;

    t194 = ((x901+x902)<=(x903!=x904));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x905 = INT8_MAX;
	static uint8_t x906 = 1U;
	int8_t x908 = INT8_MIN;
	volatile int32_t t195 = -1;

    t195 = ((x905+x906)<=(x907!=x908));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x909 = 171611692283LL;
	int8_t x911 = -1;
	int32_t t196 = -7;

    t196 = ((x909+x910)<=(x911!=x912));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x913 = UINT8_MAX;
	int8_t x916 = INT8_MAX;
	volatile int32_t t197 = -2048567;

    t197 = ((x913+x914)<=(x915!=x916));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x918 = -1;
	volatile int64_t x919 = INT64_MIN;
	static uint16_t x920 = 21U;
	static volatile int32_t t198 = -416865545;

    t198 = ((x917+x918)<=(x919!=x920));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x922 = INT16_MAX;
	static volatile int64_t x923 = -6780LL;
	int64_t x924 = INT64_MIN;
	volatile int32_t t199 = 5301;

    t199 = ((x921+x922)<=(x923!=x924));

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

