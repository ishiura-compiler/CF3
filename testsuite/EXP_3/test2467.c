
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

uint32_t x3 = UINT32_MAX;
int8_t x5 = -1;
volatile int64_t x12 = INT64_MIN;
volatile int16_t x15 = -1;
int32_t x18 = 64117;
int8_t x20 = INT8_MIN;
int32_t x27 = INT32_MIN;
static uint32_t x28 = 17615U;
int32_t x30 = -1;
int8_t x32 = -1;
static int32_t x35 = -51880;
static uint64_t x38 = UINT64_MAX;
int8_t x47 = INT8_MIN;
int64_t x48 = INT64_MIN;
static volatile uint64_t x56 = UINT64_MAX;
static volatile uint64_t t13 = 15LLU;
int16_t x63 = INT16_MIN;
int64_t x70 = 345248681526279647LL;
static volatile int16_t x75 = -1;
int64_t x76 = INT64_MIN;
int64_t x81 = -3553LL;
static uint8_t x94 = 40U;
uint64_t x98 = 118919732571415LLU;
uint64_t x100 = 1650842LLU;
int64_t x105 = -53831LL;
volatile uint32_t x106 = UINT32_MAX;
uint16_t x109 = 4U;
int16_t x116 = -1;
int8_t x119 = INT8_MAX;
uint16_t x122 = 300U;
int64_t x126 = -1LL;
int64_t t32 = INT64_MAX;
static int32_t x139 = 300467;
int64_t x152 = 1193887LL;
volatile int16_t x155 = INT16_MAX;
uint8_t x158 = 5U;
int32_t x159 = INT32_MIN;
static int16_t x162 = INT16_MIN;
int8_t x177 = INT8_MIN;
int32_t x180 = INT32_MAX;
int64_t x182 = 78371LL;
int8_t x185 = -1;
int64_t t46 = -9LL;
uint8_t x197 = UINT8_MAX;
volatile uint64_t x198 = UINT64_MAX;
volatile int16_t x201 = -2;
int64_t x202 = INT64_MAX;
static int64_t x203 = INT64_MIN;
volatile int32_t x206 = -1;
static volatile int64_t t51 = 466363629323467378LL;
int64_t x210 = INT64_MIN;
volatile uint8_t x213 = 18U;
int8_t x217 = INT8_MAX;
volatile uint8_t x218 = UINT8_MAX;
volatile uint64_t t55 = UINT64_MAX;
volatile uint32_t x225 = UINT32_MAX;
volatile int32_t x230 = -3;
uint8_t x233 = 0U;
uint32_t t58 = 28238U;
int32_t x238 = 54535;
int64_t x252 = -25495487991076LL;
static uint16_t x254 = 0U;
volatile int16_t x257 = 0;
int32_t x258 = -1;
volatile uint32_t x262 = 5860U;
int64_t t65 = -83987LL;
static volatile uint64_t t67 = UINT64_MAX;
volatile int8_t x274 = INT8_MIN;
volatile uint64_t x282 = 2765LLU;
int16_t x284 = INT16_MAX;
volatile int64_t t70 = INT64_MAX;
uint16_t x287 = 1007U;
int16_t x288 = -1;
uint64_t x292 = 7614281169252735LLU;
volatile int32_t x293 = INT32_MIN;
int8_t x300 = INT8_MIN;
int32_t x301 = INT32_MIN;
int64_t x303 = -204966966LL;
static int8_t x307 = INT8_MIN;
int64_t x320 = INT64_MIN;
int16_t x324 = -1;
static volatile int32_t t80 = -59;
static int64_t x331 = INT64_MIN;
int8_t x335 = -23;
volatile uint64_t x336 = UINT64_MAX;
int32_t x340 = -1338741;
int8_t x342 = -1;
uint16_t x345 = UINT16_MAX;
int64_t x352 = -1LL;
uint32_t x357 = 19282U;
uint32_t x366 = 3U;
int16_t x367 = -542;
volatile int8_t x368 = INT8_MIN;
uint8_t x378 = UINT8_MAX;
int64_t x379 = INT64_MIN;
static volatile int32_t x384 = INT32_MIN;
int16_t x388 = -1;
static uint8_t x391 = 12U;
int32_t t98 = 15;
static uint64_t t101 = 218550LLU;
static uint32_t x412 = UINT32_MAX;
volatile uint32_t t102 = UINT32_MAX;
static volatile int64_t x416 = 4648490163LL;
int64_t x421 = INT64_MAX;
static int16_t x424 = INT16_MAX;
uint32_t x437 = 127U;
int32_t x438 = 4545724;
int16_t x440 = 1;
volatile int64_t t109 = -5150LL;
static volatile int16_t x443 = INT16_MIN;
int8_t x444 = INT8_MIN;
volatile int32_t t110 = 47;
int32_t x445 = -1;
int8_t x447 = 0;
uint16_t x448 = UINT16_MAX;
int16_t x459 = INT16_MIN;
int32_t x465 = INT32_MIN;
volatile int32_t x468 = -1633;
volatile int32_t t116 = 13;
static uint32_t x472 = UINT32_MAX;
static int16_t x474 = 22;
volatile int32_t t118 = 101853018;
static uint64_t x477 = 2493640541217874LLU;
static int32_t x482 = INT32_MIN;
uint64_t x486 = 196274079254795840LLU;
int64_t x487 = -45814078845904LL;
volatile int16_t x488 = INT16_MIN;
int64_t x494 = INT64_MIN;
volatile int64_t t123 = -15626126897LL;
uint8_t x499 = 18U;
int8_t x509 = INT8_MAX;
volatile int64_t x512 = INT64_MAX;
int16_t x517 = INT16_MAX;
uint8_t x520 = 27U;
static int16_t x521 = 832;
int16_t x524 = -1;
int32_t t130 = 47;
int8_t x525 = -1;
int16_t x528 = -295;
int32_t x530 = INT32_MAX;
uint8_t x535 = 60U;
int32_t x539 = INT32_MIN;
volatile int64_t x547 = INT64_MAX;
static volatile int64_t t136 = -403842526714LL;
volatile int32_t t139 = -921066;
static volatile uint32_t x563 = 1653889U;
static uint64_t x566 = UINT64_MAX;
int64_t x573 = INT64_MIN;
uint64_t x575 = 1119779574310054LLU;
int8_t x576 = INT8_MIN;
uint64_t x585 = 2993313942172469LLU;
int8_t x586 = INT8_MIN;
int16_t x591 = 12326;
static int8_t x596 = INT8_MAX;
int32_t x599 = INT32_MIN;
static uint32_t x603 = 16610U;
volatile int64_t t152 = -91832LL;
uint32_t x614 = 34491U;
uint8_t x615 = UINT8_MAX;
volatile int64_t x616 = INT64_MIN;
static int32_t x630 = INT32_MIN;
int64_t x632 = INT64_MIN;
static uint8_t x635 = 8U;
int64_t x640 = 14362029334LL;
uint32_t x650 = 1701905619U;
int16_t x654 = -21;
int64_t t163 = -193642990LL;
uint16_t x665 = 10710U;
int32_t x671 = -1;
int8_t x673 = INT8_MIN;
int16_t x676 = -32;
volatile int32_t x679 = INT32_MAX;
int64_t x684 = -1742031LL;
int32_t x686 = -15634663;
uint16_t x696 = UINT16_MAX;
static int32_t x699 = INT32_MIN;
int8_t x704 = INT8_MAX;
volatile uint16_t x715 = 1836U;
uint64_t x716 = 5379508LLU;
static uint8_t x719 = 6U;
volatile uint64_t t180 = UINT64_MAX;
int32_t x727 = INT32_MAX;
static volatile int16_t x729 = -1;
uint16_t x730 = 19692U;
volatile int32_t t182 = -22441876;
volatile int8_t x737 = INT8_MAX;
uint16_t x742 = 7U;
static volatile uint16_t x744 = 1U;
int64_t x745 = INT64_MAX;
int64_t x752 = -9722945697953618LL;
int64_t x757 = -1LL;
volatile uint32_t t189 = 13374944U;
static uint32_t x761 = 4378U;
int8_t x773 = INT8_MAX;
static int32_t x780 = -8;
static volatile int32_t x786 = -1;
int8_t x791 = INT8_MAX;
static uint16_t x795 = 29U;
volatile int8_t x796 = INT8_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MIN;
	int8_t x4 = -14;
	volatile uint32_t t0 = 1214621U;

    t0 = ((x1>x2)*(x3|x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x6 = INT16_MIN;
	static uint16_t x7 = 14U;
	int16_t x8 = -1;
	volatile int32_t t1 = -646;

    t1 = ((x5>x6)*(x7|x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	uint16_t x10 = 172U;
	int8_t x11 = -1;
	int64_t t2 = 24020521032851LL;

    t2 = ((x9>x10)*(x11|x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int16_t x14 = INT16_MIN;
	int64_t x16 = 63374096LL;
	static volatile int64_t t3 = -4472271LL;

    t3 = ((x13>x14)*(x15|x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile int64_t x19 = INT64_MAX;
	int64_t t4 = 5183293LL;

    t4 = ((x17>x18)*(x19|x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MIN;
	volatile int64_t x23 = -924188420781LL;
	int8_t x24 = 0;
	volatile int64_t t5 = 3224860564308243LL;

    t5 = ((x21>x22)*(x23|x24));

    if (t5 != -924188420781LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -814199926670650LL;
	volatile int64_t x26 = -1LL;
	volatile uint32_t t6 = 6U;

    t6 = ((x25>x26)*(x27|x28));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	uint32_t t7 = 116U;

    t7 = ((x29>x30)*(x31|x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	static int8_t x34 = 30;
	static uint32_t x36 = UINT32_MAX;
	uint32_t t8 = UINT32_MAX;

    t8 = ((x33>x34)*(x35|x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	uint8_t x39 = 14U;
	volatile uint32_t x40 = 166621U;
	volatile uint32_t t9 = 60226U;

    t9 = ((x37>x38)*(x39|x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	int8_t x42 = -1;
	int16_t x43 = 13978;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t10 = INT32_MAX;

    t10 = ((x41>x42)*(x43|x44));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = INT16_MIN;
	static volatile int64_t t11 = 0LL;

    t11 = ((x45>x46)*(x47|x48));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 312U;
	uint8_t x50 = 102U;
	int8_t x51 = 60;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t12 = 57329631166961939LL;

    t12 = ((x49>x50)*(x51|x52));

    if (t12 != -9223372036854775748LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x53 = 249625615683661LLU;
	volatile int16_t x54 = INT16_MIN;
	uint16_t x55 = 247U;

    t13 = ((x53>x54)*(x55|x56));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MIN;
	uint16_t x58 = 18047U;
	static int32_t x59 = -1;
	uint16_t x60 = UINT16_MAX;
	static int32_t t14 = 18693921;

    t14 = ((x57>x58)*(x59|x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 698U;
	uint64_t x62 = 245757LLU;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 1;

    t15 = ((x61>x62)*(x63|x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = -1LL;
	volatile int8_t x66 = INT8_MIN;
	int32_t x67 = -2;
	int32_t x68 = 172743;
	int32_t t16 = 102;

    t16 = ((x65>x66)*(x67|x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x69 = 1U;
	int8_t x71 = INT8_MAX;
	int8_t x72 = 2;
	volatile int32_t t17 = -1163683;

    t17 = ((x69>x70)*(x71|x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	volatile int64_t x74 = INT64_MAX;
	volatile int64_t t18 = -23529LL;

    t18 = ((x73>x74)*(x75|x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int16_t x78 = -7;
	volatile int8_t x79 = -5;
	uint8_t x80 = 14U;
	int32_t t19 = -1;

    t19 = ((x77>x78)*(x79|x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x82 = 118U;
	uint16_t x83 = 4U;
	static uint8_t x84 = UINT8_MAX;
	int32_t t20 = 0;

    t20 = ((x81>x82)*(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = 10376216717653LL;
	static volatile int64_t x86 = 137098777LL;
	int32_t x87 = INT32_MIN;
	static int64_t x88 = 10776712811642747LL;
	volatile int64_t t21 = 119498945LL;

    t21 = ((x85>x86)*(x87|x88));

    if (t21 != -84148357LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -6409;
	int8_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = -7024855;

    t22 = ((x89>x90)*(x91|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 40114LLU;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = 1;
	uint32_t t23 = UINT32_MAX;

    t23 = ((x93>x94)*(x95|x96));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 80066798U;
	int8_t x99 = INT8_MAX;
	static volatile uint64_t t24 = 43281122602347933LLU;

    t24 = ((x97>x98)*(x99|x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 731917100U;
	int32_t x102 = 855791;
	int8_t x103 = -1;
	int8_t x104 = -44;
	volatile int32_t t25 = -7787726;

    t25 = ((x101>x102)*(x103|x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 1033545;

    t26 = ((x105>x106)*(x107|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = INT8_MIN;
	static int32_t x111 = INT32_MIN;
	uint64_t x112 = 201896585LLU;
	volatile uint64_t t27 = 0LLU;

    t27 = ((x109>x110)*(x111|x112));

    if (t27 != 18446744071763964553LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = 7;
	uint64_t x114 = UINT64_MAX;
	int32_t x115 = 1526;
	int32_t t28 = -735877;

    t28 = ((x113>x114)*(x115|x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	static int8_t x118 = -1;
	volatile int8_t x120 = INT8_MAX;
	static volatile int32_t t29 = -535190653;

    t29 = ((x117>x118)*(x119|x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = -1;
	volatile int16_t x123 = INT16_MAX;
	int8_t x124 = -1;
	int32_t t30 = -77690959;

    t30 = ((x121>x122)*(x123|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 52U;
	volatile int8_t x127 = -1;
	uint8_t x128 = 3U;
	volatile int32_t t31 = 12;

    t31 = ((x125>x126)*(x127|x128));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	int16_t x130 = -13;
	int64_t x131 = INT64_MAX;
	uint32_t x132 = UINT32_MAX;

    t32 = ((x129>x130)*(x131|x132));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MAX;
	uint16_t x134 = UINT16_MAX;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int64_t t33 = 10666LL;

    t33 = ((x133>x134)*(x135|x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x137 = 9U;
	uint8_t x138 = 9U;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t34 = 1523674650306LL;

    t34 = ((x137>x138)*(x139|x140));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int64_t x144 = 3327819551822887LL;
	volatile int64_t t35 = -11031680476712884LL;

    t35 = ((x141>x142)*(x143|x144));

    if (t35 != -9220044217302952921LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = 73LLU;
	volatile int32_t x146 = INT32_MAX;
	uint16_t x147 = 22U;
	static volatile int64_t x148 = -1LL;
	static int64_t t36 = -19038168497214LL;

    t36 = ((x145>x146)*(x147|x148));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	uint8_t x150 = 7U;
	int8_t x151 = -1;
	static int64_t t37 = 3192695338803LL;

    t37 = ((x149>x150)*(x151|x152));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int64_t x154 = 829039760832LL;
	static int64_t x156 = -1LL;
	int64_t t38 = -8899206362766671LL;

    t38 = ((x153>x154)*(x155|x156));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	int8_t x160 = INT8_MAX;
	int32_t t39 = -1;

    t39 = ((x157>x158)*(x159|x160));

    if (t39 != -2147483521) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x161 = UINT64_MAX;
	static volatile int32_t x163 = INT32_MAX;
	uint32_t x164 = 146U;
	uint32_t t40 = 27502U;

    t40 = ((x161>x162)*(x163|x164));

    if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 14033402685LLU;
	int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	int64_t t41 = 4620356964112LL;

    t41 = ((x165>x166)*(x167|x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	int64_t x170 = -1LL;
	static volatile uint32_t x171 = 1778U;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t42 = 1U;

    t42 = ((x169>x170)*(x171|x172));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 0;
	int32_t x174 = 14;
	int16_t x175 = -1;
	static int32_t x176 = INT32_MIN;
	volatile int32_t t43 = 15571371;

    t43 = ((x173>x174)*(x175|x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 9907U;
	static int8_t x179 = INT8_MAX;
	volatile int32_t t44 = INT32_MAX;

    t44 = ((x177>x178)*(x179|x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = UINT32_MAX;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 3821U;
	int32_t t45 = 0;

    t45 = ((x181>x182)*(x183|x184));

    if (t45 != -2147479827) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MAX;
	int32_t x188 = -5972394;

    t46 = ((x185>x186)*(x187|x188));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = 18;
	int64_t x191 = INT64_MAX;
	static int8_t x192 = INT8_MIN;
	volatile int64_t t47 = -62LL;

    t47 = ((x189>x190)*(x191|x192));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = UINT8_MAX;
	static int64_t x194 = INT64_MAX;
	volatile uint8_t x195 = UINT8_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = 0;

    t48 = ((x193>x194)*(x195|x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x199 = 20U;
	int16_t x200 = 2;
	volatile int32_t t49 = 15141904;

    t49 = ((x197>x198)*(x199|x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x204 = INT16_MAX;
	int64_t t50 = -38LL;

    t50 = ((x201>x202)*(x203|x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x205 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	volatile int32_t x208 = 5036561;

    t51 = ((x205>x206)*(x207|x208));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 10843628U;
	int64_t x211 = 6041749586LL;
	volatile int64_t x212 = -1371115422021820LL;
	int64_t t52 = 2318377918198414LL;

    t52 = ((x209>x210)*(x211|x212));

    if (t52 != -1371110455128234LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = -142951437;
	uint64_t x215 = 424992983033LLU;
	static int32_t x216 = INT32_MIN;
	volatile uint64_t t53 = 13812614380LLU;

    t53 = ((x213>x214)*(x215|x216));

    if (t53 != 18446744073500772345LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x219 = INT64_MAX;
	uint64_t x220 = 88741448592905LLU;
	volatile uint64_t t54 = 191731LLU;

    t54 = ((x217>x218)*(x219|x220));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x221 = UINT8_MAX;
	volatile uint16_t x222 = 0U;
	static uint64_t x223 = UINT64_MAX;
	int16_t x224 = -1;

    t55 = ((x221>x222)*(x223|x224));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = INT64_MIN;
	int8_t x227 = 26;
	int64_t x228 = INT64_MIN;
	int64_t t56 = -341006959569250268LL;

    t56 = ((x225>x226)*(x227|x228));

    if (t56 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	static uint32_t x232 = 297U;
	uint32_t t57 = 2565895U;

    t57 = ((x229>x230)*(x231|x232));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = -14;
	uint16_t x235 = 1361U;
	uint32_t x236 = 167369U;

    t58 = ((x233>x234)*(x235|x236));

    if (t58 != 167385U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 458;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = INT8_MAX;
	int32_t t59 = -7;

    t59 = ((x237>x238)*(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MAX;
	volatile int8_t x242 = INT8_MIN;
	uint16_t x243 = 0U;
	static int8_t x244 = -1;
	int32_t t60 = 952821;

    t60 = ((x241>x242)*(x243|x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	static int32_t x246 = -31;
	static int64_t x247 = INT64_MIN;
	volatile int8_t x248 = 1;
	static volatile int64_t t61 = -114544807LL;

    t61 = ((x245>x246)*(x247|x248));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = -1LL;
	static int16_t x250 = INT16_MIN;
	static int16_t x251 = 445;
	volatile int64_t t62 = 20030483102214226LL;

    t62 = ((x249>x250)*(x251|x252));

    if (t62 != -25495487990787LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 5;
	static uint8_t x255 = 2U;
	static int64_t x256 = INT64_MIN;
	int64_t t63 = 121855972357550062LL;

    t63 = ((x253>x254)*(x255|x256));

    if (t63 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = ((x257>x258)*(x259|x260));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 18805193U;
	volatile int64_t x263 = -66911857LL;
	uint16_t x264 = 20U;

    t65 = ((x261>x262)*(x263|x264));

    if (t65 != -66911841LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MAX;
	static int16_t x266 = INT16_MIN;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 539741854U;
	volatile uint32_t t66 = 53294477U;

    t66 = ((x265>x266)*(x267|x268));

    if (t66 != 4294954654U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 2U;
	int16_t x270 = -1;
	volatile int64_t x271 = INT64_MAX;
	uint64_t x272 = UINT64_MAX;

    t67 = ((x269>x270)*(x271|x272));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x275 = 23346874;
	uint32_t x276 = 10678U;
	volatile uint32_t t68 = 4U;

    t68 = ((x273>x274)*(x275|x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 3536;
	int64_t x278 = 65044071LL;
	static int64_t x279 = -1LL;
	volatile int32_t x280 = INT32_MAX;
	int64_t t69 = -15391091597524430LL;

    t69 = ((x277>x278)*(x279|x280));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	int64_t x283 = INT64_MAX;

    t70 = ((x281>x282)*(x283|x284));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 3249U;
	int64_t x286 = 92148259873LL;
	int32_t t71 = -111282;

    t71 = ((x285>x286)*(x287|x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MAX;
	int32_t x291 = -1;
	static volatile uint64_t t72 = 17LLU;

    t72 = ((x289>x290)*(x291|x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x294 = 65849671U;
	int16_t x295 = 2;
	uint16_t x296 = UINT16_MAX;
	static int32_t t73 = 78;

    t73 = ((x293>x294)*(x295|x296));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = 848584744;
	uint32_t x298 = UINT32_MAX;
	static uint8_t x299 = 63U;
	volatile int32_t t74 = 90;

    t74 = ((x297>x298)*(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = 1545LL;
	int16_t x304 = INT16_MIN;
	int64_t t75 = 588687LL;

    t75 = ((x301>x302)*(x303|x304));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	volatile uint8_t x306 = 2U;
	static uint32_t x308 = UINT32_MAX;
	volatile uint32_t t76 = UINT32_MAX;

    t76 = ((x305>x306)*(x307|x308));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	uint16_t x310 = UINT16_MAX;
	uint8_t x311 = 1U;
	volatile int8_t x312 = 31;
	static volatile int32_t t77 = 348;

    t77 = ((x309>x310)*(x311|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	static int16_t x314 = -5;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = INT64_MAX;
	int64_t t78 = -366683569041079LL;

    t78 = ((x313>x314)*(x315|x316));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -1;
	volatile int8_t x318 = INT8_MAX;
	int8_t x319 = -22;
	static volatile int64_t t79 = 4252045177088LL;

    t79 = ((x317>x318)*(x319|x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 111U;
	int16_t x322 = INT16_MAX;
	uint8_t x323 = 81U;

    t80 = ((x321>x322)*(x323|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 3153919U;
	int8_t x326 = INT8_MIN;
	static int8_t x327 = -6;
	int32_t x328 = 442228;
	int32_t t81 = 66092530;

    t81 = ((x325>x326)*(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = 0;
	uint32_t x330 = UINT32_MAX;
	uint32_t x332 = 54805283U;
	volatile int64_t t82 = 38483867141296LL;

    t82 = ((x329>x330)*(x331|x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int32_t x334 = -1;
	volatile uint64_t t83 = 2378314LLU;

    t83 = ((x333>x334)*(x335|x336));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -1LL;
	int64_t x338 = -898747532148LL;
	uint16_t x339 = 12378U;
	int32_t t84 = -471;

    t84 = ((x337>x338)*(x339|x340));

    if (t84 != -1330469) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 844730;
	uint16_t x343 = 7U;
	volatile int64_t x344 = INT64_MAX;
	int64_t t85 = INT64_MAX;

    t85 = ((x341>x342)*(x343|x344));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = INT64_MIN;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MAX;
	int64_t t86 = -49031639541449325LL;

    t86 = ((x345>x346)*(x347|x348));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = 85U;
	static int64_t x350 = -188798066LL;
	volatile uint16_t x351 = 2008U;
	volatile int64_t t87 = 2039104838821LL;

    t87 = ((x349>x350)*(x351|x352));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = 7791387618LL;
	static uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -219;

    t88 = ((x353>x354)*(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x358 = -2244810LL;
	int32_t x359 = 233;
	int64_t x360 = -13429263LL;
	volatile int64_t t89 = 1660LL;

    t89 = ((x357>x358)*(x359|x360));

    if (t89 != -13429255LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	volatile int64_t x363 = INT64_MAX;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int64_t t90 = 14715161LL;

    t90 = ((x361>x362)*(x363|x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 10U;
	static int32_t t91 = -12539;

    t91 = ((x365>x366)*(x367|x368));

    if (t91 != -30) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MIN;
	int64_t x370 = 0LL;
	volatile int16_t x371 = INT16_MAX;
	static int8_t x372 = INT8_MAX;
	int32_t t92 = -236854;

    t92 = ((x369>x370)*(x371|x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MAX;
	int32_t x375 = INT32_MAX;
	static uint8_t x376 = UINT8_MAX;
	int32_t t93 = 28470;

    t93 = ((x373>x374)*(x375|x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	volatile int32_t x380 = INT32_MAX;
	int64_t t94 = 217629944LL;

    t94 = ((x377>x378)*(x379|x380));

    if (t94 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = 4535697;
	uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 3346U;
	volatile int32_t t95 = -180049084;

    t95 = ((x381>x382)*(x383|x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 3U;
	int8_t x387 = -1;
	int32_t t96 = 1;

    t96 = ((x385>x386)*(x387|x388));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MAX;
	int16_t x392 = -9731;
	int32_t t97 = 269395060;

    t97 = ((x389>x390)*(x391|x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x393 = INT8_MIN;
	uint32_t x394 = UINT32_MAX;
	uint8_t x395 = 4U;
	static int16_t x396 = -1;

    t98 = ((x393>x394)*(x395|x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	int64_t x398 = -1LL;
	uint64_t x399 = 57LLU;
	volatile uint8_t x400 = UINT8_MAX;
	uint64_t t99 = 1LLU;

    t99 = ((x397>x398)*(x399|x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	static int32_t x403 = INT32_MIN;
	uint32_t x404 = 148690U;
	volatile uint32_t t100 = 4311727U;

    t100 = ((x401>x402)*(x403|x404));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 35381U;
	int32_t x406 = -2814033;
	uint64_t x407 = 66635601318946373LLU;
	static volatile int64_t x408 = INT64_MIN;

    t101 = ((x405>x406)*(x407|x408));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	int8_t x410 = 41;
	int32_t x411 = INT32_MAX;

    t102 = ((x409>x410)*(x411|x412));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -1;
	static int64_t t103 = 450099018985894619LL;

    t103 = ((x413>x414)*(x415|x416));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = 170U;
	int32_t x418 = -1;
	static uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = -1;
	volatile uint64_t t104 = 51925413405825LLU;

    t104 = ((x417>x418)*(x419|x420));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MIN;
	int16_t x423 = 1;
	int32_t t105 = -1;

    t105 = ((x421>x422)*(x423|x424));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -19664648;
	int32_t x426 = INT32_MIN;
	int32_t x427 = -32;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t106 = UINT32_MAX;

    t106 = ((x425>x426)*(x427|x428));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 1848278U;
	uint16_t x430 = 2922U;
	static int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	volatile int32_t t107 = -4880943;

    t107 = ((x429>x430)*(x431|x432));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MIN;
	uint8_t x436 = UINT8_MAX;
	int32_t t108 = 703024;

    t108 = ((x433>x434)*(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x439 = INT64_MAX;

    t109 = ((x437>x438)*(x439|x440));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MIN;
	static uint64_t x442 = UINT64_MAX;

    t110 = ((x441>x442)*(x443|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x446 = INT32_MAX;
	int32_t t111 = -254;

    t111 = ((x445>x446)*(x447|x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 490U;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = 954003570U;
	static uint32_t x452 = 45U;
	uint32_t t112 = 1627945250U;

    t112 = ((x449>x450)*(x451|x452));

    if (t112 != 954003583U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	static uint16_t x454 = 928U;
	int32_t x455 = -1;
	static int16_t x456 = 96;
	static volatile int32_t t113 = -23;

    t113 = ((x453>x454)*(x455|x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x457 = 0;
	int8_t x458 = INT8_MIN;
	int8_t x460 = -1;
	int32_t t114 = -26936;

    t114 = ((x457>x458)*(x459|x460));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 7U;
	uint8_t x462 = 7U;
	uint8_t x463 = 121U;
	static uint8_t x464 = 42U;
	int32_t t115 = -1;

    t115 = ((x461>x462)*(x463|x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x466 = 4U;
	static uint16_t x467 = 9U;

    t116 = ((x465>x466)*(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 43U;
	int32_t x470 = -1;
	static uint64_t x471 = 2183859322LLU;
	uint64_t t117 = 11582140LLU;

    t117 = ((x469>x470)*(x471|x472));

    if (t117 != 4294967295LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 1LLU;
	static int16_t x475 = INT16_MAX;
	int16_t x476 = -2;

    t118 = ((x473>x474)*(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x478 = 36703355219647098LLU;
	uint8_t x479 = UINT8_MAX;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t119 = -1;

    t119 = ((x477>x478)*(x479|x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	static int64_t x483 = INT64_MAX;
	int8_t x484 = INT8_MIN;
	static int64_t t120 = 1LL;

    t120 = ((x481>x482)*(x483|x484));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MAX;
	volatile int64_t t121 = -101239755709LL;

    t121 = ((x485>x486)*(x487|x488));

    if (t121 != -13264LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MIN;
	int8_t x491 = -1;
	volatile uint64_t x492 = 1199LLU;
	volatile uint64_t t122 = 8910551LLU;

    t122 = ((x489>x490)*(x491|x492));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x495 = INT16_MIN;
	static int64_t x496 = -492321776655LL;

    t123 = ((x493>x494)*(x495|x496));

    if (t123 != -9231LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	static uint8_t x498 = 1U;
	static uint16_t x500 = 0U;
	int32_t t124 = -545;

    t124 = ((x497>x498)*(x499|x500));

    if (t124 != 18) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 6;
	uint32_t x502 = 2305U;
	static volatile int8_t x503 = 57;
	int16_t x504 = -40;
	volatile int32_t t125 = 243277;

    t125 = ((x501>x502)*(x503|x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MIN;
	volatile int64_t x506 = INT64_MAX;
	uint16_t x507 = 30U;
	int64_t x508 = 23226737LL;
	volatile int64_t t126 = -34576431362196LL;

    t126 = ((x505>x506)*(x507|x508));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 3157836U;
	int64_t x511 = -2942606157222053LL;
	int64_t t127 = 11419680LL;

    t127 = ((x509>x510)*(x511|x512));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -1LL;
	int32_t x514 = INT32_MIN;
	volatile uint64_t x515 = 148412047108464558LLU;
	uint8_t x516 = 0U;
	uint64_t t128 = 7256553887LLU;

    t128 = ((x513>x514)*(x515|x516));

    if (t128 != 148412047108464558LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = -12;
	int8_t x519 = INT8_MAX;
	volatile int32_t t129 = -122;

    t129 = ((x517>x518)*(x519|x520));

    if (t129 != 127) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x522 = 0U;
	volatile uint8_t x523 = 3U;

    t130 = ((x521>x522)*(x523|x524));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MIN;
	volatile int32_t t131 = 65;

    t131 = ((x525>x526)*(x527|x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = 44;
	static uint32_t x531 = 0U;
	uint8_t x532 = 3U;
	uint32_t t132 = 7203U;

    t132 = ((x529>x530)*(x531|x532));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	int64_t x534 = INT64_MIN;
	static int8_t x536 = -60;
	static int32_t t133 = -20588;

    t133 = ((x533>x534)*(x535|x536));

    if (t133 != -4) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int8_t x538 = -1;
	uint64_t x540 = 7024218235645739LLU;
	volatile uint64_t t134 = 213685431693617LLU;

    t134 = ((x537>x538)*(x539|x540));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = 9237;
	int32_t x542 = INT32_MIN;
	static volatile int16_t x543 = 28;
	uint32_t x544 = 0U;
	uint32_t t135 = 14552958U;

    t135 = ((x541>x542)*(x543|x544));

    if (t135 != 28U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	uint32_t x546 = 180682U;
	int8_t x548 = INT8_MIN;

    t136 = ((x545>x546)*(x547|x548));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 90;
	int64_t x550 = -3375169437472419606LL;
	uint64_t x551 = 31501460LLU;
	int64_t x552 = INT64_MIN;
	volatile uint64_t t137 = 805497755829LLU;

    t137 = ((x549>x550)*(x551|x552));

    if (t137 != 9223372036886277268LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 0;
	int8_t x554 = 0;
	volatile int16_t x555 = 29;
	int32_t x556 = -1;
	int32_t t138 = 322395;

    t138 = ((x553>x554)*(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 1U;
	uint64_t x558 = 464452288LLU;
	volatile uint16_t x559 = 16169U;
	static int32_t x560 = INT32_MIN;

    t139 = ((x557>x558)*(x559|x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	uint64_t x562 = 275403550434934502LLU;
	uint32_t x564 = 17209U;
	uint32_t t140 = 543500U;

    t140 = ((x561>x562)*(x563|x564));

    if (t140 != 1671097U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = -1;
	uint16_t x567 = 2U;
	int8_t x568 = INT8_MIN;
	volatile int32_t t141 = -1;

    t141 = ((x565>x566)*(x567|x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = INT8_MIN;
	volatile int16_t x570 = INT16_MIN;
	int32_t x571 = -1;
	uint8_t x572 = 6U;
	int32_t t142 = -56;

    t142 = ((x569>x570)*(x571|x572));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = -1;
	uint64_t t143 = 122LLU;

    t143 = ((x573>x574)*(x575|x576));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint32_t x578 = 124U;
	int64_t x579 = INT64_MIN;
	static int16_t x580 = 823;
	volatile int64_t t144 = -56157766002LL;

    t144 = ((x577>x578)*(x579|x580));

    if (t144 != -9223372036854774985LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	int16_t x582 = -1;
	int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;
	static int32_t t145 = -1;

    t145 = ((x581>x582)*(x583|x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x587 = INT64_MIN;
	volatile int64_t x588 = -1959872436989504LL;
	volatile int64_t t146 = -2270617LL;

    t146 = ((x585>x586)*(x587|x588));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	int64_t x590 = INT64_MAX;
	volatile uint16_t x592 = 3902U;
	volatile int32_t t147 = 2159;

    t147 = ((x589>x590)*(x591|x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x593 = UINT64_MAX;
	uint16_t x594 = 22U;
	volatile int16_t x595 = INT16_MAX;
	static int32_t t148 = 65561713;

    t148 = ((x593>x594)*(x595|x596));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = INT64_MIN;
	static int16_t x598 = -425;
	int32_t x600 = -1;
	int32_t t149 = -47064;

    t149 = ((x597>x598)*(x599|x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	volatile uint16_t x602 = UINT16_MAX;
	int32_t x604 = -169969;
	uint32_t t150 = 1770712539U;

    t150 = ((x601>x602)*(x603|x604));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = INT16_MIN;
	int16_t x606 = INT16_MIN;
	uint64_t x607 = UINT64_MAX;
	volatile int64_t x608 = INT64_MAX;
	volatile uint64_t t151 = 3664540LLU;

    t151 = ((x605>x606)*(x607|x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = 250132;
	static int32_t x610 = 7514187;
	int8_t x611 = INT8_MAX;
	int64_t x612 = INT64_MIN;

    t152 = ((x609>x610)*(x611|x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	volatile int64_t t153 = -128739LL;

    t153 = ((x613>x614)*(x615|x616));

    if (t153 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 11800267286LLU;
	uint64_t x618 = 50553118552342656LLU;
	uint16_t x619 = 4U;
	int16_t x620 = -2857;
	volatile int32_t t154 = 17;

    t154 = ((x617>x618)*(x619|x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = UINT8_MAX;
	int64_t x622 = -34711611125479436LL;
	uint8_t x623 = 13U;
	int64_t x624 = INT64_MIN;
	volatile int64_t t155 = 48404677700150722LL;

    t155 = ((x621>x622)*(x623|x624));

    if (t155 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = 174455LLU;
	static int8_t x626 = INT8_MIN;
	uint32_t x627 = UINT32_MAX;
	int64_t x628 = INT64_MIN;
	volatile int64_t t156 = -26412176797324212LL;

    t156 = ((x625>x626)*(x627|x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = 5810703LLU;
	uint16_t x631 = 19755U;
	volatile int64_t t157 = -16825487167268LL;

    t157 = ((x629>x630)*(x631|x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = -2;
	volatile uint8_t x634 = 126U;
	int32_t x636 = -1;
	int32_t t158 = -68;

    t158 = ((x633>x634)*(x635|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int64_t x638 = 14814114030398513LL;
	int64_t x639 = INT64_MAX;
	int64_t t159 = 7312509122LL;

    t159 = ((x637>x638)*(x639|x640));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	static uint64_t x642 = 1044LLU;
	volatile int8_t x643 = INT8_MIN;
	int8_t x644 = 4;
	int32_t t160 = -492921;

    t160 = ((x641>x642)*(x643|x644));

    if (t160 != -124) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	uint8_t x646 = 1U;
	uint64_t x647 = UINT64_MAX;
	int16_t x648 = INT16_MAX;
	uint64_t t161 = 89178013850112LLU;

    t161 = ((x645>x646)*(x647|x648));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile int16_t x651 = INT16_MIN;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t162 = 219061LLU;

    t162 = ((x649>x650)*(x651|x652));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -885033319;
	volatile int32_t x655 = INT32_MAX;
	int64_t x656 = -1LL;

    t163 = ((x653>x654)*(x655|x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = INT16_MIN;
	volatile int64_t x658 = INT64_MIN;
	int32_t x659 = -4430;
	int16_t x660 = INT16_MIN;
	volatile int32_t t164 = 46755;

    t164 = ((x657>x658)*(x659|x660));

    if (t164 != -4430) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1144892156LL;
	uint32_t x662 = UINT32_MAX;
	volatile int32_t x663 = -1;
	int16_t x664 = 83;
	volatile int32_t t165 = 7305;

    t165 = ((x661>x662)*(x663|x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x666 = 106117807U;
	volatile int64_t x667 = -3LL;
	static int32_t x668 = -946674;
	int64_t t166 = -46733009651LL;

    t166 = ((x665>x666)*(x667|x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 1716285707U;
	volatile int32_t x670 = -792992;
	int16_t x672 = -15674;
	int32_t t167 = 6754180;

    t167 = ((x669>x670)*(x671|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = 1165463766190577LLU;
	int64_t x675 = -4LL;
	static int64_t t168 = 1991767723777168412LL;

    t168 = ((x673>x674)*(x675|x676));

    if (t168 != -4LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 531807162LLU;
	uint32_t x678 = UINT32_MAX;
	static volatile uint32_t x680 = 4181283U;
	static uint32_t t169 = 1988630U;

    t169 = ((x677>x678)*(x679|x680));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x681 = 1870330U;
	int64_t x682 = 701750252LL;
	int16_t x683 = INT16_MAX;
	int64_t t170 = -129884LL;

    t170 = ((x681>x682)*(x683|x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MAX;
	static int64_t x687 = -1LL;
	volatile uint64_t x688 = 2962964195504361724LLU;
	volatile uint64_t t171 = UINT64_MAX;

    t171 = ((x685>x686)*(x687|x688));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	volatile uint32_t x690 = 22U;
	uint32_t x691 = 225421U;
	int8_t x692 = INT8_MIN;
	volatile uint32_t t172 = 2U;

    t172 = ((x689>x690)*(x691|x692));

    if (t172 != 4294967181U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -798242446283269178LL;
	int16_t x694 = INT16_MIN;
	uint32_t x695 = 24685U;
	uint32_t t173 = 22056330U;

    t173 = ((x693>x694)*(x695|x696));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = -1LL;
	int8_t x700 = 0;
	volatile int32_t t174 = 904130904;

    t174 = ((x697>x698)*(x699|x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x701 = 104890211U;
	static int16_t x702 = INT16_MIN;
	int16_t x703 = -16;
	volatile int32_t t175 = -27;

    t175 = ((x701>x702)*(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = 89;
	int64_t x706 = -1LL;
	uint8_t x707 = UINT8_MAX;
	volatile int16_t x708 = -1;
	static int32_t t176 = 0;

    t176 = ((x705>x706)*(x707|x708));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	static uint16_t x710 = UINT16_MAX;
	int16_t x711 = INT16_MIN;
	uint64_t x712 = 117887195011156LLU;
	uint64_t t177 = 575589685625639492LLU;

    t177 = ((x709>x710)*(x711|x712));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x713 = 79U;
	int16_t x714 = -1;
	static volatile uint64_t t178 = 62146LLU;

    t178 = ((x713>x714)*(x715|x716));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x717 = INT32_MAX;
	static volatile uint64_t x718 = UINT64_MAX;
	int8_t x720 = INT8_MAX;
	volatile int32_t t179 = 3;

    t179 = ((x717>x718)*(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = 128114526053819LLU;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 45311536839LLU;
	int8_t x724 = -6;

    t180 = ((x721>x722)*(x723|x724));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MIN;
	static int32_t x726 = -1;
	int64_t x728 = -1LL;
	int64_t t181 = -245LL;

    t181 = ((x725>x726)*(x727|x728));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x731 = -1;
	int8_t x732 = 0;

    t182 = ((x729>x730)*(x731|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int64_t x734 = INT64_MIN;
	int16_t x735 = INT16_MIN;
	int64_t x736 = 47LL;
	volatile int64_t t183 = -684522873752686606LL;

    t183 = ((x733>x734)*(x735|x736));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = -1;
	int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MIN;
	volatile int64_t t184 = 1852LL;

    t184 = ((x737>x738)*(x739|x740));

    if (t184 != -128LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = 56;
	int64_t x743 = INT64_MAX;
	volatile int64_t t185 = INT64_MAX;

    t185 = ((x741>x742)*(x743|x744));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x746 = 149LLU;
	int64_t x747 = 238653757318013LL;
	uint8_t x748 = 5U;
	volatile int64_t t186 = 467446175570198LL;

    t186 = ((x745>x746)*(x747|x748));

    if (t186 != 238653757318013LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -46;
	int32_t x750 = 0;
	volatile uint8_t x751 = 125U;
	static volatile int64_t t187 = -4396965LL;

    t187 = ((x749>x750)*(x751|x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 282797U;
	volatile int32_t x754 = INT32_MAX;
	int8_t x755 = INT8_MIN;
	uint32_t x756 = UINT32_MAX;
	static uint32_t t188 = 1153398921U;

    t188 = ((x753>x754)*(x755|x756));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x758 = 26U;
	uint32_t x759 = 0U;
	int32_t x760 = -1;

    t189 = ((x757>x758)*(x759|x760));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x762 = -1;
	int32_t x763 = -194;
	static volatile uint8_t x764 = 16U;
	static int32_t t190 = -89894016;

    t190 = ((x761>x762)*(x763|x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -25103943630444LL;
	int64_t x766 = INT64_MIN;
	int16_t x767 = 127;
	static volatile int16_t x768 = INT16_MAX;
	volatile int32_t t191 = -413105;

    t191 = ((x765>x766)*(x767|x768));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MAX;
	uint32_t x771 = 25U;
	int32_t x772 = 8302914;
	volatile uint32_t t192 = 29U;

    t192 = ((x769>x770)*(x771|x772));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x774 = INT64_MAX;
	volatile int32_t x775 = -1;
	uint64_t x776 = 68556376431294LLU;
	uint64_t t193 = 710160742LLU;

    t193 = ((x773>x774)*(x775|x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -63;
	volatile uint32_t x778 = 128388770U;
	uint32_t x779 = UINT32_MAX;
	uint32_t t194 = UINT32_MAX;

    t194 = ((x777>x778)*(x779|x780));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	uint32_t x782 = UINT32_MAX;
	uint32_t x783 = 413U;
	uint64_t x784 = 3560701679LLU;
	volatile uint64_t t195 = 13645901543235768LLU;

    t195 = ((x781>x782)*(x783|x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 24U;
	uint64_t x787 = 5438196371265LLU;
	volatile int8_t x788 = INT8_MAX;
	static uint64_t t196 = 47LLU;

    t196 = ((x785>x786)*(x787|x788));

    if (t196 != 5438196371327LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = UINT16_MAX;
	volatile int16_t x790 = -1;
	static uint32_t x792 = UINT32_MAX;
	uint32_t t197 = UINT32_MAX;

    t197 = ((x789>x790)*(x791|x792));

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = INT8_MIN;
	uint16_t x794 = 9156U;
	static volatile int32_t t198 = -38730230;

    t198 = ((x793>x794)*(x795|x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint64_t x797 = 8201138505820089LLU;
	int64_t x798 = -47699315868376LL;
	uint16_t x799 = UINT16_MAX;
	static int32_t x800 = -1;
	volatile int32_t t199 = -175;

    t199 = ((x797>x798)*(x799|x800));

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

