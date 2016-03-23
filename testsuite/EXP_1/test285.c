
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

int8_t x1 = INT8_MIN;
int16_t x18 = -2927;
uint64_t x22 = UINT64_MAX;
int32_t t6 = -412;
int32_t x38 = INT32_MAX;
volatile int8_t x39 = INT8_MAX;
uint16_t x40 = UINT16_MAX;
volatile int32_t t8 = -753038618;
int64_t x47 = INT64_MAX;
int8_t x59 = -1;
int8_t x68 = -12;
int16_t x71 = -1;
static int16_t x88 = INT16_MIN;
static int16_t x93 = INT16_MAX;
volatile uint8_t x94 = 0U;
uint32_t x96 = UINT32_MAX;
uint16_t x97 = 89U;
int32_t t25 = -8;
int16_t x118 = 77;
static volatile int64_t x119 = 84828934LL;
uint64_t x120 = UINT64_MAX;
int64_t x128 = INT64_MIN;
volatile uint64_t t31 = 1432064LLU;
static uint8_t x145 = UINT8_MAX;
volatile int32_t t32 = -852;
int64_t x151 = INT64_MIN;
int8_t x175 = INT8_MAX;
int32_t x176 = 4621589;
volatile int32_t t37 = 103;
uint16_t x180 = UINT16_MAX;
uint64_t x186 = UINT64_MAX;
uint16_t x191 = 479U;
int64_t t41 = 810LL;
int16_t x195 = -1;
static int8_t x202 = INT8_MIN;
volatile int64_t x203 = INT64_MIN;
volatile int32_t t44 = -7;
volatile int8_t x219 = -1;
int32_t t49 = -249799606;
uint8_t x242 = 21U;
static int32_t t55 = -804;
int16_t x258 = -1;
int64_t x266 = 877LL;
static uint8_t x271 = UINT8_MAX;
int16_t x275 = INT16_MAX;
int8_t x290 = INT8_MIN;
static int8_t x293 = 0;
volatile int16_t x296 = INT16_MIN;
static int32_t t63 = 1;
uint64_t x297 = UINT64_MAX;
static int8_t x300 = -1;
int32_t t65 = 425475324;
static volatile int64_t x315 = INT64_MIN;
static uint16_t x316 = UINT16_MAX;
int16_t x318 = INT16_MIN;
int8_t x330 = INT8_MIN;
uint64_t x332 = 30449LLU;
uint64_t t71 = 12567509813LLU;
int16_t x338 = 1153;
int16_t x341 = 8;
int16_t x348 = INT16_MIN;
static uint64_t t75 = 314749386521LLU;
int64_t x361 = INT64_MIN;
uint32_t x386 = 846627517U;
volatile uint32_t x389 = UINT32_MAX;
int64_t x392 = INT64_MIN;
uint64_t x394 = UINT64_MAX;
volatile int16_t x396 = INT16_MIN;
volatile int32_t t83 = -7379890;
int16_t x397 = 1395;
uint64_t x400 = 5LLU;
int64_t x402 = 136LL;
int64_t x404 = -1LL;
volatile int64_t t85 = -3243997331703614LL;
uint64_t x408 = 137LLU;
uint8_t x413 = UINT8_MAX;
int8_t x414 = 9;
uint8_t x416 = 9U;
uint32_t x417 = UINT32_MAX;
int32_t t89 = -40686;
int16_t x426 = -46;
uint64_t x432 = 43535552609621984LLU;
int64_t x433 = -1LL;
volatile int64_t t93 = -7LL;
int64_t x447 = INT64_MIN;
int64_t x451 = -1LL;
volatile int64_t t98 = 8452LL;
int32_t x465 = INT32_MIN;
volatile uint64_t t99 = 17017099513887LLU;
uint8_t x469 = 1U;
uint32_t x472 = 1415U;
static uint32_t x476 = 151138670U;
int16_t x481 = INT16_MIN;
static uint32_t t104 = 26109846U;
int16_t x490 = INT16_MIN;
int64_t x492 = -268712525388608LL;
int64_t t106 = 6264030247LL;
int8_t x521 = 4;
volatile uint64_t x526 = UINT64_MAX;
int32_t t113 = -40890654;
int16_t x536 = -4;
int16_t x537 = -1;
int32_t x542 = INT32_MIN;
int8_t x543 = 47;
uint32_t x547 = 49474U;
int64_t x557 = -1LL;
static uint32_t x560 = 75263U;
int8_t x562 = -1;
int64_t x564 = 40379350LL;
int64_t t120 = -325286086102834420LL;
static int32_t x566 = -1;
int32_t t121 = 16796406;
int32_t x580 = INT32_MAX;
static int8_t x589 = -1;
int32_t x601 = -1;
static int32_t x605 = -25524;
volatile int32_t t130 = 0;
uint8_t x609 = 1U;
int64_t x627 = INT64_MIN;
int32_t x635 = -1;
volatile int32_t t136 = 20;
uint32_t x641 = 615559805U;
volatile int64_t t137 = 19LL;
int64_t x645 = 134534745870735440LL;
static uint32_t x647 = 443902831U;
uint64_t x651 = 21760516658760057LLU;
int32_t x655 = -1;
volatile uint64_t x658 = 2318369038980LLU;
static int8_t x660 = INT8_MAX;
int8_t x662 = INT8_MIN;
static volatile int16_t x672 = 124;
int32_t x673 = 210829021;
int16_t x675 = -215;
int8_t x684 = INT8_MIN;
int8_t x685 = INT8_MAX;
static volatile int64_t x700 = INT64_MIN;
int64_t t150 = 112040161503479168LL;
uint64_t x701 = 63537212LLU;
int16_t x703 = INT16_MIN;
static int32_t t152 = -201088;
volatile int64_t x709 = -1LL;
int16_t x711 = INT16_MIN;
uint16_t x723 = 3941U;
volatile uint64_t x732 = UINT64_MAX;
int32_t t159 = -3385;
volatile uint32_t x740 = 11U;
volatile uint32_t t160 = 620746304U;
static uint8_t x743 = 7U;
int8_t x747 = INT8_MAX;
volatile int8_t x748 = -1;
int64_t x750 = -1LL;
int32_t x751 = INT32_MAX;
volatile int32_t x760 = INT32_MIN;
uint64_t x770 = UINT64_MAX;
int64_t x775 = -274613773538355124LL;
int8_t x787 = -1;
int8_t x789 = INT8_MIN;
volatile int8_t x794 = 3;
static int16_t x804 = INT16_MAX;
int64_t x809 = -1LL;
int32_t x810 = 11807;
static volatile int16_t x812 = INT16_MIN;
uint32_t x813 = UINT32_MAX;
int64_t x818 = INT64_MAX;
int8_t x824 = INT8_MIN;
int8_t x828 = -26;
volatile int32_t t182 = -1051;
static uint64_t x830 = UINT64_MAX;
int32_t x831 = 5112473;
static volatile int32_t x845 = -1;
static uint32_t x850 = 14771U;
volatile int32_t t188 = -24169;
int64_t x854 = -1LL;
volatile int32_t t189 = 11987032;
int16_t x862 = INT16_MIN;
int8_t x873 = 13;
static int64_t x876 = -1LL;
int32_t x884 = INT32_MIN;
int16_t x886 = INT16_MIN;
static int8_t x888 = INT8_MAX;
int16_t x899 = -1;


