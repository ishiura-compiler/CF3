
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

static int16_t x1 = INT16_MIN;
volatile int16_t x2 = INT16_MIN;
uint8_t x5 = UINT8_MAX;
uint8_t x6 = UINT8_MAX;
int8_t x8 = INT8_MAX;
static int32_t x11 = 10519857;
int8_t x14 = INT8_MIN;
uint32_t x35 = UINT32_MAX;
int32_t x38 = INT32_MAX;
int8_t x44 = INT8_MIN;
static uint32_t t14 = 834U;
int32_t x61 = INT32_MIN;
uint64_t x64 = 157277199533585LLU;
volatile int16_t x72 = -11;
uint16_t x83 = 0U;
static int64_t t21 = -2703028271503623LL;
volatile uint64_t t22 = 2120769152219621LLU;
static int32_t x99 = 4820624;
int64_t x101 = INT64_MIN;
volatile uint16_t x115 = UINT16_MAX;
static uint8_t x121 = 2U;
uint8_t x123 = 1U;
volatile uint8_t x124 = UINT8_MAX;
volatile int64_t x129 = -107737828458411LL;
int16_t x130 = 1;
uint64_t x132 = 7LLU;
uint16_t x134 = UINT16_MAX;
static volatile int16_t x135 = INT16_MAX;
uint8_t x140 = UINT8_MAX;
int8_t x141 = 5;
int8_t x142 = INT8_MAX;
int64_t x145 = INT64_MIN;
static int8_t x148 = INT8_MIN;
static int64_t t35 = -990859791LL;
uint64_t x165 = 337457748671396898LLU;
int16_t x167 = 33;
uint8_t x169 = 6U;
uint8_t x179 = UINT8_MAX;
int64_t x180 = INT64_MAX;
volatile uint64_t t43 = 1802487649743355906LLU;
uint32_t x184 = 636608803U;
int32_t x185 = INT32_MIN;
int16_t x187 = INT16_MAX;
int32_t t45 = 30888;
static uint8_t x193 = 18U;
volatile int32_t t48 = 227299631;
int64_t x207 = INT64_MIN;
int64_t x208 = INT64_MIN;
static uint64_t x222 = 7515204654910795LLU;
int8_t x228 = INT8_MAX;
static int32_t t54 = -1509480;
static int16_t x230 = INT16_MAX;
int8_t x231 = -1;
int32_t x235 = 306;
int32_t t56 = -69808;
int32_t t57 = -4093;
int64_t x242 = -2080112LL;
uint8_t x245 = 11U;
int32_t x246 = -917368;
static uint16_t x251 = 1313U;
static int64_t x257 = -256479472LL;
volatile int32_t t63 = 737;
static volatile uint64_t x281 = UINT64_MAX;
int64_t x284 = INT64_MAX;
uint64_t t68 = 7280676234158295893LLU;
int16_t x287 = -1;
uint32_t t69 = 5U;
int64_t x296 = INT64_MIN;
static uint64_t x305 = 7801LLU;
int32_t x307 = INT32_MIN;
uint8_t x309 = 5U;
int8_t x312 = INT8_MAX;
int64_t x314 = 2888565LL;
static uint32_t t78 = 41765416U;
int32_t x355 = -1;
int8_t x360 = 2;
uint64_t x365 = 1340135959759498512LLU;
uint16_t x369 = 812U;
volatile int32_t x371 = INT32_MAX;
uint8_t x374 = 125U;
volatile int64_t t90 = 0LL;
uint64_t x383 = 62019230549494LLU;
uint64_t x384 = 89838185529LLU;
volatile uint16_t x385 = 4U;
int16_t x392 = INT16_MAX;
volatile int32_t t96 = 3;
volatile uint64_t x407 = 124405966LLU;
int32_t x409 = -511633132;
int64_t x413 = 13297764LL;
int64_t t100 = 50LL;
int8_t x431 = 33;
static uint16_t x433 = 2503U;
static volatile int8_t x441 = 0;
static int32_t t107 = 135077107;
volatile int8_t x449 = -1;
volatile int32_t t109 = -542635145;
static uint64_t t110 = 940LLU;
int64_t x468 = INT64_MIN;
int32_t x472 = INT32_MIN;
volatile uint32_t x475 = 10U;
int8_t x480 = INT8_MAX;
int8_t x481 = INT8_MIN;
static int16_t x483 = INT16_MAX;
int64_t x484 = INT64_MIN;
volatile int32_t t117 = 175269299;
int8_t x486 = 1;
int32_t x487 = INT32_MAX;
int32_t x490 = -5509682;
int32_t t119 = -419455506;
uint8_t x497 = 1U;
volatile int64_t t121 = -347LL;
uint64_t x508 = UINT64_MAX;
static uint16_t x524 = UINT16_MAX;
uint16_t x533 = 918U;
int16_t x538 = -4552;
static uint64_t x539 = 309LLU;
uint16_t x540 = UINT16_MAX;
uint16_t x545 = 15690U;
int32_t x549 = -25;
int8_t x551 = -13;
int32_t t133 = 209;
volatile int32_t t135 = 34;
static volatile int8_t x562 = INT8_MAX;
int32_t t136 = -225;
static uint32_t x566 = UINT32_MAX;
uint32_t x575 = 889691868U;
uint32_t x576 = UINT32_MAX;
static int16_t x579 = 4;
int16_t x581 = -128;
int16_t x583 = -1;
int8_t x585 = 5;
static volatile int32_t t142 = -3;
volatile uint16_t x595 = 7U;
uint32_t x598 = UINT32_MAX;
int32_t x600 = INT32_MIN;
volatile uint32_t t145 = 12647395U;
static int8_t x609 = INT8_MAX;
volatile int16_t x619 = INT16_MIN;
volatile int32_t t150 = 182080;
volatile int16_t x629 = INT16_MIN;
int8_t x632 = -1;
int16_t x635 = INT16_MIN;
int64_t x638 = -1LL;
int64_t x641 = INT64_MAX;
static volatile int8_t x659 = -24;
int32_t x660 = 3941348;
int8_t x666 = INT8_MAX;
volatile uint16_t x668 = 0U;
static uint16_t x669 = 625U;
int16_t x671 = -1;
static volatile int32_t t163 = -25491626;
volatile int32_t t164 = -2741230;
int8_t x683 = 2;
volatile int32_t x684 = INT32_MIN;
int32_t x691 = INT32_MIN;
int64_t x692 = -40729LL;
int64_t x693 = INT64_MIN;
volatile int64_t x694 = 514520815716662821LL;
static int8_t x701 = -15;
int8_t x704 = INT8_MIN;
volatile uint32_t x711 = 295U;
volatile uint8_t x713 = 1U;
int8_t x714 = INT8_MIN;
int64_t t173 = -700340706LL;
uint32_t x724 = UINT32_MAX;
volatile int16_t x726 = INT16_MIN;
uint8_t x728 = 21U;
uint8_t x743 = 13U;
int16_t x759 = INT16_MIN;
int8_t x766 = -1;
int16_t x771 = -500;
uint16_t x781 = UINT16_MAX;
int16_t x782 = INT16_MIN;
int32_t t189 = -682529;
uint32_t x790 = UINT32_MAX;
uint32_t t191 = 1U;
int64_t x797 = -6055458777611LL;
int16_t x800 = -1;
int64_t x803 = -1LL;
int16_t x807 = INT16_MAX;
static int32_t t195 = 15;
int64_t x811 = INT64_MAX;
int64_t t196 = -20586LL;
int8_t x815 = INT8_MIN;
static volatile int16_t x818 = INT16_MIN;
volatile uint16_t x823 = 963U;


