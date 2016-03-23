
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

uint32_t x2 = UINT32_MAX;
int64_t x4 = -1LL;
int8_t x9 = -1;
int16_t x15 = 2418;
uint16_t x24 = 154U;
int64_t x27 = -2737209977862988LL;
int16_t x30 = 3;
int32_t x35 = 1;
int16_t x43 = INT16_MIN;
int16_t x48 = -191;
volatile int16_t x58 = INT16_MAX;
int8_t x60 = -61;
volatile uint64_t x64 = UINT64_MAX;
int64_t x65 = INT64_MIN;
int64_t x70 = 8189490LL;
uint32_t x84 = 68472548U;
int64_t x91 = INT64_MIN;
uint32_t x92 = UINT32_MAX;
int64_t x95 = -707LL;
int8_t x96 = -6;
static int16_t x98 = 279;
static volatile uint16_t x102 = 11U;
static uint64_t x109 = 4217879257273LLU;
volatile uint64_t t24 = 751LLU;
static uint32_t x116 = 1082476371U;
uint8_t x118 = UINT8_MAX;
int32_t x123 = -49;
uint64_t x128 = UINT64_MAX;
volatile uint64_t t28 = 66LLU;
uint16_t x130 = UINT16_MAX;
int16_t x131 = INT16_MAX;
int32_t t30 = 32042253;
static int8_t x138 = 14;
volatile uint64_t x141 = UINT64_MAX;
uint32_t x145 = 2399628U;
static uint64_t t33 = 12990976361706LLU;
int64_t x149 = INT64_MAX;
int8_t x151 = 2;
static volatile int16_t x152 = INT16_MIN;
int64_t t34 = 229453540629179467LL;
uint64_t x153 = 1286160235LLU;
uint64_t x158 = 279822773LLU;
int8_t x160 = INT8_MIN;
static volatile uint64_t t36 = 1858180887076760LLU;
static volatile int16_t x161 = INT16_MIN;
int32_t x168 = INT32_MAX;
volatile uint16_t x175 = UINT16_MAX;
static volatile int64_t x190 = -1LL;
int16_t x211 = 6693;
uint32_t x214 = UINT32_MAX;
uint32_t x215 = 315U;
volatile int32_t x218 = INT32_MIN;
uint32_t x219 = 59U;
volatile uint64_t t51 = 27LLU;
uint8_t x221 = 3U;
int8_t x225 = -1;
uint64_t t53 = 1670LLU;
static int16_t x236 = INT16_MIN;
volatile int64_t t56 = 9LL;
int32_t x244 = INT32_MIN;
int8_t x247 = 1;
volatile uint64_t x253 = 8737587LLU;
static volatile uint64_t x257 = UINT64_MAX;
uint32_t x260 = 51U;
volatile int64_t t62 = 68668199275LL;
volatile int32_t x268 = 4358;
uint64_t x271 = 4073914568824791LLU;
volatile int32_t t66 = -3;
int8_t x282 = 46;
static uint8_t x284 = 51U;
uint64_t t67 = 91979797LLU;
static uint32_t x285 = 6U;
static int8_t x286 = -4;
static uint32_t t68 = 164152688U;
uint16_t x291 = 3U;
uint64_t x292 = 151292029855874LLU;
volatile int64_t x294 = -1LL;
static int16_t x295 = -1;
static int64_t x297 = -24LL;
int16_t x306 = -1;
uint32_t x309 = UINT32_MAX;
uint16_t x310 = UINT16_MAX;
int16_t x312 = -1338;
uint16_t x320 = 244U;
int16_t x322 = INT16_MIN;
volatile int8_t x323 = INT8_MIN;
volatile int32_t t77 = -149;
static volatile int16_t x326 = INT16_MIN;
uint8_t x327 = 87U;
int64_t t79 = 1LL;
uint32_t x335 = 1157662U;
int64_t x338 = INT64_MIN;
int16_t x340 = -1;
int8_t x343 = -1;
int8_t x344 = INT8_MAX;
uint32_t t83 = 46540378U;
volatile int8_t x354 = 23;
uint16_t x356 = 3151U;
volatile int8_t x369 = INT8_MIN;
volatile int64_t t89 = -27855LL;
int16_t x377 = INT16_MIN;
uint32_t x384 = UINT32_MAX;
uint32_t x385 = UINT32_MAX;
static int64_t x388 = -1LL;
int32_t x391 = 148791538;
int8_t x392 = INT8_MIN;
static int64_t x397 = -1LL;
static int16_t x401 = INT16_MIN;
int8_t x403 = -2;
int32_t x408 = INT32_MIN;
static uint8_t x413 = 7U;
int8_t x421 = 10;
static volatile int16_t x426 = INT16_MIN;
uint8_t x427 = 60U;
int8_t x428 = -1;
int32_t t102 = 137;
uint8_t x429 = UINT8_MAX;
static int16_t x430 = -81;
int16_t x442 = INT16_MAX;
volatile uint64_t x445 = 9143671LLU;
volatile uint8_t x454 = UINT8_MAX;
int16_t x458 = INT16_MIN;
int64_t x465 = -1LL;
int64_t t112 = -28LL;
uint32_t x475 = 118290U;
int64_t x478 = 20512LL;
int8_t x482 = -1;
int16_t x488 = INT16_MIN;
int32_t t117 = 0;
uint16_t x490 = 2U;
volatile uint64_t x496 = 18LLU;
int16_t x505 = INT16_MIN;
static int16_t x507 = -1;
int64_t x516 = -17495087398160LL;
int16_t x520 = INT16_MIN;
volatile int64_t t124 = -3379642628LL;
int16_t x529 = 13;
volatile int32_t x532 = -1;
int8_t x533 = -1;
int64_t x534 = INT64_MIN;
volatile int64_t t128 = -4LL;
uint64_t t131 = 3142668LLU;
static uint8_t x549 = 106U;
volatile int16_t x551 = INT16_MIN;
volatile int64_t x563 = -1296511545LL;
static uint8_t x568 = UINT8_MAX;
volatile int32_t x582 = INT32_MIN;
int8_t x583 = -1;
int16_t x586 = 21;
static int16_t x587 = -1439;
int32_t x590 = -166756;
volatile uint64_t t142 = 5879LLU;
static int32_t t144 = 453;
volatile uint32_t x603 = 1338019250U;
int64_t x604 = -1LL;
uint64_t t145 = 2342388836199LLU;
uint16_t x605 = UINT16_MAX;
static volatile int32_t x622 = -1;
volatile int8_t x623 = INT8_MAX;
volatile int8_t x625 = -1;
uint64_t x630 = UINT64_MAX;
uint8_t x632 = 0U;
uint64_t t152 = 218LLU;
int16_t x633 = INT16_MIN;
uint16_t x634 = UINT16_MAX;
int64_t x641 = INT64_MAX;
uint16_t x645 = 6U;
uint16_t x650 = UINT16_MAX;
uint32_t x657 = 292773U;
static volatile int8_t x658 = INT8_MIN;
int64_t x660 = 2LL;
volatile int64_t t159 = -569LL;
volatile int8_t x662 = 33;
uint32_t x663 = 41U;
uint32_t x664 = UINT32_MAX;
static int32_t x675 = -1;
int32_t t163 = -972897121;
int64_t x678 = INT64_MAX;
volatile int16_t x691 = -1;
static int32_t x696 = -1;
volatile uint64_t x698 = 54154842371398045LLU;
int64_t x699 = 203533LL;
uint16_t x700 = UINT16_MAX;
static uint64_t x711 = 55545503093638589LLU;
volatile int64_t x718 = INT64_MIN;
uint8_t x720 = UINT8_MAX;
int32_t x726 = -1;
uint16_t x727 = 26644U;
int64_t x735 = INT64_MIN;
static int64_t t176 = -1516841860644604LL;
volatile int16_t x738 = -1;
volatile uint32_t t177 = 41U;
volatile int64_t x750 = 2LL;
volatile int64_t t182 = -680476584LL;
int32_t x761 = INT32_MIN;
static uint8_t x762 = 48U;
int64_t t183 = -279523474850624LL;
int32_t x767 = INT32_MIN;
int32_t t184 = -2716823;
volatile int64_t x773 = INT64_MIN;
int64_t t187 = -1740347012840565151LL;
uint16_t x781 = UINT16_MAX;
uint64_t x787 = 3730LLU;
int16_t x793 = INT16_MIN;
int64_t x794 = -561344257LL;
volatile int16_t x800 = -1;
volatile int32_t x801 = -8166392;
static volatile uint16_t x807 = 3205U;
uint16_t x820 = 3U;


