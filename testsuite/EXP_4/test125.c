
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

static int16_t x1 = INT16_MIN;
uint8_t x7 = 7U;
static uint32_t x12 = 66538494U;
uint32_t x17 = UINT32_MAX;
volatile uint32_t x35 = UINT32_MAX;
volatile uint16_t x36 = 0U;
volatile int32_t t7 = 566;
volatile int32_t x41 = INT32_MIN;
int32_t t9 = -3639151;
static int8_t x45 = -47;
static int8_t x49 = -1;
int64_t x53 = 37269688704LL;
static int16_t x58 = INT16_MIN;
volatile int32_t t15 = 9;
int8_t x73 = 1;
int8_t x78 = 49;
volatile uint32_t t18 = UINT32_MAX;
uint32_t x81 = 59381U;
int32_t x90 = -54730;
uint8_t x92 = UINT8_MAX;
int8_t x93 = -1;
int16_t x94 = INT16_MIN;
static int32_t t22 = 16057;
volatile int16_t x99 = INT16_MAX;
static uint32_t x112 = 102U;
uint8_t x114 = 0U;
static int32_t t27 = 1041305198;
volatile int64_t t28 = INT64_MAX;
static int32_t t29 = INT32_MAX;
uint32_t x136 = 6262211U;
static uint64_t x140 = 7924806LLU;
static int32_t x143 = INT32_MIN;
int8_t x176 = 52;
int8_t x177 = 22;
static uint16_t x182 = UINT16_MAX;
int8_t x183 = 30;
int16_t x186 = -1;
volatile int8_t x200 = 15;
uint64_t x204 = UINT64_MAX;
uint32_t x216 = UINT32_MAX;
volatile int32_t x219 = 23;
static volatile uint8_t x241 = UINT8_MAX;
uint32_t x242 = 19U;
static int32_t x244 = 429;
int32_t t52 = -699;
int16_t x246 = INT16_MIN;
volatile int8_t x249 = INT8_MIN;
int32_t t54 = -12254;
int32_t t56 = INT32_MIN;
static volatile int8_t x267 = -10;
volatile int32_t t57 = -30;
static volatile int64_t x269 = -1LL;
static int64_t x273 = -1LL;
int16_t x275 = -1;
static int32_t x293 = INT32_MIN;
uint8_t x298 = 0U;
static uint16_t x300 = 24U;
int16_t x305 = -108;
volatile int32_t t67 = 933525;
static volatile int32_t t68 = -2685;
int8_t x314 = INT8_MIN;
volatile int16_t x315 = INT16_MAX;
int32_t x316 = INT32_MIN;
int64_t t69 = 1863491147720941LL;
int64_t x326 = 64976LL;
volatile int64_t x328 = -22882910LL;
static volatile int32_t t72 = -228;
volatile int32_t t74 = -7696;
int32_t x337 = -163796571;
volatile int64_t x338 = INT64_MAX;
volatile int64_t t76 = INT64_MAX;
int8_t x347 = -1;
volatile uint64_t x350 = 16058130419LLU;
volatile int16_t x352 = -1;
volatile uint64_t t78 = 0LLU;
int8_t x357 = -1;
volatile int16_t x360 = INT16_MAX;
static int32_t t80 = 0;
static int8_t x366 = 0;
static uint32_t x367 = 96507597U;
int32_t x368 = INT32_MIN;
volatile int32_t t82 = 10335;
uint8_t x375 = UINT8_MAX;
static volatile int32_t t83 = 238885723;
static uint64_t x390 = 3116LLU;
int16_t x391 = 16;
int32_t x392 = INT32_MIN;
uint64_t t88 = UINT64_MAX;
int8_t x401 = INT8_MIN;
volatile int16_t x409 = 78;
int64_t x428 = 4742912012255165LL;
static uint64_t x432 = UINT64_MAX;
static volatile int16_t x437 = INT16_MIN;
static volatile uint16_t x440 = 878U;
int32_t x457 = INT32_MAX;
int64_t x459 = 3964317828886LL;
uint16_t x472 = 17531U;
volatile int32_t t105 = -303;
uint64_t x479 = 136227644622LLU;
int8_t x489 = -1;
volatile int16_t x493 = -1;
int8_t x494 = 0;
static int64_t x497 = 727LL;
volatile int16_t x506 = 2;
int16_t x509 = -1;
int32_t x510 = INT32_MIN;
volatile int8_t x511 = INT8_MIN;
int8_t x512 = INT8_MAX;
uint8_t x516 = 2U;
int32_t x517 = INT32_MAX;
uint32_t x519 = 27970594U;
int32_t t116 = INT32_MAX;
static int8_t x521 = 3;
volatile int32_t t117 = -130938;
int64_t x532 = 7909LL;
int64_t x538 = 1546LL;
int32_t x539 = 4;
volatile int64_t x542 = -1LL;
int8_t x552 = INT8_MIN;
int16_t x553 = INT16_MIN;
static volatile int32_t x556 = -10576381;
int32_t t125 = -978736;
int32_t x564 = -1;
volatile int32_t x566 = INT32_MIN;
volatile int32_t x568 = 415035907;
volatile int32_t t128 = -116;
int8_t x577 = INT8_MIN;
static int64_t x579 = INT64_MIN;
static volatile int16_t x581 = INT16_MIN;
int8_t x582 = -1;
int32_t x586 = 13330051;
int16_t x589 = -1;
uint32_t x599 = UINT32_MAX;
static volatile int16_t x601 = -1;
int8_t x604 = -32;
volatile int8_t x605 = -1;
int8_t x608 = INT8_MIN;
static volatile int32_t x610 = 49;
volatile int32_t t138 = 1;
uint16_t x616 = 1711U;
static volatile int32_t t139 = -380394;
volatile int32_t t140 = 124;
uint16_t x623 = 127U;
int32_t x644 = -1;
volatile int32_t t145 = -813417056;
static uint16_t x651 = UINT16_MAX;
static int32_t t147 = -7;
uint8_t x671 = 61U;
volatile uint16_t x675 = 15325U;
uint16_t x678 = 56U;
volatile int8_t x699 = 9;
int64_t x703 = -8028711660327LL;
int8_t x714 = INT8_MAX;
int16_t x728 = INT16_MIN;
int16_t x739 = INT16_MAX;
uint16_t x749 = 0U;
int32_t x752 = -5040;
int64_t x755 = -1LL;
int16_t x758 = -3;
int64_t x761 = INT64_MIN;
static uint16_t x763 = 1U;
uint16_t x764 = 554U;
int16_t x767 = INT16_MAX;
volatile int32_t x771 = 28464;
int64_t x790 = INT64_MIN;
int16_t x810 = INT16_MIN;
int8_t x813 = INT8_MIN;
int32_t x818 = INT32_MIN;
uint8_t x824 = 0U;
int64_t t182 = 12744332LL;
uint8_t x825 = 87U;
volatile int16_t x828 = INT16_MAX;
volatile int32_t t183 = -36148;
uint64_t x831 = 14181245501425LLU;
int16_t x835 = INT16_MIN;
int32_t x839 = -1;
static volatile int32_t x848 = INT32_MIN;
int16_t x862 = INT16_MIN;
int64_t x867 = -8079612775LL;
static int32_t t194 = -38252387;
int32_t x875 = INT32_MIN;
uint64_t x876 = 9726880011LLU;


