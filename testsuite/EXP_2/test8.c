
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

uint8_t x3 = 1U;
volatile uint16_t x14 = UINT16_MAX;
int16_t x15 = INT16_MIN;
static int32_t x17 = INT32_MAX;
int16_t x23 = INT16_MAX;
int8_t x33 = 32;
volatile int32_t t5 = -1;
int8_t x37 = INT8_MIN;
int32_t t6 = 10620;
static int32_t x43 = INT32_MIN;
int16_t x46 = INT16_MIN;
uint32_t x51 = UINT32_MAX;
static uint32_t x52 = 105394255U;
uint64_t x62 = 6751115606067LLU;
uint32_t x64 = 4301587U;
int32_t t12 = -122;
static volatile uint16_t x65 = 27U;
int8_t x67 = INT8_MIN;
int16_t x70 = INT16_MIN;
volatile uint64_t x72 = 200975569243522890LLU;
static uint32_t x81 = UINT32_MAX;
uint32_t x82 = 18807U;
int32_t t16 = 435479232;
uint8_t x87 = 48U;
int32_t t17 = -15343090;
volatile int8_t x102 = 1;
uint32_t x103 = 4733624U;
volatile int32_t t21 = -2;
int32_t t23 = 72;
int8_t x114 = -1;
static int32_t x130 = 8;
static uint8_t x132 = UINT8_MAX;
volatile int32_t t30 = 33221;
volatile int32_t t32 = 130162139;
int64_t x158 = INT64_MIN;
static int16_t x159 = INT16_MAX;
static uint32_t x161 = 1U;
int8_t x173 = -38;
volatile uint64_t x182 = UINT64_MAX;
volatile int32_t t37 = 363101;
volatile int8_t x187 = -38;
int32_t t38 = 270032;
int16_t x191 = INT16_MAX;
static int8_t x195 = INT8_MIN;
static volatile int32_t t41 = 204505;
static int8_t x217 = INT8_MIN;
int32_t x218 = -1;
int32_t x220 = INT32_MIN;
uint32_t x223 = 38U;
uint8_t x228 = UINT8_MAX;
static int32_t t47 = 46;
uint64_t x229 = 2205790LLU;
int16_t x232 = INT16_MIN;
volatile int32_t t51 = 284697;
int32_t x261 = -1;
int32_t t53 = -1972;
int8_t x269 = INT8_MAX;
int32_t t54 = 163;
int32_t x293 = -1;
uint64_t x295 = 0LLU;
int8_t x296 = INT8_MIN;
int16_t x303 = -1;
volatile int8_t x304 = -1;
uint16_t x307 = UINT16_MAX;
int64_t x308 = -1LL;
static uint64_t x311 = UINT64_MAX;
volatile int32_t t61 = -18635711;
int64_t x323 = INT64_MAX;
static int8_t x356 = INT8_MAX;
int32_t t68 = 3249326;
int8_t x370 = -1;
volatile int64_t x372 = -4935456857131LL;
volatile int32_t x388 = INT32_MIN;
uint32_t x399 = UINT32_MAX;
static int16_t x400 = INT16_MAX;
volatile int32_t x401 = INT32_MIN;
int64_t x409 = -16967LL;
uint16_t x411 = 102U;
volatile int32_t t80 = 118393639;
static int32_t x413 = -1;
int32_t x419 = INT32_MAX;
int32_t t82 = -1682535;
uint64_t x422 = 871344833LLU;
static volatile uint32_t x430 = 3646325U;
static uint64_t x437 = UINT64_MAX;
int64_t x446 = -1LL;
int16_t x454 = -1;
int16_t x457 = INT16_MIN;
int16_t x468 = -43;
uint64_t x469 = UINT64_MAX;
int32_t x470 = INT32_MAX;
int32_t t94 = -2;
int64_t x481 = INT64_MIN;
uint32_t x484 = 26042849U;
int32_t t95 = 1;
uint8_t x487 = UINT8_MAX;
int32_t t96 = 960;
int8_t x490 = 3;
int32_t t97 = 3828;
int32_t x495 = INT32_MIN;
int32_t t98 = -218758;
int16_t x498 = 0;
int32_t t100 = -1422061;
int32_t t101 = 30093563;
static int32_t t102 = 771286;
uint64_t x518 = 8LLU;
int8_t x519 = INT8_MAX;
int32_t x522 = -113;
volatile int32_t t104 = -2002166;
static int8_t x532 = -1;
static uint8_t x535 = 52U;
int32_t x538 = -132569003;
volatile int16_t x561 = -1279;
int16_t x568 = -1;
uint64_t x579 = 79418857760061LLU;
int64_t x581 = -57698570LL;
int32_t x584 = INT32_MIN;
static int32_t x586 = INT32_MIN;
int8_t x589 = INT8_MIN;
int32_t t119 = 115083805;
static int8_t x598 = 7;
uint16_t x607 = 811U;
int64_t x609 = INT64_MIN;
int64_t x617 = -86426235772997LL;
int32_t x619 = INT32_MIN;
volatile int32_t t125 = 164;
volatile int32_t t126 = -2371123;
uint16_t x629 = UINT16_MAX;
int32_t t127 = 28507613;
uint8_t x642 = UINT8_MAX;
volatile uint8_t x643 = 1U;
int16_t x645 = INT16_MIN;
int16_t x647 = INT16_MAX;
volatile int32_t t130 = 41;
static int16_t x651 = INT16_MIN;
uint32_t x653 = UINT32_MAX;
int8_t x655 = -1;
int32_t t132 = -5333438;
int32_t t135 = -2326;
int32_t x677 = 156630;
int32_t x678 = -1;
int8_t x679 = INT8_MIN;
uint16_t x697 = UINT16_MAX;
int32_t t140 = 204598853;
uint16_t x701 = UINT16_MAX;
static volatile int64_t x712 = -3920910802462LL;
volatile int32_t t144 = -806993099;
int32_t x727 = INT32_MAX;
int64_t x744 = INT64_MIN;
int8_t x746 = INT8_MAX;
int32_t x747 = -1;
volatile uint64_t x755 = 32531LLU;
int64_t x758 = -11136LL;
int32_t x777 = INT32_MIN;
static int16_t x778 = INT16_MIN;
static int32_t t156 = -3324625;
static uint32_t x784 = UINT32_MAX;
uint64_t x786 = 8274500818745375LLU;
static volatile int64_t x794 = -1LL;
volatile int32_t x797 = 9440855;
int32_t x799 = INT32_MIN;
volatile int32_t t162 = 147791;
static int16_t x818 = INT16_MIN;
static int8_t x819 = 3;
uint16_t x820 = 617U;
volatile uint8_t x841 = 5U;
int32_t x852 = 4398855;
int8_t x854 = INT8_MAX;
uint8_t x856 = 0U;
int32_t t170 = -1;
volatile int32_t x857 = INT32_MAX;
uint64_t x859 = 3028497761591616LLU;
volatile int32_t x860 = 15;
static int32_t t171 = 12425;
int32_t t172 = -6284;
int16_t x873 = INT16_MAX;
static volatile int32_t x882 = 430372787;
int32_t x895 = INT32_MAX;
volatile int64_t x907 = -1LL;
uint16_t x908 = 25885U;
int32_t x914 = -1;
volatile int32_t t182 = 126188;
static uint8_t x920 = UINT8_MAX;
static int8_t x929 = -1;
static int8_t x935 = INT8_MAX;
int64_t x938 = -1LL;
volatile uint64_t x939 = 7377032771110LLU;
int32_t x940 = -1;
int32_t t189 = -965125;
int16_t x957 = -2;
static uint8_t x959 = 1U;
uint64_t x981 = UINT64_MAX;
volatile int32_t t197 = 954008304;
int64_t x1001 = INT64_MIN;
int16_t x1002 = 215;
uint16_t x1004 = 7796U;


