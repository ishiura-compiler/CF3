
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

static uint16_t x9 = 13405U;
int32_t x12 = INT32_MIN;
uint64_t x15 = UINT64_MAX;
volatile uint32_t x22 = UINT32_MAX;
static volatile uint8_t x25 = 0U;
static int16_t x32 = INT16_MIN;
int64_t x35 = INT64_MAX;
volatile int32_t t8 = 129;
static uint32_t x40 = UINT32_MAX;
static volatile int32_t t9 = -429;
int8_t x41 = INT8_MIN;
int16_t x44 = -1;
int16_t x54 = -1;
volatile uint32_t x58 = 227U;
int32_t t14 = -25;
uint64_t x66 = 740LLU;
static uint32_t x68 = 5U;
uint32_t x70 = 2841687U;
static int64_t x71 = INT64_MAX;
int64_t x72 = INT64_MAX;
uint32_t x77 = 40U;
int16_t x80 = -1;
volatile int8_t x91 = INT8_MAX;
int8_t x93 = -1;
uint16_t x94 = 149U;
static int32_t x95 = -1;
int32_t t22 = -6901;
uint8_t x112 = 39U;
int32_t t26 = 21085;
int64_t x119 = INT64_MAX;
int32_t x126 = INT32_MIN;
volatile int64_t x134 = -1LL;
int64_t x135 = 72143824573LL;
int8_t x141 = INT8_MIN;
int64_t x151 = -13470LL;
static volatile int16_t x159 = -1;
static volatile uint16_t x161 = 10U;
uint64_t x168 = UINT64_MAX;
static volatile int64_t x181 = 14722170840772568LL;
int16_t x184 = -1;
int8_t x187 = 15;
int8_t x191 = 0;
static volatile int32_t t45 = -123191756;
int32_t x193 = 200459;
uint64_t x198 = UINT64_MAX;
uint64_t x199 = 2398304857995666592LLU;
int32_t t49 = -65;
int64_t x209 = -391LL;
int8_t x220 = INT8_MAX;
volatile int32_t t52 = -13;
volatile int16_t x221 = INT16_MIN;
static uint64_t x222 = 120536868233LLU;
volatile int64_t x223 = -1LL;
static int16_t x227 = INT16_MIN;
volatile int32_t t54 = -1;
static uint8_t x229 = UINT8_MAX;
int64_t x230 = 17225249747013LL;
int8_t x234 = 0;
static volatile int32_t t57 = -142;
int64_t x248 = INT64_MIN;
int32_t x269 = 365509;
int32_t x270 = INT32_MIN;
int64_t x272 = INT64_MAX;
static volatile int32_t t65 = 15423974;
int16_t x277 = -1;
uint16_t x284 = UINT16_MAX;
int16_t x287 = 5473;
uint32_t x289 = 8910344U;
volatile int32_t x291 = INT32_MIN;
int16_t x296 = INT16_MIN;
uint8_t x300 = UINT8_MAX;
uint64_t x301 = UINT64_MAX;
uint8_t x309 = UINT8_MAX;
static int16_t x310 = -1;
volatile int32_t t74 = 8386308;
static int32_t x314 = -1;
int8_t x316 = -1;
int64_t x325 = -297906439LL;
uint32_t x327 = 191977U;
uint16_t x335 = UINT16_MAX;
int32_t t80 = 932283;
int64_t x339 = INT64_MIN;
static volatile int64_t x367 = INT64_MAX;
uint32_t x371 = 110533634U;
int32_t t90 = 30;
int32_t x377 = -12345;
volatile int32_t t91 = -526;
int32_t t92 = -3826;
int32_t x387 = INT32_MAX;
int32_t x397 = -240861145;
static uint8_t x415 = UINT8_MAX;
int64_t x418 = INT64_MIN;
volatile int32_t t101 = -354492976;
volatile int8_t x425 = INT8_MAX;
static volatile int64_t x427 = -197177332886230LL;
int8_t x431 = -1;
static int32_t x435 = INT32_MIN;
int64_t x439 = -1492163LL;
int16_t x443 = -74;
volatile int32_t t106 = 4920353;
static int16_t x448 = INT16_MAX;
uint16_t x455 = UINT16_MAX;
int64_t x456 = INT64_MIN;
int8_t x463 = INT8_MAX;
int32_t x464 = -1;
uint16_t x474 = 1U;
volatile uint64_t x476 = 22274439859LLU;
static volatile uint32_t x486 = UINT32_MAX;
uint64_t x487 = UINT64_MAX;
int8_t x490 = -50;
int64_t x494 = INT64_MIN;
int32_t t118 = 4025587;
int64_t x497 = INT64_MIN;
int8_t x499 = INT8_MAX;
volatile uint64_t x501 = UINT64_MAX;
volatile uint32_t x513 = 27832U;
int16_t x518 = -1;
int64_t x520 = -1LL;
int32_t t124 = -29511213;
volatile uint8_t x521 = 0U;
static uint16_t x525 = 704U;
static int32_t t126 = 20308;
int8_t x529 = INT8_MIN;
volatile uint32_t x531 = 371U;
static volatile int32_t t127 = 12558;
int64_t x544 = INT64_MIN;
int32_t t131 = 39380;
int16_t x552 = -1760;
int16_t x554 = INT16_MIN;
int16_t x556 = INT16_MAX;
uint16_t x557 = UINT16_MAX;
int32_t t134 = -211111285;
int16_t x564 = 88;
int64_t x565 = -1LL;
int16_t x566 = 6;
int32_t t136 = -204;
volatile int32_t x569 = INT32_MIN;
volatile int32_t x570 = INT32_MAX;
int16_t x580 = 2;
int32_t t139 = -6911;
int16_t x582 = INT16_MAX;
static int64_t x588 = INT64_MAX;
int32_t t141 = -1453344;
int32_t x593 = -1;
static uint16_t x594 = UINT16_MAX;
int32_t t142 = -23450524;
int32_t x601 = 273250026;
volatile int32_t t147 = 1;
static int32_t x622 = 5666;
int32_t t149 = -1727;
uint8_t x630 = 7U;
uint64_t x635 = 160196090129781LLU;
volatile uint64_t x639 = UINT64_MAX;
int32_t t153 = -3;
int32_t x645 = INT32_MIN;
int16_t x646 = 14338;
static uint32_t x649 = UINT32_MAX;
volatile int16_t x657 = INT16_MIN;
int16_t x660 = INT16_MIN;
int32_t t157 = 654250116;
static int16_t x662 = -2044;
uint8_t x668 = UINT8_MAX;
int32_t x669 = 0;
int64_t x684 = -1LL;
int32_t x690 = 788155;
uint32_t x698 = UINT32_MAX;
uint16_t x700 = 876U;
static int8_t x701 = -1;
static int32_t x704 = -1;
int8_t x717 = -3;
uint64_t x718 = 0LLU;
int32_t x722 = INT32_MIN;
int64_t x727 = -1LL;
static uint16_t x732 = 4U;
int32_t t177 = -9;
int16_t x741 = INT16_MIN;
int32_t x749 = INT32_MAX;
int16_t x757 = -113;
static uint64_t x774 = 128468153689LLU;
static int16_t x776 = 2;
volatile int32_t t187 = -232528572;
static int64_t x783 = -1LL;
volatile int32_t t189 = 997453;
int8_t x789 = 1;
int32_t t190 = -891930888;
int16_t x796 = 42;
uint64_t x801 = 8198373125LLU;
uint32_t x809 = 1656U;
volatile int32_t t195 = -37;
uint8_t x815 = 124U;
uint64_t x822 = UINT64_MAX;


