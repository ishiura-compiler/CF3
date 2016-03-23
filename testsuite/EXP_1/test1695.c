
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

static uint16_t x15 = UINT16_MAX;
uint8_t x16 = UINT8_MAX;
int64_t x20 = 2190356LL;
static volatile int16_t x21 = -17;
static volatile int32_t x23 = 79122927;
int8_t x24 = -1;
static uint64_t x27 = 4147LLU;
volatile int64_t x49 = -1246590LL;
uint8_t x50 = 0U;
int16_t x51 = INT16_MIN;
int16_t x52 = -1;
int32_t t11 = -739446962;
volatile uint32_t x53 = 0U;
uint16_t x54 = 19U;
int32_t t13 = -1179635;
int8_t x68 = 1;
int64_t x69 = INT64_MAX;
int64_t x72 = 4251848839581073LL;
static int64_t x74 = INT64_MAX;
int64_t x78 = -1LL;
int32_t t18 = 1722230;
int32_t x95 = 28;
volatile int64_t x101 = 24726LL;
int16_t x102 = INT16_MAX;
static int16_t x103 = INT16_MIN;
uint64_t x107 = 40LLU;
uint8_t x116 = UINT8_MAX;
int8_t x122 = 1;
int64_t x140 = INT64_MIN;
int16_t x144 = -1;
int64_t t34 = -2791093627651126669LL;
static int8_t x154 = -4;
int32_t x155 = INT32_MIN;
int32_t x161 = INT32_MIN;
int8_t x162 = INT8_MAX;
volatile int16_t x164 = INT16_MAX;
static int16_t x170 = INT16_MAX;
uint32_t x172 = UINT32_MAX;
uint16_t x176 = 248U;
uint32_t x184 = 6U;
int64_t x198 = INT64_MAX;
static volatile uint64_t t47 = 3692LLU;
static uint16_t x204 = 1075U;
int64_t x209 = -8LL;
volatile int16_t x216 = 1;
static volatile int32_t t52 = -100145194;
static int64_t x221 = INT64_MIN;
volatile int64_t x223 = INT64_MAX;
int32_t t57 = 6990060;
static int8_t x253 = 14;
static uint64_t x257 = 4014477944LLU;
uint8_t x268 = 119U;
volatile int32_t t63 = -2;
int16_t x275 = -1;
int8_t x277 = -6;
int32_t t68 = -1;
volatile int16_t x291 = INT16_MIN;
int16_t x292 = 14135;
int32_t t71 = -12573;
volatile uint8_t x302 = 1U;
static int64_t x304 = -3740193941084326949LL;
int64_t x311 = -165953544LL;
static int16_t x316 = -4;
uint16_t x326 = 10U;
int16_t x334 = -1;
uint16_t x335 = 14U;
volatile uint32_t x336 = 100868U;
int16_t x340 = INT16_MAX;
volatile int32_t t81 = 4901;
uint64_t x348 = 8799483124909947LLU;
uint64_t t83 = 7LLU;
int8_t x351 = INT8_MAX;
uint16_t x355 = UINT16_MAX;
int64_t x357 = -203695LL;
int8_t x358 = INT8_MIN;
uint8_t x373 = UINT8_MAX;
int32_t x376 = 1057447;
volatile uint64_t x379 = 9687671999LLU;
int8_t x385 = INT8_MIN;
int32_t x398 = INT32_MIN;
uint32_t t96 = UINT32_MAX;
int8_t x402 = 40;
volatile int16_t x407 = -1;
int32_t t98 = -2013041;
int16_t x411 = INT16_MIN;
uint8_t x412 = 1U;
static int32_t t100 = INT32_MIN;
int64_t x423 = 1605LL;
static uint32_t t101 = 4482U;
static volatile uint8_t x426 = UINT8_MAX;
int16_t x428 = INT16_MAX;
uint16_t x430 = 82U;
uint16_t x435 = 355U;
uint8_t x436 = UINT8_MAX;
int32_t x438 = INT32_MAX;
static int16_t x441 = INT16_MIN;
uint64_t x446 = 371LLU;
int32_t x447 = INT32_MIN;
int32_t x448 = INT32_MIN;
volatile uint32_t x453 = UINT32_MAX;
uint64_t x462 = 118LLU;
int32_t x465 = -1;
static int64_t x471 = -1LL;
static int8_t x477 = -1;
int32_t x481 = INT32_MIN;
volatile int8_t x484 = -45;
int64_t x485 = 86663937541LL;
volatile uint32_t t117 = 6U;
static int16_t x501 = -1;
volatile int32_t x507 = -1;
volatile int16_t x511 = INT16_MIN;
int8_t x514 = INT8_MIN;
int64_t x516 = INT64_MIN;
uint64_t x518 = 243682954640296LLU;
int32_t t124 = -68418;
static volatile int16_t x521 = INT16_MIN;
volatile int32_t t125 = -2574;
int16_t x531 = -1;
int8_t x543 = INT8_MIN;
volatile int64_t x548 = -1LL;
uint32_t x549 = UINT32_MAX;
uint64_t t132 = 15LLU;
static volatile int32_t x571 = 52516759;
int8_t x585 = INT8_MIN;
volatile int64_t t140 = 851161385285312414LL;
static int16_t x589 = 2;
uint32_t x592 = 98198239U;
int16_t x595 = 3166;
static int16_t x599 = -1280;
int64_t x600 = INT64_MIN;
uint32_t x603 = UINT32_MAX;
uint16_t x612 = 7276U;
volatile int8_t x628 = -1;
uint16_t x632 = 18U;
uint32_t t152 = 55941259U;
int64_t x637 = 6148472LL;
uint64_t x638 = UINT64_MAX;
uint32_t x642 = 462345U;
int16_t x645 = -3;
uint8_t x650 = 1U;
int64_t x660 = -1LL;
int32_t x671 = INT32_MIN;
static int32_t t164 = -6834;
uint32_t x695 = UINT32_MAX;
uint16_t x703 = UINT16_MAX;
uint16_t x707 = UINT16_MAX;
int32_t t169 = 1;
uint8_t x711 = 35U;
int32_t x715 = 59781428;
int64_t x716 = INT64_MIN;
int64_t x717 = -42722238425LL;
int64_t x723 = INT64_MIN;
static int32_t t173 = -368043599;
volatile int8_t x751 = -1;
volatile int32_t x762 = 501;
int32_t x765 = INT32_MIN;
int8_t x773 = -1;
int16_t x781 = 1;
uint64_t x786 = UINT64_MAX;
int32_t x792 = -264437808;
static int32_t x797 = -1;
volatile int16_t x800 = INT16_MAX;
volatile int32_t t188 = 765380981;
volatile int64_t x819 = -11895091LL;
uint32_t x820 = 2903U;
volatile uint32_t t193 = 838709296U;
int16_t x823 = 9600;
static volatile int32_t x826 = -513248;
uint64_t t195 = UINT64_MAX;
volatile int32_t x830 = -1;
volatile int16_t x835 = 1;
int16_t x836 = 6689;
volatile int16_t x837 = -2;
int32_t x840 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	uint64_t x3 = 4048LLU;
	int16_t x4 = 0;
	static volatile int32_t t0 = 142495690;

    t0 = (((x1>x2)<=x3)+x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -202718769637839LL;
	volatile uint64_t x6 = 1291150424283LLU;
	uint16_t x7 = 6U;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 572358;

    t1 = (((x5>x6)<=x7)+x8);

    if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	static volatile uint64_t x10 = UINT64_MAX;
	volatile uint8_t x11 = 28U;
	volatile int64_t x12 = 429079057173048LL;
	static int64_t t2 = 101328908407024716LL;

    t2 = (((x9>x10)<=x11)+x12);

    if (t2 != 429079057173049LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int64_t x14 = -2831306LL;
	int32_t t3 = 49481944;

    t3 = (((x13>x14)<=x15)+x16);

    if (t3 != 256) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int16_t x18 = -1971;
	uint64_t x19 = 617LLU;
	int64_t t4 = -435LL;

    t4 = (((x17>x18)<=x19)+x20);

    if (t4 != 2190357LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	int32_t t5 = -10914410;

    t5 = (((x21>x22)<=x23)+x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = 1U;
	volatile int8_t x26 = 1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -168;

    t6 = (((x25>x26)<=x27)+x28);

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = -29;
	int16_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	int32_t x32 = -449;
	int32_t t7 = -1001;

    t7 = (((x29>x30)<=x31)+x32);

    if (t7 != -448) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	static uint16_t x39 = 2006U;
	volatile uint8_t x40 = UINT8_MAX;
	int32_t t8 = -1161;

    t8 = (((x37>x38)<=x39)+x40);

    if (t8 != 256) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = INT8_MIN;
	volatile uint64_t x42 = UINT64_MAX;
	int32_t x43 = -1503;
	int16_t x44 = 3881;
	volatile int32_t t9 = -3245;

    t9 = (((x41>x42)<=x43)+x44);

    if (t9 != 3881) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = 1483040;
	int64_t x46 = INT64_MIN;
	volatile int64_t x47 = -28912396972682LL;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (((x45>x46)<=x47)+x48);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    

    t11 = (((x49>x50)<=x51)+x52);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x55 = -3;
	static int64_t x56 = 5708497046016447LL;
	volatile int64_t t12 = 12075LL;

    t12 = (((x53>x54)<=x55)+x56);

    if (t12 != 5708497046016447LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 10;
	int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;

    t13 = (((x57>x58)<=x59)+x60);

    if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 223820739U;
	int16_t x62 = -1;
	uint32_t x63 = 40U;
	uint8_t x64 = 18U;
	int32_t t14 = 1037960;

    t14 = (((x61>x62)<=x63)+x64);

    if (t14 != 19) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	volatile uint8_t x66 = 7U;
	int8_t x67 = INT8_MIN;
	static int32_t t15 = -328711;

    t15 = (((x65>x66)<=x67)+x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x70 = -1;
	int16_t x71 = 123;
	int64_t t16 = -411522LL;

    t16 = (((x69>x70)<=x71)+x72);

    if (t16 != 4251848839581074LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -1LL;
	int32_t x75 = 10012381;
	uint32_t x76 = 12396274U;
	volatile uint32_t t17 = 4534330U;

    t17 = (((x73>x74)<=x75)+x76);

    if (t17 != 12396275U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x77 = -1LL;
	static int16_t x79 = INT16_MAX;
	int16_t x80 = 41;

    t18 = (((x77>x78)<=x79)+x80);

    if (t18 != 42) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MAX;
	uint64_t x83 = 5LLU;
	int8_t x84 = 3;
	volatile int32_t t19 = -87;

    t19 = (((x81>x82)<=x83)+x84);

    if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	int32_t x86 = INT32_MAX;
	volatile int32_t x87 = 0;
	int16_t x88 = INT16_MIN;
	static int32_t t20 = 17;

    t20 = (((x85>x86)<=x87)+x88);

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = 121U;
	volatile int8_t x90 = -1;
	int32_t x91 = 0;
	uint8_t x92 = 1U;
	int32_t t21 = 531683;

    t21 = (((x89>x90)<=x91)+x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -5;
	volatile uint64_t x94 = 670904LLU;
	int32_t x96 = -55839911;
	volatile int32_t t22 = -26065414;

    t22 = (((x93>x94)<=x95)+x96);

    if (t22 != -55839910) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x104 = 15191U;
	uint32_t t23 = 105645484U;

    t23 = (((x101>x102)<=x103)+x104);

    if (t23 != 15191U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = UINT16_MAX;
	static int16_t x106 = 2;
	int16_t x108 = -1;
	static volatile int32_t t24 = 634604459;

    t24 = (((x105>x106)<=x107)+x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MAX;
	int8_t x110 = -1;
	static int32_t x111 = -1;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = (((x109>x110)<=x111)+x112);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -58;
	uint16_t x114 = 319U;
	volatile uint8_t x115 = 47U;
	volatile int32_t t26 = 14449;

    t26 = (((x113>x114)<=x115)+x116);

    if (t26 != 256) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x117 = 3U;
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	int32_t t27 = 216293;

    t27 = (((x117>x118)<=x119)+x120);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x121 = -1;
	int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t28 = -708144926;

    t28 = (((x121>x122)<=x123)+x124);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x125 = -408;
	uint32_t x126 = 44763U;
	int64_t x127 = -1LL;
	static uint8_t x128 = UINT8_MAX;
	volatile int32_t t29 = -54027602;

    t29 = (((x125>x126)<=x127)+x128);

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = -52;
	int16_t x130 = 23;
	static volatile int32_t x131 = INT32_MIN;
	int64_t x132 = -1LL;
	volatile int64_t t30 = 2034LL;

    t30 = (((x129>x130)<=x131)+x132);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = 208259668U;
	int16_t x134 = INT16_MIN;
	static uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t31 = -424644751136435LL;

    t31 = (((x133>x134)<=x135)+x136);

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x137 = 2U;
	static volatile int64_t x138 = -1LL;
	static int16_t x139 = -1;
	static volatile int64_t t32 = INT64_MIN;

    t32 = (((x137>x138)<=x139)+x140);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 40181U;
	volatile int32_t t33 = 1171404;

    t33 = (((x141>x142)<=x143)+x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x145 = -42;
	uint32_t x146 = 11U;
	int16_t x147 = -1;
	static int64_t x148 = -412565508LL;

    t34 = (((x145>x146)<=x147)+x148);

    if (t34 != -412565508LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x149 = 478U;
	int64_t x150 = INT64_MIN;
	static volatile int32_t x151 = INT32_MIN;
	volatile int32_t x152 = INT32_MAX;
	volatile int32_t t35 = INT32_MAX;

    t35 = (((x149>x150)<=x151)+x152);

    if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x153 = 4U;
	int8_t x156 = INT8_MAX;
	int32_t t36 = 0;

    t36 = (((x153>x154)<=x155)+x156);

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	volatile int64_t x158 = -1LL;
	uint64_t x159 = 1417922797146139LLU;
	uint8_t x160 = 76U;
	volatile int32_t t37 = 20;

    t37 = (((x157>x158)<=x159)+x160);

    if (t37 != 77) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x163 = 1LL;
	static volatile int32_t t38 = -148030484;

    t38 = (((x161>x162)<=x163)+x164);

    if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = 1539LL;
	static int32_t x166 = 0;
	uint64_t x167 = UINT64_MAX;
	static int32_t x168 = INT32_MIN;
	int32_t t39 = -1843;

    t39 = (((x165>x166)<=x167)+x168);

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 15U;
	uint32_t x171 = UINT32_MAX;
	volatile uint32_t t40 = 1U;

    t40 = (((x169>x170)<=x171)+x172);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x173 = -1;
	uint16_t x174 = 2U;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t41 = 2428664;

    t41 = (((x173>x174)<=x175)+x176);

    if (t41 != 249) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = 1;
	int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MAX;
	int8_t x180 = -1;
	volatile int32_t t42 = 1106;

    t42 = (((x177>x178)<=x179)+x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x181 = 20491319228LLU;
	int16_t x182 = INT16_MIN;
	volatile uint8_t x183 = 1U;
	static uint32_t t43 = 9U;

    t43 = (((x181>x182)<=x183)+x184);

    if (t43 != 7U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MIN;
	static volatile int16_t x186 = INT16_MAX;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

    t44 = (((x185>x186)<=x187)+x188);

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MAX;
	static uint16_t x190 = UINT16_MAX;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = 0U;
	int32_t t45 = 2088797;

    t45 = (((x189>x190)<=x191)+x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = INT32_MIN;
	int8_t x194 = -15;
	int16_t x195 = -1;
	int64_t x196 = INT64_MIN;
	static volatile int64_t t46 = INT64_MIN;

    t46 = (((x193>x194)<=x195)+x196);

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 7;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = 50000534LLU;

    t47 = (((x197>x198)<=x199)+x200);

    if (t47 != 50000535LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 100U;
	int16_t x202 = 1;
	uint32_t x203 = UINT32_MAX;
	static int32_t t48 = -356;

    t48 = (((x201>x202)<=x203)+x204);

    if (t48 != 1076) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	static uint64_t x206 = 4023485950346693999LLU;
	int32_t x207 = -22685551;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t49 = 9470369;

    t49 = (((x205>x206)<=x207)+x208);

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x210 = -332;
	int16_t x211 = -1;
	int32_t x212 = 8427;
	static volatile int32_t t50 = 4117023;

    t50 = (((x209>x210)<=x211)+x212);

    if (t50 != 8427) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x213 = -6572481LL;
	uint16_t x214 = 147U;
	static uint64_t x215 = UINT64_MAX;
	int32_t t51 = 14911;

    t51 = (((x213>x214)<=x215)+x216);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 5288759077372894LLU;
	int64_t x218 = INT64_MIN;
	static volatile uint8_t x219 = 2U;
	int32_t x220 = INT32_MIN;

    t52 = (((x217>x218)<=x219)+x220);

    if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x222 = INT16_MIN;
	volatile uint32_t x224 = 725659U;
	uint32_t t53 = 14670278U;

    t53 = (((x221>x222)<=x223)+x224);

    if (t53 != 725660U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x225 = INT64_MAX;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 604092U;
	int8_t x228 = INT8_MIN;
	static int32_t t54 = 206;

    t54 = (((x225>x226)<=x227)+x228);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = 13U;
	uint64_t x230 = 0LLU;
	static uint8_t x231 = UINT8_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t55 = 3;

    t55 = (((x229>x230)<=x231)+x232);

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = 314U;
	uint8_t x234 = 7U;
	int32_t x235 = INT32_MAX;
	uint16_t x236 = 1779U;
	static volatile int32_t t56 = -30345;

    t56 = (((x233>x234)<=x235)+x236);

    if (t56 != 1780) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x237 = -1;
	volatile uint32_t x238 = 123180578U;
	static int16_t x239 = 595;
	static int16_t x240 = -1;

    t57 = (((x237>x238)<=x239)+x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -18;
	int64_t x244 = -11597897377535445LL;
	volatile int64_t t58 = -216903165653LL;

    t58 = (((x241>x242)<=x243)+x244);

    if (t58 != -11597897377535445LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x249 = -25218513756LL;
	volatile int16_t x250 = -1;
	volatile int16_t x251 = INT16_MIN;
	static int64_t x252 = -5LL;
	int64_t t59 = -580023LL;

    t59 = (((x249>x250)<=x251)+x252);

    if (t59 != -5LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x254 = -108;
	volatile uint16_t x255 = 29711U;
	int8_t x256 = INT8_MIN;
	static int32_t t60 = -944;

    t60 = (((x253>x254)<=x255)+x256);

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x258 = UINT64_MAX;
	static int16_t x259 = 2;
	static uint32_t x260 = 9164533U;
	uint32_t t61 = 28239211U;

    t61 = (((x257>x258)<=x259)+x260);

    if (t61 != 9164534U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = INT8_MIN;
	int64_t x262 = -1LL;
	int32_t x263 = -1217;
	uint8_t x264 = UINT8_MAX;
	int32_t t62 = -382082790;

    t62 = (((x261>x262)<=x263)+x264);

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MIN;
	static volatile uint8_t x266 = 86U;
	volatile int64_t x267 = INT64_MAX;

    t63 = (((x265>x266)<=x267)+x268);

    if (t63 != 120) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x269 = -26;
	int32_t x270 = -1;
	volatile int32_t x271 = INT32_MIN;
	uint32_t x272 = 2039365U;
	volatile uint32_t t64 = 49U;

    t64 = (((x269>x270)<=x271)+x272);

    if (t64 != 2039365U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MAX;
	volatile int64_t x274 = -161725049345651713LL;
	static int64_t x276 = INT64_MIN;
	int64_t t65 = INT64_MIN;

    t65 = (((x273>x274)<=x275)+x276);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x278 = 681U;
	int8_t x279 = INT8_MAX;
	static int8_t x280 = 0;
	volatile int32_t t66 = -7875;

    t66 = (((x277>x278)<=x279)+x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x281 = -1LL;
	uint16_t x282 = 73U;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t67 = INT32_MAX;

    t67 = (((x281>x282)<=x283)+x284);

    if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = -1;
	volatile uint32_t x286 = 649U;
	int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MIN;

    t68 = (((x285>x286)<=x287)+x288);

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x289 = 12U;
	volatile int16_t x290 = -306;
	static int32_t t69 = 491;

    t69 = (((x289>x290)<=x291)+x292);

    if (t69 != 14135) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = INT8_MIN;
	static volatile uint64_t x294 = UINT64_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	uint16_t x296 = 9291U;
	int32_t t70 = 3993;

    t70 = (((x293>x294)<=x295)+x296);

    if (t70 != 9292) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = 61715166657060LLU;
	volatile int32_t x298 = -1;
	int16_t x299 = INT16_MAX;
	volatile int32_t x300 = INT32_MIN;

    t71 = (((x297>x298)<=x299)+x300);

    if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x301 = 7714U;
	volatile int8_t x303 = INT8_MAX;
	static volatile int64_t t72 = -7LL;

    t72 = (((x301>x302)<=x303)+x304);

    if (t72 != -3740193941084326948LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = UINT16_MAX;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = INT16_MIN;
	static uint8_t x308 = UINT8_MAX;
	int32_t t73 = -388627944;

    t73 = (((x305>x306)<=x307)+x308);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x309 = 3U;
	volatile uint16_t x310 = UINT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t74 = -854;

    t74 = (((x309>x310)<=x311)+x312);

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 1U;
	static int64_t x315 = INT64_MIN;
	int32_t t75 = -849;

    t75 = (((x313>x314)<=x315)+x316);

    if (t75 != -4) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = 2U;
	int64_t x318 = 70497736885072462LL;
	static uint64_t x319 = UINT64_MAX;
	uint8_t x320 = 14U;
	volatile int32_t t76 = -601496775;

    t76 = (((x317>x318)<=x319)+x320);

    if (t76 != 15) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x321 = 1014U;
	uint16_t x322 = UINT16_MAX;
	int16_t x323 = -11;
	int16_t x324 = -1;
	volatile int32_t t77 = 129;

    t77 = (((x321>x322)<=x323)+x324);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x325 = 204;
	int16_t x327 = INT16_MAX;
	volatile int16_t x328 = 759;
	volatile int32_t t78 = 6554549;

    t78 = (((x325>x326)<=x327)+x328);

    if (t78 != 760) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = -15;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = -26;
	uint32_t x332 = 2143091U;
	uint32_t t79 = 57161615U;

    t79 = (((x329>x330)<=x331)+x332);

    if (t79 != 2143091U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x333 = UINT64_MAX;
	volatile uint32_t t80 = 654857338U;

    t80 = (((x333>x334)<=x335)+x336);

    if (t80 != 100869U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x337 = 146063495U;
	int16_t x338 = -1;
	static int64_t x339 = INT64_MIN;

    t81 = (((x337>x338)<=x339)+x340);

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x341 = -1;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 1226U;
	volatile int8_t x344 = 1;
	volatile int32_t t82 = -3;

    t82 = (((x341>x342)<=x343)+x344);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = 3692U;
	static int32_t x346 = INT32_MIN;
	uint8_t x347 = 1U;

    t83 = (((x345>x346)<=x347)+x348);

    if (t83 != 8799483124909948LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x349 = 3;
	volatile int64_t x350 = INT64_MAX;
	static int16_t x352 = 0;
	volatile int32_t t84 = 18061;

    t84 = (((x349>x350)<=x351)+x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MAX;
	uint16_t x356 = 52U;
	int32_t t85 = -348;

    t85 = (((x353>x354)<=x355)+x356);

    if (t85 != 53) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x359 = -1;
	int32_t x360 = -38404035;
	int32_t t86 = -828;

    t86 = (((x357>x358)<=x359)+x360);

    if (t86 != -38404035) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x361 = 25U;
	uint64_t x362 = 239057LLU;
	static int8_t x363 = INT8_MAX;
	uint32_t x364 = 1879U;
	uint32_t t87 = 8667355U;

    t87 = (((x361>x362)<=x363)+x364);

    if (t87 != 1880U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x365 = -1;
	int32_t x366 = -1;
	static uint8_t x367 = 0U;
	int64_t x368 = INT64_MIN;
	int64_t t88 = -918025981LL;

    t88 = (((x365>x366)<=x367)+x368);

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x369 = 11U;
	static int8_t x370 = INT8_MIN;
	uint16_t x371 = UINT16_MAX;
	static volatile int32_t x372 = -191;
	static int32_t t89 = 13470;

    t89 = (((x369>x370)<=x371)+x372);

    if (t89 != -190) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x374 = INT32_MAX;
	volatile int64_t x375 = 4559871146LL;
	volatile int32_t t90 = -9266623;

    t90 = (((x373>x374)<=x375)+x376);

    if (t90 != 1057448) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MAX;
	int32_t x378 = INT32_MIN;
	static uint16_t x380 = UINT16_MAX;
	static int32_t t91 = 145488642;

    t91 = (((x377>x378)<=x379)+x380);

    if (t91 != 65536) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x381 = 26;
	int16_t x382 = -1;
	int8_t x383 = INT8_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t92 = -1;

    t92 = (((x381>x382)<=x383)+x384);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x386 = INT64_MIN;
	static volatile uint32_t x387 = 42518U;
	static int16_t x388 = INT16_MAX;
	int32_t t93 = -47940;

    t93 = (((x385>x386)<=x387)+x388);

    if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x389 = -3591;
	int32_t x390 = INT32_MAX;
	volatile int32_t x391 = INT32_MIN;
	volatile int64_t x392 = 228196920885LL;
	volatile int64_t t94 = -38034LL;

    t94 = (((x389>x390)<=x391)+x392);

    if (t94 != 228196920885LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x393 = UINT16_MAX;
	int64_t x394 = -1LL;
	volatile int8_t x395 = INT8_MIN;
	int8_t x396 = -7;
	volatile int32_t t95 = 727888498;

    t95 = (((x393>x394)<=x395)+x396);

    if (t95 != -7) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	volatile int16_t x399 = -1;
	uint32_t x400 = UINT32_MAX;

    t96 = (((x397>x398)<=x399)+x400);

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = INT16_MAX;
	int64_t x403 = INT64_MIN;
	int64_t x404 = -620488849884784LL;
	int64_t t97 = 34678727138893778LL;

    t97 = (((x401>x402)<=x403)+x404);

    if (t97 != -620488849884784LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = 8765608866078768LLU;
	static uint8_t x406 = UINT8_MAX;
	static int16_t x408 = 1;

    t98 = (((x405>x406)<=x407)+x408);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x409 = INT32_MAX;
	static volatile uint8_t x410 = UINT8_MAX;
	volatile int32_t t99 = -1501042;

    t99 = (((x409>x410)<=x411)+x412);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = INT32_MIN;
	volatile int16_t x414 = INT16_MIN;
	int64_t x415 = -71162853656706LL;
	int32_t x416 = INT32_MIN;

    t100 = (((x413>x414)<=x415)+x416);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = -4;
	volatile int8_t x422 = -1;
	volatile uint32_t x424 = 27950U;

    t101 = (((x421>x422)<=x423)+x424);

    if (t101 != 27951U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = INT64_MIN;
	int16_t x427 = INT16_MAX;
	volatile int32_t t102 = 353395;

    t102 = (((x425>x426)<=x427)+x428);

    if (t102 != 32768) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x429 = 1913409LLU;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MIN;
	int64_t t103 = INT64_MIN;

    t103 = (((x429>x430)<=x431)+x432);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x433 = 1456368691U;
	uint8_t x434 = 1U;
	int32_t t104 = 2;

    t104 = (((x433>x434)<=x435)+x436);

    if (t104 != 256) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x437 = 113170661754LLU;
	uint32_t x439 = UINT32_MAX;
	int16_t x440 = 100;
	int32_t t105 = 1060;

    t105 = (((x437>x438)<=x439)+x440);

    if (t105 != 101) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x442 = 3;
	static uint64_t x443 = 76263928292083LLU;
	static int16_t x444 = -1;
	volatile int32_t t106 = -762751;

    t106 = (((x441>x442)<=x443)+x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x445 = INT64_MAX;
	int32_t t107 = INT32_MIN;

    t107 = (((x445>x446)<=x447)+x448);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x454 = -24;
	volatile uint64_t x455 = 3265908609LLU;
	int16_t x456 = -1;
	int32_t t108 = -4692687;

    t108 = (((x453>x454)<=x455)+x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x457 = 10342524LL;
	volatile int32_t x458 = INT32_MAX;
	volatile uint8_t x459 = UINT8_MAX;
	volatile int16_t x460 = INT16_MIN;
	int32_t t109 = 523062;

    t109 = (((x457>x458)<=x459)+x460);

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x461 = INT8_MAX;
	uint8_t x463 = UINT8_MAX;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t110 = 40;

    t110 = (((x461>x462)<=x463)+x464);

    if (t110 != 256) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x466 = 35U;
	static uint16_t x467 = 15U;
	uint16_t x468 = 1316U;
	int32_t t111 = 481110433;

    t111 = (((x465>x466)<=x467)+x468);

    if (t111 != 1317) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = INT16_MIN;
	static int8_t x470 = 1;
	uint32_t x472 = 1U;
	static uint32_t t112 = 32152654U;

    t112 = (((x469>x470)<=x471)+x472);

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = INT32_MAX;
	volatile int32_t x474 = 191325359;
	uint16_t x475 = 3925U;
	volatile int64_t x476 = -1LL;
	volatile int64_t t113 = -152369586406LL;

    t113 = (((x473>x474)<=x475)+x476);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x478 = 7201919416997LLU;
	static int8_t x479 = INT8_MIN;
	int16_t x480 = -14609;
	volatile int32_t t114 = 3955;

    t114 = (((x477>x478)<=x479)+x480);

    if (t114 != -14609) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x482 = -3468228;
	int32_t x483 = -1;
	volatile int32_t t115 = 28;

    t115 = (((x481>x482)<=x483)+x484);

    if (t115 != -45) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x486 = -1;
	volatile int16_t x487 = -1;
	int16_t x488 = INT16_MAX;
	static volatile int32_t t116 = -1086890;

    t116 = (((x485>x486)<=x487)+x488);

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x489 = INT32_MAX;
	static volatile uint8_t x490 = 0U;
	uint16_t x491 = 7317U;
	uint32_t x492 = 720371U;

    t117 = (((x489>x490)<=x491)+x492);

    if (t117 != 720372U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x493 = 0;
	int8_t x494 = INT8_MIN;
	volatile uint32_t x495 = 156759833U;
	int64_t x496 = 960LL;
	int64_t t118 = -87034LL;

    t118 = (((x493>x494)<=x495)+x496);

    if (t118 != 961LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x497 = 19120U;
	static volatile uint8_t x498 = 11U;
	volatile int8_t x499 = -1;
	static uint8_t x500 = 4U;
	int32_t t119 = 101683225;

    t119 = (((x497>x498)<=x499)+x500);

    if (t119 != 4) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x502 = 9164U;
	static volatile uint8_t x503 = UINT8_MAX;
	int16_t x504 = -1;
	int32_t t120 = -319224;

    t120 = (((x501>x502)<=x503)+x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = -3582092410222538LL;
	int16_t x506 = INT16_MAX;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t121 = 3;

    t121 = (((x505>x506)<=x507)+x508);

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = INT64_MIN;
	static int8_t x510 = INT8_MIN;
	uint16_t x512 = 23423U;
	volatile int32_t t122 = 2085845;

    t122 = (((x509>x510)<=x511)+x512);

    if (t122 != 23423) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x513 = -1;
	uint16_t x515 = 48U;
	volatile int64_t t123 = -21LL;

    t123 = (((x513>x514)<=x515)+x516);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x517 = INT64_MIN;
	static int64_t x519 = -123524547199087LL;
	int16_t x520 = INT16_MIN;

    t124 = (((x517>x518)<=x519)+x520);

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x522 = -5725201LL;
	int64_t x523 = -962580436998579LL;
	int16_t x524 = -2;

    t125 = (((x521>x522)<=x523)+x524);

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MAX;
	static uint16_t x527 = 163U;
	volatile int32_t x528 = -97671;
	static int32_t t126 = 29391;

    t126 = (((x525>x526)<=x527)+x528);

    if (t126 != -97670) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x529 = -1;
	int8_t x530 = INT8_MAX;
	int8_t x532 = 6;
	int32_t t127 = 108;

    t127 = (((x529>x530)<=x531)+x532);

    if (t127 != 6) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x533 = INT16_MIN;
	int16_t x534 = -1;
	uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	volatile int32_t t128 = 55393;

    t128 = (((x533>x534)<=x535)+x536);

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x537 = -1;
	int8_t x538 = INT8_MAX;
	static int32_t x539 = -1;
	uint32_t x540 = UINT32_MAX;
	uint32_t t129 = UINT32_MAX;

    t129 = (((x537>x538)<=x539)+x540);

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x541 = -3188LL;
	static volatile uint16_t x542 = UINT16_MAX;
	uint16_t x544 = 31U;
	volatile int32_t t130 = 328;

    t130 = (((x541>x542)<=x543)+x544);

    if (t130 != 31) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x545 = 1U;
	static int8_t x546 = -1;
	int32_t x547 = INT32_MAX;
	volatile int64_t t131 = -11LL;

    t131 = (((x545>x546)<=x547)+x548);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x550 = UINT64_MAX;
	volatile int64_t x551 = -1LL;
	static uint64_t x552 = 342LLU;

    t132 = (((x549>x550)<=x551)+x552);

    if (t132 != 342LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = -5206;
	int16_t x554 = INT16_MIN;
	volatile uint64_t x555 = 348517011667208LLU;
	volatile int32_t x556 = INT32_MIN;
	int32_t t133 = 464221568;

    t133 = (((x553>x554)<=x555)+x556);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x557 = -8;
	volatile int16_t x558 = 14;
	uint32_t x559 = 47985572U;
	static uint64_t x560 = 736849318832393419LLU;
	volatile uint64_t t134 = 3066798791547678725LLU;

    t134 = (((x557>x558)<=x559)+x560);

    if (t134 != 736849318832393420LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = INT8_MIN;
	volatile uint32_t x562 = 35022286U;
	volatile int32_t x563 = 23925257;
	uint32_t x564 = 3258U;
	uint32_t t135 = 946326U;

    t135 = (((x561>x562)<=x563)+x564);

    if (t135 != 3259U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x565 = -11410129;
	static int8_t x566 = INT8_MIN;
	int16_t x567 = 15;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t136 = -58;

    t136 = (((x565>x566)<=x567)+x568);

    if (t136 != 65536) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x569 = UINT32_MAX;
	uint64_t x570 = 177095532494LLU;
	volatile int64_t x572 = -8583LL;
	int64_t t137 = -12992LL;

    t137 = (((x569>x570)<=x571)+x572);

    if (t137 != -8582LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x573 = -1LL;
	volatile uint8_t x574 = UINT8_MAX;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 26300928757425LLU;
	volatile uint64_t t138 = 10051633LLU;

    t138 = (((x573>x574)<=x575)+x576);

    if (t138 != 26300928757425LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = 1;
	int16_t x578 = 3;
	static uint64_t x579 = 107LLU;
	volatile int16_t x580 = INT16_MIN;
	static int32_t t139 = -7371830;

    t139 = (((x577>x578)<=x579)+x580);

    if (t139 != -32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x586 = -1LL;
	static volatile int8_t x587 = INT8_MIN;
	int64_t x588 = 4510641869LL;

    t140 = (((x585>x586)<=x587)+x588);

    if (t140 != 4510641869LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x590 = INT64_MIN;
	int16_t x591 = -3982;
	volatile uint32_t t141 = 388186536U;

    t141 = (((x589>x590)<=x591)+x592);

    if (t141 != 98198239U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x593 = 41U;
	volatile int8_t x594 = 9;
	volatile int64_t x596 = -1LL;
	volatile int64_t t142 = 633227954450861LL;

    t142 = (((x593>x594)<=x595)+x596);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x597 = 30290593807966852LLU;
	int8_t x598 = INT8_MAX;
	static volatile int64_t t143 = INT64_MIN;

    t143 = (((x597>x598)<=x599)+x600);

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x601 = INT64_MIN;
	int32_t x602 = 29619630;
	int32_t x604 = INT32_MIN;
	static int32_t t144 = -395589;

    t144 = (((x601>x602)<=x603)+x604);

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x605 = INT16_MAX;
	volatile uint64_t x606 = UINT64_MAX;
	int16_t x607 = INT16_MIN;
	volatile uint64_t x608 = 4191LLU;
	volatile uint64_t t145 = 95LLU;

    t145 = (((x605>x606)<=x607)+x608);

    if (t145 != 4191LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x609 = 3U;
	int32_t x610 = 0;
	volatile int64_t x611 = -1LL;
	int32_t t146 = 14;

    t146 = (((x609>x610)<=x611)+x612);

    if (t146 != 7276) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x613 = UINT32_MAX;
	int8_t x614 = INT8_MIN;
	int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MIN;
	volatile int32_t t147 = -30400235;

    t147 = (((x613>x614)<=x615)+x616);

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = -1;
	int16_t x618 = INT16_MIN;
	int16_t x619 = INT16_MAX;
	static volatile uint8_t x620 = UINT8_MAX;
	volatile int32_t t148 = -307225;

    t148 = (((x617>x618)<=x619)+x620);

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x622 = 8021182LL;
	volatile int8_t x623 = INT8_MIN;
	int64_t x624 = -1LL;
	int64_t t149 = 294977LL;

    t149 = (((x621>x622)<=x623)+x624);

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x625 = 4LLU;
	uint32_t x626 = UINT32_MAX;
	static uint8_t x627 = 9U;
	volatile int32_t t150 = 153739;

    t150 = (((x625>x626)<=x627)+x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	volatile uint64_t x630 = 245274939546411482LLU;
	uint8_t x631 = 2U;
	volatile int32_t t151 = 2754;

    t151 = (((x629>x630)<=x631)+x632);

    if (t151 != 19) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x633 = 15036U;
	static int16_t x634 = INT16_MIN;
	int32_t x635 = INT32_MAX;
	uint32_t x636 = 3229842U;

    t152 = (((x633>x634)<=x635)+x636);

    if (t152 != 3229843U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x639 = -1;
	static int8_t x640 = INT8_MIN;
	int32_t t153 = -30093;

    t153 = (((x637>x638)<=x639)+x640);

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = 2997;
	static volatile uint32_t x643 = 91855511U;
	uint16_t x644 = 969U;
	static volatile int32_t t154 = -226;

    t154 = (((x641>x642)<=x643)+x644);

    if (t154 != 970) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x646 = INT16_MAX;
	int8_t x647 = INT8_MAX;
	int32_t x648 = -1;
	static int32_t t155 = -7616;

    t155 = (((x645>x646)<=x647)+x648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x649 = INT32_MIN;
	volatile uint8_t x651 = 2U;
	static int64_t x652 = INT64_MIN;
	volatile int64_t t156 = -442365075811198862LL;

    t156 = (((x649>x650)<=x651)+x652);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x653 = 10084611LLU;
	int8_t x654 = INT8_MAX;
	int32_t x655 = -662;
	static int32_t x656 = INT32_MIN;
	int32_t t157 = INT32_MIN;

    t157 = (((x653>x654)<=x655)+x656);

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = INT16_MIN;
	static int8_t x659 = INT8_MIN;
	int64_t t158 = -24LL;

    t158 = (((x657>x658)<=x659)+x660);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x661 = INT8_MAX;
	int8_t x662 = -2;
	int32_t x663 = INT32_MAX;
	int64_t x664 = -1LL;
	int64_t t159 = -6813LL;

    t159 = (((x661>x662)<=x663)+x664);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x665 = INT64_MIN;
	int16_t x666 = INT16_MAX;
	int64_t x667 = INT64_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t160 = 64;

    t160 = (((x665>x666)<=x667)+x668);

    if (t160 != 256) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x669 = 1368U;
	int8_t x670 = -31;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t161 = UINT64_MAX;

    t161 = (((x669>x670)<=x671)+x672);

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x673 = -1;
	volatile int32_t x674 = INT32_MAX;
	int64_t x675 = INT64_MIN;
	int32_t x676 = -1;
	volatile int32_t t162 = 37286;

    t162 = (((x673>x674)<=x675)+x676);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x677 = -1;
	int64_t x678 = -1LL;
	int16_t x679 = INT16_MIN;
	uint8_t x680 = 32U;
	int32_t t163 = 14016;

    t163 = (((x677>x678)<=x679)+x680);

    if (t163 != 32) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	volatile int32_t x683 = INT32_MIN;
	static int8_t x684 = 9;

    t164 = (((x681>x682)<=x683)+x684);

    if (t164 != 9) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x685 = -1;
	static uint8_t x686 = 34U;
	static uint64_t x687 = 4624804577977334LLU;
	static volatile int64_t x688 = INT64_MIN;
	volatile int64_t t165 = 1996181650259LL;

    t165 = (((x685>x686)<=x687)+x688);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x689 = 11699883283LLU;
	uint16_t x690 = 996U;
	uint64_t x691 = 1537305876028166974LLU;
	int32_t x692 = INT32_MIN;
	int32_t t166 = -7614603;

    t166 = (((x689>x690)<=x691)+x692);

    if (t166 != -2147483647) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = INT64_MIN;
	static int32_t x694 = INT32_MIN;
	int64_t x696 = INT64_MIN;
	int64_t t167 = 424118508913697167LL;

    t167 = (((x693>x694)<=x695)+x696);

    if (t167 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	uint16_t x702 = 435U;
	int64_t x704 = 946397109LL;
	volatile int64_t t168 = 22463920901872LL;

    t168 = (((x701>x702)<=x703)+x704);

    if (t168 != 946397110LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = 12844U;
	static uint64_t x706 = 19159102307186LLU;
	static uint16_t x708 = UINT16_MAX;

    t169 = (((x705>x706)<=x707)+x708);

    if (t169 != 65536) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x709 = INT16_MAX;
	int8_t x710 = INT8_MIN;
	volatile int8_t x712 = 52;
	static int32_t t170 = 356183;

    t170 = (((x709>x710)<=x711)+x712);

    if (t170 != 53) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x713 = 0U;
	int8_t x714 = 0;
	int64_t t171 = -172996320LL;

    t171 = (((x713>x714)<=x715)+x716);

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x718 = INT16_MIN;
	static volatile int32_t x719 = -1;
	int8_t x720 = INT8_MAX;
	volatile int32_t t172 = 125;

    t172 = (((x717>x718)<=x719)+x720);

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = 52U;
	int16_t x722 = 9924;
	int32_t x724 = 157390025;

    t173 = (((x721>x722)<=x723)+x724);

    if (t173 != 157390025) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x725 = INT32_MIN;
	int32_t x726 = INT32_MAX;
	static volatile int16_t x727 = 16138;
	int32_t x728 = INT32_MIN;
	int32_t t174 = 3042;

    t174 = (((x725>x726)<=x727)+x728);

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = -1LL;
	uint8_t x730 = 4U;
	int32_t x731 = INT32_MIN;
	static int32_t x732 = INT32_MIN;
	int32_t t175 = INT32_MIN;

    t175 = (((x729>x730)<=x731)+x732);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x737 = UINT8_MAX;
	uint64_t x738 = 1008513LLU;
	int64_t x739 = INT64_MIN;
	int64_t x740 = 2022754627067571875LL;
	volatile int64_t t176 = -8025044778466087LL;

    t176 = (((x737>x738)<=x739)+x740);

    if (t176 != 2022754627067571875LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x741 = -16700615LL;
	uint8_t x742 = UINT8_MAX;
	int16_t x743 = INT16_MIN;
	int32_t x744 = INT32_MIN;
	static volatile int32_t t177 = INT32_MIN;

    t177 = (((x741>x742)<=x743)+x744);

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x749 = 49;
	uint64_t x750 = UINT64_MAX;
	uint16_t x752 = UINT16_MAX;
	int32_t t178 = 27634;

    t178 = (((x749>x750)<=x751)+x752);

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x761 = -14;
	uint16_t x763 = 4U;
	volatile int64_t x764 = INT64_MIN;
	int64_t t179 = 2LL;

    t179 = (((x761>x762)<=x763)+x764);

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x766 = 6527756886397220224LLU;
	uint8_t x767 = 3U;
	uint32_t x768 = 21118U;
	volatile uint32_t t180 = 7U;

    t180 = (((x765>x766)<=x767)+x768);

    if (t180 != 21119U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x769 = INT32_MIN;
	int64_t x770 = -1389708LL;
	static uint16_t x771 = 533U;
	volatile uint64_t x772 = UINT64_MAX;
	volatile uint64_t t181 = 166779359LLU;

    t181 = (((x769>x770)<=x771)+x772);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x774 = 62U;
	int32_t x775 = INT32_MIN;
	static int8_t x776 = INT8_MIN;
	int32_t t182 = 11;

    t182 = (((x773>x774)<=x775)+x776);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x777 = -1;
	uint8_t x778 = UINT8_MAX;
	int64_t x779 = INT64_MIN;
	int64_t x780 = -73482881797412306LL;
	int64_t t183 = 3801LL;

    t183 = (((x777>x778)<=x779)+x780);

    if (t183 != -73482881797412306LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x782 = 17U;
	int64_t x783 = -1LL;
	uint32_t x784 = 32769709U;
	volatile uint32_t t184 = 256976281U;

    t184 = (((x781>x782)<=x783)+x784);

    if (t184 != 32769709U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x785 = 113U;
	uint64_t x787 = 29844078921496LLU;
	uint64_t x788 = UINT64_MAX;
	volatile uint64_t t185 = 18234329627LLU;

    t185 = (((x785>x786)<=x787)+x788);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x789 = -1;
	static volatile int8_t x790 = -5;
	volatile uint8_t x791 = 52U;
	static volatile int32_t t186 = 71074;

    t186 = (((x789>x790)<=x791)+x792);

    if (t186 != -264437807) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x793 = -1;
	volatile int16_t x794 = -1;
	volatile int64_t x795 = -1750984404966317873LL;
	int16_t x796 = -1;
	int32_t t187 = -133;

    t187 = (((x793>x794)<=x795)+x796);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x798 = INT8_MAX;
	static int8_t x799 = 0;

    t188 = (((x797>x798)<=x799)+x800);

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x801 = 16;
	uint8_t x802 = 25U;
	uint64_t x803 = 38230466054064807LLU;
	int64_t x804 = 162834863472LL;
	int64_t t189 = 1136LL;

    t189 = (((x801>x802)<=x803)+x804);

    if (t189 != 162834863473LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x805 = INT16_MAX;
	int32_t x806 = INT32_MAX;
	static int32_t x807 = -1;
	static int32_t x808 = -25227;
	static int32_t t190 = -153;

    t190 = (((x805>x806)<=x807)+x808);

    if (t190 != -25227) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x809 = UINT64_MAX;
	uint64_t x810 = 7LLU;
	int8_t x811 = -1;
	int32_t x812 = -122427745;
	static volatile int32_t t191 = -13702271;

    t191 = (((x809>x810)<=x811)+x812);

    if (t191 != -122427745) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x813 = -1;
	uint64_t x814 = 4408689LLU;
	int8_t x815 = -3;
	static volatile int32_t x816 = -9949331;
	static int32_t t192 = -7332;

    t192 = (((x813>x814)<=x815)+x816);

    if (t192 != -9949331) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x817 = -1;
	static int32_t x818 = 3507048;

    t193 = (((x817>x818)<=x819)+x820);

    if (t193 != 2903U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x821 = INT32_MIN;
	uint16_t x822 = UINT16_MAX;
	volatile uint32_t x824 = 125926U;
	uint32_t t194 = 7698281U;

    t194 = (((x821>x822)<=x823)+x824);

    if (t194 != 125927U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x825 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	uint64_t x828 = UINT64_MAX;

    t195 = (((x825>x826)<=x827)+x828);

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x829 = -1;
	static int64_t x831 = INT64_MIN;
	int64_t x832 = INT64_MAX;
	int64_t t196 = INT64_MAX;

    t196 = (((x829>x830)<=x831)+x832);

    if (t196 != INT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = -1;
	static uint16_t x834 = 625U;
	static int32_t t197 = 69443;

    t197 = (((x833>x834)<=x835)+x836);

    if (t197 != 6690) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x838 = -1;
	volatile uint16_t x839 = 3959U;
	int32_t t198 = -1;

    t198 = (((x837>x838)<=x839)+x840);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x841 = 117060U;
	volatile int32_t x842 = -1;
	uint8_t x843 = 17U;
	uint32_t x844 = UINT32_MAX;
	volatile uint32_t t199 = 1U;

    t199 = (((x841>x842)<=x843)+x844);

    if (t199 != 0U) { NG(); } else { ; }
	
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

