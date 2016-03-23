
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

int32_t x6 = 28;
int64_t x15 = -1LL;
volatile int32_t t3 = -13;
volatile int8_t x19 = -1;
int8_t x22 = 0;
volatile int32_t x31 = INT32_MIN;
int64_t t7 = INT64_MAX;
int32_t t9 = -12;
int32_t t10 = -327;
uint16_t x48 = UINT16_MAX;
int32_t t11 = 0;
int32_t x50 = -1;
int64_t x52 = INT64_MAX;
int16_t x59 = 3103;
uint64_t x62 = 5191576LLU;
volatile int64_t t16 = INT64_MIN;
int8_t x79 = INT8_MIN;
volatile int16_t x82 = INT16_MAX;
uint64_t x85 = UINT64_MAX;
static uint64_t x91 = UINT64_MAX;
int64_t x92 = 3050199LL;
int32_t x97 = -1;
int64_t x98 = -49974504276LL;
int64_t x106 = 4788299LL;
int32_t x107 = INT32_MAX;
int64_t x111 = INT64_MIN;
static int64_t x114 = 3LL;
uint32_t x115 = UINT32_MAX;
int8_t x122 = -1;
int32_t x126 = -1;
static uint64_t x127 = UINT64_MAX;
static int32_t t28 = 1;
static volatile uint16_t x130 = UINT16_MAX;
volatile int32_t x137 = 28;
int32_t x139 = -12037529;
volatile int64_t x143 = INT64_MIN;
static volatile int32_t t32 = 7568;
int64_t x150 = 859535786186LL;
uint8_t x151 = 102U;
static int32_t t33 = -301235014;
static volatile int32_t t34 = 10;
int64_t x162 = 5199676921LL;
volatile int16_t x164 = -95;
static int64_t x166 = INT64_MIN;
int8_t x168 = 26;
volatile int32_t t37 = 2;
uint64_t x173 = 119786066948671861LLU;
volatile int32_t x174 = INT32_MAX;
int64_t x176 = INT64_MIN;
volatile int64_t t39 = INT64_MIN;
int32_t x181 = 19;
static volatile int8_t x191 = 12;
int64_t x192 = INT64_MIN;
volatile int16_t x201 = 0;
int16_t x202 = -1;
static int64_t x214 = 0LL;
uint8_t x216 = 3U;
int16_t x226 = INT16_MAX;
int16_t x230 = -1;
static uint16_t x238 = UINT16_MAX;
int32_t x256 = INT32_MAX;
int8_t x260 = -1;
int32_t x271 = INT32_MAX;
int16_t x276 = INT16_MIN;
int32_t x282 = -832520;
volatile int8_t x283 = INT8_MAX;
volatile int32_t x287 = 0;
volatile int64_t x293 = -2154173752LL;
int16_t x300 = -149;
int16_t x304 = INT16_MIN;
static uint8_t x306 = 7U;
int8_t x311 = -27;
uint64_t x316 = 208413LLU;
static uint64_t t70 = 56621753051LLU;
static int16_t x319 = INT16_MIN;
int16_t x320 = INT16_MIN;
int32_t t71 = -54003;
uint32_t x323 = UINT32_MAX;
static uint16_t x341 = 0U;
uint16_t x343 = UINT16_MAX;
volatile int64_t t78 = -97200LL;
volatile uint8_t x355 = UINT8_MAX;
int32_t t81 = -1;
uint32_t x374 = UINT32_MAX;
volatile uint64_t x379 = 7997706LLU;
int64_t x388 = -1LL;
volatile uint32_t x389 = 465378U;
static int32_t x391 = INT32_MAX;
int64_t x392 = INT64_MAX;
static int8_t x393 = 1;
int32_t x397 = INT32_MAX;
int64_t x401 = -1LL;
static uint16_t x408 = 607U;
int16_t x414 = 2497;
volatile int16_t x420 = INT16_MIN;
int32_t t95 = -250776;
int64_t x424 = INT64_MIN;
int8_t x434 = 1;
static int64_t x437 = -41LL;
uint64_t x438 = 372969LLU;
volatile int64_t x439 = INT64_MIN;
volatile int64_t x440 = INT64_MAX;
static volatile int64_t t100 = INT64_MAX;
uint64_t x441 = UINT64_MAX;
int32_t x451 = INT32_MAX;
volatile int32_t t102 = 0;
uint32_t x456 = 37U;
volatile uint32_t t103 = 230152U;
int32_t x459 = INT32_MIN;
static volatile int64_t x469 = -1LL;
int16_t x479 = INT16_MIN;
int64_t t108 = -244LL;
volatile int8_t x490 = -43;
uint16_t x491 = UINT16_MAX;
static volatile int64_t t111 = -456LL;
static int16_t x498 = INT16_MIN;
int64_t x500 = -15565LL;
uint16_t x505 = 3928U;
int8_t x506 = INT8_MAX;
uint8_t x510 = 36U;
int32_t x514 = -1;
uint16_t x516 = 409U;
int64_t x518 = 6740214632340584LL;
int8_t x519 = -1;
int32_t t118 = -4;
uint32_t x525 = UINT32_MAX;
int16_t x539 = INT16_MIN;
volatile int8_t x540 = INT8_MIN;
uint32_t x544 = 42223U;
static int16_t x545 = 123;
static uint64_t x546 = UINT64_MAX;
static uint32_t x550 = 6143879U;
int64_t x551 = INT64_MAX;
static volatile uint16_t x563 = UINT16_MAX;
uint32_t x564 = 6737884U;
int32_t x567 = INT32_MAX;
int8_t x569 = -1;
int8_t x570 = INT8_MIN;
volatile int16_t x581 = -1;
int64_t x582 = INT64_MIN;
int16_t x584 = INT16_MIN;
volatile int32_t t133 = -7;
static volatile uint64_t x592 = UINT64_MAX;
static uint16_t x593 = UINT16_MAX;
int16_t x596 = -1;
int8_t x603 = INT8_MIN;
int64_t x605 = -67814129393993755LL;
static int32_t x608 = INT32_MIN;
int16_t x611 = INT16_MIN;
volatile int8_t x615 = INT8_MIN;
static int8_t x619 = INT8_MIN;
int64_t x626 = INT64_MIN;
volatile int16_t x630 = INT16_MAX;
int32_t t145 = -1;
volatile int16_t x633 = 544;
uint8_t x634 = 0U;
int32_t t146 = 1;
uint16_t x640 = 0U;
int32_t t148 = 3935725;
volatile uint64_t x645 = 2491842284LLU;
uint32_t t151 = 466183U;
int8_t x670 = INT8_MAX;
uint8_t x672 = UINT8_MAX;
int16_t x678 = INT16_MIN;
volatile int64_t x683 = -1941885085LL;
uint32_t t155 = UINT32_MAX;
int16_t x687 = -1;
int32_t x688 = -1;
int64_t x690 = INT64_MIN;
int32_t x691 = INT32_MIN;
int8_t x693 = INT8_MIN;
uint64_t x696 = 466069LLU;
volatile int8_t x703 = 8;
uint32_t x711 = 79073U;
int32_t t160 = 30265007;
int8_t x717 = INT8_MIN;
int16_t x718 = INT16_MIN;
int8_t x720 = -1;
int32_t x721 = INT32_MIN;
static int32_t t163 = 31854953;
static uint32_t x739 = 36U;
static volatile int32_t t166 = 162344537;
uint16_t x741 = 83U;
volatile int32_t x745 = INT32_MIN;
static uint32_t x749 = 57U;
int16_t x750 = -278;
static int32_t x753 = 28;
uint32_t x754 = 45723084U;
int16_t x756 = INT16_MIN;
int32_t x775 = INT32_MAX;
int64_t x784 = INT64_MAX;
static int32_t x792 = -321;
int32_t x793 = INT32_MAX;
uint64_t x795 = 18413898478LLU;
volatile int64_t t178 = -55256LL;
static int16_t x799 = 0;
int16_t x801 = -1;
uint16_t x805 = 39U;
int32_t t181 = 1;
int64_t x811 = INT64_MIN;
static int8_t x825 = INT8_MIN;
int64_t x829 = INT64_MIN;
uint16_t x831 = 6U;
uint8_t x835 = 4U;
static volatile uint64_t x836 = UINT64_MAX;
volatile int32_t x839 = -1;
volatile int16_t x840 = INT16_MIN;
uint16_t x841 = UINT16_MAX;
uint64_t x854 = UINT64_MAX;
uint64_t x863 = 1LLU;
int32_t t193 = INT32_MIN;
volatile uint16_t x866 = 2941U;
uint8_t x875 = 1U;
volatile int32_t t195 = -8383;
int16_t x885 = INT16_MAX;
int32_t t198 = 1853;
static uint64_t x895 = UINT64_MAX;
volatile int32_t t199 = 15258;


