
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

int16_t x5 = INT16_MIN;
volatile int64_t x6 = INT64_MIN;
volatile uint8_t x7 = 3U;
uint16_t x13 = 271U;
volatile int16_t x17 = INT16_MIN;
int64_t x18 = 266293980905369LL;
static int64_t x32 = -3799019717164LL;
uint32_t x33 = UINT32_MAX;
int64_t x40 = INT64_MAX;
int16_t x50 = -1;
int32_t t11 = -24157223;
int8_t x61 = -1;
int64_t x68 = INT64_MIN;
static int64_t x72 = INT64_MIN;
int32_t x73 = INT32_MAX;
uint8_t x75 = 63U;
int8_t x76 = -1;
uint32_t x85 = UINT32_MAX;
int64_t x87 = 788181212LL;
int64_t x90 = -13241266014LL;
uint32_t x99 = 953328U;
int64_t x104 = 209LL;
int64_t x105 = INT64_MIN;
int16_t x111 = 1;
int32_t x112 = -484811;
volatile int8_t x115 = INT8_MIN;
volatile uint32_t x118 = 224456652U;
int32_t x121 = -1;
static int8_t x131 = INT8_MAX;
int8_t x133 = 1;
static int16_t x135 = -1;
uint64_t x147 = 61716184LLU;
int32_t x152 = 119084;
int64_t x153 = INT64_MIN;
static volatile int64_t x159 = -1LL;
int8_t x162 = -19;
int64_t x164 = INT64_MIN;
int32_t t38 = 14854273;
int64_t x170 = INT64_MIN;
uint8_t x176 = 1U;
static volatile int32_t t40 = -9;
volatile int64_t x182 = INT64_MIN;
int32_t x183 = -1;
int64_t x185 = INT64_MIN;
volatile int32_t t42 = 7541198;
static int8_t x191 = -1;
uint8_t x195 = UINT8_MAX;
uint16_t x197 = 52U;
volatile int32_t t46 = 1950225;
int32_t x205 = INT32_MIN;
static uint8_t x206 = UINT8_MAX;
uint64_t x208 = UINT64_MAX;
int64_t x210 = INT64_MIN;
uint64_t x212 = 2LLU;
volatile int32_t t50 = 22;
int16_t x222 = -1;
static volatile int8_t x223 = INT8_MIN;
int8_t x231 = INT8_MIN;
static uint8_t x233 = UINT8_MAX;
int16_t x237 = INT16_MIN;
volatile int64_t x241 = INT64_MIN;
int32_t x242 = INT32_MAX;
uint32_t x245 = 3U;
int32_t x248 = 4904;
volatile int16_t x250 = INT16_MAX;
static volatile int32_t t58 = 79440;
static volatile int32_t t59 = 55;
volatile int16_t x262 = INT16_MIN;
uint8_t x266 = 30U;
static uint8_t x268 = UINT8_MAX;
static volatile int32_t t62 = 0;
volatile int32_t t63 = 22;
uint16_t x274 = UINT16_MAX;
int32_t t64 = -13;
int32_t x281 = INT32_MIN;
static int32_t t67 = 57908;
volatile int8_t x289 = INT8_MAX;
int64_t x290 = 5572797595LL;
volatile int16_t x295 = INT16_MIN;
volatile int32_t t69 = -14;
int32_t x297 = 4209555;
static uint32_t x301 = 4730U;
static uint16_t x304 = 2U;
uint64_t x329 = 22115643LLU;
static volatile int8_t x340 = -2;
volatile int32_t t79 = 1;
volatile int32_t t80 = -1;
static int64_t x346 = 10432523206LL;
int16_t x354 = -310;
int8_t x355 = INT8_MAX;
uint8_t x357 = UINT8_MAX;
volatile int16_t x360 = INT16_MAX;
int16_t x363 = 0;
int8_t x366 = INT8_MIN;
int64_t x375 = -183056748840LL;
uint64_t x381 = 0LLU;
int8_t x383 = -10;
int32_t t89 = 862455251;
int32_t x385 = 1;
static uint8_t x386 = 21U;
int8_t x393 = 0;
uint16_t x397 = UINT16_MAX;
int16_t x398 = INT16_MIN;
static volatile int32_t t93 = 25610;
volatile int32_t x403 = INT32_MIN;
static uint64_t x406 = 593660332866124LLU;
int16_t x407 = -1;
uint32_t x412 = UINT32_MAX;
uint16_t x413 = 3476U;
int64_t x420 = -4074341996656LL;
int32_t t98 = 48898;
uint64_t x422 = 74729861206407LLU;
int32_t x430 = INT32_MIN;
static volatile int16_t x432 = INT16_MIN;
uint32_t x433 = 527308845U;
static uint64_t x436 = UINT64_MAX;
volatile int32_t t103 = -3381178;
volatile int32_t t104 = 57;
static volatile int8_t x445 = INT8_MIN;
int16_t x450 = INT16_MIN;
volatile int32_t t106 = 2443;
static uint32_t x460 = UINT32_MAX;
static volatile int32_t t108 = 627407;
uint64_t x465 = 53LLU;
int8_t x466 = -2;
volatile int32_t x467 = -3716749;
static int32_t x468 = INT32_MIN;
uint16_t x473 = 1984U;
volatile int32_t t112 = 7378;
int32_t x494 = INT32_MAX;
volatile int32_t x497 = INT32_MAX;
static int32_t t116 = 277;
int32_t x516 = -1;
static int32_t x525 = INT32_MIN;
volatile int16_t x526 = INT16_MAX;
volatile int32_t x530 = -2;
volatile int8_t x532 = INT8_MAX;
uint16_t x535 = 0U;
static int32_t x541 = 2673;
volatile int32_t x544 = 3938;
int64_t x546 = -914277145894703LL;
int64_t x555 = INT64_MAX;
uint64_t x557 = UINT64_MAX;
static volatile int8_t x567 = INT8_MIN;
static int8_t x570 = INT8_MIN;
static volatile int32_t t134 = -12683;
volatile int8_t x577 = INT8_MIN;
int16_t x580 = -2;
int32_t t136 = 17215;
volatile uint32_t x592 = UINT32_MAX;
uint64_t x598 = UINT64_MAX;
volatile int8_t x603 = INT8_MIN;
static uint32_t x604 = 40U;
volatile int32_t x605 = -1;
int64_t x608 = INT64_MIN;
static volatile int32_t t142 = -1;
int32_t x610 = 153;
static volatile int16_t x613 = 29;
int16_t x615 = INT16_MAX;
volatile int8_t x616 = INT8_MAX;
static int64_t x619 = INT64_MIN;
int64_t x632 = INT64_MIN;
uint32_t x633 = 70287198U;
int32_t x634 = -1;
int64_t x636 = INT64_MIN;
volatile int32_t t149 = -116;
volatile int8_t x647 = -1;
volatile int32_t t151 = 14;
volatile int32_t x651 = INT32_MIN;
volatile int32_t t154 = -62427185;
int32_t x665 = -231;
uint32_t x666 = UINT32_MAX;
int16_t x678 = INT16_MIN;
static int32_t t158 = -20244150;
int16_t x688 = -1;
uint8_t x698 = 60U;
static int16_t x710 = INT16_MAX;
int16_t x718 = 31;
static uint16_t x724 = UINT16_MAX;
volatile int8_t x725 = INT8_MIN;
static int32_t x735 = 1953;
int16_t x742 = INT16_MAX;
int8_t x743 = 5;
volatile int32_t x763 = -1769698;
volatile int32_t t177 = 711146;
int32_t x768 = 87690;
static uint64_t x772 = 971778LLU;
int32_t t179 = 38;
uint16_t x773 = 23U;
uint32_t x786 = 440395U;
volatile int16_t x790 = INT16_MIN;
int32_t t184 = 271238;
int32_t x793 = -959237729;
int32_t t185 = -1627202;
volatile uint8_t x800 = UINT8_MAX;
int8_t x804 = -1;
static volatile int64_t x813 = -516410920716767LL;
int32_t t191 = 101445920;
volatile int32_t t192 = 13809;
static int8_t x825 = INT8_MIN;
volatile int8_t x830 = 13;
volatile int32_t t194 = -990073325;
int16_t x836 = INT16_MIN;
static int32_t x841 = INT32_MIN;
int32_t x842 = -7971;
static int8_t x846 = INT8_MAX;
uint16_t x848 = UINT16_MAX;
static int16_t x852 = 14360;
int32_t t199 = 985511334;


