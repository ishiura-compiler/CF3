
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

static uint16_t x1 = UINT16_MAX;
static int16_t x2 = -1;
int16_t x6 = -1;
static int32_t x8 = INT32_MIN;
static int16_t x10 = 1;
volatile int64_t x12 = INT64_MAX;
volatile int32_t t2 = 280614;
volatile int64_t x21 = INT64_MIN;
uint64_t x26 = UINT64_MAX;
int16_t x41 = INT16_MIN;
int16_t x46 = INT16_MAX;
int64_t x55 = -108205576LL;
int64_t x56 = -84061379849227LL;
int8_t x57 = -1;
uint16_t x71 = 2U;
int8_t x76 = INT8_MAX;
uint64_t x87 = UINT64_MAX;
volatile int8_t x90 = INT8_MIN;
int8_t x97 = -1;
uint16_t x101 = 4U;
uint64_t x102 = 5410620LLU;
uint8_t x105 = UINT8_MAX;
static uint8_t x114 = 3U;
int16_t x116 = -1;
uint8_t x119 = UINT8_MAX;
int32_t t25 = 180486;
int64_t x125 = -1LL;
uint64_t x129 = 13898LLU;
volatile int8_t x136 = INT8_MIN;
int32_t t31 = 24509;
volatile int32_t t32 = -1;
int16_t x177 = INT16_MIN;
volatile int32_t x184 = 1;
int16_t x189 = -5;
volatile int16_t x192 = INT16_MIN;
int32_t t39 = 13;
int32_t t40 = 175357;
int16_t x207 = INT16_MIN;
static uint64_t x210 = 43479LLU;
uint8_t x212 = 3U;
volatile int32_t t43 = 1352;
int32_t t44 = -15514;
volatile uint32_t x225 = 56524048U;
uint64_t x226 = 171447340547LLU;
volatile int8_t x238 = 1;
volatile int8_t x239 = INT8_MAX;
int16_t x253 = INT16_MAX;
int16_t x256 = -747;
static int32_t t47 = -20;
static int16_t x258 = INT16_MAX;
int16_t x260 = INT16_MIN;
uint16_t x261 = UINT16_MAX;
int8_t x264 = INT8_MIN;
int64_t x274 = -12LL;
uint32_t x282 = 6754U;
volatile int32_t t53 = 73311694;
static int16_t x299 = INT16_MIN;
volatile int8_t x300 = INT8_MIN;
uint8_t x320 = UINT8_MAX;
int32_t x330 = -3;
static int32_t x331 = INT32_MAX;
int32_t t58 = -194557354;
static int32_t x335 = INT32_MIN;
uint8_t x342 = 3U;
static uint16_t x355 = 18U;
volatile int32_t t62 = 74;
int32_t x362 = 39719;
uint32_t x367 = UINT32_MAX;
volatile int32_t t65 = -585;
int16_t x373 = 154;
int16_t x386 = INT16_MAX;
static int16_t x393 = INT16_MIN;
uint64_t x394 = 13031069LLU;
volatile int32_t t70 = 1957;
static int8_t x402 = -31;
static int8_t x415 = INT8_MAX;
uint64_t x416 = 1LLU;
static int32_t t73 = -2;
uint64_t x420 = 159558108771LLU;
volatile uint64_t x421 = UINT64_MAX;
int8_t x423 = -14;
int64_t x424 = 138302331768798LL;
volatile int32_t t75 = 58418;
uint32_t x425 = 18645023U;
static volatile int32_t x426 = -1;
static int32_t x431 = INT32_MAX;
volatile int32_t t78 = 3770;
static int32_t t79 = 57091324;
int8_t x454 = INT8_MAX;
static int8_t x456 = INT8_MIN;
volatile int16_t x462 = INT16_MIN;
int32_t x475 = -1;
uint16_t x483 = 41U;
int8_t x484 = 2;
volatile int8_t x493 = -1;
volatile int64_t x495 = -2389551852904LL;
static volatile uint64_t x497 = 557784039818LLU;
static volatile int32_t t91 = -217451414;
int32_t t92 = 360230388;
int64_t x518 = -1LL;
uint64_t x519 = UINT64_MAX;
int8_t x522 = INT8_MAX;
static volatile int32_t t94 = -3095817;
uint64_t x536 = 138880957570869LLU;
int8_t x537 = 1;
int16_t x538 = -75;
int16_t x544 = INT16_MIN;
int32_t t97 = 211933498;
volatile int64_t x547 = INT64_MAX;
int64_t x552 = 10824554044303761LL;
static int64_t x561 = INT64_MIN;
volatile int8_t x566 = INT8_MIN;
volatile int64_t x582 = -1LL;
static int32_t x584 = INT32_MAX;
int32_t t104 = -410;
int16_t x596 = INT16_MIN;
int8_t x612 = -1;
int64_t x622 = -1LL;
int16_t x636 = INT16_MIN;
volatile int32_t t113 = 1;
volatile int32_t t114 = 7859545;
static uint64_t x659 = 118106LLU;
static uint16_t x662 = 112U;
volatile uint32_t x664 = UINT32_MAX;
volatile int32_t t117 = -14319780;
volatile int32_t x680 = INT32_MIN;
volatile int32_t t121 = 789700;
uint32_t x681 = UINT32_MAX;
int32_t x686 = INT32_MIN;
volatile int32_t t123 = -27198;
volatile int16_t x690 = 5337;
int64_t x691 = 173414794044857603LL;
uint32_t x694 = 536833U;
int64_t x695 = 75651LL;
volatile int64_t x697 = 59604576907035377LL;
volatile int64_t x698 = -1LL;
static uint64_t x699 = 118803881768LLU;
int32_t t126 = 6391;
int16_t x703 = -475;
volatile int32_t t128 = 184;
volatile int16_t x721 = INT16_MIN;
volatile int32_t t131 = 62;
volatile uint64_t x731 = 1809092374902512LLU;
uint32_t x748 = 61U;
int64_t x752 = INT64_MIN;
int32_t t136 = 2584333;
static int8_t x797 = 19;
uint64_t x800 = 2LLU;
int8_t x805 = -3;
volatile int32_t t147 = -499840680;
uint8_t x828 = 97U;
static uint8_t x847 = 1U;
int32_t x852 = -1;
uint64_t x858 = 7336177LLU;
uint32_t x859 = 1267114U;
uint32_t x872 = UINT32_MAX;
volatile int16_t x879 = -15269;
volatile int8_t x885 = -1;
volatile int64_t x888 = -64443578LL;
static uint16_t x896 = 6724U;
volatile int32_t t159 = -80;
uint64_t x897 = 4LLU;
int32_t t160 = -223;
uint8_t x907 = UINT8_MAX;
uint32_t x908 = 5927782U;
uint8_t x944 = UINT8_MAX;
volatile int16_t x950 = -1;
int64_t x952 = INT64_MAX;
int64_t x955 = INT64_MIN;
volatile int8_t x965 = INT8_MIN;
static int8_t x966 = INT8_MIN;
int64_t x967 = -1LL;
volatile uint32_t x968 = 289U;
int16_t x979 = INT16_MIN;
int8_t x983 = -8;
uint16_t x986 = 24U;
uint16_t x987 = UINT16_MAX;
volatile int32_t t176 = -5195;
static uint16_t x991 = UINT16_MAX;
int32_t t177 = 492768;
volatile int32_t t180 = 250653885;
int8_t x1017 = INT8_MIN;
volatile int32_t x1018 = 1018;
volatile uint16_t x1022 = 1U;
static int64_t x1027 = INT64_MIN;
volatile int32_t x1032 = -1;
static uint32_t x1039 = 2541U;
int8_t x1048 = -13;
int32_t t189 = 54;
int32_t x1056 = INT32_MAX;
int64_t x1061 = -7426LL;
static int16_t x1067 = -1712;
uint16_t x1068 = UINT16_MAX;
int8_t x1070 = INT8_MIN;
uint16_t x1071 = 5U;
int32_t t193 = 5259;
int16_t x1073 = INT16_MAX;
volatile int32_t t195 = 249;
int16_t x1086 = INT16_MIN;
int32_t x1089 = -1;
int8_t x1092 = INT8_MIN;
volatile uint32_t x1104 = 328343U;


