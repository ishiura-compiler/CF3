
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

static volatile uint16_t x1 = 25U;
static int16_t x3 = 6;
int16_t x5 = -2217;
static int16_t x12 = -1;
int16_t x29 = INT16_MIN;
int32_t t5 = 222037622;
int32_t x54 = -1;
int8_t x62 = INT8_MAX;
volatile uint32_t x67 = 1271U;
volatile int32_t t13 = 10874200;
uint8_t x83 = 3U;
int32_t t17 = 345310070;
static volatile uint64_t x98 = UINT64_MAX;
int8_t x104 = INT8_MIN;
uint8_t x110 = UINT8_MAX;
volatile int32_t t21 = 41;
volatile int32_t t22 = -7152298;
uint32_t x129 = 61383473U;
int16_t x130 = INT16_MIN;
int64_t x134 = -1LL;
uint32_t x137 = 2U;
volatile int32_t t26 = 29;
int64_t x143 = -1LL;
int64_t x147 = -1LL;
uint16_t x154 = UINT16_MAX;
static int64_t x157 = 0LL;
volatile int16_t x161 = INT16_MIN;
int32_t x162 = -1;
int32_t x163 = INT32_MAX;
int32_t x165 = -3590643;
static volatile int32_t x173 = 513933;
static int32_t x175 = INT32_MIN;
int64_t x177 = INT64_MIN;
volatile int16_t x180 = INT16_MIN;
uint16_t x181 = 4078U;
uint8_t x185 = 29U;
int32_t x190 = INT32_MIN;
static volatile int32_t t39 = -6;
uint8_t x205 = UINT8_MAX;
static volatile int32_t x208 = -34;
int32_t t42 = -6212117;
int8_t x209 = INT8_MAX;
int32_t x213 = -1;
uint8_t x219 = 6U;
volatile uint64_t x240 = UINT64_MAX;
int32_t x248 = INT32_MAX;
volatile int16_t x249 = INT16_MIN;
static int32_t t51 = -1;
int32_t x255 = 124;
volatile int32_t t52 = -1882;
uint16_t x258 = UINT16_MAX;
uint64_t x261 = 10880896588LLU;
int32_t t54 = 548751;
int16_t x275 = INT16_MIN;
volatile uint16_t x277 = 802U;
int8_t x286 = INT8_MIN;
static int16_t x288 = INT16_MIN;
uint8_t x294 = 12U;
volatile int16_t x296 = -1;
static uint8_t x300 = 3U;
int64_t x310 = INT64_MIN;
static int64_t x312 = INT64_MIN;
static int8_t x316 = INT8_MAX;
volatile int16_t x319 = INT16_MIN;
int16_t x324 = INT16_MIN;
int32_t t68 = 24;
static int32_t t69 = -175657185;
static uint32_t x329 = UINT32_MAX;
static int64_t x331 = 659LL;
volatile int32_t t70 = -526460545;
int32_t x333 = 77584681;
static uint32_t x337 = 45131U;
volatile int32_t x342 = 6;
int32_t x343 = -1;
static int16_t x346 = INT16_MAX;
int8_t x361 = -3;
int32_t t79 = 14;
int8_t x378 = INT8_MIN;
int16_t x381 = INT16_MIN;
uint16_t x383 = 29U;
int32_t x385 = -1;
volatile uint64_t x386 = 1780444966378LLU;
int16_t x391 = -1;
volatile int8_t x399 = -1;
static int16_t x400 = INT16_MIN;
static int16_t x407 = INT16_MAX;
static int32_t t86 = -239135105;
uint8_t x425 = 10U;
uint8_t x426 = UINT8_MAX;
uint16_t x427 = 29U;
volatile int32_t x454 = -22;
int64_t x458 = -1LL;
int8_t x480 = INT8_MIN;
static int32_t x490 = INT32_MIN;
uint32_t x493 = UINT32_MAX;
int32_t t106 = -554986;
static int64_t x502 = INT64_MIN;
int64_t x506 = INT64_MIN;
uint16_t x512 = 9U;
int16_t x528 = INT16_MAX;
int8_t x533 = INT8_MIN;
int32_t x539 = -13272238;
int16_t x541 = INT16_MIN;
uint64_t x544 = 711555577150105LLU;
int32_t t116 = 601698;
int8_t x553 = INT8_MAX;
static int32_t t118 = 4;
int16_t x557 = -1;
uint32_t x564 = 89398125U;
volatile int64_t x565 = 1923559123588427LL;
uint64_t x572 = 2949623569576244LLU;
int32_t t122 = 278567567;
int32_t x580 = -2993901;
int32_t t124 = 350;
volatile int64_t x582 = INT64_MAX;
uint8_t x584 = UINT8_MAX;
static int8_t x591 = INT8_MIN;
static int8_t x596 = 56;
uint32_t x597 = 1156U;
int64_t x601 = -1LL;
int8_t x606 = -16;
volatile int32_t t131 = 1268547;
int32_t x609 = INT32_MIN;
int16_t x613 = 0;
int8_t x615 = INT8_MAX;
int32_t t133 = -27783;
volatile int16_t x618 = INT16_MIN;
static int64_t x620 = -1LL;
static volatile uint16_t x625 = 34U;
volatile uint32_t x642 = 37409U;
volatile int32_t x644 = -29;
static volatile int32_t t138 = 504;
volatile int32_t t139 = 3069818;
int8_t x662 = INT8_MIN;
int64_t x664 = -1LL;
int32_t x671 = INT32_MIN;
uint16_t x672 = 16341U;
static int32_t t143 = 2293;
volatile int16_t x678 = -3;
static volatile int32_t t145 = -14433;
int8_t x685 = 3;
volatile int64_t x702 = INT64_MIN;
volatile int32_t t150 = 4;
static int64_t x712 = INT64_MIN;
volatile int32_t t152 = -7079;
int64_t x723 = 10989352723LL;
volatile int64_t x724 = INT64_MIN;
volatile int32_t x734 = -1;
volatile int16_t x735 = -8775;
static uint32_t x736 = 83U;
int64_t x740 = INT64_MIN;
uint8_t x750 = UINT8_MAX;
volatile int16_t x757 = 420;
uint16_t x758 = 396U;
int64_t x760 = -1986555LL;
static volatile int32_t t164 = 2003;
volatile int32_t t166 = 21487564;
static int32_t x773 = INT32_MAX;
int16_t x775 = -1;
int16_t x776 = 1;
volatile uint32_t x777 = 1349U;
static int8_t x783 = 0;
int64_t x786 = -1LL;
static volatile int16_t x790 = INT16_MIN;
volatile int16_t x791 = -1;
int16_t x795 = INT16_MIN;
uint16_t x796 = UINT16_MAX;
static int64_t x802 = INT64_MAX;
volatile uint64_t x810 = 22651035LLU;
uint32_t x815 = UINT32_MAX;
int64_t x825 = INT64_MAX;
volatile int32_t t179 = -655476;
static int8_t x834 = -2;
uint16_t x842 = UINT16_MAX;
int16_t x843 = 231;
int8_t x844 = -1;
int8_t x855 = INT8_MAX;
volatile int32_t t190 = 31;
static uint8_t x885 = 2U;
static volatile int32_t t191 = 1;
int16_t x904 = 889;
uint32_t x906 = UINT32_MAX;
int16_t x912 = INT16_MIN;
static uint32_t x916 = 3783U;
uint8_t x917 = 1U;
int64_t x920 = 6LL;
volatile uint16_t x921 = 7396U;
static int32_t x922 = INT32_MIN;
int32_t x924 = INT32_MAX;


