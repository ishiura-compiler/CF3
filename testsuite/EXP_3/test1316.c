
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

int64_t x2 = INT64_MIN;
volatile uint32_t x3 = 195U;
uint16_t x4 = 21U;
static int32_t x7 = INT32_MIN;
int64_t x9 = INT64_MAX;
int16_t x14 = 5821;
uint16_t x18 = UINT16_MAX;
uint8_t x22 = 14U;
volatile int64_t x23 = INT64_MIN;
volatile int32_t t5 = -3;
volatile int32_t x27 = 26672686;
int32_t t6 = -7917015;
static int32_t x34 = INT32_MAX;
volatile uint8_t x35 = 6U;
uint16_t x36 = 0U;
static int8_t x37 = INT8_MIN;
int32_t x49 = INT32_MIN;
int64_t x50 = INT64_MAX;
int32_t x54 = INT32_MIN;
int32_t x58 = 54867125;
uint64_t x62 = UINT64_MAX;
uint8_t x63 = 7U;
uint64_t x64 = UINT64_MAX;
int16_t x76 = -1;
static volatile int32_t t19 = 593942;
volatile int32_t t20 = 1365935;
int32_t t21 = -13;
static volatile int8_t x90 = INT8_MIN;
int8_t x91 = -3;
volatile uint32_t x96 = 18285U;
static volatile int32_t t23 = 2733354;
int32_t x99 = INT32_MIN;
volatile int8_t x100 = 1;
static int32_t x101 = -1;
volatile int8_t x102 = -1;
static uint32_t x104 = UINT32_MAX;
static uint16_t x108 = 308U;
static uint8_t x110 = 112U;
volatile int32_t t28 = -124189038;
volatile int8_t x121 = INT8_MAX;
uint64_t x122 = UINT64_MAX;
int32_t x135 = -390757744;
int8_t x140 = INT8_MIN;
int64_t x143 = INT64_MIN;
static int16_t x145 = -1;
int64_t x150 = 1909892398882798108LL;
volatile int8_t x151 = INT8_MAX;
volatile int32_t x152 = -238460255;
uint32_t x156 = 634590U;
volatile uint8_t x158 = UINT8_MAX;
static int32_t t39 = 1939971;
int64_t x174 = INT64_MIN;
int64_t x179 = INT64_MIN;
static uint64_t x188 = UINT64_MAX;
int16_t x191 = -55;
volatile int32_t t48 = -281236;
volatile uint32_t x200 = 54573U;
int32_t x207 = 1;
static volatile uint8_t x208 = UINT8_MAX;
int8_t x209 = INT8_MIN;
int32_t x217 = 94;
int32_t x222 = INT32_MIN;
int32_t t55 = -906;
volatile uint64_t x225 = 1605623846683LLU;
int64_t x226 = INT64_MAX;
int32_t x227 = INT32_MIN;
static volatile uint64_t x230 = 129174716052632150LLU;
int16_t x234 = INT16_MIN;
static int16_t x236 = INT16_MAX;
volatile uint32_t x241 = UINT32_MAX;
static int16_t x242 = 6895;
static volatile uint16_t x244 = UINT16_MAX;
volatile int32_t t60 = -259866;
uint32_t x250 = UINT32_MAX;
static volatile int64_t x251 = -1LL;
int16_t x252 = 185;
uint8_t x253 = 14U;
uint8_t x255 = 3U;
volatile uint8_t x257 = 22U;
int64_t x258 = INT64_MAX;
volatile uint8_t x259 = 10U;
int32_t t65 = 57;
static volatile int32_t x265 = INT32_MIN;
uint16_t x268 = UINT16_MAX;
volatile int64_t x269 = INT64_MAX;
volatile int32_t t67 = -57782;
static int32_t t70 = 394421931;
int8_t x287 = INT8_MIN;
int32_t t71 = 0;
uint16_t x290 = UINT16_MAX;
static int16_t x291 = -1;
int32_t t73 = 22820963;
uint16_t x297 = 158U;
volatile int32_t t74 = -48178396;
int32_t t75 = 3563435;
static volatile uint64_t x305 = 14868791943065661LLU;
uint32_t x309 = 128921U;
uint32_t x310 = 37512U;
volatile uint32_t x313 = UINT32_MAX;
uint8_t x316 = 1U;
static int32_t t78 = -1;
static int64_t x317 = INT64_MAX;
int16_t x318 = INT16_MAX;
int64_t x320 = -455170882LL;
int32_t x323 = INT32_MAX;
int8_t x326 = 0;
static uint64_t x330 = 3LLU;
volatile uint64_t x335 = 1LLU;
volatile int32_t x346 = -1;
int32_t t86 = -42840;
uint32_t x350 = 27350625U;
volatile int32_t t87 = 0;
uint16_t x354 = 6605U;
uint64_t x356 = 13323023LLU;
volatile int32_t t88 = -465;
int64_t x364 = -1054871354581867LL;
volatile int32_t t90 = 2493;
uint8_t x365 = UINT8_MAX;
uint32_t x368 = 478707U;
int32_t t93 = 4732892;
int32_t t94 = -466795;
int32_t x383 = INT32_MIN;
volatile int32_t t95 = -73;
int64_t x387 = INT64_MIN;
static uint8_t x388 = 7U;
uint8_t x389 = 33U;
static uint64_t x397 = UINT64_MAX;
int8_t x402 = -1;
int16_t x406 = -1;
int32_t x408 = INT32_MIN;
int16_t x411 = INT16_MIN;
static volatile uint64_t x414 = 9173470997820242622LLU;
int8_t x415 = 38;
volatile int32_t t105 = -3;
int8_t x428 = -1;
static volatile int32_t t106 = -4959210;
volatile uint8_t x435 = 13U;
int64_t x438 = -697319491LL;
static volatile int32_t x446 = INT32_MAX;
uint64_t x449 = 2LLU;
int8_t x464 = 0;
int8_t x466 = -1;
static volatile int32_t x468 = INT32_MIN;
volatile int32_t t116 = -276042;
volatile uint8_t x481 = 55U;
static int64_t x500 = INT64_MIN;
volatile int32_t t125 = -3742;
uint32_t x507 = 3111U;
int32_t x515 = -1;
static volatile uint16_t x519 = UINT16_MAX;
int16_t x530 = INT16_MIN;
volatile int32_t t133 = -90667;
int64_t x538 = INT64_MAX;
int32_t x540 = 5447;
volatile int32_t t134 = 36;
static uint32_t x541 = UINT32_MAX;
int32_t x544 = INT32_MIN;
volatile uint32_t x545 = 10728834U;
int16_t x548 = -1;
int64_t x550 = INT64_MIN;
int16_t x559 = -1;
volatile int32_t t140 = -7;
uint64_t x565 = 102007LLU;
uint32_t x566 = UINT32_MAX;
int8_t x570 = -1;
static uint64_t x579 = 5LLU;
int16_t x583 = INT16_MAX;
volatile int32_t t145 = 15369396;
uint64_t x586 = 176134949996898LLU;
static volatile int32_t x589 = -1;
static volatile int64_t x597 = INT64_MIN;
static volatile int32_t t150 = -14099224;
int8_t x608 = -1;
volatile int32_t t152 = 277;
uint8_t x613 = UINT8_MAX;
static uint16_t x620 = 11U;
int32_t t154 = 4239745;
volatile uint16_t x624 = UINT16_MAX;
static int32_t t156 = -207;
static int32_t x633 = -1;
int16_t x638 = INT16_MIN;
uint8_t x641 = 100U;
int32_t x643 = INT32_MAX;
volatile int32_t t160 = 63494;
int8_t x651 = 0;
int64_t x653 = -1LL;
volatile uint64_t x656 = UINT64_MAX;
uint64_t x659 = 138143580582838465LLU;
int32_t x664 = 199136;
static uint8_t x667 = 1U;
static int32_t x670 = INT32_MAX;
int32_t t167 = 144663588;
int8_t x673 = 0;
uint64_t x687 = 25442LLU;
static volatile int32_t t171 = -314;
int64_t x692 = INT64_MIN;
volatile int32_t t172 = -15207746;
uint64_t x693 = 2946LLU;
uint32_t x694 = 10828U;
static uint32_t x698 = UINT32_MAX;
volatile int32_t x699 = INT32_MIN;
uint64_t x700 = 1009637LLU;
int64_t x703 = INT64_MIN;
static int32_t x705 = INT32_MAX;
uint16_t x706 = 5717U;
volatile int32_t x707 = -7515;
static uint32_t x709 = 118U;
static volatile int32_t t177 = 43;
static volatile int64_t x713 = INT64_MAX;
volatile uint8_t x717 = 0U;
int64_t x719 = -175LL;
int64_t x720 = -31LL;
volatile int32_t t179 = 13201713;
static volatile uint32_t x734 = 10844U;
static volatile int64_t x735 = INT64_MAX;
static int32_t x741 = INT32_MAX;
uint32_t x744 = 401730U;
int32_t x749 = -20;
int16_t x754 = INT16_MAX;
int32_t x757 = 5219353;
volatile int16_t x758 = INT16_MIN;
volatile int32_t t189 = -3;
int32_t t190 = 432;
int32_t x781 = INT32_MIN;
int16_t x786 = INT16_MAX;
int32_t x788 = -1;
volatile int64_t x790 = -871343143LL;
int64_t x791 = INT64_MAX;
int64_t x793 = 34LL;
volatile int16_t x798 = INT16_MIN;
uint32_t x799 = 912573135U;


