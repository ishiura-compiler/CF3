
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

int16_t x2 = INT16_MIN;
uint8_t x4 = 2U;
int64_t x6 = INT64_MAX;
static volatile uint32_t t3 = UINT32_MAX;
int32_t x18 = INT32_MAX;
int64_t t4 = INT64_MIN;
volatile int32_t x22 = 993;
int16_t x27 = INT16_MAX;
int32_t x36 = -1;
volatile int16_t x38 = INT16_MIN;
volatile uint16_t x39 = UINT16_MAX;
int32_t t9 = 13499986;
static volatile uint32_t t10 = 14U;
volatile int16_t x47 = 7603;
int8_t x48 = -1;
static volatile int32_t t14 = -2;
uint64_t x67 = 2287460LLU;
int8_t x76 = INT8_MIN;
static uint8_t x77 = 4U;
volatile uint8_t x85 = UINT8_MAX;
static uint32_t x91 = UINT32_MAX;
int32_t x99 = INT32_MIN;
uint32_t t24 = UINT32_MAX;
volatile uint32_t x107 = UINT32_MAX;
static volatile uint8_t x108 = 37U;
static volatile int32_t t26 = -6380639;
volatile int64_t x114 = -1LL;
int16_t x117 = INT16_MAX;
uint8_t x122 = UINT8_MAX;
volatile int32_t t33 = 5891;
int16_t x153 = INT16_MIN;
int8_t x156 = INT8_MIN;
int64_t x157 = -1LL;
uint16_t x158 = 405U;
uint32_t x164 = 1U;
volatile int32_t t41 = 109;
volatile int64_t t42 = -413560685970LL;
int32_t t43 = 2018473;
static volatile int32_t x180 = INT32_MIN;
volatile int32_t t45 = -110956;
int32_t x190 = INT32_MIN;
volatile uint16_t x192 = UINT16_MAX;
volatile int32_t t48 = -3828019;
int16_t x201 = INT16_MIN;
volatile int16_t x208 = INT16_MAX;
uint64_t x210 = 501988841537945LLU;
uint64_t t52 = 26628027153LLU;
int32_t t53 = 54;
int32_t x219 = INT32_MIN;
int16_t x223 = -1;
int16_t x230 = INT16_MIN;
int8_t x234 = 25;
int64_t x241 = -1LL;
int64_t x244 = 46212368LL;
static int16_t x248 = -390;
int8_t x254 = INT8_MIN;
uint8_t x256 = 47U;
volatile int32_t t63 = 61726;
int32_t x257 = 46;
int32_t t64 = 495771;
int64_t x262 = -1LL;
int16_t x263 = INT16_MAX;
int32_t x264 = -1;
int16_t x266 = 0;
int32_t t66 = INT32_MAX;
static uint64_t x281 = UINT64_MAX;
int32_t x283 = -1;
int32_t t70 = -202455359;
int8_t x288 = -1;
int64_t x289 = -1LL;
int16_t x291 = -3;
uint64_t x295 = UINT64_MAX;
int64_t x302 = -1LL;
int8_t x308 = INT8_MIN;
uint64_t x316 = UINT64_MAX;
int64_t t79 = INT64_MIN;
uint16_t x322 = 0U;
static uint8_t x324 = UINT8_MAX;
uint16_t x329 = 5U;
static uint64_t x342 = 98707461LLU;
int32_t t85 = 7335;
int8_t x350 = INT8_MAX;
int8_t x364 = INT8_MIN;
int32_t t90 = 883;
uint64_t x369 = 3LLU;
volatile int32_t t94 = 274;
uint64_t x385 = UINT64_MAX;
uint8_t x390 = 0U;
int32_t t98 = -7;
int64_t x397 = -11769882170269LL;
uint32_t x398 = 4U;
uint8_t x407 = 11U;
volatile uint32_t x408 = 1817322U;
int16_t x414 = 0;
volatile uint32_t x416 = 76U;
static int64_t x417 = -1014460LL;
uint32_t x418 = 27U;
uint8_t x423 = 0U;
volatile int32_t x428 = -1;
int64_t x431 = INT64_MIN;
static volatile int16_t x442 = -1;
static uint16_t x452 = UINT16_MAX;
volatile int32_t t113 = 0;
static int64_t x457 = INT64_MIN;
int32_t t115 = 209553994;
volatile int64_t t118 = -120387975305601LL;
int8_t x477 = INT8_MIN;
static int16_t x478 = -1;
volatile int32_t x486 = INT32_MIN;
static int64_t x488 = -826LL;
volatile int64_t t121 = 13387LL;
uint64_t x491 = UINT64_MAX;
uint32_t x492 = UINT32_MAX;
volatile int32_t t124 = INT32_MIN;
static uint64_t x501 = 6072188168091LLU;
volatile int16_t x506 = INT16_MIN;
uint16_t x508 = 116U;
int32_t x509 = INT32_MAX;
int32_t x516 = 31890;
uint16_t x517 = 2U;
volatile uint8_t x518 = 11U;
static int32_t t129 = -13;
int32_t x533 = -1087;
volatile uint64_t x535 = 167373885509LLU;
int16_t x538 = -46;
volatile int64_t x545 = -2759110325LL;
int64_t x548 = INT64_MAX;
int32_t x550 = INT32_MIN;
static int32_t x552 = INT32_MIN;
int32_t x575 = -1;
volatile int32_t x594 = -1;
volatile int8_t x598 = -1;
uint16_t x603 = 3026U;
volatile int32_t t150 = 0;
static int64_t x607 = -1455464LL;
uint8_t x620 = 1U;
int32_t x621 = -1;
int16_t x626 = -1;
int8_t x627 = 3;
static int64_t t156 = INT64_MAX;
uint32_t x632 = 29U;
volatile int8_t x634 = -40;
int32_t x638 = -1;
static int64_t x640 = -1612194072LL;
uint8_t x641 = UINT8_MAX;
uint64_t x646 = UINT64_MAX;
int32_t t162 = -810189;
static volatile int64_t x662 = 3006290230LL;
uint16_t x665 = 326U;
volatile uint64_t t166 = 2338LLU;
volatile int32_t t167 = 687;
volatile int8_t x673 = -5;
static volatile int32_t t168 = 16537;
uint16_t x680 = 7U;
static int32_t t169 = 17;
static volatile uint16_t x689 = UINT16_MAX;
static int64_t t175 = 50959767657638LL;
uint64_t t177 = UINT64_MAX;
uint16_t x714 = 0U;
volatile uint8_t x720 = UINT8_MAX;
volatile int32_t t179 = 3;
int32_t x723 = INT32_MIN;
static int16_t x728 = 1651;
int8_t x730 = INT8_MAX;
static uint16_t x731 = UINT16_MAX;
int32_t t184 = -32561895;
volatile int64_t x743 = 1290392LL;
volatile uint32_t x747 = 1271U;
volatile int64_t t186 = 3740441337604LL;
int64_t x752 = INT64_MIN;
int32_t x760 = INT32_MIN;
static int8_t x765 = -1;
int32_t t191 = -18;
static uint16_t x770 = 29620U;
int64_t t195 = -298071097463LL;
int16_t x785 = -1;
volatile uint64_t x795 = UINT64_MAX;
static int64_t x797 = -1LL;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int32_t t0 = -29;

    t0 = ((x1<=(x2!=x3))|x4);

    if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x7 = 5308543132LLU;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = INT32_MAX;

    t1 = ((x5<=(x6!=x7))|x8);

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	int64_t x10 = 32989256659710595LL;
	uint8_t x11 = 24U;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = -169710;

    t2 = ((x9<=(x10!=x11))|x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int64_t x15 = -1LL;
	static uint32_t x16 = UINT32_MAX;

    t3 = ((x13<=(x14!=x15))|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 15782491890984735LLU;
	volatile int16_t x19 = INT16_MAX;
	static int64_t x20 = INT64_MIN;

    t4 = ((x17<=(x18!=x19))|x20);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int32_t x23 = 3064;
	static int64_t x24 = -1LL;
	static volatile int64_t t5 = -815656425456936969LL;

    t5 = ((x21<=(x22!=x23))|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = -827595;
	static int64_t x26 = -1LL;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -41374324;

    t6 = ((x25<=(x26!=x27))|x28);

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MAX;
	int16_t x30 = 0;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 4U;
	static int32_t t7 = 2;

    t7 = ((x29<=(x30!=x31))|x32);

    if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = 1096265136U;
	volatile int32_t t8 = -4845531;

    t8 = ((x33<=(x34!=x35))|x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 8768037818043155LLU;
	int8_t x40 = 1;

    t9 = ((x37<=(x38!=x39))|x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int32_t x42 = INT32_MIN;
	static int64_t x43 = INT64_MAX;
	uint32_t x44 = 66704602U;

    t10 = ((x41<=(x42!=x43))|x44);

    if (t10 != 66704603U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static volatile int32_t x46 = -51152183;
	int32_t t11 = -955753480;

    t11 = ((x45<=(x46!=x47))|x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 2857U;
	uint32_t x50 = 246937U;
	int64_t x51 = -455175464946700320LL;
	static int8_t x52 = -1;
	volatile int32_t t12 = -2208937;

    t12 = ((x49<=(x50!=x51))|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	uint64_t x54 = 8083795769918049LLU;
	static uint64_t x55 = 79089LLU;
	static int64_t x56 = INT64_MIN;
	static int64_t t13 = 83691LL;

    t13 = ((x53<=(x54!=x55))|x56);

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1LL;
	uint16_t x58 = 0U;
	uint32_t x59 = 197U;
	static uint16_t x60 = 52U;

    t14 = ((x57<=(x58!=x59))|x60);

    if (t14 != 53) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = 0;
	int32_t x62 = INT32_MAX;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 41;

    t15 = ((x61<=(x62!=x63))|x64);

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 3U;
	int32_t x66 = -77629;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 5;

    t16 = ((x65<=(x66!=x67))|x68);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static volatile int16_t x70 = INT16_MIN;
	static uint16_t x71 = 166U;
	uint16_t x72 = 7444U;
	int32_t t17 = -411188168;

    t17 = ((x69<=(x70!=x71))|x72);

    if (t17 != 7445) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	static int64_t x74 = -4124977280039864LL;
	int16_t x75 = INT16_MAX;
	int32_t t18 = 486111167;

    t18 = ((x73<=(x74!=x75))|x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	static int64_t x80 = INT64_MIN;
	volatile int64_t t19 = INT64_MIN;

    t19 = ((x77<=(x78!=x79))|x80);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x81 = INT32_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	static uint64_t x83 = 3989226454123LLU;
	int64_t x84 = -52116870596995LL;
	int64_t t20 = 2369266LL;

    t20 = ((x81<=(x82!=x83))|x84);

    if (t20 != -52116870596995LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = -1;
	uint64_t x87 = 260255548038197012LLU;
	static volatile uint16_t x88 = 0U;
	volatile int32_t t21 = 1418092;

    t21 = ((x85<=(x86!=x87))|x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -52;
	uint16_t x90 = 259U;
	static int16_t x92 = INT16_MIN;
	static int32_t t22 = -4603943;

    t22 = ((x89<=(x90!=x91))|x92);

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = 0U;
	uint8_t x94 = 34U;
	uint8_t x95 = 6U;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = -6458478910LL;

    t23 = ((x93<=(x94!=x95))|x96);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	uint32_t x100 = UINT32_MAX;

    t24 = ((x97<=(x98!=x99))|x100);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MAX;
	volatile int64_t x102 = 1845215592873327863LL;
	int64_t x103 = 1061631723LL;
	static uint32_t x104 = UINT32_MAX;
	uint32_t t25 = UINT32_MAX;

    t25 = ((x101<=(x102!=x103))|x104);

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 1U;
	volatile int8_t x106 = 3;

    t26 = ((x105<=(x106!=x107))|x108);

    if (t26 != 37) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x109 = 97U;
	int16_t x110 = -1;
	int32_t x111 = INT32_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	uint64_t t27 = UINT64_MAX;

    t27 = ((x109<=(x110!=x111))|x112);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	static volatile int32_t t28 = 1;

    t28 = ((x113<=(x114!=x115))|x116);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x118 = -29;
	int16_t x119 = 7511;
	volatile int32_t x120 = INT32_MAX;
	volatile int32_t t29 = INT32_MAX;

    t29 = ((x117<=(x118!=x119))|x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x123 = 309756691529LLU;
	volatile uint64_t x124 = 17172036LLU;
	volatile uint64_t t30 = 91131773LLU;

    t30 = ((x121<=(x122!=x123))|x124);

    if (t30 != 17172037LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 0;
	int8_t x126 = INT8_MAX;
	volatile uint8_t x127 = 1U;
	static uint16_t x128 = UINT16_MAX;
	static volatile int32_t t31 = -968861;

    t31 = ((x125<=(x126!=x127))|x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = UINT16_MAX;
	static int16_t x130 = INT16_MIN;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = 42;
	volatile int32_t t32 = -80;

    t32 = ((x129<=(x130!=x131))|x132);

    if (t32 != 42) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 67529U;
	static int64_t x134 = INT64_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	int16_t x136 = -1;

    t33 = ((x133<=(x134!=x135))|x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static volatile int32_t x138 = INT32_MAX;
	uint64_t x139 = UINT64_MAX;
	static uint64_t x140 = UINT64_MAX;
	static uint64_t t34 = UINT64_MAX;

    t34 = ((x137<=(x138!=x139))|x140);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	uint8_t x142 = 11U;
	int32_t x143 = -1;
	int32_t x144 = -47875719;
	int32_t t35 = 933343849;

    t35 = ((x141<=(x142!=x143))|x144);

    if (t35 != -47875719) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 2U;
	uint16_t x146 = 74U;
	static uint16_t x147 = 13U;
	uint8_t x148 = 92U;
	volatile int32_t t36 = -64;

    t36 = ((x145<=(x146!=x147))|x148);

    if (t36 != 92) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 8798U;
	volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = -3;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t37 = UINT32_MAX;

    t37 = ((x149<=(x150!=x151))|x152);

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = -2940311;
	int16_t x155 = INT16_MIN;
	int32_t t38 = -3199332;

    t38 = ((x153<=(x154!=x155))|x156);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x159 = INT16_MIN;
	uint32_t x160 = 29927U;
	uint32_t t39 = 1391945U;

    t39 = ((x157<=(x158!=x159))|x160);

    if (t39 != 29927U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int16_t x162 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	static volatile uint32_t t40 = 268U;

    t40 = ((x161<=(x162!=x163))|x164);

    if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;

    t41 = ((x165<=(x166!=x167))|x168);

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = -31;
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = -10836LL;

    t42 = ((x169<=(x170!=x171))|x172);

    if (t42 != -10835LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint64_t x174 = 12041350397282LLU;
	uint8_t x175 = 76U;
	volatile uint16_t x176 = 38U;

    t43 = ((x173<=(x174!=x175))|x176);

    if (t43 != 38) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x177 = 55U;
	int32_t x178 = INT32_MIN;
	int64_t x179 = 666540LL;
	volatile int32_t t44 = INT32_MIN;

    t44 = ((x177<=(x178!=x179))|x180);

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = -1;
	int32_t x182 = -966909650;
	int8_t x183 = 13;
	int16_t x184 = INT16_MAX;

    t45 = ((x181<=(x182!=x183))|x184);

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -4771197;
	static volatile int64_t x186 = -2439855935311611611LL;
	volatile int64_t x187 = INT64_MIN;
	static uint8_t x188 = 71U;
	int32_t t46 = -12868;

    t46 = ((x185<=(x186!=x187))|x188);

    if (t46 != 71) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 268615686804LLU;
	volatile int16_t x191 = INT16_MIN;
	int32_t t47 = 6;

    t47 = ((x189<=(x190!=x191))|x192);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 1;
	int32_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	int32_t x196 = INT32_MIN;

    t48 = ((x193<=(x194!=x195))|x196);

    if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = 1119U;
	int16_t x198 = INT16_MAX;
	volatile int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -362603665;

    t49 = ((x197<=(x198!=x199))|x200);

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = -1LL;
	int64_t x203 = -309121579344830061LL;
	int64_t x204 = INT64_MIN;
	volatile int64_t t50 = -209439265254919LL;

    t50 = ((x201<=(x202!=x203))|x204);

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x205 = 1U;
	static volatile int64_t x206 = -25971571LL;
	volatile int16_t x207 = INT16_MIN;
	volatile int32_t t51 = 614;

    t51 = ((x205<=(x206!=x207))|x208);

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	static volatile uint8_t x211 = 12U;
	uint64_t x212 = 361771471851LLU;

    t52 = ((x209<=(x210!=x211))|x212);

    if (t52 != 361771471851LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	uint16_t x214 = 15808U;
	volatile int64_t x215 = INT64_MIN;
	int32_t x216 = -1;

    t53 = ((x213<=(x214!=x215))|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 705396077U;
	uint8_t x218 = 1U;
	static volatile uint64_t x220 = 1561621134376005348LLU;
	uint64_t t54 = 5LLU;

    t54 = ((x217<=(x218!=x219))|x220);

    if (t54 != 1561621134376005348LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	int64_t x224 = INT64_MIN;
	int64_t t55 = 7432608769044LL;

    t55 = ((x221<=(x222!=x223))|x224);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	static volatile int8_t x226 = -59;
	static volatile int64_t x227 = 55868151LL;
	int16_t x228 = -1;
	int32_t t56 = 752292;

    t56 = ((x225<=(x226!=x227))|x228);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	int16_t x231 = INT16_MIN;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t57 = -12;

    t57 = ((x229<=(x230!=x231))|x232);

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 4556495U;
	static uint8_t x235 = UINT8_MAX;
	int16_t x236 = -1;
	volatile int32_t t58 = 224424355;

    t58 = ((x233<=(x234!=x235))|x236);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x237 = UINT32_MAX;
	static int32_t x238 = INT32_MIN;
	static int16_t x239 = -13;
	int8_t x240 = INT8_MAX;
	int32_t t59 = -12640;

    t59 = ((x237<=(x238!=x239))|x240);

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x242 = -123163190354843556LL;
	static int8_t x243 = -1;
	volatile int64_t t60 = -109LL;

    t60 = ((x241<=(x242!=x243))|x244);

    if (t60 != 46212369LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 6345177918496LL;
	uint16_t x246 = 220U;
	int32_t x247 = -1786;
	volatile int32_t t61 = 167300600;

    t61 = ((x245<=(x246!=x247))|x248);

    if (t61 != -390) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = 2320U;
	int64_t x250 = -1498LL;
	volatile int64_t x251 = 1276448LL;
	volatile int8_t x252 = -1;
	volatile int32_t t62 = 461089440;

    t62 = ((x249<=(x250!=x251))|x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 26814U;
	int8_t x255 = INT8_MIN;

    t63 = ((x253<=(x254!=x255))|x256);

    if (t63 != 47) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MAX;
	int16_t x260 = -14;

    t64 = ((x257<=(x258!=x259))|x260);

    if (t64 != -14) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = 65LL;
	static volatile int32_t t65 = -33537923;

    t65 = ((x261<=(x262!=x263))|x264);

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MAX;

    t66 = ((x265<=(x266!=x267))|x268);

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	uint64_t x270 = 8286205788925101760LLU;
	uint8_t x271 = 95U;
	uint64_t x272 = 28291LLU;
	static volatile uint64_t t67 = 25242LLU;

    t67 = ((x269<=(x270!=x271))|x272);

    if (t67 != 28291LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 0U;
	volatile int32_t x274 = INT32_MIN;
	static int16_t x275 = 142;
	uint64_t x276 = UINT64_MAX;
	uint64_t t68 = UINT64_MAX;

    t68 = ((x273<=(x274!=x275))|x276);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 83LL;
	static int8_t x278 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t69 = INT32_MIN;

    t69 = ((x277<=(x278!=x279))|x280);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x282 = 10;
	int16_t x284 = -1;

    t70 = ((x281<=(x282!=x283))|x284);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 0;
	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = -1;
	volatile int32_t t71 = -15378;

    t71 = ((x285<=(x286!=x287))|x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MIN;
	int64_t x292 = -1LL;
	volatile int64_t t72 = -32319847285LL;

    t72 = ((x289<=(x290!=x291))|x292);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = -1LL;
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = -1LL;
	int64_t t73 = -2786935LL;

    t73 = ((x293<=(x294!=x295))|x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = 49397;
	int8_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = 1419;

    t74 = ((x297<=(x298!=x299))|x300);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x301 = 0;
	uint8_t x303 = 5U;
	int16_t x304 = 9;
	int32_t t75 = 8;

    t75 = ((x301<=(x302!=x303))|x304);

    if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MIN;
	static int16_t x307 = -1;
	int32_t t76 = -14211836;

    t76 = ((x305<=(x306!=x307))|x308);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MIN;
	static int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = 57;

    t77 = ((x309<=(x310!=x311))|x312);

    if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	volatile uint8_t x314 = 0U;
	int64_t x315 = 3072917LL;
	uint64_t t78 = UINT64_MAX;

    t78 = ((x313<=(x314!=x315))|x316);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x317 = UINT64_MAX;
	uint8_t x318 = 23U;
	uint16_t x319 = 4U;
	int64_t x320 = INT64_MIN;

    t79 = ((x317<=(x318!=x319))|x320);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	int32_t t80 = -35695239;

    t80 = ((x321<=(x322!=x323))|x324);

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = INT8_MIN;
	volatile uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t81 = 0;

    t81 = ((x325<=(x326!=x327))|x328);

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x330 = INT64_MIN;
	static int8_t x331 = INT8_MIN;
	static int16_t x332 = INT16_MIN;
	int32_t t82 = 3713;

    t82 = ((x329<=(x330!=x331))|x332);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MIN;
	uint64_t x334 = 208068110697009LLU;
	volatile int32_t x335 = 1;
	static volatile int64_t x336 = -12858807045178LL;
	static int64_t t83 = 17401883LL;

    t83 = ((x333<=(x334!=x335))|x336);

    if (t83 != -12858807045177LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = 0;
	int16_t x340 = 0;
	volatile int32_t t84 = -12429080;

    t84 = ((x337<=(x338!=x339))|x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 229527698U;
	int8_t x343 = -1;
	int16_t x344 = INT16_MAX;

    t85 = ((x341<=(x342!=x343))|x344);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -2;

    t86 = ((x345<=(x346!=x347))|x348);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	uint64_t x351 = 0LLU;
	int64_t x352 = -14276135759755402LL;
	int64_t t87 = -61628806442783700LL;

    t87 = ((x349<=(x350!=x351))|x352);

    if (t87 != -14276135759755401LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = UINT16_MAX;
	int8_t x354 = -4;
	int32_t x355 = INT32_MIN;
	int16_t x356 = -3422;
	volatile int32_t t88 = 18941122;

    t88 = ((x353<=(x354!=x355))|x356);

    if (t88 != -3422) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint16_t x358 = 205U;
	uint64_t x359 = 17386LLU;
	static int8_t x360 = INT8_MIN;
	int32_t t89 = 64366;

    t89 = ((x357<=(x358!=x359))|x360);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	uint8_t x363 = 90U;

    t90 = ((x361<=(x362!=x363))|x364);

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	static uint32_t x367 = UINT32_MAX;
	uint8_t x368 = 62U;
	volatile int32_t t91 = -835;

    t91 = ((x365<=(x366!=x367))|x368);

    if (t91 != 63) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x370 = 5956794910LLU;
	int64_t x371 = INT64_MAX;
	volatile int8_t x372 = INT8_MIN;
	int32_t t92 = 136818;

    t92 = ((x369<=(x370!=x371))|x372);

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -6;
	int16_t x374 = INT16_MIN;
	static volatile int32_t x375 = INT32_MIN;
	int64_t x376 = -1LL;
	static volatile int64_t t93 = 1756LL;

    t93 = ((x373<=(x374!=x375))|x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 1U;
	int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	volatile int8_t x380 = INT8_MIN;

    t94 = ((x377<=(x378!=x379))|x380);

    if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x382 = -1;
	uint32_t x383 = 57U;
	uint8_t x384 = 83U;
	int32_t t95 = -44;

    t95 = ((x381<=(x382!=x383))|x384);

    if (t95 != 83) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = 11222LL;
	int32_t x387 = INT32_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = -32570883;

    t96 = ((x385<=(x386!=x387))|x388);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -188LL;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 28010754;

    t97 = ((x389<=(x390!=x391))|x392);

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -710761;
	int8_t x394 = 11;
	volatile int8_t x395 = -1;
	int16_t x396 = INT16_MIN;

    t98 = ((x393<=(x394!=x395))|x396);

    if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x399 = -10;
	uint8_t x400 = 14U;
	static volatile int32_t t99 = 3375316;

    t99 = ((x397<=(x398!=x399))|x400);

    if (t99 != 15) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x401 = UINT32_MAX;
	static int8_t x402 = INT8_MIN;
	int64_t x403 = 44LL;
	uint32_t x404 = UINT32_MAX;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = ((x401<=(x402!=x403))|x404);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 118U;
	volatile int8_t x406 = INT8_MIN;
	uint32_t t101 = 6329182U;

    t101 = ((x405<=(x406!=x407))|x408);

    if (t101 != 1817322U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MAX;
	volatile uint8_t x411 = 1U;
	int64_t x412 = INT64_MAX;
	static volatile int64_t t102 = INT64_MAX;

    t102 = ((x409<=(x410!=x411))|x412);

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	uint64_t x415 = 1086106337518LLU;
	volatile uint32_t t103 = 417U;

    t103 = ((x413<=(x414!=x415))|x416);

    if (t103 != 76U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x419 = INT8_MIN;
	int8_t x420 = -1;
	int32_t t104 = -52530;

    t104 = ((x417<=(x418!=x419))|x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	uint64_t x422 = 245056LLU;
	volatile int16_t x424 = -60;
	volatile int32_t t105 = 1648;

    t105 = ((x421<=(x422!=x423))|x424);

    if (t105 != -60) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 12U;
	int8_t x426 = 1;
	uint64_t x427 = 179924740960618LLU;
	volatile int32_t t106 = -26;

    t106 = ((x425<=(x426!=x427))|x428);

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	int64_t x430 = -1LL;
	uint32_t x432 = 1U;
	volatile uint32_t t107 = 23080U;

    t107 = ((x429<=(x430!=x431))|x432);

    if (t107 != 1U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x433 = 206LLU;
	int32_t x434 = INT32_MAX;
	int64_t x435 = -44355088350213585LL;
	int32_t x436 = INT32_MAX;
	volatile int32_t t108 = INT32_MAX;

    t108 = ((x433<=(x434!=x435))|x436);

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = 1;
	static int64_t x438 = -1LL;
	int32_t x439 = INT32_MIN;
	uint64_t x440 = 37223LLU;
	static uint64_t t109 = 75725934379LLU;

    t109 = ((x437<=(x438!=x439))|x440);

    if (t109 != 37223LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	uint64_t x443 = 7895444266108251156LLU;
	uint32_t x444 = 6U;
	uint32_t t110 = 171556447U;

    t110 = ((x441<=(x442!=x443))|x444);

    if (t110 != 6U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 121735579203LLU;
	static uint16_t x446 = UINT16_MAX;
	static volatile int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	static int32_t t111 = 3;

    t111 = ((x445<=(x446!=x447))|x448);

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	uint32_t x450 = 2U;
	int16_t x451 = -1;
	static int32_t t112 = -27331;

    t112 = ((x449<=(x450!=x451))|x452);

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = 4;
	int32_t x454 = INT32_MAX;
	uint64_t x455 = 6305LLU;
	volatile uint16_t x456 = UINT16_MAX;

    t113 = ((x453<=(x454!=x455))|x456);

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = INT32_MIN;
	int16_t x459 = -17;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t114 = -969;

    t114 = ((x457<=(x458!=x459))|x460);

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = -1;
	int16_t x462 = INT16_MIN;
	static int8_t x463 = 12;
	volatile uint8_t x464 = UINT8_MAX;

    t115 = ((x461<=(x462!=x463))|x464);

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -235;
	volatile uint8_t x466 = 2U;
	int64_t x467 = INT64_MAX;
	volatile int32_t x468 = INT32_MIN;
	volatile int32_t t116 = -197573;

    t116 = ((x465<=(x466!=x467))|x468);

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	int32_t x470 = INT32_MIN;
	int64_t x471 = 86942171043835LL;
	volatile uint32_t x472 = 104U;
	volatile uint32_t t117 = 3677884U;

    t117 = ((x469<=(x470!=x471))|x472);

    if (t117 != 104U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = UINT8_MAX;
	static volatile int32_t x474 = INT32_MIN;
	volatile int16_t x475 = INT16_MIN;
	volatile int64_t x476 = 3174589LL;

    t118 = ((x473<=(x474!=x475))|x476);

    if (t118 != 3174589LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x479 = -613383438864109912LL;
	uint16_t x480 = 23162U;
	volatile int32_t t119 = -6961;

    t119 = ((x477<=(x478!=x479))|x480);

    if (t119 != 23163) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = -1;
	volatile int16_t x482 = -1;
	int32_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t120 = 151;

    t120 = ((x481<=(x482!=x483))|x484);

    if (t120 != -127) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	static uint16_t x487 = 1U;

    t121 = ((x485<=(x486!=x487))|x488);

    if (t121 != -825LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int64_t x490 = -7103150189LL;
	uint32_t t122 = UINT32_MAX;

    t122 = ((x489<=(x490!=x491))|x492);

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -7504472;
	int32_t x494 = 49;
	volatile int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = INT64_MIN;
	static int64_t t123 = -1036688708899769104LL;

    t123 = ((x493<=(x494!=x495))|x496);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 202711332LLU;
	int16_t x498 = -1;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;

    t124 = ((x497<=(x498!=x499))|x500);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x502 = 2;
	int64_t x503 = INT64_MAX;
	uint64_t x504 = 455606287048838LLU;
	uint64_t t125 = 33682LLU;

    t125 = ((x501<=(x502!=x503))|x504);

    if (t125 != 455606287048838LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 450U;
	int16_t x507 = -61;
	int32_t t126 = 0;

    t126 = ((x505<=(x506!=x507))|x508);

    if (t126 != 116) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x510 = INT8_MIN;
	int8_t x511 = 0;
	static volatile int8_t x512 = -1;
	static volatile int32_t t127 = 7711596;

    t127 = ((x509<=(x510!=x511))|x512);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	int64_t x515 = INT64_MAX;
	static volatile int32_t t128 = 24;

    t128 = ((x513<=(x514!=x515))|x516);

    if (t128 != 31891) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x519 = -127;
	static volatile uint8_t x520 = UINT8_MAX;

    t129 = ((x517<=(x518!=x519))|x520);

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = 49;
	int32_t x522 = -772938;
	volatile uint16_t x523 = 34U;
	int32_t x524 = INT32_MAX;
	volatile int32_t t130 = INT32_MAX;

    t130 = ((x521<=(x522!=x523))|x524);

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int32_t x526 = -61102;
	uint8_t x527 = UINT8_MAX;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t131 = -12;

    t131 = ((x525<=(x526!=x527))|x528);

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -6;
	volatile uint64_t x530 = 82016LLU;
	uint32_t x531 = 84612U;
	uint8_t x532 = 82U;
	int32_t t132 = -30;

    t132 = ((x529<=(x530!=x531))|x532);

    if (t132 != 83) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x534 = 109U;
	volatile int16_t x536 = -2679;
	int32_t t133 = -224757;

    t133 = ((x533<=(x534!=x535))|x536);

    if (t133 != -2679) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	uint64_t x539 = 6154562927426132669LLU;
	static uint16_t x540 = 14219U;
	int32_t t134 = 7643899;

    t134 = ((x537<=(x538!=x539))|x540);

    if (t134 != 14219) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -170304843LL;
	int8_t x542 = INT8_MIN;
	static uint64_t x543 = UINT64_MAX;
	uint64_t x544 = 158LLU;
	uint64_t t135 = 5313024917065881LLU;

    t135 = ((x541<=(x542!=x543))|x544);

    if (t135 != 159LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = INT8_MIN;
	static uint64_t x547 = UINT64_MAX;
	volatile int64_t t136 = INT64_MAX;

    t136 = ((x545<=(x546!=x547))|x548);

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = INT64_MIN;
	int32_t x551 = INT32_MAX;
	int32_t t137 = 1164;

    t137 = ((x549<=(x550!=x551))|x552);

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 625423251634124073LLU;
	uint64_t x554 = 2182614LLU;
	static int64_t x555 = INT64_MAX;
	int8_t x556 = INT8_MAX;
	int32_t t138 = -32358;

    t138 = ((x553<=(x554!=x555))|x556);

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	static volatile uint64_t x558 = 98017LLU;
	uint64_t x559 = UINT64_MAX;
	int8_t x560 = -14;
	volatile int32_t t139 = -24296;

    t139 = ((x557<=(x558!=x559))|x560);

    if (t139 != -13) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	volatile int8_t x562 = INT8_MIN;
	static uint16_t x563 = 116U;
	volatile int8_t x564 = -1;
	static volatile int32_t t140 = 28401;

    t140 = ((x561<=(x562!=x563))|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MIN;
	volatile uint8_t x567 = 80U;
	int64_t x568 = -42757480496999LL;
	volatile int64_t t141 = -90LL;

    t141 = ((x565<=(x566!=x567))|x568);

    if (t141 != -42757480496999LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	int32_t x570 = INT32_MIN;
	static int16_t x571 = 0;
	int32_t x572 = -1;
	int32_t t142 = 128;

    t142 = ((x569<=(x570!=x571))|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	int8_t x574 = INT8_MIN;
	int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 106346;

    t143 = ((x573<=(x574!=x575))|x576);

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 493;
	static int8_t x578 = INT8_MIN;
	uint16_t x579 = UINT16_MAX;
	int8_t x580 = INT8_MAX;
	volatile int32_t t144 = -2065;

    t144 = ((x577<=(x578!=x579))|x580);

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	uint32_t x582 = UINT32_MAX;
	int32_t x583 = INT32_MAX;
	int64_t x584 = INT64_MAX;
	int64_t t145 = INT64_MAX;

    t145 = ((x581<=(x582!=x583))|x584);

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint16_t x586 = 3196U;
	uint64_t x587 = 3LLU;
	int16_t x588 = 9;
	volatile int32_t t146 = -1682374;

    t146 = ((x585<=(x586!=x587))|x588);

    if (t146 != 9) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -13983982;
	int64_t x590 = INT64_MIN;
	int16_t x591 = INT16_MIN;
	uint32_t x592 = UINT32_MAX;
	static volatile uint32_t t147 = UINT32_MAX;

    t147 = ((x589<=(x590!=x591))|x592);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile int64_t x595 = INT64_MIN;
	int64_t x596 = -1LL;
	int64_t t148 = 6LL;

    t148 = ((x593<=(x594!=x595))|x596);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x599 = 1182LL;
	volatile int64_t x600 = INT64_MIN;
	int64_t t149 = INT64_MIN;

    t149 = ((x597<=(x598!=x599))|x600);

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 7668LLU;
	int32_t x602 = 0;
	int16_t x604 = 0;

    t150 = ((x601<=(x602!=x603))|x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = 1;
	uint16_t x606 = UINT16_MAX;
	static int8_t x608 = 1;
	int32_t t151 = -891;

    t151 = ((x605<=(x606!=x607))|x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MIN;
	int16_t x610 = -1;
	int8_t x611 = -1;
	static int16_t x612 = INT16_MIN;
	volatile int32_t t152 = -160;

    t152 = ((x609<=(x610!=x611))|x612);

    if (t152 != -32767) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 130U;
	int32_t x614 = 74916817;
	static int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t153 = INT32_MIN;

    t153 = ((x613<=(x614!=x615))|x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -13;
	volatile int32_t x618 = -8141955;
	int16_t x619 = INT16_MAX;
	volatile int32_t t154 = 65439;

    t154 = ((x617<=(x618!=x619))|x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x622 = UINT32_MAX;
	int64_t x623 = -1LL;
	int16_t x624 = INT16_MAX;
	int32_t t155 = 0;

    t155 = ((x621<=(x622!=x623))|x624);

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x625 = 10U;
	int64_t x628 = INT64_MAX;

    t156 = ((x625<=(x626!=x627))|x628);

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	static volatile uint8_t x630 = 68U;
	int16_t x631 = INT16_MAX;
	volatile uint32_t t157 = 77759165U;

    t157 = ((x629<=(x630!=x631))|x632);

    if (t157 != 29U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int8_t x635 = INT8_MIN;
	int16_t x636 = -1;
	int32_t t158 = 104;

    t158 = ((x633<=(x634!=x635))|x636);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x637 = UINT8_MAX;
	static int64_t x639 = 5089483194278546LL;
	static int64_t t159 = 325977805LL;

    t159 = ((x637<=(x638!=x639))|x640);

    if (t159 != -1612194072LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x642 = -1;
	int64_t x643 = INT64_MAX;
	uint8_t x644 = UINT8_MAX;
	volatile int32_t t160 = 52425428;

    t160 = ((x641<=(x642!=x643))|x644);

    if (t160 != 255) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x645 = UINT8_MAX;
	int16_t x647 = -4093;
	volatile uint32_t x648 = UINT32_MAX;
	static volatile uint32_t t161 = UINT32_MAX;

    t161 = ((x645<=(x646!=x647))|x648);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	int32_t x650 = -1;
	int64_t x651 = 1833497LL;
	static volatile int16_t x652 = INT16_MIN;

    t162 = ((x649<=(x650!=x651))|x652);

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x653 = UINT64_MAX;
	static volatile uint8_t x654 = UINT8_MAX;
	int32_t x655 = INT32_MIN;
	uint8_t x656 = 63U;
	volatile int32_t t163 = 3084;

    t163 = ((x653<=(x654!=x655))|x656);

    if (t163 != 63) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = INT16_MIN;
	uint16_t x658 = 11U;
	uint64_t x659 = 11721187LLU;
	int16_t x660 = 393;
	static volatile int32_t t164 = -46;

    t164 = ((x657<=(x658!=x659))|x660);

    if (t164 != 393) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MIN;
	int8_t x663 = 0;
	int32_t x664 = 20633;
	volatile int32_t t165 = 0;

    t165 = ((x661<=(x662!=x663))|x664);

    if (t165 != 20633) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MIN;
	uint64_t x667 = 108153541472362792LLU;
	uint64_t x668 = 5260707585959362175LLU;

    t166 = ((x665<=(x666!=x667))|x668);

    if (t166 != 5260707585959362175LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MIN;
	uint32_t x670 = 5280382U;
	int16_t x671 = INT16_MIN;
	int16_t x672 = -1;

    t167 = ((x669<=(x670!=x671))|x672);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = 10;
	int64_t x675 = INT64_MAX;
	uint8_t x676 = 14U;

    t168 = ((x673<=(x674!=x675))|x676);

    if (t168 != 15) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = -1LL;
	int8_t x678 = INT8_MIN;
	uint16_t x679 = 12656U;

    t169 = ((x677<=(x678!=x679))|x680);

    if (t169 != 7) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 0U;
	int8_t x682 = 0;
	uint16_t x683 = 6424U;
	int16_t x684 = -1;
	volatile int32_t t170 = 27;

    t170 = ((x681<=(x682!=x683))|x684);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int32_t x686 = INT32_MAX;
	int32_t x687 = INT32_MIN;
	static volatile int64_t x688 = INT64_MAX;
	volatile int64_t t171 = INT64_MAX;

    t171 = ((x685<=(x686!=x687))|x688);

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x690 = INT16_MAX;
	uint8_t x691 = 96U;
	static volatile int8_t x692 = -1;
	int32_t t172 = -17049045;

    t172 = ((x689<=(x690!=x691))|x692);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = INT16_MIN;
	int8_t x694 = 46;
	int64_t x695 = INT64_MIN;
	volatile uint8_t x696 = 54U;
	volatile int32_t t173 = -7364;

    t173 = ((x693<=(x694!=x695))|x696);

    if (t173 != 55) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = -29;
	uint32_t x699 = UINT32_MAX;
	int8_t x700 = INT8_MAX;
	volatile int32_t t174 = 1442;

    t174 = ((x697<=(x698!=x699))|x700);

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x701 = INT16_MIN;
	volatile int16_t x702 = 7;
	int16_t x703 = INT16_MIN;
	int64_t x704 = 7713649040LL;

    t175 = ((x701<=(x702!=x703))|x704);

    if (t175 != 7713649041LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	volatile int64_t x706 = -1357131LL;
	volatile uint64_t x707 = 1LLU;
	uint64_t x708 = UINT64_MAX;
	uint64_t t176 = UINT64_MAX;

    t176 = ((x705<=(x706!=x707))|x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	static int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MIN;
	static uint64_t x712 = UINT64_MAX;

    t177 = ((x709<=(x710!=x711))|x712);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 4294180893544LLU;
	int64_t x715 = INT64_MAX;
	int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -1232243;

    t178 = ((x713<=(x714!=x715))|x716);

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 0U;
	uint16_t x718 = 123U;
	volatile int16_t x719 = INT16_MAX;

    t179 = ((x717<=(x718!=x719))|x720);

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = 58379267558LLU;
	static int16_t x722 = INT16_MIN;
	int16_t x724 = -1;
	volatile int32_t t180 = -21381;

    t180 = ((x721<=(x722!=x723))|x724);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 82U;
	static volatile int16_t x726 = 32;
	volatile uint64_t x727 = 63294415170997895LLU;
	volatile int32_t t181 = -22630;

    t181 = ((x725<=(x726!=x727))|x728);

    if (t181 != 1651) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	static int16_t x732 = -1;
	int32_t t182 = 488;

    t182 = ((x729<=(x730!=x731))|x732);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	volatile uint16_t x734 = 20U;
	uint16_t x735 = 5U;
	uint64_t x736 = 0LLU;
	static volatile uint64_t t183 = 4654LLU;

    t183 = ((x733<=(x734!=x735))|x736);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	static uint8_t x738 = UINT8_MAX;
	uint32_t x739 = 1076926055U;
	volatile int32_t x740 = -1;

    t184 = ((x737<=(x738!=x739))|x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 53382330188514101LLU;
	static volatile uint16_t x742 = 6U;
	uint8_t x744 = 0U;
	int32_t t185 = -277603722;

    t185 = ((x741<=(x742!=x743))|x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MIN;
	volatile int32_t x746 = INT32_MIN;
	int64_t x748 = -19LL;

    t186 = ((x745<=(x746!=x747))|x748);

    if (t186 != -19LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -223;
	static int64_t x750 = -1LL;
	int32_t x751 = -291761;
	int64_t t187 = 488195141491LL;

    t187 = ((x749<=(x750!=x751))|x752);

    if (t187 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 4U;
	volatile int32_t x754 = INT32_MIN;
	static uint32_t x755 = UINT32_MAX;
	int32_t x756 = 427385395;
	int32_t t188 = 727;

    t188 = ((x753<=(x754!=x755))|x756);

    if (t188 != 427385395) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = UINT16_MAX;
	volatile int32_t x758 = -278;
	uint16_t x759 = UINT16_MAX;
	int32_t t189 = INT32_MIN;

    t189 = ((x757<=(x758!=x759))|x760);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int8_t x762 = INT8_MIN;
	uint8_t x763 = 1U;
	int16_t x764 = -12374;
	volatile int32_t t190 = 413211;

    t190 = ((x761<=(x762!=x763))|x764);

    if (t190 != -12373) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x766 = 88112773U;
	uint32_t x767 = UINT32_MAX;
	volatile int32_t x768 = -1397006;

    t191 = ((x765<=(x766!=x767))|x768);

    if (t191 != -1397005) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint8_t x771 = 73U;
	uint8_t x772 = 19U;
	volatile int32_t t192 = -7065;

    t192 = ((x769<=(x770!=x771))|x772);

    if (t192 != 19) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 10U;
	int8_t x774 = INT8_MAX;
	int32_t x775 = -1;
	int16_t x776 = -1;
	volatile int32_t t193 = 56712;

    t193 = ((x773<=(x774!=x775))|x776);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x777 = 112248425729887LLU;
	volatile uint16_t x778 = UINT16_MAX;
	uint64_t x779 = UINT64_MAX;
	int32_t x780 = -147;
	static volatile int32_t t194 = 2;

    t194 = ((x777<=(x778!=x779))|x780);

    if (t194 != -147) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = INT64_MIN;
	static uint64_t x783 = 4753377378390872111LLU;
	int64_t x784 = -31573578572228685LL;

    t195 = ((x781<=(x782!=x783))|x784);

    if (t195 != -31573578572228685LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x786 = INT64_MAX;
	volatile uint8_t x787 = 2U;
	int16_t x788 = -1;
	int32_t t196 = 33483;

    t196 = ((x785<=(x786!=x787))|x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;
	int32_t x790 = -1;
	int32_t x791 = INT32_MAX;
	int16_t x792 = INT16_MIN;
	int32_t t197 = -1;

    t197 = ((x789<=(x790!=x791))|x792);

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = -1LL;
	int32_t x794 = 2;
	int8_t x796 = INT8_MAX;
	volatile int32_t t198 = 31878;

    t198 = ((x793<=(x794!=x795))|x796);

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x798 = 60U;
	volatile uint8_t x799 = 7U;
	int16_t x800 = INT16_MAX;
	volatile int32_t t199 = -1322578;

    t199 = ((x797<=(x798!=x799))|x800);

    if (t199 != 32767) { NG(); } else { ; }
	
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

