
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

static volatile int32_t x5 = 10669380;
static int32_t t0 = -1498;
int8_t x11 = 13;
static uint32_t x13 = 13U;
uint16_t x15 = UINT16_MAX;
int32_t x21 = -496;
uint8_t x24 = UINT8_MAX;
volatile uint8_t x26 = UINT8_MAX;
volatile int32_t x33 = 112958225;
int32_t x35 = -1;
int32_t t8 = -4373381;
int8_t x43 = 49;
int32_t x53 = -1560;
static uint8_t x61 = 25U;
static int32_t t13 = -59156029;
int16_t x70 = -152;
int32_t t15 = -445985959;
static volatile int64_t x73 = -1LL;
int8_t x74 = -1;
int64_t x78 = -1LL;
int32_t x79 = 0;
uint8_t x81 = 0U;
int8_t x89 = 2;
uint64_t x91 = UINT64_MAX;
int64_t t26 = -46021LL;
int8_t x125 = 1;
static uint16_t x127 = 4U;
volatile int32_t t29 = 12;
static volatile int32_t t30 = 361;
static volatile int64_t x135 = INT64_MIN;
static volatile int8_t x143 = 1;
static uint16_t x154 = UINT16_MAX;
volatile int16_t x160 = INT16_MIN;
volatile int8_t x165 = -1;
int8_t x166 = -54;
int32_t t40 = -189;
volatile int64_t x173 = -1LL;
volatile uint64_t t44 = 53385LLU;
volatile int64_t x192 = -476924LL;
static int64_t x200 = INT64_MIN;
int16_t x229 = -1;
static volatile uint64_t x231 = 17223687173371937LLU;
static uint64_t x235 = UINT64_MAX;
int8_t x237 = -1;
static int16_t x238 = 107;
volatile uint8_t x248 = 1U;
int32_t x251 = -4;
static uint16_t x260 = 72U;
int64_t x261 = -709673196277LL;
int16_t x262 = INT16_MIN;
static int16_t x268 = INT16_MAX;
volatile uint8_t x273 = 2U;
int32_t t67 = 1640;
static int16_t x296 = -334;
int32_t t69 = 70683;
uint64_t x299 = UINT64_MAX;
volatile int8_t x314 = INT8_MIN;
uint32_t x316 = UINT32_MAX;
int16_t x317 = 4;
int8_t x320 = -1;
int8_t x324 = 4;
uint8_t x329 = 1U;
int8_t x337 = 63;
int64_t t81 = 360791307421LL;
volatile int32_t x354 = -258935;
int8_t x355 = 6;
uint16_t x366 = 1U;
static volatile int32_t x380 = INT32_MIN;
static int8_t x392 = INT8_MIN;
uint16_t x394 = UINT16_MAX;
volatile int32_t x395 = -3391;
int64_t x397 = INT64_MIN;
volatile int8_t x398 = INT8_MAX;
int8_t x407 = 17;
static int32_t x408 = INT32_MAX;
int16_t x410 = -4734;
volatile int32_t x423 = INT32_MAX;
static uint8_t x426 = 1U;
int8_t x452 = INT8_MIN;
volatile int32_t t104 = -3238;
int64_t x458 = INT64_MIN;
int64_t x461 = INT64_MAX;
uint32_t x465 = 1U;
int8_t x466 = INT8_MAX;
volatile int32_t x467 = INT32_MIN;
uint8_t x471 = 8U;
static uint16_t x477 = UINT16_MAX;
uint64_t x480 = 1907632816681LLU;
int64_t x484 = -8335616181244170LL;
volatile int64_t t112 = 63698781046474LL;
volatile int64_t x490 = INT64_MIN;
int32_t t116 = -2414190;
static int32_t x509 = 211463;
volatile int8_t x515 = 0;
uint8_t x521 = 1U;
int32_t x522 = INT32_MAX;
volatile uint64_t t120 = 0LLU;
static volatile int32_t x527 = -15885473;
int32_t t121 = 449;
static volatile uint32_t t122 = 126961U;
volatile int16_t x538 = -4950;
int8_t x542 = INT8_MIN;
volatile uint8_t x552 = UINT8_MAX;
int16_t x563 = INT16_MAX;
int32_t x567 = INT32_MIN;
int8_t x569 = 3;
static int8_t x572 = INT8_MIN;
int8_t x581 = INT8_MAX;
static volatile uint32_t x584 = 6021U;
volatile int32_t x585 = 13676028;
int8_t x590 = 5;
int8_t x597 = INT8_MIN;
int64_t x600 = INT64_MIN;
volatile uint8_t x602 = 25U;
int32_t x605 = 431849700;
int16_t x609 = INT16_MIN;
int32_t x612 = INT32_MIN;
int64_t x613 = -1LL;
uint8_t x616 = UINT8_MAX;
uint32_t x617 = 93289U;
static uint32_t x620 = UINT32_MAX;
int64_t x631 = -1LL;
int32_t x632 = 32028;
int32_t t142 = -3;
int16_t x638 = INT16_MAX;
int64_t x640 = -6620803263110LL;
uint16_t x642 = 1U;
int32_t x647 = INT32_MIN;
uint32_t x653 = 153360970U;
volatile uint64_t x659 = 6911269846002603747LLU;
int32_t t149 = -192615;
static uint64_t x661 = 62909152568LLU;
uint64_t x663 = UINT64_MAX;
int16_t x665 = INT16_MIN;
int32_t x666 = INT32_MAX;
uint8_t x667 = 36U;
int16_t x670 = INT16_MAX;
volatile int64_t t152 = -52921LL;
int32_t x674 = INT32_MAX;
uint32_t x678 = 12902U;
int16_t x693 = INT16_MIN;
uint64_t x698 = UINT64_MAX;
volatile int32_t x700 = INT32_MAX;
int32_t x701 = -1;
uint32_t x703 = UINT32_MAX;
int8_t x713 = 56;
uint16_t x714 = UINT16_MAX;
int16_t x715 = INT16_MIN;
volatile int32_t t161 = -7;
int64_t x724 = INT64_MAX;
int16_t x726 = -1;
int16_t x734 = INT16_MIN;
static int8_t x736 = INT8_MAX;
static volatile uint8_t x737 = UINT8_MAX;
static volatile int32_t t170 = 495662;
int16_t x758 = -1;
volatile int32_t x766 = INT32_MAX;
int32_t x775 = -8311748;
int64_t x781 = -1LL;
volatile int32_t x782 = INT32_MAX;
volatile int16_t x786 = 20;
static volatile int8_t x787 = INT8_MIN;
int8_t x798 = 1;
uint32_t x799 = UINT32_MAX;
uint64_t x803 = 330486004194LLU;
int32_t t181 = 125903;
static volatile int32_t t182 = 13819084;
volatile int32_t x815 = -1;
int64_t x819 = INT64_MAX;
uint64_t x825 = 21LLU;
volatile int8_t x827 = -14;
volatile int32_t t185 = -62903;
uint64_t x829 = 366258LLU;
volatile int16_t x830 = INT16_MIN;
static uint8_t x832 = UINT8_MAX;
volatile uint32_t t187 = 0U;
volatile int64_t t190 = 138916893047757258LL;
volatile uint16_t x853 = 20163U;
uint32_t x857 = 78U;
uint64_t x862 = UINT64_MAX;
static int32_t t193 = 28;
int16_t x868 = INT16_MAX;
volatile int32_t t194 = 73553;
int64_t x871 = INT64_MIN;
volatile int32_t t197 = -53179994;
volatile uint32_t x884 = UINT32_MAX;
static volatile int32_t t199 = 1;


