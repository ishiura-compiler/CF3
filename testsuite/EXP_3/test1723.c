
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

volatile int8_t x2 = INT8_MAX;
int64_t x10 = INT64_MIN;
int64_t t2 = INT64_MIN;
volatile uint8_t x21 = 13U;
static int8_t x23 = INT8_MAX;
int8_t x24 = 0;
volatile int32_t t6 = -148;
int64_t x32 = -1LL;
static int32_t x36 = -1;
int16_t x45 = 15;
int64_t x49 = INT64_MIN;
int32_t x50 = 56704;
uint64_t x51 = 14325996322LLU;
static volatile int64_t x57 = INT64_MIN;
uint16_t x60 = 1U;
uint16_t x65 = 17981U;
uint8_t x68 = 3U;
int64_t x73 = -1LL;
static volatile uint16_t x74 = 1181U;
int16_t x76 = INT16_MIN;
int64_t x79 = -1LL;
int32_t x85 = -1;
uint8_t x87 = UINT8_MAX;
uint16_t x89 = 5541U;
int32_t x92 = INT32_MIN;
static uint32_t x95 = UINT32_MAX;
volatile int32_t t24 = -106;
int8_t x103 = -1;
volatile int8_t x104 = INT8_MIN;
volatile int16_t x106 = INT16_MIN;
volatile int8_t x110 = INT8_MAX;
uint32_t x117 = 20U;
volatile int8_t x124 = 5;
int64_t x126 = -12611LL;
int8_t x127 = -1;
volatile uint8_t x137 = 2U;
int64_t t35 = -234613110LL;
int16_t x148 = 9852;
volatile uint64_t t37 = 1072002398LLU;
int64_t t38 = 2907072592515001LL;
static volatile int64_t t39 = 465662LL;
uint16_t x163 = UINT16_MAX;
int64_t x164 = -355007806LL;
volatile uint32_t t40 = 2072075025U;
int16_t x174 = INT16_MAX;
int16_t x177 = INT16_MIN;
static int16_t x178 = INT16_MAX;
volatile int32_t t44 = -408064;
int16_t x186 = -1;
int64_t x188 = INT64_MIN;
uint16_t x191 = UINT16_MAX;
int8_t x196 = -1;
int64_t t48 = -81420932422770957LL;
uint64_t x202 = UINT64_MAX;
int8_t x207 = 56;
static volatile uint64_t x208 = 6787714LLU;
uint8_t x213 = UINT8_MAX;
int32_t t54 = -84653;
static uint64_t x226 = 270LLU;
uint32_t x230 = 2U;
int64_t x240 = -108224936039LL;
uint32_t x243 = 1419095U;
volatile uint16_t x248 = 1U;
int64_t x250 = INT64_MIN;
volatile int8_t x259 = INT8_MIN;
int64_t x260 = -1LL;
static int64_t x261 = INT64_MIN;
int64_t x262 = INT64_MAX;
static volatile int64_t t65 = 3386840LL;
int8_t x265 = INT8_MIN;
volatile int8_t x266 = INT8_MAX;
static volatile uint32_t x267 = 0U;
volatile int16_t x268 = INT16_MIN;
int32_t t66 = 44551;
int64_t x272 = INT64_MIN;
int64_t x273 = INT64_MAX;
int8_t x282 = 0;
int8_t x284 = 0;
static int32_t x292 = -208511540;
static volatile int32_t t78 = 508019;
int8_t x317 = 1;
uint64_t x327 = 93504LLU;
volatile uint64_t x328 = 258871208163LLU;
volatile int64_t t83 = 716094387801063355LL;
int16_t x341 = INT16_MIN;
volatile uint8_t x344 = UINT8_MAX;
int32_t t85 = -147;
volatile int8_t x345 = INT8_MIN;
uint8_t x353 = UINT8_MAX;
static uint32_t x354 = 3U;
int32_t x357 = 13154538;
int16_t x367 = INT16_MIN;
int32_t t91 = -7381947;
static volatile int32_t x370 = 7;
int64_t x373 = -1LL;
int16_t x376 = -1;
static uint8_t x380 = 50U;
static int32_t t95 = -407543092;
int64_t x387 = 3812LL;
int16_t x388 = -7273;
int64_t x392 = INT64_MIN;
volatile int32_t x399 = -425798;
static int8_t x401 = INT8_MIN;
uint32_t x403 = UINT32_MAX;
int64_t x408 = INT64_MAX;
volatile uint16_t x416 = 84U;
uint32_t x420 = 522379U;
volatile int32_t t104 = 442601206;
int8_t x422 = INT8_MIN;
int32_t t105 = 0;
volatile uint16_t x425 = 157U;
int32_t t106 = 30708024;
static volatile uint64_t t107 = 4351301705066811LLU;
volatile int32_t x435 = 23;
uint64_t x437 = UINT64_MAX;
uint8_t x457 = 3U;
static volatile int32_t t115 = -12035867;
int8_t x472 = 1;
static uint64_t x474 = UINT64_MAX;
volatile int32_t t119 = 25050;
volatile int8_t x482 = -11;
int16_t x483 = INT16_MIN;
volatile uint32_t x486 = 1U;
int32_t x496 = 2799830;
static uint64_t x503 = 735097LLU;
uint64_t x517 = 2132851760LLU;
static int8_t x518 = INT8_MAX;
volatile uint64_t t129 = 4656344LLU;
static int8_t x522 = INT8_MIN;
static int16_t x525 = INT16_MIN;
static uint64_t x529 = 8627176032760133430LLU;
static int32_t x534 = INT32_MAX;
volatile uint64_t t134 = 7275LLU;
volatile int64_t x541 = INT64_MAX;
uint32_t x543 = 3U;
volatile int64_t t136 = 3682862LL;
int8_t x553 = INT8_MIN;
uint64_t t138 = 194217252774LLU;
int8_t x564 = -23;
int8_t x565 = INT8_MIN;
uint64_t x566 = 1675704300208234522LLU;
volatile int64_t t142 = -179448LL;
int64_t x576 = INT64_MIN;
int64_t x579 = -1LL;
static int32_t x584 = -1;
volatile int64_t x587 = INT64_MIN;
int32_t x591 = INT32_MIN;
int32_t x593 = INT32_MAX;
uint8_t x597 = UINT8_MAX;
volatile int32_t t150 = -1;
uint64_t x610 = 21050267284315735LLU;
volatile uint64_t t152 = 282LLU;
uint8_t x615 = UINT8_MAX;
volatile uint64_t x619 = 222245LLU;
int8_t x624 = INT8_MAX;
uint16_t x628 = 54U;
volatile int32_t t157 = -54776438;
volatile int16_t x639 = -1;
volatile int64_t x642 = -31069370705LL;
uint32_t x648 = UINT32_MAX;
volatile uint64_t t162 = 5270906LLU;
static volatile int64_t t165 = 302923011LL;
int64_t x666 = INT64_MIN;
volatile int16_t x667 = INT16_MIN;
int64_t t166 = 7679270873748025LL;
uint16_t x669 = 1U;
int16_t x672 = INT16_MIN;
uint8_t x676 = 95U;
int32_t t169 = 171490;
int32_t x686 = INT32_MAX;
volatile int64_t x687 = -27198609787349LL;
int32_t t171 = -986331780;
int64_t t172 = -231LL;
volatile int16_t x695 = -1;
static uint16_t x698 = 192U;
int32_t x701 = INT32_MIN;
uint16_t x702 = 9261U;
static int16_t x707 = -1;
uint8_t x710 = UINT8_MAX;
volatile uint64_t x711 = UINT64_MAX;
int16_t x717 = -1;
int32_t x719 = INT32_MAX;
int8_t x723 = 1;
volatile int16_t x726 = INT16_MIN;
static uint32_t x728 = UINT32_MAX;
int32_t x734 = 25;
int8_t x735 = -1;
volatile uint64_t t183 = 16672962LLU;
int64_t x737 = 97071527124786LL;
int16_t x739 = 3;
uint64_t t184 = 398518823LLU;
int16_t x751 = -1;
int64_t x757 = -669996477925202159LL;
int64_t x762 = INT64_MAX;
uint64_t x773 = 1LLU;
int8_t x774 = -1;
int16_t x778 = 2052;
uint64_t x781 = 606474239838LLU;
int32_t x786 = INT32_MIN;
int16_t x788 = INT16_MAX;
int16_t x792 = INT16_MIN;
volatile int32_t t197 = 671;
static volatile int64_t x793 = INT64_MAX;
int64_t t198 = 1995LL;
uint32_t x800 = UINT32_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 1U;
	volatile int32_t t0 = -65927028;

    t0 = ((x1&x2)+(x3>x4));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = -476;
	volatile int8_t x8 = 19;
	static int32_t t1 = 0;

    t1 = ((x5&x6)+(x7>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	int64_t x11 = INT64_MIN;
	volatile int8_t x12 = 1;

    t2 = ((x9&x10)+(x11>x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x13 = INT8_MAX;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 2855570;

    t3 = ((x13&x14)+(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = INT64_MAX;
	static volatile int16_t x19 = -1;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = -10181717143LL;

    t4 = ((x17&x18)+(x19>x20));

    if (t4 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = -1722;
	volatile int32_t t5 = 1;

    t5 = ((x21&x22)+(x23>x24));

    if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	static volatile int16_t x28 = INT16_MAX;

    t6 = ((x25&x26)+(x27>x28));

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = 0;
	int8_t x30 = -1;
	int32_t x31 = -1;
	static volatile int32_t t7 = 955;

    t7 = ((x29&x30)+(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -70350055;
	int64_t x34 = INT64_MAX;
	int8_t x35 = 1;
	static int64_t t8 = 15675568301580LL;

    t8 = ((x33&x34)+(x35>x36));

    if (t8 != 9223372036784425754LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 17U;
	int64_t x38 = -1505466430906LL;
	int32_t x39 = -1;
	int32_t x40 = -2741248;
	volatile int64_t t9 = 3LL;

    t9 = ((x37&x38)+(x39>x40));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = -17;
	static uint16_t x42 = UINT16_MAX;
	int32_t x43 = -23503;
	volatile int16_t x44 = -618;
	volatile int32_t t10 = -510942;

    t10 = ((x41&x42)+(x43>x44));

    if (t10 != 65519) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -1;
	static int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	int32_t t11 = -15;

    t11 = ((x45&x46)+(x47>x48));

    if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x52 = -1LL;
	volatile int64_t t12 = -9440491031LL;

    t12 = ((x49&x50)+(x51>x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x53 = 11291U;
	int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -5681;

    t13 = ((x53&x54)+(x55>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MAX;
	int16_t x59 = -1456;
	volatile int64_t t14 = 1718571802LL;

    t14 = ((x57&x58)+(x59>x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	int64_t x63 = -6LL;
	int64_t x64 = 2066LL;
	static volatile int32_t t15 = -7664420;

    t15 = ((x61&x62)+(x63>x64));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MAX;
	uint16_t x67 = 127U;
	volatile int32_t t16 = -3458066;

    t16 = ((x65&x66)+(x67>x68));

    if (t16 != 17982) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = 339522499U;
	volatile uint8_t x70 = 1U;
	volatile uint16_t x71 = UINT16_MAX;
	uint8_t x72 = UINT8_MAX;
	uint32_t t17 = 203281405U;

    t17 = ((x69&x70)+(x71>x72));

    if (t17 != 2U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = INT8_MIN;
	volatile int64_t t18 = -124LL;

    t18 = ((x73&x74)+(x75>x76));

    if (t18 != 1182LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int64_t x78 = 901222623207LL;
	int8_t x80 = INT8_MAX;
	volatile int64_t t19 = -497854509265328450LL;

    t19 = ((x77&x78)+(x79>x80));

    if (t19 != 901222623207LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static uint64_t x82 = UINT64_MAX;
	int16_t x83 = INT16_MAX;
	volatile int64_t x84 = 539249870LL;
	static uint64_t t20 = 155LLU;

    t20 = ((x81&x82)+(x83>x84));

    if (t20 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = -1;
	int64_t x88 = 33LL;
	int32_t t21 = -59;

    t21 = ((x85&x86)+(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x90 = INT8_MIN;
	uint16_t x91 = 12U;
	int32_t t22 = 264546723;

    t22 = ((x89&x90)+(x91>x92));

    if (t22 != 5505) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x93 = INT16_MIN;
	int16_t x94 = 1;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -483269343;

    t23 = ((x93&x94)+(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int32_t x98 = -1;
	volatile uint16_t x99 = UINT16_MAX;
	static int64_t x100 = INT64_MIN;

    t24 = ((x97&x98)+(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	volatile uint32_t x102 = 9332101U;
	volatile uint32_t t25 = 1551165U;

    t25 = ((x101&x102)+(x103>x104));

    if (t25 != 9332102U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	uint8_t x107 = 1U;
	uint16_t x108 = UINT16_MAX;
	volatile uint32_t t26 = 2378U;

    t26 = ((x105&x106)+(x107>x108));

    if (t26 != 4294934528U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 0;
	int16_t x111 = 428;
	volatile int64_t x112 = -1LL;
	volatile int32_t t27 = 3;

    t27 = ((x109&x110)+(x111>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 6U;
	uint16_t x114 = UINT16_MAX;
	int64_t x115 = -1LL;
	int64_t x116 = 10730725788801LL;
	int32_t t28 = 0;

    t28 = ((x113&x114)+(x115>x116));

    if (t28 != 6) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x118 = INT64_MIN;
	static volatile int16_t x119 = INT16_MIN;
	uint32_t x120 = 44888U;
	static int64_t t29 = -34766713LL;

    t29 = ((x117&x118)+(x119>x120));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	int16_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int64_t t30 = 160908784LL;

    t30 = ((x121&x122)+(x123>x124));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static volatile int64_t x128 = -89431132LL;
	static int64_t t31 = -150249672448LL;

    t31 = ((x125&x126)+(x127>x128));

    if (t31 != -12671LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = UINT64_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	volatile uint64_t t32 = 22904LLU;

    t32 = ((x129&x130)+(x131>x132));

    if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 24717158484742LL;
	volatile uint64_t x134 = 8836827023LLU;
	static uint8_t x135 = 6U;
	uint64_t x136 = 0LLU;
	volatile uint64_t t33 = 15732LLU;

    t33 = ((x133&x134)+(x135>x136));

    if (t33 != 8727495431LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = 45;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = -8766194;

    t34 = ((x137&x138)+(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;
	volatile int32_t x143 = INT32_MAX;
	volatile int32_t x144 = INT32_MIN;

    t35 = ((x141&x142)+(x143>x144));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	static volatile int8_t x146 = 6;
	static int32_t x147 = INT32_MAX;
	volatile int32_t t36 = 961883;

    t36 = ((x145&x146)+(x147>x148));

    if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x149 = 13406987252265LLU;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MAX;

    t37 = ((x149&x150)+(x151>x152));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	int64_t x154 = 446412072560201393LL;
	uint64_t x155 = UINT64_MAX;
	volatile int8_t x156 = INT8_MAX;

    t38 = ((x153&x154)+(x155>x156));

    if (t38 != 446412072560201394LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	volatile int16_t x158 = INT16_MAX;
	int8_t x159 = 25;
	int32_t x160 = INT32_MIN;

    t39 = ((x157&x158)+(x159>x160));

    if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = 384985U;

    t40 = ((x161&x162)+(x163>x164));

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x166 = INT16_MAX;
	volatile int8_t x167 = -47;
	int64_t x168 = 20111603625139690LL;
	volatile int32_t t41 = 10590492;

    t41 = ((x165&x166)+(x167>x168));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	static int16_t x170 = -1;
	volatile int8_t x171 = 0;
	uint32_t x172 = 4U;
	static int64_t t42 = INT64_MAX;

    t42 = ((x169&x170)+(x171>x172));

    if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MAX;
	volatile int64_t t43 = 3095792550190LL;

    t43 = ((x173&x174)+(x175>x176));

    if (t43 != 32768LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x179 = INT32_MIN;
	int32_t x180 = -996;

    t44 = ((x177&x178)+(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MAX;
	uint64_t x183 = 4LLU;
	volatile int32_t x184 = INT32_MAX;
	uint64_t t45 = 3LLU;

    t45 = ((x181&x182)+(x183>x184));

    if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	uint64_t t46 = 1866LLU;

    t46 = ((x185&x186)+(x187>x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x189 = INT64_MAX;
	volatile uint16_t x190 = 7U;
	uint64_t x192 = UINT64_MAX;
	int64_t t47 = 379948238LL;

    t47 = ((x189&x190)+(x191>x192));

    if (t47 != 7LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = INT8_MAX;
	int64_t x194 = INT64_MAX;
	int32_t x195 = -126;

    t48 = ((x193&x194)+(x195>x196));

    if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	uint32_t x198 = 17U;
	volatile int64_t x199 = INT64_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	uint32_t t49 = 26U;

    t49 = ((x197&x198)+(x199>x200));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = 26385266641765491LL;
	int16_t x203 = INT16_MAX;
	static int64_t x204 = INT64_MIN;
	volatile uint64_t t50 = 270455LLU;

    t50 = ((x201&x202)+(x203>x204));

    if (t50 != 26385266641765492LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = -1;
	volatile int64_t t51 = INT64_MIN;

    t51 = ((x205&x206)+(x207>x208));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	uint16_t x210 = 2U;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	int32_t t52 = -680131254;

    t52 = ((x209&x210)+(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	int64_t x215 = 406079003699326LL;
	static uint8_t x216 = 1U;
	int32_t t53 = -553205;

    t53 = ((x213&x214)+(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MAX;
	uint16_t x218 = 23589U;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 39U;

    t54 = ((x217&x218)+(x219>x220));

    if (t54 != 37) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x221 = INT8_MIN;
	uint64_t x222 = 15732151892142LLU;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 31U;
	volatile uint64_t t55 = 46031458340LLU;

    t55 = ((x221&x222)+(x223>x224));

    if (t55 != 15732151892096LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	int64_t x227 = INT64_MAX;
	volatile int64_t x228 = 81LL;
	volatile uint64_t t56 = 0LLU;

    t56 = ((x225&x226)+(x227>x228));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = 30021LLU;
	volatile uint64_t x231 = 15983LLU;
	uint64_t x232 = 38038406LLU;
	uint64_t t57 = 112860550450LLU;

    t57 = ((x229&x230)+(x231>x232));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	uint16_t x234 = 4458U;
	volatile int32_t x235 = -1;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t58 = -525407;

    t58 = ((x233&x234)+(x235>x236));

    if (t58 != 4458) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = 16LL;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MAX;
	int64_t t59 = 0LL;

    t59 = ((x237&x238)+(x239>x240));

    if (t59 != 17LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 1651456LLU;
	volatile uint64_t x242 = UINT64_MAX;
	static int8_t x244 = INT8_MIN;
	volatile uint64_t t60 = 508637882LLU;

    t60 = ((x241&x242)+(x243>x244));

    if (t60 != 1651456LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = 4;
	static int8_t x246 = INT8_MIN;
	static uint32_t x247 = 597067948U;
	int32_t t61 = 31228388;

    t61 = ((x245&x246)+(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = -17LL;
	int16_t x251 = INT16_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t62 = 3111841356LL;

    t62 = ((x249&x250)+(x251>x252));

    if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	static int64_t x254 = 35294422708528447LL;
	int8_t x255 = INT8_MAX;
	volatile uint64_t x256 = UINT64_MAX;
	int64_t t63 = 73118193798LL;

    t63 = ((x253&x254)+(x255>x256));

    if (t63 != 35294422708528384LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 129595222U;
	int16_t x258 = INT16_MIN;
	uint32_t t64 = 60U;

    t64 = ((x257&x258)+(x259>x260));

    if (t64 != 129564672U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x263 = -1;
	volatile int8_t x264 = -24;

    t65 = ((x261&x262)+(x263>x264));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    

    t66 = ((x265&x266)+(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 1U;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	int32_t t67 = -31;

    t67 = ((x269&x270)+(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x274 = INT8_MIN;
	int8_t x275 = -14;
	int8_t x276 = -1;
	int64_t t68 = -127301982058458LL;

    t68 = ((x273&x274)+(x275>x276));

    if (t68 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 6311183959LL;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 711U;
	static uint8_t x280 = 0U;
	static volatile int64_t t69 = -2034143757623137933LL;

    t69 = ((x277&x278)+(x279>x280));

    if (t69 != 4294967297LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 11783435LLU;
	int32_t x283 = -8;
	static uint64_t t70 = 21651150076997LLU;

    t70 = ((x281&x282)+(x283>x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -11;
	static volatile uint64_t x286 = UINT64_MAX;
	static uint32_t x287 = 397221947U;
	int64_t x288 = -276LL;
	static uint64_t t71 = 360330752351641LLU;

    t71 = ((x285&x286)+(x287>x288));

    if (t71 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	static uint16_t x290 = 41U;
	volatile int64_t x291 = INT64_MIN;
	static volatile int32_t t72 = 246506;

    t72 = ((x289&x290)+(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = INT8_MAX;
	volatile int64_t x294 = -243LL;
	static int8_t x295 = -1;
	int32_t x296 = INT32_MIN;
	int64_t t73 = -107LL;

    t73 = ((x293&x294)+(x295>x296));

    if (t73 != 14LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	int64_t x298 = -243662015LL;
	uint64_t x299 = 1807777998143LLU;
	int16_t x300 = INT16_MIN;
	int64_t t74 = -37474013753930723LL;

    t74 = ((x297&x298)+(x299>x300));

    if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 2860U;
	uint64_t x303 = UINT64_MAX;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = -1156;

    t75 = ((x301&x302)+(x303>x304));

    if (t75 != 45) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = 878973954U;
	uint64_t x306 = 35360LLU;
	static uint16_t x307 = 102U;
	int8_t x308 = 1;
	volatile uint64_t t76 = 2596171951LLU;

    t76 = ((x305&x306)+(x307>x308));

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = 127;
	volatile int16_t x311 = -38;
	uint32_t x312 = 463U;
	volatile int32_t t77 = -6843977;

    t77 = ((x309&x310)+(x311>x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = 11424;
	int32_t x316 = -1;

    t78 = ((x313&x314)+(x315>x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = -58;
	int32_t x319 = -294;
	volatile int32_t x320 = INT32_MIN;
	volatile int32_t t79 = 7013334;

    t79 = ((x317&x318)+(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = 0;
	uint32_t x322 = 4358U;
	uint8_t x323 = 51U;
	uint8_t x324 = 0U;
	uint32_t t80 = 48338446U;

    t80 = ((x321&x322)+(x323>x324));

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 21569735U;
	static int32_t x326 = INT32_MAX;
	volatile uint32_t t81 = 84815U;

    t81 = ((x325&x326)+(x327>x328));

    if (t81 != 21569735U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 375831341002634111LLU;
	volatile int64_t x330 = INT64_MAX;
	static int8_t x331 = INT8_MAX;
	uint8_t x332 = 42U;
	uint64_t t82 = 645876938174548LLU;

    t82 = ((x329&x330)+(x331>x332));

    if (t82 != 375831341002634112LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MAX;
	int64_t x334 = INT64_MAX;
	static uint32_t x335 = 1U;
	int8_t x336 = -1;

    t83 = ((x333&x334)+(x335>x336));

    if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x337 = 0;
	uint8_t x338 = UINT8_MAX;
	volatile int8_t x339 = INT8_MIN;
	int32_t x340 = -3580;
	volatile int32_t t84 = -21241524;

    t84 = ((x337&x338)+(x339>x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = 1471U;
	uint16_t x343 = 36U;

    t85 = ((x341&x342)+(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = -2;
	uint8_t x347 = 0U;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t86 = -50949069;

    t86 = ((x345&x346)+(x347>x348));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MIN;
	int64_t x350 = -1LL;
	int64_t x351 = -262795LL;
	volatile uint16_t x352 = UINT16_MAX;
	volatile int64_t t87 = -6443378527736875LL;

    t87 = ((x349&x350)+(x351>x352));

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MIN;
	uint32_t t88 = 226531U;

    t88 = ((x353&x354)+(x355>x356));

    if (t88 != 4U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MAX;
	static volatile int16_t x359 = -13244;
	volatile uint64_t x360 = 86954095505LLU;
	int32_t t89 = 4;

    t89 = ((x357&x358)+(x359>x360));

    if (t89 != 14571) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MAX;
	volatile uint8_t x364 = 0U;
	volatile int32_t t90 = -213;

    t90 = ((x361&x362)+(x363>x364));

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = -1373526;
	uint64_t x368 = 760180279LLU;

    t91 = ((x365&x366)+(x367>x368));

    if (t91 != -1376255) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint32_t x371 = 0U;
	int16_t x372 = INT16_MIN;
	static int32_t t92 = -53734635;

    t92 = ((x369&x370)+(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x374 = INT32_MAX;
	int64_t x375 = -7333LL;
	static int64_t t93 = -7LL;

    t93 = ((x373&x374)+(x375>x376));

    if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 2;
	static uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	volatile int32_t t94 = 52247;

    t94 = ((x377&x378)+(x379>x380));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = 1493;
	static int16_t x382 = -12448;
	int64_t x383 = -378774061034655754LL;
	uint64_t x384 = 7LLU;

    t95 = ((x381&x382)+(x383>x384));

    if (t95 != 1345) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = INT16_MAX;
	uint8_t x386 = UINT8_MAX;
	int32_t t96 = -2213;

    t96 = ((x385&x386)+(x387>x388));

    if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	static volatile int16_t x391 = INT16_MAX;
	int32_t t97 = 53;

    t97 = ((x389&x390)+(x391>x392));

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MIN;
	int8_t x394 = INT8_MIN;
	int64_t x395 = -1960852674384LL;
	static volatile int32_t x396 = INT32_MIN;
	volatile int64_t t98 = INT64_MIN;

    t98 = ((x393&x394)+(x395>x396));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = 4;
	int16_t x398 = 9218;
	static volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = -966513130;

    t99 = ((x397&x398)+(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = -1;
	volatile uint16_t x404 = 1U;
	int32_t t100 = 157;

    t100 = ((x401&x402)+(x403>x404));

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 13245LLU;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MAX;
	uint64_t t101 = 43238298LLU;

    t101 = ((x405&x406)+(x407>x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	int16_t x410 = INT16_MAX;
	int16_t x411 = INT16_MAX;
	static int64_t x412 = 54093017511203695LL;
	volatile int64_t t102 = -63932688246238LL;

    t102 = ((x409&x410)+(x411>x412));

    if (t102 != 32767LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = -3;
	int8_t x414 = -21;
	uint16_t x415 = 61U;
	static int32_t t103 = 524805453;

    t103 = ((x413&x414)+(x415>x416));

    if (t103 != -23) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x417 = -1;
	volatile int16_t x418 = -1040;
	int8_t x419 = INT8_MIN;

    t104 = ((x417&x418)+(x419>x420));

    if (t104 != -1039) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	uint64_t x423 = 2600908416162885256LLU;
	uint8_t x424 = 2U;

    t105 = ((x421&x422)+(x423>x424));

    if (t105 != -127) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = 1;
	uint32_t x427 = 2186U;
	uint64_t x428 = UINT64_MAX;

    t106 = ((x425&x426)+(x427>x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 454656LLU;
	int8_t x430 = INT8_MAX;
	static int64_t x431 = INT64_MAX;
	volatile int16_t x432 = INT16_MIN;

    t107 = ((x429&x430)+(x431>x432));

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x433 = -1;
	int32_t x434 = -1;
	volatile int8_t x436 = INT8_MAX;
	static volatile int32_t t108 = -108523397;

    t108 = ((x433&x434)+(x435>x436));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x438 = -1;
	uint8_t x439 = UINT8_MAX;
	volatile int32_t x440 = -8005;
	volatile uint64_t t109 = 4192219LLU;

    t109 = ((x437&x438)+(x439>x440));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x441 = -1LL;
	uint32_t x442 = 12U;
	static int16_t x443 = INT16_MIN;
	static uint64_t x444 = UINT64_MAX;
	int64_t t110 = -2LL;

    t110 = ((x441&x442)+(x443>x444));

    if (t110 != 12LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -25;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MAX;
	static uint16_t x448 = 15U;
	volatile int64_t t111 = 5LL;

    t111 = ((x445&x446)+(x447>x448));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -7;
	volatile int16_t x450 = -1;
	static volatile uint16_t x451 = UINT16_MAX;
	uint64_t x452 = 23LLU;
	volatile int32_t t112 = 300956828;

    t112 = ((x449&x450)+(x451>x452));

    if (t112 != -6) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = -1;
	volatile uint32_t x454 = UINT32_MAX;
	int32_t x455 = INT32_MAX;
	static uint32_t x456 = 11841427U;
	uint32_t t113 = 860584U;

    t113 = ((x453&x454)+(x455>x456));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x458 = 1U;
	uint16_t x459 = 8457U;
	static int32_t x460 = -1;
	int32_t t114 = 713283;

    t114 = ((x457&x458)+(x459>x460));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = 56;
	int64_t x463 = INT64_MIN;
	uint8_t x464 = UINT8_MAX;

    t115 = ((x461&x462)+(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MAX;
	static uint8_t x468 = 2U;
	volatile int64_t t116 = 671231502621LL;

    t116 = ((x465&x466)+(x467>x468));

    if (t116 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 56U;
	static uint8_t x470 = 6U;
	static int16_t x471 = -1;
	volatile int32_t t117 = -4621;

    t117 = ((x469&x470)+(x471>x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	int16_t x475 = INT16_MIN;
	int64_t x476 = INT64_MIN;
	uint64_t t118 = 2LLU;

    t118 = ((x473&x474)+(x475>x476));

    if (t118 != 1LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 7;
	int32_t x478 = INT32_MIN;
	volatile int32_t x479 = -26;
	int16_t x480 = INT16_MIN;

    t119 = ((x477&x478)+(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 40;
	int32_t x484 = 11176;
	int32_t t120 = 0;

    t120 = ((x481&x482)+(x483>x484));

    if (t120 != 32) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = 8;
	int32_t x487 = -1;
	uint32_t x488 = UINT32_MAX;
	static uint32_t t121 = 1U;

    t121 = ((x485&x486)+(x487>x488));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x489 = 368314025537941LL;
	uint8_t x490 = 44U;
	int16_t x491 = INT16_MAX;
	int32_t x492 = INT32_MIN;
	volatile int64_t t122 = 104680214847LL;

    t122 = ((x489&x490)+(x491>x492));

    if (t122 != 5LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	uint16_t x494 = 2917U;
	static uint8_t x495 = 97U;
	volatile int32_t t123 = 368580;

    t123 = ((x493&x494)+(x495>x496));

    if (t123 != 2917) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = UINT32_MAX;
	uint16_t x498 = UINT16_MAX;
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = -52;
	volatile uint32_t t124 = 37U;

    t124 = ((x497&x498)+(x499>x500));

    if (t124 != 65536U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	static int64_t x502 = INT64_MAX;
	static int16_t x504 = INT16_MAX;
	static volatile int64_t t125 = -64060380902609LL;

    t125 = ((x501&x502)+(x503>x504));

    if (t125 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 0U;
	int16_t x506 = INT16_MIN;
	int64_t x507 = -40370042201441167LL;
	volatile int64_t x508 = 7275143836410508LL;
	int32_t t126 = 61162935;

    t126 = ((x505&x506)+(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int32_t x510 = 24;
	static volatile int64_t x511 = INT64_MIN;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t127 = -1;

    t127 = ((x509&x510)+(x511>x512));

    if (t127 != 24) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint8_t x514 = UINT8_MAX;
	static int32_t x515 = -1;
	int8_t x516 = INT8_MIN;
	volatile int64_t t128 = -344812448576LL;

    t128 = ((x513&x514)+(x515>x516));

    if (t128 != 1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x519 = 396834614300LL;
	int32_t x520 = -693;

    t129 = ((x517&x518)+(x519>x520));

    if (t129 != 49LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	int8_t x523 = -1;
	int64_t x524 = -45LL;
	volatile uint64_t t130 = 2730LLU;

    t130 = ((x521&x522)+(x523>x524));

    if (t130 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x526 = 1U;
	static int64_t x527 = INT64_MAX;
	static int32_t x528 = 118710;
	int32_t t131 = 12226;

    t131 = ((x525&x526)+(x527>x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x530 = 3U;
	uint64_t x531 = 601265318LLU;
	uint64_t x532 = 181373LLU;
	static volatile uint64_t t132 = 1241LLU;

    t132 = ((x529&x530)+(x531>x532));

    if (t132 != 3LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x533 = 62U;
	int64_t x535 = INT64_MIN;
	uint32_t x536 = UINT32_MAX;
	int32_t t133 = -1;

    t133 = ((x533&x534)+(x535>x536));

    if (t133 != 62) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	static uint64_t x538 = 5775544003447568978LLU;
	static int32_t x539 = -1;
	static int8_t x540 = INT8_MIN;

    t134 = ((x537&x538)+(x539>x540));

    if (t134 != 5775544003447568979LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = -1992203159318218LL;
	static uint32_t x544 = UINT32_MAX;
	volatile int64_t t135 = -59162000778175665LL;

    t135 = ((x541&x542)+(x543>x544));

    if (t135 != 9221379833695457590LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x545 = 4025U;
	volatile int64_t x546 = INT64_MIN;
	volatile int32_t x547 = INT32_MAX;
	static volatile int32_t x548 = 266145105;

    t136 = ((x545&x546)+(x547>x548));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = 75899826463824044LL;
	static int16_t x550 = -1;
	int64_t x551 = 6777LL;
	static uint64_t x552 = UINT64_MAX;
	volatile int64_t t137 = 3876417898806452LL;

    t137 = ((x549&x550)+(x551>x552));

    if (t137 != 75899826463824044LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = 716494LLU;
	int8_t x555 = -7;
	uint32_t x556 = UINT32_MAX;

    t138 = ((x553&x554)+(x555>x556));

    if (t138 != 716416LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MAX;
	int64_t x560 = INT64_MIN;
	volatile int64_t t139 = -322971LL;

    t139 = ((x557&x558)+(x559>x560));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MAX;
	static int16_t x562 = INT16_MIN;
	int64_t x563 = INT64_MAX;
	int64_t t140 = -589787734773341LL;

    t140 = ((x561&x562)+(x563>x564));

    if (t140 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x567 = UINT8_MAX;
	int32_t x568 = INT32_MAX;
	volatile uint64_t t141 = 867373750LLU;

    t141 = ((x565&x566)+(x567>x568));

    if (t141 != 1675704300208234496LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MAX;
	volatile int64_t x570 = 520LL;
	static int32_t x571 = -1;
	int64_t x572 = -1LL;

    t142 = ((x569&x570)+(x571>x572));

    if (t142 != 520LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	int8_t x574 = INT8_MAX;
	static int32_t x575 = INT32_MAX;
	static int32_t t143 = 9806;

    t143 = ((x573&x574)+(x575>x576));

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 1;
	int64_t x578 = INT64_MIN;
	int64_t x580 = INT64_MAX;
	volatile int64_t t144 = -1250094516LL;

    t144 = ((x577&x578)+(x579>x580));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	int16_t x582 = INT16_MIN;
	static int64_t x583 = INT64_MAX;
	int32_t t145 = -51622;

    t145 = ((x581&x582)+(x583>x584));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	int8_t x588 = INT8_MIN;
	int32_t t146 = 223439;

    t146 = ((x585&x586)+(x587>x588));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int16_t x590 = INT16_MIN;
	static int32_t x592 = 3703;
	volatile int64_t t147 = INT64_MIN;

    t147 = ((x589&x590)+(x591>x592));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MIN;
	uint32_t x595 = UINT32_MAX;
	volatile uint16_t x596 = 9178U;
	int32_t t148 = 10740236;

    t148 = ((x593&x594)+(x595>x596));

    if (t148 != 2147450881) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x598 = INT8_MIN;
	int8_t x599 = 26;
	static volatile uint64_t x600 = 249428LLU;
	int32_t t149 = 726077396;

    t149 = ((x597&x598)+(x599>x600));

    if (t149 != 128) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile int8_t x602 = INT8_MIN;
	int8_t x603 = -54;
	int16_t x604 = INT16_MAX;

    t150 = ((x601&x602)+(x603>x604));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = -1;
	uint16_t x606 = 260U;
	uint64_t x607 = 786740715560LLU;
	int64_t x608 = INT64_MIN;
	volatile int32_t t151 = -11828;

    t151 = ((x605&x606)+(x607>x608));

    if (t151 != 260) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -23;
	int32_t x611 = -7165;
	int16_t x612 = 1;

    t152 = ((x609&x610)+(x611>x612));

    if (t152 != 21050267284315713LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint16_t x613 = 1890U;
	static int32_t x614 = -1;
	uint32_t x616 = 113384720U;
	volatile int32_t t153 = -59;

    t153 = ((x613&x614)+(x615>x616));

    if (t153 != 1890) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x617 = UINT16_MAX;
	static int16_t x618 = INT16_MIN;
	static uint16_t x620 = 5343U;
	volatile int32_t t154 = 155136;

    t154 = ((x617&x618)+(x619>x620));

    if (t154 != 32769) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	static uint64_t x622 = 47911LLU;
	int64_t x623 = -1LL;
	static uint64_t t155 = 42473850769178736LLU;

    t155 = ((x621&x622)+(x623>x624));

    if (t155 != 47911LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 808580745489LLU;
	volatile uint16_t x626 = UINT16_MAX;
	static int8_t x627 = INT8_MIN;
	volatile uint64_t t156 = 13043029LLU;

    t156 = ((x625&x626)+(x627>x628));

    if (t156 != 2321LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	uint16_t x630 = 2113U;
	static int64_t x631 = 1019LL;
	int16_t x632 = INT16_MIN;

    t157 = ((x629&x630)+(x631>x632));

    if (t157 != 2049) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 4U;
	volatile int8_t x634 = -3;
	int8_t x635 = INT8_MIN;
	static int16_t x636 = 515;
	volatile uint32_t t158 = 1477109U;

    t158 = ((x633&x634)+(x635>x636));

    if (t158 != 4U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x637 = 6;
	int32_t x638 = -1;
	int64_t x640 = -2344319LL;
	volatile int32_t t159 = 6582;

    t159 = ((x637&x638)+(x639>x640));

    if (t159 != 7) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MAX;
	uint64_t x643 = 3204LLU;
	uint32_t x644 = 3U;
	int64_t t160 = -2643930887993057504LL;

    t160 = ((x641&x642)+(x643>x644));

    if (t160 != 1712LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = 4U;
	int16_t x646 = INT16_MAX;
	volatile uint32_t x647 = 20U;
	volatile int32_t t161 = 11796;

    t161 = ((x645&x646)+(x647>x648));

    if (t161 != 4) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	uint16_t x650 = 8962U;
	int16_t x651 = INT16_MIN;
	int8_t x652 = -1;

    t162 = ((x649&x650)+(x651>x652));

    if (t162 != 8962LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	static int16_t x654 = INT16_MIN;
	int64_t x655 = 3760938385663245LL;
	int16_t x656 = -3;
	int32_t t163 = -3;

    t163 = ((x653&x654)+(x655>x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 30259561268748616LLU;
	volatile int16_t x658 = -1;
	int8_t x659 = 5;
	int32_t x660 = INT32_MIN;
	static uint64_t t164 = 9656505428149LLU;

    t164 = ((x657&x658)+(x659>x660));

    if (t164 != 30259561268748617LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MAX;
	volatile int8_t x662 = INT8_MIN;
	uint8_t x663 = UINT8_MAX;
	int8_t x664 = INT8_MAX;

    t165 = ((x661&x662)+(x663>x664));

    if (t165 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x665 = 102U;
	uint16_t x668 = 1U;

    t166 = ((x665&x666)+(x667>x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = -1;
	volatile int8_t x671 = 8;
	volatile int32_t t167 = -17;

    t167 = ((x669&x670)+(x671>x672));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	int32_t x674 = -28037277;
	volatile int32_t x675 = INT32_MIN;
	int32_t t168 = 27;

    t168 = ((x673&x674)+(x675>x676));

    if (t168 != -28037277) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile int32_t x678 = -19941;
	volatile uint32_t x679 = 12U;
	uint16_t x680 = UINT16_MAX;

    t169 = ((x677&x678)+(x679>x680));

    if (t169 != 27) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	volatile int16_t x682 = -707;
	uint8_t x683 = 79U;
	static uint16_t x684 = 1U;
	int32_t t170 = -184029;

    t170 = ((x681&x682)+(x683>x684));

    if (t170 != -767) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x685 = INT16_MIN;
	static uint8_t x688 = UINT8_MAX;

    t171 = ((x685&x686)+(x687>x688));

    if (t171 != 2147450880) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 14U;
	volatile int64_t x690 = 1321680LL;
	volatile int32_t x691 = 875;
	uint32_t x692 = UINT32_MAX;

    t172 = ((x689&x690)+(x691>x692));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	static volatile uint16_t x694 = 0U;
	uint8_t x696 = 61U;
	uint32_t t173 = 10701917U;

    t173 = ((x693&x694)+(x695>x696));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MIN;
	int64_t x699 = -1LL;
	int8_t x700 = -19;
	volatile int32_t t174 = 12;

    t174 = ((x697&x698)+(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x703 = 1;
	uint16_t x704 = 2U;
	volatile int32_t t175 = -1358610;

    t175 = ((x701&x702)+(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 2719LLU;
	static uint16_t x706 = 15U;
	static int32_t x708 = -1;
	static volatile uint64_t t176 = 40985356935LLU;

    t176 = ((x705&x706)+(x707>x708));

    if (t176 != 15LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	static volatile uint8_t x712 = UINT8_MAX;
	int32_t t177 = -9018955;

    t177 = ((x709&x710)+(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x713 = 2869816U;
	uint32_t x714 = 425907U;
	static int32_t x715 = 42261;
	static int16_t x716 = INT16_MIN;
	static volatile uint32_t t178 = 2731U;

    t178 = ((x713&x714)+(x715>x716));

    if (t178 != 150065U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x718 = 84U;
	volatile int16_t x720 = 46;
	int32_t t179 = -693930633;

    t179 = ((x717&x718)+(x719>x720));

    if (t179 != 85) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -2;
	int64_t x722 = -13179704983LL;
	uint32_t x724 = 1759U;
	static int64_t t180 = 207576769840LL;

    t180 = ((x721&x722)+(x723>x724));

    if (t180 != -13179704984LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	int64_t x727 = -3LL;
	volatile int32_t t181 = 257907393;

    t181 = ((x725&x726)+(x727>x728));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 63U;
	static volatile int8_t x730 = INT8_MIN;
	uint8_t x731 = 93U;
	static int16_t x732 = INT16_MIN;
	int32_t t182 = 494959;

    t182 = ((x729&x730)+(x731>x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 1625834104104LLU;
	uint32_t x736 = 77619623U;

    t183 = ((x733&x734)+(x735>x736));

    if (t183 != 9LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = UINT64_MAX;
	int32_t x740 = INT32_MIN;

    t184 = ((x737&x738)+(x739>x740));

    if (t184 != 97071527124787LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int32_t x742 = INT32_MIN;
	int64_t x743 = -274748242141630399LL;
	int64_t x744 = INT64_MIN;
	static volatile int32_t t185 = -29274665;

    t185 = ((x741&x742)+(x743>x744));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -165;
	int64_t x746 = INT64_MAX;
	uint64_t x747 = 14491LLU;
	volatile int8_t x748 = INT8_MAX;
	volatile int64_t t186 = 317714202379LL;

    t186 = ((x745&x746)+(x747>x748));

    if (t186 != 9223372036854775644LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -113044831;
	int64_t x750 = INT64_MIN;
	volatile uint8_t x752 = 4U;
	volatile int64_t t187 = INT64_MIN;

    t187 = ((x749&x750)+(x751>x752));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MAX;
	int32_t x754 = -1;
	int32_t x755 = INT32_MIN;
	volatile int16_t x756 = 443;
	static volatile int64_t t188 = INT64_MAX;

    t188 = ((x753&x754)+(x755>x756));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = 1U;
	static int8_t x759 = INT8_MIN;
	volatile int32_t x760 = INT32_MIN;
	static volatile int64_t t189 = -58263983LL;

    t189 = ((x757&x758)+(x759>x760));

    if (t189 != 2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x761 = 1;
	int32_t x763 = -1;
	volatile uint64_t x764 = 593310977382247329LLU;
	volatile int64_t t190 = 1862LL;

    t190 = ((x761&x762)+(x763>x764));

    if (t190 != 2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1444;
	uint8_t x766 = 14U;
	int8_t x767 = -20;
	int8_t x768 = 27;
	int32_t t191 = 719850;

    t191 = ((x765&x766)+(x767>x768));

    if (t191 != 12) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int64_t x770 = 107438379LL;
	int64_t x771 = INT64_MIN;
	volatile int32_t x772 = 4089;
	int64_t t192 = -13LL;

    t192 = ((x769&x770)+(x771>x772));

    if (t192 != 107438379LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x775 = UINT16_MAX;
	static int64_t x776 = -91LL;
	uint64_t t193 = 141380238191072371LLU;

    t193 = ((x773&x774)+(x775>x776));

    if (t193 != 2LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 398;
	uint32_t x779 = UINT32_MAX;
	static int64_t x780 = -1LL;
	int32_t t194 = -1233376;

    t194 = ((x777&x778)+(x779>x780));

    if (t194 != 5) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x782 = -25;
	uint64_t x783 = UINT64_MAX;
	static int16_t x784 = -2;
	uint64_t t195 = 157253651018286297LLU;

    t195 = ((x781&x782)+(x783>x784));

    if (t195 != 606474239815LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 801U;
	volatile uint8_t x787 = 3U;
	int32_t t196 = -2;

    t196 = ((x785&x786)+(x787>x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	static volatile int32_t x790 = -1;
	volatile int64_t x791 = -5392484953044432LL;

    t197 = ((x789&x790)+(x791>x792));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = 1;
	static int32_t x795 = INT32_MAX;
	volatile int64_t x796 = INT64_MIN;

    t198 = ((x793&x794)+(x795>x796));

    if (t198 != 2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x797 = INT32_MIN;
	int16_t x798 = INT16_MIN;
	volatile int8_t x799 = -1;
	static volatile int32_t t199 = INT32_MIN;

    t199 = ((x797&x798)+(x799>x800));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

