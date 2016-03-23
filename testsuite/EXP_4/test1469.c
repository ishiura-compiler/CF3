
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

static volatile int32_t x10 = -7585;
static int16_t x14 = INT16_MIN;
static volatile int32_t x15 = INT32_MIN;
volatile int32_t t3 = 13035;
int64_t x20 = INT64_MIN;
int64_t x28 = INT64_MAX;
static int32_t x29 = INT32_MIN;
static volatile int8_t x32 = -1;
int32_t t8 = 3060583;
uint8_t x37 = 3U;
int64_t x38 = -129903918131833511LL;
uint64_t x40 = UINT64_MAX;
static int32_t x50 = INT32_MIN;
volatile int64_t x51 = -1LL;
int32_t t12 = 2;
volatile int32_t x55 = INT32_MIN;
uint32_t x60 = 2005U;
static int16_t x61 = 2;
int16_t x63 = 0;
static volatile int32_t t15 = 367;
uint64_t x69 = UINT64_MAX;
int16_t x73 = INT16_MIN;
uint8_t x76 = 6U;
int16_t x80 = -3704;
int16_t x81 = INT16_MAX;
static uint8_t x83 = UINT8_MAX;
uint8_t x84 = 1U;
volatile int32_t t20 = 903717118;
int8_t x85 = INT8_MAX;
int16_t x94 = INT16_MAX;
static int16_t x102 = INT16_MIN;
int8_t x103 = 59;
int64_t x110 = -1LL;
int16_t x111 = 2;
uint64_t t28 = UINT64_MAX;
uint64_t x117 = UINT64_MAX;
static uint32_t x126 = 23320U;
uint16_t x129 = 3431U;
static uint8_t x141 = 3U;
volatile int64_t t36 = INT64_MAX;
uint8_t x149 = UINT8_MAX;
static volatile int64_t x151 = -1LL;
int16_t x152 = -1;
int64_t x153 = -1LL;
volatile int64_t x155 = 3403768986237LL;
int16_t x159 = INT16_MAX;
uint64_t x161 = 8368831827165LLU;
volatile uint64_t t40 = 1721357681055696LLU;
static volatile int16_t x167 = INT16_MIN;
int64_t x170 = -1LL;
int8_t x173 = INT8_MIN;
static uint32_t x174 = 28U;
static int8_t x177 = 0;
uint8_t x180 = 3U;
int32_t x181 = INT32_MIN;
volatile int64_t x183 = -1LL;
static int32_t t45 = 1408183;
uint8_t x192 = 4U;
static int8_t x195 = INT8_MIN;
volatile uint64_t x199 = 1684LLU;
int32_t x203 = -1;
static uint64_t x205 = 514523314901317485LLU;
static int8_t x211 = INT8_MIN;
static volatile int32_t t52 = 2529879;
int64_t x220 = 1LL;
volatile int32_t x225 = -1;
volatile uint8_t x228 = 67U;
static int16_t x229 = INT16_MAX;
static int8_t x230 = -32;
int8_t x237 = INT8_MAX;
volatile int8_t x241 = INT8_MIN;
volatile int32_t t60 = -26130153;
int16_t x249 = 3;
static int16_t x254 = INT16_MAX;
volatile int32_t t63 = 5;
uint16_t x257 = UINT16_MAX;
static int8_t x258 = INT8_MIN;
int32_t x261 = -1;
volatile uint64_t x262 = UINT64_MAX;
int32_t t65 = 1;
int8_t x276 = 1;
int8_t x279 = 1;
int64_t t69 = -605043339150947200LL;
int8_t x283 = INT8_MIN;
volatile int64_t x291 = 12271055433LL;
static uint64_t x293 = UINT64_MAX;
volatile int64_t x295 = INT64_MIN;
int32_t t74 = 6847937;
static int64_t t75 = -170247358137LL;
int64_t x310 = -1057724971LL;
int32_t t77 = 185;
uint8_t x326 = 7U;
uint16_t x334 = 60U;
volatile uint16_t x336 = UINT16_MAX;
uint8_t x343 = UINT8_MAX;
int32_t x357 = -1;
int32_t x359 = 1;
static uint32_t x361 = 99408U;
uint64_t x373 = UINT64_MAX;
int32_t t95 = -2024;
uint32_t x385 = 7U;
uint32_t x392 = 32209U;
uint64_t x393 = UINT64_MAX;
int8_t x402 = -1;
uint32_t x415 = 115U;
static volatile int16_t x418 = INT16_MIN;
uint8_t x422 = 4U;
static int8_t x426 = INT8_MAX;
static int32_t t107 = -723;
volatile int8_t x437 = INT8_MAX;
int8_t x438 = INT8_MIN;
volatile int8_t x439 = INT8_MIN;
uint64_t x442 = UINT64_MAX;
volatile int32_t t110 = 2935;
int32_t x445 = INT32_MAX;
int8_t x450 = 25;
int32_t t112 = 2607284;
uint32_t t113 = UINT32_MAX;
int16_t x457 = -11;
static int64_t x459 = INT64_MAX;
int32_t t114 = -74182;
int64_t x463 = INT64_MAX;
volatile int32_t t115 = 16433;
int64_t x467 = -39LL;
int64_t x468 = -2358069347580LL;
int32_t t116 = 62710716;
volatile int32_t t119 = -5;
int32_t x484 = INT32_MIN;
volatile int64_t x496 = 1008LL;
int32_t t123 = -5;
int8_t x505 = -1;
int64_t x516 = INT64_MAX;
int8_t x519 = 12;
int32_t x526 = -1;
int64_t x539 = INT64_MIN;
uint64_t x540 = UINT64_MAX;
int32_t x541 = -1;
uint8_t x543 = UINT8_MAX;
uint64_t x544 = 2304019948521436075LLU;
volatile int16_t x545 = -1;
volatile int32_t x553 = INT32_MIN;
uint32_t x556 = 7815438U;
int32_t t138 = -15;
static volatile uint64_t x558 = 120864508LLU;
int64_t x565 = -8LL;
int64_t t141 = 670LL;
int8_t x575 = INT8_MAX;
int32_t x578 = INT32_MIN;
int64_t x581 = INT64_MAX;
volatile uint64_t x588 = UINT64_MAX;
static int16_t x593 = INT16_MIN;
static int16_t x595 = -1;
int64_t x601 = -1519LL;
volatile int64_t t150 = -123274627LL;
volatile uint16_t x605 = UINT16_MAX;
uint64_t x606 = 3968267LLU;
volatile int32_t t151 = -17401721;
uint32_t x616 = 247741203U;
uint16_t x617 = UINT16_MAX;
int64_t x622 = INT64_MIN;
int32_t t155 = -11037778;
volatile int32_t t157 = -124657013;
int8_t x635 = -1;
int8_t x637 = INT8_MAX;
uint64_t x638 = 2870781418LLU;
int32_t t159 = -252;
int32_t t160 = 653630;
int16_t x660 = 189;
volatile int8_t x662 = -1;
int8_t x668 = -1;
uint64_t t167 = UINT64_MAX;
volatile int16_t x677 = -1;
uint64_t x679 = 8150LLU;
uint64_t x681 = 1842654609742089037LLU;
int8_t x682 = 46;
int64_t x688 = INT64_MAX;
volatile int32_t t171 = -983846;
int64_t x696 = INT64_MIN;
int32_t t174 = 681;
int32_t t175 = 190571;
uint32_t x709 = UINT32_MAX;
int16_t x715 = -13766;
uint32_t x719 = 144U;
static volatile uint64_t x720 = 2573632133450LLU;
volatile int16_t x725 = INT16_MIN;
int8_t x728 = INT8_MAX;
int16_t x731 = INT16_MIN;
static int32_t t182 = -8;
uint8_t x735 = 46U;
volatile int32_t t183 = -7123151;
int32_t x739 = -1;
static int64_t x747 = INT64_MAX;
int16_t x749 = INT16_MIN;
static uint8_t x754 = UINT8_MAX;
static int32_t t188 = -49;
int16_t x764 = INT16_MIN;
static int32_t t190 = -28;
static uint32_t x765 = UINT32_MAX;
int64_t x767 = INT64_MIN;
uint64_t x770 = 1LLU;
int32_t x772 = -1;
uint8_t x778 = 4U;
static int8_t x787 = 18;
uint64_t x788 = 3949307785597LLU;
volatile int32_t t196 = 5;
int8_t x790 = 30;
volatile int16_t x792 = INT16_MIN;
volatile int32_t t197 = -32465;
int16_t x798 = -1;
volatile int32_t t199 = 578389;


