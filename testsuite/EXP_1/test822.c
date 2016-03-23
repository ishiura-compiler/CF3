
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

int32_t x9 = 4;
uint16_t x12 = UINT16_MAX;
static int64_t x14 = INT64_MIN;
static volatile uint16_t x16 = 7741U;
static volatile int64_t x22 = -141766258111LL;
volatile int16_t x25 = 1901;
volatile int16_t x28 = 2255;
volatile int32_t t7 = -16157133;
static int32_t x51 = INT32_MIN;
int8_t x52 = INT8_MIN;
static int64_t x53 = 29408522LL;
int64_t x55 = INT64_MIN;
uint64_t x63 = 0LLU;
int16_t x64 = -1;
static int64_t x65 = INT64_MIN;
uint16_t x66 = 1U;
uint8_t x70 = 14U;
int32_t t13 = -7433;
uint32_t x75 = UINT32_MAX;
uint64_t x76 = UINT64_MAX;
uint32_t x79 = 265071215U;
int32_t t15 = 74;
volatile int16_t x81 = -4;
uint32_t x83 = 28U;
int16_t x87 = -14;
static uint32_t x88 = 198U;
static int64_t x93 = 0LL;
int64_t x109 = -1LL;
static int16_t x112 = INT16_MIN;
uint32_t x115 = UINT32_MAX;
uint8_t x120 = 31U;
volatile uint16_t x124 = UINT16_MAX;
int16_t x125 = 74;
static int64_t x126 = -553524289186261LL;
volatile int32_t t27 = 8926439;
volatile int32_t t29 = 11;
int8_t x144 = INT8_MAX;
uint8_t x146 = 2U;
volatile int32_t t31 = 44384321;
uint16_t x152 = 1168U;
static uint32_t x153 = 66U;
volatile int16_t x154 = -1;
volatile int32_t t34 = -1;
uint64_t x165 = 594782209262320LLU;
int8_t x166 = 1;
static int32_t t36 = -236462810;
volatile int32_t x172 = -1;
static uint64_t x177 = 3482LLU;
int64_t x178 = INT64_MIN;
volatile uint8_t x180 = UINT8_MAX;
volatile int32_t t40 = -205315353;
static int16_t x185 = -70;
uint16_t x191 = 2U;
int32_t x194 = 778823106;
int64_t x196 = -768803LL;
int64_t x198 = INT64_MAX;
volatile int32_t x201 = -1;
static int8_t x206 = 46;
int32_t t46 = 988;
int16_t x209 = INT16_MAX;
static uint32_t x211 = 219169U;
static int32_t x212 = -1;
volatile int64_t x218 = INT64_MAX;
volatile int64_t x227 = INT64_MAX;
static int8_t x230 = INT8_MAX;
volatile uint32_t x232 = 64U;
int64_t x234 = -3806185293092018LL;
int32_t x236 = INT32_MAX;
static int32_t t54 = -6927465;
volatile uint8_t x243 = 21U;
int32_t t55 = -7520;
volatile int32_t x245 = -1;
volatile int64_t x246 = -41663LL;
static int8_t x256 = INT8_MIN;
int16_t x258 = 34;
static uint32_t x277 = 6U;
int64_t x280 = -1LL;
uint64_t x284 = 2141579036LLU;
static int32_t t66 = 199168;
int32_t t67 = 99737817;
int32_t x304 = -5923136;
int64_t x311 = -1LL;
int64_t x317 = INT64_MIN;
uint64_t x318 = 119628112LLU;
volatile int32_t x323 = -754770;
volatile uint64_t x325 = UINT64_MAX;
volatile int32_t t74 = 3;
int64_t x329 = 1170LL;
uint16_t x330 = 24226U;
volatile int8_t x333 = 0;
volatile int32_t t76 = 0;
uint32_t x339 = 3U;
uint8_t x340 = UINT8_MAX;
uint64_t x343 = UINT64_MAX;
static int64_t x344 = INT64_MIN;
volatile uint8_t x345 = UINT8_MAX;
volatile int32_t x351 = -1;
static volatile uint8_t x352 = UINT8_MAX;
uint8_t x358 = 2U;
int8_t x359 = INT8_MAX;
int32_t x362 = -1779615;
int32_t t83 = 18505932;
uint8_t x367 = UINT8_MAX;
uint64_t x369 = UINT64_MAX;
uint64_t x376 = UINT64_MAX;
uint16_t x377 = UINT16_MAX;
uint8_t x382 = 1U;
volatile int32_t t90 = -229;
int8_t x404 = INT8_MIN;
int32_t x405 = 2327;
uint64_t x407 = 187736LLU;
static volatile uint32_t x412 = 996578U;
uint16_t x417 = 21U;
int16_t x421 = INT16_MAX;
volatile int16_t x422 = -1;
int32_t t101 = -6920938;
static uint16_t x442 = 12U;
volatile int64_t x446 = 253945LL;
uint8_t x455 = 21U;
uint32_t x461 = 583479U;
static int32_t t107 = -413563573;
int8_t x468 = 21;
uint16_t x477 = UINT16_MAX;
uint64_t x490 = UINT64_MAX;
int32_t t114 = -609780;
int32_t x496 = INT32_MAX;
static int8_t x505 = INT8_MIN;
static int32_t x508 = 0;
int8_t x515 = INT8_MAX;
static volatile int16_t x520 = 14890;
int64_t x526 = INT64_MAX;
volatile int32_t t123 = 36618;
int32_t x529 = INT32_MIN;
static volatile int32_t t126 = 672;
static int8_t x544 = 1;
int8_t x550 = -2;
int64_t x551 = -1LL;
volatile int64_t x553 = INT64_MAX;
volatile int64_t x554 = INT64_MIN;
volatile int8_t x555 = -1;
static uint8_t x557 = 3U;
static int64_t x558 = INT64_MIN;
static int8_t x560 = -1;
int32_t x561 = INT32_MIN;
volatile int32_t t133 = 0;
int8_t x572 = INT8_MIN;
int16_t x575 = 10;
volatile int32_t t135 = 7199;
int32_t x579 = INT32_MIN;
int32_t t136 = -80;
volatile int16_t x585 = -7703;
static int8_t x599 = INT8_MIN;
uint16_t x611 = 88U;
volatile int32_t t143 = -3181;
int16_t x619 = INT16_MIN;
volatile int64_t x627 = 31LL;
static int16_t x629 = INT16_MIN;
int32_t x634 = INT32_MIN;
static uint64_t x635 = 528925LLU;
static int32_t t148 = 347;
static int32_t t149 = -5732;
int64_t x653 = INT64_MIN;
static uint8_t x658 = 27U;
int32_t t151 = -56982392;
int8_t x664 = INT8_MIN;
static int32_t t152 = 3;
uint8_t x676 = 14U;
int16_t x684 = INT16_MIN;
int32_t x687 = INT32_MAX;
int64_t x690 = INT64_MIN;
uint16_t x691 = 401U;
static int16_t x694 = -1;
static int16_t x695 = INT16_MIN;
int16_t x704 = INT16_MAX;
uint64_t x711 = 22452789788LLU;
int8_t x713 = -4;
volatile uint32_t x717 = UINT32_MAX;
int32_t t164 = 30;
static uint64_t x724 = 2963119150663845013LLU;
int8_t x729 = -1;
int16_t x733 = INT16_MIN;
int16_t x745 = INT16_MIN;
static uint64_t x747 = 2061032717LLU;
int16_t x762 = 34;
int8_t x767 = INT8_MIN;
static uint8_t x772 = 2U;
static uint8_t x774 = 108U;
int64_t x778 = INT64_MIN;
int32_t t179 = 175;
static int32_t x786 = -1;
uint64_t x788 = 371LLU;
uint64_t x789 = 143665305497095933LLU;
int8_t x790 = -28;
int16_t x802 = INT16_MIN;
int8_t x811 = INT8_MAX;
static int16_t x814 = -1;
int8_t x828 = 0;
static int64_t x829 = -237063LL;
static int16_t x832 = INT16_MIN;
volatile int8_t x834 = INT8_MIN;
static int32_t t188 = -3913214;
static uint32_t x837 = 219789890U;
int8_t x840 = INT8_MIN;
static int64_t x843 = -1LL;
volatile int32_t x846 = -1;
int8_t x848 = -1;
uint32_t x849 = 58217915U;
volatile uint32_t x852 = UINT32_MAX;
int64_t x856 = INT64_MIN;
int64_t x859 = -1LL;
uint64_t x860 = UINT64_MAX;
int64_t x865 = INT64_MAX;
int32_t t198 = 5;


