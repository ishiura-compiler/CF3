
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

int64_t x9 = INT64_MIN;
int64_t x12 = INT64_MAX;
volatile int16_t x17 = -1;
volatile int64_t t3 = 93LL;
volatile int32_t x22 = -1;
static int64_t x25 = -1LL;
int8_t x27 = -1;
static int32_t x44 = -423;
static int32_t t7 = 124246847;
uint8_t x50 = 1U;
int16_t x54 = -1;
int64_t x55 = INT64_MAX;
volatile uint64_t t10 = 8248LLU;
int8_t x60 = INT8_MIN;
static uint8_t x70 = UINT8_MAX;
int8_t x73 = -17;
static uint32_t x74 = UINT32_MAX;
uint16_t x75 = 28158U;
static int16_t x76 = -1;
uint64_t t14 = 485727515126539LLU;
int32_t x82 = -1043;
int64_t t15 = 225593850LL;
int8_t x85 = INT8_MAX;
uint8_t x86 = UINT8_MAX;
volatile int8_t x89 = INT8_MIN;
int32_t t17 = -99543;
int16_t x99 = -2407;
uint64_t x102 = 322LLU;
int16_t x115 = 1;
uint64_t x129 = 918878132140837585LLU;
int16_t x131 = INT16_MAX;
volatile int32_t x132 = INT32_MIN;
int16_t x134 = INT16_MIN;
int8_t x142 = -1;
int16_t x158 = -1;
static volatile int64_t t29 = 16261LL;
volatile uint64_t t32 = 3892088095892547LLU;
uint64_t x183 = UINT64_MAX;
int16_t x185 = INT16_MIN;
int8_t x202 = 0;
int64_t x203 = -317797664269799LL;
volatile int64_t t35 = 57657659263911LL;
uint8_t x210 = 1U;
int64_t x211 = INT64_MIN;
uint32_t x218 = UINT32_MAX;
uint32_t x219 = 1106U;
int8_t x220 = INT8_MIN;
int32_t x231 = -1;
static volatile int8_t x241 = 10;
volatile uint32_t x257 = 234376U;
uint32_t x260 = 485506U;
volatile uint32_t t47 = 54795701U;
static volatile uint16_t x265 = 24851U;
int32_t x269 = 6412727;
volatile int64_t x281 = -15449LL;
int8_t x289 = -1;
int16_t x290 = INT16_MIN;
volatile int32_t x310 = -1;
int8_t x314 = -1;
volatile uint32_t x320 = 451475U;
volatile int64_t t59 = 499787643059972347LL;
uint16_t x337 = 49U;
static volatile uint64_t t63 = UINT64_MAX;
int16_t x354 = INT16_MIN;
int8_t x363 = INT8_MIN;
volatile int16_t x366 = -1;
static volatile uint64_t x371 = UINT64_MAX;
static int64_t x376 = 4498034480298LL;
volatile int64_t x377 = INT64_MIN;
static int64_t x393 = -1LL;
uint8_t x394 = UINT8_MAX;
int8_t x401 = 1;
static int16_t x404 = -1;
static int32_t x419 = INT32_MAX;
volatile uint32_t t76 = 2243362U;
int16_t x423 = -292;
volatile uint32_t t77 = 164263270U;
volatile int64_t x433 = 2176572098264LL;
int8_t x436 = -19;
static int32_t x438 = -1;
uint32_t x448 = 64651841U;
int32_t x454 = -3154;
volatile int32_t x480 = 0;
uint32_t x491 = UINT32_MAX;
static volatile int64_t t91 = -2317780914595465401LL;
static volatile uint64_t x517 = 7144233LLU;
volatile int16_t x520 = -1;
int8_t x529 = INT8_MAX;
int64_t x533 = -803LL;
volatile uint16_t x539 = 6U;
static volatile int32_t t97 = 49;
uint64_t x556 = UINT64_MAX;
uint64_t t98 = 3149LLU;
int64_t x558 = -1LL;
int16_t x559 = 478;
uint32_t x560 = 5945U;
volatile int64_t t99 = -313310417520LL;
uint64_t x569 = 45738836458156282LLU;
uint8_t x570 = 23U;
static uint64_t x571 = UINT64_MAX;
static volatile uint64_t t101 = 140737039266359LLU;
uint32_t x573 = 3070540U;
int32_t x574 = -1;
int16_t x575 = -163;
uint32_t t102 = 14927U;
volatile uint64_t x583 = UINT64_MAX;
int32_t x585 = INT32_MIN;
volatile uint32_t x586 = UINT32_MAX;
volatile int64_t t104 = 260863368LL;
int32_t x590 = -166703;
int8_t x596 = 5;
int16_t x602 = -12046;
static uint8_t x606 = 13U;
static uint32_t x610 = 2406652U;
uint32_t x611 = 707548U;
uint64_t x618 = UINT64_MAX;
int64_t x619 = INT64_MIN;
volatile uint32_t t111 = 7308U;
int16_t x631 = INT16_MAX;
volatile int8_t x632 = -1;
volatile uint16_t x637 = 6410U;
volatile int32_t x653 = INT32_MAX;
uint16_t x658 = 0U;
static uint32_t x662 = 10U;
int64_t x663 = INT64_MIN;
int32_t x670 = -1;
int8_t x671 = INT8_MIN;
int16_t x678 = -1;
int64_t x679 = INT64_MIN;
volatile int64_t t121 = 934087LL;
int16_t x682 = -1;
int32_t x684 = -1089444;
volatile int32_t t122 = -580830867;
int8_t x686 = 6;
uint8_t x687 = 38U;
int16_t x689 = -46;
uint16_t x700 = 8073U;
static uint64_t x707 = 3LLU;
volatile uint64_t t128 = 1691249400346LLU;
int16_t x717 = -1;
static int16_t x720 = INT16_MIN;
uint32_t x738 = 120543810U;
int16_t x739 = INT16_MIN;
uint32_t x748 = 89U;
uint32_t t133 = 20U;
int8_t x761 = INT8_MAX;
volatile uint16_t x763 = 15316U;
uint8_t x768 = 57U;
int8_t x788 = INT8_MAX;
uint16_t x795 = 237U;
volatile int32_t x799 = 292;
uint64_t t143 = 958366747434383LLU;
volatile uint8_t x804 = 35U;
int32_t t144 = -22228;
int64_t x805 = -1950387926241948LL;
volatile uint32_t x807 = 630U;
int16_t x808 = INT16_MIN;
uint8_t x810 = 10U;
static int16_t x820 = INT16_MIN;
uint32_t x823 = 149428121U;
static int64_t x843 = 730515LL;
int16_t x868 = -1;
uint64_t t154 = 164LLU;
int8_t x886 = -1;
int8_t x887 = 24;
uint8_t x905 = UINT8_MAX;
static int64_t x908 = INT64_MAX;
static volatile uint64_t t159 = 813933LLU;
uint8_t x912 = 69U;
int32_t x917 = -48;
int64_t x922 = -1LL;
int16_t x925 = 0;
static uint16_t x935 = 196U;
int32_t t165 = -499;
volatile uint64_t t168 = 4207LLU;
int8_t x953 = 1;
static uint8_t x954 = UINT8_MAX;
int64_t x955 = INT64_MIN;
volatile int32_t x965 = -29646;
uint16_t x978 = UINT16_MAX;
int32_t t173 = 3962;
int16_t x987 = 0;
static uint8_t x1001 = UINT8_MAX;
static volatile int64_t t176 = 10209749878643LL;
uint16_t x1013 = 716U;
uint64_t x1025 = UINT64_MAX;
uint32_t x1030 = UINT32_MAX;
volatile int64_t x1036 = -1LL;
volatile int32_t x1038 = -3006;
uint64_t x1039 = UINT64_MAX;
volatile uint32_t x1040 = 16654U;
volatile int16_t x1041 = INT16_MAX;
int64_t x1044 = INT64_MIN;
int8_t x1048 = -1;
uint32_t t186 = 5535951U;
uint16_t x1059 = UINT16_MAX;
int32_t t187 = 442215;
uint8_t x1062 = 11U;
volatile uint64_t t188 = 123594559868493LLU;
volatile uint64_t t189 = 1070707440505LLU;
int16_t x1070 = 3042;
int32_t x1071 = INT32_MIN;
uint64_t t190 = 14112LLU;
int16_t x1082 = INT16_MAX;
int16_t x1083 = INT16_MAX;
volatile int64_t x1084 = -3262584509175230LL;
int8_t x1090 = INT8_MIN;
static int32_t t194 = -77;
int64_t x1095 = INT64_MIN;
uint64_t x1101 = 3LLU;
static uint64_t t197 = 1076881554932LLU;
int16_t x1109 = -13;
uint8_t x1110 = 0U;
static uint32_t x1112 = 292546U;
static int8_t x1114 = -34;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	int16_t x2 = -1;
	volatile int16_t x3 = -1;
	int16_t x4 = 14447;
	int32_t t0 = INT32_MIN;

    t0 = ((x1*x2)+(x3|x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x10 = 0U;
	static uint64_t x11 = 210518459LLU;
	uint64_t t1 = 1083256306553033LLU;

    t1 = ((x9*x10)+(x11|x12));

    if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x13 = -25;
	int64_t x14 = -1LL;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	volatile int64_t t2 = -172999701721527484LL;

    t2 = ((x13*x14)+(x15|x16));

    if (t2 != 24LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x18 = INT8_MAX;
	int64_t x19 = INT64_MAX;
	int64_t x20 = -6528243LL;

    t3 = ((x17*x18)+(x19|x20));

    if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = -28;
	volatile int64_t x23 = -1LL;
	volatile int16_t x24 = INT16_MAX;
	volatile int64_t t4 = 4418LL;

    t4 = ((x21*x22)+(x23|x24));

    if (t4 != 27LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x26 = -12558;
	uint8_t x28 = 2U;
	volatile int64_t t5 = -1LL;

    t5 = ((x25*x26)+(x27|x28));

    if (t5 != 12557LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 95U;
	uint64_t x30 = 14993576948591LLU;
	int8_t x31 = -1;
	int32_t x32 = INT32_MAX;
	uint64_t t6 = 145135039626040999LLU;

    t6 = ((x29*x30)+(x31|x32));

    if (t6 != 1424389810116144LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x41 = 0;
	uint16_t x42 = 28192U;
	int8_t x43 = INT8_MIN;

    t7 = ((x41*x42)+(x43|x44));

    if (t7 != -39) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = -1;
	volatile int64_t x46 = INT64_MAX;
	uint16_t x47 = UINT16_MAX;
	static uint8_t x48 = UINT8_MAX;
	int64_t t8 = -15795153394755443LL;

    t8 = ((x45*x46)+(x47|x48));

    if (t8 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = 50;
	static int32_t x51 = -1;
	int64_t x52 = -6LL;
	volatile int64_t t9 = 496LL;

    t9 = ((x49*x50)+(x51|x52));

    if (t9 != 49LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	volatile int16_t x56 = INT16_MIN;

    t10 = ((x53*x54)+(x55|x56));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = 26U;
	volatile int16_t x58 = 0;
	static volatile int8_t x59 = INT8_MIN;
	int32_t t11 = -1972890;

    t11 = ((x57*x58)+(x59|x60));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x69 = 1U;
	uint8_t x71 = 0U;
	uint64_t x72 = 132667734471648323LLU;
	uint64_t t12 = 14LLU;

    t12 = ((x69*x70)+(x71|x72));

    if (t12 != 132667734471648578LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t t13 = 612891594U;

    t13 = ((x73*x74)+(x75|x76));

    if (t13 != 16U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x77 = 72231204618LLU;
	int16_t x78 = INT16_MIN;
	static uint16_t x79 = 76U;
	volatile int32_t x80 = INT32_MAX;

    t14 = ((x77*x78)+(x79|x80));

    if (t14 != 18444377203744112639LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x81 = 3624U;
	volatile int32_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;

    t15 = ((x81*x82)+(x83|x84));

    if (t15 != -3779833LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x87 = UINT32_MAX;
	static volatile uint8_t x88 = 2U;
	uint32_t t16 = 235U;

    t16 = ((x85*x86)+(x87|x88));

    if (t16 != 32384U) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x90 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = 3U;

    t17 = ((x89*x90)+(x91|x92));

    if (t17 != -32385) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x97 = 194281653653822LLU;
	static uint8_t x98 = UINT8_MAX;
	volatile int32_t x100 = -1;
	volatile uint64_t t18 = 274542951967LLU;

    t18 = ((x97*x98)+(x99|x100));

    if (t18 != 49541821681724609LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x101 = 6U;
	uint16_t x103 = 3U;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t19 = 89205775415389274LLU;

    t19 = ((x101*x102)+(x103|x104));

    if (t19 != 18446744073709520783LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x105 = -222137;
	uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 210368238013855997LLU;
	static uint8_t x108 = 13U;
	uint64_t t20 = 105861830072724LLU;

    t20 = ((x105*x106)+(x107|x108));

    if (t20 != 210368238014078134LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = 0;
	volatile int16_t x116 = INT16_MAX;
	int32_t t21 = -91932;

    t21 = ((x113*x114)+(x115|x116));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x117 = -1;
	int8_t x118 = -1;
	static volatile uint8_t x119 = 9U;
	int16_t x120 = 591;
	int32_t t22 = 3285;

    t22 = ((x117*x118)+(x119|x120));

    if (t22 != 592) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x130 = INT16_MIN;
	volatile uint64_t t23 = 15LLU;

    t23 = ((x129*x130)+(x131|x132));

    if (t23 != 13734438374584352767LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x133 = 1712LLU;
	volatile uint32_t x135 = 7097U;
	uint64_t x136 = 686832LLU;
	uint64_t t24 = 85425472036333LLU;

    t24 = ((x133*x134)+(x135|x136));

    if (t24 != 18446744073654139897LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x137 = INT8_MIN;
	static uint8_t x138 = 38U;
	int8_t x139 = INT8_MIN;
	int16_t x140 = -113;
	int32_t t25 = -11965888;

    t25 = ((x137*x138)+(x139|x140));

    if (t25 != -4977) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x141 = INT16_MAX;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t26 = 1;

    t26 = ((x141*x142)+(x143|x144));

    if (t26 != -65280) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x149 = -3;
	uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -3051017;
	int32_t t27 = 1;

    t27 = ((x149*x150)+(x151|x152));

    if (t27 != -3247622) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x157 = 21172U;
	static int8_t x159 = 0;
	uint8_t x160 = 3U;
	static int32_t t28 = -6813;

    t28 = ((x157*x158)+(x159|x160));

    if (t28 != -21169) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x161 = -1156884LL;
	int16_t x162 = INT16_MIN;
	int8_t x163 = -57;
	uint32_t x164 = 875193693U;

    t29 = ((x161*x162)+(x163|x164));

    if (t29 != 42203742175LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x165 = -1;
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = INT8_MIN;
	static int64_t t30 = 4144541051134600987LL;

    t30 = ((x165*x166)+(x167|x168));

    if (t30 != -127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x169 = 53536LLU;
	int64_t x170 = -32457989265708LL;
	int8_t x171 = -1;
	static int16_t x172 = -207;
	uint64_t t31 = 984847744LLU;

    t31 = ((x169*x170)+(x171|x172));

    if (t31 != 16709073160380608127LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x177 = INT8_MIN;
	uint64_t x178 = 123804LLU;
	static uint16_t x179 = 25U;
	uint64_t x180 = 2LLU;

    t32 = ((x177*x178)+(x179|x180));

    if (t32 != 18446744073693704731LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x181 = -1LL;
	uint16_t x182 = UINT16_MAX;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t33 = 28567447LLU;

    t33 = ((x181*x182)+(x183|x184));

    if (t33 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x186 = 40U;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MAX;
	int64_t t34 = 378LL;

    t34 = ((x185*x186)+(x187|x188));

    if (t34 != -9223372032561086465LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x201 = 0U;
	uint8_t x204 = 0U;

    t35 = ((x201*x202)+(x203|x204));

    if (t35 != -317797664269799LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x205 = 9663U;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = 159149LL;
	uint8_t x208 = 1U;
	uint64_t t36 = 15306706589LLU;

    t36 = ((x205*x206)+(x207|x208));

    if (t36 != 149486LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x209 = -42;
	uint16_t x212 = 6674U;
	static volatile int64_t t37 = -346462215113759LL;

    t37 = ((x209*x210)+(x211|x212));

    if (t37 != -9223372036854769176LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x213 = -1;
	int32_t x214 = INT32_MAX;
	int8_t x215 = 31;
	int32_t x216 = -1;
	volatile int32_t t38 = INT32_MIN;

    t38 = ((x213*x214)+(x215|x216));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x217 = 1782;
	uint32_t t39 = 68773U;

    t39 = ((x217*x218)+(x219|x220));

    if (t39 != 4294965468U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = 1;
	volatile int64_t x223 = 9715776808307LL;
	int32_t x224 = INT32_MIN;
	volatile int64_t t40 = -28669451634328390LL;

    t40 = ((x221*x222)+(x223|x224));

    if (t40 != -1586699021LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x225 = 6U;
	static int16_t x226 = -1;
	static int8_t x227 = INT8_MAX;
	int8_t x228 = -1;
	int32_t t41 = 0;

    t41 = ((x225*x226)+(x227|x228));

    if (t41 != -7) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = INT8_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t42 = 1;

    t42 = ((x229*x230)+(x231|x232));

    if (t42 != 4194303) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x242 = 0U;
	static uint32_t x243 = UINT32_MAX;
	uint16_t x244 = 1122U;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = ((x241*x242)+(x243|x244));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x245 = 1LL;
	static int8_t x246 = 3;
	uint64_t x247 = 333435531LLU;
	uint16_t x248 = UINT16_MAX;
	volatile uint64_t t44 = 376031106450LLU;

    t44 = ((x245*x246)+(x247|x248));

    if (t44 != 333447170LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x249 = -1;
	static uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	static volatile int8_t x252 = INT8_MIN;
	static volatile uint32_t t45 = 208981U;

    t45 = ((x249*x250)+(x251|x252));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x253 = -1;
	int64_t x254 = -17LL;
	uint32_t x255 = 621373U;
	uint8_t x256 = 122U;
	volatile int64_t t46 = -887204638828676LL;

    t46 = ((x253*x254)+(x255|x256));

    if (t46 != 621456LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x258 = INT32_MIN;
	volatile uint32_t x259 = 8U;

    t47 = ((x257*x258)+(x259|x260));

    if (t47 != 485514U) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x261 = 7;
	uint32_t x262 = 92912453U;
	static uint8_t x263 = 4U;
	int64_t x264 = INT64_MIN;
	int64_t t48 = 511978232LL;

    t48 = ((x261*x262)+(x263|x264));

    if (t48 != -9223372036204388633LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x266 = -1;
	static volatile int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t49 = -21;

    t49 = ((x265*x266)+(x267|x268));

    if (t49 != -24852) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x270 = 1;
	volatile int32_t x271 = 6379;
	uint32_t x272 = 387888733U;
	volatile uint32_t t50 = 15835U;

    t50 = ((x269*x270)+(x271|x272));

    if (t50 != 394303670U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x282 = -10579LL;
	volatile int32_t x283 = INT32_MIN;
	uint16_t x284 = 3U;
	volatile int64_t t51 = -1586128119938536477LL;

    t51 = ((x281*x282)+(x283|x284));

    if (t51 != -1984048674LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MIN;
	uint32_t t52 = 2U;

    t52 = ((x289*x290)+(x291|x292));

    if (t52 != 32767U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = INT8_MIN;
	volatile uint64_t x294 = 3962255315479LLU;
	int16_t x295 = -15394;
	static int32_t x296 = INT32_MIN;
	volatile uint64_t t53 = 95904502297LLU;

    t53 = ((x293*x294)+(x295|x296));

    if (t53 != 18446236905029154910LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x297 = -1LL;
	int64_t x298 = -2620LL;
	int16_t x299 = -1562;
	int8_t x300 = -1;
	volatile int64_t t54 = -56LL;

    t54 = ((x297*x298)+(x299|x300));

    if (t54 != 2619LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x305 = 6U;
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = -1LL;
	volatile int64_t t55 = 97740858871212508LL;

    t55 = ((x305*x306)+(x307|x308));

    if (t55 != 1529LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x309 = -1153LL;
	static int16_t x311 = INT16_MAX;
	volatile int16_t x312 = 162;
	volatile int64_t t56 = 1253774171033953LL;

    t56 = ((x309*x310)+(x311|x312));

    if (t56 != 33920LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x313 = 2727U;
	uint64_t x315 = 511410903480064LLU;
	int8_t x316 = INT8_MIN;
	uint64_t t57 = 56505104LLU;

    t57 = ((x313*x314)+(x315|x316));

    if (t57 != 18446744073709548761LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	static volatile uint32_t t58 = 993U;

    t58 = ((x317*x318)+(x319|x320));

    if (t58 != 475135U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x321 = INT16_MAX;
	int64_t x322 = -1LL;
	volatile int8_t x323 = -2;
	volatile int32_t x324 = -1;

    t59 = ((x321*x322)+(x323|x324));

    if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x325 = -3;
	int32_t x326 = -1;
	uint64_t x327 = 1772LLU;
	static uint32_t x328 = 74237U;
	volatile uint64_t t60 = 1391LLU;

    t60 = ((x325*x326)+(x327|x328));

    if (t60 != 75776LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x329 = INT16_MIN;
	static uint64_t x330 = 1341631176LLU;
	int32_t x331 = 32815243;
	int16_t x332 = -4712;
	uint64_t t61 = 289838594364866490LLU;

    t61 = ((x329*x330)+(x331|x332));

    if (t61 != 18446700111139175835LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x333 = UINT64_MAX;
	int32_t x334 = -1;
	int16_t x335 = INT16_MAX;
	int32_t x336 = 3;
	volatile uint64_t t62 = 17258771520405LLU;

    t62 = ((x333*x334)+(x335|x336));

    if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x338 = 0;
	static uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;

    t63 = ((x337*x338)+(x339|x340));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x341 = -48515LL;
	int8_t x342 = INT8_MIN;
	volatile uint16_t x343 = 8447U;
	volatile int32_t x344 = -1;
	volatile int64_t t64 = -64937661616333LL;

    t64 = ((x341*x342)+(x343|x344));

    if (t64 != 6209919LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x345 = 0U;
	int32_t x346 = 35196;
	int8_t x347 = -1;
	int64_t x348 = -79895218210012LL;
	volatile int64_t t65 = -5LL;

    t65 = ((x345*x346)+(x347|x348));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x353 = -1;
	uint8_t x355 = UINT8_MAX;
	uint16_t x356 = 10U;
	int32_t t66 = 7860480;

    t66 = ((x353*x354)+(x355|x356));

    if (t66 != 33023) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x361 = 19U;
	uint16_t x362 = UINT16_MAX;
	volatile int64_t x364 = INT64_MAX;
	int64_t t67 = 3LL;

    t67 = ((x361*x362)+(x363|x364));

    if (t67 != 1245164LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x365 = 32;
	static uint16_t x367 = 0U;
	uint64_t x368 = 918452308666368LLU;
	volatile uint64_t t68 = 726797686437748335LLU;

    t68 = ((x365*x366)+(x367|x368));

    if (t68 != 918452308666336LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x369 = 137141U;
	uint8_t x370 = 0U;
	volatile int64_t x372 = -1LL;
	volatile uint64_t t69 = UINT64_MAX;

    t69 = ((x369*x370)+(x371|x372));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x373 = -187623630LL;
	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	int64_t t70 = 2096671821LL;

    t70 = ((x373*x374)+(x375|x376));

    if (t70 != 402918676459639978LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x378 = 1199353690180834LLU;
	int16_t x379 = -13548;
	volatile int64_t x380 = INT64_MIN;
	volatile uint64_t t71 = 4299673482822090415LLU;

    t71 = ((x377*x378)+(x379|x380));

    if (t71 != 18446744073709538068LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x385 = 0U;
	volatile int8_t x386 = -63;
	int16_t x387 = 4142;
	int32_t x388 = INT32_MAX;
	volatile int32_t t72 = INT32_MAX;

    t72 = ((x385*x386)+(x387|x388));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x395 = 4958258008969LLU;
	uint16_t x396 = 2383U;
	uint64_t t73 = 30625500182LLU;

    t73 = ((x393*x394)+(x395|x396));

    if (t73 != 4958258010832LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x402 = INT64_MIN;
	uint64_t x403 = UINT64_MAX;
	uint64_t t74 = 1527945257LLU;

    t74 = ((x401*x402)+(x403|x404));

    if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x409 = -1LL;
	uint8_t x410 = 5U;
	volatile int8_t x411 = -1;
	uint16_t x412 = 6578U;
	int64_t t75 = -125LL;

    t75 = ((x409*x410)+(x411|x412));

    if (t75 != -6LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x417 = INT16_MAX;
	uint32_t x418 = UINT32_MAX;
	uint16_t x420 = UINT16_MAX;

    t76 = ((x417*x418)+(x419|x420));

    if (t76 != 2147450880U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x421 = INT8_MIN;
	uint32_t x422 = UINT32_MAX;
	uint32_t x424 = 28585030U;

    t77 = ((x421*x422)+(x423|x424));

    if (t77 != 4294967134U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x429 = -1LL;
	uint8_t x430 = 2U;
	volatile uint64_t x431 = 3683003529839711875LLU;
	int32_t x432 = -11;
	volatile uint64_t t78 = 3615171285283338LLU;

    t78 = ((x429*x430)+(x431|x432));

    if (t78 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x434 = -1;
	int64_t x435 = INT64_MIN;
	int64_t t79 = -94363470279082601LL;

    t79 = ((x433*x434)+(x435|x436));

    if (t79 != -2176572098283LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	volatile int8_t x440 = INT8_MIN;
	volatile int32_t t80 = 23;

    t80 = ((x437*x438)+(x439|x440));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x441 = -1;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MIN;
	int16_t x444 = -1;
	volatile int64_t t81 = -3218216871453423540LL;

    t81 = ((x441*x442)+(x443|x444));

    if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x445 = UINT64_MAX;
	uint8_t x446 = 11U;
	static volatile uint64_t x447 = UINT64_MAX;
	uint64_t t82 = 3673575LLU;

    t82 = ((x445*x446)+(x447|x448));

    if (t82 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x453 = UINT32_MAX;
	uint64_t x455 = UINT64_MAX;
	uint64_t x456 = 127LLU;
	volatile uint64_t t83 = 25082055425LLU;

    t83 = ((x453*x454)+(x455|x456));

    if (t83 != 3153LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x457 = -1;
	static uint8_t x458 = UINT8_MAX;
	volatile int32_t x459 = -115;
	volatile uint16_t x460 = UINT16_MAX;
	volatile int32_t t84 = 1;

    t84 = ((x457*x458)+(x459|x460));

    if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x461 = INT16_MIN;
	volatile uint64_t x462 = 227966943LLU;
	uint16_t x463 = 1072U;
	uint32_t x464 = 56880U;
	uint64_t t85 = 407LLU;

    t85 = ((x461*x462)+(x463|x464));

    if (t85 != 18446736603688820272LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x465 = 39949LLU;
	int16_t x466 = 301;
	volatile int64_t x467 = INT64_MAX;
	int32_t x468 = INT32_MIN;
	static volatile uint64_t t86 = 371919503LLU;

    t86 = ((x465*x466)+(x467|x468));

    if (t86 != 12024648LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x477 = -195160031;
	uint8_t x478 = 2U;
	uint64_t x479 = 158104LLU;
	volatile uint64_t t87 = 4344069177420919623LLU;

    t87 = ((x477*x478)+(x479|x480));

    if (t87 != 18446744073319389658LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x481 = UINT64_MAX;
	uint64_t x482 = 3043193LLU;
	static int64_t x483 = INT64_MIN;
	uint32_t x484 = UINT32_MAX;
	static uint64_t t88 = 395497LLU;

    t88 = ((x481*x482)+(x483|x484));

    if (t88 != 9223372041146699910LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x489 = UINT16_MAX;
	volatile int8_t x490 = -23;
	uint64_t x492 = 8941723188139140205LLU;
	volatile uint64_t t89 = 64735LLU;

    t89 = ((x489*x490)+(x491|x492));

    if (t89 != 8941723191276535830LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x493 = INT16_MIN;
	volatile int8_t x494 = INT8_MAX;
	volatile uint16_t x495 = 0U;
	uint32_t x496 = UINT32_MAX;
	uint32_t t90 = 773911U;

    t90 = ((x493*x494)+(x495|x496));

    if (t90 != 4290805759U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x513 = -63;
	int8_t x514 = INT8_MAX;
	int64_t x515 = INT64_MIN;
	int8_t x516 = -1;

    t91 = ((x513*x514)+(x515|x516));

    if (t91 != -8002LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x518 = INT8_MIN;
	int8_t x519 = -46;
	volatile uint64_t t92 = 3194153615932681LLU;

    t92 = ((x517*x518)+(x519|x520));

    if (t92 != 18446744072795089791LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x525 = -1LL;
	static uint16_t x526 = 3346U;
	static int64_t x527 = INT64_MAX;
	int32_t x528 = INT32_MIN;
	volatile int64_t t93 = -123298627LL;

    t93 = ((x525*x526)+(x527|x528));

    if (t93 != -3347LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x530 = 6LL;
	static uint32_t x531 = 290910776U;
	int64_t x532 = 80945889685LL;
	int64_t t94 = 104071413897407878LL;

    t94 = ((x529*x530)+(x531|x532));

    if (t94 != 80964155063LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x534 = 7058U;
	int32_t x535 = INT32_MIN;
	uint64_t x536 = 13860906594547LLU;
	uint64_t t95 = 97448893628193374LLU;

    t95 = ((x533*x534)+(x535|x536));

    if (t95 != 18446744072603530749LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x537 = -35LL;
	uint8_t x538 = UINT8_MAX;
	int32_t x540 = INT32_MIN;
	volatile int64_t t96 = -34003569022871LL;

    t96 = ((x537*x538)+(x539|x540));

    if (t96 != -2147492567LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x541 = 11U;
	static uint8_t x542 = 12U;
	int16_t x543 = INT16_MIN;
	volatile int16_t x544 = INT16_MIN;

    t97 = ((x541*x542)+(x543|x544));

    if (t97 != -32636) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x553 = 60704012637447733LLU;
	volatile uint64_t x554 = 1626LLU;
	int32_t x555 = INT32_MIN;

    t98 = ((x553*x554)+(x555|x556));

    if (t98 != 6471004179942255777LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x557 = 1;

    t99 = ((x557*x558)+(x559|x560));

    if (t99 != 6142LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x565 = -73740;
	static uint64_t x566 = 31160878991780533LLU;
	int32_t x567 = -469277629;
	int64_t x568 = -356992555285LL;
	uint64_t t100 = 1LLU;

    t100 = ((x565*x566)+(x567|x568));

    if (t100 != 8039792359354418799LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x572 = -1LL;

    t101 = ((x569*x570)+(x571|x572));

    if (t101 != 1051993238537594485LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x576 = INT32_MIN;

    t102 = ((x573*x574)+(x575|x576));

    if (t102 != 4291896593U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x581 = 19983076LLU;
	static int8_t x582 = 7;
	int16_t x584 = -3;
	static volatile uint64_t t103 = 268LLU;

    t103 = ((x581*x582)+(x583|x584));

    if (t103 != 139881531LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x587 = INT64_MIN;
	static volatile int64_t x588 = INT64_MIN;

    t104 = ((x585*x586)+(x587|x588));

    if (t104 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x589 = -125LL;
	int32_t x591 = INT32_MAX;
	int64_t x592 = -3000127507LL;
	static int64_t t105 = -240LL;

    t105 = ((x589*x590)+(x591|x592));

    if (t105 != -2126645774LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x593 = 1;
	static int8_t x594 = 58;
	int8_t x595 = INT8_MAX;
	int32_t t106 = -1910;

    t106 = ((x593*x594)+(x595|x596));

    if (t106 != 185) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x601 = 1U;
	int64_t x603 = 166334463201LL;
	static volatile int32_t x604 = INT32_MIN;
	volatile int64_t t107 = -754240958240469604LL;

    t107 = ((x601*x602)+(x603|x604));

    if (t107 != -1169273389LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x605 = 50;
	static uint32_t x607 = UINT32_MAX;
	int64_t x608 = 4217972963LL;
	volatile int64_t t108 = 262064LL;

    t108 = ((x605*x606)+(x607|x608));

    if (t108 != 4294967945LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x609 = UINT32_MAX;
	int32_t x612 = -554442002;
	uint32_t t109 = 130U;

    t109 = ((x609*x610)+(x611|x612));

    if (t109 != 3738645250U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x617 = UINT32_MAX;
	int16_t x620 = 0;
	uint64_t t110 = 18018745302411444LLU;

    t110 = ((x617*x618)+(x619|x620));

    if (t110 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x621 = 22735484U;
	int8_t x622 = INT8_MIN;
	int8_t x623 = 2;
	static int8_t x624 = INT8_MAX;

    t111 = ((x621*x622)+(x623|x624));

    if (t111 != 1384825471U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x629 = -1;
	uint64_t x630 = 6552888753LLU;
	uint64_t t112 = 1338910795550LLU;

    t112 = ((x629*x630)+(x631|x632));

    if (t112 != 18446744067156662862LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x633 = 1594193U;
	int8_t x634 = 10;
	uint32_t x635 = UINT32_MAX;
	volatile int8_t x636 = -1;
	uint32_t t113 = 720925U;

    t113 = ((x633*x634)+(x635|x636));

    if (t113 != 15941929U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x638 = INT16_MIN;
	int8_t x639 = INT8_MIN;
	static int64_t x640 = INT64_MIN;
	int64_t t114 = -85LL;

    t114 = ((x637*x638)+(x639|x640));

    if (t114 != -210043008LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x654 = 297323U;
	int32_t x655 = -124408364;
	static int64_t x656 = INT64_MIN;
	volatile int64_t t115 = 924LL;

    t115 = ((x653*x654)+(x655|x656));

    if (t115 != 2022777961LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x657 = -1630866397LL;
	volatile uint8_t x659 = 7U;
	int16_t x660 = 10;
	volatile int64_t t116 = 258924449405153LL;

    t116 = ((x657*x658)+(x659|x660));

    if (t116 != 15LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x661 = -6;
	uint16_t x664 = UINT16_MAX;
	volatile int64_t t117 = 235988953LL;

    t117 = ((x661*x662)+(x663|x664));

    if (t117 != -9223372032559743037LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x665 = -1;
	static uint8_t x666 = UINT8_MAX;
	int16_t x667 = INT16_MAX;
	static int8_t x668 = -2;
	static volatile int32_t t118 = -15873;

    t118 = ((x665*x666)+(x667|x668));

    if (t118 != -256) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x669 = -471585736546643LL;
	int64_t x672 = 1225LL;
	static volatile int64_t t119 = 2695688865641224191LL;

    t119 = ((x669*x670)+(x671|x672));

    if (t119 != 471585736546588LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x673 = -21;
	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MAX;
	int16_t x676 = INT16_MIN;
	static uint64_t t120 = 5528LLU;

    t120 = ((x673*x674)+(x675|x676));

    if (t120 != 18446744073709518996LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x677 = 1581430683024933LL;
	int32_t x680 = INT32_MIN;

    t121 = ((x677*x678)+(x679|x680));

    if (t121 != -1581432830508581LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x681 = -1;
	uint8_t x683 = 52U;

    t122 = ((x681*x682)+(x683|x684));

    if (t122 != -1089411) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x685 = 2161;
	static int8_t x688 = -1;
	int32_t t123 = 181002480;

    t123 = ((x685*x686)+(x687|x688));

    if (t123 != 12965) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x690 = INT8_MIN;
	uint16_t x691 = 19266U;
	uint32_t x692 = UINT32_MAX;
	volatile uint32_t t124 = 11U;

    t124 = ((x689*x690)+(x691|x692));

    if (t124 != 5887U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x693 = -1;
	uint64_t x694 = 80803505751LLU;
	int64_t x695 = -2014LL;
	static int64_t x696 = INT64_MIN;
	volatile uint64_t t125 = 135692755621477LLU;

    t125 = ((x693*x694)+(x695|x696));

    if (t125 != 18446743992906043851LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x697 = UINT16_MAX;
	uint32_t x698 = 6U;
	int8_t x699 = 3;
	static uint32_t t126 = 63U;

    t126 = ((x697*x698)+(x699|x700));

    if (t126 != 401285U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x701 = 22U;
	volatile uint16_t x702 = 1721U;
	static int16_t x703 = INT16_MIN;
	volatile int8_t x704 = INT8_MIN;
	int32_t t127 = -1136204;

    t127 = ((x701*x702)+(x703|x704));

    if (t127 != 37734) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x705 = -1;
	volatile int32_t x706 = -1;
	static uint16_t x708 = 15U;

    t128 = ((x705*x706)+(x707|x708));

    if (t128 != 16LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x709 = 3998LLU;
	int32_t x710 = -5;
	int8_t x711 = INT8_MAX;
	uint16_t x712 = UINT16_MAX;
	volatile uint64_t t129 = 8919716375922742LLU;

    t129 = ((x709*x710)+(x711|x712));

    if (t129 != 45545LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x718 = -398875872LL;
	int8_t x719 = INT8_MIN;
	int64_t t130 = -203926446538266LL;

    t130 = ((x717*x718)+(x719|x720));

    if (t130 != 398875744LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x721 = 1;
	int8_t x722 = -1;
	int16_t x723 = INT16_MIN;
	volatile int8_t x724 = INT8_MAX;
	int32_t t131 = 77847822;

    t131 = ((x721*x722)+(x723|x724));

    if (t131 != -32642) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x737 = INT16_MIN;
	int64_t x740 = INT64_MIN;
	int64_t t132 = 322763707002LL;

    t132 = ((x737*x738)+(x739|x740));

    if (t132 != 1390313472LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x745 = 1U;
	int16_t x746 = INT16_MAX;
	volatile int16_t x747 = INT16_MAX;

    t133 = ((x745*x746)+(x747|x748));

    if (t133 != 65534U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x753 = 1U;
	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MAX;
	int16_t x756 = 1572;
	volatile int32_t t134 = 43257;

    t134 = ((x753*x754)+(x755|x756));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x757 = 91887978U;
	int8_t x758 = -15;
	int32_t x759 = -108586;
	uint16_t x760 = 0U;
	volatile uint32_t t135 = 429U;

    t135 = ((x757*x758)+(x759|x760));

    if (t135 != 2916539040U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x762 = 20U;
	uint16_t x764 = 5101U;
	int32_t t136 = -982057;

    t136 = ((x761*x762)+(x763|x764));

    if (t136 != 17897) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x765 = -1;
	uint16_t x766 = 20636U;
	int8_t x767 = INT8_MIN;
	volatile int32_t t137 = -211339663;

    t137 = ((x765*x766)+(x767|x768));

    if (t137 != -20707) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x774 = -303905601LL;
	static uint16_t x775 = 27590U;
	int32_t x776 = 47612002;
	static volatile int64_t t138 = 3LL;

    t138 = ((x773*x774)+(x775|x776));

    if (t138 != -1305264617014679769LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x781 = 2U;
	volatile uint64_t x782 = 15571278093LLU;
	int8_t x783 = INT8_MIN;
	volatile int16_t x784 = -1;
	uint64_t t139 = 45640901LLU;

    t139 = ((x781*x782)+(x783|x784));

    if (t139 != 31142556185LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x785 = INT64_MAX;
	volatile int64_t x786 = -1LL;
	int8_t x787 = INT8_MAX;
	int64_t t140 = -2553LL;

    t140 = ((x785*x786)+(x787|x788));

    if (t140 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x789 = INT64_MIN;
	volatile uint64_t x790 = UINT64_MAX;
	uint8_t x791 = UINT8_MAX;
	static int8_t x792 = INT8_MAX;
	uint64_t t141 = 7029035700505210682LLU;

    t141 = ((x789*x790)+(x791|x792));

    if (t141 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x793 = INT32_MIN;
	int64_t x794 = -65680529LL;
	static int16_t x796 = 10904;
	int64_t t142 = -1640633LL;

    t142 = ((x793*x794)+(x795|x796));

    if (t142 != 141047862019500797LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x797 = -1;
	uint64_t x798 = 3LLU;
	int8_t x800 = INT8_MAX;

    t143 = ((x797*x798)+(x799|x800));

    if (t143 != 380LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x801 = 0U;
	int16_t x802 = 73;
	int8_t x803 = -2;

    t144 = ((x801*x802)+(x803|x804));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x806 = 1160LLU;
	static uint64_t t145 = 1006927734044LLU;

    t145 = ((x805*x806)+(x807|x808));

    if (t145 != 16184294083563827094LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x809 = -511;
	volatile int32_t x811 = 61702973;
	static int8_t x812 = 20;
	int32_t t146 = -11783100;

    t146 = ((x809*x810)+(x811|x812));

    if (t146 != 61697863) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x817 = 4U;
	int8_t x818 = INT8_MIN;
	int16_t x819 = 0;
	int32_t t147 = -12;

    t147 = ((x817*x818)+(x819|x820));

    if (t147 != -33280) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x821 = 59293807U;
	int32_t x822 = INT32_MIN;
	volatile int64_t x824 = -1086514LL;
	int64_t t148 = 1264054239333LL;

    t148 = ((x821*x822)+(x823|x824));

    if (t148 != 2146402271LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x825 = 14;
	static uint16_t x826 = UINT16_MAX;
	uint16_t x827 = UINT16_MAX;
	volatile int16_t x828 = -588;
	int32_t t149 = -1;

    t149 = ((x825*x826)+(x827|x828));

    if (t149 != 917489) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x837 = 11U;
	static uint8_t x838 = 13U;
	int32_t x839 = INT32_MIN;
	static int16_t x840 = -1;
	static volatile int32_t t150 = -1872;

    t150 = ((x837*x838)+(x839|x840));

    if (t150 != 142) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x841 = 10U;
	uint32_t x842 = 6U;
	static int32_t x844 = INT32_MIN;
	volatile int64_t t151 = 4LL;

    t151 = ((x841*x842)+(x843|x844));

    if (t151 != -2146753073LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x853 = UINT64_MAX;
	volatile int8_t x854 = 1;
	int8_t x855 = INT8_MIN;
	uint8_t x856 = 0U;
	uint64_t t152 = 281LLU;

    t152 = ((x853*x854)+(x855|x856));

    if (t152 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x865 = -813;
	int8_t x866 = 39;
	uint64_t x867 = 423LLU;
	volatile uint64_t t153 = 7430564450964399LLU;

    t153 = ((x865*x866)+(x867|x868));

    if (t153 != 18446744073709519908LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x877 = UINT64_MAX;
	volatile int64_t x878 = INT64_MIN;
	int32_t x879 = -9870;
	volatile int16_t x880 = -1621;

    t154 = ((x877*x878)+(x879|x880));

    if (t154 != 9223372036854774267LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x885 = 10LLU;
	volatile int64_t x888 = -1LL;
	static volatile uint64_t t155 = 4065LLU;

    t155 = ((x885*x886)+(x887|x888));

    if (t155 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x889 = 31;
	static int8_t x890 = 0;
	int32_t x891 = -1;
	int16_t x892 = -470;
	int32_t t156 = -20155532;

    t156 = ((x889*x890)+(x891|x892));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x897 = 29356U;
	int16_t x898 = -1;
	int16_t x899 = 6;
	volatile int64_t x900 = 800449860631837717LL;
	static volatile int64_t t157 = 375096064LL;

    t157 = ((x897*x898)+(x899|x900));

    if (t157 != 800449860631808363LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x901 = 1;
	static int32_t x902 = -73946;
	uint8_t x903 = UINT8_MAX;
	volatile uint8_t x904 = 108U;
	static volatile int32_t t158 = -3986842;

    t158 = ((x901*x902)+(x903|x904));

    if (t158 != -73691) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x906 = UINT64_MAX;
	uint8_t x907 = 3U;

    t159 = ((x905*x906)+(x907|x908));

    if (t159 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x909 = INT32_MIN;
	uint32_t x910 = UINT32_MAX;
	static int64_t x911 = INT64_MIN;
	static int64_t t160 = -8757252200LL;

    t160 = ((x909*x910)+(x911|x912));

    if (t160 != -9223372034707292091LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x913 = INT32_MIN;
	static uint32_t x914 = UINT32_MAX;
	volatile int8_t x915 = 1;
	uint32_t x916 = 969103406U;
	volatile uint32_t t161 = 1010747U;

    t161 = ((x913*x914)+(x915|x916));

    if (t161 != 3116587055U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x918 = INT16_MIN;
	int8_t x919 = INT8_MIN;
	static uint64_t x920 = UINT64_MAX;
	static uint64_t t162 = 32329389696341739LLU;

    t162 = ((x917*x918)+(x919|x920));

    if (t162 != 1572863LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x921 = UINT16_MAX;
	volatile int16_t x923 = -1;
	static int8_t x924 = INT8_MAX;
	int64_t t163 = 61387752367615LL;

    t163 = ((x921*x922)+(x923|x924));

    if (t163 != -65536LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x926 = INT32_MAX;
	volatile int32_t x927 = -1;
	volatile int64_t x928 = -374LL;
	volatile int64_t t164 = 2161942LL;

    t164 = ((x925*x926)+(x927|x928));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x933 = INT16_MAX;
	int16_t x934 = 30;
	int32_t x936 = 943;

    t165 = ((x933*x934)+(x935|x936));

    if (t165 != 984017) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x937 = 28LLU;
	uint8_t x938 = 1U;
	int16_t x939 = INT16_MIN;
	int16_t x940 = -222;
	volatile uint64_t t166 = 705233195847317423LLU;

    t166 = ((x937*x938)+(x939|x940));

    if (t166 != 18446744073709551422LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x941 = -55396LL;
	static uint8_t x942 = 21U;
	volatile int16_t x943 = INT16_MIN;
	int16_t x944 = -1;
	static int64_t t167 = -1069041835LL;

    t167 = ((x941*x942)+(x943|x944));

    if (t167 != -1163317LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x945 = INT8_MIN;
	static uint64_t x946 = 765747559362LLU;
	int8_t x947 = -55;
	volatile int64_t x948 = INT64_MIN;

    t168 = ((x945*x946)+(x947|x948));

    if (t168 != 18446646058021953225LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x949 = -1;
	volatile uint8_t x950 = 21U;
	int16_t x951 = INT16_MAX;
	static uint8_t x952 = 12U;
	static int32_t t169 = -1;

    t169 = ((x949*x950)+(x951|x952));

    if (t169 != 32746) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x956 = 16U;
	static volatile int64_t t170 = -28LL;

    t170 = ((x953*x954)+(x955|x956));

    if (t170 != -9223372036854775537LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x961 = -1;
	uint8_t x962 = 2U;
	int16_t x963 = -7536;
	int16_t x964 = -1;
	static int32_t t171 = 953452;

    t171 = ((x961*x962)+(x963|x964));

    if (t171 != -3) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x966 = -7908LL;
	int8_t x967 = -1;
	int8_t x968 = 29;
	volatile int64_t t172 = -91LL;

    t172 = ((x965*x966)+(x967|x968));

    if (t172 != 234440567LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x977 = -6;
	int16_t x979 = -1;
	uint8_t x980 = 3U;

    t173 = ((x977*x978)+(x979|x980));

    if (t173 != -393211) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x985 = 1;
	volatile uint32_t x986 = 990336U;
	static uint64_t x988 = 1029693LLU;
	volatile uint64_t t174 = 104694166LLU;

    t174 = ((x985*x986)+(x987|x988));

    if (t174 != 2020029LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1002 = INT8_MIN;
	uint32_t x1003 = 2705U;
	uint32_t x1004 = UINT32_MAX;
	volatile uint32_t t175 = 15U;

    t175 = ((x1001*x1002)+(x1003|x1004));

    if (t175 != 4294934655U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1005 = 83454057884620LL;
	uint8_t x1006 = 68U;
	volatile int64_t x1007 = INT64_MIN;
	static int32_t x1008 = INT32_MIN;

    t176 = ((x1005*x1006)+(x1007|x1008));

    if (t176 != 5674873788670512LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1009 = 57U;
	uint32_t x1010 = 1894U;
	int16_t x1011 = INT16_MIN;
	volatile uint64_t x1012 = UINT64_MAX;
	uint64_t t177 = 131535338LLU;

    t177 = ((x1009*x1010)+(x1011|x1012));

    if (t177 != 107957LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1014 = UINT8_MAX;
	uint64_t x1015 = 1023456LLU;
	volatile int32_t x1016 = INT32_MIN;
	uint64_t t178 = 229800809637207095LLU;

    t178 = ((x1013*x1014)+(x1015|x1016));

    if (t178 != 18446744071563274004LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x1017 = INT8_MIN;
	uint16_t x1018 = 176U;
	static uint64_t x1019 = UINT64_MAX;
	int8_t x1020 = -21;
	uint64_t t179 = 66390008847596LLU;

    t179 = ((x1017*x1018)+(x1019|x1020));

    if (t179 != 18446744073709529087LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1021 = -1LL;
	uint8_t x1022 = UINT8_MAX;
	uint16_t x1023 = 1512U;
	int32_t x1024 = INT32_MAX;
	volatile int64_t t180 = -132625684420LL;

    t180 = ((x1021*x1022)+(x1023|x1024));

    if (t180 != 2147483392LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1026 = -1;
	static int8_t x1027 = INT8_MIN;
	int64_t x1028 = -1LL;
	volatile uint64_t t181 = 1LLU;

    t181 = ((x1025*x1026)+(x1027|x1028));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1029 = 25U;
	int8_t x1031 = INT8_MAX;
	int8_t x1032 = 14;
	uint32_t t182 = 426536745U;

    t182 = ((x1029*x1030)+(x1031|x1032));

    if (t182 != 102U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1033 = INT8_MIN;
	uint16_t x1034 = UINT16_MAX;
	uint32_t x1035 = UINT32_MAX;
	int64_t t183 = 1LL;

    t183 = ((x1033*x1034)+(x1035|x1036));

    if (t183 != -8388481LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1037 = -1;
	volatile uint64_t t184 = 11373469702635147LLU;

    t184 = ((x1037*x1038)+(x1039|x1040));

    if (t184 != 3005LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1042 = UINT16_MAX;
	uint8_t x1043 = UINT8_MAX;
	int64_t t185 = 10652110119953LL;

    t185 = ((x1041*x1042)+(x1043|x1044));

    if (t185 != -9223372034707390208LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1045 = 103U;
	int8_t x1046 = INT8_MIN;
	uint32_t x1047 = UINT32_MAX;

    t186 = ((x1045*x1046)+(x1047|x1048));

    if (t186 != 4294954111U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1057 = 17U;
	int32_t x1058 = 1544687;
	int8_t x1060 = INT8_MAX;

    t187 = ((x1057*x1058)+(x1059|x1060));

    if (t187 != 26325214) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1061 = -1;
	static uint64_t x1063 = 975LLU;
	uint64_t x1064 = 7813965LLU;

    t188 = ((x1061*x1062)+(x1063|x1064));

    if (t188 != 7814084LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1065 = UINT64_MAX;
	int32_t x1066 = -1;
	uint16_t x1067 = 17558U;
	int8_t x1068 = -1;

    t189 = ((x1065*x1066)+(x1067|x1068));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1069 = 6578;
	static uint64_t x1072 = 3874283547753019LLU;

    t190 = ((x1069*x1070)+(x1071|x1072));

    if (t190 != 18446744073438023519LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1073 = 27500LLU;
	int64_t x1074 = -25615642817944LL;
	int64_t x1075 = INT64_MAX;
	volatile uint8_t x1076 = UINT8_MAX;
	uint64_t t191 = 22270320LLU;

    t191 = ((x1073*x1074)+(x1075|x1076));

    if (t191 != 8518941859361315807LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1081 = -1;
	volatile int64_t t192 = 14040029135817LL;

    t192 = ((x1081*x1082)+(x1083|x1084));

    if (t192 != -3262584509202432LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1085 = INT32_MIN;
	volatile uint32_t x1086 = UINT32_MAX;
	volatile int64_t x1087 = INT64_MIN;
	int32_t x1088 = -1065628006;
	int64_t t193 = 562559295014626911LL;

    t193 = ((x1085*x1086)+(x1087|x1088));

    if (t193 != 1081855642LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1089 = INT16_MIN;
	static int32_t x1091 = -86471;
	uint8_t x1092 = 1U;

    t194 = ((x1089*x1090)+(x1091|x1092));

    if (t194 != 4107833) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1093 = UINT64_MAX;
	volatile int16_t x1094 = INT16_MIN;
	int8_t x1096 = INT8_MAX;
	volatile uint64_t t195 = 1570LLU;

    t195 = ((x1093*x1094)+(x1095|x1096));

    if (t195 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1102 = INT16_MIN;
	int32_t x1103 = INT32_MIN;
	int16_t x1104 = INT16_MAX;
	static volatile uint64_t t196 = 89LLU;

    t196 = ((x1101*x1102)+(x1103|x1104));

    if (t196 != 18446744071562002431LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1105 = -1LL;
	int8_t x1106 = INT8_MAX;
	uint64_t x1107 = 405918935861756525LLU;
	int32_t x1108 = -12890688;

    t197 = ((x1105*x1106)+(x1107|x1108));

    if (t197 != 18446744073705312110LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1111 = INT64_MIN;
	int64_t t198 = 118113937LL;

    t198 = ((x1109*x1110)+(x1111|x1112));

    if (t198 != -9223372036854483262LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1113 = -7;
	int64_t x1115 = INT64_MAX;
	volatile int8_t x1116 = INT8_MIN;
	static volatile int64_t t199 = 1060581687LL;

    t199 = ((x1113*x1114)+(x1115|x1116));

    if (t199 != 237LL) { NG(); } else { ; }
	
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

