
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

static uint16_t x1 = 2742U;
int64_t x2 = -71441LL;
uint64_t x10 = UINT64_MAX;
uint32_t x16 = 1295U;
int32_t t3 = -280795;
uint16_t x18 = 7U;
static int32_t t5 = 482;
int16_t x30 = -1;
volatile int32_t x31 = INT32_MIN;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = -122295166;
int8_t x41 = INT8_MAX;
int32_t t10 = 653;
static volatile int32_t t11 = 646893;
uint64_t x57 = UINT64_MAX;
volatile int32_t t14 = -512;
int64_t x63 = INT64_MAX;
static uint64_t x68 = 104316LLU;
int16_t x76 = INT16_MIN;
volatile int32_t t19 = 0;
uint32_t x81 = 38U;
volatile int8_t x89 = INT8_MIN;
int32_t t22 = 23496959;
uint8_t x99 = 98U;
int16_t x101 = INT16_MAX;
volatile int32_t t25 = -31;
int16_t x107 = -1;
int16_t x112 = 9123;
volatile uint32_t x113 = 0U;
static volatile int32_t t29 = -100;
static int16_t x127 = INT16_MAX;
static int32_t x128 = INT32_MIN;
static volatile int32_t t31 = -57467380;
volatile uint32_t x134 = 0U;
uint32_t x140 = UINT32_MAX;
volatile int32_t t34 = 116724;
int32_t t41 = -1;
uint64_t x179 = 59473299LLU;
static int16_t x180 = INT16_MIN;
volatile int32_t t44 = 55899;
int32_t x190 = INT32_MAX;
static volatile uint16_t x194 = UINT16_MAX;
int16_t x199 = 1386;
uint16_t x204 = 151U;
int8_t x205 = -42;
uint64_t x206 = 1245214145611725514LLU;
int32_t t53 = 0;
uint32_t x219 = 0U;
uint16_t x220 = UINT16_MAX;
static uint32_t x226 = 1U;
static uint64_t x230 = 5LLU;
volatile int64_t x234 = 2115437246131LL;
int64_t x240 = 236881892680LL;
volatile uint32_t x243 = 3762U;
int16_t x244 = -12249;
uint32_t x258 = 9U;
int16_t x259 = -1;
static int32_t t64 = 3678;
int32_t t67 = 0;
int64_t x275 = -1LL;
int32_t x279 = -1;
static volatile int32_t t69 = 5329117;
int32_t x286 = -23;
uint64_t x287 = 69LLU;
volatile uint64_t x297 = 567184467985155LLU;
int16_t x303 = INT16_MIN;
int64_t x309 = INT64_MIN;
static volatile int16_t x325 = -1;
volatile int32_t t81 = -3522270;
int64_t x335 = INT64_MAX;
volatile int32_t t83 = 68;
int64_t x351 = -613LL;
int32_t x356 = INT32_MIN;
volatile uint16_t x358 = 4U;
uint64_t x365 = UINT64_MAX;
uint32_t x366 = 70U;
int32_t t91 = -54933;
uint32_t x376 = 3U;
int8_t x379 = INT8_MIN;
int32_t x386 = -1519;
int16_t x388 = INT16_MIN;
uint64_t x391 = 8131214211829LLU;
uint64_t x393 = UINT64_MAX;
static int32_t x404 = 977056797;
volatile int8_t x405 = INT8_MIN;
uint64_t x408 = 6169359LLU;
int32_t t101 = -86706;
int16_t x409 = 9606;
int64_t x415 = 147420LL;
int32_t x417 = -1;
volatile uint32_t x418 = UINT32_MAX;
volatile int16_t x422 = 6;
static int64_t x424 = -1987481508LL;
int8_t x428 = INT8_MIN;
volatile int32_t t107 = -1048889;
static int16_t x435 = -1;
uint64_t x444 = 41326920694LLU;
int64_t x446 = -1LL;
int32_t x454 = INT32_MIN;
int8_t x455 = INT8_MIN;
int16_t x458 = INT16_MIN;
int64_t x463 = 3641780437478LL;
int32_t x472 = -3000;
int16_t x475 = 7000;
int16_t x480 = INT16_MIN;
uint32_t x488 = UINT32_MAX;
int32_t t122 = 82473591;
volatile uint64_t x498 = UINT64_MAX;
int16_t x502 = -1;
uint64_t x506 = 265244658111695LLU;
volatile int16_t x515 = -579;
static int16_t x521 = -48;
int16_t x525 = 0;
uint8_t x526 = UINT8_MAX;
int32_t t131 = 3;
static int8_t x537 = INT8_MAX;
int32_t x541 = INT32_MIN;
volatile uint64_t x542 = 116371195506932464LLU;
volatile int32_t t135 = 20;
int64_t x548 = INT64_MAX;
static uint16_t x552 = UINT16_MAX;
uint64_t x556 = UINT64_MAX;
uint32_t x557 = 163106146U;
uint32_t x561 = 4U;
int64_t x562 = INT64_MAX;
static int8_t x565 = -7;
int8_t x567 = INT8_MAX;
int8_t x570 = -1;
static volatile uint32_t x571 = 1U;
int16_t x580 = INT16_MAX;
int64_t x589 = -1LL;
int32_t x595 = INT32_MIN;
volatile int16_t x597 = INT16_MIN;
uint32_t x600 = 106U;
uint16_t x604 = 1329U;
volatile int32_t x605 = INT32_MIN;
int32_t t151 = -251859220;
int8_t x618 = -1;
uint8_t x622 = 0U;
volatile int16_t x625 = -1;
static int64_t x626 = INT64_MIN;
uint32_t x627 = 109U;
static int64_t x629 = INT64_MIN;
static volatile int32_t t157 = 1105953;
static int32_t x633 = -1;
int32_t t158 = 1;
uint32_t x637 = UINT32_MAX;
uint32_t x644 = UINT32_MAX;
int16_t x648 = -1;
int32_t t161 = -22706060;
volatile int32_t x649 = INT32_MAX;
uint8_t x650 = 20U;
volatile uint64_t x662 = 3693818862613LLU;
int16_t x664 = INT16_MIN;
int64_t x669 = INT64_MIN;
uint64_t x671 = 20368747456928647LLU;
int64_t x675 = 8553075068LL;
int64_t x679 = -3346855LL;
uint16_t x680 = UINT16_MAX;
volatile int32_t x682 = 2726;
volatile int64_t x688 = INT64_MAX;
int16_t x691 = INT16_MIN;
int32_t x704 = INT32_MIN;
static uint64_t x705 = UINT64_MAX;
int64_t x707 = -7936731844220925LL;
int32_t x709 = INT32_MAX;
int64_t x713 = 578445550842LL;
uint32_t x725 = 91181U;
volatile int64_t x748 = INT64_MIN;
uint64_t x752 = 11464967891347434LLU;
int16_t x756 = -211;
int32_t x757 = INT32_MIN;
static int8_t x758 = -1;
int8_t x759 = INT8_MIN;
uint16_t x763 = 32U;
int32_t x766 = INT32_MIN;
volatile int32_t t193 = 34463659;
static int64_t x777 = -1LL;
volatile uint8_t x778 = 0U;
int8_t x784 = 0;
volatile int32_t t195 = -711700;
static int16_t x787 = -1;
int32_t x789 = -1;
static volatile int32_t t197 = 23063272;
int16_t x793 = 3;
volatile uint8_t x797 = 2U;


