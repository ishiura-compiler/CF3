
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

static int32_t x5 = INT32_MIN;
int16_t x13 = INT16_MIN;
volatile uint16_t x31 = UINT16_MAX;
int32_t x32 = 297;
int32_t t6 = 1;
int64_t x45 = INT64_MAX;
static int64_t x49 = 233LL;
volatile uint8_t x56 = UINT8_MAX;
uint64_t x61 = 2092909581108710LLU;
static int32_t x65 = -40425;
volatile int64_t x68 = INT64_MIN;
int64_t t13 = 2959277428812303LL;
int32_t x70 = INT32_MIN;
static uint8_t x72 = 53U;
static volatile int32_t t14 = -1002273;
int16_t x73 = INT16_MAX;
int8_t x80 = INT8_MIN;
uint32_t x85 = UINT32_MAX;
volatile int8_t x99 = INT8_MIN;
int16_t x100 = INT16_MIN;
volatile int32_t t21 = -2265;
int16_t x119 = -1;
uint32_t x120 = 16216U;
int64_t x124 = -10210LL;
uint32_t x127 = UINT32_MAX;
int8_t x138 = 0;
static uint8_t x146 = UINT8_MAX;
int16_t x148 = -1;
static uint8_t x154 = UINT8_MAX;
uint64_t x178 = UINT64_MAX;
int16_t x179 = -1;
int64_t t34 = -5877276379LL;
static int16_t x187 = 15648;
int32_t t36 = -70911;
volatile int16_t x213 = 106;
int16_t x219 = INT16_MAX;
static int64_t x228 = -1LL;
volatile uint64_t t44 = 24638LLU;
volatile int32_t x246 = INT32_MAX;
int16_t x248 = -1;
static int64_t x249 = INT64_MIN;
static volatile int64_t x252 = INT64_MAX;
int32_t t48 = 27876;
int64_t x258 = INT64_MIN;
uint8_t x274 = 15U;
volatile int32_t t53 = -1335912;
int64_t x294 = -1LL;
int8_t x295 = INT8_MIN;
uint64_t x297 = 23LLU;
volatile int64_t t56 = -33200811556LL;
static int8_t x311 = INT8_MIN;
static int32_t x321 = 451;
static int8_t x328 = INT8_MIN;
static int8_t x336 = INT8_MAX;
int8_t x341 = -3;
int64_t x342 = 49LL;
volatile uint64_t x350 = 652LLU;
volatile uint64_t t66 = 277914814LLU;
uint32_t x358 = 11089U;
int64_t x364 = 963199301883LL;
int8_t x368 = INT8_MIN;
int8_t x369 = INT8_MIN;
volatile int32_t x373 = INT32_MIN;
int16_t x385 = -49;
int16_t x386 = -3599;
int16_t x387 = INT16_MAX;
int16_t x398 = 21;
int16_t x400 = INT16_MIN;
int64_t x403 = 54256833776661536LL;
volatile int16_t x406 = INT16_MAX;
volatile int8_t x410 = INT8_MAX;
volatile uint16_t x417 = 19U;
volatile uint32_t x426 = 243U;
int64_t x427 = INT64_MAX;
int32_t x435 = INT32_MIN;
static volatile int64_t t81 = -1LL;
int32_t x441 = -1;
int8_t x445 = -1;
static volatile int64_t x451 = INT64_MAX;
volatile int32_t x454 = INT32_MAX;
static int64_t x459 = -10641045099LL;
int8_t x461 = INT8_MAX;
uint32_t x462 = 465704U;
uint32_t x469 = 11654U;
static int32_t x471 = INT32_MAX;
volatile uint64_t t88 = 333360424454958LLU;
int16_t x486 = INT16_MIN;
int32_t x487 = -1;
uint16_t x494 = UINT16_MAX;
static volatile int32_t x503 = -1798;
int8_t x505 = 7;
uint8_t x516 = 54U;
volatile uint16_t x521 = 2U;
uint32_t x526 = 102886783U;
int32_t x527 = -903688;
int16_t x528 = 151;
int64_t x529 = 8LL;
volatile uint64_t x532 = 392169LLU;
static uint64_t t101 = 1822990LLU;
int64_t x533 = INT64_MIN;
volatile uint16_t x534 = 223U;
int64_t x541 = INT64_MIN;
static int8_t x544 = -9;
volatile uint32_t x552 = UINT32_MAX;
volatile int32_t t108 = 1534;
int32_t t109 = -16607138;
static int8_t x583 = -37;
uint8_t x591 = UINT8_MAX;
int8_t x592 = INT8_MIN;
static int16_t x594 = 7;
int8_t x615 = INT8_MIN;
static volatile int32_t x618 = -208;
uint16_t x619 = 14U;
volatile uint64_t x631 = 7964945LLU;
uint64_t x637 = UINT64_MAX;
int64_t x640 = INT64_MAX;
volatile uint16_t x645 = UINT16_MAX;
int16_t x648 = INT16_MAX;
static int64_t t123 = -55LL;
uint16_t x660 = 280U;
int8_t x665 = INT8_MIN;
int16_t x666 = -1;
volatile int64_t x669 = -1LL;
static volatile uint8_t x672 = 87U;
int16_t x673 = INT16_MIN;
int32_t x674 = INT32_MIN;
static int16_t x677 = 1;
static int64_t x685 = INT64_MIN;
int32_t t130 = 2030;
int8_t x698 = -1;
volatile int64_t x700 = INT64_MAX;
int32_t x703 = INT32_MIN;
volatile uint64_t t132 = 40544083250381LLU;
volatile int64_t t133 = 296406834LL;
int8_t x716 = INT8_MIN;
int64_t x717 = INT64_MIN;
uint8_t x718 = 33U;
static int8_t x724 = -1;
int64_t x726 = 82851LL;
uint16_t x731 = 2976U;
volatile int32_t x734 = INT32_MAX;
static uint16_t x736 = 435U;
uint8_t x738 = 3U;
int8_t x739 = INT8_MIN;
int64_t x741 = -1LL;
uint64_t x742 = 694374869792827LLU;
volatile int32_t x745 = INT32_MAX;
static int32_t x746 = INT32_MIN;
int32_t x751 = 159794;
volatile uint32_t t145 = 1714U;
static int8_t x766 = -1;
static int16_t x767 = INT16_MAX;
volatile int32_t t147 = -2897;
int16_t x789 = -23;
int8_t x790 = INT8_MAX;
uint8_t x818 = 33U;
static int32_t x821 = INT32_MAX;
int8_t x827 = -1;
int64_t x828 = INT64_MIN;
static int16_t x831 = -1;
volatile int16_t x840 = -2;
volatile int64_t t159 = -2553556611LL;
volatile int64_t x868 = -1LL;
volatile int64_t t161 = 652919187LL;
int64_t t162 = -485998818552LL;
volatile uint64_t t164 = 1176702864LLU;
static uint8_t x883 = UINT8_MAX;
uint64_t x884 = 251737206377LLU;
int64_t x893 = -1LL;
int64_t x902 = -861751LL;
int8_t x903 = INT8_MIN;
uint32_t t169 = 18689447U;
volatile int64_t t170 = 1LL;
uint16_t x915 = UINT16_MAX;
uint32_t x916 = UINT32_MAX;
static uint64_t x918 = 5LLU;
static volatile int8_t x924 = -1;
uint16_t x925 = 1127U;
volatile int32_t x930 = INT32_MIN;
uint64_t x932 = 23873109043436LLU;
static volatile int8_t x948 = INT8_MIN;
int64_t x952 = INT64_MIN;
int32_t x959 = INT32_MIN;
int8_t x970 = -29;
int8_t x974 = INT8_MIN;
uint64_t x979 = 7306323LLU;
volatile uint64_t t186 = 30661397440LLU;
static uint64_t x986 = UINT64_MAX;
int32_t x987 = 33;
uint64_t t190 = 107352712729LLU;
static volatile int32_t t191 = -231939;
int16_t x1014 = INT16_MIN;
int16_t x1024 = INT16_MIN;
int64_t x1025 = -85754989LL;
static int64_t x1029 = -1LL;
volatile int8_t x1039 = -1;
volatile int32_t t197 = 18195;
uint32_t x1046 = 16434U;
static volatile uint32_t x1048 = 76976228U;
int64_t x1050 = INT64_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int16_t x2 = -353;
	uint32_t x3 = 1318416871U;
	volatile int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = 816U;

    t0 = ((x1<=x2)%(x3&x4));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 6883U;
	volatile int16_t x7 = INT16_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 29764030;

    t1 = ((x5<=x6)%(x7&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = 1;
	static volatile int64_t x15 = INT64_MAX;
	int64_t x16 = -1LL;
	int64_t t2 = 1796544364LL;

    t2 = ((x13<=x14)%(x15&x16));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MAX;
	static volatile int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MAX;
	int8_t x20 = -1;
	static int32_t t3 = 6;

    t3 = ((x17<=x18)%(x19&x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 1;
	volatile int16_t x22 = INT16_MIN;
	uint16_t x23 = 25892U;
	uint32_t x24 = 8334159U;
	uint32_t t4 = 46U;

    t4 = ((x21<=x22)%(x23&x24));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	uint8_t x26 = UINT8_MAX;
	uint32_t x27 = 832357U;
	static int16_t x28 = -1705;
	uint32_t t5 = 2U;

    t5 = ((x25<=x26)%(x27&x28));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = -1;
	uint16_t x30 = 2U;

    t6 = ((x29<=x30)%(x31&x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MAX;
	static uint64_t x43 = 315567381940LLU;
	static int8_t x44 = INT8_MIN;
	uint64_t t7 = 2006087LLU;

    t7 = ((x41<=x42)%(x43&x44));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x46 = -53;
	static int16_t x47 = 13;
	int64_t x48 = 66291012720403LL;
	volatile int64_t t8 = 6328209LL;

    t8 = ((x45<=x46)%(x47&x48));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x50 = INT16_MIN;
	volatile int8_t x51 = 2;
	int32_t x52 = -166465894;
	static volatile int32_t t9 = 2158758;

    t9 = ((x49<=x50)%(x51&x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x53 = -1;
	int8_t x54 = -1;
	static uint64_t x55 = 1565545LLU;
	volatile uint64_t t10 = 8450215151936574LLU;

    t10 = ((x53<=x54)%(x55&x56));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x57 = INT32_MIN;
	int32_t x58 = -1;
	uint32_t x59 = 626380U;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 1LLU;

    t11 = ((x57<=x58)%(x59&x60));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = -1;
	int8_t x63 = 12;
	static volatile int8_t x64 = INT8_MAX;
	volatile int32_t t12 = -1569;

    t12 = ((x61<=x62)%(x63&x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;

    t13 = ((x65<=x66)%(x67&x68));

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x69 = INT64_MIN;
	uint16_t x71 = 17U;

    t14 = ((x69<=x70)%(x71&x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x74 = 9U;
	volatile int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t15 = 77847;

    t15 = ((x73<=x74)%(x75&x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -1;
	int32_t x78 = -408097766;
	volatile int32_t x79 = INT32_MAX;
	int32_t t16 = -427;

    t16 = ((x77<=x78)%(x79&x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x81 = 746U;
	static volatile int64_t x82 = -771LL;
	int16_t x83 = INT16_MIN;
	static uint16_t x84 = UINT16_MAX;
	static int32_t t17 = -1;

    t17 = ((x81<=x82)%(x83&x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x86 = -1LL;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t18 = -15958301;

    t18 = ((x85<=x86)%(x87&x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = -1LL;
	static volatile int64_t t19 = -8522759LL;

    t19 = ((x89<=x90)%(x91&x92));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x93 = INT32_MIN;
	uint16_t x94 = 259U;
	uint16_t x95 = UINT16_MAX;
	volatile uint8_t x96 = 11U;
	volatile int32_t t20 = 20;

    t20 = ((x93<=x94)%(x95&x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x97 = -27437;
	static int32_t x98 = -1;

    t21 = ((x97<=x98)%(x99&x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = 3U;
	int64_t x114 = -185309633398LL;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = -1;
	int32_t t22 = -96486;

    t22 = ((x113<=x114)%(x115&x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x117 = 50918395274843226LLU;
	volatile int8_t x118 = -1;
	uint32_t t23 = 124U;

    t23 = ((x117<=x118)%(x119&x120));

    if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = -1;
	uint16_t x122 = 22U;
	uint32_t x123 = 2428670U;
	int64_t t24 = -4262280347512LL;

    t24 = ((x121<=x122)%(x123&x124));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	volatile int8_t x126 = INT8_MAX;
	int16_t x128 = INT16_MIN;
	static volatile uint32_t t25 = 355427688U;

    t25 = ((x125<=x126)%(x127&x128));

    if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = -1;
	int8_t x130 = 1;
	uint16_t x131 = 13061U;
	int32_t x132 = -7224;
	volatile int32_t t26 = -44;

    t26 = ((x129<=x130)%(x131&x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = INT8_MIN;
	uint32_t x139 = 343326U;
	int16_t x140 = INT16_MIN;
	volatile uint32_t t27 = 53205U;

    t27 = ((x137<=x138)%(x139&x140));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x141 = INT64_MAX;
	int32_t x142 = INT32_MAX;
	uint16_t x143 = 53U;
	static int64_t x144 = -3LL;
	volatile int64_t t28 = -599774166485604LL;

    t28 = ((x141<=x142)%(x143&x144));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x145 = -1LL;
	uint32_t x147 = UINT32_MAX;
	uint32_t t29 = 2014197U;

    t29 = ((x145<=x146)%(x147&x148));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x153 = 1876;
	volatile uint16_t x155 = UINT16_MAX;
	volatile uint64_t x156 = 226426LLU;
	uint64_t t30 = 875023659310266LLU;

    t30 = ((x153<=x154)%(x155&x156));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x157 = 3845248105287054LL;
	int64_t x158 = INT64_MIN;
	static uint32_t x159 = 1119113648U;
	volatile int16_t x160 = -37;
	volatile uint32_t t31 = 13875562U;

    t31 = ((x157<=x158)%(x159&x160));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x169 = 23U;
	int32_t x170 = INT32_MIN;
	uint8_t x171 = UINT8_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t32 = 271370308119879586LLU;

    t32 = ((x169<=x170)%(x171&x172));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x177 = -1LL;
	static int16_t x180 = -4259;
	volatile int32_t t33 = 441;

    t33 = ((x177<=x178)%(x179&x180));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x181 = 5027U;
	static int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = INT64_MIN;

    t34 = ((x181<=x182)%(x183&x184));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x185 = 59U;
	int8_t x186 = 4;
	volatile int16_t x188 = -1;
	int32_t t35 = -391091991;

    t35 = ((x185<=x186)%(x187&x188));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x189 = 12;
	int64_t x190 = INT64_MIN;
	static int8_t x191 = 17;
	uint16_t x192 = 1018U;

    t36 = ((x189<=x190)%(x191&x192));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MIN;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = -1;
	volatile uint32_t t37 = 19U;

    t37 = ((x193<=x194)%(x195&x196));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x201 = INT16_MIN;
	static int64_t x202 = 63029255LL;
	volatile int32_t x203 = INT32_MAX;
	uint16_t x204 = 506U;
	volatile int32_t t38 = -142;

    t38 = ((x201<=x202)%(x203&x204));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	uint8_t x207 = UINT8_MAX;
	int16_t x208 = 1654;
	volatile int32_t t39 = 4;

    t39 = ((x205<=x206)%(x207&x208));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x214 = INT32_MAX;
	int64_t x215 = -7LL;
	int32_t x216 = 406796145;
	volatile int64_t t40 = -2654LL;

    t40 = ((x213<=x214)%(x215&x216));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x217 = 3308724350088LLU;
	int16_t x218 = -1096;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t41 = -27935;

    t41 = ((x217<=x218)%(x219&x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x221 = -53183614;
	volatile int32_t x222 = INT32_MIN;
	uint8_t x223 = 7U;
	volatile uint64_t x224 = 1957LLU;
	uint64_t t42 = 30203945LLU;

    t42 = ((x221<=x222)%(x223&x224));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int32_t x227 = 1619361;
	static volatile int64_t t43 = -163956908632568328LL;

    t43 = ((x225<=x226)%(x227&x228));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x229 = INT64_MAX;
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = 1260635434113467808LL;
	uint64_t x232 = UINT64_MAX;

    t44 = ((x229<=x230)%(x231&x232));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = 3;
	int64_t x239 = -1LL;
	int8_t x240 = INT8_MIN;
	int64_t t45 = -596495967868943LL;

    t45 = ((x237<=x238)%(x239&x240));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x245 = 0U;
	volatile int64_t x247 = 9622LL;
	static int64_t t46 = -4LL;

    t46 = ((x245<=x246)%(x247&x248));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x250 = UINT64_MAX;
	int16_t x251 = 39;
	static volatile int64_t t47 = -24LL;

    t47 = ((x249<=x250)%(x251&x252));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x253 = -1;
	uint8_t x254 = 0U;
	int8_t x255 = INT8_MAX;
	int8_t x256 = -4;

    t48 = ((x253<=x254)%(x255&x256));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x257 = 77292646717138LLU;
	int16_t x259 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t49 = 1;

    t49 = ((x257<=x258)%(x259&x260));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x269 = 12327;
	int64_t x270 = -1LL;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t50 = 1LL;

    t50 = ((x269<=x270)%(x271&x272));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x273 = -1;
	int8_t x275 = -1;
	int64_t x276 = INT64_MAX;
	int64_t t51 = -256064292106207968LL;

    t51 = ((x273<=x274)%(x275&x276));

    if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x277 = -1;
	int32_t x278 = -2552649;
	int16_t x279 = -106;
	static uint64_t x280 = 9000277865379302LLU;
	volatile uint64_t t52 = 175731862130LLU;

    t52 = ((x277<=x278)%(x279&x280));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x285 = UINT16_MAX;
	int8_t x286 = -1;
	static int16_t x287 = INT16_MAX;
	static int32_t x288 = 3678;

    t53 = ((x285<=x286)%(x287&x288));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MIN;
	int8_t x291 = 49;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t54 = 486828139983049LLU;

    t54 = ((x289<=x290)%(x291&x292));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x293 = 14U;
	int16_t x296 = INT16_MIN;
	static int32_t t55 = 447092;

    t55 = ((x293<=x294)%(x295&x296));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x298 = 36;
	int64_t x299 = 6LL;
	int64_t x300 = -1LL;

    t56 = ((x297<=x298)%(x299&x300));

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x309 = INT32_MAX;
	int64_t x310 = INT64_MAX;
	uint16_t x312 = UINT16_MAX;
	static int32_t t57 = 413207;

    t57 = ((x309<=x310)%(x311&x312));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x313 = -1539391;
	int64_t x314 = INT64_MIN;
	volatile uint32_t x315 = 7930739U;
	static int16_t x316 = -197;
	static volatile uint32_t t58 = 951717022U;

    t58 = ((x313<=x314)%(x315&x316));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x322 = -1LL;
	int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t59 = 76;

    t59 = ((x321<=x322)%(x323&x324));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x325 = INT64_MAX;
	int64_t x326 = -1LL;
	static int64_t x327 = INT64_MAX;
	int64_t t60 = 29858LL;

    t60 = ((x325<=x326)%(x327&x328));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = 29;
	int32_t x335 = INT32_MAX;
	int32_t t61 = -632158;

    t61 = ((x333<=x334)%(x335&x336));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x337 = 32905LLU;
	int8_t x338 = INT8_MIN;
	int32_t x339 = 1437389;
	int16_t x340 = INT16_MIN;
	int32_t t62 = 71;

    t62 = ((x337<=x338)%(x339&x340));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x343 = 14882U;
	uint16_t x344 = UINT16_MAX;
	static volatile uint32_t t63 = 104747434U;

    t63 = ((x341<=x342)%(x343&x344));

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x345 = 46U;
	uint64_t x346 = 736867143LLU;
	volatile uint8_t x347 = UINT8_MAX;
	uint64_t x348 = 6625560442142280539LLU;
	volatile uint64_t t64 = 51307874LLU;

    t64 = ((x345<=x346)%(x347&x348));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x349 = UINT8_MAX;
	int64_t x351 = -1LL;
	int16_t x352 = 3;
	int64_t t65 = -295292170865718LL;

    t65 = ((x349<=x350)%(x351&x352));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x353 = 2U;
	uint8_t x354 = UINT8_MAX;
	uint64_t x355 = 1LLU;
	int8_t x356 = 1;

    t66 = ((x353<=x354)%(x355&x356));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x357 = INT8_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	uint32_t x360 = UINT32_MAX;
	volatile uint32_t t67 = 1559U;

    t67 = ((x357<=x358)%(x359&x360));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x361 = 200;
	int64_t x362 = -19688045394056562LL;
	uint16_t x363 = 14U;
	int64_t t68 = 28LL;

    t68 = ((x361<=x362)%(x363&x364));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x365 = INT16_MIN;
	uint32_t x366 = 1273597958U;
	int32_t x367 = 27485154;
	volatile int32_t t69 = 31784;

    t69 = ((x365<=x366)%(x367&x368));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x370 = 1649964U;
	int16_t x371 = -1;
	volatile uint32_t x372 = 70161297U;
	volatile uint32_t t70 = 561U;

    t70 = ((x369<=x370)%(x371&x372));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x374 = INT32_MIN;
	static uint8_t x375 = UINT8_MAX;
	static volatile int16_t x376 = 63;
	volatile int32_t t71 = -77927;

    t71 = ((x373<=x374)%(x375&x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x388 = INT16_MAX;
	volatile int32_t t72 = 830210613;

    t72 = ((x385<=x386)%(x387&x388));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x397 = INT64_MIN;
	int32_t x399 = -1982;
	volatile int32_t t73 = 30;

    t73 = ((x397<=x398)%(x399&x400));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	int32_t x404 = INT32_MIN;
	int64_t t74 = -57606817LL;

    t74 = ((x401<=x402)%(x403&x404));

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x407 = -1;
	uint32_t x408 = 412475U;
	static volatile uint32_t t75 = 2172902U;

    t75 = ((x405<=x406)%(x407&x408));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x409 = INT16_MIN;
	volatile int64_t x411 = -1LL;
	static volatile int64_t x412 = INT64_MIN;
	volatile int64_t t76 = -2LL;

    t76 = ((x409<=x410)%(x411&x412));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x418 = INT32_MAX;
	volatile uint64_t x419 = 1040185636789LLU;
	uint16_t x420 = UINT16_MAX;
	static volatile uint64_t t77 = 6252065785LLU;

    t77 = ((x417<=x418)%(x419&x420));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x421 = 0U;
	uint16_t x422 = 0U;
	static int8_t x423 = 1;
	uint8_t x424 = UINT8_MAX;
	int32_t t78 = 8658964;

    t78 = ((x421<=x422)%(x423&x424));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x425 = -1LL;
	volatile int64_t x428 = INT64_MAX;
	static volatile int64_t t79 = -21586896LL;

    t79 = ((x425<=x426)%(x427&x428));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x433 = 808LLU;
	int16_t x434 = 70;
	int16_t x436 = -1;
	int32_t t80 = -7817;

    t80 = ((x433<=x434)%(x435&x436));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x437 = 0;
	uint32_t x438 = UINT32_MAX;
	int32_t x439 = INT32_MIN;
	int64_t x440 = -13LL;

    t81 = ((x437<=x438)%(x439&x440));

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x442 = 50268820763780LLU;
	int64_t x443 = -1LL;
	uint8_t x444 = 76U;
	volatile int64_t t82 = 10933306113086LL;

    t82 = ((x441<=x442)%(x443&x444));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x446 = 12;
	int32_t x447 = -276;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t83 = 109595545;

    t83 = ((x445<=x446)%(x447&x448));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x449 = INT8_MIN;
	static int8_t x450 = -1;
	int8_t x452 = INT8_MIN;
	static int64_t t84 = 1272460121LL;

    t84 = ((x449<=x450)%(x451&x452));

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x453 = 456;
	static int16_t x455 = 10569;
	volatile uint64_t x456 = UINT64_MAX;
	static volatile uint64_t t85 = 448LLU;

    t85 = ((x453<=x454)%(x455&x456));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x457 = 172239945LLU;
	int16_t x458 = INT16_MIN;
	volatile uint64_t x460 = UINT64_MAX;
	volatile uint64_t t86 = 3496073755533LLU;

    t86 = ((x457<=x458)%(x459&x460));

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x463 = -1;
	volatile int64_t x464 = INT64_MAX;
	volatile int64_t t87 = -217LL;

    t87 = ((x461<=x462)%(x463&x464));

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x470 = 13368935503003LLU;
	volatile uint64_t x472 = 9490575480154LLU;

    t88 = ((x469<=x470)%(x471&x472));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x477 = -1LL;
	volatile int64_t x478 = -1LL;
	int64_t x479 = INT64_MAX;
	static volatile int64_t x480 = -1LL;
	int64_t t89 = -165375042023LL;

    t89 = ((x477<=x478)%(x479&x480));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x481 = 14714646581245LLU;
	volatile uint16_t x482 = UINT16_MAX;
	uint32_t x483 = 5084U;
	static int64_t x484 = -1LL;
	volatile int64_t t90 = 238265293975587LL;

    t90 = ((x481<=x482)%(x483&x484));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x485 = INT32_MIN;
	static int64_t x488 = INT64_MIN;
	static int64_t t91 = -615249186242371159LL;

    t91 = ((x485<=x486)%(x487&x488));

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x489 = UINT32_MAX;
	int64_t x490 = INT64_MIN;
	int16_t x491 = INT16_MIN;
	static int32_t x492 = -1;
	volatile int32_t t92 = -1023892;

    t92 = ((x489<=x490)%(x491&x492));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x493 = -1;
	uint64_t x495 = 26196037807LLU;
	int8_t x496 = -37;
	volatile uint64_t t93 = 7582934LLU;

    t93 = ((x493<=x494)%(x495&x496));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x501 = 19U;
	int32_t x502 = INT32_MIN;
	static uint32_t x504 = 84980970U;
	static volatile uint32_t t94 = 29639U;

    t94 = ((x501<=x502)%(x503&x504));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x506 = INT16_MAX;
	static int64_t x507 = INT64_MIN;
	int16_t x508 = INT16_MIN;
	int64_t t95 = -633265800871942140LL;

    t95 = ((x505<=x506)%(x507&x508));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x509 = 1515916046U;
	int64_t x510 = -1LL;
	uint64_t x511 = 10LLU;
	static volatile uint32_t x512 = 947645U;
	uint64_t t96 = 6748LLU;

    t96 = ((x509<=x510)%(x511&x512));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x513 = INT32_MAX;
	static int32_t x514 = -158692;
	static uint8_t x515 = 2U;
	volatile int32_t t97 = -413932812;

    t97 = ((x513<=x514)%(x515&x516));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x517 = INT64_MAX;
	int8_t x518 = INT8_MIN;
	int8_t x519 = 1;
	int8_t x520 = INT8_MAX;
	volatile int32_t t98 = -57658615;

    t98 = ((x517<=x518)%(x519&x520));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x522 = INT8_MIN;
	static int16_t x523 = 5724;
	uint32_t x524 = UINT32_MAX;
	uint32_t t99 = 1013635961U;

    t99 = ((x521<=x522)%(x523&x524));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x525 = -1LL;
	volatile int32_t t100 = -95;

    t100 = ((x525<=x526)%(x527&x528));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x530 = 1U;
	volatile int16_t x531 = 17;

    t101 = ((x529<=x530)%(x531&x532));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x535 = 35U;
	int16_t x536 = 5;
	int32_t t102 = -97;

    t102 = ((x533<=x534)%(x535&x536));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x537 = -1;
	uint16_t x538 = 78U;
	int64_t x539 = INT64_MIN;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t103 = 324LLU;

    t103 = ((x537<=x538)%(x539&x540));

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x542 = INT64_MIN;
	uint32_t x543 = UINT32_MAX;
	uint32_t t104 = 72U;

    t104 = ((x541<=x542)%(x543&x544));

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x549 = UINT8_MAX;
	volatile int16_t x550 = INT16_MIN;
	uint64_t x551 = 78406719401637LLU;
	uint64_t t105 = 82LLU;

    t105 = ((x549<=x550)%(x551&x552));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x553 = UINT32_MAX;
	static int32_t x554 = -31;
	int32_t x555 = INT32_MIN;
	int64_t x556 = INT64_MIN;
	volatile int64_t t106 = -8137114LL;

    t106 = ((x553<=x554)%(x555&x556));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x561 = INT8_MIN;
	uint8_t x562 = UINT8_MAX;
	int8_t x563 = INT8_MIN;
	static uint16_t x564 = UINT16_MAX;
	int32_t t107 = 73642;

    t107 = ((x561<=x562)%(x563&x564));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x565 = -411907;
	uint16_t x566 = 126U;
	uint8_t x567 = UINT8_MAX;
	int16_t x568 = -1;

    t108 = ((x565<=x566)%(x567&x568));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x569 = 17;
	int8_t x570 = 0;
	volatile int8_t x571 = -22;
	static volatile uint16_t x572 = UINT16_MAX;

    t109 = ((x569<=x570)%(x571&x572));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x581 = -1;
	int32_t x582 = -153078;
	uint32_t x584 = 43064508U;
	uint32_t t110 = 30U;

    t110 = ((x581<=x582)%(x583&x584));

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x589 = INT32_MIN;
	volatile int8_t x590 = INT8_MAX;
	volatile int32_t t111 = 995;

    t111 = ((x589<=x590)%(x591&x592));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	volatile int8_t x595 = -1;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t112 = -1651006;

    t112 = ((x593<=x594)%(x595&x596));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x609 = -1LL;
	int8_t x610 = 2;
	volatile uint32_t x611 = 3111582U;
	uint8_t x612 = 4U;
	volatile uint32_t t113 = 4U;

    t113 = ((x609<=x610)%(x611&x612));

    if (t113 != 1U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -1;
	volatile int32_t x616 = 1888529;
	static int32_t t114 = 20;

    t114 = ((x613<=x614)%(x615&x616));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x617 = -1LL;
	uint32_t x620 = 1005439U;
	uint32_t t115 = 420U;

    t115 = ((x617<=x618)%(x619&x620));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x621 = -2;
	int8_t x622 = INT8_MAX;
	int64_t x623 = -1LL;
	int32_t x624 = INT32_MAX;
	static int64_t t116 = 677LL;

    t116 = ((x621<=x622)%(x623&x624));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x629 = UINT8_MAX;
	int16_t x630 = INT16_MIN;
	int16_t x632 = INT16_MAX;
	uint64_t t117 = 417LLU;

    t117 = ((x629<=x630)%(x631&x632));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x633 = -1LL;
	static int64_t x634 = 18860554900843LL;
	int64_t x635 = -38339925154757LL;
	uint64_t x636 = UINT64_MAX;
	static uint64_t t118 = 218LLU;

    t118 = ((x633<=x634)%(x635&x636));

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x638 = 32U;
	uint8_t x639 = 5U;
	static volatile int64_t t119 = -526771586448035570LL;

    t119 = ((x637<=x638)%(x639&x640));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x641 = -46157LL;
	int32_t x642 = 6151;
	uint32_t x643 = 1810U;
	int8_t x644 = INT8_MIN;
	volatile uint32_t t120 = 3U;

    t120 = ((x641<=x642)%(x643&x644));

    if (t120 != 1U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x646 = UINT16_MAX;
	volatile int8_t x647 = INT8_MIN;
	static volatile int32_t t121 = -470816;

    t121 = ((x645<=x646)%(x647&x648));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x649 = INT64_MIN;
	uint64_t x650 = 7608738113737LLU;
	int8_t x651 = -1;
	uint64_t x652 = 6193828659265LLU;
	uint64_t t122 = 88LLU;

    t122 = ((x649<=x650)%(x651&x652));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x654 = -1LL;
	int32_t x655 = -215990;
	int64_t x656 = -1LL;

    t123 = ((x653<=x654)%(x655&x656));

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x657 = INT32_MIN;
	static uint16_t x658 = 957U;
	uint64_t x659 = UINT64_MAX;
	static uint64_t t124 = 1775701602143124329LLU;

    t124 = ((x657<=x658)%(x659&x660));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x661 = INT32_MIN;
	static volatile int64_t x662 = INT64_MIN;
	volatile int32_t x663 = INT32_MAX;
	int64_t x664 = -1LL;
	volatile int64_t t125 = -58738913769511LL;

    t125 = ((x661<=x662)%(x663&x664));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x667 = 9U;
	static int8_t x668 = INT8_MAX;
	int32_t t126 = 432564027;

    t126 = ((x665<=x666)%(x667&x668));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x670 = 915U;
	static volatile int64_t x671 = -17220860LL;
	int64_t t127 = 195LL;

    t127 = ((x669<=x670)%(x671&x672));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x675 = 22U;
	int32_t x676 = 3;
	int32_t t128 = 14232;

    t128 = ((x673<=x674)%(x675&x676));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x678 = INT16_MIN;
	volatile int16_t x679 = INT16_MAX;
	volatile int8_t x680 = INT8_MAX;
	static volatile int32_t t129 = 8444;

    t129 = ((x677<=x678)%(x679&x680));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x686 = INT64_MIN;
	uint16_t x687 = UINT16_MAX;
	uint8_t x688 = UINT8_MAX;

    t130 = ((x685<=x686)%(x687&x688));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x697 = -1;
	static int64_t x699 = 507LL;
	volatile int64_t t131 = -16604180520LL;

    t131 = ((x697<=x698)%(x699&x700));

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x701 = -1LL;
	int8_t x702 = 0;
	uint64_t x704 = 948358988757968086LLU;

    t132 = ((x701<=x702)%(x703&x704));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x705 = UINT8_MAX;
	int64_t x706 = -4LL;
	int64_t x707 = INT64_MIN;
	volatile int8_t x708 = -1;

    t133 = ((x705<=x706)%(x707&x708));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x713 = INT64_MIN;
	uint32_t x714 = 1U;
	int8_t x715 = -1;
	int32_t t134 = 6;

    t134 = ((x713<=x714)%(x715&x716));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x719 = INT64_MAX;
	uint64_t x720 = 3681984112262153LLU;
	volatile uint64_t t135 = 1349503508349036LLU;

    t135 = ((x717<=x718)%(x719&x720));

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x721 = -16447132LL;
	volatile int64_t x722 = -1LL;
	int8_t x723 = INT8_MIN;
	volatile int32_t t136 = -381664232;

    t136 = ((x721<=x722)%(x723&x724));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x725 = 13716200551316250LL;
	volatile uint32_t x727 = UINT32_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile uint32_t t137 = 31591U;

    t137 = ((x725<=x726)%(x727&x728));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x729 = -1;
	int16_t x730 = 70;
	int64_t x732 = -1LL;
	volatile int64_t t138 = 1LL;

    t138 = ((x729<=x730)%(x731&x732));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x733 = -1;
	int8_t x735 = INT8_MIN;
	int32_t t139 = 39936;

    t139 = ((x733<=x734)%(x735&x736));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x737 = 755;
	static int16_t x740 = INT16_MIN;
	int32_t t140 = 0;

    t140 = ((x737<=x738)%(x739&x740));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x743 = INT32_MAX;
	static int64_t x744 = INT64_MAX;
	volatile int64_t t141 = -1LL;

    t141 = ((x741<=x742)%(x743&x744));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x747 = 214U;
	int16_t x748 = 21;
	volatile int32_t t142 = -58843;

    t142 = ((x745<=x746)%(x747&x748));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x749 = UINT32_MAX;
	uint64_t x750 = 440LLU;
	static uint16_t x752 = UINT16_MAX;
	volatile int32_t t143 = -3230506;

    t143 = ((x749<=x750)%(x751&x752));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x757 = 4271LL;
	uint16_t x758 = 15686U;
	int8_t x759 = -21;
	int16_t x760 = INT16_MAX;
	volatile int32_t t144 = 0;

    t144 = ((x757<=x758)%(x759&x760));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x761 = -1;
	int16_t x762 = INT16_MIN;
	uint32_t x763 = 91732623U;
	volatile int32_t x764 = 246803;

    t145 = ((x761<=x762)%(x763&x764));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x765 = -1;
	int16_t x768 = -1;
	volatile int32_t t146 = 165;

    t146 = ((x765<=x766)%(x767&x768));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x769 = -1;
	int32_t x770 = INT32_MIN;
	uint16_t x771 = 30U;
	int32_t x772 = 8234;

    t147 = ((x769<=x770)%(x771&x772));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x773 = INT16_MIN;
	static uint16_t x774 = UINT16_MAX;
	static volatile int16_t x775 = -77;
	static int8_t x776 = INT8_MIN;
	volatile int32_t t148 = -3172;

    t148 = ((x773<=x774)%(x775&x776));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x781 = UINT64_MAX;
	uint16_t x782 = 9U;
	int64_t x783 = INT64_MAX;
	int8_t x784 = INT8_MIN;
	static volatile int64_t t149 = 24602447957LL;

    t149 = ((x781<=x782)%(x783&x784));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x791 = UINT64_MAX;
	int64_t x792 = INT64_MAX;
	volatile uint64_t t150 = 35736612671449454LLU;

    t150 = ((x789<=x790)%(x791&x792));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x801 = INT64_MAX;
	volatile int64_t x802 = INT64_MAX;
	static uint8_t x803 = 2U;
	int16_t x804 = -1;
	int32_t t151 = 29842991;

    t151 = ((x801<=x802)%(x803&x804));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x809 = UINT8_MAX;
	static int16_t x810 = INT16_MIN;
	int64_t x811 = -1LL;
	int8_t x812 = INT8_MIN;
	volatile int64_t t152 = 318LL;

    t152 = ((x809<=x810)%(x811&x812));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x813 = 5741U;
	uint8_t x814 = 126U;
	int8_t x815 = -1;
	int8_t x816 = INT8_MAX;
	volatile int32_t t153 = -951;

    t153 = ((x813<=x814)%(x815&x816));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x817 = -1;
	uint16_t x819 = UINT16_MAX;
	static volatile int16_t x820 = -1;
	volatile int32_t t154 = 11;

    t154 = ((x817<=x818)%(x819&x820));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x822 = -49;
	int64_t x823 = INT64_MIN;
	static volatile int8_t x824 = -1;
	volatile int64_t t155 = -3406357974657787LL;

    t155 = ((x821<=x822)%(x823&x824));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = 1473;
	volatile int64_t t156 = 1352648248428751LL;

    t156 = ((x825<=x826)%(x827&x828));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x829 = UINT32_MAX;
	volatile int32_t x830 = INT32_MAX;
	static volatile int16_t x832 = -1;
	volatile int32_t t157 = 13564900;

    t157 = ((x829<=x830)%(x831&x832));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x837 = INT16_MAX;
	static int16_t x838 = -30;
	int8_t x839 = -3;
	static volatile int32_t t158 = -158883748;

    t158 = ((x837<=x838)%(x839&x840));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x846 = 1;
	volatile int16_t x847 = INT16_MAX;
	int64_t x848 = -1LL;

    t159 = ((x845<=x846)%(x847&x848));

    if (t159 != 1LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x849 = INT64_MIN;
	volatile uint32_t x850 = 23333U;
	int16_t x851 = -6573;
	uint32_t x852 = UINT32_MAX;
	volatile uint32_t t160 = 12U;

    t160 = ((x849<=x850)%(x851&x852));

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x865 = -6;
	int32_t x866 = 39409196;
	volatile uint8_t x867 = UINT8_MAX;

    t161 = ((x865<=x866)%(x867&x868));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x869 = INT32_MIN;
	int8_t x870 = INT8_MIN;
	uint32_t x871 = 3394640U;
	static int64_t x872 = -3798618060LL;

    t162 = ((x869<=x870)%(x871&x872));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x873 = 1U;
	static int16_t x874 = INT16_MAX;
	int8_t x875 = 6;
	static int32_t x876 = -185347;
	static volatile int32_t t163 = -3;

    t163 = ((x873<=x874)%(x875&x876));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x877 = INT8_MIN;
	int64_t x878 = INT64_MAX;
	int16_t x879 = INT16_MAX;
	uint64_t x880 = 325584146527526989LLU;

    t164 = ((x877<=x878)%(x879&x880));

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x881 = 167807;
	int64_t x882 = -1LL;
	uint64_t t165 = 4559719580LLU;

    t165 = ((x881<=x882)%(x883&x884));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x885 = -2389LL;
	static uint16_t x886 = 2641U;
	uint16_t x887 = 28731U;
	int8_t x888 = INT8_MIN;
	int32_t t166 = 12046060;

    t166 = ((x885<=x886)%(x887&x888));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x889 = INT16_MAX;
	uint64_t x890 = UINT64_MAX;
	uint32_t x891 = 124279U;
	volatile int32_t x892 = -1;
	volatile uint32_t t167 = 153U;

    t167 = ((x889<=x890)%(x891&x892));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x894 = 6118LLU;
	int8_t x895 = INT8_MAX;
	uint32_t x896 = 1U;
	volatile uint32_t t168 = 45270403U;

    t168 = ((x893<=x894)%(x895&x896));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x901 = 14760429392LLU;
	uint32_t x904 = UINT32_MAX;

    t169 = ((x901<=x902)%(x903&x904));

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x909 = 1U;
	volatile uint32_t x910 = UINT32_MAX;
	static int64_t x911 = -1LL;
	static int64_t x912 = -321423258LL;

    t170 = ((x909<=x910)%(x911&x912));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x913 = INT64_MIN;
	uint32_t x914 = UINT32_MAX;
	static volatile uint32_t t171 = 19437U;

    t171 = ((x913<=x914)%(x915&x916));

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x917 = 1374782110LL;
	static int8_t x919 = INT8_MAX;
	int16_t x920 = -1;
	int32_t t172 = 182;

    t172 = ((x917<=x918)%(x919&x920));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x921 = INT16_MIN;
	static int8_t x922 = 1;
	int8_t x923 = INT8_MIN;
	volatile int32_t t173 = -111;

    t173 = ((x921<=x922)%(x923&x924));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x926 = UINT32_MAX;
	int32_t x927 = -1;
	int64_t x928 = 41856595438LL;
	volatile int64_t t174 = -126376161897LL;

    t174 = ((x925<=x926)%(x927&x928));

    if (t174 != 1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x929 = 2735890138899678LLU;
	uint16_t x931 = 13945U;
	uint64_t t175 = 133409108273271737LLU;

    t175 = ((x929<=x930)%(x931&x932));

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x937 = -1;
	uint32_t x938 = 3767275U;
	int64_t x939 = -365142041454LL;
	static volatile int16_t x940 = -1;
	int64_t t176 = -415560213873106LL;

    t176 = ((x937<=x938)%(x939&x940));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x941 = UINT16_MAX;
	volatile int64_t x942 = INT64_MIN;
	int16_t x943 = -1;
	volatile int32_t x944 = INT32_MIN;
	int32_t t177 = -54;

    t177 = ((x941<=x942)%(x943&x944));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x945 = 7585;
	int32_t x946 = INT32_MIN;
	volatile int32_t x947 = 626;
	volatile int32_t t178 = -2735;

    t178 = ((x945<=x946)%(x947&x948));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x949 = INT32_MIN;
	uint8_t x950 = 2U;
	static int32_t x951 = -1;
	static int64_t t179 = -84539817101360LL;

    t179 = ((x949<=x950)%(x951&x952));

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x953 = 0U;
	static uint32_t x954 = 133U;
	int32_t x955 = INT32_MAX;
	int16_t x956 = INT16_MAX;
	static int32_t t180 = 2;

    t180 = ((x953<=x954)%(x955&x956));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x957 = INT32_MAX;
	int64_t x958 = 7666465100LL;
	int8_t x960 = -1;
	static int32_t t181 = 1;

    t181 = ((x957<=x958)%(x959&x960));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x961 = -11LL;
	volatile uint64_t x962 = 4068846LLU;
	uint64_t x963 = 522756489498331568LLU;
	volatile int8_t x964 = -1;
	static uint64_t t182 = 383LLU;

    t182 = ((x961<=x962)%(x963&x964));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x965 = INT64_MIN;
	uint64_t x966 = UINT64_MAX;
	int64_t x967 = -1LL;
	int8_t x968 = INT8_MIN;
	volatile int64_t t183 = -1855731050LL;

    t183 = ((x965<=x966)%(x967&x968));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x969 = UINT64_MAX;
	static int32_t x971 = INT32_MIN;
	int8_t x972 = INT8_MIN;
	int32_t t184 = 213744749;

    t184 = ((x969<=x970)%(x971&x972));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x973 = INT16_MAX;
	static volatile int8_t x975 = INT8_MIN;
	int64_t x976 = INT64_MIN;
	static int64_t t185 = 383975LL;

    t185 = ((x973<=x974)%(x975&x976));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x977 = -2496;
	uint8_t x978 = 19U;
	int16_t x980 = 1;

    t186 = ((x977<=x978)%(x979&x980));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x981 = 419U;
	int16_t x982 = 0;
	int8_t x983 = -1;
	static volatile uint32_t x984 = 1017770U;
	uint32_t t187 = 8U;

    t187 = ((x981<=x982)%(x983&x984));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x985 = -170LL;
	uint16_t x988 = 13U;
	static volatile int32_t t188 = 34625;

    t188 = ((x985<=x986)%(x987&x988));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x997 = 509LL;
	int64_t x998 = INT64_MIN;
	uint64_t x999 = 3431040213885LLU;
	volatile int32_t x1000 = INT32_MIN;
	volatile uint64_t t189 = 19LLU;

    t189 = ((x997<=x998)%(x999&x1000));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1005 = INT32_MIN;
	static int32_t x1006 = -1;
	volatile uint64_t x1007 = 6928554838383398461LLU;
	uint8_t x1008 = 59U;

    t190 = ((x1005<=x1006)%(x1007&x1008));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x1009 = 1024750439U;
	uint8_t x1010 = 91U;
	int32_t x1011 = INT32_MAX;
	uint16_t x1012 = UINT16_MAX;

    t191 = ((x1009<=x1010)%(x1011&x1012));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1013 = INT16_MIN;
	int64_t x1015 = 2065023LL;
	static int16_t x1016 = INT16_MIN;
	static volatile int64_t t192 = -376719602783714793LL;

    t192 = ((x1013<=x1014)%(x1015&x1016));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1017 = 12U;
	int32_t x1018 = INT32_MIN;
	int16_t x1019 = 121;
	int16_t x1020 = 2347;
	volatile int32_t t193 = 3337693;

    t193 = ((x1017<=x1018)%(x1019&x1020));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1021 = -2346;
	int8_t x1022 = -2;
	int16_t x1023 = INT16_MIN;
	volatile int32_t t194 = 598;

    t194 = ((x1021<=x1022)%(x1023&x1024));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x1026 = UINT16_MAX;
	int8_t x1027 = -1;
	uint32_t x1028 = UINT32_MAX;
	uint32_t t195 = 3194505U;

    t195 = ((x1025<=x1026)%(x1027&x1028));

    if (t195 != 1U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1030 = UINT16_MAX;
	uint64_t x1031 = 619464462383762LLU;
	static uint64_t x1032 = UINT64_MAX;
	static uint64_t t196 = 10400306417524713LLU;

    t196 = ((x1029<=x1030)%(x1031&x1032));

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1037 = INT64_MAX;
	int64_t x1038 = -50376176873983764LL;
	int16_t x1040 = INT16_MAX;

    t197 = ((x1037<=x1038)%(x1039&x1040));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1045 = INT32_MAX;
	uint8_t x1047 = UINT8_MAX;
	static volatile uint32_t t198 = 48U;

    t198 = ((x1045<=x1046)%(x1047&x1048));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1049 = 4972U;
	int64_t x1051 = -348709052202410LL;
	int64_t x1052 = -1LL;
	static int64_t t199 = 239915130LL;

    t199 = ((x1049<=x1050)%(x1051&x1052));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

