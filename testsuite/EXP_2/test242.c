
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

static int8_t x2 = -1;
static uint16_t x3 = 19637U;
int16_t x11 = 18;
volatile int64_t t2 = -997588300880LL;
int16_t x13 = -1;
uint16_t x15 = 241U;
volatile int32_t x20 = 37;
int16_t x26 = -1;
uint32_t x28 = 59U;
static uint32_t t6 = 27111728U;
volatile int32_t t7 = -90127;
volatile uint32_t t9 = 6U;
volatile uint8_t x50 = 23U;
int16_t x52 = INT16_MIN;
volatile int32_t t10 = -259560;
int32_t x55 = -1;
int16_t x62 = INT16_MIN;
int64_t t14 = 557432530531725LL;
volatile int64_t x76 = -1LL;
volatile int64_t t15 = -3738107LL;
volatile uint16_t x78 = UINT16_MAX;
uint32_t x115 = 7339U;
static int8_t x116 = -1;
uint32_t x123 = 123U;
int64_t x124 = INT64_MIN;
uint64_t x129 = UINT64_MAX;
static int32_t x137 = INT32_MAX;
uint32_t x148 = 45U;
int16_t x161 = -1;
volatile int32_t x172 = INT32_MAX;
int8_t x173 = INT8_MIN;
int64_t x175 = INT64_MAX;
static volatile int8_t x176 = 1;
static volatile uint32_t x177 = UINT32_MAX;
uint16_t x187 = 14249U;
int8_t x189 = INT8_MAX;
uint8_t x198 = 14U;
int64_t x199 = INT64_MAX;
volatile int8_t x205 = INT8_MIN;
uint8_t x229 = 0U;
uint32_t x246 = 499U;
int32_t x253 = INT32_MAX;
int32_t x256 = -1;
static int32_t x260 = INT32_MIN;
int32_t x261 = -1;
int64_t x265 = INT64_MAX;
static int64_t x277 = -1LL;
int16_t x278 = -13058;
volatile uint8_t x280 = 10U;
int64_t t53 = -3280492205LL;
static int64_t t54 = 495059343LL;
static int32_t x289 = INT32_MIN;
int32_t x296 = INT32_MAX;
static uint8_t x300 = 9U;
int64_t x307 = INT64_MAX;
volatile int64_t t59 = 35718023LL;
int64_t x310 = -142526LL;
volatile int64_t t60 = 43177778LL;
int32_t x313 = INT32_MIN;
int16_t x315 = -2;
int16_t x341 = INT16_MIN;
uint64_t x344 = 14022LLU;
volatile uint64_t t66 = 0LLU;
static volatile int32_t x354 = INT32_MIN;
volatile int16_t x355 = -1;
static int16_t x357 = INT16_MAX;
int32_t x362 = -27;
uint32_t x363 = 110087517U;
volatile uint64_t t70 = 46988432465144LLU;
int8_t x365 = INT8_MAX;
uint32_t x367 = UINT32_MAX;
uint16_t x374 = 55U;
uint64_t x382 = 1511688LLU;
volatile uint64_t t77 = 1943858LLU;
int64_t t78 = 155028329236LL;
uint64_t x413 = 158663942348LLU;
int64_t x419 = INT64_MAX;
uint64_t x423 = UINT64_MAX;
static uint64_t t81 = 2242242088LLU;
static int64_t x427 = -255326453LL;
uint32_t x428 = 1U;
int32_t x430 = INT32_MIN;
static int8_t x433 = -1;
static volatile uint32_t x445 = 7388840U;
int16_t x448 = INT16_MIN;
uint16_t x449 = UINT16_MAX;
int32_t x469 = INT32_MIN;
uint16_t x473 = UINT16_MAX;
volatile int64_t x480 = -1LL;
uint8_t x486 = 3U;
uint8_t x487 = 0U;
uint64_t x488 = UINT64_MAX;
static uint32_t x489 = UINT32_MAX;
int16_t x491 = INT16_MIN;
static int8_t x495 = INT8_MIN;
int8_t x496 = 1;
int32_t x500 = -33;
int64_t x514 = -5336LL;
static uint32_t x516 = 25423672U;
int8_t x519 = INT8_MIN;
int8_t x524 = INT8_MIN;
uint16_t x529 = UINT16_MAX;
uint32_t x545 = UINT32_MAX;
int64_t x564 = -20LL;
int64_t x566 = INT64_MIN;
int32_t x567 = -1;
uint8_t x568 = 27U;
static uint16_t x623 = 30741U;
int8_t x624 = INT8_MIN;
volatile int64_t x627 = -25748878323593984LL;
static volatile int64_t t126 = -1844128531073993LL;
int64_t x634 = 21178362LL;
int32_t x636 = 165;
volatile int16_t x646 = -1;
static volatile int32_t x647 = INT32_MIN;
volatile int8_t x648 = 5;
int32_t x651 = INT32_MIN;
volatile uint32_t t131 = 5352U;
static volatile uint64_t t133 = 3383117822804LLU;
int32_t x662 = 12939;
volatile int16_t x667 = INT16_MAX;
static volatile int32_t t135 = -926;
uint32_t x680 = UINT32_MAX;
int64_t t137 = -8488404089LL;
int64_t t139 = 35130723LL;
static int8_t x694 = INT8_MIN;
volatile uint64_t t141 = 13LLU;
uint16_t x700 = 3061U;
int32_t x706 = -390447;
static volatile int64_t t143 = -4401892750708326LL;
volatile uint32_t x713 = UINT32_MAX;
volatile int8_t x714 = INT8_MAX;
uint8_t x718 = UINT8_MAX;
static int32_t x723 = 33772530;
volatile uint32_t x724 = 6062U;
static int64_t x725 = INT64_MIN;
int64_t x728 = INT64_MAX;
uint32_t t148 = 994U;
uint16_t x734 = UINT16_MAX;
int8_t x735 = INT8_MIN;
uint64_t x736 = UINT64_MAX;
static uint64_t x746 = UINT64_MAX;
uint32_t x752 = UINT32_MAX;
volatile int64_t t152 = -925487948896372LL;
static int64_t x753 = -1LL;
int16_t x756 = INT16_MAX;
uint64_t t153 = 21933588394135471LLU;
uint8_t x762 = UINT8_MAX;
int64_t t156 = -23609574890505LL;
int16_t x769 = 6039;
int32_t x773 = INT32_MIN;
int32_t t158 = 7747129;
int64_t x780 = INT64_MIN;
int32_t x793 = 65371454;
int8_t x795 = -3;
uint16_t x796 = 3U;
int16_t x797 = INT16_MAX;
uint8_t x800 = UINT8_MAX;
volatile uint64_t t166 = 25046371663962LLU;
int16_t x818 = -1;
static volatile uint64_t x822 = UINT64_MAX;
volatile int8_t x826 = 0;
uint64_t x827 = 1169249LLU;
uint16_t x833 = UINT16_MAX;
volatile uint16_t x837 = 781U;
uint32_t x840 = UINT32_MAX;
int8_t x853 = 2;
volatile int16_t x856 = 1336;
int64_t t174 = -3158359118834685163LL;
int16_t x858 = INT16_MIN;
uint64_t x859 = 241573072000200LLU;
int8_t x871 = 6;
int8_t x872 = INT8_MIN;
static volatile int64_t t179 = 2332664LL;
int32_t x886 = 2973;
static volatile int64_t t181 = -609892741LL;
static int16_t x889 = -6;
int64_t x892 = INT64_MIN;
volatile int64_t x899 = -1LL;
static volatile uint64_t x904 = 1LLU;
volatile int16_t x906 = -4;
int16_t x907 = -2739;
volatile uint64_t t188 = 14788LLU;
int8_t x918 = 3;
uint64_t t189 = 6501466425806959952LLU;
static int32_t x924 = 152203086;
static volatile uint32_t x925 = 12890U;
int16_t x930 = INT16_MAX;
int16_t x932 = INT16_MIN;
int32_t t193 = -92375;
int64_t x939 = -2225905477LL;
int8_t x940 = -1;
volatile int64_t x941 = INT64_MAX;
int16_t x946 = -1;
static int32_t x948 = 15;


