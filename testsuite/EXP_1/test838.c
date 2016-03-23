
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

static uint64_t x1 = UINT64_MAX;
static volatile int64_t x2 = INT64_MAX;
static int8_t x3 = INT8_MAX;
volatile uint64_t t0 = 8089600020LLU;
static uint32_t x6 = 359U;
int64_t x7 = -1LL;
volatile uint32_t t2 = 76U;
uint64_t x13 = UINT64_MAX;
volatile int32_t t4 = 194148267;
int16_t x23 = -1;
uint32_t x31 = 1680412U;
static volatile uint64_t x34 = UINT64_MAX;
static uint64_t t8 = 1041376LLU;
uint32_t x39 = 257612U;
volatile uint64_t t9 = 148457155LLU;
int64_t x42 = INT64_MIN;
int64_t x43 = -6261LL;
int8_t x50 = -1;
int8_t x58 = INT8_MIN;
uint32_t x60 = 739U;
volatile int32_t x70 = INT32_MIN;
int64_t x79 = INT64_MIN;
static volatile int8_t x81 = -1;
int64_t x85 = INT64_MIN;
int64_t x92 = 1122643219007446562LL;
volatile int8_t x96 = -7;
int8_t x100 = INT8_MIN;
uint8_t x105 = 1U;
uint64_t t29 = 129281027LLU;
volatile int32_t x123 = -312683493;
volatile int16_t x125 = -477;
uint8_t x127 = 45U;
uint64_t x131 = UINT64_MAX;
static int64_t t33 = -6549978711LL;
static int64_t x137 = INT64_MIN;
uint64_t x148 = UINT64_MAX;
int16_t x152 = 5;
static volatile int32_t x157 = -3;
int16_t x164 = INT16_MIN;
int16_t x168 = -1;
static volatile int32_t t41 = -1;
uint64_t x170 = 33672LLU;
uint64_t t42 = 20260753LLU;
uint64_t x173 = 68472738965983LLU;
int16_t x174 = INT16_MIN;
volatile int64_t t44 = -24335723063LL;
uint8_t x181 = 2U;
uint64_t x187 = UINT64_MAX;
volatile uint64_t t46 = 7656771317707LLU;
int64_t x190 = 211631361101LL;
int64_t x193 = INT64_MIN;
static int64_t x202 = INT64_MAX;
uint8_t x207 = 1U;
uint8_t x208 = 19U;
uint64_t x210 = UINT64_MAX;
int8_t x211 = -1;
int64_t t54 = 10193LL;
volatile int64_t t55 = 3985750LL;
int8_t x227 = INT8_MIN;
volatile uint16_t x228 = 30677U;
int64_t x238 = -1909808382LL;
int16_t x240 = -298;
volatile int8_t x243 = -1;
volatile uint64_t t61 = 188075577437997LLU;
static int16_t x249 = 13695;
volatile uint8_t x254 = 94U;
int8_t x258 = INT8_MAX;
uint16_t x267 = UINT16_MAX;
uint32_t x276 = UINT32_MAX;
int64_t t69 = 15482882720LL;
int8_t x281 = -1;
int16_t x284 = 5247;
static volatile int64_t x285 = INT64_MIN;
static int8_t x288 = INT8_MIN;
volatile int16_t x295 = INT16_MIN;
static int8_t x296 = -1;
int64_t x297 = INT64_MIN;
static int32_t x299 = INT32_MAX;
int64_t x300 = INT64_MAX;
int16_t x316 = INT16_MAX;
uint64_t x323 = 951171LLU;
volatile uint64_t t79 = 3249LLU;
static int8_t x325 = -1;
int64_t x329 = 13845LL;
int8_t x332 = INT8_MIN;
volatile uint64_t t81 = 61027LLU;
int64_t x335 = -69266233672010501LL;
int64_t x338 = INT64_MAX;
int16_t x348 = INT16_MIN;
int64_t x351 = INT64_MIN;
static uint8_t x354 = UINT8_MAX;
int8_t x357 = INT8_MIN;
static volatile int32_t t88 = 202;
int16_t x363 = INT16_MIN;
int16_t x366 = INT16_MIN;
volatile uint8_t x367 = 69U;
volatile int8_t x368 = INT8_MIN;
int8_t x371 = INT8_MAX;
static int64_t t91 = 330LL;
volatile int64_t x376 = INT64_MAX;
int64_t t92 = -1216399463521399773LL;
int64_t x388 = -1LL;
int64_t t96 = -122255LL;
volatile int64_t x399 = 10640755977345LL;
volatile int8_t x403 = -1;
uint64_t x407 = 69241334384060895LLU;
volatile int16_t x409 = -1;
static int16_t x411 = INT16_MIN;
int64_t x419 = INT64_MAX;
volatile int64_t t102 = -48133008LL;
int32_t x423 = 2;
int64_t x424 = INT64_MAX;
int8_t x425 = -1;
static volatile uint8_t x427 = 17U;
int64_t x428 = INT64_MAX;
int16_t x433 = -1;
int16_t x443 = INT16_MAX;
volatile int8_t x444 = INT8_MAX;
int64_t x446 = INT64_MIN;
int8_t x473 = -1;
uint32_t x481 = 2U;
int16_t x483 = INT16_MAX;
uint16_t x484 = 15U;
int64_t x491 = -139LL;
volatile int16_t x495 = INT16_MAX;
static uint64_t t122 = 45773045788148LLU;
volatile int64_t x507 = 981687846165910068LL;
static int64_t t124 = -1040901912005750LL;
int32_t x515 = INT32_MAX;
volatile int32_t x517 = INT32_MIN;
int32_t t127 = -1;
static volatile uint32_t t128 = 108268764U;
int64_t x529 = -1976503680833LL;
int64_t x533 = INT64_MAX;
int8_t x534 = -1;
int64_t x535 = -1LL;
volatile int64_t t130 = -122511LL;
int16_t x539 = INT16_MIN;
volatile int64_t t131 = 267454355605454182LL;
static int16_t x555 = INT16_MAX;
uint64_t t134 = 113268467481408057LLU;
uint16_t x557 = UINT16_MAX;
int32_t t135 = 1859892;
static uint32_t x562 = UINT32_MAX;
volatile int8_t x567 = 10;
volatile uint8_t x572 = 1U;
int16_t x588 = INT16_MIN;
int64_t x589 = -1LL;
volatile uint32_t x591 = 59U;
int8_t x592 = -1;
volatile int64_t t143 = 947053751976605LL;
volatile int16_t x594 = -80;
static int8_t x595 = INT8_MIN;
uint32_t t146 = 366937U;
int64_t x610 = INT64_MAX;
uint64_t x618 = 7537904084349908LLU;
int8_t x620 = INT8_MAX;
int64_t x622 = INT64_MAX;
int32_t x627 = INT32_MAX;
static int16_t x644 = -454;
int16_t x645 = -5;
int16_t x649 = 124;
volatile uint32_t t157 = 247U;
static volatile int16_t x661 = -1952;
volatile uint32_t x662 = 9159169U;
volatile uint64_t t161 = 25LLU;
uint16_t x675 = UINT16_MAX;
int64_t x691 = INT64_MAX;
int8_t x696 = 4;
volatile int8_t x698 = 30;
volatile int16_t x699 = INT16_MIN;
static int32_t x709 = 55;
int64_t x713 = INT64_MIN;
static int16_t x717 = INT16_MAX;
volatile int32_t x718 = INT32_MIN;
static volatile uint16_t x726 = 5U;
int8_t x733 = -1;
int32_t x735 = -1;
uint16_t x738 = UINT16_MAX;
int64_t x760 = INT64_MIN;
uint64_t x764 = 790977LLU;
static volatile int64_t x768 = INT64_MIN;
int16_t x775 = 6032;
int64_t x777 = -11668LL;
static int64_t t188 = 258912682317522779LL;
uint16_t x786 = 658U;
int32_t x789 = -21;
int8_t x790 = -1;
volatile uint8_t x797 = UINT8_MAX;
int32_t x801 = INT32_MIN;
uint16_t x803 = 1361U;
static volatile uint32_t t193 = 10U;
int16_t x808 = INT16_MAX;
int64_t x810 = 1LL;
int16_t x814 = 1;
volatile int32_t t197 = -1257989;
int8_t x821 = INT8_MIN;
volatile int64_t x823 = -1LL;
int64_t t199 = -27LL;