void f0(void) {
    	volatile int16_t x1 = -2;
	static int32_t x3 = INT32_MIN;
	volatile int64_t t0 = 54940LL;

    t0 = ((x1%x2)-(x3|x4));

    if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint16_t x6 = 26U;
	int32_t x7 = -1;
	volatile uint16_t x8 = 316U;
	volatile int32_t t1 = 2933;

    t1 = ((x5%x6)-(x7|x8));

    if (t1 != -23) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	static uint32_t x11 = 70628U;
	uint8_t x12 = 23U;
	uint32_t t2 = 856677188U;

    t2 = ((x9%x10)-(x11|x12));

    if (t2 != 4294896648U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	int32_t x14 = -1;
	volatile int32_t x16 = -1;
	int64_t t3 = -1LL;

    t3 = ((x13%x14)-(x15|x16));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = UINT32_MAX;
	static int64_t x22 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	int64_t t4 = -4889093LL;

    t4 = ((x21%x22)-(x23|x24));

    if (t4 != 4294967397LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	uint16_t x26 = 783U;
	volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t5 = 5763439308714LLU;

    t5 = ((x25%x26)-(x27|x28));

    if (t5 != 18446744073709550952LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 1;
	static int64_t x31 = -197598656LL;
	int16_t x32 = 396;
	static volatile int64_t t6 = -65887275358LL;

    t6 = ((x29%x30)-(x31|x32));

    if (t6 != 197598261LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t7 = INT64_MAX;

    t7 = ((x33%x34)-(x35|x36));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MIN;
	static int64_t x44 = 83688734487308577LL;
	volatile int64_t t8 = 303126364908214455LL;

    t8 = ((x41%x42)-(x43|x44));

    if (t8 != 5982LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	static volatile int32_t x46 = 13;
	int8_t x47 = -1;
	int32_t t9 = -351990413;

    t9 = ((x45%x46)-(x47|x48));

    if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = 1LLU;
	uint64_t x50 = 3724LLU;
	static uint8_t x51 = UINT8_MAX;
	static uint64_t x52 = 410922811LLU;
	uint64_t t10 = 141785016195244249LLU;

    t10 = ((x49%x50)-(x51|x52));

    if (t10 != 18446744073298628610LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 3837812U;
	int16_t x54 = INT16_MIN;
	static uint16_t x55 = UINT16_MAX;
	volatile uint8_t x56 = 17U;
	volatile uint32_t t11 = 218095U;

    t11 = ((x53%x54)-(x55|x56));

    if (t11 != 3772277U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x59 = 0;
	int32_t t12 = 6720;

    t12 = ((x57%x58)-(x59|x60));

    if (t12 != 62) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MAX;
	int8_t x62 = INT8_MAX;
	int16_t x63 = -1;
	uint64_t t13 = 4483398LLU;

    t13 = ((x61%x62)-(x63|x64));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x66 = -1;
	static uint16_t x67 = 27227U;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int64_t t14 = 33845410947931518LL;

    t14 = ((x65%x66)-(x67|x68));

    if (t14 != -4294967295LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -1;
	volatile int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 2U;
	volatile int64_t t15 = 12403012012562LL;

    t15 = ((x69%x70)-(x71|x72));

    if (t15 != 125LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	int64_t x76 = -1LL;
	volatile int64_t t16 = -85432670LL;

    t16 = ((x73%x74)-(x75|x76));

    if (t16 != 32768LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MAX;
	int64_t x78 = -1LL;
	static uint32_t x79 = 2151162U;
	int16_t x80 = -1;
	int64_t t17 = -114846312848960LL;

    t17 = ((x77%x78)-(x79|x80));

    if (t17 != -4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	uint16_t x83 = UINT16_MAX;
	static uint32_t t18 = 0U;

    t18 = ((x81%x82)-(x83|x84));

    if (t18 != 4226482176U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = 4LL;
	int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MIN;
	static int32_t x88 = INT32_MIN;
	static volatile int64_t t19 = 270368770991224471LL;

    t19 = ((x85%x86)-(x87|x88));

    if (t19 != 32772LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MIN;
	int16_t x90 = -1;
	volatile int64_t t20 = 77632264803LL;

    t20 = ((x89%x90)-(x91|x92));

    if (t20 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x93 = INT16_MAX;
	static int8_t x94 = INT8_MAX;
	static int64_t t21 = 4000767047LL;

    t21 = ((x93%x94)-(x95|x96));

    if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = 12079228497898701LLU;
	static uint32_t x99 = 31U;
	volatile int64_t x100 = 1293277LL;
	volatile uint64_t t22 = 114496815980843922LLU;

    t22 = ((x97%x98)-(x99|x100));

    if (t22 != 18446744073708258358LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -583969;
	static volatile uint32_t x103 = 45U;
	int32_t x104 = -1;
	uint32_t t23 = 2810U;

    t23 = ((x101%x102)-(x103|x104));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x110 = INT64_MAX;
	int32_t x111 = -3;
	uint64_t x112 = 45272LLU;

    t24 = ((x109%x110)-(x111|x112));

    if (t24 != 4217879257276LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = 9;
	static uint16_t x114 = UINT16_MAX;
	int32_t x115 = 2;
	uint32_t t25 = 93294127U;

    t25 = ((x113%x114)-(x115|x116));

    if (t25 != 3212490934U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 42066515;
	volatile int8_t x119 = 6;
	static volatile int16_t x120 = 9874;
	volatile int32_t t26 = 4679738;

    t26 = ((x117%x118)-(x119|x120));

    if (t26 != -9693) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = INT16_MIN;
	int8_t x122 = -5;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t27 = 296056U;

    t27 = ((x121%x122)-(x123|x124));

    if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MAX;
	static int64_t x126 = -1LL;
	int16_t x127 = INT16_MAX;

    t28 = ((x125%x126)-(x127|x128));

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x129 = 7;
	static volatile int32_t x132 = INT32_MAX;
	volatile int32_t t29 = -169005;

    t29 = ((x129%x130)-(x131|x132));

    if (t29 != -2147483640) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x133 = INT32_MIN;
	volatile int8_t x134 = 1;
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;

    t30 = ((x133%x134)-(x135|x136));

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 46U;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = 15U;
	static volatile int64_t t31 = 12482827256770LL;

    t31 = ((x137%x138)-(x139|x140));

    if (t31 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = 108482;
	uint32_t x143 = 253992U;
	int32_t x144 = INT32_MIN;
	volatile uint64_t t32 = 29078412379343LLU;

    t32 = ((x141%x142)-(x143|x144));

    if (t32 != 18446744071561904257LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x146 = 1965317LLU;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = 5U;

    t33 = ((x145%x146)-(x147|x148));

    if (t33 != 467074LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x150 = -1382334547073914LL;

    t34 = ((x149%x150)-(x151|x152));

    if (t34 != 435938777654365LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x154 = -1LL;
	volatile int64_t x155 = INT64_MIN;
	int8_t x156 = 23;
	volatile uint64_t t35 = 12707122809425736LLU;

    t35 = ((x153%x154)-(x155|x156));

    if (t35 != 9223372038140936020LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x157 = -1;
	uint8_t x159 = UINT8_MAX;

    t36 = ((x157%x158)-(x159|x160));

    if (t36 != 136045524LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x162 = INT64_MIN;
	volatile int8_t x163 = INT8_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	int64_t t37 = -2237826201660694389LL;

    t37 = ((x161%x162)-(x163|x164));

    if (t37 != -4295000063LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -62;
	int32_t t38 = -15885;

    t38 = ((x165%x166)-(x167|x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x169 = 0;
	volatile uint8_t x170 = 18U;
	volatile uint32_t x171 = 536288958U;
	static int32_t x172 = -1;
	static volatile uint32_t t39 = 70U;

    t39 = ((x169%x170)-(x171|x172));

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = -815799608;
	uint16_t x174 = UINT16_MAX;
	int8_t x176 = -1;
	int32_t t40 = 3;

    t40 = ((x173%x174)-(x175|x176));

    if (t40 != -19927) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x177 = INT64_MIN;
	int16_t x178 = -1;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	int64_t t41 = -192625196513LL;

    t41 = ((x177%x178)-(x179|x180));

    if (t41 != 32768LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 95LLU;
	uint8_t x182 = 1U;
	volatile int32_t x183 = 15;
	int32_t x184 = -8147;
	volatile uint64_t t42 = 20746282882992LLU;

    t42 = ((x181%x182)-(x183|x184));

    if (t42 != 8145LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x185 = UINT16_MAX;
	static int32_t x186 = 128713;
	uint16_t x187 = 328U;
	int8_t x188 = INT8_MIN;
	static int32_t t43 = -8997;

    t43 = ((x185%x186)-(x187|x188));

    if (t43 != 65591) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x189 = INT64_MIN;
	uint8_t x191 = 74U;
	static int32_t x192 = 1231;
	int64_t t44 = 1LL;

    t44 = ((x189%x190)-(x191|x192));

    if (t44 != -1231LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = -71;
	int8_t x194 = 30;
	int16_t x195 = 28;
	volatile int32_t x196 = 1;
	int32_t t45 = 802978;

    t45 = ((x193%x194)-(x195|x196));

    if (t45 != -40) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = -1;
	static uint16_t x198 = UINT16_MAX;
	int16_t x199 = -3030;
	static uint16_t x200 = 57U;
	int32_t t46 = -95;

    t46 = ((x197%x198)-(x199|x200));

    if (t46 != 3012) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = INT64_MAX;
	uint8_t x202 = UINT8_MAX;
	volatile uint32_t x203 = 4U;
	uint32_t x204 = 183611583U;
	int64_t t47 = -743203772240LL;

    t47 = ((x201%x202)-(x203|x204));

    if (t47 != -183611456LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x205 = INT64_MIN;
	static uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 340U;
	uint8_t x208 = UINT8_MAX;
	volatile int64_t t48 = 14208071220529LL;

    t48 = ((x205%x206)-(x207|x208));

    if (t48 != -639LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 359U;
	volatile int16_t x210 = INT16_MIN;
	static uint8_t x212 = UINT8_MAX;
	int32_t t49 = -12377;

    t49 = ((x209%x210)-(x211|x212));

    if (t49 != -6552) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = 131293283;
	int32_t x216 = 0;
	static uint32_t t50 = 32U;

    t50 = ((x213%x214)-(x215|x216));

    if (t50 != 131292968U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x217 = 1U;
	uint64_t x220 = 4714LLU;

    t51 = ((x217%x218)-(x219|x220));

    if (t51 != 18446744073709546886LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x222 = 65036555335LLU;
	int32_t x223 = -1;
	uint8_t x224 = 114U;
	uint64_t t52 = 16837537244LLU;

    t52 = ((x221%x222)-(x223|x224));

    if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x226 = INT32_MAX;
	uint64_t x227 = 22367477LLU;
	int64_t x228 = -1LL;

    t53 = ((x225%x226)-(x227|x228));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x229 = 329LLU;
	static uint32_t x230 = 945800U;
	int8_t x231 = -10;
	uint16_t x232 = 3U;
	uint64_t t54 = 16043981LLU;

    t54 = ((x229%x230)-(x231|x232));

    if (t54 != 338LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int64_t x235 = INT64_MIN;
	volatile int64_t t55 = 10810108444125LL;

    t55 = ((x233%x234)-(x235|x236));

    if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 1U;
	int16_t x238 = -1;
	uint32_t x239 = 828222U;
	int64_t x240 = 1LL;

    t56 = ((x237%x238)-(x239|x240));

    if (t56 != -828223LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x241 = 0U;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MIN;
	volatile uint32_t t57 = 369545U;

    t57 = ((x241%x242)-(x243|x244));

    if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = INT16_MIN;
	uint64_t x246 = UINT64_MAX;
	volatile int64_t x248 = -1LL;
	volatile uint64_t t58 = 456914024753084009LLU;

    t58 = ((x245%x246)-(x247|x248));

    if (t58 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	int64_t x250 = -111990810920226LL;
	int32_t x251 = -176868259;
	int64_t x252 = INT64_MIN;
	int64_t t59 = -8681891784362553LL;

    t59 = ((x249%x250)-(x251|x252));

    if (t59 != 32831263671158LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	static uint8_t x256 = UINT8_MAX;
	volatile uint64_t t60 = 1032LLU;

    t60 = ((x253%x254)-(x255|x256));

    if (t60 != 8737588LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x258 = -1910;
	int16_t x259 = -743;
	volatile uint64_t t61 = 40153LLU;

    t61 = ((x257%x258)-(x259|x260));

    if (t61 != 18446744069414586938LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x261 = -22;
	uint32_t x262 = 261487U;
	volatile int64_t x263 = 447128143LL;
	volatile int64_t x264 = INT64_MAX;

    t62 = ((x261%x262)-(x263|x264));

    if (t62 != -9223372036854732508LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	static volatile int8_t x267 = INT8_MIN;
	volatile int32_t t63 = 32419;

    t63 = ((x265%x266)-(x267|x268));

    if (t63 != 121) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x269 = INT64_MIN;
	uint16_t x270 = UINT16_MAX;
	int8_t x272 = -9;
	volatile uint64_t t64 = 184247989180498LLU;

    t64 = ((x269%x270)-(x271|x272));

    if (t64 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint32_t x273 = 285U;
	volatile int64_t x274 = 243653036730LL;
	static volatile int8_t x275 = -1;
	static int64_t x276 = INT64_MAX;
	int64_t t65 = 10919965LL;

    t65 = ((x273%x274)-(x275|x276));

    if (t65 != 286LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MAX;
	int8_t x278 = 1;
	int8_t x279 = -3;
	int32_t x280 = INT32_MIN;

    t66 = ((x277%x278)-(x279|x280));

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x281 = 57U;
	static uint64_t x283 = 987105LLU;

    t67 = ((x281%x282)-(x283|x284));

    if (t67 != 18446744073708564504LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x287 = 236U;
	int32_t x288 = -84390;

    t68 = ((x285%x286)-(x287|x288));

    if (t68 != 84232U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x289 = 93U;
	int64_t x290 = -1031180079LL;
	static uint64_t t69 = 5693752LLU;

    t69 = ((x289%x290)-(x291|x292));

    if (t69 != 18446592781679695834LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = INT32_MAX;
	int64_t x296 = 1783320206761LL;
	volatile int64_t t70 = -206094809527012598LL;

    t70 = ((x293%x294)-(x295|x296));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x298 = 10224211353453LL;
	int64_t x299 = INT64_MIN;
	int8_t x300 = 22;
	volatile int64_t t71 = 0LL;

    t71 = ((x297%x298)-(x299|x300));

    if (t71 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x301 = 2331598U;
	uint16_t x302 = 3260U;
	int32_t x303 = -1;
	int32_t x304 = 525662130;
	uint32_t t72 = 1631151U;

    t72 = ((x301%x302)-(x303|x304));

    if (t72 != 699U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x305 = INT64_MAX;
	int8_t x307 = -28;
	uint64_t x308 = UINT64_MAX;
	uint64_t t73 = 12782509269LLU;

    t73 = ((x305%x306)-(x307|x308));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x311 = INT8_MAX;
	volatile uint32_t t74 = 15920U;

    t74 = ((x309%x310)-(x311|x312));

    if (t74 != 1281U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x313 = -1;
	static int8_t x314 = -1;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t75 = -23450986;

    t75 = ((x313%x314)-(x315|x316));

    if (t75 != 128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x317 = UINT32_MAX;
	volatile int16_t x318 = INT16_MIN;
	uint64_t x319 = 922LLU;
	uint64_t t76 = 2223831940048718LLU;

    t76 = ((x317%x318)-(x319|x320));

    if (t76 != 31745LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = -1;
	static int16_t x324 = INT16_MIN;

    t77 = ((x321%x322)-(x323|x324));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = INT8_MAX;
	static int64_t x328 = -1LL;
	volatile int64_t t78 = 771910278818633LL;

    t78 = ((x325%x326)-(x327|x328));

    if (t78 != 128LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = 6176;
	int32_t x330 = -1;
	static volatile int8_t x331 = INT8_MIN;
	volatile int64_t x332 = INT64_MAX;

    t79 = ((x329%x330)-(x331|x332));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x333 = 45;
	uint32_t x334 = 18U;
	int32_t x336 = INT32_MIN;
	uint32_t t80 = 3U;

    t80 = ((x333%x334)-(x335|x336));

    if (t80 != 2146325995U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = 5169834681227841512LLU;
	volatile int32_t x339 = -1;
	uint64_t t81 = 2031420351678759197LLU;

    t81 = ((x337%x338)-(x339|x340));

    if (t81 != 5169834681227841513LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = INT64_MAX;
	volatile int32_t x342 = -294;
	volatile int64_t t82 = -1054LL;

    t82 = ((x341%x342)-(x343|x344));

    if (t82 != 50LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x345 = UINT32_MAX;
	uint8_t x346 = UINT8_MAX;
	volatile uint8_t x347 = UINT8_MAX;
	static int8_t x348 = -5;

    t83 = ((x345%x346)-(x347|x348));

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = -1;
	static uint64_t x350 = UINT64_MAX;
	volatile int32_t x351 = INT32_MIN;
	volatile int32_t x352 = -1;
	volatile uint64_t t84 = 99LLU;

    t84 = ((x349%x350)-(x351|x352));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = -1;
	volatile uint64_t x355 = 41400309770212LLU;
	uint64_t t85 = 426973LLU;

    t85 = ((x353%x354)-(x355|x356));

    if (t85 != 18446702673399779344LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	int32_t x358 = 533;
	int16_t x359 = INT16_MAX;
	int16_t x360 = -4;
	int64_t t86 = 97529796141751094LL;

    t86 = ((x357%x358)-(x359|x360));

    if (t86 != -7LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = UINT8_MAX;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MIN;
	static int32_t t87 = -1973;

    t87 = ((x361%x362)-(x363|x364));

    if (t87 != 2147418113) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x370 = 1603;
	static int8_t x371 = INT8_MIN;
	uint64_t x372 = UINT64_MAX;
	static uint64_t t88 = 341664363076LLU;

    t88 = ((x369%x370)-(x371|x372));

    if (t88 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x373 = INT64_MIN;
	static uint32_t x374 = UINT32_MAX;
	int8_t x375 = 40;
	static int16_t x376 = -1;

    t89 = ((x373%x374)-(x375|x376));

    if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x378 = INT16_MIN;
	static int32_t x379 = -1;
	int32_t x380 = INT32_MIN;
	volatile int32_t t90 = 438574;

    t90 = ((x377%x378)-(x379|x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x381 = 231U;
	int8_t x382 = INT8_MAX;
	int32_t x383 = -1;
	volatile uint32_t t91 = 159U;

    t91 = ((x381%x382)-(x383|x384));

    if (t91 != 105U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x386 = -1;
	int8_t x387 = -1;
	int64_t t92 = -46285727949462081LL;

    t92 = ((x385%x386)-(x387|x388));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x389 = -49;
	uint64_t x390 = 10013968LLU;
	static volatile uint64_t t93 = 25LLU;

    t93 = ((x389%x390)-(x391|x392));

    if (t93 != 403693LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x393 = 6U;
	int8_t x394 = INT8_MAX;
	int32_t x395 = INT32_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t94 = 2065341899908020LL;

    t94 = ((x393%x394)-(x395|x396));

    if (t94 != 9223372034707292167LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x398 = UINT8_MAX;
	volatile int8_t x399 = INT8_MAX;
	volatile int8_t x400 = INT8_MIN;
	int64_t t95 = -14444110296LL;

    t95 = ((x397%x398)-(x399|x400));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x402 = 2091;
	uint32_t x404 = 22212U;
	volatile uint32_t t96 = 110U;

    t96 = ((x401%x402)-(x403|x404));

    if (t96 != 4294965895U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x405 = INT16_MAX;
	static int32_t x406 = -1;
	int8_t x407 = -4;
	volatile int32_t t97 = 3;

    t97 = ((x405%x406)-(x407|x408));

    if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x409 = -102149;
	uint16_t x410 = 2138U;
	uint8_t x411 = UINT8_MAX;
	int16_t x412 = -20;
	int32_t t98 = -2032;

    t98 = ((x409%x410)-(x411|x412));

    if (t98 != -1662) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x414 = -26762766967LL;
	static int64_t x415 = -229LL;
	int64_t x416 = INT64_MIN;
	volatile int64_t t99 = 94558116101682958LL;

    t99 = ((x413%x414)-(x415|x416));

    if (t99 != 236LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x417 = UINT16_MAX;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 123084923U;
	volatile uint64_t x420 = 4119744282009192750LLU;
	volatile uint64_t t100 = 4795642500LLU;

    t100 = ((x417%x418)-(x419|x420));

    if (t100 != 14326999791679182464LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x422 = UINT32_MAX;
	int16_t x423 = 0;
	int32_t x424 = 4261;
	uint32_t t101 = 217838U;

    t101 = ((x421%x422)-(x423|x424));

    if (t101 != 4294963045U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = -1;

    t102 = ((x425%x426)-(x427|x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x431 = UINT64_MAX;
	static uint16_t x432 = 8U;
	uint64_t t103 = 438054262380275LLU;

    t103 = ((x429%x430)-(x431|x432));

    if (t103 != 13LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	static int32_t x434 = INT32_MIN;
	int32_t x435 = 18;
	uint16_t x436 = 3649U;
	int32_t t104 = -1;

    t104 = ((x433%x434)-(x435|x436));

    if (t104 != 61868) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -9677;
	int16_t x439 = INT16_MAX;
	int8_t x440 = -1;
	uint32_t t105 = 33211U;

    t105 = ((x437%x438)-(x439|x440));

    if (t105 != 9677U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x441 = 29;
	int64_t x443 = INT64_MIN;
	int64_t x444 = -1LL;
	volatile int64_t t106 = -2474791159LL;

    t106 = ((x441%x442)-(x443|x444));

    if (t106 != 30LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x446 = -1;
	static uint32_t x447 = 22U;
	int32_t x448 = 3993;
	uint64_t t107 = 2733529957536136LLU;

    t107 = ((x445%x446)-(x447|x448));

    if (t107 != 9139672LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x449 = UINT32_MAX;
	uint16_t x450 = 1U;
	int64_t x451 = INT64_MIN;
	int8_t x452 = INT8_MIN;
	int64_t t108 = -3146719625708LL;

    t108 = ((x449%x450)-(x451|x452));

    if (t108 != 128LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x453 = 15956;
	volatile int8_t x455 = 0;
	static int8_t x456 = 1;
	volatile int32_t t109 = 4663;

    t109 = ((x453%x454)-(x455|x456));

    if (t109 != 145) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = INT8_MAX;
	uint8_t x459 = UINT8_MAX;
	int64_t x460 = INT64_MAX;
	int64_t t110 = -19135400754795573LL;

    t110 = ((x457%x458)-(x459|x460));

    if (t110 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x461 = -1031936363;
	uint32_t x462 = UINT32_MAX;
	uint32_t x463 = UINT32_MAX;
	volatile int8_t x464 = INT8_MIN;
	volatile uint32_t t111 = 1U;

    t111 = ((x461%x462)-(x463|x464));

    if (t111 != 3263030934U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x466 = 80669U;
	int16_t x467 = INT16_MIN;
	int16_t x468 = 204;

    t112 = ((x465%x466)-(x467|x468));

    if (t112 != 32563LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x469 = -355242240LL;
	int32_t x470 = 6424;
	int16_t x471 = -15526;
	static int16_t x472 = INT16_MIN;
	static volatile int64_t t113 = 47074792LL;

    t113 = ((x469%x470)-(x471|x472));

    if (t113 != 14062LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x473 = INT16_MIN;
	uint8_t x474 = 7U;
	uint32_t x476 = UINT32_MAX;
	uint32_t t114 = 1619427302U;

    t114 = ((x473%x474)-(x475|x476));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x477 = UINT8_MAX;
	int32_t x479 = 15323;
	static int8_t x480 = INT8_MIN;
	int64_t t115 = -121008203883LL;

    t115 = ((x477%x478)-(x479|x480));

    if (t115 != 292LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x481 = -1;
	int64_t x483 = INT64_MAX;
	static int8_t x484 = -6;
	int64_t t116 = -107330181334870651LL;

    t116 = ((x481%x482)-(x483|x484));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = -1;
	uint16_t x486 = 1917U;
	static int8_t x487 = INT8_MAX;

    t117 = ((x485%x486)-(x487|x488));

    if (t117 != 32640) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x489 = 14801704LLU;
	volatile uint8_t x491 = 98U;
	int16_t x492 = INT16_MIN;
	uint64_t t118 = 45514336LLU;

    t118 = ((x489%x490)-(x491|x492));

    if (t118 != 32670LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x493 = 13U;
	uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MIN;
	static volatile uint64_t t119 = 25681330LLU;

    t119 = ((x493%x494)-(x495|x496));

    if (t119 != 123LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x501 = 27;
	int8_t x502 = -12;
	uint32_t x503 = 873486U;
	volatile int16_t x504 = 6;
	volatile uint32_t t120 = 1424497U;

    t120 = ((x501%x502)-(x503|x504));

    if (t120 != 4294093813U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x506 = INT32_MIN;
	int8_t x508 = 2;
	int32_t t121 = -119490;

    t121 = ((x505%x506)-(x507|x508));

    if (t121 != -32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x509 = UINT64_MAX;
	int8_t x510 = -2;
	static int16_t x511 = INT16_MIN;
	uint8_t x512 = 18U;
	uint64_t t122 = 42079LLU;

    t122 = ((x509%x510)-(x511|x512));

    if (t122 != 32751LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	volatile uint32_t x515 = 3325430U;
	static volatile int64_t t123 = -67321898261858LL;

    t123 = ((x513%x514)-(x515|x516));

    if (t123 != 17495084236809LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x517 = UINT32_MAX;
	int8_t x518 = INT8_MIN;
	volatile int64_t x519 = -1122374311723745273LL;

    t124 = ((x517%x518)-(x519|x520));

    if (t124 != 16504LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x521 = 32544316U;
	int16_t x522 = -4;
	static int32_t x523 = INT32_MAX;
	int16_t x524 = -1;
	uint32_t t125 = 374835050U;

    t125 = ((x521%x522)-(x523|x524));

    if (t125 != 32544317U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x525 = -12;
	uint64_t x526 = 7LLU;
	int16_t x527 = INT16_MAX;
	static int32_t x528 = -1;
	volatile uint64_t t126 = 1396280925156762148LLU;

    t126 = ((x525%x526)-(x527|x528));

    if (t126 != 5LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x530 = UINT64_MAX;
	int32_t x531 = -1;
	uint64_t t127 = 73668410LLU;

    t127 = ((x529%x530)-(x531|x532));

    if (t127 != 14LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x535 = -80;
	volatile uint8_t x536 = UINT8_MAX;

    t128 = ((x533%x534)-(x535|x536));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = 32255852010666067LL;
	static volatile int32_t x538 = INT32_MIN;
	int32_t x539 = INT32_MIN;
	uint16_t x540 = 1U;
	static volatile int64_t t129 = -22LL;

    t129 = ((x537%x538)-(x539|x540));

    if (t129 != 3372611666LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x541 = -1LL;
	int64_t x542 = -1LL;
	int16_t x543 = 607;
	uint16_t x544 = UINT16_MAX;
	int64_t t130 = -10012519140839LL;

    t130 = ((x541%x542)-(x543|x544));

    if (t130 != -65535LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = INT32_MAX;
	int32_t x546 = INT32_MIN;
	volatile uint16_t x547 = UINT16_MAX;
	uint64_t x548 = 5080794938627982LLU;

    t131 = ((x545%x546)-(x547|x548));

    if (t131 != 18441663280918364160LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x550 = -4962;
	static int16_t x552 = INT16_MIN;
	static volatile int32_t t132 = 141148427;

    t132 = ((x549%x550)-(x551|x552));

    if (t132 != 32874) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x553 = INT16_MIN;
	int8_t x554 = -4;
	int16_t x555 = -1;
	static int32_t x556 = INT32_MIN;
	volatile int32_t t133 = -149;

    t133 = ((x553%x554)-(x555|x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = 852106005278692888LL;
	int16_t x559 = 3431;
	uint64_t x560 = 37829LLU;
	volatile uint64_t t134 = 9820791141LLU;

    t134 = ((x557%x558)-(x559|x560));

    if (t134 != 17744432089641663753LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = INT16_MIN;
	volatile int32_t x562 = INT32_MIN;
	int16_t x564 = 5;
	static int64_t t135 = 24336291017LL;

    t135 = ((x561%x562)-(x563|x564));

    if (t135 != 1296478777LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x565 = 14U;
	volatile uint8_t x566 = UINT8_MAX;
	volatile uint64_t x567 = UINT64_MAX;
	static volatile uint64_t t136 = 116536218793237975LLU;

    t136 = ((x565%x566)-(x567|x568));

    if (t136 != 15LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MAX;
	uint8_t x570 = 1U;
	static int32_t x571 = -12575457;
	int8_t x572 = INT8_MAX;
	int64_t t137 = -15985532482871891LL;

    t137 = ((x569%x570)-(x571|x572));

    if (t137 != 12575361LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x573 = UINT64_MAX;
	int64_t x574 = INT64_MIN;
	int64_t x575 = INT64_MAX;
	int32_t x576 = INT32_MAX;
	static volatile uint64_t t138 = 60935898LLU;

    t138 = ((x573%x574)-(x575|x576));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x577 = 7;
	int16_t x578 = INT16_MIN;
	int8_t x579 = -1;
	static volatile int8_t x580 = 0;
	volatile int32_t t139 = 1229;

    t139 = ((x577%x578)-(x579|x580));

    if (t139 != 8) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x584 = -1LL;
	static volatile int64_t t140 = -8351158250659032LL;

    t140 = ((x581%x582)-(x583|x584));

    if (t140 != 256LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = -771926038;
	uint32_t x588 = 10244263U;
	volatile uint32_t t141 = 514U;

    t141 = ((x585%x586)-(x587|x588));

    if (t141 != 1289U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x589 = UINT8_MAX;
	uint64_t x591 = 1276985101104360LLU;
	int16_t x592 = -1;

    t142 = ((x589%x590)-(x591|x592));

    if (t142 != 256LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = 44;
	int32_t x594 = INT32_MAX;
	int64_t x595 = INT64_MIN;
	static volatile int8_t x596 = -58;
	static volatile int64_t t143 = 3820413822044LL;

    t143 = ((x593%x594)-(x595|x596));

    if (t143 != 102LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = INT8_MIN;
	static int32_t x598 = -63021;
	int32_t x599 = INT32_MIN;
	volatile int16_t x600 = INT16_MAX;

    t144 = ((x597%x598)-(x599|x600));

    if (t144 != 2147450753) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x601 = UINT64_MAX;
	static uint64_t x602 = 3061576777LLU;

    t145 = ((x601%x602)-(x603|x604));

    if (t145 != 1573549623LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x606 = 40004LLU;
	uint8_t x607 = UINT8_MAX;
	int64_t x608 = INT64_MIN;
	uint64_t t146 = 719933LLU;

    t146 = ((x605%x606)-(x607|x608));

    if (t146 != 9223372036854801084LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x609 = 1664249U;
	static int16_t x610 = -1;
	int8_t x611 = 1;
	uint32_t x612 = 1573U;
	volatile uint32_t t147 = 134126U;

    t147 = ((x609%x610)-(x611|x612));

    if (t147 != 1662676U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = -1;
	volatile uint32_t x614 = 14011823U;
	uint8_t x615 = UINT8_MAX;
	int16_t x616 = -1;
	uint32_t t148 = 1887453U;

    t148 = ((x613%x614)-(x615|x616));

    if (t148 != 7349458U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x617 = INT64_MIN;
	static volatile int16_t x618 = INT16_MIN;
	int16_t x619 = -1156;
	uint64_t x620 = 96813009673680398LLU;
	uint64_t t149 = 285420226437484LLU;

    t149 = ((x617%x618)-(x619|x620));

    if (t149 != 130LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x621 = 209626257U;
	int8_t x624 = INT8_MIN;
	static uint32_t t150 = 87984U;

    t150 = ((x621%x622)-(x623|x624));

    if (t150 != 209626258U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x626 = 127U;
	uint16_t x627 = 25585U;
	uint64_t x628 = 606511350970553LLU;
	static volatile uint64_t t151 = 421797365018730707LLU;

    t151 = ((x625%x626)-(x627|x628));

    if (t151 != 18446137562358580230LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x629 = 59U;
	uint16_t x631 = 14U;

    t152 = ((x629%x630)-(x631|x632));

    if (t152 != 45LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MAX;
	int64_t t153 = 8LL;

    t153 = ((x633%x634)-(x635|x636));

    if (t153 != 9223372036854742913LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = INT8_MIN;
	uint32_t x638 = UINT32_MAX;
	static uint8_t x639 = 32U;
	int16_t x640 = INT16_MAX;
	uint32_t t154 = 13874419U;

    t154 = ((x637%x638)-(x639|x640));

    if (t154 != 4294934401U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x642 = 197898LL;
	static int8_t x643 = INT8_MIN;
	uint16_t x644 = UINT16_MAX;
	volatile int64_t t155 = 3LL;

    t155 = ((x641%x642)-(x643|x644));

    if (t155 != 169454LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x646 = UINT32_MAX;
	uint64_t x647 = 243159131342675LLU;
	static volatile uint16_t x648 = UINT16_MAX;
	uint64_t t156 = 499027233921303LLU;

    t156 = ((x645%x646)-(x647|x648));

    if (t156 != 18446500914578194439LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x649 = 50;
	static int32_t x651 = INT32_MIN;
	int8_t x652 = INT8_MIN;
	volatile int32_t t157 = 8;

    t157 = ((x649%x650)-(x651|x652));

    if (t157 != 178) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = INT64_MIN;
	static volatile int32_t x654 = INT32_MAX;
	uint8_t x655 = 4U;
	int16_t x656 = INT16_MIN;
	volatile int64_t t158 = -2141877627332633LL;

    t158 = ((x653%x654)-(x655|x656));

    if (t158 != 32762LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x659 = INT32_MAX;

    t159 = ((x657%x658)-(x659|x660));

    if (t159 != -2147190874LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x661 = UINT64_MAX;
	static volatile uint64_t t160 = 112525949176181037LLU;

    t160 = ((x661%x662)-(x663|x664));

    if (t160 != 18446744069414584336LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x665 = -1;
	int64_t x666 = INT64_MIN;
	volatile int8_t x667 = INT8_MIN;
	static int16_t x668 = INT16_MAX;
	int64_t t161 = -1940647860069443205LL;

    t161 = ((x665%x666)-(x667|x668));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int16_t x670 = -31;
	volatile uint32_t x671 = UINT32_MAX;
	uint16_t x672 = 1U;
	volatile uint32_t t162 = 47U;

    t162 = ((x669%x670)-(x671|x672));

    if (t162 != 2U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x673 = -1;
	int32_t x674 = -1;
	int16_t x676 = INT16_MIN;

    t163 = ((x673%x674)-(x675|x676));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x677 = 5U;
	int16_t x679 = -1;
	uint8_t x680 = 107U;
	static int64_t t164 = 236801158100LL;

    t164 = ((x677%x678)-(x679|x680));

    if (t164 != 6LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x689 = INT64_MAX;
	uint32_t x690 = 2066646300U;
	int16_t x692 = INT16_MIN;
	volatile int64_t t165 = -351LL;

    t165 = ((x689%x690)-(x691|x692));

    if (t165 != 260985308LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x694 = 62LLU;
	volatile int16_t x695 = 0;
	uint64_t t166 = 55LLU;

    t166 = ((x693%x694)-(x695|x696));

    if (t166 != 47LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x697 = -5;
	static uint64_t t167 = 217307714601738943LLU;

    t167 = ((x697%x698)-(x699|x700));

    if (t167 != 34097667433954168LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x701 = 889U;
	volatile int32_t x702 = INT32_MIN;
	uint8_t x703 = 1U;
	uint16_t x704 = 15107U;
	volatile int32_t t168 = 4168397;

    t168 = ((x701%x702)-(x703|x704));

    if (t168 != -14218) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x705 = -1;
	volatile int8_t x706 = -1;
	int8_t x707 = INT8_MIN;
	uint8_t x708 = 7U;
	int32_t t169 = 80889426;

    t169 = ((x705%x706)-(x707|x708));

    if (t169 != 121) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x709 = INT8_MAX;
	int32_t x710 = INT32_MIN;
	volatile int32_t x712 = 1;
	uint64_t t170 = 1830516038LLU;

    t170 = ((x709%x710)-(x711|x712));

    if (t170 != 18391198570615913154LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x713 = 1U;
	volatile int8_t x714 = -4;
	static uint16_t x715 = 67U;
	static uint8_t x716 = UINT8_MAX;
	volatile uint32_t t171 = 21278U;

    t171 = ((x713%x714)-(x715|x716));

    if (t171 != 4294967042U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x717 = INT64_MAX;
	volatile uint16_t x719 = 63U;
	static volatile int64_t t172 = -375064LL;

    t172 = ((x717%x718)-(x719|x720));

    if (t172 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x721 = INT8_MAX;
	uint16_t x722 = UINT16_MAX;
	int16_t x723 = -1;
	uint16_t x724 = 1543U;
	volatile int32_t t173 = 263;

    t173 = ((x721%x722)-(x723|x724));

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x725 = -1;
	uint64_t x728 = 1218073946985LLU;
	volatile uint64_t t174 = 658666709LLU;

    t174 = ((x725%x726)-(x727|x728));

    if (t174 != 18446742855635604611LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x729 = INT8_MAX;
	static uint32_t x730 = 7101U;
	volatile int8_t x731 = INT8_MIN;
	uint8_t x732 = UINT8_MAX;
	uint32_t t175 = 18150974U;

    t175 = ((x729%x730)-(x731|x732));

    if (t175 != 128U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x733 = -1LL;
	int64_t x734 = -1LL;
	volatile int32_t x736 = INT32_MAX;

    t176 = ((x733%x734)-(x735|x736));

    if (t176 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x737 = 0;
	uint32_t x739 = 110842U;
	static int8_t x740 = 1;

    t177 = ((x737%x738)-(x739|x740));

    if (t177 != 4294856453U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x741 = 56219192U;
	uint8_t x742 = UINT8_MAX;
	volatile int8_t x743 = 1;
	uint32_t x744 = 13508772U;
	uint32_t t178 = 5U;

    t178 = ((x741%x742)-(x743|x744));

    if (t178 != 4281458630U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x745 = UINT16_MAX;
	uint8_t x746 = UINT8_MAX;
	int32_t x747 = 28843;
	static uint16_t x748 = 509U;
	volatile int32_t t179 = -107463;

    t179 = ((x745%x746)-(x747|x748));

    if (t179 != -29183) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x749 = 1508992393118008999LL;
	static uint64_t x751 = 572LLU;
	int64_t x752 = INT64_MAX;
	static uint64_t t180 = 6262LLU;

    t180 = ((x749%x750)-(x751|x752));

    if (t180 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x753 = INT32_MIN;
	static int64_t x754 = -1LL;
	uint64_t x755 = UINT64_MAX;
	uint16_t x756 = 64U;
	volatile uint64_t t181 = 7121608220890LLU;

    t181 = ((x753%x754)-(x755|x756));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x757 = -1;
	uint32_t x758 = 971425789U;
	static volatile int64_t x759 = INT64_MIN;
	int64_t x760 = -872044804922LL;

    t182 = ((x757%x758)-(x759|x760));

    if (t182 != 872454069061LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x763 = -82001361950LL;
	volatile uint32_t x764 = 6678370U;

    t183 = ((x761%x762)-(x763|x764));

    if (t183 != 81999173630LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x765 = 313U;
	int32_t x766 = INT32_MIN;
	int16_t x768 = INT16_MIN;

    t184 = ((x765%x766)-(x767|x768));

    if (t184 != 33081) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x769 = 4792U;
	static uint8_t x770 = 63U;
	volatile uint32_t x771 = 266U;
	int64_t x772 = INT64_MIN;
	int64_t t185 = 41100771064935502LL;

    t185 = ((x769%x770)-(x771|x772));

    if (t185 != 9223372036854775546LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x774 = -9;
	int8_t x775 = INT8_MIN;
	uint64_t x776 = UINT64_MAX;
	uint64_t t186 = 1320370509407LLU;

    t186 = ((x773%x774)-(x775|x776));

    if (t186 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x777 = -1;
	uint16_t x778 = UINT16_MAX;
	volatile int8_t x779 = INT8_MIN;
	static int64_t x780 = 21870997937885LL;

    t187 = ((x777%x778)-(x779|x780));

    if (t187 != 34LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x782 = INT8_MIN;
	static int32_t x783 = -1;
	static uint32_t x784 = UINT32_MAX;
	static uint32_t t188 = 44U;

    t188 = ((x781%x782)-(x783|x784));

    if (t188 != 128U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x785 = -1705;
	int16_t x786 = INT16_MIN;
	int8_t x788 = INT8_MIN;
	volatile uint64_t t189 = 4850145277183394793LLU;

    t189 = ((x785%x786)-(x787|x788));

    if (t189 != 18446744073709550021LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x789 = INT8_MIN;
	int8_t x790 = INT8_MIN;
	volatile int8_t x791 = 7;
	volatile uint64_t x792 = UINT64_MAX;
	volatile uint64_t t190 = 13571005102488LLU;

    t190 = ((x789%x790)-(x791|x792));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x795 = INT8_MIN;
	volatile int32_t x796 = -38671;
	int64_t t191 = -7752937804390699LL;

    t191 = ((x793%x794)-(x795|x796));

    if (t191 != -32753LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = INT64_MIN;
	static int32_t x799 = -1049104953;
	volatile int64_t t192 = 15908LL;

    t192 = ((x797%x798)-(x799|x800));

    if (t192 != -2147483647LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x802 = -1;
	static uint16_t x803 = UINT16_MAX;
	uint8_t x804 = UINT8_MAX;
	int32_t t193 = 396889694;

    t193 = ((x801%x802)-(x803|x804));

    if (t193 != -65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = -1;
	uint16_t x806 = UINT16_MAX;
	int16_t x808 = 173;
	volatile int32_t t194 = -1592;

    t194 = ((x805%x806)-(x807|x808));

    if (t194 != -3246) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x809 = UINT64_MAX;
	static int8_t x810 = INT8_MAX;
	int32_t x811 = 1;
	int64_t x812 = -1LL;
	uint64_t t195 = 2LLU;

    t195 = ((x809%x810)-(x811|x812));

    if (t195 != 2LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x813 = UINT16_MAX;
	static int8_t x814 = INT8_MAX;
	volatile uint16_t x815 = 1U;
	int16_t x816 = -1711;
	volatile int32_t t196 = -1344160;

    t196 = ((x813%x814)-(x815|x816));

    if (t196 != 1714) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x817 = -1;
	volatile int16_t x818 = 6;
	volatile uint64_t x819 = 376LLU;
	volatile uint64_t t197 = 1742875514407389LLU;

    t197 = ((x817%x818)-(x819|x820));

    if (t197 != 18446744073709551236LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x821 = UINT64_MAX;
	volatile int32_t x822 = INT32_MIN;
	static int16_t x823 = INT16_MAX;
	uint8_t x824 = UINT8_MAX;
	uint64_t t198 = 104182838LLU;

    t198 = ((x821%x822)-(x823|x824));

    if (t198 != 2147450880LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x825 = 464008U;
	volatile uint64_t x826 = 57638328875414LLU;
	uint64_t x827 = 5044LLU;
	int32_t x828 = INT32_MAX;
	uint64_t t199 = 8266156363992854LLU;

    t199 = ((x825%x826)-(x827|x828));

    if (t199 != 18446744071562531977LLU) { NG(); } else { ; }
	
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

