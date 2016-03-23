
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

static int32_t x10 = INT32_MAX;
static uint8_t x16 = UINT8_MAX;
int64_t x20 = INT64_MAX;
volatile int32_t x21 = INT32_MAX;
int8_t x22 = INT8_MAX;
int64_t x23 = -1LL;
volatile int32_t t9 = -26;
volatile int32_t t12 = -699460147;
int8_t x53 = INT8_MIN;
int16_t x59 = 13;
static volatile int32_t t15 = 50926978;
static volatile int32_t x68 = -1;
int16_t x75 = -1;
volatile int64_t x80 = 2025473629926LL;
int16_t x81 = INT16_MIN;
volatile uint16_t x82 = UINT16_MAX;
int32_t t20 = 8;
int64_t x92 = INT64_MIN;
uint16_t x95 = 2243U;
int32_t x99 = -560576535;
uint8_t x101 = UINT8_MAX;
int64_t x107 = -1LL;
uint32_t x109 = 25969U;
uint8_t x111 = UINT8_MAX;
uint16_t x116 = UINT16_MAX;
int64_t x117 = -530285655030LL;
int16_t x118 = INT16_MIN;
static int8_t x119 = -35;
uint8_t x130 = 38U;
volatile int16_t x132 = 43;
volatile int8_t x133 = INT8_MIN;
static int16_t x136 = -1;
static volatile int32_t t33 = -586;
volatile int64_t x142 = INT64_MAX;
uint16_t x161 = 9900U;
uint64_t x166 = 65232122LLU;
int32_t t41 = -54508;
static uint32_t x175 = 2U;
int32_t t43 = -175;
volatile uint16_t x177 = 25U;
int32_t t44 = 3;
volatile int32_t t45 = 1677376;
uint8_t x189 = 7U;
volatile uint32_t x194 = 0U;
uint16_t x210 = 48U;
volatile int32_t t52 = 4215248;
int8_t x215 = INT8_MIN;
int32_t t53 = -52449;
int16_t x217 = INT16_MAX;
int8_t x219 = INT8_MAX;
int16_t x224 = INT16_MIN;
volatile int32_t t56 = 11559735;
static int64_t x230 = INT64_MIN;
static volatile int8_t x232 = 4;
volatile int32_t t58 = -15804;
int16_t x246 = -69;
int32_t x253 = INT32_MIN;
uint8_t x255 = UINT8_MAX;
int32_t t63 = -59445585;
volatile int16_t x257 = 123;
volatile uint16_t x265 = 1006U;
static volatile int32_t t66 = -666748981;
int16_t x269 = INT16_MIN;
volatile int32_t t67 = 23084;
int32_t x276 = -1;
uint32_t x279 = UINT32_MAX;
uint32_t x281 = 48165519U;
volatile int32_t t71 = 9055;
int8_t x294 = INT8_MAX;
uint16_t x306 = 14635U;
static int8_t x308 = INT8_MIN;
int16_t x312 = INT16_MIN;
static volatile uint64_t x313 = 126LLU;
int32_t t78 = -3846;
static uint64_t x317 = 220955LLU;
int64_t x330 = INT64_MAX;
int32_t x338 = INT32_MIN;
uint16_t x340 = 97U;
volatile uint16_t x341 = 0U;
uint16_t x343 = 3U;
uint8_t x351 = 1U;
uint16_t x355 = 0U;
int32_t x364 = -1;
static uint32_t x365 = 28U;
int32_t t91 = 92599938;
static int32_t t92 = 3;
int8_t x373 = INT8_MIN;
volatile int16_t x377 = INT16_MAX;
volatile int32_t t95 = 124;
int64_t x388 = INT64_MAX;
int32_t x391 = INT32_MAX;
uint8_t x395 = UINT8_MAX;
int32_t t98 = 3429;
uint32_t x398 = 18871U;
volatile uint8_t x399 = 7U;
uint32_t x402 = 409159U;
int64_t x405 = -6262656148782LL;
int32_t x407 = 1;
volatile int32_t x408 = 67;
uint8_t x410 = UINT8_MAX;
int16_t x411 = -538;
static int8_t x416 = INT8_MIN;
uint32_t x426 = UINT32_MAX;
uint32_t x432 = 42688U;
uint8_t x433 = 3U;
int16_t x434 = INT16_MIN;
volatile uint64_t x440 = 4589795283564473665LLU;
uint8_t x445 = UINT8_MAX;
volatile int64_t x457 = INT64_MIN;
uint64_t x461 = 46524LLU;
static volatile int32_t t115 = -17350671;
volatile int32_t x465 = -1;
uint32_t x466 = 125U;
volatile int32_t x467 = INT32_MIN;
int32_t x472 = INT32_MIN;
int64_t x473 = INT64_MAX;
int32_t t120 = 16923;
static int32_t x487 = 851081323;
volatile uint64_t x496 = 3811472LLU;
volatile uint32_t x501 = 294U;
uint32_t x502 = 7418U;
static int64_t x504 = 568LL;
int32_t t127 = 97110;
static int64_t x516 = INT64_MAX;
uint32_t x517 = UINT32_MAX;
static uint64_t x523 = 3476LLU;
int32_t x530 = INT32_MIN;
volatile int16_t x536 = -1;
int8_t x538 = -1;
uint8_t x541 = 3U;
volatile int32_t t136 = 11089621;
int32_t x549 = -7116623;
int8_t x550 = INT8_MIN;
int32_t t138 = 181;
static int16_t x563 = -1;
int32_t t141 = 22;
static volatile int32_t t142 = -549338106;
static int32_t x573 = -1;
uint32_t x577 = 1U;
volatile int32_t t144 = -1819294;
volatile int32_t t146 = -91947;
int64_t x594 = INT64_MIN;
volatile int8_t x603 = INT8_MAX;
int16_t x605 = INT16_MIN;
int16_t x606 = 12;
uint16_t x612 = 432U;
volatile int16_t x615 = INT16_MIN;
int32_t x616 = INT32_MIN;
int64_t x620 = -1LL;
int32_t x626 = INT32_MIN;
int64_t x630 = INT64_MAX;
uint16_t x641 = UINT16_MAX;
int8_t x648 = INT8_MAX;
int16_t x654 = INT16_MIN;
uint8_t x655 = 10U;
volatile uint16_t x659 = 1U;
uint64_t x668 = 222199075364696LLU;
int16_t x671 = INT16_MIN;
volatile uint64_t x690 = 1648438670730LLU;
int16_t x691 = INT16_MAX;
uint32_t x693 = UINT32_MAX;
uint64_t x694 = UINT64_MAX;
int64_t x698 = -507157744904004LL;
static int32_t x699 = 1;
int32_t t174 = 201825;
volatile int32_t t176 = -539;
int32_t x710 = -1;
static int32_t x718 = -417357;
int64_t x724 = 175516207577LL;
volatile int32_t t181 = 14587;
static volatile int32_t t183 = 0;
static int32_t x737 = INT32_MAX;
static uint16_t x743 = 8U;
volatile int32_t t186 = -5;
int32_t x751 = INT32_MAX;
static int8_t x752 = INT8_MIN;
int32_t t187 = 14381;
volatile int16_t x755 = -1;
uint16_t x759 = UINT16_MAX;
static int32_t t192 = 6248084;
volatile int64_t x775 = 3LL;
uint64_t x781 = 8072LLU;
volatile int32_t x784 = 639936581;
int32_t t195 = 272628;
int32_t x799 = -1;
int16_t x800 = -27;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	volatile uint16_t x3 = UINT16_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = -1257901;

    t0 = ((x1!=x2)==(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = -1LL;
	int8_t x7 = 48;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 832511904;

    t1 = ((x5!=x6)==(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 3;
	int32_t x11 = 39009;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -1;

    t2 = ((x9!=x10)==(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -327981404;
	static uint8_t x14 = 54U;
	uint64_t x15 = UINT64_MAX;
	static int32_t t3 = 988;

    t3 = ((x13!=x14)==(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int64_t x18 = -1678LL;
	int32_t x19 = INT32_MIN;
	int32_t t4 = 4066;

    t4 = ((x17!=x18)==(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x24 = INT32_MAX;
	int32_t t5 = 345;

    t5 = ((x21!=x22)==(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	static int64_t x27 = -1LL;
	volatile uint64_t x28 = 499647543541364LLU;
	int32_t t6 = -45317032;

    t6 = ((x25!=x26)==(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 12U;
	int64_t x30 = INT64_MIN;
	uint32_t x31 = 22126579U;
	static int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = -892160434;

    t7 = ((x29!=x30)==(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int8_t x34 = 22;
	static uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;
	volatile int32_t t8 = 7206568;

    t8 = ((x33!=x34)==(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	uint16_t x38 = 27U;
	static int8_t x39 = 0;
	int16_t x40 = -245;

    t9 = ((x37!=x38)==(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 1U;
	volatile int8_t x42 = -1;
	static uint16_t x43 = 815U;
	uint8_t x44 = 52U;
	int32_t t10 = -1;

    t10 = ((x41!=x42)==(x43!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 376865;
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -72988;

    t11 = ((x45!=x46)==(x47!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x49 = -1;
	volatile uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	static uint64_t x52 = UINT64_MAX;

    t12 = ((x49!=x50)==(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x54 = 1810U;
	int32_t x55 = INT32_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t13 = -4212;

    t13 = ((x53!=x54)==(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	int32_t t14 = -6333824;

    t14 = ((x57!=x58)==(x59!=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 2U;
	uint8_t x62 = UINT8_MAX;
	static int64_t x63 = -53559518LL;
	static int64_t x64 = -44575356LL;

    t15 = ((x61!=x62)==(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int32_t x67 = 173686157;
	int32_t t16 = 35464;

    t16 = ((x65!=x66)==(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 526U;
	uint64_t x70 = 1407LLU;
	int16_t x71 = 75;
	uint32_t x72 = UINT32_MAX;
	static int32_t t17 = -121152622;

    t17 = ((x69!=x70)==(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = 6;
	uint8_t x74 = 1U;
	static int64_t x76 = 1369707244726583LL;
	volatile int32_t t18 = 662;

    t18 = ((x73!=x74)==(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	static uint32_t x79 = 322U;
	int32_t t19 = -44720;

    t19 = ((x77!=x78)==(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;

    t20 = ((x81!=x82)==(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	static int32_t x86 = -1;
	int32_t x87 = INT32_MAX;
	uint8_t x88 = 28U;
	static volatile int32_t t21 = 4456;

    t21 = ((x85!=x86)==(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = UINT32_MAX;
	static int16_t x90 = INT16_MAX;
	static volatile uint8_t x91 = 7U;
	volatile int32_t t22 = 105;

    t22 = ((x89!=x90)==(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x94 = 634;
	static volatile int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -1985200;

    t23 = ((x93!=x94)==(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 20;
	volatile int16_t x98 = 3;
	uint32_t x100 = 3275U;
	volatile int32_t t24 = 254195850;

    t24 = ((x97!=x98)==(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	volatile int32_t x104 = -6708;
	static int32_t t25 = -51019;

    t25 = ((x101!=x102)==(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	uint16_t x106 = UINT16_MAX;
	volatile int32_t x108 = -1;
	int32_t t26 = 744471;

    t26 = ((x105!=x106)==(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x110 = UINT32_MAX;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = 24;

    t27 = ((x109!=x110)==(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = -1LL;
	static volatile int32_t t28 = -8055442;

    t28 = ((x113!=x114)==(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x120 = 218197915173525LL;
	volatile int32_t t29 = 68868;

    t29 = ((x117!=x118)==(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	int16_t x122 = -26;
	int8_t x123 = -1;
	static uint8_t x124 = 0U;
	int32_t t30 = 125542247;

    t30 = ((x121!=x122)==(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 100U;
	int64_t x126 = 0LL;
	static volatile int16_t x127 = INT16_MIN;
	volatile int8_t x128 = -8;
	int32_t t31 = -679441157;

    t31 = ((x125!=x126)==(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = INT8_MIN;
	int16_t x131 = INT16_MIN;
	int32_t t32 = 26068911;

    t32 = ((x129!=x130)==(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -1;
	uint64_t x135 = UINT64_MAX;

    t33 = ((x133!=x134)==(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x137 = 1U;
	int8_t x138 = 50;
	int32_t x139 = INT32_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -21;

    t34 = ((x137!=x138)==(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	volatile uint8_t x143 = 0U;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = 6;

    t35 = ((x141!=x142)==(x143!=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 335;
	uint64_t x146 = 30553513666LLU;
	uint16_t x147 = UINT16_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 720367727;

    t36 = ((x145!=x146)==(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MAX;
	volatile int32_t x150 = INT32_MAX;
	uint32_t x151 = 124132204U;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t37 = -157;

    t37 = ((x149!=x150)==(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 820806LLU;
	int8_t x154 = -1;
	int64_t x155 = 353984519335440024LL;
	volatile int8_t x156 = -7;
	volatile int32_t t38 = -15962067;

    t38 = ((x153!=x154)==(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	volatile uint16_t x158 = 13349U;
	int8_t x159 = -18;
	volatile int64_t x160 = -6590532486411835LL;
	static volatile int32_t t39 = -17;

    t39 = ((x157!=x158)==(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = 4LLU;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MAX;
	static int32_t t40 = -3;

    t40 = ((x161!=x162)==(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 185717321517LLU;
	static volatile int8_t x167 = 1;
	uint32_t x168 = 25U;

    t41 = ((x165!=x166)==(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1;
	static int32_t x170 = INT32_MAX;
	int16_t x171 = -1;
	uint16_t x172 = 60U;
	volatile int32_t t42 = -19610283;

    t42 = ((x169!=x170)==(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int8_t x174 = INT8_MIN;
	uint32_t x176 = 789110U;

    t43 = ((x173!=x174)==(x175!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = 4939333;
	int32_t x179 = 100168528;
	uint32_t x180 = 592U;

    t44 = ((x177!=x178)==(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = 0;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	volatile int16_t x184 = INT16_MIN;

    t45 = ((x181!=x182)==(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -41;
	volatile int16_t x186 = INT16_MAX;
	uint16_t x187 = 6829U;
	int32_t x188 = INT32_MIN;
	int32_t t46 = 38936416;

    t46 = ((x185!=x186)==(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = INT64_MAX;
	static volatile int16_t x191 = -295;
	int8_t x192 = INT8_MIN;
	volatile int32_t t47 = -10;

    t47 = ((x189!=x190)==(x191!=x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x193 = -1;
	int64_t x195 = -165LL;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 0;

    t48 = ((x193!=x194)==(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	int32_t x198 = 219062;
	static volatile int64_t x199 = INT64_MIN;
	volatile int64_t x200 = -1LL;
	static volatile int32_t t49 = 3525;

    t49 = ((x197!=x198)==(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MIN;
	int8_t x203 = INT8_MAX;
	int8_t x204 = -1;
	int32_t t50 = -177;

    t50 = ((x201!=x202)==(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = 9064523U;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = 991488;

    t51 = ((x205!=x206)==(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static int64_t x211 = -246674LL;
	int8_t x212 = 1;

    t52 = ((x209!=x210)==(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	int32_t x214 = INT32_MAX;
	int64_t x216 = INT64_MAX;

    t53 = ((x213!=x214)==(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = INT8_MAX;
	int64_t x220 = 31429948232424LL;
	static volatile int32_t t54 = -16;

    t54 = ((x217!=x218)==(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = UINT16_MAX;
	int32_t x222 = 51587;
	static int16_t x223 = INT16_MAX;
	int32_t t55 = 179;

    t55 = ((x221!=x222)==(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	uint32_t x226 = 121619896U;
	static volatile uint64_t x227 = UINT64_MAX;
	static int16_t x228 = 6365;

    t56 = ((x225!=x226)==(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	int64_t x231 = -26057LL;
	int32_t t57 = 1;

    t57 = ((x229!=x230)==(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 302662729U;
	uint32_t x234 = 226166U;
	int64_t x235 = 17366699504LL;
	int32_t x236 = INT32_MIN;

    t58 = ((x233!=x234)==(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MAX;
	int32_t x238 = -845543561;
	int8_t x239 = -21;
	uint8_t x240 = 0U;
	int32_t t59 = -960377048;

    t59 = ((x237!=x238)==(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = INT32_MIN;
	volatile int32_t x242 = INT32_MAX;
	volatile uint32_t x243 = 8U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = 4;

    t60 = ((x241!=x242)==(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = -1023;
	static volatile int32_t t61 = -403452;

    t61 = ((x245!=x246)==(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = 9;
	uint32_t x250 = 318U;
	volatile int64_t x251 = -2476766592LL;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = -823670;

    t62 = ((x249!=x250)==(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x254 = -202;
	int16_t x256 = -4;

    t63 = ((x253!=x254)==(x255!=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 1;
	int8_t x259 = INT8_MIN;
	static volatile int16_t x260 = INT16_MIN;
	int32_t t64 = -46830728;

    t64 = ((x257!=x258)==(x259!=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	volatile uint8_t x263 = 0U;
	volatile int64_t x264 = INT64_MIN;
	volatile int32_t t65 = 9012546;

    t65 = ((x261!=x262)==(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	volatile uint8_t x268 = 54U;

    t66 = ((x265!=x266)==(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = -1;
	static int8_t x271 = INT8_MAX;
	volatile int16_t x272 = -8;

    t67 = ((x269!=x270)==(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -59;
	int64_t x274 = INT64_MIN;
	static volatile int64_t x275 = -347LL;
	int32_t t68 = 13;

    t68 = ((x273!=x274)==(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = UINT8_MAX;
	int8_t x278 = 0;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -2301;

    t69 = ((x277!=x278)==(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = 6767;
	uint32_t x283 = 5872U;
	static int16_t x284 = 0;
	static int32_t t70 = -20;

    t70 = ((x281!=x282)==(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = 206LL;
	uint32_t x286 = 5U;
	uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;

    t71 = ((x285!=x286)==(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 16U;
	int16_t x290 = INT16_MIN;
	volatile int16_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	int32_t t72 = -11715;

    t72 = ((x289!=x290)==(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	uint32_t x295 = 1826U;
	int32_t x296 = INT32_MIN;
	int32_t t73 = -291;

    t73 = ((x293!=x294)==(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 148U;
	int16_t x298 = -4;
	volatile uint64_t x299 = 1225847975LLU;
	uint16_t x300 = 0U;
	volatile int32_t t74 = 77637;

    t74 = ((x297!=x298)==(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	uint32_t x302 = 3U;
	uint16_t x303 = 17U;
	static volatile int32_t x304 = INT32_MIN;
	volatile int32_t t75 = -2;

    t75 = ((x301!=x302)==(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	int32_t t76 = 2;

    t76 = ((x305!=x306)==(x307!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 31;
	uint32_t x310 = 1479704U;
	int32_t x311 = -33250049;
	volatile int32_t t77 = -1;

    t77 = ((x309!=x310)==(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	uint32_t x315 = 73398U;
	uint32_t x316 = UINT32_MAX;

    t78 = ((x313!=x314)==(x315!=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MAX;
	int8_t x319 = 9;
	uint64_t x320 = UINT64_MAX;
	static int32_t t79 = 42605;

    t79 = ((x317!=x318)==(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -2295;
	int64_t x322 = INT64_MIN;
	int32_t x323 = 351;
	int8_t x324 = -1;
	int32_t t80 = -10;

    t80 = ((x321!=x322)==(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x325 = -1;
	int64_t x326 = INT64_MIN;
	int8_t x327 = -1;
	uint8_t x328 = 18U;
	int32_t t81 = -275;

    t81 = ((x325!=x326)==(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 1;
	int8_t x331 = INT8_MIN;
	volatile int32_t x332 = INT32_MAX;
	int32_t t82 = -38751204;

    t82 = ((x329!=x330)==(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = 1;
	uint16_t x334 = 5U;
	static int8_t x335 = INT8_MAX;
	int64_t x336 = INT64_MIN;
	int32_t t83 = 687334921;

    t83 = ((x333!=x334)==(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x337 = 0;
	int8_t x339 = 1;
	volatile int32_t t84 = 253693;

    t84 = ((x337!=x338)==(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x342 = -667012268;
	uint16_t x344 = UINT16_MAX;
	int32_t t85 = -283213;

    t85 = ((x341!=x342)==(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 1U;
	int16_t x346 = INT16_MIN;
	static volatile int32_t x347 = INT32_MIN;
	int64_t x348 = -81488063116LL;
	static volatile int32_t t86 = 108148;

    t86 = ((x345!=x346)==(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = 644898U;
	volatile int64_t x350 = -1LL;
	int8_t x352 = -3;
	static volatile int32_t t87 = 870;

    t87 = ((x349!=x350)==(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 23960640U;
	static volatile int16_t x354 = INT16_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -766718764;

    t88 = ((x353!=x354)==(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = 1041236U;
	int16_t x358 = 5;
	static int64_t x359 = INT64_MIN;
	int32_t x360 = 178;
	volatile int32_t t89 = -28062211;

    t89 = ((x357!=x358)==(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = 505;
	static int32_t t90 = 1;

    t90 = ((x361!=x362)==(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = 21072592U;
	static int64_t x367 = -69844704781061LL;
	static volatile int16_t x368 = -1;

    t91 = ((x365!=x366)==(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -5029901;
	volatile uint8_t x370 = 13U;
	uint32_t x371 = 9766U;
	int8_t x372 = -1;

    t92 = ((x369!=x370)==(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x374 = INT32_MIN;
	static int8_t x375 = INT8_MAX;
	int32_t x376 = -86019;
	int32_t t93 = 5236;

    t93 = ((x373!=x374)==(x375!=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = -24;
	volatile int64_t x379 = -542621820231436LL;
	int16_t x380 = -1617;
	int32_t t94 = -30891;

    t94 = ((x377!=x378)==(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -44458;
	int64_t x382 = 1697441701725990034LL;
	int8_t x383 = 1;
	int16_t x384 = INT16_MAX;

    t95 = ((x381!=x382)==(x383!=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x385 = INT64_MIN;
	uint8_t x386 = 3U;
	int64_t x387 = -1LL;
	int32_t t96 = -4479425;

    t96 = ((x385!=x386)==(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = UINT32_MAX;
	int8_t x390 = INT8_MIN;
	static uint32_t x392 = UINT32_MAX;
	int32_t t97 = 1;

    t97 = ((x389!=x390)==(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = 73;
	int64_t x394 = INT64_MAX;
	int32_t x396 = INT32_MIN;

    t98 = ((x393!=x394)==(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = -1;
	static uint8_t x400 = UINT8_MAX;
	static int32_t t99 = 1183;

    t99 = ((x397!=x398)==(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 110U;
	int64_t x403 = INT64_MIN;
	volatile int8_t x404 = -1;
	volatile int32_t t100 = 117;

    t100 = ((x401!=x402)==(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	int32_t t101 = 49899170;

    t101 = ((x405!=x406)==(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 200;
	int32_t x412 = -107569638;
	static int32_t t102 = -346835110;

    t102 = ((x409!=x410)==(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = 2U;
	int64_t x414 = INT64_MIN;
	int16_t x415 = -1;
	volatile int32_t t103 = -1233;

    t103 = ((x413!=x414)==(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MIN;
	int8_t x419 = -1;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 1839611;

    t104 = ((x417!=x418)==(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -682387;
	uint16_t x422 = UINT16_MAX;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 4243U;
	volatile int32_t t105 = -86514860;

    t105 = ((x421!=x422)==(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = 5U;
	int32_t x427 = INT32_MIN;
	static uint16_t x428 = 0U;
	static int32_t t106 = 1135;

    t106 = ((x425!=x426)==(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = -28;
	uint32_t x430 = 2424U;
	static uint32_t x431 = 130560U;
	volatile int32_t t107 = -5590247;

    t107 = ((x429!=x430)==(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x435 = UINT32_MAX;
	int64_t x436 = 467995041109711753LL;
	volatile int32_t t108 = 24634163;

    t108 = ((x433!=x434)==(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MIN;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = -1;
	int32_t t109 = -3739;

    t109 = ((x437!=x438)==(x439!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = 3U;
	static uint8_t x442 = 8U;
	volatile uint8_t x443 = 11U;
	volatile int16_t x444 = 0;
	static volatile int32_t t110 = 0;

    t110 = ((x441!=x442)==(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = INT8_MAX;
	static uint16_t x447 = 548U;
	int16_t x448 = -9544;
	volatile int32_t t111 = -5;

    t111 = ((x445!=x446)==(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 23;
	uint8_t x450 = 2U;
	volatile uint32_t x451 = UINT32_MAX;
	int8_t x452 = -2;
	int32_t t112 = -5008216;

    t112 = ((x449!=x450)==(x451!=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 24205418064035LLU;
	static uint64_t x454 = 9899414LLU;
	int8_t x455 = INT8_MAX;
	static int32_t x456 = INT32_MIN;
	int32_t t113 = -681979530;

    t113 = ((x453!=x454)==(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x458 = INT64_MIN;
	uint32_t x459 = 1U;
	int32_t x460 = INT32_MAX;
	static int32_t t114 = 18992506;

    t114 = ((x457!=x458)==(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x462 = UINT16_MAX;
	int32_t x463 = -4623;
	uint64_t x464 = UINT64_MAX;

    t115 = ((x461!=x462)==(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x468 = 0U;
	volatile int32_t t116 = 16;

    t116 = ((x465!=x466)==(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = 1451412600030LL;
	uint64_t x471 = 1375511132211403471LLU;
	static int32_t t117 = -115;

    t117 = ((x469!=x470)==(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = 116U;
	int16_t x475 = 1;
	int8_t x476 = INT8_MIN;
	volatile int32_t t118 = -230417;

    t118 = ((x473!=x474)==(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = 57253194325262LLU;
	volatile int8_t x478 = INT8_MAX;
	int64_t x479 = INT64_MAX;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t119 = 1343;

    t119 = ((x477!=x478)==(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int64_t x482 = -1LL;
	volatile int32_t x483 = 126;
	uint64_t x484 = 2331LLU;

    t120 = ((x481!=x482)==(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = 1;
	int64_t x486 = INT64_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t121 = -878;

    t121 = ((x485!=x486)==(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	static int8_t x492 = INT8_MIN;
	static int32_t t122 = -779558;

    t122 = ((x489!=x490)==(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	int8_t x494 = INT8_MAX;
	int64_t x495 = INT64_MIN;
	static volatile int32_t t123 = -99259160;

    t123 = ((x493!=x494)==(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = -30;
	static int64_t x498 = -1LL;
	static int8_t x499 = INT8_MIN;
	static volatile int32_t x500 = -1;
	int32_t t124 = 5906258;

    t124 = ((x497!=x498)==(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x503 = INT64_MAX;
	static volatile int32_t t125 = -55929;

    t125 = ((x501!=x502)==(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	int8_t x506 = 1;
	int32_t x507 = 217628909;
	int64_t x508 = -2019962858754102111LL;
	int32_t t126 = 1192342;

    t126 = ((x505!=x506)==(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = INT64_MIN;
	int16_t x511 = -444;
	int16_t x512 = -1;

    t127 = ((x509!=x510)==(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 0U;
	int16_t x514 = INT16_MIN;
	int16_t x515 = INT16_MIN;
	int32_t t128 = 21;

    t128 = ((x513!=x514)==(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x518 = INT64_MAX;
	uint64_t x519 = 1876071463988843575LLU;
	uint32_t x520 = UINT32_MAX;
	int32_t t129 = -24752557;

    t129 = ((x517!=x518)==(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = INT64_MIN;
	static int32_t x522 = 4804;
	static uint32_t x524 = 204852251U;
	int32_t t130 = 1;

    t130 = ((x521!=x522)==(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = 0;
	int8_t x527 = INT8_MIN;
	static int16_t x528 = INT16_MAX;
	int32_t t131 = -2446086;

    t131 = ((x525!=x526)==(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 2232U;
	int8_t x531 = INT8_MAX;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t132 = -10;

    t132 = ((x529!=x530)==(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -3993;
	int8_t x534 = 6;
	static int16_t x535 = -1;
	volatile int32_t t133 = 3838764;

    t133 = ((x533!=x534)==(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MAX;
	int32_t x539 = INT32_MIN;
	int64_t x540 = 5833373LL;
	int32_t t134 = -107624705;

    t134 = ((x537!=x538)==(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x542 = 0U;
	static int16_t x543 = -1;
	volatile int64_t x544 = 1653261292096913703LL;
	int32_t t135 = -12982565;

    t135 = ((x541!=x542)==(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int8_t x546 = INT8_MIN;
	int8_t x547 = -1;
	int64_t x548 = INT64_MAX;

    t136 = ((x545!=x546)==(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x551 = -1;
	uint32_t x552 = 1414231U;
	volatile int32_t t137 = -23248;

    t137 = ((x549!=x550)==(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -5;
	static uint16_t x554 = 4U;
	volatile int64_t x555 = -44265444194LL;
	volatile int16_t x556 = 43;

    t138 = ((x553!=x554)==(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = 361154130LLU;
	uint16_t x558 = UINT16_MAX;
	static int8_t x559 = 0;
	uint8_t x560 = 0U;
	int32_t t139 = 11874928;

    t139 = ((x557!=x558)==(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 23634;
	int8_t x562 = INT8_MIN;
	volatile int16_t x564 = INT16_MIN;
	static volatile int32_t t140 = -1;

    t140 = ((x561!=x562)==(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -3;
	static int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MIN;
	int64_t x568 = INT64_MIN;

    t141 = ((x565!=x566)==(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -3;
	static int8_t x570 = -1;
	int8_t x571 = -11;
	uint64_t x572 = UINT64_MAX;

    t142 = ((x569!=x570)==(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x574 = UINT8_MAX;
	uint64_t x575 = 23501030491358LLU;
	uint64_t x576 = 88316298025357373LLU;
	int32_t t143 = 3;

    t143 = ((x573!=x574)==(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = 0;
	int16_t x579 = 2741;
	int32_t x580 = -1;

    t144 = ((x577!=x578)==(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = UINT64_MAX;
	uint16_t x582 = 0U;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MAX;
	volatile int32_t t145 = -912;

    t145 = ((x581!=x582)==(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 10;
	int8_t x586 = -1;
	int64_t x587 = -1LL;
	static uint8_t x588 = UINT8_MAX;

    t146 = ((x585!=x586)==(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	volatile uint8_t x590 = 3U;
	int64_t x591 = INT64_MIN;
	int64_t x592 = INT64_MIN;
	int32_t t147 = -1917;

    t147 = ((x589!=x590)==(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	volatile int8_t x595 = -1;
	volatile int32_t x596 = -1;
	static int32_t t148 = -9;

    t148 = ((x593!=x594)==(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	uint64_t x598 = 0LLU;
	volatile int32_t x599 = INT32_MIN;
	volatile int8_t x600 = -1;
	volatile int32_t t149 = -5890;

    t149 = ((x597!=x598)==(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	uint16_t x602 = 20909U;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t150 = -1;

    t150 = ((x601!=x602)==(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x607 = 1U;
	int16_t x608 = INT16_MIN;
	volatile int32_t t151 = 315633;

    t151 = ((x605!=x606)==(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	int64_t x610 = -719LL;
	int32_t x611 = INT32_MAX;
	static int32_t t152 = -1390510;

    t152 = ((x609!=x610)==(x611!=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 1U;
	int8_t x614 = -1;
	static int32_t t153 = 12264966;

    t153 = ((x613!=x614)==(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x617 = INT8_MIN;
	uint64_t x618 = UINT64_MAX;
	volatile int64_t x619 = INT64_MIN;
	int32_t t154 = -127765;

    t154 = ((x617!=x618)==(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 21328U;
	volatile int16_t x622 = INT16_MIN;
	uint64_t x623 = UINT64_MAX;
	uint16_t x624 = 18434U;
	int32_t t155 = 2;

    t155 = ((x621!=x622)==(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	int16_t x627 = INT16_MIN;
	uint32_t x628 = UINT32_MAX;
	volatile int32_t t156 = -196179374;

    t156 = ((x625!=x626)==(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = UINT32_MAX;
	uint32_t x631 = UINT32_MAX;
	int16_t x632 = 1;
	volatile int32_t t157 = 4955;

    t157 = ((x629!=x630)==(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = 7U;
	int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MAX;
	static volatile int8_t x636 = INT8_MIN;
	static volatile int32_t t158 = -1;

    t158 = ((x633!=x634)==(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = -1;
	uint8_t x638 = UINT8_MAX;
	uint64_t x639 = 684565661648466676LLU;
	int16_t x640 = INT16_MAX;
	int32_t t159 = 127;

    t159 = ((x637!=x638)==(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x642 = 6118U;
	volatile int32_t x643 = INT32_MAX;
	int64_t x644 = -1LL;
	int32_t t160 = -48430129;

    t160 = ((x641!=x642)==(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 8960035U;
	int32_t x646 = -1;
	int16_t x647 = INT16_MAX;
	volatile int32_t t161 = -9830241;

    t161 = ((x645!=x646)==(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 3LL;
	uint64_t x650 = UINT64_MAX;
	uint8_t x651 = 2U;
	int8_t x652 = 11;
	static int32_t t162 = 923;

    t162 = ((x649!=x650)==(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint64_t x656 = UINT64_MAX;
	int32_t t163 = 0;

    t163 = ((x653!=x654)==(x655!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 0LLU;
	int8_t x658 = 2;
	int64_t x660 = -6062049LL;
	int32_t t164 = -348138901;

    t164 = ((x657!=x658)==(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = -671;
	uint8_t x662 = 19U;
	static uint64_t x663 = 0LLU;
	uint16_t x664 = 2955U;
	static volatile int32_t t165 = 1749;

    t165 = ((x661!=x662)==(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = 754U;
	static volatile int64_t x667 = INT64_MAX;
	volatile int32_t t166 = -53017361;

    t166 = ((x665!=x666)==(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 3U;
	int16_t x670 = INT16_MAX;
	uint64_t x672 = 82551428528194244LLU;
	static int32_t t167 = 438938;

    t167 = ((x669!=x670)==(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -12;
	int64_t x674 = INT64_MIN;
	int16_t x675 = INT16_MIN;
	uint64_t x676 = UINT64_MAX;
	int32_t t168 = -1213;

    t168 = ((x673!=x674)==(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	uint64_t x678 = 12LLU;
	int32_t x679 = INT32_MAX;
	int8_t x680 = -1;
	int32_t t169 = 22293168;

    t169 = ((x677!=x678)==(x679!=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -22;
	static int32_t x682 = -1;
	volatile int8_t x683 = INT8_MIN;
	static int16_t x684 = -1;
	static volatile int32_t t170 = 86526896;

    t170 = ((x681!=x682)==(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MIN;
	uint8_t x686 = UINT8_MAX;
	int8_t x687 = INT8_MIN;
	int8_t x688 = -18;
	static volatile int32_t t171 = -800089805;

    t171 = ((x685!=x686)==(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 643U;
	int8_t x692 = 2;
	volatile int32_t t172 = 400383;

    t172 = ((x689!=x690)==(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x695 = UINT16_MAX;
	int8_t x696 = -1;
	int32_t t173 = -92;

    t173 = ((x693!=x694)==(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x697 = 1958U;
	int16_t x700 = INT16_MAX;

    t174 = ((x697!=x698)==(x699!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x701 = 451U;
	volatile int64_t x702 = INT64_MIN;
	int16_t x703 = INT16_MIN;
	volatile uint32_t x704 = 14317U;
	volatile int32_t t175 = -9066827;

    t175 = ((x701!=x702)==(x703!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	volatile int8_t x706 = INT8_MAX;
	static uint16_t x707 = 1234U;
	int8_t x708 = 1;

    t176 = ((x705!=x706)==(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = 430121529U;
	uint32_t x711 = 99U;
	int64_t x712 = 31832773LL;
	int32_t t177 = 35;

    t177 = ((x709!=x710)==(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	uint32_t x714 = 401024U;
	int32_t x715 = 3;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -407145351;

    t178 = ((x713!=x714)==(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = -1;
	static uint16_t x719 = 1331U;
	int16_t x720 = INT16_MIN;
	int32_t t179 = -996252118;

    t179 = ((x717!=x718)==(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -127;
	uint64_t x722 = UINT64_MAX;
	uint32_t x723 = 38784997U;
	volatile int32_t t180 = 9322;

    t180 = ((x721!=x722)==(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = -1LL;
	int64_t x726 = -1086928324370936LL;
	int32_t x727 = -1;
	static volatile int64_t x728 = 3365934LL;

    t181 = ((x725!=x726)==(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = INT64_MIN;
	static int8_t x730 = -1;
	static int16_t x731 = INT16_MAX;
	volatile int8_t x732 = -7;
	int32_t t182 = 2;

    t182 = ((x729!=x730)==(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = UINT32_MAX;
	int64_t x734 = 893096394389148LL;
	int32_t x735 = 0;
	static uint64_t x736 = 219422669083643257LLU;

    t183 = ((x733!=x734)==(x735!=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x738 = UINT32_MAX;
	volatile uint32_t x739 = 29U;
	volatile int16_t x740 = -1;
	int32_t t184 = 48220;

    t184 = ((x737!=x738)==(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -39864LL;
	static int32_t x742 = 14004;
	int8_t x744 = -1;
	volatile int32_t t185 = -12947;

    t185 = ((x741!=x742)==(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 20009127LLU;
	int64_t x746 = -1LL;
	volatile int64_t x747 = INT64_MIN;
	int32_t x748 = -90792;

    t186 = ((x745!=x746)==(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 60179002U;
	int8_t x750 = INT8_MIN;

    t187 = ((x749!=x750)==(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 269726931322484374LLU;
	volatile uint16_t x754 = UINT16_MAX;
	int16_t x756 = 0;
	volatile int32_t t188 = 229;

    t188 = ((x753!=x754)==(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MIN;
	int32_t x758 = -7;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t189 = 52815;

    t189 = ((x757!=x758)==(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x762 = INT32_MAX;
	uint64_t x763 = 10080LLU;
	static uint64_t x764 = UINT64_MAX;
	int32_t t190 = -2786;

    t190 = ((x761!=x762)==(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int32_t x766 = 922853;
	static int32_t x767 = INT32_MIN;
	int8_t x768 = INT8_MIN;
	static int32_t t191 = 8;

    t191 = ((x765!=x766)==(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 3U;
	uint8_t x770 = 78U;
	static int32_t x771 = INT32_MIN;
	int32_t x772 = INT32_MIN;

    t192 = ((x769!=x770)==(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 0;
	uint64_t x774 = UINT64_MAX;
	uint16_t x776 = 91U;
	int32_t t193 = -59409;

    t193 = ((x773!=x774)==(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 21U;
	uint8_t x778 = 7U;
	uint8_t x779 = 4U;
	int32_t x780 = INT32_MIN;
	int32_t t194 = -259387;

    t194 = ((x777!=x778)==(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x782 = 4LL;
	int64_t x783 = INT64_MIN;

    t195 = ((x781!=x782)==(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = -24;
	volatile uint32_t x787 = 186566U;
	uint32_t x788 = UINT32_MAX;
	int32_t t196 = 4662721;

    t196 = ((x785!=x786)==(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = -13130248;
	int8_t x790 = INT8_MIN;
	int32_t x791 = -1704;
	uint8_t x792 = 42U;
	volatile int32_t t197 = 0;

    t197 = ((x789!=x790)==(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	uint8_t x794 = UINT8_MAX;
	volatile int16_t x795 = -1;
	uint8_t x796 = 55U;
	int32_t t198 = 229938427;

    t198 = ((x793!=x794)==(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x797 = 353833U;
	int8_t x798 = INT8_MIN;
	volatile int32_t t199 = 81;

    t199 = ((x797!=x798)==(x799!=x800));

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

