
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

int32_t x1 = 3;
int32_t x6 = -1;
int64_t x10 = INT64_MIN;
int8_t x12 = INT8_MAX;
static volatile uint16_t x13 = 7U;
int64_t x15 = -97LL;
volatile int32_t t4 = -79373;
volatile int64_t x23 = INT64_MIN;
int8_t x24 = -1;
uint16_t x32 = 1U;
int8_t x35 = 1;
static int16_t x36 = INT16_MIN;
static volatile int16_t x41 = INT16_MAX;
static int64_t x45 = INT64_MIN;
static int32_t t11 = -438788;
volatile int32_t t12 = -40325;
int32_t t13 = 41310;
uint8_t x60 = UINT8_MAX;
int32_t t16 = 1437;
int16_t x78 = -1;
static volatile int32_t t21 = 120049041;
static int32_t x90 = -1;
int64_t x92 = -1LL;
uint64_t x95 = 8229LLU;
int64_t x99 = INT64_MIN;
uint64_t x107 = 1678084891597LLU;
volatile int16_t x108 = INT16_MAX;
int32_t t26 = 4168462;
static int64_t x111 = INT64_MIN;
volatile int16_t x113 = INT16_MIN;
static int32_t x116 = INT32_MAX;
uint64_t x119 = 753250812288330LLU;
static int32_t x120 = -1;
int64_t x131 = -800LL;
int16_t x137 = INT16_MAX;
volatile int32_t t34 = -2;
static int64_t x146 = INT64_MIN;
uint32_t x148 = 107262158U;
uint64_t x150 = 32544316004066LLU;
volatile uint8_t x152 = UINT8_MAX;
uint32_t x157 = 789710U;
static int32_t t40 = 39084;
static uint32_t x166 = 2097510235U;
int16_t x180 = 393;
int32_t x181 = INT32_MIN;
static uint32_t x182 = 0U;
int64_t x186 = INT64_MIN;
static int32_t x187 = 0;
static volatile int16_t x188 = INT16_MIN;
volatile int32_t t46 = 0;
uint32_t x189 = 14912482U;
int8_t x192 = INT8_MIN;
static int8_t x193 = -1;
static int16_t x194 = INT16_MIN;
int8_t x195 = INT8_MIN;
volatile int32_t x198 = -64861410;
int32_t x207 = -1;
uint64_t x212 = UINT64_MAX;
static uint16_t x216 = 31U;
int16_t x217 = INT16_MAX;
int16_t x245 = -1;
uint32_t x246 = 64U;
static int16_t x248 = INT16_MIN;
volatile int32_t t64 = 657;
int32_t t65 = -26;
volatile uint64_t x265 = 788423453904LLU;
int64_t x266 = INT64_MAX;
int16_t x268 = -1;
static int8_t x276 = -1;
int32_t t68 = -2;
int8_t x285 = -16;
volatile uint64_t x286 = 862756LLU;
int16_t x298 = INT16_MIN;
static int16_t x308 = INT16_MIN;
int32_t t76 = -14391546;
static int16_t x310 = -1;
uint32_t x311 = 193U;
volatile int32_t t81 = 59461;
static uint8_t x335 = 5U;
int32_t x336 = -108;
int64_t x338 = -827385759748LL;
volatile int16_t x339 = INT16_MIN;
int16_t x343 = 30;
int32_t x347 = INT32_MAX;
volatile int64_t x351 = INT64_MIN;
volatile int32_t t88 = 59;
uint32_t x363 = 0U;
int64_t x365 = INT64_MIN;
int32_t x371 = INT32_MIN;
static int32_t t92 = -173;
static int64_t x376 = INT64_MAX;
uint16_t x377 = UINT16_MAX;
uint16_t x381 = 15U;
volatile int8_t x389 = -1;
int16_t x400 = INT16_MIN;
static int8_t x408 = INT8_MIN;
int32_t x410 = -1;
int8_t x411 = 0;
volatile uint16_t x414 = 708U;
static uint64_t x415 = 1904629LLU;
uint32_t x417 = UINT32_MAX;
uint64_t x418 = UINT64_MAX;
volatile int32_t t104 = 197264;
int32_t t105 = 25907;
int32_t x426 = INT32_MIN;
static int32_t t106 = 880369027;
static volatile int32_t t107 = 69575;
volatile int8_t x442 = -31;
static int32_t t110 = 5;
int32_t t111 = -3446903;
int64_t x451 = INT64_MIN;
uint16_t x453 = 21U;
uint32_t x456 = 9502863U;
static int32_t t113 = 1;
uint16_t x457 = UINT16_MAX;
static int64_t x463 = INT64_MAX;
uint32_t x468 = UINT32_MAX;
int32_t t116 = -1;
int32_t x470 = INT32_MAX;
uint32_t x482 = 123424U;
int32_t x485 = -15;
int64_t x487 = -6765LL;
int8_t x496 = INT8_MIN;
int16_t x497 = INT16_MIN;
int32_t t125 = 3718;
int32_t x505 = -1;
volatile int32_t t126 = 83;
static uint16_t x510 = UINT16_MAX;
int32_t t127 = -63678838;
int32_t t128 = 15245;
int64_t x530 = INT64_MIN;
uint64_t x540 = UINT64_MAX;
uint32_t x544 = 4223U;
int64_t x547 = -1LL;
volatile int64_t x553 = INT64_MIN;
int32_t t138 = 262;
static volatile int16_t x558 = -1;
static volatile int32_t t139 = 69894;
int64_t x564 = 10469317124LL;
int8_t x570 = INT8_MAX;
static int8_t x572 = 35;
int16_t x573 = -1;
int64_t x574 = 22270323LL;
uint16_t x575 = 2657U;
int64_t x579 = INT64_MIN;
static uint16_t x580 = UINT16_MAX;
volatile int32_t t144 = 0;
uint16_t x581 = UINT16_MAX;
static int32_t x582 = -1;
int16_t x585 = 5828;
volatile int32_t t146 = -50;
int16_t x591 = INT16_MIN;
int64_t x592 = INT64_MIN;
volatile int32_t t147 = 1;
static int16_t x600 = -1;
uint64_t x602 = UINT64_MAX;
static int8_t x609 = INT8_MIN;
volatile int32_t t152 = -422;
uint32_t x619 = 56423117U;
int32_t x620 = INT32_MIN;
static int32_t x621 = -872015;
volatile int32_t x623 = 6268571;
int8_t x631 = INT8_MIN;
static int8_t x635 = -21;
int64_t x637 = INT64_MIN;
uint8_t x648 = UINT8_MAX;
static volatile int32_t t161 = 842095;
static volatile int32_t x651 = 10;
int8_t x654 = INT8_MAX;
uint8_t x656 = UINT8_MAX;
int64_t x664 = INT64_MIN;
volatile int32_t t165 = -11004903;
volatile int64_t x666 = -1LL;
int32_t t166 = -396;
static volatile int64_t x673 = INT64_MAX;
volatile int16_t x674 = INT16_MIN;
int16_t x676 = 2427;
int64_t x679 = 574209090491264LL;
static volatile int16_t x689 = -2;
static int16_t x690 = INT16_MIN;
int64_t x717 = INT64_MIN;
uint16_t x722 = 2414U;
static volatile int32_t x724 = 529;
static int32_t t180 = 9;
int32_t t183 = 456502;
int16_t x738 = -1;
volatile int64_t x739 = -1LL;
int32_t x740 = INT32_MAX;
static uint16_t x742 = 5U;
int8_t x750 = INT8_MAX;
volatile int32_t t187 = -4;
static int16_t x753 = -12495;
volatile int8_t x756 = INT8_MAX;
static int8_t x757 = 15;
static uint64_t x762 = 209806470LLU;
uint64_t x763 = UINT64_MAX;
static volatile int32_t x765 = INT32_MIN;
int16_t x775 = -1;
static volatile int64_t x778 = INT64_MIN;
volatile int64_t x787 = -1LL;
int32_t t199 = -40560087;


