
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

static volatile uint32_t x2 = 16U;
int32_t x4 = INT32_MIN;
static int16_t x14 = INT16_MIN;
uint16_t x18 = UINT16_MAX;
uint8_t x19 = 3U;
static int64_t x20 = INT64_MAX;
volatile int8_t x21 = -2;
uint32_t x22 = UINT32_MAX;
uint16_t x27 = 10U;
int16_t x29 = INT16_MAX;
static volatile int16_t x32 = INT16_MAX;
int32_t x34 = INT32_MAX;
int64_t x38 = INT64_MAX;
static uint8_t x40 = 11U;
int8_t x44 = INT8_MIN;
volatile uint32_t x45 = 6781U;
static int8_t x46 = INT8_MIN;
int32_t x50 = INT32_MIN;
volatile uint8_t x62 = UINT8_MAX;
uint64_t x63 = 5LLU;
volatile int16_t x71 = -1;
int32_t t18 = -335;
static volatile int8_t x79 = INT8_MAX;
static int8_t x88 = 0;
int8_t x91 = -3;
int32_t x92 = -30550848;
int16_t x94 = -2269;
int32_t x95 = INT32_MIN;
volatile int32_t t23 = 386282219;
int8_t x102 = -14;
static uint8_t x103 = 21U;
volatile uint32_t x106 = 59U;
volatile int8_t x111 = -7;
int32_t t26 = 20061764;
int8_t x113 = 24;
int32_t t27 = -7;
uint64_t x120 = UINT64_MAX;
uint8_t x123 = UINT8_MAX;
static volatile uint16_t x130 = 3U;
static volatile int32_t t31 = 0;
volatile int64_t x133 = INT64_MAX;
int16_t x136 = -1;
int64_t x138 = -2347899236LL;
static int64_t x139 = INT64_MIN;
int32_t t33 = -3774055;
volatile int64_t x141 = INT64_MIN;
static uint8_t x142 = UINT8_MAX;
static uint16_t x148 = 0U;
int64_t x152 = INT64_MIN;
int64_t x155 = -1LL;
int32_t x156 = 18968143;
volatile int16_t x161 = INT16_MAX;
int32_t x166 = -1;
int16_t x167 = -1;
int32_t x171 = INT32_MAX;
int8_t x172 = INT8_MIN;
static int16_t x179 = -1;
uint16_t x193 = UINT16_MAX;
uint64_t x194 = UINT64_MAX;
int32_t x196 = 62;
static uint8_t x198 = 1U;
int8_t x199 = 1;
volatile uint16_t x202 = UINT16_MAX;
uint16_t x204 = 1198U;
uint8_t x206 = 1U;
int64_t x209 = 670093272LL;
int8_t x211 = -1;
int16_t x225 = INT16_MIN;
static int8_t x229 = 14;
static int32_t t56 = -62;
uint64_t x239 = 339344LLU;
uint8_t x242 = UINT8_MAX;
int32_t x247 = INT32_MIN;
int32_t x251 = INT32_MAX;
volatile int32_t x256 = INT32_MAX;
int64_t x258 = 4993416948LL;
volatile int32_t t62 = -227;
static volatile int32_t t63 = 13792464;
volatile uint8_t x266 = 89U;
static volatile uint64_t x274 = UINT64_MAX;
int64_t x279 = 234707918298LL;
static uint8_t x283 = 25U;
volatile int32_t x291 = -44194;
static uint16_t x301 = 2236U;
uint32_t x302 = UINT32_MAX;
volatile int16_t x304 = 35;
volatile int8_t x315 = INT8_MIN;
static int32_t x316 = 107276120;
volatile int32_t t77 = 109;
int8_t x330 = INT8_MIN;
int32_t x331 = INT32_MAX;
volatile int32_t t80 = 2094580;
int8_t x346 = 11;
volatile int64_t x347 = -1LL;
uint64_t x348 = 8386193628696572LLU;
volatile int32_t t84 = -32709546;
uint32_t x352 = UINT32_MAX;
static uint32_t x360 = UINT32_MAX;
uint16_t x362 = 32661U;
uint8_t x378 = UINT8_MAX;
int16_t x383 = -81;
uint64_t x390 = UINT64_MAX;
int64_t x391 = INT64_MIN;
uint64_t x394 = UINT64_MAX;
int64_t x395 = 509749765750343275LL;
volatile int32_t t96 = 107601;
uint32_t x408 = 139U;
static uint16_t x422 = 125U;
int16_t x423 = -2;
uint64_t x433 = 1270334LLU;
volatile int64_t x435 = -1LL;
uint8_t x439 = 5U;
int8_t x446 = INT8_MIN;
int32_t t106 = -59;
uint16_t x450 = 22U;
volatile int32_t x451 = 15;
uint8_t x456 = 2U;
int32_t x467 = INT32_MAX;
int16_t x474 = INT16_MIN;
int16_t x478 = 0;
uint8_t x484 = 0U;
static int32_t t115 = 1;
volatile int16_t x486 = INT16_MAX;
static volatile int32_t t116 = 751;
static uint16_t x494 = UINT16_MAX;
static volatile uint8_t x496 = 84U;
int32_t t118 = -498;
int8_t x502 = 6;
int64_t x504 = INT64_MIN;
int8_t x516 = -2;
uint16_t x517 = 213U;
uint32_t x518 = UINT32_MAX;
int64_t x519 = 18961LL;
uint16_t x522 = 20515U;
static volatile uint32_t x525 = 43991U;
static int64_t x540 = INT64_MAX;
int32_t t128 = 0;
int16_t x541 = INT16_MIN;
static int16_t x544 = 384;
volatile int32_t t134 = -32264;
volatile int64_t x571 = -362964LL;
static int32_t t137 = 9;
volatile uint64_t x597 = UINT64_MAX;
int32_t x609 = -28991649;
static uint64_t x611 = 115325054059LLU;
int8_t x614 = -1;
uint8_t x615 = 1U;
int16_t x622 = INT16_MAX;
int32_t t149 = 803501919;
volatile int16_t x626 = INT16_MAX;
int16_t x628 = INT16_MAX;
int8_t x632 = INT8_MAX;
volatile int32_t t152 = 341;
static int64_t x643 = -1LL;
int8_t x650 = -1;
uint8_t x654 = 9U;
int32_t t159 = 2882;
int16_t x666 = 44;
int32_t t160 = 2375026;
int16_t x669 = -3;
static int64_t x676 = -1LL;
int16_t x682 = INT16_MIN;
int8_t x688 = 20;
int16_t x701 = -1;
int32_t x702 = 97720;
int16_t x708 = INT16_MIN;
int64_t x709 = INT64_MAX;
static int16_t x710 = INT16_MIN;
volatile int64_t x713 = INT64_MIN;
volatile int32_t t172 = 997769252;
volatile int32_t t173 = -11;
int32_t x730 = INT32_MIN;
static int32_t x732 = INT32_MIN;
int32_t x736 = -1;
int8_t x739 = INT8_MIN;
static uint32_t x747 = 4447U;
uint32_t x748 = UINT32_MAX;
static volatile int32_t x752 = INT32_MIN;
volatile int16_t x757 = INT16_MAX;
int32_t x762 = -1;
uint64_t x765 = 6659471969940LLU;
uint64_t x768 = UINT64_MAX;
int8_t x773 = INT8_MIN;
uint64_t x776 = UINT64_MAX;
int32_t x781 = INT32_MIN;
int8_t x782 = INT8_MIN;
int64_t x783 = 440453269113181LL;
volatile int16_t x799 = INT16_MIN;
static uint8_t x802 = 2U;
static int16_t x819 = INT16_MIN;
static int64_t x820 = 17753360552LL;
volatile int32_t t197 = 136403;
int16_t x827 = 10;
int32_t t198 = 566453;
volatile int8_t x829 = INT8_MAX;
static volatile int8_t x831 = INT8_MIN;


