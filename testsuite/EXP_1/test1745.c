
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

static volatile int8_t x4 = 9;
int16_t x25 = 66;
int16_t x26 = -1;
int32_t t6 = 32;
int64_t x30 = -61020367LL;
int64_t x32 = INT64_MIN;
volatile uint16_t x34 = UINT16_MAX;
int32_t x37 = INT32_MIN;
int8_t x40 = INT8_MIN;
int32_t x54 = -28;
uint8_t x55 = 1U;
int32_t x56 = INT32_MIN;
volatile int16_t x58 = INT16_MIN;
int32_t x62 = -7;
static int32_t t21 = -385;
int16_t x89 = INT16_MAX;
int8_t x96 = 21;
int32_t t24 = 23;
static uint8_t x102 = 20U;
int32_t x106 = 254934318;
int64_t x108 = INT64_MAX;
int64_t x114 = 3LL;
static uint8_t x120 = 55U;
volatile int32_t x125 = -1;
int8_t x127 = INT8_MIN;
volatile int32_t x132 = INT32_MIN;
uint8_t x136 = 1U;
int32_t t34 = -29;
int8_t x147 = 0;
static uint64_t x154 = 1658LLU;
int32_t x156 = 0;
int8_t x157 = INT8_MIN;
int32_t t39 = 636;
int64_t x167 = INT64_MAX;
static volatile int8_t x170 = INT8_MIN;
int64_t x171 = -337857048LL;
static int8_t x173 = INT8_MIN;
volatile int32_t t43 = 259795;
int32_t x185 = -1;
int64_t x189 = INT64_MIN;
static int64_t x191 = 1036299475700630LL;
static int32_t t47 = -4398;
static volatile int32_t t49 = 228906643;
static uint32_t x204 = 8U;
volatile uint32_t x214 = 128715U;
static int8_t x215 = 1;
int16_t x221 = INT16_MAX;
static uint32_t x223 = 10988088U;
int16_t x226 = INT16_MAX;
int8_t x231 = INT8_MAX;
int8_t x236 = INT8_MIN;
int8_t x237 = INT8_MIN;
int8_t x244 = 15;
int16_t x248 = INT16_MIN;
int16_t x256 = -2;
int64_t x265 = -14777848673033LL;
int32_t t69 = 6;
int64_t x281 = INT64_MAX;
int32_t x282 = INT32_MIN;
int64_t x283 = INT64_MIN;
uint64_t x290 = 1084990356LLU;
int16_t x291 = -7;
int32_t t72 = -28593;
int16_t x293 = INT16_MIN;
int16_t x297 = INT16_MAX;
static int32_t t75 = 46178;
uint16_t x306 = 914U;
uint16_t x309 = 1619U;
volatile int32_t t78 = -57972;
static int8_t x319 = INT8_MIN;
int8_t x324 = 1;
static int8_t x325 = INT8_MIN;
int32_t t82 = 5607720;
volatile int32_t t83 = 38860643;
volatile uint8_t x340 = UINT8_MAX;
int32_t t84 = -623554424;
int8_t x345 = 0;
int8_t x346 = -1;
volatile int32_t t86 = -11;
int16_t x349 = INT16_MIN;
int64_t x357 = -1LL;
int64_t x359 = -1LL;
int16_t x360 = INT16_MIN;
uint32_t x361 = UINT32_MAX;
uint16_t x368 = 12005U;
uint32_t x372 = 318799752U;
volatile int32_t t92 = 17493506;
static volatile int8_t x377 = INT8_MIN;
volatile int32_t t94 = -107979;
int32_t x383 = -1;
int16_t x385 = INT16_MIN;
int64_t x387 = INT64_MAX;
int32_t x391 = -102300853;
static int32_t x395 = INT32_MAX;
int16_t x403 = INT16_MIN;
volatile int32_t t100 = 14317079;
int8_t x407 = INT8_MIN;
int32_t t101 = -119702231;
int64_t x415 = INT64_MIN;
int16_t x417 = INT16_MAX;
int32_t x418 = INT32_MIN;
volatile int64_t x420 = 93975993025521144LL;
int32_t t104 = -20636607;
static int32_t t106 = -1584377;
volatile int32_t x430 = -1;
uint8_t x436 = 23U;
int32_t t108 = -1;
static int16_t x439 = INT16_MIN;
static volatile int32_t t109 = 0;
static uint64_t x441 = 192073614340125LLU;
uint8_t x449 = 6U;
int16_t x452 = INT16_MIN;
static int8_t x457 = -1;
int32_t x463 = INT32_MIN;
volatile uint64_t x465 = UINT64_MAX;
uint32_t x466 = 0U;
static int16_t x470 = INT16_MAX;
static volatile uint16_t x488 = 3968U;
uint32_t x490 = 0U;
int32_t t122 = 187;
static uint64_t x494 = 1048871837709805886LLU;
static volatile int32_t t123 = 0;
int8_t x497 = INT8_MAX;
static int8_t x500 = -1;
volatile int32_t t124 = 135300;
uint16_t x503 = UINT16_MAX;
int8_t x504 = INT8_MAX;
volatile int32_t t125 = 10636;
int16_t x505 = 9;
uint64_t x508 = 1830252817012216438LLU;
volatile int32_t t126 = -4500;
static int32_t t128 = 88;
int64_t x526 = INT64_MIN;
int8_t x529 = -8;
uint32_t x530 = UINT32_MAX;
uint16_t x533 = 1U;
static int16_t x546 = INT16_MIN;
int64_t x553 = 104LL;
static int64_t x560 = INT64_MAX;
int8_t x561 = -1;
static int64_t x562 = -1LL;
static uint8_t x574 = UINT8_MAX;
int32_t t143 = -169314;
int32_t x581 = 33205;
static volatile int32_t t147 = -638;
int16_t x600 = INT16_MAX;
volatile int16_t x602 = -1072;
int64_t x603 = -1LL;
int32_t t150 = -144444;
uint64_t x609 = 2893LLU;
int64_t x610 = -1LL;
static int64_t x612 = 59563LL;
volatile int32_t x616 = -841098;
int16_t x617 = -15;
volatile int32_t t154 = -33;
volatile int32_t t157 = -81638;
static volatile uint64_t x638 = 651299LLU;
int8_t x639 = -13;
int32_t t159 = -6255;
int64_t x642 = -1LL;
static int32_t x657 = INT32_MAX;
uint16_t x661 = 230U;
int64_t x664 = INT64_MAX;
volatile int16_t x668 = -17;
uint16_t x680 = UINT16_MAX;
volatile int8_t x682 = -1;
uint64_t x694 = 95655107596859LLU;
static uint64_t x698 = UINT64_MAX;
static uint32_t x699 = UINT32_MAX;
int16_t x702 = -1566;
int32_t t175 = -165629293;
static volatile int32_t x712 = -1;
static int32_t t177 = 188;
uint64_t x716 = 3385LLU;
volatile int32_t t178 = -435;
int32_t t179 = 7550276;
int32_t x721 = INT32_MIN;
int16_t x723 = INT16_MIN;
int16_t x725 = INT16_MIN;
int64_t x727 = 1742292LL;
static int64_t x731 = 101406713LL;
volatile int32_t x735 = INT32_MAX;
volatile int16_t x742 = 358;
int16_t x743 = -28;
uint64_t x748 = UINT64_MAX;
volatile int32_t t186 = -3854636;
int8_t x757 = 7;
uint16_t x758 = 6246U;
static int64_t x760 = -1LL;
int32_t t190 = -1016;
static uint8_t x772 = UINT8_MAX;
int64_t x775 = INT64_MAX;
static int32_t t193 = -7;
uint32_t x778 = 449U;
uint64_t x786 = 8213LLU;
uint64_t x787 = 63206LLU;
uint32_t x789 = UINT32_MAX;
static uint8_t x793 = 0U;
volatile uint32_t x794 = 259684U;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = -1;
	int64_t x3 = INT64_MAX;
	static volatile int32_t t0 = 340;

    t0 = (((x1>x2)|x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 950U;
	volatile uint64_t x6 = 2989047LLU;
	int64_t x7 = 201LL;
	uint8_t x8 = 0U;
	int32_t t1 = -1;

    t1 = (((x5>x6)|x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = UINT32_MAX;
	int8_t x10 = -1;
	static int32_t x11 = INT32_MIN;
	static uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -220129541;

    t2 = (((x9>x10)|x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	volatile uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 24402272;

    t3 = (((x13>x14)|x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 15937301370570LLU;
	int8_t x18 = 11;
	uint64_t x19 = 107267094LLU;
	volatile uint8_t x20 = 0U;
	volatile int32_t t4 = -8043404;

    t4 = (((x17>x18)|x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	uint64_t x22 = UINT64_MAX;
	int64_t x23 = -1LL;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -748;

    t5 = (((x21>x22)|x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = INT16_MIN;
	volatile uint16_t x28 = 796U;

    t6 = (((x25>x26)|x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MIN;
	volatile int16_t x31 = INT16_MAX;
	volatile int32_t t7 = 44571814;

    t7 = (((x29>x30)|x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	volatile uint8_t x36 = 1U;
	int32_t t8 = 36904942;

    t8 = (((x33>x34)|x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x38 = 1U;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -43947;

    t9 = (((x37>x38)|x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint32_t x42 = 629809146U;
	volatile int64_t x43 = INT64_MIN;
	uint8_t x44 = 45U;
	int32_t t10 = -48;

    t10 = (((x41>x42)|x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 31851718;

    t11 = (((x45>x46)|x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 929;
	int64_t x50 = INT64_MIN;
	volatile int16_t x51 = 22;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 32248331;

    t12 = (((x49>x50)|x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = 28;
	static int32_t t13 = -214;

    t13 = (((x53>x54)|x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = -13;
	static int32_t x59 = -1;
	static int32_t x60 = 3304;
	volatile int32_t t14 = 26;

    t14 = (((x57>x58)|x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	static int8_t x63 = -1;
	static int32_t x64 = INT32_MIN;
	static int32_t t15 = -891452687;

    t15 = (((x61>x62)|x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x66 = 2957346U;
	uint8_t x67 = 0U;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 3;

    t16 = (((x65>x66)|x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -11034;
	static int64_t x70 = 1178858132353082990LL;
	int16_t x71 = -1;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 3;

    t17 = (((x69>x70)|x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = 2945;
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	int32_t x76 = INT32_MAX;
	int32_t t18 = -2494318;

    t18 = (((x73>x74)|x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int32_t x78 = INT32_MIN;
	int16_t x79 = 0;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = -22;

    t19 = (((x77>x78)|x79)>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	uint8_t x82 = 5U;
	uint8_t x83 = 1U;
	volatile int16_t x84 = 954;
	static volatile int32_t t20 = 968162539;

    t20 = (((x81>x82)|x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x85 = -14324;
	static int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int32_t x88 = -136;

    t21 = (((x85>x86)|x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x90 = UINT64_MAX;
	static uint16_t x91 = 45U;
	static uint8_t x92 = 30U;
	int32_t t22 = -4144171;

    t22 = (((x89>x90)|x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = INT8_MIN;
	uint16_t x94 = 13U;
	volatile int64_t x95 = INT64_MIN;
	volatile int32_t t23 = 125953;

    t23 = (((x93>x94)|x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	uint16_t x99 = 32472U;
	volatile uint16_t x100 = 2238U;

    t24 = (((x97>x98)|x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MIN;
	static int32_t x103 = INT32_MAX;
	volatile uint16_t x104 = 3U;
	int32_t t25 = 2763167;

    t25 = (((x101>x102)|x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int8_t x107 = INT8_MAX;
	int32_t t26 = 211;

    t26 = (((x105>x106)|x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	uint64_t x110 = 15098174777LLU;
	int32_t x111 = INT32_MIN;
	uint16_t x112 = 1U;
	volatile int32_t t27 = -22;

    t27 = (((x109>x110)|x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 23;
	int64_t x115 = INT64_MAX;
	volatile int64_t x116 = INT64_MAX;
	int32_t t28 = -99268;

    t28 = (((x113>x114)|x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = 644302U;
	static int32_t x118 = INT32_MAX;
	volatile uint32_t x119 = 159U;
	static volatile int32_t t29 = -3;

    t29 = (((x117>x118)|x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = -56LL;
	static volatile uint8_t x122 = 16U;
	int16_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -2537632;

    t30 = (((x121>x122)|x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = INT8_MAX;
	volatile int8_t x128 = 2;
	volatile int32_t t31 = 10169;

    t31 = (((x125>x126)|x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = -42;
	uint64_t x131 = 102752787LLU;
	static volatile int32_t t32 = -4;

    t32 = (((x129>x130)|x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = -58;
	int16_t x134 = INT16_MAX;
	uint8_t x135 = UINT8_MAX;
	int32_t t33 = 107477964;

    t33 = (((x133>x134)|x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x137 = 7966;
	static int32_t x138 = -5;
	static int16_t x139 = 0;
	volatile uint8_t x140 = UINT8_MAX;

    t34 = (((x137>x138)|x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = UINT16_MAX;
	int64_t x142 = 10944988700800LL;
	int32_t x143 = 140;
	int8_t x144 = -1;
	static volatile int32_t t35 = 360785;

    t35 = (((x141>x142)|x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x145 = UINT32_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 40;

    t36 = (((x145>x146)|x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = 0;
	volatile int8_t x150 = INT8_MIN;
	volatile int16_t x151 = -1;
	static uint8_t x152 = 0U;
	int32_t t37 = -3;

    t37 = (((x149>x150)|x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -6829988;
	int8_t x155 = INT8_MIN;
	int32_t t38 = -15717887;

    t38 = (((x153>x154)|x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x158 = 0;
	uint64_t x159 = 311490555783337008LLU;
	int32_t x160 = -108261017;

    t39 = (((x157>x158)|x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	uint64_t x162 = 899LLU;
	static int16_t x163 = 205;
	volatile int32_t x164 = -189648;
	int32_t t40 = -29;

    t40 = (((x161>x162)|x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	volatile int8_t x166 = INT8_MIN;
	int8_t x168 = -1;
	int32_t t41 = 5628386;

    t41 = (((x165>x166)|x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -13;
	uint32_t x172 = 1101300309U;
	int32_t t42 = -4654;

    t42 = (((x169>x170)|x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	static int64_t x176 = 29LL;

    t43 = (((x173>x174)|x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x177 = 0U;
	int32_t x178 = INT32_MIN;
	static uint8_t x179 = 0U;
	int8_t x180 = INT8_MIN;
	int32_t t44 = 7184;

    t44 = (((x177>x178)|x179)>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	uint16_t x182 = 602U;
	int16_t x183 = INT16_MAX;
	static int32_t x184 = INT32_MIN;
	int32_t t45 = 0;

    t45 = (((x181>x182)|x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x186 = INT16_MIN;
	static uint8_t x187 = UINT8_MAX;
	int16_t x188 = 0;
	int32_t t46 = 1;

    t46 = (((x185>x186)|x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = 728;
	int64_t x192 = INT64_MIN;

    t47 = (((x189>x190)|x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x193 = INT8_MIN;
	volatile int8_t x194 = -1;
	int32_t x195 = INT32_MAX;
	static int16_t x196 = 152;
	int32_t t48 = 1442;

    t48 = (((x193>x194)|x195)>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	static int32_t x198 = -10184;
	volatile uint8_t x199 = 97U;
	static int16_t x200 = 220;

    t49 = (((x197>x198)|x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = 421;
	volatile int64_t x202 = -1LL;
	int32_t x203 = -1;
	volatile int32_t t50 = -133;

    t50 = (((x201>x202)|x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = 1;
	int16_t x206 = 4;
	int16_t x207 = INT16_MAX;
	volatile uint32_t x208 = 232486736U;
	int32_t t51 = -76813;

    t51 = (((x205>x206)|x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x209 = UINT64_MAX;
	int32_t x210 = 482313;
	static volatile int32_t x211 = INT32_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = -1611641;

    t52 = (((x209>x210)|x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	static int8_t x216 = -1;
	int32_t t53 = -3;

    t53 = (((x213>x214)|x215)>x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = 7;
	volatile int64_t x218 = 44633927367687LL;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = -26537155;
	int32_t t54 = 49009639;

    t54 = (((x217>x218)|x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = UINT16_MAX;
	uint16_t x224 = 93U;
	volatile int32_t t55 = -10;

    t55 = (((x221>x222)|x223)>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 1;
	int64_t x227 = -50453717445382048LL;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -4875004;

    t56 = (((x225>x226)|x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	static volatile int8_t x230 = INT8_MAX;
	uint64_t x232 = 210321299111911LLU;
	int32_t t57 = 16325;

    t57 = (((x229>x230)|x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = -23369272004LL;
	int32_t x235 = -1;
	int32_t t58 = -190;

    t58 = (((x233>x234)|x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x238 = INT32_MIN;
	int8_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 470;

    t59 = (((x237>x238)|x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	uint16_t x242 = 474U;
	uint16_t x243 = 3467U;
	volatile int32_t t60 = -75119533;

    t60 = (((x241>x242)|x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MIN;
	volatile int64_t x246 = 3118913LL;
	int64_t x247 = INT64_MAX;
	int32_t t61 = 2036;

    t61 = (((x245>x246)|x247)>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 1U;
	static int32_t x250 = -7258;
	int8_t x251 = INT8_MIN;
	static int64_t x252 = -66LL;
	volatile int32_t t62 = -530420613;

    t62 = (((x249>x250)|x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	int32_t x254 = INT32_MAX;
	int32_t x255 = -1;
	int32_t t63 = -351014285;

    t63 = (((x253>x254)|x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 9U;
	int32_t x258 = INT32_MAX;
	int8_t x259 = -5;
	uint64_t x260 = 27439199867LLU;
	static volatile int32_t t64 = -101943;

    t64 = (((x257>x258)|x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MAX;
	uint8_t x262 = UINT8_MAX;
	static int64_t x263 = -7411LL;
	int64_t x264 = -1LL;
	volatile int32_t t65 = -2156;

    t65 = (((x261>x262)|x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MIN;
	int64_t x267 = 12LL;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -112;

    t66 = (((x265>x266)|x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 156281759566426LL;
	static volatile uint64_t x270 = 341684LLU;
	volatile uint64_t x271 = 3628LLU;
	int8_t x272 = 5;
	int32_t t67 = 22213020;

    t67 = (((x269>x270)|x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	static volatile uint8_t x274 = 112U;
	int64_t x275 = -19776184192829573LL;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 1;

    t68 = (((x273>x274)|x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 1U;
	static uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	uint64_t x280 = 121249614769099242LLU;

    t69 = (((x277>x278)|x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x284 = 19U;
	int32_t t70 = -4;

    t70 = (((x281>x282)|x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -1LL;
	static int64_t x286 = 2636305150854024872LL;
	int64_t x287 = -254274918469282LL;
	int64_t x288 = INT64_MAX;
	int32_t t71 = 51387;

    t71 = (((x285>x286)|x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 234U;
	int16_t x292 = INT16_MAX;

    t72 = (((x289>x290)|x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = 0;
	int8_t x295 = -1;
	int8_t x296 = -1;
	static volatile int32_t t73 = -19;

    t73 = (((x293>x294)|x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 3324299124284073LLU;
	int64_t x300 = -1LL;
	volatile int32_t t74 = -7423304;

    t74 = (((x297>x298)|x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -2;
	uint8_t x302 = 119U;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = INT64_MIN;

    t75 = (((x301>x302)|x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 775272836LLU;
	volatile uint16_t x307 = 7U;
	uint8_t x308 = 7U;
	volatile int32_t t76 = 48027;

    t76 = (((x305>x306)|x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = INT32_MIN;
	int32_t x311 = -465964;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = -1;

    t77 = (((x309>x310)|x311)>x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 77394LLU;
	static uint16_t x314 = 2U;
	int8_t x315 = -1;
	volatile int32_t x316 = INT32_MIN;

    t78 = (((x313>x314)|x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	int32_t x318 = -1;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = 850653533;

    t79 = (((x317>x318)|x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = UINT8_MAX;
	int32_t t80 = -4656845;

    t80 = (((x321>x322)|x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	uint8_t x327 = 9U;
	volatile uint32_t x328 = UINT32_MAX;
	int32_t t81 = 272;

    t81 = (((x325>x326)|x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MAX;
	static int32_t x330 = -425;
	volatile uint64_t x331 = UINT64_MAX;
	int16_t x332 = INT16_MIN;

    t82 = (((x329>x330)|x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint16_t x333 = 19U;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	int8_t x336 = 10;

    t83 = (((x333>x334)|x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -2660384588571506713LL;
	volatile int16_t x338 = -46;
	uint64_t x339 = 65511618LLU;

    t84 = (((x337>x338)|x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x342 = -1;
	volatile int64_t x343 = -24161460LL;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t85 = 1;

    t85 = (((x341>x342)|x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x347 = INT64_MAX;
	uint64_t x348 = 1587493430LLU;

    t86 = (((x345>x346)|x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 3U;
	volatile int8_t x351 = INT8_MIN;
	int32_t x352 = -1;
	static volatile int32_t t87 = -1749576;

    t87 = (((x349>x350)|x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 6413025318351LLU;
	volatile uint8_t x354 = 0U;
	static volatile int32_t x355 = INT32_MAX;
	uint8_t x356 = UINT8_MAX;
	static int32_t t88 = 37434;

    t88 = (((x353>x354)|x355)>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x358 = INT16_MAX;
	int32_t t89 = 468;

    t89 = (((x357>x358)|x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x362 = 4U;
	volatile int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t90 = 6185289;

    t90 = (((x361>x362)|x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = UINT8_MAX;
	volatile int16_t x367 = INT16_MIN;
	int32_t t91 = 641;

    t91 = (((x365>x366)|x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = -834247;
	int16_t x370 = -1;
	int16_t x371 = 55;

    t92 = (((x369>x370)|x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MAX;
	int32_t t93 = 372053315;

    t93 = (((x373>x374)|x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = 16186;
	volatile int8_t x379 = INT8_MAX;
	volatile uint16_t x380 = UINT16_MAX;

    t94 = (((x377>x378)|x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 111U;
	volatile int32_t x382 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -324350;

    t95 = (((x381>x382)|x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x386 = -1602587LL;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 3215760;

    t96 = (((x385>x386)|x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	int8_t x390 = -1;
	int64_t x392 = 149038LL;
	static int32_t t97 = 33969375;

    t97 = (((x389>x390)|x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x393 = INT16_MIN;
	uint8_t x394 = 110U;
	static int8_t x396 = -1;
	static int32_t t98 = 375;

    t98 = (((x393>x394)|x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 132735770675LLU;
	volatile int32_t x398 = INT32_MAX;
	int64_t x399 = 0LL;
	static uint16_t x400 = 3U;
	int32_t t99 = -31306177;

    t99 = (((x397>x398)|x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	int16_t x402 = 31;
	static uint64_t x404 = 679631835LLU;

    t100 = (((x401>x402)|x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = -1;
	int8_t x406 = INT8_MIN;
	volatile int16_t x408 = -1;

    t101 = (((x405>x406)|x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -1LL;
	uint64_t x410 = 841246818748LLU;
	int8_t x411 = INT8_MIN;
	int8_t x412 = 0;
	int32_t t102 = -6539;

    t102 = (((x409>x410)|x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 7861663537LLU;
	int16_t x414 = 2;
	volatile uint64_t x416 = 30LLU;
	volatile int32_t t103 = -775;

    t103 = (((x413>x414)|x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x419 = INT32_MIN;

    t104 = (((x417>x418)|x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 15U;
	int16_t x422 = INT16_MIN;
	int64_t x423 = -575157997547114LL;
	int16_t x424 = INT16_MIN;
	volatile int32_t t105 = -75;

    t105 = (((x421>x422)|x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 12U;
	int64_t x426 = INT64_MIN;
	static int32_t x427 = INT32_MIN;
	uint16_t x428 = 7U;

    t106 = (((x425>x426)|x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	int8_t x431 = -6;
	uint8_t x432 = 43U;
	volatile int32_t t107 = 1;

    t107 = (((x429>x430)|x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;

    t108 = (((x433>x434)|x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	static uint64_t x438 = 64992709726939LLU;
	static uint32_t x440 = UINT32_MAX;

    t109 = (((x437>x438)|x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = 0;
	uint8_t x443 = 4U;
	int32_t x444 = 286730252;
	volatile int32_t t110 = 265388908;

    t110 = (((x441>x442)|x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint64_t x446 = UINT64_MAX;
	int8_t x447 = 2;
	static int64_t x448 = 14865LL;
	int32_t t111 = 109;

    t111 = (((x445>x446)|x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x450 = -1;
	int32_t x451 = 42655467;
	int32_t t112 = -49547;

    t112 = (((x449>x450)|x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = UINT8_MAX;
	static int32_t x454 = INT32_MIN;
	volatile int8_t x455 = INT8_MIN;
	int64_t x456 = -1LL;
	int32_t t113 = -7763221;

    t113 = (((x453>x454)|x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = -1;
	volatile int8_t x459 = INT8_MIN;
	int64_t x460 = -1LL;
	volatile int32_t t114 = -238;

    t114 = (((x457>x458)|x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 14051;
	static int32_t x462 = INT32_MAX;
	int32_t x464 = INT32_MIN;
	int32_t t115 = -6302048;

    t115 = (((x461>x462)|x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x467 = INT64_MIN;
	uint16_t x468 = 30053U;
	volatile int32_t t116 = -1069436;

    t116 = (((x465>x466)|x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = INT16_MIN;
	volatile uint8_t x471 = UINT8_MAX;
	int16_t x472 = -1;
	int32_t t117 = -68925896;

    t117 = (((x469>x470)|x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MAX;
	volatile uint16_t x474 = UINT16_MAX;
	int64_t x475 = 56687876LL;
	uint8_t x476 = UINT8_MAX;
	static int32_t t118 = 11280;

    t118 = (((x473>x474)|x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -32529580170073352LL;
	uint16_t x478 = UINT16_MAX;
	uint16_t x479 = UINT16_MAX;
	int32_t x480 = INT32_MAX;
	static volatile int32_t t119 = 153430;

    t119 = (((x477>x478)|x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 4680765LLU;
	volatile int16_t x482 = -23;
	uint64_t x483 = 178847112LLU;
	int64_t x484 = 24075116LL;
	int32_t t120 = -146;

    t120 = (((x481>x482)|x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 220U;
	int64_t x486 = INT64_MIN;
	int8_t x487 = INT8_MIN;
	volatile int32_t t121 = 6;

    t121 = (((x485>x486)|x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = 0U;
	uint64_t x491 = 3184356347673276LLU;
	int32_t x492 = INT32_MAX;

    t122 = (((x489>x490)|x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x493 = 53U;
	volatile int16_t x495 = INT16_MIN;
	uint16_t x496 = 1051U;

    t123 = (((x493>x494)|x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	static uint8_t x499 = 0U;

    t124 = (((x497>x498)|x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = INT16_MAX;
	static int16_t x502 = INT16_MAX;

    t125 = (((x501>x502)|x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x506 = INT8_MIN;
	volatile uint16_t x507 = 4377U;

    t126 = (((x505>x506)|x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = UINT8_MAX;
	int8_t x510 = INT8_MIN;
	static int64_t x511 = 33649LL;
	int16_t x512 = INT16_MAX;
	int32_t t127 = 60921;

    t127 = (((x509>x510)|x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint8_t x514 = 36U;
	uint32_t x515 = 7325U;
	uint32_t x516 = 0U;

    t128 = (((x513>x514)|x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = 122;
	static uint32_t x518 = UINT32_MAX;
	volatile int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MIN;
	int32_t t129 = 27;

    t129 = (((x517>x518)|x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = -1LL;
	volatile int8_t x522 = INT8_MIN;
	static int16_t x523 = INT16_MAX;
	static uint8_t x524 = 1U;
	volatile int32_t t130 = -12680312;

    t130 = (((x521>x522)|x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	uint64_t x527 = 215504775LLU;
	uint8_t x528 = 53U;
	volatile int32_t t131 = 232088;

    t131 = (((x525>x526)|x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x531 = 991LLU;
	int32_t x532 = -14600427;
	static volatile int32_t t132 = -5050;

    t132 = (((x529>x530)|x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = 18980664U;
	static int16_t x535 = INT16_MIN;
	uint16_t x536 = 12498U;
	static volatile int32_t t133 = -472660926;

    t133 = (((x533>x534)|x535)>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = 6U;
	volatile int16_t x538 = INT16_MAX;
	static uint8_t x539 = 29U;
	static uint16_t x540 = 3246U;
	volatile int32_t t134 = 782919;

    t134 = (((x537>x538)|x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = -14LL;
	uint64_t x542 = 4855777LLU;
	volatile int16_t x543 = -1;
	static int8_t x544 = INT8_MIN;
	volatile int32_t t135 = 359;

    t135 = (((x541>x542)|x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 0;
	int32_t x547 = INT32_MAX;
	volatile int8_t x548 = -51;
	int32_t t136 = -7;

    t136 = (((x545>x546)|x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 0U;
	uint16_t x550 = 26583U;
	volatile uint8_t x551 = 3U;
	static int16_t x552 = -1;
	volatile int32_t t137 = 2592081;

    t137 = (((x549>x550)|x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x554 = 5;
	int64_t x555 = -1LL;
	int8_t x556 = 1;
	volatile int32_t t138 = 1;

    t138 = (((x553>x554)|x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = 0;
	static volatile int64_t x558 = INT64_MIN;
	static volatile uint16_t x559 = UINT16_MAX;
	volatile int32_t t139 = -12518532;

    t139 = (((x557>x558)|x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x563 = UINT16_MAX;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t140 = -724332968;

    t140 = (((x561>x562)|x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x566 = 3;
	volatile int16_t x567 = INT16_MAX;
	static int32_t x568 = INT32_MAX;
	static volatile int32_t t141 = 2;

    t141 = (((x565>x566)|x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	int32_t x570 = INT32_MIN;
	int8_t x571 = -1;
	uint64_t x572 = UINT64_MAX;
	int32_t t142 = -253;

    t142 = (((x569>x570)|x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x573 = INT32_MAX;
	int8_t x575 = 0;
	uint16_t x576 = 7079U;

    t143 = (((x573>x574)|x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	static int16_t x578 = INT16_MAX;
	static int16_t x579 = 1103;
	static int64_t x580 = INT64_MIN;
	volatile int32_t t144 = -2206;

    t144 = (((x577>x578)|x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x582 = -1LL;
	int32_t x583 = INT32_MAX;
	int16_t x584 = -1;
	int32_t t145 = 650;

    t145 = (((x581>x582)|x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	int32_t x586 = INT32_MAX;
	volatile int64_t x587 = -15370550224407LL;
	int8_t x588 = 0;
	volatile int32_t t146 = 1304;

    t146 = (((x585>x586)|x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = -5037;
	volatile int8_t x590 = -1;
	int64_t x591 = -1LL;
	static uint32_t x592 = 1249U;

    t147 = (((x589>x590)|x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	int8_t x594 = INT8_MIN;
	static int16_t x595 = 8273;
	int32_t x596 = 1590;
	int32_t t148 = -16669;

    t148 = (((x593>x594)|x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	int16_t x598 = -957;
	int32_t x599 = INT32_MIN;
	int32_t t149 = -13;

    t149 = (((x597>x598)|x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	uint8_t x604 = UINT8_MAX;

    t150 = (((x601>x602)|x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = 1969610495503270188LLU;
	static int16_t x606 = INT16_MAX;
	static uint64_t x607 = 24953710LLU;
	uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = -6851040;

    t151 = (((x605>x606)|x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x611 = INT16_MIN;
	int32_t t152 = -27424;

    t152 = (((x609>x610)|x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -627LL;
	uint64_t x614 = UINT64_MAX;
	static volatile uint8_t x615 = 4U;
	int32_t t153 = -8;

    t153 = (((x613>x614)|x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x618 = INT64_MIN;
	static int16_t x619 = INT16_MIN;
	volatile int64_t x620 = INT64_MIN;

    t154 = (((x617>x618)|x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -1LL;
	int64_t x622 = -1LL;
	int16_t x623 = 13;
	static volatile int32_t x624 = -1;
	volatile int32_t t155 = -78132;

    t155 = (((x621>x622)|x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 332652713138548LL;
	uint32_t x626 = 58720480U;
	volatile int32_t x627 = INT32_MIN;
	int16_t x628 = -10364;
	static int32_t t156 = -1937;

    t156 = (((x625>x626)|x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MAX;
	int8_t x630 = -31;
	static uint32_t x631 = UINT32_MAX;
	static int64_t x632 = INT64_MIN;

    t157 = (((x629>x630)|x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = 0U;
	int32_t x634 = INT32_MIN;
	int64_t x635 = -1LL;
	volatile uint8_t x636 = 35U;
	volatile int32_t t158 = -1377540;

    t158 = (((x633>x634)|x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x637 = -1;
	int8_t x640 = INT8_MAX;

    t159 = (((x637>x638)|x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x641 = UINT32_MAX;
	int32_t x643 = INT32_MIN;
	uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = 0;

    t160 = (((x641>x642)|x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x645 = UINT8_MAX;
	int64_t x646 = INT64_MAX;
	int64_t x647 = INT64_MIN;
	static volatile int64_t x648 = INT64_MAX;
	volatile int32_t t161 = 87727652;

    t161 = (((x645>x646)|x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -105033LL;
	volatile int32_t x650 = INT32_MAX;
	uint32_t x651 = UINT32_MAX;
	int8_t x652 = -1;
	int32_t t162 = -22;

    t162 = (((x649>x650)|x651)>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	uint32_t x654 = UINT32_MAX;
	int8_t x655 = INT8_MAX;
	volatile uint8_t x656 = 1U;
	volatile int32_t t163 = 125840;

    t163 = (((x653>x654)|x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x658 = 36U;
	volatile int32_t x659 = INT32_MIN;
	int8_t x660 = -1;
	volatile int32_t t164 = 7899;

    t164 = (((x657>x658)|x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x662 = -1LL;
	int64_t x663 = INT64_MIN;
	volatile int32_t t165 = 0;

    t165 = (((x661>x662)|x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = -1;
	uint64_t x666 = 18729LLU;
	int32_t x667 = -1;
	int32_t t166 = -137263;

    t166 = (((x665>x666)|x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	int8_t x670 = 3;
	int64_t x671 = -1LL;
	static int16_t x672 = INT16_MIN;
	int32_t t167 = 976;

    t167 = (((x669>x670)|x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	int16_t x674 = 8130;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = 71;
	volatile int32_t t168 = 81701724;

    t168 = (((x673>x674)|x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 1U;
	int8_t x678 = INT8_MIN;
	static volatile int64_t x679 = -1LL;
	int32_t t169 = -231669;

    t169 = (((x677>x678)|x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 11995;
	int8_t x683 = 1;
	static int16_t x684 = INT16_MAX;
	volatile int32_t t170 = -102895;

    t170 = (((x681>x682)|x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int64_t x685 = -1LL;
	int16_t x686 = INT16_MIN;
	uint32_t x687 = UINT32_MAX;
	volatile int8_t x688 = INT8_MIN;
	int32_t t171 = -3326463;

    t171 = (((x685>x686)|x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	volatile int32_t x690 = INT32_MIN;
	int64_t x691 = -1LL;
	int8_t x692 = -1;
	static int32_t t172 = 9364;

    t172 = (((x689>x690)|x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = 3262071;
	int16_t x695 = -1;
	int8_t x696 = INT8_MAX;
	volatile int32_t t173 = 1;

    t173 = (((x693>x694)|x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x697 = 86201689024815665LLU;
	static int32_t x700 = INT32_MAX;
	static volatile int32_t t174 = -1;

    t174 = (((x697>x698)|x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = -66LL;
	static int8_t x703 = INT8_MIN;
	int64_t x704 = -3278701LL;

    t175 = (((x701>x702)|x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x705 = 269291640401LLU;
	int32_t x706 = -1;
	volatile int64_t x707 = INT64_MIN;
	int16_t x708 = -170;
	int32_t t176 = 257178316;

    t176 = (((x705>x706)|x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x710 = 1434750910249LLU;
	int32_t x711 = -1;

    t177 = (((x709>x710)|x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = UINT16_MAX;
	static int32_t x714 = 2;
	int64_t x715 = INT64_MIN;

    t178 = (((x713>x714)|x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = INT32_MIN;
	uint16_t x718 = 23459U;
	static int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MIN;

    t179 = (((x717>x718)|x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x722 = 2;
	volatile int64_t x724 = 1693692499LL;
	int32_t t180 = 125;

    t180 = (((x721>x722)|x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = 11;
	int32_t x728 = -1;
	int32_t t181 = 163;

    t181 = (((x725>x726)|x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 34119597LL;
	uint16_t x730 = 15300U;
	uint32_t x732 = 8491U;
	int32_t t182 = -19239632;

    t182 = (((x729>x730)|x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	static volatile int32_t x734 = -336;
	static int8_t x736 = 1;
	volatile int32_t t183 = -476230474;

    t183 = (((x733>x734)|x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = 15099445U;
	int8_t x738 = INT8_MIN;
	uint64_t x739 = 45718297867393179LLU;
	int64_t x740 = 108LL;
	int32_t t184 = -64408479;

    t184 = (((x737>x738)|x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 4U;
	uint32_t x744 = 100605U;
	static volatile int32_t t185 = -559262;

    t185 = (((x741>x742)|x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = INT32_MIN;
	volatile int8_t x746 = INT8_MIN;
	uint64_t x747 = 10292497LLU;

    t186 = (((x745>x746)|x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x749 = -1;
	uint64_t x750 = 32LLU;
	int64_t x751 = -1LL;
	volatile int32_t x752 = INT32_MIN;
	volatile int32_t t187 = -6230;

    t187 = (((x749>x750)|x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 23680922555LL;
	static volatile int8_t x754 = INT8_MIN;
	static int32_t x755 = INT32_MIN;
	static int8_t x756 = INT8_MIN;
	volatile int32_t t188 = -14640;

    t188 = (((x753>x754)|x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x759 = UINT64_MAX;
	volatile int32_t t189 = 449589;

    t189 = (((x757>x758)|x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	uint32_t x762 = UINT32_MAX;
	static volatile uint8_t x763 = UINT8_MAX;
	int64_t x764 = -1LL;

    t190 = (((x761>x762)|x763)>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 0U;
	uint32_t x766 = UINT32_MAX;
	uint16_t x767 = 30721U;
	static int16_t x768 = INT16_MIN;
	volatile int32_t t191 = -3792;

    t191 = (((x765>x766)|x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = 197LLU;
	int32_t x770 = INT32_MIN;
	uint64_t x771 = 109679947416LLU;
	static int32_t t192 = 3651;

    t192 = (((x769>x770)|x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 329207U;
	static int8_t x774 = -3;
	static int32_t x776 = 420599241;

    t193 = (((x773>x774)|x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile int16_t x779 = INT16_MIN;
	int16_t x780 = 3;
	int32_t t194 = 189194277;

    t194 = (((x777>x778)|x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	uint16_t x782 = 15U;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = -1;
	int32_t t195 = -9941;

    t195 = (((x781>x782)|x783)>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x788 = INT32_MIN;
	int32_t t196 = 507434;

    t196 = (((x785>x786)|x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x790 = INT16_MAX;
	volatile uint32_t x791 = 117399002U;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 0;

    t197 = (((x789>x790)|x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x795 = INT64_MIN;
	uint64_t x796 = UINT64_MAX;
	int32_t t198 = 404;

    t198 = (((x793>x794)|x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1LL;
	int64_t x798 = -1LL;
	volatile uint64_t x799 = UINT64_MAX;
	static int64_t x800 = -3863383LL;
	int32_t t199 = 137944;

    t199 = (((x797>x798)|x799)>x800);

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