void f0(void) {
    	int8_t x1 = 2;
	uint32_t x2 = 398928U;
	int16_t x3 = INT16_MIN;
	int16_t x4 = 906;
	volatile int32_t t0 = 16;

    t0 = (((x1-x2)<=x3)|x4);

    if (t0 != 907) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -11015783711LL;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 119591217352616611LLU;
	volatile uint64_t t1 = 3888226LLU;

    t1 = (((x5-x6)<=x7)|x8);

    if (t1 != 119591217352616611LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MIN;
	static volatile int8_t x11 = 6;
	uint16_t x12 = 1U;
	int32_t t2 = 2;

    t2 = (((x9-x10)<=x11)|x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = 197;
	static int16_t x14 = INT16_MIN;
	int8_t x16 = -1;

    t3 = (((x13-x14)<=x15)|x16);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 2727;
	uint32_t x18 = 61348U;
	int8_t x20 = 0;
	volatile int32_t t4 = -24286333;

    t4 = (((x17-x18)<=x19)|x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = 0;
	static int16_t x23 = 50;
	int8_t x24 = 8;
	volatile int32_t t5 = 930;

    t5 = (((x21-x22)<=x23)|x24);

    if (t5 != 9) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = 222;
	int32_t x26 = 1;
	uint16_t x27 = 7U;
	int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

    t6 = (((x25-x26)<=x27)|x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = -9712935137035LL;
	uint32_t x30 = 86U;
	int64_t x32 = INT64_MAX;

    t7 = (((x29-x30)<=x31)|x32);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = -1;
	volatile uint32_t x34 = 3U;
	static int16_t x35 = -3479;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t8 = INT64_MAX;

    t8 = (((x33-x34)<=x35)|x36);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int64_t x38 = -27LL;
	static int16_t x39 = -1299;
	int32_t x40 = -1039452;

    t9 = (((x37-x38)<=x39)|x40);

    if (t9 != -1039452) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x41 = 6759U;
	int8_t x42 = -1;
	uint8_t x43 = 70U;
	static volatile int16_t x44 = INT16_MIN;

    t10 = (((x41-x42)<=x43)|x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MAX;
	uint32_t x46 = 118752U;
	int64_t x47 = 129668711LL;

    t11 = (((x45-x46)<=x47)|x48);

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	volatile int8_t x51 = 2;
	volatile int64_t t12 = INT64_MAX;

    t12 = (((x49-x50)<=x51)|x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -5232;
	int32_t x58 = INT32_MIN;
	int32_t x60 = -30230;
	int32_t t13 = -680;

    t13 = (((x57-x58)<=x59)|x60);

    if (t13 != -30230) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = -1;
	volatile int32_t x63 = -1;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t14 = -13;

    t14 = (((x61-x62)<=x63)|x64);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = -1LL;
	static int8_t x66 = 2;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = -14269;

    t15 = (((x65-x66)<=x67)|x68);

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = 341016190461LL;
	uint64_t x70 = 2LLU;
	volatile uint32_t x71 = 254602707U;
	int64_t x72 = INT64_MIN;

    t16 = (((x69-x70)<=x71)|x72);

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	int16_t x74 = 1376;
	static volatile uint16_t x75 = 15658U;
	int32_t x76 = INT32_MIN;
	volatile int32_t t17 = INT32_MIN;

    t17 = (((x73-x74)<=x75)|x76);

    if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = INT8_MAX;
	int8_t x78 = INT8_MAX;
	static int64_t x80 = -484898723360927332LL;
	static volatile int64_t t18 = 409771272236716951LL;

    t18 = (((x77-x78)<=x79)|x80);

    if (t18 != -484898723360927332LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 1U;
	int8_t x83 = 23;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t19 = -945;

    t19 = (((x81-x82)<=x83)|x84);

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x86 = 1U;
	static int32_t x87 = 3;
	uint32_t x88 = 737643784U;
	volatile uint32_t t20 = 386724367U;

    t20 = (((x85-x86)<=x87)|x88);

    if (t20 != 737643784U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x89 = 361LLU;
	static int16_t x90 = 1570;
	int64_t t21 = -99LL;

    t21 = (((x89-x90)<=x91)|x92);

    if (t21 != 3050199LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x99 = 15;
	int64_t x100 = -1LL;
	volatile int64_t t22 = -1377012932LL;

    t22 = (((x97-x98)<=x99)|x100);

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x105 = INT32_MIN;
	static int16_t x108 = INT16_MIN;
	int32_t t23 = -174394;

    t23 = (((x105-x106)<=x107)|x108);

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	uint64_t x110 = UINT64_MAX;
	static int16_t x112 = 0;
	int32_t t24 = -75;

    t24 = (((x109-x110)<=x111)|x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x113 = 107U;
	int64_t x116 = 97LL;
	int64_t t25 = 0LL;

    t25 = (((x113-x114)<=x115)|x116);

    if (t25 != 97LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x117 = 2758985467885660106LLU;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int64_t x120 = -7386282987830064LL;
	int64_t t26 = 8263LL;

    t26 = (((x117-x118)<=x119)|x120);

    if (t26 != -7386282987830063LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = -1;
	uint16_t x123 = UINT16_MAX;
	volatile int32_t x124 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

    t27 = (((x121-x122)<=x123)|x124);

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x125 = -10;
	uint8_t x128 = 84U;

    t28 = (((x125-x126)<=x127)|x128);

    if (t28 != 85) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x129 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t29 = -13;

    t29 = (((x129-x130)<=x131)|x132);

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x138 = UINT16_MAX;
	int8_t x140 = -1;
	int32_t t30 = -10910921;

    t30 = (((x137-x138)<=x139)|x140);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	uint64_t x144 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

    t31 = (((x141-x142)<=x143)|x144);

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x145 = 4U;
	int16_t x146 = INT16_MAX;
	volatile int16_t x147 = 1;
	volatile int16_t x148 = 14;

    t32 = (((x145-x146)<=x147)|x148);

    if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x149 = UINT64_MAX;
	static int16_t x152 = INT16_MIN;

    t33 = (((x149-x150)<=x151)|x152);

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MIN;
	int64_t x154 = INT64_MIN;
	static uint64_t x155 = 132313155639LLU;
	volatile int32_t x156 = -1229843;

    t34 = (((x153-x154)<=x155)|x156);

    if (t34 != -1229843) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x157 = -1;
	volatile int64_t x158 = -1LL;
	int8_t x159 = -1;
	int32_t x160 = -501286;
	int32_t t35 = -945;

    t35 = (((x157-x158)<=x159)|x160);

    if (t35 != -501286) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x161 = INT32_MAX;
	int64_t x163 = INT64_MIN;
	volatile int32_t t36 = -1;

    t36 = (((x161-x162)<=x163)|x164);

    if (t36 != -95) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x165 = 243565364LLU;
	int64_t x167 = -1LL;

    t37 = (((x165-x166)<=x167)|x168);

    if (t37 != 27) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = -6620083652LL;
	int8_t x170 = -1;
	static volatile uint64_t x171 = 1503409LLU;
	uint8_t x172 = 0U;
	volatile int32_t t38 = 2;

    t38 = (((x169-x170)<=x171)|x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x175 = 490128628U;

    t39 = (((x173-x174)<=x175)|x176);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x177 = INT64_MIN;
	static int8_t x178 = -3;
	uint32_t x179 = 11U;
	static int16_t x180 = -1705;
	int32_t t40 = 292;

    t40 = (((x177-x178)<=x179)|x180);

    if (t40 != -1705) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x182 = 497548LLU;
	int16_t x183 = INT16_MIN;
	volatile int16_t x184 = INT16_MIN;
	volatile int32_t t41 = 1;

    t41 = (((x181-x182)<=x183)|x184);

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = INT8_MIN;
	static int16_t x190 = -1;
	int64_t t42 = 17399595784333294LL;

    t42 = (((x189-x190)<=x191)|x192);

    if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x193 = UINT16_MAX;
	int64_t x194 = INT64_MAX;
	volatile int8_t x195 = -1;
	int8_t x196 = INT8_MAX;
	int32_t t43 = -25620311;

    t43 = (((x193-x194)<=x195)|x196);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x203 = INT64_MAX;
	volatile uint8_t x204 = 1U;
	int32_t t44 = 340275197;

    t44 = (((x201-x202)<=x203)|x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x205 = 9U;
	volatile int32_t x206 = 177;
	static uint16_t x207 = 4U;
	int64_t x208 = 0LL;
	static volatile int64_t t45 = -6437LL;

    t45 = (((x205-x206)<=x207)|x208);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MAX;
	static int16_t x211 = INT16_MIN;
	int16_t x212 = -1;
	static int32_t t46 = -25053;

    t46 = (((x209-x210)<=x211)|x212);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = 24;
	int8_t x215 = INT8_MIN;
	volatile int32_t t47 = 2631838;

    t47 = (((x213-x214)<=x215)|x216);

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x217 = 3733919322593411LLU;
	int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 8U;
	volatile int32_t t48 = -970799;

    t48 = (((x217-x218)<=x219)|x220);

    if (t48 != 9) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x221 = UINT64_MAX;
	int32_t x222 = INT32_MIN;
	volatile int64_t x223 = -6428LL;
	int8_t x224 = 3;
	int32_t t49 = 2;

    t49 = (((x221-x222)<=x223)|x224);

    if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x225 = INT32_MAX;
	static int16_t x227 = INT16_MAX;
	static int32_t x228 = -1;
	int32_t t50 = -4185554;

    t50 = (((x225-x226)<=x227)|x228);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x229 = -1;
	int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

    t51 = (((x229-x230)<=x231)|x232);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x237 = 29;
	volatile uint8_t x239 = 6U;
	volatile int64_t x240 = INT64_MAX;
	int64_t t52 = INT64_MAX;

    t52 = (((x237-x238)<=x239)|x240);

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = INT64_MIN;
	static int64_t x243 = 3576380653LL;
	volatile uint64_t x244 = 17274LLU;
	static volatile uint64_t t53 = 22509LLU;

    t53 = (((x241-x242)<=x243)|x244);

    if (t53 != 17274LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = 179474U;
	int16_t x246 = INT16_MIN;
	static volatile int32_t x247 = -28166;
	int64_t x248 = 283LL;
	static int64_t t54 = 239457642LL;

    t54 = (((x245-x246)<=x247)|x248);

    if (t54 != 283LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = 5LLU;
	int16_t x250 = -1;
	static int16_t x251 = INT16_MAX;
	volatile int64_t x252 = INT64_MIN;
	volatile int64_t t55 = 473695LL;

    t55 = (((x249-x250)<=x251)|x252);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = INT8_MAX;
	static uint16_t x254 = 2209U;
	volatile int64_t x255 = INT64_MIN;
	int32_t t56 = INT32_MAX;

    t56 = (((x253-x254)<=x255)|x256);

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x257 = -236656347;
	int32_t x258 = INT32_MIN;
	uint64_t x259 = 7228550695LLU;
	volatile int32_t t57 = 12415093;

    t57 = (((x257-x258)<=x259)|x260);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = 0;
	uint16_t x262 = 1U;
	int16_t x263 = -1;
	static uint64_t x264 = 5396LLU;
	static volatile uint64_t t58 = 58531LLU;

    t58 = (((x261-x262)<=x263)|x264);

    if (t58 != 5397LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x265 = -191;
	int16_t x266 = INT16_MIN;
	int32_t x267 = -32162156;
	int32_t x268 = -1;
	int32_t t59 = -60418926;

    t59 = (((x265-x266)<=x267)|x268);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = 32;
	uint32_t x270 = UINT32_MAX;
	volatile uint16_t x272 = 66U;
	int32_t t60 = -83669;

    t60 = (((x269-x270)<=x271)|x272);

    if (t60 != 67) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = INT32_MAX;
	int8_t x274 = 12;
	int16_t x275 = -3;
	volatile int32_t t61 = 20;

    t61 = (((x273-x274)<=x275)|x276);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x281 = UINT64_MAX;
	volatile uint16_t x284 = 13346U;
	volatile int32_t t62 = 1;

    t62 = (((x281-x282)<=x283)|x284);

    if (t62 != 13346) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x285 = INT16_MIN;
	static int16_t x286 = INT16_MIN;
	static uint64_t x288 = 1051075868378709LLU;
	uint64_t t63 = 46003157752LLU;

    t63 = (((x285-x286)<=x287)|x288);

    if (t63 != 1051075868378709LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x289 = 3960649U;
	static volatile int32_t x290 = -1;
	int8_t x291 = INT8_MIN;
	int16_t x292 = -1;
	volatile int32_t t64 = -94119011;

    t64 = (((x289-x290)<=x291)|x292);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x294 = UINT8_MAX;
	static int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t65 = -135;

    t65 = (((x293-x294)<=x295)|x296);

    if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x297 = 2802900;
	int32_t x298 = INT32_MAX;
	uint8_t x299 = UINT8_MAX;
	static volatile int32_t t66 = 445562;

    t66 = (((x297-x298)<=x299)|x300);

    if (t66 != -149) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MIN;
	static uint64_t x302 = 5821LLU;
	int32_t x303 = INT32_MIN;
	volatile int32_t t67 = 17136487;

    t67 = (((x301-x302)<=x303)|x304);

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x305 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	int8_t x308 = 0;
	int32_t t68 = 22499532;

    t68 = (((x305-x306)<=x307)|x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = -1LL;
	uint32_t x310 = 235U;
	int16_t x312 = INT16_MIN;
	int32_t t69 = -1;

    t69 = (((x309-x310)<=x311)|x312);

    if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = -1;
	int64_t x315 = INT64_MAX;

    t70 = (((x313-x314)<=x315)|x316);

    if (t70 != 208413LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x317 = UINT32_MAX;
	volatile int64_t x318 = INT64_MAX;

    t71 = (((x317-x318)<=x319)|x320);

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x321 = -1;
	int8_t x322 = 9;
	int64_t x324 = INT64_MIN;
	int64_t t72 = -39842043682020LL;

    t72 = (((x321-x322)<=x323)|x324);

    if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x325 = 119U;
	static int64_t x326 = -1LL;
	int32_t x327 = INT32_MIN;
	static int64_t x328 = -210948LL;
	volatile int64_t t73 = 30484112040LL;

    t73 = (((x325-x326)<=x327)|x328);

    if (t73 != -210948LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x329 = 32U;
	uint8_t x330 = UINT8_MAX;
	static int64_t x331 = INT64_MIN;
	uint8_t x332 = 3U;
	int32_t t74 = 217294;

    t74 = (((x329-x330)<=x331)|x332);

    if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = INT16_MIN;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = 1;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t75 = 143434084;

    t75 = (((x337-x338)<=x339)|x340);

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x342 = 13509747819LL;
	static int16_t x344 = INT16_MAX;
	int32_t t76 = 58136917;

    t76 = (((x341-x342)<=x343)|x344);

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x347 = 82LL;
	int8_t x348 = INT8_MAX;
	volatile int32_t t77 = -842002502;

    t77 = (((x345-x346)<=x347)|x348);

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = 1;
	volatile int16_t x350 = INT16_MAX;
	static int16_t x351 = -1;
	int64_t x352 = INT64_MIN;

    t78 = (((x349-x350)<=x351)|x352);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x353 = 3128396LL;
	uint64_t x354 = UINT64_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t79 = UINT32_MAX;

    t79 = (((x353-x354)<=x355)|x356);

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x357 = -1;
	static int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MIN;
	int16_t x360 = 507;
	volatile int32_t t80 = 0;

    t80 = (((x357-x358)<=x359)|x360);

    if (t80 != 507) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x361 = 185U;
	int32_t x362 = 37;
	uint8_t x363 = 0U;
	int8_t x364 = -60;

    t81 = (((x361-x362)<=x363)|x364);

    if (t81 != -60) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x365 = UINT8_MAX;
	uint8_t x366 = UINT8_MAX;
	static int16_t x367 = 3;
	int16_t x368 = -1;
	volatile int32_t t82 = -116096;

    t82 = (((x365-x366)<=x367)|x368);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x369 = -265690712007918491LL;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = INT32_MIN;
	uint16_t x372 = 997U;
	int32_t t83 = 299;

    t83 = (((x369-x370)<=x371)|x372);

    if (t83 != 997) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x373 = 75U;
	uint32_t x375 = 1973730026U;
	uint16_t x376 = UINT16_MAX;
	static volatile int32_t t84 = -2362414;

    t84 = (((x373-x374)<=x375)|x376);

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x377 = INT32_MIN;
	int16_t x378 = INT16_MIN;
	uint32_t x380 = UINT32_MAX;
	uint32_t t85 = UINT32_MAX;

    t85 = (((x377-x378)<=x379)|x380);

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = 1597050703LL;
	uint32_t x382 = 552U;
	int8_t x383 = 0;
	uint32_t x384 = 103793751U;
	uint32_t t86 = 62684U;

    t86 = (((x381-x382)<=x383)|x384);

    if (t86 != 103793751U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x385 = 14409750LL;
	int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	int64_t t87 = -16213LL;

    t87 = (((x385-x386)<=x387)|x388);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x390 = 0U;
	static volatile int64_t t88 = INT64_MAX;

    t88 = (((x389-x390)<=x391)|x392);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x394 = 50U;
	volatile uint16_t x395 = UINT16_MAX;
	static int32_t x396 = INT32_MIN;
	int32_t t89 = INT32_MIN;

    t89 = (((x393-x394)<=x395)|x396);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x398 = 12;
	int8_t x399 = INT8_MIN;
	uint16_t x400 = 147U;
	volatile int32_t t90 = 0;

    t90 = (((x397-x398)<=x399)|x400);

    if (t90 != 147) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x402 = UINT16_MAX;
	int16_t x403 = INT16_MAX;
	volatile uint8_t x404 = 30U;
	int32_t t91 = -385131315;

    t91 = (((x401-x402)<=x403)|x404);

    if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x405 = 11517U;
	int8_t x406 = INT8_MAX;
	int64_t x407 = INT64_MIN;
	static volatile int32_t t92 = 166650667;

    t92 = (((x405-x406)<=x407)|x408);

    if (t92 != 607) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = 36702;
	static uint8_t x411 = UINT8_MAX;
	static volatile int32_t x412 = INT32_MIN;
	volatile int32_t t93 = 69793;

    t93 = (((x409-x410)<=x411)|x412);

    if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x413 = 1U;
	int16_t x415 = -6500;
	int32_t x416 = INT32_MIN;
	static volatile int32_t t94 = INT32_MIN;

    t94 = (((x413-x414)<=x415)|x416);

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x417 = -1;
	int16_t x418 = -49;
	int64_t x419 = INT64_MIN;

    t95 = (((x417-x418)<=x419)|x420);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x421 = 198;
	int8_t x422 = -1;
	uint8_t x423 = 25U;
	static int64_t t96 = INT64_MIN;

    t96 = (((x421-x422)<=x423)|x424);

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x425 = 4U;
	uint8_t x426 = 25U;
	int16_t x427 = 13306;
	int8_t x428 = -19;
	volatile int32_t t97 = 6863;

    t97 = (((x425-x426)<=x427)|x428);

    if (t97 != -19) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x429 = -364;
	static int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t98 = 1696670;

    t98 = (((x429-x430)<=x431)|x432);

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x433 = UINT8_MAX;
	volatile int8_t x435 = 5;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t99 = -1737317;

    t99 = (((x433-x434)<=x435)|x436);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    

    t100 = (((x437-x438)<=x439)|x440);

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x442 = INT64_MIN;
	uint64_t x443 = 722699LLU;
	int8_t x444 = -1;
	volatile int32_t t101 = 18;

    t101 = (((x441-x442)<=x443)|x444);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x449 = 39193;
	int64_t x450 = -1LL;
	uint8_t x452 = 6U;

    t102 = (((x449-x450)<=x451)|x452);

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x453 = 17U;
	static int8_t x454 = -5;
	int8_t x455 = -1;

    t103 = (((x453-x454)<=x455)|x456);

    if (t103 != 37U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x457 = INT16_MAX;
	volatile int8_t x458 = -1;
	int8_t x460 = -1;
	volatile int32_t t104 = -2;

    t104 = (((x457-x458)<=x459)|x460);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x461 = 838110194129281457LL;
	uint16_t x462 = 56U;
	int16_t x463 = INT16_MIN;
	volatile int64_t x464 = -1LL;
	static volatile int64_t t105 = 3508043752159197933LL;

    t105 = (((x461-x462)<=x463)|x464);

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x470 = -1;
	static volatile uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MIN;
	volatile int64_t t106 = 894LL;

    t106 = (((x469-x470)<=x471)|x472);

    if (t106 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x473 = -1LL;
	int64_t x474 = -546478593579LL;
	int16_t x475 = INT16_MIN;
	int32_t x476 = 8277882;
	volatile int32_t t107 = -3324240;

    t107 = (((x473-x474)<=x475)|x476);

    if (t107 != 8277882) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x477 = 1U;
	uint64_t x478 = UINT64_MAX;
	volatile int64_t x480 = INT64_MIN;

    t108 = (((x477-x478)<=x479)|x480);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x481 = 3U;
	static volatile int64_t x482 = -1LL;
	volatile int8_t x483 = INT8_MIN;
	static volatile uint16_t x484 = 4314U;
	int32_t t109 = 1;

    t109 = (((x481-x482)<=x483)|x484);

    if (t109 != 4314) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x486 = INT8_MIN;
	int64_t x487 = INT64_MIN;
	int8_t x488 = 1;
	volatile int32_t t110 = -6;

    t110 = (((x485-x486)<=x487)|x488);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x489 = INT32_MIN;
	int64_t x492 = -26254132892673LL;

    t111 = (((x489-x490)<=x491)|x492);

    if (t111 != -26254132892673LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x493 = 1U;
	uint32_t x494 = UINT32_MAX;
	static uint8_t x495 = 15U;
	static uint32_t x496 = 74417U;
	volatile uint32_t t112 = 3892U;

    t112 = (((x493-x494)<=x495)|x496);

    if (t112 != 74417U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x497 = -39196;
	int32_t x499 = INT32_MAX;
	volatile int64_t t113 = -97872325188997321LL;

    t113 = (((x497-x498)<=x499)|x500);

    if (t113 != -15565LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x501 = 47622096179460LLU;
	int32_t x502 = 30680088;
	uint8_t x503 = UINT8_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t114 = -14198356;

    t114 = (((x501-x502)<=x503)|x504);

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x507 = 52U;
	volatile uint32_t x508 = 2978300U;
	uint32_t t115 = 30210042U;

    t115 = (((x505-x506)<=x507)|x508);

    if (t115 != 2978300U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x509 = UINT16_MAX;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -70373;
	static int32_t t116 = -100656;

    t116 = (((x509-x510)<=x511)|x512);

    if (t116 != -70373) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x513 = 0;
	static uint8_t x515 = UINT8_MAX;
	int32_t t117 = 640;

    t117 = (((x513-x514)<=x515)|x516);

    if (t117 != 409) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x517 = 406676487U;
	int8_t x520 = -1;

    t118 = (((x517-x518)<=x519)|x520);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x521 = -1128LL;
	int32_t x522 = -30579776;
	int64_t x523 = -683855LL;
	int16_t x524 = INT16_MIN;
	volatile int32_t t119 = 1;

    t119 = (((x521-x522)<=x523)|x524);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x526 = INT8_MIN;
	int32_t x527 = -1;
	int32_t x528 = INT32_MIN;
	volatile int32_t t120 = 292931644;

    t120 = (((x525-x526)<=x527)|x528);

    if (t120 != -2147483647) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MIN;
	static int8_t x531 = -1;
	volatile int64_t x532 = -8061014514LL;
	volatile int64_t t121 = 110853862LL;

    t121 = (((x529-x530)<=x531)|x532);

    if (t121 != -8061014513LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x537 = 2498921715LLU;
	int32_t x538 = -1;
	volatile int32_t t122 = -1280899;

    t122 = (((x537-x538)<=x539)|x540);

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x541 = 1410477U;
	uint16_t x542 = 4583U;
	int32_t x543 = -1;
	uint32_t t123 = 323693U;

    t123 = (((x541-x542)<=x543)|x544);

    if (t123 != 42223U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x547 = -1;
	static volatile int32_t x548 = 13002;
	volatile int32_t t124 = -434167304;

    t124 = (((x545-x546)<=x547)|x548);

    if (t124 != 13003) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x549 = UINT32_MAX;
	volatile int8_t x552 = INT8_MIN;
	int32_t t125 = 538900;

    t125 = (((x549-x550)<=x551)|x552);

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = 1108469198478340LL;
	int16_t x554 = -1;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MIN;
	volatile int64_t t126 = -28491LL;

    t126 = (((x553-x554)<=x555)|x556);

    if (t126 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = UINT16_MAX;
	uint32_t x558 = 571759U;
	int64_t x559 = INT64_MIN;
	int64_t x560 = -936076987386LL;
	int64_t t127 = 117681333861LL;

    t127 = (((x557-x558)<=x559)|x560);

    if (t127 != -936076987386LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x561 = 0U;
	uint8_t x562 = 7U;
	volatile uint32_t t128 = 694U;

    t128 = (((x561-x562)<=x563)|x564);

    if (t128 != 6737884U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x565 = 3U;
	uint64_t x566 = UINT64_MAX;
	uint16_t x568 = 8U;
	volatile int32_t t129 = -2;

    t129 = (((x565-x566)<=x567)|x568);

    if (t129 != 9) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x571 = INT8_MIN;
	static int32_t x572 = INT32_MIN;
	volatile int32_t t130 = INT32_MIN;

    t130 = (((x569-x570)<=x571)|x572);

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x573 = 1;
	uint32_t x574 = 24274313U;
	volatile int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MIN;
	int32_t t131 = 0;

    t131 = (((x573-x574)<=x575)|x576);

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = -1LL;
	volatile int32_t x578 = INT32_MIN;
	int32_t x579 = -544402;
	static volatile int32_t x580 = 305961059;
	int32_t t132 = 240847;

    t132 = (((x577-x578)<=x579)|x580);

    if (t132 != 305961059) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x583 = 255899539;

    t133 = (((x581-x582)<=x583)|x584);

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x585 = -1;
	int16_t x586 = INT16_MIN;
	uint16_t x587 = 5U;
	int8_t x588 = INT8_MIN;
	int32_t t134 = -42973256;

    t134 = (((x585-x586)<=x587)|x588);

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x589 = 1;
	uint8_t x590 = 1U;
	int16_t x591 = -1;
	uint64_t t135 = UINT64_MAX;

    t135 = (((x589-x590)<=x591)|x592);

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x594 = 6441588727475643LLU;
	uint16_t x595 = UINT16_MAX;
	int32_t t136 = 1;

    t136 = (((x593-x594)<=x595)|x596);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint64_t x598 = 930271144559LLU;
	int32_t x599 = -7118;
	int64_t x600 = -225179508201354LL;
	int64_t t137 = -15951364980431LL;

    t137 = (((x597-x598)<=x599)|x600);

    if (t137 != -225179508201353LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile int8_t x602 = 8;
	int16_t x604 = INT16_MAX;
	static int32_t t138 = 112152;

    t138 = (((x601-x602)<=x603)|x604);

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x606 = 1U;
	int16_t x607 = 21;
	static int32_t t139 = -3;

    t139 = (((x605-x606)<=x607)|x608);

    if (t139 != -2147483647) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x609 = UINT32_MAX;
	int64_t x610 = -1LL;
	uint16_t x612 = 26488U;
	int32_t t140 = -2814577;

    t140 = (((x609-x610)<=x611)|x612);

    if (t140 != 26488) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x613 = 18611758U;
	int8_t x614 = -44;
	int8_t x616 = INT8_MIN;
	int32_t t141 = 14;

    t141 = (((x613-x614)<=x615)|x616);

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x617 = 0;
	int32_t x618 = INT32_MAX;
	int64_t x620 = -11LL;
	static int64_t t142 = 4274777417LL;

    t142 = (((x617-x618)<=x619)|x620);

    if (t142 != -11LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x621 = 1544U;
	uint32_t x622 = 1U;
	volatile uint8_t x623 = 2U;
	uint64_t x624 = 137746LLU;
	uint64_t t143 = 1031718261592LLU;

    t143 = (((x621-x622)<=x623)|x624);

    if (t143 != 137746LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x625 = -1;
	int64_t x627 = INT64_MAX;
	volatile int16_t x628 = 3;
	volatile int32_t t144 = -3531;

    t144 = (((x625-x626)<=x627)|x628);

    if (t144 != 3) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x629 = UINT8_MAX;
	int8_t x631 = INT8_MIN;
	int32_t x632 = -1;

    t145 = (((x629-x630)<=x631)|x632);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x635 = -1;
	int32_t x636 = -535103;

    t146 = (((x633-x634)<=x635)|x636);

    if (t146 != -535103) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x637 = -1;
	int32_t x638 = -1;
	volatile uint16_t x639 = 13356U;
	int32_t t147 = -58;

    t147 = (((x637-x638)<=x639)|x640);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x641 = INT32_MAX;
	uint32_t x642 = 230372487U;
	int32_t x643 = 408055362;
	uint8_t x644 = UINT8_MAX;

    t148 = (((x641-x642)<=x643)|x644);

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x646 = INT32_MIN;
	volatile int64_t x647 = INT64_MAX;
	int8_t x648 = INT8_MIN;
	int32_t t149 = -869270;

    t149 = (((x645-x646)<=x647)|x648);

    if (t149 != -127) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x649 = 5U;
	volatile uint64_t x650 = 1759LLU;
	int8_t x651 = -1;
	static uint32_t x652 = 5U;
	volatile uint32_t t150 = 3895U;

    t150 = (((x649-x650)<=x651)|x652);

    if (t150 != 5U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x653 = 5U;
	volatile int32_t x654 = -1;
	uint64_t x655 = 23057928685528LLU;
	uint32_t x656 = 113U;

    t151 = (((x653-x654)<=x655)|x656);

    if (t151 != 113U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x657 = INT16_MIN;
	uint32_t x658 = 1468545U;
	uint32_t x659 = UINT32_MAX;
	uint8_t x660 = 0U;
	static volatile int32_t t152 = 3380971;

    t152 = (((x657-x658)<=x659)|x660);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x669 = 733U;
	uint32_t x671 = 1735U;
	static volatile int32_t t153 = -23608972;

    t153 = (((x669-x670)<=x671)|x672);

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x679 = 0;
	volatile uint8_t x680 = 3U;
	int32_t t154 = -2;

    t154 = (((x677-x678)<=x679)|x680);

    if (t154 != 3) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = INT32_MIN;
	uint32_t x684 = UINT32_MAX;

    t155 = (((x681-x682)<=x683)|x684);

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x685 = 7LL;
	int16_t x686 = -1;
	static volatile int32_t t156 = 39938917;

    t156 = (((x685-x686)<=x687)|x688);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x689 = -1LL;
	static volatile int32_t x692 = -31;
	int32_t t157 = -102;

    t157 = (((x689-x690)<=x691)|x692);

    if (t157 != -31) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x694 = INT8_MIN;
	static int16_t x695 = -116;
	static uint64_t t158 = 41532495836LLU;

    t158 = (((x693-x694)<=x695)|x696);

    if (t158 != 466069LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile int32_t x702 = -906706247;
	uint16_t x704 = UINT16_MAX;
	int32_t t159 = 459;

    t159 = (((x701-x702)<=x703)|x704);

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x709 = 1775U;
	uint32_t x710 = 198210U;
	int16_t x712 = 97;

    t160 = (((x709-x710)<=x711)|x712);

    if (t160 != 97) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x713 = 0U;
	int64_t x714 = -1LL;
	int32_t x715 = INT32_MIN;
	int32_t x716 = INT32_MIN;
	volatile int32_t t161 = INT32_MIN;

    t161 = (((x713-x714)<=x715)|x716);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x719 = 201U;
	volatile int32_t t162 = -105885324;

    t162 = (((x717-x718)<=x719)|x720);

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x722 = -1;
	uint8_t x723 = 39U;
	int16_t x724 = INT16_MIN;

    t163 = (((x721-x722)<=x723)|x724);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x725 = 743;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = -89575075967299641LL;
	uint16_t x728 = 3U;
	volatile int32_t t164 = -13;

    t164 = (((x725-x726)<=x727)|x728);

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x733 = INT16_MIN;
	uint32_t x734 = 34U;
	volatile uint16_t x735 = 4U;
	int8_t x736 = INT8_MAX;
	int32_t t165 = 23718670;

    t165 = (((x733-x734)<=x735)|x736);

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x737 = -1LL;
	uint16_t x738 = 7331U;
	int8_t x740 = INT8_MIN;

    t166 = (((x737-x738)<=x739)|x740);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MAX;
	static int16_t x744 = INT16_MIN;
	static volatile int32_t t167 = -21;

    t167 = (((x741-x742)<=x743)|x744);

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x746 = -1;
	int64_t x747 = 317158477LL;
	int32_t x748 = INT32_MAX;
	int32_t t168 = INT32_MAX;

    t168 = (((x745-x746)<=x747)|x748);

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x751 = -247;
	int32_t x752 = 51;
	int32_t t169 = -351687;

    t169 = (((x749-x750)<=x751)|x752);

    if (t169 != 51) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x755 = INT8_MAX;
	int32_t t170 = 63746580;

    t170 = (((x753-x754)<=x755)|x756);

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x757 = -1;
	int16_t x758 = 160;
	static int16_t x759 = -828;
	int8_t x760 = 1;
	volatile int32_t t171 = 10;

    t171 = (((x757-x758)<=x759)|x760);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x762 = -1LL;
	static int8_t x763 = INT8_MAX;
	int64_t x764 = 441342LL;
	static int64_t t172 = -54448965LL;

    t172 = (((x761-x762)<=x763)|x764);

    if (t172 != 441342LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x765 = 90U;
	uint16_t x766 = 1U;
	int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MIN;
	static int32_t t173 = -56477361;

    t173 = (((x765-x766)<=x767)|x768);

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x769 = 0;
	int32_t x770 = -1;
	static uint8_t x771 = 7U;
	volatile int64_t x772 = 1522543528LL;
	int64_t t174 = 100048LL;

    t174 = (((x769-x770)<=x771)|x772);

    if (t174 != 1522543529LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x773 = INT16_MAX;
	uint8_t x774 = 2U;
	uint8_t x776 = 4U;
	int32_t t175 = 601071375;

    t175 = (((x773-x774)<=x775)|x776);

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = 691640421505LLU;
	uint8_t x782 = 9U;
	int32_t x783 = INT32_MAX;
	static volatile int64_t t176 = INT64_MAX;

    t176 = (((x781-x782)<=x783)|x784);

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x789 = 104288983838LLU;
	int8_t x790 = 5;
	int16_t x791 = -1;
	int32_t t177 = 211146;

    t177 = (((x789-x790)<=x791)|x792);

    if (t177 != -321) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x794 = 0LL;
	int64_t x796 = -1LL;

    t178 = (((x793-x794)<=x795)|x796);

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x797 = -448;
	static int64_t x798 = 506000LL;
	int32_t x800 = -1;
	static int32_t t179 = 724374;

    t179 = (((x797-x798)<=x799)|x800);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x802 = -5432206714034LL;
	uint64_t x803 = 1059654LLU;
	int16_t x804 = -1;
	int32_t t180 = 124303690;

    t180 = (((x801-x802)<=x803)|x804);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x806 = -1;
	static int8_t x807 = INT8_MAX;
	static int16_t x808 = -1;

    t181 = (((x805-x806)<=x807)|x808);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x809 = 235LL;
	uint64_t x810 = 1LLU;
	uint16_t x812 = UINT16_MAX;
	int32_t t182 = 256700;

    t182 = (((x809-x810)<=x811)|x812);

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x813 = -1;
	int32_t x814 = 14360446;
	volatile int64_t x815 = INT64_MAX;
	static uint8_t x816 = 9U;
	static int32_t t183 = -107;

    t183 = (((x813-x814)<=x815)|x816);

    if (t183 != 9) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x817 = -1;
	static volatile int32_t x818 = INT32_MIN;
	volatile int32_t x819 = INT32_MIN;
	uint16_t x820 = 125U;
	volatile int32_t t184 = -881;

    t184 = (((x817-x818)<=x819)|x820);

    if (t184 != 125) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x821 = 76;
	uint64_t x822 = 11391572857309LLU;
	static int16_t x823 = INT16_MIN;
	static uint64_t x824 = UINT64_MAX;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (((x821-x822)<=x823)|x824);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x826 = 12U;
	int32_t x827 = INT32_MIN;
	static int16_t x828 = INT16_MIN;
	volatile int32_t t186 = -165;

    t186 = (((x825-x826)<=x827)|x828);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x830 = -1;
	int32_t x832 = -468095291;
	volatile int32_t t187 = -1642;

    t187 = (((x829-x830)<=x831)|x832);

    if (t187 != -468095291) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x833 = UINT64_MAX;
	uint8_t x834 = 59U;
	static uint64_t t188 = UINT64_MAX;

    t188 = (((x833-x834)<=x835)|x836);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x837 = UINT32_MAX;
	uint16_t x838 = UINT16_MAX;
	static int32_t t189 = -967195;

    t189 = (((x837-x838)<=x839)|x840);

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x842 = -3742;
	volatile int64_t x843 = 36956486LL;
	volatile uint64_t x844 = 2965041093846LLU;
	uint64_t t190 = 16077LLU;

    t190 = (((x841-x842)<=x843)|x844);

    if (t190 != 2965041093847LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x853 = -1;
	static volatile int32_t x855 = INT32_MIN;
	volatile int32_t x856 = INT32_MIN;
	volatile int32_t t191 = 19;

    t191 = (((x853-x854)<=x855)|x856);

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x857 = 44;
	int32_t x858 = -1;
	volatile int8_t x859 = -1;
	static uint8_t x860 = UINT8_MAX;
	int32_t t192 = 914;

    t192 = (((x857-x858)<=x859)|x860);

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x861 = 0;
	int8_t x862 = INT8_MAX;
	static int32_t x864 = INT32_MIN;

    t193 = (((x861-x862)<=x863)|x864);

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x865 = INT16_MAX;
	volatile int64_t x867 = -1LL;
	int16_t x868 = INT16_MAX;
	static int32_t t194 = 0;

    t194 = (((x865-x866)<=x867)|x868);

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x873 = 2524043;
	uint16_t x874 = 60U;
	volatile int8_t x876 = -1;

    t195 = (((x873-x874)<=x875)|x876);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x881 = INT8_MIN;
	int16_t x882 = -1;
	volatile int64_t x883 = INT64_MIN;
	int32_t x884 = INT32_MAX;
	volatile int32_t t196 = INT32_MAX;

    t196 = (((x881-x882)<=x883)|x884);

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x886 = -1;
	int8_t x887 = INT8_MAX;
	volatile uint64_t x888 = UINT64_MAX;
	static volatile uint64_t t197 = UINT64_MAX;

    t197 = (((x885-x886)<=x887)|x888);

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x889 = INT32_MIN;
	static int32_t x890 = INT32_MIN;
	uint16_t x891 = UINT16_MAX;
	int8_t x892 = INT8_MAX;

    t198 = (((x889-x890)<=x891)|x892);

    if (t198 != 127) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x893 = 1732272503749LLU;
	volatile uint32_t x894 = 20643647U;
	uint16_t x896 = 2U;

    t199 = (((x893-x894)<=x895)|x896);

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

