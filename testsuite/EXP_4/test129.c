
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

volatile int32_t x8 = INT32_MAX;
int64_t x9 = -1LL;
static int16_t x25 = 1;
static uint8_t x27 = UINT8_MAX;
volatile int16_t x28 = 106;
static int8_t x36 = INT8_MIN;
static volatile int16_t x45 = INT16_MAX;
int16_t x46 = INT16_MIN;
uint32_t x48 = UINT32_MAX;
int32_t t9 = -150677;
static int32_t x53 = -106;
static int8_t x56 = -1;
int16_t x59 = INT16_MIN;
uint64_t t11 = UINT64_MAX;
static uint64_t x64 = 3303924841032111714LLU;
volatile int32_t x69 = INT32_MIN;
int32_t x75 = INT32_MAX;
int16_t x78 = INT16_MAX;
int16_t x86 = -6014;
int32_t x92 = INT32_MIN;
static int16_t x93 = 3;
volatile int32_t t18 = 1654;
int64_t x97 = -1LL;
uint16_t x113 = UINT16_MAX;
uint32_t x119 = UINT32_MAX;
volatile int32_t t22 = 386644;
uint16_t x129 = 5866U;
uint8_t x130 = UINT8_MAX;
int32_t x133 = 34;
int16_t x146 = -883;
static volatile int32_t t31 = 535469396;
uint16_t x162 = 151U;
int16_t x171 = INT16_MIN;
static volatile int32_t x173 = -1;
uint16_t x178 = UINT16_MAX;
volatile int32_t x185 = INT32_MAX;
uint32_t x201 = 1029U;
int64_t x202 = INT64_MAX;
int64_t x204 = INT64_MIN;
static volatile uint8_t x216 = UINT8_MAX;
uint8_t x223 = UINT8_MAX;
volatile int32_t t44 = -1042179470;
volatile int8_t x230 = -20;
int32_t t47 = -192679195;
uint16_t x237 = 11692U;
int64_t x238 = -6400344LL;
int16_t x241 = INT16_MIN;
static int64_t x242 = INT64_MAX;
uint32_t x243 = UINT32_MAX;
uint8_t x246 = 34U;
uint64_t x261 = 1664491933153LLU;
volatile int32_t t55 = 1;
int16_t x279 = INT16_MAX;
int64_t x284 = INT64_MIN;
int32_t x289 = INT32_MIN;
uint8_t x291 = UINT8_MAX;
int16_t x304 = -603;
volatile int32_t t63 = 8514385;
int8_t x316 = -50;
int8_t x317 = 0;
static int32_t t66 = -101;
static int64_t x325 = INT64_MIN;
uint16_t x327 = 164U;
uint8_t x329 = UINT8_MAX;
volatile uint8_t x330 = 36U;
static int8_t x333 = INT8_MIN;
volatile uint32_t x344 = 6U;
uint32_t x348 = 2U;
static volatile int32_t t72 = 0;
int16_t x349 = -1;
int32_t x363 = 16146009;
volatile uint64_t t76 = 89231815LLU;
uint16_t x372 = 5972U;
int32_t t77 = 3139374;
int32_t x376 = 33;
static int64_t t79 = 347LL;
volatile int64_t x382 = -30LL;
uint8_t x386 = 107U;
uint8_t x387 = UINT8_MAX;
static uint16_t x389 = 12340U;
int32_t t83 = -7872385;
static int32_t x398 = INT32_MIN;
uint16_t x401 = 3203U;
volatile int32_t x404 = INT32_MAX;
int16_t x407 = 6;
int32_t t87 = -29491;
int64_t x417 = INT64_MIN;
static uint16_t x419 = 31U;
volatile int64_t x420 = INT64_MIN;
int64_t t90 = -16LL;
int8_t x429 = INT8_MIN;
static int32_t x435 = 1184;
static volatile uint32_t x440 = 26645660U;
volatile int32_t x442 = INT32_MIN;
static uint8_t x444 = 0U;
uint64_t t96 = 3997245LLU;
uint64_t x468 = 5554LLU;
volatile int32_t t100 = -101;
int16_t x471 = -1329;
uint64_t x488 = 96460734935LLU;
int32_t x498 = 4389;
static int32_t x505 = INT32_MAX;
uint64_t x532 = 27739673134LLU;
volatile int8_t x538 = -1;
int64_t x546 = -1LL;
static volatile int8_t x571 = INT8_MIN;
uint8_t x572 = 1U;
int64_t x575 = INT64_MAX;
volatile int32_t x576 = -1;
int32_t t121 = 398;
volatile int32_t x582 = INT32_MAX;
int32_t t122 = 1704;
int64_t x585 = -625875930683886137LL;
int32_t x592 = INT32_MIN;
int16_t x595 = INT16_MIN;
static volatile int32_t x599 = INT32_MIN;
volatile int64_t t126 = 0LL;
int32_t x601 = 1;
uint32_t x602 = 8U;
static int16_t x614 = 1;
volatile int64_t x616 = INT64_MIN;
static volatile uint32_t t130 = 402U;
volatile int32_t t131 = -773984231;
int32_t x624 = 19;
uint8_t x625 = UINT8_MAX;
volatile int8_t x626 = -1;
uint32_t x629 = 83U;
volatile uint32_t x637 = 2U;
volatile int32_t t136 = 5523365;
int32_t t137 = -203725669;
volatile uint32_t x650 = 43U;
uint64_t t139 = UINT64_MAX;
static int64_t x659 = 10817457348757LL;
static uint32_t x664 = UINT32_MAX;
int16_t x667 = 1;
int64_t x668 = -1LL;
volatile int32_t t142 = 9246749;
static int16_t x670 = -1;
int8_t x686 = -23;
int32_t x687 = -24076995;
static int64_t t146 = 54131179020373323LL;
volatile uint64_t x690 = UINT64_MAX;
uint16_t x694 = 0U;
int16_t x695 = INT16_MIN;
static volatile uint64_t x699 = 2960678763LLU;
int16_t x703 = INT16_MAX;
int16_t x719 = INT16_MIN;
static int32_t x720 = 3813599;
volatile int16_t x726 = INT16_MIN;
int16_t x736 = -1;
volatile uint16_t x747 = 138U;
volatile uint32_t x755 = UINT32_MAX;
int32_t x759 = 1022;
volatile int32_t t162 = -1;
int64_t x764 = -1LL;
int8_t x766 = -54;
volatile int64_t x767 = INT64_MAX;
int64_t x772 = INT64_MAX;
int64_t x773 = -14109LL;
static volatile int32_t t167 = -15309;
int8_t x783 = INT8_MAX;
uint8_t x786 = 1U;
uint16_t x796 = 0U;
int8_t x823 = 36;
static int8_t x824 = INT8_MIN;
static int64_t x834 = INT64_MIN;
uint64_t x837 = 114021LLU;
uint64_t t180 = 27400801671LLU;
int8_t x850 = INT8_MAX;
int32_t t183 = -3731;
int8_t x857 = INT8_MIN;
int8_t x860 = 26;
static int8_t x871 = INT8_MAX;
volatile int32_t t187 = -160645815;
uint8_t x878 = UINT8_MAX;
int32_t x880 = INT32_MAX;
static int16_t x882 = -1;
static uint16_t x884 = 12U;
static int64_t t190 = 166992LL;
int64_t x898 = 746916LL;
uint32_t x911 = 260U;
uint8_t x912 = UINT8_MAX;
int32_t x916 = -1;
static int32_t t195 = INT32_MAX;
static volatile int32_t t196 = 240456;
static uint16_t x935 = UINT16_MAX;
volatile int32_t t197 = -1;
volatile int8_t x942 = -1;
volatile uint16_t x948 = UINT16_MAX;
volatile int32_t t199 = 7;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = 2;
	volatile int64_t x7 = -1LL;
	int32_t t0 = 78;

    t0 = (x5*(x6<=(x7+x8)));

    if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = -12;
	uint64_t x11 = 5524643975LLU;
	static int64_t x12 = -1LL;
	volatile int64_t t1 = -66903077LL;

    t1 = (x9*(x10<=(x11+x12)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x17 = 35U;
	int16_t x18 = INT16_MIN;
	volatile int32_t x19 = 16174;
	int16_t x20 = -1;
	volatile int32_t t2 = 99;

    t2 = (x17*(x18<=(x19+x20)));

    if (t2 != 35) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = -1;
	uint32_t x22 = 105U;
	volatile uint16_t x23 = 7146U;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t3 = 626354;

    t3 = (x21*(x22<=(x23+x24)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x26 = INT32_MIN;
	int32_t t4 = -9094;

    t4 = (x25*(x26<=(x27+x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = -4254146577720755588LL;
	int8_t x30 = INT8_MIN;
	int16_t x31 = -5;
	int16_t x32 = 15;
	static int64_t t5 = 75621564LL;

    t5 = (x29*(x30<=(x31+x32)));

    if (t5 != -4254146577720755588LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MAX;
	volatile int16_t x34 = INT16_MIN;
	int64_t x35 = INT64_MAX;
	int32_t t6 = INT32_MAX;

    t6 = (x33*(x34<=(x35+x36)));

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x37 = 422065LLU;
	int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MAX;
	int64_t x40 = -11433775LL;
	static uint64_t t7 = 607LLU;

    t7 = (x37*(x38<=(x39+x40)));

    if (t7 != 422065LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x41 = INT32_MAX;
	volatile uint32_t x42 = 1U;
	int8_t x43 = 22;
	static uint8_t x44 = 24U;
	static int32_t t8 = INT32_MAX;

    t8 = (x41*(x42<=(x43+x44)));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x47 = UINT64_MAX;

    t9 = (x45*(x46<=(x47+x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x54 = INT64_MIN;
	static volatile int16_t x55 = INT16_MIN;
	static int32_t t10 = -16192;

    t10 = (x53*(x54<=(x55+x56)));

    if (t10 != -106) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = UINT64_MAX;
	int32_t x58 = -803256;
	static int8_t x60 = 1;

    t11 = (x57*(x58<=(x59+x60)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x61 = 40U;
	uint16_t x62 = 21892U;
	volatile uint64_t x63 = 294LLU;
	volatile int32_t t12 = -115938;

    t12 = (x61*(x62<=(x63+x64)));

    if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x70 = -3;
	volatile int32_t x71 = 31040;
	volatile uint64_t x72 = 4273783167647LLU;
	int32_t t13 = 7389;

    t13 = (x69*(x70<=(x71+x72)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x73 = INT8_MAX;
	static uint16_t x74 = 40U;
	int16_t x76 = -190;
	volatile int32_t t14 = 3408566;

    t14 = (x73*(x74<=(x75+x76)));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = 7;
	uint64_t x79 = 1241185085042374LLU;
	static int16_t x80 = 104;
	static int32_t t15 = 60284;

    t15 = (x77*(x78<=(x79+x80)));

    if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x85 = INT32_MAX;
	uint16_t x87 = 13909U;
	int8_t x88 = -1;
	int32_t t16 = INT32_MAX;

    t16 = (x85*(x86<=(x87+x88)));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x89 = -1LL;
	static int16_t x90 = -1;
	static uint16_t x91 = UINT16_MAX;
	int64_t t17 = 7451792594614010LL;

    t17 = (x89*(x90<=(x91+x92)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x94 = 1;
	int8_t x95 = -1;
	int8_t x96 = INT8_MAX;

    t18 = (x93*(x94<=(x95+x96)));

    if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x98 = 11857930U;
	static int32_t x99 = -1;
	int16_t x100 = -1;
	int64_t t19 = 6343LL;

    t19 = (x97*(x98<=(x99+x100)));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 35U;
	volatile int32_t x103 = -1;
	static uint8_t x104 = 18U;
	static uint64_t t20 = 5671027182998LLU;

    t20 = (x101*(x102<=(x103+x104)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x114 = INT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t21 = 34348;

    t21 = (x113*(x114<=(x115+x116)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x117 = 4U;
	int32_t x118 = -1;
	static uint16_t x120 = UINT16_MAX;

    t22 = (x117*(x118<=(x119+x120)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x121 = INT32_MIN;
	static volatile int64_t x122 = -1LL;
	volatile int8_t x123 = INT8_MIN;
	int32_t x124 = -1;
	int32_t t23 = -7587;

    t23 = (x121*(x122<=(x123+x124)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x125 = INT64_MAX;
	static int64_t x126 = INT64_MAX;
	int64_t x127 = -1LL;
	uint64_t x128 = UINT64_MAX;
	int64_t t24 = INT64_MAX;

    t24 = (x125*(x126<=(x127+x128)));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x131 = INT16_MAX;
	static int16_t x132 = -967;
	int32_t t25 = 1618106;

    t25 = (x129*(x130<=(x131+x132)));

    if (t25 != 5866) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x134 = 4;
	uint8_t x135 = UINT8_MAX;
	volatile uint32_t x136 = 258331U;
	int32_t t26 = -256979445;

    t26 = (x133*(x134<=(x135+x136)));

    if (t26 != 34) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x137 = 1678776167LLU;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -130322256752784402LL;
	volatile uint64_t t27 = 630787LLU;

    t27 = (x137*(x138<=(x139+x140)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x141 = INT8_MAX;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 3111688309LLU;
	uint8_t x144 = 3U;
	int32_t t28 = -41413;

    t28 = (x141*(x142<=(x143+x144)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint64_t x145 = 964LLU;
	static uint8_t x147 = 48U;
	volatile uint16_t x148 = 0U;
	uint64_t t29 = 322489151923LLU;

    t29 = (x145*(x146<=(x147+x148)));

    if (t29 != 964LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x149 = INT32_MIN;
	static uint16_t x150 = 3U;
	uint32_t x151 = 1671U;
	static int64_t x152 = INT64_MIN;
	static int32_t t30 = -28371115;

    t30 = (x149*(x150<=(x151+x152)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x153 = UINT16_MAX;
	static volatile uint64_t x154 = 30089823560305931LLU;
	int8_t x155 = INT8_MAX;
	static int8_t x156 = 7;

    t31 = (x153*(x154<=(x155+x156)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = -1;
	volatile uint64_t x158 = 472965LLU;
	int16_t x159 = INT16_MAX;
	uint16_t x160 = 102U;
	static int32_t t32 = -3949;

    t32 = (x157*(x158<=(x159+x160)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x161 = INT8_MAX;
	int16_t x163 = 78;
	int16_t x164 = INT16_MIN;
	int32_t t33 = -767007;

    t33 = (x161*(x162<=(x163+x164)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = -1;
	int8_t x170 = -3;
	volatile uint8_t x172 = 32U;
	int32_t t34 = -79180;

    t34 = (x169*(x170<=(x171+x172)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	uint32_t x176 = UINT32_MAX;
	int32_t t35 = 659;

    t35 = (x173*(x174<=(x175+x176)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x177 = -1;
	uint8_t x179 = 21U;
	static int32_t x180 = -2;
	int32_t t36 = 63084143;

    t36 = (x177*(x178<=(x179+x180)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x186 = INT32_MIN;
	uint8_t x187 = 10U;
	int8_t x188 = -1;
	static volatile int32_t t37 = INT32_MAX;

    t37 = (x185*(x186<=(x187+x188)));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x189 = -427;
	static int64_t x190 = INT64_MIN;
	volatile int16_t x191 = -1;
	uint32_t x192 = 22876392U;
	static int32_t t38 = -19;

    t38 = (x189*(x190<=(x191+x192)));

    if (t38 != -427) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x193 = 3433U;
	static uint64_t x194 = UINT64_MAX;
	int8_t x195 = -1;
	int16_t x196 = -1;
	int32_t t39 = 389022848;

    t39 = (x193*(x194<=(x195+x196)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x203 = UINT32_MAX;
	uint32_t t40 = 123561U;

    t40 = (x201*(x202<=(x203+x204)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x209 = INT32_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = -1;
	volatile int32_t t41 = -504;

    t41 = (x209*(x210<=(x211+x212)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x213 = UINT16_MAX;
	int64_t x214 = -1LL;
	int8_t x215 = -1;
	int32_t t42 = 11670;

    t42 = (x213*(x214<=(x215+x216)));

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x217 = -1;
	uint16_t x218 = 5406U;
	uint8_t x219 = 0U;
	uint8_t x220 = 42U;
	static int32_t t43 = 863;

    t43 = (x217*(x218<=(x219+x220)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x221 = 392;
	int8_t x222 = 0;
	static volatile uint8_t x224 = 15U;

    t44 = (x221*(x222<=(x223+x224)));

    if (t44 != 392) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x225 = -1;
	int64_t x226 = INT64_MAX;
	static volatile int64_t x227 = 0LL;
	int32_t x228 = 2301;
	static volatile int32_t t45 = 38347;

    t45 = (x225*(x226<=(x227+x228)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MAX;
	int64_t t46 = INT64_MIN;

    t46 = (x229*(x230<=(x231+x232)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x233 = INT8_MIN;
	static uint16_t x234 = 22U;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = 382330782940319908LL;

    t47 = (x233*(x234<=(x235+x236)));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x239 = INT8_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	volatile int32_t t48 = -55591612;

    t48 = (x237*(x238<=(x239+x240)));

    if (t48 != 11692) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x244 = 0;
	volatile int32_t t49 = 1;

    t49 = (x241*(x242<=(x243+x244)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x245 = 301U;
	static int32_t x247 = -8883;
	static int8_t x248 = INT8_MAX;
	int32_t t50 = -206215910;

    t50 = (x245*(x246<=(x247+x248)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = 1;
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t51 = 2;

    t51 = (x249*(x250<=(x251+x252)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MIN;
	static int32_t x259 = -1;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t52 = 49;

    t52 = (x257*(x258<=(x259+x260)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = 20LLU;
	int8_t x264 = INT8_MIN;
	static uint64_t t53 = 3479395316415LLU;

    t53 = (x261*(x262<=(x263+x264)));

    if (t53 != 1664491933153LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	volatile uint8_t x267 = 25U;
	int16_t x268 = -13;
	volatile int32_t t54 = -41608;

    t54 = (x265*(x266<=(x267+x268)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = INT16_MAX;
	uint16_t x270 = 0U;
	static uint8_t x271 = 2U;
	int16_t x272 = INT16_MIN;

    t55 = (x269*(x270<=(x271+x272)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x273 = 164885860279LL;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int64_t x276 = -14704694098838785LL;
	static volatile int64_t t56 = -1LL;

    t56 = (x273*(x274<=(x275+x276)));

    if (t56 != 164885860279LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x277 = 672LL;
	int64_t x278 = INT64_MAX;
	int64_t x280 = INT64_MIN;
	static int64_t t57 = 42137LL;

    t57 = (x277*(x278<=(x279+x280)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x281 = -56;
	volatile int8_t x282 = 14;
	volatile uint16_t x283 = UINT16_MAX;
	volatile int32_t t58 = 4037;

    t58 = (x281*(x282<=(x283+x284)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x285 = UINT64_MAX;
	int64_t x286 = -122862LL;
	uint8_t x287 = 73U;
	int16_t x288 = INT16_MIN;
	uint64_t t59 = UINT64_MAX;

    t59 = (x285*(x286<=(x287+x288)));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x290 = -1;
	static int16_t x292 = INT16_MAX;
	int32_t t60 = INT32_MIN;

    t60 = (x289*(x290<=(x291+x292)));

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x297 = -3;
	uint64_t x298 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1;
	volatile int32_t t61 = -9;

    t61 = (x297*(x298<=(x299+x300)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x301 = INT32_MIN;
	static int8_t x302 = INT8_MAX;
	int32_t x303 = 113;
	int32_t t62 = -10189289;

    t62 = (x301*(x302<=(x303+x304)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x305 = 0;
	static int64_t x306 = -1LL;
	int8_t x307 = -1;
	uint32_t x308 = UINT32_MAX;

    t63 = (x305*(x306<=(x307+x308)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = INT16_MIN;
	volatile int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MAX;
	int16_t x312 = -17;
	volatile int32_t t64 = -457598;

    t64 = (x309*(x310<=(x311+x312)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x313 = INT32_MAX;
	int64_t x314 = INT64_MIN;
	static int32_t x315 = INT32_MAX;
	int32_t t65 = INT32_MAX;

    t65 = (x313*(x314<=(x315+x316)));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x318 = INT16_MAX;
	volatile uint16_t x319 = UINT16_MAX;
	static volatile int64_t x320 = -33167825LL;

    t66 = (x317*(x318<=(x319+x320)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x321 = INT16_MIN;
	uint16_t x322 = UINT16_MAX;
	static int32_t x323 = INT32_MAX;
	int32_t x324 = -5625;
	volatile int32_t t67 = -44098;

    t67 = (x321*(x322<=(x323+x324)));

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x326 = 1U;
	static int8_t x328 = INT8_MAX;
	int64_t t68 = INT64_MIN;

    t68 = (x325*(x326<=(x327+x328)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x331 = INT16_MIN;
	uint64_t x332 = 4233LLU;
	volatile int32_t t69 = -3610;

    t69 = (x329*(x330<=(x331+x332)));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x334 = 0U;
	int16_t x335 = INT16_MIN;
	static int32_t x336 = -1;
	int32_t t70 = -26447820;

    t70 = (x333*(x334<=(x335+x336)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x341 = -1;
	static uint64_t x342 = 226471LLU;
	volatile int16_t x343 = INT16_MIN;
	volatile int32_t t71 = 10648;

    t71 = (x341*(x342<=(x343+x344)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x345 = -8;
	uint64_t x346 = 994228044LLU;
	int16_t x347 = INT16_MIN;

    t72 = (x345*(x346<=(x347+x348)));

    if (t72 != -8) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x350 = 28U;
	int8_t x351 = -47;
	int32_t x352 = INT32_MAX;
	static int32_t t73 = 130;

    t73 = (x349*(x350<=(x351+x352)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x357 = INT32_MAX;
	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = UINT8_MAX;
	uint32_t x360 = UINT32_MAX;
	int32_t t74 = 649666665;

    t74 = (x357*(x358<=(x359+x360)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x361 = -1LL;
	int32_t x362 = -1;
	volatile int32_t x364 = 3077561;
	int64_t t75 = 173671834865472LL;

    t75 = (x361*(x362<=(x363+x364)));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x365 = 58081804976396223LLU;
	static uint16_t x366 = 11477U;
	volatile int16_t x367 = 1070;
	int16_t x368 = -1;

    t76 = (x365*(x366<=(x367+x368)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x369 = INT16_MAX;
	volatile uint32_t x370 = 0U;
	uint32_t x371 = UINT32_MAX;

    t77 = (x369*(x370<=(x371+x372)));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x373 = -2670;
	static int64_t x374 = INT64_MIN;
	int8_t x375 = -45;
	int32_t t78 = 6497108;

    t78 = (x373*(x374<=(x375+x376)));

    if (t78 != -2670) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x377 = INT64_MAX;
	int8_t x378 = -1;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MAX;

    t79 = (x377*(x378<=(x379+x380)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x383 = 324495LLU;
	int8_t x384 = INT8_MIN;
	int64_t t80 = 1LL;

    t80 = (x381*(x382<=(x383+x384)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x385 = -23;
	int8_t x388 = INT8_MIN;
	int32_t t81 = -60469138;

    t81 = (x385*(x386<=(x387+x388)));

    if (t81 != -23) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x390 = INT16_MIN;
	int32_t x391 = -1;
	int16_t x392 = -1;
	volatile int32_t t82 = 21;

    t82 = (x389*(x390<=(x391+x392)));

    if (t82 != 12340) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x393 = -72;
	uint16_t x394 = 117U;
	int64_t x395 = INT64_MAX;
	uint64_t x396 = 783694900911335429LLU;

    t83 = (x393*(x394<=(x395+x396)));

    if (t83 != -72) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x397 = 48693423U;
	int64_t x399 = INT64_MAX;
	static int16_t x400 = -11308;
	uint32_t t84 = 384639U;

    t84 = (x397*(x398<=(x399+x400)));

    if (t84 != 48693423U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x402 = UINT8_MAX;
	uint64_t x403 = 7458447LLU;
	volatile int32_t t85 = 8740;

    t85 = (x401*(x402<=(x403+x404)));

    if (t85 != 3203) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x405 = 7724204LLU;
	volatile int8_t x406 = 10;
	int32_t x408 = INT32_MIN;
	volatile uint64_t t86 = 5LLU;

    t86 = (x405*(x406<=(x407+x408)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x413 = INT8_MIN;
	static int32_t x414 = -1;
	static uint32_t x415 = 308U;
	uint32_t x416 = 20832465U;

    t87 = (x413*(x414<=(x415+x416)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x418 = INT32_MAX;
	int64_t t88 = 1042120716541483LL;

    t88 = (x417*(x418<=(x419+x420)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x421 = UINT64_MAX;
	uint16_t x422 = 2U;
	static volatile int32_t x423 = -1;
	static int8_t x424 = -13;
	uint64_t t89 = 26LLU;

    t89 = (x421*(x422<=(x423+x424)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x425 = INT64_MIN;
	uint16_t x426 = 7U;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 3U;

    t90 = (x425*(x426<=(x427+x428)));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x430 = INT16_MIN;
	int16_t x431 = -1;
	uint8_t x432 = 115U;
	volatile int32_t t91 = 742247676;

    t91 = (x429*(x430<=(x431+x432)));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x433 = INT16_MIN;
	static int16_t x434 = INT16_MIN;
	volatile uint16_t x436 = 43U;
	int32_t t92 = 2791;

    t92 = (x433*(x434<=(x435+x436)));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x437 = 7;
	int8_t x438 = -3;
	volatile int64_t x439 = -3183237966LL;
	static volatile int32_t t93 = 430052033;

    t93 = (x437*(x438<=(x439+x440)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x441 = UINT32_MAX;
	uint64_t x443 = UINT64_MAX;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (x441*(x442<=(x443+x444)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = INT64_MAX;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = -1;
	uint32_t x448 = 11U;
	int64_t t95 = 4067LL;

    t95 = (x445*(x446<=(x447+x448)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x449 = 6382644752023805353LLU;
	int16_t x450 = -561;
	uint16_t x451 = 54U;
	uint16_t x452 = 236U;

    t96 = (x449*(x450<=(x451+x452)));

    if (t96 != 6382644752023805353LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x453 = 10U;
	int8_t x454 = -60;
	uint16_t x455 = UINT16_MAX;
	static volatile int32_t x456 = -12929233;
	uint32_t t97 = 8U;

    t97 = (x453*(x454<=(x455+x456)));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x457 = INT64_MAX;
	uint16_t x458 = UINT16_MAX;
	uint32_t x459 = 15659086U;
	static int8_t x460 = INT8_MAX;
	static int64_t t98 = INT64_MAX;

    t98 = (x457*(x458<=(x459+x460)));

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x461 = 1;
	int16_t x462 = INT16_MIN;
	volatile uint8_t x463 = UINT8_MAX;
	int64_t x464 = INT64_MIN;
	volatile int32_t t99 = 2000189;

    t99 = (x461*(x462<=(x463+x464)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x465 = -28;
	static volatile uint32_t x466 = 338423U;
	static volatile uint32_t x467 = UINT32_MAX;

    t100 = (x465*(x466<=(x467+x468)));

    if (t100 != -28) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x469 = INT32_MIN;
	uint32_t x470 = 893729513U;
	int16_t x472 = -1;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x469*(x470<=(x471+x472)));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x473 = 18558;
	uint16_t x474 = 810U;
	int8_t x475 = INT8_MAX;
	int16_t x476 = 4;
	static volatile int32_t t102 = 251189;

    t102 = (x473*(x474<=(x475+x476)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x477 = INT8_MAX;
	volatile int32_t x478 = -26;
	volatile int16_t x479 = -4261;
	static int16_t x480 = INT16_MAX;
	int32_t t103 = -21;

    t103 = (x477*(x478<=(x479+x480)));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x481 = UINT8_MAX;
	int32_t x482 = -6545;
	uint8_t x483 = 0U;
	static volatile int16_t x484 = INT16_MIN;
	int32_t t104 = 457190;

    t104 = (x481*(x482<=(x483+x484)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x485 = INT8_MAX;
	uint16_t x486 = 884U;
	uint64_t x487 = 1094281892LLU;
	static volatile int32_t t105 = -2;

    t105 = (x485*(x486<=(x487+x488)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x499 = -581;
	int8_t x500 = INT8_MIN;
	volatile int64_t t106 = 38308917907732LL;

    t106 = (x497*(x498<=(x499+x500)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x506 = -1LL;
	static uint8_t x507 = UINT8_MAX;
	uint64_t x508 = 1123641809921341542LLU;
	volatile int32_t t107 = -210291783;

    t107 = (x505*(x506<=(x507+x508)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x509 = -1;
	int8_t x510 = INT8_MIN;
	volatile uint16_t x511 = 5083U;
	uint32_t x512 = UINT32_MAX;
	int32_t t108 = 49691068;

    t108 = (x509*(x510<=(x511+x512)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x517 = INT8_MAX;
	int8_t x518 = -1;
	uint32_t x519 = 1U;
	volatile int64_t x520 = 554LL;
	volatile int32_t t109 = -9695;

    t109 = (x517*(x518<=(x519+x520)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x521 = -1;
	int32_t x522 = INT32_MIN;
	int16_t x523 = -1;
	static int8_t x524 = INT8_MIN;
	volatile int32_t t110 = -10299;

    t110 = (x521*(x522<=(x523+x524)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x525 = UINT8_MAX;
	uint64_t x526 = 99260795015886369LLU;
	volatile int8_t x527 = INT8_MIN;
	static int8_t x528 = INT8_MAX;
	volatile int32_t t111 = 781416;

    t111 = (x525*(x526<=(x527+x528)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x529 = -1;
	volatile int16_t x530 = INT16_MAX;
	int64_t x531 = -11LL;
	int32_t t112 = 29;

    t112 = (x529*(x530<=(x531+x532)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x533 = INT8_MIN;
	uint64_t x534 = 1267LLU;
	uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	static int32_t t113 = -313819150;

    t113 = (x533*(x534<=(x535+x536)));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x537 = INT8_MAX;
	uint32_t x539 = 5323406U;
	static int16_t x540 = -3761;
	int32_t t114 = -50244631;

    t114 = (x537*(x538<=(x539+x540)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x545 = INT16_MIN;
	int16_t x547 = INT16_MIN;
	static volatile int32_t x548 = -3617;
	int32_t t115 = -143352153;

    t115 = (x545*(x546<=(x547+x548)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x553 = INT8_MIN;
	uint8_t x554 = UINT8_MAX;
	volatile int64_t x555 = -1LL;
	volatile int16_t x556 = INT16_MIN;
	int32_t t116 = -27762;

    t116 = (x553*(x554<=(x555+x556)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x557 = -1LL;
	uint16_t x558 = 0U;
	uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;
	volatile int64_t t117 = 926273LL;

    t117 = (x557*(x558<=(x559+x560)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x561 = -12357;
	volatile uint64_t x562 = 2056584LLU;
	uint16_t x563 = 1U;
	int16_t x564 = -1;
	volatile int32_t t118 = 9084898;

    t118 = (x561*(x562<=(x563+x564)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x565 = INT8_MAX;
	uint32_t x566 = 150U;
	uint64_t x567 = UINT64_MAX;
	int32_t x568 = -3;
	volatile int32_t t119 = 19;

    t119 = (x565*(x566<=(x567+x568)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x569 = UINT8_MAX;
	static volatile uint64_t x570 = UINT64_MAX;
	static volatile int32_t t120 = -206488017;

    t120 = (x569*(x570<=(x571+x572)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x573 = -16715;
	int64_t x574 = INT64_MIN;

    t121 = (x573*(x574<=(x575+x576)));

    if (t121 != -16715) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x581 = -1;
	uint16_t x583 = UINT16_MAX;
	int32_t x584 = INT32_MIN;

    t122 = (x581*(x582<=(x583+x584)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x586 = INT8_MAX;
	static int8_t x587 = -1;
	volatile int64_t x588 = INT64_MAX;
	int64_t t123 = -2541LL;

    t123 = (x585*(x586<=(x587+x588)));

    if (t123 != -625875930683886137LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x589 = INT64_MAX;
	int64_t x590 = INT64_MAX;
	int64_t x591 = -370077233427LL;
	int64_t t124 = -1860558089231LL;

    t124 = (x589*(x590<=(x591+x592)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x593 = INT8_MAX;
	static int16_t x594 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t125 = 71851963;

    t125 = (x593*(x594<=(x595+x596)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x597 = -99495LL;
	int32_t x598 = -6023265;
	volatile uint32_t x600 = 5547059U;

    t126 = (x597*(x598<=(x599+x600)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x603 = 1592;
	int32_t x604 = 0;
	int32_t t127 = -478435530;

    t127 = (x601*(x602<=(x603+x604)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x605 = INT32_MIN;
	int64_t x606 = INT64_MAX;
	int16_t x607 = INT16_MAX;
	int8_t x608 = 1;
	int32_t t128 = 2279464;

    t128 = (x605*(x606<=(x607+x608)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x609 = INT32_MIN;
	int8_t x610 = INT8_MIN;
	int64_t x611 = INT64_MIN;
	uint8_t x612 = 41U;
	int32_t t129 = 5;

    t129 = (x609*(x610<=(x611+x612)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x613 = 1403857U;
	uint16_t x615 = 65U;

    t130 = (x613*(x614<=(x615+x616)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x617 = 14;
	volatile uint8_t x618 = 100U;
	int32_t x619 = -1;
	uint32_t x620 = 1079U;

    t131 = (x617*(x618<=(x619+x620)));

    if (t131 != 14) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x621 = -215;
	int8_t x622 = -1;
	static int32_t x623 = INT32_MIN;
	volatile int32_t t132 = -42625;

    t132 = (x621*(x622<=(x623+x624)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x627 = 889082840874LLU;
	int16_t x628 = INT16_MIN;
	volatile int32_t t133 = -110392;

    t133 = (x625*(x626<=(x627+x628)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x630 = INT16_MIN;
	uint16_t x631 = UINT16_MAX;
	static volatile int32_t x632 = INT32_MIN;
	uint32_t t134 = 170470135U;

    t134 = (x629*(x630<=(x631+x632)));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x638 = 20U;
	int16_t x639 = 2;
	int8_t x640 = INT8_MAX;
	static volatile uint32_t t135 = 5U;

    t135 = (x637*(x638<=(x639+x640)));

    if (t135 != 2U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x641 = -1;
	int64_t x642 = INT64_MIN;
	int16_t x643 = -25;
	volatile int16_t x644 = INT16_MIN;

    t136 = (x641*(x642<=(x643+x644)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x645 = 125U;
	volatile int32_t x646 = INT32_MAX;
	int8_t x647 = -8;
	int32_t x648 = INT32_MAX;

    t137 = (x645*(x646<=(x647+x648)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x649 = 0U;
	int64_t x651 = -1LL;
	static int64_t x652 = INT64_MAX;
	volatile int32_t t138 = -25756;

    t138 = (x649*(x650<=(x651+x652)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	volatile int64_t x654 = INT64_MIN;
	int8_t x655 = INT8_MIN;
	uint16_t x656 = 684U;

    t139 = (x653*(x654<=(x655+x656)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x657 = -1;
	int16_t x658 = INT16_MAX;
	int64_t x660 = 1316932492LL;
	int32_t t140 = 3949;

    t140 = (x657*(x658<=(x659+x660)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x661 = INT32_MAX;
	static int16_t x662 = -18;
	uint16_t x663 = UINT16_MAX;
	int32_t t141 = 0;

    t141 = (x661*(x662<=(x663+x664)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x665 = INT8_MIN;
	uint64_t x666 = 754LLU;

    t142 = (x665*(x666<=(x667+x668)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x669 = UINT16_MAX;
	int32_t x671 = INT32_MAX;
	int32_t x672 = INT32_MIN;
	volatile int32_t t143 = 19137;

    t143 = (x669*(x670<=(x671+x672)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x674 = 27;
	volatile uint16_t x675 = 1608U;
	static int16_t x676 = INT16_MIN;
	volatile int32_t t144 = 24673;

    t144 = (x673*(x674<=(x675+x676)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x677 = 268U;
	uint32_t x678 = 1820629333U;
	uint8_t x679 = 13U;
	int8_t x680 = INT8_MIN;
	static volatile int32_t t145 = 5;

    t145 = (x677*(x678<=(x679+x680)));

    if (t145 != 268) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x685 = INT64_MAX;
	int32_t x688 = -1;

    t146 = (x685*(x686<=(x687+x688)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x689 = 2927LLU;
	int64_t x691 = 66159LL;
	uint16_t x692 = 6U;
	uint64_t t147 = 102302598054051630LLU;

    t147 = (x689*(x690<=(x691+x692)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x693 = 14LL;
	static int64_t x696 = 144272258504LL;
	int64_t t148 = -364726009201LL;

    t148 = (x693*(x694<=(x695+x696)));

    if (t148 != 14LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x697 = INT8_MAX;
	int16_t x698 = INT16_MIN;
	int16_t x700 = INT16_MAX;
	int32_t t149 = 1173;

    t149 = (x697*(x698<=(x699+x700)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x701 = -1;
	volatile int64_t x702 = INT64_MIN;
	int32_t x704 = -1;
	int32_t t150 = 107;

    t150 = (x701*(x702<=(x703+x704)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x709 = 0;
	uint16_t x710 = UINT16_MAX;
	uint8_t x711 = UINT8_MAX;
	static volatile uint16_t x712 = UINT16_MAX;
	static int32_t t151 = -581;

    t151 = (x709*(x710<=(x711+x712)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x713 = 7147316898LLU;
	uint32_t x714 = UINT32_MAX;
	static uint8_t x715 = 1U;
	int64_t x716 = -32052720900625014LL;
	volatile uint64_t t152 = 2235958073381219720LLU;

    t152 = (x713*(x714<=(x715+x716)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x717 = 12045;
	uint32_t x718 = UINT32_MAX;
	volatile int32_t t153 = 986430029;

    t153 = (x717*(x718<=(x719+x720)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x721 = -3LL;
	uint64_t x722 = UINT64_MAX;
	uint32_t x723 = 1809449942U;
	static volatile int8_t x724 = -1;
	volatile int64_t t154 = 1439079LL;

    t154 = (x721*(x722<=(x723+x724)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x727 = INT8_MIN;
	volatile int32_t x728 = INT32_MAX;
	int64_t t155 = INT64_MIN;

    t155 = (x725*(x726<=(x727+x728)));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x729 = 6;
	static int64_t x730 = -7069120242LL;
	static volatile uint64_t x731 = 757404LLU;
	int16_t x732 = INT16_MIN;
	volatile int32_t t156 = -228053;

    t156 = (x729*(x730<=(x731+x732)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x733 = 2U;
	static int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MAX;
	static volatile int32_t t157 = -2331170;

    t157 = (x733*(x734<=(x735+x736)));

    if (t157 != 2) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x741 = -1;
	volatile uint16_t x742 = UINT16_MAX;
	static int64_t x743 = 792910506009420LL;
	int32_t x744 = INT32_MIN;
	static int32_t t158 = 2;

    t158 = (x741*(x742<=(x743+x744)));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x745 = INT32_MIN;
	int16_t x746 = -1;
	static int16_t x748 = INT16_MIN;
	volatile int32_t t159 = 1;

    t159 = (x745*(x746<=(x747+x748)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x749 = -15;
	static uint8_t x750 = 0U;
	int64_t x751 = -1LL;
	int16_t x752 = INT16_MIN;
	volatile int32_t t160 = 1;

    t160 = (x749*(x750<=(x751+x752)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x753 = INT64_MIN;
	int16_t x754 = INT16_MIN;
	volatile int64_t x756 = -1275LL;
	volatile int64_t t161 = INT64_MIN;

    t161 = (x753*(x754<=(x755+x756)));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int64_t x758 = INT64_MIN;
	int16_t x760 = INT16_MAX;

    t162 = (x757*(x758<=(x759+x760)));

    if (t162 != 255) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x761 = 1606U;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = 49U;
	int32_t t163 = 11788244;

    t163 = (x761*(x762<=(x763+x764)));

    if (t163 != 1606) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x765 = -3857146449229LL;
	uint64_t x768 = 7627LLU;
	volatile int64_t t164 = 1963977885LL;

    t164 = (x765*(x766<=(x767+x768)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x769 = 0U;
	uint32_t x770 = 561325U;
	int32_t x771 = INT32_MIN;
	static int32_t t165 = 61507071;

    t165 = (x769*(x770<=(x771+x772)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x774 = 356352811993035LL;
	int16_t x775 = INT16_MIN;
	int16_t x776 = 1;
	static int64_t t166 = -375281082LL;

    t166 = (x773*(x774<=(x775+x776)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x777 = -1;
	volatile uint32_t x778 = UINT32_MAX;
	uint32_t x779 = UINT32_MAX;
	int32_t x780 = 4162959;

    t167 = (x777*(x778<=(x779+x780)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x781 = -1LL;
	volatile int16_t x782 = -5;
	volatile int16_t x784 = -1455;
	int64_t t168 = -16229414LL;

    t168 = (x781*(x782<=(x783+x784)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x785 = INT64_MIN;
	int8_t x787 = -1;
	static int16_t x788 = INT16_MAX;
	static int64_t t169 = INT64_MIN;

    t169 = (x785*(x786<=(x787+x788)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x793 = 1692;
	volatile int32_t x794 = -5337;
	volatile int32_t x795 = -1;
	volatile int32_t t170 = 0;

    t170 = (x793*(x794<=(x795+x796)));

    if (t170 != 1692) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x797 = UINT32_MAX;
	volatile int16_t x798 = INT16_MIN;
	uint32_t x799 = 1458149U;
	static uint8_t x800 = 122U;
	volatile uint32_t t171 = 1837701U;

    t171 = (x797*(x798<=(x799+x800)));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile int64_t x802 = 82599988LL;
	static int32_t x803 = INT32_MAX;
	volatile int8_t x804 = INT8_MIN;
	uint64_t t172 = UINT64_MAX;

    t172 = (x801*(x802<=(x803+x804)));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x805 = 458027U;
	uint32_t x806 = 595928641U;
	int32_t x807 = INT32_MIN;
	static uint16_t x808 = 27U;
	uint32_t t173 = 1U;

    t173 = (x805*(x806<=(x807+x808)));

    if (t173 != 458027U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x809 = INT64_MAX;
	int64_t x810 = INT64_MIN;
	int8_t x811 = 1;
	int8_t x812 = 1;
	volatile int64_t t174 = INT64_MAX;

    t174 = (x809*(x810<=(x811+x812)));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x817 = -1LL;
	uint8_t x818 = 4U;
	volatile int32_t x819 = -1;
	int64_t x820 = 780536275852LL;
	int64_t t175 = -60849085LL;

    t175 = (x817*(x818<=(x819+x820)));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x821 = 0LLU;
	int8_t x822 = -45;
	volatile uint64_t t176 = 66439155252993LLU;

    t176 = (x821*(x822<=(x823+x824)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x825 = INT8_MIN;
	uint16_t x826 = 18U;
	uint64_t x827 = UINT64_MAX;
	volatile int8_t x828 = 21;
	static int32_t t177 = -5644;

    t177 = (x825*(x826<=(x827+x828)));

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x829 = 251;
	static int8_t x830 = -1;
	int16_t x831 = INT16_MIN;
	volatile uint64_t x832 = 23251379LLU;
	volatile int32_t t178 = -110;

    t178 = (x829*(x830<=(x831+x832)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x833 = 27964;
	uint8_t x835 = 1U;
	uint16_t x836 = 433U;
	int32_t t179 = -805391;

    t179 = (x833*(x834<=(x835+x836)));

    if (t179 != 27964) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x838 = -1;
	static uint32_t x839 = UINT32_MAX;
	int64_t x840 = INT64_MIN;

    t180 = (x837*(x838<=(x839+x840)));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x841 = UINT8_MAX;
	uint16_t x842 = 8419U;
	uint16_t x843 = 92U;
	int32_t x844 = INT32_MIN;
	int32_t t181 = -3884852;

    t181 = (x841*(x842<=(x843+x844)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x849 = UINT16_MAX;
	int16_t x851 = INT16_MIN;
	static int8_t x852 = -4;
	volatile int32_t t182 = -10519;

    t182 = (x849*(x850<=(x851+x852)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x853 = 3U;
	volatile int8_t x854 = INT8_MIN;
	static int32_t x855 = -1;
	static volatile uint8_t x856 = UINT8_MAX;

    t183 = (x853*(x854<=(x855+x856)));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x858 = UINT16_MAX;
	uint8_t x859 = 13U;
	volatile int32_t t184 = -1039;

    t184 = (x857*(x858<=(x859+x860)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x861 = -1LL;
	static volatile int16_t x862 = -1;
	volatile uint8_t x863 = 3U;
	static int16_t x864 = 1;
	static volatile int64_t t185 = -5544846406729LL;

    t185 = (x861*(x862<=(x863+x864)));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x865 = -1;
	int64_t x866 = 526LL;
	int16_t x867 = INT16_MAX;
	uint32_t x868 = UINT32_MAX;
	static volatile int32_t t186 = 13616;

    t186 = (x865*(x866<=(x867+x868)));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = INT16_MIN;
	int32_t x870 = INT32_MIN;
	volatile int8_t x872 = -1;

    t187 = (x869*(x870<=(x871+x872)));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x877 = INT16_MIN;
	static int32_t x879 = -6;
	int32_t t188 = -121706991;

    t188 = (x877*(x878<=(x879+x880)));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x881 = INT32_MAX;
	uint8_t x883 = 1U;
	static int32_t t189 = INT32_MAX;

    t189 = (x881*(x882<=(x883+x884)));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x885 = INT64_MAX;
	static volatile int16_t x886 = 35;
	static uint32_t x887 = 636U;
	static int64_t x888 = INT64_MIN;

    t190 = (x885*(x886<=(x887+x888)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x897 = 54981906;
	int64_t x899 = -28063LL;
	int32_t x900 = -42233427;
	int32_t t191 = -536144716;

    t191 = (x897*(x898<=(x899+x900)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x901 = INT32_MAX;
	int16_t x902 = 1;
	int8_t x903 = INT8_MAX;
	static int32_t x904 = -1;
	int32_t t192 = INT32_MAX;

    t192 = (x901*(x902<=(x903+x904)));

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x905 = 15551U;
	int8_t x906 = -1;
	uint64_t x907 = UINT64_MAX;
	int32_t x908 = 8176874;
	static volatile int32_t t193 = -868971;

    t193 = (x905*(x906<=(x907+x908)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x909 = INT64_MIN;
	volatile int32_t x910 = INT32_MIN;
	int64_t t194 = -5740338074LL;

    t194 = (x909*(x910<=(x911+x912)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x913 = INT32_MAX;
	int8_t x914 = INT8_MIN;
	volatile uint32_t x915 = UINT32_MAX;

    t195 = (x913*(x914<=(x915+x916)));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x925 = -3;
	volatile int64_t x926 = INT64_MIN;
	static uint64_t x927 = 1181LLU;
	uint64_t x928 = 193002066733926LLU;

    t196 = (x925*(x926<=(x927+x928)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x933 = 0U;
	static int32_t x934 = -1396;
	int32_t x936 = -4359;

    t197 = (x933*(x934<=(x935+x936)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x941 = 458248137U;
	uint16_t x943 = 0U;
	uint32_t x944 = UINT32_MAX;
	uint32_t t198 = 15U;

    t198 = (x941*(x942<=(x943+x944)));

    if (t198 != 458248137U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x945 = -46;
	volatile int64_t x946 = INT64_MIN;
	uint8_t x947 = UINT8_MAX;

    t199 = (x945*(x946<=(x947+x948)));

    if (t199 != -46) { NG(); } else { ; }
	
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