void f0(void) {
    	static uint32_t x1 = 590237U;
	int32_t x2 = INT32_MIN;
	static int8_t x4 = -1;
	int32_t t0 = -9;

    t0 = ((x1+(x2+x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -3760862;
	uint8_t x6 = 3U;
	volatile int32_t x7 = 2460;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -10;

    t1 = ((x5+(x6+x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t2 = -1;

    t2 = ((x13+(x14+x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x18 = INT32_MIN;
	static int16_t x19 = INT16_MAX;
	int64_t x20 = -519367429113117LL;
	volatile int32_t t3 = 3951240;

    t3 = ((x17+(x18+x19))==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x21 = -1;
	int8_t x22 = INT8_MIN;
	int16_t x24 = -123;
	int32_t t4 = -1222;

    t4 = ((x21+(x22+x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x34 = INT8_MAX;
	uint32_t x35 = 17U;
	uint16_t x36 = 1959U;

    t5 = ((x33+(x34+x35))==x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x38 = INT64_MIN;
	int64_t x39 = 1344272062981LL;
	uint32_t x40 = 394935U;

    t6 = ((x37+(x38+x39))==x40);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MAX;
	uint32_t x42 = UINT32_MAX;
	static int16_t x44 = INT16_MIN;
	static int32_t t7 = -6603677;

    t7 = ((x41+(x42+x43))==x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x45 = -1;
	static int32_t x47 = 102689276;
	int16_t x48 = INT16_MIN;
	int32_t t8 = 247;

    t8 = ((x45+(x46+x47))==x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = -1LL;
	uint8_t x50 = 17U;
	int32_t t9 = 917;

    t9 = ((x49+(x50+x51))==x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = 33;
	int64_t x54 = -1LL;
	volatile uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t10 = -264655;

    t10 = ((x53+(x54+x55))==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = UINT32_MAX;
	int32_t x58 = -1;
	uint64_t x59 = 3418328487501LLU;
	int16_t x60 = -61;
	static int32_t t11 = -1;

    t11 = ((x57+(x58+x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x61 = UINT32_MAX;
	int16_t x63 = INT16_MIN;

    t12 = ((x61+(x62+x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x66 = -1;
	static volatile int32_t x68 = INT32_MIN;
	int32_t t13 = -119544;

    t13 = ((x65+(x66+x67))==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x69 = 131928964948LLU;
	static int64_t x71 = -236321LL;
	volatile int32_t t14 = 33288;

    t14 = ((x69+(x70+x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = INT32_MIN;
	uint64_t x78 = 16316009495905446LLU;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t15 = 1;

    t15 = ((x77+(x78+x79))==x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x83 = INT16_MAX;
	static int8_t x84 = INT8_MIN;

    t16 = ((x81+(x82+x83))==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint64_t x85 = 635844718LLU;
	uint8_t x86 = 13U;
	uint32_t x88 = 88910139U;

    t17 = ((x85+(x86+x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x89 = INT32_MIN;
	int16_t x90 = 1002;
	static int8_t x91 = 0;
	int32_t x92 = INT32_MIN;
	int32_t t18 = -13182929;

    t18 = ((x89+(x90+x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = 10279;
	volatile int64_t x94 = 1141280161LL;
	int8_t x95 = 9;
	volatile int16_t x96 = INT16_MAX;
	int32_t t19 = -197604;

    t19 = ((x93+(x94+x95))==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 8U;
	volatile int64_t x98 = 232011994052LL;
	uint8_t x99 = UINT8_MAX;
	uint8_t x100 = 10U;
	int32_t t20 = -15458926;

    t20 = ((x97+(x98+x99))==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x101 = -1024193091207LL;
	uint32_t x104 = UINT32_MAX;

    t21 = ((x101+(x102+x103))==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	static int8_t x107 = INT8_MAX;
	static int16_t x108 = INT16_MAX;
	int32_t t22 = 497;

    t22 = ((x105+(x106+x107))==x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x109 = 1998U;
	int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	static int64_t x112 = -1LL;

    t23 = ((x109+(x110+x111))==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x113 = 1524151U;
	int64_t x115 = 1267817567848490598LL;
	int64_t x116 = INT64_MAX;
	volatile int32_t t24 = -962;

    t24 = ((x113+(x114+x115))==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x117 = 10;
	int16_t x118 = -1;
	int8_t x119 = -17;
	uint64_t x120 = 10474734433575381LLU;
	int32_t t25 = -2779738;

    t25 = ((x117+(x118+x119))==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x125 = 154824U;
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t x128 = 1656;
	volatile int32_t t26 = -1479092;

    t26 = ((x125+(x126+x127))==x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x129 = INT16_MIN;
	static uint32_t x131 = 191U;
	int32_t t27 = 106895;

    t27 = ((x129+(x130+x131))==x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x133 = 952534766416LLU;
	static volatile uint64_t x134 = UINT64_MAX;
	volatile uint64_t x135 = 16111167572LLU;
	uint16_t x136 = UINT16_MAX;
	int32_t t28 = -710421;

    t28 = ((x133+(x134+x135))==x136);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x138 = 10391;
	uint16_t x139 = UINT16_MAX;
	uint8_t x140 = 3U;
	int32_t t29 = 20145;

    t29 = ((x137+(x138+x139))==x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x141 = INT16_MIN;
	int64_t x142 = -15359590714321LL;
	uint32_t x143 = 920U;
	volatile int64_t x144 = 405801530LL;

    t30 = ((x141+(x142+x143))==x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x145 = UINT32_MAX;
	int8_t x146 = 2;
	uint16_t x147 = UINT16_MAX;
	volatile uint16_t x148 = 7717U;
	int32_t t31 = 264249438;

    t31 = ((x145+(x146+x147))==x148);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x153 = INT32_MIN;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -140048153617693799LL;
	volatile uint32_t x156 = UINT32_MAX;

    t32 = ((x153+(x154+x155))==x156);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x157 = INT8_MIN;
	static uint8_t x160 = 1U;
	int32_t t33 = 25789650;

    t33 = ((x157+(x158+x159))==x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x162 = 13;
	int16_t x163 = INT16_MIN;
	uint32_t x164 = 39U;
	int32_t t34 = -1535788;

    t34 = ((x161+(x162+x163))==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x174 = 497U;
	static uint32_t x175 = 1745623U;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t35 = 6;

    t35 = ((x173+(x174+x175))==x176);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x177 = 2U;
	static volatile int32_t x178 = 79741461;
	static int32_t x179 = INT32_MIN;
	volatile int32_t x180 = 0;
	volatile int32_t t36 = 81896;

    t36 = ((x177+(x178+x179))==x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x181 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MIN;

    t37 = ((x181+(x182+x183))==x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = -10545;
	int16_t x186 = 905;
	volatile int8_t x188 = INT8_MAX;

    t38 = ((x185+(x186+x187))==x188);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x189 = -3;
	volatile int16_t x190 = -187;
	uint64_t x192 = UINT64_MAX;
	static int32_t t39 = 48110;

    t39 = ((x189+(x190+x191))==x192);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x193 = 729LLU;
	static int16_t x194 = INT16_MIN;
	int8_t x196 = INT8_MAX;
	int32_t t40 = 120303;

    t40 = ((x193+(x194+x195))==x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint8_t x197 = UINT8_MAX;
	volatile int32_t x198 = INT32_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MAX;

    t41 = ((x197+(x198+x199))==x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	uint64_t x203 = 16209LLU;
	static int16_t x204 = -25;
	int32_t t42 = 49;

    t42 = ((x201+(x202+x203))==x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x209 = INT64_MIN;
	int8_t x210 = 3;
	int64_t x211 = -1LL;
	volatile int8_t x212 = INT8_MAX;
	int32_t t43 = -5;

    t43 = ((x209+(x210+x211))==x212);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x213 = 16LL;
	int16_t x214 = -1;
	static volatile int8_t x215 = INT8_MIN;
	int16_t x216 = 810;
	int32_t t44 = 403;

    t44 = ((x213+(x214+x215))==x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x219 = -15;
	volatile int32_t t45 = 37;

    t45 = ((x217+(x218+x219))==x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = -1;
	uint64_t x222 = 7LLU;
	int32_t x224 = -1;
	static int32_t t46 = 461026;

    t46 = ((x221+(x222+x223))==x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x225 = INT64_MIN;
	int32_t x226 = 8178;
	static int64_t x227 = 1325LL;

    t47 = ((x225+(x226+x227))==x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x230 = 25636429LLU;
	int16_t x231 = -1;
	int32_t t48 = -7028;

    t48 = ((x229+(x230+x231))==x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x233 = 1;
	uint8_t x234 = UINT8_MAX;
	static uint8_t x235 = 1U;
	uint64_t x236 = 430613566365396427LLU;
	int32_t t49 = -6;

    t49 = ((x233+(x234+x235))==x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = INT16_MAX;
	uint16_t x246 = 86U;
	static uint8_t x247 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;
	int32_t t50 = -2667989;

    t50 = ((x245+(x246+x247))==x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x257 = -886;
	int32_t x258 = INT32_MIN;
	static int64_t x259 = -12264961730LL;
	int64_t x260 = INT64_MAX;

    t51 = ((x257+(x258+x259))==x260);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x262 = -1LL;
	static uint8_t x263 = 3U;
	volatile int32_t x264 = -1;
	volatile int32_t t52 = -7681;

    t52 = ((x261+(x262+x263))==x264);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x265 = 9601U;
	uint8_t x266 = 10U;
	int8_t x267 = -2;
	uint16_t x268 = 6U;

    t53 = ((x265+(x266+x267))==x268);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x270 = 3501759975818LLU;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;

    t54 = ((x269+(x270+x271))==x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x273 = 387886074U;
	static int8_t x274 = 12;
	static uint16_t x275 = UINT16_MAX;
	int8_t x276 = 14;
	volatile int32_t t55 = 206677;

    t55 = ((x273+(x274+x275))==x276);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x277 = -1;
	volatile int16_t x278 = INT16_MIN;
	uint8_t x279 = 105U;
	int8_t x280 = INT8_MIN;
	int32_t t56 = 7;

    t56 = ((x277+(x278+x279))==x280);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x281 = INT64_MIN;
	uint32_t x282 = 8412059U;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 12940196U;
	volatile int32_t t57 = 1;

    t57 = ((x281+(x282+x283))==x284);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x294 = INT64_MAX;
	volatile int32_t t58 = 993428150;

    t58 = ((x293+(x294+x295))==x296);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x301 = -1085;
	volatile int32_t x302 = -1;
	int32_t t59 = -107;

    t59 = ((x301+(x302+x303))==x304);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x305 = INT16_MAX;
	int32_t x306 = 0;
	int32_t t60 = 589028321;

    t60 = ((x305+(x306+x307))==x308);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x309 = 28LLU;
	volatile int32_t x310 = INT32_MAX;
	uint32_t x312 = 36U;

    t61 = ((x309+(x310+x311))==x312);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x313 = 1;
	int32_t x314 = 3635020;
	int16_t x315 = 7;
	int16_t x316 = INT16_MIN;
	int32_t t62 = -15141;

    t62 = ((x313+(x314+x315))==x316);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x317 = 1U;
	static int8_t x318 = 3;
	static int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t63 = -9679232;

    t63 = ((x317+(x318+x319))==x320);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x321 = -2;
	volatile int32_t x322 = -213;
	uint8_t x324 = 14U;
	int32_t t64 = 693974;

    t64 = ((x321+(x322+x323))==x324);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x329 = INT32_MIN;
	int64_t x330 = -46272768891555LL;
	static int64_t x331 = -1LL;
	uint16_t x332 = UINT16_MAX;
	int32_t t65 = -170179;

    t65 = ((x329+(x330+x331))==x332);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x337 = INT8_MAX;
	int8_t x338 = 1;
	int64_t x339 = -1LL;
	uint8_t x340 = 95U;
	int32_t t66 = 6;

    t66 = ((x337+(x338+x339))==x340);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	static uint32_t x351 = 231U;
	static volatile int32_t x352 = INT32_MIN;
	static volatile int32_t t67 = 1176848;

    t67 = ((x349+(x350+x351))==x352);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x353 = INT8_MIN;
	volatile uint64_t x354 = 1677704LLU;
	volatile int8_t x355 = 1;

    t68 = ((x353+(x354+x355))==x356);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x357 = INT32_MIN;
	volatile int16_t x358 = -1;
	static volatile int16_t x359 = INT16_MAX;
	volatile int16_t x360 = INT16_MIN;
	int32_t t69 = 610;

    t69 = ((x357+(x358+x359))==x360);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = -728;
	volatile int32_t t70 = 759;

    t70 = ((x361+(x362+x363))==x364);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x365 = 258366U;
	int16_t x366 = -113;
	int8_t x367 = 1;
	int64_t x368 = -1LL;
	volatile int32_t t71 = -106;

    t71 = ((x365+(x366+x367))==x368);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x369 = INT64_MAX;
	int32_t x371 = -348;
	static int32_t t72 = 345962331;

    t72 = ((x369+(x370+x371))==x372);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x377 = 916U;
	uint8_t x378 = 2U;
	int32_t x379 = 3196895;
	static int64_t x380 = INT64_MAX;
	int32_t t73 = -1616;

    t73 = ((x377+(x378+x379))==x380);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x381 = -1;
	int32_t x382 = 6;
	uint16_t x383 = 195U;
	int8_t x384 = -1;
	volatile int32_t t74 = -957539218;

    t74 = ((x381+(x382+x383))==x384);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x385 = -302LL;
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	int32_t t75 = -69177348;

    t75 = ((x385+(x386+x387))==x388);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x389 = 2953532U;
	static int64_t x390 = -1LL;
	int16_t x391 = 13950;
	volatile int32_t x392 = -8176494;
	int32_t t76 = -3166;

    t76 = ((x389+(x390+x391))==x392);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	volatile uint32_t x395 = 107837U;
	uint64_t x396 = 159869137719996LLU;
	volatile int32_t t77 = -16;

    t77 = ((x393+(x394+x395))==x396);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MAX;
	int32_t t78 = -3;

    t78 = ((x397+(x398+x399))==x400);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x402 = -9;
	int64_t x403 = -766852563193148LL;
	int64_t x404 = 276LL;
	static volatile int32_t t79 = -1864;

    t79 = ((x401+(x402+x403))==x404);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x410 = UINT8_MAX;
	uint64_t x412 = UINT64_MAX;

    t80 = ((x409+(x410+x411))==x412);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x414 = 455606124229341328LLU;
	uint16_t x415 = 0U;
	int8_t x416 = -1;
	int32_t t81 = 61;

    t81 = ((x413+(x414+x415))==x416);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x417 = 2LLU;
	int32_t x418 = -1;
	static uint16_t x420 = 14946U;

    t82 = ((x417+(x418+x419))==x420);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x421 = INT64_MIN;
	static int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MAX;
	int32_t t83 = 198984;

    t83 = ((x421+(x422+x423))==x424);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x429 = 2U;
	volatile int8_t x431 = INT8_MIN;
	int64_t x432 = INT64_MIN;
	int32_t t84 = 2079863;

    t84 = ((x429+(x430+x431))==x432);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x433 = 52505U;
	int32_t x434 = 3383635;
	int8_t x435 = INT8_MAX;
	volatile int16_t x436 = 10885;
	int32_t t85 = 1567;

    t85 = ((x433+(x434+x435))==x436);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	int32_t x440 = -1;
	int32_t t86 = -8;

    t86 = ((x437+(x438+x439))==x440);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x441 = INT8_MIN;
	uint64_t x442 = UINT64_MAX;
	uint64_t x443 = UINT64_MAX;
	volatile uint64_t x444 = 13132571903131LLU;
	int32_t t87 = -27724758;

    t87 = ((x441+(x442+x443))==x444);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x445 = -1LL;
	volatile int64_t x447 = 1574LL;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t88 = -3109;

    t88 = ((x445+(x446+x447))==x448);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x449 = 17U;
	int8_t x450 = INT8_MAX;
	volatile int16_t x451 = -4;
	uint16_t x452 = UINT16_MAX;
	static int32_t t89 = -78;

    t89 = ((x449+(x450+x451))==x452);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x453 = INT16_MIN;
	static uint32_t x455 = 1667624843U;
	int32_t x456 = INT32_MIN;
	static int32_t t90 = -1;

    t90 = ((x453+(x454+x455))==x456);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint16_t x458 = UINT16_MAX;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t91 = -31277315;

    t91 = ((x457+(x458+x459))==x460);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x465 = 4U;
	int8_t x466 = 17;
	volatile int64_t x467 = -1LL;
	volatile int32_t t92 = 51;

    t92 = ((x465+(x466+x467))==x468);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x471 = -9;
	uint16_t x472 = UINT16_MAX;
	static int32_t t93 = 43457;

    t93 = ((x469+(x470+x471))==x472);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x473 = INT32_MAX;
	uint64_t x474 = 1LLU;
	volatile uint8_t x475 = 61U;
	int32_t x476 = INT32_MAX;

    t94 = ((x473+(x474+x475))==x476);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x482 = -1LL;
	uint64_t x483 = 3260121694332090LLU;

    t95 = ((x481+(x482+x483))==x484);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x485 = INT16_MIN;
	static volatile int16_t x486 = -1;
	int16_t x488 = -1;

    t96 = ((x485+(x486+x487))==x488);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x489 = 8506739004LLU;
	int16_t x491 = INT16_MAX;
	uint16_t x492 = UINT16_MAX;

    t97 = ((x489+(x490+x491))==x492);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x493 = -1;
	static int64_t x494 = INT64_MAX;
	volatile int64_t x496 = -1LL;

    t98 = ((x493+(x494+x495))==x496);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x497 = 148480563930358240LL;
	uint64_t x499 = 7LLU;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t99 = 0;

    t99 = ((x497+(x498+x499))==x500);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x505 = 1U;
	uint32_t x506 = 25U;
	int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MIN;

    t100 = ((x505+(x506+x507))==x508);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x509 = 4983376744306LLU;
	static volatile int64_t x510 = -32322182562680984LL;
	uint8_t x511 = UINT8_MAX;
	volatile uint64_t x512 = 16764541145570LLU;

    t101 = ((x509+(x510+x511))==x512);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x513 = -1;
	int16_t x514 = -1;
	uint8_t x515 = UINT8_MAX;
	int64_t x516 = -6787921888LL;

    t102 = ((x513+(x514+x515))==x516);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x517 = INT8_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t103 = -1459;

    t103 = ((x517+(x518+x519))==x520);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x521 = INT32_MIN;
	int32_t x523 = 16395895;
	int16_t x524 = INT16_MIN;

    t104 = ((x521+(x522+x523))==x524);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x525 = 2183U;
	int32_t x526 = INT32_MIN;
	static volatile uint64_t x527 = 7388989LLU;
	uint16_t x528 = UINT16_MAX;
	int32_t t105 = -732;

    t105 = ((x525+(x526+x527))==x528);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x529 = -1;
	uint16_t x530 = 5U;
	uint8_t x531 = UINT8_MAX;
	static int32_t t106 = 0;

    t106 = ((x529+(x530+x531))==x532);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x533 = -1;
	int8_t x534 = INT8_MIN;
	static int16_t x536 = 8155;
	int32_t t107 = 32627;

    t107 = ((x533+(x534+x535))==x536);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x537 = 1;
	uint16_t x539 = 13809U;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t108 = 0;

    t108 = ((x537+(x538+x539))==x540);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x549 = UINT8_MAX;
	static int32_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	volatile uint16_t x552 = 3178U;
	int32_t t109 = 1;

    t109 = ((x549+(x550+x551))==x552);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x553 = -1;
	volatile uint64_t x554 = UINT64_MAX;
	static uint32_t x555 = UINT32_MAX;
	volatile int16_t x556 = 29;
	volatile int32_t t110 = -20059;

    t110 = ((x553+(x554+x555))==x556);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x557 = -49;
	uint64_t x558 = 34260LLU;
	int32_t x559 = -119;
	uint8_t x560 = UINT8_MAX;
	static volatile int32_t t111 = 1;

    t111 = ((x557+(x558+x559))==x560);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x562 = -15;
	int32_t x563 = -1;
	uint8_t x564 = 5U;
	int32_t t112 = 320614;

    t112 = ((x561+(x562+x563))==x564);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x565 = UINT32_MAX;
	uint64_t x566 = 53910297057699LLU;
	volatile int8_t x567 = INT8_MIN;
	volatile int32_t t113 = -48;

    t113 = ((x565+(x566+x567))==x568);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x569 = -1;
	int8_t x570 = INT8_MIN;
	uint64_t x571 = 767277339604003679LLU;
	int16_t x572 = 5061;
	static volatile int32_t t114 = -100867;

    t114 = ((x569+(x570+x571))==x572);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x573 = -1;
	static volatile int8_t x574 = -3;
	int8_t x575 = -1;
	static int16_t x576 = INT16_MAX;
	volatile int32_t t115 = 3889;

    t115 = ((x573+(x574+x575))==x576);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x577 = -1LL;
	volatile int8_t x578 = -1;
	static uint8_t x580 = 44U;
	int32_t t116 = 212305917;

    t116 = ((x577+(x578+x579))==x580);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x582 = 177106052U;
	volatile uint64_t x583 = 460114351LLU;
	int32_t t117 = -12;

    t117 = ((x581+(x582+x583))==x584);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x585 = -16747712LL;
	static int64_t x587 = -71LL;
	int64_t x588 = INT64_MIN;
	int32_t t118 = 30232;

    t118 = ((x585+(x586+x587))==x588);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x590 = 87U;
	int16_t x591 = INT16_MAX;
	static int64_t x592 = 3LL;

    t119 = ((x589+(x590+x591))==x592);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x597 = 4212U;
	int64_t x599 = INT64_MIN;
	int64_t x600 = INT64_MIN;
	static volatile int32_t t120 = 56878657;

    t120 = ((x597+(x598+x599))==x600);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x601 = -1;
	volatile uint64_t x602 = 226LLU;
	int32_t x603 = 327520;
	int16_t x604 = INT16_MIN;
	int32_t t121 = -52343094;

    t121 = ((x601+(x602+x603))==x604);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x605 = INT64_MIN;
	int8_t x606 = -1;
	static volatile int64_t x608 = 0LL;
	static volatile int32_t t122 = -6528350;

    t122 = ((x605+(x606+x607))==x608);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x610 = 105;
	uint8_t x611 = 0U;
	static int16_t x612 = INT16_MIN;
	static volatile int32_t t123 = 148458;

    t123 = ((x609+(x610+x611))==x612);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x618 = 1;
	int8_t x620 = INT8_MIN;
	volatile int32_t t124 = -195455;

    t124 = ((x617+(x618+x619))==x620);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x621 = INT16_MAX;
	volatile int32_t x622 = 1;
	uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 0U;

    t125 = ((x621+(x622+x623))==x624);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x625 = -1;
	static volatile int64_t x626 = INT64_MAX;
	int64_t x627 = -1LL;
	static int8_t x628 = -1;

    t126 = ((x625+(x626+x627))==x628);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x630 = 101154U;
	uint8_t x631 = 90U;
	volatile int64_t x632 = INT64_MIN;

    t127 = ((x629+(x630+x631))==x632);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x637 = -1;
	volatile uint8_t x638 = 98U;
	static uint16_t x639 = UINT16_MAX;
	static uint64_t x640 = UINT64_MAX;
	int32_t t128 = -480513;

    t128 = ((x637+(x638+x639))==x640);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x641 = 0U;
	static int64_t x644 = INT64_MIN;
	volatile int32_t t129 = -217195450;

    t129 = ((x641+(x642+x643))==x644);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x646 = 7376;
	volatile uint16_t x648 = 1U;

    t130 = ((x645+(x646+x647))==x648);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x649 = -1;
	volatile int16_t x650 = -1;
	uint16_t x652 = 0U;
	int32_t t131 = 25407921;

    t131 = ((x649+(x650+x651))==x652);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x654 = INT32_MAX;
	int8_t x656 = INT8_MIN;

    t132 = ((x653+(x654+x655))==x656);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x657 = 2;
	int64_t x658 = -328LL;
	int8_t x659 = -1;
	int32_t x660 = INT32_MIN;
	volatile int32_t t133 = 2;

    t133 = ((x657+(x658+x659))==x660);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x669 = 731695680LLU;
	volatile uint8_t x670 = 5U;
	uint64_t x671 = UINT64_MAX;
	static uint8_t x672 = 12U;
	int32_t t134 = 67955140;

    t134 = ((x669+(x670+x671))==x672);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x673 = -141;
	int32_t x674 = 72108316;
	uint64_t x675 = UINT64_MAX;
	uint64_t x676 = 344717040026037LLU;

    t135 = ((x673+(x674+x675))==x676);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x680 = 4;
	volatile int32_t t136 = 0;

    t136 = ((x677+(x678+x679))==x680);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x681 = -1;
	int16_t x682 = 75;
	int64_t x683 = 4727LL;
	volatile int8_t x684 = 61;
	static volatile int32_t t137 = 5;

    t137 = ((x681+(x682+x683))==x684);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x689 = 1464U;
	volatile uint64_t x690 = 1100LLU;
	int64_t x691 = -966665903155168909LL;
	int64_t x692 = -36215483956666976LL;
	int32_t t138 = -66519597;

    t138 = ((x689+(x690+x691))==x692);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x693 = INT8_MIN;
	uint16_t x694 = UINT16_MAX;
	volatile uint32_t x695 = 2107U;
	static uint8_t x696 = 0U;
	int32_t t139 = -1;

    t139 = ((x693+(x694+x695))==x696);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MAX;
	static uint8_t x700 = 23U;

    t140 = ((x697+(x698+x699))==x700);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x702 = 145493419U;
	uint8_t x703 = 0U;
	int32_t x704 = 235986;
	volatile int32_t t141 = 233482723;

    t141 = ((x701+(x702+x703))==x704);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x709 = -1LL;
	static uint64_t x710 = 3LLU;
	int64_t x711 = INT64_MIN;
	static volatile int32_t t142 = -9579710;

    t142 = ((x709+(x710+x711))==x712);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x717 = INT32_MAX;
	int32_t x718 = -60;
	uint32_t x719 = 248824U;
	int16_t x720 = -1;
	volatile int32_t t143 = -84141736;

    t143 = ((x717+(x718+x719))==x720);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x721 = INT8_MIN;
	uint8_t x722 = 1U;
	static uint32_t x723 = 275087U;
	volatile int32_t x724 = -1;

    t144 = ((x721+(x722+x723))==x724);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x725 = -1;
	static int8_t x726 = INT8_MIN;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t145 = 772;

    t145 = ((x725+(x726+x727))==x728);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x733 = INT8_MIN;
	volatile int32_t x734 = INT32_MIN;
	static int64_t x735 = INT64_MAX;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t146 = -3703;

    t146 = ((x733+(x734+x735))==x736);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x737 = INT8_MIN;
	static int8_t x738 = 0;
	static volatile int64_t x739 = 200253947LL;
	int8_t x740 = INT8_MIN;
	int32_t t147 = -536109354;

    t147 = ((x737+(x738+x739))==x740);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x741 = 14605579599898815LLU;
	volatile uint16_t x742 = 11373U;
	int16_t x743 = 1;
	static volatile int32_t t148 = 2;

    t148 = ((x741+(x742+x743))==x744);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x745 = -15309;
	int64_t x748 = 5LL;
	volatile int32_t t149 = 494562;

    t149 = ((x745+(x746+x747))==x748);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x753 = INT32_MIN;
	uint16_t x754 = 735U;
	int16_t x756 = -9413;
	static volatile int32_t t150 = -801275865;

    t150 = ((x753+(x754+x755))==x756);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x757 = 3;
	int16_t x759 = INT16_MIN;
	volatile int32_t x760 = 36224913;
	int32_t t151 = -210506346;

    t151 = ((x757+(x758+x759))==x760);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x761 = UINT32_MAX;
	uint32_t x762 = 270U;
	static int8_t x763 = INT8_MIN;
	static int16_t x764 = INT16_MAX;
	volatile int32_t t152 = 57878373;

    t152 = ((x761+(x762+x763))==x764);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x765 = 31;
	int32_t x766 = INT32_MIN;
	int8_t x767 = 2;
	int32_t x768 = INT32_MIN;
	static int32_t t153 = -8123657;

    t153 = ((x765+(x766+x767))==x768);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x769 = UINT32_MAX;
	volatile int32_t x770 = -1303311;
	uint64_t x771 = 1108275621408278141LLU;
	volatile uint64_t x772 = 1122075974357LLU;
	volatile int32_t t154 = -30310191;

    t154 = ((x769+(x770+x771))==x772);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x773 = INT16_MIN;
	static int32_t x774 = -1;
	int16_t x775 = INT16_MIN;
	static int32_t x776 = -1;
	int32_t t155 = 94320;

    t155 = ((x773+(x774+x775))==x776);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x779 = -1LL;
	int32_t x780 = INT32_MAX;

    t156 = ((x777+(x778+x779))==x780);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x781 = UINT8_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	uint64_t x783 = 95920LLU;
	int32_t t157 = -629840347;

    t157 = ((x781+(x782+x783))==x784);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x785 = INT16_MIN;
	static uint16_t x787 = 22301U;
	static volatile uint32_t x788 = 104898U;
	static volatile int32_t t158 = 1;

    t158 = ((x785+(x786+x787))==x788);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x793 = 0;
	static int8_t x795 = 5;
	int16_t x796 = -1;
	int32_t t159 = 16321140;

    t159 = ((x793+(x794+x795))==x796);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x798 = 1;
	volatile uint16_t x800 = 198U;
	volatile int32_t t160 = 7226;

    t160 = ((x797+(x798+x799))==x800);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x805 = -32;
	volatile uint16_t x806 = UINT16_MAX;
	static volatile uint64_t x807 = 5173997LLU;
	static volatile uint16_t x808 = UINT16_MAX;
	volatile int32_t t161 = 2;

    t161 = ((x805+(x806+x807))==x808);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x813 = -1;
	uint64_t x814 = 39064LLU;
	int8_t x815 = INT8_MAX;
	int16_t x816 = -1;

    t162 = ((x813+(x814+x815))==x816);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x817 = INT16_MIN;
	volatile int32_t t163 = -583024;

    t163 = ((x817+(x818+x819))==x820);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x821 = INT32_MIN;
	uint32_t x822 = UINT32_MAX;
	int64_t x823 = -1LL;
	volatile int16_t x824 = 988;
	volatile int32_t t164 = 3993863;

    t164 = ((x821+(x822+x823))==x824);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x833 = -1;
	int64_t x834 = 2261369639LL;
	volatile int32_t x835 = INT32_MIN;
	volatile uint8_t x836 = 3U;
	int32_t t165 = -388036672;

    t165 = ((x833+(x834+x835))==x836);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x837 = INT32_MIN;
	static int64_t x838 = -1LL;
	uint8_t x839 = 2U;
	uint64_t x840 = UINT64_MAX;
	volatile int32_t t166 = 1400;

    t166 = ((x837+(x838+x839))==x840);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x842 = 1U;
	uint8_t x843 = 114U;
	uint8_t x844 = UINT8_MAX;
	static volatile int32_t t167 = 714998;

    t167 = ((x841+(x842+x843))==x844);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x845 = 15702;
	volatile int32_t x846 = INT32_MAX;
	int64_t x847 = -1LL;
	static int16_t x848 = INT16_MAX;
	volatile int32_t t168 = 11;

    t168 = ((x845+(x846+x847))==x848);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x849 = INT16_MIN;
	static int32_t x850 = -61325934;
	int32_t x851 = -12267030;
	volatile int32_t t169 = 70157;

    t169 = ((x849+(x850+x851))==x852);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x853 = UINT16_MAX;
	volatile uint16_t x855 = 687U;

    t170 = ((x853+(x854+x855))==x856);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x858 = INT64_MIN;

    t171 = ((x857+(x858+x859))==x860);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x861 = 102U;
	int64_t x862 = -1LL;
	uint64_t x863 = 1253746336555314LLU;
	volatile int8_t x864 = -10;

    t172 = ((x861+(x862+x863))==x864);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x869 = INT8_MAX;
	int32_t x870 = INT32_MAX;
	int32_t x871 = INT32_MIN;
	uint8_t x872 = 2U;
	volatile int32_t t173 = -78;

    t173 = ((x869+(x870+x871))==x872);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x874 = 3665;
	static uint16_t x875 = 490U;
	int32_t x876 = INT32_MAX;
	volatile int32_t t174 = -82800;

    t174 = ((x873+(x874+x875))==x876);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x881 = UINT64_MAX;
	uint32_t x883 = 40831U;
	int8_t x884 = -30;
	static volatile int32_t t175 = 19351;

    t175 = ((x881+(x882+x883))==x884);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x885 = -4;
	static int8_t x886 = INT8_MAX;
	uint16_t x887 = UINT16_MAX;
	uint16_t x888 = 8042U;
	static int32_t t176 = 88;

    t176 = ((x885+(x886+x887))==x888);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x889 = -1;
	int64_t x890 = -2183228290687LL;
	int8_t x891 = -1;
	int32_t x892 = INT32_MAX;
	int32_t t177 = 15;

    t177 = ((x889+(x890+x891))==x892);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x893 = 36U;
	volatile int32_t x894 = INT32_MIN;
	uint32_t x896 = 58U;
	volatile int32_t t178 = 1766;

    t178 = ((x893+(x894+x895))==x896);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x897 = INT64_MIN;
	int16_t x898 = 102;
	uint16_t x899 = UINT16_MAX;
	int8_t x900 = INT8_MIN;
	int32_t t179 = 3335858;

    t179 = ((x897+(x898+x899))==x900);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x901 = -1;
	volatile uint32_t x902 = 519257940U;
	static int16_t x903 = INT16_MAX;
	int64_t x904 = INT64_MIN;
	volatile int32_t t180 = -3;

    t180 = ((x901+(x902+x903))==x904);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x905 = -1LL;
	int32_t x906 = 118593539;
	int32_t t181 = -3085999;

    t181 = ((x905+(x906+x907))==x908);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x913 = INT8_MIN;
	uint16_t x915 = 104U;
	static int8_t x916 = 25;

    t182 = ((x913+(x914+x915))==x916);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x917 = -1;
	int8_t x918 = 8;
	int8_t x919 = 1;
	int32_t t183 = 32527;

    t183 = ((x917+(x918+x919))==x920);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x925 = INT32_MAX;
	volatile uint64_t x926 = 174308418LLU;
	int32_t x927 = INT32_MIN;
	uint8_t x928 = 86U;
	volatile int32_t t184 = 100346421;

    t184 = ((x925+(x926+x927))==x928);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x930 = -1;
	int16_t x931 = -37;
	uint32_t x932 = 1265532196U;
	static int32_t t185 = 2211966;

    t185 = ((x929+(x930+x931))==x932);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x933 = INT16_MAX;
	int32_t x934 = -1;
	uint32_t x936 = UINT32_MAX;
	volatile int32_t t186 = 192236;

    t186 = ((x933+(x934+x935))==x936);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x937 = UINT32_MAX;
	int32_t t187 = 14;

    t187 = ((x937+(x938+x939))==x940);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x941 = -1;
	uint8_t x942 = 13U;
	static int64_t x943 = -1LL;
	static volatile uint64_t x944 = 18704LLU;
	int32_t t188 = 110276;

    t188 = ((x941+(x942+x943))==x944);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x945 = INT8_MIN;
	volatile uint16_t x946 = 531U;
	volatile int16_t x947 = 57;
	uint8_t x948 = 10U;

    t189 = ((x945+(x946+x947))==x948);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x953 = UINT64_MAX;
	uint8_t x954 = UINT8_MAX;
	volatile int32_t x955 = INT32_MIN;
	uint32_t x956 = 2U;
	static int32_t t190 = 447971;

    t190 = ((x953+(x954+x955))==x956);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x958 = -1;
	int16_t x960 = 253;
	volatile int32_t t191 = -30298;

    t191 = ((x957+(x958+x959))==x960);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x961 = 1U;
	int16_t x962 = INT16_MAX;
	uint32_t x963 = 863526905U;
	uint32_t x964 = 13547U;
	volatile int32_t t192 = 0;

    t192 = ((x961+(x962+x963))==x964);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x969 = UINT8_MAX;
	volatile int8_t x970 = -1;
	int16_t x971 = INT16_MIN;
	int8_t x972 = INT8_MAX;
	static volatile int32_t t193 = -485590;

    t193 = ((x969+(x970+x971))==x972);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x977 = 988U;
	uint64_t x978 = UINT64_MAX;
	int64_t x979 = 1LL;
	uint32_t x980 = 0U;
	int32_t t194 = -4619;

    t194 = ((x977+(x978+x979))==x980);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x982 = 0U;
	volatile int64_t x983 = -528975468564LL;
	int8_t x984 = 1;
	volatile int32_t t195 = 91177627;

    t195 = ((x981+(x982+x983))==x984);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x985 = -11;
	uint16_t x986 = 11878U;
	volatile int16_t x987 = 98;
	uint8_t x988 = 39U;
	int32_t t196 = 18765857;

    t196 = ((x985+(x986+x987))==x988);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x989 = -1;
	int16_t x990 = 9493;
	volatile int32_t x991 = INT32_MIN;
	static int8_t x992 = -1;

    t197 = ((x989+(x990+x991))==x992);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x993 = UINT64_MAX;
	uint16_t x994 = 373U;
	static uint64_t x995 = 947859581999093LLU;
	int64_t x996 = INT64_MIN;
	int32_t t198 = 155307571;

    t198 = ((x993+(x994+x995))==x996);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1003 = INT8_MIN;
	int32_t t199 = -18;

    t199 = ((x1001+(x1002+x1003))==x1004);

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

