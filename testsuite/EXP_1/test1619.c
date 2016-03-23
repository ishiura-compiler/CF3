
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

volatile int32_t x1 = 55;
int64_t x11 = INT64_MIN;
volatile int16_t x19 = -1;
int64_t x20 = INT64_MIN;
volatile uint16_t x22 = 3974U;
static uint32_t x25 = UINT32_MAX;
int64_t x28 = INT64_MIN;
uint64_t x30 = 16528113130LLU;
static int32_t t8 = -11579863;
int64_t x37 = -713239879671496LL;
int32_t t9 = 3;
static volatile uint8_t x42 = UINT8_MAX;
volatile int16_t x45 = INT16_MIN;
uint16_t x46 = 7072U;
volatile int32_t t12 = 87250;
static volatile int32_t t14 = -54;
int32_t x61 = INT32_MIN;
volatile int64_t x67 = INT64_MAX;
int64_t x70 = 2359971435341519LL;
static int32_t t17 = -26855;
int32_t x73 = INT32_MAX;
int16_t x74 = -1;
volatile uint8_t x79 = 3U;
static int32_t t19 = 130;
static int16_t x84 = INT16_MIN;
int32_t t20 = -391;
static volatile int64_t x90 = 197500682952029078LL;
int8_t x92 = INT8_MAX;
int32_t x95 = -29;
static volatile int8_t x100 = -1;
static int64_t x102 = -198998646765817251LL;
static volatile int64_t x104 = INT64_MIN;
int8_t x113 = INT8_MIN;
static volatile int32_t t28 = 57834247;
int64_t x117 = 1LL;
int32_t x119 = -14;
int64_t x126 = -116272922425845136LL;
volatile int16_t x128 = -9;
static int8_t x131 = 25;
volatile uint64_t x132 = 15282LLU;
uint16_t x133 = 7U;
int16_t x135 = -163;
static volatile uint64_t x136 = 1853918LLU;
int32_t x137 = INT32_MIN;
uint8_t x139 = UINT8_MAX;
uint16_t x140 = 426U;
int64_t x147 = INT64_MIN;
int8_t x148 = -1;
static int64_t x151 = INT64_MIN;
volatile int32_t t37 = 79008;
int32_t x154 = INT32_MAX;
uint16_t x162 = UINT16_MAX;
int32_t t40 = 15112386;
int32_t x166 = INT32_MIN;
int32_t x176 = INT32_MIN;
uint8_t x183 = 3U;
static int64_t x188 = INT64_MAX;
volatile int64_t x190 = INT64_MIN;
uint32_t x191 = 1U;
int8_t x195 = INT8_MIN;
static volatile int32_t t48 = -43;
static uint32_t x199 = UINT32_MAX;
uint8_t x202 = UINT8_MAX;
int64_t x205 = INT64_MAX;
int16_t x207 = -1;
volatile uint8_t x208 = UINT8_MAX;
uint16_t x209 = UINT16_MAX;
int16_t x211 = -1;
int32_t t52 = -439222559;
uint8_t x215 = 9U;
int8_t x216 = 3;
int16_t x218 = INT16_MIN;
int64_t x221 = INT64_MIN;
static uint8_t x222 = UINT8_MAX;
uint32_t x223 = UINT32_MAX;
uint64_t x230 = 58147LLU;
int64_t x248 = -1LL;
uint64_t x249 = UINT64_MAX;
int16_t x254 = INT16_MIN;
static volatile int32_t t63 = 6214;
uint16_t x258 = 7U;
int32_t t64 = -29577300;
int64_t x264 = INT64_MIN;
static uint32_t x267 = UINT32_MAX;
uint32_t x271 = 3822U;
int32_t x285 = INT32_MAX;
int16_t x295 = -1;
static int64_t x300 = 3508024487573LL;
static int16_t x303 = INT16_MAX;
static int64_t x307 = INT64_MAX;
int8_t x312 = INT8_MAX;
uint8_t x313 = 3U;
static volatile uint16_t x314 = UINT16_MAX;
int32_t x317 = INT32_MIN;
int32_t x318 = INT32_MIN;
int64_t x323 = -1LL;
uint16_t x328 = UINT16_MAX;
int64_t x331 = INT64_MAX;
static uint16_t x332 = UINT16_MAX;
volatile int32_t t83 = 287342281;
int64_t x338 = -267LL;
volatile int8_t x346 = -1;
int64_t x349 = -1LL;
volatile int32_t t87 = 4170079;
uint8_t x354 = UINT8_MAX;
int16_t x358 = -1;
uint16_t x362 = 6U;
volatile uint8_t x370 = 4U;
uint64_t x371 = UINT64_MAX;
uint8_t x373 = UINT8_MAX;
uint64_t x374 = 7183LLU;
uint64_t x378 = UINT64_MAX;
uint64_t x379 = 3LLU;
volatile int32_t t94 = -54;
uint64_t x382 = 22644LLU;
volatile int16_t x383 = INT16_MIN;
int32_t x391 = INT32_MAX;
volatile int32_t t97 = 2635;
static uint16_t x394 = 31388U;
volatile int32_t t99 = 6;
uint16_t x406 = 399U;
uint32_t x408 = 392775U;
int64_t x414 = INT64_MIN;
volatile int32_t t103 = -3202;
volatile int8_t x426 = -1;
volatile int32_t t106 = 494675098;
static volatile int64_t x440 = INT64_MIN;
uint64_t x446 = UINT64_MAX;
static uint64_t x448 = UINT64_MAX;
static int32_t t111 = 2;
static volatile int32_t t112 = 86563515;
int32_t x469 = INT32_MIN;
int32_t x473 = -1;
static int8_t x474 = -1;
int64_t x476 = INT64_MIN;
int32_t x478 = INT32_MIN;
uint16_t x480 = 28370U;
int64_t x494 = 30LL;
uint32_t x496 = 3720910U;
int8_t x499 = INT8_MIN;
int8_t x504 = -3;
volatile int32_t t125 = 887;
int16_t x505 = INT16_MIN;
uint16_t x507 = 2U;
int64_t x512 = -27860429996726389LL;
int32_t t127 = 1561323;
int64_t x516 = 48LL;
int32_t x523 = 9170037;
int8_t x529 = INT8_MAX;
static uint32_t x534 = 492416018U;
int8_t x541 = -10;
uint8_t x544 = 3U;
uint8_t x551 = 9U;
static int16_t x552 = INT16_MIN;
int32_t x553 = INT32_MIN;
int8_t x556 = -56;
uint16_t x557 = 2U;
int32_t x566 = -236722;
int8_t x568 = INT8_MIN;
int8_t x570 = INT8_MIN;
static int64_t x578 = -423168647856LL;
uint64_t x579 = 1LLU;
uint64_t x581 = UINT64_MAX;
uint64_t x582 = UINT64_MAX;
volatile int64_t x590 = INT64_MAX;
int16_t x600 = 0;
uint8_t x604 = 4U;
static volatile int32_t t148 = 116894783;
volatile int64_t x605 = 62065960020772169LL;
uint64_t x612 = 1147732833345240749LLU;
static uint32_t x613 = 26U;
uint16_t x614 = 30U;
int32_t x615 = 7853;
static int64_t x618 = INT64_MIN;
int32_t x619 = INT32_MIN;
int8_t x622 = INT8_MIN;
int8_t x630 = INT8_MIN;
int32_t t158 = -87;
volatile uint16_t x646 = 12813U;
int8_t x653 = 0;
static int16_t x656 = INT16_MAX;
int32_t x661 = -133700;
int64_t x664 = INT64_MAX;
int16_t x665 = -1;
volatile uint32_t x666 = UINT32_MAX;
uint64_t x669 = 312051659754793565LLU;
int64_t x670 = INT64_MAX;
uint32_t x680 = UINT32_MAX;
static int8_t x685 = INT8_MAX;
int8_t x687 = -1;
volatile int32_t t172 = -3163832;
uint8_t x720 = 0U;
uint8_t x721 = 1U;
int16_t x723 = -1;
int16_t x724 = 1;
static volatile int8_t x732 = 10;
volatile int16_t x733 = 162;
int32_t t181 = -603476;
static volatile int32_t t183 = -1;
static int64_t x752 = INT64_MAX;
int8_t x753 = INT8_MIN;
static int16_t x756 = -1;
static int16_t x757 = INT16_MAX;
int8_t x758 = INT8_MIN;
volatile int64_t x760 = INT64_MIN;
int64_t x761 = INT64_MIN;
int32_t x767 = -211420;
int32_t t189 = -4965;
static int32_t x774 = 20917517;
static uint64_t x775 = UINT64_MAX;
volatile int32_t t190 = -1;
volatile int8_t x779 = -32;
uint16_t x780 = UINT16_MAX;
int16_t x781 = -685;
int16_t x783 = INT16_MIN;
uint64_t x787 = UINT64_MAX;
volatile int32_t t193 = 96;
static volatile int32_t t194 = 7;
int32_t x793 = INT32_MIN;
int32_t x799 = -1;
int32_t x805 = 32003;
volatile uint8_t x806 = 2U;
uint64_t x807 = 410LLU;
int16_t x808 = -1;
uint16_t x811 = 9578U;
uint64_t x812 = UINT64_MAX;
int32_t t199 = 2768304;


