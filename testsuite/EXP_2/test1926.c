
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

int8_t x1 = 46;
int64_t x2 = INT64_MIN;
static volatile int8_t x5 = INT8_MIN;
int32_t x10 = 3639;
uint32_t x11 = 1U;
uint8_t x16 = UINT8_MAX;
uint16_t x21 = 4U;
uint32_t x22 = 1357322986U;
int32_t x24 = -240304711;
volatile int32_t t6 = -807;
int32_t x30 = INT32_MIN;
int64_t x34 = INT64_MIN;
int8_t x36 = INT8_MIN;
int32_t t8 = 2;
volatile int32_t t9 = 268851067;
static volatile int32_t t11 = 84449;
int32_t x49 = INT32_MAX;
volatile int16_t x51 = 15461;
int8_t x56 = INT8_MAX;
uint8_t x60 = 1U;
volatile uint64_t x62 = 7255536LLU;
static uint16_t x66 = 7384U;
int8_t x72 = 2;
int32_t x78 = INT32_MIN;
static int16_t x84 = -1;
volatile uint32_t x86 = 1263569U;
static uint64_t x92 = 14LLU;
uint32_t x96 = UINT32_MAX;
volatile uint32_t x102 = 47U;
volatile int32_t t25 = 835;
uint32_t x107 = UINT32_MAX;
static uint64_t x108 = UINT64_MAX;
uint32_t x112 = 1947U;
volatile int64_t x113 = 194966LL;
int8_t x129 = INT8_MIN;
uint64_t x131 = UINT64_MAX;
static int16_t x133 = 13098;
volatile int32_t t34 = 123634420;
volatile int32_t x148 = INT32_MIN;
uint16_t x149 = UINT16_MAX;
int64_t x150 = INT64_MIN;
volatile int16_t x151 = INT16_MIN;
volatile int32_t t37 = -4;
int8_t x157 = INT8_MAX;
volatile int32_t x163 = INT32_MAX;
static uint16_t x164 = 725U;
uint16_t x166 = 908U;
int32_t x168 = 307292;
volatile int32_t x172 = 499609755;
volatile int32_t t42 = -7451268;
int32_t t43 = -466930;
uint16_t x177 = UINT16_MAX;
int64_t x178 = INT64_MAX;
volatile int32_t t44 = 0;
int32_t t45 = 1341719;
volatile int32_t x185 = -733;
int16_t x187 = INT16_MAX;
int32_t t47 = 39;
int64_t x203 = -1LL;
int32_t t52 = -1458219;
int32_t x215 = -1;
static int64_t x217 = INT64_MIN;
volatile int32_t t54 = -4534;
uint16_t x223 = 107U;
int32_t t55 = 188;
int8_t x235 = INT8_MAX;
int8_t x236 = -11;
static volatile int32_t t60 = 23971400;
uint16_t x248 = 23237U;
volatile int32_t t62 = -5323596;
int16_t x257 = -1;
int32_t x260 = INT32_MIN;
volatile int8_t x265 = -1;
uint64_t x266 = 247026LLU;
int32_t t66 = -126;
volatile uint32_t x271 = 61U;
uint32_t x272 = 7U;
static volatile int16_t x280 = INT16_MIN;
volatile int32_t t70 = 49714;
int64_t x287 = -1LL;
static uint16_t x295 = 11U;
volatile int8_t x297 = INT8_MIN;
int64_t x301 = INT64_MAX;
uint16_t x305 = 785U;
static uint32_t x312 = 1575647369U;
int64_t x314 = -1LL;
static volatile int64_t x322 = -919993271066LL;
static volatile uint8_t x325 = 68U;
volatile int32_t t81 = 5250567;
uint16_t x329 = 930U;
int32_t x333 = INT32_MAX;
static uint64_t x348 = 16176150344749428LLU;
int32_t t86 = 1;
static int16_t x351 = 1;
uint64_t x353 = 2738692132985LLU;
volatile int32_t t88 = -856033;
int32_t x358 = INT32_MIN;
volatile int64_t x364 = -1LL;
volatile int32_t t91 = 969410191;
volatile int32_t x370 = INT32_MAX;
static int32_t x372 = -1;
int64_t x376 = INT64_MAX;
uint8_t x377 = 1U;
uint16_t x379 = 0U;
static int64_t x385 = INT64_MIN;
volatile int64_t x393 = -9774832912LL;
volatile uint16_t x395 = 845U;
int32_t t100 = 485;
volatile uint64_t x406 = UINT64_MAX;
uint16_t x407 = 3638U;
static int32_t x411 = INT32_MAX;
int16_t x416 = INT16_MIN;
int32_t x418 = 812;
int32_t t104 = 716;
int8_t x422 = 1;
uint64_t x427 = 59263LLU;
uint8_t x428 = 11U;
volatile int32_t t106 = -327583;
int64_t x431 = 159739514719383684LL;
volatile uint16_t x434 = 4175U;
int8_t x450 = 1;
int32_t x453 = INT32_MIN;
int8_t x454 = INT8_MAX;
static uint16_t x455 = 11U;
int32_t t113 = 190857529;
int32_t t114 = 15;
int16_t x462 = INT16_MIN;
uint16_t x463 = 12876U;
static volatile int8_t x467 = -1;
int64_t x468 = -1LL;
int16_t x473 = INT16_MIN;
uint8_t x480 = 0U;
int32_t t119 = -3545420;
volatile int8_t x484 = INT8_MAX;
volatile int32_t t120 = 2;
int8_t x485 = -31;
static int16_t x486 = -1;
static volatile uint64_t x488 = UINT64_MAX;
volatile int32_t t121 = -45693;
int8_t x507 = 25;
int16_t x513 = 11;
uint32_t x519 = 115572679U;
int8_t x520 = 37;
volatile int8_t x528 = -1;
int32_t t134 = 26;
volatile int32_t t135 = 4803444;
uint64_t x545 = 4718053487823889LLU;
uint16_t x549 = 525U;
int64_t x551 = 0LL;
int16_t x552 = -133;
int8_t x561 = 0;
static uint16_t x562 = 546U;
static int64_t x565 = -1LL;
static volatile uint8_t x566 = 1U;
int16_t x570 = INT16_MIN;
static int16_t x571 = INT16_MIN;
int8_t x573 = 9;
uint8_t x578 = 0U;
int16_t x579 = INT16_MAX;
static volatile int8_t x582 = -26;
uint16_t x587 = 214U;
uint32_t x591 = 607348466U;
int32_t t148 = -20;
volatile uint32_t x598 = 88598U;
volatile int16_t x602 = -9;
int32_t t151 = 280719404;
uint16_t x612 = UINT16_MAX;
uint64_t x616 = 11279LLU;
volatile int64_t x618 = -714699LL;
uint16_t x623 = 31656U;
static uint64_t x624 = 141209403904690255LLU;
static int16_t x634 = INT16_MIN;
uint64_t x635 = 0LLU;
uint64_t x639 = UINT64_MAX;
volatile int32_t t159 = -64569671;
int32_t x652 = INT32_MIN;
int32_t x656 = INT32_MIN;
volatile int32_t t165 = 24;
uint8_t x665 = 50U;
uint64_t x671 = 215073723091LLU;
int16_t x672 = INT16_MIN;
int8_t x675 = 0;
int64_t x682 = INT64_MAX;
int32_t x686 = -483;
volatile int32_t t172 = 3204;
int32_t t173 = 0;
static int64_t x706 = INT64_MIN;
volatile int32_t t176 = -47029424;
int32_t t177 = -8491;
int32_t x722 = INT32_MIN;
int64_t x723 = -1LL;
uint16_t x731 = 1U;
volatile int8_t x742 = -1;
int16_t x747 = 1;
int32_t t187 = -3765;
int32_t t188 = -1;
volatile int64_t x762 = INT64_MIN;
static uint16_t x765 = 395U;
int64_t x776 = INT64_MIN;
static int64_t x777 = INT64_MIN;
volatile int32_t t195 = 3;
int32_t t196 = -305;
static int32_t t197 = -1;
static volatile int8_t x793 = INT8_MAX;
uint8_t x796 = 104U;
static int32_t t198 = 322;
volatile int32_t x800 = INT32_MIN;
volatile int32_t t199 = 3804;


