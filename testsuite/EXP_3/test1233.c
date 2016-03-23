
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

static int64_t x1 = 1247957LL;
int64_t x2 = INT64_MIN;
static int16_t x3 = -6;
int32_t x4 = -358723;
int8_t x7 = INT8_MIN;
int16_t x8 = 194;
volatile int64_t t1 = 3447LL;
static int64_t x10 = INT64_MIN;
static int64_t x22 = INT64_MAX;
uint16_t x35 = 147U;
uint8_t x37 = 108U;
int16_t x45 = -63;
int64_t x46 = -1LL;
volatile int64_t t10 = -19140022666226LL;
int64_t x50 = INT64_MIN;
int8_t x51 = INT8_MIN;
volatile int8_t x57 = INT8_MIN;
static volatile int8_t x61 = INT8_MIN;
int64_t x62 = INT64_MIN;
int64_t t14 = 1460LL;
uint32_t x67 = UINT32_MAX;
volatile int8_t x69 = INT8_MIN;
uint16_t x71 = 137U;
volatile int32_t t16 = -17458;
uint32_t x73 = UINT32_MAX;
uint32_t x78 = 15945771U;
volatile uint16_t x79 = UINT16_MAX;
int16_t x80 = INT16_MAX;
volatile int64_t t19 = 104455105LL;
static uint8_t x85 = 3U;
static int8_t x88 = -1;
uint16_t x92 = 162U;
int8_t x97 = INT8_MAX;
int32_t x100 = -1;
static volatile uint64_t t24 = 0LLU;
int32_t x116 = -1;
uint8_t x119 = 4U;
static int32_t x126 = INT32_MAX;
int32_t t30 = 44046;
static uint32_t t32 = 4041134U;
uint32_t x143 = UINT32_MAX;
uint32_t x144 = 10814104U;
uint8_t x150 = UINT8_MAX;
int32_t t36 = 1748568;
static volatile int8_t x158 = INT8_MIN;
volatile int16_t x162 = INT16_MIN;
volatile int32_t x168 = INT32_MAX;
volatile int32_t t40 = -353;
static int64_t x169 = -1LL;
int32_t x171 = -1;
static int8_t x173 = INT8_MAX;
uint16_t x175 = 110U;
static int32_t t42 = 158770231;
uint32_t x181 = 728546U;
uint16_t x184 = 6U;
static volatile uint32_t t44 = 491554U;
volatile int16_t x185 = INT16_MAX;
int32_t x189 = INT32_MIN;
int8_t x191 = INT8_MIN;
volatile int32_t t46 = 43713;
volatile int16_t x193 = -1;
static uint16_t x194 = 89U;
int8_t x208 = INT8_MAX;
volatile int32_t t50 = -10106;
int32_t x210 = -3754107;
volatile int32_t t51 = 15992709;
int16_t x213 = -1;
uint32_t x221 = UINT32_MAX;
int32_t x224 = INT32_MIN;
static volatile int64_t t54 = -2LL;
uint64_t x239 = 188902290LLU;
int64_t x247 = INT64_MIN;
static volatile uint32_t t60 = 262751U;
uint8_t x254 = 2U;
int8_t x259 = 8;
static int32_t x262 = -1;
volatile uint32_t t66 = 12905081U;
uint16_t x275 = UINT16_MAX;
static int32_t x276 = INT32_MAX;
int32_t t68 = -1;
int16_t x281 = -1;
volatile uint32_t t69 = 8179335U;
static int32_t x290 = INT32_MIN;
int32_t x292 = INT32_MAX;
int16_t x295 = INT16_MIN;
int16_t x298 = -1;
volatile uint16_t x299 = UINT16_MAX;
volatile int64_t t74 = -140400LL;
int32_t x308 = INT32_MAX;
static int32_t t75 = 405;
int64_t x335 = -8393615736485617LL;
int64_t x340 = -1LL;
volatile int8_t x345 = -1;
static int32_t x350 = INT32_MIN;
uint16_t x360 = 678U;
uint16_t x362 = 8853U;
int64_t x372 = INT64_MIN;
int64_t x374 = -121902429365955957LL;
static int64_t x388 = INT64_MIN;
int64_t x400 = INT64_MIN;
static uint16_t x401 = UINT16_MAX;
volatile uint64_t t98 = 28470LLU;
static int64_t x416 = INT64_MIN;
int64_t x423 = 983080LL;
int32_t x424 = INT32_MIN;
int32_t x430 = INT32_MAX;
static int32_t x431 = -1;
int32_t x433 = INT32_MIN;
uint8_t x438 = UINT8_MAX;
static uint32_t t110 = 2767U;
volatile uint32_t x462 = UINT32_MAX;
int64_t x464 = -1LL;
uint16_t x465 = 1852U;
static uint32_t x468 = 22877748U;
volatile int32_t t113 = -363;
volatile int16_t x470 = 4603;
int64_t x471 = INT64_MAX;
static volatile int16_t x472 = INT16_MIN;
volatile uint16_t x473 = UINT16_MAX;
int32_t x474 = INT32_MIN;
volatile int32_t t115 = -7;
uint8_t x485 = 3U;
int16_t x489 = -1;
static volatile uint64_t t120 = 438976993447019934LLU;
uint16_t x499 = UINT16_MAX;
volatile int32_t x500 = 5681818;
static int32_t x503 = INT32_MIN;
uint8_t x511 = UINT8_MAX;
int64_t t126 = -514226852231LL;
uint64_t x534 = 6223890572439LLU;
uint16_t x535 = UINT16_MAX;
int32_t x536 = -36;
int8_t x538 = INT8_MIN;
static volatile int32_t t129 = 0;
static int32_t x544 = 1;
volatile uint32_t t130 = 106U;
volatile uint64_t t131 = 1352848588006LLU;
volatile int32_t t132 = 7350513;
int32_t x564 = 1544008;
uint64_t x565 = 263004881LLU;
uint64_t x567 = 278816748546751154LLU;
int16_t x568 = INT16_MAX;
volatile int32_t x575 = INT32_MIN;
int32_t x579 = -1;
uint32_t x589 = 63U;
uint8_t x591 = UINT8_MAX;
int16_t x597 = INT16_MIN;
int16_t x602 = -1;
int32_t t145 = 16324;
volatile uint32_t t146 = 1815979U;
uint32_t x616 = UINT32_MAX;
int16_t x624 = -1;
volatile int32_t t152 = 0;
static int64_t x634 = 5607784LL;
int16_t x640 = INT16_MAX;
static volatile int16_t x642 = -8181;
int64_t x648 = -1LL;
int8_t x652 = INT8_MIN;
volatile int32_t t159 = 31919173;
int32_t x664 = -15;
volatile int32_t t160 = -95791;
static int16_t x665 = -65;
static int64_t x669 = 14679LL;
uint64_t x670 = UINT64_MAX;
int64_t x671 = INT64_MIN;
uint32_t x680 = 581026U;
int8_t x681 = -10;
volatile uint64_t t165 = 31780595948563505LLU;
uint32_t x690 = 11520U;
int32_t x692 = INT32_MIN;
int8_t x694 = 11;
static int16_t x696 = INT16_MIN;
int16_t x699 = INT16_MIN;
volatile int16_t x700 = -55;
int64_t x701 = -1LL;
int64_t x712 = INT64_MAX;
int32_t x716 = 382;
uint8_t x717 = 29U;
uint64_t x718 = 117259278735850959LLU;
int32_t x721 = 441680;
int16_t x722 = -1927;
uint8_t x723 = 21U;
int8_t x749 = INT8_MAX;
volatile int32_t x760 = -1;
static int32_t t185 = -13440;
volatile uint64_t t186 = 8038214990202388LLU;
uint16_t x773 = 15813U;
uint8_t x774 = 9U;
static uint32_t x777 = UINT32_MAX;
int64_t x780 = INT64_MIN;
static uint64_t t191 = 2959LLU;
uint32_t x794 = 3673133U;
int16_t x798 = -1;
int32_t x800 = -416736634;
int32_t t194 = 2;
int16_t x805 = -1;
int64_t t195 = 7508602019LL;
static int8_t x814 = 33;
uint64_t x820 = 40538LLU;
volatile int32_t t198 = 38163847;
static volatile int64_t x822 = -1LL;


