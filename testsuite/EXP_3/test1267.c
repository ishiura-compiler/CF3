
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

static uint16_t x1 = 172U;
int8_t x6 = INT8_MIN;
int16_t x9 = -96;
int16_t x15 = -1;
volatile uint64_t x22 = 3LLU;
uint16_t x24 = 3105U;
int32_t t6 = -3302;
volatile uint8_t x36 = UINT8_MAX;
int8_t x39 = -1;
uint32_t x44 = 38U;
int32_t x45 = -1;
volatile int8_t x46 = INT8_MIN;
volatile uint64_t x69 = 149438602404LLU;
int32_t x73 = INT32_MIN;
uint32_t x74 = 86185U;
uint64_t x76 = 262LLU;
volatile int64_t x77 = INT64_MIN;
int16_t x78 = -1;
uint32_t x79 = UINT32_MAX;
static uint16_t x84 = 55U;
int8_t x86 = -1;
uint64_t x87 = UINT64_MAX;
int32_t t22 = 188859;
static uint16_t x113 = UINT16_MAX;
volatile int16_t x114 = INT16_MIN;
int32_t t28 = -5;
volatile int16_t x118 = -1;
volatile uint16_t x124 = UINT16_MAX;
int32_t x126 = INT32_MIN;
int32_t x127 = -15865;
uint16_t x130 = 9U;
int16_t x133 = INT16_MIN;
int8_t x137 = 0;
int8_t x142 = INT8_MAX;
int64_t x147 = INT64_MIN;
int8_t x148 = INT8_MAX;
uint8_t x170 = 1U;
int16_t x176 = INT16_MIN;
uint64_t x179 = UINT64_MAX;
volatile uint32_t x181 = 3406U;
int16_t x189 = INT16_MAX;
static volatile int8_t x192 = -1;
volatile int32_t x194 = -1;
int32_t x199 = INT32_MIN;
static int8_t x202 = -1;
int32_t x203 = 323081;
volatile int16_t x204 = 1924;
int32_t t51 = 45906265;
int32_t x209 = 8133;
static int16_t x215 = -10022;
uint16_t x228 = UINT16_MAX;
static int16_t x232 = -398;
int8_t x239 = -1;
int16_t x243 = INT16_MIN;
uint64_t x261 = UINT64_MAX;
uint16_t x262 = 2090U;
int32_t x267 = -340;
int64_t x269 = INT64_MIN;
volatile int32_t t67 = -1416;
int16_t x275 = 13;
uint64_t x279 = UINT64_MAX;
int32_t t70 = -365871;
static int16_t x288 = INT16_MIN;
static int16_t x294 = INT16_MIN;
volatile int8_t x297 = INT8_MIN;
volatile int32_t x298 = INT32_MIN;
uint16_t x300 = 3193U;
volatile int32_t t74 = -57;
int16_t x301 = INT16_MAX;
int32_t t75 = 3926;
int8_t x311 = 26;
int16_t x312 = INT16_MIN;
int8_t x314 = -31;
volatile int32_t t78 = -21;
static int32_t t85 = 0;
int32_t x346 = 24;
int64_t x349 = INT64_MAX;
static uint32_t x350 = 182U;
uint64_t x354 = 6088506040615914311LLU;
static int8_t x357 = 2;
int8_t x359 = 18;
static uint16_t x365 = 6U;
int16_t x370 = -1;
int64_t x371 = INT64_MIN;
volatile int16_t x375 = INT16_MAX;
int32_t x379 = INT32_MIN;
int16_t x385 = -1;
volatile int16_t x387 = INT16_MIN;
int16_t x389 = INT16_MIN;
int16_t x391 = INT16_MIN;
static int32_t x393 = INT32_MAX;
int32_t t98 = 1006009;
int32_t t99 = -2;
int16_t x402 = 1;
int32_t x403 = -1;
static volatile uint8_t x404 = UINT8_MAX;
uint32_t x409 = UINT32_MAX;
uint16_t x416 = UINT16_MAX;
int64_t x418 = INT64_MIN;
int32_t t104 = 2171440;
static volatile int32_t t105 = -7535;
int8_t x425 = INT8_MIN;
int8_t x426 = -1;
uint16_t x427 = 555U;
int32_t x428 = INT32_MIN;
volatile uint64_t x431 = 275196393371953LLU;
static int32_t t108 = -79;
static int32_t x438 = -119209592;
volatile uint64_t x440 = UINT64_MAX;
uint8_t x445 = UINT8_MAX;
int64_t x447 = INT64_MAX;
uint16_t x448 = 1428U;
volatile int32_t t111 = -164;
int8_t x449 = INT8_MAX;
uint8_t x452 = 117U;
static int8_t x453 = INT8_MIN;
static int16_t x454 = 45;
volatile int32_t t113 = 103767;
static volatile int8_t x462 = INT8_MIN;
volatile uint8_t x468 = UINT8_MAX;
static int32_t t116 = 170164453;
volatile int32_t t117 = 29671;
uint32_t x473 = 0U;
volatile uint64_t x479 = 3340042731LLU;
uint64_t x481 = 40591813432583LLU;
volatile int32_t t120 = -6795;
static uint16_t x488 = 2U;
static volatile int32_t t123 = 1025767126;
int8_t x499 = -37;
static uint64_t x500 = 126LLU;
int64_t x502 = -1LL;
int32_t x505 = -1;
volatile int32_t t127 = 192986;
int32_t x521 = INT32_MIN;
volatile int32_t t130 = -65702520;
uint64_t x528 = UINT64_MAX;
int32_t x530 = -1;
volatile int8_t x531 = 9;
int16_t x535 = 1656;
volatile uint16_t x540 = UINT16_MAX;
int64_t x550 = 136896LL;
int8_t x553 = 1;
uint64_t x556 = 283LLU;
int64_t x561 = INT64_MIN;
uint8_t x562 = 51U;
int32_t x564 = 1522692;
volatile int16_t x566 = -1;
int32_t x568 = INT32_MAX;
int32_t x569 = INT32_MIN;
int32_t x572 = -1;
int32_t t142 = -1583190;
uint16_t x573 = 3688U;
volatile uint8_t x574 = 1U;
volatile int32_t t143 = 13580;
static int32_t t144 = 3;
uint32_t x582 = UINT32_MAX;
uint16_t x585 = 20679U;
int8_t x587 = INT8_MIN;
volatile int32_t x588 = INT32_MAX;
int8_t x590 = INT8_MIN;
volatile int32_t t147 = 3398;
int32_t x594 = -1;
volatile uint16_t x602 = 2545U;
static int32_t x603 = INT32_MIN;
static uint64_t x604 = UINT64_MAX;
volatile int8_t x605 = INT8_MIN;
volatile int32_t t151 = -409456;
int8_t x609 = INT8_MIN;
int8_t x618 = INT8_MIN;
uint64_t x625 = 1LLU;
int8_t x637 = 0;
volatile uint32_t x638 = 498728U;
int32_t x641 = INT32_MIN;
int32_t x645 = INT32_MIN;
uint16_t x649 = 18972U;
static int16_t x656 = 14513;
volatile int8_t x659 = INT8_MIN;
static int64_t x662 = -45851626LL;
uint16_t x664 = 8054U;
volatile int32_t t165 = 1153;
volatile int32_t x682 = 13902;
int64_t x684 = INT64_MIN;
int16_t x700 = -1;
int64_t x709 = -1LL;
static volatile int32_t t177 = 39;
int16_t x713 = INT16_MIN;
int8_t x715 = 0;
int16_t x717 = INT16_MIN;
volatile uint32_t x720 = 715U;
volatile int32_t t180 = 4962265;
uint16_t x726 = 60U;
int8_t x732 = -1;
int16_t x738 = 821;
static volatile uint8_t x739 = UINT8_MAX;
volatile int32_t t184 = 79153;
volatile uint8_t x741 = 122U;
int8_t x759 = INT8_MAX;
static int32_t t189 = -168;
int8_t x763 = 13;
uint8_t x766 = 0U;
int8_t x774 = INT8_MAX;
static uint16_t x782 = 553U;
static int32_t x791 = 12484733;
int32_t t197 = -1442222;
int64_t x795 = INT64_MIN;
volatile int32_t t198 = -39164298;
int32_t t199 = -499199511;