void f0(void) {
    	int16_t x3 = -1;
	static int32_t x4 = -5;
	int32_t t0 = -2;

    t0 = ((x1*x2)==(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int64_t x7 = INT64_MIN;
	int32_t t1 = 125870054;

    t1 = ((x5*x6)==(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int32_t x11 = INT32_MAX;

    t2 = ((x9*x10)==(x11|x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -1;
	volatile uint32_t x18 = 15U;
	int16_t x19 = -1;
	volatile uint64_t x20 = 1251909709474332203LLU;
	static int32_t t3 = -7;

    t3 = ((x17*x18)==(x19|x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x22 = 1198850221483916235LLU;
	volatile int32_t x23 = -107;
	volatile int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -7143;

    t4 = ((x21*x22)==(x23|x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = INT8_MAX;
	static int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	int32_t t5 = 1;

    t5 = ((x25*x26)==(x27|x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x33 = -5;
	static int64_t x34 = -177074383LL;
	uint16_t x35 = 1U;
	int8_t x36 = -1;
	static int32_t t6 = 8890;

    t6 = ((x33*x34)==(x35|x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 21U;
	volatile uint32_t x38 = UINT32_MAX;
	volatile uint64_t x39 = 3LLU;
	int32_t x40 = INT32_MAX;
	volatile int32_t t7 = 341172556;

    t7 = ((x37*x38)==(x39|x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x42 = 18LLU;
	int8_t x43 = INT8_MIN;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t8 = 451;

    t8 = ((x41*x42)==(x43|x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x45 = 905659U;
	uint32_t x47 = 45036U;
	static uint8_t x48 = 59U;
	volatile int32_t t9 = -812;

    t9 = ((x45*x46)==(x47|x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -39;
	volatile uint16_t x50 = 0U;
	int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t10 = 3381;

    t10 = ((x49*x50)==(x51|x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x53 = 1135709LLU;
	uint8_t x54 = 1U;
	int32_t t11 = -5516182;

    t11 = ((x53*x54)==(x55|x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x58 = INT32_MAX;
	static uint32_t x59 = 4575U;
	static volatile uint64_t x60 = UINT64_MAX;
	int32_t t12 = 183803626;

    t12 = ((x57*x58)==(x59|x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x61 = INT32_MIN;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = 0;
	static uint32_t x64 = UINT32_MAX;
	volatile int32_t t13 = 968240239;

    t13 = ((x61*x62)==(x63|x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x69 = -36;
	uint16_t x70 = UINT16_MAX;
	volatile uint16_t x72 = UINT16_MAX;
	int32_t t14 = -3181221;

    t14 = ((x69*x70)==(x71|x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x73 = -535LL;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -71492495808544202LL;
	int32_t t15 = 65968765;

    t15 = ((x73*x74)==(x75|x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x77 = -1;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = 180230630897875093LL;
	static uint64_t x80 = 88843467218LLU;
	int32_t t16 = 23160575;

    t16 = ((x77*x78)==(x79|x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = 1U;
	int16_t x82 = 5;
	uint64_t x83 = UINT64_MAX;
	uint8_t x84 = 102U;
	int32_t t17 = -12;

    t17 = ((x81*x82)==(x83|x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	static int32_t x88 = INT32_MIN;
	volatile int32_t t18 = 30794182;

    t18 = ((x85*x86)==(x87|x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x89 = UINT64_MAX;
	int8_t x91 = INT8_MIN;
	static int32_t x92 = 680;
	static int32_t t19 = 7714;

    t19 = ((x89*x90)==(x91|x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x98 = INT8_MIN;
	int64_t x99 = 341LL;
	uint32_t x100 = UINT32_MAX;
	int32_t t20 = -15280520;

    t20 = ((x97*x98)==(x99|x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x103 = 3U;
	static uint16_t x104 = 15U;
	static int32_t t21 = 531685;

    t21 = ((x101*x102)==(x103|x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x106 = 132423003LLU;
	uint16_t x107 = 420U;
	volatile uint64_t x108 = 115810162878LLU;
	int32_t t22 = -62667;

    t22 = ((x105*x106)==(x107|x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x113 = 44011573007824LL;
	volatile uint16_t x115 = 14U;
	volatile int32_t t23 = -4830169;

    t23 = ((x113*x114)==(x115|x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MIN;
	int64_t x118 = -1LL;
	int32_t x120 = -1;
	volatile int32_t t24 = -3266516;

    t24 = ((x117*x118)==(x119|x120));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = 14857;
	int16_t x122 = 12239;
	int16_t x123 = INT16_MAX;
	static int32_t x124 = 1766307;

    t25 = ((x121*x122)==(x123|x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x126 = 42;
	static volatile int16_t x127 = INT16_MIN;
	static uint32_t x128 = 63053U;
	int32_t t26 = -131;

    t26 = ((x125*x126)==(x127|x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 8U;
	static int32_t t27 = -377621135;

    t27 = ((x129*x130)==(x131|x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x133 = 26034LLU;
	int8_t x134 = INT8_MIN;
	int8_t x135 = -5;
	int32_t t28 = 14481;

    t28 = ((x133*x134)==(x135|x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = 1;
	int64_t x138 = -1LL;
	static uint8_t x139 = 100U;
	uint64_t x140 = 329722080LLU;
	int32_t t29 = 20801541;

    t29 = ((x137*x138)==(x139|x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = 0LL;
	volatile int32_t x154 = -471090;
	static uint8_t x155 = 8U;
	uint64_t x156 = 114391LLU;
	int32_t t30 = -32662;

    t30 = ((x153*x154)==(x155|x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x157 = 411604259487246LL;
	static int64_t x158 = -1LL;
	int32_t x159 = 0;
	volatile int32_t x160 = INT32_MAX;

    t31 = ((x157*x158)==(x159|x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = 1;
	int32_t x162 = 0;
	volatile uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 340U;

    t32 = ((x161*x162)==(x163|x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x169 = 1015U;
	uint8_t x170 = 0U;
	static volatile int64_t x171 = 89950719664149764LL;
	volatile int16_t x172 = 461;
	int32_t t33 = -140955101;

    t33 = ((x169*x170)==(x171|x172));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x178 = 6415368LLU;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 27636632048LL;
	volatile int32_t t34 = 3;

    t34 = ((x177*x178)==(x179|x180));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x181 = 66U;
	uint8_t x182 = UINT8_MAX;
	static uint8_t x183 = 2U;
	volatile int32_t t35 = -210;

    t35 = ((x181*x182)==(x183|x184));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x185 = UINT64_MAX;
	int32_t x186 = -1;
	int8_t x187 = 13;
	int8_t x188 = 1;
	static int32_t t36 = -456079453;

    t36 = ((x185*x186)==(x187|x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x190 = -205;
	int16_t x191 = -1;
	volatile int32_t t37 = 299286387;

    t37 = ((x189*x190)==(x191|x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x193 = 21429976LL;
	volatile uint8_t x194 = 1U;
	int32_t x195 = -1;
	int64_t x196 = 796446659995424LL;
	int32_t t38 = 23225;

    t38 = ((x193*x194)==(x195|x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x197 = 517887536LLU;
	int16_t x198 = INT16_MIN;
	int32_t x199 = -412;
	int8_t x200 = -3;

    t39 = ((x197*x198)==(x199|x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x201 = -7702205;
	int64_t x202 = 0LL;
	int8_t x203 = INT8_MAX;
	static uint64_t x204 = 86141648066LLU;

    t40 = ((x201*x202)==(x203|x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x205 = -1;
	static uint16_t x206 = 1179U;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t41 = 12533777;

    t41 = ((x205*x206)==(x207|x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x209 = 0U;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int32_t t42 = -84807;

    t42 = ((x209*x210)==(x211|x212));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x213 = 193645140273012LL;
	int64_t x214 = -1LL;
	static int32_t x215 = 0;
	int8_t x216 = INT8_MIN;

    t43 = ((x213*x214)==(x215|x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x221 = 0;
	static int8_t x222 = -35;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -1;

    t44 = ((x221*x222)==(x223|x224));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t45 = 113;

    t45 = ((x225*x226)==(x227|x228));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x237 = UINT64_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t46 = 100967;

    t46 = ((x237*x238)==(x239|x240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -1;

    t47 = ((x253*x254)==(x255|x256));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x257 = UINT32_MAX;
	int8_t x259 = INT8_MIN;
	int32_t t48 = 1;

    t48 = ((x257*x258)==(x259|x260));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x262 = -1;
	int16_t x263 = -831;
	volatile int32_t t49 = -2474929;

    t49 = ((x261*x262)==(x263|x264));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = 0;
	int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t50 = -1;

    t50 = ((x269*x270)==(x271|x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x273 = UINT32_MAX;
	uint8_t x275 = 27U;
	int64_t x276 = INT64_MIN;
	int32_t t51 = -39116;

    t51 = ((x273*x274)==(x275|x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x281 = 16285934U;
	volatile int8_t x283 = INT8_MAX;
	volatile uint16_t x284 = 11837U;
	int32_t t52 = -230918274;

    t52 = ((x281*x282)==(x283|x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x293 = 2U;
	int8_t x294 = INT8_MIN;
	int32_t x295 = 11990;
	int8_t x296 = -18;

    t53 = ((x293*x294)==(x295|x296));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x297 = 2U;
	volatile int64_t x298 = 63093293269702651LL;
	int32_t t54 = -145;

    t54 = ((x297*x298)==(x299|x300));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x305 = -1;
	int64_t x306 = INT64_MAX;
	uint64_t x307 = 465498346839512LLU;
	int64_t x308 = INT64_MIN;
	volatile int32_t t55 = -6;

    t55 = ((x305*x306)==(x307|x308));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x309 = INT8_MIN;
	int64_t x310 = 312653294631904LL;
	volatile int16_t x311 = INT16_MAX;
	static int8_t x312 = INT8_MAX;
	static volatile int32_t t56 = -25;

    t56 = ((x309*x310)==(x311|x312));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x317 = 0U;
	int32_t x318 = INT32_MIN;
	int16_t x319 = 4692;
	int32_t t57 = -14;

    t57 = ((x317*x318)==(x319|x320));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x329 = -132668988334986LL;
	volatile int8_t x332 = 31;

    t58 = ((x329*x330)==(x331|x332));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x333 = 20946U;
	int64_t x334 = -1LL;
	uint64_t x336 = 587LLU;
	volatile int32_t t59 = 91100659;

    t59 = ((x333*x334)==(x335|x336));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x341 = -7;
	uint16_t x343 = 6U;
	int8_t x344 = INT8_MAX;
	int32_t t60 = -1;

    t60 = ((x341*x342)==(x343|x344));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x353 = 0;
	int8_t x354 = INT8_MAX;
	int16_t x356 = 0;
	volatile int32_t t61 = -10418;

    t61 = ((x353*x354)==(x355|x356));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x357 = INT64_MIN;
	static uint8_t x358 = 1U;
	volatile uint16_t x359 = 2U;
	volatile int8_t x360 = INT8_MIN;

    t62 = ((x357*x358)==(x359|x360));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x361 = 0U;
	volatile uint16_t x363 = 12816U;
	int64_t x364 = -54443189LL;
	static volatile int32_t t63 = 0;

    t63 = ((x361*x362)==(x363|x364));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	uint64_t x368 = 7366908470LLU;
	int32_t t64 = 33261706;

    t64 = ((x365*x366)==(x367|x368));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x369 = INT16_MIN;
	static uint8_t x370 = 10U;
	static int64_t x371 = 196912101928LL;
	static int64_t x372 = INT64_MIN;

    t65 = ((x369*x370)==(x371|x372));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x374 = 2U;
	static uint16_t x375 = UINT16_MAX;
	int16_t x376 = INT16_MIN;
	int32_t t66 = 26;

    t66 = ((x373*x374)==(x375|x376));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x377 = -1;
	int8_t x378 = -1;
	volatile int32_t x379 = INT32_MAX;
	uint8_t x380 = 78U;
	static int32_t t67 = 5432;

    t67 = ((x377*x378)==(x379|x380));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x385 = 6;
	uint64_t x387 = UINT64_MAX;
	volatile int64_t x388 = -1LL;
	volatile int32_t t68 = -129445;

    t68 = ((x385*x386)==(x387|x388));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x389 = -2;
	volatile uint64_t x390 = 119525866284463LLU;
	int16_t x391 = INT16_MIN;
	static volatile int32_t x392 = INT32_MIN;
	static int32_t t69 = -118151207;

    t69 = ((x389*x390)==(x391|x392));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x395 = 2U;
	int32_t x396 = -1;

    t70 = ((x393*x394)==(x395|x396));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x397 = -1;
	volatile int32_t x398 = INT32_MAX;
	int8_t x399 = -1;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t71 = -959534;

    t71 = ((x397*x398)==(x399|x400));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile int32_t x403 = INT32_MAX;
	int8_t x404 = 7;
	volatile int32_t t72 = 139128679;

    t72 = ((x401*x402)==(x403|x404));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x413 = -77;
	uint16_t x414 = 71U;

    t73 = ((x413*x414)==(x415|x416));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x417 = -1;
	static volatile int8_t x418 = INT8_MIN;
	volatile int64_t x419 = INT64_MAX;
	volatile int32_t t74 = 0;

    t74 = ((x417*x418)==(x419|x420));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x422 = 22;

    t75 = ((x421*x422)==(x423|x424));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x427 = -1;
	volatile int8_t x428 = 2;
	int32_t t76 = 4737;

    t76 = ((x425*x426)==(x427|x428));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x429 = -26521448;
	int16_t x430 = -1;
	static int64_t x432 = -3858718750702043349LL;
	volatile int32_t t77 = -1;

    t77 = ((x429*x430)==(x431|x432));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x433 = -1LL;
	volatile uint16_t x434 = 5397U;
	volatile int16_t x435 = INT16_MIN;
	int32_t x436 = -1;

    t78 = ((x433*x434)==(x435|x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x437 = -1;
	static int8_t x438 = 55;
	int32_t x439 = -1;
	uint8_t x440 = 14U;

    t79 = ((x437*x438)==(x439|x440));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x449 = INT64_MAX;
	static int32_t x450 = -1;
	int8_t x451 = -1;
	volatile int32_t x452 = -3374;
	int32_t t80 = -55;

    t80 = ((x449*x450)==(x451|x452));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x453 = -1;
	static volatile int64_t x455 = INT64_MAX;
	static volatile int32_t t81 = -2;

    t81 = ((x453*x454)==(x455|x456));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x461 = -23;
	static uint64_t x463 = UINT64_MAX;
	int32_t x464 = 76784527;
	volatile int32_t t82 = 76183358;

    t82 = ((x461*x462)==(x463|x464));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x469 = INT8_MIN;
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = INT64_MAX;
	int16_t x472 = INT16_MIN;
	volatile int32_t t83 = -13602;

    t83 = ((x469*x470)==(x471|x472));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x473 = 12U;
	uint64_t x474 = UINT64_MAX;
	int8_t x476 = -23;
	volatile int32_t t84 = -4035946;

    t84 = ((x473*x474)==(x475|x476));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x477 = UINT16_MAX;
	uint64_t x478 = UINT64_MAX;
	static uint64_t x479 = UINT64_MAX;
	uint64_t x480 = 6563LLU;
	volatile int32_t t85 = 1003554541;

    t85 = ((x477*x478)==(x479|x480));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x481 = 0;
	int8_t x482 = INT8_MIN;
	int32_t t86 = 0;

    t86 = ((x481*x482)==(x483|x484));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x489 = 208953731646LLU;
	int32_t x490 = 12;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = 2372764LLU;
	int32_t t87 = -10230594;

    t87 = ((x489*x490)==(x491|x492));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x494 = -922372667LL;
	uint16_t x496 = 4U;
	int32_t t88 = 382144;

    t88 = ((x493*x494)==(x495|x496));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x498 = INT8_MIN;
	int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MIN;
	int32_t t89 = -43026;

    t89 = ((x497*x498)==(x499|x500));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x501 = 434038434U;
	static int8_t x502 = INT8_MAX;
	static int16_t x503 = INT16_MAX;
	static int64_t x504 = INT64_MAX;
	int32_t t90 = -107109785;

    t90 = ((x501*x502)==(x503|x504));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x505 = INT64_MAX;
	uint8_t x506 = 0U;
	int64_t x507 = INT64_MIN;
	static int32_t x508 = -12282;

    t91 = ((x505*x506)==(x507|x508));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	uint32_t x510 = 24357109U;
	int64_t x511 = -4281605805LL;
	int8_t x512 = -1;

    t92 = ((x509*x510)==(x511|x512));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x517 = INT16_MAX;
	int8_t x520 = INT8_MIN;
	static int32_t t93 = -572930180;

    t93 = ((x517*x518)==(x519|x520));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x523 = -1LL;
	static int64_t x524 = INT64_MIN;

    t94 = ((x521*x522)==(x523|x524));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x533 = -1;
	static int32_t x534 = -1;
	uint64_t x535 = UINT64_MAX;
	volatile int32_t t95 = 7670;

    t95 = ((x533*x534)==(x535|x536));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x539 = 0U;
	int64_t x540 = INT64_MIN;
	int32_t t96 = 0;

    t96 = ((x537*x538)==(x539|x540));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x541 = UINT8_MAX;
	volatile int16_t x542 = -6;
	int32_t x543 = INT32_MIN;

    t97 = ((x541*x542)==(x543|x544));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile uint8_t x546 = 51U;
	uint64_t x548 = 192LLU;
	static int32_t t98 = -15479728;

    t98 = ((x545*x546)==(x547|x548));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x549 = INT8_MIN;
	uint16_t x550 = UINT16_MAX;
	uint32_t x551 = UINT32_MAX;
	int32_t t99 = 256;

    t99 = ((x549*x550)==(x551|x552));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x553 = INT32_MAX;
	int32_t x554 = -1;
	volatile uint8_t x555 = 6U;
	int64_t x556 = INT64_MIN;
	static int32_t t100 = 308118850;

    t100 = ((x553*x554)==(x555|x556));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x562 = 1495294395393LLU;
	int32_t x563 = INT32_MIN;
	int64_t x564 = -1LL;
	volatile int32_t t101 = -1303219;

    t101 = ((x561*x562)==(x563|x564));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = -1;
	volatile uint64_t x567 = UINT64_MAX;
	int16_t x568 = -1;
	int32_t t102 = -493;

    t102 = ((x565*x566)==(x567|x568));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x569 = INT16_MIN;
	int32_t x570 = -6144;
	volatile uint16_t x571 = 30328U;
	int32_t x572 = INT32_MIN;
	volatile int32_t t103 = -92114;

    t103 = ((x569*x570)==(x571|x572));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x581 = INT32_MIN;
	int16_t x583 = -1;

    t104 = ((x581*x582)==(x583|x584));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint8_t x594 = 1U;
	volatile uint16_t x595 = 71U;
	int32_t t105 = 80;

    t105 = ((x593*x594)==(x595|x596));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x601 = 1154508236U;
	uint16_t x602 = 2U;
	volatile uint16_t x603 = 78U;
	uint32_t x604 = UINT32_MAX;
	static volatile int32_t t106 = 11908;

    t106 = ((x601*x602)==(x603|x604));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x605 = 3U;
	uint16_t x606 = 1U;
	uint8_t x607 = 24U;
	int64_t x608 = -443502779329LL;
	volatile int32_t t107 = 6918;

    t107 = ((x605*x606)==(x607|x608));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x609 = 1;
	int32_t x610 = INT32_MIN;
	static int64_t x611 = 216LL;
	volatile int32_t t108 = -292455;

    t108 = ((x609*x610)==(x611|x612));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x621 = INT8_MIN;
	volatile int16_t x623 = INT16_MAX;
	volatile int32_t x624 = 35;
	volatile int32_t t109 = -2247840;

    t109 = ((x621*x622)==(x623|x624));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x625 = 3U;
	static uint32_t x626 = 21109U;
	int8_t x627 = -11;
	volatile uint32_t x628 = UINT32_MAX;
	volatile int32_t t110 = 66108;

    t110 = ((x625*x626)==(x627|x628));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x633 = 399064786LL;
	int8_t x634 = -1;
	int16_t x635 = INT16_MAX;
	int32_t t111 = -19779614;

    t111 = ((x633*x634)==(x635|x636));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x637 = INT16_MIN;
	int8_t x638 = INT8_MIN;
	static uint8_t x639 = 1U;
	int8_t x640 = INT8_MIN;
	int32_t t112 = -6951459;

    t112 = ((x637*x638)==(x639|x640));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x645 = INT8_MAX;
	uint8_t x646 = 3U;
	uint16_t x647 = 0U;
	uint64_t x648 = UINT64_MAX;

    t113 = ((x645*x646)==(x647|x648));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x649 = 3;
	int8_t x650 = -1;
	int32_t x651 = -1;
	int8_t x652 = -1;

    t114 = ((x649*x650)==(x651|x652));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x653 = -729352LL;
	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 5840971593457LLU;
	uint64_t x656 = 52LLU;
	int32_t t115 = -72322;

    t115 = ((x653*x654)==(x655|x656));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x657 = UINT16_MAX;
	uint64_t x658 = 1110479348LLU;
	int32_t x660 = 13368;
	static volatile int32_t t116 = -1497014;

    t116 = ((x657*x658)==(x659|x660));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x661 = 5331811608LL;
	int64_t x663 = INT64_MAX;

    t117 = ((x661*x662)==(x663|x664));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = UINT64_MAX;
	volatile uint8_t x667 = UINT8_MAX;
	int32_t x668 = -1;
	volatile int32_t t118 = 25;

    t118 = ((x665*x666)==(x667|x668));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x669 = INT8_MAX;
	static volatile int16_t x670 = -1;
	int64_t x671 = -1LL;
	int64_t x672 = 1564462927LL;
	int32_t t119 = 1;

    t119 = ((x669*x670)==(x671|x672));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x673 = 6U;
	static int16_t x674 = 251;
	volatile uint32_t x675 = 81869U;
	volatile int8_t x676 = INT8_MAX;
	volatile int32_t t120 = 6768264;

    t120 = ((x673*x674)==(x675|x676));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x677 = 376441571;
	int8_t x678 = -1;
	int8_t x679 = INT8_MIN;

    t121 = ((x677*x678)==(x679|x680));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x682 = INT8_MIN;
	int32_t x683 = 98;
	static int8_t x684 = INT8_MAX;
	int32_t t122 = -79912;

    t122 = ((x681*x682)==(x683|x684));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x685 = 66U;
	uint8_t x687 = 3U;
	volatile int16_t x688 = INT16_MAX;

    t123 = ((x685*x686)==(x687|x688));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x689 = 419U;
	static volatile uint8_t x692 = UINT8_MAX;
	int32_t t124 = 18;

    t124 = ((x689*x690)==(x691|x692));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x693 = INT32_MAX;
	static int32_t x696 = INT32_MIN;
	volatile int32_t t125 = 2484;

    t125 = ((x693*x694)==(x695|x696));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x700 = 564U;

    t126 = ((x697*x698)==(x699|x700));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x701 = -1;
	static uint64_t x702 = 8LLU;
	static int32_t x704 = -1;
	volatile int32_t t127 = -45695070;

    t127 = ((x701*x702)==(x703|x704));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x705 = -1LL;
	uint64_t x706 = 216157066LLU;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MAX;

    t128 = ((x705*x706)==(x707|x708));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x717 = 80912534725LL;
	uint64_t x718 = UINT64_MAX;
	int8_t x719 = -1;
	volatile uint64_t x720 = 653851955LLU;
	int32_t t129 = 0;

    t129 = ((x717*x718)==(x719|x720));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x722 = INT8_MAX;
	int8_t x723 = INT8_MIN;
	static volatile int64_t x724 = INT64_MAX;
	volatile int32_t t130 = -2056739;

    t130 = ((x721*x722)==(x723|x724));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x725 = UINT64_MAX;
	int32_t x726 = -1;
	int16_t x727 = 10808;
	int32_t x728 = INT32_MIN;

    t131 = ((x725*x726)==(x727|x728));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x729 = -1;
	int16_t x730 = INT16_MAX;
	volatile int64_t x732 = -1LL;
	int32_t t132 = -14;

    t132 = ((x729*x730)==(x731|x732));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x737 = -111093LL;
	int16_t x738 = INT16_MAX;
	int32_t x739 = -34;
	uint32_t x740 = 10U;
	static volatile int32_t t133 = -6;

    t133 = ((x737*x738)==(x739|x740));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x745 = -19;
	int8_t x746 = -7;
	int32_t x747 = -90193438;
	int32_t t134 = -10;

    t134 = ((x745*x746)==(x747|x748));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x749 = -898;
	int16_t x750 = 9;
	int16_t x751 = INT16_MIN;
	volatile int32_t t135 = 577317;

    t135 = ((x749*x750)==(x751|x752));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x753 = INT16_MIN;
	static uint8_t x754 = 15U;
	int8_t x755 = -1;
	volatile int8_t x756 = INT8_MAX;

    t136 = ((x753*x754)==(x755|x756));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = 1;
	int16_t x771 = INT16_MAX;
	volatile int16_t x772 = INT16_MIN;
	int32_t t137 = 1;

    t137 = ((x769*x770)==(x771|x772));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x773 = 3U;
	int64_t x774 = -1LL;
	int32_t x775 = -21252916;
	int8_t x776 = -2;
	int32_t t138 = 19;

    t138 = ((x773*x774)==(x775|x776));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x777 = INT8_MIN;
	int16_t x778 = 146;
	uint64_t x779 = 8827971413LLU;
	int16_t x780 = INT16_MIN;
	int32_t t139 = 26121;

    t139 = ((x777*x778)==(x779|x780));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x781 = 20531U;
	volatile uint16_t x782 = UINT16_MAX;
	volatile uint32_t x783 = 6U;
	volatile int32_t x784 = INT32_MAX;
	int32_t t140 = -213109;

    t140 = ((x781*x782)==(x783|x784));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x789 = UINT32_MAX;
	static int64_t x790 = -1LL;
	volatile int64_t x791 = 419LL;
	static volatile uint16_t x792 = UINT16_MAX;
	volatile int32_t t141 = 59274130;

    t141 = ((x789*x790)==(x791|x792));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x798 = -1LL;
	uint16_t x799 = UINT16_MAX;
	int32_t t142 = -7413529;

    t142 = ((x797*x798)==(x799|x800));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x801 = 0LLU;
	static int8_t x802 = INT8_MIN;
	int64_t x803 = INT64_MAX;
	uint32_t x804 = UINT32_MAX;
	static volatile int32_t t143 = -19860;

    t143 = ((x801*x802)==(x803|x804));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x806 = 3948U;
	uint8_t x807 = UINT8_MAX;
	volatile int64_t x808 = 44003325LL;
	static volatile int32_t t144 = 31981;

    t144 = ((x805*x806)==(x807|x808));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x809 = 9;
	int8_t x810 = 0;
	int8_t x811 = -1;
	int64_t x812 = -1LL;
	volatile int32_t t145 = -2;

    t145 = ((x809*x810)==(x811|x812));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x813 = 2122539;
	volatile int8_t x814 = 2;
	uint32_t x815 = UINT32_MAX;
	int16_t x816 = 1926;
	volatile int32_t t146 = -748;

    t146 = ((x813*x814)==(x815|x816));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x821 = 175704655755899LLU;
	static int32_t x822 = 687488878;
	int64_t x823 = 39064158506908866LL;
	int8_t x824 = INT8_MIN;

    t147 = ((x821*x822)==(x823|x824));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x825 = 1;
	int16_t x826 = INT16_MAX;
	uint16_t x827 = 6U;
	static int32_t t148 = -1710888;

    t148 = ((x825*x826)==(x827|x828));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x833 = 9;
	uint16_t x834 = 15U;
	static int16_t x835 = INT16_MAX;
	static uint16_t x836 = 56U;
	int32_t t149 = -13;

    t149 = ((x833*x834)==(x835|x836));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x841 = INT32_MAX;
	uint64_t x842 = 1065515489LLU;
	int16_t x843 = INT16_MIN;
	volatile int16_t x844 = INT16_MIN;
	volatile int32_t t150 = 239;

    t150 = ((x841*x842)==(x843|x844));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x845 = UINT64_MAX;
	int8_t x846 = INT8_MAX;
	uint16_t x848 = 1U;
	int32_t t151 = -185062371;

    t151 = ((x845*x846)==(x847|x848));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x849 = UINT16_MAX;
	volatile uint8_t x850 = UINT8_MAX;
	uint32_t x851 = 1981540U;
	static int32_t t152 = 0;

    t152 = ((x849*x850)==(x851|x852));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x857 = INT32_MAX;
	static volatile int64_t x860 = -1LL;
	int32_t t153 = 804;

    t153 = ((x857*x858)==(x859|x860));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x861 = 5663894U;
	static int16_t x862 = INT16_MAX;
	int64_t x863 = INT64_MIN;
	volatile int16_t x864 = INT16_MAX;
	int32_t t154 = 11829;

    t154 = ((x861*x862)==(x863|x864));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x869 = UINT8_MAX;
	uint16_t x870 = 0U;
	static volatile int8_t x871 = INT8_MIN;
	int32_t t155 = 24133047;

    t155 = ((x869*x870)==(x871|x872));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x873 = INT16_MIN;
	uint64_t x874 = 102317152751231LLU;
	static int16_t x875 = -1;
	int64_t x876 = INT64_MAX;
	volatile int32_t t156 = -1142;

    t156 = ((x873*x874)==(x875|x876));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x877 = -1;
	volatile int8_t x878 = -1;
	uint32_t x880 = UINT32_MAX;
	int32_t t157 = 14;

    t157 = ((x877*x878)==(x879|x880));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x886 = INT32_MAX;
	uint32_t x887 = 11013813U;
	static int32_t t158 = 168446;

    t158 = ((x885*x886)==(x887|x888));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x893 = INT16_MIN;
	int16_t x894 = 239;
	int64_t x895 = INT64_MIN;

    t159 = ((x893*x894)==(x895|x896));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x898 = 8LL;
	int32_t x899 = -15056338;
	uint64_t x900 = 30217608831542LLU;

    t160 = ((x897*x898)==(x899|x900));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x901 = INT16_MIN;
	volatile int8_t x902 = INT8_MIN;
	int64_t x903 = INT64_MIN;
	volatile uint64_t x904 = 3434931839LLU;
	static int32_t t161 = 0;

    t161 = ((x901*x902)==(x903|x904));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x905 = -1;
	int32_t x906 = -5166255;
	int32_t t162 = -74817962;

    t162 = ((x905*x906)==(x907|x908));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x913 = -1LL;
	int64_t x914 = -13223LL;
	static int64_t x915 = INT64_MIN;
	int64_t x916 = -1LL;
	int32_t t163 = 2;

    t163 = ((x913*x914)==(x915|x916));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x917 = UINT32_MAX;
	static int16_t x918 = -1;
	static int64_t x919 = 548451711816282LL;
	int8_t x920 = INT8_MAX;
	int32_t t164 = -60091669;

    t164 = ((x917*x918)==(x919|x920));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x921 = 1LL;
	uint64_t x922 = 1051LLU;
	static volatile int64_t x923 = INT64_MIN;
	int32_t x924 = INT32_MAX;
	int32_t t165 = 44;

    t165 = ((x921*x922)==(x923|x924));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x925 = -1;
	uint8_t x926 = 35U;
	int16_t x927 = INT16_MIN;
	uint8_t x928 = 5U;
	volatile int32_t t166 = -1;

    t166 = ((x925*x926)==(x927|x928));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x937 = UINT8_MAX;
	int64_t x938 = 8058184050LL;
	volatile int16_t x939 = -1;
	volatile uint32_t x940 = 23304435U;
	int32_t t167 = 588;

    t167 = ((x937*x938)==(x939|x940));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x941 = -187;
	volatile int8_t x942 = INT8_MIN;
	static int32_t x943 = INT32_MAX;
	static volatile int32_t t168 = 1114;

    t168 = ((x941*x942)==(x943|x944));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x945 = INT64_MAX;
	uint64_t x946 = UINT64_MAX;
	volatile uint16_t x947 = 0U;
	int64_t x948 = 19LL;
	int32_t t169 = 362330592;

    t169 = ((x945*x946)==(x947|x948));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x949 = INT8_MIN;
	uint64_t x951 = 1763526LLU;
	static volatile int32_t t170 = -6885;

    t170 = ((x949*x950)==(x951|x952));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x953 = 1;
	int64_t x954 = INT64_MIN;
	static uint8_t x956 = 94U;
	volatile int32_t t171 = 4130111;

    t171 = ((x953*x954)==(x955|x956));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t t172 = -5013;

    t172 = ((x965*x966)==(x967|x968));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x969 = INT8_MAX;
	uint8_t x970 = 18U;
	static int8_t x971 = INT8_MIN;
	volatile int32_t x972 = -1;
	int32_t t173 = 10465;

    t173 = ((x969*x970)==(x971|x972));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x977 = -1;
	static uint8_t x978 = 4U;
	int64_t x980 = 618LL;
	volatile int32_t t174 = -7644552;

    t174 = ((x977*x978)==(x979|x980));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x981 = UINT32_MAX;
	uint32_t x982 = 1U;
	int32_t x984 = 48;
	int32_t t175 = -3279;

    t175 = ((x981*x982)==(x983|x984));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x985 = UINT8_MAX;
	static uint8_t x988 = 3U;

    t176 = ((x985*x986)==(x987|x988));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x989 = INT16_MIN;
	int16_t x990 = -1;
	static uint32_t x992 = UINT32_MAX;

    t177 = ((x989*x990)==(x991|x992));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x993 = 84U;
	int8_t x994 = INT8_MIN;
	static int32_t x995 = 2008559;
	static int16_t x996 = INT16_MIN;
	int32_t t178 = 402621027;

    t178 = ((x993*x994)==(x995|x996));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1001 = UINT8_MAX;
	volatile int16_t x1002 = -1;
	int64_t x1003 = -1LL;
	uint64_t x1004 = UINT64_MAX;
	static volatile int32_t t179 = -924287530;

    t179 = ((x1001*x1002)==(x1003|x1004));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1009 = -747217716;
	uint8_t x1010 = 2U;
	int16_t x1011 = INT16_MIN;
	uint64_t x1012 = 25720805810431LLU;

    t180 = ((x1009*x1010)==(x1011|x1012));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x1019 = 0;
	static int32_t x1020 = -1;
	volatile int32_t t181 = -15541463;

    t181 = ((x1017*x1018)==(x1019|x1020));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1021 = 3985402U;
	uint8_t x1023 = 12U;
	uint16_t x1024 = 685U;
	volatile int32_t t182 = -6;

    t182 = ((x1021*x1022)==(x1023|x1024));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x1025 = 12;
	int16_t x1026 = INT16_MIN;
	static uint8_t x1028 = 0U;
	volatile int32_t t183 = 96;

    t183 = ((x1025*x1026)==(x1027|x1028));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1029 = -1LL;
	int16_t x1030 = INT16_MIN;
	int8_t x1031 = INT8_MAX;
	static int32_t t184 = 16187;

    t184 = ((x1029*x1030)==(x1031|x1032));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1033 = 15LLU;
	int64_t x1034 = -1LL;
	int16_t x1035 = -1;
	volatile int64_t x1036 = INT64_MAX;
	int32_t t185 = -1;

    t185 = ((x1033*x1034)==(x1035|x1036));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1037 = -1;
	static int64_t x1038 = INT64_MAX;
	uint8_t x1040 = UINT8_MAX;
	static int32_t t186 = -255;

    t186 = ((x1037*x1038)==(x1039|x1040));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1041 = INT16_MAX;
	uint32_t x1042 = UINT32_MAX;
	int16_t x1043 = 1;
	uint16_t x1044 = 55U;
	int32_t t187 = 563075;

    t187 = ((x1041*x1042)==(x1043|x1044));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1045 = INT16_MAX;
	uint16_t x1046 = 3811U;
	uint64_t x1047 = UINT64_MAX;
	static int32_t t188 = -108;

    t188 = ((x1045*x1046)==(x1047|x1048));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1049 = -134;
	uint64_t x1050 = 24872822683LLU;
	static uint16_t x1051 = 1387U;
	uint8_t x1052 = 4U;

    t189 = ((x1049*x1050)==(x1051|x1052));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x1053 = INT8_MIN;
	int64_t x1054 = -524294049LL;
	volatile int16_t x1055 = -4;
	volatile int32_t t190 = -2;

    t190 = ((x1053*x1054)==(x1055|x1056));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1062 = UINT32_MAX;
	int8_t x1063 = -10;
	uint32_t x1064 = 487867U;
	volatile int32_t t191 = -20658;

    t191 = ((x1061*x1062)==(x1063|x1064));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1065 = UINT16_MAX;
	int64_t x1066 = -1LL;
	int32_t t192 = 43071;

    t192 = ((x1065*x1066)==(x1067|x1068));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1069 = INT16_MIN;
	uint8_t x1072 = 0U;

    t193 = ((x1069*x1070)==(x1071|x1072));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1074 = -464;
	volatile uint64_t x1075 = UINT64_MAX;
	int16_t x1076 = INT16_MAX;
	volatile int32_t t194 = -77;

    t194 = ((x1073*x1074)==(x1075|x1076));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1077 = INT8_MIN;
	int32_t x1078 = 1;
	static volatile uint8_t x1079 = 3U;
	uint32_t x1080 = 23591U;

    t195 = ((x1077*x1078)==(x1079|x1080));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1081 = INT16_MIN;
	uint16_t x1082 = 904U;
	static int32_t x1083 = INT32_MAX;
	int64_t x1084 = -1LL;
	volatile int32_t t196 = 14374839;

    t196 = ((x1081*x1082)==(x1083|x1084));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1085 = 36U;
	int8_t x1087 = -1;
	static int16_t x1088 = INT16_MAX;
	int32_t t197 = -8297165;

    t197 = ((x1085*x1086)==(x1087|x1088));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1090 = 742U;
	int16_t x1091 = INT16_MIN;
	int32_t t198 = 76695;

    t198 = ((x1089*x1090)==(x1091|x1092));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1101 = INT16_MAX;
	uint64_t x1102 = 1261818920530952546LLU;
	int32_t x1103 = INT32_MIN;
	int32_t t199 = -7224063;

    t199 = ((x1101*x1102)==(x1103|x1104));

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

