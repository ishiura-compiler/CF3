
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

int16_t x1 = -1;
static int32_t x4 = INT32_MIN;
int32_t t1 = 224201;
volatile int32_t x10 = INT32_MIN;
volatile uint8_t x12 = UINT8_MAX;
static uint64_t x21 = UINT64_MAX;
uint32_t x26 = 35477U;
int8_t x28 = 3;
static int16_t x36 = INT16_MIN;
int8_t x38 = -5;
int8_t x39 = 3;
int32_t x43 = 10;
uint64_t x45 = 1529LLU;
int32_t t13 = INT32_MAX;
volatile int32_t x60 = INT32_MAX;
int32_t t14 = INT32_MAX;
uint16_t x65 = UINT16_MAX;
static uint64_t x66 = 146613601068286060LLU;
uint64_t t16 = 10109761086LLU;
uint32_t x71 = 3803U;
uint32_t x74 = UINT32_MAX;
int32_t x75 = INT32_MAX;
static volatile int32_t t18 = -4792445;
uint32_t x77 = 10U;
static int32_t x80 = 0;
static int64_t t20 = -3248675LL;
volatile int32_t t22 = 11503;
int32_t x100 = -1;
uint16_t x101 = UINT16_MAX;
volatile int16_t x106 = INT16_MIN;
int64_t x111 = INT64_MIN;
volatile int32_t t28 = 27;
uint64_t t30 = UINT64_MAX;
volatile int32_t x128 = INT32_MIN;
int8_t x130 = -1;
volatile int32_t t32 = -838341;
uint16_t x141 = UINT16_MAX;
uint8_t x142 = 3U;
static int32_t x144 = -1;
int32_t t36 = -1;
volatile int64_t t38 = 122836414149LL;
volatile int64_t x157 = INT64_MAX;
uint8_t x161 = UINT8_MAX;
int8_t x165 = 28;
static volatile int8_t x166 = INT8_MIN;
static uint32_t x171 = 695059U;
int8_t x175 = INT8_MIN;
int16_t x176 = INT16_MIN;
int32_t t43 = -50868;
int16_t x188 = 3;
static int16_t x193 = -1;
int32_t x200 = INT32_MIN;
int16_t x202 = INT16_MIN;
int8_t x207 = INT8_MIN;
uint8_t x209 = UINT8_MAX;
static volatile int64_t x215 = -2999221250999LL;
uint32_t x223 = 5U;
int32_t t55 = -119160;
int32_t t57 = 1819524;
int32_t x239 = 84717750;
int64_t t58 = -2LL;
int16_t x246 = INT16_MIN;
int16_t x247 = INT16_MIN;
volatile int32_t t59 = -8652937;
int32_t x255 = INT32_MIN;
int8_t x257 = 60;
uint64_t x260 = 383448901570LLU;
uint64_t t62 = 41206955637235950LLU;
int8_t x261 = 1;
uint16_t x264 = 48U;
int16_t x265 = INT16_MIN;
int8_t x267 = -1;
static int64_t x268 = 115455LL;
uint64_t x271 = 6323484219LLU;
volatile int32_t x272 = 42811;
static int64_t x275 = -1LL;
int32_t x276 = -1830123;
static int16_t x278 = 593;
volatile uint32_t x283 = 4066064U;
volatile uint64_t t70 = 406125LLU;
volatile int32_t t71 = -381;
int8_t x304 = INT8_MAX;
volatile int8_t x334 = INT8_MIN;
static uint8_t x341 = UINT8_MAX;
int64_t t82 = 15549669087434084LL;
volatile uint16_t x345 = 3U;
int64_t t83 = -55879154LL;
int8_t x351 = INT8_MAX;
int8_t x356 = 26;
uint32_t t86 = 187U;
int64_t x361 = INT64_MIN;
static uint8_t x374 = 24U;
static int8_t x378 = -1;
static int64_t x391 = 53550748821176523LL;
uint8_t x394 = UINT8_MAX;
static volatile uint32_t t96 = 119504236U;
int16_t x403 = INT16_MIN;
int64_t x407 = 41183825490LL;
static uint8_t x417 = 3U;
int32_t x420 = INT32_MIN;
int32_t x434 = -37209838;
int8_t x437 = INT8_MIN;
static uint8_t x445 = UINT8_MAX;
int32_t t107 = 0;
int16_t x451 = 13605;
int32_t t108 = -16383641;
int16_t x456 = -46;
static int32_t t109 = -867;
int32_t x469 = 79334825;
int16_t x472 = 3;
volatile int32_t t113 = 4208;
int32_t x474 = -233;
static int32_t x475 = INT32_MAX;
int64_t x477 = 446926666644LL;
volatile int16_t x484 = -3;
uint64_t x487 = 4801959LLU;
int16_t x488 = INT16_MAX;
static uint8_t x494 = 2U;
static int32_t x507 = -1;
int8_t x511 = 0;
int8_t x513 = INT8_MIN;
int8_t x514 = -1;
int16_t x520 = INT16_MIN;
int64_t x524 = -1LL;
uint16_t x540 = 1U;
static uint8_t x541 = UINT8_MAX;
static int16_t x545 = 1198;
int64_t x546 = -21978605LL;
uint32_t x553 = UINT32_MAX;
int32_t x557 = 107141;
int8_t x565 = 59;
int16_t x566 = INT16_MAX;
int8_t x567 = INT8_MIN;
volatile int16_t x572 = -1472;
int8_t x574 = -1;
static volatile int32_t t139 = -1030172;
int16_t x586 = INT16_MIN;
uint32_t x588 = 1088826566U;
int16_t x590 = -1;
volatile uint64_t x591 = 466LLU;
volatile int32_t t144 = INT32_MAX;
int32_t t145 = 10;
static int16_t x603 = INT16_MIN;
int16_t x607 = INT16_MAX;
int32_t x613 = -1;
volatile uint16_t x624 = 1751U;
int8_t x628 = -1;
static int64_t x629 = -1LL;
int32_t t153 = -1758838;
uint8_t x636 = 118U;
int16_t x643 = -1;
int8_t x647 = INT8_MAX;
static volatile uint64_t t157 = UINT64_MAX;
int64_t x649 = INT64_MIN;
int8_t x655 = INT8_MIN;
volatile uint64_t t159 = 157291420266LLU;
int32_t x659 = INT32_MIN;
volatile uint32_t x666 = UINT32_MAX;
static volatile int64_t t164 = 7304LL;
volatile int32_t t165 = -14298257;
static int32_t x687 = INT32_MIN;
uint32_t x691 = 54430U;
int8_t x697 = 54;
static int8_t x700 = INT8_MIN;
volatile int32_t t169 = 87845;
volatile int16_t x701 = INT16_MIN;
int8_t x704 = INT8_MAX;
volatile int16_t x714 = INT16_MAX;
static int8_t x719 = INT8_MIN;
int16_t x722 = -1;
int32_t x724 = INT32_MIN;
int32_t t176 = -3;
volatile int16_t x729 = -5;
static volatile int64_t t177 = 12180777929350793LL;
int8_t x733 = INT8_MIN;
int8_t x741 = INT8_MIN;
uint32_t x743 = 1567U;
volatile int32_t t181 = -1;
volatile int16_t x759 = INT16_MIN;
uint64_t x760 = 6LLU;
uint64_t t184 = 37LLU;
volatile int32_t t186 = 54520926;
int32_t x774 = -392;
volatile int32_t x781 = -1;
static volatile uint64_t x784 = 968498862969823749LLU;
uint64_t x793 = 113LLU;
uint16_t x795 = 1U;
int32_t x807 = INT32_MIN;
static int8_t x808 = 23;
int32_t x809 = INT32_MAX;
int32_t x811 = -1;
int8_t x812 = -1;
volatile int32_t x814 = INT32_MAX;
volatile int32_t t198 = 234971516;
static int8_t x820 = INT8_MIN;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	static uint64_t x3 = 146224461492LLU;
	int32_t t0 = 15329;

    t0 = (((x1%x2)!=x3)|x4);

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 105599U;
	int64_t x6 = INT64_MIN;
	static volatile uint8_t x7 = 29U;
	static int8_t x8 = INT8_MAX;

    t1 = (((x5%x6)!=x7)|x8);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	uint8_t x11 = UINT8_MAX;
	static int32_t t2 = -153487;

    t2 = (((x9%x10)!=x11)|x12);

    if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1U;
	int64_t x14 = INT64_MAX;
	static volatile int64_t x15 = -20LL;
	volatile uint32_t x16 = 0U;
	uint32_t t3 = 61U;

    t3 = (((x13%x14)!=x15)|x16);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x17 = UINT16_MAX;
	int64_t x18 = -1LL;
	int16_t x19 = -8588;
	int32_t x20 = INT32_MIN;
	static int32_t t4 = 253152314;

    t4 = (((x17%x18)!=x19)|x20);

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x22 = INT32_MIN;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -398180577;

    t5 = (((x21%x22)!=x23)|x24);

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 5868014U;
	int32_t x27 = -42073993;
	static int32_t t6 = -2846;

    t6 = (((x25%x26)!=x27)|x28);

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -15319534LL;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = 7LL;
	int8_t x32 = INT8_MAX;
	int32_t t7 = 1;

    t7 = (((x29%x30)!=x31)|x32);

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 8;
	static int64_t x34 = INT64_MIN;
	static volatile uint8_t x35 = 3U;
	volatile int32_t t8 = 892888209;

    t8 = (((x33%x34)!=x35)|x36);

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = 7U;
	static int32_t x40 = -204;
	volatile int32_t t9 = 2;

    t9 = (((x37%x38)!=x39)|x40);

    if (t9 != -203) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = UINT16_MAX;
	static int32_t x42 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 2146118;

    t10 = (((x41%x42)!=x43)|x44);

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -1;
	int32_t x47 = -1;
	int16_t x48 = -49;
	volatile int32_t t11 = 288368162;

    t11 = (((x45%x46)!=x47)|x48);

    if (t11 != -49) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int8_t x50 = -3;
	static uint64_t x51 = UINT64_MAX;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -43;

    t12 = (((x49%x50)!=x51)|x52);

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 13U;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	volatile int32_t x56 = INT32_MAX;

    t13 = (((x53%x54)!=x55)|x56);

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	static int16_t x58 = -1;
	int64_t x59 = -63073LL;

    t14 = (((x57%x58)!=x59)|x60);

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 40U;
	volatile int16_t x62 = INT16_MIN;
	volatile uint16_t x63 = UINT16_MAX;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = -54673;

    t15 = (((x61%x62)!=x63)|x64);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x67 = INT64_MAX;
	uint64_t x68 = 6327229LLU;

    t16 = (((x65%x66)!=x67)|x68);

    if (t16 != 6327229LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -1;
	volatile uint16_t x70 = UINT16_MAX;
	static uint16_t x72 = 80U;
	int32_t t17 = -3614649;

    t17 = (((x69%x70)!=x71)|x72);

    if (t17 != 81) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	volatile int16_t x76 = -2;

    t18 = (((x73%x74)!=x75)|x76);

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = -1LL;
	volatile int32_t x79 = 100;
	int32_t t19 = -173769;

    t19 = (((x77%x78)!=x79)|x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 2U;
	uint64_t x82 = 512LLU;
	uint32_t x83 = UINT32_MAX;
	static int64_t x84 = INT64_MIN;

    t20 = (((x81%x82)!=x83)|x84);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int32_t x86 = INT32_MIN;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

    t21 = (((x85%x86)!=x87)|x88);

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 271674U;
	int16_t x90 = -1;
	uint64_t x91 = 232782636LLU;
	int16_t x92 = INT16_MIN;

    t22 = (((x89%x90)!=x91)|x92);

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x93 = 19U;
	static int16_t x94 = -1;
	uint32_t x95 = 70171U;
	volatile int32_t x96 = -60527955;
	static volatile int32_t t23 = 132435803;

    t23 = (((x93%x94)!=x95)|x96);

    if (t23 != -60527955) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 1415298LL;
	int32_t x98 = INT32_MIN;
	int8_t x99 = -1;
	static int32_t t24 = -694;

    t24 = (((x97%x98)!=x99)|x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x102 = UINT64_MAX;
	static int32_t x103 = INT32_MIN;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 9992754185932LL;

    t25 = (((x101%x102)!=x103)|x104);

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 58U;
	int64_t x107 = INT64_MAX;
	volatile int64_t x108 = -87665593919356177LL;
	volatile int64_t t26 = 30803LL;

    t26 = (((x105%x106)!=x107)|x108);

    if (t26 != -87665593919356177LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x110 = INT64_MAX;
	static uint64_t x112 = 11982LLU;
	volatile uint64_t t27 = 803LLU;

    t27 = (((x109%x110)!=x111)|x112);

    if (t27 != 11983LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 14U;
	int16_t x114 = INT16_MIN;
	int32_t x115 = -3474995;
	int16_t x116 = INT16_MIN;

    t28 = (((x113%x114)!=x115)|x116);

    if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -8;
	int16_t x118 = -1;
	uint8_t x119 = 0U;
	int8_t x120 = INT8_MAX;
	int32_t t29 = -2045;

    t29 = (((x117%x118)!=x119)|x120);

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MAX;
	static volatile int16_t x122 = INT16_MIN;
	uint8_t x123 = 66U;
	uint64_t x124 = UINT64_MAX;

    t30 = (((x121%x122)!=x123)|x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -7008;
	int8_t x126 = 63;
	static uint32_t x127 = 158744U;
	static int32_t t31 = 127768790;

    t31 = (((x125%x126)!=x127)|x128);

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	int32_t x131 = 2796913;
	int8_t x132 = -1;

    t32 = (((x129%x130)!=x131)|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 494275692;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	volatile uint32_t x136 = 7178U;
	static uint32_t t33 = 9788U;

    t33 = (((x133%x134)!=x135)|x136);

    if (t33 != 7179U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 633124566;
	int32_t x138 = -1;
	int64_t x139 = 33316LL;
	uint32_t x140 = 482458201U;
	volatile uint32_t t34 = 701U;

    t34 = (((x137%x138)!=x139)|x140);

    if (t34 != 482458201U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x143 = INT32_MAX;
	volatile int32_t t35 = -25314787;

    t35 = (((x141%x142)!=x143)|x144);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = 15;
	int8_t x146 = -2;
	uint8_t x147 = UINT8_MAX;
	volatile uint8_t x148 = 0U;

    t36 = (((x145%x146)!=x147)|x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = INT8_MAX;
	static uint16_t x150 = UINT16_MAX;
	static volatile int16_t x151 = 79;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -1148857;

    t37 = (((x149%x150)!=x151)|x152);

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 0U;
	uint32_t x154 = 110998U;
	int64_t x155 = INT64_MAX;
	volatile int64_t x156 = -1LL;

    t38 = (((x153%x154)!=x155)|x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = -31;
	uint64_t x159 = UINT64_MAX;
	volatile uint32_t x160 = 1212465U;
	uint32_t t39 = 53626165U;

    t39 = (((x157%x158)!=x159)|x160);

    if (t39 != 1212465U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x162 = 2U;
	volatile int8_t x163 = 8;
	int32_t x164 = -1;
	volatile int32_t t40 = 7;

    t40 = (((x161%x162)!=x163)|x164);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x167 = 19450612836471063LL;
	volatile int64_t x168 = INT64_MIN;
	int64_t t41 = 74073448685411LL;

    t41 = (((x165%x166)!=x167)|x168);

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -1069;
	uint32_t x170 = 6U;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = (((x169%x170)!=x171)|x172);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = INT32_MAX;
	int32_t x174 = -1;

    t43 = (((x173%x174)!=x175)|x176);

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int8_t x178 = -14;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MAX;
	int32_t t44 = 27;

    t44 = (((x177%x178)!=x179)|x180);

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 43;
	static uint8_t x182 = 108U;
	volatile uint8_t x183 = UINT8_MAX;
	int64_t x184 = 100043864848LL;
	static int64_t t45 = 19797652018LL;

    t45 = (((x181%x182)!=x183)|x184);

    if (t45 != 100043864849LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -9;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 59U;
	int32_t t46 = -115968705;

    t46 = (((x185%x186)!=x187)|x188);

    if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = -45;
	static uint16_t x190 = 64U;
	static int16_t x191 = INT16_MAX;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t47 = -1324854;

    t47 = (((x189%x190)!=x191)|x192);

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x194 = 162317072620LLU;
	uint32_t x195 = 10624938U;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -3568165;

    t48 = (((x193%x194)!=x195)|x196);

    if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x197 = INT64_MAX;
	uint64_t x198 = 3713773332LLU;
	static int16_t x199 = INT16_MAX;
	int32_t t49 = 31875459;

    t49 = (((x197%x198)!=x199)|x200);

    if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	int16_t x203 = 4;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t50 = 55;

    t50 = (((x201%x202)!=x203)|x204);

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 265U;
	int8_t x206 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t51 = -41139881;

    t51 = (((x205%x206)!=x207)|x208);

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = INT8_MIN;
	int8_t x211 = -1;
	uint16_t x212 = 227U;
	volatile int32_t t52 = 3511;

    t52 = (((x209%x210)!=x211)|x212);

    if (t52 != 227) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	static uint8_t x214 = UINT8_MAX;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t53 = UINT32_MAX;

    t53 = (((x213%x214)!=x215)|x216);

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -107;
	static int8_t x218 = -1;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t54 = 19482643;

    t54 = (((x217%x218)!=x219)|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = 11;
	volatile int32_t x222 = -1;
	int8_t x224 = -1;

    t55 = (((x221%x222)!=x223)|x224);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	int16_t x227 = -217;
	volatile int32_t x228 = -1;
	static int32_t t56 = -308679523;

    t56 = (((x225%x226)!=x227)|x228);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x233 = 209939860U;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = UINT16_MAX;
	static volatile uint16_t x236 = 8346U;

    t57 = (((x233%x234)!=x235)|x236);

    if (t57 != 8347) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x237 = INT8_MAX;
	static int8_t x238 = -1;
	static int64_t x240 = 1201773631963154LL;

    t58 = (((x237%x238)!=x239)|x240);

    if (t58 != 1201773631963155LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x245 = 4176112905666LL;
	volatile int8_t x248 = 0;

    t59 = (((x245%x246)!=x247)|x248);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MAX;
	static volatile uint32_t x250 = 1546198298U;
	static volatile int8_t x251 = INT8_MAX;
	volatile uint64_t x252 = UINT64_MAX;
	uint64_t t60 = UINT64_MAX;

    t60 = (((x249%x250)!=x251)|x252);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = 220175U;
	uint8_t x254 = 18U;
	uint8_t x256 = UINT8_MAX;
	int32_t t61 = 88959;

    t61 = (((x253%x254)!=x255)|x256);

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x258 = INT8_MIN;
	int64_t x259 = 277750LL;

    t62 = (((x257%x258)!=x259)|x260);

    if (t62 != 383448901571LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x262 = -1;
	static uint8_t x263 = 0U;
	volatile int32_t t63 = -2;

    t63 = (((x261%x262)!=x263)|x264);

    if (t63 != 48) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x266 = INT64_MIN;
	int64_t t64 = 1150155306018465LL;

    t64 = (((x265%x266)!=x267)|x268);

    if (t64 != 115455LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x269 = INT64_MAX;
	static int64_t x270 = -13940230663LL;
	int32_t t65 = -5;

    t65 = (((x269%x270)!=x271)|x272);

    if (t65 != 42811) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	int32_t t66 = -9918489;

    t66 = (((x273%x274)!=x275)|x276);

    if (t66 != -1830123) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x277 = UINT8_MAX;
	volatile int32_t x279 = -1;
	int8_t x280 = -30;
	int32_t t67 = 182;

    t67 = (((x277%x278)!=x279)|x280);

    if (t67 != -29) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = INT16_MIN;
	uint16_t x282 = UINT16_MAX;
	int64_t x284 = 1LL;
	static volatile int64_t t68 = 3551023940307LL;

    t68 = (((x281%x282)!=x283)|x284);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = 7747732753826428LL;
	uint8_t x286 = 4U;
	int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t69 = -35;

    t69 = (((x285%x286)!=x287)|x288);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = 4248658294LL;
	static uint8_t x290 = 60U;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 15053263494899582LLU;

    t70 = (((x289%x290)!=x291)|x292);

    if (t70 != 15053263494899583LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -1;

    t71 = (((x293%x294)!=x295)|x296);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 1U;
	static int64_t x298 = INT64_MAX;
	int8_t x299 = INT8_MAX;
	int64_t x300 = 250579244LL;
	volatile int64_t t72 = -164308606LL;

    t72 = (((x297%x298)!=x299)|x300);

    if (t72 != 250579245LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MAX;
	volatile int64_t x303 = INT64_MIN;
	static volatile int32_t t73 = 419557792;

    t73 = (((x301%x302)!=x303)|x304);

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = INT8_MIN;
	static uint16_t x306 = 30251U;
	static volatile uint16_t x307 = 108U;
	uint64_t x308 = 50155867242291LLU;
	uint64_t t74 = 1LLU;

    t74 = (((x305%x306)!=x307)|x308);

    if (t74 != 50155867242291LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	static int8_t x311 = 8;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t75 = 14823088;

    t75 = (((x309%x310)!=x311)|x312);

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = 56U;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = 46;
	static uint32_t x320 = 138648496U;
	static volatile uint32_t t76 = 53U;

    t76 = (((x317%x318)!=x319)|x320);

    if (t76 != 138648497U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = 3212U;
	volatile uint64_t x324 = 1403543LLU;
	volatile uint64_t t77 = 178755LLU;

    t77 = (((x321%x322)!=x323)|x324);

    if (t77 != 1403543LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = INT32_MAX;
	int16_t x326 = -12;
	volatile int32_t x327 = INT32_MIN;
	int16_t x328 = 128;
	static int32_t t78 = -83135;

    t78 = (((x325%x326)!=x327)|x328);

    if (t78 != 129) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = UINT32_MAX;
	static int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = 730396903017239LLU;
	volatile uint64_t t79 = 5233729LLU;

    t79 = (((x329%x330)!=x331)|x332);

    if (t79 != 730396903017239LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x333 = 4488289LL;
	int64_t x335 = 43073717323940655LL;
	static int64_t x336 = -1LL;
	volatile int64_t t80 = 104382232783274554LL;

    t80 = (((x333%x334)!=x335)|x336);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x337 = INT32_MIN;
	static uint32_t x338 = 31987732U;
	volatile int8_t x339 = INT8_MIN;
	volatile int64_t x340 = INT64_MIN;
	int64_t t81 = 114622LL;

    t81 = (((x337%x338)!=x339)|x340);

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x342 = INT16_MIN;
	uint64_t x343 = 7092275114LLU;
	static int64_t x344 = -1LL;

    t82 = (((x341%x342)!=x343)|x344);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x346 = INT8_MIN;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 63825116391LL;

    t83 = (((x345%x346)!=x347)|x348);

    if (t83 != 63825116391LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x349 = UINT64_MAX;
	int16_t x350 = 8326;
	int8_t x352 = INT8_MAX;
	int32_t t84 = -7092125;

    t84 = (((x349%x350)!=x351)|x352);

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 7U;
	volatile int32_t t85 = 350044;

    t85 = (((x353%x354)!=x355)|x356);

    if (t85 != 27) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 29326U;
	uint32_t x358 = 75U;
	volatile int8_t x359 = -23;
	uint32_t x360 = 27718U;

    t86 = (((x357%x358)!=x359)|x360);

    if (t86 != 27719U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x362 = 70;
	static int32_t x363 = -1;
	int16_t x364 = -1;
	static volatile int32_t t87 = 28095;

    t87 = (((x361%x362)!=x363)|x364);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = -1LL;
	volatile int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = 24150U;
	volatile int32_t t88 = 4;

    t88 = (((x365%x366)!=x367)|x368);

    if (t88 != 24151) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x369 = -96655295LL;
	int8_t x370 = -1;
	volatile int16_t x371 = -864;
	int8_t x372 = -1;
	volatile int32_t t89 = 6;

    t89 = (((x369%x370)!=x371)|x372);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	static int8_t x375 = -8;
	uint8_t x376 = 113U;
	volatile int32_t t90 = 1;

    t90 = (((x373%x374)!=x375)|x376);

    if (t90 != 113) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = INT64_MAX;
	int32_t x379 = -1;
	int32_t x380 = INT32_MAX;
	int32_t t91 = INT32_MAX;

    t91 = (((x377%x378)!=x379)|x380);

    if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x381 = UINT32_MAX;
	static int64_t x382 = INT64_MIN;
	volatile int32_t x383 = -1;
	int64_t x384 = 1903LL;
	volatile int64_t t92 = 124101LL;

    t92 = (((x381%x382)!=x383)|x384);

    if (t92 != 1903LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x385 = 0;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 7U;
	int64_t x388 = INT64_MAX;
	volatile int64_t t93 = INT64_MAX;

    t93 = (((x385%x386)!=x387)|x388);

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	int64_t x392 = -6674783439905LL;
	static volatile int64_t t94 = -252433361288888LL;

    t94 = (((x389%x390)!=x391)|x392);

    if (t94 != -6674783439905LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = 50;
	int64_t x395 = INT64_MIN;
	static volatile int64_t x396 = INT64_MIN;
	int64_t t95 = 71421186548LL;

    t95 = (((x393%x394)!=x395)|x396);

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 6616U;

    t96 = (((x397%x398)!=x399)|x400);

    if (t96 != 6617U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = 44;
	int16_t x402 = INT16_MIN;
	static int32_t x404 = 3737704;
	int32_t t97 = 125000;

    t97 = (((x401%x402)!=x403)|x404);

    if (t97 != 3737705) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x405 = -15;
	int32_t x406 = -1;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t98 = 12;

    t98 = (((x405%x406)!=x407)|x408);

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	uint32_t x411 = 7881582U;
	static int32_t x412 = INT32_MIN;
	int32_t t99 = -135428632;

    t99 = (((x409%x410)!=x411)|x412);

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = 131;
	uint8_t x414 = 3U;
	uint8_t x415 = UINT8_MAX;
	static uint32_t x416 = UINT32_MAX;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = (((x413%x414)!=x415)|x416);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x418 = -3;
	volatile uint16_t x419 = UINT16_MAX;
	volatile int32_t t101 = 870876977;

    t101 = (((x417%x418)!=x419)|x420);

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = -1;
	static int8_t x422 = INT8_MIN;
	static uint32_t x423 = UINT32_MAX;
	static uint8_t x424 = 44U;
	static int32_t t102 = 491779910;

    t102 = (((x421%x422)!=x423)|x424);

    if (t102 != 44) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x425 = UINT64_MAX;
	volatile int16_t x426 = INT16_MAX;
	static int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t103 = 155461;

    t103 = (((x425%x426)!=x427)|x428);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x429 = -1LL;
	uint16_t x430 = 2290U;
	volatile uint16_t x431 = UINT16_MAX;
	int8_t x432 = INT8_MAX;
	int32_t t104 = -117;

    t104 = (((x429%x430)!=x431)|x432);

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x433 = 27U;
	int16_t x435 = -3;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t105 = 7773;

    t105 = (((x433%x434)!=x435)|x436);

    if (t105 != -2147483647) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x438 = 7523U;
	int32_t x439 = INT32_MIN;
	volatile uint64_t x440 = 7958289LLU;
	uint64_t t106 = 5056757439LLU;

    t106 = (((x437%x438)!=x439)|x440);

    if (t106 != 7958289LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x446 = UINT32_MAX;
	uint64_t x447 = 41156585252LLU;
	static int32_t x448 = -1;

    t107 = (((x445%x446)!=x447)|x448);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = 14834777844428LL;
	volatile int64_t x450 = INT64_MAX;
	uint16_t x452 = 11U;

    t108 = (((x449%x450)!=x451)|x452);

    if (t108 != 11) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x453 = UINT32_MAX;
	int16_t x454 = INT16_MIN;
	int8_t x455 = INT8_MIN;

    t109 = (((x453%x454)!=x455)|x456);

    if (t109 != -45) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = -1;
	volatile int8_t x458 = INT8_MIN;
	static int32_t x459 = 7706727;
	int64_t x460 = INT64_MAX;
	volatile int64_t t110 = INT64_MAX;

    t110 = (((x457%x458)!=x459)|x460);

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x461 = 9U;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = 91;
	uint16_t x464 = 2897U;
	volatile int32_t t111 = -5354;

    t111 = (((x461%x462)!=x463)|x464);

    if (t111 != 2897) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	int32_t x466 = -1;
	static volatile int16_t x467 = INT16_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t112 = -9682;

    t112 = (((x465%x466)!=x467)|x468);

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x470 = 256634403710729LL;
	int32_t x471 = INT32_MIN;

    t113 = (((x469%x470)!=x471)|x472);

    if (t113 != 3) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x473 = 138214;
	static uint64_t x476 = 3379046775108LLU;
	uint64_t t114 = 3158252599239233078LLU;

    t114 = (((x473%x474)!=x475)|x476);

    if (t114 != 3379046775109LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x478 = 26U;
	int64_t x479 = INT64_MIN;
	static volatile int16_t x480 = -19;
	volatile int32_t t115 = 189;

    t115 = (((x477%x478)!=x479)|x480);

    if (t115 != -19) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = INT8_MAX;
	uint32_t x482 = 13U;
	uint8_t x483 = 1U;
	static int32_t t116 = 26;

    t116 = (((x481%x482)!=x483)|x484);

    if (t116 != -3) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x485 = UINT64_MAX;
	uint8_t x486 = UINT8_MAX;
	int32_t t117 = 114338969;

    t117 = (((x485%x486)!=x487)|x488);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = -2138;
	int8_t x490 = INT8_MAX;
	int8_t x491 = -1;
	int8_t x492 = 1;
	int32_t t118 = -720981;

    t118 = (((x489%x490)!=x491)|x492);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x493 = INT64_MIN;
	volatile uint16_t x495 = 97U;
	uint64_t x496 = UINT64_MAX;
	uint64_t t119 = UINT64_MAX;

    t119 = (((x493%x494)!=x495)|x496);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x497 = 18;
	uint32_t x498 = 22U;
	static uint32_t x499 = 2417954U;
	int8_t x500 = 0;
	volatile int32_t t120 = 8;

    t120 = (((x497%x498)!=x499)|x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x501 = 73U;
	volatile uint64_t x502 = UINT64_MAX;
	volatile int32_t x503 = INT32_MAX;
	uint64_t x504 = UINT64_MAX;
	static volatile uint64_t t121 = UINT64_MAX;

    t121 = (((x501%x502)!=x503)|x504);

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x505 = -1;
	volatile int64_t x506 = -1LL;
	uint16_t x508 = UINT16_MAX;
	int32_t t122 = -516624;

    t122 = (((x505%x506)!=x507)|x508);

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	int32_t x510 = -1;
	volatile uint64_t x512 = 6205LLU;
	uint64_t t123 = 16509045174LLU;

    t123 = (((x509%x510)!=x511)|x512);

    if (t123 != 6205LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x515 = INT64_MIN;
	int64_t x516 = 1065162802821LL;
	volatile int64_t t124 = -1692845704236LL;

    t124 = (((x513%x514)!=x515)|x516);

    if (t124 != 1065162802821LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x517 = INT32_MAX;
	volatile int64_t x518 = INT64_MIN;
	uint32_t x519 = 196957U;
	static int32_t t125 = 786;

    t125 = (((x517%x518)!=x519)|x520);

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MIN;
	static int16_t x522 = -1;
	static uint32_t x523 = 515001U;
	int64_t t126 = -5563970855743572LL;

    t126 = (((x521%x522)!=x523)|x524);

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	volatile int8_t x526 = INT8_MAX;
	int64_t x527 = -213196LL;
	int32_t x528 = INT32_MIN;
	volatile int32_t t127 = -71;

    t127 = (((x525%x526)!=x527)|x528);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x529 = INT16_MAX;
	static int16_t x530 = -245;
	static uint8_t x531 = UINT8_MAX;
	int16_t x532 = 482;
	int32_t t128 = -13;

    t128 = (((x529%x530)!=x531)|x532);

    if (t128 != 483) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x533 = -207;
	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MIN;
	volatile int32_t t129 = 956382;

    t129 = (((x533%x534)!=x535)|x536);

    if (t129 != -2147483647) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = INT64_MIN;
	int16_t x539 = -1;
	volatile int32_t t130 = 286;

    t130 = (((x537%x538)!=x539)|x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x542 = 1;
	static int8_t x543 = -17;
	static volatile int8_t x544 = INT8_MIN;
	static int32_t t131 = 7008;

    t131 = (((x541%x542)!=x543)|x544);

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x547 = INT32_MAX;
	static uint8_t x548 = 28U;
	static int32_t t132 = -3;

    t132 = (((x545%x546)!=x547)|x548);

    if (t132 != 29) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = INT8_MIN;
	static uint8_t x550 = UINT8_MAX;
	int16_t x551 = 107;
	uint64_t x552 = 1406698340LLU;
	uint64_t t133 = 1063985743904962266LLU;

    t133 = (((x549%x550)!=x551)|x552);

    if (t133 != 1406698341LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x554 = 1LL;
	static uint8_t x555 = 36U;
	volatile int16_t x556 = -1;
	int32_t t134 = -13;

    t134 = (((x553%x554)!=x555)|x556);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x558 = -1;
	uint32_t x559 = UINT32_MAX;
	uint16_t x560 = 10U;
	int32_t t135 = 5;

    t135 = (((x557%x558)!=x559)|x560);

    if (t135 != 11) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x561 = 1939;
	uint32_t x562 = UINT32_MAX;
	volatile int64_t x563 = 22636LL;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t136 = 2546;

    t136 = (((x561%x562)!=x563)|x564);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x568 = INT8_MIN;
	int32_t t137 = 276770870;

    t137 = (((x565%x566)!=x567)|x568);

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = INT8_MIN;
	int8_t x570 = INT8_MIN;
	int8_t x571 = -1;
	volatile int32_t t138 = 12221747;

    t138 = (((x569%x570)!=x571)|x572);

    if (t138 != -1471) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x573 = UINT32_MAX;
	int16_t x575 = INT16_MAX;
	int8_t x576 = 1;

    t139 = (((x573%x574)!=x575)|x576);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x577 = 4U;
	int32_t x578 = INT32_MAX;
	volatile int64_t x579 = INT64_MIN;
	int16_t x580 = INT16_MIN;
	int32_t t140 = 11;

    t140 = (((x577%x578)!=x579)|x580);

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x581 = INT8_MIN;
	int64_t x582 = INT64_MIN;
	static uint64_t x583 = 89589LLU;
	int16_t x584 = -1;
	int32_t t141 = 0;

    t141 = (((x581%x582)!=x583)|x584);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x585 = UINT32_MAX;
	int32_t x587 = INT32_MAX;
	uint32_t t142 = 2736U;

    t142 = (((x585%x586)!=x587)|x588);

    if (t142 != 1088826567U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	static uint32_t x592 = 13972077U;
	volatile uint32_t t143 = 20U;

    t143 = (((x589%x590)!=x591)|x592);

    if (t143 != 13972077U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x593 = INT8_MIN;
	int32_t x594 = 759048652;
	uint16_t x595 = 6439U;
	int32_t x596 = INT32_MAX;

    t144 = (((x593%x594)!=x595)|x596);

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x597 = INT64_MIN;
	int32_t x598 = -2922508;
	int8_t x599 = -1;
	uint16_t x600 = 14450U;

    t145 = (((x597%x598)!=x599)|x600);

    if (t145 != 14451) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = 1U;
	uint64_t x602 = 1982960468LLU;
	int16_t x604 = INT16_MAX;
	int32_t t146 = -1872208;

    t146 = (((x601%x602)!=x603)|x604);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x605 = INT16_MAX;
	volatile int64_t x606 = INT64_MIN;
	volatile int16_t x608 = INT16_MAX;
	int32_t t147 = 46;

    t147 = (((x605%x606)!=x607)|x608);

    if (t147 != 32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = -741867765061470LL;
	int16_t x610 = INT16_MAX;
	uint64_t x611 = UINT64_MAX;
	int16_t x612 = -28;
	int32_t t148 = 3678;

    t148 = (((x609%x610)!=x611)|x612);

    if (t148 != -27) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x614 = 99LL;
	uint16_t x615 = 1U;
	uint64_t x616 = 117833169115LLU;
	volatile uint64_t t149 = 445447LLU;

    t149 = (((x613%x614)!=x615)|x616);

    if (t149 != 117833169115LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x617 = 5983U;
	static volatile uint8_t x618 = 49U;
	int64_t x619 = INT64_MIN;
	int64_t x620 = INT64_MIN;
	int64_t t150 = -256951276889746LL;

    t150 = (((x617%x618)!=x619)|x620);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x621 = 3U;
	uint8_t x622 = UINT8_MAX;
	int16_t x623 = INT16_MIN;
	volatile int32_t t151 = -3123;

    t151 = (((x621%x622)!=x623)|x624);

    if (t151 != 1751) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = 7U;
	uint8_t x626 = 7U;
	int16_t x627 = -18;
	volatile int32_t t152 = 7971420;

    t152 = (((x625%x626)!=x627)|x628);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x630 = 3U;
	static volatile int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MIN;

    t153 = (((x629%x630)!=x631)|x632);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = 563048;
	uint16_t x634 = UINT16_MAX;
	static uint8_t x635 = 1U;
	volatile int32_t t154 = 2722271;

    t154 = (((x633%x634)!=x635)|x636);

    if (t154 != 119) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x637 = -1;
	int64_t x638 = -1LL;
	int16_t x639 = INT16_MAX;
	static int32_t x640 = -711105;
	int32_t t155 = 2;

    t155 = (((x637%x638)!=x639)|x640);

    if (t155 != -711105) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x641 = 119543222920LL;
	int32_t x642 = INT32_MAX;
	int64_t x644 = -206453237420293606LL;
	int64_t t156 = 3516848243050452371LL;

    t156 = (((x641%x642)!=x643)|x644);

    if (t156 != -206453237420293605LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x645 = INT16_MAX;
	volatile int32_t x646 = -1;
	uint64_t x648 = UINT64_MAX;

    t157 = (((x645%x646)!=x647)|x648);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = INT32_MIN;
	volatile int64_t x652 = -1LL;
	int64_t t158 = 491078933669425LL;

    t158 = (((x649%x650)!=x651)|x652);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = -47526959555189LL;
	static volatile uint8_t x654 = 26U;
	uint64_t x656 = 27455701162068LLU;

    t159 = (((x653%x654)!=x655)|x656);

    if (t159 != 27455701162069LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint64_t x657 = 2661906905639LLU;
	int16_t x658 = INT16_MAX;
	uint16_t x660 = 351U;
	int32_t t160 = 80;

    t160 = (((x657%x658)!=x659)|x660);

    if (t160 != 351) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x661 = INT32_MIN;
	static int16_t x662 = -2;
	int16_t x663 = -1;
	int8_t x664 = INT8_MIN;
	int32_t t161 = -51646597;

    t161 = (((x661%x662)!=x663)|x664);

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = -6820;
	int16_t x667 = INT16_MIN;
	static int16_t x668 = INT16_MAX;
	volatile int32_t t162 = 83;

    t162 = (((x665%x666)!=x667)|x668);

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x669 = UINT64_MAX;
	int64_t x670 = -1LL;
	int32_t x671 = INT32_MIN;
	static int8_t x672 = -1;
	static volatile int32_t t163 = 3786;

    t163 = (((x669%x670)!=x671)|x672);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x673 = INT64_MIN;
	int64_t x674 = 2451793LL;
	static volatile int16_t x675 = -1;
	volatile int64_t x676 = -120419856207220436LL;

    t164 = (((x673%x674)!=x675)|x676);

    if (t164 != -120419856207220435LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = 4212430419429221763LL;
	int8_t x683 = -43;
	int8_t x684 = INT8_MAX;

    t165 = (((x681%x682)!=x683)|x684);

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = INT16_MIN;
	static volatile uint16_t x686 = 12U;
	static int16_t x688 = -1;
	volatile int32_t t166 = -1890370;

    t166 = (((x685%x686)!=x687)|x688);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x690 = INT64_MIN;
	int8_t x692 = INT8_MIN;
	volatile int32_t t167 = 21;

    t167 = (((x689%x690)!=x691)|x692);

    if (t167 != -127) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x694 = INT64_MIN;
	static uint8_t x695 = 58U;
	static int8_t x696 = -1;
	volatile int32_t t168 = -1021288;

    t168 = (((x693%x694)!=x695)|x696);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x698 = UINT32_MAX;
	int8_t x699 = INT8_MAX;

    t169 = (((x697%x698)!=x699)|x700);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x702 = -1;
	static volatile int8_t x703 = 0;
	static int32_t t170 = 2;

    t170 = (((x701%x702)!=x703)|x704);

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x705 = 1U;
	volatile int8_t x706 = -1;
	int64_t x707 = 20LL;
	int16_t x708 = INT16_MIN;
	int32_t t171 = 767311;

    t171 = (((x705%x706)!=x707)|x708);

    if (t171 != -32767) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x709 = INT16_MIN;
	int8_t x710 = -1;
	volatile int16_t x711 = 173;
	static int16_t x712 = -685;
	int32_t t172 = 3;

    t172 = (((x709%x710)!=x711)|x712);

    if (t172 != -685) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x713 = 64;
	int64_t x715 = INT64_MIN;
	static volatile int8_t x716 = -29;
	volatile int32_t t173 = -10;

    t173 = (((x713%x714)!=x715)|x716);

    if (t173 != -29) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = 22LL;
	int32_t x718 = -14689;
	static int64_t x720 = 48165972817956LL;
	static int64_t t174 = 2297LL;

    t174 = (((x717%x718)!=x719)|x720);

    if (t174 != 48165972817957LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x721 = UINT8_MAX;
	volatile uint16_t x723 = UINT16_MAX;
	static volatile int32_t t175 = -1785209;

    t175 = (((x721%x722)!=x723)|x724);

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x725 = 15730068U;
	int64_t x726 = -130554997LL;
	int8_t x727 = 5;
	int8_t x728 = 9;

    t176 = (((x725%x726)!=x727)|x728);

    if (t176 != 9) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x730 = 2357;
	int16_t x731 = INT16_MIN;
	static int64_t x732 = INT64_MIN;

    t177 = (((x729%x730)!=x731)|x732);

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x734 = -781LL;
	int16_t x735 = 1;
	int64_t x736 = INT64_MAX;
	int64_t t178 = INT64_MAX;

    t178 = (((x733%x734)!=x735)|x736);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = INT64_MIN;
	int8_t x738 = INT8_MIN;
	static volatile int64_t x739 = INT64_MIN;
	static int16_t x740 = INT16_MAX;
	int32_t t179 = -225;

    t179 = (((x737%x738)!=x739)|x740);

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x742 = -1;
	static int64_t x744 = 24035203006083210LL;
	static volatile int64_t t180 = -90633599534LL;

    t180 = (((x741%x742)!=x743)|x744);

    if (t180 != 24035203006083211LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x745 = INT64_MIN;
	volatile uint16_t x746 = 61U;
	volatile int16_t x747 = -1;
	int16_t x748 = INT16_MIN;

    t181 = (((x745%x746)!=x747)|x748);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x749 = 1U;
	int8_t x750 = 16;
	uint64_t x751 = 3485LLU;
	static int16_t x752 = INT16_MIN;
	int32_t t182 = -181404;

    t182 = (((x749%x750)!=x751)|x752);

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x753 = INT8_MIN;
	int8_t x754 = INT8_MAX;
	int8_t x755 = 17;
	volatile int16_t x756 = INT16_MIN;
	volatile int32_t t183 = 54;

    t183 = (((x753%x754)!=x755)|x756);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x757 = 7;
	volatile uint16_t x758 = 10778U;

    t184 = (((x757%x758)!=x759)|x760);

    if (t184 != 7LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x761 = INT32_MAX;
	uint16_t x762 = 379U;
	int8_t x763 = 28;
	int32_t x764 = INT32_MIN;
	int32_t t185 = -2480061;

    t185 = (((x761%x762)!=x763)|x764);

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x766 = -1550152528100LL;
	int16_t x767 = INT16_MAX;
	int8_t x768 = INT8_MIN;

    t186 = (((x765%x766)!=x767)|x768);

    if (t186 != -127) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x769 = 1787U;
	static uint16_t x770 = UINT16_MAX;
	int64_t x771 = INT64_MAX;
	uint16_t x772 = UINT16_MAX;
	int32_t t187 = -16523659;

    t187 = (((x769%x770)!=x771)|x772);

    if (t187 != 65535) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x773 = -25;
	uint32_t x775 = 561057U;
	int8_t x776 = -1;
	static int32_t t188 = -412;

    t188 = (((x773%x774)!=x775)|x776);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x777 = INT16_MIN;
	uint8_t x778 = 71U;
	volatile int16_t x779 = INT16_MIN;
	static volatile uint64_t x780 = 244425967284710LLU;
	volatile uint64_t t189 = 188685LLU;

    t189 = (((x777%x778)!=x779)|x780);

    if (t189 != 244425967284711LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x782 = UINT16_MAX;
	int16_t x783 = -1;
	volatile uint64_t t190 = 7555241270361220LLU;

    t190 = (((x781%x782)!=x783)|x784);

    if (t190 != 968498862969823749LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = 13;
	int16_t x786 = INT16_MIN;
	uint8_t x787 = UINT8_MAX;
	volatile int32_t x788 = -436771477;
	int32_t t191 = -1;

    t191 = (((x785%x786)!=x787)|x788);

    if (t191 != -436771477) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x789 = 0U;
	int32_t x790 = INT32_MIN;
	volatile int32_t x791 = INT32_MAX;
	int32_t x792 = -25015549;
	int32_t t192 = 4977;

    t192 = (((x789%x790)!=x791)|x792);

    if (t192 != -25015549) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x794 = 29105LLU;
	int16_t x796 = -1;
	int32_t t193 = 1023133014;

    t193 = (((x793%x794)!=x795)|x796);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x797 = 2945U;
	int32_t x798 = 172;
	int32_t x799 = 437243765;
	static volatile int8_t x800 = 0;
	volatile int32_t t194 = 6774064;

    t194 = (((x797%x798)!=x799)|x800);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x801 = -5607;
	static int64_t x802 = INT64_MIN;
	volatile int16_t x803 = -1;
	int32_t x804 = INT32_MIN;
	volatile int32_t t195 = -977509;

    t195 = (((x801%x802)!=x803)|x804);

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x805 = 437194883;
	volatile int8_t x806 = INT8_MIN;
	volatile int32_t t196 = -185512;

    t196 = (((x805%x806)!=x807)|x808);

    if (t196 != 23) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x810 = 25;
	int32_t t197 = -5004;

    t197 = (((x809%x810)!=x811)|x812);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x813 = 3U;
	volatile int64_t x815 = -3LL;
	int8_t x816 = INT8_MIN;

    t198 = (((x813%x814)!=x815)|x816);

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x817 = INT32_MIN;
	uint16_t x818 = 22287U;
	uint16_t x819 = 11127U;
	static volatile int32_t t199 = 3880;

    t199 = (((x817%x818)!=x819)|x820);

    if (t199 != -127) { NG(); } else { ; }
	
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