void f0(void) {
    	int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -506176377;

    t0 = ((x1%x2)*(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x7 = INT8_MIN;
	int32_t t1 = 1;

    t1 = ((x5%x6)*(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MAX;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -32194725311734LL;

    t2 = ((x9%x10)*(x11<=x12));

    if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 570189086079012175LLU;
	static int8_t x15 = INT8_MAX;
	volatile int16_t x16 = INT16_MIN;
	uint64_t t3 = 52490LLU;

    t3 = ((x13%x14)*(x15<=x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	int32_t x18 = INT32_MAX;
	uint64_t x19 = UINT64_MAX;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 553409;

    t4 = ((x17%x18)*(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	int8_t x22 = -2;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = 100873;

    t5 = ((x21%x22)*(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint8_t x26 = 11U;
	volatile int64_t x27 = 37724584699LL;
	static int32_t x28 = INT32_MIN;
	int32_t t6 = -8043300;

    t6 = ((x25%x26)*(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = -1;
	volatile int64_t x31 = 1098469872251359LL;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = 17047;

    t7 = ((x29%x30)*(x31<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	int64_t x36 = -1LL;
	static volatile int64_t t8 = 254576591162348064LL;

    t8 = ((x33%x34)*(x35<=x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 6;
	uint64_t x39 = UINT64_MAX;
	int16_t x40 = -6;
	int32_t t9 = -243;

    t9 = ((x37%x38)*(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = 2038U;
	uint64_t x42 = UINT64_MAX;
	volatile uint32_t x43 = 1809525U;
	volatile uint64_t t10 = 10526239364384LLU;

    t10 = ((x41%x42)*(x43<=x44));

    if (t10 != 2038LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = INT64_MIN;
	volatile int8_t x46 = -1;
	int8_t x47 = INT8_MIN;
	int64_t x48 = -1LL;
	volatile int64_t t11 = -280285785552LL;

    t11 = ((x45%x46)*(x47<=x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = INT64_MIN;
	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x51 = -2;
	uint16_t x52 = UINT16_MAX;
	int64_t t12 = -13519LL;

    t12 = ((x49%x50)*(x51<=x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 30914718;
	int8_t x54 = 1;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = -1;
	volatile int32_t t13 = -37365317;

    t13 = ((x53%x54)*(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 13412U;
	uint32_t x58 = 4711147U;
	uint8_t x59 = 1U;
	volatile int8_t x60 = -1;

    t14 = ((x57%x58)*(x59<=x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x62 = INT8_MIN;
	int8_t x63 = -2;
	int32_t t15 = 98498733;

    t15 = ((x61%x62)*(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 7LLU;
	volatile int64_t x66 = -1LL;
	int16_t x67 = -202;
	int8_t x68 = INT8_MIN;
	uint64_t t16 = 29789226305LLU;

    t16 = ((x65%x66)*(x67<=x68));

    if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	volatile int64_t t17 = -50172LL;

    t17 = ((x69%x70)*(x71<=x72));

    if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = 99778034LL;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = 28346030962454898LLU;
	static volatile int16_t x76 = INT16_MIN;
	static int64_t t18 = 15204969LL;

    t18 = ((x73%x74)*(x75<=x76));

    if (t18 != 99778034LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = -1LL;
	int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	volatile int32_t x80 = INT32_MIN;
	int64_t t19 = -41243181LL;

    t19 = ((x77%x78)*(x79<=x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	uint16_t x82 = UINT16_MAX;
	static volatile int32_t x84 = -1;
	static volatile int32_t t20 = -34;

    t20 = ((x81%x82)*(x83<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	volatile int32_t x86 = -106;
	static int16_t x87 = INT16_MAX;
	int8_t x88 = -31;

    t21 = ((x85%x86)*(x87<=x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	static int64_t x96 = -1LL;

    t22 = ((x93%x94)*(x95<=x96));

    if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = 12;
	int32_t x98 = -872593920;
	int64_t x100 = INT64_MIN;
	int32_t t23 = -7;

    t23 = ((x97%x98)*(x99<=x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = 1;
	int32_t x103 = INT32_MAX;
	static uint16_t x104 = 5U;
	volatile int64_t t24 = 479160LL;

    t24 = ((x101%x102)*(x103<=x104));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = -1;
	uint32_t x106 = 846748306U;
	static int64_t x107 = INT64_MIN;
	uint64_t x108 = 1850140LLU;
	uint32_t t25 = 4442U;

    t25 = ((x105%x106)*(x107<=x108));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	uint8_t x110 = UINT8_MAX;
	static uint8_t x111 = 12U;
	int64_t x112 = INT64_MIN;
	int32_t t26 = 1325704;

    t26 = ((x109%x110)*(x111<=x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = INT32_MAX;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t27 = 250624;

    t27 = ((x113%x114)*(x115<=x116));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -9;
	uint32_t x118 = 234569389U;
	uint64_t x119 = 0LLU;
	int16_t x120 = -1;
	volatile uint32_t t28 = 6941U;

    t28 = ((x117%x118)*(x119<=x120));

    if (t28 != 72718285U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x122 = 582U;
	volatile int32_t t29 = 14777259;

    t29 = ((x121%x122)*(x123<=x124));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = 3735638U;
	uint32_t x126 = 1449088978U;
	volatile uint16_t x127 = 331U;
	int16_t x128 = -1;
	static volatile uint32_t t30 = 91323U;

    t30 = ((x125%x126)*(x127<=x128));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x131 = INT8_MIN;
	volatile int64_t t31 = 8LL;

    t31 = ((x129%x130)*(x131<=x132));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x133 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 1312599;

    t32 = ((x133%x134)*(x135<=x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	static int32_t x138 = -1;
	static int64_t x139 = 1934674959578LL;
	volatile int32_t t33 = 373375;

    t33 = ((x137%x138)*(x139<=x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x143 = UINT16_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t34 = 18;

    t34 = ((x141%x142)*(x143<=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MAX;

    t35 = ((x145%x146)*(x147<=x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x149 = 203;
	static int8_t x150 = INT8_MIN;
	volatile int32_t x151 = INT32_MIN;
	uint64_t x152 = 2039551518LLU;
	int32_t t36 = -161;

    t36 = ((x149%x150)*(x151<=x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	volatile int32_t x154 = INT32_MIN;
	int16_t x155 = -11;
	volatile int32_t x156 = INT32_MIN;
	int64_t t37 = -482597LL;

    t37 = ((x153%x154)*(x155<=x156));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = INT8_MIN;
	uint64_t x158 = 55LLU;
	int8_t x159 = -1;
	static int32_t x160 = -4384146;
	static volatile uint64_t t38 = 253366060183LLU;

    t38 = ((x157%x158)*(x159<=x160));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x161 = INT64_MIN;
	int32_t x162 = INT32_MIN;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	int64_t t39 = 1151324169264639LL;

    t39 = ((x161%x162)*(x163<=x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x166 = 43185088U;
	volatile uint32_t x168 = 7U;
	volatile uint64_t t40 = 1141657552925901LLU;

    t40 = ((x165%x166)*(x167<=x168));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x170 = 15;
	volatile int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	static int32_t t41 = -31493;

    t41 = ((x169%x170)*(x171<=x172));

    if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x173 = 543U;
	int64_t x174 = -7744097667LL;
	volatile int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	int64_t t42 = -3LL;

    t42 = ((x173%x174)*(x175<=x176));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x177 = 62116LLU;
	uint64_t x178 = UINT64_MAX;

    t43 = ((x177%x178)*(x179<=x180));

    if (t43 != 62116LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x181 = 2U;
	uint32_t x182 = 238906U;
	static int8_t x183 = 13;
	uint32_t t44 = 25U;

    t44 = ((x181%x182)*(x183<=x184));

    if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x186 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;

    t45 = ((x185%x186)*(x187<=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = 0;
	uint64_t x190 = 84LLU;
	static int8_t x191 = INT8_MAX;
	int8_t x192 = 10;
	uint64_t t46 = 345750213LLU;

    t46 = ((x189%x190)*(x191<=x192));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 1U;
	int8_t x196 = -40;
	volatile uint64_t t47 = 8549398596522618LLU;

    t47 = ((x193%x194)*(x195<=x196));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x201 = 10U;
	static int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;

    t48 = ((x201%x202)*(x203<=x204));

    if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 11771U;
	volatile uint32_t x206 = UINT32_MAX;
	static uint32_t t49 = 4U;

    t49 = ((x205%x206)*(x207<=x208));

    if (t49 != 11771U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x209 = -4406157;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	volatile int32_t t50 = 207104689;

    t50 = ((x209%x210)*(x211<=x212));

    if (t50 != -13) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MIN;
	int64_t x216 = INT64_MIN;
	int32_t t51 = 41;

    t51 = ((x213%x214)*(x215<=x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x217 = 124218U;
	uint8_t x218 = 3U;
	uint32_t x219 = 615429861U;
	int8_t x220 = INT8_MIN;
	uint32_t t52 = 452929537U;

    t52 = ((x217%x218)*(x219<=x220));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 120U;
	static uint64_t t53 = 16830543903LLU;

    t53 = ((x221%x222)*(x223<=x224));

    if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -1;
	int16_t x226 = -119;
	static int16_t x227 = INT16_MIN;

    t54 = ((x225%x226)*(x227<=x228));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = -1;
	int32_t x232 = 96;
	volatile int32_t t55 = 41916800;

    t55 = ((x229%x230)*(x231<=x232));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -3;
	int32_t x234 = -31753;
	volatile int64_t x236 = INT64_MAX;

    t56 = ((x233%x234)*(x235<=x236));

    if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x237 = INT32_MIN;
	uint8_t x238 = 1U;
	uint32_t x239 = 7U;
	volatile int16_t x240 = 12;

    t57 = ((x237%x238)*(x239<=x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -55;
	static volatile int32_t x243 = INT32_MAX;
	int8_t x244 = -57;
	int64_t t58 = -78051396LL;

    t58 = ((x241%x242)*(x243<=x244));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x247 = 0U;
	volatile uint32_t x248 = 344878276U;
	volatile int32_t t59 = 6;

    t59 = ((x245%x246)*(x247<=x248));

    if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x249 = -1LL;
	int8_t x250 = 1;
	static volatile int64_t x252 = INT64_MIN;
	volatile int64_t t60 = -18416968383827182LL;

    t60 = ((x249%x250)*(x251<=x252));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x253 = INT32_MIN;
	volatile int16_t x254 = -3;
	static volatile int64_t x255 = INT64_MAX;
	uint16_t x256 = 18491U;
	static int32_t t61 = -918;

    t61 = ((x253%x254)*(x255<=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x258 = UINT8_MAX;
	int8_t x259 = -1;
	int16_t x260 = INT16_MIN;
	int64_t t62 = 167LL;

    t62 = ((x257%x258)*(x259<=x260));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = -1;
	int16_t x262 = -500;
	int32_t x263 = 163641145;
	uint32_t x264 = 498272U;

    t63 = ((x261%x262)*(x263<=x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	int64_t x267 = 0LL;
	uint32_t x268 = 1971U;
	int32_t t64 = 6370948;

    t64 = ((x265%x266)*(x267<=x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x269 = INT16_MIN;
	int64_t x270 = INT64_MAX;
	volatile uint64_t x271 = 30381208LLU;
	int64_t x272 = INT64_MAX;
	int64_t t65 = -4259LL;

    t65 = ((x269%x270)*(x271<=x272));

    if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MIN;
	int8_t x275 = -1;
	static uint16_t x276 = UINT16_MAX;
	volatile int32_t t66 = 0;

    t66 = ((x273%x274)*(x275<=x276));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x277 = UINT16_MAX;
	int8_t x278 = 2;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = 23;
	static volatile int32_t t67 = -5299;

    t67 = ((x277%x278)*(x279<=x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x282 = 3U;
	int64_t x283 = 2739942180LL;

    t68 = ((x281%x282)*(x283<=x284));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x285 = UINT32_MAX;
	volatile int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MIN;

    t69 = ((x285%x286)*(x287<=x288));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int32_t x290 = 214943;
	uint8_t x291 = 1U;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t70 = -228940964;

    t70 = ((x289%x290)*(x291<=x292));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = 125U;
	uint64_t x294 = 4300695281366LLU;
	int32_t x295 = INT32_MIN;
	volatile uint64_t t71 = 1217429308LLU;

    t71 = ((x293%x294)*(x295<=x296));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x297 = 55689156LLU;
	int32_t x298 = INT32_MAX;
	volatile int32_t x299 = INT32_MIN;
	volatile int32_t x300 = INT32_MAX;
	volatile uint64_t t72 = 12002LLU;

    t72 = ((x297%x298)*(x299<=x300));

    if (t72 != 55689156LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x301 = UINT8_MAX;
	int64_t x302 = INT64_MAX;
	int64_t x303 = -1LL;
	volatile uint64_t x304 = UINT64_MAX;
	volatile int64_t t73 = -1970333031869LL;

    t73 = ((x301%x302)*(x303<=x304));

    if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x306 = 5841;
	int16_t x308 = INT16_MIN;
	uint64_t t74 = 111157LLU;

    t74 = ((x305%x306)*(x307<=x308));

    if (t74 != 1960LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x310 = -1;
	uint16_t x311 = UINT16_MAX;
	volatile int32_t t75 = -14;

    t75 = ((x309%x310)*(x311<=x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = INT32_MIN;
	volatile int16_t x315 = INT16_MAX;
	uint16_t x316 = 679U;
	int64_t t76 = -11LL;

    t76 = ((x313%x314)*(x315<=x316));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	uint32_t x323 = 438321U;
	volatile int64_t x324 = 4766158830LL;
	static volatile int32_t t77 = -172787;

    t77 = ((x321%x322)*(x323<=x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x325 = 4267U;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 5447879490851049LLU;
	volatile int8_t x328 = INT8_MAX;

    t78 = ((x325%x326)*(x327<=x328));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MAX;
	volatile int8_t x331 = -1;
	int64_t x332 = INT64_MIN;
	static int32_t t79 = -1;

    t79 = ((x329%x330)*(x331<=x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = 0;
	volatile int32_t x334 = -1;
	static int64_t x335 = INT64_MAX;
	int16_t x336 = 6;
	int32_t t80 = 3229;

    t80 = ((x333%x334)*(x335<=x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x337 = UINT32_MAX;
	int64_t x338 = 194396080260294LL;
	uint32_t x339 = UINT32_MAX;
	static volatile int8_t x340 = INT8_MIN;
	int64_t t81 = -652289390932551250LL;

    t81 = ((x337%x338)*(x339<=x340));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x341 = UINT64_MAX;
	uint8_t x342 = 57U;
	static volatile uint16_t x343 = 22263U;
	int16_t x344 = -1;
	volatile uint64_t t82 = 24853LLU;

    t82 = ((x341%x342)*(x343<=x344));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x345 = 746950137LLU;
	uint64_t x346 = 6718040490458008LLU;
	uint8_t x347 = 30U;
	int64_t x348 = INT64_MIN;
	uint64_t t83 = 98830LLU;

    t83 = ((x345%x346)*(x347<=x348));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = INT64_MIN;
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 0LLU;
	int64_t t84 = -92341LL;

    t84 = ((x349%x350)*(x351<=x352));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x353 = INT32_MAX;
	volatile int64_t x354 = 233LL;
	static int8_t x356 = INT8_MIN;
	int64_t t85 = 11996663161161518LL;

    t85 = ((x353%x354)*(x355<=x356));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = -1;
	volatile int32_t x358 = INT32_MIN;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t t86 = 2762885;

    t86 = ((x357%x358)*(x359<=x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = 29U;
	volatile uint64_t x362 = UINT64_MAX;
	static volatile int8_t x363 = INT8_MIN;
	volatile int64_t x364 = INT64_MIN;
	volatile uint64_t t87 = 0LLU;

    t87 = ((x361%x362)*(x363<=x364));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x366 = 221027184921LLU;
	volatile int8_t x367 = -1;
	static int32_t x368 = INT32_MAX;
	uint64_t t88 = 25553349LLU;

    t88 = ((x365%x366)*(x367<=x368));

    if (t88 != 174684347655LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x370 = -1563LL;
	uint16_t x372 = 0U;
	int64_t t89 = -1804890300260993180LL;

    t89 = ((x369%x370)*(x371<=x372));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MIN;

    t90 = ((x373%x374)*(x375<=x376));

    if (t90 != -58LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	static uint8_t x380 = 116U;
	static volatile int32_t t91 = 711256571;

    t91 = ((x377%x378)*(x379<=x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	static volatile int32_t x382 = INT32_MIN;
	volatile int32_t t92 = 1;

    t92 = ((x381%x382)*(x383<=x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x386 = INT16_MIN;
	static uint32_t x387 = UINT32_MAX;
	volatile int16_t x388 = INT16_MIN;
	int32_t t93 = 24;

    t93 = ((x385%x386)*(x387<=x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = -3;
	int32_t x390 = 15851;
	static int16_t x391 = -1;
	int32_t t94 = 25707614;

    t94 = ((x389%x390)*(x391<=x392));

    if (t94 != -3) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x393 = UINT16_MAX;
	int8_t x394 = -13;
	uint32_t x395 = 8579709U;
	int8_t x396 = -1;
	volatile int32_t t95 = -154;

    t95 = ((x393%x394)*(x395<=x396));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x397 = 3;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	static int32_t x400 = INT32_MIN;

    t96 = ((x397%x398)*(x399<=x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x401 = -1;
	int8_t x402 = -1;
	int8_t x403 = 0;
	int32_t x404 = 946;
	volatile int32_t t97 = -1;

    t97 = ((x401%x402)*(x403<=x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	uint32_t x406 = 2U;
	int16_t x408 = INT16_MIN;
	uint32_t t98 = 22847U;

    t98 = ((x405%x406)*(x407<=x408));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 11U;
	int32_t t99 = -1;

    t99 = ((x409%x410)*(x411<=x412));

    if (t99 != -43) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x414 = 213895931LL;
	int16_t x415 = INT16_MIN;
	volatile int64_t x416 = -253156845LL;

    t100 = ((x413%x414)*(x415<=x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = INT8_MAX;
	int64_t x418 = INT64_MAX;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = INT8_MIN;
	int64_t t101 = -1536013LL;

    t101 = ((x417%x418)*(x419<=x420));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = 1284111917350LLU;
	int8_t x422 = INT8_MAX;
	int32_t x423 = INT32_MAX;
	int16_t x424 = 0;
	uint64_t t102 = 2512434175857976251LLU;

    t102 = ((x421%x422)*(x423<=x424));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x425 = -1LL;
	static int8_t x426 = -38;
	volatile int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	int64_t t103 = 0LL;

    t103 = ((x425%x426)*(x427<=x428));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x429 = 6U;
	int16_t x430 = INT16_MIN;
	uint32_t x432 = 220263U;
	int32_t t104 = 0;

    t104 = ((x429%x430)*(x431<=x432));

    if (t104 != 6) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x434 = INT32_MAX;
	int8_t x435 = INT8_MIN;
	int32_t x436 = 995055;
	int32_t t105 = -2096973;

    t105 = ((x433%x434)*(x435<=x436));

    if (t105 != 2503) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x437 = 15U;
	uint64_t x438 = 93032011532LLU;
	int8_t x439 = -1;
	uint32_t x440 = 1467450446U;
	volatile uint64_t t106 = 10LLU;

    t106 = ((x437%x438)*(x439<=x440));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x442 = UINT16_MAX;
	static uint16_t x443 = UINT16_MAX;
	int16_t x444 = 3997;

    t107 = ((x441%x442)*(x443<=x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	uint16_t x446 = 450U;
	int16_t x447 = -43;
	volatile uint64_t x448 = 48511162LLU;
	volatile int32_t t108 = -1647169;

    t108 = ((x445%x446)*(x447<=x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x450 = 126U;
	int32_t x451 = INT32_MAX;
	uint8_t x452 = 18U;

    t109 = ((x449%x450)*(x451<=x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint64_t x454 = 112468903169LLU;
	int8_t x455 = INT8_MIN;
	volatile uint32_t x456 = 783525U;

    t110 = ((x453%x454)*(x455<=x456));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x457 = 1U;
	volatile int64_t x458 = -3003800424900474LL;
	uint8_t x459 = UINT8_MAX;
	volatile int16_t x460 = INT16_MIN;
	static volatile int64_t t111 = -5642167529596LL;

    t111 = ((x457%x458)*(x459<=x460));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x461 = -1LL;
	static uint64_t x462 = 165LLU;
	uint8_t x463 = UINT8_MAX;
	uint64_t x464 = 62856LLU;
	uint64_t t112 = 431359501762LLU;

    t112 = ((x461%x462)*(x463<=x464));

    if (t112 != 15LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x465 = -1;
	int8_t x466 = 1;
	uint16_t x467 = 2U;
	volatile int32_t t113 = 472322;

    t113 = ((x465%x466)*(x467<=x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x469 = 4LLU;
	int64_t x470 = 170130312LL;
	static int8_t x471 = -43;
	uint64_t t114 = 907085470LLU;

    t114 = ((x469%x470)*(x471<=x472));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = -1;
	int16_t x474 = 1;
	int8_t x476 = -1;
	int32_t t115 = 1697773;

    t115 = ((x473%x474)*(x475<=x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x477 = INT16_MIN;
	static uint16_t x478 = 13U;
	static volatile uint16_t x479 = 1343U;
	int32_t t116 = 2402310;

    t116 = ((x477%x478)*(x479<=x480));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x482 = INT32_MIN;

    t117 = ((x481%x482)*(x483<=x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x485 = -1;
	int64_t x488 = INT64_MIN;
	volatile int32_t t118 = 439012;

    t118 = ((x485%x486)*(x487<=x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x491 = -148;
	int8_t x492 = -1;

    t119 = ((x489%x490)*(x491<=x492));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x493 = -1;
	volatile int32_t x494 = INT32_MAX;
	uint64_t x495 = 0LLU;
	uint8_t x496 = UINT8_MAX;
	int32_t t120 = 267162045;

    t120 = ((x493%x494)*(x495<=x496));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x498 = 1412686LL;
	static int8_t x499 = INT8_MIN;
	int16_t x500 = 360;

    t121 = ((x497%x498)*(x499<=x500));

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = 1;
	volatile int16_t x502 = INT16_MIN;
	int8_t x503 = INT8_MIN;
	int16_t x504 = -1;
	int32_t t122 = -4305;

    t122 = ((x501%x502)*(x503<=x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x505 = UINT16_MAX;
	static int64_t x506 = INT64_MAX;
	int32_t x507 = INT32_MIN;
	int64_t t123 = -483531406028795915LL;

    t123 = ((x505%x506)*(x507<=x508));

    if (t123 != 65535LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = 0;
	uint8_t x510 = 3U;
	uint64_t x511 = UINT64_MAX;
	int8_t x512 = 58;
	int32_t t124 = -1220;

    t124 = ((x509%x510)*(x511<=x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x513 = UINT8_MAX;
	static int64_t x514 = INT64_MAX;
	uint64_t x515 = 65624062LLU;
	static uint32_t x516 = UINT32_MAX;
	static int64_t t125 = -1032LL;

    t125 = ((x513%x514)*(x515<=x516));

    if (t125 != 255LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = 2U;
	static uint64_t x518 = 10552746LLU;
	volatile int8_t x519 = -30;
	uint64_t x520 = UINT64_MAX;
	static uint64_t t126 = 120483LLU;

    t126 = ((x517%x518)*(x519<=x520));

    if (t126 != 2LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	static volatile uint16_t x523 = UINT16_MAX;
	int32_t t127 = -9181;

    t127 = ((x521%x522)*(x523<=x524));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x525 = UINT16_MAX;
	uint16_t x526 = 58U;
	int8_t x527 = -4;
	uint8_t x528 = UINT8_MAX;
	int32_t t128 = 1;

    t128 = ((x525%x526)*(x527<=x528));

    if (t128 != 53) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x529 = 256360U;
	int32_t x530 = INT32_MIN;
	static int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MIN;
	uint32_t t129 = 287U;

    t129 = ((x529%x530)*(x531<=x532));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x534 = INT64_MIN;
	int32_t x535 = -1;
	volatile uint64_t x536 = 244LLU;
	static int64_t t130 = 17908LL;

    t130 = ((x533%x534)*(x535<=x536));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x537 = -1;
	static int32_t t131 = 220848677;

    t131 = ((x537%x538)*(x539<=x540));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x546 = UINT32_MAX;
	int8_t x547 = INT8_MIN;
	uint32_t x548 = 13U;
	volatile uint32_t t132 = 6521U;

    t132 = ((x545%x546)*(x547<=x548));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x550 = 3U;
	int64_t x552 = INT64_MAX;

    t133 = ((x549%x550)*(x551<=x552));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x553 = UINT32_MAX;
	static int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MAX;
	uint32_t x556 = 19U;
	uint32_t t134 = 498U;

    t134 = ((x553%x554)*(x555<=x556));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = 485;
	int32_t x558 = -38532926;
	volatile uint8_t x559 = 20U;
	int16_t x560 = -13;

    t135 = ((x557%x558)*(x559<=x560));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x561 = UINT8_MAX;
	uint64_t x563 = 16059499326631380LLU;
	int16_t x564 = -103;

    t136 = ((x561%x562)*(x563<=x564));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	static int16_t x567 = 27;
	int16_t x568 = 15;
	volatile uint32_t t137 = 19329U;

    t137 = ((x565%x566)*(x567<=x568));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x569 = 18U;
	static uint32_t x570 = 34547495U;
	volatile int8_t x571 = 13;
	int8_t x572 = 32;
	volatile uint32_t t138 = 2U;

    t138 = ((x569%x570)*(x571<=x572));

    if (t138 != 18U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x573 = INT64_MIN;
	uint64_t x574 = 5186380996LLU;
	static volatile uint64_t t139 = 205939LLU;

    t139 = ((x573%x574)*(x575<=x576));

    if (t139 != 3471781992LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x577 = INT8_MIN;
	uint8_t x578 = 59U;
	uint32_t x580 = 628080412U;
	volatile int32_t t140 = -1;

    t140 = ((x577%x578)*(x579<=x580));

    if (t140 != -10) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x582 = INT16_MIN;
	uint8_t x584 = 1U;
	int32_t t141 = 908146199;

    t141 = ((x581%x582)*(x583<=x584));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x586 = INT8_MAX;
	int32_t x587 = -1;
	int16_t x588 = INT16_MIN;

    t142 = ((x585%x586)*(x587<=x588));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = 2;
	static volatile int64_t x590 = INT64_MAX;
	volatile uint8_t x591 = UINT8_MAX;
	uint16_t x592 = UINT16_MAX;
	static int64_t t143 = 4041189776477LL;

    t143 = ((x589%x590)*(x591<=x592));

    if (t143 != 2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x593 = INT64_MIN;
	int8_t x594 = 9;
	int32_t x596 = -1;
	static int64_t t144 = -16140LL;

    t144 = ((x593%x594)*(x595<=x596));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x597 = 6045U;
	static int8_t x599 = 13;

    t145 = ((x597%x598)*(x599<=x600));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x601 = INT8_MAX;
	uint32_t x602 = 1120U;
	int32_t x603 = -1;
	volatile int64_t x604 = -59344LL;
	volatile uint32_t t146 = 261210904U;

    t146 = ((x601%x602)*(x603<=x604));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = 4;
	int32_t x606 = -89743;
	uint64_t x607 = UINT64_MAX;
	int8_t x608 = 48;
	static volatile int32_t t147 = -334436;

    t147 = ((x605%x606)*(x607<=x608));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x610 = 10122254940568111LL;
	int16_t x611 = INT16_MAX;
	volatile int64_t x612 = 3882094589997LL;
	int64_t t148 = 951150349LL;

    t148 = ((x609%x610)*(x611<=x612));

    if (t148 != 127LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = 29311LL;
	int64_t x615 = INT64_MAX;
	int64_t x616 = INT64_MIN;
	volatile uint64_t t149 = 6LLU;

    t149 = ((x613%x614)*(x615<=x616));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x617 = 0U;
	int32_t x618 = INT32_MIN;
	static int64_t x620 = INT64_MIN;

    t150 = ((x617%x618)*(x619<=x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x621 = 20436320397615LLU;
	static int32_t x622 = INT32_MIN;
	uint8_t x623 = UINT8_MAX;
	static int8_t x624 = 3;
	uint64_t t151 = 16874906418267LLU;

    t151 = ((x621%x622)*(x623<=x624));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x625 = INT32_MAX;
	uint32_t x626 = 474850U;
	int8_t x627 = INT8_MAX;
	int16_t x628 = -1;
	uint32_t t152 = 14147506U;

    t152 = ((x625%x626)*(x627<=x628));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x630 = 6047386026966LLU;
	int16_t x631 = INT16_MIN;
	uint64_t t153 = 3136566205LLU;

    t153 = ((x629%x630)*(x631<=x632));

    if (t153 != 3348177349292LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x633 = -1LL;
	volatile int16_t x634 = -1;
	uint16_t x636 = 19U;
	static int64_t t154 = 17077302564867109LL;

    t154 = ((x633%x634)*(x635<=x636));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x637 = INT8_MAX;
	uint32_t x639 = UINT32_MAX;
	uint16_t x640 = 181U;
	int64_t t155 = 3990124LL;

    t155 = ((x637%x638)*(x639<=x640));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x642 = 4889;
	static volatile int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MIN;
	int64_t t156 = -242178514657936LL;

    t156 = ((x641%x642)*(x643<=x644));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x645 = 175976612U;
	static volatile int64_t x646 = INT64_MAX;
	uint16_t x647 = 13895U;
	volatile int16_t x648 = -1;
	volatile int64_t t157 = -2508485690560LL;

    t157 = ((x645%x646)*(x647<=x648));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x649 = INT64_MIN;
	int32_t x650 = -1;
	int64_t x651 = INT64_MAX;
	int16_t x652 = -4;
	int64_t t158 = -237423LL;

    t158 = ((x649%x650)*(x651<=x652));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x653 = INT32_MIN;
	static int16_t x654 = -28;
	volatile int64_t x655 = INT64_MAX;
	static int8_t x656 = 49;
	int32_t t159 = 19805060;

    t159 = ((x653%x654)*(x655<=x656));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x657 = -1;
	static int16_t x658 = INT16_MAX;
	int32_t t160 = -740610;

    t160 = ((x657%x658)*(x659<=x660));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x661 = INT32_MAX;
	static volatile int8_t x662 = INT8_MIN;
	volatile int16_t x663 = -12742;
	int64_t x664 = 361006346307281LL;
	volatile int32_t t161 = -255;

    t161 = ((x661%x662)*(x663<=x664));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = -5568;
	int64_t x667 = -1LL;
	volatile int32_t t162 = 202272;

    t162 = ((x665%x666)*(x667<=x668));

    if (t162 != -107) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x670 = 677U;
	static int16_t x672 = -92;

    t163 = ((x669%x670)*(x671<=x672));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x673 = 0U;
	int32_t x674 = 28168;
	static int64_t x675 = INT64_MAX;
	volatile int32_t x676 = INT32_MAX;

    t164 = ((x673%x674)*(x675<=x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	uint64_t x682 = UINT64_MAX;
	uint64_t t165 = 15315394LLU;

    t165 = ((x681%x682)*(x683<=x684));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x685 = 5;
	int16_t x686 = -122;
	volatile uint64_t x687 = 300077LLU;
	volatile int16_t x688 = -6518;
	volatile int32_t t166 = 58627379;

    t166 = ((x685%x686)*(x687<=x688));

    if (t166 != 5) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = 250446597LL;
	static int64_t x690 = -155753940941699LL;
	int64_t t167 = 443942LL;

    t167 = ((x689%x690)*(x691<=x692));

    if (t167 != 250446597LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x695 = 13522;
	int32_t x696 = -1;
	static volatile int64_t t168 = 138257856427675785LL;

    t168 = ((x693%x694)*(x695<=x696));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x702 = 4116868202622349507LLU;
	uint16_t x703 = 0U;
	uint64_t t169 = 19LLU;

    t169 = ((x701%x702)*(x703<=x704));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = INT64_MIN;
	uint64_t x706 = UINT64_MAX;
	static int16_t x707 = INT16_MAX;
	int64_t x708 = INT64_MAX;
	volatile uint64_t t170 = 2931623LLU;

    t170 = ((x705%x706)*(x707<=x708));

    if (t170 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x709 = 628U;
	int8_t x710 = INT8_MAX;
	static uint32_t x712 = UINT32_MAX;
	volatile uint32_t t171 = 9409766U;

    t171 = ((x709%x710)*(x711<=x712));

    if (t171 != 120U) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x715 = 41524696U;
	int16_t x716 = INT16_MAX;
	volatile int32_t t172 = 52;

    t172 = ((x713%x714)*(x715<=x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x717 = -789LL;
	uint32_t x718 = 7U;
	uint64_t x719 = UINT64_MAX;
	int32_t x720 = INT32_MIN;

    t173 = ((x717%x718)*(x719<=x720));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = INT16_MAX;
	volatile int64_t x722 = INT64_MAX;
	uint8_t x723 = 86U;
	volatile int64_t t174 = -60973LL;

    t174 = ((x721%x722)*(x723<=x724));

    if (t174 != 32767LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x725 = 19;
	uint8_t x727 = 4U;
	static int32_t t175 = -1178874;

    t175 = ((x725%x726)*(x727<=x728));

    if (t175 != 19) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x730 = UINT64_MAX;
	int8_t x731 = INT8_MIN;
	uint16_t x732 = 1523U;
	volatile uint64_t t176 = 346130LLU;

    t176 = ((x729%x730)*(x731<=x732));

    if (t176 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x733 = INT16_MAX;
	volatile int32_t x734 = INT32_MIN;
	uint64_t x735 = 113LLU;
	volatile uint64_t x736 = UINT64_MAX;
	int32_t t177 = 4372;

    t177 = ((x733%x734)*(x735<=x736));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x737 = -1;
	int16_t x738 = 9;
	int16_t x739 = INT16_MIN;
	static volatile int64_t x740 = -1LL;
	volatile int32_t t178 = 59138;

    t178 = ((x737%x738)*(x739<=x740));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x741 = -1;
	int8_t x742 = INT8_MIN;
	int32_t x744 = INT32_MIN;
	int32_t t179 = 190104;

    t179 = ((x741%x742)*(x743<=x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x745 = -1;
	volatile int16_t x746 = -3573;
	volatile uint16_t x747 = 179U;
	int32_t x748 = -3860271;
	int32_t t180 = 364026322;

    t180 = ((x745%x746)*(x747<=x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MIN;
	int64_t x750 = INT64_MIN;
	volatile int16_t x751 = INT16_MAX;
	volatile uint64_t x752 = UINT64_MAX;
	static int64_t t181 = 13433LL;

    t181 = ((x749%x750)*(x751<=x752));

    if (t181 != -128LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x753 = INT16_MIN;
	uint32_t x754 = UINT32_MAX;
	int64_t x755 = INT64_MAX;
	int64_t x756 = -90270LL;
	static uint32_t t182 = 602U;

    t182 = ((x753%x754)*(x755<=x756));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x757 = UINT8_MAX;
	int64_t x758 = -2788861276939LL;
	static int64_t x760 = -53402034018LL;
	volatile int64_t t183 = 29LL;

    t183 = ((x757%x758)*(x759<=x760));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x761 = 1;
	static int16_t x762 = -1;
	int16_t x763 = INT16_MIN;
	int16_t x764 = INT16_MAX;
	static int32_t t184 = 33;

    t184 = ((x761%x762)*(x763<=x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x765 = 15;
	static volatile int32_t x767 = -531582635;
	static uint64_t x768 = UINT64_MAX;
	int32_t t185 = 1732403;

    t185 = ((x765%x766)*(x767<=x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = INT32_MAX;
	volatile uint64_t x770 = 2090422LLU;
	static uint16_t x772 = 9U;
	uint64_t t186 = 900138255671908LLU;

    t186 = ((x769%x770)*(x771<=x772));

    if (t186 != 620253LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = -1;
	uint8_t x774 = 10U;
	int64_t x775 = INT64_MAX;
	volatile int8_t x776 = INT8_MIN;
	int32_t t187 = -1087;

    t187 = ((x773%x774)*(x775<=x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x777 = 88U;
	static uint64_t x778 = 3LLU;
	uint64_t x779 = 349LLU;
	uint64_t x780 = 0LLU;
	uint64_t t188 = 34139379721LLU;

    t188 = ((x777%x778)*(x779<=x780));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x783 = 29U;
	uint16_t x784 = 451U;

    t189 = ((x781%x782)*(x783<=x784));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x785 = 1245958403977LLU;
	int8_t x786 = INT8_MIN;
	static uint64_t x787 = UINT64_MAX;
	static uint32_t x788 = UINT32_MAX;
	static volatile uint64_t t190 = 332458007224LLU;

    t190 = ((x785%x786)*(x787<=x788));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x789 = 1;
	static int32_t x791 = 26;
	int16_t x792 = -17;

    t191 = ((x789%x790)*(x791<=x792));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x793 = 6018LL;
	int32_t x794 = INT32_MIN;
	int32_t x795 = -1;
	volatile int32_t x796 = INT32_MAX;
	int64_t t192 = -1725LL;

    t192 = ((x793%x794)*(x795<=x796));

    if (t192 != 6018LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x798 = UINT32_MAX;
	uint8_t x799 = 20U;
	volatile int64_t t193 = -3654894240436LL;

    t193 = ((x797%x798)*(x799<=x800));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x801 = -14;
	uint32_t x802 = UINT32_MAX;
	static volatile uint32_t x804 = 28U;
	static volatile uint32_t t194 = 1250U;

    t194 = ((x801%x802)*(x803<=x804));

    if (t194 != 4294967282U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x805 = INT32_MIN;
	static int8_t x806 = -1;
	volatile uint64_t x808 = 1LLU;

    t195 = ((x805%x806)*(x807<=x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = -1852;
	int64_t x810 = INT64_MIN;
	volatile uint64_t x812 = 1030436626327628785LLU;

    t196 = ((x809%x810)*(x811<=x812));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x813 = -1;
	int32_t x814 = 7107;
	int16_t x816 = INT16_MIN;
	int32_t t197 = -6327277;

    t197 = ((x813%x814)*(x815<=x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x817 = INT32_MAX;
	volatile int8_t x819 = INT8_MIN;
	int8_t x820 = INT8_MAX;
	int32_t t198 = 53233;

    t198 = ((x817%x818)*(x819<=x820));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = 3;
	int16_t x822 = INT16_MIN;
	volatile uint32_t x824 = UINT32_MAX;
	int32_t t199 = 14;

    t199 = ((x821%x822)*(x823<=x824));

    if (t199 != 3) { NG(); } else { ; }
	
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

