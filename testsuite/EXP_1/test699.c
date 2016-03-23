
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

volatile int64_t x1 = INT64_MIN;
int8_t x5 = INT8_MAX;
static volatile int8_t x11 = INT8_MAX;
volatile int32_t x12 = 7;
uint64_t t3 = UINT64_MAX;
uint16_t x25 = UINT16_MAX;
static volatile uint64_t x27 = 219236864245606LLU;
int64_t t5 = 98115400254186359LL;
uint64_t x32 = 122683257991459667LLU;
static volatile uint64_t t6 = 313673778999034LLU;
volatile int16_t x47 = INT16_MAX;
int8_t x58 = INT8_MIN;
int16_t x59 = INT16_MIN;
int32_t t13 = 308;
int32_t x66 = 15919;
int32_t x70 = INT32_MIN;
volatile int32_t x75 = -1;
int64_t x77 = -1LL;
static uint64_t x81 = 551959629469672LLU;
int16_t x82 = -1;
int8_t x83 = INT8_MAX;
int16_t x89 = 3724;
volatile int8_t x96 = -1;
uint32_t x103 = 19528U;
int32_t t25 = INT32_MIN;
uint32_t x110 = 2U;
int16_t x113 = -1;
static volatile uint16_t x132 = UINT16_MAX;
static volatile uint16_t x133 = 0U;
uint16_t x134 = 4695U;
int16_t x139 = -4902;
volatile int32_t t32 = 9;
int8_t x144 = 12;
int64_t x146 = INT64_MAX;
static uint16_t x151 = 23U;
volatile int32_t t35 = 28231084;
volatile int32_t t36 = -114919;
int16_t x158 = INT16_MIN;
volatile int16_t x164 = INT16_MAX;
volatile int32_t t38 = 5;
volatile uint16_t x167 = UINT16_MAX;
volatile uint16_t x169 = 14946U;
static volatile int32_t t41 = 53026;
volatile int16_t x180 = -1441;
int32_t t43 = -8;
int64_t x185 = 76248686757377547LL;
uint32_t x186 = UINT32_MAX;
static volatile uint32_t t45 = 4210674U;
int8_t x196 = -1;
volatile int16_t x205 = 2514;
int8_t x208 = -1;
volatile uint16_t x210 = UINT16_MAX;
int64_t x213 = -1LL;
static int16_t x216 = INT16_MIN;
int64_t x228 = 57379185068LL;
int32_t x230 = -1;
int8_t x233 = INT8_MAX;
int32_t x234 = INT32_MIN;
int32_t x237 = INT32_MIN;
int8_t x238 = INT8_MIN;
int32_t t57 = -405384288;
int64_t x241 = INT64_MIN;
volatile int16_t x244 = INT16_MIN;
uint16_t x250 = UINT16_MAX;
int32_t t61 = -423;
static volatile uint64_t x262 = 8259LLU;
volatile int8_t x268 = INT8_MIN;
static int64_t x281 = INT64_MIN;
int8_t x286 = INT8_MAX;
static int8_t x293 = 1;
int64_t x296 = -1LL;
static int32_t t71 = 165557;
volatile uint32_t x309 = UINT32_MAX;
int8_t x318 = INT8_MIN;
uint8_t x321 = UINT8_MAX;
uint32_t x323 = 85086671U;
volatile int8_t x327 = INT8_MAX;
uint32_t x330 = 52912U;
int32_t t79 = -93234;
int8_t x334 = INT8_MAX;
static int8_t x335 = INT8_MIN;
static int8_t x339 = -1;
volatile uint8_t x343 = 1U;
int8_t x344 = -5;
volatile int32_t t82 = 1627;
static volatile int32_t t86 = -215728;
int16_t x364 = INT16_MIN;
int32_t x365 = INT32_MAX;
uint32_t x368 = 9201728U;
uint64_t t89 = 348LLU;
int64_t x373 = 57LL;
static uint16_t x381 = 4236U;
int32_t t93 = 78199;
int8_t x413 = -24;
static int64_t x414 = INT64_MIN;
int16_t x419 = -2;
static int64_t x427 = -1LL;
uint32_t x437 = UINT32_MAX;
int8_t x444 = -1;
int32_t t108 = 0;
static int32_t x453 = -1;
int32_t x460 = 567266;
volatile int32_t t114 = 66236958;
int32_t x473 = INT32_MIN;
int64_t x476 = INT64_MAX;
int32_t t116 = -195306;
volatile int8_t x483 = INT8_MAX;
volatile int32_t t117 = -21;
uint32_t x491 = 131265921U;
static int16_t x497 = INT16_MAX;
uint16_t x500 = 86U;
static volatile uint16_t x520 = 1499U;
int64_t x524 = -1LL;
int64_t x526 = INT64_MIN;
static uint8_t x531 = 0U;
int32_t x536 = 912;
int32_t t131 = -77;
int8_t x544 = INT8_MAX;
int64_t x556 = INT64_MIN;
int32_t t139 = 525;
volatile int16_t x589 = -1;
int64_t x590 = INT64_MAX;
static int64_t x591 = INT64_MIN;
uint16_t x600 = UINT16_MAX;
static int16_t x612 = -18;
static volatile int64_t x615 = INT64_MAX;
int16_t x617 = -1;
int16_t x619 = 13249;
volatile uint16_t x626 = UINT16_MAX;
int32_t x632 = INT32_MAX;
int32_t t152 = INT32_MAX;
int8_t x634 = 25;
uint16_t x644 = 28U;
volatile int32_t t156 = INT32_MIN;
static uint64_t x649 = 514898531031LLU;
volatile int32_t t160 = -18;
int64_t x665 = INT64_MIN;
int32_t x666 = INT32_MIN;
int16_t x670 = INT16_MIN;
static uint64_t x674 = 624722224647179LLU;
uint16_t x683 = UINT16_MAX;
int8_t x684 = -3;
int8_t x691 = -1;
uint64_t t169 = 461LLU;
int64_t x704 = INT64_MIN;
volatile int64_t x707 = INT64_MIN;
static uint16_t x710 = UINT16_MAX;
int32_t x712 = 0;
int32_t x717 = -975178813;
static volatile uint32_t t173 = 1U;
static uint16_t x722 = 151U;
int8_t x727 = INT8_MIN;
int32_t t176 = -7317348;
uint8_t x737 = UINT8_MAX;
int16_t x738 = -1;
int64_t t178 = INT64_MAX;
int16_t x742 = -1;
static int16_t x743 = INT16_MIN;
static int16_t x745 = -1;
int16_t x750 = INT16_MIN;
static int32_t x754 = INT32_MIN;
volatile uint32_t x758 = 23439639U;
volatile int32_t x762 = INT32_MIN;
int64_t t184 = INT64_MIN;
uint32_t x766 = UINT32_MAX;
int16_t x768 = 1447;
uint8_t x770 = 3U;
static int64_t x773 = INT64_MIN;
volatile int8_t x775 = 0;
volatile int64_t t187 = INT64_MAX;
int32_t x781 = INT32_MAX;
int16_t x782 = 75;
volatile int16_t x786 = INT16_MAX;
static volatile int32_t t191 = INT32_MIN;
int8_t x797 = INT8_MIN;
static volatile uint64_t t194 = 257572193805764089LLU;
static uint16_t x805 = 0U;
int32_t x809 = 90428578;
uint16_t x811 = UINT16_MAX;
uint64_t x813 = UINT64_MAX;
int32_t x824 = 8546;


