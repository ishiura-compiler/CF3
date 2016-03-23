
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

static int8_t x1 = INT8_MIN;
uint8_t x13 = 35U;
static uint32_t x27 = 125608478U;
static int64_t x40 = -1LL;
int16_t x52 = 109;
int32_t x53 = -6534;
volatile int32_t x54 = -1134827;
int32_t x55 = -2;
volatile int64_t x56 = -1LL;
uint32_t x57 = 3U;
int32_t t13 = 20407;
int64_t x67 = INT64_MAX;
uint32_t x70 = 539169589U;
int8_t x75 = -26;
uint8_t x76 = 1U;
static int64_t x84 = -36219797401LL;
uint64_t x96 = 23425LLU;
int32_t t18 = -405;
volatile int32_t x109 = INT32_MIN;
int16_t x113 = INT16_MAX;
static int32_t t23 = -23;
int64_t x117 = 294035LL;
static int16_t x119 = -1;
int64_t x123 = INT64_MAX;
int8_t x125 = 6;
static int32_t t26 = 15;
static uint32_t x132 = UINT32_MAX;
int8_t x136 = INT8_MIN;
static int8_t x137 = INT8_MIN;
int32_t t29 = -745125;
static uint32_t x148 = UINT32_MAX;
uint64_t x151 = 26663424650LLU;
int32_t t32 = -432834;
int32_t x156 = INT32_MIN;
uint16_t x159 = UINT16_MAX;
int32_t x160 = -283;
int64_t x164 = 51LL;
uint8_t x167 = UINT8_MAX;
uint32_t x169 = UINT32_MAX;
int8_t x172 = -1;
static uint8_t x174 = UINT8_MAX;
int8_t x177 = INT8_MIN;
int16_t x182 = -3;
static int64_t x185 = 491862960923LL;
static int64_t x195 = INT64_MAX;
int32_t t43 = 0;
static int8_t x199 = INT8_MIN;
volatile int32_t t44 = 7021;
int64_t x204 = -1426800598142LL;
int16_t x207 = INT16_MIN;
volatile uint64_t x209 = 2437969474250966LLU;
static int8_t x214 = INT8_MAX;
uint8_t x228 = 48U;
volatile int32_t t51 = -4371105;
int64_t x233 = INT64_MIN;
volatile uint64_t x235 = 50LLU;
int64_t x238 = 2032929384LL;
volatile int64_t x261 = 3655207672505LL;
int32_t t61 = -75805190;
uint16_t x274 = UINT16_MAX;
uint8_t x278 = 0U;
int8_t x299 = 1;
volatile int32_t t67 = 432368;
uint64_t x304 = UINT64_MAX;
int8_t x312 = -1;
uint16_t x317 = UINT16_MAX;
int16_t x319 = 12703;
volatile int64_t x325 = INT64_MIN;
volatile int8_t x334 = -1;
static int8_t x335 = 11;
int8_t x336 = -1;
int32_t x337 = INT32_MAX;
uint32_t x340 = 0U;
int32_t t76 = 319;
int8_t x353 = 29;
static volatile uint8_t x354 = 5U;
static int32_t x356 = INT32_MIN;
uint16_t x357 = 5629U;
static int16_t x360 = INT16_MAX;
int32_t x363 = INT32_MAX;
int8_t x370 = INT8_MIN;
int16_t x375 = 1;
static volatile int32_t x376 = INT32_MAX;
uint32_t x377 = 215863U;
int32_t t85 = 546053;
static int8_t x389 = INT8_MIN;
int32_t x398 = 1027400881;
int32_t t89 = -245603439;
int8_t x401 = INT8_MIN;
int64_t x409 = INT64_MIN;
int64_t x411 = 529LL;
volatile int32_t x414 = -27;
uint64_t x415 = UINT64_MAX;
uint64_t x431 = UINT64_MAX;
int16_t x446 = 1;
int32_t x448 = -3868406;
int64_t x450 = INT64_MIN;
volatile int8_t x452 = INT8_MIN;
int16_t x453 = INT16_MIN;
static int64_t x455 = INT64_MIN;
static int16_t x456 = INT16_MAX;
static volatile int16_t x465 = INT16_MIN;
static int8_t x476 = -1;
volatile int32_t t106 = -113451;
int32_t t107 = 11596557;
uint32_t x505 = 8254U;
static int16_t x506 = 7051;
uint32_t x507 = UINT32_MAX;
volatile int32_t t113 = 51;
static uint8_t x512 = UINT8_MAX;
uint32_t x513 = UINT32_MAX;
uint64_t x520 = 8508870246LLU;
int8_t x530 = INT8_MIN;
volatile int32_t t118 = -60886980;
volatile uint32_t x534 = 64313270U;
uint16_t x538 = UINT16_MAX;
int16_t x539 = INT16_MIN;
uint8_t x548 = 2U;
int32_t t123 = -216;
static uint8_t x554 = UINT8_MAX;
volatile int32_t t126 = 50462237;
static volatile int32_t x573 = -1;
int32_t x582 = -1;
int8_t x583 = INT8_MIN;
int8_t x584 = INT8_MIN;
uint32_t x585 = 2U;
static int32_t t130 = 2526;
uint8_t x598 = 18U;
static int8_t x600 = -1;
int32_t x611 = -1;
int64_t x615 = INT64_MAX;
int32_t t136 = -44510561;
volatile int64_t x619 = INT64_MIN;
volatile int32_t t137 = 0;
uint8_t x621 = 8U;
volatile int64_t x628 = INT64_MIN;
uint64_t x648 = 204665LLU;
int64_t x653 = 22406834502642958LL;
int16_t x656 = -45;
volatile int32_t t145 = 517;
volatile uint16_t x665 = 533U;
static uint16_t x667 = 62U;
uint32_t x673 = 0U;
volatile int32_t t149 = -4671;
static int64_t x683 = 3103608131334362475LL;
int16_t x685 = INT16_MIN;
int8_t x686 = -21;
int16_t x689 = INT16_MIN;
int32_t x693 = -8827;
int64_t x696 = -90121094LL;
volatile uint8_t x700 = 110U;
uint32_t x701 = 156U;
int8_t x708 = -3;
static int32_t t158 = -1669460;
uint8_t x717 = UINT8_MAX;
volatile uint16_t x721 = UINT16_MAX;
volatile uint32_t x741 = 7347U;
int32_t t166 = -3878826;
static uint32_t x767 = UINT32_MAX;
uint64_t x770 = UINT64_MAX;
uint8_t x776 = 1U;
volatile int16_t x797 = INT16_MAX;
int64_t x800 = -1051958793525LL;
uint8_t x805 = 74U;
uint8_t x807 = 31U;
static int64_t x808 = INT64_MAX;
uint16_t x809 = 0U;
volatile int32_t t179 = -90866103;
uint8_t x822 = 45U;
volatile int32_t t182 = 189877091;
volatile int8_t x831 = INT8_MIN;
int64_t x832 = 2312733543050035LL;
int32_t x834 = -1;
volatile int32_t t184 = -1;
uint8_t x837 = 1U;
int16_t x847 = INT16_MIN;
volatile uint16_t x852 = 944U;
int64_t x856 = 459229909984753239LL;
int64_t x860 = -58096138690925LL;
uint16_t x862 = UINT16_MAX;
int64_t x868 = -9236LL;
int32_t t192 = -48257;
static volatile uint32_t x869 = 152430923U;
int32_t t195 = -243552;
volatile int32_t x882 = 0;
volatile int64_t x883 = INT64_MIN;
static int16_t x893 = INT16_MIN;