void f0(void) {
    	uint64_t x6 = 116359736693544LLU;
	uint32_t x7 = 228U;
	static volatile int32_t x8 = -38509;

    t0 = (((x5/x6)!=x7)/x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = -1;
	volatile uint32_t x10 = 302321U;
	int64_t x12 = INT64_MIN;
	int64_t t1 = 268258958889951LL;

    t1 = (((x9/x10)!=x11)/x12);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x14 = 2U;
	static int16_t x16 = INT16_MIN;
	static int32_t t2 = -11185;

    t2 = (((x13/x14)!=x15)/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	uint16_t x18 = 124U;
	int32_t x19 = INT32_MAX;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = -117007;

    t3 = (((x17/x18)!=x19)/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile int32_t t4 = 46;

    t4 = (((x21/x22)!=x23)/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -25;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -100079776LL;
	int64_t t5 = 8478110890560120LL;

    t5 = (((x25/x26)!=x27)/x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x29 = 11LLU;
	int8_t x30 = -1;
	volatile int64_t x31 = INT64_MIN;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = 21740;

    t6 = (((x29/x30)!=x31)/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x34 = 1LL;
	uint32_t x36 = UINT32_MAX;
	uint32_t t7 = 165U;

    t7 = (((x33/x34)!=x35)/x36);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = 730215180786LL;
	int32_t x38 = -157;
	int64_t x39 = -1LL;
	static volatile uint8_t x40 = 1U;

    t8 = (((x37/x38)!=x39)/x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = 208U;
	int8_t x42 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -1;

    t9 = (((x41/x42)!=x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;
	volatile int64_t t10 = -16754068LL;

    t10 = (((x49/x50)!=x51)/x52);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x54 = 199;
	volatile int32_t x55 = INT32_MIN;
	uint64_t x56 = 1LLU;
	uint64_t t11 = 36131LLU;

    t11 = (((x53/x54)!=x55)/x56);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint32_t x57 = UINT32_MAX;
	static int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	int32_t x60 = INT32_MAX;
	int32_t t12 = 1921776;

    t12 = (((x57/x58)!=x59)/x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x62 = -1;
	int8_t x63 = -1;
	int32_t x64 = INT32_MAX;

    t13 = (((x61/x62)!=x63)/x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = UINT32_MAX;
	static uint32_t t14 = 891U;

    t14 = (((x65/x66)!=x67)/x68);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x69 = UINT64_MAX;
	volatile uint16_t x71 = 8U;
	static int16_t x72 = 7150;

    t15 = (((x69/x70)!=x71)/x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x75 = 51U;
	int32_t x76 = INT32_MAX;
	volatile int32_t t16 = -11427;

    t16 = (((x73/x74)!=x75)/x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x77 = 876U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t17 = 25;

    t17 = (((x77/x78)!=x79)/x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x82 = -1;
	uint8_t x83 = UINT8_MAX;
	uint8_t x84 = 84U;
	static int32_t t18 = 19;

    t18 = (((x81/x82)!=x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 1;
	int8_t x86 = INT8_MIN;
	static int8_t x87 = INT8_MAX;
	int8_t x88 = -1;
	volatile int32_t t19 = 101943;

    t19 = (((x85/x86)!=x87)/x88);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x90 = 3U;
	int16_t x92 = INT16_MIN;
	static int32_t t20 = 26463;

    t20 = (((x89/x90)!=x91)/x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = INT64_MAX;
	static uint16_t x94 = 10U;
	static volatile uint32_t x95 = 414691U;
	static int16_t x96 = -201;
	volatile int32_t t21 = 2848213;

    t21 = (((x93/x94)!=x95)/x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MIN;
	uint64_t x98 = UINT64_MAX;
	static uint32_t x99 = 78U;
	volatile int16_t x100 = -30;
	int32_t t22 = -64193;

    t22 = (((x97/x98)!=x99)/x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x101 = 274356910875583LL;
	uint8_t x102 = 1U;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t23 = -4301;

    t23 = (((x101/x102)!=x103)/x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x105 = 1U;
	volatile uint8_t x106 = 56U;
	volatile int16_t x107 = -1;
	uint8_t x108 = 24U;
	volatile int32_t t24 = 0;

    t24 = (((x105/x106)!=x107)/x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = -4;
	static int64_t x110 = INT64_MIN;
	uint64_t x111 = 30676450557LLU;
	uint32_t x112 = 95U;
	volatile uint32_t t25 = 13155722U;

    t25 = (((x109/x110)!=x111)/x112);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = UINT8_MAX;
	int32_t x114 = INT32_MIN;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = -8872LL;

    t26 = (((x113/x114)!=x115)/x116);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MAX;
	volatile uint16_t x120 = 137U;
	static volatile int32_t t27 = -3;

    t27 = (((x117/x118)!=x119)/x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x121 = 0U;
	int8_t x122 = INT8_MAX;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 1U;
	volatile int32_t t28 = 7086;

    t28 = (((x121/x122)!=x123)/x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x126 = INT8_MIN;
	static int16_t x128 = -1;

    t29 = (((x125/x126)!=x127)/x128);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x129 = 1;
	uint64_t x130 = UINT64_MAX;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = INT16_MIN;

    t30 = (((x129/x130)!=x131)/x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x133 = INT64_MIN;
	static uint64_t x134 = 36493368885562016LLU;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t31 = -124;

    t31 = (((x133/x134)!=x135)/x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = INT32_MIN;
	static uint8_t x138 = 100U;
	int8_t x139 = -3;
	uint64_t x140 = 6237330LLU;
	uint64_t t32 = 848LLU;

    t32 = (((x137/x138)!=x139)/x140);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	uint8_t x142 = 3U;
	uint16_t x144 = UINT16_MAX;
	int32_t t33 = -39010;

    t33 = (((x141/x142)!=x143)/x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = 398063700415LL;
	uint32_t x146 = 471543650U;
	static int64_t x147 = -1LL;
	uint32_t x148 = 12010412U;
	volatile uint32_t t34 = 9527418U;

    t34 = (((x145/x146)!=x147)/x148);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = 29U;
	static int32_t t35 = 190130;

    t35 = (((x149/x150)!=x151)/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 462845127LLU;
	uint32_t x155 = 37447773U;
	static volatile int64_t x156 = INT64_MIN;
	int64_t t36 = -902718584218255LL;

    t36 = (((x153/x154)!=x155)/x156);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x157 = INT8_MAX;
	uint8_t x158 = 6U;
	static uint32_t x159 = 4208518U;
	static int32_t t37 = -16021926;

    t37 = (((x157/x158)!=x159)/x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = -4700283LL;
	int32_t x162 = INT32_MAX;
	static int32_t x163 = -17;
	int32_t x164 = -1;
	volatile int32_t t38 = 211380;

    t38 = (((x161/x162)!=x163)/x164);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x167 = 80U;
	int32_t x168 = -4862975;
	volatile int32_t t39 = 1;

    t39 = (((x165/x166)!=x167)/x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = -1;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;

    t40 = (((x169/x170)!=x171)/x172);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x174 = 7U;
	volatile int8_t x175 = INT8_MIN;
	int64_t x176 = INT64_MIN;
	int64_t t41 = 733830566LL;

    t41 = (((x173/x174)!=x175)/x176);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = INT8_MAX;
	static uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 3U;
	static int64_t x180 = INT64_MAX;
	static int64_t t42 = -20687LL;

    t42 = (((x177/x178)!=x179)/x180);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x181 = 3;
	uint16_t x182 = 9U;
	static int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t43 = -6;

    t43 = (((x181/x182)!=x183)/x184);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	static uint32_t x187 = 4304U;
	static uint64_t x188 = 2706952LLU;

    t44 = (((x185/x186)!=x187)/x188);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = UINT64_MAX;
	uint8_t x190 = 1U;
	static uint32_t x191 = 6137U;
	volatile int64_t t45 = -714LL;

    t45 = (((x189/x190)!=x191)/x192);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	int8_t x194 = 23;
	static uint64_t x195 = 1626285209700052979LLU;
	int8_t x196 = -1;
	volatile int32_t t46 = -29;

    t46 = (((x193/x194)!=x195)/x196);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	int32_t x198 = INT32_MAX;
	static volatile int8_t x199 = INT8_MIN;
	volatile int64_t t47 = 537165LL;

    t47 = (((x197/x198)!=x199)/x200);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MAX;
	volatile int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t48 = -135202;

    t48 = (((x201/x202)!=x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x205 = UINT8_MAX;
	static int64_t x206 = 2411407LL;
	volatile int32_t x207 = INT32_MIN;
	int32_t x208 = -1;
	int32_t t49 = -13660788;

    t49 = (((x205/x206)!=x207)/x208);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x213 = -328744688217075120LL;
	int32_t x214 = INT32_MIN;
	uint8_t x215 = 22U;
	volatile int64_t x216 = INT64_MIN;
	static int64_t t50 = -31202983204114LL;

    t50 = (((x213/x214)!=x215)/x216);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = 242215471LLU;
	volatile int64_t x219 = -1LL;
	int64_t x220 = INT64_MIN;
	static int64_t t51 = -34379651355994970LL;

    t51 = (((x217/x218)!=x219)/x220);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x221 = 10U;
	uint16_t x222 = 2936U;
	int8_t x223 = -1;
	int8_t x224 = -1;
	int32_t t52 = 643735;

    t52 = (((x221/x222)!=x223)/x224);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	uint64_t x227 = 30494136102925099LLU;
	int32_t x228 = -50;
	volatile int32_t t53 = 37334674;

    t53 = (((x225/x226)!=x227)/x228);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x230 = UINT8_MAX;
	static uint16_t x232 = UINT16_MAX;
	int32_t t54 = 3172364;

    t54 = (((x229/x230)!=x231)/x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x233 = INT32_MAX;
	volatile int32_t x234 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t55 = 1;

    t55 = (((x233/x234)!=x235)/x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t56 = 3134U;

    t56 = (((x237/x238)!=x239)/x240);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x241 = INT8_MIN;
	uint8_t x242 = UINT8_MAX;
	static uint32_t x243 = 72887061U;
	static int32_t x244 = INT32_MIN;
	volatile int32_t t57 = 436;

    t57 = (((x241/x242)!=x243)/x244);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x245 = 79;
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	volatile int32_t t58 = 5;

    t58 = (((x245/x246)!=x247)/x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x249 = 15512368880LL;
	uint64_t x250 = UINT64_MAX;
	volatile int8_t x252 = -9;
	volatile int32_t t59 = 0;

    t59 = (((x249/x250)!=x251)/x252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = 1U;
	uint32_t x254 = 489504040U;
	uint16_t x255 = 7650U;
	int8_t x256 = INT8_MAX;
	int32_t t60 = -4;

    t60 = (((x253/x254)!=x255)/x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x257 = INT64_MAX;
	int16_t x258 = -2;
	volatile int32_t x259 = 1;
	int32_t t61 = 0;

    t61 = (((x257/x258)!=x259)/x260);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = INT32_MAX;
	static int32_t t62 = 35736;

    t62 = (((x261/x262)!=x263)/x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x265 = 23U;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MIN;
	int32_t t63 = -25234792;

    t63 = (((x265/x266)!=x267)/x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x269 = 7;
	uint16_t x270 = 13668U;
	uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1;
	volatile int32_t t64 = -101245;

    t64 = (((x269/x270)!=x271)/x272);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x274 = UINT16_MAX;
	volatile int32_t x275 = INT32_MAX;
	uint64_t x276 = 9464397536590167LLU;
	uint64_t t65 = 106328LLU;

    t65 = (((x273/x274)!=x275)/x276);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	static int32_t x278 = 126463975;
	uint8_t x279 = UINT8_MAX;
	static int8_t x280 = INT8_MIN;
	int32_t t66 = -123998674;

    t66 = (((x277/x278)!=x279)/x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = 3198454U;
	static int8_t x282 = INT8_MAX;
	static int32_t x283 = -316819947;
	static volatile uint16_t x284 = 62U;

    t67 = (((x281/x282)!=x283)/x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x285 = 1LL;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = 0U;
	int32_t x288 = INT32_MIN;
	static int32_t t68 = -8439;

    t68 = (((x285/x286)!=x287)/x288);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x293 = -1LL;
	uint16_t x294 = 14U;
	int8_t x295 = 1;

    t69 = (((x293/x294)!=x295)/x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x297 = UINT8_MAX;
	int32_t x298 = -1;
	int64_t x300 = INT64_MIN;
	volatile int64_t t70 = -17881012059585124LL;

    t70 = (((x297/x298)!=x299)/x300);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x301 = 1809135U;
	int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	static volatile uint16_t x304 = UINT16_MAX;
	volatile int32_t t71 = 6;

    t71 = (((x301/x302)!=x303)/x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x305 = 5U;
	static uint16_t x306 = 160U;
	static uint16_t x307 = 13241U;
	uint32_t x308 = 1153752U;
	uint32_t t72 = 354U;

    t72 = (((x305/x306)!=x307)/x308);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MAX;
	static int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MIN;
	static int8_t x312 = 2;
	volatile int32_t t73 = -20254748;

    t73 = (((x309/x310)!=x311)/x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x313 = INT64_MIN;
	int16_t x315 = 3238;
	uint32_t t74 = 37270U;

    t74 = (((x313/x314)!=x315)/x316);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x318 = INT64_MAX;
	volatile int8_t x319 = INT8_MIN;
	int32_t t75 = -127644;

    t75 = (((x317/x318)!=x319)/x320);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x321 = UINT32_MAX;
	static int64_t x322 = -1LL;
	static volatile uint8_t x323 = 1U;
	int32_t t76 = -900060;

    t76 = (((x321/x322)!=x323)/x324);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x330 = -1;
	int32_t x331 = -310381;
	volatile int16_t x332 = 37;
	static int32_t t77 = 2870664;

    t77 = (((x329/x330)!=x331)/x332);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = -1;
	volatile int16_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	volatile int64_t x336 = 9LL;
	volatile int64_t t78 = 2902727LL;

    t78 = (((x333/x334)!=x335)/x336);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x338 = INT16_MAX;
	int8_t x339 = 1;
	volatile int32_t x340 = INT32_MIN;
	static volatile int32_t t79 = 8;

    t79 = (((x337/x338)!=x339)/x340);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x345 = INT64_MAX;
	int32_t x346 = INT32_MAX;
	static int32_t x347 = 4858;
	int64_t x348 = -1LL;
	static volatile int64_t t80 = 12022875365944LL;

    t80 = (((x345/x346)!=x347)/x348);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x349 = 18356643U;
	int16_t x350 = INT16_MIN;
	uint8_t x351 = 1U;
	static int64_t x352 = INT64_MAX;

    t81 = (((x349/x350)!=x351)/x352);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x353 = -1;
	static uint32_t x356 = UINT32_MAX;
	uint32_t t82 = 185575U;

    t82 = (((x353/x354)!=x355)/x356);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x357 = INT8_MIN;
	static int8_t x358 = -13;
	static uint64_t x359 = 715LLU;
	int16_t x360 = INT16_MIN;
	static int32_t t83 = 14;

    t83 = (((x357/x358)!=x359)/x360);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x365 = 25583U;
	volatile uint64_t x367 = 1778553162390965LLU;
	int64_t x368 = -1LL;
	int64_t t84 = 83415663862944LL;

    t84 = (((x365/x366)!=x367)/x368);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	static uint64_t x370 = 4026466227LLU;
	int32_t x371 = INT32_MIN;
	static uint64_t x372 = 271521638LLU;
	uint64_t t85 = 11679302LLU;

    t85 = (((x369/x370)!=x371)/x372);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = INT32_MIN;
	static uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MAX;
	int8_t x376 = 59;
	int32_t t86 = 2899948;

    t86 = (((x373/x374)!=x375)/x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x377 = 2718769652LLU;
	volatile int16_t x378 = -1;
	int16_t x379 = INT16_MIN;
	static int32_t t87 = 302913278;

    t87 = (((x377/x378)!=x379)/x380);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = -997;
	volatile int32_t x382 = -1;
	volatile int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;
	static int64_t t88 = 631173715LL;

    t88 = (((x381/x382)!=x383)/x384);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	int32_t x387 = 6449;
	static volatile uint64_t x388 = 4025362319148LLU;
	uint64_t t89 = 2659729907789605LLU;

    t89 = (((x385/x386)!=x387)/x388);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = INT32_MIN;
	uint8_t x390 = UINT8_MAX;
	static uint8_t x391 = 4U;
	volatile int32_t t90 = -3;

    t90 = (((x389/x390)!=x391)/x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x393 = INT64_MAX;
	volatile uint64_t x396 = UINT64_MAX;
	volatile uint64_t t91 = 3644103020LLU;

    t91 = (((x393/x394)!=x395)/x396);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x399 = 1083742LLU;
	volatile uint64_t x400 = 247019561293LLU;
	uint64_t t92 = 266970305258324949LLU;

    t92 = (((x397/x398)!=x399)/x400);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x402 = INT64_MIN;
	volatile uint8_t x403 = 1U;
	static uint16_t x404 = 1U;
	int32_t t93 = -5342039;

    t93 = (((x401/x402)!=x403)/x404);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = INT8_MIN;
	int64_t x406 = 28057379913442LL;
	int32_t t94 = -19929757;

    t94 = (((x405/x406)!=x407)/x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x409 = -1;
	int32_t x411 = -19334851;
	int8_t x412 = INT8_MIN;
	int32_t t95 = 52622229;

    t95 = (((x409/x410)!=x411)/x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x413 = INT8_MIN;
	uint16_t x414 = 11U;
	int64_t x415 = INT64_MAX;
	volatile int64_t x416 = -1LL;
	static volatile int64_t t96 = 12LL;

    t96 = (((x413/x414)!=x415)/x416);

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = 7;
	int64_t x418 = INT64_MIN;
	int16_t x419 = -13;
	int8_t x420 = -1;
	volatile int32_t t97 = -58176;

    t97 = (((x417/x418)!=x419)/x420);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x421 = 5U;
	static uint16_t x422 = 6091U;
	uint8_t x424 = 5U;
	int32_t t98 = -30;

    t98 = (((x421/x422)!=x423)/x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x425 = 254;
	int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t99 = 2;

    t99 = (((x425/x426)!=x427)/x428);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = 8;
	volatile int64_t x430 = -4164278898302453LL;
	static int32_t x431 = -1;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t100 = 1455U;

    t100 = (((x429/x430)!=x431)/x432);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MAX;
	static int32_t x439 = INT32_MIN;
	static volatile int8_t x440 = 56;
	int32_t t101 = -934;

    t101 = (((x437/x438)!=x439)/x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = 2533382LLU;
	uint16_t x442 = 14921U;
	int16_t x443 = INT16_MIN;
	uint16_t x444 = 683U;
	int32_t t102 = 3;

    t102 = (((x441/x442)!=x443)/x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x445 = -6411060590LL;
	uint64_t x446 = UINT64_MAX;
	uint8_t x447 = 49U;
	uint64_t x448 = 3860751LLU;
	volatile uint64_t t103 = 213387491298366337LLU;

    t103 = (((x445/x446)!=x447)/x448);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x449 = INT8_MAX;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = 22U;

    t104 = (((x449/x450)!=x451)/x452);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x453 = UINT32_MAX;
	int16_t x454 = INT16_MIN;
	uint32_t x455 = 27U;
	int64_t x456 = INT64_MIN;
	volatile int64_t t105 = 3690246414676706630LL;

    t105 = (((x453/x454)!=x455)/x456);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x457 = 1;
	uint8_t x459 = 9U;
	int32_t x460 = -12328675;
	volatile int32_t t106 = 94436;

    t106 = (((x457/x458)!=x459)/x460);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x462 = INT16_MIN;
	int8_t x463 = -15;
	static int64_t x464 = INT64_MIN;
	int64_t t107 = -75466841809316LL;

    t107 = (((x461/x462)!=x463)/x464);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x468 = INT64_MIN;
	static volatile int64_t t108 = -6169581086533LL;

    t108 = (((x465/x466)!=x467)/x468);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = INT64_MIN;
	static int8_t x470 = INT8_MAX;
	static int16_t x472 = -1;
	volatile int32_t t109 = -13;

    t109 = (((x469/x470)!=x471)/x472);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = -1LL;
	static int16_t x474 = -1;
	uint16_t x475 = 136U;
	int64_t x476 = -2766266LL;
	volatile int64_t t110 = -113988LL;

    t110 = (((x473/x474)!=x475)/x476);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x478 = 8806948700LLU;
	volatile int8_t x479 = 4;
	uint64_t t111 = 1263462088962707LLU;

    t111 = (((x477/x478)!=x479)/x480);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x481 = 43550476767761505LLU;
	int16_t x482 = INT16_MAX;
	int64_t x483 = -54165168841648017LL;

    t112 = (((x481/x482)!=x483)/x484);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x485 = UINT32_MAX;
	int64_t x486 = INT64_MAX;
	static uint8_t x487 = UINT8_MAX;
	static int32_t x488 = INT32_MIN;
	int32_t t113 = -1;

    t113 = (((x485/x486)!=x487)/x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x489 = 279688101874986LLU;
	static uint8_t x491 = UINT8_MAX;
	volatile int8_t x492 = INT8_MIN;
	int32_t t114 = -92;

    t114 = (((x489/x490)!=x491)/x492);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = -2;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = -898445LL;
	int16_t x504 = 3666;
	volatile int32_t t115 = -7;

    t115 = (((x501/x502)!=x503)/x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x505 = INT64_MIN;
	uint16_t x506 = 346U;
	volatile int16_t x507 = 316;
	uint16_t x508 = UINT16_MAX;

    t116 = (((x505/x506)!=x507)/x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x510 = INT64_MIN;
	static int32_t x511 = -1;
	volatile uint16_t x512 = 7U;
	volatile int32_t t117 = -1;

    t117 = (((x509/x510)!=x511)/x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x513 = INT32_MIN;
	uint64_t x514 = 1668214973LLU;
	volatile int8_t x516 = -1;
	volatile int32_t t118 = -134829;

    t118 = (((x513/x514)!=x515)/x516);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x517 = 1U;
	int8_t x518 = INT8_MAX;
	int16_t x519 = 78;
	volatile int32_t x520 = 121;
	static volatile int32_t t119 = 318059;

    t119 = (((x517/x518)!=x519)/x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x523 = INT16_MIN;
	volatile uint64_t x524 = 27562246LLU;

    t120 = (((x521/x522)!=x523)/x524);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x525 = 0;
	volatile int8_t x526 = INT8_MIN;
	int32_t x528 = -1;

    t121 = (((x525/x526)!=x527)/x528);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x533 = -1;
	volatile int16_t x534 = INT16_MAX;
	uint8_t x535 = UINT8_MAX;
	volatile uint32_t x536 = 202304483U;

    t122 = (((x533/x534)!=x535)/x536);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x537 = -1;
	int8_t x539 = 6;
	int16_t x540 = -59;
	volatile int32_t t123 = 956538774;

    t123 = (((x537/x538)!=x539)/x540);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x541 = 129361877LL;
	int32_t x543 = 2576471;
	int32_t x544 = INT32_MIN;
	int32_t t124 = 51272;

    t124 = (((x541/x542)!=x543)/x544);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MIN;
	int64_t x550 = INT64_MIN;
	static int16_t x551 = 0;
	volatile int32_t t125 = 5111504;

    t125 = (((x549/x550)!=x551)/x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x557 = 11;
	uint32_t x558 = 8704780U;
	volatile int16_t x559 = 30;
	uint32_t x560 = UINT32_MAX;
	volatile uint32_t t126 = 5499338U;

    t126 = (((x557/x558)!=x559)/x560);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x561 = INT16_MIN;
	volatile int16_t x562 = INT16_MAX;
	static uint64_t x564 = 501991029855LLU;
	static volatile uint64_t t127 = 2181847265LLU;

    t127 = (((x561/x562)!=x563)/x564);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x565 = 445226U;
	uint16_t x566 = 782U;
	int16_t x568 = 345;
	int32_t t128 = -1284;

    t128 = (((x565/x566)!=x567)/x568);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x570 = INT8_MAX;
	volatile int32_t x571 = 325895985;
	int32_t t129 = -4894;

    t129 = (((x569/x570)!=x571)/x572);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x577 = INT16_MAX;
	int32_t x578 = 1974560;
	static uint32_t x579 = 10U;
	uint32_t x580 = 120U;
	static volatile uint32_t t130 = 55U;

    t130 = (((x577/x578)!=x579)/x580);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x582 = 527U;
	static volatile int64_t x583 = INT64_MIN;
	uint32_t t131 = 23U;

    t131 = (((x581/x582)!=x583)/x584);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x586 = INT8_MIN;
	volatile uint16_t x587 = 308U;
	int32_t x588 = 30031533;
	int32_t t132 = -167883;

    t132 = (((x585/x586)!=x587)/x588);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x589 = 2U;
	uint8_t x591 = 126U;
	volatile uint64_t x592 = 1LLU;
	volatile uint64_t t133 = 2LLU;

    t133 = (((x589/x590)!=x591)/x592);

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x593 = UINT8_MAX;
	int32_t x594 = INT32_MIN;
	uint8_t x595 = 63U;
	static uint32_t x596 = UINT32_MAX;
	uint32_t t134 = 6994300U;

    t134 = (((x593/x594)!=x595)/x596);

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x598 = -1;
	int16_t x599 = -1;
	static volatile int64_t t135 = -22732LL;

    t135 = (((x597/x598)!=x599)/x600);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x601 = -5;
	int64_t x603 = INT64_MIN;
	volatile int16_t x604 = INT16_MIN;
	int32_t t136 = -215432;

    t136 = (((x601/x602)!=x603)/x604);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x606 = 31;
	uint8_t x607 = 53U;
	int64_t x608 = -33617LL;
	int64_t t137 = 2070831LL;

    t137 = (((x605/x606)!=x607)/x608);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x610 = INT8_MIN;
	volatile int32_t x611 = -494;
	int32_t t138 = -827169;

    t138 = (((x609/x610)!=x611)/x612);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x614 = INT16_MAX;
	static int16_t x615 = 10;
	volatile int32_t t139 = 9;

    t139 = (((x613/x614)!=x615)/x616);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x618 = 10496843U;
	volatile int64_t x619 = 20081256538459LL;
	volatile uint32_t t140 = 1644U;

    t140 = (((x617/x618)!=x619)/x620);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x625 = 1300764562U;
	int8_t x626 = -1;
	static uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MIN;
	volatile int32_t t141 = -3;

    t141 = (((x625/x626)!=x627)/x628);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x629 = 3;
	static int32_t x630 = INT32_MIN;

    t142 = (((x629/x630)!=x631)/x632);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = -1;
	uint8_t x634 = 3U;
	int8_t x635 = INT8_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t143 = -8050LL;

    t143 = (((x633/x634)!=x635)/x636);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x637 = -6180249LL;
	int64_t x639 = -113554673227393470LL;
	volatile int64_t t144 = 1064325739998823LL;

    t144 = (((x637/x638)!=x639)/x640);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x641 = 4U;
	static volatile int32_t x643 = INT32_MIN;
	static int16_t x644 = -1;
	volatile int32_t t145 = 5947;

    t145 = (((x641/x642)!=x643)/x644);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x645 = -59927840;
	uint32_t x646 = 23047172U;
	int32_t x648 = INT32_MAX;
	volatile int32_t t146 = -32475;

    t146 = (((x645/x646)!=x647)/x648);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x649 = INT32_MIN;
	int8_t x650 = 37;
	static int8_t x651 = -15;
	int64_t x652 = INT64_MAX;
	volatile int64_t t147 = -3763503325072LL;

    t147 = (((x649/x650)!=x651)/x652);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x654 = INT32_MAX;
	int16_t x655 = INT16_MAX;
	uint64_t x656 = 23703836LLU;
	volatile uint64_t t148 = 2LLU;

    t148 = (((x653/x654)!=x655)/x656);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x657 = 1743427U;
	volatile int16_t x658 = -1;
	volatile int32_t x660 = INT32_MIN;

    t149 = (((x657/x658)!=x659)/x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x662 = INT64_MAX;
	uint64_t x664 = 30674LLU;
	volatile uint64_t t150 = 79397799853LLU;

    t150 = (((x661/x662)!=x663)/x664);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x668 = INT16_MIN;
	volatile int32_t t151 = -92;

    t151 = (((x665/x666)!=x667)/x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x669 = UINT32_MAX;
	uint32_t x671 = 422023317U;
	static int64_t x672 = -831623LL;

    t152 = (((x669/x670)!=x671)/x672);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x673 = INT64_MAX;
	int64_t x675 = -22858957270LL;
	int16_t x676 = INT16_MIN;
	volatile int32_t t153 = 26;

    t153 = (((x673/x674)!=x675)/x676);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x677 = UINT16_MAX;
	uint8_t x679 = 77U;
	int32_t x680 = -71;
	int32_t t154 = 1;

    t154 = (((x677/x678)!=x679)/x680);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = INT64_MIN;
	int32_t x683 = 22189;
	int8_t x684 = INT8_MIN;
	int32_t t155 = 956945;

    t155 = (((x681/x682)!=x683)/x684);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x685 = -1;
	int32_t x686 = -1;
	static int64_t x687 = -1LL;
	int16_t x688 = INT16_MIN;
	int32_t t156 = -436370;

    t156 = (((x685/x686)!=x687)/x688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x694 = INT16_MIN;
	static uint32_t x695 = 1941485U;
	int8_t x696 = -1;
	static volatile int32_t t157 = -4;

    t157 = (((x693/x694)!=x695)/x696);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x697 = -1;
	uint32_t x699 = 5812U;
	volatile int32_t t158 = -207783;

    t158 = (((x697/x698)!=x699)/x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x702 = 600738;
	int16_t x704 = 1;
	int32_t t159 = 194835;

    t159 = (((x701/x702)!=x703)/x704);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x705 = 9780U;
	uint16_t x706 = 27U;
	volatile int32_t x707 = INT32_MIN;
	volatile int64_t x708 = INT64_MIN;
	int64_t t160 = 1LL;

    t160 = (((x705/x706)!=x707)/x708);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x716 = INT8_MIN;

    t161 = (((x713/x714)!=x715)/x716);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x717 = 24U;
	static volatile int64_t x718 = INT64_MIN;
	int32_t x719 = -1;
	int16_t x720 = INT16_MIN;
	volatile int32_t t162 = -1166;

    t162 = (((x717/x718)!=x719)/x720);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x721 = INT8_MIN;
	static int32_t x722 = INT32_MIN;
	int8_t x723 = -1;
	static int64_t t163 = 5713402938833LL;

    t163 = (((x721/x722)!=x723)/x724);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x725 = 36068185802816856LLU;
	int32_t x727 = INT32_MIN;
	static volatile uint8_t x728 = UINT8_MAX;
	static volatile int32_t t164 = -723170963;

    t164 = (((x725/x726)!=x727)/x728);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x729 = INT32_MAX;
	volatile int32_t x730 = INT32_MIN;
	uint8_t x731 = UINT8_MAX;
	volatile uint32_t x732 = UINT32_MAX;
	volatile uint32_t t165 = 7592U;

    t165 = (((x729/x730)!=x731)/x732);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x733 = 1U;
	int32_t x735 = INT32_MIN;
	volatile int32_t t166 = 12241134;

    t166 = (((x733/x734)!=x735)/x736);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x738 = -13184408417LL;
	static uint64_t x739 = UINT64_MAX;
	int16_t x740 = -2518;
	volatile int32_t t167 = 243454651;

    t167 = (((x737/x738)!=x739)/x740);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x741 = INT32_MAX;
	int16_t x742 = -1;
	volatile int64_t x743 = 197431577LL;
	int8_t x744 = -1;
	volatile int32_t t168 = -1;

    t168 = (((x741/x742)!=x743)/x744);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = -94938384;
	uint64_t x746 = 1422612LLU;
	int16_t x747 = -1;
	static uint8_t x748 = UINT8_MAX;
	static int32_t t169 = -3340359;

    t169 = (((x745/x746)!=x747)/x748);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x749 = 8U;
	uint32_t x750 = 4U;
	int64_t x751 = -41727LL;
	int8_t x752 = INT8_MIN;

    t170 = (((x749/x750)!=x751)/x752);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x753 = 7U;
	static uint32_t x754 = 1145001U;
	static int8_t x755 = INT8_MIN;
	int64_t x756 = -245675LL;
	volatile int64_t t171 = 178010704LL;

    t171 = (((x753/x754)!=x755)/x756);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x757 = -1LL;
	static uint64_t x759 = UINT64_MAX;
	uint16_t x760 = 2968U;
	int32_t t172 = 580020482;

    t172 = (((x757/x758)!=x759)/x760);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x761 = UINT8_MAX;
	int32_t x762 = -1;
	static int64_t x763 = -1LL;
	volatile int16_t x764 = INT16_MIN;
	volatile int32_t t173 = 111317923;

    t173 = (((x761/x762)!=x763)/x764);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x765 = -1;
	int32_t x767 = 330230;
	int32_t x768 = INT32_MAX;
	volatile int32_t t174 = 45728;

    t174 = (((x765/x766)!=x767)/x768);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x769 = INT16_MAX;
	uint16_t x770 = 55U;
	static int8_t x771 = -1;
	volatile int64_t x772 = -1LL;
	int64_t t175 = 263407LL;

    t175 = (((x769/x770)!=x771)/x772);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x773 = INT8_MAX;
	volatile int8_t x774 = INT8_MIN;
	int64_t x776 = -1301950095420246LL;
	int64_t t176 = 118378256LL;

    t176 = (((x773/x774)!=x775)/x776);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x783 = 1U;
	volatile int8_t x784 = INT8_MAX;
	volatile int32_t t177 = 46971;

    t177 = (((x781/x782)!=x783)/x784);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x788 = INT8_MIN;
	volatile int32_t t178 = 108;

    t178 = (((x785/x786)!=x787)/x788);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x793 = -171;
	static uint32_t x794 = UINT32_MAX;
	uint64_t x795 = 2164160LLU;
	uint64_t x796 = UINT64_MAX;
	uint64_t t179 = 1049390889758LLU;

    t179 = (((x793/x794)!=x795)/x796);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x797 = 12108U;
	uint16_t x800 = 27094U;
	volatile int32_t t180 = 6;

    t180 = (((x797/x798)!=x799)/x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x801 = INT64_MIN;
	int8_t x802 = -2;
	uint8_t x804 = UINT8_MAX;

    t181 = (((x801/x802)!=x803)/x804);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x805 = 8621;
	int64_t x806 = INT64_MAX;
	int32_t x807 = -1;
	int16_t x808 = 3;

    t182 = (((x805/x806)!=x807)/x808);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x813 = 863438350780280215LLU;
	int32_t x814 = -1;
	static int8_t x816 = 1;
	int32_t t183 = 981505438;

    t183 = (((x813/x814)!=x815)/x816);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x817 = 231742LLU;
	int8_t x818 = -1;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t184 = 234961083;

    t184 = (((x817/x818)!=x819)/x820);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x826 = INT32_MAX;
	static int8_t x828 = INT8_MIN;

    t185 = (((x825/x826)!=x827)/x828);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x831 = INT32_MAX;
	volatile int32_t t186 = 81574970;

    t186 = (((x829/x830)!=x831)/x832);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x837 = 341698LLU;
	volatile uint32_t x838 = 1961U;
	int32_t x839 = INT32_MIN;
	volatile uint32_t x840 = 116711403U;

    t187 = (((x837/x838)!=x839)/x840);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x841 = 29864U;
	volatile int16_t x842 = INT16_MIN;
	int8_t x843 = 1;
	int32_t x844 = -1;
	int32_t t188 = 75;

    t188 = (((x841/x842)!=x843)/x844);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x845 = UINT8_MAX;
	static int32_t x846 = -1;
	int16_t x847 = INT16_MIN;
	int8_t x848 = -1;
	int32_t t189 = 113909;

    t189 = (((x845/x846)!=x847)/x848);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x849 = INT64_MAX;
	int8_t x850 = 1;
	uint16_t x851 = 26U;
	int64_t x852 = INT64_MAX;

    t190 = (((x849/x850)!=x851)/x852);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x854 = -1LL;
	static volatile uint32_t x855 = 383061U;
	int32_t x856 = INT32_MIN;
	int32_t t191 = 5149;

    t191 = (((x853/x854)!=x855)/x856);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x858 = 48352641U;
	volatile int8_t x859 = INT8_MAX;
	uint16_t x860 = UINT16_MAX;
	volatile int32_t t192 = 229425;

    t192 = (((x857/x858)!=x859)/x860);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x861 = INT16_MAX;
	static int64_t x863 = 1070258859931LL;
	int16_t x864 = -13752;

    t193 = (((x861/x862)!=x863)/x864);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x865 = INT64_MAX;
	static volatile int64_t x866 = INT64_MIN;
	static int8_t x867 = 15;

    t194 = (((x865/x866)!=x867)/x868);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x869 = -8;
	volatile uint16_t x870 = 7U;
	volatile int64_t x872 = INT64_MIN;
	int64_t t195 = -214LL;

    t195 = (((x869/x870)!=x871)/x872);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x873 = INT32_MIN;
	volatile int8_t x874 = INT8_MAX;
	int16_t x875 = INT16_MIN;
	int64_t x876 = INT64_MIN;
	int64_t t196 = 1LL;

    t196 = (((x873/x874)!=x875)/x876);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x877 = 4U;
	int8_t x878 = INT8_MAX;
	int32_t x879 = INT32_MIN;
	uint16_t x880 = 150U;

    t197 = (((x877/x878)!=x879)/x880);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x881 = 30U;
	volatile int8_t x882 = -1;
	static int32_t x883 = INT32_MAX;
	uint32_t t198 = 3U;

    t198 = (((x881/x882)!=x883)/x884);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x885 = INT8_MIN;
	uint32_t x886 = 24746393U;
	uint64_t x887 = 2219726LLU;
	int16_t x888 = INT16_MIN;

    t199 = (((x885/x886)!=x887)/x888);

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