void f0(void) {
    	static int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	static uint8_t x4 = 103U;
	volatile int32_t t0 = -27080;

    t0 = (((x1/x2)==x3)|x4);

    if (t0 != 103) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MAX;
	static int32_t t1 = -5025;

    t1 = (((x5/x6)==x7)|x8);

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 5521U;
	uint16_t x10 = UINT16_MAX;
	volatile int32_t t2 = -1013253;

    t2 = (((x9/x10)==x11)|x12);

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = 2;
	int8_t x19 = INT8_MIN;
	static uint64_t x20 = UINT64_MAX;

    t3 = (((x17/x18)==x19)|x20);

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -1;
	static int32_t x22 = -1;
	volatile int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x21/x22)==x23)|x24);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = -1;
	int64_t x28 = 371LL;

    t5 = (((x25/x26)==x27)|x28);

    if (t5 != 371LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 12;
	int64_t x30 = -1645LL;
	volatile int16_t x31 = -3363;

    t6 = (((x29/x30)==x31)|x32);

    if (t6 != 122683257991459667LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = INT32_MAX;
	int64_t x34 = INT64_MIN;
	int64_t x35 = -1LL;
	uint32_t x36 = UINT32_MAX;
	static uint32_t t7 = UINT32_MAX;

    t7 = (((x33/x34)==x35)|x36);

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = 497LLU;
	uint16_t x40 = UINT16_MAX;
	int32_t t8 = 21;

    t8 = (((x37/x38)==x39)|x40);

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	int64_t x42 = INT64_MIN;
	static int32_t x43 = -148907823;
	int64_t x44 = INT64_MAX;
	int64_t t9 = INT64_MAX;

    t9 = (((x41/x42)==x43)|x44);

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int64_t x48 = INT64_MAX;
	int64_t t10 = INT64_MAX;

    t10 = (((x45/x46)==x47)|x48);

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MAX;
	int64_t x50 = -120739039645357LL;
	uint32_t x51 = 81299U;
	uint16_t x52 = 3087U;
	volatile int32_t t11 = 173;

    t11 = (((x49/x50)==x51)|x52);

    if (t11 != 3087) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 932998608LLU;
	int16_t x54 = 35;
	int32_t x55 = INT32_MIN;
	volatile int16_t x56 = 2;
	static volatile int32_t t12 = 8;

    t12 = (((x53/x54)==x55)|x56);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	static int16_t x60 = 13253;

    t13 = (((x57/x58)==x59)|x60);

    if (t13 != 13253) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = 8157;
	int32_t x62 = INT32_MAX;
	volatile int64_t x63 = INT64_MAX;
	volatile int64_t x64 = -1399127298400356LL;
	int64_t t14 = -112872362LL;

    t14 = (((x61/x62)==x63)|x64);

    if (t14 != -1399127298400356LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 95120168263LLU;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = 1092963543276373239LLU;
	uint64_t t15 = 1105334LLU;

    t15 = (((x65/x66)==x67)|x68);

    if (t15 != 1092963543276373239LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	int32_t x71 = -1;
	static int8_t x72 = INT8_MIN;
	int32_t t16 = 4238;

    t16 = (((x69/x70)==x71)|x72);

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int64_t x74 = 239181363LL;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t17 = INT32_MIN;

    t17 = (((x73/x74)==x75)|x76);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x78 = 719;
	volatile uint32_t x79 = 3865U;
	uint64_t x80 = 1759LLU;
	volatile uint64_t t18 = 9309LLU;

    t18 = (((x77/x78)==x79)|x80);

    if (t18 != 1759LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x84 = -1;
	static volatile int32_t t19 = -109620065;

    t19 = (((x81/x82)==x83)|x84);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -1;
	static uint8_t x86 = UINT8_MAX;
	static int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	int32_t t20 = INT32_MIN;

    t20 = (((x85/x86)==x87)|x88);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = INT64_MIN;

    t21 = (((x89/x90)==x91)|x92);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x93 = INT16_MAX;
	int64_t x94 = INT64_MIN;
	static int64_t x95 = -1LL;
	int32_t t22 = 12;

    t22 = (((x93/x94)==x95)|x96);

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 5189U;
	int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	int32_t x100 = INT32_MAX;
	int32_t t23 = INT32_MAX;

    t23 = (((x97/x98)==x99)|x100);

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x101 = 9U;
	volatile int32_t x102 = INT32_MAX;
	volatile int16_t x104 = -3145;
	int32_t t24 = 218;

    t24 = (((x101/x102)==x103)|x104);

    if (t24 != -3145) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = 42;
	static int8_t x106 = -9;
	static uint8_t x107 = UINT8_MAX;
	static int32_t x108 = INT32_MIN;

    t25 = (((x105/x106)==x107)|x108);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x109 = 7U;
	int32_t x111 = -493;
	uint64_t x112 = 10LLU;
	uint64_t t26 = 109133LLU;

    t26 = (((x109/x110)==x111)|x112);

    if (t26 != 10LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x114 = 341;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = -2794389;

    t27 = (((x113/x114)==x115)|x116);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	volatile int32_t x119 = -1785541;
	uint64_t x120 = 1LLU;
	volatile uint64_t t28 = 42830088242138778LLU;

    t28 = (((x117/x118)==x119)|x120);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x121 = -1;
	volatile int8_t x122 = -1;
	static volatile int64_t x123 = -1LL;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -207;

    t29 = (((x121/x122)==x123)|x124);

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = 48;
	static uint16_t x130 = 278U;
	volatile int8_t x131 = INT8_MIN;
	volatile int32_t t30 = -223748954;

    t30 = (((x129/x130)==x131)|x132);

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x135 = INT64_MIN;
	volatile uint16_t x136 = 12U;
	volatile int32_t t31 = 112;

    t31 = (((x133/x134)==x135)|x136);

    if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x137 = 247106365857039404LL;
	static int32_t x138 = INT32_MIN;
	int32_t x140 = 1333;

    t32 = (((x137/x138)==x139)|x140);

    if (t32 != 1333) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x141 = 1534048097LLU;
	int16_t x142 = INT16_MIN;
	int32_t x143 = 0;
	volatile int32_t t33 = 173476496;

    t33 = (((x141/x142)==x143)|x144);

    if (t33 != 13) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x145 = 3U;
	int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MAX;
	volatile int64_t t34 = INT64_MAX;

    t34 = (((x145/x146)==x147)|x148);

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x149 = INT64_MAX;
	volatile uint8_t x150 = 4U;
	int16_t x152 = -508;

    t35 = (((x149/x150)==x151)|x152);

    if (t35 != -508) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	uint32_t x154 = 3171315U;
	int64_t x155 = -1LL;
	uint16_t x156 = 3131U;

    t36 = (((x153/x154)==x155)|x156);

    if (t36 != 3131) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = INT8_MIN;
	int16_t x159 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t37 = 916439377;

    t37 = (((x157/x158)==x159)|x160);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 214;
	volatile int32_t x162 = INT32_MIN;
	uint16_t x163 = 62U;

    t38 = (((x161/x162)==x163)|x164);

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = -1;
	volatile int8_t x166 = INT8_MIN;
	int64_t x168 = INT64_MAX;
	volatile int64_t t39 = INT64_MAX;

    t39 = (((x165/x166)==x167)|x168);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x170 = -1;
	uint8_t x171 = UINT8_MAX;
	volatile uint64_t x172 = 1446769691348727784LLU;
	volatile uint64_t t40 = 6235985557083LLU;

    t40 = (((x169/x170)==x171)|x172);

    if (t40 != 1446769691348727784LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x173 = INT64_MAX;
	uint64_t x174 = 1852LLU;
	uint64_t x175 = 9944761976118LLU;
	volatile int32_t x176 = 17587737;

    t41 = (((x173/x174)==x175)|x176);

    if (t41 != 17587737) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = INT16_MIN;
	uint32_t x178 = 1346676993U;
	volatile int8_t x179 = -63;
	int32_t t42 = 6222;

    t42 = (((x177/x178)==x179)|x180);

    if (t42 != -1441) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MAX;
	uint64_t x183 = 4965105558457632LLU;
	uint8_t x184 = 0U;

    t43 = (((x181/x182)==x183)|x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x187 = -1LL;
	volatile int16_t x188 = -14;
	volatile int32_t t44 = -3468;

    t44 = (((x185/x186)==x187)|x188);

    if (t44 != -14) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = 35U;
	int32_t x190 = INT32_MAX;
	int8_t x191 = INT8_MAX;
	uint32_t x192 = 28U;

    t45 = (((x189/x190)==x191)|x192);

    if (t45 != 28U) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x193 = 2U;
	volatile uint32_t x194 = 10774722U;
	uint64_t x195 = 356LLU;
	int32_t t46 = 0;

    t46 = (((x193/x194)==x195)|x196);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x197 = 3913U;
	int16_t x198 = -1;
	int16_t x199 = INT16_MIN;
	int8_t x200 = 14;
	int32_t t47 = 87980592;

    t47 = (((x197/x198)==x199)|x200);

    if (t47 != 14) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x201 = 7387U;
	uint32_t x202 = UINT32_MAX;
	volatile int16_t x203 = 8449;
	int32_t x204 = -1;
	int32_t t48 = 12;

    t48 = (((x201/x202)==x203)|x204);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x206 = 34222U;
	volatile int64_t x207 = -11LL;
	int32_t t49 = 12989628;

    t49 = (((x205/x206)==x207)|x208);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x209 = INT64_MAX;
	uint32_t x211 = 2U;
	volatile int64_t x212 = -1580786LL;
	static int64_t t50 = -154910186852608041LL;

    t50 = (((x209/x210)==x211)|x212);

    if (t50 != -1580786LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = -22;
	int8_t x215 = INT8_MAX;
	int32_t t51 = 155073;

    t51 = (((x213/x214)==x215)|x216);

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MIN;
	uint16_t x219 = 10U;
	uint16_t x220 = UINT16_MAX;
	int32_t t52 = 9;

    t52 = (((x217/x218)==x219)|x220);

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = 6;
	volatile int16_t x222 = 64;
	uint32_t x223 = UINT32_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t53 = -8400122;

    t53 = (((x221/x222)==x223)|x224);

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x225 = INT32_MIN;
	volatile int32_t x226 = INT32_MAX;
	int64_t x227 = -109427LL;
	int64_t t54 = -210761523224174LL;

    t54 = (((x225/x226)==x227)|x228);

    if (t54 != 57379185068LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x229 = INT32_MAX;
	static int16_t x231 = -1;
	uint16_t x232 = 3584U;
	volatile int32_t t55 = 395;

    t55 = (((x229/x230)==x231)|x232);

    if (t55 != 3584) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x235 = INT32_MIN;
	static volatile uint8_t x236 = UINT8_MAX;
	volatile int32_t t56 = -229;

    t56 = (((x233/x234)==x235)|x236);

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x239 = 24U;
	int8_t x240 = -1;

    t57 = (((x237/x238)==x239)|x240);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x242 = 2563;
	int64_t x243 = INT64_MIN;
	static volatile int32_t t58 = 0;

    t58 = (((x241/x242)==x243)|x244);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x245 = 4663669U;
	volatile int8_t x246 = -1;
	uint64_t x247 = 10LLU;
	uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t59 = UINT32_MAX;

    t59 = (((x245/x246)==x247)|x248);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x249 = 7579U;
	static volatile uint32_t x251 = 12U;
	static volatile uint64_t x252 = 82491223833073045LLU;
	volatile uint64_t t60 = 47032823LLU;

    t60 = (((x249/x250)==x251)|x252);

    if (t60 != 82491223833073045LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = -1;
	int32_t x254 = INT32_MIN;
	volatile int32_t x255 = -6;
	int16_t x256 = INT16_MIN;

    t61 = (((x253/x254)==x255)|x256);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = INT64_MIN;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	volatile int32_t t62 = 23946483;

    t62 = (((x261/x262)==x263)|x264);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x265 = 1449783LLU;
	volatile int32_t x266 = 279;
	static volatile int8_t x267 = -2;
	static int32_t t63 = -4873;

    t63 = (((x265/x266)==x267)|x268);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x269 = INT8_MIN;
	static int8_t x270 = INT8_MIN;
	uint32_t x271 = UINT32_MAX;
	int64_t x272 = -432124228013058182LL;
	int64_t t64 = -59612060959523688LL;

    t64 = (((x269/x270)==x271)|x272);

    if (t64 != -432124228013058182LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 99U;
	uint8_t x274 = 60U;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 184U;
	static uint32_t t65 = 1U;

    t65 = (((x273/x274)==x275)|x276);

    if (t65 != 184U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x277 = -64553764451794LL;
	uint64_t x278 = UINT64_MAX;
	volatile uint32_t x279 = 282U;
	int32_t x280 = -2927;
	volatile int32_t t66 = 105653;

    t66 = (((x277/x278)==x279)|x280);

    if (t66 != -2927) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x282 = 1354755500U;
	uint16_t x283 = 139U;
	static int16_t x284 = -1;
	int32_t t67 = -53439;

    t67 = (((x281/x282)==x283)|x284);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x285 = UINT8_MAX;
	int32_t x287 = INT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 0;

    t68 = (((x285/x286)==x287)|x288);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = 3656;
	volatile int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MIN;
	volatile int64_t t69 = INT64_MIN;

    t69 = (((x289/x290)==x291)|x292);

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x294 = -1;
	int8_t x295 = -1;
	int64_t t70 = 284474434LL;

    t70 = (((x293/x294)==x295)|x296);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x297 = INT32_MIN;
	int64_t x298 = 81LL;
	volatile uint64_t x299 = 98LLU;
	int8_t x300 = -1;

    t71 = (((x297/x298)==x299)|x300);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	static int64_t x302 = INT64_MIN;
	int64_t x303 = 467825169228LL;
	uint32_t x304 = UINT32_MAX;
	static volatile uint32_t t72 = UINT32_MAX;

    t72 = (((x301/x302)==x303)|x304);

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x305 = 0;
	int8_t x306 = INT8_MIN;
	volatile uint32_t x307 = 9U;
	int16_t x308 = -1;
	int32_t t73 = 41;

    t73 = (((x305/x306)==x307)|x308);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x310 = UINT32_MAX;
	static uint64_t x311 = 2080126501057523102LLU;
	int16_t x312 = INT16_MIN;
	int32_t t74 = 6968;

    t74 = (((x309/x310)==x311)|x312);

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x313 = 4;
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MAX;
	int32_t x316 = INT32_MIN;
	static volatile int32_t t75 = INT32_MIN;

    t75 = (((x313/x314)==x315)|x316);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x317 = 760;
	uint32_t x319 = 117846952U;
	static int32_t x320 = -1;
	static volatile int32_t t76 = 497;

    t76 = (((x317/x318)==x319)|x320);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x322 = 9U;
	static uint8_t x324 = 72U;
	int32_t t77 = 45231;

    t77 = (((x321/x322)==x323)|x324);

    if (t77 != 72) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = INT32_MIN;
	static int8_t x326 = 7;
	static uint32_t x328 = 3U;
	static uint32_t t78 = 6538U;

    t78 = (((x325/x326)==x327)|x328);

    if (t78 != 3U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = 17U;
	static int16_t x331 = 1936;
	int8_t x332 = 63;

    t79 = (((x329/x330)==x331)|x332);

    if (t79 != 63) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = -16332;
	int32_t x336 = 3;
	volatile int32_t t80 = -4675364;

    t80 = (((x333/x334)==x335)|x336);

    if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = -6;
	int32_t x338 = 1;
	int16_t x340 = 2189;
	int32_t t81 = -8032609;

    t81 = (((x337/x338)==x339)|x340);

    if (t81 != 2189) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x341 = INT8_MAX;
	uint16_t x342 = 10U;

    t82 = (((x341/x342)==x343)|x344);

    if (t82 != -5) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x345 = 408;
	volatile int64_t x346 = INT64_MIN;
	uint16_t x347 = 27765U;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t83 = UINT32_MAX;

    t83 = (((x345/x346)==x347)|x348);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x349 = 535286996738LLU;
	volatile uint32_t x350 = 11U;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t84 = 5275855;

    t84 = (((x349/x350)==x351)|x352);

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MIN;
	uint64_t x354 = 3223264637LLU;
	int16_t x355 = 1;
	static uint64_t x356 = 127300834LLU;
	uint64_t t85 = 251921635042LLU;

    t85 = (((x353/x354)==x355)|x356);

    if (t85 != 127300834LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MAX;
	int32_t x358 = -1;
	uint32_t x359 = 84057979U;
	int32_t x360 = -2271801;

    t86 = (((x357/x358)==x359)|x360);

    if (t86 != -2271801) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x361 = 19U;
	volatile int8_t x362 = INT8_MAX;
	volatile uint32_t x363 = 888U;
	volatile int32_t t87 = -155;

    t87 = (((x361/x362)==x363)|x364);

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x366 = 3;
	static int64_t x367 = -108LL;
	uint32_t t88 = 94816U;

    t88 = (((x365/x366)==x367)|x368);

    if (t88 != 9201728U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x369 = 17915967;
	int8_t x370 = -1;
	volatile int32_t x371 = 253551139;
	uint64_t x372 = 190692046825718207LLU;

    t89 = (((x369/x370)==x371)|x372);

    if (t89 != 190692046825718207LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x374 = INT16_MIN;
	int32_t x375 = -18;
	uint8_t x376 = 1U;
	int32_t t90 = 0;

    t90 = (((x373/x374)==x375)|x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x377 = 7;
	uint64_t x378 = 971463832834LLU;
	volatile uint16_t x379 = 21U;
	static int64_t x380 = INT64_MAX;
	volatile int64_t t91 = INT64_MAX;

    t91 = (((x377/x378)==x379)|x380);

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x382 = 35079000U;
	static int8_t x383 = -1;
	int8_t x384 = -1;
	int32_t t92 = -340;

    t92 = (((x381/x382)==x383)|x384);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MAX;
	int64_t x386 = 185LL;
	static int16_t x387 = -1;
	static volatile uint8_t x388 = UINT8_MAX;

    t93 = (((x385/x386)==x387)|x388);

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x389 = UINT32_MAX;
	uint8_t x390 = 1U;
	uint8_t x391 = 8U;
	int64_t x392 = INT64_MAX;
	int64_t t94 = INT64_MAX;

    t94 = (((x389/x390)==x391)|x392);

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = INT64_MIN;
	uint32_t x394 = UINT32_MAX;
	volatile uint64_t x395 = 10LLU;
	int16_t x396 = INT16_MIN;
	static int32_t t95 = 14627;

    t95 = (((x393/x394)==x395)|x396);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x397 = 150U;
	uint32_t x398 = 5U;
	uint64_t x399 = 7119779428LLU;
	uint16_t x400 = 14U;
	static volatile int32_t t96 = -27649025;

    t96 = (((x397/x398)==x399)|x400);

    if (t96 != 14) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x401 = 1;
	int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t97 = -1;

    t97 = (((x401/x402)==x403)|x404);

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = UINT64_MAX;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 1844;
	static int8_t x408 = -1;
	int32_t t98 = -1698546;

    t98 = (((x405/x406)==x407)|x408);

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = UINT32_MAX;
	int64_t x410 = INT64_MAX;
	int32_t x411 = 1;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t99 = 87748832;

    t99 = (((x409/x410)==x411)|x412);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x415 = INT32_MIN;
	int32_t x416 = 245608652;
	int32_t t100 = 7541561;

    t100 = (((x413/x414)==x415)|x416);

    if (t100 != 245608652) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = -1;
	int16_t x420 = INT16_MIN;
	int32_t t101 = -124;

    t101 = (((x417/x418)==x419)|x420);

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x421 = -1;
	uint64_t x422 = 115591LLU;
	uint64_t x423 = 597898853838599LLU;
	int8_t x424 = INT8_MIN;
	volatile int32_t t102 = -1248;

    t102 = (((x421/x422)==x423)|x424);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	static int32_t t103 = 111;

    t103 = (((x425/x426)==x427)|x428);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x429 = INT64_MIN;
	static volatile int16_t x430 = -2;
	int64_t x431 = -467522LL;
	int16_t x432 = -2636;
	int32_t t104 = -2231465;

    t104 = (((x429/x430)==x431)|x432);

    if (t104 != -2636) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x433 = 9U;
	uint64_t x434 = UINT64_MAX;
	int16_t x435 = -10045;
	uint32_t x436 = 2U;
	static volatile uint32_t t105 = 141U;

    t105 = (((x433/x434)==x435)|x436);

    if (t105 != 2U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x438 = 5648;
	uint32_t x439 = 607U;
	int32_t x440 = -191;
	int32_t t106 = -46;

    t106 = (((x437/x438)==x439)|x440);

    if (t106 != -191) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x441 = INT64_MAX;
	int16_t x442 = INT16_MIN;
	int64_t x443 = -1LL;
	volatile int32_t t107 = 823643;

    t107 = (((x441/x442)==x443)|x444);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x445 = 22U;
	uint16_t x446 = 3U;
	uint8_t x447 = 3U;
	int16_t x448 = -5288;

    t108 = (((x445/x446)==x447)|x448);

    if (t108 != -5288) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x449 = 36309336LLU;
	int64_t x450 = INT64_MIN;
	static int16_t x451 = 41;
	int64_t x452 = INT64_MIN;
	volatile int64_t t109 = INT64_MIN;

    t109 = (((x449/x450)==x451)|x452);

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x454 = INT16_MIN;
	int32_t x455 = -13485492;
	int32_t x456 = INT32_MIN;
	int32_t t110 = INT32_MIN;

    t110 = (((x453/x454)==x455)|x456);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x457 = UINT8_MAX;
	static uint16_t x458 = UINT16_MAX;
	int64_t x459 = -1LL;
	volatile int32_t t111 = 914;

    t111 = (((x457/x458)==x459)|x460);

    if (t111 != 567266) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x461 = -21868060;
	int16_t x462 = -1;
	int8_t x463 = INT8_MIN;
	uint32_t x464 = 1329725U;
	uint32_t t112 = 227758758U;

    t112 = (((x461/x462)==x463)|x464);

    if (t112 != 1329725U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = -83;
	volatile int32_t x466 = -1;
	int8_t x467 = 1;
	int16_t x468 = INT16_MIN;
	int32_t t113 = -6195117;

    t113 = (((x465/x466)==x467)|x468);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x469 = INT64_MIN;
	volatile uint64_t x470 = UINT64_MAX;
	static volatile uint8_t x471 = UINT8_MAX;
	int32_t x472 = 512060743;

    t114 = (((x469/x470)==x471)|x472);

    if (t114 != 512060743) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x474 = UINT16_MAX;
	int64_t x475 = INT64_MIN;
	int64_t t115 = INT64_MAX;

    t115 = (((x473/x474)==x475)|x476);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = 3561U;
	int64_t x478 = 60060979672181LL;
	uint64_t x479 = 536177515075362LLU;
	int8_t x480 = INT8_MIN;

    t116 = (((x477/x478)==x479)|x480);

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	int16_t x482 = INT16_MAX;
	uint16_t x484 = 0U;

    t117 = (((x481/x482)==x483)|x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x485 = UINT64_MAX;
	int8_t x486 = INT8_MIN;
	volatile uint16_t x487 = 19U;
	int64_t x488 = -3678242LL;
	volatile int64_t t118 = 1989LL;

    t118 = (((x485/x486)==x487)|x488);

    if (t118 != -3678242LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x489 = 113U;
	int32_t x490 = INT32_MIN;
	int64_t x492 = -3572336216975890874LL;
	int64_t t119 = -12103283013LL;

    t119 = (((x489/x490)==x491)|x492);

    if (t119 != -3572336216975890874LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x493 = UINT16_MAX;
	uint8_t x494 = UINT8_MAX;
	static volatile int8_t x495 = -1;
	uint64_t x496 = 3713079925LLU;
	uint64_t t120 = 2207341768994383LLU;

    t120 = (((x493/x494)==x495)|x496);

    if (t120 != 3713079925LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x498 = INT16_MAX;
	int16_t x499 = 0;
	int32_t t121 = -505498;

    t121 = (((x497/x498)==x499)|x500);

    if (t121 != 86) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = INT64_MIN;
	int16_t x502 = INT16_MIN;
	uint64_t x503 = 46673108804707062LLU;
	int32_t x504 = -1;
	volatile int32_t t122 = -153534;

    t122 = (((x501/x502)==x503)|x504);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = 56153964;
	int8_t x506 = -1;
	int32_t x507 = -2341;
	static uint32_t x508 = 235850616U;
	volatile uint32_t t123 = 17236492U;

    t123 = (((x505/x506)==x507)|x508);

    if (t123 != 235850616U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = -21;
	uint16_t x510 = 3521U;
	volatile int16_t x511 = INT16_MIN;
	uint64_t x512 = 15133682LLU;
	static uint64_t t124 = 122873LLU;

    t124 = (((x509/x510)==x511)|x512);

    if (t124 != 15133682LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x513 = INT64_MAX;
	int32_t x514 = INT32_MAX;
	int64_t x515 = INT64_MIN;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (((x513/x514)==x515)|x516);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x517 = -9;
	int64_t x518 = INT64_MIN;
	uint32_t x519 = 576U;
	volatile int32_t t126 = -3042;

    t126 = (((x517/x518)==x519)|x520);

    if (t126 != 1499) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = -31LL;
	int8_t x522 = INT8_MIN;
	int32_t x523 = -1530511;
	int64_t t127 = 1LL;

    t127 = (((x521/x522)==x523)|x524);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x525 = 2U;
	uint64_t x527 = UINT64_MAX;
	int32_t x528 = -20395767;
	static volatile int32_t t128 = 237602;

    t128 = (((x525/x526)==x527)|x528);

    if (t128 != -20395767) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x529 = -13361;
	static uint64_t x530 = 1507897842913628LLU;
	int64_t x532 = 315LL;
	volatile int64_t t129 = 6LL;

    t129 = (((x529/x530)==x531)|x532);

    if (t129 != 315LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = -1366970LL;
	uint16_t x534 = 17990U;
	volatile uint16_t x535 = 14646U;
	int32_t t130 = -5562257;

    t130 = (((x533/x534)==x535)|x536);

    if (t130 != 912) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	uint64_t x538 = 13061LLU;
	int64_t x539 = INT64_MIN;
	volatile int8_t x540 = INT8_MIN;

    t131 = (((x537/x538)==x539)|x540);

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x541 = INT8_MAX;
	static int64_t x542 = -1LL;
	int16_t x543 = -548;
	volatile int32_t t132 = 80082;

    t132 = (((x541/x542)==x543)|x544);

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x545 = INT32_MIN;
	uint8_t x546 = 49U;
	uint8_t x547 = UINT8_MAX;
	uint64_t x548 = 42215LLU;
	volatile uint64_t t133 = 14880215821LLU;

    t133 = (((x545/x546)==x547)|x548);

    if (t133 != 42215LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = -1;
	uint32_t x550 = UINT32_MAX;
	uint32_t x551 = 40053308U;
	volatile int64_t x552 = INT64_MIN;
	int64_t t134 = INT64_MIN;

    t134 = (((x549/x550)==x551)|x552);

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = -1;
	uint32_t x554 = 1578246382U;
	int32_t x555 = INT32_MIN;
	volatile int64_t t135 = INT64_MIN;

    t135 = (((x553/x554)==x555)|x556);

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = INT8_MIN;
	static volatile int32_t x558 = INT32_MIN;
	uint32_t x559 = 915992U;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t136 = 184;

    t136 = (((x557/x558)==x559)|x560);

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x565 = INT8_MIN;
	static int16_t x566 = -1;
	int8_t x567 = -1;
	int16_t x568 = INT16_MAX;
	volatile int32_t t137 = 31191;

    t137 = (((x565/x566)==x567)|x568);

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x569 = -1;
	uint32_t x570 = 1U;
	int32_t x571 = INT32_MIN;
	static int64_t x572 = 901LL;
	volatile int64_t t138 = -9230354527328LL;

    t138 = (((x569/x570)==x571)|x572);

    if (t138 != 901LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x573 = INT16_MAX;
	static int64_t x574 = -42514LL;
	volatile uint32_t x575 = UINT32_MAX;
	int16_t x576 = INT16_MIN;

    t139 = (((x573/x574)==x575)|x576);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x577 = 83U;
	int16_t x578 = INT16_MIN;
	int32_t x579 = INT32_MAX;
	int16_t x580 = 124;
	volatile int32_t t140 = 23;

    t140 = (((x577/x578)==x579)|x580);

    if (t140 != 124) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x581 = -1LL;
	uint32_t x582 = UINT32_MAX;
	volatile int32_t x583 = -1;
	int8_t x584 = 8;
	volatile int32_t t141 = -180130;

    t141 = (((x581/x582)==x583)|x584);

    if (t141 != 8) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = -1;
	int8_t x586 = INT8_MIN;
	volatile int32_t x587 = -1;
	int32_t x588 = INT32_MIN;
	static int32_t t142 = INT32_MIN;

    t142 = (((x585/x586)==x587)|x588);

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x592 = INT8_MIN;
	static int32_t t143 = 25;

    t143 = (((x589/x590)==x591)|x592);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x593 = -1;
	static int64_t x594 = 4045931241537LL;
	int16_t x595 = INT16_MIN;
	static uint8_t x596 = 1U;
	volatile int32_t t144 = -146566;

    t144 = (((x593/x594)==x595)|x596);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x597 = -1LL;
	int32_t x598 = INT32_MIN;
	volatile int64_t x599 = -1LL;
	static volatile int32_t t145 = 5;

    t145 = (((x597/x598)==x599)|x600);

    if (t145 != 65535) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x601 = 323;
	static int16_t x602 = INT16_MIN;
	volatile int16_t x603 = -1;
	int64_t x604 = INT64_MIN;
	static int64_t t146 = INT64_MIN;

    t146 = (((x601/x602)==x603)|x604);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	uint16_t x607 = UINT16_MAX;
	static uint64_t x608 = 3LLU;
	uint64_t t147 = 0LLU;

    t147 = (((x605/x606)==x607)|x608);

    if (t147 != 3LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x609 = UINT64_MAX;
	static int32_t x610 = -146;
	static uint8_t x611 = 60U;
	volatile int32_t t148 = 1859;

    t148 = (((x609/x610)==x611)|x612);

    if (t148 != -18) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = 12LLU;
	volatile uint32_t x614 = 189869U;
	int8_t x616 = INT8_MIN;
	static int32_t t149 = 13726968;

    t149 = (((x613/x614)==x615)|x616);

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x618 = 63828875642595309LLU;
	volatile int16_t x620 = INT16_MAX;
	int32_t t150 = -283138;

    t150 = (((x617/x618)==x619)|x620);

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x625 = INT64_MIN;
	uint8_t x627 = 5U;
	static int16_t x628 = INT16_MAX;
	volatile int32_t t151 = 52;

    t151 = (((x625/x626)==x627)|x628);

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x629 = INT8_MIN;
	uint8_t x630 = 15U;
	static volatile int64_t x631 = INT64_MIN;

    t152 = (((x629/x630)==x631)|x632);

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x633 = -1;
	static volatile int32_t x635 = INT32_MIN;
	static int16_t x636 = INT16_MAX;
	int32_t t153 = 5476226;

    t153 = (((x633/x634)==x635)|x636);

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x637 = 2909;
	int16_t x638 = INT16_MIN;
	volatile int8_t x639 = INT8_MIN;
	int64_t x640 = -1735144251997803LL;
	static volatile int64_t t154 = 1LL;

    t154 = (((x637/x638)==x639)|x640);

    if (t154 != -1735144251997803LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x641 = INT8_MAX;
	int64_t x642 = -204967479LL;
	static int32_t x643 = 617312;
	volatile int32_t t155 = -4;

    t155 = (((x641/x642)==x643)|x644);

    if (t155 != 28) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x645 = 56U;
	static uint16_t x646 = 524U;
	static int64_t x647 = INT64_MAX;
	int32_t x648 = INT32_MIN;

    t156 = (((x645/x646)==x647)|x648);

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x650 = INT8_MAX;
	volatile uint32_t x651 = UINT32_MAX;
	int16_t x652 = -1;
	volatile int32_t t157 = 25005741;

    t157 = (((x649/x650)==x651)|x652);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = 193906344893710LL;
	int16_t x654 = 3915;
	uint64_t x655 = 8576169078LLU;
	int32_t x656 = -499594;
	static int32_t t158 = -28072;

    t158 = (((x653/x654)==x655)|x656);

    if (t158 != -499594) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	uint16_t x658 = 1557U;
	uint64_t x659 = 713746247804LLU;
	int64_t x660 = INT64_MIN;
	static volatile int64_t t159 = INT64_MIN;

    t159 = (((x657/x658)==x659)|x660);

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = INT32_MIN;
	int16_t x662 = -2350;
	uint64_t x663 = 1008971483089388LLU;
	uint8_t x664 = UINT8_MAX;

    t160 = (((x661/x662)==x663)|x664);

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x667 = INT32_MIN;
	static uint64_t x668 = 2LLU;
	volatile uint64_t t161 = 11114500939LLU;

    t161 = (((x665/x666)==x667)|x668);

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x669 = 782;
	volatile int32_t x671 = -3292;
	uint32_t x672 = UINT32_MAX;
	uint32_t t162 = UINT32_MAX;

    t162 = (((x669/x670)==x671)|x672);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x675 = INT32_MIN;
	uint16_t x676 = 198U;
	int32_t t163 = 55515;

    t163 = (((x673/x674)==x675)|x676);

    if (t163 != 198) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MAX;
	static int32_t x679 = -1;
	static int16_t x680 = -1;
	volatile int32_t t164 = 235660548;

    t164 = (((x677/x678)==x679)|x680);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = -2;
	volatile int32_t t165 = -36407;

    t165 = (((x681/x682)==x683)|x684);

    if (t165 != -3) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x685 = 1690U;
	int8_t x686 = -27;
	int16_t x687 = -3;
	int8_t x688 = INT8_MAX;
	volatile int32_t t166 = -35454;

    t166 = (((x685/x686)==x687)|x688);

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x690 = 39LL;
	static uint8_t x692 = UINT8_MAX;
	static volatile int32_t t167 = 1;

    t167 = (((x689/x690)==x691)|x692);

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint16_t x693 = UINT16_MAX;
	int8_t x694 = INT8_MAX;
	static uint16_t x695 = 47U;
	static uint64_t x696 = 9797805005LLU;
	volatile uint64_t t168 = 66209742074810921LLU;

    t168 = (((x693/x694)==x695)|x696);

    if (t168 != 9797805005LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = INT8_MIN;
	uint64_t x698 = 27651234LLU;
	volatile int16_t x699 = 57;
	uint64_t x700 = 1388439059009LLU;

    t169 = (((x697/x698)==x699)|x700);

    if (t169 != 1388439059009LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x701 = 2U;
	int32_t x702 = 37;
	int32_t x703 = -157;
	static volatile int64_t t170 = INT64_MIN;

    t170 = (((x701/x702)==x703)|x704);

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x705 = INT16_MAX;
	int64_t x706 = -1LL;
	static int32_t x708 = -13612505;
	volatile int32_t t171 = 1637074;

    t171 = (((x705/x706)==x707)|x708);

    if (t171 != -13612505) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x709 = 2U;
	volatile int8_t x711 = INT8_MAX;
	volatile int32_t t172 = -5;

    t172 = (((x709/x710)==x711)|x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x718 = -6088459748869257LL;
	uint16_t x719 = 27U;
	uint32_t x720 = 288850479U;

    t173 = (((x717/x718)==x719)|x720);

    if (t173 != 288850479U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x721 = 343665375227LLU;
	volatile int32_t x723 = INT32_MIN;
	uint8_t x724 = 4U;
	int32_t t174 = -54;

    t174 = (((x721/x722)==x723)|x724);

    if (t174 != 4) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x725 = -72;
	int64_t x726 = 3378546162LL;
	int32_t x728 = INT32_MIN;
	volatile int32_t t175 = INT32_MIN;

    t175 = (((x725/x726)==x727)|x728);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = -1;
	int16_t x730 = -3023;
	int32_t x731 = -1;
	int32_t x732 = -1;

    t176 = (((x729/x730)==x731)|x732);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = -1LL;
	int8_t x734 = INT8_MIN;
	uint64_t x735 = UINT64_MAX;
	uint64_t x736 = 487135607209LLU;
	static volatile uint64_t t177 = 4174505329768307934LLU;

    t177 = (((x733/x734)==x735)|x736);

    if (t177 != 487135607209LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x739 = 94U;
	int64_t x740 = INT64_MAX;

    t178 = (((x737/x738)==x739)|x740);

    if (t178 != INT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x744 = 2257U;
	volatile uint32_t t179 = 10554813U;

    t179 = (((x741/x742)==x743)|x744);

    if (t179 != 2257U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x746 = 1063614749583794603LL;
	uint16_t x747 = 3U;
	int64_t x748 = INT64_MIN;
	static int64_t t180 = INT64_MIN;

    t180 = (((x745/x746)==x747)|x748);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x751 = INT32_MIN;
	int64_t x752 = INT64_MAX;
	int64_t t181 = INT64_MAX;

    t181 = (((x749/x750)==x751)|x752);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x753 = INT64_MIN;
	int8_t x755 = 0;
	volatile int8_t x756 = INT8_MIN;
	static int32_t t182 = 116614394;

    t182 = (((x753/x754)==x755)|x756);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x759 = INT16_MIN;
	int16_t x760 = INT16_MIN;
	int32_t t183 = 1;

    t183 = (((x757/x758)==x759)|x760);

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;

    t184 = (((x761/x762)==x763)|x764);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x765 = UINT64_MAX;
	static int32_t x767 = -1;
	volatile int32_t t185 = 13;

    t185 = (((x765/x766)==x767)|x768);

    if (t185 != 1447) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x769 = 22020U;
	uint8_t x771 = 19U;
	uint8_t x772 = 41U;
	volatile int32_t t186 = 446895;

    t186 = (((x769/x770)==x771)|x772);

    if (t186 != 41) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x774 = INT32_MIN;
	int64_t x776 = INT64_MAX;

    t187 = (((x773/x774)==x775)|x776);

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x777 = 10U;
	int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	volatile uint64_t x780 = UINT64_MAX;
	static uint64_t t188 = UINT64_MAX;

    t188 = (((x777/x778)==x779)|x780);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x783 = INT32_MIN;
	int8_t x784 = -1;
	int32_t t189 = 28235077;

    t189 = (((x781/x782)==x783)|x784);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x785 = INT8_MIN;
	int8_t x787 = -1;
	int32_t x788 = -1;
	volatile int32_t t190 = 719;

    t190 = (((x785/x786)==x787)|x788);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = -29006672207LL;
	int8_t x790 = INT8_MIN;
	static uint64_t x791 = 118511980LLU;
	volatile int32_t x792 = INT32_MIN;

    t191 = (((x789/x790)==x791)|x792);

    if (t191 != INT32_MIN) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x793 = 3U;
	volatile uint8_t x794 = 3U;
	static int64_t x795 = INT64_MAX;
	static int64_t x796 = 1013233625899343689LL;
	int64_t t192 = -20248LL;

    t192 = (((x793/x794)==x795)|x796);

    if (t192 != 1013233625899343689LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x798 = INT64_MAX;
	uint8_t x799 = 28U;
	uint8_t x800 = 47U;
	int32_t t193 = 5175;

    t193 = (((x797/x798)==x799)|x800);

    if (t193 != 47) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x801 = 1;
	int16_t x802 = INT16_MIN;
	volatile int16_t x803 = INT16_MAX;
	uint64_t x804 = 124852081LLU;

    t194 = (((x801/x802)==x803)|x804);

    if (t194 != 124852081LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x806 = INT8_MIN;
	static volatile int32_t x807 = INT32_MAX;
	int64_t x808 = 6780998163LL;
	int64_t t195 = 2536202553779679LL;

    t195 = (((x805/x806)==x807)|x808);

    if (t195 != 6780998163LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x810 = 6U;
	static uint64_t x812 = 28045LLU;
	uint64_t t196 = 13668819574LLU;

    t196 = (((x809/x810)==x811)|x812);

    if (t196 != 28045LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x814 = INT32_MIN;
	int64_t x815 = INT64_MAX;
	volatile int64_t x816 = INT64_MIN;
	volatile int64_t t197 = INT64_MIN;

    t197 = (((x813/x814)==x815)|x816);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = -1172582;
	static uint64_t x818 = 776731910886514LLU;
	int8_t x819 = -1;
	int32_t x820 = INT32_MIN;
	int32_t t198 = INT32_MIN;

    t198 = (((x817/x818)==x819)|x820);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MIN;
	static volatile int8_t x823 = INT8_MAX;
	volatile int32_t t199 = -625003347;

    t199 = (((x821/x822)==x823)|x824);

    if (t199 != 8546) { NG(); } else { ; }
	
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