void f0(void) {
    	int64_t x2 = INT64_MAX;
	int64_t x3 = -1LL;
	static volatile uint64_t x4 = UINT64_MAX;
	static int32_t t0 = -36564;

    t0 = ((x1!=(x2+x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 7605;
	int8_t x6 = INT8_MIN;
	static volatile int64_t x7 = -1LL;
	uint16_t x8 = 28662U;
	int32_t t1 = 1;

    t1 = ((x5!=(x6+x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 5678U;
	uint32_t x10 = 9607U;
	int16_t x11 = -1;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = 3548;

    t2 = ((x9!=(x10+x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x14 = 0U;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -757;
	static int32_t t3 = 6456;

    t3 = ((x13!=(x14+x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = INT16_MIN;
	static int64_t x23 = INT64_MAX;
	static volatile int32_t x24 = -1;
	volatile int32_t t4 = -4429184;

    t4 = ((x21!=(x22+x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x25 = -1;
	int32_t x26 = -1;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 4034;

    t5 = ((x25!=(x26+x27))==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = 345737;
	volatile uint16_t x34 = 796U;
	static int32_t x35 = INT32_MIN;
	uint8_t x36 = 0U;
	int32_t t6 = -274617863;

    t6 = ((x33!=(x34+x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 4U;
	static uint8_t x38 = 2U;
	static uint8_t x39 = 3U;
	volatile int32_t t7 = 23592;

    t7 = ((x37!=(x38+x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -1;
	uint32_t x42 = 1U;
	uint32_t x43 = 921196839U;
	int32_t x44 = INT32_MIN;
	int32_t t8 = 922389150;

    t8 = ((x41!=(x42+x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MAX;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t9 = -9822;

    t9 = ((x45!=(x46+x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MIN;
	uint32_t x50 = 2054125U;
	uint8_t x51 = 22U;
	volatile int32_t t10 = 18521214;

    t10 = ((x49!=(x50+x51))==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t t11 = 1888;

    t11 = ((x53!=(x54+x55))==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x58 = 13U;
	int16_t x59 = -6132;
	volatile int8_t x60 = INT8_MIN;
	static int32_t t12 = 53882160;

    t12 = ((x57!=(x58+x59))==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = -881;
	int8_t x62 = INT8_MIN;
	int16_t x63 = -12;
	static int8_t x64 = -1;

    t13 = ((x61!=(x62+x63))==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x65 = 155750063075LLU;
	int32_t x66 = -612;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t14 = -3;

    t14 = ((x65!=(x66+x67))==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x69 = 102U;
	static int32_t x71 = -1887322;
	int32_t x72 = INT32_MIN;
	int32_t t15 = -96931614;

    t15 = ((x69!=(x70+x71))==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1LL;
	volatile uint32_t x74 = 5154255U;
	int32_t t16 = -2972182;

    t16 = ((x73!=(x74+x75))==x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	volatile int16_t x82 = INT16_MIN;
	uint64_t x83 = 0LLU;
	int32_t t17 = 1595911;

    t17 = ((x81!=(x82+x83))==x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x93 = INT16_MIN;
	static int64_t x94 = 363LL;
	static volatile int32_t x95 = INT32_MIN;

    t18 = ((x93!=(x94+x95))==x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 14063386973102LLU;
	static uint64_t x100 = UINT64_MAX;
	volatile int32_t t19 = -768;

    t19 = ((x97!=(x98+x99))==x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x101 = INT16_MIN;
	static int8_t x102 = INT8_MAX;
	int8_t x103 = 2;
	int16_t x104 = -6084;
	volatile int32_t t20 = -1845712;

    t20 = ((x101!=(x102+x103))==x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = 0U;
	static int64_t x106 = INT64_MIN;
	uint32_t x107 = 3U;
	static int8_t x108 = -4;
	static int32_t t21 = -1989;

    t21 = ((x105!=(x106+x107))==x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x110 = -330;
	uint8_t x111 = 6U;
	volatile uint32_t x112 = 29U;
	int32_t t22 = -1;

    t22 = ((x109!=(x110+x111))==x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x114 = INT16_MAX;
	int64_t x115 = -1LL;
	volatile int64_t x116 = INT64_MAX;

    t23 = ((x113!=(x114+x115))==x116);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x118 = -18LL;
	uint32_t x120 = UINT32_MAX;
	int32_t t24 = 19094;

    t24 = ((x117!=(x118+x119))==x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	uint8_t x124 = 95U;
	int32_t t25 = 775954;

    t25 = ((x121!=(x122+x123))==x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x126 = INT32_MIN;
	static int64_t x127 = -964055539414LL;
	int32_t x128 = 0;

    t26 = ((x125!=(x126+x127))==x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = 43U;
	int16_t x130 = 263;
	int8_t x131 = 1;
	volatile int32_t t27 = -974437248;

    t27 = ((x129!=(x130+x131))==x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x133 = 77162008298LLU;
	uint8_t x134 = UINT8_MAX;
	static uint64_t x135 = UINT64_MAX;
	static int32_t t28 = -1484610;

    t28 = ((x133!=(x134+x135))==x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x138 = -1LL;
	int16_t x139 = 11;
	static uint64_t x140 = 3LLU;

    t29 = ((x137!=(x138+x139))==x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = -92;
	uint64_t x144 = UINT64_MAX;
	static int32_t t30 = -209740;

    t30 = ((x141!=(x142+x143))==x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = INT8_MIN;
	int8_t x146 = 0;
	int16_t x147 = INT16_MIN;
	int32_t t31 = -98351103;

    t31 = ((x145!=(x146+x147))==x148);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = 3935;
	volatile int16_t x150 = INT16_MIN;
	static uint8_t x152 = UINT8_MAX;

    t32 = ((x149!=(x150+x151))==x152);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x153 = 1;
	static int32_t x154 = INT32_MIN;
	volatile uint16_t x155 = 1U;
	volatile int32_t t33 = -61292412;

    t33 = ((x153!=(x154+x155))==x156);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MIN;
	int32_t t34 = 125;

    t34 = ((x157!=(x158+x159))==x160);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x161 = INT16_MAX;
	static int32_t x162 = -1;
	uint32_t x163 = 580650560U;
	static int32_t t35 = -492241;

    t35 = ((x161!=(x162+x163))==x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = INT8_MAX;
	static int64_t x166 = INT64_MIN;
	int16_t x168 = 265;
	int32_t t36 = -15;

    t36 = ((x165!=(x166+x167))==x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x170 = 1;
	int16_t x171 = 2;
	volatile int32_t t37 = 110361;

    t37 = ((x169!=(x170+x171))==x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = 1437;
	volatile int32_t x175 = INT32_MIN;
	uint8_t x176 = 1U;
	int32_t t38 = 653170;

    t38 = ((x173!=(x174+x175))==x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x178 = -77477502LL;
	static int16_t x179 = 1;
	static int32_t x180 = INT32_MIN;
	int32_t t39 = 546174375;

    t39 = ((x177!=(x178+x179))==x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = INT64_MAX;
	uint16_t x183 = UINT16_MAX;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t40 = 1;

    t40 = ((x181!=(x182+x183))==x184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x186 = INT32_MIN;
	uint64_t x187 = 1351LLU;
	static uint8_t x188 = 11U;
	static int32_t t41 = 451856633;

    t41 = ((x185!=(x186+x187))==x188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MAX;
	static int16_t x190 = -1;
	int32_t x191 = INT32_MAX;
	static int16_t x192 = -1;
	int32_t t42 = 6545;

    t42 = ((x189!=(x190+x191))==x192);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x193 = -1;
	uint64_t x194 = 1501LLU;
	volatile uint8_t x196 = 53U;

    t43 = ((x193!=(x194+x195))==x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MAX;
	static int16_t x198 = INT16_MAX;
	static volatile int16_t x200 = 1;

    t44 = ((x197!=(x198+x199))==x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x201 = UINT32_MAX;
	int64_t x202 = -1LL;
	uint64_t x203 = 9747328LLU;
	volatile int32_t t45 = 11992635;

    t45 = ((x201!=(x202+x203))==x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x205 = 520U;
	int16_t x206 = INT16_MAX;
	uint32_t x208 = 67U;
	static volatile int32_t t46 = 50738142;

    t46 = ((x205!=(x206+x207))==x208);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x210 = INT8_MAX;
	int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t47 = -616389121;

    t47 = ((x209!=(x210+x211))==x212);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x213 = 1;
	uint8_t x215 = UINT8_MAX;
	volatile int16_t x216 = -1;
	static volatile int32_t t48 = 12;

    t48 = ((x213!=(x214+x215))==x216);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x217 = INT8_MIN;
	volatile int32_t x218 = -1;
	static int32_t x219 = -233591;
	uint32_t x220 = UINT32_MAX;
	static int32_t t49 = 1;

    t49 = ((x217!=(x218+x219))==x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x221 = UINT64_MAX;
	uint8_t x222 = UINT8_MAX;
	uint32_t x223 = 1194224591U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t50 = -15968;

    t50 = ((x221!=(x222+x223))==x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x225 = INT32_MIN;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 55953LLU;

    t51 = ((x225!=(x226+x227))==x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = -20233908;
	int32_t x230 = INT32_MAX;
	uint32_t x231 = 11334608U;
	static int64_t x232 = 8070184368330LL;
	volatile int32_t t52 = -162;

    t52 = ((x229!=(x230+x231))==x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x234 = 4U;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t53 = -537463561;

    t53 = ((x233!=(x234+x235))==x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x237 = 23;
	volatile int16_t x239 = INT16_MAX;
	static volatile uint8_t x240 = UINT8_MAX;
	int32_t t54 = 2924;

    t54 = ((x237!=(x238+x239))==x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x241 = 1618010LL;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 3121U;
	uint16_t x244 = 632U;
	static int32_t t55 = 413;

    t55 = ((x241!=(x242+x243))==x244);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x245 = 15795U;
	volatile int16_t x246 = INT16_MIN;
	static uint16_t x247 = 385U;
	int16_t x248 = -1;
	int32_t t56 = -20121887;

    t56 = ((x245!=(x246+x247))==x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x249 = 19;
	int8_t x250 = INT8_MIN;
	static int16_t x251 = INT16_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t57 = -5080;

    t57 = ((x249!=(x250+x251))==x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x257 = INT32_MAX;
	int64_t x258 = 44376408531422LL;
	int16_t x259 = INT16_MIN;
	volatile int8_t x260 = -10;
	int32_t t58 = -91;

    t58 = ((x257!=(x258+x259))==x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x262 = 337234104542LL;
	uint64_t x263 = UINT64_MAX;
	volatile int64_t x264 = -12747031LL;
	volatile int32_t t59 = 636644716;

    t59 = ((x261!=(x262+x263))==x264);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = -1LL;
	uint32_t x266 = 200U;
	int32_t x267 = -3;
	int64_t x268 = -946320958045856748LL;
	volatile int32_t t60 = -62;

    t60 = ((x265!=(x266+x267))==x268);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x269 = 2U;
	volatile int64_t x270 = INT64_MIN;
	static uint64_t x271 = 5396075128LLU;
	int8_t x272 = -1;

    t61 = ((x269!=(x270+x271))==x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = 14594LL;
	int8_t x275 = -2;
	static volatile uint64_t x276 = 553704353003960600LLU;
	volatile int32_t t62 = -2024088;

    t62 = ((x273!=(x274+x275))==x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = -1;
	int8_t x279 = INT8_MIN;
	static int64_t x280 = INT64_MIN;
	static volatile int32_t t63 = 2893;

    t63 = ((x277!=(x278+x279))==x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x285 = 199504288U;
	int32_t x286 = -1;
	int8_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	int32_t t64 = 12;

    t64 = ((x285!=(x286+x287))==x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x289 = INT8_MAX;
	static int16_t x290 = -30;
	int64_t x291 = INT64_MAX;
	uint16_t x292 = 10685U;
	int32_t t65 = 32;

    t65 = ((x289!=(x290+x291))==x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -1;
	int32_t x295 = -291456;
	volatile int32_t x296 = 489503;
	int32_t t66 = 94167;

    t66 = ((x293!=(x294+x295))==x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x297 = -3052;
	volatile int32_t x298 = -1;
	uint8_t x300 = 84U;

    t67 = ((x297!=(x298+x299))==x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	uint8_t x303 = 59U;
	int32_t t68 = 28;

    t68 = ((x301!=(x302+x303))==x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = INT32_MIN;
	static uint64_t x306 = UINT64_MAX;
	static int8_t x307 = INT8_MAX;
	int16_t x308 = -1;
	int32_t t69 = -8123943;

    t69 = ((x305!=(x306+x307))==x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x309 = INT32_MIN;
	static volatile int64_t x310 = INT64_MIN;
	uint16_t x311 = 345U;
	volatile int32_t t70 = 2169918;

    t70 = ((x309!=(x310+x311))==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x313 = 3U;
	uint32_t x314 = 80U;
	uint8_t x315 = 3U;
	int64_t x316 = INT64_MIN;
	volatile int32_t t71 = 32252144;

    t71 = ((x313!=(x314+x315))==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x318 = 0U;
	int8_t x320 = INT8_MIN;
	int32_t t72 = 164183890;

    t72 = ((x317!=(x318+x319))==x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -1056921639692LL;
	uint32_t x322 = 903055867U;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t73 = 364;

    t73 = ((x321!=(x322+x323))==x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x326 = 223U;
	uint64_t x327 = 8269494593725735LLU;
	volatile uint32_t x328 = UINT32_MAX;
	volatile int32_t t74 = 171096574;

    t74 = ((x325!=(x326+x327))==x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x333 = UINT64_MAX;
	volatile int32_t t75 = 10802;

    t75 = ((x333!=(x334+x335))==x336);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x338 = 104835LLU;
	int32_t x339 = INT32_MAX;

    t76 = ((x337!=(x338+x339))==x340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x345 = INT64_MIN;
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 111U;
	static volatile int8_t x348 = INT8_MAX;
	int32_t t77 = -108834348;

    t77 = ((x345!=(x346+x347))==x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	static volatile int16_t x351 = -4;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t78 = 117;

    t78 = ((x349!=(x350+x351))==x352);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x355 = 24U;
	volatile int32_t t79 = 2157297;

    t79 = ((x353!=(x354+x355))==x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x358 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	int32_t t80 = 1754;

    t80 = ((x357!=(x358+x359))==x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x361 = -1036;
	int32_t x362 = INT32_MIN;
	static int64_t x364 = INT64_MIN;
	volatile int32_t t81 = -675477321;

    t81 = ((x361!=(x362+x363))==x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x365 = INT8_MAX;
	int8_t x366 = INT8_MIN;
	volatile int8_t x367 = -1;
	volatile int8_t x368 = INT8_MAX;
	int32_t t82 = -20;

    t82 = ((x365!=(x366+x367))==x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x369 = -2;
	volatile int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	static int32_t t83 = -804897190;

    t83 = ((x369!=(x370+x371))==x372);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -1;
	volatile int32_t t84 = -30;

    t84 = ((x373!=(x374+x375))==x376);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x378 = 39U;
	uint64_t x379 = 1146270313342309LLU;
	static volatile int64_t x380 = -371LL;

    t85 = ((x377!=(x378+x379))==x380);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x381 = INT64_MAX;
	int16_t x382 = -1;
	int32_t x383 = 50;
	int32_t x384 = -35794;
	static int32_t t86 = -9636653;

    t86 = ((x381!=(x382+x383))==x384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x390 = 27LL;
	int16_t x391 = INT16_MIN;
	static int16_t x392 = -199;
	int32_t t87 = -10799;

    t87 = ((x389!=(x390+x391))==x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x393 = -1;
	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int64_t x396 = INT64_MIN;
	int32_t t88 = 1;

    t88 = ((x393!=(x394+x395))==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x397 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	uint32_t x400 = 408U;

    t89 = ((x397!=(x398+x399))==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x402 = 1554210LLU;
	int64_t x403 = 12889LL;
	int64_t x404 = INT64_MAX;
	volatile int32_t t90 = 296852676;

    t90 = ((x401!=(x402+x403))==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x405 = INT16_MIN;
	volatile int16_t x406 = INT16_MAX;
	volatile int16_t x407 = INT16_MAX;
	uint8_t x408 = 72U;
	int32_t t91 = -948971692;

    t91 = ((x405!=(x406+x407))==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x410 = INT8_MIN;
	static uint32_t x412 = UINT32_MAX;
	int32_t t92 = -39811;

    t92 = ((x409!=(x410+x411))==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x413 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t93 = 2019;

    t93 = ((x413!=(x414+x415))==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x417 = -1;
	static volatile int8_t x418 = 50;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MAX;
	int32_t t94 = 1838255;

    t94 = ((x417!=(x418+x419))==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x425 = -1;
	int16_t x426 = INT16_MIN;
	static int32_t x427 = -14313749;
	uint32_t x428 = 1927U;
	int32_t t95 = -30573;

    t95 = ((x425!=(x426+x427))==x428);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x430 = 0;
	static uint16_t x432 = 2U;
	volatile int32_t t96 = 986;

    t96 = ((x429!=(x430+x431))==x432);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x433 = 28U;
	static volatile int32_t x434 = -1;
	int32_t x435 = INT32_MAX;
	static volatile int16_t x436 = INT16_MIN;
	volatile int32_t t97 = 56;

    t97 = ((x433!=(x434+x435))==x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MAX;
	static volatile int32_t x439 = INT32_MIN;
	uint16_t x440 = 5012U;
	volatile int32_t t98 = -348;

    t98 = ((x437!=(x438+x439))==x440);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x441 = INT32_MIN;
	int8_t x442 = -1;
	uint8_t x443 = 62U;
	static int64_t x444 = INT64_MIN;
	static volatile int32_t t99 = 950421874;

    t99 = ((x441!=(x442+x443))==x444);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x445 = 355U;
	static int32_t x447 = -17751;
	static volatile int32_t t100 = -905122944;

    t100 = ((x445!=(x446+x447))==x448);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x449 = UINT32_MAX;
	uint8_t x451 = 6U;
	static int32_t t101 = -44956625;

    t101 = ((x449!=(x450+x451))==x452);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x454 = 1342;
	volatile int32_t t102 = -2143;

    t102 = ((x453!=(x454+x455))==x456);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x457 = -7;
	volatile int64_t x458 = -1LL;
	uint16_t x459 = 13U;
	static int16_t x460 = INT16_MIN;
	int32_t t103 = -6;

    t103 = ((x457!=(x458+x459))==x460);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x466 = -1;
	static int16_t x467 = -1;
	uint64_t x468 = UINT64_MAX;
	int32_t t104 = -4;

    t104 = ((x465!=(x466+x467))==x468);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x469 = INT64_MIN;
	volatile int64_t x470 = -55173LL;
	int32_t x471 = INT32_MIN;
	static int32_t x472 = INT32_MIN;
	volatile int32_t t105 = 1605216;

    t105 = ((x469!=(x470+x471))==x472);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x473 = -1000;
	uint32_t x474 = UINT32_MAX;
	int32_t x475 = INT32_MIN;

    t106 = ((x473!=(x474+x475))==x476);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = 1780256;
	static uint8_t x478 = 18U;
	uint32_t x479 = 0U;
	static int64_t x480 = 408590525225295785LL;

    t107 = ((x477!=(x478+x479))==x480);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x481 = 22U;
	uint8_t x482 = 3U;
	uint32_t x483 = 13231U;
	static uint8_t x484 = 1U;
	volatile int32_t t108 = -3;

    t108 = ((x481!=(x482+x483))==x484);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	static uint8_t x490 = 1U;
	static uint8_t x491 = 56U;
	uint16_t x492 = 5U;
	volatile int32_t t109 = -152974;

    t109 = ((x489!=(x490+x491))==x492);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x493 = INT64_MIN;
	volatile uint16_t x494 = 21645U;
	volatile int8_t x495 = -54;
	int64_t x496 = -1LL;
	volatile int32_t t110 = -5;

    t110 = ((x493!=(x494+x495))==x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x497 = 55U;
	uint16_t x498 = UINT16_MAX;
	static int16_t x499 = 652;
	static int64_t x500 = INT64_MAX;
	int32_t t111 = -986542;

    t111 = ((x497!=(x498+x499))==x500);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x501 = INT16_MIN;
	int16_t x502 = INT16_MAX;
	int16_t x503 = INT16_MAX;
	int64_t x504 = -1LL;
	static volatile int32_t t112 = 3638879;

    t112 = ((x501!=(x502+x503))==x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x508 = 16067493;

    t113 = ((x505!=(x506+x507))==x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = -714;
	volatile int64_t x510 = 409LL;
	static volatile int32_t x511 = INT32_MIN;
	static int32_t t114 = -802355369;

    t114 = ((x509!=(x510+x511))==x512);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x514 = INT64_MIN;
	volatile uint16_t x515 = 117U;
	int16_t x516 = INT16_MAX;
	static volatile int32_t t115 = 1;

    t115 = ((x513!=(x514+x515))==x516);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x517 = -289021149297524LL;
	uint16_t x518 = 6807U;
	int8_t x519 = 0;
	volatile int32_t t116 = 63271528;

    t116 = ((x517!=(x518+x519))==x520);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x525 = -1LL;
	uint8_t x526 = 42U;
	static uint32_t x527 = 24445196U;
	int32_t x528 = INT32_MAX;
	int32_t t117 = 431963971;

    t117 = ((x525!=(x526+x527))==x528);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x529 = INT64_MIN;
	uint8_t x531 = 0U;
	uint32_t x532 = 6769U;

    t118 = ((x529!=(x530+x531))==x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x533 = 37221U;
	volatile int64_t x535 = INT64_MIN;
	uint32_t x536 = UINT32_MAX;
	static volatile int32_t t119 = 37;

    t119 = ((x533!=(x534+x535))==x536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x537 = 152U;
	volatile uint16_t x540 = UINT16_MAX;
	volatile int32_t t120 = -585;

    t120 = ((x537!=(x538+x539))==x540);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x541 = UINT16_MAX;
	static int64_t x542 = 56720508685071811LL;
	static int32_t x543 = INT32_MAX;
	uint8_t x544 = 1U;
	volatile int32_t t121 = -206177567;

    t121 = ((x541!=(x542+x543))==x544);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x545 = 1007;
	int16_t x546 = INT16_MIN;
	int64_t x547 = -1LL;
	int32_t t122 = -143527;

    t122 = ((x545!=(x546+x547))==x548);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x549 = -1LL;
	volatile int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MAX;
	int32_t x552 = 260487610;

    t123 = ((x549!=(x550+x551))==x552);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x553 = 0U;
	static uint32_t x555 = 1506U;
	static uint32_t x556 = 7U;
	volatile int32_t t124 = 5;

    t124 = ((x553!=(x554+x555))==x556);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x557 = -30;
	int64_t x558 = 16360567LL;
	uint32_t x559 = 120276U;
	int32_t x560 = -1;
	int32_t t125 = 7976686;

    t125 = ((x557!=(x558+x559))==x560);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x561 = INT16_MIN;
	uint16_t x562 = 1U;
	int8_t x563 = 4;
	uint32_t x564 = 177U;

    t126 = ((x561!=(x562+x563))==x564);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x565 = INT64_MIN;
	int64_t x566 = INT64_MIN;
	static volatile uint64_t x567 = UINT64_MAX;
	int64_t x568 = INT64_MIN;
	volatile int32_t t127 = 367991;

    t127 = ((x565!=(x566+x567))==x568);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x574 = 26U;
	int16_t x575 = 916;
	volatile int8_t x576 = -1;
	volatile int32_t t128 = 1;

    t128 = ((x573!=(x574+x575))==x576);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x581 = 109;
	volatile int32_t t129 = -230558;

    t129 = ((x581!=(x582+x583))==x584);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x586 = INT32_MIN;
	uint8_t x587 = 0U;
	static volatile int8_t x588 = 1;

    t130 = ((x585!=(x586+x587))==x588);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x593 = -1;
	static uint8_t x594 = 29U;
	int16_t x595 = INT16_MAX;
	int16_t x596 = -5;
	static int32_t t131 = -1615;

    t131 = ((x593!=(x594+x595))==x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x597 = INT64_MAX;
	int8_t x599 = -8;
	volatile int32_t t132 = -279483615;

    t132 = ((x597!=(x598+x599))==x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x601 = UINT32_MAX;
	static volatile uint64_t x602 = 19224LLU;
	uint8_t x603 = UINT8_MAX;
	volatile uint32_t x604 = 601717U;
	int32_t t133 = 1;

    t133 = ((x601!=(x602+x603))==x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x605 = INT16_MIN;
	static uint64_t x606 = 33453506175267691LLU;
	volatile uint64_t x607 = 800LLU;
	uint64_t x608 = 6178436519493257002LLU;
	volatile int32_t t134 = 36763006;

    t134 = ((x605!=(x606+x607))==x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x609 = INT8_MAX;
	static uint32_t x610 = 17213625U;
	uint16_t x612 = 933U;
	volatile int32_t t135 = -6997503;

    t135 = ((x609!=(x610+x611))==x612);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x613 = INT32_MAX;
	static int16_t x614 = INT16_MIN;
	uint32_t x616 = 0U;

    t136 = ((x613!=(x614+x615))==x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x617 = -1LL;
	static volatile uint64_t x618 = 2529LLU;
	uint64_t x620 = 5021LLU;

    t137 = ((x617!=(x618+x619))==x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x622 = 1002U;
	uint8_t x623 = 37U;
	int64_t x624 = -1LL;
	int32_t t138 = -2015;

    t138 = ((x621!=(x622+x623))==x624);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x625 = INT64_MIN;
	int16_t x626 = INT16_MAX;
	volatile int32_t x627 = INT32_MIN;
	static volatile int32_t t139 = -33393292;

    t139 = ((x625!=(x626+x627))==x628);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x633 = 4;
	static int64_t x634 = 5532966958LL;
	int8_t x635 = 6;
	int8_t x636 = INT8_MIN;
	volatile int32_t t140 = 1;

    t140 = ((x633!=(x634+x635))==x636);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x637 = INT16_MIN;
	static uint8_t x638 = UINT8_MAX;
	int16_t x639 = -1;
	volatile int8_t x640 = INT8_MIN;
	int32_t t141 = -409;

    t141 = ((x637!=(x638+x639))==x640);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x641 = 0U;
	static int64_t x642 = -1LL;
	int8_t x643 = -25;
	int64_t x644 = -1LL;
	static volatile int32_t t142 = 1;

    t142 = ((x641!=(x642+x643))==x644);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x645 = -1;
	volatile int32_t x646 = INT32_MIN;
	uint8_t x647 = UINT8_MAX;
	int32_t t143 = 66384;

    t143 = ((x645!=(x646+x647))==x648);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x649 = UINT32_MAX;
	uint32_t x650 = 22106U;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = UINT16_MAX;
	int32_t t144 = 1;

    t144 = ((x649!=(x650+x651))==x652);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x654 = -1LL;
	static int16_t x655 = 706;

    t145 = ((x653!=(x654+x655))==x656);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x657 = -16;
	static uint8_t x658 = 74U;
	int64_t x659 = INT64_MIN;
	int8_t x660 = 46;
	static int32_t t146 = -3201521;

    t146 = ((x657!=(x658+x659))==x660);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x661 = INT64_MIN;
	uint64_t x662 = 1424LLU;
	uint16_t x663 = 0U;
	volatile int64_t x664 = INT64_MIN;
	int32_t t147 = 41;

    t147 = ((x661!=(x662+x663))==x664);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x666 = -1;
	uint8_t x668 = 9U;
	volatile int32_t t148 = -14502959;

    t148 = ((x665!=(x666+x667))==x668);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x674 = -919;
	static int16_t x675 = INT16_MIN;
	volatile int8_t x676 = -1;

    t149 = ((x673!=(x674+x675))==x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x677 = 43U;
	volatile int8_t x678 = INT8_MAX;
	static uint64_t x679 = 1019LLU;
	static volatile int32_t x680 = -1;
	volatile int32_t t150 = 19387;

    t150 = ((x677!=(x678+x679))==x680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x681 = -1;
	static int16_t x682 = -1;
	static int8_t x684 = INT8_MAX;
	static int32_t t151 = -40864;

    t151 = ((x681!=(x682+x683))==x684);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x687 = INT16_MAX;
	uint8_t x688 = UINT8_MAX;
	int32_t t152 = 464143632;

    t152 = ((x685!=(x686+x687))==x688);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x690 = 226U;
	uint8_t x691 = 17U;
	int16_t x692 = -219;
	volatile int32_t t153 = 3281819;

    t153 = ((x689!=(x690+x691))==x692);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x694 = -4873066LL;
	uint8_t x695 = UINT8_MAX;
	int32_t t154 = 143589;

    t154 = ((x693!=(x694+x695))==x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x698 = INT32_MIN;
	volatile uint32_t x699 = 51420575U;
	static int32_t t155 = 1655313;

    t155 = ((x697!=(x698+x699))==x700);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x702 = -4;
	int32_t x703 = -110;
	int8_t x704 = -13;
	volatile int32_t t156 = -190;

    t156 = ((x701!=(x702+x703))==x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x705 = UINT64_MAX;
	uint64_t x706 = 15568915985782532LLU;
	int16_t x707 = INT16_MIN;
	volatile int32_t t157 = 2397;

    t157 = ((x705!=(x706+x707))==x708);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x713 = INT64_MIN;
	int64_t x714 = -1LL;
	uint16_t x715 = 0U;
	uint64_t x716 = 6498965755033227961LLU;

    t158 = ((x713!=(x714+x715))==x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x718 = -14;
	uint16_t x719 = UINT16_MAX;
	int64_t x720 = INT64_MIN;
	static volatile int32_t t159 = 2317461;

    t159 = ((x717!=(x718+x719))==x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x722 = 791806237052LLU;
	int64_t x723 = 40945832281LL;
	volatile uint16_t x724 = UINT16_MAX;
	int32_t t160 = -18377975;

    t160 = ((x721!=(x722+x723))==x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x725 = 5076;
	static int64_t x726 = 162489679269859045LL;
	uint32_t x727 = 2U;
	int64_t x728 = -16183722LL;
	static volatile int32_t t161 = 412;

    t161 = ((x725!=(x726+x727))==x728);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x729 = -60;
	static int16_t x730 = INT16_MAX;
	uint64_t x731 = 2230807593375305LLU;
	volatile int8_t x732 = INT8_MIN;
	int32_t t162 = 782;

    t162 = ((x729!=(x730+x731))==x732);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x733 = INT32_MAX;
	uint16_t x734 = UINT16_MAX;
	int64_t x735 = INT64_MIN;
	int32_t x736 = INT32_MAX;
	int32_t t163 = 3;

    t163 = ((x733!=(x734+x735))==x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x742 = UINT32_MAX;
	uint64_t x743 = 551875LLU;
	uint64_t x744 = UINT64_MAX;
	int32_t t164 = -1;

    t164 = ((x741!=(x742+x743))==x744);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x745 = 1U;
	static uint8_t x746 = UINT8_MAX;
	int8_t x747 = 5;
	volatile int16_t x748 = -1;
	volatile int32_t t165 = -53;

    t165 = ((x745!=(x746+x747))==x748);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x749 = INT8_MAX;
	static int16_t x750 = -19;
	uint8_t x751 = 24U;
	static int16_t x752 = 1;

    t166 = ((x749!=(x750+x751))==x752);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x753 = -1;
	int32_t x754 = 694;
	static int8_t x755 = 40;
	int16_t x756 = INT16_MIN;
	volatile int32_t t167 = -80;

    t167 = ((x753!=(x754+x755))==x756);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x757 = 2287997274334832519LLU;
	uint64_t x758 = 6LLU;
	static int64_t x759 = INT64_MAX;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t168 = 383631146;

    t168 = ((x757!=(x758+x759))==x760);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = 12038537582891LL;
	static volatile int16_t x768 = INT16_MAX;
	static int32_t t169 = -6;

    t169 = ((x765!=(x766+x767))==x768);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x769 = 33U;
	uint32_t x771 = 5864408U;
	int8_t x772 = 0;
	int32_t t170 = 54;

    t170 = ((x769!=(x770+x771))==x772);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x773 = 0;
	int32_t x774 = 112;
	static uint16_t x775 = 0U;
	int32_t t171 = 434;

    t171 = ((x773!=(x774+x775))==x776);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x777 = -1;
	int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	uint16_t x780 = UINT16_MAX;
	int32_t t172 = -32745;

    t172 = ((x777!=(x778+x779))==x780);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x781 = UINT8_MAX;
	int64_t x782 = INT64_MIN;
	uint32_t x783 = 371992U;
	volatile uint64_t x784 = UINT64_MAX;
	int32_t t173 = 57507;

    t173 = ((x781!=(x782+x783))==x784);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x785 = INT64_MIN;
	static int16_t x786 = INT16_MAX;
	volatile uint8_t x787 = UINT8_MAX;
	int32_t x788 = 6;
	volatile int32_t t174 = 17446610;

    t174 = ((x785!=(x786+x787))==x788);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x798 = 245LLU;
	volatile uint16_t x799 = UINT16_MAX;
	int32_t t175 = -1009795839;

    t175 = ((x797!=(x798+x799))==x800);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x801 = UINT8_MAX;
	int16_t x802 = 39;
	int32_t x803 = INT32_MIN;
	volatile int32_t x804 = INT32_MIN;
	int32_t t176 = 1080985;

    t176 = ((x801!=(x802+x803))==x804);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x806 = INT16_MIN;
	int32_t t177 = -6263672;

    t177 = ((x805!=(x806+x807))==x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x810 = -1;
	uint64_t x811 = 87LLU;
	int16_t x812 = INT16_MIN;
	int32_t t178 = 1;

    t178 = ((x809!=(x810+x811))==x812);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	int32_t x814 = 1;
	static int8_t x815 = INT8_MIN;
	uint32_t x816 = 993U;

    t179 = ((x813!=(x814+x815))==x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x817 = INT64_MIN;
	int32_t x818 = -154105159;
	uint16_t x819 = UINT16_MAX;
	int32_t x820 = INT32_MAX;
	static int32_t t180 = -3443284;

    t180 = ((x817!=(x818+x819))==x820);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x821 = UINT16_MAX;
	volatile uint8_t x823 = UINT8_MAX;
	static volatile uint64_t x824 = 990LLU;
	volatile int32_t t181 = -48356180;

    t181 = ((x821!=(x822+x823))==x824);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x825 = INT16_MIN;
	static int8_t x826 = -2;
	int8_t x827 = INT8_MAX;
	volatile uint16_t x828 = UINT16_MAX;

    t182 = ((x825!=(x826+x827))==x828);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x829 = INT64_MIN;
	volatile uint16_t x830 = 3561U;
	volatile int32_t t183 = 5874624;

    t183 = ((x829!=(x830+x831))==x832);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x833 = -1LL;
	static uint8_t x835 = UINT8_MAX;
	static int16_t x836 = -1;

    t184 = ((x833!=(x834+x835))==x836);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x838 = INT8_MIN;
	uint16_t x839 = UINT16_MAX;
	int16_t x840 = INT16_MIN;
	int32_t t185 = 91;

    t185 = ((x837!=(x838+x839))==x840);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x841 = UINT64_MAX;
	int16_t x842 = 552;
	int8_t x843 = INT8_MAX;
	uint32_t x844 = 2U;
	int32_t t186 = -2678;

    t186 = ((x841!=(x842+x843))==x844);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x845 = -1;
	uint32_t x846 = 14U;
	int16_t x848 = -1;
	static int32_t t187 = -635805407;

    t187 = ((x845!=(x846+x847))==x848);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x849 = 98U;
	int8_t x850 = -28;
	int64_t x851 = -1LL;
	volatile int32_t t188 = 64391125;

    t188 = ((x849!=(x850+x851))==x852);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x853 = INT8_MAX;
	int8_t x854 = -1;
	uint64_t x855 = 43328943419027643LLU;
	static int32_t t189 = 31593;

    t189 = ((x853!=(x854+x855))==x856);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x857 = -11;
	int64_t x858 = INT64_MAX;
	volatile int32_t x859 = -1;
	volatile int32_t t190 = 107;

    t190 = ((x857!=(x858+x859))==x860);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x861 = 7U;
	int8_t x863 = INT8_MIN;
	int64_t x864 = INT64_MIN;
	volatile int32_t t191 = 132566488;

    t191 = ((x861!=(x862+x863))==x864);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x865 = 465484338U;
	int8_t x866 = -1;
	int16_t x867 = -1;

    t192 = ((x865!=(x866+x867))==x868);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x870 = -1LL;
	int16_t x871 = 29;
	static volatile int32_t x872 = INT32_MIN;
	int32_t t193 = -114825281;

    t193 = ((x869!=(x870+x871))==x872);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x873 = INT32_MIN;
	int32_t x874 = INT32_MAX;
	uint32_t x875 = 475U;
	uint64_t x876 = UINT64_MAX;
	volatile int32_t t194 = 63298019;

    t194 = ((x873!=(x874+x875))==x876);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x877 = -2628;
	int32_t x878 = 1802361;
	int8_t x879 = INT8_MIN;
	volatile uint32_t x880 = 31U;

    t195 = ((x877!=(x878+x879))==x880);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x881 = -3;
	uint32_t x884 = 332U;
	static volatile int32_t t196 = -227457191;

    t196 = ((x881!=(x882+x883))==x884);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x885 = 1U;
	static volatile int32_t x886 = INT32_MAX;
	volatile int16_t x887 = -1;
	int8_t x888 = INT8_MIN;
	volatile int32_t t197 = -35776813;

    t197 = ((x885!=(x886+x887))==x888);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x889 = INT16_MIN;
	int16_t x890 = 7826;
	int32_t x891 = -33;
	uint64_t x892 = 5501LLU;
	volatile int32_t t198 = -516046861;

    t198 = ((x889!=(x890+x891))==x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x894 = 2U;
	volatile int16_t x895 = INT16_MIN;
	static int8_t x896 = INT8_MAX;
	int32_t t199 = -360;

    t199 = ((x893!=(x894+x895))==x896);

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

