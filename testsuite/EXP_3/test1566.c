
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

static int64_t x1 = INT64_MIN;
static uint16_t x8 = UINT16_MAX;
int32_t t1 = -80215301;
int64_t t2 = -540104109925903LL;
uint8_t x15 = UINT8_MAX;
static int64_t x18 = INT64_MIN;
uint64_t t4 = 4052442LLU;
int16_t x23 = INT16_MAX;
volatile int32_t t13 = -652258;
int64_t x59 = -169125762726928259LL;
int8_t x61 = INT8_MAX;
uint8_t x62 = 102U;
static volatile uint32_t x72 = 1478918827U;
volatile int32_t t18 = -108;
int8_t x78 = INT8_MIN;
int8_t x80 = INT8_MAX;
uint32_t x84 = 121776U;
int8_t x91 = -1;
int16_t x97 = -1;
volatile uint64_t t25 = 320504031631LLU;
static volatile int32_t x108 = -1;
int64_t x112 = -231128891819LL;
int64_t x123 = INT64_MIN;
volatile int64_t x125 = -1LL;
static uint64_t x134 = 803599334033459965LLU;
uint16_t x136 = UINT16_MAX;
static int16_t x139 = INT16_MIN;
int8_t x140 = 1;
static int16_t x152 = 496;
int32_t t39 = -1;
volatile int16_t x165 = INT16_MAX;
uint8_t x170 = UINT8_MAX;
int32_t x171 = 4169108;
int64_t x172 = INT64_MIN;
int64_t x179 = 690061163LL;
int16_t x181 = INT16_MIN;
static int64_t x184 = -289189513763774LL;
static int32_t t45 = -3;
static int32_t x191 = INT32_MIN;
volatile int32_t x205 = INT32_MIN;
uint16_t x214 = 46U;
volatile int32_t t53 = 48;
int64_t x224 = INT64_MIN;
static uint32_t x231 = UINT32_MAX;
static uint64_t x233 = 21844817624LLU;
uint32_t x261 = 41971U;
int64_t x263 = -557537488LL;
static uint64_t x264 = 8748457055877LLU;
int8_t x265 = -1;
static int32_t x269 = INT32_MAX;
static int16_t x284 = 11142;
int64_t x289 = INT64_MAX;
int64_t t72 = -57868294817033659LL;
int16_t x296 = INT16_MAX;
static uint16_t x304 = 1U;
volatile int64_t t77 = -45476037036879LL;
static int32_t x316 = INT32_MIN;
int8_t x319 = INT8_MIN;
int16_t x329 = -1;
uint32_t x330 = UINT32_MAX;
static uint8_t x336 = 1U;
int8_t x337 = 1;
int32_t x347 = INT32_MIN;
int32_t x351 = -250709;
int16_t x354 = INT16_MIN;
int16_t x356 = -30;
int32_t x357 = INT32_MIN;
int64_t x358 = INT64_MIN;
volatile int64_t t89 = -21390027610919LL;
int32_t x367 = -6684;
int32_t x370 = INT32_MIN;
int32_t x375 = -1;
int64_t x377 = INT64_MIN;
int64_t x378 = INT64_MIN;
int64_t t94 = -2087275222393999LL;
int64_t x382 = INT64_MIN;
volatile uint32_t x383 = 2602579U;
static int8_t x389 = -21;
uint64_t x393 = 2728738810728LLU;
volatile int64_t x399 = -1LL;
volatile uint64_t t99 = 1LLU;
static uint64_t t100 = 270731884849LLU;
volatile int16_t x416 = INT16_MAX;
uint64_t x417 = 7190LLU;
volatile int16_t x418 = 14980;
volatile int8_t x421 = INT8_MIN;
volatile int16_t x423 = 3;
int64_t x425 = INT64_MAX;
uint32_t x428 = UINT32_MAX;
int8_t x429 = INT8_MIN;
uint8_t x432 = 0U;
int32_t t107 = -9730;
volatile int32_t t108 = 260498013;
int32_t x437 = INT32_MAX;
int64_t x439 = INT64_MAX;
int32_t x441 = INT32_MIN;
static volatile uint8_t x453 = UINT8_MAX;
volatile int16_t x459 = -1;
int16_t x462 = -1;
uint8_t x463 = UINT8_MAX;
volatile int8_t x466 = INT8_MIN;
static volatile int16_t x467 = INT16_MIN;
int32_t t116 = 266894666;
int64_t t118 = -18313452LL;
int32_t t119 = -2298;
static int32_t x481 = 13;
volatile uint64_t x484 = 16670987733058LLU;
volatile uint64_t t121 = 47LLU;
int32_t x492 = INT32_MIN;
int8_t x493 = INT8_MAX;
volatile int32_t x496 = 40965;
volatile int32_t x502 = INT32_MIN;
int8_t x511 = INT8_MAX;
int16_t x512 = 1052;
volatile int64_t x520 = -443201530350916LL;
uint16_t x521 = 4U;
int32_t x528 = INT32_MAX;
uint8_t x530 = 54U;
uint32_t x532 = 6U;
int32_t x534 = INT32_MIN;
int8_t x536 = INT8_MIN;
volatile int64_t t136 = -645LL;
uint64_t x552 = 135790958632671558LLU;
volatile int32_t x556 = INT32_MIN;
uint32_t x557 = UINT32_MAX;
uint64_t x560 = UINT64_MAX;
volatile uint32_t t139 = 977694U;
int16_t x564 = -18;
int16_t x565 = -1;
int32_t x568 = INT32_MAX;
static volatile int32_t t141 = 33472;
int8_t x576 = INT8_MIN;
uint64_t t144 = 10LLU;
int16_t x581 = -50;
volatile int32_t t147 = -4603;
uint8_t x597 = UINT8_MAX;
int8_t x600 = INT8_MIN;
int64_t x602 = INT64_MAX;
int64_t t150 = -2007904735636944LL;
int8_t x606 = INT8_MIN;
static volatile int32_t t152 = 1;
uint64_t x613 = 3758583549429945LLU;
uint8_t x614 = UINT8_MAX;
uint8_t x615 = 127U;
uint64_t x623 = 1247245LLU;
int16_t x624 = INT16_MIN;
int8_t x631 = 7;
volatile uint64_t x634 = 13LLU;
volatile uint64_t t158 = 6218028754845638022LLU;
int32_t x637 = INT32_MAX;
int16_t x638 = INT16_MIN;
int32_t x640 = -64345575;
int32_t t159 = -15222312;
static volatile uint16_t x644 = 798U;
int32_t x652 = -77485503;
int32_t t164 = -1;
int64_t x663 = INT64_MIN;
volatile int64_t x666 = -11444LL;
uint64_t x674 = 23LLU;
int32_t x678 = INT32_MAX;
int64_t t169 = 799LL;
int64_t x681 = -1LL;
volatile int64_t x682 = INT64_MIN;
int8_t x686 = INT8_MAX;
uint32_t x694 = 24808962U;
static volatile int8_t x695 = INT8_MAX;
volatile int8_t x697 = INT8_MIN;
static int32_t x700 = INT32_MAX;
int32_t t175 = -34038672;
volatile int64_t t176 = -4858LL;
static int16_t x711 = INT16_MAX;
int32_t x715 = INT32_MIN;
volatile int64_t x737 = -113783201095LL;
int16_t x742 = INT16_MIN;
int32_t x745 = -5;
volatile int32_t x746 = INT32_MIN;
static int32_t t186 = 0;
uint32_t x749 = 768126U;
volatile uint64_t x757 = 127311625990931810LLU;
volatile uint64_t t189 = 15562810552LLU;
int16_t x762 = INT16_MIN;
volatile int32_t x763 = INT32_MAX;
int32_t t190 = -532958631;
int8_t x769 = INT8_MIN;
uint8_t x771 = UINT8_MAX;
uint32_t x772 = 438074178U;
volatile uint64_t t193 = 2LLU;
static int8_t x778 = -1;
uint64_t t194 = 2716905603368LLU;
int8_t x786 = -1;
static int32_t t197 = 1;
static int64_t x796 = INT64_MIN;
int64_t x798 = INT64_MAX;
static int64_t x800 = -1LL;
volatile int64_t t199 = 32LL;


