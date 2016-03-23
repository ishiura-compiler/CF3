
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

volatile uint16_t x1 = 3091U;
int16_t x6 = INT16_MAX;
volatile int32_t t1 = 715;
static volatile int32_t x9 = INT32_MIN;
volatile int16_t x10 = INT16_MIN;
uint64_t x11 = 99689190203583165LLU;
volatile int16_t x16 = INT16_MAX;
int64_t x19 = INT64_MIN;
uint16_t x21 = UINT16_MAX;
static int64_t t5 = -12044LL;
int32_t x26 = INT32_MAX;
volatile int16_t x27 = 0;
static int64_t t6 = INT64_MAX;
uint16_t x35 = 8U;
int64_t x45 = INT64_MAX;
volatile int32_t t11 = 13;
uint16_t x51 = 7U;
int8_t x63 = 3;
static uint8_t x64 = 21U;
volatile uint16_t x66 = UINT16_MAX;
uint8_t x67 = UINT8_MAX;
volatile int16_t x72 = 0;
int32_t x77 = -6;
static int32_t x84 = INT32_MIN;
volatile int32_t t20 = INT32_MIN;
static volatile uint64_t x85 = 25LLU;
int64_t x90 = INT64_MIN;
volatile uint64_t t22 = UINT64_MAX;
static int64_t x97 = -1LL;
static volatile uint64_t x99 = 5399LLU;
uint16_t x104 = UINT16_MAX;
int32_t t26 = -52;
int32_t t28 = -39154094;
volatile int8_t x121 = INT8_MIN;
static uint8_t x122 = UINT8_MAX;
int32_t x126 = INT32_MIN;
int16_t x127 = INT16_MIN;
int8_t x132 = -1;
volatile int16_t x133 = INT16_MIN;
int16_t x137 = -1;
volatile int64_t x139 = 505649476275490LL;
static volatile int16_t x141 = -13;
int16_t x146 = -2158;
volatile uint32_t x155 = UINT32_MAX;
int16_t x160 = 6008;
int8_t x164 = INT8_MIN;
int64_t x175 = INT64_MAX;
int64_t x187 = -165LL;
static volatile int32_t t47 = 753;
volatile int8_t x199 = INT8_MIN;
int32_t x202 = -4;
static int8_t x205 = 62;
uint8_t x212 = UINT8_MAX;
volatile int64_t x213 = 62LL;
uint16_t x214 = 1U;
int64_t x216 = -122954466448610LL;
static int32_t x219 = -1;
int32_t x231 = INT32_MIN;
uint8_t x233 = UINT8_MAX;
int32_t t58 = 6602;
static int64_t x241 = INT64_MIN;
volatile int32_t t62 = 178;
static int16_t x254 = -183;
volatile uint64_t t63 = 5111594LLU;
int32_t t66 = 6024930;
uint64_t x272 = 10LLU;
static uint32_t x273 = 30845864U;
static int16_t x274 = 6751;
static int32_t x276 = -1;
uint32_t x280 = 1706431U;
uint8_t x283 = 9U;
int64_t x293 = 36LL;
uint64_t x299 = UINT64_MAX;
static int32_t x300 = 7;
int32_t t74 = 60;
int64_t x310 = 1197012573786LL;
int64_t x312 = INT64_MIN;
int16_t x314 = 1;
int64_t x315 = INT64_MIN;
int64_t x319 = INT64_MIN;
int8_t x321 = INT8_MIN;
volatile int32_t x326 = INT32_MAX;
uint16_t x332 = UINT16_MAX;
volatile int64_t x333 = INT64_MAX;
int16_t x337 = INT16_MAX;
int32_t t84 = -796653;
int32_t t85 = 1;
static uint32_t x355 = UINT32_MAX;
int8_t x360 = INT8_MIN;
uint8_t x361 = 1U;
static int8_t x364 = 20;
volatile uint64_t x376 = 44738LLU;
uint64_t x377 = UINT64_MAX;
int64_t x378 = INT64_MAX;
int8_t x379 = INT8_MAX;
int16_t x390 = INT16_MIN;
static volatile int8_t x391 = -1;
volatile int16_t x392 = INT16_MIN;
volatile int64_t x393 = INT64_MAX;
volatile uint64_t x394 = UINT64_MAX;
int32_t t98 = -132990381;
int8_t x397 = INT8_MIN;
volatile int8_t x398 = INT8_MIN;
volatile int8_t x399 = 3;
volatile int32_t t99 = -3077;
uint32_t x411 = 30030619U;
int64_t x416 = 2LL;
volatile int64_t t103 = -4425987031878648LL;
int64_t x418 = 52385065870LL;
volatile int8_t x419 = -12;
volatile uint16_t x420 = 0U;
int64_t x422 = INT64_MAX;
int64_t t106 = -5547564209813LL;
static volatile int32_t t107 = 7862763;
volatile int32_t x439 = INT32_MIN;
static volatile int8_t x441 = -1;
volatile int32_t t111 = 505154;
static uint32_t x453 = 51493654U;
volatile uint32_t x455 = 40179622U;
uint32_t x456 = 411558526U;
uint32_t t113 = 12385231U;
static int16_t x465 = -2024;
int64_t x469 = INT64_MAX;
int32_t t117 = -370035;
int16_t x479 = INT16_MIN;
int8_t x480 = INT8_MIN;
volatile int64_t t120 = INT64_MIN;
volatile int64_t x487 = INT64_MIN;
static int16_t x504 = -13982;
int32_t t125 = -15;
int32_t t127 = -24413447;
int32_t x515 = INT32_MIN;
int64_t t128 = 28159317LL;
static volatile uint32_t x520 = UINT32_MAX;
volatile int32_t t131 = -15621264;
int16_t x529 = INT16_MAX;
int32_t x530 = INT32_MIN;
static int64_t x531 = INT64_MAX;
volatile int64_t x539 = INT64_MIN;
int32_t x541 = INT32_MIN;
static int8_t x543 = 0;
static int32_t x550 = INT32_MIN;
int32_t t138 = 1076;
uint64_t x559 = 44485LLU;
static volatile int32_t t139 = 497957;
int32_t x561 = -1;
int16_t x565 = INT16_MIN;
uint64_t x571 = 53388737383022LLU;
volatile int32_t t142 = -40719;
int64_t x575 = -49342646908524961LL;
volatile int32_t x576 = 3761096;
volatile int32_t t143 = 780;
uint8_t x577 = 4U;
volatile int64_t x587 = 411070970522474837LL;
static int32_t t146 = -477575;
uint32_t x589 = 35229825U;
static volatile uint32_t x594 = 39411468U;
volatile int64_t t148 = -112885265LL;
static int64_t x600 = 84597146LL;
int16_t x602 = INT16_MIN;
int32_t x603 = 1;
volatile int8_t x611 = -2;
int32_t x612 = -1;
int16_t x614 = -1;
int8_t x620 = 16;
uint32_t x626 = UINT32_MAX;
uint32_t x628 = UINT32_MAX;
volatile uint32_t x631 = UINT32_MAX;
static int8_t x635 = INT8_MAX;
uint16_t x645 = 4361U;
volatile int32_t x653 = INT32_MIN;
int32_t x657 = 228804122;
int16_t x658 = INT16_MAX;
volatile int8_t x659 = 1;
int16_t x662 = -1;
static uint16_t x663 = 585U;
int16_t x665 = INT16_MAX;
int16_t x667 = INT16_MAX;
volatile int32_t t166 = -1;
volatile int16_t x672 = -3;
int32_t x679 = -451;
static int32_t x680 = -1;
volatile int32_t x681 = INT32_MIN;
int16_t x682 = -5931;
static uint16_t x692 = 26750U;
int64_t x696 = INT64_MAX;
int8_t x702 = INT8_MAX;
int16_t x704 = INT16_MAX;
static volatile int64_t t176 = 114572145LL;
volatile int8_t x709 = INT8_MAX;
int32_t x710 = INT32_MIN;
uint32_t x719 = 1U;
uint32_t x720 = 90153U;
uint32_t t179 = 179360683U;
int16_t x730 = INT16_MAX;
volatile uint64_t x737 = 22743306LLU;
static int64_t x738 = INT64_MIN;
volatile uint8_t x739 = 0U;
volatile int8_t x750 = INT8_MIN;
volatile int32_t x762 = INT32_MIN;
static volatile int16_t x768 = INT16_MIN;
int8_t x772 = INT8_MIN;
volatile int32_t t192 = 89458142;
uint64_t x777 = 1984540710LLU;
volatile uint32_t x785 = UINT32_MAX;
int64_t x787 = -1LL;
int8_t x789 = -1;
volatile int8_t x793 = 1;
int32_t t198 = 31;