void f0(void) {
    	int16_t x2 = 1;
	static volatile int32_t x3 = INT32_MAX;
	uint32_t x4 = 464026U;
	int32_t t0 = -1;

    t0 = (((x1|x2)^x3)<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint32_t x7 = 3511725U;
	uint32_t x8 = 32113186U;
	static volatile int32_t t1 = 0;

    t1 = (((x5|x6)^x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 14U;
	int32_t x11 = 44454;
	static int32_t t2 = 82;

    t2 = (((x9|x10)^x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -1;
	uint64_t x16 = 13670738315477LLU;
	volatile int32_t t3 = 20200269;

    t3 = (((x13|x14)^x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int16_t x18 = -1;
	static uint16_t x19 = 35U;
	int8_t x20 = INT8_MIN;

    t4 = (((x17|x18)^x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	int32_t x22 = 944031485;
	volatile int32_t t5 = -1918;

    t5 = (((x21|x22)^x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	uint32_t x26 = 56826432U;
	static volatile int16_t x27 = 1204;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -39539;

    t6 = (((x25|x26)^x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 118689100U;
	int32_t x30 = -1;
	int8_t x31 = INT8_MAX;
	volatile int32_t t7 = -5140;

    t7 = (((x29|x30)^x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	int64_t x34 = INT64_MIN;
	int32_t t8 = -2464;

    t8 = (((x33|x34)^x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -6524548;

    t9 = (((x37|x38)^x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = -1;
	static int8_t x43 = -1;
	int64_t x44 = INT64_MIN;
	int32_t t10 = -7435;

    t10 = (((x41|x42)^x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x46 = INT16_MAX;
	int32_t x47 = -1;
	int8_t x48 = INT8_MIN;

    t11 = (((x45|x46)^x47)<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 1053U;
	uint16_t x50 = 0U;
	volatile int8_t x51 = -1;
	int32_t x52 = 97;

    t12 = (((x49|x50)^x51)<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint16_t x54 = UINT16_MAX;
	static int32_t x55 = -605358;
	int32_t x56 = -1;

    t13 = (((x53|x54)^x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 28291;
	int32_t x58 = -1;
	int8_t x59 = INT8_MIN;
	volatile int32_t t14 = 4263354;

    t14 = (((x57|x58)^x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = 18095037U;
	volatile int32_t t15 = -17476586;

    t15 = (((x61|x62)^x63)<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static int64_t x66 = INT64_MIN;
	static int16_t x67 = INT16_MIN;
	static int64_t x68 = -9480500090686210LL;

    t16 = (((x65|x66)^x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	static uint64_t x70 = UINT64_MAX;
	int16_t x71 = -16136;
	volatile int32_t x72 = -227444;
	int32_t t17 = 533218002;

    t17 = (((x69|x70)^x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	uint32_t x74 = 1047340443U;
	volatile uint8_t x75 = 3U;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t18 = -24918;

    t18 = (((x73|x74)^x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 14527600;
	int16_t x79 = -1;
	int64_t x80 = -1928352LL;
	int32_t t19 = -1;

    t19 = (((x77|x78)^x79)<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static uint8_t x82 = UINT8_MAX;
	static uint8_t x83 = 93U;
	int64_t x84 = INT64_MAX;
	static int32_t t20 = 3514155;

    t20 = (((x81|x82)^x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = INT8_MIN;
	uint64_t x86 = 3289352LLU;
	uint8_t x87 = 89U;
	int16_t x88 = INT16_MIN;

    t21 = (((x85|x86)^x87)<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = -1LL;
	int32_t x91 = INT32_MIN;
	int32_t t22 = 585;

    t22 = (((x89|x90)^x91)<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	uint64_t x94 = UINT64_MAX;
	uint64_t x96 = 1720838LLU;
	int32_t t23 = 97555;

    t23 = (((x93|x94)^x95)<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x97 = 74U;
	volatile uint16_t x98 = 49U;
	int64_t x100 = -12LL;
	int32_t t24 = -24509;

    t24 = (((x97|x98)^x99)<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	uint64_t x102 = 703492363695268LLU;
	volatile int8_t x103 = -1;
	int8_t x104 = 8;
	volatile int32_t t25 = -232;

    t25 = (((x101|x102)^x103)<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	static int8_t x106 = -1;

    t26 = (((x105|x106)^x107)<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 357764U;
	int8_t x110 = -1;
	uint64_t x112 = 12220838LLU;
	volatile int32_t t27 = 9813;

    t27 = (((x109|x110)^x111)<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x114 = INT16_MIN;
	int16_t x115 = -2;
	volatile int32_t t28 = 142965831;

    t28 = (((x113|x114)^x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = 8;
	static int32_t x118 = INT32_MAX;
	int32_t t29 = 863061;

    t29 = (((x117|x118)^x119)<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint16_t x122 = 873U;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MAX;
	int32_t t30 = 1;

    t30 = (((x121|x122)^x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = -3;
	volatile int64_t x126 = INT64_MIN;
	int8_t x127 = -1;
	volatile int8_t x128 = INT8_MIN;
	int32_t t31 = -1985;

    t31 = (((x125|x126)^x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 33U;
	int32_t x130 = 1;
	int32_t x132 = INT32_MAX;
	int32_t t32 = 125868;

    t32 = (((x129|x130)^x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 30776317996953LL;
	volatile int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = -19;
	int32_t t33 = 406;

    t33 = (((x133|x134)^x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = -72053574994235956LL;
	int32_t x139 = -13;
	int64_t x140 = -3494248LL;

    t34 = (((x137|x138)^x139)<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 1U;
	int32_t x142 = -1;
	static uint8_t x143 = 22U;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -87538534;

    t35 = (((x141|x142)^x143)<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int8_t x147 = -1;
	volatile int32_t t36 = -20861650;

    t36 = (((x145|x146)^x147)<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 22545LLU;
	int32_t x151 = -4;
	int32_t t37 = -56002683;

    t37 = (((x149|x150)^x151)<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = 15;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 1LLU;
	uint64_t x156 = 662923150936799516LLU;
	int32_t t38 = -4287287;

    t38 = (((x153|x154)^x155)<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x158 = -26;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = 9687;

    t39 = (((x157|x158)^x159)<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static volatile int64_t x162 = INT64_MAX;
	uint64_t x163 = 267853471607279845LLU;
	uint32_t x164 = 13U;

    t40 = (((x161|x162)^x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 7174U;
	volatile int32_t x167 = INT32_MIN;
	uint16_t x168 = 0U;
	int32_t t41 = -1305;

    t41 = (((x165|x166)^x167)<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 855030189U;
	static int32_t t42 = -244534;

    t42 = (((x169|x170)^x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	volatile int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 3U;
	static volatile int32_t t43 = 28945;

    t43 = (((x173|x174)^x175)<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t t44 = -150;

    t44 = (((x177|x178)^x179)<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x183 = -725845486LL;
	volatile uint64_t x184 = 11922LLU;
	int32_t t45 = 14901;

    t45 = (((x181|x182)^x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;

    t46 = (((x185|x186)^x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = 373;
	static int16_t x191 = INT16_MIN;
	volatile int32_t t47 = -3090;

    t47 = (((x189|x190)^x191)<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = 353728922;

    t48 = (((x193|x194)^x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -3;
	volatile int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 2;

    t49 = (((x197|x198)^x199)<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	volatile uint16_t x202 = UINT16_MAX;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = 23U;
	static volatile int32_t t50 = 469422200;

    t50 = (((x201|x202)^x203)<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 232U;
	volatile int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = -2;

    t51 = (((x205|x206)^x207)<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	uint16_t x210 = 8U;
	int32_t x211 = INT32_MAX;
	volatile int32_t t52 = 138975;

    t52 = (((x209|x210)^x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = 1045392087407093LL;
	volatile int32_t x214 = INT32_MIN;
	static uint16_t x215 = 104U;
	int32_t t53 = -1851;

    t53 = (((x213|x214)^x215)<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x218 = 15U;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = -1166;

    t54 = (((x217|x218)^x219)<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 1;
	uint32_t x222 = 1U;
	int8_t x223 = 1;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = 14;

    t55 = (((x221|x222)^x223)<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint16_t x225 = 382U;
	static volatile uint8_t x226 = 0U;
	uint32_t x227 = 701667387U;
	static int64_t x228 = -6638529978832LL;
	static volatile int32_t t56 = 6;

    t56 = (((x225|x226)^x227)<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = INT16_MIN;
	uint16_t x230 = 1167U;
	static int16_t x231 = INT16_MIN;
	volatile int8_t x232 = -1;
	volatile int32_t t57 = -59;

    t57 = (((x229|x230)^x231)<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	volatile int8_t x234 = -23;
	uint32_t x235 = 35202556U;
	static uint16_t x236 = 1U;
	static volatile int32_t t58 = 0;

    t58 = (((x233|x234)^x235)<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x237 = 15U;
	static int32_t x238 = INT32_MAX;
	int64_t x239 = INT64_MAX;
	uint16_t x240 = 3U;
	volatile int32_t t59 = 199148780;

    t59 = (((x237|x238)^x239)<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	static int64_t x242 = -49LL;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = -297678563;

    t60 = (((x241|x242)^x243)<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x247 = 475U;
	int32_t t61 = 139;

    t61 = (((x245|x246)^x247)<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = 8LL;
	static volatile int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = -893276;

    t62 = (((x249|x250)^x251)<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	volatile int64_t x254 = INT64_MIN;
	volatile int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MAX;
	int32_t t63 = 352110189;

    t63 = (((x253|x254)^x255)<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	int8_t x258 = 3;
	static int16_t x259 = -1;
	int64_t x260 = INT64_MIN;

    t64 = (((x257|x258)^x259)<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = -96316;
	uint32_t x262 = 5371U;
	uint8_t x263 = 3U;
	volatile int8_t x264 = INT8_MAX;

    t65 = (((x261|x262)^x263)<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x267 = 6052343377LLU;
	volatile int32_t t66 = 58140;

    t66 = (((x265|x266)^x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -24008946;
	uint16_t x270 = 582U;
	uint16_t x271 = 13U;
	int16_t x272 = 1;
	static int32_t t67 = 6;

    t67 = (((x269|x270)^x271)<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x273 = INT32_MIN;
	volatile int64_t x274 = -183540626LL;
	uint8_t x275 = 2U;

    t68 = (((x273|x274)^x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 1761619363626902LL;
	uint16_t x278 = 21U;
	int32_t x279 = INT32_MIN;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 1;

    t69 = (((x277|x278)^x279)<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 4822001906922295LLU;
	int64_t x282 = -67LL;
	volatile int8_t x283 = INT8_MIN;
	uint64_t x284 = UINT64_MAX;
	int32_t t70 = 59;

    t70 = (((x281|x282)^x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x287 = 83662635375831LLU;
	int64_t x288 = INT64_MIN;
	static int32_t t71 = -1;

    t71 = (((x285|x286)^x287)<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	static int64_t x290 = INT64_MIN;
	int64_t x291 = -1867622840LL;
	static volatile int8_t x292 = -1;
	int32_t t72 = 1131;

    t72 = (((x289|x290)^x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MAX;
	static volatile uint8_t x295 = UINT8_MAX;
	volatile uint16_t x296 = 0U;
	int32_t t73 = -57;

    t73 = (((x293|x294)^x295)<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MAX;
	int32_t x299 = -1;
	int8_t x300 = -1;
	int32_t t74 = 60139554;

    t74 = (((x297|x298)^x299)<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	volatile int8_t x302 = INT8_MIN;
	static int16_t x303 = -1;
	uint8_t x304 = 78U;
	int32_t t75 = 479409;

    t75 = (((x301|x302)^x303)<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x305 = UINT32_MAX;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = 102015;

    t76 = (((x305|x306)^x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int16_t x312 = 2457;
	int32_t t77 = 2;

    t77 = (((x309|x310)^x311)<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	int8_t x314 = 6;
	uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 6U;
	static volatile int32_t t78 = 779;

    t78 = (((x313|x314)^x315)<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = 3299487;
	uint32_t x318 = 182873U;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t79 = -97926;

    t79 = (((x317|x318)^x319)<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MIN;
	volatile int16_t x322 = INT16_MIN;
	uint8_t x323 = 4U;
	int64_t x324 = INT64_MIN;
	int32_t t80 = 51;

    t80 = (((x321|x322)^x323)<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = UINT8_MAX;
	static int64_t x326 = -1LL;
	static int64_t x327 = INT64_MAX;
	volatile uint8_t x328 = 80U;

    t81 = (((x325|x326)^x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MAX;
	uint8_t x332 = 1U;
	int32_t t82 = 77141495;

    t82 = (((x329|x330)^x331)<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	volatile int32_t t83 = -431462;

    t83 = (((x333|x334)^x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	volatile uint32_t x340 = 254092275U;
	int32_t t84 = 3223;

    t84 = (((x337|x338)^x339)<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 113U;
	volatile uint8_t x342 = 65U;
	int16_t x344 = -6;
	int32_t t85 = -29;

    t85 = (((x341|x342)^x343)<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MAX;
	uint8_t x346 = UINT8_MAX;
	static uint64_t x348 = 2485582094698270117LLU;
	volatile int32_t t86 = -704320239;

    t86 = (((x345|x346)^x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 305769U;
	int32_t x350 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 377974107;

    t87 = (((x349|x350)^x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x353 = 496U;
	volatile int32_t x354 = INT32_MIN;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MIN;

    t88 = (((x353|x354)^x355)<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = 4082U;
	uint16_t x358 = 2U;
	uint32_t x359 = UINT32_MAX;
	uint32_t x360 = 2924735U;
	int32_t t89 = -67832764;

    t89 = (((x357|x358)^x359)<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -3623725;
	int32_t x362 = INT32_MIN;
	uint32_t x364 = 5206U;
	static int32_t t90 = 4;

    t90 = (((x361|x362)^x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = 7254LL;
	volatile int16_t x367 = INT16_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t91 = 105;

    t91 = (((x365|x366)^x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = 1059057698845725LL;
	volatile uint64_t x370 = 2876473719465447993LLU;
	int8_t x372 = INT8_MAX;

    t92 = (((x369|x370)^x371)<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	volatile uint32_t x374 = 768U;
	volatile uint8_t x375 = 0U;
	volatile int32_t t93 = -1;

    t93 = (((x373|x374)^x375)<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x378 = -1LL;
	static int8_t x379 = 0;
	uint64_t x380 = 536LLU;
	int32_t t94 = 8694;

    t94 = (((x377|x378)^x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x382 = 444802756U;
	int8_t x383 = 5;
	volatile uint64_t x384 = 64LLU;
	int32_t t95 = -321;

    t95 = (((x381|x382)^x383)<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 65417LLU;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = INT64_MIN;
	static uint8_t x388 = 48U;
	volatile int32_t t96 = -9;

    t96 = (((x385|x386)^x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = -1;
	volatile int8_t x391 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 141791791;

    t97 = (((x389|x390)^x391)<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = 6018;
	static volatile int32_t t98 = 48941;

    t98 = (((x393|x394)^x395)<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 265U;
	int32_t x398 = -98;
	int16_t x399 = 8591;
	static int32_t t99 = 71;

    t99 = (((x397|x398)^x399)<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = -2;
	volatile uint16_t x402 = 209U;
	int8_t x403 = 8;
	int64_t x404 = INT64_MIN;
	volatile int32_t t100 = -109;

    t100 = (((x401|x402)^x403)<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = INT32_MAX;
	volatile int16_t x406 = -2;
	int64_t x407 = INT64_MIN;
	int32_t t101 = 30;

    t101 = (((x405|x406)^x407)<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	int16_t x412 = 1730;
	volatile int32_t t102 = 2211637;

    t102 = (((x409|x410)^x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = UINT64_MAX;
	uint64_t x416 = 682863839274885LLU;
	int32_t t103 = 1;

    t103 = (((x413|x414)^x415)<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x419 = -1532110014LL;
	uint8_t x420 = 2U;

    t104 = (((x417|x418)^x419)<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	uint8_t x422 = 20U;
	volatile int64_t x423 = 3330314LL;
	static volatile int8_t x424 = -1;

    t105 = (((x421|x422)^x423)<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int32_t x427 = INT32_MIN;
	int16_t x428 = 183;

    t106 = (((x425|x426)^x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	volatile int64_t x430 = -1818LL;
	int16_t x431 = INT16_MIN;
	volatile int64_t x432 = -1LL;

    t107 = (((x429|x430)^x431)<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -3028099530LL;
	uint32_t x434 = 7U;
	volatile int32_t x435 = INT32_MIN;
	static volatile uint16_t x436 = 1361U;
	volatile int32_t t108 = 3;

    t108 = (((x433|x434)^x435)<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	static int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MIN;
	volatile uint64_t x440 = 2005785652305178LLU;
	static int32_t t109 = -555692;

    t109 = (((x437|x438)^x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x443 = INT8_MAX;
	uint64_t x444 = 116727988172LLU;

    t110 = (((x441|x442)^x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -6LL;
	volatile int32_t x446 = -1;
	int32_t x447 = 95408830;
	volatile int64_t x448 = INT64_MIN;

    t111 = (((x445|x446)^x447)<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	static uint64_t x450 = 256985LLU;
	volatile uint16_t x452 = 1357U;
	volatile int32_t t112 = -20;

    t112 = (((x449|x450)^x451)<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x454 = 17365585U;
	int64_t x455 = INT64_MIN;

    t113 = (((x453|x454)^x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x458 = INT8_MIN;
	int16_t x459 = -1;
	uint64_t x460 = 15LLU;
	int32_t t114 = -75385;

    t114 = (((x457|x458)^x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x461 = INT32_MAX;
	int16_t x462 = -5;
	volatile uint8_t x464 = 50U;
	int32_t t115 = -94466150;

    t115 = (((x461|x462)^x463)<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	volatile int32_t x466 = INT32_MIN;
	static int32_t x467 = INT32_MIN;

    t116 = (((x465|x466)^x467)<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	static volatile int16_t x471 = -319;
	static int32_t x472 = 0;
	int32_t t117 = -6270;

    t117 = (((x469|x470)^x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 2128U;
	uint16_t x474 = UINT16_MAX;
	uint8_t x475 = 15U;
	uint32_t x476 = 184544318U;
	volatile int32_t t118 = -288198415;

    t118 = (((x473|x474)^x475)<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = 898505LLU;
	int8_t x478 = -12;
	volatile uint16_t x479 = UINT16_MAX;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -298;

    t119 = (((x477|x478)^x479)<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	int64_t x483 = -63LL;
	uint16_t x484 = 31U;
	static int32_t t120 = -4137;

    t120 = (((x481|x482)^x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	static uint32_t x488 = 1965812544U;
	static int32_t t121 = 220297430;

    t121 = (((x485|x486)^x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	int32_t x490 = -7510;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = UINT8_MAX;
	volatile int32_t t122 = -6032877;

    t122 = (((x489|x490)^x491)<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = -1;
	int16_t x494 = -1;
	static uint16_t x495 = UINT16_MAX;
	int32_t t123 = 56710157;

    t123 = (((x493|x494)^x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	static int16_t x499 = INT16_MIN;
	uint16_t x500 = UINT16_MAX;
	int32_t t124 = -4;

    t124 = (((x497|x498)^x499)<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	uint32_t x502 = 44U;
	static int64_t x503 = 224114699400446LL;
	static int32_t x504 = -1;

    t125 = (((x501|x502)^x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = -837;
	volatile int8_t x507 = INT8_MIN;
	int16_t x508 = -1;

    t126 = (((x505|x506)^x507)<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MAX;
	int64_t x511 = INT64_MIN;
	int16_t x512 = INT16_MAX;

    t127 = (((x509|x510)^x511)<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 167;
	uint32_t x514 = 1694676417U;
	int8_t x515 = 52;
	uint32_t x516 = 55U;

    t128 = (((x513|x514)^x515)<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = -63;
	volatile int32_t x518 = INT32_MIN;
	uint8_t x519 = 0U;
	static int8_t x520 = INT8_MIN;
	static int32_t t129 = -6254728;

    t129 = (((x517|x518)^x519)<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = 478396;
	int32_t x522 = INT32_MIN;
	int8_t x523 = -21;
	uint32_t x524 = 10U;
	int32_t t130 = -1011214;

    t130 = (((x521|x522)^x523)<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x525 = INT64_MIN;
	uint16_t x526 = 2U;
	volatile uint64_t x527 = 3672LLU;
	uint64_t x528 = UINT64_MAX;
	static int32_t t131 = -2407528;

    t131 = (((x525|x526)^x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = 0;
	int32_t x531 = INT32_MIN;
	int64_t x532 = -1LL;
	int32_t t132 = 23354735;

    t132 = (((x529|x530)^x531)<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x534 = 128982483LLU;
	static int64_t x535 = -1LL;
	static int8_t x536 = INT8_MIN;
	volatile int32_t t133 = 7;

    t133 = (((x533|x534)^x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x537 = 23U;
	int16_t x538 = INT16_MIN;
	volatile int64_t x539 = 15602917LL;
	static int32_t t134 = 86;

    t134 = (((x537|x538)^x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 15555U;
	uint16_t x542 = 1U;
	uint64_t x543 = 49539105832LLU;
	static int32_t t135 = 259;

    t135 = (((x541|x542)^x543)<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = UINT8_MAX;
	volatile int8_t x546 = INT8_MAX;
	volatile int8_t x548 = INT8_MAX;
	volatile int32_t t136 = 8020;

    t136 = (((x545|x546)^x547)<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 3206724197435514579LLU;
	int16_t x550 = -2628;
	int16_t x551 = INT16_MAX;
	int16_t x552 = -1;
	volatile int32_t t137 = -107844;

    t137 = (((x549|x550)^x551)<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = 53U;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = INT64_MIN;

    t138 = (((x553|x554)^x555)<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = 0;
	static uint32_t x559 = 24U;
	int64_t x560 = 2148LL;

    t139 = (((x557|x558)^x559)<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x561 = UINT64_MAX;
	int32_t x562 = INT32_MAX;
	volatile uint32_t x563 = 186584U;
	int32_t t140 = -3701;

    t140 = (((x561|x562)^x563)<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 597U;
	static volatile uint64_t x566 = 45LLU;
	uint8_t x567 = 4U;
	int16_t x568 = 3817;
	volatile int32_t t141 = -81462246;

    t141 = (((x565|x566)^x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int64_t x571 = INT64_MIN;
	int32_t t142 = 119970407;

    t142 = (((x569|x570)^x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x576 = -39;
	static volatile int32_t t143 = 13;

    t143 = (((x573|x574)^x575)<=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 20699;
	uint16_t x578 = 467U;

    t144 = (((x577|x578)^x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x583 = INT16_MAX;
	int16_t x584 = -1;
	volatile int32_t t145 = -123556;

    t145 = (((x581|x582)^x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x586 = 35U;
	int32_t x587 = INT32_MIN;
	volatile int16_t x588 = -1;

    t146 = (((x585|x586)^x587)<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	volatile uint8_t x590 = UINT8_MAX;

    t147 = (((x589|x590)^x591)<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = INT16_MIN;
	static int8_t x594 = -1;
	int8_t x595 = INT8_MAX;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t148 = 30;

    t148 = (((x593|x594)^x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x597 = INT8_MIN;
	static int64_t x598 = 24743114898610332LL;
	int16_t x599 = INT16_MAX;
	volatile int32_t t149 = -7645661;

    t149 = (((x597|x598)^x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	volatile int8_t x603 = INT8_MAX;
	uint32_t x604 = 0U;
	static volatile int32_t t150 = -5489;

    t150 = (((x601|x602)^x603)<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = 22;
	int32_t x606 = INT32_MIN;
	int16_t x607 = INT16_MAX;
	volatile uint64_t x608 = 208865476004515LLU;
	int32_t t151 = -117528;

    t151 = (((x605|x606)^x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x610 = INT64_MAX;
	volatile int32_t x611 = INT32_MIN;
	int8_t x612 = -30;

    t152 = (((x609|x610)^x611)<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = UINT16_MAX;
	uint32_t x614 = 1951U;
	uint16_t x615 = 8143U;
	static int8_t x616 = INT8_MAX;
	static int32_t t153 = -1;

    t153 = (((x613|x614)^x615)<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int64_t x618 = INT64_MIN;
	volatile int32_t t154 = 305539;

    t154 = (((x617|x618)^x619)<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = 328790594LLU;
	static volatile int16_t x624 = INT16_MIN;
	volatile int32_t t155 = 104148;

    t155 = (((x621|x622)^x623)<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MIN;
	static uint16_t x626 = 13121U;
	int16_t x627 = INT16_MIN;
	volatile uint16_t x628 = UINT16_MAX;
	volatile int32_t t156 = -52490;

    t156 = (((x625|x626)^x627)<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 0;
	volatile int32_t x630 = 5086;
	static volatile int8_t x632 = -24;
	volatile int32_t t157 = -7769363;

    t157 = (((x629|x630)^x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 99U;
	int8_t x634 = 10;
	static uint16_t x636 = 114U;
	volatile int32_t t158 = 10;

    t158 = (((x633|x634)^x635)<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x638 = 335270717692241915LLU;
	static uint32_t x639 = UINT32_MAX;
	static volatile uint64_t x640 = 210474686993786LLU;
	static int32_t t159 = 4;

    t159 = (((x637|x638)^x639)<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	int16_t x642 = INT16_MIN;
	static volatile int16_t x643 = INT16_MIN;
	static int16_t x644 = INT16_MAX;
	static int32_t t160 = 872162;

    t160 = (((x641|x642)^x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = 42;
	volatile uint8_t x646 = UINT8_MAX;
	int8_t x647 = INT8_MIN;

    t161 = (((x645|x646)^x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 1LL;
	uint16_t x650 = 2222U;
	static volatile int64_t x652 = INT64_MIN;
	static volatile int32_t t162 = 7;

    t162 = (((x649|x650)^x651)<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	static int8_t x655 = 0;
	volatile int32_t t163 = 1744;

    t163 = (((x653|x654)^x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 26U;
	int64_t x658 = -139972783870533LL;
	int8_t x659 = -1;
	uint16_t x660 = 0U;
	volatile int32_t t164 = 6513;

    t164 = (((x657|x658)^x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = -1;
	uint8_t x662 = 1U;
	uint64_t x663 = 5184244562LLU;

    t165 = (((x661|x662)^x663)<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x665 = UINT16_MAX;
	int32_t x667 = INT32_MIN;
	int64_t x668 = 1486836240354990LL;

    t166 = (((x665|x666)^x667)<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	static int8_t x670 = INT8_MIN;
	volatile int8_t x671 = INT8_MIN;
	int32_t x672 = INT32_MAX;
	volatile int32_t t167 = 3;

    t167 = (((x669|x670)^x671)<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x675 = UINT64_MAX;
	int32_t t168 = -5;

    t168 = (((x673|x674)^x675)<=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint64_t x678 = 1538LLU;
	int32_t x680 = INT32_MIN;
	volatile int32_t t169 = 31;

    t169 = (((x677|x678)^x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -1;
	static volatile int16_t x682 = -452;
	volatile uint32_t x683 = 4225U;
	static int16_t x684 = 127;
	static volatile int32_t t170 = -36;

    t170 = (((x681|x682)^x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 71142817U;
	int16_t x686 = -1;
	uint32_t x687 = UINT32_MAX;
	int64_t x688 = INT64_MIN;
	volatile int32_t t171 = -408920;

    t171 = (((x685|x686)^x687)<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x691 = INT64_MIN;
	int32_t x692 = INT32_MAX;
	int32_t t172 = 3;

    t172 = (((x689|x690)^x691)<=x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1955LL;
	static int16_t x694 = 0;
	int16_t x695 = -1;
	uint8_t x696 = 61U;
	volatile int32_t t173 = -9313;

    t173 = (((x693|x694)^x695)<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	uint16_t x698 = 35U;
	static int64_t x699 = -398717LL;
	static int8_t x700 = INT8_MAX;
	static int32_t t174 = 34757;

    t174 = (((x697|x698)^x699)<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 1U;
	volatile uint8_t x702 = 83U;
	uint32_t x703 = 29636719U;
	static int64_t x704 = 2938LL;
	volatile int32_t t175 = -92694;

    t175 = (((x701|x702)^x703)<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int64_t x706 = INT64_MAX;
	static uint8_t x707 = 52U;
	static volatile int64_t x708 = INT64_MIN;
	volatile int32_t t176 = 408171;

    t176 = (((x705|x706)^x707)<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	int8_t x710 = -1;
	static volatile uint8_t x711 = UINT8_MAX;
	uint32_t x712 = 0U;
	volatile int32_t t177 = 0;

    t177 = (((x709|x710)^x711)<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x713 = INT64_MAX;
	int16_t x714 = INT16_MIN;
	int64_t x715 = INT64_MAX;
	static int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -1;

    t178 = (((x713|x714)^x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x718 = 3672U;
	static int64_t x719 = INT64_MAX;
	int8_t x720 = -1;
	int32_t t179 = 314;

    t179 = (((x717|x718)^x719)<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x721 = -38227;
	int32_t x723 = 263262;

    t180 = (((x721|x722)^x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	int64_t x726 = INT64_MAX;
	int32_t x727 = INT32_MIN;
	static uint32_t x728 = UINT32_MAX;
	volatile int32_t t181 = 0;

    t181 = (((x725|x726)^x727)<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	int32_t x730 = 122;
	static uint64_t x731 = UINT64_MAX;
	volatile uint64_t x732 = 240012158941008LLU;
	static volatile int32_t t182 = -458198;

    t182 = (((x729|x730)^x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 0U;
	volatile int8_t x734 = -1;
	volatile int32_t x735 = -1;
	volatile int64_t x736 = INT64_MIN;

    t183 = (((x733|x734)^x735)<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	static volatile int32_t t184 = -356;

    t184 = (((x737|x738)^x739)<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -2LL;
	static uint64_t x743 = UINT64_MAX;
	int16_t x744 = INT16_MIN;
	volatile int32_t t185 = 38;

    t185 = (((x741|x742)^x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int8_t x746 = -1;
	int8_t x747 = 1;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t186 = -541066;

    t186 = (((x745|x746)^x747)<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static int16_t x751 = INT16_MIN;
	int32_t x752 = -527;

    t187 = (((x749|x750)^x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x754 = -1;
	static uint16_t x755 = UINT16_MAX;
	volatile int32_t t188 = -177801;

    t188 = (((x753|x754)^x755)<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x758 = 2323U;
	uint16_t x759 = 13U;
	uint8_t x760 = UINT8_MAX;
	int32_t t189 = 75922875;

    t189 = (((x757|x758)^x759)<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 51;
	uint64_t x764 = 36213327023408LLU;
	int32_t t190 = -1185810;

    t190 = (((x761|x762)^x763)<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = INT16_MIN;
	int8_t x767 = 1;
	int32_t x768 = INT32_MAX;
	int32_t t191 = 92;

    t191 = (((x765|x766)^x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	int64_t x770 = INT64_MIN;
	static volatile uint16_t x771 = 1U;
	static uint32_t x772 = 2U;
	int32_t t192 = 24;

    t192 = (((x769|x770)^x771)<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	int16_t x774 = INT16_MAX;
	static uint16_t x776 = 6U;
	volatile int32_t t193 = -246;

    t193 = (((x773|x774)^x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = 800LL;
	static uint32_t x779 = 3U;
	volatile int8_t x780 = -1;
	static int32_t t194 = 19220;

    t194 = (((x777|x778)^x779)<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x781 = 0LLU;
	int8_t x782 = -4;
	uint64_t x783 = 8382183017LLU;
	volatile int32_t x784 = -1;
	int32_t t195 = -625497577;

    t195 = (((x781|x782)^x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	uint8_t x786 = 15U;
	int16_t x788 = -618;
	volatile int32_t t196 = -106817263;

    t196 = (((x785|x786)^x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	int64_t x790 = INT64_MIN;
	static int8_t x791 = INT8_MIN;
	uint64_t x792 = UINT64_MAX;
	int32_t t197 = -2277865;

    t197 = (((x789|x790)^x791)<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = 75;
	int32_t x794 = -962;
	volatile int32_t x795 = INT32_MAX;
	uint8_t x796 = 7U;
	int32_t t198 = -1974;

    t198 = (((x793|x794)^x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -1;
	volatile int32_t x798 = -978226;
	uint32_t x799 = 304475509U;
	uint8_t x800 = 65U;

    t199 = (((x797|x798)^x799)<=x800);

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