void f0(void) {
    	int16_t x2 = 1126;
	int64_t x4 = -105684360473682271LL;
	volatile int32_t t0 = -24;

    t0 = ((x1/x2)==(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 42U;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 6275LLU;
	volatile int32_t t1 = 42062904;

    t1 = ((x5/x6)==(x7+x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int64_t x10 = INT64_MIN;
	volatile int64_t x11 = -1LL;
	volatile int32_t t2 = 21;

    t2 = ((x9/x10)==(x11+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x21 = -1;
	int64_t x22 = INT64_MIN;
	static int16_t x23 = INT16_MIN;
	volatile uint8_t x24 = UINT8_MAX;
	static int32_t t3 = -3;

    t3 = ((x21/x22)==(x23+x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 3U;
	int32_t x32 = 310;
	int32_t t4 = 43408;

    t4 = ((x29/x30)==(x31+x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x33 = -17;
	int16_t x34 = INT16_MIN;
	volatile int64_t x35 = INT64_MIN;
	static int32_t x36 = 411930934;

    t5 = ((x33/x34)==(x35+x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x37 = -1;
	int64_t x38 = 28105088545LL;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 24948LLU;
	int32_t t6 = 31;

    t6 = ((x37/x38)==(x39+x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = 519350LLU;
	volatile uint64_t x42 = UINT64_MAX;
	uint64_t x43 = 955LLU;
	int32_t x44 = -32519872;
	volatile int32_t t7 = 96240219;

    t7 = ((x41/x42)==(x43+x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x45 = 41247174151795LL;
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MAX;
	int64_t x48 = INT64_MIN;
	int32_t t8 = 195168787;

    t8 = ((x45/x46)==(x47+x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -1;
	uint64_t x50 = 237060717586174LLU;
	volatile int16_t x51 = INT16_MIN;
	int64_t x52 = 92120935LL;
	int32_t t9 = -1;

    t9 = ((x49/x50)==(x51+x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 338807083U;
	int32_t x55 = 45662416;
	volatile int64_t x56 = INT64_MIN;
	int32_t t10 = -33;

    t10 = ((x53/x54)==(x55+x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	uint32_t x59 = 440656U;
	uint64_t x60 = UINT64_MAX;
	int32_t t11 = -101;

    t11 = ((x57/x58)==(x59+x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x61 = INT32_MAX;
	static volatile uint64_t x63 = 11784244867LLU;
	int32_t x64 = INT32_MIN;
	int32_t t12 = -104517493;

    t12 = ((x61/x62)==(x63+x64));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x65 = INT16_MIN;
	static volatile int32_t x66 = INT32_MIN;
	volatile int32_t x68 = 17;

    t13 = ((x65/x66)==(x67+x68));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = INT16_MIN;
	int32_t x70 = -1;
	uint64_t x71 = 397027911741542788LLU;
	uint32_t x72 = 33585118U;
	static volatile int32_t t14 = 1;

    t14 = ((x69/x70)==(x71+x72));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x81 = INT16_MAX;
	uint32_t x82 = UINT32_MAX;
	static int32_t x84 = -1;
	volatile int32_t t15 = 10;

    t15 = ((x81/x82)==(x83+x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -15;
	static int32_t x88 = 0;
	volatile int32_t t16 = -47;

    t16 = ((x85/x86)==(x87+x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x89 = 2465;
	volatile int64_t x90 = INT64_MAX;
	static volatile uint16_t x91 = UINT16_MAX;
	uint8_t x92 = 91U;

    t17 = ((x89/x90)==(x91+x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x97 = -1948;
	int64_t x99 = 344318LL;
	int8_t x100 = -10;
	int32_t t18 = 52764896;

    t18 = ((x97/x98)==(x99+x100));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = -1;
	int32_t x102 = 3;
	uint64_t x103 = UINT64_MAX;
	int32_t t19 = -13257808;

    t19 = ((x101/x102)==(x103+x104));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x109 = 819;
	uint64_t x111 = UINT64_MAX;
	volatile int16_t x112 = -1;
	int32_t t20 = 9935;

    t20 = ((x109/x110)==(x111+x112));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MAX;
	int8_t x116 = -1;

    t21 = ((x113/x114)==(x115+x116));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = 1;

    t22 = ((x121/x122)==(x123+x124));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x125 = UINT16_MAX;
	int64_t x126 = 9173424751165LL;
	int16_t x127 = INT16_MAX;
	int32_t x128 = -1;
	static int32_t t23 = -3;

    t23 = ((x125/x126)==(x127+x128));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x131 = 58636LL;
	int8_t x132 = INT8_MIN;
	static int32_t t24 = -751074;

    t24 = ((x129/x130)==(x131+x132));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x133 = 12988LL;
	volatile uint32_t x135 = UINT32_MAX;
	volatile int32_t x136 = INT32_MAX;
	static int32_t t25 = 15039563;

    t25 = ((x133/x134)==(x135+x136));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x138 = -7267;
	int8_t x139 = -8;
	uint64_t x140 = UINT64_MAX;

    t26 = ((x137/x138)==(x139+x140));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x141 = 3705651345127545015LL;
	int8_t x142 = -25;
	volatile int32_t x144 = INT32_MAX;
	static int32_t t27 = 12;

    t27 = ((x141/x142)==(x143+x144));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x145 = 52618216U;
	uint32_t x146 = 2U;
	int8_t x148 = -1;
	static int32_t t28 = -1;

    t28 = ((x145/x146)==(x147+x148));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x149 = UINT16_MAX;
	static volatile int64_t x150 = INT64_MIN;
	volatile uint32_t x151 = 2194556U;
	static volatile int8_t x152 = INT8_MIN;
	volatile int32_t t29 = -1;

    t29 = ((x149/x150)==(x151+x152));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x153 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile uint64_t x156 = 65578704254LLU;
	int32_t t30 = -6;

    t30 = ((x153/x154)==(x155+x156));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x158 = INT16_MIN;
	uint8_t x159 = 19U;
	static int64_t x160 = 466LL;
	static int32_t t31 = 9;

    t31 = ((x157/x158)==(x159+x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x164 = UINT64_MAX;
	volatile int32_t t32 = 52;

    t32 = ((x161/x162)==(x163+x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 61U;
	static volatile int32_t t33 = -61;

    t33 = ((x165/x166)==(x167+x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x174 = -3167089652LL;
	uint8_t x176 = 51U;
	int32_t t34 = -16676564;

    t34 = ((x173/x174)==(x175+x176));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x178 = UINT64_MAX;
	static int16_t x179 = 114;
	volatile int32_t t35 = 3465045;

    t35 = ((x177/x178)==(x179+x180));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x182 = INT64_MIN;
	volatile uint64_t x183 = 6495228491756915011LLU;
	volatile int16_t x184 = 6;
	volatile int32_t t36 = 25014;

    t36 = ((x181/x182)==(x183+x184));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x186 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	static volatile uint8_t x188 = 52U;
	int32_t t37 = 885042976;

    t37 = ((x185/x186)==(x187+x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x189 = INT16_MIN;
	static uint32_t x191 = 13914U;
	int32_t x192 = 28;
	int32_t t38 = 5;

    t38 = ((x189/x190)==(x191+x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x193 = 585;
	volatile int64_t x194 = -1LL;
	int64_t x195 = -1LL;
	int64_t x196 = 366200821503LL;

    t39 = ((x193/x194)==(x195+x196));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x197 = INT16_MAX;
	static volatile uint64_t x198 = 2512552329LLU;
	int64_t x199 = 474611011309313LL;
	int32_t x200 = INT32_MIN;
	int32_t t40 = 35346702;

    t40 = ((x197/x198)==(x199+x200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x201 = -1;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -11670360472312LL;
	int8_t x204 = -1;
	volatile int32_t t41 = 0;

    t41 = ((x201/x202)==(x203+x204));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x206 = 349917660U;
	int16_t x207 = INT16_MAX;

    t42 = ((x205/x206)==(x207+x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	int32_t x212 = 8653;
	int32_t t43 = 1748016;

    t43 = ((x209/x210)==(x211+x212));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x214 = 33U;
	int32_t x215 = -15669382;
	int8_t x216 = INT8_MIN;
	int32_t t44 = 1;

    t44 = ((x213/x214)==(x215+x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x217 = INT32_MAX;
	int64_t x218 = 122712675733168843LL;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t45 = -1;

    t45 = ((x217/x218)==(x219+x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile int16_t x222 = -49;
	uint32_t x223 = 504221U;
	int64_t x224 = -1LL;
	static int32_t t46 = 31004828;

    t46 = ((x221/x222)==(x223+x224));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x225 = INT32_MIN;
	static int32_t x226 = INT32_MIN;
	int32_t x227 = -1;
	int8_t x228 = INT8_MIN;
	int32_t t47 = 265083904;

    t47 = ((x225/x226)==(x227+x228));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x237 = -1;
	static int8_t x238 = -1;
	int16_t x239 = -3;
	static int32_t t48 = -46;

    t48 = ((x237/x238)==(x239+x240));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x241 = INT64_MAX;
	uint8_t x242 = 86U;
	volatile uint64_t x243 = 349869865LLU;
	uint8_t x244 = 14U;
	int32_t t49 = 1;

    t49 = ((x241/x242)==(x243+x244));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x245 = -1;
	volatile int8_t x246 = INT8_MIN;
	volatile int32_t x247 = -634271398;
	int32_t t50 = 25204;

    t50 = ((x245/x246)==(x247+x248));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x250 = 106841018946828LL;
	volatile int16_t x251 = INT16_MAX;
	uint16_t x252 = 42U;

    t51 = ((x249/x250)==(x251+x252));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = -1LL;
	volatile int64_t x256 = 130449107412868673LL;

    t52 = ((x253/x254)==(x255+x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x257 = INT64_MAX;
	int32_t x259 = -1;
	uint64_t x260 = 533449449795273283LLU;
	int32_t t53 = 3505;

    t53 = ((x257/x258)==(x259+x260));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x262 = 5715347930LLU;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MIN;

    t54 = ((x261/x262)==(x263+x264));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x265 = -4876LL;
	int16_t x266 = 4647;
	static volatile int64_t x267 = 290157676693LL;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t55 = 1;

    t55 = ((x265/x266)==(x267+x268));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x273 = 22U;
	static uint64_t x274 = UINT64_MAX;
	static int32_t x276 = INT32_MAX;
	static int32_t t56 = 0;

    t56 = ((x273/x274)==(x275+x276));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x278 = -147618LL;
	int16_t x279 = INT16_MAX;
	int64_t x280 = -9LL;
	volatile int32_t t57 = -1533726;

    t57 = ((x277/x278)==(x279+x280));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x281 = -1LL;
	int32_t x282 = 72;
	uint16_t x283 = 0U;
	static uint32_t x284 = 1021U;
	int32_t t58 = -1512860;

    t58 = ((x281/x282)==(x283+x284));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x287 = -6;
	int32_t t59 = 27;

    t59 = ((x285/x286)==(x287+x288));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x289 = INT16_MIN;
	uint8_t x290 = 1U;
	int64_t x291 = INT64_MIN;
	uint16_t x292 = 910U;
	int32_t t60 = -438449;

    t60 = ((x289/x290)==(x291+x292));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x293 = UINT16_MAX;
	uint16_t x295 = UINT16_MAX;
	int32_t t61 = 1672;

    t61 = ((x293/x294)==(x295+x296));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = 1460982727934LL;
	int32_t x299 = INT32_MIN;
	int32_t t62 = 13346;

    t62 = ((x297/x298)==(x299+x300));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x301 = UINT64_MAX;
	volatile uint16_t x302 = UINT16_MAX;
	uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 11U;
	volatile int32_t t63 = 5;

    t63 = ((x301/x302)==(x303+x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x305 = 0;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = UINT8_MAX;
	int32_t t64 = -661;

    t64 = ((x305/x306)==(x307+x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x309 = UINT64_MAX;
	int8_t x311 = INT8_MAX;
	int32_t t65 = 0;

    t65 = ((x309/x310)==(x311+x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x313 = 10;
	volatile int8_t x314 = -1;
	static int64_t x315 = INT64_MIN;
	volatile int32_t t66 = -9918;

    t66 = ((x313/x314)==(x315+x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x317 = 4;
	uint8_t x318 = 17U;
	int16_t x320 = 0;
	volatile int32_t t67 = 1561;

    t67 = ((x317/x318)==(x319+x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x321 = 445748811U;
	volatile int8_t x322 = 14;
	uint32_t x323 = UINT32_MAX;

    t68 = ((x321/x322)==(x323+x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	int16_t x327 = -7228;
	int64_t x328 = -1LL;

    t69 = ((x325/x326)==(x327+x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x330 = UINT32_MAX;
	int16_t x332 = INT16_MAX;

    t70 = ((x329/x330)==(x331+x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x334 = 4LLU;
	volatile uint8_t x335 = 24U;
	int16_t x336 = -1;
	volatile int32_t t71 = -1;

    t71 = ((x333/x334)==(x335+x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x338 = 21059LLU;
	volatile int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MAX;
	static int32_t t72 = -6001663;

    t72 = ((x337/x338)==(x339+x340));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x341 = 4U;
	uint64_t x344 = 36953468611074LLU;
	static int32_t t73 = 4350244;

    t73 = ((x341/x342)==(x343+x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = 1;
	int64_t x347 = -757272419LL;
	int32_t x348 = INT32_MIN;
	volatile int32_t t74 = 506137;

    t74 = ((x345/x346)==(x347+x348));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x349 = -3;
	int32_t x350 = 134;
	int16_t x351 = INT16_MAX;
	uint16_t x352 = 4414U;
	volatile int32_t t75 = -3961;

    t75 = ((x349/x350)==(x351+x352));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = -1;
	static int8_t x354 = INT8_MAX;
	int8_t x355 = -1;
	int16_t x356 = -1;
	volatile int32_t t76 = 6766695;

    t76 = ((x353/x354)==(x355+x356));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x357 = 1U;
	int64_t x358 = INT64_MAX;
	volatile int8_t x359 = -1;
	volatile uint64_t x360 = 241LLU;
	int32_t t77 = 499;

    t77 = ((x357/x358)==(x359+x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x362 = INT8_MIN;
	static int16_t x363 = -16;
	int8_t x364 = INT8_MAX;
	int32_t t78 = -501;

    t78 = ((x361/x362)==(x363+x364));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x373 = 24;
	int64_t x374 = -178353807439LL;
	static int64_t x375 = -624LL;
	static int8_t x376 = 41;

    t79 = ((x373/x374)==(x375+x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x377 = 7524468;
	static uint32_t x379 = 0U;
	int32_t x380 = -170676;
	volatile int32_t t80 = 1;

    t80 = ((x377/x378)==(x379+x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x382 = UINT8_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	int32_t t81 = -1952;

    t81 = ((x381/x382)==(x383+x384));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t82 = 178749;

    t82 = ((x385/x386)==(x387+x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x389 = 10185U;
	static int16_t x390 = -1;
	uint8_t x392 = UINT8_MAX;
	int32_t t83 = -25;

    t83 = ((x389/x390)==(x391+x392));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x397 = INT8_MAX;
	volatile uint32_t x398 = 2418396U;
	int32_t t84 = -2718944;

    t84 = ((x397/x398)==(x399+x400));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t85 = 16061;

    t85 = ((x401/x402)==(x403+x404));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MIN;
	static int64_t x408 = INT64_MIN;

    t86 = ((x405/x406)==(x407+x408));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x409 = -1;
	int64_t x410 = INT64_MIN;
	int32_t x411 = 275234;
	int8_t x412 = INT8_MIN;
	volatile int32_t t87 = -60;

    t87 = ((x409/x410)==(x411+x412));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x413 = INT16_MAX;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = INT8_MAX;
	static volatile int8_t x416 = -1;
	static int32_t t88 = 7322;

    t88 = ((x413/x414)==(x415+x416));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x417 = -1;
	int32_t x418 = 690999;
	static uint8_t x419 = 14U;
	volatile int8_t x420 = 0;
	volatile int32_t t89 = -219497367;

    t89 = ((x417/x418)==(x419+x420));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x428 = 2;
	volatile int32_t t90 = 79;

    t90 = ((x425/x426)==(x427+x428));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x429 = 1020056LLU;
	volatile int64_t x430 = INT64_MAX;
	int16_t x431 = 758;
	int16_t x432 = INT16_MIN;
	volatile int32_t t91 = 16363;

    t91 = ((x429/x430)==(x431+x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x433 = 28017U;
	int32_t x434 = INT32_MAX;
	static int8_t x435 = INT8_MIN;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t92 = 71016;

    t92 = ((x433/x434)==(x435+x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x437 = INT64_MIN;
	uint16_t x438 = 3269U;
	int8_t x439 = -1;
	int16_t x440 = INT16_MIN;
	static volatile int32_t t93 = -248;

    t93 = ((x437/x438)==(x439+x440));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x441 = 6U;
	volatile int16_t x442 = INT16_MAX;
	static int16_t x443 = INT16_MIN;
	volatile uint32_t x444 = 872U;
	volatile int32_t t94 = 7747217;

    t94 = ((x441/x442)==(x443+x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x449 = INT16_MIN;
	int8_t x450 = -46;
	int16_t x451 = INT16_MAX;
	uint8_t x452 = 3U;
	int32_t t95 = 0;

    t95 = ((x449/x450)==(x451+x452));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint32_t x453 = UINT32_MAX;
	uint64_t x455 = UINT64_MAX;
	uint16_t x456 = 11U;
	volatile int32_t t96 = 903227558;

    t96 = ((x453/x454)==(x455+x456));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile uint16_t x459 = 5312U;
	static int8_t x460 = 1;
	int32_t t97 = 4;

    t97 = ((x457/x458)==(x459+x460));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x461 = UINT16_MAX;
	uint8_t x462 = UINT8_MAX;
	uint64_t x463 = 84820LLU;
	int64_t x464 = INT64_MIN;
	volatile int32_t t98 = 9320045;

    t98 = ((x461/x462)==(x463+x464));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint8_t x469 = 80U;
	volatile uint32_t x470 = 2570575U;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = 7U;
	static volatile int32_t t99 = -4;

    t99 = ((x469/x470)==(x471+x472));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x473 = INT16_MIN;
	volatile uint8_t x474 = UINT8_MAX;
	int64_t x475 = -600038428039543LL;
	int32_t x476 = 123939604;
	int32_t t100 = 13;

    t100 = ((x473/x474)==(x475+x476));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x477 = 100;
	volatile int16_t x478 = -1;
	uint8_t x479 = UINT8_MAX;
	volatile int32_t t101 = -99962;

    t101 = ((x477/x478)==(x479+x480));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x481 = INT16_MIN;
	uint32_t x482 = 5446448U;
	uint16_t x483 = 3U;
	volatile uint64_t x484 = 1555334915261562643LLU;
	int32_t t102 = 30;

    t102 = ((x481/x482)==(x483+x484));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x485 = 89013U;
	uint8_t x486 = UINT8_MAX;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 28826766U;
	int32_t t103 = -136399;

    t103 = ((x485/x486)==(x487+x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x489 = -1LL;
	int16_t x491 = -427;
	int16_t x492 = INT16_MAX;
	volatile int32_t t104 = 270;

    t104 = ((x489/x490)==(x491+x492));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x494 = -49;
	static uint16_t x495 = 9U;
	int8_t x496 = -1;
	volatile int32_t t105 = 430;

    t105 = ((x493/x494)==(x495+x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile int32_t x498 = INT32_MIN;
	volatile int16_t x499 = INT16_MIN;
	int32_t x500 = 4060082;

    t106 = ((x497/x498)==(x499+x500));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x501 = INT32_MIN;
	int8_t x503 = 4;
	int64_t x504 = INT64_MIN;
	volatile int32_t t107 = 1;

    t107 = ((x501/x502)==(x503+x504));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x505 = 2U;
	static volatile int16_t x507 = 5871;
	uint16_t x508 = 9583U;
	int32_t t108 = 1;

    t108 = ((x505/x506)==(x507+x508));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x509 = 10U;
	volatile int32_t x510 = 25;
	uint32_t x511 = 22U;
	volatile int32_t t109 = 13640563;

    t109 = ((x509/x510)==(x511+x512));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x513 = 52825764;
	uint16_t x514 = 516U;
	int16_t x515 = INT16_MAX;
	volatile uint8_t x516 = 63U;
	static volatile int32_t t110 = 29;

    t110 = ((x513/x514)==(x515+x516));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = -23;
	volatile uint32_t x522 = 2765239U;
	int8_t x523 = INT8_MAX;
	uint64_t x524 = 24LLU;
	static int32_t t111 = 278;

    t111 = ((x521/x522)==(x523+x524));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x525 = 3379;
	static int32_t x526 = 519434;
	int64_t x527 = 11LL;
	volatile int32_t t112 = -1;

    t112 = ((x525/x526)==(x527+x528));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x529 = 13;
	static volatile int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MAX;
	int16_t x532 = 7;
	int32_t t113 = 16263235;

    t113 = ((x529/x530)==(x531+x532));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x534 = 111U;
	static int64_t x535 = 7065LL;
	uint16_t x536 = UINT16_MAX;
	int32_t t114 = 10669413;

    t114 = ((x533/x534)==(x535+x536));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x537 = 1536892121557524145LL;
	uint64_t x538 = 2753586365543545LLU;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t115 = 3491;

    t115 = ((x537/x538)==(x539+x540));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x542 = UINT8_MAX;
	int64_t x543 = -1LL;

    t116 = ((x541/x542)==(x543+x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x545 = -1LL;
	static int32_t x546 = INT32_MIN;
	volatile int16_t x547 = INT16_MIN;
	int8_t x548 = 1;
	static int32_t t117 = 6147507;

    t117 = ((x545/x546)==(x547+x548));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x554 = UINT8_MAX;
	static uint64_t x555 = 1410482377917LLU;
	static uint16_t x556 = 18U;

    t118 = ((x553/x554)==(x555+x556));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x558 = -961;
	int16_t x559 = 2231;
	int32_t x560 = -343628;
	volatile int32_t t119 = 680878358;

    t119 = ((x557/x558)==(x559+x560));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x561 = UINT64_MAX;
	uint32_t x562 = 4468U;
	uint32_t x563 = 2096280656U;
	volatile int32_t t120 = -203927783;

    t120 = ((x561/x562)==(x563+x564));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x566 = UINT16_MAX;
	int32_t x567 = -1;
	static int64_t x568 = -14829429046835LL;
	volatile int32_t t121 = -3;

    t121 = ((x565/x566)==(x567+x568));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x569 = 236U;
	volatile int32_t x570 = INT32_MAX;
	volatile int16_t x571 = INT16_MAX;

    t122 = ((x569/x570)==(x571+x572));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x573 = INT16_MIN;
	static uint32_t x574 = 5714031U;
	int16_t x575 = -1;
	uint16_t x576 = 348U;
	int32_t t123 = -588;

    t123 = ((x573/x574)==(x575+x576));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x577 = 4542102229LLU;
	int32_t x578 = 56082;
	int8_t x579 = 21;

    t124 = ((x577/x578)==(x579+x580));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x581 = -4;
	int32_t x583 = 132;
	volatile int32_t t125 = 533902960;

    t125 = ((x581/x582)==(x583+x584));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x585 = INT8_MIN;
	static volatile int64_t x586 = INT64_MIN;
	uint16_t x587 = UINT16_MAX;
	int16_t x588 = -1;
	volatile int32_t t126 = -330053639;

    t126 = ((x585/x586)==(x587+x588));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x589 = UINT32_MAX;
	int16_t x590 = -1;
	int8_t x592 = INT8_MIN;
	int32_t t127 = 827;

    t127 = ((x589/x590)==(x591+x592));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x593 = -1;
	int32_t x594 = -473307028;
	volatile int64_t x595 = INT64_MIN;
	int32_t t128 = -22792;

    t128 = ((x593/x594)==(x595+x596));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x598 = 97U;
	uint16_t x599 = 0U;
	int16_t x600 = INT16_MAX;
	int32_t t129 = 5945;

    t129 = ((x597/x598)==(x599+x600));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MIN;
	static volatile int32_t x604 = INT32_MAX;
	volatile int32_t t130 = -46424505;

    t130 = ((x601/x602)==(x603+x604));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x605 = INT64_MIN;
	volatile int32_t x607 = INT32_MIN;
	static uint32_t x608 = 1015210980U;

    t131 = ((x605/x606)==(x607+x608));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x610 = 1LL;
	uint16_t x611 = UINT16_MAX;
	volatile int32_t x612 = INT32_MIN;
	static int32_t t132 = 966483;

    t132 = ((x609/x610)==(x611+x612));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x614 = 10U;
	volatile int16_t x616 = -2;

    t133 = ((x613/x614)==(x615+x616));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x617 = -13;
	static int8_t x619 = 20;
	volatile int32_t t134 = -5;

    t134 = ((x617/x618)==(x619+x620));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x626 = INT8_MAX;
	int16_t x627 = -1;
	int32_t x628 = -56193;
	volatile int32_t t135 = -580697;

    t135 = ((x625/x626)==(x627+x628));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x629 = 40;
	uint64_t x630 = 394235681LLU;
	uint64_t x631 = 50248942085713LLU;
	int32_t x632 = INT32_MIN;
	volatile int32_t t136 = -3;

    t136 = ((x629/x630)==(x631+x632));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x641 = INT8_MIN;
	int16_t x643 = -431;
	int32_t t137 = -846382;

    t137 = ((x641/x642)==(x643+x644));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x649 = -1;
	int8_t x650 = -1;
	static uint8_t x651 = UINT8_MAX;
	volatile int16_t x652 = -1;

    t138 = ((x649/x650)==(x651+x652));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x653 = 3;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = 1;
	uint16_t x656 = UINT16_MAX;

    t139 = ((x653/x654)==(x655+x656));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x657 = 17833226032084LL;
	static volatile int8_t x658 = INT8_MIN;
	static int8_t x659 = -3;
	static volatile uint16_t x660 = 7962U;
	static volatile int32_t t140 = 3476;

    t140 = ((x657/x658)==(x659+x660));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x661 = 16348;
	int8_t x663 = 18;
	volatile int32_t t141 = 113;

    t141 = ((x661/x662)==(x663+x664));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x669 = -1;
	volatile int16_t x670 = 1;
	volatile int32_t t142 = -890613207;

    t142 = ((x669/x670)==(x671+x672));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x673 = INT16_MIN;
	uint64_t x674 = UINT64_MAX;
	uint16_t x675 = 0U;
	int32_t x676 = -378202943;

    t143 = ((x673/x674)==(x675+x676));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x677 = 1428U;
	int8_t x679 = -1;
	static uint8_t x680 = 15U;
	volatile int32_t t144 = 2430786;

    t144 = ((x677/x678)==(x679+x680));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x681 = 1U;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = UINT32_MAX;
	volatile uint64_t x684 = 71698087892681607LLU;

    t145 = ((x681/x682)==(x683+x684));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x686 = UINT32_MAX;
	int32_t x687 = -1;
	volatile uint8_t x688 = 0U;
	volatile int32_t t146 = -7479;

    t146 = ((x685/x686)==(x687+x688));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x689 = -26;
	volatile int16_t x690 = 488;
	static volatile int8_t x691 = 1;
	volatile int32_t x692 = INT32_MIN;
	static volatile int32_t t147 = 0;

    t147 = ((x689/x690)==(x691+x692));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x693 = 23U;
	int16_t x694 = INT16_MIN;
	static int32_t x695 = 50;
	static volatile int64_t x696 = INT64_MIN;
	volatile int32_t t148 = 991696;

    t148 = ((x693/x694)==(x695+x696));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x697 = 2024LLU;
	uint16_t x698 = 16685U;
	int64_t x699 = -240725905372389LL;
	static uint8_t x700 = 0U;
	volatile int32_t t149 = -1977;

    t149 = ((x697/x698)==(x699+x700));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x701 = -75690;
	uint32_t x703 = 5035U;
	static uint64_t x704 = 32644LLU;

    t150 = ((x701/x702)==(x703+x704));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x705 = 0U;
	uint16_t x706 = 1U;
	static uint32_t x707 = 1102U;
	volatile int32_t x708 = -9;
	int32_t t151 = 8829977;

    t151 = ((x705/x706)==(x707+x708));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x709 = 1955U;
	int32_t x710 = INT32_MAX;
	uint32_t x711 = 8753178U;

    t152 = ((x709/x710)==(x711+x712));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x713 = UINT64_MAX;
	int64_t x714 = INT64_MIN;
	int8_t x715 = -1;
	int8_t x716 = INT8_MIN;
	static int32_t t153 = -100;

    t153 = ((x713/x714)==(x715+x716));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x717 = 14397U;
	volatile int64_t x718 = -1572LL;
	volatile int32_t x719 = 877332054;
	int16_t x720 = INT16_MIN;
	static volatile int32_t t154 = -1;

    t154 = ((x717/x718)==(x719+x720));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x721 = 2LLU;
	static uint64_t x722 = 153LLU;
	int32_t t155 = 29311520;

    t155 = ((x721/x722)==(x723+x724));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x725 = INT32_MIN;
	int64_t x726 = -1LL;
	static int32_t x727 = INT32_MIN;
	uint32_t x728 = 2038U;
	static int32_t t156 = 12;

    t156 = ((x725/x726)==(x727+x728));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x729 = -536;
	int32_t x730 = INT32_MAX;
	volatile int8_t x731 = -1;
	uint64_t x732 = UINT64_MAX;
	int32_t t157 = -1270976;

    t157 = ((x729/x730)==(x731+x732));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x733 = 2LL;
	volatile int32_t t158 = -8450151;

    t158 = ((x733/x734)==(x735+x736));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x737 = 258477333LLU;
	int8_t x738 = INT8_MAX;
	uint64_t x739 = UINT64_MAX;
	volatile int32_t t159 = 49785524;

    t159 = ((x737/x738)==(x739+x740));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x741 = UINT32_MAX;
	int8_t x742 = INT8_MIN;
	int16_t x743 = INT16_MIN;
	static volatile int8_t x744 = INT8_MAX;
	int32_t t160 = -14807886;

    t160 = ((x741/x742)==(x743+x744));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x745 = INT16_MIN;
	uint16_t x746 = UINT16_MAX;
	volatile int16_t x747 = INT16_MIN;
	volatile int16_t x748 = INT16_MIN;
	static volatile int32_t t161 = -39;

    t161 = ((x745/x746)==(x747+x748));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x749 = -116;
	int8_t x751 = INT8_MAX;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t162 = 0;

    t162 = ((x749/x750)==(x751+x752));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x753 = -8014;
	int64_t x754 = INT64_MIN;
	int16_t x755 = INT16_MIN;
	int16_t x756 = -47;
	int32_t t163 = -692;

    t163 = ((x753/x754)==(x755+x756));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x759 = 178833009U;

    t164 = ((x757/x758)==(x759+x760));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x765 = 54U;
	int16_t x766 = INT16_MAX;
	static volatile int64_t x767 = INT64_MIN;
	volatile uint16_t x768 = 3615U;
	static volatile int32_t t165 = -26769;

    t165 = ((x765/x766)==(x767+x768));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x769 = UINT8_MAX;
	static uint16_t x770 = 14U;
	static volatile int8_t x771 = INT8_MIN;
	int16_t x772 = -3;

    t166 = ((x769/x770)==(x771+x772));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x774 = 3;
	volatile int32_t t167 = 202;

    t167 = ((x773/x774)==(x775+x776));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x778 = INT64_MIN;
	uint16_t x779 = 58U;
	uint16_t x780 = UINT16_MAX;
	int32_t t168 = -723;

    t168 = ((x777/x778)==(x779+x780));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x781 = -1;
	int16_t x782 = -114;
	static int32_t x784 = -1;
	int32_t t169 = -1504;

    t169 = ((x781/x782)==(x783+x784));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x785 = -1;
	uint64_t x787 = 1899LLU;
	int32_t x788 = -144;
	int32_t t170 = 1;

    t170 = ((x785/x786)==(x787+x788));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x789 = UINT32_MAX;
	int32_t x792 = INT32_MAX;
	volatile int32_t t171 = -806141;

    t171 = ((x789/x790)==(x791+x792));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x793 = INT16_MIN;
	uint32_t x794 = 18100166U;
	static int32_t t172 = 167189;

    t172 = ((x793/x794)==(x795+x796));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x801 = INT16_MIN;
	int32_t x803 = INT32_MIN;
	static uint8_t x804 = 2U;
	static int32_t t173 = 52;

    t173 = ((x801/x802)==(x803+x804));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x805 = 22U;
	int64_t x806 = 129472LL;
	int16_t x807 = INT16_MAX;
	int64_t x808 = -5LL;
	static volatile int32_t t174 = 4251389;

    t174 = ((x805/x806)==(x807+x808));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x809 = 107974990;
	int64_t x811 = -1LL;
	uint64_t x812 = 1070070906000LLU;
	volatile int32_t t175 = 46035686;

    t175 = ((x809/x810)==(x811+x812));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x813 = INT8_MIN;
	volatile uint16_t x814 = 30U;
	int8_t x816 = INT8_MAX;
	volatile int32_t t176 = -2460031;

    t176 = ((x813/x814)==(x815+x816));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x817 = -1;
	uint32_t x818 = 485770U;
	volatile uint16_t x819 = 10317U;
	int16_t x820 = INT16_MAX;
	int32_t t177 = 200898;

    t177 = ((x817/x818)==(x819+x820));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x821 = -1023261467;
	volatile int32_t x822 = 744665;
	int64_t x823 = 199701591814869LL;
	volatile int64_t x824 = -1LL;
	volatile int32_t t178 = 136489;

    t178 = ((x821/x822)==(x823+x824));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x826 = INT32_MIN;
	int32_t x827 = -1;
	static int8_t x828 = -3;

    t179 = ((x825/x826)==(x827+x828));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x829 = INT16_MAX;
	int64_t x830 = 43642344LL;
	int8_t x831 = INT8_MAX;
	int8_t x832 = 7;
	static int32_t t180 = -265044635;

    t180 = ((x829/x830)==(x831+x832));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x833 = -1;
	int32_t x835 = -1;
	volatile int32_t x836 = INT32_MAX;
	volatile int32_t t181 = 110884;

    t181 = ((x833/x834)==(x835+x836));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x837 = UINT16_MAX;
	int32_t x838 = -1;
	int8_t x839 = -1;
	int64_t x840 = -13230749881155743LL;
	int32_t t182 = 151614;

    t182 = ((x837/x838)==(x839+x840));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x841 = UINT64_MAX;
	volatile int32_t t183 = 3857;

    t183 = ((x841/x842)==(x843+x844));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x853 = UINT16_MAX;
	volatile int32_t x854 = INT32_MIN;
	uint8_t x856 = 1U;
	volatile int32_t t184 = -4;

    t184 = ((x853/x854)==(x855+x856));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x857 = INT8_MAX;
	uint64_t x858 = UINT64_MAX;
	static volatile int8_t x859 = 2;
	static int8_t x860 = -1;
	int32_t t185 = 295;

    t185 = ((x857/x858)==(x859+x860));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x861 = INT32_MIN;
	int64_t x862 = INT64_MIN;
	int32_t x863 = INT32_MAX;
	static int64_t x864 = INT64_MIN;
	int32_t t186 = 177025;

    t186 = ((x861/x862)==(x863+x864));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x865 = INT64_MIN;
	int8_t x866 = INT8_MIN;
	static int8_t x867 = 44;
	uint64_t x868 = 5613LLU;
	volatile int32_t t187 = -5;

    t187 = ((x865/x866)==(x867+x868));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x869 = UINT64_MAX;
	static int32_t x870 = -218372;
	uint8_t x871 = 0U;
	volatile int64_t x872 = INT64_MAX;
	volatile int32_t t188 = 302222;

    t188 = ((x869/x870)==(x871+x872));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x873 = INT64_MIN;
	static int8_t x874 = -49;
	static int64_t x875 = -1LL;
	int8_t x876 = INT8_MIN;
	volatile int32_t t189 = -30226;

    t189 = ((x873/x874)==(x875+x876));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x877 = 11304389391942550LLU;
	uint32_t x878 = 24U;
	uint32_t x879 = UINT32_MAX;
	volatile int8_t x880 = INT8_MIN;

    t190 = ((x877/x878)==(x879+x880));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x886 = INT32_MIN;
	static int16_t x887 = -1;
	volatile int16_t x888 = INT16_MAX;

    t191 = ((x885/x886)==(x887+x888));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x889 = INT16_MIN;
	int32_t x890 = INT32_MIN;
	int64_t x891 = -38860108977LL;
	static uint16_t x892 = 1U;
	static volatile int32_t t192 = -91;

    t192 = ((x889/x890)==(x891+x892));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x893 = UINT64_MAX;
	static int32_t x894 = -1;
	static int16_t x895 = INT16_MIN;
	uint32_t x896 = 9U;
	volatile int32_t t193 = 18;

    t193 = ((x893/x894)==(x895+x896));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x901 = UINT64_MAX;
	static volatile int32_t x902 = 105734227;
	int64_t x903 = INT64_MIN;
	int32_t t194 = -1929313;

    t194 = ((x901/x902)==(x903+x904));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x905 = 11U;
	int16_t x907 = INT16_MIN;
	uint32_t x908 = UINT32_MAX;
	static int32_t t195 = 16;

    t195 = ((x905/x906)==(x907+x908));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x909 = -9;
	int64_t x910 = -1LL;
	uint16_t x911 = 31U;
	static volatile int32_t t196 = 894226475;

    t196 = ((x909/x910)==(x911+x912));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x913 = -44184881LL;
	int32_t x914 = -2719;
	volatile int32_t x915 = INT32_MIN;
	volatile int32_t t197 = 76;

    t197 = ((x913/x914)==(x915+x916));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x918 = 52U;
	int64_t x919 = INT64_MIN;
	int32_t t198 = 572;

    t198 = ((x917/x918)==(x919+x920));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x923 = UINT32_MAX;
	volatile int32_t t199 = 32479090;

    t199 = ((x921/x922)==(x923+x924));

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