void f0(void) {
    	int16_t x2 = -1;
	static int64_t x3 = -1LL;
	uint64_t x4 = 99554139146LLU;
	int32_t t0 = -175;

    t0 = (x1|(x2>(x3+x4)));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MAX;
	int64_t x8 = -1417LL;
	uint64_t t1 = UINT64_MAX;

    t1 = (x5|(x6>(x7+x8)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 330;
	int16_t x10 = INT16_MAX;
	int8_t x11 = INT8_MIN;
	static int32_t t2 = 4128114;

    t2 = (x9|(x10>(x11+x12)));

    if (t2 != 330) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = INT64_MIN;
	int64_t x19 = -2014055706887990LL;
	static uint64_t x20 = 21411LLU;
	uint32_t t3 = UINT32_MAX;

    t3 = (x17|(x18>(x19+x20)));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 14725256718LLU;
	int64_t x22 = INT64_MAX;
	int16_t x23 = -1;
	int8_t x24 = INT8_MIN;
	static uint64_t t4 = 0LLU;

    t4 = (x21|(x22>(x23+x24)));

    if (t4 != 14725256719LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x25 = INT64_MAX;
	static uint16_t x26 = 2U;
	static volatile int64_t x27 = -2050560956497090LL;
	int8_t x28 = INT8_MIN;
	volatile int64_t t5 = INT64_MAX;

    t5 = (x25|(x26>(x27+x28)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = -1;
	uint64_t x31 = UINT64_MAX;
	volatile int32_t x32 = INT32_MAX;
	static volatile int32_t t6 = 105;

    t6 = (x29|(x30>(x31+x32)));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	volatile int16_t x34 = INT16_MIN;

    t7 = (x33|(x34>(x35+x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MIN;
	static uint8_t x39 = 6U;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t8 = 2;

    t8 = (x37|(x38>(x39+x40)));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x42 = 57U;
	int32_t x43 = 1;
	uint64_t x44 = 5LLU;

    t9 = (x41|(x42>(x43+x44)));

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	volatile uint8_t x48 = 99U;
	volatile int32_t t10 = 106398;

    t10 = (x45|(x46>(x47+x48)));

    if (t10 != -47) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = -4;
	int8_t x51 = INT8_MIN;
	int32_t x52 = -1;
	int32_t t11 = 1868;

    t11 = (x49|(x50>(x51+x52)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x54 = 1;
	uint16_t x55 = 116U;
	uint16_t x56 = UINT16_MAX;
	int64_t t12 = 342387842944596LL;

    t12 = (x53|(x54>(x55+x56)));

    if (t12 != 37269688704LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MAX;
	uint32_t x59 = 13948980U;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = -15735265;

    t13 = (x57|(x58>(x59+x60)));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x61 = UINT8_MAX;
	int32_t x62 = 934420;
	uint64_t x63 = 8016198045817LLU;
	int8_t x64 = 1;
	volatile int32_t t14 = 54331;

    t14 = (x61|(x62>(x63+x64)));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = 1741;
	volatile int16_t x66 = INT16_MIN;
	uint8_t x67 = 15U;
	int8_t x68 = INT8_MIN;

    t15 = (x65|(x66>(x67+x68)));

    if (t15 != 1741) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x69 = 1U;
	static volatile int64_t x70 = INT64_MAX;
	int16_t x71 = -1;
	int64_t x72 = INT64_MAX;
	volatile int32_t t16 = 217967;

    t16 = (x69|(x70>(x71+x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x74 = INT64_MIN;
	volatile int16_t x75 = -210;
	uint16_t x76 = 1U;
	int32_t t17 = -741;

    t17 = (x73|(x74>(x75+x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = UINT32_MAX;
	static uint8_t x79 = 0U;
	int16_t x80 = -2;

    t18 = (x77|(x78>(x79+x80)));

    if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x82 = UINT32_MAX;
	int8_t x83 = -20;
	uint64_t x84 = UINT64_MAX;
	uint32_t t19 = 49393U;

    t19 = (x81|(x82>(x83+x84)));

    if (t19 != 59381U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 196369647085090LLU;
	static int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	static volatile uint64_t t20 = 245468563038LLU;

    t20 = (x85|(x86>(x87+x88)));

    if (t20 != 196369647085090LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = -1;
	uint32_t x91 = 10U;
	int32_t t21 = -294027;

    t21 = (x89|(x90>(x91+x92)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MAX;

    t22 = (x93|(x94>(x95+x96)));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = -5;
	static int64_t x98 = 212446048LL;
	int64_t x100 = INT64_MIN;
	static int32_t t23 = -1;

    t23 = (x97|(x98>(x99+x100)));

    if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = UINT8_MAX;
	int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	volatile int32_t t24 = -1774819;

    t24 = (x101|(x102>(x103+x104)));

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = -3;
	int32_t x106 = INT32_MAX;
	static int16_t x107 = INT16_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = 1;

    t25 = (x105|(x106>(x107+x108)));

    if (t25 != -3) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = 0;
	static uint16_t x110 = 393U;
	volatile uint64_t x111 = 51765685145104LLU;
	volatile int32_t t26 = -1;

    t26 = (x109|(x110>(x111+x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 8554U;
	volatile int32_t x115 = -2006844;
	uint64_t x116 = 10885419029LLU;

    t27 = (x113|(x114>(x115+x116)));

    if (t27 != 8554) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = INT64_MAX;
	int32_t x118 = -1;
	static int64_t x119 = -1LL;
	uint16_t x120 = 1011U;

    t28 = (x117|(x118>(x119+x120)));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x121 = INT32_MAX;
	uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 30LLU;
	uint32_t x124 = 2858U;

    t29 = (x121|(x122>(x123+x124)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = INT8_MAX;
	int16_t x130 = 13;
	uint64_t x131 = UINT64_MAX;
	static volatile uint8_t x132 = UINT8_MAX;
	int32_t t30 = 14;

    t30 = (x129|(x130>(x131+x132)));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MAX;
	volatile int16_t x135 = -55;
	uint32_t t31 = UINT32_MAX;

    t31 = (x133|(x134>(x135+x136)));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t32 = 879065;

    t32 = (x137|(x138>(x139+x140)));

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = 24;
	static int64_t x142 = INT64_MIN;
	uint32_t x144 = 132364267U;
	volatile int32_t t33 = -81160;

    t33 = (x141|(x142>(x143+x144)));

    if (t33 != 24) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = INT32_MIN;
	static uint8_t x146 = 0U;
	uint8_t x147 = 7U;
	int32_t x148 = -4;
	volatile int32_t t34 = INT32_MIN;

    t34 = (x145|(x146>(x147+x148)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	static uint64_t x155 = 14LLU;
	int64_t x156 = INT64_MIN;
	volatile int32_t t35 = -19274;

    t35 = (x153|(x154>(x155+x156)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x157 = 8;
	int16_t x158 = INT16_MIN;
	static int8_t x159 = INT8_MIN;
	int64_t x160 = -1LL;
	volatile int32_t t36 = 48892;

    t36 = (x157|(x158>(x159+x160)));

    if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x161 = 1;
	int8_t x162 = -2;
	static volatile int16_t x163 = INT16_MAX;
	int32_t x164 = -1;
	volatile int32_t t37 = -17199231;

    t37 = (x161|(x162>(x163+x164)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x173 = UINT8_MAX;
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 1922951U;
	static volatile int32_t t38 = 582244;

    t38 = (x173|(x174>(x175+x176)));

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x178 = INT32_MAX;
	uint16_t x179 = 16U;
	volatile int32_t x180 = INT32_MIN;
	int32_t t39 = 1700341;

    t39 = (x177|(x178>(x179+x180)));

    if (t39 != 23) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -1;
	int8_t x184 = INT8_MIN;
	volatile int32_t t40 = -2286;

    t40 = (x181|(x182>(x183+x184)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = INT32_MIN;
	volatile int16_t x187 = -1;
	int32_t x188 = -7;
	volatile int32_t t41 = -55;

    t41 = (x185|(x186>(x187+x188)));

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	int8_t x195 = -7;
	uint64_t x196 = UINT64_MAX;
	volatile int32_t t42 = -2;

    t42 = (x193|(x194>(x195+x196)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x197 = 1703;
	static uint16_t x198 = UINT16_MAX;
	static volatile int8_t x199 = INT8_MIN;
	volatile int32_t t43 = -15352876;

    t43 = (x197|(x198>(x199+x200)));

    if (t43 != 1703) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	uint8_t x203 = UINT8_MAX;
	uint32_t t44 = UINT32_MAX;

    t44 = (x201|(x202>(x203+x204)));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x209 = -9;
	int16_t x210 = INT16_MAX;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MAX;
	volatile int32_t t45 = -156763;

    t45 = (x209|(x210>(x211+x212)));

    if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x213 = 6U;
	int32_t x214 = INT32_MIN;
	int32_t x215 = -1;
	volatile int32_t t46 = -46;

    t46 = (x213|(x214>(x215+x216)));

    if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x217 = -104;
	static int16_t x218 = INT16_MAX;
	int16_t x220 = INT16_MAX;
	static int32_t t47 = -5;

    t47 = (x217|(x218>(x219+x220)));

    if (t47 != -104) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 27U;
	int64_t x222 = INT64_MIN;
	volatile uint64_t x223 = UINT64_MAX;
	int8_t x224 = 10;
	volatile int32_t t48 = -7119801;

    t48 = (x221|(x222>(x223+x224)));

    if (t48 != 27) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x229 = 22LL;
	uint32_t x230 = 380278088U;
	static int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	static volatile int64_t t49 = -302262322LL;

    t49 = (x229|(x230>(x231+x232)));

    if (t49 != 23LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x233 = INT32_MAX;
	uint64_t x234 = 14LLU;
	static uint64_t x235 = 30156074LLU;
	int32_t x236 = INT32_MAX;
	volatile int32_t t50 = INT32_MAX;

    t50 = (x233|(x234>(x235+x236)));

    if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x237 = -2656132LL;
	int32_t x238 = INT32_MIN;
	static uint64_t x239 = 3500379759658535LLU;
	int8_t x240 = -1;
	int64_t t51 = -178471008LL;

    t51 = (x237|(x238>(x239+x240)));

    if (t51 != -2656131LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x243 = 0U;

    t52 = (x241|(x242>(x243+x244)));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x245 = INT64_MIN;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;
	volatile int64_t t53 = 3699030LL;

    t53 = (x245|(x246>(x247+x248)));

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 14U;
	int32_t x252 = -1;

    t54 = (x249|(x250>(x251+x252)));

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x257 = 25846U;
	int64_t x258 = INT64_MIN;
	static volatile int8_t x259 = 0;
	int32_t x260 = INT32_MAX;
	volatile int32_t t55 = -3317;

    t55 = (x257|(x258>(x259+x260)));

    if (t55 != 25846) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MIN;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;

    t56 = (x261|(x262>(x263+x264)));

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x265 = 6;
	volatile int8_t x266 = 17;
	volatile uint16_t x268 = 1U;

    t57 = (x265|(x266>(x267+x268)));

    if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x270 = 36U;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = INT16_MIN;
	volatile int64_t t58 = 177123465424LL;

    t58 = (x269|(x270>(x271+x272)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x274 = INT64_MIN;
	int32_t x276 = 200;
	int64_t t59 = 118508LL;

    t59 = (x273|(x274>(x275+x276)));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x277 = 1349570409153066LLU;
	volatile int16_t x278 = -1;
	uint16_t x279 = 167U;
	int16_t x280 = 1;
	volatile uint64_t t60 = 27943640LLU;

    t60 = (x277|(x278>(x279+x280)));

    if (t60 != 1349570409153066LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x281 = 854005LL;
	int16_t x282 = INT16_MAX;
	uint64_t x283 = 472195253922LLU;
	int32_t x284 = -1;
	int64_t t61 = -11LL;

    t61 = (x281|(x282>(x283+x284)));

    if (t61 != 854005LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = INT8_MIN;
	uint64_t x286 = 208068143467LLU;
	static volatile int64_t x287 = 248LL;
	int16_t x288 = 2;
	int32_t t62 = -1538;

    t62 = (x285|(x286>(x287+x288)));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x289 = 37278335LLU;
	static volatile int32_t x290 = INT32_MAX;
	static int8_t x291 = 3;
	volatile int16_t x292 = -1;
	static uint64_t t63 = 1610LLU;

    t63 = (x289|(x290>(x291+x292)));

    if (t63 != 37278335LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x294 = INT16_MAX;
	static uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MIN;
	volatile int32_t t64 = INT32_MIN;

    t64 = (x293|(x294>(x295+x296)));

    if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x297 = 424;
	int16_t x299 = INT16_MIN;
	static volatile int32_t t65 = -97;

    t65 = (x297|(x298>(x299+x300)));

    if (t65 != 425) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x301 = 2283797986LLU;
	uint32_t x302 = 12735757U;
	int64_t x303 = -5437715809LL;
	uint16_t x304 = 542U;
	uint64_t t66 = 48523289LLU;

    t66 = (x301|(x302>(x303+x304)));

    if (t66 != 2283797987LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = UINT64_MAX;

    t67 = (x305|(x306>(x307+x308)));

    if (t67 != -108) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = -41;
	volatile int32_t x310 = INT32_MIN;
	static int8_t x311 = 3;
	int8_t x312 = INT8_MIN;

    t68 = (x309|(x310>(x311+x312)));

    if (t68 != -41) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x313 = -1LL;

    t69 = (x313|(x314>(x315+x316)));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = -1;
	static int64_t x318 = INT64_MIN;
	int64_t x319 = 96451830085453LL;
	int16_t x320 = 12899;
	static int32_t t70 = -15331693;

    t70 = (x317|(x318>(x319+x320)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x321 = 32U;
	uint16_t x322 = 47U;
	uint64_t x323 = 98189764735483220LLU;
	volatile uint32_t x324 = 10U;
	volatile int32_t t71 = 5;

    t71 = (x321|(x322>(x323+x324)));

    if (t71 != 32) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x325 = -17;
	int32_t x327 = INT32_MIN;

    t72 = (x325|(x326>(x327+x328)));

    if (t72 != -17) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x329 = INT8_MIN;
	uint16_t x330 = 0U;
	uint64_t x331 = 0LLU;
	volatile int8_t x332 = -2;
	int32_t t73 = 49874;

    t73 = (x329|(x330>(x331+x332)));

    if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x333 = 15U;
	uint16_t x334 = 5U;
	int16_t x335 = 9;
	int8_t x336 = INT8_MIN;

    t74 = (x333|(x334>(x335+x336)));

    if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x339 = INT16_MAX;
	uint32_t x340 = 257955U;
	static int32_t t75 = 904740;

    t75 = (x337|(x338>(x339+x340)));

    if (t75 != -163796571) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = INT64_MAX;
	int64_t x342 = INT64_MAX;
	static uint64_t x343 = 2231020269103492218LLU;
	int64_t x344 = INT64_MAX;

    t76 = (x341|(x342>(x343+x344)));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x345 = 2U;
	int32_t x346 = 662471581;
	static int64_t x348 = -526591062900LL;
	int32_t t77 = 764179184;

    t77 = (x345|(x346>(x347+x348)));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x349 = 375936753054LLU;
	int8_t x351 = INT8_MIN;

    t78 = (x349|(x350>(x351+x352)));

    if (t78 != 375936753054LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x358 = 3U;
	int8_t x359 = -1;
	int32_t t79 = 469042;

    t79 = (x357|(x358>(x359+x360)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x361 = INT16_MIN;
	uint32_t x362 = 56553U;
	static uint8_t x363 = 39U;
	uint16_t x364 = 7U;

    t80 = (x361|(x362>(x363+x364)));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = INT32_MAX;
	volatile int32_t t81 = INT32_MAX;

    t81 = (x365|(x366>(x367+x368)));

    if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MAX;
	int8_t x371 = -4;
	int16_t x372 = INT16_MIN;

    t82 = (x369|(x370>(x371+x372)));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x373 = INT8_MIN;
	volatile int16_t x374 = -1;
	int64_t x376 = INT64_MIN;

    t83 = (x373|(x374>(x375+x376)));

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x377 = -1;
	uint32_t x378 = 13U;
	int8_t x379 = -1;
	static int64_t x380 = 228299LL;
	static volatile int32_t t84 = -126761;

    t84 = (x377|(x378>(x379+x380)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	int64_t x384 = -1LL;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = (x381|(x382>(x383+x384)));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x385 = 30;
	volatile int16_t x386 = -14;
	uint16_t x387 = 16U;
	int8_t x388 = INT8_MAX;
	volatile int32_t t86 = -603242559;

    t86 = (x385|(x386>(x387+x388)));

    if (t86 != 30) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

    t87 = (x389|(x390>(x391+x392)));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x393 = UINT64_MAX;
	volatile int32_t x394 = INT32_MIN;
	volatile int32_t x395 = -52;
	static int16_t x396 = INT16_MIN;

    t88 = (x393|(x394>(x395+x396)));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x397 = INT16_MIN;
	int8_t x398 = -20;
	int16_t x399 = -11;
	uint32_t x400 = 983242U;
	volatile int32_t t89 = 72;

    t89 = (x397|(x398>(x399+x400)));

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x402 = 18U;
	static uint8_t x403 = UINT8_MAX;
	int64_t x404 = INT64_MIN;
	int32_t t90 = 2;

    t90 = (x401|(x402>(x403+x404)));

    if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x405 = -1;
	int32_t x406 = INT32_MAX;
	int16_t x407 = -1;
	int8_t x408 = INT8_MIN;
	int32_t t91 = 5;

    t91 = (x405|(x406>(x407+x408)));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x410 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;
	volatile int8_t x412 = 0;
	volatile int32_t t92 = 185;

    t92 = (x409|(x410>(x411+x412)));

    if (t92 != 78) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x413 = INT64_MIN;
	int64_t x414 = -101903656812LL;
	int64_t x415 = -4710656LL;
	int32_t x416 = 0;
	volatile int64_t t93 = INT64_MIN;

    t93 = (x413|(x414>(x415+x416)));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = -80;
	int64_t x422 = 329395214978LL;
	uint16_t x423 = 44U;
	int16_t x424 = 130;
	static volatile int32_t t94 = 65541546;

    t94 = (x421|(x422>(x423+x424)));

    if (t94 != -79) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = -1;
	int64_t x426 = INT64_MAX;
	uint8_t x427 = 2U;
	volatile int32_t t95 = -2427195;

    t95 = (x425|(x426>(x427+x428)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x429 = -1LL;
	uint64_t x430 = 143998880251317746LLU;
	uint8_t x431 = UINT8_MAX;
	static int64_t t96 = 41LL;

    t96 = (x429|(x430>(x431+x432)));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint8_t x433 = 0U;
	int16_t x434 = INT16_MIN;
	volatile int64_t x435 = 65255276901918LL;
	uint64_t x436 = 568866395LLU;
	volatile int32_t t97 = 13467;

    t97 = (x433|(x434>(x435+x436)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x438 = -14;
	int32_t x439 = -1;
	volatile int32_t t98 = 383899;

    t98 = (x437|(x438>(x439+x440)));

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = 1301259614855296LL;
	static volatile int16_t x443 = INT16_MIN;
	uint32_t x444 = 515U;
	int64_t t99 = 64840296LL;

    t99 = (x441|(x442>(x443+x444)));

    if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x449 = 7713329U;
	int64_t x450 = -1LL;
	volatile uint16_t x451 = UINT16_MAX;
	int8_t x452 = -29;
	volatile uint32_t t100 = 445U;

    t100 = (x449|(x450>(x451+x452)));

    if (t100 != 7713329U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	volatile int64_t x454 = -17601984946697963LL;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = 20855U;
	static uint64_t t101 = UINT64_MAX;

    t101 = (x453|(x454>(x455+x456)));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x458 = 3;
	volatile int64_t x460 = -1LL;
	int32_t t102 = INT32_MAX;

    t102 = (x457|(x458>(x459+x460)));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x461 = 202645U;
	int8_t x462 = -1;
	int8_t x463 = INT8_MAX;
	static int8_t x464 = -1;
	uint32_t t103 = 2998U;

    t103 = (x461|(x462>(x463+x464)));

    if (t103 != 202645U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x465 = UINT8_MAX;
	volatile int8_t x466 = INT8_MIN;
	volatile int8_t x467 = INT8_MIN;
	uint64_t x468 = UINT64_MAX;
	volatile int32_t t104 = -1967;

    t104 = (x465|(x466>(x467+x468)));

    if (t104 != 255) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x469 = INT16_MAX;
	int32_t x470 = -1;
	uint16_t x471 = 15U;

    t105 = (x469|(x470>(x471+x472)));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x473 = INT32_MAX;
	static uint16_t x474 = 15U;
	static int16_t x475 = INT16_MIN;
	volatile uint16_t x476 = 4U;
	static volatile int32_t t106 = INT32_MAX;

    t106 = (x473|(x474>(x475+x476)));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = 0;
	int8_t x478 = 13;
	uint8_t x480 = 47U;
	int32_t t107 = -67469;

    t107 = (x477|(x478>(x479+x480)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x481 = INT8_MIN;
	volatile uint64_t x482 = 227LLU;
	int64_t x483 = INT64_MIN;
	int16_t x484 = 1201;
	volatile int32_t t108 = -40648269;

    t108 = (x481|(x482>(x483+x484)));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x485 = -1;
	int32_t x486 = -1;
	int64_t x487 = -559LL;
	int16_t x488 = -1;
	volatile int32_t t109 = -2701371;

    t109 = (x485|(x486>(x487+x488)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x490 = 10990U;
	static int8_t x491 = -59;
	static uint32_t x492 = 2483U;
	static volatile int32_t t110 = -18066;

    t110 = (x489|(x490>(x491+x492)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x495 = INT8_MIN;
	int8_t x496 = 1;
	int32_t t111 = 1494;

    t111 = (x493|(x494>(x495+x496)));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x498 = 15300995665LLU;
	int64_t x499 = -7913277LL;
	int64_t x500 = -422LL;
	int64_t t112 = -1271784739430535282LL;

    t112 = (x497|(x498>(x499+x500)));

    if (t112 != 727LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x505 = 1273134;
	uint16_t x507 = 215U;
	volatile uint16_t x508 = 2U;
	volatile int32_t t113 = -52398;

    t113 = (x505|(x506>(x507+x508)));

    if (t113 != 1273134) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t t114 = -122;

    t114 = (x509|(x510>(x511+x512)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x513 = UINT8_MAX;
	int8_t x514 = INT8_MAX;
	int64_t x515 = INT64_MIN;
	int32_t t115 = -11;

    t115 = (x513|(x514>(x515+x516)));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x518 = -10;
	uint32_t x520 = UINT32_MAX;

    t116 = (x517|(x518>(x519+x520)));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x522 = 3;
	volatile int8_t x523 = INT8_MIN;
	int64_t x524 = -1LL;

    t117 = (x521|(x522>(x523+x524)));

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x529 = INT64_MAX;
	uint8_t x530 = 3U;
	int8_t x531 = INT8_MAX;
	int64_t t118 = INT64_MAX;

    t118 = (x529|(x530>(x531+x532)));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x533 = 106050534014558LLU;
	uint32_t x534 = 16U;
	volatile int16_t x535 = INT16_MIN;
	volatile uint64_t x536 = 3096451LLU;
	volatile uint64_t t119 = 3366LLU;

    t119 = (x533|(x534>(x535+x536)));

    if (t119 != 106050534014558LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x537 = INT32_MIN;
	int8_t x540 = INT8_MIN;
	volatile int32_t t120 = 5982;

    t120 = (x537|(x538>(x539+x540)));

    if (t120 != -2147483647) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x541 = UINT64_MAX;
	int64_t x543 = INT64_MAX;
	uint64_t x544 = UINT64_MAX;
	uint64_t t121 = UINT64_MAX;

    t121 = (x541|(x542>(x543+x544)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = 0;
	int32_t x546 = INT32_MAX;
	volatile int16_t x547 = INT16_MAX;
	volatile int16_t x548 = INT16_MAX;
	static volatile int32_t t122 = 2392;

    t122 = (x545|(x546>(x547+x548)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x549 = 5U;
	uint64_t x550 = 58LLU;
	int32_t x551 = -1;
	volatile int32_t t123 = -1;

    t123 = (x549|(x550>(x551+x552)));

    if (t123 != 5) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x554 = UINT64_MAX;
	int8_t x555 = 5;
	volatile int32_t t124 = -1011362271;

    t124 = (x553|(x554>(x555+x556)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x557 = 102U;
	int8_t x558 = 0;
	int32_t x559 = 1;
	static volatile int16_t x560 = -7392;

    t125 = (x557|(x558>(x559+x560)));

    if (t125 != 103) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x561 = 0;
	volatile int8_t x562 = INT8_MIN;
	static int32_t x563 = -1;
	static int32_t t126 = 5068107;

    t126 = (x561|(x562>(x563+x564)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x565 = UINT8_MAX;
	int8_t x567 = -1;
	int32_t t127 = -31081;

    t127 = (x565|(x566>(x567+x568)));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x569 = 0;
	uint64_t x570 = 2182204387506LLU;
	static volatile uint32_t x571 = 274130752U;
	int32_t x572 = 84403;

    t128 = (x569|(x570>(x571+x572)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x573 = INT8_MIN;
	volatile uint16_t x574 = UINT16_MAX;
	static int8_t x575 = 55;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t129 = -241861846;

    t129 = (x573|(x574>(x575+x576)));

    if (t129 != -127) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x578 = INT8_MIN;
	volatile int32_t x580 = 234;
	static int32_t t130 = 0;

    t130 = (x577|(x578>(x579+x580)));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x583 = 4619LL;
	uint16_t x584 = 1U;
	volatile int32_t t131 = -68;

    t131 = (x581|(x582>(x583+x584)));

    if (t131 != -32768) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x585 = -1LL;
	int32_t x587 = 1040;
	volatile uint8_t x588 = 75U;
	volatile int64_t t132 = -8981569316501698LL;

    t132 = (x585|(x586>(x587+x588)));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x590 = -1;
	int16_t x591 = INT16_MAX;
	uint16_t x592 = 3U;
	int32_t t133 = -40082;

    t133 = (x589|(x590>(x591+x592)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x593 = 61964825552LL;
	volatile uint32_t x594 = 60214050U;
	volatile int16_t x595 = INT16_MAX;
	volatile uint32_t x596 = 10U;
	volatile int64_t t134 = -3016908119046LL;

    t134 = (x593|(x594>(x595+x596)));

    if (t134 != 61964825553LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x597 = -1LL;
	volatile int32_t x598 = -1;
	volatile uint32_t x600 = 52971U;
	volatile int64_t t135 = 59003794262LL;

    t135 = (x597|(x598>(x599+x600)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x602 = INT32_MAX;
	uint8_t x603 = 120U;
	int32_t t136 = -30434891;

    t136 = (x601|(x602>(x603+x604)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x606 = 114U;
	static uint64_t x607 = 1872LLU;
	int32_t t137 = 2;

    t137 = (x605|(x606>(x607+x608)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x609 = -547;
	uint32_t x611 = UINT32_MAX;
	int32_t x612 = -1;

    t138 = (x609|(x610>(x611+x612)));

    if (t138 != -547) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x613 = 3U;
	int8_t x614 = INT8_MAX;
	int64_t x615 = 11783LL;

    t139 = (x613|(x614>(x615+x616)));

    if (t139 != 3) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x617 = INT32_MIN;
	uint64_t x618 = 47123954632571LLU;
	volatile uint64_t x619 = 429229775LLU;
	static volatile uint8_t x620 = UINT8_MAX;

    t140 = (x617|(x618>(x619+x620)));

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x621 = 1LLU;
	volatile int16_t x622 = INT16_MIN;
	int32_t x624 = INT32_MIN;
	static volatile uint64_t t141 = 7LLU;

    t141 = (x621|(x622>(x623+x624)));

    if (t141 != 1LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x625 = 0U;
	uint64_t x626 = 7625540327863010054LLU;
	static int8_t x627 = 47;
	static int64_t x628 = -1LL;
	int32_t t142 = -7564125;

    t142 = (x625|(x626>(x627+x628)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	volatile int16_t x630 = 1;
	uint64_t x631 = UINT64_MAX;
	int8_t x632 = 0;
	static volatile int32_t t143 = -47682;

    t143 = (x629|(x630>(x631+x632)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x637 = 0U;
	int16_t x638 = -8396;
	static volatile uint32_t x639 = UINT32_MAX;
	uint64_t x640 = UINT64_MAX;
	volatile int32_t t144 = 3327159;

    t144 = (x637|(x638>(x639+x640)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x641 = 0U;
	volatile int64_t x642 = 6990LL;
	volatile uint8_t x643 = 0U;

    t145 = (x641|(x642>(x643+x644)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x649 = INT16_MIN;
	int32_t x650 = INT32_MIN;
	volatile int16_t x652 = -13875;
	int32_t t146 = 24622864;

    t146 = (x649|(x650>(x651+x652)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x653 = 1502U;
	int32_t x654 = -1;
	uint64_t x655 = 113246LLU;
	volatile int64_t x656 = -1LL;

    t147 = (x653|(x654>(x655+x656)));

    if (t147 != 1503) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x661 = -1;
	uint32_t x662 = UINT32_MAX;
	int16_t x663 = INT16_MIN;
	int16_t x664 = -57;
	volatile int32_t t148 = -6002;

    t148 = (x661|(x662>(x663+x664)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x669 = -47;
	int32_t x670 = 1;
	int16_t x672 = -1;
	volatile int32_t t149 = -734145;

    t149 = (x669|(x670>(x671+x672)));

    if (t149 != -47) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x673 = UINT64_MAX;
	int64_t x674 = INT64_MIN;
	int8_t x676 = -1;
	uint64_t t150 = UINT64_MAX;

    t150 = (x673|(x674>(x675+x676)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x677 = -1;
	static volatile int32_t x679 = INT32_MAX;
	int32_t x680 = -1;
	volatile int32_t t151 = -4668028;

    t151 = (x677|(x678>(x679+x680)));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x681 = INT8_MIN;
	uint8_t x682 = 44U;
	int16_t x683 = INT16_MAX;
	int64_t x684 = 389899586985LL;
	volatile int32_t t152 = 1673;

    t152 = (x681|(x682>(x683+x684)));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = INT8_MAX;
	volatile int16_t x690 = INT16_MIN;
	volatile int16_t x691 = -18;
	int16_t x692 = 128;
	volatile int32_t t153 = 64547049;

    t153 = (x689|(x690>(x691+x692)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x693 = INT8_MIN;
	uint8_t x694 = 5U;
	uint32_t x695 = 107748203U;
	static uint8_t x696 = 1U;
	int32_t t154 = 4;

    t154 = (x693|(x694>(x695+x696)));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x697 = -1038155;
	uint32_t x698 = UINT32_MAX;
	static int8_t x700 = INT8_MIN;
	int32_t t155 = -6931493;

    t155 = (x697|(x698>(x699+x700)));

    if (t155 != -1038155) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 498845U;
	uint32_t x704 = 746525550U;
	static int32_t t156 = 0;

    t156 = (x701|(x702>(x703+x704)));

    if (t156 != 255) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int64_t x705 = -24468LL;
	int16_t x706 = -1;
	static int8_t x707 = 12;
	int8_t x708 = INT8_MAX;
	int64_t t157 = 141134858827433LL;

    t157 = (x705|(x706>(x707+x708)));

    if (t157 != -24468LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x713 = INT32_MIN;
	int64_t x715 = 7456148473396LL;
	int64_t x716 = -371LL;
	volatile int32_t t158 = INT32_MIN;

    t158 = (x713|(x714>(x715+x716)));

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x721 = 7;
	int8_t x722 = INT8_MAX;
	static uint64_t x723 = 201LLU;
	int32_t x724 = INT32_MAX;
	static volatile int32_t t159 = -61653575;

    t159 = (x721|(x722>(x723+x724)));

    if (t159 != 7) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x725 = 12U;
	volatile uint64_t x726 = 10757504255LLU;
	uint16_t x727 = 12379U;
	volatile int32_t t160 = 4;

    t160 = (x725|(x726>(x727+x728)));

    if (t160 != 12) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x733 = -278;
	uint64_t x734 = UINT64_MAX;
	volatile uint64_t x735 = 135287651891903LLU;
	volatile uint16_t x736 = 6U;
	int32_t t161 = -42288;

    t161 = (x733|(x734>(x735+x736)));

    if (t161 != -277) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x737 = 8034;
	int32_t x738 = -2400597;
	int64_t x740 = 684351322449772850LL;
	static volatile int32_t t162 = 186153;

    t162 = (x737|(x738>(x739+x740)));

    if (t162 != 8034) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x741 = INT16_MAX;
	static int16_t x742 = INT16_MIN;
	static int64_t x743 = INT64_MAX;
	uint64_t x744 = UINT64_MAX;
	int32_t t163 = 3220;

    t163 = (x741|(x742>(x743+x744)));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x745 = UINT64_MAX;
	int32_t x746 = INT32_MIN;
	int64_t x747 = -1056026661775062LL;
	static int64_t x748 = -5LL;
	uint64_t t164 = UINT64_MAX;

    t164 = (x745|(x746>(x747+x748)));

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x750 = INT16_MAX;
	volatile int64_t x751 = INT64_MAX;
	volatile int32_t t165 = -3;

    t165 = (x749|(x750>(x751+x752)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	static volatile int8_t x754 = INT8_MAX;
	static int64_t x756 = 26048134166075LL;
	int32_t t166 = 1;

    t166 = (x753|(x754>(x755+x756)));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x757 = 21U;
	uint32_t x759 = 609185U;
	static uint16_t x760 = 60U;
	volatile uint32_t t167 = 3842U;

    t167 = (x757|(x758>(x759+x760)));

    if (t167 != 21U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x762 = -1;
	volatile int64_t t168 = INT64_MIN;

    t168 = (x761|(x762>(x763+x764)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x765 = UINT64_MAX;
	int32_t x766 = 1;
	uint8_t x768 = 3U;
	uint64_t t169 = UINT64_MAX;

    t169 = (x765|(x766>(x767+x768)));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x769 = INT32_MAX;
	volatile int16_t x770 = 2;
	static int8_t x772 = 0;
	int32_t t170 = INT32_MAX;

    t170 = (x769|(x770>(x771+x772)));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x773 = 39U;
	uint8_t x774 = 24U;
	uint16_t x775 = UINT16_MAX;
	uint64_t x776 = 20158LLU;
	volatile int32_t t171 = -71;

    t171 = (x773|(x774>(x775+x776)));

    if (t171 != 39) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x777 = 4;
	int16_t x778 = INT16_MIN;
	uint8_t x779 = 13U;
	int64_t x780 = -19496595707926LL;
	int32_t t172 = -5;

    t172 = (x777|(x778>(x779+x780)));

    if (t172 != 5) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x781 = INT8_MIN;
	int32_t x782 = 1243;
	uint16_t x783 = 12425U;
	int32_t x784 = INT32_MIN;
	int32_t t173 = -54676;

    t173 = (x781|(x782>(x783+x784)));

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x785 = -63527936;
	int8_t x786 = INT8_MIN;
	static volatile uint32_t x787 = 1007066U;
	static int16_t x788 = 0;
	volatile int32_t t174 = 1895907;

    t174 = (x785|(x786>(x787+x788)));

    if (t174 != -63527935) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x789 = UINT64_MAX;
	int64_t x791 = -22714538537148LL;
	uint8_t x792 = 12U;
	uint64_t t175 = UINT64_MAX;

    t175 = (x789|(x790>(x791+x792)));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x793 = -1958;
	int16_t x794 = INT16_MAX;
	int32_t x795 = INT32_MIN;
	volatile uint16_t x796 = 26U;
	int32_t t176 = -1;

    t176 = (x793|(x794>(x795+x796)));

    if (t176 != -1957) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x797 = INT8_MAX;
	uint8_t x798 = 6U;
	int32_t x799 = INT32_MIN;
	volatile int64_t x800 = -126546607990054LL;
	volatile int32_t t177 = 1;

    t177 = (x797|(x798>(x799+x800)));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x805 = 7897107430LL;
	static uint8_t x806 = 0U;
	int16_t x807 = -429;
	uint16_t x808 = 8987U;
	int64_t t178 = -19796521120305LL;

    t178 = (x805|(x806>(x807+x808)));

    if (t178 != 7897107430LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x809 = -1;
	uint64_t x811 = 24208404196LLU;
	uint16_t x812 = UINT16_MAX;
	int32_t t179 = -1002;

    t179 = (x809|(x810>(x811+x812)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x814 = INT16_MIN;
	int32_t x815 = 1;
	static volatile int64_t x816 = -1LL;
	static volatile int32_t t180 = -381655;

    t180 = (x813|(x814>(x815+x816)));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x817 = 5634872872921868LL;
	int8_t x819 = 1;
	volatile int32_t x820 = -1;
	int64_t t181 = -195424736991983LL;

    t181 = (x817|(x818>(x819+x820)));

    if (t181 != 5634872872921868LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x821 = -1LL;
	int8_t x822 = -1;
	int16_t x823 = INT16_MIN;

    t182 = (x821|(x822>(x823+x824)));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x826 = UINT8_MAX;
	int8_t x827 = -1;

    t183 = (x825|(x826>(x827+x828)));

    if (t183 != 87) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x829 = UINT8_MAX;
	uint32_t x830 = 18U;
	int64_t x832 = INT64_MAX;
	int32_t t184 = 164;

    t184 = (x829|(x830>(x831+x832)));

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x833 = 632197026LLU;
	int64_t x834 = INT64_MAX;
	static uint16_t x836 = 57U;
	static uint64_t t185 = 9697728046966572LLU;

    t185 = (x833|(x834>(x835+x836)));

    if (t185 != 632197027LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x837 = 1U;
	uint32_t x838 = UINT32_MAX;
	uint8_t x840 = 8U;
	int32_t t186 = 190457;

    t186 = (x837|(x838>(x839+x840)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x841 = -1LL;
	uint16_t x842 = 10U;
	uint64_t x843 = 1749813417494381011LLU;
	uint32_t x844 = 94814570U;
	int64_t t187 = -11957347LL;

    t187 = (x841|(x842>(x843+x844)));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x845 = INT8_MIN;
	static int64_t x846 = -1LL;
	int32_t x847 = 1;
	volatile int32_t t188 = 25;

    t188 = (x845|(x846>(x847+x848)));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x849 = UINT8_MAX;
	int16_t x850 = -1;
	volatile uint64_t x851 = 169687942396285927LLU;
	uint32_t x852 = UINT32_MAX;
	static volatile int32_t t189 = -129485;

    t189 = (x849|(x850>(x851+x852)));

    if (t189 != 255) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x853 = INT32_MIN;
	static uint16_t x854 = 3U;
	volatile int32_t x855 = INT32_MIN;
	static volatile int8_t x856 = INT8_MAX;
	int32_t t190 = 1;

    t190 = (x853|(x854>(x855+x856)));

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x857 = -54762;
	int64_t x858 = -4216806952166015743LL;
	int16_t x859 = INT16_MAX;
	static int8_t x860 = INT8_MAX;
	static int32_t t191 = 1233;

    t191 = (x857|(x858>(x859+x860)));

    if (t191 != -54762) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	uint64_t x863 = 53173691023036LLU;
	static int64_t x864 = INT64_MIN;
	volatile int32_t t192 = 7897881;

    t192 = (x861|(x862>(x863+x864)));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x865 = INT8_MAX;
	uint16_t x866 = 0U;
	int64_t x868 = INT64_MAX;
	int32_t t193 = -675484984;

    t193 = (x865|(x866>(x867+x868)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x869 = -797268;
	int8_t x870 = 1;
	uint64_t x871 = 7243932580283158267LLU;
	uint32_t x872 = 4247240U;

    t194 = (x869|(x870>(x871+x872)));

    if (t194 != -797268) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x873 = 1179U;
	int16_t x874 = 9;
	static uint32_t t195 = 1602U;

    t195 = (x873|(x874>(x875+x876)));

    if (t195 != 1179U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x877 = UINT64_MAX;
	int32_t x878 = -1102;
	static int32_t x879 = INT32_MIN;
	volatile uint8_t x880 = UINT8_MAX;
	static uint64_t t196 = UINT64_MAX;

    t196 = (x877|(x878>(x879+x880)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x885 = INT32_MAX;
	uint32_t x886 = UINT32_MAX;
	int8_t x887 = 7;
	uint32_t x888 = UINT32_MAX;
	int32_t t197 = INT32_MAX;

    t197 = (x885|(x886>(x887+x888)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x889 = 1;
	volatile int32_t x890 = INT32_MIN;
	volatile int32_t x891 = INT32_MAX;
	int64_t x892 = -1LL;
	int32_t t198 = 95760347;

    t198 = (x889|(x890>(x891+x892)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x893 = 438315614718459LL;
	uint64_t x894 = 36087704LLU;
	uint16_t x895 = 20931U;
	static int16_t x896 = 1;
	volatile int64_t t199 = -27239951216LL;

    t199 = (x893|(x894>(x895+x896)));

    if (t199 != 438315614718459LL) { NG(); } else { ; }
	
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