void f0(void) {
    	int16_t x1 = 3409;
	volatile int32_t t0 = -1059693822;

    t0 = ((x1<=x2)^(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 10U;
	static volatile uint8_t x6 = 6U;
	volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -14747838;

    t1 = ((x5<=x6)^(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = -1;
	uint8_t x11 = 5U;
	int32_t x12 = -1;
	static int32_t t2 = 4176063;

    t2 = ((x9<=x10)^(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -2144;
	int32_t t3 = 1702;

    t3 = ((x13<=x14)^(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	uint64_t x19 = 288LLU;
	static uint32_t x20 = 342664029U;
	volatile int32_t t4 = -1;

    t4 = ((x17<=x18)^(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int64_t x24 = -1LL;

    t5 = ((x21<=x22)^(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int64_t x26 = 4465427306309867LL;
	volatile int16_t x28 = INT16_MIN;

    t6 = ((x25<=x26)^(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 2U;
	int32_t x30 = INT32_MAX;
	static int16_t x31 = INT16_MAX;
	volatile uint32_t x32 = 0U;
	static int32_t t7 = -7914734;

    t7 = ((x29<=x30)^(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = INT32_MIN;
	static int32_t t8 = 81389;

    t8 = ((x33<=x34)^(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x38 = UINT32_MAX;
	int64_t x39 = -1LL;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -1;

    t9 = ((x37<=x38)^(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 1585730U;
	uint16_t x42 = UINT16_MAX;
	int16_t x43 = -1;
	int8_t x44 = -1;
	int32_t t10 = 354727746;

    t10 = ((x41<=x42)^(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 0;
	uint32_t x46 = 247633427U;
	int8_t x47 = 34;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -535029;

    t11 = ((x45<=x46)^(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x51 = -1;
	int8_t x52 = -36;
	static int32_t t12 = 76929;

    t12 = ((x49<=x50)^(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 1600336346494LLU;
	static int16_t x55 = -1;
	uint64_t x56 = 1922977011265LLU;
	static int32_t t13 = 39909;

    t13 = ((x53<=x54)^(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	volatile uint8_t x59 = 6U;
	uint16_t x60 = 202U;
	int32_t t14 = 1931039;

    t14 = ((x57<=x58)^(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int32_t t15 = -2244;

    t15 = ((x61<=x62)^(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = 522607617778453247LL;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 50828228;

    t16 = ((x65<=x66)^(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 6U;
	int64_t x70 = -169534LL;
	uint16_t x71 = 1U;
	static int32_t x72 = 28518;
	volatile int32_t t17 = -11282;

    t17 = ((x69<=x70)^(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int16_t x74 = 56;
	int64_t x75 = INT64_MIN;
	int32_t t18 = 869717;

    t18 = ((x73<=x74)^(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	volatile int64_t x78 = -1LL;
	volatile uint64_t x79 = 77950426LLU;
	uint64_t x80 = UINT64_MAX;

    t19 = ((x77<=x78)^(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MAX;
	static int8_t x84 = INT8_MIN;

    t20 = ((x81<=x82)^(x83!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	int32_t x87 = 506008138;
	int16_t x88 = INT16_MIN;

    t21 = ((x85<=x86)^(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = -538;

    t22 = ((x89<=x90)^(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	static uint32_t x94 = 1U;
	int64_t x95 = -1LL;

    t23 = ((x93<=x94)^(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x97 = INT16_MAX;
	static int8_t x98 = INT8_MIN;
	static int32_t t24 = 4142336;

    t24 = ((x97<=x98)^(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x103 = INT8_MIN;
	volatile int32_t t25 = 1;

    t25 = ((x101<=x102)^(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MAX;
	int32_t t26 = 29711;

    t26 = ((x105<=x106)^(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 28U;
	int64_t x111 = -1LL;
	int16_t x112 = 652;
	int32_t t27 = 56489377;

    t27 = ((x109<=x110)^(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	static volatile int8_t x114 = INT8_MIN;
	int16_t x115 = -61;
	volatile uint16_t x116 = 58U;

    t28 = ((x113<=x114)^(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = -55;
	int16_t x118 = -1;
	uint32_t x119 = 10658269U;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = 1;

    t29 = ((x117<=x118)^(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x123 = 252620;
	volatile uint32_t x124 = 2650U;
	volatile int32_t t30 = 342178300;

    t30 = ((x121<=x122)^(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 31999043;
	static volatile uint8_t x126 = 31U;
	int32_t x127 = -42;
	static int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 80534;

    t31 = ((x125<=x126)^(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = 882012LLU;
	static volatile uint64_t x130 = 53967039LLU;
	int8_t x131 = 0;
	volatile int64_t x132 = -30999461LL;
	static volatile int32_t t32 = -682840;

    t32 = ((x129<=x130)^(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x133 = UINT16_MAX;
	volatile int32_t x134 = 287440657;
	static volatile uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = 122084;

    t33 = ((x133<=x134)^(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = 60;
	uint32_t x138 = 1366294U;
	uint16_t x139 = 2U;
	volatile int32_t t34 = -311196235;

    t34 = ((x137<=x138)^(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	volatile int64_t x144 = -116889147508LL;
	volatile int32_t t35 = -24821;

    t35 = ((x141<=x142)^(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x146 = INT8_MAX;
	static int8_t x147 = 1;
	static volatile int32_t x148 = -13720770;
	int32_t t36 = -1063;

    t36 = ((x145<=x146)^(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x149 = INT32_MIN;
	volatile int32_t t37 = -455;

    t37 = ((x149<=x150)^(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MIN;
	volatile uint32_t x155 = 114U;
	volatile int32_t t38 = 1;

    t38 = ((x153<=x154)^(x155!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = 5U;
	volatile int8_t x159 = INT8_MIN;
	uint8_t x160 = 31U;

    t39 = ((x157<=x158)^(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = -4012496;

    t40 = ((x161<=x162)^(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MAX;
	volatile int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	volatile int32_t t41 = 1810;

    t41 = ((x165<=x166)^(x167!=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int64_t x170 = -9622118LL;
	int8_t x171 = INT8_MIN;
	int16_t x172 = 4824;
	int32_t t42 = -18;

    t42 = ((x169<=x170)^(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 7U;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	volatile int32_t t43 = 302390;

    t43 = ((x173<=x174)^(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = -1803894LL;
	volatile int16_t x178 = INT16_MIN;
	static int64_t x180 = 19063355LL;
	volatile int32_t t44 = 4709799;

    t44 = ((x177<=x178)^(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	static int16_t x182 = -1;
	volatile int32_t x183 = -1;
	uint64_t x184 = 19473731117LLU;
	static volatile int32_t t45 = 282372;

    t45 = ((x181<=x182)^(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int64_t x186 = -90830LL;
	static uint16_t x187 = UINT16_MAX;
	volatile int32_t t46 = 94614335;

    t46 = ((x185<=x186)^(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	int8_t x190 = 26;
	static int64_t x192 = 474326680008LL;
	int32_t t47 = -33101333;

    t47 = ((x189<=x190)^(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = -1;
	int8_t x194 = -1;
	volatile int64_t x195 = INT64_MAX;
	volatile uint64_t x196 = 118LLU;

    t48 = ((x193<=x194)^(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = UINT32_MAX;
	uint8_t x198 = UINT8_MAX;
	int32_t x199 = INT32_MIN;
	int32_t t49 = 8;

    t49 = ((x197<=x198)^(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = -4;
	static int8_t x202 = 1;
	int16_t x203 = 11;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -190939;

    t50 = ((x201<=x202)^(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MAX;
	int64_t x206 = 1179848784457782LL;
	int32_t t51 = -2;

    t51 = ((x205<=x206)^(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = 12U;
	int32_t x211 = INT32_MAX;
	static int32_t x212 = INT32_MAX;
	static int32_t t52 = 223;

    t52 = ((x209<=x210)^(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 8U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	uint16_t x216 = UINT16_MAX;
	int32_t t53 = 31;

    t53 = ((x213<=x214)^(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 16U;
	int16_t x219 = 1;
	int32_t x220 = INT32_MAX;
	int32_t t54 = -43356;

    t54 = ((x217<=x218)^(x219!=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	uint16_t x223 = 12U;
	int16_t x224 = INT16_MAX;

    t55 = ((x221<=x222)^(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x228 = 884U;
	volatile int32_t t56 = -103671;

    t56 = ((x225<=x226)^(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 4673U;
	volatile int32_t x231 = 1;
	volatile int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = 5;

    t57 = ((x229<=x230)^(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = INT8_MIN;
	uint64_t x235 = 151494111116154LLU;
	volatile int32_t t58 = 0;

    t58 = ((x233<=x234)^(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int8_t x238 = 0;
	int64_t x239 = -1LL;
	uint32_t x240 = UINT32_MAX;
	static volatile int32_t t59 = 14238;

    t59 = ((x237<=x238)^(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x243 = -1;

    t60 = ((x241<=x242)^(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	uint64_t x246 = 67920517761LLU;
	static uint64_t x247 = 150459769LLU;
	uint8_t x248 = 104U;
	volatile int32_t t61 = 144;

    t61 = ((x245<=x246)^(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	volatile int32_t t62 = -6;

    t62 = ((x249<=x250)^(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 176377990U;
	volatile int32_t x256 = INT32_MIN;
	int32_t t63 = 1220016;

    t63 = ((x253<=x254)^(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x260 = -1;
	int32_t t64 = 80;

    t64 = ((x257<=x258)^(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	uint16_t x262 = 479U;
	int32_t x263 = -258885;
	uint8_t x264 = 2U;

    t65 = ((x261<=x262)^(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x266 = INT32_MAX;
	int8_t x267 = INT8_MAX;
	int32_t t66 = -3;

    t66 = ((x265<=x266)^(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = -3;
	int32_t x271 = -1;
	static int64_t x272 = -26LL;

    t67 = ((x269<=x270)^(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	int16_t x274 = INT16_MIN;
	static int32_t x275 = INT32_MIN;
	uint64_t x276 = 6116305273745926LLU;
	int32_t t68 = -17401058;

    t68 = ((x273<=x274)^(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -916;
	static uint64_t x278 = 23337442LLU;
	int8_t x279 = INT8_MIN;
	int8_t x280 = -1;
	volatile int32_t t69 = 0;

    t69 = ((x277<=x278)^(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 0U;
	int8_t x282 = INT8_MAX;
	int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MIN;

    t70 = ((x281<=x282)^(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x286 = 0U;
	int8_t x288 = INT8_MIN;

    t71 = ((x285<=x286)^(x287!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int64_t x292 = INT64_MAX;
	static volatile int32_t t72 = -25528;

    t72 = ((x289<=x290)^(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x293 = UINT16_MAX;
	static volatile int64_t x294 = INT64_MIN;
	volatile uint32_t x295 = 3U;
	volatile uint64_t x296 = 53755529693842LLU;

    t73 = ((x293<=x294)^(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x298 = -1;
	static int64_t x299 = INT64_MIN;
	uint8_t x300 = 3U;

    t74 = ((x297<=x298)^(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	static int32_t x302 = 122887069;
	uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 0U;

    t75 = ((x301<=x302)^(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	int32_t x308 = 46907;
	volatile int32_t t76 = 1;

    t76 = ((x305<=x306)^(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x311 = 1667895U;
	uint16_t x312 = 6572U;
	volatile int32_t t77 = 88617564;

    t77 = ((x309<=x310)^(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 3U;
	int8_t x315 = 1;

    t78 = ((x313<=x314)^(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x319 = INT8_MIN;
	volatile int32_t t79 = -948413236;

    t79 = ((x317<=x318)^(x319!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 0U;
	int16_t x322 = -1;
	static int8_t x324 = -58;
	static int32_t t80 = -13939;

    t80 = ((x321<=x322)^(x323!=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	int32_t x327 = 29296967;
	volatile int64_t x328 = 2829515941LL;
	volatile int32_t t81 = 0;

    t81 = ((x325<=x326)^(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	static int32_t x332 = INT32_MAX;
	int32_t t82 = -1648;

    t82 = ((x329<=x330)^(x331!=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 31;
	volatile int64_t x334 = -1LL;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 64377532;

    t83 = ((x333<=x334)^(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MAX;
	int32_t x339 = -1;
	uint8_t x340 = 3U;
	volatile int32_t t84 = 159178;

    t84 = ((x337<=x338)^(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MIN;
	static int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 3U;
	volatile int32_t t85 = 30244;

    t85 = ((x341<=x342)^(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = INT64_MAX;
	static int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MAX;

    t86 = ((x345<=x346)^(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x349 = 1716U;
	int16_t x351 = -1;
	int16_t x352 = 0;

    t87 = ((x349<=x350)^(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	uint32_t x355 = 74U;

    t88 = ((x353<=x354)^(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MAX;
	int32_t t89 = 12;

    t89 = ((x357<=x358)^(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 9U;
	int8_t x362 = INT8_MIN;
	volatile uint16_t x363 = 44U;

    t90 = ((x361<=x362)^(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = 260U;
	static volatile int32_t x367 = -1;
	int32_t t91 = 0;

    t91 = ((x365<=x366)^(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = 53455364;
	int16_t x370 = INT16_MIN;
	volatile int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = 13U;
	volatile int32_t t92 = -26796783;

    t92 = ((x369<=x370)^(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 6564;
	static uint16_t x374 = UINT16_MAX;
	uint8_t x375 = UINT8_MAX;
	int16_t x376 = -1;

    t93 = ((x373<=x374)^(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MAX;
	int16_t x378 = -7;
	volatile int16_t x379 = 396;
	volatile int32_t x380 = INT32_MIN;

    t94 = ((x377<=x378)^(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 143975711945854LLU;
	volatile int64_t x384 = INT64_MIN;

    t95 = ((x381<=x382)^(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	int32_t x386 = INT32_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x385<=x386)^(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x390 = -16445144;
	int16_t x391 = INT16_MAX;
	int64_t x392 = -1LL;
	int32_t t97 = -164;

    t97 = ((x389<=x390)^(x391!=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MAX;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -12;
	int32_t t98 = 257;

    t98 = ((x393<=x394)^(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = 643;
	volatile int8_t x399 = 17;
	volatile int64_t x400 = -1LL;
	int32_t t99 = 66908;

    t99 = ((x397<=x398)^(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = 108004;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = 69221U;
	volatile int32_t t100 = -896;

    t100 = ((x401<=x402)^(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x405 = INT32_MIN;
	int16_t x407 = -2;
	static int32_t t101 = -8669022;

    t101 = ((x405<=x406)^(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -1;
	volatile uint32_t x410 = 479392U;
	int16_t x412 = INT16_MAX;
	int32_t t102 = -2;

    t102 = ((x409<=x410)^(x411!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -88;
	uint8_t x416 = 9U;
	int32_t t103 = 9341;

    t103 = ((x413<=x414)^(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MIN;
	int16_t x419 = -5194;
	volatile int64_t x420 = 541152006223LL;
	static volatile int32_t t104 = 8660366;

    t104 = ((x417<=x418)^(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	int32_t x422 = 1903764;
	int32_t x423 = -424;
	int64_t x424 = INT64_MIN;

    t105 = ((x421<=x422)^(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 50;
	static volatile uint16_t x426 = 76U;
	static volatile uint16_t x427 = UINT16_MAX;

    t106 = ((x425<=x426)^(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 2;
	int64_t x430 = INT64_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 31U;
	int32_t t107 = 9;

    t107 = ((x429<=x430)^(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 12888U;
	int16_t x434 = INT16_MAX;
	static int32_t x436 = INT32_MIN;
	static int32_t t108 = 1883;

    t108 = ((x433<=x434)^(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -3015152909550LL;
	int64_t x439 = -1LL;
	int64_t x440 = 155440205LL;
	int32_t t109 = 6672680;

    t109 = ((x437<=x438)^(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 1;
	int32_t x442 = -1543;
	int32_t x443 = -7388128;
	static volatile uint16_t x444 = 1U;
	int32_t t110 = 314;

    t110 = ((x441<=x442)^(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 0U;
	static uint32_t x447 = UINT32_MAX;
	uint32_t x448 = UINT32_MAX;
	int32_t t111 = 0;

    t111 = ((x445<=x446)^(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = 2706;
	volatile uint32_t x451 = 2U;
	int64_t x452 = -8429LL;
	volatile int32_t t112 = -1336;

    t112 = ((x449<=x450)^(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	int16_t x454 = -3;
	int64_t x455 = 43848235214554808LL;
	int64_t x456 = -44432132643527LL;
	volatile int32_t t113 = -85;

    t113 = ((x453<=x454)^(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 28U;
	uint8_t x458 = 0U;
	int64_t x459 = -1LL;
	volatile int32_t x460 = -2;
	static int32_t t114 = -7870172;

    t114 = ((x457<=x458)^(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x461 = 121U;
	volatile int8_t x462 = -1;
	int16_t x463 = INT16_MIN;
	int32_t t115 = -368;

    t115 = ((x461<=x462)^(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	int8_t x467 = 3;

    t116 = ((x465<=x466)^(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = INT32_MAX;
	int32_t x470 = 216542;
	uint64_t x471 = 209561323LLU;
	int32_t x472 = 1577;
	volatile int32_t t117 = -29;

    t117 = ((x469<=x470)^(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 6;
	static int16_t x474 = -1642;
	static int64_t x475 = -1LL;
	int16_t x476 = -1637;
	static volatile int32_t t118 = -85;

    t118 = ((x473<=x474)^(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MIN;
	static int32_t x479 = 16635619;
	volatile uint16_t x480 = UINT16_MAX;
	int32_t t119 = -1705570;

    t119 = ((x477<=x478)^(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = -1;
	int32_t x483 = 5606271;
	static int16_t x484 = -5;
	volatile int32_t t120 = -65338;

    t120 = ((x481<=x482)^(x483!=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -3849LL;
	int8_t x486 = 0;
	static int8_t x487 = INT8_MIN;
	volatile uint16_t x488 = 187U;
	int32_t t121 = 201950459;

    t121 = ((x485<=x486)^(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 3LLU;
	int8_t x490 = -1;
	int8_t x491 = INT8_MIN;
	int64_t x492 = -1LL;
	int32_t t122 = -32566;

    t122 = ((x489<=x490)^(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 11431913U;
	int16_t x494 = INT16_MAX;
	int32_t x495 = INT32_MIN;
	uint64_t x496 = 631223702492LLU;
	volatile int32_t t123 = -1025032725;

    t123 = ((x493<=x494)^(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MAX;
	int32_t x498 = -1;
	int16_t x499 = -1;
	static int32_t t124 = 58196;

    t124 = ((x497<=x498)^(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 12U;
	uint32_t x502 = 1U;
	int64_t x503 = INT64_MAX;
	volatile int64_t x504 = -1LL;

    t125 = ((x501<=x502)^(x503!=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	static uint32_t x506 = 15826924U;
	int16_t x508 = INT16_MIN;
	static volatile int32_t t126 = -473;

    t126 = ((x505<=x506)^(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = 914;
	volatile uint8_t x510 = 60U;
	int8_t x511 = -1;
	uint16_t x512 = 2010U;
	int32_t t127 = -357;

    t127 = ((x509<=x510)^(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = INT32_MIN;
	int64_t x514 = INT64_MIN;
	int64_t x516 = 14096LL;
	int32_t t128 = 3849905;

    t128 = ((x513<=x514)^(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 0;
	volatile int8_t x518 = INT8_MAX;
	uint8_t x520 = 0U;
	int32_t t129 = 1414817;

    t129 = ((x517<=x518)^(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 57;
	volatile int8_t x522 = -43;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = INT8_MIN;
	int32_t t130 = -63036975;

    t130 = ((x521<=x522)^(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	uint8_t x527 = 4U;
	volatile int8_t x528 = INT8_MIN;
	int32_t t131 = -3609;

    t131 = ((x525<=x526)^(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	static int16_t x531 = INT16_MAX;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -1;

    t132 = ((x529<=x530)^(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	uint32_t x534 = 216339U;
	uint32_t x535 = 1536893U;
	int64_t x536 = 0LL;

    t133 = ((x533<=x534)^(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = 1;
	static uint64_t x539 = 117229LLU;

    t134 = ((x537<=x538)^(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int64_t x542 = 178328696LL;
	int32_t x543 = INT32_MIN;
	volatile int32_t t135 = 431447992;

    t135 = ((x541<=x542)^(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x546 = 634256140LL;
	volatile int16_t x547 = 1581;
	static int32_t t136 = 0;

    t136 = ((x545<=x546)^(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x549 = 6U;
	int16_t x551 = INT16_MIN;
	uint16_t x552 = UINT16_MAX;
	static int32_t t137 = -757795;

    t137 = ((x549<=x550)^(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MIN;
	uint32_t x554 = 1U;
	int64_t x555 = -252819041173177LL;
	static int64_t x556 = INT64_MIN;
	static volatile int32_t t138 = -714918;

    t138 = ((x553<=x554)^(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MIN;
	int32_t x558 = -1;
	volatile int16_t x560 = -512;
	int32_t t139 = 3;

    t139 = ((x557<=x558)^(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = 41;
	int8_t x562 = -1;
	int32_t x563 = -1;
	static volatile uint64_t x564 = 1LLU;

    t140 = ((x561<=x562)^(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x567 = 105U;
	int8_t x568 = -36;
	int32_t t141 = 5986910;

    t141 = ((x565<=x566)^(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	static int32_t x571 = INT32_MIN;
	int64_t x572 = 612163469602LL;
	volatile int32_t t142 = 51214061;

    t142 = ((x569<=x570)^(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x573 = UINT32_MAX;
	int16_t x574 = INT16_MAX;
	int8_t x575 = -1;
	int16_t x576 = INT16_MIN;
	static volatile int32_t t143 = 2;

    t143 = ((x573<=x574)^(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 1461LLU;
	uint8_t x578 = 1U;
	int32_t x580 = INT32_MIN;
	int32_t t144 = 995707;

    t144 = ((x577<=x578)^(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 2LLU;
	static int32_t x582 = INT32_MIN;
	int32_t x584 = -120794519;

    t145 = ((x581<=x582)^(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	static int8_t x587 = -43;
	int64_t x588 = INT64_MIN;
	static int32_t t146 = 12789132;

    t146 = ((x585<=x586)^(x587!=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x590 = 2;
	static volatile int16_t x591 = INT16_MAX;
	uint8_t x592 = UINT8_MAX;
	int32_t t147 = 1020878;

    t147 = ((x589<=x590)^(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 0;
	static int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	volatile int8_t x596 = 6;
	volatile int32_t t148 = -10;

    t148 = ((x593<=x594)^(x595!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x598 = -1;
	int8_t x599 = -1;
	uint8_t x600 = UINT8_MAX;
	static int32_t t149 = -879882818;

    t149 = ((x597<=x598)^(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 448U;
	static uint8_t x602 = 17U;
	volatile uint16_t x603 = 1576U;
	volatile int8_t x604 = -29;

    t150 = ((x601<=x602)^(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = 50;
	static int8_t x606 = -1;
	int16_t x607 = INT16_MAX;
	volatile int32_t t151 = 18637208;

    t151 = ((x605<=x606)^(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = 203055814;
	static volatile uint16_t x610 = UINT16_MAX;
	int8_t x611 = -1;
	int16_t x612 = -1;

    t152 = ((x609<=x610)^(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x614 = -1LL;
	int64_t x615 = -1LL;
	static int32_t x616 = INT32_MIN;
	int32_t t153 = 0;

    t153 = ((x613<=x614)^(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 108U;
	static int8_t x618 = -1;
	volatile int16_t x619 = INT16_MAX;

    t154 = ((x617<=x618)^(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MIN;
	int64_t x622 = INT64_MIN;
	uint8_t x623 = UINT8_MAX;
	int32_t t155 = 5383600;

    t155 = ((x621<=x622)^(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x625 = INT32_MAX;
	volatile int64_t x626 = INT64_MIN;
	static int16_t x627 = INT16_MIN;
	static int16_t x628 = INT16_MIN;

    t156 = ((x625<=x626)^(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	static int8_t x630 = INT8_MIN;
	uint8_t x631 = 63U;
	static volatile int64_t x632 = 977051496663LL;
	int32_t t157 = -65471;

    t157 = ((x629<=x630)^(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = 81579U;
	int16_t x635 = -1;
	int8_t x636 = INT8_MAX;
	int32_t t158 = -122;

    t158 = ((x633<=x634)^(x635!=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	uint32_t x639 = 121U;
	volatile int8_t x640 = 0;
	int32_t t159 = 6971;

    t159 = ((x637<=x638)^(x639!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x642 = INT16_MAX;
	int32_t x644 = -1;

    t160 = ((x641<=x642)^(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	uint8_t x646 = UINT8_MAX;
	int16_t x647 = INT16_MIN;
	int64_t x648 = INT64_MAX;
	int32_t t161 = -22;

    t161 = ((x645<=x646)^(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 0;
	int32_t x650 = -1;
	uint32_t x652 = 1U;
	volatile int32_t t162 = 2488;

    t162 = ((x649<=x650)^(x651!=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MIN;
	uint64_t x655 = UINT64_MAX;
	static volatile int32_t t163 = 3559;

    t163 = ((x653<=x654)^(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -24;
	uint8_t x658 = 53U;
	static int16_t x660 = 7;
	static int32_t t164 = 7991;

    t164 = ((x657<=x658)^(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 34U;
	int8_t x662 = 41;
	static int64_t x663 = INT64_MAX;
	volatile int32_t t165 = 51488561;

    t165 = ((x661<=x662)^(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	static int64_t x666 = -1LL;
	int16_t x668 = -1;
	volatile int32_t t166 = -4936223;

    t166 = ((x665<=x666)^(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MAX;
	volatile uint8_t x671 = 93U;
	static int32_t x672 = INT32_MAX;

    t167 = ((x669<=x670)^(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x674 = INT16_MIN;
	uint8_t x675 = UINT8_MAX;
	int64_t x676 = -1LL;
	volatile int32_t t168 = -58;

    t168 = ((x673<=x674)^(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 275U;
	static int32_t x678 = -3035;
	int16_t x679 = INT16_MAX;
	int32_t x680 = 994;
	volatile int32_t t169 = -3981;

    t169 = ((x677<=x678)^(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	uint16_t x682 = UINT16_MAX;
	volatile int16_t x683 = 0;
	uint64_t x684 = 520532LLU;
	static int32_t t170 = 669647;

    t170 = ((x681<=x682)^(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = 0;
	volatile int8_t x686 = 38;
	uint16_t x688 = 122U;

    t171 = ((x685<=x686)^(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x690 = INT16_MAX;
	uint8_t x691 = 0U;

    t172 = ((x689<=x690)^(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x695 = 11;
	uint64_t x696 = 513794088032680LLU;
	volatile int32_t t173 = 14339;

    t173 = ((x693<=x694)^(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = 52;
	int32_t t174 = 5144;

    t174 = ((x697<=x698)^(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = -1LL;
	volatile int32_t x702 = -1;
	volatile uint16_t x704 = 14U;
	volatile int32_t t175 = 75827;

    t175 = ((x701<=x702)^(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x708 = 674141U;
	volatile int32_t t176 = 5;

    t176 = ((x705<=x706)^(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x710 = 28U;
	uint64_t x711 = 3303301822LLU;
	static int64_t x712 = INT64_MIN;

    t177 = ((x709<=x710)^(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x714 = -1;
	uint32_t x715 = UINT32_MAX;
	uint8_t x716 = 1U;
	int32_t t178 = -755;

    t178 = ((x713<=x714)^(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x718 = INT16_MAX;

    t179 = ((x717<=x718)^(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = 560892LL;
	uint16_t x722 = 8U;
	static volatile int8_t x723 = INT8_MIN;
	volatile int16_t x724 = -1;
	volatile int32_t t180 = 1489565;

    t180 = ((x721<=x722)^(x723!=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 10U;
	static int8_t x726 = -1;
	static uint8_t x727 = 2U;
	static int32_t x728 = -3373;
	static int32_t t181 = -9736943;

    t181 = ((x725<=x726)^(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 11641911622414LL;
	uint8_t x730 = 1U;
	volatile uint16_t x731 = UINT16_MAX;
	volatile uint32_t x732 = UINT32_MAX;
	volatile int32_t t182 = 3;

    t182 = ((x729<=x730)^(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int32_t x736 = -1;
	int32_t t183 = 0;

    t183 = ((x733<=x734)^(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -1;
	uint8_t x738 = 74U;
	static int64_t x739 = -1LL;
	int32_t x740 = 206872;
	int32_t t184 = -17;

    t184 = ((x737<=x738)^(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x742 = 1U;
	int16_t x743 = -1;
	static volatile int32_t t185 = -28748;

    t185 = ((x741<=x742)^(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = -1;
	int16_t x746 = INT16_MIN;
	static int8_t x747 = INT8_MAX;
	volatile int64_t x748 = INT64_MAX;
	static volatile int32_t t186 = -369;

    t186 = ((x745<=x746)^(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = 26430U;
	uint64_t x751 = 328140083LLU;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t187 = -131;

    t187 = ((x749<=x750)^(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -178;
	static int16_t x755 = -3726;
	static uint32_t x756 = UINT32_MAX;
	int32_t t188 = -1030200296;

    t188 = ((x753<=x754)^(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x759 = INT32_MIN;
	volatile int8_t x760 = -25;

    t189 = ((x757<=x758)^(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int8_t x762 = -1;
	volatile int8_t x763 = INT8_MIN;
	int64_t x764 = -1LL;

    t190 = ((x761<=x762)^(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = 442065034;
	uint64_t x766 = 286337LLU;
	volatile int16_t x767 = INT16_MAX;
	int8_t x768 = -1;
	int32_t t191 = -229135251;

    t191 = ((x765<=x766)^(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint64_t x770 = UINT64_MAX;
	static uint64_t x771 = UINT64_MAX;
	static int64_t x772 = INT64_MIN;
	int32_t t192 = -1;

    t192 = ((x769<=x770)^(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	uint16_t x774 = 16218U;
	static int16_t x775 = -1;
	volatile uint32_t x776 = UINT32_MAX;
	volatile int32_t t193 = -67874;

    t193 = ((x773<=x774)^(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 1012523U;
	int8_t x778 = 2;
	volatile int16_t x779 = -1;
	static volatile int32_t x780 = 1;
	volatile int32_t t194 = -837207;

    t194 = ((x777<=x778)^(x779!=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x782 = 271;
	int32_t x783 = INT32_MIN;
	uint64_t x784 = UINT64_MAX;
	int32_t t195 = -5678644;

    t195 = ((x781<=x782)^(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 174043247835720634LLU;
	volatile int16_t x787 = INT16_MIN;
	int32_t t196 = 17323265;

    t196 = ((x785<=x786)^(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x789 = 29U;
	volatile int64_t x792 = INT64_MAX;
	int32_t t197 = -46950673;

    t197 = ((x789<=x790)^(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	volatile int64_t x795 = -203896169LL;
	static int32_t x796 = -1;
	int32_t t198 = 6057870;

    t198 = ((x793<=x794)^(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = -1;
	uint32_t x800 = 371701U;
	volatile int32_t t199 = 27582;

    t199 = ((x797<=x798)^(x799!=x800));

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

