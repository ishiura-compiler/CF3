
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

static volatile int64_t x4 = INT64_MIN;
static volatile uint8_t x5 = 3U;
static int32_t x11 = INT32_MIN;
volatile uint16_t x15 = 9U;
volatile int32_t t3 = 27573195;
int16_t x17 = -3;
int8_t x18 = 39;
uint32_t x27 = UINT32_MAX;
volatile int16_t x32 = INT16_MIN;
volatile int8_t x33 = INT8_MIN;
uint8_t x36 = UINT8_MAX;
static volatile int16_t x38 = 0;
uint8_t x40 = 0U;
int16_t x47 = INT16_MIN;
int8_t x49 = 51;
int32_t x51 = INT32_MIN;
int8_t x52 = INT8_MAX;
int32_t x72 = -1;
int8_t x73 = INT8_MIN;
int8_t x74 = INT8_MAX;
int32_t t18 = 39511512;
int16_t x77 = INT16_MAX;
static int32_t x89 = INT32_MIN;
int32_t t24 = -198527251;
uint8_t x101 = UINT8_MAX;
int8_t x102 = INT8_MAX;
uint32_t x106 = UINT32_MAX;
volatile int16_t x109 = 1443;
volatile uint8_t x112 = 6U;
int32_t t28 = INT32_MIN;
int8_t x118 = -1;
static volatile uint64_t x124 = UINT64_MAX;
static uint64_t t30 = 135396146063091704LLU;
static int32_t x133 = 3;
int32_t x137 = INT32_MIN;
int64_t x139 = INT64_MIN;
volatile int16_t x141 = INT16_MAX;
int8_t x143 = INT8_MIN;
uint8_t x149 = 27U;
int32_t x154 = -1;
int32_t t38 = INT32_MIN;
int16_t x158 = 3709;
int64_t x161 = INT64_MAX;
uint16_t x169 = 850U;
uint64_t x178 = 19857660416275527LLU;
static int16_t x179 = INT16_MAX;
int32_t t44 = 26510594;
uint32_t x185 = 119659605U;
int8_t x188 = INT8_MIN;
static int32_t t50 = -744426861;
static uint8_t x211 = 1U;
uint8_t x215 = UINT8_MAX;
static int16_t x216 = INT16_MAX;
int32_t x221 = 4800916;
int64_t x222 = -1LL;
int64_t x224 = INT64_MIN;
static volatile int64_t t55 = -281991996987663845LL;
int64_t x228 = 100409978173LL;
int8_t x239 = INT8_MIN;
static int64_t t61 = 0LL;
int16_t x250 = 0;
int64_t x259 = -1LL;
static int16_t x260 = -71;
int32_t t65 = 22410;
volatile int8_t x269 = -1;
int16_t x270 = INT16_MIN;
int16_t x274 = INT16_MIN;
static uint16_t x275 = 15189U;
int64_t x280 = -158951505LL;
volatile uint32_t x289 = 719U;
volatile int32_t t73 = -16621536;
int16_t x297 = INT16_MIN;
uint32_t x312 = 27U;
int8_t x314 = 3;
int64_t t78 = 53689LL;
volatile uint64_t t79 = 14626940131LLU;
static uint8_t x322 = 15U;
uint32_t x327 = UINT32_MAX;
volatile int32_t x331 = 1;
uint64_t x335 = 15670067954417LLU;
uint16_t x343 = 757U;
static int8_t x344 = -1;
int64_t x346 = INT64_MIN;
uint16_t x360 = 0U;
uint16_t x367 = 0U;
static int16_t x368 = INT16_MAX;
uint64_t x375 = UINT64_MAX;
volatile int16_t x377 = 2;
int64_t x380 = -1LL;
volatile int64_t x382 = -1LL;
static volatile uint64_t x395 = UINT64_MAX;
int8_t x400 = 29;
int32_t t99 = 1521253;
volatile int64_t x402 = -1LL;
int64_t t100 = -37LL;
uint64_t t101 = 121286061LLU;
int16_t x409 = INT16_MIN;
int64_t x410 = 266451254714318LL;
int32_t x414 = -1;
int32_t t103 = -1460;
volatile int32_t x417 = -284;
uint16_t x419 = 3891U;
uint8_t x420 = 6U;
int32_t x421 = -1;
int8_t x422 = INT8_MAX;
int64_t x424 = -16011652LL;
uint32_t x427 = 323U;
volatile uint8_t x428 = 1U;
uint32_t x433 = UINT32_MAX;
int32_t x435 = -685556;
uint32_t x451 = 1U;
int32_t x456 = 1918;
uint16_t x463 = 50U;
int64_t x464 = -1LL;
volatile int8_t x468 = -8;
int64_t x471 = INT64_MIN;
int8_t x472 = INT8_MAX;
int64_t t118 = 17LL;
int32_t x481 = -111810;
static int64_t x483 = INT64_MIN;
int8_t x487 = INT8_MIN;
volatile int32_t t121 = 65766783;
int8_t x489 = -1;
static int16_t x491 = -98;
int64_t x493 = -1LL;
int16_t x494 = -1459;
static int16_t x501 = INT16_MIN;
int16_t x502 = -1;
int32_t t125 = 474;
volatile uint32_t x515 = UINT32_MAX;
int64_t x519 = INT64_MIN;
uint16_t x524 = 723U;
int64_t x530 = INT64_MIN;
int8_t x533 = INT8_MIN;
uint16_t x537 = 14500U;
static int32_t t134 = 167;
int32_t x542 = INT32_MAX;
volatile int16_t x549 = INT16_MIN;
uint32_t x550 = UINT32_MAX;
int16_t x553 = INT16_MIN;
volatile uint64_t x555 = UINT64_MAX;
uint64_t t139 = 641076956LLU;
int64_t x567 = INT64_MAX;
int32_t x568 = INT32_MIN;
int64_t t141 = 2601497LL;
static int64_t x578 = -43569573000LL;
uint64_t t144 = 36LLU;
int8_t x584 = INT8_MAX;
static int64_t x587 = INT64_MAX;
int64_t x588 = INT64_MIN;
uint32_t x589 = 3239U;
int32_t x593 = INT32_MIN;
int64_t x596 = INT64_MIN;
int64_t t148 = INT64_MIN;
int32_t x609 = INT32_MIN;
volatile int16_t x613 = INT16_MIN;
volatile int64_t t155 = 59903LL;
volatile int16_t x630 = INT16_MIN;
static int32_t x634 = -1;
volatile uint64_t t158 = 10782141LLU;
static int64_t x646 = -38251812705858LL;
volatile int64_t t161 = 2440032484558261LL;
int32_t x656 = INT32_MIN;
int64_t t164 = 147518127544LL;
volatile uint32_t x662 = 5U;
uint64_t x670 = 4LLU;
static int32_t x673 = 979318211;
volatile int8_t x679 = -1;
uint32_t x688 = 301U;
int16_t x697 = 1;
int64_t x704 = INT64_MIN;
volatile int64_t t175 = INT64_MIN;
int16_t x705 = 39;
volatile int32_t t177 = -747381;
uint32_t x713 = 7931U;
int32_t t179 = -1681;
uint32_t x722 = UINT32_MAX;
volatile uint16_t x725 = 248U;
int32_t t181 = 9;
uint16_t x733 = 5063U;
int32_t x736 = INT32_MIN;
volatile int32_t t183 = 3;
volatile uint64_t x739 = 382764LLU;
static volatile int32_t t184 = 389;
int8_t x744 = -1;
static volatile int32_t x754 = 46925;
int8_t x759 = INT8_MIN;
int64_t x761 = INT64_MIN;
int64_t x762 = INT64_MAX;
int32_t x765 = -5325916;
volatile int32_t t191 = 22047138;
uint8_t x769 = 126U;
volatile int8_t x774 = INT8_MAX;
int8_t x775 = INT8_MAX;
int16_t x776 = 30;
int32_t t193 = -7580;
static uint64_t x779 = 68681475LLU;
int32_t x783 = INT32_MIN;
int16_t x793 = -1;
int16_t x797 = -1;
static int32_t x799 = INT32_MIN;
int64_t x800 = -26622285991LL;


