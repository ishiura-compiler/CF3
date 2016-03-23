
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

int64_t x1 = INT64_MIN;
static uint16_t x4 = 139U;
uint32_t x6 = UINT32_MAX;
int8_t x8 = -1;
uint32_t x15 = 423590U;
int8_t x23 = INT8_MIN;
int8_t x24 = -2;
volatile int32_t x27 = -518;
static int16_t x38 = 8;
uint8_t x40 = 61U;
int32_t t9 = 23308;
volatile int16_t x46 = 177;
volatile int32_t t10 = 3822356;
volatile int16_t x56 = -1;
static volatile uint8_t x72 = UINT8_MAX;
static uint32_t x74 = UINT32_MAX;
int64_t x80 = -16322686LL;
int32_t t15 = -15;
int16_t x100 = INT16_MAX;
int32_t t19 = 1;
uint16_t x105 = UINT16_MAX;
uint16_t x110 = 50U;
uint16_t x114 = UINT16_MAX;
uint8_t x122 = 2U;
int32_t x129 = -1;
static volatile uint32_t x132 = UINT32_MAX;
int32_t t27 = 11;
int32_t x142 = -1;
volatile int32_t t29 = -375;
int64_t x146 = INT64_MIN;
static int64_t x152 = -247791912264823946LL;
uint8_t x158 = 3U;
static uint64_t x160 = 65718986LLU;
static int16_t x182 = INT16_MIN;
int32_t t38 = -957734;
static int32_t x193 = INT32_MIN;
int64_t x194 = 2819736585367602LL;
int8_t x202 = INT8_MIN;
static int32_t x206 = INT32_MIN;
volatile int32_t t43 = -384576;
static int16_t x213 = 0;
int32_t x214 = INT32_MAX;
volatile int8_t x215 = -14;
uint8_t x217 = 17U;
volatile int64_t x219 = -2038162LL;
int8_t x221 = 6;
int32_t x225 = -22;
volatile int16_t x232 = INT16_MIN;
static int64_t x238 = 0LL;
uint8_t x239 = 78U;
uint8_t x240 = UINT8_MAX;
volatile uint32_t x244 = UINT32_MAX;
uint16_t x246 = UINT16_MAX;
static int32_t x254 = INT32_MIN;
int32_t t54 = 9;
volatile int64_t x265 = -235245743311667801LL;
int32_t t57 = -1632;
volatile int32_t t58 = -516016813;
int32_t x283 = INT32_MAX;
static int16_t x284 = INT16_MIN;
static uint32_t x307 = UINT32_MAX;
int16_t x308 = -1;
int8_t x310 = 22;
int8_t x317 = INT8_MIN;
volatile int32_t x319 = INT32_MAX;
uint8_t x321 = 118U;
int32_t x336 = INT32_MAX;
int8_t x338 = 0;
uint64_t x345 = 966373805082343LLU;
int16_t x350 = 298;
uint16_t x351 = 3U;
int32_t t75 = -53;
int8_t x355 = -1;
int16_t x356 = -7;
volatile int32_t t78 = 313271;
int16_t x365 = INT16_MIN;
volatile uint16_t x367 = 8918U;
static uint64_t x372 = 283831LLU;
static uint64_t x381 = 101LLU;
int16_t x389 = INT16_MIN;
int32_t x392 = -469;
int8_t x395 = INT8_MIN;
uint16_t x396 = 21503U;
uint16_t x403 = UINT16_MAX;
int64_t x409 = 5313287272363LL;
static int32_t t87 = -21065;
int32_t x419 = INT32_MAX;
static volatile int16_t x421 = -1;
int16_t x432 = -1;
int8_t x437 = INT8_MIN;
uint64_t x440 = 2076188749056108LLU;
uint16_t x441 = 328U;
uint64_t x444 = UINT64_MAX;
volatile int32_t t96 = 309347;
volatile int8_t x461 = -56;
volatile int32_t t98 = -6107;
int16_t x471 = -1;
static int32_t t99 = -47465;
int32_t t100 = 6601901;
int16_t x478 = 2026;
uint16_t x479 = 2U;
int8_t x481 = INT8_MAX;
int32_t t103 = 24291;
int16_t x491 = -1;
int32_t t104 = 3822110;
uint8_t x495 = UINT8_MAX;
int16_t x506 = 1;
int32_t x520 = INT32_MAX;
int32_t t111 = 448427834;
int64_t x527 = -610911956LL;
static volatile int32_t t112 = -11852;
static volatile uint8_t x530 = UINT8_MAX;
volatile int16_t x532 = INT16_MIN;
static volatile int32_t t113 = -349293;
int8_t x534 = INT8_MIN;
static int64_t x535 = 1905377127LL;
volatile int32_t x536 = 85;
uint16_t x547 = 0U;
static int64_t x553 = 4543428217031252LL;
static int16_t x554 = INT16_MAX;
volatile int32_t x561 = INT32_MAX;
volatile uint32_t x565 = 296U;
int8_t x568 = INT8_MAX;
volatile int8_t x569 = INT8_MIN;
int16_t x572 = -31;
volatile int32_t t123 = -243159;
int32_t x588 = INT32_MIN;
int32_t x589 = 727735176;
uint32_t x591 = 15420U;
int16_t x592 = INT16_MIN;
int64_t x593 = INT64_MIN;
int64_t x601 = INT64_MIN;
volatile uint32_t x605 = 31130831U;
volatile int32_t t130 = -919045009;
volatile int32_t t131 = 0;
int16_t x619 = 986;
volatile int64_t x630 = INT64_MIN;
static int64_t x632 = INT64_MIN;
static int64_t x635 = INT64_MIN;
static int8_t x644 = INT8_MIN;
volatile int32_t t138 = -41;
int16_t x654 = INT16_MAX;
volatile uint32_t x659 = 7U;
int16_t x665 = INT16_MIN;
int64_t x666 = -604315184LL;
int16_t x668 = INT16_MIN;
int32_t x671 = INT32_MIN;
int16_t x674 = -1;
volatile int32_t x688 = INT32_MAX;
uint64_t x692 = 777918LLU;
static volatile uint16_t x694 = UINT16_MAX;
static uint64_t x698 = 13711435245840826LLU;
uint32_t x699 = 1323650U;
uint8_t x701 = 22U;
int32_t t151 = -4;
uint8_t x713 = UINT8_MAX;
uint8_t x718 = UINT8_MAX;
uint16_t x721 = 57U;
static int8_t x726 = INT8_MIN;
int32_t t156 = 1656243;
int64_t x737 = -17156318338830LL;
int8_t x740 = -1;
static int32_t x747 = 372213;
uint8_t x753 = 0U;
volatile uint16_t x754 = 2206U;
uint8_t x762 = UINT8_MAX;
volatile uint8_t x779 = UINT8_MAX;
int32_t x782 = INT32_MIN;
volatile int32_t t169 = -59002561;
int8_t x788 = 36;
int16_t x791 = 2;
static uint8_t x798 = 58U;
uint64_t x800 = 4LLU;
int16_t x804 = -1;
int32_t x805 = INT32_MAX;
int64_t x806 = -97LL;
static int16_t x807 = INT16_MIN;
static int64_t x817 = INT64_MAX;
int8_t x819 = 1;
static uint64_t x823 = 27442592LLU;
static volatile int8_t x825 = -2;
static int32_t t180 = -1272;
static int64_t x832 = 40LL;
volatile int32_t t183 = -31271578;
int8_t x841 = 6;
int64_t x854 = INT64_MAX;
volatile int32_t t187 = -616795780;
volatile int32_t x859 = -766978;
volatile int32_t t189 = -3;
volatile int32_t t190 = 58;
uint8_t x874 = 5U;
int16_t x875 = INT16_MAX;
int16_t x876 = 4;
int8_t x877 = 31;
volatile int32_t t193 = 31;
volatile int32_t t194 = -28629339;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	static uint32_t x3 = UINT32_MAX;
	int32_t t0 = 1180;

    t0 = ((x1%(x2+x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint8_t x7 = UINT8_MAX;
	int32_t t1 = 8269065;

    t1 = ((x5%(x6+x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 15U;
	volatile int32_t t2 = -51078891;

    t2 = ((x9%(x10+x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	uint32_t x14 = 55207U;
	int32_t x16 = -1;
	volatile int32_t t3 = 120025;

    t3 = ((x13%(x14+x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x18 = 61423197;
	uint32_t x19 = 488U;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = 268;

    t4 = ((x17%(x18+x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 4064546U;
	int32_t x22 = -5;
	volatile int32_t t5 = -154;

    t5 = ((x21%(x22+x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	int32_t x26 = 84552699;
	int64_t x28 = 450626160488933200LL;
	int32_t t6 = 582053356;

    t6 = ((x25%(x26+x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	int32_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 66039017;

    t7 = ((x29%(x30+x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MAX;
	volatile int8_t x39 = INT8_MIN;
	static int32_t t8 = 12;

    t8 = ((x37%(x38+x39))==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 3174U;
	uint16_t x42 = 1202U;
	uint64_t x43 = 25791LLU;
	int64_t x44 = 1294LL;

    t9 = ((x41%(x42+x43))==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 3107LL;
	uint16_t x47 = 13990U;
	uint8_t x48 = 8U;

    t10 = ((x45%(x46+x47))==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 6329U;
	int64_t x54 = -6LL;
	static volatile int32_t x55 = -809;
	volatile int32_t t11 = -45662;

    t11 = ((x53%(x54+x55))==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = 1;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	int32_t x64 = INT32_MAX;
	int32_t t12 = -1022439553;

    t12 = ((x61%(x62+x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x69 = 107U;
	uint64_t x70 = 0LLU;
	volatile int64_t x71 = INT64_MAX;
	static int32_t t13 = -824;

    t13 = ((x69%(x70+x71))==x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x73 = 0;
	uint16_t x75 = 23U;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t14 = -432099;

    t14 = ((x73%(x74+x75))==x76);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x77 = INT64_MIN;
	static int16_t x78 = -1;
	uint16_t x79 = UINT16_MAX;

    t15 = ((x77%(x78+x79))==x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x81 = 8;
	static int64_t x82 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	static volatile int32_t t16 = 460;

    t16 = ((x81%(x82+x83))==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = 0;
	uint8_t x88 = UINT8_MAX;
	static int32_t t17 = 2444;

    t17 = ((x85%(x86+x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MAX;
	uint8_t x94 = 52U;
	int16_t x95 = 35;
	int64_t x96 = 41349905668641496LL;
	static volatile int32_t t18 = -1572;

    t18 = ((x93%(x94+x95))==x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = 7;
	int64_t x98 = -1LL;
	int8_t x99 = INT8_MIN;

    t19 = ((x97%(x98+x99))==x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x101 = INT64_MIN;
	int16_t x102 = -530;
	volatile int8_t x103 = -1;
	int64_t x104 = -1087929334546594438LL;
	volatile int32_t t20 = -314709950;

    t20 = ((x101%(x102+x103))==x104);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x106 = INT8_MAX;
	volatile int8_t x107 = INT8_MAX;
	static int64_t x108 = -1LL;
	static int32_t t21 = -6019577;

    t21 = ((x105%(x106+x107))==x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x109 = 54U;
	uint8_t x111 = UINT8_MAX;
	int64_t x112 = INT64_MIN;
	int32_t t22 = 24;

    t22 = ((x109%(x110+x111))==x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x113 = -1;
	uint8_t x115 = 3U;
	volatile int16_t x116 = -1;
	volatile int32_t t23 = 89606612;

    t23 = ((x113%(x114+x115))==x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x117 = 1892U;
	int32_t x118 = 33569932;
	int16_t x119 = INT16_MIN;
	volatile int8_t x120 = -1;
	int32_t t24 = -10597;

    t24 = ((x117%(x118+x119))==x120);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = 1U;
	int8_t x123 = INT8_MAX;
	int8_t x124 = -1;
	int32_t t25 = -1;

    t25 = ((x121%(x122+x123))==x124);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x125 = INT64_MIN;
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = -3;
	int8_t x128 = -1;
	int32_t t26 = 15;

    t26 = ((x125%(x126+x127))==x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x130 = INT32_MIN;
	uint16_t x131 = UINT16_MAX;

    t27 = ((x129%(x130+x131))==x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x133 = 1;
	int8_t x134 = INT8_MAX;
	static volatile int8_t x135 = INT8_MIN;
	int32_t x136 = 1345;
	volatile int32_t t28 = 6801256;

    t28 = ((x133%(x134+x135))==x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x141 = UINT32_MAX;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;

    t29 = ((x141%(x142+x143))==x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x145 = -10401;
	volatile uint8_t x147 = 11U;
	uint64_t x148 = UINT64_MAX;
	int32_t t30 = 39;

    t30 = ((x145%(x146+x147))==x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = INT32_MIN;
	volatile int32_t x150 = 10973075;
	uint16_t x151 = UINT16_MAX;
	int32_t t31 = -188163364;

    t31 = ((x149%(x150+x151))==x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = UINT32_MAX;
	static int8_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t32 = 1881892;

    t32 = ((x153%(x154+x155))==x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x157 = -1;
	static int64_t x159 = INT64_MIN;
	static int32_t t33 = 386912;

    t33 = ((x157%(x158+x159))==x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile uint32_t x162 = UINT32_MAX;
	int32_t x163 = -1;
	uint16_t x164 = 24U;
	volatile int32_t t34 = -490850;

    t34 = ((x161%(x162+x163))==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = 0;
	volatile int8_t x170 = INT8_MAX;
	int8_t x171 = 9;
	int16_t x172 = 812;
	volatile int32_t t35 = 1759;

    t35 = ((x169%(x170+x171))==x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x173 = 1065468562958087LLU;
	uint16_t x174 = UINT16_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 7U;
	int32_t t36 = -3727;

    t36 = ((x173%(x174+x175))==x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = -84924421922LL;
	static int8_t x178 = INT8_MIN;
	volatile int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	int32_t t37 = -160;

    t37 = ((x177%(x178+x179))==x180);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MAX;
	uint32_t x183 = 108U;
	int8_t x184 = INT8_MAX;

    t38 = ((x181%(x182+x183))==x184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	static int64_t x187 = -448142821LL;
	static int8_t x188 = INT8_MIN;
	int32_t t39 = 9398257;

    t39 = ((x185%(x186+x187))==x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 10;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t40 = 3020;

    t40 = ((x189%(x190+x191))==x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x195 = -7;
	volatile int8_t x196 = INT8_MIN;
	int32_t t41 = 93276489;

    t41 = ((x193%(x194+x195))==x196);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x201 = UINT16_MAX;
	int64_t x203 = -1LL;
	uint32_t x204 = 65U;
	volatile int32_t t42 = -253812;

    t42 = ((x201%(x202+x203))==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x205 = INT8_MAX;
	static uint32_t x207 = 83266U;
	int32_t x208 = -110736;

    t43 = ((x205%(x206+x207))==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x216 = -1;
	volatile int32_t t44 = -62157;

    t44 = ((x213%(x214+x215))==x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x218 = -1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t45 = 2;

    t45 = ((x217%(x218+x219))==x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	volatile int32_t x224 = 54;
	int32_t t46 = -5918857;

    t46 = ((x221%(x222+x223))==x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x226 = -1;
	int64_t x227 = -1LL;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t47 = -356012;

    t47 = ((x225%(x226+x227))==x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x229 = UINT32_MAX;
	int64_t x230 = -181LL;
	uint64_t x231 = 142259LLU;
	static volatile int32_t t48 = -26442878;

    t48 = ((x229%(x230+x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x237 = INT8_MIN;
	volatile int32_t t49 = 8276234;

    t49 = ((x237%(x238+x239))==x240);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x241 = 0U;
	volatile uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1;
	int32_t t50 = -4967;

    t50 = ((x241%(x242+x243))==x244);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x245 = UINT32_MAX;
	int64_t x247 = -1LL;
	int16_t x248 = -1;
	int32_t t51 = -18;

    t51 = ((x245%(x246+x247))==x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	static uint32_t x250 = UINT32_MAX;
	uint64_t x251 = 2367672695LLU;
	volatile int64_t x252 = -1LL;
	static volatile int32_t t52 = -1106;

    t52 = ((x249%(x250+x251))==x252);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = -1;
	uint16_t x255 = 77U;
	int64_t x256 = INT64_MIN;
	int32_t t53 = -54;

    t53 = ((x253%(x254+x255))==x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = INT64_MAX;
	int32_t x258 = 1;
	static int32_t x259 = 0;
	uint32_t x260 = 23U;

    t54 = ((x257%(x258+x259))==x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x261 = 3238884990258508841LL;
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = 20U;
	int64_t x264 = INT64_MIN;
	int32_t t55 = 9153949;

    t55 = ((x261%(x262+x263))==x264);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x266 = 4502LLU;
	volatile int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 58U;
	volatile int32_t t56 = 7;

    t56 = ((x265%(x266+x267))==x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x269 = 0U;
	volatile int16_t x270 = -1;
	static uint32_t x271 = 401355620U;
	static uint8_t x272 = UINT8_MAX;

    t57 = ((x269%(x270+x271))==x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x273 = 1U;
	uint8_t x274 = 6U;
	volatile int64_t x275 = INT64_MIN;
	uint32_t x276 = 1579318U;

    t58 = ((x273%(x274+x275))==x276);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x277 = UINT32_MAX;
	static uint64_t x278 = 1616315927LLU;
	uint16_t x279 = 37U;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t59 = 197;

    t59 = ((x277%(x278+x279))==x280);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x281 = INT64_MAX;
	static int8_t x282 = INT8_MIN;
	static int32_t t60 = -2848;

    t60 = ((x281%(x282+x283))==x284);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x285 = INT16_MIN;
	static uint64_t x286 = 598311445584647LLU;
	uint16_t x287 = UINT16_MAX;
	int64_t x288 = INT64_MAX;
	volatile int32_t t61 = -1464;

    t61 = ((x285%(x286+x287))==x288);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MAX;
	static int8_t x290 = 4;
	int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	int32_t t62 = -196;

    t62 = ((x289%(x290+x291))==x292);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MAX;
	static volatile int32_t x300 = 3200;
	int32_t t63 = 289;

    t63 = ((x297%(x298+x299))==x300);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x301 = INT16_MIN;
	static int32_t x302 = 315486130;
	static uint32_t x303 = UINT32_MAX;
	int64_t x304 = 3LL;
	static int32_t t64 = -165438;

    t64 = ((x301%(x302+x303))==x304);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x305 = -1;
	uint8_t x306 = 50U;
	volatile int32_t t65 = -1;

    t65 = ((x305%(x306+x307))==x308);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x309 = -1;
	int8_t x311 = 2;
	int8_t x312 = -1;
	int32_t t66 = -256697449;

    t66 = ((x309%(x310+x311))==x312);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x313 = 27LL;
	int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t67 = 3;

    t67 = ((x313%(x314+x315))==x316);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x318 = -1;
	int16_t x320 = -1;
	int32_t t68 = -57916;

    t68 = ((x317%(x318+x319))==x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x322 = 23U;
	uint16_t x323 = UINT16_MAX;
	static volatile int32_t x324 = INT32_MIN;
	int32_t t69 = -3777;

    t69 = ((x321%(x322+x323))==x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x325 = INT32_MIN;
	static uint8_t x326 = UINT8_MAX;
	volatile uint64_t x327 = UINT64_MAX;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t70 = -59034;

    t70 = ((x325%(x326+x327))==x328);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = UINT16_MAX;
	static volatile int32_t x332 = 204;
	static volatile int32_t t71 = -5783568;

    t71 = ((x329%(x330+x331))==x332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x333 = INT32_MAX;
	int8_t x334 = 16;
	static int16_t x335 = INT16_MIN;
	int32_t t72 = 103999939;

    t72 = ((x333%(x334+x335))==x336);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x337 = 7379;
	int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MAX;
	static int32_t t73 = 579392580;

    t73 = ((x337%(x338+x339))==x340);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x346 = 3U;
	volatile int8_t x347 = -12;
	int32_t x348 = 166755;
	volatile int32_t t74 = -14177;

    t74 = ((x345%(x346+x347))==x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x349 = 12773609187136LLU;
	int16_t x352 = 1;

    t75 = ((x349%(x350+x351))==x352);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x353 = UINT8_MAX;
	int32_t x354 = 5742463;
	static int32_t t76 = -777325;

    t76 = ((x353%(x354+x355))==x356);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x357 = INT32_MIN;
	int16_t x358 = -25;
	static volatile int64_t x359 = -59758419LL;
	int16_t x360 = INT16_MIN;
	int32_t t77 = 1478251;

    t77 = ((x357%(x358+x359))==x360);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = -7;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 48U;

    t78 = ((x361%(x362+x363))==x364);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x366 = 26629U;
	int64_t x368 = -3853072365LL;
	volatile int32_t t79 = 33;

    t79 = ((x365%(x366+x367))==x368);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x369 = INT64_MAX;
	uint16_t x370 = UINT16_MAX;
	volatile uint16_t x371 = 1U;
	int32_t t80 = 5602;

    t80 = ((x369%(x370+x371))==x372);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x382 = INT8_MAX;
	uint16_t x383 = UINT16_MAX;
	uint16_t x384 = 2117U;
	static int32_t t81 = -850676;

    t81 = ((x381%(x382+x383))==x384);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = INT8_MIN;
	int64_t x387 = -627LL;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t82 = 167847165;

    t82 = ((x385%(x386+x387))==x388);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x390 = INT32_MIN;
	uint64_t x391 = 13665207LLU;
	static volatile int32_t t83 = 29276;

    t83 = ((x389%(x390+x391))==x392);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x393 = 3U;
	uint8_t x394 = UINT8_MAX;
	volatile int32_t t84 = -185985541;

    t84 = ((x393%(x394+x395))==x396);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x401 = 36U;
	volatile uint32_t x402 = 225918U;
	uint32_t x404 = 27U;
	int32_t t85 = 737263237;

    t85 = ((x401%(x402+x403))==x404);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x410 = UINT16_MAX;
	uint16_t x411 = 0U;
	static uint32_t x412 = 4369U;
	volatile int32_t t86 = -665709748;

    t86 = ((x409%(x410+x411))==x412);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x413 = UINT16_MAX;
	static int16_t x414 = -1;
	uint64_t x415 = 2356571LLU;
	uint8_t x416 = UINT8_MAX;

    t87 = ((x413%(x414+x415))==x416);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x417 = -54155944;
	static int32_t x418 = -1954;
	static uint32_t x420 = UINT32_MAX;
	static volatile int32_t t88 = -1549188;

    t88 = ((x417%(x418+x419))==x420);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x422 = -1;
	volatile int16_t x423 = -1;
	static uint16_t x424 = UINT16_MAX;
	static int32_t t89 = -23268;

    t89 = ((x421%(x422+x423))==x424);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x425 = UINT16_MAX;
	uint32_t x426 = 0U;
	static int64_t x427 = INT64_MIN;
	uint64_t x428 = 10091397LLU;
	static volatile int32_t t90 = -27052428;

    t90 = ((x425%(x426+x427))==x428);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x429 = INT64_MAX;
	uint8_t x430 = 20U;
	volatile int8_t x431 = INT8_MIN;
	int32_t t91 = 978;

    t91 = ((x429%(x430+x431))==x432);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x438 = UINT64_MAX;
	int32_t x439 = -1;
	int32_t t92 = -138;

    t92 = ((x437%(x438+x439))==x440);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x442 = -1;
	static int64_t x443 = -168422031887LL;
	int32_t t93 = 65;

    t93 = ((x441%(x442+x443))==x444);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x449 = -12;
	volatile int32_t x450 = INT32_MIN;
	int16_t x451 = 13995;
	int64_t x452 = 1508770446238LL;
	volatile int32_t t94 = 38;

    t94 = ((x449%(x450+x451))==x452);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x453 = UINT16_MAX;
	int16_t x454 = INT16_MIN;
	int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	volatile int32_t t95 = -124;

    t95 = ((x453%(x454+x455))==x456);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x457 = UINT32_MAX;
	volatile int8_t x458 = INT8_MIN;
	uint64_t x459 = 9609347283546LLU;
	int8_t x460 = -1;

    t96 = ((x457%(x458+x459))==x460);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x462 = INT64_MIN;
	static uint8_t x463 = 7U;
	static uint32_t x464 = 0U;
	int32_t t97 = 191622768;

    t97 = ((x461%(x462+x463))==x464);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x465 = 21784678LL;
	volatile int64_t x466 = -1LL;
	int32_t x467 = -1;
	int32_t x468 = INT32_MIN;

    t98 = ((x465%(x466+x467))==x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x469 = -1;
	static volatile int32_t x470 = -1;
	static volatile int8_t x472 = 0;

    t99 = ((x469%(x470+x471))==x472);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x473 = UINT64_MAX;
	int16_t x474 = -37;
	uint64_t x475 = UINT64_MAX;
	uint16_t x476 = UINT16_MAX;

    t100 = ((x473%(x474+x475))==x476);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x477 = INT32_MIN;
	static int64_t x480 = INT64_MAX;
	int32_t t101 = -220810832;

    t101 = ((x477%(x478+x479))==x480);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x482 = INT64_MIN;
	uint64_t x483 = 137421804LLU;
	int8_t x484 = -2;
	volatile int32_t t102 = 5938784;

    t102 = ((x481%(x482+x483))==x484);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x485 = -1LL;
	uint16_t x486 = 99U;
	uint16_t x487 = 351U;
	uint8_t x488 = 28U;

    t103 = ((x485%(x486+x487))==x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x489 = UINT8_MAX;
	volatile int32_t x490 = -1;
	int32_t x492 = -1;

    t104 = ((x489%(x490+x491))==x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x493 = -16227093424LL;
	static volatile int64_t x494 = INT64_MIN;
	uint16_t x496 = 5307U;
	int32_t t105 = 30264821;

    t105 = ((x493%(x494+x495))==x496);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x497 = UINT64_MAX;
	int32_t x498 = INT32_MIN;
	static uint16_t x499 = 126U;
	int16_t x500 = INT16_MAX;
	static int32_t t106 = -10;

    t106 = ((x497%(x498+x499))==x500);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x501 = INT16_MIN;
	static uint64_t x502 = 51LLU;
	uint64_t x503 = 478055607LLU;
	volatile uint16_t x504 = 4U;
	volatile int32_t t107 = 347;

    t107 = ((x501%(x502+x503))==x504);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x505 = -1LL;
	static uint32_t x507 = 873753U;
	static uint16_t x508 = 1614U;
	volatile int32_t t108 = 14;

    t108 = ((x505%(x506+x507))==x508);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x509 = -1;
	int64_t x510 = INT64_MIN;
	uint32_t x511 = UINT32_MAX;
	volatile uint8_t x512 = 2U;
	static volatile int32_t t109 = 61816;

    t109 = ((x509%(x510+x511))==x512);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x517 = INT64_MIN;
	static int8_t x518 = INT8_MIN;
	int32_t x519 = -506358797;
	volatile int32_t t110 = -60;

    t110 = ((x517%(x518+x519))==x520);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x521 = 0U;
	volatile int32_t x522 = -1;
	int8_t x523 = -1;
	int8_t x524 = -14;

    t111 = ((x521%(x522+x523))==x524);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x525 = 0U;
	uint64_t x526 = 3165278629668LLU;
	uint32_t x528 = UINT32_MAX;

    t112 = ((x525%(x526+x527))==x528);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x529 = INT16_MIN;
	int16_t x531 = INT16_MIN;

    t113 = ((x529%(x530+x531))==x532);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x533 = 15183;
	volatile int32_t t114 = 5133;

    t114 = ((x533%(x534+x535))==x536);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x537 = -1;
	int16_t x538 = -1;
	int64_t x539 = -5886LL;
	volatile uint64_t x540 = 3346LLU;
	volatile int32_t t115 = 94416;

    t115 = ((x537%(x538+x539))==x540);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x541 = UINT16_MAX;
	static int64_t x542 = 386320987707891LL;
	int32_t x543 = -1;
	volatile uint16_t x544 = 1U;
	volatile int32_t t116 = -6;

    t116 = ((x541%(x542+x543))==x544);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x545 = UINT16_MAX;
	int8_t x546 = -1;
	int64_t x548 = -1027533LL;
	int32_t t117 = 559593;

    t117 = ((x545%(x546+x547))==x548);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x549 = 227569;
	int32_t x550 = -1;
	volatile int8_t x551 = -1;
	static uint64_t x552 = UINT64_MAX;
	volatile int32_t t118 = 14805539;

    t118 = ((x549%(x550+x551))==x552);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x555 = INT16_MIN;
	static volatile uint8_t x556 = 11U;
	volatile int32_t t119 = 6360;

    t119 = ((x553%(x554+x555))==x556);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x562 = 5299372610770404LLU;
	int32_t x563 = INT32_MAX;
	volatile int8_t x564 = 0;
	volatile int32_t t120 = -216;

    t120 = ((x561%(x562+x563))==x564);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x566 = INT8_MIN;
	int16_t x567 = -112;
	int32_t t121 = -19472;

    t121 = ((x565%(x566+x567))==x568);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x570 = INT16_MIN;
	uint32_t x571 = 17882242U;
	volatile int32_t t122 = -500256605;

    t122 = ((x569%(x570+x571))==x572);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x573 = INT16_MAX;
	volatile int16_t x574 = INT16_MAX;
	uint32_t x575 = UINT32_MAX;
	volatile int16_t x576 = INT16_MIN;

    t123 = ((x573%(x574+x575))==x576);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x577 = INT8_MAX;
	volatile int8_t x578 = -1;
	int8_t x579 = -1;
	int64_t x580 = -1LL;
	static int32_t t124 = -45162;

    t124 = ((x577%(x578+x579))==x580);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x585 = INT64_MAX;
	int16_t x586 = INT16_MAX;
	int8_t x587 = -1;
	static volatile int32_t t125 = -1;

    t125 = ((x585%(x586+x587))==x588);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x590 = INT16_MIN;
	int32_t t126 = -9755125;

    t126 = ((x589%(x590+x591))==x592);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x594 = INT32_MIN;
	static uint32_t x595 = UINT32_MAX;
	static int8_t x596 = -1;
	int32_t t127 = 47517;

    t127 = ((x593%(x594+x595))==x596);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x597 = -1;
	volatile uint64_t x598 = UINT64_MAX;
	static int16_t x599 = INT16_MIN;
	int32_t x600 = 231567;
	volatile int32_t t128 = 1;

    t128 = ((x597%(x598+x599))==x600);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x602 = -2;
	int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;
	static int32_t t129 = -754234;

    t129 = ((x601%(x602+x603))==x604);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x606 = 632838620LL;
	int8_t x607 = INT8_MIN;
	int16_t x608 = 93;

    t130 = ((x605%(x606+x607))==x608);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x609 = 13U;
	int8_t x610 = -3;
	int32_t x611 = -1;
	int8_t x612 = INT8_MIN;

    t131 = ((x609%(x610+x611))==x612);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x613 = UINT64_MAX;
	uint64_t x614 = 1026122175558LLU;
	int64_t x615 = -1LL;
	int16_t x616 = INT16_MAX;
	static int32_t t132 = 1;

    t132 = ((x613%(x614+x615))==x616);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x617 = UINT8_MAX;
	int16_t x618 = 1;
	int64_t x620 = 43437982LL;
	volatile int32_t t133 = -8656;

    t133 = ((x617%(x618+x619))==x620);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x629 = INT8_MIN;
	int64_t x631 = INT64_MAX;
	volatile int32_t t134 = -621502;

    t134 = ((x629%(x630+x631))==x632);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x633 = INT8_MAX;
	volatile int32_t x634 = 2282739;
	static uint64_t x636 = 17637196198766LLU;
	volatile int32_t t135 = 531;

    t135 = ((x633%(x634+x635))==x636);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x637 = 51421677628666700LL;
	static volatile uint64_t x638 = UINT64_MAX;
	volatile uint8_t x639 = 14U;
	volatile int32_t x640 = -1;
	int32_t t136 = 587763;

    t136 = ((x637%(x638+x639))==x640);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x641 = -1LL;
	int64_t x642 = -7628LL;
	int8_t x643 = INT8_MIN;
	volatile int32_t t137 = 450024;

    t137 = ((x641%(x642+x643))==x644);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = INT32_MIN;
	uint16_t x647 = UINT16_MAX;
	uint16_t x648 = UINT16_MAX;

    t138 = ((x645%(x646+x647))==x648);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x649 = INT16_MIN;
	int64_t x650 = -1LL;
	uint64_t x651 = UINT64_MAX;
	int64_t x652 = INT64_MIN;
	volatile int32_t t139 = -243;

    t139 = ((x649%(x650+x651))==x652);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x653 = -1;
	int16_t x655 = INT16_MIN;
	volatile int8_t x656 = -1;
	static int32_t t140 = 10;

    t140 = ((x653%(x654+x655))==x656);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x657 = -1LL;
	int16_t x658 = -3;
	int8_t x660 = -14;
	int32_t t141 = -5496;

    t141 = ((x657%(x658+x659))==x660);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x661 = -21;
	int32_t x662 = INT32_MIN;
	static int64_t x663 = 4374477020LL;
	int64_t x664 = INT64_MAX;
	static int32_t t142 = -211440209;

    t142 = ((x661%(x662+x663))==x664);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x667 = 8;
	int32_t t143 = -4591331;

    t143 = ((x665%(x666+x667))==x668);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x669 = 7568LLU;
	uint32_t x670 = 1U;
	int64_t x672 = INT64_MAX;
	int32_t t144 = 232107689;

    t144 = ((x669%(x670+x671))==x672);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x673 = 6;
	uint16_t x675 = UINT16_MAX;
	int8_t x676 = -1;
	volatile int32_t t145 = 9;

    t145 = ((x673%(x674+x675))==x676);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x681 = 84U;
	int32_t x682 = INT32_MIN;
	int8_t x683 = INT8_MAX;
	uint16_t x684 = 215U;
	int32_t t146 = -473;

    t146 = ((x681%(x682+x683))==x684);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x685 = INT16_MIN;
	int32_t x686 = 6;
	volatile int32_t x687 = -2632183;
	volatile int32_t t147 = -29434;

    t147 = ((x685%(x686+x687))==x688);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x689 = INT64_MIN;
	int32_t x690 = -6463;
	int8_t x691 = INT8_MIN;
	volatile int32_t t148 = 75;

    t148 = ((x689%(x690+x691))==x692);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x693 = -1;
	static int8_t x695 = INT8_MIN;
	static int32_t x696 = 420507;
	int32_t t149 = -498;

    t149 = ((x693%(x694+x695))==x696);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x697 = INT32_MIN;
	int32_t x700 = 45853;
	volatile int32_t t150 = -1335;

    t150 = ((x697%(x698+x699))==x700);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x702 = -2759;
	uint16_t x703 = 0U;
	volatile uint32_t x704 = UINT32_MAX;

    t151 = ((x701%(x702+x703))==x704);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x705 = INT8_MAX;
	int32_t x706 = -45015;
	uint64_t x707 = 148840LLU;
	static uint64_t x708 = 353101799LLU;
	int32_t t152 = -289028;

    t152 = ((x705%(x706+x707))==x708);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x714 = 208393672U;
	uint16_t x715 = 10615U;
	static int64_t x716 = -1LL;
	volatile int32_t t153 = 587;

    t153 = ((x713%(x714+x715))==x716);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x717 = INT8_MIN;
	uint32_t x719 = 1643195U;
	static int8_t x720 = 1;
	int32_t t154 = -2804;

    t154 = ((x717%(x718+x719))==x720);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x722 = 59277445412778980LLU;
	int64_t x723 = INT64_MAX;
	int64_t x724 = INT64_MAX;
	int32_t t155 = 113276745;

    t155 = ((x721%(x722+x723))==x724);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x725 = UINT64_MAX;
	uint16_t x727 = 284U;
	int64_t x728 = -1LL;

    t156 = ((x725%(x726+x727))==x728);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x729 = INT16_MAX;
	static int64_t x730 = -42698023532LL;
	int32_t x731 = -1;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t157 = 20359427;

    t157 = ((x729%(x730+x731))==x732);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x733 = INT32_MAX;
	static uint64_t x734 = 127254LLU;
	static uint64_t x735 = 1050169LLU;
	static int64_t x736 = -1LL;
	int32_t t158 = -31;

    t158 = ((x733%(x734+x735))==x736);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x738 = INT16_MAX;
	static int64_t x739 = INT64_MIN;
	volatile int32_t t159 = -7516;

    t159 = ((x737%(x738+x739))==x740);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x741 = INT32_MIN;
	int32_t x742 = -1;
	int32_t x743 = -1;
	static int64_t x744 = INT64_MAX;
	int32_t t160 = -2083;

    t160 = ((x741%(x742+x743))==x744);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x745 = UINT32_MAX;
	int32_t x746 = -1;
	volatile int8_t x748 = INT8_MIN;
	int32_t t161 = 99;

    t161 = ((x745%(x746+x747))==x748);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x749 = 0;
	uint16_t x750 = 2406U;
	int64_t x751 = -200640091LL;
	volatile int32_t x752 = -1;
	volatile int32_t t162 = 40;

    t162 = ((x749%(x750+x751))==x752);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x755 = 976555912LL;
	uint8_t x756 = 64U;
	volatile int32_t t163 = -23493941;

    t163 = ((x753%(x754+x755))==x756);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x757 = 13269U;
	static int8_t x758 = INT8_MAX;
	int16_t x759 = -6;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t164 = 255348740;

    t164 = ((x757%(x758+x759))==x760);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x761 = UINT64_MAX;
	uint32_t x763 = 23U;
	volatile int64_t x764 = 0LL;
	static int32_t t165 = 1;

    t165 = ((x761%(x762+x763))==x764);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x769 = INT32_MIN;
	uint16_t x770 = UINT16_MAX;
	static uint32_t x771 = 13U;
	static int8_t x772 = -1;
	int32_t t166 = 9;

    t166 = ((x769%(x770+x771))==x772);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x773 = INT32_MIN;
	int8_t x774 = -1;
	uint8_t x775 = 46U;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t167 = 2068054;

    t167 = ((x773%(x774+x775))==x776);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x777 = INT64_MAX;
	int16_t x778 = INT16_MIN;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t168 = 189757382;

    t168 = ((x777%(x778+x779))==x780);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x781 = -1LL;
	volatile uint16_t x783 = UINT16_MAX;
	uint8_t x784 = UINT8_MAX;

    t169 = ((x781%(x782+x783))==x784);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x785 = -1;
	int32_t x786 = -10048;
	int64_t x787 = -2LL;
	int32_t t170 = 124;

    t170 = ((x785%(x786+x787))==x788);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x789 = 122732LLU;
	int8_t x790 = -1;
	static int64_t x792 = -1LL;
	volatile int32_t t171 = 0;

    t171 = ((x789%(x790+x791))==x792);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x793 = -1;
	static uint64_t x794 = UINT64_MAX;
	int64_t x795 = -27773374105LL;
	volatile int64_t x796 = INT64_MAX;
	int32_t t172 = -21504957;

    t172 = ((x793%(x794+x795))==x796);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x797 = INT64_MAX;
	uint8_t x799 = 15U;
	volatile int32_t t173 = 5547;

    t173 = ((x797%(x798+x799))==x800);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x801 = INT8_MIN;
	uint8_t x802 = 71U;
	static volatile uint64_t x803 = 58341829952398077LLU;
	int32_t t174 = 367002;

    t174 = ((x801%(x802+x803))==x804);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x808 = -714568542LL;
	static int32_t t175 = -958336630;

    t175 = ((x805%(x806+x807))==x808);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x809 = 574;
	uint16_t x810 = 116U;
	uint16_t x811 = UINT16_MAX;
	int16_t x812 = 15880;
	volatile int32_t t176 = 793;

    t176 = ((x809%(x810+x811))==x812);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x813 = -1;
	int16_t x814 = INT16_MAX;
	static int32_t x815 = INT32_MIN;
	static uint8_t x816 = UINT8_MAX;
	int32_t t177 = 7;

    t177 = ((x813%(x814+x815))==x816);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x818 = INT64_MIN;
	static int64_t x820 = INT64_MIN;
	volatile int32_t t178 = -91916;

    t178 = ((x817%(x818+x819))==x820);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x821 = INT16_MIN;
	int32_t x822 = -5;
	static int8_t x824 = INT8_MIN;
	volatile int32_t t179 = -1008992289;

    t179 = ((x821%(x822+x823))==x824);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x826 = -1LL;
	static int16_t x827 = INT16_MAX;
	uint64_t x828 = 1491091867342643798LLU;

    t180 = ((x825%(x826+x827))==x828);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x829 = 958U;
	static int8_t x830 = INT8_MAX;
	uint32_t x831 = UINT32_MAX;
	int32_t t181 = -308;

    t181 = ((x829%(x830+x831))==x832);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x833 = INT8_MIN;
	int64_t x834 = 4004279922787LL;
	int64_t x835 = INT64_MIN;
	static int64_t x836 = INT64_MIN;
	static volatile int32_t t182 = 23630;

    t182 = ((x833%(x834+x835))==x836);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x837 = 188U;
	static uint8_t x838 = UINT8_MAX;
	volatile int8_t x839 = -12;
	int8_t x840 = INT8_MAX;

    t183 = ((x837%(x838+x839))==x840);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x842 = UINT16_MAX;
	static int64_t x843 = INT64_MIN;
	int8_t x844 = INT8_MAX;
	int32_t t184 = -22812683;

    t184 = ((x841%(x842+x843))==x844);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x845 = -13;
	volatile int32_t x846 = -1;
	static volatile int64_t x847 = 484157879452LL;
	int8_t x848 = -1;
	volatile int32_t t185 = -64382;

    t185 = ((x845%(x846+x847))==x848);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x849 = UINT64_MAX;
	int32_t x850 = -49288161;
	int8_t x851 = INT8_MIN;
	int16_t x852 = INT16_MIN;
	volatile int32_t t186 = -3;

    t186 = ((x849%(x850+x851))==x852);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x853 = -96316064LL;
	int64_t x855 = INT64_MIN;
	int16_t x856 = -1;

    t187 = ((x853%(x854+x855))==x856);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = INT64_MAX;
	int64_t x858 = -263396802LL;
	int16_t x860 = -1;
	volatile int32_t t188 = 1071819632;

    t188 = ((x857%(x858+x859))==x860);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x865 = INT8_MIN;
	int64_t x866 = 46932LL;
	static int8_t x867 = INT8_MAX;
	int64_t x868 = -108956024760LL;

    t189 = ((x865%(x866+x867))==x868);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x869 = 3709143U;
	int8_t x870 = INT8_MIN;
	static uint8_t x871 = 5U;
	static uint64_t x872 = UINT64_MAX;

    t190 = ((x869%(x870+x871))==x872);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x873 = -1;
	volatile int32_t t191 = -370;

    t191 = ((x873%(x874+x875))==x876);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x878 = 838358159U;
	static volatile int8_t x879 = -1;
	int64_t x880 = -418664759599LL;
	static int32_t t192 = -931991;

    t192 = ((x877%(x878+x879))==x880);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x881 = 255467334650307LLU;
	volatile int8_t x882 = INT8_MAX;
	int64_t x883 = -32179433645678885LL;
	int16_t x884 = 175;

    t193 = ((x881%(x882+x883))==x884);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x893 = -2289485780875419622LL;
	uint16_t x894 = UINT16_MAX;
	int32_t x895 = INT32_MIN;
	static int16_t x896 = INT16_MIN;

    t194 = ((x893%(x894+x895))==x896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x897 = INT32_MIN;
	int8_t x898 = INT8_MAX;
	static int8_t x899 = INT8_MIN;
	int64_t x900 = -3335916LL;
	volatile int32_t t195 = 468;

    t195 = ((x897%(x898+x899))==x900);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x901 = INT16_MAX;
	static uint16_t x902 = UINT16_MAX;
	uint8_t x903 = 22U;
	uint32_t x904 = 667U;
	int32_t t196 = 3484130;

    t196 = ((x901%(x902+x903))==x904);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x905 = 405421U;
	int16_t x906 = -69;
	uint32_t x907 = 9176U;
	static int16_t x908 = INT16_MIN;
	int32_t t197 = -203171;

    t197 = ((x905%(x906+x907))==x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x909 = INT16_MAX;
	int8_t x910 = -1;
	uint64_t x911 = UINT64_MAX;
	volatile int8_t x912 = -1;
	int32_t t198 = -27874508;

    t198 = ((x909%(x910+x911))==x912);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x917 = UINT32_MAX;
	uint32_t x918 = 26U;
	uint16_t x919 = 4U;
	volatile int64_t x920 = -1LL;
	static int32_t t199 = 1;

    t199 = ((x917%(x918+x919))==x920);

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

