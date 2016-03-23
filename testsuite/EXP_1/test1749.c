
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

int16_t x1 = INT16_MIN;
int16_t x21 = INT16_MAX;
int32_t x23 = INT32_MIN;
uint64_t x24 = 15662716LLU;
static volatile int64_t x27 = INT64_MIN;
volatile int64_t t6 = 1097075070343043LL;
int32_t x31 = 4;
static uint16_t x36 = 33U;
static uint8_t x37 = 25U;
volatile int16_t x39 = INT16_MIN;
int16_t x42 = -1;
int32_t t10 = 763;
static int8_t x45 = INT8_MIN;
volatile uint64_t x54 = 443LLU;
static volatile int32_t x60 = INT32_MIN;
volatile int32_t t14 = 1012280;
volatile uint16_t x63 = UINT16_MAX;
volatile int16_t x67 = INT16_MIN;
int8_t x68 = INT8_MAX;
int32_t x71 = INT32_MIN;
volatile uint16_t x73 = 2279U;
int64_t x74 = -1LL;
uint16_t x81 = 20456U;
int64_t x83 = INT64_MIN;
static int32_t t23 = -2873913;
uint64_t x103 = UINT64_MAX;
volatile uint32_t x105 = 974624U;
int32_t x118 = INT32_MIN;
uint8_t x119 = 13U;
volatile uint8_t x122 = 2U;
int64_t x124 = -1LL;
int8_t x140 = INT8_MIN;
volatile int64_t t34 = 2115368643540175LL;
int32_t x145 = -1;
int64_t t36 = 46LL;
static int64_t x150 = INT64_MIN;
int32_t t37 = 6398126;
static int32_t x155 = INT32_MIN;
static volatile int16_t x159 = INT16_MIN;
int8_t x161 = -1;
int64_t x164 = INT64_MIN;
int64_t x166 = INT64_MIN;
int64_t x167 = 0LL;
volatile int64_t t41 = -1548LL;
int8_t x172 = -12;
uint8_t x175 = 0U;
int64_t x183 = INT64_MIN;
static int8_t x185 = -1;
static int32_t x187 = INT32_MIN;
int32_t t47 = 3897;
static volatile int8_t x198 = -1;
uint8_t x213 = UINT8_MAX;
static volatile int16_t x217 = -248;
static uint32_t x218 = 17281649U;
uint16_t x221 = 13989U;
uint32_t x222 = UINT32_MAX;
volatile uint8_t x223 = 2U;
static volatile uint64_t t55 = 257517271195LLU;
int64_t x225 = INT64_MIN;
uint32_t t56 = UINT32_MAX;
int32_t x242 = -1;
int16_t x243 = INT16_MIN;
static uint8_t x245 = 2U;
volatile int64_t x246 = -167899LL;
volatile uint32_t t62 = UINT32_MAX;
uint32_t x253 = 6176U;
static uint32_t x263 = 2U;
volatile uint32_t t65 = 225U;
uint8_t x266 = 14U;
int64_t x272 = -865LL;
int32_t x278 = INT32_MAX;
int8_t x281 = 2;
int64_t x283 = -16575368LL;
static volatile int64_t t70 = -30224646698LL;
uint16_t x288 = UINT16_MAX;
static volatile int32_t t71 = -55905;
volatile uint16_t x291 = 5183U;
volatile int32_t t72 = -858;
uint16_t x295 = 10169U;
int16_t x296 = INT16_MAX;
int16_t x301 = -1;
int32_t x309 = INT32_MAX;
uint16_t x319 = 8319U;
volatile int32_t t79 = 9;
int64_t x323 = INT64_MAX;
int8_t x334 = -1;
uint32_t x338 = UINT32_MAX;
int16_t x341 = 31;
static volatile uint64_t x343 = 3800640314642082LLU;
int32_t x344 = 14568043;
uint16_t x348 = 344U;
uint16_t x352 = 61U;
volatile int32_t t87 = -258;
int16_t x354 = INT16_MIN;
static int32_t x356 = INT32_MIN;
volatile int32_t x365 = INT32_MAX;
static volatile uint64_t x367 = UINT64_MAX;
static int64_t x369 = -292969178644025402LL;
int32_t x371 = INT32_MAX;
uint16_t x375 = UINT16_MAX;
int64_t x377 = -558216785324LL;
int32_t t94 = -70828;
uint32_t x384 = 0U;
int64_t x386 = INT64_MIN;
volatile int64_t t98 = 127LL;
static uint16_t x402 = UINT16_MAX;
uint64_t x409 = 1180355727209LLU;
uint32_t x416 = 1654249671U;
int8_t x423 = INT8_MIN;
static int64_t x425 = -190864134092LL;
int16_t x427 = -63;
volatile int64_t t107 = -7136707945912LL;
uint64_t t109 = 6865LLU;
int8_t x442 = INT8_MIN;
static int32_t x448 = 95622307;
int32_t t111 = 5967;
static uint32_t x450 = 8104601U;
uint64_t x456 = UINT64_MAX;
int8_t x459 = INT8_MAX;
int32_t x461 = -24598242;
uint32_t x462 = UINT32_MAX;
uint64_t x464 = UINT64_MAX;
uint8_t x466 = 9U;
int32_t x467 = -84975289;
static uint64_t t117 = 748378LLU;
int16_t x488 = INT16_MIN;
int8_t x489 = INT8_MIN;
uint16_t x493 = 5U;
int64_t x500 = -92LL;
int32_t x501 = INT32_MIN;
static uint16_t x502 = 770U;
uint32_t x512 = 17U;
int8_t x514 = -9;
int32_t x517 = -199334662;
uint64_t x525 = UINT64_MAX;
int16_t x527 = INT16_MIN;
int32_t t131 = 143;
static volatile int64_t t132 = -54909380523LL;
uint64_t x538 = 15094536708923LLU;
volatile int8_t x541 = 0;
volatile uint16_t x542 = UINT16_MAX;
int8_t x544 = -1;
static int16_t x546 = INT16_MAX;
volatile uint32_t x550 = UINT32_MAX;
static volatile int32_t t138 = 3188;
volatile int64_t x558 = INT64_MIN;
int64_t x559 = INT64_MIN;
static volatile uint32_t t141 = 10U;
int32_t t142 = INT32_MAX;
volatile int16_t x573 = INT16_MIN;
int64_t x580 = -1LL;
volatile int64_t t144 = -11LL;
int32_t x584 = INT32_MIN;
volatile uint8_t x593 = 1U;
int32_t x596 = -1;
static volatile int16_t x601 = INT16_MIN;
int32_t x602 = INT32_MIN;
volatile int64_t t151 = -255689420203807972LL;
volatile int8_t x611 = -1;
volatile int32_t t152 = -313935097;
int64_t x613 = INT64_MAX;
int32_t x615 = 4115831;
uint64_t x616 = 117518080LLU;
int32_t x622 = 64246;
static int64_t x623 = 16499329278LL;
static int16_t x629 = -1;
static volatile int32_t t158 = -670132;
int8_t x638 = 4;
int8_t x643 = -2;
volatile int64_t t160 = -7927675725229LL;
int32_t x646 = -1;
uint64_t x651 = 25947963637LLU;
int64_t x656 = INT64_MIN;
static volatile uint64_t t165 = 3164998008948093576LLU;
static volatile int64_t x666 = INT64_MIN;
volatile int64_t x675 = -1LL;
static int32_t x688 = 238909;
static volatile uint32_t x690 = 3906402U;
static volatile int64_t t172 = -331851640737304909LL;
int64_t x697 = INT64_MIN;
int32_t x702 = -40343143;
volatile int32_t x707 = INT32_MIN;
uint32_t t178 = 2129456U;
static int16_t x726 = 4621;
int8_t x728 = -13;
int64_t t181 = 19LL;
int16_t x730 = INT16_MIN;
uint64_t x734 = 31LLU;
static volatile int16_t x735 = INT16_MAX;
int32_t x737 = INT32_MIN;
uint16_t x741 = 3685U;
int8_t x744 = -1;
volatile uint8_t x746 = 120U;
uint32_t t186 = UINT32_MAX;
static uint16_t x754 = UINT16_MAX;
int64_t t189 = -61177014903771LL;
int32_t x764 = INT32_MAX;
static int32_t t191 = 10244621;
uint64_t x775 = UINT64_MAX;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	static volatile int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

    t0 = (((x1>x2)|x3)|x4);

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 698U;
	uint64_t x6 = UINT64_MAX;
	static uint64_t x7 = UINT64_MAX;
	int64_t x8 = INT64_MIN;
	static volatile uint64_t t1 = UINT64_MAX;

    t1 = (((x5>x6)|x7)|x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = 6138378;

    t2 = (((x9>x10)|x11)|x12);

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int64_t x14 = INT64_MAX;
	static volatile uint16_t x15 = 33U;
	volatile int32_t x16 = -1;
	int32_t t3 = 56;

    t3 = (((x13>x14)|x15)|x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = 126157384767496016LLU;
	static int64_t x18 = INT64_MIN;
	volatile int64_t x19 = INT64_MAX;
	static int64_t x20 = INT64_MAX;
	int64_t t4 = INT64_MAX;

    t4 = (((x17>x18)|x19)|x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x22 = 41LL;
	uint64_t t5 = 53811747624088LLU;

    t5 = (((x21>x22)|x23)|x24);

    if (t5 != 18446744071577730685LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1U;
	int8_t x26 = -36;
	int32_t x28 = -1515;

    t6 = (((x25>x26)|x27)|x28);

    if (t6 != -1515LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -245948374LL;
	uint8_t x30 = 3U;
	static int32_t x32 = -1;
	static volatile int32_t t7 = 3;

    t7 = (((x29>x30)|x31)|x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile int64_t x34 = 935203LL;
	int16_t x35 = 14;
	static int32_t t8 = -1;

    t8 = (((x33>x34)|x35)|x36);

    if (t8 != 47) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = -1;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -30907561;

    t9 = (((x37>x38)|x39)|x40);

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	volatile int32_t x43 = INT32_MIN;
	static uint16_t x44 = 11U;

    t10 = (((x41>x42)|x43)|x44);

    if (t10 != -2147483637) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -1;
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	int32_t t11 = -11;

    t11 = (((x45>x46)|x47)|x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	static uint8_t x50 = 50U;
	int32_t x51 = -4;
	uint64_t x52 = 410664LLU;
	uint64_t t12 = 32830543359LLU;

    t12 = (((x49>x50)|x51)|x52);

    if (t12 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = -1;
	volatile int32_t t13 = -57684296;

    t13 = (((x53>x54)|x55)|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 11U;
	uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MAX;

    t14 = (((x57>x58)|x59)|x60);

    if (t14 != -2147450881) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	uint16_t x62 = 55U;
	int8_t x64 = 1;
	static volatile int32_t t15 = 29;

    t15 = (((x61>x62)|x63)|x64);

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	static int16_t x66 = INT16_MAX;
	int32_t t16 = 0;

    t16 = (((x65>x66)|x67)|x68);

    if (t16 != -32641) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int64_t x70 = -1LL;
	uint32_t x72 = 31772045U;
	static uint32_t t17 = 2918462U;

    t17 = (((x69>x70)|x71)|x72);

    if (t17 != 2179255693U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x75 = 362837613U;
	int64_t x76 = 2949LL;
	int64_t t18 = -255LL;

    t18 = (((x73>x74)|x75)|x76);

    if (t18 != 362840045LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 482882119786683LLU;
	int16_t x78 = INT16_MIN;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = -1;
	int32_t t19 = -377165;

    t19 = (((x77>x78)|x79)|x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = -62;
	int8_t x84 = INT8_MIN;
	volatile int64_t t20 = -3616710LL;

    t20 = (((x81>x82)|x83)|x84);

    if (t20 != -127LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = 89;
	volatile uint8_t x86 = UINT8_MAX;
	volatile int8_t x87 = INT8_MIN;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t21 = -19443529;

    t21 = (((x85>x86)|x87)|x88);

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = 21786653892LL;
	uint16_t x90 = 26U;
	static int8_t x91 = 6;
	int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 479294;

    t22 = (((x89>x90)|x91)|x92);

    if (t22 != -32761) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -418838211873817202LL;
	static int32_t x94 = -180050;
	volatile int32_t x95 = INT32_MIN;
	volatile int8_t x96 = -4;

    t23 = (((x93>x94)|x95)|x96);

    if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	static int16_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	int16_t x100 = INT16_MIN;
	uint64_t t24 = UINT64_MAX;

    t24 = (((x97>x98)|x99)|x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 1;
	int32_t x102 = 5;
	uint32_t x104 = 1097259346U;
	uint64_t t25 = UINT64_MAX;

    t25 = (((x101>x102)|x103)|x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 47U;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MAX;
	int64_t t26 = 232753LL;

    t26 = (((x105>x106)|x107)|x108);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = -14;
	uint32_t x111 = 64632U;
	int8_t x112 = INT8_MIN;
	uint32_t t27 = 45U;

    t27 = (((x109>x110)|x111)|x112);

    if (t27 != 4294967288U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 18LLU;
	static int64_t x114 = 1912012340071762LL;
	static int32_t x115 = -1;
	int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = 7784288;

    t28 = (((x113>x114)|x115)|x116);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 493U;
	static int16_t x120 = -1;
	volatile int32_t t29 = 5778303;

    t29 = (((x117>x118)|x119)|x120);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 1030412392U;
	int8_t x123 = INT8_MIN;
	int64_t t30 = 81700282782216LL;

    t30 = (((x121>x122)|x123)|x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1U;
	int32_t x126 = -60;
	static volatile int32_t x127 = -8;
	uint8_t x128 = 1U;
	volatile int32_t t31 = 89125;

    t31 = (((x125>x126)|x127)|x128);

    if (t31 != -7) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	uint8_t x130 = 1U;
	volatile int64_t x131 = -1LL;
	volatile int64_t x132 = INT64_MIN;
	static volatile int64_t t32 = 112720LL;

    t32 = (((x129>x130)|x131)|x132);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int32_t x134 = 13429;
	int32_t x135 = -1;
	int64_t x136 = -1LL;
	int64_t t33 = 5950062053794892LL;

    t33 = (((x133>x134)|x135)|x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MAX;
	int64_t x139 = -729417295554755LL;

    t34 = (((x137>x138)|x139)|x140);

    if (t34 != -67LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	static int16_t x142 = -1;
	static volatile int32_t x143 = -12328372;
	int64_t x144 = -1LL;
	volatile int64_t t35 = -63LL;

    t35 = (((x141>x142)|x143)|x144);

    if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = -551;
	int64_t x147 = INT64_MIN;
	int8_t x148 = -1;

    t36 = (((x145>x146)|x147)|x148);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	volatile int16_t x152 = INT16_MIN;

    t37 = (((x149>x150)|x151)|x152);

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int64_t x154 = 349440641137700LL;
	uint8_t x156 = 6U;
	volatile int32_t t38 = 59935;

    t38 = (((x153>x154)|x155)|x156);

    if (t38 != -2147483642) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	int16_t x158 = -1;
	int64_t x160 = INT64_MIN;
	int64_t t39 = -53LL;

    t39 = (((x157>x158)|x159)|x160);

    if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x162 = INT8_MIN;
	int64_t x163 = 490547LL;
	static volatile int64_t t40 = -7505460LL;

    t40 = (((x161>x162)|x163)|x164);

    if (t40 != -9223372036854285261LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int8_t x168 = INT8_MIN;

    t41 = (((x165>x166)|x167)|x168);

    if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = 18;
	int8_t x171 = INT8_MAX;
	volatile int32_t t42 = 16317276;

    t42 = (((x169>x170)|x171)|x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x173 = 0;
	int16_t x174 = -15786;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 317951;

    t43 = (((x173>x174)|x175)|x176);

    if (t43 != -2147483647) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 1U;
	int8_t x178 = INT8_MAX;
	static int8_t x179 = INT8_MIN;
	static int16_t x180 = -52;
	static volatile int32_t t44 = 46730699;

    t44 = (((x177>x178)|x179)|x180);

    if (t44 != -52) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MAX;
	volatile uint32_t x182 = UINT32_MAX;
	uint32_t x184 = 203047U;
	int64_t t45 = 9293860LL;

    t45 = (((x181>x182)|x183)|x184);

    if (t45 != -9223372036854572761LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x186 = 11811;
	int8_t x188 = -1;
	static int32_t t46 = 93132571;

    t46 = (((x185>x186)|x187)|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x189 = 14;
	int32_t x190 = -1;
	volatile int16_t x191 = 17;
	static int8_t x192 = -1;

    t47 = (((x189>x190)|x191)|x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 200U;
	volatile int64_t x194 = INT64_MAX;
	int16_t x195 = 131;
	int32_t x196 = INT32_MAX;
	int32_t t48 = INT32_MAX;

    t48 = (((x193>x194)|x195)|x196);

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 53U;
	volatile int8_t x199 = 0;
	static int8_t x200 = INT8_MIN;
	int32_t t49 = -346727369;

    t49 = (((x197>x198)|x199)|x200);

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	int16_t x202 = -1;
	int8_t x203 = -1;
	static volatile int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 161956520;

    t50 = (((x201>x202)|x203)|x204);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = INT8_MIN;
	int8_t x208 = -1;
	volatile int32_t t51 = 0;

    t51 = (((x205>x206)|x207)|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	int64_t x210 = -1374544975533LL;
	volatile int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = 60447560LL;

    t52 = (((x209>x210)|x211)|x212);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	uint8_t x215 = 89U;
	int64_t x216 = 14258805725231LL;
	volatile int64_t t53 = 1550226039847751LL;

    t53 = (((x213>x214)|x215)|x216);

    if (t53 != 14258805725311LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x219 = INT16_MIN;
	static volatile int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 4804725;

    t54 = (((x217>x218)|x219)|x220);

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x224 = 419234043827LLU;

    t55 = (((x221>x222)|x223)|x224);

    if (t55 != 419234043827LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = 337276U;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = 4080;

    t56 = (((x225>x226)|x227)|x228);

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x229 = 11111U;
	volatile uint8_t x230 = 1U;
	int32_t x231 = INT32_MAX;
	volatile int8_t x232 = INT8_MAX;
	static volatile int32_t t57 = INT32_MAX;

    t57 = (((x229>x230)|x231)|x232);

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int32_t x234 = -1;
	int8_t x235 = 13;
	volatile uint32_t x236 = 4312815U;
	uint32_t t58 = 4856U;

    t58 = (((x233>x234)|x235)|x236);

    if (t58 != 4312815U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MAX;
	static uint8_t x238 = 0U;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;
	static int64_t t59 = 120146949275LL;

    t59 = (((x237>x238)|x239)|x240);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 9U;
	static volatile uint32_t x244 = UINT32_MAX;
	static volatile uint32_t t60 = UINT32_MAX;

    t60 = (((x241>x242)|x243)|x244);

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x247 = 1U;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t61 = UINT64_MAX;

    t61 = (((x245>x246)|x247)|x248);

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 1;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	uint32_t x252 = UINT32_MAX;

    t62 = (((x249>x250)|x251)|x252);

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x254 = UINT32_MAX;
	volatile uint16_t x255 = 6U;
	uint8_t x256 = 24U;
	volatile int32_t t63 = 1;

    t63 = (((x253>x254)|x255)|x256);

    if (t63 != 30) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = -2672LL;
	uint16_t x258 = UINT16_MAX;
	static int64_t x259 = INT64_MAX;
	int16_t x260 = INT16_MIN;
	volatile int64_t t64 = 3754682258LL;

    t64 = (((x257>x258)|x259)|x260);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -3254357;
	static int8_t x262 = -2;
	int32_t x264 = -7906;

    t65 = (((x261>x262)|x263)|x264);

    if (t65 != 4294959390U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	int8_t x267 = -1;
	int32_t x268 = INT32_MAX;
	static volatile int32_t t66 = 300;

    t66 = (((x265>x266)|x267)|x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	volatile uint32_t x271 = 229923U;
	volatile int64_t t67 = -352741434466LL;

    t67 = (((x269>x270)|x271)|x272);

    if (t67 != -321LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = 3792906430LLU;
	volatile int32_t x274 = -1;
	uint8_t x275 = 8U;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 1721240;

    t68 = (((x273>x274)|x275)|x276);

    if (t68 != -32760) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	static uint8_t x279 = UINT8_MAX;
	int8_t x280 = INT8_MAX;
	static int32_t t69 = -120899;

    t69 = (((x277>x278)|x279)|x280);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MAX;
	int8_t x284 = INT8_MIN;

    t70 = (((x281>x282)|x283)|x284);

    if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 39;
	volatile uint32_t x286 = 74U;
	static int8_t x287 = -15;

    t71 = (((x285>x286)|x287)|x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 2U;
	uint8_t x290 = 70U;
	int8_t x292 = -1;

    t72 = (((x289>x290)|x291)|x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 0U;
	volatile uint32_t x294 = UINT32_MAX;
	static int32_t t73 = 400728502;

    t73 = (((x293>x294)|x295)|x296);

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x297 = -1;
	int64_t x298 = -246LL;
	int64_t x299 = 272872981748881LL;
	int64_t x300 = INT64_MAX;
	int64_t t74 = INT64_MAX;

    t74 = (((x297>x298)|x299)|x300);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x302 = -1;
	static uint16_t x303 = 5U;
	static volatile uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = -20523779;

    t75 = (((x301>x302)|x303)|x304);

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t x308 = -1;
	uint32_t t76 = UINT32_MAX;

    t76 = (((x305>x306)|x307)|x308);

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = -5717;
	volatile int16_t x311 = 170;
	int64_t x312 = INT64_MIN;
	int64_t t77 = -4573484186086296LL;

    t77 = (((x309>x310)|x311)|x312);

    if (t77 != -9223372036854775637LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	volatile int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	static uint64_t x316 = 123398LLU;
	static uint64_t t78 = 13357769LLU;

    t78 = (((x313>x314)|x315)|x316);

    if (t78 != 123647LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x317 = UINT8_MAX;
	uint16_t x318 = UINT16_MAX;
	int16_t x320 = INT16_MAX;

    t79 = (((x317>x318)|x319)|x320);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x321 = INT32_MIN;
	int64_t x322 = 203782LL;
	uint8_t x324 = 34U;
	static int64_t t80 = INT64_MAX;

    t80 = (((x321>x322)|x323)|x324);

    if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 36U;
	int64_t x326 = -1028677590241380008LL;
	int8_t x327 = -1;
	static uint8_t x328 = 1U;
	int32_t t81 = 292;

    t81 = (((x325>x326)|x327)|x328);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	int64_t x330 = -3244485693LL;
	uint8_t x331 = 126U;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 7092;

    t82 = (((x329>x330)|x331)|x332);

    if (t82 != -2147483521) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 47U;
	static int64_t x335 = INT64_MAX;
	volatile int16_t x336 = INT16_MAX;
	int64_t t83 = INT64_MAX;

    t83 = (((x333>x334)|x335)|x336);

    if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	int64_t x339 = -1LL;
	volatile int64_t x340 = INT64_MIN;
	static volatile int64_t t84 = 13911772468LL;

    t84 = (((x337>x338)|x339)|x340);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x342 = INT32_MAX;
	volatile uint64_t t85 = 4037205706LLU;

    t85 = (((x341>x342)|x343)|x344);

    if (t85 != 3800640314658539LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -1;
	static uint32_t x346 = UINT32_MAX;
	static int64_t x347 = 80140919560993LL;
	static volatile int64_t t86 = -52247226LL;

    t86 = (((x345>x346)|x347)|x348);

    if (t86 != 80140919561081LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 3U;
	uint8_t x350 = 6U;
	volatile uint16_t x351 = 9U;

    t87 = (((x349>x350)|x351)|x352);

    if (t87 != 61) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x355 = -26;
	volatile int32_t t88 = -127543912;

    t88 = (((x353>x354)|x355)|x356);

    if (t88 != -25) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 1;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = INT16_MIN;
	static int64_t t89 = -13621510934117LL;

    t89 = (((x357>x358)|x359)|x360);

    if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	static int16_t x362 = -462;
	volatile int16_t x363 = -1;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t90 = UINT64_MAX;

    t90 = (((x361>x362)|x363)|x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x366 = -1;
	int32_t x368 = -1;
	uint64_t t91 = UINT64_MAX;

    t91 = (((x365>x366)|x367)|x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x370 = 1;
	volatile int32_t x372 = INT32_MAX;
	int32_t t92 = INT32_MAX;

    t92 = (((x369>x370)|x371)|x372);

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	volatile int16_t x376 = 405;
	int32_t t93 = -421202;

    t93 = (((x373>x374)|x375)|x376);

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 4U;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;

    t94 = (((x377>x378)|x379)|x380);

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x381 = 7U;
	int64_t x382 = 23LL;
	int64_t x383 = -1LL;
	int64_t t95 = 65253510LL;

    t95 = (((x381>x382)|x383)|x384);

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint8_t x387 = 25U;
	static int64_t x388 = 6403954828017441LL;
	int64_t t96 = -115191104469LL;

    t96 = (((x385>x386)|x387)|x388);

    if (t96 != 6403954828017465LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint8_t x390 = 0U;
	int8_t x391 = INT8_MIN;
	volatile int64_t x392 = -1LL;
	volatile int64_t t97 = 1LL;

    t97 = (((x389>x390)|x391)|x392);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 620509877;
	volatile int16_t x394 = -1;
	int64_t x395 = -10579353969313409LL;
	int64_t x396 = 229262LL;

    t98 = (((x393>x394)|x395)|x396);

    if (t98 != -10579353969098753LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 948912233;

    t99 = (((x397>x398)|x399)|x400);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	uint64_t x403 = 319377839LLU;
	uint32_t x404 = UINT32_MAX;
	uint64_t t100 = 101757443117LLU;

    t100 = (((x401>x402)|x403)|x404);

    if (t100 != 4294967295LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	uint16_t x406 = 7229U;
	static int32_t x407 = INT32_MIN;
	int16_t x408 = -1;
	int32_t t101 = -9494908;

    t101 = (((x405>x406)|x407)|x408);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 26U;
	static int8_t x411 = INT8_MIN;
	volatile int64_t x412 = -960LL;
	int64_t t102 = 39972318292820390LL;

    t102 = (((x409>x410)|x411)|x412);

    if (t102 != -63LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = -5;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = INT16_MAX;
	volatile uint32_t t103 = 109141U;

    t103 = (((x413>x414)|x415)|x416);

    if (t103 != 1654259711U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -14491301LL;
	int64_t x418 = INT64_MIN;
	static volatile int8_t x419 = INT8_MAX;
	int8_t x420 = 1;
	static int32_t t104 = -72281553;

    t104 = (((x417>x418)|x419)|x420);

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MAX;
	int32_t x422 = -414153;
	int64_t x424 = -102508299LL;
	volatile int64_t t105 = -1074884326532537LL;

    t105 = (((x421>x422)|x423)|x424);

    if (t105 != -11LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MIN;
	int8_t x428 = 1;
	int32_t t106 = -5;

    t106 = (((x425>x426)|x427)|x428);

    if (t106 != -63) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	volatile int64_t x430 = 11862LL;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MIN;

    t107 = (((x429>x430)|x431)|x432);

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -1;
	int16_t x434 = 1;
	uint64_t x435 = 127539403573304143LLU;
	int16_t x436 = INT16_MIN;
	uint64_t t108 = 694268LLU;

    t108 = (((x433>x434)|x435)|x436);

    if (t108 != 18446744073709525839LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	uint64_t x439 = 415837110171538407LLU;
	uint32_t x440 = 26U;

    t109 = (((x437>x438)|x439)|x440);

    if (t109 != 415837110171538431LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = 29U;
	int32_t x443 = INT32_MIN;
	static int32_t x444 = INT32_MAX;
	int32_t t110 = -253982;

    t110 = (((x441>x442)|x443)|x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = -2205899473820531LL;
	int16_t x447 = -1;

    t111 = (((x445>x446)|x447)|x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 1624U;
	int8_t x451 = -1;
	uint8_t x452 = 1U;
	volatile int32_t t112 = -1;

    t112 = (((x449>x450)|x451)|x452);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 0U;
	int64_t x454 = -52360LL;
	int64_t x455 = -27824732593593187LL;
	uint64_t t113 = UINT64_MAX;

    t113 = (((x453>x454)|x455)|x456);

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	uint64_t x458 = 395LLU;
	int16_t x460 = 584;
	int32_t t114 = -956490;

    t114 = (((x457>x458)|x459)|x460);

    if (t114 != 639) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x463 = 13LLU;
	uint64_t t115 = UINT64_MAX;

    t115 = (((x461>x462)|x463)|x464);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	static volatile int8_t x468 = 1;
	volatile int32_t t116 = -132199032;

    t116 = (((x465>x466)|x467)|x468);

    if (t116 != -84975289) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = -1;
	volatile uint64_t x471 = 450636743060LLU;
	int32_t x472 = -3;

    t117 = (((x469>x470)|x471)|x472);

    if (t117 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	static volatile int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MAX;
	volatile int8_t x476 = INT8_MIN;
	int32_t t118 = -193292992;

    t118 = (((x473>x474)|x475)|x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	uint64_t x478 = 1186908486990332LLU;
	static int8_t x479 = -42;
	int16_t x480 = 2;
	volatile int32_t t119 = -117335775;

    t119 = (((x477>x478)|x479)|x480);

    if (t119 != -41) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MAX;
	int8_t x482 = -1;
	int64_t x483 = INT64_MAX;
	uint8_t x484 = 42U;
	volatile int64_t t120 = INT64_MAX;

    t120 = (((x481>x482)|x483)|x484);

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	int64_t x486 = 8835LL;
	static int8_t x487 = 41;
	volatile int32_t t121 = 419097762;

    t121 = (((x485>x486)|x487)|x488);

    if (t121 != -32727) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x490 = UINT32_MAX;
	uint32_t x491 = 0U;
	volatile int8_t x492 = INT8_MIN;
	uint32_t t122 = 2070732401U;

    t122 = (((x489>x490)|x491)|x492);

    if (t122 != 4294967168U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x494 = INT8_MAX;
	int16_t x495 = 1;
	volatile int64_t x496 = INT64_MIN;
	static int64_t t123 = -309520LL;

    t123 = (((x493>x494)|x495)|x496);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 1373U;
	int16_t x498 = INT16_MIN;
	int64_t x499 = -1LL;
	volatile int64_t t124 = 2734613862128601211LL;

    t124 = (((x497>x498)|x499)|x500);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x503 = 1U;
	int8_t x504 = -7;
	int32_t t125 = 1;

    t125 = (((x501>x502)|x503)|x504);

    if (t125 != -7) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	volatile int8_t x506 = 1;
	volatile uint8_t x507 = UINT8_MAX;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = INT32_MAX;

    t126 = (((x505>x506)|x507)|x508);

    if (t126 != INT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = UINT32_MAX;
	int64_t x510 = 1546LL;
	int16_t x511 = 4023;
	static volatile uint32_t t127 = 66171U;

    t127 = (((x509>x510)|x511)|x512);

    if (t127 != 4023U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x513 = UINT16_MAX;
	int16_t x515 = -1;
	uint32_t x516 = 1126615625U;
	volatile uint32_t t128 = UINT32_MAX;

    t128 = (((x513>x514)|x515)|x516);

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = -1;
	int8_t x519 = -1;
	int16_t x520 = INT16_MIN;
	static volatile int32_t t129 = -51;

    t129 = (((x517>x518)|x519)|x520);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	static int16_t x522 = -1;
	int64_t x523 = -1414940854630942448LL;
	uint16_t x524 = 126U;
	static int64_t t130 = 20672502LL;

    t130 = (((x521>x522)|x523)|x524);

    if (t130 != -1414940854630942337LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x526 = INT8_MAX;
	static int16_t x528 = INT16_MIN;

    t131 = (((x525>x526)|x527)|x528);

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 5U;
	static int64_t x530 = -1LL;
	int64_t x531 = INT64_MIN;
	uint32_t x532 = 1462566U;

    t132 = (((x529>x530)|x531)|x532);

    if (t132 != -9223372036853313241LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 44U;
	static volatile uint8_t x534 = 21U;
	static int64_t x535 = -1LL;
	int8_t x536 = -3;
	int64_t t133 = 43635202126582LL;

    t133 = (((x533>x534)|x535)|x536);

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	uint8_t x539 = 0U;
	uint8_t x540 = UINT8_MAX;
	int32_t t134 = -6899;

    t134 = (((x537>x538)|x539)|x540);

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x543 = UINT16_MAX;
	volatile int32_t t135 = 82249;

    t135 = (((x541>x542)|x543)|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x547 = -1LL;
	static int8_t x548 = INT8_MAX;
	volatile int64_t t136 = 1LL;

    t136 = (((x545>x546)|x547)|x548);

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	uint32_t x551 = 154U;
	int64_t x552 = 10599025106568878LL;
	int64_t t137 = -61LL;

    t137 = (((x549>x550)|x551)|x552);

    if (t137 != 10599025106568894LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	static int64_t x554 = INT64_MIN;
	int32_t x555 = -3434;
	int16_t x556 = INT16_MIN;

    t138 = (((x553>x554)|x555)|x556);

    if (t138 != -3433) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x560 = INT64_MAX;
	int64_t t139 = -3686256218037LL;

    t139 = (((x557>x558)|x559)|x560);

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 1043437966477370LLU;
	int8_t x562 = 0;
	volatile uint16_t x563 = 685U;
	int8_t x564 = INT8_MAX;
	static volatile int32_t t140 = 28272;

    t140 = (((x561>x562)|x563)|x564);

    if (t140 != 767) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint8_t x566 = 3U;
	static uint32_t x567 = 13U;
	int16_t x568 = INT16_MIN;

    t141 = (((x565>x566)|x567)|x568);

    if (t141 != 4294934541U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 73274U;
	volatile int16_t x570 = -22;
	volatile uint8_t x571 = 5U;
	int32_t x572 = INT32_MAX;

    t142 = (((x569>x570)|x571)|x572);

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x574 = INT8_MAX;
	int32_t x575 = INT32_MIN;
	uint64_t x576 = 219030201103LLU;
	volatile uint64_t t143 = 10749858429179160LLU;

    t143 = (((x573>x574)|x575)|x576);

    if (t143 != 18446744073696420623LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	int16_t x578 = -130;
	static uint16_t x579 = UINT16_MAX;

    t144 = (((x577>x578)|x579)|x580);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = -570;
	volatile int32_t t145 = -1713;

    t145 = (((x581>x582)|x583)|x584);

    if (t145 != -570) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 3U;
	int32_t x586 = -1;
	int16_t x587 = -1;
	int8_t x588 = -30;
	volatile int32_t t146 = 1;

    t146 = (((x585>x586)|x587)|x588);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = 489U;
	static volatile int8_t x590 = -1;
	volatile uint64_t x591 = 8069343LLU;
	int8_t x592 = -29;
	uint64_t t147 = UINT64_MAX;

    t147 = (((x589>x590)|x591)|x592);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x594 = -581750;
	int64_t x595 = 22086271692089LL;
	volatile int64_t t148 = 141960855883963620LL;

    t148 = (((x593>x594)|x595)|x596);

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = UINT64_MAX;
	int64_t x598 = -2650LL;
	volatile int8_t x599 = -2;
	uint32_t x600 = 1951684404U;
	uint32_t t149 = UINT32_MAX;

    t149 = (((x597>x598)|x599)|x600);

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x603 = -1;
	int16_t x604 = -1;
	int32_t t150 = -926;

    t150 = (((x601>x602)|x603)|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	static int32_t x606 = -1;
	static int64_t x607 = -1LL;
	int32_t x608 = 99392;

    t151 = (((x605>x606)|x607)|x608);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x609 = INT32_MAX;
	static int16_t x610 = 13;
	uint8_t x612 = UINT8_MAX;

    t152 = (((x609>x610)|x611)|x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x614 = 15U;
	volatile uint64_t t153 = 7462LLU;

    t153 = (((x613>x614)|x615)|x616);

    if (t153 != 121630583LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x617 = 97U;
	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	uint16_t x620 = 45U;
	int32_t t154 = 1;

    t154 = (((x617>x618)|x619)|x620);

    if (t154 != -32723) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x621 = -908;
	static int8_t x624 = INT8_MIN;
	volatile int64_t t155 = -1LL;

    t155 = (((x621>x622)|x623)|x624);

    if (t155 != -2LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = -1;
	int16_t x626 = 1014;
	static int16_t x627 = -1;
	int32_t x628 = -72472;
	volatile int32_t t156 = 0;

    t156 = (((x625>x626)|x627)|x628);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x630 = INT32_MIN;
	uint32_t x631 = UINT32_MAX;
	int16_t x632 = -1;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = (((x629>x630)|x631)|x632);

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x633 = UINT8_MAX;
	uint16_t x634 = 69U;
	static int8_t x635 = -1;
	uint8_t x636 = 7U;

    t158 = (((x633>x634)|x635)|x636);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x637 = 45;
	static int8_t x639 = INT8_MIN;
	int16_t x640 = 4232;
	volatile int32_t t159 = -199;

    t159 = (((x637>x638)|x639)|x640);

    if (t159 != -119) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = -1LL;
	static int64_t x642 = 1735LL;
	volatile int64_t x644 = INT64_MIN;

    t160 = (((x641>x642)|x643)|x644);

    if (t160 != -2LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 49407648904838238LL;
	static int64_t x647 = 2311926089928439358LL;
	int64_t x648 = INT64_MIN;
	volatile int64_t t161 = -57LL;

    t161 = (((x645>x646)|x647)|x648);

    if (t161 != -6911445946926336449LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -61;
	uint64_t x650 = 7031314882575872LLU;
	int32_t x652 = 46644064;
	uint64_t t162 = 218310517704310LLU;

    t162 = (((x649>x650)|x651)|x652);

    if (t162 != 25952238581LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = -71692;
	static uint32_t x654 = UINT32_MAX;
	int64_t x655 = INT64_MIN;
	int64_t t163 = INT64_MIN;

    t163 = (((x653>x654)|x655)|x656);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 7830697;
	uint8_t x658 = UINT8_MAX;
	int16_t x659 = INT16_MIN;
	static int8_t x660 = INT8_MAX;
	volatile int32_t t164 = -959513338;

    t164 = (((x657>x658)|x659)|x660);

    if (t164 != -32641) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint64_t x662 = UINT64_MAX;
	volatile int8_t x663 = INT8_MIN;
	uint64_t x664 = 1202401133LLU;

    t165 = (((x661>x662)|x663)|x664);

    if (t165 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x665 = INT16_MIN;
	int32_t x667 = -1;
	static int8_t x668 = INT8_MIN;
	int32_t t166 = 11;

    t166 = (((x665>x666)|x667)|x668);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -1;
	volatile int64_t x670 = -527313090348LL;
	int16_t x671 = INT16_MIN;
	static volatile int16_t x672 = INT16_MIN;
	volatile int32_t t167 = 686635;

    t167 = (((x669>x670)|x671)|x672);

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 1969;
	static int64_t x674 = -1LL;
	static uint8_t x676 = UINT8_MAX;
	static volatile int64_t t168 = 7513055488LL;

    t168 = (((x673>x674)|x675)|x676);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MAX;
	int64_t x680 = INT64_MIN;
	static int64_t t169 = -452029432192873LL;

    t169 = (((x677>x678)|x679)|x680);

    if (t169 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = 2902;
	int8_t x682 = -1;
	int8_t x683 = 1;
	volatile int8_t x684 = 1;
	static int32_t t170 = -259074133;

    t170 = (((x681>x682)|x683)|x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = -1;
	uint8_t x686 = 48U;
	int16_t x687 = INT16_MIN;
	volatile int32_t t171 = -14195714;

    t171 = (((x685>x686)|x687)|x688);

    if (t171 != -23235) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 36U;
	volatile int16_t x691 = INT16_MAX;
	static volatile int64_t x692 = -263303975039LL;

    t172 = (((x689>x690)|x691)|x692);

    if (t172 != -263303954433LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = 0;
	uint8_t x694 = 2U;
	int32_t x695 = -3;
	uint8_t x696 = 10U;
	static int32_t t173 = 405734738;

    t173 = (((x693>x694)|x695)|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x698 = UINT64_MAX;
	volatile uint8_t x699 = UINT8_MAX;
	volatile uint8_t x700 = UINT8_MAX;
	volatile int32_t t174 = 47;

    t174 = (((x697>x698)|x699)|x700);

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	int32_t x703 = 14;
	int16_t x704 = 318;
	int32_t t175 = 1873;

    t175 = (((x701>x702)|x703)|x704);

    if (t175 != 319) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 3U;
	static volatile uint64_t x706 = UINT64_MAX;
	uint64_t x708 = 459291240819267617LLU;
	static uint64_t t176 = 0LLU;

    t176 = (((x705>x706)|x707)|x708);

    if (t176 != 18446744072526436385LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x709 = 19U;
	static int8_t x710 = -26;
	static uint32_t x711 = 2848U;
	int32_t x712 = 1;
	static uint32_t t177 = 115743458U;

    t177 = (((x709>x710)|x711)|x712);

    if (t177 != 2849U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x713 = INT8_MAX;
	int16_t x714 = -11903;
	uint32_t x715 = 30U;
	static int16_t x716 = INT16_MIN;

    t178 = (((x713>x714)|x715)|x716);

    if (t178 != 4294934559U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile uint32_t x718 = 226U;
	int16_t x719 = INT16_MAX;
	int8_t x720 = -11;
	volatile int32_t t179 = 1668;

    t179 = (((x717>x718)|x719)|x720);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 3682LLU;
	static uint16_t x722 = 336U;
	int16_t x723 = INT16_MIN;
	static int64_t x724 = -1LL;
	volatile int64_t t180 = -218178413187977LL;

    t180 = (((x721>x722)|x723)|x724);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int64_t x727 = INT64_MIN;

    t181 = (((x725>x726)|x727)|x728);

    if (t181 != -13LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	int8_t x731 = -1;
	volatile int32_t x732 = -1;
	int32_t t182 = 1;

    t182 = (((x729>x730)|x731)|x732);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	static uint32_t x736 = UINT32_MAX;
	static volatile uint32_t t183 = UINT32_MAX;

    t183 = (((x733>x734)|x735)|x736);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x738 = INT8_MIN;
	int32_t x739 = INT32_MIN;
	int32_t x740 = 24666035;
	int32_t t184 = -180;

    t184 = (((x737>x738)|x739)|x740);

    if (t184 != -2122817613) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x742 = INT32_MIN;
	int8_t x743 = 0;
	volatile int32_t t185 = 758470708;

    t185 = (((x741>x742)|x743)|x744);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	uint32_t x747 = 7573U;
	int32_t x748 = -1;

    t186 = (((x745>x746)|x747)|x748);

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = -343170368683LL;
	volatile int8_t x751 = INT8_MAX;
	int8_t x752 = INT8_MAX;
	int32_t t187 = -892460;

    t187 = (((x749>x750)|x751)|x752);

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MAX;
	int8_t x755 = -2;
	int64_t x756 = 4636076044LL;
	static volatile int64_t t188 = -28LL;

    t188 = (((x753>x754)|x755)|x756);

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = -6;
	static volatile int64_t x759 = 2123763041468710907LL;
	uint16_t x760 = 20U;

    t189 = (((x757>x758)|x759)|x760);

    if (t189 != 2123763041468710911LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = -1;
	volatile uint32_t x762 = UINT32_MAX;
	uint64_t x763 = 9645207LLU;
	uint64_t t190 = 252314242505522LLU;

    t190 = (((x761>x762)|x763)|x764);

    if (t190 != 2147483647LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = 463457589LLU;
	uint64_t x766 = UINT64_MAX;
	volatile int32_t x767 = -6573211;
	int8_t x768 = INT8_MAX;

    t191 = (((x765>x766)|x767)|x768);

    if (t191 != -6573185) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 14103U;
	int64_t x770 = INT64_MIN;
	uint64_t x771 = 6528220852LLU;
	int64_t x772 = INT64_MIN;
	volatile uint64_t t192 = 37798004503850771LLU;

    t192 = (((x769>x770)|x771)|x772);

    if (t192 != 9223372043382996661LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = -1281561718LL;
	int8_t x774 = INT8_MIN;
	int8_t x776 = INT8_MAX;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (((x773>x774)|x775)|x776);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = UINT16_MAX;
	volatile int16_t x778 = -1;
	int8_t x779 = -1;
	int32_t x780 = 1;
	static int32_t t194 = 3652;

    t194 = (((x777>x778)|x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 673176LL;
	static volatile uint32_t x782 = 227U;
	int8_t x783 = 0;
	static uint8_t x784 = 15U;
	int32_t t195 = -22;

    t195 = (((x781>x782)|x783)|x784);

    if (t195 != 15) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 0;
	int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -1;
	volatile int32_t t196 = 79768;

    t196 = (((x785>x786)|x787)|x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	static uint8_t x790 = UINT8_MAX;
	int16_t x791 = INT16_MIN;
	int32_t x792 = -1;
	int32_t t197 = -2;

    t197 = (((x789>x790)|x791)|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = INT8_MAX;
	static volatile int64_t x794 = INT64_MIN;
	int32_t x795 = -882;
	static int32_t x796 = INT32_MIN;
	volatile int32_t t198 = 944105651;

    t198 = (((x793>x794)|x795)|x796);

    if (t198 != -881) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MAX;
	static int16_t x798 = 3;
	uint64_t x799 = UINT64_MAX;
	int64_t x800 = INT64_MIN;
	volatile uint64_t t199 = UINT64_MAX;

    t199 = (((x797>x798)|x799)|x800);

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

