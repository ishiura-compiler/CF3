
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

int32_t x4 = INT32_MAX;
int16_t x15 = INT16_MAX;
volatile int32_t t3 = 1;
uint64_t x21 = UINT64_MAX;
int64_t x25 = -1LL;
volatile int16_t x29 = 61;
int16_t x36 = 938;
volatile int32_t t8 = -366898;
int64_t x39 = INT64_MIN;
int8_t x40 = 12;
static uint16_t x42 = 0U;
uint64_t x47 = 567116761637071399LLU;
int16_t x52 = -13901;
int32_t x58 = INT32_MIN;
static int8_t x69 = 62;
static volatile int32_t x74 = 3480;
volatile int32_t t22 = -747654;
static int8_t x93 = 59;
volatile int16_t x103 = INT16_MIN;
volatile int16_t x105 = INT16_MIN;
volatile int32_t x107 = 254;
uint64_t x113 = 700LLU;
int32_t x114 = 64398338;
int32_t t30 = -6555490;
volatile int32_t t32 = 388;
int32_t x136 = INT32_MIN;
int32_t t33 = -866451;
int64_t x137 = INT64_MAX;
static int64_t x146 = 3483656253238437902LL;
int64_t x150 = -1LL;
int32_t t37 = 111533604;
uint8_t x156 = 10U;
int8_t x157 = INT8_MIN;
int16_t x158 = INT16_MIN;
volatile int32_t t41 = 0;
int16_t x171 = -1;
volatile int32_t t42 = 196;
static volatile int32_t t43 = 22643;
int32_t x179 = INT32_MIN;
static volatile int64_t x180 = -1LL;
static int32_t t44 = 409516;
int32_t x184 = INT32_MIN;
volatile int8_t x191 = -1;
static int64_t x192 = INT64_MIN;
uint8_t x195 = 23U;
int8_t x197 = INT8_MIN;
int32_t x199 = INT32_MAX;
int32_t t49 = 28733;
uint64_t x202 = 1046279LLU;
static uint8_t x207 = UINT8_MAX;
int64_t x208 = INT64_MAX;
uint32_t x209 = UINT32_MAX;
int16_t x217 = INT16_MAX;
int64_t x219 = 449893533LL;
int32_t x220 = INT32_MIN;
volatile uint64_t x224 = 909501867204LLU;
volatile int32_t t57 = -1;
static volatile uint8_t x248 = 0U;
uint32_t x251 = UINT32_MAX;
static volatile int32_t t64 = 2119;
int32_t x265 = INT32_MIN;
int32_t x271 = -289317745;
static int32_t x278 = INT32_MIN;
int32_t t69 = -46492;
int16_t x286 = INT16_MIN;
int32_t t71 = -5;
volatile int32_t t72 = -437;
int8_t x296 = INT8_MIN;
int32_t x297 = 532025;
volatile int8_t x305 = -1;
static uint8_t x306 = 1U;
int16_t x310 = -1;
uint8_t x321 = 81U;
uint32_t x326 = UINT32_MAX;
int64_t x328 = INT64_MIN;
int32_t t82 = 1;
int32_t t87 = -3583;
int16_t x355 = -1;
volatile uint64_t x356 = 8248LLU;
static int64_t x357 = INT64_MIN;
static volatile int64_t x365 = INT64_MIN;
volatile uint32_t x370 = 110724837U;
int16_t x376 = -732;
volatile int32_t t93 = -217;
static int8_t x378 = -1;
int16_t x381 = INT16_MIN;
int8_t x385 = -44;
static int64_t x408 = -1LL;
uint64_t x411 = UINT64_MAX;
static uint8_t x412 = UINT8_MAX;
uint32_t x415 = 22016U;
volatile int8_t x417 = INT8_MIN;
static uint32_t x418 = UINT32_MAX;
int16_t x425 = INT16_MIN;
volatile int32_t x428 = INT32_MIN;
volatile int32_t t106 = -1273;
volatile int8_t x429 = INT8_MIN;
uint32_t x433 = 950U;
int64_t x437 = INT64_MIN;
int32_t x438 = -224;
volatile int32_t x440 = -1;
int32_t x448 = INT32_MIN;
int8_t x450 = -1;
static int32_t t112 = 15171385;
static uint8_t x454 = 1U;
static int8_t x471 = INT8_MIN;
int8_t x473 = INT8_MIN;
uint16_t x475 = 6U;
uint8_t x481 = UINT8_MAX;
volatile uint16_t x491 = 0U;
volatile int32_t t123 = -53;
int32_t x502 = INT32_MIN;
int16_t x504 = INT16_MIN;
volatile int32_t t125 = -12;
int64_t x510 = INT64_MAX;
int32_t x516 = INT32_MAX;
volatile int64_t x529 = INT64_MIN;
volatile uint32_t x532 = 0U;
int64_t x533 = INT64_MIN;
int32_t x541 = INT32_MIN;
uint64_t x543 = 497021LLU;
uint8_t x556 = 0U;
uint16_t x560 = UINT16_MAX;
int64_t x561 = 9916LL;
static int32_t t141 = 947;
static uint8_t x569 = 39U;
int16_t x570 = 0;
static int16_t x575 = -1;
int8_t x577 = -14;
volatile uint16_t x579 = 216U;
int64_t x583 = 1LL;
int16_t x584 = INT16_MIN;
int16_t x592 = 29;
int32_t x595 = INT32_MIN;
static int16_t x598 = -7;
int64_t x600 = -1LL;
int8_t x605 = INT8_MIN;
static volatile int64_t x608 = -1LL;
volatile int16_t x610 = -1;
volatile uint64_t x616 = 3220735360508082451LLU;
uint16_t x628 = 141U;
uint16_t x629 = 1880U;
volatile int32_t t157 = -7;
int64_t x638 = 1LL;
uint16_t x639 = 0U;
int32_t t160 = 2;
uint16_t x646 = UINT16_MAX;
int64_t x652 = INT64_MIN;
int64_t x655 = 5820850LL;
uint16_t x661 = 2U;
volatile int8_t x662 = 1;
volatile int32_t t165 = 12361;
static int8_t x669 = INT8_MAX;
volatile int8_t x670 = INT8_MIN;
int8_t x679 = -1;
int8_t x685 = INT8_MIN;
int64_t x689 = 1535119743792566824LL;
int64_t x691 = -1LL;
uint16_t x692 = UINT16_MAX;
volatile int32_t x693 = INT32_MIN;
int32_t x703 = INT32_MIN;
uint16_t x704 = 13U;
static int8_t x707 = INT8_MIN;
static volatile int16_t x715 = -1;
uint8_t x717 = 75U;
int16_t x718 = 2862;
uint64_t x720 = UINT64_MAX;
int32_t t181 = 3457;
int32_t x732 = -1;
int32_t t183 = 1457370;
int8_t x741 = -47;
volatile int32_t t185 = 8119;
int8_t x746 = INT8_MAX;
uint8_t x751 = 41U;
static int32_t t190 = -98449;
int16_t x768 = -1;
int8_t x771 = INT8_MAX;
int64_t x775 = -192941513LL;
volatile int32_t x778 = INT32_MAX;
static volatile int32_t t194 = 34;
static uint32_t x794 = UINT32_MAX;
int32_t x799 = 1;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	volatile uint64_t x2 = 1290LLU;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 208278;

    t0 = (((x1>x2)==x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 42;
	int64_t x6 = INT64_MIN;
	static volatile int32_t x7 = -1;
	static volatile int32_t x8 = INT32_MIN;
	int32_t t1 = 1461399;

    t1 = (((x5>x6)==x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int32_t x10 = INT32_MIN;
	static int8_t x11 = -1;
	volatile uint8_t x12 = 6U;
	static volatile int32_t t2 = 21113;

    t2 = (((x9>x10)==x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 410U;
	int64_t x14 = INT64_MIN;
	volatile uint32_t x16 = 253629937U;

    t3 = (((x13>x14)==x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MAX;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 27173193;

    t4 = (((x17>x18)==x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = INT16_MAX;
	volatile int32_t x23 = 1337403;
	static int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -3;

    t5 = (((x21>x22)==x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	volatile uint16_t x27 = 1523U;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -985126448;

    t6 = (((x25>x26)==x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x30 = 1U;
	int8_t x31 = 0;
	int16_t x32 = -1;
	int32_t t7 = -46;

    t7 = (((x29>x30)==x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x33 = UINT16_MAX;
	volatile uint32_t x34 = 43U;
	int8_t x35 = -1;

    t8 = (((x33>x34)==x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	static volatile int16_t x38 = INT16_MIN;
	int32_t t9 = 336;

    t9 = (((x37>x38)==x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	uint64_t x43 = 74LLU;
	uint32_t x44 = 2817721U;
	int32_t t10 = 3921;

    t10 = (((x41>x42)==x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 2311U;
	static uint8_t x46 = UINT8_MAX;
	int8_t x48 = INT8_MIN;
	static int32_t t11 = -81992047;

    t11 = (((x45>x46)==x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = INT64_MAX;
	uint32_t x50 = 29358863U;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t t12 = -7352879;

    t12 = (((x49>x50)==x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MIN;
	uint16_t x55 = 12U;
	int64_t x56 = 334588609719158LL;
	volatile int32_t t13 = -3043;

    t13 = (((x53>x54)==x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	static volatile int16_t x59 = 3504;
	int16_t x60 = 32;
	volatile int32_t t14 = 460766383;

    t14 = (((x57>x58)==x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 3;
	static int16_t x62 = 3;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = -17LL;
	static volatile int32_t t15 = 95612;

    t15 = (((x61>x62)==x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 60U;
	int32_t x66 = 4954;
	volatile int8_t x67 = -2;
	uint64_t x68 = 5909LLU;
	int32_t t16 = -1;

    t16 = (((x65>x66)==x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MIN;
	uint64_t x71 = 14603239250224814LLU;
	static uint8_t x72 = 3U;
	volatile int32_t t17 = -250531;

    t17 = (((x69>x70)==x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;
	volatile int32_t x75 = -9060872;
	volatile int64_t x76 = 174926765760LL;
	volatile int32_t t18 = -35;

    t18 = (((x73>x74)==x75)!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MAX;
	int32_t x79 = 4;
	static int64_t x80 = INT64_MIN;
	int32_t t19 = 660;

    t19 = (((x77>x78)==x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 109LLU;
	volatile int32_t x83 = INT32_MIN;
	int32_t x84 = -1;
	volatile int32_t t20 = 20168740;

    t20 = (((x81>x82)==x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -486;
	static volatile uint32_t x86 = 8048805U;
	static int64_t x87 = 37344951LL;
	static int16_t x88 = -5716;
	int32_t t21 = -169;

    t21 = (((x85>x86)==x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 33492219U;
	int8_t x90 = 0;
	volatile int64_t x91 = INT64_MIN;
	static volatile int64_t x92 = INT64_MIN;

    t22 = (((x89>x90)==x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = INT16_MIN;
	uint32_t x95 = 510864U;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -2130;

    t23 = (((x93>x94)==x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MAX;
	static int32_t x98 = INT32_MIN;
	uint16_t x99 = 1U;
	uint16_t x100 = 31952U;
	int32_t t24 = 742407403;

    t24 = (((x97>x98)==x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = INT64_MIN;
	volatile uint16_t x102 = 6464U;
	int32_t x104 = 22;
	volatile int32_t t25 = 37;

    t25 = (((x101>x102)==x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x106 = -1512;
	static int64_t x108 = -1LL;
	int32_t t26 = 104;

    t26 = (((x105>x106)==x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = -118;
	static int16_t x110 = INT16_MIN;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = -13;
	volatile int32_t t27 = -6212697;

    t27 = (((x109>x110)==x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x115 = 3;
	int64_t x116 = -313LL;
	volatile int32_t t28 = -12260364;

    t28 = (((x113>x114)==x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 21178U;
	uint8_t x118 = UINT8_MAX;
	static uint64_t x119 = 4343699567522LLU;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t29 = 615715;

    t29 = (((x117>x118)==x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 6U;
	uint16_t x122 = 7U;
	uint64_t x123 = 4855256817828365521LLU;
	static uint32_t x124 = 90606U;

    t30 = (((x121>x122)==x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	uint64_t x126 = 451504LLU;
	volatile int64_t x127 = INT64_MIN;
	int64_t x128 = -33094651530LL;
	static volatile int32_t t31 = 674;

    t31 = (((x125>x126)==x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	uint64_t x130 = 2LLU;
	uint32_t x131 = UINT32_MAX;
	int8_t x132 = INT8_MIN;

    t32 = (((x129>x130)==x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 0U;
	uint64_t x134 = 3663516147LLU;
	int16_t x135 = -30;

    t33 = (((x133>x134)==x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = 0;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 29U;
	volatile int32_t t34 = -4;

    t34 = (((x137>x138)==x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 51454270LLU;
	int64_t x142 = 10LL;
	static int8_t x143 = 0;
	int32_t x144 = -1;
	static volatile int32_t t35 = -1;

    t35 = (((x141>x142)==x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -1;
	volatile int32_t t36 = 0;

    t36 = (((x145>x146)==x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = -7;
	static int8_t x151 = INT8_MIN;
	volatile int64_t x152 = INT64_MAX;

    t37 = (((x149>x150)==x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = 1;
	int16_t x154 = -1645;
	int64_t x155 = INT64_MIN;
	int32_t t38 = 202;

    t38 = (((x153>x154)==x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x159 = 54113011862LLU;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 3221125;

    t39 = (((x157>x158)==x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	int8_t x162 = -1;
	volatile int16_t x163 = INT16_MAX;
	int8_t x164 = 0;
	volatile int32_t t40 = -422423;

    t40 = (((x161>x162)==x163)!=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = 6;
	int32_t x166 = INT32_MIN;
	int8_t x167 = INT8_MAX;
	volatile int8_t x168 = INT8_MIN;

    t41 = (((x165>x166)==x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	volatile uint64_t x170 = UINT64_MAX;
	volatile int32_t x172 = -15353;

    t42 = (((x169>x170)==x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x173 = -11549;
	int16_t x174 = -15020;
	volatile int8_t x175 = 24;
	static int16_t x176 = INT16_MAX;

    t43 = (((x173>x174)==x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = -190205;

    t44 = (((x177>x178)==x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	int8_t x182 = -1;
	static int64_t x183 = 221728LL;
	int32_t t45 = 1845;

    t45 = (((x181>x182)==x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 20U;
	static int8_t x186 = INT8_MIN;
	uint8_t x187 = 14U;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = -200164;

    t46 = (((x185>x186)==x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	int64_t x190 = -488497161502LL;
	int32_t t47 = -1060873;

    t47 = (((x189>x190)==x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MAX;
	int32_t x196 = INT32_MAX;
	static int32_t t48 = -134842;

    t48 = (((x193>x194)==x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = -1;
	static int32_t x200 = INT32_MAX;

    t49 = (((x197>x198)==x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 26031LLU;
	uint16_t x203 = 5U;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t50 = 553067;

    t50 = (((x201>x202)==x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = UINT16_MAX;
	int32_t x206 = 795120;
	static volatile int32_t t51 = -25;

    t51 = (((x205>x206)==x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -1;
	static uint32_t x211 = 3851881U;
	static uint64_t x212 = 0LLU;
	volatile int32_t t52 = 1;

    t52 = (((x209>x210)==x211)!=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	static int64_t x215 = -1LL;
	int8_t x216 = -11;
	int32_t t53 = 124;

    t53 = (((x213>x214)==x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x218 = 174U;
	int32_t t54 = 1006574073;

    t54 = (((x217>x218)==x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 0;
	static volatile int32_t x222 = -1;
	uint8_t x223 = UINT8_MAX;
	int32_t t55 = 326969;

    t55 = (((x221>x222)==x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	static uint32_t x226 = UINT32_MAX;
	static int64_t x227 = INT64_MIN;
	volatile int8_t x228 = INT8_MIN;
	int32_t t56 = 8188363;

    t56 = (((x225>x226)==x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x229 = INT16_MIN;
	volatile int8_t x230 = 1;
	int16_t x231 = INT16_MAX;
	int32_t x232 = -1;

    t57 = (((x229>x230)==x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -18;
	volatile int64_t x234 = 40971034784310175LL;
	uint64_t x235 = 2049043536307LLU;
	static int16_t x236 = INT16_MAX;
	int32_t t58 = -263883;

    t58 = (((x233>x234)==x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -109LL;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	int32_t t59 = -19222356;

    t59 = (((x237>x238)==x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	static volatile int8_t x244 = INT8_MAX;
	int32_t t60 = 122;

    t60 = (((x241>x242)==x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -15663886166703681LL;
	uint8_t x246 = 58U;
	int64_t x247 = INT64_MIN;
	int32_t t61 = -320867;

    t61 = (((x245>x246)==x247)!=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x249 = 18230697187LLU;
	int8_t x250 = INT8_MIN;
	static int16_t x252 = INT16_MAX;
	int32_t t62 = -481613914;

    t62 = (((x249>x250)==x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -14363;
	uint64_t x254 = 6287674500897LLU;
	volatile int64_t x255 = -58824467510682036LL;
	int32_t x256 = -1;
	int32_t t63 = -4252530;

    t63 = (((x253>x254)==x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = -5276343;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	int32_t x260 = INT32_MIN;

    t64 = (((x257>x258)==x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x261 = INT64_MIN;
	uint32_t x262 = 2U;
	int32_t x263 = -208680424;
	int32_t x264 = -1;
	int32_t t65 = 4771;

    t65 = (((x261>x262)==x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x266 = INT16_MAX;
	static int8_t x267 = -1;
	volatile uint8_t x268 = 1U;
	volatile int32_t t66 = -28;

    t66 = (((x265>x266)==x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 1902684240LLU;
	int32_t x270 = 31937;
	uint8_t x272 = UINT8_MAX;
	static int32_t t67 = 1993;

    t67 = (((x269>x270)==x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MIN;
	static int64_t x274 = INT64_MIN;
	uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 32U;
	volatile int32_t t68 = 139;

    t68 = (((x273>x274)==x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	int32_t x279 = INT32_MAX;
	static int8_t x280 = INT8_MIN;

    t69 = (((x277>x278)==x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = 1;
	static int64_t x282 = -1LL;
	int32_t x283 = -1;
	int32_t x284 = 57444;
	volatile int32_t t70 = -16442586;

    t70 = (((x281>x282)==x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x287 = -7552;
	volatile int64_t x288 = INT64_MAX;

    t71 = (((x285>x286)==x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	uint16_t x290 = 118U;
	uint8_t x291 = 11U;
	static uint64_t x292 = 83LLU;

    t72 = (((x289>x290)==x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	volatile int64_t x295 = -17614LL;
	static int32_t t73 = 0;

    t73 = (((x293>x294)==x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = 0;
	int8_t x299 = 0;
	int64_t x300 = INT64_MAX;
	int32_t t74 = -215;

    t74 = (((x297>x298)==x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = -36;
	int32_t x302 = INT32_MIN;
	int32_t x303 = -265239515;
	uint8_t x304 = 5U;
	volatile int32_t t75 = 26259;

    t75 = (((x301>x302)==x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x307 = 40;
	int64_t x308 = INT64_MIN;
	static int32_t t76 = 100940055;

    t76 = (((x305>x306)==x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MAX;
	int32_t t77 = 1;

    t77 = (((x309>x310)==x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = INT8_MIN;
	uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = 40U;
	volatile uint32_t x316 = UINT32_MAX;
	volatile int32_t t78 = -339267894;

    t78 = (((x313>x314)==x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int32_t x318 = INT32_MIN;
	static int32_t x319 = INT32_MIN;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = -1;

    t79 = (((x317>x318)==x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 22U;
	static int32_t x323 = INT32_MAX;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = -256;

    t80 = (((x321>x322)==x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MIN;
	static uint32_t x327 = UINT32_MAX;
	static int32_t t81 = 1;

    t81 = (((x325>x326)==x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 19162U;
	static uint8_t x330 = 37U;
	int16_t x331 = -1;
	uint8_t x332 = 15U;

    t82 = (((x329>x330)==x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 14;
	volatile uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MIN;
	int16_t x336 = -234;
	volatile int32_t t83 = 253366;

    t83 = (((x333>x334)==x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 0;
	int8_t x338 = -35;
	volatile int16_t x339 = INT16_MIN;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -12444097;

    t84 = (((x337>x338)==x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = INT32_MIN;
	uint16_t x342 = 1U;
	static int16_t x343 = -1;
	uint32_t x344 = 39205U;
	int32_t t85 = 95541;

    t85 = (((x341>x342)==x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = 893086637;
	int16_t x346 = -233;
	volatile int32_t x347 = 28616;
	int64_t x348 = INT64_MAX;
	volatile int32_t t86 = -489;

    t86 = (((x345>x346)==x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x350 = 0;
	static uint64_t x351 = 6094371873LLU;
	int64_t x352 = INT64_MAX;

    t87 = (((x349>x350)==x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = -4;
	volatile int32_t t88 = -165986;

    t88 = (((x353>x354)==x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x358 = INT8_MIN;
	volatile int8_t x359 = -1;
	int64_t x360 = -3102328037265310004LL;
	int32_t t89 = 0;

    t89 = (((x357>x358)==x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MIN;
	int16_t x362 = 3;
	uint64_t x363 = 125LLU;
	int16_t x364 = INT16_MIN;
	int32_t t90 = 58821;

    t90 = (((x361>x362)==x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x366 = 117575LLU;
	int8_t x367 = -1;
	static uint16_t x368 = 6U;
	volatile int32_t t91 = 11747880;

    t91 = (((x365>x366)==x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x371 = INT32_MAX;
	int8_t x372 = 29;
	volatile int32_t t92 = -208;

    t92 = (((x369>x370)==x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	static int8_t x374 = INT8_MAX;
	static volatile int64_t x375 = INT64_MIN;

    t93 = (((x373>x374)==x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = -1;
	uint8_t x379 = 2U;
	int16_t x380 = -4955;
	static volatile int32_t t94 = -255;

    t94 = (((x377>x378)==x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x382 = INT64_MIN;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -834355408;
	static int32_t t95 = -357;

    t95 = (((x381>x382)==x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x386 = -90;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 330644000;

    t96 = (((x385>x386)==x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 0U;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 1808692U;
	static int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 9524;

    t97 = (((x389>x390)==x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x393 = 51179239792877LLU;
	static volatile int32_t x394 = INT32_MIN;
	uint8_t x395 = 55U;
	int16_t x396 = 1;
	volatile int32_t t98 = -53;

    t98 = (((x393>x394)==x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	static int32_t x398 = -1;
	int16_t x399 = 94;
	int16_t x400 = -36;
	int32_t t99 = -6;

    t99 = (((x397>x398)==x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = -62;
	static uint64_t x402 = 91792064950946797LLU;
	int32_t x403 = INT32_MIN;
	static int32_t x404 = INT32_MAX;
	static int32_t t100 = -15;

    t100 = (((x401>x402)==x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -1;
	static volatile uint16_t x406 = 2U;
	static int64_t x407 = INT64_MAX;
	int32_t t101 = 13113;

    t101 = (((x405>x406)==x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x409 = -19605063106LL;
	uint32_t x410 = 13U;
	int32_t t102 = 56878;

    t102 = (((x409>x410)==x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	static int8_t x414 = INT8_MIN;
	int32_t x416 = -486344;
	int32_t t103 = -1;

    t103 = (((x413>x414)==x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x419 = 255;
	uint64_t x420 = 34107991929470LLU;
	volatile int32_t t104 = -6718631;

    t104 = (((x417>x418)==x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	static int32_t x423 = -133677053;
	static int64_t x424 = 19809LL;
	int32_t t105 = 20324;

    t105 = (((x421>x422)==x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = 1718246706790478LLU;
	int8_t x427 = -1;

    t106 = (((x425>x426)==x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x430 = -862866222601558LL;
	int64_t x431 = INT64_MAX;
	static volatile int8_t x432 = INT8_MIN;
	int32_t t107 = 1567;

    t107 = (((x429>x430)==x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 39U;
	static int16_t x435 = INT16_MIN;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t108 = -29531106;

    t108 = (((x433>x434)==x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x439 = INT8_MIN;
	static int32_t t109 = -167;

    t109 = (((x437>x438)==x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	uint64_t x442 = UINT64_MAX;
	uint64_t x443 = UINT64_MAX;
	uint32_t x444 = 217516U;
	static volatile int32_t t110 = -1511;

    t110 = (((x441>x442)==x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 14U;
	int64_t x446 = -1LL;
	volatile int8_t x447 = INT8_MIN;
	int32_t t111 = 2;

    t111 = (((x445>x446)==x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -59;
	uint16_t x451 = 1556U;
	volatile int32_t x452 = INT32_MIN;

    t112 = (((x449>x450)==x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = 0;
	int32_t x455 = INT32_MIN;
	int64_t x456 = INT64_MIN;
	int32_t t113 = -194;

    t113 = (((x453>x454)==x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -14;
	volatile uint32_t x458 = UINT32_MAX;
	int16_t x459 = INT16_MIN;
	int8_t x460 = INT8_MAX;
	int32_t t114 = 11;

    t114 = (((x457>x458)==x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	uint32_t x462 = UINT32_MAX;
	uint64_t x463 = UINT64_MAX;
	uint8_t x464 = UINT8_MAX;
	int32_t t115 = 568608;

    t115 = (((x461>x462)==x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = 2172692405245LL;
	int64_t x466 = -1LL;
	int64_t x467 = -1LL;
	static int16_t x468 = INT16_MIN;
	volatile int32_t t116 = 659;

    t116 = (((x465>x466)==x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = -1;
	int32_t x470 = -1;
	int8_t x472 = INT8_MAX;
	int32_t t117 = 121750;

    t117 = (((x469>x470)==x471)!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x474 = -1;
	uint8_t x476 = 0U;
	static volatile int32_t t118 = 7;

    t118 = (((x473>x474)==x475)!=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = 29U;
	int32_t x478 = 792;
	int64_t x479 = INT64_MIN;
	int32_t x480 = -29529055;
	int32_t t119 = -93;

    t119 = (((x477>x478)==x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x482 = UINT32_MAX;
	uint8_t x483 = 7U;
	uint16_t x484 = 632U;
	int32_t t120 = 322;

    t120 = (((x481>x482)==x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = 6081U;
	int16_t x486 = INT16_MIN;
	int64_t x487 = -1LL;
	static int64_t x488 = -1LL;
	static int32_t t121 = -1;

    t121 = (((x485>x486)==x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	static uint32_t x490 = 28U;
	static volatile int8_t x492 = -26;
	static int32_t t122 = 1251;

    t122 = (((x489>x490)==x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = -53563;
	int32_t x494 = 167663;
	static uint16_t x495 = 617U;
	uint8_t x496 = 1U;

    t123 = (((x493>x494)==x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	int64_t x498 = INT64_MIN;
	volatile int64_t x499 = -1LL;
	int32_t x500 = -2170545;
	volatile int32_t t124 = 4644378;

    t124 = (((x497>x498)==x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	int8_t x503 = 7;

    t125 = (((x501>x502)==x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 57692957U;
	volatile uint16_t x506 = 133U;
	int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MIN;
	static int32_t t126 = -233084298;

    t126 = (((x505>x506)==x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = 86;
	int32_t x511 = INT32_MAX;
	int32_t x512 = -11467128;
	int32_t t127 = -59205;

    t127 = (((x509>x510)==x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = UINT64_MAX;
	static int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MIN;
	static int32_t t128 = 434493;

    t128 = (((x513>x514)==x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = UINT8_MAX;
	uint16_t x518 = 14U;
	volatile int32_t x519 = INT32_MAX;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t129 = 7889;

    t129 = (((x517>x518)==x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	static int32_t x522 = -3018;
	int8_t x523 = INT8_MAX;
	int16_t x524 = INT16_MIN;
	int32_t t130 = -18671;

    t130 = (((x521>x522)==x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint8_t x526 = 9U;
	volatile int64_t x527 = INT64_MIN;
	static int16_t x528 = INT16_MAX;
	int32_t t131 = 248548;

    t131 = (((x525>x526)==x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	static uint64_t x531 = UINT64_MAX;
	static int32_t t132 = 66933558;

    t132 = (((x529>x530)==x531)!=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = INT16_MIN;
	volatile int32_t x535 = INT32_MIN;
	uint32_t x536 = UINT32_MAX;
	int32_t t133 = -618631031;

    t133 = (((x533>x534)==x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint32_t x538 = UINT32_MAX;
	int64_t x539 = -200654LL;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t134 = 31770947;

    t134 = (((x537>x538)==x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x542 = UINT8_MAX;
	static uint8_t x544 = 1U;
	int32_t t135 = -11929451;

    t135 = (((x541>x542)==x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = UINT16_MAX;
	static int16_t x546 = -1;
	static volatile int8_t x547 = 1;
	int32_t x548 = INT32_MIN;
	static volatile int32_t t136 = -19577;

    t136 = (((x545>x546)==x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 67U;
	uint32_t x550 = 7U;
	uint64_t x551 = 916LLU;
	uint16_t x552 = 119U;
	volatile int32_t t137 = 0;

    t137 = (((x549>x550)==x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 0;
	int32_t x554 = -1;
	uint32_t x555 = 258741754U;
	int32_t t138 = -2797418;

    t138 = (((x553>x554)==x555)!=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = INT32_MIN;
	uint64_t x558 = 3121LLU;
	volatile int32_t x559 = INT32_MAX;
	int32_t t139 = -74247;

    t139 = (((x557>x558)==x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = UINT8_MAX;
	int32_t x563 = INT32_MAX;
	static int32_t x564 = INT32_MIN;
	int32_t t140 = 5747;

    t140 = (((x561>x562)==x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 9879056;
	uint8_t x566 = 123U;
	int8_t x567 = -1;
	int32_t x568 = INT32_MAX;

    t141 = (((x565>x566)==x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x571 = 27914504832192156LLU;
	volatile int16_t x572 = INT16_MIN;
	volatile int32_t t142 = 1698316;

    t142 = (((x569>x570)==x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint64_t x574 = 253302LLU;
	static int64_t x576 = 1705841890LL;
	static volatile int32_t t143 = -35694;

    t143 = (((x573>x574)==x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = 0;
	static uint16_t x580 = 781U;
	volatile int32_t t144 = 0;

    t144 = (((x577>x578)==x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 2U;
	int8_t x582 = 1;
	int32_t t145 = 749604;

    t145 = (((x581>x582)==x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 3U;
	int64_t x586 = -13055674821177LL;
	uint32_t x587 = 13U;
	uint32_t x588 = UINT32_MAX;
	static volatile int32_t t146 = 59347;

    t146 = (((x585>x586)==x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = 628U;
	volatile int32_t t147 = 381;

    t147 = (((x589>x590)==x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x593 = 2922U;
	static volatile int64_t x594 = INT64_MAX;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = 3615;

    t148 = (((x593>x594)==x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 1;
	volatile int16_t x599 = INT16_MIN;
	static volatile int32_t t149 = 6918;

    t149 = (((x597>x598)==x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	static volatile uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MAX;
	int64_t x604 = -1LL;
	static volatile int32_t t150 = 12845;

    t150 = (((x601>x602)==x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = -1LL;
	volatile int32_t x607 = 1064463295;
	static volatile int32_t t151 = 69;

    t151 = (((x605>x606)==x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	int16_t x611 = -9;
	volatile uint64_t x612 = 5291048966672304373LLU;
	int32_t t152 = 15630577;

    t152 = (((x609>x610)==x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = UINT64_MAX;
	static uint16_t x614 = UINT16_MAX;
	int32_t x615 = INT32_MIN;
	static volatile int32_t t153 = -12;

    t153 = (((x613>x614)==x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 1U;
	static uint8_t x618 = 36U;
	volatile int8_t x619 = -6;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t154 = 94;

    t154 = (((x617>x618)==x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 661921161LL;
	volatile uint64_t x622 = UINT64_MAX;
	uint64_t x623 = 60517416172685LLU;
	int8_t x624 = INT8_MAX;
	int32_t t155 = 43050;

    t155 = (((x621>x622)==x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = INT8_MIN;
	int16_t x626 = INT16_MAX;
	static uint64_t x627 = 953LLU;
	int32_t t156 = 5398504;

    t156 = (((x625>x626)==x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x630 = INT8_MIN;
	static volatile uint64_t x631 = 8770861400316373LLU;
	uint16_t x632 = UINT16_MAX;

    t157 = (((x629>x630)==x631)!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -16;
	int32_t x634 = -1;
	int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MIN;
	static volatile int32_t t158 = -11;

    t158 = (((x633>x634)==x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	volatile uint64_t x640 = 357205105328021LLU;
	static int32_t t159 = 50190;

    t159 = (((x637>x638)==x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x641 = INT64_MAX;
	static uint32_t x642 = 158U;
	static int8_t x643 = 1;
	static uint16_t x644 = UINT16_MAX;

    t160 = (((x641>x642)==x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	int8_t x647 = INT8_MAX;
	int64_t x648 = -8757037238032465LL;
	volatile int32_t t161 = 0;

    t161 = (((x645>x646)==x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = -1;
	int32_t x650 = INT32_MAX;
	volatile uint16_t x651 = 3105U;
	volatile int32_t t162 = 938842359;

    t162 = (((x649>x650)==x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	volatile uint64_t x654 = 53560830274243LLU;
	int32_t x656 = -21438;
	static int32_t t163 = 3;

    t163 = (((x653>x654)==x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x657 = 4;
	volatile int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MAX;
	volatile int32_t t164 = 45286439;

    t164 = (((x657>x658)==x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x663 = INT32_MAX;
	int32_t x664 = INT32_MIN;

    t165 = (((x661>x662)==x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = 0LL;
	uint8_t x666 = 14U;
	int32_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	int32_t t166 = 5;

    t166 = (((x665>x666)==x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x671 = UINT16_MAX;
	int32_t x672 = INT32_MIN;
	int32_t t167 = -240;

    t167 = (((x669>x670)==x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int64_t x674 = -19LL;
	uint16_t x675 = 1606U;
	int16_t x676 = INT16_MIN;
	static volatile int32_t t168 = -217524;

    t168 = (((x673>x674)==x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x677 = 21335U;
	int64_t x678 = INT64_MAX;
	static volatile uint8_t x680 = 0U;
	volatile int32_t t169 = -60262;

    t169 = (((x677>x678)==x679)!=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = 1U;
	static int16_t x682 = -16072;
	static int32_t x683 = -14;
	volatile int16_t x684 = 207;
	volatile int32_t t170 = -561954729;

    t170 = (((x681>x682)==x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x686 = 2U;
	static int64_t x687 = -1510938LL;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t171 = 621477611;

    t171 = (((x685>x686)==x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MAX;
	int32_t t172 = -2093;

    t172 = (((x689>x690)==x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = -15849;
	int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MIN;
	int32_t t173 = 0;

    t173 = (((x693>x694)==x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 0U;
	volatile int64_t x698 = INT64_MAX;
	volatile uint32_t x699 = 0U;
	uint32_t x700 = 8857U;
	volatile int32_t t174 = -6668104;

    t174 = (((x697>x698)==x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 152U;
	int32_t x702 = INT32_MIN;
	volatile int32_t t175 = -326945;

    t175 = (((x701>x702)==x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MIN;
	int32_t x706 = INT32_MIN;
	volatile uint16_t x708 = 12U;
	int32_t t176 = 128763081;

    t176 = (((x705>x706)==x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 27831271LL;
	uint8_t x710 = 24U;
	int64_t x711 = INT64_MAX;
	int8_t x712 = 1;
	volatile int32_t t177 = -4776;

    t177 = (((x709>x710)==x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = 12487921;
	int64_t x714 = INT64_MIN;
	uint32_t x716 = UINT32_MAX;
	static volatile int32_t t178 = 246;

    t178 = (((x713>x714)==x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x719 = 5657U;
	volatile int32_t t179 = 1054393837;

    t179 = (((x717>x718)==x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	int8_t x722 = 23;
	static int64_t x723 = 19LL;
	int32_t x724 = 9454;
	static volatile int32_t t180 = 108632;

    t180 = (((x721>x722)==x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 1845559U;
	volatile uint64_t x726 = 487853438220LLU;
	uint16_t x727 = 2U;
	int16_t x728 = -1;

    t181 = (((x725>x726)==x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = INT8_MAX;
	uint8_t x730 = UINT8_MAX;
	uint8_t x731 = 0U;
	volatile int32_t t182 = 180080;

    t182 = (((x729>x730)==x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -22043;
	int32_t x734 = -1;
	int16_t x735 = -1;
	uint16_t x736 = UINT16_MAX;

    t183 = (((x733>x734)==x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	volatile int64_t x738 = -1LL;
	volatile int32_t x739 = -1;
	int32_t x740 = INT32_MIN;
	int32_t t184 = -31;

    t184 = (((x737>x738)==x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MIN;
	int32_t x743 = -1;
	int32_t x744 = -21474;

    t185 = (((x741>x742)==x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	int64_t x747 = INT64_MIN;
	volatile int64_t x748 = -1LL;
	int32_t t186 = -299;

    t186 = (((x745>x746)==x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 58U;
	int8_t x750 = INT8_MAX;
	int32_t x752 = -4;
	static int32_t t187 = 4;

    t187 = (((x749>x750)==x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 8154304;
	static uint32_t x754 = UINT32_MAX;
	volatile int8_t x755 = INT8_MAX;
	static int8_t x756 = -1;
	volatile int32_t t188 = -723557104;

    t188 = (((x753>x754)==x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x757 = -1;
	int64_t x758 = -1LL;
	volatile int64_t x759 = -2648530904758112LL;
	uint64_t x760 = 21422204784504LLU;
	int32_t t189 = 4935;

    t189 = (((x757>x758)==x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 2U;
	uint32_t x762 = UINT32_MAX;
	uint32_t x763 = 86986U;
	int16_t x764 = 13419;

    t190 = (((x761>x762)==x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -295670348;
	int8_t x766 = INT8_MIN;
	static uint64_t x767 = 631500LLU;
	int32_t t191 = -36;

    t191 = (((x765>x766)==x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = 9U;
	volatile int16_t x770 = INT16_MIN;
	uint64_t x772 = 769882245479506876LLU;
	volatile int32_t t192 = 1;

    t192 = (((x769>x770)==x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	int64_t x774 = INT64_MAX;
	int16_t x776 = -1;
	int32_t t193 = -103488043;

    t193 = (((x773>x774)==x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 12980;
	int8_t x779 = -3;
	uint64_t x780 = 179434338LLU;

    t194 = (((x777>x778)==x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = UINT32_MAX;
	volatile uint32_t x782 = UINT32_MAX;
	static uint16_t x783 = 7048U;
	static int16_t x784 = -3;
	int32_t t195 = 87132001;

    t195 = (((x781>x782)==x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x785 = INT32_MAX;
	uint32_t x786 = UINT32_MAX;
	volatile uint8_t x787 = 2U;
	uint8_t x788 = 7U;
	int32_t t196 = 2;

    t196 = (((x785>x786)==x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	int32_t x790 = INT32_MIN;
	int16_t x791 = -1;
	int32_t x792 = INT32_MIN;
	static int32_t t197 = -1388;

    t197 = (((x789>x790)==x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 1277358939114449712LL;
	volatile int64_t x795 = -42LL;
	int8_t x796 = -13;
	static volatile int32_t t198 = -15458;

    t198 = (((x793>x794)==x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -997198650;
	volatile int64_t x798 = INT64_MIN;
	int8_t x800 = 45;
	volatile int32_t t199 = -6652593;

    t199 = (((x797>x798)==x799)!=x800);

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