void f0(void) {
    	volatile uint32_t x1 = 56238U;
	int32_t x4 = 3442538;
	uint32_t t0 = 8214444U;

    t0 = ((x1/(x2-x3))/x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 11705U;
	volatile int16_t x6 = -26;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = 986951654041739LL;
	int64_t t1 = -1770630921706040LL;

    t1 = ((x5/(x6-x7))/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MAX;
	static int8_t x12 = -54;

    t2 = ((x9/(x10-x11))/x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = 5283521U;
	volatile int16_t x16 = -1908;
	static volatile uint32_t t3 = 114124458U;

    t3 = ((x13/(x14-x15))/x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	int8_t x18 = -15;
	volatile int16_t x19 = -1;
	static volatile int32_t t4 = 0;

    t4 = ((x17/(x18-x19))/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MAX;
	uint8_t x22 = 0U;
	static volatile int16_t x23 = INT16_MIN;
	static int8_t x24 = INT8_MAX;
	int32_t t5 = 382596;

    t5 = ((x21/(x22-x23))/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	volatile int32_t x27 = -774213495;

    t6 = ((x25/(x26-x27))/x28);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 10;

    t7 = ((x33/(x34-x35))/x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MAX;
	static int16_t x38 = 1273;
	uint16_t x39 = 14784U;
	volatile int8_t x40 = -27;
	int64_t t8 = -3147749LL;

    t8 = ((x37/(x38-x39))/x40);

    if (t8 != 25283574253227LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 2U;
	uint8_t x46 = 4U;
	uint32_t x47 = 5174U;
	static int16_t x48 = INT16_MIN;

    t9 = ((x45/(x46-x47))/x48);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	volatile int16_t x51 = 61;

    t10 = ((x49/(x50-x51))/x52);

    if (t10 != 1724) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x53 = -11;
	uint16_t x54 = 464U;
	uint32_t x56 = 2216152U;
	uint32_t t11 = 514580U;

    t11 = ((x53/(x54-x55))/x56);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = 7098LL;
	volatile int64_t x58 = 3244248483632525LL;
	static int8_t x59 = -7;
	uint64_t x60 = 88627804932506685LLU;
	volatile uint64_t t12 = 8904698174967LLU;

    t12 = ((x57/(x58-x59))/x60);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MAX;
	int32_t x63 = 86;
	int32_t x64 = -23;
	int32_t t13 = -28968877;

    t13 = ((x61/(x62-x63))/x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 2106;
	int16_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;

    t14 = ((x69/(x70-x71))/x72);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	static uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 9248U;

    t15 = ((x73/(x74-x75))/x76);

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x77 = UINT16_MAX;
	uint32_t x79 = 251166U;
	static volatile uint64_t x80 = 55046295833LLU;
	volatile uint64_t t16 = 4364800417416256LLU;

    t16 = ((x77/(x78-x79))/x80);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = 3019915867481LL;
	static int16_t x88 = INT16_MIN;
	int64_t t17 = -88965403103207LL;

    t17 = ((x85/(x86-x87))/x88);

    if (t17 != 93LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MIN;
	static uint16_t x90 = UINT16_MAX;
	static uint32_t x91 = 5922137U;
	int32_t x92 = 2934451;
	uint32_t t18 = 7U;

    t18 = ((x89/(x90-x91))/x92);

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x93 = 7U;
	static int8_t x94 = -1;
	int16_t x95 = -2;
	static int32_t x96 = INT32_MIN;
	volatile int32_t t19 = -3131;

    t19 = ((x93/(x94-x95))/x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x98 = -7299993367LL;
	int8_t x99 = INT8_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t20 = 15166446LL;

    t20 = ((x97/(x98-x99))/x100);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x105 = -1;
	uint32_t x106 = 1281U;
	uint32_t x107 = 0U;
	int16_t x108 = -1;
	static uint32_t t21 = 2U;

    t21 = ((x105/(x106-x107))/x108);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	static volatile uint32_t t22 = 51U;

    t22 = ((x113/(x114-x115))/x116);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x121 = -1LL;
	static volatile uint64_t x122 = 1805136693LLU;
	volatile uint64_t t23 = 3605878691440LLU;

    t23 = ((x121/(x122-x123))/x124);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x130 = INT8_MIN;
	int32_t x131 = -1;
	int32_t x132 = -1;
	volatile uint64_t t24 = 17113999398678723LLU;

    t24 = ((x129/(x130-x131))/x132);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x133 = 624U;
	static uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 807607U;
	static volatile int16_t x136 = -2659;
	static volatile uint32_t t25 = 159U;

    t25 = ((x133/(x134-x135))/x136);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x138 = 199U;
	uint8_t x139 = 3U;
	int16_t x140 = INT16_MIN;
	static volatile int32_t t26 = 0;

    t26 = ((x137/(x138-x139))/x140);

    if (t26 != -334) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x141 = 25764U;
	static int8_t x142 = 2;
	int32_t x143 = -55;
	int32_t x144 = -3;
	int32_t t27 = 13854;

    t27 = ((x141/(x142-x143))/x144);

    if (t27 != -150) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 454U;
	int64_t x146 = 2889045140LL;
	int32_t x147 = INT32_MIN;
	int64_t t28 = 28994063863LL;

    t28 = ((x145/(x146-x147))/x148);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x153 = 7U;
	int8_t x154 = -1;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;
	int64_t t29 = 811807877LL;

    t29 = ((x153/(x154-x155))/x156);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x157 = INT64_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = 1;
	static int16_t x160 = -9961;
	int64_t t30 = -322654LL;

    t30 = ((x157/(x158-x159))/x160);

    if (t30 != -7177894592674LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x162 = INT16_MAX;
	volatile int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MAX;
	volatile int32_t t31 = -13185;

    t31 = ((x161/(x162-x163))/x164);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = INT8_MIN;
	int64_t x166 = -60767434696LL;
	int16_t x167 = INT16_MIN;
	volatile uint32_t x168 = UINT32_MAX;
	int64_t t32 = -2364LL;

    t32 = ((x165/(x166-x167))/x168);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x169 = 24;
	int8_t x170 = -1;
	int16_t x171 = INT16_MAX;
	int32_t t33 = -110188;

    t33 = ((x169/(x170-x171))/x172);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x174 = 2;
	static int64_t t34 = -19058955LL;

    t34 = ((x173/(x174-x175))/x176);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x178 = 111396158LL;
	int32_t x179 = -1;
	uint64_t x180 = 20LLU;
	volatile uint64_t t35 = 948LLU;

    t35 = ((x177/(x178-x179))/x180);

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MAX;
	uint16_t x183 = 1U;
	static int8_t x184 = -1;
	int64_t t36 = -102951LL;

    t36 = ((x181/(x182-x183))/x184);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x185 = 85847239244886254LLU;
	int8_t x186 = INT8_MIN;
	static int32_t x188 = INT32_MIN;
	volatile uint64_t t37 = 160027956413316LLU;

    t37 = ((x185/(x186-x187))/x188);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x190 = -41;
	uint32_t x191 = 752520U;
	uint32_t x192 = 79496576U;
	uint32_t t38 = 43U;

    t38 = ((x189/(x190-x191))/x192);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x193 = 5138486085LLU;
	uint64_t x194 = UINT64_MAX;
	uint16_t x195 = 1105U;
	volatile int64_t x196 = INT64_MIN;
	uint64_t t39 = 2463671413612LLU;

    t39 = ((x193/(x194-x195))/x196);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x197 = -1361;
	int16_t x200 = INT16_MIN;
	int64_t t40 = -1083496438318453LL;

    t40 = ((x197/(x198-x199))/x200);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x206 = 921833025794792553LLU;
	uint8_t x207 = 2U;
	volatile int8_t x208 = 25;
	volatile uint64_t t41 = 7780377693621563LLU;

    t41 = ((x205/(x206-x207))/x208);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x209 = INT16_MAX;
	volatile uint16_t x210 = 10U;
	static uint16_t x211 = 23U;
	int8_t x212 = INT8_MIN;
	int32_t t42 = -310439;

    t42 = ((x209/(x210-x211))/x212);

    if (t42 != 19) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = 3;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = 1;
	int64_t x220 = -1LL;
	volatile int64_t t43 = -1056273LL;

    t43 = ((x217/(x218-x219))/x220);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = 2645U;
	int32_t t44 = -1;

    t44 = ((x229/(x230-x231))/x232);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x233 = INT64_MIN;
	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = UINT8_MAX;
	volatile uint32_t x236 = UINT32_MAX;
	int64_t t45 = 14312950LL;

    t45 = ((x233/(x234-x235))/x236);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x237 = INT64_MAX;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = 167;
	static volatile int32_t x240 = -94846;
	static int64_t t46 = -25881778LL;

    t46 = ((x237/(x238-x239))/x240);

    if (t46 != 2952657270LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x245 = 218177LLU;
	static int16_t x247 = 1;
	static volatile int8_t x248 = -25;
	volatile uint64_t t47 = 58020767441741LLU;

    t47 = ((x245/(x246-x247))/x248);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	static int32_t t48 = -1886541;

    t48 = ((x253/(x254-x255))/x256);

    if (t48 != 16777215) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x257 = INT8_MIN;
	int16_t x258 = 403;
	uint64_t x259 = UINT64_MAX;
	uint64_t t49 = 131LLU;

    t49 = ((x257/(x258-x259))/x260);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x262 = UINT8_MAX;
	static volatile int16_t x263 = INT16_MIN;
	uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t50 = 102966U;

    t50 = ((x261/(x262-x263))/x264);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x266 = -61265978291567LL;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -1;
	int64_t t51 = 1629719660608814624LL;

    t51 = ((x265/(x266-x267))/x268);

    if (t51 != 150546LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x269 = INT32_MIN;
	int32_t x270 = -4628;
	uint8_t x271 = 87U;
	int8_t x272 = INT8_MIN;
	int32_t t52 = -13453;

    t52 = ((x269/(x270-x271))/x272);

    if (t52 != -3558) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x279 = 50;

    t53 = ((x277/(x278-x279))/x280);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x285 = -1;
	uint8_t x286 = 0U;
	static int16_t x287 = 39;
	static int64_t x288 = INT64_MIN;

    t54 = ((x285/(x286-x287))/x288);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x290 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = 1U;
	int32_t t55 = -98;

    t55 = ((x289/(x290-x291))/x292);

    if (t55 != 32704) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x293 = INT32_MIN;
	volatile int16_t x294 = INT16_MIN;
	uint8_t x295 = 61U;
	int32_t t56 = 11;

    t56 = ((x293/(x294-x295))/x296);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x297 = 36;
	int8_t x298 = INT8_MIN;
	static volatile int64_t x299 = 58579570182879287LL;
	int64_t t57 = -967123LL;

    t57 = ((x297/(x298-x299))/x300);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	volatile int16_t x302 = INT16_MAX;
	volatile uint16_t x303 = UINT16_MAX;
	static int8_t x304 = INT8_MAX;
	volatile int32_t t58 = 1699;

    t58 = ((x301/(x302-x303))/x304);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x305 = INT64_MAX;
	int8_t x306 = -1;
	int64_t x308 = INT64_MIN;

    t59 = ((x305/(x306-x307))/x308);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x309 = INT8_MAX;
	int32_t x311 = 49813900;
	int32_t x312 = 17792695;

    t60 = ((x309/(x310-x311))/x312);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x314 = -1;
	int64_t x316 = INT64_MIN;
	static int64_t t61 = -1505897568872414LL;

    t61 = ((x313/(x314-x315))/x316);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x325 = 2100U;
	volatile uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	static int32_t x328 = INT32_MAX;
	uint64_t t62 = 1730890829649336608LLU;

    t62 = ((x325/(x326-x327))/x328);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x333 = 28880U;
	uint64_t x334 = UINT64_MAX;
	int64_t x335 = -26961643703932567LL;
	static uint32_t x336 = 63295U;
	volatile uint64_t t63 = 3869960LLU;

    t63 = ((x333/(x334-x335))/x336);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint8_t x337 = 19U;
	uint64_t x338 = 292237LLU;
	volatile uint8_t x339 = UINT8_MAX;
	int32_t x340 = INT32_MAX;
	volatile uint64_t t64 = 15416355278LLU;

    t64 = ((x337/(x338-x339))/x340);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x342 = 2U;
	int64_t x343 = INT64_MAX;
	uint64_t t65 = 1683315006761651LLU;

    t65 = ((x341/(x342-x343))/x344);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x345 = 1306U;
	int64_t x346 = -837460LL;
	int8_t x347 = INT8_MAX;
	static uint64_t x348 = 15646158LLU;

    t66 = ((x345/(x346-x347))/x348);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x349 = -1;
	volatile int16_t x350 = INT16_MIN;
	static uint16_t x351 = 2676U;
	uint32_t x352 = UINT32_MAX;
	uint32_t t67 = 31U;

    t67 = ((x349/(x350-x351))/x352);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x353 = UINT32_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t68 = 231153964460LL;

    t68 = ((x353/(x354-x355))/x356);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x358 = UINT16_MAX;
	static volatile int32_t x359 = INT32_MAX;
	uint8_t x360 = 35U;
	static int32_t t69 = 2;

    t69 = ((x357/(x358-x359))/x360);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x361 = 393914U;
	static uint64_t x364 = 5LLU;

    t70 = ((x361/(x362-x363))/x364);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x366 = 105;
	static volatile int16_t x368 = -1;
	uint32_t t71 = 875448U;

    t71 = ((x365/(x366-x367))/x368);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x373 = 1U;
	int32_t x375 = INT32_MAX;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t72 = -14;

    t72 = ((x373/(x374-x375))/x376);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x381 = -1;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = 59402514U;
	uint64_t t73 = 4219094330408206LLU;

    t73 = ((x381/(x382-x383))/x384);

    if (t73 != 205407LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x385 = 3323U;
	int8_t x386 = INT8_MIN;
	static volatile int64_t x387 = -1LL;
	int8_t x388 = -1;
	volatile int64_t t74 = 3944264443LL;

    t74 = ((x385/(x386-x387))/x388);

    if (t74 != 26LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	static uint8_t x392 = 2U;
	int64_t t75 = -93764826LL;

    t75 = ((x389/(x390-x391))/x392);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x393 = INT32_MIN;
	static int16_t x394 = -1;
	volatile int32_t x395 = 434344;
	int64_t x396 = INT64_MAX;
	volatile int64_t t76 = 431971520958LL;

    t76 = ((x393/(x394-x395))/x396);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 27244316010407LLU;
	volatile uint16_t x403 = 8102U;
	int32_t x404 = -1;

    t77 = ((x401/(x402-x403))/x404);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x405 = 211;
	uint32_t x406 = UINT32_MAX;
	uint32_t x407 = 7U;
	int64_t x408 = -1LL;

    t78 = ((x405/(x406-x407))/x408);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x414 = 7U;
	int8_t x415 = INT8_MIN;
	uint16_t x416 = 3U;
	uint64_t t79 = 104196LLU;

    t79 = ((x413/(x414-x415))/x416);

    if (t79 != 391762820LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x417 = 12471659U;
	volatile uint16_t x418 = 6419U;
	int64_t x420 = -775096949260837231LL;
	int64_t t80 = -25773LL;

    t80 = ((x417/(x418-x419))/x420);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x421 = 14U;
	int8_t x422 = INT8_MIN;
	uint32_t x424 = 1012432U;

    t81 = ((x421/(x422-x423))/x424);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x425 = 31858;
	int16_t x426 = INT16_MIN;
	volatile int64_t t82 = -21256570071750LL;

    t82 = ((x425/(x426-x427))/x428);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x429 = 1299U;
	volatile int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MIN;
	int64_t t83 = -4027499839511LL;

    t83 = ((x429/(x430-x431))/x432);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x434 = -1LL;
	uint32_t x435 = 67U;
	volatile int32_t x436 = -1377147;
	int64_t t84 = 469540729178810578LL;

    t84 = ((x433/(x434-x435))/x436);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x437 = INT32_MIN;
	uint32_t x438 = 23119U;
	uint8_t x439 = UINT8_MAX;
	int8_t x440 = -1;
	static uint32_t t85 = 18397U;

    t85 = ((x437/(x438-x439))/x440);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x441 = 3889U;
	uint32_t x442 = UINT32_MAX;
	int8_t x443 = INT8_MAX;
	int32_t x444 = INT32_MIN;
	static uint32_t t86 = 1335U;

    t86 = ((x441/(x442-x443))/x444);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x446 = INT16_MAX;
	uint64_t x447 = UINT64_MAX;
	uint64_t t87 = 725981920272512162LLU;

    t87 = ((x445/(x446-x447))/x448);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x450 = 12;
	int16_t x451 = INT16_MIN;
	int32_t x452 = -1;
	static volatile int32_t t88 = 98;

    t88 = ((x449/(x450-x451))/x452);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	static int8_t x454 = 7;
	uint16_t x455 = UINT16_MAX;
	static volatile uint32_t x456 = 1845U;
	volatile uint32_t t89 = 101126U;

    t89 = ((x453/(x454-x455))/x456);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x457 = UINT16_MAX;
	static volatile uint64_t x458 = 181482329030LLU;
	static int64_t x459 = INT64_MAX;
	int32_t x460 = INT32_MAX;
	uint64_t t90 = 80947316LLU;

    t90 = ((x457/(x458-x459))/x460);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x461 = -1;
	uint8_t x462 = UINT8_MAX;
	static int16_t x463 = -3;
	int8_t x464 = INT8_MAX;
	int32_t t91 = -1;

    t91 = ((x461/(x462-x463))/x464);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x465 = INT16_MIN;
	uint64_t x466 = 82776323680LLU;
	static int16_t x467 = INT16_MAX;
	int8_t x468 = -1;
	uint64_t t92 = 21243LLU;

    t92 = ((x465/(x466-x467))/x468);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x470 = -4346LL;
	int64_t x471 = -1LL;
	int8_t x472 = INT8_MIN;
	int64_t t93 = -1041LL;

    t93 = ((x469/(x470-x471))/x472);

    if (t93 != -3861LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x474 = 69U;
	uint32_t x475 = UINT32_MAX;
	int32_t x476 = INT32_MIN;
	volatile uint32_t t94 = 153324973U;

    t94 = ((x473/(x474-x475))/x476);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x477 = UINT8_MAX;
	volatile int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MIN;
	int64_t t95 = 7477136424LL;

    t95 = ((x477/(x478-x479))/x480);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x481 = 0;
	int32_t x482 = INT32_MIN;
	int8_t x483 = INT8_MIN;
	int32_t x484 = -13;
	volatile int32_t t96 = 312020;

    t96 = ((x481/(x482-x483))/x484);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x485 = UINT64_MAX;
	static uint64_t t97 = 41613125177LLU;

    t97 = ((x485/(x486-x487))/x488);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x490 = UINT64_MAX;
	int64_t x492 = -184475226053366929LL;
	volatile uint64_t t98 = 6488835308LLU;

    t98 = ((x489/(x490-x491))/x492);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x493 = INT32_MIN;
	volatile int16_t x494 = INT16_MIN;
	volatile int32_t t99 = 312540270;

    t99 = ((x493/(x494-x495))/x496);

    if (t99 != 65793) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x497 = 1729726666LLU;
	uint16_t x498 = UINT16_MAX;
	int32_t x499 = -126808;
	volatile uint64_t t100 = 266707LLU;

    t100 = ((x497/(x498-x499))/x500);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x509 = INT64_MAX;
	volatile uint32_t x510 = UINT32_MAX;
	uint16_t x511 = 0U;
	uint16_t x512 = 3U;
	volatile int64_t t101 = 62476680114879LL;

    t101 = ((x509/(x510-x511))/x512);

    if (t101 != 715827882LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x513 = 1152;
	uint32_t x515 = UINT32_MAX;
	int64_t t102 = 183109410866LL;

    t102 = ((x513/(x514-x515))/x516);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x517 = -1;
	volatile int64_t x518 = -1LL;
	int64_t x520 = -4LL;
	int64_t t103 = 394LL;

    t103 = ((x517/(x518-x519))/x520);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x521 = -1;
	volatile uint64_t x522 = UINT64_MAX;
	static int8_t x523 = 23;
	volatile uint64_t t104 = 1179665483405231LLU;

    t104 = ((x521/(x522-x523))/x524);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x525 = INT64_MAX;
	static int16_t x526 = INT16_MIN;
	int32_t x527 = INT32_MIN;
	static int8_t x528 = 6;
	volatile int64_t t105 = -12586797207105997LL;

    t105 = ((x525/(x526-x527))/x528);

    if (t105 != 715838805LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x530 = UINT32_MAX;
	static int16_t x531 = INT16_MIN;
	int16_t x532 = -194;
	volatile uint32_t t106 = 2847U;

    t106 = ((x529/(x530-x531))/x532);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x533 = 6274LL;
	int16_t x534 = INT16_MAX;
	uint8_t x535 = 3U;
	static int8_t x536 = INT8_MIN;
	volatile int64_t t107 = -58887LL;

    t107 = ((x533/(x534-x535))/x536);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x541 = 55U;
	int32_t x542 = INT32_MIN;
	uint64_t x543 = 4364554802671760700LLU;
	uint8_t x544 = 13U;
	uint64_t t108 = 8017122470367806801LLU;

    t108 = ((x541/(x542-x543))/x544);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x546 = 435;
	int16_t x547 = INT16_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	uint64_t t109 = 254LLU;

    t109 = ((x545/(x546-x547))/x548);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x549 = UINT64_MAX;
	int16_t x550 = 1;
	int64_t x551 = 36606788025571034LL;
	volatile uint64_t x552 = UINT64_MAX;
	uint64_t t110 = 7754802002564LLU;

    t110 = ((x549/(x550-x551))/x552);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x553 = 8056163LLU;
	uint8_t x554 = 51U;
	static volatile int16_t x555 = -1;
	int8_t x556 = -5;
	uint64_t t111 = 2558418863666LLU;

    t111 = ((x553/(x554-x555))/x556);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x557 = -5351;
	static uint8_t x558 = UINT8_MAX;
	int64_t x559 = -1LL;
	uint8_t x560 = 3U;
	int64_t t112 = -34994035614636LL;

    t112 = ((x557/(x558-x559))/x560);

    if (t112 != -6LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x561 = 27U;
	int8_t x562 = -1;
	volatile uint32_t x563 = 5464036U;
	volatile int64_t t113 = -1279706531720LL;

    t113 = ((x561/(x562-x563))/x564);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x565 = INT64_MIN;
	int64_t t114 = 0LL;

    t114 = ((x565/(x566-x567))/x568);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x573 = -26;
	int32_t x574 = INT32_MIN;
	int16_t x575 = -3;
	uint64_t x576 = 144LLU;
	static volatile uint64_t t115 = 21231749531LLU;

    t115 = ((x573/(x574-x575))/x576);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x577 = -122907411344707LL;
	int32_t x578 = -1;
	static volatile int32_t x579 = INT32_MIN;
	volatile int16_t x580 = -1;
	int64_t t116 = 768625723430002LL;

    t116 = ((x577/(x578-x579))/x580);

    if (t116 != 57233LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x581 = -109LL;
	static uint32_t x582 = 2397U;
	uint8_t x583 = 2U;
	int32_t x584 = -1;
	volatile int64_t t117 = -55623934LL;

    t117 = ((x581/(x582-x583))/x584);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x589 = INT64_MIN;
	int64_t x590 = -14426628103LL;
	int8_t x591 = 0;
	volatile int8_t x592 = 37;
	int64_t t118 = 44404450LL;

    t118 = ((x589/(x590-x591))/x592);

    if (t118 != 17279181LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x593 = INT16_MIN;
	int64_t x594 = 3720932076104034LL;
	static volatile int32_t x595 = 634404;
	int16_t x596 = INT16_MIN;
	volatile int64_t t119 = 214080LL;

    t119 = ((x593/(x594-x595))/x596);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x597 = 11U;
	int16_t x598 = INT16_MIN;
	int8_t x599 = -11;
	uint16_t x600 = UINT16_MAX;
	static volatile int32_t t120 = 54274;

    t120 = ((x597/(x598-x599))/x600);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x605 = 5;
	int64_t x606 = INT64_MAX;
	uint8_t x607 = 15U;
	volatile int8_t x608 = -1;
	int64_t t121 = 39LL;

    t121 = ((x605/(x606-x607))/x608);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x609 = 30U;
	static int64_t x610 = INT64_MIN;
	int64_t x611 = -1LL;
	int16_t x612 = -1;
	static int64_t t122 = -44LL;

    t122 = ((x609/(x610-x611))/x612);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x613 = UINT8_MAX;
	uint64_t x614 = 3410377327593LLU;
	int8_t x615 = INT8_MAX;
	volatile int16_t x616 = -5582;
	uint64_t t123 = 15075LLU;

    t123 = ((x613/(x614-x615))/x616);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x617 = -11208006439173LL;
	int64_t x618 = 8304919309LL;
	static volatile uint16_t x619 = UINT16_MAX;
	static int16_t x620 = 455;
	static volatile int64_t t124 = -32724420982LL;

    t124 = ((x617/(x618-x619))/x620);

    if (t124 != -2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x621 = -1LL;
	int8_t x622 = INT8_MAX;
	int64_t t125 = 374596707917093896LL;

    t125 = ((x621/(x622-x623))/x624);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x625 = INT64_MIN;
	int8_t x626 = -1;
	int64_t x628 = INT64_MAX;

    t126 = ((x625/(x626-x627))/x628);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x629 = -43327LL;
	int64_t x630 = -1LL;
	int16_t x631 = -29;
	static int16_t x632 = 222;
	volatile int64_t t127 = 1924320897380LL;

    t127 = ((x629/(x630-x631))/x632);

    if (t127 != -6LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x633 = 78U;
	static volatile int32_t x635 = INT32_MIN;
	volatile int64_t t128 = 15727LL;

    t128 = ((x633/(x634-x635))/x636);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x637 = INT64_MAX;
	int16_t x638 = INT16_MIN;
	int8_t x639 = -1;
	static volatile int32_t x640 = -2806819;
	static int64_t t129 = 19821LL;

    t129 = ((x637/(x638-x639))/x640);

    if (t129 != 100285614LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x645 = 15141U;
	volatile int32_t t130 = 2;

    t130 = ((x645/(x646-x647))/x648);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x649 = 15U;
	int16_t x650 = INT16_MIN;
	int32_t x652 = -1;

    t131 = ((x649/(x650-x651))/x652);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x653 = -1;
	uint8_t x654 = 0U;
	uint32_t x655 = 142255U;
	static uint16_t x656 = 14U;
	uint32_t t132 = 2956U;

    t132 = ((x653/(x654-x655))/x656);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x657 = -2988;
	int32_t x658 = -3807;
	int8_t x659 = -7;
	uint64_t x660 = UINT64_MAX;

    t133 = ((x657/(x658-x659))/x660);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x661 = -1;
	volatile int64_t x663 = -7753944179611645LL;
	int64_t x664 = -1LL;
	static volatile int64_t t134 = -40914818243LL;

    t134 = ((x661/(x662-x663))/x664);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x665 = -1;
	int16_t x666 = -1;
	int32_t x668 = INT32_MAX;

    t135 = ((x665/(x666-x667))/x668);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x673 = UINT32_MAX;
	static volatile int16_t x674 = -1;
	volatile uint8_t x675 = 0U;
	static volatile int64_t x676 = 194LL;
	int64_t t136 = -511342LL;

    t136 = ((x673/(x674-x675))/x676);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x677 = 67369459696077LL;
	static int8_t x678 = -1;
	uint16_t x679 = 63U;

    t137 = ((x677/(x678-x679))/x680);

    if (t137 != -245LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x681 = 11997004;
	int8_t x682 = INT8_MIN;
	volatile int32_t x683 = -5450185;
	uint16_t x684 = 112U;
	volatile int32_t t138 = 243859158;

    t138 = ((x681/(x682-x683))/x684);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x685 = -1LL;
	static volatile uint16_t x686 = 448U;
	int64_t x687 = 2195851548513238LL;
	uint16_t x688 = 25U;

    t139 = ((x685/(x686-x687))/x688);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x689 = UINT32_MAX;
	uint64_t x690 = UINT64_MAX;
	static uint16_t x691 = 28U;
	volatile uint8_t x692 = UINT8_MAX;
	uint64_t t140 = 17809204709663362LLU;

    t140 = ((x689/(x690-x691))/x692);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x693 = 7878445386LLU;
	volatile uint32_t x695 = 6937452U;
	int64_t x696 = -134597754LL;

    t141 = ((x693/(x694-x695))/x696);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x697 = INT8_MAX;
	int8_t x698 = INT8_MAX;
	int16_t x699 = INT16_MAX;
	int32_t t142 = -6724;

    t142 = ((x697/(x698-x699))/x700);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x707 = INT8_MIN;
	int64_t x708 = INT64_MIN;

    t143 = ((x705/(x706-x707))/x708);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x715 = 263453027LLU;
	int32_t x716 = -1;
	volatile uint64_t t144 = 862905132818675LLU;

    t144 = ((x713/(x714-x715))/x716);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x717 = -55;
	static int8_t x719 = INT8_MAX;
	int64_t x720 = -6877107026251945LL;
	volatile int64_t t145 = -2833907234731LL;

    t145 = ((x717/(x718-x719))/x720);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x721 = -1285;
	static int32_t x722 = 14;
	uint32_t t146 = 0U;

    t146 = ((x721/(x722-x723))/x724);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x726 = -1;
	volatile int8_t x727 = 1;
	int64_t t147 = 903786611LL;

    t147 = ((x725/(x726-x727))/x728);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x729 = INT8_MIN;
	volatile int16_t x730 = 1844;
	uint16_t x731 = UINT16_MAX;
	uint32_t x732 = 4712U;

    t148 = ((x729/(x730-x731))/x732);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x733 = INT8_MIN;
	static volatile uint64_t t149 = 13LLU;

    t149 = ((x733/(x734-x735))/x736);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x737 = INT64_MAX;
	int8_t x738 = INT8_MIN;
	int16_t x739 = 5;
	volatile int16_t x740 = -1;
	static volatile int64_t t150 = 0LL;

    t150 = ((x737/(x738-x739))/x740);

    if (t150 != 69348661931238915LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x745 = INT32_MAX;
	int64_t x747 = INT64_MIN;
	uint16_t x748 = 109U;
	volatile uint64_t t151 = 9565988LLU;

    t151 = ((x745/(x746-x747))/x748);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x749 = -1LL;
	static volatile int64_t x750 = -1LL;
	int16_t x751 = INT16_MIN;

    t152 = ((x749/(x750-x751))/x752);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x754 = UINT64_MAX;
	int64_t x755 = -40116528743LL;

    t153 = ((x753/(x754-x755))/x756);

    if (t153 != 14033LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x757 = INT8_MIN;
	uint64_t x758 = 283067268923829881LLU;
	static uint32_t x759 = UINT32_MAX;
	uint64_t x760 = 223822454884201LLU;
	uint64_t t154 = 5990928316787LLU;

    t154 = ((x757/(x758-x759))/x760);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x761 = INT8_MIN;
	uint32_t x763 = UINT32_MAX;
	int16_t x764 = -1865;
	volatile uint32_t t155 = 1008U;

    t155 = ((x761/(x762-x763))/x764);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x765 = INT32_MAX;
	uint16_t x766 = 42U;
	static int8_t x767 = INT8_MAX;
	int64_t x768 = -118790595746297807LL;

    t156 = ((x765/(x766-x767))/x768);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x770 = 55747257;
	uint8_t x771 = 1U;
	volatile uint32_t x772 = 60254700U;
	uint32_t t157 = 434U;

    t157 = ((x769/(x770-x771))/x772);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x774 = INT8_MIN;
	static uint8_t x775 = UINT8_MAX;
	int8_t x776 = -7;

    t158 = ((x773/(x774-x775))/x776);

    if (t158 != -801000) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x777 = INT16_MIN;
	uint64_t x778 = 3010LLU;
	int64_t x779 = INT64_MIN;
	uint64_t t159 = 30341360297268LLU;

    t159 = ((x777/(x778-x779))/x780);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x781 = INT64_MIN;
	int8_t x782 = -1;
	int32_t x783 = -738506;
	int32_t x784 = -1;
	volatile int64_t t160 = -2LL;

    t160 = ((x781/(x782-x783))/x784);

    if (t160 != 12489247922295LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x785 = UINT32_MAX;
	uint8_t x786 = 32U;
	volatile int8_t x787 = -22;
	static uint64_t x788 = 8LLU;
	uint64_t t161 = 4498889492932958LLU;

    t161 = ((x785/(x786-x787))/x788);

    if (t161 != 9942053LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x789 = 0;
	static volatile int32_t x790 = INT32_MIN;
	int8_t x791 = -7;
	int16_t x792 = INT16_MIN;
	int32_t t162 = 28960;

    t162 = ((x789/(x790-x791))/x792);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x794 = -22627609LL;
	volatile int64_t t163 = -1989224594262950LL;

    t163 = ((x793/(x794-x795))/x796);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x798 = INT16_MIN;
	volatile uint8_t x799 = 2U;
	int32_t t164 = -113215494;

    t164 = ((x797/(x798-x799))/x800);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x801 = 4458U;
	int32_t x802 = -1;
	volatile int64_t x803 = INT64_MAX;
	static int64_t x804 = 12888144370960LL;
	int64_t t165 = -43LL;

    t165 = ((x801/(x802-x803))/x804);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x805 = 1164425953321596LLU;
	uint64_t x806 = UINT64_MAX;
	int32_t x807 = INT32_MAX;
	uint16_t x808 = 1626U;

    t166 = ((x805/(x806-x807))/x808);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x809 = INT64_MIN;
	uint32_t x810 = UINT32_MAX;
	int64_t x811 = -19703LL;
	int32_t x812 = -183;
	volatile int64_t t167 = -5519LL;

    t167 = ((x809/(x810-x811))/x812);

    if (t167 != 11734829LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x813 = INT64_MAX;
	int64_t x814 = 272LL;
	int8_t x815 = -1;
	static uint64_t x816 = 3LLU;
	volatile uint64_t t168 = 2148760288853144550LLU;

    t168 = ((x813/(x814-x815))/x816);

    if (t168 != 11261748518748200LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x817 = INT16_MIN;
	int32_t x819 = -87;
	volatile int8_t x820 = INT8_MIN;
	int32_t t169 = -19845699;

    t169 = ((x817/(x818-x819))/x820);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x821 = 1U;
	volatile int16_t x823 = INT16_MIN;
	static volatile int32_t x824 = -1;
	uint64_t t170 = 8424455270048LLU;

    t170 = ((x821/(x822-x823))/x824);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x825 = INT32_MIN;
	volatile uint8_t x828 = 10U;
	volatile uint64_t t171 = 1865560LLU;

    t171 = ((x825/(x826-x827))/x828);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint16_t x834 = UINT16_MAX;
	uint16_t x835 = 6733U;
	volatile uint64_t x836 = UINT64_MAX;
	volatile uint64_t t172 = 408146843978376848LLU;

    t172 = ((x833/(x834-x835))/x836);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x838 = INT8_MAX;
	int16_t x839 = -1;
	volatile uint32_t t173 = 62U;

    t173 = ((x837/(x838-x839))/x840);

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x854 = INT64_MAX;
	int8_t x855 = INT8_MAX;

    t174 = ((x853/(x854-x855))/x856);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x857 = 19U;
	volatile int16_t x860 = -1;
	uint64_t t175 = 47598686393LLU;

    t175 = ((x857/(x858-x859))/x860);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile int32_t x862 = -1;
	int16_t x863 = INT16_MAX;
	int16_t x864 = INT16_MIN;
	uint64_t t176 = 39968631091LLU;

    t176 = ((x861/(x862-x863))/x864);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x865 = 49812U;
	volatile int8_t x866 = INT8_MIN;
	int8_t x867 = INT8_MAX;
	static uint64_t x868 = UINT64_MAX;
	uint64_t t177 = 48053597169LLU;

    t177 = ((x865/(x866-x867))/x868);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x869 = -65172041LL;
	uint64_t x870 = 50871LLU;
	uint64_t t178 = 2339652LLU;

    t178 = ((x869/(x870-x871))/x872);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x873 = -1;
	int64_t x874 = -1LL;
	int8_t x875 = -3;
	int8_t x876 = INT8_MAX;

    t179 = ((x873/(x874-x875))/x876);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x881 = 64849LLU;
	int16_t x882 = INT16_MAX;
	int64_t x883 = -13703920LL;
	static uint32_t x884 = 2010U;
	uint64_t t180 = 26969LLU;

    t180 = ((x881/(x882-x883))/x884);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x885 = 4082206438277LL;
	volatile int64_t x887 = INT64_MAX;
	uint16_t x888 = UINT16_MAX;

    t181 = ((x885/(x886-x887))/x888);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x890 = 91833395LLU;
	static uint32_t x891 = UINT32_MAX;
	volatile uint64_t t182 = 292277329958860088LLU;

    t182 = ((x889/(x890-x891))/x892);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x893 = -5795091;
	int64_t x894 = INT64_MIN;
	int16_t x895 = -1;
	uint16_t x896 = 10U;
	static int64_t t183 = 683494187509411792LL;

    t183 = ((x893/(x894-x895))/x896);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x897 = INT16_MIN;
	int16_t x898 = 11;
	uint16_t x900 = 260U;
	volatile int64_t t184 = -7749911LL;

    t184 = ((x897/(x898-x899))/x900);

    if (t184 != -10LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x901 = -1LL;
	int32_t x902 = 311;
	static volatile int8_t x903 = INT8_MIN;
	volatile uint64_t t185 = 62199330LLU;

    t185 = ((x901/(x902-x903))/x904);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int32_t x905 = INT32_MIN;
	int8_t x908 = -1;
	int32_t t186 = -20710579;

    t186 = ((x905/(x906-x907))/x908);

    if (t186 != 785185) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x909 = INT64_MIN;
	int32_t x910 = INT32_MIN;
	int8_t x911 = 0;
	int64_t x912 = INT64_MAX;
	int64_t t187 = 28033319LL;

    t187 = ((x909/(x910-x911))/x912);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x913 = 3141LLU;
	int32_t x914 = -1;
	uint16_t x915 = 9772U;
	uint16_t x916 = UINT16_MAX;

    t188 = ((x913/(x914-x915))/x916);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x917 = -1;
	int16_t x919 = -195;
	uint64_t x920 = UINT64_MAX;

    t189 = ((x917/(x918-x919))/x920);

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x921 = 0U;
	int64_t x922 = -7LL;
	int32_t x923 = INT32_MIN;
	int64_t t190 = 1179140497346545509LL;

    t190 = ((x921/(x922-x923))/x924);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x926 = -1;
	int16_t x927 = 611;
	uint32_t x928 = 17U;
	volatile uint32_t t191 = 430U;

    t191 = ((x925/(x926-x927))/x928);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x929 = -68;
	int32_t x931 = -1;
	static int32_t t192 = -662751809;

    t192 = ((x929/(x930-x931))/x932);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x933 = INT32_MAX;
	int16_t x934 = INT16_MIN;
	int32_t x935 = 1704322;
	volatile uint8_t x936 = UINT8_MAX;

    t193 = ((x933/(x934-x935))/x936);

    if (t193 != -4) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x937 = 52692U;
	int32_t x938 = INT32_MAX;
	int64_t t194 = 336LL;

    t194 = ((x937/(x938-x939))/x940);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x942 = -5;
	volatile uint32_t x943 = UINT32_MAX;
	static volatile int32_t x944 = INT32_MIN;
	int64_t t195 = 8603LL;

    t195 = ((x941/(x942-x943))/x944);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x945 = -23;
	int64_t x947 = 355349954833525LL;
	int64_t t196 = -85LL;

    t196 = ((x945/(x946-x947))/x948);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x949 = -1279065889556350LL;
	uint32_t x950 = 0U;
	int8_t x951 = INT8_MAX;
	volatile uint8_t x952 = UINT8_MAX;
	int64_t t197 = 82974882858586678LL;

    t197 = ((x949/(x950-x951))/x952);

    if (t197 != -1167LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x953 = -171677437379502704LL;
	int64_t x954 = -2547LL;
	uint32_t x955 = 174893U;
	uint64_t x956 = 121036242778523LLU;
	uint64_t t198 = 17576783398004555LLU;

    t198 = ((x953/(x954-x955))/x956);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x957 = INT8_MIN;
	int32_t x958 = -105181;
	volatile uint64_t x959 = UINT64_MAX;
	int16_t x960 = INT16_MIN;
	uint64_t t199 = 11317770637608LLU;

    t199 = ((x957/(x958-x959))/x960);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