void f0(void) {
    	volatile int8_t x2 = -1;
	volatile int16_t x3 = 74;
	int8_t x4 = INT8_MIN;
	static int64_t t0 = -1857816944285LL;

    t0 = ((x1^x2)&(x3==x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	int32_t x6 = 362792;
	uint8_t x7 = 81U;

    t1 = ((x5^x6)&(x7==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	static uint32_t x10 = 59U;
	int8_t x11 = INT8_MIN;
	static volatile int32_t x12 = -16;

    t2 = ((x9^x10)&(x11==x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 564981629350369014LLU;
	uint16_t x14 = 20121U;
	int32_t x16 = -64454;
	uint64_t t3 = 150LLU;

    t3 = ((x13^x14)&(x15==x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 48893921889924LLU;
	int8_t x19 = INT8_MAX;
	volatile uint8_t x20 = UINT8_MAX;

    t4 = ((x17^x18)&(x19==x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -14;
	uint32_t x22 = 1044319U;
	int16_t x24 = -36;
	volatile uint32_t t5 = 5808582U;

    t5 = ((x21^x22)&(x23==x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 918247314LLU;
	volatile int32_t x26 = INT32_MIN;
	int32_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 3415095300954641LLU;

    t6 = ((x25^x26)&(x27==x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 1U;
	uint32_t x30 = 22742263U;
	int64_t x31 = INT64_MAX;
	static int32_t x32 = 4;
	static volatile uint32_t t7 = 267U;

    t7 = ((x29^x30)&(x31==x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -9505;
	int8_t x34 = 3;
	int32_t x35 = INT32_MIN;
	static volatile int64_t x36 = -189370524400LL;
	volatile int32_t t8 = 288992544;

    t8 = ((x33^x34)&(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 43231U;
	uint8_t x38 = UINT8_MAX;
	int8_t x39 = -1;
	int64_t x40 = 4673LL;
	volatile uint32_t t9 = 204910809U;

    t9 = ((x37^x38)&(x39==x40));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 59320596006374889LLU;
	int64_t x42 = INT64_MAX;
	int8_t x43 = 2;
	uint32_t x44 = 64811U;
	uint64_t t10 = 291357515550148138LLU;

    t10 = ((x41^x42)&(x43==x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static int64_t x46 = -1LL;
	int8_t x47 = -26;
	int16_t x48 = INT16_MIN;
	volatile int64_t t11 = -212890424102797173LL;

    t11 = ((x45^x46)&(x47==x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -2;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	volatile int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = 79735475868366602LLU;

    t12 = ((x49^x50)&(x51==x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -61541311LL;
	uint32_t x56 = UINT32_MAX;

    t13 = ((x53^x54)&(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x58 = 73;
	int64_t x60 = 2661LL;
	int32_t t14 = -15629456;

    t14 = ((x57^x58)&(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	static int32_t t15 = 27;

    t15 = ((x61^x62)&(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = 32;
	uint64_t x66 = 15409LLU;
	static int8_t x67 = 25;
	volatile uint16_t x68 = 27362U;
	uint64_t t16 = 5654805389577597222LLU;

    t16 = ((x65^x66)&(x67==x68));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	static int8_t x70 = INT8_MIN;
	int32_t x71 = -38;
	volatile uint64_t t17 = 2LLU;

    t17 = ((x69^x70)&(x71==x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static uint16_t x74 = UINT16_MAX;
	static uint32_t x75 = 1935511U;
	uint32_t x76 = 1527666U;

    t18 = ((x73^x74)&(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x77 = 116263085U;
	uint16_t x79 = 14U;
	volatile uint32_t t19 = 159298837U;

    t19 = ((x77^x78)&(x79==x80));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -12997;
	uint8_t x83 = 45U;
	volatile int32_t t20 = 14901;

    t20 = ((x81^x82)&(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 266517U;
	uint64_t x86 = UINT64_MAX;
	static int16_t x87 = -1;
	volatile uint8_t x88 = 6U;
	volatile uint64_t t21 = 132597047494399LLU;

    t21 = ((x85^x86)&(x87==x88));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 12;
	int16_t x90 = 124;
	uint64_t x92 = UINT64_MAX;
	int32_t t22 = -1;

    t22 = ((x89^x90)&(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	static uint16_t x94 = 6U;
	int64_t x95 = 1260216214681439403LL;
	static int8_t x96 = -3;
	volatile int32_t t23 = -673457953;

    t23 = ((x93^x94)&(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = INT32_MAX;
	int16_t x99 = INT16_MIN;
	static volatile int32_t x100 = -1;
	int32_t t24 = -329;

    t24 = ((x97^x98)&(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	static volatile uint64_t x102 = UINT64_MAX;
	volatile int32_t x103 = INT32_MIN;
	static uint16_t x104 = UINT16_MAX;

    t25 = ((x101^x102)&(x103==x104));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	int32_t x106 = 927412281;
	int64_t x107 = -545776469254035LL;
	volatile uint64_t t26 = 8878306507590332LLU;

    t26 = ((x105^x106)&(x107==x108));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	static int8_t x110 = 49;
	static int32_t x111 = INT32_MIN;
	int32_t t27 = -1684;

    t27 = ((x109^x110)&(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MAX;
	int16_t x114 = INT16_MIN;
	int32_t x115 = 1850292;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t28 = 15558LL;

    t28 = ((x113^x114)&(x115==x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 500U;
	int16_t x118 = 1589;
	int32_t x119 = 3;
	volatile int16_t x120 = -2613;
	static volatile uint32_t t29 = 87884U;

    t29 = ((x117^x118)&(x119==x120));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x121 = 1869U;
	uint64_t x122 = 83719172576445LLU;
	static int32_t x124 = 1;
	uint64_t t30 = 242LLU;

    t30 = ((x121^x122)&(x123==x124));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x126 = UINT64_MAX;
	static uint8_t x127 = 7U;
	volatile int64_t x128 = 2307329165505238745LL;
	volatile uint64_t t31 = 999634496063LLU;

    t31 = ((x125^x126)&(x127==x128));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	static uint8_t x130 = 13U;
	static uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	int32_t t32 = -19505;

    t32 = ((x129^x130)&(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = -1;
	static volatile int8_t x135 = INT8_MIN;
	volatile uint64_t t33 = 80829904782431LLU;

    t33 = ((x133^x134)&(x135==x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	static int16_t x138 = INT16_MAX;
	volatile int32_t t34 = -2105827;

    t34 = ((x137^x138)&(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 18U;
	uint16_t x142 = 876U;
	volatile int16_t x143 = 31;
	volatile uint64_t x144 = 4046596619026LLU;
	static uint32_t t35 = 21322463U;

    t35 = ((x141^x142)&(x143==x144));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	static int64_t t36 = 408907370LL;

    t36 = ((x145^x146)&(x147==x148));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 1580088984U;
	volatile int16_t x150 = INT16_MIN;
	uint32_t x151 = 5761U;
	volatile uint32_t t37 = 84U;

    t37 = ((x149^x150)&(x151==x152));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -363259250;
	volatile uint8_t x154 = 50U;
	volatile uint64_t x155 = 27LLU;
	int64_t x156 = 25793LL;
	int32_t t38 = 1;

    t38 = ((x153^x154)&(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	static int8_t x158 = INT8_MIN;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 20747957746270656LLU;

    t39 = ((x157^x158)&(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 5U;
	uint32_t x162 = 12U;
	static volatile int32_t x163 = -6665;
	int8_t x164 = INT8_MIN;
	static uint32_t t40 = 665U;

    t40 = ((x161^x162)&(x163==x164));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x166 = 112639035LLU;
	uint16_t x167 = 535U;
	uint32_t x168 = 145189U;
	volatile uint64_t t41 = 2340820105LLU;

    t41 = ((x165^x166)&(x167==x168));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 22LLU;
	volatile uint64_t t42 = 32810025LLU;

    t42 = ((x169^x170)&(x171==x172));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x173 = 23941942371532920LLU;
	int8_t x174 = -1;
	int16_t x175 = 1128;
	int64_t x176 = -3446274LL;
	volatile uint64_t t43 = 231361602549417LLU;

    t43 = ((x173^x174)&(x175==x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MIN;
	uint16_t x178 = 607U;
	static uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 346528;

    t44 = ((x177^x178)&(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = -1;
	int64_t x183 = -1LL;

    t45 = ((x181^x182)&(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1782LL;
	int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MAX;
	uint8_t x188 = 1U;
	int64_t t46 = -119040793LL;

    t46 = ((x185^x186)&(x187==x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = -1;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -8405753;

    t47 = ((x189^x190)&(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = 1;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = UINT16_MAX;
	int64_t x196 = -1LL;
	volatile int32_t t48 = 45;

    t48 = ((x193^x194)&(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 27LLU;
	static int16_t x198 = -1;
	uint16_t x199 = 2U;
	static int16_t x200 = -1;
	volatile uint64_t t49 = 1201703746770832374LLU;

    t49 = ((x197^x198)&(x199==x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x201 = 376U;
	uint16_t x202 = UINT16_MAX;
	static volatile int32_t x203 = -1;
	static int16_t x204 = INT16_MIN;
	static uint32_t t50 = 118940883U;

    t50 = ((x201^x202)&(x203==x204));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x206 = UINT64_MAX;
	volatile uint8_t x207 = 1U;
	volatile int64_t x208 = 3797842588165592268LL;
	uint64_t t51 = 2855483LLU;

    t51 = ((x205^x206)&(x207==x208));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 1;
	uint64_t x210 = 9393159103087265LLU;
	static uint8_t x211 = 31U;
	int64_t x212 = 14535LL;
	volatile uint64_t t52 = 437046452LLU;

    t52 = ((x209^x210)&(x211==x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static int32_t x215 = -1;
	volatile int16_t x216 = 112;

    t53 = ((x213^x214)&(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -50;
	volatile uint8_t x218 = UINT8_MAX;
	int16_t x219 = -1;
	uint64_t x220 = UINT64_MAX;
	int32_t t54 = 111177;

    t54 = ((x217^x218)&(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	volatile int32_t x223 = -292655081;
	int32_t t55 = 1941350;

    t55 = ((x221^x222)&(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = 3433U;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	static int32_t t56 = -3503;

    t56 = ((x225^x226)&(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 495U;
	uint16_t x230 = 6U;
	int8_t x232 = INT8_MIN;
	int32_t t57 = -3768;

    t57 = ((x229^x230)&(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x234 = 246865178144LLU;
	int32_t x235 = -1707;
	uint32_t x236 = 15631031U;
	uint64_t t58 = 137061683508700LLU;

    t58 = ((x233^x234)&(x235==x236));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = INT8_MIN;
	int8_t x240 = 3;
	uint64_t t59 = 95LLU;

    t59 = ((x237^x238)&(x239==x240));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = INT64_MAX;
	volatile uint64_t x242 = 3LLU;
	int8_t x243 = INT8_MIN;
	static volatile int16_t x244 = INT16_MAX;
	static volatile uint64_t t60 = 415253625LLU;

    t60 = ((x241^x242)&(x243==x244));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	int64_t x246 = -42269055232258LL;
	volatile uint8_t x247 = 5U;
	int8_t x248 = -1;
	volatile int64_t t61 = 20089LL;

    t61 = ((x245^x246)&(x247==x248));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x249 = INT32_MAX;
	static uint8_t x250 = UINT8_MAX;
	int32_t x251 = INT32_MIN;
	uint64_t x252 = 115904396LLU;
	static volatile int32_t t62 = -112519;

    t62 = ((x249^x250)&(x251==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 20;
	volatile int32_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	static volatile uint32_t x256 = 9636821U;
	int32_t t63 = 30602574;

    t63 = ((x253^x254)&(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	static int16_t x258 = -1;
	static volatile int64_t x259 = -1LL;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -54431160;

    t64 = ((x257^x258)&(x259==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = INT32_MAX;
	uint32_t t65 = 39973U;

    t65 = ((x261^x262)&(x263==x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x266 = 61LL;
	uint8_t x267 = 7U;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t66 = -14LL;

    t66 = ((x265^x266)&(x267==x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -68;

    t67 = ((x269^x270)&(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = 3386899758LLU;
	int8_t x274 = INT8_MIN;
	static volatile uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = 584U;
	static uint64_t t68 = 256549104676431LLU;

    t68 = ((x273^x274)&(x275==x276));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	static int16_t x278 = INT16_MIN;
	int8_t x279 = -1;
	uint8_t x280 = UINT8_MAX;
	static int32_t t69 = -1759965;

    t69 = ((x277^x278)&(x279==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	uint32_t x283 = UINT32_MAX;
	static int32_t t70 = -1885920;

    t70 = ((x281^x282)&(x283==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 150;
	volatile int32_t x286 = -1;
	volatile int8_t x287 = -61;
	int64_t x288 = INT64_MAX;
	static volatile int32_t t71 = -20595337;

    t71 = ((x285^x286)&(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = -117;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = 2U;

    t72 = ((x289^x290)&(x291==x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 13434U;
	int16_t x294 = -211;
	int16_t x295 = 0;
	int32_t t73 = 1;

    t73 = ((x293^x294)&(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 13454565LL;
	int32_t x298 = 27;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int64_t t74 = -166479724LL;

    t74 = ((x297^x298)&(x299==x300));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 544645;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = INT32_MAX;
	volatile uint32_t t75 = 8U;

    t75 = ((x301^x302)&(x303==x304));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = INT64_MIN;
	int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	volatile uint8_t x308 = UINT8_MAX;
	int64_t t76 = 47071194733995LL;

    t76 = ((x305^x306)&(x307==x308));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	static uint32_t x311 = 1023385974U;
	uint16_t x312 = 6229U;

    t77 = ((x309^x310)&(x311==x312));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static int16_t x314 = 41;
	static int16_t x315 = INT16_MIN;
	volatile int32_t t78 = -35895;

    t78 = ((x313^x314)&(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = INT8_MAX;
	int64_t x318 = -416597733LL;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = 25101394LL;

    t79 = ((x317^x318)&(x319==x320));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = INT8_MAX;
	volatile int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	static volatile int64_t x324 = INT64_MIN;
	static int64_t t80 = 1890419400781705LL;

    t80 = ((x321^x322)&(x323==x324));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	int8_t x326 = INT8_MIN;
	int8_t x327 = 1;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t81 = -694937;

    t81 = ((x325^x326)&(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x331 = 0;
	int64_t x332 = -808LL;
	volatile uint32_t t82 = 1164200U;

    t82 = ((x329^x330)&(x331==x332));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = 7083406788931344097LLU;
	int8_t x334 = INT8_MAX;
	int64_t x335 = -1LL;
	static uint64_t t83 = 35081786960816840LLU;

    t83 = ((x333^x334)&(x335==x336));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x338 = 60LL;
	static uint32_t x339 = 13258U;
	volatile int8_t x340 = INT8_MAX;
	volatile int64_t t84 = -60325211670333LL;

    t84 = ((x337^x338)&(x339==x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = 1009;
	int8_t x342 = INT8_MIN;
	int16_t x343 = 1449;
	int64_t x344 = -1LL;
	int32_t t85 = 103;

    t85 = ((x341^x342)&(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MAX;
	int32_t x348 = -1;
	volatile int32_t t86 = -7693;

    t86 = ((x345^x346)&(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	static int32_t x350 = INT32_MAX;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = -20134338;

    t87 = ((x349^x350)&(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x353 = -1;
	uint64_t x355 = 242LLU;
	int32_t t88 = 49;

    t88 = ((x353^x354)&(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;

    t89 = ((x357^x358)&(x359==x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 238790988096269LLU;
	int64_t x363 = -2121384813117246LL;
	uint32_t x364 = UINT32_MAX;
	volatile uint64_t t90 = 3016614439LLU;

    t90 = ((x361^x362)&(x363==x364));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 13U;
	volatile int32_t x366 = -584;
	volatile int32_t x368 = INT32_MIN;
	int32_t t91 = 980241;

    t91 = ((x365^x366)&(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = -25;
	volatile int64_t t92 = 35374LL;

    t92 = ((x369^x370)&(x371==x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = 106U;
	uint64_t x374 = UINT64_MAX;
	uint64_t x376 = 380328879LLU;
	uint64_t t93 = 205084LLU;

    t93 = ((x373^x374)&(x375==x376));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x379 = INT64_MAX;
	int16_t x380 = 204;

    t94 = ((x377^x378)&(x379==x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 43U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = -4633861LL;

    t95 = ((x381^x382)&(x383==x384));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 40U;
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 25U;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 1802150;

    t96 = ((x385^x386)&(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x390 = -1;
	int32_t x391 = -24;
	int32_t x392 = -205424;
	int32_t t97 = -56096;

    t97 = ((x389^x390)&(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x394 = 1U;
	volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = -1;
	uint64_t t98 = 122348LLU;

    t98 = ((x393^x394)&(x395==x396));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	uint16_t x400 = 36U;

    t99 = ((x397^x398)&(x399==x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = 1278920713LLU;
	int64_t x402 = -1LL;
	uint8_t x403 = UINT8_MAX;
	int8_t x404 = INT8_MIN;

    t100 = ((x401^x402)&(x403==x404));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 5U;
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MIN;
	static volatile int32_t x408 = -1;
	uint32_t t101 = 63U;

    t101 = ((x405^x406)&(x407==x408));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	volatile int32_t x410 = INT32_MIN;
	volatile int16_t x411 = -1;
	static int32_t x412 = 0;
	uint64_t t102 = 1LLU;

    t102 = ((x409^x410)&(x411==x412));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint32_t x414 = 2842U;
	uint64_t x415 = 465275011LLU;
	static uint32_t t103 = 0U;

    t103 = ((x413^x414)&(x415==x416));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	volatile uint64_t t104 = 1222403650578LLU;

    t104 = ((x417^x418)&(x419==x420));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = -1;
	int16_t x424 = -1;
	int32_t t105 = -11905;

    t105 = ((x421^x422)&(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x426 = 966187069U;
	static volatile uint32_t x427 = UINT32_MAX;
	int64_t t106 = -64LL;

    t106 = ((x425^x426)&(x427==x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MIN;

    t107 = ((x429^x430)&(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = 30840798;
	volatile int8_t x435 = INT8_MAX;
	int32_t x436 = INT32_MIN;

    t108 = ((x433^x434)&(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x438 = INT8_MIN;
	volatile int8_t x440 = INT8_MIN;
	static int32_t t109 = -9;

    t109 = ((x437^x438)&(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = 220394063U;
	static volatile int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MIN;
	volatile uint32_t t110 = 8U;

    t110 = ((x441^x442)&(x443==x444));

    if (t110 != 1U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MAX;
	static int8_t x446 = -1;
	static int32_t x447 = -51265204;
	int64_t x448 = INT64_MIN;
	volatile int32_t t111 = -8542;

    t111 = ((x445^x446)&(x447==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = 8511LL;
	static int8_t x450 = INT8_MIN;
	static int32_t x451 = INT32_MIN;
	volatile uint16_t x452 = 356U;
	int64_t t112 = -179LL;

    t112 = ((x449^x450)&(x451==x452));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = UINT64_MAX;
	uint32_t x455 = 64266U;
	volatile uint32_t x456 = UINT32_MAX;
	volatile uint64_t t113 = 18538LLU;

    t113 = ((x453^x454)&(x455==x456));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 769099153627245LLU;
	static int16_t x458 = -1;
	static volatile int8_t x460 = INT8_MIN;
	uint64_t t114 = 4908LLU;

    t114 = ((x457^x458)&(x459==x460));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile int16_t x464 = -3;
	int32_t t115 = -2;

    t115 = ((x461^x462)&(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	static uint8_t x468 = 0U;

    t116 = ((x465^x466)&(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int16_t x470 = 0;
	uint8_t x471 = UINT8_MAX;
	volatile uint32_t x472 = 64241U;
	int32_t t117 = -501857;

    t117 = ((x469^x470)&(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 474746U;
	int64_t x474 = INT64_MAX;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = UINT32_MAX;

    t118 = ((x473^x474)&(x475==x476));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = INT16_MIN;
	static int16_t x478 = -258;
	int16_t x479 = INT16_MIN;
	static int16_t x480 = -1;

    t119 = ((x477^x478)&(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x482 = 1;
	static int64_t x483 = INT64_MIN;
	int32_t t120 = 3094;

    t120 = ((x481^x482)&(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = UINT64_MAX;
	static volatile int64_t x486 = INT64_MIN;
	volatile int32_t x487 = -23;
	int64_t x488 = INT64_MIN;

    t121 = ((x485^x486)&(x487==x488));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = 62108466802LLU;
	volatile int64_t x490 = -1LL;
	static volatile int32_t x491 = -1;
	volatile uint64_t t122 = 1442259306LLU;

    t122 = ((x489^x490)&(x491==x492));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x494 = 3U;
	int16_t x495 = INT16_MIN;
	volatile int32_t t123 = 15498;

    t123 = ((x493^x494)&(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	static uint8_t x498 = 1U;
	volatile int32_t x499 = -1;
	uint16_t x500 = 10U;
	volatile int32_t t124 = -254802;

    t124 = ((x497^x498)&(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = -61295;
	static volatile uint16_t x503 = 155U;
	int8_t x504 = INT8_MAX;
	int32_t t125 = -33007;

    t125 = ((x501^x502)&(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 459541433;
	int8_t x506 = INT8_MIN;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = 63581;

    t126 = ((x505^x506)&(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = INT32_MIN;
	int32_t t127 = 575;

    t127 = ((x509^x510)&(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	static int16_t x514 = 13846;
	int64_t x515 = 9952823584167LL;
	int8_t x516 = INT8_MAX;
	volatile int32_t t128 = -7;

    t128 = ((x513^x514)&(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	volatile uint8_t x518 = 6U;
	volatile int16_t x519 = -1;
	volatile uint64_t t129 = 461619146654384723LLU;

    t129 = ((x517^x518)&(x519==x520));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x522 = INT32_MIN;
	static volatile int64_t x523 = 425952636485563792LL;
	int64_t x524 = INT64_MIN;
	static volatile int32_t t130 = -22442924;

    t130 = ((x521^x522)&(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 16811U;
	uint16_t x526 = 139U;
	int16_t x527 = -4;
	volatile int32_t t131 = -200;

    t131 = ((x525^x526)&(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = 639U;
	volatile uint8_t x531 = 10U;
	uint32_t t132 = 276U;

    t132 = ((x529^x530)&(x531==x532));

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x533 = 15494;
	volatile int64_t x535 = -1LL;
	int32_t t133 = 1;

    t133 = ((x533^x534)&(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 6974966LL;
	int64_t x538 = INT64_MAX;
	int64_t x539 = -105734LL;
	volatile uint32_t x540 = 7698U;
	int64_t t134 = -2108083985628527LL;

    t134 = ((x537^x538)&(x539==x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = UINT32_MAX;
	int64_t x542 = -1LL;
	int16_t x543 = INT16_MAX;
	volatile uint16_t x544 = UINT16_MAX;
	volatile int64_t t135 = 103352450920752LL;

    t135 = ((x541^x542)&(x543==x544));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 72;
	static volatile int64_t x546 = 7363970102LL;
	int8_t x547 = INT8_MAX;
	int16_t x548 = -1;

    t136 = ((x545^x546)&(x547==x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static int32_t x550 = 1;
	volatile int8_t x551 = INT8_MIN;
	static int32_t t137 = -7;

    t137 = ((x549^x550)&(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -41553;
	uint16_t x554 = 7701U;
	int8_t x555 = -1;
	int32_t t138 = 17578526;

    t138 = ((x553^x554)&(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x558 = 843786655U;
	volatile int8_t x559 = INT8_MIN;

    t139 = ((x557^x558)&(x559==x560));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = -5737298LL;
	uint8_t x562 = UINT8_MAX;
	static uint16_t x563 = 21U;
	volatile int64_t t140 = -35748048894LL;

    t140 = ((x561^x562)&(x563==x564));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	int64_t x567 = -13823184LL;

    t141 = ((x565^x566)&(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x569 = -1;
	int32_t x570 = INT32_MIN;
	int16_t x571 = INT16_MIN;
	int16_t x572 = INT16_MIN;
	volatile int32_t t142 = 126093456;

    t142 = ((x569^x570)&(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x573 = -1;
	volatile uint16_t x574 = 30U;
	volatile int16_t x575 = -1;
	int32_t t143 = -8126;

    t143 = ((x573^x574)&(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 81482LLU;
	int32_t x578 = INT32_MIN;
	uint8_t x579 = UINT8_MAX;
	uint32_t x580 = 106868488U;

    t144 = ((x577^x578)&(x579==x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	int64_t x584 = INT64_MAX;
	volatile int32_t t145 = -4;

    t145 = ((x581^x582)&(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int64_t x586 = 891782185369567001LL;
	uint64_t x587 = 9181996LLU;
	volatile int16_t x588 = 2;
	volatile int64_t t146 = -327018LL;

    t146 = ((x585^x586)&(x587==x588));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int16_t x590 = -11;
	int8_t x591 = -1;
	volatile int32_t x592 = 1514081;

    t147 = ((x589^x590)&(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	int32_t x594 = 1;
	static int8_t x595 = -3;
	int64_t x596 = -1LL;
	int32_t t148 = 1039;

    t148 = ((x593^x594)&(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x598 = -1;
	int64_t x599 = -1LL;
	int32_t t149 = -34;

    t149 = ((x597^x598)&(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	static uint8_t x603 = UINT8_MAX;
	int8_t x604 = -3;

    t150 = ((x601^x602)&(x603==x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int8_t x607 = -1;
	uint32_t x608 = UINT32_MAX;
	int32_t t151 = 17251;

    t151 = ((x605^x606)&(x607==x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int32_t x610 = -1;
	volatile int64_t x611 = -1LL;
	uint64_t x612 = UINT64_MAX;

    t152 = ((x609^x610)&(x611==x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x616 = UINT8_MAX;
	volatile uint64_t t153 = 282885561911945929LLU;

    t153 = ((x613^x614)&(x615==x616));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 1;
	uint8_t x618 = 95U;
	uint16_t x619 = 2543U;
	int8_t x620 = INT8_MIN;
	int32_t t154 = -31647778;

    t154 = ((x617^x618)&(x619==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 106LL;
	int64_t x622 = INT64_MIN;
	volatile int64_t t155 = 12123228998LL;

    t155 = ((x621^x622)&(x623==x624));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = INT32_MIN;
	int64_t x626 = INT64_MIN;
	static uint16_t x627 = UINT16_MAX;
	static volatile int16_t x628 = INT16_MIN;
	int64_t t156 = 197868638LL;

    t156 = ((x625^x626)&(x627==x628));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MIN;
	static int64_t x630 = INT64_MAX;
	int64_t x632 = -985385899406LL;
	int64_t t157 = -204781342601370LL;

    t157 = ((x629^x630)&(x631==x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 617840320039LLU;
	int32_t x635 = -47;
	int64_t x636 = INT64_MAX;

    t158 = ((x633^x634)&(x635==x636));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x639 = 745391LLU;

    t159 = ((x637^x638)&(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = 0;
	volatile uint64_t x642 = 109504540081421LLU;
	volatile int16_t x643 = INT16_MIN;
	uint64_t t160 = 474022864332079LLU;

    t160 = ((x641^x642)&(x643==x644));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = UINT64_MAX;
	int16_t x646 = -1;
	static uint16_t x647 = 708U;
	int8_t x648 = -1;
	uint64_t t161 = 376529LLU;

    t161 = ((x645^x646)&(x647==x648));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = INT16_MAX;
	uint64_t x650 = 985644792316502LLU;
	int16_t x651 = -1;
	volatile uint64_t t162 = 161698575630LLU;

    t162 = ((x649^x650)&(x651==x652));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	volatile uint32_t x654 = UINT32_MAX;
	int16_t x655 = INT16_MIN;
	int64_t x656 = INT64_MIN;
	volatile int64_t t163 = 3050346363LL;

    t163 = ((x653^x654)&(x655==x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MAX;
	uint16_t x658 = 472U;
	uint8_t x659 = 27U;
	volatile int8_t x660 = INT8_MIN;

    t164 = ((x657^x658)&(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x661 = 48U;
	uint32_t x662 = 50U;
	int64_t x664 = INT64_MIN;
	volatile uint32_t t165 = 255762128U;

    t165 = ((x661^x662)&(x663==x664));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x665 = UINT8_MAX;
	uint16_t x667 = 4412U;
	volatile int64_t x668 = INT64_MIN;
	volatile int64_t t166 = 4498117LL;

    t166 = ((x665^x666)&(x667==x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	static volatile uint16_t x670 = 1U;
	int8_t x671 = 1;
	int64_t x672 = INT64_MIN;
	volatile int32_t t167 = 608;

    t167 = ((x669^x670)&(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x675 = INT16_MIN;
	int8_t x676 = -24;
	uint64_t t168 = 5LLU;

    t168 = ((x673^x674)&(x675==x676));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = INT64_MIN;
	uint16_t x679 = 16001U;
	static uint32_t x680 = UINT32_MAX;

    t169 = ((x677^x678)&(x679==x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x683 = 61161999992876824LLU;
	int16_t x684 = INT16_MAX;
	volatile int64_t t170 = 1620003265LL;

    t170 = ((x681^x682)&(x683==x684));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	int16_t x687 = 228;
	volatile uint32_t x688 = UINT32_MAX;
	int32_t t171 = 860;

    t171 = ((x685^x686)&(x687==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x689 = UINT8_MAX;
	uint32_t x690 = UINT32_MAX;
	uint64_t x691 = 2102914115851043LLU;
	uint32_t x692 = 3412948U;
	volatile uint32_t t172 = 356151605U;

    t172 = ((x689^x690)&(x691==x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x693 = UINT32_MAX;
	int8_t x696 = -1;
	volatile uint32_t t173 = 15874964U;

    t173 = ((x693^x694)&(x695==x696));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x698 = 0U;
	static uint32_t x699 = UINT32_MAX;
	int32_t t174 = -210249454;

    t174 = ((x697^x698)&(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 1U;
	uint8_t x702 = 31U;
	static int16_t x703 = -1;
	int64_t x704 = INT64_MIN;

    t175 = ((x701^x702)&(x703==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -1LL;
	int64_t x706 = INT64_MAX;
	volatile uint32_t x707 = UINT32_MAX;
	int8_t x708 = 52;

    t176 = ((x705^x706)&(x707==x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 5101795061LL;
	static int64_t x710 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	int64_t t177 = -226079825289983434LL;

    t177 = ((x709^x710)&(x711==x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 94770184940448LLU;
	int16_t x714 = INT16_MAX;
	int64_t x716 = INT64_MIN;
	volatile uint64_t t178 = 329620649854451LLU;

    t178 = ((x713^x714)&(x715==x716));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MAX;
	volatile int32_t x718 = INT32_MAX;
	volatile int32_t x719 = -1;
	volatile uint8_t x720 = 0U;
	volatile int32_t t179 = -1336493;

    t179 = ((x717^x718)&(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -2;
	volatile int32_t x722 = INT32_MAX;
	volatile int16_t x723 = 1977;
	uint16_t x724 = UINT16_MAX;
	int32_t t180 = 979;

    t180 = ((x721^x722)&(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MAX;
	int32_t x726 = INT32_MIN;
	int16_t x727 = -1;
	volatile int32_t x728 = INT32_MIN;
	int64_t t181 = 66385954665LL;

    t181 = ((x725^x726)&(x727==x728));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MAX;
	int16_t x730 = INT16_MAX;
	int8_t x731 = INT8_MIN;
	int16_t x732 = INT16_MIN;
	int32_t t182 = 3;

    t182 = ((x729^x730)&(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	volatile uint16_t x734 = 94U;
	static int64_t x735 = INT64_MAX;
	uint32_t x736 = 2935U;
	int32_t t183 = 14084;

    t183 = ((x733^x734)&(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x738 = INT16_MIN;
	uint32_t x739 = UINT32_MAX;
	volatile int8_t x740 = INT8_MIN;
	int64_t t184 = -52089805484LL;

    t184 = ((x737^x738)&(x739==x740));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x743 = -1LL;
	int64_t x744 = -937LL;
	volatile int32_t t185 = -503;

    t185 = ((x741^x742)&(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x747 = 17U;
	static volatile int8_t x748 = -1;

    t186 = ((x745^x746)&(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 9;
	uint32_t x751 = 4275U;
	volatile int64_t x752 = INT64_MIN;
	volatile uint32_t t187 = 47U;

    t187 = ((x749^x750)&(x751==x752));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 1869161356536LLU;
	int16_t x754 = -2933;
	static uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 226534345U;
	volatile uint64_t t188 = 123631765438LLU;

    t188 = ((x753^x754)&(x755==x756));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x758 = INT32_MIN;
	static volatile int32_t x759 = INT32_MAX;
	int32_t x760 = 9;

    t189 = ((x757^x758)&(x759==x760));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -14;
	static int16_t x764 = INT16_MIN;

    t190 = ((x761^x762)&(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x765 = UINT8_MAX;
	uint16_t x766 = UINT16_MAX;
	int64_t x767 = INT64_MIN;
	int16_t x768 = -2356;
	volatile int32_t t191 = -29859088;

    t191 = ((x765^x766)&(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x770 = INT8_MAX;
	volatile int32_t t192 = 2387;

    t192 = ((x769^x770)&(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = UINT64_MAX;
	int8_t x774 = INT8_MIN;
	int8_t x775 = -10;
	int64_t x776 = INT64_MAX;

    t193 = ((x773^x774)&(x775==x776));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	int32_t x779 = INT32_MIN;
	int8_t x780 = -3;

    t194 = ((x777^x778)&(x779==x780));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = UINT8_MAX;
	int32_t x782 = INT32_MIN;
	int64_t x783 = INT64_MIN;
	static int16_t x784 = INT16_MIN;
	static int32_t t195 = 1;

    t195 = ((x781^x782)&(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = -1;
	uint16_t x787 = UINT16_MAX;
	volatile int64_t x788 = INT64_MIN;
	static int32_t t196 = 0;

    t196 = ((x785^x786)&(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	volatile int32_t x790 = -1;
	uint64_t x791 = 10041172495LLU;
	uint16_t x792 = 50U;

    t197 = ((x789^x790)&(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	int16_t x794 = INT16_MIN;
	static uint16_t x795 = 477U;
	static int32_t t198 = 437;

    t198 = ((x793^x794)&(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int16_t x799 = -667;

    t199 = ((x797^x798)&(x799==x800));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

