
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

int32_t x2 = INT32_MIN;
volatile int32_t x8 = 0;
int32_t x9 = INT32_MIN;
static volatile int32_t t3 = 2639683;
int64_t x19 = INT64_MIN;
uint64_t x24 = 3486202534748LLU;
volatile int32_t t5 = 1;
int8_t x25 = INT8_MIN;
uint64_t x26 = UINT64_MAX;
int64_t x29 = INT64_MAX;
static volatile int32_t t8 = 941691;
int16_t x40 = INT16_MIN;
int32_t x49 = -1;
uint64_t x51 = UINT64_MAX;
static uint64_t x60 = 633014872442331353LLU;
static int64_t x62 = -911LL;
volatile int32_t t15 = 429409;
static int16_t x66 = INT16_MIN;
uint16_t x71 = 0U;
volatile int64_t x78 = INT64_MIN;
int8_t x80 = INT8_MIN;
static volatile int32_t t19 = 19825798;
uint32_t x82 = UINT32_MAX;
int32_t x92 = 947;
static volatile int32_t t23 = -236;
static int64_t x97 = -1LL;
int32_t t24 = 1;
int16_t x101 = INT16_MIN;
uint16_t x103 = 5445U;
volatile int32_t t25 = -16099;
int8_t x106 = INT8_MIN;
int8_t x108 = INT8_MAX;
static int16_t x114 = -192;
int64_t x117 = INT64_MIN;
int32_t t29 = 12834;
static volatile int8_t x122 = -1;
int64_t x125 = INT64_MIN;
int16_t x126 = -1;
int32_t t31 = 1;
uint8_t x130 = 35U;
uint32_t x137 = UINT32_MAX;
int8_t x140 = -1;
int64_t x143 = 571LL;
int16_t x148 = INT16_MIN;
uint32_t x151 = 204U;
int8_t x155 = INT8_MIN;
static uint64_t x158 = 21LLU;
volatile uint32_t x164 = UINT32_MAX;
volatile int16_t x165 = INT16_MIN;
int64_t x167 = -16LL;
static uint32_t x170 = 1641U;
int64_t x178 = 1833028540649LL;
volatile int32_t t46 = 67790874;
int8_t x190 = INT8_MAX;
int32_t t47 = 799226403;
int32_t t48 = -1;
static int64_t x197 = INT64_MIN;
uint16_t x228 = 2394U;
int16_t x230 = INT16_MIN;
volatile int8_t x234 = INT8_MAX;
volatile int64_t x235 = INT64_MIN;
int32_t t58 = -4;
int16_t x239 = INT16_MAX;
static int64_t x241 = -1LL;
int16_t x242 = -1;
uint16_t x251 = 1U;
static int32_t x252 = INT32_MIN;
volatile int32_t t64 = -30388;
int16_t x264 = INT16_MIN;
uint32_t x266 = 178456U;
int32_t x267 = -1;
static uint16_t x269 = 185U;
volatile int8_t x275 = -1;
uint32_t x278 = 44557U;
uint64_t x279 = 189LLU;
static int64_t x295 = INT64_MIN;
static volatile int32_t t75 = -19;
volatile uint16_t x315 = 11U;
uint64_t x316 = UINT64_MAX;
int64_t x318 = 5177866676319370LL;
int8_t x324 = INT8_MAX;
uint32_t x328 = 3531491U;
static volatile int16_t x330 = INT16_MAX;
static int32_t x344 = INT32_MIN;
volatile uint64_t x351 = 2247786858168076223LLU;
int64_t x352 = INT64_MIN;
int32_t x353 = INT32_MIN;
static volatile int64_t x354 = -1LL;
int16_t x359 = 6;
volatile uint32_t x360 = 1U;
int32_t t89 = -5264533;
static int64_t x366 = INT64_MIN;
uint32_t x372 = 196U;
volatile int32_t x373 = 4;
int8_t x381 = INT8_MIN;
static volatile int8_t x386 = -22;
int16_t x397 = INT16_MAX;
int32_t t99 = 336;
static volatile int32_t x402 = -363;
int32_t x406 = INT32_MIN;
int16_t x415 = 39;
int16_t x416 = INT16_MIN;
int32_t x431 = INT32_MIN;
volatile int8_t x433 = -1;
int32_t t109 = -25758629;
static int64_t x441 = INT64_MIN;
uint8_t x443 = UINT8_MAX;
static uint32_t x444 = UINT32_MAX;
uint16_t x455 = 95U;
int64_t x456 = INT64_MAX;
static int32_t t113 = 4866765;
int16_t x460 = -1;
static int64_t x470 = INT64_MIN;
uint64_t x471 = 830132975532LLU;
int32_t t117 = 740;
int32_t t118 = -53622;
int32_t x479 = INT32_MAX;
int64_t x480 = INT64_MIN;
int8_t x482 = 0;
uint64_t x484 = 1078904668LLU;
volatile int32_t t120 = -241054485;
volatile uint32_t x485 = 245879U;
uint64_t x486 = UINT64_MAX;
volatile int16_t x487 = 1;
volatile int32_t t122 = 451;
int8_t x494 = INT8_MIN;
int16_t x495 = INT16_MIN;
volatile uint8_t x500 = 0U;
int32_t t124 = 50683823;
static int32_t x502 = INT32_MIN;
volatile int32_t t125 = -3;
volatile uint64_t x506 = 1243535613540736463LLU;
int32_t t130 = -687;
int16_t x525 = -1;
int32_t t131 = -54105518;
int8_t x534 = -1;
int16_t x555 = -1;
int32_t x560 = INT32_MIN;
volatile int32_t t139 = 14545214;
int32_t t140 = 1417593;
volatile int32_t x568 = INT32_MIN;
int32_t x575 = -1;
int16_t x583 = 3;
volatile int32_t t145 = -59164651;
int16_t x593 = INT16_MIN;
uint32_t x595 = UINT32_MAX;
static uint32_t x596 = UINT32_MAX;
uint16_t x597 = 16817U;
int16_t x606 = INT16_MIN;
int32_t x610 = -1;
static uint64_t x612 = 845426692409435LLU;
static int32_t x616 = INT32_MIN;
uint8_t x620 = 62U;
volatile uint8_t x627 = UINT8_MAX;
static volatile int16_t x638 = -1;
uint16_t x639 = UINT16_MAX;
static int32_t x641 = INT32_MIN;
static int32_t t160 = 1864637;
uint16_t x651 = UINT16_MAX;
static volatile uint8_t x653 = 1U;
volatile int16_t x654 = 63;
int32_t t163 = 21;
int32_t x660 = INT32_MAX;
int16_t x668 = INT16_MIN;
int64_t x678 = INT64_MAX;
static volatile int32_t t169 = 1;
static int32_t x681 = INT32_MAX;
int32_t t172 = -21338;
static uint32_t x695 = 9U;
int8_t x698 = -1;
int64_t x700 = INT64_MAX;
static int16_t x701 = -1;
int8_t x708 = INT8_MIN;
static volatile int32_t t177 = 6689;
int8_t x715 = -1;
volatile int16_t x724 = INT16_MIN;
volatile int32_t t180 = -5;
int8_t x726 = INT8_MIN;
static volatile int32_t x729 = -1;
int8_t x733 = INT8_MAX;
int16_t x735 = -1;
int64_t x737 = 185637809988616785LL;
uint64_t x738 = 11LLU;
int32_t t184 = 1;
int8_t x742 = -1;
int64_t x743 = INT64_MIN;
volatile int32_t t185 = 24888;
int32_t x748 = INT32_MIN;
int32_t x750 = INT32_MIN;
int16_t x765 = INT16_MAX;
int32_t x771 = -1;
int8_t x772 = -52;
int8_t x794 = 0;
uint8_t x796 = UINT8_MAX;
volatile int16_t x798 = INT16_MIN;


