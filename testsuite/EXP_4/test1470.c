
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

volatile int8_t x2 = 12;
static volatile int8_t x3 = 10;
int32_t x4 = -1;
static int8_t x5 = -20;
static int32_t x7 = -2543;
static uint8_t x11 = 3U;
uint64_t x22 = 1596542352369455664LLU;
static uint16_t x23 = 32121U;
volatile uint32_t t5 = 46U;
volatile uint64_t x26 = 445619700331775LLU;
static volatile uint64_t x27 = 197LLU;
volatile int32_t t6 = -35;
uint16_t x32 = UINT16_MAX;
volatile uint32_t t7 = 60U;
uint64_t x34 = 3775LLU;
uint64_t x44 = UINT64_MAX;
int32_t t11 = 43156142;
int64_t x57 = INT64_MAX;
int64_t x58 = 176LL;
int16_t x59 = INT16_MIN;
int8_t x65 = -1;
static uint64_t x74 = 8305916752411830889LLU;
int16_t x79 = INT16_MIN;
static uint32_t t19 = 87U;
int8_t x83 = INT8_MIN;
volatile int64_t x85 = -66LL;
uint16_t x87 = 11373U;
int32_t x88 = INT32_MIN;
static volatile uint8_t x91 = 1U;
int8_t x93 = INT8_MIN;
volatile int8_t x99 = INT8_MIN;
int8_t x103 = INT8_MIN;
uint64_t x106 = 16931103619138LLU;
volatile uint8_t x114 = UINT8_MAX;
int16_t x115 = INT16_MAX;
uint16_t x123 = UINT16_MAX;
volatile int32_t t30 = 516763334;
volatile int32_t t31 = -1783;
int64_t x130 = -1LL;
volatile int32_t x132 = INT32_MIN;
int64_t x136 = 3163LL;
volatile int16_t x150 = 483;
volatile int16_t x151 = INT16_MIN;
uint32_t x161 = 1012349U;
volatile int8_t x162 = INT8_MIN;
uint8_t x168 = 1U;
volatile int64_t x175 = INT64_MIN;
uint64_t x182 = 442379621573LLU;
int32_t x190 = 52461002;
static uint8_t x193 = 13U;
static int8_t x197 = INT8_MAX;
int8_t x213 = 0;
int8_t x217 = -1;
int32_t t54 = -179;
volatile uint32_t x227 = 864829U;
volatile int8_t x234 = -37;
uint8_t x235 = UINT8_MAX;
int16_t x237 = 175;
static int16_t x239 = INT16_MIN;
static volatile int64_t x240 = 1000LL;
int16_t x243 = INT16_MIN;
volatile int32_t t60 = 5;
int32_t x247 = 0;
static int16_t x250 = 15;
int64_t x251 = INT64_MIN;
uint8_t x257 = 3U;
volatile int32_t x266 = -1;
int32_t x267 = INT32_MAX;
int8_t x269 = INT8_MAX;
static uint16_t x270 = 575U;
int8_t x274 = INT8_MIN;
static volatile int16_t x277 = INT16_MIN;
volatile int32_t x278 = -1;
uint16_t x280 = 78U;
static int16_t x281 = INT16_MAX;
int64_t x284 = -11131571643LL;
int8_t x294 = INT8_MAX;
int32_t t74 = -2051756;
volatile uint8_t x301 = 63U;
int16_t x307 = 0;
volatile uint8_t x309 = UINT8_MAX;
int8_t x314 = -1;
volatile int16_t x315 = -1;
uint32_t x321 = UINT32_MAX;
int8_t x332 = -25;
volatile int64_t x338 = 35290LL;
volatile int64_t x341 = INT64_MIN;
uint16_t x343 = 858U;
static int16_t x345 = INT16_MIN;
uint32_t x351 = 48U;
int16_t x358 = INT16_MIN;
uint32_t x374 = 5U;
int16_t x380 = -1;
uint32_t x382 = 817283297U;
int8_t x389 = -1;
int8_t x398 = 9;
int8_t x408 = INT8_MIN;
int64_t x418 = INT64_MIN;
int32_t x419 = INT32_MIN;
int16_t x421 = INT16_MIN;
volatile int32_t t105 = 752541469;
volatile int8_t x425 = INT8_MIN;
static uint32_t x434 = 152792U;
int8_t x435 = 3;
int64_t x436 = 78527LL;
int64_t x439 = 10975043939484449LL;
int64_t x444 = 97933552055LL;
volatile int32_t t110 = 79;
uint32_t x462 = 3055594U;
int16_t x468 = INT16_MIN;
volatile int32_t t116 = 16;
static uint64_t x473 = 1591516730LLU;
volatile int16_t x474 = INT16_MAX;
uint16_t x483 = UINT16_MAX;
int8_t x487 = -1;
int32_t x490 = INT32_MIN;
volatile uint8_t x492 = 60U;
uint8_t x493 = 11U;
int32_t t124 = 1011;
int32_t x506 = INT32_MAX;
volatile int64_t x510 = INT64_MAX;
static int16_t x518 = -1;
volatile int64_t t129 = -20812356288758672LL;
uint32_t x521 = UINT32_MAX;
static uint32_t x525 = 93888574U;
volatile int8_t x529 = -12;
int64_t x536 = 188LL;
int32_t x543 = INT32_MIN;
volatile uint16_t x548 = UINT16_MAX;
int16_t x552 = 1;
static uint64_t t138 = 2808257045728775945LLU;
int8_t x557 = 1;
int32_t t139 = 160411;
int8_t x564 = INT8_MAX;
static int16_t x565 = INT16_MIN;
uint32_t x576 = 9723U;
uint32_t x578 = 1765414U;
static int8_t x579 = 12;
static volatile int32_t t144 = -43444;
uint64_t x581 = UINT64_MAX;
int32_t x584 = 14441188;
volatile uint64_t t145 = 3808957067LLU;
static uint32_t x588 = 3705392U;
int64_t t146 = 4942381179968363LL;
uint64_t x589 = UINT64_MAX;
volatile int32_t x596 = -1;
int32_t x599 = -1;
int16_t x600 = INT16_MIN;
static int64_t t149 = 44792331429917LL;
int8_t x602 = INT8_MIN;
static uint32_t x609 = 4U;
static int8_t x616 = -24;
volatile uint32_t t153 = 64593U;
int64_t x621 = INT64_MIN;
static volatile int16_t x624 = 12;
volatile int64_t t155 = -1LL;
volatile int16_t x628 = INT16_MAX;
uint32_t x629 = 713067U;
uint32_t x633 = 6U;
int32_t x641 = INT32_MAX;
int64_t t161 = -168808018LL;
int8_t x651 = -1;
static uint16_t x653 = 370U;
int32_t t163 = -54;
int16_t x658 = -150;
volatile int64_t t164 = -364LL;
uint16_t x681 = UINT16_MAX;
volatile int32_t x684 = INT32_MAX;
int16_t x687 = 1;
int32_t t171 = 523893;
int16_t x690 = INT16_MAX;
static int32_t x695 = INT32_MIN;
int8_t x698 = INT8_MIN;
volatile uint8_t x699 = UINT8_MAX;
int32_t x700 = -123766419;
static int32_t t174 = 424260;
uint16_t x701 = 187U;
static int32_t x703 = INT32_MIN;
int64_t x706 = -1LL;
volatile int64_t t176 = 47022544LL;
static uint16_t x711 = 1473U;
static uint64_t t177 = 177651096LLU;
uint16_t x717 = UINT16_MAX;
static volatile int32_t t179 = -135;
static uint32_t x725 = UINT32_MAX;
uint64_t x730 = UINT64_MAX;
int32_t t183 = 13315444;
int8_t x749 = INT8_MIN;
int64_t x762 = -977270312499541LL;
static int32_t x765 = INT32_MIN;
int8_t x778 = INT8_MAX;
static volatile int32_t t194 = 28481;
int64_t x781 = INT64_MIN;
static volatile uint64_t x783 = UINT64_MAX;
volatile int64_t t195 = 2LL;
uint8_t x794 = UINT8_MAX;
int8_t x798 = 0;
static int32_t t199 = -71;


