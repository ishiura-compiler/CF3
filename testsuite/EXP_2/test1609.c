
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

static uint8_t x1 = 0U;
uint32_t x6 = UINT32_MAX;
int64_t x7 = INT64_MAX;
int32_t t1 = -15437035;
volatile uint16_t x15 = UINT16_MAX;
int64_t x19 = INT64_MAX;
int64_t x25 = -209090051265125LL;
volatile int64_t x26 = 114272060779LL;
static volatile int16_t x28 = -1;
uint64_t x31 = UINT64_MAX;
volatile int64_t t7 = 259489770LL;
int32_t x34 = INT32_MAX;
int32_t x36 = -48;
int32_t t10 = -4092;
int32_t x46 = INT32_MIN;
int8_t x54 = 1;
int32_t x56 = -1;
static int64_t x62 = -1LL;
volatile int8_t x73 = -25;
static uint8_t x74 = UINT8_MAX;
static int32_t x75 = 124329363;
int8_t x81 = INT8_MIN;
int8_t x84 = -1;
volatile int32_t t20 = 3294825;
volatile int32_t x85 = -13137866;
int8_t x86 = -1;
static volatile uint16_t x91 = UINT16_MAX;
volatile int8_t x97 = INT8_MIN;
volatile int32_t t24 = 153870;
int32_t t26 = INT32_MIN;
static int16_t x114 = INT16_MIN;
static volatile uint64_t t28 = UINT64_MAX;
volatile uint8_t x121 = 3U;
int64_t x122 = 2347312LL;
uint64_t x124 = 15473442056010LLU;
volatile int16_t x127 = INT16_MIN;
int8_t x132 = -1;
int32_t t32 = 7090146;
int64_t x137 = INT64_MIN;
uint64_t x142 = UINT64_MAX;
int64_t x150 = -457166457LL;
int16_t x152 = -12224;
static int64_t t37 = 158634LL;
int32_t t38 = INT32_MIN;
static volatile int32_t x159 = INT32_MIN;
int64_t x163 = INT64_MIN;
int16_t x166 = 10;
static int64_t t43 = 540358616628220LL;
volatile int8_t x183 = INT8_MIN;
uint64_t t45 = UINT64_MAX;
uint8_t x190 = 4U;
uint64_t x202 = UINT64_MAX;
uint16_t x207 = 1U;
int16_t x209 = INT16_MIN;
int64_t x210 = -29956305466047376LL;
int32_t x212 = INT32_MAX;
static uint16_t x213 = 329U;
static int16_t x219 = INT16_MIN;
int64_t x223 = INT64_MIN;
int64_t x225 = 16523340873019025LL;
uint32_t x226 = 1025U;
static volatile uint8_t x229 = 29U;
int16_t x230 = 0;
volatile int64_t t57 = -75667686114692532LL;
volatile int32_t t58 = 0;
volatile int32_t t59 = -6598;
int64_t x245 = INT64_MIN;
int16_t x249 = 18;
int64_t x251 = INT64_MIN;
volatile int32_t t62 = -7624;
volatile int64_t t63 = -13909881116429146LL;
uint16_t x260 = 2U;
int8_t x270 = INT8_MAX;
int16_t x276 = 3648;
uint64_t x279 = 446637LLU;
uint8_t x281 = UINT8_MAX;
volatile uint8_t x283 = 3U;
volatile uint32_t t70 = 85218U;
uint8_t x285 = 9U;
int32_t x287 = INT32_MAX;
volatile int64_t x290 = INT64_MIN;
volatile int8_t x294 = 3;
int64_t x296 = -1LL;
int64_t x297 = INT64_MIN;
int8_t x303 = 0;
static volatile uint64_t t76 = 163697845584LLU;
static uint32_t t77 = 11272085U;
int32_t x315 = -27450454;
uint32_t x318 = 241U;
int32_t t79 = -54489835;
int8_t x321 = 0;
int32_t x324 = -1;
static volatile int32_t t80 = 9956320;
static int16_t x331 = -1;
int16_t x332 = 29;
uint16_t x334 = 0U;
volatile uint8_t x343 = 3U;
int32_t x351 = INT32_MIN;
volatile int16_t x353 = -110;
static volatile int32_t x361 = -1;
static int16_t x367 = -1;
volatile uint32_t x368 = 120U;
uint64_t x370 = 63185563695LLU;
volatile int64_t x374 = INT64_MIN;
volatile int32_t x380 = INT32_MIN;
int64_t x381 = INT64_MIN;
int16_t x386 = -1;
static volatile uint8_t x392 = 88U;
int8_t x400 = -1;
int32_t x411 = 824803940;
int64_t x412 = -1LL;
volatile int32_t x417 = INT32_MIN;
static volatile int32_t x422 = INT32_MIN;
volatile uint32_t t105 = 302162542U;
int64_t x425 = 5258549745LL;
int16_t x428 = INT16_MAX;
volatile uint8_t x429 = 7U;
int8_t x431 = INT8_MAX;
volatile int32_t t107 = 6;
int32_t x435 = -1;
int16_t x436 = INT16_MAX;
volatile int16_t x447 = INT16_MIN;
uint32_t x449 = UINT32_MAX;
int32_t x450 = INT32_MAX;
volatile uint8_t x455 = 71U;
int64_t x458 = INT64_MIN;
static volatile int64_t t114 = 212967814LL;
int64_t x463 = INT64_MIN;
uint16_t x466 = UINT16_MAX;
uint32_t x467 = 502U;
static int8_t x471 = INT8_MIN;
int16_t x477 = -1;
static uint8_t x479 = UINT8_MAX;
uint64_t x481 = 1265LLU;
int32_t x483 = 128;
int8_t x484 = -7;
int8_t x489 = INT8_MIN;
static uint16_t x490 = 24U;
volatile uint8_t x495 = 2U;
int8_t x501 = 1;
uint16_t x507 = 1983U;
volatile int64_t t126 = -629855LL;
int8_t x511 = -1;
int32_t x515 = 252;
volatile uint16_t x519 = UINT16_MAX;
uint32_t x528 = UINT32_MAX;
volatile int16_t x529 = -1;
int16_t x536 = INT16_MAX;
int16_t x537 = INT16_MAX;
uint8_t x538 = UINT8_MAX;
volatile int64_t t134 = -17345413LL;
volatile uint16_t x546 = UINT16_MAX;
static int16_t x547 = INT16_MAX;
volatile uint32_t t138 = 5U;
volatile int64_t x562 = INT64_MIN;
int32_t x566 = INT32_MIN;
int64_t t141 = -305179LL;
uint16_t x569 = UINT16_MAX;
volatile int16_t x572 = INT16_MIN;
int32_t t142 = -550225563;
int16_t x573 = 114;
int32_t x579 = INT32_MIN;
int32_t x580 = INT32_MIN;
int32_t x585 = 15301155;
static volatile int16_t x586 = -1;
volatile int64_t t146 = INT64_MAX;
int32_t x589 = INT32_MIN;
static volatile int64_t t147 = -63113LL;
volatile int32_t t148 = 1;
int8_t x597 = -1;
int64_t x603 = 1006708559092LL;
uint32_t x605 = UINT32_MAX;
int32_t x607 = INT32_MAX;
int32_t t152 = 5;
int16_t x627 = 0;
volatile int64_t x628 = 124199075LL;
int64_t t156 = -1LL;
uint16_t x635 = 2032U;
volatile int32_t x637 = 39235808;
int64_t x640 = 193LL;
static volatile int64_t t159 = -114190016752820LL;
static int32_t x644 = INT32_MIN;
volatile int32_t t160 = INT32_MIN;
static uint64_t x645 = 24LLU;
int16_t x648 = INT16_MIN;
uint64_t t161 = 43783455884LLU;
int64_t t162 = INT64_MIN;
volatile uint16_t x654 = 1U;
int64_t x656 = -13586311068255LL;
volatile uint8_t x660 = UINT8_MAX;
int32_t t164 = 189264221;
int16_t x661 = INT16_MAX;
int8_t x667 = -15;
static int16_t x675 = INT16_MIN;
int8_t x680 = 1;
int8_t x689 = INT8_MIN;
static int16_t x691 = 1;
int32_t t172 = INT32_MAX;
int8_t x699 = INT8_MAX;
volatile uint16_t x708 = 5U;
static uint16_t x713 = UINT16_MAX;
int64_t x717 = -1LL;
int16_t x718 = -1;
volatile int64_t x719 = -65855050LL;
volatile int32_t t180 = -113977;
int64_t x725 = INT64_MAX;
static int64_t x730 = -1LL;
volatile int32_t t186 = 937;
static int8_t x754 = INT8_MIN;
static uint8_t x769 = 1U;
int32_t t192 = 25;
static uint32_t x777 = 386799993U;
int8_t x779 = INT8_MIN;
static volatile int32_t t195 = -611649;
static int32_t x791 = INT32_MIN;
volatile int32_t t197 = -327935229;
int64_t x799 = -1LL;


