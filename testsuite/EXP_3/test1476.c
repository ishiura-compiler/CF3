
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

static int64_t x3 = -4654LL;
int64_t x4 = 6978995461LL;
uint64_t x5 = UINT64_MAX;
static volatile int32_t x12 = -1;
static uint8_t x13 = 6U;
int32_t t3 = -23;
uint16_t x21 = 14548U;
volatile int8_t x31 = INT8_MIN;
volatile int32_t t8 = 57933516;
int8_t x40 = INT8_MIN;
int32_t t9 = -684149;
volatile uint32_t x43 = 122816U;
volatile int16_t x49 = INT16_MIN;
uint32_t x55 = UINT32_MAX;
volatile int32_t t13 = 0;
static int32_t x88 = INT32_MIN;
volatile int32_t t22 = 1;
int8_t x99 = -1;
static int32_t x106 = INT32_MIN;
int64_t x109 = INT64_MIN;
volatile int64_t x111 = INT64_MAX;
int32_t t27 = 238226;
volatile int32_t t28 = 664329869;
volatile int16_t x118 = INT16_MIN;
int16_t x121 = INT16_MIN;
static uint8_t x122 = 126U;
uint8_t x123 = 15U;
int32_t x126 = INT32_MIN;
static uint16_t x134 = 2U;
static int64_t x137 = INT64_MIN;
uint8_t x138 = UINT8_MAX;
int8_t x140 = INT8_MIN;
int32_t x143 = -1;
int64_t x151 = 2859127730821299LL;
volatile int32_t t37 = 27898;
uint32_t x153 = 1467512542U;
volatile int64_t x156 = 417301620981706273LL;
int8_t x167 = INT8_MIN;
uint64_t x168 = 207905583166537LLU;
volatile int8_t x176 = INT8_MAX;
static volatile uint16_t x181 = 29U;
volatile uint32_t x182 = 8U;
int16_t x184 = 0;
int16_t x189 = -116;
int8_t x193 = -1;
int8_t x194 = INT8_MIN;
int64_t x197 = INT64_MIN;
int16_t x199 = INT16_MAX;
uint16_t x207 = UINT16_MAX;
static volatile uint8_t x211 = 21U;
int8_t x212 = -1;
static uint64_t x213 = UINT64_MAX;
volatile int8_t x227 = INT8_MIN;
int64_t x228 = INT64_MIN;
volatile int32_t x237 = INT32_MAX;
uint16_t x244 = UINT16_MAX;
static int16_t x249 = -1;
int32_t x253 = -13957666;
int16_t x256 = INT16_MIN;
uint8_t x257 = UINT8_MAX;
uint16_t x259 = 15246U;
int16_t x262 = INT16_MIN;
volatile uint32_t x266 = 196786U;
int16_t x281 = INT16_MAX;
int16_t x282 = INT16_MAX;
static uint8_t x287 = 2U;
volatile int32_t t72 = 12754018;
int64_t x298 = INT64_MAX;
int32_t x300 = 96;
static int8_t x301 = 34;
int64_t x303 = INT64_MAX;
uint8_t x306 = UINT8_MAX;
volatile int32_t t76 = 2;
static int32_t t77 = -1;
static int32_t x316 = -1;
int32_t t78 = -419602961;
int32_t x317 = INT32_MAX;
int16_t x333 = INT16_MIN;
int8_t x342 = INT8_MAX;
uint32_t x349 = 535088U;
int64_t x353 = INT64_MIN;
uint16_t x358 = UINT16_MAX;
int32_t x366 = -1;
uint32_t x368 = 777U;
int32_t t91 = -18261032;
static int64_t x370 = -1LL;
volatile int32_t t94 = 25008;
volatile int8_t x390 = INT8_MIN;
int16_t x393 = 12282;
volatile int16_t x396 = INT16_MIN;
int32_t x399 = 294436;
int16_t x406 = INT16_MIN;
volatile int32_t t102 = 1;
static int8_t x415 = INT8_MIN;
int16_t x418 = 4701;
uint32_t x423 = 2048582096U;
int64_t x424 = INT64_MIN;
volatile int32_t t105 = -96;
uint8_t x425 = UINT8_MAX;
uint64_t x426 = 23LLU;
volatile int32_t t107 = 2062;
static volatile int32_t t108 = 529356172;
int32_t x440 = INT32_MIN;
uint16_t x444 = 32U;
volatile int16_t x445 = INT16_MIN;
uint64_t x447 = UINT64_MAX;
uint64_t x448 = UINT64_MAX;
int8_t x449 = INT8_MIN;
volatile uint32_t x450 = 78135578U;
volatile int32_t t113 = 2063116;
volatile int32_t x461 = INT32_MIN;
int16_t x469 = INT16_MIN;
static volatile int64_t x470 = 3816973753856LL;
int64_t x471 = INT64_MAX;
volatile int8_t x472 = INT8_MIN;
int32_t x474 = -1;
int8_t x479 = -1;
uint8_t x480 = UINT8_MAX;
static uint64_t x481 = UINT64_MAX;
int64_t x483 = INT64_MIN;
int8_t x486 = -1;
uint8_t x489 = 1U;
int8_t x493 = INT8_MIN;
static int8_t x496 = -1;
volatile int16_t x501 = INT16_MAX;
volatile uint8_t x508 = UINT8_MAX;
static int32_t x515 = -100;
static volatile uint64_t x521 = UINT64_MAX;
int32_t t130 = 888;
int16_t x526 = 215;
uint16_t x528 = 8U;
int16_t x533 = -6684;
int32_t x534 = -1;
int32_t t133 = -3;
int32_t t135 = 55976;
int8_t x548 = 0;
int32_t t136 = -3;
static volatile int32_t t138 = 1;
uint8_t x559 = 0U;
int32_t t140 = 341088154;
int32_t x571 = 0;
int32_t x574 = 3;
int8_t x578 = 8;
volatile uint32_t x585 = UINT32_MAX;
int16_t x595 = INT16_MAX;
volatile int32_t t148 = -3176;
static uint8_t x600 = 1U;
int32_t x604 = -17579700;
uint16_t x606 = 31833U;
int64_t x612 = INT64_MAX;
int8_t x615 = -1;
static volatile uint64_t x616 = UINT64_MAX;
int8_t x617 = -1;
volatile uint16_t x619 = 170U;
uint64_t x620 = 3711LLU;
static volatile int32_t t154 = 6795468;
volatile int64_t x628 = 26LL;
int64_t x635 = 159276970LL;
static volatile int16_t x643 = -1;
int32_t t160 = 24987;
int16_t x645 = -158;
static int32_t x648 = INT32_MAX;
volatile int32_t t161 = 1672850;
int16_t x649 = 3369;
int8_t x656 = INT8_MIN;
static uint64_t x657 = 14641410250523LLU;
volatile uint64_t x658 = 624410276LLU;
uint32_t x668 = 2975U;
volatile uint8_t x669 = 1U;
static volatile int32_t t167 = 2518;
volatile int16_t x677 = -1;
static uint8_t x679 = 3U;
uint32_t x681 = UINT32_MAX;
static int16_t x684 = INT16_MAX;
int32_t t172 = -10;
static int8_t x693 = INT8_MAX;
int8_t x694 = INT8_MIN;
volatile int64_t x695 = INT64_MIN;
int32_t t173 = 61758196;
static volatile int16_t x697 = INT16_MAX;
int32_t t174 = -1;
int16_t x702 = 1;
int8_t x704 = -1;
int32_t t177 = 52802;
static uint64_t x718 = 191041997LLU;
int8_t x719 = INT8_MIN;
int32_t x723 = 4;
static int32_t x724 = 2038250;
volatile uint8_t x727 = UINT8_MAX;
uint16_t x730 = 17U;
int64_t x731 = -1LL;
int8_t x745 = -1;
static uint8_t x746 = UINT8_MAX;
volatile int8_t x755 = -4;
static int8_t x756 = -1;
int32_t x763 = 10274;
volatile int32_t x764 = INT32_MIN;
static volatile int32_t t190 = 339106;
volatile int8_t x773 = -25;
uint8_t x775 = 14U;
uint64_t x776 = 3LLU;
volatile uint64_t x789 = 2LLU;
static volatile int64_t x791 = INT64_MIN;
static int32_t x796 = 72120;
static int64_t x799 = INT64_MIN;