void f0(void) {
    	uint32_t x3 = UINT32_MAX;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 63298013;

    t0 = ((x1==x2)|(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	static volatile int16_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 421953;

    t1 = ((x5==x6)|(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 28162704U;
	volatile uint8_t x11 = 17U;
	static uint64_t x12 = 13372LLU;
	int32_t t2 = -2495;

    t2 = ((x9==x10)|(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	static int8_t x14 = INT8_MIN;
	int32_t x15 = INT32_MIN;

    t3 = ((x13==x14)|(x15==x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	static uint32_t x19 = 29774U;
	uint64_t x20 = 7450700292624125623LLU;
	static volatile int32_t t4 = 351533919;

    t4 = ((x17==x18)|(x19==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 2736;
	uint64_t x22 = 249050324040576LLU;
	uint64_t x23 = 260075337110LLU;
	static int16_t x24 = -5;

    t5 = ((x21==x22)|(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 10737;
	volatile int64_t x26 = INT64_MAX;
	uint16_t x27 = 12910U;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -5394642;

    t6 = ((x25==x26)|(x27==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;

    t7 = ((x29==x30)|(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -14350647LL;
	uint32_t x34 = 27627902U;
	static int32_t x35 = INT32_MIN;
	int64_t x36 = 2440875021LL;
	int32_t t8 = 508970;

    t8 = ((x33==x34)|(x35==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 3U;
	uint16_t x38 = 37U;
	int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = -9;

    t9 = ((x37==x38)|(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x42 = -1;
	uint32_t x43 = 8U;
	int32_t x44 = 1;

    t10 = ((x41==x42)|(x43==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = -251940101LL;
	int8_t x47 = -18;
	int8_t x48 = 10;

    t11 = ((x45==x46)|(x47==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -45;
	uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 8751989107LLU;
	volatile int8_t x52 = -3;
	static volatile int32_t t12 = -6;

    t12 = ((x49==x50)|(x51==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 10U;
	static volatile int32_t t13 = 804285463;

    t13 = ((x53==x54)|(x55==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	static int64_t x59 = INT64_MIN;
	uint64_t x60 = 198275LLU;

    t14 = ((x57==x58)|(x59==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	static int8_t x62 = INT8_MAX;
	uint8_t x64 = 103U;
	int32_t t15 = 0;

    t15 = ((x61==x62)|(x63==x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 436U;
	uint32_t x66 = 741729762U;
	static int8_t x67 = INT8_MIN;
	volatile int32_t t16 = -149095;

    t16 = ((x65==x66)|(x67==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 0U;
	uint16_t x70 = UINT16_MAX;
	int16_t x71 = INT16_MAX;
	volatile uint64_t x72 = UINT64_MAX;
	int32_t t17 = -5379911;

    t17 = ((x69==x70)|(x71==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	uint16_t x75 = 7U;
	int32_t t18 = 342;

    t18 = ((x73==x74)|(x75==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -5795192382036690LL;
	uint64_t x78 = 269754740799789LLU;
	uint32_t x79 = 1U;
	int64_t x80 = -1LL;

    t19 = ((x77==x78)|(x79==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = 292;
	uint64_t x83 = 50780955899LLU;
	volatile int64_t x84 = INT64_MAX;
	int32_t t20 = -243368684;

    t20 = ((x81==x82)|(x83==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = -1;
	uint32_t x86 = 0U;
	int8_t x87 = -1;
	volatile int64_t x88 = INT64_MIN;
	static volatile int32_t t21 = -41858018;

    t21 = ((x85==x86)|(x87==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = 27527U;
	volatile int32_t x91 = 81;
	uint8_t x92 = 95U;

    t22 = ((x89==x90)|(x91==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	static int64_t x94 = INT64_MAX;
	volatile int64_t x95 = 6991044LL;
	uint8_t x96 = 5U;
	volatile int32_t t23 = 25390;

    t23 = ((x93==x94)|(x95==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	int8_t x100 = 14;
	volatile int32_t t24 = -27035;

    t24 = ((x97==x98)|(x99==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;

    t25 = ((x101==x102)|(x103==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	int32_t x106 = INT32_MAX;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = -59832340;

    t26 = ((x105==x106)|(x107==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x109 = 0;
	int16_t x110 = INT16_MAX;
	int32_t x111 = -1;
	volatile int32_t t27 = 0;

    t27 = ((x109==x110)|(x111==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x114 = 1804940558LLU;
	static int64_t x115 = INT64_MIN;
	static volatile int32_t x116 = INT32_MIN;
	int32_t t28 = -12785937;

    t28 = ((x113==x114)|(x115==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = -1;
	static int64_t x118 = -1LL;
	int8_t x119 = 3;
	volatile int16_t x120 = 206;

    t29 = ((x117==x118)|(x119==x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MAX;
	int64_t x123 = -6135442439860085LL;
	static int16_t x124 = -10343;
	volatile int32_t t30 = -3;

    t30 = ((x121==x122)|(x123==x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = UINT16_MAX;
	volatile int32_t x126 = 467966;

    t31 = ((x125==x126)|(x127==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -353118;
	static int16_t x130 = 1242;
	static uint16_t x131 = 619U;
	uint16_t x132 = 50U;
	int32_t t32 = -182783645;

    t32 = ((x129==x130)|(x131==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int32_t x135 = INT32_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t33 = 3782766;

    t33 = ((x133==x134)|(x135==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	static volatile int16_t x139 = INT16_MAX;

    t34 = ((x137==x138)|(x139==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	static int16_t x142 = INT16_MIN;
	uint8_t x143 = 0U;
	int8_t x144 = INT8_MIN;
	int32_t t35 = 61458036;

    t35 = ((x141==x142)|(x143==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 226U;
	int16_t x146 = 0;
	int8_t x147 = INT8_MIN;
	int8_t x148 = -3;
	int32_t t36 = -1917;

    t36 = ((x145==x146)|(x147==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 71136834719LLU;
	int64_t x150 = INT64_MAX;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 37651741U;
	int32_t t37 = 12027623;

    t37 = ((x149==x150)|(x151==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = UINT64_MAX;
	int8_t x154 = INT8_MAX;
	static int64_t x155 = INT64_MAX;
	static uint8_t x156 = 29U;
	int32_t t38 = 4950932;

    t38 = ((x153==x154)|(x155==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x157 = -6077;
	int16_t x158 = INT16_MAX;
	static uint16_t x159 = UINT16_MAX;
	uint8_t x160 = 1U;
	int32_t t39 = 404856;

    t39 = ((x157==x158)|(x159==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = INT16_MIN;
	volatile int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile int64_t x164 = -1LL;
	volatile int32_t t40 = -5566450;

    t40 = ((x161==x162)|(x163==x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MAX;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;

    t41 = ((x165==x166)|(x167==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	static int16_t x170 = -1;
	static int64_t x171 = INT64_MAX;
	static int64_t x172 = 3063121086866LL;
	int32_t t42 = -4175874;

    t42 = ((x169==x170)|(x171==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = -32;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -7723561;

    t43 = ((x173==x174)|(x175==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	volatile int64_t x178 = 1LL;

    t44 = ((x177==x178)|(x179==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	int8_t x182 = 12;
	uint64_t x183 = 6LLU;
	static int16_t x184 = INT16_MIN;
	int32_t t45 = -12100;

    t45 = ((x181==x182)|(x183==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 1;
	volatile int64_t x186 = 854489071457258LL;
	static int64_t x187 = 36353LL;
	uint8_t x188 = 50U;
	int32_t t46 = -1541875;

    t46 = ((x185==x186)|(x187==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 8U;
	volatile uint64_t x191 = 4LLU;
	uint16_t x192 = 8445U;
	int32_t t47 = -53733857;

    t47 = ((x189==x190)|(x191==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -2;
	static int64_t x195 = -1LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -53466850;

    t48 = ((x193==x194)|(x195==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = 35943;
	int64_t x200 = 258LL;
	int32_t t49 = -1637;

    t49 = ((x197==x198)|(x199==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	static volatile int16_t x202 = INT16_MAX;
	volatile int64_t x203 = INT64_MAX;
	static volatile int32_t t50 = 84933;

    t50 = ((x201==x202)|(x203==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x207 = 1U;
	int32_t x208 = INT32_MAX;
	int32_t t51 = -250779;

    t51 = ((x205==x206)|(x207==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	static uint8_t x211 = 3U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 853810330;

    t52 = ((x209==x210)|(x211==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -1;
	static uint32_t x214 = 2U;
	static int16_t x215 = -3;
	static int64_t x216 = 39023723LL;

    t53 = ((x213==x214)|(x215==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x217 = 3U;
	static volatile uint32_t x218 = 3U;
	volatile int32_t t54 = -5;

    t54 = ((x217==x218)|(x219==x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x221 = 17U;
	int8_t x222 = 1;
	uint64_t x223 = 54307454570887LLU;
	int32_t x224 = -285;
	volatile int32_t t55 = -146;

    t55 = ((x221==x222)|(x223==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x225 = -1;
	int16_t x227 = INT16_MIN;
	static int8_t x228 = 4;
	volatile int32_t t56 = -628;

    t56 = ((x225==x226)|(x227==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile uint32_t x232 = 1453387051U;
	static int32_t t57 = -233249347;

    t57 = ((x229==x230)|(x231==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x233 = UINT64_MAX;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MIN;
	static int32_t t58 = 9939;

    t58 = ((x233==x234)|(x235==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 4808U;
	uint32_t x238 = 5353276U;
	int16_t x239 = INT16_MAX;
	volatile int32_t t59 = 29218941;

    t59 = ((x237==x238)|(x239==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = -1LL;
	volatile int32_t t60 = 34;

    t60 = ((x241==x242)|(x243==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 24580LLU;
	int64_t x246 = INT64_MIN;
	int16_t x247 = INT16_MIN;
	static int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 5012454;

    t61 = ((x245==x246)|(x247==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	uint8_t x250 = 88U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 43;

    t62 = ((x249==x250)|(x251==x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	volatile uint32_t x254 = 204201216U;
	volatile uint64_t x255 = 3247042998LLU;
	static int64_t x256 = 1389782837LL;
	int32_t t63 = -181973802;

    t63 = ((x253==x254)|(x255==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	int32_t x260 = -1;

    t64 = ((x257==x258)|(x259==x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	int16_t x262 = 1;
	uint8_t x263 = 2U;
	static volatile int8_t x264 = INT8_MAX;
	volatile int32_t t65 = 2210256;

    t65 = ((x261==x262)|(x263==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	volatile int16_t x267 = -1;
	volatile int8_t x268 = INT8_MAX;
	int32_t t66 = -7;

    t66 = ((x265==x266)|(x267==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = 0;
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;
	static int16_t x272 = -711;

    t67 = ((x269==x270)|(x271==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	uint8_t x274 = 0U;
	volatile int16_t x276 = INT16_MIN;
	volatile int32_t t68 = -171;

    t68 = ((x273==x274)|(x275==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	int32_t x278 = 12;
	int32_t x280 = -1;

    t69 = ((x277==x278)|(x279==x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MAX;
	int32_t x282 = INT32_MIN;
	static int64_t x283 = -1LL;
	int16_t x284 = -1;
	int32_t t70 = -169;

    t70 = ((x281==x282)|(x283==x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 6;
	volatile int64_t x288 = INT64_MIN;
	static volatile int32_t t71 = -8606;

    t71 = ((x285==x286)|(x287==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = INT32_MAX;
	uint8_t x292 = 3U;
	volatile int32_t t72 = -1;

    t72 = ((x289==x290)|(x291==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = -1;
	static volatile int64_t x294 = INT64_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	volatile int32_t x296 = INT32_MAX;
	int32_t t73 = -1011;

    t73 = ((x293==x294)|(x295==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x298 = UINT64_MAX;
	int16_t x299 = -61;
	static int32_t x300 = -1;
	volatile int32_t t74 = -93444624;

    t74 = ((x297==x298)|(x299==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	volatile uint16_t x304 = 4912U;
	int32_t t75 = -3619;

    t75 = ((x301==x302)|(x303==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int32_t x306 = INT32_MIN;
	static volatile int16_t x307 = -1;
	volatile int64_t x308 = -1LL;
	int32_t t76 = -53488833;

    t76 = ((x305==x306)|(x307==x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x310 = INT8_MAX;
	static uint16_t x311 = UINT16_MAX;
	int16_t x312 = -1;
	volatile int32_t t77 = -16747;

    t77 = ((x309==x310)|(x311==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MIN;
	uint32_t x314 = 34236148U;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = 28U;
	static volatile int32_t t78 = 53;

    t78 = ((x313==x314)|(x315==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x317 = 106U;
	volatile int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = 7177573LL;
	int32_t t79 = 221056;

    t79 = ((x317==x318)|(x319==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x321 = 257840188U;
	int64_t x322 = INT64_MAX;
	static volatile int64_t x323 = INT64_MAX;
	volatile uint64_t x324 = 467431855015265LLU;
	static volatile int32_t t80 = 278158;

    t80 = ((x321==x322)|(x323==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x326 = 9U;
	static volatile uint16_t x327 = UINT16_MAX;
	int64_t x328 = 2748LL;

    t81 = ((x325==x326)|(x327==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 2U;
	uint8_t x330 = 0U;
	static volatile int8_t x331 = 6;
	static uint32_t x332 = 2160889U;
	volatile int32_t t82 = -43;

    t82 = ((x329==x330)|(x331==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile int16_t x334 = INT16_MAX;
	int32_t x336 = INT32_MIN;

    t83 = ((x333==x334)|(x335==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = 10336U;
	int32_t x338 = INT32_MIN;
	static uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 1155U;
	static int32_t t84 = 588;

    t84 = ((x337==x338)|(x339==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 1997185LLU;
	volatile int32_t x342 = -1;
	int8_t x343 = INT8_MIN;
	static uint64_t x344 = 145LLU;
	volatile int32_t t85 = 183;

    t85 = ((x341==x342)|(x343==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = -277LL;
	uint32_t x346 = 15776U;
	static int16_t x347 = INT16_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = -12;

    t86 = ((x345==x346)|(x347==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	volatile int64_t x350 = INT64_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 0;

    t87 = ((x349==x350)|(x351==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 12U;
	int8_t x354 = INT8_MAX;
	int16_t x355 = -3746;
	int32_t t88 = -1205249;

    t88 = ((x353==x354)|(x355==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	static int64_t x359 = -1LL;
	static int8_t x360 = INT8_MIN;
	static volatile int32_t t89 = 42;

    t89 = ((x357==x358)|(x359==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x361 = 1432349U;
	int64_t x362 = 6529LL;
	static int32_t x363 = INT32_MAX;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 85241;

    t90 = ((x361==x362)|(x363==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x367 = 195;
	static volatile uint16_t x368 = 191U;

    t91 = ((x365==x366)|(x367==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = INT16_MAX;
	volatile int32_t x370 = 0;
	uint16_t x371 = 1U;
	volatile uint64_t x372 = 27650667109867LLU;
	int32_t t92 = 880;

    t92 = ((x369==x370)|(x371==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 4573443LLU;
	int8_t x374 = 0;
	int8_t x375 = INT8_MAX;
	int32_t t93 = -1;

    t93 = ((x373==x374)|(x375==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	int64_t x378 = INT64_MAX;
	uint8_t x380 = 15U;
	volatile int32_t t94 = 2880;

    t94 = ((x377==x378)|(x379==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int32_t x382 = -1;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	static int32_t t95 = -486299597;

    t95 = ((x381==x382)|(x383==x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 1771237731548LLU;
	volatile int32_t x387 = INT32_MIN;
	int32_t t96 = -731125833;

    t96 = ((x385==x386)|(x387==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 19196U;
	int8_t x390 = INT8_MAX;
	uint8_t x392 = UINT8_MAX;
	int32_t t97 = 12703;

    t97 = ((x389==x390)|(x391==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = -1;
	int16_t x395 = 13;
	volatile int16_t x396 = -1;
	int32_t t98 = -3940651;

    t98 = ((x393==x394)|(x395==x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 60U;
	int8_t x398 = 36;
	uint16_t x399 = 1514U;
	uint8_t x400 = 47U;
	volatile int32_t t99 = 1464;

    t99 = ((x397==x398)|(x399==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	volatile uint64_t x402 = 73439LLU;
	int64_t x403 = INT64_MAX;
	volatile int32_t t100 = -129;

    t100 = ((x401==x402)|(x403==x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x406 = INT32_MIN;
	static uint32_t x407 = 4U;

    t101 = ((x405==x406)|(x407==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x410 = -1LL;
	uint16_t x411 = UINT16_MAX;
	volatile uint64_t x412 = 50711964LLU;
	int32_t t102 = 2;

    t102 = ((x409==x410)|(x411==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = 28667477308LLU;
	static int8_t x414 = INT8_MIN;
	int32_t x416 = -235252;
	static int32_t t103 = 5;

    t103 = ((x413==x414)|(x415==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x419 = -1;
	static volatile uint16_t x420 = 28U;
	volatile int32_t t104 = -253;

    t104 = ((x417==x418)|(x419==x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x421 = INT16_MAX;
	static uint8_t x423 = 53U;
	volatile int32_t t105 = -1;

    t105 = ((x421==x422)|(x423==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	int64_t x426 = INT64_MIN;
	int32_t x427 = -1;
	volatile int32_t t106 = 11807;

    t106 = ((x425==x426)|(x427==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -7944;
	static int16_t x430 = INT16_MIN;
	volatile int8_t x431 = -1;
	int16_t x432 = INT16_MIN;

    t107 = ((x429==x430)|(x431==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = 40732LL;
	int64_t x434 = -12843095351015289LL;
	static int8_t x436 = INT8_MAX;
	int32_t t108 = 664209;

    t108 = ((x433==x434)|(x435==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MIN;
	volatile uint64_t x439 = 21579708839751577LLU;
	volatile int64_t x440 = INT64_MAX;
	volatile int32_t t109 = 25411620;

    t109 = ((x437==x438)|(x439==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 15U;
	static int64_t x442 = 154232632365LL;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t t110 = -926871;

    t110 = ((x441==x442)|(x443==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	volatile uint16_t x447 = 1U;
	static volatile int32_t x448 = INT32_MAX;
	int32_t t111 = 80137060;

    t111 = ((x445==x446)|(x447==x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 440034683882531LLU;
	int32_t x450 = -1;
	uint64_t x451 = 322060809LLU;
	uint8_t x452 = UINT8_MAX;
	int32_t t112 = 57;

    t112 = ((x449==x450)|(x451==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 4U;
	static uint16_t x456 = 54U;
	static int32_t t113 = 13698891;

    t113 = ((x453==x454)|(x455==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -8092988763493982LL;
	int64_t x459 = INT64_MIN;
	int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 881304008;

    t114 = ((x457==x458)|(x459==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x461 = INT32_MIN;
	volatile uint16_t x462 = 244U;
	int8_t x464 = 0;
	static volatile int32_t t115 = 141026103;

    t115 = ((x461==x462)|(x463==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = -1;
	volatile int32_t x466 = INT32_MAX;
	volatile uint8_t x467 = 9U;
	int16_t x468 = INT16_MIN;
	static int32_t t116 = -264156484;

    t116 = ((x465==x466)|(x467==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 51933LLU;
	uint8_t x470 = UINT8_MAX;
	static int16_t x471 = 3152;
	volatile int32_t t117 = -15175556;

    t117 = ((x469==x470)|(x471==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MAX;
	int32_t x474 = INT32_MIN;
	int16_t x476 = 174;
	static int32_t t118 = -4;

    t118 = ((x473==x474)|(x475==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int16_t x478 = INT16_MIN;
	int16_t x479 = -3171;
	int32_t t119 = 10572816;

    t119 = ((x477==x478)|(x479==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	static uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MIN;
	int8_t x484 = 12;
	volatile int32_t t120 = 30;

    t120 = ((x481==x482)|(x483==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -106;
	int8_t x486 = INT8_MAX;
	int64_t x487 = INT64_MIN;
	int32_t t121 = -29858;

    t121 = ((x485==x486)|(x487==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MAX;
	int16_t x490 = -1;
	int64_t x491 = INT64_MIN;
	int64_t x492 = INT64_MIN;

    t122 = ((x489==x490)|(x491==x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = 0;
	int16_t x494 = -1;
	static volatile int64_t x495 = -28815664511352LL;
	int8_t x496 = INT8_MAX;
	static int32_t t123 = -14500;

    t123 = ((x493==x494)|(x495==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 2U;
	int64_t x499 = 3LL;
	uint64_t x500 = 35895632442434262LLU;
	static int32_t t124 = 6454;

    t124 = ((x497==x498)|(x499==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x501 = 27U;
	int64_t x503 = INT64_MIN;
	int32_t x504 = -1;
	int32_t t125 = 716420641;

    t125 = ((x501==x502)|(x503==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = -1104;
	int64_t x507 = -1164103289LL;
	uint64_t x508 = 29590887491015LLU;
	volatile int32_t t126 = -2;

    t126 = ((x505==x506)|(x507==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	int32_t x510 = -1;
	uint16_t x511 = 46U;
	uint8_t x512 = 1U;
	static volatile int32_t t127 = -499;

    t127 = ((x509==x510)|(x511==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 1600;
	static uint8_t x514 = 62U;
	int8_t x516 = -32;
	int32_t t128 = -28778191;

    t128 = ((x513==x514)|(x515==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	volatile int64_t x518 = INT64_MAX;
	static int32_t x519 = INT32_MAX;
	static volatile uint16_t x520 = 938U;
	volatile int32_t t129 = -11545785;

    t129 = ((x517==x518)|(x519==x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = UINT64_MAX;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = 1919393751989769LLU;
	volatile int32_t t130 = 57;

    t130 = ((x521==x522)|(x523==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x527 = -9397783;
	int8_t x528 = -1;

    t131 = ((x525==x526)|(x527==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	uint16_t x530 = 2420U;
	int8_t x531 = 50;
	int16_t x532 = INT16_MAX;
	static int32_t t132 = 1;

    t132 = ((x529==x530)|(x531==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	int64_t x534 = -1LL;
	int32_t x535 = -1;
	int8_t x536 = 0;
	volatile int32_t t133 = -462437675;

    t133 = ((x533==x534)|(x535==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = 14614U;
	static volatile uint64_t x539 = 224297587LLU;
	static volatile int32_t x540 = -32503;
	volatile int32_t t134 = -134;

    t134 = ((x537==x538)|(x539==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x543 = 1;
	static int16_t x544 = INT16_MIN;

    t135 = ((x541==x542)|(x543==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x545 = -1;
	uint32_t x546 = 19180U;
	static uint16_t x547 = 55U;
	volatile int32_t t136 = 45;

    t136 = ((x545==x546)|(x547==x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x549 = INT8_MAX;
	uint8_t x550 = 3U;
	static volatile uint8_t x551 = UINT8_MAX;
	static volatile int32_t t137 = 981;

    t137 = ((x549==x550)|(x551==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int16_t x554 = -1806;
	volatile uint32_t x555 = UINT32_MAX;
	int32_t t138 = 54494804;

    t138 = ((x553==x554)|(x555==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MIN;
	static int64_t x560 = INT64_MIN;
	int32_t t139 = 3686;

    t139 = ((x557==x558)|(x559==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x563 = 0;
	int16_t x564 = -63;
	static int32_t t140 = -1206;

    t140 = ((x561==x562)|(x563==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = -89168381199843404LL;
	static volatile int64_t x568 = -1LL;
	volatile int32_t t141 = 25;

    t141 = ((x565==x566)|(x567==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -1;
	int64_t x572 = INT64_MIN;
	int32_t t142 = 0;

    t142 = ((x569==x570)|(x571==x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint16_t x574 = UINT16_MAX;
	int16_t x575 = 0;
	int64_t x576 = -1LL;
	volatile int32_t t143 = -3174;

    t143 = ((x573==x574)|(x575==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	uint16_t x578 = 248U;
	volatile int16_t x579 = 106;
	volatile int32_t t144 = -6;

    t144 = ((x577==x578)|(x579==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	int64_t x582 = INT64_MIN;
	int64_t x583 = 1563520902369LL;
	static uint8_t x584 = UINT8_MAX;
	int32_t t145 = -553;

    t145 = ((x581==x582)|(x583==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -12;
	int8_t x586 = -2;
	int8_t x587 = INT8_MIN;
	int16_t x588 = INT16_MAX;
	static volatile int32_t t146 = -425282;

    t146 = ((x585==x586)|(x587==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = 3730919LLU;
	static volatile uint16_t x591 = 53U;
	uint64_t x592 = 57541462572LLU;
	static volatile int32_t t147 = 1;

    t147 = ((x589==x590)|(x591==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = 2678733U;
	int8_t x594 = INT8_MAX;
	int32_t x596 = -1;
	int32_t t148 = -6550;

    t148 = ((x593==x594)|(x595==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = -1;
	int32_t x599 = -1;
	volatile int32_t t149 = 474848816;

    t149 = ((x597==x598)|(x599==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x601 = 3;
	int64_t x602 = INT64_MIN;
	uint64_t x603 = 405415071409390388LLU;
	int32_t t150 = 94199437;

    t150 = ((x601==x602)|(x603==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = 0;
	volatile int32_t x607 = -1;
	int8_t x608 = INT8_MAX;

    t151 = ((x605==x606)|(x607==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x609 = 201U;
	int64_t x610 = -983010679092LL;
	int32_t x611 = -1;
	uint8_t x612 = UINT8_MAX;
	volatile int32_t t152 = -46138;

    t152 = ((x609==x610)|(x611==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = -1;
	int16_t x614 = INT16_MIN;
	int32_t x615 = 94;
	static volatile int32_t x616 = INT32_MIN;
	static int32_t t153 = 176;

    t153 = ((x613==x614)|(x615==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -1LL;
	uint8_t x619 = UINT8_MAX;
	int32_t x620 = -101289779;
	volatile int32_t t154 = 5293;

    t154 = ((x617==x618)|(x619==x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 6;
	static volatile uint8_t x623 = UINT8_MAX;
	int16_t x624 = INT16_MAX;
	static volatile int32_t t155 = -2802;

    t155 = ((x621==x622)|(x623==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x628 = INT16_MIN;
	static volatile int32_t t156 = 3199335;

    t156 = ((x625==x626)|(x627==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = -1;
	int64_t x631 = 1190254038945LL;
	uint32_t x632 = 202916U;

    t157 = ((x629==x630)|(x631==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x634 = -1;
	int8_t x635 = -3;
	static uint8_t x636 = 12U;

    t158 = ((x633==x634)|(x635==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = 3572993515918LL;
	uint16_t x639 = UINT16_MAX;
	volatile int32_t x640 = -915664378;
	static int32_t t159 = -1319769;

    t159 = ((x637==x638)|(x639==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 53697U;
	uint64_t x642 = UINT64_MAX;
	volatile int32_t x643 = INT32_MIN;
	int32_t t160 = 18528;

    t160 = ((x641==x642)|(x643==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 51U;
	int16_t x646 = -1333;
	static int8_t x647 = INT8_MIN;

    t161 = ((x645==x646)|(x647==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x651 = INT32_MIN;
	uint8_t x652 = 1U;
	volatile int32_t t162 = 5935;

    t162 = ((x649==x650)|(x651==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = UINT8_MAX;
	int8_t x654 = -1;
	int64_t x655 = INT64_MIN;
	static volatile int64_t x656 = -16452075LL;
	volatile int32_t t163 = 1929123;

    t163 = ((x653==x654)|(x655==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	int8_t x658 = -1;
	static int8_t x659 = INT8_MAX;
	volatile int64_t x660 = INT64_MAX;
	int32_t t164 = 28885348;

    t164 = ((x657==x658)|(x659==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	int32_t t165 = -33083541;

    t165 = ((x661==x662)|(x663==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = -1;
	int8_t x666 = INT8_MAX;
	int64_t x667 = INT64_MIN;
	uint8_t x668 = UINT8_MAX;
	static int32_t t166 = -531326278;

    t166 = ((x665==x666)|(x667==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x670 = -1;
	uint16_t x672 = 19642U;
	int32_t t167 = 8368512;

    t167 = ((x669==x670)|(x671==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x674 = UINT64_MAX;
	volatile uint64_t x676 = 783217464416152LLU;
	int32_t t168 = -858550723;

    t168 = ((x673==x674)|(x675==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 138U;
	int16_t x678 = INT16_MIN;
	int32_t t169 = -2547607;

    t169 = ((x677==x678)|(x679==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	int64_t x683 = INT64_MAX;
	int64_t x684 = INT64_MIN;
	volatile int32_t t170 = 10045230;

    t170 = ((x681==x682)|(x683==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	uint8_t x686 = UINT8_MAX;
	int64_t x687 = INT64_MAX;
	volatile int32_t t171 = -818;

    t171 = ((x685==x686)|(x687==x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 7842149U;
	int16_t x690 = -23;
	uint64_t x692 = 1747126131034623LLU;
	volatile int32_t t172 = -180;

    t172 = ((x689==x690)|(x691==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MIN;
	int32_t x694 = -1;
	int64_t x695 = INT64_MAX;
	int8_t x696 = INT8_MIN;
	static volatile int32_t t173 = 0;

    t173 = ((x693==x694)|(x695==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;
	int8_t x698 = -12;
	volatile int64_t x699 = -1LL;
	uint64_t x700 = 164389LLU;
	volatile int32_t t174 = -1619;

    t174 = ((x697==x698)|(x699==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	volatile uint32_t x702 = UINT32_MAX;
	volatile int16_t x703 = INT16_MIN;
	int32_t t175 = 139;

    t175 = ((x701==x702)|(x703==x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x706 = INT64_MIN;
	uint64_t x708 = 0LLU;
	int32_t t176 = 1424;

    t176 = ((x705==x706)|(x707==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MIN;
	uint32_t x711 = 1421545U;
	int8_t x712 = -21;
	volatile int32_t t177 = -72491;

    t177 = ((x709==x710)|(x711==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x714 = 2U;
	int16_t x715 = INT16_MIN;
	uint32_t x716 = UINT32_MAX;
	static volatile int32_t t178 = 1244;

    t178 = ((x713==x714)|(x715==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	int16_t x718 = 7;
	int64_t x719 = INT64_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = 19037485;

    t179 = ((x717==x718)|(x719==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	uint8_t x722 = UINT8_MAX;
	int64_t x723 = INT64_MAX;
	int16_t x724 = -1;
	int32_t t180 = -637;

    t180 = ((x721==x722)|(x723==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x726 = INT16_MAX;
	int32_t x727 = INT32_MAX;
	uint64_t x728 = 21553220770512939LLU;
	int32_t t181 = 426371030;

    t181 = ((x725==x726)|(x727==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int16_t x730 = -1;
	uint16_t x731 = 15U;
	static uint64_t x732 = 127421141692806LLU;
	int32_t t182 = 858644;

    t182 = ((x729==x730)|(x731==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 15U;
	uint32_t x734 = 578U;
	int64_t x735 = -5905LL;
	static uint16_t x736 = UINT16_MAX;
	static int32_t t183 = -428;

    t183 = ((x733==x734)|(x735==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	uint32_t x738 = 120808U;
	int16_t x739 = -1;
	int64_t x740 = -24524021981408LL;
	int32_t t184 = -3572964;

    t184 = ((x737==x738)|(x739==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	static uint64_t x742 = UINT64_MAX;
	int16_t x743 = INT16_MIN;
	int64_t x744 = INT64_MAX;
	static int32_t t185 = -18143;

    t185 = ((x741==x742)|(x743==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	static volatile int32_t x746 = INT32_MIN;
	int16_t x747 = INT16_MIN;
	static int32_t t186 = -31077;

    t186 = ((x745==x746)|(x747==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = 158;
	uint16_t x751 = 46U;
	int32_t t187 = -285;

    t187 = ((x749==x750)|(x751==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 37U;
	uint64_t x754 = UINT64_MAX;
	volatile int64_t x755 = -50204438885343725LL;
	volatile int32_t t188 = -1637;

    t188 = ((x753==x754)|(x755==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x760 = INT32_MIN;
	volatile int32_t t189 = 3759;

    t189 = ((x757==x758)|(x759==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 3U;
	int8_t x762 = INT8_MIN;
	static int32_t x764 = INT32_MAX;
	static int32_t t190 = 101016;

    t190 = ((x761==x762)|(x763==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 1U;
	uint16_t x767 = UINT16_MAX;
	int16_t x768 = INT16_MAX;
	volatile int32_t t191 = 6608;

    t191 = ((x765==x766)|(x767==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = -1LL;
	static volatile int16_t x770 = 69;
	int64_t x771 = INT64_MAX;
	static volatile int32_t x772 = INT32_MIN;
	volatile int32_t t192 = 293584673;

    t192 = ((x769==x770)|(x771==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -47;
	uint8_t x774 = UINT8_MAX;
	static volatile uint16_t x775 = UINT16_MAX;
	uint16_t x776 = 3U;

    t193 = ((x773==x774)|(x775==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x779 = UINT32_MAX;
	volatile int32_t x780 = -20;
	volatile int32_t t194 = -650782;

    t194 = ((x777==x778)|(x779==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x781 = UINT16_MAX;
	int8_t x782 = INT8_MIN;
	int16_t x783 = -1;

    t195 = ((x781==x782)|(x783==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = -1;
	int16_t x786 = INT16_MIN;
	uint8_t x788 = UINT8_MAX;
	volatile int32_t t196 = -14;

    t196 = ((x785==x786)|(x787==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MAX;
	uint8_t x791 = UINT8_MAX;
	static volatile uint32_t x792 = 809490U;

    t197 = ((x789==x790)|(x791==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = 7U;
	volatile int64_t x795 = 397959790977787LL;
	int16_t x796 = -1;
	int32_t t198 = -210020372;

    t198 = ((x793==x794)|(x795==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x798 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	int32_t x800 = INT32_MAX;
	static volatile int32_t t199 = -128616106;

    t199 = ((x797==x798)|(x799==x800));

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

