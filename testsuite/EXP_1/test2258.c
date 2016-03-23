
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

int8_t x5 = INT8_MIN;
int32_t x10 = 284079;
static int32_t x13 = -5;
uint32_t x16 = 106567U;
int32_t t5 = 43697345;
int64_t x26 = INT64_MIN;
int32_t t6 = -2005;
int16_t x37 = INT16_MIN;
int32_t x38 = 2;
static int16_t x41 = INT16_MIN;
volatile int64_t x42 = 39501148219LL;
int32_t t10 = 4010758;
uint64_t x47 = UINT64_MAX;
int32_t t12 = -3227250;
int8_t x56 = -29;
volatile int32_t t14 = 480;
volatile int32_t x67 = INT32_MAX;
uint32_t t17 = 103626U;
int32_t x81 = INT32_MIN;
int32_t x82 = INT32_MAX;
int8_t x83 = INT8_MAX;
uint8_t x90 = 32U;
static int64_t x91 = 347007LL;
static volatile int32_t x99 = 25118726;
int64_t x100 = INT64_MIN;
int64_t x101 = -1LL;
int16_t x104 = INT16_MAX;
static int32_t t24 = -308;
int8_t x110 = -1;
uint64_t t25 = 59116160LLU;
volatile int32_t t27 = -3134207;
int64_t x124 = INT64_MIN;
int32_t x128 = INT32_MIN;
int16_t x129 = 30;
int16_t x136 = INT16_MIN;
static int16_t x142 = INT16_MIN;
volatile int16_t x156 = INT16_MIN;
uint64_t x160 = UINT64_MAX;
volatile int32_t x162 = INT32_MIN;
uint32_t t38 = 6715481U;
int16_t x166 = INT16_MIN;
int64_t x172 = 403LL;
volatile int64_t t40 = 50187241697LL;
int16_t x173 = 2;
int32_t x176 = 92685452;
uint32_t x177 = 12567579U;
int16_t x180 = -1;
static volatile uint32_t x187 = UINT32_MAX;
int32_t x190 = 209;
volatile uint64_t x191 = 18632245787LLU;
static int64_t x195 = INT64_MIN;
int32_t x197 = INT32_MAX;
uint64_t x198 = UINT64_MAX;
int32_t t48 = 168;
uint32_t x208 = 60U;
uint32_t t49 = 1397U;
int16_t x220 = INT16_MIN;
uint32_t x221 = 441877U;
static int64_t x223 = -1LL;
volatile int16_t x224 = -1;
volatile int32_t x228 = -1;
uint64_t x236 = UINT64_MAX;
static volatile int16_t x238 = INT16_MAX;
uint8_t x239 = 2U;
int32_t t57 = 153707;
volatile int8_t x243 = INT8_MIN;
int32_t t58 = 11134986;
uint16_t x246 = UINT16_MAX;
int8_t x249 = -39;
uint64_t x250 = 31362491LLU;
int16_t x255 = INT16_MIN;
int32_t x256 = INT32_MAX;
int32_t x257 = INT32_MAX;
static int32_t x258 = 232622929;
static int8_t x264 = -1;
volatile uint64_t x266 = 0LLU;
volatile int64_t t65 = -16831310529966LL;
int32_t x273 = INT32_MIN;
int32_t x274 = -1;
int32_t x275 = INT32_MIN;
int64_t x279 = 12LL;
static int16_t x280 = INT16_MIN;
uint16_t x283 = 10U;
static uint32_t x290 = UINT32_MAX;
int32_t t71 = 1;
uint16_t x302 = UINT16_MAX;
volatile int8_t x303 = -1;
volatile int32_t t72 = 1;
int16_t x307 = INT16_MAX;
uint64_t x309 = UINT64_MAX;
static volatile int64_t x311 = INT64_MAX;
volatile uint64_t x312 = UINT64_MAX;
volatile int16_t x317 = 188;
uint64_t x319 = UINT64_MAX;
uint8_t x321 = 3U;
static int32_t t78 = 930;
int8_t x330 = INT8_MIN;
int64_t x332 = -124959204133345320LL;
static int16_t x333 = 26;
volatile int16_t x347 = -5;
static int32_t t83 = 1;
int64_t x352 = 533011LL;
int64_t x358 = INT64_MAX;
static uint8_t x360 = UINT8_MAX;
int64_t x366 = -1LL;
static int16_t x368 = INT16_MAX;
int16_t x370 = INT16_MAX;
static int64_t x373 = 2856109475278730LL;
uint8_t x375 = UINT8_MAX;
int32_t x376 = INT32_MIN;
volatile int32_t t90 = 894;
volatile int32_t t95 = -22;
int32_t x397 = INT32_MIN;
uint32_t t96 = 449131U;
int32_t x408 = -1;
volatile int32_t t98 = 5658;
int32_t x419 = INT32_MIN;
int64_t t99 = 2235LL;
volatile int16_t x421 = -2;
uint64_t x428 = UINT64_MAX;
volatile uint64_t t101 = 63817LLU;
int32_t x434 = INT32_MAX;
int32_t t104 = 8032;
int8_t x446 = INT8_MIN;
int64_t t106 = 2LL;
volatile int32_t t107 = -31;
uint16_t x457 = 7376U;
uint16_t x463 = 31068U;
uint64_t x467 = 6915243883509045213LLU;
volatile int8_t x468 = -1;
volatile int32_t x469 = INT32_MAX;
int32_t t112 = 56270165;
int16_t x478 = 7;
int32_t t115 = -65391097;
volatile int64_t x485 = INT64_MIN;
volatile int32_t t116 = 117232;
uint16_t x491 = 3606U;
static int32_t t117 = -3;
uint64_t x495 = UINT64_MAX;
volatile int16_t x496 = INT16_MIN;
int32_t x497 = -11309;
volatile int32_t t119 = -16;
volatile int32_t x509 = INT32_MIN;
uint8_t x512 = 2U;
int32_t t123 = -797736911;
static volatile int32_t t124 = 766762614;
int16_t x526 = -1;
volatile int64_t t126 = 218805739LL;
volatile uint32_t x532 = UINT32_MAX;
volatile uint64_t t128 = 18279186005889998LLU;
int16_t x539 = 1;
uint32_t t131 = 123726450U;
static int16_t x552 = INT16_MAX;
uint64_t x556 = UINT64_MAX;
volatile int32_t x563 = -3825;
volatile int32_t t135 = -130737898;
int8_t x566 = INT8_MIN;
volatile uint32_t x567 = 388170278U;
int32_t t136 = -367052;
int16_t x570 = INT16_MIN;
volatile int8_t x571 = INT8_MIN;
int32_t t140 = 5782287;
int64_t x588 = INT64_MAX;
uint8_t x599 = UINT8_MAX;
int64_t t144 = -139799LL;
volatile uint16_t x607 = 99U;
int32_t x609 = INT32_MIN;
int32_t x611 = -1;
int32_t x613 = INT32_MIN;
int8_t x618 = INT8_MAX;
int8_t x620 = INT8_MAX;
uint32_t x623 = UINT32_MAX;
volatile int16_t x627 = INT16_MIN;
int16_t x628 = INT16_MIN;
static volatile int32_t t152 = -7326;
int64_t x641 = -642359281181668LL;
uint8_t x642 = 48U;
int32_t x644 = INT32_MIN;
volatile int16_t x649 = INT16_MIN;
static uint64_t x660 = UINT64_MAX;
static int16_t x662 = INT16_MIN;
volatile uint32_t x663 = 672U;
uint32_t x665 = 229753U;
int64_t x666 = INT64_MIN;
static uint64_t x670 = 1488300137737LLU;
volatile int16_t x679 = -12486;
static int16_t x683 = 3;
uint8_t x685 = 43U;
static uint32_t x686 = 130526847U;
static int8_t x689 = INT8_MAX;
int8_t x693 = INT8_MIN;
static uint8_t x696 = UINT8_MAX;
volatile int32_t t167 = -1;
volatile int8_t x701 = -1;
static int16_t x705 = 184;
volatile int16_t x707 = INT16_MAX;
int64_t x709 = INT64_MIN;
int16_t x712 = INT16_MIN;
uint16_t x716 = 350U;
int8_t x718 = -10;
int64_t x724 = INT64_MIN;
uint16_t x728 = UINT16_MAX;
static int64_t x730 = -1LL;
int32_t x732 = -1;
uint32_t t177 = 3572288U;
int32_t x737 = -519;
int8_t x738 = 7;
uint8_t x739 = 96U;
static uint16_t x748 = 1656U;
static int16_t x756 = 2713;
volatile int8_t x761 = -5;
int16_t x763 = -1;
int64_t x765 = INT64_MIN;
int16_t x767 = -9;
int16_t x769 = INT16_MAX;
int32_t x770 = -1;
static int64_t x773 = 899516519052792LL;
uint16_t x777 = 753U;
int64_t x783 = INT64_MIN;
uint8_t x784 = 5U;
static uint16_t x786 = 199U;
static int8_t x792 = -50;
volatile uint16_t x795 = 770U;
uint8_t x798 = 8U;
volatile uint64_t x799 = UINT64_MAX;
volatile int32_t t193 = 753369806;
int16_t x806 = INT16_MIN;
static volatile int64_t t194 = 659LL;
uint16_t x810 = UINT16_MAX;
volatile uint32_t x812 = 17U;
int8_t x818 = 2;
volatile int32_t x825 = INT32_MIN;
uint8_t x826 = 123U;


