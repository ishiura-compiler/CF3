
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

static int32_t x1 = -1;
int64_t x18 = -16LL;
int8_t x19 = INT8_MIN;
int16_t x24 = 110;
int16_t x25 = INT16_MAX;
int32_t x26 = INT32_MIN;
uint64_t x27 = 68029998676941LLU;
static int32_t x33 = -17450449;
static int8_t x36 = INT8_MIN;
uint8_t x38 = 3U;
static uint8_t x40 = 30U;
static volatile int32_t x41 = INT32_MIN;
int64_t x48 = INT64_MIN;
volatile uint16_t x51 = 0U;
uint8_t x56 = UINT8_MAX;
int16_t x57 = -2;
int32_t x60 = INT32_MIN;
static volatile int32_t t14 = 1;
int64_t x64 = INT64_MIN;
int16_t x70 = INT16_MIN;
int64_t x85 = INT64_MIN;
volatile uint32_t x90 = 155245708U;
int32_t t22 = 471776319;
int16_t x108 = INT16_MIN;
static int32_t t26 = -145183040;
int8_t x112 = 16;
int16_t x116 = -12;
uint64_t x120 = UINT64_MAX;
uint32_t x122 = UINT32_MAX;
volatile int8_t x127 = INT8_MAX;
volatile int16_t x130 = INT16_MAX;
int8_t x131 = -1;
volatile int32_t t32 = 7252022;
int16_t x134 = -5069;
int32_t x136 = INT32_MIN;
volatile int32_t t33 = -3630106;
uint64_t x137 = UINT64_MAX;
uint16_t x138 = 4498U;
uint32_t x141 = UINT32_MAX;
int16_t x144 = -1;
int32_t x146 = 62652344;
int32_t x157 = -1;
uint16_t x161 = 865U;
static volatile int32_t t41 = 104385176;
volatile int32_t x185 = -1;
volatile int16_t x187 = -1;
int32_t t46 = 164;
int16_t x191 = 22;
int32_t t48 = -151416784;
volatile int32_t x200 = -1;
int32_t t49 = 2094992;
uint8_t x201 = 50U;
int8_t x207 = INT8_MIN;
volatile int32_t t52 = -4;
uint8_t x214 = 13U;
int32_t x220 = INT32_MIN;
int16_t x229 = INT16_MIN;
int64_t x235 = -270LL;
static int8_t x241 = 3;
int16_t x262 = INT16_MIN;
static int32_t t65 = -638673;
volatile int64_t x266 = -66186938310865627LL;
uint32_t x267 = UINT32_MAX;
int32_t x270 = INT32_MIN;
static volatile int32_t x272 = INT32_MIN;
int8_t x273 = INT8_MIN;
uint32_t x274 = UINT32_MAX;
static int32_t t68 = 984;
uint64_t x282 = UINT64_MAX;
uint32_t x290 = 973298U;
volatile uint16_t x298 = UINT16_MAX;
volatile int32_t x299 = INT32_MIN;
int16_t x304 = INT16_MIN;
int32_t t75 = 1;
volatile int64_t x305 = INT64_MAX;
int32_t t76 = -1795;
volatile int64_t x310 = -127719936025375433LL;
int8_t x312 = -1;
int16_t x313 = INT16_MIN;
uint8_t x321 = UINT8_MAX;
int64_t x323 = 4700477050428751LL;
uint8_t x333 = UINT8_MAX;
static int16_t x337 = -1;
static volatile int64_t x338 = -1LL;
int64_t x340 = INT64_MAX;
volatile int32_t t84 = 180;
uint16_t x342 = UINT16_MAX;
int32_t t86 = -98503;
int16_t x351 = INT16_MIN;
int32_t x354 = INT32_MIN;
int16_t x355 = -1;
int8_t x357 = -12;
static volatile int32_t t89 = 1019603;
int16_t x367 = INT16_MAX;
uint8_t x368 = 14U;
volatile uint16_t x370 = UINT16_MAX;
static int32_t t92 = 472932;
volatile int32_t t94 = 62701541;
volatile uint32_t x381 = UINT32_MAX;
uint16_t x382 = UINT16_MAX;
uint32_t x384 = UINT32_MAX;
static int8_t x385 = INT8_MIN;
uint16_t x393 = 34U;
static volatile int32_t x397 = -1;
static volatile int32_t t103 = 406956175;
volatile int32_t x421 = INT32_MIN;
volatile uint32_t x426 = 343894U;
uint32_t x429 = UINT32_MAX;
volatile int32_t t107 = 5292;
static uint8_t x433 = 0U;
volatile int32_t t108 = 0;
int8_t x451 = INT8_MIN;
int32_t x453 = -1;
static int8_t x454 = INT8_MIN;
int64_t x456 = INT64_MIN;
volatile int32_t t113 = -3;
volatile uint8_t x460 = 5U;
int32_t t114 = -516196759;
static int64_t x465 = INT64_MIN;
static volatile uint64_t x468 = 3292756751LLU;
static int8_t x469 = -21;
int8_t x478 = INT8_MIN;
volatile uint32_t x479 = UINT32_MAX;
int8_t x483 = INT8_MIN;
int32_t t120 = -1;
uint8_t x485 = 0U;
uint64_t x489 = 449670927708956237LLU;
int32_t t122 = -1;
int16_t x504 = 1;
int32_t x506 = -6;
volatile int8_t x507 = INT8_MAX;
int64_t x508 = 139461913012786LL;
int8_t x511 = 1;
static int32_t x512 = INT32_MAX;
static int16_t x514 = INT16_MIN;
int16_t x520 = INT16_MIN;
int32_t x525 = -1;
int8_t x537 = INT8_MAX;
uint16_t x545 = 240U;
int8_t x547 = INT8_MAX;
uint32_t x551 = 7138U;
uint8_t x552 = 28U;
int32_t x553 = 175854;
int8_t x554 = -13;
int8_t x561 = -1;
uint64_t x562 = 8549851779342LLU;
uint32_t x571 = UINT32_MAX;
int32_t x572 = INT32_MAX;
volatile int32_t t145 = -2854;
int32_t x586 = 705;
int16_t x588 = 0;
static volatile int32_t x597 = INT32_MIN;
static int64_t x601 = 1000909956183LL;
static volatile int32_t t151 = -8;
uint16_t x612 = 1730U;
int32_t x613 = INT32_MIN;
volatile int32_t t153 = -2408926;
int64_t x628 = 69740347LL;
volatile uint16_t x633 = 5U;
int64_t x638 = -4130LL;
static int32_t x640 = INT32_MAX;
int64_t x641 = -352425566LL;
volatile int32_t t160 = 2;
int32_t x646 = INT32_MAX;
int32_t x649 = 2729;
int16_t x659 = INT16_MIN;
int32_t t164 = 1666782;
volatile int32_t t165 = 0;
static volatile int32_t t166 = -153;
volatile int32_t t168 = 102537;
static volatile int32_t x685 = INT32_MIN;
static int32_t x691 = -1;
static int8_t x694 = INT8_MIN;
int16_t x695 = 1678;
int16_t x700 = INT16_MIN;
int8_t x717 = INT8_MIN;
int32_t x719 = INT32_MIN;
uint8_t x721 = UINT8_MAX;
volatile int32_t t181 = 32976862;
int64_t x729 = INT64_MIN;
int8_t x732 = INT8_MIN;
uint64_t x733 = UINT64_MAX;
static volatile uint8_t x736 = 102U;
volatile uint64_t x750 = 188531517989802LLU;
int16_t x754 = -1;
int16_t x758 = 188;
uint64_t x759 = 201922LLU;
int64_t x764 = 14070LL;
int32_t x766 = INT32_MIN;
volatile int32_t x780 = INT32_MAX;
int32_t t197 = -99870;
int8_t x797 = INT8_MIN;


