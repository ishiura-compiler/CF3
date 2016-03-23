
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

static int32_t x3 = 1;
uint32_t x4 = UINT32_MAX;
uint8_t x8 = 39U;
volatile int32_t t1 = -10215939;
int32_t x13 = -1;
volatile int32_t x17 = INT32_MIN;
static int16_t x27 = 88;
uint64_t x29 = 6LLU;
int64_t x32 = -1LL;
uint32_t x37 = UINT32_MAX;
int16_t x41 = -226;
static int8_t x47 = INT8_MAX;
uint8_t x49 = 59U;
volatile int32_t t12 = -43;
volatile int8_t x61 = INT8_MIN;
static int16_t x64 = 7;
volatile uint32_t t16 = 1453618295U;
int32_t x82 = -2807;
int64_t x89 = -6LL;
int8_t x92 = INT8_MIN;
volatile uint32_t x105 = UINT32_MAX;
static int32_t x110 = 58509319;
static int32_t x111 = 8051;
int16_t x113 = INT16_MAX;
int64_t x115 = -55301LL;
int8_t x120 = 1;
uint64_t x132 = 3017924LLU;
uint64_t x139 = 83231LLU;
int32_t t32 = 7;
uint64_t x152 = 1365216LLU;
uint8_t x155 = 1U;
static int32_t x156 = -1;
uint64_t x157 = UINT64_MAX;
int64_t t36 = 3806LL;
static int64_t x167 = -551029LL;
uint16_t x168 = UINT16_MAX;
int8_t x169 = INT8_MIN;
int64_t x174 = INT64_MIN;
int64_t x175 = INT64_MIN;
int64_t x179 = INT64_MIN;
int16_t x187 = INT16_MAX;
static uint32_t t43 = 75U;
uint8_t x199 = 7U;
int64_t x209 = -34LL;
int64_t t47 = 35531036728725889LL;
uint16_t x222 = UINT16_MAX;
static uint64_t x238 = UINT64_MAX;
int64_t t54 = -1LL;
int16_t x242 = INT16_MIN;
int8_t x243 = 39;
uint16_t x246 = 2U;
int8_t x247 = INT8_MAX;
int32_t x261 = INT32_MAX;
int8_t x264 = INT8_MAX;
uint32_t x272 = 371195U;
volatile uint32_t t60 = 7U;
int32_t t62 = 2214;
int64_t x282 = INT64_MIN;
volatile int32_t t64 = -1;
volatile int32_t t65 = -45;
uint8_t x296 = 44U;
volatile int32_t t66 = 139894594;
int8_t x299 = INT8_MAX;
int16_t x300 = INT16_MIN;
int8_t x313 = INT8_MAX;
static volatile int8_t x319 = INT8_MIN;
volatile int64_t x320 = -1362898520290955415LL;
volatile int16_t x321 = 4;
int64_t x323 = INT64_MAX;
int32_t x324 = INT32_MAX;
int64_t x325 = -1LL;
static uint8_t x327 = 116U;
int32_t x329 = -1744;
static uint16_t x331 = 86U;
volatile uint64_t t75 = 11LLU;
uint32_t x334 = UINT32_MAX;
static volatile int64_t x335 = INT64_MAX;
int32_t t76 = -973;
volatile int8_t x337 = INT8_MIN;
int64_t t79 = -3139LL;
volatile int16_t x357 = INT16_MIN;
static uint64_t x367 = UINT64_MAX;
static volatile int32_t t83 = -949902;
int8_t x369 = INT8_MAX;
static volatile uint64_t x377 = 65875429102LLU;
volatile int32_t x378 = -1551;
int16_t x379 = INT16_MIN;
volatile int16_t x392 = -1;
volatile int32_t t89 = 394;
static int16_t x396 = 10;
int32_t t90 = 0;
int8_t x397 = -58;
int32_t x399 = -7557487;
static int64_t t91 = -2LL;
static int64_t x404 = 46006LL;
uint64_t x413 = 30622930219286LLU;
volatile int64_t x423 = -1651899780417439LL;
volatile uint64_t t95 = 6963LLU;
int16_t x428 = INT16_MIN;
int32_t t96 = 3;
int8_t x431 = INT8_MIN;
int32_t t97 = 23;
int64_t x435 = INT64_MAX;
int16_t x440 = INT16_MAX;
int16_t x444 = INT16_MIN;
volatile int32_t x450 = INT32_MAX;
volatile int8_t x451 = INT8_MAX;
volatile int64_t x454 = -1LL;
static int8_t x464 = -46;
int64_t x474 = INT64_MIN;
int8_t x478 = INT8_MAX;
volatile int32_t x480 = 71304;
static volatile int64_t x484 = -1LL;
uint64_t x489 = 4LLU;
static int64_t x494 = INT64_MIN;
volatile int64_t x495 = INT64_MAX;
int16_t x500 = INT16_MIN;
uint64_t t112 = 245346LLU;
volatile int32_t t113 = -293186;
int32_t x511 = INT32_MAX;
volatile uint16_t x512 = 3U;
int32_t x519 = INT32_MIN;
int16_t x521 = INT16_MIN;
int16_t x526 = -69;
uint8_t x527 = 2U;
uint32_t t119 = 54691U;
volatile uint64_t x537 = UINT64_MAX;
static uint64_t t120 = 889901362LLU;
static uint8_t x541 = 62U;
int16_t x544 = -6885;
int64_t x545 = -1LL;
volatile uint32_t x559 = 60243619U;
static volatile int16_t x560 = -1;
int64_t x562 = INT64_MIN;
int32_t x568 = INT32_MAX;
uint32_t t127 = 14412362U;
int64_t x570 = 133483234LL;
static int32_t t129 = 21;
uint64_t t131 = 1518979596081961134LLU;
volatile uint32_t t132 = 25428043U;
int32_t t134 = -248553;
int32_t x600 = INT32_MAX;
static int32_t t135 = 3614187;
int64_t x608 = -1LL;
static volatile int64_t t136 = -702935524826LL;
int32_t x611 = 966178668;
static int16_t x612 = -1;
volatile int64_t t139 = -11205107875261813LL;
volatile uint8_t x621 = 56U;
int32_t x622 = INT32_MIN;
volatile int8_t x628 = INT8_MIN;
static int32_t t141 = -98592563;
volatile uint64_t t143 = 1074816649291LLU;
int32_t t146 = -12;
int16_t x655 = -1;
uint16_t x657 = UINT16_MAX;
static volatile uint16_t x659 = UINT16_MAX;
volatile int32_t t149 = -2531;
uint32_t x666 = 1065281755U;
uint32_t x673 = 2130647250U;
int8_t x678 = INT8_MIN;
int64_t x683 = -1LL;
volatile int64_t x697 = INT64_MIN;
uint8_t x698 = 10U;
volatile uint64_t x699 = UINT64_MAX;
int64_t x702 = 9085755170LL;
int32_t x707 = -203;
static int32_t x708 = -1967556;
uint64_t x717 = 44014691LLU;
uint64_t t163 = 0LLU;
uint16_t x725 = UINT16_MAX;
int8_t x728 = -1;
volatile int32_t t165 = -8762267;
static int8_t x731 = INT8_MIN;
int32_t t166 = 220;
volatile int32_t x733 = -442748549;
int8_t x734 = -1;
volatile uint64_t x736 = 238LLU;
static volatile int16_t x737 = INT16_MIN;
uint8_t x739 = UINT8_MAX;
static int32_t x742 = INT32_MAX;
int64_t x745 = INT64_MIN;
uint16_t x753 = 16U;
uint64_t x777 = 12901915865LLU;
static volatile int8_t x778 = -1;
uint8_t x783 = 0U;
static volatile uint8_t x784 = UINT8_MAX;
volatile uint64_t t178 = 92503781349776LLU;
volatile int8_t x791 = INT8_MIN;
volatile uint64_t x794 = 110670084632312LLU;
int64_t x798 = INT64_MAX;
int8_t x800 = INT8_MIN;
volatile uint32_t t182 = 3215751U;
uint64_t x803 = UINT64_MAX;
volatile int32_t x813 = -3;
uint32_t x814 = UINT32_MAX;
static int16_t x832 = INT16_MIN;
int32_t x838 = -1943067;
int32_t t189 = -958958628;
int8_t x844 = INT8_MIN;
int32_t t190 = 12621;
int32_t x852 = 4;
static int32_t t193 = -7;
volatile uint64_t x860 = UINT64_MAX;
uint64_t x861 = 1298775642426806943LLU;
int16_t x863 = 458;
volatile int32_t x868 = INT32_MIN;
volatile int32_t t196 = 2;
int64_t x875 = -56652487115315LL;
static int64_t x876 = 8442096031982828LL;