void f0(void) {
    	static uint32_t x2 = 391U;
	static int64_t x3 = -505387LL;
	volatile uint8_t x4 = 0U;
	int32_t t0 = 154354;

    t0 = ((x1*(x2>x3))|x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 7253U;
	static int32_t x8 = 57871624;

    t1 = ((x5*(x6>x7))|x8);

    if (t1 != 57871624) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 3351206711563LLU;
	static uint16_t x10 = UINT16_MAX;
	uint8_t x11 = 6U;
	int8_t x12 = -1;
	volatile uint64_t t2 = UINT64_MAX;

    t2 = ((x9*(x10>x11))|x12);

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = -1;
	volatile int32_t x14 = -122906;
	int32_t x16 = 170895589;
	int32_t t3 = 14443321;

    t3 = ((x13*(x14>x15))|x16);

    if (t3 != 170895589) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int8_t x18 = INT8_MIN;
	uint16_t x20 = 23922U;
	static int32_t t4 = 3022;

    t4 = ((x17*(x18>x19))|x20);

    if (t4 != 23922) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 325260976803357LLU;
	volatile int64_t x22 = -97253LL;
	volatile uint32_t x23 = 252104534U;
	static volatile int32_t x24 = INT32_MIN;
	static uint64_t t5 = 2490264LLU;

    t5 = ((x21*(x22>x23))|x24);

    if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x27 = 259269U;
	static int64_t t6 = -2252899588492549329LL;

    t6 = ((x25*(x26>x27))|x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 716U;
	uint16_t x30 = 1U;
	static int64_t x32 = -1346226414LL;

    t7 = ((x29*(x30>x31))|x32);

    if (t7 != -1346226414LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 25651U;
	static uint32_t x35 = UINT32_MAX;
	static uint32_t t8 = 36601U;

    t8 = ((x33*(x34>x35))|x36);

    if (t8 != 4294967248U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	int64_t x38 = -110334850344857832LL;
	volatile int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 714391;

    t9 = ((x37*(x38>x39))|x40);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = 9U;
	uint32_t x42 = 7980620U;
	int8_t x43 = 6;
	volatile int32_t x44 = INT32_MIN;

    t10 = ((x41*(x42>x43))|x44);

    if (t10 != -2147483639) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = 1LL;
	static uint16_t x47 = 2U;
	static uint32_t x48 = UINT32_MAX;
	int64_t t11 = 60LL;

    t11 = ((x45*(x46>x47))|x48);

    if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = 1039370413170593511LLU;
	static volatile int8_t x50 = 1;
	static uint32_t x51 = 254U;
	uint64_t x52 = 61978185047221197LLU;
	uint64_t t12 = 7277684245LLU;

    t12 = ((x49*(x50>x51))|x52);

    if (t12 != 61978185047221197LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 20U;
	int8_t x55 = -1;
	int32_t t13 = -1642908;

    t13 = ((x53*(x54>x55))|x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = 3LL;
	uint64_t x58 = 530311951896LLU;
	int32_t x59 = INT32_MIN;
	uint64_t x60 = 333LLU;
	volatile uint64_t t14 = 22526294213599LLU;

    t14 = ((x57*(x58>x59))|x60);

    if (t14 != 333LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	uint16_t x63 = 1292U;
	static uint64_t x64 = 12191990868LLU;
	uint64_t t15 = 7155620787220041LLU;

    t15 = ((x61*(x62>x63))|x64);

    if (t15 != 12191990868LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = 1054U;
	uint8_t x66 = UINT8_MAX;
	int16_t x67 = INT16_MIN;
	int32_t x68 = -5;
	uint32_t t16 = UINT32_MAX;

    t16 = ((x65*(x66>x67))|x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -1;
	uint64_t x70 = UINT64_MAX;
	int8_t x71 = 0;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 2;

    t17 = ((x69*(x70>x71))|x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x76 = 359977831U;
	volatile uint32_t t18 = 3599U;

    t18 = ((x73*(x74>x75))|x76);

    if (t18 != 359977831U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -901685;
	int64_t x78 = INT64_MAX;
	int16_t x79 = 35;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = -55;

    t19 = ((x77*(x78>x79))|x80);

    if (t19 != -53) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = INT64_MAX;
	uint64_t x83 = UINT64_MAX;

    t20 = ((x81*(x82>x83))|x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x87 = UINT32_MAX;
	uint8_t x88 = UINT8_MAX;
	int32_t t21 = 139712;

    t21 = ((x85*(x86>x87))|x88);

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1;
	static int16_t x90 = -1;
	int32_t x92 = INT32_MIN;
	int32_t t22 = INT32_MIN;

    t22 = ((x89*(x90>x91))|x92);

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 225LLU;
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	uint64_t t23 = 54LLU;

    t23 = ((x93*(x94>x95))|x96);

    if (t23 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MIN;
	static volatile int16_t x99 = INT16_MIN;
	volatile int16_t x100 = 25;

    t24 = ((x97*(x98>x99))|x100);

    if (t24 != -103) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 0;
	int16_t x102 = 6625;
	uint64_t x103 = 78176626630224541LLU;
	int64_t x104 = -6287LL;
	int64_t t25 = 10644235569134939LL;

    t25 = ((x101*(x102>x103))|x104);

    if (t25 != -6287LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	uint16_t x106 = 5U;
	uint32_t x107 = 97632705U;
	volatile int32_t x108 = INT32_MIN;

    t26 = ((x105*(x106>x107))|x108);

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -15633432LL;
	volatile int8_t x110 = INT8_MIN;
	static volatile uint32_t x111 = 3U;
	int8_t x112 = -1;
	int64_t t27 = -11975278374336LL;

    t27 = ((x109*(x110>x111))|x112);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	volatile int32_t x115 = INT32_MIN;
	static uint64_t x116 = UINT64_MAX;

    t28 = ((x113*(x114>x115))|x116);

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 81U;
	int64_t x118 = INT64_MAX;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -36;

    t29 = ((x117*(x118>x119))|x120);

    if (t29 != -2147483567) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x123 = INT16_MIN;
	static volatile uint64_t t30 = 8787466345489LLU;

    t30 = ((x121*(x122>x123))|x124);

    if (t30 != 15473442056011LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x125 = 1912U;
	uint32_t x126 = 15059U;
	volatile int8_t x128 = -39;
	int32_t t31 = -2840;

    t31 = ((x125*(x126>x127))|x128);

    if (t31 != -39) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MAX;
	int32_t x131 = -820263;

    t32 = ((x129*(x130>x131))|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = UINT16_MAX;
	static int64_t x134 = 13091562499496LL;
	int32_t x135 = -1;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t33 = 7497;

    t33 = ((x133*(x134>x135))|x136);

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 1U;
	static int32_t x139 = INT32_MAX;
	int32_t x140 = -25;
	int64_t t34 = 1LL;

    t34 = ((x137*(x138>x139))|x140);

    if (t34 != -25LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = -57;
	volatile uint32_t x143 = 55U;
	uint64_t x144 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

    t35 = ((x141*(x142>x143))|x144);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	uint64_t x146 = UINT64_MAX;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = -11;
	int32_t t36 = -90154;

    t36 = ((x145*(x146>x147))|x148);

    if (t36 != -11) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int16_t x151 = 1;

    t37 = ((x149*(x150>x151))|x152);

    if (t37 != -12224LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 3U;
	static int32_t x156 = INT32_MIN;

    t38 = ((x153*(x154>x155))|x156);

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 2;
	static volatile int8_t x158 = INT8_MIN;
	uint8_t x160 = 19U;
	volatile int32_t t39 = 48624788;

    t39 = ((x157*(x158>x159))|x160);

    if (t39 != 19) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = ((x161*(x162>x163))|x164);

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	static volatile int8_t x167 = -1;
	static int32_t x168 = 116123745;
	volatile int64_t t41 = 192567459531LL;

    t41 = ((x165*(x166>x167))|x168);

    if (t41 != -9223372036738652063LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static int16_t x170 = INT16_MIN;
	int8_t x171 = -1;
	int32_t x172 = 1093;
	volatile int64_t t42 = -16012244795LL;

    t42 = ((x169*(x170>x171))|x172);

    if (t42 != 1093LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = INT32_MAX;
	uint16_t x174 = 126U;
	volatile int16_t x175 = -1;
	volatile int64_t x176 = -9088414114LL;

    t43 = ((x173*(x174>x175))|x176);

    if (t43 != -8589934593LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 48333150;
	int32_t x178 = INT32_MAX;
	uint8_t x179 = 0U;
	volatile int64_t x180 = INT64_MAX;
	volatile int64_t t44 = INT64_MAX;

    t44 = ((x177*(x178>x179))|x180);

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	uint8_t x182 = 27U;
	volatile uint64_t x184 = UINT64_MAX;

    t45 = ((x181*(x182>x183))|x184);

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = -15;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = -1;
	static volatile int64_t x188 = 485649016977LL;
	int64_t t46 = -1617819128033362432LL;

    t46 = ((x185*(x186>x187))|x188);

    if (t46 != 485649016977LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = -1;
	int16_t x191 = INT16_MIN;
	static int16_t x192 = 1;
	static volatile int32_t t47 = -126;

    t47 = ((x189*(x190>x191))|x192);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MIN;
	static uint32_t x194 = 143U;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	volatile int32_t t48 = -20;

    t48 = ((x193*(x194>x195))|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	static int32_t x198 = INT32_MAX;
	int8_t x199 = -42;
	int32_t x200 = INT32_MAX;
	int32_t t49 = -4538;

    t49 = ((x197*(x198>x199))|x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	int32_t x203 = -1146;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

    t50 = ((x201*(x202>x203))|x204);

    if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 39025412648LL;
	int8_t x206 = INT8_MIN;
	volatile uint16_t x208 = UINT16_MAX;
	int64_t t51 = 2020073701883497LL;

    t51 = ((x205*(x206>x207))|x208);

    if (t51 != 65535LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x211 = 90705394091658LLU;
	static volatile int32_t t52 = 14;

    t52 = ((x209*(x210>x211))|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x214 = 40U;
	int32_t x215 = -1;
	volatile int16_t x216 = 278;
	int32_t t53 = 396;

    t53 = ((x213*(x214>x215))|x216);

    if (t53 != 278) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -1481793;
	uint8_t x218 = 0U;
	static int32_t x220 = INT32_MIN;
	int32_t t54 = 218;

    t54 = ((x217*(x218>x219))|x220);

    if (t54 != -1481793) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = -243711LL;
	uint8_t x222 = 40U;
	uint16_t x224 = 20364U;
	volatile int64_t t55 = 418425101768168LL;

    t55 = ((x221*(x222>x223))|x224);

    if (t55 != -241779LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x227 = 11825LLU;
	int16_t x228 = INT16_MIN;
	volatile int64_t t56 = 1339264288740830456LL;

    t56 = ((x225*(x226>x227))|x228);

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x231 = INT64_MIN;
	static int64_t x232 = -339951728451469229LL;

    t57 = ((x229*(x230>x231))|x232);

    if (t57 != -339951728451469217LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MAX;
	volatile int16_t x235 = INT16_MIN;
	int16_t x236 = 1861;

    t58 = ((x233*(x234>x235))|x236);

    if (t58 != -59) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = -1;
	static int32_t x238 = INT32_MAX;
	int32_t x239 = -2;
	int8_t x240 = -1;

    t59 = ((x237*(x238>x239))|x240);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	int8_t x243 = INT8_MAX;
	int32_t x244 = INT32_MAX;
	volatile int32_t t60 = 476;

    t60 = ((x241*(x242>x243))|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x246 = 251357U;
	volatile int64_t x247 = INT64_MIN;
	static uint16_t x248 = 3396U;
	int64_t t61 = 16560229305LL;

    t61 = ((x245*(x246>x247))|x248);

    if (t61 != -9223372036854772412LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = 11U;
	volatile uint16_t x252 = 3U;

    t62 = ((x249*(x250>x251))|x252);

    if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -1LL;
	static int8_t x254 = -1;
	volatile uint64_t x255 = 50581736533LLU;
	volatile int64_t x256 = 6869328617LL;

    t63 = ((x253*(x254>x255))|x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = 2407U;
	static int32_t x258 = 2;
	volatile uint16_t x259 = UINT16_MAX;
	int32_t t64 = -146732;

    t64 = ((x257*(x258>x259))|x260);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MAX;
	int8_t x262 = INT8_MAX;
	static uint64_t x263 = 2297744LLU;
	static int16_t x264 = INT16_MIN;
	int64_t t65 = 115529375LL;

    t65 = ((x261*(x262>x263))|x264);

    if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = 52;
	int64_t x266 = INT64_MIN;
	volatile int8_t x267 = INT8_MIN;
	int32_t x268 = 899876389;
	static volatile int32_t t66 = -637098614;

    t66 = ((x265*(x266>x267))|x268);

    if (t66 != 899876389) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	int64_t x271 = INT64_MAX;
	static int64_t x272 = -1LL;
	int64_t t67 = 622545031LL;

    t67 = ((x269*(x270>x271))|x272);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = ((x273*(x274>x275))|x276);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x277 = 32963005175181LLU;
	static int32_t x278 = -155559;
	uint32_t x280 = 48275U;
	uint64_t t69 = 1LLU;

    t69 = ((x277*(x278>x279))|x280);

    if (t69 != 32963005185439LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x282 = INT8_MIN;
	static uint32_t x284 = 198070882U;

    t70 = ((x281*(x282>x283))|x284);

    if (t70 != 198070882U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = -1;
	int16_t x288 = INT16_MIN;
	int32_t t71 = 5610546;

    t71 = ((x285*(x286>x287))|x288);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 14725U;
	int8_t x291 = -1;
	int16_t x292 = 1092;
	volatile int32_t t72 = 1;

    t72 = ((x289*(x290>x291))|x292);

    if (t72 != 1092) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	int64_t t73 = -2932LL;

    t73 = ((x293*(x294>x295))|x296);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = 4126;
	uint16_t x299 = 0U;
	static int64_t x300 = 267136LL;
	int64_t t74 = 2332086599LL;

    t74 = ((x297*(x298>x299))|x300);

    if (t74 != -9223372036854508672LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = 2;
	int64_t x302 = INT64_MIN;
	int32_t x304 = -63042;
	int32_t t75 = -123858165;

    t75 = ((x301*(x302>x303))|x304);

    if (t75 != -63042) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x305 = 29305LLU;
	static int32_t x306 = -1;
	static volatile int32_t x307 = 0;
	int64_t x308 = 2830351LL;

    t76 = ((x305*(x306>x307))|x308);

    if (t76 != 2830351LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x309 = 45894461U;
	static int64_t x310 = 180LL;
	static volatile uint8_t x311 = 6U;
	volatile uint16_t x312 = 20172U;

    t77 = ((x309*(x310>x311))|x312);

    if (t77 != 45895677U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = -14LL;
	int16_t x314 = INT16_MIN;
	int8_t x316 = -7;
	static volatile int64_t t78 = -70243448328447LL;

    t78 = ((x313*(x314>x315))|x316);

    if (t78 != -5LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 0U;
	int16_t x319 = 7142;
	int16_t x320 = INT16_MIN;

    t79 = ((x317*(x318>x319))|x320);

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x322 = 1780U;
	static int16_t x323 = -1;

    t80 = ((x321*(x322>x323))|x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -38LL;
	uint32_t x326 = 33188580U;
	int8_t x327 = 12;
	int32_t x328 = 6693;
	volatile int64_t t81 = 223LL;

    t81 = ((x325*(x326>x327))|x328);

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 7U;
	uint64_t x330 = 11707559077975LLU;
	static int32_t t82 = -229367428;

    t82 = ((x329*(x330>x331))|x332);

    if (t82 != 29) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 3U;
	int32_t x335 = INT32_MAX;
	int32_t x336 = -1;
	static int32_t t83 = -4415;

    t83 = ((x333*(x334>x335))|x336);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 56039217558108LLU;
	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	static uint64_t x340 = 16734963976820224LLU;
	uint64_t t84 = 1139906005862496538LLU;

    t84 = ((x337*(x338>x339))|x340);

    if (t84 != 16737865235953244LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	volatile uint64_t x342 = UINT64_MAX;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = -1;

    t85 = ((x341*(x342>x343))|x344);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 15856U;
	static int8_t x346 = INT8_MAX;
	static uint64_t x347 = UINT64_MAX;
	volatile int32_t x348 = INT32_MAX;
	uint32_t t86 = 82U;

    t86 = ((x345*(x346>x347))|x348);

    if (t86 != 2147483647U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 9U;
	int8_t x350 = -1;
	int64_t x352 = INT64_MAX;
	volatile int64_t t87 = INT64_MAX;

    t87 = ((x349*(x350>x351))|x352);

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x354 = UINT32_MAX;
	static int64_t x355 = -8056842686445712LL;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -29615;

    t88 = ((x353*(x354>x355))|x356);

    if (t88 != -110) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	uint32_t x358 = 113U;
	uint8_t x359 = 1U;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -201427321612LL;

    t89 = ((x357*(x358>x359))|x360);

    if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = INT32_MAX;
	static int8_t x363 = INT8_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -154472;

    t90 = ((x361*(x362>x363))|x364);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x365 = 40567887616LLU;
	int8_t x366 = INT8_MAX;
	uint64_t t91 = 61792LLU;

    t91 = ((x365*(x366>x367))|x368);

    if (t91 != 40567887736LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint32_t x371 = 1601683963U;
	int8_t x372 = 2;
	volatile int32_t t92 = 57920;

    t92 = ((x369*(x370>x371))|x372);

    if (t92 != -2147483646) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	volatile uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = INT64_MAX;
	int64_t t93 = INT64_MAX;

    t93 = ((x373*(x374>x375))|x376);

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = -49423;
	static int8_t x378 = -1;
	static int16_t x379 = 479;
	volatile int32_t t94 = INT32_MIN;

    t94 = ((x377*(x378>x379))|x380);

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MIN;
	int16_t x383 = -9050;
	volatile int32_t x384 = INT32_MAX;
	int64_t t95 = 120053548802LL;

    t95 = ((x381*(x382>x383))|x384);

    if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 690166565220LLU;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 43LLU;
	volatile uint64_t t96 = 65416354469LLU;

    t96 = ((x385*(x386>x387))|x388);

    if (t96 != 690166565231LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -1LL;
	int64_t x390 = 0LL;
	int32_t x391 = -1;
	static int64_t t97 = -262185027615311778LL;

    t97 = ((x389*(x390>x391))|x392);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = -1LL;
	uint8_t x394 = 1U;
	int8_t x395 = -9;
	static int8_t x396 = INT8_MIN;
	int64_t t98 = 220LL;

    t98 = ((x393*(x394>x395))|x396);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	int32_t t99 = -107659283;

    t99 = ((x397*(x398>x399))|x400);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 783U;
	static int16_t x402 = 3851;
	int8_t x403 = INT8_MAX;
	volatile int16_t x404 = -2;
	volatile int32_t t100 = 183293;

    t100 = ((x401*(x402>x403))|x404);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 108U;
	static uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MIN;
	uint32_t x408 = 754023U;
	volatile uint32_t t101 = 6116096U;

    t101 = ((x405*(x406>x407))|x408);

    if (t101 != 754031U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = INT32_MIN;
	uint32_t x410 = 1912U;
	volatile int64_t t102 = 204730LL;

    t102 = ((x409*(x410>x411))|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -1;
	volatile int8_t x414 = 0;
	uint32_t x415 = 2854075U;
	volatile uint64_t x416 = UINT64_MAX;
	uint64_t t103 = UINT64_MAX;

    t103 = ((x413*(x414>x415))|x416);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = -3;
	int8_t x419 = INT8_MIN;
	int16_t x420 = -1;
	static volatile int32_t t104 = -240863;

    t104 = ((x417*(x418>x419))|x420);

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 14538U;
	int16_t x423 = INT16_MAX;
	uint16_t x424 = 13990U;

    t105 = ((x421*(x422>x423))|x424);

    if (t105 != 13990U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x426 = -1LL;
	uint16_t x427 = 25U;
	volatile int64_t t106 = 7091982LL;

    t106 = ((x425*(x426>x427))|x428);

    if (t106 != 32767LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x430 = 4U;
	static int32_t x432 = -1;

    t107 = ((x429*(x430>x431))|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 443LL;
	uint32_t x434 = UINT32_MAX;
	int64_t t108 = -62485917LL;

    t108 = ((x433*(x434>x435))|x436);

    if (t108 != 32767LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 16153U;
	int64_t x438 = -1LL;
	int64_t x439 = -20418LL;
	int32_t x440 = INT32_MAX;
	int32_t t109 = INT32_MAX;

    t109 = ((x437*(x438>x439))|x440);

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x441 = INT8_MIN;
	static volatile uint8_t x442 = UINT8_MAX;
	volatile uint32_t x443 = 1245U;
	int16_t x444 = INT16_MAX;
	int32_t t110 = 14556;

    t110 = ((x441*(x442>x443))|x444);

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	volatile uint16_t x446 = 6601U;
	static uint32_t x448 = 50474943U;
	uint64_t t111 = UINT64_MAX;

    t111 = ((x445*(x446>x447))|x448);

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x451 = -28147110;
	int64_t x452 = INT64_MIN;
	int64_t t112 = -375LL;

    t112 = ((x449*(x450>x451))|x452);

    if (t112 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint8_t x454 = UINT8_MAX;
	int8_t x456 = 14;
	int64_t t113 = 2574LL;

    t113 = ((x453*(x454>x455))|x456);

    if (t113 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1478022394739LL;
	int8_t x459 = 6;
	int16_t x460 = INT16_MIN;

    t114 = ((x457*(x458>x459))|x460);

    if (t114 != -32768LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 9830912023962LLU;
	static int32_t x462 = -1;
	uint32_t x464 = UINT32_MAX;
	uint64_t t115 = 141721LLU;

    t115 = ((x461*(x462>x463))|x464);

    if (t115 != 9831180140543LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	volatile int8_t x468 = INT8_MIN;
	volatile int64_t t116 = -53061389830774LL;

    t116 = ((x465*(x466>x467))|x468);

    if (t116 != -128LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	static uint8_t x470 = 3U;
	int8_t x472 = -1;
	volatile int64_t t117 = 850107754419LL;

    t117 = ((x469*(x470>x471))|x472);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MAX;
	static uint8_t x474 = UINT8_MAX;
	int32_t x475 = -1;
	volatile int16_t x476 = -1;
	int32_t t118 = 19124;

    t118 = ((x473*(x474>x475))|x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = -1;
	static int32_t x480 = INT32_MIN;
	int32_t t119 = INT32_MIN;

    t119 = ((x477*(x478>x479))|x480);

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x482 = -1;
	volatile uint64_t t120 = 353903457LLU;

    t120 = ((x481*(x482>x483))|x484);

    if (t120 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	volatile uint16_t x486 = 308U;
	static int64_t x487 = 692LL;
	int32_t x488 = -1;
	volatile int32_t t121 = -937145986;

    t121 = ((x485*(x486>x487))|x488);

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x491 = -1LL;
	int64_t x492 = INT64_MIN;
	volatile int64_t t122 = 85110062784LL;

    t122 = ((x489*(x490>x491))|x492);

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 45611203U;
	int8_t x494 = 59;
	int64_t x496 = INT64_MIN;
	int64_t t123 = 128238820440412277LL;

    t123 = ((x493*(x494>x495))|x496);

    if (t123 != -9223372036809164605LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 1749;
	static uint8_t x498 = UINT8_MAX;
	uint8_t x499 = 0U;
	static uint32_t x500 = 101U;
	uint32_t t124 = 10464671U;

    t124 = ((x497*(x498>x499))|x500);

    if (t124 != 1781U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x502 = INT16_MIN;
	int16_t x503 = INT16_MIN;
	static uint64_t x504 = 45905485251775924LLU;
	uint64_t t125 = 3799059853347LLU;

    t125 = ((x501*(x502>x503))|x504);

    if (t125 != 45905485251775924LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = -1LL;
	volatile int16_t x506 = INT16_MIN;
	static volatile uint16_t x508 = UINT16_MAX;

    t126 = ((x505*(x506>x507))|x508);

    if (t126 != 65535LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int64_t x510 = INT64_MAX;
	static uint16_t x512 = 0U;
	volatile int32_t t127 = 39895;

    t127 = ((x509*(x510>x511))|x512);

    if (t127 != 65535) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x513 = 3U;
	int32_t x514 = 1;
	volatile uint16_t x516 = 7770U;
	static volatile int32_t t128 = -116;

    t128 = ((x513*(x514>x515))|x516);

    if (t128 != 7770) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = 122;
	int16_t x518 = -1;
	int64_t x520 = INT64_MIN;
	int64_t t129 = INT64_MIN;

    t129 = ((x517*(x518>x519))|x520);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint32_t x522 = 3U;
	volatile uint64_t x523 = UINT64_MAX;
	uint8_t x524 = UINT8_MAX;
	int32_t t130 = 26376787;

    t130 = ((x521*(x522>x523))|x524);

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int32_t x526 = -323265;
	int32_t x527 = 68915457;
	static volatile uint32_t t131 = UINT32_MAX;

    t131 = ((x525*(x526>x527))|x528);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x530 = 4;
	static int8_t x531 = -1;
	int8_t x532 = -1;
	int32_t t132 = -1;

    t132 = ((x529*(x530>x531))|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int8_t x534 = INT8_MIN;
	static int16_t x535 = INT16_MIN;
	int32_t t133 = 1684;

    t133 = ((x533*(x534>x535))|x536);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x539 = INT64_MIN;
	int64_t x540 = INT64_MIN;

    t134 = ((x537*(x538>x539))|x540);

    if (t134 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MAX;
	static uint8_t x543 = 10U;
	uint8_t x544 = 1U;
	volatile int32_t t135 = -13909;

    t135 = ((x541*(x542>x543))|x544);

    if (t135 != -32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	static uint8_t x548 = 1U;
	volatile int32_t t136 = INT32_MAX;

    t136 = ((x545*(x546>x547))|x548);

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	uint16_t x550 = 355U;
	int32_t x551 = -255;
	int64_t x552 = -1LL;
	static int64_t t137 = 32163872674379149LL;

    t137 = ((x549*(x550>x551))|x552);

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 9U;
	uint8_t x554 = 78U;
	static int64_t x555 = INT64_MIN;
	int16_t x556 = 3;

    t138 = ((x553*(x554>x555))|x556);

    if (t138 != 11U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	volatile int8_t x559 = INT8_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t139 = INT32_MIN;

    t139 = ((x557*(x558>x559))|x560);

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	volatile int32_t x563 = -3;
	int16_t x564 = -1;
	volatile int64_t t140 = 18720919291LL;

    t140 = ((x561*(x562>x563))|x564);

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -1;
	int16_t x567 = -896;
	static volatile int64_t x568 = 351731714772283330LL;

    t141 = ((x565*(x566>x567))|x568);

    if (t141 != 351731714772283330LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x570 = INT8_MAX;
	int32_t x571 = INT32_MIN;

    t142 = ((x569*(x570>x571))|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x574 = 2738;
	uint32_t x575 = 51204U;
	uint64_t x576 = 265994427426386LLU;
	uint64_t t143 = 317080253522551318LLU;

    t143 = ((x573*(x574>x575))|x576);

    if (t143 != 265994427426386LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	int16_t x578 = INT16_MIN;
	static volatile int64_t t144 = -57113790LL;

    t144 = ((x577*(x578>x579))|x580);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	int8_t x582 = -1;
	int16_t x583 = INT16_MAX;
	uint8_t x584 = 5U;
	int32_t t145 = 10324660;

    t145 = ((x581*(x582>x583))|x584);

    if (t145 != 5) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x587 = UINT32_MAX;
	int64_t x588 = INT64_MAX;

    t146 = ((x585*(x586>x587))|x588);

    if (t146 != INT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x590 = 4U;
	int64_t x591 = INT64_MIN;
	int64_t x592 = -46560189988524LL;

    t147 = ((x589*(x590>x591))|x592);

    if (t147 != -597016236LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	static uint16_t x594 = 157U;
	int16_t x595 = INT16_MIN;
	int16_t x596 = -1;

    t148 = ((x593*(x594>x595))|x596);

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = INT8_MIN;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t149 = -5402343;

    t149 = ((x597*(x598>x599))|x600);

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x601 = INT32_MIN;
	int8_t x602 = -1;
	int16_t x604 = -1;
	int32_t t150 = 568416376;

    t150 = ((x601*(x602>x603))|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x606 = 1544U;
	int32_t x608 = INT32_MAX;
	uint32_t t151 = 4U;

    t151 = ((x605*(x606>x607))|x608);

    if (t151 != 2147483647U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = -17;
	static int16_t x610 = 1;
	static int8_t x611 = INT8_MIN;
	volatile int16_t x612 = INT16_MIN;

    t152 = ((x609*(x610>x611))|x612);

    if (t152 != -17) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -475;
	int8_t x614 = -1;
	uint16_t x615 = 504U;
	volatile int32_t x616 = INT32_MAX;
	int32_t t153 = INT32_MAX;

    t153 = ((x613*(x614>x615))|x616);

    if (t153 != INT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1;
	int32_t x618 = -1;
	uint32_t x619 = 53532493U;
	int32_t x620 = INT32_MAX;
	int32_t t154 = 750869384;

    t154 = ((x617*(x618>x619))|x620);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = 191281127LLU;
	uint8_t x622 = UINT8_MAX;
	static int64_t x623 = -105LL;
	volatile uint64_t x624 = UINT64_MAX;
	static volatile uint64_t t155 = UINT64_MAX;

    t155 = ((x621*(x622>x623))|x624);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x625 = 8;
	int64_t x626 = -1LL;

    t156 = ((x625*(x626>x627))|x628);

    if (t156 != 124199075LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	int8_t x631 = INT8_MIN;
	static uint64_t x632 = 54LLU;
	volatile uint64_t t157 = 8858803824765373544LLU;

    t157 = ((x629*(x630>x631))|x632);

    if (t157 != 54LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 180284916904LLU;
	int32_t x634 = INT32_MIN;
	int32_t x636 = INT32_MIN;
	uint64_t t158 = 8315980621383LLU;

    t158 = ((x633*(x634>x635))|x636);

    if (t158 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MAX;
	volatile int32_t x639 = 0;

    t159 = ((x637*(x638>x639))|x640);

    if (t159 != 39235809LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x642 = INT32_MIN;
	int16_t x643 = -1;

    t160 = ((x641*(x642>x643))|x644);

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x646 = INT32_MIN;
	volatile int32_t x647 = INT32_MAX;

    t161 = ((x645*(x646>x647))|x648);

    if (t161 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	static volatile uint32_t x650 = 1698030U;
	volatile uint64_t x651 = UINT64_MAX;
	int64_t x652 = INT64_MIN;

    t162 = ((x649*(x650>x651))|x652);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	int64_t x655 = 4538462437145508382LL;
	volatile int64_t t163 = 1LL;

    t163 = ((x653*(x654>x655))|x656);

    if (t163 != -13586311068255LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 7U;
	volatile int8_t x658 = -1;
	static volatile int16_t x659 = 1120;

    t164 = ((x657*(x658>x659))|x660);

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x662 = INT16_MIN;
	int8_t x663 = -1;
	volatile int32_t x664 = -39520;
	int32_t t165 = -1;

    t165 = ((x661*(x662>x663))|x664);

    if (t165 != -39520) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = 1322U;
	int32_t x668 = INT32_MIN;
	int32_t t166 = INT32_MIN;

    t166 = ((x665*(x666>x667))|x668);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = -1448;
	int64_t x670 = INT64_MAX;
	int8_t x671 = INT8_MAX;
	int32_t x672 = 9351767;
	volatile int32_t t167 = -45931;

    t167 = ((x669*(x670>x671))|x672);

    if (t167 != -1441) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = -1;
	int32_t x674 = INT32_MAX;
	int64_t x676 = 0LL;
	volatile int64_t t168 = -22102534284951599LL;

    t168 = ((x673*(x674>x675))|x676);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	uint64_t x678 = 14542269517348LLU;
	uint32_t x679 = 2302873U;
	volatile int64_t t169 = INT64_MAX;

    t169 = ((x677*(x678>x679))|x680);

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	int16_t x682 = 831;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = 11;
	volatile int32_t t170 = -5;

    t170 = ((x681*(x682>x683))|x684);

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x685 = 1522U;
	static int64_t x686 = INT64_MIN;
	int64_t x687 = 3952117425445LL;
	volatile uint32_t x688 = UINT32_MAX;
	uint32_t t171 = UINT32_MAX;

    t171 = ((x685*(x686>x687))|x688);

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x690 = INT16_MIN;
	static volatile int32_t x692 = INT32_MAX;

    t172 = ((x689*(x690>x691))|x692);

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 4U;
	uint16_t x694 = 29216U;
	int32_t x695 = -1;
	volatile int64_t x696 = 220293511101LL;
	int64_t t173 = 30LL;

    t173 = ((x693*(x694>x695))|x696);

    if (t173 != 220293511101LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = -5803154;
	int32_t x698 = INT32_MIN;
	int64_t x700 = INT64_MAX;
	static volatile int64_t t174 = INT64_MAX;

    t174 = ((x697*(x698>x699))|x700);

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	uint16_t x702 = 0U;
	int8_t x703 = -7;
	int64_t x704 = 3512010LL;
	int64_t t175 = -53562854771075LL;

    t175 = ((x701*(x702>x703))|x704);

    if (t175 != -9223372036851263798LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = -1;
	uint64_t x706 = 469176845979LLU;
	int32_t x707 = INT32_MAX;
	volatile int32_t t176 = 279842;

    t176 = ((x705*(x706>x707))|x708);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x709 = -17410208;
	uint64_t x710 = UINT64_MAX;
	int16_t x711 = 6;
	int16_t x712 = INT16_MIN;
	int32_t t177 = -54;

    t177 = ((x709*(x710>x711))|x712);

    if (t177 != -10400) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = 56276959;
	volatile uint16_t x715 = UINT16_MAX;
	static int8_t x716 = INT8_MIN;
	int32_t t178 = -19471425;

    t178 = ((x713*(x714>x715))|x716);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x720 = -1;
	static volatile int64_t t179 = -253961453LL;

    t179 = ((x717*(x718>x719))|x720);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = 5;
	int16_t x722 = 7518;
	uint64_t x723 = UINT64_MAX;
	int16_t x724 = INT16_MAX;

    t180 = ((x721*(x722>x723))|x724);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x726 = 236;
	static int16_t x727 = -6;
	int64_t x728 = 11991781302767392LL;
	int64_t t181 = INT64_MAX;

    t181 = ((x725*(x726>x727))|x728);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	int32_t x731 = -4;
	int8_t x732 = INT8_MIN;
	int64_t t182 = 28633LL;

    t182 = ((x729*(x730>x731))|x732);

    if (t182 != -128LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 23U;
	static uint64_t x734 = 3125739LLU;
	int8_t x735 = INT8_MIN;
	int8_t x736 = INT8_MIN;
	int32_t t183 = 4097;

    t183 = ((x733*(x734>x735))|x736);

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MAX;
	int16_t x738 = -1;
	int8_t x739 = INT8_MAX;
	volatile int8_t x740 = -1;
	static int32_t t184 = 88892360;

    t184 = ((x737*(x738>x739))|x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -30754;
	static int32_t x742 = INT32_MIN;
	volatile int64_t x743 = -17173896460476764LL;
	int64_t x744 = INT64_MIN;
	int64_t t185 = -282409LL;

    t185 = ((x741*(x742>x743))|x744);

    if (t185 != -30754LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x745 = UINT16_MAX;
	volatile uint32_t x746 = 19214344U;
	uint16_t x747 = 19U;
	volatile int16_t x748 = INT16_MIN;

    t186 = ((x745*(x746>x747))|x748);

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 54U;
	uint16_t x750 = 336U;
	uint8_t x751 = 108U;
	int16_t x752 = -8523;
	volatile int32_t t187 = -196287364;

    t187 = ((x749*(x750>x751))|x752);

    if (t187 != -8521) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	int32_t x755 = INT32_MIN;
	uint8_t x756 = UINT8_MAX;
	volatile int32_t t188 = -66431055;

    t188 = ((x753*(x754>x755))|x756);

    if (t188 != -32513) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	uint32_t x758 = 73U;
	static volatile int8_t x759 = INT8_MIN;
	uint64_t x760 = UINT64_MAX;
	static uint64_t t189 = UINT64_MAX;

    t189 = ((x757*(x758>x759))|x760);

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	int8_t x762 = -17;
	int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t190 = -55;

    t190 = ((x761*(x762>x763))|x764);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = INT32_MIN;
	int16_t x766 = 15;
	int32_t x767 = INT32_MIN;
	volatile uint32_t x768 = 70344U;
	static uint32_t t191 = 575002U;

    t191 = ((x765*(x766>x767))|x768);

    if (t191 != 2147553992U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x770 = INT64_MAX;
	volatile uint8_t x771 = UINT8_MAX;
	int8_t x772 = INT8_MIN;

    t192 = ((x769*(x770>x771))|x772);

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MAX;
	int32_t x774 = INT32_MIN;
	int8_t x775 = 4;
	volatile int16_t x776 = -1;
	int32_t t193 = -67042078;

    t193 = ((x773*(x774>x775))|x776);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = INT16_MIN;
	int8_t x780 = 12;
	uint32_t t194 = 6618U;

    t194 = ((x777*(x778>x779))|x780);

    if (t194 != 12U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x782 = -1;
	int8_t x783 = INT8_MIN;
	volatile int32_t x784 = -1;

    t195 = ((x781*(x782>x783))|x784);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MAX;
	volatile int32_t x788 = INT32_MAX;
	static volatile uint64_t t196 = 1996239082686878LLU;

    t196 = ((x785*(x786>x787))|x788);

    if (t196 != 2147483647LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	int16_t x790 = INT16_MIN;
	int8_t x792 = -1;

    t197 = ((x789*(x790>x791))|x792);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x793 = INT32_MIN;
	int8_t x794 = 50;
	static volatile int8_t x795 = INT8_MAX;
	volatile int16_t x796 = 10;
	int32_t t198 = 72134;

    t198 = ((x793*(x794>x795))|x796);

    if (t198 != 10) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = UINT32_MAX;
	static int32_t x798 = INT32_MIN;
	static int64_t x800 = -1LL;
	static volatile int64_t t199 = 184440723976455417LL;

    t199 = ((x797*(x798>x799))|x800);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