void f0(void) {
    	static int64_t x2 = INT64_MIN;
	volatile int8_t x3 = INT8_MIN;
	static volatile int16_t x4 = INT16_MIN;
	int32_t t0 = -17409451;

    t0 = ((x1>(x2>x3))|x4);

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile int16_t x7 = -34;
	static int8_t x8 = INT8_MIN;

    t1 = ((x5>(x6>x7))|x8);

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x12 = -1;
	int32_t t2 = -18275;

    t2 = ((x9>(x10>x11))|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 0U;
	int16_t x14 = -3135;
	int16_t x15 = INT16_MIN;
	static int32_t t3 = 5;

    t3 = ((x13>(x14>x15))|x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	uint16_t x18 = UINT16_MAX;
	int64_t x20 = 1334276046622126335LL;
	int64_t t4 = 139101669373118632LL;

    t4 = ((x17>(x18>x19))|x20);

    if (t4 != 1334276046622126335LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x22 = 114LLU;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MIN;

    t5 = ((x21>(x22>x23))|x24);

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int64_t x28 = INT64_MAX;

    t6 = ((x25>(x26>x27))|x28);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 214965732;

    t7 = ((x29>(x30>x31))|x32);

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x36 = -9LL;
	volatile int64_t t8 = -552765717548178LL;

    t8 = ((x33>(x34>x35))|x36);

    if (t8 != -9LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	int16_t x39 = 415;
	int32_t x40 = INT32_MIN;
	static volatile int32_t t9 = INT32_MIN;

    t9 = ((x37>(x38>x39))|x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 15U;
	uint32_t x42 = 346892716U;
	static int16_t x43 = -100;
	int32_t x44 = -1;
	int32_t t10 = -1;

    t10 = ((x41>(x42>x43))|x44);

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1LL;
	int16_t x47 = INT16_MAX;
	int8_t x48 = INT8_MAX;

    t11 = ((x45>(x46>x47))|x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 2LL;
	volatile uint16_t x50 = 4U;
	volatile int32_t x52 = -11585319;
	volatile int32_t t12 = 112653;

    t12 = ((x49>(x50>x51))|x52);

    if (t12 != -11585319) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -218;
	volatile int32_t x54 = -1;
	static int8_t x55 = -21;
	uint8_t x56 = 3U;
	volatile int32_t t13 = -13546911;

    t13 = ((x53>(x54>x55))|x56);

    if (t13 != 3) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 59U;
	static volatile int32_t x58 = 244;
	int16_t x59 = -4885;
	uint16_t x60 = 8038U;
	int32_t t14 = 116;

    t14 = ((x57>(x58>x59))|x60);

    if (t14 != 8039) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -26;
	static int64_t x62 = INT64_MIN;
	int32_t t15 = -1547;

    t15 = ((x61>(x62>x63))|x64);

    if (t15 != 21) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -803;
	static int16_t x68 = -5;
	volatile int32_t t16 = 8465;

    t16 = ((x65>(x66>x67))|x68);

    if (t16 != -5) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x69 = -1;
	int64_t x70 = -127223842121LL;
	int32_t x71 = INT32_MAX;
	volatile int32_t t17 = 224518;

    t17 = ((x69>(x70>x71))|x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 769018372;
	int8_t x74 = -38;
	volatile int8_t x75 = INT8_MAX;
	int64_t x76 = -1LL;
	volatile int64_t t18 = 2611LL;

    t18 = ((x73>(x74>x75))|x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x78 = UINT8_MAX;
	volatile int8_t x79 = -34;
	int8_t x80 = -1;
	volatile int32_t t19 = 18203917;

    t19 = ((x77>(x78>x79))|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 0U;
	volatile uint16_t x82 = UINT16_MAX;
	uint8_t x83 = 0U;

    t20 = ((x81>(x82>x83))|x84);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = 479158765389678484LL;

    t21 = ((x85>(x86>x87))|x88);

    if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 30655145U;
	int16_t x91 = -1;
	uint64_t x92 = UINT64_MAX;

    t22 = ((x89>(x90>x91))|x92);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	static uint8_t x96 = UINT8_MAX;
	int32_t t23 = -645878;

    t23 = ((x93>(x94>x95))|x96);

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = 6;
	volatile int64_t x100 = 6005LL;
	int64_t t24 = 5LL;

    t24 = ((x97>(x98>x99))|x100);

    if (t24 != 6005LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = -1LL;
	int32_t x102 = INT32_MIN;
	int64_t x103 = 47362931944153LL;
	int32_t t25 = -4924107;

    t25 = ((x101>(x102>x103))|x104);

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 29U;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MAX;
	uint16_t x108 = 499U;

    t26 = ((x105>(x106>x107))|x108);

    if (t26 != 499) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint8_t x110 = UINT8_MAX;
	static volatile int32_t x111 = INT32_MIN;
	int32_t x112 = -59;
	int32_t t27 = 1;

    t27 = ((x109>(x110>x111))|x112);

    if (t27 != -59) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	int32_t x114 = -1;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = 0;

    t28 = ((x113>(x114>x115))|x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint8_t x118 = UINT8_MAX;
	int32_t x119 = 180;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = 133211826;

    t29 = ((x117>(x118>x119))|x120);

    if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x123 = -16;
	int8_t x124 = -1;
	volatile int32_t t30 = 2966;

    t30 = ((x121>(x122>x123))|x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int16_t x128 = INT16_MAX;
	int32_t t31 = 1;

    t31 = ((x125>(x126>x127))|x128);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = 46002971480685LLU;
	uint16_t x130 = 1998U;
	int8_t x131 = -3;
	int32_t t32 = -1;

    t32 = ((x129>(x130>x131))|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = -2;
	static volatile int64_t x135 = -866428295814370253LL;
	volatile uint32_t x136 = 13806U;
	volatile uint32_t t33 = 2239632U;

    t33 = ((x133>(x134>x135))|x136);

    if (t33 != 13806U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x138 = INT16_MIN;
	volatile uint64_t x140 = UINT64_MAX;
	volatile uint64_t t34 = UINT64_MAX;

    t34 = ((x137>(x138>x139))|x140);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MAX;
	int64_t x143 = -1LL;
	uint16_t x144 = UINT16_MAX;
	static int32_t t35 = 0;

    t35 = ((x141>(x142>x143))|x144);

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 38U;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 148847LLU;
	volatile uint64_t t36 = 15424915601461LLU;

    t36 = ((x145>(x146>x147))|x148);

    if (t36 != 148847LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = 155413U;
	volatile int16_t x150 = 23;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = -13;
	int32_t t37 = -474;

    t37 = ((x149>(x150>x151))|x152);

    if (t37 != -13) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = -1320;
	volatile int16_t x154 = INT16_MIN;
	volatile int32_t x156 = INT32_MIN;
	static volatile int32_t t38 = INT32_MIN;

    t38 = ((x153>(x154>x155))|x156);

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	volatile uint8_t x158 = 108U;
	int8_t x159 = INT8_MIN;
	volatile int32_t t39 = 8190;

    t39 = ((x157>(x158>x159))|x160);

    if (t39 != 6008) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 11U;
	int32_t x162 = INT32_MIN;
	static uint64_t x163 = 1797492380LLU;
	int32_t t40 = -25483774;

    t40 = ((x161>(x162>x163))|x164);

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x165 = INT32_MIN;
	int16_t x166 = 837;
	uint64_t x167 = UINT64_MAX;
	uint32_t x168 = UINT32_MAX;
	static uint32_t t41 = UINT32_MAX;

    t41 = ((x165>(x166>x167))|x168);

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = INT64_MAX;
	int64_t x170 = 6LL;
	uint8_t x171 = 0U;
	static int32_t x172 = 270;
	static int32_t t42 = -1;

    t42 = ((x169>(x170>x171))|x172);

    if (t42 != 271) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -5;
	int8_t x174 = -1;
	int64_t x176 = INT64_MIN;
	int64_t t43 = INT64_MIN;

    t43 = ((x173>(x174>x175))|x176);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MAX;
	uint64_t x178 = 11452LLU;
	volatile int32_t x179 = INT32_MAX;
	int16_t x180 = -650;
	int32_t t44 = 378699246;

    t44 = ((x177>(x178>x179))|x180);

    if (t44 != -649) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	static uint64_t x182 = 6LLU;
	int32_t x183 = -53798089;
	volatile int32_t x184 = -1;
	static volatile int32_t t45 = -1307;

    t45 = ((x181>(x182>x183))|x184);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 2999U;
	uint32_t x186 = 328566U;
	int32_t x188 = -1;
	volatile int32_t t46 = 746;

    t46 = ((x185>(x186>x187))|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	static uint8_t x190 = UINT8_MAX;
	volatile int16_t x191 = 10229;
	int16_t x192 = -1;

    t47 = ((x189>(x190>x191))|x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = INT64_MAX;
	volatile uint32_t x194 = 143367977U;
	volatile int32_t x195 = INT32_MAX;
	int8_t x196 = -1;
	volatile int32_t t48 = 5;

    t48 = ((x193>(x194>x195))|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	uint16_t x198 = UINT16_MAX;
	int8_t x200 = 53;
	int32_t t49 = -262;

    t49 = ((x197>(x198>x199))|x200);

    if (t49 != 53) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -242109850;
	int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -30172;

    t50 = ((x201>(x202>x203))|x204);

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x206 = 24U;
	uint64_t x207 = 3702928728510867LLU;
	static volatile int32_t x208 = INT32_MAX;
	volatile int32_t t51 = INT32_MAX;

    t51 = ((x205>(x206>x207))|x208);

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	static volatile uint8_t x210 = UINT8_MAX;
	static volatile int8_t x211 = INT8_MAX;
	volatile int32_t t52 = 1;

    t52 = ((x209>(x210>x211))|x212);

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x215 = -1;
	int64_t t53 = 14628689540061691LL;

    t53 = ((x213>(x214>x215))|x216);

    if (t53 != -122954466448609LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 2510U;
	int16_t x218 = 2;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = -3015;

    t54 = ((x217>(x218>x219))|x220);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MIN;
	volatile int32_t x223 = 101;
	int64_t x224 = INT64_MAX;
	volatile int64_t t55 = INT64_MAX;

    t55 = ((x221>(x222>x223))|x224);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	int64_t x226 = -1LL;
	uint32_t x227 = 1U;
	int8_t x228 = 0;
	int32_t t56 = -164195;

    t56 = ((x225>(x226>x227))|x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = 15992196233484LL;
	int8_t x230 = -1;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -1587775;

    t57 = ((x229>(x230>x231))|x232);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = INT64_MIN;
	static int16_t x235 = 5912;
	int32_t x236 = INT32_MIN;

    t58 = ((x233>(x234>x235))|x236);

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	int32_t x238 = INT32_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	static int32_t x240 = INT32_MIN;
	int32_t t59 = -7173729;

    t59 = ((x237>(x238>x239))|x240);

    if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = -15;
	uint64_t x243 = UINT64_MAX;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = UINT64_MAX;

    t60 = ((x241>(x242>x243))|x244);

    if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 9U;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = -795400850256LL;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 1196319;

    t61 = ((x245>(x246>x247))|x248);

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 1807U;
	uint64_t x250 = 1074489367640LLU;
	int32_t x251 = -1;
	uint8_t x252 = 96U;

    t62 = ((x249>(x250>x251))|x252);

    if (t62 != 97) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	static volatile int64_t x255 = -3728166080331329LL;
	uint64_t x256 = 2063214LLU;

    t63 = ((x253>(x254>x255))|x256);

    if (t63 != 2063214LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = UINT8_MAX;
	int16_t x258 = 7;
	int16_t x259 = 491;
	uint8_t x260 = 49U;
	int32_t t64 = -17;

    t64 = ((x257>(x258>x259))|x260);

    if (t64 != 49) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 0LL;
	volatile int16_t x262 = 720;
	int32_t x263 = -16530;
	int64_t x264 = -267137829964LL;
	static int64_t t65 = 0LL;

    t65 = ((x261>(x262>x263))|x264);

    if (t65 != -267137829964LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 97416994667381LLU;
	int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MAX;
	static volatile uint8_t x268 = 3U;

    t66 = ((x265>(x266>x267))|x268);

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x270 = -1;
	int32_t x271 = INT32_MIN;
	static uint64_t t67 = 13100472651LLU;

    t67 = ((x269>(x270>x271))|x272);

    if (t67 != 11LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x275 = 8284310211690LLU;
	volatile int32_t t68 = 978095571;

    t68 = ((x273>(x274>x275))|x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 105;
	int64_t x278 = -210740LL;
	int64_t x279 = INT64_MIN;
	uint32_t t69 = 1738U;

    t69 = ((x277>(x278>x279))|x280);

    if (t69 != 1706431U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MIN;
	int64_t x284 = 36340264LL;
	int64_t t70 = 5939LL;

    t70 = ((x281>(x282>x283))|x284);

    if (t70 != 36340265LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	volatile int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 411328784;

    t71 = ((x285>(x286>x287))|x288);

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 0LLU;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x289>(x290>x291))|x292);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = -118632119;
	int8_t x295 = -1;
	static int8_t x296 = INT8_MIN;
	static volatile int32_t t73 = 195429885;

    t73 = ((x293>(x294>x295))|x296);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	uint64_t x298 = 256655873LLU;

    t74 = ((x297>(x298>x299))|x300);

    if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MAX;
	static int64_t x302 = -1559261096091046LL;
	static volatile int64_t x303 = -1LL;
	static uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = -13;

    t75 = ((x301>(x302>x303))|x304);

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MAX;
	volatile int16_t x306 = INT16_MIN;
	int64_t x307 = INT64_MIN;
	volatile int8_t x308 = INT8_MIN;
	int32_t t76 = 23;

    t76 = ((x305>(x306>x307))|x308);

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	uint64_t x311 = 10646549300559LLU;
	int64_t t77 = INT64_MIN;

    t77 = ((x309>(x310>x311))|x312);

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 550U;
	volatile uint64_t x316 = 880942935292LLU;
	uint64_t t78 = 3665LLU;

    t78 = ((x313>(x314>x315))|x316);

    if (t78 != 880942935293LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	int8_t x318 = -1;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 3802909;

    t79 = ((x317>(x318>x319))|x320);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x322 = UINT64_MAX;
	volatile int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

    t80 = ((x321>(x322>x323))|x324);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x325 = -25;
	int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = -49006182;

    t81 = ((x325>(x326>x327))|x328);

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 3U;
	int16_t x330 = INT16_MIN;
	volatile uint64_t x331 = 21934332726LLU;
	volatile int32_t t82 = 3826;

    t82 = ((x329>(x330>x331))|x332);

    if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = UINT32_MAX;
	static uint32_t t83 = UINT32_MAX;

    t83 = ((x333>(x334>x335))|x336);

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x338 = 148569LL;
	int16_t x339 = INT16_MIN;
	static int8_t x340 = INT8_MIN;

    t84 = ((x337>(x338>x339))|x340);

    if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	static int8_t x342 = 2;
	uint32_t x343 = 191482U;
	int16_t x344 = 39;

    t85 = ((x341>(x342>x343))|x344);

    if (t85 != 39) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 2U;
	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	int32_t x348 = 579267;
	int32_t t86 = -91542545;

    t86 = ((x345>(x346>x347))|x348);

    if (t86 != 579267) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	int8_t x350 = -38;
	int16_t x351 = 0;
	int64_t x352 = -2528148LL;
	static volatile int64_t t87 = 215624165601366LL;

    t87 = ((x349>(x350>x351))|x352);

    if (t87 != -2528148LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x354 = 1;
	int64_t x356 = -1LL;
	volatile int64_t t88 = 1600659251439LL;

    t88 = ((x353>(x354>x355))|x356);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	static volatile uint8_t x358 = 14U;
	int8_t x359 = INT8_MIN;
	int32_t t89 = -59212;

    t89 = ((x357>(x358>x359))|x360);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	int64_t x363 = -1LL;
	static int32_t t90 = -9758;

    t90 = ((x361>(x362>x363))|x364);

    if (t90 != 21) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MAX;
	uint16_t x368 = 24724U;
	volatile int32_t t91 = -154;

    t91 = ((x365>(x366>x367))|x368);

    if (t91 != 24724) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t92 = -2783;

    t92 = ((x369>(x370>x371))|x372);

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -439893901196073LL;
	uint64_t x374 = 167472731378LLU;
	int32_t x375 = INT32_MIN;
	volatile uint64_t t93 = 74601LLU;

    t93 = ((x373>(x374>x375))|x376);

    if (t93 != 44738LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x380 = INT16_MIN;
	int32_t t94 = -467189869;

    t94 = ((x377>(x378>x379))|x380);

    if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = -1;

    t95 = ((x381>(x382>x383))|x384);

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = INT32_MIN;
	int32_t x386 = 51;
	static int8_t x387 = INT8_MIN;
	int32_t x388 = -7801;
	volatile int32_t t96 = 33552;

    t96 = ((x385>(x386>x387))|x388);

    if (t96 != -7801) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 370124741977526180LLU;
	int32_t t97 = -83996;

    t97 = ((x389>(x390>x391))|x392);

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x395 = INT16_MIN;
	volatile uint8_t x396 = 6U;

    t98 = ((x393>(x394>x395))|x396);

    if (t98 != 7) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x400 = 147U;

    t99 = ((x397>(x398>x399))|x400);

    if (t99 != 147) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = 86415513;
	int8_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t100 = -11;

    t100 = ((x401>(x402>x403))|x404);

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = UINT32_MAX;
	int16_t x406 = -1;
	int64_t x407 = -1LL;
	uint64_t x408 = 343669107197652920LLU;
	uint64_t t101 = 1495290021471083LLU;

    t101 = ((x405>(x406>x407))|x408);

    if (t101 != 343669107197652921LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = INT64_MIN;
	uint8_t x410 = 25U;
	uint16_t x412 = 15U;
	int32_t t102 = 1;

    t102 = ((x409>(x410>x411))|x412);

    if (t102 != 15) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	int32_t x415 = 17;

    t103 = ((x413>(x414>x415))|x416);

    if (t103 != 2LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	int32_t t104 = 2700;

    t104 = ((x417>(x418>x419))|x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = INT32_MAX;
	static int8_t x423 = INT8_MIN;
	int16_t x424 = 3116;
	volatile int32_t t105 = -5;

    t105 = ((x421>(x422>x423))|x424);

    if (t105 != 3117) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 11;
	uint8_t x426 = UINT8_MAX;
	volatile int32_t x427 = INT32_MIN;
	static volatile int64_t x428 = -1LL;

    t106 = ((x425>(x426>x427))|x428);

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 6500;
	int64_t x430 = -1LL;
	int64_t x431 = INT64_MAX;
	volatile int32_t x432 = INT32_MIN;

    t107 = ((x429>(x430>x431))|x432);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 1U;
	uint32_t x436 = UINT32_MAX;
	static volatile uint32_t t108 = UINT32_MAX;

    t108 = ((x433>(x434>x435))|x436);

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static int32_t x438 = -1;
	int32_t x440 = -367;
	int32_t t109 = -127;

    t109 = ((x437>(x438>x439))|x440);

    if (t109 != -367) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = -1;
	volatile uint64_t x443 = UINT64_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t110 = INT32_MIN;

    t110 = ((x441>(x442>x443))|x444);

    if (t110 != INT32_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = INT16_MAX;
	uint64_t x446 = 2727424LLU;
	uint32_t x447 = 4130125U;
	volatile uint8_t x448 = 40U;

    t111 = ((x445>(x446>x447))|x448);

    if (t111 != 41) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x450 = -1651;
	int16_t x451 = INT16_MIN;
	volatile int16_t x452 = INT16_MAX;
	int32_t t112 = 3727;

    t112 = ((x449>(x450>x451))|x452);

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x454 = 7U;

    t113 = ((x453>(x454>x455))|x456);

    if (t113 != 411558527U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -1;
	static volatile int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile int8_t x460 = INT8_MAX;
	static int32_t t114 = 913235;

    t114 = ((x457>(x458>x459))|x460);

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	uint8_t x462 = UINT8_MAX;
	volatile int64_t x463 = -1LL;
	static volatile uint8_t x464 = UINT8_MAX;
	volatile int32_t t115 = -827687334;

    t115 = ((x461>(x462>x463))|x464);

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 1725U;
	volatile int64_t x468 = INT64_MIN;
	int64_t t116 = INT64_MIN;

    t116 = ((x465>(x466>x467))|x468);

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x470 = 3U;
	uint16_t x471 = 497U;
	int16_t x472 = INT16_MAX;

    t117 = ((x469>(x470>x471))|x472);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	uint16_t x474 = 6U;
	int16_t x475 = -5841;
	int16_t x476 = INT16_MIN;
	volatile int32_t t118 = 1;

    t118 = ((x473>(x474>x475))|x476);

    if (t118 != -32767) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	static int8_t x478 = 3;
	int32_t t119 = 101;

    t119 = ((x477>(x478>x479))|x480);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	int8_t x482 = 1;
	uint16_t x483 = 15U;
	int64_t x484 = INT64_MIN;

    t120 = ((x481>(x482>x483))|x484);

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = 449;
	int8_t x486 = INT8_MAX;
	volatile uint64_t x488 = 3874313LLU;
	uint64_t t121 = 11650485359281757LLU;

    t121 = ((x485>(x486>x487))|x488);

    if (t121 != 3874313LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	int16_t x492 = 6401;
	volatile int32_t t122 = 219115;

    t122 = ((x489>(x490>x491))|x492);

    if (t122 != 6401) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int8_t x494 = INT8_MAX;
	volatile uint8_t x495 = 0U;
	uint8_t x496 = 30U;
	int32_t t123 = 60546160;

    t123 = ((x493>(x494>x495))|x496);

    if (t123 != 30) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 2454200980533469LLU;
	uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MAX;
	uint64_t x500 = 3837LLU;
	uint64_t t124 = 52LLU;

    t124 = ((x497>(x498>x499))|x500);

    if (t124 != 3837LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -31;
	int32_t x502 = INT32_MAX;
	uint8_t x503 = 61U;

    t125 = ((x501>(x502>x503))|x504);

    if (t125 != -13982) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = -1;
	static uint64_t x507 = UINT64_MAX;
	volatile int8_t x508 = INT8_MIN;
	int32_t t126 = -12458;

    t126 = ((x505>(x506>x507))|x508);

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int64_t x510 = INT64_MIN;
	static volatile int64_t x511 = -10339840755LL;
	int32_t x512 = INT32_MIN;

    t127 = ((x509>(x510>x511))|x512);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = 134U;
	int32_t x514 = -1;
	int64_t x516 = INT64_MIN;

    t128 = ((x513>(x514>x515))|x516);

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	int64_t x518 = INT64_MIN;
	static int32_t x519 = -2439;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = ((x517>(x518>x519))|x520);

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = 2567LLU;
	static int8_t x522 = INT8_MAX;
	int8_t x523 = INT8_MIN;
	volatile int8_t x524 = INT8_MIN;
	int32_t t130 = 1453772;

    t130 = ((x521>(x522>x523))|x524);

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int8_t x526 = -1;
	int16_t x527 = INT16_MIN;
	static int16_t x528 = INT16_MIN;

    t131 = ((x525>(x526>x527))|x528);

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = 956;

    t132 = ((x529>(x530>x531))|x532);

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x533 = INT16_MAX;
	static int32_t x534 = INT32_MIN;
	uint8_t x535 = 1U;
	int8_t x536 = -50;
	int32_t t133 = -62944;

    t133 = ((x533>(x534>x535))|x536);

    if (t133 != -49) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MIN;
	uint16_t x538 = UINT16_MAX;
	volatile int16_t x540 = INT16_MIN;
	int32_t t134 = -30164498;

    t134 = ((x537>(x538>x539))|x540);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x542 = INT64_MAX;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -5;

    t135 = ((x541>(x542>x543))|x544);

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 122U;
	static uint8_t x546 = 15U;
	volatile int8_t x547 = INT8_MIN;
	volatile uint16_t x548 = UINT16_MAX;
	int32_t t136 = -14988461;

    t136 = ((x545>(x546>x547))|x548);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -6LL;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = -1;
	int32_t t137 = 23383025;

    t137 = ((x549>(x550>x551))|x552);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 2049442685979378LLU;
	volatile int64_t x554 = -1LL;
	int8_t x555 = INT8_MIN;
	static int32_t x556 = 2940;

    t138 = ((x553>(x554>x555))|x556);

    if (t138 != 2941) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	uint16_t x558 = 21U;
	int8_t x560 = INT8_MAX;

    t139 = ((x557>(x558>x559))|x560);

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x562 = -116364587567LL;
	uint16_t x563 = 683U;
	volatile int64_t x564 = 36074616LL;
	volatile int64_t t140 = 1LL;

    t140 = ((x561>(x562>x563))|x564);

    if (t140 != 36074616LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x566 = INT64_MIN;
	uint64_t x567 = 1467180061817283LLU;
	volatile int16_t x568 = -386;
	static volatile int32_t t141 = -864429501;

    t141 = ((x565>(x566>x567))|x568);

    if (t141 != -386) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 8652668293976LL;
	uint64_t x570 = UINT64_MAX;
	int8_t x572 = -2;

    t142 = ((x569>(x570>x571))|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	volatile int64_t x574 = -1LL;

    t143 = ((x573>(x574>x575))|x576);

    if (t143 != 3761097) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x578 = -2;
	volatile uint64_t x579 = 9069841337281LLU;
	static volatile int8_t x580 = 7;
	int32_t t144 = -174;

    t144 = ((x577>(x578>x579))|x580);

    if (t144 != 7) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = -183755LL;
	volatile int64_t x582 = INT64_MIN;
	volatile int8_t x583 = INT8_MIN;
	int16_t x584 = -1;
	static volatile int32_t t145 = 35255;

    t145 = ((x581>(x582>x583))|x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	static int16_t x588 = -1;

    t146 = ((x585>(x586>x587))|x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = INT64_MIN;
	int8_t x591 = -1;
	int16_t x592 = INT16_MIN;
	int32_t t147 = 271267239;

    t147 = ((x589>(x590>x591))|x592);

    if (t147 != -32767) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 193456798U;
	uint8_t x595 = UINT8_MAX;
	static int64_t x596 = -1LL;

    t148 = ((x593>(x594>x595))|x596);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = INT64_MAX;
	volatile int32_t x598 = -1;
	static uint64_t x599 = UINT64_MAX;
	volatile int64_t t149 = 1432946845306008069LL;

    t149 = ((x597>(x598>x599))|x600);

    if (t149 != 84597147LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = 3779;
	int8_t x604 = INT8_MIN;
	volatile int32_t t150 = -19;

    t150 = ((x601>(x602>x603))|x604);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	int64_t x606 = -1LL;
	int32_t x607 = INT32_MAX;
	int16_t x608 = -5;
	volatile int32_t t151 = 2181700;

    t151 = ((x605>(x606>x607))|x608);

    if (t151 != -5) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x609 = 10U;
	int8_t x610 = INT8_MIN;
	int32_t t152 = 13922;

    t152 = ((x609>(x610>x611))|x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x613 = UINT64_MAX;
	int64_t x615 = 41150231135786065LL;
	static volatile int16_t x616 = INT16_MIN;
	int32_t t153 = -861;

    t153 = ((x613>(x614>x615))|x616);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MIN;
	volatile int64_t x618 = -1LL;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t t154 = 248;

    t154 = ((x617>(x618>x619))|x620);

    if (t154 != 16) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -572LL;
	static int16_t x622 = -499;
	static int8_t x623 = INT8_MAX;
	uint8_t x624 = 11U;
	int32_t t155 = 55446;

    t155 = ((x621>(x622>x623))|x624);

    if (t155 != 11) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = UINT16_MAX;
	static volatile uint16_t x627 = 869U;
	volatile uint32_t t156 = UINT32_MAX;

    t156 = ((x625>(x626>x627))|x628);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1089;
	uint64_t x630 = UINT64_MAX;
	static uint64_t x632 = 33282202232LLU;
	static uint64_t t157 = 4080481782543039840LLU;

    t157 = ((x629>(x630>x631))|x632);

    if (t157 != 33282202232LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 0U;
	int64_t x634 = 0LL;
	int32_t x636 = -1;
	static int32_t t158 = -1301561;

    t158 = ((x633>(x634>x635))|x636);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1U;
	static volatile int32_t x638 = 1381;
	volatile int16_t x639 = -14261;
	int16_t x640 = 4507;
	int32_t t159 = 31601;

    t159 = ((x637>(x638>x639))|x640);

    if (t159 != 4507) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = 3627985451587LLU;
	static int32_t x642 = 3536;
	int64_t x643 = 1696739553556LL;
	uint64_t x644 = 4152930LLU;
	static uint64_t t160 = 4497734735564249LLU;

    t160 = ((x641>(x642>x643))|x644);

    if (t160 != 4152931LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x646 = UINT8_MAX;
	int32_t x647 = -233113396;
	static int16_t x648 = -9;
	volatile int32_t t161 = 322166;

    t161 = ((x645>(x646>x647))|x648);

    if (t161 != -9) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = 0;
	volatile uint8_t x650 = 41U;
	volatile int8_t x651 = INT8_MIN;
	uint64_t x652 = UINT64_MAX;
	uint64_t t162 = UINT64_MAX;

    t162 = ((x649>(x650>x651))|x652);

    if (t162 != UINT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = -1;
	volatile uint8_t x655 = 23U;
	static uint8_t x656 = 74U;
	static int32_t t163 = 504739456;

    t163 = ((x653>(x654>x655))|x656);

    if (t163 != 74) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x660 = 4U;
	volatile int32_t t164 = 57268820;

    t164 = ((x657>(x658>x659))|x660);

    if (t164 != 5) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 23U;
	int32_t x664 = -11;
	static int32_t t165 = 4196714;

    t165 = ((x661>(x662>x663))|x664);

    if (t165 != -11) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x666 = 1921U;
	uint16_t x668 = 7U;

    t166 = ((x665>(x666>x667))|x668);

    if (t166 != 7) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	static int16_t x670 = -137;
	int16_t x671 = 195;
	static volatile int32_t t167 = -23019;

    t167 = ((x669>(x670>x671))|x672);

    if (t167 != -3) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x673 = 31208208609259851LL;
	static int8_t x674 = -53;
	static volatile int32_t x675 = -1;
	static volatile int8_t x676 = -1;
	int32_t t168 = 17;

    t168 = ((x673>(x674>x675))|x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	uint16_t x678 = UINT16_MAX;
	int32_t t169 = 7724815;

    t169 = ((x677>(x678>x679))|x680);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x683 = -994738932069843881LL;
	uint32_t x684 = 15003821U;
	uint32_t t170 = 527707U;

    t170 = ((x681>(x682>x683))|x684);

    if (t170 != 15003821U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 3LLU;
	volatile int16_t x686 = 210;
	int8_t x687 = INT8_MIN;
	int64_t x688 = 185LL;
	volatile int64_t t171 = 469046LL;

    t171 = ((x685>(x686>x687))|x688);

    if (t171 != 185LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x689 = UINT64_MAX;
	uint64_t x690 = 161LLU;
	int32_t x691 = -1;
	static int32_t t172 = -3220;

    t172 = ((x689>(x690>x691))|x692);

    if (t172 != 26751) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x693 = 13U;
	static uint16_t x694 = 1U;
	static int32_t x695 = INT32_MIN;
	volatile int64_t t173 = INT64_MAX;

    t173 = ((x693>(x694>x695))|x696);

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = -1;
	volatile int64_t x698 = -1LL;
	int8_t x699 = -1;
	int32_t x700 = INT32_MAX;
	int32_t t174 = INT32_MAX;

    t174 = ((x697>(x698>x699))|x700);

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = UINT16_MAX;
	volatile uint32_t x703 = UINT32_MAX;
	int32_t t175 = 6745836;

    t175 = ((x701>(x702>x703))|x704);

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x705 = 461785728LLU;
	int32_t x706 = INT32_MIN;
	static int16_t x707 = INT16_MAX;
	static int64_t x708 = INT64_MIN;

    t176 = ((x705>(x706>x707))|x708);

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x711 = 3707043575381453LLU;
	int32_t x712 = INT32_MIN;
	int32_t t177 = 48542;

    t177 = ((x709>(x710>x711))|x712);

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 11;
	volatile int16_t x714 = INT16_MIN;
	static int32_t x715 = -1;
	uint32_t x716 = 55080769U;
	volatile uint32_t t178 = 1919U;

    t178 = ((x713>(x714>x715))|x716);

    if (t178 != 55080769U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	int64_t x718 = INT64_MAX;

    t179 = ((x717>(x718>x719))|x720);

    if (t179 != 90153U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = INT16_MAX;
	int8_t x723 = -2;
	static int16_t x724 = INT16_MIN;
	volatile int32_t t180 = -6;

    t180 = ((x721>(x722>x723))|x724);

    if (t180 != -32768) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = 250052793LL;
	uint64_t x726 = 291LLU;
	static uint16_t x727 = UINT16_MAX;
	static int64_t x728 = 14LL;
	int64_t t181 = 22149699607475897LL;

    t181 = ((x725>(x726>x727))|x728);

    if (t181 != 15LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	volatile uint32_t x731 = UINT32_MAX;
	static int8_t x732 = INT8_MIN;
	volatile int32_t t182 = -38017;

    t182 = ((x729>(x730>x731))|x732);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	static volatile int16_t x734 = -1;
	int64_t x735 = -25844075LL;
	static uint16_t x736 = 411U;
	int32_t t183 = 76952;

    t183 = ((x733>(x734>x735))|x736);

    if (t183 != 411) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x740 = 346;
	static volatile int32_t t184 = 1259;

    t184 = ((x737>(x738>x739))|x740);

    if (t184 != 347) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int64_t x742 = 136624950004LL;
	static int16_t x743 = -1;
	int8_t x744 = -38;
	volatile int32_t t185 = 214006946;

    t185 = ((x741>(x742>x743))|x744);

    if (t185 != -38) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	volatile uint64_t x746 = UINT64_MAX;
	uint8_t x747 = 3U;
	static volatile int64_t x748 = INT64_MIN;
	volatile int64_t t186 = INT64_MIN;

    t186 = ((x745>(x746>x747))|x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x749 = -2;
	int64_t x751 = -2106300LL;
	int8_t x752 = INT8_MAX;
	volatile int32_t t187 = -1014194411;

    t187 = ((x749>(x750>x751))|x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	static uint32_t x754 = UINT32_MAX;
	int32_t x755 = INT32_MIN;
	volatile int64_t x756 = -5908014LL;
	volatile int64_t t188 = 33434923461361LL;

    t188 = ((x753>(x754>x755))|x756);

    if (t188 != -5908014LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int32_t x758 = -8353521;
	uint64_t x759 = 1345974948645918LLU;
	int16_t x760 = -1;
	int32_t t189 = -44;

    t189 = ((x757>(x758>x759))|x760);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = INT64_MIN;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MAX;
	volatile int64_t t190 = INT64_MAX;

    t190 = ((x761>(x762>x763))|x764);

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MAX;
	uint16_t x766 = UINT16_MAX;
	int8_t x767 = INT8_MAX;
	volatile int32_t t191 = 394761;

    t191 = ((x765>(x766>x767))|x768);

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MIN;
	uint8_t x770 = 85U;
	int32_t x771 = -1;

    t192 = ((x769>(x770>x771))|x772);

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = -1;
	int16_t x774 = INT16_MIN;
	static volatile uint32_t x775 = UINT32_MAX;
	static volatile int32_t x776 = 45441715;
	volatile int32_t t193 = -1;

    t193 = ((x773>(x774>x775))|x776);

    if (t193 != 45441715) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x778 = -59;
	volatile uint16_t x779 = 23745U;
	static int64_t x780 = INT64_MIN;
	volatile int64_t t194 = -1448039LL;

    t194 = ((x777>(x778>x779))|x780);

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = UINT8_MAX;
	uint16_t x782 = UINT16_MAX;
	static uint8_t x783 = UINT8_MAX;
	int8_t x784 = INT8_MAX;
	static volatile int32_t t195 = -68919;

    t195 = ((x781>(x782>x783))|x784);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x786 = INT8_MAX;
	int8_t x788 = 14;
	int32_t t196 = -214999;

    t196 = ((x785>(x786>x787))|x788);

    if (t196 != 15) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x790 = -1LL;
	int64_t x791 = -3402405567LL;
	int8_t x792 = -1;
	int32_t t197 = 347317628;

    t197 = ((x789>(x790>x791))|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	int16_t x795 = INT16_MIN;
	uint16_t x796 = 7U;

    t198 = ((x793>(x794>x795))|x796);

    if (t198 != 7) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -3;
	int8_t x798 = -1;
	static int8_t x799 = INT8_MIN;
	int16_t x800 = -1;
	static volatile int32_t t199 = 0;

    t199 = ((x797>(x798>x799))|x800);

    if (t199 != -1) { NG(); } else { ; }
	
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