void f0(void) {
    	static volatile uint64_t x1 = 185239372607466093LLU;
	static uint64_t x2 = UINT64_MAX;
	static uint64_t x3 = UINT64_MAX;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 70363LLU;

    t0 = (((x1&x2)==x3)/x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 10707;
	int64_t x7 = INT64_MAX;
	volatile uint16_t x8 = 3554U;
	int32_t t1 = 249;

    t1 = (((x5&x6)==x7)/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	uint8_t x11 = 23U;
	int16_t x12 = -5;
	volatile int32_t t2 = -1;

    t2 = (((x9&x10)==x11)/x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -1;
	int16_t x15 = -13;
	uint32_t t3 = 8328429U;

    t3 = (((x13&x14)==x15)/x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 0U;
	int32_t x18 = -7767;
	uint16_t x19 = 10726U;
	uint16_t x20 = 11906U;
	int32_t t4 = 3683698;

    t4 = (((x17&x18)==x19)/x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 1U;
	int8_t x22 = 8;
	int8_t x23 = INT8_MIN;
	volatile int32_t x24 = -1;

    t5 = (((x21&x22)==x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MIN;

    t6 = (((x25&x26)==x27)/x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	volatile int8_t x31 = INT8_MIN;
	uint64_t x32 = 843379041053428LLU;
	uint64_t t7 = 445LLU;

    t7 = (((x29&x30)==x31)/x32);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int8_t x34 = 19;
	volatile int8_t x35 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 0;

    t8 = (((x33&x34)==x35)/x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x39 = INT8_MIN;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 6718152877494LLU;

    t9 = (((x37&x38)==x39)/x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x43 = INT16_MIN;
	static int32_t x44 = INT32_MIN;

    t10 = (((x41&x42)==x43)/x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MIN;
	int32_t x46 = -70;
	uint8_t x48 = 3U;
	volatile int32_t t11 = -718;

    t11 = (((x45&x46)==x47)/x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x49 = 1011653159U;
	static volatile int16_t x50 = -1;
	static int32_t x51 = INT32_MIN;
	uint8_t x52 = 4U;

    t12 = (((x49&x50)==x51)/x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = UINT32_MAX;
	volatile int32_t t13 = -45872226;

    t13 = (((x53&x54)==x55)/x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = -17311;
	int32_t x58 = INT32_MIN;
	volatile int64_t x59 = -344LL;
	int8_t x60 = INT8_MIN;

    t14 = (((x57&x58)==x59)/x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	volatile int8_t x66 = INT8_MIN;
	int32_t x68 = 13289;
	volatile int32_t t15 = -2236;

    t15 = (((x65&x66)==x67)/x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = -1;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = 2338525198317LL;
	int64_t x72 = -374990723891306606LL;
	int64_t t16 = -3559LL;

    t16 = (((x69&x70)==x71)/x72);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x77 = INT64_MAX;
	volatile int16_t x78 = -472;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 1898U;

    t17 = (((x77&x78)==x79)/x80);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x84 = -1;
	static volatile int32_t t18 = 1975420;

    t18 = (((x81&x82)==x83)/x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 25969436446132LLU;
	uint16_t x86 = 2835U;
	volatile int8_t x87 = -1;
	static uint64_t x88 = 34760300LLU;
	uint64_t t19 = 267535368LLU;

    t19 = (((x85&x86)==x87)/x88);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = 2;
	static int16_t x92 = -1;
	volatile int32_t t20 = -990;

    t20 = (((x89&x90)==x91)/x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = 5313LL;
	volatile int32_t x94 = 33;
	int16_t x95 = -5;
	uint32_t x96 = 3U;
	volatile uint32_t t21 = 183613674U;

    t21 = (((x93&x94)==x95)/x96);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x97 = 31341;
	int8_t x98 = -1;
	int64_t t22 = 290562800994LL;

    t22 = (((x97&x98)==x99)/x100);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x102 = 7702220668597962590LLU;
	int16_t x103 = INT16_MIN;
	volatile int32_t t23 = 63493359;

    t23 = (((x101&x102)==x103)/x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x105 = 42U;
	static int16_t x106 = -1;
	static int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MIN;

    t24 = (((x105&x106)==x107)/x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MIN;
	uint32_t x111 = 27U;
	uint64_t x112 = 4871402702069273693LLU;

    t25 = (((x109&x110)==x111)/x112);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	volatile int64_t x115 = -1LL;
	int8_t x116 = 1;
	int32_t t26 = -1467929;

    t26 = (((x113&x114)==x115)/x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	int16_t x118 = -1;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -1;

    t27 = (((x117&x118)==x119)/x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x121 = 261698505153LLU;
	int16_t x122 = 55;
	volatile int8_t x123 = INT8_MIN;
	int64_t t28 = 22095LL;

    t28 = (((x121&x122)==x123)/x124);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x125 = INT32_MIN;
	volatile int32_t x126 = INT32_MAX;
	static uint8_t x127 = 15U;
	int32_t t29 = 5046086;

    t29 = (((x125&x126)==x127)/x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x130 = -4954728;
	int64_t x131 = INT64_MIN;
	volatile uint32_t x132 = 1U;
	uint32_t t30 = 6271639U;

    t30 = (((x129&x130)==x131)/x132);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x133 = -259577776421189LL;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = 3;
	volatile int32_t t31 = -12266933;

    t31 = (((x133&x134)==x135)/x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x137 = INT64_MIN;
	int16_t x138 = -3;
	volatile int8_t x139 = -1;
	int8_t x140 = INT8_MAX;
	int32_t t32 = -11920;

    t32 = (((x137&x138)==x139)/x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = 7491U;
	static int64_t x143 = INT64_MIN;
	static int8_t x144 = 60;
	int32_t t33 = -8865066;

    t33 = (((x141&x142)==x143)/x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = INT64_MIN;
	uint8_t x148 = 7U;
	volatile int32_t t34 = 6832;

    t34 = (((x145&x146)==x147)/x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	int8_t x151 = 0;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t35 = 54780191;

    t35 = (((x149&x150)==x151)/x152);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = -235934626LL;
	volatile int8_t x154 = -1;
	static volatile int64_t x155 = -1LL;
	volatile int32_t t36 = 601;

    t36 = (((x153&x154)==x155)/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = -1;
	static uint64_t x158 = UINT64_MAX;
	volatile int32_t x159 = 658;
	uint64_t t37 = 720440846205431LLU;

    t37 = (((x157&x158)==x159)/x160);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = 383;
	static int64_t x163 = INT64_MIN;
	static volatile uint32_t x164 = UINT32_MAX;

    t38 = (((x161&x162)==x163)/x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x165 = INT16_MAX;
	volatile int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MIN;
	static int32_t t39 = -1349;

    t39 = (((x165&x166)==x167)/x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 31228893U;
	int32_t x170 = -7819;
	int8_t x171 = 0;

    t40 = (((x169&x170)==x171)/x172);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x174 = INT8_MIN;
	uint8_t x175 = 10U;
	volatile int32_t t41 = 100308;

    t41 = (((x173&x174)==x175)/x176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x178 = INT64_MAX;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t42 = -1;

    t42 = (((x177&x178)==x179)/x180);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x181 = -12;
	volatile int32_t x182 = INT32_MAX;
	static int64_t x183 = INT64_MAX;
	static int64_t x184 = 4855028433571LL;
	int64_t t43 = 1255LL;

    t43 = (((x181&x182)==x183)/x184);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MAX;
	static volatile int64_t x186 = INT64_MAX;
	volatile uint64_t x188 = 47577150280LLU;
	volatile uint64_t t44 = 64732299784LLU;

    t44 = (((x185&x186)==x187)/x188);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = INT32_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	static volatile int32_t t45 = -222;

    t45 = (((x189&x190)==x191)/x192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x193 = UINT16_MAX;
	static volatile int8_t x194 = INT8_MAX;
	int8_t x196 = -5;
	int32_t t46 = 0;

    t46 = (((x193&x194)==x195)/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	static int32_t t47 = 8201741;

    t47 = (((x197&x198)==x199)/x200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x201 = INT32_MIN;
	volatile int64_t x202 = -14612493321319LL;
	int8_t x203 = -1;
	volatile int32_t x204 = INT32_MAX;

    t48 = (((x201&x202)==x203)/x204);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MAX;
	uint8_t x206 = UINT8_MAX;
	int32_t x207 = -1;

    t49 = (((x205&x206)==x207)/x208);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = 29821U;
	volatile uint64_t x210 = 3661591665LLU;
	volatile uint64_t x211 = 39LLU;
	int16_t x212 = -1;
	volatile int32_t t50 = 10773009;

    t50 = (((x209&x210)==x211)/x212);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MIN;
	static int32_t t51 = -1;

    t51 = (((x213&x214)==x215)/x216);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = 7041034653289LL;
	int64_t x218 = INT64_MAX;
	volatile int32_t x219 = INT32_MAX;
	volatile int32_t t52 = -40;

    t52 = (((x217&x218)==x219)/x220);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x222 = 464427219631628118LL;
	int32_t t53 = -7;

    t53 = (((x221&x222)==x223)/x224);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	int8_t x226 = -1;
	static int16_t x227 = -1;
	int32_t t54 = -5;

    t54 = (((x225&x226)==x227)/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint16_t x229 = UINT16_MAX;
	static int8_t x230 = 1;
	uint16_t x231 = UINT16_MAX;
	static volatile uint32_t x232 = 889U;
	uint32_t t55 = 6358812U;

    t55 = (((x229&x230)==x231)/x232);

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -1;
	int8_t x234 = 11;
	int16_t x235 = INT16_MAX;
	volatile uint64_t t56 = 359LLU;

    t56 = (((x233&x234)==x235)/x236);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = 1U;
	int32_t x240 = -1;

    t57 = (((x237&x238)==x239)/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MAX;
	uint16_t x244 = 5215U;

    t58 = (((x241&x242)==x243)/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x245 = INT16_MIN;
	static int32_t x247 = -95603;
	uint16_t x248 = 17618U;
	volatile int32_t t59 = 1;

    t59 = (((x245&x246)==x247)/x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x251 = UINT32_MAX;
	int16_t x252 = INT16_MAX;
	int32_t t60 = 7;

    t60 = (((x249&x250)==x251)/x252);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x253 = 72;
	static int64_t x254 = INT64_MIN;
	static volatile int32_t t61 = 887864;

    t61 = (((x253&x254)==x255)/x256);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x259 = 386LL;
	uint64_t x260 = 148042099513730272LLU;
	uint64_t t62 = 1779893450837LLU;

    t62 = (((x257&x258)==x259)/x260);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x261 = 2U;
	static int32_t x262 = 139;
	int32_t x263 = INT32_MIN;
	volatile int32_t t63 = -32863157;

    t63 = (((x261&x262)==x263)/x264);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	static int64_t x268 = -1598085978LL;
	int64_t t64 = 35438372087LL;

    t64 = (((x265&x266)==x267)/x268);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x269 = INT32_MAX;
	static int16_t x270 = INT16_MAX;
	static uint16_t x271 = 0U;
	static volatile int64_t x272 = -793757583223357LL;

    t65 = (((x269&x270)==x271)/x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x276 = -1;
	int32_t t66 = -1340;

    t66 = (((x273&x274)==x275)/x276);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x277 = -1;
	uint32_t x278 = 99854U;
	volatile int32_t t67 = -499151708;

    t67 = (((x277&x278)==x279)/x280);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	static int16_t x284 = INT16_MIN;
	int32_t t68 = 2651258;

    t68 = (((x281&x282)==x283)/x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = 3522911509LL;
	int64_t x286 = INT64_MIN;
	int16_t x287 = INT16_MAX;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t69 = 101;

    t69 = (((x285&x286)==x287)/x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x289 = UINT16_MAX;
	int16_t x291 = INT16_MAX;
	volatile int8_t x292 = 42;
	static volatile int32_t t70 = 3;

    t70 = (((x289&x290)==x291)/x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = -24640;
	int8_t x294 = -1;
	static uint16_t x295 = 6U;
	uint8_t x296 = UINT8_MAX;

    t71 = (((x293&x294)==x295)/x296);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x301 = 3604U;
	int8_t x304 = INT8_MAX;

    t72 = (((x301&x302)==x303)/x304);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x305 = INT8_MIN;
	volatile uint8_t x306 = UINT8_MAX;
	uint32_t x308 = 432852204U;
	volatile uint32_t t73 = 21U;

    t73 = (((x305&x306)==x307)/x308);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x310 = INT16_MAX;
	uint64_t t74 = 5632587896428LLU;

    t74 = (((x309&x310)==x311)/x312);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x313 = 47U;
	uint32_t x314 = 442U;
	uint16_t x315 = 64U;
	uint32_t x316 = 1070839354U;
	volatile uint32_t t75 = 21581633U;

    t75 = (((x313&x314)==x315)/x316);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x318 = 0U;
	int64_t x320 = 55279146LL;
	volatile int64_t t76 = -1225622446LL;

    t76 = (((x317&x318)==x319)/x320);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x322 = -14867500;
	uint16_t x323 = 20U;
	volatile int64_t x324 = INT64_MAX;
	volatile int64_t t77 = -33023999543LL;

    t77 = (((x321&x322)==x323)/x324);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x325 = INT8_MIN;
	static volatile int64_t x326 = INT64_MAX;
	uint32_t x327 = 461941304U;
	int32_t x328 = INT32_MAX;

    t78 = (((x325&x326)==x327)/x328);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x329 = 1U;
	static int32_t x331 = INT32_MIN;
	volatile int64_t t79 = -29LL;

    t79 = (((x329&x330)==x331)/x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x334 = 48U;
	static int8_t x335 = INT8_MAX;
	int16_t x336 = 999;
	volatile int32_t t80 = -1541;

    t80 = (((x333&x334)==x335)/x336);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	volatile int16_t x338 = INT16_MAX;
	static int64_t x339 = 3649938697LL;
	int64_t x340 = INT64_MAX;
	volatile int64_t t81 = 1LL;

    t81 = (((x337&x338)==x339)/x340);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MAX;
	volatile int16_t x344 = 7;
	static volatile int32_t t82 = -313563;

    t82 = (((x341&x342)==x343)/x344);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MIN;
	uint64_t x346 = 7122650383113460LLU;
	uint8_t x348 = 92U;

    t83 = (((x345&x346)==x347)/x348);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = 30933374U;
	uint64_t x350 = 39810788369LLU;
	int8_t x351 = -26;
	int64_t t84 = 144LL;

    t84 = (((x349&x350)==x351)/x352);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 14U;
	int64_t x356 = INT64_MIN;
	static int64_t t85 = -536229635983418LL;

    t85 = (((x353&x354)==x355)/x356);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x357 = UINT16_MAX;
	int8_t x359 = INT8_MAX;
	int32_t t86 = -495;

    t86 = (((x357&x358)==x359)/x360);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x361 = -135513612824908072LL;
	int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	static uint16_t x364 = 2U;
	int32_t t87 = 368175;

    t87 = (((x361&x362)==x363)/x364);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = -1;
	uint32_t x367 = UINT32_MAX;
	int32_t t88 = -10;

    t88 = (((x365&x366)==x367)/x368);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -359098052575579317LL;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t89 = -50114;

    t89 = (((x369&x370)==x371)/x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x374 = INT64_MAX;

    t90 = (((x373&x374)==x375)/x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x377 = -2;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;
	static uint16_t x380 = UINT16_MAX;
	static int32_t t91 = -73151347;

    t91 = (((x377&x378)==x379)/x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x381 = INT64_MIN;
	volatile uint32_t x382 = 123798062U;
	int64_t x383 = INT64_MIN;
	int32_t x384 = 58228485;
	volatile int32_t t92 = -3794156;

    t92 = (((x381&x382)==x383)/x384);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x385 = 97672786983LL;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	uint8_t x388 = 9U;
	static int32_t t93 = 60785747;

    t93 = (((x385&x386)==x387)/x388);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = -1;
	int64_t x390 = -1LL;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = 1U;
	int32_t t94 = 3;

    t94 = (((x389&x390)==x391)/x392);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x393 = UINT16_MAX;
	uint64_t x394 = 12LLU;
	int16_t x395 = -150;
	int16_t x396 = INT16_MIN;

    t95 = (((x393&x394)==x395)/x396);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x398 = 7U;
	int32_t x399 = 46139;
	uint32_t x400 = UINT32_MAX;

    t96 = (((x397&x398)==x399)/x400);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x401 = 54223393U;
	int8_t x402 = -1;
	volatile uint8_t x403 = 114U;
	int64_t x404 = INT64_MAX;
	static int64_t t97 = 0LL;

    t97 = (((x401&x402)==x403)/x404);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MIN;
	static uint8_t x407 = 1U;

    t98 = (((x405&x406)==x407)/x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x417 = -1LL;
	int8_t x418 = -1;
	static int64_t x420 = -1LL;

    t99 = (((x417&x418)==x419)/x420);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x422 = INT32_MAX;
	static int32_t x423 = 23119554;
	uint64_t x424 = 600LLU;
	volatile uint64_t t100 = 806LLU;

    t100 = (((x421&x422)==x423)/x424);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = 172;
	int16_t x426 = INT16_MAX;
	uint32_t x427 = 610001164U;

    t101 = (((x425&x426)==x427)/x428);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x429 = 2U;
	int64_t x430 = -78192408996560306LL;
	int32_t x431 = -14;
	int32_t x432 = 11;
	volatile int32_t t102 = 22677;

    t102 = (((x429&x430)==x431)/x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x433 = -10078750278LL;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	volatile int32_t t103 = -49;

    t103 = (((x433&x434)==x435)/x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = INT8_MIN;
	volatile int16_t x438 = -1;
	volatile int16_t x439 = 2;
	int32_t x440 = INT32_MIN;

    t104 = (((x437&x438)==x439)/x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = -1;
	uint64_t x442 = 16067124686LLU;
	int8_t x443 = 0;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t105 = -4677393;

    t105 = (((x441&x442)==x443)/x444);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint64_t x445 = 4645LLU;
	int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MAX;

    t106 = (((x445&x446)==x447)/x448);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x449 = 60600081LLU;
	uint8_t x450 = UINT8_MAX;
	volatile int64_t x451 = -10371801202560525LL;
	int16_t x452 = 97;

    t107 = (((x449&x450)==x451)/x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x453 = 3479891U;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = INT64_MIN;
	uint8_t x456 = UINT8_MAX;
	int32_t t108 = -18;

    t108 = (((x453&x454)==x455)/x456);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x458 = 217818339;
	uint64_t x459 = 41218261077909LLU;
	int64_t x460 = 126862715458006252LL;
	int64_t t109 = -3669822786354036LL;

    t109 = (((x457&x458)==x459)/x460);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 7298U;
	static int16_t x464 = INT16_MIN;
	volatile int32_t t110 = 1431307;

    t110 = (((x461&x462)==x463)/x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x465 = -848;
	uint16_t x466 = UINT16_MAX;
	int32_t t111 = 632704;

    t111 = (((x465&x466)==x467)/x468);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x470 = 1;
	int8_t x471 = -1;
	static int32_t x472 = 27;

    t112 = (((x469&x470)==x471)/x472);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x473 = INT64_MIN;
	volatile int32_t x474 = -1;
	int8_t x475 = INT8_MIN;
	int8_t x476 = 37;
	static int32_t t113 = 62;

    t113 = (((x473&x474)==x475)/x476);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = -1;
	int32_t x479 = -8;
	int32_t x480 = INT32_MAX;
	static volatile int32_t t114 = 12793054;

    t114 = (((x477&x478)==x479)/x480);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = -1LL;
	volatile int32_t x482 = 233;
	int32_t x483 = INT32_MIN;
	uint8_t x484 = 51U;

    t115 = (((x481&x482)==x483)/x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x486 = 34419700004474472LLU;
	int64_t x487 = -1LL;
	int8_t x488 = -1;

    t116 = (((x485&x486)==x487)/x488);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = -1;
	int16_t x490 = INT16_MAX;
	int32_t x492 = INT32_MIN;

    t117 = (((x489&x490)==x491)/x492);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x493 = -1LL;
	int8_t x494 = -13;
	volatile int32_t t118 = 102927;

    t118 = (((x493&x494)==x495)/x496);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x498 = 530U;
	static int64_t x499 = INT64_MIN;
	uint16_t x500 = 78U;

    t119 = (((x497&x498)==x499)/x500);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x501 = INT64_MAX;
	uint16_t x502 = UINT16_MAX;
	volatile uint64_t x503 = UINT64_MAX;
	int32_t x504 = -1;
	volatile int32_t t120 = -3130;

    t120 = (((x501&x502)==x503)/x504);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x505 = -187LL;
	int32_t x506 = -1;
	int64_t x507 = -1LL;
	int64_t x508 = -181264240LL;
	int64_t t121 = -61316LL;

    t121 = (((x505&x506)==x507)/x508);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x510 = -1;
	uint16_t x511 = 127U;
	volatile int32_t t122 = 7332;

    t122 = (((x509&x510)==x511)/x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x513 = 28U;
	uint64_t x514 = UINT64_MAX;
	static uint64_t x515 = 54874676243370613LLU;
	int8_t x516 = -1;

    t123 = (((x513&x514)==x515)/x516);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x517 = 23U;
	volatile uint64_t x518 = 101911701281467LLU;
	int16_t x519 = INT16_MAX;
	int32_t x520 = 16;

    t124 = (((x517&x518)==x519)/x520);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int64_t x522 = INT64_MIN;
	int16_t x523 = -6;
	volatile int8_t x524 = -1;
	volatile int32_t t125 = 66;

    t125 = (((x521&x522)==x523)/x524);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x525 = 295U;
	int32_t x527 = INT32_MIN;
	int64_t x528 = 209346225LL;

    t126 = (((x525&x526)==x527)/x528);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = 705U;
	uint8_t x530 = 48U;
	uint16_t x531 = 1U;
	uint32_t t127 = 4318419U;

    t127 = (((x529&x530)==x531)/x532);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x533 = UINT64_MAX;
	static int64_t x534 = -1LL;
	static int8_t x535 = INT8_MAX;
	uint64_t x536 = 3550376628LLU;

    t128 = (((x533&x534)==x535)/x536);

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x537 = UINT16_MAX;
	uint32_t x538 = 1U;
	int8_t x540 = -13;
	static volatile int32_t t129 = 30733715;

    t129 = (((x537&x538)==x539)/x540);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x541 = 1983080132U;
	volatile uint8_t x542 = UINT8_MAX;
	int8_t x543 = -1;
	int16_t x544 = INT16_MAX;
	volatile int32_t t130 = 0;

    t130 = (((x541&x542)==x543)/x544);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = -1;
	int16_t x546 = INT16_MIN;
	int16_t x547 = -1;
	uint32_t x548 = 185647U;

    t131 = (((x545&x546)==x547)/x548);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = 1U;
	volatile int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MIN;
	volatile int32_t t132 = 172631177;

    t132 = (((x549&x550)==x551)/x552);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = 28;
	uint8_t x555 = UINT8_MAX;
	static volatile uint64_t t133 = 13LLU;

    t133 = (((x553&x554)==x555)/x556);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = 9485;
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MAX;
	int64_t x560 = INT64_MIN;
	int64_t t134 = -965LL;

    t134 = (((x557&x558)==x559)/x560);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x561 = INT64_MAX;
	uint16_t x562 = 324U;
	static volatile int32_t x564 = INT32_MIN;

    t135 = (((x561&x562)==x563)/x564);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x565 = 2938U;
	int16_t x568 = 187;

    t136 = (((x565&x566)==x567)/x568);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = -5075198170680LL;
	int16_t x572 = -1;
	volatile int32_t t137 = -3973;

    t137 = (((x569&x570)==x571)/x572);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x573 = UINT64_MAX;
	int64_t x574 = -190901626105513550LL;
	volatile int64_t x575 = 462066704165858117LL;
	uint16_t x576 = UINT16_MAX;
	int32_t t138 = -7697;

    t138 = (((x573&x574)==x575)/x576);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint16_t x577 = 444U;
	static volatile int8_t x578 = INT8_MAX;
	int64_t x579 = INT64_MIN;
	static volatile int8_t x580 = INT8_MAX;
	volatile int32_t t139 = 40238625;

    t139 = (((x577&x578)==x579)/x580);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = 0;
	uint8_t x582 = 6U;
	int8_t x583 = 13;
	int8_t x584 = INT8_MAX;

    t140 = (((x581&x582)==x583)/x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = INT32_MAX;
	int64_t x586 = -1LL;
	uint32_t x587 = UINT32_MAX;
	int64_t t141 = -1010295141829648689LL;

    t141 = (((x585&x586)==x587)/x588);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x589 = -2LL;
	int8_t x590 = -1;
	volatile uint16_t x591 = UINT16_MAX;
	uint8_t x592 = 58U;
	volatile int32_t t142 = 660380308;

    t142 = (((x589&x590)==x591)/x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x593 = UINT8_MAX;
	volatile int32_t x594 = -1483;
	volatile uint16_t x595 = 107U;
	int8_t x596 = 63;
	int32_t t143 = 297398374;

    t143 = (((x593&x594)==x595)/x596);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = -2;
	int64_t x598 = INT64_MIN;
	static int64_t x600 = INT64_MIN;

    t144 = (((x597&x598)==x599)/x600);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x605 = UINT8_MAX;
	int8_t x606 = INT8_MAX;
	int8_t x608 = 12;
	int32_t t145 = 145;

    t145 = (((x605&x606)==x607)/x608);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x610 = UINT8_MAX;
	int16_t x612 = INT16_MIN;
	volatile int32_t t146 = 32082658;

    t146 = (((x609&x610)==x611)/x612);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x614 = 126U;
	volatile int16_t x615 = -1;
	int64_t x616 = INT64_MIN;
	int64_t t147 = -2161018758563207590LL;

    t147 = (((x613&x614)==x615)/x616);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x617 = 4U;
	static int16_t x619 = -1;
	static volatile int32_t t148 = 0;

    t148 = (((x617&x618)==x619)/x620);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x621 = 14U;
	int64_t x622 = -1LL;
	int64_t x624 = 1868LL;
	volatile int64_t t149 = -1LL;

    t149 = (((x621&x622)==x623)/x624);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x625 = -3025343098325020LL;
	volatile uint64_t x626 = 786918404LLU;
	int32_t t150 = 0;

    t150 = (((x625&x626)==x627)/x628);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x629 = INT32_MIN;
	int64_t x630 = -1LL;
	volatile int64_t x631 = INT64_MAX;
	int16_t x632 = 1;
	volatile int32_t t151 = 10266;

    t151 = (((x629&x630)==x631)/x632);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = INT32_MAX;
	int16_t x634 = INT16_MIN;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;

    t152 = (((x633&x634)==x635)/x636);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x637 = 836U;
	volatile uint64_t x638 = 0LLU;
	int16_t x639 = 55;
	int64_t x640 = -1LL;
	int64_t t153 = -454961371609848013LL;

    t153 = (((x637&x638)==x639)/x640);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x643 = INT8_MAX;
	int32_t t154 = -1935325;

    t154 = (((x641&x642)==x643)/x644);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x645 = UINT32_MAX;
	int16_t x646 = INT16_MIN;
	int32_t x647 = -1;
	uint32_t x648 = 88340871U;
	uint32_t t155 = 29942U;

    t155 = (((x645&x646)==x647)/x648);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x650 = UINT64_MAX;
	uint16_t x651 = 17575U;
	int32_t x652 = INT32_MAX;
	int32_t t156 = -18;

    t156 = (((x649&x650)==x651)/x652);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x653 = 5960LLU;
	static int16_t x654 = 12;
	int32_t x655 = INT32_MIN;
	static int64_t x656 = INT64_MIN;
	volatile int64_t t157 = -5429195607260885LL;

    t157 = (((x653&x654)==x655)/x656);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x657 = UINT8_MAX;
	static volatile int64_t x658 = INT64_MIN;
	int64_t x659 = INT64_MAX;
	uint64_t t158 = 1LLU;

    t158 = (((x657&x658)==x659)/x660);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x661 = 525LLU;
	int64_t x664 = -1LL;
	int64_t t159 = 4945064087155LL;

    t159 = (((x661&x662)==x663)/x664);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x667 = 3U;
	uint16_t x668 = 4339U;
	int32_t t160 = -905657897;

    t160 = (((x665&x666)==x667)/x668);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x671 = INT64_MAX;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t161 = 4749LLU;

    t161 = (((x669&x670)==x671)/x672);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x673 = -1350;
	int64_t x674 = 7197004152601263LL;
	static uint16_t x675 = 10U;
	static int64_t x676 = 3156762857664529LL;
	volatile int64_t t162 = -265760140513215LL;

    t162 = (((x673&x674)==x675)/x676);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x677 = INT32_MIN;
	int16_t x678 = INT16_MIN;
	int8_t x680 = INT8_MAX;
	int32_t t163 = -114473442;

    t163 = (((x677&x678)==x679)/x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x681 = INT64_MIN;
	int8_t x682 = 8;
	static int64_t x684 = -139832949091435LL;
	volatile int64_t t164 = -289775694418LL;

    t164 = (((x681&x682)==x683)/x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x687 = -2;
	uint8_t x688 = 110U;
	int32_t t165 = 1;

    t165 = (((x685&x686)==x687)/x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x690 = 4U;
	static int8_t x691 = INT8_MIN;
	uint16_t x692 = 34U;
	volatile int32_t t166 = 300614;

    t166 = (((x689&x690)==x691)/x692);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x694 = INT32_MIN;
	static volatile int16_t x695 = 15913;

    t167 = (((x693&x694)==x695)/x696);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = 987;
	static uint32_t x698 = UINT32_MAX;
	int64_t x699 = INT64_MIN;
	uint64_t x700 = 190388117270LLU;
	static uint64_t t168 = 20LLU;

    t168 = (((x697&x698)==x699)/x700);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x702 = INT64_MIN;
	volatile int16_t x703 = INT16_MAX;
	int32_t x704 = -87;
	static int32_t t169 = -3262237;

    t169 = (((x701&x702)==x703)/x704);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x706 = 10;
	static int16_t x708 = INT16_MIN;
	volatile int32_t t170 = -54946277;

    t170 = (((x705&x706)==x707)/x708);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x710 = -1009281557963LL;
	int8_t x711 = 17;
	int32_t t171 = -279236259;

    t171 = (((x709&x710)==x711)/x712);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x713 = 1U;
	int8_t x714 = INT8_MAX;
	int32_t x715 = -7368;
	int32_t t172 = 46578;

    t172 = (((x713&x714)==x715)/x716);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint64_t x719 = UINT64_MAX;
	static uint8_t x720 = 1U;
	int32_t t173 = 336302460;

    t173 = (((x717&x718)==x719)/x720);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = 21261U;
	int8_t x722 = -1;
	int16_t x723 = 208;
	int64_t t174 = 11637199LL;

    t174 = (((x721&x722)==x723)/x724);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x725 = 3570;
	static uint8_t x726 = 115U;
	static uint8_t x727 = UINT8_MAX;
	volatile int32_t t175 = -323421;

    t175 = (((x725&x726)==x727)/x728);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x729 = -1633LL;
	static int8_t x731 = -4;
	int32_t t176 = 4616;

    t176 = (((x729&x730)==x731)/x732);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x733 = INT16_MAX;
	volatile uint8_t x734 = 0U;
	int32_t x735 = INT32_MAX;
	static uint32_t x736 = 140734450U;

    t177 = (((x733&x734)==x735)/x736);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x740 = 93570343U;
	volatile uint32_t t178 = 26474554U;

    t178 = (((x737&x738)==x739)/x740);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = INT64_MIN;
	uint64_t x742 = 19979336215757LLU;
	volatile int16_t x743 = INT16_MIN;
	int8_t x744 = -1;
	int32_t t179 = 15;

    t179 = (((x741&x742)==x743)/x744);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x745 = INT8_MAX;
	uint64_t x746 = 5LLU;
	int8_t x747 = INT8_MIN;
	volatile int32_t t180 = -1;

    t180 = (((x745&x746)==x747)/x748);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x753 = INT8_MIN;
	static int64_t x754 = -1LL;
	static volatile int32_t x755 = -433;
	volatile int32_t t181 = -88197;

    t181 = (((x753&x754)==x755)/x756);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x757 = 31209U;
	volatile int16_t x758 = -106;
	int8_t x759 = INT8_MAX;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t182 = 3102;

    t182 = (((x757&x758)==x759)/x760);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x762 = UINT64_MAX;
	static uint32_t x764 = 13U;
	volatile uint32_t t183 = 980281U;

    t183 = (((x761&x762)==x763)/x764);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x766 = -47294LL;
	uint8_t x768 = 3U;
	volatile int32_t t184 = -33704;

    t184 = (((x765&x766)==x767)/x768);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x771 = -59;
	uint32_t x772 = 101U;
	uint32_t t185 = 1U;

    t185 = (((x769&x770)==x771)/x772);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x774 = 64433831U;
	static volatile int8_t x775 = -1;
	int32_t x776 = INT32_MIN;
	static volatile int32_t t186 = -1;

    t186 = (((x773&x774)==x775)/x776);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x778 = 275U;
	uint16_t x779 = UINT16_MAX;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t187 = -1;

    t187 = (((x777&x778)==x779)/x780);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x781 = INT16_MIN;
	volatile int64_t x782 = INT64_MIN;
	int32_t t188 = 1;

    t188 = (((x781&x782)==x783)/x784);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	uint8_t x787 = UINT8_MAX;
	static int16_t x788 = INT16_MIN;
	int32_t t189 = -1;

    t189 = (((x785&x786)==x787)/x788);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x789 = UINT16_MAX;
	uint16_t x790 = 1U;
	static int32_t x791 = 30;
	int32_t t190 = -325344131;

    t190 = (((x789&x790)==x791)/x792);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x793 = -1;
	int64_t x794 = 2785448220933LL;
	int8_t x796 = INT8_MIN;
	int32_t t191 = 229835344;

    t191 = (((x793&x794)==x795)/x796);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = -1;
	static int64_t x800 = -1LL;
	volatile int64_t t192 = 283914971794913003LL;

    t192 = (((x797&x798)==x799)/x800);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x801 = 652556652U;
	static uint64_t x802 = 290840525329707LLU;
	uint32_t x803 = 124492242U;
	static int32_t x804 = -4;

    t193 = (((x801&x802)==x803)/x804);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x805 = 43809U;
	static uint32_t x807 = UINT32_MAX;
	int64_t x808 = INT64_MAX;

    t194 = (((x805&x806)==x807)/x808);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x809 = -866;
	volatile int16_t x811 = INT16_MAX;
	volatile uint32_t t195 = 17397885U;

    t195 = (((x809&x810)==x811)/x812);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x813 = INT64_MIN;
	uint64_t x814 = 5870289098189660LLU;
	static int64_t x815 = -8567LL;
	int8_t x816 = INT8_MAX;
	int32_t t196 = 0;

    t196 = (((x813&x814)==x815)/x816);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x817 = INT16_MAX;
	int16_t x819 = -1;
	int16_t x820 = 551;
	int32_t t197 = -518252643;

    t197 = (((x817&x818)==x819)/x820);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x821 = UINT32_MAX;
	int16_t x822 = INT16_MAX;
	int32_t x823 = INT32_MAX;
	static int16_t x824 = INT16_MAX;
	int32_t t198 = 184948;

    t198 = (((x821&x822)==x823)/x824);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x827 = 6657U;
	int16_t x828 = -1;
	int32_t t199 = -8;

    t199 = (((x825&x826)==x827)/x828);

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

