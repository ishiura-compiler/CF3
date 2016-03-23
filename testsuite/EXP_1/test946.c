
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

volatile int32_t x2 = INT32_MAX;
uint64_t x3 = UINT64_MAX;
volatile int32_t t1 = 7;
static uint16_t x14 = 51U;
volatile int16_t x15 = INT16_MIN;
uint8_t x16 = UINT8_MAX;
int64_t x27 = INT64_MAX;
static uint64_t x30 = 540824219152LLU;
int32_t t7 = -7449841;
static volatile int16_t x40 = 462;
int64_t x41 = INT64_MIN;
static int64_t x43 = INT64_MAX;
int32_t t10 = 74216;
volatile int32_t x45 = -54;
volatile int32_t t11 = 1;
static int64_t x51 = INT64_MAX;
volatile uint32_t x52 = 22794604U;
volatile int32_t t12 = 1;
uint16_t x57 = UINT16_MAX;
static int32_t x58 = INT32_MIN;
uint64_t x64 = 18304997121LLU;
uint8_t x66 = UINT8_MAX;
static volatile int32_t t17 = 59;
int64_t x74 = 3726LL;
int16_t x75 = INT16_MIN;
static volatile int32_t t18 = 0;
volatile int32_t x77 = INT32_MIN;
static uint64_t x78 = 54530476739LLU;
int64_t x80 = 6088972LL;
static int8_t x84 = INT8_MAX;
volatile int8_t x86 = -1;
static int32_t x89 = -126;
int64_t x92 = INT64_MAX;
int8_t x96 = INT8_MIN;
uint8_t x99 = UINT8_MAX;
int64_t x101 = INT64_MIN;
static uint16_t x103 = 0U;
int64_t x109 = -173396LL;
uint16_t x113 = 192U;
uint16_t x116 = UINT16_MAX;
int16_t x120 = INT16_MIN;
int32_t t29 = 521269;
volatile int64_t x126 = 926LL;
uint16_t x133 = 4U;
uint8_t x148 = 2U;
int16_t x149 = INT16_MIN;
int64_t x152 = -1039858761253740054LL;
volatile int32_t t38 = 1;
int8_t x161 = -1;
static volatile uint16_t x162 = 1U;
volatile int32_t t40 = -1590752;
int8_t x165 = -1;
int16_t x166 = INT16_MIN;
volatile int32_t x173 = -2;
static int8_t x179 = -8;
int16_t x180 = INT16_MIN;
static uint32_t x188 = 912267U;
static int8_t x189 = -1;
int32_t x192 = -964;
static int16_t x194 = -1;
volatile int32_t t47 = -196;
uint32_t x198 = UINT32_MAX;
int32_t x202 = -1;
uint64_t x205 = UINT64_MAX;
static volatile uint32_t x208 = 379263U;
volatile uint64_t x209 = 2648588951782190LLU;
uint64_t x210 = UINT64_MAX;
uint8_t x214 = UINT8_MAX;
uint8_t x218 = UINT8_MAX;
uint64_t x220 = 1LLU;
int8_t x224 = INT8_MAX;
static volatile int32_t t55 = -1226;
uint8_t x234 = UINT8_MAX;
static int64_t x236 = INT64_MIN;
int32_t t57 = -124914;
static uint32_t x242 = UINT32_MAX;
int8_t x246 = INT8_MIN;
int8_t x249 = -1;
static int8_t x258 = INT8_MIN;
int32_t x262 = 24985;
int8_t x272 = 1;
static int32_t x274 = INT32_MIN;
static volatile int32_t t67 = 455455;
volatile int8_t x278 = INT8_MIN;
int64_t x280 = -1959097988207339LL;
int64_t x292 = INT64_MAX;
int32_t t71 = -47;
int64_t x293 = INT64_MIN;
int8_t x297 = 0;
volatile int8_t x302 = -13;
int32_t t75 = 1;
volatile int32_t t76 = 42492160;
uint64_t x320 = UINT64_MAX;
static int64_t x328 = 316852LL;
uint64_t x333 = 3592771998892785830LLU;
volatile uint32_t x335 = 9661361U;
uint16_t x339 = 27U;
int64_t x344 = -1LL;
int64_t x346 = INT64_MAX;
static int8_t x348 = -1;
uint16_t x351 = 287U;
uint32_t x353 = UINT32_MAX;
int32_t t90 = -1408091;
int64_t x370 = -1LL;
int64_t x377 = INT64_MAX;
uint64_t x382 = 5498001720269LLU;
int16_t x383 = INT16_MIN;
static int32_t x386 = 3527;
int8_t x387 = -2;
uint32_t x392 = 844066U;
int64_t x394 = 471490225429501LL;
uint8_t x400 = 7U;
uint32_t x406 = 82U;
volatile int16_t x407 = 2748;
volatile int8_t x412 = -1;
volatile int32_t t100 = 1495;
static int32_t t101 = -1343065;
int8_t x418 = INT8_MIN;
int32_t x424 = INT32_MIN;
static int32_t x425 = 194444;
int8_t x426 = INT8_MAX;
static int8_t x432 = -3;
uint8_t x440 = UINT8_MAX;
int8_t x444 = -9;
int32_t t109 = -4806756;
volatile uint16_t x456 = 180U;
volatile int32_t t111 = -802;
uint8_t x464 = 2U;
uint8_t x473 = UINT8_MAX;
int32_t x474 = INT32_MAX;
uint32_t x482 = UINT32_MAX;
static uint16_t x483 = 14571U;
int64_t x486 = 677067051LL;
static int64_t x489 = 91228875LL;
volatile int16_t x490 = -256;
int64_t x491 = -93728204546091981LL;
int32_t x493 = -1;
volatile int8_t x498 = 56;
uint32_t x501 = 9U;
int8_t x502 = 1;
uint16_t x506 = UINT16_MAX;
static volatile int64_t x508 = 0LL;
volatile int32_t t123 = -1496821;
static volatile int8_t x515 = -1;
static uint32_t x516 = 4373U;
volatile int32_t t125 = 15182474;
static int32_t x519 = -1;
int16_t x521 = -1;
int16_t x525 = INT16_MIN;
volatile int32_t t129 = 522;
uint32_t x537 = UINT32_MAX;
static int8_t x541 = -1;
static int64_t x542 = INT64_MAX;
static int64_t x543 = INT64_MAX;
volatile uint8_t x544 = UINT8_MAX;
int32_t x545 = -1231801;
int64_t x547 = INT64_MIN;
uint16_t x555 = UINT16_MAX;
volatile int32_t x561 = INT32_MAX;
int32_t x568 = -1;
int64_t x575 = -1LL;
uint32_t x576 = 55U;
int16_t x581 = -1;
uint8_t x583 = 54U;
uint16_t x590 = 336U;
volatile uint32_t x606 = 893879U;
volatile int32_t t148 = 75524;
int16_t x609 = INT16_MAX;
volatile uint32_t x615 = 11602340U;
static uint64_t x616 = 51LLU;
uint16_t x623 = UINT16_MAX;
int8_t x624 = -5;
int16_t x632 = INT16_MIN;
volatile int32_t t157 = -1018;
static volatile uint32_t x652 = UINT32_MAX;
uint16_t x654 = UINT16_MAX;
static int16_t x656 = INT16_MIN;
int32_t x657 = INT32_MIN;
int32_t x659 = 0;
int64_t x667 = 259530223133723813LL;
uint16_t x682 = 2U;
int64_t x684 = INT64_MIN;
volatile int8_t x687 = INT8_MAX;
uint16_t x688 = UINT16_MAX;
static int32_t t167 = -53;
int16_t x695 = INT16_MIN;
uint32_t x703 = 1U;
uint32_t x704 = UINT32_MAX;
volatile int32_t t171 = -74989;
int8_t x706 = -1;
volatile int64_t x715 = INT64_MIN;
volatile int32_t t176 = -43529;
int32_t x726 = 47942205;
uint64_t x729 = 100574LLU;
static int16_t x735 = 0;
int16_t x753 = INT16_MIN;
int16_t x754 = INT16_MIN;
volatile int16_t x757 = -1;
int64_t x758 = INT64_MIN;
static int32_t t185 = 61211;
int8_t x761 = -1;
int16_t x765 = 3;
uint16_t x766 = 1359U;
int8_t x768 = 0;
int16_t x772 = INT16_MIN;
int32_t t188 = 28118317;
int16_t x773 = INT16_MAX;
uint64_t x776 = 377LLU;
int32_t t189 = -1;
uint16_t x781 = UINT16_MAX;
int32_t x783 = INT32_MIN;
volatile int8_t x784 = -1;
int16_t x786 = INT16_MIN;
volatile int32_t t192 = -614;
uint32_t x789 = UINT32_MAX;
uint8_t x791 = UINT8_MAX;
volatile uint32_t x793 = 1853682785U;
int64_t x794 = -1LL;
int16_t x796 = INT16_MIN;
uint64_t x800 = 511108570486644LLU;
uint16_t x803 = 59U;
static volatile int32_t t196 = 7603014;
int8_t x806 = INT8_MIN;
static int64_t x807 = INT64_MIN;
static volatile int16_t x809 = INT16_MIN;
uint16_t x812 = 229U;
int32_t t198 = -140417457;
volatile int64_t x813 = -1LL;
int32_t x814 = INT32_MIN;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	uint64_t x4 = 35434381721243918LLU;
	int32_t t0 = -691;

    t0 = (((x1%x2)&x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 24U;
	uint32_t x6 = 2U;
	int64_t x7 = INT64_MIN;
	volatile int8_t x8 = INT8_MAX;

    t1 = (((x5%x6)&x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	volatile int16_t x10 = -1;
	volatile int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 13;

    t2 = (((x9%x10)&x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MAX;
	int32_t t3 = 35873;

    t3 = (((x13%x14)&x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 187LLU;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 10999832LLU;
	uint32_t x20 = 258229042U;
	volatile int32_t t4 = -66742051;

    t4 = (((x17%x18)&x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = INT8_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	uint64_t x24 = 4077LLU;
	static int32_t t5 = -3072763;

    t5 = (((x21%x22)&x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 1861U;
	volatile uint8_t x26 = UINT8_MAX;
	int32_t x28 = -1;
	int32_t t6 = -13;

    t6 = (((x25%x26)&x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	int32_t x31 = INT32_MAX;
	uint8_t x32 = 6U;

    t7 = (((x29%x30)&x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -41;
	int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = 771U;
	volatile int32_t t8 = -4078;

    t8 = (((x33%x34)&x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = UINT8_MAX;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = -1LL;
	int32_t t9 = -3;

    t9 = (((x37%x38)&x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = 2395U;
	uint32_t x44 = 4596907U;

    t10 = (((x41%x42)&x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	volatile uint8_t x47 = 8U;
	int16_t x48 = INT16_MIN;

    t11 = (((x45%x46)&x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -2904918276062710681LL;
	volatile uint32_t x50 = 39U;

    t12 = (((x49%x50)&x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MIN;
	uint32_t x54 = 83833U;
	uint32_t x55 = 7426491U;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 25;

    t13 = (((x53%x54)&x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x59 = 85U;
	static volatile int64_t x60 = -29891498LL;
	int32_t t14 = 45;

    t14 = (((x57%x58)&x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	int32_t t15 = -28973949;

    t15 = (((x61%x62)&x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x67 = 2776601U;
	int16_t x68 = -174;
	volatile int32_t t16 = 391;

    t16 = (((x65%x66)&x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MAX;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MAX;

    t17 = (((x69%x70)&x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	volatile uint64_t x76 = 1049736711794LLU;

    t18 = (((x73%x74)&x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x79 = -316466;
	int32_t t19 = -294;

    t19 = (((x77%x78)&x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static uint16_t x82 = 1098U;
	int64_t x83 = -1LL;
	volatile int32_t t20 = -247;

    t20 = (((x81%x82)&x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 818LL;
	int32_t x87 = -343036;
	int16_t x88 = -6;
	int32_t t21 = -3247;

    t21 = (((x85%x86)&x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = 152534718U;
	uint32_t x91 = 6692U;
	static int32_t t22 = 62;

    t22 = (((x89%x90)&x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = -1LL;
	int64_t x94 = INT64_MAX;
	uint8_t x95 = UINT8_MAX;
	volatile int32_t t23 = 1;

    t23 = (((x93%x94)&x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 27;
	int16_t x98 = INT16_MAX;
	uint32_t x100 = 10814U;
	volatile int32_t t24 = 0;

    t24 = (((x97%x98)&x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 94049080317LLU;
	static volatile int8_t x104 = INT8_MAX;
	volatile int32_t t25 = 181;

    t25 = (((x101%x102)&x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	uint32_t x106 = 508247842U;
	uint64_t x107 = 1064788072LLU;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 231230;

    t26 = (((x105%x106)&x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	volatile int8_t x111 = INT8_MIN;
	int32_t x112 = -1;
	int32_t t27 = -8290;

    t27 = (((x109%x110)&x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -1917;
	static int32_t x115 = INT32_MIN;
	int32_t t28 = -64429;

    t28 = (((x113%x114)&x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 5;
	static int64_t x118 = INT64_MIN;
	uint8_t x119 = 25U;

    t29 = (((x117%x118)&x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 31;
	static volatile int64_t x122 = INT64_MIN;
	static volatile uint8_t x123 = 8U;
	uint8_t x124 = 1U;
	int32_t t30 = 3884739;

    t30 = (((x121%x122)&x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	volatile int32_t x128 = -41973;
	static volatile int32_t t31 = -1093016;

    t31 = (((x125%x126)&x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -1;
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 15229791U;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t32 = -95945844;

    t32 = (((x129%x130)&x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x134 = -25;
	static int16_t x135 = INT16_MIN;
	volatile int8_t x136 = 15;
	int32_t t33 = -4;

    t33 = (((x133%x134)&x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	volatile int8_t x138 = 3;
	int64_t x139 = -8366560459LL;
	int8_t x140 = -11;
	volatile int32_t t34 = 1;

    t34 = (((x137%x138)&x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	static int32_t x144 = 25;
	int32_t t35 = 7;

    t35 = (((x141%x142)&x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x145 = 31U;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MIN;
	static volatile int32_t t36 = -915;

    t36 = (((x145%x146)&x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int32_t t37 = -4708;

    t37 = (((x149%x150)&x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x153 = UINT16_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	volatile uint16_t x155 = 2913U;
	int8_t x156 = INT8_MAX;

    t38 = (((x153%x154)&x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	volatile int64_t x158 = -1LL;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 20873707;

    t39 = (((x157%x158)&x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x163 = -33865375629LL;
	volatile int16_t x164 = -1;

    t40 = (((x161%x162)&x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x167 = -1;
	int64_t x168 = -1LL;
	int32_t t41 = -197056;

    t41 = (((x165%x166)&x167)==x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x174 = 8;
	volatile int64_t x175 = -520287861825LL;
	static int16_t x176 = -729;
	int32_t t42 = -26565;

    t42 = (((x173%x174)&x175)==x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -38259400;
	static int8_t x178 = 48;
	int32_t t43 = 43;

    t43 = (((x177%x178)&x179)==x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	int16_t x184 = -1;
	int32_t t44 = -150931231;

    t44 = (((x181%x182)&x183)==x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x185 = -1LL;
	volatile int16_t x186 = -1;
	uint64_t x187 = 61624428LLU;
	volatile int32_t t45 = 964368378;

    t45 = (((x185%x186)&x187)==x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x190 = -1;
	int8_t x191 = -18;
	volatile int32_t t46 = -25;

    t46 = (((x189%x190)&x191)==x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	int16_t x196 = -1;

    t47 = (((x193%x194)&x195)==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x197 = INT64_MAX;
	uint16_t x199 = 14U;
	static int8_t x200 = -1;
	static volatile int32_t t48 = 244047;

    t48 = (((x197%x198)&x199)==x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x201 = -13810369200045LL;
	int16_t x203 = INT16_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t49 = 108772660;

    t49 = (((x201%x202)&x203)==x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x206 = INT32_MAX;
	static int64_t x207 = -1LL;
	static volatile int32_t t50 = -15;

    t50 = (((x205%x206)&x207)==x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x211 = UINT32_MAX;
	uint64_t x212 = UINT64_MAX;
	int32_t t51 = 107339;

    t51 = (((x209%x210)&x211)==x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = -1;
	volatile int32_t x215 = INT32_MIN;
	uint32_t x216 = UINT32_MAX;
	int32_t t52 = -39543;

    t52 = (((x213%x214)&x215)==x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x217 = INT8_MIN;
	volatile int16_t x219 = INT16_MIN;
	int32_t t53 = 449333;

    t53 = (((x217%x218)&x219)==x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x221 = 105U;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MAX;
	int32_t t54 = -12031;

    t54 = (((x221%x222)&x223)==x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = 1034043024U;
	static volatile int32_t x228 = -1;

    t55 = (((x225%x226)&x227)==x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x229 = -1LL;
	int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	volatile int16_t x232 = -3;
	volatile int32_t t56 = -16;

    t56 = (((x229%x230)&x231)==x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x233 = -1LL;
	int16_t x235 = INT16_MIN;

    t57 = (((x233%x234)&x235)==x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x237 = INT64_MIN;
	volatile int8_t x238 = -1;
	volatile int64_t x239 = INT64_MAX;
	int64_t x240 = -613531LL;
	volatile int32_t t58 = -78;

    t58 = (((x237%x238)&x239)==x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = 15910460541449LLU;
	uint32_t x243 = UINT32_MAX;
	int8_t x244 = -3;
	int32_t t59 = 69881;

    t59 = (((x241%x242)&x243)==x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	volatile int32_t x247 = INT32_MIN;
	static uint32_t x248 = 623853U;
	static int32_t t60 = 15064;

    t60 = (((x245%x246)&x247)==x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x250 = -1;
	int64_t x251 = INT64_MAX;
	uint64_t x252 = 616735282233LLU;
	static volatile int32_t t61 = 310319858;

    t61 = (((x249%x250)&x251)==x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x253 = 1261U;
	int8_t x254 = INT8_MAX;
	static int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	int32_t t62 = 614174283;

    t62 = (((x253%x254)&x255)==x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x257 = INT32_MAX;
	static int8_t x259 = INT8_MIN;
	volatile uint64_t x260 = 62100710LLU;
	int32_t t63 = 16153436;

    t63 = (((x257%x258)&x259)==x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x261 = UINT64_MAX;
	uint16_t x263 = 14U;
	uint16_t x264 = 10371U;
	int32_t t64 = 2678766;

    t64 = (((x261%x262)&x263)==x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x265 = -28687;
	uint64_t x266 = 1LLU;
	volatile uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t65 = 626;

    t65 = (((x265%x266)&x267)==x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MAX;
	static int32_t x270 = -703050406;
	int8_t x271 = INT8_MIN;
	int32_t t66 = 34;

    t66 = (((x269%x270)&x271)==x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x273 = UINT64_MAX;
	uint64_t x275 = 6LLU;
	int64_t x276 = 16788196658871LL;

    t67 = (((x273%x274)&x275)==x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = INT32_MIN;
	int16_t x279 = 6100;
	volatile int32_t t68 = -100;

    t68 = (((x277%x278)&x279)==x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = UINT16_MAX;
	static int64_t x282 = INT64_MAX;
	volatile int16_t x283 = -7999;
	int16_t x284 = -44;
	volatile int32_t t69 = 86563;

    t69 = (((x281%x282)&x283)==x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x285 = -3565902653LL;
	int32_t x286 = 29744;
	int32_t x287 = -101;
	static uint8_t x288 = UINT8_MAX;
	static volatile int32_t t70 = 171154;

    t70 = (((x285%x286)&x287)==x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = -1;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = -58;

    t71 = (((x289%x290)&x291)==x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x294 = INT8_MIN;
	static uint32_t x295 = 1496851274U;
	int8_t x296 = INT8_MAX;
	int32_t t72 = 56584;

    t72 = (((x293%x294)&x295)==x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x298 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	static uint16_t x300 = 31102U;
	volatile int32_t t73 = 2875;

    t73 = (((x297%x298)&x299)==x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x301 = 483067956986896LLU;
	int32_t x303 = -1;
	uint16_t x304 = 0U;
	static int32_t t74 = 512999;

    t74 = (((x301%x302)&x303)==x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x305 = -1;
	uint64_t x306 = 2542558673LLU;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = -1LL;

    t75 = (((x305%x306)&x307)==x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x309 = 135752U;
	int32_t x310 = -481829;
	int16_t x311 = -1;
	int8_t x312 = 5;

    t76 = (((x309%x310)&x311)==x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = -34197LL;
	static int32_t x314 = 13;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;
	static int32_t t77 = -29657;

    t77 = (((x313%x314)&x315)==x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x317 = 0U;
	static uint8_t x318 = 3U;
	int8_t x319 = 61;
	int32_t t78 = -351;

    t78 = (((x317%x318)&x319)==x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = -1;
	uint16_t x322 = UINT16_MAX;
	volatile int32_t x323 = -68733;
	int32_t x324 = INT32_MAX;
	static volatile int32_t t79 = 299174;

    t79 = (((x321%x322)&x323)==x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = INT16_MIN;
	volatile uint8_t x326 = UINT8_MAX;
	static int64_t x327 = -3136LL;
	int32_t t80 = -121965;

    t80 = (((x325%x326)&x327)==x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = INT16_MIN;
	int32_t x331 = -1;
	volatile uint16_t x332 = 2231U;
	int32_t t81 = -80;

    t81 = (((x329%x330)&x331)==x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x334 = UINT16_MAX;
	uint32_t x336 = 0U;
	static volatile int32_t t82 = 0;

    t82 = (((x333%x334)&x335)==x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = -1;
	volatile int64_t x338 = 51711996606384039LL;
	int64_t x340 = -1LL;
	int32_t t83 = 0;

    t83 = (((x337%x338)&x339)==x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x341 = 8U;
	static uint8_t x342 = UINT8_MAX;
	volatile int64_t x343 = INT64_MAX;
	volatile int32_t t84 = -143697872;

    t84 = (((x341%x342)&x343)==x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = -1;
	volatile int64_t x347 = INT64_MIN;
	int32_t t85 = 1565619;

    t85 = (((x345%x346)&x347)==x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x349 = UINT16_MAX;
	static int16_t x350 = -958;
	int16_t x352 = 796;
	int32_t t86 = -580991;

    t86 = (((x349%x350)&x351)==x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x354 = INT64_MIN;
	uint32_t x355 = 41325U;
	int64_t x356 = INT64_MAX;
	static volatile int32_t t87 = -159962766;

    t87 = (((x353%x354)&x355)==x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x357 = 1902390192338968719LLU;
	volatile int64_t x358 = 1324931LL;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t88 = -112;

    t88 = (((x357%x358)&x359)==x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = INT64_MIN;
	static int32_t x362 = -1;
	uint16_t x363 = 0U;
	int16_t x364 = 10;
	volatile int32_t t89 = 79462401;

    t89 = (((x361%x362)&x363)==x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = INT8_MIN;
	volatile uint64_t x366 = 46650LLU;
	int64_t x367 = INT64_MIN;
	int64_t x368 = 10LL;

    t90 = (((x365%x366)&x367)==x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = 0U;
	static int64_t x371 = -1LL;
	volatile uint8_t x372 = UINT8_MAX;
	int32_t t91 = -195755;

    t91 = (((x369%x370)&x371)==x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x378 = INT8_MIN;
	static uint16_t x379 = UINT16_MAX;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t92 = -4;

    t92 = (((x377%x378)&x379)==x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t93 = -628;

    t93 = (((x381%x382)&x383)==x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x385 = UINT8_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t94 = -7929;

    t94 = (((x385%x386)&x387)==x388);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x389 = -1;
	int32_t x390 = 198189;
	int16_t x391 = 7088;
	volatile int32_t t95 = 939423208;

    t95 = (((x389%x390)&x391)==x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x393 = 1343;
	volatile int32_t x395 = 40;
	uint16_t x396 = UINT16_MAX;
	int32_t t96 = -4;

    t96 = (((x393%x394)&x395)==x396);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = -1LL;
	int32_t x398 = -585;
	static int64_t x399 = 25737309LL;
	volatile int32_t t97 = 52196;

    t97 = (((x397%x398)&x399)==x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = UINT32_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	static int64_t x403 = -1LL;
	int8_t x404 = -3;
	int32_t t98 = -5376;

    t98 = (((x401%x402)&x403)==x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x405 = UINT64_MAX;
	int16_t x408 = INT16_MAX;
	int32_t t99 = -1036463;

    t99 = (((x405%x406)&x407)==x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x409 = 382U;
	int64_t x410 = -1LL;
	int8_t x411 = -1;

    t100 = (((x409%x410)&x411)==x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = -1;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 275259443763186LLU;

    t101 = (((x413%x414)&x415)==x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x417 = UINT64_MAX;
	static volatile uint64_t x419 = 231601060LLU;
	int32_t x420 = 984;
	int32_t t102 = -107;

    t102 = (((x417%x418)&x419)==x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MIN;
	uint16_t x422 = 30U;
	int16_t x423 = 5650;
	static int32_t t103 = 109933;

    t103 = (((x421%x422)&x423)==x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x427 = INT16_MIN;
	static uint16_t x428 = UINT16_MAX;
	volatile int32_t t104 = 1;

    t104 = (((x425%x426)&x427)==x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x429 = 23045820LLU;
	static int16_t x430 = INT16_MIN;
	int32_t x431 = -1;
	volatile int32_t t105 = 5949693;

    t105 = (((x429%x430)&x431)==x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x433 = -15;
	int64_t x434 = INT64_MIN;
	int16_t x435 = 71;
	int32_t x436 = INT32_MIN;
	static volatile int32_t t106 = 346014374;

    t106 = (((x433%x434)&x435)==x436);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x437 = 773637012747247801LLU;
	static int16_t x438 = -1;
	static int32_t x439 = 63;
	int32_t t107 = -19;

    t107 = (((x437%x438)&x439)==x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x441 = 0U;
	int16_t x442 = 23;
	static int16_t x443 = INT16_MIN;
	static volatile int32_t t108 = -615871;

    t108 = (((x441%x442)&x443)==x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x445 = INT16_MAX;
	int16_t x446 = 219;
	int32_t x447 = -1;
	static uint8_t x448 = UINT8_MAX;

    t109 = (((x445%x446)&x447)==x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x449 = -1;
	static int16_t x450 = -227;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -239182735452532LL;
	volatile int32_t t110 = 1;

    t110 = (((x449%x450)&x451)==x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = -774561;
	int32_t x454 = -1;
	int64_t x455 = INT64_MIN;

    t111 = (((x453%x454)&x455)==x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x461 = 0U;
	int64_t x462 = INT64_MAX;
	uint8_t x463 = 10U;
	volatile int32_t t112 = 27;

    t112 = (((x461%x462)&x463)==x464);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = 1927247294361834LL;
	static volatile uint16_t x466 = 73U;
	uint64_t x467 = 18094116401LLU;
	volatile int8_t x468 = INT8_MIN;
	static int32_t t113 = -39;

    t113 = (((x465%x466)&x467)==x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x469 = 511083690241LLU;
	static uint16_t x470 = 53U;
	int8_t x471 = -1;
	volatile int64_t x472 = -1476LL;
	volatile int32_t t114 = -733958962;

    t114 = (((x469%x470)&x471)==x472);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x475 = 0U;
	uint16_t x476 = UINT16_MAX;
	int32_t t115 = -1191103;

    t115 = (((x473%x474)&x475)==x476);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = UINT16_MAX;
	int64_t x478 = INT64_MIN;
	volatile uint64_t x479 = 1650386LLU;
	uint16_t x480 = 16574U;
	static int32_t t116 = 7;

    t116 = (((x477%x478)&x479)==x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x481 = INT32_MAX;
	int16_t x484 = -1;
	int32_t t117 = -4;

    t117 = (((x481%x482)&x483)==x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x485 = -1LL;
	int8_t x487 = 3;
	volatile int16_t x488 = INT16_MIN;
	int32_t t118 = 2;

    t118 = (((x485%x486)&x487)==x488);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x492 = INT32_MIN;
	int32_t t119 = -129772;

    t119 = (((x489%x490)&x491)==x492);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x494 = INT32_MAX;
	volatile int32_t x495 = INT32_MIN;
	uint16_t x496 = 17U;
	volatile int32_t t120 = -1230;

    t120 = (((x493%x494)&x495)==x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x497 = -9324;
	uint32_t x499 = 14482672U;
	int32_t x500 = -9976363;
	volatile int32_t t121 = 28764226;

    t121 = (((x497%x498)&x499)==x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x503 = INT32_MAX;
	volatile uint16_t x504 = UINT16_MAX;
	int32_t t122 = -14125073;

    t122 = (((x501%x502)&x503)==x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x505 = UINT64_MAX;
	static int64_t x507 = -8487527440973LL;

    t123 = (((x505%x506)&x507)==x508);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x509 = INT16_MIN;
	volatile int32_t x510 = -58;
	int16_t x511 = INT16_MIN;
	volatile int32_t x512 = INT32_MIN;
	volatile int32_t t124 = 377;

    t124 = (((x509%x510)&x511)==x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x513 = INT8_MIN;
	static int32_t x514 = INT32_MIN;

    t125 = (((x513%x514)&x515)==x516);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	int16_t x518 = 1;
	volatile uint64_t x520 = 505006064155642609LLU;
	static int32_t t126 = -300636;

    t126 = (((x517%x518)&x519)==x520);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x522 = INT64_MIN;
	int8_t x523 = -18;
	int16_t x524 = -20;
	int32_t t127 = 260512;

    t127 = (((x521%x522)&x523)==x524);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x526 = 1772852006072LL;
	int64_t x527 = 5997430LL;
	int64_t x528 = INT64_MIN;
	volatile int32_t t128 = 22;

    t128 = (((x525%x526)&x527)==x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x529 = INT8_MIN;
	int32_t x530 = INT32_MIN;
	volatile int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MIN;

    t129 = (((x529%x530)&x531)==x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x533 = 66U;
	volatile int64_t x534 = INT64_MAX;
	uint64_t x535 = UINT64_MAX;
	int64_t x536 = INT64_MIN;
	int32_t t130 = 2;

    t130 = (((x533%x534)&x535)==x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x538 = 1533U;
	uint64_t x539 = 1154LLU;
	uint64_t x540 = 84LLU;
	volatile int32_t t131 = -1202;

    t131 = (((x537%x538)&x539)==x540);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t t132 = -77212;

    t132 = (((x541%x542)&x543)==x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x546 = INT8_MAX;
	int32_t x548 = -1;
	int32_t t133 = -51404044;

    t133 = (((x545%x546)&x547)==x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x549 = INT8_MIN;
	int32_t x550 = 1362015;
	uint64_t x551 = UINT64_MAX;
	volatile int16_t x552 = INT16_MAX;
	int32_t t134 = 195690484;

    t134 = (((x549%x550)&x551)==x552);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x553 = -1;
	int8_t x554 = -1;
	static uint16_t x556 = UINT16_MAX;
	int32_t t135 = -2652;

    t135 = (((x553%x554)&x555)==x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = 4;
	int16_t x558 = INT16_MAX;
	int64_t x559 = INT64_MIN;
	static int64_t x560 = -1LL;
	static volatile int32_t t136 = -436;

    t136 = (((x557%x558)&x559)==x560);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x562 = -68155853636LL;
	static volatile int16_t x563 = INT16_MAX;
	static volatile int16_t x564 = -1;
	volatile int32_t t137 = 2043;

    t137 = (((x561%x562)&x563)==x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x565 = UINT8_MAX;
	static volatile int8_t x566 = INT8_MIN;
	static volatile int8_t x567 = INT8_MAX;
	int32_t t138 = 15614158;

    t138 = (((x565%x566)&x567)==x568);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x569 = -2008;
	int64_t x570 = -183777LL;
	volatile uint32_t x571 = 7181U;
	int8_t x572 = INT8_MAX;
	int32_t t139 = 5;

    t139 = (((x569%x570)&x571)==x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x573 = UINT16_MAX;
	uint16_t x574 = 6120U;
	int32_t t140 = -40089342;

    t140 = (((x573%x574)&x575)==x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x577 = -4;
	uint16_t x578 = UINT16_MAX;
	static int16_t x579 = -1;
	volatile uint8_t x580 = UINT8_MAX;
	volatile int32_t t141 = 484809025;

    t141 = (((x577%x578)&x579)==x580);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x582 = INT8_MIN;
	volatile uint16_t x584 = 11886U;
	volatile int32_t t142 = 39331;

    t142 = (((x581%x582)&x583)==x584);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x585 = UINT32_MAX;
	volatile uint32_t x586 = 810705U;
	int32_t x587 = INT32_MIN;
	volatile uint32_t x588 = 97U;
	volatile int32_t t143 = 456729308;

    t143 = (((x585%x586)&x587)==x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x589 = INT16_MIN;
	volatile int32_t x591 = INT32_MIN;
	static int64_t x592 = 5LL;
	int32_t t144 = -1;

    t144 = (((x589%x590)&x591)==x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x593 = UINT32_MAX;
	static volatile uint16_t x594 = 5U;
	static volatile int64_t x595 = INT64_MIN;
	uint32_t x596 = 0U;
	volatile int32_t t145 = 160397;

    t145 = (((x593%x594)&x595)==x596);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x597 = UINT64_MAX;
	uint32_t x598 = UINT32_MAX;
	uint32_t x599 = UINT32_MAX;
	static int16_t x600 = -14;
	static volatile int32_t t146 = -524;

    t146 = (((x597%x598)&x599)==x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x601 = 467313;
	static int16_t x602 = -88;
	uint32_t x603 = UINT32_MAX;
	int16_t x604 = 2;
	volatile int32_t t147 = 26985;

    t147 = (((x601%x602)&x603)==x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x605 = -1;
	volatile uint32_t x607 = 14733738U;
	uint8_t x608 = 25U;

    t148 = (((x605%x606)&x607)==x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x610 = INT16_MIN;
	static volatile int64_t x611 = -8492428953920LL;
	int64_t x612 = INT64_MAX;
	volatile int32_t t149 = 5596;

    t149 = (((x609%x610)&x611)==x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x613 = -1;
	uint16_t x614 = 132U;
	static int32_t t150 = -20;

    t150 = (((x613%x614)&x615)==x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x617 = INT64_MAX;
	uint8_t x618 = 43U;
	int8_t x619 = INT8_MIN;
	static volatile int8_t x620 = INT8_MAX;
	volatile int32_t t151 = 508;

    t151 = (((x617%x618)&x619)==x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x621 = INT8_MIN;
	int64_t x622 = INT64_MIN;
	int32_t t152 = 31;

    t152 = (((x621%x622)&x623)==x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = INT16_MIN;
	int16_t x626 = 6;
	int16_t x627 = INT16_MIN;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t153 = -12876451;

    t153 = (((x625%x626)&x627)==x628);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x629 = INT16_MIN;
	static int8_t x630 = INT8_MIN;
	uint16_t x631 = UINT16_MAX;
	static volatile int32_t t154 = 960903916;

    t154 = (((x629%x630)&x631)==x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x634 = -1;
	static uint64_t x635 = 2752242065453340LLU;
	int16_t x636 = INT16_MIN;
	int32_t t155 = 1;

    t155 = (((x633%x634)&x635)==x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = INT32_MIN;
	volatile int16_t x639 = INT16_MIN;
	static int8_t x640 = 31;
	int32_t t156 = -1;

    t156 = (((x637%x638)&x639)==x640);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x641 = INT8_MAX;
	volatile int64_t x642 = 1LL;
	int32_t x643 = -1;
	int8_t x644 = 1;

    t157 = (((x641%x642)&x643)==x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x649 = -35;
	volatile int32_t x650 = -1;
	int8_t x651 = INT8_MIN;
	int32_t t158 = 0;

    t158 = (((x649%x650)&x651)==x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x653 = 1045645236LLU;
	static int32_t x655 = INT32_MIN;
	int32_t t159 = -450593706;

    t159 = (((x653%x654)&x655)==x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x658 = UINT64_MAX;
	static uint32_t x660 = UINT32_MAX;
	static int32_t t160 = 475;

    t160 = (((x657%x658)&x659)==x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x661 = 20166;
	int32_t x662 = -1;
	uint32_t x663 = 4U;
	static int32_t x664 = INT32_MIN;
	int32_t t161 = -24294;

    t161 = (((x661%x662)&x663)==x664);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x665 = -62239;
	int8_t x666 = 6;
	uint64_t x668 = 11LLU;
	int32_t t162 = 590324;

    t162 = (((x665%x666)&x667)==x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x669 = 48U;
	int16_t x670 = INT16_MIN;
	int64_t x671 = -1LL;
	static uint8_t x672 = 60U;
	volatile int32_t t163 = 30163;

    t163 = (((x669%x670)&x671)==x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x673 = INT32_MIN;
	uint64_t x674 = 698170910359323673LLU;
	uint64_t x675 = 29LLU;
	int64_t x676 = INT64_MIN;
	volatile int32_t t164 = -293662810;

    t164 = (((x673%x674)&x675)==x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x677 = INT32_MIN;
	uint16_t x678 = UINT16_MAX;
	static uint32_t x679 = 216681010U;
	int8_t x680 = -1;
	volatile int32_t t165 = -212;

    t165 = (((x677%x678)&x679)==x680);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x683 = INT64_MIN;
	volatile int32_t t166 = -26768;

    t166 = (((x681%x682)&x683)==x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x685 = INT16_MAX;
	static uint64_t x686 = 13LLU;

    t167 = (((x685%x686)&x687)==x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x689 = -1;
	int16_t x690 = -1;
	uint8_t x691 = UINT8_MAX;
	uint64_t x692 = 285725320LLU;
	int32_t t168 = 4015625;

    t168 = (((x689%x690)&x691)==x692);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x693 = -9;
	int32_t x694 = INT32_MIN;
	uint64_t x696 = UINT64_MAX;
	int32_t t169 = -67608;

    t169 = (((x693%x694)&x695)==x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x697 = 3U;
	int32_t x698 = -27543;
	int16_t x699 = -1;
	int32_t x700 = INT32_MIN;
	int32_t t170 = 280547;

    t170 = (((x697%x698)&x699)==x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x701 = 1369;
	static uint32_t x702 = UINT32_MAX;

    t171 = (((x701%x702)&x703)==x704);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x705 = INT32_MAX;
	uint32_t x707 = UINT32_MAX;
	int32_t x708 = -1;
	static int32_t t172 = -10;

    t172 = (((x705%x706)&x707)==x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MAX;
	int8_t x710 = INT8_MAX;
	int64_t x711 = -1LL;
	static volatile uint8_t x712 = 4U;
	int32_t t173 = -1184;

    t173 = (((x709%x710)&x711)==x712);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x713 = 4041U;
	static int32_t x714 = -1;
	static int8_t x716 = INT8_MIN;
	static volatile int32_t t174 = 106;

    t174 = (((x713%x714)&x715)==x716);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = INT16_MIN;
	static uint8_t x718 = 110U;
	int64_t x719 = INT64_MAX;
	int32_t x720 = -1;
	int32_t t175 = 458634614;

    t175 = (((x717%x718)&x719)==x720);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	int8_t x722 = -1;
	int16_t x723 = -1;
	int32_t x724 = 3637;

    t176 = (((x721%x722)&x723)==x724);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x725 = INT8_MIN;
	volatile int8_t x727 = INT8_MIN;
	int16_t x728 = -1;
	volatile int32_t t177 = -641523802;

    t177 = (((x725%x726)&x727)==x728);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x730 = -1;
	int64_t x731 = INT64_MIN;
	static int16_t x732 = INT16_MAX;
	int32_t t178 = -1;

    t178 = (((x729%x730)&x731)==x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x733 = 1U;
	uint64_t x734 = 397LLU;
	volatile uint32_t x736 = 1U;
	volatile int32_t t179 = 28;

    t179 = (((x733%x734)&x735)==x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x737 = 22276U;
	int32_t x738 = -436;
	volatile int8_t x739 = 1;
	uint16_t x740 = 2U;
	volatile int32_t t180 = -18;

    t180 = (((x737%x738)&x739)==x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x741 = -30;
	uint8_t x742 = 47U;
	volatile int32_t x743 = INT32_MAX;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t181 = -115515;

    t181 = (((x741%x742)&x743)==x744);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x745 = -1;
	int64_t x746 = -14565088922932LL;
	static uint64_t x747 = 491256256083494LLU;
	int32_t x748 = -1;
	static volatile int32_t t182 = -60;

    t182 = (((x745%x746)&x747)==x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x749 = INT64_MIN;
	uint16_t x750 = 10U;
	int16_t x751 = 0;
	uint64_t x752 = 2656977LLU;
	int32_t t183 = -129498012;

    t183 = (((x749%x750)&x751)==x752);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x755 = INT8_MIN;
	int64_t x756 = -1LL;
	volatile int32_t t184 = -493414006;

    t184 = (((x753%x754)&x755)==x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x759 = 0;
	static uint8_t x760 = 1U;

    t185 = (((x757%x758)&x759)==x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x762 = UINT32_MAX;
	volatile uint32_t x763 = 165373U;
	uint8_t x764 = 7U;
	volatile int32_t t186 = -50828;

    t186 = (((x761%x762)&x763)==x764);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x767 = -1;
	volatile int32_t t187 = -631099;

    t187 = (((x765%x766)&x767)==x768);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = INT32_MIN;
	static int16_t x770 = -1;
	volatile int8_t x771 = 0;

    t188 = (((x769%x770)&x771)==x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x774 = INT32_MAX;
	volatile int16_t x775 = INT16_MIN;

    t189 = (((x773%x774)&x775)==x776);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x777 = 232681125;
	uint32_t x778 = UINT32_MAX;
	volatile uint16_t x779 = UINT16_MAX;
	static uint8_t x780 = 3U;
	static int32_t t190 = 0;

    t190 = (((x777%x778)&x779)==x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x782 = UINT16_MAX;
	int32_t t191 = -14017347;

    t191 = (((x781%x782)&x783)==x784);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = -29;
	int16_t x787 = 15;
	volatile int32_t x788 = -40493;

    t192 = (((x785%x786)&x787)==x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x790 = UINT16_MAX;
	uint32_t x792 = 79423391U;
	int32_t t193 = 0;

    t193 = (((x789%x790)&x791)==x792);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x795 = 7989520482195LLU;
	int32_t t194 = 1493746;

    t194 = (((x793%x794)&x795)==x796);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x797 = -1LL;
	uint64_t x798 = 1044153244597945LLU;
	volatile uint32_t x799 = 726U;
	volatile int32_t t195 = -120759624;

    t195 = (((x797%x798)&x799)==x800);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x801 = 231417025U;
	int8_t x802 = -3;
	volatile int16_t x804 = -1;

    t196 = (((x801%x802)&x803)==x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x805 = INT64_MIN;
	int16_t x808 = -1;
	int32_t t197 = -261633;

    t197 = (((x805%x806)&x807)==x808);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x810 = INT16_MIN;
	static int64_t x811 = INT64_MIN;

    t198 = (((x809%x810)&x811)==x812);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x815 = -1;
	volatile int32_t x816 = -3;
	int32_t t199 = 2;

    t199 = (((x813%x814)&x815)==x816);

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

