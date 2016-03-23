
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

volatile uint64_t x9 = UINT64_MAX;
int8_t x11 = INT8_MIN;
static int64_t x13 = INT64_MIN;
volatile int64_t x15 = 0LL;
uint32_t x19 = 7U;
uint32_t x32 = 2203907U;
int8_t x36 = INT8_MAX;
volatile int32_t t8 = -3;
static int32_t x39 = -1;
int8_t x40 = -1;
volatile uint64_t x47 = UINT64_MAX;
volatile int32_t x51 = 340406919;
static int64_t x53 = INT64_MIN;
volatile uint64_t x63 = 9LLU;
static uint16_t x66 = UINT16_MAX;
static volatile int32_t t19 = -2;
static int32_t x84 = 64422;
uint16_t x91 = 33U;
int16_t x96 = INT16_MIN;
static int64_t x98 = 6034216395LL;
int64_t x102 = 13823166LL;
volatile int32_t t25 = -36804;
uint64_t x106 = 91LLU;
uint32_t x107 = UINT32_MAX;
int32_t x109 = INT32_MIN;
static int16_t x113 = -1;
int8_t x118 = INT8_MIN;
volatile int32_t t29 = 23825;
int8_t x129 = INT8_MIN;
int32_t x135 = 15;
int16_t x136 = INT16_MAX;
int32_t x138 = INT32_MIN;
static int8_t x143 = INT8_MAX;
int16_t x151 = INT16_MAX;
volatile uint8_t x155 = 0U;
int8_t x160 = -1;
volatile int16_t x165 = INT16_MIN;
uint32_t x168 = 13762U;
volatile uint32_t x171 = 0U;
uint16_t x177 = 353U;
int8_t x181 = -1;
int8_t x182 = 2;
uint64_t x190 = 50806161LLU;
volatile int8_t x193 = 1;
int8_t x199 = INT8_MAX;
int8_t x203 = INT8_MAX;
static int32_t x205 = 377;
uint64_t x207 = 21114305539599LLU;
volatile int16_t x223 = -1;
uint64_t x228 = UINT64_MAX;
int16_t x238 = -194;
int8_t x240 = INT8_MIN;
static int32_t x245 = INT32_MIN;
volatile int8_t x251 = -1;
static int8_t x270 = INT8_MIN;
int32_t x272 = INT32_MAX;
int64_t x283 = INT64_MIN;
volatile int32_t t70 = -2;
static int64_t x289 = -1LL;
int64_t x297 = -898306487LL;
static int64_t x304 = -1LL;
int16_t x319 = INT16_MAX;
static uint16_t x323 = UINT16_MAX;
volatile int8_t x328 = 23;
int64_t x332 = INT64_MIN;
static uint8_t x338 = 12U;
int32_t t84 = -209802;
volatile int32_t t85 = -1188331;
static uint32_t x346 = 515279U;
int16_t x348 = INT16_MAX;
volatile int32_t t87 = 215524184;
volatile int32_t t88 = 3;
static volatile uint64_t x357 = UINT64_MAX;
volatile uint32_t x364 = 22679U;
int8_t x365 = 13;
uint8_t x367 = 4U;
int8_t x379 = -1;
int32_t x383 = 710835688;
int32_t t95 = -31901082;
int64_t x388 = INT64_MIN;
int32_t t96 = -1;
static uint8_t x391 = 1U;
volatile int32_t t98 = 1413332;
int8_t x403 = 48;
int32_t t100 = 27932733;
int32_t t101 = 1;
uint32_t x410 = UINT32_MAX;
volatile int32_t t102 = 11;
volatile int32_t t103 = -180;
volatile int64_t x418 = INT64_MAX;
uint32_t x419 = 829884312U;
int32_t t104 = -250;
volatile int32_t t107 = 4;
int32_t x438 = INT32_MIN;
static int8_t x440 = INT8_MIN;
int8_t x443 = INT8_MAX;
volatile int32_t t110 = 278380;
volatile int8_t x459 = INT8_MAX;
uint32_t x466 = 100748266U;
volatile int32_t t116 = -255469;
volatile int32_t t117 = 61604;
int64_t x479 = INT64_MAX;
static uint16_t x481 = UINT16_MAX;
int16_t x483 = INT16_MIN;
uint16_t x485 = UINT16_MAX;
int32_t t122 = -385497;
int16_t x506 = -1;
volatile uint8_t x508 = 10U;
int64_t x522 = INT64_MAX;
int32_t x524 = -1;
volatile int16_t x529 = INT16_MIN;
static int8_t x531 = INT8_MAX;
volatile int16_t x532 = -1;
int32_t x535 = INT32_MIN;
uint8_t x537 = 13U;
int8_t x540 = INT8_MIN;
int8_t x543 = INT8_MIN;
int64_t x553 = INT64_MAX;
uint32_t x556 = 15U;
int64_t x558 = INT64_MAX;
int64_t x560 = -1LL;
static int8_t x561 = INT8_MAX;
int64_t x572 = -2LL;
volatile int16_t x575 = INT16_MIN;
static uint16_t x577 = 1006U;
volatile int32_t t146 = 8909549;
int16_t x589 = -1;
int8_t x597 = 1;
int16_t x600 = INT16_MAX;
uint32_t x602 = 12597465U;
int32_t x605 = 438;
volatile uint16_t x607 = 3216U;
int64_t x616 = 880LL;
int64_t x622 = INT64_MIN;
int64_t x629 = -1LL;
int32_t t160 = -872;
int16_t x646 = INT16_MAX;
int32_t t162 = -44366;
int64_t x661 = INT64_MIN;
int32_t t165 = 139;
uint16_t x670 = 1081U;
int64_t x673 = INT64_MAX;
int32_t x679 = -1;
volatile int32_t t171 = -151;
int8_t x691 = 45;
int32_t t172 = -92;
volatile int32_t x697 = INT32_MIN;
int8_t x698 = INT8_MAX;
int32_t x706 = INT32_MAX;
uint8_t x708 = 9U;
int64_t x713 = -186LL;
int8_t x714 = INT8_MIN;
int8_t x715 = -25;
uint32_t x721 = 144U;
int16_t x725 = INT16_MIN;
static int64_t x731 = 858923702302887152LL;
int32_t t183 = 50589678;
volatile int32_t t185 = 4;
static volatile uint16_t x749 = 119U;
uint64_t x751 = 267353LLU;
volatile int16_t x759 = -1;
static volatile int32_t t189 = 387876932;
volatile int8_t x761 = INT8_MIN;
int32_t x764 = 70629697;
static uint16_t x767 = 18U;
int64_t x769 = INT64_MIN;
int8_t x778 = -1;
volatile uint16_t x785 = UINT16_MAX;
int8_t x787 = -1;
int32_t x794 = INT32_MIN;
volatile int32_t t198 = 25805128;
int32_t t199 = -447255;


