
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

static uint16_t x5 = 2U;
int32_t t0 = 1110;
volatile int8_t x11 = 1;
int32_t t2 = 3563;
int16_t x30 = INT16_MIN;
int32_t x34 = 1;
int32_t t4 = -2148;
static int32_t x45 = INT32_MIN;
int64_t t6 = -494389241250203LL;
uint64_t x50 = 30145768208762LLU;
int32_t x61 = INT32_MIN;
static int64_t x63 = INT64_MIN;
volatile int32_t x69 = -2697891;
int64_t t11 = -462705409295856013LL;
volatile uint8_t x78 = UINT8_MAX;
int64_t x80 = 499567884325603LL;
volatile int8_t x88 = -2;
volatile uint32_t t13 = 15U;
volatile int8_t x93 = 18;
int8_t x96 = -7;
int8_t x99 = -14;
volatile int32_t t17 = 77908;
uint8_t x111 = UINT8_MAX;
uint64_t x112 = 155188050LLU;
int8_t x114 = -1;
int8_t x120 = -1;
static int32_t x122 = INT32_MAX;
int64_t x123 = INT64_MIN;
uint16_t x127 = UINT16_MAX;
int32_t t22 = 34962;
int16_t x135 = -1;
int8_t x142 = INT8_MIN;
int64_t x143 = INT64_MIN;
volatile int8_t x175 = INT8_MIN;
int16_t x186 = 1828;
uint64_t t32 = 1928443551002LLU;
volatile int64_t t35 = -6894414069683LL;
static int8_t x205 = -2;
int32_t x211 = INT32_MAX;
int64_t x214 = -1LL;
volatile int8_t x216 = 1;
volatile uint8_t x222 = 0U;
volatile int64_t t39 = 28889358867936LL;
int8_t x227 = INT8_MAX;
volatile uint32_t x265 = 863U;
uint64_t x267 = UINT64_MAX;
volatile int8_t x271 = INT8_MIN;
int8_t x272 = INT8_MAX;
int32_t x277 = -1387499;
uint32_t x280 = 68579U;
static uint32_t x282 = UINT32_MAX;
volatile int8_t x283 = -1;
int8_t x296 = INT8_MIN;
int16_t x297 = INT16_MIN;
int64_t t51 = -1870LL;
int32_t x302 = -1;
int64_t t53 = -430LL;
static int32_t x314 = INT32_MIN;
int32_t x329 = -4978357;
int16_t x330 = -1;
int8_t x334 = INT8_MIN;
static volatile int8_t x335 = INT8_MAX;
int16_t x336 = -1;
int16_t x341 = -1;
int64_t x342 = INT64_MIN;
uint8_t x343 = 6U;
volatile int64_t t60 = -35203544460LL;
int8_t x356 = 1;
int8_t x357 = 13;
uint8_t x382 = 1U;
static uint16_t x383 = UINT16_MAX;
int32_t t67 = -1084;
static int8_t x388 = INT8_MIN;
static uint32_t x393 = 1034812463U;
static volatile int64_t x398 = INT64_MIN;
uint64_t x404 = 42LLU;
static uint64_t t72 = 9744720904LLU;
static int32_t x406 = INT32_MIN;
volatile int64_t x410 = -1LL;
int64_t t74 = -67159484857869LL;
int8_t x416 = INT8_MIN;
static volatile int64_t t75 = -383793336LL;
int64_t x417 = INT64_MAX;
static int16_t x419 = -2636;
volatile int64_t t76 = -304198278446395636LL;
volatile uint32_t x423 = 545393U;
static uint32_t x430 = 452009167U;
int16_t x439 = -1;
static uint8_t x448 = 88U;
int64_t x456 = INT64_MIN;
uint16_t x471 = 13U;
volatile uint64_t t86 = 26LLU;
static int64_t x478 = INT64_MIN;
int8_t x487 = INT8_MIN;
uint64_t t92 = 9190839749925442LLU;
int16_t x504 = -1;
static int16_t x516 = INT16_MIN;
static int8_t x522 = INT8_MIN;
uint64_t t95 = 839355LLU;
uint8_t x528 = 10U;
int16_t x530 = -1;
static uint64_t t97 = UINT64_MAX;
int64_t x533 = INT64_MIN;
uint16_t x538 = 30008U;
uint64_t x548 = 1816LLU;
int32_t x552 = 0;
static int64_t t101 = 22280419118074LL;
volatile int8_t x556 = INT8_MIN;
int32_t t102 = -1396;
int8_t x562 = INT8_MIN;
int16_t x566 = INT16_MIN;
int16_t x574 = INT16_MIN;
static volatile uint32_t t110 = 1U;
uint64_t x596 = UINT64_MAX;
int64_t x611 = INT64_MIN;
int64_t x617 = -1LL;
static volatile int16_t x630 = INT16_MIN;
uint8_t x634 = UINT8_MAX;
int8_t x643 = INT8_MIN;
int8_t x645 = -3;
static int8_t x650 = INT8_MIN;
uint16_t x652 = 56U;
int16_t x656 = INT16_MIN;
uint32_t x659 = 335U;
int8_t x663 = INT8_MAX;
int16_t x678 = INT16_MIN;
uint32_t x690 = 105935720U;
int8_t x719 = -1;
volatile uint16_t x725 = UINT16_MAX;
volatile int64_t t133 = -1915258530LL;
int16_t x730 = INT16_MAX;
int32_t x737 = -51229;
int32_t x741 = -1427760;
int16_t x744 = -12632;
int32_t t137 = -243;
volatile int32_t x750 = -884172985;
static int8_t x751 = -1;
volatile int16_t x754 = 191;
volatile int64_t t139 = 31110282537823LL;
volatile int64_t t142 = 1LL;
int16_t x771 = -1;
uint64_t t143 = 3277719LLU;
int16_t x773 = -1;
int64_t x778 = -3492083LL;
volatile uint64_t t145 = 0LLU;
static int32_t x782 = 3164;
static volatile int32_t t146 = -23098600;
int32_t x790 = -1;
int16_t x792 = -6165;
static uint32_t t151 = 14U;
int16_t x809 = -204;
uint8_t x819 = UINT8_MAX;
static volatile int16_t x838 = INT16_MIN;
static volatile int8_t x840 = -58;
int32_t x841 = INT32_MIN;
volatile int32_t x852 = -1;
int64_t t159 = 696524568177780LL;
int64_t x854 = INT64_MAX;
int16_t x859 = -1;
volatile uint32_t x860 = 901841U;
int64_t x862 = INT64_MIN;
int8_t x881 = INT8_MIN;
int64_t x884 = -426096352480667864LL;
static int16_t x887 = INT16_MAX;
static uint64_t t168 = 195999387445232LLU;
int16_t x897 = INT16_MAX;
volatile uint64_t t169 = 21753937530756LLU;
static int8_t x915 = -1;
volatile uint16_t x919 = 317U;
uint32_t x921 = UINT32_MAX;
uint32_t x922 = 1U;
int32_t x924 = -1824;
int32_t x928 = -1;
static int32_t x934 = INT32_MAX;
uint32_t x939 = 465676602U;
uint16_t x945 = 24687U;
int8_t x952 = -1;
volatile int8_t x963 = -1;
int32_t t182 = -1;
volatile uint32_t x968 = UINT32_MAX;
int8_t x970 = 0;
uint8_t x974 = UINT8_MAX;
volatile uint32_t x975 = 1074617988U;
uint8_t x978 = 5U;
int32_t x989 = INT32_MIN;
int64_t x991 = INT64_MAX;
uint64_t x992 = UINT64_MAX;
int64_t t188 = -1137960842170LL;
int8_t x1001 = -8;
static uint64_t t190 = 35280543748371LLU;
uint32_t t192 = 158426U;
int64_t x1022 = INT64_MIN;
int64_t x1023 = -934075587895860LL;
int64_t t193 = -7254237102011236LL;
int16_t x1027 = -6850;
uint32_t t194 = 2U;
int16_t x1032 = -1;
uint32_t x1036 = UINT32_MAX;
int64_t x1038 = 0LL;
uint64_t t197 = 2834444323955LLU;
volatile int64_t t198 = 14468293731129LL;
uint32_t x1049 = UINT32_MAX;
int64_t x1050 = -1LL;


