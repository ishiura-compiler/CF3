
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

int8_t x4 = INT8_MIN;
static volatile int16_t x9 = INT16_MIN;
int32_t t2 = 0;
int32_t x17 = -9;
int8_t x20 = INT8_MAX;
uint8_t x24 = 20U;
static int8_t x31 = 3;
static uint64_t x32 = 102LLU;
int32_t t7 = 31048235;
int64_t x42 = INT64_MIN;
int32_t x44 = INT32_MIN;
uint16_t x45 = 88U;
int8_t x51 = INT8_MIN;
uint16_t x54 = 11U;
int64_t x55 = INT64_MAX;
uint32_t x66 = 17U;
volatile int64_t x71 = -1LL;
int8_t x73 = INT8_MAX;
uint8_t x78 = UINT8_MAX;
int16_t x81 = INT16_MAX;
uint16_t x87 = UINT16_MAX;
uint32_t x105 = UINT32_MAX;
int16_t x117 = INT16_MIN;
uint32_t x122 = 35590645U;
uint8_t x123 = 6U;
int32_t x124 = INT32_MAX;
static int8_t x127 = INT8_MIN;
uint64_t x129 = 71059321896056224LLU;
static uint64_t x131 = UINT64_MAX;
uint64_t x132 = 573176937LLU;
static int64_t x134 = INT64_MIN;
int8_t x135 = INT8_MIN;
uint16_t x140 = 7901U;
volatile int32_t t29 = -8993894;
int32_t x143 = INT32_MAX;
static volatile uint32_t x146 = 1U;
uint8_t x150 = 9U;
int32_t t33 = -31451;
uint8_t x158 = 119U;
static uint32_t x162 = UINT32_MAX;
int8_t x164 = -4;
int8_t x165 = INT8_MIN;
uint16_t x171 = UINT16_MAX;
int8_t x176 = -1;
volatile uint64_t x178 = UINT64_MAX;
int32_t t40 = 168757618;
uint32_t x185 = UINT32_MAX;
static volatile int16_t x193 = INT16_MAX;
uint32_t x202 = 371671053U;
uint32_t x207 = 56393865U;
static int32_t x213 = -7421;
int8_t x216 = 3;
uint32_t x217 = 73137U;
static int64_t x223 = -1450168451203LL;
uint8_t x231 = 119U;
uint32_t x232 = UINT32_MAX;
int8_t x235 = -1;
volatile int32_t t55 = 218;
static int8_t x249 = INT8_MIN;
int8_t x251 = -1;
uint8_t x261 = UINT8_MAX;
volatile uint32_t x266 = UINT32_MAX;
volatile uint32_t x268 = 259U;
int64_t x283 = INT64_MAX;
int32_t t62 = 1;
int32_t t63 = 4062;
int32_t x291 = 646;
uint8_t x292 = 17U;
volatile uint8_t x293 = 15U;
uint64_t x298 = 9LLU;
volatile int16_t x301 = -2;
static int8_t x302 = INT8_MIN;
uint32_t x303 = UINT32_MAX;
uint8_t x312 = 30U;
int64_t x316 = INT64_MIN;
uint8_t x341 = 48U;
int32_t x352 = 703;
static uint8_t x355 = UINT8_MAX;
uint64_t x360 = UINT64_MAX;
int8_t x366 = INT8_MAX;
uint8_t x391 = UINT8_MAX;
volatile int32_t t86 = -414779301;
static uint64_t x400 = UINT64_MAX;
int32_t x401 = -72;
int64_t x434 = 171423187101654060LL;
volatile int16_t x435 = INT16_MIN;
static volatile uint16_t x438 = 14757U;
volatile int64_t x442 = INT64_MIN;
volatile int16_t x444 = -13743;
volatile uint8_t x446 = 6U;
volatile int64_t x453 = INT64_MIN;
int32_t t101 = -619352296;
int32_t x458 = -202350;
uint8_t x460 = 2U;
int32_t x464 = -1;
int32_t t104 = -2;
static int16_t x474 = INT16_MIN;
int32_t x484 = 564990654;
int64_t x485 = INT64_MIN;
static int64_t x497 = INT64_MIN;
volatile int32_t t111 = -102;
int64_t x507 = INT64_MAX;
volatile int32_t t114 = -157;
uint8_t x540 = UINT8_MAX;
static uint8_t x544 = 27U;
static int64_t x546 = -1LL;
uint8_t x553 = UINT8_MAX;
static volatile uint8_t x563 = 53U;
int8_t x567 = INT8_MIN;
static int32_t t125 = 1;
static int8_t x569 = -1;
int16_t x571 = -1;
int16_t x583 = -7;
int32_t x590 = -243329;
int32_t x594 = -1;
uint16_t x597 = UINT16_MAX;
int32_t t132 = -29259;
static int64_t x605 = INT64_MIN;
static int32_t x608 = 2217;
int8_t x610 = INT8_MIN;
volatile uint16_t x619 = UINT16_MAX;
static int32_t t136 = 125549216;
static uint32_t x645 = 60U;
int8_t x649 = -12;
uint8_t x658 = 23U;
int8_t x663 = INT8_MIN;
static uint8_t x664 = UINT8_MAX;
uint64_t x670 = 69LLU;
int32_t x676 = INT32_MAX;
static volatile uint8_t x687 = 22U;
int64_t x688 = 1035532746LL;
volatile int32_t t149 = 4250;
int32_t x690 = INT32_MIN;
static int32_t t150 = 31670;
uint8_t x700 = 14U;
int32_t t153 = 61733378;
volatile uint64_t x705 = UINT64_MAX;
int16_t x707 = INT16_MAX;
static int64_t x713 = INT64_MAX;
uint16_t x717 = 43U;
int32_t t157 = 9849803;
uint16_t x722 = 3U;
int8_t x725 = INT8_MIN;
uint8_t x726 = 2U;
int32_t t159 = -11688158;
static uint16_t x735 = 2012U;
int8_t x742 = INT8_MAX;
int8_t x743 = 9;
int32_t t163 = 497975;
int16_t x762 = 12;
int8_t x766 = 20;
uint16_t x767 = 10216U;
int16_t x768 = -1;
int32_t x772 = 11925177;
volatile int32_t t168 = -11668;
uint8_t x780 = 25U;
volatile int64_t x784 = 258104643713LL;
uint8_t x795 = 24U;
uint8_t x799 = 2U;
uint8_t x801 = UINT8_MAX;
uint64_t x803 = 65218166716132LLU;
volatile uint8_t x807 = UINT8_MAX;
int8_t x808 = INT8_MIN;
int64_t x809 = 124935708LL;
int32_t x812 = -1;
int32_t x816 = -1;
int16_t x819 = INT16_MIN;
int8_t x823 = INT8_MAX;
uint64_t x828 = UINT64_MAX;
int32_t x829 = 3;
uint32_t x832 = 50U;
volatile int8_t x833 = 39;
int64_t x834 = INT64_MIN;
int32_t t184 = 42;
static volatile int32_t t187 = 118302;
int8_t x856 = INT8_MIN;
int8_t x861 = 0;
volatile uint32_t x866 = 6908U;
int16_t x867 = -1;
int32_t t193 = 78;
int16_t x883 = INT16_MIN;
uint8_t x885 = 114U;
int8_t x894 = 1;
uint8_t x897 = UINT8_MAX;
uint8_t x899 = 91U;
uint32_t x900 = 26973U;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	static int32_t t0 = 1;

    t0 = (((x1>x2)-x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x5 = 1U;
	volatile int32_t x6 = INT32_MAX;
	static volatile int64_t x7 = -1LL;
	int16_t x8 = 14;
	volatile int32_t t1 = 3;

    t1 = (((x5>x6)-x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 0;
	uint16_t x11 = 88U;
	int64_t x12 = INT64_MIN;

    t2 = (((x9>x10)-x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static uint8_t x14 = 0U;
	static volatile int32_t x15 = 20567573;
	int32_t x16 = INT32_MIN;
	static int32_t t3 = 728;

    t3 = (((x13>x14)-x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = -43;
	static int32_t x19 = -1;
	int32_t t4 = -1;

    t4 = (((x17>x18)-x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = 424;
	volatile int16_t x23 = INT16_MAX;
	int32_t t5 = 1917;

    t5 = (((x21>x22)-x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x29 = -1LL;
	int16_t x30 = INT16_MAX;
	int32_t t6 = 3398895;

    t6 = (((x29>x30)-x31)!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MIN;
	volatile int8_t x39 = INT8_MIN;
	volatile uint32_t x40 = 1871276U;

    t7 = (((x37>x38)-x39)!=x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x41 = 1U;
	int64_t x43 = -85LL;
	int32_t t8 = -665505;

    t8 = (((x41>x42)-x43)!=x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x46 = INT64_MIN;
	uint32_t x47 = 211U;
	static int32_t x48 = INT32_MIN;
	volatile int32_t t9 = 64553841;

    t9 = (((x45>x46)-x47)!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = -1;
	uint16_t x50 = 48U;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t10 = 174510;

    t10 = (((x49>x50)-x51)!=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x53 = 216446757899118692LLU;
	volatile int16_t x56 = INT16_MIN;
	int32_t t11 = -139110915;

    t11 = (((x53>x54)-x55)!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x57 = 45U;
	static uint16_t x58 = 5U;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -1;
	int32_t t12 = -171144;

    t12 = (((x57>x58)-x59)!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x62 = 43395;
	volatile int16_t x63 = 1;
	static int32_t x64 = INT32_MIN;
	int32_t t13 = 7144;

    t13 = (((x61>x62)-x63)!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x65 = -1;
	uint16_t x67 = 192U;
	volatile int16_t x68 = INT16_MAX;
	volatile int32_t t14 = 6;

    t14 = (((x65>x66)-x67)!=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = 810;
	int64_t x72 = INT64_MAX;
	int32_t t15 = -3;

    t15 = (((x69>x70)-x71)!=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x74 = 219U;
	int16_t x75 = -2;
	volatile int64_t x76 = INT64_MIN;
	static volatile int32_t t16 = -36;

    t16 = (((x73>x74)-x75)!=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = INT8_MIN;
	uint8_t x79 = 1U;
	static volatile int16_t x80 = INT16_MAX;
	volatile int32_t t17 = 5;

    t17 = (((x77>x78)-x79)!=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x82 = -31000LL;
	int8_t x83 = 56;
	uint32_t x84 = 859782U;
	int32_t t18 = 0;

    t18 = (((x81>x82)-x83)!=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = 3;
	volatile uint16_t x86 = 119U;
	int32_t x88 = -1;
	volatile int32_t t19 = -1228453;

    t19 = (((x85>x86)-x87)!=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 3U;
	static volatile uint16_t x102 = 4U;
	int32_t x103 = -1;
	static int16_t x104 = -1;
	volatile int32_t t20 = -1;

    t20 = (((x101>x102)-x103)!=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x106 = -1;
	int32_t x107 = 1;
	volatile int32_t x108 = INT32_MAX;
	static volatile int32_t t21 = 771906645;

    t21 = (((x105>x106)-x107)!=x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x109 = -25;
	int16_t x110 = INT16_MIN;
	static volatile int8_t x111 = INT8_MIN;
	volatile uint64_t x112 = 70115186LLU;
	volatile int32_t t22 = -296463454;

    t22 = (((x109>x110)-x111)!=x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	uint32_t x114 = UINT32_MAX;
	static int16_t x115 = -1;
	int32_t x116 = INT32_MAX;
	int32_t t23 = 1;

    t23 = (((x113>x114)-x115)!=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x118 = 2;
	static uint16_t x119 = UINT16_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t24 = -888025;

    t24 = (((x117>x118)-x119)!=x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = -1;
	int32_t t25 = 31142043;

    t25 = (((x121>x122)-x123)!=x124);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	int8_t x128 = -1;
	static int32_t t26 = 3338;

    t26 = (((x125>x126)-x127)!=x128);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x130 = 27;
	int32_t t27 = 215;

    t27 = (((x129>x130)-x131)!=x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x133 = 96;
	volatile int16_t x136 = -1784;
	static volatile int32_t t28 = -24433876;

    t28 = (((x133>x134)-x135)!=x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MIN;
	int16_t x139 = INT16_MIN;

    t29 = (((x137>x138)-x139)!=x140);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = 0;
	static int64_t x142 = 647926891331483193LL;
	static int64_t x144 = -1LL;
	int32_t t30 = -252008510;

    t30 = (((x141>x142)-x143)!=x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MAX;
	int32_t t31 = 14000;

    t31 = (((x145>x146)-x147)!=x148);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x149 = 54;
	uint32_t x151 = 19857U;
	int8_t x152 = -1;
	static volatile int32_t t32 = -33069165;

    t32 = (((x149>x150)-x151)!=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x153 = 50U;
	int8_t x154 = INT8_MIN;
	uint16_t x155 = UINT16_MAX;
	static int8_t x156 = INT8_MAX;

    t33 = (((x153>x154)-x155)!=x156);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x157 = INT64_MIN;
	int16_t x159 = 62;
	volatile int32_t x160 = -1;
	int32_t t34 = -37;

    t34 = (((x157>x158)-x159)!=x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x161 = 2U;
	uint64_t x163 = 57147087LLU;
	int32_t t35 = -359578437;

    t35 = (((x161>x162)-x163)!=x164);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	static int64_t x168 = -1LL;
	int32_t t36 = -1618;

    t36 = (((x165>x166)-x167)!=x168);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x169 = INT8_MAX;
	int64_t x170 = -1LL;
	uint16_t x172 = UINT16_MAX;
	int32_t t37 = 11661;

    t37 = (((x169>x170)-x171)!=x172);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x173 = INT32_MIN;
	int64_t x174 = -65510LL;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t t38 = -1639;

    t38 = (((x173>x174)-x175)!=x176);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = INT16_MIN;
	uint64_t x179 = 149906872926LLU;
	int64_t x180 = -997LL;
	static int32_t t39 = -86744968;

    t39 = (((x177>x178)-x179)!=x180);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x181 = UINT32_MAX;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = 53;

    t40 = (((x181>x182)-x183)!=x184);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x186 = UINT32_MAX;
	volatile uint8_t x187 = 1U;
	int16_t x188 = -545;
	int32_t t41 = 598420111;

    t41 = (((x185>x186)-x187)!=x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x189 = 117U;
	int8_t x190 = INT8_MAX;
	uint32_t x191 = 61U;
	int8_t x192 = -1;
	int32_t t42 = -11;

    t42 = (((x189>x190)-x191)!=x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = -1073678831LL;
	volatile int32_t t43 = -862;

    t43 = (((x193>x194)-x195)!=x196);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x197 = 2;
	int32_t x198 = INT32_MAX;
	int32_t x199 = -1608584;
	int16_t x200 = 100;
	volatile int32_t t44 = -52348;

    t44 = (((x197>x198)-x199)!=x200);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x201 = 688LLU;
	static uint8_t x203 = UINT8_MAX;
	int32_t x204 = INT32_MIN;
	volatile int32_t t45 = 8215;

    t45 = (((x201>x202)-x203)!=x204);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x205 = INT32_MAX;
	int8_t x206 = INT8_MAX;
	static uint32_t x208 = UINT32_MAX;
	int32_t t46 = 15404;

    t46 = (((x205>x206)-x207)!=x208);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x209 = UINT8_MAX;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = -164353224811240LL;
	int8_t x212 = 54;
	volatile int32_t t47 = -3227;

    t47 = (((x209>x210)-x211)!=x212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x214 = 1008351232182LL;
	static uint8_t x215 = UINT8_MAX;
	volatile int32_t t48 = 1;

    t48 = (((x213>x214)-x215)!=x216);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x218 = -2185;
	static volatile int64_t x219 = -1LL;
	int32_t x220 = -1;
	static int32_t t49 = -1;

    t49 = (((x217>x218)-x219)!=x220);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x221 = -1;
	int64_t x222 = INT64_MAX;
	int64_t x224 = 471987014188129LL;
	int32_t t50 = 33271;

    t50 = (((x221>x222)-x223)!=x224);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x225 = -1;
	int16_t x226 = INT16_MAX;
	static int8_t x227 = -1;
	volatile uint32_t x228 = 1778508696U;
	volatile int32_t t51 = -1958;

    t51 = (((x225>x226)-x227)!=x228);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = 11081;
	int16_t x230 = INT16_MAX;
	static int32_t t52 = 15715451;

    t52 = (((x229>x230)-x231)!=x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x233 = INT16_MIN;
	int16_t x234 = INT16_MAX;
	uint64_t x236 = UINT64_MAX;
	int32_t t53 = 52468;

    t53 = (((x233>x234)-x235)!=x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	int16_t x239 = 887;
	volatile int16_t x240 = INT16_MAX;
	int32_t t54 = -152;

    t54 = (((x237>x238)-x239)!=x240);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x241 = UINT32_MAX;
	static int64_t x242 = -1LL;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;

    t55 = (((x241>x242)-x243)!=x244);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x250 = -1LL;
	static int8_t x252 = INT8_MIN;
	static int32_t t56 = -83867460;

    t56 = (((x249>x250)-x251)!=x252);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x253 = 13;
	int32_t x254 = INT32_MIN;
	uint16_t x255 = 5U;
	static uint8_t x256 = 112U;
	static volatile int32_t t57 = -3115;

    t57 = (((x253>x254)-x255)!=x256);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = 1369;
	int64_t x258 = 67095603LL;
	int16_t x259 = -1;
	int64_t x260 = -1LL;
	volatile int32_t t58 = -1;

    t58 = (((x257>x258)-x259)!=x260);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x262 = 1476;
	int64_t x263 = 37343721481502LL;
	volatile uint16_t x264 = 3084U;
	static volatile int32_t t59 = -3;

    t59 = (((x261>x262)-x263)!=x264);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = INT8_MAX;
	uint32_t x267 = 409U;
	int32_t t60 = 3545;

    t60 = (((x265>x266)-x267)!=x268);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = -1;
	uint64_t x270 = 2137380214446265314LLU;
	static int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t61 = 336195473;

    t61 = (((x269>x270)-x271)!=x272);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = INT16_MAX;
	uint8_t x282 = UINT8_MAX;
	volatile uint8_t x284 = UINT8_MAX;

    t62 = (((x281>x282)-x283)!=x284);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x285 = -29LL;
	volatile int8_t x286 = -1;
	volatile int32_t x287 = INT32_MAX;
	int32_t x288 = INT32_MIN;

    t63 = (((x285>x286)-x287)!=x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x289 = 106;
	volatile int16_t x290 = -319;
	volatile int32_t t64 = 3;

    t64 = (((x289>x290)-x291)!=x292);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x294 = INT16_MIN;
	static uint32_t x295 = 1733U;
	int64_t x296 = -540349188523LL;
	int32_t t65 = 15;

    t65 = (((x293>x294)-x295)!=x296);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x297 = 3U;
	int8_t x299 = 1;
	uint16_t x300 = 11U;
	int32_t t66 = 58;

    t66 = (((x297>x298)-x299)!=x300);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x304 = 7885U;
	static volatile int32_t t67 = -126278316;

    t67 = (((x301>x302)-x303)!=x304);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x305 = INT32_MIN;
	static int8_t x306 = INT8_MIN;
	int16_t x307 = -30;
	int64_t x308 = -1LL;
	int32_t t68 = 7036477;

    t68 = (((x305>x306)-x307)!=x308);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x309 = INT16_MAX;
	int8_t x310 = -1;
	volatile uint32_t x311 = UINT32_MAX;
	int32_t t69 = -9761;

    t69 = (((x309>x310)-x311)!=x312);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = INT32_MIN;
	volatile uint16_t x314 = 874U;
	int64_t x315 = INT64_MAX;
	static volatile int32_t t70 = 111662613;

    t70 = (((x313>x314)-x315)!=x316);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x317 = INT16_MIN;
	static int32_t x318 = INT32_MIN;
	static int16_t x319 = 1;
	volatile uint16_t x320 = 0U;
	int32_t t71 = -3789543;

    t71 = (((x317>x318)-x319)!=x320);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x321 = 877665;
	static uint16_t x322 = UINT16_MAX;
	static int8_t x323 = 18;
	volatile uint16_t x324 = UINT16_MAX;
	volatile int32_t t72 = -427267721;

    t72 = (((x321>x322)-x323)!=x324);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x325 = INT8_MIN;
	static volatile int16_t x326 = -229;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MAX;
	int32_t t73 = 0;

    t73 = (((x325>x326)-x327)!=x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x329 = -1LL;
	static int64_t x330 = 117465LL;
	int32_t x331 = INT32_MAX;
	int16_t x332 = -3;
	volatile int32_t t74 = -125631;

    t74 = (((x329>x330)-x331)!=x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x333 = -1;
	int32_t x334 = -1;
	uint8_t x335 = 2U;
	int16_t x336 = -1;
	static int32_t t75 = 48391;

    t75 = (((x333>x334)-x335)!=x336);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x342 = -26041947332627LL;
	int8_t x343 = INT8_MAX;
	uint64_t x344 = 184545427792LLU;
	int32_t t76 = -116664394;

    t76 = (((x341>x342)-x343)!=x344);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = 7U;
	static int32_t x350 = INT32_MIN;
	uint8_t x351 = 8U;
	int32_t t77 = -1;

    t77 = (((x349>x350)-x351)!=x352);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x353 = -1;
	volatile uint16_t x354 = 859U;
	int32_t x356 = INT32_MAX;
	int32_t t78 = 128108587;

    t78 = (((x353>x354)-x355)!=x356);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x357 = INT64_MIN;
	volatile int8_t x358 = -12;
	uint64_t x359 = 29416127624369584LLU;
	int32_t t79 = 13713682;

    t79 = (((x357>x358)-x359)!=x360);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x365 = INT64_MIN;
	int8_t x367 = 0;
	int8_t x368 = -1;
	volatile int32_t t80 = -45119247;

    t80 = (((x365>x366)-x367)!=x368);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x369 = UINT16_MAX;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = 21926U;
	int16_t x372 = -327;
	static int32_t t81 = -695693;

    t81 = (((x369>x370)-x371)!=x372);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x373 = 880;
	uint32_t x374 = 7U;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -30;
	volatile int32_t t82 = -17882;

    t82 = (((x373>x374)-x375)!=x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x377 = -1LL;
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = INT8_MIN;
	static uint64_t x380 = 239038589LLU;
	static int32_t t83 = -91;

    t83 = (((x377>x378)-x379)!=x380);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x381 = 7587384711463838LLU;
	volatile int32_t x382 = INT32_MIN;
	volatile uint8_t x383 = 9U;
	static int32_t x384 = INT32_MAX;
	int32_t t84 = -964;

    t84 = (((x381>x382)-x383)!=x384);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = INT64_MIN;
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = 57;
	uint32_t x388 = 3706235U;
	int32_t t85 = -805;

    t85 = (((x385>x386)-x387)!=x388);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x389 = 1254U;
	volatile int16_t x390 = -1;
	uint8_t x392 = UINT8_MAX;

    t86 = (((x389>x390)-x391)!=x392);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x393 = INT16_MIN;
	uint8_t x394 = 108U;
	volatile uint8_t x395 = UINT8_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t87 = 6093271;

    t87 = (((x393>x394)-x395)!=x396);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x399 = -1LL;
	int32_t t88 = 816;

    t88 = (((x397>x398)-x399)!=x400);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x402 = 62;
	int16_t x403 = INT16_MIN;
	volatile uint64_t x404 = 2094243681655LLU;
	int32_t t89 = -11375177;

    t89 = (((x401>x402)-x403)!=x404);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x405 = 447U;
	uint64_t x406 = UINT64_MAX;
	volatile int32_t x407 = -288181147;
	int32_t x408 = INT32_MAX;
	volatile int32_t t90 = 1;

    t90 = (((x405>x406)-x407)!=x408);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x409 = 47U;
	volatile int16_t x410 = 1360;
	int8_t x411 = INT8_MAX;
	uint32_t x412 = 1162875792U;
	int32_t t91 = -1;

    t91 = (((x409>x410)-x411)!=x412);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = INT8_MAX;
	static int64_t x414 = INT64_MIN;
	volatile int32_t x415 = INT32_MAX;
	int16_t x416 = INT16_MIN;
	volatile int32_t t92 = -5;

    t92 = (((x413>x414)-x415)!=x416);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x417 = INT16_MIN;
	int64_t x418 = INT64_MIN;
	uint8_t x419 = UINT8_MAX;
	uint64_t x420 = UINT64_MAX;
	int32_t t93 = -16662;

    t93 = (((x417>x418)-x419)!=x420);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x425 = 2521;
	int32_t x426 = INT32_MAX;
	volatile int16_t x427 = INT16_MIN;
	uint64_t x428 = 115737LLU;
	int32_t t94 = 3019584;

    t94 = (((x425>x426)-x427)!=x428);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x429 = UINT32_MAX;
	int16_t x430 = -650;
	int8_t x431 = -1;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t95 = 116342086;

    t95 = (((x429>x430)-x431)!=x432);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x433 = -23;
	uint8_t x436 = 20U;
	int32_t t96 = -3724551;

    t96 = (((x433>x434)-x435)!=x436);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = INT8_MIN;
	static int8_t x439 = INT8_MIN;
	int32_t x440 = 0;
	volatile int32_t t97 = -6;

    t97 = (((x437>x438)-x439)!=x440);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x441 = 1U;
	uint32_t x443 = 0U;
	int32_t t98 = 113729433;

    t98 = (((x441>x442)-x443)!=x444);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x445 = -49;
	static uint64_t x447 = 214241LLU;
	uint32_t x448 = UINT32_MAX;
	static int32_t t99 = 725;

    t99 = (((x445>x446)-x447)!=x448);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = 0;
	int64_t x450 = INT64_MAX;
	static int8_t x451 = -1;
	int8_t x452 = 4;
	int32_t t100 = 2001;

    t100 = (((x449>x450)-x451)!=x452);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x454 = INT64_MIN;
	int32_t x455 = INT32_MAX;
	static int8_t x456 = INT8_MIN;

    t101 = (((x453>x454)-x455)!=x456);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = INT16_MIN;
	static int64_t x459 = -1LL;
	int32_t t102 = 1;

    t102 = (((x457>x458)-x459)!=x460);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x461 = UINT32_MAX;
	int64_t x462 = 4781664224LL;
	int16_t x463 = INT16_MAX;
	volatile int32_t t103 = 972;

    t103 = (((x461>x462)-x463)!=x464);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x465 = 0U;
	volatile uint32_t x466 = 16726952U;
	static int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MIN;

    t104 = (((x465>x466)-x467)!=x468);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x469 = 1735U;
	static int16_t x470 = INT16_MIN;
	uint16_t x471 = UINT16_MAX;
	int32_t x472 = -209728663;
	int32_t t105 = 22241731;

    t105 = (((x469>x470)-x471)!=x472);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	uint64_t x476 = 1750945LLU;
	volatile int32_t t106 = 19852;

    t106 = (((x473>x474)-x475)!=x476);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = -1;
	volatile int16_t x478 = 3;
	volatile int32_t x479 = 12;
	int8_t x480 = INT8_MAX;
	int32_t t107 = -2224;

    t107 = (((x477>x478)-x479)!=x480);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x481 = INT64_MAX;
	int32_t x482 = INT32_MIN;
	int64_t x483 = -1LL;
	int32_t t108 = -129;

    t108 = (((x481>x482)-x483)!=x484);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x486 = 922U;
	uint32_t x487 = 5342839U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t109 = 685396;

    t109 = (((x485>x486)-x487)!=x488);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x489 = UINT64_MAX;
	static int32_t x490 = INT32_MAX;
	static int64_t x491 = 9939647690LL;
	int32_t x492 = -1;
	volatile int32_t t110 = 795;

    t110 = (((x489>x490)-x491)!=x492);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x498 = -1LL;
	volatile int32_t x499 = INT32_MAX;
	int16_t x500 = INT16_MIN;

    t111 = (((x497>x498)-x499)!=x500);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x501 = INT8_MIN;
	static int64_t x502 = -1LL;
	uint16_t x503 = UINT16_MAX;
	int16_t x504 = INT16_MAX;
	static int32_t t112 = -662660002;

    t112 = (((x501>x502)-x503)!=x504);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x505 = INT64_MIN;
	volatile int16_t x506 = 189;
	uint32_t x508 = 8482U;
	volatile int32_t t113 = 183;

    t113 = (((x505>x506)-x507)!=x508);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = INT8_MAX;
	volatile uint16_t x510 = 154U;
	int8_t x511 = -1;
	uint8_t x512 = 3U;

    t114 = (((x509>x510)-x511)!=x512);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x513 = 36968558LLU;
	int64_t x514 = 418658LL;
	int16_t x515 = -13738;
	volatile int8_t x516 = -51;
	static volatile int32_t t115 = 7286550;

    t115 = (((x513>x514)-x515)!=x516);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x517 = -1LL;
	int64_t x518 = INT64_MAX;
	int32_t x519 = -1;
	uint64_t x520 = UINT64_MAX;
	int32_t t116 = 13432263;

    t116 = (((x517>x518)-x519)!=x520);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x521 = 9793727821LL;
	int16_t x522 = -1;
	int16_t x523 = 3175;
	static int16_t x524 = -105;
	static int32_t t117 = -263981558;

    t117 = (((x521>x522)-x523)!=x524);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x525 = UINT32_MAX;
	int8_t x526 = 55;
	int32_t x527 = INT32_MAX;
	uint32_t x528 = UINT32_MAX;
	static int32_t t118 = 2141;

    t118 = (((x525>x526)-x527)!=x528);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x533 = -1LL;
	static volatile int8_t x534 = INT8_MAX;
	int64_t x535 = INT64_MAX;
	uint64_t x536 = 3598032770LLU;
	volatile int32_t t119 = 14;

    t119 = (((x533>x534)-x535)!=x536);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x537 = UINT64_MAX;
	uint16_t x538 = UINT16_MAX;
	static int64_t x539 = 179726820536413885LL;
	volatile int32_t t120 = 774981896;

    t120 = (((x537>x538)-x539)!=x540);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x541 = 1;
	static uint64_t x542 = 34702103LLU;
	int16_t x543 = INT16_MIN;
	volatile int32_t t121 = -114848;

    t121 = (((x541>x542)-x543)!=x544);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x545 = -1LL;
	volatile int32_t x547 = -1;
	int8_t x548 = 18;
	int32_t t122 = 616013425;

    t122 = (((x545>x546)-x547)!=x548);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x554 = INT16_MAX;
	static volatile int16_t x555 = -5;
	int32_t x556 = INT32_MIN;
	int32_t t123 = -25927175;

    t123 = (((x553>x554)-x555)!=x556);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint64_t x561 = 318004154720LLU;
	int16_t x562 = INT16_MIN;
	int16_t x564 = INT16_MIN;
	int32_t t124 = -9970303;

    t124 = (((x561>x562)-x563)!=x564);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x565 = 52U;
	volatile int8_t x566 = INT8_MIN;
	uint32_t x568 = 55U;

    t125 = (((x565>x566)-x567)!=x568);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x570 = -42;
	uint16_t x572 = 3705U;
	int32_t t126 = -8;

    t126 = (((x569>x570)-x571)!=x572);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x573 = UINT64_MAX;
	static volatile int16_t x574 = INT16_MIN;
	int16_t x575 = -1;
	static uint32_t x576 = UINT32_MAX;
	int32_t t127 = -896092;

    t127 = (((x573>x574)-x575)!=x576);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x577 = INT8_MAX;
	int32_t x578 = INT32_MIN;
	int8_t x579 = -5;
	int8_t x580 = INT8_MAX;
	static int32_t t128 = -14916847;

    t128 = (((x577>x578)-x579)!=x580);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x581 = INT16_MAX;
	uint32_t x582 = 500016582U;
	static uint16_t x584 = 39U;
	int32_t t129 = 111936;

    t129 = (((x581>x582)-x583)!=x584);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x589 = INT8_MAX;
	volatile int32_t x591 = -1;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t130 = 32489;

    t130 = (((x589>x590)-x591)!=x592);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x593 = 11U;
	int8_t x595 = INT8_MAX;
	static uint64_t x596 = 4538690394005412119LLU;
	volatile int32_t t131 = -664;

    t131 = (((x593>x594)-x595)!=x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x598 = INT32_MIN;
	int64_t x599 = INT64_MAX;
	static uint16_t x600 = 5669U;

    t132 = (((x597>x598)-x599)!=x600);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x606 = -3;
	static int64_t x607 = INT64_MAX;
	int32_t t133 = 237387359;

    t133 = (((x605>x606)-x607)!=x608);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x609 = UINT64_MAX;
	volatile int32_t x611 = -1;
	uint16_t x612 = UINT16_MAX;
	static volatile int32_t t134 = 473230603;

    t134 = (((x609>x610)-x611)!=x612);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MAX;
	volatile int32_t x620 = 495;
	volatile int32_t t135 = -280175971;

    t135 = (((x617>x618)-x619)!=x620);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x621 = 123745099866LLU;
	int16_t x622 = INT16_MAX;
	int64_t x623 = -1LL;
	int16_t x624 = -14;

    t136 = (((x621>x622)-x623)!=x624);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint16_t x629 = 12969U;
	int32_t x630 = INT32_MAX;
	uint64_t x631 = 2096LLU;
	int64_t x632 = -1453669LL;
	int32_t t137 = -3317;

    t137 = (((x629>x630)-x631)!=x632);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x637 = -1;
	static volatile uint8_t x638 = 54U;
	int16_t x639 = INT16_MIN;
	volatile int64_t x640 = -1LL;
	int32_t t138 = 11142;

    t138 = (((x637>x638)-x639)!=x640);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x641 = INT64_MAX;
	int32_t x642 = -500;
	static int16_t x643 = -1;
	uint16_t x644 = 5U;
	volatile int32_t t139 = -8772;

    t139 = (((x641>x642)-x643)!=x644);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x646 = INT32_MAX;
	int64_t x647 = -10864281263LL;
	volatile uint32_t x648 = UINT32_MAX;
	volatile int32_t t140 = -7;

    t140 = (((x645>x646)-x647)!=x648);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x650 = INT32_MIN;
	int64_t x651 = -1LL;
	int8_t x652 = INT8_MIN;
	int32_t t141 = -276;

    t141 = (((x649>x650)-x651)!=x652);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x657 = 26;
	int32_t x659 = INT32_MAX;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t142 = 4858265;

    t142 = (((x657>x658)-x659)!=x660);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x661 = 129U;
	volatile uint16_t x662 = UINT16_MAX;
	volatile int32_t t143 = 126;

    t143 = (((x661>x662)-x663)!=x664);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x665 = -4;
	volatile uint16_t x666 = UINT16_MAX;
	volatile int16_t x667 = INT16_MAX;
	int32_t x668 = INT32_MAX;
	int32_t t144 = 8737439;

    t144 = (((x665>x666)-x667)!=x668);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x669 = 17880;
	static uint8_t x671 = UINT8_MAX;
	int32_t x672 = INT32_MAX;
	static volatile int32_t t145 = -97676;

    t145 = (((x669>x670)-x671)!=x672);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x673 = 47U;
	int8_t x674 = INT8_MAX;
	uint16_t x675 = 16335U;
	volatile int32_t t146 = -288285640;

    t146 = (((x673>x674)-x675)!=x676);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x677 = 6U;
	uint64_t x678 = 3192086388179943507LLU;
	int16_t x679 = 1;
	volatile int64_t x680 = 1782646LL;
	int32_t t147 = -5355246;

    t147 = (((x677>x678)-x679)!=x680);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x681 = -1LL;
	int64_t x682 = -605LL;
	volatile int64_t x683 = -1LL;
	uint64_t x684 = UINT64_MAX;
	static volatile int32_t t148 = 255594709;

    t148 = (((x681>x682)-x683)!=x684);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x685 = INT64_MAX;
	int16_t x686 = 878;

    t149 = (((x685>x686)-x687)!=x688);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x689 = 1254U;
	int8_t x691 = INT8_MIN;
	uint32_t x692 = 317405U;

    t150 = (((x689>x690)-x691)!=x692);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x693 = UINT8_MAX;
	int32_t x694 = 121;
	uint16_t x695 = 774U;
	uint32_t x696 = 2U;
	int32_t t151 = -12;

    t151 = (((x693>x694)-x695)!=x696);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x697 = 16850U;
	int32_t x698 = -1;
	static volatile int16_t x699 = -1;
	int32_t t152 = -108034;

    t152 = (((x697>x698)-x699)!=x700);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x701 = INT8_MIN;
	static volatile int16_t x702 = INT16_MIN;
	uint16_t x703 = 171U;
	int64_t x704 = -1LL;

    t153 = (((x701>x702)-x703)!=x704);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x706 = 2655103U;
	uint64_t x708 = 250LLU;
	static volatile int32_t t154 = 1;

    t154 = (((x705>x706)-x707)!=x708);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = 0;
	int64_t x711 = INT64_MAX;
	int64_t x712 = 17026337LL;
	volatile int32_t t155 = 7984042;

    t155 = (((x709>x710)-x711)!=x712);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x714 = 59;
	uint32_t x715 = UINT32_MAX;
	static volatile int64_t x716 = -2862867797LL;
	volatile int32_t t156 = 2;

    t156 = (((x713>x714)-x715)!=x716);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x718 = 3;
	int32_t x719 = INT32_MAX;
	volatile int8_t x720 = INT8_MIN;

    t157 = (((x717>x718)-x719)!=x720);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x723 = -22584473828214519LL;
	int64_t x724 = 0LL;
	int32_t t158 = 154970385;

    t158 = (((x721>x722)-x723)!=x724);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x727 = 1673397;
	uint32_t x728 = 141255754U;

    t159 = (((x725>x726)-x727)!=x728);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x733 = 40531765876LL;
	int16_t x734 = 255;
	static int8_t x736 = INT8_MIN;
	int32_t t160 = 5876;

    t160 = (((x733>x734)-x735)!=x736);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x737 = UINT32_MAX;
	int32_t x738 = -1618854;
	static int32_t x739 = INT32_MAX;
	static uint32_t x740 = 77280444U;
	volatile int32_t t161 = -1621;

    t161 = (((x737>x738)-x739)!=x740);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x741 = INT16_MIN;
	int16_t x744 = -1;
	int32_t t162 = -384;

    t162 = (((x741>x742)-x743)!=x744);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x745 = -1;
	static int64_t x746 = INT64_MIN;
	volatile int32_t x747 = INT32_MAX;
	volatile int64_t x748 = -179801267970731568LL;

    t163 = (((x745>x746)-x747)!=x748);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x749 = -1LL;
	int32_t x750 = -1;
	int16_t x751 = -1;
	int32_t x752 = -46;
	int32_t t164 = 3;

    t164 = (((x749>x750)-x751)!=x752);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x757 = 160703919;
	uint8_t x758 = 3U;
	int32_t x759 = -1;
	volatile uint8_t x760 = 0U;
	int32_t t165 = 0;

    t165 = (((x757>x758)-x759)!=x760);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x761 = 7981U;
	int16_t x763 = 1;
	static uint16_t x764 = UINT16_MAX;
	volatile int32_t t166 = -897356935;

    t166 = (((x761>x762)-x763)!=x764);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x765 = -1;
	int32_t t167 = 721;

    t167 = (((x765>x766)-x767)!=x768);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x769 = 913831450484131861LLU;
	uint8_t x770 = UINT8_MAX;
	uint64_t x771 = 573461957382LLU;

    t168 = (((x769>x770)-x771)!=x772);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x773 = -2255LL;
	int32_t x774 = INT32_MIN;
	int32_t x775 = -165;
	int16_t x776 = INT16_MAX;
	static volatile int32_t t169 = 911093;

    t169 = (((x773>x774)-x775)!=x776);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x777 = INT16_MIN;
	int64_t x778 = 646392984202888LL;
	volatile uint64_t x779 = UINT64_MAX;
	volatile int32_t t170 = 107594;

    t170 = (((x777>x778)-x779)!=x780);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x781 = UINT64_MAX;
	volatile int16_t x782 = -1;
	static volatile int16_t x783 = INT16_MAX;
	int32_t t171 = 336;

    t171 = (((x781>x782)-x783)!=x784);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x785 = -1;
	volatile int8_t x786 = INT8_MAX;
	int16_t x787 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	volatile int32_t t172 = 0;

    t172 = (((x785>x786)-x787)!=x788);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x793 = 2924;
	int32_t x794 = -4;
	uint16_t x796 = 4820U;
	int32_t t173 = -4109824;

    t173 = (((x793>x794)-x795)!=x796);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x797 = INT64_MAX;
	uint32_t x798 = 3U;
	volatile uint16_t x800 = 15327U;
	volatile int32_t t174 = 348009;

    t174 = (((x797>x798)-x799)!=x800);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x802 = 1;
	volatile int8_t x804 = -1;
	static volatile int32_t t175 = 566165;

    t175 = (((x801>x802)-x803)!=x804);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x805 = UINT16_MAX;
	volatile uint16_t x806 = 12980U;
	static int32_t t176 = -130196;

    t176 = (((x805>x806)-x807)!=x808);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x810 = INT32_MAX;
	volatile uint8_t x811 = UINT8_MAX;
	volatile int32_t t177 = 19279728;

    t177 = (((x809>x810)-x811)!=x812);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x813 = 1;
	int8_t x814 = INT8_MAX;
	uint16_t x815 = 2U;
	int32_t t178 = 1;

    t178 = (((x813>x814)-x815)!=x816);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x817 = -4063;
	volatile uint32_t x818 = 9937153U;
	int64_t x820 = INT64_MAX;
	volatile int32_t t179 = -1109542;

    t179 = (((x817>x818)-x819)!=x820);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x821 = INT32_MAX;
	static uint16_t x822 = 4U;
	static int16_t x824 = 1;
	int32_t t180 = 73;

    t180 = (((x821>x822)-x823)!=x824);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x825 = -6;
	static int16_t x826 = -1;
	static volatile int32_t x827 = -9034081;
	volatile int32_t t181 = 9;

    t181 = (((x825>x826)-x827)!=x828);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x830 = INT64_MIN;
	uint32_t x831 = 4642253U;
	volatile int32_t t182 = 23126014;

    t182 = (((x829>x830)-x831)!=x832);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x835 = 0U;
	uint8_t x836 = 20U;
	volatile int32_t t183 = 1;

    t183 = (((x833>x834)-x835)!=x836);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x837 = INT8_MIN;
	int16_t x838 = -1;
	int8_t x839 = 42;
	int64_t x840 = 662LL;

    t184 = (((x837>x838)-x839)!=x840);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x841 = 433665225300LLU;
	static int32_t x842 = INT32_MAX;
	static int64_t x843 = -3833757814LL;
	static volatile int64_t x844 = INT64_MIN;
	int32_t t185 = -94662;

    t185 = (((x841>x842)-x843)!=x844);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x845 = INT32_MIN;
	static int16_t x846 = INT16_MAX;
	int8_t x847 = 28;
	uint64_t x848 = UINT64_MAX;
	static volatile int32_t t186 = 986;

    t186 = (((x845>x846)-x847)!=x848);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x849 = 1U;
	int8_t x850 = -61;
	static uint8_t x851 = UINT8_MAX;
	static int16_t x852 = -1;

    t187 = (((x849>x850)-x851)!=x852);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x853 = 1U;
	volatile int32_t x854 = INT32_MIN;
	volatile uint32_t x855 = 120U;
	int32_t t188 = -36539;

    t188 = (((x853>x854)-x855)!=x856);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x862 = -1;
	uint32_t x863 = 92721581U;
	volatile uint16_t x864 = UINT16_MAX;
	static int32_t t189 = 373672374;

    t189 = (((x861>x862)-x863)!=x864);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x865 = INT32_MAX;
	int32_t x868 = INT32_MIN;
	static volatile int32_t t190 = 1771670;

    t190 = (((x865>x866)-x867)!=x868);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = -19777860861LL;
	uint8_t x871 = 126U;
	static volatile int8_t x872 = INT8_MAX;
	int32_t t191 = 126564;

    t191 = (((x869>x870)-x871)!=x872);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x873 = 1U;
	static volatile int8_t x874 = 2;
	static volatile uint8_t x875 = 1U;
	int16_t x876 = INT16_MIN;
	static int32_t t192 = 36911;

    t192 = (((x873>x874)-x875)!=x876);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x877 = 13U;
	int16_t x878 = 3;
	uint8_t x879 = 109U;
	uint32_t x880 = 99U;

    t193 = (((x877>x878)-x879)!=x880);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x881 = 224U;
	uint64_t x882 = 47505188LLU;
	uint8_t x884 = UINT8_MAX;
	int32_t t194 = -3201;

    t194 = (((x881>x882)-x883)!=x884);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x886 = UINT16_MAX;
	uint8_t x887 = UINT8_MAX;
	static int32_t x888 = -1;
	int32_t t195 = -3;

    t195 = (((x885>x886)-x887)!=x888);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = INT64_MIN;
	int64_t x890 = 1518LL;
	int16_t x891 = 0;
	static int8_t x892 = -1;
	static int32_t t196 = 2103;

    t196 = (((x889>x890)-x891)!=x892);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x893 = INT64_MIN;
	static uint16_t x895 = 2909U;
	int32_t x896 = INT32_MIN;
	int32_t t197 = -1;

    t197 = (((x893>x894)-x895)!=x896);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x898 = -1LL;
	int32_t t198 = 382957;

    t198 = (((x897>x898)-x899)!=x900);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x901 = INT8_MIN;
	int64_t x902 = -1LL;
	uint32_t x903 = 31204579U;
	int8_t x904 = -16;
	int32_t t199 = 664;

    t199 = (((x901>x902)-x903)!=x904);

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