void f0(void) {
    	int32_t x1 = 30784;
	int8_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	uint8_t x4 = 3U;
	volatile int32_t t0 = -1837;

    t0 = (((x1/x2)+x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x8 = 13;
	volatile int32_t t1 = 876274049;

    t1 = (((x5/x6)+x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 13U;
	static int64_t x10 = 7180759LL;
	uint32_t x11 = UINT32_MAX;
	uint16_t x12 = 155U;
	static int32_t t2 = 28;

    t2 = (((x9/x10)+x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MAX;
	int8_t x15 = 7;
	static volatile int8_t x16 = INT8_MIN;
	int32_t t3 = -55;

    t3 = (((x13/x14)+x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x19 = 213618538360906LL;
	static int16_t x20 = -1;
	int32_t t4 = 290352942;

    t4 = (((x17/x18)+x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -5;
	int16_t x26 = INT16_MIN;
	static int16_t x27 = -122;
	static int32_t x28 = INT32_MAX;
	int32_t t5 = -3465;

    t5 = (((x25/x26)+x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MAX;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t6 = -16;

    t6 = (((x29/x30)+x31)>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = -1;
	static volatile uint64_t x35 = 14210LLU;
	static volatile uint8_t x36 = 7U;
	int32_t t7 = -50703807;

    t7 = (((x33/x34)+x35)>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = UINT32_MAX;
	int8_t x38 = INT8_MIN;
	static volatile uint32_t x39 = 9552U;
	int32_t t8 = -974143;

    t8 = (((x37/x38)+x39)>x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -42;
	int64_t x42 = 10LL;
	uint32_t x43 = 2142216692U;
	int16_t x44 = -1;
	int32_t t9 = 11;

    t9 = (((x41/x42)+x43)>x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	volatile uint64_t x46 = 30976356735973LLU;
	static uint64_t x47 = 11824483072014358LLU;
	volatile int64_t x48 = INT64_MIN;
	int32_t t10 = 7237;

    t10 = (((x45/x46)+x47)>x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x49 = 1048491777U;
	volatile uint64_t x51 = 7736543990565694LLU;
	int8_t x52 = -14;

    t11 = (((x49/x50)+x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	static volatile int64_t x54 = INT64_MAX;
	static int64_t x55 = INT64_MIN;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t12 = 9218502;

    t12 = (((x53/x54)+x55)>x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	int64_t x58 = -1769137LL;
	int32_t x59 = -1;
	static volatile int32_t x60 = INT32_MIN;
	int32_t t13 = -5990;

    t13 = (((x57/x58)+x59)>x60);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = INT8_MIN;
	uint8_t x63 = 28U;
	uint16_t x64 = 1038U;
	volatile int32_t t14 = -27154;

    t14 = (((x61/x62)+x63)>x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = -1;
	int32_t x66 = INT32_MAX;
	static uint64_t x67 = UINT64_MAX;
	volatile int32_t t15 = 13978304;

    t15 = (((x65/x66)+x67)>x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = INT32_MIN;
	volatile int64_t x70 = -1LL;
	volatile uint16_t x71 = 4176U;
	volatile int32_t t16 = 192;

    t16 = (((x69/x70)+x71)>x72);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x74 = INT8_MAX;
	int32_t t17 = -454904339;

    t17 = (((x73/x74)+x75)>x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = INT8_MAX;
	static uint64_t x78 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	int32_t x80 = -206404;
	volatile int32_t t18 = 0;

    t18 = (((x77/x78)+x79)>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x81 = 8U;
	int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MIN;
	volatile int64_t x84 = -1LL;
	int32_t t19 = -1749;

    t19 = (((x81/x82)+x83)>x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x86 = -1;
	volatile int64_t x88 = INT64_MIN;
	volatile int32_t t20 = 0;

    t20 = (((x85/x86)+x87)>x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x89 = 7U;
	int16_t x91 = -111;
	int32_t x92 = -1;
	static int32_t t21 = 3095005;

    t21 = (((x89/x90)+x91)>x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x93 = 113U;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 4279LLU;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = -21836;

    t22 = (((x93/x94)+x95)>x96);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	int32_t x98 = INT32_MIN;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t23 = -50;

    t23 = (((x97/x98)+x99)>x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	uint32_t x102 = 402709U;
	volatile int32_t x103 = INT32_MIN;
	int32_t t24 = -47335314;

    t24 = (((x101/x102)+x103)>x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x106 = INT64_MAX;
	static uint8_t x107 = UINT8_MAX;
	int16_t x108 = -1;
	volatile int32_t t25 = -10;

    t25 = (((x105/x106)+x107)>x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	int8_t x110 = -1;
	static volatile int32_t t26 = 13926;

    t26 = (((x109/x110)+x111)>x112);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 0U;
	static volatile int16_t x114 = INT16_MAX;
	int8_t x116 = 0;
	int32_t t27 = 0;

    t27 = (((x113/x114)+x115)>x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = 1;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = UINT8_MAX;
	int32_t t28 = -418489;

    t28 = (((x117/x118)+x119)>x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x122 = -1;
	static int64_t x123 = -39803797688416LL;
	uint32_t x124 = 405U;
	volatile int32_t t29 = -372950193;

    t29 = (((x121/x122)+x123)>x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MAX;
	static volatile int32_t x130 = 868205662;
	static int32_t x132 = -1;
	int32_t t30 = -3;

    t30 = (((x129/x130)+x131)>x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x134 = 50386106930423LL;
	int16_t x136 = INT16_MAX;
	int32_t t31 = -4611962;

    t31 = (((x133/x134)+x135)>x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x141 = INT8_MIN;
	uint32_t x142 = 14U;
	int8_t x143 = -1;
	uint8_t x144 = 2U;
	static volatile int32_t t32 = -3;

    t32 = (((x141/x142)+x143)>x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int16_t x148 = 62;
	volatile int32_t t33 = 364;

    t33 = (((x145/x146)+x147)>x148);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x149 = 34622;
	volatile int64_t x150 = 853273530108LL;
	uint8_t x151 = 3U;
	int32_t t34 = 529849;

    t34 = (((x149/x150)+x151)>x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x154 = UINT64_MAX;
	static volatile uint64_t x155 = 26LLU;
	uint32_t x156 = UINT32_MAX;
	int32_t t35 = -253;

    t35 = (((x153/x154)+x155)>x156);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = UINT16_MAX;
	int16_t x158 = -1;
	volatile uint16_t x160 = 2628U;
	static volatile int32_t t36 = -7;

    t36 = (((x157/x158)+x159)>x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x161 = INT64_MIN;
	int8_t x163 = -1;
	int32_t t37 = -421;

    t37 = (((x161/x162)+x163)>x164);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x165 = INT64_MAX;
	static volatile uint16_t x166 = UINT16_MAX;
	static volatile uint8_t x167 = UINT8_MAX;
	int64_t x168 = -13521860LL;

    t38 = (((x165/x166)+x167)>x168);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 106U;
	volatile uint16_t x171 = UINT16_MAX;
	static int32_t x172 = -1;
	volatile int32_t t39 = -3996616;

    t39 = (((x169/x170)+x171)>x172);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x173 = INT8_MAX;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;

    t40 = (((x173/x174)+x175)>x176);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = -283675;
	int16_t x184 = 1144;
	volatile int32_t t41 = -195598830;

    t41 = (((x181/x182)+x183)>x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x186 = 14581532091520LLU;
	int64_t x187 = -1LL;
	volatile int16_t x188 = INT16_MAX;

    t42 = (((x185/x186)+x187)>x188);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MAX;
	volatile uint64_t x192 = 196015906657461105LLU;
	volatile int32_t t43 = 6626027;

    t43 = (((x189/x190)+x191)>x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x193 = INT16_MIN;
	volatile uint16_t x194 = 9U;
	static int64_t x196 = -67499292847520279LL;
	static volatile int32_t t44 = -5;

    t44 = (((x193/x194)+x195)>x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	int32_t x200 = -173441245;
	volatile int32_t t45 = -1455046;

    t45 = (((x197/x198)+x199)>x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 189U;
	static uint64_t x202 = UINT64_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	int16_t x204 = 0;

    t46 = (((x201/x202)+x203)>x204);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x207 = INT16_MIN;
	static int32_t t47 = 156501;

    t47 = (((x205/x206)+x207)>x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = 19831629U;
	int64_t x211 = INT64_MAX;
	int32_t t48 = 6;

    t48 = (((x209/x210)+x211)>x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x213 = 5U;
	uint16_t x214 = 16U;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -97;
	static int32_t t49 = 1691365;

    t49 = (((x213/x214)+x215)>x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = 1847328U;
	volatile int16_t x218 = INT16_MIN;
	int16_t x219 = -1;
	int16_t x220 = INT16_MIN;

    t50 = (((x217/x218)+x219)>x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x221 = -1;
	volatile int16_t x224 = INT16_MIN;
	int32_t t51 = 0;

    t51 = (((x221/x222)+x223)>x224);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x225 = 1566748U;
	static int32_t x226 = INT32_MIN;
	uint32_t x227 = 6846U;
	volatile int32_t x228 = 1;
	static int32_t t52 = -4;

    t52 = (((x225/x226)+x227)>x228);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t53 = 439347;

    t53 = (((x229/x230)+x231)>x232);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x234 = -3801;
	uint8_t x235 = 11U;
	static volatile int64_t x236 = INT64_MIN;
	int32_t t54 = 1537306;

    t54 = (((x233/x234)+x235)>x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 3146U;
	volatile int64_t x240 = -1LL;
	volatile int32_t t55 = 36609232;

    t55 = (((x237/x238)+x239)>x240);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x243 = 1U;
	int64_t x244 = INT64_MIN;
	int32_t t56 = 1;

    t56 = (((x241/x242)+x243)>x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x246 = 227719U;
	uint64_t x247 = 2637473223801418409LLU;
	int32_t t57 = -204966176;

    t57 = (((x245/x246)+x247)>x248);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = 0;
	int64_t x251 = INT64_MIN;
	int32_t x252 = 233;

    t58 = (((x249/x250)+x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x253 = -1LL;
	int8_t x254 = 1;
	int32_t x255 = 141422752;
	uint16_t x256 = 122U;

    t59 = (((x253/x254)+x255)>x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = -1;
	volatile uint32_t x259 = UINT32_MAX;
	int8_t x260 = -1;
	volatile int32_t t60 = -404;

    t60 = (((x257/x258)+x259)>x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = 15;
	static uint16_t x263 = UINT16_MAX;
	int16_t x264 = -3;
	int32_t t61 = -7;

    t61 = (((x261/x262)+x263)>x264);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = 152602505;
	int8_t x267 = -1;

    t62 = (((x265/x266)+x267)>x268);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x269 = INT32_MIN;
	uint32_t x270 = 160147U;
	volatile int16_t x271 = INT16_MIN;
	int8_t x272 = -1;

    t63 = (((x269/x270)+x271)>x272);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = INT64_MAX;
	int8_t x275 = INT8_MAX;
	int32_t x276 = INT32_MIN;

    t64 = (((x273/x274)+x275)>x276);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = INT64_MIN;
	int8_t x278 = 35;
	static uint8_t x279 = 20U;
	uint16_t x280 = 20736U;
	volatile int32_t t65 = 1511;

    t65 = (((x277/x278)+x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x282 = INT64_MIN;
	static int32_t x283 = INT32_MAX;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t66 = 48332777;

    t66 = (((x281/x282)+x283)>x284);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MAX;
	int8_t x286 = -16;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = 21412340714122859LLU;

    t67 = (((x285/x286)+x287)>x288);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x291 = 265923480598702LL;
	static volatile uint16_t x292 = 426U;
	int32_t t68 = 50429;

    t68 = (((x289/x290)+x291)>x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = INT32_MIN;
	static volatile int64_t x294 = INT64_MAX;
	int64_t x296 = INT64_MIN;

    t69 = (((x293/x294)+x295)>x296);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x298 = UINT8_MAX;
	uint16_t x299 = UINT16_MAX;
	static uint8_t x300 = UINT8_MAX;
	int32_t t70 = 0;

    t70 = (((x297/x298)+x299)>x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x302 = 4;
	int64_t x303 = -1LL;
	int32_t t71 = 71509327;

    t71 = (((x301/x302)+x303)>x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = -2;
	static volatile uint16_t x307 = 3834U;
	static int16_t x308 = INT16_MIN;
	int32_t t72 = 30;

    t72 = (((x305/x306)+x307)>x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static uint64_t x314 = UINT64_MAX;
	uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 1338U;
	int32_t t73 = 9725;

    t73 = (((x313/x314)+x315)>x316);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x317 = -409;
	uint8_t x318 = UINT8_MAX;
	static int64_t x319 = -1LL;
	static int32_t x320 = -1;
	int32_t t74 = -416844;

    t74 = (((x317/x318)+x319)>x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x321 = -810828LL;
	uint16_t x322 = 420U;
	volatile uint16_t x323 = 0U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t75 = 7;

    t75 = (((x321/x322)+x323)>x324);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x325 = -1LL;
	uint32_t x326 = 5U;
	int32_t x327 = INT32_MIN;
	static volatile uint32_t x328 = UINT32_MAX;
	int32_t t76 = -1779248;

    t76 = (((x325/x326)+x327)>x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = INT32_MAX;
	volatile int32_t t77 = 1;

    t77 = (((x329/x330)+x331)>x332);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = 10U;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	static int32_t t78 = 15;

    t78 = (((x333/x334)+x335)>x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x337 = -1;
	static int16_t x338 = 835;
	int64_t x339 = -1LL;

    t79 = (((x337/x338)+x339)>x340);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = INT32_MIN;
	static int16_t x342 = INT16_MIN;
	int64_t x343 = 53LL;
	uint32_t x344 = UINT32_MAX;

    t80 = (((x341/x342)+x343)>x344);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x345 = 1531U;
	uint8_t x347 = 118U;
	uint8_t x348 = 13U;
	static volatile int32_t t81 = -252756;

    t81 = (((x345/x346)+x347)>x348);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x349 = 37726;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = -1;
	int8_t x352 = INT8_MIN;
	static int32_t t82 = 180;

    t82 = (((x349/x350)+x351)>x352);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x353 = -1;
	int8_t x356 = INT8_MAX;
	volatile int32_t t83 = 4108255;

    t83 = (((x353/x354)+x355)>x356);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MAX;
	volatile int32_t t84 = -1;

    t84 = (((x357/x358)+x359)>x360);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x361 = 10U;
	static uint16_t x362 = 13U;
	int64_t x364 = INT64_MIN;
	int32_t t85 = -197;

    t85 = (((x361/x362)+x363)>x364);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	static uint32_t x368 = UINT32_MAX;
	volatile int32_t t86 = 3;

    t86 = (((x365/x366)+x367)>x368);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x373 = 20522U;
	static volatile int32_t x374 = -1;
	int16_t x376 = INT16_MIN;
	int32_t t87 = 493168;

    t87 = (((x373/x374)+x375)>x376);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	uint32_t x378 = 7U;
	uint64_t x379 = UINT64_MAX;
	uint8_t x380 = UINT8_MAX;
	static int32_t t88 = -30387161;

    t88 = (((x377/x378)+x379)>x380);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x382 = INT64_MIN;
	int32_t x384 = INT32_MIN;

    t89 = (((x381/x382)+x383)>x384);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x387 = 76U;
	int16_t x388 = 0;
	int32_t t90 = 2612872;

    t90 = (((x385/x386)+x387)>x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x389 = INT16_MIN;
	static volatile uint8_t x390 = 5U;
	int64_t x391 = -1324474794LL;
	static volatile uint64_t x392 = 57468269393836660LLU;
	volatile int32_t t91 = 1838;

    t91 = (((x389/x390)+x391)>x392);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x394 = 3745U;
	uint8_t x395 = 1U;
	int64_t x396 = INT64_MIN;
	int32_t t92 = 487;

    t92 = (((x393/x394)+x395)>x396);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x399 = INT16_MIN;
	int16_t x400 = -1;

    t93 = (((x397/x398)+x399)>x400);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MIN;
	int64_t x404 = -11980LL;
	static int32_t t94 = 93952;

    t94 = (((x401/x402)+x403)>x404);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x405 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t95 = -6;

    t95 = (((x405/x406)+x407)>x408);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	int8_t x410 = -1;
	uint32_t x411 = 6482920U;
	int32_t t96 = 5067421;

    t96 = (((x409/x410)+x411)>x412);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x414 = 13U;
	int64_t x415 = -1LL;
	volatile uint32_t x416 = 1U;
	int32_t t97 = 10616;

    t97 = (((x413/x414)+x415)>x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x417 = -1LL;
	volatile int32_t x418 = -1;
	int64_t x419 = INT64_MIN;

    t98 = (((x417/x418)+x419)>x420);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x423 = 3103917731938LL;
	uint64_t x424 = 173LLU;
	static int32_t t99 = -20102259;

    t99 = (((x421/x422)+x423)>x424);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x425 = 82179564LL;
	int16_t x426 = -7;
	static volatile uint8_t x427 = 57U;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t100 = -4792;

    t100 = (((x425/x426)+x427)>x428);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x429 = INT32_MIN;
	static volatile int64_t x431 = INT64_MIN;
	int32_t t101 = 168948;

    t101 = (((x429/x430)+x431)>x432);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x434 = INT16_MIN;
	static int64_t x435 = 21943749404605LL;
	static volatile int32_t t102 = -13650;

    t102 = (((x433/x434)+x435)>x436);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x437 = INT8_MAX;
	static uint64_t x438 = UINT64_MAX;
	int8_t x439 = INT8_MAX;
	volatile int8_t x440 = 5;

    t103 = (((x437/x438)+x439)>x440);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	int8_t x443 = -1;
	static int8_t x444 = -1;

    t104 = (((x441/x442)+x443)>x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x446 = 1;
	uint16_t x447 = 6901U;
	static int64_t x448 = 3731436255LL;
	int32_t t105 = 1211801;

    t105 = (((x445/x446)+x447)>x448);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x449 = 735556927724LLU;
	static int8_t x451 = -1;
	int16_t x452 = INT16_MIN;

    t106 = (((x449/x450)+x451)>x452);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = 2670935394LLU;
	int16_t x454 = -1;
	int16_t x455 = INT16_MIN;
	uint32_t x456 = 48U;
	volatile int32_t t107 = -58;

    t107 = (((x453/x454)+x455)>x456);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x457 = -1LL;
	uint32_t x458 = 1520U;
	uint32_t x459 = 3377546U;

    t108 = (((x457/x458)+x459)>x460);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x461 = 6838U;
	uint32_t x462 = 1705246U;
	int32_t x463 = INT32_MAX;
	static volatile int8_t x464 = INT8_MIN;
	volatile int32_t t109 = 52614616;

    t109 = (((x461/x462)+x463)>x464);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t t110 = 54;

    t110 = (((x465/x466)+x467)>x468);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x474 = INT64_MIN;
	uint16_t x475 = 24U;
	int8_t x476 = INT8_MIN;
	volatile int32_t t111 = -1183;

    t111 = (((x473/x474)+x475)>x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x481 = -1;
	static volatile int32_t x482 = INT32_MIN;
	uint32_t x483 = 15751768U;
	int64_t x484 = -1LL;

    t112 = (((x481/x482)+x483)>x484);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x485 = -1LL;
	int8_t x486 = INT8_MIN;
	volatile int32_t x487 = INT32_MIN;
	static uint32_t x488 = UINT32_MAX;
	volatile int32_t t113 = 3;

    t113 = (((x485/x486)+x487)>x488);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	volatile int64_t x491 = INT64_MAX;
	static int16_t x492 = -1;
	volatile int32_t t114 = -260653;

    t114 = (((x489/x490)+x491)>x492);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MIN;
	static int32_t x495 = -1;
	volatile int64_t x496 = -1LL;
	int32_t t115 = -14725;

    t115 = (((x493/x494)+x495)>x496);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x498 = 15258;
	int16_t x499 = INT16_MIN;
	int32_t x500 = -1;

    t116 = (((x497/x498)+x499)>x500);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x501 = INT32_MAX;
	volatile int32_t x502 = -153488;
	int8_t x503 = -23;
	volatile uint32_t x504 = UINT32_MAX;
	volatile int32_t t117 = 1851;

    t117 = (((x501/x502)+x503)>x504);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x505 = INT64_MIN;
	static uint64_t x506 = UINT64_MAX;
	int8_t x507 = INT8_MIN;
	uint32_t x508 = 24U;
	int32_t t118 = 131;

    t118 = (((x505/x506)+x507)>x508);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x509 = INT32_MAX;
	volatile uint16_t x510 = UINT16_MAX;
	volatile int32_t x511 = INT32_MIN;
	volatile int32_t x512 = -42;
	volatile int32_t t119 = 1845241;

    t119 = (((x509/x510)+x511)>x512);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x513 = 193;
	static int8_t x514 = -55;
	uint8_t x515 = 46U;
	int32_t t120 = -240;

    t120 = (((x513/x514)+x515)>x516);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x518 = INT64_MIN;
	int32_t x519 = INT32_MIN;
	int8_t x520 = 31;
	volatile int32_t t121 = -1;

    t121 = (((x517/x518)+x519)>x520);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x521 = 0;
	int16_t x522 = INT16_MIN;
	int64_t x523 = INT64_MIN;
	static int8_t x524 = 0;
	volatile int32_t t122 = -8997218;

    t122 = (((x521/x522)+x523)>x524);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x527 = INT8_MAX;
	int64_t x528 = 729021200215734LL;
	int32_t t123 = 8938;

    t123 = (((x525/x526)+x527)>x528);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x529 = INT16_MAX;
	volatile int8_t x531 = 36;
	volatile int32_t t124 = -15011;

    t124 = (((x529/x530)+x531)>x532);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x533 = -1;
	int16_t x534 = -2421;
	uint16_t x536 = 184U;
	static volatile int32_t t125 = 3114;

    t125 = (((x533/x534)+x535)>x536);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x537 = UINT32_MAX;
	int32_t x538 = -102775;
	uint64_t x539 = UINT64_MAX;
	int8_t x540 = 44;
	int32_t t126 = 6;

    t126 = (((x537/x538)+x539)>x540);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x542 = INT32_MIN;
	volatile int16_t x543 = INT16_MAX;
	int32_t t127 = 169;

    t127 = (((x541/x542)+x543)>x544);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x547 = 862;
	volatile int32_t x548 = INT32_MAX;
	volatile int32_t t128 = 613;

    t128 = (((x545/x546)+x547)>x548);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x553 = -9385;
	int16_t x554 = INT16_MAX;
	int64_t x556 = -1LL;
	int32_t t129 = 423;

    t129 = (((x553/x554)+x555)>x556);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x558 = -38;
	uint64_t x559 = 5719443578LLU;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t130 = 1;

    t130 = (((x557/x558)+x559)>x560);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x561 = 5041U;
	int16_t x562 = INT16_MAX;
	int16_t x563 = INT16_MIN;
	uint8_t x564 = 2U;
	int32_t t131 = 1;

    t131 = (((x561/x562)+x563)>x564);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x565 = INT64_MIN;
	static int64_t x566 = -2457743563002LL;
	static uint64_t x568 = 117LLU;
	volatile int32_t t132 = -1038;

    t132 = (((x565/x566)+x567)>x568);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x569 = -1;
	int64_t x571 = INT64_MIN;
	uint32_t x572 = 4272681U;
	volatile int32_t t133 = 9;

    t133 = (((x569/x570)+x571)>x572);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x573 = 5LLU;
	static int16_t x574 = -1;
	static int32_t x575 = 185564;
	uint64_t x576 = 267395501LLU;

    t134 = (((x573/x574)+x575)>x576);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x578 = UINT64_MAX;
	int16_t x579 = INT16_MIN;
	volatile int32_t t135 = 6487;

    t135 = (((x577/x578)+x579)>x580);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x581 = -1;
	uint64_t x582 = 390LLU;
	int8_t x583 = INT8_MIN;
	int8_t x584 = -1;

    t136 = (((x581/x582)+x583)>x584);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x585 = 7554799440538251LLU;
	int16_t x586 = -1;
	uint16_t x587 = UINT16_MAX;
	static uint16_t x588 = 1U;
	volatile int32_t t137 = 807;

    t137 = (((x585/x586)+x587)>x588);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x589 = 3884;
	volatile uint8_t x590 = UINT8_MAX;
	int32_t x591 = -22;
	int32_t t138 = -475691;

    t138 = (((x589/x590)+x591)>x592);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x593 = INT16_MAX;
	int8_t x594 = -1;
	volatile uint16_t x595 = 0U;
	static int16_t x596 = INT16_MAX;
	int32_t t139 = 15;

    t139 = (((x593/x594)+x595)>x596);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x597 = -1;
	int64_t x599 = INT64_MAX;
	int32_t x600 = INT32_MAX;
	int32_t t140 = -1;

    t140 = (((x597/x598)+x599)>x600);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x601 = 0;
	static int32_t x602 = 31;
	int32_t t141 = -734;

    t141 = (((x601/x602)+x603)>x604);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x606 = UINT64_MAX;
	int8_t x607 = INT8_MAX;

    t142 = (((x605/x606)+x607)>x608);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x609 = 25755937139LL;
	int8_t x611 = -29;
	volatile int64_t x612 = -1LL;
	static int32_t t143 = -1540;

    t143 = (((x609/x610)+x611)>x612);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x614 = 15522U;
	volatile int32_t t144 = -3679;

    t144 = (((x613/x614)+x615)>x616);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x617 = 802470665U;
	int8_t x618 = INT8_MIN;
	int32_t x620 = -66;
	volatile int32_t t145 = 328916841;

    t145 = (((x617/x618)+x619)>x620);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x625 = -64LL;
	uint8_t x626 = 8U;
	static volatile int32_t x627 = INT32_MIN;
	volatile uint16_t x628 = UINT16_MAX;
	int32_t t146 = -29529974;

    t146 = (((x625/x626)+x627)>x628);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x629 = -3;
	static int16_t x630 = 72;
	static uint8_t x631 = 0U;
	static volatile int32_t t147 = -434333;

    t147 = (((x629/x630)+x631)>x632);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x635 = INT8_MIN;
	volatile int32_t t148 = -6;

    t148 = (((x633/x634)+x635)>x636);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	int32_t x639 = INT32_MIN;
	volatile int32_t x640 = INT32_MIN;

    t149 = (((x637/x638)+x639)>x640);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x641 = -163196740;
	uint32_t x642 = UINT32_MAX;
	static int8_t x643 = INT8_MIN;
	static uint8_t x644 = UINT8_MAX;
	static int32_t t150 = 1;

    t150 = (((x641/x642)+x643)>x644);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x645 = INT16_MIN;
	volatile uint32_t x646 = 8154U;
	int8_t x648 = INT8_MAX;

    t151 = (((x645/x646)+x647)>x648);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x649 = INT64_MIN;
	int64_t x650 = -5548910346622942LL;
	static uint32_t x652 = 7036083U;
	int32_t t152 = -116586;

    t152 = (((x649/x650)+x651)>x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x653 = INT8_MIN;
	static uint16_t x654 = 304U;
	uint16_t x655 = UINT16_MAX;
	int16_t x656 = INT16_MIN;
	volatile int32_t t153 = -500015314;

    t153 = (((x653/x654)+x655)>x656);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x661 = -2569502741788009571LL;
	static volatile uint32_t x662 = 4128021U;
	int64_t x663 = 2357719138396LL;
	uint64_t x664 = 7634LLU;

    t154 = (((x661/x662)+x663)>x664);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x667 = INT16_MIN;
	int8_t x668 = INT8_MIN;
	int32_t t155 = -45138;

    t155 = (((x665/x666)+x667)>x668);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x669 = UINT64_MAX;
	int8_t x670 = INT8_MIN;
	static int8_t x671 = 0;
	volatile int64_t x672 = INT64_MIN;
	int32_t t156 = -7;

    t156 = (((x669/x670)+x671)>x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x673 = 0U;
	int64_t x674 = INT64_MIN;
	static int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MIN;
	int32_t t157 = -39;

    t157 = (((x673/x674)+x675)>x676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x677 = 26U;
	static uint8_t x679 = 3U;
	int16_t x680 = INT16_MIN;

    t158 = (((x677/x678)+x679)>x680);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x681 = 9784343;
	static int8_t x682 = -14;
	static volatile int16_t x683 = INT16_MIN;
	int64_t x684 = 138210719137862894LL;
	volatile int32_t t159 = -2324;

    t159 = (((x681/x682)+x683)>x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x685 = 104720817;
	volatile int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	volatile int32_t t160 = -5606382;

    t160 = (((x685/x686)+x687)>x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x689 = -1LL;
	static uint8_t x690 = UINT8_MAX;
	int32_t x691 = INT32_MIN;
	int32_t x692 = -64540000;
	static int32_t t161 = 113;

    t161 = (((x689/x690)+x691)>x692);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x697 = 909271572137750LLU;
	int64_t x699 = -3529195580389229809LL;
	uint16_t x700 = 32U;
	static int32_t t162 = -128815834;

    t162 = (((x697/x698)+x699)>x700);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x701 = -1;
	int8_t x702 = -15;
	volatile uint32_t x703 = 5U;
	int8_t x704 = INT8_MAX;
	volatile int32_t t163 = -66569796;

    t163 = (((x701/x702)+x703)>x704);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = 4;
	uint64_t x708 = 6596449803126161LLU;
	volatile int32_t t164 = -46;

    t164 = (((x705/x706)+x707)>x708);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x709 = 189480LLU;
	int16_t x711 = -1;
	uint64_t x712 = UINT64_MAX;
	volatile int32_t t165 = 116942153;

    t165 = (((x709/x710)+x711)>x712);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x713 = 7;
	int32_t x714 = INT32_MAX;
	static int64_t x715 = 5902561LL;
	int32_t x716 = INT32_MIN;
	int32_t t166 = -508717528;

    t166 = (((x713/x714)+x715)>x716);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x717 = 684837LL;
	static int32_t x719 = -4450;
	int8_t x720 = INT8_MIN;
	static int32_t t167 = 0;

    t167 = (((x717/x718)+x719)>x720);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x721 = 3889900336LLU;
	volatile int16_t x722 = -1;
	volatile uint64_t x723 = UINT64_MAX;
	volatile int32_t t168 = 7052856;

    t168 = (((x721/x722)+x723)>x724);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x726 = 5270U;
	uint16_t x727 = 12U;
	int8_t x728 = INT8_MAX;
	volatile int32_t t169 = 950247;

    t169 = (((x725/x726)+x727)>x728);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x733 = UINT8_MAX;
	uint64_t x734 = 269188993LLU;
	static int64_t x736 = 808LL;
	volatile int32_t t170 = 1;

    t170 = (((x733/x734)+x735)>x736);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x737 = UINT64_MAX;
	uint32_t x738 = 2524U;
	uint8_t x739 = UINT8_MAX;
	static int32_t x740 = -1;
	volatile int32_t t171 = 851611;

    t171 = (((x737/x738)+x739)>x740);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x741 = 52U;
	int8_t x744 = 23;
	int32_t t172 = 21;

    t172 = (((x741/x742)+x743)>x744);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x745 = -1;
	int8_t x746 = -1;
	volatile uint64_t x747 = 32229571406762LLU;
	int32_t x748 = INT32_MAX;
	int32_t t173 = 7;

    t173 = (((x745/x746)+x747)>x748);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x749 = -2;
	uint16_t x750 = 163U;
	int16_t x751 = -480;
	uint32_t x752 = 95560467U;
	volatile int32_t t174 = 930518724;

    t174 = (((x749/x750)+x751)>x752);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x753 = INT8_MAX;
	volatile int8_t x754 = 24;
	uint32_t x755 = 0U;
	int64_t x756 = 4123LL;
	int32_t t175 = -4161120;

    t175 = (((x753/x754)+x755)>x756);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x757 = -10;
	static uint64_t x758 = 2095684735642575LLU;
	static uint8_t x759 = 21U;
	int64_t x760 = 4939093095396126LL;
	static int32_t t176 = -111;

    t176 = (((x757/x758)+x759)>x760);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x761 = -1LL;
	int64_t x762 = INT64_MIN;
	volatile uint32_t x764 = 4281U;

    t177 = (((x761/x762)+x763)>x764);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x765 = -31;
	volatile uint8_t x766 = UINT8_MAX;
	uint64_t x767 = 5000348003486686599LLU;
	static int32_t t178 = -921497505;

    t178 = (((x765/x766)+x767)>x768);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x769 = 1086343166U;
	static int32_t x770 = -1;
	static int8_t x771 = INT8_MIN;

    t179 = (((x769/x770)+x771)>x772);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x774 = UINT8_MAX;
	static int64_t x775 = -1713936054LL;
	int16_t x776 = -21;
	volatile int32_t t180 = -974006;

    t180 = (((x773/x774)+x775)>x776);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x777 = 1LL;
	static volatile int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MIN;
	volatile uint8_t x780 = 32U;
	int32_t t181 = -1007;

    t181 = (((x777/x778)+x779)>x780);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x781 = INT8_MAX;
	static int8_t x782 = INT8_MAX;
	int32_t x783 = 1;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t182 = 209702;

    t182 = (((x781/x782)+x783)>x784);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x785 = INT64_MIN;
	int64_t x787 = -94732776879LL;
	int64_t x788 = -1LL;
	volatile int32_t t183 = 553480;

    t183 = (((x785/x786)+x787)>x788);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x789 = -101761061LL;
	static int8_t x791 = -21;
	volatile int64_t x792 = INT64_MAX;

    t184 = (((x789/x790)+x791)>x792);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x794 = -1LL;
	static int8_t x795 = -38;
	uint8_t x796 = UINT8_MAX;

    t185 = (((x793/x794)+x795)>x796);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x797 = INT16_MAX;
	static int32_t x798 = INT32_MIN;
	uint32_t x799 = UINT32_MAX;
	int32_t t186 = -2;

    t186 = (((x797/x798)+x799)>x800);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x801 = INT32_MAX;
	int16_t x802 = INT16_MAX;
	uint64_t x803 = UINT64_MAX;
	int32_t t187 = -159357930;

    t187 = (((x801/x802)+x803)>x804);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x805 = -26;
	int16_t x806 = -1;
	volatile int16_t x807 = INT16_MIN;
	uint64_t x808 = 6107LLU;
	static volatile int32_t t188 = -48211;

    t188 = (((x805/x806)+x807)>x808);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x809 = UINT16_MAX;
	uint32_t x810 = 253226U;
	volatile int32_t x811 = 6305;
	int64_t x812 = -47391319386988498LL;
	int32_t t189 = 0;

    t189 = (((x809/x810)+x811)>x812);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x814 = -1;
	int32_t x815 = -7283731;
	static int32_t x816 = INT32_MIN;
	int32_t t190 = 11971226;

    t190 = (((x813/x814)+x815)>x816);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x817 = INT32_MAX;
	static uint16_t x818 = 351U;
	int16_t x819 = -1;
	int64_t x820 = INT64_MIN;

    t191 = (((x817/x818)+x819)>x820);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x821 = 101918029LL;
	static uint64_t x822 = 46950376473081LLU;
	uint64_t x823 = UINT64_MAX;
	volatile int32_t x824 = INT32_MIN;

    t192 = (((x821/x822)+x823)>x824);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x826 = INT16_MIN;
	uint32_t x827 = 1U;
	static int16_t x828 = -60;
	int32_t t193 = 684;

    t193 = (((x825/x826)+x827)>x828);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x829 = -7781;
	int16_t x831 = -1;
	int8_t x832 = INT8_MIN;

    t194 = (((x829/x830)+x831)>x832);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x833 = 9U;
	uint64_t x834 = 142954566LLU;
	static volatile int64_t x835 = INT64_MAX;
	static int32_t t195 = 935894090;

    t195 = (((x833/x834)+x835)>x836);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x843 = 160U;
	int16_t x844 = INT16_MIN;
	int32_t t196 = -64480;

    t196 = (((x841/x842)+x843)>x844);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x845 = -18;
	static int8_t x847 = INT8_MAX;
	int32_t t197 = 2151303;

    t197 = (((x845/x846)+x847)>x848);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x849 = UINT8_MAX;
	volatile uint16_t x850 = UINT16_MAX;
	int32_t x851 = -1;
	volatile int32_t t198 = 2755415;

    t198 = (((x849/x850)+x851)>x852);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x853 = INT8_MIN;
	int32_t x854 = 804423;
	static uint8_t x855 = UINT8_MAX;
	int32_t x856 = 2439;

    t199 = (((x853/x854)+x855)>x856);

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