void f0(void) {
    	static int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	int16_t x4 = 803;
	int32_t t0 = -871368;

    t0 = (((x1-x2)!=x3)%x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 119U;
	uint16_t x6 = 8U;
	static int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 992LL;

    t1 = (((x5-x6)!=x7)%x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = 15091;
	int8_t x10 = 31;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = -1;
	static volatile int32_t t2 = 30261;

    t2 = (((x9-x10)!=x11)%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = -18;
	int64_t x15 = INT64_MAX;
	uint64_t x16 = 762LLU;
	uint64_t t3 = 14628204LLU;

    t3 = (((x13-x14)!=x15)%x16);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 95U;
	volatile uint32_t x19 = 100U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 655672;

    t4 = (((x17-x18)!=x19)%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint32_t x23 = 16654U;
	int64_t x24 = 1LL;
	static int64_t t5 = 6472LL;

    t5 = (((x21-x22)!=x23)%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	int32_t x26 = -206;
	static int16_t x27 = -1997;
	volatile int32_t x28 = -1;

    t6 = (((x25-x26)!=x27)%x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static int32_t x30 = -1;
	int8_t x31 = -1;
	static int64_t x32 = 15870769783904LL;
	volatile int64_t t7 = 2859068LL;

    t7 = (((x29-x30)!=x31)%x32);

    if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x37 = 61U;

    t8 = (((x37-x38)!=x39)%x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 1;
	volatile uint64_t x42 = 0LLU;
	static volatile int32_t x43 = 5425097;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = -75;

    t9 = (((x41-x42)!=x43)%x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x45 = UINT32_MAX;
	volatile int8_t x46 = -1;
	int32_t x48 = -1;
	int32_t t10 = 379570;

    t10 = (((x45-x46)!=x47)%x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1;
	uint64_t x50 = 2352LLU;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = INT32_MAX;
	int32_t t11 = 22;

    t11 = (((x49-x50)!=x51)%x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	int64_t x58 = 113LL;
	int64_t x60 = -1LL;
	volatile int64_t t12 = 57453074890301LL;

    t12 = (((x57-x58)!=x59)%x60);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	volatile int32_t t13 = -118007081;

    t13 = (((x61-x62)!=x63)%x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = 12U;
	uint8_t x66 = 1U;
	int64_t x67 = INT64_MAX;
	volatile int32_t t14 = 86202;

    t14 = (((x65-x66)!=x67)%x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = 2;
	volatile int16_t x72 = -1990;
	volatile int32_t t15 = -848181;

    t15 = (((x69-x70)!=x71)%x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = 26511U;
	uint32_t t16 = 56187936U;

    t16 = (((x73-x74)!=x75)%x76);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x77 = -418;
	int32_t x78 = -16317;
	int32_t x79 = INT32_MAX;
	int8_t x80 = INT8_MIN;
	volatile int32_t t17 = 12550316;

    t17 = (((x77-x78)!=x79)%x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -1690269;
	int16_t x82 = -1;
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	int64_t t18 = -31486270LL;

    t18 = (((x81-x82)!=x83)%x84);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x85 = 513;
	int64_t x86 = INT64_MAX;
	uint16_t x87 = 165U;
	int32_t t19 = -555354045;

    t19 = (((x85-x86)!=x87)%x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x95 = -14073773932641599LL;
	volatile uint32_t t20 = 5U;

    t20 = (((x93-x94)!=x95)%x96);

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x98 = UINT16_MAX;
	int64_t x99 = -1LL;
	volatile int16_t x100 = -9;
	static volatile int32_t t21 = -22581;

    t21 = (((x97-x98)!=x99)%x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = 2036563668635155LLU;
	int8_t x104 = INT8_MIN;
	volatile int32_t t22 = -3049;

    t22 = (((x101-x102)!=x103)%x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	volatile uint32_t x106 = 58175U;
	uint32_t x107 = 66U;
	int64_t x108 = -1LL;
	volatile int64_t t23 = 16589486LL;

    t23 = (((x105-x106)!=x107)%x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 1LLU;
	int16_t x110 = -1587;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t x112 = UINT64_MAX;
	uint64_t t24 = 29LLU;

    t24 = (((x109-x110)!=x111)%x112);

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x113 = INT64_MIN;
	volatile int64_t x114 = INT64_MIN;
	uint64_t x115 = 2700578LLU;
	int8_t x116 = INT8_MAX;

    t25 = (((x113-x114)!=x115)%x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = 2535031987629LL;
	uint64_t t26 = 810603099LLU;

    t26 = (((x117-x118)!=x119)%x120);

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	uint32_t x123 = UINT32_MAX;
	static volatile int8_t x124 = INT8_MIN;
	int32_t t27 = 1;

    t27 = (((x121-x122)!=x123)%x124);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = 27LL;
	int64_t x126 = -1LL;
	int8_t x127 = -1;
	int64_t t28 = -16684090041LL;

    t28 = (((x125-x126)!=x127)%x128);

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -1LL;
	int64_t x130 = 147718940938288LL;
	int64_t x131 = 7831220LL;
	int32_t x132 = 542047;
	int32_t t29 = -1446;

    t29 = (((x129-x130)!=x131)%x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = -8;
	int64_t x138 = -371620019909187LL;
	int32_t x139 = -1;
	static int32_t x140 = INT32_MIN;
	int32_t t30 = -2820287;

    t30 = (((x137-x138)!=x139)%x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = 19;
	int16_t x142 = 15;
	int8_t x143 = INT8_MIN;
	static volatile uint64_t x144 = 2713LLU;

    t31 = (((x141-x142)!=x143)%x144);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x146 = -1;
	volatile int64_t x147 = INT64_MAX;
	static int16_t x148 = -1;

    t32 = (((x145-x146)!=x147)%x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint64_t x149 = 2928708944896802LLU;
	uint64_t x150 = 50445245974496436LLU;
	volatile uint32_t x152 = 124430U;
	static uint32_t t33 = 627312U;

    t33 = (((x149-x150)!=x151)%x152);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x153 = 2U;
	uint8_t x154 = 0U;
	int32_t x155 = INT32_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t34 = 510073276;

    t34 = (((x153-x154)!=x155)%x156);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = 20U;
	uint64_t x166 = UINT64_MAX;
	uint8_t x167 = 30U;
	volatile int64_t x168 = 9LL;
	int64_t t35 = -407512516LL;

    t35 = (((x165-x166)!=x167)%x168);

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x169 = 5274U;
	volatile uint32_t x170 = 53049U;
	volatile int32_t x171 = 211352485;
	uint16_t x172 = 10858U;
	volatile int32_t t36 = -165088;

    t36 = (((x169-x170)!=x171)%x172);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x173 = 22465U;
	volatile uint32_t x174 = 10578U;

    t37 = (((x173-x174)!=x175)%x176);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = -187;
	volatile int8_t x178 = INT8_MIN;
	int16_t x179 = -1;
	static int32_t t38 = -730952893;

    t38 = (((x177-x178)!=x179)%x180);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = INT32_MAX;
	uint32_t x182 = 114845291U;
	int32_t x183 = 503;
	int16_t x184 = INT16_MAX;
	int32_t t39 = 36522846;

    t39 = (((x181-x182)!=x183)%x184);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = 4406U;
	int8_t x187 = INT8_MAX;
	int64_t x188 = 42LL;
	int64_t t40 = -1634726LL;

    t40 = (((x185-x186)!=x187)%x188);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x189 = UINT8_MAX;
	int16_t x190 = 1;
	int64_t x192 = INT64_MIN;

    t41 = (((x189-x190)!=x191)%x192);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t42 = 125795;

    t42 = (((x193-x194)!=x195)%x196);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = 0U;
	int16_t x198 = INT16_MAX;
	int8_t x199 = -1;
	static uint16_t x200 = UINT16_MAX;
	int32_t t43 = -567;

    t43 = (((x197-x198)!=x199)%x200);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x201 = -1;
	uint16_t x204 = 14198U;

    t44 = (((x201-x202)!=x203)%x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x209 = -3;
	int16_t x210 = -1;
	uint16_t x211 = 345U;
	uint16_t x212 = 6876U;
	volatile int32_t t45 = -868289;

    t45 = (((x209-x210)!=x211)%x212);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x213 = INT16_MAX;
	int8_t x214 = -1;
	static int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t46 = 13304;

    t46 = (((x213-x214)!=x215)%x216);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x217 = -10443;
	static int8_t x218 = INT8_MAX;
	volatile uint16_t x220 = 15568U;
	int32_t t47 = 29149208;

    t47 = (((x217-x218)!=x219)%x220);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x221 = -122783539432226LL;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = 25556U;
	uint16_t x224 = 751U;
	int32_t t48 = -150;

    t48 = (((x221-x222)!=x223)%x224);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x225 = 8384U;
	volatile uint64_t x226 = 66453078988LLU;
	int32_t x227 = 3;
	uint16_t x228 = 23868U;

    t49 = (((x225-x226)!=x227)%x228);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x233 = 19;
	int8_t x234 = -1;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -1;
	int32_t t50 = -80674;

    t50 = (((x233-x234)!=x235)%x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x237 = 2561657292461167LLU;
	volatile uint8_t x238 = 47U;
	int64_t x239 = INT64_MIN;
	static int16_t x240 = 111;
	int32_t t51 = 3106;

    t51 = (((x237-x238)!=x239)%x240);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x241 = 2153814861262LL;
	static int8_t x243 = INT8_MIN;
	uint64_t x244 = 51348710LLU;
	volatile uint64_t t52 = 232340917410588706LLU;

    t52 = (((x241-x242)!=x243)%x244);

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x245 = 511242U;
	int16_t x246 = -1;
	uint8_t x247 = 15U;
	volatile int8_t x248 = -1;
	volatile int32_t t53 = -5;

    t53 = (((x245-x246)!=x247)%x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x249 = 6U;
	static int64_t x250 = 32732790461LL;
	uint64_t x251 = UINT64_MAX;
	static volatile uint64_t x252 = 3335385139297LLU;
	static uint64_t t54 = 21LLU;

    t54 = (((x249-x250)!=x251)%x252);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x253 = -20;
	volatile int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;

    t55 = (((x253-x254)!=x255)%x256);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x257 = 434LLU;
	int32_t x259 = 207;
	static int64_t x260 = INT64_MIN;
	int64_t t56 = 30LL;

    t56 = (((x257-x258)!=x259)%x260);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x265 = 181U;
	int64_t x267 = INT64_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t57 = 7878;

    t57 = (((x265-x266)!=x267)%x268);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x269 = 3750U;
	volatile int8_t x270 = INT8_MIN;
	uint8_t x272 = 11U;
	volatile int32_t t58 = 1020813;

    t58 = (((x269-x270)!=x271)%x272);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x273 = -57;
	uint8_t x274 = UINT8_MAX;
	int16_t x276 = INT16_MIN;
	volatile int32_t t59 = 80;

    t59 = (((x273-x274)!=x275)%x276);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = UINT64_MAX;
	uint64_t x282 = UINT64_MAX;
	static volatile uint8_t x283 = 44U;
	int16_t x284 = -699;
	volatile int32_t t60 = -17613;

    t60 = (((x281-x282)!=x283)%x284);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x285 = 5233U;
	static int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	uint32_t x288 = 50899240U;
	uint32_t t61 = 61597623U;

    t61 = (((x285-x286)!=x287)%x288);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x289 = -18;
	static uint32_t x291 = 1838514355U;
	uint8_t x292 = 15U;
	volatile int32_t t62 = -561542;

    t62 = (((x289-x290)!=x291)%x292);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x294 = 481308464;
	static int64_t x295 = INT64_MIN;

    t63 = (((x293-x294)!=x295)%x296);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	volatile int32_t t64 = -158341408;

    t64 = (((x297-x298)!=x299)%x300);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x301 = UINT16_MAX;
	int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;

    t65 = (((x301-x302)!=x303)%x304);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint16_t x305 = 717U;
	int32_t x306 = 123;
	volatile int16_t x307 = 0;
	int16_t x308 = -1;
	volatile int32_t t66 = -1656795;

    t66 = (((x305-x306)!=x307)%x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x313 = -1LL;
	uint64_t x314 = UINT64_MAX;
	volatile int32_t t67 = 96291;

    t67 = (((x313-x314)!=x315)%x316);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x317 = 85688005LLU;
	int32_t x319 = -1;
	static int16_t x320 = -1;
	int32_t t68 = -623499975;

    t68 = (((x317-x318)!=x319)%x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = 779;
	static uint16_t x322 = 6191U;
	static uint16_t x323 = 10U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t69 = -218;

    t69 = (((x321-x322)!=x323)%x324);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x325 = 3;
	static int32_t x326 = -505740;
	int64_t x327 = INT64_MAX;
	volatile int64_t x328 = INT64_MAX;
	static volatile int64_t t70 = 15LL;

    t70 = (((x325-x326)!=x327)%x328);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x329 = 7U;
	int16_t x331 = INT16_MIN;

    t71 = (((x329-x330)!=x331)%x332);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x337 = 125127U;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t72 = 170596;

    t72 = (((x337-x338)!=x339)%x340);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x342 = -235;
	uint64_t x343 = UINT64_MAX;
	static int8_t x344 = 1;
	volatile int32_t t73 = 0;

    t73 = (((x341-x342)!=x343)%x344);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MIN;
	int64_t x347 = -550368880523983LL;
	volatile int32_t t74 = -128;

    t74 = (((x345-x346)!=x347)%x348);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -1;
	int32_t x358 = INT32_MIN;
	uint32_t x359 = 235U;
	uint64_t x360 = UINT64_MAX;

    t75 = (((x357-x358)!=x359)%x360);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x362 = -3LL;
	int64_t x363 = 46235LL;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t76 = 50;

    t76 = (((x361-x362)!=x363)%x364);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x365 = 5;
	int32_t x366 = 1924281;
	int8_t x367 = INT8_MAX;
	volatile int16_t x368 = -1;
	static volatile int32_t t77 = 19;

    t77 = (((x365-x366)!=x367)%x368);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = -12;
	static int32_t x371 = 0;
	int64_t x372 = 27788LL;
	static volatile int64_t t78 = 12LL;

    t78 = (((x369-x370)!=x371)%x372);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x373 = UINT8_MAX;
	static volatile int32_t x374 = INT32_MAX;
	static int8_t x375 = INT8_MIN;
	static int32_t x376 = INT32_MIN;
	volatile int32_t t79 = -3124;

    t79 = (((x373-x374)!=x375)%x376);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 680301708LLU;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 102U;
	volatile int32_t t80 = 1489;

    t80 = (((x377-x378)!=x379)%x380);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x385 = UINT32_MAX;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = UINT64_MAX;
	uint64_t t81 = 12272LLU;

    t81 = (((x385-x386)!=x387)%x388);

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x390 = INT8_MIN;
	int32_t x391 = -23875741;
	int64_t t82 = -28846LL;

    t82 = (((x389-x390)!=x391)%x392);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x393 = INT16_MIN;
	volatile int32_t x395 = -1;

    t83 = (((x393-x394)!=x395)%x396);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x398 = 5;
	uint32_t x399 = 8735U;
	volatile uint64_t t84 = 7076075LLU;

    t84 = (((x397-x398)!=x399)%x400);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x401 = 9U;
	volatile int8_t x403 = -39;

    t85 = (((x401-x402)!=x403)%x404);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x405 = -703;
	static int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = 14013620156LLU;
	volatile uint64_t t86 = 412LLU;

    t86 = (((x405-x406)!=x407)%x408);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x415 = UINT16_MAX;
	static volatile int32_t t87 = -926272;

    t87 = (((x413-x414)!=x415)%x416);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x418 = INT16_MIN;
	static int32_t x419 = INT32_MIN;
	int8_t x420 = -28;
	volatile int32_t t88 = -5;

    t88 = (((x417-x418)!=x419)%x420);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;
	static int16_t x424 = -1;

    t89 = (((x421-x422)!=x423)%x424);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x425 = 36;
	int16_t x427 = -1;
	volatile uint8_t x428 = 78U;
	volatile int32_t t90 = 15770;

    t90 = (((x425-x426)!=x427)%x428);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x429 = 57675646LLU;
	volatile uint16_t x430 = 555U;
	int64_t x431 = INT64_MIN;
	uint64_t t91 = 3788525156LLU;

    t91 = (((x429-x430)!=x431)%x432);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x434 = -317;
	int8_t x435 = INT8_MAX;
	int64_t x436 = -1LL;
	volatile int64_t t92 = -4604278517425LL;

    t92 = (((x433-x434)!=x435)%x436);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x437 = INT16_MIN;
	uint8_t x438 = UINT8_MAX;
	int32_t x439 = 80;
	int64_t x440 = INT64_MIN;

    t93 = (((x437-x438)!=x439)%x440);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x441 = INT8_MIN;
	uint32_t x442 = 23285912U;
	static int64_t x443 = INT64_MAX;
	int64_t x444 = INT64_MAX;
	volatile int64_t t94 = -13LL;

    t94 = (((x441-x442)!=x443)%x444);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x445 = -1;
	uint16_t x446 = 1730U;
	uint64_t x448 = UINT64_MAX;
	uint64_t t95 = 3797610861297LLU;

    t95 = (((x445-x446)!=x447)%x448);

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x449 = INT64_MIN;
	uint64_t x450 = 19007119LLU;
	int8_t x452 = -1;
	volatile int32_t t96 = -6265885;

    t96 = (((x449-x450)!=x451)%x452);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x453 = INT32_MIN;
	static volatile int8_t x454 = -1;
	static uint32_t x455 = 8U;
	int8_t x456 = INT8_MIN;
	volatile int32_t t97 = -20435;

    t97 = (((x453-x454)!=x455)%x456);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x461 = 46;
	volatile int64_t x462 = -1224LL;
	uint32_t x463 = 1501431U;
	int64_t x464 = 3733LL;

    t98 = (((x461-x462)!=x463)%x464);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x466 = 2820450LL;
	int64_t x467 = -1LL;
	static uint64_t x468 = UINT64_MAX;

    t99 = (((x465-x466)!=x467)%x468);

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x470 = 11647U;
	int16_t x471 = -1;
	static volatile uint32_t t100 = 3U;

    t100 = (((x469-x470)!=x471)%x472);

    if (t100 != 1U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x473 = INT32_MAX;
	int64_t x474 = 251LL;
	volatile int8_t x475 = INT8_MAX;
	volatile uint32_t t101 = 248777142U;

    t101 = (((x473-x474)!=x475)%x476);

    if (t101 != 1U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x477 = -1;
	volatile uint16_t x478 = 6U;
	static int16_t x479 = INT16_MIN;
	int8_t x480 = 1;
	static volatile int32_t t102 = -7884;

    t102 = (((x477-x478)!=x479)%x480);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x482 = INT16_MIN;
	int64_t x483 = -2LL;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t103 = 1637385582638LLU;

    t103 = (((x481-x482)!=x483)%x484);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x485 = -1;
	static uint32_t x486 = UINT32_MAX;
	uint64_t x487 = 847026522585LLU;
	uint32_t x488 = UINT32_MAX;

    t104 = (((x485-x486)!=x487)%x488);

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x489 = 1;
	int16_t x491 = INT16_MIN;
	int64_t t105 = 2963LL;

    t105 = (((x489-x490)!=x491)%x492);

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x493 = UINT32_MAX;
	static volatile uint32_t x494 = UINT32_MAX;
	static int64_t x495 = 5642278082713330LL;
	int64_t x496 = -66143129765485650LL;

    t106 = (((x493-x494)!=x495)%x496);

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x497 = -1;
	uint32_t x498 = UINT32_MAX;
	static int8_t x499 = 2;
	int64_t x500 = INT64_MAX;
	static volatile int64_t t107 = 1576756378012960LL;

    t107 = (((x497-x498)!=x499)%x500);

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MIN;
	uint8_t x508 = UINT8_MAX;
	int32_t t108 = 254206;

    t108 = (((x505-x506)!=x507)%x508);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x509 = 8LLU;
	uint16_t x510 = 3U;
	int32_t x511 = INT32_MIN;
	uint64_t x512 = UINT64_MAX;
	uint64_t t109 = 1563LLU;

    t109 = (((x509-x510)!=x511)%x512);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x513 = 142794386321176LL;
	volatile uint32_t x514 = 163929U;
	int16_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	static uint32_t t110 = 1305042116U;

    t110 = (((x513-x514)!=x515)%x516);

    if (t110 != 1U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x522 = 31U;
	volatile int16_t x523 = INT16_MAX;
	static volatile int32_t x524 = INT32_MIN;
	int32_t t111 = 52;

    t111 = (((x521-x522)!=x523)%x524);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x525 = -1LL;
	volatile int16_t x527 = INT16_MAX;
	int64_t x528 = INT64_MIN;
	int64_t t112 = -26773364LL;

    t112 = (((x525-x526)!=x527)%x528);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x529 = INT32_MIN;
	uint16_t x530 = 0U;
	int32_t x531 = INT32_MIN;
	volatile int8_t x532 = 7;

    t113 = (((x529-x530)!=x531)%x532);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x533 = -63;
	int32_t x534 = 20869;
	uint16_t x535 = 9U;
	volatile int32_t t114 = 1;

    t114 = (((x533-x534)!=x535)%x536);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x538 = -1;
	int16_t x539 = -4;
	int16_t x540 = INT16_MAX;
	volatile int32_t t115 = 9;

    t115 = (((x537-x538)!=x539)%x540);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x541 = INT32_MIN;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t116 = 13247638;

    t116 = (((x541-x542)!=x543)%x544);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = -1;
	uint64_t x546 = 3683389628328316LLU;
	static uint8_t x548 = UINT8_MAX;
	volatile int32_t t117 = -392;

    t117 = (((x545-x546)!=x547)%x548);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x553 = 0LL;
	uint16_t x554 = 29659U;
	static uint8_t x555 = 64U;
	int16_t x556 = INT16_MAX;
	volatile int32_t t118 = -276250;

    t118 = (((x553-x554)!=x555)%x556);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x558 = INT16_MIN;
	int16_t x559 = 1;
	uint32_t t119 = 1U;

    t119 = (((x557-x558)!=x559)%x560);

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x561 = 0U;
	static int64_t x563 = -1LL;

    t120 = (((x561-x562)!=x563)%x564);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x565 = 556U;
	static int8_t x567 = -1;
	static int32_t x568 = INT32_MIN;

    t121 = (((x565-x566)!=x567)%x568);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x569 = -1LL;
	static int8_t x570 = 3;
	int16_t x571 = -1;
	static uint16_t x572 = 213U;
	int32_t t122 = -3299;

    t122 = (((x569-x570)!=x571)%x572);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x573 = 4350668177647LLU;
	int64_t x574 = INT64_MIN;
	static uint32_t x575 = 18345486U;
	volatile uint64_t x576 = UINT64_MAX;
	volatile uint64_t t123 = 69946023769120467LLU;

    t123 = (((x573-x574)!=x575)%x576);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x577 = 3;
	volatile uint64_t x578 = UINT64_MAX;
	static int64_t x579 = -1LL;
	volatile int32_t t124 = 416891;

    t124 = (((x577-x578)!=x579)%x580);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x581 = UINT64_MAX;
	int8_t x582 = INT8_MIN;
	int64_t x583 = INT64_MIN;
	static uint16_t x584 = 31618U;
	int32_t t125 = 1782421;

    t125 = (((x581-x582)!=x583)%x584);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x585 = -3665;
	volatile int64_t x586 = -1LL;
	int32_t x587 = INT32_MIN;
	uint16_t x588 = 8720U;
	int32_t t126 = -12;

    t126 = (((x585-x586)!=x587)%x588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x590 = 452210LL;
	int64_t x591 = INT64_MAX;
	uint8_t x592 = 57U;
	static int32_t t127 = -42312;

    t127 = (((x589-x590)!=x591)%x592);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x593 = 0;
	int32_t x594 = -6319854;
	uint16_t x595 = 3U;
	static uint32_t x596 = 947566094U;
	volatile uint32_t t128 = 25198U;

    t128 = (((x593-x594)!=x595)%x596);

    if (t128 != 1U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x602 = INT64_MIN;
	volatile int16_t x603 = INT16_MIN;
	uint8_t x604 = 12U;
	volatile int32_t t129 = -3312;

    t129 = (((x601-x602)!=x603)%x604);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x606 = 8;
	int16_t x607 = 7;
	static int16_t x608 = -776;

    t130 = (((x605-x606)!=x607)%x608);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x610 = UINT32_MAX;
	int64_t x611 = -1LL;
	int16_t x612 = INT16_MIN;
	int32_t t131 = -3230;

    t131 = (((x609-x610)!=x611)%x612);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x617 = INT32_MAX;
	volatile uint16_t x618 = 2931U;
	static volatile uint16_t x619 = UINT16_MAX;
	volatile int8_t x620 = INT8_MIN;
	volatile int32_t t132 = 21;

    t132 = (((x617-x618)!=x619)%x620);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x621 = -11;
	uint16_t x622 = 1U;
	volatile int32_t x623 = INT32_MIN;
	int16_t x624 = -1;
	static int32_t t133 = 420429;

    t133 = (((x621-x622)!=x623)%x624);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x625 = 110U;
	static uint8_t x626 = UINT8_MAX;
	static int8_t x628 = INT8_MIN;
	static volatile int32_t t134 = 7219849;

    t134 = (((x625-x626)!=x627)%x628);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x633 = 28U;
	uint32_t x634 = UINT32_MAX;
	static volatile int64_t x636 = -508390531LL;
	volatile int64_t t135 = 10023766LL;

    t135 = (((x633-x634)!=x635)%x636);

    if (t135 != 1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x637 = 29U;
	int8_t x638 = 23;
	int16_t x639 = -2;
	int32_t x640 = INT32_MAX;

    t136 = (((x637-x638)!=x639)%x640);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x642 = INT64_MAX;
	int32_t x643 = INT32_MIN;
	int64_t x644 = INT64_MIN;

    t137 = (((x641-x642)!=x643)%x644);

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x646 = INT32_MIN;
	static int16_t x648 = -1;
	int32_t t138 = 15442156;

    t138 = (((x645-x646)!=x647)%x648);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x649 = INT64_MIN;
	int64_t x650 = -27196LL;
	volatile uint32_t x652 = 691857U;
	uint32_t t139 = 248335962U;

    t139 = (((x649-x650)!=x651)%x652);

    if (t139 != 1U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x653 = 9U;
	uint64_t x654 = 129780775679310LLU;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t140 = 3771;

    t140 = (((x653-x654)!=x655)%x656);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x657 = UINT8_MAX;
	int16_t x659 = INT16_MAX;
	static volatile int32_t t141 = -14305139;

    t141 = (((x657-x658)!=x659)%x660);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x661 = INT64_MIN;
	uint32_t x663 = 0U;
	volatile int32_t x664 = -9;
	int32_t t142 = -444;

    t142 = (((x661-x662)!=x663)%x664);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = INT64_MAX;
	uint32_t x666 = 14U;
	int16_t x667 = 6850;
	int16_t x668 = -953;
	volatile int32_t t143 = -1;

    t143 = (((x665-x666)!=x667)%x668);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x669 = 1716U;
	uint32_t x670 = 3095U;
	int16_t x671 = INT16_MAX;
	volatile int32_t t144 = -565278;

    t144 = (((x669-x670)!=x671)%x672);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x674 = 0U;
	int16_t x676 = -1;
	volatile int32_t t145 = 104857;

    t145 = (((x673-x674)!=x675)%x676);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x677 = INT32_MIN;
	volatile int16_t x678 = INT16_MIN;
	int16_t x679 = INT16_MIN;
	static uint8_t x680 = 6U;
	int32_t t146 = 178222427;

    t146 = (((x677-x678)!=x679)%x680);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x681 = 9U;
	uint8_t x682 = UINT8_MAX;
	static uint64_t x683 = 16584118LLU;
	volatile int32_t t147 = -5;

    t147 = (((x681-x682)!=x683)%x684);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x686 = -3;
	int8_t x687 = INT8_MAX;
	uint32_t x688 = UINT32_MAX;
	uint32_t t148 = 18100697U;

    t148 = (((x685-x686)!=x687)%x688);

    if (t148 != 1U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x689 = UINT8_MAX;
	int8_t x690 = 0;
	volatile int64_t x691 = -1LL;
	static int8_t x692 = 45;
	int32_t t149 = 401430;

    t149 = (((x689-x690)!=x691)%x692);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x697 = INT32_MIN;
	int64_t x698 = INT64_MIN;
	uint8_t x699 = UINT8_MAX;

    t150 = (((x697-x698)!=x699)%x700);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x702 = -1;
	static uint8_t x704 = UINT8_MAX;
	int32_t t151 = 10132665;

    t151 = (((x701-x702)!=x703)%x704);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x705 = 3U;
	volatile int16_t x706 = 1;
	int16_t x707 = 1680;
	uint16_t x708 = 429U;

    t152 = (((x705-x706)!=x707)%x708);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x710 = -67;
	int8_t x712 = INT8_MIN;
	int32_t t153 = 211274;

    t153 = (((x709-x710)!=x711)%x712);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	int16_t x715 = -3;
	uint16_t x716 = 202U;
	int32_t t154 = -730683420;

    t154 = (((x713-x714)!=x715)%x716);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x717 = 0U;
	uint8_t x718 = 100U;
	volatile int16_t x719 = INT16_MIN;
	uint32_t x720 = 1U;
	volatile uint32_t t155 = 14150153U;

    t155 = (((x717-x718)!=x719)%x720);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x721 = 2203865599LLU;
	int32_t x722 = INT32_MIN;
	uint16_t x724 = UINT16_MAX;
	volatile int32_t t156 = 401190;

    t156 = (((x721-x722)!=x723)%x724);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x725 = -25;
	volatile uint8_t x726 = 1U;
	int64_t x727 = -1LL;
	int64_t x728 = 1258152893797LL;
	volatile int64_t t157 = 32911145LL;

    t157 = (((x725-x726)!=x727)%x728);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x729 = 14;
	int8_t x730 = -7;
	int16_t x731 = -650;
	uint64_t t158 = 71666149926LLU;

    t158 = (((x729-x730)!=x731)%x732);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x733 = 0U;
	uint8_t x734 = 107U;
	int64_t x735 = 5LL;
	static uint16_t x736 = 3U;

    t159 = (((x733-x734)!=x735)%x736);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x737 = -488539LL;
	int8_t x738 = INT8_MAX;
	int32_t x739 = 111;

    t160 = (((x737-x738)!=x739)%x740);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x741 = 28LLU;
	int16_t x742 = 1;
	static int16_t x744 = INT16_MIN;
	volatile int32_t t161 = -151189;

    t161 = (((x741-x742)!=x743)%x744);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x745 = -1;
	volatile int64_t x746 = 958LL;
	int32_t t162 = -62433545;

    t162 = (((x745-x746)!=x747)%x748);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x749 = 6U;
	uint8_t x752 = 5U;
	static int32_t t163 = -884699279;

    t163 = (((x749-x750)!=x751)%x752);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x753 = 7546759260503082LL;
	volatile int8_t x754 = INT8_MIN;
	int64_t x755 = 143574655LL;
	int16_t x756 = INT16_MIN;
	volatile int32_t t164 = -27488076;

    t164 = (((x753-x754)!=x755)%x756);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x757 = -5;
	int64_t x758 = -21494LL;
	static volatile int8_t x759 = -1;
	int32_t t165 = 210;

    t165 = (((x757-x758)!=x759)%x760);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x761 = 9U;
	int16_t x762 = INT16_MIN;
	static int16_t x763 = INT16_MIN;
	uint64_t x764 = 28893829774479598LLU;
	uint64_t t166 = 49300905757281970LLU;

    t166 = (((x761-x762)!=x763)%x764);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x765 = INT64_MAX;
	int16_t x766 = INT16_MAX;
	volatile int8_t x767 = 2;
	int16_t x768 = -1;
	int32_t t167 = -107615;

    t167 = (((x765-x766)!=x767)%x768);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x769 = 7U;
	int64_t x771 = INT64_MIN;
	volatile int64_t x772 = -88533530605268LL;
	volatile int64_t t168 = -636612955299016938LL;

    t168 = (((x769-x770)!=x771)%x772);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x774 = -1LL;
	int16_t x776 = -56;
	int32_t t169 = -479600391;

    t169 = (((x773-x774)!=x775)%x776);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x777 = 101002262;
	volatile int32_t x778 = INT32_MAX;
	int64_t x779 = -316183529LL;
	uint64_t x780 = UINT64_MAX;
	volatile uint64_t t170 = 32194408561277859LLU;

    t170 = (((x777-x778)!=x779)%x780);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x781 = 4109292LLU;
	uint64_t x782 = 32966LLU;
	static volatile uint16_t x783 = UINT16_MAX;
	int32_t x784 = -1;
	volatile int32_t t171 = 9685816;

    t171 = (((x781-x782)!=x783)%x784);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x785 = 7652;
	volatile int16_t x786 = -1;
	int8_t x788 = INT8_MIN;
	volatile int32_t t172 = 272785347;

    t172 = (((x785-x786)!=x787)%x788);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x790 = UINT32_MAX;
	static int16_t x791 = -1;
	int8_t x792 = INT8_MIN;
	volatile int32_t t173 = 75;

    t173 = (((x789-x790)!=x791)%x792);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x793 = INT16_MAX;
	int8_t x795 = 3;
	int8_t x796 = INT8_MAX;
	int32_t t174 = 28020;

    t174 = (((x793-x794)!=x795)%x796);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x797 = 14;
	volatile int8_t x798 = INT8_MAX;
	int16_t x799 = 1;
	volatile int32_t x800 = INT32_MIN;
	static volatile int32_t t175 = 3019527;

    t175 = (((x797-x798)!=x799)%x800);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x801 = INT8_MIN;
	int8_t x802 = -20;
	int32_t x803 = INT32_MIN;
	volatile int32_t t176 = -7122;

    t176 = (((x801-x802)!=x803)%x804);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x805 = -15;
	volatile int64_t x806 = INT64_MIN;
	uint64_t x807 = UINT64_MAX;
	uint64_t x808 = 96597731487LLU;
	volatile uint64_t t177 = 5LLU;

    t177 = (((x805-x806)!=x807)%x808);

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x811 = INT8_MAX;
	volatile int32_t t178 = 41424;

    t178 = (((x809-x810)!=x811)%x812);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x814 = 36U;
	uint32_t x815 = UINT32_MAX;
	int16_t x816 = -8417;
	int32_t t179 = -93053;

    t179 = (((x813-x814)!=x815)%x816);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x817 = 1728788885188LL;
	int8_t x819 = INT8_MIN;
	volatile uint32_t x820 = 12982U;
	volatile uint32_t t180 = 2033670U;

    t180 = (((x817-x818)!=x819)%x820);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x821 = -1;
	uint32_t x822 = 11475005U;
	int32_t x823 = INT32_MIN;
	volatile int32_t t181 = -3;

    t181 = (((x821-x822)!=x823)%x824);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = -1;
	int8_t x826 = 0;
	int8_t x827 = INT8_MAX;

    t182 = (((x825-x826)!=x827)%x828);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x829 = INT32_MIN;
	int32_t x832 = -1;
	volatile int32_t t183 = 2261943;

    t183 = (((x829-x830)!=x831)%x832);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x833 = INT64_MIN;
	static int16_t x834 = INT16_MIN;
	volatile int64_t x835 = INT64_MAX;
	static int64_t x836 = -1LL;
	int64_t t184 = -2419030272975919LL;

    t184 = (((x833-x834)!=x835)%x836);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x837 = -1;
	volatile int8_t x838 = INT8_MIN;
	static int8_t x839 = 42;
	int64_t x840 = -1LL;
	static int64_t t185 = 18340469423LL;

    t185 = (((x837-x838)!=x839)%x840);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x841 = UINT16_MAX;
	int64_t x842 = INT64_MAX;
	int8_t x843 = -1;
	static uint8_t x844 = 1U;
	static volatile int32_t t186 = 16704127;

    t186 = (((x841-x842)!=x843)%x844);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x846 = INT8_MIN;
	static int8_t x847 = INT8_MIN;
	volatile int32_t x848 = 36;
	static int32_t t187 = 130;

    t187 = (((x845-x846)!=x847)%x848);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x849 = INT32_MIN;
	int16_t x851 = -8741;
	uint8_t x852 = 2U;

    t188 = (((x849-x850)!=x851)%x852);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x853 = -214;
	volatile int16_t x855 = INT16_MIN;
	static int8_t x856 = INT8_MAX;

    t189 = (((x853-x854)!=x855)%x856);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x857 = UINT64_MAX;
	uint32_t x858 = 333U;
	int8_t x859 = -1;
	int8_t x860 = INT8_MIN;
	volatile int32_t t190 = -4376;

    t190 = (((x857-x858)!=x859)%x860);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x861 = UINT8_MAX;
	int16_t x863 = INT16_MIN;
	int8_t x864 = INT8_MIN;
	int32_t t191 = 368;

    t191 = (((x861-x862)!=x863)%x864);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x865 = 1LL;
	int32_t x866 = INT32_MAX;
	uint8_t x867 = 26U;
	volatile int32_t x868 = INT32_MIN;
	int32_t t192 = 27414072;

    t192 = (((x865-x866)!=x867)%x868);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x869 = UINT64_MAX;
	int32_t x870 = INT32_MIN;
	volatile uint32_t x871 = UINT32_MAX;
	static int8_t x872 = -1;
	volatile int32_t t193 = 13;

    t193 = (((x869-x870)!=x871)%x872);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x874 = -27;
	volatile uint16_t x875 = UINT16_MAX;
	int64_t t194 = -5897418798LL;

    t194 = (((x873-x874)!=x875)%x876);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x881 = 40LL;
	uint16_t x882 = UINT16_MAX;
	int64_t x883 = -5752482LL;
	volatile int32_t t195 = 3568;

    t195 = (((x881-x882)!=x883)%x884);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x885 = INT16_MIN;
	int32_t x887 = -1;
	int32_t t196 = -51;

    t196 = (((x885-x886)!=x887)%x888);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x889 = -1;
	volatile uint8_t x890 = 23U;
	uint16_t x891 = UINT16_MAX;
	int16_t x892 = INT16_MIN;
	volatile int32_t t197 = -573670;

    t197 = (((x889-x890)!=x891)%x892);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x893 = INT16_MAX;
	volatile uint32_t x894 = UINT32_MAX;
	uint8_t x895 = 0U;
	int32_t x896 = INT32_MIN;
	volatile int32_t t198 = -42980;

    t198 = (((x893-x894)!=x895)%x896);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x897 = -7783;
	static volatile uint64_t x898 = 3284LLU;
	volatile int32_t x900 = INT32_MIN;
	volatile int32_t t199 = -33;

    t199 = (((x897-x898)!=x899)%x900);

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

