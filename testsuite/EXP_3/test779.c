
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

static int32_t x2 = INT32_MIN;
uint16_t x12 = 3300U;
uint64_t x24 = 6471681LLU;
volatile int32_t t5 = 61168882;
int64_t x27 = 877593LL;
int32_t x33 = INT32_MIN;
uint16_t x34 = 4U;
volatile uint64_t x37 = 17061LLU;
int64_t x40 = INT64_MAX;
int16_t x41 = -7832;
int32_t x42 = -32;
int8_t x44 = -1;
int16_t x47 = INT16_MIN;
static int32_t t12 = 205;
int32_t t15 = 11781;
static int32_t x74 = 16889;
static int32_t t19 = -5011;
static uint16_t x85 = 1830U;
uint16_t x87 = 0U;
int32_t t20 = -829133;
static int32_t x95 = INT32_MAX;
uint16_t x99 = 23182U;
int16_t x101 = INT16_MIN;
static volatile int64_t x105 = INT64_MIN;
volatile int16_t x106 = INT16_MIN;
int32_t t25 = -69987;
static int32_t t26 = -422;
volatile int16_t x116 = 2004;
int8_t x120 = INT8_MAX;
volatile int32_t t28 = 1;
uint64_t x121 = UINT64_MAX;
static int32_t t29 = -2724706;
int32_t x126 = 13;
volatile uint8_t x127 = UINT8_MAX;
int32_t x129 = 15279;
int16_t x131 = INT16_MIN;
volatile int16_t x137 = INT16_MIN;
int32_t t33 = -81570930;
static int32_t x142 = -1;
uint64_t x145 = 976158LLU;
int8_t x147 = INT8_MIN;
volatile int32_t t35 = -61858;
static uint16_t x149 = 14115U;
uint32_t x156 = UINT32_MAX;
int8_t x157 = INT8_MIN;
uint64_t x158 = 6200751017141762244LLU;
static volatile int32_t x160 = INT32_MIN;
int16_t x162 = INT16_MAX;
uint16_t x165 = 212U;
int8_t x176 = INT8_MIN;
volatile int32_t t42 = 27;
static volatile uint32_t x178 = UINT32_MAX;
volatile int32_t t43 = -6;
static int64_t x183 = INT64_MAX;
int32_t t44 = 198612;
int32_t x188 = INT32_MIN;
int64_t x200 = INT64_MIN;
uint32_t x201 = 14U;
uint8_t x203 = 20U;
int32_t t49 = -1;
int64_t x218 = -24686574780858LL;
volatile int64_t x225 = 449150LL;
static int8_t x233 = 42;
int8_t x234 = INT8_MIN;
int16_t x235 = -1;
volatile int32_t t57 = 25003;
int32_t t59 = -3247;
uint64_t x248 = 3LLU;
static int32_t t60 = 1;
uint32_t x255 = 6570057U;
int32_t x256 = INT32_MIN;
static volatile int64_t x258 = 1789242LL;
int16_t x264 = -1;
int32_t t64 = -170079;
int64_t x267 = 10940449367LL;
int8_t x275 = INT8_MAX;
uint16_t x279 = 58U;
int64_t x280 = 17989644374214LL;
int64_t x282 = INT64_MAX;
static int32_t t70 = 800;
static int64_t x293 = INT64_MIN;
int32_t x303 = -1;
volatile int64_t x315 = INT64_MIN;
static int8_t x319 = INT8_MIN;
static int32_t x323 = -1;
static int8_t x325 = 0;
uint32_t x326 = 445894U;
volatile int8_t x329 = INT8_MIN;
int16_t x330 = -22;
volatile uint8_t x332 = UINT8_MAX;
int16_t x346 = INT16_MIN;
int16_t x349 = -1;
int64_t x356 = 6LL;
static int16_t x364 = -1;
static int8_t x369 = 5;
uint8_t x382 = 82U;
int64_t x384 = -1LL;
int32_t t93 = 21377624;
static int8_t x392 = INT8_MAX;
uint64_t x399 = UINT64_MAX;
int64_t x403 = -1LL;
int16_t x404 = 186;
int16_t x406 = INT16_MIN;
int64_t x408 = INT64_MIN;
int32_t x410 = INT32_MAX;
int32_t t99 = 8580;
static int32_t t100 = -1;
int16_t x420 = INT16_MIN;
int16_t x421 = -1;
int16_t x422 = -117;
int16_t x423 = 78;
volatile int32_t t103 = 260609;
int32_t x436 = -2;
static int32_t t106 = 24;
volatile int8_t x462 = -1;
int8_t x474 = INT8_MAX;
volatile int16_t x485 = INT16_MIN;
volatile int16_t x486 = INT16_MIN;
int32_t t116 = -229;
uint16_t x491 = 10U;
int16_t x498 = -1;
uint16_t x500 = UINT16_MAX;
int64_t x503 = INT64_MAX;
static int32_t t120 = -15782988;
volatile uint8_t x508 = 2U;
volatile uint64_t x511 = 881712927251389524LLU;
static int32_t t122 = 4;
int16_t x519 = -2;
static int64_t x523 = 149104431LL;
static int16_t x524 = -1;
volatile int8_t x538 = -1;
static int64_t x542 = -1LL;
int32_t t130 = 43752;
uint8_t x545 = 15U;
volatile uint8_t x546 = UINT8_MAX;
int64_t x552 = INT64_MAX;
int64_t x553 = INT64_MAX;
int64_t x554 = INT64_MIN;
uint32_t x558 = 178U;
int8_t x559 = -1;
uint32_t x576 = 19489U;
uint32_t x577 = 25U;
static uint32_t x578 = 40U;
uint32_t x579 = 55U;
int64_t x581 = 9977655557955881LL;
volatile uint64_t x582 = UINT64_MAX;
int16_t x583 = INT16_MIN;
volatile int32_t t140 = -757;
int8_t x597 = -1;
volatile int16_t x600 = INT16_MIN;
static int16_t x605 = INT16_MIN;
int64_t x607 = -1LL;
uint32_t x615 = 1U;
volatile int16_t x619 = INT16_MAX;
volatile int32_t t148 = 62700;
int8_t x625 = 35;
int32_t x626 = -1;
uint16_t x628 = 14U;
int32_t t150 = -52;
int16_t x635 = INT16_MIN;
int16_t x639 = INT16_MIN;
uint64_t x646 = 25781636007LLU;
static volatile int32_t t154 = 1;
volatile int32_t t156 = -604536076;
uint32_t x664 = 59514U;
int64_t x667 = INT64_MIN;
volatile int64_t x677 = INT64_MAX;
int16_t x685 = INT16_MIN;
int32_t x690 = -1;
int16_t x694 = INT16_MAX;
static int32_t x702 = INT32_MIN;
volatile int32_t t168 = -5;
int64_t x710 = INT64_MAX;
int16_t x712 = INT16_MAX;
int64_t x734 = -1LL;
uint16_t x739 = UINT16_MAX;
static volatile int32_t x741 = INT32_MIN;
int16_t x747 = -1;
static int8_t x748 = 21;
int32_t t178 = 159;
uint32_t x753 = UINT32_MAX;
static int16_t x761 = -364;
volatile int8_t x769 = INT8_MIN;
int32_t t184 = 6157705;
int16_t x773 = INT16_MIN;
static int32_t t187 = 12217790;
static int64_t x791 = INT64_MAX;
int64_t x793 = INT64_MIN;
int32_t x795 = INT32_MIN;
volatile uint8_t x801 = UINT8_MAX;
volatile int32_t x804 = -1;
volatile int32_t t191 = -14;
volatile uint16_t x809 = UINT16_MAX;
int8_t x812 = 10;
int32_t t193 = -2265072;
int32_t t194 = -1;
static int16_t x817 = INT16_MIN;
int16_t x822 = -1;
volatile int32_t t196 = -13518;
int8_t x834 = INT8_MAX;