void f0(void) {
    	static int32_t x2 = -809599;
	int32_t x3 = INT32_MIN;
	int32_t x4 = -1;
	static volatile int32_t t0 = 226;

    t0 = ((x1!=x2)!=(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -2668107162185620723LL;
	uint64_t x7 = UINT64_MAX;
	static uint32_t x8 = 25U;
	volatile int32_t t1 = 1071492613;

    t1 = ((x5!=x6)!=(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -11127383LL;
	volatile int8_t x11 = INT8_MAX;
	static int8_t x12 = -4;
	int32_t t2 = -22894175;

    t2 = ((x9!=x10)!=(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 2358;
	int64_t x14 = INT64_MAX;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 13328132;

    t3 = ((x13!=x14)!=(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 0;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = -1LL;
	volatile uint32_t x20 = UINT32_MAX;
	int32_t t4 = 4084683;

    t4 = ((x17!=x18)!=(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 13U;
	int8_t x23 = INT8_MIN;
	volatile int32_t t5 = 0;

    t5 = ((x21!=x22)!=(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x25 = UINT8_MAX;
	int16_t x26 = 14;
	volatile uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;

    t6 = ((x25!=x26)!=(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = 1U;
	uint32_t x32 = 25836276U;
	volatile int32_t t7 = 11831170;

    t7 = ((x29!=x30)!=(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int32_t x34 = INT32_MAX;
	static volatile uint16_t x35 = 48U;
	int32_t t8 = -66745;

    t8 = ((x33!=x34)!=(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	static uint32_t x38 = 207U;
	volatile int64_t x40 = -1LL;
	static int32_t t9 = -2235331;

    t9 = ((x37!=x38)!=(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x41 = 14422659427417LLU;
	int64_t x42 = -3635059149LL;
	int16_t x43 = INT16_MAX;
	int32_t t10 = 0;

    t10 = ((x41!=x42)!=(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -14460;

    t11 = ((x45!=x46)!=(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint8_t x50 = 10U;
	uint8_t x51 = 114U;
	volatile int64_t x52 = INT64_MIN;
	int32_t t12 = -432126369;

    t12 = ((x49!=x50)!=(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -78885705LL;
	int16_t x54 = INT16_MIN;
	uint8_t x55 = 1U;
	uint8_t x56 = 60U;
	int32_t t13 = 10;

    t13 = ((x53!=x54)!=(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = INT32_MAX;
	int8_t x58 = -1;
	int64_t x59 = INT64_MAX;
	uint32_t x60 = 5333U;
	int32_t t14 = 109;

    t14 = ((x57!=x58)!=(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 10533798688862438LLU;
	volatile uint8_t x62 = 3U;
	int8_t x63 = -1;
	int8_t x64 = INT8_MIN;
	static volatile int32_t t15 = 4161103;

    t15 = ((x61!=x62)!=(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = 3795024450489182LL;
	volatile int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MAX;
	static int32_t t16 = -7265;

    t16 = ((x65!=x66)!=(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x70 = INT64_MIN;
	int8_t x71 = -1;
	static uint64_t x72 = 45083LLU;
	volatile int32_t t17 = 1993730;

    t17 = ((x69!=x70)!=(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x75 = INT8_MIN;
	volatile int32_t t18 = -21;

    t18 = ((x73!=x74)!=(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x80 = 0;
	static volatile int32_t t19 = -6;

    t19 = ((x77!=x78)!=(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = -239;
	int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	int32_t t20 = -44434032;

    t20 = ((x81!=x82)!=(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	uint16_t x88 = 14018U;
	volatile int32_t t21 = 13518945;

    t21 = ((x85!=x86)!=(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	static volatile uint16_t x91 = UINT16_MAX;
	int64_t x92 = 595354890281741731LL;

    t22 = ((x89!=x90)!=(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	uint8_t x96 = 16U;
	int32_t t23 = -7;

    t23 = ((x93!=x94)!=(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -1;
	static int8_t x98 = -1;
	uint64_t x99 = 3971242743LLU;
	static int64_t x100 = INT64_MAX;
	volatile int32_t t24 = 196674;

    t24 = ((x97!=x98)!=(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 1LL;
	uint64_t x102 = 20759644222996304LLU;
	static int16_t x103 = INT16_MAX;
	uint64_t x104 = 339779675074LLU;
	volatile int32_t t25 = -30012513;

    t25 = ((x101!=x102)!=(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	static uint64_t x106 = 40832306380LLU;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 2;

    t26 = ((x105!=x106)!=(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int64_t x109 = INT64_MIN;
	int8_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int32_t x112 = -1;
	int32_t t27 = 507;

    t27 = ((x109!=x110)!=(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x115 = -2775600586LL;
	uint64_t x116 = 29320442319051845LLU;

    t28 = ((x113!=x114)!=(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -1LL;
	int32_t x119 = INT32_MIN;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = 3;

    t29 = ((x117!=x118)!=(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	int32_t x122 = -1;
	int16_t x123 = -10089;
	volatile int32_t t30 = 1982230;

    t30 = ((x121!=x122)!=(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	volatile uint64_t x128 = 1430968427618LLU;
	volatile int32_t t31 = 2;

    t31 = ((x125!=x126)!=(x127!=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = -1;
	int64_t x131 = -1LL;
	int32_t x132 = 115871;
	int32_t t32 = -70;

    t32 = ((x129!=x130)!=(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MIN;
	static volatile int8_t x136 = INT8_MAX;
	int32_t t33 = 183475991;

    t33 = ((x133!=x134)!=(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = -140246908108031LL;
	volatile int32_t x139 = INT32_MAX;
	static uint32_t x140 = 7467U;
	volatile int32_t t34 = 6286550;

    t34 = ((x137!=x138)!=(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int16_t x143 = 0;
	int64_t x144 = -1LL;
	volatile int32_t t35 = -128175557;

    t35 = ((x141!=x142)!=(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	int16_t x146 = INT16_MIN;
	int32_t t36 = -6386574;

    t36 = ((x145!=x146)!=(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	volatile int16_t x150 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = 1;
	volatile int32_t t37 = 26823;

    t37 = ((x149!=x150)!=(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	static int32_t x154 = -1;
	static int32_t x155 = INT32_MIN;
	volatile uint16_t x156 = UINT16_MAX;
	static int32_t t38 = 120203009;

    t38 = ((x153!=x154)!=(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = 1429U;
	static uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = 8492868255716LL;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 916;

    t39 = ((x157!=x158)!=(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = UINT16_MAX;
	int16_t x162 = -1;
	uint16_t x163 = UINT16_MAX;
	static int64_t x164 = INT64_MAX;
	static volatile int32_t t40 = -337448282;

    t40 = ((x161!=x162)!=(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int16_t x166 = 3;
	static volatile int64_t x167 = -605626LL;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 4597287;

    t41 = ((x165!=x166)!=(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = 4LL;
	int32_t x171 = INT32_MIN;
	static volatile uint64_t x172 = UINT64_MAX;
	int32_t t42 = -11723268;

    t42 = ((x169!=x170)!=(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 44088432U;
	int32_t x174 = INT32_MIN;
	volatile uint8_t x175 = 12U;
	volatile int32_t t43 = -215732632;

    t43 = ((x173!=x174)!=(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = 9;
	int64_t x178 = INT64_MIN;
	int64_t x180 = -1LL;
	volatile int32_t t44 = -24357;

    t44 = ((x177!=x178)!=(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = 0;

    t45 = ((x181!=x182)!=(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 0U;
	uint16_t x186 = UINT16_MAX;
	volatile int64_t x187 = -1LL;
	int16_t x188 = -1;
	volatile int32_t t46 = -1;

    t46 = ((x185!=x186)!=(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x190 = -1;
	int8_t x191 = INT8_MAX;
	int32_t t47 = -1602;

    t47 = ((x189!=x190)!=(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x193 = 437014LL;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 4;
	int32_t t48 = -419519961;

    t48 = ((x193!=x194)!=(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	static uint32_t x198 = 209274094U;
	volatile int64_t x200 = INT64_MIN;
	int32_t t49 = 7100722;

    t49 = ((x197!=x198)!=(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -1LL;
	volatile int32_t t50 = 192272403;

    t50 = ((x201!=x202)!=(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 247U;
	int64_t x206 = -2311LL;
	volatile uint32_t x207 = UINT32_MAX;
	volatile int64_t x208 = INT64_MIN;

    t51 = ((x205!=x206)!=(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = INT64_MIN;
	int16_t x211 = -1;
	static int32_t x212 = -1;
	int32_t t52 = 863164;

    t52 = ((x209!=x210)!=(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = -1;
	int16_t x214 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	static int32_t t53 = 400222;

    t53 = ((x213!=x214)!=(x215!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int64_t x218 = -791357LL;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = 33;
	volatile int32_t t54 = 1879808;

    t54 = ((x217!=x218)!=(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	uint16_t x222 = 6771U;
	int16_t x223 = INT16_MIN;
	volatile uint64_t x224 = UINT64_MAX;
	int32_t t55 = -437670657;

    t55 = ((x221!=x222)!=(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = 1;
	int32_t x226 = 210594;
	volatile uint64_t x227 = 20781612LLU;
	int32_t t56 = 1;

    t56 = ((x225!=x226)!=(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	static volatile uint32_t x230 = UINT32_MAX;
	volatile int8_t x231 = 21;
	int32_t t57 = -58468894;

    t57 = ((x229!=x230)!=(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	int8_t x235 = INT8_MIN;
	int32_t x236 = 2;
	static int32_t t58 = 177593232;

    t58 = ((x233!=x234)!=(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	volatile int16_t x240 = -1;
	volatile int32_t t59 = -81;

    t59 = ((x237!=x238)!=(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	static volatile int16_t x242 = -701;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -11148303;

    t60 = ((x241!=x242)!=(x243!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = INT64_MIN;
	int32_t x246 = 7281;
	int8_t x247 = -1;
	uint32_t x248 = 3U;
	static volatile int32_t t61 = -461665813;

    t61 = ((x245!=x246)!=(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 1U;
	static uint16_t x252 = 1675U;
	volatile int32_t t62 = 428462;

    t62 = ((x249!=x250)!=(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	volatile uint64_t x255 = 3LLU;
	int64_t x256 = -1LL;
	volatile int32_t t63 = -1;

    t63 = ((x253!=x254)!=(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 1753649946LLU;
	int64_t x258 = INT64_MAX;
	int16_t x259 = INT16_MIN;
	static volatile uint32_t x260 = 11U;
	volatile int32_t t64 = 121;

    t64 = ((x257!=x258)!=(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x263 = 174402715627LLU;
	static uint16_t x264 = 490U;
	volatile int32_t t65 = -2;

    t65 = ((x261!=x262)!=(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 1564938548LLU;
	uint8_t x266 = UINT8_MAX;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 26;

    t66 = ((x265!=x266)!=(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = INT32_MIN;
	static uint64_t x271 = 16992509LLU;
	int32_t x272 = INT32_MIN;

    t67 = ((x269!=x270)!=(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = -1611;
	int8_t x274 = 0;
	static int16_t x276 = 10935;
	int32_t t68 = 963926;

    t68 = ((x273!=x274)!=(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MAX;
	uint8_t x278 = 1U;
	int32_t x280 = 1130654;
	int32_t t69 = -1611035;

    t69 = ((x277!=x278)!=(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -198468LL;
	int8_t x282 = INT8_MAX;
	static int8_t x283 = INT8_MIN;
	uint32_t x284 = 29832079U;

    t70 = ((x281!=x282)!=(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 21095167893LL;
	int16_t x286 = INT16_MIN;
	int8_t x287 = INT8_MIN;
	int32_t t71 = 5364990;

    t71 = ((x285!=x286)!=(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 31U;
	int64_t x290 = 1LL;
	static int64_t x291 = INT64_MAX;
	static uint8_t x292 = UINT8_MAX;
	int32_t t72 = -43;

    t72 = ((x289!=x290)!=(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 5606;
	int16_t x295 = 0;
	int64_t x296 = -1LL;
	int32_t t73 = 7835248;

    t73 = ((x293!=x294)!=(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x299 = UINT8_MAX;

    t74 = ((x297!=x298)!=(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x302 = UINT64_MAX;
	volatile int64_t x303 = INT64_MIN;
	static uint32_t x304 = UINT32_MAX;

    t75 = ((x301!=x302)!=(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	uint8_t x306 = 1U;
	volatile uint64_t x307 = 4220084402LLU;
	int16_t x308 = -1;
	int32_t t76 = -4194048;

    t76 = ((x305!=x306)!=(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 61;
	uint8_t x310 = UINT8_MAX;
	int32_t t77 = -14;

    t77 = ((x309!=x310)!=(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 1;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MIN;

    t78 = ((x313!=x314)!=(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	uint32_t x318 = 62U;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;
	int32_t t79 = 132794977;

    t79 = ((x317!=x318)!=(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -5;
	uint16_t x322 = UINT16_MAX;
	uint8_t x323 = 48U;
	static int16_t x324 = -559;
	int32_t t80 = 67125;

    t80 = ((x321!=x322)!=(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MAX;
	volatile uint64_t x326 = 20LLU;
	int64_t x327 = -451224295974LL;
	uint16_t x328 = 150U;
	int32_t t81 = 732;

    t81 = ((x325!=x326)!=(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 9U;
	volatile uint32_t x330 = UINT32_MAX;
	int32_t x331 = -1;
	int64_t x332 = INT64_MIN;
	int32_t t82 = -1;

    t82 = ((x329!=x330)!=(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	int64_t x334 = -14119433493473314LL;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = -536619;
	int32_t t83 = 2723927;

    t83 = ((x333!=x334)!=(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int32_t x338 = INT32_MIN;
	static uint32_t x339 = 1U;
	int8_t x340 = -14;
	static volatile int32_t t84 = -365;

    t84 = ((x337!=x338)!=(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = 3065448LL;
	static uint64_t x343 = 23658LLU;
	static volatile int16_t x344 = INT16_MIN;

    t85 = ((x341!=x342)!=(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 8051U;
	int64_t x347 = INT64_MIN;
	volatile int8_t x348 = 12;
	int32_t t86 = 438;

    t86 = ((x345!=x346)!=(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x351 = 1026685261U;
	int16_t x352 = 2;
	volatile int32_t t87 = -110849;

    t87 = ((x349!=x350)!=(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = -1;
	int64_t x355 = -1LL;
	int32_t x356 = -1;
	static volatile int32_t t88 = 1;

    t88 = ((x353!=x354)!=(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x358 = 655959U;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -237495420;

    t89 = ((x357!=x358)!=(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MIN;
	volatile int16_t x362 = INT16_MIN;
	uint8_t x363 = 88U;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = -771763;

    t90 = ((x361!=x362)!=(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x366 = INT32_MAX;
	int16_t x367 = 2;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = 70513581;

    t91 = ((x365!=x366)!=(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 494U;
	volatile uint32_t x372 = 341U;
	int32_t t92 = -57141696;

    t92 = ((x369!=x370)!=(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x373 = -1;
	volatile uint32_t x374 = 125U;
	int64_t x376 = 1052LL;
	volatile int32_t t93 = 17327;

    t93 = ((x373!=x374)!=(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 7U;
	uint32_t x378 = 412U;
	volatile int64_t x380 = -8310799306789LL;
	int32_t t94 = 36;

    t94 = ((x377!=x378)!=(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	int64_t x383 = 3604599566LL;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -35;

    t95 = ((x381!=x382)!=(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = 434;
	static int64_t x388 = INT64_MAX;
	volatile int32_t t96 = -67574051;

    t96 = ((x385!=x386)!=(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = -1LL;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -14;

    t97 = ((x389!=x390)!=(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = -1;
	int64_t x395 = -173226505336309LL;
	static int32_t x396 = INT32_MIN;

    t98 = ((x393!=x394)!=(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	uint64_t x398 = UINT64_MAX;
	volatile int64_t x399 = -1LL;
	int64_t x400 = 642396LL;

    t99 = ((x397!=x398)!=(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	int32_t t100 = 18;

    t100 = ((x401!=x402)!=(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = UINT8_MAX;
	int32_t x406 = INT32_MAX;
	int32_t x407 = -31076;
	int8_t x408 = INT8_MIN;
	int32_t t101 = -160919;

    t101 = ((x405!=x406)!=(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x410 = -1LL;
	static int8_t x411 = -52;
	static uint16_t x412 = 27U;
	int32_t t102 = 1;

    t102 = ((x409!=x410)!=(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint16_t x414 = 5799U;
	uint32_t x415 = 184U;
	static volatile int32_t t103 = -92;

    t103 = ((x413!=x414)!=(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -1;
	int8_t x419 = INT8_MIN;
	static uint8_t x420 = 6U;

    t104 = ((x417!=x418)!=(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 102U;
	volatile int64_t x422 = -1LL;
	volatile uint32_t x423 = 10857U;
	int16_t x424 = -1;

    t105 = ((x421!=x422)!=(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t t106 = -41952300;

    t106 = ((x425!=x426)!=(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	uint64_t x430 = 493410574201028289LLU;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = 7968;

    t107 = ((x429!=x430)!=(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 91U;
	int16_t x434 = INT16_MIN;
	int64_t x435 = -30084625975565598LL;
	static uint8_t x436 = UINT8_MAX;

    t108 = ((x433!=x434)!=(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	volatile int32_t x439 = INT32_MIN;
	volatile int32_t t109 = -150482;

    t109 = ((x437!=x438)!=(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = 105U;
	uint8_t x442 = UINT8_MAX;
	static int8_t x443 = -26;
	uint8_t x444 = 3U;
	static volatile int32_t t110 = -29;

    t110 = ((x441!=x442)!=(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = -1;

    t111 = ((x445!=x446)!=(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x450 = -1LL;
	uint16_t x451 = 387U;
	int32_t t112 = 329141790;

    t112 = ((x449!=x450)!=(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x455 = INT64_MIN;
	int32_t x456 = 7918;

    t113 = ((x453!=x454)!=(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 207089U;
	static uint8_t x458 = 4U;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	int32_t t114 = -251300149;

    t114 = ((x457!=x458)!=(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 4168004;
	int64_t x463 = INT64_MIN;
	static int16_t x464 = INT16_MIN;
	int32_t t115 = 254663266;

    t115 = ((x461!=x462)!=(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = INT64_MAX;
	int64_t x466 = -86LL;
	uint32_t x467 = 0U;

    t116 = ((x465!=x466)!=(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x469 = 5943246;
	int32_t x470 = INT32_MAX;
	uint16_t x471 = 3062U;
	int64_t x472 = 7176555LL;

    t117 = ((x469!=x470)!=(x471!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x474 = INT8_MIN;
	uint64_t x475 = 3050283072356794LLU;
	int16_t x476 = 245;
	int32_t t118 = -1148961;

    t118 = ((x473!=x474)!=(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x477 = INT32_MAX;
	static volatile int32_t x478 = INT32_MIN;
	int16_t x480 = -1;
	volatile int32_t t119 = 3933;

    t119 = ((x477!=x478)!=(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x482 = INT32_MIN;
	int16_t x483 = INT16_MIN;
	static int8_t x484 = INT8_MAX;

    t120 = ((x481!=x482)!=(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 3856;
	volatile uint32_t x486 = 1638U;
	uint8_t x487 = 14U;
	int32_t t121 = 1;

    t121 = ((x485!=x486)!=(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = -1LL;
	volatile uint8_t x491 = 11U;
	int8_t x492 = -2;
	volatile int32_t t122 = -33142557;

    t122 = ((x489!=x490)!=(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 665228LLU;
	static volatile int8_t x494 = INT8_MIN;
	uint16_t x495 = 30330U;
	volatile uint8_t x496 = 12U;

    t123 = ((x493!=x494)!=(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	volatile int64_t x498 = INT64_MIN;
	static volatile int32_t t124 = 18;

    t124 = ((x497!=x498)!=(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MAX;
	int16_t x503 = -9185;
	int32_t x504 = INT32_MAX;
	int32_t t125 = -157689;

    t125 = ((x501!=x502)!=(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = -86663LL;
	static int64_t x507 = -1LL;
	int8_t x508 = INT8_MAX;
	static volatile int32_t t126 = -219;

    t126 = ((x505!=x506)!=(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = INT8_MAX;
	static uint8_t x510 = 10U;
	static volatile uint64_t x511 = 279821107973LLU;
	int64_t x512 = INT64_MIN;

    t127 = ((x509!=x510)!=(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint64_t x514 = 6LLU;
	uint16_t x515 = 16U;
	int32_t x516 = 1579226;
	int32_t t128 = 9;

    t128 = ((x513!=x514)!=(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	int64_t x518 = INT64_MAX;
	int32_t x519 = -221;
	static int8_t x520 = 1;
	static volatile int32_t t129 = -472;

    t129 = ((x517!=x518)!=(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MAX;
	static int16_t x523 = -1;
	uint64_t x524 = UINT64_MAX;

    t130 = ((x521!=x522)!=(x523!=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x525 = INT32_MAX;
	uint32_t x526 = 266U;
	int16_t x527 = 1;
	int32_t t131 = -1607477;

    t131 = ((x525!=x526)!=(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 22;

    t132 = ((x529!=x530)!=(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -1LL;
	int16_t x534 = INT16_MIN;
	int32_t x536 = INT32_MIN;
	volatile int32_t t133 = -20;

    t133 = ((x533!=x534)!=(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x537 = UINT32_MAX;
	int16_t x538 = INT16_MAX;
	int8_t x539 = INT8_MAX;
	int32_t t134 = 1;

    t134 = ((x537!=x538)!=(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = -1;
	int16_t x542 = INT16_MIN;
	volatile uint64_t x543 = 2722580902665630921LLU;
	int64_t x544 = 2304232798931511827LL;
	int32_t t135 = -30312;

    t135 = ((x541!=x542)!=(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = -1;
	static int8_t x547 = INT8_MAX;
	int32_t x548 = INT32_MIN;
	volatile int32_t t136 = -1;

    t136 = ((x545!=x546)!=(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	volatile uint16_t x551 = UINT16_MAX;
	int64_t x552 = -1LL;
	int32_t t137 = 1;

    t137 = ((x549!=x550)!=(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = UINT8_MAX;
	static int64_t x555 = -1LL;
	volatile int32_t t138 = -4;

    t138 = ((x553!=x554)!=(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x558 = -19995;
	uint64_t x559 = 2209778LLU;
	uint16_t x560 = 62U;
	static volatile int32_t t139 = 3865043;

    t139 = ((x557!=x558)!=(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = -1;
	int32_t t140 = 0;

    t140 = ((x561!=x562)!=(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = UINT64_MAX;
	static int32_t x567 = INT32_MAX;
	static int32_t t141 = -313;

    t141 = ((x565!=x566)!=(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x570 = 242039389173LLU;
	static int64_t x571 = INT64_MIN;

    t142 = ((x569!=x570)!=(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x575 = UINT16_MAX;
	static int64_t x576 = INT64_MIN;

    t143 = ((x573!=x574)!=(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = -1;
	static volatile int64_t x578 = -1LL;
	volatile int16_t x579 = 3205;
	uint8_t x580 = 7U;

    t144 = ((x577!=x578)!=(x579!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 1U;
	volatile int8_t x583 = -5;
	volatile int64_t x584 = INT64_MIN;
	int32_t t145 = -39533435;

    t145 = ((x581!=x582)!=(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = INT32_MIN;
	volatile int32_t t146 = -11851;

    t146 = ((x585!=x586)!=(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MIN;
	uint8_t x591 = 0U;
	int16_t x592 = INT16_MIN;

    t147 = ((x589!=x590)!=(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	uint8_t x595 = UINT8_MAX;
	int16_t x596 = -1;
	volatile int32_t t148 = -17;

    t148 = ((x593!=x594)!=(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MIN;
	volatile int64_t x598 = INT64_MIN;
	int16_t x599 = -1;
	volatile uint32_t x600 = UINT32_MAX;
	volatile int32_t t149 = -3;

    t149 = ((x597!=x598)!=(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int32_t t150 = 2;

    t150 = ((x601!=x602)!=(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x606 = UINT8_MAX;
	volatile int64_t x607 = INT64_MIN;
	uint16_t x608 = 58U;

    t151 = ((x605!=x606)!=(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = INT32_MIN;
	int8_t x611 = INT8_MIN;
	volatile int8_t x612 = -1;
	volatile int32_t t152 = 2032;

    t152 = ((x609!=x610)!=(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -7626104602719277LL;
	int32_t x614 = INT32_MIN;
	volatile uint32_t x615 = 62173U;
	uint8_t x616 = 4U;
	static volatile int32_t t153 = -111;

    t153 = ((x613!=x614)!=(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 2381U;
	static int8_t x619 = INT8_MAX;
	uint32_t x620 = 3882934U;
	int32_t t154 = 552236;

    t154 = ((x617!=x618)!=(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int8_t x622 = 0;
	int16_t x623 = INT16_MIN;
	volatile int16_t x624 = INT16_MIN;
	volatile int32_t t155 = -5946231;

    t155 = ((x621!=x622)!=(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = -1LL;
	uint64_t x627 = 269379275LLU;
	volatile int16_t x628 = INT16_MAX;
	int32_t t156 = 1708791;

    t156 = ((x625!=x626)!=(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x629 = -54;
	static volatile int32_t x630 = 166;
	uint16_t x631 = 104U;
	int32_t x632 = 285306;
	volatile int32_t t157 = 955548;

    t157 = ((x629!=x630)!=(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -57669734;
	volatile uint16_t x634 = 1U;
	static uint64_t x635 = UINT64_MAX;
	int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 1;

    t158 = ((x633!=x634)!=(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x639 = -1;
	int32_t x640 = INT32_MIN;
	volatile int32_t t159 = 53;

    t159 = ((x637!=x638)!=(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x642 = INT64_MAX;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MAX;
	volatile int32_t t160 = 17;

    t160 = ((x641!=x642)!=(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x646 = 490U;
	uint64_t x647 = 1764256LLU;
	volatile int16_t x648 = -1;
	volatile int32_t t161 = -10652540;

    t161 = ((x645!=x646)!=(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = -3801706792532LL;
	volatile uint32_t x651 = UINT32_MAX;
	uint32_t x652 = 27818461U;
	int32_t t162 = 3;

    t162 = ((x649!=x650)!=(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 4473U;
	volatile int8_t x654 = INT8_MIN;
	uint16_t x655 = 2341U;
	volatile int32_t t163 = -179332457;

    t163 = ((x653!=x654)!=(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int8_t x658 = -1;
	static int64_t x660 = 0LL;
	int32_t t164 = 12;

    t164 = ((x657!=x658)!=(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 0;
	static uint64_t x663 = UINT64_MAX;

    t165 = ((x661!=x662)!=(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int8_t x666 = INT8_MIN;
	static int64_t x667 = -1LL;
	int8_t x668 = INT8_MIN;
	volatile int32_t t166 = -728;

    t166 = ((x665!=x666)!=(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = -1;
	int32_t x670 = INT32_MIN;
	volatile int8_t x671 = -2;
	volatile int8_t x672 = INT8_MIN;
	volatile int32_t t167 = -3;

    t167 = ((x669!=x670)!=(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x674 = INT32_MIN;
	int32_t x675 = INT32_MIN;
	int16_t x676 = INT16_MIN;
	volatile int32_t t168 = 10116669;

    t168 = ((x673!=x674)!=(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 3522U;
	int8_t x678 = INT8_MAX;
	static int32_t x679 = INT32_MIN;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = 64889;

    t169 = ((x677!=x678)!=(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -242814345321497LL;
	int8_t x683 = -10;
	int32_t t170 = -4;

    t170 = ((x681!=x682)!=(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = 450;
	int16_t x686 = -1;
	int32_t x687 = -1069696;
	int8_t x688 = INT8_MIN;
	static int32_t t171 = 24;

    t171 = ((x685!=x686)!=(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 5708U;
	uint16_t x690 = 54U;
	int8_t x691 = -2;
	int16_t x692 = INT16_MIN;
	volatile int32_t t172 = -1351567;

    t172 = ((x689!=x690)!=(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x693 = 62139024696887LLU;
	static volatile int32_t x694 = 6365194;
	int16_t x695 = INT16_MIN;
	int16_t x696 = 198;
	volatile int32_t t173 = 5599;

    t173 = ((x693!=x694)!=(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = UINT8_MAX;
	int8_t x698 = -1;
	uint32_t x699 = 1019U;
	volatile int32_t t174 = -208559801;

    t174 = ((x697!=x698)!=(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 1;
	static uint16_t x702 = UINT16_MAX;
	volatile int8_t x703 = 1;
	int32_t x704 = 133321;
	int32_t t175 = -25804;

    t175 = ((x701!=x702)!=(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = UINT32_MAX;
	int8_t x706 = -1;
	int32_t x707 = -56;
	int32_t x708 = INT32_MIN;
	volatile int32_t t176 = -101;

    t176 = ((x705!=x706)!=(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x710 = INT32_MAX;
	int8_t x711 = INT8_MAX;
	uint64_t x712 = UINT64_MAX;

    t177 = ((x709!=x710)!=(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x714 = 7U;
	int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -15654;

    t178 = ((x713!=x714)!=(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = UINT8_MAX;
	int64_t x719 = 0LL;
	static volatile int32_t t179 = 19;

    t179 = ((x717!=x718)!=(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 1U;
	static int32_t x722 = -7828;
	static uint32_t x723 = 2250357U;
	int32_t x724 = -1;

    t180 = ((x721!=x722)!=(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	int16_t x728 = INT16_MAX;
	int32_t t181 = 1197934;

    t181 = ((x725!=x726)!=(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -2;
	int16_t x730 = -102;
	static volatile int8_t x731 = -1;
	int32_t t182 = 341;

    t182 = ((x729!=x730)!=(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	uint8_t x734 = UINT8_MAX;
	static volatile int8_t x735 = -3;
	volatile int64_t x736 = -28507LL;
	int32_t t183 = 34;

    t183 = ((x733!=x734)!=(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	int8_t x740 = -2;

    t184 = ((x737!=x738)!=(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = INT8_MIN;
	int8_t x743 = 26;
	int16_t x744 = -771;
	volatile int32_t t185 = -54;

    t185 = ((x741!=x742)!=(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	uint16_t x746 = 882U;
	uint8_t x747 = 63U;
	static int16_t x748 = -27;
	static int32_t t186 = 72368234;

    t186 = ((x745!=x746)!=(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = 836866U;
	uint64_t x750 = 3289184013098030679LLU;
	volatile int8_t x751 = 13;
	uint8_t x752 = 15U;
	int32_t t187 = -118304;

    t187 = ((x749!=x750)!=(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = UINT64_MAX;
	uint64_t x754 = UINT64_MAX;
	int64_t x755 = INT64_MIN;
	volatile int64_t x756 = INT64_MIN;
	int32_t t188 = 5;

    t188 = ((x753!=x754)!=(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x757 = INT32_MAX;
	int32_t x758 = INT32_MIN;
	int8_t x760 = -1;

    t189 = ((x757!=x758)!=(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x761 = 825U;
	int64_t x762 = INT64_MIN;
	int8_t x764 = 0;
	static int32_t t190 = 252837353;

    t190 = ((x761!=x762)!=(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	static uint16_t x767 = 12998U;
	int8_t x768 = INT8_MIN;
	static int32_t t191 = -46;

    t191 = ((x765!=x766)!=(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 2LLU;
	int32_t x770 = INT32_MIN;
	static uint16_t x771 = UINT16_MAX;
	uint32_t x772 = 20U;
	volatile int32_t t192 = 172287980;

    t192 = ((x769!=x770)!=(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -44280LL;
	int8_t x775 = INT8_MAX;
	int64_t x776 = 0LL;
	static volatile int32_t t193 = -14988;

    t193 = ((x773!=x774)!=(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 1;
	int8_t x778 = INT8_MIN;
	int32_t x779 = -11235620;
	int32_t x780 = 29101;
	volatile int32_t t194 = 2642545;

    t194 = ((x777!=x778)!=(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -1;
	int8_t x783 = INT8_MIN;
	uint16_t x784 = 313U;
	int32_t t195 = -1;

    t195 = ((x781!=x782)!=(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	uint32_t x786 = UINT32_MAX;
	uint64_t x787 = 24077047513LLU;
	int8_t x788 = 3;
	volatile int32_t t196 = -14133;

    t196 = ((x785!=x786)!=(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 118U;
	uint8_t x790 = 15U;
	int16_t x792 = INT16_MAX;

    t197 = ((x789!=x790)!=(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	uint8_t x794 = 95U;
	int16_t x796 = INT16_MIN;

    t198 = ((x793!=x794)!=(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x797 = 11U;
	int32_t x798 = INT32_MIN;
	static volatile int64_t x799 = INT64_MIN;
	int16_t x800 = INT16_MIN;

    t199 = ((x797!=x798)!=(x799!=x800));

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