void f0(void) {
    	int32_t x1 = 3235856;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -29;
	int32_t t0 = -10;

    t0 = ((x1>x2)*(x3!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -21;
	static volatile int64_t x6 = -1LL;
	volatile int8_t x7 = 1;
	volatile int32_t t1 = 439485944;

    t1 = ((x5>x6)*(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x10 = 110855274LLU;
	static volatile uint64_t x11 = 34496641691348LLU;
	int16_t x12 = -277;
	static volatile int32_t t2 = 15869047;

    t2 = ((x9>x10)*(x11!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int8_t x14 = 0;
	int8_t x15 = 0;
	volatile uint64_t x16 = UINT64_MAX;

    t3 = ((x13>x14)*(x15!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	static int32_t x18 = INT32_MIN;
	static int64_t x20 = INT64_MAX;
	volatile int32_t t4 = 2796314;

    t4 = ((x17>x18)*(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x21 = 0U;
	int64_t x22 = -1LL;
	uint64_t x23 = 46481LLU;

    t5 = ((x21>x22)*(x23!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x27 = INT8_MAX;
	volatile uint8_t x28 = 30U;
	int32_t t6 = -247441;

    t6 = ((x25>x26)*(x27!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = 1;
	int8_t x31 = -1;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = 3426726;

    t7 = ((x29>x30)*(x31!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static uint8_t x34 = 12U;
	static uint32_t x35 = 254U;
	volatile uint8_t x36 = 0U;

    t8 = ((x33>x34)*(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = 0U;
	volatile uint16_t x38 = 7U;
	volatile int16_t x39 = -1;
	int32_t t9 = 25761755;

    t9 = ((x37>x38)*(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 2U;
	int8_t x42 = 2;
	int16_t x43 = INT16_MIN;
	static uint64_t x44 = 6162840446654249065LLU;
	static int32_t t10 = 15610;

    t10 = ((x41>x42)*(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1606754LL;
	static volatile int16_t x46 = 2;
	uint32_t x47 = UINT32_MAX;
	static uint32_t x48 = UINT32_MAX;
	static int32_t t11 = -7004;

    t11 = ((x45>x46)*(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = -227557808LL;
	uint64_t x52 = 1633278487LLU;
	int32_t t12 = -47;

    t12 = ((x49>x50)*(x51!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MAX;
	int64_t x56 = -12432LL;
	static int32_t t13 = 3366641;

    t13 = ((x53>x54)*(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -58;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = 31;
	int32_t t14 = 23969;

    t14 = ((x57>x58)*(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -35;
	int8_t x63 = -1;
	int64_t x64 = INT64_MIN;

    t15 = ((x61>x62)*(x63!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int16_t x67 = INT16_MIN;
	int64_t x68 = -11980158239752539LL;
	volatile int32_t t16 = -516633346;

    t16 = ((x65>x66)*(x67!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = INT32_MAX;
	int32_t x70 = -32;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -259528221;

    t17 = ((x69>x70)*(x71!=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -7116880;
	static volatile int64_t x74 = INT64_MIN;
	static int16_t x75 = 95;
	int32_t x76 = -1;
	static volatile int32_t t18 = -243658;

    t18 = ((x73>x74)*(x75!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	static uint32_t x79 = UINT32_MAX;

    t19 = ((x77>x78)*(x79!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x83 = 7;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t20 = 3423087;

    t20 = ((x81>x82)*(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t21 = -259150421;

    t21 = ((x85>x86)*(x87!=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 3U;
	static volatile uint64_t x90 = UINT64_MAX;
	static volatile int8_t x91 = -17;
	int32_t t22 = 4;

    t22 = ((x89>x90)*(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	uint16_t x95 = UINT16_MAX;
	static int32_t x96 = INT32_MIN;

    t23 = ((x93>x94)*(x95!=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MIN;
	volatile uint64_t x99 = 6LLU;
	int64_t x100 = -1752024904754LL;

    t24 = ((x97>x98)*(x99!=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = 9;
	uint16_t x104 = 23U;

    t25 = ((x101>x102)*(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 0;
	int16_t x107 = INT16_MAX;
	int32_t t26 = -4039;

    t26 = ((x105>x106)*(x107!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x109 = 13943609448641LL;
	volatile int64_t x110 = -1LL;
	int16_t x111 = 794;
	int8_t x112 = INT8_MIN;
	int32_t t27 = -122278;

    t27 = ((x109>x110)*(x111!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	int8_t x115 = INT8_MAX;
	uint64_t x116 = 34601LLU;
	volatile int32_t t28 = 1;

    t28 = ((x113>x114)*(x115!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 2053451013U;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = 12312224;

    t29 = ((x117>x118)*(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1995;
	int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = UINT8_MAX;
	int32_t t30 = -2758;

    t30 = ((x121>x122)*(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x127 = UINT16_MAX;
	volatile int8_t x128 = 0;

    t31 = ((x125>x126)*(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 107U;
	volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = -3522;

    t32 = ((x129>x130)*(x131!=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 6868U;
	uint32_t x134 = 826472429U;
	static int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 538302622;

    t33 = ((x133>x134)*(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MIN;
	volatile int32_t t34 = -28841;

    t34 = ((x137>x138)*(x139!=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x141 = INT64_MIN;
	volatile int16_t x142 = 69;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = 270474;

    t35 = ((x141>x142)*(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -11;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 0U;
	int32_t t36 = -26;

    t36 = ((x145>x146)*(x147!=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MIN;
	int8_t x152 = -25;
	volatile int32_t t37 = 36956905;

    t37 = ((x149>x150)*(x151!=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = -9LL;
	uint16_t x154 = UINT16_MAX;
	int32_t x156 = 1;
	volatile int32_t t38 = -1;

    t38 = ((x153>x154)*(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 23U;
	uint32_t x159 = 159U;
	uint32_t x160 = 188940U;
	int32_t t39 = -31197649;

    t39 = ((x157>x158)*(x159!=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -18;
	int64_t x162 = INT64_MIN;
	uint16_t x163 = 254U;
	static int32_t t40 = 204033673;

    t40 = ((x161>x162)*(x163!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x166 = INT16_MIN;
	volatile int64_t x168 = INT64_MAX;
	volatile int32_t t41 = -62204232;

    t41 = ((x165>x166)*(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x169 = INT8_MIN;
	static int32_t x171 = 2435538;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t42 = 42;

    t42 = ((x169>x170)*(x171!=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 333LL;
	int8_t x174 = 1;
	volatile int16_t x175 = INT16_MAX;
	static int16_t x176 = INT16_MAX;
	static int32_t t43 = 798164616;

    t43 = ((x173>x174)*(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int8_t x179 = -5;
	uint8_t x180 = 57U;
	int32_t t44 = -1602;

    t44 = ((x177>x178)*(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -1LL;
	volatile uint64_t x182 = 375218951LLU;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = -33169LL;
	int32_t t45 = -19075130;

    t45 = ((x181>x182)*(x183!=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	volatile int8_t x187 = INT8_MIN;
	uint16_t x188 = 0U;

    t46 = ((x185>x186)*(x187!=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -1;
	uint16_t x191 = 2607U;
	static volatile int32_t x192 = INT32_MAX;

    t47 = ((x189>x190)*(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x193 = INT64_MAX;
	uint32_t x194 = 14025414U;
	int32_t x195 = -849099754;
	uint64_t x196 = UINT64_MAX;

    t48 = ((x193>x194)*(x195!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = 559;
	uint64_t x199 = 84275894282LLU;
	static uint32_t x200 = UINT32_MAX;
	int32_t t49 = 14135109;

    t49 = ((x197>x198)*(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	volatile uint8_t x202 = 3U;
	volatile int8_t x203 = -40;
	int64_t x204 = -217605273089690LL;
	static volatile int32_t t50 = -292052282;

    t50 = ((x201>x202)*(x203!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = 2U;
	static int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	int16_t x208 = INT16_MAX;
	static int32_t t51 = 87;

    t51 = ((x205>x206)*(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x209 = 12330U;
	int32_t x210 = INT32_MAX;
	volatile int8_t x211 = INT8_MIN;
	int64_t x212 = -1LL;
	int32_t t52 = -305164242;

    t52 = ((x209>x210)*(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = 3171U;
	int16_t x214 = INT16_MAX;
	static uint64_t x215 = 50790416LLU;
	int16_t x216 = 6;
	volatile int32_t t53 = 343;

    t53 = ((x213>x214)*(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -248;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = -1;
	int8_t x220 = -1;
	int32_t t54 = -481905;

    t54 = ((x217>x218)*(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	uint8_t x222 = 22U;
	int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -5734;

    t55 = ((x221>x222)*(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	volatile int8_t x226 = INT8_MIN;
	uint32_t x227 = 1482487U;
	int32_t t56 = -256032;

    t56 = ((x225>x226)*(x227!=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 179U;
	volatile int64_t x231 = -3452344369199LL;
	static int32_t x232 = INT32_MAX;
	int32_t t57 = -180685327;

    t57 = ((x229>x230)*(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 66669385U;
	static int32_t x236 = INT32_MAX;

    t58 = ((x233>x234)*(x235!=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	uint32_t x238 = 4U;
	uint64_t x240 = 215791125488LLU;
	static volatile int32_t t59 = -683499;

    t59 = ((x237>x238)*(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x243 = INT16_MAX;
	static int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -10049;

    t60 = ((x241>x242)*(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = 86U;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 2379301U;
	volatile int32_t t61 = 53294963;

    t61 = ((x245>x246)*(x247!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 447263446810456LLU;
	int64_t x250 = INT64_MIN;
	volatile int32_t t62 = -25;

    t62 = ((x249>x250)*(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	static uint16_t x254 = 150U;
	int64_t x255 = -88866437918LL;
	int16_t x256 = INT16_MAX;
	int32_t t63 = -746975524;

    t63 = ((x253>x254)*(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x257 = INT16_MIN;
	static int8_t x258 = 0;
	int8_t x259 = 14;
	uint16_t x260 = UINT16_MAX;

    t64 = ((x257>x258)*(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	static uint16_t x262 = 27U;
	int16_t x263 = -1;
	int32_t t65 = 11785;

    t65 = ((x261>x262)*(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = -1;
	int64_t x268 = -57921332750LL;
	int32_t t66 = 3;

    t66 = ((x265>x266)*(x267!=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = -87LL;
	int32_t x271 = INT32_MIN;
	int64_t x272 = 198081762LL;
	volatile int32_t t67 = 1254;

    t67 = ((x269>x270)*(x271!=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MAX;
	int32_t x274 = 384;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = 26072;

    t68 = ((x273>x274)*(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	static int16_t x280 = INT16_MIN;
	static int32_t t69 = 15651467;

    t69 = ((x277>x278)*(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 165U;
	int32_t x282 = -1;
	static uint16_t x283 = UINT16_MAX;
	static volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -66854457;

    t70 = ((x281>x282)*(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 27;
	uint8_t x286 = UINT8_MAX;
	int64_t x287 = INT64_MAX;
	int16_t x288 = 5;
	int32_t t71 = 878264;

    t71 = ((x285>x286)*(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	uint32_t x290 = 53886U;
	uint64_t x291 = 8306380880463301LLU;
	static int32_t x292 = 14157272;
	volatile int32_t t72 = -1326;

    t72 = ((x289>x290)*(x291!=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 0U;
	int16_t x294 = INT16_MIN;
	uint32_t x296 = UINT32_MAX;
	static int32_t t73 = -768539297;

    t73 = ((x293>x294)*(x295!=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x297 = INT16_MIN;
	volatile uint32_t x298 = 43U;
	static volatile uint32_t x299 = 203354U;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 1;

    t74 = ((x297>x298)*(x299!=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 79515;
	int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MIN;

    t75 = ((x301>x302)*(x303!=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -5028182455LL;
	int32_t x306 = 7059;
	static int32_t x307 = INT32_MIN;
	int32_t x308 = 6074;
	static int32_t t76 = 1;

    t76 = ((x305>x306)*(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	static int8_t x310 = INT8_MAX;
	static int64_t x311 = 50581775158327152LL;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t77 = -17824;

    t77 = ((x309>x310)*(x311!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x313 = 0U;
	static uint8_t x314 = 29U;
	volatile int32_t t78 = -1660;

    t78 = ((x313>x314)*(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	static uint8_t x319 = 1U;
	volatile int16_t x320 = INT16_MAX;
	int32_t t79 = -17555;

    t79 = ((x317>x318)*(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x321 = 0U;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = 58LLU;
	int32_t t80 = -1;

    t80 = ((x321>x322)*(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -24883196LL;
	int8_t x326 = -3;
	static int32_t x327 = -100;
	static int32_t t81 = -28;

    t81 = ((x325>x326)*(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -367067219611LL;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -1;
	int32_t t82 = 8715522;

    t82 = ((x329>x330)*(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	int8_t x334 = 27;
	int64_t x335 = INT64_MIN;
	static int8_t x336 = -1;
	volatile int32_t t83 = -3;

    t83 = ((x333>x334)*(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 4139765U;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	volatile int16_t x340 = -1;
	int32_t t84 = 458160;

    t84 = ((x337>x338)*(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x341 = 52U;
	int64_t x342 = INT64_MAX;
	volatile uint8_t x343 = UINT8_MAX;
	int32_t t85 = -4448;

    t85 = ((x341>x342)*(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 914270790324LLU;
	uint8_t x346 = 13U;
	int16_t x347 = INT16_MIN;
	static uint8_t x348 = 68U;
	volatile int32_t t86 = 5660;

    t86 = ((x345>x346)*(x347!=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x349 = INT32_MAX;
	static uint32_t x350 = 27261U;
	volatile int32_t t87 = -5;

    t87 = ((x349>x350)*(x351!=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x355 = INT16_MAX;
	static int32_t x356 = INT32_MIN;
	int32_t t88 = -4;

    t88 = ((x353>x354)*(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = UINT64_MAX;
	uint16_t x358 = UINT16_MAX;

    t89 = ((x357>x358)*(x359!=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 19260U;
	volatile int32_t x364 = -1;
	static volatile int32_t t90 = 6;

    t90 = ((x361>x362)*(x363!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = 110045;

    t91 = ((x365>x366)*(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x369 = 343U;
	int64_t x370 = 1833610LL;
	uint32_t x371 = UINT32_MAX;
	volatile int32_t t92 = 22765858;

    t92 = ((x369>x370)*(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x374 = UINT16_MAX;
	static uint32_t x375 = 28U;
	int16_t x376 = INT16_MIN;
	static int32_t t93 = 28495973;

    t93 = ((x373>x374)*(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 1;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t94 = -102817;

    t94 = ((x377>x378)*(x379!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = INT16_MAX;
	static int64_t x383 = -1LL;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 478199191;

    t95 = ((x381>x382)*(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = -1;
	volatile int64_t x387 = INT64_MAX;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t96 = -92811;

    t96 = ((x385>x386)*(x387!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = -1LL;
	int64_t x390 = 13272672328803073LL;
	volatile int32_t x391 = INT32_MIN;
	uint32_t x392 = 20U;
	volatile int32_t t97 = -83;

    t97 = ((x389>x390)*(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	int64_t x394 = -40773LL;
	int32_t x395 = 3;
	uint64_t x396 = 2603317745512194153LLU;
	int32_t t98 = -39;

    t98 = ((x393>x394)*(x395!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x398 = 48;
	int16_t x399 = 410;
	volatile int64_t x400 = -1LL;

    t99 = ((x397>x398)*(x399!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = 0;
	uint32_t x403 = 179U;
	uint8_t x404 = UINT8_MAX;
	int32_t t100 = 4;

    t100 = ((x401>x402)*(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = 28;
	volatile int32_t t101 = 661213;

    t101 = ((x405>x406)*(x407!=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = -1;
	int32_t x411 = -1;
	int8_t x412 = INT8_MIN;
	int32_t t102 = 78593;

    t102 = ((x409>x410)*(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = -1LL;
	volatile int64_t x414 = -1LL;
	static volatile int32_t t103 = 92885260;

    t103 = ((x413>x414)*(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 7;
	static volatile uint8_t x418 = UINT8_MAX;
	static volatile int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t104 = -305438281;

    t104 = ((x417>x418)*(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	uint32_t x422 = 979836U;
	int16_t x423 = -1;
	int16_t x424 = -10540;
	int32_t t105 = -235038;

    t105 = ((x421>x422)*(x423!=x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 3938750469071075LL;
	static uint32_t x426 = 450761U;
	volatile int64_t x427 = -6258824LL;
	int64_t x428 = INT64_MIN;
	static int32_t t106 = -30;

    t106 = ((x425>x426)*(x427!=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x430 = INT16_MIN;
	int32_t x432 = -21;
	static volatile int32_t t107 = 0;

    t107 = ((x429>x430)*(x431!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 197U;
	static uint64_t x435 = 4896449185296647LLU;
	int8_t x436 = 1;
	volatile int32_t t108 = 8;

    t108 = ((x433>x434)*(x435!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 255146730LL;
	static uint16_t x438 = 348U;
	static int16_t x439 = INT16_MAX;
	int16_t x440 = INT16_MAX;

    t109 = ((x437>x438)*(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x442 = 538781443839LLU;
	int32_t t110 = 99;

    t110 = ((x441>x442)*(x443!=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	int64_t x446 = INT64_MAX;
	static uint64_t x447 = 714LLU;
	static int8_t x448 = INT8_MAX;
	static int32_t t111 = -35147;

    t111 = ((x445>x446)*(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x449 = -1;
	int64_t x450 = -1LL;
	int8_t x451 = 46;
	int64_t x452 = 344569755LL;
	volatile int32_t t112 = 25186281;

    t112 = ((x449>x450)*(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 76U;
	uint64_t x454 = 92LLU;

    t113 = ((x453>x454)*(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 169599578U;
	int64_t x458 = -1LL;
	int64_t x459 = INT64_MIN;
	int32_t t114 = 527618775;

    t114 = ((x457>x458)*(x459!=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x461 = INT64_MAX;
	uint16_t x462 = UINT16_MAX;
	volatile int64_t x463 = 549054914356793LL;
	uint64_t x464 = 164110LLU;
	volatile int32_t t115 = -380951;

    t115 = ((x461>x462)*(x463!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	volatile int16_t x466 = -1;
	int16_t x467 = INT16_MIN;
	int64_t x468 = -65486524744189888LL;
	int32_t t116 = -5746628;

    t116 = ((x465>x466)*(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 83U;
	int64_t x472 = INT64_MIN;

    t117 = ((x469>x470)*(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = 11836956247631LL;
	int64_t x474 = INT64_MIN;
	uint16_t x475 = 1641U;
	int32_t x476 = INT32_MIN;

    t118 = ((x473>x474)*(x475!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = -1;
	uint64_t x478 = 28439LLU;
	static int32_t t119 = -43259;

    t119 = ((x477>x478)*(x479!=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int8_t x483 = INT8_MIN;

    t120 = ((x481>x482)*(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x488 = INT8_MAX;
	volatile int32_t t121 = -823507414;

    t121 = ((x485>x486)*(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 317U;
	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = 18U;
	uint64_t x492 = UINT64_MAX;

    t122 = ((x489>x490)*(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	int8_t x496 = INT8_MIN;
	volatile int32_t t123 = 867362;

    t123 = ((x493>x494)*(x495!=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x497 = UINT16_MAX;
	int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MIN;

    t124 = ((x497>x498)*(x499!=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 96827749491LLU;
	static uint8_t x503 = 0U;
	uint8_t x504 = UINT8_MAX;

    t125 = ((x501>x502)*(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	int16_t x507 = -14;
	volatile int16_t x508 = INT16_MAX;
	volatile int32_t t126 = -2499;

    t126 = ((x505>x506)*(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MIN;
	uint64_t x511 = 168LLU;
	uint32_t x512 = 466651545U;
	int32_t t127 = 7;

    t127 = ((x509>x510)*(x511!=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MIN;
	static uint64_t x515 = 1259746LLU;
	uint8_t x516 = 20U;
	int32_t t128 = 0;

    t128 = ((x513>x514)*(x515!=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x517 = UINT32_MAX;
	int32_t x518 = -1;
	int8_t x519 = INT8_MIN;
	int16_t x520 = INT16_MAX;
	int32_t t129 = -29;

    t129 = ((x517>x518)*(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	static int64_t x522 = INT64_MAX;
	volatile int16_t x523 = -1;
	volatile int8_t x524 = INT8_MIN;

    t130 = ((x521>x522)*(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x526 = INT16_MIN;
	static int8_t x527 = 2;
	int64_t x528 = -1LL;

    t131 = ((x525>x526)*(x527!=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = INT8_MIN;
	int64_t x530 = 3333123695072515LL;
	static int8_t x531 = INT8_MAX;
	int8_t x532 = INT8_MIN;
	static int32_t t132 = -40932694;

    t132 = ((x529>x530)*(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = -27;
	static int32_t x535 = 5602;
	volatile int64_t x536 = INT64_MAX;
	static volatile int32_t t133 = -10164366;

    t133 = ((x533>x534)*(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -64;
	int64_t x538 = 7560569128347843LL;
	int64_t x539 = INT64_MIN;
	volatile int16_t x540 = INT16_MAX;
	static int32_t t134 = -502500439;

    t134 = ((x537>x538)*(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = -505;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -741;
	volatile uint16_t x544 = UINT16_MAX;
	int32_t t135 = 181182;

    t135 = ((x541>x542)*(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = -1;
	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MAX;
	int16_t x548 = -341;
	int32_t t136 = -139;

    t136 = ((x545>x546)*(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MAX;
	volatile int16_t x551 = INT16_MIN;
	volatile int64_t x552 = -710406139LL;
	static int32_t t137 = -1;

    t137 = ((x549>x550)*(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 1276103618U;
	uint16_t x554 = 4802U;
	uint8_t x556 = 1U;
	int32_t t138 = 0;

    t138 = ((x553>x554)*(x555!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = -16603466LL;
	uint32_t x558 = 1222U;
	int8_t x559 = -23;

    t139 = ((x557>x558)*(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int32_t x561 = -27384207;
	volatile int32_t x562 = INT32_MIN;
	int16_t x563 = INT16_MAX;
	int8_t x564 = -5;

    t140 = ((x561>x562)*(x563!=x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint64_t x566 = UINT64_MAX;
	volatile int64_t x567 = INT64_MAX;
	int32_t t141 = 8;

    t141 = ((x565>x566)*(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	uint32_t x570 = 33U;
	int32_t x571 = INT32_MIN;
	uint64_t x572 = 115505346493431581LLU;
	volatile int32_t t142 = -41;

    t142 = ((x569>x570)*(x571!=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	static uint16_t x574 = 1U;
	static uint64_t x576 = 112010LLU;
	static int32_t t143 = 769209584;

    t143 = ((x573>x574)*(x575!=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	int32_t x579 = -942;
	int64_t x580 = INT64_MIN;
	volatile int32_t t144 = 521;

    t144 = ((x577>x578)*(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = -1;
	volatile uint16_t x582 = 5179U;
	int8_t x584 = -4;

    t145 = ((x581>x582)*(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x585 = INT8_MAX;
	int32_t x586 = INT32_MAX;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MAX;
	volatile int32_t t146 = -28095738;

    t146 = ((x585>x586)*(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = INT32_MAX;
	int16_t x590 = 0;
	static int8_t x591 = INT8_MIN;
	int64_t x592 = INT64_MAX;
	int32_t t147 = -1;

    t147 = ((x589>x590)*(x591!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x594 = INT16_MAX;
	static int32_t t148 = 72028;

    t148 = ((x593>x594)*(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x598 = 2U;
	int16_t x599 = -1;
	static uint16_t x600 = 211U;
	int32_t t149 = 232711;

    t149 = ((x597>x598)*(x599!=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 7U;
	int8_t x602 = INT8_MAX;
	static int64_t x603 = 1755049011212646568LL;
	int32_t x604 = INT32_MIN;
	int32_t t150 = 36939;

    t150 = ((x601>x602)*(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x605 = INT32_MAX;
	int64_t x607 = INT64_MIN;
	int16_t x608 = 1;
	static int32_t t151 = -67;

    t151 = ((x605>x606)*(x607!=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x609 = 21446546U;
	int16_t x611 = 13003;
	int32_t t152 = -206;

    t152 = ((x609>x610)*(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MAX;
	uint8_t x614 = 1U;
	static volatile uint16_t x615 = UINT16_MAX;
	int32_t t153 = 4118846;

    t153 = ((x613>x614)*(x615!=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 3U;
	int64_t x618 = -1LL;
	uint16_t x619 = UINT16_MAX;
	int32_t t154 = -8;

    t154 = ((x617>x618)*(x619!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MIN;
	uint64_t x622 = 608517545798241179LLU;
	volatile int32_t x623 = INT32_MIN;
	int32_t x624 = INT32_MAX;
	volatile int32_t t155 = -2;

    t155 = ((x621>x622)*(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	uint64_t x626 = 23643LLU;
	int32_t x628 = -1;
	volatile int32_t t156 = -3;

    t156 = ((x625>x626)*(x627!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MIN;
	int32_t x630 = INT32_MIN;
	static uint32_t x631 = UINT32_MAX;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -168;

    t157 = ((x629>x630)*(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 0U;
	uint64_t x634 = 762420115669LLU;
	uint64_t x635 = 2832317054LLU;
	static uint16_t x636 = 12U;
	volatile int32_t t158 = 6770102;

    t158 = ((x633>x634)*(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 5051476890850LLU;
	int16_t x640 = 61;
	volatile int32_t t159 = 62664871;

    t159 = ((x637>x638)*(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = INT64_MAX;
	uint8_t x643 = 104U;
	static uint64_t x644 = 8036448482288LLU;

    t160 = ((x641>x642)*(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = -1;
	int16_t x646 = -1;
	volatile int64_t x647 = INT64_MIN;
	volatile uint8_t x648 = 7U;
	int32_t t161 = -24;

    t161 = ((x645>x646)*(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	uint8_t x650 = UINT8_MAX;
	int32_t x652 = INT32_MIN;
	int32_t t162 = 93;

    t162 = ((x649>x650)*(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x655 = 7;
	uint32_t x656 = UINT32_MAX;

    t163 = ((x653>x654)*(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x657 = 463276207LLU;
	static int32_t x658 = 556;
	int16_t x659 = INT16_MIN;
	volatile int32_t t164 = -59;

    t164 = ((x657>x658)*(x659!=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = 105U;
	int8_t x662 = 6;
	int8_t x663 = -14;
	static int64_t x664 = INT64_MIN;
	volatile int32_t t165 = 5;

    t165 = ((x661>x662)*(x663!=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = UINT64_MAX;
	int64_t x666 = 6272605973LL;
	uint64_t x667 = 418LLU;
	int32_t t166 = 84;

    t166 = ((x665>x666)*(x667!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = 6102210LL;
	int8_t x670 = -8;
	int8_t x671 = -10;
	int8_t x672 = -7;
	static int32_t t167 = 409320;

    t167 = ((x669>x670)*(x671!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = INT64_MAX;
	int64_t x674 = -1LL;
	int16_t x675 = INT16_MIN;
	int64_t x676 = INT64_MAX;
	int32_t t168 = -4;

    t168 = ((x673>x674)*(x675!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -1;
	uint8_t x679 = 0U;
	static uint32_t x680 = UINT32_MAX;

    t169 = ((x677>x678)*(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x682 = INT32_MIN;
	static volatile int64_t x683 = INT64_MIN;
	volatile int32_t x684 = INT32_MAX;
	static volatile int32_t t170 = -33353463;

    t170 = ((x681>x682)*(x683!=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 737U;
	volatile int64_t x686 = -2983142100897LL;
	static int8_t x687 = 0;
	int64_t x688 = INT64_MIN;
	int32_t t171 = -147021;

    t171 = ((x685>x686)*(x687!=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x689 = UINT64_MAX;
	static int32_t x690 = -3533;
	int8_t x691 = INT8_MAX;
	static uint64_t x692 = UINT64_MAX;

    t172 = ((x689>x690)*(x691!=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 10U;
	int32_t x694 = INT32_MIN;
	static volatile int32_t x696 = -59698397;
	volatile int32_t t173 = 97819;

    t173 = ((x693>x694)*(x695!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x697 = -1;
	uint8_t x699 = UINT8_MAX;
	static int32_t t174 = 6030;

    t174 = ((x697>x698)*(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x702 = UINT8_MAX;
	int8_t x703 = -1;
	int64_t x704 = -1LL;
	volatile int32_t t175 = -48494;

    t175 = ((x701>x702)*(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static uint16_t x706 = 2U;
	int32_t x707 = 0;
	int32_t t176 = -56;

    t176 = ((x705>x706)*(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = 1913U;
	static uint64_t x710 = 301514870045110904LLU;
	volatile uint64_t x711 = 25306793378LLU;
	int32_t x712 = -1;

    t177 = ((x709>x710)*(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	uint8_t x714 = 2U;
	int64_t x716 = -1LL;
	int32_t t178 = 14372;

    t178 = ((x713>x714)*(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = 2729;
	volatile int8_t x718 = INT8_MIN;
	int32_t x719 = -1;
	int16_t x720 = -1;
	volatile int32_t t179 = 45579;

    t179 = ((x717>x718)*(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = INT8_MIN;
	int8_t x722 = INT8_MIN;
	int32_t x723 = INT32_MIN;

    t180 = ((x721>x722)*(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x727 = -1;
	int16_t x728 = INT16_MAX;
	static volatile int32_t t181 = -13411425;

    t181 = ((x725>x726)*(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x730 = INT8_MIN;
	int8_t x731 = INT8_MAX;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t182 = 39899;

    t182 = ((x729>x730)*(x731!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = UINT16_MAX;
	int8_t x736 = INT8_MIN;
	static volatile int32_t t183 = 0;

    t183 = ((x733>x734)*(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x739 = -226;
	int32_t x740 = -1;

    t184 = ((x737>x738)*(x739!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MAX;
	int8_t x744 = -1;

    t185 = ((x741>x742)*(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	static int32_t x746 = INT32_MAX;
	uint32_t x747 = 70137U;
	int32_t t186 = 692;

    t186 = ((x745>x746)*(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static int64_t x751 = INT64_MAX;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t187 = 452979472;

    t187 = ((x749>x750)*(x751!=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -1LL;
	int16_t x754 = INT16_MIN;
	int64_t x755 = -1LL;
	int8_t x756 = 1;
	static volatile int32_t t188 = 933887701;

    t188 = ((x753>x754)*(x755!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 57U;
	volatile int8_t x758 = -1;
	volatile uint32_t x759 = 34402U;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t189 = -1741925;

    t189 = ((x757>x758)*(x759!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = -9;
	volatile int8_t x762 = INT8_MIN;
	int64_t x763 = -2119LL;
	int8_t x764 = INT8_MIN;
	int32_t t190 = -123;

    t190 = ((x761>x762)*(x763!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x766 = 27717U;
	int16_t x767 = INT16_MIN;
	uint8_t x768 = UINT8_MAX;
	static volatile int32_t t191 = -496972197;

    t191 = ((x765>x766)*(x767!=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 256746078272LLU;
	uint16_t x770 = 96U;
	volatile int32_t t192 = 659;

    t192 = ((x769>x770)*(x771!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 4U;
	static int64_t x774 = 88677004420LL;
	volatile int16_t x775 = INT16_MIN;
	int32_t x776 = 818530442;
	volatile int32_t t193 = -16972114;

    t193 = ((x773>x774)*(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	static int64_t x778 = INT64_MAX;
	uint64_t x779 = UINT64_MAX;
	static int8_t x780 = INT8_MAX;
	int32_t t194 = 21360164;

    t194 = ((x777>x778)*(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	int16_t x782 = INT16_MIN;
	volatile int32_t x783 = INT32_MIN;
	uint32_t x784 = 2021797911U;
	volatile int32_t t195 = -352165940;

    t195 = ((x781>x782)*(x783!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x785 = 0U;
	static volatile int32_t x786 = INT32_MIN;
	static uint16_t x787 = 44U;
	int16_t x788 = 6877;
	static int32_t t196 = 445038549;

    t196 = ((x785>x786)*(x787!=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	int8_t x790 = -1;
	int16_t x791 = INT16_MIN;
	volatile uint8_t x792 = 7U;
	int32_t t197 = 144898;

    t197 = ((x789>x790)*(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 30620U;
	int8_t x795 = INT8_MAX;
	int32_t t198 = -4194866;

    t198 = ((x793>x794)*(x795!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x797 = UINT16_MAX;
	int32_t x799 = -4;
	int64_t x800 = 1917882209488LL;
	volatile int32_t t199 = 25795;

    t199 = ((x797>x798)*(x799!=x800));

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

