
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

int16_t x1 = INT16_MIN;
volatile int64_t x11 = INT64_MIN;
static volatile int32_t t2 = 20835967;
int8_t x14 = INT8_MIN;
int8_t x18 = INT8_MIN;
uint8_t x21 = 14U;
int8_t x31 = 35;
static volatile int32_t t7 = -121498885;
int32_t x33 = INT32_MIN;
int8_t x35 = INT8_MAX;
int8_t x37 = -10;
uint32_t x42 = 559911759U;
uint16_t x45 = UINT16_MAX;
uint8_t x56 = UINT8_MAX;
int32_t x62 = INT32_MIN;
int16_t x63 = INT16_MIN;
int8_t x65 = INT8_MAX;
int16_t x73 = -2761;
int64_t x83 = INT64_MAX;
int64_t x84 = 36432249880LL;
static volatile uint64_t x85 = 3740427LLU;
int32_t x88 = INT32_MIN;
int16_t x89 = INT16_MAX;
uint16_t x98 = 3U;
uint64_t x100 = 27780498LLU;
static volatile uint16_t x104 = UINT16_MAX;
static int32_t x109 = INT32_MAX;
int32_t x110 = INT32_MIN;
int32_t t28 = 403;
int16_t x120 = INT16_MAX;
int8_t x123 = INT8_MIN;
static int32_t x126 = 1;
int64_t x127 = 3478433603442870LL;
int64_t x128 = INT64_MAX;
static uint32_t x129 = UINT32_MAX;
static int32_t t32 = 848;
uint8_t x137 = 6U;
volatile int8_t x146 = -7;
int16_t x147 = INT16_MIN;
static int32_t x155 = INT32_MAX;
uint32_t x157 = UINT32_MAX;
uint16_t x166 = UINT16_MAX;
int64_t x167 = INT64_MAX;
uint64_t x170 = 5LLU;
volatile uint16_t x173 = 2087U;
int32_t x177 = INT32_MIN;
int8_t x183 = 21;
int64_t x196 = 3229540777678917LL;
volatile int32_t t48 = -427790016;
int16_t x200 = INT16_MIN;
static int64_t x211 = INT64_MIN;
int16_t x214 = INT16_MAX;
int8_t x224 = -1;
volatile int32_t t56 = -24;
int8_t x233 = -1;
int32_t x242 = 134990;
volatile int32_t t61 = 45886409;
volatile int8_t x250 = -1;
uint32_t x251 = UINT32_MAX;
static int16_t x253 = -1;
int8_t x254 = INT8_MIN;
static uint16_t x263 = 24U;
int16_t x264 = INT16_MIN;
volatile int32_t t65 = 1;
int8_t x265 = -2;
volatile uint8_t x271 = 69U;
int64_t x273 = 3LL;
int64_t x274 = INT64_MAX;
int64_t x276 = 3LL;
static uint8_t x278 = 10U;
int32_t t69 = -122720779;
int32_t t70 = -3753294;
static volatile uint16_t x287 = UINT16_MAX;
static int16_t x289 = -1;
int16_t x291 = -496;
volatile int32_t t72 = 3599008;
uint16_t x295 = 9170U;
volatile int8_t x296 = INT8_MAX;
int32_t t74 = 1;
int64_t x301 = -210578826601LL;
static int32_t x307 = -435429;
int32_t t76 = 32326549;
int32_t x310 = INT32_MAX;
volatile int32_t t77 = 1773309;
int32_t x314 = INT32_MIN;
uint8_t x316 = 3U;
static int16_t x317 = -1;
int32_t t79 = 0;
static int16_t x322 = 8055;
static volatile int8_t x323 = 19;
int32_t t80 = -10392;
int32_t x325 = -54142;
int32_t x328 = 126920;
int32_t t82 = -24760;
static int32_t t84 = -116126;
uint16_t x341 = 13U;
int64_t x343 = INT64_MIN;
static int32_t x346 = INT32_MAX;
volatile int32_t x348 = INT32_MIN;
static uint32_t x350 = UINT32_MAX;
static uint8_t x354 = 91U;
int64_t x360 = INT64_MIN;
volatile int32_t t89 = 20;
static volatile uint8_t x385 = 2U;
static uint16_t x395 = 83U;
int64_t x403 = INT64_MAX;
uint64_t x407 = UINT64_MAX;
int8_t x411 = INT8_MIN;
volatile int8_t x413 = -1;
volatile int32_t x418 = INT32_MIN;
static volatile int32_t x422 = -161233;
volatile int64_t x425 = -2096179165LL;
int8_t x426 = -1;
volatile uint8_t x428 = 71U;
int16_t x438 = -170;
static int8_t x445 = -1;
int64_t x451 = 1216496468LL;
volatile int32_t t112 = -195529;
int64_t x454 = INT64_MIN;
int8_t x456 = 0;
uint64_t x460 = 137909LLU;
volatile uint64_t x461 = UINT64_MAX;
int16_t x467 = INT16_MIN;
uint16_t x468 = 26U;
int32_t x471 = -84224804;
int8_t x478 = 2;
uint16_t x479 = 90U;
uint16_t x482 = 15995U;
int32_t t121 = 3899;
uint32_t x500 = 7665U;
int32_t x502 = INT32_MAX;
static int16_t x508 = 4;
int16_t x509 = 1022;
int32_t t127 = -28;
int8_t x527 = 0;
int8_t x528 = 0;
uint64_t x533 = UINT64_MAX;
static int8_t x534 = 0;
int16_t x536 = -1;
static int64_t x539 = -1LL;
static uint8_t x540 = 109U;
static int32_t t134 = -40235;
int8_t x541 = -1;
int32_t t135 = 252;
int32_t x550 = -1;
int8_t x551 = INT8_MAX;
volatile uint64_t x553 = UINT64_MAX;
volatile int8_t x556 = -1;
volatile int32_t t139 = -236479;
int8_t x564 = INT8_MIN;
static int32_t x565 = 5;
static uint8_t x566 = 1U;
int64_t x573 = INT64_MIN;
uint32_t x582 = UINT32_MAX;
uint8_t x585 = UINT8_MAX;
static volatile int32_t t148 = 31798;
int16_t x598 = INT16_MAX;
volatile int8_t x599 = 0;
volatile uint32_t x601 = 26U;
int64_t x603 = 687465LL;
static volatile int32_t t152 = 41;
int32_t t153 = -1078;
int16_t x618 = 1;
int32_t x619 = INT32_MAX;
uint64_t x626 = 246748423515461LLU;
volatile uint16_t x630 = UINT16_MAX;
static volatile int32_t t158 = -46357030;
int8_t x641 = -26;
uint64_t x644 = 779716016094LLU;
int32_t t160 = -291449;
static int16_t x648 = INT16_MIN;
volatile int32_t t161 = 1;
int32_t x649 = -1;
volatile int64_t x650 = INT64_MAX;
uint8_t x654 = UINT8_MAX;
int32_t t163 = -8234493;
int8_t x661 = 6;
volatile uint16_t x663 = 1U;
uint32_t x675 = 131U;
volatile int8_t x677 = INT8_MIN;
uint16_t x678 = 345U;
int32_t x685 = 58860;
int32_t x686 = INT32_MIN;
int32_t t172 = -373597;
volatile int32_t x693 = -1;
static volatile int16_t x696 = INT16_MIN;
static int16_t x701 = INT16_MIN;
volatile uint32_t x704 = 5494U;
int32_t x705 = INT32_MAX;
int16_t x708 = -1;
static int8_t x716 = 4;
int32_t t178 = 157;
volatile int8_t x719 = INT8_MAX;
int32_t x732 = INT32_MAX;
int32_t t182 = 684868;
int32_t x734 = 32736;
volatile uint64_t x738 = 118607LLU;
int32_t t184 = 250;
int64_t x746 = 20250LL;
int8_t x748 = 2;
static int32_t t186 = -32309;
volatile uint16_t x759 = 2102U;
int8_t x760 = -1;
uint16_t x770 = 1143U;
volatile int32_t t192 = -1;
uint8_t x776 = 3U;
int64_t x777 = INT64_MAX;
uint16_t x779 = UINT16_MAX;
volatile int32_t x780 = -1;
volatile int32_t t194 = 104688190;
uint8_t x785 = 2U;
static int8_t x789 = INT8_MIN;
volatile int8_t x793 = 0;
int8_t x796 = INT8_MIN;
static int32_t t199 = -803264;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	int16_t x4 = 4;
	volatile int32_t t0 = -118027;

    t0 = (((x1^x2)==x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int64_t x6 = -42013487447582LL;
	volatile int32_t x7 = 802869354;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -426;

    t1 = (((x5^x6)==x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	uint8_t x10 = 13U;
	int64_t x12 = -1LL;

    t2 = (((x9^x10)==x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 26130U;
	int16_t x15 = 75;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 7;

    t3 = (((x13^x14)==x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -614831976LL;
	volatile int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = 10436901;

    t4 = (((x17^x18)==x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x22 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = -14;
	int32_t t5 = -183859;

    t5 = (((x21^x22)==x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile uint64_t x26 = UINT64_MAX;
	static int16_t x27 = 12779;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = -79471;

    t6 = (((x25^x26)==x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 0U;
	int32_t x30 = -1502;
	int64_t x32 = INT64_MIN;

    t7 = (((x29^x30)==x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = 14U;
	int32_t x36 = INT32_MAX;
	static int32_t t8 = 12796682;

    t8 = (((x33^x34)==x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = -1;
	int8_t x39 = 25;
	int8_t x40 = 0;
	static int32_t t9 = -995210089;

    t9 = (((x37^x38)==x39)!=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x43 = -1LL;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -122;

    t10 = (((x41^x42)==x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = UINT16_MAX;
	volatile int64_t x47 = -1LL;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = -1;

    t11 = (((x45^x46)==x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int8_t x51 = INT8_MAX;
	uint32_t x52 = 217523054U;
	static volatile int32_t t12 = 17848;

    t12 = (((x49^x50)==x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 107U;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = 124U;
	int32_t t13 = -449136;

    t13 = (((x53^x54)==x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	static int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 28U;
	volatile int32_t t14 = -18;

    t14 = (((x57^x58)==x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MAX;
	int32_t x64 = 1986;
	int32_t t15 = 7542560;

    t15 = (((x61^x62)==x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int64_t x68 = 926014978641689432LL;
	int32_t t16 = 2392;

    t16 = (((x65^x66)==x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 3541550818586740944LLU;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	static int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -186899;

    t17 = (((x69^x70)==x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = -1;
	int16_t x75 = 130;
	uint16_t x76 = UINT16_MAX;
	int32_t t18 = -1;

    t18 = (((x73^x74)==x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	volatile int16_t x78 = -2;
	int64_t x79 = 4323644960040483838LL;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t19 = -204120248;

    t19 = (((x77^x78)==x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	volatile int32_t t20 = 45896;

    t20 = (((x81^x82)==x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	int32_t t21 = 3;

    t21 = (((x85^x86)==x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -116LL;
	int16_t x91 = -2;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t22 = -490776;

    t22 = (((x89^x90)==x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 26U;
	volatile int16_t x94 = -1;
	int64_t x95 = -1LL;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = -66051;

    t23 = (((x93^x94)==x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	int32_t x99 = 48535;
	int32_t t24 = 1;

    t24 = (((x97^x98)==x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = -1;
	volatile uint16_t x102 = 175U;
	int64_t x103 = -59445340LL;
	int32_t t25 = 1;

    t25 = (((x101^x102)==x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 3U;
	int8_t x106 = 0;
	uint32_t x107 = 37882U;
	uint16_t x108 = 1822U;
	int32_t t26 = 28278;

    t26 = (((x105^x106)==x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x111 = INT32_MAX;
	static int32_t x112 = 0;
	int32_t t27 = -27038768;

    t27 = (((x109^x110)==x111)!=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = 4054;
	uint32_t x114 = 2184U;
	int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MAX;

    t28 = (((x113^x114)==x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 0;
	int8_t x118 = INT8_MIN;
	volatile int64_t x119 = INT64_MIN;
	volatile int32_t t29 = 402422826;

    t29 = (((x117^x118)==x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x122 = 112LLU;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 18241074;

    t30 = (((x121^x122)==x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MAX;
	int32_t t31 = -10;

    t31 = (((x125^x126)==x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x130 = INT32_MIN;
	int8_t x131 = 12;
	uint16_t x132 = 504U;

    t32 = (((x129^x130)==x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 79U;
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = -1LL;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 1;

    t33 = (((x133^x134)==x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = INT8_MIN;
	volatile int8_t x139 = -1;
	volatile int8_t x140 = INT8_MAX;
	volatile int32_t t34 = 1369;

    t34 = (((x137^x138)==x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	volatile int32_t x142 = INT32_MAX;
	int64_t x143 = INT64_MIN;
	static int16_t x144 = INT16_MIN;
	int32_t t35 = -299129295;

    t35 = (((x141^x142)==x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 0U;
	int16_t x148 = -5;
	int32_t t36 = 7;

    t36 = (((x145^x146)==x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -7;
	static int8_t x150 = INT8_MIN;
	int16_t x151 = -46;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 7083;

    t37 = (((x149^x150)==x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -3189680LL;
	int32_t x154 = INT32_MAX;
	static volatile int32_t x156 = -1;
	volatile int32_t t38 = 2635718;

    t38 = (((x153^x154)==x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = -1;
	int32_t x159 = -1805353;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 1;

    t39 = (((x157^x158)==x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	volatile int8_t x162 = 9;
	int32_t x163 = INT32_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t40 = 3291037;

    t40 = (((x161^x162)==x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MAX;
	volatile int16_t x168 = -1196;
	static int32_t t41 = -549727;

    t41 = (((x165^x166)==x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 63252639320482568LL;
	int64_t x171 = INT64_MIN;
	static volatile int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 96;

    t42 = (((x169^x170)==x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	uint8_t x175 = 0U;
	int32_t x176 = 70264;
	volatile int32_t t43 = -252668;

    t43 = (((x173^x174)==x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = 59137LL;
	volatile int8_t x179 = -1;
	uint8_t x180 = 28U;
	volatile int32_t t44 = -32477;

    t44 = (((x177^x178)==x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = UINT64_MAX;
	int8_t x182 = 0;
	int16_t x184 = INT16_MAX;
	static volatile int32_t t45 = 41;

    t45 = (((x181^x182)==x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x185 = -115474353523LL;
	static uint32_t x186 = 1U;
	int32_t x187 = INT32_MAX;
	static int8_t x188 = INT8_MIN;
	int32_t t46 = -46060353;

    t46 = (((x185^x186)==x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 1U;
	int32_t x190 = 951;
	int32_t x191 = -1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -457964;

    t47 = (((x189^x190)==x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	uint64_t x194 = 0LLU;
	uint64_t x195 = 188LLU;

    t48 = (((x193^x194)==x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -134;
	static uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MAX;
	volatile int32_t t49 = -1984;

    t49 = (((x197^x198)==x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = INT8_MIN;
	volatile int8_t x202 = -30;
	volatile int64_t x203 = INT64_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = -2;

    t50 = (((x201^x202)==x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 1044695880U;
	static uint64_t x206 = UINT64_MAX;
	static int32_t x207 = 97114206;
	volatile int8_t x208 = INT8_MIN;
	int32_t t51 = -6816029;

    t51 = (((x205^x206)==x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MIN;
	static volatile int8_t x210 = -1;
	static int64_t x212 = 5035LL;
	static int32_t t52 = 5;

    t52 = (((x209^x210)==x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 1;
	uint16_t x215 = UINT16_MAX;
	uint64_t x216 = 240371758944956LLU;
	int32_t t53 = 854077;

    t53 = (((x213^x214)==x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = INT32_MAX;
	static int8_t x218 = INT8_MIN;
	static int16_t x219 = 10222;
	int16_t x220 = -2100;
	int32_t t54 = 0;

    t54 = (((x217^x218)==x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MIN;
	volatile int32_t t55 = -746521392;

    t55 = (((x221^x222)==x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	uint32_t x227 = 520202U;
	volatile int32_t x228 = INT32_MAX;

    t56 = (((x225^x226)==x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -8829175LL;
	int32_t x230 = -1;
	uint8_t x231 = UINT8_MAX;
	static int64_t x232 = -24882575921LL;
	int32_t t57 = 19212;

    t57 = (((x229^x230)==x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = 62U;
	uint8_t x235 = 40U;
	int32_t x236 = -1;
	int32_t t58 = 158530;

    t58 = (((x233^x234)==x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	static volatile int64_t x238 = INT64_MAX;
	uint64_t x239 = 7555825238826897LLU;
	uint32_t x240 = 1U;
	int32_t t59 = 134351337;

    t59 = (((x237^x238)==x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = 150LL;
	int8_t x243 = -1;
	static uint16_t x244 = UINT16_MAX;
	volatile int32_t t60 = 40611;

    t60 = (((x241^x242)==x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x245 = 3678U;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	int16_t x248 = INT16_MIN;

    t61 = (((x245^x246)==x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MIN;
	uint16_t x252 = 29U;
	volatile int32_t t62 = -149964;

    t62 = (((x249^x250)==x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x255 = 120189170LLU;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = -78;

    t63 = (((x253^x254)==x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	int64_t x258 = INT64_MIN;
	volatile uint64_t x259 = 8598231635256LLU;
	uint32_t x260 = 307598U;
	int32_t t64 = -6;

    t64 = (((x257^x258)==x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	volatile uint16_t x262 = UINT16_MAX;

    t65 = (((x261^x262)==x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = 436;
	int32_t x267 = -143733;
	uint8_t x268 = 1U;
	int32_t t66 = 124;

    t66 = (((x265^x266)==x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 2U;
	uint32_t x272 = 260602138U;
	int32_t t67 = -990716888;

    t67 = (((x269^x270)==x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x275 = INT32_MIN;
	static volatile int32_t t68 = 417;

    t68 = (((x273^x274)==x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = -1;
	int32_t x279 = -3311127;
	volatile int64_t x280 = -1LL;

    t69 = (((x277^x278)==x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 729658LL;
	static uint32_t x282 = 0U;
	uint32_t x283 = 53742U;
	uint16_t x284 = 30U;

    t70 = (((x281^x282)==x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = 959U;
	int16_t x286 = INT16_MIN;
	static int64_t x288 = 14764030LL;
	static int32_t t71 = 20;

    t71 = (((x285^x286)==x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = -16565198137599582LL;
	static int8_t x292 = INT8_MAX;

    t72 = (((x289^x290)==x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = UINT64_MAX;
	int8_t x294 = -1;
	volatile int32_t t73 = 160;

    t73 = (((x293^x294)==x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile int32_t x298 = -10;
	int64_t x299 = 1633996043286LL;
	volatile int64_t x300 = INT64_MIN;

    t74 = (((x297^x298)==x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x302 = 198431U;
	uint64_t x303 = 2593060647694240LLU;
	int64_t x304 = INT64_MIN;
	volatile int32_t t75 = 435375510;

    t75 = (((x301^x302)==x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	int8_t x306 = 7;
	int8_t x308 = 0;

    t76 = (((x305^x306)==x307)!=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = 8;
	volatile uint32_t x311 = 374539U;
	static volatile int16_t x312 = -430;

    t77 = (((x309^x310)==x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = 13;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t78 = -38;

    t78 = (((x313^x314)==x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x318 = INT32_MAX;
	uint8_t x319 = 58U;
	int16_t x320 = -139;

    t79 = (((x317^x318)==x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MIN;
	int8_t x324 = 0;

    t80 = (((x321^x322)==x323)!=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x326 = -1;
	int64_t x327 = INT64_MIN;
	volatile int32_t t81 = 600;

    t81 = (((x325^x326)==x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x329 = INT8_MIN;
	static int16_t x330 = 26;
	int16_t x331 = 12845;
	volatile int64_t x332 = INT64_MIN;

    t82 = (((x329^x330)==x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x333 = INT32_MAX;
	int64_t x334 = 2887348682347765LL;
	int32_t x335 = -1;
	int16_t x336 = 21;
	volatile int32_t t83 = 3;

    t83 = (((x333^x334)==x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = 61U;
	volatile int8_t x338 = INT8_MAX;
	int8_t x339 = -1;
	int64_t x340 = INT64_MAX;

    t84 = (((x337^x338)==x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = 188210915;

    t85 = (((x341^x342)==x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 110LLU;
	int8_t x347 = -52;
	volatile int32_t t86 = 1;

    t86 = (((x345^x346)==x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	int32_t x351 = -1;
	uint16_t x352 = 5U;
	int32_t t87 = 9301866;

    t87 = (((x349^x350)==x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -1;
	static int64_t x355 = 96014749215634LL;
	static int16_t x356 = -1;
	int32_t t88 = -1;

    t88 = (((x353^x354)==x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -1;
	volatile uint8_t x358 = 1U;
	int64_t x359 = INT64_MIN;

    t89 = (((x357^x358)==x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	uint64_t x362 = 2723793LLU;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;
	int32_t t90 = -20616;

    t90 = (((x361^x362)==x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MIN;
	int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t91 = -12164160;

    t91 = (((x365^x366)==x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 1U;
	int64_t x370 = 4211944993771LL;
	volatile int32_t x371 = 89764;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -458374;

    t92 = (((x369^x370)==x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	int64_t x374 = 120LL;
	int8_t x375 = INT8_MIN;
	volatile int64_t x376 = 2775778LL;
	volatile int32_t t93 = -414;

    t93 = (((x373^x374)==x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 177878912770LLU;
	static int32_t x378 = -1;
	int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = 0U;
	volatile int32_t t94 = 3;

    t94 = (((x377^x378)==x379)!=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 0U;
	int8_t x382 = 57;
	int16_t x383 = INT16_MAX;
	static uint64_t x384 = 2516421LLU;
	static int32_t t95 = 34536;

    t95 = (((x381^x382)==x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = 1554918U;
	int32_t t96 = -246798324;

    t96 = (((x385^x386)==x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	static int16_t x392 = 902;
	static int32_t t97 = -9;

    t97 = (((x389^x390)==x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MIN;
	int16_t x396 = -1;
	volatile int32_t t98 = -2700672;

    t98 = (((x393^x394)==x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 1658U;
	static int32_t x398 = INT32_MAX;
	volatile uint16_t x399 = UINT16_MAX;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = 98381910;

    t99 = (((x397^x398)==x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MIN;
	static int16_t x404 = -1;
	volatile int32_t t100 = -21;

    t100 = (((x401^x402)==x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	int32_t x406 = -503588;
	int8_t x408 = 12;
	volatile int32_t t101 = -79796;

    t101 = (((x405^x406)==x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x409 = 5073U;
	uint16_t x410 = UINT16_MAX;
	int64_t x412 = INT64_MIN;
	int32_t t102 = 199;

    t102 = (((x409^x410)==x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = INT8_MAX;
	static uint64_t x415 = 2419LLU;
	int64_t x416 = INT64_MAX;
	volatile int32_t t103 = 285;

    t103 = (((x413^x414)==x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = 158205631192721LL;
	int32_t x419 = -228979078;
	static uint8_t x420 = UINT8_MAX;
	int32_t t104 = -3297;

    t104 = (((x417^x418)==x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	int16_t x423 = INT16_MIN;
	uint8_t x424 = 10U;
	volatile int32_t t105 = -4;

    t105 = (((x421^x422)==x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x427 = 2;
	int32_t t106 = -451304;

    t106 = (((x425^x426)==x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = UINT64_MAX;
	uint64_t x430 = UINT64_MAX;
	static int32_t x431 = -2;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -9747;

    t107 = (((x429^x430)==x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MAX;
	static int64_t x435 = INT64_MIN;
	volatile int16_t x436 = -1;
	volatile int32_t t108 = 63752;

    t108 = (((x433^x434)==x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	volatile uint64_t x439 = 7810327LLU;
	static volatile uint32_t x440 = 167730931U;
	volatile int32_t t109 = -60315989;

    t109 = (((x437^x438)==x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	int16_t x442 = INT16_MIN;
	static int16_t x443 = -1;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t110 = 62;

    t110 = (((x441^x442)==x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = -1217;
	volatile int32_t x447 = INT32_MIN;
	int32_t x448 = INT32_MAX;
	int32_t t111 = 2;

    t111 = (((x445^x446)==x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 1LL;
	int32_t x450 = INT32_MIN;
	int16_t x452 = 1330;

    t112 = (((x449^x450)==x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	int32_t x455 = 987376;
	int32_t t113 = 3186912;

    t113 = (((x453^x454)==x455)!=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = 64003521234033431LL;
	int32_t x458 = INT32_MAX;
	volatile uint32_t x459 = 1561368U;
	volatile int32_t t114 = 374;

    t114 = (((x457^x458)==x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = -3LL;
	volatile int16_t x463 = -117;
	static int32_t x464 = INT32_MAX;
	volatile int32_t t115 = 0;

    t115 = (((x461^x462)==x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = 10;
	int8_t x466 = -1;
	int32_t t116 = 2339;

    t116 = (((x465^x466)==x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	volatile uint32_t x470 = UINT32_MAX;
	uint64_t x472 = 205367735107938LLU;
	volatile int32_t t117 = -1;

    t117 = (((x469^x470)==x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	int32_t x474 = 24005183;
	int32_t x475 = -1;
	int8_t x476 = INT8_MIN;
	int32_t t118 = -4;

    t118 = (((x473^x474)==x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -1;
	volatile int64_t x480 = -11465341650198LL;
	int32_t t119 = 71313420;

    t119 = (((x477^x478)==x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	volatile int16_t x483 = INT16_MAX;
	static int8_t x484 = INT8_MIN;
	int32_t t120 = 4104267;

    t120 = (((x481^x482)==x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	int64_t x486 = 132129049LL;
	int16_t x487 = INT16_MAX;
	static int8_t x488 = INT8_MIN;

    t121 = (((x485^x486)==x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x490 = -1526;
	volatile int16_t x491 = INT16_MAX;
	volatile int8_t x492 = -1;
	volatile int32_t t122 = -325766360;

    t122 = (((x489^x490)==x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 7277U;
	volatile int16_t x494 = INT16_MAX;
	int64_t x495 = 3377399135919563LL;
	static int64_t x496 = INT64_MIN;
	volatile int32_t t123 = -421102648;

    t123 = (((x493^x494)==x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	int64_t x498 = -1LL;
	uint64_t x499 = 4LLU;
	int32_t t124 = 2258;

    t124 = (((x497^x498)==x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 60124916LLU;
	static volatile int8_t x503 = INT8_MAX;
	uint16_t x504 = UINT16_MAX;
	static volatile int32_t t125 = 22267389;

    t125 = (((x501^x502)==x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x505 = 0;
	uint8_t x506 = 13U;
	static int8_t x507 = INT8_MAX;
	volatile int32_t t126 = -1;

    t126 = (((x505^x506)==x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x510 = 28U;
	volatile int16_t x511 = 94;
	volatile int16_t x512 = INT16_MIN;

    t127 = (((x509^x510)==x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint32_t x514 = 5919U;
	static int8_t x515 = 0;
	uint16_t x516 = 27311U;
	int32_t t128 = -1254;

    t128 = (((x513^x514)==x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = -1;
	int8_t x518 = -12;
	static volatile int8_t x519 = INT8_MAX;
	int8_t x520 = -2;
	volatile int32_t t129 = 569;

    t129 = (((x517^x518)==x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x521 = 1419427834U;
	volatile int32_t x522 = -511;
	static int32_t x523 = -6435785;
	volatile int16_t x524 = 13164;
	static volatile int32_t t130 = -357816449;

    t130 = (((x521^x522)==x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 94U;
	uint64_t x526 = UINT64_MAX;
	volatile int32_t t131 = -106383;

    t131 = (((x525^x526)==x527)!=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x529 = UINT32_MAX;
	static int64_t x530 = -1LL;
	int16_t x531 = INT16_MIN;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = 188496;

    t132 = (((x529^x530)==x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x535 = -1;
	volatile int32_t t133 = -48;

    t133 = (((x533^x534)==x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	uint64_t x538 = 14705033903248LLU;

    t134 = (((x537^x538)==x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x542 = 182420155180796998LL;
	int32_t x543 = INT32_MIN;
	int16_t x544 = INT16_MIN;

    t135 = (((x541^x542)==x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	volatile int8_t x546 = -1;
	uint64_t x547 = 7038LLU;
	int8_t x548 = INT8_MIN;
	volatile int32_t t136 = 222;

    t136 = (((x545^x546)==x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x549 = 434;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t137 = -14;

    t137 = (((x549^x550)==x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x554 = 11042265493888LLU;
	uint32_t x555 = 3067837U;
	int32_t t138 = -18607;

    t138 = (((x553^x554)==x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = UINT32_MAX;
	int16_t x558 = 219;
	int16_t x559 = INT16_MIN;
	uint8_t x560 = 10U;

    t139 = (((x557^x558)==x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = UINT16_MAX;
	static int64_t x562 = -1LL;
	int32_t x563 = -1;
	int32_t t140 = -892096;

    t140 = (((x561^x562)==x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x567 = INT16_MAX;
	uint64_t x568 = 45818576727LLU;
	volatile int32_t t141 = -1425355;

    t141 = (((x565^x566)==x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	uint16_t x570 = UINT16_MAX;
	int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	int32_t t142 = 113621872;

    t142 = (((x569^x570)==x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = 1055234799;
	int64_t x575 = -1LL;
	static volatile uint32_t x576 = 1U;
	int32_t t143 = -4;

    t143 = (((x573^x574)==x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = INT32_MAX;
	uint16_t x578 = 990U;
	int32_t x579 = -124643424;
	uint64_t x580 = 1781LLU;
	int32_t t144 = 1218364;

    t144 = (((x577^x578)==x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	uint16_t x583 = 16273U;
	volatile uint64_t x584 = 475852434LLU;
	volatile int32_t t145 = -236;

    t145 = (((x581^x582)==x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	uint8_t x588 = 44U;
	static volatile int32_t t146 = 11;

    t146 = (((x585^x586)==x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = INT8_MIN;
	int32_t x591 = 100124;
	uint8_t x592 = 3U;
	volatile int32_t t147 = 6231976;

    t147 = (((x589^x590)==x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint32_t x594 = 32924774U;
	int16_t x595 = -1;
	int32_t x596 = INT32_MIN;

    t148 = (((x593^x594)==x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 178460U;
	uint32_t x600 = 31233996U;
	static volatile int32_t t149 = 1001464;

    t149 = (((x597^x598)==x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x602 = INT32_MIN;
	int8_t x604 = 1;
	int32_t t150 = 111479139;

    t150 = (((x601^x602)==x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x606 = 848322530;
	int64_t x607 = INT64_MIN;
	volatile int64_t x608 = INT64_MIN;
	static int32_t t151 = -70;

    t151 = (((x605^x606)==x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 0U;
	static volatile int8_t x610 = 7;
	int32_t x611 = -221493973;
	static volatile uint32_t x612 = 29U;

    t152 = (((x609^x610)==x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -45;
	static uint8_t x614 = 2U;
	int16_t x615 = -2;
	uint64_t x616 = 417663LLU;

    t153 = (((x613^x614)==x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 16878;

    t154 = (((x617^x618)==x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = -1;
	volatile uint8_t x622 = 6U;
	int16_t x623 = -1;
	int32_t x624 = 1256633;
	static int32_t t155 = -161214;

    t155 = (((x621^x622)==x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	uint8_t x627 = 22U;
	int32_t x628 = -1;
	int32_t t156 = 15959472;

    t156 = (((x625^x626)==x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MIN;
	int64_t x631 = INT64_MAX;
	static int16_t x632 = -1;
	int32_t t157 = -14834756;

    t157 = (((x629^x630)==x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 1;
	int64_t x634 = INT64_MIN;
	int32_t x635 = INT32_MAX;
	uint32_t x636 = UINT32_MAX;

    t158 = (((x633^x634)==x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	volatile int8_t x638 = 60;
	static int8_t x639 = INT8_MIN;
	int16_t x640 = INT16_MIN;
	volatile int32_t t159 = 7;

    t159 = (((x637^x638)==x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x642 = 10U;
	static int16_t x643 = INT16_MAX;

    t160 = (((x641^x642)==x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MIN;
	uint8_t x646 = UINT8_MAX;
	int8_t x647 = -1;

    t161 = (((x645^x646)==x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x651 = INT16_MIN;
	int8_t x652 = INT8_MIN;
	volatile int32_t t162 = 9000;

    t162 = (((x649^x650)==x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = 10;
	uint64_t x655 = 14600240LLU;
	int16_t x656 = -4;

    t163 = (((x653^x654)==x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = 383;
	int16_t x658 = INT16_MIN;
	uint16_t x659 = UINT16_MAX;
	volatile int64_t x660 = INT64_MIN;
	volatile int32_t t164 = 1;

    t164 = (((x657^x658)==x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x662 = INT16_MIN;
	uint8_t x664 = 2U;
	int32_t t165 = -21;

    t165 = (((x661^x662)==x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MIN;
	int32_t x666 = -1;
	volatile uint32_t x667 = 9330211U;
	uint16_t x668 = 87U;
	int32_t t166 = 368783653;

    t166 = (((x665^x666)==x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x669 = 108U;
	int64_t x670 = 1746716376628523138LL;
	int32_t x671 = INT32_MIN;
	int16_t x672 = INT16_MAX;
	volatile int32_t t167 = 17188634;

    t167 = (((x669^x670)==x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x673 = 102360464U;
	int16_t x674 = INT16_MIN;
	volatile int64_t x676 = INT64_MAX;
	volatile int32_t t168 = -139724;

    t168 = (((x673^x674)==x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x679 = INT32_MIN;
	volatile int8_t x680 = INT8_MIN;
	volatile int32_t t169 = -706975504;

    t169 = (((x677^x678)==x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	static uint16_t x682 = 98U;
	uint8_t x683 = 10U;
	int8_t x684 = -32;
	static volatile int32_t t170 = 444673055;

    t170 = (((x681^x682)==x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x687 = INT64_MIN;
	static uint64_t x688 = 1026492761LLU;
	int32_t t171 = -1117413;

    t171 = (((x685^x686)==x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 39120U;
	int64_t x690 = 10998340134LL;
	int64_t x691 = INT64_MIN;
	int64_t x692 = INT64_MIN;

    t172 = (((x689^x690)==x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x694 = 40435U;
	uint32_t x695 = 210045U;
	int32_t t173 = -4511590;

    t173 = (((x693^x694)==x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 663U;
	static int32_t x698 = INT32_MIN;
	int32_t x699 = 1961;
	static int32_t x700 = 12169;
	static volatile int32_t t174 = -12912863;

    t174 = (((x697^x698)==x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = 1026U;
	volatile uint64_t x703 = 1LLU;
	static int32_t t175 = 4121944;

    t175 = (((x701^x702)==x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x706 = INT16_MIN;
	int8_t x707 = INT8_MIN;
	volatile int32_t t176 = -18385235;

    t176 = (((x705^x706)==x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 54737U;
	uint16_t x710 = UINT16_MAX;
	int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MAX;
	int32_t t177 = -108;

    t177 = (((x709^x710)==x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = INT8_MIN;
	uint16_t x714 = UINT16_MAX;
	volatile int16_t x715 = INT16_MAX;

    t178 = (((x713^x714)==x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	int64_t x718 = -63LL;
	uint32_t x720 = 5163377U;
	volatile int32_t t179 = 245162;

    t179 = (((x717^x718)==x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x721 = INT8_MIN;
	int16_t x722 = 7454;
	uint16_t x723 = UINT16_MAX;
	int32_t x724 = INT32_MAX;
	volatile int32_t t180 = -74812;

    t180 = (((x721^x722)==x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = INT64_MIN;
	volatile int64_t x726 = 2446630002967LL;
	uint16_t x727 = UINT16_MAX;
	static volatile int64_t x728 = -1LL;
	static volatile int32_t t181 = -3616849;

    t181 = (((x725^x726)==x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MAX;
	uint32_t x730 = UINT32_MAX;
	uint32_t x731 = 2U;

    t182 = (((x729^x730)==x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MAX;
	int8_t x735 = -5;
	static int64_t x736 = 15578814947LL;
	volatile int32_t t183 = -18020184;

    t183 = (((x733^x734)==x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile int64_t x739 = -1LL;
	int8_t x740 = 4;

    t184 = (((x737^x738)==x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = 829670LL;
	static int64_t x742 = -1LL;
	int16_t x743 = 2;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t185 = 418;

    t185 = (((x741^x742)==x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	uint16_t x747 = 404U;

    t186 = (((x745^x746)==x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	volatile uint64_t x750 = 606511356LLU;
	int64_t x751 = -9406LL;
	volatile uint16_t x752 = 2219U;
	volatile int32_t t187 = -20947;

    t187 = (((x749^x750)==x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = INT32_MIN;
	int16_t x754 = -1;
	int32_t x755 = INT32_MIN;
	uint64_t x756 = 3224903082469LLU;
	int32_t t188 = -22888;

    t188 = (((x753^x754)==x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -1;
	static int32_t x758 = INT32_MAX;
	int32_t t189 = -457636;

    t189 = (((x757^x758)==x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = 276595146939LLU;
	volatile uint64_t x762 = UINT64_MAX;
	uint16_t x763 = UINT16_MAX;
	int16_t x764 = INT16_MIN;
	int32_t t190 = 63;

    t190 = (((x761^x762)==x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = -8LL;
	static int64_t x766 = 4873980LL;
	volatile int32_t x767 = 1337545;
	static int32_t x768 = INT32_MIN;
	volatile int32_t t191 = -468897;

    t191 = (((x765^x766)==x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x769 = INT32_MAX;
	int64_t x771 = -1LL;
	volatile int8_t x772 = -5;

    t192 = (((x769^x770)==x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 1666700;
	static uint16_t x774 = UINT16_MAX;
	uint8_t x775 = 111U;
	static volatile int32_t t193 = 2670;

    t193 = (((x773^x774)==x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x778 = -1LL;

    t194 = (((x777^x778)==x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -65967301369LL;
	int8_t x782 = 0;
	static int64_t x783 = 14LL;
	uint32_t x784 = 261094U;
	int32_t t195 = -14455489;

    t195 = (((x781^x782)==x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = 0;
	uint32_t x787 = 38992171U;
	int32_t x788 = -1;
	int32_t t196 = 12249107;

    t196 = (((x785^x786)==x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x790 = 99U;
	uint64_t x791 = 149814545LLU;
	uint64_t x792 = UINT64_MAX;
	int32_t t197 = -4;

    t197 = (((x789^x790)==x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x794 = INT32_MAX;
	int16_t x795 = INT16_MIN;
	static int32_t t198 = -14618534;

    t198 = (((x793^x794)==x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	int32_t x798 = -1513814;
	uint16_t x799 = UINT16_MAX;
	static uint16_t x800 = 1581U;

    t199 = (((x797^x798)==x799)!=x800);

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