void f0(void) {
    	int8_t x1 = -1;
	int32_t t0 = 1;

    t0 = (x1^(x2!=(x3==x4)));

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -1;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -464532;

    t1 = (x5^(x6!=(x7==x8)));

    if (t1 != -19) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile int64_t x10 = INT64_MAX;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = 3831961;

    t2 = (x9^(x10!=(x11==x12)));

    if (t2 != 126) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 32050837347LLU;
	static int32_t x14 = INT32_MAX;
	uint32_t x15 = 984235555U;
	volatile uint32_t x16 = UINT32_MAX;
	static uint64_t t3 = 740795516748527LLU;

    t3 = (x13^(x14!=(x15==x16)));

    if (t3 != 32050837346LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	uint32_t x18 = 1380U;
	volatile int64_t x19 = INT64_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 70;

    t4 = (x17^(x18!=(x19==x20)));

    if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 249943U;
	static volatile int16_t x24 = -1;

    t5 = (x21^(x22!=(x23==x24)));

    if (t5 != 249942U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	uint64_t x28 = UINT64_MAX;

    t6 = (x25^(x26!=(x27==x28)));

    if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 1667744U;
	int16_t x30 = -1;
	int8_t x31 = INT8_MIN;

    t7 = (x29^(x30!=(x31==x32)));

    if (t7 != 1667745U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x35 = 6;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = -14;

    t8 = (x33^(x34!=(x35==x36)));

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 11320126743LL;
	uint32_t x38 = 22972036U;
	int64_t x39 = 28LL;
	int8_t x40 = INT8_MAX;
	volatile int64_t t9 = -5LL;

    t9 = (x37^(x38!=(x39==x40)));

    if (t9 != 11320126742LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = -1LL;
	volatile int32_t x42 = 29175;
	int16_t x43 = INT16_MAX;
	volatile int64_t t10 = -5970777718062LL;

    t10 = (x41^(x42!=(x43==x44)));

    if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = 9;
	volatile int32_t x46 = INT32_MIN;
	uint8_t x47 = 3U;
	int16_t x48 = INT16_MAX;

    t11 = (x45^(x46!=(x47==x48)));

    if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 39LLU;
	uint16_t x50 = UINT16_MAX;
	static uint32_t x51 = 1834352274U;
	uint8_t x52 = 0U;
	uint64_t t12 = 99431102LLU;

    t12 = (x49^(x50!=(x51==x52)));

    if (t12 != 38LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1757U;
	static int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -132606;

    t13 = (x53^(x54!=(x55==x56)));

    if (t13 != 1756) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x60 = INT16_MIN;
	static int64_t t14 = -756960007LL;

    t14 = (x57^(x58!=(x59==x60)));

    if (t14 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 239249557371997LLU;
	static volatile uint64_t x62 = 4231757548308904057LLU;
	int64_t x63 = INT64_MAX;
	uint16_t x64 = 51U;
	volatile uint64_t t15 = 23418268770839LLU;

    t15 = (x61^(x62!=(x63==x64)));

    if (t15 != 239249557371996LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = 155493594246698LLU;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -71157;

    t16 = (x65^(x66!=(x67==x68)));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 53U;
	static int32_t x71 = -1;
	volatile uint64_t x72 = UINT64_MAX;
	uint32_t t17 = 164622935U;

    t17 = (x69^(x70!=(x71==x72)));

    if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int16_t x75 = INT16_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t18 = 29528219;

    t18 = (x73^(x74!=(x75==x76)));

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	int32_t x78 = 195;
	int16_t x80 = INT16_MIN;

    t19 = (x77^(x78!=(x79==x80)));

    if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	uint32_t x84 = 63U;
	volatile int32_t t20 = 2013304;

    t20 = (x81^(x82!=(x83==x84)));

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x86 = INT64_MIN;
	static int64_t t21 = 8010LL;

    t21 = (x85^(x86!=(x87==x88)));

    if (t21 != -65LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = INT8_MIN;
	int32_t x92 = INT32_MAX;
	static uint32_t t22 = 3846U;

    t22 = (x89^(x90!=(x91==x92)));

    if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = 26;
	volatile uint8_t x95 = UINT8_MAX;
	volatile uint16_t x96 = UINT16_MAX;
	static volatile int32_t t23 = 13388;

    t23 = (x93^(x94!=(x95==x96)));

    if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x97 = 9513405816LLU;
	int8_t x98 = INT8_MAX;
	static uint32_t x100 = 6906U;
	uint64_t t24 = 770LLU;

    t24 = (x97^(x98!=(x99==x100)));

    if (t24 != 9513405817LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	int16_t x104 = -8;
	static int32_t t25 = 13218979;

    t25 = (x101^(x102!=(x103==x104)));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	static int16_t x107 = INT16_MIN;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 5669104;

    t26 = (x105^(x106!=(x107==x108)));

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	uint32_t x110 = 102771550U;
	uint32_t x111 = 3248477U;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t27 = 1087580LLU;

    t27 = (x109^(x110!=(x111==x112)));

    if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 1697611376U;
	int8_t x116 = INT8_MIN;
	uint32_t t28 = 1U;

    t28 = (x113^(x114!=(x115==x116)));

    if (t28 != 1697611377U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MAX;
	uint64_t x118 = 13865075339186585LLU;
	int16_t x119 = -1;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = -606429;

    t29 = (x117^(x118!=(x119==x120)));

    if (t29 != 126) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 14U;
	uint8_t x122 = UINT8_MAX;
	uint32_t x124 = 458288U;

    t30 = (x121^(x122!=(x123==x124)));

    if (t30 != 15) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 19150484;
	volatile int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = -1;

    t31 = (x125^(x126!=(x127==x128)));

    if (t31 != 19150485) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x129 = 27U;
	volatile int32_t x131 = INT32_MAX;
	int32_t t32 = -393222133;

    t32 = (x129^(x130!=(x131==x132)));

    if (t32 != 26) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x133 = UINT32_MAX;
	int32_t x134 = -1;
	uint64_t x135 = 1LLU;
	uint32_t t33 = 1136U;

    t33 = (x133^(x134!=(x135==x136)));

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 1230429U;
	uint64_t x138 = 1900LLU;
	uint32_t x139 = UINT32_MAX;
	volatile uint32_t x140 = UINT32_MAX;
	volatile uint32_t t34 = 47U;

    t34 = (x137^(x138!=(x139==x140)));

    if (t34 != 1230428U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -547661125;
	int64_t x142 = INT64_MIN;
	static uint8_t x143 = UINT8_MAX;
	static int16_t x144 = -6613;
	volatile int32_t t35 = -222251491;

    t35 = (x141^(x142!=(x143==x144)));

    if (t35 != -547661126) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 60199965U;
	static volatile int64_t x146 = -55707374674174LL;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -1;
	volatile uint32_t t36 = 8328U;

    t36 = (x145^(x146!=(x147==x148)));

    if (t36 != 60199964U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x149 = 12U;
	int16_t x152 = -1;
	volatile int32_t t37 = -586035552;

    t37 = (x149^(x150!=(x151==x152)));

    if (t37 != 13) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = UINT8_MAX;
	volatile uint64_t x156 = 7417LLU;
	volatile int64_t t38 = 114946671349506LL;

    t38 = (x153^(x154!=(x155==x156)));

    if (t38 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 3964531LLU;
	volatile int64_t x158 = -2699127771927839LL;
	int8_t x159 = -7;
	int16_t x160 = -1;
	uint64_t t39 = 6648174075859796LLU;

    t39 = (x157^(x158!=(x159==x160)));

    if (t39 != 3964530LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x163 = -1;
	int16_t x164 = INT16_MAX;
	uint32_t t40 = 125347175U;

    t40 = (x161^(x162!=(x163==x164)));

    if (t40 != 1012348U) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	static uint16_t x166 = UINT16_MAX;
	int16_t x167 = -64;
	volatile int32_t t41 = 20960080;

    t41 = (x165^(x166!=(x167==x168)));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 39389;

    t42 = (x169^(x170!=(x171==x172)));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 14841U;
	volatile int8_t x176 = INT8_MIN;
	int32_t t43 = -5;

    t43 = (x173^(x174!=(x175==x176)));

    if (t43 != 254) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = INT16_MIN;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -1028150050;

    t44 = (x177^(x178!=(x179==x180)));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -33695226038644LL;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t45 = 1879LL;

    t45 = (x181^(x182!=(x183==x184)));

    if (t45 != -33695226038643LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 545U;
	volatile int16_t x186 = 0;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = 6667854LL;
	volatile int32_t t46 = -8116;

    t46 = (x185^(x186!=(x187==x188)));

    if (t46 != 545) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 14276LLU;
	int16_t x191 = -1;
	static volatile int8_t x192 = 37;
	volatile uint64_t t47 = 1105425788206004802LLU;

    t47 = (x189^(x190!=(x191==x192)));

    if (t47 != 14277LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x194 = 201U;
	static int16_t x195 = -1;
	static int16_t x196 = 0;
	static volatile int32_t t48 = 115288004;

    t48 = (x193^(x194!=(x195==x196)));

    if (t48 != 12) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -2373;
	int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 80;

    t49 = (x197^(x198!=(x199==x200)));

    if (t49 != 126) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	int64_t x202 = INT64_MIN;
	uint16_t x203 = 4U;
	int16_t x204 = INT16_MAX;
	int32_t t50 = -3;

    t50 = (x201^(x202!=(x203==x204)));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 1;
	static int8_t x206 = INT8_MIN;
	int8_t x207 = 5;
	int32_t x208 = INT32_MIN;
	int32_t t51 = -199302;

    t51 = (x205^(x206!=(x207==x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 12U;
	static int32_t x210 = 87315187;
	static int16_t x211 = -1;
	int64_t x212 = -1779404911599498LL;
	volatile int32_t t52 = 621726;

    t52 = (x209^(x210!=(x211==x212)));

    if (t52 != 13) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = -2;
	int64_t x215 = -231684438808LL;
	volatile int32_t x216 = -3;
	int32_t t53 = 7884;

    t53 = (x213^(x214!=(x215==x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = -1;
	volatile uint32_t x219 = 443815U;
	uint8_t x220 = 2U;

    t54 = (x217^(x218!=(x219==x220)));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MAX;
	static uint64_t x222 = 19049481487LLU;
	int8_t x223 = INT8_MIN;
	int16_t x224 = INT16_MAX;
	int32_t t55 = 0;

    t55 = (x221^(x222!=(x223==x224)));

    if (t55 != 2147483646) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	uint32_t x226 = 102284U;
	static int32_t x228 = 942151149;
	static volatile int64_t t56 = 461693LL;

    t56 = (x225^(x226!=(x227==x228)));

    if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 3U;
	int8_t x230 = 10;
	static int64_t x231 = INT64_MAX;
	uint8_t x232 = 3U;
	int32_t t57 = 2;

    t57 = (x229^(x230!=(x231==x232)));

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -23020;

    t58 = (x233^(x234!=(x235==x236)));

    if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MAX;
	int32_t t59 = -203541;

    t59 = (x237^(x238!=(x239==x240)));

    if (t59 != 174) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int16_t x244 = INT16_MAX;

    t60 = (x241^(x242!=(x243==x244)));

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = 38405738;
	int8_t x246 = INT8_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = 199118443;

    t61 = (x245^(x246!=(x247==x248)));

    if (t61 != 38405739) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile int32_t t62 = 8;

    t62 = (x249^(x250!=(x251==x252)));

    if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 1;
	int16_t x254 = 1;
	static volatile uint8_t x255 = 71U;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 13;

    t63 = (x253^(x254!=(x255==x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -1;
	uint8_t x259 = UINT8_MAX;
	int32_t x260 = -1;
	int32_t t64 = 2631;

    t64 = (x257^(x258!=(x259==x260)));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 525003243U;
	uint16_t x262 = 1702U;
	int16_t x263 = 0;
	uint16_t x264 = 6160U;
	volatile uint32_t t65 = 1834625U;

    t65 = (x261^(x262!=(x263==x264)));

    if (t65 != 525003242U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = -1;
	static int8_t x268 = -1;
	int32_t t66 = 56;

    t66 = (x265^(x266!=(x267==x268)));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x271 = INT16_MIN;
	static int32_t x272 = -1;
	int32_t t67 = 1;

    t67 = (x269^(x270!=(x271==x272)));

    if (t67 != 126) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 334788LL;
	static int16_t x275 = -9882;
	uint8_t x276 = UINT8_MAX;
	int64_t t68 = 8370041LL;

    t68 = (x273^(x274!=(x275==x276)));

    if (t68 != 334789LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x279 = 0U;
	volatile int32_t t69 = 62672;

    t69 = (x277^(x278!=(x279==x280)));

    if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = -527;
	volatile int16_t x283 = INT16_MIN;
	volatile int32_t t70 = 91;

    t70 = (x281^(x282!=(x283==x284)));

    if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x285 = INT32_MIN;
	int32_t x286 = -489619952;
	uint16_t x287 = 41U;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -433768;

    t71 = (x285^(x286!=(x287==x288)));

    if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = 75819887U;
	static int64_t x290 = -1LL;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = 13070036U;
	uint32_t t72 = 38387U;

    t72 = (x289^(x290!=(x291==x292)));

    if (t72 != 75819886U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	volatile uint64_t x295 = UINT64_MAX;
	uint64_t x296 = 3LLU;
	int32_t t73 = -1250;

    t73 = (x293^(x294!=(x295==x296)));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x297 = UINT16_MAX;
	volatile int64_t x298 = -1LL;
	volatile uint8_t x299 = UINT8_MAX;
	int32_t x300 = -1;

    t74 = (x297^(x298!=(x299==x300)));

    if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x302 = 1;
	volatile int16_t x303 = 4;
	static volatile int32_t x304 = -447914792;
	static volatile int32_t t75 = 306772877;

    t75 = (x301^(x302!=(x303==x304)));

    if (t75 != 62) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -51764;
	uint32_t x306 = 69U;
	uint16_t x308 = 80U;
	volatile int32_t t76 = -64;

    t76 = (x305^(x306!=(x307==x308)));

    if (t76 != -51763) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x310 = INT16_MAX;
	uint64_t x311 = 587736805LLU;
	int16_t x312 = 1454;
	int32_t t77 = -599183498;

    t77 = (x309^(x310!=(x311==x312)));

    if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = 104721895LL;
	static volatile int16_t x316 = INT16_MIN;
	int64_t t78 = 1672719209LL;

    t78 = (x313^(x314!=(x315==x316)));

    if (t78 != 104721894LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 25U;
	int32_t x318 = -191581689;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	static volatile int32_t t79 = -16615825;

    t79 = (x317^(x318!=(x319==x320)));

    if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = 2571907311796324977LL;
	volatile int32_t x323 = INT32_MIN;
	int64_t x324 = -1LL;
	uint32_t t80 = 315U;

    t80 = (x321^(x322!=(x323==x324)));

    if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x325 = INT16_MIN;
	static uint8_t x326 = UINT8_MAX;
	static uint8_t x327 = UINT8_MAX;
	volatile uint32_t x328 = 873951449U;
	int32_t t81 = -423;

    t81 = (x325^(x326!=(x327==x328)));

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x329 = INT8_MIN;
	volatile int32_t x330 = -1;
	volatile uint64_t x331 = 490434282313LLU;
	static int32_t t82 = -979732;

    t82 = (x329^(x330!=(x331==x332)));

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	static int64_t x334 = -2848342LL;
	uint64_t x335 = 75LLU;
	static int64_t x336 = -1417717LL;
	volatile int32_t t83 = 560869;

    t83 = (x333^(x334!=(x335==x336)));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = -1;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -154392;

    t84 = (x337^(x338!=(x339==x340)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x342 = 1055649954451037LLU;
	uint16_t x344 = 1582U;
	static int64_t t85 = -798799419231874LL;

    t85 = (x341^(x342!=(x343==x344)));

    if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = INT16_MAX;
	static int32_t x347 = -1;
	int64_t x348 = INT64_MIN;
	int32_t t86 = -1;

    t86 = (x345^(x346!=(x347==x348)));

    if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	int64_t x350 = INT64_MAX;
	volatile int16_t x352 = INT16_MAX;
	static uint32_t t87 = 4U;

    t87 = (x349^(x350!=(x351==x352)));

    if (t87 != 4294967294U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x353 = 93924U;
	uint16_t x354 = 1082U;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -1;
	volatile uint32_t t88 = 118301U;

    t88 = (x353^(x354!=(x355==x356)));

    if (t88 != 93925U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x357 = UINT8_MAX;
	volatile int16_t x359 = 22;
	volatile int16_t x360 = -278;
	static int32_t t89 = 2245;

    t89 = (x357^(x358!=(x359==x360)));

    if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = 2574180;
	int8_t x362 = 3;
	int64_t x363 = INT64_MIN;
	volatile int8_t x364 = 1;
	int32_t t90 = 165447413;

    t90 = (x361^(x362!=(x363==x364)));

    if (t90 != 2574181) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = 94983LL;
	volatile uint32_t x366 = 29964359U;
	static uint16_t x367 = UINT16_MAX;
	int64_t x368 = INT64_MIN;
	static int64_t t91 = 24188193682LL;

    t91 = (x365^(x366!=(x367==x368)));

    if (t91 != 94982LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = INT32_MAX;
	int16_t x372 = -1;
	volatile int32_t t92 = -15081;

    t92 = (x369^(x370!=(x371==x372)));

    if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = 6;
	uint32_t x375 = 159002U;
	volatile int16_t x376 = INT16_MAX;
	int32_t t93 = -1;

    t93 = (x373^(x374!=(x375==x376)));

    if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = -1;
	int8_t x379 = -13;
	static volatile int32_t t94 = -137395467;

    t94 = (x377^(x378!=(x379==x380)));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = UINT16_MAX;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = 223154133390226783LLU;
	static volatile int32_t t95 = -15491159;

    t95 = (x381^(x382!=(x383==x384)));

    if (t95 != 65534) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 3;
	int16_t x386 = INT16_MAX;
	uint16_t x387 = UINT16_MAX;
	uint64_t x388 = UINT64_MAX;
	volatile int32_t t96 = 6271;

    t96 = (x385^(x386!=(x387==x388)));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = -14076;
	static int64_t x391 = -1LL;
	uint64_t x392 = 4096215053501LLU;
	int32_t t97 = 35750;

    t97 = (x389^(x390!=(x391==x392)));

    if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 8U;
	static volatile int32_t x394 = INT32_MIN;
	int64_t x395 = -1LL;
	static int8_t x396 = -1;
	static uint32_t t98 = 1313982U;

    t98 = (x393^(x394!=(x395==x396)));

    if (t98 != 9U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = 64626815;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -6408;
	static int32_t t99 = 132938;

    t99 = (x397^(x398!=(x399==x400)));

    if (t99 != 64626814) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	uint32_t x402 = 49173U;
	static volatile uint32_t x403 = 1158197343U;
	int8_t x404 = -21;
	int32_t t100 = -42;

    t100 = (x401^(x402!=(x403==x404)));

    if (t100 != 65534) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MAX;
	uint32_t x406 = 119366U;
	volatile int8_t x407 = INT8_MIN;
	int64_t t101 = -44994384301772650LL;

    t101 = (x405^(x406!=(x407==x408)));

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = 4U;
	static uint32_t x410 = UINT32_MAX;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -1;
	int32_t t102 = 209241610;

    t102 = (x409^(x410!=(x411==x412)));

    if (t102 != 5) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	volatile uint16_t x414 = 31U;
	volatile uint32_t x415 = 3071187U;
	uint64_t x416 = 120LLU;
	volatile uint32_t t103 = 13219329U;

    t103 = (x413^(x414!=(x415==x416)));

    if (t103 != 4294967294U) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x417 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	volatile int32_t t104 = 71644;

    t104 = (x417^(x418!=(x419==x420)));

    if (t104 != -32767) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x422 = UINT8_MAX;
	int32_t x423 = INT32_MIN;
	volatile int64_t x424 = -1LL;

    t105 = (x421^(x422!=(x423==x424)));

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x426 = -914152;
	volatile int8_t x427 = INT8_MIN;
	uint64_t x428 = 14404342407959LLU;
	static volatile int32_t t106 = -115;

    t106 = (x425^(x426!=(x427==x428)));

    if (t106 != -127) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = -429;
	uint16_t x430 = 4U;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = 7;
	static volatile int32_t t107 = 409082;

    t107 = (x429^(x430!=(x431==x432)));

    if (t107 != -430) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MAX;
	volatile int64_t t108 = 1265975308934LL;

    t108 = (x433^(x434!=(x435==x436)));

    if (t108 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 1071569759LL;
	volatile int8_t x438 = INT8_MIN;
	uint64_t x440 = 63845818973091LLU;
	volatile int64_t t109 = 1622438648LL;

    t109 = (x437^(x438!=(x439==x440)));

    if (t109 != 1071569758LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	uint32_t x442 = 302251U;
	int8_t x443 = -13;

    t110 = (x441^(x442!=(x443==x444)));

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	uint8_t x446 = 0U;
	int64_t x447 = INT64_MAX;
	int8_t x448 = INT8_MIN;
	volatile int32_t t111 = INT32_MAX;

    t111 = (x445^(x446!=(x447==x448)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 4U;
	int32_t x450 = INT32_MIN;
	int16_t x451 = -1;
	int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 1;

    t112 = (x449^(x450!=(x451==x452)));

    if (t112 != 5) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x453 = 155U;
	volatile int16_t x454 = INT16_MIN;
	int32_t x455 = INT32_MIN;
	uint64_t x456 = UINT64_MAX;
	int32_t t113 = -48995;

    t113 = (x453^(x454!=(x455==x456)));

    if (t113 != 154) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MIN;
	volatile int32_t x459 = -1;
	uint16_t x460 = 41U;
	int32_t t114 = -1;

    t114 = (x457^(x458!=(x459==x460)));

    if (t114 != 65534) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MIN;
	uint16_t x463 = 282U;
	int16_t x464 = 860;
	volatile int32_t t115 = 2009181;

    t115 = (x461^(x462!=(x463==x464)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MAX;
	int8_t x466 = INT8_MIN;
	uint8_t x467 = UINT8_MAX;

    t116 = (x465^(x466!=(x467==x468)));

    if (t116 != 2147483646) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = 15U;
	volatile int64_t x470 = INT64_MAX;
	volatile int64_t x471 = INT64_MIN;
	volatile uint8_t x472 = 5U;
	static volatile int32_t t117 = 958565648;

    t117 = (x469^(x470!=(x471==x472)));

    if (t117 != 14) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x475 = UINT64_MAX;
	int8_t x476 = INT8_MAX;
	volatile uint64_t t118 = 612579177LLU;

    t118 = (x473^(x474!=(x475==x476)));

    if (t118 != 1591516731LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	uint32_t x478 = 1989U;
	int8_t x479 = INT8_MAX;
	int8_t x480 = INT8_MIN;
	int64_t t119 = 42368903LL;

    t119 = (x477^(x478!=(x479==x480)));

    if (t119 != -2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -403;
	int64_t x482 = INT64_MIN;
	int64_t x484 = INT64_MIN;
	int32_t t120 = -1431294;

    t120 = (x481^(x482!=(x483==x484)));

    if (t120 != -404) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int8_t x486 = -1;
	int16_t x488 = 1;
	volatile int32_t t121 = 2754770;

    t121 = (x485^(x486!=(x487==x488)));

    if (t121 != -2) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x489 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	volatile int32_t t122 = -582673319;

    t122 = (x489^(x490!=(x491==x492)));

    if (t122 != -2147483647) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x494 = 49U;
	static uint32_t x495 = UINT32_MAX;
	static int16_t x496 = INT16_MIN;
	int32_t t123 = -459577;

    t123 = (x493^(x494!=(x495==x496)));

    if (t123 != 10) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = INT32_MIN;
	int16_t x499 = 10506;
	int16_t x500 = INT16_MIN;

    t124 = (x497^(x498!=(x499==x500)));

    if (t124 != -2147483647) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -22;
	uint16_t x502 = 25715U;
	static int32_t x503 = -689045753;
	static uint32_t x504 = UINT32_MAX;
	volatile int32_t t125 = 3339;

    t125 = (x501^(x502!=(x503==x504)));

    if (t125 != -21) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	static uint16_t x507 = 674U;
	static int32_t x508 = -1;
	volatile int32_t t126 = 146316;

    t126 = (x505^(x506!=(x507==x508)));

    if (t126 != 2147483646) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int32_t x511 = INT32_MIN;
	volatile int64_t x512 = INT64_MIN;
	int32_t t127 = 12793;

    t127 = (x509^(x510!=(x511==x512)));

    if (t127 != 65534) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	static volatile int8_t x514 = INT8_MIN;
	int8_t x515 = -4;
	int8_t x516 = -6;
	volatile int64_t t128 = 1111LL;

    t128 = (x513^(x514!=(x515==x516)));

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -6920504333074448LL;
	int32_t x519 = INT32_MIN;
	int16_t x520 = -1;

    t129 = (x517^(x518!=(x519==x520)));

    if (t129 != -6920504333074447LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MAX;
	int64_t x524 = 31913LL;
	volatile uint32_t t130 = 0U;

    t130 = (x521^(x522!=(x523==x524)));

    if (t130 != 4294967294U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x526 = 148457U;
	uint8_t x527 = 46U;
	uint8_t x528 = UINT8_MAX;
	static volatile uint32_t t131 = 50U;

    t131 = (x525^(x526!=(x527==x528)));

    if (t131 != 93888575U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = 210U;
	int32_t x531 = INT32_MIN;
	volatile int16_t x532 = INT16_MAX;
	int32_t t132 = -397;

    t132 = (x529^(x530!=(x531==x532)));

    if (t132 != -11) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = INT8_MIN;
	static uint64_t x534 = 18266183LLU;
	int32_t x535 = -138198;
	volatile int32_t t133 = 4;

    t133 = (x533^(x534!=(x535==x536)));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 7LLU;
	static int8_t x538 = 49;
	int16_t x539 = 2787;
	int32_t x540 = INT32_MAX;
	static uint64_t t134 = 9326190043135LLU;

    t134 = (x537^(x538!=(x539==x540)));

    if (t134 != 6LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = -6;
	static uint32_t x544 = 1U;
	volatile int32_t t135 = -4;

    t135 = (x541^(x542!=(x543==x544)));

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x545 = UINT64_MAX;
	int32_t x546 = -1;
	uint8_t x547 = 2U;
	volatile uint64_t t136 = 244289552LLU;

    t136 = (x545^(x546!=(x547==x548)));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x550 = INT32_MIN;
	static int32_t x551 = INT32_MIN;
	int32_t t137 = 58;

    t137 = (x549^(x550!=(x551==x552)));

    if (t137 != 126) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x553 = 2021211075918LLU;
	static volatile int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MAX;
	volatile int64_t x556 = 721384910108066161LL;

    t138 = (x553^(x554!=(x555==x556)));

    if (t138 != 2021211075919LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x558 = 19U;
	uint16_t x559 = 1474U;
	uint64_t x560 = 225777039LLU;

    t139 = (x557^(x558!=(x559==x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = -79;
	int16_t x562 = INT16_MIN;
	volatile int32_t x563 = INT32_MAX;
	volatile int32_t t140 = 407746984;

    t140 = (x561^(x562!=(x563==x564)));

    if (t140 != -80) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x566 = INT16_MIN;
	int32_t x567 = INT32_MAX;
	static volatile uint16_t x568 = 80U;
	volatile int32_t t141 = -335520;

    t141 = (x565^(x566!=(x567==x568)));

    if (t141 != -32767) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MIN;
	static int64_t x571 = -1LL;
	int32_t x572 = 8142072;
	volatile int64_t t142 = -473244773454938776LL;

    t142 = (x569^(x570!=(x571==x572)));

    if (t142 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 2226;
	static int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MIN;
	volatile int32_t t143 = 1;

    t143 = (x573^(x574!=(x575==x576)));

    if (t143 != 2227) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MAX;
	static int32_t x580 = -1;

    t144 = (x577^(x578!=(x579==x580)));

    if (t144 != 126) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = -1;
	int32_t x583 = INT32_MAX;

    t145 = (x581^(x582!=(x583==x584)));

    if (t145 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -77847211LL;
	volatile uint64_t x586 = 21523168LLU;
	int32_t x587 = INT32_MIN;

    t146 = (x585^(x586!=(x587==x588)));

    if (t146 != -77847212LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x590 = 6878;
	int16_t x591 = -1;
	int16_t x592 = 2;
	volatile uint64_t t147 = 96191217LLU;

    t147 = (x589^(x590!=(x591==x592)));

    if (t147 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -1;
	int16_t x594 = INT16_MIN;
	uint64_t x595 = 858497002774878393LLU;
	int32_t t148 = -30;

    t148 = (x593^(x594!=(x595==x596)));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -266210582415759LL;
	int32_t x598 = -1;

    t149 = (x597^(x598!=(x599==x600)));

    if (t149 != -266210582415760LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 557242U;
	int32_t x603 = -1;
	int8_t x604 = INT8_MIN;
	volatile uint32_t t150 = 57148U;

    t150 = (x601^(x602!=(x603==x604)));

    if (t150 != 557243U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = -1LL;
	int8_t x607 = -1;
	static volatile int16_t x608 = INT16_MAX;
	volatile int32_t t151 = -694882;

    t151 = (x605^(x606!=(x607==x608)));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = -1;
	volatile int8_t x611 = INT8_MIN;
	volatile uint32_t x612 = 251044U;
	static volatile uint32_t t152 = 94U;

    t152 = (x609^(x610!=(x611==x612)));

    if (t152 != 5U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	static int64_t x614 = INT64_MAX;
	static uint64_t x615 = UINT64_MAX;

    t153 = (x613^(x614!=(x615==x616)));

    if (t153 != 4294967294U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = INT32_MIN;
	static int32_t x618 = INT32_MIN;
	volatile uint8_t x619 = UINT8_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t154 = 482922236;

    t154 = (x617^(x618!=(x619==x620)));

    if (t154 != -2147483647) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MIN;
	volatile int32_t x623 = INT32_MAX;

    t155 = (x621^(x622!=(x623==x624)));

    if (t155 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = 575416LL;
	volatile uint16_t x626 = 3U;
	uint16_t x627 = 1U;
	static int64_t t156 = 134919802591087653LL;

    t156 = (x625^(x626!=(x627==x628)));

    if (t156 != 575417LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x630 = INT32_MAX;
	volatile int16_t x631 = 1;
	int32_t x632 = INT32_MIN;
	volatile uint32_t t157 = 108U;

    t157 = (x629^(x630!=(x631==x632)));

    if (t157 != 713066U) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x634 = 11;
	int32_t x635 = INT32_MAX;
	uint64_t x636 = UINT64_MAX;
	volatile uint32_t t158 = 0U;

    t158 = (x633^(x634!=(x635==x636)));

    if (t158 != 7U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 339362158365LLU;
	int32_t x638 = INT32_MAX;
	static int8_t x639 = -32;
	uint16_t x640 = UINT16_MAX;
	volatile uint64_t t159 = 84379LLU;

    t159 = (x637^(x638!=(x639==x640)));

    if (t159 != 339362158364LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x642 = 0U;
	uint32_t x643 = 1569U;
	static volatile uint64_t x644 = 4LLU;
	static volatile int32_t t160 = INT32_MAX;

    t160 = (x641^(x642!=(x643==x644)));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 16049LL;
	uint16_t x646 = 507U;
	int8_t x647 = -1;
	int8_t x648 = -1;

    t161 = (x645^(x646!=(x647==x648)));

    if (t161 != 16048LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	static uint16_t x650 = 48U;
	volatile uint32_t x652 = 127217U;
	int32_t t162 = -14650;

    t162 = (x649^(x650!=(x651==x652)));

    if (t162 != 65534) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = INT32_MIN;
	static int16_t x655 = -1;
	volatile uint16_t x656 = 12242U;

    t163 = (x653^(x654!=(x655==x656)));

    if (t163 != 371) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -1LL;
	static volatile int8_t x659 = -1;
	int8_t x660 = -60;

    t164 = (x657^(x658!=(x659==x660)));

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = 4264313;
	volatile uint32_t x662 = 31092108U;
	uint64_t x663 = 11103LLU;
	int8_t x664 = INT8_MAX;
	static volatile int32_t t165 = 2;

    t165 = (x661^(x662!=(x663==x664)));

    if (t165 != 4264312) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	uint16_t x666 = UINT16_MAX;
	int8_t x667 = -1;
	uint64_t x668 = 1661288922029LLU;
	int32_t t166 = 0;

    t166 = (x665^(x666!=(x667==x668)));

    if (t166 != -32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	uint32_t x670 = 1U;
	int64_t x671 = -1LL;
	int8_t x672 = 15;
	int32_t t167 = -2111;

    t167 = (x669^(x670!=(x671==x672)));

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	uint32_t x674 = 3861U;
	int32_t x675 = -1;
	int32_t x676 = INT32_MIN;
	int32_t t168 = 326081;

    t168 = (x673^(x674!=(x675==x676)));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x677 = 173121281504648LLU;
	int8_t x678 = INT8_MAX;
	int8_t x679 = INT8_MIN;
	uint8_t x680 = 33U;
	uint64_t t169 = 457656428028487779LLU;

    t169 = (x677^(x678!=(x679==x680)));

    if (t169 != 173121281504649LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x682 = 136U;
	int32_t x683 = -1;
	static volatile int32_t t170 = -226208;

    t170 = (x681^(x682!=(x683==x684)));

    if (t170 != 65534) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 1U;
	volatile int64_t x686 = INT64_MIN;
	static int32_t x688 = INT32_MAX;

    t171 = (x685^(x686!=(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int16_t x691 = 11;
	int8_t x692 = -1;
	static volatile int32_t t172 = -768308796;

    t172 = (x689^(x690!=(x691==x692)));

    if (t172 != -2147483647) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x693 = UINT16_MAX;
	int8_t x694 = -1;
	int64_t x696 = -1LL;
	volatile int32_t t173 = -31017742;

    t173 = (x693^(x694!=(x695==x696)));

    if (t173 != 65534) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;

    t174 = (x697^(x698!=(x699==x700)));

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x702 = INT64_MIN;
	volatile uint64_t x704 = 752802629LLU;
	int32_t t175 = -501834142;

    t175 = (x701^(x702!=(x703==x704)));

    if (t175 != 186) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -360651528LL;
	int16_t x707 = -3;
	uint16_t x708 = 145U;

    t176 = (x705^(x706!=(x707==x708)));

    if (t176 != -360651527LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 1LLU;
	int64_t x710 = -1LL;
	static uint8_t x712 = UINT8_MAX;

    t177 = (x709^(x710!=(x711==x712)));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -2386;
	volatile int8_t x714 = -1;
	volatile int16_t x715 = -1;
	int8_t x716 = 10;
	volatile int32_t t178 = 849830795;

    t178 = (x713^(x714!=(x715==x716)));

    if (t178 != -2385) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x718 = 0;
	int32_t x719 = -1;
	uint8_t x720 = 22U;

    t179 = (x717^(x718!=(x719==x720)));

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 184397454302216563LL;
	int8_t x722 = 0;
	static int32_t x723 = INT32_MIN;
	int16_t x724 = INT16_MIN;
	volatile int64_t t180 = -82367LL;

    t180 = (x721^(x722!=(x723==x724)));

    if (t180 != 184397454302216563LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x726 = UINT8_MAX;
	int16_t x727 = INT16_MAX;
	uint8_t x728 = 2U;
	uint32_t t181 = 814352842U;

    t181 = (x725^(x726!=(x727==x728)));

    if (t181 != 4294967294U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	static int16_t x731 = INT16_MIN;
	int64_t x732 = INT64_MIN;
	int32_t t182 = -734899;

    t182 = (x729^(x730!=(x731==x732)));

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MIN;
	int32_t x734 = INT32_MIN;
	static int32_t x735 = -1;
	uint8_t x736 = UINT8_MAX;

    t183 = (x733^(x734!=(x735==x736)));

    if (t183 != -127) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = -3072;
	int64_t x738 = -242259362280037568LL;
	static volatile uint32_t x739 = 56731506U;
	int16_t x740 = 7;
	static volatile int32_t t184 = -58185014;

    t184 = (x737^(x738!=(x739==x740)));

    if (t184 != -3071) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 1U;
	int8_t x742 = -1;
	int64_t x743 = INT64_MIN;
	int64_t x744 = -1LL;
	int32_t t185 = 7749;

    t185 = (x741^(x742!=(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 11U;
	static int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	int8_t x748 = 24;
	volatile int32_t t186 = 5;

    t186 = (x745^(x746!=(x747==x748)));

    if (t186 != 10) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = 139259LL;
	volatile int32_t x751 = INT32_MIN;
	int32_t x752 = 420844223;
	volatile int32_t t187 = -15;

    t187 = (x749^(x750!=(x751==x752)));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = 60U;
	static int32_t x754 = INT32_MIN;
	int16_t x755 = 1;
	volatile uint16_t x756 = UINT16_MAX;
	volatile int32_t t188 = 5653985;

    t188 = (x753^(x754!=(x755==x756)));

    if (t188 != 61) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static int16_t x758 = -1;
	int16_t x759 = -1;
	uint64_t x760 = 7054228486LLU;
	int64_t t189 = 1839LL;

    t189 = (x757^(x758!=(x759==x760)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 470U;
	int16_t x763 = -1;
	static uint64_t x764 = UINT64_MAX;
	static volatile uint32_t t190 = 3671683U;

    t190 = (x761^(x762!=(x763==x764)));

    if (t190 != 471U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x766 = 60U;
	volatile int8_t x767 = -1;
	volatile int16_t x768 = 40;
	volatile int32_t t191 = -1;

    t191 = (x765^(x766!=(x767==x768)));

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MAX;
	uint8_t x770 = 1U;
	int32_t x771 = INT32_MAX;
	int64_t x772 = -222863479986112LL;
	volatile int64_t t192 = -175843153308917258LL;

    t192 = (x769^(x770!=(x771==x772)));

    if (t192 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 615U;
	static int32_t x774 = 236892;
	int32_t x775 = -1;
	int16_t x776 = -3;
	int32_t t193 = -1;

    t193 = (x773^(x774!=(x775==x776)));

    if (t193 != 614) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	uint16_t x779 = 28U;
	static int8_t x780 = 1;

    t194 = (x777^(x778!=(x779==x780)));

    if (t194 != -2147483647) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = INT64_MIN;
	int64_t x784 = INT64_MAX;

    t195 = (x781^(x782!=(x783==x784)));

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	static int64_t x786 = INT64_MIN;
	volatile uint64_t x787 = 5456165528LLU;
	int64_t x788 = -263358160136660LL;
	int32_t t196 = 6678833;

    t196 = (x785^(x786!=(x787==x788)));

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	volatile uint16_t x790 = 225U;
	static uint64_t x791 = 0LLU;
	volatile int16_t x792 = INT16_MIN;
	static int32_t t197 = 60160;

    t197 = (x789^(x790!=(x791==x792)));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	int8_t x795 = -10;
	int64_t x796 = -6042753973596LL;
	volatile int32_t t198 = -10;

    t198 = (x793^(x794!=(x795==x796)));

    if (t198 != 254) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = 3U;
	static int32_t x799 = INT32_MAX;
	static int16_t x800 = INT16_MIN;

    t199 = (x797^(x798!=(x799==x800)));

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