void f0(void) {
    	volatile int64_t x2 = INT64_MIN;
	int64_t x3 = -5258602123213491LL;
	volatile int8_t x4 = 24;
	volatile int32_t t0 = 780476;

    t0 = ((x1>(x2&x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static int64_t x6 = -1LL;
	int16_t x7 = INT16_MAX;
	static int8_t x8 = -1;
	int32_t t1 = -596859701;

    t1 = ((x5>(x6&x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x11 = 1800642U;
	uint32_t x12 = 125274U;
	static int32_t t2 = -336;

    t2 = ((x9>(x10&x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int64_t x16 = -1LL;
	static volatile int32_t t3 = 1;

    t3 = ((x13>(x14&x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	static int32_t t4 = -1;

    t4 = ((x17>(x18&x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 14;
	int32_t x22 = 9309;
	int32_t x23 = -717336;
	int32_t t5 = -7650;

    t5 = ((x21>(x22&x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x28 = INT64_MAX;
	volatile int32_t t6 = -411846;

    t6 = ((x25>(x26&x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 1913314691080797760LLU;
	static uint8_t x30 = UINT8_MAX;
	uint8_t x31 = 30U;
	int32_t x32 = 153;
	volatile int32_t t7 = 1908433;

    t7 = ((x29>(x30&x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = 0;
	int32_t x35 = -104816;
	int32_t t8 = -138620;

    t8 = ((x33>(x34&x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -3;
	static volatile int32_t x39 = INT32_MIN;
	volatile int32_t t9 = -2316076;

    t9 = ((x37>(x38&x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = INT64_MAX;
	int8_t x43 = -1;
	volatile int32_t x44 = 12943033;
	volatile int32_t t10 = -88;

    t10 = ((x41>(x42&x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	int64_t x46 = -11829050940780345LL;
	int16_t x47 = -1;
	volatile int32_t t11 = 29;

    t11 = ((x45>(x46&x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -3187;
	volatile uint32_t x50 = 62U;
	static int32_t x52 = INT32_MAX;
	int32_t t12 = -1832132;

    t12 = ((x49>(x50&x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = 4325;
	static volatile uint64_t x54 = 570794156027759183LLU;
	volatile int64_t x55 = INT64_MIN;
	static int32_t t13 = -1;

    t13 = ((x53>(x54&x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x58 = 7751LLU;
	int32_t x59 = -1;

    t14 = ((x57>(x58&x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 22414U;
	int64_t x62 = INT64_MAX;
	int32_t x63 = 218510357;
	volatile int32_t t15 = 5526876;

    t15 = ((x61>(x62&x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 2100U;
	uint32_t x67 = UINT32_MAX;
	static int16_t x68 = INT16_MAX;
	static int32_t t16 = -1775;

    t16 = ((x65>(x66&x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 181745944099408LL;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 19326U;
	static int32_t t17 = -167020508;

    t17 = ((x69>(x70&x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MAX;
	int8_t x74 = -12;
	static int16_t x75 = INT16_MAX;
	uint8_t x76 = 11U;
	volatile int32_t t18 = 14334105;

    t18 = ((x73>(x74&x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = -1;
	int32_t x79 = INT32_MIN;
	int16_t x80 = -1;
	int32_t t19 = 0;

    t19 = ((x77>(x78&x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 3;
	int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int32_t x84 = 727676165;
	volatile int32_t t20 = -3;

    t20 = ((x81>(x82&x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	static volatile int32_t x88 = INT32_MIN;
	int32_t t21 = -265302323;

    t21 = ((x85>(x86&x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 3U;
	int8_t x91 = -1;
	int32_t x92 = INT32_MAX;

    t22 = ((x89>(x90&x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = 490;
	static int32_t x94 = 449;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 4119027;

    t23 = ((x93>(x94&x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 0U;
	static int8_t x98 = INT8_MIN;
	static volatile int8_t x99 = INT8_MAX;
	uint32_t x100 = 0U;
	volatile int32_t t24 = 113389;

    t24 = ((x97>(x98&x99))==x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	static int32_t x102 = -1;
	int64_t x103 = -1LL;
	int32_t x104 = -1;
	int32_t t25 = 777702005;

    t25 = ((x101>(x102&x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 0U;

    t26 = ((x105>(x106&x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int16_t x110 = 1;
	int8_t x111 = INT8_MAX;
	volatile int32_t t27 = -156381;

    t27 = ((x109>(x110&x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	int8_t x114 = 10;
	int8_t x115 = -2;
	volatile int32_t t28 = -1217093;

    t28 = ((x113>(x114&x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 1U;
	volatile int64_t x118 = INT64_MAX;
	static uint8_t x119 = 7U;
	volatile int32_t t29 = 49865116;

    t29 = ((x117>(x118&x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = 221166395LL;
	static int8_t x123 = INT8_MAX;
	uint32_t x124 = 3U;
	int32_t t30 = -410119792;

    t30 = ((x121>(x122&x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 91199281901840585LLU;
	int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 466;

    t31 = ((x125>(x126&x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MAX;
	uint8_t x132 = 1U;

    t32 = ((x129>(x130&x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	static volatile uint32_t x135 = 8923U;

    t33 = ((x133>(x134&x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x139 = INT32_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	static int32_t t34 = 19;

    t34 = ((x137>(x138&x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = 7772623373128LL;
	volatile uint64_t x143 = 170600158986LLU;
	int32_t t35 = -56620152;

    t35 = ((x141>(x142&x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	volatile int64_t x147 = INT64_MIN;
	volatile int8_t x148 = 1;
	volatile int32_t t36 = 12;

    t36 = ((x145>(x146&x147))==x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = INT64_MIN;
	static volatile uint64_t x150 = UINT64_MAX;
	uint16_t x151 = 13U;
	int64_t x152 = -1LL;
	static volatile int32_t t37 = 922236866;

    t37 = ((x149>(x150&x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = -24;
	int64_t x155 = -1LL;
	volatile int32_t x156 = INT32_MIN;
	int32_t t38 = -1;

    t38 = ((x153>(x154&x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = INT64_MIN;
	int32_t x159 = 2172359;
	int32_t x160 = -260153956;
	volatile int32_t t39 = 33074;

    t39 = ((x157>(x158&x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	static uint16_t x164 = 900U;
	int32_t t40 = 10124103;

    t40 = ((x161>(x162&x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x166 = -1LL;
	uint32_t x167 = 211105871U;
	uint16_t x168 = 36U;

    t41 = ((x165>(x166&x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = 66855220273981LLU;
	int16_t x170 = INT16_MIN;
	static uint8_t x171 = 52U;
	uint32_t x172 = 2051U;
	int32_t t42 = -32907502;

    t42 = ((x169>(x170&x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = UINT8_MAX;
	int32_t x176 = INT32_MAX;
	volatile int32_t t43 = 1001054672;

    t43 = ((x173>(x174&x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x177 = UINT64_MAX;
	static volatile int32_t x178 = -1;
	int32_t x179 = -114;
	uint64_t x180 = 231LLU;
	volatile int32_t t44 = -59;

    t44 = ((x177>(x178&x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 63U;
	int8_t x182 = 5;
	int16_t x183 = -1;
	int16_t x184 = INT16_MAX;
	static int32_t t45 = -32627;

    t45 = ((x181>(x182&x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x186 = 9U;
	int64_t x188 = -1LL;

    t46 = ((x185>(x186&x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 1017883257;
	volatile int32_t x190 = 6;
	static volatile int64_t x192 = INT64_MIN;
	int32_t t47 = 517895;

    t47 = ((x189>(x190&x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = 54;
	int16_t x194 = INT16_MAX;
	volatile int8_t x195 = INT8_MIN;
	int16_t x196 = 0;

    t48 = ((x193>(x194&x195))==x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	static int32_t x198 = INT32_MAX;
	int16_t x199 = -590;

    t49 = ((x197>(x198&x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x202 = 1092U;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MAX;
	int32_t t50 = -72917650;

    t50 = ((x201>(x202&x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = 1U;
	static volatile int16_t x206 = INT16_MIN;
	static uint8_t x208 = 0U;
	volatile int32_t t51 = 14520;

    t51 = ((x205>(x206&x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = 1593246686706LLU;
	int64_t x212 = 3552514LL;

    t52 = ((x209>(x210&x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	volatile uint32_t x216 = 101440U;
	volatile int32_t t53 = -11;

    t53 = ((x213>(x214&x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 35U;
	int64_t x218 = -1LL;
	uint8_t x219 = 1U;
	int32_t t54 = -1970;

    t54 = ((x217>(x218&x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = 124085261367LL;
	int16_t x222 = 2;
	uint32_t x223 = 416060471U;
	static uint8_t x224 = UINT8_MAX;
	int32_t t55 = 20;

    t55 = ((x221>(x222&x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	uint16_t x226 = 149U;
	static int8_t x227 = INT8_MAX;
	uint64_t x228 = 12782027259253LLU;
	static volatile int32_t t56 = 13219;

    t56 = ((x225>(x226&x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = INT8_MAX;
	static uint16_t x231 = 2U;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 525011681;

    t57 = ((x229>(x230&x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = 128U;
	uint64_t x234 = 477LLU;
	int16_t x236 = 53;
	volatile int32_t t58 = 1344;

    t58 = ((x233>(x234&x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	static uint16_t x238 = UINT16_MAX;
	static uint64_t x239 = 256869685374LLU;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 62657;

    t59 = ((x237>(x238&x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t60 = 1908136;

    t60 = ((x241>(x242&x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = -1;
	static uint64_t x246 = UINT64_MAX;
	int8_t x247 = 0;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 59605560;

    t61 = ((x245>(x246&x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = 611899;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	int8_t x252 = -1;
	int32_t t62 = 3437401;

    t62 = ((x249>(x250&x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	static volatile int16_t x254 = INT16_MIN;
	uint8_t x255 = 31U;
	uint64_t x256 = UINT64_MAX;
	static volatile int32_t t63 = 0;

    t63 = ((x253>(x254&x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 435U;
	static int16_t x258 = -14819;
	uint32_t x259 = 47993809U;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = 1478453;

    t64 = ((x257>(x258&x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 170;
	int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;

    t65 = ((x261>(x262&x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x265 = 8U;
	int8_t x268 = INT8_MAX;
	volatile int32_t t66 = 256501502;

    t66 = ((x265>(x266&x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 50U;
	int16_t x271 = -1;
	static volatile int32_t t67 = 1906;

    t67 = ((x269>(x270&x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x275 = -1;
	int16_t x276 = INT16_MAX;

    t68 = ((x273>(x274&x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 190847LLU;
	int64_t x278 = INT64_MIN;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = -1;
	volatile int32_t t69 = 1;

    t69 = ((x277>(x278&x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 5158LL;
	volatile int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -10808;

    t70 = ((x281>(x282&x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	int64_t x286 = 25165782198552941LL;
	static int64_t x287 = -1LL;
	int8_t x288 = 60;
	int32_t t71 = -8;

    t71 = ((x285>(x286&x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 51738341LL;
	volatile uint32_t x291 = 6U;
	static int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = -232;

    t72 = ((x289>(x290&x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	uint8_t x294 = 118U;
	volatile int32_t x295 = 41;
	volatile int64_t x296 = 433LL;
	int32_t t73 = 31;

    t73 = ((x293>(x294&x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	int16_t x300 = INT16_MIN;
	static int32_t t74 = 26790632;

    t74 = ((x297>(x298&x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 476508U;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -1;

    t75 = ((x301>(x302&x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = 137U;
	int16_t x307 = INT16_MIN;
	uint8_t x308 = 1U;

    t76 = ((x305>(x306&x307))==x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 2760886139831LLU;
	static int16_t x311 = -1;
	volatile int32_t t77 = -1895839;

    t77 = ((x309>(x310&x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x314 = -1;
	int32_t x315 = -70708688;
	int16_t x316 = -1;
	int32_t t78 = 1543;

    t78 = ((x313>(x314&x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = 2513101847LL;
	int64_t x319 = INT64_MAX;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = 1643372;

    t79 = ((x317>(x318&x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x322 = 5508187622554770LLU;
	int16_t x324 = -1;
	int32_t t80 = -117206;

    t80 = ((x321>(x322&x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = 1;
	uint64_t x326 = 3LLU;
	volatile int64_t x327 = -1LL;
	static int8_t x328 = INT8_MAX;
	int32_t t81 = 7;

    t81 = ((x325>(x326&x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 143U;
	int32_t x330 = -1;
	uint8_t x331 = 5U;
	static volatile int32_t x332 = -317378;
	int32_t t82 = 0;

    t82 = ((x329>(x330&x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x334 = 11U;
	uint16_t x335 = 0U;
	uint8_t x336 = 65U;
	int32_t t83 = -70986554;

    t83 = ((x333>(x334&x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x339 = INT64_MAX;

    t84 = ((x337>(x338&x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 708091164U;
	static int32_t x343 = -18555;
	int64_t x344 = -1LL;
	volatile int32_t t85 = -1829;

    t85 = ((x341>(x342&x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x345 = 296608092893LL;
	static int8_t x346 = INT8_MIN;
	volatile int64_t x347 = INT64_MAX;
	static int16_t x348 = -304;

    t86 = ((x345>(x346&x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x349 = 1LL;
	static uint16_t x350 = 2931U;
	int32_t x352 = -1;
	static int32_t t87 = 234691781;

    t87 = ((x349>(x350&x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x353 = -10936LL;
	int32_t x356 = -4;
	static int32_t t88 = -455116620;

    t88 = ((x353>(x354&x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x358 = INT64_MIN;
	volatile int32_t x359 = INT32_MAX;
	int8_t x360 = -1;

    t89 = ((x357>(x358&x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x361 = 1114U;
	volatile uint8_t x362 = 64U;
	volatile int16_t x363 = -1;
	static uint64_t x364 = 15386LLU;
	volatile int32_t t90 = -25745;

    t90 = ((x361>(x362&x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = -533356780LL;
	static int8_t x366 = -12;
	volatile int32_t t91 = -76256;

    t91 = ((x365>(x366&x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;

    t92 = ((x369>(x370&x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint32_t x374 = 2208U;
	int64_t x375 = INT64_MIN;
	static int16_t x376 = INT16_MAX;
	volatile int32_t t93 = 1;

    t93 = ((x373>(x374&x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	uint8_t x378 = 5U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;

    t94 = ((x377>(x378&x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x383 = INT64_MAX;
	volatile int32_t t95 = 1;

    t95 = ((x381>(x382&x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x386 = -1079;
	int32_t x387 = -919572;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 949100;

    t96 = ((x385>(x386&x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	static int32_t x390 = INT32_MIN;
	uint32_t x391 = 472U;
	static uint64_t x392 = 78229LLU;
	int32_t t97 = 913;

    t97 = ((x389>(x390&x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = 7531835664039LLU;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t98 = -127;

    t98 = ((x393>(x394&x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x398 = 1325655699574LL;
	volatile int16_t x399 = INT16_MIN;
	static uint16_t x400 = 31U;
	int32_t t99 = -43989;

    t99 = ((x397>(x398&x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	int8_t x402 = INT8_MIN;
	static uint8_t x403 = 47U;
	int32_t x404 = 504;
	volatile int32_t t100 = 0;

    t100 = ((x401>(x402&x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile int8_t x406 = 57;
	int8_t x407 = -12;
	volatile int8_t x408 = INT8_MAX;
	volatile int32_t t101 = 61;

    t101 = ((x405>(x406&x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	volatile uint8_t x410 = 59U;
	volatile uint16_t x411 = UINT16_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t102 = -2201;

    t102 = ((x409>(x410&x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	volatile uint32_t x416 = UINT32_MAX;

    t103 = ((x413>(x414&x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x417 = UINT64_MAX;
	int64_t x418 = -1LL;
	static int32_t x419 = -625338296;
	uint8_t x420 = 15U;
	volatile int32_t t104 = 593;

    t104 = ((x417>(x418&x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x422 = 499U;
	static int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MAX;
	volatile int32_t t105 = 19095535;

    t105 = ((x421>(x422&x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = -1;
	uint32_t x427 = 31668678U;
	int16_t x428 = -1;
	int32_t t106 = -889629058;

    t106 = ((x425>(x426&x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	uint64_t x432 = UINT64_MAX;

    t107 = ((x429>(x430&x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x434 = -1;
	static uint16_t x435 = 3U;
	int16_t x436 = -1;

    t108 = ((x433>(x434&x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = -4;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = 0U;
	volatile int32_t t109 = -4;

    t109 = ((x437>(x438&x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = 1;
	volatile int64_t x442 = INT64_MAX;
	static int8_t x443 = INT8_MIN;
	volatile uint64_t x444 = 24372377203LLU;
	int32_t t110 = 1353;

    t110 = ((x441>(x442&x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 24396U;
	int8_t x446 = -1;
	volatile uint16_t x447 = UINT16_MAX;
	int16_t x448 = INT16_MIN;
	int32_t t111 = -3457547;

    t111 = ((x445>(x446&x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -47238040;
	int32_t x450 = INT32_MIN;
	volatile uint32_t x452 = 116179890U;
	volatile int32_t t112 = -17;

    t112 = ((x449>(x450&x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x455 = 8563491083LLU;

    t113 = ((x453>(x454&x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -157LL;
	volatile int16_t x458 = 1;
	uint8_t x459 = 6U;

    t114 = ((x457>(x458&x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	uint16_t x462 = UINT16_MAX;
	static int8_t x463 = -50;
	static uint16_t x464 = 4248U;
	int32_t t115 = -1108942;

    t115 = ((x461>(x462&x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x466 = 2;
	uint8_t x467 = 51U;
	volatile int32_t t116 = 31;

    t116 = ((x465>(x466&x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x470 = -1;
	int32_t x471 = INT32_MAX;
	static uint8_t x472 = 18U;
	int32_t t117 = -231220198;

    t117 = ((x469>(x470&x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = 1;
	int16_t x474 = 2;
	int32_t x475 = INT32_MIN;
	static uint8_t x476 = UINT8_MAX;
	volatile int32_t t118 = -529413;

    t118 = ((x473>(x474&x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = -1LL;
	uint8_t x480 = UINT8_MAX;
	int32_t t119 = 1;

    t119 = ((x477>(x478&x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	static int32_t x482 = INT32_MAX;
	volatile int16_t x484 = INT16_MIN;

    t120 = ((x481>(x482&x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x486 = INT8_MIN;
	volatile int32_t x487 = INT32_MIN;
	static uint32_t x488 = 7358U;
	volatile int32_t t121 = 238305;

    t121 = ((x485>(x486&x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = -1;
	uint32_t x491 = 15U;
	int64_t x492 = INT64_MIN;

    t122 = ((x489>(x490&x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = UINT32_MAX;
	int8_t x494 = -1;
	static volatile int32_t x495 = INT32_MAX;
	uint8_t x496 = UINT8_MAX;
	int32_t t123 = -74;

    t123 = ((x493>(x494&x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 2U;
	int64_t x498 = INT64_MIN;
	int16_t x499 = 5;
	volatile uint32_t x500 = UINT32_MAX;
	volatile int32_t t124 = -19534699;

    t124 = ((x497>(x498&x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 123U;
	volatile int16_t x502 = 214;
	uint32_t x503 = UINT32_MAX;
	int32_t t125 = -3515906;

    t125 = ((x501>(x502&x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MIN;
	int32_t t126 = 70288241;

    t126 = ((x505>(x506&x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	static volatile uint16_t x510 = UINT16_MAX;
	static int32_t t127 = -127;

    t127 = ((x509>(x510&x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	int64_t x515 = INT64_MIN;
	volatile uint32_t x516 = 537868228U;
	volatile int32_t t128 = -117895;

    t128 = ((x513>(x514&x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = -1LL;
	uint16_t x518 = 1235U;
	volatile int64_t x519 = INT64_MIN;
	static int32_t t129 = -30718;

    t129 = ((x517>(x518&x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -318;
	uint64_t x522 = UINT64_MAX;
	int8_t x523 = -1;
	int32_t x524 = -11;
	volatile int32_t t130 = -24;

    t130 = ((x521>(x522&x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x526 = INT32_MIN;
	static uint16_t x527 = UINT16_MAX;
	static int64_t x528 = INT64_MIN;
	int32_t t131 = -111;

    t131 = ((x525>(x526&x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 1;
	uint32_t x530 = 797U;
	volatile int32_t x531 = INT32_MIN;
	int32_t x532 = -1;
	volatile int32_t t132 = 1064225523;

    t132 = ((x529>(x530&x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = 120U;
	int16_t x534 = INT16_MIN;
	int16_t x535 = INT16_MIN;
	volatile uint8_t x536 = 79U;
	volatile int32_t t133 = -1746;

    t133 = ((x533>(x534&x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 2103369289LLU;
	volatile uint8_t x539 = 1U;
	static int16_t x540 = INT16_MIN;
	int32_t t134 = 21405911;

    t134 = ((x537>(x538&x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 1LL;
	int8_t x542 = 24;
	uint8_t x543 = UINT8_MAX;
	int16_t x544 = 9;
	volatile int32_t t135 = 6121;

    t135 = ((x541>(x542&x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = 0;
	int8_t x548 = -1;
	int32_t t136 = -116649034;

    t136 = ((x545>(x546&x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	uint64_t x550 = 63393056LLU;
	static int32_t t137 = -32300052;

    t137 = ((x549>(x550&x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x555 = 14U;
	uint64_t x556 = 61444225108080292LLU;
	static int32_t t138 = -84;

    t138 = ((x553>(x554&x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -1;
	volatile int32_t x558 = INT32_MIN;
	int8_t x559 = -13;
	uint8_t x560 = 3U;
	int32_t t139 = -828771;

    t139 = ((x557>(x558&x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = INT32_MAX;
	int64_t x564 = 90864884110407501LL;
	volatile int32_t t140 = 0;

    t140 = ((x561>(x562&x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = -1LL;
	int16_t x566 = -1;
	int32_t x567 = -72229;
	static int16_t x568 = 0;
	static volatile int32_t t141 = 21448;

    t141 = ((x565>(x566&x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = -1;
	int16_t x570 = INT16_MIN;
	int32_t t142 = 1603063;

    t142 = ((x569>(x570&x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	volatile int8_t x574 = INT8_MIN;
	volatile int16_t x575 = -232;
	uint16_t x576 = 13U;
	volatile int32_t t143 = 6468634;

    t143 = ((x573>(x574&x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 47U;
	int16_t x578 = -16012;
	int16_t x579 = -1;
	static int64_t x580 = -1LL;
	static volatile int32_t t144 = 991936350;

    t144 = ((x577>(x578&x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile uint64_t x582 = UINT64_MAX;
	int32_t x583 = INT32_MAX;
	int64_t x584 = 17301211276782714LL;

    t145 = ((x581>(x582&x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 28836052842490309LLU;
	uint16_t x587 = 143U;
	static volatile int32_t t146 = -22;

    t146 = ((x585>(x586&x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -11;
	static int8_t x590 = -6;
	static int8_t x591 = 1;
	int32_t x592 = 667469663;
	volatile int32_t t147 = -87239391;

    t147 = ((x589>(x590&x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint8_t x594 = 15U;
	static int8_t x595 = INT8_MIN;
	volatile int16_t x596 = -1;
	volatile int32_t t148 = -651500376;

    t148 = ((x593>(x594&x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x598 = INT8_MIN;
	uint8_t x599 = UINT8_MAX;
	int8_t x600 = -1;
	volatile int32_t t149 = -1;

    t149 = ((x597>(x598&x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x602 = 1060823461266174786LL;
	int32_t x603 = INT32_MIN;
	uint8_t x604 = 27U;
	volatile int32_t t150 = -150492625;

    t150 = ((x601>(x602&x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	uint8_t x606 = 4U;
	int16_t x607 = 27;
	uint64_t x608 = 5879893916527LLU;

    t151 = ((x605>(x606&x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	static volatile int8_t x610 = INT8_MIN;
	static uint16_t x611 = 3U;
	int32_t t152 = -1668569;

    t152 = ((x609>(x610&x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x614 = UINT8_MAX;
	uint32_t x615 = 497926U;
	uint32_t x616 = 33512041U;

    t153 = ((x613>(x614&x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x617 = 53650785U;
	int32_t x618 = 484;
	uint32_t x619 = 12U;
	static int16_t x620 = -241;
	static volatile int32_t t154 = -1;

    t154 = ((x617>(x618&x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	int16_t x622 = -1;
	uint16_t x623 = UINT16_MAX;
	int64_t x624 = INT64_MIN;
	static volatile int32_t t155 = 0;

    t155 = ((x621>(x622&x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = UINT32_MAX;
	int16_t x626 = INT16_MIN;
	uint32_t x627 = 396686090U;
	int32_t t156 = -1667;

    t156 = ((x625>(x626&x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 3900862858967421LLU;
	int16_t x630 = 15660;
	volatile int16_t x631 = 41;
	int32_t x632 = 142;
	static volatile int32_t t157 = 33615510;

    t157 = ((x629>(x630&x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x634 = -1;
	int32_t x635 = INT32_MAX;
	int32_t x636 = INT32_MIN;
	int32_t t158 = -1;

    t158 = ((x633>(x634&x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -2607879281625LL;
	volatile int8_t x639 = 41;
	int32_t t159 = 122364;

    t159 = ((x637>(x638&x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = 0;
	int32_t x643 = INT32_MIN;
	int64_t x644 = -503187027747066638LL;

    t160 = ((x641>(x642&x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	volatile uint32_t x647 = 110U;
	int16_t x648 = -1;
	int32_t t161 = -1198153;

    t161 = ((x645>(x646&x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = INT16_MIN;
	uint8_t x651 = 49U;
	int16_t x652 = INT16_MIN;
	int32_t t162 = -97;

    t162 = ((x649>(x650&x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -19529752;
	uint16_t x654 = UINT16_MAX;
	uint64_t x655 = 6359306819105LLU;
	int32_t x656 = INT32_MIN;
	int32_t t163 = -3;

    t163 = ((x653>(x654&x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = 0U;
	volatile uint64_t x658 = 12788315047LLU;
	int16_t x660 = 1;

    t164 = ((x657>(x658&x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 0;
	uint8_t x662 = 11U;
	int16_t x663 = INT16_MIN;
	static int32_t x664 = -1;

    t165 = ((x661>(x662&x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MAX;
	uint64_t x666 = 295591081405166230LLU;
	static uint8_t x667 = 21U;
	static int64_t x668 = -1LL;

    t166 = ((x665>(x666&x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = -1;
	int32_t x670 = INT32_MIN;
	uint64_t x671 = 4113958429328638LLU;
	uint16_t x672 = 371U;
	volatile int32_t t167 = 1837199;

    t167 = ((x669>(x670&x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	volatile int16_t x674 = -1;
	volatile int16_t x675 = INT16_MIN;
	int32_t x676 = -1;

    t168 = ((x673>(x674&x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -30331LL;
	int16_t x678 = -1;
	int32_t x679 = INT32_MIN;
	static uint8_t x680 = UINT8_MAX;
	volatile int32_t t169 = -41;

    t169 = ((x677>(x678&x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 15U;
	uint32_t x682 = 0U;
	int16_t x683 = 93;
	volatile uint64_t x684 = UINT64_MAX;
	int32_t t170 = -6582180;

    t170 = ((x681>(x682&x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x686 = UINT8_MAX;
	int32_t x687 = -1679753;
	int16_t x688 = -3308;
	int32_t t171 = -130086581;

    t171 = ((x685>(x686&x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x689 = INT16_MAX;
	int16_t x690 = -1283;
	uint32_t x692 = UINT32_MAX;
	int32_t t172 = 16;

    t172 = ((x689>(x690&x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = 2827U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t173 = 181966;

    t173 = ((x693>(x694&x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	static uint8_t x698 = 2U;
	volatile int64_t x699 = INT64_MIN;
	volatile int32_t t174 = -185616;

    t174 = ((x697>(x698&x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	static int16_t x702 = -13209;
	int64_t x703 = 92065438220112460LL;
	int8_t x704 = INT8_MAX;
	static volatile int32_t t175 = 1;

    t175 = ((x701>(x702&x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 2765338416190LLU;
	int16_t x706 = INT16_MIN;
	int64_t x707 = -6LL;
	int64_t x708 = INT64_MAX;
	volatile int32_t t176 = -149;

    t176 = ((x705>(x706&x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 63;
	static int64_t x710 = -1LL;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;
	static volatile int32_t t177 = 20;

    t177 = ((x709>(x710&x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MIN;
	static uint16_t x714 = 192U;
	int8_t x715 = -33;
	uint64_t x716 = 1820LLU;
	volatile int32_t t178 = -1;

    t178 = ((x713>(x714&x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x718 = UINT8_MAX;
	int8_t x720 = -7;
	int32_t t179 = 124;

    t179 = ((x717>(x718&x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x722 = 3U;
	static int32_t x723 = INT32_MIN;
	int8_t x724 = INT8_MIN;
	int32_t t180 = 93439;

    t180 = ((x721>(x722&x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x725 = 656803833506LL;
	int16_t x726 = INT16_MIN;
	int16_t x727 = INT16_MIN;
	static int32_t x728 = INT32_MIN;

    t181 = ((x725>(x726&x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x730 = 8U;
	uint32_t x731 = UINT32_MAX;
	int32_t t182 = -24825502;

    t182 = ((x729>(x730&x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x734 = 0U;
	uint16_t x735 = 210U;
	volatile int32_t t183 = -3;

    t183 = ((x733>(x734&x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 44320LLU;
	static int32_t x738 = INT32_MIN;
	int16_t x739 = -504;
	volatile uint16_t x740 = 424U;
	volatile int32_t t184 = 41;

    t184 = ((x737>(x738&x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = 4014U;
	volatile int32_t x742 = -1;
	static int64_t x743 = -1425674571192LL;
	int16_t x744 = -1;
	int32_t t185 = 183082092;

    t185 = ((x741>(x742&x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 107019468U;
	int8_t x746 = -11;
	uint64_t x747 = 211917990168923LLU;
	uint8_t x748 = UINT8_MAX;
	static volatile int32_t t186 = -697729451;

    t186 = ((x745>(x746&x747))==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	int8_t x751 = 1;
	uint64_t x752 = 3702LLU;
	volatile int32_t t187 = 28652421;

    t187 = ((x749>(x750&x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -1LL;
	static int8_t x755 = -1;
	int32_t x756 = INT32_MIN;
	int32_t t188 = 130665;

    t188 = ((x753>(x754&x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = -52477838;

    t189 = ((x757>(x758&x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x762 = 4345;
	static int16_t x763 = INT16_MIN;
	int32_t t190 = 166990937;

    t190 = ((x761>(x762&x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	static int8_t x767 = 1;
	int64_t x768 = -348LL;
	int32_t t191 = 895512;

    t191 = ((x765>(x766&x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x769 = INT16_MIN;
	static int64_t x770 = INT64_MIN;
	uint64_t x771 = UINT64_MAX;
	int64_t x772 = INT64_MIN;
	int32_t t192 = 7;

    t192 = ((x769>(x770&x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	uint8_t x774 = 83U;
	int16_t x775 = INT16_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t193 = 36623000;

    t193 = ((x773>(x774&x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	uint32_t x778 = 520875U;
	static uint16_t x779 = UINT16_MAX;
	volatile int32_t t194 = 83;

    t194 = ((x777>(x778&x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 111U;
	int32_t x782 = -1;
	volatile int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MAX;
	static int32_t t195 = -87;

    t195 = ((x781>(x782&x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	volatile int64_t x786 = INT64_MAX;
	int16_t x787 = INT16_MIN;
	uint16_t x788 = 18224U;
	static volatile int32_t t196 = 7;

    t196 = ((x785>(x786&x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	int64_t x790 = 2553197779033LL;
	int64_t x791 = 745057539818LL;
	int8_t x792 = INT8_MAX;

    t197 = ((x789>(x790&x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = -48138258LL;
	static volatile int32_t x794 = INT32_MIN;
	int64_t x795 = -24912LL;
	static uint16_t x796 = UINT16_MAX;
	int32_t t198 = 2;

    t198 = ((x793>(x794&x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x798 = UINT64_MAX;
	uint16_t x799 = 5882U;
	int16_t x800 = INT16_MIN;
	volatile int32_t t199 = -58264002;

    t199 = ((x797>(x798&x799))==x800);

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

