
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

int8_t x2 = -6;
static volatile int8_t x3 = INT8_MIN;
int8_t x6 = INT8_MAX;
uint32_t x8 = 23595652U;
static int32_t x13 = -1;
int64_t x18 = INT64_MIN;
int64_t x25 = 1LL;
int32_t x27 = INT32_MAX;
int8_t x37 = -1;
volatile int64_t x45 = INT64_MIN;
static uint16_t x51 = 469U;
volatile int32_t t13 = 1348644;
uint32_t x60 = 150U;
uint8_t x62 = 14U;
int64_t x66 = 120LL;
volatile int32_t t16 = 3606;
int16_t x70 = -1;
volatile int32_t x73 = 220750117;
int8_t x82 = -1;
volatile int32_t t21 = 387;
int64_t x91 = 12230165809444LL;
static uint64_t x93 = 59LLU;
int16_t x95 = INT16_MAX;
int32_t x96 = -1;
int32_t x104 = -1;
uint32_t x107 = 1U;
static volatile int32_t t27 = 10358;
int32_t x114 = INT32_MAX;
volatile int32_t t28 = -460145420;
static int16_t x124 = INT16_MIN;
int16_t x127 = 20;
int32_t x132 = 15242;
int32_t x136 = -1;
volatile uint64_t x138 = 391058047149736868LLU;
volatile int32_t t35 = 23143163;
int64_t x145 = INT64_MIN;
static uint16_t x146 = 49U;
int32_t x148 = -1;
uint32_t x151 = UINT32_MAX;
int32_t t37 = 305838;
volatile int8_t x153 = INT8_MIN;
volatile int64_t x154 = INT64_MIN;
uint32_t x155 = 9U;
int8_t x157 = INT8_MIN;
uint32_t x169 = UINT32_MAX;
int16_t x179 = INT16_MIN;
int16_t x183 = INT16_MIN;
uint16_t x194 = 1U;
static int8_t x199 = 1;
static volatile int16_t x200 = INT16_MIN;
volatile uint32_t x203 = 19862U;
int32_t x216 = INT32_MIN;
int32_t x217 = INT32_MIN;
volatile int32_t x235 = INT32_MAX;
static int64_t x238 = INT64_MIN;
int8_t x246 = 1;
volatile int32_t t61 = -10;
static int8_t x250 = 1;
int32_t x252 = INT32_MIN;
int8_t x253 = -1;
int32_t t65 = 14361991;
volatile int32_t t66 = 11296;
int32_t t67 = -45943804;
uint32_t x273 = 179296U;
int32_t x277 = INT32_MIN;
int32_t t70 = -9;
volatile int32_t x285 = -1;
static volatile int32_t t71 = -570103;
int16_t x292 = INT16_MIN;
int16_t x294 = INT16_MIN;
int64_t x297 = INT64_MIN;
static int32_t x300 = -1;
static uint8_t x308 = UINT8_MAX;
static int32_t x310 = INT32_MAX;
int16_t x317 = INT16_MIN;
volatile uint16_t x320 = 7698U;
int8_t x321 = INT8_MIN;
uint16_t x327 = 3U;
int32_t t82 = 902142951;
static volatile int16_t x334 = -1;
volatile int64_t t83 = 14996848LL;
static volatile int32_t t85 = 42797307;
int16_t x348 = INT16_MIN;
volatile int16_t x349 = INT16_MAX;
int8_t x350 = INT8_MIN;
int8_t x361 = 0;
static uint32_t x362 = 399863U;
int8_t x364 = INT8_MIN;
int32_t x374 = INT32_MIN;
int8_t x377 = 43;
volatile int16_t x379 = 14120;
volatile int32_t t95 = 305;
int16_t x386 = INT16_MIN;
int64_t t97 = -13343044262189LL;
int16_t x394 = INT16_MIN;
uint32_t t98 = 4U;
volatile int32_t t99 = -285;
volatile uint32_t t100 = 14925U;
static int8_t x406 = INT8_MIN;
uint16_t x413 = 13U;
static int64_t x414 = INT64_MIN;
uint64_t x415 = 7LLU;
uint32_t x418 = 3U;
int32_t t104 = -129124569;
volatile uint64_t x424 = 56LLU;
int32_t x429 = INT32_MAX;
uint8_t x434 = 28U;
static int8_t x435 = INT8_MAX;
volatile int32_t x436 = INT32_MIN;
uint64_t x438 = UINT64_MAX;
int64_t x440 = INT64_MIN;
uint16_t x446 = 2246U;
uint64_t x449 = UINT64_MAX;
volatile int32_t t113 = -1246477;
uint32_t x457 = 1804925U;
int64_t x458 = 29527525586LL;
int64_t t115 = -66131551LL;
int16_t x467 = INT16_MAX;
static int8_t x468 = -11;
volatile int64_t x472 = -1LL;
static int64_t x474 = INT64_MIN;
int8_t x476 = INT8_MIN;
int32_t t120 = -12266775;
int64_t x491 = -1LL;
uint32_t t122 = 87753166U;
int16_t x497 = INT16_MAX;
uint32_t x500 = UINT32_MAX;
int32_t t125 = -1;
volatile uint32_t x505 = UINT32_MAX;
static uint32_t x506 = UINT32_MAX;
static uint8_t x509 = 0U;
static int32_t t127 = -6465;
uint16_t x513 = 121U;
static volatile int16_t x517 = INT16_MAX;
uint8_t x521 = 18U;
uint16_t x525 = 805U;
uint32_t x527 = 12247837U;
uint16_t x534 = 1U;
int32_t t133 = 1;
int64_t x539 = INT64_MIN;
volatile int32_t t135 = -1;
int32_t x545 = 546;
volatile uint32_t t137 = 21U;
volatile int16_t x554 = -1;
int64_t x561 = -167069LL;
int32_t x568 = INT32_MAX;
int32_t t141 = -12;
int8_t x570 = INT8_MAX;
volatile int64_t x573 = INT64_MIN;
int16_t x574 = -1;
int32_t x576 = INT32_MIN;
int32_t t143 = -5432432;
int64_t x580 = -1LL;
int64_t t144 = -90LL;
int32_t x584 = INT32_MAX;
int8_t x585 = -1;
uint16_t x601 = UINT16_MAX;
volatile uint64_t x606 = UINT64_MAX;
volatile int32_t x607 = INT32_MIN;
int32_t x609 = INT32_MAX;
int64_t x610 = -11024927506LL;
int32_t x618 = 831;
uint64_t x627 = UINT64_MAX;
int32_t x629 = INT32_MIN;
volatile uint16_t x636 = 605U;
static uint64_t x640 = UINT64_MAX;
volatile uint64_t t159 = 2LLU;
int64_t x655 = INT64_MAX;
int64_t x656 = INT64_MAX;
static volatile int64_t t162 = 69284503620461LL;
int16_t x658 = INT16_MIN;
int32_t x663 = 197008;
uint16_t x664 = 2236U;
uint8_t x666 = 26U;
volatile int32_t t165 = -1456;
static uint64_t x672 = 55361LLU;
uint64_t t166 = 14771564922LLU;
volatile uint64_t x681 = UINT64_MAX;
static int32_t x682 = INT32_MIN;
int32_t t169 = 55168;
static uint64_t x693 = 1498LLU;
uint16_t x699 = 7983U;
int64_t x702 = -1LL;
int32_t t174 = 968173456;
int8_t x707 = INT8_MIN;
volatile uint32_t x710 = UINT32_MAX;
volatile int32_t t176 = 27;
static volatile uint32_t x722 = 46U;
volatile uint64_t t179 = 2436487092454858143LLU;
int16_t x731 = 1;
int8_t x732 = INT8_MIN;
volatile int32_t t181 = -87;
uint64_t x734 = 4000973577744919LLU;
int32_t x735 = 10007;
volatile int32_t t185 = 14;
int32_t x750 = INT32_MIN;
uint32_t x751 = 100U;
uint32_t x753 = 75171U;
int32_t t187 = -26580267;
uint32_t x758 = 14892U;
uint8_t x759 = 121U;
int32_t x771 = 206153;
int32_t x774 = 250;
volatile int32_t x777 = 69;
uint32_t x779 = 48668106U;
volatile uint32_t t193 = 30757U;
static uint64_t x782 = 4375779527900LLU;
uint32_t x786 = UINT32_MAX;
uint32_t x792 = UINT32_MAX;
uint32_t t196 = 211546U;
int16_t x798 = -1;
int32_t x800 = -1;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 1;

    t0 = (((x1%x2)>x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	uint32_t x7 = UINT32_MAX;
	volatile uint32_t t1 = 285U;

    t1 = (((x5%x6)>x7)&x8);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static volatile uint8_t x10 = UINT8_MAX;
	int32_t x11 = 339;
	int32_t x12 = 63770;
	int32_t t2 = 1846;

    t2 = (((x9%x10)>x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 63U;
	int8_t x15 = 0;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -152LL;

    t3 = (((x13%x14)>x15)&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 51U;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 2;

    t4 = (((x17%x18)>x19)&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	int32_t x24 = -923;
	volatile int32_t t5 = -46193;

    t5 = (((x21%x22)>x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = 11U;
	int8_t x28 = -1;
	int32_t t6 = 511324;

    t6 = (((x25%x26)>x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	static int32_t x30 = -6909;
	int8_t x31 = -1;
	static uint16_t x32 = 95U;
	int32_t t7 = 328;

    t7 = (((x29%x30)>x31)&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	int32_t x35 = INT32_MAX;
	static int8_t x36 = -30;
	volatile int32_t t8 = -2;

    t8 = (((x33%x34)>x35)&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	static uint16_t x39 = 32325U;
	static volatile uint32_t x40 = 1306U;
	static uint32_t t9 = 18385465U;

    t9 = (((x37%x38)>x39)&x40);

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	static int32_t x44 = INT32_MAX;
	int32_t t10 = -44;

    t10 = (((x41%x42)>x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = 49723367U;
	int32_t x47 = INT32_MIN;
	int32_t x48 = INT32_MAX;
	int32_t t11 = 63791103;

    t11 = (((x45%x46)>x47)&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 1688U;
	int8_t x50 = INT8_MIN;
	static int8_t x52 = 2;
	int32_t t12 = 748378;

    t12 = (((x49%x50)>x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int32_t x54 = INT32_MAX;
	static int32_t x55 = -23229;
	int16_t x56 = INT16_MIN;

    t13 = (((x53%x54)>x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	uint8_t x58 = 6U;
	int64_t x59 = -1506769967343966646LL;
	volatile uint32_t t14 = 422682241U;

    t14 = (((x57%x58)>x59)&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	uint32_t x63 = 18413125U;
	uint16_t x64 = 3U;
	volatile int32_t t15 = 248561504;

    t15 = (((x61%x62)>x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	static uint16_t x68 = 0U;

    t16 = (((x65%x66)>x67)&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 97U;
	int64_t x71 = -1LL;
	int16_t x72 = 13437;
	volatile int32_t t17 = 754147541;

    t17 = (((x69%x70)>x71)&x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x74 = INT64_MAX;
	uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 11U;
	int32_t t18 = -8347205;

    t18 = (((x73%x74)>x75)&x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	int16_t x78 = -7;
	volatile uint32_t x79 = UINT32_MAX;
	uint16_t x80 = 73U;
	volatile int32_t t19 = 0;

    t19 = (((x77%x78)>x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = -7718740;
	int16_t x83 = INT16_MAX;
	int16_t x84 = -9125;
	static int32_t t20 = 850763;

    t20 = (((x81%x82)>x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -28516;
	volatile int64_t x86 = INT64_MIN;
	static uint16_t x87 = 3415U;
	static int16_t x88 = 3249;

    t21 = (((x85%x86)>x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -246;
	static int32_t x90 = -903462433;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = 31439910;

    t22 = (((x89%x90)>x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x94 = 65554558115224079LL;
	static int32_t t23 = -264461;

    t23 = (((x93%x94)>x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	volatile uint64_t x98 = 343964LLU;
	volatile int64_t x99 = 2069811425992922LL;
	volatile uint32_t x100 = 8U;
	uint32_t t24 = 12704461U;

    t24 = (((x97%x98)>x99)&x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile int8_t x102 = -1;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 30354625;

    t25 = (((x101%x102)>x103)&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = INT64_MIN;
	static int16_t x106 = 4;
	volatile uint8_t x108 = 7U;
	int32_t t26 = 0;

    t26 = (((x105%x106)>x107)&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = 2242179341225725LLU;
	volatile uint32_t x110 = UINT32_MAX;
	static uint8_t x111 = 0U;
	int32_t x112 = 973310;

    t27 = (((x109%x110)>x111)&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 0;
	int64_t x115 = INT64_MIN;
	static volatile uint8_t x116 = 9U;

    t28 = (((x113%x114)>x115)&x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = -32;
	static int16_t x118 = INT16_MIN;
	volatile int32_t x119 = INT32_MIN;
	volatile int8_t x120 = 1;
	static volatile int32_t t29 = 0;

    t29 = (((x117%x118)>x119)&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = 205LL;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = INT16_MAX;
	static volatile int32_t t30 = 39230015;

    t30 = (((x121%x122)>x123)&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MAX;
	int16_t x126 = -1;
	int64_t x128 = 2650648991LL;
	int64_t t31 = -225255931129886LL;

    t31 = (((x125%x126)>x127)&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -3971912591125329LL;
	int8_t x130 = INT8_MAX;
	static uint8_t x131 = 4U;
	volatile int32_t t32 = 54397863;

    t32 = (((x129%x130)>x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = 456U;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	volatile int32_t t33 = 3966026;

    t33 = (((x133%x134)>x135)&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int32_t x139 = 3898;
	static int8_t x140 = INT8_MAX;
	volatile int32_t t34 = -24843;

    t34 = (((x137%x138)>x139)&x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	uint8_t x143 = 1U;
	int16_t x144 = INT16_MIN;

    t35 = (((x141%x142)>x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x147 = 990813749;
	static volatile int32_t t36 = -7;

    t36 = (((x145%x146)>x147)&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 210047140683LLU;
	int16_t x150 = -1;
	int16_t x152 = -1;

    t37 = (((x149%x150)>x151)&x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x156 = -1;
	volatile int32_t t38 = -25;

    t38 = (((x153%x154)>x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x158 = UINT64_MAX;
	int32_t x159 = 2968984;
	int64_t x160 = INT64_MIN;
	static int64_t t39 = 32054031638886707LL;

    t39 = (((x157%x158)>x159)&x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	int64_t x162 = -104LL;
	uint64_t x163 = 21016420270419655LLU;
	int32_t x164 = -1;
	int32_t t40 = -3853;

    t40 = (((x161%x162)>x163)&x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -1;
	static int32_t x166 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -215;

    t41 = (((x165%x166)>x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x170 = INT32_MAX;
	static int32_t x171 = INT32_MAX;
	int8_t x172 = 1;
	volatile int32_t t42 = -1;

    t42 = (((x169%x170)>x171)&x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	static int32_t x174 = 88608;
	int16_t x175 = INT16_MIN;
	static uint64_t x176 = 92411780716799451LLU;
	volatile uint64_t t43 = 1770651383018422024LLU;

    t43 = (((x173%x174)>x175)&x176);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MIN;
	uint8_t x180 = 0U;
	volatile int32_t t44 = -2327;

    t44 = (((x177%x178)>x179)&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = -94314;
	volatile uint32_t x182 = 30U;
	uint8_t x184 = UINT8_MAX;
	int32_t t45 = 406716943;

    t45 = (((x181%x182)>x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	volatile int8_t x186 = -1;
	uint32_t x187 = 422U;
	static int16_t x188 = -1;
	int32_t t46 = -2069003;

    t46 = (((x185%x186)>x187)&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = 14LL;
	static uint32_t x190 = UINT32_MAX;
	int8_t x191 = INT8_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 94U;

    t47 = (((x189%x190)>x191)&x192);

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -1;
	int8_t x195 = INT8_MIN;
	uint64_t x196 = 9899953131LLU;
	uint64_t t48 = 5084997027LLU;

    t48 = (((x193%x194)>x195)&x196);

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x197 = -1LL;
	static uint16_t x198 = 18U;
	int32_t t49 = 3756;

    t49 = (((x197%x198)>x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x201 = 3545U;
	int32_t x202 = -5;
	volatile uint16_t x204 = UINT16_MAX;
	static int32_t t50 = 898237931;

    t50 = (((x201%x202)>x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 14U;
	static int8_t x206 = INT8_MIN;
	static volatile uint8_t x207 = 0U;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = 0;

    t51 = (((x205%x206)>x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = 26;
	volatile uint16_t x211 = 2099U;
	static volatile uint64_t x212 = 1LLU;
	uint64_t t52 = 388516182506LLU;

    t52 = (((x209%x210)>x211)&x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x213 = 1802362873520LL;
	int64_t x214 = -1LL;
	int64_t x215 = -1LL;
	int32_t t53 = 2;

    t53 = (((x213%x214)>x215)&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = INT32_MIN;
	int16_t x219 = -1;
	volatile uint16_t x220 = 84U;
	static int32_t t54 = -17079095;

    t54 = (((x217%x218)>x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 9787685U;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = -299;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = 22LLU;

    t55 = (((x221%x222)>x223)&x224);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = -1;
	int64_t x226 = -1LL;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 2U;
	volatile int32_t t56 = -52743;

    t56 = (((x225%x226)>x227)&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	uint32_t x230 = 31U;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -7788590;

    t57 = (((x229%x230)>x231)&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	volatile int64_t x234 = 8170726640353LL;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -27688461;

    t58 = (((x233%x234)>x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MAX;
	static uint64_t x239 = UINT64_MAX;
	int8_t x240 = -28;
	int32_t t59 = -15;

    t59 = (((x237%x238)>x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	static int16_t x243 = -1;
	volatile uint64_t x244 = 63322562582184LLU;
	uint64_t t60 = 994948983LLU;

    t60 = (((x241%x242)>x243)&x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 681U;
	int8_t x247 = -2;
	static int32_t x248 = INT32_MIN;

    t61 = (((x245%x246)>x247)&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	static uint32_t x251 = 37458013U;
	int32_t t62 = -7810717;

    t62 = (((x249%x250)>x251)&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = INT16_MIN;
	int32_t x255 = 0;
	int32_t x256 = 29;
	static volatile int32_t t63 = 291;

    t63 = (((x253%x254)>x255)&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x257 = 119U;
	int64_t x258 = -1920927493019524LL;
	int64_t x259 = INT64_MIN;
	int16_t x260 = -24;
	volatile int32_t t64 = 127798622;

    t64 = (((x257%x258)>x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = -816230;
	int16_t x262 = 68;
	volatile uint8_t x263 = 0U;
	int8_t x264 = -1;

    t65 = (((x261%x262)>x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 30025U;
	static int64_t x266 = INT64_MAX;
	int64_t x267 = 2243LL;
	int16_t x268 = -1;

    t66 = (((x265%x266)>x267)&x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	volatile uint32_t x270 = 16U;
	int64_t x271 = -1LL;
	volatile int16_t x272 = INT16_MIN;

    t67 = (((x269%x270)>x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = -1;
	int16_t x275 = INT16_MAX;
	volatile int64_t x276 = -1LL;
	int64_t t68 = 316489679634490022LL;

    t68 = (((x273%x274)>x275)&x276);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = -428;
	volatile int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 2;

    t69 = (((x277%x278)>x279)&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	uint64_t x282 = 16387LLU;
	volatile int32_t x283 = 0;
	uint8_t x284 = UINT8_MAX;

    t70 = (((x281%x282)>x283)&x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MIN;
	static volatile int16_t x288 = -422;

    t71 = (((x285%x286)>x287)&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = 32641380;
	uint16_t x290 = 943U;
	static int8_t x291 = INT8_MAX;
	static volatile int32_t t72 = 1;

    t72 = (((x289%x290)>x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	int32_t x295 = 1489;
	volatile uint16_t x296 = 490U;
	volatile int32_t t73 = -512749517;

    t73 = (((x293%x294)>x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x298 = INT64_MIN;
	int64_t x299 = -6427338806295672LL;
	int32_t t74 = -82708;

    t74 = (((x297%x298)>x299)&x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x301 = 930U;
	volatile uint32_t x302 = UINT32_MAX;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = 3U;
	volatile int32_t t75 = -13;

    t75 = (((x301%x302)>x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	uint64_t x306 = UINT64_MAX;
	uint8_t x307 = 4U;
	int32_t t76 = 14463;

    t76 = (((x305%x306)>x307)&x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = -1LL;
	int64_t t77 = -5583LL;

    t77 = (((x309%x310)>x311)&x312);

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x313 = INT32_MIN;
	volatile int32_t x314 = -8141;
	int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -356;

    t78 = (((x313%x314)>x315)&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x318 = INT16_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	int32_t t79 = -87;

    t79 = (((x317%x318)>x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x322 = 21;
	uint16_t x323 = 1U;
	volatile uint64_t x324 = 620852928591LLU;
	uint64_t t80 = 6LLU;

    t80 = (((x321%x322)>x323)&x324);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MIN;
	static int8_t x328 = -1;
	static int32_t t81 = -354826;

    t81 = (((x325%x326)>x327)&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -10;
	volatile uint64_t x330 = 86528194104LLU;
	uint64_t x331 = 68608104530578LLU;
	int16_t x332 = 41;

    t82 = (((x329%x330)>x331)&x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	volatile uint64_t x335 = 13693LLU;
	int64_t x336 = -12790527130721916LL;

    t83 = (((x333%x334)>x335)&x336);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = INT16_MIN;
	volatile uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t84 = 2164978706497077LLU;

    t84 = (((x337%x338)>x339)&x340);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile uint32_t x341 = 3U;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = -12;
	int16_t x344 = -11;

    t85 = (((x341%x342)>x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -13677LL;
	volatile int64_t x346 = INT64_MIN;
	int64_t x347 = 2LL;
	volatile int32_t t86 = -16853136;

    t86 = (((x345%x346)>x347)&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x351 = -1;
	uint16_t x352 = 3U;
	volatile int32_t t87 = -804743;

    t87 = (((x349%x350)>x351)&x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = INT64_MIN;
	int64_t x354 = -1LL;
	volatile int8_t x355 = INT8_MAX;
	uint64_t x356 = 2179032920915235LLU;
	uint64_t t88 = 5486221175367LLU;

    t88 = (((x353%x354)>x355)&x356);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = 7;
	uint8_t x359 = 46U;
	uint64_t x360 = UINT64_MAX;
	static volatile uint64_t t89 = 1372753473298389LLU;

    t89 = (((x357%x358)>x359)&x360);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x363 = 0;
	volatile int32_t t90 = 1865;

    t90 = (((x361%x362)>x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	volatile int16_t x366 = INT16_MIN;
	int16_t x367 = -1;
	int8_t x368 = -3;
	static int32_t t91 = -207642664;

    t91 = (((x365%x366)>x367)&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -39991761295LL;
	int16_t x370 = 2901;
	int8_t x371 = INT8_MAX;
	static volatile int8_t x372 = INT8_MAX;
	int32_t t92 = 453;

    t92 = (((x369%x370)>x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	int16_t x375 = INT16_MIN;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t93 = 0;

    t93 = (((x373%x374)>x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 28U;
	int64_t x380 = -1LL;
	volatile int64_t t94 = -31978240LL;

    t94 = (((x377%x378)>x379)&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = 5;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;

    t95 = (((x381%x382)>x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MIN;
	int32_t x387 = -1;
	int16_t x388 = 2;
	volatile int32_t t96 = 202046;

    t96 = (((x385%x386)>x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 367LL;
	volatile int64_t x390 = -1962471203817460LL;
	static volatile int16_t x391 = INT16_MAX;
	int64_t x392 = INT64_MAX;

    t97 = (((x389%x390)>x391)&x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	volatile int8_t x395 = -10;
	volatile uint32_t x396 = 1281596427U;

    t98 = (((x393%x394)>x395)&x396);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = 0;

    t99 = (((x397%x398)>x399)&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MIN;
	static int32_t x402 = -1;
	int16_t x403 = 187;
	volatile uint32_t x404 = 64143U;

    t100 = (((x401%x402)>x403)&x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint16_t x407 = 80U;
	uint64_t x408 = 29177062079LLU;
	volatile uint64_t t101 = 290LLU;

    t101 = (((x405%x406)>x407)&x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = 103282LL;
	int32_t x411 = -1;
	int64_t x412 = INT64_MAX;
	static int64_t t102 = 28931604035387283LL;

    t102 = (((x409%x410)>x411)&x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x416 = 233LLU;
	volatile uint64_t t103 = 92LLU;

    t103 = (((x413%x414)>x415)&x416);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = INT8_MIN;
	int16_t x419 = -1;
	int16_t x420 = -1;

    t104 = (((x417%x418)>x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -11942854258521717LL;
	int16_t x422 = 5;
	int16_t x423 = -7;
	static uint64_t t105 = 207306090LLU;

    t105 = (((x421%x422)>x423)&x424);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	uint64_t x426 = UINT64_MAX;
	int8_t x427 = -1;
	int16_t x428 = 1;
	int32_t t106 = 21773472;

    t106 = (((x425%x426)>x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = -1;
	volatile uint16_t x431 = 230U;
	int64_t x432 = INT64_MIN;
	int64_t t107 = 1033011764LL;

    t107 = (((x429%x430)>x431)&x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 747050U;
	int32_t t108 = 0;

    t108 = (((x433%x434)>x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = 282178905;
	int32_t x439 = INT32_MIN;
	int64_t t109 = -3500336809828478LL;

    t109 = (((x437%x438)>x439)&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -207961900371319LL;
	volatile int8_t x442 = INT8_MAX;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t110 = -22220;

    t110 = (((x441%x442)>x443)&x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = 748316720;
	uint16_t x447 = 9U;
	static uint8_t x448 = 0U;
	int32_t t111 = 10147;

    t111 = (((x445%x446)>x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x450 = INT16_MAX;
	static int16_t x451 = INT16_MAX;
	int32_t x452 = -395607140;
	volatile int32_t t112 = -4;

    t112 = (((x449%x450)>x451)&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x453 = 8389408411354LLU;
	volatile uint32_t x454 = 24U;
	int16_t x455 = INT16_MAX;
	int16_t x456 = INT16_MIN;

    t113 = (((x453%x454)>x455)&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x459 = INT32_MAX;
	static int64_t x460 = INT64_MAX;
	volatile int64_t t114 = 6351977111LL;

    t114 = (((x457%x458)>x459)&x460);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x462 = -7;
	int8_t x463 = INT8_MIN;
	int64_t x464 = -56096LL;

    t115 = (((x461%x462)>x463)&x464);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x466 = 21743;
	static volatile int32_t t116 = -25108;

    t116 = (((x465%x466)>x467)&x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = -809;
	volatile int64_t x470 = INT64_MAX;
	uint8_t x471 = 0U;
	int64_t t117 = -2434108944510395206LL;

    t117 = (((x469%x470)>x471)&x472);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	volatile int32_t t118 = -118034048;

    t118 = (((x473%x474)>x475)&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	static int16_t x478 = -1;
	int32_t x479 = INT32_MIN;
	static int16_t x480 = INT16_MAX;
	static volatile int32_t t119 = -4831329;

    t119 = (((x477%x478)>x479)&x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	uint16_t x482 = 2499U;
	int8_t x483 = INT8_MIN;
	int32_t x484 = -1;

    t120 = (((x481%x482)>x483)&x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x485 = INT32_MIN;
	static int64_t x486 = INT64_MAX;
	volatile int8_t x487 = -1;
	static int16_t x488 = -1;
	int32_t t121 = 60;

    t121 = (((x485%x486)>x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	static int32_t x490 = 60753794;
	uint32_t x492 = UINT32_MAX;

    t122 = (((x489%x490)>x491)&x492);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 12396;
	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MAX;
	volatile int32_t x496 = -2214572;
	volatile int32_t t123 = 1592704;

    t123 = (((x493%x494)>x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = INT16_MIN;
	static int32_t x499 = INT32_MAX;
	static volatile uint32_t t124 = 11044U;

    t124 = (((x497%x498)>x499)&x500);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	uint16_t x502 = 62U;
	static int64_t x503 = -1361979672812LL;
	uint8_t x504 = 31U;

    t125 = (((x501%x502)>x503)&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x507 = 16LLU;
	volatile int8_t x508 = INT8_MAX;
	int32_t t126 = -444018;

    t126 = (((x505%x506)>x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MAX;
	volatile uint8_t x511 = 11U;
	int16_t x512 = INT16_MAX;

    t127 = (((x509%x510)>x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = INT16_MAX;
	int8_t x515 = INT8_MIN;
	int8_t x516 = INT8_MIN;
	static int32_t t128 = 0;

    t128 = (((x513%x514)>x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x518 = -1;
	volatile int64_t x519 = INT64_MIN;
	volatile int8_t x520 = INT8_MAX;
	int32_t t129 = -43631;

    t129 = (((x517%x518)>x519)&x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	int32_t x523 = INT32_MIN;
	int64_t x524 = 4174LL;
	static volatile int64_t t130 = 16210691986574LL;

    t130 = (((x521%x522)>x523)&x524);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x526 = -1LL;
	static int8_t x528 = INT8_MIN;
	int32_t t131 = -76546;

    t131 = (((x525%x526)>x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = -1;
	static int16_t x531 = -10725;
	volatile int64_t x532 = -1LL;
	volatile int64_t t132 = 80933990910739130LL;

    t132 = (((x529%x530)>x531)&x532);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = -1027264171;
	static uint16_t x535 = UINT16_MAX;
	int32_t x536 = -1;

    t133 = (((x533%x534)>x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -121682546;
	int32_t x538 = 1;
	int16_t x540 = 2259;
	int32_t t134 = 1569664;

    t134 = (((x537%x538)>x539)&x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 354500301122159LLU;
	int32_t x542 = -24;
	int16_t x543 = INT16_MAX;
	uint8_t x544 = 1U;

    t135 = (((x541%x542)>x543)&x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x546 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	uint64_t x548 = UINT64_MAX;
	static uint64_t t136 = 10225066LLU;

    t136 = (((x545%x546)>x547)&x548);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	volatile uint8_t x550 = 2U;
	uint8_t x551 = 53U;
	uint32_t x552 = UINT32_MAX;

    t137 = (((x549%x550)>x551)&x552);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = -2;
	int16_t x555 = -1;
	uint64_t x556 = 4809300656046295058LLU;
	volatile uint64_t t138 = 5638626LLU;

    t138 = (((x553%x554)>x555)&x556);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -64;
	uint8_t x558 = 26U;
	static uint64_t x559 = UINT64_MAX;
	int16_t x560 = -1;
	int32_t t139 = -54231782;

    t139 = (((x557%x558)>x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x562 = UINT16_MAX;
	uint8_t x563 = 117U;
	int64_t x564 = -2186663LL;
	volatile int64_t t140 = -421180409426LL;

    t140 = (((x561%x562)>x563)&x564);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	volatile int8_t x566 = 1;
	static int8_t x567 = INT8_MIN;

    t141 = (((x565%x566)>x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -1;
	volatile int64_t x571 = INT64_MIN;
	int8_t x572 = -1;
	static int32_t t142 = -31;

    t142 = (((x569%x570)>x571)&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x575 = 5324U;

    t143 = (((x573%x574)>x575)&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	volatile int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MIN;

    t144 = (((x577%x578)>x579)&x580);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -7;
	uint16_t x582 = 26U;
	int32_t x583 = -1;
	static int32_t t145 = -54;

    t145 = (((x581%x582)>x583)&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = 297;
	int8_t x587 = INT8_MAX;
	uint64_t x588 = 125LLU;
	uint64_t t146 = 554679466LLU;

    t146 = (((x585%x586)>x587)&x588);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 0;
	static volatile int8_t x590 = INT8_MAX;
	int32_t x591 = INT32_MAX;
	int64_t x592 = INT64_MIN;
	volatile int64_t t147 = 39351864999LL;

    t147 = (((x589%x590)>x591)&x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MIN;
	uint64_t x594 = 93LLU;
	static int64_t x595 = INT64_MAX;
	int8_t x596 = -1;
	int32_t t148 = -468;

    t148 = (((x593%x594)>x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	volatile int32_t x598 = INT32_MAX;
	volatile uint64_t x599 = UINT64_MAX;
	volatile int64_t x600 = -1LL;
	volatile int64_t t149 = 136409317LL;

    t149 = (((x597%x598)>x599)&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x602 = INT8_MIN;
	int64_t x603 = -16196922579555LL;
	int64_t x604 = INT64_MIN;
	volatile int64_t t150 = -1660736017456LL;

    t150 = (((x601%x602)>x603)&x604);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	uint64_t x608 = 3LLU;
	static uint64_t t151 = 10695LLU;

    t151 = (((x605%x606)>x607)&x608);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x611 = 3530982349762LLU;
	int8_t x612 = INT8_MIN;
	int32_t t152 = -2461;

    t152 = (((x609%x610)>x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	int64_t x614 = INT64_MIN;
	uint16_t x615 = 2629U;
	int16_t x616 = INT16_MIN;
	int32_t t153 = 110276883;

    t153 = (((x613%x614)>x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MAX;
	volatile int32_t x619 = INT32_MIN;
	int64_t x620 = INT64_MIN;
	volatile int64_t t154 = -9746769LL;

    t154 = (((x617%x618)>x619)&x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 6023U;
	volatile int64_t x622 = 3158452LL;
	int32_t x623 = 205;
	int8_t x624 = INT8_MIN;
	static volatile int32_t t155 = -1807040;

    t155 = (((x621%x622)>x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = 3195335;
	uint64_t x628 = 77612750293LLU;
	volatile uint64_t t156 = 11424679337LLU;

    t156 = (((x625%x626)>x627)&x628);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x630 = 232U;
	uint16_t x631 = UINT16_MAX;
	int16_t x632 = 3;
	int32_t t157 = 1072636157;

    t157 = (((x629%x630)>x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 25089U;
	volatile int32_t x634 = INT32_MIN;
	uint64_t x635 = UINT64_MAX;
	static int32_t t158 = 127;

    t158 = (((x633%x634)>x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	int64_t x638 = INT64_MIN;
	uint32_t x639 = UINT32_MAX;

    t159 = (((x637%x638)>x639)&x640);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x641 = INT8_MAX;
	uint32_t x642 = 7U;
	static int64_t x643 = 842184423150LL;
	uint8_t x644 = 15U;
	int32_t t160 = 3854;

    t160 = (((x641%x642)>x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	int16_t x646 = -1;
	uint32_t x647 = 201289U;
	static int64_t x648 = -1LL;
	int64_t t161 = -602707638LL;

    t161 = (((x645%x646)>x647)&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x653 = 697690481LLU;
	uint16_t x654 = 6U;

    t162 = (((x653%x654)>x655)&x656);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x657 = 6883309367700368871LLU;
	uint8_t x659 = 2U;
	volatile int64_t x660 = -289554688168859LL;
	static volatile int64_t t163 = 1911LL;

    t163 = (((x657%x658)>x659)&x660);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x661 = 6U;
	int8_t x662 = -1;
	int32_t t164 = 18;

    t164 = (((x661%x662)>x663)&x664);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x665 = INT32_MAX;
	int32_t x667 = INT32_MIN;
	int16_t x668 = INT16_MIN;

    t165 = (((x665%x666)>x667)&x668);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x669 = -1;
	volatile int8_t x670 = 36;
	volatile int64_t x671 = -2427550432735615823LL;

    t166 = (((x669%x670)>x671)&x672);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = 6;
	static int16_t x675 = -1;
	int8_t x676 = 0;
	int32_t t167 = -938;

    t167 = (((x673%x674)>x675)&x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x677 = INT64_MAX;
	int16_t x678 = -1;
	static int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MAX;
	volatile int32_t t168 = -305021264;

    t168 = (((x677%x678)>x679)&x680);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x683 = 21U;
	int8_t x684 = INT8_MIN;

    t169 = (((x681%x682)>x683)&x684);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = 16193LL;
	int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MIN;
	static volatile int32_t t170 = 2449;

    t170 = (((x685%x686)>x687)&x688);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x689 = -1;
	static uint8_t x690 = UINT8_MAX;
	int8_t x691 = 0;
	uint16_t x692 = 3323U;
	static volatile int32_t t171 = 30161;

    t171 = (((x689%x690)>x691)&x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x694 = UINT8_MAX;
	int16_t x695 = 1600;
	int16_t x696 = INT16_MIN;
	volatile int32_t t172 = -205;

    t172 = (((x693%x694)>x695)&x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	int32_t x698 = INT32_MAX;
	uint64_t x700 = 79LLU;
	static volatile uint64_t t173 = 2859346480LLU;

    t173 = (((x697%x698)>x699)&x700);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x701 = INT64_MIN;
	int64_t x703 = -505LL;
	int16_t x704 = INT16_MIN;

    t174 = (((x701%x702)>x703)&x704);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x705 = INT16_MAX;
	volatile int16_t x706 = -1;
	int32_t x708 = -1;
	volatile int32_t t175 = -3266;

    t175 = (((x705%x706)>x707)&x708);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x709 = INT64_MAX;
	static int64_t x711 = 493946911LL;
	int32_t x712 = INT32_MIN;

    t176 = (((x709%x710)>x711)&x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x713 = UINT8_MAX;
	static uint32_t x714 = 57597U;
	int8_t x715 = INT8_MIN;
	int16_t x716 = -1;
	volatile int32_t t177 = -24947;

    t177 = (((x713%x714)>x715)&x716);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x717 = INT64_MIN;
	static volatile uint64_t x718 = 254664051330039LLU;
	uint64_t x719 = UINT64_MAX;
	uint32_t x720 = 103U;
	volatile uint32_t t178 = 52731U;

    t178 = (((x717%x718)>x719)&x720);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x721 = 2627U;
	volatile int64_t x723 = INT64_MIN;
	volatile uint64_t x724 = UINT64_MAX;

    t179 = (((x721%x722)>x723)&x724);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x725 = -1;
	uint64_t x726 = 188761325127LLU;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = INT64_MAX;
	int64_t t180 = 47753015426126LL;

    t180 = (((x725%x726)>x727)&x728);

    if (t180 != 1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x729 = INT8_MIN;
	uint32_t x730 = UINT32_MAX;

    t181 = (((x729%x730)>x731)&x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x733 = INT16_MIN;
	int32_t x736 = -14;
	int32_t t182 = 95;

    t182 = (((x733%x734)>x735)&x736);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x737 = -1;
	int64_t x738 = INT64_MIN;
	int32_t x739 = INT32_MIN;
	volatile int32_t x740 = -1;
	volatile int32_t t183 = 195;

    t183 = (((x737%x738)>x739)&x740);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x741 = INT32_MIN;
	static volatile uint8_t x742 = 103U;
	static int16_t x743 = INT16_MIN;
	uint32_t x744 = UINT32_MAX;
	uint32_t t184 = 12U;

    t184 = (((x741%x742)>x743)&x744);

    if (t184 != 1U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x745 = INT8_MIN;
	volatile int32_t x746 = 148;
	static uint8_t x747 = 120U;
	static volatile int32_t x748 = 10542817;

    t185 = (((x745%x746)>x747)&x748);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x749 = 32867178389LLU;
	int32_t x752 = 164405197;
	static int32_t t186 = 19439834;

    t186 = (((x749%x750)>x751)&x752);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x754 = 1218305221292927LLU;
	volatile int16_t x755 = -1;
	uint8_t x756 = 1U;

    t187 = (((x753%x754)>x755)&x756);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x757 = 143801681331702LLU;
	volatile int8_t x760 = -1;
	volatile int32_t t188 = 0;

    t188 = (((x757%x758)>x759)&x760);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x761 = 31659785U;
	int8_t x762 = INT8_MAX;
	volatile int32_t x763 = 14461;
	volatile int8_t x764 = INT8_MAX;
	volatile int32_t t189 = 1;

    t189 = (((x761%x762)>x763)&x764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x765 = 65LLU;
	int32_t x766 = INT32_MIN;
	int32_t x767 = INT32_MIN;
	int32_t x768 = INT32_MIN;
	volatile int32_t t190 = -109;

    t190 = (((x765%x766)>x767)&x768);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x769 = -1;
	static volatile uint8_t x770 = 4U;
	int8_t x772 = -1;
	static volatile int32_t t191 = -3;

    t191 = (((x769%x770)>x771)&x772);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x773 = 8;
	volatile uint8_t x775 = UINT8_MAX;
	int32_t x776 = -1;
	volatile int32_t t192 = -10;

    t192 = (((x773%x774)>x775)&x776);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x778 = 3767633738829LL;
	static volatile uint32_t x780 = 2275U;

    t193 = (((x777%x778)>x779)&x780);

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x781 = 8U;
	int8_t x783 = -1;
	int32_t x784 = -1;
	volatile int32_t t194 = -562084;

    t194 = (((x781%x782)>x783)&x784);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x785 = 94U;
	uint16_t x787 = UINT16_MAX;
	int8_t x788 = -2;
	volatile int32_t t195 = -1;

    t195 = (((x785%x786)>x787)&x788);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x789 = -31529284981794412LL;
	int32_t x790 = -223;
	volatile int8_t x791 = 1;

    t196 = (((x789%x790)>x791)&x792);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x793 = -21;
	int32_t x794 = 6138;
	static int64_t x795 = INT64_MIN;
	int16_t x796 = INT16_MIN;
	volatile int32_t t197 = 171;

    t197 = (((x793%x794)>x795)&x796);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x797 = 50957329361003960LL;
	uint8_t x799 = 3U;
	int32_t t198 = 0;

    t198 = (((x797%x798)>x799)&x800);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x801 = INT32_MIN;
	uint8_t x802 = 2U;
	int8_t x803 = INT8_MAX;
	static int64_t x804 = INT64_MAX;
	volatile int64_t t199 = 94174018853483875LL;

    t199 = (((x801%x802)>x803)&x804);

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

