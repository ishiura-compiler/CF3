
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

static int8_t x1 = 0;
int32_t x6 = INT32_MAX;
volatile int64_t x7 = INT64_MAX;
uint8_t x8 = 105U;
static int64_t x16 = -1LL;
uint16_t x18 = 0U;
int64_t x20 = -1LL;
static int64_t x26 = -24LL;
int8_t x29 = 5;
static volatile int64_t x31 = INT64_MAX;
uint64_t x33 = 556359899361190054LLU;
int32_t t8 = -512;
int32_t x43 = INT32_MIN;
uint8_t x46 = UINT8_MAX;
static volatile int32_t t11 = 7;
static uint8_t x49 = UINT8_MAX;
uint8_t x50 = UINT8_MAX;
volatile int32_t t13 = 67;
int64_t x57 = INT64_MIN;
int32_t x60 = 151939;
uint16_t x66 = UINT16_MAX;
static volatile int32_t x73 = INT32_MAX;
int16_t x74 = INT16_MIN;
static int8_t x76 = INT8_MAX;
int16_t x77 = INT16_MIN;
volatile uint64_t x80 = UINT64_MAX;
static volatile int32_t t20 = 786332;
uint64_t x87 = 13LLU;
volatile int32_t t21 = -118874028;
int32_t t23 = -3713337;
int32_t t24 = -1559741;
volatile int32_t t25 = -238876;
uint32_t x108 = 15846684U;
int32_t t26 = 483;
static int16_t x111 = INT16_MIN;
volatile uint16_t x117 = 61U;
static int8_t x124 = 1;
int32_t t30 = -2696;
uint32_t x125 = 362416630U;
int8_t x126 = 1;
static volatile uint64_t x135 = 284LLU;
int64_t x139 = 69684635380119LL;
uint32_t x142 = 1974U;
int32_t x143 = INT32_MAX;
static int16_t x146 = -1;
volatile int16_t x159 = INT16_MIN;
uint64_t x164 = UINT64_MAX;
uint64_t x169 = 16145095LLU;
static volatile uint16_t x173 = 68U;
int64_t x180 = INT64_MIN;
uint8_t x181 = 81U;
static volatile int32_t x185 = -120;
uint8_t x190 = 0U;
int16_t x193 = INT16_MIN;
volatile int16_t x198 = INT16_MIN;
uint32_t x199 = 889407666U;
int64_t x200 = -1LL;
int64_t x203 = -2069997459208337097LL;
static int32_t x204 = INT32_MAX;
int32_t x210 = INT32_MAX;
static uint64_t x216 = 467149518282795LLU;
volatile int64_t x218 = -1LL;
uint32_t x224 = UINT32_MAX;
int32_t t54 = 130;
uint64_t x225 = 23966LLU;
int8_t x226 = -1;
int64_t x227 = INT64_MIN;
volatile uint32_t x228 = UINT32_MAX;
volatile int32_t t55 = 214941;
int32_t t56 = -299012;
uint32_t x234 = 569U;
int64_t x242 = INT64_MIN;
int16_t x244 = INT16_MIN;
int64_t x246 = INT64_MIN;
int32_t x249 = 122430;
static uint16_t x251 = UINT16_MAX;
volatile uint8_t x252 = 5U;
uint32_t x255 = 4476465U;
uint64_t x256 = UINT64_MAX;
int8_t x258 = -1;
int8_t x268 = -1;
volatile int32_t t65 = -964751;
int64_t x273 = INT64_MAX;
static volatile uint32_t x276 = 1734569U;
int16_t x277 = INT16_MIN;
uint64_t x278 = 96227924620LLU;
int32_t x288 = 33609863;
static volatile int32_t t71 = 287;
static int64_t x293 = INT64_MIN;
uint16_t x296 = 3U;
volatile int32_t t72 = -188576038;
int32_t x300 = -1;
uint8_t x302 = 1U;
uint64_t x306 = 201LLU;
uint8_t x311 = 29U;
static uint64_t x321 = UINT64_MAX;
int16_t x324 = 6;
uint32_t x325 = 10614931U;
uint32_t x326 = UINT32_MAX;
int32_t t80 = -77643;
static uint64_t x330 = 883697LLU;
uint64_t x332 = 2680756779934LLU;
int64_t x333 = INT64_MIN;
int8_t x336 = INT8_MIN;
static int16_t x337 = -201;
int8_t x344 = -1;
int8_t x346 = -1;
uint64_t x348 = 4098280LLU;
static uint64_t x357 = 4416401453413LLU;
volatile int32_t t88 = 0;
int64_t x369 = INT64_MAX;
uint32_t x370 = 449951U;
volatile uint8_t x373 = 22U;
int16_t x377 = INT16_MIN;
int64_t x378 = -59814LL;
volatile uint64_t x385 = 5LLU;
int32_t t95 = 1936;
static uint16_t x397 = 1U;
int16_t x404 = INT16_MIN;
uint8_t x410 = 15U;
static volatile int8_t x412 = INT8_MIN;
int16_t x417 = -1;
int32_t x419 = INT32_MIN;
int16_t x422 = INT16_MIN;
uint32_t x430 = 3449U;
static int32_t x431 = INT32_MIN;
int16_t x435 = INT16_MIN;
int8_t x437 = -1;
uint32_t x438 = 12758U;
volatile int64_t x442 = -2050143954319451414LL;
uint64_t x443 = UINT64_MAX;
static int64_t x444 = INT64_MAX;
uint32_t x445 = 15209U;
volatile int64_t x446 = INT64_MIN;
int32_t t109 = -340;
int16_t x452 = INT16_MIN;
volatile int16_t x456 = -356;
uint8_t x459 = 11U;
int32_t t112 = -79099;
volatile int32_t x462 = INT32_MAX;
int64_t x465 = INT64_MAX;
int8_t x468 = -1;
uint8_t x469 = UINT8_MAX;
int64_t x472 = INT64_MIN;
volatile int32_t t115 = 157001;
uint16_t x474 = 11U;
int64_t x475 = -1LL;
volatile int32_t t117 = -7;
uint32_t x481 = UINT32_MAX;
volatile uint16_t x492 = 14825U;
static int32_t t121 = -13;
static uint16_t x500 = 2U;
uint16_t x506 = 3U;
uint64_t x509 = UINT64_MAX;
volatile int16_t x510 = -1;
volatile int32_t t125 = -862836692;
int32_t x515 = INT32_MIN;
static int8_t x516 = 1;
int32_t x517 = -1;
int32_t x519 = INT32_MIN;
static int32_t x521 = INT32_MIN;
volatile uint32_t x524 = 873U;
static volatile int32_t t128 = -12057;
int8_t x531 = INT8_MIN;
uint8_t x535 = 0U;
int32_t x536 = INT32_MIN;
int64_t x540 = -2883520783516097LL;
uint32_t x550 = 1492U;
int32_t t135 = -1;
uint32_t x555 = UINT32_MAX;
int32_t t137 = 188019;
volatile uint8_t x563 = UINT8_MAX;
int32_t t138 = 1936;
static uint64_t x568 = UINT64_MAX;
int32_t t141 = -3204417;
volatile int32_t t142 = -14199220;
volatile uint8_t x586 = UINT8_MAX;
uint64_t x590 = UINT64_MAX;
int8_t x593 = 3;
int32_t x595 = INT32_MIN;
int32_t t146 = 93;
static uint8_t x603 = UINT8_MAX;
uint32_t x604 = 469808239U;
int16_t x609 = -1915;
volatile int8_t x610 = 2;
int32_t x613 = 0;
volatile int32_t t150 = 1026241245;
uint16_t x620 = 4086U;
volatile uint32_t x621 = 9297U;
uint32_t x628 = 109909613U;
uint64_t x632 = 4127682767525LLU;
int32_t x636 = 3740848;
uint8_t x639 = 8U;
int16_t x641 = INT16_MIN;
int8_t x644 = INT8_MAX;
volatile uint16_t x651 = 14U;
static uint64_t x654 = 19747039871575642LLU;
int8_t x656 = INT8_MIN;
int32_t x658 = INT32_MAX;
uint64_t x661 = 171218LLU;
uint8_t x667 = 30U;
volatile int32_t t163 = 2;
int64_t x671 = INT64_MIN;
uint32_t x675 = 235U;
int32_t x676 = -1;
int32_t t165 = 4;
int8_t x677 = INT8_MIN;
static uint16_t x680 = UINT16_MAX;
static int8_t x690 = INT8_MIN;
static volatile int32_t t169 = 6;
int16_t x694 = INT16_MAX;
int32_t x695 = 633;
volatile uint16_t x698 = 177U;
static volatile int16_t x705 = -1;
uint64_t x709 = UINT64_MAX;
int8_t x714 = INT8_MIN;
volatile int32_t t175 = -839787;
int64_t x719 = -18LL;
static int32_t x720 = -54;
uint8_t x721 = 0U;
int32_t x722 = -1;
static int8_t x728 = INT8_MAX;
volatile int16_t x730 = -1;
int32_t x738 = INT32_MAX;
static int8_t x744 = INT8_MAX;
volatile int32_t t183 = 3347;
uint8_t x749 = UINT8_MAX;
int32_t x753 = INT32_MIN;
int64_t x759 = 15LL;
static uint64_t x775 = 457327LLU;
volatile int32_t t193 = -1;
volatile int32_t t195 = -71277;
int32_t x797 = 24;
uint8_t x809 = 0U;
int32_t x811 = -1;
int8_t x812 = INT8_MIN;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	int64_t x3 = 33481008LL;
	int32_t x4 = -1;
	static volatile int32_t t0 = 23814040;

    t0 = (x1>(x2/(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int32_t t1 = 26982066;

    t1 = (x5>(x6/(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	uint64_t x10 = 182491527041LLU;
	int32_t x11 = INT32_MAX;
	volatile uint8_t x12 = UINT8_MAX;
	static volatile int32_t t2 = -134270902;

    t2 = (x9>(x10/(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	static volatile int8_t x14 = -16;
	static int8_t x15 = -1;
	volatile int32_t t3 = 238281525;

    t3 = (x13>(x14/(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 120U;
	uint64_t x19 = 8705791267788LLU;
	int32_t t4 = 621897127;

    t4 = (x17>(x18/(x19|x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MAX;
	int16_t x22 = -14059;
	uint8_t x23 = 20U;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 0;

    t5 = (x21>(x22/(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 932LLU;
	volatile int8_t x27 = INT8_MIN;
	int64_t x28 = -3012LL;
	int32_t t6 = -5764467;

    t6 = (x25>(x26/(x27|x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = INT32_MIN;
	int32_t x32 = -22128093;
	volatile int32_t t7 = 4014444;

    t7 = (x29>(x30/(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x34 = 773;
	uint64_t x35 = 157381355LLU;
	volatile int8_t x36 = INT8_MIN;

    t8 = (x33>(x34/(x35|x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	static uint8_t x38 = 1U;
	int8_t x39 = -42;
	int32_t x40 = 159165;
	static volatile int32_t t9 = 621058378;

    t9 = (x37>(x38/(x39|x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	static uint32_t x42 = 994974U;
	int32_t x44 = -5974598;
	int32_t t10 = -1;

    t10 = (x41>(x42/(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int32_t x47 = INT32_MAX;
	static volatile int64_t x48 = 29068910149498133LL;

    t11 = (x45>(x46/(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x51 = -165;
	uint16_t x52 = 34U;
	static int32_t t12 = 5253;

    t12 = (x49>(x50/(x51|x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 15403U;
	int16_t x54 = 2;
	int32_t x55 = INT32_MIN;
	static volatile uint8_t x56 = 57U;

    t13 = (x53>(x54/(x55|x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MAX;
	int32_t t14 = 118061224;

    t14 = (x57>(x58/(x59|x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint32_t x62 = 10140U;
	int32_t x63 = INT32_MIN;
	int8_t x64 = -1;
	int32_t t15 = -11197;

    t15 = (x61>(x62/(x63|x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 35U;
	uint16_t x67 = 138U;
	int32_t x68 = 20;
	volatile int32_t t16 = -11559;

    t16 = (x65>(x66/(x67|x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 324579174367861923LLU;
	uint32_t x70 = 9762U;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -53250018;

    t17 = (x69>(x70/(x71|x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x75 = 476896276721LLU;
	static int32_t t18 = 14377109;

    t18 = (x73>(x74/(x75|x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x78 = -8396LL;
	uint16_t x79 = UINT16_MAX;
	static int32_t t19 = 1;

    t19 = (x77>(x78/(x79|x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = 1626818805U;
	int8_t x82 = INT8_MAX;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = -2700977;

    t20 = (x81>(x82/(x83|x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	static int16_t x86 = -39;
	int8_t x88 = INT8_MIN;

    t21 = (x85>(x86/(x87|x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -348273061225360LL;
	uint64_t x90 = 315322444583LLU;
	volatile int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MAX;
	static int32_t t22 = -39;

    t22 = (x89>(x90/(x91|x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	int8_t x94 = INT8_MIN;
	int8_t x95 = 1;
	volatile uint64_t x96 = 137158387588895228LLU;

    t23 = (x93>(x94/(x95|x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 0;
	uint64_t x98 = 146231LLU;
	int16_t x99 = 2693;
	int32_t x100 = INT32_MIN;

    t24 = (x97>(x98/(x99|x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = 1;
	int16_t x103 = 1;
	volatile int32_t x104 = INT32_MIN;

    t25 = (x101>(x102/(x103|x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile uint64_t x106 = UINT64_MAX;
	int64_t x107 = -1LL;

    t26 = (x105>(x106/(x107|x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	int8_t x110 = 12;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -1;

    t27 = (x109>(x110/(x111|x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	int32_t x114 = INT32_MIN;
	uint32_t x115 = 335484U;
	int64_t x116 = 2007669650266504LL;
	static volatile int32_t t28 = -75740963;

    t28 = (x113>(x114/(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = 417;
	volatile int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;
	static volatile int32_t t29 = 113337;

    t29 = (x117>(x118/(x119|x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x121 = -30;
	uint8_t x122 = 16U;
	int8_t x123 = INT8_MIN;

    t30 = (x121>(x122/(x123|x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x127 = 4266608304910975LL;
	volatile int8_t x128 = -1;
	int32_t t31 = 106203070;

    t31 = (x125>(x126/(x127|x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = 484498496;

    t32 = (x129>(x130/(x131|x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int32_t x136 = 264212732;
	int32_t t33 = 116;

    t33 = (x133>(x134/(x135|x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = UINT32_MAX;
	int64_t x138 = -1LL;
	int32_t x140 = 1;
	int32_t t34 = 163604685;

    t34 = (x137>(x138/(x139|x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x141 = 13U;
	int64_t x144 = 8576718219693LL;
	int32_t t35 = -6562;

    t35 = (x141>(x142/(x143|x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	static volatile uint16_t x147 = 110U;
	static int32_t x148 = -1;
	int32_t t36 = 6;

    t36 = (x145>(x146/(x147|x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = 39298904LLU;
	int16_t x150 = -1;
	static uint16_t x151 = 7U;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 2938;

    t37 = (x149>(x150/(x151|x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 96;
	uint8_t x154 = 30U;
	uint16_t x155 = 1441U;
	int64_t x156 = 662445567464LL;
	static volatile int32_t t38 = 14609;

    t38 = (x153>(x154/(x155|x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 9073932865892872071LLU;
	int64_t x158 = INT64_MAX;
	volatile int64_t x160 = INT64_MIN;
	static volatile int32_t t39 = -35;

    t39 = (x157>(x158/(x159|x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x161 = 3U;
	int64_t x162 = -1LL;
	static uint16_t x163 = UINT16_MAX;
	static int32_t t40 = -6;

    t40 = (x161>(x162/(x163|x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x170 = 63511U;
	volatile int8_t x171 = INT8_MIN;
	static int64_t x172 = INT64_MIN;
	static volatile int32_t t41 = -5551;

    t41 = (x169>(x170/(x171|x172)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x174 = 894U;
	int16_t x175 = -1;
	uint32_t x176 = 542392543U;
	static int32_t t42 = -2343732;

    t42 = (x173>(x174/(x175|x176)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -1;
	int32_t x178 = -1;
	static volatile int16_t x179 = INT16_MAX;
	int32_t t43 = 4066;

    t43 = (x177>(x178/(x179|x180)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t44 = -51637;

    t44 = (x181>(x182/(x183|x184)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x186 = INT16_MAX;
	uint64_t x187 = 7779456135462968LLU;
	int8_t x188 = INT8_MIN;
	volatile int32_t t45 = 23460043;

    t45 = (x185>(x186/(x187|x188)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -1;
	static int64_t x191 = INT64_MIN;
	static uint8_t x192 = UINT8_MAX;
	int32_t t46 = 3;

    t46 = (x189>(x190/(x191|x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x194 = -1LL;
	static volatile int64_t x195 = 62086672LL;
	int64_t x196 = INT64_MIN;
	int32_t t47 = -71785176;

    t47 = (x193>(x194/(x195|x196)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x197 = 103U;
	int32_t t48 = -48844;

    t48 = (x197>(x198/(x199|x200)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x201 = INT8_MAX;
	int16_t x202 = INT16_MIN;
	volatile int32_t t49 = -4560158;

    t49 = (x201>(x202/(x203|x204)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 53U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	int64_t x208 = INT64_MAX;
	static volatile int32_t t50 = 22983345;

    t50 = (x205>(x206/(x207|x208)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -779;
	uint64_t x211 = 3222691068834013LLU;
	volatile uint16_t x212 = 0U;
	volatile int32_t t51 = 2;

    t51 = (x209>(x210/(x211|x212)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MIN;
	int32_t x214 = 85260764;
	int16_t x215 = -1;
	volatile int32_t t52 = -2652;

    t52 = (x213>(x214/(x215|x216)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = 0U;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MAX;
	volatile int32_t t53 = -476258;

    t53 = (x217>(x218/(x219|x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;

    t54 = (x221>(x222/(x223|x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    

    t55 = (x225>(x226/(x227|x228)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x229 = INT8_MIN;
	static int16_t x230 = INT16_MAX;
	volatile int16_t x231 = 6;
	volatile int32_t x232 = -1;

    t56 = (x229>(x230/(x231|x232)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x233 = -1;
	static int32_t x235 = 7476948;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t57 = -879357;

    t57 = (x233>(x234/(x235|x236)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = 24253LL;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MAX;
	int16_t x240 = 7920;
	volatile int32_t t58 = -498065;

    t58 = (x237>(x238/(x239|x240)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MIN;
	volatile int64_t x243 = -77651736419848472LL;
	int32_t t59 = -6148028;

    t59 = (x241>(x242/(x243|x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	volatile int8_t x247 = INT8_MIN;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t60 = 58;

    t60 = (x245>(x246/(x247|x248)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x250 = 24962459;
	volatile int32_t t61 = 73;

    t61 = (x249>(x250/(x251|x252)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x253 = INT8_MIN;
	volatile int16_t x254 = INT16_MIN;
	int32_t t62 = -1;

    t62 = (x253>(x254/(x255|x256)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x257 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	int32_t x260 = -1;
	static int32_t t63 = -11;

    t63 = (x257>(x258/(x259|x260)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x261 = 0U;
	volatile int16_t x262 = 63;
	uint16_t x263 = 195U;
	int16_t x264 = -1;
	int32_t t64 = -1040544;

    t64 = (x261>(x262/(x263|x264)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = INT32_MAX;
	int32_t x266 = INT32_MIN;
	int64_t x267 = INT64_MAX;

    t65 = (x265>(x266/(x267|x268)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	uint32_t x270 = 505535374U;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 0U;
	static int32_t t66 = -28929414;

    t66 = (x269>(x270/(x271|x272)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x274 = UINT16_MAX;
	static volatile int64_t x275 = INT64_MAX;
	int32_t t67 = 2221;

    t67 = (x273>(x274/(x275|x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x279 = -1;
	int16_t x280 = -75;
	int32_t t68 = 636;

    t68 = (x277>(x278/(x279|x280)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	static uint64_t x283 = 4036LLU;
	int8_t x284 = INT8_MAX;
	int32_t t69 = 112417;

    t69 = (x281>(x282/(x283|x284)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	volatile uint64_t x286 = 7566951LLU;
	int16_t x287 = 3822;
	int32_t t70 = 13839;

    t70 = (x285>(x286/(x287|x288)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = INT16_MAX;
	volatile int32_t x290 = 3821;
	static uint64_t x291 = 14595001602LLU;
	int32_t x292 = -1;

    t71 = (x289>(x290/(x291|x292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;

    t72 = (x293>(x294/(x295|x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x297 = 1;
	int64_t x298 = 10900391762LL;
	static int8_t x299 = -1;
	int32_t t73 = 8218036;

    t73 = (x297>(x298/(x299|x300)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int64_t x303 = 17039310162693LL;
	uint16_t x304 = 2U;
	volatile int32_t t74 = 962529;

    t74 = (x301>(x302/(x303|x304)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x305 = UINT64_MAX;
	int8_t x307 = -1;
	int32_t x308 = -1;
	volatile int32_t t75 = 10;

    t75 = (x305>(x306/(x307|x308)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	uint16_t x312 = 6U;
	static volatile int32_t t76 = -8664;

    t76 = (x309>(x310/(x311|x312)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = 461U;
	volatile int8_t x314 = INT8_MIN;
	volatile int16_t x315 = INT16_MIN;
	int64_t x316 = -1221279036573270LL;
	volatile int32_t t77 = -508050616;

    t77 = (x313>(x314/(x315|x316)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x317 = 78U;
	int8_t x318 = -6;
	static int8_t x319 = -42;
	volatile uint64_t x320 = 2314662710878539567LLU;
	volatile int32_t t78 = -986282;

    t78 = (x317>(x318/(x319|x320)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x322 = UINT16_MAX;
	volatile uint8_t x323 = UINT8_MAX;
	int32_t t79 = 22;

    t79 = (x321>(x322/(x323|x324)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x327 = INT32_MAX;
	volatile int16_t x328 = 3840;

    t80 = (x325>(x326/(x327|x328)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = INT8_MAX;
	uint16_t x331 = 2361U;
	volatile int32_t t81 = -469003;

    t81 = (x329>(x330/(x331|x332)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x334 = INT8_MAX;
	uint8_t x335 = 116U;
	int32_t t82 = -34;

    t82 = (x333>(x334/(x335|x336)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x338 = 2U;
	static int32_t x339 = INT32_MAX;
	int16_t x340 = -1725;
	volatile int32_t t83 = -39;

    t83 = (x337>(x338/(x339|x340)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x341 = 11429U;
	int8_t x342 = -1;
	int16_t x343 = INT16_MIN;
	volatile int32_t t84 = -4;

    t84 = (x341>(x342/(x343|x344)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x345 = INT16_MIN;
	static int64_t x347 = -30223069148036319LL;
	int32_t t85 = 109226658;

    t85 = (x345>(x346/(x347|x348)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t86 = -272636;

    t86 = (x349>(x350/(x351|x352)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = 41511LLU;
	int64_t x354 = 1335078550437216362LL;
	volatile int16_t x355 = -5342;
	uint64_t x356 = 62771LLU;
	volatile int32_t t87 = 28772;

    t87 = (x353>(x354/(x355|x356)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x358 = INT16_MIN;
	static uint16_t x359 = 1U;
	int16_t x360 = INT16_MIN;

    t88 = (x357>(x358/(x359|x360)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	static uint16_t x363 = UINT16_MAX;
	int8_t x364 = -1;
	volatile int32_t t89 = 1;

    t89 = (x361>(x362/(x363|x364)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = INT64_MIN;
	static int32_t x366 = -68514353;
	uint8_t x367 = 15U;
	int8_t x368 = -32;
	static volatile int32_t t90 = -55549467;

    t90 = (x365>(x366/(x367|x368)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x371 = 3708;
	int8_t x372 = -2;
	static volatile int32_t t91 = -49821;

    t91 = (x369>(x370/(x371|x372)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x374 = -1;
	int64_t x375 = -1LL;
	int16_t x376 = -1;
	int32_t t92 = 316035540;

    t92 = (x373>(x374/(x375|x376)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x379 = INT64_MAX;
	uint32_t x380 = 142296U;
	volatile int32_t t93 = 254953963;

    t93 = (x377>(x378/(x379|x380)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x386 = -6604;
	int16_t x387 = INT16_MIN;
	int64_t x388 = -71469143437LL;
	int32_t t94 = -76528582;

    t94 = (x385>(x386/(x387|x388)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -1514429865410983535LL;
	uint32_t x392 = 15157U;

    t95 = (x389>(x390/(x391|x392)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t96 = -526281;

    t96 = (x393>(x394/(x395|x396)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t97 = -1165;

    t97 = (x397>(x398/(x399|x400)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 150U;
	int8_t x402 = -1;
	int8_t x403 = 39;
	volatile int32_t t98 = 2809472;

    t98 = (x401>(x402/(x403|x404)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 1043878813859767LLU;
	uint8_t x407 = 0U;
	int8_t x408 = 6;
	volatile int32_t t99 = -30383;

    t99 = (x405>(x406/(x407|x408)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = INT16_MAX;
	static int8_t x411 = -1;
	int32_t t100 = -2;

    t100 = (x409>(x410/(x411|x412)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x413 = 540U;
	uint16_t x414 = 27547U;
	int16_t x415 = INT16_MIN;
	uint8_t x416 = UINT8_MAX;
	static int32_t t101 = -5204159;

    t101 = (x413>(x414/(x415|x416)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x418 = 149U;
	int64_t x420 = -1LL;
	int32_t t102 = -46;

    t102 = (x417>(x418/(x419|x420)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x421 = 43U;
	int8_t x423 = INT8_MAX;
	int16_t x424 = INT16_MIN;
	static int32_t t103 = -173432;

    t103 = (x421>(x422/(x423|x424)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = INT8_MAX;
	static uint32_t x426 = UINT32_MAX;
	volatile int8_t x427 = -1;
	int16_t x428 = -10;
	static int32_t t104 = -5;

    t104 = (x425>(x426/(x427|x428)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x429 = 867412126041945LLU;
	static int32_t x432 = INT32_MIN;
	static volatile int32_t t105 = -2492446;

    t105 = (x429>(x430/(x431|x432)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x433 = 419908825376073LLU;
	uint32_t x434 = UINT32_MAX;
	int64_t x436 = 1623851592615569004LL;
	int32_t t106 = 18;

    t106 = (x433>(x434/(x435|x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x439 = 1808168312954077LLU;
	int32_t x440 = 294;
	volatile int32_t t107 = -10825973;

    t107 = (x437>(x438/(x439|x440)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x441 = 236011158906570864LLU;
	static int32_t t108 = -1659347;

    t108 = (x441>(x442/(x443|x444)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x447 = 127714;
	int32_t x448 = INT32_MIN;

    t109 = (x445>(x446/(x447|x448)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x449 = 121LLU;
	static int32_t x450 = -3127727;
	int16_t x451 = -6;
	volatile int32_t t110 = 1895927;

    t110 = (x449>(x450/(x451|x452)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int16_t x453 = INT16_MIN;
	uint64_t x454 = UINT64_MAX;
	static int8_t x455 = -2;
	int32_t t111 = -7;

    t111 = (x453>(x454/(x455|x456)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = -1;
	int64_t x458 = 21589414425179LL;
	int8_t x460 = -1;

    t112 = (x457>(x458/(x459|x460)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x461 = INT64_MIN;
	int16_t x463 = -1;
	static volatile int8_t x464 = 1;
	int32_t t113 = 3238;

    t113 = (x461>(x462/(x463|x464)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x466 = UINT16_MAX;
	uint64_t x467 = UINT64_MAX;
	volatile int32_t t114 = -25384;

    t114 = (x465>(x466/(x467|x468)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x470 = 4446LLU;
	static uint32_t x471 = 81U;

    t115 = (x469>(x470/(x471|x472)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x473 = UINT32_MAX;
	volatile uint64_t x476 = 598116798LLU;
	volatile int32_t t116 = 18545;

    t116 = (x473>(x474/(x475|x476)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x477 = -1;
	uint16_t x478 = 5099U;
	static uint32_t x479 = 199U;
	int8_t x480 = INT8_MAX;

    t117 = (x477>(x478/(x479|x480)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x482 = UINT32_MAX;
	int16_t x483 = -4;
	uint8_t x484 = UINT8_MAX;
	int32_t t118 = -139;

    t118 = (x481>(x482/(x483|x484)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint32_t x485 = 1377465U;
	int32_t x486 = -1;
	int32_t x487 = 827;
	uint64_t x488 = 411829686370LLU;
	static int32_t t119 = -13277;

    t119 = (x485>(x486/(x487|x488)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x489 = -1LL;
	volatile int32_t x490 = 1642;
	int32_t x491 = INT32_MIN;
	volatile int32_t t120 = -981649864;

    t120 = (x489>(x490/(x491|x492)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = UINT8_MAX;
	int16_t x494 = -1;
	int16_t x495 = 874;
	uint8_t x496 = 90U;

    t121 = (x493>(x494/(x495|x496)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x497 = 80U;
	static int8_t x498 = INT8_MAX;
	int32_t x499 = INT32_MIN;
	static int32_t t122 = 100;

    t122 = (x497>(x498/(x499|x500)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = -1LL;
	static uint16_t x502 = 0U;
	volatile int64_t x503 = -144736373379668908LL;
	volatile int32_t x504 = -1;
	int32_t t123 = 7056541;

    t123 = (x501>(x502/(x503|x504)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x505 = -1;
	volatile int16_t x507 = INT16_MAX;
	static int64_t x508 = -133511214651LL;
	volatile int32_t t124 = -196445;

    t124 = (x505>(x506/(x507|x508)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x511 = INT16_MIN;
	int32_t x512 = -46563654;

    t125 = (x509>(x510/(x511|x512)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x513 = INT64_MAX;
	uint8_t x514 = 0U;
	int32_t t126 = -9790;

    t126 = (x513>(x514/(x515|x516)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x518 = -15;
	int8_t x520 = INT8_MAX;
	volatile int32_t t127 = 103082327;

    t127 = (x517>(x518/(x519|x520)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x522 = -1;
	int64_t x523 = -1808178826LL;

    t128 = (x521>(x522/(x523|x524)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = 3682LL;
	volatile int64_t x526 = -1LL;
	int8_t x527 = INT8_MIN;
	int8_t x528 = INT8_MIN;
	int32_t t129 = -169481;

    t129 = (x525>(x526/(x527|x528)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x529 = -1655223;
	int64_t x530 = 1LL;
	volatile uint32_t x532 = 1U;
	int32_t t130 = 0;

    t130 = (x529>(x530/(x531|x532)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x533 = 1;
	volatile int32_t x534 = -1;
	volatile int32_t t131 = 13930;

    t131 = (x533>(x534/(x535|x536)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x537 = 1U;
	int32_t x538 = 1;
	uint32_t x539 = 126965004U;
	volatile int32_t t132 = 1;

    t132 = (x537>(x538/(x539|x540)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x541 = INT64_MIN;
	int16_t x542 = INT16_MIN;
	uint8_t x543 = UINT8_MAX;
	static int16_t x544 = 551;
	static volatile int32_t t133 = -13902;

    t133 = (x541>(x542/(x543|x544)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x545 = 2;
	volatile int64_t x546 = -1LL;
	static uint16_t x547 = 0U;
	int64_t x548 = INT64_MIN;
	volatile int32_t t134 = 17119;

    t134 = (x545>(x546/(x547|x548)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x549 = INT32_MIN;
	volatile int32_t x551 = -1;
	int64_t x552 = -2127128782956453874LL;

    t135 = (x549>(x550/(x551|x552)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x553 = 4U;
	int64_t x554 = -11112LL;
	static volatile uint8_t x556 = 0U;
	static int32_t t136 = 2277849;

    t136 = (x553>(x554/(x555|x556)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x557 = INT64_MAX;
	int16_t x558 = INT16_MAX;
	volatile uint16_t x559 = 713U;
	static uint64_t x560 = 5141787914674552397LLU;

    t137 = (x557>(x558/(x559|x560)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x561 = INT8_MIN;
	static uint16_t x562 = 6U;
	static uint8_t x564 = UINT8_MAX;

    t138 = (x561>(x562/(x563|x564)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x565 = INT16_MIN;
	int64_t x566 = 2420709058838863LL;
	int8_t x567 = -1;
	volatile int32_t t139 = -69132012;

    t139 = (x565>(x566/(x567|x568)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x569 = 56U;
	volatile int64_t x570 = -1LL;
	uint32_t x571 = 2U;
	int8_t x572 = INT8_MIN;
	volatile int32_t t140 = 304036;

    t140 = (x569>(x570/(x571|x572)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x577 = 1;
	uint8_t x578 = 14U;
	int32_t x579 = INT32_MAX;
	static int32_t x580 = INT32_MIN;

    t141 = (x577>(x578/(x579|x580)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x581 = 38;
	int8_t x582 = INT8_MIN;
	int32_t x583 = -6265;
	int16_t x584 = INT16_MIN;

    t142 = (x581>(x582/(x583|x584)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x585 = 4773001LLU;
	static int16_t x587 = 1;
	int32_t x588 = 103697;
	int32_t t143 = 2034;

    t143 = (x585>(x586/(x587|x588)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x589 = 0U;
	uint16_t x591 = 2U;
	uint32_t x592 = 406U;
	volatile int32_t t144 = 1248980;

    t144 = (x589>(x590/(x591|x592)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x594 = UINT8_MAX;
	int64_t x596 = -1889LL;
	static int32_t t145 = 12898281;

    t145 = (x593>(x594/(x595|x596)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x597 = -212893776378330786LL;
	uint8_t x598 = UINT8_MAX;
	volatile int16_t x599 = -1;
	static uint64_t x600 = 6259707656386LLU;

    t146 = (x597>(x598/(x599|x600)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint16_t x602 = 9U;
	volatile int32_t t147 = -528590181;

    t147 = (x601>(x602/(x603|x604)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = INT32_MAX;
	int16_t x606 = -1;
	int8_t x607 = -22;
	uint32_t x608 = 16099557U;
	volatile int32_t t148 = 3;

    t148 = (x605>(x606/(x607|x608)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x611 = INT64_MAX;
	int32_t x612 = INT32_MIN;
	volatile int32_t t149 = -1;

    t149 = (x609>(x610/(x611|x612)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x614 = INT8_MAX;
	static uint32_t x615 = UINT32_MAX;
	static volatile int8_t x616 = INT8_MIN;

    t150 = (x613>(x614/(x615|x616)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = INT32_MIN;
	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	static volatile int32_t t151 = 9169467;

    t151 = (x617>(x618/(x619|x620)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x622 = INT64_MIN;
	volatile int32_t x623 = -2771031;
	static uint16_t x624 = 28762U;
	volatile int32_t t152 = -86;

    t152 = (x621>(x622/(x623|x624)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x625 = -1;
	static int64_t x626 = -1LL;
	int8_t x627 = INT8_MIN;
	static int32_t t153 = 1269;

    t153 = (x625>(x626/(x627|x628)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	volatile int16_t x630 = INT16_MIN;
	int64_t x631 = 3634LL;
	volatile int32_t t154 = 1881;

    t154 = (x629>(x630/(x631|x632)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x633 = 33006863U;
	uint32_t x634 = UINT32_MAX;
	int16_t x635 = -1;
	volatile int32_t t155 = 884630;

    t155 = (x633>(x634/(x635|x636)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x637 = 12U;
	int32_t x638 = -4527068;
	volatile uint8_t x640 = 0U;
	volatile int32_t t156 = -8567;

    t156 = (x637>(x638/(x639|x640)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x642 = -1;
	volatile uint16_t x643 = 589U;
	volatile int32_t t157 = 34686724;

    t157 = (x641>(x642/(x643|x644)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x645 = 23620U;
	int64_t x646 = INT64_MAX;
	volatile uint16_t x647 = 46U;
	volatile int8_t x648 = -1;
	volatile int32_t t158 = -9;

    t158 = (x645>(x646/(x647|x648)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x649 = 5075U;
	uint8_t x650 = UINT8_MAX;
	int8_t x652 = INT8_MIN;
	int32_t t159 = 1;

    t159 = (x649>(x650/(x651|x652)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x653 = INT16_MIN;
	int8_t x655 = -55;
	static volatile int32_t t160 = 138;

    t160 = (x653>(x654/(x655|x656)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	static int8_t x659 = INT8_MIN;
	uint32_t x660 = UINT32_MAX;
	volatile int32_t t161 = -2795;

    t161 = (x657>(x658/(x659|x660)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x662 = INT64_MIN;
	uint16_t x663 = 118U;
	volatile uint16_t x664 = UINT16_MAX;
	int32_t t162 = -9225621;

    t162 = (x661>(x662/(x663|x664)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = -1;
	static uint32_t x666 = UINT32_MAX;
	int64_t x668 = 146371LL;

    t163 = (x665>(x666/(x667|x668)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x669 = INT64_MIN;
	volatile uint64_t x670 = 85910839LLU;
	volatile int16_t x672 = INT16_MIN;
	int32_t t164 = -387;

    t164 = (x669>(x670/(x671|x672)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x673 = -180714;
	int32_t x674 = -1;

    t165 = (x673>(x674/(x675|x676)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x678 = -409686431;
	uint16_t x679 = UINT16_MAX;
	int32_t t166 = -733738092;

    t166 = (x677>(x678/(x679|x680)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x681 = -1;
	static int32_t x682 = -50615;
	int16_t x683 = INT16_MIN;
	uint32_t x684 = 14422U;
	int32_t t167 = -90;

    t167 = (x681>(x682/(x683|x684)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x685 = INT32_MIN;
	uint64_t x686 = 1014859755689618LLU;
	uint8_t x687 = UINT8_MAX;
	static int16_t x688 = INT16_MIN;
	int32_t t168 = -595624450;

    t168 = (x685>(x686/(x687|x688)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x689 = INT64_MIN;
	static int32_t x691 = -1;
	int16_t x692 = -1;

    t169 = (x689>(x690/(x691|x692)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x693 = 1U;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t170 = 8624103;

    t170 = (x693>(x694/(x695|x696)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x697 = UINT8_MAX;
	volatile int64_t x699 = -1547215891396665168LL;
	uint16_t x700 = UINT16_MAX;
	static int32_t t171 = -512388;

    t171 = (x697>(x698/(x699|x700)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = INT64_MIN;
	uint64_t x702 = 270LLU;
	int32_t x703 = INT32_MIN;
	volatile int16_t x704 = INT16_MAX;
	volatile int32_t t172 = -1006459850;

    t172 = (x701>(x702/(x703|x704)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x706 = UINT8_MAX;
	uint32_t x707 = UINT32_MAX;
	static uint8_t x708 = 7U;
	volatile int32_t t173 = -3339;

    t173 = (x705>(x706/(x707|x708)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x710 = UINT8_MAX;
	int64_t x711 = -1LL;
	uint64_t x712 = 112LLU;
	volatile int32_t t174 = -475898;

    t174 = (x709>(x710/(x711|x712)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x713 = 8U;
	int8_t x715 = 1;
	uint8_t x716 = 2U;

    t175 = (x713>(x714/(x715|x716)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = -931528725;
	int32_t t176 = -1136;

    t176 = (x717>(x718/(x719|x720)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x723 = 3468U;
	volatile int8_t x724 = INT8_MAX;
	int32_t t177 = -404739089;

    t177 = (x721>(x722/(x723|x724)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x725 = 1U;
	static int16_t x726 = INT16_MAX;
	int8_t x727 = INT8_MIN;
	int32_t t178 = 6;

    t178 = (x725>(x726/(x727|x728)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x729 = 5U;
	volatile int64_t x731 = INT64_MIN;
	int32_t x732 = 669;
	static volatile int32_t t179 = -14;

    t179 = (x729>(x730/(x731|x732)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x733 = -1LL;
	int64_t x734 = INT64_MIN;
	volatile uint16_t x735 = UINT16_MAX;
	static uint8_t x736 = 18U;
	static int32_t t180 = 30;

    t180 = (x733>(x734/(x735|x736)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x737 = -1;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 492U;
	int32_t t181 = 43141370;

    t181 = (x737>(x738/(x739|x740)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x741 = 8040139886258485724LLU;
	int16_t x742 = INT16_MIN;
	int64_t x743 = -1LL;
	int32_t t182 = 230251;

    t182 = (x741>(x742/(x743|x744)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = INT32_MAX;
	static uint8_t x746 = 12U;
	volatile int8_t x747 = 3;
	int64_t x748 = -382LL;

    t183 = (x745>(x746/(x747|x748)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x750 = INT64_MAX;
	uint16_t x751 = 7U;
	uint16_t x752 = 560U;
	volatile int32_t t184 = -55707139;

    t184 = (x749>(x750/(x751|x752)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x754 = -1LL;
	int32_t x755 = INT32_MAX;
	uint64_t x756 = 4601206172458133727LLU;
	static volatile int32_t t185 = -15;

    t185 = (x753>(x754/(x755|x756)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x757 = UINT16_MAX;
	uint16_t x758 = UINT16_MAX;
	uint8_t x760 = 50U;
	int32_t t186 = 14340745;

    t186 = (x757>(x758/(x759|x760)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x761 = 2453384LL;
	uint32_t x762 = 120U;
	volatile int8_t x763 = -1;
	volatile int64_t x764 = 10LL;
	int32_t t187 = 16;

    t187 = (x761>(x762/(x763|x764)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x765 = 52810;
	volatile int64_t x766 = INT64_MAX;
	uint16_t x767 = 98U;
	int64_t x768 = -130674615176131782LL;
	int32_t t188 = -1;

    t188 = (x765>(x766/(x767|x768)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x769 = INT8_MIN;
	uint64_t x770 = UINT64_MAX;
	uint64_t x771 = 36LLU;
	int32_t x772 = INT32_MIN;
	volatile int32_t t189 = -7083886;

    t189 = (x769>(x770/(x771|x772)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x773 = UINT64_MAX;
	int16_t x774 = -2030;
	int8_t x776 = -1;
	int32_t t190 = -31714557;

    t190 = (x773>(x774/(x775|x776)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x777 = INT16_MAX;
	int32_t x778 = -1;
	static volatile uint64_t x779 = UINT64_MAX;
	int8_t x780 = 35;
	int32_t t191 = 10567;

    t191 = (x777>(x778/(x779|x780)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x781 = UINT16_MAX;
	int32_t x782 = INT32_MIN;
	int8_t x783 = INT8_MIN;
	int32_t x784 = 25;
	volatile int32_t t192 = -110988473;

    t192 = (x781>(x782/(x783|x784)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x785 = UINT64_MAX;
	static volatile uint32_t x786 = 15896U;
	int64_t x787 = -662645176983975LL;
	int32_t x788 = 90437476;

    t193 = (x785>(x786/(x787|x788)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x789 = 15U;
	uint8_t x790 = 44U;
	int16_t x791 = -1;
	uint64_t x792 = 391162813004LLU;
	volatile int32_t t194 = -16642263;

    t194 = (x789>(x790/(x791|x792)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = INT32_MIN;
	volatile int16_t x794 = 583;
	int16_t x795 = -1;
	uint16_t x796 = 65U;

    t195 = (x793>(x794/(x795|x796)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x798 = 50U;
	volatile int8_t x799 = INT8_MIN;
	static uint64_t x800 = UINT64_MAX;
	volatile int32_t t196 = 199447;

    t196 = (x797>(x798/(x799|x800)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x801 = 1;
	uint8_t x802 = 57U;
	uint64_t x803 = 30403471995870167LLU;
	static uint16_t x804 = UINT16_MAX;
	volatile int32_t t197 = -90987725;

    t197 = (x801>(x802/(x803|x804)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x805 = -15220493982044LL;
	volatile uint8_t x806 = UINT8_MAX;
	static int64_t x807 = INT64_MAX;
	uint64_t x808 = 35748735LLU;
	volatile int32_t t198 = 14060242;

    t198 = (x805>(x806/(x807|x808)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x810 = -1;
	int32_t t199 = -1;

    t199 = (x809>(x810/(x811|x812)));

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