void f0(void) {
    	volatile int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -206859;

    t0 = (((x1>x2)/x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	uint16_t x6 = 27552U;
	int64_t x7 = -2LL;
	uint32_t x8 = 3738U;
	static int32_t t1 = 3552230;

    t1 = (((x5>x6)/x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 200532LLU;
	volatile int16_t x10 = INT16_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -22936;

    t2 = (((x9>x10)/x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 2;
	uint16_t x14 = 1572U;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 0;

    t3 = (((x13>x14)/x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	uint64_t x18 = UINT64_MAX;
	static int32_t t4 = 261479644;

    t4 = (((x17>x18)/x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 26U;
	int64_t x23 = INT64_MIN;
	int64_t x24 = -38LL;
	static volatile int32_t t5 = -124642205;

    t5 = (((x21>x22)/x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 17961U;
	int32_t x27 = INT32_MIN;
	volatile int32_t t6 = -1993206;

    t6 = (((x25>x26)/x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 2U;
	static uint32_t x31 = 464655823U;
	int16_t x32 = -1;
	int32_t t7 = 0;

    t7 = (((x29>x30)/x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -14LL;
	uint32_t x34 = UINT32_MAX;
	static int16_t x35 = 395;
	int32_t x36 = 330879933;

    t8 = (((x33>x34)/x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MAX;
	int64_t x40 = 633635LL;

    t9 = (((x37>x38)/x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = -423;

    t10 = (((x41>x42)/x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x47 = -1;
	static int8_t x48 = INT8_MIN;
	int32_t t11 = -7;

    t11 = (((x45>x46)/x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -44095800LL;
	int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MIN;
	uint8_t x52 = 57U;

    t12 = (((x49>x50)/x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	static int64_t x54 = INT64_MIN;
	static uint32_t x55 = UINT32_MAX;
	int8_t x56 = -1;
	static volatile int32_t t13 = 439167965;

    t13 = (((x53>x54)/x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -4;
	int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MIN;
	int8_t x60 = -18;

    t14 = (((x57>x58)/x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = UINT64_MAX;
	volatile uint64_t x63 = 26711071LLU;
	uint64_t x64 = 21LLU;
	volatile int32_t t15 = -244717795;

    t15 = (((x61>x62)/x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int32_t x66 = 135293776;
	static int8_t x68 = INT8_MAX;
	static volatile int32_t t16 = 93;

    t16 = (((x65>x66)/x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = 719112;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 1U;

    t17 = (((x69>x70)/x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x75 = INT64_MAX;
	int8_t x76 = -1;
	int32_t t18 = 44140;

    t18 = (((x73>x74)/x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -576;
	int64_t x78 = INT64_MAX;
	static int8_t x80 = -1;

    t19 = (((x77>x78)/x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 3;
	static uint64_t x82 = 264955831715LLU;
	int64_t x83 = INT64_MIN;

    t20 = (((x81>x82)/x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	static uint64_t x86 = 150995330641674726LLU;
	int64_t x87 = -1LL;
	int32_t x88 = INT32_MAX;
	static int32_t t21 = -5893;

    t21 = (((x85>x86)/x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = INT64_MIN;
	static int64_t x91 = INT64_MAX;
	volatile int32_t t22 = -170;

    t22 = (((x89>x90)/x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 650327636861LLU;
	static int32_t x94 = 2220844;
	static int32_t x96 = -1;
	volatile int32_t t23 = -61064905;

    t23 = (((x93>x94)/x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = UINT32_MAX;
	volatile int32_t t24 = -80;

    t24 = (((x97>x98)/x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x103 = -1;
	static volatile int32_t t25 = -1510253;

    t25 = (((x101>x102)/x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = 15LLU;
	uint32_t x108 = 819868685U;
	int32_t t26 = 123;

    t26 = (((x105>x106)/x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 3;
	volatile uint32_t x110 = UINT32_MAX;
	uint8_t x111 = 6U;
	static int64_t x112 = -1LL;
	volatile int32_t t27 = -8100;

    t27 = (((x109>x110)/x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x114 = 1154995274275LL;
	static int64_t x115 = INT64_MAX;
	static int32_t x116 = 184;

    t28 = (((x113>x114)/x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	uint16_t x120 = 5370U;
	volatile int32_t t29 = 4330164;

    t29 = (((x117>x118)/x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int32_t x122 = INT32_MIN;
	volatile uint8_t x123 = 118U;
	int8_t x124 = -1;
	int32_t t30 = -4022610;

    t30 = (((x121>x122)/x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = 0;
	int32_t x127 = INT32_MIN;
	volatile int32_t t31 = 1;

    t31 = (((x125>x126)/x127)>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	volatile int32_t t32 = 261835;

    t32 = (((x129>x130)/x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = -1;
	volatile int32_t t33 = -341709412;

    t33 = (((x133>x134)/x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = 8;
	int32_t t34 = 187526381;

    t34 = (((x137>x138)/x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -6;
	int64_t x142 = 4337266192LL;
	volatile int16_t x143 = INT16_MIN;
	int32_t x144 = 5;
	static int32_t t35 = -171838;

    t35 = (((x141>x142)/x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -47;
	static int32_t x146 = -27120608;
	static int32_t t36 = -913;

    t36 = (((x145>x146)/x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	static int32_t x150 = INT32_MIN;
	static volatile int64_t x152 = INT64_MIN;

    t37 = (((x149>x150)/x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = -1;
	static int8_t x155 = INT8_MIN;
	int16_t x156 = -748;
	volatile int32_t t38 = 846479608;

    t38 = (((x153>x154)/x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int8_t x158 = INT8_MIN;
	static int32_t x159 = -149639;
	static uint8_t x160 = 0U;
	static volatile int32_t t39 = 26638204;

    t39 = (((x157>x158)/x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 1465LLU;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;

    t40 = (((x161>x162)/x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int8_t x165 = INT8_MIN;
	int64_t x167 = INT64_MAX;
	int16_t x168 = -1;
	int32_t t41 = 1;

    t41 = (((x165>x166)/x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 48U;
	volatile int64_t x172 = -774040696400265113LL;
	volatile int32_t t42 = -1;

    t42 = (((x169>x170)/x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -177;
	uint64_t x174 = 130848030715565LLU;
	volatile int16_t x175 = INT16_MIN;
	static int32_t t43 = 192190;

    t43 = (((x173>x174)/x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 109U;
	uint8_t x178 = 104U;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = 6881;
	int32_t t44 = -64265;

    t44 = (((x177>x178)/x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 0;
	uint16_t x182 = UINT16_MAX;
	static uint16_t x184 = 1U;
	volatile int32_t t45 = -77;

    t45 = (((x181>x182)/x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = INT64_MAX;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -1659919064LL;
	static volatile int32_t t46 = -2701715;

    t46 = (((x185>x186)/x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t47 = 44285;

    t47 = (((x189>x190)/x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -1;
	volatile int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;

    t48 = (((x193>x194)/x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	static int64_t x198 = INT64_MIN;
	int16_t x200 = -1;
	int32_t t49 = -2782;

    t49 = (((x197>x198)/x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = 69482145LL;
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	static int32_t t50 = 89829;

    t50 = (((x201>x202)/x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = 1;
	static int32_t t51 = -1552651;

    t51 = (((x205>x206)/x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -1;
	static int64_t x212 = INT64_MIN;

    t52 = (((x209>x210)/x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = -1;
	int64_t x214 = -22LL;
	volatile int32_t t53 = 1024648218;

    t53 = (((x213>x214)/x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x217 = 13U;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = -100464692;

    t54 = (((x217>x218)/x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x224 = UINT16_MAX;
	int32_t t55 = 1;

    t55 = (((x221>x222)/x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	static int64_t x226 = -5579LL;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t56 = 689;

    t56 = (((x225>x226)/x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 631364LLU;
	static volatile uint16_t x231 = 129U;
	volatile int16_t x232 = 1;
	volatile int32_t t57 = -1;

    t57 = (((x229>x230)/x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t58 = 3890;

    t58 = (((x233>x234)/x235)>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = 111U;
	static uint8_t x238 = 22U;
	static int32_t x239 = -1;
	static int16_t x240 = -1;
	int32_t t59 = -317;

    t59 = (((x237>x238)/x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = 0U;
	static int32_t t60 = -3743;

    t60 = (((x241>x242)/x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	uint64_t x246 = UINT64_MAX;
	volatile int16_t x247 = -1;
	volatile int32_t t61 = 24919;

    t61 = (((x245>x246)/x247)>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x250 = -1LL;
	uint8_t x251 = 5U;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 15115575;

    t62 = (((x249>x250)/x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -42389231086263LL;
	static int16_t x255 = INT16_MIN;
	volatile uint64_t x256 = 19963359137481130LLU;

    t63 = (((x253>x254)/x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 1319317U;
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MAX;

    t64 = (((x257>x258)/x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 11237264974575LL;
	int32_t x262 = -7872325;
	int8_t x263 = INT8_MIN;
	int32_t t65 = -58374;

    t65 = (((x261>x262)/x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x265 = 58752U;
	volatile int64_t x266 = -1LL;
	int64_t x268 = INT64_MIN;
	static int32_t t66 = 1;

    t66 = (((x265>x266)/x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = -1;
	uint16_t x272 = 10U;
	int32_t t67 = 10368;

    t67 = (((x269>x270)/x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = 874U;
	int32_t x274 = 243;
	static int64_t x275 = INT64_MAX;
	uint64_t x276 = 63519341960484LLU;
	int32_t t68 = -4921322;

    t68 = (((x273>x274)/x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 89;
	uint64_t x278 = 775564LLU;
	volatile uint64_t x279 = 139089340959234421LLU;
	int32_t x280 = INT32_MIN;
	int32_t t69 = 1;

    t69 = (((x277>x278)/x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	static int64_t x282 = INT64_MIN;
	static int32_t x283 = -52;
	int64_t x284 = -5474590983LL;
	static volatile int32_t t70 = -1;

    t70 = (((x281>x282)/x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x286 = INT32_MIN;
	int32_t x287 = -38364;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -208161;

    t71 = (((x285>x286)/x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 16;
	volatile uint8_t x290 = 29U;
	int32_t x291 = INT32_MAX;
	volatile uint8_t x292 = 46U;
	static int32_t t72 = -1020860810;

    t72 = (((x289>x290)/x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	uint8_t x294 = 41U;
	uint16_t x296 = 27U;
	int32_t t73 = 1876916;

    t73 = (((x293>x294)/x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int64_t x298 = -88LL;
	volatile int64_t x299 = -1LL;
	volatile int32_t t74 = -14;

    t74 = (((x297>x298)/x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	static int32_t x302 = -1;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = -58391;

    t75 = (((x301>x302)/x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -1LL;
	volatile int8_t x306 = -1;
	uint8_t x308 = 1U;
	static int32_t t76 = 769802;

    t76 = (((x305>x306)/x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = 0;
	volatile int32_t x310 = INT32_MAX;
	uint32_t x311 = 4050658U;
	static volatile int32_t t77 = -1909830;

    t77 = (((x309>x310)/x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x315 = 49407U;
	static volatile uint32_t x316 = 4007720U;
	int32_t t78 = 91604;

    t78 = (((x313>x314)/x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x319 = 1708380027LLU;
	int32_t x320 = INT32_MAX;
	static int32_t t79 = -2762;

    t79 = (((x317>x318)/x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MAX;
	int64_t x322 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = 19;

    t80 = (((x321>x322)/x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	int64_t x326 = -1LL;
	static volatile uint32_t x327 = UINT32_MAX;
	volatile int32_t t81 = -13;

    t81 = (((x325>x326)/x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -451954293LL;
	uint16_t x330 = 991U;
	int32_t t82 = 38;

    t82 = (((x329>x330)/x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 85U;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	static int16_t x336 = INT16_MIN;

    t83 = (((x333>x334)/x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 2635LL;
	volatile int8_t x339 = INT8_MIN;
	volatile int8_t x340 = INT8_MAX;
	int32_t t84 = 0;

    t84 = (((x337>x338)/x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	uint64_t x342 = 0LLU;
	volatile uint32_t x343 = 173414U;
	int16_t x344 = 31;
	int32_t t85 = 395;

    t85 = (((x341>x342)/x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = -1;
	int32_t x347 = INT32_MIN;
	int8_t x348 = -32;
	static volatile int32_t t86 = -3086626;

    t86 = (((x345>x346)/x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MIN;
	uint32_t x351 = 6204414U;
	int32_t x352 = INT32_MIN;

    t87 = (((x349>x350)/x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	uint32_t x355 = 1849110535U;
	volatile int8_t x356 = -1;
	static volatile int32_t t88 = 231205;

    t88 = (((x353>x354)/x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = INT8_MIN;
	uint32_t x359 = 4U;
	uint8_t x360 = UINT8_MAX;
	static int32_t t89 = 3391188;

    t89 = (((x357>x358)/x359)>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MAX;
	int64_t x363 = INT64_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 804;

    t90 = (((x361>x362)/x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MAX;
	static int64_t x366 = -1LL;
	int64_t x367 = INT64_MIN;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = 0;

    t91 = (((x365>x366)/x367)>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	volatile uint32_t x372 = 330579U;
	volatile int32_t t92 = 2;

    t92 = (((x369>x370)/x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x375 = -10;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -46084536;

    t93 = (((x373>x374)/x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MIN;
	static int8_t x380 = 0;

    t94 = (((x377>x378)/x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x381 = -31;
	volatile uint16_t x384 = 976U;
	volatile int32_t t95 = 4419290;

    t95 = (((x381>x382)/x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = INT8_MAX;
	static volatile uint32_t x387 = UINT32_MAX;
	static int8_t x388 = INT8_MAX;
	int32_t t96 = -4;

    t96 = (((x385>x386)/x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	int64_t x392 = -328542589134471666LL;

    t97 = (((x389>x390)/x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = UINT64_MAX;
	int8_t x395 = INT8_MIN;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t98 = -391212684;

    t98 = (((x393>x394)/x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = 84227530LL;
	volatile int8_t x398 = INT8_MIN;
	int32_t x399 = 544611206;
	uint8_t x400 = UINT8_MAX;

    t99 = (((x397>x398)/x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 7U;
	uint16_t x402 = 19066U;
	volatile int8_t x403 = INT8_MAX;
	int16_t x404 = -1;
	int32_t t100 = -646;

    t100 = (((x401>x402)/x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = 1215U;
	int16_t x407 = 204;
	volatile int32_t t101 = 475;

    t101 = (((x405>x406)/x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	static uint32_t x412 = UINT32_MAX;
	int32_t t102 = -60;

    t102 = (((x409>x410)/x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = 2116413LL;
	uint32_t x415 = 1014823U;
	uint16_t x416 = 1U;

    t103 = (((x413>x414)/x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = INT16_MIN;
	static int64_t x418 = INT64_MIN;
	int16_t x419 = -8901;
	int32_t x420 = 20;
	static int32_t t104 = 24698;

    t104 = (((x417>x418)/x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MAX;
	static volatile int8_t x422 = -10;
	int8_t x423 = INT8_MAX;
	volatile uint16_t x424 = UINT16_MAX;
	volatile int32_t t105 = 11099347;

    t105 = (((x421>x422)/x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	volatile int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;

    t106 = (((x425>x426)/x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MAX;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MAX;
	volatile int16_t x432 = 19;
	static volatile int32_t t107 = -2482588;

    t107 = (((x429>x430)/x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MAX;
	volatile int8_t x434 = -1;
	int8_t x435 = -1;
	int32_t x436 = -1;
	static volatile int32_t t108 = 69970168;

    t108 = (((x433>x434)/x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 2603U;
	static int8_t x438 = INT8_MIN;
	uint16_t x439 = 22U;
	volatile int32_t t109 = 16000;

    t109 = (((x437>x438)/x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 2;
	static int32_t x442 = -1;
	static volatile int16_t x443 = INT16_MIN;
	static int8_t x444 = -1;
	static int32_t t110 = 749205;

    t110 = (((x441>x442)/x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MAX;
	uint32_t x447 = 2586021U;

    t111 = (((x445>x446)/x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	int16_t x450 = -1;
	int32_t x451 = INT32_MIN;
	volatile int8_t x452 = INT8_MAX;

    t112 = (((x449>x450)/x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	static int32_t x454 = 1;
	static int32_t x455 = INT32_MIN;
	int16_t x456 = -1;
	static volatile int32_t t113 = 106;

    t113 = (((x453>x454)/x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MAX;
	int64_t x458 = -1LL;
	uint32_t x459 = 3846976U;
	int64_t x460 = INT64_MAX;
	int32_t t114 = 14250;

    t114 = (((x457>x458)/x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = 1479U;
	uint64_t x463 = UINT64_MAX;
	static uint8_t x464 = 8U;
	static int32_t t115 = -6;

    t115 = (((x461>x462)/x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	static int16_t x466 = INT16_MIN;
	uint64_t x467 = 47091064769492619LLU;
	int16_t x468 = 1;
	static volatile int32_t t116 = 23;

    t116 = (((x465>x466)/x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -12;
	static int16_t x471 = -1;
	int8_t x472 = 0;
	int32_t t117 = -628309;

    t117 = (((x469>x470)/x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x475 = 4035913538125118791LLU;
	int32_t t118 = -20244373;

    t118 = (((x473>x474)/x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	int32_t x479 = -1;
	volatile int32_t t119 = -897;

    t119 = (((x477>x478)/x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	volatile int8_t x482 = INT8_MAX;
	int64_t x483 = -1LL;
	int16_t x484 = 379;
	volatile int32_t t120 = -4076981;

    t120 = (((x481>x482)/x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = UINT32_MAX;
	static uint8_t x486 = 1U;
	int64_t x487 = INT64_MAX;
	int8_t x488 = INT8_MIN;
	volatile int32_t t121 = -528;

    t121 = (((x485>x486)/x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = -8;
	static uint8_t x490 = UINT8_MAX;
	volatile int64_t x491 = -1LL;
	static uint32_t x492 = 924389695U;
	volatile int32_t t122 = 0;

    t122 = (((x489>x490)/x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x493 = INT64_MIN;
	static int64_t x495 = -1LL;
	volatile int32_t t123 = 359;

    t123 = (((x493>x494)/x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MIN;
	static volatile int64_t x498 = INT64_MIN;
	int8_t x500 = -1;
	volatile int32_t t124 = 80370489;

    t124 = (((x497>x498)/x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 3U;
	uint8_t x502 = 0U;
	int64_t x503 = INT64_MIN;

    t125 = (((x501>x502)/x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = -1;
	volatile uint16_t x508 = 4U;
	int32_t t126 = 9;

    t126 = (((x505>x506)/x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = -20;
	int16_t x510 = -1;
	int64_t x511 = 9964106407LL;

    t127 = (((x509>x510)/x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	int32_t x514 = INT32_MIN;
	uint16_t x515 = 208U;
	int32_t t128 = 1;

    t128 = (((x513>x514)/x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x521 = 521712079U;
	uint32_t x522 = 5337137U;
	int32_t x524 = 373;
	int32_t t129 = -794250284;

    t129 = (((x521>x522)/x523)>x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x525 = -2;
	int32_t x526 = -692463;
	int32_t x527 = INT32_MAX;
	static volatile uint8_t x528 = 1U;
	volatile int32_t t130 = 1214069;

    t130 = (((x525>x526)/x527)>x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x530 = UINT64_MAX;
	volatile uint8_t x531 = 110U;
	int32_t x532 = INT32_MIN;
	int32_t t131 = -468702;

    t131 = (((x529>x530)/x531)>x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x533 = 3057;
	int8_t x535 = 2;
	uint64_t x536 = 26883LLU;
	int32_t t132 = 1;

    t132 = (((x533>x534)/x535)>x536);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = INT8_MIN;
	uint16_t x538 = UINT16_MAX;
	int32_t x539 = INT32_MIN;
	volatile int16_t x540 = -5870;
	volatile int32_t t133 = 387;

    t133 = (((x537>x538)/x539)>x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x542 = INT8_MIN;
	uint8_t x543 = 48U;
	int32_t t134 = 150;

    t134 = (((x541>x542)/x543)>x544);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = INT64_MIN;
	static int32_t x547 = INT32_MIN;
	static int16_t x548 = INT16_MIN;
	static int32_t t135 = -20;

    t135 = (((x545>x546)/x547)>x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x549 = 57615999U;
	volatile int8_t x550 = INT8_MAX;
	int32_t t136 = -1;

    t136 = (((x549>x550)/x551)>x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x554 = 0;
	int64_t x555 = INT64_MIN;
	int32_t t137 = -116223216;

    t137 = (((x553>x554)/x555)>x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x558 = 186648861745861455LL;
	uint16_t x559 = UINT16_MAX;
	int8_t x560 = -1;
	static int32_t t138 = 11;

    t138 = (((x557>x558)/x559)>x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = -1;
	volatile int8_t x563 = 62;
	uint16_t x564 = 1960U;
	volatile int32_t t139 = 75;

    t139 = (((x561>x562)/x563)>x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x565 = -1LL;
	uint8_t x567 = 49U;
	static volatile int32_t t140 = -367888;

    t140 = (((x565>x566)/x567)>x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x569 = INT16_MIN;
	int8_t x571 = -10;
	int32_t x572 = INT32_MAX;
	volatile int32_t t141 = 20253422;

    t141 = (((x569>x570)/x571)>x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x573 = UINT64_MAX;
	int8_t x574 = -1;
	int64_t x575 = -1LL;
	int16_t x576 = INT16_MAX;
	int32_t t142 = -46;

    t142 = (((x573>x574)/x575)>x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x577 = INT64_MIN;
	volatile int8_t x580 = -1;
	int32_t t143 = -22248;

    t143 = (((x577>x578)/x579)>x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x583 = UINT64_MAX;
	int64_t x584 = -1LL;
	volatile int32_t t144 = 2006;

    t144 = (((x581>x582)/x583)>x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x585 = 0U;
	int32_t x586 = -1;
	static int64_t x587 = INT64_MIN;
	int64_t x588 = 1LL;
	volatile int32_t t145 = -18926718;

    t145 = (((x585>x586)/x587)>x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x589 = INT64_MAX;
	int8_t x591 = 63;
	int16_t x592 = -1;
	volatile int32_t t146 = 23890379;

    t146 = (((x589>x590)/x591)>x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x597 = -3071;
	int64_t x598 = -24995711295039LL;
	static int8_t x599 = 1;
	int32_t t147 = -7887;

    t147 = (((x597>x598)/x599)>x600);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x601 = 13888U;
	volatile uint16_t x602 = UINT16_MAX;
	volatile int32_t x603 = 45879;

    t148 = (((x601>x602)/x603)>x604);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x606 = 1U;
	int8_t x607 = INT8_MIN;
	int32_t x608 = INT32_MIN;
	int32_t t149 = 19749;

    t149 = (((x605>x606)/x607)>x608);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x609 = UINT32_MAX;
	int64_t x610 = 0LL;
	static int32_t x611 = -117762483;
	volatile int32_t t150 = 105;

    t150 = (((x609>x610)/x611)>x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x616 = INT16_MIN;
	volatile int32_t t151 = 13183;

    t151 = (((x613>x614)/x615)>x616);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x617 = 809520096U;
	int16_t x620 = INT16_MIN;
	volatile int32_t t152 = -10588673;

    t152 = (((x617>x618)/x619)>x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x621 = INT8_MIN;
	uint8_t x623 = 1U;
	uint16_t x624 = 13U;
	int32_t t153 = -6;

    t153 = (((x621>x622)/x623)>x624);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x625 = INT64_MIN;
	uint32_t x626 = 54702233U;
	uint64_t x627 = 902LLU;
	uint32_t x628 = UINT32_MAX;
	int32_t t154 = 14998258;

    t154 = (((x625>x626)/x627)>x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = -1LL;
	int32_t x631 = INT32_MIN;
	uint64_t x632 = 79859LLU;
	static int32_t t155 = -1664;

    t155 = (((x629>x630)/x631)>x632);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x633 = INT8_MAX;
	int32_t x634 = -34;
	volatile int32_t x635 = -862715;
	int64_t x636 = INT64_MIN;
	volatile int32_t t156 = -28510;

    t156 = (((x633>x634)/x635)>x636);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x637 = INT16_MAX;
	int64_t x638 = INT64_MIN;
	volatile uint16_t x639 = 367U;
	int32_t x640 = -7369;
	static int32_t t157 = 12340139;

    t157 = (((x637>x638)/x639)>x640);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x641 = 0U;
	int64_t x642 = 7LL;
	uint16_t x643 = UINT16_MAX;
	volatile uint16_t x644 = 963U;

    t158 = (((x641>x642)/x643)>x644);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x645 = -57;
	volatile int16_t x647 = INT16_MIN;
	int8_t x648 = 14;
	volatile int32_t t159 = 49;

    t159 = (((x645>x646)/x647)>x648);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x649 = 674U;
	static uint64_t x650 = UINT64_MAX;
	static volatile int8_t x651 = INT8_MIN;
	volatile uint8_t x652 = UINT8_MAX;
	int32_t t160 = -29;

    t160 = (((x649>x650)/x651)>x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x654 = -1;
	int8_t x655 = -1;
	volatile int32_t t161 = -46891852;

    t161 = (((x653>x654)/x655)>x656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x657 = INT16_MIN;
	int16_t x658 = 41;
	int32_t x659 = INT32_MAX;
	uint32_t x660 = 526U;
	int32_t t162 = 1824301;

    t162 = (((x657>x658)/x659)>x660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x662 = 6182U;
	volatile int64_t x663 = -61553975LL;
	int32_t t163 = -23;

    t163 = (((x661>x662)/x663)>x664);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x667 = INT64_MIN;
	volatile uint64_t x668 = 188682603LLU;
	int32_t t164 = -1108113;

    t164 = (((x665>x666)/x667)>x668);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x671 = INT64_MIN;
	int8_t x672 = INT8_MIN;
	static volatile int32_t t165 = 0;

    t165 = (((x669>x670)/x671)>x672);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x673 = INT64_MIN;
	int64_t x674 = 290061394844121LL;
	volatile uint64_t x675 = 1459757LLU;
	uint16_t x676 = UINT16_MAX;
	static int32_t t166 = -3696496;

    t166 = (((x673>x674)/x675)>x676);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x677 = INT32_MIN;
	uint32_t x678 = 100225U;
	int32_t x679 = INT32_MAX;
	volatile int32_t t167 = -122;

    t167 = (((x677>x678)/x679)>x680);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x681 = 6U;
	volatile uint32_t x682 = 489372805U;
	int16_t x683 = INT16_MIN;
	static int8_t x684 = INT8_MAX;
	static volatile int32_t t168 = -285721227;

    t168 = (((x681>x682)/x683)>x684);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x686 = -1;
	static int16_t x688 = INT16_MIN;
	int32_t t169 = -111;

    t169 = (((x685>x686)/x687)>x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x689 = 0;
	uint16_t x690 = 3U;
	uint32_t x691 = UINT32_MAX;
	int16_t x692 = INT16_MIN;
	int32_t t170 = 2010659;

    t170 = (((x689>x690)/x691)>x692);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x697 = INT32_MIN;
	int16_t x698 = 3;
	uint16_t x699 = 7888U;
	int8_t x700 = INT8_MIN;
	static int32_t t171 = 203;

    t171 = (((x697>x698)/x699)>x700);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x701 = -1LL;
	int64_t x702 = INT64_MIN;
	uint8_t x703 = UINT8_MAX;
	uint8_t x704 = 1U;

    t172 = (((x701>x702)/x703)>x704);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x705 = INT32_MIN;
	static uint16_t x706 = 7U;
	int8_t x707 = -1;
	static int32_t x708 = -1;
	static volatile int32_t t173 = -7351740;

    t173 = (((x705>x706)/x707)>x708);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x709 = 39U;
	int32_t x710 = -161872;
	int64_t x711 = -2030177LL;
	int8_t x712 = 0;
	volatile int32_t t174 = -174;

    t174 = (((x709>x710)/x711)>x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x713 = INT8_MAX;
	volatile int64_t x714 = -1LL;
	uint64_t x715 = UINT64_MAX;
	int64_t x716 = -1LL;
	int32_t t175 = -252;

    t175 = (((x713>x714)/x715)>x716);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x717 = 1998LLU;
	static uint8_t x718 = 21U;
	int64_t x719 = 1099220210334LL;
	volatile int32_t t176 = -23203;

    t176 = (((x717>x718)/x719)>x720);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x722 = -5867310094472LL;
	volatile int32_t t177 = 22721;

    t177 = (((x721>x722)/x723)>x724);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x725 = INT16_MIN;
	uint8_t x726 = 22U;
	uint16_t x727 = UINT16_MAX;
	int8_t x728 = INT8_MIN;
	int32_t t178 = -2789476;

    t178 = (((x725>x726)/x727)>x728);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x729 = INT64_MIN;
	int16_t x730 = INT16_MIN;
	volatile int16_t x731 = INT16_MIN;
	int32_t t179 = 42895901;

    t179 = (((x729>x730)/x731)>x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x734 = INT16_MIN;
	int16_t x735 = INT16_MIN;
	uint16_t x736 = 201U;
	volatile int32_t t180 = -2475387;

    t180 = (((x733>x734)/x735)>x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x737 = -1;
	int64_t x738 = 1452649662598162727LL;
	static uint64_t x739 = UINT64_MAX;
	int8_t x740 = INT8_MAX;

    t181 = (((x737>x738)/x739)>x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = INT32_MAX;
	static int16_t x742 = INT16_MAX;
	int16_t x743 = 61;
	static int64_t x744 = 122544LL;
	volatile int32_t t182 = 27970484;

    t182 = (((x741>x742)/x743)>x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x745 = -1LL;
	uint32_t x746 = 1234862U;
	int8_t x747 = INT8_MAX;
	uint16_t x748 = 224U;

    t183 = (((x745>x746)/x747)>x748);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x749 = 730117444U;
	volatile int8_t x750 = -10;
	int8_t x751 = INT8_MIN;
	int32_t t184 = -133269632;

    t184 = (((x749>x750)/x751)>x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x754 = -1;
	int64_t x755 = INT64_MAX;
	int32_t t185 = -127673;

    t185 = (((x753>x754)/x755)>x756);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x759 = INT64_MAX;
	int32_t t186 = 186;

    t186 = (((x757>x758)/x759)>x760);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x762 = INT64_MIN;
	static int16_t x763 = INT16_MIN;
	int32_t x764 = 382680;
	int32_t t187 = -149519820;

    t187 = (((x761>x762)/x763)>x764);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x765 = -1;
	int8_t x766 = -1;
	static uint32_t x768 = 152377U;
	volatile int32_t t188 = 3275184;

    t188 = (((x765>x766)/x767)>x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x769 = -274510885;
	static volatile int64_t x770 = -2013407120966965736LL;
	volatile uint16_t x771 = 48U;
	int64_t x772 = INT64_MIN;

    t189 = (((x769>x770)/x771)>x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x773 = -1;
	uint32_t x776 = 104627608U;

    t190 = (((x773>x774)/x775)>x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x777 = 3028U;
	int16_t x778 = INT16_MIN;
	volatile int32_t t191 = 511215;

    t191 = (((x777>x778)/x779)>x780);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x782 = INT16_MAX;
	uint64_t x784 = 57747LLU;
	static int32_t t192 = 62323;

    t192 = (((x781>x782)/x783)>x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = 963;
	static int16_t x786 = -121;
	static int8_t x788 = INT8_MIN;

    t193 = (((x785>x786)/x787)>x788);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x789 = INT8_MAX;
	int8_t x790 = 3;
	static uint16_t x791 = 3U;
	static int16_t x792 = INT16_MIN;

    t194 = (((x789>x790)/x791)>x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x794 = -1;
	volatile int64_t x795 = -1LL;
	int8_t x796 = INT8_MAX;
	static volatile int32_t t195 = 746691;

    t195 = (((x793>x794)/x795)>x796);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x797 = INT32_MAX;
	int64_t x798 = 144654037350715743LL;
	volatile int64_t x800 = 856014275LL;
	int32_t t196 = 1;

    t196 = (((x797>x798)/x799)>x800);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x801 = INT8_MIN;
	volatile int16_t x802 = INT16_MAX;
	uint32_t x803 = 45876U;
	static int8_t x804 = INT8_MIN;
	static int32_t t197 = -2101;

    t197 = (((x801>x802)/x803)>x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t t198 = -4;

    t198 = (((x805>x806)/x807)>x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x809 = INT16_MIN;
	int32_t x810 = INT32_MIN;

    t199 = (((x809>x810)/x811)>x812);

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