void f0(void) {
    	int32_t x1 = -1;
	static int8_t x2 = 29;
	volatile int32_t t0 = -29375348;

    t0 = ((x1==x2)<<(x3==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	uint64_t x7 = 70328502358922457LLU;
	volatile int16_t x8 = -1;
	volatile int32_t t1 = 5;

    t1 = ((x5==x6)<<(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	int8_t x10 = -10;
	int16_t x11 = -1;
	int32_t t2 = 3096;

    t2 = ((x9==x10)<<(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 0U;
	volatile int64_t x15 = -34895971145455LL;
	uint16_t x16 = 0U;

    t3 = ((x13==x14)<<(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	static uint64_t x18 = UINT64_MAX;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 162;

    t4 = ((x17==x18)<<(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -32;
	int8_t x23 = -50;
	int8_t x24 = 29;
	int32_t t5 = 44868;

    t5 = ((x21==x22)<<(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -1LL;
	static int16_t x26 = -16;
	static int32_t x27 = -1;
	static volatile uint8_t x28 = UINT8_MAX;
	static int32_t t6 = 92380268;

    t6 = ((x25==x26)<<(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	uint16_t x30 = 14U;
	static volatile int8_t x32 = 16;
	int32_t t7 = -40778;

    t7 = ((x29==x30)<<(x31==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = UINT32_MAX;
	uint64_t x34 = 0LLU;
	volatile uint16_t x35 = 26U;
	int64_t x36 = 10124635217362LL;

    t8 = ((x33==x34)<<(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	uint64_t x39 = 20LLU;

    t9 = ((x37==x38)<<(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 12272U;
	uint32_t x42 = 16051U;
	int8_t x44 = 6;
	volatile int32_t t10 = -294492075;

    t10 = ((x41==x42)<<(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static int64_t x46 = -12353848713LL;
	volatile uint64_t x47 = UINT64_MAX;
	uint8_t x48 = 12U;
	int32_t t11 = 16221757;

    t11 = ((x45==x46)<<(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MAX;
	int16_t x51 = 52;
	static uint32_t x52 = 370U;
	volatile int32_t t12 = 665;

    t12 = ((x49==x50)<<(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int64_t x54 = 1LL;
	int8_t x56 = -1;

    t13 = ((x53==x54)<<(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 1U;
	uint32_t x58 = 60846U;
	int8_t x59 = INT8_MIN;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 1289;

    t14 = ((x57==x58)<<(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	int64_t x62 = -456658060LL;
	int16_t x63 = INT16_MAX;
	int8_t x64 = -1;
	int32_t t15 = -4341013;

    t15 = ((x61==x62)<<(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 904U;
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MAX;
	static uint8_t x68 = 7U;
	volatile int32_t t16 = -23518101;

    t16 = ((x65==x66)<<(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 32141;
	static int8_t x70 = INT8_MIN;
	volatile uint64_t x71 = UINT64_MAX;
	int64_t x72 = -1LL;
	static int32_t t17 = 1;

    t17 = ((x69==x70)<<(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static int16_t x74 = INT16_MIN;
	static uint8_t x75 = 7U;
	uint64_t x76 = 160144LLU;
	volatile int32_t t18 = -3;

    t18 = ((x73==x74)<<(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	uint64_t x78 = 266405429294LLU;
	static int64_t x79 = INT64_MIN;
	int64_t x80 = -1LL;
	volatile int32_t t19 = -6775;

    t19 = ((x77==x78)<<(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x81 = 1U;
	int8_t x82 = INT8_MIN;
	volatile uint16_t x83 = 935U;
	static int8_t x84 = -1;
	volatile int32_t t20 = 919;

    t20 = ((x81==x82)<<(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = INT32_MIN;
	int32_t x87 = 276415374;
	static int32_t t21 = 3679694;

    t21 = ((x85==x86)<<(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 5504;
	uint8_t x90 = 5U;
	int16_t x91 = -9757;
	static int64_t x92 = INT64_MIN;

    t22 = ((x89==x90)<<(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 213;
	volatile uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MAX;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 216914033;

    t23 = ((x93==x94)<<(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	static int32_t x100 = INT32_MAX;
	static int32_t t24 = -1734243;

    t24 = ((x97==x98)<<(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	static int8_t x102 = 4;
	static uint32_t x103 = 34U;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 106693841;

    t25 = ((x101==x102)<<(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	volatile int64_t x107 = -1LL;
	volatile int16_t x108 = -29;
	static volatile int32_t t26 = -50284419;

    t26 = ((x105==x106)<<(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = 2218215;
	int64_t x112 = INT64_MIN;

    t27 = ((x109==x110)<<(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int64_t x114 = INT64_MAX;
	int64_t x115 = 26501796610854LL;
	volatile uint32_t x116 = 109911184U;

    t28 = ((x113==x114)<<(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	volatile int32_t x119 = -1;
	int16_t x120 = 0;
	int32_t t29 = 1;

    t29 = ((x117==x118)<<(x119==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -24431805;

    t30 = ((x121==x122)<<(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -192300;

    t31 = ((x125==x126)<<(x127==x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MIN;
	static volatile int8_t x131 = INT8_MAX;
	volatile int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 5868300;

    t32 = ((x129==x130)<<(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MAX;
	volatile int32_t x135 = 408;
	static int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 1;

    t33 = ((x133==x134)<<(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x139 = UINT8_MAX;
	volatile int32_t t34 = -25622;

    t34 = ((x137==x138)<<(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 27U;
	uint32_t x142 = 23091685U;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 5903;

    t35 = ((x141==x142)<<(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	uint16_t x146 = 701U;
	static uint8_t x147 = 83U;
	volatile uint16_t x148 = 80U;
	int32_t t36 = -10;

    t36 = ((x145==x146)<<(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = UINT16_MAX;
	uint64_t x150 = 56699502930LLU;
	int64_t x152 = INT64_MIN;

    t37 = ((x149==x150)<<(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = INT8_MIN;
	static int64_t x155 = INT64_MAX;
	int32_t t38 = 22007;

    t38 = ((x153==x154)<<(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = 11770;
	volatile int32_t t39 = 220;

    t39 = ((x157==x158)<<(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	static int16_t x162 = INT16_MIN;
	static int8_t x163 = 23;
	uint8_t x164 = 17U;
	volatile int32_t t40 = -1406;

    t40 = ((x161==x162)<<(x163==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	static int32_t x166 = INT32_MAX;
	volatile int32_t t41 = 2536;

    t41 = ((x165==x166)<<(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 158251LL;
	volatile int16_t x170 = -1;
	int16_t x171 = 823;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 1136355;

    t42 = ((x169==x170)<<(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = 2U;
	volatile int8_t x174 = INT8_MAX;
	int8_t x175 = 0;
	volatile int32_t t43 = 488321;

    t43 = ((x173==x174)<<(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = 2441;
	volatile int64_t x178 = 3177727751LL;
	int64_t x179 = INT64_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 1;

    t44 = ((x177==x178)<<(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x183 = 2527;
	int32_t t45 = -61;

    t45 = ((x181==x182)<<(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 24;
	int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 9743LLU;
	int32_t t46 = -385387;

    t46 = ((x185==x186)<<(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	int32_t x191 = -1349722;
	int64_t x192 = INT64_MIN;
	int32_t t47 = 632868879;

    t47 = ((x189==x190)<<(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x195 = -254;
	int8_t x196 = -1;
	volatile int32_t t48 = 302171092;

    t48 = ((x193==x194)<<(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x198 = 0U;
	static int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 7;

    t49 = ((x197==x198)<<(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	static int32_t x203 = -1;
	int32_t x204 = -1;
	volatile int32_t t50 = -827023469;

    t50 = ((x201==x202)<<(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	uint64_t x208 = 8693437254262LLU;
	int32_t t51 = 394;

    t51 = ((x205==x206)<<(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	uint16_t x210 = 3198U;
	int32_t t52 = 166712;

    t52 = ((x209==x210)<<(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	volatile int8_t x215 = 1;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t53 = 22;

    t53 = ((x213==x214)<<(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	volatile int16_t x218 = INT16_MAX;
	volatile int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	int32_t t54 = -51603723;

    t54 = ((x217==x218)<<(x219==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x222 = -4781475LL;
	int64_t x223 = INT64_MAX;
	volatile int16_t x224 = INT16_MAX;
	int32_t t55 = -1;

    t55 = ((x221==x222)<<(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	uint64_t x226 = UINT64_MAX;
	int32_t t56 = 343;

    t56 = ((x225==x226)<<(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = UINT32_MAX;
	volatile int32_t t57 = -187170;

    t57 = ((x229==x230)<<(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	volatile uint8_t x234 = 3U;
	static int8_t x235 = 25;
	static int32_t x236 = 25623;
	volatile int32_t t58 = 94;

    t58 = ((x233==x234)<<(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 47570LLU;
	volatile int16_t x239 = -1;
	static int64_t x240 = 415275519842362LL;
	static volatile int32_t t59 = 12;

    t59 = ((x237==x238)<<(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -2223630110693216565LL;
	volatile int8_t x242 = 6;
	int16_t x243 = INT16_MIN;
	volatile int32_t t60 = -61;

    t60 = ((x241==x242)<<(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 0;
	volatile uint32_t x246 = 16U;
	volatile uint16_t x247 = 6U;
	uint64_t x248 = 224959LLU;
	int32_t t61 = -280244032;

    t61 = ((x245==x246)<<(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -1;
	volatile int8_t x252 = -1;
	volatile int32_t t62 = -358;

    t62 = ((x249==x250)<<(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = 2530057LL;
	int64_t x255 = -1LL;
	static int32_t t63 = -1435;

    t63 = ((x253==x254)<<(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x258 = 95462395099LLU;
	volatile int32_t x260 = -230741653;
	volatile int32_t t64 = 66198811;

    t64 = ((x257==x258)<<(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	static volatile int16_t x263 = INT16_MIN;
	uint16_t x264 = 9U;
	volatile int32_t t65 = 531319714;

    t65 = ((x261==x262)<<(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 1U;
	static int32_t x267 = -1;
	static int16_t x268 = 337;
	volatile int32_t t66 = 2899723;

    t66 = ((x265==x266)<<(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = INT64_MIN;
	uint32_t x270 = 13616165U;
	volatile int16_t x271 = -1;
	int16_t x272 = -1;
	static volatile int32_t t67 = -2460;

    t67 = ((x269==x270)<<(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = 1;
	static int16_t x274 = -1;
	int8_t x275 = 15;
	int16_t x276 = -1;
	volatile int32_t t68 = -1419;

    t68 = ((x273==x274)<<(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 609U;
	volatile int8_t x278 = INT8_MAX;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 4624;

    t69 = ((x277==x278)<<(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = 6445;

    t70 = ((x281==x282)<<(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 4U;
	static int32_t x286 = -1;
	uint8_t x288 = 55U;
	int32_t t71 = -7650845;

    t71 = ((x285==x286)<<(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	uint32_t x290 = 2U;
	static uint16_t x291 = UINT16_MAX;
	int16_t x292 = 1;

    t72 = ((x289==x290)<<(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = -1LL;
	volatile int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MAX;
	volatile int32_t t73 = -158660199;

    t73 = ((x293==x294)<<(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = -1458;
	int64_t x299 = 4942774434322729LL;
	int32_t t74 = -12401239;

    t74 = ((x297==x298)<<(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = 221;
	static uint32_t x304 = 26U;
	volatile int32_t t75 = 18994720;

    t75 = ((x301==x302)<<(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	uint8_t x307 = 3U;
	uint16_t x308 = 53U;

    t76 = ((x305==x306)<<(x307==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	int64_t x310 = -58342LL;
	volatile uint8_t x311 = 1U;
	static int32_t x312 = -1;

    t77 = ((x309==x310)<<(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	int64_t x314 = 278LL;
	int64_t x315 = INT64_MAX;

    t78 = ((x313==x314)<<(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = 110U;
	int16_t x319 = -30;
	static volatile int16_t x320 = 0;
	volatile int32_t t79 = -407952936;

    t79 = ((x317==x318)<<(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 22961047U;
	volatile int32_t x322 = 45;
	uint32_t x323 = UINT32_MAX;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = -139;

    t80 = ((x321==x322)<<(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = 0;
	int8_t x326 = INT8_MAX;
	int64_t x327 = -1LL;
	int64_t x328 = -1LL;
	static volatile int32_t t81 = 235565;

    t81 = ((x325==x326)<<(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 9U;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 113LLU;
	int32_t x332 = 1540;
	int32_t t82 = 355793818;

    t82 = ((x329==x330)<<(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MAX;
	int32_t x335 = INT32_MIN;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1684219;

    t83 = ((x333==x334)<<(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x337 = 34U;
	static volatile int8_t x338 = INT8_MAX;
	int16_t x339 = -1;
	int64_t x340 = 174155067007265728LL;
	volatile int32_t t84 = -16206;

    t84 = ((x337==x338)<<(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 5277908079021450654LLU;
	static volatile int16_t x343 = INT16_MIN;
	static int32_t x344 = -9048859;
	volatile int32_t t85 = 14520918;

    t85 = ((x341==x342)<<(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	static uint8_t x346 = UINT8_MAX;
	volatile uint16_t x347 = 2U;
	static uint32_t x348 = 1758U;
	static int32_t t86 = 0;

    t86 = ((x345==x346)<<(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static int64_t x352 = INT64_MIN;
	int32_t t87 = 2488012;

    t87 = ((x349==x350)<<(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = 23076608913LL;
	int8_t x355 = -1;
	int64_t x356 = 2185529404455662LL;
	int32_t t88 = 441989014;

    t88 = ((x353==x354)<<(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	static uint64_t x359 = 40471984157753LLU;
	static int16_t x360 = 660;
	int32_t t89 = -145;

    t89 = ((x357==x358)<<(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MAX;
	int16_t x362 = INT16_MAX;
	int64_t x363 = 17170688912535LL;
	uint8_t x364 = 6U;
	static volatile int32_t t90 = -17605956;

    t90 = ((x361==x362)<<(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -214103802794308208LL;
	int8_t x367 = -1;

    t91 = ((x365==x366)<<(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -136447268847383LL;
	volatile int16_t x371 = -72;
	uint64_t x372 = 1495366872LLU;
	int32_t t92 = 120272236;

    t92 = ((x369==x370)<<(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = -1;
	int32_t x376 = INT32_MIN;
	static int32_t t93 = 14057666;

    t93 = ((x373==x374)<<(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	volatile int64_t x378 = 172346660327755LL;
	int16_t x379 = -1;
	int8_t x380 = -2;

    t94 = ((x377==x378)<<(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = 393983322U;
	int64_t x382 = INT64_MIN;
	static volatile int64_t x383 = 180968598441LL;
	int8_t x384 = -1;
	volatile int32_t t95 = 1120737;

    t95 = ((x381==x382)<<(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x385 = INT8_MAX;
	int16_t x386 = 1;
	static int16_t x387 = INT16_MAX;
	static uint32_t x388 = UINT32_MAX;
	int32_t t96 = 8;

    t96 = ((x385==x386)<<(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = -5;
	int16_t x391 = INT16_MAX;
	static volatile int32_t x392 = -1;
	int32_t t97 = 0;

    t97 = ((x389==x390)<<(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = INT32_MAX;
	volatile int64_t x395 = INT64_MIN;
	int32_t t98 = 5390582;

    t98 = ((x393==x394)<<(x395==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x397 = INT32_MAX;
	uint64_t x398 = 2LLU;
	uint32_t x400 = UINT32_MAX;
	int32_t t99 = 29325;

    t99 = ((x397==x398)<<(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	int8_t x402 = -1;
	static uint8_t x403 = UINT8_MAX;
	volatile uint64_t x404 = 2391337852190667LLU;
	static volatile int32_t t100 = 1;

    t100 = ((x401==x402)<<(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	uint32_t x407 = 1454036164U;
	uint32_t x408 = 8U;
	static int32_t t101 = -1702;

    t101 = ((x405==x406)<<(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MAX;
	static uint64_t x410 = 182994LLU;
	int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;

    t102 = ((x409==x410)<<(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 37U;
	int32_t x414 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 1628;

    t103 = ((x413==x414)<<(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -1;
	uint64_t x419 = 234293467488LLU;
	volatile uint16_t x420 = 1730U;
	volatile int32_t t104 = 3;

    t104 = ((x417==x418)<<(x419==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = 5;
	uint64_t x422 = 29981687334LLU;

    t105 = ((x421==x422)<<(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x427 = INT64_MAX;
	static int32_t x428 = -1;
	volatile int32_t t106 = -3732942;

    t106 = ((x425==x426)<<(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x430 = INT16_MIN;
	int64_t x431 = -13LL;
	volatile uint64_t x432 = 402LLU;

    t107 = ((x429==x430)<<(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	volatile uint32_t x434 = 778011394U;
	int16_t x435 = -1;
	uint64_t x436 = 13LLU;

    t108 = ((x433==x434)<<(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile uint64_t x438 = UINT64_MAX;
	uint64_t x439 = UINT64_MAX;
	static int32_t t109 = 422;

    t109 = ((x437==x438)<<(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MAX;
	volatile uint32_t x443 = 12882991U;
	volatile int32_t t110 = -14;

    t110 = ((x441==x442)<<(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x446 = UINT32_MAX;
	int32_t t111 = 809;

    t111 = ((x445==x446)<<(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x451 = -1LL;
	int32_t x452 = INT32_MAX;
	volatile int32_t t112 = -191814;

    t112 = ((x449==x450)<<(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MAX;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = -1LL;

    t113 = ((x453==x454)<<(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x457 = 1611U;
	volatile int32_t x458 = -1;
	uint8_t x459 = UINT8_MAX;
	static int64_t x460 = -6519951822534LL;
	int32_t t114 = 224910;

    t114 = ((x457==x458)<<(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = 222870U;
	int16_t x463 = 1;
	static int32_t x464 = -1;
	volatile int32_t t115 = -4914793;

    t115 = ((x461==x462)<<(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = 8U;
	int16_t x466 = INT16_MIN;
	uint8_t x467 = 112U;
	static int64_t x468 = INT64_MIN;
	volatile int32_t t116 = 16856;

    t116 = ((x465==x466)<<(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t t117 = -20572190;

    t117 = ((x469==x470)<<(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 3755214940LLU;
	int8_t x475 = INT8_MIN;
	int64_t x476 = INT64_MIN;
	int32_t t118 = 3;

    t118 = ((x473==x474)<<(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -4LL;
	volatile int16_t x478 = 0;
	volatile int32_t t119 = -11;

    t119 = ((x477==x478)<<(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = UINT16_MAX;
	int32_t x484 = INT32_MIN;
	volatile int32_t t120 = -19827;

    t120 = ((x481==x482)<<(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = 126U;
	int64_t x487 = -1346688LL;
	int8_t x488 = INT8_MIN;
	static volatile int32_t t121 = 879608;

    t121 = ((x485==x486)<<(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = -19;
	static int32_t x491 = -1;
	int64_t x492 = -1428LL;
	int32_t t122 = 487;

    t122 = ((x489==x490)<<(x491==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x494 = -1;
	int64_t x495 = -10LL;
	int32_t t123 = 9;

    t123 = ((x493==x494)<<(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x497 = 1U;
	uint8_t x498 = 1U;
	uint64_t x499 = 157178231LLU;
	uint64_t x500 = UINT64_MAX;
	volatile int32_t t124 = 6194172;

    t124 = ((x497==x498)<<(x499==x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MIN;
	volatile uint64_t x503 = 50246459LLU;
	volatile int64_t x504 = -53979009720498301LL;
	volatile int32_t t125 = 125051685;

    t125 = ((x501==x502)<<(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 130184156U;
	int16_t x506 = -1;
	volatile int64_t x507 = -975594262333519LL;
	volatile int32_t t126 = 3;

    t126 = ((x505==x506)<<(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 66U;
	static uint64_t x510 = 2608775654714135089LLU;
	int8_t x511 = 0;
	uint8_t x512 = 21U;
	static int32_t t127 = 15892;

    t127 = ((x509==x510)<<(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int8_t x514 = INT8_MAX;
	int32_t x516 = -1;
	volatile int32_t t128 = -228467414;

    t128 = ((x513==x514)<<(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = 59;
	uint16_t x518 = 1739U;
	uint16_t x519 = 1016U;
	int16_t x520 = INT16_MIN;
	int32_t t129 = -5324836;

    t129 = ((x517==x518)<<(x519==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = -1;
	uint16_t x523 = 2674U;
	int8_t x524 = 30;

    t130 = ((x521==x522)<<(x523==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	uint64_t x527 = 13769693384865562LLU;
	volatile int32_t t131 = -680376;

    t131 = ((x525==x526)<<(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 0U;
	int8_t x530 = INT8_MAX;
	static volatile int32_t x531 = INT32_MAX;
	uint32_t x532 = UINT32_MAX;
	static int32_t t132 = -11428296;

    t132 = ((x529==x530)<<(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x535 = INT8_MAX;
	int8_t x536 = -1;

    t133 = ((x533==x534)<<(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -1;
	uint8_t x538 = 33U;
	int32_t x539 = INT32_MAX;
	int64_t x540 = -75269489LL;
	int32_t t134 = 368201622;

    t134 = ((x537==x538)<<(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -7525;
	volatile uint32_t x542 = 776U;
	int64_t x543 = INT64_MIN;
	volatile int32_t x544 = INT32_MIN;

    t135 = ((x541==x542)<<(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = -1;
	volatile int8_t x546 = -1;
	int32_t x547 = 2;

    t136 = ((x545==x546)<<(x547==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	int32_t x550 = -1;
	static volatile uint32_t x551 = 806360U;
	static int8_t x552 = INT8_MAX;
	volatile int32_t t137 = -565;

    t137 = ((x549==x550)<<(x551==x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = 0LL;
	int32_t x554 = 1825;
	static int16_t x555 = INT16_MIN;
	static volatile int32_t x556 = INT32_MIN;

    t138 = ((x553==x554)<<(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 35511672069LL;
	int64_t x558 = -1LL;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = 122;

    t139 = ((x557==x558)<<(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	volatile int8_t x562 = -1;
	static int8_t x563 = -1;
	int32_t x564 = -1;

    t140 = ((x561==x562)<<(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 1038122742;
	int64_t x566 = -1LL;
	volatile uint32_t x567 = 1023988600U;
	int32_t x568 = INT32_MAX;
	static volatile int32_t t141 = 4408;

    t141 = ((x565==x566)<<(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MAX;
	int32_t x572 = INT32_MAX;
	volatile int32_t t142 = -39404;

    t142 = ((x569==x570)<<(x571==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x573 = INT32_MIN;
	static uint16_t x575 = 1U;
	int64_t x576 = -1LL;
	volatile int32_t t143 = 429852223;

    t143 = ((x573==x574)<<(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 88U;
	int16_t x579 = 58;
	uint16_t x580 = 3440U;
	volatile int32_t t144 = -6337868;

    t144 = ((x577==x578)<<(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x581 = INT8_MIN;
	static volatile int16_t x582 = INT16_MIN;
	int8_t x583 = -1;
	static uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = 7155;

    t145 = ((x581==x582)<<(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x586 = UINT8_MAX;
	int8_t x587 = -1;
	volatile uint16_t x588 = 2U;
	int32_t t146 = -6716672;

    t146 = ((x585==x586)<<(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint16_t x590 = 142U;
	static int32_t x591 = INT32_MIN;
	int64_t x592 = INT64_MAX;
	int32_t t147 = -59243;

    t147 = ((x589==x590)<<(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x593 = 17U;
	volatile int8_t x594 = -1;
	uint8_t x596 = UINT8_MAX;

    t148 = ((x593==x594)<<(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1415659;
	volatile int16_t x598 = INT16_MIN;
	int32_t x599 = 2;
	static int32_t t149 = 64731828;

    t149 = ((x597==x598)<<(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	int16_t x602 = 1714;
	uint64_t x603 = UINT64_MAX;
	volatile int32_t t150 = 1018220;

    t150 = ((x601==x602)<<(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	uint16_t x607 = 301U;
	int64_t x608 = 115663430747618LL;
	volatile int32_t t151 = -956348912;

    t151 = ((x605==x606)<<(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	static int8_t x610 = 1;
	static int16_t x611 = INT16_MIN;
	static int32_t t152 = 44357224;

    t152 = ((x609==x610)<<(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = 61567698;
	int16_t x614 = INT16_MAX;
	volatile int32_t t153 = 7153179;

    t153 = ((x613==x614)<<(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = 299439082760928067LL;

    t154 = ((x617==x618)<<(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = INT16_MIN;
	int32_t x622 = -1;
	uint64_t x623 = 26291120783783LLU;
	int8_t x624 = 0;
	volatile int32_t t155 = -897456292;

    t155 = ((x621==x622)<<(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = UINT32_MAX;
	uint16_t x626 = UINT16_MAX;
	uint64_t x627 = 3590052LLU;
	int32_t t156 = 371;

    t156 = ((x625==x626)<<(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 662LLU;
	static volatile int64_t x630 = 13229968LL;
	uint64_t x631 = 5151461LLU;
	int32_t x632 = INT32_MIN;
	volatile int32_t t157 = 0;

    t157 = ((x629==x630)<<(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	static int32_t x634 = INT32_MAX;
	static int16_t x636 = -51;
	volatile int32_t t158 = 626;

    t158 = ((x633==x634)<<(x635==x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	static int32_t x638 = -65;
	uint32_t x639 = 1030498305U;
	uint8_t x640 = 32U;
	int32_t t159 = 1;

    t159 = ((x637==x638)<<(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x641 = INT64_MIN;
	uint8_t x642 = 26U;
	volatile int16_t x644 = INT16_MAX;

    t160 = ((x641==x642)<<(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x646 = 6665053U;
	int32_t x647 = -1;

    t161 = ((x645==x646)<<(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x650 = 1165430451613707465LL;
	int32_t x651 = -1;
	uint16_t x652 = 4074U;
	int32_t t162 = 1040793;

    t162 = ((x649==x650)<<(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	uint16_t x654 = UINT16_MAX;
	int8_t x655 = 0;
	volatile int32_t t163 = -435845;

    t163 = ((x653==x654)<<(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x659 = -823448LL;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -115763825;

    t164 = ((x657==x658)<<(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 1489U;
	uint64_t x662 = UINT64_MAX;
	static volatile int64_t x663 = INT64_MIN;
	uint16_t x664 = UINT16_MAX;
	static volatile int32_t t165 = 695;

    t165 = ((x661==x662)<<(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int32_t x666 = -9093;
	uint8_t x667 = UINT8_MAX;
	int32_t t166 = 3;

    t166 = ((x665==x666)<<(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x670 = INT16_MAX;
	int16_t x671 = 820;
	int32_t x672 = -5;

    t167 = ((x669==x670)<<(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 19;
	int32_t x674 = INT32_MIN;
	int16_t x675 = 6;
	volatile uint64_t x676 = UINT64_MAX;
	int32_t t168 = 292;

    t168 = ((x673==x674)<<(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x678 = INT32_MIN;
	int16_t x680 = INT16_MAX;
	volatile int32_t t169 = -9;

    t169 = ((x677==x678)<<(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x682 = 62U;
	uint32_t x683 = UINT32_MAX;
	static volatile int32_t t170 = -661626;

    t170 = ((x681==x682)<<(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 5363U;
	int16_t x686 = -1;
	uint16_t x687 = 21U;
	uint32_t x688 = 1519U;
	volatile int32_t t171 = 38035;

    t171 = ((x685==x686)<<(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	static volatile int8_t x690 = INT8_MIN;
	uint8_t x691 = 95U;
	volatile int8_t x692 = -1;

    t172 = ((x689==x690)<<(x691==x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x696 = UINT32_MAX;

    t173 = ((x693==x694)<<(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = -1LL;
	int16_t x699 = -1;
	volatile int32_t x700 = INT32_MAX;

    t174 = ((x697==x698)<<(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -101;
	uint64_t x703 = UINT64_MAX;
	int32_t t175 = 346775;

    t175 = ((x701==x702)<<(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -1LL;
	uint8_t x706 = 67U;
	static uint16_t x707 = 8782U;
	int32_t x708 = INT32_MIN;
	static int32_t t176 = -168965;

    t176 = ((x705==x706)<<(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = 31U;
	int64_t x710 = INT64_MIN;
	int64_t x711 = INT64_MIN;
	volatile uint8_t x712 = UINT8_MAX;

    t177 = ((x709==x710)<<(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = UINT16_MAX;
	volatile int64_t x714 = INT64_MIN;
	volatile uint64_t x715 = UINT64_MAX;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = 776;

    t178 = ((x713==x714)<<(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = 2U;
	int16_t x720 = 1;
	int32_t t179 = 187109650;

    t179 = ((x717==x718)<<(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x721 = -41469;
	volatile int16_t x722 = INT16_MIN;
	static volatile int32_t t180 = 10386497;

    t180 = ((x721==x722)<<(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 106U;
	int8_t x726 = -1;
	int16_t x728 = -1;
	volatile int32_t t181 = -2175;

    t181 = ((x725==x726)<<(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int8_t x732 = INT8_MIN;
	int32_t t182 = 0;

    t182 = ((x729==x730)<<(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 1927828737167LLU;
	int64_t x734 = INT64_MAX;
	int8_t x735 = -1;
	int64_t x736 = INT64_MIN;
	int32_t t183 = 18963108;

    t183 = ((x733==x734)<<(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -3;
	static uint8_t x738 = 99U;
	int8_t x739 = INT8_MAX;
	int32_t x740 = INT32_MAX;
	int32_t t184 = 266588559;

    t184 = ((x737==x738)<<(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -16205021514006184LL;
	volatile int8_t x742 = 9;
	int8_t x743 = INT8_MAX;
	int32_t x744 = -193;
	volatile int32_t t185 = -3;

    t185 = ((x741==x742)<<(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x747 = UINT64_MAX;
	volatile uint8_t x748 = 110U;
	static int32_t t186 = -779;

    t186 = ((x745==x746)<<(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x750 = 51U;
	uint32_t x751 = UINT32_MAX;
	int64_t x752 = -117183260LL;
	static int32_t t187 = -4;

    t187 = ((x749==x750)<<(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 12LLU;
	int32_t x754 = INT32_MIN;
	int32_t t188 = 33023355;

    t188 = ((x753==x754)<<(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	volatile int16_t x758 = INT16_MIN;
	static int16_t x759 = INT16_MAX;
	static int32_t x760 = INT32_MIN;
	static volatile int32_t t189 = 687774;

    t189 = ((x757==x758)<<(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = INT64_MAX;
	volatile int32_t x762 = INT32_MAX;

    t190 = ((x761==x762)<<(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x765 = 2U;
	uint16_t x766 = 4U;
	static int16_t x767 = INT16_MAX;
	uint8_t x768 = 0U;
	int32_t t191 = -849022;

    t191 = ((x765==x766)<<(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = INT64_MAX;
	volatile int8_t x770 = -1;
	uint64_t x771 = UINT64_MAX;
	int8_t x772 = -18;
	int32_t t192 = -6592;

    t192 = ((x769==x770)<<(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 24U;
	static volatile int32_t t193 = -1343;

    t193 = ((x773==x774)<<(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -3918730;
	uint64_t x778 = 1306LLU;
	volatile int64_t x779 = -1LL;
	int64_t x780 = INT64_MIN;
	int32_t t194 = -18857300;

    t194 = ((x777==x778)<<(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = INT8_MAX;
	int64_t x783 = 4056LL;
	uint8_t x784 = 53U;
	int32_t t195 = -1217433;

    t195 = ((x781==x782)<<(x783==x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 0U;
	int32_t x786 = -1;
	int64_t x787 = 25183826373LL;
	static int64_t x788 = INT64_MIN;
	volatile int32_t t196 = 31885;

    t196 = ((x785==x786)<<(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = -235332340237968LL;
	volatile int32_t x792 = INT32_MIN;
	volatile int32_t t197 = -1;

    t197 = ((x789==x790)<<(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x794 = -42487;
	int16_t x795 = INT16_MIN;
	volatile int32_t t198 = -184756836;

    t198 = ((x793==x794)<<(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 13554;
	volatile uint32_t x798 = UINT32_MAX;
	static uint32_t x800 = 0U;
	int32_t t199 = 410;

    t199 = ((x797==x798)<<(x799==x800));

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

