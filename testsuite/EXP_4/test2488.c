
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

uint16_t x9 = 0U;
volatile uint32_t x10 = UINT32_MAX;
int32_t x18 = -1004089431;
volatile int32_t t4 = 13449166;
int16_t x26 = -9423;
uint32_t x29 = 9U;
int32_t x32 = -156;
static uint16_t x36 = UINT16_MAX;
int32_t x40 = -1;
volatile int64_t x44 = 4012LL;
int16_t x46 = -161;
static int8_t x50 = -1;
int64_t x51 = -1LL;
volatile int32_t t14 = 2866;
volatile uint8_t x61 = 1U;
uint32_t x67 = 52714U;
static int8_t x70 = 21;
volatile int32_t t17 = -1061964;
int8_t x76 = -1;
int16_t x78 = -1;
uint8_t x80 = 6U;
uint16_t x81 = 17750U;
int32_t t20 = -831;
int8_t x87 = INT8_MIN;
int16_t x91 = INT16_MIN;
static int8_t x98 = INT8_MIN;
volatile int32_t t25 = 2;
uint8_t x109 = UINT8_MAX;
uint64_t x111 = 820897218LLU;
uint16_t x112 = 3U;
static int64_t x113 = INT64_MAX;
int32_t t28 = -243;
volatile int64_t x117 = -18551LL;
uint32_t x121 = 1857413U;
uint16_t x122 = 6883U;
int32_t t34 = 1;
int16_t x142 = -1;
int64_t x154 = -1LL;
int32_t t40 = 1033557534;
int32_t x170 = INT32_MIN;
static uint64_t x171 = 20483107245LLU;
static int32_t x172 = INT32_MIN;
int32_t x173 = INT32_MAX;
int8_t x176 = INT8_MIN;
int32_t t43 = 3088111;
int8_t x178 = INT8_MIN;
volatile int32_t t44 = -20530597;
uint8_t x191 = 65U;
volatile int32_t x197 = -1;
int32_t x207 = -25;
int32_t t51 = 15;
int64_t x209 = INT64_MAX;
int64_t x214 = -1LL;
uint32_t x216 = 12U;
volatile uint16_t x217 = 15623U;
int64_t x218 = -1LL;
volatile int8_t x227 = INT8_MAX;
uint32_t x232 = 14404350U;
static volatile uint64_t x233 = 601595681119438100LLU;
static volatile int8_t x240 = -28;
volatile uint64_t x243 = 157386888LLU;
static volatile uint64_t x251 = 6368038176LLU;
uint8_t x253 = 2U;
int64_t x255 = INT64_MIN;
uint64_t x259 = UINT64_MAX;
int32_t t64 = -778922726;
uint32_t x262 = 1491705U;
int8_t x263 = -34;
static volatile int64_t x268 = 354301641544677258LL;
uint32_t x272 = 28U;
int32_t t67 = 145;
static volatile int64_t x279 = 292626513454131LL;
static volatile int64_t x287 = -2212242594670633849LL;
static int8_t x292 = 0;
volatile int32_t t72 = -1313;
volatile int32_t x297 = INT32_MIN;
int8_t x299 = -1;
int32_t t74 = 9;
uint8_t x301 = 55U;
int64_t x310 = -487630923957LL;
volatile int32_t t77 = 910781;
volatile int32_t t78 = -123;
int64_t x331 = INT64_MAX;
int64_t x332 = -1LL;
int64_t x337 = INT64_MAX;
int64_t x340 = 0LL;
uint64_t x343 = UINT64_MAX;
static int32_t x344 = -1;
int32_t t90 = 2119;
int16_t x365 = -1;
int16_t x366 = INT16_MAX;
int32_t t91 = -1;
static int32_t x371 = -64;
int32_t x376 = INT32_MAX;
int32_t x380 = -1;
uint16_t x385 = 22686U;
int32_t x388 = -1256612;
uint8_t x392 = 1U;
uint16_t x396 = UINT16_MAX;
volatile int64_t x400 = INT64_MIN;
static volatile uint8_t x403 = 55U;
volatile int32_t t101 = 59794;
int64_t x409 = 4294214862278819075LL;
int8_t x417 = -1;
volatile int16_t x424 = INT16_MIN;
int16_t x425 = INT16_MAX;
int16_t x426 = -10463;
int64_t x437 = INT64_MAX;
uint16_t x451 = 1413U;
volatile int32_t x452 = INT32_MIN;
int32_t x454 = INT32_MAX;
uint32_t x456 = 7U;
static uint16_t x466 = UINT16_MAX;
static volatile uint16_t x471 = 2U;
uint32_t x478 = 1181402849U;
int16_t x485 = 0;
int16_t x486 = INT16_MAX;
int32_t t121 = -5720;
static int8_t x490 = INT8_MAX;
volatile int32_t t122 = 737210891;
static int16_t x505 = INT16_MAX;
int8_t x510 = -1;
volatile int32_t t128 = 3;
static int16_t x518 = -1;
volatile int32_t t129 = -1511921;
int8_t x523 = INT8_MAX;
static uint8_t x532 = 1U;
volatile int32_t t132 = -861203552;
static uint64_t x533 = 211LLU;
uint8_t x534 = UINT8_MAX;
int64_t x538 = INT64_MIN;
static volatile int32_t t134 = 66540;
static int16_t x541 = INT16_MIN;
int32_t x546 = INT32_MIN;
uint64_t x548 = UINT64_MAX;
uint8_t x556 = UINT8_MAX;
volatile uint16_t x557 = 237U;
uint8_t x558 = UINT8_MAX;
volatile int32_t t140 = 318;
int32_t x567 = INT32_MIN;
static volatile uint16_t x571 = 7914U;
static volatile int32_t t142 = 29;
int64_t x574 = INT64_MAX;
static int8_t x577 = INT8_MAX;
static uint16_t x579 = 864U;
volatile int64_t x583 = -1LL;
int8_t x584 = INT8_MIN;
int32_t t145 = -63;
int8_t x588 = INT8_MAX;
int64_t x599 = -12962LL;
int32_t t150 = 1003153567;
int8_t x608 = INT8_MAX;
int8_t x618 = 9;
static int16_t x623 = 1;
uint16_t x626 = 1585U;
int8_t x628 = -1;
static int16_t x637 = INT16_MIN;
static int32_t t159 = -1;
int8_t x644 = INT8_MIN;
int8_t x647 = -1;
int8_t x648 = -3;
volatile uint16_t x650 = 3U;
int32_t x655 = -28465;
static int64_t x660 = 10638LL;
volatile uint16_t x661 = 500U;
volatile int32_t x665 = 42782479;
int32_t x668 = 21336;
volatile int32_t t166 = 122937;
uint64_t x678 = 28LLU;
uint64_t x687 = 5976405996597971LLU;
static uint32_t x693 = 2065161833U;
uint64_t x694 = 7338909624748711LLU;
static int8_t x697 = INT8_MIN;
int32_t t174 = 224621;
int8_t x707 = INT8_MAX;
volatile uint8_t x712 = 5U;
int32_t x716 = -48;
uint16_t x719 = UINT16_MAX;
volatile int32_t t181 = -8200304;
static uint32_t x737 = UINT32_MAX;
int16_t x738 = 0;
uint8_t x747 = UINT8_MAX;
volatile int16_t x759 = INT16_MIN;
static int8_t x761 = 40;
static int32_t x763 = 15;
static volatile int8_t x766 = INT8_MIN;
volatile int16_t x771 = -7;
int8_t x773 = -1;
volatile int64_t x781 = INT64_MIN;
int8_t x785 = 25;
int32_t t196 = 583753;
int8_t x794 = -1;
static int8_t x797 = INT8_MAX;
int32_t t199 = 21;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint32_t x2 = 76369253U;
	uint32_t x3 = 41U;
	static int64_t x4 = INT64_MIN;
	static int32_t t0 = 1942;

    t0 = (x1<=(x2<=(x3|x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 40U;
	int32_t x6 = 144566;
	uint64_t x7 = 1008543169LLU;
	uint16_t x8 = 0U;
	int32_t t1 = -20265;

    t1 = (x5<=(x6<=(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x11 = UINT8_MAX;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -690;

    t2 = (x9<=(x10<=(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	static int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	int32_t t3 = -775350920;

    t3 = (x13<=(x14<=(x15|x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	static int64_t x19 = INT64_MIN;
	volatile int8_t x20 = INT8_MIN;

    t4 = (x17<=(x18<=(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x21 = 266822317LLU;
	int16_t x22 = -1;
	int16_t x23 = INT16_MIN;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 117;

    t5 = (x21<=(x22<=(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 152720513616580LLU;
	uint16_t x27 = 11U;
	uint16_t x28 = 1464U;
	volatile int32_t t6 = 57751457;

    t6 = (x25<=(x26<=(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x30 = -6336;
	int8_t x31 = -1;
	int32_t t7 = 7;

    t7 = (x29<=(x30<=(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 14LLU;
	volatile int64_t x34 = INT64_MIN;
	volatile int16_t x35 = -1;
	static int32_t t8 = -828;

    t8 = (x33<=(x34<=(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = -15;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = UINT16_MAX;
	int32_t t9 = 393734404;

    t9 = (x37<=(x38<=(x39|x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = 285706491LLU;
	static volatile int32_t t10 = -141335699;

    t10 = (x41<=(x42<=(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 19216902LL;
	int32_t x47 = 56394306;
	int64_t x48 = 488098636634104954LL;
	static volatile int32_t t11 = 28;

    t11 = (x45<=(x46<=(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 12LL;
	static volatile int32_t x52 = -1;
	int32_t t12 = -11;

    t12 = (x49<=(x50<=(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int32_t x54 = -1;
	uint32_t x55 = 517624U;
	int32_t x56 = -1;
	static int32_t t13 = 0;

    t13 = (x53<=(x54<=(x55|x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 241896;
	uint16_t x58 = UINT16_MAX;
	uint8_t x59 = 51U;
	int32_t x60 = INT32_MAX;

    t14 = (x57<=(x58<=(x59|x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = 7285LL;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = 8522911184166059329LLU;
	int32_t t15 = -1968309;

    t15 = (x61<=(x62<=(x63|x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint64_t x66 = 2004553LLU;
	volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -3787;

    t16 = (x65<=(x66<=(x67|x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	static int16_t x71 = INT16_MIN;
	int64_t x72 = -164797303783972LL;

    t17 = (x69<=(x70<=(x71|x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	uint16_t x74 = 93U;
	uint32_t x75 = 220U;
	int32_t t18 = -5919827;

    t18 = (x73<=(x74<=(x75|x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -477519;
	uint32_t x79 = UINT32_MAX;
	static int32_t t19 = 125571631;

    t19 = (x77<=(x78<=(x79|x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	volatile int64_t x84 = -1LL;

    t20 = (x81<=(x82<=(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	int32_t x86 = -200264615;
	int64_t x88 = INT64_MIN;
	static int32_t t21 = -6137533;

    t21 = (x85<=(x86<=(x87|x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x89 = 336222070U;
	uint16_t x90 = UINT16_MAX;
	int16_t x92 = 749;
	static volatile int32_t t22 = -280;

    t22 = (x89<=(x90<=(x91|x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 4;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = -1;
	static uint64_t x96 = 145LLU;
	static volatile int32_t t23 = 4810162;

    t23 = (x93<=(x94<=(x95|x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = INT32_MIN;
	static uint8_t x99 = 6U;
	volatile int64_t x100 = INT64_MAX;
	int32_t t24 = -14;

    t24 = (x97<=(x98<=(x99|x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = UINT64_MAX;
	int64_t x102 = INT64_MIN;
	int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;

    t25 = (x101<=(x102<=(x103|x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 57;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MAX;
	static int32_t t26 = 10774;

    t26 = (x105<=(x106<=(x107|x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -8142;
	int32_t t27 = -377;

    t27 = (x109<=(x110<=(x111|x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x114 = 371620757826373LL;
	volatile int8_t x115 = INT8_MIN;
	static uint16_t x116 = 212U;

    t28 = (x113<=(x114<=(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MAX;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = -1;
	volatile int32_t t29 = 495;

    t29 = (x117<=(x118<=(x119|x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x123 = -1;
	static int64_t x124 = 207734858LL;
	volatile int32_t t30 = 18057;

    t30 = (x121<=(x122<=(x123|x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = UINT64_MAX;
	int8_t x126 = INT8_MAX;
	volatile uint16_t x127 = 5431U;
	uint8_t x128 = 102U;
	volatile int32_t t31 = -186;

    t31 = (x125<=(x126<=(x127|x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 17659776202164613LLU;
	volatile int16_t x130 = -1;
	int64_t x131 = 1575LL;
	uint64_t x132 = 7460924608LLU;
	volatile int32_t t32 = -242849711;

    t32 = (x129<=(x130<=(x131|x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	uint16_t x134 = 43U;
	volatile int8_t x135 = 0;
	static uint8_t x136 = 10U;
	static int32_t t33 = 2259952;

    t33 = (x133<=(x134<=(x135|x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	static uint32_t x138 = 572902418U;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 140U;

    t34 = (x137<=(x138<=(x139|x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int64_t x143 = 232052460397567LL;
	static int16_t x144 = 31;
	int32_t t35 = -272187;

    t35 = (x141<=(x142<=(x143|x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 1;
	int16_t x146 = 349;
	volatile uint16_t x147 = UINT16_MAX;
	static uint8_t x148 = UINT8_MAX;
	static volatile int32_t t36 = 74585;

    t36 = (x145<=(x146<=(x147|x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	uint32_t x150 = UINT32_MAX;
	static int16_t x151 = INT16_MIN;
	volatile uint8_t x152 = 10U;
	static int32_t t37 = 0;

    t37 = (x149<=(x150<=(x151|x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	static volatile uint32_t x155 = 50454U;
	uint16_t x156 = 7710U;
	volatile int32_t t38 = -8;

    t38 = (x153<=(x154<=(x155|x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = 105U;
	static volatile int32_t x159 = -1;
	int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -12;

    t39 = (x157<=(x158<=(x159|x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -19;
	static uint32_t x162 = 33937U;
	static volatile uint64_t x163 = 17LLU;
	int16_t x164 = INT16_MIN;

    t40 = (x161<=(x162<=(x163|x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MAX;
	uint8_t x166 = 3U;
	uint16_t x167 = 32U;
	volatile int16_t x168 = 50;
	int32_t t41 = 14104030;

    t41 = (x165<=(x166<=(x167|x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	volatile int32_t t42 = -28107;

    t42 = (x169<=(x170<=(x171|x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x174 = 3024399;
	uint8_t x175 = 1U;

    t43 = (x173<=(x174<=(x175|x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 2805U;
	uint8_t x179 = UINT8_MAX;
	static volatile uint64_t x180 = UINT64_MAX;

    t44 = (x177<=(x178<=(x179|x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -2475;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 1U;
	int32_t t45 = 60111;

    t45 = (x181<=(x182<=(x183|x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 14U;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;
	volatile int32_t t46 = 205382837;

    t46 = (x185<=(x186<=(x187|x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = -1;
	uint32_t x190 = 1895U;
	uint16_t x192 = 883U;
	int32_t t47 = -705687;

    t47 = (x189<=(x190<=(x191|x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	static volatile int8_t x195 = INT8_MIN;
	uint16_t x196 = 87U;
	int32_t t48 = -2;

    t48 = (x193<=(x194<=(x195|x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x198 = 0U;
	int32_t x199 = -31;
	static uint8_t x200 = 2U;
	int32_t t49 = -1;

    t49 = (x197<=(x198<=(x199|x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	volatile uint8_t x202 = UINT8_MAX;
	volatile int64_t x203 = -1LL;
	volatile int16_t x204 = 2;
	static int32_t t50 = 39887952;

    t50 = (x201<=(x202<=(x203|x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 80U;
	uint64_t x206 = 42490682386225850LLU;
	int32_t x208 = INT32_MIN;

    t51 = (x205<=(x206<=(x207|x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x210 = 3LLU;
	uint32_t x211 = 3U;
	int32_t x212 = 92116101;
	volatile int32_t t52 = -30;

    t52 = (x209<=(x210<=(x211|x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = UINT32_MAX;
	int64_t x215 = -1LL;
	volatile int32_t t53 = -85;

    t53 = (x213<=(x214<=(x215|x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x219 = -12197212126886LL;
	static volatile int16_t x220 = -12334;
	int32_t t54 = -13;

    t54 = (x217<=(x218<=(x219|x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -11;
	int32_t x222 = INT32_MAX;
	uint8_t x223 = UINT8_MAX;
	uint8_t x224 = 3U;
	volatile int32_t t55 = 1002;

    t55 = (x221<=(x222<=(x223|x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 2U;
	uint16_t x226 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -11590;

    t56 = (x225<=(x226<=(x227|x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 0U;
	static volatile uint8_t x230 = 0U;
	int8_t x231 = 4;
	volatile int32_t t57 = -918834164;

    t57 = (x229<=(x230<=(x231|x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = INT8_MIN;
	volatile int8_t x235 = -1;
	volatile uint16_t x236 = 27697U;
	volatile int32_t t58 = 17071;

    t58 = (x233<=(x234<=(x235|x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	volatile int32_t x238 = -8156;
	int8_t x239 = INT8_MAX;
	static int32_t t59 = 1;

    t59 = (x237<=(x238<=(x239|x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -323352499;
	static uint8_t x242 = UINT8_MAX;
	int32_t x244 = -2037693;
	volatile int32_t t60 = 2;

    t60 = (x241<=(x242<=(x243|x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x245 = 66U;
	int16_t x246 = INT16_MAX;
	uint64_t x247 = 11512252733129LLU;
	uint8_t x248 = 21U;
	int32_t t61 = 690;

    t61 = (x245<=(x246<=(x247|x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 0;

    t62 = (x249<=(x250<=(x251|x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x254 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 566;

    t63 = (x253<=(x254<=(x255|x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	static int16_t x258 = 0;
	uint32_t x260 = UINT32_MAX;

    t64 = (x257<=(x258<=(x259|x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	volatile uint8_t x264 = 4U;
	static int32_t t65 = 8888;

    t65 = (x261<=(x262<=(x263|x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 350435298U;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	static volatile int32_t t66 = 0;

    t66 = (x265<=(x266<=(x267|x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MAX;
	static int32_t x270 = INT32_MAX;
	static int16_t x271 = INT16_MIN;

    t67 = (x269<=(x270<=(x271|x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = -3586041833188641LL;
	int32_t x274 = INT32_MIN;
	volatile uint32_t x275 = 250472U;
	int32_t x276 = -5461;
	volatile int32_t t68 = -610;

    t68 = (x273<=(x274<=(x275|x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = 2;
	int64_t x280 = INT64_MIN;
	int32_t t69 = -19;

    t69 = (x277<=(x278<=(x279|x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	int8_t x282 = 0;
	uint8_t x283 = 35U;
	volatile int32_t x284 = 74;
	volatile int32_t t70 = 775;

    t70 = (x281<=(x282<=(x283|x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 25U;
	static int32_t x286 = 6500;
	uint16_t x288 = 150U;
	static volatile int32_t t71 = -2;

    t71 = (x285<=(x286<=(x287|x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = -29LL;
	int32_t x290 = 116016104;
	volatile uint32_t x291 = 1944U;

    t72 = (x289<=(x290<=(x291|x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MAX;
	int64_t x294 = 224419347625240541LL;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;
	volatile int32_t t73 = 12;

    t73 = (x293<=(x294<=(x295|x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x298 = 12;
	uint8_t x300 = 31U;

    t74 = (x297<=(x298<=(x299|x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = INT8_MIN;
	volatile int8_t x303 = -3;
	int16_t x304 = -1;
	int32_t t75 = 3612;

    t75 = (x301<=(x302<=(x303|x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = 1;
	static int8_t x307 = -12;
	static volatile uint16_t x308 = UINT16_MAX;
	static int32_t t76 = -593;

    t76 = (x305<=(x306<=(x307|x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 6U;
	static int16_t x311 = INT16_MIN;
	uint64_t x312 = 29LLU;

    t77 = (x309<=(x310<=(x311|x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	uint8_t x314 = UINT8_MAX;
	volatile int64_t x315 = INT64_MAX;
	int32_t x316 = INT32_MIN;

    t78 = (x313<=(x314<=(x315|x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 1114952400U;
	volatile uint16_t x318 = 587U;
	int64_t x319 = INT64_MAX;
	static volatile int8_t x320 = INT8_MIN;
	static int32_t t79 = 62266;

    t79 = (x317<=(x318<=(x319|x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -10;
	uint64_t x322 = 0LLU;
	volatile int16_t x323 = 395;
	volatile int64_t x324 = INT64_MIN;
	volatile int32_t t80 = -168;

    t80 = (x321<=(x322<=(x323|x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 0U;
	static uint32_t x326 = 3962791U;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MIN;
	static int32_t t81 = -1632;

    t81 = (x325<=(x326<=(x327|x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = 194617694;
	volatile int64_t x330 = INT64_MAX;
	volatile int32_t t82 = 14858;

    t82 = (x329<=(x330<=(x331|x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int16_t x335 = INT16_MAX;
	uint32_t x336 = 81U;
	int32_t t83 = -55647;

    t83 = (x333<=(x334<=(x335|x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MAX;
	static uint32_t x339 = 4758U;
	int32_t t84 = -2819076;

    t84 = (x337<=(x338<=(x339|x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 1U;
	uint16_t x342 = UINT16_MAX;
	volatile int32_t t85 = -951974;

    t85 = (x341<=(x342<=(x343|x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 29;
	int64_t x346 = INT64_MIN;
	volatile int16_t x347 = INT16_MAX;
	int32_t x348 = INT32_MAX;
	static int32_t t86 = -93699;

    t86 = (x345<=(x346<=(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	int8_t x350 = 1;
	int32_t x351 = 3571113;
	static int64_t x352 = INT64_MAX;
	volatile int32_t t87 = 75;

    t87 = (x349<=(x350<=(x351|x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 20U;
	int16_t x354 = INT16_MAX;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;
	static volatile int32_t t88 = 292542992;

    t88 = (x353<=(x354<=(x355|x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = 4726U;
	uint32_t x360 = 3U;
	int32_t t89 = 0;

    t89 = (x357<=(x358<=(x359|x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = 23656U;
	volatile int8_t x362 = INT8_MIN;
	int16_t x363 = -1;
	static int32_t x364 = INT32_MAX;

    t90 = (x361<=(x362<=(x363|x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x367 = 0;
	uint32_t x368 = 3350U;

    t91 = (x365<=(x366<=(x367|x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	static int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 389080;

    t92 = (x369<=(x370<=(x371|x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	static uint8_t x374 = UINT8_MAX;
	uint32_t x375 = UINT32_MAX;
	int32_t t93 = -169789;

    t93 = (x373<=(x374<=(x375|x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = -79163912;
	int16_t x378 = INT16_MAX;
	volatile uint16_t x379 = 85U;
	volatile int32_t t94 = -892;

    t94 = (x377<=(x378<=(x379|x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -753;
	uint8_t x382 = 1U;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = -61;
	volatile int32_t t95 = 20;

    t95 = (x381<=(x382<=(x383|x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = INT32_MIN;
	static volatile uint8_t x387 = 12U;
	int32_t t96 = 8016;

    t96 = (x385<=(x386<=(x387|x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 0U;
	int64_t x390 = INT64_MIN;
	volatile int16_t x391 = -1;
	int32_t t97 = -1375;

    t97 = (x389<=(x390<=(x391|x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = -8120LL;
	int64_t x394 = -205363937441414LL;
	int8_t x395 = INT8_MIN;
	volatile int32_t t98 = 8476;

    t98 = (x393<=(x394<=(x395|x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x397 = INT8_MIN;
	static int32_t x398 = INT32_MAX;
	uint8_t x399 = 1U;
	int32_t t99 = 363644892;

    t99 = (x397<=(x398<=(x399|x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = 169578LL;
	int16_t x402 = INT16_MAX;
	static volatile int16_t x404 = INT16_MIN;
	static int32_t t100 = 221872;

    t100 = (x401<=(x402<=(x403|x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	int32_t x407 = 27;
	int64_t x408 = -1LL;

    t101 = (x405<=(x406<=(x407|x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -4387097408784042LL;
	int64_t x411 = -1LL;
	int32_t x412 = -1;
	volatile int32_t t102 = -150584423;

    t102 = (x409<=(x410<=(x411|x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 420;
	static uint64_t x414 = UINT64_MAX;
	int32_t x415 = 122988746;
	static int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 8242267;

    t103 = (x413<=(x414<=(x415|x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = INT8_MIN;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = 0;
	volatile int32_t t104 = -90198;

    t104 = (x417<=(x418<=(x419|x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = INT16_MIN;
	uint16_t x422 = 703U;
	uint8_t x423 = 47U;
	int32_t t105 = -10280354;

    t105 = (x421<=(x422<=(x423|x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x427 = UINT8_MAX;
	uint8_t x428 = 5U;
	volatile int32_t t106 = 3;

    t106 = (x425<=(x426<=(x427|x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	volatile uint8_t x430 = UINT8_MAX;
	int16_t x431 = -1;
	static uint8_t x432 = 1U;
	volatile int32_t t107 = 1;

    t107 = (x429<=(x430<=(x431|x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MIN;
	volatile int64_t x434 = -1640961530LL;
	volatile int8_t x435 = -62;
	int8_t x436 = -1;
	volatile int32_t t108 = 31;

    t108 = (x433<=(x434<=(x435|x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = INT8_MIN;
	volatile int32_t x439 = INT32_MAX;
	uint8_t x440 = 0U;
	int32_t t109 = 0;

    t109 = (x437<=(x438<=(x439|x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 1;
	int64_t x442 = -1LL;
	static int32_t x443 = INT32_MAX;
	static uint8_t x444 = 16U;
	static volatile int32_t t110 = -13953;

    t110 = (x441<=(x442<=(x443|x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	static int8_t x446 = INT8_MIN;
	int16_t x447 = -1;
	volatile int8_t x448 = INT8_MIN;
	int32_t t111 = -12150;

    t111 = (x445<=(x446<=(x447|x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 209U;
	int8_t x450 = 9;
	int32_t t112 = -702300557;

    t112 = (x449<=(x450<=(x451|x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 231U;
	static int8_t x455 = 6;
	volatile int32_t t113 = -43;

    t113 = (x453<=(x454<=(x455|x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	uint16_t x458 = UINT16_MAX;
	int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = 15;

    t114 = (x457<=(x458<=(x459|x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = 81;
	int8_t x462 = INT8_MIN;
	volatile uint32_t x463 = 2044U;
	uint16_t x464 = 8U;
	volatile int32_t t115 = 45;

    t115 = (x461<=(x462<=(x463|x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x465 = 80U;
	static int16_t x467 = INT16_MIN;
	volatile uint8_t x468 = 0U;
	volatile int32_t t116 = -88716;

    t116 = (x465<=(x466<=(x467|x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x469 = 84700;
	uint64_t x470 = 2817110567341LLU;
	int16_t x472 = INT16_MIN;
	int32_t t117 = 106;

    t117 = (x469<=(x470<=(x471|x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	int16_t x476 = 52;
	int32_t t118 = 3395138;

    t118 = (x473<=(x474<=(x475|x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 15525657301LLU;
	static uint64_t x479 = 2LLU;
	uint16_t x480 = 4U;
	static volatile int32_t t119 = 5547;

    t119 = (x477<=(x478<=(x479|x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	static int8_t x482 = 0;
	static int8_t x483 = INT8_MAX;
	int64_t x484 = -1LL;
	volatile int32_t t120 = -19;

    t120 = (x481<=(x482<=(x483|x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x487 = -1096149000642454LL;
	uint16_t x488 = 517U;

    t121 = (x485<=(x486<=(x487|x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	volatile int64_t x491 = -411521LL;
	int64_t x492 = -1LL;

    t122 = (x489<=(x490<=(x491|x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MIN;
	uint32_t x494 = 213794707U;
	int16_t x495 = 5;
	static int64_t x496 = INT64_MIN;
	int32_t t123 = -1945104;

    t123 = (x493<=(x494<=(x495|x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 466964LLU;
	int64_t x498 = INT64_MIN;
	int64_t x499 = -1LL;
	uint16_t x500 = 0U;
	volatile int32_t t124 = 147400468;

    t124 = (x497<=(x498<=(x499|x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 1U;
	uint64_t x502 = 15478281LLU;
	uint32_t x503 = UINT32_MAX;
	int8_t x504 = -1;
	volatile int32_t t125 = -379268;

    t125 = (x501<=(x502<=(x503|x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = -2;
	int8_t x507 = -1;
	uint64_t x508 = UINT64_MAX;
	static volatile int32_t t126 = -158;

    t126 = (x505<=(x506<=(x507|x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = 15U;
	uint64_t x511 = 200357167925067756LLU;
	static int16_t x512 = -1;
	int32_t t127 = -52865;

    t127 = (x509<=(x510<=(x511|x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int8_t x514 = INT8_MAX;
	int8_t x515 = INT8_MIN;
	int8_t x516 = 15;

    t128 = (x513<=(x514<=(x515|x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile int8_t x519 = INT8_MAX;
	volatile int8_t x520 = INT8_MIN;

    t129 = (x517<=(x518<=(x519|x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x521 = 2711U;
	int8_t x522 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	static volatile int32_t t130 = 181;

    t130 = (x521<=(x522<=(x523|x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 102U;
	uint64_t x526 = 3538556487421351LLU;
	volatile int8_t x527 = INT8_MIN;
	uint64_t x528 = 1566381379LLU;
	volatile int32_t t131 = -2;

    t131 = (x525<=(x526<=(x527|x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = 1;
	int32_t x530 = INT32_MAX;
	volatile int8_t x531 = 16;

    t132 = (x529<=(x530<=(x531|x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x535 = 290U;
	static int16_t x536 = -1;
	int32_t t133 = -86727069;

    t133 = (x533<=(x534<=(x535|x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 10U;
	int64_t x539 = INT64_MAX;
	int64_t x540 = INT64_MIN;

    t134 = (x537<=(x538<=(x539|x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x542 = -1;
	uint8_t x543 = UINT8_MAX;
	static int64_t x544 = -1LL;
	int32_t t135 = -1282068;

    t135 = (x541<=(x542<=(x543|x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	int32_t x547 = INT32_MAX;
	static int32_t t136 = -4453016;

    t136 = (x545<=(x546<=(x547|x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	static volatile int64_t x550 = INT64_MAX;
	uint32_t x551 = 3U;
	int32_t x552 = INT32_MIN;
	int32_t t137 = -3934;

    t137 = (x549<=(x550<=(x551|x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = 45248789LL;
	uint32_t x554 = 3343U;
	volatile int32_t x555 = INT32_MIN;
	volatile int32_t t138 = 2045074;

    t138 = (x553<=(x554<=(x555|x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x559 = 12226930LL;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t139 = -6628879;

    t139 = (x557<=(x558<=(x559|x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = -3273;
	int32_t x562 = 10297;
	volatile uint64_t x563 = UINT64_MAX;
	uint8_t x564 = 117U;

    t140 = (x561<=(x562<=(x563|x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -99766;
	int8_t x566 = INT8_MAX;
	int8_t x568 = -1;
	int32_t t141 = 0;

    t141 = (x565<=(x566<=(x567|x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1584LL;
	volatile uint8_t x570 = UINT8_MAX;
	volatile int8_t x572 = -1;

    t142 = (x569<=(x570<=(x571|x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = 58U;
	static int8_t x575 = -1;
	uint64_t x576 = UINT64_MAX;
	int32_t t143 = 32;

    t143 = (x573<=(x574<=(x575|x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x578 = INT32_MIN;
	int8_t x580 = 12;
	static volatile int32_t t144 = -78492;

    t144 = (x577<=(x578<=(x579|x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x581 = 5LLU;
	uint64_t x582 = 66883781092375LLU;

    t145 = (x581<=(x582<=(x583|x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	volatile int16_t x586 = INT16_MAX;
	volatile int8_t x587 = -2;
	volatile int32_t t146 = -92907588;

    t146 = (x585<=(x586<=(x587|x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MIN;
	volatile uint64_t x590 = 7LLU;
	uint16_t x591 = UINT16_MAX;
	int64_t x592 = INT64_MIN;
	volatile int32_t t147 = 56541;

    t147 = (x589<=(x590<=(x591|x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = 1559747822046801874LL;
	uint8_t x594 = UINT8_MAX;
	int16_t x595 = INT16_MAX;
	static int8_t x596 = INT8_MIN;
	int32_t t148 = -6;

    t148 = (x593<=(x594<=(x595|x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 846U;
	int32_t x598 = INT32_MIN;
	int16_t x600 = 84;
	int32_t t149 = -813034651;

    t149 = (x597<=(x598<=(x599|x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MIN;
	uint64_t x602 = 12LLU;
	static uint64_t x603 = UINT64_MAX;
	volatile uint8_t x604 = UINT8_MAX;

    t150 = (x601<=(x602<=(x603|x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	static int32_t x607 = -1723840;
	int32_t t151 = -56432;

    t151 = (x605<=(x606<=(x607|x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 35U;
	volatile uint8_t x610 = 9U;
	volatile int16_t x611 = -7320;
	static uint32_t x612 = 838U;
	volatile int32_t t152 = 743725;

    t152 = (x609<=(x610<=(x611|x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 915641121023LL;
	volatile int64_t x614 = INT64_MIN;
	static int32_t x615 = -2038;
	static int32_t x616 = INT32_MIN;
	int32_t t153 = 358177424;

    t153 = (x613<=(x614<=(x615|x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MIN;
	int8_t x619 = 11;
	int64_t x620 = 2069887905883403LL;
	int32_t t154 = -5355;

    t154 = (x617<=(x618<=(x619|x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = 80;
	uint32_t x622 = 2538U;
	int64_t x624 = INT64_MIN;
	volatile int32_t t155 = -1;

    t155 = (x621<=(x622<=(x623|x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = INT32_MIN;
	static int16_t x627 = -1;
	static int32_t t156 = -711466285;

    t156 = (x625<=(x626<=(x627|x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = -1;
	volatile int64_t x630 = INT64_MIN;
	int64_t x631 = 398214LL;
	int32_t x632 = INT32_MIN;
	volatile int32_t t157 = 32900635;

    t157 = (x629<=(x630<=(x631|x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = INT8_MIN;
	static int64_t x634 = 447047107LL;
	uint32_t x635 = UINT32_MAX;
	int8_t x636 = 14;
	int32_t t158 = -1842048;

    t158 = (x633<=(x634<=(x635|x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -1LL;
	static volatile uint8_t x639 = 35U;
	int8_t x640 = 1;

    t159 = (x637<=(x638<=(x639|x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 302330889214728LL;
	int16_t x642 = -1;
	int64_t x643 = 0LL;
	int32_t t160 = 962731;

    t160 = (x641<=(x642<=(x643|x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	volatile int16_t x646 = 0;
	int32_t t161 = -3046738;

    t161 = (x645<=(x646<=(x647|x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MIN;
	volatile int32_t x651 = INT32_MAX;
	uint32_t x652 = UINT32_MAX;
	int32_t t162 = 4826;

    t162 = (x649<=(x650<=(x651|x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	uint32_t x654 = 1456394U;
	int8_t x656 = INT8_MIN;
	int32_t t163 = 28058629;

    t163 = (x653<=(x654<=(x655|x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = 0U;
	static int16_t x658 = INT16_MAX;
	uint8_t x659 = UINT8_MAX;
	int32_t t164 = 1607;

    t164 = (x657<=(x658<=(x659|x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x662 = -1;
	uint8_t x663 = UINT8_MAX;
	static volatile int64_t x664 = INT64_MAX;
	volatile int32_t t165 = 1785094;

    t165 = (x661<=(x662<=(x663|x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MAX;
	int32_t x667 = INT32_MAX;

    t166 = (x665<=(x666<=(x667|x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 4U;
	volatile uint64_t x670 = 20403LLU;
	volatile int8_t x671 = INT8_MIN;
	int8_t x672 = 1;
	int32_t t167 = 247366;

    t167 = (x669<=(x670<=(x671|x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -54369607641355775LL;
	int16_t x674 = INT16_MIN;
	int32_t x675 = INT32_MIN;
	int16_t x676 = INT16_MIN;
	int32_t t168 = 928;

    t168 = (x673<=(x674<=(x675|x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	uint32_t x679 = 82U;
	int16_t x680 = 765;
	int32_t t169 = -5206119;

    t169 = (x677<=(x678<=(x679|x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = -4LL;
	volatile uint32_t x682 = UINT32_MAX;
	int8_t x683 = INT8_MAX;
	volatile int8_t x684 = INT8_MIN;
	static volatile int32_t t170 = 97;

    t170 = (x681<=(x682<=(x683|x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = -9;
	uint16_t x686 = 3370U;
	int64_t x688 = INT64_MAX;
	int32_t t171 = 107031902;

    t171 = (x685<=(x686<=(x687|x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int8_t x690 = -21;
	uint8_t x691 = UINT8_MAX;
	static int8_t x692 = INT8_MAX;
	int32_t t172 = -1225;

    t172 = (x689<=(x690<=(x691|x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MIN;
	int32_t t173 = -26200391;

    t173 = (x693<=(x694<=(x695|x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = -1;
	uint32_t x699 = 116U;
	uint64_t x700 = UINT64_MAX;

    t174 = (x697<=(x698<=(x699|x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	uint8_t x702 = 0U;
	uint16_t x703 = 0U;
	static int16_t x704 = -7820;
	int32_t t175 = -12758;

    t175 = (x701<=(x702<=(x703|x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 485412LL;
	int64_t x706 = INT64_MIN;
	int32_t x708 = INT32_MIN;
	int32_t t176 = 9938330;

    t176 = (x705<=(x706<=(x707|x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	static int32_t x710 = 8287;
	uint16_t x711 = UINT16_MAX;
	static volatile int32_t t177 = 111791;

    t177 = (x709<=(x710<=(x711|x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MAX;
	uint64_t x715 = UINT64_MAX;
	int32_t t178 = 66469168;

    t178 = (x713<=(x714<=(x715|x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 489497803LLU;
	int16_t x718 = 3189;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 11630;

    t179 = (x717<=(x718<=(x719|x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MAX;
	uint16_t x722 = 6U;
	uint64_t x723 = 37507LLU;
	volatile int8_t x724 = INT8_MIN;
	volatile int32_t t180 = -11141491;

    t180 = (x721<=(x722<=(x723|x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 54U;
	volatile uint64_t x726 = 12996702150786579LLU;
	uint8_t x727 = UINT8_MAX;
	static volatile int32_t x728 = INT32_MIN;

    t181 = (x725<=(x726<=(x727|x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x729 = 263624LLU;
	int64_t x730 = 1541488624LL;
	volatile int32_t x731 = -458234831;
	int64_t x732 = -474801346822514LL;
	int32_t t182 = -1971;

    t182 = (x729<=(x730<=(x731|x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 670U;
	volatile int8_t x734 = 2;
	volatile uint32_t x735 = UINT32_MAX;
	static volatile uint16_t x736 = UINT16_MAX;
	static volatile int32_t t183 = 77;

    t183 = (x733<=(x734<=(x735|x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x739 = UINT16_MAX;
	uint32_t x740 = UINT32_MAX;
	int32_t t184 = 4595661;

    t184 = (x737<=(x738<=(x739|x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = -69120631176219252LL;
	static volatile int32_t x742 = INT32_MAX;
	int64_t x743 = -1LL;
	uint64_t x744 = 2951705326536LLU;
	volatile int32_t t185 = 390;

    t185 = (x741<=(x742<=(x743|x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	volatile uint32_t x746 = UINT32_MAX;
	uint32_t x748 = 8687U;
	int32_t t186 = 83465483;

    t186 = (x745<=(x746<=(x747|x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	int16_t x750 = INT16_MIN;
	int64_t x751 = INT64_MAX;
	int16_t x752 = INT16_MIN;
	static int32_t t187 = -273168;

    t187 = (x749<=(x750<=(x751|x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	volatile int32_t x754 = -169;
	int8_t x755 = INT8_MIN;
	uint16_t x756 = 22U;
	int32_t t188 = -21786332;

    t188 = (x753<=(x754<=(x755|x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 5481206339232275242LLU;
	static volatile uint64_t x758 = UINT64_MAX;
	static int8_t x760 = 5;
	volatile int32_t t189 = 183;

    t189 = (x757<=(x758<=(x759|x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = INT32_MAX;
	uint32_t x764 = 4136246U;
	int32_t t190 = 19;

    t190 = (x761<=(x762<=(x763|x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = INT64_MIN;
	static volatile int16_t x767 = INT16_MIN;
	uint32_t x768 = 58051053U;
	volatile int32_t t191 = 379;

    t191 = (x765<=(x766<=(x767|x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	static int64_t x770 = -1LL;
	static int64_t x772 = 3866LL;
	volatile int32_t t192 = -468163587;

    t192 = (x769<=(x770<=(x771|x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = -1;
	int16_t x775 = -1;
	static int8_t x776 = INT8_MIN;
	int32_t t193 = -26665862;

    t193 = (x773<=(x774<=(x775|x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	int8_t x778 = -4;
	uint8_t x779 = 16U;
	int16_t x780 = INT16_MAX;
	int32_t t194 = -556024;

    t194 = (x777<=(x778<=(x779|x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x782 = INT16_MAX;
	static volatile int64_t x783 = -1LL;
	uint8_t x784 = UINT8_MAX;
	int32_t t195 = 67029108;

    t195 = (x781<=(x782<=(x783|x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = -1;
	int64_t x787 = INT64_MIN;
	static volatile int32_t x788 = -1;

    t196 = (x785<=(x786<=(x787|x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 7686;
	static volatile uint32_t x790 = 232U;
	int8_t x791 = INT8_MIN;
	int32_t x792 = 253955;
	volatile int32_t t197 = 1193961;

    t197 = (x789<=(x790<=(x791|x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -11118610LL;
	volatile int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MAX;
	volatile int32_t t198 = 652188225;

    t198 = (x793<=(x794<=(x795|x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x798 = 5U;
	uint64_t x799 = UINT64_MAX;
	volatile int64_t x800 = INT64_MIN;

    t199 = (x797<=(x798<=(x799|x800)));

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