void f0(void) {
    	int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	uint16_t x8 = UINT16_MAX;

    t0 = ((x5|x6)-(x7*x8));

    if (t0 != -16711426) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -4;
	int64_t x10 = INT64_MIN;
	int32_t x12 = -404602556;
	int64_t t1 = 3912980789LL;

    t1 = ((x9|x10)-(x11*x12));

    if (t1 != 404602552LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x25 = 233;
	static int32_t x26 = 13925685;
	int16_t x27 = -10;
	int32_t x28 = -15700;

    t2 = ((x25|x26)-(x27*x28));

    if (t2 != 13768885) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x29 = 1373528242U;
	volatile uint32_t x31 = UINT32_MAX;
	int32_t x32 = -3464855;
	volatile uint32_t t3 = 53810U;

    t3 = ((x29|x30)-(x31*x32));

    if (t3 != 4291494427U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x33 = -93987;
	static volatile uint8_t x35 = 3U;
	int16_t x36 = -1;

    t4 = ((x33|x34)-(x35*x36));

    if (t4 != -93984) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = INT8_MIN;
	uint16_t x38 = UINT16_MAX;
	volatile uint32_t x39 = 46259U;
	int64_t x40 = -5LL;
	int64_t t5 = 354976096191365086LL;

    t5 = ((x37|x38)-(x39*x40));

    if (t5 != 231294LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x46 = 75LL;
	uint8_t x47 = 64U;
	int16_t x48 = -337;

    t6 = ((x45|x46)-(x47*x48));

    if (t6 != -2147462005LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x49 = 7072;
	uint32_t x51 = 95U;
	int32_t x52 = 3838;
	volatile uint64_t t7 = 101717425LLU;

    t7 = ((x49|x50)-(x51*x52));

    if (t7 != 30145767844792LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x53 = -14;
	uint8_t x54 = 2U;
	volatile int32_t x55 = -1;
	volatile int32_t x56 = -1;
	int32_t t8 = 3;

    t8 = ((x53|x54)-(x55*x56));

    if (t8 != -15) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x57 = 1;
	static volatile int8_t x58 = 28;
	static int64_t x59 = -1LL;
	static int8_t x60 = INT8_MIN;
	int64_t t9 = 218704082956319LL;

    t9 = ((x57|x58)-(x59*x60));

    if (t9 != -99LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x62 = -36215;
	uint64_t x64 = 181308400876102LLU;
	static uint64_t t10 = 155LLU;

    t10 = ((x61|x62)-(x63*x64));

    if (t10 != 18446744073709515401LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x70 = -3310171199268948987LL;
	uint16_t x71 = UINT16_MAX;
	int64_t x72 = -1LL;

    t11 = ((x69|x70)-(x71*x72));

    if (t11 != -2099876LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x77 = 59750969357LLU;
	int32_t x79 = -1;
	volatile uint64_t t12 = 34963217LLU;

    t12 = ((x77|x78)-(x79*x80));

    if (t12 != 499627635295202LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x85 = 3023778;
	uint32_t x86 = 223U;
	int16_t x87 = -1;

    t13 = ((x85|x86)-(x87*x88));

    if (t13 != 3023869U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x89 = UINT16_MAX;
	volatile uint32_t x90 = 141770U;
	volatile uint64_t x91 = 3558451924514LLU;
	volatile int64_t x92 = INT64_MIN;
	static volatile uint64_t t14 = 8LLU;

    t14 = ((x89|x90)-(x91*x92));

    if (t14 != 196607LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x94 = 737114859U;
	uint8_t x95 = UINT8_MAX;
	volatile uint32_t t15 = 28U;

    t15 = ((x93|x94)-(x95*x96));

    if (t15 != 737116660U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x97 = -7141;
	static volatile int64_t x98 = INT64_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int64_t t16 = 67314280886LL;

    t16 = ((x97|x98)-(x99*x100));

    if (t16 != 910349LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x105 = INT32_MAX;
	int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	volatile uint16_t x108 = 120U;

    t17 = ((x105|x106)-(x107*x108));

    if (t17 != 15359) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x109 = 8;
	uint16_t x110 = 1416U;
	uint64_t t18 = 933053LLU;

    t18 = ((x109|x110)-(x111*x112));

    if (t18 != 18446744034136600282LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x113 = UINT8_MAX;
	int32_t x115 = 7;
	volatile int16_t x116 = -1;
	int32_t t19 = 32117;

    t19 = ((x113|x114)-(x115*x116));

    if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x117 = INT32_MIN;
	static int64_t x118 = INT64_MIN;
	static uint32_t x119 = UINT32_MAX;
	int64_t t20 = 250LL;

    t20 = ((x117|x118)-(x119*x120));

    if (t20 != -2147483649LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x121 = -1;
	uint8_t x124 = 1U;
	int64_t t21 = INT64_MAX;

    t21 = ((x121|x122)-(x123*x124));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x125 = INT8_MIN;
	volatile int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MIN;

    t22 = ((x125|x126)-(x127*x128));

    if (t22 != 8388352) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x133 = -6415;
	uint16_t x134 = 3350U;
	int32_t x136 = 3314383;
	int32_t t23 = -28;

    t23 = ((x133|x134)-(x135*x136));

    if (t23 != 3310278) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x137 = -1;
	int8_t x138 = 4;
	uint64_t x139 = 499497442LLU;
	volatile int32_t x140 = -450;
	volatile uint64_t t24 = 3LLU;

    t24 = ((x137|x138)-(x139*x140));

    if (t24 != 224773848899LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x141 = INT16_MIN;
	uint64_t x144 = 3574LLU;
	static volatile uint64_t t25 = 7LLU;

    t25 = ((x141|x142)-(x143*x144));

    if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = -30;
	int16_t x147 = -1;
	uint32_t x148 = 45U;
	uint32_t t26 = 381834U;

    t26 = ((x145|x146)-(x147*x148));

    if (t26 != 15U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = INT64_MIN;
	static int32_t x154 = 129264415;
	volatile int8_t x155 = -1;
	static volatile int16_t x156 = INT16_MIN;
	volatile int64_t t27 = 33LL;

    t27 = ((x153|x154)-(x155*x156));

    if (t27 != -9223372036725544161LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x157 = -1354LL;
	volatile uint64_t x158 = UINT64_MAX;
	uint64_t x159 = 15750113431233LLU;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t28 = 487573LLU;

    t28 = ((x157|x158)-(x159*x160));

    if (t28 != 15750113431232LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x169 = UINT16_MAX;
	volatile uint16_t x170 = 1U;
	volatile int16_t x171 = INT16_MIN;
	static int16_t x172 = -1;
	int32_t t29 = -77;

    t29 = ((x169|x170)-(x171*x172));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x173 = INT32_MAX;
	uint64_t x174 = 880189947615901745LLU;
	static int8_t x176 = INT8_MAX;
	volatile uint64_t t30 = 40399554387869714LLU;

    t30 = ((x173|x174)-(x175*x176));

    if (t30 != 880189949586980735LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x181 = 4064U;
	int32_t x182 = -1;
	int64_t x183 = -1LL;
	int64_t x184 = INT64_MAX;
	volatile int64_t t31 = 1741791701LL;

    t31 = ((x181|x182)-(x183*x184));

    if (t31 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x185 = 153037U;
	uint64_t x187 = 54139LLU;
	static int32_t x188 = INT32_MIN;

    t32 = ((x185|x186)-(x187*x188));

    if (t32 != 116262617372653LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MAX;
	static uint16_t x195 = 206U;
	static uint64_t x196 = 2717LLU;
	uint64_t t33 = 266202599639476LLU;

    t33 = ((x193|x194)-(x195*x196));

    if (t33 != 4294407593LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MAX;
	int8_t x199 = 0;
	uint64_t x200 = 27490595600305873LLU;
	uint64_t t34 = 88043040692LLU;

    t34 = ((x197|x198)-(x199*x200));

    if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MAX;
	static int64_t x204 = 419098574799LL;

    t35 = ((x201|x202)-(x203*x204));

    if (t35 != -13732603000471601LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x206 = 1U;
	int64_t x207 = -1LL;
	volatile uint64_t x208 = UINT64_MAX;
	uint64_t t36 = 174006763800LLU;

    t36 = ((x205|x206)-(x207*x208));

    if (t36 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x209 = 123U;
	static uint32_t x210 = 38144868U;
	uint8_t x212 = 1U;
	uint32_t t37 = 130947344U;

    t37 = ((x209|x210)-(x211*x212));

    if (t37 != 2185628544U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x213 = 839741659U;
	static int16_t x215 = -1;
	volatile int64_t t38 = -122652LL;

    t38 = ((x213|x214)-(x215*x216));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x221 = 4124;
	int32_t x223 = -1;
	int64_t x224 = -1LL;

    t39 = ((x221|x222)-(x223*x224));

    if (t39 != 4123LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	static uint32_t x228 = UINT32_MAX;
	volatile int64_t t40 = 61102151748465767LL;

    t40 = ((x225|x226)-(x227*x228));

    if (t40 != -4294967297LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = UINT8_MAX;
	static int64_t x231 = INT64_MIN;
	uint64_t x232 = 194216746647998157LLU;
	volatile uint64_t t41 = 5532492717907466LLU;

    t41 = ((x229|x230)-(x231*x232));

    if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x233 = -1;
	static int8_t x234 = -1;
	int64_t x235 = -1LL;
	int32_t x236 = INT32_MIN;
	volatile int64_t t42 = 156375208660LL;

    t42 = ((x233|x234)-(x235*x236));

    if (t42 != -2147483649LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = UINT64_MAX;
	volatile uint8_t x256 = 6U;
	uint64_t t43 = 3067921942593258404LLU;

    t43 = ((x253|x254)-(x255*x256));

    if (t43 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x257 = -31255;
	static uint16_t x258 = UINT16_MAX;
	static int16_t x259 = -1;
	volatile uint8_t x260 = 102U;
	volatile int32_t t44 = -17382516;

    t44 = ((x257|x258)-(x259*x260));

    if (t44 != 101) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x266 = INT64_MIN;
	static int16_t x268 = 4025;
	uint64_t t45 = 255851LLU;

    t45 = ((x265|x266)-(x267*x268));

    if (t45 != 9223372036854780696LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x269 = INT64_MIN;
	static int16_t x270 = INT16_MIN;
	int64_t t46 = 70058285333377259LL;

    t46 = ((x269|x270)-(x271*x272));

    if (t46 != -16512LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x273 = 1014804924U;
	uint32_t x274 = UINT32_MAX;
	int8_t x275 = INT8_MIN;
	volatile uint8_t x276 = 55U;
	volatile uint32_t t47 = 148889U;

    t47 = ((x273|x274)-(x275*x276));

    if (t47 != 7039U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x278 = -36659;
	static volatile uint8_t x279 = UINT8_MAX;
	uint32_t t48 = 111037438U;

    t48 = ((x277|x278)-(x279*x280));

    if (t48 != 4277476800U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x281 = 732256845935LLU;
	uint32_t x284 = UINT32_MAX;
	volatile uint64_t t49 = 1300LLU;

    t49 = ((x281|x282)-(x283*x284));

    if (t49 != 734439407614LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x293 = INT16_MIN;
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	int32_t t50 = -1;

    t50 = ((x293|x294)-(x295*x296));

    if (t50 != 8388479) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x298 = INT8_MIN;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;

    t51 = ((x297|x298)-(x299*x300));

    if (t51 != -2147483776LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x303 = 3U;
	static int8_t x304 = -3;
	int32_t t52 = -3392;

    t52 = ((x301|x302)-(x303*x304));

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x309 = 4093492LL;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MAX;
	int64_t x312 = 1301LL;

    t53 = ((x309|x310)-(x311*x312));

    if (t53 != -9223372036850847543LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x313 = -4299802945015043LL;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	int64_t t54 = 4603124172140380LL;

    t54 = ((x313|x314)-(x315*x316));

    if (t54 != -5958290564LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 0U;
	uint32_t x324 = 87629393U;
	volatile uint32_t t55 = 6U;

    t55 = ((x321|x322)-(x323*x324));

    if (t55 != 65535U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x325 = -136;
	volatile uint16_t x326 = 7U;
	int8_t x327 = INT8_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t56 = -4896;

    t56 = ((x325|x326)-(x327*x328));

    if (t56 != -32514) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x331 = INT32_MIN;
	static volatile uint64_t x332 = 59588099331560623LLU;
	volatile uint64_t t57 = 3237393014675824LLU;

    t57 = ((x329|x330)-(x331*x332));

    if (t57 != 14033157441068204031LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x333 = 0LL;
	volatile int64_t t58 = -1240944LL;

    t58 = ((x333|x334)-(x335*x336));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x337 = -1LL;
	int8_t x338 = INT8_MAX;
	static uint32_t x339 = 54041017U;
	static int16_t x340 = 88;
	int64_t t59 = 62LL;

    t59 = ((x337|x338)-(x339*x340));

    if (t59 != -460642201LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x344 = 3U;

    t60 = ((x341|x342)-(x343*x344));

    if (t60 != -19LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x349 = -13;
	volatile int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = 106844397392321226LL;
	volatile uint64_t t61 = 52093892535619LLU;

    t61 = ((x349|x350)-(x351*x352));

    if (t61 != 106844397392321225LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x353 = INT16_MAX;
	uint32_t x354 = 0U;
	uint32_t x355 = 6505063U;
	static uint32_t t62 = 111945U;

    t62 = ((x353|x354)-(x355*x356));

    if (t62 != 4288495000U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x358 = INT16_MIN;
	static int16_t x359 = -1;
	static int32_t x360 = -53;
	volatile int32_t t63 = 1149060;

    t63 = ((x357|x358)-(x359*x360));

    if (t63 != -32808) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x365 = INT16_MAX;
	static volatile uint8_t x366 = UINT8_MAX;
	uint8_t x367 = 2U;
	uint16_t x368 = 2152U;
	int32_t t64 = 890047596;

    t64 = ((x365|x366)-(x367*x368));

    if (t64 != 28463) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x373 = 154;
	int32_t x374 = INT32_MAX;
	uint64_t x375 = 87LLU;
	uint16_t x376 = UINT16_MAX;
	volatile uint64_t t65 = 123008953262LLU;

    t65 = ((x373|x374)-(x375*x376));

    if (t65 != 2141782102LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x377 = -1LL;
	int8_t x378 = INT8_MAX;
	volatile uint8_t x379 = UINT8_MAX;
	int8_t x380 = INT8_MAX;
	static int64_t t66 = -18946996175289558LL;

    t66 = ((x377|x378)-(x379*x380));

    if (t66 != -32386LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x381 = INT8_MIN;
	static uint16_t x384 = 9U;

    t67 = ((x381|x382)-(x383*x384));

    if (t67 != -589942) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x385 = 901738132934LL;
	static int64_t x386 = 82308993LL;
	static int16_t x387 = INT16_MAX;
	int64_t t68 = -207654LL;

    t68 = ((x385|x386)-(x387*x388));

    if (t68 != 901811535687LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x389 = INT8_MIN;
	volatile uint16_t x390 = UINT16_MAX;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = UINT64_MAX;
	uint64_t t69 = 33315726426LLU;

    t69 = ((x389|x390)-(x391*x392));

    if (t69 != 254LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x394 = 1U;
	uint64_t x395 = 81685039048111LLU;
	int16_t x396 = 0;
	volatile uint64_t t70 = 58862164949LLU;

    t70 = ((x393|x394)-(x395*x396));

    if (t70 != 1034812463LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x397 = 225789767472LL;
	uint32_t x399 = 17789U;
	int8_t x400 = -1;
	int64_t t71 = -123900LL;

    t71 = ((x397|x398)-(x399*x400));

    if (t71 != -9223371815359957843LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x401 = -485432586LL;
	static volatile uint64_t x402 = 582LLU;
	uint8_t x403 = 85U;

    t72 = ((x401|x402)-(x403*x404));

    if (t72 != 18446744073224115460LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x405 = -6686;
	uint32_t x407 = 3U;
	int64_t x408 = -1LL;
	int64_t t73 = -3537555LL;

    t73 = ((x405|x406)-(x407*x408));

    if (t73 != -6683LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x409 = INT16_MIN;
	uint16_t x411 = 3U;
	int32_t x412 = -3779;

    t74 = ((x409|x410)-(x411*x412));

    if (t74 != 11336LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	static int64_t x415 = -569016323370533LL;

    t75 = ((x413|x414)-(x415*x416));

    if (t75 != -72834091538911872LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x418 = INT16_MIN;
	int8_t x420 = -29;

    t76 = ((x417|x418)-(x419*x420));

    if (t76 != -76445LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x421 = INT64_MAX;
	volatile int16_t x422 = INT16_MIN;
	uint16_t x424 = UINT16_MAX;
	int64_t t77 = 155598720824LL;

    t77 = ((x421|x422)-(x423*x424));

    if (t77 != -1382591888LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x429 = 81985;
	volatile int16_t x431 = INT16_MIN;
	static int16_t x432 = INT16_MAX;
	static volatile uint32_t t78 = 117U;

    t78 = ((x429|x430)-(x431*x432));

    if (t78 != 1525734607U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x433 = INT64_MAX;
	int8_t x434 = 14;
	volatile uint64_t x435 = UINT64_MAX;
	int32_t x436 = INT32_MIN;
	uint64_t t79 = 28457LLU;

    t79 = ((x433|x434)-(x435*x436));

    if (t79 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x437 = INT16_MAX;
	int16_t x438 = -1;
	static volatile int64_t x440 = INT64_MAX;
	volatile int64_t t80 = 174848767512LL;

    t80 = ((x437|x438)-(x439*x440));

    if (t80 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x441 = -1;
	int8_t x442 = -1;
	int32_t x443 = -1;
	int64_t x444 = -1LL;
	volatile int64_t t81 = 164LL;

    t81 = ((x441|x442)-(x443*x444));

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x445 = INT8_MIN;
	static int8_t x446 = 5;
	int16_t x447 = INT16_MAX;
	int32_t t82 = 14451070;

    t82 = ((x445|x446)-(x447*x448));

    if (t82 != -2883619) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x449 = 464U;
	uint16_t x450 = 2U;
	uint16_t x451 = UINT16_MAX;
	int16_t x452 = 15939;
	volatile uint32_t t83 = 139U;

    t83 = ((x449|x450)-(x451*x452));

    if (t83 != 3250405397U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x453 = INT8_MIN;
	uint64_t x454 = 15797033200LLU;
	int8_t x455 = 1;
	uint64_t t84 = 2419LLU;

    t84 = ((x453|x454)-(x455*x456));

    if (t84 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x469 = INT16_MIN;
	int32_t x470 = INT32_MIN;
	static uint16_t x472 = 202U;
	int32_t t85 = -187636044;

    t85 = ((x469|x470)-(x471*x472));

    if (t85 != -35394) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x473 = 32;
	static int32_t x474 = INT32_MIN;
	volatile uint64_t x475 = 9579LLU;
	uint64_t x476 = 88846765851497LLU;

    t86 = ((x473|x474)-(x475*x476));

    if (t86 != 17595680901470578237LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x477 = INT32_MAX;
	volatile uint8_t x479 = 0U;
	static int16_t x480 = 934;
	int64_t t87 = 60LL;

    t87 = ((x477|x478)-(x479*x480));

    if (t87 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x481 = 24040980U;
	int8_t x482 = INT8_MIN;
	int8_t x483 = INT8_MAX;
	int8_t x484 = INT8_MIN;
	uint32_t t88 = 962645U;

    t88 = ((x481|x482)-(x483*x484));

    if (t88 != 16148U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x485 = UINT64_MAX;
	volatile uint16_t x486 = 1U;
	static uint8_t x488 = 6U;
	volatile uint64_t t89 = 77LLU;

    t89 = ((x485|x486)-(x487*x488));

    if (t89 != 767LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x489 = UINT8_MAX;
	int16_t x490 = 1;
	uint16_t x491 = 1217U;
	int16_t x492 = -209;
	static volatile int32_t t90 = -230;

    t90 = ((x489|x490)-(x491*x492));

    if (t90 != 254608) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x493 = INT16_MIN;
	uint64_t x494 = 52971111341LLU;
	volatile uint32_t x495 = 155U;
	volatile uint32_t x496 = 461992548U;
	volatile uint64_t t91 = 14LLU;

    t91 = ((x493|x494)-(x495*x496));

    if (t91 != 18446744070820151585LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x497 = INT16_MIN;
	uint64_t x498 = 10648LLU;
	static int8_t x499 = INT8_MIN;
	int16_t x500 = INT16_MAX;

    t92 = ((x497|x498)-(x499*x500));

    if (t92 != 4172056LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x501 = 226U;
	volatile uint32_t x502 = 313658U;
	volatile int8_t x503 = INT8_MAX;
	uint32_t t93 = 1166318U;

    t93 = ((x501|x502)-(x503*x504));

    if (t93 != 313977U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x513 = 1979194U;
	volatile int32_t x514 = 56;
	static uint32_t x515 = UINT32_MAX;
	static volatile uint32_t t94 = 417U;

    t94 = ((x513|x514)-(x515*x516));

    if (t94 != 1946426U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x521 = INT64_MIN;
	volatile int32_t x523 = 534;
	uint64_t x524 = UINT64_MAX;

    t95 = ((x521|x522)-(x523*x524));

    if (t95 != 406LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x525 = 18283482;
	volatile int64_t x526 = INT64_MIN;
	uint8_t x527 = 4U;
	int64_t t96 = -137860LL;

    t96 = ((x525|x526)-(x527*x528));

    if (t96 != -9223372036836492366LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x529 = 10U;
	uint64_t x531 = 30772769554LLU;
	int64_t x532 = INT64_MIN;

    t97 = ((x529|x530)-(x531*x532));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x534 = -46;
	uint64_t x535 = 40665546253838LLU;
	int16_t x536 = 12550;
	uint64_t t98 = 17203195770115667LLU;

    t98 = ((x533|x534)-(x535*x536));

    if (t98 != 17936391468223884670LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x537 = UINT64_MAX;
	uint16_t x539 = 8282U;
	int8_t x540 = INT8_MAX;
	volatile uint64_t t99 = 10LLU;

    t99 = ((x537|x538)-(x539*x540));

    if (t99 != 18446744073708499801LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x545 = INT16_MAX;
	uint64_t x546 = UINT64_MAX;
	int32_t x547 = INT32_MIN;
	static volatile uint64_t t100 = 6179273151386LLU;

    t100 = ((x545|x546)-(x547*x548));

    if (t100 != 3899830304767LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x549 = 29689398490LL;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = 0;

    t101 = ((x549|x550)-(x551*x552));

    if (t101 != 30064771071LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x553 = INT8_MIN;
	static int32_t x554 = INT32_MIN;
	int32_t x555 = 364871;

    t102 = ((x553|x554)-(x555*x556));

    if (t102 != 46703360) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = -316263407319236LL;
	static volatile int64_t x559 = -7425LL;
	int32_t x560 = INT32_MIN;
	volatile int64_t t103 = 0LL;

    t103 = ((x557|x558)-(x559*x560));

    if (t103 != -332208473405636LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x561 = -1LL;
	volatile int32_t x563 = 25177078;
	uint32_t x564 = 123U;
	volatile int64_t t104 = 0LL;

    t104 = ((x561|x562)-(x563*x564));

    if (t104 != -3096780595LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x565 = -7;
	static uint8_t x567 = 2U;
	static int16_t x568 = 1;
	static volatile int32_t t105 = 10;

    t105 = ((x565|x566)-(x567*x568));

    if (t105 != -9) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x569 = INT32_MIN;
	int64_t x570 = INT64_MIN;
	uint8_t x571 = 5U;
	int64_t x572 = -153877321233LL;
	int64_t t106 = 924949337266318831LL;

    t106 = ((x569|x570)-(x571*x572));

    if (t106 != 767239122517LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x573 = 0LL;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = -1;
	static int64_t t107 = 19139203397937951LL;

    t107 = ((x573|x574)-(x575*x576));

    if (t107 != -65536LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x577 = INT8_MAX;
	uint32_t x578 = 1U;
	int8_t x579 = 1;
	int16_t x580 = -1;
	volatile uint32_t t108 = 1U;

    t108 = ((x577|x578)-(x579*x580));

    if (t108 != 128U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x581 = INT8_MIN;
	uint8_t x582 = 4U;
	int8_t x583 = INT8_MIN;
	static uint8_t x584 = 4U;
	volatile int32_t t109 = -82664;

    t109 = ((x581|x582)-(x583*x584));

    if (t109 != 388) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x585 = INT16_MAX;
	static uint8_t x586 = UINT8_MAX;
	uint32_t x587 = 50925U;
	static volatile int8_t x588 = -25;

    t110 = ((x585|x586)-(x587*x588));

    if (t110 != 1305892U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x589 = INT64_MIN;
	int8_t x590 = -19;
	uint8_t x591 = 19U;
	uint32_t x592 = UINT32_MAX;
	volatile int64_t t111 = -164591LL;

    t111 = ((x589|x590)-(x591*x592));

    if (t111 != -4294967296LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x593 = UINT64_MAX;
	volatile int8_t x594 = 0;
	uint16_t x595 = 487U;
	volatile uint64_t t112 = 5596036701780LLU;

    t112 = ((x593|x594)-(x595*x596));

    if (t112 != 486LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x609 = -1LL;
	static int64_t x610 = -1LL;
	int16_t x612 = 1;
	int64_t t113 = INT64_MAX;

    t113 = ((x609|x610)-(x611*x612));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = INT64_MAX;
	static uint64_t x615 = 1623452LLU;
	volatile uint64_t x616 = 206526603713LLU;
	uint64_t t114 = 28537LLU;

    t114 = ((x613|x614)-(x615*x616));

    if (t114 != 18111458045858474339LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x618 = -1;
	int16_t x619 = INT16_MIN;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t115 = 2139LLU;

    t115 = ((x617|x618)-(x619*x620));

    if (t115 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x621 = 53491527;
	int16_t x622 = INT16_MIN;
	uint8_t x623 = 4U;
	int16_t x624 = INT16_MIN;
	int32_t t116 = -345;

    t116 = ((x621|x622)-(x623*x624));

    if (t116 != 112455) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x625 = 3U;
	static uint32_t x626 = 1739166U;
	uint8_t x627 = UINT8_MAX;
	int16_t x628 = -1;
	static uint32_t t117 = 7444019U;

    t117 = ((x625|x626)-(x627*x628));

    if (t117 != 1739422U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x629 = UINT64_MAX;
	int16_t x631 = INT16_MIN;
	static volatile int8_t x632 = 1;
	volatile uint64_t t118 = 151305911785747LLU;

    t118 = ((x629|x630)-(x631*x632));

    if (t118 != 32767LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x635 = -1LL;
	int16_t x636 = INT16_MIN;
	int64_t t119 = -1943LL;

    t119 = ((x633|x634)-(x635*x636));

    if (t119 != -32769LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x641 = -1;
	uint8_t x642 = UINT8_MAX;
	int32_t x644 = 447;
	int32_t t120 = 412198;

    t120 = ((x641|x642)-(x643*x644));

    if (t120 != 57215) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x646 = UINT16_MAX;
	int16_t x647 = 1;
	static volatile int64_t x648 = INT64_MAX;
	volatile int64_t t121 = INT64_MIN;

    t121 = ((x645|x646)-(x647*x648));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x651 = 11844552U;
	volatile uint32_t t122 = 370643U;

    t122 = ((x649|x650)-(x651*x652));

    if (t122 != 3631672256U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x653 = -1;
	static int16_t x654 = -1;
	int8_t x655 = INT8_MAX;
	volatile int32_t t123 = -14;

    t123 = ((x653|x654)-(x655*x656));

    if (t123 != 4161535) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x657 = -1LL;
	int64_t x658 = 770526LL;
	static volatile int64_t x660 = -7569594LL;
	static volatile int64_t t124 = -423558647491642LL;

    t124 = ((x657|x658)-(x659*x660));

    if (t124 != 2535813989LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x661 = INT32_MIN;
	static int32_t x662 = -1;
	int64_t x664 = -18858770LL;
	int64_t t125 = 663279643206264038LL;

    t125 = ((x661|x662)-(x663*x664));

    if (t125 != 2395063789LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x673 = -1;
	uint64_t x674 = UINT64_MAX;
	uint16_t x675 = 4578U;
	static uint16_t x676 = 11U;
	volatile uint64_t t126 = 6168LLU;

    t126 = ((x673|x674)-(x675*x676));

    if (t126 != 18446744073709501257LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x677 = 12U;
	int8_t x679 = INT8_MAX;
	int8_t x680 = -1;
	static volatile int32_t t127 = -3903;

    t127 = ((x677|x678)-(x679*x680));

    if (t127 != -32629) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x681 = INT32_MAX;
	int8_t x682 = INT8_MIN;
	static volatile uint64_t x683 = 149545522873937LLU;
	int64_t x684 = INT64_MIN;
	uint64_t t128 = 3385474447557LLU;

    t128 = ((x681|x682)-(x683*x684));

    if (t128 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x689 = 64U;
	volatile int16_t x691 = INT16_MAX;
	uint8_t x692 = UINT8_MAX;
	volatile uint32_t t129 = 9807531U;

    t129 = ((x689|x690)-(x691*x692));

    if (t129 != 97580135U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x693 = 185;
	static volatile int64_t x694 = 202672258600805LL;
	uint16_t x695 = 4U;
	static volatile uint16_t x696 = 1805U;
	volatile int64_t t130 = -1934363869606895LL;

    t130 = ((x693|x694)-(x695*x696));

    if (t130 != 202672258593737LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MIN;
	volatile uint16_t x699 = 757U;
	int16_t x700 = INT16_MIN;
	int32_t t131 = -110924;

    t131 = ((x697|x698)-(x699*x700));

    if (t131 != 24805248) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x717 = UINT64_MAX;
	static volatile int8_t x718 = INT8_MIN;
	volatile uint16_t x720 = 79U;
	uint64_t t132 = 49005LLU;

    t132 = ((x717|x718)-(x719*x720));

    if (t132 != 78LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x726 = 2999U;
	int64_t x727 = 0LL;
	int32_t x728 = 423870;

    t133 = ((x725|x726)-(x727*x728));

    if (t133 != 65535LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x729 = INT16_MIN;
	uint32_t x731 = 330281764U;
	static uint8_t x732 = 73U;
	uint32_t t134 = 623U;

    t134 = ((x729|x730)-(x731*x732));

    if (t134 != 1659235003U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x738 = INT32_MIN;
	int8_t x739 = -1;
	uint64_t x740 = 33555735933034LLU;
	volatile uint64_t t135 = 3957818095LLU;

    t135 = ((x737|x738)-(x739*x740));

    if (t135 != 33555735881805LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x742 = 14127;
	int64_t x743 = -1LL;
	static volatile int64_t t136 = 26522997213333LL;

    t136 = ((x741|x742)-(x743*x744));

    if (t136 != -1440089LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x745 = -1679801;
	volatile int16_t x746 = 15449;
	uint16_t x747 = 2U;
	int8_t x748 = INT8_MAX;

    t137 = ((x745|x746)-(x747*x748));

    if (t137 != -1671839) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x749 = 2405312764087LLU;
	int32_t x752 = -1;
	volatile uint64_t t138 = 3655558528342LLU;

    t138 = ((x749|x750)-(x751*x752));

    if (t138 != 18446744072901926902LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x753 = -234851LL;
	int32_t x755 = -82661;
	int8_t x756 = 61;

    t139 = ((x753|x754)-(x755*x756));

    if (t139 != 4807504LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x757 = INT32_MAX;
	int8_t x758 = INT8_MAX;
	int8_t x759 = 3;
	static int16_t x760 = 21;
	volatile int32_t t140 = -673780;

    t140 = ((x757|x758)-(x759*x760));

    if (t140 != 2147483584) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x761 = UINT64_MAX;
	int16_t x762 = 11;
	volatile uint8_t x763 = UINT8_MAX;
	volatile int8_t x764 = INT8_MAX;
	volatile uint64_t t141 = 29LLU;

    t141 = ((x761|x762)-(x763*x764));

    if (t141 != 18446744073709519230LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x765 = 4962756U;
	volatile uint8_t x766 = 55U;
	int64_t x767 = -1LL;
	int8_t x768 = 16;

    t142 = ((x765|x766)-(x767*x768));

    if (t142 != 4962823LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x769 = INT64_MIN;
	static volatile int64_t x770 = INT64_MIN;
	uint64_t x772 = 6369204674670LLU;

    t143 = ((x769|x770)-(x771*x772));

    if (t143 != 9223378406059450478LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x774 = 97;
	int32_t x775 = 12;
	static uint64_t x776 = 5718LLU;
	volatile uint64_t t144 = 6942200777133442176LLU;

    t144 = ((x773|x774)-(x775*x776));

    if (t144 != 18446744073709482999LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x777 = 1U;
	static uint64_t x779 = UINT64_MAX;
	uint64_t x780 = 38870761452LLU;

    t145 = ((x777|x778)-(x779*x780));

    if (t145 != 38867269369LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x781 = 105U;
	int16_t x783 = 64;
	uint8_t x784 = UINT8_MAX;

    t146 = ((x781|x782)-(x783*x784));

    if (t146 != -13123) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x785 = INT8_MAX;
	uint8_t x786 = 7U;
	uint32_t x787 = 3701U;
	int16_t x788 = 602;
	uint32_t t147 = 911569U;

    t147 = ((x785|x786)-(x787*x788));

    if (t147 != 4292739421U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x789 = -2;
	int16_t x791 = -2834;
	volatile int32_t t148 = -120308;

    t148 = ((x789|x790)-(x791*x792));

    if (t148 != -17471611) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x793 = 62U;
	volatile uint8_t x794 = UINT8_MAX;
	uint64_t x795 = UINT64_MAX;
	int64_t x796 = INT64_MIN;
	volatile uint64_t t149 = 25719467984837021LLU;

    t149 = ((x793|x794)-(x795*x796));

    if (t149 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int32_t x798 = 260599;
	int16_t x799 = INT16_MIN;
	static int16_t x800 = INT16_MIN;
	uint32_t t150 = 20555U;

    t150 = ((x797|x798)-(x799*x800));

    if (t150 != 3221225471U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x801 = 234111U;
	int16_t x802 = -69;
	static int16_t x803 = INT16_MIN;
	uint16_t x804 = UINT16_MAX;

    t151 = ((x801|x802)-(x803*x804));

    if (t151 != 2147450879U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x810 = INT64_MIN;
	int16_t x811 = INT16_MIN;
	volatile int16_t x812 = 9;
	int64_t t152 = 968142146LL;

    t152 = ((x809|x810)-(x811*x812));

    if (t152 != 294708LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x817 = 10U;
	int16_t x818 = 22;
	int16_t x820 = -1;
	volatile int32_t t153 = 217913485;

    t153 = ((x817|x818)-(x819*x820));

    if (t153 != 285) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x825 = 185U;
	int8_t x826 = -1;
	int16_t x827 = INT16_MIN;
	static uint64_t x828 = 3937112240291LLU;
	uint64_t t154 = 250705084LLU;

    t154 = ((x825|x826)-(x827*x828));

    if (t154 != 129011298184822783LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x829 = INT16_MIN;
	int8_t x830 = 7;
	int64_t x831 = -1LL;
	uint16_t x832 = 5U;
	int64_t t155 = 353388861995641171LL;

    t155 = ((x829|x830)-(x831*x832));

    if (t155 != -32756LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x833 = INT32_MIN;
	int64_t x834 = INT64_MIN;
	static uint8_t x835 = UINT8_MAX;
	int16_t x836 = INT16_MIN;
	volatile int64_t t156 = 9229LL;

    t156 = ((x833|x834)-(x835*x836));

    if (t156 != -2139127808LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x837 = 31U;
	uint32_t x839 = 4376U;
	uint32_t t157 = 3U;

    t157 = ((x837|x838)-(x839*x840));

    if (t157 != 221071U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x842 = -2LL;
	static volatile int16_t x843 = INT16_MAX;
	uint32_t x844 = 1042U;
	static int64_t t158 = -50728LL;

    t158 = ((x841|x842)-(x843*x844));

    if (t158 != -34143216LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x849 = INT8_MIN;
	int64_t x850 = -329LL;
	int8_t x851 = -1;

    t159 = ((x849|x850)-(x851*x852));

    if (t159 != -74LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x853 = -1LL;
	int16_t x855 = INT16_MIN;
	int8_t x856 = INT8_MIN;
	volatile int64_t t160 = -99735LL;

    t160 = ((x853|x854)-(x855*x856));

    if (t160 != -4194305LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x857 = -1741530193621LL;
	volatile int32_t x858 = 957751337;
	int64_t t161 = -99062150234325159LL;

    t161 = ((x857|x858)-(x859*x860));

    if (t161 != -1744867957764LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x861 = 1469447123U;
	volatile uint8_t x863 = UINT8_MAX;
	int32_t x864 = 2750;
	int64_t t162 = 987629975716077LL;

    t162 = ((x861|x862)-(x863*x864));

    if (t162 != -9223372035386029935LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint16_t x869 = 1649U;
	static volatile int16_t x870 = -5;
	uint16_t x871 = UINT16_MAX;
	static int16_t x872 = INT16_MAX;
	int32_t t163 = -1070;

    t163 = ((x869|x870)-(x871*x872));

    if (t163 != -2147385350) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x877 = INT8_MAX;
	int8_t x878 = INT8_MIN;
	static uint64_t x879 = 959567LLU;
	uint8_t x880 = UINT8_MAX;
	volatile uint64_t t164 = 1217107470LLU;

    t164 = ((x877|x878)-(x879*x880));

    if (t164 != 18446744073464862030LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x882 = INT32_MIN;
	volatile int8_t x883 = -1;
	int64_t t165 = -4891527267LL;

    t165 = ((x881|x882)-(x883*x884));

    if (t165 != -426096352480667992LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x885 = 950168914;
	int32_t x886 = -1;
	volatile uint32_t x888 = 834655199U;
	uint32_t t166 = 6031502U;

    t166 = ((x885|x886)-(x887*x888));

    if (t166 != 1204835294U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x889 = -1;
	uint64_t x890 = UINT64_MAX;
	int16_t x891 = INT16_MIN;
	int32_t x892 = 15070;
	volatile uint64_t t167 = 63375388895271136LLU;

    t167 = ((x889|x890)-(x891*x892));

    if (t167 != 493813759LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x893 = 182256469073LLU;
	int32_t x894 = INT32_MAX;
	int8_t x895 = -3;
	volatile uint64_t x896 = 2865192247976163LLU;

    t168 = ((x893|x894)-(x895*x896));

    if (t168 != 8595759280038568LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x898 = INT16_MAX;
	uint64_t x899 = 903179512LLU;
	uint8_t x900 = 0U;

    t169 = ((x897|x898)-(x899*x900));

    if (t169 != 32767LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x905 = INT16_MAX;
	int8_t x906 = -43;
	static int64_t x907 = INT64_MIN;
	static volatile int8_t x908 = 0;
	int64_t t170 = 13LL;

    t170 = ((x905|x906)-(x907*x908));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x909 = 316;
	int32_t x910 = INT32_MIN;
	volatile uint16_t x911 = 41U;
	int8_t x912 = -1;
	volatile int32_t t171 = -38796;

    t171 = ((x909|x910)-(x911*x912));

    if (t171 != -2147483291) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x913 = UINT64_MAX;
	uint8_t x914 = 49U;
	uint8_t x916 = UINT8_MAX;
	uint64_t t172 = 114951LLU;

    t172 = ((x913|x914)-(x915*x916));

    if (t172 != 254LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x917 = UINT32_MAX;
	int16_t x918 = INT16_MAX;
	int8_t x920 = INT8_MAX;
	volatile uint32_t t173 = 6309431U;

    t173 = ((x917|x918)-(x919*x920));

    if (t173 != 4294927036U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x923 = INT16_MIN;
	uint32_t t174 = 396U;

    t174 = ((x921|x922)-(x923*x924));

    if (t174 != 4235198463U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x925 = 10U;
	int8_t x926 = -29;
	uint64_t x927 = UINT64_MAX;
	volatile uint64_t t175 = 400830536LLU;

    t175 = ((x925|x926)-(x927*x928));

    if (t175 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x929 = UINT16_MAX;
	volatile uint64_t x930 = 8744614317565LLU;
	static volatile uint8_t x931 = UINT8_MAX;
	static volatile uint32_t x932 = 0U;
	static volatile uint64_t t176 = 341696128667601LLU;

    t176 = ((x929|x930)-(x931*x932));

    if (t176 != 8744614363135LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x933 = 0U;
	int64_t x935 = INT64_MIN;
	uint64_t x936 = 4144763145897955343LLU;
	volatile uint64_t t177 = 0LLU;

    t177 = ((x933|x934)-(x935*x936));

    if (t177 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x937 = 6;
	static int16_t x938 = -1;
	static volatile int8_t x940 = INT8_MAX;
	uint32_t t178 = 537787042U;

    t178 = ((x937|x938)-(x939*x940));

    if (t178 != 988613689U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x941 = 42;
	volatile int16_t x942 = INT16_MIN;
	volatile int8_t x943 = INT8_MIN;
	volatile int8_t x944 = -1;
	int32_t t179 = -436739;

    t179 = ((x941|x942)-(x943*x944));

    if (t179 != -32854) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x946 = INT16_MIN;
	static uint32_t x947 = 12088734U;
	volatile int64_t x948 = 1LL;
	static int64_t t180 = -5294265433LL;

    t180 = ((x945|x946)-(x947*x948));

    if (t180 != -12096815LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x949 = INT64_MAX;
	volatile int16_t x950 = -1;
	uint16_t x951 = UINT16_MAX;
	static volatile int64_t t181 = 3561LL;

    t181 = ((x949|x950)-(x951*x952));

    if (t181 != 65534LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x961 = UINT8_MAX;
	int8_t x962 = 10;
	uint16_t x964 = 17U;

    t182 = ((x961|x962)-(x963*x964));

    if (t182 != 272) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x965 = 1U;
	static uint8_t x966 = UINT8_MAX;
	volatile uint16_t x967 = 3345U;
	volatile uint32_t t183 = 0U;

    t183 = ((x965|x966)-(x967*x968));

    if (t183 != 3600U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x969 = -7;
	int8_t x971 = 6;
	static volatile int64_t x972 = -48696173935LL;
	static volatile int64_t t184 = 0LL;

    t184 = ((x969|x970)-(x971*x972));

    if (t184 != 292177043603LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x973 = 0;
	uint16_t x976 = 82U;
	volatile uint32_t t185 = 3567844U;

    t185 = ((x973|x974)-(x975*x976));

    if (t185 != 2075638455U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x977 = 1860367;
	int16_t x979 = INT16_MAX;
	static uint32_t x980 = 2505U;
	uint32_t t186 = 318549022U;

    t186 = ((x977|x978)-(x979*x980));

    if (t186 != 4214746328U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x990 = -1953366;
	volatile uint64_t t187 = 8490243424954LLU;

    t187 = ((x989|x990)-(x991*x992));

    if (t187 != 9223372036852822441LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x997 = INT64_MAX;
	static volatile int8_t x998 = -1;
	int32_t x999 = 27;
	volatile uint32_t x1000 = 494U;

    t188 = ((x997|x998)-(x999*x1000));

    if (t188 != -13339LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1002 = INT32_MIN;
	uint64_t x1003 = 963709446LLU;
	int64_t x1004 = -1LL;
	volatile uint64_t t189 = 535186682156LLU;

    t189 = ((x1001|x1002)-(x1003*x1004));

    if (t189 != 963709438LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1005 = INT8_MIN;
	int16_t x1006 = -659;
	uint64_t x1007 = 97665865LLU;
	int16_t x1008 = -1;

    t190 = ((x1005|x1006)-(x1007*x1008));

    if (t190 != 97665846LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x1009 = -1;
	static int64_t x1010 = INT64_MAX;
	volatile uint16_t x1011 = 735U;
	volatile int32_t x1012 = 5212;
	static volatile int64_t t191 = -237LL;

    t191 = ((x1009|x1010)-(x1011*x1012));

    if (t191 != -3830821LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1013 = -1;
	int32_t x1014 = INT32_MIN;
	uint32_t x1015 = 446687U;
	static int32_t x1016 = INT32_MAX;

    t192 = ((x1013|x1014)-(x1015*x1016));

    if (t192 != 2147930334U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1021 = -10;
	int8_t x1024 = INT8_MAX;

    t193 = ((x1021|x1022)-(x1023*x1024));

    if (t193 != 118627599662774210LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1025 = 105U;
	uint16_t x1026 = 949U;
	uint32_t x1028 = 15U;

    t194 = ((x1025|x1026)-(x1027*x1028));

    if (t194 != 103771U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1029 = 2U;
	int64_t x1030 = 3LL;
	int16_t x1031 = 114;
	static int64_t t195 = -19587370000LL;

    t195 = ((x1029|x1030)-(x1031*x1032));

    if (t195 != 117LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1033 = INT64_MAX;
	volatile int8_t x1034 = 23;
	uint16_t x1035 = 2U;
	volatile int64_t t196 = 1LL;

    t196 = ((x1033|x1034)-(x1035*x1036));

    if (t196 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1037 = -1;
	uint64_t x1039 = UINT64_MAX;
	uint64_t x1040 = UINT64_MAX;

    t197 = ((x1037|x1038)-(x1039*x1040));

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1045 = 199U;
	int64_t x1046 = -1LL;
	uint16_t x1047 = UINT16_MAX;
	int64_t x1048 = 53822283462LL;

    t198 = ((x1045|x1046)-(x1047*x1048));

    if (t198 != -3527243346682171LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1051 = UINT32_MAX;
	int8_t x1052 = 11;
	volatile int64_t t199 = -105065235626056325LL;

    t199 = ((x1049|x1050)-(x1051*x1052));

    if (t199 != -4294967286LL) { NG(); } else { ; }
	
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

