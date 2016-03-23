
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

static uint32_t x1 = 1274U;
int32_t x14 = INT32_MIN;
volatile uint32_t x15 = UINT32_MAX;
static int8_t x24 = 0;
uint8_t x28 = 72U;
static int64_t t7 = 34436577403779LL;
volatile int64_t x56 = 1513039949053LL;
volatile int64_t t11 = 1184933008LL;
int16_t x61 = -1;
static uint32_t x64 = UINT32_MAX;
volatile int32_t x65 = -31;
uint64_t t14 = 3289294380934LLU;
uint32_t x73 = 53807229U;
uint64_t x76 = UINT64_MAX;
volatile int16_t x94 = -51;
volatile uint16_t x96 = 7386U;
volatile int32_t t18 = -915;
int8_t x104 = INT8_MIN;
int64_t x107 = -1LL;
uint64_t t21 = 6540568LLU;
int8_t x115 = 15;
int16_t x118 = 110;
uint8_t x119 = 0U;
int64_t x137 = INT64_MIN;
volatile int64_t x140 = INT64_MIN;
volatile int32_t x148 = INT32_MIN;
volatile uint32_t x149 = 2049788216U;
int8_t x161 = INT8_MIN;
uint8_t x165 = 0U;
int64_t x168 = -23000299594534LL;
uint64_t x171 = 516616505673078658LLU;
uint16_t x172 = 11U;
int16_t x176 = -1;
uint32_t x182 = 1U;
static volatile uint16_t x183 = 6781U;
int64_t t37 = -7676664058LL;
int64_t x192 = INT64_MIN;
uint64_t t38 = 2LLU;
volatile int32_t x200 = -1;
uint64_t x203 = 109271413370291226LLU;
uint64_t x209 = 17867168264192LLU;
static uint8_t x210 = 5U;
static int16_t x212 = INT16_MAX;
uint8_t x217 = 3U;
uint64_t x220 = 5491747677723LLU;
int8_t x257 = -3;
int8_t x258 = -1;
int8_t x264 = 3;
static uint32_t x270 = 521444U;
static uint32_t x273 = UINT32_MAX;
uint16_t x275 = 1U;
int64_t x276 = INT64_MIN;
volatile int64_t t51 = -1403706322066381LL;
int16_t x286 = INT16_MIN;
uint16_t x287 = 3U;
static int8_t x297 = -1;
volatile int16_t x299 = INT16_MIN;
static int16_t x307 = -1;
uint32_t x323 = 1315354U;
int64_t t60 = -10467214LL;
int32_t x332 = INT32_MAX;
int64_t x349 = -26LL;
volatile uint64_t t64 = 608751910867120LLU;
static uint32_t x357 = 1U;
int8_t x358 = INT8_MIN;
int8_t x360 = INT8_MAX;
uint64_t x364 = 7173003LLU;
int16_t x369 = -1;
int32_t x378 = -1;
int16_t x379 = INT16_MIN;
uint8_t x381 = UINT8_MAX;
uint8_t x382 = 112U;
int64_t x389 = 701587230185200463LL;
volatile int64_t x405 = -1LL;
int16_t x408 = INT16_MAX;
volatile uint32_t x414 = UINT32_MAX;
int8_t x415 = 22;
int64_t x423 = INT64_MIN;
static volatile uint16_t x433 = 594U;
static int64_t x437 = INT64_MIN;
uint64_t x440 = 523694302139551LLU;
volatile uint64_t t81 = 86009632078858LLU;
volatile uint64_t x443 = UINT64_MAX;
int32_t x452 = -1;
int8_t x458 = -1;
int8_t x461 = INT8_MAX;
volatile int16_t x471 = INT16_MIN;
volatile uint64_t x477 = 170817342LLU;
static volatile uint16_t x479 = 80U;
int16_t x480 = INT16_MIN;
int16_t x482 = INT16_MIN;
uint16_t x484 = UINT16_MAX;
int32_t x492 = INT32_MAX;
uint8_t x497 = 17U;
static uint64_t t96 = 41LLU;
static volatile int32_t x502 = INT32_MIN;
uint8_t x505 = 1U;
int64_t x506 = INT64_MIN;
int64_t t98 = 6855514LL;
int64_t x509 = INT64_MIN;
int8_t x515 = 0;
static uint8_t x522 = 27U;
int64_t x526 = INT64_MIN;
int16_t x533 = INT16_MAX;
int32_t x549 = INT32_MAX;
uint64_t x555 = 27LLU;
volatile int16_t x558 = INT16_MIN;
int8_t x559 = -1;
int64_t t108 = -235948749493941892LL;
int16_t x562 = INT16_MIN;
int64_t t110 = -92772948711503973LL;
uint32_t x574 = 471U;
static volatile int64_t t112 = -263771026303310LL;
int16_t x578 = -1;
int64_t x592 = INT64_MIN;
static int16_t x598 = INT16_MIN;
int8_t x600 = -1;
int8_t x617 = 3;
int16_t x623 = -1;
int32_t x624 = INT32_MAX;
volatile uint8_t x626 = 0U;
uint8_t x628 = UINT8_MAX;
volatile int32_t t120 = -233852469;
uint16_t x645 = 1U;
static uint32_t x648 = 55440095U;
uint32_t x657 = UINT32_MAX;
int32_t x658 = INT32_MAX;
static int64_t x668 = INT64_MAX;
uint64_t x669 = UINT64_MAX;
uint64_t t128 = 7034332LLU;
volatile int16_t x676 = INT16_MIN;
volatile int64_t x685 = INT64_MIN;
uint64_t t133 = 4112775989985LLU;
int64_t x714 = 812850LL;
int32_t x715 = INT32_MIN;
volatile int64_t t134 = -757910687674757LL;
static volatile int8_t x725 = INT8_MAX;
int16_t x736 = INT16_MAX;
uint8_t x738 = 86U;
int16_t x742 = 7094;
static uint8_t x743 = 0U;
int16_t x744 = INT16_MIN;
static volatile uint32_t x753 = 48U;
uint8_t x756 = 0U;
static volatile int32_t x760 = 1210;
volatile int64_t t142 = -2193800781921360221LL;
volatile uint64_t x763 = UINT64_MAX;
static uint64_t x765 = UINT64_MAX;
volatile uint8_t x771 = UINT8_MAX;
static int64_t x779 = 518150915569103LL;
volatile int32_t t147 = -2643141;
int16_t x786 = INT16_MIN;
uint32_t x789 = 540711U;
int16_t x790 = 1;
int64_t x792 = INT64_MIN;
int64_t t149 = 1083439846LL;
volatile uint64_t t150 = 55164LLU;
int32_t x802 = -1;
uint16_t x809 = 5224U;
static volatile uint32_t x814 = UINT32_MAX;
volatile uint32_t t154 = 1930928U;
uint32_t x825 = 116U;
static uint8_t x836 = UINT8_MAX;
volatile int64_t x859 = -2867414LL;
volatile uint64_t t164 = 27LLU;
static volatile int64_t x867 = 2LL;
uint16_t x870 = 224U;
uint64_t x873 = 2832867534860608LLU;
uint16_t x878 = 1602U;
uint64_t x899 = UINT64_MAX;
uint8_t x910 = 29U;
int16_t x922 = 5395;
uint64_t t175 = 8156635180111024LLU;
int32_t x925 = 1;
uint64_t x942 = 19853258536654LLU;
uint16_t x948 = 7U;
int32_t x949 = -3952;
uint16_t x964 = 17U;
static uint8_t x968 = 1U;
static volatile uint64_t x972 = 37240LLU;
int16_t x975 = INT16_MIN;
int16_t x986 = INT16_MAX;
static int64_t x992 = INT64_MIN;
volatile uint64_t t189 = 571200494336360014LLU;
volatile int64_t t190 = -29090622698668653LL;
uint64_t t191 = 130783239599771615LLU;
volatile int64_t x1002 = INT64_MAX;
int64_t t192 = -10258372LL;
uint64_t x1010 = 7LLU;
volatile int16_t x1032 = INT16_MIN;
int64_t x1033 = 265151034LL;
uint8_t x1034 = UINT8_MAX;
uint32_t x1035 = 1957615577U;
uint64_t x1036 = 6683322LLU;
int64_t x1037 = -1LL;
static uint16_t x1038 = 17256U;
volatile int16_t x1040 = INT16_MAX;
int16_t x1047 = INT16_MAX;
uint64_t x1052 = UINT64_MAX;
uint64_t x1053 = UINT64_MAX;
int16_t x1054 = -1;
volatile uint64_t t199 = 1760188654943959748LLU;


