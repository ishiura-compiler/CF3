
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

int8_t x8 = 24;
int64_t x9 = INT64_MIN;
uint16_t x12 = UINT16_MAX;
volatile int64_t t2 = 2962754LL;
int64_t x14 = 63490252338563LL;
volatile int16_t x15 = 0;
int32_t x19 = 0;
int64_t x20 = INT64_MAX;
int64_t t4 = -442000750016LL;
int8_t x29 = INT8_MAX;
volatile int32_t x36 = INT32_MIN;
int16_t x43 = INT16_MIN;
int32_t x48 = -40259;
uint32_t x53 = UINT32_MAX;
volatile int64_t t13 = 29703248195LL;
int8_t x57 = -2;
volatile uint64_t t16 = 46026604LLU;
static uint32_t x72 = UINT32_MAX;
int16_t x73 = 1311;
static volatile uint32_t x78 = 478532680U;
uint32_t x80 = 688599077U;
int64_t x83 = INT64_MAX;
int16_t x84 = INT16_MIN;
uint16_t x90 = 1U;
static volatile int16_t x91 = 0;
int8_t x92 = -29;
uint64_t x93 = 27LLU;
static int8_t x103 = INT8_MIN;
int16_t x110 = -20;
int32_t x132 = -18;
int8_t x145 = 1;
uint64_t x148 = 2LLU;
int64_t x149 = INT64_MIN;
int64_t x155 = -1LL;
static int8_t x165 = -1;
int32_t x167 = INT32_MIN;
uint8_t x168 = 3U;
volatile int64_t t41 = -61LL;
volatile int32_t x171 = -93942646;
uint64_t x179 = 5849125300LLU;
uint8_t x180 = UINT8_MAX;
uint16_t x182 = 3647U;
uint32_t x185 = 1U;
uint32_t x189 = UINT32_MAX;
uint8_t x191 = 12U;
uint8_t x192 = UINT8_MAX;
uint8_t x193 = 3U;
static volatile int32_t x217 = INT32_MIN;
static int64_t x219 = 344905LL;
static uint8_t x220 = 2U;
int8_t x221 = INT8_MAX;
volatile uint32_t t55 = 5860U;
int32_t x233 = INT32_MIN;
volatile int32_t x234 = -60430647;
int32_t x243 = -1;
static int32_t t60 = -24821;
uint16_t x245 = 31086U;
int16_t x250 = INT16_MIN;
int32_t t63 = 603305;
uint64_t x259 = UINT64_MAX;
int32_t x263 = INT32_MIN;
static volatile uint64_t t66 = 119471695LLU;
volatile int64_t t68 = 6162511348LL;
static int8_t x278 = -1;
uint8_t x288 = 4U;
int64_t x289 = -1LL;
int64_t t75 = -138020040276LL;
volatile uint64_t t76 = 65221768LLU;
int16_t x311 = 1127;
int8_t x312 = INT8_MIN;
uint8_t x314 = 5U;
volatile int32_t x316 = INT32_MAX;
int32_t x317 = INT32_MIN;
volatile int8_t x319 = INT8_MIN;
int64_t t80 = 819LL;
uint8_t x329 = 1U;
int16_t x342 = INT16_MIN;
uint16_t x348 = UINT16_MAX;
uint32_t x355 = UINT32_MAX;
int16_t x360 = INT16_MIN;
uint16_t x362 = UINT16_MAX;
static uint64_t t90 = 81307498333485015LLU;
volatile uint16_t x368 = 169U;
volatile int64_t x373 = -504LL;
static int8_t x374 = INT8_MIN;
int32_t x375 = INT32_MIN;
uint32_t x376 = UINT32_MAX;
int8_t x380 = INT8_MAX;
static volatile uint64_t x388 = UINT64_MAX;
int8_t x394 = -1;
int8_t x396 = -1;
uint16_t x401 = 3U;
int8_t x402 = INT8_MIN;
volatile int16_t x410 = 26;
uint16_t x419 = 20U;
int8_t x422 = -1;
uint64_t x423 = 11637190453054465LLU;
int16_t x433 = INT16_MIN;
uint64_t t111 = 33062423214727365LLU;
uint64_t x451 = 41038LLU;
uint8_t x460 = 0U;
static int16_t x465 = INT16_MIN;
int16_t x478 = -1;
uint16_t x482 = 10U;
uint32_t x483 = 232599143U;
static uint64_t x484 = UINT64_MAX;
uint16_t x485 = 1U;
volatile uint64_t t121 = 182078825LLU;
uint32_t x500 = 1787U;
static int32_t x503 = -542;
static volatile int8_t x504 = INT8_MIN;
volatile int64_t x508 = INT64_MIN;
int8_t x513 = INT8_MIN;
static volatile int32_t t128 = 47;
int64_t x520 = -141218103783715LL;
uint8_t x523 = 1U;
static uint8_t x524 = UINT8_MAX;
int16_t x535 = INT16_MAX;
static int16_t x536 = -43;
uint16_t x537 = 3273U;
int8_t x548 = -1;
static volatile int64_t t136 = 11573300960535LL;
static int64_t x549 = INT64_MIN;
static int64_t x553 = INT64_MIN;
volatile uint64_t x554 = UINT64_MAX;
volatile int8_t x558 = INT8_MAX;
static uint64_t x566 = UINT64_MAX;
int64_t x567 = INT64_MIN;
static int32_t x570 = INT32_MIN;
int64_t t142 = -292597839700LL;
int64_t x575 = 512887LL;
volatile uint64_t t143 = 1381750LLU;
static int64_t t144 = 5745092599LL;
int64_t x583 = INT64_MAX;
volatile uint16_t x587 = 3U;
static int32_t t146 = -99;
static int64_t x589 = INT64_MIN;
int8_t x597 = INT8_MIN;
int64_t x607 = INT64_MIN;
int32_t x608 = INT32_MIN;
static int8_t x610 = INT8_MAX;
int32_t t153 = 1;
int64_t x617 = -1LL;
static uint16_t x622 = 522U;
int64_t x623 = -344633LL;
volatile uint64_t t155 = 330526LLU;
uint8_t x629 = 29U;
int64_t x631 = -1LL;
uint8_t x633 = 0U;
int32_t x637 = INT32_MAX;
int8_t x640 = 0;
int16_t x641 = INT16_MIN;
int32_t x644 = 98763;
int8_t x646 = INT8_MIN;
uint32_t t161 = 864830150U;
volatile uint64_t t162 = 1925LLU;
uint64_t x655 = 12201825211LLU;
uint16_t x659 = 7076U;
int16_t x660 = -373;
int64_t x663 = INT64_MAX;
static int64_t t165 = -24LL;
int8_t x667 = -1;
volatile int8_t x670 = INT8_MIN;
static int64_t x672 = -1LL;
int8_t x673 = -9;
uint64_t t172 = 51140683080094LLU;
uint64_t t173 = 661818LLU;
static uint8_t x709 = 0U;
uint32_t t177 = 1653478954U;
static volatile uint32_t x716 = 192224U;
uint64_t x720 = UINT64_MAX;
uint32_t x721 = 2U;
static int64_t t182 = 1LL;
volatile int64_t t183 = 4569488749188LL;
uint64_t x746 = UINT64_MAX;
int8_t x748 = INT8_MIN;
volatile uint16_t x759 = 2257U;
volatile uint8_t x763 = 0U;
uint64_t t190 = 3690606569840982LLU;
int8_t x765 = INT8_MIN;
int8_t x769 = -1;
int64_t x774 = INT64_MIN;
int16_t x778 = 36;
volatile uint8_t x781 = 18U;
int32_t x785 = -1;
int64_t x797 = INT64_MAX;
volatile int16_t x798 = INT16_MIN;
int8_t x800 = INT8_MAX;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	static int64_t x2 = -1LL;
	static int64_t x3 = INT64_MIN;
	static uint16_t x4 = 0U;
	volatile int64_t t0 = 30177196472261LL;

    t0 = ((x1^x2)^(x3^x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int32_t x6 = -1169802;
	uint32_t x7 = 9806U;
	volatile uint32_t t1 = 1911U;

    t1 = ((x5^x6)^(x7^x8));

    if (t1 != 1179615U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x10 = 1U;
	volatile int16_t x11 = INT16_MIN;

    t2 = ((x9^x10)^(x11^x12));

    if (t2 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 0LLU;
	volatile int32_t x16 = -221612;
	static volatile uint64_t t3 = 8877032793968585812LLU;

    t3 = ((x13^x14)^(x15^x16));

    if (t3 != 18446680583457434583LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -28374123894544987LL;
	int32_t x18 = 1839690;

    t4 = ((x17^x18)^(x19^x20));

    if (t4 != -9194997912959973360LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 1068U;
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 104U;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 178952;

    t5 = ((x21^x22)^(x23^x24));

    if (t5 != -1221) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint16_t x25 = 459U;
	static int16_t x26 = INT16_MAX;
	int8_t x27 = 1;
	int16_t x28 = 6642;
	int32_t t6 = -80;

    t6 = ((x25^x26)^(x27^x28));

    if (t6 != 26567) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = 247;
	int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -1LL;

    t7 = ((x29^x30)^(x31^x32));

    if (t7 != 136LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	uint32_t x34 = 29U;
	int8_t x35 = 18;
	volatile uint32_t t8 = 2U;

    t8 = ((x33^x34)^(x35^x36));

    if (t8 != 15U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int32_t x38 = 10;
	uint16_t x39 = 1581U;
	volatile int16_t x40 = -1;
	int32_t t9 = -105050;

    t9 = ((x37^x38)^(x39^x40));

    if (t9 != 31192) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 3;
	static uint8_t x42 = UINT8_MAX;
	int8_t x44 = 3;
	volatile int32_t t10 = 4;

    t10 = ((x41^x42)^(x43^x44));

    if (t10 != -32513) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	static int64_t t11 = 273354456915826152LL;

    t11 = ((x45^x46)^(x47^x48));

    if (t11 != 58045LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 16327234U;
	uint64_t x50 = 7668869142LLU;
	volatile uint64_t x51 = 3109LLU;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 16LLU;

    t12 = ((x49^x50)^(x51^x52));

    if (t12 != 9223372044536678001LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -1LL;
	int8_t x55 = -1;
	int8_t x56 = INT8_MIN;

    t13 = ((x53^x54)^(x55^x56));

    if (t13 != -4294967169LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -1;
	static volatile int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MAX;
	volatile int64_t t14 = -2008LL;

    t14 = ((x57^x58)^(x59^x60));

    if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x61 = INT64_MAX;
	uint8_t x62 = 3U;
	int32_t x63 = 364559;
	volatile int8_t x64 = 4;
	volatile int64_t t15 = 71790010414LL;

    t15 = ((x61^x62)^(x63^x64));

    if (t15 != 9223372036854411255LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 1U;
	static uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MAX;
	static volatile int16_t x68 = INT16_MIN;

    t16 = ((x65^x66)^(x67^x68));

    if (t16 != 32641LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = 834;
	uint8_t x70 = 15U;
	uint64_t x71 = 19LLU;
	volatile uint64_t t17 = 1136093515LLU;

    t17 = ((x69^x70)^(x71^x72));

    if (t17 != 4294966433LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	volatile int8_t x75 = INT8_MAX;
	static uint8_t x76 = 0U;
	volatile int32_t t18 = 4175154;

    t18 = ((x73^x74)^(x75^x76));

    if (t18 != -2147482272) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	volatile int64_t t19 = 11652LL;

    t19 = ((x77^x78)^(x79^x80));

    if (t19 != -9223372033808735123LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = 244785;
	volatile uint64_t x82 = UINT64_MAX;
	volatile uint64_t t20 = 462727978188513LLU;

    t20 = ((x81^x82)^(x83^x84));

    if (t20 != 9223372036854529073LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	volatile uint16_t x87 = 3036U;
	int8_t x88 = INT8_MIN;
	int32_t t21 = 2062;

    t21 = ((x85^x86)^(x87^x88));

    if (t21 != 29731) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = UINT8_MAX;
	int32_t t22 = 338;

    t22 = ((x89^x90)^(x91^x92));

    if (t22 != -227) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x94 = UINT64_MAX;
	static int64_t x95 = -2246LL;
	int8_t x96 = -51;
	volatile uint64_t t23 = 11615LLU;

    t23 = ((x93^x94)^(x95^x96));

    if (t23 != 18446744073709549331LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 25277U;
	uint64_t x100 = 217145LLU;
	static uint64_t t24 = 8172LLU;

    t24 = ((x97^x98)^(x99^x100));

    if (t24 != 18446744073709309307LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -34264278305366169LL;
	static int8_t x104 = 48;
	int64_t t25 = 6658LL;

    t25 = ((x101^x102)^(x103^x104));

    if (t25 != 34264278305382184LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 1814315392813LL;
	uint32_t x106 = 663U;
	uint64_t x107 = 4LLU;
	static int8_t x108 = INT8_MIN;
	uint64_t t26 = 93LLU;

    t26 = ((x105^x106)^(x107^x108));

    if (t26 != 18446742259394159166LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 18;
	int32_t x111 = -1;
	int64_t x112 = -487545LL;
	int64_t t27 = 686602661468LL;

    t27 = ((x109^x110)^(x111^x112));

    if (t27 != -487546LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 32;
	int64_t x114 = -1LL;
	static int64_t x115 = -18038834347LL;
	int64_t x116 = INT64_MIN;
	static int64_t t28 = -2510LL;

    t28 = ((x113^x114)^(x115^x116));

    if (t28 != -9223372018815941494LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = 602772U;
	uint64_t x118 = 292424186954276LLU;
	uint8_t x119 = 2U;
	static int64_t x120 = -1744790LL;
	volatile uint64_t t29 = 191047514452370LLU;

    t29 = ((x117^x118)^(x119^x120));

    if (t29 != 18446451649521504472LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	volatile int8_t x122 = INT8_MAX;
	uint8_t x123 = UINT8_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = 1849461;

    t30 = ((x121^x122)^(x123^x124));

    if (t30 != 2147483520) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 27U;
	volatile uint8_t x127 = 3U;
	uint32_t x128 = 2317836U;
	static volatile uint32_t t31 = 453881U;

    t31 = ((x125^x126)^(x127^x128));

    if (t31 != 2318059U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -315371;
	uint32_t x130 = 16380U;
	uint8_t x131 = 11U;
	uint32_t t32 = 117540U;

    t32 = ((x129^x130)^(x131^x132));

    if (t32 != 323596U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = 559572LL;
	int64_t t33 = -5078LL;

    t33 = ((x133^x134)^(x135^x136));

    if (t33 != 9223372036854221227LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MAX;
	int64_t x140 = -43620LL;
	volatile int64_t t34 = 1676377LL;

    t34 = ((x137^x138)^(x139^x140));

    if (t34 != -9223372034707346845LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	static int16_t x142 = INT16_MIN;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 19958;

    t35 = ((x141^x142)^(x143^x144));

    if (t35 != -2147483521) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = -1;
	int8_t x147 = -1;
	uint64_t t36 = 861LLU;

    t36 = ((x145^x146)^(x147^x148));

    if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = -1LL;
	int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	volatile int64_t t37 = -53221539432LL;

    t37 = ((x149^x150)^(x151^x152));

    if (t37 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -1;
	int64_t x154 = INT64_MAX;
	int8_t x156 = -1;
	volatile int64_t t38 = INT64_MIN;

    t38 = ((x153^x154)^(x155^x156));

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = 11530;
	static volatile int32_t x159 = INT32_MIN;
	int32_t x160 = 1;
	int64_t t39 = -228169946211367923LL;

    t39 = ((x157^x158)^(x159^x160));

    if (t39 != 9223372034707303691LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 73U;
	volatile uint32_t x162 = 66672462U;
	int64_t x163 = 11735LL;
	int64_t x164 = INT64_MIN;
	int64_t t40 = 32950853467694742LL;

    t40 = ((x161^x162)^(x163^x164));

    if (t40 != -9223372036788094256LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x166 = INT64_MAX;

    t41 = ((x165^x166)^(x167^x168));

    if (t41 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 601008893578197365LLU;
	static int8_t x170 = INT8_MIN;
	int64_t x172 = -1LL;
	uint64_t t42 = 309265LLU;

    t42 = ((x169^x170)^(x171^x172));

    if (t42 != 17845735180056311168LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = INT16_MIN;
	static uint32_t x174 = 169U;
	int64_t x175 = 145LL;
	volatile int16_t x176 = INT16_MIN;
	volatile int64_t t43 = 0LL;

    t43 = ((x173^x174)^(x175^x176));

    if (t43 != -4294967240LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 24773094905909018LLU;
	int32_t x178 = INT32_MIN;
	volatile uint64_t t44 = 24LLU;

    t44 = ((x177^x178)^(x179^x180));

    if (t44 != 18421970983624121937LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 15115488LLU;
	static volatile int8_t x183 = INT8_MIN;
	int64_t x184 = -1LL;
	volatile uint64_t t45 = 7LLU;

    t45 = ((x181^x182)^(x183^x184));

    if (t45 != 15116960LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x186 = 3U;
	volatile int8_t x187 = -1;
	static uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t46 = 4167870640850301LLU;

    t46 = ((x185^x186)^(x187^x188));

    if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x190 = 57720;
	volatile uint32_t t47 = 171U;

    t47 = ((x189^x190)^(x191^x192));

    if (t47 != 4294909556U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x194 = INT32_MAX;
	static int32_t x195 = 8039;
	volatile int8_t x196 = -1;
	static volatile int32_t t48 = 1415;

    t48 = ((x193^x194)^(x195^x196));

    if (t48 != -2147475612) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	uint8_t x198 = UINT8_MAX;
	int8_t x199 = -1;
	volatile uint32_t x200 = 7172201U;
	volatile uint32_t t49 = 73035U;

    t49 = ((x197^x198)^(x199^x200));

    if (t49 != 7147369U) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x201 = -1;
	int64_t x202 = INT64_MAX;
	uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t50 = -323941LL;

    t50 = ((x201^x202)^(x203^x204));

    if (t50 != -256LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -11772;
	static volatile uint64_t x206 = 143LLU;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t51 = 164460444724420LLU;

    t51 = ((x205^x206)^(x207^x208));

    if (t51 != 2147471988LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	static uint32_t x210 = 8792U;
	int16_t x211 = -1;
	int64_t x212 = -1LL;
	static int64_t t52 = 59LL;

    t52 = ((x209^x210)^(x211^x212));

    if (t52 != 23975LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = INT32_MAX;
	int64_t x214 = -260806225047LL;
	int16_t x215 = 15;
	static int16_t x216 = INT16_MIN;
	volatile int64_t t53 = -236678953239740LL;

    t53 = ((x213^x214)^(x215^x216));

    if (t53 != 261032291481LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x218 = 1034935114174178633LL;
	int64_t t54 = 34698LL;

    t54 = ((x217^x218)^(x219^x220));

    if (t54 != -1034935113975372286LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x222 = -1;
	volatile uint32_t x223 = 20455123U;
	volatile uint32_t x224 = 1706U;

    t55 = ((x221^x222)^(x223^x224));

    if (t55 != 4274513913U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	uint8_t x226 = 1U;
	int16_t x227 = 16;
	uint32_t x228 = 10U;
	volatile uint64_t t56 = 1636395891LLU;

    t56 = ((x225^x226)^(x227^x228));

    if (t56 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 541;
	int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MAX;
	static int8_t x232 = INT8_MAX;
	volatile int64_t t57 = 558976449676LL;

    t57 = ((x229^x230)^(x231^x232));

    if (t57 != -9223372036854743651LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x235 = 0U;
	static int16_t x236 = 3;
	int32_t t58 = 0;

    t58 = ((x233^x234)^(x235^x236));

    if (t58 != 2087053002) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	volatile uint16_t x238 = UINT16_MAX;
	volatile uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;
	volatile uint32_t t59 = 1188501U;

    t59 = ((x237^x238)^(x239^x240));

    if (t59 != 4294934527U) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x241 = 88U;
	volatile int32_t x242 = INT32_MAX;
	uint16_t x244 = 77U;

    t60 = ((x241^x242)^(x243^x244));

    if (t60 != -2147483627) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x246 = 116U;
	uint8_t x247 = UINT8_MAX;
	uint32_t x248 = 72286U;
	uint32_t t61 = 62439750U;

    t61 = ((x245^x246)^(x247^x248));

    if (t61 != 91067U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x249 = INT16_MAX;
	uint64_t x251 = 3706486342LLU;
	int32_t x252 = 658741954;
	uint64_t t62 = 70690016LLU;

    t62 = ((x249^x250)^(x251^x252));

    if (t62 != 18446744069486943099LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	volatile int8_t x254 = INT8_MIN;
	volatile uint16_t x255 = 2618U;
	int16_t x256 = INT16_MAX;

    t63 = ((x253^x254)^(x255^x256));

    if (t63 != 2147453509) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x258 = UINT8_MAX;
	static int32_t x260 = INT32_MAX;
	static volatile uint64_t t64 = 31513345377365LLU;

    t64 = ((x257^x258)^(x259^x260));

    if (t64 != 9223372034707292415LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -2490210591762LL;
	int8_t x262 = -1;
	int8_t x264 = INT8_MAX;
	volatile int64_t t65 = -7234219556787492LL;

    t65 = ((x261^x262)^(x263^x264));

    if (t65 != -2489803987858LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x265 = 1346528253970LLU;
	uint32_t x266 = 270845U;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;

    t66 = ((x265^x266)^(x267^x268));

    if (t66 != 1346528003600LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int16_t x270 = -6256;
	static volatile int16_t x271 = -1;
	volatile int64_t x272 = -1LL;
	int64_t t67 = 1281223239LL;

    t67 = ((x269^x270)^(x271^x272));

    if (t67 != 2147477392LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MAX;
	int16_t x274 = -2156;
	uint16_t x275 = 762U;
	static int64_t x276 = INT64_MIN;

    t68 = ((x273^x274)^(x275^x276));

    if (t68 != 2705LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	int64_t x279 = 28596069LL;
	uint16_t x280 = 14836U;
	volatile int64_t t69 = -384826LL;

    t69 = ((x277^x278)^(x279^x280));

    if (t69 != 28602094LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = INT16_MAX;
	int32_t x282 = -4503;
	uint8_t x283 = 2U;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t70 = 8501LLU;

    t70 = ((x281^x282)^(x283^x284));

    if (t70 != 28267LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x285 = 880U;
	static uint64_t x286 = 49LLU;
	int8_t x287 = INT8_MAX;
	uint64_t t71 = 10138100390347348LLU;

    t71 = ((x285^x286)^(x287^x288));

    if (t71 != 826LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = 278196406351724407LL;
	uint32_t x291 = 98254U;
	int32_t x292 = INT32_MIN;
	volatile int64_t t72 = -324427055LL;

    t72 = ((x289^x290)^(x291^x292));

    if (t72 != -278196408499241146LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = 447LL;
	int8_t x294 = 1;
	uint8_t x295 = 111U;
	uint8_t x296 = 2U;
	volatile int64_t t73 = 5984LL;

    t73 = ((x293^x294)^(x295^x296));

    if (t73 != 467LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	static int16_t x298 = 35;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	static int32_t t74 = -86879;

    t74 = ((x297^x298)^(x299^x300));

    if (t74 != -32733) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = -106616088;
	int8_t x303 = -1;
	int64_t x304 = 482154813LL;

    t75 = ((x301^x302)^(x303^x304));

    if (t75 != -1696084950LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 5177104;
	uint16_t x306 = 4U;
	int64_t x307 = INT64_MIN;
	volatile uint64_t x308 = UINT64_MAX;

    t76 = ((x305^x306)^(x307^x308));

    if (t76 != 9223372036849598699LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 43;
	int16_t x310 = INT16_MIN;
	static volatile int32_t t77 = 9;

    t77 = ((x309^x310)^(x311^x312));

    if (t77 != 31692) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 469U;
	static volatile int64_t x315 = -475236900493931LL;
	int64_t t78 = -574468LL;

    t78 = ((x313^x314)^(x315^x316));

    if (t78 != -475237214626886LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = -1;
	uint16_t x320 = 22748U;
	volatile int32_t t79 = 430218303;

    t79 = ((x317^x318)^(x319^x320));

    if (t79 != -2147460957) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MAX;
	static int64_t x323 = 467834306904878325LL;
	int32_t x324 = 323;

    t80 = ((x321^x322)^(x323^x324));

    if (t80 != 467834304327684662LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x325 = INT64_MIN;
	static uint8_t x326 = 2U;
	int16_t x327 = INT16_MIN;
	volatile uint64_t x328 = 784442LLU;
	uint64_t t81 = 26092093LLU;

    t81 = ((x325^x326)^(x327^x328));

    if (t81 != 9223372036854020152LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x330 = -1LL;
	volatile int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t82 = 27814LL;

    t82 = ((x329^x330)^(x331^x332));

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = UINT16_MAX;
	int64_t x334 = 519500392445814203LL;
	int16_t x335 = -1;
	int16_t x336 = 199;
	static volatile int64_t t83 = 530LL;

    t83 = ((x333^x334)^(x335^x336));

    if (t83 != -519500392445794948LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	volatile int32_t x338 = 902899;
	int32_t x339 = -1;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 5;

    t84 = ((x337^x338)^(x339^x340));

    if (t84 != 866675) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -231;
	volatile int64_t t85 = 2517610547574366744LL;

    t85 = ((x341^x342)^(x343^x344));

    if (t85 != -9223372034707324698LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 2U;
	static volatile uint16_t x346 = 20U;
	uint64_t x347 = 867LLU;
	volatile uint64_t t86 = 34438871852417241LLU;

    t86 = ((x345^x346)^(x347^x348));

    if (t86 != 64650LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x349 = 22U;
	uint64_t x350 = UINT64_MAX;
	uint8_t x351 = 5U;
	int32_t x352 = -1;
	volatile uint64_t t87 = 720019465440446LLU;

    t87 = ((x349^x350)^(x351^x352));

    if (t87 != 19LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x353 = -131489490;
	int8_t x354 = INT8_MIN;
	int32_t x356 = INT32_MAX;
	uint32_t t88 = 8843964U;

    t88 = ((x353^x354)^(x355^x356));

    if (t88 != 2278973102U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = 206;
	int16_t x358 = 27;
	uint8_t x359 = UINT8_MAX;
	int32_t t89 = -6281565;

    t89 = ((x357^x358)^(x359^x360));

    if (t89 != -32726) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	static int32_t x363 = 11957;
	uint16_t x364 = UINT16_MAX;

    t90 = ((x361^x362)^(x363^x364));

    if (t90 != 18446744073709539658LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = -6259706057829LL;
	int8_t x366 = 2;
	int64_t x367 = 462276392995338LL;
	volatile int64_t t91 = 8615LL;

    t91 = ((x365^x366)^(x367^x368));

    if (t91 != -459327152266950LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 122U;
	int16_t x370 = INT16_MIN;
	static uint16_t x371 = 3U;
	int16_t x372 = -1;
	int32_t t92 = 21980;

    t92 = ((x369^x370)^(x371^x372));

    if (t92 != 32646) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t t93 = 980121963040LL;

    t93 = ((x373^x374)^(x375^x376));

    if (t93 != 2147483255LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	static int32_t x378 = INT32_MIN;
	static uint64_t x379 = UINT64_MAX;
	uint64_t t94 = 2399811544133636518LLU;

    t94 = ((x377^x378)^(x379^x380));

    if (t94 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MAX;
	uint64_t x382 = 7971565LLU;
	static int16_t x383 = 996;
	static int32_t x384 = INT32_MIN;
	uint64_t t95 = 1124640333017505LLU;

    t95 = ((x381^x382)^(x383^x384));

    if (t95 != 9223372038994288374LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = -1;
	int8_t x386 = -13;
	int8_t x387 = INT8_MAX;
	uint64_t t96 = 266LLU;

    t96 = ((x385^x386)^(x387^x388));

    if (t96 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 309738582LL;
	int16_t x390 = 1;
	uint8_t x391 = 123U;
	uint32_t x392 = 4U;
	int64_t t97 = 238791235LL;

    t97 = ((x389^x390)^(x391^x392));

    if (t97 != 309738536LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1296523LL;
	uint64_t x395 = UINT64_MAX;
	uint64_t t98 = 24688LLU;

    t98 = ((x393^x394)^(x395^x396));

    if (t98 != 1296522LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 4468;
	uint32_t x398 = UINT32_MAX;
	volatile uint16_t x399 = 0U;
	uint8_t x400 = UINT8_MAX;
	volatile uint32_t t99 = 48U;

    t99 = ((x397^x398)^(x399^x400));

    if (t99 != 4294962804U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t100 = 141633;

    t100 = ((x401^x402)^(x403^x404));

    if (t100 != 2147451004) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	uint64_t x406 = 42188371963999LLU;
	static volatile int8_t x407 = INT8_MIN;
	volatile int8_t x408 = 0;
	uint64_t t101 = 1260518499105LLU;

    t101 = ((x405^x406)^(x407^x408));

    if (t101 != 42188371963936LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x409 = 14U;
	int32_t x411 = -1;
	uint8_t x412 = 15U;
	static volatile uint32_t t102 = 60232273U;

    t102 = ((x409^x410)^(x411^x412));

    if (t102 != 4294967268U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 1;
	volatile int64_t x414 = -1LL;
	static uint32_t x415 = 91589212U;
	int64_t x416 = -1LL;
	int64_t t103 = -1000449LL;

    t103 = ((x413^x414)^(x415^x416));

    if (t103 != 91589213LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -7;
	uint8_t x418 = UINT8_MAX;
	int32_t x420 = 365;
	volatile int32_t t104 = -30;

    t104 = ((x417^x418)^(x419^x420));

    if (t104 != -385) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 6U;
	int32_t x424 = 666;
	uint64_t t105 = 863862462756484113LLU;

    t105 = ((x421^x422)^(x423^x424));

    if (t105 != 18435106883256496482LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	volatile int64_t x427 = INT64_MAX;
	static int8_t x428 = INT8_MAX;
	volatile int64_t t106 = -160LL;

    t106 = ((x425^x426)^(x427^x428));

    if (t106 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = INT32_MIN;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = 0;
	uint64_t x432 = UINT64_MAX;
	static volatile uint64_t t107 = 3125361645139499LLU;

    t107 = ((x429^x430)^(x431^x432));

    if (t107 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x434 = -1;
	int32_t x435 = INT32_MIN;
	static volatile uint8_t x436 = UINT8_MAX;
	int32_t t108 = 7299;

    t108 = ((x433^x434)^(x435^x436));

    if (t108 != -2147451136) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x437 = 29U;
	uint16_t x438 = 15766U;
	uint64_t x439 = 98LLU;
	int16_t x440 = 47;
	uint64_t t109 = 716969307983863LLU;

    t109 = ((x437^x438)^(x439^x440));

    if (t109 != 15814LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = -1;
	uint16_t x442 = 1U;
	static volatile int64_t x443 = INT64_MIN;
	uint16_t x444 = 31U;
	static volatile int64_t t110 = -528406293LL;

    t110 = ((x441^x442)^(x443^x444));

    if (t110 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = -1LL;
	volatile uint64_t x446 = UINT64_MAX;
	static int16_t x447 = INT16_MIN;
	int32_t x448 = INT32_MIN;

    t111 = ((x445^x446)^(x447^x448));

    if (t111 != 2147450880LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MAX;
	static int64_t x450 = 93054065051831LL;
	int8_t x452 = INT8_MAX;
	volatile uint64_t t112 = 429LLU;

    t112 = ((x449^x450)^(x451^x452));

    if (t112 != 9223278982789683065LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -1155825LL;
	static int16_t x454 = -1;
	uint16_t x455 = 9116U;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t113 = 2129032LL;

    t113 = ((x453^x454)^(x455^x456));

    if (t113 != 1147283LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	int16_t x458 = INT16_MAX;
	int16_t x459 = INT16_MIN;
	int64_t t114 = INT64_MIN;

    t114 = ((x457^x458)^(x459^x460));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = 13;
	int32_t x462 = INT32_MIN;
	int8_t x463 = 19;
	uint16_t x464 = 1703U;
	int32_t t115 = 2;

    t115 = ((x461^x462)^(x463^x464));

    if (t115 != -2147481927) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x466 = 54114455489233230LL;
	int32_t x467 = -24;
	static int8_t x468 = 0;
	int64_t t116 = 35026181112970LL;

    t116 = ((x465^x466)^(x467^x468));

    if (t116 != 54114455489232550LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x469 = INT16_MAX;
	int64_t x470 = -1LL;
	int32_t x471 = 197;
	uint32_t x472 = 0U;
	int64_t t117 = -121513889706575483LL;

    t117 = ((x469^x470)^(x471^x472));

    if (t117 != -32571LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 805LLU;
	volatile uint32_t x474 = 7U;
	volatile uint64_t x475 = 286938LLU;
	static uint8_t x476 = UINT8_MAX;
	volatile uint64_t t118 = 29698541LLU;

    t118 = ((x473^x474)^(x475^x476));

    if (t118 != 287495LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x477 = UINT32_MAX;
	int32_t x479 = INT32_MIN;
	volatile int16_t x480 = -86;
	uint32_t t119 = 33U;

    t119 = ((x477^x478)^(x479^x480));

    if (t119 != 2147483562U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x481 = -1;
	volatile uint64_t t120 = 151LLU;

    t120 = ((x481^x482)^(x483^x484));

    if (t120 != 232599149LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x486 = -1;
	static uint64_t x487 = 6950347871048187822LLU;
	static uint64_t x488 = 219465473713LLU;

    t121 = ((x485^x486)^(x487^x488));

    if (t121 != 11496396120942092001LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 2500112336682225564LL;
	int16_t x490 = INT16_MIN;
	int16_t x491 = INT16_MIN;
	int16_t x492 = -1396;
	volatile int64_t t122 = -11087LL;

    t122 = ((x489^x490)^(x491^x492));

    if (t122 != -2500112336682224368LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x493 = 188985424LLU;
	uint8_t x494 = UINT8_MAX;
	uint8_t x495 = 57U;
	uint32_t x496 = 385U;
	volatile uint64_t t123 = 979727LLU;

    t123 = ((x493^x494)^(x495^x496));

    if (t123 != 188985623LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MAX;
	int64_t x498 = INT64_MAX;
	uint16_t x499 = 27997U;
	volatile int64_t t124 = -9448LL;

    t124 = ((x497^x498)^(x499^x500));

    if (t124 != 9223372036854748198LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x501 = INT16_MAX;
	int32_t x502 = -1;
	static int32_t t125 = 0;

    t125 = ((x501^x502)^(x503^x504));

    if (t125 != -32158) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -262243366189LL;
	static int8_t x506 = INT8_MAX;
	uint8_t x507 = 25U;
	int64_t t126 = -4576LL;

    t126 = ((x505^x506)^(x507^x508));

    if (t126 != 9223371774611409589LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -3067LL;
	volatile uint16_t x510 = 5416U;
	static int8_t x511 = INT8_MAX;
	uint8_t x512 = 6U;
	volatile int64_t t127 = 179939088LL;

    t127 = ((x509^x510)^(x511^x512));

    if (t127 != -7852LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = -30;
	int8_t x515 = 8;
	int32_t x516 = 9613;

    t128 = ((x513^x514)^(x515^x516));

    if (t128 != 9703) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = INT8_MIN;
	int8_t x518 = -1;
	static int16_t x519 = -2094;
	static volatile int64_t t129 = 9641546469876382LL;

    t129 = ((x517^x518)^(x519^x520));

    if (t129 != 141218103785840LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x521 = INT16_MAX;
	int16_t x522 = 3399;
	volatile int32_t t130 = -16561893;

    t130 = ((x521^x522)^(x523^x524));

    if (t130 != 29254) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MAX;
	int64_t x526 = 3898920572869LL;
	int8_t x527 = 0;
	static int64_t x528 = 180LL;
	volatile int64_t t131 = 231538566649758LL;

    t131 = ((x525^x526)^(x527^x528));

    if (t131 != 9223368137934203022LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 376U;
	int16_t x530 = INT16_MIN;
	int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MIN;
	volatile uint32_t t132 = 22949419U;

    t132 = ((x529^x530)^(x531^x532));

    if (t132 != 2147484024U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x533 = INT64_MIN;
	int64_t x534 = 501030948LL;
	volatile int64_t t133 = 687382447509215LL;

    t133 = ((x533^x534)^(x535^x536));

    if (t133 != 9223372036353728526LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x538 = INT8_MIN;
	int64_t x539 = -100717634607LL;
	volatile int64_t x540 = 153081576418LL;
	int64_t t134 = 6647LL;

    t134 = ((x537^x538)^(x539^x540));

    if (t134 != 226951844730LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	int8_t x542 = -1;
	int8_t x543 = INT8_MIN;
	int16_t x544 = INT16_MAX;
	int32_t t135 = -1847255;

    t135 = ((x541^x542)^(x543^x544));

    if (t135 != 2147451007) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int64_t x546 = INT64_MIN;
	uint16_t x547 = 94U;

    t136 = ((x545^x546)^(x547^x548));

    if (t136 != -9223372034707292255LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x550 = -2;
	int64_t x551 = -1LL;
	static int32_t x552 = 1481;
	volatile int64_t t137 = -12279822LL;

    t137 = ((x549^x550)^(x551^x552));

    if (t137 != -9223372036854774328LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x555 = -1;
	static int16_t x556 = INT16_MAX;
	volatile uint64_t t138 = 196365950511160LLU;

    t138 = ((x553^x554)^(x555^x556));

    if (t138 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	int32_t x559 = INT32_MIN;
	static int16_t x560 = INT16_MAX;
	int32_t t139 = -2227987;

    t139 = ((x557^x558)^(x559^x560));

    if (t139 != 2147483520) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x561 = UINT8_MAX;
	int8_t x562 = 1;
	static uint32_t x563 = 62844U;
	int8_t x564 = 12;
	uint32_t t140 = 3216U;

    t140 = ((x561^x562)^(x563^x564));

    if (t140 != 62862U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	uint32_t x568 = 71087032U;
	volatile uint64_t t141 = 4262163LLU;

    t141 = ((x565^x566)^(x567^x568));

    if (t141 != 9223372036925869127LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = -1;
	int64_t x571 = -1LL;
	int64_t x572 = -1LL;

    t142 = ((x569^x570)^(x571^x572));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	uint16_t x574 = UINT16_MAX;
	int16_t x576 = INT16_MAX;

    t143 = ((x573^x574)^(x575^x576));

    if (t143 != 18446744073709071496LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 15;
	static volatile int32_t x578 = INT32_MIN;
	int8_t x579 = INT8_MIN;
	int64_t x580 = INT64_MIN;

    t144 = ((x577^x578)^(x579^x580));

    if (t144 != -9223372034707292273LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 47540088955758LL;
	int64_t x582 = INT64_MAX;
	int8_t x584 = INT8_MIN;
	int64_t t145 = -9LL;

    t145 = ((x581^x582)^(x583^x584));

    if (t145 != -47540088955666LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int8_t x586 = -1;
	int16_t x588 = -1;

    t146 = ((x585^x586)^(x587^x588));

    if (t146 != -125) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = INT16_MAX;
	int16_t x591 = -1;
	int8_t x592 = INT8_MIN;
	int64_t t147 = 4LL;

    t147 = ((x589^x590)^(x591^x592));

    if (t147 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint32_t x594 = 6553U;
	volatile int16_t x595 = INT16_MIN;
	static int32_t x596 = -2017096;
	static volatile uint32_t t148 = 115129146U;

    t148 = ((x593^x594)^(x595^x596));

    if (t148 != 2007390U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x598 = UINT8_MAX;
	int32_t x599 = -46331;
	int16_t x600 = -7;
	int32_t t149 = 14;

    t149 = ((x597^x598)^(x599^x600));

    if (t149 != -46205) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 59714028365LLU;
	uint8_t x602 = 41U;
	static int64_t x603 = INT64_MAX;
	static int64_t x604 = INT64_MAX;
	volatile uint64_t t150 = 35LLU;

    t150 = ((x601^x602)^(x603^x604));

    if (t150 != 59714028388LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	uint32_t x606 = 140U;
	static int64_t t151 = -10LL;

    t151 = ((x605^x606)^(x607^x608));

    if (t151 != 9223372034707292403LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 2;
	uint16_t x611 = 6U;
	uint64_t x612 = UINT64_MAX;
	uint64_t t152 = 668967970600363LLU;

    t152 = ((x609^x610)^(x611^x612));

    if (t152 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MAX;
	uint16_t x614 = 18U;
	int32_t x615 = INT32_MIN;
	volatile int32_t x616 = -107;

    t153 = ((x613^x614)^(x615^x616));

    if (t153 != 2147483640) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x618 = 1LLU;
	volatile int64_t x619 = 1054050423LL;
	uint32_t x620 = 18U;
	volatile uint64_t t154 = 1091457706844300LLU;

    t154 = ((x617^x618)^(x619^x620));

    if (t154 != 18446744072655501211LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 75U;
	uint64_t x624 = UINT64_MAX;

    t155 = ((x621^x622)^(x623^x624));

    if (t155 != 344185LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = 0U;
	uint64_t x626 = 1204127LLU;
	int16_t x627 = 2;
	static int32_t x628 = -1791741;
	volatile uint64_t t156 = 120LLU;

    t156 = ((x625^x626)^(x627^x628));

    if (t156 != 18446744073708959390LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = UINT8_MAX;
	int32_t x632 = -1;
	static volatile int64_t t157 = 25693331438152799LL;

    t157 = ((x629^x630)^(x631^x632));

    if (t157 != 226LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x634 = 73U;
	uint64_t x635 = UINT64_MAX;
	uint8_t x636 = 0U;
	volatile uint64_t t158 = 391435557462LLU;

    t158 = ((x633^x634)^(x635^x636));

    if (t158 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x638 = INT8_MIN;
	static uint64_t x639 = 83183LLU;
	volatile uint64_t t159 = 170746682LLU;

    t159 = ((x637^x638)^(x639^x640));

    if (t159 != 18446744071562151056LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = UINT8_MAX;
	uint64_t x643 = UINT64_MAX;
	volatile uint64_t t160 = 88158LLU;

    t160 = ((x641^x642)^(x643^x644));

    if (t160 != 130763LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 1U;
	uint32_t x647 = UINT32_MAX;
	uint16_t x648 = 1U;

    t161 = ((x645^x646)^(x647^x648));

    if (t161 != 127U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	int8_t x650 = -1;
	static int16_t x651 = -1;
	int8_t x652 = INT8_MIN;

    t162 = ((x649^x650)^(x651^x652));

    if (t162 != 127LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 634U;
	static volatile uint8_t x654 = 2U;
	int64_t x656 = 3699916050421867994LL;
	uint64_t t163 = 6293282505254LLU;

    t163 = ((x653^x654)^(x655^x656));

    if (t163 != 3699916042624070681LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	uint8_t x658 = UINT8_MAX;
	static volatile int32_t t164 = -139;

    t164 = ((x657^x658)^(x659^x660));

    if (t164 != -6737) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 4;
	int8_t x662 = INT8_MIN;
	static int64_t x664 = 56069712303326800LL;

    t165 = ((x661^x662)^(x663^x664));

    if (t165 != -9167302324551449045LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = -1;
	uint8_t x666 = UINT8_MAX;
	int64_t x668 = INT64_MIN;
	volatile int64_t t166 = -7LL;

    t166 = ((x665^x666)^(x667^x668));

    if (t166 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 120461820315555647LLU;
	int64_t x671 = -156LL;
	uint64_t t167 = 39549950LLU;

    t167 = ((x669^x670)^(x671^x672));

    if (t167 != 18326282253393995812LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x674 = INT64_MIN;
	uint32_t x675 = 6680U;
	static uint32_t x676 = 0U;
	volatile int64_t t168 = -241178793LL;

    t168 = ((x673^x674)^(x675^x676));

    if (t168 != 9223372036854769135LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = INT16_MIN;
	static volatile uint8_t x678 = 12U;
	int8_t x679 = INT8_MIN;
	static uint16_t x680 = UINT16_MAX;
	int32_t t169 = 0;

    t169 = ((x677^x678)^(x679^x680));

    if (t169 != 32883) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	int8_t x682 = INT8_MIN;
	int64_t x683 = 1518741399120LL;
	int64_t x684 = INT64_MAX;
	int64_t t170 = 1LL;

    t170 = ((x681^x682)^(x683^x684));

    if (t170 != -1518741399088LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x685 = -4965038LL;
	int16_t x686 = INT16_MIN;
	uint8_t x687 = 9U;
	static uint16_t x688 = UINT16_MAX;
	volatile int64_t t171 = 43152884LL;

    t171 = ((x685^x686)^(x687^x688));

    if (t171 != 4932260LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -6;
	int64_t x690 = 11LL;
	int32_t x691 = INT32_MAX;
	uint64_t x692 = UINT64_MAX;

    t172 = ((x689^x690)^(x691^x692));

    if (t172 != 2147483633LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = 6;
	uint16_t x694 = 2U;
	uint64_t x695 = UINT64_MAX;
	uint64_t x696 = UINT64_MAX;

    t173 = ((x693^x694)^(x695^x696));

    if (t173 != 4LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 59;
	static uint32_t x698 = 24213U;
	int16_t x699 = INT16_MIN;
	int32_t x700 = INT32_MIN;
	volatile uint32_t t174 = 3675913U;

    t174 = ((x697^x698)^(x699^x700));

    if (t174 != 2147475118U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x701 = 0U;
	int32_t x702 = -231;
	static int64_t x703 = INT64_MIN;
	int8_t x704 = INT8_MIN;
	volatile int64_t t175 = 731252361230806LL;

    t175 = ((x701^x702)^(x703^x704));

    if (t175 != 9223372032559808665LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	static volatile int8_t x706 = INT8_MIN;
	uint32_t x707 = 83365U;
	uint64_t x708 = UINT64_MAX;
	uint64_t t176 = 8LLU;

    t176 = ((x705^x706)^(x707^x708));

    if (t176 != 18446744073709468250LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = 1;
	int16_t x711 = -1;
	volatile uint32_t x712 = 1307825156U;

    t177 = ((x709^x710)^(x711^x712));

    if (t177 != 2987142138U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MAX;
	int64_t x714 = -1LL;
	int32_t x715 = -1;
	static volatile int64_t t178 = -19205347441712564LL;

    t178 = ((x713^x714)^(x715^x716));

    if (t178 != -2147675873LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	int64_t x718 = INT64_MIN;
	uint32_t x719 = 660U;
	static volatile uint64_t t179 = 3LLU;

    t179 = ((x717^x718)^(x719^x720));

    if (t179 != 9223372036854743700LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x722 = -1LL;
	int64_t x723 = INT64_MAX;
	static int32_t x724 = 7466;
	int64_t t180 = -1367949979651754201LL;

    t180 = ((x721^x722)^(x723^x724));

    if (t180 != -9223372036854768344LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -20105392223289648LL;
	int32_t x726 = -1;
	int8_t x727 = INT8_MAX;
	int32_t x728 = -1;
	static volatile int64_t t181 = 2273329452740488LL;

    t181 = ((x725^x726)^(x727^x728));

    if (t181 != -20105392223289681LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 1U;
	int32_t x730 = INT32_MIN;
	int64_t x731 = 68094002338LL;
	uint32_t x732 = UINT32_MAX;

    t182 = ((x729^x730)^(x731^x732));

    if (t182 != 67197467484LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = INT32_MAX;
	int64_t x734 = INT64_MIN;
	int16_t x735 = -6696;
	volatile int32_t x736 = INT32_MIN;

    t183 = ((x733^x734)^(x735^x736));

    if (t183 != -9223372036854769113LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -2256;
	volatile int8_t x738 = INT8_MIN;
	uint64_t x739 = UINT64_MAX;
	int16_t x740 = -1;
	uint64_t t184 = 47153462LLU;

    t184 = ((x737^x738)^(x739^x740));

    if (t184 != 2224LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 393U;
	volatile uint32_t x742 = 871949055U;
	int8_t x743 = -1;
	volatile int32_t x744 = 1202209;
	uint32_t t185 = 474212695U;

    t185 = ((x741^x742)^(x743^x744));

    if (t185 != 3423945896U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MAX;
	uint16_t x747 = 13480U;
	uint64_t t186 = 3370483183747290873LLU;

    t186 = ((x745^x746)^(x747^x748));

    if (t186 != 2147470120LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	int64_t x750 = -5990646971LL;
	static uint16_t x751 = UINT16_MAX;
	static int64_t x752 = -22228617478019LL;
	int64_t t187 = 4LL;

    t187 = ((x749^x750)^(x751^x752));

    if (t187 != -22226016126152LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 1780U;
	int16_t x754 = -7;
	uint32_t x755 = 504U;
	int32_t x756 = 0;
	volatile uint32_t t188 = 49U;

    t188 = ((x753^x754)^(x755^x756));

    if (t188 != 4294965493U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	volatile uint16_t x758 = UINT16_MAX;
	volatile int16_t x760 = -1;
	int32_t t189 = -751;

    t189 = ((x757^x758)^(x759^x760));

    if (t189 != -63314) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x761 = 3049LLU;
	int64_t x762 = -1LL;
	int8_t x764 = 0;

    t190 = ((x761^x762)^(x763^x764));

    if (t190 != 18446744073709548566LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x766 = INT8_MIN;
	int16_t x767 = 0;
	static int64_t x768 = 3010312905145924846LL;
	volatile int64_t t191 = -81543LL;

    t191 = ((x765^x766)^(x767^x768));

    if (t191 != 3010312905145924846LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x770 = 3100U;
	uint64_t x771 = UINT64_MAX;
	int16_t x772 = -1;
	static volatile uint64_t t192 = 2LLU;

    t192 = ((x769^x770)^(x771^x772));

    if (t192 != 18446744073709548515LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	static int32_t x775 = INT32_MIN;
	static int64_t x776 = -1LL;
	volatile int64_t t193 = -61495112717LL;

    t193 = ((x773^x774)^(x775^x776));

    if (t193 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = UINT16_MAX;
	int64_t x779 = INT64_MAX;
	static uint8_t x780 = UINT8_MAX;
	int64_t t194 = -129451298544LL;

    t194 = ((x777^x778)^(x779^x780));

    if (t194 != 9223372036854710491LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = INT32_MAX;
	volatile int16_t x783 = INT16_MIN;
	int16_t x784 = INT16_MIN;
	int32_t t195 = 12554;

    t195 = ((x781^x782)^(x783^x784));

    if (t195 != 2147483629) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x786 = -556955496847749LL;
	static int8_t x787 = -1;
	static int32_t x788 = INT32_MIN;
	static int64_t t196 = -350LL;

    t196 = ((x785^x786)^(x787^x788));

    if (t196 != 556955008788091LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = -1LL;
	int32_t x790 = INT32_MIN;
	volatile int32_t x791 = INT32_MIN;
	int8_t x792 = -1;
	static int64_t t197 = -7LL;

    t197 = ((x789^x790)^(x791^x792));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	uint16_t x794 = 0U;
	int64_t x795 = INT64_MIN;
	volatile int16_t x796 = INT16_MIN;
	int64_t t198 = INT64_MIN;

    t198 = ((x793^x794)^(x795^x796));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x799 = INT16_MIN;
	int64_t t199 = -7052LL;

    t199 = ((x797^x798)^(x799^x800));

    if (t199 != 9223372036854775680LL) { NG(); } else { ; }
	
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