void f0(void) {
    	volatile int16_t x5 = INT16_MIN;
	volatile int8_t x6 = 16;
	uint64_t x7 = 2661913LLU;
	static uint8_t x8 = UINT8_MAX;
	static int32_t t0 = 3136421;

    t0 = (((x5%x6)*x7)<=x8);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x10 = INT16_MIN;
	int8_t x11 = 5;
	static int32_t t1 = 1589790;

    t1 = (((x9%x10)*x11)<=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x13 = INT32_MIN;
	int32_t x15 = INT32_MIN;
	volatile int32_t t2 = -7100644;

    t2 = (((x13%x14)*x15)<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 6740327U;
	volatile uint8_t x18 = UINT8_MAX;
	int16_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t3 = -8421375;

    t3 = (((x17%x18)*x19)<=x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x21 = UINT16_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = -911917LL;
	int32_t t4 = 1392;

    t4 = (((x21%x22)*x23)<=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = 26;
	static int16_t x27 = -14629;
	volatile int32_t t5 = -8;

    t5 = (((x25%x26)*x27)<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 139;
	volatile int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t6 = -89618;

    t6 = (((x29%x30)*x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x33 = 31727LLU;
	int64_t x34 = 6267423879LL;
	int8_t x35 = 22;
	uint16_t x36 = 192U;

    t7 = (((x33%x34)*x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	static int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t8 = -2992750;

    t8 = (((x45%x46)*x47)<=x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x49 = 4097081718LLU;
	static uint64_t x50 = UINT64_MAX;
	int32_t t9 = 916;

    t9 = (((x49%x50)*x51)<=x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x54 = 1;
	uint8_t x56 = 21U;
	volatile int32_t t10 = -23;

    t10 = (((x53%x54)*x55)<=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = -57;
	int8_t x62 = -22;
	volatile int32_t t11 = -1;

    t11 = (((x61%x62)*x63)<=x64);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x67 = INT8_MIN;
	volatile int64_t x68 = 440837411142LL;
	volatile int32_t t12 = 2;

    t12 = (((x65%x66)*x67)<=x68);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -1289855625096LL;
	uint16_t x71 = 13U;
	int32_t x72 = -1;

    t13 = (((x69%x70)*x71)<=x72);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x73 = -1LL;
	static uint32_t x74 = 591U;
	volatile int32_t t14 = 16171;

    t14 = (((x73%x74)*x75)<=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = 8489LL;
	volatile uint8_t x78 = 5U;
	int8_t x80 = INT8_MAX;

    t15 = (((x77%x78)*x79)<=x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x82 = INT8_MIN;
	uint16_t x84 = 15214U;
	static volatile int32_t t16 = 1127;

    t16 = (((x81%x82)*x83)<=x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x85 = INT64_MIN;
	int32_t x86 = -28;
	int32_t t17 = -459899980;

    t17 = (((x85%x86)*x87)<=x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = -773516;
	int8_t x90 = -1;
	int16_t x91 = -4;
	uint32_t x92 = UINT32_MAX;
	int32_t t18 = -13385173;

    t18 = (((x89%x90)*x91)<=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int32_t x96 = -486789;
	volatile int32_t t19 = -118687467;

    t19 = (((x93%x94)*x95)<=x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 448U;
	volatile int8_t x102 = -1;
	static volatile int64_t x103 = INT64_MIN;
	uint8_t x104 = 5U;
	int32_t t20 = 337176;

    t20 = (((x101%x102)*x103)<=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x105 = UINT16_MAX;
	volatile int8_t x106 = -15;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = -1;
	volatile int32_t t21 = 251;

    t21 = (((x105%x106)*x107)<=x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x110 = 76125117U;
	int16_t x111 = -1;
	int32_t t22 = -1;

    t22 = (((x109%x110)*x111)<=x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x113 = 1;
	volatile int32_t x114 = INT32_MIN;
	volatile int32_t x116 = -1;
	volatile int32_t t23 = -18;

    t23 = (((x113%x114)*x115)<=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x117 = INT64_MAX;
	volatile int64_t x118 = INT64_MAX;
	int64_t x119 = -3450709107LL;
	int32_t t24 = 2426;

    t24 = (((x117%x118)*x119)<=x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MAX;
	uint8_t x122 = 35U;
	static int16_t x123 = INT16_MAX;
	volatile int32_t t25 = 0;

    t25 = (((x121%x122)*x123)<=x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x127 = 429U;
	int16_t x128 = -272;
	static volatile int32_t t26 = 10233504;

    t26 = (((x125%x126)*x127)<=x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x129 = -1;
	int64_t x130 = 922LL;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;

    t27 = (((x129%x130)*x131)<=x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MAX;
	uint64_t x134 = 1LLU;
	uint32_t x135 = UINT32_MAX;
	static uint64_t x136 = 456434666769095LLU;
	volatile int32_t t28 = 33299917;

    t28 = (((x133%x134)*x135)<=x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = INT8_MIN;
	volatile int16_t x138 = -1;
	uint16_t x139 = 28U;
	int32_t x140 = INT32_MIN;

    t29 = (((x137%x138)*x139)<=x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x141 = 0U;
	int32_t x142 = -1;
	static int8_t x143 = INT8_MAX;
	volatile int32_t t30 = -32;

    t30 = (((x141%x142)*x143)<=x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x145 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	int16_t x148 = -1;

    t31 = (((x145%x146)*x147)<=x148);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = INT64_MIN;
	static int8_t x150 = -1;
	uint16_t x151 = 5279U;
	volatile int32_t t32 = 1062918177;

    t32 = (((x149%x150)*x151)<=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -248745548;
	int32_t t33 = -231043764;

    t33 = (((x153%x154)*x155)<=x156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x157 = -182;
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = 2176304673873LLU;
	int16_t x160 = INT16_MIN;

    t34 = (((x157%x158)*x159)<=x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x161 = 2U;
	uint16_t x162 = 4U;
	uint16_t x163 = 24U;
	static int8_t x164 = -1;
	int32_t t35 = -27;

    t35 = (((x161%x162)*x163)<=x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x167 = -1;
	int32_t x168 = INT32_MIN;

    t36 = (((x165%x166)*x167)<=x168);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = INT32_MIN;
	volatile int8_t x170 = INT8_MIN;
	static int8_t x171 = -2;
	int32_t t37 = 8737238;

    t37 = (((x169%x170)*x171)<=x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x173 = 99626LL;
	static volatile int8_t x174 = INT8_MAX;
	int8_t x175 = INT8_MAX;
	static int64_t x176 = 12834943968LL;
	volatile int32_t t38 = 1;

    t38 = (((x173%x174)*x175)<=x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x179 = -1;
	volatile int32_t t39 = -1325;

    t39 = (((x177%x178)*x179)<=x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x181 = -3;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 3U;

    t40 = (((x181%x182)*x183)<=x184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x186 = 1U;
	int16_t x187 = -2;
	volatile int16_t x188 = -297;
	int32_t t41 = 12260172;

    t41 = (((x185%x186)*x187)<=x188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = -4280958LL;
	uint8_t x190 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	volatile int32_t t42 = -708842;

    t42 = (((x189%x190)*x191)<=x192);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = -259929428475084LL;
	int16_t x195 = -1;
	int32_t t43 = 32299323;

    t43 = (((x193%x194)*x195)<=x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = INT16_MAX;
	uint16_t x199 = 468U;
	static uint8_t x200 = UINT8_MAX;
	volatile int32_t t44 = -13843416;

    t44 = (((x197%x198)*x199)<=x200);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x202 = UINT16_MAX;
	volatile int8_t x203 = -1;
	int8_t x204 = INT8_MIN;
	volatile int32_t t45 = 1;

    t45 = (((x201%x202)*x203)<=x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = INT64_MAX;
	int16_t x207 = -8;
	int64_t x208 = -11LL;

    t46 = (((x205%x206)*x207)<=x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x210 = 1044U;
	int32_t t47 = -2453;

    t47 = (((x209%x210)*x211)<=x212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x213 = 96902;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	int8_t x216 = -39;
	volatile int32_t t48 = 157;

    t48 = (((x213%x214)*x215)<=x216);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x217 = 4646U;
	int64_t x219 = -59435370LL;
	int64_t x220 = INT64_MAX;
	int32_t t49 = -1;

    t49 = (((x217%x218)*x219)<=x220);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x221 = 21U;
	volatile int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	int16_t x224 = INT16_MIN;
	volatile int32_t t50 = 1;

    t50 = (((x221%x222)*x223)<=x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = -1;
	int8_t x226 = 12;
	volatile uint8_t x228 = 41U;
	int32_t t51 = -965497;

    t51 = (((x225%x226)*x227)<=x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x229 = 681LLU;
	static uint8_t x231 = 11U;
	static volatile int32_t t52 = -12280315;

    t52 = (((x229%x230)*x231)<=x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	int32_t t53 = 109;

    t53 = (((x233%x234)*x235)<=x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x237 = INT8_MAX;
	uint8_t x238 = 3U;
	volatile uint32_t x239 = 12585U;
	int8_t x240 = -17;

    t54 = (((x237%x238)*x239)<=x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x241 = UINT64_MAX;
	int32_t x242 = 9;
	static uint32_t x244 = UINT32_MAX;

    t55 = (((x241%x242)*x243)<=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x247 = INT32_MIN;
	uint64_t x248 = 32907671LLU;
	int32_t t56 = 66;

    t56 = (((x245%x246)*x247)<=x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x249 = UINT32_MAX;
	int8_t x250 = 3;
	int8_t x251 = -1;
	volatile int64_t x252 = 2383LL;
	int32_t t57 = 96;

    t57 = (((x249%x250)*x251)<=x252);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x253 = -1;
	static int8_t x254 = -1;
	int64_t x255 = -1LL;
	static int32_t t58 = -9500;

    t58 = (((x253%x254)*x255)<=x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x257 = INT16_MAX;
	uint64_t x259 = 20LLU;
	int8_t x260 = 7;
	volatile int32_t t59 = -1;

    t59 = (((x257%x258)*x259)<=x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x261 = INT8_MIN;
	volatile uint16_t x262 = 83U;
	uint64_t x263 = 29407393LLU;
	static int16_t x264 = -1;
	volatile int32_t t60 = -91448963;

    t60 = (((x261%x262)*x263)<=x264);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = 442;
	static int64_t x270 = INT64_MIN;
	uint32_t x271 = UINT32_MAX;
	volatile int16_t x272 = INT16_MIN;
	int32_t t61 = 2728;

    t61 = (((x269%x270)*x271)<=x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x273 = UINT32_MAX;
	volatile uint32_t x274 = 25835U;
	static volatile int16_t x275 = -1;
	volatile int16_t x276 = -3601;
	int32_t t62 = -13514;

    t62 = (((x273%x274)*x275)<=x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x278 = -1;
	volatile uint16_t x279 = 227U;
	volatile int32_t t63 = -899171;

    t63 = (((x277%x278)*x279)<=x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x281 = -432;
	int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MAX;
	static int32_t t64 = 331;

    t64 = (((x281%x282)*x283)<=x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x289 = 45U;
	int64_t x290 = -317951152695244806LL;
	uint8_t x291 = 1U;
	int8_t x292 = -1;
	int32_t t65 = -873475;

    t65 = (((x289%x290)*x291)<=x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x293 = 16U;
	static uint16_t x294 = 28U;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 22LLU;

    t66 = (((x293%x294)*x295)<=x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 53U;
	int64_t x299 = -93342LL;
	int16_t x300 = INT16_MIN;

    t67 = (((x297%x298)*x299)<=x300);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x301 = UINT8_MAX;
	static int16_t x302 = INT16_MIN;
	uint64_t x303 = UINT64_MAX;
	int32_t t68 = -4;

    t68 = (((x301%x302)*x303)<=x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x305 = -1;
	volatile int32_t x306 = -144;
	static int8_t x307 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	int32_t t69 = 410157;

    t69 = (((x305%x306)*x307)<=x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = INT8_MAX;
	static uint64_t x310 = UINT64_MAX;
	volatile uint16_t x312 = 3U;
	volatile int32_t t70 = -26259;

    t70 = (((x309%x310)*x311)<=x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x313 = 955805;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 1U;
	static uint64_t x316 = 2233317281252547LLU;
	int32_t t71 = 1;

    t71 = (((x313%x314)*x315)<=x316);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x319 = 6;
	int8_t x320 = INT8_MIN;
	volatile int32_t t72 = -34;

    t72 = (((x317%x318)*x319)<=x320);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MAX;
	int32_t x324 = -1;
	int32_t t73 = 1420;

    t73 = (((x321%x322)*x323)<=x324);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x326 = -7;
	uint64_t x327 = 33558741059643LLU;
	uint32_t x328 = 165U;

    t74 = (((x325%x326)*x327)<=x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x331 = UINT8_MAX;
	int32_t x332 = -3;
	static int32_t t75 = 29533062;

    t75 = (((x329%x330)*x331)<=x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x334 = 509848LL;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;

    t76 = (((x333%x334)*x335)<=x336);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x337 = 80LLU;
	int16_t x338 = INT16_MIN;
	int32_t t77 = -30845;

    t77 = (((x337%x338)*x339)<=x340);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x341 = UINT32_MAX;
	static int8_t x342 = 3;
	int32_t t78 = 5;

    t78 = (((x341%x342)*x343)<=x344);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x346 = 61LL;
	uint32_t x347 = 244264U;
	static volatile uint8_t x348 = 39U;
	volatile int32_t t79 = 30;

    t79 = (((x345%x346)*x347)<=x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x349 = 6U;
	int64_t x350 = -1LL;
	static int32_t t80 = -1649;

    t80 = (((x349%x350)*x351)<=x352);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x353 = UINT8_MAX;
	int16_t x354 = 14822;
	int64_t x355 = 6513735LL;
	volatile uint32_t x356 = 151112U;
	int32_t t81 = -3;

    t81 = (((x353%x354)*x355)<=x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x357 = INT32_MIN;
	volatile int8_t x360 = -1;
	volatile int32_t t82 = -827638283;

    t82 = (((x357%x358)*x359)<=x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x361 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = -6359752283607594LL;

    t83 = (((x361%x362)*x363)<=x364);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MIN;
	static int16_t x366 = -1;
	volatile uint32_t x368 = 1285877740U;
	static volatile int32_t t84 = 20679;

    t84 = (((x365%x366)*x367)<=x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x370 = INT16_MIN;
	volatile int16_t x371 = -1;
	static int32_t x372 = -1;
	volatile int32_t t85 = -6;

    t85 = (((x369%x370)*x371)<=x372);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 4U;
	int32_t x375 = -5050515;
	volatile int32_t t86 = 88977025;

    t86 = (((x373%x374)*x375)<=x376);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x378 = 13U;
	static int16_t x379 = INT16_MIN;
	int8_t x380 = 1;
	volatile int32_t t87 = -194;

    t87 = (((x377%x378)*x379)<=x380);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x381 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	static uint64_t x384 = UINT64_MAX;
	int32_t t88 = 12;

    t88 = (((x381%x382)*x383)<=x384);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x389 = -32684513533971859LL;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -3;
	uint16_t x392 = UINT16_MAX;
	int32_t t89 = 1;

    t89 = (((x389%x390)*x391)<=x392);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint32_t x394 = UINT32_MAX;
	static int16_t x395 = -1;
	int8_t x396 = INT8_MAX;

    t90 = (((x393%x394)*x395)<=x396);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = -1;
	int16_t x398 = INT16_MAX;
	uint8_t x399 = 15U;
	static uint64_t x400 = UINT64_MAX;
	int32_t t91 = 221005;

    t91 = (((x397%x398)*x399)<=x400);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x401 = 0U;
	uint16_t x402 = 3421U;
	volatile uint8_t x403 = UINT8_MAX;
	static int32_t t92 = 118121;

    t92 = (((x401%x402)*x403)<=x404);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x406 = INT64_MAX;
	uint8_t x408 = 92U;
	volatile int32_t t93 = 0;

    t93 = (((x405%x406)*x407)<=x408);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x409 = 27U;
	static uint64_t x410 = 564916003536LLU;
	int16_t x411 = INT16_MIN;
	int32_t t94 = -47;

    t94 = (((x409%x410)*x411)<=x412);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = -1;
	uint64_t x414 = 122484446723275222LLU;
	uint8_t x415 = 44U;
	uint64_t x416 = 1034532905768179LLU;
	volatile int32_t t95 = -65533;

    t95 = (((x413%x414)*x415)<=x416);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x418 = INT32_MIN;
	uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t96 = 140;

    t96 = (((x417%x418)*x419)<=x420);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x423 = INT16_MIN;
	int8_t x424 = 0;
	volatile int32_t t97 = 2814788;

    t97 = (((x421%x422)*x423)<=x424);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x425 = 1;
	int64_t x426 = INT64_MAX;
	int64_t x427 = -1LL;
	int64_t x428 = INT64_MIN;
	volatile int32_t t98 = 14;

    t98 = (((x425%x426)*x427)<=x428);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x429 = 165193418U;
	int8_t x430 = INT8_MIN;
	static int32_t x431 = -1;
	volatile int32_t x432 = INT32_MAX;
	volatile int32_t t99 = -720176349;

    t99 = (((x429%x430)*x431)<=x432);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x433 = INT16_MIN;
	uint8_t x434 = 1U;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = 12U;
	volatile int32_t t100 = 10329;

    t100 = (((x433%x434)*x435)<=x436);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x437 = UINT32_MAX;
	static uint64_t x438 = UINT64_MAX;
	int64_t x439 = 47486LL;
	int16_t x440 = INT16_MIN;

    t101 = (((x437%x438)*x439)<=x440);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x441 = INT32_MIN;
	static int8_t x443 = INT8_MIN;
	int8_t x444 = -55;
	int32_t t102 = 9;

    t102 = (((x441%x442)*x443)<=x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x445 = UINT64_MAX;
	uint8_t x447 = 60U;
	int32_t x448 = -1;
	volatile int32_t t103 = -4;

    t103 = (((x445%x446)*x447)<=x448);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x449 = -1;
	uint8_t x450 = 2U;
	volatile int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	static volatile int32_t t104 = 2181804;

    t104 = (((x449%x450)*x451)<=x452);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x453 = INT64_MAX;
	int16_t x454 = INT16_MIN;
	static volatile int16_t x456 = -427;
	static volatile int32_t t105 = 53519;

    t105 = (((x453%x454)*x455)<=x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x457 = -1;
	uint64_t x458 = 598099811243LLU;
	uint16_t x459 = 44U;
	static int64_t x460 = INT64_MIN;
	int32_t t106 = -7292033;

    t106 = (((x457%x458)*x459)<=x460);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x462 = 25766U;
	static uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 24317U;

    t107 = (((x461%x462)*x463)<=x464);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x465 = INT64_MIN;
	int16_t x466 = -2835;
	int16_t x467 = 1;
	int32_t t108 = -1;

    t108 = (((x465%x466)*x467)<=x468);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x469 = 583LLU;
	volatile int64_t x470 = INT64_MIN;
	volatile int64_t x471 = -11LL;
	static int64_t x472 = -12463845001LL;
	volatile int32_t t109 = 51557;

    t109 = (((x469%x470)*x471)<=x472);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x473 = -51;
	static uint8_t x474 = 1U;
	int32_t x475 = -1;
	int8_t x476 = INT8_MAX;
	volatile int32_t t110 = -13676;

    t110 = (((x473%x474)*x475)<=x476);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x478 = -1;
	int64_t x479 = -6806957LL;
	int8_t x480 = INT8_MIN;
	int32_t t111 = -2106;

    t111 = (((x477%x478)*x479)<=x480);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x481 = 110516809LLU;
	uint16_t x482 = 12U;
	volatile int64_t x483 = INT64_MIN;
	uint16_t x484 = 21973U;
	volatile int32_t t112 = -345;

    t112 = (((x481%x482)*x483)<=x484);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	static int64_t x487 = INT64_MAX;
	static int64_t x488 = INT64_MIN;
	int32_t t113 = 5557983;

    t113 = (((x485%x486)*x487)<=x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x489 = INT32_MAX;
	int32_t x491 = INT32_MIN;
	static int32_t x492 = INT32_MAX;

    t114 = (((x489%x490)*x491)<=x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x493 = 13;
	int32_t x494 = INT32_MIN;
	uint64_t x495 = 15716282164LLU;
	int32_t t115 = 28720;

    t115 = (((x493%x494)*x495)<=x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x497 = -1;
	int32_t x498 = INT32_MIN;
	int64_t x499 = -2765474LL;
	volatile int64_t x500 = -1LL;
	volatile int32_t t116 = 270178;

    t116 = (((x497%x498)*x499)<=x500);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x501 = 0LLU;
	static volatile int64_t x502 = INT64_MAX;
	uint32_t x503 = 250U;
	int8_t x504 = 6;
	static volatile int32_t t117 = -429657;

    t117 = (((x501%x502)*x503)<=x504);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x506 = -1;
	uint32_t x507 = 59044544U;
	static int32_t t118 = -6678;

    t118 = (((x505%x506)*x507)<=x508);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x509 = 1568;
	static int8_t x510 = -1;
	int8_t x511 = -1;
	uint32_t x512 = 634125U;
	volatile int32_t t119 = 9;

    t119 = (((x509%x510)*x511)<=x512);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x513 = 3112LL;
	volatile uint64_t x514 = 8406304878191LLU;
	uint16_t x516 = 3811U;
	static int32_t t120 = 488580;

    t120 = (((x513%x514)*x515)<=x516);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x517 = 4U;
	int64_t x518 = -1LL;
	int8_t x519 = -1;
	volatile int32_t t121 = 556959;

    t121 = (((x517%x518)*x519)<=x520);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x521 = -2445790061130LL;
	uint16_t x522 = 4038U;
	uint32_t x523 = 8301U;
	int8_t x524 = INT8_MAX;
	int32_t t122 = -812559;

    t122 = (((x521%x522)*x523)<=x524);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = INT8_MIN;
	static int32_t x527 = -26542450;
	uint64_t x528 = 3164693145489638868LLU;

    t123 = (((x525%x526)*x527)<=x528);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x530 = INT16_MAX;
	int64_t x531 = -1565698895160556LL;
	uint8_t x532 = UINT8_MAX;
	static int32_t t124 = 1358;

    t124 = (((x529%x530)*x531)<=x532);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x533 = INT64_MIN;
	uint8_t x534 = 6U;
	int8_t x535 = INT8_MIN;
	int32_t x536 = INT32_MAX;
	static int32_t t125 = -226536405;

    t125 = (((x533%x534)*x535)<=x536);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x537 = -1;
	static int16_t x538 = -1;
	volatile uint32_t x539 = 187321796U;
	int32_t x540 = -1;

    t126 = (((x537%x538)*x539)<=x540);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x541 = INT64_MIN;
	volatile int8_t x542 = INT8_MIN;
	int16_t x543 = 2;
	volatile int32_t t127 = -914645714;

    t127 = (((x541%x542)*x543)<=x544);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x545 = -12814LL;
	static int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	int64_t x548 = -1LL;
	int32_t t128 = 790102;

    t128 = (((x545%x546)*x547)<=x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x549 = UINT64_MAX;
	int64_t x552 = INT64_MIN;
	volatile int32_t t129 = -3;

    t129 = (((x549%x550)*x551)<=x552);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x556 = INT8_MAX;
	int32_t t130 = 12978304;

    t130 = (((x553%x554)*x555)<=x556);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x559 = 15U;
	static int32_t t131 = 6;

    t131 = (((x557%x558)*x559)<=x560);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x562 = 66U;
	uint32_t x563 = 53319532U;
	static volatile int32_t x564 = INT32_MAX;
	int32_t t132 = -247954176;

    t132 = (((x561%x562)*x563)<=x564);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x565 = -1;
	static int8_t x566 = 14;
	volatile int8_t x567 = -4;
	int32_t x568 = INT32_MIN;

    t133 = (((x565%x566)*x567)<=x568);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x569 = INT8_MIN;
	static int64_t x570 = -1000102220067100LL;
	static volatile int8_t x571 = INT8_MIN;
	int32_t t134 = -3;

    t134 = (((x569%x570)*x571)<=x572);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MIN;
	static int16_t x576 = INT16_MIN;

    t135 = (((x573%x574)*x575)<=x576);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x577 = 0LLU;
	uint32_t x578 = 27691060U;
	uint8_t x580 = 1U;

    t136 = (((x577%x578)*x579)<=x580);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x581 = 0LLU;
	static int32_t x582 = -1;
	uint16_t x583 = UINT16_MAX;
	int32_t x584 = INT32_MAX;
	int32_t t137 = 7400;

    t137 = (((x581%x582)*x583)<=x584);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x586 = INT32_MAX;
	static int64_t x587 = -1LL;
	static int16_t x588 = -28;
	int32_t t138 = 1177;

    t138 = (((x585%x586)*x587)<=x588);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MIN;
	uint32_t x591 = 59803069U;
	int8_t x592 = INT8_MAX;
	static volatile int32_t t139 = -396998921;

    t139 = (((x589%x590)*x591)<=x592);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x593 = -1;
	uint64_t x594 = 1440207043908931LLU;
	uint32_t x595 = 138332U;
	static int32_t x596 = -1;
	volatile int32_t t140 = 166273358;

    t140 = (((x593%x594)*x595)<=x596);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x597 = 1767965;
	int16_t x598 = 573;
	uint64_t x600 = 468LLU;
	static int32_t t141 = 306;

    t141 = (((x597%x598)*x599)<=x600);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x601 = INT16_MIN;
	static uint64_t x602 = 2879982606447805LLU;
	int64_t x603 = 1090243900062086LL;
	static int64_t x604 = 23876583428LL;
	static volatile int32_t t142 = 12921400;

    t142 = (((x601%x602)*x603)<=x604);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x609 = UINT32_MAX;
	static uint32_t x610 = UINT32_MAX;
	volatile int64_t x612 = INT64_MIN;

    t143 = (((x609%x610)*x611)<=x612);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x613 = 1;
	int8_t x614 = -26;
	uint64_t x615 = UINT64_MAX;
	uint16_t x616 = UINT16_MAX;
	volatile int32_t t144 = -4055;

    t144 = (((x613%x614)*x615)<=x616);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x617 = INT16_MAX;
	static int16_t x618 = INT16_MAX;
	int64_t x620 = -1LL;
	volatile int32_t t145 = -23270;

    t145 = (((x617%x618)*x619)<=x620);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint16_t x625 = UINT16_MAX;
	volatile int8_t x626 = -63;
	int32_t x628 = INT32_MAX;
	volatile int32_t t146 = -1021682179;

    t146 = (((x625%x626)*x627)<=x628);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x630 = 4U;
	uint8_t x631 = UINT8_MAX;
	int32_t x632 = INT32_MIN;
	static volatile int32_t t147 = 1;

    t147 = (((x629%x630)*x631)<=x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x633 = 18U;
	static int16_t x636 = INT16_MAX;

    t148 = (((x633%x634)*x635)<=x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x641 = INT32_MIN;
	uint32_t x642 = 347U;
	uint8_t x643 = 4U;
	static int8_t x644 = 1;

    t149 = (((x641%x642)*x643)<=x644);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x654 = 7554LLU;
	static int64_t x655 = INT64_MIN;
	volatile uint16_t x656 = UINT16_MAX;
	int32_t t150 = -465;

    t150 = (((x653%x654)*x655)<=x656);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x657 = 923537LL;
	int8_t x659 = INT8_MAX;
	int8_t x660 = INT8_MIN;

    t151 = (((x657%x658)*x659)<=x660);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x661 = -3;
	int8_t x662 = INT8_MIN;
	volatile uint64_t x663 = 31568192089847LLU;

    t152 = (((x661%x662)*x663)<=x664);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = 83U;
	int16_t x670 = -3;
	static int8_t x671 = 21;
	volatile int64_t x672 = INT64_MIN;
	int32_t t153 = -4742752;

    t153 = (((x669%x670)*x671)<=x672);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x673 = -1LL;
	uint32_t x674 = 5507117U;
	int64_t x675 = 2324692522364LL;
	volatile int32_t t154 = -883949065;

    t154 = (((x673%x674)*x675)<=x676);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x677 = 140;
	static int16_t x678 = INT16_MIN;
	static volatile int8_t x679 = INT8_MIN;
	volatile int32_t x680 = -1;
	int32_t t155 = 8640;

    t155 = (((x677%x678)*x679)<=x680);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x681 = -1;
	int64_t x682 = -49961558674693LL;
	volatile uint32_t x683 = 91065U;
	int32_t t156 = -56;

    t156 = (((x681%x682)*x683)<=x684);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x685 = 194317819U;
	uint32_t x686 = 48261166U;
	volatile int32_t x688 = INT32_MAX;
	static volatile int32_t t157 = -1190924;

    t157 = (((x685%x686)*x687)<=x688);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x689 = 3U;
	volatile uint32_t x692 = 180U;
	volatile int32_t t158 = -108;

    t158 = (((x689%x690)*x691)<=x692);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x693 = 45LLU;
	int16_t x696 = 24;
	int32_t t159 = -90056;

    t159 = (((x693%x694)*x695)<=x696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	volatile int16_t x703 = -8;
	int32_t t160 = -66663330;

    t160 = (((x701%x702)*x703)<=x704);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x705 = 260879928LLU;
	int8_t x706 = INT8_MIN;
	static int64_t x707 = INT64_MIN;
	volatile int32_t x708 = INT32_MAX;
	int32_t t161 = 515206;

    t161 = (((x705%x706)*x707)<=x708);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = -1;
	static int16_t x710 = -1100;
	uint16_t x712 = 197U;
	static int32_t t162 = 4708;

    t162 = (((x709%x710)*x711)<=x712);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x714 = 1U;
	uint32_t x715 = 22331735U;
	uint64_t x716 = 8692014806651LLU;
	int32_t t163 = 510378;

    t163 = (((x713%x714)*x715)<=x716);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x718 = 1;
	static int8_t x719 = -1;
	int8_t x720 = INT8_MIN;

    t164 = (((x717%x718)*x719)<=x720);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x721 = INT8_MAX;
	uint32_t x722 = 2475U;
	int32_t x723 = 28;
	volatile int32_t t165 = 3408276;

    t165 = (((x721%x722)*x723)<=x724);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x725 = INT32_MIN;
	static int64_t x726 = -1LL;
	static int32_t x727 = INT32_MIN;
	int64_t x728 = INT64_MIN;
	static volatile int32_t t166 = 165531;

    t166 = (((x725%x726)*x727)<=x728);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x730 = -13779;
	int16_t x731 = INT16_MAX;
	int8_t x732 = INT8_MIN;
	volatile int32_t t167 = -1242541;

    t167 = (((x729%x730)*x731)<=x732);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x734 = UINT64_MAX;
	static uint8_t x735 = 8U;
	volatile int32_t x736 = -15914;
	int32_t t168 = -223900221;

    t168 = (((x733%x734)*x735)<=x736);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x737 = INT32_MAX;
	int16_t x738 = INT16_MAX;
	uint16_t x739 = 13U;
	int32_t x740 = INT32_MIN;
	volatile int32_t t169 = 42799725;

    t169 = (((x737%x738)*x739)<=x740);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x741 = INT8_MAX;
	static int16_t x742 = -1;
	volatile uint32_t x743 = UINT32_MAX;
	static int64_t x744 = -904360926278691LL;
	volatile int32_t t170 = -14705;

    t170 = (((x741%x742)*x743)<=x744);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x746 = UINT32_MAX;
	int8_t x748 = 0;
	int32_t t171 = 102439971;

    t171 = (((x745%x746)*x747)<=x748);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = -1;
	static int8_t x750 = -25;
	uint8_t x751 = 0U;
	static int16_t x752 = INT16_MAX;
	static volatile int32_t t172 = -76873284;

    t172 = (((x749%x750)*x751)<=x752);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x753 = INT64_MIN;
	volatile int64_t x754 = -1LL;
	uint16_t x755 = UINT16_MAX;
	int64_t x756 = -8065095611327656LL;
	int32_t t173 = 63018;

    t173 = (((x753%x754)*x755)<=x756);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x757 = -1LL;
	int64_t x758 = INT64_MAX;
	int64_t x759 = -1LL;
	uint64_t x760 = 1084705928822186424LLU;
	static volatile int32_t t174 = -9688;

    t174 = (((x757%x758)*x759)<=x760);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x761 = 3417066861087767518LLU;
	static volatile uint16_t x763 = 2263U;
	int16_t x764 = 0;
	int32_t t175 = 26718;

    t175 = (((x761%x762)*x763)<=x764);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x765 = 74U;
	int64_t x766 = INT64_MAX;
	int32_t x768 = -7814487;
	int32_t t176 = -11880;

    t176 = (((x765%x766)*x767)<=x768);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x769 = -1;
	static int32_t x770 = INT32_MAX;
	int32_t x771 = INT32_MAX;
	int32_t t177 = -21;

    t177 = (((x769%x770)*x771)<=x772);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x773 = -1;
	static uint32_t x775 = 180142391U;
	volatile uint32_t x776 = 9822U;
	int32_t t178 = 3710569;

    t178 = (((x773%x774)*x775)<=x776);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x777 = INT64_MIN;
	int16_t x779 = -1;
	int64_t x780 = 77LL;

    t179 = (((x777%x778)*x779)<=x780);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x785 = -1;
	int8_t x787 = 1;
	volatile int32_t t180 = 22911;

    t180 = (((x785%x786)*x787)<=x788);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x791 = 1U;
	volatile int64_t x792 = -245281143497263LL;
	volatile int32_t t181 = 3842;

    t181 = (((x789%x790)*x791)<=x792);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x797 = 946412147U;
	int32_t x798 = INT32_MAX;
	int8_t x799 = -7;
	static uint8_t x800 = 25U;
	int32_t t182 = -140;

    t182 = (((x797%x798)*x799)<=x800);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x801 = INT8_MIN;
	int8_t x803 = 8;
	int16_t x804 = INT16_MAX;
	volatile int32_t t183 = -8940;

    t183 = (((x801%x802)*x803)<=x804);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x809 = 0U;
	int32_t x810 = 15991;
	static int32_t x812 = 240671665;
	int32_t t184 = 3;

    t184 = (((x809%x810)*x811)<=x812);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x813 = INT8_MAX;
	uint64_t x815 = 3576252104456598LLU;
	int16_t x816 = -529;
	int32_t t185 = 0;

    t185 = (((x813%x814)*x815)<=x816);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x825 = INT32_MAX;
	static int16_t x826 = INT16_MAX;
	static int64_t x827 = -438370111602184113LL;
	int32_t t186 = 13198125;

    t186 = (((x825%x826)*x827)<=x828);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x830 = -8;
	int8_t x831 = INT8_MIN;
	volatile int32_t t187 = -212510;

    t187 = (((x829%x830)*x831)<=x832);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x833 = 250669U;
	int16_t x835 = 5105;
	int8_t x836 = -51;

    t188 = (((x833%x834)*x835)<=x836);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x838 = INT64_MAX;
	volatile uint16_t x839 = UINT16_MAX;
	volatile int32_t t189 = -4149;

    t189 = (((x837%x838)*x839)<=x840);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x841 = INT16_MIN;
	int64_t x842 = -1LL;
	uint32_t x844 = 1U;
	static volatile int32_t t190 = -43694278;

    t190 = (((x841%x842)*x843)<=x844);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	static int64_t x847 = 6790180LL;
	static volatile int32_t t191 = 257653;

    t191 = (((x845%x846)*x847)<=x848);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x850 = 481305U;
	volatile int8_t x851 = INT8_MIN;
	int32_t t192 = -671;

    t192 = (((x849%x850)*x851)<=x852);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x853 = 11072030550484LL;
	volatile int16_t x854 = -1;
	int16_t x855 = INT16_MIN;
	int32_t t193 = 35710919;

    t193 = (((x853%x854)*x855)<=x856);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x857 = INT64_MAX;
	static volatile int8_t x858 = -1;
	volatile int32_t t194 = 1635597;

    t194 = (((x857%x858)*x859)<=x860);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x861 = INT64_MIN;
	int64_t x862 = INT64_MAX;
	int16_t x863 = INT16_MIN;
	int8_t x864 = INT8_MIN;
	volatile int32_t t195 = -29;

    t195 = (((x861%x862)*x863)<=x864);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x866 = 1;
	int32_t x867 = -48160303;
	volatile int64_t x868 = INT64_MAX;
	static volatile int32_t t196 = 26;

    t196 = (((x865%x866)*x867)<=x868);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x869 = -1;
	uint16_t x870 = 9U;
	int8_t x871 = INT8_MIN;
	uint32_t x872 = 321U;
	volatile int32_t t197 = 857404639;

    t197 = (((x869%x870)*x871)<=x872);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x873 = -1032620821;
	int64_t x874 = -2752119236021986797LL;
	uint8_t x875 = 30U;
	uint16_t x876 = UINT16_MAX;

    t198 = (((x873%x874)*x875)<=x876);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x881 = 200953752382738361LL;
	uint64_t x882 = UINT64_MAX;
	static int16_t x883 = INT16_MIN;
	int16_t x884 = -26;
	volatile int32_t t199 = 458;

    t199 = (((x881%x882)*x883)<=x884);

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