void f0(void) {
    	static uint64_t x1 = 145173263125LLU;
	uint32_t x2 = UINT32_MAX;
	volatile int32_t x3 = INT32_MIN;
	uint64_t x4 = 81696998679407LLU;
	int32_t t0 = -63;

    t0 = ((x1<=x2)!=(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	int8_t x6 = 1;
	static uint8_t x7 = 0U;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -7512;

    t1 = ((x5<=x6)!=(x7|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x10 = INT64_MIN;
	uint16_t x12 = 209U;
	static int32_t t2 = 940344;

    t2 = ((x9<=x10)!=(x11|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MIN;
	uint8_t x16 = UINT8_MAX;
	static int32_t t3 = 61577468;

    t3 = ((x13<=x14)!=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 35472121414730448LLU;
	uint32_t x18 = UINT32_MAX;
	volatile uint16_t x20 = 916U;
	volatile int32_t t4 = -189454763;

    t4 = ((x17<=x18)!=(x19|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -92;
	uint16_t x22 = 47U;
	int8_t x23 = INT8_MIN;
	static int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -116;

    t5 = ((x21<=x22)!=(x23|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 12485890U;
	uint64_t x26 = 3001849248LLU;
	volatile uint16_t x27 = 46U;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 4;

    t6 = ((x25<=x26)!=(x27|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -7012070;
	volatile int64_t x30 = -6203389953LL;
	int8_t x31 = -3;
	static volatile int32_t t7 = -2044;

    t7 = ((x29<=x30)!=(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = 117U;
	int8_t x34 = INT8_MAX;
	uint8_t x35 = UINT8_MAX;

    t8 = ((x33<=x34)!=(x35|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 21338U;
	static int16_t x38 = -1;
	volatile int32_t t9 = 440;

    t9 = ((x37<=x38)!=(x39|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 2;
	static volatile int32_t x42 = INT32_MAX;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = 2013727819408730LLU;
	static int32_t t10 = 141969;

    t10 = ((x41<=x42)!=(x43|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int32_t x46 = 207509957;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 1;

    t11 = ((x45<=x46)!=(x47|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x49 = INT32_MIN;
	volatile int8_t x50 = -1;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 1008493503;

    t12 = ((x49<=x50)!=(x51|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	volatile int8_t x55 = INT8_MAX;
	int32_t x56 = 0;
	volatile int32_t t13 = 16814059;

    t13 = ((x53<=x54)!=(x55|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	uint16_t x58 = 31U;
	static uint64_t x59 = 1LLU;
	int8_t x60 = 63;
	volatile int32_t t14 = 29;

    t14 = ((x57<=x58)!=(x59|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 474U;
	uint64_t x62 = 501368742LLU;
	int32_t x64 = 15552935;
	static int32_t t15 = 31677080;

    t15 = ((x61<=x62)!=(x63|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	static int32_t x67 = -1;
	volatile int64_t x68 = 874261560LL;
	int32_t t16 = -19241835;

    t16 = ((x65<=x66)!=(x67|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 179996002U;
	int8_t x70 = INT8_MIN;
	uint16_t x71 = 148U;
	int8_t x72 = 1;
	volatile int32_t t17 = 4329;

    t17 = ((x69<=x70)!=(x71|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 846;
	int8_t x74 = 0;
	uint8_t x75 = 11U;
	static volatile uint16_t x76 = 2U;
	volatile int32_t t18 = -79057859;

    t18 = ((x73<=x74)!=(x75|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 65897765U;
	static int8_t x78 = -2;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = UINT32_MAX;

    t19 = ((x77<=x78)!=(x79|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint8_t x82 = 0U;
	volatile int32_t x83 = INT32_MAX;
	static volatile int32_t t20 = 47;

    t20 = ((x81<=x82)!=(x83|x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 70285247506589198LLU;
	uint8_t x86 = UINT8_MAX;
	static int8_t x87 = -1;
	int8_t x88 = -1;
	volatile int32_t t21 = -302821;

    t21 = ((x85<=x86)!=(x87|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = 15;
	int64_t x90 = INT64_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -816835;

    t22 = ((x89<=x90)!=(x91|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = 8U;
	volatile int32_t t23 = 103798;

    t23 = ((x93<=x94)!=(x95|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int16_t x99 = INT16_MAX;
	volatile uint32_t x100 = 17851U;
	volatile int32_t t24 = 3;

    t24 = ((x97<=x98)!=(x99|x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	volatile int64_t x104 = -553183950LL;

    t25 = ((x101<=x102)!=(x103|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MAX;
	int8_t x108 = -1;
	static volatile int32_t t26 = 484071;

    t26 = ((x105<=x106)!=(x107|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = 23078U;
	int8_t x111 = 22;
	static uint64_t x112 = UINT64_MAX;
	static int32_t t27 = 1781;

    t27 = ((x109<=x110)!=(x111|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x114 = 49682U;
	volatile int64_t x115 = 2802787217197973LL;
	static volatile uint64_t x116 = 96268LLU;
	int32_t t28 = 0;

    t28 = ((x113<=x114)!=(x115|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	int32_t x119 = INT32_MAX;
	volatile int16_t x120 = INT16_MAX;

    t29 = ((x117<=x118)!=(x119|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x121 = 162U;
	int16_t x122 = 3680;
	uint32_t x123 = 3U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 21183;

    t30 = ((x121<=x122)!=(x123|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	static int32_t x126 = -76959;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = -29;

    t31 = ((x125<=x126)!=(x127|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = INT8_MIN;
	static int8_t x131 = INT8_MIN;
	static int16_t x132 = INT16_MIN;
	static int32_t t32 = -1382;

    t32 = ((x129<=x130)!=(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = INT8_MIN;
	static uint32_t x134 = 25913U;
	volatile int32_t t33 = 580409542;

    t33 = ((x133<=x134)!=(x135|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 2649693U;
	uint64_t x139 = 22640020743LLU;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = 163;

    t34 = ((x137<=x138)!=(x139|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = UINT32_MAX;
	int32_t x142 = 495099939;
	volatile int32_t x144 = INT32_MAX;
	volatile int32_t t35 = 41622;

    t35 = ((x141<=x142)!=(x143|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -7726869;
	int16_t x146 = -1514;
	uint64_t x147 = UINT64_MAX;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = 3;

    t36 = ((x145<=x146)!=(x147|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x149 = 25U;
	static volatile int8_t x150 = 1;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t37 = 3819830;

    t37 = ((x149<=x150)!=(x151|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -777;
	int64_t x154 = -1LL;
	uint64_t x156 = UINT64_MAX;
	int32_t t38 = -35078626;

    t38 = ((x153<=x154)!=(x155|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = -21;
	int64_t x158 = INT64_MIN;
	int32_t x159 = -868860;
	volatile int32_t t39 = 247794237;

    t39 = ((x157<=x158)!=(x159|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint8_t x161 = UINT8_MAX;
	volatile int64_t x162 = -827089878628796078LL;
	int64_t x163 = INT64_MAX;
	uint16_t x164 = 29U;
	volatile int32_t t40 = -241596852;

    t40 = ((x161<=x162)!=(x163|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = 34033305LL;
	uint64_t x167 = 69LLU;
	static volatile int32_t t41 = 7;

    t41 = ((x165<=x166)!=(x167|x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	int16_t x172 = 481;
	volatile int32_t t42 = -1;

    t42 = ((x169<=x170)!=(x171|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int32_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	static int8_t x176 = INT8_MIN;
	int32_t t43 = 0;

    t43 = ((x173<=x174)!=(x175|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = 6;
	static int8_t x179 = INT8_MIN;
	uint64_t x180 = 453052LLU;
	volatile int32_t t44 = -1;

    t44 = ((x177<=x178)!=(x179|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x183 = INT16_MIN;
	uint8_t x184 = UINT8_MAX;
	static int32_t t45 = 0;

    t45 = ((x181<=x182)!=(x183|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 4261928LL;
	volatile int8_t x186 = 7;
	int16_t x187 = 1;
	int64_t x188 = -1LL;
	int32_t t46 = -13;

    t46 = ((x185<=x186)!=(x187|x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 11U;
	uint16_t x191 = 1U;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 979;

    t47 = ((x189<=x190)!=(x191|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = 8;
	uint8_t x195 = UINT8_MAX;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = -24146;

    t48 = ((x193<=x194)!=(x195|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 30530U;
	int8_t x198 = 0;
	int8_t x200 = INT8_MAX;
	int32_t t49 = -1;

    t49 = ((x197<=x198)!=(x199|x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	int32_t x204 = -1991615;
	int32_t t50 = -5;

    t50 = ((x201<=x202)!=(x203|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x206 = 1752111503U;
	int64_t x208 = 1000LL;
	int32_t t51 = 146635;

    t51 = ((x205<=x206)!=(x207|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 28116U;
	static uint16_t x210 = 55U;
	int64_t x211 = INT64_MIN;
	volatile int32_t x212 = 314270;
	int32_t t52 = -397084;

    t52 = ((x209<=x210)!=(x211|x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	static int32_t x214 = -13304;
	int64_t x215 = -2454400802345LL;
	int16_t x216 = 13;
	volatile int32_t t53 = -113719027;

    t53 = ((x213<=x214)!=(x215|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	uint64_t x218 = 2105009LLU;
	volatile int32_t x219 = -1;
	int8_t x220 = -1;
	volatile int32_t t54 = -152763;

    t54 = ((x217<=x218)!=(x219|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	uint64_t x222 = 479049275163LLU;
	int32_t x224 = INT32_MIN;
	int32_t t55 = 97;

    t55 = ((x221<=x222)!=(x223|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = -1;
	int8_t x227 = INT8_MAX;
	volatile int32_t t56 = 4901;

    t56 = ((x225<=x226)!=(x227|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 31U;
	static int32_t x230 = -656967703;
	uint16_t x231 = UINT16_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t57 = -14837;

    t57 = ((x229<=x230)!=(x231|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 51U;
	static volatile int16_t x234 = INT16_MIN;
	static int32_t x235 = INT32_MAX;
	static uint8_t x236 = 2U;
	volatile int32_t t58 = 21;

    t58 = ((x233<=x234)!=(x235|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	static int8_t x239 = INT8_MAX;
	static volatile int32_t t59 = 1011512916;

    t59 = ((x237<=x238)!=(x239|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	volatile int32_t x242 = 1;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t60 = -1716343;

    t60 = ((x241<=x242)!=(x243|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x246 = 3U;
	static int8_t x247 = -2;
	int8_t x248 = -1;
	volatile int32_t t61 = 51550234;

    t61 = ((x245<=x246)!=(x247|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MIN;
	volatile int16_t x250 = INT16_MIN;
	uint8_t x252 = 53U;
	int32_t t62 = -7;

    t62 = ((x249<=x250)!=(x251|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = 1;
	static uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 656LLU;
	volatile int32_t t63 = 29;

    t63 = ((x253<=x254)!=(x255|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = 1444LLU;
	int32_t x259 = INT32_MIN;
	int16_t x260 = 11;
	int32_t t64 = 8259;

    t64 = ((x257<=x258)!=(x259|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x262 = -1;
	uint8_t x263 = 1U;
	uint16_t x264 = 23U;
	int32_t t65 = 327182;

    t65 = ((x261<=x262)!=(x263|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x265 = 2U;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	uint8_t x268 = 1U;
	volatile int32_t t66 = 0;

    t66 = ((x265<=x266)!=(x267|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = -10783536LL;
	uint8_t x271 = 11U;
	static volatile int32_t t67 = 29916;

    t67 = ((x269<=x270)!=(x271|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = 5;
	uint64_t x274 = 6504LLU;
	int16_t x275 = 10997;
	volatile uint32_t x276 = 100696U;
	int32_t t68 = -93;

    t68 = ((x273<=x274)!=(x275|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 9U;
	int8_t x278 = INT8_MIN;
	volatile uint16_t x279 = UINT16_MAX;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t69 = -1726;

    t69 = ((x277<=x278)!=(x279|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	int8_t x282 = -1;
	uint64_t x284 = UINT64_MAX;

    t70 = ((x281<=x282)!=(x283|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 34LLU;
	int32_t x286 = INT32_MAX;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = 0;
	volatile int32_t t71 = -35706079;

    t71 = ((x285<=x286)!=(x287|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MAX;
	static int64_t x291 = INT64_MIN;
	int64_t x292 = 1002057890LL;
	int32_t t72 = 145259157;

    t72 = ((x289<=x290)!=(x291|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 27325LLU;
	static int32_t x294 = -265930402;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	int32_t t73 = -7126;

    t73 = ((x293<=x294)!=(x295|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = 122473;

    t74 = ((x297<=x298)!=(x299|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x301 = INT64_MAX;
	uint16_t x302 = 199U;
	static int16_t x303 = INT16_MAX;
	int32_t t75 = 1297429;

    t75 = ((x301<=x302)!=(x303|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MAX;
	volatile int16_t x308 = INT16_MIN;
	int32_t t76 = -56;

    t76 = ((x305<=x306)!=(x307|x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int8_t x310 = 1;
	static uint32_t x311 = 15610U;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -1;

    t77 = ((x309<=x310)!=(x311|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	volatile uint32_t x314 = 1448U;
	uint8_t x315 = 0U;
	int64_t x316 = INT64_MIN;
	int32_t t78 = 1369639;

    t78 = ((x313<=x314)!=(x315|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -155;
	uint32_t x318 = UINT32_MAX;
	volatile int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = -12876682;

    t79 = ((x317<=x318)!=(x319|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	static int16_t x322 = -369;
	int64_t x324 = -197136058LL;
	int32_t t80 = 1267;

    t80 = ((x321<=x322)!=(x323|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x325 = UINT8_MAX;
	uint8_t x326 = UINT8_MAX;
	static uint32_t x327 = UINT32_MAX;
	static volatile int32_t t81 = -2;

    t81 = ((x325<=x326)!=(x327|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x329 = 1973;
	int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	volatile int32_t t82 = -855402;

    t82 = ((x329<=x330)!=(x331|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 12U;
	int64_t x334 = 1014LL;
	int16_t x335 = INT16_MIN;
	uint16_t x336 = 1324U;
	volatile int32_t t83 = 13;

    t83 = ((x333<=x334)!=(x335|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	volatile int32_t x339 = -1;
	static int32_t x340 = INT32_MIN;

    t84 = ((x337<=x338)!=(x339|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MAX;
	int64_t x342 = -58913LL;
	uint32_t x343 = 33282U;
	int16_t x344 = INT16_MIN;

    t85 = ((x341<=x342)!=(x343|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 2154371417662004LLU;
	int64_t x347 = INT64_MAX;
	volatile int32_t t86 = -1;

    t86 = ((x345<=x346)!=(x347|x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MAX;
	int16_t x351 = INT16_MAX;
	int8_t x352 = -2;

    t87 = ((x349<=x350)!=(x351|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	volatile int64_t x354 = INT64_MAX;
	int32_t x355 = -1;
	int64_t x356 = -2001442256550180LL;

    t88 = ((x353<=x354)!=(x355|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x358 = INT8_MIN;
	volatile int32_t x359 = INT32_MIN;
	uint16_t x360 = 5U;
	int32_t t89 = 143417;

    t89 = ((x357<=x358)!=(x359|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	volatile uint16_t x362 = 324U;
	static int8_t x363 = INT8_MAX;
	volatile int32_t t90 = 755551805;

    t90 = ((x361<=x362)!=(x363|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x366 = 1U;
	int64_t x368 = -1LL;
	int32_t t91 = 447733903;

    t91 = ((x365<=x366)!=(x367|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	int16_t x370 = 24;
	uint32_t x371 = UINT32_MAX;
	static int64_t x372 = INT64_MIN;
	static volatile int32_t t92 = 2;

    t92 = ((x369<=x370)!=(x371|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 111682119960072630LLU;
	volatile int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MAX;
	uint32_t x376 = UINT32_MAX;
	static int32_t t93 = 740470;

    t93 = ((x373<=x374)!=(x375|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MAX;
	static int8_t x378 = INT8_MAX;
	static uint64_t x380 = 1LLU;
	volatile int32_t t94 = -138;

    t94 = ((x377<=x378)!=(x379|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	volatile int64_t x382 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;

    t95 = ((x381<=x382)!=(x383|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 58U;
	int8_t x386 = -1;
	static volatile int32_t x387 = INT32_MIN;

    t96 = ((x385<=x386)!=(x387|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -43166940306889LL;
	int8_t x390 = 17;
	static int64_t x392 = INT64_MAX;
	int32_t t97 = 30751408;

    t97 = ((x389<=x390)!=(x391|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	uint16_t x394 = 1U;
	int8_t x395 = -56;
	static int64_t x396 = INT64_MAX;

    t98 = ((x393<=x394)!=(x395|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 69U;
	uint64_t x398 = 9798434721LLU;
	uint64_t x399 = 561266418351174152LLU;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -122889113;

    t99 = ((x397<=x398)!=(x399|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MAX;
	int8_t x404 = 29;

    t100 = ((x401<=x402)!=(x403|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MAX;
	uint8_t x408 = 0U;

    t101 = ((x405<=x406)!=(x407|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	static int64_t x411 = INT64_MIN;
	volatile uint32_t x412 = 40U;

    t102 = ((x409<=x410)!=(x411|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 15LLU;
	int8_t x414 = 22;
	volatile int64_t x415 = -1471033LL;
	int32_t x416 = INT32_MAX;

    t103 = ((x413<=x414)!=(x415|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 257759U;
	static int32_t x420 = INT32_MIN;

    t104 = ((x417<=x418)!=(x419|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = -14;
	volatile uint8_t x423 = 5U;
	uint16_t x424 = 6U;
	int32_t t105 = 114;

    t105 = ((x421<=x422)!=(x423|x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = 19U;
	static uint64_t x428 = UINT64_MAX;
	static volatile int32_t t106 = -7;

    t106 = ((x425<=x426)!=(x427|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = INT16_MAX;
	uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 23660025232LLU;
	int8_t x432 = -1;

    t107 = ((x429<=x430)!=(x431|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 466U;
	int64_t x434 = INT64_MIN;
	volatile int16_t x435 = -1;
	int32_t x436 = INT32_MAX;
	volatile int32_t t108 = -467;

    t108 = ((x433<=x434)!=(x435|x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 96565809999206LL;
	int64_t x439 = -1LL;
	volatile int32_t t109 = -119810444;

    t109 = ((x437<=x438)!=(x439|x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -3;
	static int8_t x442 = 0;
	volatile uint64_t x444 = UINT64_MAX;

    t110 = ((x441<=x442)!=(x443|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 15U;
	static volatile int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -11;
	int32_t t111 = 24;

    t111 = ((x445<=x446)!=(x447|x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	static volatile uint64_t x450 = 63573LLU;
	static volatile int64_t x451 = INT64_MIN;
	int16_t x452 = -1;
	static volatile int32_t t112 = -4;

    t112 = ((x449<=x450)!=(x451|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 2U;
	uint16_t x454 = 14423U;
	int32_t x455 = -29740073;
	uint8_t x456 = 5U;
	int32_t t113 = 1336;

    t113 = ((x453<=x454)!=(x455|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = 30756U;
	uint64_t x458 = 61345953LLU;
	static volatile int64_t x460 = INT64_MIN;
	volatile int32_t t114 = -1;

    t114 = ((x457<=x458)!=(x459|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = 1;
	static int32_t x462 = INT32_MIN;
	int16_t x463 = INT16_MAX;
	int64_t x464 = INT64_MAX;
	static volatile int32_t t115 = -41851594;

    t115 = ((x461<=x462)!=(x463|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int64_t x467 = INT64_MIN;
	uint32_t x468 = 6U;

    t116 = ((x465<=x466)!=(x467|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	volatile uint32_t x470 = UINT32_MAX;
	uint16_t x471 = 5U;
	int16_t x472 = -1;

    t117 = ((x469<=x470)!=(x471|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x473 = 9;
	volatile int64_t x474 = INT64_MIN;
	uint64_t x475 = 129573523677LLU;
	int32_t x476 = INT32_MIN;
	int32_t t118 = -78;

    t118 = ((x473<=x474)!=(x475|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -3;
	uint64_t x478 = UINT64_MAX;
	uint32_t x480 = 12455272U;
	int32_t t119 = -1017281;

    t119 = ((x477<=x478)!=(x479|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = 1;
	int32_t x484 = -1;
	int32_t t120 = -1087122;

    t120 = ((x481<=x482)!=(x483|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	int64_t x487 = -1LL;
	int64_t x488 = -3187LL;
	volatile int32_t t121 = 856;

    t121 = ((x485<=x486)!=(x487|x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 27;
	volatile uint8_t x490 = 0U;
	int64_t x491 = INT64_MIN;
	int64_t x492 = INT64_MAX;

    t122 = ((x489<=x490)!=(x491|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	static volatile int8_t x494 = INT8_MIN;
	int16_t x495 = -2;
	static uint64_t x496 = UINT64_MAX;
	static int32_t t123 = -26;

    t123 = ((x493<=x494)!=(x495|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	volatile int64_t x498 = -1LL;
	int32_t x499 = -419;
	uint32_t x500 = 35242572U;
	int32_t t124 = -243323;

    t124 = ((x497<=x498)!=(x499|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = 138537;
	uint8_t x502 = 4U;
	volatile int8_t x503 = 14;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = -673139;

    t125 = ((x501<=x502)!=(x503|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x505 = 1;
	uint32_t x507 = UINT32_MAX;
	static volatile int32_t t126 = -165800;

    t126 = ((x505<=x506)!=(x507|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	uint32_t x510 = UINT32_MAX;
	uint8_t x511 = 3U;
	static volatile int8_t x512 = -1;
	volatile int32_t t127 = 2;

    t127 = ((x509<=x510)!=(x511|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x513 = UINT8_MAX;
	int32_t x514 = INT32_MAX;
	static int8_t x515 = 1;
	uint16_t x516 = 3U;
	static volatile int32_t t128 = 2988987;

    t128 = ((x513<=x514)!=(x515|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	uint32_t x518 = 205021814U;
	static int64_t x519 = 31956LL;
	volatile uint64_t x520 = 731854LLU;
	static volatile int32_t t129 = -1;

    t129 = ((x517<=x518)!=(x519|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	static int8_t x523 = INT8_MAX;
	static int32_t t130 = -165807;

    t130 = ((x521<=x522)!=(x523|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	uint8_t x526 = 28U;
	volatile uint16_t x527 = 3113U;
	int64_t x528 = INT64_MAX;
	volatile int32_t t131 = -759716;

    t131 = ((x525<=x526)!=(x527|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = INT32_MIN;
	volatile int32_t t132 = -39;

    t132 = ((x529<=x530)!=(x531|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	volatile int8_t x534 = INT8_MIN;
	int8_t x536 = -7;
	volatile int32_t t133 = 2704;

    t133 = ((x533<=x534)!=(x535|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = -147705348187LL;
	int8_t x539 = INT8_MAX;
	int32_t t134 = -473373468;

    t134 = ((x537<=x538)!=(x539|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -127881;
	volatile int64_t x542 = INT64_MIN;
	int32_t x544 = -5859;
	volatile int32_t t135 = -292909993;

    t135 = ((x541<=x542)!=(x543|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x545 = 39548LLU;
	uint32_t x546 = UINT32_MAX;
	int64_t x547 = -1LL;
	uint8_t x548 = UINT8_MAX;
	static volatile int32_t t136 = 0;

    t136 = ((x545<=x546)!=(x547|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 343;
	static int16_t x550 = 1455;
	int64_t x551 = INT64_MIN;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t137 = -56;

    t137 = ((x549<=x550)!=(x551|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x554 = 1007LLU;
	volatile int16_t x555 = 12;
	int32_t t138 = -3211;

    t138 = ((x553<=x554)!=(x555|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	uint32_t x559 = UINT32_MAX;
	static volatile int32_t t139 = -3206;

    t139 = ((x557<=x558)!=(x559|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x562 = 27LL;
	uint32_t x563 = 1946522535U;
	uint64_t x564 = 3845446LLU;
	volatile int32_t t140 = -2843;

    t140 = ((x561<=x562)!=(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = 3326480157467717LL;
	int32_t x566 = INT32_MIN;
	uint32_t x567 = UINT32_MAX;
	int16_t x568 = INT16_MAX;
	volatile int32_t t141 = -918940265;

    t141 = ((x565<=x566)!=(x567|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile uint64_t x570 = UINT64_MAX;
	uint64_t x571 = UINT64_MAX;
	int32_t t142 = -91081;

    t142 = ((x569<=x570)!=(x571|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	int64_t x574 = 1131455850459120086LL;
	volatile uint16_t x576 = UINT16_MAX;
	int32_t t143 = -773;

    t143 = ((x573<=x574)!=(x575|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = 1U;
	uint8_t x579 = UINT8_MAX;
	int32_t x580 = INT32_MAX;
	int32_t t144 = -673142855;

    t144 = ((x577<=x578)!=(x579|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 1005689008106596LL;
	uint64_t x582 = 56245802136893258LLU;
	static int8_t x583 = INT8_MAX;
	volatile uint16_t x584 = 7U;
	volatile int32_t t145 = 52592;

    t145 = ((x581<=x582)!=(x583|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 196;
	int8_t x586 = INT8_MIN;
	int16_t x587 = INT16_MAX;
	volatile int8_t x588 = INT8_MIN;

    t146 = ((x585<=x586)!=(x587|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = INT32_MAX;
	static int64_t x591 = INT64_MIN;
	volatile uint32_t x592 = UINT32_MAX;
	static int32_t t147 = 16;

    t147 = ((x589<=x590)!=(x591|x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = 7;
	int32_t x594 = INT32_MAX;
	int32_t x595 = INT32_MAX;
	uint32_t x596 = 3239U;
	volatile int32_t t148 = -49882556;

    t148 = ((x593<=x594)!=(x595|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x598 = UINT64_MAX;
	int16_t x599 = INT16_MAX;
	int32_t t149 = -89063637;

    t149 = ((x597<=x598)!=(x599|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = 3822368U;
	static uint16_t x603 = 0U;
	int16_t x604 = INT16_MIN;
	volatile int32_t t150 = -53268;

    t150 = ((x601<=x602)!=(x603|x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x606 = -78037;
	int64_t x608 = INT64_MIN;
	static volatile int32_t t151 = 10015;

    t151 = ((x605<=x606)!=(x607|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	volatile int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MAX;
	int16_t x612 = INT16_MAX;
	volatile int32_t t152 = 13;

    t152 = ((x609<=x610)!=(x611|x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x613 = INT32_MIN;
	int64_t x614 = INT64_MIN;
	int8_t x615 = -31;
	int32_t t153 = -223379315;

    t153 = ((x613<=x614)!=(x615|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -223;
	static volatile int32_t x618 = -1;
	int8_t x619 = 1;
	int64_t x620 = -13505839631LL;
	volatile int32_t t154 = -2160540;

    t154 = ((x617<=x618)!=(x619|x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1349983388787814LL;
	volatile uint8_t x623 = 2U;
	int8_t x624 = INT8_MAX;
	volatile int32_t t155 = -1;

    t155 = ((x621<=x622)!=(x623|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 87827525064LL;
	volatile int16_t x626 = -592;
	static volatile int16_t x627 = INT16_MIN;
	int16_t x628 = -1;
	volatile int32_t t156 = 121859705;

    t156 = ((x625<=x626)!=(x627|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = 221580498;
	int8_t x631 = -1;
	uint16_t x632 = 75U;
	volatile int32_t t157 = -14001333;

    t157 = ((x629<=x630)!=(x631|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = -9567;
	int64_t x634 = -469484260927LL;
	static int32_t x635 = 16798586;
	volatile int32_t x636 = -55635901;
	int32_t t158 = 81202084;

    t158 = ((x633<=x634)!=(x635|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x637 = 10687533;
	static int16_t x638 = -1;
	int8_t x639 = INT8_MIN;
	int16_t x640 = INT16_MAX;
	volatile int32_t t159 = 0;

    t159 = ((x637<=x638)!=(x639|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MAX;
	int32_t x643 = INT32_MIN;
	int32_t x644 = -1650070;

    t160 = ((x641<=x642)!=(x643|x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = INT16_MIN;
	uint8_t x647 = UINT8_MAX;
	static uint64_t x648 = UINT64_MAX;
	volatile int32_t t161 = 170343429;

    t161 = ((x645<=x646)!=(x647|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	uint64_t x650 = UINT64_MAX;
	int32_t x651 = INT32_MAX;
	int32_t x652 = 0;

    t162 = ((x649<=x650)!=(x651|x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = 16542897946LL;
	int16_t x654 = INT16_MIN;
	volatile int64_t x655 = INT64_MIN;
	int64_t x656 = -163455249LL;
	int32_t t163 = 529345663;

    t163 = ((x653<=x654)!=(x655|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	uint32_t x658 = 29532010U;
	volatile int8_t x659 = 28;
	volatile uint16_t x660 = 18462U;
	int32_t t164 = 13;

    t164 = ((x657<=x658)!=(x659|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x662 = INT32_MAX;
	int64_t x663 = -828495623LL;
	static uint64_t x664 = 2788LLU;

    t165 = ((x661<=x662)!=(x663|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 1381835;
	volatile uint64_t x666 = UINT64_MAX;
	int32_t x667 = -1;
	volatile int8_t x668 = INT8_MAX;
	static volatile int32_t t166 = -17;

    t166 = ((x665<=x666)!=(x667|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = INT8_MIN;
	int16_t x671 = INT16_MIN;
	int32_t x672 = -1;
	volatile int32_t t167 = -1;

    t167 = ((x669<=x670)!=(x671|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = -1;
	static int8_t x675 = INT8_MIN;
	int8_t x676 = 3;
	int32_t t168 = -12;

    t168 = ((x673<=x674)!=(x675|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = INT16_MIN;
	static int16_t x678 = INT16_MIN;
	int32_t x680 = -1;
	volatile int32_t t169 = -3;

    t169 = ((x677<=x678)!=(x679|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = 11U;
	int16_t x682 = 1;
	int8_t x683 = 1;
	static int8_t x684 = INT8_MAX;
	volatile int32_t t170 = 22;

    t170 = ((x681<=x682)!=(x683|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = 121164;
	static int64_t x686 = INT64_MIN;
	int16_t x687 = 2377;
	uint64_t x688 = 16485768277961273LLU;

    t171 = ((x685<=x686)!=(x687|x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MAX;
	int16_t x690 = INT16_MIN;
	uint8_t x692 = 67U;

    t172 = ((x689<=x690)!=(x691|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = -1;
	uint16_t x694 = 29714U;
	int64_t x695 = -20244363199026LL;
	int32_t x696 = INT32_MIN;
	int32_t t173 = 96731631;

    t173 = ((x693<=x694)!=(x695|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x699 = 6;
	static uint8_t x700 = UINT8_MAX;
	int32_t t174 = -660393;

    t174 = ((x697<=x698)!=(x699|x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	int8_t x702 = INT8_MIN;
	static uint16_t x703 = 5653U;
	int16_t x704 = INT16_MAX;
	int32_t t175 = 756940802;

    t175 = ((x701<=x702)!=(x703|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 1693087585991602231LL;
	static int32_t x707 = INT32_MIN;
	volatile int32_t t176 = 1774987;

    t176 = ((x705<=x706)!=(x707|x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x709 = INT8_MIN;
	volatile uint32_t x710 = UINT32_MAX;
	int64_t x711 = INT64_MAX;
	volatile uint16_t x712 = 317U;
	static volatile int32_t t177 = 1;

    t177 = ((x709<=x710)!=(x711|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x716 = -1;
	static int32_t t178 = 1;

    t178 = ((x713<=x714)!=(x715|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = -186;
	volatile int8_t x718 = INT8_MIN;
	uint32_t x719 = UINT32_MAX;
	static int8_t x720 = INT8_MAX;
	volatile int32_t t179 = 192388576;

    t179 = ((x717<=x718)!=(x719|x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x722 = UINT8_MAX;
	volatile int32_t x723 = INT32_MAX;
	uint64_t x724 = UINT64_MAX;
	int32_t t180 = 4177;

    t180 = ((x721<=x722)!=(x723|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	int64_t x727 = INT64_MIN;
	int16_t x728 = INT16_MIN;
	volatile int32_t t181 = 253;

    t181 = ((x725<=x726)!=(x727|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x729 = UINT16_MAX;
	int8_t x730 = -3;
	volatile int16_t x732 = -930;
	volatile int32_t t182 = 9458437;

    t182 = ((x729<=x730)!=(x731|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	static uint16_t x734 = 10406U;
	int32_t x735 = INT32_MAX;
	int16_t x736 = 6;

    t183 = ((x733<=x734)!=(x735|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	static uint64_t x738 = UINT64_MAX;
	static int64_t x739 = INT64_MAX;
	static volatile int64_t x740 = -1360898826LL;
	int32_t t184 = 285;

    t184 = ((x737<=x738)!=(x739|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 35U;
	static int16_t x742 = -1;
	int16_t x743 = INT16_MIN;
	int8_t x744 = 1;

    t185 = ((x741<=x742)!=(x743|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = 80U;
	int64_t x746 = 91LL;
	int64_t x747 = -3612138014571017313LL;
	int8_t x748 = INT8_MAX;
	int32_t t186 = 10;

    t186 = ((x745<=x746)!=(x747|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x750 = UINT32_MAX;
	static uint32_t x752 = 878545028U;
	volatile int32_t t187 = -2064785;

    t187 = ((x749<=x750)!=(x751|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x753 = INT32_MIN;
	int32_t x754 = -789;
	int32_t x755 = INT32_MAX;
	int64_t x756 = INT64_MAX;
	volatile int32_t t188 = -44696;

    t188 = ((x753<=x754)!=(x755|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -64497LL;
	int32_t x758 = INT32_MIN;
	uint8_t x760 = 0U;

    t189 = ((x757<=x758)!=(x759|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	volatile int32_t t190 = 447818;

    t190 = ((x761<=x762)!=(x763|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 2U;
	static uint8_t x766 = UINT8_MAX;
	uint32_t x768 = UINT32_MAX;
	static int32_t t191 = -2607658;

    t191 = ((x765<=x766)!=(x767|x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = 12U;
	static volatile int16_t x771 = -1;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = -725717118;

    t192 = ((x769<=x770)!=(x771|x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	uint32_t x776 = 15164007U;
	int32_t t193 = -15;

    t193 = ((x773<=x774)!=(x775|x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint8_t x779 = UINT8_MAX;
	int64_t x780 = -20818334865312417LL;
	volatile int32_t t194 = 243;

    t194 = ((x777<=x778)!=(x779|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -3;
	static int8_t x782 = INT8_MIN;
	int64_t x783 = -50804496LL;
	static uint8_t x784 = UINT8_MAX;
	int32_t t195 = -605070;

    t195 = ((x781<=x782)!=(x783|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x786 = INT32_MIN;
	int16_t x788 = -1;
	int32_t t196 = 0;

    t196 = ((x785<=x786)!=(x787|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MAX;
	int64_t x790 = -2462LL;
	uint8_t x791 = UINT8_MAX;
	static uint32_t x792 = UINT32_MAX;
	volatile int32_t t197 = -9;

    t197 = ((x789<=x790)!=(x791|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	uint32_t x795 = 15845U;
	int32_t x796 = INT32_MIN;

    t198 = ((x793<=x794)!=(x795|x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	static int8_t x798 = 4;
	volatile int16_t x799 = -1;
	uint64_t x800 = UINT64_MAX;

    t199 = ((x797<=x798)!=(x799|x800));

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

