
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

int32_t t0 = -25;
static uint32_t x12 = 59U;
int8_t x16 = -9;
int16_t x20 = INT16_MIN;
uint64_t x22 = UINT64_MAX;
int64_t x31 = -1LL;
int16_t x43 = INT16_MAX;
int32_t t7 = -1339;
int32_t t8 = 197616;
uint16_t x62 = UINT16_MAX;
int8_t x65 = INT8_MIN;
static int16_t x66 = INT16_MAX;
volatile int32_t x67 = -17766;
volatile int32_t t11 = 1319;
int16_t x80 = INT16_MIN;
static uint8_t x83 = UINT8_MAX;
volatile int32_t t14 = -4203310;
int64_t x94 = INT64_MIN;
volatile int64_t x97 = INT64_MIN;
uint64_t x98 = 1017010884886LLU;
uint16_t x114 = UINT16_MAX;
int8_t x116 = 1;
uint64_t x117 = 170LLU;
static volatile int32_t t21 = -3770491;
int16_t x128 = 89;
int64_t x133 = -1LL;
int8_t x135 = -1;
int32_t x148 = INT32_MAX;
int32_t t27 = -14737;
static volatile int32_t t28 = -315;
int16_t x154 = INT16_MIN;
int8_t x156 = INT8_MIN;
uint16_t x157 = UINT16_MAX;
int32_t t31 = -49891;
volatile uint32_t x165 = 43603714U;
static uint32_t x166 = 3U;
volatile int32_t x172 = INT32_MIN;
int32_t t33 = -13;
volatile int32_t x180 = INT32_MAX;
uint32_t x200 = 12898862U;
volatile int32_t t36 = -1;
int64_t x210 = INT64_MIN;
static uint64_t x212 = UINT64_MAX;
int16_t x216 = -1;
int32_t t42 = 13365439;
static uint32_t x239 = 2684689U;
volatile int32_t t43 = 1;
int16_t x249 = INT16_MAX;
int32_t x253 = 75;
int32_t x256 = INT32_MIN;
volatile int16_t x260 = INT16_MAX;
volatile uint8_t x264 = UINT8_MAX;
uint64_t x265 = 1091884623384LLU;
int16_t x266 = INT16_MAX;
int32_t t49 = -1;
int32_t x285 = -1;
int8_t x286 = -1;
static int32_t t50 = -1627075;
int8_t x292 = INT8_MIN;
volatile int32_t t51 = -2990;
static int64_t x300 = -1367391604144071LL;
volatile int32_t t53 = 29394;
int32_t t54 = 54913120;
volatile int16_t x308 = INT16_MIN;
volatile int64_t x310 = 3082945644662576408LL;
volatile int8_t x311 = INT8_MIN;
int16_t x312 = -1;
volatile int32_t t56 = 79185;
int16_t x313 = INT16_MIN;
int16_t x315 = INT16_MIN;
static int64_t x316 = -1LL;
volatile int8_t x319 = INT8_MIN;
volatile int32_t t59 = 47128;
int16_t x327 = -1;
int8_t x335 = -1;
volatile uint16_t x337 = 3U;
volatile int8_t x339 = 0;
int8_t x341 = 11;
int16_t x355 = INT16_MAX;
volatile int16_t x362 = -13107;
volatile int64_t x365 = INT64_MIN;
int8_t x366 = 0;
static uint16_t x371 = 26921U;
int32_t t68 = 16099;
int32_t x374 = INT32_MAX;
static int32_t t69 = 250662448;
uint64_t x384 = 100LLU;
int8_t x385 = 44;
uint32_t x396 = 1U;
int8_t x410 = INT8_MAX;
int64_t x415 = INT64_MAX;
int8_t x419 = INT8_MIN;
volatile uint32_t x422 = 16U;
int32_t x424 = -1;
int64_t x429 = INT64_MAX;
static volatile uint32_t x435 = 1446U;
static volatile int32_t t81 = 16886092;
volatile int64_t x439 = -1LL;
int8_t x444 = INT8_MIN;
volatile int32_t t83 = 11395;
int64_t x454 = -1LL;
static int64_t x464 = 1366852817653LL;
uint64_t x473 = 2188LLU;
int8_t x478 = 61;
int8_t x479 = INT8_MAX;
volatile int32_t t89 = -3249;
static int64_t x482 = INT64_MIN;
int64_t x484 = 14LL;
volatile int8_t x486 = -1;
volatile int32_t x498 = INT32_MIN;
int16_t x499 = INT16_MIN;
volatile int32_t t94 = 3784843;
uint64_t x524 = 857468106237456048LLU;
int8_t x530 = -1;
static int16_t x539 = 20;
int16_t x545 = INT16_MAX;
volatile uint32_t x548 = UINT32_MAX;
volatile int32_t t100 = 21909376;
static int64_t x549 = INT64_MIN;
uint64_t x558 = 13649210202LLU;
int16_t x561 = INT16_MAX;
static uint8_t x566 = UINT8_MAX;
volatile uint32_t x574 = UINT32_MAX;
int8_t x583 = INT8_MIN;
uint64_t x595 = 1346LLU;
volatile int64_t x610 = 1061934732LL;
uint8_t x611 = UINT8_MAX;
int32_t x617 = -1;
volatile uint16_t x623 = 2345U;
int32_t x628 = -42181417;
volatile int8_t x641 = 12;
static volatile int32_t t122 = -1;
uint8_t x656 = 16U;
volatile int32_t t126 = -32142;
static int32_t x680 = INT32_MAX;
volatile int32_t t128 = -21;
volatile int64_t x682 = -7031726LL;
volatile int32_t t129 = 116125;
int32_t x688 = INT32_MAX;
int64_t x692 = -610252351300086869LL;
static int8_t x693 = INT8_MIN;
int16_t x694 = -1;
int8_t x701 = INT8_MIN;
int8_t x706 = 11;
int32_t t135 = -11;
int32_t x712 = INT32_MIN;
int8_t x725 = -14;
int32_t x726 = 300489;
volatile int32_t t139 = -3948;
uint64_t x735 = UINT64_MAX;
int32_t t141 = 460851;
uint16_t x738 = UINT16_MAX;
static volatile int32_t t142 = 155096;
static int64_t x743 = 236LL;
uint16_t x745 = 7U;
int8_t x760 = 2;
int32_t t145 = 21;
int32_t t146 = -470405348;
int32_t t148 = -81338732;
static int16_t x775 = INT16_MAX;
int16_t x791 = 2;
int8_t x803 = -1;
static int64_t x807 = INT64_MAX;
int32_t t154 = -15611;
int32_t t155 = 0;
uint64_t x824 = 3380662065LLU;
static uint8_t x828 = 25U;
volatile int32_t t158 = 1831890;
volatile int32_t t160 = -2017092;
volatile int16_t x847 = INT16_MIN;
uint64_t x853 = 140918123LLU;
volatile uint16_t x862 = 36U;
uint32_t x868 = 0U;
volatile int16_t x876 = INT16_MIN;
uint16_t x877 = 5U;
int8_t x878 = -24;
uint32_t x888 = 1U;
uint64_t x909 = 3168LLU;
int64_t x910 = 1577075608LL;
int16_t x912 = INT16_MAX;
volatile int64_t x919 = -1LL;
volatile uint8_t x924 = 6U;
uint16_t x927 = 2682U;
uint64_t x928 = 30451827LLU;
volatile int32_t t176 = -26256839;
uint64_t x930 = UINT64_MAX;
uint64_t x942 = 48343453591LLU;
int16_t x944 = 14;
int32_t t180 = -992546;
static int16_t x954 = INT16_MIN;
uint16_t x962 = 37U;
uint32_t x963 = UINT32_MAX;
static uint16_t x967 = 9U;
int32_t t184 = 14316825;
static int64_t x989 = INT64_MAX;
uint8_t x990 = UINT8_MAX;
uint32_t x991 = 237U;
static int8_t x995 = INT8_MIN;
static int32_t t190 = -2780;
static volatile int32_t t191 = -15528293;
int8_t x1009 = -1;
volatile int8_t x1010 = -1;
volatile int32_t t194 = 128418988;
volatile uint32_t x1016 = 13U;
uint32_t x1024 = 443906U;
static int32_t x1026 = -1;
uint64_t x1027 = 6LLU;
int16_t x1031 = 0;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 123U;
	volatile uint8_t x8 = UINT8_MAX;

    t0 = ((x5&x6)!=(x7*x8));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -1LL;
	int32_t t1 = -24213;

    t1 = ((x9&x10)!=(x11*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = INT32_MIN;
	volatile int64_t x14 = INT64_MIN;
	static volatile uint8_t x15 = 116U;
	volatile int32_t t2 = 1250;

    t2 = ((x13&x14)!=(x15*x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 233782802972LLU;
	uint32_t x18 = 18U;
	uint8_t x19 = 0U;
	volatile int32_t t3 = 0;

    t3 = ((x17&x18)!=(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = INT32_MAX;
	int32_t x23 = -1;
	uint64_t x24 = 104708877876LLU;
	volatile int32_t t4 = 9;

    t4 = ((x21&x22)!=(x23*x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	int32_t t5 = -852062451;

    t5 = ((x25&x26)!=(x27*x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 0U;
	volatile int64_t x30 = INT64_MIN;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = 79381621;

    t6 = ((x29&x30)!=(x31*x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = 7;
	volatile int32_t x42 = INT32_MIN;
	uint32_t x44 = 20657U;

    t7 = ((x41&x42)!=(x43*x44));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = -1;
	int64_t x51 = -21933489700742996LL;
	static uint8_t x52 = UINT8_MAX;

    t8 = ((x49&x50)!=(x51*x52));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = 3233805;
	uint32_t x54 = 36505U;
	volatile uint16_t x55 = 111U;
	int32_t x56 = -2891153;
	static volatile int32_t t9 = 199459;

    t9 = ((x53&x54)!=(x55*x56));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = INT16_MAX;
	volatile uint32_t x63 = 3523313U;
	static int32_t x64 = INT32_MAX;
	volatile int32_t t10 = -2935;

    t10 = ((x61&x62)!=(x63*x64));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x68 = INT16_MAX;

    t11 = ((x65&x66)!=(x67*x68));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = -139LL;
	int8_t x74 = -4;
	volatile uint16_t x75 = 898U;
	int8_t x76 = 0;
	static volatile int32_t t12 = 15427328;

    t12 = ((x73&x74)!=(x75*x76));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x77 = UINT8_MAX;
	int32_t x78 = -1;
	uint16_t x79 = 1734U;
	int32_t t13 = -67;

    t13 = ((x77&x78)!=(x79*x80));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x81 = 46U;
	int8_t x82 = 9;
	static int8_t x84 = INT8_MIN;

    t14 = ((x81&x82)!=(x83*x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x85 = 0U;
	uint8_t x86 = 78U;
	uint16_t x87 = UINT16_MAX;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t15 = 41824;

    t15 = ((x85&x86)!=(x87*x88));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x89 = -1LL;
	int16_t x90 = INT16_MIN;
	int16_t x91 = 3322;
	static volatile int16_t x92 = INT16_MIN;
	static int32_t t16 = 27974006;

    t16 = ((x89&x90)!=(x91*x92));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x93 = INT16_MIN;
	uint32_t x95 = 19U;
	int32_t x96 = INT32_MIN;
	int32_t t17 = 0;

    t17 = ((x93&x94)!=(x95*x96));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x99 = 7350;
	uint64_t x100 = UINT64_MAX;
	int32_t t18 = 49551;

    t18 = ((x97&x98)!=(x99*x100));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = 836290682LL;
	static volatile uint16_t x102 = UINT16_MAX;
	volatile uint32_t x103 = 1327U;
	static int16_t x104 = -1;
	int32_t t19 = 1960;

    t19 = ((x101&x102)!=(x103*x104));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x113 = -2038809;
	uint32_t x115 = UINT32_MAX;
	volatile int32_t t20 = 3468;

    t20 = ((x113&x114)!=(x115*x116));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	volatile int64_t x120 = 424049764069LL;

    t21 = ((x117&x118)!=(x119*x120));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 826813U;
	int16_t x124 = -482;
	volatile int32_t t22 = -14487727;

    t22 = ((x121&x122)!=(x123*x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x125 = 5U;
	int32_t x126 = INT32_MIN;
	static uint32_t x127 = 776919U;
	volatile int32_t t23 = -24306;

    t23 = ((x125&x126)!=(x127*x128));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x134 = 11U;
	volatile int8_t x136 = INT8_MAX;
	static int32_t t24 = -110022;

    t24 = ((x133&x134)!=(x135*x136));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x137 = 1592264227LL;
	static int64_t x138 = -2020956503911LL;
	volatile uint8_t x139 = 64U;
	static int64_t x140 = -136LL;
	volatile int32_t t25 = 101010;

    t25 = ((x137&x138)!=(x139*x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x141 = 3049;
	int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t26 = 1;

    t26 = ((x141&x142)!=(x143*x144));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x145 = UINT32_MAX;
	static int32_t x146 = -36653;
	uint32_t x147 = 1173U;

    t27 = ((x145&x146)!=(x147*x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x149 = -3;
	static uint8_t x150 = 26U;
	static volatile int64_t x151 = -1LL;
	static uint32_t x152 = 25U;

    t28 = ((x149&x150)!=(x151*x152));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x153 = -53;
	volatile uint8_t x155 = 0U;
	volatile int32_t t29 = -684771;

    t29 = ((x153&x154)!=(x155*x156));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x158 = -15840395LL;
	int16_t x159 = INT16_MAX;
	uint32_t x160 = UINT32_MAX;
	static int32_t t30 = -5227;

    t30 = ((x157&x158)!=(x159*x160));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	static volatile int8_t x163 = INT8_MIN;
	static int8_t x164 = INT8_MIN;

    t31 = ((x161&x162)!=(x163*x164));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x167 = 1;
	volatile uint64_t x168 = 4352145184020LLU;
	volatile int32_t t32 = 35294421;

    t32 = ((x165&x166)!=(x167*x168));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x169 = 11U;
	static int64_t x170 = INT64_MAX;
	static uint64_t x171 = 4140998529899LLU;

    t33 = ((x169&x170)!=(x171*x172));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x173 = INT32_MIN;
	static int64_t x174 = 1LL;
	static int32_t x175 = INT32_MAX;
	volatile int64_t x176 = -1LL;
	int32_t t34 = 3;

    t34 = ((x173&x174)!=(x175*x176));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x177 = 907988U;
	static uint16_t x178 = UINT16_MAX;
	uint64_t x179 = 60492LLU;
	volatile int32_t t35 = -678;

    t35 = ((x177&x178)!=(x179*x180));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x197 = 32497630907LLU;
	volatile int16_t x198 = -43;
	int64_t x199 = 1280LL;

    t36 = ((x197&x198)!=(x199*x200));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x201 = INT8_MIN;
	volatile uint32_t x202 = UINT32_MAX;
	static uint8_t x203 = 33U;
	uint64_t x204 = 194639LLU;
	static volatile int32_t t37 = -55830650;

    t37 = ((x201&x202)!=(x203*x204));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	int64_t x207 = -1LL;
	static uint8_t x208 = UINT8_MAX;
	static volatile int32_t t38 = -11;

    t38 = ((x205&x206)!=(x207*x208));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x209 = INT8_MIN;
	uint16_t x211 = 400U;
	volatile int32_t t39 = 120;

    t39 = ((x209&x210)!=(x211*x212));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x213 = 1U;
	int32_t x214 = INT32_MAX;
	static int16_t x215 = INT16_MIN;
	volatile int32_t t40 = 6255;

    t40 = ((x213&x214)!=(x215*x216));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x217 = -3;
	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = INT16_MAX;
	static int32_t x220 = 1;
	int32_t t41 = 1;

    t41 = ((x217&x218)!=(x219*x220));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	int8_t x222 = -37;
	int8_t x223 = 1;
	static int32_t x224 = -1;

    t42 = ((x221&x222)!=(x223*x224));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x237 = INT64_MIN;
	static uint32_t x238 = 3612896U;
	int8_t x240 = -2;

    t43 = ((x237&x238)!=(x239*x240));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x250 = -1;
	int8_t x251 = -1;
	int64_t x252 = -7837LL;
	static int32_t t44 = 54;

    t44 = ((x249&x250)!=(x251*x252));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x254 = -1LL;
	static uint32_t x255 = 4U;
	static volatile int32_t t45 = -192;

    t45 = ((x253&x254)!=(x255*x256));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	static uint32_t x259 = 9U;
	volatile int32_t t46 = -340;

    t46 = ((x257&x258)!=(x259*x260));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x261 = 2;
	static int16_t x262 = 652;
	int16_t x263 = INT16_MIN;
	volatile int32_t t47 = 1;

    t47 = ((x261&x262)!=(x263*x264));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x267 = 196LL;
	int32_t x268 = -302053112;
	static volatile int32_t t48 = -268;

    t48 = ((x265&x266)!=(x267*x268));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MAX;
	int16_t x279 = INT16_MAX;
	int16_t x280 = -1;

    t49 = ((x277&x278)!=(x279*x280));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x287 = 6U;
	volatile int16_t x288 = INT16_MIN;

    t50 = ((x285&x286)!=(x287*x288));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x289 = INT8_MAX;
	int64_t x290 = 1142LL;
	uint16_t x291 = UINT16_MAX;

    t51 = ((x289&x290)!=(x291*x292));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x293 = INT32_MIN;
	static int16_t x294 = INT16_MAX;
	int32_t x295 = -1;
	static int8_t x296 = -3;
	volatile int32_t t52 = -55;

    t52 = ((x293&x294)!=(x295*x296));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x297 = 0;
	volatile int32_t x298 = -1;
	volatile int8_t x299 = INT8_MIN;

    t53 = ((x297&x298)!=(x299*x300));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x301 = 4260626436607354214LLU;
	int16_t x302 = INT16_MIN;
	static int32_t x303 = -1;
	volatile int8_t x304 = INT8_MAX;

    t54 = ((x301&x302)!=(x303*x304));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MIN;
	volatile int64_t x307 = -1LL;
	volatile int32_t t55 = 1;

    t55 = ((x305&x306)!=(x307*x308));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x309 = INT8_MIN;

    t56 = ((x309&x310)!=(x311*x312));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x314 = 212U;
	volatile int32_t t57 = 1095312;

    t57 = ((x313&x314)!=(x315*x316));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x317 = 1145U;
	int32_t x318 = 10820;
	uint32_t x320 = UINT32_MAX;
	int32_t t58 = -34;

    t58 = ((x317&x318)!=(x319*x320));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x321 = -1;
	volatile uint8_t x322 = UINT8_MAX;
	int32_t x323 = 964;
	volatile uint64_t x324 = 73205433699548LLU;

    t59 = ((x321&x322)!=(x323*x324));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x325 = 1383;
	static uint8_t x326 = 2U;
	static int16_t x328 = INT16_MAX;
	int32_t t60 = -1;

    t60 = ((x325&x326)!=(x327*x328));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x333 = -1;
	uint16_t x334 = 6U;
	int16_t x336 = 439;
	static volatile int32_t t61 = -823943006;

    t61 = ((x333&x334)!=(x335*x336));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x338 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t62 = -94045;

    t62 = ((x337&x338)!=(x339*x340));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 14U;
	static int8_t x344 = -11;
	int32_t t63 = -14;

    t63 = ((x341&x342)!=(x343*x344));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x345 = 4227;
	uint64_t x346 = 2568443LLU;
	int32_t x347 = INT32_MAX;
	int32_t x348 = -1;
	int32_t t64 = -110808828;

    t64 = ((x345&x346)!=(x347*x348));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x353 = -1;
	uint16_t x354 = 16U;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t65 = -188704;

    t65 = ((x353&x354)!=(x355*x356));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x361 = UINT64_MAX;
	uint32_t x363 = 76418U;
	uint16_t x364 = 23U;
	int32_t t66 = -273;

    t66 = ((x361&x362)!=(x363*x364));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x367 = 192LL;
	int16_t x368 = INT16_MIN;
	volatile int32_t t67 = -60647974;

    t67 = ((x365&x366)!=(x367*x368));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x369 = -94313512;
	int8_t x370 = 19;
	static int8_t x372 = -1;

    t68 = ((x369&x370)!=(x371*x372));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x373 = -1LL;
	static uint64_t x375 = 44053055404446852LLU;
	uint16_t x376 = UINT16_MAX;

    t69 = ((x373&x374)!=(x375*x376));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x381 = INT32_MIN;
	volatile int64_t x382 = -1LL;
	uint16_t x383 = UINT16_MAX;
	int32_t t70 = -551;

    t70 = ((x381&x382)!=(x383*x384));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x386 = 0U;
	int32_t x387 = INT32_MAX;
	uint8_t x388 = 0U;
	int32_t t71 = 384354798;

    t71 = ((x385&x386)!=(x387*x388));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x389 = 1;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -1;
	static int8_t x392 = -12;
	int32_t t72 = -129400206;

    t72 = ((x389&x390)!=(x391*x392));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x393 = INT16_MAX;
	static int8_t x394 = INT8_MAX;
	int8_t x395 = 0;
	int32_t t73 = 1;

    t73 = ((x393&x394)!=(x395*x396));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x401 = 0U;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x403 = -1;
	int32_t x404 = INT32_MAX;
	volatile int32_t t74 = -160297;

    t74 = ((x401&x402)!=(x403*x404));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x409 = -1LL;
	uint16_t x411 = 3U;
	static int64_t x412 = -1LL;
	int32_t t75 = -11;

    t75 = ((x409&x410)!=(x411*x412));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x413 = 115U;
	int32_t x414 = -1;
	int16_t x416 = -1;
	static int32_t t76 = -1;

    t76 = ((x413&x414)!=(x415*x416));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x417 = -1LL;
	int32_t x418 = INT32_MAX;
	volatile int64_t x420 = 586273986LL;
	int32_t t77 = 85970458;

    t77 = ((x417&x418)!=(x419*x420));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x421 = 25U;
	int32_t x423 = 8777;
	int32_t t78 = -4186244;

    t78 = ((x421&x422)!=(x423*x424));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x425 = INT16_MIN;
	uint64_t x426 = 426472817748462688LLU;
	static volatile uint16_t x427 = 7U;
	int32_t x428 = 690435;
	int32_t t79 = -1377908;

    t79 = ((x425&x426)!=(x427*x428));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x430 = 5;
	int8_t x431 = INT8_MIN;
	static int16_t x432 = -13417;
	int32_t t80 = -24741;

    t80 = ((x429&x430)!=(x431*x432));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x433 = INT64_MAX;
	int32_t x434 = INT32_MAX;
	static uint8_t x436 = 127U;

    t81 = ((x433&x434)!=(x435*x436));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = -1;
	static int64_t x440 = -1LL;
	volatile int32_t t82 = -2444;

    t82 = ((x437&x438)!=(x439*x440));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint32_t x441 = 5499790U;
	uint64_t x442 = 7487006047326952879LLU;
	int8_t x443 = INT8_MAX;

    t83 = ((x441&x442)!=(x443*x444));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x445 = UINT8_MAX;
	int32_t x446 = -1;
	int16_t x447 = INT16_MIN;
	volatile uint64_t x448 = 3635LLU;
	volatile int32_t t84 = 3763513;

    t84 = ((x445&x446)!=(x447*x448));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x453 = -5LL;
	volatile uint32_t x455 = UINT32_MAX;
	int8_t x456 = -1;
	int32_t t85 = 67737;

    t85 = ((x453&x454)!=(x455*x456));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x461 = 118;
	int16_t x462 = INT16_MIN;
	volatile int16_t x463 = INT16_MIN;
	volatile int32_t t86 = 0;

    t86 = ((x461&x462)!=(x463*x464));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x469 = -297;
	int32_t x470 = -1573354;
	volatile int16_t x471 = -1;
	uint32_t x472 = 2214U;
	volatile int32_t t87 = -195373747;

    t87 = ((x469&x470)!=(x471*x472));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x474 = INT64_MAX;
	int8_t x475 = -29;
	volatile uint64_t x476 = UINT64_MAX;
	volatile int32_t t88 = 8;

    t88 = ((x473&x474)!=(x475*x476));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x480 = 225496LL;

    t89 = ((x477&x478)!=(x479*x480));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x481 = -1;
	int32_t x483 = INT32_MIN;
	int32_t t90 = -7;

    t90 = ((x481&x482)!=(x483*x484));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x485 = INT64_MAX;
	volatile int32_t x487 = -1;
	uint8_t x488 = UINT8_MAX;
	int32_t t91 = -154779;

    t91 = ((x485&x486)!=(x487*x488));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x497 = 534;
	uint8_t x500 = 3U;
	int32_t t92 = -1831806;

    t92 = ((x497&x498)!=(x499*x500));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x505 = 204LLU;
	uint8_t x506 = 94U;
	uint8_t x507 = 1U;
	int16_t x508 = INT16_MIN;
	int32_t t93 = 4764027;

    t93 = ((x505&x506)!=(x507*x508));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x509 = -3;
	int32_t x510 = -234593230;
	static int16_t x511 = INT16_MIN;
	static int16_t x512 = INT16_MIN;

    t94 = ((x509&x510)!=(x511*x512));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x513 = INT16_MIN;
	int32_t x514 = -1;
	volatile int8_t x515 = 1;
	static int32_t x516 = INT32_MIN;
	int32_t t95 = -16;

    t95 = ((x513&x514)!=(x515*x516));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x521 = INT8_MIN;
	static int32_t x522 = INT32_MIN;
	int16_t x523 = INT16_MIN;
	static int32_t t96 = 1949;

    t96 = ((x521&x522)!=(x523*x524));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x525 = INT32_MAX;
	uint8_t x526 = UINT8_MAX;
	static volatile uint8_t x527 = 1U;
	int16_t x528 = INT16_MIN;
	int32_t t97 = -7044661;

    t97 = ((x525&x526)!=(x527*x528));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x529 = 7866135LLU;
	uint16_t x531 = UINT16_MAX;
	static uint32_t x532 = 1362402817U;
	volatile int32_t t98 = 5;

    t98 = ((x529&x530)!=(x531*x532));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x537 = INT32_MIN;
	int64_t x538 = -1LL;
	uint8_t x540 = UINT8_MAX;
	int32_t t99 = -2077596;

    t99 = ((x537&x538)!=(x539*x540));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x546 = -1;
	uint8_t x547 = 6U;

    t100 = ((x545&x546)!=(x547*x548));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x550 = UINT16_MAX;
	int16_t x551 = 14;
	uint32_t x552 = 50U;
	volatile int32_t t101 = -4927;

    t101 = ((x549&x550)!=(x551*x552));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x553 = UINT64_MAX;
	int32_t x554 = 0;
	int32_t x555 = INT32_MIN;
	static int8_t x556 = 0;
	volatile int32_t t102 = -22133026;

    t102 = ((x553&x554)!=(x555*x556));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x557 = INT64_MIN;
	static volatile int64_t x559 = 17847LL;
	int16_t x560 = INT16_MAX;
	volatile int32_t t103 = 1;

    t103 = ((x557&x558)!=(x559*x560));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x562 = INT16_MIN;
	int8_t x563 = INT8_MAX;
	volatile int64_t x564 = 287713LL;
	int32_t t104 = 18;

    t104 = ((x561&x562)!=(x563*x564));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x565 = 284579U;
	int64_t x567 = -1LL;
	int16_t x568 = INT16_MIN;
	volatile int32_t t105 = 228;

    t105 = ((x565&x566)!=(x567*x568));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x573 = INT16_MIN;
	int8_t x575 = 12;
	int32_t x576 = -1;
	int32_t t106 = -94899;

    t106 = ((x573&x574)!=(x575*x576));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x577 = 10U;
	uint64_t x578 = UINT64_MAX;
	uint64_t x579 = 26LLU;
	uint64_t x580 = UINT64_MAX;
	volatile int32_t t107 = 10;

    t107 = ((x577&x578)!=(x579*x580));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x581 = 2671U;
	int64_t x582 = 237236265LL;
	volatile int16_t x584 = -1002;
	volatile int32_t t108 = -2;

    t108 = ((x581&x582)!=(x583*x584));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x585 = 4U;
	int16_t x586 = INT16_MAX;
	int8_t x587 = INT8_MAX;
	uint32_t x588 = 97357U;
	int32_t t109 = 17922984;

    t109 = ((x585&x586)!=(x587*x588));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x593 = INT16_MIN;
	int8_t x594 = INT8_MIN;
	int32_t x596 = INT32_MAX;
	int32_t t110 = 149;

    t110 = ((x593&x594)!=(x595*x596));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile int16_t x598 = INT16_MIN;
	volatile int16_t x599 = 1;
	volatile int64_t x600 = INT64_MIN;
	volatile int32_t t111 = -345348;

    t111 = ((x597&x598)!=(x599*x600));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x601 = 20399316914686392LLU;
	int64_t x602 = -1LL;
	uint16_t x603 = UINT16_MAX;
	int16_t x604 = 586;
	volatile int32_t t112 = -48;

    t112 = ((x601&x602)!=(x603*x604));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x605 = 1U;
	static int8_t x606 = -14;
	uint32_t x607 = 51008838U;
	int8_t x608 = -1;
	static volatile int32_t t113 = -4;

    t113 = ((x605&x606)!=(x607*x608));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x609 = -1LL;
	uint32_t x612 = UINT32_MAX;
	volatile int32_t t114 = -92;

    t114 = ((x609&x610)!=(x611*x612));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x613 = INT64_MAX;
	int32_t x614 = INT32_MIN;
	int8_t x615 = INT8_MAX;
	int16_t x616 = -17;
	volatile int32_t t115 = 4;

    t115 = ((x613&x614)!=(x615*x616));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x618 = -1;
	int64_t x619 = 21003371976445LL;
	volatile int64_t x620 = -1LL;
	int32_t t116 = 81;

    t116 = ((x617&x618)!=(x619*x620));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x621 = -1;
	int8_t x622 = -1;
	int64_t x624 = -1LL;
	volatile int32_t t117 = 39276;

    t117 = ((x621&x622)!=(x623*x624));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x625 = 24U;
	volatile uint32_t x626 = UINT32_MAX;
	int8_t x627 = 2;
	int32_t t118 = -63638;

    t118 = ((x625&x626)!=(x627*x628));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x629 = UINT16_MAX;
	int32_t x630 = 0;
	int32_t x631 = 3251;
	static uint64_t x632 = 2207119LLU;
	volatile int32_t t119 = 1;

    t119 = ((x629&x630)!=(x631*x632));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x633 = INT32_MIN;
	static uint64_t x634 = 397617523459575147LLU;
	int16_t x635 = INT16_MIN;
	static uint64_t x636 = 70755601181880LLU;
	volatile int32_t t120 = 275457708;

    t120 = ((x633&x634)!=(x635*x636));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = INT8_MIN;
	static int8_t x639 = INT8_MAX;
	int64_t x640 = -1LL;
	volatile int32_t t121 = 227;

    t121 = ((x637&x638)!=(x639*x640));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x642 = -634322987752949835LL;
	uint64_t x643 = 8LLU;
	volatile int8_t x644 = INT8_MAX;

    t122 = ((x641&x642)!=(x643*x644));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x645 = INT16_MIN;
	static volatile uint32_t x646 = UINT32_MAX;
	int16_t x647 = INT16_MIN;
	static int32_t x648 = 0;
	int32_t t123 = 356538125;

    t123 = ((x645&x646)!=(x647*x648));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x649 = UINT8_MAX;
	int8_t x650 = -1;
	int32_t x651 = -1;
	volatile int32_t x652 = -1;
	volatile int32_t t124 = 112113;

    t124 = ((x649&x650)!=(x651*x652));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x653 = -1080;
	int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	int32_t t125 = -72;

    t125 = ((x653&x654)!=(x655*x656));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x669 = -1;
	static uint64_t x670 = UINT64_MAX;
	int16_t x671 = -6;
	int64_t x672 = 3189758868LL;

    t126 = ((x669&x670)!=(x671*x672));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x673 = 121;
	int64_t x674 = INT64_MAX;
	volatile uint16_t x675 = 5U;
	volatile int8_t x676 = 0;
	static int32_t t127 = -88501109;

    t127 = ((x673&x674)!=(x675*x676));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = 43;
	static volatile int64_t x679 = -1LL;

    t128 = ((x677&x678)!=(x679*x680));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x681 = 0U;
	static volatile uint32_t x683 = UINT32_MAX;
	volatile int64_t x684 = 32LL;

    t129 = ((x681&x682)!=(x683*x684));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x685 = -1;
	static int8_t x686 = INT8_MAX;
	uint64_t x687 = 33011139935740338LLU;
	static int32_t t130 = 135758;

    t130 = ((x685&x686)!=(x687*x688));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x689 = INT64_MIN;
	uint32_t x690 = 83303036U;
	static int8_t x691 = 0;
	int32_t t131 = -738945438;

    t131 = ((x689&x690)!=(x691*x692));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x695 = UINT16_MAX;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t132 = -1;

    t132 = ((x693&x694)!=(x695*x696));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x697 = UINT8_MAX;
	uint32_t x698 = UINT32_MAX;
	uint64_t x699 = 114910784405LLU;
	int16_t x700 = INT16_MIN;
	int32_t t133 = -1438812;

    t133 = ((x697&x698)!=(x699*x700));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x702 = INT16_MIN;
	int8_t x703 = -1;
	int8_t x704 = -1;
	volatile int32_t t134 = 1;

    t134 = ((x701&x702)!=(x703*x704));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x705 = -81926;
	int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MAX;

    t135 = ((x705&x706)!=(x707*x708));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x709 = INT8_MIN;
	uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 3771U;
	volatile int32_t t136 = -154759011;

    t136 = ((x709&x710)!=(x711*x712));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x713 = 76U;
	int8_t x714 = INT8_MAX;
	int16_t x715 = 1450;
	volatile int64_t x716 = -16806015573257LL;
	int32_t t137 = 6;

    t137 = ((x713&x714)!=(x715*x716));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x721 = INT64_MIN;
	volatile int64_t x722 = INT64_MIN;
	static volatile uint8_t x723 = 0U;
	volatile int64_t x724 = -1LL;
	static volatile int32_t t138 = 63943369;

    t138 = ((x721&x722)!=(x723*x724));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x727 = UINT32_MAX;
	uint64_t x728 = 16867569315032LLU;

    t139 = ((x725&x726)!=(x727*x728));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x729 = -1LL;
	int16_t x730 = INT16_MIN;
	int8_t x731 = INT8_MIN;
	int32_t x732 = 0;
	int32_t t140 = -3525;

    t140 = ((x729&x730)!=(x731*x732));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x733 = UINT8_MAX;
	int16_t x734 = INT16_MIN;
	volatile uint32_t x736 = 4455U;

    t141 = ((x733&x734)!=(x735*x736));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x737 = INT8_MAX;
	uint8_t x739 = 107U;
	int8_t x740 = -1;

    t142 = ((x737&x738)!=(x739*x740));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x741 = -66421100;
	int32_t x742 = INT32_MIN;
	int16_t x744 = INT16_MIN;
	volatile int32_t t143 = -3;

    t143 = ((x741&x742)!=(x743*x744));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x746 = 1272LLU;
	int32_t x747 = -1;
	int32_t x748 = -4014;
	static int32_t t144 = 11485;

    t144 = ((x745&x746)!=(x747*x748));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MIN;

    t145 = ((x757&x758)!=(x759*x760));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x761 = 997U;
	int16_t x762 = -1;
	static int8_t x763 = 3;
	static int16_t x764 = -1;

    t146 = ((x761&x762)!=(x763*x764));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x765 = INT16_MIN;
	uint64_t x766 = UINT64_MAX;
	uint64_t x767 = 6166510701LLU;
	int32_t x768 = INT32_MAX;
	volatile int32_t t147 = -416146;

    t147 = ((x765&x766)!=(x767*x768));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	static volatile uint16_t x770 = 2679U;
	int8_t x771 = 2;
	uint16_t x772 = 19U;

    t148 = ((x769&x770)!=(x771*x772));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x773 = UINT32_MAX;
	uint32_t x774 = UINT32_MAX;
	int64_t x776 = -1LL;
	static volatile int32_t t149 = -38342;

    t149 = ((x773&x774)!=(x775*x776));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x789 = INT16_MIN;
	int16_t x790 = INT16_MAX;
	static uint32_t x792 = 10820770U;
	int32_t t150 = 242;

    t150 = ((x789&x790)!=(x791*x792));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x793 = 416;
	static int32_t x794 = INT32_MIN;
	static volatile int8_t x795 = INT8_MAX;
	uint16_t x796 = UINT16_MAX;
	volatile int32_t t151 = 385007044;

    t151 = ((x793&x794)!=(x795*x796));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x801 = INT64_MIN;
	uint64_t x802 = 1495LLU;
	uint8_t x804 = UINT8_MAX;
	volatile int32_t t152 = 92453782;

    t152 = ((x801&x802)!=(x803*x804));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x805 = 4;
	static int16_t x806 = INT16_MAX;
	static int16_t x808 = -1;
	static int32_t t153 = -1468;

    t153 = ((x805&x806)!=(x807*x808));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x809 = INT32_MAX;
	static int16_t x810 = -1;
	static int8_t x811 = 61;
	uint64_t x812 = 169914432779595LLU;

    t154 = ((x809&x810)!=(x811*x812));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x817 = INT32_MIN;
	static int64_t x818 = INT64_MIN;
	uint64_t x819 = 988639555269LLU;
	volatile uint32_t x820 = 13803656U;

    t155 = ((x817&x818)!=(x819*x820));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x821 = 155373;
	int16_t x822 = 115;
	int32_t x823 = -26;
	int32_t t156 = 58866335;

    t156 = ((x821&x822)!=(x823*x824));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x825 = 8;
	int8_t x826 = -1;
	uint64_t x827 = UINT64_MAX;
	volatile int32_t t157 = -12;

    t157 = ((x825&x826)!=(x827*x828));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x829 = 10;
	uint32_t x830 = 38U;
	volatile int16_t x831 = INT16_MIN;
	int16_t x832 = -37;

    t158 = ((x829&x830)!=(x831*x832));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x833 = 1056045174874650LLU;
	volatile uint64_t x834 = 9152361168329342799LLU;
	int64_t x835 = -113273177723633LL;
	uint16_t x836 = UINT16_MAX;
	int32_t t159 = 109308;

    t159 = ((x833&x834)!=(x835*x836));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x841 = -1886;
	int16_t x842 = INT16_MIN;
	int16_t x843 = INT16_MIN;
	int8_t x844 = 0;

    t160 = ((x841&x842)!=(x843*x844));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x845 = INT8_MIN;
	uint8_t x846 = UINT8_MAX;
	int64_t x848 = -1LL;
	volatile int32_t t161 = -215674450;

    t161 = ((x845&x846)!=(x847*x848));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x849 = UINT8_MAX;
	uint16_t x850 = 723U;
	volatile uint8_t x851 = 45U;
	uint8_t x852 = 22U;
	volatile int32_t t162 = 3983073;

    t162 = ((x849&x850)!=(x851*x852));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x854 = INT16_MIN;
	uint64_t x855 = UINT64_MAX;
	static int16_t x856 = INT16_MAX;
	volatile int32_t t163 = 2;

    t163 = ((x853&x854)!=(x855*x856));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x861 = UINT16_MAX;
	int16_t x863 = -1;
	int32_t x864 = INT32_MAX;
	int32_t t164 = 461678864;

    t164 = ((x861&x862)!=(x863*x864));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x865 = UINT8_MAX;
	uint64_t x866 = UINT64_MAX;
	uint16_t x867 = 2372U;
	volatile int32_t t165 = 4014676;

    t165 = ((x865&x866)!=(x867*x868));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x869 = UINT16_MAX;
	static int16_t x870 = INT16_MAX;
	uint8_t x871 = UINT8_MAX;
	static uint8_t x872 = 92U;
	int32_t t166 = -169950941;

    t166 = ((x869&x870)!=(x871*x872));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x873 = 0U;
	int32_t x874 = -1;
	int64_t x875 = -1LL;
	int32_t t167 = -3;

    t167 = ((x873&x874)!=(x875*x876));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x879 = -1LL;
	uint32_t x880 = 18089U;
	int32_t t168 = 12;

    t168 = ((x877&x878)!=(x879*x880));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x881 = UINT32_MAX;
	int16_t x882 = 33;
	static volatile uint16_t x883 = UINT16_MAX;
	uint32_t x884 = 12605U;
	volatile int32_t t169 = 346169;

    t169 = ((x881&x882)!=(x883*x884));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x885 = -1LL;
	int16_t x886 = INT16_MIN;
	uint64_t x887 = UINT64_MAX;
	int32_t t170 = 10465514;

    t170 = ((x885&x886)!=(x887*x888));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x889 = UINT64_MAX;
	int16_t x890 = INT16_MIN;
	int32_t x891 = INT32_MIN;
	static uint32_t x892 = 4U;
	static volatile int32_t t171 = 183;

    t171 = ((x889&x890)!=(x891*x892));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x893 = UINT64_MAX;
	int64_t x894 = -1LL;
	int32_t x895 = INT32_MAX;
	uint8_t x896 = 0U;
	int32_t t172 = 422;

    t172 = ((x893&x894)!=(x895*x896));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x911 = UINT8_MAX;
	volatile int32_t t173 = -7808;

    t173 = ((x909&x910)!=(x911*x912));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x917 = 3U;
	uint16_t x918 = UINT16_MAX;
	volatile uint32_t x920 = 447672U;
	int32_t t174 = 25956;

    t174 = ((x917&x918)!=(x919*x920));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x921 = INT32_MAX;
	int64_t x922 = INT64_MIN;
	int8_t x923 = INT8_MAX;
	int32_t t175 = 6;

    t175 = ((x921&x922)!=(x923*x924));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x925 = 24750U;
	int16_t x926 = INT16_MIN;

    t176 = ((x925&x926)!=(x927*x928));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x929 = 43438892803LL;
	int8_t x931 = 5;
	int8_t x932 = 0;
	volatile int32_t t177 = 2;

    t177 = ((x929&x930)!=(x931*x932));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x933 = UINT64_MAX;
	int64_t x934 = INT64_MIN;
	uint16_t x935 = 3182U;
	int16_t x936 = INT16_MIN;
	static int32_t t178 = 808707798;

    t178 = ((x933&x934)!=(x935*x936));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x941 = -1;
	uint32_t x943 = 51550287U;
	volatile int32_t t179 = 4871;

    t179 = ((x941&x942)!=(x943*x944));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x949 = 11U;
	uint16_t x950 = 17U;
	uint8_t x951 = 16U;
	int16_t x952 = INT16_MIN;

    t180 = ((x949&x950)!=(x951*x952));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x953 = 136U;
	static uint8_t x955 = 0U;
	static int32_t x956 = -15;
	static int32_t t181 = 46271585;

    t181 = ((x953&x954)!=(x955*x956));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x957 = 17U;
	static uint64_t x958 = UINT64_MAX;
	uint16_t x959 = UINT16_MAX;
	static int16_t x960 = INT16_MIN;
	volatile int32_t t182 = -313;

    t182 = ((x957&x958)!=(x959*x960));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x961 = INT64_MAX;
	uint64_t x964 = 10351LLU;
	static int32_t t183 = 3680;

    t183 = ((x961&x962)!=(x963*x964));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x965 = -1;
	uint8_t x966 = UINT8_MAX;
	int64_t x968 = 133LL;

    t184 = ((x965&x966)!=(x967*x968));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x973 = 0LL;
	volatile int16_t x974 = 1;
	volatile uint32_t x975 = UINT32_MAX;
	int32_t x976 = INT32_MIN;
	volatile int32_t t185 = 1;

    t185 = ((x973&x974)!=(x975*x976));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x977 = INT32_MIN;
	uint16_t x978 = UINT16_MAX;
	uint64_t x979 = UINT64_MAX;
	volatile int64_t x980 = INT64_MIN;
	static volatile int32_t t186 = -6558345;

    t186 = ((x977&x978)!=(x979*x980));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x981 = INT32_MAX;
	static uint8_t x982 = UINT8_MAX;
	static int8_t x983 = -1;
	static volatile int16_t x984 = 110;
	static volatile int32_t t187 = -245633;

    t187 = ((x981&x982)!=(x983*x984));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x985 = 2440437588LLU;
	uint64_t x986 = 0LLU;
	uint16_t x987 = 42U;
	int64_t x988 = -1LL;
	int32_t t188 = 597634493;

    t188 = ((x985&x986)!=(x987*x988));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x992 = INT8_MIN;
	int32_t t189 = 250;

    t189 = ((x989&x990)!=(x991*x992));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x993 = INT16_MIN;
	volatile int16_t x994 = 1;
	int16_t x996 = -301;

    t190 = ((x993&x994)!=(x995*x996));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x997 = INT32_MIN;
	uint16_t x998 = 1385U;
	int8_t x999 = INT8_MIN;
	uint8_t x1000 = UINT8_MAX;

    t191 = ((x997&x998)!=(x999*x1000));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1001 = INT8_MIN;
	uint8_t x1002 = UINT8_MAX;
	uint32_t x1003 = 4U;
	static volatile uint16_t x1004 = 1U;
	int32_t t192 = 684509;

    t192 = ((x1001&x1002)!=(x1003*x1004));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1005 = INT16_MIN;
	int32_t x1006 = -230590616;
	uint64_t x1007 = 20251585307828LLU;
	volatile int8_t x1008 = INT8_MIN;
	volatile int32_t t193 = 31148;

    t193 = ((x1005&x1006)!=(x1007*x1008));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1011 = -1;
	uint32_t x1012 = UINT32_MAX;

    t194 = ((x1009&x1010)!=(x1011*x1012));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1013 = UINT32_MAX;
	int32_t x1014 = -32;
	int8_t x1015 = INT8_MIN;
	int32_t t195 = -473;

    t195 = ((x1013&x1014)!=(x1015*x1016));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1021 = 1U;
	volatile uint16_t x1022 = UINT16_MAX;
	uint16_t x1023 = UINT16_MAX;
	int32_t t196 = -96553;

    t196 = ((x1021&x1022)!=(x1023*x1024));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x1025 = -705645448LL;
	int64_t x1028 = 5585818694409LL;
	static volatile int32_t t197 = -7958550;

    t197 = ((x1025&x1026)!=(x1027*x1028));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1029 = INT32_MIN;
	static int64_t x1030 = INT64_MAX;
	int64_t x1032 = -1439LL;
	static int32_t t198 = -225;

    t198 = ((x1029&x1030)!=(x1031*x1032));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1033 = UINT32_MAX;
	uint16_t x1034 = UINT16_MAX;
	uint16_t x1035 = 0U;
	int64_t x1036 = -88LL;
	static volatile int32_t t199 = 62;

    t199 = ((x1033&x1034)!=(x1035*x1036));

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

