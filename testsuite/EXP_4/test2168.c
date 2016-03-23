
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

uint16_t x2 = 3355U;
uint32_t x6 = UINT32_MAX;
static int32_t x8 = 120;
int64_t x18 = INT64_MIN;
int32_t x24 = -1;
uint8_t x28 = UINT8_MAX;
static int8_t x37 = -7;
static int64_t x44 = -178247667LL;
static uint32_t t10 = 22308U;
static int8_t x49 = -1;
static uint8_t x51 = UINT8_MAX;
volatile uint8_t x65 = 2U;
static volatile int64_t t15 = -211092702258LL;
int8_t x69 = -1;
int32_t x71 = INT32_MAX;
uint8_t x72 = 95U;
static volatile int64_t t18 = 1063379334184445LL;
volatile int16_t x85 = 216;
uint16_t x86 = 2U;
volatile uint8_t x87 = 44U;
int8_t x100 = -1;
int32_t x101 = INT32_MIN;
uint16_t x102 = 151U;
int8_t x104 = INT8_MAX;
volatile int32_t x105 = -1;
int16_t x108 = INT16_MIN;
volatile uint8_t x110 = UINT8_MAX;
static uint8_t x134 = 106U;
int16_t x135 = 1005;
uint8_t x138 = 15U;
int8_t x139 = 0;
static int32_t t33 = 5568674;
static volatile int16_t x155 = INT16_MAX;
int16_t x157 = -1;
static uint32_t x159 = 248158799U;
uint8_t x166 = 17U;
uint32_t x175 = UINT32_MAX;
static uint32_t t39 = 2998457U;
uint8_t x181 = 2U;
volatile int32_t x182 = -976;
int8_t x193 = 18;
int8_t x196 = -1;
volatile int32_t t44 = 1411;
int64_t x199 = -1LL;
int8_t x200 = INT8_MIN;
int8_t x208 = INT8_MIN;
uint8_t x215 = UINT8_MAX;
volatile int64_t x221 = INT64_MAX;
uint8_t x227 = UINT8_MAX;
int64_t t53 = 161095631667LL;
int8_t x235 = INT8_MAX;
int64_t t54 = -560035729027LL;
int16_t x237 = INT16_MAX;
int64_t x239 = INT64_MIN;
uint64_t t55 = 148464908LLU;
int8_t x243 = INT8_MIN;
int64_t t56 = 29249059LL;
int16_t x247 = INT16_MIN;
static int64_t x248 = INT64_MIN;
uint32_t x261 = 5U;
uint64_t x263 = 14951110LLU;
uint64_t t60 = 104354464125941225LLU;
volatile uint8_t x265 = 0U;
int8_t x270 = -18;
uint16_t x279 = 24U;
int16_t x283 = 0;
int16_t x284 = 34;
volatile uint64_t t66 = 15853107840452LLU;
uint32_t x293 = 1566U;
int64_t t68 = 1LL;
static uint16_t x299 = 7614U;
static uint8_t x301 = UINT8_MAX;
int32_t x306 = -3;
int16_t x310 = 481;
int16_t x311 = INT16_MIN;
int8_t x316 = INT8_MIN;
int64_t x319 = -889LL;
uint8_t x326 = 23U;
int8_t x329 = INT8_MIN;
static int64_t x333 = 100LL;
int16_t x341 = 894;
uint32_t x342 = 694245547U;
volatile int64_t t80 = 2941868561807981LL;
static int32_t x356 = INT32_MIN;
static int32_t x358 = -1;
int16_t x361 = INT16_MIN;
static uint8_t x363 = 2U;
static int32_t x368 = INT32_MIN;
static uint16_t x373 = UINT16_MAX;
int16_t x375 = -3112;
static volatile int64_t t88 = -152380LL;
volatile int8_t x389 = -23;
int32_t x399 = -1;
volatile uint16_t x404 = UINT16_MAX;
uint16_t x406 = UINT16_MAX;
int32_t x408 = 4599;
int32_t x419 = INT32_MIN;
static int8_t x422 = INT8_MAX;
int64_t x426 = -1LL;
int16_t x430 = INT16_MIN;
static int64_t x432 = -3316070861443276600LL;
int32_t x441 = INT32_MIN;
int64_t x444 = -3LL;
int64_t t101 = -527172287370962LL;
static int32_t x449 = 30673;
uint16_t x451 = 36U;
int32_t x454 = INT32_MAX;
int32_t x458 = -1;
int32_t t105 = -1;
volatile int32_t x465 = -15400523;
volatile uint64_t x467 = UINT64_MAX;
static int64_t x469 = INT64_MIN;
int32_t x473 = -932264630;
int16_t x474 = INT16_MIN;
volatile int32_t t108 = 3135;
volatile int64_t t109 = -3135776146890303LL;
int8_t x488 = 1;
int32_t x495 = INT32_MIN;
int64_t x505 = INT64_MIN;
static uint16_t x510 = 7574U;
static int8_t x513 = INT8_MIN;
int64_t x514 = 4414946103958969LL;
volatile int16_t x516 = INT16_MAX;
static volatile uint32_t t120 = 2497264U;
uint32_t x538 = UINT32_MAX;
static uint16_t x550 = 1U;
uint8_t x552 = 59U;
int16_t x555 = INT16_MIN;
int16_t x558 = -19;
int8_t x561 = INT8_MIN;
static volatile int64_t x575 = INT64_MIN;
volatile int32_t x578 = INT32_MAX;
volatile uint64_t t131 = 16097LLU;
uint64_t x590 = UINT64_MAX;
int32_t x596 = 28;
int8_t x598 = INT8_MAX;
int16_t x603 = -13214;
static uint32_t x606 = UINT32_MAX;
int64_t t138 = -42386972LL;
uint64_t x617 = UINT64_MAX;
int8_t x620 = -1;
int16_t x629 = INT16_MAX;
uint64_t x630 = 3483459LLU;
uint16_t x631 = 60U;
static volatile int8_t x633 = INT8_MIN;
int8_t x642 = -8;
int8_t x645 = -1;
int16_t x651 = -5424;
volatile int64_t x654 = -1LL;
uint32_t x655 = 25499U;
static volatile uint8_t x664 = 7U;
static uint64_t x667 = 1865796637660LLU;
uint16_t x668 = 44U;
uint64_t x669 = 13362538LLU;
int8_t x676 = INT8_MAX;
static volatile int64_t t154 = 1LL;
int16_t x681 = INT16_MIN;
static uint16_t x686 = 78U;
int16_t x689 = INT16_MIN;
int64_t x692 = INT64_MAX;
static int32_t x696 = INT32_MIN;
volatile int64_t t160 = 4933744201831LL;
int16_t x704 = -1;
uint64_t t162 = 1902LLU;
static int64_t x712 = -17101LL;
static int64_t t163 = 31962145244529299LL;
uint64_t t164 = 98310LLU;
uint8_t x719 = 65U;
volatile int64_t t166 = 36058LL;
volatile int64_t t167 = 4794LL;
uint16_t x730 = 6378U;
uint16_t x733 = 4U;
int32_t x735 = INT32_MIN;
int32_t x745 = INT32_MIN;
uint64_t x751 = UINT64_MAX;
uint8_t x755 = UINT8_MAX;
uint16_t x756 = UINT16_MAX;
volatile int64_t t173 = -418LL;
uint16_t x763 = UINT16_MAX;
static int16_t x765 = -1;
int8_t x776 = INT8_MIN;
int8_t x783 = INT8_MIN;
int32_t t180 = 6810;
int64_t t181 = 17528922727814LL;
int64_t x790 = -164994828121754088LL;
int64_t t183 = 22641LL;
static uint64_t t184 = 374990099LLU;
int8_t x806 = INT8_MIN;
uint64_t x807 = 70704790LLU;
uint8_t x821 = 18U;
volatile uint16_t x822 = UINT16_MAX;
uint16_t x826 = UINT16_MAX;
int64_t t192 = 65069003282LL;
uint32_t x846 = 204422417U;
int16_t x851 = 169;
int64_t x858 = INT64_MIN;
int8_t x859 = INT8_MAX;
int64_t x864 = 11124674546625130LL;
uint32_t x868 = UINT32_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 363LLU;
	volatile uint64_t t0 = 8061368867655425464LLU;

    t0 = (x1&(x2+(x3&x4)));

    if (t0 != 3355LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -38;
	volatile uint8_t x7 = 54U;
	volatile uint32_t t1 = 883U;

    t1 = (x5&(x6+(x7&x8)));

    if (t1 != 10U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x13 = 130U;
	static int16_t x14 = INT16_MAX;
	static volatile uint32_t x15 = 817078836U;
	volatile int64_t x16 = -1LL;
	int64_t t2 = 4777335LL;

    t2 = (x13&(x14+(x15&x16)));

    if (t2 != 2LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = 7965866;
	static int8_t x19 = 3;
	static uint32_t x20 = 826U;
	volatile int64_t t3 = -1209379810572LL;

    t3 = (x17&(x18+(x19&x20)));

    if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	volatile uint32_t x22 = 42953U;
	int64_t x23 = 69281899550887119LL;
	volatile int64_t t4 = 51719504940LL;

    t4 = (x21&(x22+(x23&x24)));

    if (t4 != 69281899550900224LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 1206597687U;
	int8_t x26 = 2;
	int64_t x27 = -12480584243580LL;
	int64_t t5 = 744604617745590190LL;

    t5 = (x25&(x26+(x27&x28)));

    if (t5 != 6LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 783057U;
	int32_t x30 = INT32_MIN;
	uint32_t x31 = UINT32_MAX;
	volatile uint32_t x32 = UINT32_MAX;
	volatile uint32_t t6 = 57U;

    t6 = (x29&(x30+(x31&x32)));

    if (t6 != 783057U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 26496U;
	volatile int8_t x34 = INT8_MAX;
	int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile uint32_t t7 = 4891U;

    t7 = (x33&(x34+(x35&x36)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MAX;
	int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;
	volatile int64_t t8 = 74489345LL;

    t8 = (x37&(x38+(x39&x40)));

    if (t8 != -7LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	int16_t x42 = -8;
	uint32_t x43 = UINT32_MAX;
	volatile int64_t t9 = 3382563LL;

    t9 = (x41&(x42+(x43&x44)));

    if (t9 != 5LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint8_t x45 = 0U;
	static volatile uint32_t x46 = 104375U;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -197;

    t10 = (x45&(x46+(x47&x48)));

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x50 = INT64_MIN;
	uint16_t x52 = 2215U;
	volatile int64_t t11 = -2707833282LL;

    t11 = (x49&(x50+(x51&x52)));

    if (t11 != -9223372036854775641LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	static int16_t x54 = INT16_MIN;
	uint32_t x55 = 86U;
	int32_t x56 = INT32_MIN;
	int64_t t12 = 234LL;

    t12 = (x53&(x54+(x55&x56)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = INT16_MAX;
	volatile uint32_t x58 = 54089341U;
	int8_t x59 = INT8_MAX;
	static uint64_t x60 = UINT64_MAX;
	static uint64_t t13 = 176289615458483LLU;

    t13 = (x57&(x58+(x59&x60)));

    if (t13 != 22268LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 1406829U;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = -1;
	static int16_t x64 = INT16_MIN;
	volatile uint32_t t14 = 86U;

    t14 = (x61&(x62+(x63&x64)));

    if (t14 != 1406720U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x66 = INT32_MIN;
	volatile uint8_t x67 = 113U;
	volatile int64_t x68 = -1LL;

    t15 = (x65&(x66+(x67&x68)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x70 = INT64_MIN;
	volatile int64_t t16 = -1LL;

    t16 = (x69&(x70+(x71&x72)));

    if (t16 != -9223372036854775713LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 23U;
	int16_t x74 = 5;
	static volatile int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 10602;

    t17 = (x73&(x74+(x75&x76)));

    if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = -1LL;
	int32_t x79 = -3586954;
	int16_t x80 = INT16_MAX;

    t18 = (x77&(x78+(x79&x80)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 1U;
	int8_t x82 = INT8_MIN;
	volatile int32_t x83 = INT32_MIN;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint64_t t19 = 6127271933631154LLU;

    t19 = (x81&(x82+(x83&x84)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x88 = -614849378;
	volatile int32_t t20 = 64229234;

    t20 = (x85&(x86+(x87&x88)));

    if (t20 != 8) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 1070733131346471LLU;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 2U;
	volatile int32_t x92 = -2;
	static volatile uint64_t t21 = 33704420853602LLU;

    t21 = (x89&(x90+(x91&x92)));

    if (t21 != 1070733131317250LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -9606;
	int8_t x94 = INT8_MAX;
	int64_t x95 = INT64_MIN;
	static volatile int16_t x96 = INT16_MAX;
	volatile int64_t t22 = 16191039618LL;

    t22 = (x93&(x94+(x95&x96)));

    if (t22 != 122LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MAX;
	static int8_t x99 = INT8_MIN;
	int32_t t23 = 1;

    t23 = (x97&(x98+(x99&x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x103 = 1573395116LL;
	static int64_t t24 = -8137933LL;

    t24 = (x101&(x102+(x103&x104)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x106 = -1;
	static int8_t x107 = INT8_MAX;
	int32_t t25 = 210359034;

    t25 = (x105&(x106+(x107&x108)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MAX;
	int32_t x111 = -16188;
	int64_t x112 = -134LL;
	static int64_t t26 = 7927988925355LL;

    t26 = (x109&(x110+(x111&x112)));

    if (t26 != 16703LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x117 = -425;
	uint8_t x118 = 7U;
	int32_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = 1LLU;

    t27 = (x117&(x118+(x119&x120)));

    if (t27 != 6LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	static int32_t x123 = 1862215;
	int64_t x124 = -1LL;
	static volatile int64_t t28 = 432737LL;

    t28 = (x121&(x122+(x123&x124)));

    if (t28 != 1862470LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MAX;
	int32_t x128 = INT32_MIN;
	uint64_t t29 = 422738753LLU;

    t29 = (x125&(x126+(x127&x128)));

    if (t29 != 9223372034707292032LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x133 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	static int32_t t30 = 1927;

    t30 = (x133&(x134+(x135&x136)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = -4;
	volatile uint64_t x140 = 415009786LLU;
	volatile uint64_t t31 = 29798804LLU;

    t31 = (x137&(x138+(x139&x140)));

    if (t31 != 12LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x145 = 11854U;
	static uint16_t x146 = 11473U;
	uint16_t x147 = 3902U;
	volatile uint16_t x148 = 26U;
	volatile int32_t t32 = 18;

    t32 = (x145&(x146+(x147&x148)));

    if (t32 != 11338) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 3557407;
	static uint8_t x150 = 7U;
	int16_t x151 = -1;
	uint16_t x152 = 20U;

    t33 = (x149&(x150+(x151&x152)));

    if (t33 != 27) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x153 = -1;
	int16_t x154 = INT16_MAX;
	int32_t x156 = INT32_MAX;
	volatile int32_t t34 = 701;

    t34 = (x153&(x154+(x155&x156)));

    if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x158 = UINT32_MAX;
	uint8_t x160 = 3U;
	static volatile uint32_t t35 = 25U;

    t35 = (x157&(x158+(x159&x160)));

    if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x161 = -10;
	static volatile int8_t x162 = -1;
	int32_t x163 = INT32_MAX;
	static uint32_t x164 = 109706888U;
	static uint32_t t36 = 91042284U;

    t36 = (x161&(x162+(x163&x164)));

    if (t36 != 109706886U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MIN;
	static int64_t x167 = INT64_MIN;
	uint64_t x168 = 637846063804975784LLU;
	static volatile uint64_t t37 = 75LLU;

    t37 = (x165&(x166+(x167&x168)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = -9139LL;
	int16_t x171 = 1;
	static int64_t x172 = -15401158316584100LL;
	volatile int64_t t38 = -20332LL;

    t38 = (x169&(x170+(x171&x172)));

    if (t38 != -9216LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x173 = -14;
	int8_t x174 = -1;
	int8_t x176 = INT8_MIN;

    t39 = (x173&(x174+(x175&x176)));

    if (t39 != 4294967154U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x177 = 515U;
	volatile int64_t x178 = INT64_MIN;
	uint8_t x179 = 1U;
	static int64_t x180 = -1LL;
	volatile int64_t t40 = 8323LL;

    t40 = (x177&(x178+(x179&x180)));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x183 = -1LL;
	volatile int64_t x184 = 96LL;
	static int64_t t41 = 4665LL;

    t41 = (x181&(x182+(x183&x184)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 43269972U;
	int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MAX;
	volatile uint32_t x188 = UINT32_MAX;
	static volatile uint32_t t42 = 7U;

    t42 = (x185&(x186+(x187&x188)));

    if (t42 != 43269972U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	static int16_t x192 = -50;
	static volatile uint64_t t43 = 132094LLU;

    t43 = (x189&(x190+(x191&x192)));

    if (t43 != 2147483598LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x194 = 15U;
	uint8_t x195 = 53U;

    t44 = (x193&(x194+(x195&x196)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	uint32_t x198 = 45673U;
	int64_t t45 = 10355LL;

    t45 = (x197&(x198+(x199&x200)));

    if (t45 != 45545LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = -851;
	static int8_t x202 = -1;
	int16_t x203 = -30;
	uint64_t x204 = UINT64_MAX;
	uint64_t t46 = 265633501LLU;

    t46 = (x201&(x202+(x203&x204)));

    if (t46 != 18446744073709550753LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	static int64_t t47 = -671618155123840LL;

    t47 = (x205&(x206+(x207&x208)));

    if (t47 != -4294967296LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MIN;
	static uint32_t x210 = UINT32_MAX;
	int32_t x211 = -24106866;
	volatile int16_t x212 = 496;
	volatile uint32_t t48 = 0U;

    t48 = (x209&(x210+(x211&x212)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = INT16_MAX;
	volatile uint8_t x214 = UINT8_MAX;
	static volatile int16_t x216 = INT16_MAX;
	int32_t t49 = 29;

    t49 = (x213&(x214+(x215&x216)));

    if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = -14;
	int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t50 = 663469199;

    t50 = (x217&(x218+(x219&x220)));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x222 = 7U;
	int64_t x223 = 4479105514439161080LL;
	static int32_t x224 = 85731482;
	volatile int64_t t51 = -34912LL;

    t51 = (x221&(x222+(x223&x224)));

    if (t51 != 16785567LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = INT16_MAX;
	static uint8_t x226 = 12U;
	int16_t x228 = 12;
	static int32_t t52 = 0;

    t52 = (x225&(x226+(x227&x228)));

    if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x229 = -1;
	static int64_t x230 = 4113040439621121LL;
	volatile int16_t x231 = INT16_MAX;
	volatile uint32_t x232 = 8040U;

    t53 = (x229&(x230+(x231&x232)));

    if (t53 != 4113040439629161LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = INT64_MIN;
	uint16_t x234 = 895U;
	uint16_t x236 = 22U;

    t54 = (x233&(x234+(x235&x236)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x238 = UINT64_MAX;
	uint8_t x240 = 55U;

    t55 = (x237&(x238+(x239&x240)));

    if (t55 != 32767LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x241 = 7U;
	int8_t x242 = 3;
	int64_t x244 = -1LL;

    t56 = (x241&(x242+(x243&x244)));

    if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x245 = INT32_MAX;
	volatile uint32_t x246 = 21U;
	static int64_t t57 = 12028370029585064LL;

    t57 = (x245&(x246+(x247&x248)));

    if (t57 != 21LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x253 = 26499LL;
	int8_t x254 = 5;
	volatile int32_t x255 = -1;
	static uint32_t x256 = 3785U;
	int64_t t58 = 467026051615391LL;

    t58 = (x253&(x254+(x255&x256)));

    if (t58 != 1666LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = -1;
	static uint32_t x258 = 1193155U;
	static int32_t x259 = INT32_MAX;
	uint8_t x260 = 1U;
	volatile uint32_t t59 = 493530871U;

    t59 = (x257&(x258+(x259&x260)));

    if (t59 != 1193156U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x262 = -1;
	int16_t x264 = INT16_MIN;

    t60 = (x261&(x262+(x263&x264)));

    if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 34630218023LLU;
	int8_t x268 = 12;
	uint64_t t61 = 113LLU;

    t61 = (x265&(x266+(x267&x268)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = -1;
	static volatile uint64_t x271 = 0LLU;
	static int64_t x272 = INT64_MAX;
	uint64_t t62 = 327635928223286LLU;

    t62 = (x269&(x270+(x271&x272)));

    if (t62 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x273 = 6U;
	int16_t x274 = -1;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = 1U;
	int32_t t63 = 2593;

    t63 = (x273&(x274+(x275&x276)));

    if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	volatile int8_t x280 = INT8_MIN;
	int32_t t64 = -1066677;

    t64 = (x277&(x278+(x279&x280)));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x281 = INT16_MAX;
	static volatile int32_t x282 = INT32_MAX;
	int32_t t65 = 7445;

    t65 = (x281&(x282+(x283&x284)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x285 = UINT16_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	volatile int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;

    t66 = (x285&(x286+(x287&x288)));

    if (t66 != 65535LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x289 = UINT8_MAX;
	static volatile int64_t x290 = -147LL;
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MAX;
	static int64_t t67 = 469LL;

    t67 = (x289&(x290+(x291&x292)));

    if (t67 != 108LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x294 = -1LL;
	volatile int32_t x295 = INT32_MAX;
	int64_t x296 = INT64_MIN;

    t68 = (x293&(x294+(x295&x296)));

    if (t68 != 1566LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	int8_t x300 = INT8_MAX;
	volatile int32_t t69 = 551;

    t69 = (x297&(x298+(x299&x300)));

    if (t69 != 32702) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x302 = 31U;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = -1;
	uint32_t t70 = 8771372U;

    t70 = (x301&(x302+(x303&x304)));

    if (t70 != 31U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x305 = INT16_MAX;
	int64_t x307 = 29262LL;
	volatile uint32_t x308 = UINT32_MAX;
	int64_t t71 = 840224LL;

    t71 = (x305&(x306+(x307&x308)));

    if (t71 != 29259LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x309 = INT32_MIN;
	uint64_t x312 = 4846983LLU;
	static uint64_t t72 = 6528LLU;

    t72 = (x309&(x310+(x311&x312)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x313 = 271U;
	volatile int64_t x314 = INT64_MAX;
	uint64_t x315 = 239LLU;
	static uint64_t t73 = 46LLU;

    t73 = (x313&(x314+(x315&x316)));

    if (t73 != 15LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x317 = 1;
	int8_t x318 = -1;
	uint64_t x320 = 456850840406LLU;
	static uint64_t t74 = 145060209531298981LLU;

    t74 = (x317&(x318+(x319&x320)));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x321 = -430;
	uint32_t x322 = 12U;
	volatile uint64_t x323 = UINT64_MAX;
	volatile uint16_t x324 = 6624U;
	uint64_t t75 = 810481LLU;

    t75 = (x321&(x322+(x323&x324)));

    if (t75 != 6208LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x325 = -48;
	volatile uint16_t x327 = 3U;
	int32_t x328 = INT32_MIN;
	int32_t t76 = -79073;

    t76 = (x325&(x326+(x327&x328)));

    if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x330 = 2784U;
	int32_t x331 = INT32_MAX;
	int32_t x332 = INT32_MAX;
	volatile uint32_t t77 = 431849U;

    t77 = (x329&(x330+(x331&x332)));

    if (t77 != 2147486336U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x334 = -1;
	int16_t x335 = 18;
	uint32_t x336 = UINT32_MAX;
	static volatile int64_t t78 = 2525925906058LL;

    t78 = (x333&(x334+(x335&x336)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x343 = 1;
	volatile int16_t x344 = 1;
	uint32_t t79 = 7729018U;

    t79 = (x341&(x342+(x343&x344)));

    if (t79 != 44U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x349 = UINT8_MAX;
	static int64_t x350 = -7LL;
	uint16_t x351 = 185U;
	volatile int64_t x352 = INT64_MAX;

    t80 = (x349&(x350+(x351&x352)));

    if (t80 != 178LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x353 = INT64_MIN;
	volatile uint64_t x354 = UINT64_MAX;
	uint8_t x355 = UINT8_MAX;
	uint64_t t81 = 4271820930588LLU;

    t81 = (x353&(x354+(x355&x356)));

    if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -1;
	volatile uint64_t t82 = 2013009LLU;

    t82 = (x357&(x358+(x359&x360)));

    if (t82 != 2147483646LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x362 = -1;
	int16_t x364 = INT16_MAX;
	volatile int32_t t83 = -1858;

    t83 = (x361&(x362+(x363&x364)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x365 = 370U;
	uint64_t x366 = 2051087005249768LLU;
	int8_t x367 = 0;
	uint64_t t84 = 6882453063143923389LLU;

    t84 = (x365&(x366+(x367&x368)));

    if (t84 != 96LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x374 = INT64_MIN;
	int64_t x376 = INT64_MAX;
	int64_t t85 = 1LL;

    t85 = (x373&(x374+(x375&x376)));

    if (t85 != 62424LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x377 = 1165687;
	uint8_t x378 = UINT8_MAX;
	int64_t x379 = INT64_MIN;
	static volatile int64_t x380 = -6334LL;
	int64_t t86 = -39171125719LL;

    t86 = (x377&(x378+(x379&x380)));

    if (t86 != 119LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = -1LL;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	volatile int16_t x384 = 23;
	static volatile int64_t t87 = INT64_MIN;

    t87 = (x381&(x382+(x383&x384)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = INT64_MAX;
	uint16_t x386 = UINT16_MAX;
	static uint32_t x387 = UINT32_MAX;
	static int8_t x388 = INT8_MIN;

    t88 = (x385&(x386+(x387&x388)));

    if (t88 != 65407LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x390 = 98U;
	int16_t x391 = -1;
	uint32_t x392 = 0U;
	volatile uint32_t t89 = 0U;

    t89 = (x389&(x390+(x391&x392)));

    if (t89 != 96U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x397 = -1;
	static int8_t x398 = 14;
	static volatile uint32_t x400 = 11154U;
	uint32_t t90 = 26U;

    t90 = (x397&(x398+(x399&x400)));

    if (t90 != 11168U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x401 = 400;
	int16_t x402 = -1;
	int16_t x403 = 2;
	static volatile int32_t t91 = -12351005;

    t91 = (x401&(x402+(x403&x404)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x405 = -1;
	uint32_t x407 = UINT32_MAX;
	uint32_t t92 = 2065847743U;

    t92 = (x405&(x406+(x407&x408)));

    if (t92 != 70134U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = -1;
	volatile int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;
	uint16_t x416 = 33U;
	volatile int32_t t93 = 34048;

    t93 = (x413&(x414+(x415&x416)));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x417 = 7U;
	volatile int64_t x418 = INT64_MIN;
	static uint64_t x420 = UINT64_MAX;
	volatile uint64_t t94 = 7563501024171LLU;

    t94 = (x417&(x418+(x419&x420)));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x423 = INT64_MAX;
	volatile uint16_t x424 = UINT16_MAX;
	volatile int64_t t95 = -321147064634LL;

    t95 = (x421&(x422+(x423&x424)));

    if (t95 != 65536LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = INT16_MAX;
	uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MAX;
	int64_t t96 = -12615514606561LL;

    t96 = (x425&(x426+(x427&x428)));

    if (t96 != 126LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x429 = 1177289714U;
	static uint32_t x431 = UINT32_MAX;
	volatile int64_t t97 = -32638619050110800LL;

    t97 = (x429&(x430+(x431&x432)));

    if (t97 != 1143210176LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x433 = -1380633090081LL;
	int16_t x434 = 0;
	int64_t x435 = -1LL;
	volatile int16_t x436 = -1;
	volatile int64_t t98 = -9LL;

    t98 = (x433&(x434+(x435&x436)));

    if (t98 != -1380633090081LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = -1;
	int16_t x438 = -1;
	uint8_t x439 = 16U;
	int64_t x440 = 2777LL;
	static int64_t t99 = -17LL;

    t99 = (x437&(x438+(x439&x440)));

    if (t99 != 15LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x442 = INT8_MIN;
	volatile uint16_t x443 = 1U;
	int64_t t100 = 97636LL;

    t100 = (x441&(x442+(x443&x444)));

    if (t100 != -2147483648LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x445 = INT8_MAX;
	uint16_t x446 = 31U;
	volatile int8_t x447 = INT8_MIN;
	static int64_t x448 = -1055061533167801LL;

    t101 = (x445&(x446+(x447&x448)));

    if (t101 != 31LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x450 = INT32_MIN;
	uint8_t x452 = UINT8_MAX;
	int32_t t102 = -26;

    t102 = (x449&(x450+(x451&x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x455 = INT32_MIN;
	int16_t x456 = -1;
	static volatile int32_t t103 = -122;

    t103 = (x453&(x454+(x455&x456)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MIN;
	int8_t x459 = -1;
	uint16_t x460 = 1U;
	static volatile int64_t t104 = -58067LL;

    t104 = (x457&(x458+(x459&x460)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = -199;
	volatile uint8_t x463 = 0U;
	static int32_t x464 = -791241;

    t105 = (x461&(x462+(x463&x464)));

    if (t105 != 2147483449) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x466 = UINT16_MAX;
	int16_t x468 = 119;
	uint64_t t106 = 21227913670LLU;

    t106 = (x465&(x466+(x467&x468)));

    if (t106 != 65588LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x470 = 1LL;
	volatile int8_t x471 = 11;
	int8_t x472 = 0;
	volatile int64_t t107 = -5527LL;

    t107 = (x469&(x470+(x471&x472)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x475 = INT32_MIN;
	volatile uint16_t x476 = 26U;

    t108 = (x473&(x474+(x475&x476)));

    if (t108 != -932282368) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x477 = -208;
	int8_t x478 = -1;
	volatile int64_t x479 = INT64_MAX;
	uint32_t x480 = UINT32_MAX;

    t109 = (x477&(x478+(x479&x480)));

    if (t109 != 4294967088LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x481 = 13227U;
	volatile uint32_t x482 = 65012U;
	uint64_t x483 = 3481LLU;
	int8_t x484 = 2;
	uint64_t t110 = 3371240791LLU;

    t110 = (x481&(x482+(x483&x484)));

    if (t110 != 12704LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x485 = 450602670U;
	uint16_t x486 = 4U;
	uint8_t x487 = UINT8_MAX;
	volatile uint32_t t111 = 3U;

    t111 = (x485&(x486+(x487&x488)));

    if (t111 != 4U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x489 = 845LLU;
	static int16_t x490 = INT16_MAX;
	static int32_t x491 = INT32_MIN;
	int64_t x492 = INT64_MAX;
	volatile uint64_t t112 = 19421066LLU;

    t112 = (x489&(x490+(x491&x492)));

    if (t112 != 845LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x493 = UINT8_MAX;
	static uint64_t x494 = UINT64_MAX;
	int32_t x496 = INT32_MIN;
	uint64_t t113 = 44LLU;

    t113 = (x493&(x494+(x495&x496)));

    if (t113 != 255LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x497 = 0;
	uint16_t x498 = UINT16_MAX;
	int32_t x499 = INT32_MAX;
	int8_t x500 = 1;
	volatile int32_t t114 = -3900449;

    t114 = (x497&(x498+(x499&x500)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = INT16_MIN;
	volatile int16_t x502 = INT16_MIN;
	volatile int32_t x503 = INT32_MAX;
	int16_t x504 = -411;
	int32_t t115 = 211843323;

    t115 = (x501&(x502+(x503&x504)));

    if (t115 != 2147418112) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	uint8_t x508 = 92U;
	int64_t t116 = INT64_MIN;

    t116 = (x505&(x506+(x507&x508)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x509 = INT32_MIN;
	static int64_t x511 = INT64_MIN;
	int8_t x512 = INT8_MAX;
	int64_t t117 = 62502655LL;

    t117 = (x509&(x510+(x511&x512)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x515 = 4160588459176LLU;
	uint64_t t118 = 1044837186274LLU;

    t118 = (x513&(x514+(x515&x516)));

    if (t118 != 4414946103970304LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 1527U;
	int32_t x527 = INT32_MIN;
	uint32_t x528 = 15744285U;
	static uint32_t t119 = 36803U;

    t119 = (x525&(x526+(x527&x528)));

    if (t119 != 1408U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x533 = INT32_MIN;
	uint8_t x534 = 0U;
	uint16_t x535 = 3U;
	volatile uint32_t x536 = 5424U;

    t120 = (x533&(x534+(x535&x536)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = -3;
	int64_t x539 = -464LL;
	int16_t x540 = -1;
	int64_t t121 = 2LL;

    t121 = (x537&(x538+(x539&x540)));

    if (t121 != 4294966829LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x541 = -1LL;
	int16_t x542 = -31;
	int16_t x543 = INT16_MIN;
	static volatile uint32_t x544 = 31737U;
	int64_t t122 = -11110LL;

    t122 = (x541&(x542+(x543&x544)));

    if (t122 != 4294967265LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x545 = INT64_MAX;
	int32_t x546 = 0;
	uint16_t x547 = 1436U;
	static int8_t x548 = -1;
	static volatile int64_t t123 = -966534583LL;

    t123 = (x545&(x546+(x547&x548)));

    if (t123 != 1436LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x549 = -1LL;
	int8_t x551 = 3;
	int64_t t124 = 58LL;

    t124 = (x549&(x550+(x551&x552)));

    if (t124 != 4LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x553 = INT16_MIN;
	int64_t x554 = -7LL;
	volatile int16_t x556 = -1286;
	static int64_t t125 = 7722LL;

    t125 = (x553&(x554+(x555&x556)));

    if (t125 != -65536LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x557 = 1U;
	int32_t x559 = -1;
	int8_t x560 = -1;
	static int32_t t126 = 28144;

    t126 = (x557&(x558+(x559&x560)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x562 = INT16_MIN;
	uint8_t x563 = 3U;
	int32_t x564 = INT32_MAX;
	int32_t t127 = -2;

    t127 = (x561&(x562+(x563&x564)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x565 = 110;
	int8_t x566 = -1;
	static int16_t x567 = -4045;
	int8_t x568 = INT8_MIN;
	int32_t t128 = 7763;

    t128 = (x565&(x566+(x567&x568)));

    if (t128 != 110) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = INT32_MAX;
	static int16_t x570 = 1440;
	int32_t x571 = 89;
	static int16_t x572 = INT16_MIN;
	int32_t t129 = -3;

    t129 = (x569&(x570+(x571&x572)));

    if (t129 != 1440) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x573 = 12U;
	volatile int8_t x574 = 3;
	int16_t x576 = INT16_MIN;
	int64_t t130 = 4024LL;

    t130 = (x573&(x574+(x575&x576)));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x577 = -3;
	static int8_t x579 = INT8_MIN;
	uint64_t x580 = 1048130192795734LLU;

    t131 = (x577&(x578+(x579&x580)));

    if (t131 != 1048132340279293LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x581 = INT32_MAX;
	int64_t x582 = -1LL;
	uint32_t x583 = UINT32_MAX;
	static uint8_t x584 = UINT8_MAX;
	int64_t t132 = 233450095628LL;

    t132 = (x581&(x582+(x583&x584)));

    if (t132 != 254LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x585 = 2U;
	volatile int64_t x586 = INT64_MIN;
	volatile int64_t x587 = INT64_MAX;
	int32_t x588 = INT32_MAX;
	static volatile int64_t t133 = -171944LL;

    t133 = (x585&(x586+(x587&x588)));

    if (t133 != 2LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x589 = 7206757625LLU;
	static int64_t x591 = -2016397LL;
	int8_t x592 = INT8_MAX;
	static uint64_t t134 = 464LLU;

    t134 = (x589&(x590+(x591&x592)));

    if (t134 != 112LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x593 = 0U;
	volatile int8_t x594 = -1;
	int64_t x595 = -169537364LL;
	volatile int64_t t135 = 29LL;

    t135 = (x593&(x594+(x595&x596)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x597 = -2881482673544272712LL;
	int64_t x599 = 474267798952LL;
	uint32_t x600 = 5975105U;
	volatile int64_t t136 = 1466249744867LL;

    t136 = (x597&(x598+(x599&x600)));

    if (t136 != 1049656LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x601 = INT32_MAX;
	uint64_t x602 = 20316LLU;
	uint32_t x604 = 0U;
	volatile uint64_t t137 = 14381LLU;

    t137 = (x601&(x602+(x603&x604)));

    if (t137 != 20316LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x605 = 513435U;
	static uint8_t x607 = UINT8_MAX;
	int64_t x608 = -1LL;

    t138 = (x605&(x606+(x607&x608)));

    if (t138 != 154LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x610 = -704;
	int16_t x611 = INT16_MAX;
	int64_t x612 = 12464141LL;
	volatile int64_t t139 = -411458346737061429LL;

    t139 = (x609&(x610+(x611&x612)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x613 = UINT32_MAX;
	uint8_t x614 = 24U;
	uint16_t x615 = 51U;
	volatile int8_t x616 = INT8_MIN;
	volatile uint32_t t140 = 49779U;

    t140 = (x613&(x614+(x615&x616)));

    if (t140 != 24U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x618 = -1;
	volatile int8_t x619 = INT8_MIN;
	uint64_t t141 = 1606498LLU;

    t141 = (x617&(x618+(x619&x620)));

    if (t141 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x625 = 23U;
	int8_t x626 = INT8_MIN;
	static int16_t x627 = -2721;
	static int8_t x628 = INT8_MAX;
	volatile int32_t t142 = -6;

    t142 = (x625&(x626+(x627&x628)));

    if (t142 != 23) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x632 = INT32_MIN;
	volatile uint64_t t143 = 90LLU;

    t143 = (x629&(x630+(x631&x632)));

    if (t143 != 10051LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x634 = 1381U;
	volatile int16_t x635 = INT16_MIN;
	static uint8_t x636 = UINT8_MAX;
	volatile int32_t t144 = -1943;

    t144 = (x633&(x634+(x635&x636)));

    if (t144 != 1280) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x637 = -11202993611616929LL;
	volatile uint64_t x638 = 13743947745373428LLU;
	int64_t x639 = INT64_MIN;
	int16_t x640 = INT16_MAX;
	static volatile uint64_t t145 = 202714270LLU;

    t145 = (x637&(x638+(x639&x640)));

    if (t145 != 4521243370359892LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int32_t x641 = INT32_MIN;
	uint8_t x643 = UINT8_MAX;
	int16_t x644 = INT16_MAX;
	int32_t t146 = 0;

    t146 = (x641&(x642+(x643&x644)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x646 = INT8_MAX;
	static int16_t x647 = INT16_MIN;
	uint16_t x648 = 3U;
	int32_t t147 = -3;

    t147 = (x645&(x646+(x647&x648)));

    if (t147 != 127) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = -1;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t148 = 335707;

    t148 = (x649&(x650+(x651&x652)));

    if (t148 != 60032) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x653 = -1;
	int16_t x656 = INT16_MIN;
	static volatile int64_t t149 = -648LL;

    t149 = (x653&(x654+(x655&x656)));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x657 = -10886;
	int8_t x658 = INT8_MAX;
	uint16_t x659 = UINT16_MAX;
	int8_t x660 = INT8_MAX;
	int32_t t150 = 268;

    t150 = (x657&(x658+(x659&x660)));

    if (t150 != 122) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x661 = -1;
	int16_t x662 = -14592;
	static uint16_t x663 = 197U;
	static volatile int32_t t151 = 7561;

    t151 = (x661&(x662+(x663&x664)));

    if (t151 != -14587) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x666 = INT16_MAX;
	uint64_t t152 = 4122433939949634109LLU;

    t152 = (x665&(x666+(x667&x668)));

    if (t152 != 32779LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x670 = INT64_MIN;
	uint8_t x671 = UINT8_MAX;
	uint8_t x672 = UINT8_MAX;
	volatile uint64_t t153 = 33LLU;

    t153 = (x669&(x670+(x671&x672)));

    if (t153 != 106LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x673 = 0U;
	uint8_t x674 = 0U;
	int64_t x675 = -453LL;

    t154 = (x673&(x674+(x675&x676)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x677 = INT8_MAX;
	int32_t x678 = -3804406;
	uint64_t x679 = 1LLU;
	volatile int16_t x680 = 0;
	volatile uint64_t t155 = 3418LLU;

    t155 = (x677&(x678+(x679&x680)));

    if (t155 != 10LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x682 = 0U;
	uint16_t x683 = 61U;
	volatile uint16_t x684 = 3U;
	volatile int32_t t156 = 2034;

    t156 = (x681&(x682+(x683&x684)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x685 = 7417600268070LLU;
	int16_t x687 = INT16_MAX;
	uint32_t x688 = 246U;
	uint64_t t157 = 127455848LLU;

    t157 = (x685&(x686+(x687&x688)));

    if (t157 != 260LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x690 = INT32_MIN;
	int8_t x691 = INT8_MAX;
	volatile int64_t t158 = -1LL;

    t158 = (x689&(x690+(x691&x692)));

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x693 = UINT8_MAX;
	int32_t x694 = INT32_MAX;
	static volatile uint32_t x695 = 14267U;
	uint32_t t159 = 1327514488U;

    t159 = (x693&(x694+(x695&x696)));

    if (t159 != 255U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x697 = INT64_MIN;
	int64_t x698 = 528989LL;
	uint8_t x699 = UINT8_MAX;
	int16_t x700 = INT16_MAX;

    t160 = (x697&(x698+(x699&x700)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x701 = INT32_MIN;
	volatile int8_t x702 = 60;
	int8_t x703 = INT8_MIN;
	static volatile int32_t t161 = INT32_MIN;

    t161 = (x701&(x702+(x703&x704)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x705 = 1031U;
	uint32_t x706 = 3U;
	int8_t x707 = -1;
	uint64_t x708 = 62734054868LLU;

    t162 = (x705&(x706+(x707&x708)));

    if (t162 != 1031LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x709 = -32;
	uint32_t x710 = UINT32_MAX;
	int64_t x711 = INT64_MIN;

    t163 = (x709&(x710+(x711&x712)));

    if (t163 != -9223372032559808544LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x713 = -1;
	uint64_t x714 = 23180304785883LLU;
	static uint32_t x715 = UINT32_MAX;
	uint16_t x716 = 32699U;

    t164 = (x713&(x714+(x715&x716)));

    if (t164 != 23180304818582LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x717 = INT16_MIN;
	uint32_t x718 = 6369109U;
	int32_t x720 = INT32_MIN;
	uint32_t t165 = 72647086U;

    t165 = (x717&(x718+(x719&x720)));

    if (t165 != 6356992U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x721 = 776232LL;
	uint8_t x722 = 15U;
	uint32_t x723 = 7610822U;
	int32_t x724 = INT32_MIN;

    t166 = (x721&(x722+(x723&x724)));

    if (t166 != 8LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x725 = INT32_MAX;
	int8_t x726 = INT8_MAX;
	int32_t x727 = INT32_MAX;
	int64_t x728 = 7799565LL;

    t167 = (x725&(x726+(x727&x728)));

    if (t167 != 7799692LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x729 = -4520063052679430833LL;
	int64_t x731 = INT64_MIN;
	uint32_t x732 = 6257775U;
	int64_t t168 = 3237055696662909LL;

    t168 = (x729&(x730+(x731&x732)));

    if (t168 != 6218LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x734 = 690821U;
	uint64_t x736 = 141743291398675236LLU;
	uint64_t t169 = 44356468692LLU;

    t169 = (x733&(x734+(x735&x736)));

    if (t169 != 4LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x741 = -52;
	uint16_t x742 = 93U;
	int32_t x743 = INT32_MAX;
	static uint32_t x744 = 217909828U;
	uint32_t t170 = 15365186U;

    t170 = (x741&(x742+(x743&x744)));

    if (t170 != 217909888U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x746 = 58U;
	uint32_t x747 = UINT32_MAX;
	uint64_t x748 = UINT64_MAX;
	uint64_t t171 = 414225453307LLU;

    t171 = (x745&(x746+(x747&x748)));

    if (t171 != 4294967296LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = -79;
	int32_t x750 = -9239;
	int64_t x752 = INT64_MIN;
	volatile uint64_t t172 = 43610550LLU;

    t172 = (x749&(x750+(x751&x752)));

    if (t172 != 9223372036854766497LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x753 = -1;
	int64_t x754 = INT64_MIN;

    t173 = (x753&(x754+(x755&x756)));

    if (t173 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = UINT16_MAX;
	static int8_t x758 = 2;
	uint64_t x759 = UINT64_MAX;
	static uint32_t x760 = 0U;
	volatile uint64_t t174 = 66808867167181LLU;

    t174 = (x757&(x758+(x759&x760)));

    if (t174 != 2LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x761 = -109680095064090224LL;
	uint8_t x762 = UINT8_MAX;
	int64_t x764 = 12LL;
	static volatile int64_t t175 = -12893973153902LL;

    t175 = (x761&(x762+(x763&x764)));

    if (t175 != 256LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x766 = UINT32_MAX;
	int64_t x767 = -111763LL;
	int64_t x768 = 498LL;
	int64_t t176 = 5475073155601LL;

    t176 = (x765&(x766+(x767&x768)));

    if (t176 != 4294967647LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x769 = 2;
	static int32_t x770 = -141522944;
	int8_t x771 = 7;
	int16_t x772 = INT16_MAX;
	volatile int32_t t177 = 1;

    t177 = (x769&(x770+(x771&x772)));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x773 = UINT8_MAX;
	int64_t x774 = -29645202312889743LL;
	int8_t x775 = INT8_MAX;
	int64_t t178 = 10LL;

    t178 = (x773&(x774+(x775&x776)));

    if (t178 != 113LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = UINT16_MAX;
	static volatile uint8_t x779 = 55U;
	volatile int32_t x780 = INT32_MIN;
	int32_t t179 = 3726;

    t179 = (x777&(x778+(x779&x780)));

    if (t179 != 65408) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x781 = INT16_MIN;
	int16_t x782 = INT16_MAX;
	static volatile uint8_t x784 = UINT8_MAX;

    t180 = (x781&(x782+(x783&x784)));

    if (t180 != 32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x785 = -41;
	static int16_t x786 = INT16_MAX;
	int64_t x787 = INT64_MIN;
	int8_t x788 = INT8_MAX;

    t181 = (x785&(x786+(x787&x788)));

    if (t181 != 32727LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x789 = INT32_MIN;
	int8_t x791 = -1;
	volatile uint32_t x792 = 10687U;
	int64_t t182 = 28LL;

    t182 = (x789&(x790+(x791&x792)));

    if (t182 != -164994830135459840LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int8_t x798 = INT8_MIN;
	volatile int8_t x799 = INT8_MIN;
	int64_t x800 = -1LL;

    t183 = (x797&(x798+(x799&x800)));

    if (t183 != 65280LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x801 = 60785344340832LLU;
	int16_t x802 = INT16_MIN;
	int64_t x803 = -438LL;
	int64_t x804 = 186LL;

    t184 = (x801&(x802+(x803&x804)));

    if (t184 != 60785344315392LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x805 = INT32_MIN;
	uint64_t x808 = 18266963920LLU;
	volatile uint64_t t185 = 0LLU;

    t185 = (x805&(x806+(x807&x808)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	volatile int8_t x810 = INT8_MIN;
	int32_t x811 = INT32_MIN;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t186 = 142073833335992961LLU;

    t186 = (x809&(x810+(x811&x812)));

    if (t186 != 65408LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x813 = 13671995U;
	int64_t x814 = INT64_MAX;
	int64_t x815 = INT64_MIN;
	static uint32_t x816 = 2532556U;
	volatile int64_t t187 = 125170LL;

    t187 = (x813&(x814+(x815&x816)));

    if (t187 != 13671995LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x817 = INT8_MAX;
	static int16_t x818 = INT16_MIN;
	static int64_t x819 = INT64_MIN;
	uint8_t x820 = UINT8_MAX;
	int64_t t188 = -88575172837309LL;

    t188 = (x817&(x818+(x819&x820)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x823 = -1;
	int64_t x824 = -1LL;
	int64_t t189 = -58124LL;

    t189 = (x821&(x822+(x823&x824)));

    if (t189 != 18LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x825 = INT64_MIN;
	static volatile int64_t x827 = INT64_MIN;
	int32_t x828 = 6642;
	volatile int64_t t190 = 277LL;

    t190 = (x825&(x826+(x827&x828)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x833 = INT16_MAX;
	volatile uint16_t x834 = UINT16_MAX;
	int16_t x835 = INT16_MAX;
	int32_t x836 = INT32_MIN;
	static volatile int32_t t191 = 596287;

    t191 = (x833&(x834+(x835&x836)));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x837 = -1LL;
	volatile int32_t x838 = INT32_MIN;
	volatile int64_t x839 = INT64_MAX;
	volatile int16_t x840 = INT16_MIN;

    t192 = (x837&(x838+(x839&x840)));

    if (t192 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x841 = 6878;
	static uint32_t x842 = UINT32_MAX;
	int32_t x843 = 7010800;
	int32_t x844 = INT32_MAX;
	static volatile uint32_t t193 = 212U;

    t193 = (x841&(x842+(x843&x844)));

    if (t193 != 6350U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x845 = INT64_MIN;
	int16_t x847 = INT16_MIN;
	uint64_t x848 = UINT64_MAX;
	uint64_t t194 = 19LLU;

    t194 = (x845&(x846+(x847&x848)));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x849 = -1;
	static uint8_t x850 = UINT8_MAX;
	int64_t x852 = 1618548376308094LL;
	volatile int64_t t195 = 1LL;

    t195 = (x849&(x850+(x851&x852)));

    if (t195 != 295LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x853 = INT16_MIN;
	volatile int16_t x854 = INT16_MIN;
	static int8_t x855 = 0;
	int8_t x856 = -1;
	int32_t t196 = -15;

    t196 = (x853&(x854+(x855&x856)));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x857 = UINT64_MAX;
	uint32_t x860 = 29U;
	static volatile uint64_t t197 = 3LLU;

    t197 = (x857&(x858+(x859&x860)));

    if (t197 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x861 = -116226569;
	uint64_t x862 = 2171814121345LLU;
	int8_t x863 = -1;
	uint64_t t198 = 60849038222448878LLU;

    t198 = (x861&(x862+(x863&x864)));

    if (t198 != 11126846280172003LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x865 = 1;
	int8_t x866 = INT8_MAX;
	int16_t x867 = INT16_MAX;
	uint32_t t199 = 1035322U;

    t199 = (x865&(x866+(x867&x868)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