void f0(void) {
    	volatile int16_t x1 = INT16_MAX;
	int32_t x2 = 253635;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -758465362;

    t0 = (x1!=((x2<=x3)%x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int8_t x6 = -1;
	volatile int16_t x7 = -1;
	int16_t x8 = -1;
	volatile int32_t t1 = -54638367;

    t1 = (x5!=((x6<=x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = INT64_MAX;
	volatile int32_t t2 = -65777022;

    t2 = (x9!=((x10<=x11)%x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	uint8_t x16 = 12U;
	volatile int32_t t3 = 0;

    t3 = (x13!=((x14<=x15)%x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 1;
	int32_t x18 = 58939762;
	static int64_t x19 = INT64_MIN;
	static int64_t x20 = 992979964787536874LL;
	volatile int32_t t4 = 5136132;

    t4 = (x17!=((x18<=x19)%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int8_t x23 = INT8_MAX;
	static int16_t x24 = 97;
	volatile int32_t t5 = 115164;

    t5 = (x21!=((x22<=x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int16_t x28 = -1;
	static volatile int32_t t6 = 2820;

    t6 = (x25!=((x26<=x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = INT64_MAX;
	int32_t x30 = 0;
	volatile int8_t x31 = INT8_MIN;
	volatile int32_t t7 = -41517138;

    t7 = (x29!=((x30<=x31)%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = 0U;
	static int32_t x34 = INT32_MAX;
	int16_t x36 = INT16_MIN;

    t8 = (x33!=((x34<=x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -17;
	static uint8_t x38 = UINT8_MAX;
	int32_t x39 = INT32_MAX;

    t9 = (x37!=((x38<=x39)%x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int32_t t10 = 702;

    t10 = (x41!=((x42<=x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = 924341427536LL;
	uint8_t x50 = 3U;
	uint64_t x51 = 17LLU;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -114448024;

    t11 = (x49!=((x50<=x51)%x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x53 = -1;
	static uint64_t x55 = 17223054LLU;
	int8_t x56 = INT8_MAX;
	int32_t t12 = -54;

    t12 = (x53!=((x54<=x55)%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MIN;
	int8_t x59 = -1;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -205010;

    t13 = (x57!=((x58<=x59)%x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = 0;
	volatile int8_t x62 = INT8_MAX;
	uint8_t x63 = 12U;
	int16_t x64 = 176;

    t14 = (x61!=((x62<=x63)%x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 1;
	int64_t x67 = INT64_MIN;
	static int32_t t15 = -108;

    t15 = (x65!=((x66<=x67)%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x69 = 29154U;
	int32_t t16 = -372;

    t16 = (x69!=((x70<=x71)%x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int32_t x74 = INT32_MAX;
	volatile int8_t x75 = INT8_MIN;
	uint8_t x76 = 63U;
	int32_t t17 = 442894;

    t17 = (x73!=((x74<=x75)%x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x78 = 1LL;
	static int64_t x79 = 5318186966LL;
	int32_t t18 = 0;

    t18 = (x77!=((x78<=x79)%x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -15;
	volatile uint8_t x82 = 15U;
	uint16_t x83 = 957U;
	volatile int8_t x84 = INT8_MIN;
	int32_t t19 = -443;

    t19 = (x81!=((x82<=x83)%x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = 44;
	uint8_t x86 = 5U;
	volatile int64_t x87 = -12020065145934667LL;
	static int32_t x88 = INT32_MIN;
	volatile int32_t t20 = 293;

    t20 = (x85!=((x86<=x87)%x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x90 = -1;
	int16_t x92 = INT16_MAX;
	volatile int32_t t21 = 322835;

    t21 = (x89!=((x90<=x91)%x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x96 = -2940331LL;

    t22 = (x93!=((x94<=x95)%x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x97 = INT32_MIN;
	int64_t x98 = -1LL;
	static int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MIN;
	int32_t t23 = 1313508;

    t23 = (x97!=((x98<=x99)%x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	static int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MAX;
	int16_t x104 = -1;
	static volatile int32_t t24 = 201238;

    t24 = (x101!=((x102<=x103)%x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = INT64_MAX;
	volatile uint16_t x108 = 1911U;
	int32_t t25 = -173793;

    t25 = (x105!=((x106<=x107)%x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MAX;
	uint64_t x110 = 115032350721LLU;
	int8_t x111 = -14;

    t26 = (x109!=((x110<=x111)%x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 3U;
	int64_t x116 = -552554857488992LL;
	volatile int32_t t27 = -15849;

    t27 = (x113!=((x114<=x115)%x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	int64_t x120 = INT64_MIN;
	int32_t t28 = 117966;

    t28 = (x117!=((x118<=x119)%x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 29U;
	static int16_t x122 = INT16_MIN;
	static uint16_t x123 = 17U;
	volatile int64_t x124 = -1LL;
	int32_t t29 = 6598274;

    t29 = (x121!=((x122<=x123)%x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	int8_t x128 = 47;
	int32_t t30 = 125277269;

    t30 = (x125!=((x126<=x127)%x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x129 = INT8_MAX;
	static int64_t x130 = INT64_MAX;
	int16_t x131 = -2;
	static int32_t x132 = 1777390;
	volatile int32_t t31 = -181891347;

    t31 = (x129!=((x130<=x131)%x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x133 = 4U;
	int32_t x136 = -1;
	volatile int32_t t32 = -1;

    t32 = (x133!=((x134<=x135)%x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = -65;
	volatile uint64_t x138 = UINT64_MAX;
	uint16_t x139 = UINT16_MAX;
	int64_t x140 = INT64_MAX;
	volatile int32_t t33 = 207204;

    t33 = (x137!=((x138<=x139)%x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x142 = 7U;
	int16_t x143 = INT16_MAX;
	static uint8_t x144 = 3U;
	volatile int32_t t34 = 1265;

    t34 = (x141!=((x142<=x143)%x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	uint8_t x146 = 0U;
	int64_t x147 = INT64_MIN;
	static volatile int8_t x148 = -3;
	volatile int32_t t35 = -3602;

    t35 = (x145!=((x146<=x147)%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	int64_t x150 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t36 = 0;

    t36 = (x149!=((x150<=x151)%x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = INT16_MIN;
	static int64_t x154 = INT64_MIN;
	volatile int16_t x155 = -998;
	int8_t x156 = 8;
	volatile int32_t t37 = 345910;

    t37 = (x153!=((x154<=x155)%x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x157 = INT32_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile int8_t x160 = -1;
	int32_t t38 = 443935886;

    t38 = (x157!=((x158<=x159)%x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x162 = INT64_MIN;
	static int64_t x163 = INT64_MIN;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t39 = 7771;

    t39 = (x161!=((x162<=x163)%x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = -1LL;
	uint16_t x166 = UINT16_MAX;
	static int8_t x167 = -2;
	int32_t t40 = 38986;

    t40 = (x165!=((x166<=x167)%x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x169 = INT16_MIN;
	static uint8_t x170 = 9U;
	int16_t x171 = -193;
	uint32_t x172 = 14316030U;
	volatile int32_t t41 = -334;

    t41 = (x169!=((x170<=x171)%x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = -1;
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;
	uint16_t x176 = 94U;
	volatile int32_t t42 = 5280381;

    t42 = (x173!=((x174<=x175)%x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x182 = INT8_MIN;
	volatile int16_t x183 = 5;
	int32_t t43 = 93;

    t43 = (x181!=((x182<=x183)%x184));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x185 = INT8_MIN;
	static volatile int16_t x186 = -1;
	uint8_t x188 = 4U;
	volatile int32_t t44 = 25003214;

    t44 = (x185!=((x186<=x187)%x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = INT64_MAX;
	volatile int64_t x190 = -1490429250162LL;
	static volatile int8_t x192 = -1;

    t45 = (x189!=((x190<=x191)%x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x194 = 0U;
	int32_t x195 = -1;
	static int16_t x196 = -1;
	static int32_t t46 = -14928;

    t46 = (x193!=((x194<=x195)%x196));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = 1U;
	int16_t x200 = -1;
	int32_t t47 = -3794782;

    t47 = (x197!=((x198<=x199)%x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = 42191049416720025LLU;
	uint32_t x202 = 15U;
	int8_t x203 = INT8_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t48 = -130020315;

    t48 = (x201!=((x202<=x203)%x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	int16_t x207 = 1;
	uint32_t x208 = 276302737U;

    t49 = (x205!=((x206<=x207)%x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x210 = INT8_MIN;
	static uint8_t x211 = 2U;
	uint16_t x212 = 205U;
	int32_t t50 = -7625;

    t50 = (x209!=((x210<=x211)%x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x213 = UINT16_MAX;
	int64_t x214 = -117128132503637LL;
	volatile int32_t x215 = INT32_MIN;
	uint8_t x216 = 19U;
	volatile int32_t t51 = 16364;

    t51 = (x213!=((x214<=x215)%x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = -1;
	static uint8_t x218 = UINT8_MAX;
	uint32_t x219 = 508824U;

    t52 = (x217!=((x218<=x219)%x220));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x224 = 4U;
	int32_t t53 = 2010322;

    t53 = (x221!=((x222<=x223)%x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = -1336LL;
	uint16_t x226 = UINT16_MAX;
	static volatile uint64_t x228 = 61804809206193LLU;

    t54 = (x225!=((x226<=x227)%x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	volatile int32_t t55 = 1;

    t55 = (x229!=((x230<=x231)%x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t56 = 1;

    t56 = (x233!=((x234<=x235)%x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x237 = -1;
	int32_t x238 = -1;
	uint8_t x239 = 1U;
	uint16_t x240 = 1U;

    t57 = (x237!=((x238<=x239)%x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MAX;
	static int64_t x243 = INT64_MIN;
	uint64_t x244 = 457423279093655LLU;
	volatile int32_t t58 = -115846;

    t58 = (x241!=((x242<=x243)%x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	int16_t x247 = INT16_MIN;
	volatile int32_t t59 = -58669;

    t59 = (x245!=((x246<=x247)%x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MIN;
	uint16_t x254 = UINT16_MAX;
	static volatile int16_t x255 = INT16_MIN;
	volatile int32_t x256 = -1;
	volatile int32_t t60 = -1;

    t60 = (x253!=((x254<=x255)%x256));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = INT64_MIN;
	volatile int16_t x258 = 50;
	int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int32_t t61 = 34568725;

    t61 = (x257!=((x258<=x259)%x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	int64_t x264 = -126LL;
	volatile int32_t t62 = -125995509;

    t62 = (x261!=((x262<=x263)%x264));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = INT16_MIN;
	volatile int32_t x266 = 1;
	uint16_t x267 = UINT16_MAX;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t63 = -8176;

    t63 = (x265!=((x266<=x267)%x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x271 = -1;
	int32_t t64 = -50525;

    t64 = (x269!=((x270<=x271)%x272));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = 52193U;
	int32_t x274 = 464711;
	uint64_t x275 = 67191364915637LLU;
	volatile int16_t x276 = INT16_MIN;

    t65 = (x273!=((x274<=x275)%x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x278 = INT8_MIN;
	static uint32_t x279 = UINT32_MAX;
	int8_t x280 = 25;
	int32_t t66 = 48;

    t66 = (x277!=((x278<=x279)%x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 3U;
	uint64_t x282 = 218LLU;
	int32_t x283 = INT32_MIN;
	volatile int32_t t67 = -1820133;

    t67 = (x281!=((x282<=x283)%x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x285 = 64U;
	static volatile uint32_t x286 = 397303181U;
	volatile uint16_t x288 = 52U;
	int32_t t68 = -2;

    t68 = (x285!=((x286<=x287)%x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x290 = 7642239404222LL;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t69 = 925283;

    t69 = (x289!=((x290<=x291)%x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x293 = 1517934378822965008LL;
	volatile uint32_t x294 = 5343U;
	uint16_t x295 = 410U;
	volatile int32_t t70 = 9736385;

    t70 = (x293!=((x294<=x295)%x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x297 = 73010538400622LL;
	uint16_t x298 = UINT16_MAX;
	volatile int8_t x299 = INT8_MAX;
	int32_t t71 = 61449279;

    t71 = (x297!=((x298<=x299)%x300));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x302 = -1;
	int8_t x303 = INT8_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t72 = 73;

    t72 = (x301!=((x302<=x303)%x304));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x305 = 352U;
	volatile int64_t x306 = INT64_MAX;
	int32_t x307 = INT32_MAX;
	static volatile uint16_t x308 = 8U;
	volatile int32_t t73 = 813;

    t73 = (x305!=((x306<=x307)%x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x311 = INT16_MIN;
	int64_t x312 = 86LL;

    t74 = (x309!=((x310<=x311)%x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = 30462710152451766LLU;
	static int16_t x315 = INT16_MIN;
	int32_t t75 = -279;

    t75 = (x313!=((x314<=x315)%x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MIN;
	static volatile int16_t x318 = -1;
	int16_t x319 = -1;
	uint8_t x320 = 6U;
	static volatile int32_t t76 = 432956125;

    t76 = (x317!=((x318<=x319)%x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x321 = 13LLU;
	static int32_t x322 = INT32_MIN;
	static int8_t x323 = -1;
	int16_t x324 = INT16_MIN;
	int32_t t77 = 29;

    t77 = (x321!=((x322<=x323)%x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x326 = INT64_MIN;
	int64_t x328 = 619LL;
	volatile int32_t t78 = 1658;

    t78 = (x325!=((x326<=x327)%x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = 3;
	int16_t x330 = INT16_MAX;
	uint32_t x331 = UINT32_MAX;
	static volatile int8_t x332 = INT8_MIN;
	int32_t t79 = -566;

    t79 = (x329!=((x330<=x331)%x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = -7662;
	uint16_t x334 = UINT16_MAX;
	static int16_t x336 = -1;

    t80 = (x333!=((x334<=x335)%x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x337 = 320U;
	uint8_t x338 = UINT8_MAX;
	uint16_t x340 = 57U;
	int32_t t81 = -1038;

    t81 = (x337!=((x338<=x339)%x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x341 = 1U;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x343 = UINT16_MAX;
	int16_t x344 = -1;
	volatile int32_t t82 = 252365360;

    t82 = (x341!=((x342<=x343)%x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x345 = INT16_MIN;
	volatile int32_t x346 = -7896808;
	uint64_t x347 = 129009944393032LLU;
	uint64_t x348 = 7162051969674023538LLU;
	int32_t t83 = 54;

    t83 = (x345!=((x346<=x347)%x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x349 = 5U;
	static int8_t x350 = INT8_MIN;
	volatile int8_t x351 = INT8_MIN;
	static int8_t x352 = 3;
	static int32_t t84 = -110125;

    t84 = (x349!=((x350<=x351)%x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = INT16_MAX;
	static volatile uint32_t x354 = 28015U;
	volatile uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t85 = -54;

    t85 = (x353!=((x354<=x355)%x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x357 = 0U;
	volatile int16_t x358 = INT16_MIN;
	static uint16_t x359 = 2882U;
	int16_t x360 = INT16_MAX;
	int32_t t86 = -27641;

    t86 = (x357!=((x358<=x359)%x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x361 = 453;
	static int8_t x362 = -1;
	uint8_t x363 = 75U;
	int32_t x364 = -49185;
	int32_t t87 = 1;

    t87 = (x361!=((x362<=x363)%x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	int64_t x368 = -21LL;
	static volatile int32_t t88 = -15115;

    t88 = (x365!=((x366<=x367)%x368));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x369 = UINT8_MAX;
	static int32_t x370 = -147;
	uint8_t x372 = 7U;
	volatile int32_t t89 = 11135;

    t89 = (x369!=((x370<=x371)%x372));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x373 = UINT8_MAX;
	int32_t x374 = -1;
	static volatile int8_t x375 = INT8_MAX;
	volatile uint32_t x376 = UINT32_MAX;

    t90 = (x373!=((x374<=x375)%x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x378 = INT32_MIN;
	uint16_t x379 = 25U;
	int8_t x380 = -1;

    t91 = (x377!=((x378<=x379)%x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x381 = 19931U;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MIN;
	int64_t x384 = -32396290880LL;

    t92 = (x381!=((x382<=x383)%x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = INT64_MIN;
	static uint32_t x386 = UINT32_MAX;
	static uint32_t x388 = UINT32_MAX;
	int32_t t93 = -16224378;

    t93 = (x385!=((x386<=x387)%x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x389 = 32176829U;
	int16_t x390 = -1394;
	int8_t x391 = INT8_MAX;
	int64_t x392 = -1LL;
	int32_t t94 = -11;

    t94 = (x389!=((x390<=x391)%x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = -90127831;
	volatile int32_t t95 = -14383;

    t95 = (x393!=((x394<=x395)%x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x398 = 9U;
	int32_t x399 = INT32_MIN;
	static int64_t x400 = INT64_MIN;
	int32_t t96 = -95471;

    t96 = (x397!=((x398<=x399)%x400));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x401 = 1735792U;
	int8_t x402 = -1;
	int64_t x403 = INT64_MIN;
	uint8_t x404 = 9U;
	volatile int32_t t97 = -31455971;

    t97 = (x401!=((x402<=x403)%x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x405 = INT8_MIN;
	volatile int16_t x406 = 3;
	uint64_t x407 = 49158LLU;
	int8_t x408 = -1;
	static int32_t t98 = -5369;

    t98 = (x405!=((x406<=x407)%x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x409 = INT8_MIN;
	uint32_t x410 = 13U;
	volatile int32_t x411 = INT32_MIN;
	static int16_t x412 = INT16_MAX;
	int32_t t99 = -1878206;

    t99 = (x409!=((x410<=x411)%x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x413 = 7026;
	int16_t x414 = -1;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t100 = -811816;

    t100 = (x413!=((x414<=x415)%x416));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x417 = 2468797U;
	uint16_t x419 = UINT16_MAX;
	volatile uint8_t x420 = UINT8_MAX;

    t101 = (x417!=((x418<=x419)%x420));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x426 = 1;
	uint16_t x428 = 969U;
	int32_t t102 = -7179;

    t102 = (x425!=((x426<=x427)%x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x429 = UINT8_MAX;
	int64_t x430 = INT64_MAX;
	int16_t x432 = INT16_MAX;
	volatile int32_t t103 = 0;

    t103 = (x429!=((x430<=x431)%x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = -46;
	static volatile uint8_t x434 = UINT8_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t104 = -25700789;

    t104 = (x433!=((x434<=x435)%x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = -74176047LL;
	int32_t x440 = INT32_MIN;
	int32_t t105 = -1764;

    t105 = (x437!=((x438<=x439)%x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x441 = INT16_MIN;
	uint8_t x442 = UINT8_MAX;
	static int32_t x444 = INT32_MIN;

    t106 = (x441!=((x442<=x443)%x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x445 = -1;
	volatile int64_t x446 = INT64_MAX;
	int8_t x447 = 1;
	volatile int32_t t107 = 388870;

    t107 = (x445!=((x446<=x447)%x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = 1;
	volatile int32_t x454 = 510;
	volatile int32_t t108 = 10;

    t108 = (x453!=((x454<=x455)%x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x457 = INT32_MIN;
	volatile uint16_t x458 = 22896U;
	uint64_t x459 = 14288969LLU;
	uint32_t x460 = 207U;
	volatile int32_t t109 = -153;

    t109 = (x457!=((x458<=x459)%x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x461 = -1LL;
	int16_t x462 = 14;
	int32_t t110 = -44465;

    t110 = (x461!=((x462<=x463)%x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = -1;
	int32_t x466 = -1;
	static uint64_t x467 = 60687350939491617LLU;
	volatile int32_t x468 = -133;
	volatile int32_t t111 = 1;

    t111 = (x465!=((x466<=x467)%x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = -4;
	int64_t x470 = -1LL;
	int16_t x471 = INT16_MAX;
	int32_t x472 = 98065;
	volatile int32_t t112 = -439;

    t112 = (x469!=((x470<=x471)%x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x473 = -1;
	uint32_t x475 = UINT32_MAX;
	int32_t t113 = 1646;

    t113 = (x473!=((x474<=x475)%x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x477 = 0U;
	int64_t x478 = INT64_MAX;
	volatile int32_t x479 = -1;
	int8_t x480 = INT8_MAX;
	static int32_t t114 = -16829;

    t114 = (x477!=((x478<=x479)%x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x481 = INT8_MIN;
	static int16_t x482 = -1293;
	int8_t x483 = 0;
	uint16_t x484 = UINT16_MAX;
	int32_t t115 = 352275;

    t115 = (x481!=((x482<=x483)%x484));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x485 = 1711U;
	static uint32_t x488 = 1U;
	volatile int32_t t116 = -27496;

    t116 = (x485!=((x486<=x487)%x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x489 = UINT16_MAX;
	uint16_t x491 = UINT16_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile int32_t t117 = 1379676;

    t117 = (x489!=((x490<=x491)%x492));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x493 = INT64_MIN;
	int64_t x495 = -12315380122743LL;
	static int64_t x496 = INT64_MIN;

    t118 = (x493!=((x494<=x495)%x496));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x498 = -1;
	int16_t x500 = -1;
	int32_t t119 = 60236013;

    t119 = (x497!=((x498<=x499)%x500));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x502 = -1LL;
	uint64_t x503 = UINT64_MAX;
	volatile int64_t x504 = INT64_MIN;
	static int32_t t120 = 6344;

    t120 = (x501!=((x502<=x503)%x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x505 = -1;
	static int8_t x506 = 0;
	uint64_t x507 = 130480997002LLU;
	uint64_t x508 = UINT64_MAX;
	int32_t t121 = -30118255;

    t121 = (x505!=((x506<=x507)%x508));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = 0;
	int32_t x510 = INT32_MAX;
	int32_t x511 = -5481073;
	int32_t x512 = INT32_MIN;
	volatile int32_t t122 = -325;

    t122 = (x509!=((x510<=x511)%x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x514 = 26LL;
	uint64_t x515 = UINT64_MAX;
	int16_t x516 = INT16_MIN;
	static int32_t t123 = -45;

    t123 = (x513!=((x514<=x515)%x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x517 = INT32_MIN;
	volatile int32_t x519 = INT32_MAX;

    t124 = (x517!=((x518<=x519)%x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x522 = -1;
	uint16_t x523 = UINT16_MAX;
	volatile int32_t x524 = INT32_MAX;
	volatile int32_t t125 = -1488756;

    t125 = (x521!=((x522<=x523)%x524));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x526 = 1;
	uint16_t x527 = 1U;
	volatile uint16_t x528 = 6U;

    t126 = (x525!=((x526<=x527)%x528));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x530 = -1;
	int8_t x532 = INT8_MAX;

    t127 = (x529!=((x530<=x531)%x532));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x533 = INT64_MIN;
	int32_t x534 = 0;
	int16_t x535 = INT16_MAX;
	volatile int32_t x536 = INT32_MIN;
	int32_t t128 = 348;

    t128 = (x533!=((x534<=x535)%x536));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint8_t x537 = 13U;
	volatile int64_t x538 = -163579LL;
	int32_t x539 = INT32_MIN;
	volatile int64_t x540 = 1LL;
	static int32_t t129 = 1;

    t129 = (x537!=((x538<=x539)%x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x541 = UINT16_MAX;
	volatile uint64_t x542 = 23LLU;
	int8_t x543 = 0;
	volatile int32_t t130 = 985883;

    t130 = (x541!=((x542<=x543)%x544));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = -1;
	uint32_t x546 = UINT32_MAX;
	int8_t x547 = -1;
	int8_t x548 = INT8_MIN;

    t131 = (x545!=((x546<=x547)%x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x549 = 12742;
	uint8_t x550 = 6U;
	int16_t x551 = 2482;
	volatile int32_t t132 = 15;

    t132 = (x549!=((x550<=x551)%x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MAX;
	int16_t x555 = -1;
	int32_t t133 = 14133;

    t133 = (x553!=((x554<=x555)%x556));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x558 = -1LL;
	static int32_t x559 = -1;
	static int32_t x560 = -164684808;

    t134 = (x557!=((x558<=x559)%x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x561 = 0LL;
	uint64_t x562 = UINT64_MAX;
	int64_t x563 = INT64_MAX;
	int32_t t135 = 80542;

    t135 = (x561!=((x562<=x563)%x564));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x567 = INT16_MIN;
	volatile int16_t x568 = INT16_MAX;

    t136 = (x565!=((x566<=x567)%x568));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x571 = INT32_MIN;
	static uint16_t x572 = 270U;
	int32_t t137 = 97145685;

    t137 = (x569!=((x570<=x571)%x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x573 = -57741715LL;
	volatile int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MIN;
	int8_t x576 = -1;
	volatile int32_t t138 = -2;

    t138 = (x573!=((x574<=x575)%x576));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x577 = 43348116173485LLU;
	static int64_t x578 = -764147918399LL;
	uint16_t x579 = UINT16_MAX;

    t139 = (x577!=((x578<=x579)%x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x581 = 13516U;
	uint64_t x583 = UINT64_MAX;
	uint32_t x584 = UINT32_MAX;
	static int32_t t140 = -5552;

    t140 = (x581!=((x582<=x583)%x584));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = -1;
	uint64_t x586 = 189LLU;
	static int16_t x587 = 562;

    t141 = (x585!=((x586<=x587)%x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x595 = -351134270;
	int8_t x596 = INT8_MIN;

    t142 = (x593!=((x594<=x595)%x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x602 = 8LL;
	int16_t x603 = INT16_MIN;
	uint16_t x604 = UINT16_MAX;
	static volatile int32_t t143 = -8;

    t143 = (x601!=((x602<=x603)%x604));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x605 = 216642U;
	volatile int8_t x606 = INT8_MIN;
	static int8_t x607 = 39;
	int8_t x608 = INT8_MIN;
	volatile int32_t t144 = -104297863;

    t144 = (x605!=((x606<=x607)%x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x609 = 188;
	static uint64_t x610 = UINT64_MAX;
	int32_t x611 = INT32_MAX;
	int16_t x612 = INT16_MAX;
	int32_t t145 = 1014;

    t145 = (x609!=((x610<=x611)%x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x613 = INT32_MAX;
	int64_t x614 = -1LL;
	volatile int16_t x615 = INT16_MIN;
	uint8_t x616 = 80U;
	static volatile int32_t t146 = 187180258;

    t146 = (x613!=((x614<=x615)%x616));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x617 = INT64_MAX;
	int64_t x618 = -1LL;
	int64_t x619 = INT64_MAX;
	static volatile int64_t x620 = INT64_MIN;

    t147 = (x617!=((x618<=x619)%x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x621 = 82703U;
	int64_t x623 = INT64_MAX;
	volatile int16_t x624 = INT16_MIN;
	static volatile int32_t t148 = 372;

    t148 = (x621!=((x622<=x623)%x624));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x625 = -1;
	int32_t x626 = -277775838;
	int64_t x627 = INT64_MIN;
	static int32_t x628 = -1;

    t149 = (x625!=((x626<=x627)%x628));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x629 = -5371;
	uint16_t x631 = 2U;
	int64_t x632 = -1940LL;
	int32_t t150 = -648073188;

    t150 = (x629!=((x630<=x631)%x632));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x633 = 1U;
	volatile uint8_t x634 = 109U;
	uint16_t x636 = UINT16_MAX;
	static volatile int32_t t151 = 26116396;

    t151 = (x633!=((x634<=x635)%x636));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = 0;
	int16_t x640 = INT16_MIN;
	volatile int32_t t152 = -709600;

    t152 = (x637!=((x638<=x639)%x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x641 = -1;
	static int16_t x642 = 3139;
	int32_t x643 = 198;
	int64_t x644 = INT64_MIN;

    t153 = (x641!=((x642<=x643)%x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x647 = 15U;
	int64_t x648 = INT64_MAX;
	int32_t t154 = 117407;

    t154 = (x645!=((x646<=x647)%x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x650 = UINT16_MAX;
	int32_t x651 = INT32_MIN;
	volatile int32_t x652 = 95948;
	int32_t t155 = 121862;

    t155 = (x649!=((x650<=x651)%x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = INT32_MAX;
	uint32_t x654 = UINT32_MAX;
	int16_t x655 = -1;
	uint64_t x656 = UINT64_MAX;
	int32_t t156 = -991066793;

    t156 = (x653!=((x654<=x655)%x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x658 = 16991U;
	volatile int32_t x659 = INT32_MIN;

    t157 = (x657!=((x658<=x659)%x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x661 = 235;
	uint8_t x663 = 26U;
	volatile int16_t x664 = INT16_MIN;
	volatile int32_t t158 = -29713;

    t158 = (x661!=((x662<=x663)%x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x665 = 1799U;
	int64_t x666 = -493969522LL;
	static int8_t x667 = -1;
	static int32_t t159 = -4;

    t159 = (x665!=((x666<=x667)%x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x670 = -1;
	volatile int64_t x671 = INT64_MIN;
	uint64_t x672 = 6601954202LLU;
	static int32_t t160 = 393;

    t160 = (x669!=((x670<=x671)%x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x673 = 112344;
	int16_t x674 = INT16_MAX;
	volatile uint8_t x675 = 41U;
	volatile int16_t x676 = -163;
	int32_t t161 = -13489374;

    t161 = (x673!=((x674<=x675)%x676));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint64_t x678 = UINT64_MAX;
	volatile int64_t x679 = -244LL;
	int8_t x680 = INT8_MIN;
	int32_t t162 = -1;

    t162 = (x677!=((x678<=x679)%x680));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x681 = INT8_MIN;
	uint16_t x682 = UINT16_MAX;
	volatile int16_t x683 = INT16_MIN;
	int32_t t163 = 28;

    t163 = (x681!=((x682<=x683)%x684));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = INT8_MIN;
	volatile int64_t x686 = INT64_MIN;
	volatile int8_t x687 = INT8_MIN;
	int64_t x688 = INT64_MIN;
	static volatile int32_t t164 = -21;

    t164 = (x685!=((x686<=x687)%x688));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x689 = INT32_MAX;
	volatile int16_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int32_t t165 = 6;

    t165 = (x689!=((x690<=x691)%x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x693 = 11;
	int16_t x694 = 1;
	static volatile int8_t x695 = INT8_MIN;
	static uint64_t x696 = 15494519837LLU;
	int32_t t166 = 228804038;

    t166 = (x693!=((x694<=x695)%x696));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x697 = 2U;
	uint32_t x699 = UINT32_MAX;
	volatile int32_t t167 = -8;

    t167 = (x697!=((x698<=x699)%x700));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x702 = 73778351956136LLU;
	static uint8_t x703 = UINT8_MAX;
	int32_t t168 = 9;

    t168 = (x701!=((x702<=x703)%x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x705 = -1;
	int16_t x706 = -7;
	int64_t x707 = -1374028LL;
	static int64_t x708 = INT64_MAX;
	int32_t t169 = -8;

    t169 = (x705!=((x706<=x707)%x708));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = -17467LL;
	int32_t x710 = INT32_MIN;
	uint8_t x711 = 1U;
	int16_t x712 = 110;
	int32_t t170 = 1756;

    t170 = (x709!=((x710<=x711)%x712));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MIN;
	uint8_t x715 = 15U;
	uint64_t x716 = 46326937685602LLU;
	static volatile int32_t t171 = 66683755;

    t171 = (x713!=((x714<=x715)%x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x719 = 13579621LL;
	volatile int16_t x720 = INT16_MIN;
	volatile int32_t t172 = 73068773;

    t172 = (x717!=((x718<=x719)%x720));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x721 = INT8_MAX;
	uint64_t x723 = 4719397LLU;
	volatile int8_t x724 = -1;
	int32_t t173 = 501433;

    t173 = (x721!=((x722<=x723)%x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x725 = -1;
	int16_t x726 = INT16_MIN;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t174 = -165;

    t174 = (x725!=((x726<=x727)%x728));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = -343461103432732451LL;
	int8_t x730 = INT8_MAX;
	int16_t x731 = -1;
	volatile int32_t t175 = -32591;

    t175 = (x729!=((x730<=x731)%x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x733 = -1;
	volatile uint16_t x734 = 127U;
	uint16_t x735 = UINT16_MAX;
	int16_t x736 = INT16_MIN;
	volatile int32_t t176 = 43342511;

    t176 = (x733!=((x734<=x735)%x736));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x737 = INT32_MAX;
	uint8_t x738 = 5U;
	int16_t x739 = -7781;
	uint8_t x740 = 2U;

    t177 = (x737!=((x738<=x739)%x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x742 = 56714105;
	uint16_t x743 = UINT16_MAX;
	int8_t x744 = 55;
	static volatile int32_t t178 = 69671537;

    t178 = (x741!=((x742<=x743)%x744));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x745 = 5494171387096LLU;
	static uint32_t x746 = 187U;
	volatile int8_t x747 = INT8_MAX;
	static uint16_t x748 = 18012U;
	int32_t t179 = 14688177;

    t179 = (x745!=((x746<=x747)%x748));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x750 = INT16_MIN;
	uint32_t x751 = 2U;
	volatile int16_t x752 = -1;
	volatile int32_t t180 = -1063604738;

    t180 = (x749!=((x750<=x751)%x752));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x753 = INT16_MIN;
	static uint32_t x754 = 61U;
	static volatile int16_t x755 = INT16_MIN;
	static uint64_t x756 = 2430876351228LLU;
	volatile int32_t t181 = 253847;

    t181 = (x753!=((x754<=x755)%x756));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x758 = 0U;
	volatile int8_t x759 = INT8_MAX;
	int32_t x760 = -1;
	static int32_t t182 = -374956110;

    t182 = (x757!=((x758<=x759)%x760));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x761 = INT32_MAX;
	int32_t x762 = INT32_MAX;
	int64_t x763 = -1601120544LL;
	int8_t x764 = INT8_MAX;
	int32_t t183 = 63;

    t183 = (x761!=((x762<=x763)%x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x765 = -54531LL;
	volatile int64_t x766 = -11968326LL;
	uint8_t x767 = UINT8_MAX;
	int8_t x768 = 1;
	volatile int32_t t184 = 3;

    t184 = (x765!=((x766<=x767)%x768));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x769 = INT16_MIN;
	int32_t x770 = INT32_MIN;
	volatile int32_t x771 = INT32_MIN;
	volatile int64_t x772 = INT64_MIN;
	volatile int32_t t185 = -14241;

    t185 = (x769!=((x770<=x771)%x772));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x773 = UINT64_MAX;
	static int64_t x775 = INT64_MIN;
	int32_t t186 = -138468892;

    t186 = (x773!=((x774<=x775)%x776));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x777 = 8U;
	static uint16_t x778 = 13915U;
	int32_t x779 = 5;
	uint64_t x780 = 43644413LLU;

    t187 = (x777!=((x778<=x779)%x780));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = INT32_MIN;
	static int64_t x782 = INT64_MIN;
	int32_t x784 = INT32_MIN;
	volatile int32_t t188 = 259416;

    t188 = (x781!=((x782<=x783)%x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x785 = 2U;
	int16_t x786 = -1;
	uint8_t x787 = 40U;
	int16_t x788 = INT16_MIN;

    t189 = (x785!=((x786<=x787)%x788));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x790 = 23U;
	int64_t x791 = 3502831347695LL;
	int32_t x792 = -3971;

    t190 = (x789!=((x790<=x791)%x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x793 = 6488U;
	int32_t x794 = 91936;
	uint32_t x795 = UINT32_MAX;
	volatile int32_t t191 = -16418552;

    t191 = (x793!=((x794<=x795)%x796));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x797 = 7U;
	int8_t x798 = INT8_MIN;
	int32_t x799 = 5383486;
	int32_t x800 = INT32_MIN;
	volatile int32_t t192 = 11652675;

    t192 = (x797!=((x798<=x799)%x800));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x802 = UINT32_MAX;
	int32_t x803 = INT32_MAX;
	uint32_t x804 = 6U;
	volatile int32_t t193 = 55431;

    t193 = (x801!=((x802<=x803)%x804));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x805 = INT32_MAX;
	int8_t x806 = 1;
	uint64_t x807 = 71LLU;
	int32_t x808 = -391917001;
	static int32_t t194 = 922087;

    t194 = (x805!=((x806<=x807)%x808));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x810 = INT16_MIN;
	int8_t x811 = 59;
	int32_t x812 = -31;

    t195 = (x809!=((x810<=x811)%x812));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = 1001;
	int16_t x814 = 4787;
	static int32_t x816 = INT32_MIN;
	static int32_t t196 = 924;

    t196 = (x813!=((x814<=x815)%x816));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x817 = UINT32_MAX;
	int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MAX;
	int64_t x820 = INT64_MIN;
	int32_t t197 = -349656;

    t197 = (x817!=((x818<=x819)%x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x821 = -1;
	int16_t x823 = INT16_MAX;
	int32_t x824 = -1;
	int32_t t198 = -91;

    t198 = (x821!=((x822<=x823)%x824));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x829 = INT64_MAX;
	static volatile uint64_t x830 = 78296596LLU;
	int16_t x831 = -1;
	int8_t x832 = INT8_MIN;
	volatile int32_t t199 = 4;

    t199 = (x829!=((x830<=x831)%x832));

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

