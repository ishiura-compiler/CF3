
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

static int32_t t1 = 7;
int32_t x10 = -1;
static uint64_t x11 = 93136443545384LLU;
static volatile int16_t x13 = INT16_MIN;
uint8_t x33 = UINT8_MAX;
static volatile int32_t t8 = 874463983;
static uint16_t x40 = 19U;
uint16_t x43 = 421U;
int32_t x51 = INT32_MIN;
volatile int32_t t14 = -2;
volatile int32_t t15 = 3511613;
volatile uint8_t x69 = 4U;
int32_t x71 = INT32_MIN;
int32_t x72 = -1023526796;
volatile uint8_t x74 = 13U;
uint16_t x77 = 13649U;
volatile uint8_t x81 = UINT8_MAX;
int32_t t19 = 240492;
int16_t x88 = 1142;
static volatile int64_t x92 = 1463LL;
uint8_t x95 = 2U;
uint32_t x97 = 91U;
static int32_t t23 = -36959;
uint16_t x102 = UINT16_MAX;
uint8_t x106 = 14U;
volatile int64_t x110 = INT64_MIN;
volatile int32_t t26 = -740188113;
int16_t x114 = INT16_MIN;
static int8_t x119 = -1;
static volatile int32_t t29 = 3145;
int8_t x130 = 20;
int32_t x132 = 109126108;
int64_t x137 = -1LL;
volatile int32_t t35 = 28484131;
int8_t x155 = 0;
int32_t x159 = INT32_MIN;
int32_t t39 = -276;
static int8_t x168 = -41;
uint64_t x169 = 41976251LLU;
volatile int8_t x171 = -1;
int32_t t43 = -1;
int32_t t45 = 910467807;
static int16_t x189 = 33;
uint32_t x190 = UINT32_MAX;
static uint8_t x193 = 1U;
int32_t x196 = -1;
volatile int32_t t47 = -1438963;
int64_t x204 = 0LL;
int32_t t50 = 125051;
uint16_t x209 = 2001U;
int16_t x210 = INT16_MAX;
int8_t x211 = INT8_MAX;
int32_t t52 = 269458;
uint32_t x226 = UINT32_MAX;
int8_t x228 = 1;
int8_t x230 = INT8_MIN;
int64_t x231 = -1LL;
int32_t t59 = 2;
int32_t t61 = 4;
int32_t x265 = INT32_MAX;
uint16_t x266 = UINT16_MAX;
int16_t x274 = INT16_MIN;
int32_t x277 = -1;
static uint8_t x280 = 52U;
int64_t x283 = INT64_MIN;
uint8_t x284 = UINT8_MAX;
uint64_t x287 = 56LLU;
volatile int32_t t70 = 707712;
int16_t x289 = INT16_MIN;
int8_t x290 = -14;
int16_t x291 = -1;
volatile int32_t t73 = 426173;
static volatile int8_t x303 = INT8_MIN;
volatile int32_t x305 = INT32_MAX;
int32_t t76 = -4780;
uint32_t x313 = 0U;
volatile uint32_t x319 = 417622U;
int8_t x321 = INT8_MIN;
volatile int16_t x322 = -24;
int64_t x333 = 59309190LL;
int16_t x336 = -23;
int32_t t81 = 260;
volatile int64_t x338 = 1975594644LL;
uint64_t x350 = 8218472784LLU;
volatile int16_t x365 = -5;
int8_t x381 = 1;
int16_t x399 = 940;
volatile int32_t x402 = -30899327;
int16_t x408 = -2;
static int16_t x410 = INT16_MAX;
int16_t x414 = INT16_MIN;
static int32_t x437 = INT32_MIN;
int32_t x439 = INT32_MIN;
int32_t x450 = 4343;
volatile int32_t t105 = -253749;
static uint16_t x465 = 439U;
int32_t t107 = -2764368;
int64_t x474 = -655051LL;
int8_t x475 = INT8_MIN;
uint16_t x479 = UINT16_MAX;
int64_t x484 = INT64_MIN;
volatile int32_t t111 = -8;
volatile int32_t x489 = -1;
int8_t x491 = INT8_MAX;
volatile int8_t x494 = INT8_MAX;
volatile int16_t x504 = -3315;
volatile uint8_t x508 = 42U;
int64_t x515 = INT64_MAX;
volatile uint8_t x516 = 15U;
int32_t t117 = 255;
int16_t x520 = INT16_MAX;
uint16_t x521 = 1U;
int64_t x531 = -2LL;
uint8_t x533 = 68U;
static int64_t x538 = INT64_MIN;
uint32_t x540 = 940U;
int32_t x542 = -4;
uint16_t x546 = UINT16_MAX;
int32_t x553 = 149260167;
static uint16_t x555 = 2U;
int32_t t128 = -28923842;
int8_t x566 = -4;
int32_t x569 = INT32_MIN;
int8_t x572 = INT8_MIN;
volatile int32_t x575 = INT32_MIN;
int8_t x577 = INT8_MIN;
volatile int32_t t134 = -142779736;
static uint8_t x585 = UINT8_MAX;
static uint8_t x588 = 49U;
int32_t t135 = -17600;
uint64_t x590 = 6388489003LLU;
uint8_t x599 = 1U;
uint16_t x601 = UINT16_MAX;
int64_t x603 = -3116522460407135106LL;
int16_t x605 = 0;
static int64_t x607 = -1LL;
static int8_t x614 = -1;
static int8_t x618 = INT8_MIN;
static int64_t x625 = INT64_MIN;
volatile int32_t t145 = 1;
volatile int16_t x646 = INT16_MAX;
volatile uint8_t x650 = UINT8_MAX;
int32_t x659 = -5266296;
static volatile int32_t t153 = 665;
int8_t x665 = -1;
int16_t x671 = INT16_MAX;
int16_t x682 = -2526;
int64_t x688 = INT64_MAX;
int8_t x701 = INT8_MIN;
static volatile int64_t x702 = -1LL;
int64_t x706 = INT64_MAX;
static int32_t x715 = -2345;
int8_t x718 = INT8_MIN;
volatile int8_t x721 = INT8_MIN;
int32_t t167 = 13152455;
int32_t x727 = INT32_MIN;
static volatile uint8_t x728 = 107U;
static int32_t x732 = INT32_MIN;
volatile int16_t x735 = -1;
static uint64_t x736 = UINT64_MAX;
volatile int8_t x754 = INT8_MIN;
int32_t x759 = -1;
int16_t x761 = 454;
volatile int32_t t176 = 468839;
uint32_t x767 = 1002U;
int16_t x774 = -1;
volatile int32_t t179 = -11;
int32_t t180 = -85;
int64_t x782 = -962644364567309LL;
int16_t x783 = INT16_MIN;
uint64_t x786 = 15220235582LLU;
int16_t x789 = INT16_MAX;
int64_t x790 = INT64_MIN;
uint32_t x791 = 799355U;
int32_t x792 = 1731463;
int8_t x797 = -7;
volatile int16_t x798 = INT16_MIN;
int64_t x800 = -117764170243LL;
int8_t x802 = 1;
int16_t x803 = -1;
static uint8_t x809 = 12U;
uint16_t x812 = UINT16_MAX;
int16_t x840 = 6;
int8_t x844 = INT8_MIN;
uint32_t x846 = 2721193U;
int64_t x849 = INT64_MIN;
int32_t t199 = -2059;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	static int64_t x2 = -1LL;
	static int16_t x3 = 4;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 56670;

    t0 = (((x1%x2)+x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -1;
	static volatile uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 4U;
	int64_t x8 = INT64_MIN;

    t1 = (((x5%x6)+x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 83;
	int32_t x12 = -1;
	volatile int32_t t2 = 94483;

    t2 = (((x9%x10)+x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = UINT8_MAX;
	static int64_t x15 = -1LL;
	static volatile int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -32;

    t3 = (((x13%x14)+x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -22;
	static int32_t x18 = 2583685;
	static int8_t x19 = -8;
	int32_t x20 = -1;
	int32_t t4 = -54371561;

    t4 = (((x17%x18)+x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MAX;
	static volatile int8_t x23 = 1;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -469568;

    t5 = (((x21%x22)+x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 35U;
	int16_t x26 = INT16_MIN;
	int16_t x27 = -1;
	int64_t x28 = INT64_MIN;
	int32_t t6 = 29022;

    t6 = (((x25%x26)+x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 37869LLU;
	uint8_t x30 = 61U;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 9U;
	volatile int32_t t7 = -3;

    t7 = (((x29%x30)+x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = INT8_MIN;
	static uint32_t x35 = 643088103U;
	int64_t x36 = INT64_MIN;

    t8 = (((x33%x34)+x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 188752U;
	int16_t x38 = INT16_MIN;
	volatile int64_t x39 = 3171LL;
	int32_t t9 = 0;

    t9 = (((x37%x38)+x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 1U;
	int32_t x42 = INT32_MIN;
	uint16_t x44 = 843U;
	int32_t t10 = 5798;

    t10 = (((x41%x42)+x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x49 = 0U;
	uint32_t x50 = 1259971197U;
	uint64_t x52 = UINT64_MAX;
	int32_t t11 = 1;

    t11 = (((x49%x50)+x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1;
	int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = -605208;

    t12 = (((x53%x54)+x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x57 = -17;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = -111209800;
	int32_t x60 = -54;
	int32_t t13 = 1;

    t13 = (((x57%x58)+x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = UINT8_MAX;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = -1;
	int64_t x64 = INT64_MIN;

    t14 = (((x61%x62)+x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	int32_t x66 = 42403;
	int16_t x67 = -1;
	int16_t x68 = -67;

    t15 = (((x65%x66)+x67)==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x70 = -125;
	static volatile int32_t t16 = -5998320;

    t16 = (((x69%x70)+x71)==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = UINT8_MAX;
	int8_t x75 = 0;
	int32_t x76 = INT32_MIN;
	int32_t t17 = 80792;

    t17 = (((x73%x74)+x75)==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x78 = UINT32_MAX;
	static volatile uint8_t x79 = UINT8_MAX;
	int16_t x80 = -282;
	int32_t t18 = -426444;

    t18 = (((x77%x78)+x79)==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x82 = -1;
	volatile int32_t x83 = -10643251;
	int64_t x84 = -352770392206227LL;

    t19 = (((x81%x82)+x83)==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 40;
	int8_t x86 = INT8_MIN;
	static int16_t x87 = -19;
	volatile int32_t t20 = -1689;

    t20 = (((x85%x86)+x87)==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 1;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t21 = 532;

    t21 = (((x89%x90)+x91)==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x93 = 142U;
	int64_t x94 = -1LL;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t22 = 1;

    t22 = (((x93%x94)+x95)==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x98 = 644U;
	int64_t x99 = 90639LL;
	int32_t x100 = INT32_MIN;

    t23 = (((x97%x98)+x99)==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 838584334376LLU;
	static int64_t x103 = INT64_MIN;
	uint64_t x104 = 7191008372127047LLU;
	int32_t t24 = -3;

    t24 = (((x101%x102)+x103)==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	uint64_t x107 = 1146913531582710919LLU;
	volatile uint16_t x108 = UINT16_MAX;
	static int32_t t25 = 20068;

    t25 = (((x105%x106)+x107)==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x109 = 8224U;
	uint16_t x111 = 2798U;
	volatile int8_t x112 = -2;

    t26 = (((x109%x110)+x111)==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x113 = -1;
	uint8_t x115 = 61U;
	uint8_t x116 = 5U;
	int32_t t27 = -8009;

    t27 = (((x113%x114)+x115)==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 4U;
	uint32_t x120 = UINT32_MAX;
	int32_t t28 = -1674;

    t28 = (((x117%x118)+x119)==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -10844;
	int16_t x122 = INT16_MIN;
	static volatile int64_t x123 = 387948824909800LL;
	static int32_t x124 = -125;

    t29 = (((x121%x122)+x123)==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = -2;
	uint32_t x126 = 92636U;
	int32_t x127 = INT32_MAX;
	static volatile int32_t x128 = INT32_MIN;
	volatile int32_t t30 = -5660569;

    t30 = (((x125%x126)+x127)==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	static int16_t x131 = INT16_MAX;
	static volatile int32_t t31 = 115225605;

    t31 = (((x129%x130)+x131)==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x133 = UINT64_MAX;
	volatile int64_t x134 = INT64_MAX;
	static int16_t x135 = -13;
	int32_t x136 = 2;
	int32_t t32 = -46123;

    t32 = (((x133%x134)+x135)==x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x138 = INT32_MAX;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = INT32_MIN;
	int32_t t33 = -1289;

    t33 = (((x137%x138)+x139)==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = -1;
	int8_t x142 = 6;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 3944818U;
	int32_t t34 = -316;

    t34 = (((x141%x142)+x143)==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x145 = 26;
	volatile int16_t x146 = INT16_MIN;
	static int16_t x147 = INT16_MIN;
	static uint64_t x148 = UINT64_MAX;

    t35 = (((x145%x146)+x147)==x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -1LL;
	volatile uint64_t x150 = 178201218659547LLU;
	int32_t x151 = -1;
	int16_t x152 = INT16_MAX;
	static volatile int32_t t36 = -62933928;

    t36 = (((x149%x150)+x151)==x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x153 = -1;
	int16_t x154 = -3;
	int8_t x156 = INT8_MAX;
	volatile int32_t t37 = -705;

    t37 = (((x153%x154)+x155)==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = -15;
	int8_t x158 = -1;
	static volatile int64_t x160 = -1LL;
	static volatile int32_t t38 = -86886;

    t38 = (((x157%x158)+x159)==x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = INT64_MAX;
	uint8_t x162 = 79U;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 697610U;

    t39 = (((x161%x162)+x163)==x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x165 = INT32_MIN;
	static int8_t x166 = -1;
	static volatile uint64_t x167 = 6999403LLU;
	volatile int32_t t40 = -13175922;

    t40 = (((x165%x166)+x167)==x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 2U;
	int64_t x172 = -123LL;
	int32_t t41 = 27;

    t41 = (((x169%x170)+x171)==x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = INT16_MIN;
	static int16_t x174 = 132;
	static int8_t x175 = 12;
	int64_t x176 = INT64_MIN;
	volatile int32_t t42 = 10863;

    t42 = (((x173%x174)+x175)==x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x177 = INT64_MIN;
	uint64_t x178 = 90399752LLU;
	int32_t x179 = INT32_MAX;
	int16_t x180 = 98;

    t43 = (((x177%x178)+x179)==x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -3;
	int32_t t44 = -25603;

    t44 = (((x181%x182)+x183)==x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MAX;
	static volatile int64_t x188 = 7406LL;

    t45 = (((x185%x186)+x187)==x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x191 = INT16_MIN;
	volatile uint16_t x192 = 5U;
	volatile int32_t t46 = 0;

    t46 = (((x189%x190)+x191)==x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x194 = -1LL;
	int32_t x195 = -3;

    t47 = (((x193%x194)+x195)==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 4;
	volatile int64_t x198 = -57216826659809036LL;
	static int16_t x199 = -1;
	static int32_t x200 = -1;
	volatile int32_t t48 = 0;

    t48 = (((x197%x198)+x199)==x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x201 = 35570471375337340LL;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	int32_t t49 = -396406723;

    t49 = (((x201%x202)+x203)==x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x205 = INT16_MIN;
	volatile uint8_t x206 = 13U;
	static volatile int16_t x207 = -1988;
	int8_t x208 = INT8_MIN;

    t50 = (((x205%x206)+x207)==x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x212 = -1;
	int32_t t51 = 0;

    t51 = (((x209%x210)+x211)==x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = INT8_MIN;
	uint64_t x214 = 4071685605619810644LLU;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;

    t52 = (((x213%x214)+x215)==x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = -1;
	static int32_t x218 = 145;
	static uint16_t x219 = 0U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t53 = -9059124;

    t53 = (((x217%x218)+x219)==x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x221 = 16495749196191LLU;
	volatile uint8_t x222 = 11U;
	uint8_t x223 = 2U;
	int16_t x224 = INT16_MAX;
	int32_t t54 = 2841514;

    t54 = (((x221%x222)+x223)==x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x227 = 4939;
	int32_t t55 = -14754787;

    t55 = (((x225%x226)+x227)==x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x229 = 1870948660083833LL;
	int32_t x232 = INT32_MAX;
	int32_t t56 = 466;

    t56 = (((x229%x230)+x231)==x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = -2;
	int32_t x234 = -1;
	static uint64_t x235 = 1604483198105LLU;
	int32_t x236 = INT32_MIN;
	volatile int32_t t57 = -2460494;

    t57 = (((x233%x234)+x235)==x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x237 = INT16_MAX;
	uint16_t x238 = 2U;
	static int8_t x239 = 0;
	uint64_t x240 = 2129009226LLU;
	static volatile int32_t t58 = -12;

    t58 = (((x237%x238)+x239)==x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x241 = INT8_MIN;
	int32_t x242 = -617;
	volatile int8_t x243 = INT8_MAX;
	uint32_t x244 = 97528776U;

    t59 = (((x241%x242)+x243)==x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x245 = 1;
	int32_t x246 = INT32_MAX;
	static int8_t x247 = INT8_MIN;
	int64_t x248 = -15671130LL;
	volatile int32_t t60 = -1285624;

    t60 = (((x245%x246)+x247)==x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	static uint8_t x251 = 2U;
	uint16_t x252 = 62U;

    t61 = (((x249%x250)+x251)==x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x253 = 502011529313LLU;
	int32_t x254 = 104;
	volatile int64_t x255 = INT64_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t62 = 2555129;

    t62 = (((x253%x254)+x255)==x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x257 = 0U;
	static uint32_t x258 = 1U;
	int32_t x259 = -1;
	uint16_t x260 = 1U;
	volatile int32_t t63 = -228;

    t63 = (((x257%x258)+x259)==x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x261 = -551787553;
	int64_t x262 = INT64_MAX;
	int32_t x263 = -93448350;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = 1038460;

    t64 = (((x261%x262)+x263)==x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x267 = 0U;
	int8_t x268 = INT8_MAX;
	volatile int32_t t65 = 2;

    t65 = (((x265%x266)+x267)==x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x269 = INT32_MIN;
	static int32_t x270 = 31585;
	static volatile int64_t x271 = -1LL;
	int64_t x272 = 1LL;
	int32_t t66 = -23;

    t66 = (((x269%x270)+x271)==x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = INT32_MIN;
	int64_t x275 = -1LL;
	static volatile uint8_t x276 = 6U;
	int32_t t67 = -23832040;

    t67 = (((x273%x274)+x275)==x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x278 = 30U;
	volatile uint32_t x279 = 19718288U;
	int32_t t68 = -2;

    t68 = (((x277%x278)+x279)==x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = 4;
	uint32_t x282 = 452020U;
	static volatile int32_t t69 = -5899434;

    t69 = (((x281%x282)+x283)==x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x285 = INT64_MAX;
	int64_t x286 = INT64_MIN;
	int32_t x288 = INT32_MIN;

    t70 = (((x285%x286)+x287)==x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x292 = 498;
	volatile int32_t t71 = -22;

    t71 = (((x289%x290)+x291)==x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x293 = 72U;
	volatile int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t72 = 3465908;

    t72 = (((x293%x294)+x295)==x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = 10;
	volatile int32_t x298 = INT32_MAX;
	uint16_t x299 = UINT16_MAX;
	uint16_t x300 = UINT16_MAX;

    t73 = (((x297%x298)+x299)==x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x301 = 202U;
	uint32_t x302 = 3U;
	uint32_t x304 = 148901413U;
	int32_t t74 = -386925;

    t74 = (((x301%x302)+x303)==x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	uint32_t x308 = 11569U;
	static volatile int32_t t75 = 0;

    t75 = (((x305%x306)+x307)==x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x309 = 1LLU;
	int16_t x310 = -1;
	int32_t x311 = 21665;
	int32_t x312 = INT32_MIN;

    t76 = (((x309%x310)+x311)==x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x314 = 692260U;
	int16_t x315 = 2;
	int64_t x316 = INT64_MIN;
	volatile int32_t t77 = -777043;

    t77 = (((x313%x314)+x315)==x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 32364418U;
	int16_t x318 = 1;
	int64_t x320 = -1LL;
	static int32_t t78 = -91389605;

    t78 = (((x317%x318)+x319)==x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x323 = -1;
	int8_t x324 = -30;
	int32_t t79 = -41;

    t79 = (((x321%x322)+x323)==x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x329 = 60;
	static int8_t x330 = 17;
	uint64_t x331 = UINT64_MAX;
	uint16_t x332 = 6384U;
	static int32_t t80 = 236886;

    t80 = (((x329%x330)+x331)==x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x334 = 14U;
	int8_t x335 = 0;

    t81 = (((x333%x334)+x335)==x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x337 = INT64_MIN;
	static uint16_t x339 = 4597U;
	int64_t x340 = -1389LL;
	int32_t t82 = 2;

    t82 = (((x337%x338)+x339)==x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x349 = 11268U;
	volatile int64_t x351 = -1LL;
	int16_t x352 = -1;
	volatile int32_t t83 = 2321799;

    t83 = (((x349%x350)+x351)==x352);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x353 = 7338U;
	static int32_t x354 = INT32_MIN;
	volatile int8_t x355 = -2;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t84 = -410435715;

    t84 = (((x353%x354)+x355)==x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x357 = 9636157U;
	int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = -1;
	static volatile int32_t t85 = 15805556;

    t85 = (((x357%x358)+x359)==x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x361 = INT16_MAX;
	volatile uint32_t x362 = 2089137U;
	uint16_t x363 = 28347U;
	static int32_t x364 = INT32_MIN;
	volatile int32_t t86 = 42977;

    t86 = (((x361%x362)+x363)==x364);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x366 = 303827;
	int8_t x367 = -3;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = 35386;

    t87 = (((x365%x366)+x367)==x368);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x369 = 13U;
	int8_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	static int32_t t88 = -1;

    t88 = (((x369%x370)+x371)==x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = 5027135926361835LLU;
	int16_t x374 = -1;
	static int8_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	int32_t t89 = -1;

    t89 = (((x373%x374)+x375)==x376);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x377 = 547230395703258LLU;
	uint8_t x378 = 8U;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t90 = 26;

    t90 = (((x377%x378)+x379)==x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 102U;
	int32_t t91 = -10019123;

    t91 = (((x381%x382)+x383)==x384);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x385 = INT64_MIN;
	uint16_t x386 = 3791U;
	static int16_t x387 = INT16_MIN;
	volatile int16_t x388 = 40;
	volatile int32_t t92 = -40163;

    t92 = (((x385%x386)+x387)==x388);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x397 = -28503359122967LL;
	int32_t x398 = INT32_MIN;
	static int64_t x400 = -1LL;
	int32_t t93 = -3108452;

    t93 = (((x397%x398)+x399)==x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x401 = INT64_MAX;
	static int8_t x403 = INT8_MAX;
	volatile uint32_t x404 = 8244105U;
	static int32_t t94 = -58;

    t94 = (((x401%x402)+x403)==x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x405 = 0;
	uint64_t x406 = 118LLU;
	int16_t x407 = INT16_MAX;
	volatile int32_t t95 = -240474;

    t95 = (((x405%x406)+x407)==x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x409 = UINT8_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = -1;
	int32_t t96 = 1;

    t96 = (((x409%x410)+x411)==x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x413 = -96;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = INT32_MIN;
	int32_t t97 = -2719;

    t97 = (((x413%x414)+x415)==x416);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x417 = 2161964124594395LLU;
	static int64_t x418 = -1LL;
	uint16_t x419 = 27079U;
	int32_t x420 = -1;
	int32_t t98 = -9220;

    t98 = (((x417%x418)+x419)==x420);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x421 = INT8_MIN;
	volatile uint64_t x422 = 3348246127412882LLU;
	uint8_t x423 = 24U;
	int8_t x424 = INT8_MAX;
	int32_t t99 = 20;

    t99 = (((x421%x422)+x423)==x424);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = -1;
	int32_t x430 = 985376;
	static uint64_t x431 = 490778738031LLU;
	static uint64_t x432 = 0LLU;
	volatile int32_t t100 = -13079684;

    t100 = (((x429%x430)+x431)==x432);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x438 = 8U;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t101 = 118988;

    t101 = (((x437%x438)+x439)==x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x441 = 12259U;
	volatile int32_t x442 = INT32_MIN;
	static int8_t x443 = INT8_MIN;
	volatile int8_t x444 = -1;
	static volatile int32_t t102 = 13324;

    t102 = (((x441%x442)+x443)==x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x445 = INT32_MAX;
	uint8_t x446 = UINT8_MAX;
	int64_t x447 = INT64_MIN;
	static volatile uint64_t x448 = UINT64_MAX;
	static int32_t t103 = 818149492;

    t103 = (((x445%x446)+x447)==x448);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x449 = INT8_MIN;
	int8_t x451 = 2;
	uint64_t x452 = 307847154216858830LLU;
	int32_t t104 = 30223045;

    t104 = (((x449%x450)+x451)==x452);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x453 = 500LLU;
	int32_t x454 = -1032796;
	int16_t x455 = -1;
	volatile uint64_t x456 = 256539284LLU;

    t105 = (((x453%x454)+x455)==x456);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MIN;
	int32_t x459 = INT32_MAX;
	uint8_t x460 = 3U;
	int32_t t106 = 30235245;

    t106 = (((x457%x458)+x459)==x460);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x466 = 4088345249041294LLU;
	volatile uint32_t x467 = UINT32_MAX;
	static uint64_t x468 = 7179319LLU;

    t107 = (((x465%x466)+x467)==x468);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x469 = 13976731224LLU;
	static uint8_t x470 = 1U;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = UINT16_MAX;
	int32_t t108 = -221966;

    t108 = (((x469%x470)+x471)==x472);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x473 = 18;
	int8_t x476 = INT8_MIN;
	volatile int32_t t109 = 14158;

    t109 = (((x473%x474)+x475)==x476);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x477 = INT16_MAX;
	static int16_t x478 = -1;
	static volatile uint16_t x480 = 201U;
	static volatile int32_t t110 = 1;

    t110 = (((x477%x478)+x479)==x480);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x481 = -1;
	static int64_t x482 = INT64_MAX;
	volatile int64_t x483 = 0LL;

    t111 = (((x481%x482)+x483)==x484);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x490 = -1LL;
	uint32_t x492 = 3U;
	int32_t t112 = -852196540;

    t112 = (((x489%x490)+x491)==x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x493 = 77876266;
	int64_t x495 = -1LL;
	static int16_t x496 = -1;
	int32_t t113 = 13599;

    t113 = (((x493%x494)+x495)==x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x497 = -1LL;
	volatile int32_t x498 = -230605;
	volatile int8_t x499 = INT8_MAX;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t114 = -1108;

    t114 = (((x497%x498)+x499)==x500);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x502 = -11;
	static int16_t x503 = INT16_MIN;
	static volatile int32_t t115 = 571430;

    t115 = (((x501%x502)+x503)==x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = INT64_MIN;
	volatile int8_t x506 = INT8_MIN;
	int64_t x507 = -1LL;
	int32_t t116 = 332503;

    t116 = (((x505%x506)+x507)==x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x513 = INT16_MAX;
	uint64_t x514 = 155875693026610307LLU;

    t117 = (((x513%x514)+x515)==x516);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = -1;
	volatile int16_t x518 = 16272;
	uint32_t x519 = 3282U;
	int32_t t118 = -34592514;

    t118 = (((x517%x518)+x519)==x520);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x522 = 58U;
	static int64_t x523 = -1LL;
	volatile int32_t x524 = -1;
	volatile int32_t t119 = 0;

    t119 = (((x521%x522)+x523)==x524);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = INT64_MIN;
	int32_t x527 = -44;
	int16_t x528 = INT16_MIN;
	volatile int32_t t120 = 22386017;

    t120 = (((x525%x526)+x527)==x528);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x529 = 3;
	static int16_t x530 = INT16_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t121 = 2262726;

    t121 = (((x529%x530)+x531)==x532);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x534 = -11;
	uint16_t x535 = 1U;
	volatile uint32_t x536 = 83031584U;
	volatile int32_t t122 = -3015;

    t122 = (((x533%x534)+x535)==x536);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x537 = INT8_MIN;
	volatile uint64_t x539 = UINT64_MAX;
	int32_t t123 = -808203;

    t123 = (((x537%x538)+x539)==x540);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x541 = INT64_MIN;
	uint16_t x543 = 299U;
	volatile int64_t x544 = 80814LL;
	volatile int32_t t124 = -1649;

    t124 = (((x541%x542)+x543)==x544);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x545 = INT8_MIN;
	int64_t x547 = -1LL;
	static uint64_t x548 = UINT64_MAX;
	volatile int32_t t125 = -43340364;

    t125 = (((x545%x546)+x547)==x548);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x549 = -1;
	uint32_t x550 = 70U;
	int32_t x551 = INT32_MIN;
	int32_t x552 = -39610;
	volatile int32_t t126 = -953014;

    t126 = (((x549%x550)+x551)==x552);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x554 = 1U;
	static int16_t x556 = 173;
	static int32_t t127 = -878214796;

    t127 = (((x553%x554)+x555)==x556);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x558 = -1;
	uint8_t x559 = UINT8_MAX;
	int32_t x560 = 1293977;

    t128 = (((x557%x558)+x559)==x560);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x561 = 1U;
	uint32_t x562 = UINT32_MAX;
	int16_t x563 = INT16_MIN;
	int32_t x564 = INT32_MIN;
	int32_t t129 = -102342;

    t129 = (((x561%x562)+x563)==x564);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x565 = 2123653007U;
	static uint64_t x567 = 9045152740191878997LLU;
	int8_t x568 = INT8_MIN;
	volatile int32_t t130 = 111515704;

    t130 = (((x565%x566)+x567)==x568);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x570 = -1;
	volatile int64_t x571 = INT64_MIN;
	static volatile int32_t t131 = -23156;

    t131 = (((x569%x570)+x571)==x572);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x573 = INT16_MAX;
	volatile uint64_t x574 = 1083690584609038LLU;
	uint8_t x576 = 90U;
	volatile int32_t t132 = -4;

    t132 = (((x573%x574)+x575)==x576);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x578 = 1U;
	int32_t x579 = -10914569;
	static int32_t x580 = INT32_MIN;
	volatile int32_t t133 = 140787782;

    t133 = (((x577%x578)+x579)==x580);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x581 = INT32_MIN;
	uint32_t x582 = 3401490U;
	int8_t x583 = INT8_MAX;
	uint16_t x584 = UINT16_MAX;

    t134 = (((x581%x582)+x583)==x584);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x586 = 974;
	uint32_t x587 = 10037U;

    t135 = (((x585%x586)+x587)==x588);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x589 = INT16_MIN;
	int64_t x591 = INT64_MAX;
	uint64_t x592 = 7LLU;
	volatile int32_t t136 = -1068540177;

    t136 = (((x589%x590)+x591)==x592);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x593 = INT16_MIN;
	int16_t x594 = 2133;
	int32_t x595 = -5189736;
	static int64_t x596 = -1LL;
	int32_t t137 = -304931;

    t137 = (((x593%x594)+x595)==x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x597 = 2010103;
	int8_t x598 = -1;
	uint8_t x600 = 1U;
	int32_t t138 = 2;

    t138 = (((x597%x598)+x599)==x600);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x602 = -1875485;
	uint64_t x604 = 6202442469684LLU;
	volatile int32_t t139 = -787;

    t139 = (((x601%x602)+x603)==x604);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x606 = 1U;
	int16_t x608 = -1;
	int32_t t140 = 1;

    t140 = (((x605%x606)+x607)==x608);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x610 = -1;
	static uint16_t x611 = 3781U;
	uint64_t x612 = 11983558976LLU;
	volatile int32_t t141 = 64479819;

    t141 = (((x609%x610)+x611)==x612);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x613 = INT64_MIN;
	volatile int64_t x615 = 1LL;
	static int64_t x616 = INT64_MAX;
	int32_t t142 = 1096;

    t142 = (((x613%x614)+x615)==x616);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x617 = 16446U;
	uint32_t x619 = 551906641U;
	int32_t x620 = -2368096;
	volatile int32_t t143 = -33024387;

    t143 = (((x617%x618)+x619)==x620);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	int32_t x622 = 4853;
	static uint8_t x623 = UINT8_MAX;
	int16_t x624 = 0;
	static volatile int32_t t144 = 12947;

    t144 = (((x621%x622)+x623)==x624);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x626 = -1;
	int16_t x627 = -215;
	static volatile uint8_t x628 = 1U;

    t145 = (((x625%x626)+x627)==x628);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x629 = INT8_MAX;
	int64_t x630 = -16249940LL;
	static uint64_t x631 = 24410025792295801LLU;
	int8_t x632 = INT8_MIN;
	volatile int32_t t146 = -62;

    t146 = (((x629%x630)+x631)==x632);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x633 = -1;
	static volatile int8_t x634 = INT8_MAX;
	uint16_t x635 = 16U;
	uint32_t x636 = 169516U;
	volatile int32_t t147 = -194735593;

    t147 = (((x633%x634)+x635)==x636);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x637 = -1;
	uint64_t x638 = 120647473736265LLU;
	int8_t x639 = INT8_MIN;
	int16_t x640 = INT16_MIN;
	int32_t t148 = -4;

    t148 = (((x637%x638)+x639)==x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = 1646;
	static int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MIN;
	static volatile int32_t x644 = INT32_MIN;
	int32_t t149 = 97135898;

    t149 = (((x641%x642)+x643)==x644);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x645 = INT64_MIN;
	volatile int32_t x647 = INT32_MIN;
	static int64_t x648 = -83118LL;
	int32_t t150 = -224000;

    t150 = (((x645%x646)+x647)==x648);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x651 = INT8_MAX;
	volatile uint16_t x652 = 49U;
	int32_t t151 = 284835687;

    t151 = (((x649%x650)+x651)==x652);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x657 = 278042443972286375LL;
	uint16_t x658 = UINT16_MAX;
	int8_t x660 = INT8_MAX;
	static int32_t t152 = -3643928;

    t152 = (((x657%x658)+x659)==x660);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x661 = 3;
	int32_t x662 = INT32_MIN;
	int8_t x663 = 1;
	int64_t x664 = -2612367921707482382LL;

    t153 = (((x661%x662)+x663)==x664);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x666 = 192856;
	volatile uint64_t x667 = UINT64_MAX;
	uint16_t x668 = UINT16_MAX;
	int32_t t154 = -48;

    t154 = (((x665%x666)+x667)==x668);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x669 = 6472U;
	int32_t x670 = -1;
	int8_t x672 = 0;
	static volatile int32_t t155 = 0;

    t155 = (((x669%x670)+x671)==x672);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x674 = INT32_MIN;
	int32_t x675 = -1;
	static int16_t x676 = INT16_MIN;
	static int32_t t156 = 626115;

    t156 = (((x673%x674)+x675)==x676);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x681 = INT32_MIN;
	int32_t x683 = -4028268;
	int16_t x684 = INT16_MIN;
	volatile int32_t t157 = 126;

    t157 = (((x681%x682)+x683)==x684);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x685 = 0;
	static uint8_t x686 = 13U;
	uint8_t x687 = 1U;
	int32_t t158 = 244;

    t158 = (((x685%x686)+x687)==x688);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x689 = UINT64_MAX;
	static uint16_t x690 = 15360U;
	uint32_t x691 = 14U;
	int8_t x692 = INT8_MIN;
	int32_t t159 = 1687887;

    t159 = (((x689%x690)+x691)==x692);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x693 = UINT8_MAX;
	static int8_t x694 = -3;
	uint8_t x695 = UINT8_MAX;
	int64_t x696 = -1LL;
	volatile int32_t t160 = 11;

    t160 = (((x693%x694)+x695)==x696);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x697 = -57LL;
	int32_t x698 = 37;
	uint16_t x699 = 3U;
	int64_t x700 = INT64_MAX;
	volatile int32_t t161 = 24196493;

    t161 = (((x697%x698)+x699)==x700);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x703 = INT8_MIN;
	int32_t x704 = 63;
	volatile int32_t t162 = 106;

    t162 = (((x701%x702)+x703)==x704);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x705 = 44391LLU;
	uint64_t x707 = 291LLU;
	int16_t x708 = 5;
	static volatile int32_t t163 = 1;

    t163 = (((x705%x706)+x707)==x708);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x709 = 85781479U;
	int64_t x710 = 24583186733814015LL;
	uint32_t x711 = 582569U;
	int32_t x712 = -538;
	volatile int32_t t164 = 26576;

    t164 = (((x709%x710)+x711)==x712);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x713 = INT8_MAX;
	int32_t x714 = -1131332;
	uint16_t x716 = 424U;
	volatile int32_t t165 = 14;

    t165 = (((x713%x714)+x715)==x716);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x717 = 3;
	static int8_t x719 = 4;
	int64_t x720 = 279431LL;
	int32_t t166 = 13;

    t166 = (((x717%x718)+x719)==x720);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x722 = UINT32_MAX;
	int16_t x723 = -1;
	int64_t x724 = 11004820188LL;

    t167 = (((x721%x722)+x723)==x724);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x725 = 2636380LLU;
	static volatile int8_t x726 = -1;
	volatile int32_t t168 = -207;

    t168 = (((x725%x726)+x727)==x728);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x729 = 5683U;
	static int32_t x730 = INT32_MAX;
	int64_t x731 = INT64_MIN;
	volatile int32_t t169 = -5496;

    t169 = (((x729%x730)+x731)==x732);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x733 = UINT32_MAX;
	volatile int8_t x734 = INT8_MIN;
	volatile int32_t t170 = 324716;

    t170 = (((x733%x734)+x735)==x736);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x741 = -15323096050392LL;
	int64_t x742 = 148370689151156540LL;
	volatile int16_t x743 = -7;
	uint8_t x744 = UINT8_MAX;
	int32_t t171 = -40;

    t171 = (((x741%x742)+x743)==x744);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x745 = 70U;
	static int64_t x746 = INT64_MIN;
	int64_t x747 = -123953145LL;
	int64_t x748 = 9939LL;
	volatile int32_t t172 = -1;

    t172 = (((x745%x746)+x747)==x748);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x749 = INT32_MAX;
	int32_t x750 = -1;
	int32_t x751 = -1;
	int32_t x752 = -316;
	static int32_t t173 = -8;

    t173 = (((x749%x750)+x751)==x752);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x753 = 4959LLU;
	int32_t x755 = 50270584;
	uint64_t x756 = 55047393328LLU;
	volatile int32_t t174 = -37147280;

    t174 = (((x753%x754)+x755)==x756);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x757 = 4115;
	volatile int16_t x758 = INT16_MIN;
	static int32_t x760 = -1;
	int32_t t175 = -6801707;

    t175 = (((x757%x758)+x759)==x760);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x762 = 3U;
	uint8_t x763 = 73U;
	uint8_t x764 = 32U;

    t176 = (((x761%x762)+x763)==x764);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x765 = -45796083;
	int16_t x766 = -1;
	int64_t x768 = INT64_MIN;
	int32_t t177 = -196149666;

    t177 = (((x765%x766)+x767)==x768);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x770 = 1755;
	int8_t x771 = -1;
	int32_t x772 = 28;
	volatile int32_t t178 = -996332483;

    t178 = (((x769%x770)+x771)==x772);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x775 = -2;
	static volatile int64_t x776 = -1LL;

    t179 = (((x773%x774)+x775)==x776);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x777 = -49;
	volatile int32_t x778 = INT32_MAX;
	int64_t x779 = -927LL;
	int32_t x780 = INT32_MIN;

    t180 = (((x777%x778)+x779)==x780);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x781 = 61746333871LLU;
	static uint32_t x784 = 147314033U;
	int32_t t181 = -2033;

    t181 = (((x781%x782)+x783)==x784);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x785 = INT32_MIN;
	static int64_t x787 = 850331777LL;
	uint32_t x788 = 24255518U;
	volatile int32_t t182 = 0;

    t182 = (((x785%x786)+x787)==x788);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t t183 = -10460;

    t183 = (((x789%x790)+x791)==x792);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x793 = 0U;
	int64_t x794 = INT64_MIN;
	uint16_t x795 = 480U;
	static uint8_t x796 = UINT8_MAX;
	int32_t t184 = -1920647;

    t184 = (((x793%x794)+x795)==x796);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x799 = INT16_MIN;
	int32_t t185 = -13298;

    t185 = (((x797%x798)+x799)==x800);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x801 = INT32_MIN;
	static int64_t x804 = -108660141095071LL;
	int32_t t186 = 58665;

    t186 = (((x801%x802)+x803)==x804);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x805 = -1;
	volatile int16_t x806 = -1;
	int16_t x807 = INT16_MAX;
	volatile uint64_t x808 = 48LLU;
	volatile int32_t t187 = 28148579;

    t187 = (((x805%x806)+x807)==x808);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x810 = 1082U;
	uint8_t x811 = 107U;
	volatile int32_t t188 = 10163994;

    t188 = (((x809%x810)+x811)==x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x813 = 1484U;
	int8_t x814 = 14;
	volatile int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MAX;
	volatile int32_t t189 = 4830425;

    t189 = (((x813%x814)+x815)==x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x817 = -30090LL;
	int64_t x818 = INT64_MIN;
	static int64_t x819 = INT64_MAX;
	uint16_t x820 = 2U;
	volatile int32_t t190 = 1;

    t190 = (((x817%x818)+x819)==x820);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x821 = 8;
	int32_t x822 = INT32_MAX;
	static uint32_t x823 = 2699317U;
	int32_t x824 = -792209;
	volatile int32_t t191 = 139;

    t191 = (((x821%x822)+x823)==x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MIN;
	int64_t x827 = INT64_MIN;
	int16_t x828 = INT16_MIN;
	static int32_t t192 = -1640;

    t192 = (((x825%x826)+x827)==x828);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x829 = 0;
	static int8_t x830 = INT8_MIN;
	volatile int64_t x831 = INT64_MIN;
	uint32_t x832 = 37955U;
	volatile int32_t t193 = -2087453;

    t193 = (((x829%x830)+x831)==x832);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x833 = INT8_MIN;
	uint16_t x834 = 9U;
	int16_t x835 = 29;
	uint64_t x836 = 1LLU;
	int32_t t194 = 802;

    t194 = (((x833%x834)+x835)==x836);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x837 = INT16_MAX;
	int8_t x838 = 1;
	volatile int16_t x839 = INT16_MIN;
	int32_t t195 = -7597;

    t195 = (((x837%x838)+x839)==x840);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x841 = 5U;
	uint8_t x842 = UINT8_MAX;
	int8_t x843 = 1;
	int32_t t196 = -488032;

    t196 = (((x841%x842)+x843)==x844);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x845 = -143;
	uint8_t x847 = 0U;
	int32_t x848 = INT32_MIN;
	int32_t t197 = -3786;

    t197 = (((x845%x846)+x847)==x848);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x850 = UINT64_MAX;
	int8_t x851 = -1;
	int8_t x852 = INT8_MIN;
	volatile int32_t t198 = 1165;

    t198 = (((x849%x850)+x851)==x852);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x853 = INT8_MIN;
	uint16_t x854 = UINT16_MAX;
	static uint8_t x855 = 104U;
	uint16_t x856 = 11217U;

    t199 = (((x853%x854)+x855)==x856);

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