void f0(void) {
    	volatile int16_t x2 = INT16_MIN;
	static int8_t x3 = INT8_MIN;
	uint64_t x4 = 67924463337638579LLU;
	static volatile uint64_t t0 = 12671196805585LLU;

    t0 = ((x1-(x2+x3))+x4);

    if (t0 != 67924463337672749LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	uint16_t x7 = 53U;
	int16_t x8 = -1;
	int64_t t1 = -1LL;

    t1 = ((x5-(x6+x7))+x8);

    if (t1 != -9223372036854775734LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x13 = -1;
	static uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 409U;

    t2 = ((x13-(x14+x15))+x16);

    if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 14319864U;
	volatile int32_t x18 = -10541;
	int64_t x19 = -63LL;
	volatile uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 17547927444747934LLU;

    t3 = ((x17-(x18+x19))+x20);

    if (t3 != 14330467LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	uint64_t x22 = 225725772LLU;
	volatile int64_t x23 = -244542LL;
	volatile uint64_t t4 = 14009LLU;

    t4 = ((x21-(x22+x23))+x24);

    if (t4 != 4069486065LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	static int64_t x26 = 290LL;
	int16_t x27 = INT16_MIN;
	int64_t t5 = -202656032178814LL;

    t5 = ((x25-(x26+x27))+x28);

    if (t5 != 32549LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = 38412;
	uint32_t x34 = 19681U;
	uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 58U;
	volatile uint32_t t6 = 7459U;

    t6 = ((x33-(x34+x35))+x36);

    if (t6 != 18790U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	int8_t x38 = -10;
	int16_t x39 = -1;
	int64_t x40 = -1LL;

    t7 = ((x37-(x38+x39))+x40);

    if (t7 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x42 = -1;
	volatile int8_t x43 = -1;
	volatile uint32_t x44 = 5089U;
	uint32_t t8 = 43871616U;

    t8 = ((x41-(x42+x43))+x44);

    if (t8 != 4963U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 0;
	volatile int32_t x46 = INT32_MAX;
	uint64_t x47 = 585621LLU;
	int64_t x48 = INT64_MAX;
	volatile uint64_t t9 = 43211LLU;

    t9 = ((x45-(x46+x47))+x48);

    if (t9 != 9223372034706706539LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MIN;
	static uint64_t x50 = 854858187959387261LLU;
	uint64_t x51 = UINT64_MAX;
	volatile int8_t x52 = INT8_MIN;
	uint64_t t10 = 470916915432894443LLU;

    t10 = ((x49-(x50+x51))+x52);

    if (t10 != 8368513848895388420LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x53 = 7U;
	int16_t x54 = 8324;
	int8_t x55 = 20;

    t11 = ((x53-(x54+x55))+x56);

    if (t11 != 1513039940716LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x62 = INT16_MAX;
	static volatile int16_t x63 = INT16_MIN;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = ((x61-(x62+x63))+x64);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x66 = 63895240;
	static uint64_t x67 = 2487512250903500684LLU;
	int8_t x68 = -1;
	uint64_t t13 = 89LLU;

    t13 = ((x65-(x66+x67))+x68);

    if (t13 != 15959231822742155660LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x70 = -3547;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = 283247U;

    t14 = ((x69-(x70+x71))+x72);

    if (t14 != 286667LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x74 = -1LL;
	static uint8_t x75 = UINT8_MAX;
	volatile uint64_t t15 = 14961676LLU;

    t15 = ((x73-(x74+x75))+x76);

    if (t15 != 53806974LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x81 = INT64_MIN;
	int16_t x82 = -452;
	static int64_t x83 = 0LL;
	int8_t x84 = INT8_MAX;
	int64_t t16 = 2168396LL;

    t16 = ((x81-(x82+x83))+x84);

    if (t16 != -9223372036854775229LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = 123U;
	int16_t x86 = 0;
	volatile int32_t x87 = INT32_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t17 = -10879196;

    t17 = ((x85-(x86+x87))+x88);

    if (t17 != -2147483269) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x93 = 2U;
	static uint8_t x95 = UINT8_MAX;

    t18 = ((x93-(x94+x95))+x96);

    if (t18 != 7184) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x97 = UINT32_MAX;
	volatile int8_t x98 = 1;
	volatile uint16_t x99 = 238U;
	volatile int8_t x100 = INT8_MIN;
	volatile uint32_t t19 = 203785599U;

    t19 = ((x97-(x98+x99))+x100);

    if (t19 != 4294966928U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = -4057826050834LL;
	volatile int16_t x102 = INT16_MAX;
	int32_t x103 = 26156681;
	int64_t t20 = -13217323025LL;

    t20 = ((x101-(x102+x103))+x104);

    if (t20 != -4057852240410LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x105 = -100729;
	static volatile uint64_t x106 = UINT64_MAX;
	static int32_t x108 = INT32_MIN;

    t21 = ((x105-(x106+x107))+x108);

    if (t21 != 18446744071561967241LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = 45;
	int16_t x111 = -17;
	int16_t x112 = 1740;
	int32_t t22 = 304110782;

    t22 = ((x109-(x110+x111))+x112);

    if (t22 != 1584) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = 45774301U;
	volatile int8_t x114 = INT8_MIN;
	int64_t x116 = -1LL;
	volatile int64_t t23 = 811398525358LL;

    t23 = ((x113-(x114+x115))+x116);

    if (t23 != 45774413LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = -1;
	static uint32_t x120 = 164U;
	volatile uint32_t t24 = 372U;

    t24 = ((x117-(x118+x119))+x120);

    if (t24 != 53U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x138 = 542246748489807414LLU;
	int8_t x139 = 28;
	volatile uint64_t t25 = 1438906799217188LLU;

    t25 = ((x137-(x138+x139))+x140);

    if (t25 != 17904497325219744174LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x141 = 44739;
	int16_t x142 = -1;
	static volatile int16_t x143 = 2576;
	int8_t x144 = INT8_MIN;
	static int32_t t26 = -2011;

    t26 = ((x141-(x142+x143))+x144);

    if (t26 != 42036) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = -1;
	uint8_t x146 = 0U;
	uint64_t x147 = 41521184949162LLU;
	uint64_t t27 = 2410769041LLU;

    t27 = ((x145-(x146+x147))+x148);

    if (t27 != 18446702550377118805LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	static int16_t x152 = INT16_MIN;
	uint32_t t28 = 2033U;

    t28 = ((x149-(x150+x151))+x152);

    if (t28 != 2049755194U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x153 = 179057947U;
	uint16_t x154 = 461U;
	uint16_t x155 = 7U;
	int32_t x156 = 2304615;
	volatile uint32_t t29 = 56U;

    t29 = ((x153-(x154+x155))+x156);

    if (t29 != 181362094U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x157 = UINT8_MAX;
	static uint8_t x158 = 1U;
	uint16_t x159 = UINT16_MAX;
	volatile uint16_t x160 = 19U;
	volatile int32_t t30 = -628;

    t30 = ((x157-(x158+x159))+x160);

    if (t30 != -65262) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x162 = 4582163552LL;
	uint32_t x163 = 210784057U;
	int16_t x164 = -1;
	volatile int64_t t31 = 241929186405498LL;

    t31 = ((x161-(x162+x163))+x164);

    if (t31 != -4792947738LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x166 = -4;
	volatile int32_t x167 = 1;
	volatile int64_t t32 = -3107860055LL;

    t32 = ((x165-(x166+x167))+x168);

    if (t32 != -23000299594531LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x169 = INT32_MAX;
	static int16_t x170 = INT16_MAX;
	static volatile uint64_t t33 = 122114276865858661LLU;

    t33 = ((x169-(x170+x171))+x172);

    if (t33 != 17930127570183923849LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = INT32_MIN;
	uint8_t x174 = 9U;
	uint32_t x175 = 279873555U;
	volatile uint32_t t34 = 101U;

    t34 = ((x173-(x174+x175))+x176);

    if (t34 != 1867610083U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x177 = 75589092157715528LLU;
	static uint32_t x178 = 111U;
	volatile int16_t x179 = 9;
	static int8_t x180 = 9;
	volatile uint64_t t35 = 500126LLU;

    t35 = ((x177-(x178+x179))+x180);

    if (t35 != 75589092157715417LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x181 = -16187;
	int16_t x184 = INT16_MAX;
	volatile uint32_t t36 = 2500372U;

    t36 = ((x181-(x182+x183))+x184);

    if (t36 != 9798U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x185 = UINT8_MAX;
	int32_t x186 = -4;
	int8_t x187 = -27;
	int64_t x188 = INT64_MIN;

    t37 = ((x185-(x186+x187))+x188);

    if (t37 != -9223372036854775522LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x189 = 416685247377LLU;
	int16_t x190 = INT16_MIN;
	static int32_t x191 = INT32_MAX;

    t38 = ((x189-(x190+x191))+x192);

    if (t38 != 9223372451392572306LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x197 = 12648439824089LLU;
	uint8_t x198 = 4U;
	int8_t x199 = INT8_MIN;
	volatile uint64_t t39 = 2LLU;

    t39 = ((x197-(x198+x199))+x200);

    if (t39 != 12648439824212LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x201 = 6590865976873LLU;
	int16_t x202 = INT16_MIN;
	volatile int8_t x204 = -6;
	volatile uint64_t t40 = 10093LLU;

    t40 = ((x201-(x202+x203))+x204);

    if (t40 != 18337479251205270025LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x205 = INT8_MIN;
	static int8_t x206 = INT8_MAX;
	int8_t x207 = -1;
	volatile uint16_t x208 = UINT16_MAX;
	volatile int32_t t41 = 149259;

    t41 = ((x205-(x206+x207))+x208);

    if (t41 != 65281) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x211 = -2262;
	volatile uint64_t t42 = 3LLU;

    t42 = ((x209-(x210+x211))+x212);

    if (t42 != 17867168299216LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x218 = 7069047U;
	int8_t x219 = 1;
	volatile uint64_t t43 = 0LLU;

    t43 = ((x217-(x218+x219))+x220);

    if (t43 != 5496035575974LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x221 = -1;
	int16_t x222 = 1043;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -85;
	static int32_t t44 = -2;

    t44 = ((x221-(x222+x223))+x224);

    if (t44 != 2147482519) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x241 = INT8_MIN;
	static int16_t x242 = INT16_MAX;
	int32_t x243 = INT32_MIN;
	uint64_t x244 = UINT64_MAX;
	uint64_t t45 = 174105516LLU;

    t45 = ((x241-(x242+x243))+x244);

    if (t45 != 2147450752LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x245 = INT32_MIN;
	int8_t x246 = -13;
	volatile int8_t x247 = -1;
	uint32_t x248 = 37251503U;
	static uint32_t t46 = 192U;

    t46 = ((x245-(x246+x247))+x248);

    if (t46 != 2184735165U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = -8;
	volatile uint32_t t47 = 412U;

    t47 = ((x253-(x254+x255))+x256);

    if (t47 != 120U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x259 = 3789LLU;
	static volatile int16_t x260 = INT16_MAX;
	volatile uint64_t t48 = 181754LLU;

    t48 = ((x257-(x258+x259))+x260);

    if (t48 != 28976LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = 682084882;
	static int16_t x262 = INT16_MIN;
	static volatile int64_t x263 = -11286LL;
	int64_t t49 = 6LL;

    t49 = ((x261-(x262+x263))+x264);

    if (t49 != 682128939LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x269 = 582U;
	int16_t x271 = INT16_MIN;
	int16_t x272 = -1;
	static uint32_t t50 = 3457U;

    t50 = ((x269-(x270+x271))+x272);

    if (t50 != 4294479201U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x274 = INT16_MIN;

    t51 = ((x273-(x274+x275))+x276);

    if (t51 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x277 = -5;
	static uint32_t x278 = 2036046592U;
	volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = 16U;
	static volatile int64_t t52 = -200100250LL;

    t52 = ((x277-(x278+x279))+x280);

    if (t52 != 9223372034818729227LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x281 = INT32_MIN;
	volatile int16_t x282 = INT16_MIN;
	volatile uint8_t x283 = UINT8_MAX;
	volatile int64_t x284 = -1LL;
	int64_t t53 = 17122487540821195LL;

    t53 = ((x281-(x282+x283))+x284);

    if (t53 != -2147451136LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x285 = INT32_MIN;
	volatile int16_t x288 = INT16_MAX;
	volatile int32_t t54 = 3;

    t54 = ((x285-(x286+x287))+x288);

    if (t54 != -2147418116) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x298 = 33U;
	int64_t x300 = INT64_MIN;
	volatile int64_t t55 = 1912LL;

    t55 = ((x297-(x298+x299))+x300);

    if (t55 != -9223372036854743074LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x301 = 1;
	uint32_t x302 = 1237U;
	int16_t x303 = 4;
	int8_t x304 = INT8_MAX;
	uint32_t t56 = 10657220U;

    t56 = ((x301-(x302+x303))+x304);

    if (t56 != 4294966183U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x305 = -1LL;
	uint16_t x306 = 1U;
	volatile int8_t x308 = -1;
	volatile int64_t t57 = -301259LL;

    t57 = ((x305-(x306+x307))+x308);

    if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int64_t x310 = INT64_MIN;
	int64_t x311 = 17356212435467343LL;
	int64_t x312 = INT64_MIN;
	volatile uint64_t t58 = 6274478402298LLU;

    t58 = ((x309-(x310+x311))+x312);

    if (t58 != 18429387861274084272LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x317 = INT8_MAX;
	int8_t x318 = INT8_MAX;
	volatile int16_t x319 = -8;
	uint8_t x320 = 35U;
	int32_t t59 = 2;

    t59 = ((x317-(x318+x319))+x320);

    if (t59 != 43) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x321 = 1;
	int64_t x322 = -624LL;
	int16_t x324 = INT16_MIN;

    t60 = ((x321-(x322+x323))+x324);

    if (t60 != -1347497LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x325 = -15;
	static uint8_t x326 = 11U;
	static volatile int32_t x327 = INT32_MIN;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t61 = -3;

    t61 = ((x325-(x326+x327))+x328);

    if (t61 != 2147483494) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x329 = -8140;
	int64_t x330 = 8595197LL;
	int8_t x331 = INT8_MIN;
	volatile int64_t t62 = 590825473169474LL;

    t62 = ((x329-(x330+x331))+x332);

    if (t62 != 2138880438LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x345 = -1LL;
	uint64_t x346 = 102775LLU;
	static volatile int64_t x347 = -1LL;
	int32_t x348 = INT32_MAX;
	static volatile uint64_t t63 = 81302LLU;

    t63 = ((x345-(x346+x347))+x348);

    if (t63 != 2147380872LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x350 = -1;
	static uint64_t x351 = UINT64_MAX;
	static int8_t x352 = -1;

    t64 = ((x349-(x350+x351))+x352);

    if (t64 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x359 = UINT8_MAX;
	uint32_t t65 = 359979547U;

    t65 = ((x357-(x358+x359))+x360);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x361 = INT64_MAX;
	uint32_t x362 = UINT32_MAX;
	volatile uint32_t x363 = 596348U;
	volatile uint64_t t66 = 884897521082549737LLU;

    t66 = ((x361-(x362+x363))+x364);

    if (t66 != 9223372036861352463LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x365 = INT16_MAX;
	uint64_t x366 = 449507773509LLU;
	volatile int64_t x367 = INT64_MAX;
	int8_t x368 = INT8_MIN;
	static volatile uint64_t t67 = 15035454465984606LLU;

    t67 = ((x365-(x366+x367))+x368);

    if (t67 != 9223371587347034939LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x370 = INT64_MIN;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = 1;
	static int64_t t68 = -17108624562LL;

    t68 = ((x369-(x370+x371))+x372);

    if (t68 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x373 = 2U;
	volatile int16_t x374 = INT16_MIN;
	uint8_t x375 = 40U;
	int8_t x376 = -1;
	volatile int32_t t69 = -1024;

    t69 = ((x373-(x374+x375))+x376);

    if (t69 != 32729) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x377 = INT8_MIN;
	volatile int32_t x380 = INT32_MIN;
	int32_t t70 = -6174084;

    t70 = ((x377-(x378+x379))+x380);

    if (t70 != -2147451007) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x383 = 21U;
	uint32_t x384 = UINT32_MAX;
	static volatile uint32_t t71 = 2U;

    t71 = ((x381-(x382+x383))+x384);

    if (t71 != 121U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x385 = 0U;
	static int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	static int32_t t72 = 7116338;

    t72 = ((x385-(x386+x387))+x388);

    if (t72 != 32641) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x390 = INT32_MAX;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 2U;
	volatile int64_t t73 = 9840136LL;

    t73 = ((x389-(x390+x391))+x392);

    if (t73 != 701587228037716819LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x401 = 6949192300238388468LLU;
	volatile uint32_t x402 = 1675736U;
	static volatile int32_t x403 = -1;
	volatile uint32_t x404 = 1363U;
	static volatile uint64_t t74 = 238156LLU;

    t74 = ((x401-(x402+x403))+x404);

    if (t74 != 6949192300236714096LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x406 = 5;
	int8_t x407 = INT8_MIN;
	volatile int64_t t75 = -161015285LL;

    t75 = ((x405-(x406+x407))+x408);

    if (t75 != 32889LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x413 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	uint32_t t76 = 46U;

    t76 = ((x413-(x414+x415))+x416);

    if (t76 != 4294967274U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x417 = INT8_MIN;
	static int8_t x418 = INT8_MAX;
	volatile int16_t x419 = INT16_MIN;
	uint8_t x420 = 91U;
	volatile int32_t t77 = -1138745;

    t77 = ((x417-(x418+x419))+x420);

    if (t77 != 32604) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x421 = 532091702116999LLU;
	volatile uint8_t x422 = 30U;
	static int64_t x424 = -122993043455LL;
	volatile uint64_t t78 = 1706615766363595LLU;

    t78 = ((x421-(x422+x423))+x424);

    if (t78 != 9223904005563849322LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x429 = -4341618;
	static int64_t x430 = INT64_MAX;
	int64_t x431 = INT64_MIN;
	volatile int8_t x432 = 0;
	int64_t t79 = 464LL;

    t79 = ((x429-(x430+x431))+x432);

    if (t79 != -4341617LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x434 = 4027485LLU;
	int64_t x435 = -1LL;
	int8_t x436 = -1;
	uint64_t t80 = 47LLU;

    t80 = ((x433-(x434+x435))+x436);

    if (t80 != 18446744073705524725LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x438 = 91134911LLU;
	int8_t x439 = -1;

    t81 = ((x437-(x438+x439))+x440);

    if (t81 != 9223895731065780449LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x441 = INT8_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x444 = -1;
	uint64_t t82 = 8110488001152567LLU;

    t82 = ((x441-(x442+x443))+x444);

    if (t82 != 18446744073709486208LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x445 = 482883LLU;
	uint8_t x446 = 7U;
	volatile uint16_t x447 = 1267U;
	int64_t x448 = -1LL;
	static volatile uint64_t t83 = 2855350427LLU;

    t83 = ((x445-(x446+x447))+x448);

    if (t83 != 481608LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x449 = 115602904422LLU;
	int32_t x450 = -1;
	int64_t x451 = -1LL;
	volatile uint64_t t84 = 1905202408925521227LLU;

    t84 = ((x449-(x450+x451))+x452);

    if (t84 != 115602904423LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x453 = 7U;
	uint16_t x454 = UINT16_MAX;
	int16_t x455 = -989;
	int8_t x456 = INT8_MAX;
	int32_t t85 = 1099277;

    t85 = ((x453-(x454+x455))+x456);

    if (t85 != -64412) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x457 = -1;
	int64_t x459 = -13089396378832LL;
	static int64_t x460 = -1LL;
	volatile int64_t t86 = 1780178437568028929LL;

    t86 = ((x457-(x458+x459))+x460);

    if (t86 != 13089396378831LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x462 = -1;
	int64_t x463 = -1LL;
	uint16_t x464 = 1U;
	volatile int64_t t87 = 53795305015707LL;

    t87 = ((x461-(x462+x463))+x464);

    if (t87 != 130LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x465 = 5U;
	static int32_t x466 = INT32_MAX;
	int64_t x467 = INT64_MIN;
	int16_t x468 = INT16_MAX;
	int64_t t88 = 2382LL;

    t88 = ((x465-(x466+x467))+x468);

    if (t88 != 9223372034707324933LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x469 = INT32_MIN;
	static uint16_t x470 = 109U;
	int16_t x472 = -1;
	int32_t t89 = -6839;

    t89 = ((x469-(x470+x471))+x472);

    if (t89 != -2147450990) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x473 = -2630;
	static int8_t x474 = 16;
	uint16_t x475 = 2789U;
	volatile int16_t x476 = 180;
	int32_t t90 = -10914802;

    t90 = ((x473-(x474+x475))+x476);

    if (t90 != -5255) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x478 = UINT8_MAX;
	static uint64_t t91 = 117003346LLU;

    t91 = ((x477-(x478+x479))+x480);

    if (t91 != 170784239LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x481 = -1;
	int16_t x483 = INT16_MAX;
	int32_t t92 = -2;

    t92 = ((x481-(x482+x483))+x484);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x485 = INT16_MAX;
	static int32_t x486 = INT32_MIN;
	uint32_t x487 = 1522531U;
	volatile uint64_t x488 = 11149712492351574LLU;
	volatile uint64_t t93 = 1321107813499LLU;

    t93 = ((x485-(x486+x487))+x488);

    if (t93 != 11149714638345458LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x489 = 1765U;
	int8_t x490 = INT8_MIN;
	int32_t x491 = INT32_MAX;
	int32_t t94 = 899120;

    t94 = ((x489-(x490+x491))+x492);

    if (t94 != 1893) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x493 = UINT64_MAX;
	uint32_t x494 = 12U;
	int32_t x495 = INT32_MAX;
	uint8_t x496 = 2U;
	volatile uint64_t t95 = 972216964827LLU;

    t95 = ((x493-(x494+x495))+x496);

    if (t95 != 18446744071562067958LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x498 = INT32_MAX;
	uint32_t x499 = UINT32_MAX;
	uint64_t x500 = 475LLU;

    t96 = ((x497-(x498+x499))+x500);

    if (t96 != 2147484142LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x501 = INT8_MIN;
	int64_t x503 = INT64_MAX;
	volatile int16_t x504 = 0;
	int64_t t97 = -335LL;

    t97 = ((x501-(x502+x503))+x504);

    if (t97 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x507 = 84671U;
	volatile int64_t x508 = -1LL;

    t98 = ((x505-(x506+x507))+x508);

    if (t98 != 9223372036854691137LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x510 = -29258452LL;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	int64_t t99 = 443609678915LL;

    t99 = ((x509-(x510+x511))+x512);

    if (t99 != -9223372034678066476LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x513 = -1;
	int64_t x514 = 3452702LL;
	uint64_t x516 = 180201344851991LLU;
	volatile uint64_t t100 = 130706137LLU;

    t100 = ((x513-(x514+x515))+x516);

    if (t100 != 180201341399288LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x517 = -1;
	int64_t x518 = -33774LL;
	int16_t x519 = 1528;
	static int64_t x520 = 3120487LL;
	volatile int64_t t101 = 908040935785315279LL;

    t101 = ((x517-(x518+x519))+x520);

    if (t101 != 3152732LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x521 = INT64_MAX;
	static int8_t x523 = INT8_MAX;
	int32_t x524 = INT32_MIN;
	static volatile int64_t t102 = -3LL;

    t102 = ((x521-(x522+x523))+x524);

    if (t102 != 9223372034707292005LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x525 = -1;
	uint32_t x527 = UINT32_MAX;
	static int64_t x528 = 955539542LL;
	static volatile int64_t t103 = -421352235LL;

    t103 = ((x525-(x526+x527))+x528);

    if (t103 != 9223372033515348054LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x534 = 1527LLU;
	static volatile int64_t x535 = INT64_MIN;
	int16_t x536 = 12;
	volatile uint64_t t104 = 10963522LLU;

    t104 = ((x533-(x534+x535))+x536);

    if (t104 != 9223372036854807060LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x537 = -1;
	static uint8_t x538 = UINT8_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	int8_t x540 = INT8_MAX;
	uint64_t t105 = 21288393611463LLU;

    t105 = ((x537-(x538+x539))+x540);

    if (t105 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x550 = 12384548LLU;
	uint64_t x551 = UINT64_MAX;
	uint16_t x552 = UINT16_MAX;
	static volatile uint64_t t106 = 2152430728000733LLU;

    t106 = ((x549-(x550+x551))+x552);

    if (t106 != 2135164635LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x553 = 1973;
	int64_t x554 = -1032762873LL;
	uint32_t x556 = 1394765U;
	uint64_t t107 = 229260382LLU;

    t107 = ((x553-(x554+x555))+x556);

    if (t107 != 1034159584LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x557 = 47U;
	static int64_t x560 = INT64_MIN;

    t108 = ((x557-(x558+x559))+x560);

    if (t108 != -9223372036854742992LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x561 = INT8_MIN;
	uint8_t x563 = 25U;
	int8_t x564 = 0;
	int32_t t109 = 1760;

    t109 = ((x561-(x562+x563))+x564);

    if (t109 != 32615) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x565 = 0;
	int16_t x566 = -1;
	static int64_t x567 = -321308497272533LL;
	uint8_t x568 = 3U;

    t110 = ((x565-(x566+x567))+x568);

    if (t110 != 321308497272537LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x569 = UINT8_MAX;
	uint16_t x570 = UINT16_MAX;
	int64_t x571 = -58502253LL;
	int64_t x572 = -1LL;
	static volatile int64_t t111 = 27LL;

    t111 = ((x569-(x570+x571))+x572);

    if (t111 != 58436972LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x573 = 733299645806001614LL;
	uint32_t x575 = 3U;
	uint8_t x576 = UINT8_MAX;

    t112 = ((x573-(x574+x575))+x576);

    if (t112 != 733299645806001395LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x577 = INT32_MAX;
	volatile int64_t x579 = -2880LL;
	int64_t x580 = INT64_MIN;
	static volatile int64_t t113 = 2746322018LL;

    t113 = ((x577-(x578+x579))+x580);

    if (t113 != -9223372034707289280LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x581 = INT32_MIN;
	int8_t x582 = INT8_MAX;
	volatile uint64_t x583 = 99713227899LLU;
	int64_t x584 = INT64_MAX;
	uint64_t t114 = 16951943425LLU;

    t114 = ((x581-(x582+x583))+x584);

    if (t114 != 9223371934994064133LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x589 = 7783950U;
	uint8_t x590 = UINT8_MAX;
	static int32_t x591 = INT32_MIN;
	volatile int64_t t115 = 11329760852LL;

    t115 = ((x589-(x590+x591))+x592);

    if (t115 != -9223372034699508465LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x597 = INT32_MAX;
	volatile int64_t x599 = INT64_MAX;
	volatile int64_t t116 = 110934757LL;

    t116 = ((x597-(x598+x599))+x600);

    if (t116 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x609 = INT16_MAX;
	uint64_t x610 = 18875184LLU;
	uint64_t x611 = 4LLU;
	int8_t x612 = INT8_MIN;
	uint64_t t117 = 4262138208509LLU;

    t117 = ((x609-(x610+x611))+x612);

    if (t117 != 18446744073690709067LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x618 = -3;
	volatile int8_t x619 = -57;
	uint8_t x620 = UINT8_MAX;
	int32_t t118 = 94;

    t118 = ((x617-(x618+x619))+x620);

    if (t118 != 318) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x621 = INT16_MIN;
	uint16_t x622 = 57U;
	volatile int32_t t119 = 13011;

    t119 = ((x621-(x622+x623))+x624);

    if (t119 != 2147450823) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x625 = -1;
	volatile int32_t x627 = -305079;

    t120 = ((x625-(x626+x627))+x628);

    if (t120 != 305333) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MIN;
	int8_t x635 = 0;
	uint8_t x636 = 29U;
	int32_t t121 = -22983202;

    t121 = ((x633-(x634+x635))+x636);

    if (t121 != -32611) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x637 = 52101165901LLU;
	volatile uint8_t x638 = 3U;
	int16_t x639 = INT16_MIN;
	static volatile int16_t x640 = INT16_MIN;
	volatile uint64_t t122 = 11245LLU;

    t122 = ((x637-(x638+x639))+x640);

    if (t122 != 52101165898LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x646 = 68087052716LL;
	int16_t x647 = INT16_MAX;
	int64_t t123 = 909199380300377LL;

    t123 = ((x645-(x646+x647))+x648);

    if (t123 != -68031645387LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x649 = -1;
	int64_t x650 = -40LL;
	int16_t x651 = INT16_MAX;
	static volatile int8_t x652 = -1;
	static int64_t t124 = -1LL;

    t124 = ((x649-(x650+x651))+x652);

    if (t124 != -32729LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x653 = UINT16_MAX;
	static uint16_t x654 = UINT16_MAX;
	static volatile int16_t x655 = INT16_MIN;
	int16_t x656 = INT16_MIN;
	int32_t t125 = -1037;

    t125 = ((x653-(x654+x655))+x656);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x659 = UINT32_MAX;
	static int32_t x660 = -1;
	static volatile uint32_t t126 = 10110252U;

    t126 = ((x657-(x658+x659))+x660);

    if (t126 != 2147483648U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = -1;
	uint64_t x667 = 1382273487203480200LLU;
	volatile uint64_t t127 = 926LLU;

    t127 = ((x665-(x666+x667))+x668);

    if (t127 != 7841098547503811960LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x670 = -1LL;
	int64_t x671 = -1LL;
	static volatile uint16_t x672 = UINT16_MAX;

    t128 = ((x669-(x670+x671))+x672);

    if (t128 != 65536LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x673 = -1;
	int16_t x674 = INT16_MIN;
	uint16_t x675 = UINT16_MAX;
	int32_t t129 = 1;

    t129 = ((x673-(x674+x675))+x676);

    if (t129 != -65536) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x686 = INT64_MIN;
	uint16_t x687 = 246U;
	uint64_t x688 = UINT64_MAX;
	uint64_t t130 = 925440LLU;

    t130 = ((x685-(x686+x687))+x688);

    if (t130 != 18446744073709551369LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x693 = 651U;
	static uint16_t x694 = UINT16_MAX;
	volatile int8_t x695 = INT8_MIN;
	volatile int16_t x696 = INT16_MIN;
	volatile uint32_t t131 = 2433010U;

    t131 = ((x693-(x694+x695))+x696);

    if (t131 != 4294869772U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x701 = INT16_MAX;
	volatile int64_t x702 = 0LL;
	int32_t x703 = INT32_MAX;
	int8_t x704 = INT8_MAX;
	volatile int64_t t132 = 485388979002LL;

    t132 = ((x701-(x702+x703))+x704);

    if (t132 != -2147450753LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x705 = UINT8_MAX;
	int32_t x706 = -308;
	static int8_t x707 = INT8_MIN;
	uint64_t x708 = 58469LLU;

    t133 = ((x705-(x706+x707))+x708);

    if (t133 != 59160LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x713 = 4475U;
	static int32_t x716 = INT32_MIN;

    t134 = ((x713-(x714+x715))+x716);

    if (t134 != -808375LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x721 = 1;
	volatile uint16_t x722 = 5166U;
	int16_t x723 = 1001;
	int16_t x724 = INT16_MIN;
	volatile int32_t t135 = -7;

    t135 = ((x721-(x722+x723))+x724);

    if (t135 != -38934) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x726 = -3;
	uint16_t x727 = 3286U;
	static uint32_t x728 = UINT32_MAX;
	uint32_t t136 = 6550898U;

    t136 = ((x725-(x726+x727))+x728);

    if (t136 != 4294964139U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x733 = 490376176;
	int16_t x734 = INT16_MIN;
	int8_t x735 = INT8_MIN;
	int32_t t137 = -27940605;

    t137 = ((x733-(x734+x735))+x736);

    if (t137 != 490441839) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile int16_t x739 = INT16_MIN;
	volatile int32_t x740 = -7;
	uint32_t t138 = 109U;

    t138 = ((x737-(x738+x739))+x740);

    if (t138 != 32674U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x741 = 10278961974583LL;
	volatile int64_t t139 = 51055972098833LL;

    t139 = ((x741-(x742+x743))+x744);

    if (t139 != 10278961934721LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x749 = 719513LLU;
	volatile int8_t x750 = 18;
	uint32_t x751 = 4U;
	int16_t x752 = -1;
	uint64_t t140 = 18388164970LLU;

    t140 = ((x749-(x750+x751))+x752);

    if (t140 != 719490LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x754 = UINT16_MAX;
	int16_t x755 = -442;
	volatile uint32_t t141 = 129511U;

    t141 = ((x753-(x754+x755))+x756);

    if (t141 != 4294902251U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x757 = 409U;
	int64_t x758 = 4086421159301LL;
	int16_t x759 = INT16_MIN;

    t142 = ((x757-(x758+x759))+x760);

    if (t142 != -4086421124914LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x761 = UINT32_MAX;
	int64_t x762 = -1LL;
	static volatile int32_t x764 = -54;
	volatile uint64_t t143 = 1247430641890507040LLU;

    t143 = ((x761-(x762+x763))+x764);

    if (t143 != 4294967243LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x766 = INT32_MAX;
	uint32_t x767 = 68725110U;
	uint32_t x768 = UINT32_MAX;
	uint64_t t144 = 211262856777882693LLU;

    t144 = ((x765-(x766+x767))+x768);

    if (t144 != 2078758537LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x769 = 0U;
	int32_t x770 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	volatile int32_t t145 = 207851;

    t145 = ((x769-(x770+x771))+x772);

    if (t145 != 2147483265) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x777 = 958709083268764105LLU;
	static int8_t x778 = 3;
	int16_t x780 = INT16_MAX;
	uint64_t t146 = 3495951140594420LLU;

    t146 = ((x777-(x778+x779))+x780);

    if (t146 != 958190932353227766LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x781 = -1;
	int32_t x782 = -1;
	int32_t x783 = 2459;
	int32_t x784 = 1;

    t147 = ((x781-(x782+x783))+x784);

    if (t147 != -2458) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x785 = 16U;
	int32_t x787 = -1;
	int16_t x788 = 1;
	uint32_t t148 = 3530465U;

    t148 = ((x785-(x786+x787))+x788);

    if (t148 != 32786U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x791 = INT16_MIN;

    t149 = ((x789-(x790+x791))+x792);

    if (t149 != -9223372036854202330LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x793 = 11010;
	volatile uint16_t x794 = 44U;
	volatile uint16_t x795 = 255U;
	uint64_t x796 = UINT64_MAX;

    t150 = ((x793-(x794+x795))+x796);

    if (t150 != 10710LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x798 = INT16_MIN;
	static uint64_t x799 = 297505882LLU;
	int8_t x800 = -1;
	volatile uint64_t t151 = 6208490LLU;

    t151 = ((x797-(x798+x799))+x800);

    if (t151 != 1850010532LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x801 = INT32_MIN;
	uint32_t x803 = 1U;
	uint64_t x804 = 1048161152300741173LLU;
	uint64_t t152 = 3798076471973444LLU;

    t152 = ((x801-(x802+x803))+x804);

    if (t152 != 1048161154448224821LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x810 = UINT8_MAX;
	volatile uint32_t x811 = 524U;
	int8_t x812 = -1;
	static volatile uint32_t t153 = 1164U;

    t153 = ((x809-(x810+x811))+x812);

    if (t153 != 4444U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x813 = -1;
	uint32_t x815 = UINT32_MAX;
	int32_t x816 = INT32_MIN;

    t154 = ((x813-(x814+x815))+x816);

    if (t154 != 2147483649U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x817 = -1;
	uint64_t x818 = 84692541473821829LLU;
	int16_t x819 = 5082;
	uint16_t x820 = UINT16_MAX;
	uint64_t t155 = 29616530595367LLU;

    t155 = ((x817-(x818+x819))+x820);

    if (t155 != 18362051532235790239LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x821 = -1380218094LL;
	uint32_t x822 = UINT32_MAX;
	static int64_t x823 = 4023050LL;
	int8_t x824 = -1;
	int64_t t156 = -18211505079LL;

    t156 = ((x821-(x822+x823))+x824);

    if (t156 != -5679208440LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x826 = 41;
	int32_t x827 = INT32_MIN;
	uint8_t x828 = 36U;
	uint32_t t157 = 378258407U;

    t157 = ((x825-(x826+x827))+x828);

    if (t157 != 2147483759U) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x829 = INT8_MAX;
	static uint16_t x830 = 15U;
	static uint8_t x831 = UINT8_MAX;
	int16_t x832 = 119;
	int32_t t158 = -815105;

    t158 = ((x829-(x830+x831))+x832);

    if (t158 != -24) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x833 = INT32_MIN;
	int64_t x834 = -1LL;
	volatile int8_t x835 = INT8_MIN;
	volatile int64_t t159 = 25127491362LL;

    t159 = ((x833-(x834+x835))+x836);

    if (t159 != -2147483264LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x845 = 3082393U;
	int16_t x846 = INT16_MIN;
	int16_t x847 = -1;
	int32_t x848 = INT32_MIN;
	static uint32_t t160 = 0U;

    t160 = ((x845-(x846+x847))+x848);

    if (t160 != 2150598810U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x849 = 205995593856189530LL;
	volatile int16_t x850 = INT16_MAX;
	static volatile int64_t x851 = 502559389882LL;
	uint32_t x852 = 52991646U;
	int64_t t161 = -376975930947LL;

    t161 = ((x849-(x850+x851))+x852);

    if (t161 != 205995091349758527LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x853 = INT64_MIN;
	uint8_t x854 = 1U;
	int8_t x855 = -1;
	static int32_t x856 = INT32_MAX;
	int64_t t162 = -57520403894957LL;

    t162 = ((x853-(x854+x855))+x856);

    if (t162 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x857 = INT16_MIN;
	static uint64_t x858 = UINT64_MAX;
	int16_t x860 = -1;
	volatile uint64_t t163 = 5438845254053542LLU;

    t163 = ((x857-(x858+x859))+x860);

    if (t163 != 2834646LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x861 = 9;
	uint64_t x862 = UINT64_MAX;
	static uint16_t x863 = 31817U;
	int8_t x864 = INT8_MIN;

    t164 = ((x861-(x862+x863))+x864);

    if (t164 != 18446744073709519681LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x865 = 18;
	volatile uint32_t x866 = UINT32_MAX;
	volatile uint8_t x868 = UINT8_MAX;
	volatile int64_t t165 = -2775833602LL;

    t165 = ((x865-(x866+x867))+x868);

    if (t165 != -4294967024LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x869 = 1;
	int32_t x871 = -1;
	uint8_t x872 = 116U;
	volatile int32_t t166 = -571078;

    t166 = ((x869-(x870+x871))+x872);

    if (t166 != -106) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x874 = UINT64_MAX;
	static int64_t x875 = INT64_MIN;
	int16_t x876 = INT16_MAX;
	static volatile uint64_t t167 = 38264266082517456LLU;

    t167 = ((x873-(x874+x875))+x876);

    if (t167 != 9226204904389669184LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x877 = -1LL;
	int32_t x879 = INT32_MIN;
	uint32_t x880 = 11756U;
	static volatile int64_t t168 = -526843244601465LL;

    t168 = ((x877-(x878+x879))+x880);

    if (t168 != 2147493801LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x881 = -2;
	int8_t x882 = 0;
	int32_t x883 = INT32_MIN;
	int16_t x884 = INT16_MIN;
	static int32_t t169 = 53;

    t169 = ((x881-(x882+x883))+x884);

    if (t169 != 2147450878) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x889 = 29;
	uint32_t x890 = 52569U;
	int64_t x891 = -1LL;
	uint16_t x892 = UINT16_MAX;
	volatile int64_t t170 = 10469LL;

    t170 = ((x889-(x890+x891))+x892);

    if (t170 != 12996LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x893 = 58U;
	int32_t x894 = -758;
	uint16_t x895 = 19U;
	int16_t x896 = INT16_MAX;
	volatile int32_t t171 = -62201073;

    t171 = ((x893-(x894+x895))+x896);

    if (t171 != 33564) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x897 = 84U;
	int64_t x898 = INT64_MIN;
	int64_t x900 = 20LL;
	volatile uint64_t t172 = 13413LLU;

    t172 = ((x897-(x898+x899))+x900);

    if (t172 != 9223372036854775913LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x909 = 1U;
	uint16_t x911 = 3U;
	static int8_t x912 = -1;
	volatile int32_t t173 = 2648;

    t173 = ((x909-(x910+x911))+x912);

    if (t173 != -32) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x913 = 5U;
	volatile uint16_t x914 = 420U;
	int64_t x915 = -453669724059328LL;
	volatile uint32_t x916 = 32352768U;
	volatile int64_t t174 = 1207LL;

    t174 = ((x913-(x914+x915))+x916);

    if (t174 != 453669756411681LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x921 = 37LLU;
	int64_t x923 = -1LL;
	uint8_t x924 = 1U;

    t175 = ((x921-(x922+x923))+x924);

    if (t175 != 18446744073709546260LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x926 = 2U;
	int16_t x927 = INT16_MAX;
	uint8_t x928 = 84U;
	int32_t t176 = 457444;

    t176 = ((x925-(x926+x927))+x928);

    if (t176 != -32684) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x937 = 0;
	static int16_t x938 = INT16_MAX;
	int16_t x939 = -1;
	static uint32_t x940 = 8U;
	uint32_t t177 = 1887643743U;

    t177 = ((x937-(x938+x939))+x940);

    if (t177 != 4294934538U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x941 = -1;
	int16_t x943 = INT16_MIN;
	volatile int16_t x944 = INT16_MIN;
	static volatile uint64_t t178 = 44443LLU;

    t178 = ((x941-(x942+x943))+x944);

    if (t178 != 18446724220451014961LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x945 = INT32_MIN;
	static volatile int64_t x946 = 10338535003LL;
	int8_t x947 = INT8_MAX;
	static int64_t t179 = -3420461622513LL;

    t179 = ((x945-(x946+x947))+x948);

    if (t179 != -12486018771LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x950 = INT16_MIN;
	static int16_t x951 = INT16_MIN;
	volatile uint8_t x952 = 29U;
	volatile int32_t t180 = -1;

    t180 = ((x949-(x950+x951))+x952);

    if (t180 != 61613) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x953 = 1U;
	volatile uint8_t x954 = 0U;
	int8_t x955 = INT8_MIN;
	int8_t x956 = INT8_MIN;
	static uint32_t t181 = 1495500U;

    t181 = ((x953-(x954+x955))+x956);

    if (t181 != 1U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x957 = -1LL;
	static uint8_t x958 = UINT8_MAX;
	volatile uint16_t x959 = 124U;
	int64_t x960 = -671646637031LL;
	int64_t t182 = 15551769LL;

    t182 = ((x957-(x958+x959))+x960);

    if (t182 != -671646637411LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x961 = 33U;
	int64_t x962 = INT64_MIN;
	int32_t x963 = INT32_MAX;
	volatile int64_t t183 = -13LL;

    t183 = ((x961-(x962+x963))+x964);

    if (t183 != 9223372034707292211LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x965 = -1;
	static int32_t x966 = -1;
	static uint32_t x967 = UINT32_MAX;
	volatile uint32_t t184 = 1055438429U;

    t184 = ((x965-(x966+x967))+x968);

    if (t184 != 2U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x969 = INT16_MIN;
	uint8_t x970 = UINT8_MAX;
	volatile int8_t x971 = 10;
	volatile uint64_t t185 = 1465LLU;

    t185 = ((x969-(x970+x971))+x972);

    if (t185 != 4207LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x973 = 114920006LLU;
	volatile int32_t x974 = 186899;
	int16_t x976 = INT16_MAX;
	uint64_t t186 = 31083770LLU;

    t186 = ((x973-(x974+x975))+x976);

    if (t186 != 114798642LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x981 = -1;
	static volatile uint64_t x982 = 1514LLU;
	int8_t x983 = -7;
	uint64_t x984 = 245301702LLU;
	uint64_t t187 = 62435336436298LLU;

    t187 = ((x981-(x982+x983))+x984);

    if (t187 != 245300194LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x985 = -7;
	volatile int8_t x987 = -1;
	int32_t x988 = -98;
	static volatile int32_t t188 = 1;

    t188 = ((x985-(x986+x987))+x988);

    if (t188 != -32871) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x989 = INT8_MIN;
	int64_t x990 = INT64_MAX;
	uint64_t x991 = UINT64_MAX;

    t189 = ((x989-(x990+x991))+x992);

    if (t189 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x993 = 12283;
	int64_t x994 = 1061960990LL;
	static volatile uint16_t x995 = 6307U;
	volatile int64_t x996 = -1LL;

    t190 = ((x993-(x994+x995))+x996);

    if (t190 != -1061955015LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x997 = -1;
	int8_t x998 = INT8_MAX;
	int16_t x999 = INT16_MIN;
	uint64_t x1000 = 23LLU;

    t191 = ((x997-(x998+x999))+x1000);

    if (t191 != 32663LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1001 = 500;
	int64_t x1003 = -273931433772074258LL;
	static int32_t x1004 = -394343;

    t192 = ((x1001-(x1002+x1003))+x1004);

    if (t192 != -8949440603083095392LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x1009 = INT16_MIN;
	int16_t x1011 = -1;
	uint64_t x1012 = 949584255834975LLU;
	volatile uint64_t t193 = 9760674LLU;

    t193 = ((x1009-(x1010+x1011))+x1012);

    if (t193 != 949584255802201LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1029 = -1;
	uint16_t x1030 = 5U;
	int16_t x1031 = 473;
	static volatile int32_t t194 = -616424;

    t194 = ((x1029-(x1030+x1031))+x1032);

    if (t194 != -33247) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t t195 = 19863688634450533LLU;

    t195 = ((x1033-(x1034+x1035))+x1036);

    if (t195 != 18446744072023770140LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1039 = -1;
	int64_t t196 = 14677507406LL;

    t196 = ((x1037-(x1038+x1039))+x1040);

    if (t196 != 15511LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x1045 = INT32_MIN;
	int64_t x1046 = 106075810067337LL;
	static int32_t x1048 = INT32_MIN;
	volatile int64_t t197 = -1567372882167724357LL;

    t197 = ((x1045-(x1046+x1047))+x1048);

    if (t197 != -106080105067400LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1049 = -1LL;
	int32_t x1050 = -2;
	volatile int8_t x1051 = -1;
	volatile uint64_t t198 = 99379513LLU;

    t198 = ((x1049-(x1050+x1051))+x1052);

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1055 = UINT32_MAX;
	volatile int8_t x1056 = INT8_MIN;

    t199 = ((x1053-(x1054+x1055))+x1056);

    if (t199 != 18446744069414584193LLU) { NG(); } else { ; }
	
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