void f0(void) {
    	int8_t x1 = -1;
	volatile int32_t x3 = INT32_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -79;

    t0 = ((x1^x2)>(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	static uint64_t x6 = 170LLU;
	static int16_t x7 = INT16_MAX;
	static uint32_t x8 = UINT32_MAX;
	int32_t t1 = -996673899;

    t1 = ((x5^x6)>(x7/x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -1LL;
	uint64_t x10 = UINT64_MAX;
	uint8_t x11 = 0U;
	static int32_t t2 = 3374;

    t2 = ((x9^x10)>(x11/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int8_t x14 = 33;
	static int16_t x15 = -1;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -2068;

    t3 = ((x13^x14)>(x15/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 4484;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = -179617180;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 35;

    t4 = ((x17^x18)>(x19/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 17U;
	static volatile int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MAX;

    t5 = ((x21^x22)>(x23/x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile int16_t x26 = -1;
	volatile uint32_t x28 = 48U;
	volatile int32_t t6 = -465;

    t6 = ((x25^x26)>(x27/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x35 = 2U;
	int64_t x36 = INT64_MIN;
	int32_t t7 = 31964;

    t7 = ((x33^x34)>(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x38 = INT8_MIN;
	static int8_t x39 = 11;
	int32_t t8 = -92857;

    t8 = ((x37^x38)>(x39/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x43 = INT8_MIN;
	volatile int32_t t9 = 14801219;

    t9 = ((x41^x42)>(x43/x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	static int8_t x46 = INT8_MIN;
	volatile int8_t x48 = -1;
	volatile int32_t t10 = -130714636;

    t10 = ((x45^x46)>(x47/x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MAX;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MAX;
	static volatile int32_t t11 = 4513;

    t11 = ((x49^x50)>(x51/x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -79LL;
	static int8_t x54 = INT8_MIN;
	static uint64_t x55 = 1562LLU;
	volatile int32_t x56 = -1;

    t12 = ((x53^x54)>(x55/x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x57 = INT16_MAX;
	static uint8_t x58 = 0U;
	uint16_t x59 = 26U;
	uint64_t x60 = 990680LLU;
	int32_t t13 = -1;

    t13 = ((x57^x58)>(x59/x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	int64_t x63 = 2897183513030481130LL;
	static volatile uint8_t x64 = UINT8_MAX;
	int32_t t14 = -447;

    t14 = ((x61^x62)>(x63/x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = INT64_MIN;

    t15 = ((x65^x66)>(x67/x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = INT64_MAX;
	volatile uint16_t x70 = 3U;
	static int8_t x71 = -1;
	volatile int32_t x72 = -1;
	int32_t t16 = 8;

    t16 = ((x69^x70)>(x71/x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x73 = 0U;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MAX;
	static int32_t t17 = 201424366;

    t17 = ((x73^x74)>(x75/x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x77 = INT32_MIN;
	uint8_t x78 = 1U;
	static int16_t x79 = 2597;
	static uint32_t x80 = 4410228U;
	int32_t t18 = 2136668;

    t18 = ((x77^x78)>(x79/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MAX;
	int16_t x82 = -1;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = INT16_MIN;

    t19 = ((x81^x82)>(x83/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = INT64_MAX;
	int32_t x88 = -32130;

    t20 = ((x85^x86)>(x87/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -1;
	int64_t x90 = INT64_MAX;
	int32_t x91 = INT32_MAX;
	int8_t x92 = -1;
	int32_t t21 = 1569;

    t21 = ((x89^x90)>(x91/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MAX;
	static volatile int8_t x94 = -40;
	int32_t x96 = 7214;
	static volatile int32_t t22 = -12818198;

    t22 = ((x93^x94)>(x95/x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MAX;
	int16_t x98 = -1;
	int16_t x100 = INT16_MAX;
	int32_t t23 = -17426392;

    t23 = ((x97^x98)>(x99/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x102 = 241236990U;
	int16_t x103 = 5;
	int8_t x104 = INT8_MAX;
	int32_t t24 = -46991788;

    t24 = ((x101^x102)>(x103/x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x107 = INT16_MAX;
	volatile int32_t x108 = INT32_MAX;

    t25 = ((x105^x106)>(x107/x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = -289286;
	volatile int64_t x110 = INT64_MIN;
	static int64_t x111 = 42592920709LL;
	int16_t x112 = -184;

    t26 = ((x109^x110)>(x111/x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = INT64_MIN;
	int64_t x114 = -4240302707199868977LL;
	int64_t x115 = INT64_MAX;
	volatile int32_t t27 = -5715200;

    t27 = ((x113^x114)>(x115/x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 248U;
	volatile int32_t x118 = INT32_MAX;
	uint16_t x119 = 13U;

    t28 = ((x117^x118)>(x119/x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x122 = INT32_MIN;
	static uint32_t x123 = 1U;
	uint8_t x124 = UINT8_MAX;

    t29 = ((x121^x122)>(x123/x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = -1;
	int32_t x128 = -943626;
	volatile int32_t t30 = -36641198;

    t30 = ((x125^x126)>(x127/x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x130 = 6151U;
	static uint8_t x132 = 33U;
	volatile int32_t t31 = -934821686;

    t31 = ((x129^x130)>(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = -1LL;
	static int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	uint64_t x136 = UINT64_MAX;
	int32_t t32 = 13192204;

    t32 = ((x133^x134)>(x135/x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x138 = -1;
	uint8_t x139 = 1U;
	int16_t x140 = INT16_MIN;

    t33 = ((x137^x138)>(x139/x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -1;
	int64_t x143 = -975028377675719LL;
	int32_t x144 = 481114075;
	static volatile int32_t t34 = 9419660;

    t34 = ((x141^x142)>(x143/x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x146 = 0;
	uint64_t x148 = UINT64_MAX;

    t35 = ((x145^x146)>(x147/x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x150 = UINT64_MAX;
	uint16_t x151 = UINT16_MAX;
	uint8_t x152 = 17U;
	int32_t t36 = 101107;

    t36 = ((x149^x150)>(x151/x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	static volatile uint16_t x154 = 7U;
	uint16_t x155 = 2U;
	int32_t t37 = -10;

    t37 = ((x153^x154)>(x155/x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x159 = INT32_MIN;
	volatile int32_t t38 = 139639;

    t38 = ((x157^x158)>(x159/x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = INT64_MIN;
	uint64_t x163 = 121601043073656LLU;
	static int32_t x164 = -1;
	int32_t t39 = 69469140;

    t39 = ((x161^x162)>(x163/x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x166 = INT64_MIN;
	static int32_t x167 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;
	static int32_t t40 = -402299;

    t40 = ((x165^x166)>(x167/x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x169 = 7282U;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = UINT8_MAX;
	uint32_t x172 = UINT32_MAX;
	static int32_t t41 = 13161708;

    t41 = ((x169^x170)>(x171/x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = -29;
	uint16_t x175 = UINT16_MAX;

    t42 = ((x173^x174)>(x175/x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = 2;
	static volatile int32_t x179 = INT32_MIN;
	static int64_t x180 = INT64_MIN;

    t43 = ((x177^x178)>(x179/x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = 1951688U;
	uint16_t x184 = UINT16_MAX;

    t44 = ((x181^x182)>(x183/x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = INT32_MIN;
	uint16_t x186 = 163U;
	static int8_t x187 = INT8_MAX;
	volatile int32_t t45 = -3626418;

    t45 = ((x185^x186)>(x187/x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MAX;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t46 = -2526171;

    t46 = ((x189^x190)>(x191/x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = -1LL;
	int16_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	uint64_t x196 = UINT64_MAX;
	int32_t t47 = -87080;

    t47 = ((x193^x194)>(x195/x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 5717U;
	static volatile uint8_t x198 = 34U;
	uint16_t x199 = UINT16_MAX;
	int32_t t48 = 14535;

    t48 = ((x197^x198)>(x199/x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x202 = INT32_MAX;
	int64_t x204 = -886LL;

    t49 = ((x201^x202)>(x203/x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 49U;
	int16_t x206 = -1;
	int32_t x207 = -1648211;
	int64_t x208 = -1LL;
	volatile int32_t t50 = 969191;

    t50 = ((x205^x206)>(x207/x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 15U;
	int32_t x210 = 1625360;
	volatile int16_t x211 = INT16_MAX;
	static volatile int8_t x212 = -1;
	int32_t t51 = 218823767;

    t51 = ((x209^x210)>(x211/x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x214 = INT16_MAX;
	static volatile int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t52 = -1;

    t52 = ((x213^x214)>(x215/x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x217 = UINT8_MAX;
	int32_t x219 = -1;
	int8_t x220 = INT8_MAX;
	int32_t t53 = 166435262;

    t53 = ((x217^x218)>(x219/x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x221 = 1U;
	uint8_t x222 = UINT8_MAX;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = -1LL;
	static volatile int32_t t54 = -1116182;

    t54 = ((x221^x222)>(x223/x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x226 = 717335078U;
	uint8_t x227 = 2U;
	volatile uint64_t x228 = 14768639LLU;
	int32_t t55 = -91996;

    t55 = ((x225^x226)>(x227/x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = 12LLU;
	int8_t x230 = 3;
	static int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MAX;
	int32_t t56 = -1286;

    t56 = ((x229^x230)>(x231/x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x236 = INT8_MAX;

    t57 = ((x233^x234)>(x235/x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = 3784900LL;
	uint8_t x238 = 10U;
	volatile int64_t x239 = 214967565886001752LL;
	uint16_t x240 = 193U;
	volatile int32_t t58 = -852905213;

    t58 = ((x237^x238)>(x239/x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MIN;
	int32_t x242 = INT32_MIN;
	static int16_t x243 = -1;
	static int16_t x244 = INT16_MAX;

    t59 = ((x241^x242)>(x243/x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x245 = 121006LLU;
	int16_t x246 = INT16_MAX;
	volatile int8_t x247 = INT8_MAX;

    t60 = ((x245^x246)>(x247/x248));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x249 = -1;
	static uint64_t x250 = 577803LLU;
	int32_t x251 = INT32_MAX;
	volatile int32_t x252 = INT32_MAX;
	int32_t t61 = 2;

    t61 = ((x249^x250)>(x251/x252));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MAX;
	uint16_t x254 = 19618U;
	int32_t t62 = 103413;

    t62 = ((x253^x254)>(x255/x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x257 = -650650780241533886LL;
	int32_t x259 = -75989;
	uint8_t x260 = 42U;
	volatile int32_t t63 = 195673;

    t63 = ((x257^x258)>(x259/x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = 95LLU;
	int64_t x262 = -3499292LL;
	volatile uint8_t x263 = UINT8_MAX;

    t64 = ((x261^x262)>(x263/x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	static uint32_t x266 = 29454U;
	static int64_t x268 = -1LL;
	volatile int32_t t65 = 221221;

    t65 = ((x265^x266)>(x267/x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = -1;
	volatile int8_t x270 = 1;
	int8_t x271 = 3;
	int8_t x272 = 26;
	volatile int32_t t66 = 404;

    t66 = ((x269^x270)>(x271/x272));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x273 = -15;
	int64_t x274 = INT64_MIN;
	int32_t x276 = INT32_MIN;
	static volatile int32_t t67 = -1424;

    t67 = ((x273^x274)>(x275/x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x277 = 8U;
	static uint16_t x278 = 12U;
	volatile int32_t t68 = 7023751;

    t68 = ((x277^x278)>(x279/x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x281 = 3558U;
	int32_t x283 = 89761;
	uint8_t x284 = UINT8_MAX;
	static int32_t t69 = -4708;

    t69 = ((x281^x282)>(x283/x284));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = 74U;
	int64_t x286 = -1172397LL;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;

    t70 = ((x285^x286)>(x287/x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x289 = INT64_MIN;
	uint8_t x290 = 17U;
	static int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t71 = 233176;

    t71 = ((x289^x290)>(x291/x292));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x294 = INT16_MAX;
	int32_t x295 = 110474;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t72 = 0;

    t72 = ((x293^x294)>(x295/x296));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x297 = UINT8_MAX;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 5299U;
	int64_t x300 = INT64_MIN;
	volatile int32_t t73 = 2843203;

    t73 = ((x297^x298)>(x299/x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MIN;
	volatile int32_t x302 = INT32_MAX;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t74 = 7151442;

    t74 = ((x301^x302)>(x303/x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -1;
	static int32_t x306 = 950876393;
	int8_t x307 = 1;
	uint16_t x308 = 481U;
	static int32_t t75 = 21985;

    t75 = ((x305^x306)>(x307/x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile int16_t x311 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	int32_t t76 = -51;

    t76 = ((x309^x310)>(x311/x312));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x313 = 123LLU;
	int64_t x314 = INT64_MIN;
	uint64_t x316 = 14478041LLU;
	int32_t t77 = 415;

    t77 = ((x313^x314)>(x315/x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x317 = 1663676194U;
	volatile uint16_t x318 = 4328U;
	volatile int16_t x320 = INT16_MIN;
	int32_t t78 = 0;

    t78 = ((x317^x318)>(x319/x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x321 = INT16_MIN;
	uint8_t x322 = 112U;
	uint8_t x324 = 95U;
	int32_t t79 = 50;

    t79 = ((x321^x322)>(x323/x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x327 = INT16_MIN;
	uint64_t x328 = 562197324931397LLU;
	volatile int32_t t80 = 11;

    t80 = ((x325^x326)>(x327/x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x331 = INT16_MAX;
	volatile int32_t t81 = -6968707;

    t81 = ((x329^x330)>(x331/x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x333 = -4431;
	int8_t x334 = INT8_MAX;
	volatile int32_t x335 = 105;
	int16_t x336 = -1;
	volatile int32_t t82 = -1204069;

    t82 = ((x333^x334)>(x335/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = -4112;
	int32_t x338 = 5;
	volatile uint16_t x339 = 1U;
	int16_t x340 = -1;
	int32_t t83 = 7;

    t83 = ((x337^x338)>(x339/x340));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x341 = 14U;
	volatile int16_t x342 = 2146;
	static int16_t x343 = 0;
	int8_t x344 = -1;
	volatile int32_t t84 = 77;

    t84 = ((x341^x342)>(x343/x344));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = -1;
	static uint64_t x347 = UINT64_MAX;
	static int64_t x348 = INT64_MAX;
	volatile int32_t t85 = 49085;

    t85 = ((x345^x346)>(x347/x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x350 = 0U;
	uint16_t x351 = 11869U;
	int32_t x352 = 1243;
	int32_t t86 = -6679;

    t86 = ((x349^x350)>(x351/x352));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x353 = -51;
	volatile int64_t x354 = 4486404183LL;
	int16_t x355 = INT16_MIN;
	static volatile int32_t t87 = 463;

    t87 = ((x353^x354)>(x355/x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x357 = 46211LLU;
	uint8_t x358 = 1U;
	volatile int8_t x359 = INT8_MIN;
	int8_t x360 = 5;
	int32_t t88 = -1;

    t88 = ((x357^x358)>(x359/x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x361 = 27U;
	static volatile uint32_t x362 = 13822430U;
	volatile int32_t x363 = 254560232;
	volatile int32_t t89 = -11;

    t89 = ((x361^x362)>(x363/x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -8069;
	volatile uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t90 = -305044;

    t90 = ((x365^x366)>(x367/x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x370 = 96;
	int8_t x371 = -1;
	int8_t x372 = INT8_MIN;
	int32_t t91 = -358009;

    t91 = ((x369^x370)>(x371/x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = 131968587U;
	volatile int64_t x379 = INT64_MAX;
	int32_t x380 = 1;
	static volatile int32_t t92 = -127990101;

    t92 = ((x377^x378)>(x379/x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int32_t x381 = INT32_MAX;
	int32_t x383 = INT32_MAX;

    t93 = ((x381^x382)>(x383/x384));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = 2935954U;
	static int32_t x390 = INT32_MAX;
	uint8_t x391 = 20U;
	static int32_t t94 = 1;

    t94 = ((x389^x390)>(x391/x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x393 = 3U;
	int16_t x394 = INT16_MAX;
	int16_t x395 = 18;
	int64_t x396 = -78789066872304LL;
	static volatile int32_t t95 = -981281;

    t95 = ((x393^x394)>(x395/x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	uint64_t x400 = 419876376009494LLU;
	static volatile int32_t t96 = 1;

    t96 = ((x397^x398)>(x399/x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x401 = INT8_MIN;
	uint64_t x402 = 631853919435904840LLU;
	int32_t t97 = 25220306;

    t97 = ((x401^x402)>(x403/x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = 105586180U;
	static int64_t x407 = INT64_MIN;
	volatile int32_t t98 = -261385;

    t98 = ((x405^x406)>(x407/x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = 639483989U;
	uint64_t x411 = 14354LLU;
	uint64_t x412 = UINT64_MAX;

    t99 = ((x409^x410)>(x411/x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = -1;
	uint8_t x414 = UINT8_MAX;
	int64_t x415 = INT64_MAX;
	int8_t x416 = -1;

    t100 = ((x413^x414)>(x415/x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x417 = INT8_MIN;
	static int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MAX;
	int32_t t101 = 61;

    t101 = ((x417^x418)>(x419/x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x424 = 133332LLU;
	volatile int32_t t102 = -3921768;

    t102 = ((x421^x422)>(x423/x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x425 = 110039453979LLU;
	int64_t x426 = INT64_MIN;
	static int32_t x427 = INT32_MIN;
	volatile int32_t x428 = 56954;

    t103 = ((x425^x426)>(x427/x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x429 = 50U;
	uint16_t x430 = UINT16_MAX;
	volatile int16_t x431 = 8450;
	int8_t x432 = 3;
	int32_t t104 = 100;

    t104 = ((x429^x430)>(x431/x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x433 = 84LL;
	int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MAX;
	int32_t t105 = -13780038;

    t105 = ((x433^x434)>(x435/x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x437 = -1;
	uint32_t x438 = 88U;
	uint32_t x439 = UINT32_MAX;
	static int32_t x440 = -1;

    t106 = ((x437^x438)>(x439/x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x441 = 1;
	int64_t x442 = 13556LL;
	static volatile int8_t x443 = INT8_MAX;
	volatile int8_t x444 = INT8_MAX;
	int32_t t107 = -1812;

    t107 = ((x441^x442)>(x443/x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	volatile int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;
	int32_t t108 = -5332131;

    t108 = ((x445^x446)>(x447/x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x453 = -1;
	uint32_t x454 = 12083U;
	int64_t x455 = INT64_MAX;
	int64_t x456 = -1LL;
	int32_t t109 = 0;

    t109 = ((x453^x454)>(x455/x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = -1;
	int64_t x458 = 567710964253787332LL;
	uint32_t x459 = 5512U;
	int64_t x460 = INT64_MIN;
	volatile int32_t t110 = -971;

    t110 = ((x457^x458)>(x459/x460));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x461 = 52;
	uint16_t x463 = 7U;
	int32_t x464 = -33033622;
	volatile int32_t t111 = -1975960;

    t111 = ((x461^x462)>(x463/x464));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x465 = 393LLU;
	uint64_t x466 = 667999837184LLU;
	int32_t x467 = -302;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t112 = 5;

    t112 = ((x465^x466)>(x467/x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x469 = 3663LL;
	int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	volatile uint64_t x472 = 15LLU;
	int32_t t113 = 13;

    t113 = ((x469^x470)>(x471/x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x473 = INT16_MAX;
	static int64_t x475 = INT64_MIN;
	int32_t x476 = -15;
	static int32_t t114 = -6170776;

    t114 = ((x473^x474)>(x475/x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = INT32_MIN;
	uint64_t x478 = UINT64_MAX;
	int8_t x479 = INT8_MAX;
	int8_t x480 = -10;
	static int32_t t115 = 2;

    t115 = ((x477^x478)>(x479/x480));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x487 = -1LL;
	static uint8_t x488 = UINT8_MAX;

    t116 = ((x485^x486)>(x487/x488));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x489 = -1LL;
	uint32_t x490 = 151012U;
	uint32_t x492 = UINT32_MAX;
	int32_t t117 = 1;

    t117 = ((x489^x490)>(x491/x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x493 = UINT16_MAX;
	volatile int8_t x494 = -1;
	volatile int8_t x495 = -1;
	int16_t x496 = 2;
	volatile int32_t t118 = -23;

    t118 = ((x493^x494)>(x495/x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x497 = 112U;
	int16_t x499 = INT16_MIN;
	volatile int32_t t119 = 169832316;

    t119 = ((x497^x498)>(x499/x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x501 = INT32_MIN;
	int64_t x502 = -3LL;
	int8_t x504 = INT8_MIN;

    t120 = ((x501^x502)>(x503/x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x505 = INT32_MIN;
	int16_t x506 = INT16_MIN;
	static uint32_t x507 = UINT32_MAX;
	int32_t t121 = 11101894;

    t121 = ((x505^x506)>(x507/x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = -1;
	static volatile uint8_t x510 = 46U;
	uint16_t x512 = UINT16_MAX;

    t122 = ((x509^x510)>(x511/x512));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x513 = INT16_MAX;
	int16_t x514 = INT16_MIN;
	static volatile int32_t x515 = -1;
	uint32_t x516 = 26325U;
	static int32_t t123 = 61664;

    t123 = ((x513^x514)>(x515/x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x517 = 20172U;
	uint8_t x518 = 5U;
	int16_t x520 = 4224;
	static volatile int32_t t124 = -182;

    t124 = ((x517^x518)>(x519/x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x521 = INT32_MIN;
	uint64_t x522 = 845214LLU;
	int32_t t125 = 527198919;

    t125 = ((x521^x522)>(x523/x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x525 = UINT16_MAX;
	int64_t x526 = -1LL;
	static int16_t x527 = INT16_MAX;
	static int8_t x528 = INT8_MAX;
	int32_t t126 = 21;

    t126 = ((x525^x526)>(x527/x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = -1;
	static uint64_t x530 = UINT64_MAX;
	int32_t x531 = INT32_MIN;
	int64_t x532 = INT64_MAX;
	volatile int32_t t127 = 91;

    t127 = ((x529^x530)>(x531/x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x533 = 73U;
	uint16_t x534 = UINT16_MAX;
	int64_t x535 = -16622163329349LL;
	uint32_t x536 = 31U;
	int32_t t128 = 7;

    t128 = ((x533^x534)>(x535/x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x537 = INT16_MAX;
	static uint64_t x539 = 62306LLU;
	static int16_t x540 = INT16_MIN;
	static int32_t t129 = 791;

    t129 = ((x537^x538)>(x539/x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x541 = 10U;
	volatile uint16_t x543 = 5U;
	static int64_t x544 = -692874LL;

    t130 = ((x541^x542)>(x543/x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x547 = -1LL;
	int32_t x548 = -565155;
	volatile int32_t t131 = -24;

    t131 = ((x545^x546)>(x547/x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x549 = INT16_MIN;
	static int32_t x550 = INT32_MIN;
	int64_t x551 = 263982179211067522LL;
	volatile int32_t t132 = 2;

    t132 = ((x549^x550)>(x551/x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x555 = INT16_MIN;
	int32_t x556 = INT32_MIN;
	int32_t t133 = 74;

    t133 = ((x553^x554)>(x555/x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x557 = UINT16_MAX;
	int32_t x560 = INT32_MAX;
	int32_t t134 = -35564689;

    t134 = ((x557^x558)>(x559/x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x561 = UINT32_MAX;
	uint64_t x562 = 136684089699307LLU;
	static volatile int64_t x563 = -728LL;
	static uint16_t x564 = 9U;
	int32_t t135 = -12224763;

    t135 = ((x561^x562)>(x563/x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x565 = 254400120563LLU;
	static int64_t x566 = INT64_MIN;
	volatile int64_t x567 = INT64_MIN;
	uint16_t x568 = 1161U;
	int32_t t136 = -216463;

    t136 = ((x565^x566)>(x567/x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = INT8_MIN;
	int16_t x574 = 217;
	static uint64_t x575 = 29LLU;
	int32_t t137 = -6;

    t137 = ((x573^x574)>(x575/x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x580 = -1;
	static int32_t t138 = -13460;

    t138 = ((x577^x578)>(x579/x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x584 = UINT64_MAX;
	int32_t t139 = 1618285;

    t139 = ((x581^x582)>(x583/x584));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x585 = INT32_MIN;
	int32_t x586 = -672528;
	static uint32_t x587 = 3315U;
	static int16_t x588 = -1;

    t140 = ((x585^x586)>(x587/x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x589 = INT16_MIN;
	int64_t x590 = -3934050LL;
	int8_t x591 = INT8_MIN;
	static uint32_t x592 = 4U;
	volatile int32_t t141 = 75218405;

    t141 = ((x589^x590)>(x591/x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x593 = 8U;
	uint16_t x594 = 127U;
	static int64_t x595 = -1LL;
	static int8_t x596 = INT8_MAX;
	volatile int32_t t142 = 184785;

    t142 = ((x593^x594)>(x595/x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x598 = -1;
	volatile int64_t x599 = INT64_MAX;
	static int32_t t143 = 1074443;

    t143 = ((x597^x598)>(x599/x600));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x601 = 436U;
	static int8_t x602 = INT8_MIN;
	int64_t x603 = -1054729242400093540LL;
	volatile int8_t x604 = INT8_MIN;
	volatile int32_t t144 = -105792817;

    t144 = ((x601^x602)>(x603/x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x606 = -1;
	uint8_t x608 = 2U;
	volatile int32_t t145 = 4;

    t145 = ((x605^x606)>(x607/x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x610 = INT8_MAX;
	int16_t x611 = INT16_MIN;
	int8_t x612 = 4;
	volatile int32_t t146 = 22;

    t146 = ((x609^x610)>(x611/x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x613 = -1;
	uint16_t x614 = 63U;
	int8_t x616 = -1;
	volatile int32_t t147 = 35;

    t147 = ((x613^x614)>(x615/x616));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = INT16_MAX;
	int8_t x618 = -1;
	uint16_t x620 = 6500U;

    t148 = ((x617^x618)>(x619/x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x621 = 495248789653656765LL;
	volatile int32_t x622 = INT32_MIN;
	int16_t x623 = INT16_MIN;
	volatile int32_t x624 = INT32_MAX;
	volatile int32_t t149 = 29;

    t149 = ((x621^x622)>(x623/x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x627 = INT8_MIN;

    t150 = ((x625^x626)>(x627/x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x633 = 250U;
	static uint32_t x634 = 12117U;
	uint16_t x636 = 47U;
	int32_t t151 = -9;

    t151 = ((x633^x634)>(x635/x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x637 = 3782;
	static uint32_t x638 = UINT32_MAX;
	int64_t x640 = 852LL;
	static int32_t t152 = -1;

    t152 = ((x637^x638)>(x639/x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x645 = 5;
	int8_t x647 = INT8_MIN;
	uint64_t x648 = 39189672LLU;
	volatile int32_t t153 = 4513;

    t153 = ((x645^x646)>(x647/x648));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x649 = INT32_MIN;
	static volatile uint32_t x650 = 239464279U;
	uint64_t x651 = 269220LLU;
	volatile int32_t x652 = -1;

    t154 = ((x649^x650)>(x651/x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x653 = 9552622595301LLU;
	int32_t x654 = INT32_MIN;
	volatile int16_t x655 = -5;
	volatile int8_t x656 = INT8_MIN;
	int32_t t155 = -57325234;

    t155 = ((x653^x654)>(x655/x656));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x657 = INT16_MIN;
	uint8_t x658 = 1U;
	volatile uint64_t x659 = 1835627393571LLU;
	int64_t x660 = INT64_MAX;

    t156 = ((x657^x658)>(x659/x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x661 = 112U;
	static int64_t x662 = -1LL;
	volatile int64_t x663 = -1LL;
	static volatile int32_t t157 = -6;

    t157 = ((x661^x662)>(x663/x664));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = 1499;
	int16_t x666 = -233;
	int16_t x668 = 2878;
	static volatile int32_t t158 = 4854366;

    t158 = ((x665^x666)>(x667/x668));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x669 = INT8_MIN;
	int8_t x670 = 4;
	static int8_t x671 = INT8_MIN;
	uint16_t x672 = 13U;
	int32_t t159 = -455;

    t159 = ((x669^x670)>(x671/x672));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x673 = UINT8_MAX;
	volatile int16_t x674 = -61;
	volatile int32_t x675 = INT32_MIN;
	int8_t x676 = INT8_MIN;
	int32_t t160 = -515878182;

    t160 = ((x673^x674)>(x675/x676));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x678 = INT8_MAX;
	int16_t x679 = INT16_MIN;
	int64_t x680 = -51520285060LL;
	static int32_t t161 = -3644;

    t161 = ((x677^x678)>(x679/x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x681 = INT32_MIN;
	int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MIN;
	int8_t x684 = INT8_MAX;
	int32_t t162 = 0;

    t162 = ((x681^x682)>(x683/x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x686 = UINT8_MAX;
	volatile int32_t x687 = -1;
	int64_t x688 = INT64_MIN;
	int32_t t163 = 39;

    t163 = ((x685^x686)>(x687/x688));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x689 = INT64_MIN;
	volatile uint32_t x691 = 678185U;
	uint32_t x692 = UINT32_MAX;
	volatile int32_t t164 = 91357;

    t164 = ((x689^x690)>(x691/x692));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x693 = 206U;
	int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MIN;
	int32_t t165 = -11783253;

    t165 = ((x693^x694)>(x695/x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x697 = -46;
	volatile int8_t x698 = INT8_MAX;
	volatile uint8_t x699 = 15U;
	int8_t x700 = 7;
	volatile int32_t t166 = 153779;

    t166 = ((x697^x698)>(x699/x700));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x701 = -1;
	static volatile int8_t x703 = INT8_MIN;
	int64_t x704 = INT64_MIN;
	volatile int32_t t167 = -350;

    t167 = ((x701^x702)>(x703/x704));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x705 = UINT32_MAX;
	int8_t x706 = INT8_MIN;
	volatile int32_t x707 = INT32_MIN;
	volatile int64_t x708 = -1LL;

    t168 = ((x705^x706)>(x707/x708));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = -1LL;
	uint64_t x711 = UINT64_MAX;
	volatile int32_t t169 = 1057118897;

    t169 = ((x709^x710)>(x711/x712));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x713 = 259428LLU;
	int64_t x714 = INT64_MIN;
	volatile int64_t x715 = INT64_MIN;
	int16_t x716 = INT16_MIN;
	int32_t t170 = 2103;

    t170 = ((x713^x714)>(x715/x716));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x717 = INT8_MIN;
	uint16_t x718 = 400U;
	uint32_t x719 = 353U;
	volatile int64_t x720 = INT64_MIN;
	int32_t t171 = 86100810;

    t171 = ((x717^x718)>(x719/x720));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x721 = INT32_MIN;
	uint16_t x722 = 3250U;
	int32_t x723 = 61450995;
	volatile int8_t x724 = -11;
	int32_t t172 = 1;

    t172 = ((x721^x722)>(x723/x724));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x725 = -1;
	int8_t x726 = INT8_MAX;
	int8_t x727 = -1;
	volatile uint8_t x728 = 69U;
	static volatile int32_t t173 = -31299;

    t173 = ((x725^x726)>(x727/x728));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x729 = 2;
	uint32_t x730 = 6U;
	volatile uint8_t x731 = 0U;
	uint16_t x732 = 491U;
	volatile int32_t t174 = -611698;

    t174 = ((x729^x730)>(x731/x732));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x733 = UINT8_MAX;
	uint64_t x735 = UINT64_MAX;
	volatile int8_t x736 = INT8_MAX;
	volatile int32_t t175 = 171580183;

    t175 = ((x733^x734)>(x735/x736));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x737 = INT8_MIN;
	static volatile uint32_t x738 = 0U;
	int16_t x740 = -127;
	static volatile int32_t t176 = 12;

    t176 = ((x737^x738)>(x739/x740));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x742 = 61LLU;
	static int64_t x743 = INT64_MAX;
	int32_t x744 = 34915;
	int32_t t177 = 11;

    t177 = ((x741^x742)>(x743/x744));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x745 = INT16_MIN;
	volatile uint32_t x746 = 1U;

    t178 = ((x745^x746)>(x747/x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = 31611LL;
	int64_t x750 = INT64_MIN;
	int16_t x751 = INT16_MAX;
	static int64_t x752 = -1LL;
	volatile int32_t t179 = 768;

    t179 = ((x749^x750)>(x751/x752));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x754 = UINT16_MAX;
	int8_t x755 = INT8_MAX;
	static uint32_t x756 = 13U;
	volatile int32_t t180 = 218337;

    t180 = ((x753^x754)>(x755/x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x757 = 9U;
	int64_t x758 = 227597431LL;
	volatile int32_t x759 = 104;
	int32_t x760 = INT32_MIN;
	volatile int32_t t181 = -157528341;

    t181 = ((x757^x758)>(x759/x760));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x762 = -1LL;
	volatile int8_t x763 = INT8_MIN;
	volatile int16_t x764 = -1;
	int32_t t182 = -414335;

    t182 = ((x761^x762)>(x763/x764));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x765 = 1558U;
	uint16_t x766 = 1U;
	int32_t x767 = -37027609;
	static uint16_t x768 = UINT16_MAX;
	int32_t t183 = 143;

    t183 = ((x765^x766)>(x767/x768));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x770 = INT32_MIN;
	uint64_t x771 = UINT64_MAX;
	int8_t x772 = 10;

    t184 = ((x769^x770)>(x771/x772));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x774 = 1;
	uint32_t x775 = 67U;
	uint64_t x776 = 55358LLU;
	volatile int32_t t185 = -167368;

    t185 = ((x773^x774)>(x775/x776));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x777 = INT16_MIN;
	int16_t x778 = 14721;
	int64_t x779 = 94061083472LL;
	static int32_t x780 = -610419270;
	int32_t t186 = -1;

    t186 = ((x777^x778)>(x779/x780));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x785 = UINT64_MAX;
	int16_t x786 = INT16_MAX;
	uint64_t x787 = 1068921148876732125LLU;
	int32_t x788 = 162127356;

    t187 = ((x785^x786)>(x787/x788));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x789 = 548450373617308661LL;
	volatile int8_t x790 = -1;
	uint32_t x792 = 93336108U;
	static volatile int32_t t188 = 23970037;

    t188 = ((x789^x790)>(x791/x792));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x794 = INT16_MAX;
	volatile int64_t x796 = -47187633844LL;
	volatile int32_t t189 = -1;

    t189 = ((x793^x794)>(x795/x796));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x797 = -198;
	int64_t x798 = -1416658LL;
	int8_t x799 = INT8_MAX;
	int16_t x800 = INT16_MAX;
	int32_t t190 = -13;

    t190 = ((x797^x798)>(x799/x800));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x802 = 43U;
	int32_t x803 = 14524113;

    t191 = ((x801^x802)>(x803/x804));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x805 = 978;
	uint8_t x806 = 0U;
	uint8_t x807 = 21U;
	int8_t x808 = INT8_MIN;
	int32_t t192 = -131042;

    t192 = ((x805^x806)>(x807/x808));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x810 = 762337LL;
	int64_t x811 = INT64_MIN;

    t193 = ((x809^x810)>(x811/x812));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x813 = INT16_MAX;
	static int16_t x814 = 157;
	uint8_t x815 = UINT8_MAX;
	uint8_t x816 = UINT8_MAX;

    t194 = ((x813^x814)>(x815/x816));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x818 = 0;
	int8_t x819 = INT8_MIN;
	int8_t x820 = INT8_MIN;
	volatile int32_t t195 = 419;

    t195 = ((x817^x818)>(x819/x820));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x821 = UINT64_MAX;
	int64_t x823 = INT64_MAX;
	uint16_t x824 = 6U;

    t196 = ((x821^x822)>(x823/x824));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x825 = INT8_MIN;
	uint8_t x826 = UINT8_MAX;
	int32_t x827 = -1560;
	int8_t x828 = -2;
	static volatile int32_t t197 = -1;

    t197 = ((x825^x826)>(x827/x828));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x829 = -1LL;
	volatile int64_t x830 = -28250901623105LL;
	int8_t x831 = INT8_MIN;
	volatile uint32_t x832 = UINT32_MAX;
	int32_t t198 = -2242;

    t198 = ((x829^x830)>(x831/x832));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x833 = 32U;
	uint32_t x835 = 316U;
	uint64_t x836 = 308473LLU;
	volatile int32_t t199 = 10428986;

    t199 = ((x833^x834)>(x835/x836));

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

