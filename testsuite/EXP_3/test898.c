
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

static int64_t x3 = INT64_MAX;
int16_t x8 = INT16_MAX;
static volatile int32_t t1 = 0;
static int8_t x9 = INT8_MIN;
static volatile int32_t x11 = INT32_MAX;
int32_t t2 = 1383760;
volatile int64_t x15 = INT64_MAX;
volatile int64_t t3 = -117364LL;
int64_t t4 = 3836563303605762747LL;
int16_t x22 = 814;
int16_t x30 = -1;
static uint64_t t8 = 1088179844800937LLU;
int32_t x40 = INT32_MAX;
int8_t x50 = INT8_MIN;
int64_t x58 = 94941141295908LL;
int64_t x64 = INT64_MIN;
uint64_t t14 = 138857098208798LLU;
int8_t x69 = INT8_MAX;
volatile int8_t x87 = INT8_MIN;
uint8_t x89 = 6U;
uint8_t x90 = 52U;
volatile uint16_t x95 = 100U;
int16_t x97 = INT16_MAX;
int8_t x108 = INT8_MIN;
int64_t x111 = INT64_MIN;
int8_t x112 = INT8_MIN;
volatile int16_t x126 = 4232;
volatile int16_t x134 = INT16_MIN;
int64_t t32 = -2021782597LL;
int32_t x139 = -1;
uint64_t x141 = 291LLU;
volatile int32_t t34 = 455587923;
static volatile int32_t x147 = 465909;
int8_t x150 = INT8_MIN;
volatile int16_t x155 = -1;
volatile int32_t t37 = 46;
static int64_t x157 = -1LL;
int32_t x168 = 3688805;
uint8_t x176 = UINT8_MAX;
int64_t x178 = 212038390LL;
uint16_t x179 = 2237U;
static int32_t x181 = -1;
int16_t x186 = 0;
int8_t x194 = INT8_MIN;
int16_t x196 = INT16_MAX;
int32_t x205 = -533076085;
uint8_t x208 = 4U;
volatile int16_t x215 = 366;
static int64_t x225 = -1LL;
static int64_t x232 = INT64_MIN;
uint16_t x235 = 1479U;
int32_t t57 = 2;
uint64_t x237 = UINT64_MAX;
uint32_t x242 = UINT32_MAX;
int32_t x245 = INT32_MAX;
int8_t x249 = INT8_MAX;
static int16_t x252 = INT16_MAX;
int32_t t61 = 528234828;
static int64_t x254 = INT64_MIN;
uint64_t x256 = 788867120LLU;
int64_t x258 = -1LL;
int64_t x265 = -1LL;
uint32_t x269 = 2564U;
int8_t x272 = INT8_MIN;
volatile int64_t t67 = -1610913732LL;
static uint16_t x282 = 23256U;
static uint8_t x284 = 62U;
volatile int64_t t70 = -47019940430562264LL;
uint32_t x291 = 6381984U;
int64_t x294 = INT64_MIN;
int16_t x295 = -6790;
int16_t x297 = -1;
int16_t x308 = -3;
int64_t x314 = INT64_MIN;
int8_t x315 = INT8_MIN;
int64_t x320 = -1665129598546738676LL;
uint32_t x329 = 1U;
static uint16_t x330 = 1386U;
int8_t x339 = INT8_MAX;
volatile uint64_t t83 = 11LLU;
uint32_t x346 = 220U;
int64_t t86 = 1163LL;
int16_t x354 = INT16_MAX;
static int64_t x357 = -1LL;
volatile int32_t x362 = -1;
int32_t x364 = INT32_MIN;
int64_t x368 = INT64_MIN;
int8_t x371 = INT8_MAX;
int64_t x374 = INT64_MAX;
static volatile int64_t t92 = 440899101642LL;
uint8_t x383 = 0U;
volatile uint8_t x384 = 2U;
volatile int32_t t94 = 267073175;
uint32_t x387 = UINT32_MAX;
static int32_t t96 = -21330382;
uint8_t x395 = UINT8_MAX;
int64_t x398 = INT64_MIN;
int8_t x400 = INT8_MAX;
volatile uint32_t t99 = UINT32_MAX;
int64_t x405 = INT64_MIN;
volatile uint64_t t102 = 192LLU;
volatile int16_t x426 = INT16_MAX;
int64_t x429 = 1704168871LL;
static int64_t x431 = INT64_MIN;
int16_t x433 = 5832;
uint64_t t108 = 18445571015LLU;
static volatile uint32_t t110 = 2170605U;
int64_t x449 = -1LL;
int64_t x452 = INT64_MAX;
uint8_t x455 = 11U;
static volatile uint32_t x474 = 1862805971U;
volatile int64_t t116 = 97LL;
int8_t x481 = INT8_MIN;
int8_t x484 = -1;
static uint64_t x485 = 232024053LLU;
int16_t x486 = -1;
uint16_t x488 = 21570U;
volatile uint8_t x489 = 1U;
uint64_t t119 = 102146LLU;
uint32_t x493 = UINT32_MAX;
static volatile int64_t x494 = -1LL;
int8_t x497 = INT8_MAX;
int64_t x499 = INT64_MIN;
int8_t x512 = -4;
volatile uint64_t t124 = 6225LLU;
int64_t x513 = INT64_MAX;
int16_t x524 = INT16_MAX;
int32_t x547 = INT32_MIN;
int64_t x561 = -50289494414518LL;
uint8_t x565 = 15U;
int16_t x566 = 78;
uint64_t x570 = 76524663919LLU;
volatile int64_t x572 = 92160767028355103LL;
uint32_t x578 = 5554106U;
uint32_t t140 = 315734330U;
uint8_t x585 = UINT8_MAX;
volatile uint32_t x589 = 25131U;
uint8_t x593 = 6U;
uint16_t x595 = 7U;
volatile int64_t t144 = 2996356553322114932LL;
int32_t x598 = 337;
int32_t x599 = -49445977;
int32_t t145 = -82;
static int16_t x601 = INT16_MAX;
volatile int32_t t147 = 25;
int32_t x612 = -41746;
uint64_t x613 = 35702919080400LLU;
int16_t x621 = INT16_MAX;
volatile uint64_t t151 = 27028044428458LLU;
uint16_t x629 = 2U;
static volatile int32_t t153 = 912;
uint64_t x634 = UINT64_MAX;
volatile int16_t x635 = -1;
volatile int32_t x637 = -1;
int32_t x640 = -2660898;
int8_t x641 = INT8_MIN;
static volatile int32_t x645 = -1;
int8_t x654 = -1;
int64_t x658 = INT64_MAX;
int64_t t162 = 19026463459LL;
uint16_t x669 = UINT16_MAX;
int32_t x674 = -2;
int64_t x689 = INT64_MAX;
int8_t x691 = -1;
uint64_t x692 = 830917LLU;
volatile uint64_t x696 = 985936533569895203LLU;
static volatile int64_t x697 = INT64_MIN;
uint32_t x703 = UINT32_MAX;
uint64_t x709 = UINT64_MAX;
static int64_t x711 = -201LL;
static uint32_t x716 = 3879U;
int16_t x722 = INT16_MIN;
int8_t x732 = -1;
volatile int32_t t178 = -238;
int8_t x735 = INT8_MAX;
int8_t x736 = INT8_MIN;
int32_t x756 = 24044;
volatile int16_t x757 = INT16_MIN;
static uint8_t x760 = UINT8_MAX;
volatile int32_t t187 = -372629;
int32_t x770 = 1160815;
uint32_t x776 = 486850U;
volatile uint32_t t189 = 0U;
int32_t x784 = INT32_MAX;
uint16_t x785 = UINT16_MAX;
uint8_t x787 = UINT8_MAX;
static uint16_t x799 = 0U;
int64_t x801 = INT64_MIN;
uint8_t x803 = 0U;
static volatile uint8_t x809 = 4U;
static volatile int32_t x810 = INT32_MIN;
int32_t x812 = 1468;
int32_t t198 = 124;
int16_t x815 = -1;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int64_t x2 = 545989172946365LL;
	static volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 11741109121LLU;

    t0 = ((x1>x2)-(x3%x4));

    if (t0 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int64_t x6 = -117645988259129268LL;
	uint16_t x7 = 2U;

    t1 = ((x5>x6)-(x7%x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	static int8_t x12 = INT8_MIN;

    t2 = ((x9>x10)-(x11%x12));

    if (t2 != -126) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 0U;
	volatile int16_t x14 = 495;
	int32_t x16 = -480;

    t3 = ((x13>x14)-(x15%x16));

    if (t3 != -127LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -11;
	static uint16_t x18 = 306U;
	volatile int64_t x19 = -786900488495984848LL;
	volatile int8_t x20 = INT8_MIN;

    t4 = ((x17>x18)-(x19%x20));

    if (t4 != 80LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	volatile uint8_t x23 = UINT8_MAX;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 12;

    t5 = ((x21>x22)-(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 19839LLU;
	volatile int64_t x26 = -1LL;
	uint64_t x27 = 873557798LLU;
	int8_t x28 = INT8_MAX;
	uint64_t t6 = 4910788146LLU;

    t6 = ((x25>x26)-(x27%x28));

    if (t6 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = -6089;
	int16_t x31 = -1;
	int16_t x32 = 1170;
	int32_t t7 = 7436065;

    t7 = ((x29>x30)-(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 4604;
	int64_t x34 = INT64_MIN;
	static uint16_t x35 = UINT16_MAX;
	volatile uint64_t x36 = UINT64_MAX;

    t8 = ((x33>x34)-(x35%x36));

    if (t8 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 1U;
	uint8_t x38 = UINT8_MAX;
	volatile int16_t x39 = INT16_MIN;
	static int32_t t9 = 420680775;

    t9 = ((x37>x38)-(x39%x40));

    if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint32_t x42 = 2U;
	static int16_t x43 = INT16_MIN;
	int32_t x44 = 12818712;
	volatile int32_t t10 = -12;

    t10 = ((x41>x42)-(x43%x44));

    if (t10 != 32769) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 3359;
	int16_t x46 = INT16_MIN;
	int64_t x47 = -1LL;
	int16_t x48 = -1;
	volatile int64_t t11 = 1036764884LL;

    t11 = ((x45>x46)-(x47%x48));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int64_t x51 = -6LL;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 49644976578LLU;

    t12 = ((x49>x50)-(x51%x52));

    if (t12 != 6LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 54;
	volatile uint32_t x59 = 10U;
	int32_t x60 = INT32_MIN;
	static volatile uint32_t t13 = 28842U;

    t13 = ((x57>x58)-(x59%x60));

    if (t13 != 4294967286U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 8U;
	int32_t x62 = 4067079;
	static uint64_t x63 = 10080209LLU;

    t14 = ((x61>x62)-(x63%x64));

    if (t14 != 18446744073699471407LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = 1226547922547LL;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = INT8_MAX;
	int32_t t15 = 3898637;

    t15 = ((x65>x66)-(x67%x68));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x70 = -1;
	int8_t x71 = -3;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = -31912956;

    t16 = ((x69>x70)-(x71%x72));

    if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int64_t x74 = 2017LL;
	int8_t x75 = INT8_MIN;
	int64_t x76 = -1LL;
	int64_t t17 = 265932192LL;

    t17 = ((x73>x74)-(x75%x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 1U;
	volatile int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	int8_t x80 = -1;
	volatile int32_t t18 = -196178356;

    t18 = ((x77>x78)-(x79%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x81 = INT32_MIN;
	volatile int64_t x82 = INT64_MIN;
	volatile int64_t x83 = INT64_MAX;
	volatile int8_t x84 = -51;
	int64_t t19 = -88793796155198162LL;

    t19 = ((x81>x82)-(x83%x84));

    if (t19 != -24LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = UINT8_MAX;
	int8_t x86 = INT8_MAX;
	uint64_t x88 = 3165LLU;
	uint64_t t20 = 2984424142295449LLU;

    t20 = ((x85>x86)-(x87%x88));

    if (t20 != 18446744073709550199LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x91 = -1;
	volatile int16_t x92 = INT16_MIN;
	int32_t t21 = 6951;

    t21 = ((x89>x90)-(x91%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 52703416373635737LLU;
	int8_t x94 = -1;
	volatile int16_t x96 = INT16_MIN;
	static int32_t t22 = 57926;

    t22 = ((x93>x94)-(x95%x96));

    if (t22 != -100) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x98 = UINT8_MAX;
	int8_t x99 = INT8_MIN;
	static int64_t x100 = -1LL;
	int64_t t23 = 2086999909LL;

    t23 = ((x97>x98)-(x99%x100));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -38353;
	int64_t x104 = 40970584863LL;
	static int64_t t24 = -7LL;

    t24 = ((x101>x102)-(x103%x104));

    if (t24 != 38353LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = -1;
	static volatile uint64_t x106 = 27892LLU;
	uint64_t x107 = UINT64_MAX;
	uint64_t t25 = 55LLU;

    t25 = ((x105>x106)-(x107%x108));

    if (t25 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 7U;
	static int32_t x110 = -531463803;
	int64_t t26 = 122358484072LL;

    t26 = ((x109>x110)-(x111%x112));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -1LL;
	static int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int64_t x116 = -1LL;
	volatile int64_t t27 = -5515433766773505LL;

    t27 = ((x113>x114)-(x115%x116));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MIN;
	uint32_t x118 = 1U;
	volatile int32_t x119 = INT32_MIN;
	static int16_t x120 = -2263;
	volatile int32_t t28 = -1298249;

    t28 = ((x117>x118)-(x119%x120));

    if (t28 != 747) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MAX;
	static int16_t x122 = 220;
	int32_t x123 = -30243452;
	static int16_t x124 = -1;
	int32_t t29 = -135;

    t29 = ((x121>x122)-(x123%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = -12;
	uint32_t x127 = 84671U;
	volatile int8_t x128 = -1;
	volatile uint32_t t30 = 106856495U;

    t30 = ((x125>x126)-(x127%x128));

    if (t30 != 4294882625U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 2U;
	volatile int64_t x131 = INT64_MAX;
	int64_t x132 = 1008572LL;
	volatile int64_t t31 = 320102054086008LL;

    t31 = ((x129>x130)-(x131%x132));

    if (t31 != -357226LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = 13575;
	int32_t x135 = 1605;
	int64_t x136 = INT64_MIN;

    t32 = ((x133>x134)-(x135%x136));

    if (t32 != -1604LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = -37;
	int32_t x138 = -1;
	volatile int64_t x140 = -1LL;
	volatile int64_t t33 = 2417424030323098776LL;

    t33 = ((x137>x138)-(x139%x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x142 = 2U;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MAX;

    t34 = ((x141>x142)-(x143%x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = 1;
	static int32_t x146 = 222045645;
	uint64_t x148 = 7LLU;
	uint64_t t35 = 41LLU;

    t35 = ((x145>x146)-(x147%x148));

    if (t35 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = -27;
	int32_t x151 = -1;
	uint16_t x152 = UINT16_MAX;
	volatile int32_t t36 = -510276663;

    t36 = ((x149>x150)-(x151%x152));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = INT64_MIN;
	int8_t x154 = -1;
	volatile int32_t x156 = INT32_MIN;

    t37 = ((x153>x154)-(x155%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x158 = INT32_MIN;
	static int32_t x159 = 8;
	int64_t x160 = INT64_MAX;
	static volatile int64_t t38 = -8599721222863LL;

    t38 = ((x157>x158)-(x159%x160));

    if (t38 != -7LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	uint32_t x162 = 32844451U;
	int16_t x163 = -13;
	volatile int32_t x164 = INT32_MIN;
	static int32_t t39 = -12381081;

    t39 = ((x161>x162)-(x163%x164));

    if (t39 != 14) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MIN;
	int32_t t40 = -124;

    t40 = ((x165>x166)-(x167%x168));

    if (t40 != 32769) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x169 = UINT8_MAX;
	static int64_t x170 = -32936LL;
	volatile int32_t x171 = INT32_MIN;
	static int64_t x172 = -9869LL;
	static int64_t t41 = -5219LL;

    t41 = ((x169>x170)-(x171%x172));

    if (t41 != 8987LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MAX;
	volatile int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MAX;
	int32_t t42 = 1;

    t42 = ((x173>x174)-(x175%x176));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x177 = 2004LLU;
	int16_t x180 = 1863;
	volatile int32_t t43 = -1;

    t43 = ((x177>x178)-(x179%x180));

    if (t43 != -374) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x182 = 752934U;
	uint16_t x183 = 31U;
	uint32_t x184 = 390391950U;
	static uint32_t t44 = 3924U;

    t44 = ((x181>x182)-(x183%x184));

    if (t44 != 4294967266U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MIN;
	int32_t x187 = -534;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t45 = 346152554;

    t45 = ((x185>x186)-(x187%x188));

    if (t45 != 24) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MAX;
	static int8_t x192 = -1;
	int32_t t46 = -2477;

    t46 = ((x189>x190)-(x191%x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = INT8_MAX;
	volatile int16_t x195 = INT16_MIN;
	int32_t t47 = 64800;

    t47 = ((x193>x194)-(x195%x196));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint32_t x197 = UINT32_MAX;
	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MAX;
	static int8_t x200 = 1;
	volatile int32_t t48 = -1123066;

    t48 = ((x197>x198)-(x199%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = UINT8_MAX;
	static uint16_t x202 = 2601U;
	static volatile uint32_t x203 = 10597U;
	static int16_t x204 = INT16_MIN;
	uint32_t t49 = 19786U;

    t49 = ((x201>x202)-(x203%x204));

    if (t49 != 4294956699U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MAX;
	volatile int32_t t50 = 26763;

    t50 = ((x205>x206)-(x207%x208));

    if (t50 != -3) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MIN;
	uint8_t x210 = UINT8_MAX;
	static int32_t x211 = -18;
	static volatile int64_t x212 = -1LL;
	volatile int64_t t51 = -719344982774LL;

    t51 = ((x209>x210)-(x211%x212));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = -4;
	int32_t x216 = -1;
	volatile int32_t t52 = 0;

    t52 = ((x213>x214)-(x215%x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = 157230712152284909LL;
	int32_t x218 = -1;
	int32_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t53 = 0;

    t53 = ((x217>x218)-(x219%x220));

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x221 = -3016175;
	int16_t x222 = -2;
	static int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MIN;
	int32_t t54 = 648;

    t54 = ((x221>x222)-(x223%x224));

    if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x226 = INT8_MIN;
	int16_t x227 = -1;
	int32_t x228 = 28;
	static int32_t t55 = 252377;

    t55 = ((x225>x226)-(x227%x228));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 2;
	static uint16_t x230 = 3332U;
	int16_t x231 = INT16_MAX;
	volatile int64_t t56 = 122516LL;

    t56 = ((x229>x230)-(x231%x232));

    if (t56 != -32767LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = INT16_MAX;
	int32_t x234 = -16;
	int16_t x236 = INT16_MAX;

    t57 = ((x233>x234)-(x235%x236));

    if (t57 != -1478) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x238 = 557U;
	volatile int8_t x239 = -33;
	static int64_t x240 = -338LL;
	volatile int64_t t58 = -2589LL;

    t58 = ((x237>x238)-(x239%x240));

    if (t58 != 34LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint16_t x243 = 545U;
	int64_t x244 = 260139007020784613LL;
	int64_t t59 = 2159396900352868LL;

    t59 = ((x241>x242)-(x243%x244));

    if (t59 != -545LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x246 = 52345272456916157LL;
	static int64_t x247 = -1LL;
	static int8_t x248 = -13;
	int64_t t60 = -3147485061402404LL;

    t60 = ((x245>x246)-(x247%x248));

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x250 = INT32_MIN;
	volatile uint16_t x251 = 0U;

    t61 = ((x249>x250)-(x251%x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = -15;
	volatile int64_t x255 = INT64_MAX;
	volatile uint64_t t62 = 949946LLU;

    t62 = ((x253>x254)-(x255%x256));

    if (t62 != 18446744073137023250LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x257 = 2425040348499339LLU;
	int8_t x259 = -15;
	uint16_t x260 = 1U;
	volatile int32_t t63 = 13;

    t63 = ((x257>x258)-(x259%x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MAX;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t64 = -26808;

    t64 = ((x261>x262)-(x263%x264));

    if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x266 = INT64_MIN;
	int8_t x267 = -10;
	int16_t x268 = 4;
	int32_t t65 = 48;

    t65 = ((x265>x266)-(x267%x268));

    if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x270 = INT32_MAX;
	uint64_t x271 = 4631955LLU;
	volatile uint64_t t66 = 67415779LLU;

    t66 = ((x269>x270)-(x271%x272));

    if (t66 != 18446744073704919661LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MAX;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MIN;
	uint32_t x276 = 2406237U;

    t67 = ((x273>x274)-(x275%x276));

    if (t67 != 361587LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = 1184399903680056LLU;
	static int16_t x278 = INT16_MAX;
	volatile uint8_t x279 = 59U;
	int64_t x280 = INT64_MAX;
	volatile int64_t t68 = -1LL;

    t68 = ((x277>x278)-(x279%x280));

    if (t68 != -58LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x281 = -1;
	int64_t x283 = INT64_MIN;
	volatile int64_t t69 = -495200LL;

    t69 = ((x281>x282)-(x283%x284));

    if (t69 != 8LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x285 = -134452905578055LL;
	uint64_t x286 = 47940549348LLU;
	static volatile int16_t x287 = INT16_MAX;
	int64_t x288 = INT64_MIN;

    t70 = ((x285>x286)-(x287%x288));

    if (t70 != -32766LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = INT8_MAX;
	static uint32_t x290 = 6410U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t71 = -653132LL;

    t71 = ((x289>x290)-(x291%x292));

    if (t71 != -6381984LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x293 = 27;
	int32_t x296 = 9217900;
	static int32_t t72 = -78;

    t72 = ((x293>x294)-(x295%x296));

    if (t72 != 6791) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x298 = INT16_MAX;
	static int8_t x299 = 3;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t73 = -128138;

    t73 = ((x297>x298)-(x299%x300));

    if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x301 = 9U;
	int8_t x302 = -1;
	int8_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	static uint64_t t74 = 5129058340248578983LLU;

    t74 = ((x301>x302)-(x303%x304));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x305 = INT16_MAX;
	uint64_t x306 = 3009632762LLU;
	static int64_t x307 = -15347753LL;
	int64_t t75 = -55181983072725790LL;

    t75 = ((x305>x306)-(x307%x308));

    if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x310 = -1;
	volatile int8_t x311 = INT8_MAX;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t76 = -24;

    t76 = ((x309>x310)-(x311%x312));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = 7487;
	int64_t x316 = -1LL;
	int64_t t77 = 1LL;

    t77 = ((x313>x314)-(x315%x316));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = 704991LL;
	uint64_t x318 = UINT64_MAX;
	static uint16_t x319 = 182U;
	volatile int64_t t78 = -40590384484LL;

    t78 = ((x317>x318)-(x319%x320));

    if (t78 != -182LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = -1LL;
	int16_t x322 = 7;
	int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t79 = 35;

    t79 = ((x321>x322)-(x323%x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x325 = 7U;
	static uint32_t x326 = UINT32_MAX;
	int64_t x327 = -1LL;
	int32_t x328 = INT32_MAX;
	int64_t t80 = 12391037LL;

    t80 = ((x325>x326)-(x327%x328));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x331 = 20816398;
	volatile int8_t x332 = INT8_MIN;
	static int32_t t81 = 316203;

    t81 = ((x329>x330)-(x331%x332));

    if (t81 != -14) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	volatile int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MIN;
	int32_t x336 = 3598689;
	static int64_t t82 = -212832422768948210LL;

    t82 = ((x333>x334)-(x335%x336));

    if (t82 != 2926152LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = INT64_MAX;
	uint8_t x338 = UINT8_MAX;
	uint64_t x340 = UINT64_MAX;

    t83 = ((x337>x338)-(x339%x340));

    if (t83 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x341 = INT64_MAX;
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = 3680;
	uint64_t x344 = 615LLU;
	uint64_t t84 = 163033428LLU;

    t84 = ((x341>x342)-(x343%x344));

    if (t84 != 18446744073709551012LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x345 = 100672049;
	int64_t x347 = -1LL;
	uint8_t x348 = 19U;
	int64_t t85 = -1LL;

    t85 = ((x345>x346)-(x347%x348));

    if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x349 = INT32_MIN;
	volatile uint8_t x350 = 1U;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = 11528149U;

    t86 = ((x349>x350)-(x351%x352));

    if (t86 != 869554LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = -1;
	uint32_t x355 = 220791U;
	volatile int16_t x356 = INT16_MAX;
	volatile uint32_t t87 = 246195U;

    t87 = ((x353>x354)-(x355%x356));

    if (t87 != 4294943107U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x358 = INT64_MIN;
	int16_t x359 = 3;
	volatile int8_t x360 = INT8_MAX;
	volatile int32_t t88 = 403617292;

    t88 = ((x357>x358)-(x359%x360));

    if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint16_t x361 = 18U;
	volatile int16_t x363 = INT16_MIN;
	int32_t t89 = 7217118;

    t89 = ((x361>x362)-(x363%x364));

    if (t89 != 32769) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MAX;
	int32_t x366 = -1;
	uint32_t x367 = 5908342U;
	int64_t t90 = -509904848530605192LL;

    t90 = ((x365>x366)-(x367%x368));

    if (t90 != -5908341LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = 867170LL;
	int16_t x370 = -1;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t91 = -121228126;

    t91 = ((x369>x370)-(x371%x372));

    if (t91 != -126) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x373 = INT8_MIN;
	uint16_t x375 = 41U;
	int64_t x376 = INT64_MIN;

    t92 = ((x373>x374)-(x375%x376));

    if (t92 != -41LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x377 = INT16_MAX;
	volatile uint32_t x378 = UINT32_MAX;
	int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = UINT8_MAX;
	static volatile int64_t t93 = -6567185962079LL;

    t93 = ((x377>x378)-(x379%x380));

    if (t93 != 128LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x381 = 24684U;
	uint32_t x382 = UINT32_MAX;

    t94 = ((x381>x382)-(x383%x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x385 = -8;
	static int64_t x386 = -5522207386061193LL;
	static int32_t x388 = 6;
	volatile uint32_t t95 = 143364U;

    t95 = ((x385>x386)-(x387%x388));

    if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = -8;
	volatile uint16_t x390 = 182U;
	int32_t x391 = INT32_MIN;
	int16_t x392 = 130;

    t96 = ((x389>x390)-(x391%x392));

    if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = INT32_MIN;
	uint32_t x394 = 398634354U;
	static int8_t x396 = INT8_MIN;
	int32_t t97 = 256249940;

    t97 = ((x393>x394)-(x395%x396));

    if (t97 != -126) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MIN;
	static int32_t x399 = INT32_MAX;
	int32_t t98 = 1509;

    t98 = ((x397>x398)-(x399%x400));

    if (t98 != -6) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x401 = UINT64_MAX;
	static int32_t x402 = INT32_MIN;
	uint32_t x403 = 2U;
	int8_t x404 = -1;

    t99 = ((x401>x402)-(x403%x404));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x406 = -120115;
	int8_t x407 = -9;
	volatile int64_t x408 = -1LL;
	static volatile int64_t t100 = 2281052LL;

    t100 = ((x405>x406)-(x407%x408));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x409 = -41697;
	uint8_t x410 = 1U;
	int16_t x411 = INT16_MAX;
	static volatile uint64_t x412 = 24672724072089860LLU;
	volatile uint64_t t101 = 19836720850LLU;

    t101 = ((x409>x410)-(x411%x412));

    if (t101 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x413 = INT16_MAX;
	volatile int64_t x414 = 6365283539028109LL;
	uint64_t x415 = 256731232085LLU;
	uint64_t x416 = 2705970604723LLU;

    t102 = ((x413>x414)-(x415%x416));

    if (t102 != 18446743816978319531LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x417 = 235043430944LLU;
	int32_t x418 = INT32_MAX;
	uint8_t x419 = 101U;
	int32_t x420 = 37601133;
	volatile int32_t t103 = -132091273;

    t103 = ((x417>x418)-(x419%x420));

    if (t103 != -100) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MAX;
	int8_t x423 = INT8_MAX;
	int8_t x424 = INT8_MAX;
	volatile int32_t t104 = 30561;

    t104 = ((x421>x422)-(x423%x424));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 14U;
	volatile int32_t t105 = 23048230;

    t105 = ((x425>x426)-(x427%x428));

    if (t105 != 8) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x430 = -45;
	static uint64_t x432 = 4763LLU;
	uint64_t t106 = 459199764LLU;

    t106 = ((x429>x430)-(x431%x432));

    if (t106 != 18446744073709547572LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x434 = INT32_MIN;
	static int32_t x435 = -1;
	int64_t x436 = INT64_MIN;
	volatile int64_t t107 = -16565418342790105LL;

    t107 = ((x433>x434)-(x435%x436));

    if (t107 != 2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x437 = 12U;
	static uint32_t x438 = 3U;
	volatile uint16_t x439 = 189U;
	volatile uint64_t x440 = 419970763503581272LLU;

    t108 = ((x437>x438)-(x439%x440));

    if (t108 != 18446744073709551428LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = 0LL;
	int32_t x442 = 317;
	int32_t x443 = INT32_MAX;
	int32_t x444 = -1;
	volatile int32_t t109 = 213;

    t109 = ((x441>x442)-(x443%x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = -1016658;
	int8_t x446 = -3;
	uint32_t x447 = UINT32_MAX;
	static volatile int32_t x448 = INT32_MIN;

    t110 = ((x445>x446)-(x447%x448));

    if (t110 != 2147483649U) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x450 = 1U;
	static int16_t x451 = INT16_MIN;
	static int64_t t111 = -406237159281908LL;

    t111 = ((x449>x450)-(x451%x452));

    if (t111 != 32768LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x453 = INT8_MIN;
	int16_t x454 = -1;
	int64_t x456 = INT64_MAX;
	volatile int64_t t112 = -7225269149898LL;

    t112 = ((x453>x454)-(x455%x456));

    if (t112 != -11LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = INT16_MIN;
	static volatile int16_t x462 = -1;
	int32_t x463 = -30340;
	int32_t x464 = INT32_MIN;
	int32_t t113 = 0;

    t113 = ((x461>x462)-(x463%x464));

    if (t113 != 30340) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x469 = UINT32_MAX;
	int32_t x470 = -4109;
	int32_t x471 = 1;
	static int64_t x472 = -47484947503LL;
	volatile int64_t t114 = 60079463264830124LL;

    t114 = ((x469>x470)-(x471%x472));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x473 = UINT16_MAX;
	int32_t x475 = -1;
	uint8_t x476 = 6U;
	volatile int32_t t115 = -73135;

    t115 = ((x473>x474)-(x475%x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x477 = 5628U;
	static int32_t x478 = 464246994;
	int64_t x479 = -1LL;
	volatile int16_t x480 = INT16_MIN;

    t116 = ((x477>x478)-(x479%x480));

    if (t116 != 1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x482 = 5588U;
	int8_t x483 = -1;
	int32_t t117 = 4116182;

    t117 = ((x481>x482)-(x483%x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x487 = -44836565LL;
	int64_t t118 = 1363094LL;

    t118 = ((x485>x486)-(x487%x488));

    if (t118 != 14105LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x490 = 2732U;
	uint64_t x491 = 68967623097982LLU;
	int64_t x492 = -1LL;

    t119 = ((x489>x490)-(x491%x492));

    if (t119 != 18446675106086453634LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x495 = 603779980643LLU;
	static int16_t x496 = -1316;
	uint64_t t120 = 63112583507662052LLU;

    t120 = ((x493>x494)-(x495%x496));

    if (t120 != 18446743469929570974LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x498 = INT8_MAX;
	volatile int8_t x500 = INT8_MIN;
	static int64_t t121 = -3009LL;

    t121 = ((x497>x498)-(x499%x500));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = -1LL;
	uint16_t x502 = 12813U;
	volatile int64_t x503 = INT64_MIN;
	uint32_t x504 = 15U;
	static volatile int64_t t122 = -222273173500LL;

    t122 = ((x501>x502)-(x503%x504));

    if (t122 != 8LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x505 = 0;
	int32_t x506 = INT32_MAX;
	static int32_t x507 = 661;
	int64_t x508 = -1LL;
	volatile int64_t t123 = -31129501LL;

    t123 = ((x505>x506)-(x507%x508));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = -11588863;
	uint32_t x510 = 6U;
	uint64_t x511 = UINT64_MAX;

    t124 = ((x509>x510)-(x511%x512));

    if (t124 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x514 = 172170;
	int64_t x515 = INT64_MAX;
	volatile uint64_t x516 = UINT64_MAX;
	volatile uint64_t t125 = 12582468626203LLU;

    t125 = ((x513>x514)-(x515%x516));

    if (t125 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x517 = 56405U;
	int64_t x518 = INT64_MIN;
	uint64_t x519 = 7LLU;
	uint32_t x520 = UINT32_MAX;
	static volatile uint64_t t126 = 149448397030LLU;

    t126 = ((x517>x518)-(x519%x520));

    if (t126 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = 0LL;
	static int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	static volatile int32_t t127 = -744113;

    t127 = ((x521>x522)-(x523%x524));

    if (t127 != 129) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 92U;
	int32_t x530 = INT32_MIN;
	int64_t x531 = INT64_MAX;
	int32_t x532 = INT32_MAX;
	static volatile int64_t t128 = 10331174718LL;

    t128 = ((x529>x530)-(x531%x532));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = -1;
	static uint32_t x534 = 78U;
	int16_t x535 = -3;
	volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t129 = 486;

    t129 = ((x533>x534)-(x535%x536));

    if (t129 != 4) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x537 = UINT64_MAX;
	static uint32_t x538 = UINT32_MAX;
	uint8_t x539 = 87U;
	int64_t x540 = INT64_MAX;
	int64_t t130 = 1674254419235LL;

    t130 = ((x537>x538)-(x539%x540));

    if (t130 != -86LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MIN;
	uint16_t x543 = 11685U;
	volatile uint32_t x544 = 128920U;
	volatile uint32_t t131 = 8176U;

    t131 = ((x541>x542)-(x543%x544));

    if (t131 != 4294955612U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x545 = -1LL;
	static volatile uint64_t x546 = 7595LLU;
	static uint8_t x548 = 85U;
	int32_t t132 = 1;

    t132 = ((x545>x546)-(x547%x548));

    if (t132 != 44) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x549 = 0;
	int16_t x550 = -1;
	int64_t x551 = INT64_MIN;
	int16_t x552 = -2;
	volatile int64_t t133 = -52076464588LL;

    t133 = ((x549>x550)-(x551%x552));

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = -1;
	int32_t x554 = -1;
	int64_t x555 = -1LL;
	int64_t x556 = 2094172LL;
	int64_t t134 = 453LL;

    t134 = ((x553>x554)-(x555%x556));

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x557 = INT32_MIN;
	static volatile int64_t x558 = INT64_MIN;
	static int8_t x559 = INT8_MIN;
	uint64_t x560 = 1568074LLU;
	uint64_t t135 = 19059LLU;

    t135 = ((x557>x558)-(x559%x560));

    if (t135 != 18446744073708915119LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x562 = INT64_MIN;
	int64_t x563 = INT64_MIN;
	volatile int8_t x564 = INT8_MAX;
	volatile int64_t t136 = 12778841LL;

    t136 = ((x561>x562)-(x563%x564));

    if (t136 != 2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x567 = INT32_MIN;
	int16_t x568 = -729;
	int32_t t137 = -321185180;

    t137 = ((x565>x566)-(x567%x568));

    if (t137 != 551) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x569 = INT32_MIN;
	int16_t x571 = INT16_MAX;
	int64_t t138 = -31066504128LL;

    t138 = ((x569>x570)-(x571%x572));

    if (t138 != -32766LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = -28776520;
	int8_t x574 = INT8_MIN;
	uint64_t x575 = UINT64_MAX;
	int16_t x576 = -1;
	volatile uint64_t t139 = 1584301215679LLU;

    t139 = ((x573>x574)-(x575%x576));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x577 = 14557LLU;
	uint32_t x579 = UINT32_MAX;
	int32_t x580 = -1;

    t140 = ((x577>x578)-(x579%x580));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x581 = 4668U;
	uint64_t x582 = 73544459LLU;
	int32_t x583 = 18245;
	int64_t x584 = INT64_MAX;
	volatile int64_t t141 = -21LL;

    t141 = ((x581>x582)-(x583%x584));

    if (t141 != -18245LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x586 = INT32_MIN;
	int16_t x587 = 13228;
	uint32_t x588 = UINT32_MAX;
	uint32_t t142 = 187U;

    t142 = ((x585>x586)-(x587%x588));

    if (t142 != 4294954069U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x590 = INT8_MIN;
	int32_t x591 = -23;
	volatile int64_t x592 = -1LL;
	int64_t t143 = 2927911032506483799LL;

    t143 = ((x589>x590)-(x591%x592));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x594 = UINT64_MAX;
	int64_t x596 = INT64_MAX;

    t144 = ((x593>x594)-(x595%x596));

    if (t144 != -7LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x597 = 7U;
	int8_t x600 = 2;

    t145 = ((x597>x598)-(x599%x600));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x602 = 0U;
	int8_t x603 = 10;
	uint32_t x604 = 214682624U;
	volatile uint32_t t146 = 17405U;

    t146 = ((x601>x602)-(x603%x604));

    if (t146 != 4294967287U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x605 = 3U;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 3U;

    t147 = ((x605>x606)-(x607%x608));

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = INT16_MIN;
	volatile int32_t x611 = INT32_MIN;
	int32_t t148 = -86;

    t148 = ((x609>x610)-(x611%x612));

    if (t148 != 27663) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x614 = 4298878951LLU;
	static volatile int64_t x615 = INT64_MIN;
	uint16_t x616 = 32U;
	volatile int64_t t149 = -49722578248130LL;

    t149 = ((x613>x614)-(x615%x616));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x617 = -17;
	volatile uint64_t x618 = 317395506994060LLU;
	static volatile int16_t x619 = 337;
	uint32_t x620 = 1U;
	volatile uint32_t t150 = 400761U;

    t150 = ((x617>x618)-(x619%x620));

    if (t150 != 1U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x622 = -1;
	static int8_t x623 = -3;
	uint64_t x624 = UINT64_MAX;

    t151 = ((x621>x622)-(x623%x624));

    if (t151 != 4LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x625 = 1119U;
	int32_t x626 = INT32_MIN;
	int64_t x627 = -1LL;
	int32_t x628 = INT32_MIN;
	volatile int64_t t152 = 6037761412LL;

    t152 = ((x625>x626)-(x627%x628));

    if (t152 != 2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x630 = 1;
	int32_t x631 = 54;
	int8_t x632 = 20;

    t153 = ((x629>x630)-(x631%x632));

    if (t153 != -13) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x633 = INT64_MIN;
	int64_t x636 = -8493515625923LL;
	int64_t t154 = 531848602143LL;

    t154 = ((x633>x634)-(x635%x636));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x638 = 32756U;
	volatile int16_t x639 = INT16_MIN;
	int32_t t155 = -1648011;

    t155 = ((x637>x638)-(x639%x640));

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x642 = INT8_MIN;
	int8_t x643 = INT8_MIN;
	int16_t x644 = 11642;
	static int32_t t156 = 182438;

    t156 = ((x641>x642)-(x643%x644));

    if (t156 != 128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x646 = UINT8_MAX;
	int32_t x647 = INT32_MAX;
	volatile uint64_t x648 = 5305636631LLU;
	volatile uint64_t t157 = 3518LLU;

    t157 = ((x645>x646)-(x647%x648));

    if (t157 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x649 = UINT16_MAX;
	volatile int16_t x650 = INT16_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int32_t x652 = INT32_MAX;
	volatile int32_t t158 = 0;

    t158 = ((x649>x650)-(x651%x652));

    if (t158 != -254) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MIN;
	int64_t x655 = -210677820595LL;
	int64_t x656 = -8LL;
	int64_t t159 = -24363731LL;

    t159 = ((x653>x654)-(x655%x656));

    if (t159 != 3LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x657 = 957216021U;
	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;
	volatile int32_t t160 = 246877;

    t160 = ((x657>x658)-(x659%x660));

    if (t160 != -127) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x661 = 8281397LLU;
	uint64_t x662 = 2586244371230LLU;
	volatile int64_t x663 = 4585992LL;
	uint32_t x664 = 61184U;
	int64_t t161 = -56564570547826LL;

    t161 = ((x661>x662)-(x663%x664));

    if (t161 != -58376LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x665 = 1004207LL;
	static int8_t x666 = -1;
	static int64_t x667 = -1LL;
	uint32_t x668 = 3367U;

    t162 = ((x665>x666)-(x667%x668));

    if (t162 != 2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x670 = -1575716099939618592LL;
	uint16_t x671 = 0U;
	uint8_t x672 = 12U;
	volatile int32_t t163 = -1868135;

    t163 = ((x669>x670)-(x671%x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x673 = 349999860;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 2197LLU;
	uint64_t t164 = 789753764067743578LLU;

    t164 = ((x673>x674)-(x675%x676));

    if (t164 != 18446744073709549542LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x677 = -1LL;
	static uint32_t x678 = UINT32_MAX;
	uint16_t x679 = 16068U;
	uint16_t x680 = 1880U;
	static int32_t t165 = 1451;

    t165 = ((x677>x678)-(x679%x680));

    if (t165 != -1028) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x681 = INT8_MAX;
	int16_t x682 = -3144;
	int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	volatile int64_t t166 = -29280211LL;

    t166 = ((x681>x682)-(x683%x684));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x685 = UINT64_MAX;
	volatile int8_t x686 = -1;
	static int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MIN;
	static int64_t t167 = 60684856437313LL;

    t167 = ((x685>x686)-(x687%x688));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x690 = INT8_MIN;
	static uint64_t t168 = 303742LLU;

    t168 = ((x689>x690)-(x691%x692));

    if (t168 != 18446744073708764436LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x693 = -1;
	uint16_t x694 = 1U;
	int8_t x695 = -1;
	uint64_t t169 = 216LLU;

    t169 = ((x693>x694)-(x695%x696));

    if (t169 != 17746857604258113655LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x698 = 263801191LLU;
	uint32_t x699 = UINT32_MAX;
	int32_t x700 = INT32_MAX;
	volatile uint32_t t170 = 1604U;

    t170 = ((x697>x698)-(x699%x700));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x701 = 5U;
	int64_t x702 = INT64_MAX;
	volatile uint16_t x704 = 171U;
	uint32_t t171 = 6010U;

    t171 = ((x701>x702)-(x703%x704));

    if (t171 != 4294967158U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x705 = -1;
	static uint32_t x706 = UINT32_MAX;
	uint32_t x707 = 446285U;
	int64_t x708 = INT64_MIN;
	static int64_t t172 = 142115455010LL;

    t172 = ((x705>x706)-(x707%x708));

    if (t172 != -446285LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x710 = 3LLU;
	uint32_t x712 = UINT32_MAX;
	int64_t t173 = -1258390864503949LL;

    t173 = ((x709>x710)-(x711%x712));

    if (t173 != 202LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x713 = INT64_MIN;
	int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MIN;
	volatile uint32_t t174 = 1314238U;

    t174 = ((x713>x714)-(x715%x716));

    if (t174 != 4294966301U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x717 = INT32_MIN;
	uint64_t x718 = 25LLU;
	int16_t x719 = INT16_MIN;
	volatile int64_t x720 = INT64_MIN;
	int64_t t175 = -1923650LL;

    t175 = ((x717>x718)-(x719%x720));

    if (t175 != 32769LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x721 = 1;
	static int16_t x723 = INT16_MIN;
	int64_t x724 = 22325077802LL;
	static volatile int64_t t176 = -1045777LL;

    t176 = ((x721>x722)-(x723%x724));

    if (t176 != 32769LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 5545U;
	int16_t x726 = -58;
	uint16_t x727 = 30558U;
	int64_t x728 = INT64_MAX;
	int64_t t177 = 3967120187LL;

    t177 = ((x725>x726)-(x727%x728));

    if (t177 != -30558LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x729 = -88LL;
	static volatile uint16_t x730 = 35U;
	uint8_t x731 = UINT8_MAX;

    t178 = ((x729>x730)-(x731%x732));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x733 = INT8_MIN;
	static uint8_t x734 = 6U;
	volatile int32_t t179 = -70886383;

    t179 = ((x733>x734)-(x735%x736));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x737 = 134U;
	uint16_t x738 = 8811U;
	int16_t x739 = INT16_MAX;
	volatile int64_t x740 = -89090443LL;
	int64_t t180 = 58430LL;

    t180 = ((x737>x738)-(x739%x740));

    if (t180 != -32767LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x741 = 15788U;
	volatile int32_t x742 = INT32_MIN;
	static int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	int32_t t181 = -9563;

    t181 = ((x741>x742)-(x743%x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x745 = INT32_MAX;
	int16_t x746 = INT16_MIN;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MIN;
	int32_t t182 = -2194786;

    t182 = ((x745>x746)-(x747%x748));

    if (t182 != -2147483646) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x749 = 1LLU;
	int8_t x750 = INT8_MAX;
	int64_t x751 = INT64_MIN;
	int8_t x752 = -1;
	int64_t t183 = 242147LL;

    t183 = ((x749>x750)-(x751%x752));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = -1;
	int16_t x754 = INT16_MAX;
	uint16_t x755 = 187U;
	static volatile int32_t t184 = -308096;

    t184 = ((x753>x754)-(x755%x756));

    if (t184 != -187) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x758 = INT8_MIN;
	static int64_t x759 = INT64_MIN;
	int64_t t185 = 3837573197LL;

    t185 = ((x757>x758)-(x759%x760));

    if (t185 != 128LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x761 = UINT16_MAX;
	int16_t x762 = INT16_MIN;
	int32_t x763 = -1468;
	volatile int8_t x764 = INT8_MIN;
	int32_t t186 = 902784;

    t186 = ((x761>x762)-(x763%x764));

    if (t186 != 61) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x765 = -1LL;
	int64_t x766 = INT64_MAX;
	int8_t x767 = -1;
	volatile uint8_t x768 = 79U;

    t187 = ((x765>x766)-(x767%x768));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x769 = UINT8_MAX;
	int64_t x771 = -2LL;
	int16_t x772 = INT16_MIN;
	volatile int64_t t188 = -185531270638911LL;

    t188 = ((x769>x770)-(x771%x772));

    if (t188 != 2LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x773 = 17;
	static uint64_t x774 = UINT64_MAX;
	int32_t x775 = -2;

    t189 = ((x773>x774)-(x775%x776));

    if (t189 != 4294503852U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 4139U;
	uint32_t x779 = UINT32_MAX;
	volatile int32_t x780 = INT32_MIN;
	uint32_t t190 = 341692602U;

    t190 = ((x777>x778)-(x779%x780));

    if (t190 != 2147483649U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x781 = -15;
	volatile int32_t x782 = INT32_MIN;
	int32_t x783 = -1;
	int32_t t191 = -145;

    t191 = ((x781>x782)-(x783%x784));

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x786 = -1;
	int16_t x788 = INT16_MIN;
	static volatile int32_t t192 = 38932152;

    t192 = ((x785>x786)-(x787%x788));

    if (t192 != -254) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = 24;
	uint32_t x790 = UINT32_MAX;
	uint64_t x791 = 230841LLU;
	int64_t x792 = -1LL;
	uint64_t t193 = 856307135418LLU;

    t193 = ((x789>x790)-(x791%x792));

    if (t193 != 18446744073709320775LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x793 = 24010U;
	static int64_t x794 = -1LL;
	int32_t x795 = INT32_MAX;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t194 = -1275694;

    t194 = ((x793>x794)-(x795%x796));

    if (t194 != -126) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x797 = -198;
	int8_t x798 = INT8_MAX;
	volatile uint8_t x800 = 20U;
	int32_t t195 = 7879;

    t195 = ((x797>x798)-(x799%x800));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x802 = 84U;
	int16_t x804 = INT16_MAX;
	int32_t t196 = 129;

    t196 = ((x801>x802)-(x803%x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x805 = UINT16_MAX;
	volatile int64_t x806 = -1LL;
	static int16_t x807 = -2864;
	static volatile uint64_t x808 = UINT64_MAX;
	uint64_t t197 = 37LLU;

    t197 = ((x805>x806)-(x807%x808));

    if (t197 != 2865LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x811 = 30U;

    t198 = ((x809>x810)-(x811%x812));

    if (t198 != -29) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x813 = UINT8_MAX;
	volatile int8_t x814 = -1;
	static volatile uint16_t x816 = 287U;
	int32_t t199 = -168903279;

    t199 = ((x813>x814)-(x815%x816));

    if (t199 != 2) { NG(); } else { ; }
	
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