void f0(void) {
    	uint64_t x1 = 28035271LLU;
	int16_t x2 = INT16_MAX;
	int32_t x3 = 113583;
	uint64_t x4 = 2262467LLU;
	static uint64_t t0 = 236281LLU;

    t0 = (x1|(x2!=(x3==x4)));

    if (t0 != 28035271LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = 40482;
	uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = 1238;
	int64_t x8 = -503905536LL;
	int32_t t1 = 1;

    t1 = (x5|(x6!=(x7==x8)));

    if (t1 != 40483) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint16_t x11 = 0U;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 3;

    t2 = (x9|(x10!=(x11==x12)));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x16 = INT8_MIN;

    t3 = (x13|(x14!=(x15==x16)));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int8_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static int32_t t4 = 1;

    t4 = (x17|(x18!=(x19==x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MAX;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	static volatile uint64_t x24 = 38LLU;
	volatile int32_t t5 = INT32_MAX;

    t5 = (x21|(x22!=(x23==x24)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 828U;
	int32_t x26 = 6760926;
	int32_t x27 = INT32_MIN;
	volatile uint32_t t6 = 3412U;

    t6 = (x25|(x26!=(x27==x28)));

    if (t6 != 829U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	static int32_t t7 = 997;

    t7 = (x29|(x30!=(x31==x32)));

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = -1;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int64_t x36 = -152469794LL;

    t8 = (x33|(x34!=(x35==x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x39 = INT64_MIN;
	int32_t t9 = 1585826;

    t9 = (x37|(x38!=(x39==x40)));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	uint64_t x42 = 3562130163400472634LLU;
	volatile uint32_t x43 = 893185U;
	int8_t x44 = 3;
	volatile int32_t t10 = 30408657;

    t10 = (x41|(x42!=(x43==x44)));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 218904;
	int8_t x46 = -5;
	volatile int16_t x47 = -1;
	static int8_t x48 = -1;
	static int32_t t11 = 169685;

    t11 = (x45|(x46!=(x47==x48)));

    if (t11 != 218905) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -13;
	int8_t x52 = -1;

    t12 = (x49|(x50!=(x51==x52)));

    if (t12 != -13) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x53 = 1U;
	uint64_t x54 = 17233792096698506LLU;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 22;

    t13 = (x53|(x54!=(x55==x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	static uint64_t x58 = 872918869031LLU;
	uint16_t x59 = 1947U;
	int32_t t14 = -4;

    t14 = (x57|(x58!=(x59==x60)));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x62 = 7U;
	uint64_t x64 = 351LLU;

    t15 = (x61|(x62!=(x63==x64)));

    if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	uint16_t x66 = UINT16_MAX;
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MAX;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (x65|(x66!=(x67==x68)));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x70 = UINT16_MAX;
	uint16_t x71 = 21187U;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = (x69|(x70!=(x71==x72)));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -45;
	int8_t x75 = INT8_MAX;
	int32_t t18 = 9366;

    t18 = (x73|(x74!=(x75==x76)));

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = 262;
	uint8_t x78 = 12U;
	int8_t x79 = INT8_MAX;
	int32_t t19 = 722179;

    t19 = (x77|(x78!=(x79==x80)));

    if (t19 != 263) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MIN;

    t20 = (x81|(x82!=(x83==x84)));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MIN;
	uint8_t x87 = 7U;
	uint32_t x88 = 9270U;
	static volatile int32_t t21 = 509731174;

    t21 = (x85|(x86!=(x87==x88)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MAX;
	volatile int64_t x90 = 60867279896LL;
	static int64_t x91 = -1LL;
	int8_t x92 = -7;
	int32_t t22 = INT32_MAX;

    t22 = (x89|(x90!=(x91==x92)));

    if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	int8_t x95 = -2;
	int16_t x96 = 3541;
	volatile uint64_t t23 = UINT64_MAX;

    t23 = (x93|(x94!=(x95==x96)));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = 29;
	int8_t x98 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	volatile int64_t x100 = 826323120084383LL;
	int32_t t24 = 1;

    t24 = (x97|(x98!=(x99==x100)));

    if (t24 != 29) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 2011193LLU;
	volatile uint64_t x104 = 1030292LLU;
	static volatile uint64_t t25 = 5760437LLU;

    t25 = (x101|(x102!=(x103==x104)));

    if (t25 != 2011193LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 6756U;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -1;
	volatile int32_t t26 = -1067352;

    t26 = (x105|(x106!=(x107==x108)));

    if (t26 != 6757) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 18;
	static int16_t x112 = INT16_MAX;
	int32_t t27 = -49552510;

    t27 = (x109|(x110!=(x111==x112)));

    if (t27 != 19) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x113 = UINT64_MAX;
	int64_t x114 = INT64_MAX;
	int16_t x115 = -1;
	int16_t x116 = -1;

    t28 = (x113|(x114!=(x115==x116)));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x118 = 4434801900LLU;
	int8_t x119 = INT8_MIN;
	static int16_t x120 = 1;
	volatile uint64_t t29 = UINT64_MAX;

    t29 = (x117|(x118!=(x119==x120)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	int32_t x123 = -55448;
	int64_t x124 = 1840754105554989LL;
	int64_t t30 = -4137111LL;

    t30 = (x121|(x122!=(x123==x124)));

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x127 = 8;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = 801984341;

    t31 = (x125|(x126!=(x127==x128)));

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -1;
	int16_t x131 = 18;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 7494;

    t32 = (x129|(x130!=(x131==x132)));

    if (t32 != 3431) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	int8_t x134 = INT8_MAX;
	volatile uint32_t x135 = 2552U;
	uint64_t x136 = 36313167278LLU;
	int32_t t33 = INT32_MAX;

    t33 = (x133|(x134!=(x135==x136)));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = 1U;
	uint8_t x140 = 1U;
	int32_t t34 = 387778;

    t34 = (x137|(x138!=(x139==x140)));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MAX;
	uint64_t x143 = 136203241LLU;
	volatile int64_t x144 = INT64_MIN;
	volatile int32_t t35 = -63898044;

    t35 = (x141|(x142!=(x143==x144)));

    if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MIN;
	volatile int32_t x147 = 3;
	uint64_t x148 = UINT64_MAX;

    t36 = (x145|(x146!=(x147==x148)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x150 = INT16_MIN;
	int32_t t37 = 1832108;

    t37 = (x149|(x150!=(x151==x152)));

    if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = UINT64_MAX;
	static int64_t x156 = 3799LL;
	static volatile int64_t t38 = -361907978LL;

    t38 = (x153|(x154!=(x155==x156)));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MAX;
	int16_t x158 = 0;
	uint16_t x160 = 0U;
	int32_t t39 = 52097176;

    t39 = (x157|(x158!=(x159==x160)));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = 82463782;
	int8_t x163 = 57;
	volatile int16_t x164 = 440;

    t40 = (x161|(x162!=(x163==x164)));

    if (t40 != 8368831827165LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -1;
	int16_t x166 = 10;
	static int16_t x168 = -1;
	int32_t t41 = -15;

    t41 = (x165|(x166!=(x167==x168)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 29416124749LLU;
	static uint64_t x171 = 2714147473924874109LLU;
	int64_t x172 = 22852380773LL;
	static uint64_t t42 = 1011LLU;

    t42 = (x169|(x170!=(x171==x172)));

    if (t42 != 29416124749LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x175 = -858896630;
	int64_t x176 = INT64_MAX;
	volatile int32_t t43 = -12552008;

    t43 = (x173|(x174!=(x175==x176)));

    if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x178 = 64U;
	int64_t x179 = INT64_MIN;
	int32_t t44 = -122672;

    t44 = (x177|(x178!=(x179==x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x182 = -1LL;
	uint8_t x184 = 12U;

    t45 = (x181|(x182!=(x183==x184)));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 8U;
	static volatile uint32_t x186 = UINT32_MAX;
	uint8_t x187 = 1U;
	uint8_t x188 = 24U;
	volatile int32_t t46 = 8088;

    t46 = (x185|(x186!=(x187==x188)));

    if (t46 != 9) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 2U;
	volatile int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	volatile int32_t t47 = 7329061;

    t47 = (x189|(x190!=(x191==x192)));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 1446;
	volatile int32_t x194 = 0;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 53823;

    t48 = (x193|(x194!=(x195==x196)));

    if (t48 != 1446) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = INT8_MIN;
	static int64_t x198 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	static int32_t t49 = 56486361;

    t49 = (x197|(x198!=(x199==x200)));

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 0;
	int16_t x202 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = -529647336;

    t50 = (x201|(x202!=(x203==x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = 39U;
	static int32_t x207 = -1;
	int16_t x208 = 1300;
	uint64_t t51 = 1041394236139280122LLU;

    t51 = (x205|(x206!=(x207==x208)));

    if (t51 != 514523314901317485LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 29U;
	uint32_t x210 = UINT32_MAX;
	int8_t x212 = -1;

    t52 = (x209|(x210!=(x211==x212)));

    if (t52 != 29) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint16_t x213 = 99U;
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MAX;
	volatile int32_t x216 = -1;
	volatile int32_t t53 = -202130;

    t53 = (x213|(x214!=(x215==x216)));

    if (t53 != 99) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 501102660819644290LL;
	int16_t x218 = INT16_MIN;
	static volatile int64_t x219 = INT64_MAX;
	int64_t t54 = -29709018483LL;

    t54 = (x217|(x218!=(x219==x220)));

    if (t54 != 501102660819644291LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	volatile uint32_t x222 = UINT32_MAX;
	volatile uint8_t x223 = 4U;
	uint64_t x224 = UINT64_MAX;
	uint64_t t55 = UINT64_MAX;

    t55 = (x221|(x222!=(x223==x224)));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x226 = 239760760365LLU;
	static int8_t x227 = INT8_MIN;
	static volatile int32_t t56 = -81350;

    t56 = (x225|(x226!=(x227==x228)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x231 = INT8_MIN;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = 80;

    t57 = (x229|(x230!=(x231==x232)));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = 25142U;
	uint8_t x235 = 1U;
	static volatile uint64_t x236 = 2LLU;
	uint32_t t58 = UINT32_MAX;

    t58 = (x233|(x234!=(x235==x236)));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -1LL;
	uint8_t x239 = 6U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = 1822;

    t59 = (x237|(x238!=(x239==x240)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x242 = 19U;
	int16_t x243 = 16;
	int32_t x244 = -26624501;

    t60 = (x241|(x242!=(x243==x244)));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = -1;
	int32_t x246 = -1;
	volatile uint32_t x247 = 151094613U;
	volatile int16_t x248 = 1;
	static int32_t t61 = -752991284;

    t61 = (x245|(x246!=(x247==x248)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = -211222LL;
	static int8_t x252 = 43;
	static volatile int32_t t62 = -5140;

    t62 = (x249|(x250!=(x251==x252)));

    if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = 27U;
	uint32_t x255 = 30457599U;
	volatile int32_t x256 = -1;

    t63 = (x253|(x254!=(x255==x256)));

    if (t63 != 27) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x259 = 263626345U;
	volatile int16_t x260 = 3160;
	static int32_t t64 = -14;

    t64 = (x257|(x258!=(x259==x260)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x263 = INT16_MIN;
	int64_t x264 = -1LL;

    t65 = (x261|(x262!=(x263==x264)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = INT8_MIN;
	int16_t x266 = -1;
	static int64_t x267 = INT64_MIN;
	uint8_t x268 = 1U;
	int32_t t66 = 10490626;

    t66 = (x265|(x266!=(x267==x268)));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -1;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	static int8_t x272 = INT8_MAX;
	int32_t t67 = -41;

    t67 = (x269|(x270!=(x271==x272)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x273 = 0;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 1U;
	int32_t t68 = 316;

    t68 = (x273|(x274!=(x275==x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -607631724085LL;
	int64_t x278 = 475LL;
	int8_t x280 = 48;

    t69 = (x277|(x278!=(x279==x280)));

    if (t69 != -607631724085LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 0;
	volatile int32_t x282 = INT32_MIN;
	uint8_t x284 = 2U;
	volatile int32_t t70 = 2019586;

    t70 = (x281|(x282!=(x283==x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -19937;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = -1;
	int16_t x288 = INT16_MAX;
	static int32_t t71 = -40;

    t71 = (x285|(x286!=(x287==x288)));

    if (t71 != -19937) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = 1;
	uint16_t x290 = UINT16_MAX;
	int16_t x292 = -1;
	int32_t t72 = 896701848;

    t72 = (x289|(x290!=(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = INT32_MIN;
	volatile int64_t x296 = -1LL;
	volatile uint64_t t73 = UINT64_MAX;

    t73 = (x293|(x294!=(x295==x296)));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = UINT8_MAX;
	static int8_t x298 = -1;
	uint64_t x299 = 42LLU;
	int32_t x300 = 936;

    t74 = (x297|(x298!=(x299==x300)));

    if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 102LL;
	int8_t x302 = -1;
	uint64_t x303 = 1209LLU;
	int16_t x304 = -1;

    t75 = (x301|(x302!=(x303==x304)));

    if (t75 != 103LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = 30917LL;
	static int8_t x306 = INT8_MAX;
	int64_t x307 = 667387LL;
	int64_t x308 = INT64_MAX;
	static int64_t t76 = 2360986LL;

    t76 = (x305|(x306!=(x307==x308)));

    if (t76 != 30917LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x311 = -1;
	static uint8_t x312 = 1U;

    t77 = (x309|(x310!=(x311==x312)));

    if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = UINT32_MAX;
	static uint8_t x314 = UINT8_MAX;
	volatile int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	uint32_t t78 = UINT32_MAX;

    t78 = (x313|(x314!=(x315==x316)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = UINT16_MAX;
	volatile int64_t x318 = INT64_MAX;
	int64_t x319 = -1LL;
	int16_t x320 = -672;
	int32_t t79 = 32395359;

    t79 = (x317|(x318!=(x319==x320)));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 90U;
	volatile uint64_t x322 = 368817085181618662LLU;
	uint8_t x323 = 124U;
	uint64_t x324 = UINT64_MAX;
	static volatile uint32_t t80 = 4930683U;

    t80 = (x321|(x322!=(x323==x324)));

    if (t80 != 91U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	int64_t t81 = -65LL;

    t81 = (x325|(x326!=(x327==x328)));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 22U;
	int16_t x330 = -1;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = -1;
	volatile int32_t t82 = 83197339;

    t82 = (x329|(x330!=(x331==x332)));

    if (t82 != 23) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MAX;
	int16_t x335 = -1;
	volatile int32_t t83 = -54342795;

    t83 = (x333|(x334!=(x335==x336)));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	volatile int16_t x338 = INT16_MAX;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 28835U;
	static volatile int64_t t84 = INT64_MAX;

    t84 = (x337|(x338!=(x339==x340)));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	static uint32_t x344 = 101540U;
	int32_t t85 = -5882895;

    t85 = (x341|(x342!=(x343==x344)));

    if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 60095U;
	uint64_t x346 = 418LLU;
	int64_t x347 = INT64_MAX;
	int32_t x348 = 8991;
	uint32_t t86 = 1390627383U;

    t86 = (x345|(x346!=(x347==x348)));

    if (t86 != 60095U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	static int64_t x350 = -7107LL;
	int16_t x351 = -2908;
	int64_t x352 = -1LL;
	int32_t t87 = -400248;

    t87 = (x349|(x350!=(x351==x352)));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 0U;
	int32_t x354 = INT32_MIN;
	static uint16_t x355 = 0U;
	uint16_t x356 = 2U;
	volatile int32_t t88 = 0;

    t88 = (x353|(x354!=(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = 29U;
	volatile int8_t x360 = INT8_MAX;
	volatile int32_t t89 = 1;

    t89 = (x357|(x358!=(x359==x360)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x362 = 1784U;
	static volatile int16_t x363 = -1;
	uint64_t x364 = 115268909586645LLU;
	volatile uint32_t t90 = 14903U;

    t90 = (x361|(x362!=(x363==x364)));

    if (t90 != 99409U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = 14811;
	int16_t x366 = INT16_MIN;
	int64_t x367 = 926LL;
	volatile uint8_t x368 = 0U;
	int32_t t91 = 0;

    t91 = (x365|(x366!=(x367==x368)));

    if (t91 != 14811) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint32_t x370 = UINT32_MAX;
	volatile int32_t x371 = -1;
	int8_t x372 = 18;
	static int64_t t92 = 1108342642856186043LL;

    t92 = (x369|(x370!=(x371==x372)));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = -1;
	static int64_t x375 = INT64_MAX;
	uint64_t x376 = 2693192LLU;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = (x373|(x374!=(x375==x376)));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = -1340671535226943LL;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = UINT64_MAX;
	static uint16_t x380 = UINT16_MAX;
	static int64_t t94 = 3597052693LL;

    t94 = (x377|(x378!=(x379==x380)));

    if (t94 != -1340671535226943LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -2;
	uint64_t x382 = 2664LLU;
	uint64_t x383 = 45124857LLU;
	volatile uint16_t x384 = 3U;

    t95 = (x381|(x382!=(x383==x384)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	volatile int8_t x388 = INT8_MIN;
	uint32_t t96 = 1793011U;

    t96 = (x385|(x386!=(x387==x388)));

    if (t96 != 7U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile int32_t x390 = INT32_MIN;
	volatile int8_t x391 = 0;
	volatile int64_t t97 = -439186618643013264LL;

    t97 = (x389|(x390!=(x391==x392)));

    if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x394 = INT32_MIN;
	int16_t x395 = -1;
	volatile uint32_t x396 = 7340U;
	static volatile uint64_t t98 = UINT64_MAX;

    t98 = (x393|(x394!=(x395==x396)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	int32_t x398 = -772;
	static volatile int8_t x399 = INT8_MIN;
	static int16_t x400 = 2485;
	volatile int32_t t99 = -153175;

    t99 = (x397|(x398!=(x399==x400)));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x401 = 28U;
	static int64_t x403 = 24061LL;
	int8_t x404 = INT8_MIN;
	int32_t t100 = -22872;

    t100 = (x401|(x402!=(x403==x404)));

    if (t100 != 29) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x405 = 1U;
	int32_t x406 = -1;
	int16_t x407 = INT16_MAX;
	int32_t x408 = -1;
	static int32_t t101 = -16125;

    t101 = (x405|(x406!=(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	int16_t x410 = -1;
	static int8_t x411 = INT8_MIN;
	static int32_t x412 = INT32_MIN;
	int64_t t102 = INT64_MAX;

    t102 = (x409|(x410!=(x411==x412)));

    if (t102 != INT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	uint64_t x414 = 3LLU;
	int64_t x416 = -1361802039703244881LL;
	int32_t t103 = -42121133;

    t103 = (x413|(x414!=(x415==x416)));

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	uint16_t x419 = UINT16_MAX;
	volatile int32_t x420 = -1;
	volatile int64_t t104 = INT64_MAX;

    t104 = (x417|(x418!=(x419==x420)));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	static int64_t x423 = INT64_MIN;
	volatile int64_t x424 = INT64_MIN;
	volatile int32_t t105 = 112720;

    t105 = (x421|(x422!=(x423==x424)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = INT32_MIN;
	volatile int8_t x427 = -1;
	uint16_t x428 = 23447U;
	volatile int32_t t106 = -214963;

    t106 = (x425|(x426!=(x427==x428)));

    if (t106 != -2147483647) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = 1U;
	int16_t x430 = INT16_MAX;
	uint16_t x431 = 6U;
	int16_t x432 = -1;

    t107 = (x429|(x430!=(x431==x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 33LLU;
	static volatile int64_t x434 = INT64_MIN;
	int16_t x435 = -3;
	int8_t x436 = INT8_MIN;
	uint64_t t108 = 161015583LLU;

    t108 = (x433|(x434!=(x435==x436)));

    if (t108 != 33LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x440 = 532271000;
	int32_t t109 = 0;

    t109 = (x437|(x438!=(x439==x440)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -7;

    t110 = (x441|(x442!=(x443==x444)));

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x446 = INT32_MIN;
	int8_t x447 = 1;
	volatile int8_t x448 = -8;
	volatile int32_t t111 = INT32_MAX;

    t111 = (x445|(x446!=(x447==x448)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x451 = -1LL;
	static volatile int32_t x452 = -48075;

    t112 = (x449|(x450!=(x451==x452)));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	static int64_t x454 = INT64_MIN;
	uint32_t x455 = 6U;
	uint8_t x456 = 1U;

    t113 = (x453|(x454!=(x455==x456)));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x458 = -1;
	static volatile int32_t x460 = INT32_MIN;

    t114 = (x457|(x458!=(x459==x460)));

    if (t114 != -11) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 1354;
	int64_t x462 = INT64_MAX;
	int32_t x464 = -1;

    t115 = (x461|(x462!=(x463==x464)));

    if (t115 != 1355) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 38U;
	static uint8_t x466 = 14U;

    t116 = (x465|(x466!=(x467==x468)));

    if (t116 != 39) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x469 = INT8_MIN;
	int16_t x470 = -514;
	volatile int16_t x471 = -7;
	static int32_t x472 = -1;
	static int32_t t117 = 6775773;

    t117 = (x469|(x470!=(x471==x472)));

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x473 = UINT32_MAX;
	volatile int32_t x474 = INT32_MIN;
	volatile int8_t x475 = INT8_MAX;
	volatile uint32_t x476 = 981198174U;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x473|(x474!=(x475==x476)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -1;
	volatile int32_t x478 = -1;
	static uint16_t x479 = 5187U;
	int16_t x480 = INT16_MIN;

    t119 = (x477|(x478!=(x479==x480)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = -8;
	uint8_t x482 = UINT8_MAX;
	volatile int16_t x483 = -24;
	volatile int32_t t120 = -328;

    t120 = (x481|(x482!=(x483==x484)));

    if (t120 != -7) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 5434846U;
	int64_t x486 = -1LL;
	volatile int8_t x487 = 0;
	int8_t x488 = -1;
	uint32_t t121 = 291589719U;

    t121 = (x485|(x486!=(x487==x488)));

    if (t121 != 5434847U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x489 = 201405U;
	int32_t x490 = INT32_MAX;
	int16_t x491 = 503;
	int64_t x492 = -1LL;
	uint32_t t122 = 0U;

    t122 = (x489|(x490!=(x491==x492)));

    if (t122 != 201405U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	volatile int8_t x494 = -11;
	static int8_t x495 = INT8_MAX;

    t123 = (x493|(x494!=(x495==x496)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = -1;
	int8_t x498 = INT8_MAX;
	static int64_t x499 = 873556838721LL;
	uint32_t x500 = 31243226U;
	volatile int32_t t124 = 30408656;

    t124 = (x497|(x498!=(x499==x500)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -13;
	static uint16_t x502 = 1839U;
	int64_t x503 = -1LL;
	uint8_t x504 = 32U;
	int32_t t125 = 31177;

    t125 = (x501|(x502!=(x503==x504)));

    if (t125 != -13) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = -2199;
	int8_t x507 = -1;
	static uint8_t x508 = 114U;
	int32_t t126 = 329;

    t126 = (x505|(x506!=(x507==x508)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = -1;
	int8_t x511 = INT8_MAX;
	static uint16_t x512 = UINT16_MAX;
	int32_t t127 = -1;

    t127 = (x509|(x510!=(x511==x512)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x513 = 27119646520742654LLU;
	static volatile uint64_t x514 = UINT64_MAX;
	int32_t x515 = INT32_MIN;
	static volatile uint64_t t128 = 7679489LLU;

    t128 = (x513|(x514!=(x515==x516)));

    if (t128 != 27119646520742655LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = UINT16_MAX;
	int8_t x518 = INT8_MIN;
	int64_t x520 = -3550003LL;
	volatile int32_t t129 = 1;

    t129 = (x517|(x518!=(x519==x520)));

    if (t129 != 65535) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x521 = -1;
	static int32_t x522 = INT32_MAX;
	int16_t x523 = -1;
	int8_t x524 = 1;
	static int32_t t130 = -338585;

    t130 = (x521|(x522!=(x523==x524)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x525 = INT8_MIN;
	int16_t x527 = INT16_MAX;
	int16_t x528 = INT16_MIN;
	volatile int32_t t131 = 0;

    t131 = (x525|(x526!=(x527==x528)));

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = -18603LL;
	volatile int8_t x530 = 1;
	uint8_t x531 = UINT8_MAX;
	int64_t x532 = -523268891LL;
	static int64_t t132 = -3718746584705211LL;

    t132 = (x529|(x530!=(x531==x532)));

    if (t132 != -18603LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x533 = 11;
	uint32_t x534 = UINT32_MAX;
	uint64_t x535 = UINT64_MAX;
	int8_t x536 = INT8_MAX;
	volatile int32_t t133 = -20408;

    t133 = (x533|(x534!=(x535==x536)));

    if (t133 != 11) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint8_t x537 = 33U;
	volatile int8_t x538 = -1;
	int32_t t134 = 17114541;

    t134 = (x537|(x538!=(x539==x540)));

    if (t134 != 33) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x542 = 10394U;
	static volatile int32_t t135 = 10782;

    t135 = (x541|(x542!=(x543==x544)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MAX;
	int8_t x547 = -1;
	volatile int16_t x548 = INT16_MIN;
	volatile int32_t t136 = 0;

    t136 = (x545|(x546!=(x547==x548)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 66U;
	static int8_t x550 = INT8_MIN;
	static int32_t x551 = INT32_MAX;
	static uint64_t x552 = UINT64_MAX;
	static int32_t t137 = -5;

    t137 = (x549|(x550!=(x551==x552)));

    if (t137 != 67) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x554 = UINT64_MAX;
	int64_t x555 = 5705987LL;

    t138 = (x553|(x554!=(x555==x556)));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -1LL;
	int32_t x559 = INT32_MAX;
	volatile int8_t x560 = 1;
	static int64_t t139 = 28554528946539829LL;

    t139 = (x557|(x558!=(x559==x560)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x561 = INT16_MIN;
	int64_t x562 = -1LL;
	int64_t x563 = -1LL;
	int16_t x564 = INT16_MIN;
	int32_t t140 = 678;

    t140 = (x561|(x562!=(x563==x564)));

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MAX;
	uint32_t x567 = 4103725U;
	uint32_t x568 = 37U;

    t141 = (x565|(x566!=(x567==x568)));

    if (t141 != -7LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = -1LL;
	uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MIN;
	int32_t t142 = -116;

    t142 = (x569|(x570!=(x571==x572)));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x573 = UINT8_MAX;
	static int16_t x574 = -4662;
	int64_t x576 = INT64_MIN;
	int32_t t143 = -353332400;

    t143 = (x573|(x574!=(x575==x576)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x577 = INT32_MAX;
	int32_t x579 = 9;
	int32_t x580 = INT32_MIN;
	int32_t t144 = INT32_MAX;

    t144 = (x577|(x578!=(x579==x580)));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MIN;
	static uint32_t x583 = 1308000088U;
	int16_t x584 = INT16_MIN;
	int64_t t145 = INT64_MAX;

    t145 = (x581|(x582!=(x583==x584)));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = INT8_MIN;
	int32_t t146 = 0;

    t146 = (x585|(x586!=(x587==x588)));

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = 0;
	int64_t x590 = INT64_MIN;
	int32_t x591 = -1;
	int32_t x592 = INT32_MAX;
	int32_t t147 = -463783808;

    t147 = (x589|(x590!=(x591==x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x594 = 1000129U;
	int64_t x596 = 41LL;
	volatile int32_t t148 = 183;

    t148 = (x593|(x594!=(x595==x596)));

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 89U;
	static int64_t x598 = 240177306532983764LL;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = 8410;
	int32_t t149 = 4314523;

    t149 = (x597|(x598!=(x599==x600)));

    if (t149 != 89) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x602 = UINT32_MAX;
	static int8_t x603 = -1;
	uint16_t x604 = 9U;

    t150 = (x601|(x602!=(x603==x604)));

    if (t150 != -1519LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x607 = UINT16_MAX;
	int32_t x608 = INT32_MIN;

    t151 = (x605|(x606!=(x607==x608)));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x609 = 16974U;
	uint32_t x610 = 0U;
	volatile int16_t x611 = INT16_MIN;
	static int64_t x612 = 99732528771118728LL;
	uint32_t t152 = 163135U;

    t152 = (x609|(x610!=(x611==x612)));

    if (t152 != 16974U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static uint16_t x614 = UINT16_MAX;
	int32_t x615 = -59775909;
	volatile int32_t t153 = -3;

    t153 = (x613|(x614!=(x615==x616)));

    if (t153 != -127) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = 56352278504443LL;
	int8_t x619 = -2;
	volatile int16_t x620 = -1;
	static int32_t t154 = -22241924;

    t154 = (x617|(x618!=(x619==x620)));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x621 = INT32_MIN;
	static uint16_t x623 = 12U;
	static int8_t x624 = 1;

    t155 = (x621|(x622!=(x623==x624)));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 1;
	uint32_t x626 = UINT32_MAX;
	int8_t x627 = INT8_MIN;
	int32_t x628 = -2026192;
	int32_t t156 = -176;

    t156 = (x625|(x626!=(x627==x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	static int64_t x630 = INT64_MIN;
	uint16_t x631 = 1361U;
	int64_t x632 = INT64_MAX;

    t157 = (x629|(x630!=(x631==x632)));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x633 = 775U;
	int32_t x634 = 3497;
	int64_t x636 = -4479LL;
	int32_t t158 = -14307679;

    t158 = (x633|(x634!=(x635==x636)));

    if (t158 != 775) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x639 = INT32_MIN;
	int64_t x640 = 82639419LL;

    t159 = (x637|(x638!=(x639==x640)));

    if (t159 != 127) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x641 = -8388;
	int16_t x642 = INT16_MIN;
	int64_t x643 = INT64_MAX;
	static volatile uint32_t x644 = 2357U;

    t160 = (x641|(x642!=(x643==x644)));

    if (t160 != -8387) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int32_t x646 = -1;
	uint32_t x647 = 20U;
	int64_t x648 = INT64_MIN;
	volatile int32_t t161 = -890905;

    t161 = (x645|(x646!=(x647==x648)));

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int16_t x650 = 7;
	volatile int64_t x651 = INT64_MIN;
	int32_t x652 = INT32_MAX;
	volatile int32_t t162 = 0;

    t162 = (x649|(x650!=(x651==x652)));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x653 = 15281;
	int16_t x654 = INT16_MAX;
	uint8_t x655 = 12U;
	uint64_t x656 = 91727525646394136LLU;
	static int32_t t163 = -1;

    t163 = (x653|(x654!=(x655==x656)));

    if (t163 != 15281) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	static int16_t x658 = INT16_MIN;
	static int64_t x659 = INT64_MAX;
	int32_t t164 = -7;

    t164 = (x657|(x658!=(x659==x660)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 207518297353459LLU;
	volatile int64_t x663 = -1LL;
	volatile uint16_t x664 = UINT16_MAX;
	volatile uint64_t t165 = 5610704785LLU;

    t165 = (x661|(x662!=(x663==x664)));

    if (t165 != 207518297353459LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	uint32_t x666 = 2245062U;
	int64_t x667 = -1LL;
	volatile int32_t t166 = -330756;

    t166 = (x665|(x666!=(x667==x668)));

    if (t166 != -2147483647) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	static volatile int64_t x670 = 1082333LL;
	int16_t x671 = 1;
	static int8_t x672 = 0;

    t167 = (x669|(x670!=(x671==x672)));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	int8_t x674 = -1;
	uint8_t x675 = 17U;
	int16_t x676 = -2;
	static volatile int32_t t168 = 633681846;

    t168 = (x673|(x674!=(x675==x676)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x678 = INT8_MIN;
	uint8_t x680 = UINT8_MAX;
	static int32_t t169 = -1504569;

    t169 = (x677|(x678!=(x679==x680)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x683 = INT8_MAX;
	static int8_t x684 = INT8_MIN;
	static volatile uint64_t t170 = 3672900068479286LLU;

    t170 = (x681|(x682!=(x683==x684)));

    if (t170 != 1842654609742089037LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	uint8_t x686 = 0U;
	volatile int16_t x687 = -1;

    t171 = (x685|(x686!=(x687==x688)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -8120238334170LL;
	static int16_t x690 = INT16_MAX;
	int64_t x691 = INT64_MIN;
	int8_t x692 = 9;
	int64_t t172 = 277LL;

    t172 = (x689|(x690!=(x691==x692)));

    if (t172 != -8120238334169LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	volatile int16_t x694 = INT16_MAX;
	int32_t x695 = -1;
	volatile int64_t t173 = -1905325027LL;

    t173 = (x693|(x694!=(x695==x696)));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MAX;
	volatile uint64_t x698 = 3830134556059LLU;
	static int8_t x699 = 0;
	static int8_t x700 = -1;

    t174 = (x697|(x698!=(x699==x700)));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	uint8_t x702 = UINT8_MAX;
	int64_t x703 = -22939035LL;
	int8_t x704 = -1;

    t175 = (x701|(x702!=(x703==x704)));

    if (t175 != 32767) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = -245LL;
	uint64_t x706 = UINT64_MAX;
	int8_t x707 = INT8_MAX;
	uint8_t x708 = 1U;
	static int64_t t176 = 640796829643879977LL;

    t176 = (x705|(x706!=(x707==x708)));

    if (t176 != -245LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x710 = UINT32_MAX;
	int64_t x711 = -65731586616LL;
	volatile int16_t x712 = -1;
	uint32_t t177 = UINT32_MAX;

    t177 = (x709|(x710!=(x711==x712)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	int8_t x714 = -2;
	uint32_t x716 = UINT32_MAX;
	static int32_t t178 = 48;

    t178 = (x713|(x714!=(x715==x716)));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = 5300;
	static uint8_t x718 = 0U;
	int32_t t179 = 7853;

    t179 = (x717|(x718!=(x719==x720)));

    if (t179 != 5300) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	static int32_t x722 = -3;
	int16_t x723 = INT16_MIN;
	int32_t x724 = -1;
	int64_t t180 = -2346717795256LL;

    t180 = (x721|(x722!=(x723==x724)));

    if (t180 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = 20794U;
	int8_t x727 = -1;
	volatile int32_t t181 = -305005926;

    t181 = (x725|(x726!=(x727==x728)));

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	volatile int32_t x730 = -64482;
	uint64_t x732 = 1049644986LLU;

    t182 = (x729|(x730!=(x731==x732)));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	static int32_t x734 = -1;
	static int8_t x736 = -1;

    t183 = (x733|(x734!=(x735==x736)));

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = UINT8_MAX;
	int8_t x738 = -1;
	int16_t x740 = INT16_MIN;
	static int32_t t184 = 90209771;

    t184 = (x737|(x738!=(x739==x740)));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	static volatile int64_t x742 = 112211560LL;
	int64_t x743 = INT64_MIN;
	static int16_t x744 = -25;
	volatile int32_t t185 = -18351;

    t185 = (x741|(x742!=(x743==x744)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 6590970;
	static int16_t x746 = 76;
	int32_t x748 = 14897;
	volatile int32_t t186 = 1;

    t186 = (x745|(x746!=(x747==x748)));

    if (t186 != 6590971) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = 288;
	static int64_t x751 = 15933687013690LL;
	int16_t x752 = -1;
	volatile int32_t t187 = 0;

    t187 = (x749|(x750!=(x751==x752)));

    if (t187 != -32767) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -6;
	int8_t x755 = -5;
	int64_t x756 = INT64_MIN;

    t188 = (x753|(x754!=(x755==x756)));

    if (t188 != -5) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	int8_t x758 = INT8_MAX;
	uint8_t x759 = 1U;
	static uint64_t x760 = 433LLU;
	volatile int32_t t189 = 23964;

    t189 = (x757|(x758!=(x759==x760)));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = 122U;
	static uint8_t x762 = 0U;
	int64_t x763 = -21925LL;

    t190 = (x761|(x762!=(x763==x764)));

    if (t190 != 122) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x766 = -1;
	int32_t x768 = INT32_MIN;
	uint32_t t191 = UINT32_MAX;

    t191 = (x765|(x766!=(x767==x768)));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x769 = UINT16_MAX;
	int8_t x771 = INT8_MIN;
	volatile int32_t t192 = -59595546;

    t192 = (x769|(x770!=(x771==x772)));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x773 = INT32_MAX;
	uint32_t x774 = 79573971U;
	int8_t x775 = INT8_MAX;
	volatile uint64_t x776 = UINT64_MAX;
	int32_t t193 = INT32_MAX;

    t193 = (x773|(x774!=(x775==x776)));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = 6U;
	int64_t x779 = INT64_MAX;
	int16_t x780 = INT16_MAX;
	int32_t t194 = -3203;

    t194 = (x777|(x778!=(x779==x780)));

    if (t194 != 7) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 56U;
	static uint16_t x782 = 11139U;
	static volatile int64_t x783 = INT64_MIN;
	int8_t x784 = -1;
	uint32_t t195 = 52543802U;

    t195 = (x781|(x782!=(x783==x784)));

    if (t195 != 57U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -1;
	int32_t x786 = INT32_MAX;

    t196 = (x785|(x786!=(x787==x788)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -26;
	int32_t x791 = INT32_MIN;

    t197 = (x789|(x790!=(x791==x792)));

    if (t197 != -25) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = 898U;
	int8_t x794 = 1;
	int8_t x795 = -14;
	static int64_t x796 = INT64_MIN;
	uint32_t t198 = 662076912U;

    t198 = (x793|(x794!=(x795==x796)));

    if (t198 != 899U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x799 = INT32_MIN;
	volatile int16_t x800 = 1;

    t199 = (x797|(x798!=(x799==x800)));

    if (t199 != 65535) { NG(); } else { ; }
	
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