void f0(void) {
    	static uint16_t x1 = 51U;
	volatile uint64_t x3 = 101335042812LLU;
	int32_t t0 = 4997;

    t0 = ((x1==(x2%x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 181206642LLU;
	int8_t x6 = INT8_MAX;
	static int64_t x7 = INT64_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	int32_t t1 = -763507185;

    t1 = ((x5==(x6%x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	uint32_t x10 = 25853U;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 2;

    t2 = ((x9==(x10%x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	static int64_t x16 = 118136LL;
	volatile int32_t t3 = -48728;

    t3 = ((x13==(x14%x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 37654U;
	volatile int32_t t4 = -1;

    t4 = ((x17==(x18%x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x23 = INT32_MAX;
	static int32_t x24 = -1;
	volatile int32_t t5 = 502;

    t5 = ((x21==(x22%x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 180027794807LLU;
	static int64_t x26 = INT64_MIN;
	uint8_t x28 = 1U;
	static int32_t t6 = 0;

    t6 = ((x25==(x26%x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 1U;
	static uint8_t x31 = UINT8_MAX;
	static volatile int32_t t7 = -2;

    t7 = ((x29==(x30%x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	volatile uint32_t x35 = UINT32_MAX;
	int8_t x36 = -1;
	volatile int32_t t8 = 382205001;

    t8 = ((x33==(x34%x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int32_t t9 = 1490945;

    t9 = ((x37==(x38%x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 7;
	int16_t x42 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	volatile int32_t t10 = -46505;

    t10 = ((x41==(x42%x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x47 = -1;
	int16_t x48 = 3;
	volatile int32_t t11 = -8;

    t11 = ((x45==(x46%x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -929;
	int32_t x51 = INT32_MIN;
	volatile int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -27278256;

    t12 = ((x49==(x50%x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	static int8_t x54 = INT8_MIN;
	static int16_t x55 = -117;
	static int8_t x56 = INT8_MAX;
	volatile int32_t t13 = -1837397;

    t13 = ((x53==(x54%x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 516;
	int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 169524322;

    t14 = ((x57==(x58%x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MAX;
	static volatile uint8_t x64 = UINT8_MAX;
	int32_t t15 = 691;

    t15 = ((x61==(x62%x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x66 = 37509912U;
	volatile int16_t x67 = INT16_MAX;
	volatile int16_t x68 = INT16_MIN;
	static int32_t t16 = 255273;

    t16 = ((x65==(x66%x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int32_t x70 = INT32_MAX;
	int64_t x72 = 315193875548LL;
	static int32_t t17 = 782548;

    t17 = ((x69==(x70%x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 5U;
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = 363162530LLU;
	uint16_t x76 = 0U;

    t18 = ((x73==(x74%x75))==x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	volatile uint64_t x78 = UINT64_MAX;
	volatile int64_t x80 = INT64_MIN;
	int32_t t19 = 170538744;

    t19 = ((x77==(x78%x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = INT8_MAX;
	int32_t x86 = 790942619;
	static int32_t x87 = INT32_MIN;
	volatile int32_t t20 = -29317913;

    t20 = ((x85==(x86%x87))==x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x89 = 27U;
	static int32_t x90 = 85081226;
	volatile int32_t t21 = 340067753;

    t21 = ((x89==(x90%x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t22 = 431571392;

    t22 = ((x93==(x94%x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = 2U;
	volatile int32_t x98 = INT32_MIN;
	int32_t x99 = 163785669;
	volatile uint8_t x100 = 3U;

    t23 = ((x97==(x98%x99))==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -56;
	int64_t x104 = INT64_MAX;
	int32_t t24 = -6865671;

    t24 = ((x101==(x102%x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x105 = INT8_MAX;
	volatile uint64_t x107 = 15LLU;
	volatile int32_t x108 = INT32_MAX;
	volatile int32_t t25 = -17536;

    t25 = ((x105==(x106%x107))==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 15U;
	int64_t x110 = INT64_MIN;
	int64_t x112 = INT64_MAX;

    t26 = ((x109==(x110%x111))==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x114 = 28U;
	uint64_t x115 = 985538900063LLU;
	static volatile uint64_t x116 = UINT64_MAX;

    t27 = ((x113==(x114%x115))==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x119 = 10;
	int32_t t28 = 7;

    t28 = ((x117==(x118%x119))==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MIN;
	static volatile uint64_t x124 = UINT64_MAX;
	volatile int32_t t29 = 175138;

    t29 = ((x121==(x122%x123))==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = -1;
	static int8_t x126 = INT8_MIN;
	static int64_t x127 = -1LL;
	int32_t x128 = INT32_MAX;
	volatile int32_t t30 = 10;

    t30 = ((x125==(x126%x127))==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = -1;
	int32_t x131 = INT32_MIN;
	int32_t x132 = -5253;

    t31 = ((x129==(x130%x131))==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x134 = INT64_MIN;
	uint32_t x135 = 156U;
	int32_t t32 = 249351;

    t32 = ((x133==(x134%x135))==x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = 1LL;
	int64_t x140 = INT64_MIN;

    t33 = ((x137==(x138%x139))==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x143 = INT8_MIN;
	uint64_t x144 = 2885018290302949429LLU;
	static volatile int32_t t34 = 65;

    t34 = ((x141==(x142%x143))==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = 4163901U;
	static volatile int32_t t35 = -25;

    t35 = ((x145==(x146%x147))==x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 1531U;
	volatile int32_t t36 = -6870;

    t36 = ((x149==(x150%x151))==x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MAX;
	static int32_t t37 = 2968222;

    t37 = ((x153==(x154%x155))==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x162 = 1970U;
	volatile uint16_t x163 = UINT16_MAX;
	int16_t x164 = INT16_MAX;
	int32_t t38 = 1;

    t38 = ((x161==(x162%x163))==x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x165 = -1;
	int32_t x168 = INT32_MIN;
	volatile int32_t t39 = -11918;

    t39 = ((x165==(x166%x167))==x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x169 = 57516684U;
	int16_t x170 = -1;
	int32_t t40 = -1;

    t40 = ((x169==(x170%x171))==x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -1LL;
	static int16_t x174 = INT16_MIN;
	uint64_t x175 = UINT64_MAX;
	uint64_t x176 = 1319278LLU;
	volatile int32_t t41 = 1778;

    t41 = ((x173==(x174%x175))==x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = 6073;
	int64_t x178 = -1LL;
	int64_t x180 = INT64_MIN;
	int32_t t42 = -60865732;

    t42 = ((x177==(x178%x179))==x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x181 = 7U;
	int32_t x182 = -93;
	static int8_t x183 = -6;
	int16_t x184 = -1;
	static volatile int32_t t43 = -45075;

    t43 = ((x181==(x182%x183))==x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x185 = UINT16_MAX;
	static uint16_t x186 = 49U;
	static uint32_t x187 = 8222U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = -870;

    t44 = ((x185==(x186%x187))==x188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = 2611;
	int8_t x190 = -4;
	volatile int32_t x191 = -1894;
	volatile int32_t x192 = -1;
	volatile int32_t t45 = 1906;

    t45 = ((x189==(x190%x191))==x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x195 = INT64_MAX;
	volatile int32_t t46 = 2;

    t46 = ((x193==(x194%x195))==x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	uint64_t x200 = 219703364833780LLU;
	int32_t t47 = 3673;

    t47 = ((x197==(x198%x199))==x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = UINT8_MAX;
	static uint64_t x203 = 1175710354255LLU;
	static int32_t t48 = -156926249;

    t48 = ((x201==(x202%x203))==x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = 24U;
	int32_t x207 = 435386;
	int8_t x208 = 4;
	volatile int32_t t49 = -497;

    t49 = ((x205==(x206%x207))==x208);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x210 = UINT32_MAX;
	static int8_t x212 = -1;
	static int32_t t50 = 1534;

    t50 = ((x209==(x210%x211))==x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x213 = -1LL;
	int32_t x214 = -26893;
	int64_t x215 = INT64_MIN;
	volatile int8_t x216 = 1;
	static volatile int32_t t51 = 910033;

    t51 = ((x213==(x214%x215))==x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 82781456985543182LLU;
	static int16_t x218 = 0;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t52 = 849;

    t52 = ((x217==(x218%x219))==x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x221 = 21730257U;
	uint16_t x222 = 150U;
	volatile int8_t x223 = 1;
	int64_t x224 = 86642885775938902LL;
	volatile int32_t t53 = -4432589;

    t53 = ((x221==(x222%x223))==x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x226 = 1022339U;
	volatile int16_t x227 = INT16_MIN;
	int64_t x228 = -531388714LL;
	volatile int32_t t54 = -6576248;

    t54 = ((x225==(x226%x227))==x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MIN;
	static uint32_t x232 = UINT32_MAX;
	int32_t t55 = 958;

    t55 = ((x229==(x230%x231))==x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x233 = INT64_MAX;
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MAX;
	static volatile int32_t x236 = INT32_MIN;

    t56 = ((x233==(x234%x235))==x236);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = -51;
	int8_t x238 = -1;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -1;

    t57 = ((x237==(x238%x239))==x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = -45;
	static volatile uint32_t x243 = 517324017U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t58 = -2972;

    t58 = ((x241==(x242%x243))==x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = -2287LL;
	int32_t x246 = 364;
	uint16_t x248 = 78U;
	volatile int32_t t59 = 236;

    t59 = ((x245==(x246%x247))==x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = -1;
	volatile int16_t x250 = -6;
	int16_t x252 = -1899;
	volatile int32_t t60 = 372563;

    t60 = ((x249==(x250%x251))==x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x253 = 23569LLU;
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = -34;
	int32_t t61 = -11111;

    t61 = ((x253==(x254%x255))==x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = INT16_MIN;
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;

    t62 = ((x257==(x258%x259))==x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x261 = INT16_MIN;
	int16_t x262 = -295;
	static volatile int64_t x263 = INT64_MIN;
	static volatile int64_t x264 = INT64_MIN;

    t63 = ((x261==(x262%x263))==x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x265 = -1LL;
	int8_t x267 = 36;
	int16_t x268 = -1;
	static int32_t t64 = 16573646;

    t64 = ((x265==(x266%x267))==x268);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x269 = INT32_MIN;
	static volatile int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	volatile int8_t x272 = -5;
	volatile int32_t t65 = -5894;

    t65 = ((x269==(x270%x271))==x272);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	uint8_t x275 = 13U;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t66 = 71;

    t66 = ((x273==(x274%x275))==x276);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MAX;
	static int64_t x278 = 4266850888898245LL;
	uint64_t x280 = 504915802749707866LLU;
	static volatile int32_t t67 = -223;

    t67 = ((x277==(x278%x279))==x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = INT64_MIN;
	uint16_t x282 = 31755U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t68 = 268370819;

    t68 = ((x281==(x282%x283))==x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	static int32_t x286 = INT32_MIN;
	int64_t x287 = INT64_MIN;
	static int8_t x288 = -6;
	static int32_t t69 = 364;

    t69 = ((x285==(x286%x287))==x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x289 = INT64_MIN;
	volatile uint8_t x290 = UINT8_MAX;
	int32_t x292 = -23372;
	volatile int32_t t70 = 3215;

    t70 = ((x289==(x290%x291))==x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 40U;
	static volatile uint16_t x294 = UINT16_MAX;
	volatile int16_t x295 = INT16_MIN;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t71 = -52018;

    t71 = ((x293==(x294%x295))==x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x297 = 1831LLU;
	uint32_t x298 = 14U;
	volatile int64_t x299 = -7LL;
	uint8_t x300 = 31U;
	volatile int32_t t72 = -136;

    t72 = ((x297==(x298%x299))==x300);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x303 = 9;
	int32_t t73 = -9190;

    t73 = ((x301==(x302%x303))==x304);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	static int16_t x307 = -15;
	int16_t x308 = -6861;
	static volatile int32_t t74 = 6933328;

    t74 = ((x305==(x306%x307))==x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x309 = 9U;
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t75 = 183661645;

    t75 = ((x309==(x310%x311))==x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x313 = -244775828LL;
	int16_t x314 = 271;
	int32_t t76 = -68804728;

    t76 = ((x313==(x314%x315))==x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x317 = 3U;
	uint8_t x318 = 24U;
	volatile int64_t x319 = INT64_MAX;
	int16_t x320 = INT16_MAX;

    t77 = ((x317==(x318%x319))==x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 84U;
	uint32_t x322 = UINT32_MAX;
	uint64_t x323 = 18256756244LLU;
	int16_t x324 = 183;
	volatile int32_t t78 = 0;

    t78 = ((x321==(x322%x323))==x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x325 = -1;
	uint32_t x326 = 14247780U;
	uint8_t x327 = 2U;
	int64_t x328 = INT64_MIN;
	int32_t t79 = -1;

    t79 = ((x325==(x326%x327))==x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x329 = -16;
	int64_t x332 = -1LL;

    t80 = ((x329==(x330%x331))==x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = UINT64_MAX;
	int64_t x335 = 770906637672372551LL;
	int16_t x336 = 17;
	volatile int32_t t81 = -1;

    t81 = ((x333==(x334%x335))==x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int8_t x339 = -1;
	volatile int32_t x340 = -931;
	int32_t t82 = -401418402;

    t82 = ((x337==(x338%x339))==x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x341 = -178;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = UINT16_MAX;
	static int8_t x344 = 0;
	int32_t t83 = 332502;

    t83 = ((x341==(x342%x343))==x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = -1;

    t84 = ((x345==(x346%x347))==x348);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = UINT64_MAX;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -17LL;
	int32_t t85 = 18420;

    t85 = ((x349==(x350%x351))==x352);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = 0;
	static int16_t x359 = INT16_MIN;
	volatile int32_t t86 = 470262;

    t86 = ((x357==(x358%x359))==x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x361 = 2;
	static int32_t x363 = INT32_MIN;
	uint64_t x364 = 908243891004168LLU;
	static int32_t t87 = 233014667;

    t87 = ((x361==(x362%x363))==x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MIN;
	volatile int64_t x366 = INT64_MIN;
	uint64_t x367 = 375767939032638LLU;
	uint16_t x368 = 589U;
	int32_t t88 = 4;

    t88 = ((x365==(x366%x367))==x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x373 = 0U;
	volatile int32_t x374 = INT32_MIN;
	static int32_t x375 = INT32_MIN;
	uint64_t x376 = 6243LLU;
	int32_t t89 = -85;

    t89 = ((x373==(x374%x375))==x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x377 = INT32_MIN;
	uint8_t x379 = UINT8_MAX;
	static uint16_t x380 = UINT16_MAX;
	volatile int32_t t90 = 633;

    t90 = ((x377==(x378%x379))==x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x381 = 1;
	volatile uint64_t x382 = 21LLU;
	static int16_t x384 = -1;
	int32_t t91 = 568;

    t91 = ((x381==(x382%x383))==x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x385 = 12438938283397839LLU;
	int8_t x386 = INT8_MAX;
	static volatile uint16_t x387 = 13U;
	uint32_t x388 = UINT32_MAX;
	int32_t t92 = -23;

    t92 = ((x385==(x386%x387))==x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x389 = 71928U;
	uint16_t x392 = UINT16_MAX;
	int32_t t93 = 73292;

    t93 = ((x389==(x390%x391))==x392);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x393 = -1LL;
	static uint32_t x396 = 376U;
	int32_t t94 = -93642;

    t94 = ((x393==(x394%x395))==x396);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x397 = -11;
	uint64_t x398 = 8LLU;
	int16_t x399 = -1;
	int8_t x400 = INT8_MIN;
	static int32_t t95 = -10012;

    t95 = ((x397==(x398%x399))==x400);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x401 = INT64_MAX;
	int64_t x402 = -228770493996LL;
	static uint16_t x403 = UINT16_MAX;
	uint8_t x404 = 42U;

    t96 = ((x401==(x402%x403))==x404);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x405 = -1232876;
	int8_t x406 = INT8_MIN;
	int32_t x407 = 373;
	volatile int32_t t97 = 25589;

    t97 = ((x405==(x406%x407))==x408);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x414 = 1;
	uint8_t x415 = 1U;
	static uint32_t x416 = UINT32_MAX;
	static volatile int32_t t98 = 15864656;

    t98 = ((x413==(x414%x415))==x416);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x417 = 7U;
	int8_t x418 = -1;
	volatile int64_t x419 = 255LL;
	int64_t x420 = -214185575LL;
	static volatile int32_t t99 = 53381;

    t99 = ((x417==(x418%x419))==x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x421 = 64796228U;
	volatile uint64_t x424 = UINT64_MAX;
	static volatile int32_t t100 = -2383317;

    t100 = ((x421==(x422%x423))==x424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x425 = INT64_MIN;
	volatile int64_t x426 = INT64_MIN;
	static volatile int16_t x427 = INT16_MIN;
	uint32_t x428 = UINT32_MAX;
	int32_t t101 = -15118623;

    t101 = ((x425==(x426%x427))==x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x429 = -1;
	int8_t x430 = -1;
	int64_t x431 = -9695LL;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t102 = -54048412;

    t102 = ((x429==(x430%x431))==x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x434 = 1;
	int8_t x436 = INT8_MIN;
	volatile int32_t t103 = -614298;

    t103 = ((x433==(x434%x435))==x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x437 = 55U;
	static uint16_t x438 = UINT16_MAX;
	int64_t x440 = 126960496939874374LL;
	volatile int32_t t104 = 18;

    t104 = ((x437==(x438%x439))==x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = 178297584;
	static int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MIN;
	static volatile int64_t x444 = -37126546077483999LL;
	int32_t t105 = -175257;

    t105 = ((x441==(x442%x443))==x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x445 = 2043371407U;
	volatile int8_t x447 = -1;
	static int16_t x448 = INT16_MAX;

    t106 = ((x445==(x446%x447))==x448);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = -1;
	int64_t x452 = 8950259382LL;
	int32_t t107 = -3434645;

    t107 = ((x449==(x450%x451))==x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x453 = 25448687226LLU;
	int64_t x454 = INT64_MIN;
	int64_t x455 = INT64_MIN;
	static volatile int32_t t108 = -68135;

    t108 = ((x453==(x454%x455))==x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x457 = INT8_MIN;
	volatile uint32_t x458 = 662344725U;
	int16_t x459 = -1;
	static volatile int64_t x460 = -1LL;
	int32_t t109 = 238164;

    t109 = ((x457==(x458%x459))==x460);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x461 = INT32_MAX;
	int64_t x462 = 19138037850425224LL;
	volatile int64_t x463 = INT64_MIN;
	volatile int8_t x464 = -1;
	volatile int32_t t110 = 1;

    t110 = ((x461==(x462%x463))==x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x465 = INT64_MIN;
	static int32_t x466 = 35;
	int8_t x468 = 9;
	volatile int32_t t111 = -4993749;

    t111 = ((x465==(x466%x467))==x468);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = INT64_MIN;
	static int8_t x470 = -3;
	volatile int8_t x471 = -1;
	static uint16_t x472 = 0U;
	volatile int32_t t112 = 871;

    t112 = ((x469==(x470%x471))==x472);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x473 = 2U;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t113 = 656586861;

    t113 = ((x473==(x474%x475))==x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	int16_t x479 = -1;
	volatile int32_t x480 = INT32_MIN;
	volatile int32_t t114 = 146985;

    t114 = ((x477==(x478%x479))==x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = INT64_MIN;
	uint16_t x482 = 3U;
	int64_t x483 = INT64_MIN;

    t115 = ((x481==(x482%x483))==x484);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x485 = INT32_MIN;
	static int16_t x487 = 2;
	volatile int8_t x488 = -1;

    t116 = ((x485==(x486%x487))==x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = -1;
	volatile uint32_t x495 = UINT32_MAX;
	static int32_t t117 = 5749;

    t117 = ((x493==(x494%x495))==x496);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x497 = INT32_MIN;
	volatile uint8_t x498 = 107U;
	static int64_t x499 = -1LL;
	volatile uint32_t x500 = 584U;

    t118 = ((x497==(x498%x499))==x500);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x501 = 5123976U;
	int16_t x503 = INT16_MAX;
	volatile int32_t t119 = 7171;

    t119 = ((x501==(x502%x503))==x504);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x505 = 1U;
	volatile uint8_t x506 = UINT8_MAX;
	uint8_t x507 = 81U;
	uint8_t x508 = 1U;
	volatile int32_t t120 = 46;

    t120 = ((x505==(x506%x507))==x508);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x509 = 1U;
	int16_t x510 = INT16_MIN;
	volatile uint32_t x511 = 4U;
	int32_t x512 = -1;
	int32_t t121 = -182;

    t121 = ((x509==(x510%x511))==x512);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = INT16_MAX;
	int64_t x514 = INT64_MAX;
	static volatile int64_t x515 = 58547528970LL;
	volatile int32_t t122 = 1;

    t122 = ((x513==(x514%x515))==x516);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x520 = 119U;
	volatile int32_t t123 = 2;

    t123 = ((x517==(x518%x519))==x520);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x521 = 361LL;
	int16_t x523 = INT16_MIN;
	int64_t x524 = 140LL;
	int32_t t124 = -95658;

    t124 = ((x521==(x522%x523))==x524);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x526 = 28338U;
	uint32_t x527 = 2080816U;
	uint32_t x528 = 123952U;
	static volatile int32_t t125 = -3310705;

    t125 = ((x525==(x526%x527))==x528);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x529 = INT8_MAX;
	int8_t x530 = 1;
	volatile uint16_t x531 = 3U;
	int64_t x532 = 17968713275394LL;
	int32_t t126 = -911883488;

    t126 = ((x529==(x530%x531))==x532);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x533 = 47U;
	volatile uint64_t x534 = 130857LLU;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 831508588U;
	int32_t t127 = 263282426;

    t127 = ((x533==(x534%x535))==x536);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x537 = INT8_MIN;
	static volatile uint64_t x538 = UINT64_MAX;
	uint8_t x539 = 3U;

    t128 = ((x537==(x538%x539))==x540);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x542 = 1049362204U;
	static int32_t x543 = INT32_MIN;
	int32_t t129 = -4069531;

    t129 = ((x541==(x542%x543))==x544);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = 231;
	int32_t x546 = -6384;
	static int32_t x547 = INT32_MAX;
	uint16_t x548 = UINT16_MAX;
	int32_t t130 = -3504175;

    t130 = ((x545==(x546%x547))==x548);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = INT32_MAX;
	int32_t x550 = -1;
	static uint16_t x551 = 1396U;
	int8_t x552 = -1;
	int32_t t131 = 8030015;

    t131 = ((x549==(x550%x551))==x552);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x553 = UINT32_MAX;
	int64_t x554 = INT64_MAX;
	static int64_t x555 = INT64_MAX;
	static int64_t x556 = INT64_MAX;
	volatile int32_t t132 = -47502911;

    t132 = ((x553==(x554%x555))==x556);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x557 = UINT8_MAX;
	static int16_t x558 = INT16_MIN;
	int64_t x559 = INT64_MIN;
	static volatile uint8_t x560 = 9U;
	int32_t t133 = -256253;

    t133 = ((x557==(x558%x559))==x560);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MAX;
	static int8_t x563 = INT8_MAX;
	static uint16_t x564 = 19387U;

    t134 = ((x561==(x562%x563))==x564);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x565 = -89637212004186LL;
	volatile int16_t x566 = INT16_MIN;
	int64_t x567 = INT64_MIN;
	static volatile int64_t x568 = -1LL;
	volatile int32_t t135 = 1;

    t135 = ((x565==(x566%x567))==x568);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x569 = INT32_MAX;
	static int8_t x570 = INT8_MIN;
	int16_t x572 = 6;
	volatile int32_t t136 = 803;

    t136 = ((x569==(x570%x571))==x572);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x573 = -1;
	volatile int16_t x574 = INT16_MIN;
	volatile int16_t x575 = 29;
	int32_t x576 = -19;

    t137 = ((x573==(x574%x575))==x576);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x577 = INT64_MAX;
	int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MAX;
	uint64_t x580 = 270544LLU;
	int32_t t138 = 152;

    t138 = ((x577==(x578%x579))==x580);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x581 = INT32_MIN;
	static int64_t x582 = INT64_MAX;
	int16_t x583 = INT16_MIN;
	int64_t x584 = -112272529LL;
	static volatile int32_t t139 = -57;

    t139 = ((x581==(x582%x583))==x584);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x585 = 2028762LLU;
	uint8_t x586 = UINT8_MAX;
	uint64_t x587 = 68LLU;
	int32_t x588 = 191;
	int32_t t140 = -1;

    t140 = ((x585==(x586%x587))==x588);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = 13141LL;
	int64_t x590 = -3842LL;
	int64_t x591 = INT64_MIN;
	uint16_t x592 = 3033U;
	int32_t t141 = 44529589;

    t141 = ((x589==(x590%x591))==x592);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = -4064;
	uint32_t x595 = 1866640U;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t142 = -4;

    t142 = ((x593==(x594%x595))==x596);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x598 = INT16_MIN;
	static int8_t x599 = -1;
	volatile uint16_t x600 = 7929U;
	volatile int32_t t143 = -24615;

    t143 = ((x597==(x598%x599))==x600);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x601 = INT8_MIN;
	int32_t x602 = INT32_MIN;
	int8_t x603 = 3;
	volatile uint32_t x604 = 1668U;
	static int32_t t144 = 10491;

    t144 = ((x601==(x602%x603))==x604);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x605 = -107;
	volatile uint8_t x606 = 21U;
	static int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t145 = -191033;

    t145 = ((x605==(x606%x607))==x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x610 = -1;
	uint8_t x612 = 23U;
	volatile int32_t t146 = 298771;

    t146 = ((x609==(x610%x611))==x612);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x613 = -1LL;
	int64_t x616 = INT64_MIN;
	volatile int32_t t147 = 5;

    t147 = ((x613==(x614%x615))==x616);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x617 = 5;
	uint16_t x618 = 1U;
	volatile uint64_t x619 = UINT64_MAX;
	int16_t x620 = 1;
	volatile int32_t t148 = 7694861;

    t148 = ((x617==(x618%x619))==x620);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x621 = 243048LLU;
	uint32_t x623 = 2U;
	int64_t x624 = INT64_MIN;

    t149 = ((x621==(x622%x623))==x624);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x625 = INT64_MIN;
	volatile int32_t x627 = INT32_MIN;
	static volatile int32_t t150 = -1;

    t150 = ((x625==(x626%x627))==x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x629 = INT64_MIN;
	static int32_t x630 = -1;
	static int16_t x631 = INT16_MAX;
	static volatile int32_t t151 = 461834422;

    t151 = ((x629==(x630%x631))==x632);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x633 = INT64_MIN;
	uint8_t x634 = UINT8_MAX;
	volatile uint64_t x635 = 15025LLU;
	volatile int32_t x636 = -189;

    t152 = ((x633==(x634%x635))==x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x637 = UINT32_MAX;
	static int64_t x638 = INT64_MIN;
	volatile int64_t x639 = -1LL;
	int16_t x640 = -125;
	volatile int32_t t153 = 2034359;

    t153 = ((x637==(x638%x639))==x640);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x641 = INT32_MAX;
	int32_t x642 = -1;
	uint8_t x644 = 0U;
	int32_t t154 = -1971;

    t154 = ((x641==(x642%x643))==x644);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int8_t x645 = 57;
	static int32_t x646 = -2632487;
	uint32_t x647 = 42086U;
	int32_t x648 = -15228818;
	volatile int32_t t155 = -6161;

    t155 = ((x645==(x646%x647))==x648);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x651 = INT64_MIN;
	uint16_t x652 = UINT16_MAX;
	static volatile int32_t t156 = 19529153;

    t156 = ((x649==(x650%x651))==x652);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x653 = 944U;
	uint32_t x655 = UINT32_MAX;
	int64_t x656 = INT64_MIN;
	static volatile int32_t t157 = -16342671;

    t157 = ((x653==(x654%x655))==x656);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x657 = INT16_MIN;
	int8_t x658 = 8;
	volatile uint64_t x659 = UINT64_MAX;
	int32_t x660 = INT32_MAX;
	static volatile int32_t t158 = 31768370;

    t158 = ((x657==(x658%x659))==x660);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x661 = INT32_MAX;
	int64_t x662 = 98904964907LL;
	int16_t x663 = INT16_MIN;
	int8_t x664 = INT8_MAX;

    t159 = ((x661==(x662%x663))==x664);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x665 = INT8_MAX;
	volatile uint64_t x667 = 522187975276848462LLU;
	static int64_t x668 = -2347LL;

    t160 = ((x665==(x666%x667))==x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x670 = INT8_MAX;
	int32_t x671 = INT32_MIN;
	int16_t x672 = -1;
	int32_t t161 = 2570;

    t161 = ((x669==(x670%x671))==x672);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x673 = UINT64_MAX;
	int8_t x674 = INT8_MAX;
	int32_t x675 = INT32_MIN;
	int32_t t162 = 4053;

    t162 = ((x673==(x674%x675))==x676);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = -1LL;
	int64_t x678 = INT64_MAX;
	volatile int32_t x679 = INT32_MIN;
	int8_t x680 = INT8_MAX;
	int32_t t163 = 1015;

    t163 = ((x677==(x678%x679))==x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x681 = INT16_MAX;
	static int64_t x683 = INT64_MAX;
	int8_t x684 = INT8_MIN;
	int32_t t164 = 133;

    t164 = ((x681==(x682%x683))==x684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = 59917417557052LLU;
	int8_t x686 = -1;
	int32_t x687 = INT32_MAX;
	static volatile int32_t t165 = -13375540;

    t165 = ((x685==(x686%x687))==x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x689 = UINT8_MAX;
	volatile int32_t x690 = INT32_MAX;
	int64_t x691 = -1LL;
	volatile int64_t x692 = -1LL;
	static int32_t t166 = 13025623;

    t166 = ((x689==(x690%x691))==x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = INT32_MAX;
	int64_t x694 = 15970714LL;
	int16_t x695 = 402;
	volatile uint32_t x696 = UINT32_MAX;
	volatile int32_t t167 = -277839470;

    t167 = ((x693==(x694%x695))==x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = -4873;
	static volatile uint64_t x698 = 2313LLU;
	int64_t x699 = INT64_MAX;
	int8_t x700 = 15;
	int32_t t168 = -56697358;

    t168 = ((x697==(x698%x699))==x700);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x703 = -23;
	int16_t x704 = -46;
	static int32_t t169 = -11797363;

    t169 = ((x701==(x702%x703))==x704);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = 1;
	int32_t x706 = -1;
	int8_t x707 = INT8_MAX;
	int32_t t170 = 463247;

    t170 = ((x705==(x706%x707))==x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x711 = -1;
	int16_t x712 = INT16_MAX;
	volatile int32_t t171 = 6357;

    t171 = ((x709==(x710%x711))==x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x714 = 1;
	volatile int8_t x715 = INT8_MAX;
	int16_t x716 = -246;

    t172 = ((x713==(x714%x715))==x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x717 = INT32_MIN;
	int16_t x718 = -8;
	volatile int32_t x719 = INT32_MAX;
	uint64_t x720 = UINT64_MAX;

    t173 = ((x717==(x718%x719))==x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x725 = 609831671U;
	uint16_t x726 = 1U;
	static uint32_t x727 = 3114U;
	int32_t x728 = -2;
	int32_t t174 = -1477004;

    t174 = ((x725==(x726%x727))==x728);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x729 = INT64_MAX;
	static int32_t x731 = 6026237;
	int32_t t175 = 29;

    t175 = ((x729==(x730%x731))==x732);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int8_t x734 = 55;
	int64_t x735 = INT64_MAX;
	volatile int32_t t176 = -195;

    t176 = ((x733==(x734%x735))==x736);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x737 = -1;
	int16_t x738 = -1;
	int16_t x740 = INT16_MIN;
	static volatile int32_t t177 = -824736091;

    t177 = ((x737==(x738%x739))==x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x741 = 81U;
	int8_t x742 = INT8_MIN;
	int32_t x743 = INT32_MIN;
	int16_t x744 = INT16_MAX;
	volatile int32_t t178 = 2521913;

    t178 = ((x741==(x742%x743))==x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x745 = 1U;
	int64_t x746 = 22537376967LL;
	volatile int32_t t179 = 181;

    t179 = ((x745==(x746%x747))==x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x749 = INT16_MIN;
	int8_t x750 = -53;
	int32_t x751 = INT32_MAX;
	volatile int32_t t180 = 1;

    t180 = ((x749==(x750%x751))==x752);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x753 = -1;
	uint64_t x754 = 1383119720496LLU;
	int64_t x755 = INT64_MIN;
	int16_t x756 = 5885;
	int32_t t181 = -80069318;

    t181 = ((x753==(x754%x755))==x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x758 = UINT32_MAX;
	uint8_t x759 = 11U;
	uint32_t x760 = UINT32_MAX;
	static int32_t t182 = -10706;

    t182 = ((x757==(x758%x759))==x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x761 = 274104335U;
	static int64_t x763 = INT64_MAX;
	static int16_t x764 = -1471;
	volatile int32_t t183 = 689;

    t183 = ((x761==(x762%x763))==x764);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x766 = -1LL;
	static volatile uint8_t x767 = 62U;
	int32_t t184 = 1406;

    t184 = ((x765==(x766%x767))==x768);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x769 = -1;
	static uint32_t x770 = 2816U;
	static int16_t x771 = -6005;
	int32_t x772 = INT32_MIN;
	volatile int32_t t185 = 480;

    t185 = ((x769==(x770%x771))==x772);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x774 = 13;
	uint64_t x775 = 177335507477LLU;
	static int32_t t186 = -6693510;

    t186 = ((x773==(x774%x775))==x776);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x777 = 3909578LLU;
	static uint8_t x778 = 13U;
	static int16_t x779 = INT16_MIN;
	volatile int64_t x780 = 222LL;
	static volatile int32_t t187 = 82023;

    t187 = ((x777==(x778%x779))==x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x784 = UINT8_MAX;
	int32_t t188 = 1275;

    t188 = ((x781==(x782%x783))==x784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x785 = -5367LL;
	uint8_t x786 = 9U;
	uint64_t x787 = 1809479LLU;
	int16_t x788 = 78;
	int32_t t189 = -399700;

    t189 = ((x785==(x786%x787))==x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x789 = 2;
	static int32_t x790 = 1970;
	uint16_t x791 = 3085U;
	static uint32_t x792 = 166950512U;
	int32_t t190 = -230;

    t190 = ((x789==(x790%x791))==x792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x797 = -1LL;
	int8_t x798 = -1;
	uint32_t x800 = UINT32_MAX;
	static int32_t t191 = 12267259;

    t191 = ((x797==(x798%x799))==x800);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x801 = INT8_MAX;
	int64_t x803 = INT64_MIN;
	uint16_t x804 = 3U;
	int32_t t192 = -216897;

    t192 = ((x801==(x802%x803))==x804);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x805 = INT64_MIN;
	static volatile int32_t x806 = INT32_MIN;
	int32_t x807 = INT32_MIN;
	int16_t x808 = -1;
	volatile int32_t t193 = -10159;

    t193 = ((x805==(x806%x807))==x808);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x809 = 2U;
	int64_t x810 = -3047459570241995LL;
	volatile int8_t x811 = -1;
	int8_t x812 = INT8_MIN;
	volatile int32_t t194 = -15500037;

    t194 = ((x809==(x810%x811))==x812);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x813 = -1;
	int16_t x814 = INT16_MAX;
	int8_t x815 = 1;
	static uint32_t x816 = 460205U;
	volatile int32_t t195 = -697828;

    t195 = ((x813==(x814%x815))==x816);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x817 = INT8_MIN;
	uint16_t x818 = 212U;
	static volatile int32_t t196 = 97825;

    t196 = ((x817==(x818%x819))==x820);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x821 = UINT16_MAX;
	int64_t x822 = INT64_MAX;
	int16_t x823 = -1;
	int16_t x824 = INT16_MIN;

    t197 = ((x821==(x822%x823))==x824);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x825 = 31U;
	int64_t x826 = INT64_MIN;
	int32_t x828 = -9;

    t198 = ((x825==(x826%x827))==x828);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x830 = INT32_MAX;
	volatile int64_t x832 = INT64_MIN;
	static volatile int32_t t199 = -367792;

    t199 = ((x829==(x830%x831))==x832);

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

