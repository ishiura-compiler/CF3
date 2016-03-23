
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

static int8_t x4 = 13;
volatile int8_t x8 = INT8_MAX;
int32_t t2 = 93970680;
uint16_t x13 = UINT16_MAX;
uint8_t x16 = UINT8_MAX;
int32_t t5 = -45233;
int32_t t6 = -210;
int64_t x44 = 132837LL;
int16_t x50 = INT16_MAX;
int64_t x52 = 25726720584220LL;
static volatile int32_t t11 = 0;
static uint64_t x73 = 4112LLU;
uint16_t x89 = 22U;
int32_t t18 = 344756914;
volatile uint32_t x112 = 50402U;
volatile int32_t t21 = -119936917;
int16_t x119 = INT16_MAX;
int16_t x124 = INT16_MAX;
volatile int32_t x126 = -142503638;
static int8_t x130 = INT8_MIN;
int8_t x132 = -1;
int64_t x140 = INT64_MIN;
int32_t x145 = 101713;
int32_t t29 = 2132;
uint16_t x171 = UINT16_MAX;
uint64_t x188 = UINT64_MAX;
int64_t x189 = -717LL;
volatile int32_t x192 = INT32_MIN;
volatile int16_t x193 = -1;
uint8_t x206 = UINT8_MAX;
int16_t x207 = INT16_MIN;
volatile int32_t t41 = -466312;
int32_t x214 = 122853566;
volatile int16_t x219 = 26;
int32_t t45 = 2420;
volatile uint32_t x232 = 16146U;
uint16_t x235 = UINT16_MAX;
uint32_t x236 = 10883653U;
volatile int32_t t48 = 1;
uint8_t x246 = 0U;
static uint16_t x266 = 40U;
int32_t t53 = -9;
volatile int8_t x282 = 49;
int16_t x283 = -1;
volatile int32_t t54 = 1000433;
volatile uint32_t x285 = UINT32_MAX;
int16_t x286 = 0;
static uint64_t x294 = 6362273817197086LLU;
static int32_t t57 = -10;
int16_t x302 = -49;
uint16_t x320 = 4808U;
uint32_t x321 = 60197U;
volatile uint64_t x322 = 120LLU;
int64_t x323 = -1289146LL;
int8_t x329 = 1;
int64_t x330 = -27202LL;
uint32_t x336 = 11U;
int32_t t64 = -1;
volatile int32_t t65 = 10;
volatile int8_t x362 = 25;
uint16_t x363 = 50U;
volatile int8_t x371 = -1;
int32_t t71 = 244;
int8_t x381 = INT8_MAX;
int8_t x388 = -62;
int32_t x398 = INT32_MAX;
uint8_t x411 = UINT8_MAX;
volatile int32_t t76 = 2;
int64_t x415 = -1LL;
static int64_t x425 = -1LL;
static volatile int32_t t79 = 17;
int16_t x435 = 469;
static volatile int32_t t80 = 7854;
uint32_t x437 = UINT32_MAX;
static int32_t x438 = INT32_MAX;
uint64_t x445 = 98648651035927345LLU;
uint16_t x447 = 0U;
static uint8_t x455 = 76U;
int32_t t84 = -341913;
uint16_t x462 = 1505U;
volatile int32_t t85 = 876558;
static uint16_t x466 = 32536U;
int8_t x468 = INT8_MAX;
int8_t x472 = 29;
int32_t t87 = 66251994;
static volatile uint32_t x479 = 154U;
volatile int8_t x484 = INT8_MIN;
int32_t t90 = 721;
static uint16_t x496 = 12U;
int32_t x497 = 1420;
int8_t x503 = 1;
volatile int32_t t93 = 312;
int8_t x506 = INT8_MAX;
int32_t x513 = -49381;
int8_t x520 = 21;
volatile int32_t t97 = -1;
volatile int32_t t98 = 6241424;
int16_t x525 = INT16_MAX;
volatile int16_t x537 = -1;
volatile int8_t x546 = 1;
int8_t x549 = INT8_MAX;
int32_t x579 = INT32_MIN;
int16_t x582 = -1;
static int64_t x584 = INT64_MIN;
volatile int8_t x602 = -1;
uint8_t x603 = UINT8_MAX;
uint16_t x626 = 84U;
uint16_t x633 = 0U;
uint64_t x639 = UINT64_MAX;
uint8_t x649 = 12U;
uint64_t x655 = 93LLU;
int64_t x670 = -1LL;
uint16_t x671 = UINT16_MAX;
int16_t x673 = INT16_MIN;
int16_t x674 = -537;
static int64_t x676 = 18949470LL;
int32_t x677 = 6;
static uint32_t x684 = 3U;
int8_t x685 = INT8_MIN;
volatile int64_t x693 = 254854LL;
int8_t x695 = INT8_MAX;
int32_t t130 = -77;
int32_t x709 = -1;
int16_t x711 = -82;
uint64_t x721 = 1392566708000LLU;
int32_t x722 = -1;
static uint16_t x723 = 3327U;
volatile int8_t x724 = INT8_MIN;
uint64_t x725 = 38356198861317531LLU;
uint32_t x745 = UINT32_MAX;
int64_t x746 = 3LL;
static int64_t x748 = 351LL;
uint8_t x756 = 43U;
uint64_t x764 = 944220203449427604LLU;
int32_t t143 = -124754500;
volatile int32_t t144 = -193021223;
int32_t t145 = -133;
uint32_t x777 = UINT32_MAX;
volatile int8_t x782 = INT8_MAX;
int8_t x788 = -15;
uint16_t x796 = 1667U;
static int32_t t151 = 1263349;
volatile int64_t x805 = INT64_MIN;
uint8_t x829 = UINT8_MAX;
static uint64_t x835 = 2277412798726821854LLU;
int32_t x840 = 96;
static int64_t x869 = -2677558372012570LL;
volatile uint8_t x871 = UINT8_MAX;
static volatile int32_t t167 = 17;
int8_t x909 = INT8_MIN;
static int8_t x910 = INT8_MIN;
static int64_t x922 = -14166LL;
volatile uint64_t x925 = 3871926LLU;
volatile int64_t x935 = -24085LL;
static int32_t x936 = -7396;
int32_t t172 = 1;
int8_t x952 = -60;
int8_t x960 = INT8_MAX;
int64_t x970 = INT64_MAX;
static int8_t x975 = INT8_MIN;
static volatile int32_t t179 = 9959;
int32_t t180 = 1;
uint64_t x992 = UINT64_MAX;
static int32_t x995 = 42;
int32_t t182 = -9474113;
int16_t x1015 = INT16_MIN;
uint16_t x1016 = 6770U;
int16_t x1041 = INT16_MIN;
int16_t x1042 = -1;
uint64_t x1046 = 6293196384620991313LLU;
volatile int32_t t191 = 2529;
volatile uint32_t x1050 = UINT32_MAX;
volatile int16_t x1051 = 3055;
int32_t x1069 = INT32_MIN;
volatile uint64_t x1070 = UINT64_MAX;
static volatile int8_t x1071 = 1;
static int8_t x1072 = INT8_MAX;
int8_t x1085 = -1;
int32_t t199 = 1634;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile uint64_t x2 = 5LLU;
	uint16_t x3 = 105U;
	int32_t t0 = -6;

    t0 = ((x1-(x2*x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -115;
	uint32_t x6 = 28852U;
	static int16_t x7 = -13647;
	volatile int32_t t1 = -743555;

    t1 = ((x5-(x6*x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MAX;
	int8_t x11 = -1;
	static volatile int32_t x12 = -1;

    t2 = ((x9-(x10*x11))!=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = -1;
	volatile int16_t x15 = -1;
	static int32_t t3 = -43029986;

    t3 = ((x13-(x14*x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x25 = -7;
	uint32_t x26 = 306918U;
	int32_t x27 = INT32_MIN;
	volatile uint32_t x28 = UINT32_MAX;
	static int32_t t4 = -1;

    t4 = ((x25-(x26*x27))!=x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1LL;
	uint8_t x30 = 25U;
	int8_t x31 = INT8_MAX;
	int16_t x32 = INT16_MIN;

    t5 = ((x29-(x30*x31))!=x32);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = INT32_MIN;
	static int8_t x34 = INT8_MIN;
	volatile int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;

    t6 = ((x33-(x34*x35))!=x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = -1;
	int8_t x42 = INT8_MIN;
	static uint32_t x43 = 1329789U;
	static volatile int32_t t7 = -301;

    t7 = ((x41-(x42*x43))!=x44);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x45 = INT16_MIN;
	int16_t x46 = -1710;
	volatile uint32_t x47 = 7U;
	volatile uint8_t x48 = UINT8_MAX;
	int32_t t8 = 219098615;

    t8 = ((x45-(x46*x47))!=x48);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x49 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	volatile int32_t t9 = -6015;

    t9 = ((x49-(x50*x51))!=x52);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 81U;
	static volatile int8_t x55 = INT8_MAX;
	int32_t x56 = -1;
	static int32_t t10 = -568;

    t10 = ((x53-(x54*x55))!=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = UINT64_MAX;
	volatile int64_t x58 = INT64_MIN;
	uint8_t x59 = 0U;
	int32_t x60 = INT32_MIN;

    t11 = ((x57-(x58*x59))!=x60);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x65 = 26886901LLU;
	int8_t x66 = INT8_MIN;
	volatile int64_t x67 = -1LL;
	uint32_t x68 = 148606446U;
	volatile int32_t t12 = -14989938;

    t12 = ((x65-(x66*x67))!=x68);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = 58;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	static int32_t t13 = 7422337;

    t13 = ((x69-(x70*x71))!=x72);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x74 = UINT16_MAX;
	int8_t x75 = 26;
	uint32_t x76 = 27U;
	volatile int32_t t14 = 10202;

    t14 = ((x73-(x74*x75))!=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = 189718278642886157LL;
	volatile uint64_t x78 = 44684266335LLU;
	static int8_t x79 = 0;
	uint64_t x80 = 202004278813533428LLU;
	int32_t t15 = -63271384;

    t15 = ((x77-(x78*x79))!=x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = -1;
	int8_t x86 = -1;
	volatile int32_t x87 = INT32_MAX;
	int64_t x88 = INT64_MAX;
	volatile int32_t t16 = -2692236;

    t16 = ((x85-(x86*x87))!=x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x90 = -1LL;
	int32_t x91 = INT32_MAX;
	static int64_t x92 = -1LL;
	static volatile int32_t t17 = -1448;

    t17 = ((x89-(x90*x91))!=x92);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = INT8_MIN;
	uint32_t x94 = 222U;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = 13044308;

    t18 = ((x93-(x94*x95))!=x96);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x101 = 6U;
	static uint8_t x102 = 0U;
	uint64_t x103 = 103582462473499592LLU;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t19 = 399;

    t19 = ((x101-(x102*x103))!=x104);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x105 = 12064;
	uint8_t x106 = UINT8_MAX;
	static int32_t x107 = -1;
	volatile int16_t x108 = INT16_MAX;
	int32_t t20 = -16;

    t20 = ((x105-(x106*x107))!=x108);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = 13947LLU;
	int16_t x110 = -1;
	uint8_t x111 = 4U;

    t21 = ((x109-(x110*x111))!=x112);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	static int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MAX;
	int32_t t22 = 30577;

    t22 = ((x113-(x114*x115))!=x116);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x117 = -3;
	int64_t x118 = -9888003LL;
	int16_t x120 = INT16_MIN;
	int32_t t23 = 3;

    t23 = ((x117-(x118*x119))!=x120);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = -64128280690LL;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MAX;
	int32_t t24 = 11726;

    t24 = ((x121-(x122*x123))!=x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = 3630LL;
	uint8_t x127 = 3U;
	uint8_t x128 = 5U;
	static volatile int32_t t25 = -723883982;

    t25 = ((x125-(x126*x127))!=x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x129 = 5657924;
	volatile uint16_t x131 = UINT16_MAX;
	int32_t t26 = -12715888;

    t26 = ((x129-(x130*x131))!=x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x133 = 1U;
	uint8_t x134 = UINT8_MAX;
	static int16_t x135 = -1;
	volatile int16_t x136 = -1;
	volatile int32_t t27 = -4;

    t27 = ((x133-(x134*x135))!=x136);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x137 = 10U;
	int64_t x138 = -1LL;
	uint32_t x139 = 311286108U;
	volatile int32_t t28 = -190012290;

    t28 = ((x137-(x138*x139))!=x140);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x146 = INT8_MIN;
	static uint32_t x147 = 20081259U;
	int8_t x148 = 1;

    t29 = ((x145-(x146*x147))!=x148);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x149 = 29959017320346LLU;
	int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	uint32_t x152 = 72509368U;
	int32_t t30 = 241;

    t30 = ((x149-(x150*x151))!=x152);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x157 = -1;
	int16_t x158 = INT16_MAX;
	static volatile int64_t x159 = -1LL;
	uint64_t x160 = 1155LLU;
	volatile int32_t t31 = 2598094;

    t31 = ((x157-(x158*x159))!=x160);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x169 = 63794201LLU;
	uint32_t x170 = 289654U;
	int16_t x172 = -1;
	static int32_t t32 = 3278;

    t32 = ((x169-(x170*x171))!=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x173 = INT16_MIN;
	int16_t x174 = 1;
	uint32_t x175 = 216U;
	int16_t x176 = INT16_MAX;
	int32_t t33 = -739;

    t33 = ((x173-(x174*x175))!=x176);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x177 = -9;
	volatile int8_t x178 = -18;
	int64_t x179 = -1LL;
	volatile int32_t x180 = -1;
	static int32_t t34 = -410181693;

    t34 = ((x177-(x178*x179))!=x180);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x185 = 84U;
	uint64_t x186 = 3000LLU;
	int64_t x187 = INT64_MAX;
	int32_t t35 = 759688204;

    t35 = ((x185-(x186*x187))!=x188);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x190 = 28U;
	static int16_t x191 = -1;
	volatile int32_t t36 = 7;

    t36 = ((x189-(x190*x191))!=x192);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	static volatile int32_t x196 = INT32_MAX;
	int32_t t37 = -93084120;

    t37 = ((x193-(x194*x195))!=x196);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x197 = INT64_MIN;
	static volatile int16_t x198 = INT16_MAX;
	uint64_t x199 = 259356LLU;
	uint32_t x200 = 905U;
	int32_t t38 = -77;

    t38 = ((x197-(x198*x199))!=x200);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x201 = INT32_MIN;
	uint8_t x202 = 1U;
	int8_t x203 = -11;
	int8_t x204 = -1;
	volatile int32_t t39 = -3206634;

    t39 = ((x201-(x202*x203))!=x204);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x205 = -1LL;
	int16_t x208 = INT16_MIN;
	volatile int32_t t40 = 285446938;

    t40 = ((x205-(x206*x207))!=x208);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MIN;
	static uint64_t x211 = 63179225140838611LLU;
	int16_t x212 = INT16_MIN;

    t41 = ((x209-(x210*x211))!=x212);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x213 = INT16_MAX;
	int8_t x215 = -1;
	static volatile uint8_t x216 = 0U;
	int32_t t42 = -562904;

    t42 = ((x213-(x214*x215))!=x216);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x217 = -814LL;
	uint64_t x218 = 8070LLU;
	volatile int64_t x220 = INT64_MIN;
	int32_t t43 = 3;

    t43 = ((x217-(x218*x219))!=x220);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x221 = 3U;
	static int8_t x222 = INT8_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	int8_t x224 = -1;
	volatile int32_t t44 = -466;

    t44 = ((x221-(x222*x223))!=x224);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = 1;
	int16_t x226 = 15831;
	volatile uint64_t x227 = 12001890LLU;
	uint32_t x228 = UINT32_MAX;

    t45 = ((x225-(x226*x227))!=x228);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MAX;
	volatile uint16_t x231 = 1U;
	volatile int32_t t46 = 24720033;

    t46 = ((x229-(x230*x231))!=x232);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x233 = UINT32_MAX;
	uint32_t x234 = UINT32_MAX;
	static volatile int32_t t47 = 5;

    t47 = ((x233-(x234*x235))!=x236);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x237 = UINT8_MAX;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = 470136U;
	int32_t x240 = INT32_MAX;

    t48 = ((x237-(x238*x239))!=x240);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x245 = -1;
	uint8_t x247 = UINT8_MAX;
	volatile int8_t x248 = INT8_MIN;
	int32_t t49 = 15962;

    t49 = ((x245-(x246*x247))!=x248);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x249 = -207548871;
	volatile int32_t x250 = -1;
	static int8_t x251 = INT8_MIN;
	int32_t x252 = -111;
	volatile int32_t t50 = 52;

    t50 = ((x249-(x250*x251))!=x252);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x253 = 14888051LL;
	int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = 0U;
	static uint64_t x256 = 40422861255LLU;
	static volatile int32_t t51 = -1;

    t51 = ((x253-(x254*x255))!=x256);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x261 = 0;
	static uint8_t x262 = UINT8_MAX;
	volatile uint8_t x263 = 27U;
	volatile int64_t x264 = -1LL;
	int32_t t52 = 7262502;

    t52 = ((x261-(x262*x263))!=x264);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x265 = 2641LLU;
	static int64_t x267 = 1708673304113LL;
	int16_t x268 = INT16_MIN;

    t53 = ((x265-(x266*x267))!=x268);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int16_t x284 = 1555;

    t54 = ((x281-(x282*x283))!=x284);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x287 = 1U;
	static uint16_t x288 = 164U;
	volatile int32_t t55 = -37438;

    t55 = ((x285-(x286*x287))!=x288);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x295 = INT16_MAX;
	uint32_t x296 = 32U;
	volatile int32_t t56 = 1;

    t56 = ((x293-(x294*x295))!=x296);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x297 = UINT32_MAX;
	uint8_t x298 = 0U;
	uint32_t x299 = UINT32_MAX;
	volatile uint16_t x300 = 2684U;

    t57 = ((x297-(x298*x299))!=x300);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x301 = -2;
	volatile int8_t x303 = INT8_MIN;
	static int32_t x304 = INT32_MAX;
	volatile int32_t t58 = -1;

    t58 = ((x301-(x302*x303))!=x304);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	uint64_t x311 = 13992LLU;
	int16_t x312 = INT16_MIN;
	volatile int32_t t59 = -15;

    t59 = ((x309-(x310*x311))!=x312);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	int32_t x319 = 1;
	int32_t t60 = 5437;

    t60 = ((x317-(x318*x319))!=x320);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x324 = INT16_MAX;
	volatile int32_t t61 = 1;

    t61 = ((x321-(x322*x323))!=x324);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x325 = 206LLU;
	int8_t x326 = -1;
	uint32_t x327 = 286U;
	uint8_t x328 = 0U;
	static int32_t t62 = -2205324;

    t62 = ((x325-(x326*x327))!=x328);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x331 = 4664;
	int16_t x332 = INT16_MIN;
	static int32_t t63 = -361663;

    t63 = ((x329-(x330*x331))!=x332);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x333 = -7;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = -112051056301LL;

    t64 = ((x333-(x334*x335))!=x336);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x349 = 5LLU;
	uint8_t x350 = 5U;
	uint64_t x351 = 2490847332958297958LLU;
	static uint32_t x352 = 16015U;

    t65 = ((x349-(x350*x351))!=x352);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x353 = -1;
	static int8_t x354 = -1;
	volatile uint16_t x355 = 3U;
	int64_t x356 = INT64_MIN;
	int32_t t66 = 62140360;

    t66 = ((x353-(x354*x355))!=x356);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x357 = UINT32_MAX;
	static uint16_t x358 = 22U;
	int32_t x359 = -1;
	static int32_t x360 = -1;
	int32_t t67 = -8;

    t67 = ((x357-(x358*x359))!=x360);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x361 = INT16_MIN;
	int8_t x364 = -1;
	volatile int32_t t68 = 60286;

    t68 = ((x361-(x362*x363))!=x364);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x365 = 2U;
	int8_t x366 = 63;
	int8_t x367 = 34;
	int8_t x368 = -5;
	volatile int32_t t69 = 9876;

    t69 = ((x365-(x366*x367))!=x368);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	int32_t x370 = 610910299;
	int64_t x372 = INT64_MIN;
	static int32_t t70 = -11443;

    t70 = ((x369-(x370*x371))!=x372);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = 8;
	static int16_t x375 = INT16_MIN;
	uint32_t x376 = 412103053U;

    t71 = ((x373-(x374*x375))!=x376);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x382 = INT32_MAX;
	uint32_t x383 = UINT32_MAX;
	volatile int16_t x384 = INT16_MIN;
	static volatile int32_t t72 = 6350;

    t72 = ((x381-(x382*x383))!=x384);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x385 = -12849101717LL;
	uint32_t x386 = UINT32_MAX;
	volatile int32_t x387 = -1;
	volatile int32_t t73 = 0;

    t73 = ((x385-(x386*x387))!=x388);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x397 = INT16_MIN;
	static int16_t x399 = -1;
	uint16_t x400 = 0U;
	static volatile int32_t t74 = 34668;

    t74 = ((x397-(x398*x399))!=x400);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x405 = INT64_MIN;
	uint16_t x406 = UINT16_MAX;
	uint8_t x407 = 0U;
	int64_t x408 = INT64_MAX;
	static volatile int32_t t75 = -52;

    t75 = ((x405-(x406*x407))!=x408);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x409 = 23213U;
	static int8_t x410 = -1;
	uint32_t x412 = 90U;

    t76 = ((x409-(x410*x411))!=x412);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x413 = UINT64_MAX;
	uint16_t x414 = 1656U;
	int64_t x416 = INT64_MIN;
	static volatile int32_t t77 = -245175107;

    t77 = ((x413-(x414*x415))!=x416);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x421 = INT64_MIN;
	uint64_t x422 = 998356724293LLU;
	int8_t x423 = -1;
	int32_t x424 = 9129;
	int32_t t78 = 125;

    t78 = ((x421-(x422*x423))!=x424);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x426 = 25136691084878836LLU;
	int64_t x427 = INT64_MIN;
	int64_t x428 = -30567436120LL;

    t79 = ((x425-(x426*x427))!=x428);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x433 = INT64_MIN;
	int8_t x434 = -8;
	int8_t x436 = 0;

    t80 = ((x433-(x434*x435))!=x436);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x439 = 1LLU;
	uint64_t x440 = 37562869558375LLU;
	volatile int32_t t81 = -134494;

    t81 = ((x437-(x438*x439))!=x440);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x441 = 50U;
	int8_t x442 = 1;
	int16_t x443 = INT16_MAX;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t82 = 173088;

    t82 = ((x441-(x442*x443))!=x444);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x446 = -16019;
	uint32_t x448 = 4381499U;
	static int32_t t83 = -19;

    t83 = ((x445-(x446*x447))!=x448);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x453 = UINT16_MAX;
	static uint8_t x454 = UINT8_MAX;
	static uint8_t x456 = UINT8_MAX;

    t84 = ((x453-(x454*x455))!=x456);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x461 = -1;
	static int16_t x463 = -153;
	int16_t x464 = -12628;

    t85 = ((x461-(x462*x463))!=x464);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x465 = INT32_MIN;
	int16_t x467 = -14;
	int32_t t86 = -19222799;

    t86 = ((x465-(x466*x467))!=x468);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x469 = 2LL;
	uint8_t x470 = 37U;
	int8_t x471 = -6;

    t87 = ((x469-(x470*x471))!=x472);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x477 = 31U;
	volatile int16_t x478 = -1;
	int16_t x480 = -1;
	volatile int32_t t88 = 50;

    t88 = ((x477-(x478*x479))!=x480);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x481 = -57569554LL;
	int16_t x482 = 20;
	uint8_t x483 = 0U;
	volatile int32_t t89 = 22;

    t89 = ((x481-(x482*x483))!=x484);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x485 = 267;
	static int16_t x486 = INT16_MIN;
	int64_t x487 = -3827221954LL;
	int64_t x488 = 1789348845847481925LL;

    t90 = ((x485-(x486*x487))!=x488);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x493 = -1;
	uint16_t x494 = 552U;
	int64_t x495 = -1LL;
	volatile int32_t t91 = -148090860;

    t91 = ((x493-(x494*x495))!=x496);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x498 = UINT64_MAX;
	int64_t x499 = 3306303LL;
	uint32_t x500 = UINT32_MAX;
	static volatile int32_t t92 = 0;

    t92 = ((x497-(x498*x499))!=x500);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x501 = INT32_MAX;
	static uint8_t x502 = 76U;
	volatile int16_t x504 = -1;

    t93 = ((x501-(x502*x503))!=x504);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MAX;
	int32_t t94 = -1;

    t94 = ((x505-(x506*x507))!=x508);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x509 = INT16_MIN;
	static int8_t x510 = INT8_MIN;
	int16_t x511 = INT16_MIN;
	static int64_t x512 = 5081829LL;
	int32_t t95 = -13379720;

    t95 = ((x509-(x510*x511))!=x512);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x514 = INT32_MIN;
	volatile uint32_t x515 = 3820199U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t96 = 1248;

    t96 = ((x513-(x514*x515))!=x516);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int32_t x518 = INT32_MIN;
	int64_t x519 = -1LL;

    t97 = ((x517-(x518*x519))!=x520);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x521 = INT8_MIN;
	uint64_t x522 = 1LLU;
	int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MAX;

    t98 = ((x521-(x522*x523))!=x524);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x526 = 1U;
	int8_t x527 = INT8_MAX;
	static uint32_t x528 = 23658007U;
	static int32_t t99 = 278;

    t99 = ((x525-(x526*x527))!=x528);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x538 = -1LL;
	uint64_t x539 = 460654377LLU;
	static uint32_t x540 = 14U;
	volatile int32_t t100 = -39735;

    t100 = ((x537-(x538*x539))!=x540);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x541 = 0;
	uint16_t x542 = 31U;
	int16_t x543 = -1;
	uint64_t x544 = 31137377059641029LLU;
	static volatile int32_t t101 = -567061792;

    t101 = ((x541-(x542*x543))!=x544);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x545 = -1;
	int8_t x547 = 5;
	static volatile uint16_t x548 = 7441U;
	volatile int32_t t102 = -760717575;

    t102 = ((x545-(x546*x547))!=x548);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x550 = -1;
	volatile int64_t x551 = -1LL;
	int64_t x552 = INT64_MAX;
	static int32_t t103 = -536170;

    t103 = ((x549-(x550*x551))!=x552);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x553 = 13026941958139340LLU;
	volatile int8_t x554 = 5;
	volatile int8_t x555 = INT8_MIN;
	volatile int16_t x556 = INT16_MIN;
	volatile int32_t t104 = -995240;

    t104 = ((x553-(x554*x555))!=x556);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x557 = 0U;
	uint32_t x558 = 887403012U;
	uint8_t x559 = 0U;
	int64_t x560 = -1LL;
	static volatile int32_t t105 = 1601;

    t105 = ((x557-(x558*x559))!=x560);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint32_t x569 = 277285970U;
	int16_t x570 = -17;
	int32_t x571 = 250;
	int32_t x572 = -1;
	static volatile int32_t t106 = -829;

    t106 = ((x569-(x570*x571))!=x572);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x577 = 26712LL;
	uint32_t x578 = 313026U;
	int64_t x580 = 15461266181LL;
	volatile int32_t t107 = -36866;

    t107 = ((x577-(x578*x579))!=x580);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x581 = INT8_MAX;
	volatile int64_t x583 = -961LL;
	int32_t t108 = 3013;

    t108 = ((x581-(x582*x583))!=x584);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x589 = INT16_MIN;
	int8_t x590 = INT8_MIN;
	int8_t x591 = INT8_MAX;
	volatile uint8_t x592 = UINT8_MAX;
	int32_t t109 = -7;

    t109 = ((x589-(x590*x591))!=x592);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x597 = INT16_MIN;
	uint16_t x598 = UINT16_MAX;
	int8_t x599 = INT8_MIN;
	uint32_t x600 = 4081U;
	volatile int32_t t110 = -76;

    t110 = ((x597-(x598*x599))!=x600);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x601 = -2045471LL;
	int16_t x604 = -1;
	int32_t t111 = -30062922;

    t111 = ((x601-(x602*x603))!=x604);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x605 = INT16_MAX;
	volatile uint64_t x606 = 225909492LLU;
	volatile int32_t x607 = INT32_MIN;
	static volatile int16_t x608 = INT16_MAX;
	int32_t t112 = 146645;

    t112 = ((x605-(x606*x607))!=x608);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x617 = INT8_MIN;
	int32_t x618 = -1;
	uint64_t x619 = 98163LLU;
	static int16_t x620 = -1;
	volatile int32_t t113 = -83252;

    t113 = ((x617-(x618*x619))!=x620);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x625 = 8707U;
	int8_t x627 = INT8_MIN;
	static volatile uint8_t x628 = 113U;
	volatile int32_t t114 = 170;

    t114 = ((x625-(x626*x627))!=x628);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x629 = 381719682U;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 32962561LLU;
	int64_t x632 = INT64_MIN;
	int32_t t115 = -5585896;

    t115 = ((x629-(x630*x631))!=x632);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x634 = -1;
	int64_t x635 = 12980076LL;
	volatile uint8_t x636 = 0U;
	volatile int32_t t116 = -1;

    t116 = ((x633-(x634*x635))!=x636);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = 0;
	int32_t x640 = -142157496;
	int32_t t117 = 28857882;

    t117 = ((x637-(x638*x639))!=x640);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = UINT64_MAX;
	static volatile uint16_t x647 = 31351U;
	static int32_t x648 = 1993982;
	int32_t t118 = -83208751;

    t118 = ((x645-(x646*x647))!=x648);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x650 = 26U;
	uint16_t x651 = UINT16_MAX;
	static int16_t x652 = -158;
	int32_t t119 = -21;

    t119 = ((x649-(x650*x651))!=x652);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x653 = INT64_MIN;
	uint16_t x654 = 61U;
	int32_t x656 = -1;
	int32_t t120 = -43104;

    t120 = ((x653-(x654*x655))!=x656);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x669 = -87;
	int32_t x672 = INT32_MIN;
	static int32_t t121 = 10;

    t121 = ((x669-(x670*x671))!=x672);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x675 = INT16_MIN;
	volatile int32_t t122 = -15;

    t122 = ((x673-(x674*x675))!=x676);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x678 = -1;
	volatile uint64_t x679 = UINT64_MAX;
	volatile int32_t x680 = -118821431;
	volatile int32_t t123 = -1;

    t123 = ((x677-(x678*x679))!=x680);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x681 = INT64_MAX;
	int16_t x682 = -1;
	static uint64_t x683 = UINT64_MAX;
	static volatile int32_t t124 = 1012;

    t124 = ((x681-(x682*x683))!=x684);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x686 = UINT32_MAX;
	uint64_t x687 = UINT64_MAX;
	uint16_t x688 = 339U;
	volatile int32_t t125 = -28;

    t125 = ((x685-(x686*x687))!=x688);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x689 = 912307LL;
	uint16_t x690 = UINT16_MAX;
	uint32_t x691 = 62U;
	uint32_t x692 = 1759U;
	volatile int32_t t126 = 1;

    t126 = ((x689-(x690*x691))!=x692);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x694 = 0;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t127 = -3657;

    t127 = ((x693-(x694*x695))!=x696);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x697 = INT16_MAX;
	static int32_t x698 = 10496;
	int16_t x699 = INT16_MIN;
	static int8_t x700 = 3;
	static int32_t t128 = -598402;

    t128 = ((x697-(x698*x699))!=x700);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x701 = 0;
	int8_t x702 = -1;
	volatile int16_t x703 = INT16_MIN;
	int64_t x704 = -1LL;
	int32_t t129 = 0;

    t129 = ((x701-(x702*x703))!=x704);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x705 = -1;
	static volatile uint64_t x706 = 17178527734877041LLU;
	static int64_t x707 = INT64_MIN;
	static int16_t x708 = -1;

    t130 = ((x705-(x706*x707))!=x708);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x710 = 3074U;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t131 = -16882779;

    t131 = ((x709-(x710*x711))!=x712);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x713 = INT8_MIN;
	static int16_t x714 = -1;
	volatile int32_t x715 = -1;
	int32_t x716 = INT32_MIN;
	int32_t t132 = -5341;

    t132 = ((x713-(x714*x715))!=x716);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x717 = -1;
	int16_t x718 = INT16_MIN;
	static int32_t x719 = 3254;
	static int64_t x720 = INT64_MIN;
	static volatile int32_t t133 = 0;

    t133 = ((x717-(x718*x719))!=x720);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t t134 = 35473501;

    t134 = ((x721-(x722*x723))!=x724);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x726 = -1;
	static int64_t x727 = -1LL;
	int32_t x728 = INT32_MAX;
	int32_t t135 = 0;

    t135 = ((x725-(x726*x727))!=x728);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x733 = INT8_MIN;
	volatile int8_t x734 = 1;
	int8_t x735 = INT8_MAX;
	uint16_t x736 = UINT16_MAX;
	volatile int32_t t136 = 19;

    t136 = ((x733-(x734*x735))!=x736);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x737 = 244131268U;
	int32_t x738 = INT32_MIN;
	volatile uint64_t x739 = UINT64_MAX;
	int16_t x740 = 4;
	static int32_t t137 = -1677;

    t137 = ((x737-(x738*x739))!=x740);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x741 = 13U;
	static int8_t x742 = INT8_MAX;
	uint32_t x743 = 14U;
	int64_t x744 = 7162033LL;
	int32_t t138 = 0;

    t138 = ((x741-(x742*x743))!=x744);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x747 = 26;
	volatile int32_t t139 = -63;

    t139 = ((x745-(x746*x747))!=x748);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x749 = UINT64_MAX;
	int16_t x750 = 0;
	volatile uint16_t x751 = 5U;
	int32_t x752 = 335629;
	volatile int32_t t140 = 112484;

    t140 = ((x749-(x750*x751))!=x752);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x753 = -1;
	int8_t x754 = -1;
	static uint16_t x755 = UINT16_MAX;
	static volatile int32_t t141 = -48837;

    t141 = ((x753-(x754*x755))!=x756);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x757 = -1;
	volatile uint16_t x758 = UINT16_MAX;
	static volatile uint64_t x759 = UINT64_MAX;
	int64_t x760 = -6194259LL;
	int32_t t142 = -2;

    t142 = ((x757-(x758*x759))!=x760);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x761 = 8017714928100828LL;
	uint16_t x762 = 1494U;
	static int16_t x763 = INT16_MAX;

    t143 = ((x761-(x762*x763))!=x764);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x765 = 62;
	uint16_t x766 = 134U;
	int8_t x767 = 1;
	static int8_t x768 = 1;

    t144 = ((x765-(x766*x767))!=x768);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x769 = -1LL;
	volatile int8_t x770 = -1;
	uint32_t x771 = 1375752307U;
	int64_t x772 = -1LL;

    t145 = ((x769-(x770*x771))!=x772);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x773 = 7698971726815603793LLU;
	int64_t x774 = INT64_MIN;
	static int8_t x775 = 1;
	uint8_t x776 = 1U;
	static int32_t t146 = 15;

    t146 = ((x773-(x774*x775))!=x776);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x778 = INT16_MIN;
	int16_t x779 = INT16_MAX;
	int16_t x780 = INT16_MAX;
	int32_t t147 = 3;

    t147 = ((x777-(x778*x779))!=x780);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x781 = UINT64_MAX;
	int16_t x783 = -1;
	volatile uint64_t x784 = UINT64_MAX;
	volatile int32_t t148 = -6483;

    t148 = ((x781-(x782*x783))!=x784);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x785 = INT16_MAX;
	static volatile int64_t x786 = 2795662560718440622LL;
	uint64_t x787 = UINT64_MAX;
	int32_t t149 = -784373;

    t149 = ((x785-(x786*x787))!=x788);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x789 = INT64_MIN;
	static uint16_t x790 = 10U;
	int32_t x791 = -1;
	int64_t x792 = INT64_MIN;
	static volatile int32_t t150 = -430492;

    t150 = ((x789-(x790*x791))!=x792);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x793 = 3066U;
	static int16_t x794 = INT16_MAX;
	volatile int8_t x795 = INT8_MAX;

    t151 = ((x793-(x794*x795))!=x796);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x797 = 13U;
	static volatile int16_t x798 = INT16_MIN;
	int32_t x799 = -1;
	volatile int16_t x800 = -233;
	volatile int32_t t152 = -2306574;

    t152 = ((x797-(x798*x799))!=x800);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x801 = -63;
	uint16_t x802 = UINT16_MAX;
	static volatile int16_t x803 = INT16_MIN;
	static int32_t x804 = -1242;
	volatile int32_t t153 = -13626197;

    t153 = ((x801-(x802*x803))!=x804);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x806 = 0U;
	int64_t x807 = INT64_MIN;
	static int8_t x808 = -1;
	int32_t t154 = -9;

    t154 = ((x805-(x806*x807))!=x808);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x809 = INT16_MIN;
	static volatile uint32_t x810 = UINT32_MAX;
	uint8_t x811 = 0U;
	volatile int32_t x812 = -1951;
	volatile int32_t t155 = -14;

    t155 = ((x809-(x810*x811))!=x812);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x825 = INT16_MAX;
	int16_t x826 = INT16_MIN;
	volatile uint8_t x827 = 21U;
	int8_t x828 = INT8_MIN;
	volatile int32_t t156 = 131;

    t156 = ((x825-(x826*x827))!=x828);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x830 = 436U;
	int16_t x831 = 6731;
	static volatile int8_t x832 = INT8_MAX;
	int32_t t157 = 0;

    t157 = ((x829-(x830*x831))!=x832);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x833 = INT16_MIN;
	static int32_t x834 = INT32_MIN;
	uint16_t x836 = 3U;
	volatile int32_t t158 = 3458821;

    t158 = ((x833-(x834*x835))!=x836);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x837 = INT8_MAX;
	uint8_t x838 = 30U;
	uint8_t x839 = 45U;
	volatile int32_t t159 = -1232805;

    t159 = ((x837-(x838*x839))!=x840);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x841 = 1547;
	static uint32_t x842 = 27273U;
	static uint32_t x843 = 67354010U;
	volatile uint64_t x844 = 67115969632LLU;
	volatile int32_t t160 = -18648416;

    t160 = ((x841-(x842*x843))!=x844);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x849 = -6;
	uint32_t x850 = 4180067U;
	uint8_t x851 = 15U;
	int64_t x852 = -25LL;
	int32_t t161 = 15;

    t161 = ((x849-(x850*x851))!=x852);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x853 = 105;
	uint16_t x854 = UINT16_MAX;
	static uint32_t x855 = UINT32_MAX;
	int8_t x856 = INT8_MAX;
	int32_t t162 = 95964823;

    t162 = ((x853-(x854*x855))!=x856);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x857 = UINT64_MAX;
	int16_t x858 = -1;
	int64_t x859 = 345696677695588LL;
	uint16_t x860 = 2U;
	int32_t t163 = -15007;

    t163 = ((x857-(x858*x859))!=x860);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x861 = 0;
	volatile uint64_t x862 = 16908748348235LLU;
	uint64_t x863 = 57809121LLU;
	volatile int64_t x864 = INT64_MAX;
	volatile int32_t t164 = -174575;

    t164 = ((x861-(x862*x863))!=x864);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x865 = 538U;
	int8_t x866 = INT8_MAX;
	static int8_t x867 = INT8_MIN;
	volatile int64_t x868 = INT64_MAX;
	static volatile int32_t t165 = 7;

    t165 = ((x865-(x866*x867))!=x868);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x870 = -3674;
	int16_t x872 = -1;
	int32_t t166 = -15453;

    t166 = ((x869-(x870*x871))!=x872);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x873 = -1;
	int64_t x874 = -1LL;
	uint64_t x875 = UINT64_MAX;
	uint16_t x876 = UINT16_MAX;

    t167 = ((x873-(x874*x875))!=x876);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x897 = 1422619873941LL;
	static uint32_t x898 = 790U;
	int8_t x899 = INT8_MAX;
	uint32_t x900 = 0U;
	volatile int32_t t168 = 50;

    t168 = ((x897-(x898*x899))!=x900);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x911 = -205772407578010LL;
	int8_t x912 = INT8_MIN;
	static int32_t t169 = -30163;

    t169 = ((x909-(x910*x911))!=x912);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x921 = 31160533;
	volatile int32_t x923 = INT32_MIN;
	static int32_t x924 = INT32_MIN;
	volatile int32_t t170 = 1502041;

    t170 = ((x921-(x922*x923))!=x924);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x926 = UINT8_MAX;
	int64_t x927 = -1LL;
	static uint8_t x928 = 57U;
	volatile int32_t t171 = -199129;

    t171 = ((x925-(x926*x927))!=x928);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x933 = INT32_MIN;
	uint8_t x934 = UINT8_MAX;

    t172 = ((x933-(x934*x935))!=x936);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x937 = 75478723702038LLU;
	static int32_t x938 = -1;
	int8_t x939 = -14;
	uint64_t x940 = UINT64_MAX;
	volatile int32_t t173 = 250465;

    t173 = ((x937-(x938*x939))!=x940);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x945 = UINT8_MAX;
	volatile int16_t x946 = -1;
	volatile uint32_t x947 = 438U;
	int16_t x948 = -1;
	static int32_t t174 = 61;

    t174 = ((x945-(x946*x947))!=x948);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x949 = UINT32_MAX;
	int16_t x950 = INT16_MIN;
	static int16_t x951 = -1;
	int32_t t175 = -50018;

    t175 = ((x949-(x950*x951))!=x952);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x957 = UINT16_MAX;
	int16_t x958 = 18;
	static int8_t x959 = INT8_MIN;
	static volatile int32_t t176 = 28129382;

    t176 = ((x957-(x958*x959))!=x960);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x961 = INT16_MAX;
	uint32_t x962 = 112U;
	static volatile uint8_t x963 = UINT8_MAX;
	static volatile int32_t x964 = 1043551405;
	int32_t t177 = -1;

    t177 = ((x961-(x962*x963))!=x964);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x969 = INT32_MIN;
	uint64_t x971 = 5753102943856LLU;
	int64_t x972 = -1LL;
	int32_t t178 = 496390887;

    t178 = ((x969-(x970*x971))!=x972);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x973 = 29U;
	int32_t x974 = 16125;
	uint16_t x976 = 1U;

    t179 = ((x973-(x974*x975))!=x976);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x985 = 1460U;
	int32_t x986 = -1;
	uint8_t x987 = 27U;
	uint16_t x988 = 2662U;

    t180 = ((x985-(x986*x987))!=x988);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x989 = 851733274230565LL;
	uint32_t x990 = 10551839U;
	uint8_t x991 = 5U;
	static int32_t t181 = 25;

    t181 = ((x989-(x990*x991))!=x992);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x993 = INT32_MIN;
	uint64_t x994 = 14981490647LLU;
	uint32_t x996 = 1507685U;

    t182 = ((x993-(x994*x995))!=x996);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x997 = UINT32_MAX;
	int8_t x998 = -1;
	int8_t x999 = INT8_MAX;
	int64_t x1000 = INT64_MIN;
	int32_t t183 = 113951;

    t183 = ((x997-(x998*x999))!=x1000);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x1005 = 14;
	uint64_t x1006 = 895532418249LLU;
	int8_t x1007 = INT8_MIN;
	uint8_t x1008 = UINT8_MAX;
	int32_t t184 = 12991;

    t184 = ((x1005-(x1006*x1007))!=x1008);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1013 = 0U;
	uint64_t x1014 = 135958407033756LLU;
	int32_t t185 = -1586;

    t185 = ((x1013-(x1014*x1015))!=x1016);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1021 = -1;
	volatile uint16_t x1022 = UINT16_MAX;
	int8_t x1023 = -46;
	int8_t x1024 = -1;
	static int32_t t186 = -9533185;

    t186 = ((x1021-(x1022*x1023))!=x1024);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1025 = -1;
	static uint16_t x1026 = UINT16_MAX;
	static int64_t x1027 = -122152578256733LL;
	uint8_t x1028 = UINT8_MAX;
	volatile int32_t t187 = -29753821;

    t187 = ((x1025-(x1026*x1027))!=x1028);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x1033 = 14235U;
	uint64_t x1034 = UINT64_MAX;
	static int8_t x1035 = 0;
	int8_t x1036 = INT8_MIN;
	int32_t t188 = -1;

    t188 = ((x1033-(x1034*x1035))!=x1036);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1037 = INT32_MIN;
	static uint32_t x1038 = 6449U;
	int32_t x1039 = INT32_MAX;
	uint32_t x1040 = 16U;
	volatile int32_t t189 = -160871325;

    t189 = ((x1037-(x1038*x1039))!=x1040);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1043 = INT8_MIN;
	int16_t x1044 = INT16_MIN;
	volatile int32_t t190 = 42346;

    t190 = ((x1041-(x1042*x1043))!=x1044);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1045 = INT64_MIN;
	int8_t x1047 = INT8_MIN;
	static volatile int64_t x1048 = INT64_MIN;

    t191 = ((x1045-(x1046*x1047))!=x1048);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1049 = INT8_MIN;
	int64_t x1052 = -1LL;
	int32_t t192 = -133;

    t192 = ((x1049-(x1050*x1051))!=x1052);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1061 = 3621;
	int16_t x1062 = -1;
	static volatile int64_t x1063 = 451LL;
	int8_t x1064 = INT8_MIN;
	volatile int32_t t193 = 5611;

    t193 = ((x1061-(x1062*x1063))!=x1064);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1065 = 0;
	volatile uint64_t x1066 = UINT64_MAX;
	static volatile int16_t x1067 = 2;
	volatile int64_t x1068 = INT64_MIN;
	volatile int32_t t194 = 256523;

    t194 = ((x1065-(x1066*x1067))!=x1068);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t t195 = 1;

    t195 = ((x1069-(x1070*x1071))!=x1072);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1073 = INT16_MIN;
	uint64_t x1074 = 464106627121LLU;
	static int32_t x1075 = -9828659;
	uint32_t x1076 = 16U;
	int32_t t196 = 13;

    t196 = ((x1073-(x1074*x1075))!=x1076);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1077 = 566436131U;
	int16_t x1078 = INT16_MIN;
	int16_t x1079 = 17;
	int16_t x1080 = 8;
	int32_t t197 = 498311;

    t197 = ((x1077-(x1078*x1079))!=x1080);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1086 = -1;
	volatile int32_t x1087 = -1;
	static uint16_t x1088 = 63U;
	static int32_t t198 = 1507475;

    t198 = ((x1085-(x1086*x1087))!=x1088);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1089 = 28432056080LLU;
	int16_t x1090 = INT16_MIN;
	volatile int8_t x1091 = INT8_MIN;
	volatile int32_t x1092 = INT32_MIN;

    t199 = ((x1089-(x1090*x1091))!=x1092);

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

