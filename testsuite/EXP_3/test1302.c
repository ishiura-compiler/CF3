
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

static int32_t x4 = INT32_MAX;
volatile int64_t x10 = -1437206LL;
int32_t x13 = INT32_MIN;
int64_t x14 = INT64_MIN;
volatile int8_t x16 = 0;
static int16_t x19 = INT16_MIN;
int16_t x29 = INT16_MIN;
int8_t x40 = 1;
volatile int32_t x47 = INT32_MIN;
int32_t t12 = 199;
volatile int16_t x58 = -1;
int16_t x59 = INT16_MAX;
int32_t t14 = 1;
int8_t x63 = INT8_MIN;
volatile int32_t t15 = 30329;
int32_t t19 = -1182717;
int32_t t20 = -2;
static uint16_t x92 = 4U;
static volatile int32_t x94 = 657286;
int64_t x101 = -1LL;
volatile int16_t x102 = 12;
int8_t x107 = INT8_MIN;
volatile int32_t t29 = 73;
int16_t x122 = 3191;
int32_t x124 = 34450;
uint16_t x136 = 340U;
int64_t x139 = -4478LL;
volatile int8_t x140 = -1;
uint64_t x148 = 676167701218525417LLU;
uint16_t x153 = UINT16_MAX;
int16_t x154 = INT16_MAX;
int32_t t39 = 1;
volatile uint32_t x162 = 110738169U;
uint8_t x166 = 104U;
static volatile int32_t t41 = -1;
volatile int8_t x170 = 1;
int32_t x172 = 528;
uint64_t x173 = 7060670366670476711LLU;
int8_t x174 = 5;
volatile int32_t t43 = -1;
int8_t x182 = INT8_MAX;
volatile int64_t x184 = -6142097575LL;
volatile uint32_t x186 = 3625141U;
static uint64_t x190 = 3LLU;
volatile uint8_t x193 = UINT8_MAX;
int8_t x196 = -14;
volatile int64_t x198 = INT64_MIN;
volatile int16_t x208 = INT16_MIN;
uint32_t x216 = UINT32_MAX;
static int32_t t54 = -4;
volatile int32_t x221 = -8375;
int32_t t55 = -12990324;
int32_t x225 = INT32_MIN;
uint8_t x226 = 43U;
volatile int32_t t56 = -12;
static int16_t x232 = -70;
volatile int32_t t59 = -114132;
int32_t t60 = -3964;
static volatile int32_t x248 = INT32_MAX;
int8_t x250 = INT8_MAX;
uint16_t x251 = 31303U;
volatile uint64_t x252 = 12676LLU;
int16_t x253 = -1;
volatile int32_t x254 = 66235;
static int32_t x258 = -1;
volatile int32_t t64 = 0;
int64_t x267 = INT64_MAX;
static volatile int32_t t67 = 976769992;
int32_t t70 = -1373494;
volatile int8_t x287 = -3;
int64_t x289 = -1LL;
static uint8_t x291 = 6U;
volatile int32_t t72 = -15939;
int16_t x303 = 344;
int8_t x310 = -1;
static volatile int32_t t78 = 152038905;
int32_t x349 = -69;
static int8_t x353 = 2;
static int64_t x354 = INT64_MAX;
int32_t t89 = 14612468;
int32_t x373 = INT32_MIN;
volatile int32_t t93 = -3165;
int32_t x378 = 49;
int64_t x379 = INT64_MAX;
static volatile int32_t t94 = -434;
volatile int64_t x388 = INT64_MIN;
uint8_t x389 = 26U;
volatile int32_t t98 = 3096;
uint32_t x399 = 41U;
static int64_t x404 = -67000598808LL;
int16_t x410 = INT16_MIN;
volatile int64_t x413 = -1LL;
uint16_t x414 = 10299U;
static int64_t x416 = 5531213985980LL;
volatile int16_t x422 = -1;
uint8_t x424 = 0U;
uint8_t x428 = UINT8_MAX;
static volatile int32_t t106 = 5794540;
volatile int16_t x432 = INT16_MAX;
int16_t x433 = 55;
volatile int16_t x435 = -1;
int32_t x448 = -1;
int32_t t111 = 1652;
uint8_t x458 = 2U;
int32_t x460 = INT32_MAX;
uint8_t x462 = 20U;
uint8_t x475 = 6U;
static int32_t t118 = 40666213;
int32_t t121 = 14;
int32_t x489 = -1;
int32_t t122 = -1901;
int32_t t123 = -7;
int16_t x497 = 901;
int16_t x498 = -1;
uint32_t x501 = 24639U;
int64_t x504 = INT64_MIN;
volatile int16_t x505 = INT16_MAX;
uint32_t x506 = 598702995U;
volatile uint32_t x511 = UINT32_MAX;
static int64_t x514 = -1LL;
uint8_t x528 = 122U;
uint8_t x529 = UINT8_MAX;
int8_t x533 = -1;
volatile int32_t x542 = 13;
static int32_t x543 = INT32_MAX;
volatile uint64_t x568 = UINT64_MAX;
int32_t t142 = -3472;
static volatile int64_t x573 = -17581133935340422LL;
uint16_t x576 = 613U;
uint16_t x582 = 31U;
int32_t x598 = -1;
volatile int32_t t150 = -154288356;
int8_t x608 = 9;
volatile int64_t x609 = INT64_MAX;
int32_t x610 = -1;
uint64_t x614 = 12759963LLU;
int64_t x621 = INT64_MIN;
volatile int64_t x629 = INT64_MIN;
volatile uint8_t x636 = UINT8_MAX;
uint16_t x641 = 0U;
uint32_t x652 = 656759U;
static uint64_t x653 = UINT64_MAX;
int32_t t163 = -3;
uint16_t x660 = 14639U;
int16_t x668 = -1;
uint8_t x669 = 40U;
int64_t x675 = 243159508LL;
static int16_t x680 = -32;
uint8_t x694 = 11U;
volatile int32_t t174 = 16;
static int64_t x705 = INT64_MIN;
int8_t x706 = -2;
uint32_t x708 = UINT32_MAX;
static int32_t t176 = -7;
static volatile int16_t x710 = -3;
int32_t t177 = 271283;
int32_t x718 = 78205765;
int32_t t180 = -264;
int8_t x725 = INT8_MIN;
int32_t x728 = INT32_MAX;
uint32_t x735 = UINT32_MAX;
volatile int8_t x738 = INT8_MIN;
uint8_t x748 = 63U;
static volatile int32_t t186 = 56290080;
static int64_t x751 = INT64_MIN;
volatile int8_t x757 = -31;
uint64_t x758 = 1070856662540446099LLU;
static int8_t x761 = -2;
int32_t t192 = -63;
static uint8_t x773 = 17U;
int64_t x776 = INT64_MIN;
int16_t x779 = INT16_MAX;
volatile int16_t x785 = -1;
volatile int64_t x788 = INT64_MIN;
static int64_t x796 = 1LL;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int32_t t0 = 2083709;

    t0 = ((x1>x2)^(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -306428811;
	volatile uint8_t x6 = 110U;
	int32_t x7 = -1;
	static int32_t x8 = 25;
	int32_t t1 = 14;

    t1 = ((x5>x6)^(x7!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x11 = 132036LL;
	volatile uint32_t x12 = UINT32_MAX;
	int32_t t2 = 1;

    t2 = ((x9>x10)^(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x15 = UINT64_MAX;
	static volatile int32_t t3 = 183207;

    t3 = ((x13>x14)^(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint32_t x17 = UINT32_MAX;
	uint32_t x18 = UINT32_MAX;
	uint32_t x20 = 630U;
	int32_t t4 = -1;

    t4 = ((x17>x18)^(x19!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	static int8_t x23 = -1;
	volatile int16_t x24 = -307;
	int32_t t5 = -138184;

    t5 = ((x21>x22)^(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	static int8_t x26 = -43;
	static uint16_t x27 = 15U;
	static volatile int64_t x28 = INT64_MIN;
	int32_t t6 = -466;

    t6 = ((x25>x26)^(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x30 = -1;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 211977U;
	static volatile int32_t t7 = -365064;

    t7 = ((x29>x30)^(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile uint64_t x34 = UINT64_MAX;
	int8_t x35 = 1;
	int32_t x36 = -8563;
	volatile int32_t t8 = -2;

    t8 = ((x33>x34)^(x35!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int8_t x38 = 1;
	uint32_t x39 = 1158U;
	volatile int32_t t9 = 4108721;

    t9 = ((x37>x38)^(x39!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile int8_t x42 = INT8_MIN;
	static uint64_t x43 = UINT64_MAX;
	volatile int8_t x44 = -1;
	volatile int32_t t10 = 944961;

    t10 = ((x41>x42)^(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	uint32_t x46 = 15833213U;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -131;

    t11 = ((x45>x46)^(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 1U;
	volatile int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MAX;
	volatile uint8_t x52 = 1U;

    t12 = ((x49>x50)^(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = -1;
	uint8_t x54 = 4U;
	int8_t x55 = -1;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -12160885;

    t13 = ((x53>x54)^(x55!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 14U;
	static int16_t x60 = INT16_MIN;

    t14 = ((x57>x58)^(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 6;
	int64_t x62 = 2LL;
	int64_t x64 = INT64_MIN;

    t15 = ((x61>x62)^(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint8_t x66 = 1U;
	uint64_t x67 = 482505008088LLU;
	volatile int64_t x68 = -1LL;
	static volatile int32_t t16 = -515198103;

    t16 = ((x65>x66)^(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = 2190;
	static uint64_t x72 = 31LLU;
	static volatile int32_t t17 = -256847;

    t17 = ((x69>x70)^(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -13513464014338LL;
	static uint8_t x74 = 70U;
	static uint32_t x75 = UINT32_MAX;
	uint32_t x76 = 18U;
	static int32_t t18 = 1542;

    t18 = ((x73>x74)^(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 932499LLU;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = -1LL;

    t19 = ((x77>x78)^(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = -1;
	static int64_t x82 = 17425253900788LL;
	static int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;

    t20 = ((x81>x82)^(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x86 = -1;
	static int8_t x87 = INT8_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	int32_t t21 = 1;

    t21 = ((x85>x86)^(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = INT8_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	int32_t t22 = -11;

    t22 = ((x89>x90)^(x91!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int8_t x95 = -1;
	static int8_t x96 = INT8_MAX;
	int32_t t23 = 0;

    t23 = ((x93>x94)^(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	uint8_t x99 = 6U;
	static int16_t x100 = INT16_MIN;
	static volatile int32_t t24 = -1;

    t24 = ((x97>x98)^(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = 4697U;
	uint32_t x104 = 921U;
	static volatile int32_t t25 = 1;

    t25 = ((x101>x102)^(x103!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 103U;
	uint16_t x106 = 5876U;
	int16_t x108 = -14;
	int32_t t26 = 0;

    t26 = ((x105>x106)^(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -12605891LL;
	volatile uint8_t x110 = 67U;
	static int16_t x111 = 1;
	volatile int32_t x112 = -1;
	int32_t t27 = -448808043;

    t27 = ((x109>x110)^(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	static volatile uint64_t x115 = 16996069685LLU;
	static uint16_t x116 = 256U;
	volatile int32_t t28 = -3556351;

    t28 = ((x113>x114)^(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 51LL;
	int64_t x118 = INT64_MAX;
	static int32_t x119 = -1;
	int64_t x120 = INT64_MIN;

    t29 = ((x117>x118)^(x119!=x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	static int16_t x123 = INT16_MAX;
	volatile int32_t t30 = 2969;

    t30 = ((x121>x122)^(x123!=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1014U;
	uint8_t x126 = 64U;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -244491129;

    t31 = ((x125>x126)^(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MIN;
	static int64_t x130 = 1577770268674LL;
	uint32_t x131 = 39180U;
	int32_t x132 = -2546705;
	volatile int32_t t32 = -7;

    t32 = ((x129>x130)^(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 3139U;
	uint8_t x134 = 51U;
	uint64_t x135 = 28649LLU;
	int32_t t33 = 187;

    t33 = ((x133>x134)^(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = -512009339;
	uint32_t x138 = 15U;
	static int32_t t34 = -30840;

    t34 = ((x137>x138)^(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	volatile int64_t x142 = 3544423LL;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = 1LL;
	volatile int32_t t35 = -524412;

    t35 = ((x141>x142)^(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	static volatile int64_t x146 = 23236LL;
	static int16_t x147 = -1;
	static volatile int32_t t36 = 1;

    t36 = ((x145>x146)^(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 6U;
	static int32_t x150 = -1;
	volatile int64_t x151 = INT64_MIN;
	volatile uint8_t x152 = 4U;
	int32_t t37 = -582038;

    t37 = ((x149>x150)^(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x155 = INT32_MIN;
	volatile int64_t x156 = -1LL;
	volatile int32_t t38 = 248;

    t38 = ((x153>x154)^(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	int16_t x158 = INT16_MIN;
	int16_t x159 = -137;
	uint32_t x160 = UINT32_MAX;

    t39 = ((x157>x158)^(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -65;
	volatile int64_t x163 = -1LL;
	volatile uint64_t x164 = 0LLU;
	int32_t t40 = 2;

    t40 = ((x161>x162)^(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	int16_t x167 = INT16_MAX;
	volatile int64_t x168 = 291611797405338LL;

    t41 = ((x165>x166)^(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x169 = 418232LLU;
	volatile int64_t x171 = INT64_MAX;
	static int32_t t42 = -21189099;

    t42 = ((x169>x170)^(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x175 = UINT8_MAX;
	volatile int16_t x176 = INT16_MIN;

    t43 = ((x173>x174)^(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -6318;
	volatile uint64_t x178 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -3318208;

    t44 = ((x177>x178)^(x179!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 21817912U;
	int64_t x183 = INT64_MAX;
	int32_t t45 = -508;

    t45 = ((x181>x182)^(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x185 = UINT8_MAX;
	int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = 64027;

    t46 = ((x185>x186)^(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	static uint32_t x191 = 904784452U;
	int8_t x192 = INT8_MIN;
	int32_t t47 = 7;

    t47 = ((x189>x190)^(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x194 = -6;
	int64_t x195 = INT64_MIN;
	volatile int32_t t48 = -101948;

    t48 = ((x193>x194)^(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int8_t x199 = INT8_MAX;
	static int32_t x200 = -1;
	volatile int32_t t49 = -38;

    t49 = ((x197>x198)^(x199!=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	int16_t x202 = INT16_MIN;
	int32_t x203 = -10;
	static volatile int32_t x204 = 15858;
	volatile int32_t t50 = -24;

    t50 = ((x201>x202)^(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x205 = 55U;
	static int64_t x206 = 206LL;
	volatile int32_t x207 = 1743420;
	volatile int32_t t51 = 1482;

    t51 = ((x205>x206)^(x207!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -1;
	volatile uint16_t x210 = 91U;
	volatile int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	static int32_t t52 = -22557299;

    t52 = ((x209>x210)^(x211!=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 638;
	volatile uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 30398U;
	int32_t t53 = -462587933;

    t53 = ((x213>x214)^(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 1U;
	static int32_t x218 = -884;
	static volatile int16_t x219 = -706;
	uint16_t x220 = 4U;

    t54 = ((x217>x218)^(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x222 = 4911331U;
	int64_t x223 = -1LL;
	uint64_t x224 = UINT64_MAX;

    t55 = ((x221>x222)^(x223!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x227 = INT64_MAX;
	volatile uint16_t x228 = UINT16_MAX;

    t56 = ((x225>x226)^(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	int8_t x230 = -1;
	uint16_t x231 = 949U;
	volatile int32_t t57 = 20;

    t57 = ((x229>x230)^(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = -1;
	int32_t x234 = 127452;
	uint32_t x235 = UINT32_MAX;
	static int16_t x236 = -1987;
	int32_t t58 = 315288;

    t58 = ((x233>x234)^(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	static int16_t x238 = INT16_MAX;
	volatile int32_t x239 = INT32_MAX;
	int8_t x240 = 8;

    t59 = ((x237>x238)^(x239!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	volatile uint32_t x242 = 2U;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = 17391042556345LLU;

    t60 = ((x241>x242)^(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -13823;
	int16_t x246 = INT16_MIN;
	volatile uint64_t x247 = 6204199LLU;
	volatile int32_t t61 = 1;

    t61 = ((x245>x246)^(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	volatile int32_t t62 = -12965;

    t62 = ((x249>x250)^(x251!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MAX;
	volatile int32_t t63 = 13676900;

    t63 = ((x253>x254)^(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = UINT16_MAX;
	int8_t x259 = -40;
	int32_t x260 = INT32_MAX;

    t64 = ((x257>x258)^(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MAX;
	volatile uint32_t x262 = 268707U;
	volatile uint32_t x263 = 32083U;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = 218438;

    t65 = ((x261>x262)^(x263!=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MAX;
	static uint32_t x268 = 945U;
	volatile int32_t t66 = 95479;

    t66 = ((x265>x266)^(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	static uint8_t x270 = UINT8_MAX;
	static int32_t x271 = INT32_MAX;
	volatile uint8_t x272 = 0U;

    t67 = ((x269>x270)^(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = INT32_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t68 = 13066475;

    t68 = ((x273>x274)^(x275!=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -9;
	int64_t x278 = INT64_MAX;
	volatile int8_t x279 = INT8_MIN;
	uint32_t x280 = 48745147U;
	volatile int32_t t69 = 46450745;

    t69 = ((x277>x278)^(x279!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -53195863;
	volatile uint16_t x282 = 8155U;
	uint32_t x283 = 3U;
	static int8_t x284 = 0;

    t70 = ((x281>x282)^(x283!=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MAX;
	uint8_t x286 = UINT8_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 417;

    t71 = ((x285>x286)^(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x290 = 21201653520463683LLU;
	int8_t x292 = INT8_MIN;

    t72 = ((x289>x290)^(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	volatile int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	static int64_t x296 = -1LL;
	static int32_t t73 = 189;

    t73 = ((x293>x294)^(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	uint16_t x298 = 11211U;
	uint32_t x299 = UINT32_MAX;
	uint16_t x300 = 162U;
	static volatile int32_t t74 = -1;

    t74 = ((x297>x298)^(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	volatile uint32_t x304 = 140664505U;
	int32_t t75 = 1;

    t75 = ((x301>x302)^(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -20LL;
	int64_t x306 = -195528006214190400LL;
	int8_t x307 = INT8_MIN;
	uint32_t x308 = 877016665U;
	int32_t t76 = -101;

    t76 = ((x305>x306)^(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x309 = 5U;
	int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 605;

    t77 = ((x309>x310)^(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	uint64_t x314 = 40206054045349309LLU;
	uint8_t x315 = 3U;
	volatile int32_t x316 = 65029275;

    t78 = ((x313>x314)^(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 0U;
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MAX;
	volatile int64_t x320 = -1LL;
	int32_t t79 = -27;

    t79 = ((x317>x318)^(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 21800U;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 109821U;
	int64_t x324 = 27114LL;
	volatile int32_t t80 = -96;

    t80 = ((x321>x322)^(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MAX;
	static volatile uint32_t x326 = UINT32_MAX;
	volatile int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	int32_t t81 = -183986180;

    t81 = ((x325>x326)^(x327!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MAX;
	volatile int8_t x330 = INT8_MAX;
	volatile int16_t x331 = INT16_MIN;
	static int8_t x332 = -2;
	volatile int32_t t82 = -50142438;

    t82 = ((x329>x330)^(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	int8_t x334 = -1;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = INT16_MIN;
	static int32_t t83 = 65584128;

    t83 = ((x333>x334)^(x335!=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x337 = 32884052U;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = 31U;
	int8_t x340 = 3;
	int32_t t84 = -251429;

    t84 = ((x337>x338)^(x339!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	volatile int8_t x342 = 1;
	uint32_t x343 = 89U;
	uint16_t x344 = 278U;
	int32_t t85 = 0;

    t85 = ((x341>x342)^(x343!=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	uint16_t x346 = 1U;
	static uint32_t x347 = 836933U;
	int32_t x348 = INT32_MIN;
	static int32_t t86 = 144;

    t86 = ((x345>x346)^(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = 251899273008LL;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 4385;

    t87 = ((x349>x350)^(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x355 = 36410300299991LLU;
	volatile uint64_t x356 = UINT64_MAX;
	int32_t t88 = 55440;

    t88 = ((x353>x354)^(x355!=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x357 = 95U;
	int16_t x358 = 0;
	int64_t x359 = -89138224691LL;
	int16_t x360 = INT16_MIN;

    t89 = ((x357>x358)^(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	static int32_t t90 = 1;

    t90 = ((x361>x362)^(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = 34U;
	volatile int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = -955918;

    t91 = ((x365>x366)^(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint16_t x370 = 2U;
	volatile int8_t x371 = -1;
	int16_t x372 = 90;
	volatile int32_t t92 = 325;

    t92 = ((x369>x370)^(x371!=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x374 = 69741802904404924LLU;
	int64_t x375 = 0LL;
	int8_t x376 = INT8_MAX;

    t93 = ((x373>x374)^(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 773909939;
	int8_t x380 = INT8_MIN;

    t94 = ((x377>x378)^(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -91;
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -54763501;

    t95 = ((x381>x382)^(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 1;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = UINT16_MAX;
	int32_t t96 = 75933606;

    t96 = ((x385>x386)^(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x390 = 1U;
	uint16_t x391 = 14U;
	static uint8_t x392 = UINT8_MAX;
	int32_t t97 = 21097121;

    t97 = ((x389>x390)^(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 720442248312LLU;
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MAX;

    t98 = ((x393>x394)^(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x397 = 4770;
	int32_t x398 = -1;
	volatile int64_t x400 = INT64_MIN;
	int32_t t99 = 49792074;

    t99 = ((x397>x398)^(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	uint32_t x402 = 14824574U;
	uint8_t x403 = UINT8_MAX;
	static volatile int32_t t100 = 18279;

    t100 = ((x401>x402)^(x403!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int16_t x405 = 1;
	int64_t x406 = INT64_MIN;
	static int32_t x407 = INT32_MIN;
	uint16_t x408 = UINT16_MAX;
	int32_t t101 = 323;

    t101 = ((x405>x406)^(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 77U;
	int32_t x411 = -1058871516;
	static volatile uint32_t x412 = 1561U;
	static int32_t t102 = 3279574;

    t102 = ((x409>x410)^(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x415 = INT32_MIN;
	volatile int32_t t103 = -532993008;

    t103 = ((x413>x414)^(x415!=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	static uint16_t x418 = UINT16_MAX;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 27U;
	int32_t t104 = 0;

    t104 = ((x417>x418)^(x419!=x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = 4997285893LL;
	int64_t x423 = INT64_MIN;
	int32_t t105 = -213770523;

    t105 = ((x421>x422)^(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 9;
	int64_t x426 = -919777LL;
	int16_t x427 = -4985;

    t106 = ((x425>x426)^(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	volatile int32_t x430 = -170190303;
	static uint32_t x431 = 416463068U;
	static int32_t t107 = 198859;

    t107 = ((x429>x430)^(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -1;
	uint8_t x436 = 14U;
	int32_t t108 = 10137;

    t108 = ((x433>x434)^(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x437 = UINT32_MAX;
	static volatile int16_t x438 = -26;
	int64_t x439 = INT64_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 323;

    t109 = ((x437>x438)^(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 1U;
	uint16_t x442 = 7U;
	int64_t x443 = INT64_MIN;
	uint32_t x444 = 978674U;
	int32_t t110 = -7;

    t110 = ((x441>x442)^(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -4;
	static int8_t x446 = INT8_MAX;
	uint64_t x447 = 89LLU;

    t111 = ((x445>x446)^(x447!=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = 3456;
	volatile int64_t x450 = -1LL;
	static volatile int16_t x451 = -2;
	int32_t x452 = INT32_MIN;
	int32_t t112 = -79;

    t112 = ((x449>x450)^(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 87265LLU;
	volatile int32_t x454 = 5214540;
	volatile uint8_t x455 = UINT8_MAX;
	static int8_t x456 = INT8_MAX;
	static volatile int32_t t113 = 9568;

    t113 = ((x453>x454)^(x455!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = -309295575094LL;
	uint16_t x459 = 39U;
	volatile int32_t t114 = 0;

    t114 = ((x457>x458)^(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 9301484LLU;
	uint16_t x463 = 856U;
	uint8_t x464 = 0U;
	int32_t t115 = 22297613;

    t115 = ((x461>x462)^(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 40U;
	int16_t x466 = INT16_MIN;
	static int32_t x467 = -370884;
	uint64_t x468 = 14498858641LLU;
	volatile int32_t t116 = -1;

    t116 = ((x465>x466)^(x467!=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	uint32_t x470 = UINT32_MAX;
	uint8_t x471 = 2U;
	uint64_t x472 = 507LLU;
	static int32_t t117 = -434088;

    t117 = ((x469>x470)^(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x473 = 95U;
	uint8_t x474 = UINT8_MAX;
	static volatile uint32_t x476 = 51U;

    t118 = ((x473>x474)^(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int16_t x478 = 23;
	int16_t x479 = 4631;
	uint16_t x480 = 7U;
	static volatile int32_t t119 = -70184901;

    t119 = ((x477>x478)^(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 30U;
	static uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	int16_t x484 = INT16_MIN;
	int32_t t120 = 493008;

    t120 = ((x481>x482)^(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x485 = INT64_MIN;
	uint32_t x486 = 1U;
	int64_t x487 = 3657774132727018018LL;
	static int16_t x488 = INT16_MIN;

    t121 = ((x485>x486)^(x487!=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = INT64_MAX;
	uint32_t x491 = 58461389U;
	static uint64_t x492 = 13343704360070LLU;

    t122 = ((x489>x490)^(x491!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	volatile uint32_t x494 = UINT32_MAX;
	int32_t x495 = 217;
	static uint16_t x496 = UINT16_MAX;

    t123 = ((x493>x494)^(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x499 = INT32_MAX;
	volatile int8_t x500 = INT8_MIN;
	static volatile int32_t t124 = 125;

    t124 = ((x497>x498)^(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x502 = 23U;
	volatile int16_t x503 = -8;
	volatile int32_t t125 = -23;

    t125 = ((x501>x502)^(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x507 = INT32_MIN;
	int8_t x508 = -1;
	int32_t t126 = -1994;

    t126 = ((x505>x506)^(x507!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x509 = UINT16_MAX;
	volatile int8_t x510 = 1;
	volatile int64_t x512 = 7885LL;
	int32_t t127 = 185908;

    t127 = ((x509>x510)^(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -5576373024LL;
	int8_t x515 = INT8_MAX;
	volatile uint16_t x516 = 7U;
	volatile int32_t t128 = -2277242;

    t128 = ((x513>x514)^(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = INT8_MIN;
	int32_t x518 = 25370;
	uint8_t x519 = 16U;
	int8_t x520 = INT8_MIN;
	int32_t t129 = 340;

    t129 = ((x517>x518)^(x519!=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x521 = UINT64_MAX;
	volatile uint16_t x522 = 3U;
	int64_t x523 = -1LL;
	static int8_t x524 = INT8_MIN;
	int32_t t130 = -495526097;

    t130 = ((x521>x522)^(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MAX;
	uint64_t x526 = 7483300276849LLU;
	int8_t x527 = INT8_MIN;
	int32_t t131 = -5;

    t131 = ((x525>x526)^(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x530 = 58201LLU;
	int8_t x531 = INT8_MAX;
	uint64_t x532 = 52LLU;
	volatile int32_t t132 = 3;

    t132 = ((x529>x530)^(x531!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x534 = INT8_MIN;
	uint8_t x535 = UINT8_MAX;
	int16_t x536 = -3329;
	volatile int32_t t133 = 4;

    t133 = ((x533>x534)^(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	uint8_t x538 = UINT8_MAX;
	int16_t x539 = INT16_MAX;
	int64_t x540 = INT64_MAX;
	int32_t t134 = 78345;

    t134 = ((x537>x538)^(x539!=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x541 = UINT64_MAX;
	volatile int32_t x544 = INT32_MAX;
	volatile int32_t t135 = -54213368;

    t135 = ((x541>x542)^(x543!=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = INT8_MAX;
	static int8_t x546 = -1;
	volatile int8_t x547 = INT8_MAX;
	int64_t x548 = INT64_MIN;
	int32_t t136 = 13;

    t136 = ((x545>x546)^(x547!=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	static int16_t x550 = INT16_MAX;
	static int64_t x551 = INT64_MAX;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t137 = -20;

    t137 = ((x549>x550)^(x551!=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	static uint32_t x555 = 14121703U;
	int32_t x556 = -150698;
	volatile int32_t t138 = 11;

    t138 = ((x553>x554)^(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	int8_t x558 = 3;
	static uint64_t x559 = 24386607311409LLU;
	int32_t x560 = 3;
	int32_t t139 = 112;

    t139 = ((x557>x558)^(x559!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1958;
	volatile int8_t x562 = INT8_MIN;
	uint16_t x563 = UINT16_MAX;
	volatile uint64_t x564 = 874937LLU;
	volatile int32_t t140 = 19648648;

    t140 = ((x561>x562)^(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x565 = 3860460384982458755LLU;
	static volatile int64_t x566 = INT64_MAX;
	int8_t x567 = 14;
	static volatile int32_t t141 = -1;

    t141 = ((x565>x566)^(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = 275U;
	int64_t x572 = -1125569503908957039LL;

    t142 = ((x569>x570)^(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = -1LL;
	uint16_t x575 = 0U;
	int32_t t143 = 179;

    t143 = ((x573>x574)^(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MIN;
	int32_t x578 = INT32_MIN;
	static int64_t x579 = -380LL;
	int16_t x580 = INT16_MIN;
	volatile int32_t t144 = -768;

    t144 = ((x577>x578)^(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = 20;
	uint64_t x583 = 51830652LLU;
	static volatile uint8_t x584 = UINT8_MAX;
	volatile int32_t t145 = 8;

    t145 = ((x581>x582)^(x583!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 0;
	int16_t x586 = -1;
	int32_t x587 = -1;
	static int16_t x588 = INT16_MIN;
	int32_t t146 = 318030;

    t146 = ((x585>x586)^(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = UINT32_MAX;
	static volatile int64_t x590 = INT64_MAX;
	uint32_t x591 = 211107860U;
	int8_t x592 = 5;
	int32_t t147 = 100502145;

    t147 = ((x589>x590)^(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	volatile int64_t x594 = INT64_MIN;
	static int32_t x595 = -167348;
	int16_t x596 = INT16_MAX;
	static int32_t t148 = -2227;

    t148 = ((x593>x594)^(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	static int32_t x599 = -1;
	int64_t x600 = INT64_MIN;
	int32_t t149 = 3;

    t149 = ((x597>x598)^(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = INT16_MIN;
	int32_t x602 = INT32_MAX;
	int8_t x603 = 61;
	static volatile int16_t x604 = -905;

    t150 = ((x601>x602)^(x603!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile uint64_t x606 = 887330692433LLU;
	volatile uint64_t x607 = 2086016923494LLU;
	int32_t t151 = 2089617;

    t151 = ((x605>x606)^(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x611 = INT32_MIN;
	int8_t x612 = 1;
	int32_t t152 = -687;

    t152 = ((x609>x610)^(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MAX;
	int64_t x615 = 51062981190303012LL;
	static int16_t x616 = -1;
	int32_t t153 = 449;

    t153 = ((x613>x614)^(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int32_t x618 = INT32_MIN;
	int32_t x619 = INT32_MIN;
	int64_t x620 = -61224192246LL;
	int32_t t154 = 4;

    t154 = ((x617>x618)^(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x622 = -5;
	uint8_t x623 = 12U;
	static int16_t x624 = INT16_MIN;
	volatile int32_t t155 = -397242;

    t155 = ((x621>x622)^(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	static int16_t x626 = INT16_MIN;
	volatile int32_t x627 = 67695;
	int32_t x628 = INT32_MIN;
	volatile int32_t t156 = 22;

    t156 = ((x625>x626)^(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = 6766169;
	uint32_t x631 = UINT32_MAX;
	int8_t x632 = INT8_MIN;
	volatile int32_t t157 = 0;

    t157 = ((x629>x630)^(x631!=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -11;
	int32_t x634 = INT32_MIN;
	int64_t x635 = 14377506LL;
	int32_t t158 = 147503;

    t158 = ((x633>x634)^(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x637 = INT32_MAX;
	uint8_t x638 = UINT8_MAX;
	uint64_t x639 = UINT64_MAX;
	int64_t x640 = INT64_MIN;
	volatile int32_t t159 = -9129326;

    t159 = ((x637>x638)^(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = 1U;
	int64_t x643 = INT64_MAX;
	int16_t x644 = INT16_MAX;
	volatile int32_t t160 = 383790341;

    t160 = ((x641>x642)^(x643!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x645 = 1U;
	static uint64_t x646 = UINT64_MAX;
	volatile uint32_t x647 = 3U;
	int16_t x648 = INT16_MIN;
	static int32_t t161 = 10416859;

    t161 = ((x645>x646)^(x647!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x649 = 4381536350LLU;
	uint32_t x650 = UINT32_MAX;
	int8_t x651 = -1;
	static int32_t t162 = 98592133;

    t162 = ((x649>x650)^(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = INT8_MIN;
	int8_t x655 = -6;
	int32_t x656 = INT32_MAX;

    t163 = ((x653>x654)^(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = UINT32_MAX;
	int32_t x658 = -1;
	uint16_t x659 = UINT16_MAX;
	volatile int32_t t164 = 1852551;

    t164 = ((x657>x658)^(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	uint32_t x662 = 26701245U;
	int8_t x663 = INT8_MAX;
	static volatile uint8_t x664 = 121U;
	int32_t t165 = -87061;

    t165 = ((x661>x662)^(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	uint64_t x666 = UINT64_MAX;
	int8_t x667 = INT8_MIN;
	volatile int32_t t166 = 29017852;

    t166 = ((x665>x666)^(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = -1;
	int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MIN;
	static int32_t t167 = 15;

    t167 = ((x669>x670)^(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x673 = -1;
	int64_t x674 = -6LL;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -7281;

    t168 = ((x673>x674)^(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = 117U;
	volatile int16_t x678 = -5;
	uint8_t x679 = 61U;
	int32_t t169 = -6994;

    t169 = ((x677>x678)^(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	static int32_t x682 = -1;
	static int64_t x683 = INT64_MIN;
	int32_t x684 = -1;
	int32_t t170 = -20965;

    t170 = ((x681>x682)^(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 9U;
	int16_t x686 = 0;
	int32_t x687 = 1425;
	static int16_t x688 = INT16_MAX;
	int32_t t171 = -313856445;

    t171 = ((x685>x686)^(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x689 = -108;
	static uint32_t x690 = 83U;
	int16_t x691 = INT16_MIN;
	static int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = -21;

    t172 = ((x689>x690)^(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x693 = UINT16_MAX;
	int8_t x695 = -1;
	int64_t x696 = -1LL;
	volatile int32_t t173 = -51788888;

    t173 = ((x693>x694)^(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	volatile int8_t x698 = 0;
	int16_t x699 = -1742;
	int16_t x700 = INT16_MIN;

    t174 = ((x697>x698)^(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 3732LL;
	static int16_t x702 = INT16_MIN;
	uint16_t x703 = 29089U;
	volatile int32_t x704 = -1;
	volatile int32_t t175 = -198401;

    t175 = ((x701>x702)^(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x707 = INT8_MIN;

    t176 = ((x705>x706)^(x707!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = INT8_MIN;
	static int8_t x711 = INT8_MIN;
	uint16_t x712 = 26158U;

    t177 = ((x709>x710)^(x711!=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 133519246565033751LLU;
	int64_t x714 = INT64_MIN;
	uint32_t x715 = 9845382U;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -65105;

    t178 = ((x713>x714)^(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 40;
	uint8_t x719 = UINT8_MAX;
	int16_t x720 = -1;
	volatile int32_t t179 = 2375292;

    t179 = ((x717>x718)^(x719!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = 0;
	int64_t x722 = INT64_MIN;
	volatile int8_t x723 = INT8_MIN;
	int32_t x724 = INT32_MIN;

    t180 = ((x721>x722)^(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x726 = UINT32_MAX;
	int8_t x727 = INT8_MIN;
	int32_t t181 = -57199970;

    t181 = ((x725>x726)^(x727!=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x730 = UINT64_MAX;
	volatile uint64_t x731 = 7855282LLU;
	int8_t x732 = -37;
	static int32_t t182 = -4070;

    t182 = ((x729>x730)^(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x733 = 59369212392LLU;
	uint8_t x734 = 15U;
	volatile int8_t x736 = INT8_MIN;
	int32_t t183 = -4733;

    t183 = ((x733>x734)^(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MIN;
	volatile int16_t x739 = -1;
	uint32_t x740 = 253748807U;
	volatile int32_t t184 = 147;

    t184 = ((x737>x738)^(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	int32_t x742 = INT32_MIN;
	static int8_t x743 = INT8_MAX;
	uint64_t x744 = UINT64_MAX;
	int32_t t185 = 33274009;

    t185 = ((x741>x742)^(x743!=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x745 = INT16_MIN;
	int8_t x746 = 2;
	int16_t x747 = INT16_MIN;

    t186 = ((x745>x746)^(x747!=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint8_t x749 = 1U;
	static int64_t x750 = INT64_MIN;
	uint64_t x752 = 10503LLU;
	int32_t t187 = -5760612;

    t187 = ((x749>x750)^(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 42U;
	static int8_t x754 = INT8_MIN;
	volatile int64_t x755 = 29683607759783796LL;
	int32_t x756 = 49019716;
	int32_t t188 = 680963529;

    t188 = ((x753>x754)^(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x759 = UINT16_MAX;
	int16_t x760 = INT16_MIN;
	volatile int32_t t189 = -193617675;

    t189 = ((x757>x758)^(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = 77U;
	int8_t x763 = INT8_MAX;
	uint16_t x764 = 3902U;
	volatile int32_t t190 = 29236609;

    t190 = ((x761>x762)^(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 63U;
	static int16_t x766 = INT16_MIN;
	volatile int8_t x767 = -1;
	static int16_t x768 = INT16_MAX;
	volatile int32_t t191 = 974583;

    t191 = ((x765>x766)^(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x769 = UINT32_MAX;
	int32_t x770 = INT32_MIN;
	int64_t x771 = 31921877866LL;
	int16_t x772 = INT16_MAX;

    t192 = ((x769>x770)^(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x774 = INT8_MAX;
	int16_t x775 = INT16_MIN;
	int32_t t193 = 353906088;

    t193 = ((x773>x774)^(x775!=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MAX;
	uint16_t x778 = UINT16_MAX;
	volatile int64_t x780 = -36LL;
	volatile int32_t t194 = -6962;

    t194 = ((x777>x778)^(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = 7323LL;
	static volatile uint8_t x783 = 117U;
	static uint64_t x784 = 40660932883LLU;
	volatile int32_t t195 = 1;

    t195 = ((x781>x782)^(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x786 = 81U;
	int8_t x787 = INT8_MIN;
	int32_t t196 = -47841678;

    t196 = ((x785>x786)^(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = -1;
	int64_t x790 = INT64_MIN;
	uint64_t x791 = UINT64_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t197 = -27765;

    t197 = ((x789>x790)^(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	int8_t x794 = 1;
	int16_t x795 = 18;
	volatile int32_t t198 = -5586365;

    t198 = ((x793>x794)^(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = INT64_MIN;
	volatile uint16_t x798 = UINT16_MAX;
	int16_t x799 = INT16_MIN;
	volatile int16_t x800 = -1;
	int32_t t199 = -13943093;

    t199 = ((x797>x798)^(x799!=x800));

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