void f0(void) {
    	volatile int64_t t0 = -1752723LL;

    t0 = ((x1%x2)+(x3!=x4));

    if (t0 != 1247958LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 24462779804338LL;
	int8_t x6 = INT8_MIN;

    t1 = ((x5%x6)+(x7!=x8));

    if (t1 != 51LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	static volatile int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MAX;
	int64_t t2 = -231701707158LL;

    t2 = ((x9%x10)+(x11!=x12));

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static volatile uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 25177U;
	static uint64_t t3 = 1246LLU;

    t3 = ((x13%x14)+(x15!=x16));

    if (t3 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int64_t x23 = 575249105LL;
	int32_t x24 = INT32_MIN;
	static volatile int64_t t4 = 7LL;

    t4 = ((x21%x22)+(x23!=x24));

    if (t4 != -2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -1;
	int64_t x26 = 1LL;
	int32_t x27 = -23001691;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = 17774395434475LL;

    t5 = ((x25%x26)+(x27!=x28));

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = 348LLU;
	static int16_t x32 = 115;
	volatile int32_t t6 = -215;

    t6 = ((x29%x30)+(x31!=x32));

    if (t6 != 256) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MAX;
	static int16_t x36 = INT16_MIN;
	int64_t t7 = 30937875273208LL;

    t7 = ((x33%x34)+(x35!=x36));

    if (t7 != -2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = INT16_MIN;
	uint16_t x39 = 42U;
	uint8_t x40 = 20U;
	static volatile int32_t t8 = -64;

    t8 = ((x37%x38)+(x39!=x40));

    if (t8 != 109) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 1219435874324138225LLU;
	uint64_t x42 = 261393289328LLU;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;
	volatile uint64_t t9 = 122229LLU;

    t9 = ((x41%x42)+(x43!=x44));

    if (t9 != 107335090962LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x47 = -1;
	int8_t x48 = -1;

    t10 = ((x45%x46)+(x47!=x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MIN;
	static uint64_t x52 = UINT64_MAX;
	volatile int64_t t11 = 394641852671400155LL;

    t11 = ((x49%x50)+(x51!=x52));

    if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = 764356590;
	int32_t x54 = INT32_MAX;
	int64_t x55 = -749009924325719LL;
	int32_t x56 = INT32_MIN;
	int32_t t12 = -13659;

    t12 = ((x53%x54)+(x55!=x56));

    if (t12 != 764356591) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x58 = 3425007U;
	uint16_t x59 = UINT16_MAX;
	static int32_t x60 = INT32_MIN;
	volatile uint32_t t13 = 25639U;

    t13 = ((x57%x58)+(x59!=x60));

    if (t13 != 8391U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x63 = INT8_MIN;
	uint64_t x64 = 3944906078301765LLU;

    t14 = ((x61%x62)+(x63!=x64));

    if (t14 != -127LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = UINT16_MAX;
	static uint16_t x66 = 32443U;
	static int16_t x68 = INT16_MIN;
	static volatile int32_t t15 = 2883388;

    t15 = ((x65%x66)+(x67!=x68));

    if (t15 != 650) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x70 = INT8_MIN;
	volatile int32_t x72 = -1;

    t16 = ((x69%x70)+(x71!=x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x74 = 3959132026820801LL;
	uint32_t x75 = 5U;
	volatile uint8_t x76 = 0U;
	static int64_t t17 = 4149724451181165LL;

    t17 = ((x73%x74)+(x75!=x76));

    if (t17 != 4294967296LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = 1783;
	volatile uint32_t t18 = 1U;

    t18 = ((x77%x78)+(x79!=x80));

    if (t18 != 1784U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MAX;
	static uint64_t x83 = 2604437257414997LLU;
	int8_t x84 = -6;

    t19 = ((x81%x82)+(x83!=x84));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	int32_t t20 = 0;

    t20 = ((x85%x86)+(x87!=x88));

    if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = -4;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = -1;
	int32_t t21 = 545;

    t21 = ((x89%x90)+(x91!=x92));

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = INT32_MIN;
	uint8_t x94 = 2U;
	static int8_t x95 = -23;
	static uint32_t x96 = UINT32_MAX;
	volatile int32_t t22 = 2;

    t22 = ((x93%x94)+(x95!=x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x98 = -879;
	int8_t x99 = INT8_MIN;
	static volatile int32_t t23 = 21501;

    t23 = ((x97%x98)+(x99!=x100));

    if (t23 != 128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x101 = 834043101925091LL;
	volatile uint64_t x102 = UINT64_MAX;
	volatile uint32_t x103 = 1147570732U;
	static int32_t x104 = INT32_MIN;

    t24 = ((x101%x102)+(x103!=x104));

    if (t24 != 834043101925092LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x105 = 0LL;
	int32_t x106 = -6547468;
	int8_t x107 = -51;
	int32_t x108 = INT32_MIN;
	static volatile int64_t t25 = -17140562700054LL;

    t25 = ((x105%x106)+(x107!=x108));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 6LLU;
	static uint64_t x110 = UINT64_MAX;
	volatile uint8_t x111 = 46U;
	int64_t x112 = -1LL;
	uint64_t t26 = 508LLU;

    t26 = ((x109%x110)+(x111!=x112));

    if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 2881U;
	uint8_t x114 = 2U;
	volatile uint64_t x115 = UINT64_MAX;
	volatile uint32_t t27 = 13953U;

    t27 = ((x113%x114)+(x115!=x116));

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	uint32_t t28 = 143548U;

    t28 = ((x117%x118)+(x119!=x120));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 1;
	int32_t x122 = -3083643;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = UINT32_MAX;
	int32_t t29 = -527816872;

    t29 = ((x121%x122)+(x123!=x124));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x125 = INT16_MAX;
	uint8_t x127 = UINT8_MAX;
	static volatile int8_t x128 = -1;

    t30 = ((x125%x126)+(x127!=x128));

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = UINT16_MAX;
	volatile int16_t x130 = INT16_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MAX;
	static volatile int32_t t31 = -422;

    t31 = ((x129%x130)+(x131!=x132));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -1811961;
	uint32_t x134 = 1U;
	static int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;

    t32 = ((x133%x134)+(x135!=x136));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	static int16_t x138 = 13;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;
	volatile uint32_t t33 = 3712756U;

    t33 = ((x137%x138)+(x139!=x140));

    if (t33 != 9U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x141 = 2;
	volatile int16_t x142 = -1;
	volatile int32_t t34 = 38343170;

    t34 = ((x141%x142)+(x143!=x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = INT64_MAX;
	int8_t x146 = 20;
	volatile uint16_t x147 = 127U;
	uint64_t x148 = 9058656607621775733LLU;
	int64_t t35 = 917005973006828LL;

    t35 = ((x145%x146)+(x147!=x148));

    if (t35 != 8LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x149 = -1;
	static uint64_t x151 = UINT64_MAX;
	static int64_t x152 = -1LL;

    t36 = ((x149%x150)+(x151!=x152));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = UINT32_MAX;
	static volatile int64_t x156 = INT64_MIN;
	volatile int32_t t37 = 688;

    t37 = ((x153%x154)+(x155!=x156));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	volatile int64_t x159 = -199769343455758LL;
	uint16_t x160 = 1135U;
	volatile int64_t t38 = -94652LL;

    t38 = ((x157%x158)+(x159!=x160));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	volatile uint32_t x163 = UINT32_MAX;
	int64_t x164 = INT64_MIN;
	int32_t t39 = -25604;

    t39 = ((x161%x162)+(x163!=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x165 = 1U;
	int32_t x166 = INT32_MAX;
	int64_t x167 = -1LL;

    t40 = ((x165%x166)+(x167!=x168));

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x170 = UINT64_MAX;
	volatile int16_t x172 = INT16_MIN;
	static volatile uint64_t t41 = 221LLU;

    t41 = ((x169%x170)+(x171!=x172));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x174 = INT32_MIN;
	static int16_t x176 = INT16_MIN;

    t42 = ((x173%x174)+(x175!=x176));

    if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = UINT16_MAX;
	uint8_t x178 = 92U;
	int8_t x179 = INT8_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t43 = -33076661;

    t43 = ((x177%x178)+(x179!=x180));

    if (t43 != 32) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;

    t44 = ((x181%x182)+(x183!=x184));

    if (t44 != 728547U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x186 = -4676;
	volatile int8_t x187 = 1;
	static volatile int16_t x188 = INT16_MAX;
	static int32_t t45 = -6;

    t45 = ((x185%x186)+(x187!=x188));

    if (t45 != 36) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x190 = INT8_MIN;
	int16_t x192 = -1;

    t46 = ((x189%x190)+(x191!=x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x195 = INT32_MAX;
	int64_t x196 = -124LL;
	volatile int32_t t47 = 0;

    t47 = ((x193%x194)+(x195!=x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x197 = 1703731LLU;
	int64_t x198 = -1LL;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = -3713621726054LL;
	uint64_t t48 = 6480392LLU;

    t48 = ((x197%x198)+(x199!=x200));

    if (t48 != 1703732LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x201 = 0;
	static uint32_t x202 = 38278993U;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;
	uint32_t t49 = 787971736U;

    t49 = ((x201%x202)+(x203!=x204));

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = INT16_MIN;
	volatile int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MAX;

    t50 = ((x205%x206)+(x207!=x208));

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -138;
	uint64_t x211 = 203304095088LLU;
	int8_t x212 = INT8_MIN;

    t51 = ((x209%x210)+(x211!=x212));

    if (t51 != -137) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x214 = 1U;
	volatile int32_t x215 = 839616071;
	int16_t x216 = 4;
	volatile int32_t t52 = -1;

    t52 = ((x213%x214)+(x215!=x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = 63LL;
	int8_t x218 = INT8_MAX;
	static int16_t x219 = -2459;
	uint64_t x220 = UINT64_MAX;
	volatile int64_t t53 = 16117636128376LL;

    t53 = ((x217%x218)+(x219!=x220));

    if (t53 != 64LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x222 = 255863639LL;
	uint32_t x223 = 105672448U;

    t54 = ((x221%x222)+(x223!=x224));

    if (t54 != 201149072LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = UINT64_MAX;
	int8_t x226 = -2;
	uint32_t x227 = 0U;
	volatile uint32_t x228 = UINT32_MAX;
	volatile uint64_t t55 = 508050LLU;

    t55 = ((x225%x226)+(x227!=x228));

    if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 9U;
	uint64_t x230 = UINT64_MAX;
	uint16_t x231 = 1U;
	int64_t x232 = 49160708LL;
	volatile uint64_t t56 = 566LLU;

    t56 = ((x229%x230)+(x231!=x232));

    if (t56 != 10LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x233 = -1;
	static int8_t x234 = -35;
	int16_t x235 = -3;
	static int16_t x236 = -1;
	volatile int32_t t57 = -3048;

    t57 = ((x233%x234)+(x235!=x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x237 = 37U;
	static int16_t x238 = INT16_MAX;
	static volatile int16_t x240 = 2292;
	static volatile int32_t t58 = -100308401;

    t58 = ((x237%x238)+(x239!=x240));

    if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x241 = UINT8_MAX;
	static int16_t x242 = INT16_MAX;
	static int32_t x243 = INT32_MAX;
	volatile int8_t x244 = 18;
	volatile int32_t t59 = 4398;

    t59 = ((x241%x242)+(x243!=x244));

    if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x245 = -1;
	uint32_t x246 = 4293758U;
	int8_t x248 = 42;

    t60 = ((x245%x246)+(x247!=x248));

    if (t60 != 1209296U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x249 = -2563160091559LL;
	uint32_t x250 = 5652001U;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	volatile int64_t t61 = -6958278LL;

    t61 = ((x249%x250)+(x251!=x252));

    if (t61 != -246062LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x253 = INT16_MIN;
	static uint64_t x255 = 662656453082LLU;
	int32_t x256 = 167;
	volatile int32_t t62 = -32;

    t62 = ((x253%x254)+(x255!=x256));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x257 = UINT64_MAX;
	static int8_t x258 = 1;
	volatile uint16_t x260 = 26U;
	uint64_t t63 = 64894962LLU;

    t63 = ((x257%x258)+(x259!=x260));

    if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x261 = INT64_MAX;
	uint8_t x263 = UINT8_MAX;
	static int32_t x264 = -137;
	volatile int64_t t64 = -10356866391485LL;

    t64 = ((x261%x262)+(x263!=x264));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x265 = -22LL;
	static uint64_t x266 = UINT64_MAX;
	static uint32_t x267 = 61U;
	int16_t x268 = -1;
	volatile uint64_t t65 = 10189LLU;

    t65 = ((x265%x266)+(x267!=x268));

    if (t65 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x269 = 108U;
	static volatile int16_t x270 = 178;
	volatile int8_t x271 = INT8_MIN;
	static volatile int16_t x272 = INT16_MIN;

    t66 = ((x269%x270)+(x271!=x272));

    if (t66 != 109U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = INT64_MIN;
	int32_t x274 = 255;
	volatile int64_t t67 = -1982156606LL;

    t67 = ((x273%x274)+(x275!=x276));

    if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = INT16_MAX;
	int8_t x278 = -63;
	static volatile int16_t x279 = 4;
	int64_t x280 = INT64_MIN;

    t68 = ((x277%x278)+(x279!=x280));

    if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x282 = UINT32_MAX;
	volatile int32_t x283 = INT32_MAX;
	volatile int64_t x284 = -669057570821381LL;

    t69 = ((x281%x282)+(x283!=x284));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = UINT8_MAX;
	static volatile int32_t x286 = INT32_MAX;
	uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = -1;
	volatile int32_t t70 = 1959;

    t70 = ((x285%x286)+(x287!=x288));

    if (t70 != 256) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -3;
	int16_t x291 = -1;
	int32_t t71 = -253456401;

    t71 = ((x289%x290)+(x291!=x292));

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = 1;
	uint8_t x294 = UINT8_MAX;
	int16_t x296 = -1;
	int32_t t72 = -8921;

    t72 = ((x293%x294)+(x295!=x296));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x297 = INT8_MAX;
	static uint8_t x300 = UINT8_MAX;
	static volatile int32_t t73 = -410;

    t73 = ((x297%x298)+(x299!=x300));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x301 = INT64_MAX;
	uint32_t x302 = UINT32_MAX;
	uint64_t x303 = 13135LLU;
	int32_t x304 = -26224571;

    t74 = ((x301%x302)+(x303!=x304));

    if (t74 != 2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = -1;
	int8_t x306 = INT8_MAX;
	int64_t x307 = INT64_MAX;

    t75 = ((x305%x306)+(x307!=x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x313 = -1;
	static int64_t x314 = 5255989915LL;
	static int16_t x315 = INT16_MIN;
	int32_t x316 = 42019664;
	volatile int64_t t76 = 398207268731288050LL;

    t76 = ((x313%x314)+(x315!=x316));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x317 = 2131771297U;
	int32_t x318 = 1192;
	int8_t x319 = -1;
	uint16_t x320 = 601U;
	uint32_t t77 = 7U;

    t77 = ((x317%x318)+(x319!=x320));

    if (t77 != 882U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x321 = 4U;
	int16_t x322 = -1;
	volatile int64_t x323 = INT64_MIN;
	static uint8_t x324 = 1U;
	volatile int32_t t78 = -10278660;

    t78 = ((x321%x322)+(x323!=x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x325 = INT32_MAX;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = 0;
	int8_t x328 = -1;
	uint32_t t79 = 5U;

    t79 = ((x325%x326)+(x327!=x328));

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x329 = 2U;
	volatile int32_t x330 = 33;
	int64_t x331 = 27890344157LL;
	int16_t x332 = -113;
	volatile int32_t t80 = 193307138;

    t80 = ((x329%x330)+(x331!=x332));

    if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x333 = 28U;
	static int32_t x334 = INT32_MIN;
	int32_t x336 = INT32_MIN;
	uint32_t t81 = 654U;

    t81 = ((x333%x334)+(x335!=x336));

    if (t81 != 29U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x337 = INT16_MIN;
	uint64_t x338 = 10968095861893LLU;
	static uint16_t x339 = UINT16_MAX;
	uint64_t t82 = 94739537045LLU;

    t82 = ((x337%x338)+(x339!=x340));

    if (t82 != 8176001329227LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x341 = -1LL;
	volatile int32_t x342 = -23;
	static uint16_t x343 = 6039U;
	volatile int16_t x344 = INT16_MIN;
	int64_t t83 = -23LL;

    t83 = ((x341%x342)+(x343!=x344));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x346 = INT32_MIN;
	uint16_t x347 = 170U;
	uint32_t x348 = 5800U;
	volatile int32_t t84 = -16095;

    t84 = ((x345%x346)+(x347!=x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = -76;
	volatile int64_t x351 = -473532122491700812LL;
	volatile int16_t x352 = 384;
	volatile int32_t t85 = 190;

    t85 = ((x349%x350)+(x351!=x352));

    if (t85 != -75) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x357 = INT8_MAX;
	int32_t x358 = -1;
	static int16_t x359 = INT16_MIN;
	static volatile int32_t t86 = 554988;

    t86 = ((x357%x358)+(x359!=x360));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = -1LL;
	uint32_t x363 = UINT32_MAX;
	static uint32_t x364 = 121U;
	volatile int64_t t87 = -1LL;

    t87 = ((x361%x362)+(x363!=x364));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = -626;
	static volatile int16_t x366 = INT16_MIN;
	static volatile uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;
	static int32_t t88 = 24460954;

    t88 = ((x365%x366)+(x367!=x368));

    if (t88 != -625) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = INT8_MAX;
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = -6847780749229LL;
	volatile int64_t t89 = 1398024LL;

    t89 = ((x369%x370)+(x371!=x372));

    if (t89 != 128LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x373 = 12U;
	int16_t x375 = INT16_MIN;
	int16_t x376 = 1;
	int64_t t90 = 2357526LL;

    t90 = ((x373%x374)+(x375!=x376));

    if (t90 != 13LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x377 = 9U;
	static volatile int64_t x378 = INT64_MAX;
	int16_t x379 = 7801;
	uint8_t x380 = 5U;
	volatile int64_t t91 = -2930078749890081LL;

    t91 = ((x377%x378)+(x379!=x380));

    if (t91 != 10LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x381 = UINT8_MAX;
	int32_t x382 = INT32_MIN;
	static int64_t x383 = 37566602611428085LL;
	volatile int16_t x384 = -2000;
	int32_t t92 = -12264;

    t92 = ((x381%x382)+(x383!=x384));

    if (t92 != 256) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x385 = INT32_MIN;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MIN;
	volatile int32_t t93 = -212051;

    t93 = ((x385%x386)+(x387!=x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MAX;
	static int16_t x390 = -1165;
	static int32_t x391 = -1;
	int32_t x392 = INT32_MIN;
	int32_t t94 = -364371;

    t94 = ((x389%x390)+(x391!=x392));

    if (t94 != 703) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = INT64_MIN;
	volatile uint16_t x394 = 2561U;
	volatile int64_t x395 = INT64_MIN;
	volatile int64_t x396 = 9823980379929LL;
	volatile int64_t t95 = 286808109638300LL;

    t95 = ((x393%x394)+(x395!=x396));

    if (t95 != -2295LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x397 = -49953;
	static volatile int64_t x398 = -616LL;
	int16_t x399 = INT16_MIN;
	int64_t t96 = 20137473236LL;

    t96 = ((x397%x398)+(x399!=x400));

    if (t96 != -56LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x402 = -29;
	static uint8_t x403 = 5U;
	uint16_t x404 = 21065U;
	volatile int32_t t97 = -190;

    t97 = ((x401%x402)+(x403!=x404));

    if (t97 != 25) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile uint64_t x406 = 203163LLU;
	volatile uint16_t x407 = UINT16_MAX;
	int32_t x408 = INT32_MIN;

    t98 = ((x405%x406)+(x407!=x408));

    if (t98 != 101476LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = UINT32_MAX;
	int16_t x410 = INT16_MAX;
	volatile int8_t x411 = INT8_MAX;
	volatile int8_t x412 = -3;
	volatile uint32_t t99 = 334957463U;

    t99 = ((x409%x410)+(x411!=x412));

    if (t99 != 4U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x413 = INT32_MIN;
	volatile int64_t x414 = -60619668717599LL;
	uint32_t x415 = 167U;
	static int64_t t100 = -1098497079512903059LL;

    t100 = ((x413%x414)+(x415!=x416));

    if (t100 != -2147483647LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x417 = INT32_MAX;
	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MAX;
	uint32_t x420 = UINT32_MAX;
	int32_t t101 = 13;

    t101 = ((x417%x418)+(x419!=x420));

    if (t101 != 32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	static int32_t x422 = 5838456;
	int32_t t102 = -1144215;

    t102 = ((x421%x422)+(x423!=x424));

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = 1922U;
	int8_t x428 = INT8_MAX;
	volatile int32_t t103 = 176;

    t103 = ((x425%x426)+(x427!=x428));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x429 = 508LLU;
	static volatile uint8_t x432 = 0U;
	volatile uint64_t t104 = 2698875549584LLU;

    t104 = ((x429%x430)+(x431!=x432));

    if (t104 != 509LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x434 = 50U;
	int8_t x435 = -1;
	int8_t x436 = INT8_MIN;
	int32_t t105 = -32;

    t105 = ((x433%x434)+(x435!=x436));

    if (t105 != -47) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	volatile uint32_t x439 = UINT32_MAX;
	volatile int32_t x440 = 819937022;
	volatile int32_t t106 = -11;

    t106 = ((x437%x438)+(x439!=x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x441 = -1;
	static uint64_t x442 = 57395714968LLU;
	int8_t x443 = 3;
	int32_t x444 = INT32_MIN;
	volatile uint64_t t107 = 90149124636265319LLU;

    t107 = ((x441%x442)+(x443!=x444));

    if (t107 != 49168618496LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x445 = INT8_MAX;
	uint32_t x446 = UINT32_MAX;
	volatile int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	volatile uint32_t t108 = 2380U;

    t108 = ((x445%x446)+(x447!=x448));

    if (t108 != 128U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x449 = -1;
	static volatile int16_t x450 = 1;
	int16_t x451 = INT16_MIN;
	static volatile int64_t x452 = 16138754181936617LL;
	int32_t t109 = -2190;

    t109 = ((x449%x450)+(x451!=x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint32_t x454 = 9694U;
	int8_t x455 = -1;
	volatile int16_t x456 = INT16_MAX;

    t110 = ((x453%x454)+(x455!=x456));

    if (t110 != 7829U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x457 = INT32_MIN;
	static int64_t x458 = INT64_MIN;
	static uint16_t x459 = UINT16_MAX;
	int16_t x460 = -1;
	volatile int64_t t111 = 6041132131LL;

    t111 = ((x457%x458)+(x459!=x460));

    if (t111 != -2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = INT16_MIN;
	static uint32_t x463 = 3U;
	volatile uint32_t t112 = 101856422U;

    t112 = ((x461%x462)+(x463!=x464));

    if (t112 != 4294934529U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x466 = INT8_MIN;
	uint16_t x467 = 1310U;

    t113 = ((x465%x466)+(x467!=x468));

    if (t113 != 61) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x469 = -44;
	volatile int32_t t114 = -2;

    t114 = ((x469%x470)+(x471!=x472));

    if (t114 != -43) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x475 = 722;
	int64_t x476 = -780LL;

    t115 = ((x473%x474)+(x475!=x476));

    if (t115 != 65536) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x477 = INT32_MAX;
	static int8_t x478 = 18;
	static volatile int64_t x479 = INT64_MAX;
	static uint16_t x480 = UINT16_MAX;
	static int32_t t116 = -27452;

    t116 = ((x477%x478)+(x479!=x480));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x481 = 120;
	int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MAX;
	static int8_t x484 = INT8_MAX;
	int32_t t117 = 7297813;

    t117 = ((x481%x482)+(x483!=x484));

    if (t117 != 120) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x486 = -1LL;
	int8_t x487 = INT8_MIN;
	static uint8_t x488 = 8U;
	int64_t t118 = 1LL;

    t118 = ((x485%x486)+(x487!=x488));

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x490 = -3;
	static int64_t x491 = INT64_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t119 = 252619280;

    t119 = ((x489%x490)+(x491!=x492));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x493 = 7802876800034LLU;
	int32_t x494 = 88908;
	static int64_t x495 = INT64_MIN;
	int16_t x496 = INT16_MIN;

    t120 = ((x493%x494)+(x495!=x496));

    if (t120 != 75483LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x497 = -1;
	uint64_t x498 = 676LLU;
	uint64_t t121 = 30LLU;

    t121 = ((x497%x498)+(x499!=x500));

    if (t121 != 432LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x501 = 3;
	int8_t x502 = INT8_MAX;
	static uint32_t x504 = 5823512U;
	volatile int32_t t122 = -9166129;

    t122 = ((x501%x502)+(x503!=x504));

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x509 = 1U;
	uint64_t x510 = UINT64_MAX;
	uint16_t x512 = 426U;
	volatile uint64_t t123 = 393686LLU;

    t123 = ((x509%x510)+(x511!=x512));

    if (t123 != 2LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x513 = UINT8_MAX;
	volatile int32_t x514 = INT32_MAX;
	volatile int8_t x515 = -1;
	int64_t x516 = -49181272119095LL;
	int32_t t124 = -1971691;

    t124 = ((x513%x514)+(x515!=x516));

    if (t124 != 256) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = INT16_MIN;
	int64_t x522 = -2047519698218057LL;
	int32_t x523 = INT32_MIN;
	int64_t x524 = INT64_MAX;
	int64_t t125 = 626473747LL;

    t125 = ((x521%x522)+(x523!=x524));

    if (t125 != -32767LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = INT64_MIN;
	volatile int64_t x526 = INT64_MIN;
	static int64_t x527 = -87750271651LL;
	volatile int16_t x528 = 0;

    t126 = ((x525%x526)+(x527!=x528));

    if (t126 != 1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x529 = 563;
	uint8_t x530 = 2U;
	int64_t x531 = -1LL;
	static uint8_t x532 = 1U;
	static int32_t t127 = 4657;

    t127 = ((x529%x530)+(x531!=x532));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x533 = INT32_MAX;
	uint64_t t128 = 4312113062241021263LLU;

    t128 = ((x533%x534)+(x535!=x536));

    if (t128 != 2147483648LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x537 = INT16_MIN;
	int64_t x539 = 4809LL;
	int8_t x540 = INT8_MIN;

    t129 = ((x537%x538)+(x539!=x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x541 = 49U;
	uint32_t x542 = 89U;
	static int16_t x543 = INT16_MAX;

    t130 = ((x541%x542)+(x543!=x544));

    if (t130 != 50U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x545 = INT32_MAX;
	uint64_t x546 = 9111041607502185520LLU;
	int64_t x547 = INT64_MIN;
	uint32_t x548 = 7U;

    t131 = ((x545%x546)+(x547!=x548));

    if (t131 != 2147483648LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x549 = INT8_MIN;
	volatile uint16_t x550 = UINT16_MAX;
	int8_t x551 = 0;
	int64_t x552 = -1LL;

    t132 = ((x549%x550)+(x551!=x552));

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MAX;
	uint32_t x554 = 1062U;
	int8_t x555 = INT8_MIN;
	int64_t x556 = -196LL;
	volatile uint32_t t133 = 15630346U;

    t133 = ((x553%x554)+(x555!=x556));

    if (t133 != 908U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x557 = 8135;
	uint64_t x558 = 3518LLU;
	int8_t x559 = 3;
	volatile int32_t x560 = INT32_MIN;
	volatile uint64_t t134 = 24LLU;

    t134 = ((x557%x558)+(x559!=x560));

    if (t134 != 1100LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x561 = INT32_MIN;
	static uint64_t x562 = 17755862714036LLU;
	int64_t x563 = INT64_MIN;
	static uint64_t t135 = 14084912983LLU;

    t135 = ((x561%x562)+(x563!=x564));

    if (t135 != 739322927209LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x566 = -1;
	uint64_t t136 = 771LLU;

    t136 = ((x565%x566)+(x567!=x568));

    if (t136 != 263004882LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MIN;
	static uint8_t x570 = 3U;
	volatile int64_t x571 = INT64_MIN;
	uint8_t x572 = 0U;
	int64_t t137 = -123606017715085LL;

    t137 = ((x569%x570)+(x571!=x572));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x573 = INT64_MIN;
	volatile int64_t x574 = INT64_MAX;
	int8_t x576 = INT8_MIN;
	volatile int64_t t138 = 1LL;

    t138 = ((x573%x574)+(x575!=x576));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = INT8_MAX;
	int16_t x578 = INT16_MAX;
	volatile int64_t x580 = -4233904626558290LL;
	int32_t t139 = -10507779;

    t139 = ((x577%x578)+(x579!=x580));

    if (t139 != 128) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = -1;
	static uint16_t x582 = 7922U;
	int32_t x583 = 324;
	int8_t x584 = -1;
	static int32_t t140 = 150955757;

    t140 = ((x581%x582)+(x583!=x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x585 = -943620;
	int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	int32_t x588 = 442394271;
	int64_t t141 = -9151LL;

    t141 = ((x585%x586)+(x587!=x588));

    if (t141 != -943619LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x590 = UINT64_MAX;
	uint64_t x592 = 131090250005506LLU;
	static volatile uint64_t t142 = 11LLU;

    t142 = ((x589%x590)+(x591!=x592));

    if (t142 != 64LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x593 = INT32_MAX;
	volatile int64_t x594 = INT64_MIN;
	static int8_t x595 = INT8_MAX;
	volatile int16_t x596 = 453;
	int64_t t143 = 332053269543LL;

    t143 = ((x593%x594)+(x595!=x596));

    if (t143 != 2147483648LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x598 = UINT16_MAX;
	static volatile uint16_t x599 = 7U;
	static int32_t x600 = 15971;
	int32_t t144 = 154;

    t144 = ((x597%x598)+(x599!=x600));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	static int64_t x603 = INT64_MIN;
	int64_t x604 = -1LL;

    t145 = ((x601%x602)+(x603!=x604));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x605 = 1480U;
	uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	volatile int32_t x608 = 1876;

    t146 = ((x605%x606)+(x607!=x608));

    if (t146 != 1481U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x609 = 64LLU;
	uint8_t x610 = 26U;
	uint64_t x611 = 100LLU;
	static uint64_t x612 = 26354147992933281LLU;
	volatile uint64_t t147 = 8408128919438146LLU;

    t147 = ((x609%x610)+(x611!=x612));

    if (t147 != 13LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = INT8_MAX;
	int32_t x614 = -86481845;
	static int16_t x615 = INT16_MIN;
	volatile int32_t t148 = -55;

    t148 = ((x613%x614)+(x615!=x616));

    if (t148 != 128) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x617 = 5U;
	int32_t x618 = INT32_MIN;
	uint32_t x619 = 107U;
	uint64_t x620 = 270562LLU;
	uint32_t t149 = 1945U;

    t149 = ((x617%x618)+(x619!=x620));

    if (t149 != 6U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x621 = INT32_MAX;
	int16_t x622 = 5;
	uint32_t x623 = 206U;
	int32_t t150 = -635068;

    t150 = ((x621%x622)+(x623!=x624));

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = -1;
	static uint16_t x626 = 23246U;
	volatile uint16_t x627 = UINT16_MAX;
	int8_t x628 = 0;
	int32_t t151 = 3;

    t151 = ((x625%x626)+(x627!=x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x629 = INT32_MIN;
	static int8_t x630 = INT8_MIN;
	int16_t x631 = 1;
	int64_t x632 = 11241LL;

    t152 = ((x629%x630)+(x631!=x632));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x633 = 6;
	uint8_t x635 = UINT8_MAX;
	uint64_t x636 = UINT64_MAX;
	volatile int64_t t153 = -20920678884882LL;

    t153 = ((x633%x634)+(x635!=x636));

    if (t153 != 7LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = -1LL;
	volatile int16_t x638 = -1;
	int16_t x639 = -1665;
	volatile int64_t t154 = 3328063LL;

    t154 = ((x637%x638)+(x639!=x640));

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x643 = -803;
	uint32_t x644 = 1U;
	volatile int32_t t155 = -566451;

    t155 = ((x641%x642)+(x643!=x644));

    if (t155 != -3871) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x645 = INT64_MAX;
	volatile uint16_t x646 = UINT16_MAX;
	static int64_t x647 = INT64_MAX;
	static int64_t t156 = 373LL;

    t156 = ((x645%x646)+(x647!=x648));

    if (t156 != 32768LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MIN;
	static int32_t x651 = 72;
	int64_t t157 = -29525073015LL;

    t157 = ((x649%x650)+(x651!=x652));

    if (t157 != -2147483647LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x653 = 6;
	uint16_t x654 = UINT16_MAX;
	static int64_t x655 = INT64_MIN;
	static int8_t x656 = -1;
	volatile int32_t t158 = -66023;

    t158 = ((x653%x654)+(x655!=x656));

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x657 = 4;
	volatile int8_t x658 = INT8_MIN;
	int8_t x659 = 0;
	uint8_t x660 = UINT8_MAX;

    t159 = ((x657%x658)+(x659!=x660));

    if (t159 != 5) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = 24;
	int16_t x662 = INT16_MIN;
	uint64_t x663 = 160011110455427LLU;

    t160 = ((x661%x662)+(x663!=x664));

    if (t160 != 25) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x666 = -1LL;
	volatile int64_t x667 = INT64_MIN;
	int8_t x668 = -1;
	volatile int64_t t161 = 6071LL;

    t161 = ((x665%x666)+(x667!=x668));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x672 = 109U;
	volatile uint64_t t162 = 16895988345LLU;

    t162 = ((x669%x670)+(x671!=x672));

    if (t162 != 14680LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 4787U;
	int8_t x675 = INT8_MIN;
	uint64_t x676 = UINT64_MAX;
	int32_t t163 = 121924439;

    t163 = ((x673%x674)+(x675!=x676));

    if (t163 != 3305) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x677 = -1LL;
	static volatile int8_t x678 = INT8_MAX;
	uint32_t x679 = 187996U;
	volatile int64_t t164 = 154LL;

    t164 = ((x677%x678)+(x679!=x680));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x682 = UINT64_MAX;
	volatile int8_t x683 = INT8_MIN;
	int16_t x684 = INT16_MAX;

    t165 = ((x681%x682)+(x683!=x684));

    if (t165 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x685 = UINT32_MAX;
	uint32_t x686 = 22289U;
	volatile int64_t x687 = 35LL;
	int64_t x688 = INT64_MIN;
	volatile uint32_t t166 = 203311U;

    t166 = ((x685%x686)+(x687!=x688));

    if (t166 != 10730U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x689 = 175U;
	volatile int64_t x691 = 1603547980259LL;
	uint32_t t167 = 15290U;

    t167 = ((x689%x690)+(x691!=x692));

    if (t167 != 176U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x693 = 5U;
	uint8_t x695 = UINT8_MAX;
	static int32_t t168 = -22762016;

    t168 = ((x693%x694)+(x695!=x696));

    if (t168 != 6) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = 1;
	volatile int32_t t169 = 13801;

    t169 = ((x697%x698)+(x699!=x700));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x702 = 21447U;
	static int64_t x703 = 628692179503473LL;
	int32_t x704 = -1;
	volatile int64_t t170 = 1457994252LL;

    t170 = ((x701%x702)+(x703!=x704));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = INT8_MIN;
	uint16_t x706 = UINT16_MAX;
	static uint16_t x707 = UINT16_MAX;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t171 = -3854;

    t171 = ((x705%x706)+(x707!=x708));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x709 = 805311426LLU;
	volatile int64_t x710 = -1017071348LL;
	int32_t x711 = -1010557;
	uint64_t t172 = 3947886LLU;

    t172 = ((x709%x710)+(x711!=x712));

    if (t172 != 805311427LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x713 = -20;
	int8_t x714 = INT8_MIN;
	uint16_t x715 = 11U;
	volatile int32_t t173 = -72360745;

    t173 = ((x713%x714)+(x715!=x716));

    if (t173 != -19) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x719 = -1LL;
	volatile uint64_t x720 = UINT64_MAX;
	uint64_t t174 = 13991380633074038LLU;

    t174 = ((x717%x718)+(x719!=x720));

    if (t174 != 29LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x724 = INT8_MIN;
	volatile int32_t t175 = 664775947;

    t175 = ((x721%x722)+(x723!=x724));

    if (t175 != 398) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = INT16_MIN;
	uint8_t x726 = UINT8_MAX;
	uint64_t x727 = 754402282940LLU;
	static volatile uint32_t x728 = UINT32_MAX;
	int32_t t176 = 8702360;

    t176 = ((x725%x726)+(x727!=x728));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x729 = INT8_MAX;
	uint64_t x730 = 217LLU;
	volatile int64_t x731 = -18382439292LL;
	uint64_t x732 = UINT64_MAX;
	uint64_t t177 = 1621693841868312LLU;

    t177 = ((x729%x730)+(x731!=x732));

    if (t177 != 128LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = -91831;
	int64_t x739 = INT64_MIN;
	volatile uint32_t x740 = 83571057U;
	int32_t t178 = -185105;

    t178 = ((x737%x738)+(x739!=x740));

    if (t178 != -127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x741 = 74U;
	int8_t x742 = INT8_MIN;
	uint8_t x743 = 13U;
	static uint64_t x744 = 141686484964384353LLU;
	int32_t t179 = -1120;

    t179 = ((x741%x742)+(x743!=x744));

    if (t179 != 75) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	int16_t x747 = INT16_MAX;
	int16_t x748 = INT16_MAX;
	static volatile int32_t t180 = 2;

    t180 = ((x745%x746)+(x747!=x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x750 = INT8_MIN;
	static int32_t x751 = 853681895;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t181 = 0;

    t181 = ((x749%x750)+(x751!=x752));

    if (t181 != 128) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x753 = INT32_MAX;
	volatile int8_t x754 = INT8_MIN;
	uint32_t x755 = 4441522U;
	int8_t x756 = 0;
	static volatile int32_t t182 = -96;

    t182 = ((x753%x754)+(x755!=x756));

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x757 = -29;
	int64_t x758 = INT64_MIN;
	uint32_t x759 = 31U;
	int64_t t183 = 107300817623676LL;

    t183 = ((x757%x758)+(x759!=x760));

    if (t183 != -28LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = INT16_MAX;
	uint32_t x763 = 455U;
	static int64_t x764 = INT64_MIN;
	volatile int32_t t184 = -106;

    t184 = ((x761%x762)+(x763!=x764));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x765 = 2907U;
	volatile int32_t x766 = 128626;
	uint16_t x767 = UINT16_MAX;
	static int64_t x768 = 27622174LL;

    t185 = ((x765%x766)+(x767!=x768));

    if (t185 != 2908) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x769 = 79LLU;
	static int8_t x770 = INT8_MIN;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = 49;

    t186 = ((x769%x770)+(x771!=x772));

    if (t186 != 80LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x775 = -1;
	int8_t x776 = -1;
	static int32_t t187 = -45585;

    t187 = ((x773%x774)+(x775!=x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x778 = -1LL;
	uint16_t x779 = UINT16_MAX;
	volatile int64_t t188 = -114408123382394624LL;

    t188 = ((x777%x778)+(x779!=x780));

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = -1;
	volatile uint64_t x782 = 38147017470401418LLU;
	static int32_t x783 = -1;
	uint8_t x784 = 5U;
	uint64_t t189 = 61832LLU;

    t189 = ((x781%x782)+(x783!=x784));

    if (t189 != 21734635505666722LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x785 = INT64_MIN;
	uint64_t x786 = UINT64_MAX;
	int64_t x787 = -1LL;
	static volatile int16_t x788 = -6318;
	volatile uint64_t t190 = 55528933216123772LLU;

    t190 = ((x785%x786)+(x787!=x788));

    if (t190 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x789 = INT16_MAX;
	uint64_t x790 = 4038878394735LLU;
	int32_t x791 = INT32_MIN;
	int32_t x792 = INT32_MIN;

    t191 = ((x789%x790)+(x791!=x792));

    if (t191 != 32767LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x793 = 33;
	int64_t x795 = 3524LL;
	int16_t x796 = -847;
	static uint32_t t192 = 130U;

    t192 = ((x793%x794)+(x795!=x796));

    if (t192 != 34U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x797 = 13089U;
	int16_t x799 = INT16_MIN;
	volatile uint32_t t193 = 488312U;

    t193 = ((x797%x798)+(x799!=x800));

    if (t193 != 13090U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x801 = INT8_MAX;
	int8_t x802 = -1;
	static int64_t x803 = -1LL;
	uint64_t x804 = 1314855022452537922LLU;

    t194 = ((x801%x802)+(x803!=x804));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x806 = 40472004LL;
	int64_t x807 = INT64_MIN;
	int8_t x808 = INT8_MIN;

    t195 = ((x805%x806)+(x807!=x808));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x809 = -1;
	volatile uint8_t x810 = UINT8_MAX;
	int16_t x811 = -1;
	uint32_t x812 = UINT32_MAX;
	static int32_t t196 = 1;

    t196 = ((x809%x810)+(x811!=x812));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint64_t x815 = 2315564495466249LLU;
	uint16_t x816 = UINT16_MAX;
	int32_t t197 = -5;

    t197 = ((x813%x814)+(x815!=x816));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x817 = 3U;
	int8_t x818 = -1;
	static int8_t x819 = INT8_MIN;

    t198 = ((x817%x818)+(x819!=x820));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x823 = INT32_MIN;
	int64_t x824 = INT64_MAX;
	static int64_t t199 = 32286412LL;

    t199 = ((x821%x822)+(x823!=x824));

    if (t199 != 1LL) { NG(); } else { ; }
	
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