void f0(void) {
    	uint64_t x1 = 278LLU;
	uint32_t x2 = UINT32_MAX;
	static uint64_t t0 = 162647814LLU;

    t0 = ((x1|(x2!=x3))-x4);

    if (t0 != 18446744069414584600LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = UINT8_MAX;
	static int32_t x6 = INT32_MIN;
	uint8_t x7 = UINT8_MAX;

    t1 = ((x5|(x6!=x7))-x8);

    if (t1 != 216) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = 38;
	static int8_t x15 = 9;
	uint32_t x16 = 6U;
	volatile uint32_t t2 = 3U;

    t2 = ((x13|(x14!=x15))-x16);

    if (t2 != 4294967289U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	volatile uint32_t x20 = 213526223U;
	static volatile uint32_t t3 = 145456U;

    t3 = ((x17|(x18!=x19))-x20);

    if (t3 != 1933957426U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x25 = 295358406767344LLU;
	uint8_t x26 = 45U;
	int16_t x28 = INT16_MIN;
	uint64_t t4 = 30085636990LLU;

    t4 = ((x25|(x26!=x27))-x28);

    if (t4 != 295358406800113LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x30 = INT64_MIN;
	volatile int8_t x31 = INT8_MIN;
	volatile uint64_t t5 = 3LLU;

    t5 = ((x29|(x30!=x31))-x32);

    if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = -1;
	int32_t x34 = 31379;
	int32_t x35 = 1;
	int64_t x36 = -1LL;
	volatile int64_t t6 = -1263774543069LL;

    t6 = ((x33|(x34!=x35))-x36);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x38 = 308;
	static uint16_t x39 = UINT16_MAX;
	volatile uint16_t x40 = 14U;
	uint32_t t7 = 314541458U;

    t7 = ((x37|(x38!=x39))-x40);

    if (t7 != 4294967281U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x42 = -38732;
	int16_t x43 = -1;
	static int8_t x44 = INT8_MIN;
	int32_t t8 = -40150777;

    t8 = ((x41|(x42!=x43))-x44);

    if (t8 != -97) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = -31;
	uint32_t x46 = 361028800U;
	int32_t x48 = 521794;
	int32_t t9 = -112740;

    t9 = ((x45|(x46!=x47))-x48);

    if (t9 != -521825) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = INT32_MIN;
	static volatile int64_t x51 = INT64_MIN;
	uint8_t x52 = 1U;
	volatile int32_t t10 = 0;

    t10 = ((x49|(x50!=x51))-x52);

    if (t10 != 58) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = 2533095LLU;
	int16_t x54 = -1;
	int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	volatile uint64_t t11 = 172399309233020527LLU;

    t11 = ((x53|(x54!=x55))-x56);

    if (t11 != 2565863LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	int8_t x58 = -41;
	static int8_t x59 = INT8_MAX;
	uint8_t x60 = 26U;

    t12 = ((x57|(x58!=x59))-x60);

    if (t12 != 65509) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x62 = -1LL;
	volatile uint16_t x63 = UINT16_MAX;
	int32_t t13 = 31;

    t13 = ((x61|(x62!=x63))-x64);

    if (t13 != -134) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = INT64_MIN;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MIN;
	int8_t x68 = -16;
	volatile int64_t t14 = 1797926466LL;

    t14 = ((x65|(x66!=x67))-x68);

    if (t14 != -9223372036854775791LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = INT64_MAX;
	uint16_t x70 = 10U;
	uint32_t x71 = 13797394U;
	uint64_t x72 = 387229934520662LLU;
	volatile uint64_t t15 = 505LLU;

    t15 = ((x69|(x70!=x71))-x72);

    if (t15 != 9222984806920255145LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = INT8_MIN;
	volatile int32_t x74 = 946540636;
	static int64_t x75 = -126178572487778LL;
	volatile uint32_t x76 = UINT32_MAX;

    t16 = ((x73|(x74!=x75))-x76);

    if (t16 != 4294967170U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = 1009U;
	int8_t x78 = INT8_MAX;
	static int32_t x79 = -5537;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = -110577;

    t17 = ((x77|(x78!=x79))-x80);

    if (t17 != 33777) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x81 = 175;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = 105U;
	uint32_t t18 = 2042U;

    t18 = ((x81|(x82!=x83))-x84);

    if (t18 != 70U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = UINT16_MAX;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	uint64_t x88 = 239995993833845LLU;
	uint64_t t19 = 16235179LLU;

    t19 = ((x85|(x86!=x87))-x88);

    if (t19 != 18446504077715783306LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x90 = INT8_MAX;
	static volatile int8_t x91 = -21;
	int64_t t20 = -29900541630019086LL;

    t20 = ((x89|(x90!=x91))-x92);

    if (t20 != 123LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MAX;
	int64_t x94 = INT64_MIN;
	static int8_t x95 = 0;
	uint8_t x96 = UINT8_MAX;
	int64_t t21 = -11LL;

    t21 = ((x93|(x94!=x95))-x96);

    if (t21 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 1U;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = -1;
	int32_t t22 = -11758;

    t22 = ((x97|(x98!=x99))-x100);

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = INT32_MIN;
	int8_t x107 = -1;
	int32_t x108 = 501;
	volatile uint32_t t23 = 5U;

    t23 = ((x105|(x106!=x107))-x108);

    if (t23 != 4294966794U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = -1;
	static int64_t x112 = INT64_MAX;
	int64_t t24 = INT64_MIN;

    t24 = ((x109|(x110!=x111))-x112);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x114 = UINT16_MAX;
	int8_t x116 = -29;
	int32_t t25 = 670489;

    t25 = ((x113|(x114!=x115))-x116);

    if (t25 != 32796) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = UINT64_MAX;
	uint64_t x118 = 14689684LLU;
	uint16_t x119 = 13661U;
	static uint64_t t26 = 189835130LLU;

    t26 = ((x117|(x118!=x119))-x120);

    if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = 6238008U;
	int16_t x122 = -6318;
	int8_t x123 = INT8_MAX;
	int8_t x124 = -4;
	static uint32_t t27 = 833479275U;

    t27 = ((x121|(x122!=x123))-x124);

    if (t27 != 6238013U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x125 = 365486618U;
	int8_t x126 = -1;
	uint64_t x127 = 2373967LLU;
	uint8_t x128 = UINT8_MAX;
	uint32_t t28 = 5U;

    t28 = ((x125|(x126!=x127))-x128);

    if (t28 != 365486364U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = INT64_MIN;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	uint64_t t29 = 753LLU;

    t29 = ((x129|(x130!=x131))-x132);

    if (t29 != 9223372036851757885LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MIN;
	static uint64_t x134 = 42324445303730LLU;
	volatile int8_t x135 = INT8_MAX;
	int16_t x136 = -1;
	static int64_t t30 = -1LL;

    t30 = ((x133|(x134!=x135))-x136);

    if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x137 = 5LLU;
	int64_t x138 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	uint64_t t31 = 978884460LLU;

    t31 = ((x137|(x138!=x139))-x140);

    if (t31 != 133LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = INT32_MIN;
	volatile int8_t x146 = -3;
	int32_t x147 = -1;
	static int16_t x148 = -13842;

    t32 = ((x145|(x146!=x147))-x148);

    if (t32 != -2147469805) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int8_t x151 = 61;
	uint64_t t33 = 3LLU;

    t33 = ((x149|(x150!=x151))-x152);

    if (t33 != 18446744073708186399LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MIN;
	static volatile int16_t x154 = -2304;
	static int32_t t34 = 2570;

    t34 = ((x153|(x154!=x155))-x156);

    if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x158 = -1;
	int8_t x159 = 1;
	int32_t x160 = 448858295;
	static volatile uint64_t t35 = 406200695469LLU;

    t35 = ((x157|(x158!=x159))-x160);

    if (t35 != 18446744073260693320LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = -3175;
	uint8_t x162 = 1U;
	volatile int8_t x163 = 20;
	static volatile int64_t x164 = INT64_MIN;

    t36 = ((x161|(x162!=x163))-x164);

    if (t36 != 9223372036854772633LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x165 = INT8_MAX;
	uint32_t x166 = 10U;
	static volatile int32_t t37 = 7431048;

    t37 = ((x165|(x166!=x167))-x168);

    if (t37 != -65408) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x170 = 251140553LLU;
	int64_t x171 = INT64_MIN;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t38 = -184;

    t38 = ((x169|(x170!=x171))-x172);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x173 = INT64_MIN;
	int8_t x176 = INT8_MIN;
	int64_t t39 = 51098990LL;

    t39 = ((x173|(x174!=x175))-x176);

    if (t39 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x177 = INT64_MIN;
	static int16_t x178 = -1;
	int8_t x180 = 1;
	volatile int64_t t40 = INT64_MIN;

    t40 = ((x177|(x178!=x179))-x180);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x181 = 228010LLU;
	volatile uint8_t x182 = UINT8_MAX;
	volatile uint32_t x183 = 29673U;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t41 = 2340246022LLU;

    t41 = ((x181|(x182!=x183))-x184);

    if (t41 != 260779LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x185 = 1;
	int64_t x186 = INT64_MAX;
	uint8_t x188 = 56U;
	volatile int32_t t42 = -4020;

    t42 = ((x185|(x186!=x187))-x188);

    if (t42 != -55) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = 0;
	volatile uint16_t x190 = 1U;
	uint32_t x191 = UINT32_MAX;
	uint32_t x192 = 1U;

    t43 = ((x189|(x190!=x191))-x192);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = -2;
	static int64_t x194 = INT64_MIN;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t44 = UINT64_MAX;

    t44 = ((x193|(x194!=x195))-x196);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	int8_t x200 = -1;
	int32_t t45 = 26412420;

    t45 = ((x197|(x198!=x199))-x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = INT32_MIN;
	static int32_t x206 = 161469426;
	volatile int64_t x207 = INT64_MAX;
	int64_t x208 = INT64_MIN;
	int64_t t46 = -8231071517151848LL;

    t46 = ((x205|(x206!=x207))-x208);

    if (t46 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	int32_t x212 = 404636562;

    t47 = ((x209|(x210!=x211))-x212);

    if (t47 != -404636595LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = -1;
	static int32_t x214 = INT32_MIN;
	static uint8_t x215 = 0U;
	static volatile int16_t x216 = INT16_MIN;
	int32_t t48 = -761294276;

    t48 = ((x213|(x214!=x215))-x216);

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x217 = UINT32_MAX;
	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -134034097181118022LL;
	uint32_t x220 = 2122215365U;
	uint32_t t49 = 32540U;

    t49 = ((x217|(x218!=x219))-x220);

    if (t49 != 2172751930U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x221 = UINT32_MAX;
	int32_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;
	volatile uint32_t t50 = 11U;

    t50 = ((x221|(x222!=x223))-x224);

    if (t50 != 4294967040U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x225 = INT8_MIN;
	int32_t x226 = -5;
	volatile int16_t x227 = -1;
	uint32_t x228 = 3276U;
	static uint32_t t51 = 557692416U;

    t51 = ((x225|(x226!=x227))-x228);

    if (t51 != 4294963893U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MAX;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = 1188114337U;
	volatile uint32_t t52 = 36U;

    t52 = ((x229|(x230!=x231))-x232);

    if (t52 != 3106853086U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = 7785LL;
	volatile int8_t x234 = -1;
	int16_t x235 = -1;
	uint16_t x236 = UINT16_MAX;
	static volatile int64_t t53 = -65163442LL;

    t53 = ((x233|(x234!=x235))-x236);

    if (t53 != -57750LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x237 = -1LL;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;

    t54 = ((x237|(x238!=x239))-x240);

    if (t54 != -65536LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x241 = 32274070LLU;
	volatile uint8_t x244 = UINT8_MAX;
	uint64_t t55 = 47406454070LLU;

    t55 = ((x241|(x242!=x243))-x244);

    if (t55 != 32273816LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x245 = INT16_MIN;
	static int8_t x248 = 0;
	volatile int32_t t56 = -110;

    t56 = ((x245|(x246!=x247))-x248);

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = 18;
	int16_t x250 = -1;
	uint16_t x251 = 8444U;
	uint16_t x252 = 0U;
	volatile int32_t t57 = -102;

    t57 = ((x249|(x250!=x251))-x252);

    if (t57 != 19) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = INT16_MIN;
	volatile int64_t x254 = INT64_MIN;
	volatile int8_t x255 = INT8_MAX;
	int64_t x256 = -1LL;
	int64_t t58 = -2177405094259280407LL;

    t58 = ((x253|(x254!=x255))-x256);

    if (t58 != -32766LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x262 = -2;
	volatile uint32_t x263 = 840031865U;
	int32_t t59 = 1;

    t59 = ((x261|(x262!=x263))-x264);

    if (t59 != 2147483520) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = -1;
	int16_t x270 = 395;
	static uint8_t x271 = 0U;

    t60 = ((x269|(x270!=x271))-x272);

    if (t60 != 4294596100U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x273 = INT16_MIN;
	static int32_t x274 = INT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t61 = -188207;

    t61 = ((x273|(x274!=x275))-x276);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x277 = 30U;
	volatile int32_t x278 = INT32_MAX;
	static int32_t x279 = INT32_MIN;
	static int8_t x280 = INT8_MIN;

    t62 = ((x277|(x278!=x279))-x280);

    if (t62 != 159) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = -1;
	int64_t x283 = -1LL;
	volatile uint8_t x284 = 31U;
	volatile int32_t t63 = 515824;

    t63 = ((x281|(x282!=x283))-x284);

    if (t63 != -32) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MIN;
	volatile int32_t x287 = -14436;
	static int8_t x288 = INT8_MIN;

    t64 = ((x285|(x286!=x287))-x288);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x289 = 3;
	int16_t x290 = -171;
	int16_t x291 = -1;
	int32_t x292 = INT32_MAX;

    t65 = ((x289|(x290!=x291))-x292);

    if (t65 != -2147483644) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x293 = INT16_MIN;
	static volatile int16_t x294 = INT16_MIN;
	int8_t x295 = -1;

    t66 = ((x293|(x294!=x295))-x296);

    if (t66 != -32811) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = 47;
	volatile int32_t t67 = -14154;

    t67 = ((x297|(x298!=x299))-x300);

    if (t67 != -2147450879) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x301 = 357LLU;
	uint32_t x302 = 0U;
	int8_t x303 = -1;
	uint8_t x304 = 1U;
	uint64_t t68 = 1LLU;

    t68 = ((x301|(x302!=x303))-x304);

    if (t68 != 356LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = 46;
	uint16_t x306 = 34U;
	static volatile int32_t x307 = INT32_MIN;
	static int64_t x308 = 76972LL;
	static volatile int64_t t69 = -28247LL;

    t69 = ((x305|(x306!=x307))-x308);

    if (t69 != -76925LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x309 = INT32_MAX;
	int64_t x310 = -1660135618021730827LL;
	volatile int32_t x311 = 1957499;
	uint64_t x312 = UINT64_MAX;
	volatile uint64_t t70 = 3775148779985428LLU;

    t70 = ((x309|(x310!=x311))-x312);

    if (t70 != 2147483648LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x314 = INT8_MAX;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = 361U;
	volatile uint32_t t71 = 54U;

    t71 = ((x313|(x314!=x315))-x316);

    if (t71 != 4294967062U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x317 = 2669;
	int16_t x318 = -1;
	volatile int64_t t72 = -79853141LL;

    t72 = ((x317|(x318!=x319))-x320);

    if (t72 != 1362898520290958084LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x322 = INT64_MAX;
	volatile int32_t t73 = 2528;

    t73 = ((x321|(x322!=x323))-x324);

    if (t73 != -2147483643) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x326 = UINT32_MAX;
	static int8_t x328 = INT8_MAX;
	volatile int64_t t74 = -348389272352532LL;

    t74 = ((x325|(x326!=x327))-x328);

    if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x330 = INT64_MAX;
	uint64_t x332 = 0LLU;

    t75 = ((x329|(x330!=x331))-x332);

    if (t75 != 18446744073709549873LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x333 = -1;
	int16_t x336 = -6;

    t76 = ((x333|(x334!=x335))-x336);

    if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x338 = -13;
	static uint8_t x339 = 91U;
	int16_t x340 = INT16_MIN;
	static volatile int32_t t77 = -7564;

    t77 = ((x337|(x338!=x339))-x340);

    if (t77 != 32641) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;
	volatile int64_t t78 = -417068LL;

    t78 = ((x345|(x346!=x347))-x348);

    if (t78 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x349 = 552183;
	uint8_t x350 = 1U;
	int8_t x351 = -28;
	int64_t x352 = -118188437755LL;

    t79 = ((x349|(x350!=x351))-x352);

    if (t79 != 118188989938LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x353 = 3050523U;
	int16_t x354 = -1;
	uint32_t x355 = 13813U;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t80 = 1540587569745808753LLU;

    t80 = ((x353|(x354!=x355))-x356);

    if (t80 != 3050524LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x358 = INT16_MAX;
	static volatile uint16_t x359 = 7U;
	volatile int16_t x360 = -252;
	volatile int32_t t81 = 13;

    t81 = ((x357|(x358!=x359))-x360);

    if (t81 != -32515) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x361 = 15416454LL;
	int32_t x362 = -1;
	int64_t x363 = -2514791025282LL;
	static int16_t x364 = INT16_MIN;
	volatile int64_t t82 = 4056348033467993LL;

    t82 = ((x361|(x362!=x363))-x364);

    if (t82 != 15449223LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x365 = 14215;
	uint64_t x366 = UINT64_MAX;
	int16_t x368 = INT16_MAX;

    t83 = ((x365|(x366!=x367))-x368);

    if (t83 != -18552) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x370 = 119864U;
	int16_t x371 = -13;
	uint64_t x372 = 76729594508007LLU;
	static uint64_t t84 = 802040515534711230LLU;

    t84 = ((x369|(x370!=x371))-x372);

    if (t84 != 18446667344115043736LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x373 = 2053342364U;
	volatile int64_t x374 = INT64_MIN;
	static int64_t x375 = -70LL;
	static int32_t x376 = 3209688;
	static volatile uint32_t t85 = 25U;

    t85 = ((x373|(x374!=x375))-x376);

    if (t85 != 2050132677U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x380 = INT64_MIN;
	volatile uint64_t t86 = 1094389272870837LLU;

    t86 = ((x377|(x378!=x379))-x380);

    if (t86 != 9223372102730204911LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x381 = 2;
	static int16_t x382 = INT16_MIN;
	static uint64_t x383 = 4LLU;
	int8_t x384 = -44;
	volatile int32_t t87 = -228245;

    t87 = ((x381|(x382!=x383))-x384);

    if (t87 != 47) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x385 = 234762U;
	int8_t x386 = INT8_MIN;
	volatile int8_t x387 = 19;
	uint8_t x388 = UINT8_MAX;
	volatile uint32_t t88 = 3U;

    t88 = ((x385|(x386!=x387))-x388);

    if (t88 != 234508U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = -1;
	int32_t x390 = -1413;
	int16_t x391 = 7868;

    t89 = ((x389|(x390!=x391))-x392);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = -13;
	static int64_t x394 = -256294LL;
	static uint8_t x395 = 24U;

    t90 = ((x393|(x394!=x395))-x396);

    if (t90 != -23) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x398 = INT16_MAX;
	static int64_t x400 = -191429302LL;

    t91 = ((x397|(x398!=x399))-x400);

    if (t91 != 191429245LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = 3U;
	volatile int64_t t92 = 523980LL;

    t92 = ((x401|(x402!=x403))-x404);

    if (t92 != -46007LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = -182;
	int64_t x410 = -1LL;
	static int8_t x411 = INT8_MIN;
	int8_t x412 = -1;
	int32_t t93 = 767;

    t93 = ((x409|(x410!=x411))-x412);

    if (t93 != -180) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x414 = INT64_MAX;
	static uint32_t x415 = 63U;
	int8_t x416 = -24;
	volatile uint64_t t94 = 1008278758LLU;

    t94 = ((x413|(x414!=x415))-x416);

    if (t94 != 30622930219311LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x421 = INT32_MIN;
	int8_t x422 = 13;
	static uint64_t x424 = UINT64_MAX;

    t95 = ((x421|(x422!=x423))-x424);

    if (t95 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x425 = 11;
	int8_t x426 = INT8_MIN;
	volatile uint64_t x427 = 781354649LLU;

    t96 = ((x425|(x426!=x427))-x428);

    if (t96 != 32779) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x429 = -38;
	volatile int8_t x430 = -12;
	int16_t x432 = INT16_MAX;

    t97 = ((x429|(x430!=x431))-x432);

    if (t97 != -32804) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x433 = -1;
	int32_t x434 = INT32_MIN;
	static uint16_t x436 = 3U;
	int32_t t98 = -104631;

    t98 = ((x433|(x434!=x435))-x436);

    if (t98 != -4) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x437 = -1LL;
	volatile uint8_t x438 = 17U;
	int32_t x439 = INT32_MAX;
	volatile int64_t t99 = -716557906258LL;

    t99 = ((x437|(x438!=x439))-x440);

    if (t99 != -32768LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x441 = INT16_MAX;
	uint32_t x442 = UINT32_MAX;
	uint32_t x443 = 37U;
	volatile int32_t t100 = -1;

    t100 = ((x441|(x442!=x443))-x444);

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x449 = INT32_MAX;
	int32_t x452 = 34;
	int32_t t101 = -1527;

    t101 = ((x449|(x450!=x451))-x452);

    if (t101 != 2147483613) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x453 = INT16_MIN;
	static volatile int32_t x455 = 1;
	static uint32_t x456 = UINT32_MAX;
	uint32_t t102 = 62U;

    t102 = ((x453|(x454!=x455))-x456);

    if (t102 != 4294934530U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x461 = UINT8_MAX;
	int8_t x462 = INT8_MAX;
	int64_t x463 = 36462LL;
	int32_t t103 = 61;

    t103 = ((x461|(x462!=x463))-x464);

    if (t103 != 301) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x465 = 64U;
	int16_t x466 = 7;
	volatile uint32_t x467 = UINT32_MAX;
	int8_t x468 = 28;
	int32_t t104 = -142;

    t104 = ((x465|(x466!=x467))-x468);

    if (t104 != 37) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = -1;
	int16_t x470 = -1;
	uint32_t x471 = 87835U;
	int16_t x472 = INT16_MIN;
	volatile int32_t t105 = 201498341;

    t105 = ((x469|(x470!=x471))-x472);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x473 = UINT32_MAX;
	static int16_t x475 = INT16_MIN;
	int32_t x476 = -121;
	volatile uint32_t t106 = 6435U;

    t106 = ((x473|(x474!=x475))-x476);

    if (t106 != 120U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x477 = UINT64_MAX;
	int32_t x479 = INT32_MIN;
	static uint64_t t107 = 857952144120165LLU;

    t107 = ((x477|(x478!=x479))-x480);

    if (t107 != 18446744073709480311LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = 2021606U;
	static uint8_t x482 = UINT8_MAX;
	int16_t x483 = 1;
	int64_t t108 = 4142360685778751092LL;

    t108 = ((x481|(x482!=x483))-x484);

    if (t108 != 2021608LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x485 = 57;
	uint8_t x486 = 12U;
	uint64_t x487 = 250943970108LLU;
	int64_t x488 = 1233244371052220LL;
	volatile int64_t t109 = 34220LL;

    t109 = ((x485|(x486!=x487))-x488);

    if (t109 != -1233244371052163LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x490 = INT8_MAX;
	int64_t x491 = INT64_MIN;
	volatile uint8_t x492 = 17U;
	uint64_t t110 = 35LLU;

    t110 = ((x489|(x490!=x491))-x492);

    if (t110 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = 0;
	static uint8_t x496 = UINT8_MAX;
	int32_t t111 = 39;

    t111 = ((x493|(x494!=x495))-x496);

    if (t111 != -254) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x497 = UINT64_MAX;
	volatile uint8_t x498 = UINT8_MAX;
	int16_t x499 = INT16_MIN;

    t112 = ((x497|(x498!=x499))-x500);

    if (t112 != 32767LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x505 = INT8_MIN;
	int64_t x506 = 1LL;
	int64_t x507 = INT64_MAX;
	volatile int16_t x508 = -15152;

    t113 = ((x505|(x506!=x507))-x508);

    if (t113 != 15025) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x509 = 0LL;
	volatile int32_t x510 = INT32_MIN;
	volatile int64_t t114 = -2261555179LL;

    t114 = ((x509|(x510!=x511))-x512);

    if (t114 != -2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x513 = INT8_MIN;
	volatile int16_t x514 = INT16_MIN;
	static int8_t x515 = 0;
	int64_t x516 = -1LL;
	volatile int64_t t115 = -69413575LL;

    t115 = ((x513|(x514!=x515))-x516);

    if (t115 != -126LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = -502065789;
	volatile int16_t x518 = INT16_MIN;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t116 = -21;

    t116 = ((x517|(x518!=x519))-x520);

    if (t116 != -502131324) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x522 = INT64_MIN;
	uint16_t x523 = 0U;
	static volatile uint64_t x524 = 10647LLU;
	static volatile uint64_t t117 = 5LLU;

    t117 = ((x521|(x522!=x523))-x524);

    if (t117 != 18446744073709508202LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x525 = 14333343U;
	uint32_t x528 = 6U;
	volatile uint32_t t118 = 21U;

    t118 = ((x525|(x526!=x527))-x528);

    if (t118 != 14333337U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x533 = 362277U;
	volatile int64_t x534 = -694572474916LL;
	int8_t x535 = -44;
	static uint32_t x536 = 1225609U;

    t119 = ((x533|(x534!=x535))-x536);

    if (t119 != 4294103964U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x538 = 27122U;
	static int8_t x539 = INT8_MIN;
	int32_t x540 = 644;

    t120 = ((x537|(x538!=x539))-x540);

    if (t120 != 18446744073709550971LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x542 = 7U;
	int64_t x543 = -29631533LL;
	volatile int32_t t121 = 0;

    t121 = ((x541|(x542!=x543))-x544);

    if (t121 != 6948) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x546 = 9LLU;
	uint32_t x547 = UINT32_MAX;
	uint16_t x548 = 136U;
	int64_t t122 = 8LL;

    t122 = ((x545|(x546!=x547))-x548);

    if (t122 != -137LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x549 = 1U;
	static int32_t x550 = -1;
	int16_t x551 = -1;
	int32_t x552 = -232781;
	static int32_t t123 = -78;

    t123 = ((x549|(x550!=x551))-x552);

    if (t123 != 232782) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x553 = INT16_MIN;
	volatile int16_t x554 = -9;
	int64_t x555 = INT64_MIN;
	int8_t x556 = 15;
	volatile int32_t t124 = 41686646;

    t124 = ((x553|(x554!=x555))-x556);

    if (t124 != -32782) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x557 = INT8_MIN;
	uint32_t x558 = 63207U;
	static volatile int32_t t125 = -399;

    t125 = ((x557|(x558!=x559))-x560);

    if (t125 != -126) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x561 = -1LL;
	static int16_t x563 = 1;
	uint32_t x564 = UINT32_MAX;
	int64_t t126 = 7765195718481LL;

    t126 = ((x561|(x562!=x563))-x564);

    if (t126 != -4294967296LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x565 = 8159289U;
	volatile int32_t x566 = -1;
	volatile uint16_t x567 = 6820U;

    t127 = ((x565|(x566!=x567))-x568);

    if (t127 != 2155642938U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x569 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	static volatile int16_t x572 = 52;
	int32_t t128 = 125326;

    t128 = ((x569|(x570!=x571))-x572);

    if (t128 != -179) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x573 = -943;
	uint8_t x574 = 107U;
	int32_t x575 = 1575237;
	int32_t x576 = INT32_MIN;

    t129 = ((x573|(x574!=x575))-x576);

    if (t129 != 2147482705) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = -1;
	uint8_t x579 = UINT8_MAX;
	int64_t x580 = 408LL;
	static int64_t t130 = -6185650991744417LL;

    t130 = ((x577|(x578!=x579))-x580);

    if (t130 != -2147484055LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x581 = -1;
	int8_t x582 = INT8_MAX;
	static volatile int32_t x583 = -1;
	volatile uint64_t x584 = 261088649450LLU;

    t131 = ((x581|(x582!=x583))-x584);

    if (t131 != 18446743812620902165LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x585 = 1698426799U;
	int16_t x586 = 3;
	uint16_t x587 = UINT16_MAX;
	uint32_t x588 = 2306U;

    t132 = ((x585|(x586!=x587))-x588);

    if (t132 != 1698424493U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x589 = UINT64_MAX;
	uint32_t x590 = 43U;
	int32_t x591 = 839;
	static int64_t x592 = INT64_MIN;
	volatile uint64_t t133 = 236673444661LLU;

    t133 = ((x589|(x590!=x591))-x592);

    if (t133 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x593 = INT8_MAX;
	int32_t x594 = -35857818;
	volatile int8_t x595 = INT8_MAX;
	static uint8_t x596 = UINT8_MAX;

    t134 = ((x593|(x594!=x595))-x596);

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x597 = INT8_MAX;
	uint64_t x598 = 3993LLU;
	int64_t x599 = INT64_MIN;

    t135 = ((x597|(x598!=x599))-x600);

    if (t135 != -2147483520) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x605 = 21U;
	volatile uint8_t x606 = 17U;
	int32_t x607 = -1;

    t136 = ((x605|(x606!=x607))-x608);

    if (t136 != 22LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x609 = UINT64_MAX;
	static int16_t x610 = INT16_MIN;
	static uint64_t t137 = 54530018533LLU;

    t137 = ((x609|(x610!=x611))-x612);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x613 = 459U;
	int8_t x614 = INT8_MIN;
	uint16_t x615 = 868U;
	uint64_t x616 = UINT64_MAX;
	uint64_t t138 = 36653LLU;

    t138 = ((x613|(x614!=x615))-x616);

    if (t138 != 460LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x617 = -2LL;
	volatile uint32_t x618 = UINT32_MAX;
	int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MIN;

    t139 = ((x617|(x618!=x619))-x620);

    if (t139 != 127LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x623 = 5;
	int16_t x624 = 0;
	volatile int32_t t140 = 3076865;

    t140 = ((x621|(x622!=x623))-x624);

    if (t140 != 57) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x625 = -1;
	int16_t x626 = -1;
	static int16_t x627 = INT16_MIN;

    t141 = ((x625|(x626!=x627))-x628);

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x629 = 120U;
	static volatile int64_t x630 = INT64_MAX;
	int8_t x631 = 1;
	int8_t x632 = INT8_MIN;
	int32_t t142 = -935366521;

    t142 = ((x629|(x630!=x631))-x632);

    if (t142 != 249) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x633 = UINT64_MAX;
	int16_t x634 = 0;
	static int32_t x635 = -1;
	int16_t x636 = -1;

    t143 = ((x633|(x634!=x635))-x636);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x637 = INT8_MIN;
	int32_t x638 = INT32_MAX;
	volatile uint32_t x639 = 23776181U;
	uint64_t x640 = 3210086577LLU;
	uint64_t t144 = 788317449036LLU;

    t144 = ((x637|(x638!=x639))-x640);

    if (t144 != 18446744070499464912LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x642 = INT32_MIN;
	uint64_t x643 = UINT64_MAX;
	uint16_t x644 = 237U;
	volatile int32_t t145 = -3338353;

    t145 = ((x641|(x642!=x643))-x644);

    if (t145 != -33004) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = 1;
	int64_t x646 = INT64_MIN;
	volatile int32_t x647 = -1629;
	uint8_t x648 = UINT8_MAX;

    t146 = ((x645|(x646!=x647))-x648);

    if (t146 != -254) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x649 = INT16_MAX;
	static volatile int32_t x650 = INT32_MAX;
	uint16_t x651 = 56U;
	volatile int64_t x652 = -1LL;
	int64_t t147 = -51319LL;

    t147 = ((x649|(x650!=x651))-x652);

    if (t147 != 32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x653 = INT64_MIN;
	volatile int32_t x654 = INT32_MIN;
	int32_t x656 = -1;
	static int64_t t148 = -323855430LL;

    t148 = ((x653|(x654!=x655))-x656);

    if (t148 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x658 = UINT64_MAX;
	int32_t x660 = 763590275;

    t149 = ((x657|(x658!=x659))-x660);

    if (t149 != -763524740) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x661 = -1LL;
	int8_t x662 = INT8_MIN;
	static int16_t x663 = INT16_MIN;
	uint8_t x664 = 0U;
	volatile int64_t t150 = 71953988690214175LL;

    t150 = ((x661|(x662!=x663))-x664);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x665 = INT32_MIN;
	static int32_t x667 = 674114203;
	static int64_t x668 = INT64_MIN;
	volatile int64_t t151 = 54065161701LL;

    t151 = ((x665|(x666!=x667))-x668);

    if (t151 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x669 = 0U;
	int64_t x670 = INT64_MIN;
	int32_t x671 = INT32_MIN;
	volatile uint32_t x672 = UINT32_MAX;
	uint32_t t152 = 16U;

    t152 = ((x669|(x670!=x671))-x672);

    if (t152 != 2U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x674 = UINT16_MAX;
	uint64_t x675 = UINT64_MAX;
	int32_t x676 = -14928;
	uint32_t t153 = 855160488U;

    t153 = ((x673|(x674!=x675))-x676);

    if (t153 != 2130662179U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = 24246819LLU;
	static int16_t x679 = INT16_MIN;
	int32_t x680 = -1;
	uint64_t t154 = 77143639LLU;

    t154 = ((x677|(x678!=x679))-x680);

    if (t154 != 24246820LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x681 = 11;
	int64_t x682 = INT64_MIN;
	uint32_t x684 = UINT32_MAX;
	uint32_t t155 = 17U;

    t155 = ((x681|(x682!=x683))-x684);

    if (t155 != 12U) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x685 = 10U;
	int64_t x686 = INT64_MAX;
	static volatile int16_t x687 = -1;
	volatile int16_t x688 = INT16_MIN;
	volatile int32_t t156 = 27296;

    t156 = ((x685|(x686!=x687))-x688);

    if (t156 != 32779) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x689 = INT16_MAX;
	volatile uint8_t x690 = 2U;
	int32_t x691 = INT32_MIN;
	volatile uint8_t x692 = 45U;
	int32_t t157 = 12672;

    t157 = ((x689|(x690!=x691))-x692);

    if (t157 != 32722) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x700 = -246931736999LL;
	volatile int64_t t158 = -57845517985543240LL;

    t158 = ((x697|(x698!=x699))-x700);

    if (t158 != -9223371789923038808LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x701 = -54230482528959643LL;
	volatile int16_t x703 = 0;
	uint16_t x704 = UINT16_MAX;
	volatile int64_t t159 = 4523711158316LL;

    t159 = ((x701|(x702!=x703))-x704);

    if (t159 != -54230482529025178LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x705 = -1LL;
	int16_t x706 = INT16_MIN;
	volatile int64_t t160 = -29790423574466621LL;

    t160 = ((x705|(x706!=x707))-x708);

    if (t160 != 1967555LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x709 = -1;
	volatile int32_t x710 = -1;
	uint64_t x711 = 71020LLU;
	volatile uint64_t x712 = UINT64_MAX;
	volatile uint64_t t161 = 1142404124LLU;

    t161 = ((x709|(x710!=x711))-x712);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x713 = INT8_MIN;
	uint16_t x714 = 0U;
	static int8_t x715 = INT8_MIN;
	static uint8_t x716 = 4U;
	int32_t t162 = -105261;

    t162 = ((x713|(x714!=x715))-x716);

    if (t162 != -131) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x718 = 6638047U;
	uint64_t x719 = UINT64_MAX;
	uint64_t x720 = UINT64_MAX;

    t163 = ((x717|(x718!=x719))-x720);

    if (t163 != 44014692LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x721 = 0;
	int8_t x722 = -14;
	static volatile int16_t x723 = 51;
	uint16_t x724 = 7866U;
	volatile int32_t t164 = -1735221;

    t164 = ((x721|(x722!=x723))-x724);

    if (t164 != -7865) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x726 = INT64_MAX;
	uint16_t x727 = UINT16_MAX;

    t165 = ((x725|(x726!=x727))-x728);

    if (t165 != 65536) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x729 = UINT16_MAX;
	int64_t x730 = INT64_MIN;
	uint8_t x732 = 3U;

    t166 = ((x729|(x730!=x731))-x732);

    if (t166 != 65532) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x735 = INT32_MIN;
	volatile uint64_t t167 = 31293006LLU;

    t167 = ((x733|(x734!=x735))-x736);

    if (t167 != 18446744073266802829LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x738 = -1390;
	int16_t x740 = INT16_MIN;
	int32_t t168 = 1748546;

    t168 = ((x737|(x738!=x739))-x740);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = INT8_MIN;
	int8_t x743 = -1;
	uint16_t x744 = UINT16_MAX;
	static int32_t t169 = 1170;

    t169 = ((x741|(x742!=x743))-x744);

    if (t169 != -65662) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x746 = 20U;
	int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;
	int64_t t170 = 1836LL;

    t170 = ((x745|(x746!=x747))-x748);

    if (t170 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x749 = -1LL;
	int16_t x750 = INT16_MIN;
	volatile uint16_t x751 = UINT16_MAX;
	volatile int8_t x752 = -1;
	static int64_t t171 = -232LL;

    t171 = ((x749|(x750!=x751))-x752);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x754 = 2813;
	int64_t x755 = INT64_MIN;
	volatile uint32_t x756 = 769259U;
	static volatile uint32_t t172 = 84U;

    t172 = ((x753|(x754!=x755))-x756);

    if (t172 != 4294198054U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x757 = INT8_MIN;
	volatile uint32_t x758 = 29U;
	int32_t x759 = INT32_MIN;
	uint64_t x760 = UINT64_MAX;
	uint64_t t173 = 794LLU;

    t173 = ((x757|(x758!=x759))-x760);

    if (t173 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x761 = INT64_MAX;
	static int32_t x762 = -1;
	uint16_t x763 = 22098U;
	static uint16_t x764 = 13571U;
	int64_t t174 = -11187LL;

    t174 = ((x761|(x762!=x763))-x764);

    if (t174 != 9223372036854762236LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x769 = 47452U;
	int32_t x770 = 159135;
	volatile int32_t x771 = INT32_MIN;
	static int64_t x772 = 25843558458016LL;
	volatile int64_t t175 = 47221585LL;

    t175 = ((x769|(x770!=x771))-x772);

    if (t175 != -25843558410563LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x773 = 6815445829331763LLU;
	static int64_t x774 = INT64_MIN;
	uint64_t x775 = 3381LLU;
	int64_t x776 = -1LL;
	volatile uint64_t t176 = 11427372234987928LLU;

    t176 = ((x773|(x774!=x775))-x776);

    if (t176 != 6815445829331764LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x779 = 93;
	int64_t x780 = -1657658491048LL;
	uint64_t t177 = 7467938LLU;

    t177 = ((x777|(x778!=x779))-x780);

    if (t177 != 1670560406913LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x781 = 3890474327843188LLU;
	static int8_t x782 = INT8_MIN;

    t178 = ((x781|(x782!=x783))-x784);

    if (t178 != 3890474327842934LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x785 = INT16_MIN;
	uint32_t x786 = 1293181U;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -1;
	int32_t t179 = 356704;

    t179 = ((x785|(x786!=x787))-x788);

    if (t179 != -32766) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x789 = -1;
	uint16_t x790 = 4U;
	uint32_t x792 = UINT32_MAX;
	volatile uint32_t t180 = 137530U;

    t180 = ((x789|(x790!=x791))-x792);

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x793 = INT16_MIN;
	volatile int8_t x795 = INT8_MIN;
	volatile int8_t x796 = -3;
	int32_t t181 = -1;

    t181 = ((x793|(x794!=x795))-x796);

    if (t181 != -32764) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x797 = UINT32_MAX;
	int32_t x799 = INT32_MIN;

    t182 = ((x797|(x798!=x799))-x800);

    if (t182 != 127U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x801 = INT8_MIN;
	int64_t x802 = -1LL;
	int64_t x804 = -1LL;
	int64_t t183 = -18653LL;

    t183 = ((x801|(x802!=x803))-x804);

    if (t183 != -127LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x805 = 3551208383207947LLU;
	uint32_t x806 = UINT32_MAX;
	int16_t x807 = INT16_MIN;
	uint8_t x808 = UINT8_MAX;
	uint64_t t184 = 2282LLU;

    t184 = ((x805|(x806!=x807))-x808);

    if (t184 != 3551208383207692LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x815 = 3;
	uint8_t x816 = UINT8_MAX;
	int32_t t185 = 894528;

    t185 = ((x813|(x814!=x815))-x816);

    if (t185 != -258) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x817 = UINT64_MAX;
	int8_t x818 = INT8_MIN;
	uint8_t x819 = UINT8_MAX;
	int32_t x820 = INT32_MIN;
	uint64_t t186 = 1077610998927495371LLU;

    t186 = ((x817|(x818!=x819))-x820);

    if (t186 != 2147483647LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x830 = -1;
	volatile uint8_t x831 = 1U;
	volatile int32_t t187 = -248221;

    t187 = ((x829|(x830!=x831))-x832);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x833 = 396473LLU;
	uint64_t x834 = 386590LLU;
	uint64_t x835 = 3109359753396634203LLU;
	volatile int64_t x836 = INT64_MIN;
	uint64_t t188 = 372961208LLU;

    t188 = ((x833|(x834!=x835))-x836);

    if (t188 != 9223372036855172281LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x837 = -2918;
	int32_t x839 = -1;
	static int16_t x840 = INT16_MIN;

    t189 = ((x837|(x838!=x839))-x840);

    if (t189 != 29851) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x841 = -1;
	uint64_t x842 = UINT64_MAX;
	uint32_t x843 = 80289U;

    t190 = ((x841|(x842!=x843))-x844);

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x845 = 5585078U;
	int16_t x846 = INT16_MAX;
	static uint32_t x847 = 12884U;
	uint16_t x848 = UINT16_MAX;
	volatile uint32_t t191 = 14U;

    t191 = ((x845|(x846!=x847))-x848);

    if (t191 != 5519544U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x849 = -1;
	uint16_t x850 = 57U;
	int16_t x851 = -3;
	int32_t t192 = -1;

    t192 = ((x849|(x850!=x851))-x852);

    if (t192 != -5) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x853 = 85U;
	int64_t x854 = 790468301892929749LL;
	int8_t x855 = 3;
	int8_t x856 = -4;

    t193 = ((x853|(x854!=x855))-x856);

    if (t193 != 89) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x857 = -1;
	uint8_t x858 = UINT8_MAX;
	static int16_t x859 = INT16_MIN;
	static uint64_t t194 = 27768919360542LLU;

    t194 = ((x857|(x858!=x859))-x860);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x862 = INT32_MIN;
	uint32_t x864 = UINT32_MAX;
	volatile uint64_t t195 = 4081621875562721LLU;

    t195 = ((x861|(x862!=x863))-x864);

    if (t195 != 1298775638131839648LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x865 = INT8_MIN;
	uint16_t x866 = 4637U;
	uint16_t x867 = 1395U;

    t196 = ((x865|(x866!=x867))-x868);

    if (t196 != 2147483521) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x869 = INT16_MIN;
	static uint8_t x870 = UINT8_MAX;
	int32_t x871 = -1;
	static int8_t x872 = 25;
	volatile int32_t t197 = -50808;

    t197 = ((x869|(x870!=x871))-x872);

    if (t197 != -32792) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x873 = -6;
	static uint8_t x874 = 11U;
	volatile int64_t t198 = 757787LL;

    t198 = ((x873|(x874!=x875))-x876);

    if (t198 != -8442096031982833LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x877 = INT8_MAX;
	int16_t x878 = 191;
	uint64_t x879 = 257652750505607LLU;
	static volatile int8_t x880 = -3;
	int32_t t199 = -5259;

    t199 = ((x877|(x878!=x879))-x880);

    if (t199 != 130) { NG(); } else { ; }
	
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

