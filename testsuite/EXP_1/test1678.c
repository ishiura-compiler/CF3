
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

int16_t x2 = 0;
volatile uint32_t x5 = 46U;
int8_t x9 = INT8_MAX;
int8_t x13 = INT8_MIN;
uint16_t x15 = 3U;
volatile int16_t x19 = 2822;
int8_t x20 = -1;
volatile int32_t t5 = 174168232;
int32_t x29 = INT32_MIN;
volatile int32_t x40 = INT32_MIN;
int32_t x45 = -1;
int8_t x50 = INT8_MIN;
volatile int32_t x53 = INT32_MAX;
uint8_t x62 = UINT8_MAX;
int8_t x72 = INT8_MAX;
static uint8_t x76 = 62U;
static volatile int16_t x79 = -220;
static volatile int16_t x81 = INT16_MIN;
uint8_t x83 = 7U;
static int16_t x84 = 4;
uint16_t x93 = 62U;
int16_t x105 = INT16_MIN;
volatile int64_t x108 = INT64_MIN;
int64_t x114 = -38LL;
uint16_t x119 = 29U;
int32_t t29 = 37041748;
static volatile int32_t t31 = -534102825;
volatile int64_t x130 = INT64_MIN;
int64_t x134 = 1984832680347998LL;
uint32_t x135 = 2085562U;
int64_t x136 = INT64_MAX;
int64_t x140 = -1LL;
int16_t x141 = INT16_MIN;
volatile int32_t t35 = 21;
static uint64_t t37 = 1389618317316529595LLU;
static uint16_t x157 = 243U;
static int16_t x159 = INT16_MIN;
uint32_t x161 = UINT32_MAX;
uint8_t x167 = 0U;
volatile uint32_t x189 = UINT32_MAX;
int32_t x191 = -13526048;
static volatile uint32_t t47 = 669483837U;
int16_t x205 = INT16_MAX;
int32_t t51 = -157543;
volatile int8_t x211 = 35;
int32_t x215 = INT32_MIN;
int8_t x217 = INT8_MIN;
int16_t x218 = INT16_MIN;
volatile uint64_t x225 = 102504408LLU;
static int8_t x226 = -5;
static int64_t x228 = 0LL;
int32_t x234 = -5;
int32_t x238 = 6;
volatile int32_t t59 = 23345;
int8_t x245 = -1;
uint8_t x246 = 6U;
int64_t x250 = -1LL;
uint32_t x251 = UINT32_MAX;
int64_t x256 = INT64_MIN;
volatile uint16_t x260 = 2171U;
int32_t t64 = -12882;
int16_t x264 = -3894;
int32_t x271 = INT32_MIN;
int64_t t68 = -43286LL;
int16_t x285 = INT16_MAX;
uint16_t x305 = 3703U;
uint16_t x315 = UINT16_MAX;
uint32_t x316 = 28720187U;
volatile uint16_t x331 = 24922U;
int16_t x342 = 0;
volatile int32_t x347 = INT32_MIN;
int32_t x348 = 15776419;
uint32_t x349 = 53U;
static int64_t x350 = INT64_MIN;
int32_t t87 = -6215;
uint64_t x353 = UINT64_MAX;
static uint16_t x357 = 1U;
volatile int64_t t91 = -1523097358590LL;
volatile int32_t x382 = -18313;
int32_t t95 = 2314489;
volatile int32_t x387 = -432;
int32_t t96 = 2390;
volatile uint16_t x392 = 46U;
int64_t x404 = INT64_MIN;
uint64_t x408 = 14952669923806LLU;
static int64_t x410 = 11LL;
uint32_t x421 = UINT32_MAX;
volatile uint16_t x422 = 24U;
int64_t x427 = -1LL;
int64_t x433 = INT64_MIN;
int8_t x441 = -1;
int64_t x442 = -67651351836LL;
static int64_t x444 = INT64_MIN;
uint64_t x447 = UINT64_MAX;
uint32_t x452 = UINT32_MAX;
uint64_t x453 = 2056480181432474LLU;
int32_t t113 = 420;
static volatile int32_t x464 = -1;
int16_t x470 = 39;
int16_t x472 = INT16_MAX;
uint64_t x482 = 17615LLU;
volatile int64_t t120 = 3159459199604907328LL;
static int16_t x487 = 24;
int32_t x488 = INT32_MIN;
int32_t x490 = -1;
int8_t x498 = -1;
static uint32_t t124 = 6U;
int64_t x504 = INT64_MIN;
uint32_t x515 = 10982U;
uint64_t x534 = 2062086107LLU;
static volatile int32_t x535 = 11223;
uint32_t x540 = 3637791U;
volatile uint32_t x544 = UINT32_MAX;
int16_t x554 = -1;
uint64_t x561 = 455421954LLU;
uint16_t x562 = 1602U;
static int32_t t140 = 140730;
static volatile int32_t t141 = -3;
uint16_t x574 = UINT16_MAX;
volatile int32_t x581 = INT32_MIN;
volatile int32_t x586 = INT32_MIN;
volatile int8_t x589 = 2;
int64_t x594 = INT64_MAX;
static uint32_t x595 = 70630U;
uint8_t x598 = UINT8_MAX;
static uint16_t x605 = 410U;
int32_t x616 = -1482402;
int16_t x618 = -514;
volatile int32_t t155 = -499403;
int8_t x638 = INT8_MIN;
volatile int16_t x639 = 28;
uint8_t x643 = 29U;
int32_t t160 = -1;
int32_t x645 = 2415;
volatile int32_t t161 = -5149861;
volatile int16_t x653 = INT16_MIN;
int16_t x654 = -1;
uint64_t x661 = 1499675487LLU;
static int32_t x665 = -1;
int8_t x674 = -1;
static int32_t x676 = -1;
int32_t t168 = -30;
uint64_t x679 = UINT64_MAX;
int8_t x681 = INT8_MIN;
int64_t x684 = 90342477959959LL;
volatile int64_t t170 = 1864941LL;
int16_t x694 = 19;
static int32_t x695 = INT32_MAX;
uint8_t x700 = 0U;
int8_t x705 = -13;
volatile int32_t x709 = INT32_MIN;
int8_t x711 = INT8_MIN;
int32_t x712 = INT32_MIN;
int64_t x715 = -173LL;
int8_t x718 = INT8_MIN;
int16_t x719 = INT16_MIN;
uint64_t t180 = 6947243451205569LLU;
int16_t x728 = INT16_MIN;
int64_t x729 = -1LL;
static int16_t x730 = INT16_MIN;
uint8_t x731 = 122U;
int8_t x733 = INT8_MIN;
volatile int32_t x737 = -1;
int32_t x740 = -1;
static int64_t x744 = INT64_MIN;
uint8_t x746 = 28U;
static int32_t t186 = 193;
volatile int32_t t187 = 339416820;
int8_t x756 = INT8_MIN;
volatile int32_t t188 = 2;
static int32_t x763 = INT32_MIN;
uint64_t x769 = 1701547844667850314LLU;
static volatile int32_t t192 = -28876144;
int8_t x780 = 28;
uint16_t x781 = 401U;
static int32_t t195 = -4076;
static volatile int32_t x792 = INT32_MIN;


