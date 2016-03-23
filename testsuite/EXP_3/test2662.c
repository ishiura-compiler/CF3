
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

int8_t x4 = 23;
int32_t x14 = INT32_MIN;
volatile int64_t x20 = INT64_MAX;
uint8_t x33 = 3U;
uint32_t t8 = 42892630U;
int64_t x39 = INT64_MIN;
int16_t x41 = -36;
uint32_t x43 = 9563244U;
static uint32_t t10 = 1406660U;
volatile int32_t t12 = 9319414;
static volatile uint16_t x53 = 11217U;
int64_t x73 = INT64_MAX;
static uint16_t x88 = 3U;
int32_t x98 = -11912895;
static int32_t x103 = -1;
int64_t x107 = -1LL;
int64_t t26 = 217511566009LL;
static uint32_t x110 = 656U;
uint32_t x112 = UINT32_MAX;
int32_t x116 = INT32_MAX;
uint64_t x121 = 35125040255603791LLU;
static volatile uint64_t t32 = 1LLU;
static int16_t x136 = INT16_MIN;
uint16_t x140 = 2U;
static int32_t t35 = -6252639;
volatile uint32_t x151 = 349U;
uint32_t x155 = 618U;
static uint64_t x157 = 16150758LLU;
uint16_t x160 = 175U;
uint16_t x163 = 38U;
int32_t t41 = 15071052;
int16_t x169 = INT16_MIN;
int32_t x170 = INT32_MIN;
volatile uint16_t x175 = UINT16_MAX;
volatile uint32_t x179 = 8331010U;
int16_t x181 = INT16_MAX;
int8_t x182 = 11;
static uint32_t x183 = 24U;
int16_t x188 = INT16_MAX;
volatile int32_t t46 = -52481392;
uint8_t x193 = UINT8_MAX;
int32_t x199 = -1;
int64_t t49 = -1509729999701954146LL;
static volatile int8_t x202 = INT8_MIN;
int32_t t50 = 90;
static uint8_t x208 = UINT8_MAX;
int32_t t52 = -4;
uint8_t x214 = 5U;
static volatile int16_t x216 = INT16_MAX;
static int32_t x223 = INT32_MAX;
int64_t t56 = -1758424048593654LL;
static int64_t x230 = INT64_MIN;
uint32_t x232 = 4353U;
static uint32_t t58 = 921490159U;
volatile int32_t x240 = INT32_MAX;
int8_t x245 = INT8_MAX;
uint8_t x260 = 48U;
static volatile int8_t x263 = -2;
uint16_t x264 = UINT16_MAX;
uint64_t x269 = 208LLU;
static volatile int16_t x274 = -1;
int32_t t70 = 2;
uint16_t x285 = UINT16_MAX;
int32_t x288 = 113;
uint32_t x295 = UINT32_MAX;
int64_t x303 = INT64_MAX;
uint32_t x304 = 14360U;
int64_t x310 = INT64_MIN;
volatile int64_t x311 = -7LL;
volatile uint32_t x318 = 2167U;
int64_t x319 = INT64_MIN;
static uint16_t x324 = 5463U;
volatile int32_t x345 = -1;
int64_t x346 = INT64_MIN;
static uint64_t x349 = 5139666837LLU;
int64_t x351 = 2157045162842560988LL;
int16_t x352 = INT16_MIN;
static int64_t x354 = -1LL;
volatile int32_t x356 = INT32_MIN;
int32_t t87 = 37126;
uint8_t x360 = 3U;
static volatile int32_t x362 = INT32_MIN;
int64_t x368 = INT64_MIN;
int64_t t90 = 3384638LL;
static int8_t x381 = INT8_MIN;
volatile uint32_t x384 = 133114649U;
static volatile uint32_t t94 = 14997U;
int16_t x389 = 21;
int64_t x392 = INT64_MAX;
int16_t x394 = 5;
int32_t t98 = 7839075;
static int8_t x406 = -1;
volatile uint64_t x409 = 76590129599254LLU;
int64_t x410 = -1LL;
int64_t x423 = INT64_MIN;
static int64_t x424 = -1LL;
static int64_t t104 = -1456304LL;
uint64_t x427 = 0LLU;
static int8_t x436 = INT8_MIN;
int64_t x450 = INT64_MAX;
int64_t x452 = INT64_MIN;
int8_t x459 = -1;
int32_t x463 = -206317;
volatile int64_t t114 = 8590145674546LL;
static int64_t x469 = 63654355859LL;
int8_t x470 = -1;
int32_t x472 = INT32_MIN;
int64_t t116 = 965572LL;
int8_t x480 = INT8_MIN;
int32_t t118 = -1;
volatile int16_t x483 = INT16_MIN;
volatile int32_t t119 = -1;
uint64_t x490 = UINT64_MAX;
uint8_t x493 = 99U;
int64_t x494 = 534167844718947LL;
uint32_t x497 = UINT32_MAX;
volatile int8_t x500 = INT8_MAX;
int64_t t123 = 246351LL;
uint8_t x504 = UINT8_MAX;
volatile int64_t t125 = 2018999368255LL;
int64_t x509 = INT64_MIN;
uint64_t x510 = 3153895986664885352LLU;
volatile int64_t x515 = -1LL;
int8_t x516 = -1;
static int64_t x537 = INT64_MIN;
int8_t x538 = 1;
volatile uint32_t x541 = UINT32_MAX;
int8_t x543 = INT8_MIN;
uint32_t x548 = 126989686U;
uint64_t x552 = 580591839203658567LLU;
int64_t x554 = INT64_MIN;
uint8_t x555 = 0U;
uint16_t x556 = 5125U;
int64_t x557 = INT64_MIN;
int8_t x558 = INT8_MIN;
int32_t x572 = -474861;
int8_t x581 = INT8_MIN;
int16_t x591 = INT16_MAX;
static uint64_t t147 = 551692119408012LLU;
volatile uint64_t x605 = UINT64_MAX;
int32_t t150 = -1;
volatile int32_t x615 = INT32_MIN;
volatile uint32_t t152 = 721632417U;
volatile int32_t x619 = -89934;
uint16_t x621 = 0U;
static int16_t x628 = -1;
volatile int32_t t156 = -1175;
int32_t x637 = INT32_MIN;
int8_t x648 = INT8_MIN;
int8_t x651 = 22;
static volatile uint64_t t161 = 124LLU;
static int8_t x655 = -1;
volatile int32_t t163 = -157;
int8_t x662 = -1;
volatile int64_t x667 = -1LL;
volatile int64_t t165 = -4367720375050LL;
int8_t x675 = -31;
volatile uint64_t t167 = 1979457887LLU;
volatile int64_t x679 = -1LL;
uint32_t x687 = 1076U;
static int16_t x688 = 202;
int16_t x689 = INT16_MIN;
static int16_t x690 = INT16_MIN;
int64_t x691 = INT64_MIN;
uint8_t x692 = 119U;
int16_t x697 = INT16_MAX;
int32_t x701 = INT32_MAX;
static int32_t t175 = 1681;
static uint16_t x709 = UINT16_MAX;
int64_t x712 = -30694862369LL;
volatile int64_t t176 = -889210761858LL;
int8_t x715 = 1;
uint8_t x720 = 10U;
static uint8_t x723 = 30U;
static int32_t t180 = 1;
uint16_t x735 = UINT16_MAX;
uint32_t t183 = 29551U;
int8_t x742 = INT8_MIN;
volatile int32_t x744 = -1;
static int32_t t184 = 24;
volatile int64_t t185 = -1903411998954997442LL;
int32_t x762 = INT32_MIN;
volatile int8_t x765 = -1;
uint32_t t189 = 117U;
static int64_t t190 = -6LL;
uint64_t x777 = UINT64_MAX;
int16_t x779 = -1;
static int32_t x780 = -12415506;
int32_t x788 = -116;
int32_t t194 = -30082431;
int8_t x793 = INT8_MAX;
uint32_t x799 = 184599U;
uint8_t x803 = UINT8_MAX;
int8_t x804 = INT8_MIN;
volatile int32_t t198 = -1983;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	volatile int32_t x2 = INT32_MIN;
	volatile int32_t x3 = -1;
	int32_t t0 = -62183883;

    t0 = ((x1>x2)-(x3^x4));

    if (t0 != 25) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static volatile int8_t x6 = -1;
	uint16_t x7 = 55U;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 1;

    t1 = ((x5>x6)-(x7^x8));

    if (t1 != 2147483593) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	volatile uint32_t x10 = 144951210U;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 1397222LL;
	volatile int64_t t2 = 154258290623357731LL;

    t2 = ((x9>x10)-(x11^x12));

    if (t2 != 1397147LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	volatile int16_t x15 = -1;
	int32_t x16 = 593;
	static volatile int32_t t3 = 1;

    t3 = ((x13>x14)-(x15^x16));

    if (t3 != 595) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -15064LL;
	int64_t x18 = 107159269099LL;
	int16_t x19 = 3;
	int64_t t4 = -2337211656LL;

    t4 = ((x17>x18)-(x19^x20));

    if (t4 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 65U;
	static int16_t x22 = -1;
	int32_t x23 = INT32_MIN;
	uint16_t x24 = 17785U;
	int32_t t5 = -65;

    t5 = ((x21>x22)-(x23^x24));

    if (t5 != 2147465863) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = -304802784930LL;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	int16_t x28 = INT16_MIN;
	static int64_t t6 = 1470107510418LL;

    t6 = ((x25>x26)-(x27^x28));

    if (t6 != -32766LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -23LL;
	int8_t x30 = INT8_MAX;
	static volatile uint8_t x31 = 8U;
	int32_t x32 = -1;
	volatile int32_t t7 = 16500;

    t7 = ((x29>x30)-(x31^x32));

    if (t7 != 9) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = -1;

    t8 = ((x33>x34)-(x35^x36));

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 319173983LL;
	volatile int32_t x38 = INT32_MIN;
	static int16_t x40 = -1;
	int64_t t9 = -22863LL;

    t9 = ((x37>x38)-(x39^x40));

    if (t9 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x42 = INT16_MIN;
	static volatile uint8_t x44 = 94U;

    t10 = ((x41>x42)-(x43^x44));

    if (t10 != 4285404111U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 2649U;
	int8_t x46 = -4;
	static uint64_t x47 = 6459LLU;
	int64_t x48 = -4386188249982LL;
	volatile uint64_t t11 = 3379817566044351LLU;

    t11 = ((x45>x46)-(x47^x48));

    if (t11 != 4386188251719LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = 4077797;
	int16_t x50 = INT16_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MAX;

    t12 = ((x49>x50)-(x51^x52));

    if (t12 != 32642) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = -4710;
	volatile int8_t x55 = INT8_MIN;
	uint32_t x56 = 58U;
	uint32_t t13 = 261079630U;

    t13 = ((x53>x54)-(x55^x56));

    if (t13 != 71U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 126U;
	int8_t x58 = -1;
	uint32_t x59 = 409U;
	int16_t x60 = INT16_MIN;
	volatile uint32_t t14 = 1394209063U;

    t14 = ((x57>x58)-(x59^x60));

    if (t14 != 32359U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 13U;
	uint8_t x62 = 9U;
	static int32_t x63 = INT32_MAX;
	int8_t x64 = INT8_MAX;
	static int32_t t15 = 29;

    t15 = ((x61>x62)-(x63^x64));

    if (t15 != -2147483519) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int8_t x66 = 56;
	volatile int8_t x67 = INT8_MIN;
	uint32_t x68 = 199470282U;
	uint32_t t16 = 13589U;

    t16 = ((x65>x66)-(x67^x68));

    if (t16 != 199470262U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MIN;
	int8_t x70 = 0;
	int32_t x71 = -1;
	volatile int64_t x72 = -1LL;
	static int64_t t17 = -130531813LL;

    t17 = ((x69>x70)-(x71^x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	static uint8_t x75 = 0U;
	volatile int32_t x76 = -5440;
	volatile int32_t t18 = 83;

    t18 = ((x73>x74)-(x75^x76));

    if (t18 != 5441) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	uint16_t x78 = 84U;
	int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MIN;
	int32_t t19 = 199;

    t19 = ((x77>x78)-(x79^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = INT16_MIN;
	int64_t x82 = 3087225LL;
	volatile uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 24U;
	int32_t t20 = 38684;

    t20 = ((x81>x82)-(x83^x84));

    if (t20 != -65511) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 1;
	int32_t x86 = -1;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t t21 = -125675737;

    t21 = ((x85>x86)-(x87^x88));

    if (t21 != -65531) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	static volatile uint64_t x92 = 50LLU;
	static uint64_t t22 = 119082LLU;

    t22 = ((x89>x90)-(x91^x92));

    if (t22 != 18446744073709518900LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 36021347259735726LLU;
	uint64_t t23 = 1979538341780216LLU;

    t23 = ((x93>x94)-(x95^x96));

    if (t23 != 36021347259720018LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	static int64_t x99 = INT64_MAX;
	uint8_t x100 = UINT8_MAX;
	int64_t t24 = 5356636501LL;

    t24 = ((x97>x98)-(x99^x100));

    if (t24 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 42032U;
	static volatile uint64_t x102 = 7440467360760490035LLU;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 4277086;

    t25 = ((x101>x102)-(x103^x104));

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -64;
	int32_t x106 = INT32_MIN;
	int8_t x108 = -1;

    t26 = ((x105>x106)-(x107^x108));

    if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 3022422LL;
	int32_t x111 = -17;
	uint32_t t27 = 446724412U;

    t27 = ((x109>x110)-(x111^x112));

    if (t27 != 4294967281U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 55608U;
	uint64_t x114 = 835788286564113343LLU;
	static int32_t x115 = INT32_MIN;
	volatile int32_t t28 = -58409285;

    t28 = ((x113>x114)-(x115^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = INT64_MIN;
	int32_t x118 = 643870404;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;
	int64_t t29 = -4386237209411683LL;

    t29 = ((x117>x118)-(x119^x120));

    if (t29 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 62;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MAX;
	static int32_t t30 = 27;

    t30 = ((x121>x122)-(x123^x124));

    if (t30 != 2147483522) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 1U;
	volatile int16_t x126 = 141;
	uint64_t x127 = UINT64_MAX;
	static int64_t x128 = INT64_MIN;
	volatile uint64_t t31 = 36704435753LLU;

    t31 = ((x125>x126)-(x127^x128));

    if (t31 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 7U;
	volatile uint64_t x130 = 15231LLU;
	uint64_t x131 = 1583357247LLU;
	uint64_t x132 = 383778738139476LLU;

    t32 = ((x129>x130)-(x131^x132));

    if (t32 != 18446360296147915669LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -1;
	static volatile uint64_t x134 = 7380214615328144505LLU;
	volatile int16_t x135 = INT16_MIN;
	volatile int32_t t33 = 78000970;

    t33 = ((x133>x134)-(x135^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x137 = 5U;
	int64_t x138 = 7120061195LL;
	volatile int8_t x139 = -2;
	volatile int32_t t34 = -3861;

    t34 = ((x137>x138)-(x139^x140));

    if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 0;
	int64_t x142 = -1LL;
	int32_t x143 = 38355742;
	static int32_t x144 = INT32_MIN;

    t35 = ((x141>x142)-(x143^x144));

    if (t35 != 2109127907) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 484328000U;
	uint16_t x146 = 13051U;
	int16_t x147 = -7641;
	int32_t x148 = -5365330;
	static volatile int32_t t36 = -16147686;

    t36 = ((x145>x146)-(x147^x148));

    if (t36 != -5358472) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	volatile int16_t x150 = -1;
	int16_t x152 = INT16_MIN;
	uint32_t t37 = 263U;

    t37 = ((x149>x150)-(x151^x152));

    if (t37 != 32419U) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint64_t x154 = 1089LLU;
	static int64_t x156 = 3076251731716LL;
	int64_t t38 = -27LL;

    t38 = ((x153>x154)-(x155^x156));

    if (t38 != -3076251731309LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x158 = UINT64_MAX;
	volatile uint8_t x159 = 37U;
	volatile int32_t t39 = -5737;

    t39 = ((x157>x158)-(x159^x160));

    if (t39 != -138) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 95U;
	int16_t x162 = INT16_MAX;
	int64_t x164 = -127LL;
	int64_t t40 = -100709409LL;

    t40 = ((x161>x162)-(x163^x164));

    if (t40 != 89LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MIN;
	uint8_t x166 = 0U;
	static int8_t x167 = INT8_MIN;
	uint8_t x168 = 4U;

    t41 = ((x165>x166)-(x167^x168));

    if (t41 != 124) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x171 = UINT32_MAX;
	volatile uint16_t x172 = 35U;
	uint32_t t42 = 809U;

    t42 = ((x169>x170)-(x171^x172));

    if (t42 != 37U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MIN;
	static int64_t x174 = -46968923LL;
	uint16_t x176 = 11U;
	int32_t t43 = -429507;

    t43 = ((x173>x174)-(x175^x176));

    if (t43 != -65524) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x177 = UINT8_MAX;
	static volatile int32_t x178 = INT32_MIN;
	static int64_t x180 = 10276783LL;
	volatile int64_t t44 = 8326769LL;

    t44 = ((x177>x178)-(x179^x180));

    if (t44 != -14930092LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x184 = 72U;
	static volatile uint32_t t45 = 2801U;

    t45 = ((x181>x182)-(x183^x184));

    if (t45 != 4294967217U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x185 = -58381130;
	int16_t x186 = -11;
	static int16_t x187 = -1;

    t46 = ((x185>x186)-(x187^x188));

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 26LLU;
	uint8_t x190 = 6U;
	int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = 2124895212983741297LLU;
	uint64_t t47 = 28298LLU;

    t47 = ((x189>x190)-(x191^x192));

    if (t47 != 2124895213962728592LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x194 = INT32_MIN;
	uint16_t x195 = 24U;
	int32_t x196 = -1535388;
	static int32_t t48 = 7268689;

    t48 = ((x193>x194)-(x195^x196));

    if (t48 != 1535365) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x197 = 52;
	int16_t x198 = INT16_MIN;
	volatile int64_t x200 = INT64_MIN;

    t49 = ((x197>x198)-(x199^x200));

    if (t49 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int8_t x203 = INT8_MIN;
	static volatile int8_t x204 = 3;

    t50 = ((x201>x202)-(x203^x204));

    if (t50 != 126) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 1994LLU;
	uint8_t x206 = 9U;
	int64_t x207 = -1LL;
	volatile int64_t t51 = -56185LL;

    t51 = ((x205>x206)-(x207^x208));

    if (t51 != 257LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	uint16_t x210 = 1U;
	volatile int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -23;

    t52 = ((x209>x210)-(x211^x212));

    if (t52 != -32744) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint8_t x215 = 1U;
	int32_t t53 = 2883121;

    t53 = ((x213>x214)-(x215^x216));

    if (t53 != -32766) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = UINT32_MAX;
	static uint32_t x218 = UINT32_MAX;
	static int64_t x219 = INT64_MIN;
	static int32_t x220 = INT32_MIN;
	int64_t t54 = 92LL;

    t54 = ((x217>x218)-(x219^x220));

    if (t54 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x221 = INT64_MAX;
	uint32_t x222 = UINT32_MAX;
	int32_t x224 = 32017075;
	volatile int32_t t55 = 23748;

    t55 = ((x221>x222)-(x223^x224));

    if (t55 != -2115466571) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1;
	static int16_t x226 = -1238;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -1;

    t56 = ((x225>x226)-(x227^x228));

    if (t56 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = 5;
	int32_t x231 = INT32_MAX;
	uint32_t t57 = 2251462U;

    t57 = ((x229>x230)-(x231^x232));

    if (t57 != 2147488003U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	volatile int16_t x234 = 4;
	uint32_t x235 = UINT32_MAX;
	int8_t x236 = INT8_MIN;

    t58 = ((x233>x234)-(x235^x236));

    if (t58 != 4294967169U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = -5593;
	int32_t t59 = 9819944;

    t59 = ((x237>x238)-(x239^x240));

    if (t59 != 2147478056) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = 169917631398872082LL;
	int32_t x242 = -6304;
	uint64_t x243 = 5183486910LLU;
	uint16_t x244 = 10294U;
	uint64_t t60 = 767808LLU;

    t60 = ((x241>x242)-(x243^x244));

    if (t60 != 18446744068526075001LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x246 = 354U;
	int16_t x247 = -1;
	int16_t x248 = INT16_MAX;
	int32_t t61 = 1;

    t61 = ((x245>x246)-(x247^x248));

    if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 11027LLU;
	int16_t x250 = INT16_MAX;
	static int16_t x251 = 0;
	int8_t x252 = 60;
	static volatile int32_t t62 = -8240469;

    t62 = ((x249>x250)-(x251^x252));

    if (t62 != -60) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 207680453;
	uint32_t x254 = 218661211U;
	uint64_t x255 = 61303251999385LLU;
	int32_t x256 = -1;
	volatile uint64_t t63 = 14203175044126LLU;

    t63 = ((x253>x254)-(x255^x256));

    if (t63 != 61303251999386LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -439987;
	static volatile int32_t t64 = 15;

    t64 = ((x257>x258)-(x259^x260));

    if (t64 != 439940) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	static int64_t x262 = INT64_MAX;
	volatile int32_t t65 = 105;

    t65 = ((x261>x262)-(x263^x264));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	uint64_t x266 = 244163LLU;
	uint32_t x267 = UINT32_MAX;
	static uint16_t x268 = 1U;
	uint32_t t66 = 824U;

    t66 = ((x265>x266)-(x267^x268));

    if (t66 != 3U) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	volatile int64_t t67 = -138600930545727433LL;

    t67 = ((x269>x270)-(x271^x272));

    if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x273 = INT16_MAX;
	volatile int64_t x275 = INT64_MAX;
	int8_t x276 = 13;
	volatile int64_t t68 = -54477407080060LL;

    t68 = ((x273>x274)-(x275^x276));

    if (t68 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x277 = -2205976012004LL;
	uint8_t x278 = 2U;
	int8_t x279 = INT8_MAX;
	uint32_t x280 = 27U;
	static volatile uint32_t t69 = 392692U;

    t69 = ((x277>x278)-(x279^x280));

    if (t69 != 4294967196U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	static int64_t x282 = INT64_MAX;
	int8_t x283 = INT8_MIN;
	int32_t x284 = 255380;

    t70 = ((x281>x282)-(x283^x284));

    if (t70 != 255468) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x286 = INT32_MIN;
	static int8_t x287 = -1;
	volatile int32_t t71 = -570256;

    t71 = ((x285>x286)-(x287^x288));

    if (t71 != 115) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	int64_t x290 = -3998849437042353635LL;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -2LL;

    t72 = ((x289>x290)-(x291^x292));

    if (t72 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 17562U;
	uint32_t x294 = UINT32_MAX;
	int8_t x296 = -1;
	static volatile uint32_t t73 = 77512U;

    t73 = ((x293>x294)-(x295^x296));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int8_t x298 = INT8_MAX;
	int8_t x299 = 0;
	static uint16_t x300 = 4U;
	int32_t t74 = -163398;

    t74 = ((x297>x298)-(x299^x300));

    if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	static volatile int16_t x302 = INT16_MIN;
	volatile int64_t t75 = -4778312662LL;

    t75 = ((x301>x302)-(x303^x304));

    if (t75 != -9223372036854761446LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MIN;
	uint8_t x307 = 0U;
	int8_t x308 = -1;
	volatile int32_t t76 = 61596;

    t76 = ((x305>x306)-(x307^x308));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x309 = INT64_MAX;
	int32_t x312 = INT32_MIN;
	static int64_t t77 = 972395788LL;

    t77 = ((x309>x310)-(x311^x312));

    if (t77 != -2147483640LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x317 = 170LLU;
	int32_t x320 = -1;
	volatile int64_t t78 = 71604954781925947LL;

    t78 = ((x317>x318)-(x319^x320));

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x321 = -1LL;
	static int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	int32_t t79 = -29359;

    t79 = ((x321>x322)-(x323^x324));

    if (t79 != 5418) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x325 = 875247662U;
	uint64_t x326 = 238705LLU;
	volatile uint32_t x327 = 1373069666U;
	static uint64_t x328 = 40038423464675305LLU;
	volatile uint64_t t80 = 630423448827937436LLU;

    t80 = ((x325>x326)-(x327^x328));

    if (t80 != 18406705651080370550LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = 2;
	uint32_t x330 = UINT32_MAX;
	volatile int64_t x331 = -578347396993LL;
	int16_t x332 = INT16_MAX;
	static volatile int64_t t81 = -11437130396583LL;

    t81 = ((x329>x330)-(x331^x332));

    if (t81 != 578347372672LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x333 = 43752;
	uint32_t x334 = 319017U;
	int64_t x335 = 31131032006181LL;
	int8_t x336 = -1;
	static int64_t t82 = 4784LL;

    t82 = ((x333>x334)-(x335^x336));

    if (t82 != 31131032006182LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = INT8_MIN;
	volatile uint32_t x338 = 186U;
	uint64_t x339 = 15166879178LLU;
	static volatile int32_t x340 = INT32_MAX;
	volatile uint64_t t83 = 15446429766140LLU;

    t83 = ((x337>x338)-(x339^x340));

    if (t83 != 18446744056664176076LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x341 = -1LL;
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = INT32_MAX;
	static volatile int8_t x344 = 0;
	volatile int32_t t84 = -64146;

    t84 = ((x341>x342)-(x343^x344));

    if (t84 != -2147483646) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t85 = -362487618258LL;

    t85 = ((x345>x346)-(x347^x348));

    if (t85 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x350 = 10U;
	int64_t t86 = -1229554LL;

    t86 = ((x349>x350)-(x351^x352));

    if (t86 != 2157045162842580517LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = INT32_MIN;
	int16_t x355 = INT16_MAX;

    t87 = ((x353>x354)-(x355^x356));

    if (t87 != 2147450881) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = -1;
	int64_t x358 = INT64_MAX;
	volatile int8_t x359 = INT8_MAX;
	int32_t t88 = 106086406;

    t88 = ((x357>x358)-(x359^x360));

    if (t88 != -124) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x361 = 1892U;
	int16_t x363 = -1;
	int8_t x364 = INT8_MAX;
	int32_t t89 = -4;

    t89 = ((x361>x362)-(x363^x364));

    if (t89 != 129) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MAX;
	uint16_t x366 = 42U;
	volatile int16_t x367 = -1;

    t90 = ((x365>x366)-(x367^x368));

    if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x369 = 2U;
	volatile int64_t x370 = -23562613LL;
	uint64_t x371 = UINT64_MAX;
	volatile int16_t x372 = 164;
	uint64_t t91 = 12642LLU;

    t91 = ((x369>x370)-(x371^x372));

    if (t91 != 166LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = -193714650077740463LL;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 56U;
	int8_t x376 = INT8_MAX;
	int32_t t92 = 39408299;

    t92 = ((x373>x374)-(x375^x376));

    if (t92 != -71) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x377 = INT32_MAX;
	uint32_t x378 = 3884U;
	uint64_t x379 = 9213466553540004314LLU;
	int16_t x380 = 10;
	volatile uint64_t t93 = 3507316410221958366LLU;

    t93 = ((x377>x378)-(x379^x380));

    if (t93 != 9233277520169547313LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x382 = 271;
	static uint16_t x383 = 9837U;

    t94 = ((x381>x382)-(x383^x384));

    if (t94 != 4161860236U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x385 = 86712505969LLU;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	volatile int64_t x388 = -11910698510LL;
	volatile int64_t t95 = -3454148LL;

    t95 = ((x385>x386)-(x387^x388));

    if (t95 != -9223372024944077298LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x390 = INT32_MIN;
	uint16_t x391 = 0U;
	static int64_t t96 = -7648827797953LL;

    t96 = ((x389>x390)-(x391^x392));

    if (t96 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x393 = UINT64_MAX;
	int8_t x395 = 15;
	static int64_t x396 = -1LL;
	int64_t t97 = -6676731LL;

    t97 = ((x393>x394)-(x395^x396));

    if (t97 != 17LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x397 = INT32_MAX;
	static int16_t x398 = INT16_MAX;
	volatile int8_t x399 = 1;
	static volatile uint8_t x400 = 1U;

    t98 = ((x397>x398)-(x399^x400));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x401 = 13U;
	int32_t x402 = INT32_MIN;
	int16_t x403 = -1;
	volatile uint16_t x404 = UINT16_MAX;
	int32_t t99 = 122612;

    t99 = ((x401>x402)-(x403^x404));

    if (t99 != 65537) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x405 = 16828U;
	int8_t x407 = INT8_MIN;
	int32_t x408 = INT32_MIN;
	volatile int32_t t100 = -236010930;

    t100 = ((x405>x406)-(x407^x408));

    if (t100 != -2147483519) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x411 = -1LL;
	int32_t x412 = INT32_MAX;
	int64_t t101 = 26410403534797610LL;

    t101 = ((x409>x410)-(x411^x412));

    if (t101 != 2147483648LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x413 = INT16_MAX;
	static int32_t x414 = INT32_MIN;
	uint32_t x415 = 8437U;
	volatile int16_t x416 = INT16_MIN;
	volatile uint32_t t102 = 0U;

    t102 = ((x413>x414)-(x415^x416));

    if (t102 != 24332U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x417 = UINT64_MAX;
	uint64_t x418 = 153043616126LLU;
	int64_t x419 = 3349191LL;
	int64_t x420 = -1LL;
	int64_t t103 = 8498057LL;

    t103 = ((x417>x418)-(x419^x420));

    if (t103 != 3349193LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;

    t104 = ((x421>x422)-(x423^x424));

    if (t104 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x425 = 59U;
	volatile uint8_t x426 = 2U;
	int8_t x428 = INT8_MIN;
	uint64_t t105 = 1LLU;

    t105 = ((x425>x426)-(x427^x428));

    if (t105 != 129LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x429 = UINT64_MAX;
	int32_t x430 = INT32_MIN;
	static int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t106 = 25;

    t106 = ((x429>x430)-(x431^x432));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -1;
	volatile int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	volatile int32_t t107 = 6210369;

    t107 = ((x433>x434)-(x435^x436));

    if (t107 != -2147483520) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	int8_t x439 = 10;
	int8_t x440 = -1;
	static int32_t t108 = -7;

    t108 = ((x437>x438)-(x439^x440));

    if (t108 != 12) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x441 = 19590U;
	uint16_t x442 = 10U;
	uint8_t x443 = 0U;
	int16_t x444 = INT16_MIN;
	volatile int32_t t109 = -3855;

    t109 = ((x441>x442)-(x443^x444));

    if (t109 != 32769) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int16_t x446 = -1;
	uint8_t x447 = 0U;
	static int32_t x448 = -1;
	int32_t t110 = 63198482;

    t110 = ((x445>x446)-(x447^x448));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = INT16_MIN;
	int64_t x451 = INT64_MIN;
	static int64_t t111 = 15201304966LL;

    t111 = ((x449>x450)-(x451^x452));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x453 = -444;
	int8_t x454 = -1;
	uint64_t x455 = UINT64_MAX;
	volatile int32_t x456 = INT32_MAX;
	uint64_t t112 = 424159602LLU;

    t112 = ((x453>x454)-(x455^x456));

    if (t112 != 2147483648LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x457 = UINT64_MAX;
	static volatile int32_t x458 = -115146546;
	int8_t x460 = INT8_MIN;
	volatile int32_t t113 = 922;

    t113 = ((x457>x458)-(x459^x460));

    if (t113 != -126) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = UINT8_MAX;
	int16_t x462 = 1;
	int64_t x464 = -232498978LL;

    t114 = ((x461>x462)-(x463^x464));

    if (t114 != -232293068LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x465 = UINT64_MAX;
	int16_t x466 = 1646;
	int32_t x467 = 24417130;
	static uint16_t x468 = UINT16_MAX;
	volatile int32_t t115 = 218;

    t115 = ((x465>x466)-(x467^x468));

    if (t115 != -24407188) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x471 = INT64_MAX;

    t116 = ((x469>x470)-(x471^x472));

    if (t116 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x473 = -19198818LL;
	int16_t x474 = 1;
	int64_t x475 = -1LL;
	static int8_t x476 = INT8_MIN;
	int64_t t117 = 6647300LL;

    t117 = ((x473>x474)-(x475^x476));

    if (t117 != -127LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int32_t x477 = -1;
	volatile int32_t x478 = -117499693;
	int16_t x479 = INT16_MIN;

    t118 = ((x477>x478)-(x479^x480));

    if (t118 != -32639) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x481 = 391U;
	uint16_t x482 = 15U;
	static int16_t x484 = INT16_MIN;

    t119 = ((x481>x482)-(x483^x484));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x485 = UINT8_MAX;
	int8_t x486 = INT8_MIN;
	int8_t x487 = -1;
	int16_t x488 = INT16_MIN;
	volatile int32_t t120 = -24215;

    t120 = ((x485>x486)-(x487^x488));

    if (t120 != -32766) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x489 = UINT64_MAX;
	static uint32_t x491 = 1431509807U;
	int64_t x492 = -5286LL;
	volatile int64_t t121 = -1551939960823946407LL;

    t121 = ((x489>x490)-(x491^x492));

    if (t121 != 1431506827LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x495 = UINT64_MAX;
	int16_t x496 = 49;
	volatile uint64_t t122 = 90485LLU;

    t122 = ((x493>x494)-(x495^x496));

    if (t122 != 50LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x498 = -1LL;
	int64_t x499 = INT64_MIN;

    t123 = ((x497>x498)-(x499^x500));

    if (t123 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x501 = -2LL;
	static uint16_t x502 = 246U;
	int32_t x503 = 293;
	volatile int32_t t124 = -9;

    t124 = ((x501>x502)-(x503^x504));

    if (t124 != -474) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = -1;
	volatile int64_t x507 = 187LL;
	int8_t x508 = INT8_MIN;

    t125 = ((x505>x506)-(x507^x508));

    if (t125 != 197LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x511 = 3844U;
	int8_t x512 = INT8_MIN;
	int32_t t126 = 1320052;

    t126 = ((x509>x510)-(x511^x512));

    if (t126 != 3965) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x513 = INT16_MAX;
	static int8_t x514 = INT8_MAX;
	volatile int64_t t127 = -25LL;

    t127 = ((x513>x514)-(x515^x516));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x517 = 815U;
	static uint32_t x518 = 19803U;
	int16_t x519 = INT16_MAX;
	uint16_t x520 = 2U;
	static volatile int32_t t128 = 16204;

    t128 = ((x517>x518)-(x519^x520));

    if (t128 != -32765) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x521 = INT32_MIN;
	int16_t x522 = -1;
	static int32_t x523 = INT32_MAX;
	volatile int64_t x524 = 7595LL;
	static int64_t t129 = -55LL;

    t129 = ((x521>x522)-(x523^x524));

    if (t129 != -2147476052LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = -1;
	static uint32_t x526 = UINT32_MAX;
	static int8_t x527 = INT8_MIN;
	int32_t x528 = 733959;
	int32_t t130 = 21;

    t130 = ((x525>x526)-(x527^x528));

    if (t130 != 734073) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x529 = 537339;
	int8_t x530 = 31;
	uint16_t x531 = UINT16_MAX;
	int32_t x532 = INT32_MAX;
	volatile int32_t t131 = -1607286;

    t131 = ((x529>x530)-(x531^x532));

    if (t131 != -2147418111) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x533 = -1LL;
	uint64_t x534 = 449940913921837LLU;
	uint64_t x535 = 228655LLU;
	int32_t x536 = 648638;
	volatile uint64_t t132 = 63862LLU;

    t132 = ((x533>x534)-(x535^x536));

    if (t132 != 18446744073708857200LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MIN;
	static volatile int64_t t133 = -8224672843LL;

    t133 = ((x537>x538)-(x539^x540));

    if (t133 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x542 = -1;
	uint16_t x544 = 1U;
	static volatile int32_t t134 = 25;

    t134 = ((x541>x542)-(x543^x544));

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x545 = -1;
	int32_t x546 = INT32_MIN;
	uint16_t x547 = 2U;
	uint32_t t135 = 16664U;

    t135 = ((x545>x546)-(x547^x548));

    if (t135 != 4167977613U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x549 = INT8_MIN;
	volatile int16_t x550 = -3;
	int64_t x551 = -24301363LL;
	volatile uint64_t t136 = 967LLU;

    t136 = ((x549>x550)-(x551^x552));

    if (t136 != 580591839188042870LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x553 = 224526;
	static volatile int32_t t137 = -372;

    t137 = ((x553>x554)-(x555^x556));

    if (t137 != -5124) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x559 = 337554116LLU;
	uint16_t x560 = 3299U;
	uint64_t t138 = 12733571983570LLU;

    t138 = ((x557>x558)-(x559^x560));

    if (t138 != 18446744073371998681LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x561 = INT32_MIN;
	uint64_t x562 = 174120880LLU;
	uint64_t x563 = UINT64_MAX;
	volatile uint64_t x564 = 4936516043LLU;
	volatile uint64_t t139 = 3519145382493371574LLU;

    t139 = ((x561>x562)-(x563^x564));

    if (t139 != 4936516045LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x565 = 99007LLU;
	uint16_t x566 = 26709U;
	int64_t x567 = INT64_MAX;
	uint64_t x568 = 1255412830295114807LLU;
	static uint64_t t140 = 506522666LLU;

    t140 = ((x565>x566)-(x567^x568));

    if (t140 != 10478784867149890617LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x569 = -31251LL;
	static int64_t x570 = INT64_MIN;
	int8_t x571 = -1;
	int32_t t141 = 214331;

    t141 = ((x569>x570)-(x571^x572));

    if (t141 != -474859) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = -45994483LL;
	static int32_t x574 = INT32_MAX;
	uint32_t x575 = 250U;
	volatile int32_t x576 = 54;
	static volatile uint32_t t142 = 4U;

    t142 = ((x573>x574)-(x575^x576));

    if (t142 != 4294967092U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x577 = -408860;
	int8_t x578 = INT8_MIN;
	uint32_t x579 = UINT32_MAX;
	uint64_t x580 = 157966LLU;
	volatile uint64_t t143 = 61051777944619LLU;

    t143 = ((x577>x578)-(x579^x580));

    if (t143 != 18446744069414742287LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x582 = UINT8_MAX;
	int16_t x583 = -6;
	volatile int64_t x584 = -1LL;
	static volatile int64_t t144 = -670572688908962240LL;

    t144 = ((x581>x582)-(x583^x584));

    if (t144 != -5LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x585 = 5703U;
	static int64_t x586 = 16492314LL;
	int32_t x587 = -1;
	int32_t x588 = 962;
	volatile int32_t t145 = -26076575;

    t145 = ((x585>x586)-(x587^x588));

    if (t145 != 963) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = 74271804093809161LL;
	int16_t x590 = INT16_MIN;
	int8_t x592 = -1;
	static int32_t t146 = -1156755;

    t146 = ((x589>x590)-(x591^x592));

    if (t146 != 32769) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x593 = -1390;
	int32_t x594 = INT32_MIN;
	int8_t x595 = -40;
	uint64_t x596 = 842633LLU;

    t147 = ((x593>x594)-(x595^x596));

    if (t147 != 842672LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x597 = 123U;
	uint64_t x598 = UINT64_MAX;
	static volatile int8_t x599 = INT8_MIN;
	int64_t x600 = -218728842122435542LL;
	volatile int64_t t148 = -3601LL;

    t148 = ((x597>x598)-(x599^x600));

    if (t148 != -218728842122435498LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x601 = INT16_MAX;
	int64_t x602 = INT64_MIN;
	uint16_t x603 = UINT16_MAX;
	int16_t x604 = -52;
	static int32_t t149 = 9077265;

    t149 = ((x601>x602)-(x603^x604));

    if (t149 != 65486) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x606 = 919620LL;
	uint8_t x607 = 16U;
	uint16_t x608 = UINT16_MAX;

    t150 = ((x605>x606)-(x607^x608));

    if (t150 != -65518) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x609 = INT64_MIN;
	int64_t x610 = 1318951501113LL;
	int32_t x611 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	volatile int64_t t151 = 17349566950864154LL;

    t151 = ((x609>x610)-(x611^x612));

    if (t151 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x613 = 2367809;
	int16_t x614 = INT16_MIN;
	static uint32_t x616 = UINT32_MAX;

    t152 = ((x613>x614)-(x615^x616));

    if (t152 != 2147483650U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x617 = 1790781926858688850LLU;
	int8_t x618 = -1;
	int8_t x620 = -12;
	int32_t t153 = -344901275;

    t153 = ((x617>x618)-(x619^x620));

    if (t153 != -89926) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x622 = INT32_MAX;
	static int32_t x623 = INT32_MAX;
	uint8_t x624 = UINT8_MAX;
	int32_t t154 = 154;

    t154 = ((x621>x622)-(x623^x624));

    if (t154 != -2147483392) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x625 = 52555897U;
	int8_t x626 = INT8_MAX;
	static uint16_t x627 = 13793U;
	volatile int32_t t155 = -470864865;

    t155 = ((x625>x626)-(x627^x628));

    if (t155 != 13795) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x629 = INT32_MIN;
	int8_t x630 = INT8_MAX;
	int16_t x631 = -50;
	volatile uint8_t x632 = 1U;

    t156 = ((x629>x630)-(x631^x632));

    if (t156 != 49) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x633 = -1;
	int64_t x634 = INT64_MAX;
	static int8_t x635 = 20;
	uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t157 = 59642117LLU;

    t157 = ((x633>x634)-(x635^x636));

    if (t157 != 21LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x638 = 27U;
	int64_t x639 = 43240833904LL;
	int8_t x640 = -1;
	volatile int64_t t158 = -18601682LL;

    t158 = ((x637>x638)-(x639^x640));

    if (t158 != 43240833905LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x641 = INT32_MIN;
	static volatile int16_t x642 = INT16_MAX;
	static volatile int64_t x643 = 5456116141479823LL;
	uint32_t x644 = UINT32_MAX;
	int64_t t159 = 15LL;

    t159 = ((x641>x642)-(x643^x644));

    if (t159 != -5456120152369264LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x645 = -125898;
	static int16_t x646 = INT16_MIN;
	static uint64_t x647 = UINT64_MAX;
	static volatile uint64_t t160 = 2263021731LLU;

    t160 = ((x645>x646)-(x647^x648));

    if (t160 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x649 = INT32_MAX;
	static uint16_t x650 = 146U;
	uint64_t x652 = UINT64_MAX;

    t161 = ((x649>x650)-(x651^x652));

    if (t161 != 24LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x653 = -1LL;
	int64_t x654 = INT64_MIN;
	int8_t x656 = INT8_MIN;
	volatile int32_t t162 = -690235;

    t162 = ((x653>x654)-(x655^x656));

    if (t162 != -126) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x657 = 5525679;
	uint16_t x658 = 880U;
	uint16_t x659 = 6U;
	int32_t x660 = INT32_MIN;

    t163 = ((x657>x658)-(x659^x660));

    if (t163 != 2147483643) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x661 = INT32_MIN;
	int8_t x663 = 31;
	int32_t x664 = 3902859;
	volatile int32_t t164 = -209;

    t164 = ((x661>x662)-(x663^x664));

    if (t164 != -3902868) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x665 = INT64_MIN;
	static int8_t x666 = INT8_MIN;
	int8_t x668 = INT8_MAX;

    t165 = ((x665>x666)-(x667^x668));

    if (t165 != 128LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x669 = -1;
	uint16_t x670 = 447U;
	uint16_t x671 = UINT16_MAX;
	static int8_t x672 = INT8_MIN;
	static volatile int32_t t166 = 105;

    t166 = ((x669>x670)-(x671^x672));

    if (t166 != 65409) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	volatile int64_t x674 = -36972268041LL;
	uint64_t x676 = 13913604764114378LLU;

    t167 = ((x673>x674)-(x675^x676));

    if (t167 != 13913604764114390LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x677 = INT64_MIN;
	int32_t x678 = -1;
	static uint32_t x680 = 1748U;
	int64_t t168 = -1018573077038511472LL;

    t168 = ((x677>x678)-(x679^x680));

    if (t168 != 1749LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = 69590460967LL;
	int8_t x683 = INT8_MAX;
	uint16_t x684 = 8777U;
	int32_t t169 = -21018;

    t169 = ((x681>x682)-(x683^x684));

    if (t169 != -8758) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x685 = 10262133LLU;
	static volatile int16_t x686 = -3820;
	volatile uint32_t t170 = 2U;

    t170 = ((x685>x686)-(x687^x688));

    if (t170 != 4294966018U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t t171 = -75016529LL;

    t171 = ((x689>x690)-(x691^x692));

    if (t171 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x693 = INT64_MAX;
	volatile int32_t x694 = 783;
	uint32_t x695 = 71879602U;
	static int32_t x696 = -1;
	uint32_t t172 = 48322098U;

    t172 = ((x693>x694)-(x695^x696));

    if (t172 != 71879604U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x698 = INT32_MIN;
	uint32_t x699 = 3U;
	int32_t x700 = INT32_MIN;
	static uint32_t t173 = 1830194832U;

    t173 = ((x697>x698)-(x699^x700));

    if (t173 != 2147483646U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x702 = -1LL;
	int64_t x703 = -4198784952953986005LL;
	int64_t x704 = INT64_MIN;
	int64_t t174 = 68178LL;

    t174 = ((x701>x702)-(x703^x704));

    if (t174 != -5024587083900789802LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x705 = -1;
	int8_t x706 = -3;
	int32_t x707 = -1;
	int8_t x708 = INT8_MAX;

    t175 = ((x705>x706)-(x707^x708));

    if (t175 != 129) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x710 = INT32_MAX;
	int8_t x711 = 42;

    t176 = ((x709>x710)-(x711^x712));

    if (t176 != 30694862347LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x713 = INT16_MIN;
	uint16_t x714 = UINT16_MAX;
	int8_t x716 = -1;
	int32_t t177 = -1;

    t177 = ((x713>x714)-(x715^x716));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = INT64_MIN;
	int16_t x719 = 8287;
	volatile int32_t t178 = 5634;

    t178 = ((x717>x718)-(x719^x720));

    if (t178 != -8276) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x722 = INT16_MIN;
	static int8_t x724 = 1;
	int32_t t179 = -131185455;

    t179 = ((x721>x722)-(x723^x724));

    if (t179 != -30) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x725 = 17U;
	static int8_t x726 = -4;
	static volatile int16_t x727 = 102;
	uint8_t x728 = 2U;

    t180 = ((x725>x726)-(x727^x728));

    if (t180 != -99) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x729 = 13LL;
	int8_t x730 = 6;
	static uint8_t x731 = 0U;
	volatile int8_t x732 = 53;
	int32_t t181 = 6;

    t181 = ((x729>x730)-(x731^x732));

    if (t181 != -52) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x733 = -1;
	static uint32_t x734 = UINT32_MAX;
	int32_t x736 = INT32_MAX;
	static int32_t t182 = 1;

    t182 = ((x733>x734)-(x735^x736));

    if (t182 != -2147418112) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x737 = -1;
	int32_t x738 = INT32_MAX;
	volatile uint32_t x739 = 671U;
	static int32_t x740 = INT32_MIN;

    t183 = ((x737>x738)-(x739^x740));

    if (t183 != 2147482977U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x741 = 3U;
	static volatile uint8_t x743 = UINT8_MAX;

    t184 = ((x741>x742)-(x743^x744));

    if (t184 != 257) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x745 = -1296;
	uint16_t x746 = 54U;
	volatile int16_t x747 = INT16_MAX;
	volatile int64_t x748 = -1LL;

    t185 = ((x745>x746)-(x747^x748));

    if (t185 != 32768LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x753 = INT32_MIN;
	int8_t x754 = -1;
	int8_t x755 = INT8_MAX;
	int16_t x756 = 9743;
	int32_t t186 = -1;

    t186 = ((x753>x754)-(x755^x756));

    if (t186 != -9840) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x757 = 8;
	int16_t x758 = INT16_MAX;
	uint32_t x759 = 0U;
	int32_t x760 = INT32_MIN;
	volatile uint32_t t187 = 34801258U;

    t187 = ((x757>x758)-(x759^x760));

    if (t187 != 2147483648U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x763 = INT64_MAX;
	uint32_t x764 = 10U;
	int64_t t188 = -4309134012812285262LL;

    t188 = ((x761>x762)-(x763^x764));

    if (t188 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x766 = 10939689U;
	int32_t x767 = 0;
	uint32_t x768 = UINT32_MAX;

    t189 = ((x765>x766)-(x767^x768));

    if (t189 != 2U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x769 = 63U;
	uint16_t x770 = UINT16_MAX;
	int16_t x771 = INT16_MIN;
	static int64_t x772 = INT64_MIN;

    t190 = ((x769>x770)-(x771^x772));

    if (t190 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x773 = -1LL;
	int8_t x774 = 0;
	volatile uint16_t x775 = 2668U;
	static volatile int16_t x776 = INT16_MAX;
	volatile int32_t t191 = -14;

    t191 = ((x773>x774)-(x775^x776));

    if (t191 != -30099) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x778 = 4311U;
	volatile int32_t t192 = -196;

    t192 = ((x777>x778)-(x779^x780));

    if (t192 != -12415504) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x781 = 329;
	int64_t x782 = INT64_MAX;
	static int32_t x783 = INT32_MIN;
	static int16_t x784 = INT16_MIN;
	int32_t t193 = -1;

    t193 = ((x781>x782)-(x783^x784));

    if (t193 != -2147450880) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x785 = INT64_MIN;
	uint8_t x786 = 2U;
	volatile int32_t x787 = INT32_MIN;

    t194 = ((x785>x786)-(x787^x788));

    if (t194 != -2147483532) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x789 = UINT8_MAX;
	int16_t x790 = -1;
	uint8_t x791 = 0U;
	volatile uint32_t x792 = 134468U;
	static volatile uint32_t t195 = 224U;

    t195 = ((x789>x790)-(x791^x792));

    if (t195 != 4294832829U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x794 = INT8_MIN;
	uint8_t x795 = UINT8_MAX;
	static uint64_t x796 = 54053854021LLU;
	uint64_t t196 = 1752264467027386LLU;

    t196 = ((x793>x794)-(x795^x796));

    if (t196 != 18446744019655697479LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x797 = 0U;
	int64_t x798 = INT64_MIN;
	int64_t x800 = -1LL;
	int64_t t197 = 466977LL;

    t197 = ((x797>x798)-(x799^x800));

    if (t197 != 184601LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x801 = 79U;
	int64_t x802 = -62216757048LL;

    t198 = ((x801>x802)-(x803^x804));

    if (t198 != 130) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x805 = -1;
	uint64_t x806 = UINT64_MAX;
	int16_t x807 = INT16_MIN;
	static uint32_t x808 = UINT32_MAX;
	uint32_t t199 = 4612897U;

    t199 = ((x805>x806)-(x807^x808));

    if (t199 != 4294934529U) { NG(); } else { ; }
	
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