void f0(void) {
    	static int64_t x4 = 41LL;

    t0 = (((x1%x2)/x3)&x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x8 = 1;
	static int64_t t1 = -4308644446166887LL;

    t1 = (((x5%x6)/x7)&x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	static uint32_t x11 = 150U;
	int8_t x12 = INT8_MAX;

    t2 = (((x9%x10)/x11)&x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x14 = 24U;
	static int16_t x15 = -14;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 1205LLU;

    t3 = (((x13%x14)/x15)&x16);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = 1;
	int16_t x19 = -1;
	volatile int8_t x20 = 1;

    t4 = (((x17%x18)/x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	int16_t x22 = -49;
	int32_t x24 = -42976;
	int32_t t5 = -9;

    t5 = (((x21%x22)/x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	volatile int32_t x28 = INT32_MIN;
	volatile int64_t t6 = 20155LL;

    t6 = (((x25%x26)/x27)&x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 266389962069LLU;
	int64_t x30 = -1LL;
	uint32_t x32 = UINT32_MAX;
	volatile uint64_t t7 = 15823771224032LLU;

    t7 = (((x29%x30)/x31)&x32);

    if (t7 != 158526LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int64_t x35 = -1LL;
	uint32_t x36 = 608146913U;

    t8 = (((x33%x34)/x35)&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint64_t x38 = 43LLU;
	volatile int32_t x40 = INT32_MIN;

    t9 = (((x37%x38)/x39)&x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	volatile int8_t x44 = -1;
	int64_t t10 = -17325LL;

    t10 = (((x41%x42)/x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = UINT32_MAX;
	static volatile int16_t x46 = -1;
	int8_t x47 = INT8_MIN;
	static int16_t x48 = -1584;
	volatile uint32_t t11 = 438U;

    t11 = (((x45%x46)/x47)&x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile uint8_t x51 = 2U;
	volatile int32_t x52 = INT32_MIN;
	volatile uint64_t t12 = 241606677LLU;

    t12 = (((x49%x50)/x51)&x52);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -11;
	int32_t x54 = INT32_MAX;
	static int8_t x55 = -1;
	static int8_t x56 = INT8_MAX;
	int32_t t13 = 125241;

    t13 = (((x53%x54)/x55)&x56);

    if (t13 != 11) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = 1255524U;
	static int32_t x59 = -1;
	uint32_t t14 = 381U;

    t14 = (((x57%x58)/x59)&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 14;
	static int64_t x62 = -1LL;
	int8_t x63 = INT8_MAX;
	static int8_t x64 = -1;
	static volatile int64_t t15 = 16LL;

    t15 = (((x61%x62)/x63)&x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = -1;
	volatile int64_t x67 = -1LL;
	volatile int8_t x68 = 17;
	int64_t t16 = 43583071823044451LL;

    t16 = (((x65%x66)/x67)&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 11LLU;

    t17 = (((x69%x70)/x71)&x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 40193353LLU;
	int32_t x74 = INT32_MIN;
	static int8_t x75 = 21;
	uint64_t x76 = 2LLU;
	static volatile uint64_t t18 = 55698744LLU;

    t18 = (((x73%x74)/x75)&x76);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int8_t x78 = -1;
	volatile int32_t x80 = INT32_MIN;
	volatile int64_t t19 = -1839LL;

    t19 = (((x77%x78)/x79)&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = -1;
	static int16_t x83 = -1;
	static uint32_t x84 = 9U;
	uint32_t t20 = 3132848U;

    t20 = (((x81%x82)/x83)&x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x86 = -1;
	int16_t x87 = -15;
	static volatile int32_t x88 = INT32_MIN;
	int64_t t21 = 1067023562703425989LL;

    t21 = (((x85%x86)/x87)&x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	static int16_t x90 = -92;
	int32_t x91 = -31488257;
	static int64_t t22 = 8652137271321LL;

    t22 = (((x89%x90)/x91)&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = INT64_MIN;
	volatile uint16_t x94 = 31511U;
	static int8_t x95 = INT8_MAX;
	static int64_t t23 = 3117925556LL;

    t23 = (((x93%x94)/x95)&x96);

    if (t23 != -192LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x97 = 248753893U;
	int32_t x98 = INT32_MIN;
	volatile int16_t x99 = INT16_MAX;
	uint32_t t24 = 1600851566U;

    t24 = (((x97%x98)/x99)&x100);

    if (t24 != 7552U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MAX;
	static int32_t x102 = -9;
	volatile int8_t x103 = -1;
	static int64_t x104 = -5LL;
	int64_t t25 = -12889LL;

    t25 = (((x101%x102)/x103)&x104);

    if (t25 != -5LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x106 = INT64_MIN;
	static uint8_t x107 = 1U;
	static volatile int16_t x108 = INT16_MIN;
	int64_t t26 = 22192942472750631LL;

    t26 = (((x105%x106)/x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int64_t x110 = -1LL;
	int8_t x111 = -1;
	static volatile uint8_t x112 = 8U;
	int64_t t27 = -558762906008552623LL;

    t27 = (((x109%x110)/x111)&x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MAX;
	uint16_t x114 = 10253U;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	volatile int64_t t28 = 0LL;

    t28 = (((x113%x114)/x115)&x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MAX;
	int16_t x118 = -2;
	volatile uint64_t x119 = 7LLU;
	uint16_t x120 = 506U;

    t29 = (((x117%x118)/x119)&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = 1U;
	volatile int16_t x122 = INT16_MAX;
	int8_t x124 = INT8_MAX;
	int32_t t30 = 3457;

    t30 = (((x121%x122)/x123)&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x126 = UINT8_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t31 = -62;

    t31 = (((x125%x126)/x127)&x128);

    if (t31 != 252) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	uint16_t x130 = UINT16_MAX;
	static int16_t x132 = -1;
	uint64_t t32 = 365267976779LLU;

    t32 = (((x129%x130)/x131)&x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;

    t33 = (((x133%x134)/x135)&x136);

    if (t33 != 16777216LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x138 = 4U;
	int8_t x139 = 1;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = 5345358LLU;

    t34 = (((x137%x138)/x139)&x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	uint8_t x142 = 3U;
	volatile uint64_t x143 = UINT64_MAX;
	static volatile int16_t x144 = -1;
	uint64_t t35 = 7LLU;

    t35 = (((x141%x142)/x143)&x144);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 1554U;
	uint16_t x147 = UINT16_MAX;
	uint64_t t36 = 3551180427430328474LLU;

    t36 = (((x145%x146)/x147)&x148);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -15;
	int8_t x150 = INT8_MIN;
	static volatile uint8_t x151 = 2U;
	int32_t t37 = -1552982;

    t37 = (((x149%x150)/x151)&x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = -1;
	uint64_t x154 = UINT64_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	uint64_t t38 = 7532954418944860LLU;

    t38 = (((x153%x154)/x155)&x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MIN;
	int16_t x159 = -12;
	uint64_t x160 = 76633953844LLU;
	volatile uint64_t t39 = 7670LLU;

    t39 = (((x157%x158)/x159)&x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	volatile uint32_t x162 = 61U;
	int64_t x163 = 44389130LL;
	static int64_t t40 = -6LL;

    t40 = (((x161%x162)/x163)&x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	static int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MAX;

    t41 = (((x165%x166)/x167)&x168);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -41092;
	static int16_t x171 = INT16_MAX;
	static volatile int64_t x172 = -1LL;

    t42 = (((x169%x170)/x171)&x172);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;
	uint64_t t43 = 567260LLU;

    t43 = (((x173%x174)/x175)&x176);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	int32_t x178 = -1;
	int32_t x179 = INT32_MAX;
	int32_t x180 = 2389;

    t44 = (((x177%x178)/x179)&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = INT8_MAX;
	static int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	static volatile int64_t t45 = -103179LL;

    t45 = (((x181%x182)/x183)&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 1239534425U;
	uint16_t x186 = 7943U;
	volatile int64_t x188 = -1LL;

    t46 = (((x185%x186)/x187)&x188);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int64_t x191 = 775LL;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = INT64_MIN;

    t47 = (((x189%x190)/x191)&x192);

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x194 = 15;
	uint64_t x195 = 38LLU;
	static int32_t x196 = INT32_MIN;
	static volatile uint64_t t48 = 15LLU;

    t48 = (((x193%x194)/x195)&x196);

    if (t48 != 485440632840519680LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -9;
	static uint8_t x198 = 34U;
	static uint16_t x199 = UINT16_MAX;
	uint32_t x200 = UINT32_MAX;
	uint32_t t49 = 193900U;

    t49 = (((x197%x198)/x199)&x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	int16_t x204 = -1;
	int64_t t50 = 326508077LL;

    t50 = (((x201%x202)/x203)&x204);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = 1007295U;
	uint32_t x206 = 5821U;
	volatile uint32_t t51 = 4239038U;

    t51 = (((x205%x206)/x207)&x208);

    if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	uint64_t t52 = 226119818915LLU;

    t52 = (((x209%x210)/x211)&x212);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	int64_t x216 = -1LL;
	volatile int64_t t53 = 28597796LL;

    t53 = (((x213%x214)/x215)&x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MAX;
	uint16_t x218 = 60U;
	int64_t x219 = INT64_MAX;
	static volatile int16_t x220 = INT16_MIN;

    t54 = (((x217%x218)/x219)&x220);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	static volatile int64_t x222 = INT64_MAX;
	uint16_t x223 = 1343U;
	volatile int32_t x224 = -16970336;

    t55 = (((x221%x222)/x223)&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 2U;
	int16_t x226 = 187;
	static uint32_t t56 = 3204U;

    t56 = (((x225%x226)/x227)&x228);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -115;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MAX;
	int32_t x232 = INT32_MAX;
	volatile int64_t t57 = 2980348LL;

    t57 = (((x229%x230)/x231)&x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = INT64_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	volatile int8_t x235 = -14;
	int64_t x236 = 1LL;
	static volatile int64_t t58 = -146428LL;

    t58 = (((x233%x234)/x235)&x236);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = INT16_MIN;
	volatile int64_t x239 = 1382207914512707795LL;
	int64_t t59 = 21LL;

    t59 = (((x237%x238)/x239)&x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 2716;
	uint32_t x242 = 1672368721U;
	uint16_t x244 = UINT16_MAX;
	volatile uint32_t t60 = 1807615U;

    t60 = (((x241%x242)/x243)&x244);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 4350993031055992LL;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -3743769;
	int64_t x248 = -19181344864LL;

    t61 = (((x245%x246)/x247)&x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x250 = 86U;
	uint64_t x251 = 1691084955LLU;
	volatile int8_t x252 = -17;
	volatile uint64_t t62 = 391410479016741054LLU;

    t62 = (((x249%x250)/x251)&x252);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x253 = 36;
	volatile uint32_t x255 = 29722U;
	int16_t x256 = -176;
	static volatile uint32_t t63 = 146U;

    t63 = (((x253%x254)/x255)&x256);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -1LL;
	uint64_t x259 = 4325LLU;
	int64_t x260 = INT64_MIN;
	uint64_t t64 = 5401561193594531LLU;

    t64 = (((x257%x258)/x259)&x260);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -1;
	int64_t x262 = -1LL;
	volatile uint16_t x263 = 2U;
	uint16_t x264 = 6U;
	volatile int64_t t65 = -2431901954324LL;

    t65 = (((x261%x262)/x263)&x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 37U;
	int64_t x266 = -1LL;
	int8_t x268 = 45;
	volatile int64_t t66 = -1LL;

    t66 = (((x265%x266)/x267)&x268);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 737928U;
	static uint16_t x270 = 14U;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;
	uint32_t t67 = 226891U;

    t67 = (((x269%x270)/x271)&x272);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = 11567U;
	static uint64_t x274 = 257LLU;
	volatile int32_t x275 = -1;
	static uint64_t t68 = 2079011LLU;

    t68 = (((x273%x274)/x275)&x276);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = UINT8_MAX;
	static uint8_t x280 = 0U;

    t69 = (((x277%x278)/x279)&x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	volatile int32_t t70 = -460324825;

    t70 = (((x281%x282)/x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MIN;
	static volatile int64_t x287 = INT64_MIN;
	int64_t t71 = 0LL;

    t71 = (((x285%x286)/x287)&x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 9081LL;
	int32_t x290 = 128987690;
	int32_t x291 = INT32_MIN;
	int8_t x292 = -1;
	volatile int64_t t72 = 1LL;

    t72 = (((x289%x290)/x291)&x292);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	int16_t x294 = 1;
	volatile int64_t t73 = 8LL;

    t73 = (((x293%x294)/x295)&x296);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	volatile int64_t t74 = -73LL;

    t74 = (((x297%x298)/x299)&x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 0U;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;
	uint16_t x304 = 535U;
	int32_t t75 = -938;

    t75 = (((x301%x302)/x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 2164440140470LLU;
	int16_t x306 = -2834;
	volatile uint32_t x307 = 779U;
	int16_t x308 = -158;
	uint64_t t76 = 66626866068LLU;

    t76 = (((x305%x306)/x307)&x308);

    if (t76 != 2778485280LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = UINT16_MAX;
	static uint32_t x314 = 2U;
	volatile int64_t x315 = INT64_MAX;
	int64_t t77 = -5798409293LL;

    t77 = (((x313%x314)/x315)&x316);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x317 = -1;
	volatile int64_t x318 = 2268538631869939864LL;
	int32_t x319 = INT32_MAX;
	volatile uint32_t x320 = 22393827U;
	int64_t t78 = 32729437LL;

    t78 = (((x317%x318)/x319)&x320);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	volatile int32_t x324 = -194;

    t79 = (((x321%x322)/x323)&x324);

    if (t79 != 19393720028940LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MAX;
	volatile int32_t t80 = 46549868;

    t80 = (((x325%x326)/x327)&x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x330 = 65535792461846870LLU;
	int64_t x331 = INT64_MAX;

    t81 = (((x329%x330)/x331)&x332);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x333 = UINT16_MAX;
	int8_t x334 = INT8_MIN;
	int32_t x336 = INT32_MIN;
	volatile int64_t t82 = 753883923LL;

    t82 = (((x333%x334)/x335)&x336);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x337 = -1;
	int64_t x339 = -117914LL;
	static uint64_t x340 = 1967674497519LLU;
	uint64_t t83 = 57232978149326LLU;

    t83 = (((x337%x338)/x339)&x340);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x341 = INT8_MIN;
	static int8_t x342 = -12;
	int16_t x343 = INT16_MIN;
	int64_t x344 = -103925816958804LL;
	volatile int64_t t84 = -292775023LL;

    t84 = (((x341%x342)/x343)&x344);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = 415154802382378LLU;
	volatile uint32_t x346 = 126U;
	static uint32_t x347 = 790U;
	volatile uint64_t t85 = 5877LLU;

    t85 = (((x345%x346)/x347)&x348);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x349 = 9078U;
	volatile int32_t x350 = -1;
	uint64_t x352 = 2960643LLU;
	static volatile uint64_t t86 = 1801546LLU;

    t86 = (((x349%x350)/x351)&x352);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = -1;
	volatile int8_t x355 = -1;
	volatile uint8_t x356 = 2U;
	static int32_t t87 = -12853293;

    t87 = (((x353%x354)/x355)&x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x358 = 9;
	static int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MAX;

    t88 = (((x357%x358)/x359)&x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x361 = 5374209LLU;
	uint16_t x362 = 35U;
	volatile int16_t x364 = -1;
	volatile uint64_t t89 = 14295413960189LLU;

    t89 = (((x361%x362)/x363)&x364);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = 4;
	int32_t t90 = -1;

    t90 = (((x365%x366)/x367)&x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x369 = 4113U;
	uint32_t x370 = UINT32_MAX;
	static int64_t x372 = INT64_MAX;

    t91 = (((x369%x370)/x371)&x372);

    if (t91 != 32LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = INT8_MIN;
	static int16_t x374 = INT16_MAX;
	uint8_t x375 = 10U;

    t92 = (((x373%x374)/x375)&x376);

    if (t92 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x377 = UINT32_MAX;
	static uint8_t x378 = 1U;
	int64_t x379 = INT64_MAX;
	uint32_t x380 = 1U;
	volatile int64_t t93 = 0LL;

    t93 = (((x377%x378)/x379)&x380);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -129350296574LL;
	int32_t x386 = INT32_MIN;
	volatile uint16_t x387 = 1264U;
	static volatile int64_t t94 = 74566544LL;

    t94 = (((x385%x386)/x387)&x388);

    if (t94 != -396580LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x389 = -1;
	static uint8_t x390 = UINT8_MAX;
	int32_t x391 = -967;
	int8_t x392 = INT8_MAX;
	volatile int32_t t95 = 225867;

    t95 = (((x389%x390)/x391)&x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -3;
	int32_t x394 = INT32_MIN;
	int8_t x395 = INT8_MIN;
	static int64_t x396 = 496346LL;

    t96 = (((x393%x394)/x395)&x396);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x397 = 6420U;
	int64_t x398 = -27742748977195LL;
	static volatile int16_t x400 = INT16_MIN;
	volatile int64_t t97 = 127821851LL;

    t97 = (((x397%x398)/x399)&x400);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MAX;
	uint64_t x402 = UINT64_MAX;
	uint64_t x404 = UINT64_MAX;
	uint64_t t98 = 1577031LLU;

    t98 = (((x401%x402)/x403)&x404);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x405 = -60291477273648287LL;
	static volatile uint16_t x406 = 965U;
	uint16_t x408 = UINT16_MAX;
	static volatile uint64_t t99 = 137948260257146LLU;

    t99 = (((x405%x406)/x407)&x408);

    if (t99 != 266LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x410 = UINT64_MAX;
	int32_t x412 = INT32_MAX;
	uint64_t t100 = 15954095891LLU;

    t100 = (((x409%x410)/x411)&x412);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x413 = UINT64_MAX;
	int32_t x414 = -1;
	int8_t x415 = -15;
	uint8_t x416 = 14U;
	uint64_t t101 = 1824405585LLU;

    t101 = (((x413%x414)/x415)&x416);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	int8_t x418 = INT8_MAX;
	int32_t x420 = -1;

    t102 = (((x417%x418)/x419)&x420);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x421 = 7621;
	uint16_t x422 = UINT16_MAX;
	int64_t t103 = 843105394341745666LL;

    t103 = (((x421%x422)/x423)&x424);

    if (t103 != 3810LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x426 = UINT16_MAX;
	static volatile int64_t t104 = -4031265082LL;

    t104 = (((x425%x426)/x427)&x428);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x429 = 0U;
	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MAX;
	volatile int32_t x432 = INT32_MIN;
	volatile int64_t t105 = 24LL;

    t105 = (((x429%x430)/x431)&x432);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x434 = INT64_MIN;
	uint8_t x435 = 91U;
	static int64_t x436 = 264LL;
	int64_t t106 = -3616LL;

    t106 = (((x433%x434)/x435)&x436);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x437 = INT16_MIN;
	int64_t x438 = INT64_MIN;
	uint8_t x439 = UINT8_MAX;
	static int16_t x440 = -1;
	volatile int64_t t107 = 1869329314953823405LL;

    t107 = (((x437%x438)/x439)&x440);

    if (t107 != -128LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = -1;
	int32_t t108 = 154135;

    t108 = (((x441%x442)/x443)&x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = INT8_MAX;
	int64_t x447 = -1LL;
	volatile int16_t x448 = INT16_MIN;
	int64_t t109 = 2456LL;

    t109 = (((x445%x446)/x447)&x448);

    if (t109 != -32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x449 = UINT64_MAX;
	int16_t x450 = INT16_MAX;
	uint8_t x451 = 4U;
	static volatile uint16_t x452 = UINT16_MAX;
	volatile uint64_t t110 = 4121286931816582LLU;

    t110 = (((x449%x450)/x451)&x452);

    if (t110 != 3LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x453 = UINT32_MAX;
	volatile int8_t x454 = -1;
	int16_t x455 = -1;
	int16_t x456 = INT16_MIN;
	volatile uint32_t t111 = 2070522869U;

    t111 = (((x453%x454)/x455)&x456);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x457 = UINT64_MAX;
	int64_t x458 = -1027869518LL;
	static volatile int64_t x459 = 2080529611LL;
	int64_t x460 = -1LL;
	volatile uint64_t t112 = 64869794872LLU;

    t112 = (((x457%x458)/x459)&x460);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x461 = -1;
	uint16_t x462 = 3185U;
	uint64_t x463 = 2022017LLU;
	volatile int32_t x464 = INT32_MAX;
	uint64_t t113 = 1284LLU;

    t113 = (((x461%x462)/x463)&x464);

    if (t113 != 431591729LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x465 = 0U;
	int64_t x466 = -1LL;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = UINT16_MAX;
	volatile int64_t t114 = -4LL;

    t114 = (((x465%x466)/x467)&x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x469 = -2;
	int64_t x470 = 177083029809LL;
	int64_t x471 = 108663825241645269LL;
	volatile int8_t x472 = 3;
	volatile int64_t t115 = 19LL;

    t115 = (((x469%x470)/x471)&x472);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x474 = INT16_MIN;
	int8_t x475 = -59;
	static uint32_t x476 = 46182626U;
	uint32_t t116 = 118U;

    t116 = (((x473%x474)/x475)&x476);

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x477 = INT8_MAX;
	int32_t x478 = INT32_MIN;
	int8_t x479 = -1;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t117 = -368366;

    t117 = (((x477%x478)/x479)&x480);

    if (t117 != 129) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x482 = 849239396U;
	uint32_t t118 = 629U;

    t118 = (((x481%x482)/x483)&x484);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x485 = UINT16_MAX;
	int32_t x486 = 568;
	uint16_t x487 = 14162U;
	volatile int32_t x488 = -1;
	int32_t t119 = 176;

    t119 = (((x485%x486)/x487)&x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x489 = -1;
	uint8_t x490 = 44U;
	static uint32_t x492 = 65U;
	int64_t t120 = 15984LL;

    t120 = (((x489%x490)/x491)&x492);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x493 = -1;
	static int32_t x494 = -6881;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t121 = 384;

    t121 = (((x493%x494)/x495)&x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x497 = 56LLU;
	static int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MIN;

    t122 = (((x497%x498)/x499)&x500);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x501 = -1;
	volatile uint64_t x502 = UINT64_MAX;
	int8_t x503 = -31;
	volatile uint64_t x504 = 205LLU;
	volatile uint64_t t123 = 223531840120970LLU;

    t123 = (((x501%x502)/x503)&x504);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x505 = -955463965845142LL;
	volatile int64_t x506 = 404121LL;
	int64_t x508 = INT64_MAX;

    t124 = (((x505%x506)/x507)&x508);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x509 = INT16_MAX;
	uint64_t x510 = UINT64_MAX;
	int16_t x511 = INT16_MAX;
	int32_t x512 = -272567837;
	uint64_t t125 = 2650921LLU;

    t125 = (((x509%x510)/x511)&x512);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x513 = -515347768976371LL;
	uint32_t x514 = 379986U;
	int64_t x516 = -1LL;
	volatile int64_t t126 = -627902575973LL;

    t126 = (((x513%x514)/x515)&x516);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x518 = INT32_MIN;
	int16_t x519 = 14;
	int8_t x520 = 11;

    t127 = (((x517%x518)/x519)&x520);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x521 = 591U;
	static int8_t x522 = INT8_MIN;
	int32_t x523 = 205599;
	uint32_t x524 = 1262950U;

    t128 = (((x521%x522)/x523)&x524);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x530 = INT32_MAX;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 1843115LLU;
	uint64_t t129 = 180332659810LLU;

    t129 = (((x529%x530)/x531)&x532);

    if (t129 != 393LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x536 = INT8_MAX;

    t130 = (((x533%x534)/x535)&x536);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x537 = INT64_MIN;
	uint16_t x538 = 4U;
	int16_t x540 = -1;

    t131 = (((x537%x538)/x539)&x540);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x541 = INT64_MIN;
	static int8_t x542 = INT8_MIN;
	int32_t x543 = -1;
	static int8_t x544 = 1;
	int64_t t132 = 413183519873LL;

    t132 = (((x541%x542)/x543)&x544);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x549 = INT64_MIN;
	volatile int32_t x550 = 70;
	int8_t x551 = 9;
	static volatile int32_t x552 = 8309424;
	volatile int64_t t133 = -29078LL;

    t133 = (((x549%x550)/x551)&x552);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = INT32_MIN;
	static volatile int32_t x554 = 12781657;
	uint64_t x556 = UINT64_MAX;

    t134 = (((x553%x554)/x555)&x556);

    if (t134 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x558 = -5951;
	int16_t x559 = INT16_MIN;
	int8_t x560 = 1;

    t135 = (((x557%x558)/x559)&x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x561 = 618U;
	int8_t x563 = -1;
	int8_t x564 = INT8_MAX;
	volatile uint32_t t136 = 4994U;

    t136 = (((x561%x562)/x563)&x564);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = 15029;
	int64_t x566 = INT64_MAX;
	int32_t x568 = -148104419;
	static volatile int64_t t137 = 51077427077020LL;

    t137 = (((x565%x566)/x567)&x568);

    if (t137 != 284LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x569 = 63U;
	int8_t x570 = 22;
	int16_t x571 = 2;
	int32_t t138 = -28;

    t138 = (((x569%x570)/x571)&x572);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x573 = INT32_MIN;
	int16_t x574 = 3;
	int32_t x575 = -907688638;
	static int16_t x576 = 11;
	int32_t t139 = -116074671;

    t139 = (((x573%x574)/x575)&x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x577 = UINT32_MAX;
	uint32_t x578 = 44163131U;
	volatile int32_t x579 = -1;
	uint32_t x580 = 30U;
	uint32_t t140 = 2113654241U;

    t140 = (((x577%x578)/x579)&x580);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x581 = INT16_MIN;
	volatile int16_t x582 = INT16_MIN;
	static uint64_t x583 = UINT64_MAX;
	volatile uint64_t x584 = 511600LLU;
	uint64_t t141 = 115949LLU;

    t141 = (((x581%x582)/x583)&x584);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x585 = INT32_MAX;
	volatile int16_t x586 = 1;
	volatile uint16_t x587 = 54U;
	volatile int32_t t142 = 87;

    t142 = (((x585%x586)/x587)&x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x590 = 9637U;

    t143 = (((x589%x590)/x591)&x592);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x593 = -80404LL;
	int16_t x596 = INT16_MIN;
	int64_t t144 = -12058695LL;

    t144 = (((x593%x594)/x595)&x596);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	static volatile int8_t x598 = INT8_MIN;
	uint64_t x599 = UINT64_MAX;
	int32_t x600 = -18;
	uint64_t t145 = 914832857LLU;

    t145 = (((x597%x598)/x599)&x600);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	static int8_t x602 = INT8_MAX;
	uint8_t x603 = 66U;
	volatile int16_t x604 = -1776;

    t146 = (((x601%x602)/x603)&x604);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x605 = 97U;
	int16_t x606 = INT16_MIN;
	uint32_t x607 = UINT32_MAX;
	int64_t x608 = INT64_MIN;
	int64_t t147 = -628317364LL;

    t147 = (((x605%x606)/x607)&x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x609 = INT64_MIN;
	int32_t x611 = INT32_MIN;
	int16_t x612 = -1;
	volatile int64_t t148 = -97LL;

    t148 = (((x609%x610)/x611)&x612);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = INT8_MIN;
	volatile int64_t x614 = -1LL;
	uint8_t x615 = UINT8_MAX;
	static uint32_t x616 = UINT32_MAX;
	static int64_t t149 = -11817232956766LL;

    t149 = (((x613%x614)/x615)&x616);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = INT8_MAX;
	static int8_t x619 = -3;
	uint64_t t150 = 37LLU;

    t150 = (((x617%x618)/x619)&x620);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x621 = -1;
	static int64_t x623 = -6321LL;
	static int32_t x624 = INT32_MAX;
	static int64_t t151 = 123825664700832726LL;

    t151 = (((x621%x622)/x623)&x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = 30079397332LLU;
	int16_t x626 = -1;
	uint16_t x628 = 3071U;
	static uint64_t t152 = 2989729425041556261LLU;

    t152 = (((x625%x626)/x627)&x628);

    if (t152 != 14LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x629 = 72017703LLU;
	uint64_t x630 = 3050042104LLU;
	uint32_t x631 = UINT32_MAX;
	uint8_t x632 = 73U;
	static uint64_t t153 = 375LLU;

    t153 = (((x629%x630)/x631)&x632);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x637 = -237;
	int32_t x638 = INT32_MIN;
	uint32_t x639 = UINT32_MAX;
	int16_t x640 = INT16_MIN;
	static volatile uint32_t t154 = 1442498650U;

    t154 = (((x637%x638)/x639)&x640);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = 1205540793145485648LL;
	uint64_t x642 = 843939221205299743LLU;
	uint64_t x643 = 108753082560249832LLU;
	volatile uint64_t t155 = 210659126661302LLU;

    t155 = (((x641%x642)/x643)&x644);

    if (t155 != 2LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x646 = 88U;
	static int16_t x647 = 88;
	volatile int64_t x648 = INT64_MIN;
	volatile int64_t t156 = -3585267878217322124LL;

    t156 = (((x645%x646)/x647)&x648);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x650 = UINT32_MAX;
	volatile int32_t x651 = INT32_MIN;
	uint32_t x652 = UINT32_MAX;

    t157 = (((x649%x650)/x651)&x652);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x653 = 8189U;
	int8_t x654 = 7;
	uint64_t x655 = UINT64_MAX;
	volatile int64_t x656 = INT64_MIN;
	volatile uint64_t t158 = 0LLU;

    t158 = (((x653%x654)/x655)&x656);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x657 = INT64_MAX;
	int16_t x658 = -3;
	static uint8_t x659 = 3U;
	int16_t x660 = 1342;
	int64_t t159 = 54142738849848841LL;

    t159 = (((x657%x658)/x659)&x660);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x663 = 2707;
	int8_t x664 = INT8_MIN;
	static volatile uint32_t t160 = 1948U;

    t160 = (((x661%x662)/x663)&x664);

    if (t160 != 3072U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x665 = 1972U;
	volatile uint64_t x666 = UINT64_MAX;
	volatile int8_t x667 = -1;
	int32_t x668 = INT32_MAX;

    t161 = (((x665%x666)/x667)&x668);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = -197644413668313848LL;
	int16_t x671 = INT16_MAX;
	static int8_t x672 = 2;
	volatile int64_t t162 = 365934949816012LL;

    t162 = (((x669%x670)/x671)&x672);

    if (t162 != 2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x673 = 1U;
	static int64_t x674 = INT64_MAX;
	int64_t x676 = -1LL;
	volatile int64_t t163 = 4571518690216877LL;

    t163 = (((x673%x674)/x675)&x676);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x677 = 818;
	uint16_t x678 = 1893U;
	int64_t x679 = -86876991083LL;
	static int8_t x680 = -61;
	volatile int64_t t164 = 14068636289LL;

    t164 = (((x677%x678)/x679)&x680);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	static uint8_t x682 = UINT8_MAX;
	static uint16_t x683 = UINT16_MAX;
	int64_t x684 = 24800764597LL;
	volatile int64_t t165 = -939609430973LL;

    t165 = (((x681%x682)/x683)&x684);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x685 = INT16_MIN;
	uint32_t x686 = 227945U;
	int64_t x687 = 3127LL;
	int64_t x688 = INT64_MIN;
	int64_t t166 = -24595241461051LL;

    t166 = (((x685%x686)/x687)&x688);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = 0;
	int8_t x690 = INT8_MAX;
	int32_t x692 = -1;
	volatile int64_t t167 = 18296181129534864LL;

    t167 = (((x689%x690)/x691)&x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = 1;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = -59;
	volatile uint64_t t168 = 8222358782663093LLU;

    t168 = (((x693%x694)/x695)&x696);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = INT16_MIN;
	static int64_t x700 = -134842792145328LL;
	volatile int64_t t169 = 123459122597LL;

    t169 = (((x697%x698)/x699)&x700);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = INT64_MIN;
	int32_t x702 = INT32_MIN;
	uint64_t x703 = 6323754021LLU;
	int8_t x704 = -6;
	uint64_t t170 = 2533LLU;

    t170 = (((x701%x702)/x703)&x704);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x706 = INT64_MAX;
	uint64_t x707 = UINT64_MAX;
	int64_t x708 = -20130663041627LL;
	volatile uint64_t t171 = 57015857443479643LLU;

    t171 = (((x705%x706)/x707)&x708);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x710 = UINT8_MAX;
	volatile uint32_t x711 = 948253U;
	volatile int64_t x712 = INT64_MAX;
	static int64_t t172 = 1414265LL;

    t172 = (((x709%x710)/x711)&x712);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x714 = 61371955939871LL;
	volatile int32_t x715 = -552;
	uint8_t x716 = 1U;
	static volatile int64_t t173 = -6852039LL;

    t173 = (((x713%x714)/x715)&x716);

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x719 = 131448971U;
	uint8_t x720 = 1U;
	volatile uint32_t t174 = 44U;

    t174 = (((x717%x718)/x719)&x720);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x725 = -85;
	int8_t x727 = -15;
	int8_t x728 = INT8_MIN;
	int32_t t175 = -10027;

    t175 = (((x725%x726)/x727)&x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = INT64_MAX;
	uint16_t x730 = UINT16_MAX;
	uint16_t x731 = 3246U;
	int32_t x732 = INT32_MIN;
	volatile int64_t t176 = -69871406486431LL;

    t176 = (((x729%x730)/x731)&x732);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x734 = INT16_MIN;
	int32_t x736 = 193303996;
	volatile int32_t t177 = 7190;

    t177 = (((x733%x734)/x735)&x736);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x737 = -1;
	uint32_t x739 = 2109696489U;
	int64_t x740 = -1LL;
	volatile int64_t t178 = 183644LL;

    t178 = (((x737%x738)/x739)&x740);

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = -20339;
	int64_t x742 = 539063986652126884LL;
	int32_t x743 = -91975;
	static int64_t x744 = INT64_MIN;
	volatile int64_t t179 = 0LL;

    t179 = (((x741%x742)/x743)&x744);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x745 = 152425U;
	volatile int8_t x746 = 1;
	int16_t x747 = -1;
	volatile int16_t x748 = INT16_MAX;
	uint32_t t180 = 72U;

    t180 = (((x745%x746)/x747)&x748);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = -9;
	uint32_t x754 = 106671501U;
	volatile int8_t x755 = -5;
	int8_t x756 = -2;
	volatile uint32_t t181 = 90991482U;

    t181 = (((x753%x754)/x755)&x756);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x757 = 17035420573643666LLU;
	static uint32_t x758 = 505286799U;
	static int32_t x759 = -1355;
	uint64_t t182 = 931132918767LLU;

    t182 = (((x757%x758)/x759)&x760);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x761 = INT8_MAX;
	uint8_t x762 = UINT8_MAX;
	static int32_t x763 = INT32_MIN;
	volatile uint64_t t183 = 7644654151807618LLU;

    t183 = (((x761%x762)/x763)&x764);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x765 = INT16_MIN;
	volatile int8_t x766 = INT8_MIN;
	int32_t x767 = -1;
	static volatile int64_t t184 = -207LL;

    t184 = (((x765%x766)/x767)&x768);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x769 = 413U;
	int16_t x770 = 23;
	int32_t x771 = INT32_MIN;
	volatile uint16_t x772 = 112U;
	volatile int32_t t185 = -1502723;

    t185 = (((x769%x770)/x771)&x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = INT64_MIN;
	static int32_t x774 = -30;
	uint64_t x776 = 7386096937155LLU;
	uint64_t t186 = 15274396301LLU;

    t186 = (((x773%x774)/x775)&x776);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	int64_t t187 = -483036109LL;

    t187 = (((x777%x778)/x779)&x780);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x781 = INT64_MIN;
	int8_t x782 = -1;
	int64_t x783 = -14437849886910LL;
	int64_t x784 = -1LL;

    t188 = (((x781%x782)/x783)&x784);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x785 = UINT32_MAX;
	static int8_t x787 = INT8_MIN;
	static int8_t x788 = INT8_MAX;
	uint32_t t189 = 59U;

    t189 = (((x785%x786)/x787)&x788);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x791 = 40239U;
	int16_t x792 = -1;
	uint32_t t190 = 433U;

    t190 = (((x789%x790)/x791)&x792);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x793 = INT8_MAX;
	uint64_t x794 = 1852827134366LLU;
	int16_t x795 = INT16_MIN;
	volatile int16_t x796 = -1;
	uint64_t t191 = 443225319589099LLU;

    t191 = (((x793%x794)/x795)&x796);

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x798 = UINT32_MAX;
	int8_t x799 = INT8_MIN;
	int8_t x800 = -1;
	volatile uint32_t t192 = 1085869U;

    t192 = (((x797%x798)/x799)&x800);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x802 = 594037601U;
	volatile int8_t x804 = INT8_MIN;

    t193 = (((x801%x802)/x803)&x804);

    if (t193 != 268416U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x805 = 35U;
	static volatile int8_t x806 = 1;
	uint64_t x807 = 15882LLU;
	uint64_t t194 = 1987LLU;

    t194 = (((x805%x806)/x807)&x808);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x809 = 1;
	static uint16_t x811 = 5U;
	int32_t x812 = 47322;
	int64_t t195 = 11LL;

    t195 = (((x809%x810)/x811)&x812);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x813 = 3361424801LL;
	uint32_t x815 = 5U;
	int64_t x816 = INT64_MIN;
	static volatile int64_t t196 = 3029026LL;

    t196 = (((x813%x814)/x815)&x816);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = 114U;
	int32_t x818 = INT32_MIN;
	int16_t x819 = -1;
	static volatile int8_t x820 = INT8_MAX;

    t197 = (((x817%x818)/x819)&x820);

    if (t197 != 14) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x822 = INT64_MIN;
	int64_t x824 = INT64_MAX;
	int64_t t198 = 391180540346LL;

    t198 = (((x821%x822)/x823)&x824);

    if (t198 != 128LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x825 = 10719352U;
	int64_t x826 = 114LL;
	static uint32_t x827 = UINT32_MAX;
	uint32_t x828 = 308U;

    t199 = (((x825%x826)/x827)&x828);

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