void f0(void) {
    	volatile uint32_t x1 = 1U;
	static int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	static volatile int64_t t0 = -212641065567LL;

    t0 = ((x1^(x2==x3))&x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -1LL;
	int16_t x7 = -1;
	static uint8_t x8 = 0U;
	volatile int32_t t1 = -1;

    t1 = ((x5^(x6==x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	volatile uint32_t x10 = UINT32_MAX;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 28602U;

    t2 = ((x9^(x10==x11))&x12);

    if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MAX;
	uint16_t x14 = 11U;
	uint16_t x16 = 585U;

    t3 = ((x13^(x14==x15))&x16);

    if (t3 != 585) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x19 = -255273826666LL;
	uint8_t x20 = 13U;
	static volatile int32_t t4 = 886220;

    t4 = ((x17^(x18==x19))&x20);

    if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1LLU;
	static uint8_t x22 = 23U;
	int8_t x23 = INT8_MAX;
	static uint64_t x24 = 28259639LLU;
	uint64_t t5 = 405655395288LLU;

    t5 = ((x21^(x22==x23))&x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 8193;
	int8_t x26 = -14;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 1;

    t6 = ((x25^(x26==x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	volatile int32_t x30 = -6325875;
	int16_t x31 = INT16_MAX;
	int32_t t7 = -626;

    t7 = ((x29^(x30==x31))&x32);

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = UINT64_MAX;
	int16_t x35 = -1;
	int32_t t8 = -2;

    t8 = ((x33^(x34==x35))&x36);

    if (t8 != 129) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	int8_t x39 = INT8_MAX;
	volatile int32_t t9 = 501;

    t9 = ((x37^(x38==x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 500785U;
	int16_t x42 = -201;
	int16_t x43 = -1;
	int64_t x44 = -5560978619203055LL;
	int64_t t10 = 30LL;

    t10 = ((x41^(x42==x43))&x44);

    if (t10 != 294929LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	uint8_t x46 = 0U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 198655;

    t11 = ((x45^(x46==x47))&x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x50 = INT8_MIN;
	volatile int32_t t12 = 287;

    t12 = ((x49^(x50==x51))&x52);

    if (t12 != 51) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = 18LL;
	volatile int32_t x54 = INT32_MIN;
	static uint16_t x55 = 0U;
	volatile int8_t x56 = -1;
	volatile int64_t t13 = -671LL;

    t13 = ((x53^(x54==x55))&x56);

    if (t13 != 18LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MAX;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 1U;
	volatile int32_t t14 = 19087152;

    t14 = ((x57^(x58==x59))&x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = 457U;
	int8_t x62 = -1;
	int32_t x63 = 60447590;
	uint32_t x64 = 44523U;
	uint32_t t15 = 52277175U;

    t15 = ((x61^(x62==x63))&x64);

    if (t15 != 457U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = INT16_MIN;
	static int16_t x67 = INT16_MIN;
	static int16_t x68 = -1;
	static volatile int64_t t16 = -7610574405LL;

    t16 = ((x65^(x66==x67))&x68);

    if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	int16_t x70 = INT16_MAX;
	static uint32_t x71 = 223U;
	static int32_t t17 = 1075;

    t17 = ((x69^(x70==x71))&x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x75 = 2499;
	int8_t x76 = -1;

    t18 = ((x73^(x74==x75))&x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = -2196;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 728947098;

    t19 = ((x77^(x78==x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	static uint8_t x82 = UINT8_MAX;
	int32_t x83 = INT32_MAX;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 755287;

    t20 = ((x81^(x82==x83))&x84);

    if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	volatile int16_t x87 = -3665;
	static volatile uint32_t x88 = 403582398U;
	uint32_t t21 = 144U;

    t21 = ((x85^(x86==x87))&x88);

    if (t21 != 403582398U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -2795254;
	uint8_t x91 = 1U;
	int8_t x92 = -1;
	int32_t t22 = INT32_MIN;

    t22 = ((x89^(x90==x91))&x92);

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = UINT64_MAX;
	uint64_t x94 = 301906157727841LLU;
	static int32_t x95 = 14233;
	uint8_t x96 = 0U;
	volatile uint64_t t23 = 62LLU;

    t23 = ((x93^(x94==x95))&x96);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = 0;
	int32_t x98 = INT32_MIN;
	static uint32_t x99 = 23U;
	int16_t x100 = INT16_MAX;

    t24 = ((x97^(x98==x99))&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x103 = -1LL;
	uint16_t x104 = 3U;
	volatile int32_t t25 = -216081;

    t25 = ((x101^(x102==x103))&x104);

    if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 415256874347LLU;
	static int64_t x107 = INT64_MIN;
	volatile int16_t x108 = INT16_MIN;
	volatile uint64_t t26 = 125288LLU;

    t26 = ((x105^(x106==x107))&x108);

    if (t26 != 415256870912LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x110 = INT16_MAX;
	int64_t x111 = -44637LL;
	volatile int32_t t27 = -55;

    t27 = ((x109^(x110==x111))&x112);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	static volatile uint64_t x114 = 14834LLU;
	static int32_t x115 = -1;
	int16_t x116 = -1;

    t28 = ((x113^(x114==x115))&x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	volatile int8_t x119 = -15;
	volatile uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = 118476105U;

    t29 = ((x117^(x118==x119))&x120);

    if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	static uint8_t x122 = 11U;
	int8_t x123 = -7;

    t30 = ((x121^(x122==x123))&x124);

    if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 29U;
	volatile int8_t x126 = INT8_MIN;
	int64_t x127 = -202555574712010959LL;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -1691405;

    t31 = ((x125^(x126==x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	volatile uint16_t x130 = UINT16_MAX;
	volatile uint16_t x131 = 29562U;
	static int64_t x132 = INT64_MIN;
	static int64_t t32 = -4784656LL;

    t32 = ((x129^(x130==x131))&x132);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x134 = UINT32_MAX;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -244LL;

    t33 = ((x133^(x134==x135))&x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x138 = 124;
	int16_t x140 = 3506;
	int32_t t34 = -77745016;

    t34 = ((x137^(x138==x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = -1;
	static int64_t x144 = -15593728935490795LL;
	volatile int64_t t35 = -15LL;

    t35 = ((x141^(x142==x143))&x144);

    if (t35 != 2837LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x147 = -101547829667LL;
	static uint8_t x148 = 112U;
	volatile uint64_t t36 = 12453868944547845LLU;

    t36 = ((x145^(x146==x147))&x148);

    if (t36 != 112LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = -1LL;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 267164537;

    t37 = ((x149^(x150==x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = -1;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;

    t38 = ((x153^(x154==x155))&x156);

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x157 = 10U;
	volatile uint16_t x159 = UINT16_MAX;
	uint16_t x160 = 4014U;
	int32_t t39 = 5407;

    t39 = ((x157^(x158==x159))&x160);

    if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x162 = 450LLU;
	int8_t x163 = -1;
	int32_t x164 = INT32_MIN;
	static int64_t t40 = 117LL;

    t40 = ((x161^(x162==x163))&x164);

    if (t40 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	static int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 137174901388146182LLU;
	static int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 1871623;

    t41 = ((x165^(x166==x167))&x168);

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = -99258629;

    t42 = ((x169^(x170==x171))&x172);

    if (t42 != 850) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint32_t x174 = 2186025U;
	static int16_t x175 = INT16_MIN;
	static volatile int8_t x176 = INT8_MAX;
	volatile int32_t t43 = 81;

    t43 = ((x173^(x174==x175))&x176);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x180 = INT32_MAX;

    t44 = ((x177^(x178==x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t x181 = INT32_MIN;
	volatile int8_t x182 = INT8_MAX;
	static uint64_t x183 = UINT64_MAX;
	uint32_t x184 = UINT32_MAX;
	uint32_t t45 = 4235069U;

    t45 = ((x181^(x182==x183))&x184);

    if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	volatile int32_t x187 = INT32_MIN;
	volatile uint32_t t46 = 105439U;

    t46 = ((x185^(x186==x187))&x188);

    if (t46 != 119659520U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 842U;
	volatile int16_t x190 = -5;
	int64_t x191 = -172299617154677666LL;
	int32_t x192 = 876065864;
	volatile int32_t t47 = -248824;

    t47 = ((x189^(x190==x191))&x192);

    if (t47 != 72) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 8460307873LL;
	int8_t x194 = 0;
	int8_t x195 = -45;
	static int32_t x196 = INT32_MIN;
	int64_t t48 = -437LL;

    t48 = ((x193^(x194==x195))&x196);

    if (t48 != 6442450944LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = 0;
	int64_t x198 = -123532961991249752LL;
	int8_t x199 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	int64_t t49 = -1947319LL;

    t49 = ((x197^(x198==x199))&x200);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 6U;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 70U;
	int16_t x204 = INT16_MIN;

    t50 = ((x201^(x202==x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = -1;
	volatile uint32_t x206 = 96171U;
	static volatile int64_t x207 = 2400LL;
	int64_t x208 = INT64_MIN;
	static int64_t t51 = INT64_MIN;

    t51 = ((x205^(x206==x207))&x208);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -11290;
	static uint16_t x210 = UINT16_MAX;
	int32_t x212 = -83;
	volatile int32_t t52 = 3;

    t52 = ((x209^(x210==x211))&x212);

    if (t52 != -11356) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	static int16_t x214 = INT16_MAX;
	static int32_t t53 = -71;

    t53 = ((x213^(x214==x215))&x216);

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = UINT32_MAX;
	int32_t x218 = -1;
	int64_t x219 = 12610LL;
	uint32_t x220 = 111648U;
	static volatile uint32_t t54 = 70185819U;

    t54 = ((x217^(x218==x219))&x220);

    if (t54 != 111648U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x223 = -1;

    t55 = ((x221^(x222==x223))&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	volatile int64_t t56 = 228162349068076188LL;

    t56 = ((x225^(x226==x227))&x228);

    if (t56 != 11581LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 1286215704404LLU;
	int32_t x230 = INT32_MAX;
	volatile int8_t x231 = 58;
	static int16_t x232 = -1;
	volatile uint64_t t57 = 90LLU;

    t57 = ((x229^(x230==x231))&x232);

    if (t57 != 1286215704404LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x233 = -1LL;
	uint16_t x234 = 4U;
	static uint8_t x235 = UINT8_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t58 = 8018LL;

    t58 = ((x233^(x234==x235))&x236);

    if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	uint8_t x240 = 0U;
	volatile int64_t t59 = -207177420177059LL;

    t59 = ((x237^(x238==x239))&x240);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MAX;
	uint64_t x242 = 6557LLU;
	volatile uint8_t x243 = 99U;
	int32_t x244 = -1;
	volatile int64_t t60 = INT64_MAX;

    t60 = ((x241^(x242==x243))&x244);

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 13;
	volatile uint8_t x246 = 3U;
	uint64_t x247 = 60276LLU;
	volatile int64_t x248 = INT64_MIN;

    t61 = ((x245^(x246==x247))&x248);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = 0U;
	int8_t x251 = INT8_MAX;
	uint8_t x252 = 0U;
	int32_t t62 = -16522;

    t62 = ((x249^(x250==x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 199666;
	int64_t x254 = -1LL;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = -1;
	volatile int32_t t63 = 659171862;

    t63 = ((x253^(x254==x255))&x256);

    if (t63 != 199666) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MIN;
	int32_t t64 = INT32_MIN;

    t64 = ((x257^(x258==x259))&x260);

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -1;
	volatile int32_t x262 = INT32_MIN;
	uint64_t x263 = UINT64_MAX;
	uint8_t x264 = UINT8_MAX;

    t65 = ((x261^(x262==x263))&x264);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = 6U;
	int8_t x267 = INT8_MIN;
	int16_t x268 = -1;
	int32_t t66 = INT32_MIN;

    t66 = ((x265^(x266==x267))&x268);

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x271 = -3066;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = UINT64_MAX;

    t67 = ((x269^(x270==x271))&x272);

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = 1;
	int32_t x276 = -1;
	volatile int32_t t68 = -13736305;

    t68 = ((x273^(x274==x275))&x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = -1;
	volatile uint8_t x278 = 1U;
	int16_t x279 = 0;
	static int64_t t69 = 3182352495690264LL;

    t69 = ((x277^(x278==x279))&x280);

    if (t69 != -158951505LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = -1LL;
	int64_t x283 = 895LL;
	volatile int16_t x284 = 3385;
	int64_t t70 = 714844938244226259LL;

    t70 = ((x281^(x282==x283))&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = -245;
	int8_t x286 = -1;
	int8_t x287 = INT8_MAX;
	static volatile int16_t x288 = -1;
	volatile int32_t t71 = -22;

    t71 = ((x285^(x286==x287))&x288);

    if (t71 != -245) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = 2LL;
	static uint16_t x291 = 13U;
	int32_t x292 = -1;
	volatile uint32_t t72 = 50U;

    t72 = ((x289^(x290==x291))&x292);

    if (t72 != 719U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -3;
	volatile uint8_t x294 = 3U;
	volatile uint32_t x295 = 0U;
	int8_t x296 = -1;

    t73 = ((x293^(x294==x295))&x296);

    if (t73 != -3) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MAX;
	int32_t x299 = -1;
	uint8_t x300 = 4U;
	static volatile int32_t t74 = 10;

    t74 = ((x297^(x298==x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = 729;
	static int64_t x302 = INT64_MAX;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 10045055LLU;
	uint64_t t75 = 48977348538LLU;

    t75 = ((x301^(x302==x303))&x304);

    if (t75 != 601LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -19;
	int16_t x306 = -1;
	int32_t x307 = 4755;
	int64_t x308 = -1LL;
	static volatile int64_t t76 = 0LL;

    t76 = ((x305^(x306==x307))&x308);

    if (t76 != -19LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = 162U;
	static int16_t x310 = -1;
	int16_t x311 = -1;
	static uint32_t t77 = 47513590U;

    t77 = ((x309^(x310==x311))&x312);

    if (t77 != 3U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = 7058836815LL;
	static int8_t x315 = 0;
	uint32_t x316 = 20445U;

    t78 = ((x313^(x314==x315))&x316);

    if (t78 != 19789LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 1030695LLU;
	static volatile uint8_t x318 = 2U;
	volatile uint32_t x319 = 97U;
	uint64_t x320 = 1517210810989986LLU;

    t79 = ((x317^(x318==x319))&x320);

    if (t79 != 14370LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = -7317;
	int64_t x323 = INT64_MAX;
	int32_t x324 = -951458;
	int32_t t80 = -93946124;

    t80 = ((x321^(x322==x323))&x324);

    if (t80 != -957622) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1862;
	static int16_t x326 = INT16_MIN;
	int16_t x328 = -41;
	volatile int32_t t81 = 39907714;

    t81 = ((x325^(x326==x327))&x328);

    if (t81 != -1902) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int32_t x330 = 3489;
	uint64_t x332 = 17938LLU;
	uint64_t t82 = 11855LLU;

    t82 = ((x329^(x330==x331))&x332);

    if (t82 != 17938LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x333 = 34091966391LL;
	int8_t x334 = -15;
	int16_t x336 = -1;
	static int64_t t83 = 555819009023723914LL;

    t83 = ((x333^(x334==x335))&x336);

    if (t83 != 34091966391LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 2582713810572969293LLU;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -17;
	int64_t x340 = INT64_MAX;
	uint64_t t84 = 669799396LLU;

    t84 = ((x337^(x338==x339))&x340);

    if (t84 != 2582713810572969293LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	static int8_t x342 = INT8_MIN;
	int64_t t85 = INT64_MAX;

    t85 = ((x341^(x342==x343))&x344);

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	static int64_t x348 = -20816217369663998LL;
	int64_t t86 = -32216077LL;

    t86 = ((x345^(x346==x347))&x348);

    if (t86 != -20816217369673728LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -34;
	uint32_t x350 = 6976354U;
	int8_t x351 = -1;
	int64_t x352 = INT64_MIN;
	int64_t t87 = INT64_MIN;

    t87 = ((x349^(x350==x351))&x352);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static uint16_t x354 = 2U;
	int64_t x355 = INT64_MIN;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = -179996;

    t88 = ((x353^(x354==x355))&x356);

    if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MIN;
	volatile uint8_t x358 = 2U;
	volatile int64_t x359 = -51057255890754LL;
	volatile int32_t t89 = -14703;

    t89 = ((x357^(x358==x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = INT32_MAX;
	uint8_t x362 = 77U;
	int32_t x363 = -1;
	volatile uint8_t x364 = 1U;
	static int32_t t90 = 970942825;

    t90 = ((x361^(x362==x363))&x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	volatile uint32_t t91 = 91U;

    t91 = ((x365^(x366==x367))&x368);

    if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MAX;
	volatile int8_t x371 = 29;
	int16_t x372 = INT16_MAX;
	volatile uint64_t t92 = 41883LLU;

    t92 = ((x369^(x370==x371))&x372);

    if (t92 != 32767LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x373 = UINT16_MAX;
	volatile uint32_t x374 = 663115U;
	int32_t x376 = -1;
	volatile int32_t t93 = -1556067;

    t93 = ((x373^(x374==x375))&x376);

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x378 = 2U;
	static int16_t x379 = INT16_MIN;
	volatile int64_t t94 = -7LL;

    t94 = ((x377^(x378==x379))&x380);

    if (t94 != 2LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	uint8_t x383 = 52U;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = -112;

    t95 = ((x381^(x382==x383))&x384);

    if (t95 != 2147450880) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 8U;
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = -15399907LL;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 90489139;

    t96 = ((x385^(x386==x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = INT16_MIN;
	static int64_t x390 = -1400LL;
	volatile int32_t x391 = 1;
	int16_t x392 = 236;
	volatile int32_t t97 = -49849;

    t97 = ((x389^(x390==x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	volatile int32_t x394 = -1;
	volatile int8_t x396 = -5;
	volatile int32_t t98 = -65127330;

    t98 = ((x393^(x394==x395))&x396);

    if (t98 != 2147483642) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = -1;
	int16_t x398 = -1;
	uint16_t x399 = 99U;

    t99 = ((x397^(x398==x399))&x400);

    if (t99 != 29) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int16_t x403 = -1;
	static int32_t x404 = -1;

    t100 = ((x401^(x402==x403))&x404);

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int16_t x406 = -1;
	int32_t x407 = INT32_MIN;
	static uint64_t x408 = 15996LLU;

    t101 = ((x405^(x406==x407))&x408);

    if (t101 != 15996LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x411 = 186327076578369568LLU;
	static uint16_t x412 = 0U;
	static volatile int32_t t102 = 61;

    t102 = ((x409^(x410==x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = INT8_MIN;
	static int8_t x415 = -8;
	int16_t x416 = INT16_MIN;

    t103 = ((x413^(x414==x415))&x416);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 2U;
	volatile int32_t t104 = 11043169;

    t104 = ((x417^(x418==x419))&x420);

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x423 = -4;
	static volatile int64_t t105 = -366004708187087LL;

    t105 = ((x421^(x422==x423))&x424);

    if (t105 != -16011652LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	uint16_t x426 = UINT16_MAX;
	volatile int32_t t106 = -13083318;

    t106 = ((x425^(x426==x427))&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = 0;
	volatile uint32_t x430 = 14100U;
	static int32_t x431 = 1084086;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t107 = 1113993U;

    t107 = ((x429^(x430==x431))&x432);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x434 = 4466;
	uint8_t x436 = 0U;
	uint32_t t108 = 42411611U;

    t108 = ((x433^(x434==x435))&x436);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 4926727U;
	uint16_t x438 = 112U;
	int32_t x439 = 53619;
	int64_t x440 = INT64_MIN;
	int64_t t109 = -4565364004320713LL;

    t109 = ((x437^(x438==x439))&x440);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = UINT8_MAX;
	int32_t x442 = -1;
	static int16_t x443 = INT16_MAX;
	int32_t x444 = -1;
	int32_t t110 = 1025685;

    t110 = ((x441^(x442==x443))&x444);

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	volatile uint32_t x446 = 16398399U;
	uint8_t x447 = 2U;
	int8_t x448 = INT8_MIN;
	static uint32_t t111 = 366311U;

    t111 = ((x445^(x446==x447))&x448);

    if (t111 != 4294967168U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	static volatile uint8_t x450 = 31U;
	int32_t x452 = INT32_MAX;
	volatile int32_t t112 = INT32_MAX;

    t112 = ((x449^(x450==x451))&x452);

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile int64_t x454 = -1LL;
	int8_t x455 = -1;
	volatile uint64_t t113 = 495987LLU;

    t113 = ((x453^(x454==x455))&x456);

    if (t113 != 1918LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = -419813LL;
	static volatile int32_t x458 = INT32_MAX;
	volatile int16_t x459 = -1;
	int8_t x460 = 1;
	volatile int64_t t114 = -44164966106912LL;

    t114 = ((x457^(x458==x459))&x460);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 423U;
	uint64_t x462 = UINT64_MAX;
	int64_t t115 = 12118971132LL;

    t115 = ((x461^(x462==x463))&x464);

    if (t115 != 423LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int8_t x466 = INT8_MIN;
	int64_t x467 = -1LL;
	int32_t t116 = -1942;

    t116 = ((x465^(x466==x467))&x468);

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MIN;
	uint8_t x470 = 39U;
	volatile int32_t t117 = 8233425;

    t117 = ((x469^(x470==x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	volatile uint32_t x474 = 0U;
	int32_t x475 = INT32_MAX;
	int64_t x476 = INT64_MAX;

    t118 = ((x473^(x474==x475))&x476);

    if (t118 != 127LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = UINT8_MAX;
	int8_t x479 = INT8_MIN;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = 22260788;

    t119 = ((x477^(x478==x479))&x480);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint8_t x482 = 3U;
	uint16_t x484 = 16909U;
	int32_t t120 = -1;

    t120 = ((x481^(x482==x483))&x484);

    if (t120 != 16908) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = -7;
	volatile uint16_t x486 = UINT16_MAX;
	int16_t x488 = INT16_MAX;

    t121 = ((x485^(x486==x487))&x488);

    if (t121 != 32761) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x490 = 4U;
	volatile uint32_t x492 = 13232592U;
	static volatile uint32_t t122 = 465U;

    t122 = ((x489^(x490==x491))&x492);

    if (t122 != 13232592U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x495 = 1;
	int16_t x496 = INT16_MIN;
	volatile int64_t t123 = -32666102262654054LL;

    t123 = ((x493^(x494==x495))&x496);

    if (t123 != -32768LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x497 = UINT16_MAX;
	static uint16_t x498 = UINT16_MAX;
	static uint8_t x499 = 1U;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t124 = -1;

    t124 = ((x497^(x498==x499))&x500);

    if (t124 != 65408) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x503 = 8299U;
	int8_t x504 = INT8_MAX;

    t125 = ((x501^(x502==x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = 338;
	uint64_t x506 = UINT64_MAX;
	volatile int16_t x507 = 84;
	volatile int8_t x508 = 30;
	volatile int32_t t126 = -491760;

    t126 = ((x505^(x506==x507))&x508);

    if (t126 != 18) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = UINT16_MAX;
	volatile int32_t x510 = 3096926;
	int16_t x511 = 1;
	static int32_t x512 = INT32_MIN;
	volatile int32_t t127 = 185809;

    t127 = ((x509^(x510==x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 106U;
	int32_t x514 = INT32_MIN;
	uint16_t x516 = UINT16_MAX;
	static int32_t t128 = 114476;

    t128 = ((x513^(x514==x515))&x516);

    if (t128 != 106) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = 37U;
	volatile uint64_t x518 = 15692713LLU;
	int32_t x520 = INT32_MIN;
	static uint32_t t129 = 103086177U;

    t129 = ((x517^(x518==x519))&x520);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 92034318LLU;
	uint32_t x522 = 8781123U;
	static int8_t x523 = -37;
	volatile uint64_t t130 = 962671784LLU;

    t130 = ((x521^(x522==x523))&x524);

    if (t130 != 2LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint64_t x526 = 655289457439LLU;
	uint64_t x527 = 0LLU;
	volatile uint8_t x528 = UINT8_MAX;
	volatile int64_t t131 = 31121197LL;

    t131 = ((x525^(x526==x527))&x528);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -1;
	int16_t x531 = INT16_MIN;
	int64_t x532 = INT64_MAX;
	int64_t t132 = INT64_MAX;

    t132 = ((x529^(x530==x531))&x532);

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = -1;
	uint8_t x535 = UINT8_MAX;
	int16_t x536 = INT16_MAX;
	int32_t t133 = 5;

    t133 = ((x533^(x534==x535))&x536);

    if (t133 != 32640) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MIN;

    t134 = ((x537^(x538==x539))&x540);

    if (t134 != 14464) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	static volatile int8_t x543 = 2;
	int16_t x544 = INT16_MIN;
	volatile int32_t t135 = 23612827;

    t135 = ((x541^(x542==x543))&x544);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	static uint8_t x546 = UINT8_MAX;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = -1;
	volatile int32_t t136 = -5169;

    t136 = ((x545^(x546==x547))&x548);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x551 = 99;
	int16_t x552 = 8;
	int32_t t137 = -6409;

    t137 = ((x549^(x550==x551))&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 3;
	int64_t x556 = -1LL;
	int64_t t138 = 2277130366LL;

    t138 = ((x553^(x554==x555))&x556);

    if (t138 != -32768LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 466LLU;
	volatile int64_t x558 = 79419809LL;
	volatile int16_t x559 = -13638;
	uint16_t x560 = 13U;

    t139 = ((x557^(x558==x559))&x560);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 1;
	int32_t x562 = INT32_MIN;
	static volatile uint32_t x563 = 19U;
	uint32_t x564 = 0U;
	static uint32_t t140 = 13051840U;

    t140 = ((x561^(x562==x563))&x564);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	volatile uint64_t x566 = 3875885926135459LLU;

    t141 = ((x565^(x566==x567))&x568);

    if (t141 != -2147483648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 1U;
	uint64_t x570 = 24055444LLU;
	int8_t x571 = INT8_MIN;
	volatile uint8_t x572 = UINT8_MAX;
	volatile uint32_t t142 = 2309899U;

    t142 = ((x569^(x570==x571))&x572);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -549223776LL;
	volatile int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MAX;
	int8_t x576 = 62;
	int64_t t143 = 7454944884532840LL;

    t143 = ((x573^(x574==x575))&x576);

    if (t143 != 32LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 608LLU;
	int8_t x579 = INT8_MAX;
	static volatile int32_t x580 = -1;

    t144 = ((x577^(x578==x579))&x580);

    if (t144 != 608LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 1674154U;
	int32_t x582 = INT32_MIN;
	int8_t x583 = INT8_MAX;
	uint32_t t145 = 12187U;

    t145 = ((x581^(x582==x583))&x584);

    if (t145 != 42U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	static uint64_t x586 = UINT64_MAX;
	static int64_t t146 = INT64_MIN;

    t146 = ((x585^(x586==x587))&x588);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x590 = 1;
	static uint64_t x591 = 41092538161098LLU;
	static int8_t x592 = 14;
	uint32_t t147 = 36390U;

    t147 = ((x589^(x590==x591))&x592);

    if (t147 != 6U) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = 0LL;
	int8_t x595 = INT8_MIN;

    t148 = ((x593^(x594==x595))&x596);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int8_t x598 = INT8_MAX;
	int32_t x599 = INT32_MIN;
	int64_t x600 = -7134742LL;
	volatile int64_t t149 = -15LL;

    t149 = ((x597^(x598==x599))&x600);

    if (t149 != 8682LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = 54;
	volatile int8_t x602 = 15;
	int8_t x603 = INT8_MIN;
	int16_t x604 = -1;
	volatile int32_t t150 = -31;

    t150 = ((x601^(x602==x603))&x604);

    if (t150 != 54) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x606 = INT32_MIN;
	volatile uint8_t x607 = UINT8_MAX;
	int32_t x608 = -1;
	volatile int64_t t151 = INT64_MIN;

    t151 = ((x605^(x606==x607))&x608);

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x610 = 12397U;
	uint16_t x611 = 9U;
	static int32_t x612 = 41;
	int32_t t152 = 70528702;

    t152 = ((x609^(x610==x611))&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = 1;
	static volatile int8_t x615 = INT8_MIN;
	volatile uint64_t x616 = UINT64_MAX;
	volatile uint64_t t153 = 89918337LLU;

    t153 = ((x613^(x614==x615))&x616);

    if (t153 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = 60;
	uint16_t x618 = UINT16_MAX;
	volatile int32_t x619 = 5;
	int8_t x620 = INT8_MAX;
	int32_t t154 = 15338634;

    t154 = ((x617^(x618==x619))&x620);

    if (t154 != 60) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	static int16_t x622 = INT16_MAX;
	int16_t x623 = INT16_MAX;
	int64_t x624 = 643342348784050LL;

    t155 = ((x621^(x622==x623))&x624);

    if (t155 != 643342348784050LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	volatile int8_t x626 = 3;
	static uint8_t x627 = 127U;
	uint32_t x628 = UINT32_MAX;
	static uint32_t t156 = 123U;

    t156 = ((x625^(x626==x627))&x628);

    if (t156 != 4294934528U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x629 = -1690;
	int8_t x631 = 1;
	int32_t x632 = -450;
	int32_t t157 = 3;

    t157 = ((x629^(x630==x631))&x632);

    if (t157 != -2010) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x633 = 50025903456938466LLU;
	volatile uint16_t x635 = 15073U;
	int64_t x636 = -6006206832929LL;

    t158 = ((x633^(x634==x635))&x636);

    if (t158 != 50025618696063170LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x637 = INT32_MIN;
	uint16_t x638 = 107U;
	uint64_t x639 = UINT64_MAX;
	uint32_t x640 = 1U;
	static volatile uint32_t t159 = 297197U;

    t159 = ((x637^(x638==x639))&x640);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = INT8_MAX;
	int32_t x642 = INT32_MIN;
	uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MAX;
	volatile int32_t t160 = 411909919;

    t160 = ((x641^(x642==x643))&x644);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 99U;
	int16_t x647 = 1011;
	int64_t x648 = INT64_MIN;

    t161 = ((x645^(x646==x647))&x648);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = 9023U;
	static volatile int32_t x650 = INT32_MIN;
	volatile int64_t x651 = INT64_MAX;
	static int8_t x652 = INT8_MAX;
	int32_t t162 = -105;

    t162 = ((x649^(x650==x651))&x652);

    if (t162 != 63) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 0U;
	int32_t x654 = INT32_MIN;
	int64_t x655 = -679360871937LL;
	uint32_t t163 = 8U;

    t163 = ((x653^(x654==x655))&x656);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MAX;
	int16_t x658 = INT16_MIN;
	int64_t x659 = -1LL;
	int64_t x660 = INT64_MIN;

    t164 = ((x657^(x658==x659))&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	volatile uint16_t x663 = 1299U;
	volatile uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = 11;

    t165 = ((x661^(x662==x663))&x664);

    if (t165 != 65535) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = 0;
	static volatile int32_t x666 = INT32_MAX;
	static uint16_t x667 = 7U;
	int16_t x668 = INT16_MIN;
	static volatile int32_t t166 = -53952;

    t166 = ((x665^(x666==x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static int8_t x671 = INT8_MIN;
	int16_t x672 = INT16_MAX;
	int32_t t167 = -5656662;

    t167 = ((x669^(x670==x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x674 = INT16_MIN;
	static uint64_t x675 = 13684LLU;
	static int16_t x676 = INT16_MAX;
	static volatile int32_t t168 = 44053711;

    t168 = ((x673^(x674==x675))&x676);

    if (t168 != 13763) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x677 = INT8_MIN;
	int16_t x678 = INT16_MAX;
	int64_t x680 = INT64_MIN;
	int64_t t169 = INT64_MIN;

    t169 = ((x677^(x678==x679))&x680);

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int16_t x682 = INT16_MIN;
	int32_t x683 = INT32_MAX;
	int16_t x684 = -351;
	int32_t t170 = INT32_MIN;

    t170 = ((x681^(x682==x683))&x684);

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = -1;
	uint64_t x686 = 18LLU;
	int8_t x687 = -1;
	uint32_t t171 = 1023972074U;

    t171 = ((x685^(x686==x687))&x688);

    if (t171 != 301U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int8_t x690 = -1;
	volatile int32_t x691 = -1;
	volatile int8_t x692 = INT8_MAX;
	int32_t t172 = 15;

    t172 = ((x689^(x690==x691))&x692);

    if (t172 != 126) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	int8_t x694 = INT8_MIN;
	uint8_t x695 = UINT8_MAX;
	uint32_t x696 = 831682U;
	volatile uint32_t t173 = 10U;

    t173 = ((x693^(x694==x695))&x696);

    if (t173 != 831682U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x698 = 1;
	int16_t x699 = -42;
	int16_t x700 = INT16_MAX;
	int32_t t174 = 1227180;

    t174 = ((x697^(x698==x699))&x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MIN;
	uint32_t x703 = 1725U;

    t175 = ((x701^(x702==x703))&x704);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x706 = 46093603451288787LLU;
	static int8_t x707 = 0;
	volatile uint16_t x708 = 224U;
	volatile int32_t t176 = 16574514;

    t176 = ((x705^(x706==x707))&x708);

    if (t176 != 32) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = INT64_MIN;
	static int64_t x711 = -1LL;
	int32_t x712 = -1;

    t177 = ((x709^(x710==x711))&x712);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x714 = INT16_MIN;
	static volatile int16_t x715 = -1;
	int64_t x716 = -39LL;
	volatile int64_t t178 = 171287284440288LL;

    t178 = ((x713^(x714==x715))&x716);

    if (t178 != 7897LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	volatile int16_t x718 = -1;
	uint32_t x719 = 165886U;
	volatile int16_t x720 = -423;

    t179 = ((x717^(x718==x719))&x720);

    if (t179 != -512) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x721 = 73451LLU;
	int8_t x723 = INT8_MIN;
	static int16_t x724 = 3;
	volatile uint64_t t180 = 600LLU;

    t180 = ((x721^(x722==x723))&x724);

    if (t180 != 3LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x726 = INT16_MIN;
	uint64_t x727 = 505351310204849515LLU;
	int16_t x728 = INT16_MIN;

    t181 = ((x725^(x726==x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	volatile uint32_t x730 = 48110U;
	int32_t x731 = 121707;
	volatile int64_t x732 = -1938168253LL;
	static int64_t t182 = 561226706961768LL;

    t182 = ((x729^(x730==x731))&x732);

    if (t182 != -1938168320LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = -248432;
	volatile int16_t x735 = 1;

    t183 = ((x733^(x734==x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = INT8_MIN;
	static uint32_t x738 = 61U;
	volatile int16_t x740 = -83;

    t184 = ((x737^(x738==x739))&x740);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1608;
	static uint8_t x742 = 44U;
	volatile uint64_t x743 = 1414543380LLU;
	int32_t t185 = 208337386;

    t185 = ((x741^(x742==x743))&x744);

    if (t185 != -1608) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 2U;
	volatile uint32_t x746 = UINT32_MAX;
	int32_t x747 = 73;
	volatile int16_t x748 = INT16_MIN;
	volatile uint32_t t186 = 23U;

    t186 = ((x745^(x746==x747))&x748);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = -1LL;
	static int32_t x750 = 966617111;
	int8_t x751 = -1;
	static volatile int16_t x752 = 7679;
	volatile int64_t t187 = -468LL;

    t187 = ((x749^(x750==x751))&x752);

    if (t187 != 7679LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = -1;
	int32_t x755 = 44;
	int32_t x756 = -1;
	int32_t t188 = -126740442;

    t188 = ((x753^(x754==x755))&x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	int32_t x760 = 1;
	int32_t t189 = -600838780;

    t189 = ((x757^(x758==x759))&x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x763 = 5;
	int64_t x764 = INT64_MIN;
	int64_t t190 = INT64_MIN;

    t190 = ((x761^(x762==x763))&x764);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = 219;
	volatile uint16_t x767 = 610U;
	uint16_t x768 = 433U;

    t191 = ((x765^(x766==x767))&x768);

    if (t191 != 416) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = -5305628215074697LL;
	uint32_t x771 = 1974062U;
	static int16_t x772 = INT16_MIN;
	int32_t t192 = -803127268;

    t192 = ((x769^(x770==x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -9;

    t193 = ((x773^(x774==x775))&x776);

    if (t193 != 22) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x777 = 4590592537LL;
	uint64_t x778 = 17780769LLU;
	volatile int16_t x780 = 81;
	static int64_t t194 = -408767788268LL;

    t194 = ((x777^(x778==x779))&x780);

    if (t194 != 17LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile int64_t x782 = -60235LL;
	int16_t x784 = INT16_MIN;
	volatile int32_t t195 = -997;

    t195 = ((x781^(x782==x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint32_t x785 = 237639U;
	static int64_t x786 = 18LL;
	int16_t x787 = INT16_MIN;
	volatile int64_t x788 = INT64_MAX;
	static volatile int64_t t196 = -15834026LL;

    t196 = ((x785^(x786==x787))&x788);

    if (t196 != 237639LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x789 = UINT32_MAX;
	uint8_t x790 = 1U;
	uint64_t x791 = UINT64_MAX;
	volatile int32_t x792 = INT32_MIN;
	volatile uint32_t t197 = 4169233U;

    t197 = ((x789^(x790==x791))&x792);

    if (t197 != 2147483648U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MIN;
	int32_t x795 = INT32_MIN;
	int8_t x796 = 1;
	int32_t t198 = -1;

    t198 = ((x793^(x794==x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x798 = INT8_MIN;
	int64_t t199 = -2656953LL;

    t199 = ((x797^(x798==x799))&x800);

    if (t199 != -26622285991LL) { NG(); } else { ; }
	
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