void f0(void) {
    	int64_t x3 = INT64_MIN;
	int8_t x4 = 4;
	static int32_t t0 = 877;

    t0 = ((x1&(x2<=x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x6 = 227U;
	static uint16_t x7 = UINT16_MAX;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 6544;

    t1 = ((x5&(x6<=x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 1U;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = 2077593;

    t2 = ((x9&(x10<=x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x14 = -37;
	int16_t x15 = INT16_MIN;
	volatile int32_t t3 = 9;

    t3 = ((x13&(x14<=x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int16_t x18 = -1;
	int64_t x19 = 3LL;
	uint16_t x20 = 943U;
	int32_t t4 = -78;

    t4 = ((x17&(x18<=x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x23 = 4640;
	static int32_t t5 = -401498;

    t5 = ((x21&(x22<=x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MIN;
	int64_t x26 = -1LL;
	int8_t x27 = -1;
	int8_t x28 = INT8_MAX;

    t6 = ((x25&(x26<=x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 9U;
	volatile int64_t x31 = -1LL;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 468514;

    t7 = ((x29&(x30<=x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	int32_t x35 = -1;

    t8 = ((x33&(x34<=x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	static int8_t x38 = 0;
	int32_t x39 = INT32_MIN;
	int64_t x40 = 0LL;

    t9 = ((x37&(x38<=x39))==x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = 32;
	uint32_t x44 = 1008774U;
	int32_t t10 = 14237908;

    t10 = ((x41&(x42<=x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 1;
	uint16_t x46 = UINT16_MAX;
	static volatile int64_t x47 = 791272735149LL;
	int64_t x48 = INT64_MIN;

    t11 = ((x45&(x46<=x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -36889;

    t12 = ((x49&(x50<=x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = UINT16_MAX;
	int64_t x55 = -1LL;
	volatile int32_t t13 = -1447855;

    t13 = ((x53&(x54<=x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	volatile int8_t x58 = INT8_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	int32_t t14 = 3926;

    t14 = ((x57&(x58<=x59))==x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	uint8_t x63 = 6U;
	uint64_t x64 = UINT64_MAX;
	static volatile int32_t t15 = 1512340;

    t15 = ((x61&(x62<=x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = INT64_MIN;
	uint16_t x67 = 1U;
	uint64_t x68 = 233120LLU;
	volatile int32_t t16 = -4062;

    t16 = ((x65&(x66<=x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = -1;
	int16_t x70 = 0;
	volatile int32_t x71 = INT32_MIN;
	int32_t t17 = -24307;

    t17 = ((x69&(x70<=x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 7246226293551LLU;
	volatile uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	volatile uint32_t x76 = UINT32_MAX;
	int32_t t18 = 9;

    t18 = ((x73&(x74<=x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	int64_t x79 = -672383941766760LL;
	volatile int64_t x80 = 1LL;
	volatile int32_t t19 = -1488384;

    t19 = ((x77&(x78<=x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = -1LL;
	int64_t x82 = INT64_MIN;
	static int64_t x83 = INT64_MIN;
	static int32_t t20 = 182385591;

    t20 = ((x81&(x82<=x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 460876239291LLU;
	static int16_t x87 = INT16_MAX;
	uint32_t x88 = UINT32_MAX;
	static int32_t t21 = -241667;

    t21 = ((x85&(x86<=x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 2462U;
	uint64_t x90 = 480341438837626405LLU;
	static uint8_t x91 = 30U;
	static int32_t t22 = 49186;

    t22 = ((x89&(x90<=x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static uint64_t x94 = UINT64_MAX;
	int8_t x95 = -7;
	static volatile int32_t t23 = 8726;

    t23 = ((x93&(x94<=x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = UINT16_MAX;
	volatile int16_t x98 = INT16_MAX;
	static int64_t x99 = -2148642949583LL;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -6;

    t24 = ((x97&(x98<=x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = INT16_MIN;
	static int64_t x103 = INT64_MIN;
	int8_t x104 = INT8_MIN;

    t25 = ((x101&(x102<=x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = INT64_MIN;
	volatile int32_t t26 = 3419;

    t26 = ((x105&(x106<=x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MAX;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 69U;
	int32_t t27 = 55628;

    t27 = ((x109&(x110<=x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = -2;
	volatile int32_t x115 = 105005;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 1516;

    t28 = ((x113&(x114<=x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	volatile uint32_t x118 = 133825U;
	volatile int64_t x119 = INT64_MIN;
	static uint8_t x120 = 4U;
	int32_t t29 = 543;

    t29 = ((x117&(x118<=x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 81U;
	static int32_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 26;
	static volatile int32_t t30 = 188;

    t30 = ((x121&(x122<=x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 590;
	int64_t x126 = -12435LL;
	int64_t x127 = 1599998153693376594LL;
	int8_t x128 = -34;
	volatile int32_t t31 = -10748;

    t31 = ((x125&(x126<=x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x130 = 156U;
	volatile int16_t x132 = INT16_MIN;
	int32_t t32 = -188923;

    t32 = ((x129&(x130<=x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x134 = INT64_MIN;
	volatile int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = 981060214;

    t33 = ((x133&(x134<=x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x137 = 557147LLU;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int32_t x140 = -1;

    t34 = ((x137&(x138<=x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 1U;
	static uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = -126;

    t35 = ((x141&(x142<=x143))==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 20U;
	static uint16_t x146 = 0U;
	int16_t x147 = INT16_MIN;
	static int32_t t36 = 31;

    t36 = ((x145&(x146<=x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x152 = INT64_MAX;

    t37 = ((x149&(x150<=x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 600LLU;
	static volatile int8_t x154 = -21;
	int64_t x155 = INT64_MIN;
	volatile uint64_t x156 = 224346162LLU;
	int32_t t38 = -3580;

    t38 = ((x153&(x154<=x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	uint16_t x160 = 75U;
	static int32_t t39 = -303657246;

    t39 = ((x157&(x158<=x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = 118U;
	int32_t x162 = 7487;
	int32_t t40 = -35;

    t40 = ((x161&(x162<=x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint64_t x167 = UINT64_MAX;
	int32_t t41 = -337337047;

    t41 = ((x165&(x166<=x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x169 = 22LL;
	int16_t x170 = -14;
	int32_t x171 = INT32_MIN;

    t42 = ((x169&(x170<=x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 0U;
	volatile uint8_t x174 = UINT8_MAX;
	int16_t x175 = -1;
	uint8_t x176 = UINT8_MAX;

    t43 = ((x173&(x174<=x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;

    t44 = ((x177&(x178<=x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -1;
	uint64_t x182 = 3660455955142916122LLU;
	volatile int16_t x183 = 9092;
	uint64_t x184 = 6200095642LLU;

    t45 = ((x181&(x182<=x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = -1698391734954LL;
	static volatile int8_t x188 = -1;
	volatile int32_t t46 = 265;

    t46 = ((x185&(x186<=x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 95U;
	int8_t x190 = INT8_MAX;
	static int8_t x191 = INT8_MIN;
	uint16_t x192 = 0U;

    t47 = ((x189&(x190<=x191))==x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	static uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	volatile int32_t t48 = -73139705;

    t48 = ((x193&(x194<=x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 149599048;
	int64_t x198 = INT64_MIN;
	volatile int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;
	int32_t t49 = 5;

    t49 = ((x197&(x198<=x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static int64_t x202 = INT64_MAX;
	volatile uint8_t x204 = 1U;
	int32_t t50 = -9534632;

    t50 = ((x201&(x202<=x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x205 = INT32_MAX;
	uint16_t x206 = 16U;
	static uint64_t x207 = UINT64_MAX;
	volatile uint16_t x208 = 13504U;
	volatile int32_t t51 = -11626;

    t51 = ((x205&(x206<=x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x209 = INT8_MIN;
	uint8_t x210 = 97U;
	int16_t x211 = INT16_MAX;
	uint16_t x212 = UINT16_MAX;

    t52 = ((x209&(x210<=x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 4072229U;
	int64_t x214 = -10134LL;
	uint32_t x216 = 502U;
	int32_t t53 = -1;

    t53 = ((x213&(x214<=x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x218 = INT16_MAX;
	int16_t x219 = 38;
	uint8_t x220 = UINT8_MAX;

    t54 = ((x217&(x218<=x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	uint8_t x222 = UINT8_MAX;
	volatile int32_t x224 = INT32_MAX;

    t55 = ((x221&(x222<=x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MAX;
	volatile int8_t x226 = -6;
	static volatile int64_t x227 = -5743781LL;
	static int8_t x228 = INT8_MIN;
	static int32_t t56 = 0;

    t56 = ((x225&(x226<=x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 3U;
	uint8_t x230 = 18U;
	int16_t x231 = -2;
	int8_t x232 = -23;
	static volatile int32_t t57 = 449789;

    t57 = ((x229&(x230<=x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -13391019240919LL;
	int32_t x234 = -6;
	volatile int32_t t58 = 464381645;

    t58 = ((x233&(x234<=x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = INT16_MAX;
	uint64_t x238 = 354098564785148625LLU;
	static int16_t x239 = 1217;
	uint64_t x240 = 2060LLU;
	volatile int32_t t59 = 24676386;

    t59 = ((x237&(x238<=x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	uint32_t x242 = UINT32_MAX;
	int8_t x243 = 29;
	uint16_t x244 = 3U;

    t60 = ((x241&(x242<=x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = INT8_MIN;
	int8_t x246 = 0;
	volatile int8_t x247 = 57;
	int32_t t61 = 62811;

    t61 = ((x245&(x246<=x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 3U;
	int16_t x250 = -1;
	int64_t x251 = INT64_MAX;
	static uint32_t x252 = 2U;

    t62 = ((x249&(x250<=x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	static int16_t x256 = 847;
	volatile int32_t t63 = 28;

    t63 = ((x253&(x254<=x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = 0;
	int32_t x259 = -35157;
	int32_t t64 = 65704771;

    t64 = ((x257&(x258<=x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 170385862914LLU;
	int32_t x262 = 137462055;
	static uint32_t x263 = UINT32_MAX;
	int64_t x264 = 10331698609LL;
	int32_t t65 = 49;

    t65 = ((x261&(x262<=x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = 1772958557U;

    t66 = ((x265&(x266<=x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -109;
	static volatile int32_t x270 = -1;
	volatile int32_t t67 = -1;

    t67 = ((x269&(x270<=x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x273 = UINT64_MAX;
	static int16_t x274 = -1;
	volatile int8_t x275 = INT8_MIN;
	uint32_t x276 = 218U;
	static int32_t t68 = -31601;

    t68 = ((x273&(x274<=x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MAX;
	static volatile uint16_t x279 = 18U;
	volatile int32_t t69 = -15768;

    t69 = ((x277&(x278<=x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	int16_t x282 = -3149;
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = INT8_MIN;

    t70 = ((x281&(x282<=x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x285 = -3195;
	int32_t x286 = INT32_MIN;
	static int16_t x288 = INT16_MIN;
	int32_t t71 = -27;

    t71 = ((x285&(x286<=x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	uint16_t x290 = 2813U;
	static int8_t x291 = INT8_MIN;
	volatile int8_t x292 = -1;
	static volatile int32_t t72 = 12;

    t72 = ((x289&(x290<=x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = 12526380LLU;
	volatile int64_t x294 = INT64_MAX;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = -239478406;

    t73 = ((x293&(x294<=x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 34LLU;
	static volatile int32_t t74 = -181768697;

    t74 = ((x297&(x298<=x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x302 = INT16_MAX;
	volatile uint64_t x303 = 1545489822933261LLU;
	static int32_t x304 = 10;
	static volatile int32_t t75 = -916778516;

    t75 = ((x301&(x302<=x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x306 = 901535681U;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -5275;

    t76 = ((x305&(x306<=x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint8_t x309 = 27U;
	int32_t x310 = INT32_MIN;
	int32_t x311 = -620;
	int32_t t77 = 243110156;

    t77 = ((x309&(x310<=x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 57U;
	static uint64_t x315 = UINT64_MAX;
	int32_t x316 = -1;
	int32_t t78 = -132;

    t78 = ((x313&(x314<=x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	int64_t x318 = INT64_MIN;
	int8_t x319 = INT8_MAX;
	int32_t x320 = 1;
	int32_t t79 = -311388188;

    t79 = ((x317&(x318<=x319))==x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 25654U;
	int64_t x323 = -1LL;
	uint32_t x324 = 2120U;
	int32_t t80 = 2117456;

    t80 = ((x321&(x322<=x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x326 = 7957U;
	int32_t x327 = -253355;
	uint16_t x328 = UINT16_MAX;

    t81 = ((x325&(x326<=x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x330 = -1;
	int64_t x331 = -3618394011937LL;
	volatile uint64_t x332 = 346096062LLU;
	int32_t t82 = -213866157;

    t82 = ((x329&(x330<=x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x334 = -1;
	static int32_t x335 = INT32_MAX;
	uint16_t x336 = 9U;
	volatile int32_t t83 = -704522151;

    t83 = ((x333&(x334<=x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = INT32_MIN;
	static int32_t x338 = INT32_MAX;
	int32_t x339 = INT32_MIN;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t84 = 85027;

    t84 = ((x337&(x338<=x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 2U;
	static volatile int16_t x342 = INT16_MIN;
	int64_t x343 = -4902132125961LL;
	uint64_t x344 = 3472257459765LLU;
	int32_t t85 = -1;

    t85 = ((x341&(x342<=x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MIN;
	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = 0;

    t86 = ((x345&(x346<=x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -5486;
	int64_t x350 = 211840946789059086LL;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -15926;

    t87 = ((x349&(x350<=x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = INT16_MAX;
	uint8_t x355 = 1U;
	uint8_t x356 = 1U;

    t88 = ((x353&(x354<=x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	uint32_t x359 = UINT32_MAX;
	static uint16_t x360 = 4U;
	volatile int32_t t89 = -1;

    t89 = ((x357&(x358<=x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	volatile int32_t t90 = -228;

    t90 = ((x361&(x362<=x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint16_t x366 = UINT16_MAX;
	int16_t x367 = 40;
	int32_t x368 = -1;

    t91 = ((x365&(x366<=x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MIN;
	volatile int16_t x371 = -471;
	volatile int32_t t92 = -1450042;

    t92 = ((x369&(x370<=x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = 194;
	volatile uint64_t x374 = 2502573LLU;
	static int64_t x375 = INT64_MIN;
	volatile int32_t t93 = 1;

    t93 = ((x373&(x374<=x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x378 = UINT64_MAX;
	volatile uint32_t x380 = 239286U;
	int32_t t94 = -2650;

    t94 = ((x377&(x378<=x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	static uint16_t x382 = 0U;
	static uint32_t x383 = 0U;
	static volatile int64_t x384 = 111555LL;
	static int32_t t95 = 379;

    t95 = ((x381&(x382<=x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = UINT8_MAX;
	static volatile int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;
	static volatile int32_t t96 = 297;

    t96 = ((x385&(x386<=x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int64_t x390 = 45734149LL;
	volatile int8_t x391 = 0;
	uint16_t x392 = 1439U;
	int32_t t97 = 6841;

    t97 = ((x389&(x390<=x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x394 = -15;
	volatile uint8_t x396 = UINT8_MAX;
	int32_t t98 = -65399;

    t98 = ((x393&(x394<=x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	static int32_t x398 = INT32_MAX;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t99 = -15;

    t99 = ((x397&(x398<=x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -119359369821LL;
	int16_t x402 = 1706;
	uint64_t x403 = 194885584611566LLU;
	uint16_t x404 = UINT16_MAX;

    t100 = ((x401&(x402<=x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -779104269;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t101 = 14594;

    t101 = ((x405&(x406<=x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 3479U;
	uint16_t x410 = 3U;
	int64_t x412 = 1137862791465LL;
	volatile int32_t t102 = 3;

    t102 = ((x409&(x410<=x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	int16_t x414 = -81;
	static int8_t x415 = INT8_MIN;
	volatile int32_t t103 = 74530669;

    t103 = ((x413&(x414<=x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	int64_t x419 = INT64_MAX;
	int32_t x420 = -1;

    t104 = ((x417&(x418<=x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x423 = -723722092815LL;
	int8_t x424 = 42;
	volatile int32_t t105 = 1;

    t105 = ((x421&(x422<=x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	int16_t x426 = INT16_MIN;

    t106 = ((x425&(x426<=x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -20;
	int64_t x430 = -10822393389LL;
	static uint16_t x432 = UINT16_MAX;
	int32_t t107 = 0;

    t107 = ((x429&(x430<=x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x435 = -1LL;
	int16_t x436 = -145;
	volatile int32_t t108 = -30;

    t108 = ((x433&(x434<=x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x437 = UINT64_MAX;
	int64_t x438 = INT64_MAX;
	static int32_t x439 = 82988;
	static uint8_t x440 = 20U;
	volatile int32_t t109 = 1;

    t109 = ((x437&(x438<=x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = UINT64_MAX;
	volatile uint8_t x442 = UINT8_MAX;
	int32_t x443 = INT32_MIN;
	static int64_t x444 = -1LL;
	volatile int32_t t110 = -337111145;

    t110 = ((x441&(x442<=x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = INT16_MIN;
	volatile int8_t x447 = INT8_MAX;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t111 = 1;

    t111 = ((x445&(x446<=x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MAX;
	uint64_t x451 = UINT64_MAX;
	static uint16_t x452 = 1U;
	static volatile int32_t t112 = -2;

    t112 = ((x449&(x450<=x451))==x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x456 = 1;

    t113 = ((x453&(x454<=x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x457 = INT64_MIN;
	uint32_t x458 = 143937U;
	int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MIN;

    t114 = ((x457&(x458<=x459))==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	int16_t x464 = -1572;
	int32_t t115 = 14496;

    t115 = ((x461&(x462<=x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 10U;
	int16_t x466 = -1;
	int32_t t116 = -20562698;

    t116 = ((x465&(x466<=x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = INT64_MIN;
	uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MIN;
	int8_t x472 = 3;
	volatile int32_t t117 = 0;

    t117 = ((x469&(x470<=x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x474 = INT8_MIN;
	static int8_t x475 = INT8_MIN;
	uint64_t x476 = 768333751493531576LLU;
	volatile int32_t t118 = -11519;

    t118 = ((x473&(x474<=x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 1U;
	int32_t x478 = -1;
	uint16_t x479 = UINT16_MAX;

    t119 = ((x477&(x478<=x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 34U;
	int64_t x482 = -1LL;
	int8_t x483 = INT8_MAX;

    t120 = ((x481&(x482<=x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x487 = INT8_MAX;

    t121 = ((x485&(x486<=x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = INT64_MIN;
	uint16_t x490 = 3U;
	static int16_t x491 = -1;
	uint16_t x492 = 1022U;
	int32_t t122 = 679660343;

    t122 = ((x489&(x490<=x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = UINT16_MAX;
	int8_t x494 = -1;
	uint32_t x495 = 1619636584U;
	uint32_t x496 = 3218U;
	volatile int32_t t123 = -8120820;

    t123 = ((x493&(x494<=x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -605041325;
	int16_t x498 = INT16_MIN;
	volatile int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t124 = -84876;

    t124 = ((x497&(x498<=x499))==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = 18;
	volatile int16_t x502 = INT16_MIN;
	int8_t x503 = 28;
	int16_t x504 = -1;
	int32_t t125 = 9032;

    t125 = ((x501&(x502<=x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	int8_t x506 = INT8_MIN;
	int8_t x508 = 0;
	volatile int32_t t126 = -3342348;

    t126 = ((x505&(x506<=x507))==x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	uint8_t x510 = 117U;
	volatile uint64_t x511 = 295221LLU;
	uint8_t x512 = 7U;
	volatile int32_t t127 = -31;

    t127 = ((x509&(x510<=x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x514 = 7;
	int32_t x515 = INT32_MIN;
	int16_t x516 = 12859;
	volatile int32_t t128 = 8881931;

    t128 = ((x513&(x514<=x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int32_t x518 = INT32_MAX;
	static int32_t t129 = -8;

    t129 = ((x517&(x518<=x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = 746142;
	int8_t x522 = INT8_MAX;
	static int16_t x523 = INT16_MAX;
	int16_t x524 = INT16_MIN;
	volatile int32_t t130 = -529;

    t130 = ((x521&(x522<=x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = -1LL;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	volatile int32_t t131 = 65;

    t131 = ((x525&(x526<=x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MAX;
	int32_t x532 = INT32_MIN;
	static volatile int32_t t132 = 2963;

    t132 = ((x529&(x530<=x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x533 = INT32_MAX;
	uint8_t x534 = 13U;
	int8_t x535 = -1;
	uint8_t x536 = 6U;
	static int32_t t133 = 19489015;

    t133 = ((x533&(x534<=x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -2749723315388LL;
	uint32_t x538 = UINT32_MAX;
	static volatile int16_t x539 = INT16_MAX;
	int8_t x540 = INT8_MIN;

    t134 = ((x537&(x538<=x539))==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = 12U;
	volatile int8_t x544 = 55;

    t135 = ((x541&(x542<=x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x546 = 27936U;
	int64_t x547 = INT64_MIN;
	static int8_t x548 = INT8_MIN;
	int32_t t136 = 108302;

    t136 = ((x545&(x546<=x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = INT32_MAX;
	int32_t t137 = 1;

    t137 = ((x549&(x550<=x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x553 = UINT32_MAX;
	int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	uint64_t x556 = 3297731743278LLU;
	static volatile int32_t t138 = 5896621;

    t138 = ((x553&(x554<=x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -152080489;
	volatile int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	static int8_t x560 = INT8_MAX;
	volatile int32_t t139 = -6855196;

    t139 = ((x557&(x558<=x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = -1;
	volatile uint8_t x564 = 4U;
	volatile int32_t t140 = 33191;

    t140 = ((x561&(x562<=x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x567 = 1682632610483042005LLU;
	static volatile int16_t x568 = INT16_MIN;
	static volatile int32_t t141 = -54092865;

    t141 = ((x565&(x566<=x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x569 = UINT16_MAX;
	uint64_t x572 = UINT64_MAX;
	volatile int32_t t142 = 2;

    t142 = ((x569&(x570<=x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x574 = INT16_MIN;
	int64_t x575 = INT64_MAX;
	uint16_t x576 = UINT16_MAX;
	int32_t t143 = 233;

    t143 = ((x573&(x574<=x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 1U;
	int32_t x580 = -1;
	int32_t t144 = -44;

    t144 = ((x577&(x578<=x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	volatile int8_t x583 = -1;
	volatile int64_t x584 = INT64_MIN;
	volatile int32_t t145 = 567;

    t145 = ((x581&(x582<=x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MIN;
	int64_t x586 = -1LL;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = 804732;

    t146 = ((x585&(x586<=x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 143748U;
	int8_t x590 = INT8_MAX;
	int64_t x592 = -1LL;
	volatile int32_t t147 = 0;

    t147 = ((x589&(x590<=x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x593 = 2U;
	int64_t x594 = INT64_MIN;
	static volatile uint64_t x595 = UINT64_MAX;
	uint16_t x596 = UINT16_MAX;

    t148 = ((x593&(x594<=x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MAX;
	volatile uint8_t x599 = UINT8_MAX;
	int64_t x600 = INT64_MIN;
	static volatile int32_t t149 = -886565;

    t149 = ((x597&(x598<=x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -17;
	uint8_t x603 = UINT8_MAX;
	static int8_t x604 = INT8_MIN;
	int32_t t150 = 3;

    t150 = ((x601&(x602<=x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = INT8_MIN;
	static int8_t x606 = INT8_MIN;
	int64_t x607 = 19824130LL;
	static uint32_t x608 = 5051U;

    t151 = ((x605&(x606<=x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = 0;
	int16_t x610 = -1;
	int64_t x611 = INT64_MAX;
	volatile int32_t t152 = -31518;

    t152 = ((x609&(x610<=x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MAX;
	volatile int8_t x614 = INT8_MIN;
	int8_t x615 = 0;
	volatile int32_t t153 = 34;

    t153 = ((x613&(x614<=x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 0U;
	int8_t x619 = INT8_MAX;
	static int32_t x620 = -1;
	static int32_t t154 = 1023;

    t154 = ((x617&(x618<=x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 11U;
	int8_t x622 = -10;
	int32_t t155 = -482777;

    t155 = ((x621&(x622<=x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = 1;
	int8_t x626 = -16;
	int16_t x627 = -1;
	volatile int8_t x628 = 0;
	volatile int32_t t156 = 243;

    t156 = ((x625&(x626<=x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -1;
	int8_t x630 = INT8_MIN;
	volatile int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MIN;
	int32_t t157 = -35;

    t157 = ((x629&(x630<=x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = 2;
	int16_t x636 = 41;
	int32_t t158 = -6871783;

    t158 = ((x633&(x634<=x635))==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = 18056U;
	int64_t x638 = INT64_MIN;
	uint16_t x640 = UINT16_MAX;

    t159 = ((x637&(x638<=x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 718U;
	int8_t x642 = INT8_MIN;
	uint16_t x643 = 44U;
	int64_t x644 = -1LL;
	static int32_t t160 = 31;

    t160 = ((x641&(x642<=x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = 3901U;
	int16_t x646 = 95;
	uint64_t x647 = UINT64_MAX;
	uint16_t x648 = 2576U;
	int32_t t161 = -10;

    t161 = ((x645&(x646<=x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = UINT8_MAX;
	uint16_t x650 = 9U;
	uint64_t x651 = 54926259263LLU;
	int32_t t162 = 0;

    t162 = ((x649&(x650<=x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x653 = -9354;
	static int64_t x654 = 15685113551738215LL;
	static uint8_t x655 = UINT8_MAX;
	volatile int32_t t163 = -7298;

    t163 = ((x653&(x654<=x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	int8_t x658 = -1;
	static volatile int32_t x659 = INT32_MIN;
	int16_t x660 = 1;
	volatile int32_t t164 = -7181977;

    t164 = ((x657&(x658<=x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x661 = 30;
	int32_t x662 = -7;
	static int16_t x663 = 4721;
	volatile int8_t x664 = -14;

    t165 = ((x661&(x662<=x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x666 = 7U;
	int64_t x667 = INT64_MAX;
	static uint8_t x668 = 27U;
	int32_t t166 = -64613;

    t166 = ((x665&(x666<=x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = INT8_MAX;
	uint16_t x670 = 221U;
	int32_t t167 = 39;

    t167 = ((x669&(x670<=x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	volatile int32_t x674 = -7840114;
	int16_t x676 = -1;
	int32_t t168 = -38666311;

    t168 = ((x673&(x674<=x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x677 = INT64_MIN;
	static volatile int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	uint64_t x680 = 2986LLU;
	volatile int32_t t169 = -1;

    t169 = ((x677&(x678<=x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MAX;
	int32_t x683 = -1;
	int8_t x684 = INT8_MIN;
	static int32_t t170 = -33049;

    t170 = ((x681&(x682<=x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 9U;
	int32_t x687 = INT32_MIN;
	static uint8_t x688 = 83U;
	int32_t t171 = -2000083;

    t171 = ((x685&(x686<=x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -1;
	int8_t x690 = INT8_MIN;
	volatile int64_t x691 = 60812369910649379LL;
	volatile uint8_t x692 = UINT8_MAX;

    t172 = ((x689&(x690<=x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 0U;
	int8_t x694 = 38;
	volatile int8_t x695 = INT8_MIN;
	int16_t x696 = INT16_MAX;

    t173 = ((x693&(x694<=x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	volatile int32_t x698 = INT32_MAX;
	volatile int64_t x699 = INT64_MIN;
	static uint8_t x700 = 1U;
	int32_t t174 = -3;

    t174 = ((x697&(x698<=x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = UINT64_MAX;
	volatile uint64_t x702 = 7LLU;
	static uint8_t x703 = UINT8_MAX;
	volatile int16_t x704 = -1;
	int32_t t175 = -26313332;

    t175 = ((x701&(x702<=x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x705 = 0U;
	uint64_t x707 = 1LLU;
	uint8_t x708 = UINT8_MAX;

    t176 = ((x705&(x706<=x707))==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	uint16_t x710 = 313U;
	uint8_t x711 = UINT8_MAX;
	static uint16_t x712 = 440U;

    t177 = ((x709&(x710<=x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = INT16_MIN;
	int64_t x714 = INT64_MAX;
	int16_t x715 = INT16_MAX;
	int16_t x716 = 1;
	volatile int32_t t178 = -20914;

    t178 = ((x713&(x714<=x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x717 = 31;
	int8_t x718 = -3;
	uint64_t x719 = 1202201474263799400LLU;
	volatile int64_t x720 = INT64_MIN;
	volatile int32_t t179 = 772589;

    t179 = ((x717&(x718<=x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x721 = 96U;
	volatile int8_t x724 = INT8_MAX;
	int32_t t180 = 793249;

    t180 = ((x721&(x722<=x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x726 = INT32_MAX;
	int64_t x727 = INT64_MIN;
	uint8_t x728 = 26U;
	volatile int32_t t181 = 98931844;

    t181 = ((x725&(x726<=x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = INT16_MAX;
	static uint64_t x730 = UINT64_MAX;
	int64_t x732 = 1539574509141446503LL;
	int32_t t182 = 1698632;

    t182 = ((x729&(x730<=x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	uint64_t x734 = 6779LLU;
	volatile int16_t x735 = -1;
	static int32_t x736 = -1;
	volatile int32_t t183 = -73116176;

    t183 = ((x733&(x734<=x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 1959554397691013650LLU;
	volatile int8_t x738 = 1;
	int8_t x739 = INT8_MIN;
	uint16_t x740 = 5U;
	volatile int32_t t184 = 25945;

    t184 = ((x737&(x738<=x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	uint16_t x743 = 738U;
	int8_t x744 = 1;
	volatile int32_t t185 = -34220216;

    t185 = ((x741&(x742<=x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MAX;
	int16_t x746 = INT16_MIN;
	int8_t x748 = 1;
	int32_t t186 = -663437002;

    t186 = ((x745&(x746<=x747))==x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = -1;
	int64_t x750 = -1LL;
	static int32_t x751 = INT32_MIN;
	uint64_t x752 = 8990904LLU;

    t187 = ((x749&(x750<=x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = -1;
	int32_t x754 = 252844;
	volatile int64_t x755 = INT64_MIN;
	int64_t x756 = -1LL;

    t188 = ((x753&(x754<=x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MAX;
	volatile int16_t x758 = INT16_MIN;
	uint8_t x759 = UINT8_MAX;
	int32_t x760 = 523449083;
	static volatile int32_t t189 = 5;

    t189 = ((x757&(x758<=x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x763 = INT32_MIN;
	int32_t x764 = INT32_MIN;
	int32_t t190 = 261494;

    t190 = ((x761&(x762<=x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x766 = -1;
	uint32_t x767 = 191U;
	uint16_t x768 = 0U;
	volatile int32_t t191 = 500;

    t191 = ((x765&(x766<=x767))==x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	int32_t x770 = -1;
	static int32_t x771 = 1297;
	volatile int8_t x772 = INT8_MAX;
	static int32_t t192 = -240056;

    t192 = ((x769&(x770<=x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 305896808LLU;
	uint16_t x774 = 161U;
	int64_t x775 = -7179942397167639LL;
	int32_t t193 = -11060452;

    t193 = ((x773&(x774<=x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 214U;
	uint8_t x779 = 71U;
	int32_t x780 = 58401;
	int32_t t194 = 1;

    t194 = ((x777&(x778<=x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 1LL;
	uint64_t x782 = UINT64_MAX;
	int64_t x783 = INT64_MIN;
	uint64_t x784 = 14138LLU;

    t195 = ((x781&(x782<=x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	uint16_t x786 = 14443U;
	uint8_t x787 = 1U;
	volatile uint16_t x788 = 7U;

    t196 = ((x785&(x786<=x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -2;
	uint8_t x790 = 42U;
	uint8_t x791 = 4U;
	int64_t x792 = -36730692138643166LL;

    t197 = ((x789&(x790<=x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = INT16_MIN;
	uint8_t x795 = UINT8_MAX;

    t198 = ((x793&(x794<=x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	uint32_t x798 = 7675489U;
	int32_t x799 = 107268158;

    t199 = ((x797&(x798<=x799))==x800);

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