void f0(void) {
    	static uint16_t x1 = UINT16_MAX;
	int8_t x3 = INT8_MAX;
	volatile int32_t x4 = 352261;
	int32_t t0 = -6;

    t0 = (((x1>x2)==x3)&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x6 = 1503007868636390LLU;
	volatile uint16_t x7 = 51U;
	static volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -813;

    t1 = (((x5>x6)==x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x10 = INT8_MIN;
	int32_t x11 = 2;
	int64_t x12 = 190806LL;
	static int64_t t2 = 2LL;

    t2 = (((x9>x10)==x11)&x12);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	int64_t x16 = -4155704633178LL;
	static int64_t t3 = -1262517692LL;

    t3 = (((x13>x14)==x15)&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 0;
	int32_t x18 = 4;
	static int32_t t4 = 1;

    t4 = (((x17>x18)==x19)&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x21 = INT64_MIN;
	int16_t x22 = -1;
	int64_t x23 = INT64_MIN;
	uint8_t x24 = UINT8_MAX;

    t5 = (((x21>x22)==x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 489865975524794LLU;
	int64_t x26 = -1LL;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -66202475;

    t6 = (((x25>x26)==x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x30 = INT32_MIN;
	static volatile int64_t x31 = INT64_MIN;
	int64_t x32 = -1LL;
	volatile int64_t t7 = -1556029465LL;

    t7 = (((x29>x30)==x31)&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 667;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -35;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -146299864LL;

    t8 = (((x33>x34)==x35)&x36);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile int8_t x38 = INT8_MIN;
	static int32_t x39 = -62440;
	volatile int32_t t9 = -2644;

    t9 = (((x37>x38)==x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 43;
	volatile int16_t x42 = INT16_MIN;
	uint64_t x43 = 61834314651081511LLU;
	volatile int16_t x44 = INT16_MAX;
	int32_t t10 = 157588844;

    t10 = (((x41>x42)==x43)&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = INT64_MAX;
	int8_t x47 = 1;
	int64_t x48 = -228551LL;
	volatile int64_t t11 = 118060868010731LL;

    t11 = (((x45>x46)==x47)&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 309342329188501537LLU;
	int8_t x51 = 2;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 1280428;

    t12 = (((x49>x50)==x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = 8U;
	volatile int32_t t13 = 243;

    t13 = (((x53>x54)==x55)&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -15;
	int8_t x58 = -3;
	static uint8_t x59 = UINT8_MAX;
	static int64_t x60 = -16862934714LL;
	volatile int64_t t14 = -11542LL;

    t14 = (((x57>x58)==x59)&x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x63 = INT32_MAX;
	uint64_t x64 = 5LLU;
	volatile uint64_t t15 = 9918355322LLU;

    t15 = (((x61>x62)==x63)&x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	uint16_t x66 = 213U;
	volatile uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MAX;
	static volatile int64_t t16 = 112344334630LL;

    t16 = (((x65>x66)==x67)&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	volatile uint8_t x70 = 3U;
	uint32_t x71 = UINT32_MAX;
	int32_t t17 = -35;

    t17 = (((x69>x70)==x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = 28526439601LL;
	static int64_t x74 = INT64_MIN;
	static uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = 78362552;

    t18 = (((x73>x74)==x75)&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static uint32_t x78 = 966084U;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -24;

    t19 = (((x77>x78)==x79)&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x82 = 8306U;
	volatile int32_t t20 = 214885;

    t20 = (((x81>x82)==x83)&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = -61374;
	uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -27276;

    t21 = (((x85>x86)==x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	static int16_t x90 = INT16_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile int8_t x92 = -1;
	volatile int32_t t22 = 18887;

    t22 = (((x89>x90)==x91)&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = 1;
	int64_t x95 = 3235363932891LL;
	uint16_t x96 = 31U;
	int32_t t23 = 459;

    t23 = (((x93>x94)==x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	int64_t x98 = INT64_MAX;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = -1;
	int32_t t24 = -13868;

    t24 = (((x97>x98)==x99)&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static uint64_t x102 = UINT64_MAX;
	static volatile uint8_t x103 = 18U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 1203254342877038873LL;

    t25 = (((x101>x102)==x103)&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x106 = INT16_MAX;
	int32_t x107 = 52508082;
	volatile int64_t t26 = 62LL;

    t26 = (((x105>x106)==x107)&x108);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	uint32_t x111 = 2084473U;
	int64_t x112 = -1LL;
	int64_t t27 = 30574071LL;

    t27 = (((x109>x110)==x111)&x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x113 = UINT32_MAX;
	int64_t x115 = -21590614664571473LL;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 43;

    t28 = (((x113>x114)==x115)&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	int32_t x118 = INT32_MIN;
	volatile int32_t x120 = INT32_MAX;

    t29 = (((x117>x118)==x119)&x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 146190201;
	uint8_t x122 = UINT8_MAX;
	int32_t x123 = INT32_MAX;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 66612923682LL;

    t30 = (((x121>x122)==x123)&x124);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -52;
	uint16_t x126 = 4514U;
	static uint8_t x127 = 25U;
	int8_t x128 = -1;

    t31 = (((x125>x126)==x127)&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint8_t x129 = UINT8_MAX;
	uint16_t x131 = UINT16_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 1959058;

    t32 = (((x129>x130)==x131)&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 100550U;
	volatile int64_t t33 = 44776698814797984LL;

    t33 = (((x133>x134)==x135)&x136);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	static volatile int8_t x138 = -1;
	volatile int16_t x139 = INT16_MIN;
	volatile int64_t t34 = 667871516031676LL;

    t34 = (((x137>x138)==x139)&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x142 = 42U;
	int16_t x143 = INT16_MAX;
	static uint16_t x144 = UINT16_MAX;

    t35 = (((x141>x142)==x143)&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 137U;
	int8_t x146 = -1;
	volatile int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -8823487;

    t36 = (((x145>x146)==x147)&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MAX;
	volatile uint64_t x152 = 197904004253LLU;

    t37 = (((x149>x150)==x151)&x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int16_t x154 = -1;
	uint64_t x155 = 2151099340195116297LLU;
	uint16_t x156 = 2U;
	int32_t t38 = 39;

    t38 = (((x153>x154)==x155)&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	int8_t x160 = -1;
	static int32_t t39 = -147;

    t39 = (((x157>x158)==x159)&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x162 = INT16_MIN;
	int64_t x163 = -162885179LL;
	int64_t x164 = INT64_MIN;
	static int64_t t40 = 1LL;

    t40 = (((x161>x162)==x163)&x164);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 7U;
	int16_t x166 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -37014;

    t41 = (((x165>x166)==x167)&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MAX;
	int32_t x170 = -9;
	static uint8_t x171 = 5U;
	static uint32_t x172 = 68708U;
	uint32_t t42 = 52524766U;

    t42 = (((x169>x170)==x171)&x172);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 103500942LLU;
	int16_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	int16_t x176 = 7021;
	int32_t t43 = -191929548;

    t43 = (((x173>x174)==x175)&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x177 = 68U;
	int8_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = 49002541515967LL;

    t44 = (((x177>x178)==x179)&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	static int32_t x182 = 0;
	int16_t x183 = INT16_MAX;
	uint8_t x184 = 2U;
	volatile int32_t t45 = 0;

    t45 = (((x181>x182)==x183)&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = 1;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;
	static volatile int64_t t46 = -1878418164333890LL;

    t46 = (((x185>x186)==x187)&x188);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	uint32_t x192 = 339523U;

    t47 = (((x189>x190)==x191)&x192);

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	static uint64_t x194 = 2031912LLU;
	int64_t x195 = -3465066133233528374LL;
	static uint32_t x196 = 2U;
	volatile uint32_t t48 = 104675U;

    t48 = (((x193>x194)==x195)&x196);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x197 = -14;
	int8_t x198 = -1;
	int32_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -1298;

    t49 = (((x197>x198)==x199)&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = UINT8_MAX;
	static int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	int8_t x204 = -54;
	volatile int32_t t50 = 126082;

    t50 = (((x201>x202)==x203)&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = -1;

    t51 = (((x205>x206)==x207)&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 336U;
	static int16_t x210 = 6917;
	static int64_t x212 = INT64_MIN;
	int64_t t52 = -45399LL;

    t52 = (((x209>x210)==x211)&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 445231381548108884LLU;
	uint32_t x214 = 9087098U;
	static uint32_t x216 = UINT32_MAX;
	uint32_t t53 = 65U;

    t53 = (((x213>x214)==x215)&x216);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x219 = -873;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = -50757801;

    t54 = (((x217>x218)==x219)&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 56703;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 113U;
	static int64_t x224 = -1073882170646187265LL;
	int64_t t55 = -3602738839LL;

    t55 = (((x221>x222)==x223)&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x227 = UINT32_MAX;
	int64_t t56 = 2686026338145LL;

    t56 = (((x225>x226)==x227)&x228);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	static int64_t x232 = 2LL;
	volatile int64_t t57 = 1LL;

    t57 = (((x229>x230)==x231)&x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 16U;
	volatile int64_t x235 = 787376838490748LL;
	int32_t x236 = -1;
	volatile int32_t t58 = -1693;

    t58 = (((x233>x234)==x235)&x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = UINT16_MAX;
	volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

    t59 = (((x237>x238)==x239)&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = UINT16_MAX;
	uint8_t x242 = UINT8_MAX;
	static volatile int64_t x243 = INT64_MIN;
	uint64_t x244 = UINT64_MAX;
	uint64_t t60 = 69924739677880LLU;

    t60 = (((x241>x242)==x243)&x244);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x247 = INT16_MAX;
	static uint64_t x248 = UINT64_MAX;
	volatile uint64_t t61 = 1341LLU;

    t61 = (((x245>x246)==x247)&x248);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	int64_t x252 = INT64_MIN;
	volatile int64_t t62 = -3LL;

    t62 = (((x249>x250)==x251)&x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -2354364864LL;
	uint8_t x254 = 11U;
	static volatile int8_t x255 = INT8_MIN;
	static int64_t t63 = -2LL;

    t63 = (((x253>x254)==x255)&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MIN;
	volatile int16_t x259 = INT16_MIN;

    t64 = (((x257>x258)==x259)&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 12849U;
	static int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	static int32_t t65 = -5673967;

    t65 = (((x261>x262)==x263)&x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 2618901310674787LLU;
	static uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;
	volatile int32_t x268 = INT32_MAX;
	int32_t t66 = -9286;

    t66 = (((x265>x266)==x267)&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = INT32_MAX;
	static int8_t x270 = 0;
	int32_t x272 = -4098843;
	int32_t t67 = -783369515;

    t67 = (((x269>x270)==x271)&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	uint8_t x274 = 77U;
	volatile int32_t x275 = -1;
	int64_t x276 = 92807569353025878LL;

    t68 = (((x273>x274)==x275)&x276);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x277 = 0;
	uint32_t x278 = UINT32_MAX;
	static int32_t x279 = 497;
	uint8_t x280 = 1U;
	volatile int32_t t69 = 234363;

    t69 = (((x277>x278)==x279)&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = INT64_MIN;
	volatile uint64_t x282 = UINT64_MAX;
	static int64_t x283 = 100727938495LL;
	volatile uint8_t x284 = 0U;
	volatile int32_t t70 = -1;

    t70 = (((x281>x282)==x283)&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = 48186258867LL;
	int64_t x287 = 10414123319150485LL;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t71 = 988620992413LLU;

    t71 = (((x285>x286)==x287)&x288);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MIN;
	int16_t x290 = 31;
	static uint16_t x291 = 66U;
	int16_t x292 = -1979;
	volatile int32_t t72 = 21975;

    t72 = (((x289>x290)==x291)&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = INT8_MIN;
	int64_t x295 = INT64_MIN;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 49;

    t73 = (((x293>x294)==x295)&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MAX;
	uint64_t x298 = 6865337340LLU;
	int8_t x299 = INT8_MIN;
	static int32_t x300 = -1;
	int32_t t74 = -15;

    t74 = (((x297>x298)==x299)&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x301 = 6U;
	static int16_t x302 = 1;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = UINT8_MAX;
	int32_t t75 = -362163436;

    t75 = (((x301>x302)==x303)&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -1LL;
	volatile int32_t x307 = INT32_MIN;
	uint16_t x308 = 7551U;
	volatile int32_t t76 = -995161617;

    t76 = (((x305>x306)==x307)&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x310 = INT64_MAX;
	static int32_t x311 = 463783801;
	uint64_t x312 = 180377LLU;
	uint64_t t77 = 2964640636970LLU;

    t77 = (((x309>x310)==x311)&x312);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	uint32_t x314 = 63814U;
	uint32_t t78 = 56752U;

    t78 = (((x313>x314)==x315)&x316);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = 1867142;
	int8_t x318 = INT8_MIN;
	static int32_t x319 = -1;
	volatile uint8_t x320 = 0U;
	static volatile int32_t t79 = 2668237;

    t79 = (((x317>x318)==x319)&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MIN;
	static int16_t x322 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	static volatile int32_t x324 = -1;
	int32_t t80 = 85;

    t80 = (((x321>x322)==x323)&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = 768690206LL;
	volatile uint64_t x326 = UINT64_MAX;
	uint32_t x327 = 3U;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -2250209589258LL;

    t81 = (((x325>x326)==x327)&x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -1;
	int64_t x330 = INT64_MAX;
	uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t82 = 241453798474LLU;

    t82 = (((x329>x330)==x331)&x332);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x333 = INT32_MAX;
	int64_t x334 = INT64_MAX;
	uint16_t x335 = 0U;
	int32_t x336 = -1;
	int32_t t83 = -748863;

    t83 = (((x333>x334)==x335)&x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = -32;
	uint32_t x339 = 5041U;
	volatile int32_t x340 = INT32_MAX;
	int32_t t84 = 0;

    t84 = (((x337>x338)==x339)&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = INT8_MIN;
	int8_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t85 = 1;

    t85 = (((x341>x342)==x343)&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x346 = -13;
	int32_t t86 = -1776584;

    t86 = (((x345>x346)==x347)&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x351 = -1LL;
	static int8_t x352 = INT8_MIN;

    t87 = (((x349>x350)==x351)&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x354 = UINT64_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	static uint64_t t88 = 169573LLU;

    t88 = (((x353>x354)==x355)&x356);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x358 = 365800047U;
	static int64_t x359 = 1999137560785LL;
	static int16_t x360 = 94;
	volatile int32_t t89 = -75528;

    t89 = (((x357>x358)==x359)&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x361 = 4748772531663LLU;
	volatile uint32_t x362 = 15423U;
	volatile int16_t x363 = 54;
	static int8_t x364 = 31;
	int32_t t90 = 0;

    t90 = (((x361>x362)==x363)&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = 78LL;
	volatile int32_t x366 = INT32_MAX;
	uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = -1LL;

    t91 = (((x365>x366)==x367)&x368);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MAX;
	int64_t x370 = -13816074867LL;
	int8_t x371 = -3;
	uint16_t x372 = 72U;
	volatile int32_t t92 = 3121411;

    t92 = (((x369>x370)==x371)&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 11798808U;
	uint32_t x374 = 7430715U;
	static int32_t x375 = -550360268;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 818;

    t93 = (((x373>x374)==x375)&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MIN;
	static uint8_t x379 = UINT8_MAX;
	volatile uint32_t x380 = 0U;
	uint32_t t94 = 27223352U;

    t94 = (((x377>x378)==x379)&x380);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = UINT32_MAX;
	static int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MIN;

    t95 = (((x381>x382)==x383)&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 21U;
	int16_t x386 = INT16_MIN;
	volatile int16_t x388 = 27;

    t96 = (((x385>x386)==x387)&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 11U;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = 3U;
	volatile int32_t t97 = -115557;

    t97 = (((x389>x390)==x391)&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = 1826U;
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = -18;
	volatile int32_t t98 = -6;

    t98 = (((x393>x394)==x395)&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 1022497881062LLU;
	static uint16_t x398 = 7U;
	volatile int16_t x399 = INT16_MAX;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = 2305457527909960LL;

    t99 = (((x397>x398)==x399)&x400);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	static uint8_t x402 = UINT8_MAX;
	uint64_t x403 = UINT64_MAX;
	static volatile int64_t t100 = 25794LL;

    t100 = (((x401>x402)==x403)&x404);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = INT16_MIN;
	int32_t x406 = -6936995;
	volatile uint64_t x407 = 5632847865530294LLU;
	static uint64_t t101 = 85502799619LLU;

    t101 = (((x405>x406)==x407)&x408);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	int64_t x411 = INT64_MIN;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t102 = 5674U;

    t102 = (((x409>x410)==x411)&x412);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	static int16_t x414 = INT16_MIN;
	uint64_t x415 = 245601015761LLU;
	int8_t x416 = INT8_MIN;
	volatile int32_t t103 = -2525356;

    t103 = (((x413>x414)==x415)&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 30718644429479886LLU;
	static uint32_t x418 = 63U;
	uint8_t x419 = 0U;
	int32_t x420 = 1342;
	int32_t t104 = 3570885;

    t104 = (((x417>x418)==x419)&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x423 = -194598;
	int8_t x424 = -20;
	int32_t t105 = 1463508;

    t105 = (((x421>x422)==x423)&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	int32_t x426 = 166596;
	int32_t x428 = -126;
	int32_t t106 = 62874;

    t106 = (((x425>x426)==x427)&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 904580375U;
	int32_t x430 = INT32_MAX;
	uint32_t x431 = 3692731U;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -16;

    t107 = (((x429>x430)==x431)&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x434 = INT32_MAX;
	int16_t x435 = -1;
	int32_t x436 = INT32_MIN;
	int32_t t108 = 17;

    t108 = (((x433>x434)==x435)&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile int16_t x438 = INT16_MIN;
	volatile int64_t x439 = INT64_MIN;
	uint16_t x440 = 965U;
	static volatile int32_t t109 = -746;

    t109 = (((x437>x438)==x439)&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x443 = INT32_MIN;
	volatile int64_t t110 = -55LL;

    t110 = (((x441>x442)==x443)&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	static int64_t x446 = INT64_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t111 = -1224291;

    t111 = (((x445>x446)==x447)&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 31U;
	static uint32_t x450 = 9U;
	int32_t x451 = INT32_MAX;
	uint32_t t112 = 307U;

    t112 = (((x449>x450)==x451)&x452);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x454 = INT64_MAX;
	uint16_t x455 = UINT16_MAX;
	uint8_t x456 = 66U;

    t113 = (((x453>x454)==x455)&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = 6U;
	int8_t x458 = INT8_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MAX;
	volatile int32_t t114 = 44007;

    t114 = (((x457>x458)==x459)&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 4427413533164051LLU;
	static uint32_t x462 = 370U;
	int64_t x463 = 1034070LL;
	volatile int32_t t115 = -83;

    t115 = (((x461>x462)==x463)&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = 0;
	volatile int32_t x466 = -59;
	int32_t x467 = INT32_MIN;
	int64_t x468 = INT64_MIN;
	volatile int64_t t116 = -32183877769123LL;

    t116 = (((x465>x466)==x467)&x468);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	int32_t t117 = -2026;

    t117 = (((x469>x470)==x471)&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 31LLU;
	uint64_t x475 = 152100929680479LLU;
	int64_t x476 = INT64_MAX;
	volatile int64_t t118 = 52LL;

    t118 = (((x473>x474)==x475)&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = -1;
	int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MIN;
	volatile int32_t t119 = -4857810;

    t119 = (((x477>x478)==x479)&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	volatile uint8_t x483 = 51U;
	volatile int64_t x484 = INT64_MAX;

    t120 = (((x481>x482)==x483)&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	int64_t x486 = INT64_MIN;
	volatile int32_t t121 = 92440;

    t121 = (((x485>x486)==x487)&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -1;
	static volatile int64_t x491 = INT64_MAX;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = 15;

    t122 = (((x489>x490)==x491)&x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x493 = INT32_MIN;
	static uint32_t x494 = UINT32_MAX;
	uint32_t x495 = 54166296U;
	int32_t x496 = INT32_MIN;
	static volatile int32_t t123 = -1;

    t123 = (((x493>x494)==x495)&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x497 = INT16_MAX;
	volatile uint16_t x499 = 7U;
	uint32_t x500 = UINT32_MAX;

    t124 = (((x497>x498)==x499)&x500);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = 3;
	static int8_t x502 = INT8_MAX;
	int32_t x503 = -1126;
	int64_t t125 = -3489135589810102740LL;

    t125 = (((x501>x502)==x503)&x504);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MAX;
	static volatile int8_t x508 = INT8_MAX;
	volatile int32_t t126 = -475;

    t126 = (((x505>x506)==x507)&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	int64_t x510 = -1LL;
	static int16_t x511 = 2;
	static int8_t x512 = INT8_MIN;
	volatile int32_t t127 = 6173;

    t127 = (((x509>x510)==x511)&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = -20LL;
	uint64_t x514 = UINT64_MAX;
	volatile uint16_t x516 = 0U;
	int32_t t128 = -38;

    t128 = (((x513>x514)==x515)&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	uint8_t x518 = 0U;
	int16_t x519 = INT16_MAX;
	uint8_t x520 = UINT8_MAX;
	int32_t t129 = -433058;

    t129 = (((x517>x518)==x519)&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = UINT16_MAX;
	int64_t x522 = INT64_MAX;
	int32_t x523 = -2422670;
	static volatile uint32_t x524 = 430344U;
	uint32_t t130 = 1058188064U;

    t130 = (((x521>x522)==x523)&x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 1742U;
	int32_t x527 = INT32_MIN;
	volatile uint16_t x528 = 357U;
	volatile int32_t t131 = -96286;

    t131 = (((x525>x526)==x527)&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = -1;
	int32_t x530 = INT32_MIN;
	volatile int16_t x531 = INT16_MIN;
	int32_t x532 = 1;
	volatile int32_t t132 = 367287926;

    t132 = (((x529>x530)==x531)&x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MAX;
	int8_t x536 = 29;
	volatile int32_t t133 = -7;

    t133 = (((x533>x534)==x535)&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	volatile uint64_t x538 = 469688340432044LLU;
	static int16_t x539 = 1;
	uint32_t t134 = 94774U;

    t134 = (((x537>x538)==x539)&x540);

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 1;
	int64_t x542 = -69025390233165945LL;
	static volatile uint64_t x543 = UINT64_MAX;
	uint32_t t135 = 9609U;

    t135 = (((x541>x542)==x543)&x544);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 1U;
	int8_t x546 = 35;
	static uint8_t x547 = UINT8_MAX;
	uint64_t x548 = 1192LLU;
	uint64_t t136 = 2430984790LLU;

    t136 = (((x545>x546)==x547)&x548);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static int8_t x550 = 0;
	uint32_t x551 = 31160U;
	int32_t x552 = INT32_MAX;
	int32_t t137 = 27;

    t137 = (((x549>x550)==x551)&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 3;
	int32_t x555 = -1;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t138 = -3741;

    t138 = (((x553>x554)==x555)&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	static volatile uint64_t x558 = 61665883175505LLU;
	static int64_t x559 = -1LL;
	volatile int32_t x560 = INT32_MIN;
	int32_t t139 = 2273903;

    t139 = (((x557>x558)==x559)&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x563 = -207;
	static volatile int8_t x564 = INT8_MIN;

    t140 = (((x561>x562)==x563)&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MAX;
	int64_t x566 = INT64_MIN;
	uint16_t x567 = UINT16_MAX;
	static int32_t x568 = 35057193;

    t141 = (((x565>x566)==x567)&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -977435418830370LL;
	int64_t x570 = INT64_MIN;
	int64_t x571 = 18873824140LL;
	uint64_t x572 = 269806305033244841LLU;
	static uint64_t t142 = 201509455LLU;

    t142 = (((x569>x570)==x571)&x572);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = 344;
	static uint64_t x575 = 11324306368380LLU;
	static int64_t x576 = 999112283881389LL;
	int64_t t143 = 1435196LL;

    t143 = (((x573>x574)==x575)&x576);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = 4U;
	int64_t x579 = INT64_MIN;
	static int64_t x580 = INT64_MIN;
	static volatile int64_t t144 = 485238LL;

    t144 = (((x577>x578)==x579)&x580);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = -432753853152583LL;
	volatile int32_t x583 = INT32_MIN;
	int16_t x584 = -7385;
	int32_t t145 = 373116977;

    t145 = (((x581>x582)==x583)&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 0;
	static volatile int32_t x587 = -24;
	int32_t x588 = INT32_MIN;
	static volatile int32_t t146 = -352;

    t146 = (((x585>x586)==x587)&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = -1;
	int64_t x591 = INT64_MAX;
	volatile uint64_t x592 = 232112056481013668LLU;
	volatile uint64_t t147 = 1967909LLU;

    t147 = (((x589>x590)==x591)&x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = -1LL;
	int32_t x596 = INT32_MIN;
	int32_t t148 = -458396;

    t148 = (((x593>x594)==x595)&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 3697;
	static volatile uint16_t x599 = UINT16_MAX;
	uint16_t x600 = 13U;
	int32_t t149 = -499273493;

    t149 = (((x597>x598)==x599)&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = INT8_MIN;
	int32_t x602 = -4073;
	int16_t x603 = INT16_MAX;
	static int32_t x604 = INT32_MIN;
	volatile int32_t t150 = -14;

    t150 = (((x601>x602)==x603)&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = UINT16_MAX;
	static uint64_t x607 = 1256457LLU;
	int8_t x608 = 2;
	static volatile int32_t t151 = -65299151;

    t151 = (((x605>x606)==x607)&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	uint64_t x610 = UINT64_MAX;
	uint16_t x611 = UINT16_MAX;
	int32_t x612 = INT32_MIN;
	int32_t t152 = 10524;

    t152 = (((x609>x610)==x611)&x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 4784LL;
	uint32_t x614 = 5883U;
	int64_t x615 = INT64_MIN;
	int32_t t153 = 335382835;

    t153 = (((x613>x614)==x615)&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = UINT64_MAX;
	int16_t x619 = INT16_MIN;
	int16_t x620 = INT16_MIN;
	static int32_t t154 = -12;

    t154 = (((x617>x618)==x619)&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 55;
	uint8_t x622 = 58U;
	volatile int32_t x623 = INT32_MIN;
	static volatile int32_t x624 = -15;

    t155 = (((x621>x622)==x623)&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	int64_t x626 = INT64_MAX;
	volatile int64_t x627 = 74225660638495LL;
	int64_t x628 = INT64_MAX;
	volatile int64_t t156 = -17979957760054700LL;

    t156 = (((x625>x626)==x627)&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 746007U;
	int8_t x630 = INT8_MIN;
	int8_t x631 = 4;
	uint16_t x632 = 2648U;
	volatile int32_t t157 = -3131426;

    t157 = (((x629>x630)==x631)&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x633 = 52026203;
	int16_t x634 = INT16_MIN;
	int8_t x635 = -42;
	int32_t x636 = INT32_MIN;
	static int32_t t158 = 101;

    t158 = (((x633>x634)==x635)&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 8038U;
	static int64_t x640 = INT64_MAX;
	int64_t t159 = 1LL;

    t159 = (((x637>x638)==x639)&x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = 17084707462954LL;
	int8_t x642 = INT8_MAX;
	volatile uint8_t x644 = 23U;

    t160 = (((x641>x642)==x643)&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x646 = 3U;
	uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MIN;

    t161 = (((x645>x646)==x647)&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	uint64_t x650 = UINT64_MAX;
	static int32_t x651 = INT32_MAX;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = -133195004;

    t162 = (((x649>x650)==x651)&x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x655 = INT16_MAX;
	static int8_t x656 = INT8_MIN;
	static int32_t t163 = 1963;

    t163 = (((x653>x654)==x655)&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	static int64_t x658 = INT64_MIN;
	volatile uint64_t x659 = UINT64_MAX;
	volatile int64_t x660 = 666209LL;
	int64_t t164 = -1430106732LL;

    t164 = (((x657>x658)==x659)&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -1;
	static int64_t x663 = 0LL;
	int8_t x664 = -1;
	static int32_t t165 = 829277;

    t165 = (((x661>x662)==x663)&x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = UINT64_MAX;
	volatile int8_t x667 = INT8_MIN;
	int8_t x668 = -57;
	volatile int32_t t166 = 211953544;

    t166 = (((x665>x666)==x667)&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = -2;
	int16_t x670 = INT16_MAX;
	int32_t x671 = -175;
	uint32_t x672 = 3778990U;
	volatile uint32_t t167 = 18021766U;

    t167 = (((x669>x670)==x671)&x672);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 2307U;
	static uint32_t x675 = UINT32_MAX;

    t168 = (((x673>x674)==x675)&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	int64_t x678 = -1LL;
	int64_t x680 = INT64_MAX;
	int64_t t169 = -1838453LL;

    t169 = (((x677>x678)==x679)&x680);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = INT64_MIN;
	volatile int64_t x683 = INT64_MIN;

    t170 = (((x681>x682)==x683)&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 1276422U;
	uint32_t x686 = 14U;
	static int32_t x687 = INT32_MAX;
	int32_t x688 = INT32_MIN;
	int32_t t171 = 3161;

    t171 = (((x685>x686)==x687)&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = UINT8_MAX;
	int8_t x690 = -1;
	uint32_t x691 = 630305165U;
	static uint8_t x692 = 9U;
	volatile int32_t t172 = -30130663;

    t172 = (((x689>x690)==x691)&x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -13;
	int8_t x696 = -3;
	int32_t t173 = -1;

    t173 = (((x693>x694)==x695)&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = -1;
	int64_t x698 = 7455899493581LL;
	static int16_t x699 = INT16_MIN;
	int32_t t174 = 0;

    t174 = (((x697>x698)==x699)&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = -113008303;
	int16_t x702 = INT16_MIN;
	int32_t x703 = INT32_MAX;
	int64_t x704 = INT64_MIN;
	volatile int64_t t175 = 287180LL;

    t175 = (((x701>x702)==x703)&x704);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	uint16_t x707 = 7526U;
	int32_t x708 = -13;
	int32_t t176 = 0;

    t176 = (((x705>x706)==x707)&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x710 = UINT8_MAX;
	volatile int32_t t177 = 5418256;

    t177 = (((x709>x710)==x711)&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x713 = UINT16_MAX;
	uint8_t x714 = 12U;
	static int16_t x716 = INT16_MAX;
	volatile int32_t t178 = 16140;

    t178 = (((x713>x714)==x715)&x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 1U;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = -170662;

    t179 = (((x717>x718)==x719)&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	static int16_t x722 = -15;
	static volatile int64_t x723 = 1549161584LL;
	static uint64_t x724 = 62646411746472LLU;

    t180 = (((x721>x722)==x723)&x724);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -1;
	uint8_t x726 = UINT8_MAX;
	static volatile int64_t x727 = 1LL;
	int32_t t181 = 1947;

    t181 = (((x725>x726)==x727)&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x732 = INT32_MAX;
	static volatile int32_t t182 = 14123;

    t182 = (((x729>x730)==x731)&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x734 = -1;
	int64_t x735 = 251LL;
	int8_t x736 = 1;
	volatile int32_t t183 = 3532531;

    t183 = (((x733>x734)==x735)&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x738 = -48;
	int8_t x739 = -1;
	volatile int32_t t184 = 129318;

    t184 = (((x737>x738)==x739)&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = -1LL;
	int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MIN;
	int64_t t185 = 7632448LL;

    t185 = (((x741>x742)==x743)&x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 8921;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 4U;

    t186 = (((x745>x746)==x747)&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = INT32_MIN;
	static int32_t x750 = 877;
	uint8_t x751 = 0U;
	int16_t x752 = 26;

    t187 = (((x749>x750)==x751)&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = -1LL;
	static uint16_t x754 = 68U;
	int32_t x755 = -1;

    t188 = (((x753>x754)==x755)&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	static int8_t x758 = -1;
	int64_t x759 = INT64_MAX;
	int64_t x760 = INT64_MIN;
	static int64_t t189 = -56LL;

    t189 = (((x757>x758)==x759)&x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = 556285057LL;
	int32_t x762 = INT32_MAX;
	int8_t x764 = INT8_MIN;
	int32_t t190 = 22529659;

    t190 = (((x761>x762)==x763)&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 14U;
	uint32_t x766 = 42905990U;
	int64_t x767 = INT64_MIN;
	uint16_t x768 = 5853U;
	int32_t t191 = -917;

    t191 = (((x765>x766)==x767)&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x770 = 900U;
	volatile int32_t x771 = -50982892;
	static int8_t x772 = INT8_MAX;

    t192 = (((x769>x770)==x771)&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = -1;
	volatile int32_t x774 = 49643078;
	volatile uint64_t x775 = 395185751LLU;
	int16_t x776 = 2;
	static volatile int32_t t193 = 26;

    t193 = (((x773>x774)==x775)&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	int32_t x778 = -1;
	uint32_t x779 = UINT32_MAX;
	static int32_t t194 = 17519976;

    t194 = (((x777>x778)==x779)&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x782 = INT32_MIN;
	static volatile uint16_t x783 = 1382U;
	int32_t x784 = -1;

    t195 = (((x781>x782)==x783)&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x785 = -1624;
	int64_t x786 = 9844LL;
	uint32_t x787 = 3U;
	int16_t x788 = INT16_MAX;
	int32_t t196 = 24506246;

    t196 = (((x785>x786)==x787)&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 4U;
	int16_t x791 = -116;
	volatile int32_t t197 = 70706;

    t197 = (((x789>x790)==x791)&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = INT32_MAX;
	int32_t x794 = INT32_MAX;
	static int16_t x795 = INT16_MIN;
	volatile int64_t x796 = INT64_MAX;
	int64_t t198 = 678419233267676LL;

    t198 = (((x793>x794)==x795)&x796);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	volatile int8_t x798 = 0;
	int64_t x799 = 227299318389393LL;
	static volatile int16_t x800 = INT16_MAX;
	int32_t t199 = -4974972;

    t199 = (((x797>x798)==x799)&x800);

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

